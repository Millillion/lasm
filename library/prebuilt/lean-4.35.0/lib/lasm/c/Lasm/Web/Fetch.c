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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value)} };
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(lean_object* v___x_670_, uint8_t v___x_671_, lean_object* v___f_672_, lean_object* v_a_673_, uint32_t v_op_674_, uint64_t v_flags_675_, lean_object* v_payload_676_, lean_object* v_x_677_){
_start:
{
lean_object* v_val_680_; 
if (lean_obj_tag(v_x_677_) == 0)
{
lean_object* v___x_683_; 
lean_dec_ref(v___f_672_);
lean_dec(v___x_670_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v_x_677_);
return v___x_683_;
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_698_; 
v_a_684_ = lean_ctor_get(v_x_677_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_x_677_);
if (v_isSharedCheck_698_ == 0)
{
v___x_686_ = v_x_677_;
v_isShared_687_ = v_isSharedCheck_698_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v_x_677_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_698_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
uint32_t v___x_688_; lean_object* v___x_689_; 
v___x_688_ = 0;
v___x_689_ = lasm_js_call_into(v_a_673_, v_op_674_, v___x_688_, v_flags_675_, v_a_684_, v_payload_676_);
lean_dec(v_a_684_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v_a_690_);
v___x_692_ = v___x_686_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
v_val_680_ = v___x_692_;
goto v___jp_679_;
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; 
v_a_694_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_689_, 1);
if (v_isShared_687_ == 0)
{
lean_ctor_set_tag(v___x_686_, 0);
lean_ctor_set(v___x_686_, 0, v_a_694_);
v___x_696_ = v___x_686_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
v_val_680_ = v___x_696_;
goto v___jp_679_;
}
}
}
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v_val_680_);
v___x_682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_670_, v___x_671_, v___x_681_, v___f_672_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed(lean_object* v___x_699_, lean_object* v___x_700_, lean_object* v___f_701_, lean_object* v_a_702_, lean_object* v_op_703_, lean_object* v_flags_704_, lean_object* v_payload_705_, lean_object* v_x_706_, lean_object* v___y_707_){
_start:
{
uint8_t v___x_1507__boxed_708_; uint32_t v_op_boxed_709_; uint64_t v_flags_boxed_710_; lean_object* v_res_711_; 
v___x_1507__boxed_708_ = lean_unbox(v___x_700_);
v_op_boxed_709_ = lean_unbox_uint32(v_op_703_);
lean_dec(v_op_703_);
v_flags_boxed_710_ = lean_unbox_uint64(v_flags_704_);
lean_dec_ref(v_flags_704_);
v_res_711_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(v___x_699_, v___x_1507__boxed_708_, v___f_701_, v_a_702_, v_op_boxed_709_, v_flags_boxed_710_, v_payload_705_, v_x_706_);
lean_dec(v_payload_705_);
lean_dec(v_a_702_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7(lean_object* v___f_712_, lean_object* v_a_713_, uint32_t v_op_714_, uint64_t v_flags_715_, lean_object* v_payload_716_, lean_object* v_x_717_){
_start:
{
if (lean_obj_tag(v_x_717_) == 0)
{
lean_object* v___x_719_; 
lean_dec_ref(v___f_712_);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v_x_717_);
return v___x_719_;
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_740_; 
v_a_720_ = lean_ctor_get(v_x_717_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v_x_717_);
if (v_isSharedCheck_740_ == 0)
{
v___x_722_ = v_x_717_;
v_isShared_723_ = v_isSharedCheck_740_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v_x_717_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_740_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
uint32_t v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; lean_object* v_val_728_; lean_object* v___x_731_; 
v___x_724_ = 0;
v___x_725_ = lean_unsigned_to_nat(0u);
v___x_726_ = 0;
v___x_731_ = lasm_js_call_into(v_a_713_, v_op_714_, v___x_724_, v_flags_715_, v_a_720_, v_payload_716_);
lean_dec(v_a_720_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_734_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v_a_732_);
v___x_734_ = v___x_722_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
v_val_728_ = v___x_734_;
goto v___jp_727_;
}
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; 
v_a_736_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_736_);
lean_dec_ref_known(v___x_731_, 1);
if (v_isShared_723_ == 0)
{
lean_ctor_set_tag(v___x_722_, 0);
lean_ctor_set(v___x_722_, 0, v_a_736_);
v___x_738_ = v___x_722_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_736_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_val_728_ = v___x_738_;
goto v___jp_727_;
}
}
v___jp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v_val_728_);
v___x_730_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_725_, v___x_726_, v___x_729_, v___f_712_);
return v___x_730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed(lean_object* v___f_741_, lean_object* v_a_742_, lean_object* v_op_743_, lean_object* v_flags_744_, lean_object* v_payload_745_, lean_object* v_x_746_, lean_object* v___y_747_){
_start:
{
uint32_t v_op_boxed_748_; uint64_t v_flags_boxed_749_; lean_object* v_res_750_; 
v_op_boxed_748_ = lean_unbox_uint32(v_op_743_);
lean_dec(v_op_743_);
v_flags_boxed_749_ = lean_unbox_uint64(v_flags_744_);
lean_dec_ref(v_flags_744_);
v_res_750_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7(v___f_741_, v_a_742_, v_op_boxed_748_, v_flags_boxed_749_, v_payload_745_, v_x_746_);
lean_dec(v_payload_745_);
lean_dec(v_a_742_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(lean_object* v_a_751_, lean_object* v_x_752_){
_start:
{
if (lean_obj_tag(v_x_752_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_762_; 
v_a_754_ = lean_ctor_get(v_x_752_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_752_);
if (v_isSharedCheck_762_ == 0)
{
v___x_756_ = v_x_752_;
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v_x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_761_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
}
else
{
lean_object* v___x_763_; 
lean_dec_ref_known(v_x_752_, 1);
v___x_763_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_751_);
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed(lean_object* v_a_764_, lean_object* v_x_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(v_a_764_, v_x_765_);
lean_dec(v_a_764_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_768_, uint32_t v_op_769_, uint64_t v_flags_770_, lean_object* v_payload_771_, lean_object* v___f_772_, lean_object* v___f_773_, lean_object* v___f_774_, lean_object* v_x_775_){
_start:
{
if (lean_obj_tag(v_x_775_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_785_; 
lean_dec_ref(v___f_774_);
lean_dec_ref(v___f_773_);
lean_dec_ref(v___f_772_);
lean_dec(v_payload_771_);
v_a_777_ = lean_ctor_get(v_x_775_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v_x_775_);
if (v_isSharedCheck_785_ == 0)
{
v___x_779_ = v_x_775_;
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v_x_775_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_784_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_783_; 
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
return v___x_783_;
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_832_; 
v_a_786_ = lean_ctor_get(v_x_775_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v_x_775_);
if (v_isSharedCheck_832_ == 0)
{
v___x_788_ = v_x_775_;
v_isShared_789_ = v_isSharedCheck_832_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v_x_775_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_832_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_790_ = lean_string_utf8_byte_size(v_failurePrefix_768_);
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_nat_dec_eq(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___f_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___f_797_; lean_object* v_val_799_; lean_object* v___x_804_; 
lean_dec_ref(v___f_774_);
lean_inc(v_a_786_);
v___f_793_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_793_, 0, v_a_786_);
v___x_794_ = lean_box(v___x_792_);
v___x_795_ = lean_box_uint32(v_op_769_);
v___x_796_ = lean_box_uint64(v_flags_770_);
lean_inc(v_payload_771_);
v___f_797_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_797_, 0, v___x_791_);
lean_closure_set(v___f_797_, 1, v___x_794_);
lean_closure_set(v___f_797_, 2, v___f_793_);
lean_closure_set(v___f_797_, 3, v_a_786_);
lean_closure_set(v___f_797_, 4, v___x_795_);
lean_closure_set(v___f_797_, 5, v___x_796_);
lean_closure_set(v___f_797_, 6, v_payload_771_);
v___x_804_ = l_Lasm_JS_Wire_encodeIO(v_payload_771_);
lean_dec(v_payload_771_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 0, v_a_805_);
v___x_807_ = v___x_788_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
v_val_799_ = v___x_807_;
goto v___jp_798_;
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; 
v_a_809_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_804_, 1);
if (v_isShared_789_ == 0)
{
lean_ctor_set_tag(v___x_788_, 0);
lean_ctor_set(v___x_788_, 0, v_a_809_);
v___x_811_ = v___x_788_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
v_val_799_ = v___x_811_;
goto v___jp_798_;
}
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_val_799_);
v___x_801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_792_, v___x_800_, v___f_797_);
v___x_802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_792_, v___x_801_, v___f_772_);
v___x_803_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_792_, v___x_802_, v___f_773_);
return v___x_803_;
}
}
else
{
lean_object* v___f_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___f_816_; uint8_t v___x_817_; lean_object* v_val_819_; lean_object* v___x_823_; 
lean_dec_ref(v___f_773_);
lean_dec_ref(v___f_772_);
lean_inc(v_a_786_);
v___f_813_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_813_, 0, v_a_786_);
v___x_814_ = lean_box_uint32(v_op_769_);
v___x_815_ = lean_box_uint64(v_flags_770_);
lean_inc(v_payload_771_);
v___f_816_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_816_, 0, v___f_813_);
lean_closure_set(v___f_816_, 1, v_a_786_);
lean_closure_set(v___f_816_, 2, v___x_814_);
lean_closure_set(v___f_816_, 3, v___x_815_);
lean_closure_set(v___f_816_, 4, v_payload_771_);
v___x_817_ = 0;
v___x_823_ = l_Lasm_JS_Wire_encodeIO(v_payload_771_);
lean_dec(v_payload_771_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 0, v_a_824_);
v___x_826_ = v___x_788_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
v_val_819_ = v___x_826_;
goto v___jp_818_;
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; 
v_a_828_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_823_, 1);
if (v_isShared_789_ == 0)
{
lean_ctor_set_tag(v___x_788_, 0);
lean_ctor_set(v___x_788_, 0, v_a_828_);
v___x_830_ = v___x_788_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
v_val_819_ = v___x_830_;
goto v___jp_818_;
}
}
v___jp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v_val_819_);
v___x_821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_817_, v___x_820_, v___f_816_);
v___x_822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_817_, v___x_821_, v___f_774_);
return v___x_822_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_833_, lean_object* v_op_834_, lean_object* v_flags_835_, lean_object* v_payload_836_, lean_object* v___f_837_, lean_object* v___f_838_, lean_object* v___f_839_, lean_object* v_x_840_, lean_object* v___y_841_){
_start:
{
uint32_t v_op_boxed_842_; uint64_t v_flags_boxed_843_; lean_object* v_res_844_; 
v_op_boxed_842_ = lean_unbox_uint32(v_op_834_);
lean_dec(v_op_834_);
v_flags_boxed_843_ = lean_unbox_uint64(v_flags_835_);
lean_dec_ref(v_flags_835_);
v_res_844_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(v_failurePrefix_833_, v_op_boxed_842_, v_flags_boxed_843_, v_payload_836_, v___f_837_, v___f_838_, v___f_839_, v_x_840_);
lean_dec_ref(v_failurePrefix_833_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(lean_object* v___f_845_, lean_object* v_x_846_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed(lean_object* v___f_859_, lean_object* v_x_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(v___f_859_, v_x_860_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8(lean_object* v___f_863_, lean_object* v_x_864_){
_start:
{
if (lean_obj_tag(v_x_864_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
lean_dec_ref(v___f_863_);
v_a_866_ = lean_ctor_get(v_x_864_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v_x_864_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v_x_864_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v_x_864_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_873_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
}
else
{
lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_886_; 
v_isSharedCheck_886_ = !lean_is_exclusive(v_x_864_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v_x_864_, 0);
lean_dec(v_unused_887_);
v___x_876_ = v_x_864_;
v_isShared_877_ = v_isSharedCheck_886_;
goto v_resetjp_875_;
}
else
{
lean_dec(v_x_864_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_886_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = 0;
v___x_880_ = lean_io_promise_new();
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_880_);
v___x_882_ = v___x_876_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_885_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
v___x_884_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_878_, v___x_879_, v___x_883_, v___f_863_);
return v___x_884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8___boxed(lean_object* v___f_888_, lean_object* v_x_889_, lean_object* v___y_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8(v___f_888_, v_x_889_);
return v_res_891_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_897_ = lean_string_utf8_byte_size(v___x_896_);
return v___x_897_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4);
v___x_900_ = lean_nat_dec_eq(v___x_899_, v___x_898_);
return v___x_900_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_905_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__9));
v___x_906_ = lean_unsigned_to_nat(46u);
v___x_907_ = lean_unsigned_to_nat(193u);
v___x_908_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v___x_909_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7));
v___x_910_ = l_mkPanicMessageWithDecl(v___x_909_, v___x_908_, v___x_907_, v___x_906_, v___x_905_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(lean_object* v_context_912_, lean_object* v_d_913_){
_start:
{
lean_object* v___y_916_; lean_object* v___y_917_; 
if (lean_obj_tag(v_d_913_) == 9)
{
lean_object* v_value_921_; lean_object* v___x_922_; 
v_value_921_ = lean_ctor_get(v_d_913_, 0);
lean_inc(v_value_921_);
lean_dec_ref_known(v_d_913_, 2);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v_value_921_);
return v___x_922_;
}
else
{
lean_object* v___x_923_; lean_object* v_received_925_; 
v___x_923_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_913_) == 9)
{
lean_object* v_value_939_; lean_object* v_description_940_; uint8_t v___x_941_; 
v_value_939_ = lean_ctor_get(v_d_913_, 0);
v_description_940_ = lean_ctor_get(v_d_913_, 1);
v___x_941_ = lean_string_dec_eq(v_description_940_, v___x_923_);
if (v___x_941_ == 0)
{
goto v___jp_937_;
}
else
{
uint32_t v___x_942_; uint64_t v___x_943_; lean_object* v___x_944_; uint32_t v___x_945_; lean_object* v___x_946_; 
lean_inc_n(v_value_939_, 2);
lean_dec_ref_known(v_d_913_, 2);
v___x_942_ = 206;
v___x_943_ = 0ULL;
v___x_944_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_944_, 0, v_value_939_);
lean_ctor_set(v___x_944_, 1, v___x_923_);
v___x_945_ = lasm_js_value_handle(v_value_939_);
lean_dec(v_value_939_);
v___x_946_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_942_, v___x_943_, v___x_944_, v___x_945_);
lean_dec_ref_known(v___x_944_, 2);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; uint8_t v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = lean_string_validate_utf8(v_a_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec(v_a_947_);
v___x_949_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_950_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_949_);
v_received_925_ = v___x_950_;
goto v___jp_924_;
}
else
{
lean_object* v___x_951_; 
v___x_951_ = lean_string_from_utf8_unchecked(v_a_947_);
v_received_925_ = v___x_951_;
goto v___jp_924_;
}
}
else
{
lean_object* v___x_952_; 
lean_dec_ref_known(v___x_946_, 1);
v___x_952_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_925_ = v___x_952_;
goto v___jp_924_;
}
}
}
else
{
goto v___jp_937_;
}
v___jp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_927_ = lean_string_append(v___x_926_, v_context_912_);
v___x_928_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_929_ = lean_string_append(v___x_927_, v___x_928_);
v___x_930_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2));
v___x_931_ = lean_string_append(v___x_929_, v___x_930_);
v___x_932_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_933_ = lean_string_append(v___x_931_, v___x_932_);
v___x_934_ = lean_string_append(v___x_933_, v_received_925_);
lean_dec_ref(v_received_925_);
v___x_935_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; 
v___x_936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_916_ = v___x_934_;
v___y_917_ = v___x_936_;
goto v___jp_915_;
}
else
{
v___y_916_ = v___x_934_;
v___y_917_ = v___x_923_;
goto v___jp_915_;
}
}
v___jp_937_:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lasm_JS_Data_describe(v_d_913_);
v_received_925_ = v___x_938_;
goto v___jp_924_;
}
}
v___jp_915_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_string_append(v___y_916_, v___y_917_);
v___x_919_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
v___x_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___boxed(lean_object* v_context_953_, lean_object* v_d_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_953_, v_d_954_);
lean_dec_ref(v_context_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(lean_object* v_context_957_, lean_object* v_x_958_){
_start:
{
lean_object* v_val_961_; 
if (lean_obj_tag(v_x_958_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_971_; 
v_a_963_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_971_ == 0)
{
v___x_965_ = v_x_958_;
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v_x_958_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_970_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_969_; 
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_985_; 
v_a_972_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_985_ == 0)
{
v___x_974_ = v_x_958_;
v_isShared_975_ = v_isSharedCheck_985_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v_x_958_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_985_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; 
v___x_976_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_957_, v_a_972_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_979_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v_a_977_);
v___x_979_ = v___x_974_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_977_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
v_val_961_ = v___x_979_;
goto v___jp_960_;
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; 
v_a_981_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_976_, 1);
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 0);
lean_ctor_set(v___x_974_, 0, v_a_981_);
v___x_983_ = v___x_974_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
v_val_961_ = v___x_983_;
goto v___jp_960_;
}
}
}
}
v___jp_960_:
{
lean_object* v___x_962_; 
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v_val_961_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed(lean_object* v_context_986_, lean_object* v_x_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(v_context_986_, v_x_987_);
lean_dec_ref(v_context_986_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_990_, lean_object* v_x_991_){
_start:
{
if (lean_obj_tag(v_x_991_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1004_; 
v_a_993_ = lean_ctor_get(v_x_991_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_x_991_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_995_ = v_x_991_;
v_isShared_996_ = v_isSharedCheck_1004_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v_x_991_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1004_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_997_ = lean_io_error_to_string(v_a_993_);
v___x_998_ = lean_string_append(v_failurePrefix_990_, v___x_997_);
lean_dec_ref(v___x_997_);
v___x_999_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_999_);
v___x_1001_ = v___x_995_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
}
else
{
lean_object* v___x_1005_; 
lean_dec_ref(v_failurePrefix_990_);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_x_991_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1006_, lean_object* v_x_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(v_failurePrefix_1006_, v_x_1007_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(lean_object* v___f_1010_, lean_object* v_bytes_1011_){
_start:
{
lean_object* v___x_1013_; uint8_t v___x_1014_; lean_object* v_val_1016_; lean_object* v___x_1019_; 
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = 0;
v___x_1019_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1011_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 1);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
v_val_1016_ = v___x_1025_;
goto v___jp_1015_;
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
v_a_1028_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1019_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1019_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 0);
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
v_val_1016_ = v___x_1033_;
goto v___jp_1015_;
}
}
}
v___jp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_val_1016_);
v___x_1018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1013_, v___x_1014_, v___x_1017_, v___f_1010_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed(lean_object* v___f_1036_, lean_object* v_bytes_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(v___f_1036_, v_bytes_1037_);
lean_dec_ref(v_bytes_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(lean_object* v_context_1040_, uint32_t v_op_1041_, uint64_t v_flags_1042_, lean_object* v_payload_1043_, lean_object* v_failurePrefix_1044_){
_start:
{
lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___f_1048_; lean_object* v___f_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; lean_object* v_val_1057_; lean_object* v___x_1060_; 
v___f_1046_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1046_, 0, v_context_1040_);
v___f_1047_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1047_, 0, v___f_1046_);
v___f_1048_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1048_, 0, v___f_1047_);
lean_inc_ref(v_failurePrefix_1044_);
v___f_1049_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1049_, 0, v_failurePrefix_1044_);
v___x_1050_ = lean_box_uint32(v_op_1041_);
v___x_1051_ = lean_box_uint64(v_flags_1042_);
lean_inc_ref(v___f_1048_);
v___f_1052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1052_, 0, v_failurePrefix_1044_);
lean_closure_set(v___f_1052_, 1, v___x_1050_);
lean_closure_set(v___f_1052_, 2, v___x_1051_);
lean_closure_set(v___f_1052_, 3, v_payload_1043_);
lean_closure_set(v___f_1052_, 4, v___f_1049_);
lean_closure_set(v___f_1052_, 5, v___f_1048_);
lean_closure_set(v___f_1052_, 6, v___f_1048_);
v___f_1053_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1053_, 0, v___f_1052_);
v___x_1054_ = lean_unsigned_to_nat(0u);
v___x_1055_ = 0;
v___x_1060_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
v_val_1057_ = v___x_1066_;
goto v___jp_1056_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1060_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1060_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 0);
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
v_val_1057_ = v___x_1074_;
goto v___jp_1056_;
}
}
}
v___jp_1056_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v_val_1057_);
v___x_1059_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1054_, v___x_1055_, v___x_1058_, v___f_1053_);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___boxed(lean_object* v_context_1077_, lean_object* v_op_1078_, lean_object* v_flags_1079_, lean_object* v_payload_1080_, lean_object* v_failurePrefix_1081_, lean_object* v_a_1082_){
_start:
{
uint32_t v_op_boxed_1083_; uint64_t v_flags_boxed_1084_; lean_object* v_res_1085_; 
v_op_boxed_1083_ = lean_unbox_uint32(v_op_1078_);
lean_dec(v_op_1078_);
v_flags_boxed_1084_ = lean_unbox_uint64(v_flags_1079_);
lean_dec_ref(v_flags_1079_);
v_res_1085_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v_context_1077_, v_op_boxed_1083_, v_flags_boxed_1084_, v_payload_1080_, v_failurePrefix_1081_);
return v_res_1085_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0(void){
_start:
{
uint8_t v___x_1086_; uint64_t v___x_1087_; 
v___x_1086_ = 1;
v___x_1087_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(lean_object* v_b_1089_, lean_object* v_args_1090_){
_start:
{
uint8_t v_construct_1092_; lean_object* v___x_1093_; uint32_t v___x_1094_; uint64_t v___x_1095_; uint64_t v___y_1097_; 
v_construct_1092_ = lean_ctor_get_uint8(v_b_1089_, sizeof(void*)*4);
v___x_1093_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1089_);
v___x_1094_ = 214;
v___x_1095_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_construct_1092_ == 0)
{
uint64_t v___x_1105_; 
v___x_1105_ = 0ULL;
v___y_1097_ = v___x_1105_;
goto v___jp_1096_;
}
else
{
uint64_t v___x_1106_; 
v___x_1106_ = 4ULL;
v___y_1097_ = v___x_1106_;
goto v___jp_1096_;
}
v___jp_1096_:
{
uint64_t v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1098_ = lean_uint64_lor(v___x_1095_, v___y_1097_);
v___x_1099_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1089_, v_args_1090_);
v___x_1100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1101_ = lean_string_append(v___x_1100_, v___x_1093_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1103_ = lean_string_append(v___x_1101_, v___x_1102_);
v___x_1104_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v___x_1093_, v___x_1094_, v___x_1098_, v___x_1099_, v___x_1103_);
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___boxed(lean_object* v_b_1107_, lean_object* v_args_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v_b_1107_, v_args_1108_);
lean_dec_ref(v_b_1107_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(size_t v_sz_1111_, size_t v_i_1112_, lean_object* v_bs_1113_){
_start:
{
uint8_t v___x_1114_; 
v___x_1114_ = lean_usize_dec_lt(v_i_1112_, v_sz_1111_);
if (v___x_1114_ == 0)
{
return v_bs_1113_;
}
else
{
lean_object* v_v_1115_; lean_object* v_fst_1116_; lean_object* v_snd_1117_; lean_object* v___x_1118_; lean_object* v_bs_x27_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; size_t v___x_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
v_v_1115_ = lean_array_uget_borrowed(v_bs_1113_, v_i_1112_);
v_fst_1116_ = lean_ctor_get(v_v_1115_, 0);
lean_inc(v_fst_1116_);
v_snd_1117_ = lean_ctor_get(v_v_1115_, 1);
lean_inc(v_snd_1117_);
v___x_1118_ = lean_unsigned_to_nat(0u);
v_bs_x27_1119_ = lean_array_uset(v_bs_1113_, v_i_1112_, v___x_1118_);
v___x_1120_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1120_, 0, v_fst_1116_);
v___x_1121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1121_, 0, v_snd_1117_);
v___x_1122_ = lean_unsigned_to_nat(2u);
v___x_1123_ = lean_mk_empty_array_with_capacity(v___x_1122_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1120_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1121_);
v___x_1126_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
v___x_1127_ = ((size_t)1ULL);
v___x_1128_ = lean_usize_add(v_i_1112_, v___x_1127_);
v___x_1129_ = lean_array_uset(v_bs_x27_1119_, v_i_1112_, v___x_1126_);
v_i_1112_ = v___x_1128_;
v_bs_1113_ = v___x_1129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0___boxed(lean_object* v_sz_1131_, lean_object* v_i_1132_, lean_object* v_bs_1133_){
_start:
{
size_t v_sz_boxed_1134_; size_t v_i_boxed_1135_; lean_object* v_res_1136_; 
v_sz_boxed_1134_ = lean_unbox_usize(v_sz_1131_);
lean_dec(v_sz_1131_);
v_i_boxed_1135_ = lean_unbox_usize(v_i_1132_);
lean_dec(v_i_1132_);
v_res_1136_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_boxed_1134_, v_i_boxed_1135_, v_bs_1133_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch(lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v___x_1149_; lean_object* v_method_1150_; lean_object* v_headers_1151_; lean_object* v_body_1152_; lean_object* v_credentials_1153_; lean_object* v_mode_1154_; lean_object* v_cache_1155_; lean_object* v_redirect_1156_; lean_object* v_signal_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1207_; 
v___x_1149_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__2));
v_method_1150_ = lean_ctor_get(v_a_1147_, 0);
lean_inc_ref(v_method_1150_);
v_headers_1151_ = lean_ctor_get(v_a_1147_, 1);
lean_inc_ref(v_headers_1151_);
v_body_1152_ = lean_ctor_get(v_a_1147_, 2);
lean_inc(v_body_1152_);
v_credentials_1153_ = lean_ctor_get(v_a_1147_, 3);
lean_inc_ref(v_credentials_1153_);
v_mode_1154_ = lean_ctor_get(v_a_1147_, 4);
lean_inc_ref(v_mode_1154_);
v_cache_1155_ = lean_ctor_get(v_a_1147_, 5);
lean_inc_ref(v_cache_1155_);
v_redirect_1156_ = lean_ctor_get(v_a_1147_, 6);
lean_inc_ref(v_redirect_1156_);
v_signal_1157_ = lean_ctor_get(v_a_1147_, 7);
lean_inc(v_signal_1157_);
lean_dec_ref(v_a_1147_);
v___x_1158_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_a_1146_);
v___x_1160_ = lean_array_push(v___x_1158_, v___x_1159_);
if (lean_obj_tag(v_body_1152_) == 3)
{
uint8_t v___x_1245_; 
v___x_1245_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_1151_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__20));
v___x_1247_ = lean_array_push(v_headers_1151_, v___x_1246_);
v___y_1207_ = v___x_1247_;
goto v___jp_1206_;
}
else
{
v___y_1207_ = v_headers_1151_;
goto v___jp_1206_;
}
}
else
{
v___y_1207_ = v_headers_1151_;
goto v___jp_1206_;
}
v___jp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1164_ = l_List_appendTR___redArg(v___y_1162_, v___y_1163_);
v___x_1165_ = l_Lasm_JS_obj(v___x_1164_);
v___x_1166_ = lean_array_push(v___x_1160_, v___x_1165_);
v___x_1167_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v___x_1149_, v___x_1166_);
return v___x_1167_;
}
v___jp_1168_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; size_t v_sz_1175_; size_t v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1171_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__0));
v___x_1172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1172_, 0, v_method_1150_);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v_sz_1175_ = lean_array_size(v___y_1169_);
v___x_1176_ = ((size_t)0ULL);
v___x_1177_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_1175_, v___x_1176_, v___y_1169_);
v___x_1178_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1174_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__12));
v___x_1181_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1181_, 0, v_credentials_1153_);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1180_);
lean_ctor_set(v___x_1182_, 1, v___x_1181_);
v___x_1183_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__13));
v___x_1184_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1184_, 0, v_mode_1154_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__14));
v___x_1187_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_cache_1155_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__15));
v___x_1190_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1190_, 0, v_redirect_1156_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = lean_box(0);
v___x_1193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1188_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1185_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
v___x_1196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1182_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1179_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1173_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = l_List_appendTR___redArg(v___x_1198_, v___y_1170_);
if (lean_obj_tag(v_signal_1157_) == 0)
{
v___y_1162_ = v___x_1199_;
v___y_1163_ = v___x_1192_;
goto v___jp_1161_;
}
else
{
lean_object* v_val_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v_val_1200_ = lean_ctor_get(v_signal_1157_, 0);
lean_inc(v_val_1200_);
lean_dec_ref_known(v_signal_1157_, 1);
v___x_1201_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__16));
v___x_1202_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1203_, 0, v_val_1200_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
v___x_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1201_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1192_);
v___y_1162_ = v___x_1199_;
v___y_1163_ = v___x_1205_;
goto v___jp_1161_;
}
}
v___jp_1206_:
{
switch(lean_obj_tag(v_body_1152_))
{
case 0:
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_box(0);
v___y_1169_ = v___y_1207_;
v___y_1170_ = v___x_1208_;
goto v___jp_1168_;
}
case 1:
{
lean_object* v_text_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1220_; 
v_text_1209_ = lean_ctor_get(v_body_1152_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_body_1152_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1211_ = v_body_1152_;
v_isShared_1212_ = v_isSharedCheck_1220_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_text_1209_);
lean_dec(v_body_1152_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1220_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1213_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1212_ == 0)
{
lean_ctor_set_tag(v___x_1211_, 4);
v___x_1215_ = v___x_1211_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_text_1209_);
v___x_1215_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1213_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = lean_box(0);
v___x_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___y_1169_ = v___y_1207_;
v___y_1170_ = v___x_1218_;
goto v___jp_1168_;
}
}
}
case 2:
{
lean_object* v_bytes_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1232_; 
v_bytes_1221_ = lean_ctor_get(v_body_1152_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_body_1152_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1223_ = v_body_1152_;
v_isShared_1224_ = v_isSharedCheck_1232_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_bytes_1221_);
lean_dec(v_body_1152_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1232_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1225_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1224_ == 0)
{
lean_ctor_set_tag(v___x_1223_, 6);
v___x_1227_ = v___x_1223_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_bytes_1221_);
v___x_1227_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1225_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = lean_box(0);
v___x_1230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
v___y_1169_ = v___y_1207_;
v___y_1170_ = v___x_1230_;
goto v___jp_1168_;
}
}
}
case 3:
{
lean_object* v_value_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_value_1233_ = lean_ctor_get(v_body_1152_, 0);
lean_inc(v_value_1233_);
lean_dec_ref_known(v_body_1152_, 1);
v___x_1234_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__18));
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
lean_ctor_set(v___x_1235_, 1, v_value_1233_);
v___x_1236_ = lean_box(0);
v___x_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___y_1169_ = v___y_1207_;
v___y_1170_ = v___x_1237_;
goto v___jp_1168_;
}
default: 
{
lean_object* v_data_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_data_1238_ = lean_ctor_get(v_body_1152_, 0);
lean_inc(v_data_1238_);
lean_dec(v_body_1152_);
v___x_1239_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
v___x_1240_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1241_, 0, v_data_1238_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1239_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_box(0);
v___x_1244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1242_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___y_1169_ = v___y_1207_;
v___y_1170_ = v___x_1244_;
goto v___jp_1168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch___boxed(lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lasm_Web_Raw_fetch(v_a_1248_, v_a_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(lean_object* v_d_1259_, lean_object* v_key_1260_){
_start:
{
if (lean_obj_tag(v_d_1259_) == 8)
{
lean_object* v___x_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1289_; 
v___x_1261_ = l_Lasm_JS_Data_field(v_d_1259_, v_key_1260_);
v_isSharedCheck_1289_ = !lean_is_exclusive(v_d_1259_);
if (v_isSharedCheck_1289_ == 0)
{
lean_object* v_unused_1290_; 
v_unused_1290_ = lean_ctor_get(v_d_1259_, 0);
lean_dec(v_unused_1290_);
v___x_1263_ = v_d_1259_;
v_isShared_1264_ = v_isSharedCheck_1289_;
goto v_resetjp_1262_;
}
else
{
lean_dec(v_d_1259_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1289_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
if (lean_obj_tag(v___x_1261_) == 2)
{
uint8_t v_b_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v_b_1265_ = lean_ctor_get_uint8(v___x_1261_, 0);
lean_dec_ref_known(v___x_1261_, 0);
v___x_1266_ = lean_box(v_b_1265_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 1);
lean_ctor_set(v___x_1263_, 0, v___x_1266_);
v___x_1268_ = v___x_1263_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1270_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1271_ = lean_string_append(v___x_1270_, v_key_1260_);
v___x_1272_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1273_ = lean_string_append(v___x_1271_, v___x_1272_);
v___x_1274_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_1275_ = lean_string_append(v___x_1273_, v___x_1274_);
v___x_1276_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1277_ = lean_string_append(v___x_1275_, v___x_1276_);
v___x_1278_ = l_Lasm_JS_Data_describe(v___x_1261_);
v___x_1279_ = lean_string_append(v___x_1277_, v___x_1278_);
lean_dec_ref(v___x_1278_);
v___x_1280_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___x_1282_ = lean_string_append(v___x_1279_, v___x_1281_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1282_);
v___x_1284_ = v___x_1263_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
else
{
lean_object* v___x_1287_; 
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1279_);
v___x_1287_ = v___x_1263_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1279_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
else
{
lean_object* v___x_1291_; 
lean_dec(v_d_1259_);
v___x_1291_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5));
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1292_, lean_object* v_key_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1292_, v_key_1293_);
lean_dec_ref(v_key_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(size_t v_sz_1300_, size_t v_i_1301_, lean_object* v_bs_1302_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1301_, v_sz_1300_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_bs_1302_);
return v___x_1306_;
}
else
{
lean_object* v_v_1307_; 
v_v_1307_ = lean_array_uget_borrowed(v_bs_1302_, v_i_1301_);
if (lean_obj_tag(v_v_1307_) == 7)
{
lean_object* v_items_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v_items_1308_ = lean_ctor_get(v_v_1307_, 0);
v___x_1309_ = lean_array_get_size(v_items_1308_);
v___x_1310_ = lean_unsigned_to_nat(2u);
v___x_1311_ = lean_nat_dec_eq(v___x_1309_, v___x_1310_);
if (v___x_1311_ == 0)
{
lean_dec_ref(v_bs_1302_);
goto v___jp_1303_;
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = lean_unsigned_to_nat(0u);
v___x_1313_ = lean_array_fget_borrowed(v_items_1308_, v___x_1312_);
if (lean_obj_tag(v___x_1313_) == 4)
{
lean_object* v_s_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_s_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc_ref(v_s_1314_);
v___x_1315_ = lean_unsigned_to_nat(1u);
v___x_1316_ = lean_array_fget_borrowed(v_items_1308_, v___x_1315_);
if (lean_obj_tag(v___x_1316_) == 4)
{
lean_object* v_s_1317_; lean_object* v_bs_x27_1318_; lean_object* v___x_1319_; size_t v___x_1320_; size_t v___x_1321_; lean_object* v___x_1322_; 
v_s_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc_ref(v_s_1317_);
v_bs_x27_1318_ = lean_array_uset(v_bs_1302_, v_i_1301_, v___x_1312_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_s_1314_);
lean_ctor_set(v___x_1319_, 1, v_s_1317_);
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_add(v_i_1301_, v___x_1320_);
v___x_1322_ = lean_array_uset(v_bs_x27_1318_, v_i_1301_, v___x_1319_);
v_i_1301_ = v___x_1321_;
v_bs_1302_ = v___x_1322_;
goto _start;
}
else
{
lean_object* v___x_1324_; 
lean_dec_ref(v_s_1314_);
lean_dec_ref(v_bs_1302_);
v___x_1324_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1324_;
}
}
else
{
lean_object* v___x_1325_; 
lean_dec_ref(v_bs_1302_);
v___x_1325_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1325_;
}
}
}
else
{
lean_dec_ref(v_bs_1302_);
goto v___jp_1303_;
}
}
v___jp_1303_:
{
lean_object* v___x_1304_; 
v___x_1304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1));
return v___x_1304_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_bs_1328_){
_start:
{
size_t v_sz_boxed_1329_; size_t v_i_boxed_1330_; lean_object* v_res_1331_; 
v_sz_boxed_1329_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1330_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_boxed_1329_, v_i_boxed_1330_, v_bs_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(lean_object* v_d_1337_, lean_object* v_key_1338_){
_start:
{
if (lean_obj_tag(v_d_1337_) == 8)
{
lean_object* v___x_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1383_; 
v___x_1339_ = l_Lasm_JS_Data_field(v_d_1337_, v_key_1338_);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_d_1337_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; 
v_unused_1384_ = lean_ctor_get(v_d_1337_, 0);
lean_dec(v_unused_1384_);
v___x_1341_ = v_d_1337_;
v_isShared_1342_ = v_isSharedCheck_1383_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v_d_1337_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1383_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v_a_1344_; 
if (lean_obj_tag(v___x_1339_) == 7)
{
lean_object* v_items_1369_; size_t v_sz_1370_; size_t v___x_1371_; lean_object* v___x_1372_; 
v_items_1369_ = lean_ctor_get(v___x_1339_, 0);
lean_inc_ref(v_items_1369_);
v_sz_1370_ = lean_array_size(v_items_1369_);
v___x_1371_ = ((size_t)0ULL);
v___x_1372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_1370_, v___x_1371_, v_items_1369_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v___x_1374_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2));
v___x_1375_ = lean_string_utf8_byte_size(v_a_1373_);
v___x_1376_ = lean_unsigned_to_nat(0u);
v___x_1377_ = lean_nat_dec_eq(v___x_1375_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1379_ = lean_string_append(v___x_1378_, v_a_1373_);
lean_dec(v_a_1373_);
v___x_1380_ = lean_string_append(v___x_1374_, v___x_1379_);
lean_dec_ref(v___x_1379_);
v_a_1344_ = v___x_1380_;
goto v___jp_1343_;
}
else
{
lean_dec(v_a_1373_);
v_a_1344_ = v___x_1374_;
goto v___jp_1343_;
}
}
else
{
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1381_; 
v_a_1381_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1372_, 1);
v_a_1344_ = v_a_1381_;
goto v___jp_1343_;
}
else
{
lean_dec_ref_known(v___x_1339_, 1);
lean_del_object(v___x_1341_);
return v___x_1372_;
}
}
}
else
{
lean_object* v___x_1382_; 
v___x_1382_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1344_ = v___x_1382_;
goto v___jp_1343_;
}
v___jp_1343_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1345_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1346_ = lean_string_append(v___x_1345_, v_key_1338_);
v___x_1347_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1348_ = lean_string_append(v___x_1346_, v___x_1347_);
v___x_1349_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0));
v___x_1350_ = lean_string_append(v___x_1348_, v___x_1349_);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1352_ = lean_string_append(v___x_1350_, v___x_1351_);
v___x_1353_ = l_Lasm_JS_Data_describe(v___x_1339_);
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
lean_dec_ref(v___x_1353_);
v___x_1355_ = lean_string_utf8_byte_size(v_a_1344_);
v___x_1356_ = lean_unsigned_to_nat(0u);
v___x_1357_ = lean_nat_dec_eq(v___x_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1364_; 
v___x_1358_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1359_ = lean_string_append(v___x_1358_, v_a_1344_);
lean_dec_ref(v_a_1344_);
v___x_1360_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1361_ = lean_string_append(v___x_1359_, v___x_1360_);
v___x_1362_ = lean_string_append(v___x_1354_, v___x_1361_);
lean_dec_ref(v___x_1361_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set_tag(v___x_1341_, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1362_);
v___x_1364_ = v___x_1341_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
else
{
lean_object* v___x_1367_; 
lean_dec_ref(v_a_1344_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set_tag(v___x_1341_, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1354_);
v___x_1367_ = v___x_1341_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1354_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
}
else
{
lean_object* v___x_1385_; 
lean_dec(v_d_1337_);
v___x_1385_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3));
return v___x_1385_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___boxed(lean_object* v_d_1386_, lean_object* v_key_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1386_, v_key_1387_);
lean_dec_ref(v_key_1387_);
return v_res_1388_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_unsigned_to_nat(0u);
v___x_1391_ = lean_nat_to_int(v___x_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(lean_object* v_d_1396_, lean_object* v_key_1397_){
_start:
{
if (lean_obj_tag(v_d_1396_) == 8)
{
lean_object* v___x_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1441_; 
v___x_1398_ = l_Lasm_JS_Data_field(v_d_1396_, v_key_1397_);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_d_1396_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; 
v_unused_1442_ = lean_ctor_get(v_d_1396_, 0);
lean_dec(v_unused_1442_);
v___x_1400_ = v_d_1396_;
v_isShared_1401_ = v_isSharedCheck_1441_;
goto v_resetjp_1399_;
}
else
{
lean_dec(v_d_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1441_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v_a_1403_; lean_object* v_a_1429_; 
switch(lean_obj_tag(v___x_1398_))
{
case 3:
{
double v_n_1435_; lean_object* v___x_1436_; 
v_n_1435_ = lean_ctor_get_float(v___x_1398_, 0);
v___x_1436_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1435_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v___x_1437_; 
v___x_1437_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_1403_ = v___x_1437_;
goto v___jp_1402_;
}
else
{
lean_object* v_val_1438_; 
v_val_1438_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_val_1438_);
lean_dec_ref_known(v___x_1436_, 1);
v_a_1429_ = v_val_1438_;
goto v___jp_1428_;
}
}
case 5:
{
lean_object* v_i_1439_; 
v_i_1439_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_i_1439_);
v_a_1429_ = v_i_1439_;
goto v___jp_1428_;
}
default: 
{
lean_object* v___x_1440_; 
v___x_1440_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1403_ = v___x_1440_;
goto v___jp_1402_;
}
}
v___jp_1402_:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v___x_1404_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1405_ = lean_string_append(v___x_1404_, v_key_1397_);
v___x_1406_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1407_ = lean_string_append(v___x_1405_, v___x_1406_);
v___x_1408_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_1409_ = lean_string_append(v___x_1407_, v___x_1408_);
v___x_1410_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1411_ = lean_string_append(v___x_1409_, v___x_1410_);
v___x_1412_ = l_Lasm_JS_Data_describe(v___x_1398_);
v___x_1413_ = lean_string_append(v___x_1411_, v___x_1412_);
lean_dec_ref(v___x_1412_);
v___x_1414_ = lean_string_utf8_byte_size(v_a_1403_);
v___x_1415_ = lean_unsigned_to_nat(0u);
v___x_1416_ = lean_nat_dec_eq(v___x_1414_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
v___x_1417_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1418_ = lean_string_append(v___x_1417_, v_a_1403_);
v___x_1419_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
v___x_1421_ = lean_string_append(v___x_1413_, v___x_1420_);
lean_dec_ref(v___x_1420_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1421_);
v___x_1423_ = v___x_1400_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
else
{
lean_object* v___x_1426_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1413_);
v___x_1426_ = v___x_1400_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1413_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
v___jp_1428_:
{
lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_1431_ = lean_int_dec_le(v___x_1430_, v_a_1429_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
lean_dec(v_a_1429_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_1403_ = v___x_1432_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
lean_del_object(v___x_1400_);
lean_dec(v___x_1398_);
v___x_1433_ = l_Int_toNat(v_a_1429_);
lean_dec(v_a_1429_);
v___x_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
}
}
else
{
lean_object* v___x_1443_; 
lean_dec(v_d_1396_);
v___x_1443_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4));
return v___x_1443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1444_, lean_object* v_key_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1444_, v_key_1445_);
lean_dec_ref(v_key_1445_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(lean_object* v_d_1450_, lean_object* v_key_1451_){
_start:
{
if (lean_obj_tag(v_d_1450_) == 8)
{
lean_object* v___x_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1483_; 
v___x_1452_ = l_Lasm_JS_Data_field(v_d_1450_, v_key_1451_);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_d_1450_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; 
v_unused_1484_ = lean_ctor_get(v_d_1450_, 0);
lean_dec(v_unused_1484_);
v___x_1454_ = v_d_1450_;
v_isShared_1455_ = v_isSharedCheck_1483_;
goto v_resetjp_1453_;
}
else
{
lean_dec(v_d_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1483_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
if (lean_obj_tag(v___x_1452_) == 4)
{
lean_object* v_s_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_del_object(v___x_1454_);
v_s_1456_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1452_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_s_1456_);
lean_dec(v___x_1452_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
lean_ctor_set_tag(v___x_1458_, 1);
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_s_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
else
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1464_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1465_ = lean_string_append(v___x_1464_, v_key_1451_);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1467_ = lean_string_append(v___x_1465_, v___x_1466_);
v___x_1468_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1469_ = lean_string_append(v___x_1467_, v___x_1468_);
v___x_1470_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1471_ = lean_string_append(v___x_1469_, v___x_1470_);
v___x_1472_ = l_Lasm_JS_Data_describe(v___x_1452_);
v___x_1473_ = lean_string_append(v___x_1471_, v___x_1472_);
lean_dec_ref(v___x_1472_);
v___x_1474_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___x_1476_ = lean_string_append(v___x_1473_, v___x_1475_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1476_);
v___x_1478_ = v___x_1454_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
else
{
lean_object* v___x_1481_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1473_);
v___x_1481_ = v___x_1454_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1473_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
else
{
lean_object* v___x_1485_; 
lean_dec(v_d_1450_);
v___x_1485_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1));
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1486_, lean_object* v_key_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1486_, v_key_1487_);
lean_dec_ref(v_key_1487_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(lean_object* v_context_1489_, lean_object* v_d_1490_){
_start:
{
lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1499_; lean_object* v_received_1500_; lean_object* v___y_1519_; lean_object* v_a_1522_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1546_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
lean_inc(v_d_1490_);
v___x_1547_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1490_, v___x_1546_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v_a_1522_ = v_a_1548_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v_a_1549_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1550_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1));
lean_inc(v_d_1490_);
v___x_1551_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1490_, v___x_1550_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; 
lean_dec(v_a_1549_);
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
v_a_1522_ = v_a_1552_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v_a_1553_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1551_, 1);
v___x_1554_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
lean_inc(v_d_1490_);
v___x_1555_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1490_, v___x_1554_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; 
lean_dec(v_a_1553_);
lean_dec(v_a_1549_);
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
v_a_1522_ = v_a_1556_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_a_1557_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1558_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3));
lean_inc(v_d_1490_);
v___x_1559_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1490_, v___x_1558_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; 
lean_dec(v_a_1557_);
lean_dec(v_a_1553_);
lean_dec(v_a_1549_);
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v___x_1559_, 1);
v_a_1522_ = v_a_1560_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v_a_1561_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1559_, 1);
v___x_1562_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4));
lean_inc(v_d_1490_);
v___x_1563_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1490_, v___x_1562_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v_a_1564_; 
lean_dec(v_a_1561_);
lean_dec(v_a_1557_);
lean_dec(v_a_1553_);
lean_dec(v_a_1549_);
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1563_, 1);
v_a_1522_ = v_a_1564_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_a_1565_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1563_, 1);
v___x_1566_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5));
lean_inc(v_d_1490_);
v___x_1567_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1490_, v___x_1566_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; 
lean_dec(v_a_1565_);
lean_dec(v_a_1561_);
lean_dec(v_a_1557_);
lean_dec(v_a_1553_);
lean_dec(v_a_1549_);
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1567_, 1);
v_a_1522_ = v_a_1568_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v_a_1569_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1569_);
lean_dec_ref_known(v___x_1567_, 1);
v___x_1570_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
lean_inc(v_d_1490_);
v___x_1571_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1490_, v___x_1570_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; 
lean_dec(v_a_1569_);
lean_dec(v_a_1565_);
lean_dec(v_a_1561_);
lean_dec(v_a_1557_);
lean_dec(v_a_1553_);
lean_dec(v_a_1549_);
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1571_, 1);
v_a_1522_ = v_a_1572_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_d_1490_);
v_a_1573_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1575_ = v___x_1571_;
v_isShared_1576_ = v_isSharedCheck_1583_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1571_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1583_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1577_; uint8_t v___x_1578_; uint8_t v___x_1579_; lean_object* v___x_1581_; 
v___x_1577_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1577_, 0, v_a_1549_);
lean_ctor_set(v___x_1577_, 1, v_a_1553_);
lean_ctor_set(v___x_1577_, 2, v_a_1561_);
lean_ctor_set(v___x_1577_, 3, v_a_1569_);
lean_ctor_set(v___x_1577_, 4, v_a_1573_);
v___x_1578_ = lean_unbox(v_a_1557_);
lean_dec(v_a_1557_);
lean_ctor_set_uint8(v___x_1577_, sizeof(void*)*5, v___x_1578_);
v___x_1579_ = lean_unbox(v_a_1565_);
lean_dec(v_a_1565_);
lean_ctor_set_uint8(v___x_1577_, sizeof(void*)*5 + 1, v___x_1579_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set_tag(v___x_1575_, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1577_);
v___x_1581_ = v___x_1575_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1577_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
}
}
}
}
v___jp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = lean_string_append(v___y_1493_, v___y_1494_);
lean_dec_ref(v___y_1494_);
v___x_1496_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
v___x_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
v___jp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v___x_1501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1502_ = lean_string_append(v___x_1501_, v_context_1489_);
v___x_1503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___closed__3));
v___x_1506_ = lean_string_append(v___x_1504_, v___x_1505_);
v___x_1507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
v___x_1509_ = lean_string_append(v___x_1508_, v_received_1500_);
lean_dec_ref(v_received_1500_);
v___x_1510_ = lean_string_utf8_byte_size(v___y_1499_);
v___x_1511_ = lean_unsigned_to_nat(0u);
v___x_1512_ = lean_nat_dec_eq(v___x_1510_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1513_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1514_ = lean_string_append(v___x_1513_, v___y_1499_);
lean_dec_ref(v___y_1499_);
v___x_1515_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1516_ = lean_string_append(v___x_1514_, v___x_1515_);
v___y_1493_ = v___x_1509_;
v___y_1494_ = v___x_1516_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1517_; 
lean_dec_ref(v___y_1499_);
v___x_1517_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_1493_ = v___x_1509_;
v___y_1494_ = v___x_1517_;
goto v___jp_1492_;
}
}
v___jp_1518_:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Lasm_JS_Data_describe(v_d_1490_);
v___y_1499_ = v___y_1519_;
v_received_1500_ = v___x_1520_;
goto v___jp_1498_;
}
v___jp_1521_:
{
if (lean_obj_tag(v_d_1490_) == 9)
{
lean_object* v_value_1523_; lean_object* v_description_1524_; lean_object* v___x_1525_; uint8_t v___x_1526_; 
v_value_1523_ = lean_ctor_get(v_d_1490_, 0);
v_description_1524_ = lean_ctor_get(v_d_1490_, 1);
v___x_1525_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1526_ = lean_string_dec_eq(v_description_1524_, v___x_1525_);
if (v___x_1526_ == 0)
{
v___y_1519_ = v_a_1522_;
goto v___jp_1518_;
}
else
{
lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1543_; 
lean_inc(v_value_1523_);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_d_1490_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; lean_object* v_unused_1545_; 
v_unused_1544_ = lean_ctor_get(v_d_1490_, 1);
lean_dec(v_unused_1544_);
v_unused_1545_ = lean_ctor_get(v_d_1490_, 0);
lean_dec(v_unused_1545_);
v___x_1528_ = v_d_1490_;
v_isShared_1529_ = v_isSharedCheck_1543_;
goto v_resetjp_1527_;
}
else
{
lean_dec(v_d_1490_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1543_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
uint32_t v___x_1530_; uint64_t v___x_1531_; lean_object* v___x_1533_; 
v___x_1530_ = 206;
v___x_1531_ = 0ULL;
lean_inc(v_value_1523_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 1, v___x_1525_);
v___x_1533_ = v___x_1528_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_value_1523_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v___x_1525_);
v___x_1533_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
uint32_t v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = lasm_js_value_handle(v_value_1523_);
lean_dec(v_value_1523_);
v___x_1535_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1530_, v___x_1531_, v___x_1533_, v___x_1534_);
lean_dec_ref(v___x_1533_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; uint8_t v___x_1537_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = lean_string_validate_utf8(v_a_1536_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
lean_dec(v_a_1536_);
v___x_1538_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_1539_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1538_);
v___y_1499_ = v_a_1522_;
v_received_1500_ = v___x_1539_;
goto v___jp_1498_;
}
else
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_string_from_utf8_unchecked(v_a_1536_);
v___y_1499_ = v_a_1522_;
v_received_1500_ = v___x_1540_;
goto v___jp_1498_;
}
}
else
{
lean_object* v___x_1541_; 
lean_dec_ref_known(v___x_1535_, 1);
v___x_1541_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v___y_1499_ = v_a_1522_;
v_received_1500_ = v___x_1541_;
goto v___jp_1498_;
}
}
}
}
}
else
{
v___y_1519_ = v_a_1522_;
goto v___jp_1518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0___boxed(lean_object* v_context_1584_, lean_object* v_d_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v_context_1584_, v_d_1585_);
lean_dec_ref(v_context_1584_);
return v_res_1587_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1588_; uint64_t v___x_1589_; 
v___x_1588_ = 0;
v___x_1589_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(lean_object* v_b_1590_, lean_object* v_args_1591_, uint8_t v_await_1592_){
_start:
{
uint64_t v___y_1595_; uint64_t v___y_1596_; uint64_t v___x_1639_; uint64_t v___y_1641_; 
v___x_1639_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_1592_ == 0)
{
uint64_t v___x_1646_; 
v___x_1646_ = 0ULL;
v___y_1641_ = v___x_1646_;
goto v___jp_1640_;
}
else
{
uint64_t v___x_1647_; 
v___x_1647_ = 2ULL;
v___y_1641_ = v___x_1647_;
goto v___jp_1640_;
}
v___jp_1594_:
{
uint64_t v_flags_1597_; uint32_t v___x_1598_; lean_object* v___x_1599_; uint32_t v___x_1600_; lean_object* v___x_1601_; 
v_flags_1597_ = lean_uint64_lor(v___y_1595_, v___y_1596_);
v___x_1598_ = 214;
v___x_1599_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1590_, v_args_1591_);
v___x_1600_ = 0;
v___x_1601_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1598_, v_flags_1597_, v___x_1599_, v___x_1600_);
lean_dec(v___x_1599_);
if (lean_obj_tag(v___x_1601_) == 0)
{
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1603_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
lean_dec_ref_known(v___x_1601_, 1);
v___x_1603_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1602_);
lean_dec(v_a_1602_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1603_, 1);
v___x_1605_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1590_);
v___x_1606_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v___x_1605_, v_a_1604_);
lean_dec_ref(v___x_1605_);
return v___x_1606_;
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v_a_1607_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1603_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1603_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
v_a_1615_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1601_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1601_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
lean_ctor_set_tag(v___x_1617_, 1);
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1638_; 
v_a_1623_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1625_ = v___x_1601_;
v_isShared_1626_ = v_isSharedCheck_1638_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1601_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1638_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1628_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1590_);
v___x_1629_ = lean_string_append(v___x_1627_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v___x_1630_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1631_ = lean_string_append(v___x_1629_, v___x_1630_);
v___x_1632_ = lean_io_error_to_string(v_a_1623_);
v___x_1633_ = lean_string_append(v___x_1631_, v___x_1632_);
lean_dec_ref(v___x_1632_);
v___x_1634_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1634_);
v___x_1636_ = v___x_1625_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
v___jp_1640_:
{
uint8_t v_construct_1642_; uint64_t v___x_1643_; 
v_construct_1642_ = lean_ctor_get_uint8(v_b_1590_, sizeof(void*)*4);
v___x_1643_ = lean_uint64_lor(v___x_1639_, v___y_1641_);
if (v_construct_1642_ == 0)
{
uint64_t v___x_1644_; 
v___x_1644_ = 0ULL;
v___y_1595_ = v___x_1643_;
v___y_1596_ = v___x_1644_;
goto v___jp_1594_;
}
else
{
uint64_t v___x_1645_; 
v___x_1645_ = 4ULL;
v___y_1595_ = v___x_1643_;
v___y_1596_ = v___x_1645_;
goto v___jp_1594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___boxed(lean_object* v_b_1648_, lean_object* v_args_1649_, lean_object* v_await_1650_, lean_object* v_a_1651_){
_start:
{
uint8_t v_await_boxed_1652_; lean_object* v_res_1653_; 
v_await_boxed_1652_ = lean_unbox(v_await_1650_);
v_res_1653_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v_b_1648_, v_args_1649_, v_await_boxed_1652_);
lean_dec_ref(v_b_1648_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo(lean_object* v_a_1660_){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v___x_1668_; 
v___x_1662_ = ((lean_object*)(l_Lasm_Web_Raw_responseInfo___closed__1));
v___x_1663_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1664_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1665_, 0, v_a_1660_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = lean_array_push(v___x_1663_, v___x_1665_);
v___x_1667_ = 1;
v___x_1668_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v___x_1662_, v___x_1666_, v___x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo___boxed(lean_object* v_a_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lasm_Web_Raw_responseInfo(v_a_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(lean_object* v___f_1672_, lean_object* v_x_1673_){
_start:
{
if (lean_obj_tag(v_x_1673_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1683_; 
lean_dec_ref(v___f_1672_);
v_a_1675_ = lean_ctor_get(v_x_1673_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_x_1673_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1677_ = v_x_1673_;
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v_x_1673_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
return v___x_1681_;
}
}
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1685_; 
v_a_1684_ = lean_ctor_get(v_x_1673_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v_x_1673_, 1);
v___x_1685_ = lean_apply_2(v___f_1672_, v_a_1684_, lean_box(0));
return v___x_1685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1686_, lean_object* v_x_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(v___f_1686_, v_x_1687_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_1690_, uint32_t v_op_1691_, uint64_t v_flags_1692_, lean_object* v_payload_1693_, lean_object* v___f_1694_, lean_object* v___f_1695_, lean_object* v___f_1696_, lean_object* v_x_1697_){
_start:
{
if (lean_obj_tag(v_x_1697_) == 0)
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1707_; 
lean_dec_ref(v___f_1696_);
lean_dec_ref(v___f_1695_);
lean_dec_ref(v___f_1694_);
lean_dec(v_payload_1693_);
v_a_1699_ = lean_ctor_get(v_x_1697_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_x_1697_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1701_ = v_x_1697_;
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v_x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1754_; 
v_a_1708_ = lean_ctor_get(v_x_1697_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_x_1697_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1710_ = v_x_1697_;
v_isShared_1711_ = v_isSharedCheck_1754_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v_x_1697_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1754_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1712_ = lean_string_utf8_byte_size(v_failurePrefix_1690_);
v___x_1713_ = lean_unsigned_to_nat(0u);
v___x_1714_ = lean_nat_dec_eq(v___x_1712_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___f_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___f_1719_; lean_object* v_val_1721_; lean_object* v___x_1726_; 
lean_dec_ref(v___f_1696_);
lean_inc(v_a_1708_);
v___f_1715_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1715_, 0, v_a_1708_);
v___x_1716_ = lean_box(v___x_1714_);
v___x_1717_ = lean_box_uint32(v_op_1691_);
v___x_1718_ = lean_box_uint64(v_flags_1692_);
lean_inc(v_payload_1693_);
v___f_1719_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1719_, 0, v___x_1713_);
lean_closure_set(v___f_1719_, 1, v___x_1716_);
lean_closure_set(v___f_1719_, 2, v___f_1715_);
lean_closure_set(v___f_1719_, 3, v_a_1708_);
lean_closure_set(v___f_1719_, 4, v___x_1717_);
lean_closure_set(v___f_1719_, 5, v___x_1718_);
lean_closure_set(v___f_1719_, 6, v_payload_1693_);
v___x_1726_ = l_Lasm_JS_Wire_encodeIO(v_payload_1693_);
lean_dec(v_payload_1693_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v_a_1727_);
v___x_1729_ = v___x_1710_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1727_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
v_val_1721_ = v___x_1729_;
goto v___jp_1720_;
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; 
v_a_1731_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v___x_1726_, 1);
if (v_isShared_1711_ == 0)
{
lean_ctor_set_tag(v___x_1710_, 0);
lean_ctor_set(v___x_1710_, 0, v_a_1731_);
v___x_1733_ = v___x_1710_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
v_val_1721_ = v___x_1733_;
goto v___jp_1720_;
}
}
v___jp_1720_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v_val_1721_);
v___x_1723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1713_, v___x_1714_, v___x_1722_, v___f_1719_);
v___x_1724_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1713_, v___x_1714_, v___x_1723_, v___f_1694_);
v___x_1725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1713_, v___x_1714_, v___x_1724_, v___f_1695_);
return v___x_1725_;
}
}
else
{
lean_object* v___f_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___f_1738_; uint8_t v___x_1739_; lean_object* v_val_1741_; lean_object* v___x_1745_; 
lean_dec_ref(v___f_1695_);
lean_dec_ref(v___f_1694_);
lean_inc(v_a_1708_);
v___f_1735_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1735_, 0, v_a_1708_);
v___x_1736_ = lean_box_uint32(v_op_1691_);
v___x_1737_ = lean_box_uint64(v_flags_1692_);
lean_inc(v_payload_1693_);
v___f_1738_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1738_, 0, v___f_1735_);
lean_closure_set(v___f_1738_, 1, v_a_1708_);
lean_closure_set(v___f_1738_, 2, v___x_1736_);
lean_closure_set(v___f_1738_, 3, v___x_1737_);
lean_closure_set(v___f_1738_, 4, v_payload_1693_);
v___x_1739_ = 0;
v___x_1745_ = l_Lasm_JS_Wire_encodeIO(v_payload_1693_);
lean_dec(v_payload_1693_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v_a_1746_);
v___x_1748_ = v___x_1710_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v_val_1741_ = v___x_1748_;
goto v___jp_1740_;
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; 
v_a_1750_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___x_1745_, 1);
if (v_isShared_1711_ == 0)
{
lean_ctor_set_tag(v___x_1710_, 0);
lean_ctor_set(v___x_1710_, 0, v_a_1750_);
v___x_1752_ = v___x_1710_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
v_val_1741_ = v___x_1752_;
goto v___jp_1740_;
}
}
v___jp_1740_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_val_1741_);
v___x_1743_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1713_, v___x_1739_, v___x_1742_, v___f_1738_);
v___x_1744_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1713_, v___x_1739_, v___x_1743_, v___f_1696_);
return v___x_1744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_1755_, lean_object* v_op_1756_, lean_object* v_flags_1757_, lean_object* v_payload_1758_, lean_object* v___f_1759_, lean_object* v___f_1760_, lean_object* v___f_1761_, lean_object* v_x_1762_, lean_object* v___y_1763_){
_start:
{
uint32_t v_op_boxed_1764_; uint64_t v_flags_boxed_1765_; lean_object* v_res_1766_; 
v_op_boxed_1764_ = lean_unbox_uint32(v_op_1756_);
lean_dec(v_op_1756_);
v_flags_boxed_1765_ = lean_unbox_uint64(v_flags_1757_);
lean_dec_ref(v_flags_1757_);
v_res_1766_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9(v_failurePrefix_1755_, v_op_boxed_1764_, v_flags_boxed_1765_, v_payload_1758_, v___f_1759_, v___f_1760_, v___f_1761_, v_x_1762_);
lean_dec_ref(v_failurePrefix_1755_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(lean_object* v___f_1767_, lean_object* v_bytes_1768_){
_start:
{
lean_object* v___x_1770_; uint8_t v___x_1771_; lean_object* v_val_1773_; lean_object* v___x_1776_; 
v___x_1770_ = lean_unsigned_to_nat(0u);
v___x_1771_ = 0;
v___x_1776_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1768_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set_tag(v___x_1779_, 1);
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
v_val_1773_ = v___x_1782_;
goto v___jp_1772_;
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
v_a_1785_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1776_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1776_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set_tag(v___x_1787_, 0);
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
v_val_1773_ = v___x_1790_;
goto v___jp_1772_;
}
}
}
v___jp_1772_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_val_1773_);
v___x_1775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1770_, v___x_1771_, v___x_1774_, v___f_1767_);
return v___x_1775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed(lean_object* v___f_1793_, lean_object* v_bytes_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(v___f_1793_, v_bytes_1794_);
lean_dec_ref(v_bytes_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(lean_object* v_context_1797_, lean_object* v_d_1798_){
_start:
{
lean_object* v___y_1801_; lean_object* v___y_1802_; 
if (lean_obj_tag(v_d_1798_) == 4)
{
lean_object* v_s_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
v_s_1806_ = lean_ctor_get(v_d_1798_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_d_1798_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v_d_1798_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_s_1806_);
lean_dec(v_d_1798_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 0);
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_s_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
else
{
lean_object* v___x_1814_; lean_object* v_received_1816_; 
v___x_1814_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_1798_) == 9)
{
lean_object* v_value_1830_; lean_object* v_description_1831_; uint8_t v___x_1832_; 
v_value_1830_ = lean_ctor_get(v_d_1798_, 0);
v_description_1831_ = lean_ctor_get(v_d_1798_, 1);
v___x_1832_ = lean_string_dec_eq(v_description_1831_, v___x_1814_);
if (v___x_1832_ == 0)
{
goto v___jp_1828_;
}
else
{
uint32_t v___x_1833_; uint64_t v___x_1834_; lean_object* v___x_1835_; uint32_t v___x_1836_; lean_object* v___x_1837_; 
lean_inc_n(v_value_1830_, 2);
lean_dec_ref_known(v_d_1798_, 2);
v___x_1833_ = 206;
v___x_1834_ = 0ULL;
v___x_1835_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1835_, 0, v_value_1830_);
lean_ctor_set(v___x_1835_, 1, v___x_1814_);
v___x_1836_ = lasm_js_value_handle(v_value_1830_);
lean_dec(v_value_1830_);
v___x_1837_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1833_, v___x_1834_, v___x_1835_, v___x_1836_);
lean_dec_ref_known(v___x_1835_, 2);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; uint8_t v___x_1839_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = lean_string_validate_utf8(v_a_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
lean_dec(v_a_1838_);
v___x_1840_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_1841_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1840_);
v_received_1816_ = v___x_1841_;
goto v___jp_1815_;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_string_from_utf8_unchecked(v_a_1838_);
v_received_1816_ = v___x_1842_;
goto v___jp_1815_;
}
}
else
{
lean_object* v___x_1843_; 
lean_dec_ref_known(v___x_1837_, 1);
v___x_1843_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_1816_ = v___x_1843_;
goto v___jp_1815_;
}
}
}
else
{
goto v___jp_1828_;
}
v___jp_1815_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1817_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1818_ = lean_string_append(v___x_1817_, v_context_1797_);
v___x_1819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1820_ = lean_string_append(v___x_1818_, v___x_1819_);
v___x_1821_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1822_ = lean_string_append(v___x_1820_, v___x_1821_);
v___x_1823_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1824_ = lean_string_append(v___x_1822_, v___x_1823_);
v___x_1825_ = lean_string_append(v___x_1824_, v_received_1816_);
lean_dec_ref(v_received_1816_);
v___x_1826_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_1801_ = v___x_1825_;
v___y_1802_ = v___x_1827_;
goto v___jp_1800_;
}
else
{
v___y_1801_ = v___x_1825_;
v___y_1802_ = v___x_1814_;
goto v___jp_1800_;
}
}
v___jp_1828_:
{
lean_object* v___x_1829_; 
v___x_1829_ = l_Lasm_JS_Data_describe(v_d_1798_);
v_received_1816_ = v___x_1829_;
goto v___jp_1815_;
}
}
v___jp_1800_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1803_ = lean_string_append(v___y_1801_, v___y_1802_);
v___x_1804_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
v___x_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1844_, lean_object* v_d_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1844_, v_d_1845_);
lean_dec_ref(v_context_1844_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(lean_object* v_context_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v_val_1852_; 
if (lean_obj_tag(v_x_1849_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1862_; 
v_a_1854_ = lean_ctor_get(v_x_1849_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_x_1849_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1856_ = v_x_1849_;
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v_x_1849_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
return v___x_1860_;
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1876_; 
v_a_1863_ = lean_ctor_get(v_x_1849_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_x_1849_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1865_ = v_x_1849_;
v_isShared_1866_ = v_isSharedCheck_1876_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v_x_1849_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1876_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1848_, v_a_1863_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___x_1867_, 1);
if (v_isShared_1866_ == 0)
{
lean_ctor_set(v___x_1865_, 0, v_a_1868_);
v___x_1870_ = v___x_1865_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
v_val_1852_ = v___x_1870_;
goto v___jp_1851_;
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; 
v_a_1872_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v___x_1867_, 1);
if (v_isShared_1866_ == 0)
{
lean_ctor_set_tag(v___x_1865_, 0);
lean_ctor_set(v___x_1865_, 0, v_a_1872_);
v___x_1874_ = v___x_1865_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
v_val_1852_ = v___x_1874_;
goto v___jp_1851_;
}
}
}
}
v___jp_1851_:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_val_1852_);
return v___x_1853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed(lean_object* v_context_1877_, lean_object* v_x_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(v_context_1877_, v_x_1878_);
lean_dec_ref(v_context_1877_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(lean_object* v___f_1881_, lean_object* v_x_1882_){
_start:
{
if (lean_obj_tag(v_x_1882_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1892_; 
lean_dec_ref(v___f_1881_);
v_a_1884_ = lean_ctor_get(v_x_1882_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1886_ = v_x_1882_;
v_isShared_1887_ = v_isSharedCheck_1892_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v_x_1882_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1892_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1889_);
return v___x_1890_;
}
}
}
else
{
lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1904_; 
v_isSharedCheck_1904_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1904_ == 0)
{
lean_object* v_unused_1905_; 
v_unused_1905_ = lean_ctor_get(v_x_1882_, 0);
lean_dec(v_unused_1905_);
v___x_1894_ = v_x_1882_;
v_isShared_1895_ = v_isSharedCheck_1904_;
goto v_resetjp_1893_;
}
else
{
lean_dec(v_x_1882_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1904_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; uint8_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = 0;
v___x_1898_ = lean_io_promise_new();
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1898_);
v___x_1900_ = v___x_1894_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1898_);
v___x_1900_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
v___x_1902_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1896_, v___x_1897_, v___x_1901_, v___f_1881_);
return v___x_1902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1906_, lean_object* v_x_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(v___f_1906_, v_x_1907_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(lean_object* v_context_1910_, uint32_t v_op_1911_, uint64_t v_flags_1912_, lean_object* v_payload_1913_, lean_object* v_failurePrefix_1914_){
_start:
{
lean_object* v___f_1916_; lean_object* v___f_1917_; lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; lean_object* v_val_1927_; lean_object* v___x_1930_; 
v___f_1916_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1916_, 0, v_context_1910_);
v___f_1917_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1917_, 0, v___f_1916_);
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1918_, 0, v___f_1917_);
lean_inc_ref(v_failurePrefix_1914_);
v___f_1919_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1919_, 0, v_failurePrefix_1914_);
v___x_1920_ = lean_box_uint32(v_op_1911_);
v___x_1921_ = lean_box_uint64(v_flags_1912_);
lean_inc_ref(v___f_1918_);
v___f_1922_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1922_, 0, v_failurePrefix_1914_);
lean_closure_set(v___f_1922_, 1, v___x_1920_);
lean_closure_set(v___f_1922_, 2, v___x_1921_);
lean_closure_set(v___f_1922_, 3, v_payload_1913_);
lean_closure_set(v___f_1922_, 4, v___f_1919_);
lean_closure_set(v___f_1922_, 5, v___f_1918_);
lean_closure_set(v___f_1922_, 6, v___f_1918_);
v___f_1923_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1923_, 0, v___f_1922_);
v___x_1924_ = lean_unsigned_to_nat(0u);
v___x_1925_ = 0;
v___x_1930_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 1);
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
v_val_1927_ = v___x_1936_;
goto v___jp_1926_;
}
}
}
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1946_; 
v_a_1939_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1941_ = v___x_1930_;
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1930_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1944_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set_tag(v___x_1941_, 0);
v___x_1944_ = v___x_1941_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_a_1939_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
v_val_1927_ = v___x_1944_;
goto v___jp_1926_;
}
}
}
v___jp_1926_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1928_, 0, v_val_1927_);
v___x_1929_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1924_, v___x_1925_, v___x_1928_, v___f_1923_);
return v___x_1929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___boxed(lean_object* v_context_1947_, lean_object* v_op_1948_, lean_object* v_flags_1949_, lean_object* v_payload_1950_, lean_object* v_failurePrefix_1951_, lean_object* v_a_1952_){
_start:
{
uint32_t v_op_boxed_1953_; uint64_t v_flags_boxed_1954_; lean_object* v_res_1955_; 
v_op_boxed_1953_ = lean_unbox_uint32(v_op_1948_);
lean_dec(v_op_1948_);
v_flags_boxed_1954_ = lean_unbox_uint64(v_flags_1949_);
lean_dec_ref(v_flags_1949_);
v_res_1955_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v_context_1947_, v_op_boxed_1953_, v_flags_boxed_1954_, v_payload_1950_, v_failurePrefix_1951_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(lean_object* v_b_1956_, lean_object* v_args_1957_){
_start:
{
uint8_t v_construct_1959_; lean_object* v___x_1960_; uint32_t v___x_1961_; uint64_t v___x_1962_; uint64_t v___y_1964_; 
v_construct_1959_ = lean_ctor_get_uint8(v_b_1956_, sizeof(void*)*4);
v___x_1960_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1956_);
v___x_1961_ = 214;
v___x_1962_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_1959_ == 0)
{
uint64_t v___x_1972_; 
v___x_1972_ = 0ULL;
v___y_1964_ = v___x_1972_;
goto v___jp_1963_;
}
else
{
uint64_t v___x_1973_; 
v___x_1973_ = 4ULL;
v___y_1964_ = v___x_1973_;
goto v___jp_1963_;
}
v___jp_1963_:
{
uint64_t v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1965_ = lean_uint64_lor(v___x_1962_, v___y_1964_);
v___x_1966_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1956_, v_args_1957_);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1968_ = lean_string_append(v___x_1967_, v___x_1960_);
v___x_1969_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1970_ = lean_string_append(v___x_1968_, v___x_1969_);
v___x_1971_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v___x_1960_, v___x_1961_, v___x_1965_, v___x_1966_, v___x_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0___boxed(lean_object* v_b_1974_, lean_object* v_args_1975_, lean_object* v_a_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v_b_1974_, v_args_1975_);
lean_dec_ref(v_b_1974_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText(lean_object* v_a_1984_){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1986_ = ((lean_object*)(l_Lasm_Web_Raw_responseText___closed__1));
v___x_1987_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1988_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1989_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1989_, 0, v_a_1984_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = lean_array_push(v___x_1987_, v___x_1989_);
v___x_1991_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v___x_1986_, v___x_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText___boxed(lean_object* v_a_1992_, lean_object* v_a_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lasm_Web_Raw_responseText(v_a_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(lean_object* v_x_1995_){
_start:
{
if (lean_obj_tag(v_x_1995_) == 0)
{
lean_object* v___x_1997_; 
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_x_1995_);
return v___x_1997_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2006_; 
v_a_1998_ = lean_ctor_get(v_x_1995_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_x_1995_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2000_ = v_x_1995_;
v_isShared_2001_ = v_isSharedCheck_2006_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v_x_1995_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2006_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2004_; 
v___x_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
return v___x_2004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(v_x_2007_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2010_, lean_object* v_x_2011_){
_start:
{
if (lean_obj_tag(v_x_2011_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2021_; 
lean_dec_ref(v___f_2010_);
v_a_2013_ = lean_ctor_get(v_x_2011_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2015_ = v_x_2011_;
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v_x_2011_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
return v___x_2019_;
}
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2023_; 
v_a_2022_ = lean_ctor_get(v_x_2011_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v_x_2011_, 1);
v___x_2023_ = lean_apply_2(v___f_2010_, v_a_2022_, lean_box(0));
return v___x_2023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2024_, lean_object* v_x_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(v___f_2024_, v_x_2025_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9(lean_object* v_failurePrefix_2028_, uint32_t v_op_2029_, uint64_t v_flags_2030_, lean_object* v_payload_2031_, lean_object* v___f_2032_, lean_object* v___f_2033_, lean_object* v___f_2034_, lean_object* v_x_2035_){
_start:
{
if (lean_obj_tag(v_x_2035_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2045_; 
lean_dec_ref(v___f_2034_);
lean_dec_ref(v___f_2033_);
lean_dec_ref(v___f_2032_);
lean_dec(v_payload_2031_);
v_a_2037_ = lean_ctor_get(v_x_2035_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v_x_2035_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2039_ = v_x_2035_;
v_isShared_2040_ = v_isSharedCheck_2045_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v_x_2035_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2045_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2092_; 
v_a_2046_ = lean_ctor_get(v_x_2035_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_x_2035_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2048_ = v_x_2035_;
v_isShared_2049_ = v_isSharedCheck_2092_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v_x_2035_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2092_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; 
v___x_2050_ = lean_string_utf8_byte_size(v_failurePrefix_2028_);
v___x_2051_ = lean_unsigned_to_nat(0u);
v___x_2052_ = lean_nat_dec_eq(v___x_2050_, v___x_2051_);
if (v___x_2052_ == 0)
{
lean_object* v___f_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___f_2057_; lean_object* v_val_2059_; lean_object* v___x_2064_; 
lean_dec_ref(v___f_2034_);
lean_inc(v_a_2046_);
v___f_2053_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2053_, 0, v_a_2046_);
v___x_2054_ = lean_box(v___x_2052_);
v___x_2055_ = lean_box_uint32(v_op_2029_);
v___x_2056_ = lean_box_uint64(v_flags_2030_);
lean_inc(v_payload_2031_);
v___f_2057_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2057_, 0, v___x_2051_);
lean_closure_set(v___f_2057_, 1, v___x_2054_);
lean_closure_set(v___f_2057_, 2, v___f_2053_);
lean_closure_set(v___f_2057_, 3, v_a_2046_);
lean_closure_set(v___f_2057_, 4, v___x_2055_);
lean_closure_set(v___f_2057_, 5, v___x_2056_);
lean_closure_set(v___f_2057_, 6, v_payload_2031_);
v___x_2064_ = l_Lasm_JS_Wire_encodeIO(v_payload_2031_);
lean_dec(v_payload_2031_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2067_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref_known(v___x_2064_, 1);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_a_2065_);
v___x_2067_ = v___x_2048_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_val_2059_ = v___x_2067_;
goto v___jp_2058_;
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; 
v_a_2069_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2064_, 1);
if (v_isShared_2049_ == 0)
{
lean_ctor_set_tag(v___x_2048_, 0);
lean_ctor_set(v___x_2048_, 0, v_a_2069_);
v___x_2071_ = v___x_2048_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2069_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
v_val_2059_ = v___x_2071_;
goto v___jp_2058_;
}
}
v___jp_2058_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v_val_2059_);
v___x_2061_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2051_, v___x_2052_, v___x_2060_, v___f_2057_);
v___x_2062_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2051_, v___x_2052_, v___x_2061_, v___f_2032_);
v___x_2063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2051_, v___x_2052_, v___x_2062_, v___f_2033_);
return v___x_2063_;
}
}
else
{
lean_object* v___f_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___f_2076_; uint8_t v___x_2077_; lean_object* v_val_2079_; lean_object* v___x_2083_; 
lean_dec_ref(v___f_2033_);
lean_dec_ref(v___f_2032_);
lean_inc(v_a_2046_);
v___f_2073_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2073_, 0, v_a_2046_);
v___x_2074_ = lean_box_uint32(v_op_2029_);
v___x_2075_ = lean_box_uint64(v_flags_2030_);
lean_inc(v_payload_2031_);
v___f_2076_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2076_, 0, v___f_2073_);
lean_closure_set(v___f_2076_, 1, v_a_2046_);
lean_closure_set(v___f_2076_, 2, v___x_2074_);
lean_closure_set(v___f_2076_, 3, v___x_2075_);
lean_closure_set(v___f_2076_, 4, v_payload_2031_);
v___x_2077_ = 0;
v___x_2083_ = l_Lasm_JS_Wire_encodeIO(v_payload_2031_);
lean_dec(v_payload_2031_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v___x_2086_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2084_);
lean_dec_ref_known(v___x_2083_, 1);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_a_2084_);
v___x_2086_ = v___x_2048_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2084_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
v_val_2079_ = v___x_2086_;
goto v___jp_2078_;
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; 
v_a_2088_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2083_, 1);
if (v_isShared_2049_ == 0)
{
lean_ctor_set_tag(v___x_2048_, 0);
lean_ctor_set(v___x_2048_, 0, v_a_2088_);
v___x_2090_ = v___x_2048_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2088_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
v_val_2079_ = v___x_2090_;
goto v___jp_2078_;
}
}
v___jp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v_val_2079_);
v___x_2081_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2051_, v___x_2077_, v___x_2080_, v___f_2076_);
v___x_2082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2051_, v___x_2077_, v___x_2081_, v___f_2034_);
return v___x_2082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9___boxed(lean_object* v_failurePrefix_2093_, lean_object* v_op_2094_, lean_object* v_flags_2095_, lean_object* v_payload_2096_, lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v___f_2099_, lean_object* v_x_2100_, lean_object* v___y_2101_){
_start:
{
uint32_t v_op_boxed_2102_; uint64_t v_flags_boxed_2103_; lean_object* v_res_2104_; 
v_op_boxed_2102_ = lean_unbox_uint32(v_op_2094_);
lean_dec(v_op_2094_);
v_flags_boxed_2103_ = lean_unbox_uint64(v_flags_2095_);
lean_dec_ref(v_flags_2095_);
v_res_2104_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9(v_failurePrefix_2093_, v_op_boxed_2102_, v_flags_boxed_2103_, v_payload_2096_, v___f_2097_, v___f_2098_, v___f_2099_, v_x_2100_);
lean_dec_ref(v_failurePrefix_2093_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2105_, lean_object* v_bytes_2106_){
_start:
{
lean_object* v___x_2108_; uint8_t v___x_2109_; lean_object* v_val_2111_; lean_object* v___x_2114_; 
v___x_2108_ = lean_unsigned_to_nat(0u);
v___x_2109_ = 0;
v___x_2114_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2106_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2114_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2114_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
lean_ctor_set_tag(v___x_2117_, 1);
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
v_val_2111_ = v___x_2120_;
goto v___jp_2110_;
}
}
}
else
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
v_a_2123_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v___x_2114_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2114_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set_tag(v___x_2125_, 0);
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_a_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
v_val_2111_ = v___x_2128_;
goto v___jp_2110_;
}
}
}
v___jp_2110_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_val_2111_);
v___x_2113_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2108_, v___x_2109_, v___x_2112_, v___f_2105_);
return v___x_2113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2131_, lean_object* v_bytes_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(v___f_2131_, v_bytes_2132_);
lean_dec_ref(v_bytes_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(lean_object* v___f_2135_, lean_object* v_x_2136_){
_start:
{
if (lean_obj_tag(v_x_2136_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2146_; 
lean_dec_ref(v___f_2135_);
v_a_2138_ = lean_ctor_get(v_x_2136_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_x_2136_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2140_ = v_x_2136_;
v_isShared_2141_ = v_isSharedCheck_2146_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v_x_2136_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2146_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; 
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
return v___x_2144_;
}
}
}
else
{
lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2158_; 
v_isSharedCheck_2158_ = !lean_is_exclusive(v_x_2136_);
if (v_isSharedCheck_2158_ == 0)
{
lean_object* v_unused_2159_; 
v_unused_2159_ = lean_ctor_get(v_x_2136_, 0);
lean_dec(v_unused_2159_);
v___x_2148_ = v_x_2136_;
v_isShared_2149_ = v_isSharedCheck_2158_;
goto v_resetjp_2147_;
}
else
{
lean_dec(v_x_2136_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2158_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2150_ = lean_unsigned_to_nat(0u);
v___x_2151_ = 0;
v___x_2152_ = lean_io_promise_new();
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2152_);
v___x_2154_ = v___x_2148_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
v___x_2156_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2150_, v___x_2151_, v___x_2155_, v___f_2135_);
return v___x_2156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_2160_, lean_object* v_x_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(v___f_2160_, v_x_2161_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(uint32_t v_op_2169_, uint64_t v_flags_2170_, lean_object* v_payload_2171_, lean_object* v_failurePrefix_2172_){
_start:
{
lean_object* v___f_2174_; lean_object* v___f_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___f_2178_; lean_object* v___f_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; lean_object* v_val_2183_; lean_object* v___x_2186_; 
v___f_2174_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2172_);
v___f_2175_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2175_, 0, v_failurePrefix_2172_);
v___x_2176_ = lean_box_uint32(v_op_2169_);
v___x_2177_ = lean_box_uint64(v_flags_2170_);
v___f_2178_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2178_, 0, v_failurePrefix_2172_);
lean_closure_set(v___f_2178_, 1, v___x_2176_);
lean_closure_set(v___f_2178_, 2, v___x_2177_);
lean_closure_set(v___f_2178_, 3, v_payload_2171_);
lean_closure_set(v___f_2178_, 4, v___f_2175_);
lean_closure_set(v___f_2178_, 5, v___f_2174_);
lean_closure_set(v___f_2178_, 6, v___f_2174_);
v___f_2179_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2179_, 0, v___f_2178_);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = 0;
v___x_2186_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2186_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2186_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
lean_ctor_set_tag(v___x_2189_, 1);
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
v_val_2183_ = v___x_2192_;
goto v___jp_2182_;
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
v_a_2195_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2186_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2186_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 0);
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_val_2183_ = v___x_2200_;
goto v___jp_2182_;
}
}
}
v___jp_2182_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v_val_2183_);
v___x_2185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2180_, v___x_2181_, v___x_2184_, v___f_2179_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___boxed(lean_object* v_op_2203_, lean_object* v_flags_2204_, lean_object* v_payload_2205_, lean_object* v_failurePrefix_2206_, lean_object* v_a_2207_){
_start:
{
uint32_t v_op_boxed_2208_; uint64_t v_flags_boxed_2209_; lean_object* v_res_2210_; 
v_op_boxed_2208_ = lean_unbox_uint32(v_op_2203_);
lean_dec(v_op_2203_);
v_flags_boxed_2209_ = lean_unbox_uint64(v_flags_2204_);
lean_dec_ref(v_flags_2204_);
v_res_2210_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_boxed_2208_, v_flags_boxed_2209_, v_payload_2205_, v_failurePrefix_2206_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(lean_object* v_b_2211_, lean_object* v_args_2212_){
_start:
{
uint8_t v_construct_2214_; lean_object* v___x_2215_; uint32_t v___x_2216_; uint64_t v___x_2217_; uint64_t v___y_2219_; 
v_construct_2214_ = lean_ctor_get_uint8(v_b_2211_, sizeof(void*)*4);
v___x_2215_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2211_);
v___x_2216_ = 214;
v___x_2217_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2214_ == 0)
{
uint64_t v___x_2227_; 
v___x_2227_ = 0ULL;
v___y_2219_ = v___x_2227_;
goto v___jp_2218_;
}
else
{
uint64_t v___x_2228_; 
v___x_2228_ = 4ULL;
v___y_2219_ = v___x_2228_;
goto v___jp_2218_;
}
v___jp_2218_:
{
uint64_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2220_ = lean_uint64_lor(v___x_2217_, v___y_2219_);
v___x_2221_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2211_, v_args_2212_);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2223_ = lean_string_append(v___x_2222_, v___x_2215_);
lean_dec_ref(v___x_2215_);
v___x_2224_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2225_ = lean_string_append(v___x_2223_, v___x_2224_);
v___x_2226_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v___x_2216_, v___x_2220_, v___x_2221_, v___x_2225_);
return v___x_2226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0___boxed(lean_object* v_b_2229_, lean_object* v_args_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v_b_2229_, v_args_2230_);
lean_dec_ref(v_b_2229_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson(lean_object* v_a_2239_){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2241_ = ((lean_object*)(l_Lasm_Web_Raw_responseJson___closed__1));
v___x_2242_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2243_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2244_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2244_, 0, v_a_2239_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = lean_array_push(v___x_2242_, v___x_2244_);
v___x_2246_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v___x_2241_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson___boxed(lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lasm_Web_Raw_responseJson(v_a_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2250_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v_d_2250_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(v_d_2253_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(lean_object* v_context_2256_, lean_object* v_d_2257_){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v_d_2257_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2260_, lean_object* v_d_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(v_context_2260_, v_d_2261_);
lean_dec_ref(v_context_2260_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(lean_object* v_context_2264_, uint32_t v_op_2265_, uint64_t v_flags_2266_, lean_object* v_payload_2267_, lean_object* v_failurePrefix_2268_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_2265_, v_flags_2266_, v_payload_2267_, v_failurePrefix_2268_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___boxed(lean_object* v_context_2271_, lean_object* v_op_2272_, lean_object* v_flags_2273_, lean_object* v_payload_2274_, lean_object* v_failurePrefix_2275_, lean_object* v_a_2276_){
_start:
{
uint32_t v_op_boxed_2277_; uint64_t v_flags_boxed_2278_; lean_object* v_res_2279_; 
v_op_boxed_2277_ = lean_unbox_uint32(v_op_2272_);
lean_dec(v_op_2272_);
v_flags_boxed_2278_ = lean_unbox_uint64(v_flags_2273_);
lean_dec_ref(v_flags_2273_);
v_res_2279_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(v_context_2271_, v_op_boxed_2277_, v_flags_boxed_2278_, v_payload_2274_, v_failurePrefix_2275_);
lean_dec_ref(v_context_2271_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(lean_object* v_context_2281_, lean_object* v_d_2282_){
_start:
{
lean_object* v___y_2285_; lean_object* v___y_2286_; 
if (lean_obj_tag(v_d_2282_) == 6)
{
lean_object* v_b_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
v_b_2290_ = lean_ctor_get(v_d_2282_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v_d_2282_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v_d_2282_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_b_2290_);
lean_dec(v_d_2282_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
lean_ctor_set_tag(v___x_2292_, 0);
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_b_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
else
{
lean_object* v___x_2298_; lean_object* v_received_2300_; 
v___x_2298_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2282_) == 9)
{
lean_object* v_value_2314_; lean_object* v_description_2315_; uint8_t v___x_2316_; 
v_value_2314_ = lean_ctor_get(v_d_2282_, 0);
v_description_2315_ = lean_ctor_get(v_d_2282_, 1);
v___x_2316_ = lean_string_dec_eq(v_description_2315_, v___x_2298_);
if (v___x_2316_ == 0)
{
goto v___jp_2312_;
}
else
{
uint32_t v___x_2317_; uint64_t v___x_2318_; lean_object* v___x_2319_; uint32_t v___x_2320_; lean_object* v___x_2321_; 
lean_inc_n(v_value_2314_, 2);
lean_dec_ref_known(v_d_2282_, 2);
v___x_2317_ = 206;
v___x_2318_ = 0ULL;
v___x_2319_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2319_, 0, v_value_2314_);
lean_ctor_set(v___x_2319_, 1, v___x_2298_);
v___x_2320_ = lasm_js_value_handle(v_value_2314_);
lean_dec(v_value_2314_);
v___x_2321_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2317_, v___x_2318_, v___x_2319_, v___x_2320_);
lean_dec_ref_known(v___x_2319_, 2);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; uint8_t v___x_2323_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2321_, 1);
v___x_2323_ = lean_string_validate_utf8(v_a_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
lean_dec(v_a_2322_);
v___x_2324_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2325_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2324_);
v_received_2300_ = v___x_2325_;
goto v___jp_2299_;
}
else
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_string_from_utf8_unchecked(v_a_2322_);
v_received_2300_ = v___x_2326_;
goto v___jp_2299_;
}
}
else
{
lean_object* v___x_2327_; 
lean_dec_ref_known(v___x_2321_, 1);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2300_ = v___x_2327_;
goto v___jp_2299_;
}
}
}
else
{
goto v___jp_2312_;
}
v___jp_2299_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v___x_2301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2302_ = lean_string_append(v___x_2301_, v_context_2281_);
v___x_2303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2304_ = lean_string_append(v___x_2302_, v___x_2303_);
v___x_2305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0));
v___x_2306_ = lean_string_append(v___x_2304_, v___x_2305_);
v___x_2307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2308_ = lean_string_append(v___x_2306_, v___x_2307_);
v___x_2309_ = lean_string_append(v___x_2308_, v_received_2300_);
lean_dec_ref(v_received_2300_);
v___x_2310_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2310_ == 0)
{
lean_object* v___x_2311_; 
v___x_2311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2285_ = v___x_2309_;
v___y_2286_ = v___x_2311_;
goto v___jp_2284_;
}
else
{
v___y_2285_ = v___x_2309_;
v___y_2286_ = v___x_2298_;
goto v___jp_2284_;
}
}
v___jp_2312_:
{
lean_object* v___x_2313_; 
v___x_2313_ = l_Lasm_JS_Data_describe(v_d_2282_);
v_received_2300_ = v___x_2313_;
goto v___jp_2299_;
}
}
v___jp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_string_append(v___y_2285_, v___y_2286_);
v___x_2288_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
return v___x_2289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2328_, lean_object* v_d_2329_, lean_object* v_a_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2328_, v_d_2329_);
lean_dec_ref(v_context_2328_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(lean_object* v_context_2332_, lean_object* v_x_2333_){
_start:
{
lean_object* v_val_2336_; 
if (lean_obj_tag(v_x_2333_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2346_; 
v_a_2338_ = lean_ctor_get(v_x_2333_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2333_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2340_ = v_x_2333_;
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v_x_2333_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2346_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2360_; 
v_a_2347_ = lean_ctor_get(v_x_2333_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_x_2333_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2349_ = v_x_2333_;
v_isShared_2350_ = v_isSharedCheck_2360_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2333_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2360_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2332_, v_a_2347_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2352_);
v___x_2354_ = v___x_2349_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2352_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
v_val_2336_ = v___x_2354_;
goto v___jp_2335_;
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; 
v_a_2356_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2351_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2356_);
v___x_2358_ = v___x_2349_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_a_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
v_val_2336_ = v___x_2358_;
goto v___jp_2335_;
}
}
}
}
v___jp_2335_:
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2337_, 0, v_val_2336_);
return v___x_2337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed(lean_object* v_context_2361_, lean_object* v_x_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(v_context_2361_, v_x_2362_);
lean_dec_ref(v_context_2361_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(lean_object* v___f_2365_, lean_object* v_bytes_2366_){
_start:
{
lean_object* v___x_2368_; uint8_t v___x_2369_; lean_object* v_val_2371_; lean_object* v___x_2374_; 
v___x_2368_ = lean_unsigned_to_nat(0u);
v___x_2369_ = 0;
v___x_2374_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2366_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
lean_ctor_set_tag(v___x_2377_, 1);
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
v_val_2371_ = v___x_2380_;
goto v___jp_2370_;
}
}
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
v_a_2383_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2374_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2374_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set_tag(v___x_2385_, 0);
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
v_val_2371_ = v___x_2388_;
goto v___jp_2370_;
}
}
}
v___jp_2370_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2372_, 0, v_val_2371_);
v___x_2373_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2368_, v___x_2369_, v___x_2372_, v___f_2365_);
return v___x_2373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed(lean_object* v___f_2391_, lean_object* v_bytes_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(v___f_2391_, v_bytes_2392_);
lean_dec_ref(v_bytes_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(lean_object* v___f_2395_, lean_object* v_x_2396_){
_start:
{
if (lean_obj_tag(v_x_2396_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2406_; 
lean_dec_ref(v___f_2395_);
v_a_2398_ = lean_ctor_get(v_x_2396_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_x_2396_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2400_ = v_x_2396_;
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v_x_2396_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
return v___x_2404_;
}
}
}
else
{
lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2418_; 
v_isSharedCheck_2418_ = !lean_is_exclusive(v_x_2396_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v_x_2396_, 0);
lean_dec(v_unused_2419_);
v___x_2408_ = v_x_2396_;
v_isShared_2409_ = v_isSharedCheck_2418_;
goto v_resetjp_2407_;
}
else
{
lean_dec(v_x_2396_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2418_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; uint8_t v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2410_ = lean_unsigned_to_nat(0u);
v___x_2411_ = 0;
v___x_2412_ = lean_io_promise_new();
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v___x_2412_);
v___x_2414_ = v___x_2408_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
v___x_2416_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2410_, v___x_2411_, v___x_2415_, v___f_2395_);
return v___x_2416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed(lean_object* v___f_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(v___f_2420_, v_x_2421_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(lean_object* v___f_2424_, lean_object* v_x_2425_){
_start:
{
if (lean_obj_tag(v_x_2425_) == 0)
{
lean_object* v___x_2427_; 
lean_dec_ref(v___f_2424_);
v___x_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2427_, 0, v_x_2425_);
return v___x_2427_;
}
else
{
lean_object* v_a_2428_; lean_object* v___x_2429_; 
v_a_2428_ = lean_ctor_get(v_x_2425_, 0);
lean_inc(v_a_2428_);
lean_dec_ref_known(v_x_2425_, 1);
v___x_2429_ = lean_apply_2(v___f_2424_, v_a_2428_, lean_box(0));
return v___x_2429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed(lean_object* v___f_2430_, lean_object* v_x_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(v___f_2430_, v_x_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_2434_, uint32_t v_op_2435_, uint64_t v_flags_2436_, lean_object* v_payload_2437_, lean_object* v___f_2438_, lean_object* v___f_2439_, lean_object* v___f_2440_, lean_object* v_x_2441_){
_start:
{
if (lean_obj_tag(v_x_2441_) == 0)
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2451_; 
lean_dec_ref(v___f_2440_);
lean_dec_ref(v___f_2439_);
lean_dec_ref(v___f_2438_);
lean_dec(v_payload_2437_);
v_a_2443_ = lean_ctor_get(v_x_2441_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_x_2441_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2445_ = v_x_2441_;
v_isShared_2446_ = v_isSharedCheck_2451_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v_x_2441_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2451_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; 
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
return v___x_2449_;
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2498_; 
v_a_2452_ = lean_ctor_get(v_x_2441_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_x_2441_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2454_ = v_x_2441_;
v_isShared_2455_ = v_isSharedCheck_2498_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v_x_2441_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2498_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2456_ = lean_string_utf8_byte_size(v_failurePrefix_2434_);
v___x_2457_ = lean_unsigned_to_nat(0u);
v___x_2458_ = lean_nat_dec_eq(v___x_2456_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_object* v___f_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; lean_object* v_val_2465_; lean_object* v___x_2470_; 
lean_dec_ref(v___f_2440_);
lean_inc(v_a_2452_);
v___f_2459_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2459_, 0, v_a_2452_);
v___x_2460_ = lean_box(v___x_2458_);
v___x_2461_ = lean_box_uint32(v_op_2435_);
v___x_2462_ = lean_box_uint64(v_flags_2436_);
lean_inc(v_payload_2437_);
v___f_2463_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2463_, 0, v___x_2457_);
lean_closure_set(v___f_2463_, 1, v___x_2460_);
lean_closure_set(v___f_2463_, 2, v___f_2459_);
lean_closure_set(v___f_2463_, 3, v_a_2452_);
lean_closure_set(v___f_2463_, 4, v___x_2461_);
lean_closure_set(v___f_2463_, 5, v___x_2462_);
lean_closure_set(v___f_2463_, 6, v_payload_2437_);
v___x_2470_ = l_Lasm_JS_Wire_encodeIO(v_payload_2437_);
lean_dec(v_payload_2437_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_a_2471_);
v___x_2473_ = v___x_2454_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
v_val_2465_ = v___x_2473_;
goto v___jp_2464_;
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; 
v_a_2475_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2455_ == 0)
{
lean_ctor_set_tag(v___x_2454_, 0);
lean_ctor_set(v___x_2454_, 0, v_a_2475_);
v___x_2477_ = v___x_2454_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2475_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
v_val_2465_ = v___x_2477_;
goto v___jp_2464_;
}
}
v___jp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2466_, 0, v_val_2465_);
v___x_2467_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2457_, v___x_2458_, v___x_2466_, v___f_2463_);
v___x_2468_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2457_, v___x_2458_, v___x_2467_, v___f_2438_);
v___x_2469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2457_, v___x_2458_, v___x_2468_, v___f_2439_);
return v___x_2469_;
}
}
else
{
lean_object* v___f_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___f_2482_; uint8_t v___x_2483_; lean_object* v_val_2485_; lean_object* v___x_2489_; 
lean_dec_ref(v___f_2439_);
lean_dec_ref(v___f_2438_);
lean_inc(v_a_2452_);
v___f_2479_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2479_, 0, v_a_2452_);
v___x_2480_ = lean_box_uint32(v_op_2435_);
v___x_2481_ = lean_box_uint64(v_flags_2436_);
lean_inc(v_payload_2437_);
v___f_2482_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2482_, 0, v___f_2479_);
lean_closure_set(v___f_2482_, 1, v_a_2452_);
lean_closure_set(v___f_2482_, 2, v___x_2480_);
lean_closure_set(v___f_2482_, 3, v___x_2481_);
lean_closure_set(v___f_2482_, 4, v_payload_2437_);
v___x_2483_ = 0;
v___x_2489_ = l_Lasm_JS_Wire_encodeIO(v_payload_2437_);
lean_dec(v_payload_2437_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_object* v_a_2490_; lean_object* v___x_2492_; 
v_a_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_a_2490_);
lean_dec_ref_known(v___x_2489_, 1);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_a_2490_);
v___x_2492_ = v___x_2454_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
v_val_2485_ = v___x_2492_;
goto v___jp_2484_;
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; 
v_a_2494_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_a_2494_);
lean_dec_ref_known(v___x_2489_, 1);
if (v_isShared_2455_ == 0)
{
lean_ctor_set_tag(v___x_2454_, 0);
lean_ctor_set(v___x_2454_, 0, v_a_2494_);
v___x_2496_ = v___x_2454_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
v_val_2485_ = v___x_2496_;
goto v___jp_2484_;
}
}
v___jp_2484_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v_val_2485_);
v___x_2487_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2457_, v___x_2483_, v___x_2486_, v___f_2482_);
v___x_2488_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2457_, v___x_2483_, v___x_2487_, v___f_2440_);
return v___x_2488_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_2499_, lean_object* v_op_2500_, lean_object* v_flags_2501_, lean_object* v_payload_2502_, lean_object* v___f_2503_, lean_object* v___f_2504_, lean_object* v___f_2505_, lean_object* v_x_2506_, lean_object* v___y_2507_){
_start:
{
uint32_t v_op_boxed_2508_; uint64_t v_flags_boxed_2509_; lean_object* v_res_2510_; 
v_op_boxed_2508_ = lean_unbox_uint32(v_op_2500_);
lean_dec(v_op_2500_);
v_flags_boxed_2509_ = lean_unbox_uint64(v_flags_2501_);
lean_dec_ref(v_flags_2501_);
v_res_2510_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9(v_failurePrefix_2499_, v_op_boxed_2508_, v_flags_boxed_2509_, v_payload_2502_, v___f_2503_, v___f_2504_, v___f_2505_, v_x_2506_);
lean_dec_ref(v_failurePrefix_2499_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(lean_object* v_context_2511_, uint32_t v_op_2512_, uint64_t v_flags_2513_, lean_object* v_payload_2514_, lean_object* v_failurePrefix_2515_){
_start:
{
lean_object* v___f_2517_; lean_object* v___f_2518_; lean_object* v___f_2519_; lean_object* v___f_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___f_2523_; lean_object* v___f_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v_val_2528_; lean_object* v___x_2531_; 
v___f_2517_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2517_, 0, v_context_2511_);
v___f_2518_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2518_, 0, v___f_2517_);
v___f_2519_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2519_, 0, v___f_2518_);
lean_inc_ref(v_failurePrefix_2515_);
v___f_2520_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2520_, 0, v_failurePrefix_2515_);
v___x_2521_ = lean_box_uint32(v_op_2512_);
v___x_2522_ = lean_box_uint64(v_flags_2513_);
lean_inc_ref(v___f_2519_);
v___f_2523_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2523_, 0, v_failurePrefix_2515_);
lean_closure_set(v___f_2523_, 1, v___x_2521_);
lean_closure_set(v___f_2523_, 2, v___x_2522_);
lean_closure_set(v___f_2523_, 3, v_payload_2514_);
lean_closure_set(v___f_2523_, 4, v___f_2520_);
lean_closure_set(v___f_2523_, 5, v___f_2519_);
lean_closure_set(v___f_2523_, 6, v___f_2519_);
v___f_2524_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2524_, 0, v___f_2523_);
v___x_2525_ = lean_unsigned_to_nat(0u);
v___x_2526_ = 0;
v___x_2531_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2531_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2531_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
lean_ctor_set_tag(v___x_2534_, 1);
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
v_val_2528_ = v___x_2537_;
goto v___jp_2527_;
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
v_a_2540_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2531_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2531_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
lean_ctor_set_tag(v___x_2542_, 0);
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
v_val_2528_ = v___x_2545_;
goto v___jp_2527_;
}
}
}
v___jp_2527_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2529_, 0, v_val_2528_);
v___x_2530_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2525_, v___x_2526_, v___x_2529_, v___f_2524_);
return v___x_2530_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___boxed(lean_object* v_context_2548_, lean_object* v_op_2549_, lean_object* v_flags_2550_, lean_object* v_payload_2551_, lean_object* v_failurePrefix_2552_, lean_object* v_a_2553_){
_start:
{
uint32_t v_op_boxed_2554_; uint64_t v_flags_boxed_2555_; lean_object* v_res_2556_; 
v_op_boxed_2554_ = lean_unbox_uint32(v_op_2549_);
lean_dec(v_op_2549_);
v_flags_boxed_2555_ = lean_unbox_uint64(v_flags_2550_);
lean_dec_ref(v_flags_2550_);
v_res_2556_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v_context_2548_, v_op_boxed_2554_, v_flags_boxed_2555_, v_payload_2551_, v_failurePrefix_2552_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(lean_object* v_b_2557_, lean_object* v_args_2558_){
_start:
{
uint8_t v_construct_2560_; lean_object* v___x_2561_; uint32_t v___x_2562_; uint64_t v___x_2563_; uint64_t v___y_2565_; 
v_construct_2560_ = lean_ctor_get_uint8(v_b_2557_, sizeof(void*)*4);
v___x_2561_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2557_);
v___x_2562_ = 214;
v___x_2563_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2560_ == 0)
{
uint64_t v___x_2573_; 
v___x_2573_ = 0ULL;
v___y_2565_ = v___x_2573_;
goto v___jp_2564_;
}
else
{
uint64_t v___x_2574_; 
v___x_2574_ = 4ULL;
v___y_2565_ = v___x_2574_;
goto v___jp_2564_;
}
v___jp_2564_:
{
uint64_t v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2566_ = lean_uint64_lor(v___x_2563_, v___y_2565_);
v___x_2567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2557_, v_args_2558_);
v___x_2568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2569_ = lean_string_append(v___x_2568_, v___x_2561_);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2571_ = lean_string_append(v___x_2569_, v___x_2570_);
v___x_2572_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v___x_2561_, v___x_2562_, v___x_2566_, v___x_2567_, v___x_2571_);
return v___x_2572_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0___boxed(lean_object* v_b_2575_, lean_object* v_args_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v_b_2575_, v_args_2576_);
lean_dec_ref(v_b_2575_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes(lean_object* v_a_2585_){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2587_ = ((lean_object*)(l_Lasm_Web_Raw_responseBytes___closed__1));
v___x_2588_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2589_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2590_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2590_, 0, v_a_2585_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = lean_array_push(v___x_2588_, v___x_2590_);
v___x_2592_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v___x_2587_, v___x_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes___boxed(lean_object* v_a_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lasm_Web_Raw_responseBytes(v_a_2593_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(lean_object* v_context_2597_, lean_object* v_d_2598_){
_start:
{
lean_object* v___y_2601_; lean_object* v___y_2602_; 
if (lean_obj_tag(v_d_2598_) == 9)
{
lean_object* v_value_2606_; lean_object* v___x_2607_; 
v_value_2606_ = lean_ctor_get(v_d_2598_, 0);
lean_inc(v_value_2606_);
lean_dec_ref_known(v_d_2598_, 2);
v___x_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2607_, 0, v_value_2606_);
return v___x_2607_;
}
else
{
lean_object* v___x_2608_; lean_object* v_received_2610_; 
v___x_2608_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2598_) == 9)
{
lean_object* v_value_2624_; lean_object* v_description_2625_; uint8_t v___x_2626_; 
v_value_2624_ = lean_ctor_get(v_d_2598_, 0);
v_description_2625_ = lean_ctor_get(v_d_2598_, 1);
v___x_2626_ = lean_string_dec_eq(v_description_2625_, v___x_2608_);
if (v___x_2626_ == 0)
{
goto v___jp_2622_;
}
else
{
uint32_t v___x_2627_; uint64_t v___x_2628_; lean_object* v___x_2629_; uint32_t v___x_2630_; lean_object* v___x_2631_; 
lean_inc_n(v_value_2624_, 2);
lean_dec_ref_known(v_d_2598_, 2);
v___x_2627_ = 206;
v___x_2628_ = 0ULL;
v___x_2629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2629_, 0, v_value_2624_);
lean_ctor_set(v___x_2629_, 1, v___x_2608_);
v___x_2630_ = lasm_js_value_handle(v_value_2624_);
lean_dec(v_value_2624_);
v___x_2631_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2627_, v___x_2628_, v___x_2629_, v___x_2630_);
lean_dec_ref_known(v___x_2629_, 2);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; uint8_t v___x_2633_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2633_ = lean_string_validate_utf8(v_a_2632_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
lean_dec(v_a_2632_);
v___x_2634_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2635_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2634_);
v_received_2610_ = v___x_2635_;
goto v___jp_2609_;
}
else
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_string_from_utf8_unchecked(v_a_2632_);
v_received_2610_ = v___x_2636_;
goto v___jp_2609_;
}
}
else
{
lean_object* v___x_2637_; 
lean_dec_ref_known(v___x_2631_, 1);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2610_ = v___x_2637_;
goto v___jp_2609_;
}
}
}
else
{
goto v___jp_2622_;
}
v___jp_2609_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2611_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2612_ = lean_string_append(v___x_2611_, v_context_2597_);
v___x_2613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2614_ = lean_string_append(v___x_2612_, v___x_2613_);
v___x_2615_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0));
v___x_2616_ = lean_string_append(v___x_2614_, v___x_2615_);
v___x_2617_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2618_ = lean_string_append(v___x_2616_, v___x_2617_);
v___x_2619_ = lean_string_append(v___x_2618_, v_received_2610_);
lean_dec_ref(v_received_2610_);
v___x_2620_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2620_ == 0)
{
lean_object* v___x_2621_; 
v___x_2621_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2601_ = v___x_2619_;
v___y_2602_ = v___x_2621_;
goto v___jp_2600_;
}
else
{
v___y_2601_ = v___x_2619_;
v___y_2602_ = v___x_2608_;
goto v___jp_2600_;
}
}
v___jp_2622_:
{
lean_object* v___x_2623_; 
v___x_2623_ = l_Lasm_JS_Data_describe(v_d_2598_);
v_received_2610_ = v___x_2623_;
goto v___jp_2609_;
}
}
v___jp_2600_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2603_ = lean_string_append(v___y_2601_, v___y_2602_);
v___x_2604_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
v___x_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___boxed(lean_object* v_context_2638_, lean_object* v_d_2639_, lean_object* v_a_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v_context_2638_, v_d_2639_);
lean_dec_ref(v_context_2638_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(lean_object* v_b_2642_, lean_object* v_args_2643_, uint8_t v_await_2644_){
_start:
{
uint64_t v___y_2647_; uint64_t v___y_2648_; uint64_t v___x_2691_; uint64_t v___y_2693_; 
v___x_2691_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2644_ == 0)
{
uint64_t v___x_2698_; 
v___x_2698_ = 0ULL;
v___y_2693_ = v___x_2698_;
goto v___jp_2692_;
}
else
{
uint64_t v___x_2699_; 
v___x_2699_ = 2ULL;
v___y_2693_ = v___x_2699_;
goto v___jp_2692_;
}
v___jp_2646_:
{
uint64_t v_flags_2649_; uint32_t v___x_2650_; lean_object* v___x_2651_; uint32_t v___x_2652_; lean_object* v___x_2653_; 
v_flags_2649_ = lean_uint64_lor(v___y_2647_, v___y_2648_);
v___x_2650_ = 214;
v___x_2651_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2642_, v_args_2643_);
v___x_2652_ = 0;
v___x_2653_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2650_, v_flags_2649_, v___x_2651_, v___x_2652_);
lean_dec(v___x_2651_);
if (lean_obj_tag(v___x_2653_) == 0)
{
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; lean_object* v___x_2655_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2653_, 1);
v___x_2655_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2654_);
lean_dec(v_a_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v___x_2657_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2642_);
v___x_2658_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v___x_2657_, v_a_2656_);
lean_dec_ref(v___x_2657_);
return v___x_2658_;
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
v_a_2659_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2655_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2655_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
v_a_2667_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2653_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2653_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set_tag(v___x_2669_, 1);
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2690_; 
v_a_2675_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2677_ = v___x_2653_;
v_isShared_2678_ = v_isSharedCheck_2690_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2653_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2690_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2688_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2680_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2642_);
v___x_2681_ = lean_string_append(v___x_2679_, v___x_2680_);
lean_dec_ref(v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2683_ = lean_string_append(v___x_2681_, v___x_2682_);
v___x_2684_ = lean_io_error_to_string(v_a_2675_);
v___x_2685_ = lean_string_append(v___x_2683_, v___x_2684_);
lean_dec_ref(v___x_2684_);
v___x_2686_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2686_);
v___x_2688_ = v___x_2677_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
v___jp_2692_:
{
uint8_t v_construct_2694_; uint64_t v___x_2695_; 
v_construct_2694_ = lean_ctor_get_uint8(v_b_2642_, sizeof(void*)*4);
v___x_2695_ = lean_uint64_lor(v___x_2691_, v___y_2693_);
if (v_construct_2694_ == 0)
{
uint64_t v___x_2696_; 
v___x_2696_ = 0ULL;
v___y_2647_ = v___x_2695_;
v___y_2648_ = v___x_2696_;
goto v___jp_2646_;
}
else
{
uint64_t v___x_2697_; 
v___x_2697_ = 4ULL;
v___y_2647_ = v___x_2695_;
v___y_2648_ = v___x_2697_;
goto v___jp_2646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0___boxed(lean_object* v_b_2700_, lean_object* v_args_2701_, lean_object* v_await_2702_, lean_object* v_a_2703_){
_start:
{
uint8_t v_await_boxed_2704_; lean_object* v_res_2705_; 
v_await_boxed_2704_ = lean_unbox(v_await_2702_);
v_res_2705_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v_b_2700_, v_args_2701_, v_await_boxed_2704_);
lean_dec_ref(v_b_2700_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController(){
_start:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; uint8_t v___x_2715_; lean_object* v___x_2716_; 
v___x_2713_ = ((lean_object*)(l_Lasm_Web_Raw_abortController___closed__1));
v___x_2714_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2715_ = 1;
v___x_2716_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v___x_2713_, v___x_2714_, v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController___boxed(lean_object* v_a_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Lasm_Web_Raw_abortController();
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(lean_object* v_context_2720_, lean_object* v_d_2721_){
_start:
{
lean_object* v___y_2724_; lean_object* v___y_2725_; 
if (lean_obj_tag(v_d_2721_) == 9)
{
lean_object* v_value_2729_; lean_object* v___x_2730_; 
v_value_2729_ = lean_ctor_get(v_d_2721_, 0);
lean_inc(v_value_2729_);
lean_dec_ref_known(v_d_2721_, 2);
v___x_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2730_, 0, v_value_2729_);
return v___x_2730_;
}
else
{
lean_object* v___x_2731_; lean_object* v_received_2733_; 
v___x_2731_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2721_) == 9)
{
lean_object* v_value_2747_; lean_object* v_description_2748_; uint8_t v___x_2749_; 
v_value_2747_ = lean_ctor_get(v_d_2721_, 0);
v_description_2748_ = lean_ctor_get(v_d_2721_, 1);
v___x_2749_ = lean_string_dec_eq(v_description_2748_, v___x_2731_);
if (v___x_2749_ == 0)
{
goto v___jp_2745_;
}
else
{
uint32_t v___x_2750_; uint64_t v___x_2751_; lean_object* v___x_2752_; uint32_t v___x_2753_; lean_object* v___x_2754_; 
lean_inc_n(v_value_2747_, 2);
lean_dec_ref_known(v_d_2721_, 2);
v___x_2750_ = 206;
v___x_2751_ = 0ULL;
v___x_2752_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2752_, 0, v_value_2747_);
lean_ctor_set(v___x_2752_, 1, v___x_2731_);
v___x_2753_ = lasm_js_value_handle(v_value_2747_);
lean_dec(v_value_2747_);
v___x_2754_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2750_, v___x_2751_, v___x_2752_, v___x_2753_);
lean_dec_ref_known(v___x_2752_, 2);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; uint8_t v___x_2756_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
v___x_2756_ = lean_string_validate_utf8(v_a_2755_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_dec(v_a_2755_);
v___x_2757_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2758_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2757_);
v_received_2733_ = v___x_2758_;
goto v___jp_2732_;
}
else
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_string_from_utf8_unchecked(v_a_2755_);
v_received_2733_ = v___x_2759_;
goto v___jp_2732_;
}
}
else
{
lean_object* v___x_2760_; 
lean_dec_ref_known(v___x_2754_, 1);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2733_ = v___x_2760_;
goto v___jp_2732_;
}
}
}
else
{
goto v___jp_2745_;
}
v___jp_2732_:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2734_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2735_ = lean_string_append(v___x_2734_, v_context_2720_);
v___x_2736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2737_ = lean_string_append(v___x_2735_, v___x_2736_);
v___x_2738_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0));
v___x_2739_ = lean_string_append(v___x_2737_, v___x_2738_);
v___x_2740_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2741_ = lean_string_append(v___x_2739_, v___x_2740_);
v___x_2742_ = lean_string_append(v___x_2741_, v_received_2733_);
lean_dec_ref(v_received_2733_);
v___x_2743_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; 
v___x_2744_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2724_ = v___x_2742_;
v___y_2725_ = v___x_2744_;
goto v___jp_2723_;
}
else
{
v___y_2724_ = v___x_2742_;
v___y_2725_ = v___x_2731_;
goto v___jp_2723_;
}
}
v___jp_2745_:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Lasm_JS_Data_describe(v_d_2721_);
v_received_2733_ = v___x_2746_;
goto v___jp_2732_;
}
}
v___jp_2723_:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2726_ = lean_string_append(v___y_2724_, v___y_2725_);
v___x_2727_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___boxed(lean_object* v_context_2761_, lean_object* v_d_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v_context_2761_, v_d_2762_);
lean_dec_ref(v_context_2761_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(lean_object* v_b_2765_, lean_object* v_args_2766_, uint8_t v_await_2767_){
_start:
{
uint64_t v___y_2770_; uint64_t v___y_2771_; uint64_t v___x_2814_; uint64_t v___y_2816_; 
v___x_2814_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2767_ == 0)
{
uint64_t v___x_2821_; 
v___x_2821_ = 0ULL;
v___y_2816_ = v___x_2821_;
goto v___jp_2815_;
}
else
{
uint64_t v___x_2822_; 
v___x_2822_ = 2ULL;
v___y_2816_ = v___x_2822_;
goto v___jp_2815_;
}
v___jp_2769_:
{
uint64_t v_flags_2772_; uint32_t v___x_2773_; lean_object* v___x_2774_; uint32_t v___x_2775_; lean_object* v___x_2776_; 
v_flags_2772_ = lean_uint64_lor(v___y_2770_, v___y_2771_);
v___x_2773_ = 214;
v___x_2774_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2765_, v_args_2766_);
v___x_2775_ = 0;
v___x_2776_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2773_, v_flags_2772_, v___x_2774_, v___x_2775_);
lean_dec(v___x_2774_);
if (lean_obj_tag(v___x_2776_) == 0)
{
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2778_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v___x_2776_, 1);
v___x_2778_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2777_);
lean_dec(v_a_2777_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
v___x_2780_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2765_);
v___x_2781_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v___x_2780_, v_a_2779_);
lean_dec_ref(v___x_2780_);
return v___x_2781_;
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
v_a_2782_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2778_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2778_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
v_a_2790_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2776_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2776_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
lean_ctor_set_tag(v___x_2792_, 1);
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
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
else
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2813_; 
v_a_2798_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2800_ = v___x_2776_;
v_isShared_2801_ = v_isSharedCheck_2813_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2776_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2813_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2803_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2765_);
v___x_2804_ = lean_string_append(v___x_2802_, v___x_2803_);
lean_dec_ref(v___x_2803_);
v___x_2805_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2806_ = lean_string_append(v___x_2804_, v___x_2805_);
v___x_2807_ = lean_io_error_to_string(v_a_2798_);
v___x_2808_ = lean_string_append(v___x_2806_, v___x_2807_);
lean_dec_ref(v___x_2807_);
v___x_2809_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2808_);
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 0, v___x_2809_);
v___x_2811_ = v___x_2800_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
v___jp_2815_:
{
uint8_t v_construct_2817_; uint64_t v___x_2818_; 
v_construct_2817_ = lean_ctor_get_uint8(v_b_2765_, sizeof(void*)*4);
v___x_2818_ = lean_uint64_lor(v___x_2814_, v___y_2816_);
if (v_construct_2817_ == 0)
{
uint64_t v___x_2819_; 
v___x_2819_ = 0ULL;
v___y_2770_ = v___x_2818_;
v___y_2771_ = v___x_2819_;
goto v___jp_2769_;
}
else
{
uint64_t v___x_2820_; 
v___x_2820_ = 4ULL;
v___y_2770_ = v___x_2818_;
v___y_2771_ = v___x_2820_;
goto v___jp_2769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0___boxed(lean_object* v_b_2823_, lean_object* v_args_2824_, lean_object* v_await_2825_, lean_object* v_a_2826_){
_start:
{
uint8_t v_await_boxed_2827_; lean_object* v_res_2828_; 
v_await_boxed_2827_ = lean_unbox(v_await_2825_);
v_res_2828_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v_b_2823_, v_args_2824_, v_await_boxed_2827_);
lean_dec_ref(v_b_2823_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal(lean_object* v_a_2835_){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; uint8_t v___x_2842_; lean_object* v___x_2843_; 
v___x_2837_ = ((lean_object*)(l_Lasm_Web_Raw_abortSignal___closed__1));
v___x_2838_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2839_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2840_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2840_, 0, v_a_2835_);
lean_ctor_set(v___x_2840_, 1, v___x_2839_);
v___x_2841_ = lean_array_push(v___x_2838_, v___x_2840_);
v___x_2842_ = 1;
v___x_2843_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2837_, v___x_2841_, v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal___boxed(lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Lasm_Web_Raw_abortSignal(v_a_2844_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(lean_object* v_b_2847_, lean_object* v_args_2848_, uint8_t v_await_2849_){
_start:
{
uint64_t v___y_2852_; uint64_t v___y_2853_; uint64_t v___x_2894_; uint64_t v___y_2896_; 
v___x_2894_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_2849_ == 0)
{
uint64_t v___x_2901_; 
v___x_2901_ = 0ULL;
v___y_2896_ = v___x_2901_;
goto v___jp_2895_;
}
else
{
uint64_t v___x_2902_; 
v___x_2902_ = 2ULL;
v___y_2896_ = v___x_2902_;
goto v___jp_2895_;
}
v___jp_2851_:
{
uint64_t v_flags_2854_; uint32_t v___x_2855_; lean_object* v___x_2856_; uint32_t v___x_2857_; lean_object* v___x_2858_; 
v_flags_2854_ = lean_uint64_lor(v___y_2852_, v___y_2853_);
v___x_2855_ = 214;
v___x_2856_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2847_, v_args_2848_);
v___x_2857_ = 0;
v___x_2858_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2855_, v_flags_2854_, v___x_2856_, v___x_2857_);
lean_dec(v___x_2856_);
if (lean_obj_tag(v___x_2858_) == 0)
{
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2860_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v___x_2860_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2859_);
lean_dec(v_a_2859_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v___x_2861_; 
lean_dec_ref_known(v___x_2860_, 1);
v___x_2861_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_2861_;
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
v_a_2862_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2860_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
v_a_2870_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2858_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2858_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
lean_ctor_set_tag(v___x_2872_, 1);
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2893_; 
v_a_2878_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2880_ = v___x_2858_;
v_isShared_2881_ = v_isSharedCheck_2893_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2858_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2893_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2891_; 
v___x_2882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2883_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2847_);
v___x_2884_ = lean_string_append(v___x_2882_, v___x_2883_);
lean_dec_ref(v___x_2883_);
v___x_2885_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2886_ = lean_string_append(v___x_2884_, v___x_2885_);
v___x_2887_ = lean_io_error_to_string(v_a_2878_);
v___x_2888_ = lean_string_append(v___x_2886_, v___x_2887_);
lean_dec_ref(v___x_2887_);
v___x_2889_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2888_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2889_);
v___x_2891_ = v___x_2880_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2889_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
v___jp_2895_:
{
uint8_t v_construct_2897_; uint64_t v___x_2898_; 
v_construct_2897_ = lean_ctor_get_uint8(v_b_2847_, sizeof(void*)*4);
v___x_2898_ = lean_uint64_lor(v___x_2894_, v___y_2896_);
if (v_construct_2897_ == 0)
{
uint64_t v___x_2899_; 
v___x_2899_ = 0ULL;
v___y_2852_ = v___x_2898_;
v___y_2853_ = v___x_2899_;
goto v___jp_2851_;
}
else
{
uint64_t v___x_2900_; 
v___x_2900_ = 4ULL;
v___y_2852_ = v___x_2898_;
v___y_2853_ = v___x_2900_;
goto v___jp_2851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0___boxed(lean_object* v_b_2903_, lean_object* v_args_2904_, lean_object* v_await_2905_, lean_object* v_a_2906_){
_start:
{
uint8_t v_await_boxed_2907_; lean_object* v_res_2908_; 
v_await_boxed_2907_ = lean_unbox(v_await_2905_);
v_res_2908_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v_b_2903_, v_args_2904_, v_await_boxed_2907_);
lean_dec_ref(v_b_2903_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort(lean_object* v_a_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___y_2924_; 
v___x_2918_ = ((lean_object*)(l_Lasm_Web_Raw_abort___closed__1));
v___x_2919_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2920_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2921_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2921_, 0, v_a_2915_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = lean_array_push(v___x_2919_, v___x_2921_);
if (lean_obj_tag(v_a_2916_) == 0)
{
lean_object* v___x_2928_; 
v___x_2928_ = lean_box(1);
v___y_2924_ = v___x_2928_;
goto v___jp_2923_;
}
else
{
lean_object* v_val_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
v_val_2929_ = lean_ctor_get(v_a_2916_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_a_2916_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v_a_2916_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_val_2929_);
lean_dec(v_a_2916_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 4);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_val_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
v___y_2924_ = v___x_2934_;
goto v___jp_2923_;
}
}
}
v___jp_2923_:
{
lean_object* v___x_2925_; uint8_t v___x_2926_; lean_object* v___x_2927_; 
v___x_2925_ = lean_array_push(v___x_2922_, v___y_2924_);
v___x_2926_ = 1;
v___x_2927_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v___x_2918_, v___x_2925_, v___x_2926_);
return v___x_2927_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort___boxed(lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lasm_Web_Raw_abort(v_a_2937_, v_a_2938_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal(double v_a_2947_){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; lean_object* v___x_2954_; 
v___x_2949_ = ((lean_object*)(l_Lasm_Web_Raw_timeoutSignal___closed__1));
v___x_2950_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2951_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2951_, 0, v_a_2947_);
v___x_2952_ = lean_array_push(v___x_2950_, v___x_2951_);
v___x_2953_ = 1;
v___x_2954_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2949_, v___x_2952_, v___x_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal___boxed(lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
double v_a_84__boxed_2957_; lean_object* v_res_2958_; 
v_a_84__boxed_2957_ = lean_unbox_float(v_a_2955_);
lean_dec_ref(v_a_2955_);
v_res_2958_ = l_Lasm_Web_Raw_timeoutSignal(v_a_84__boxed_2957_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch(lean_object* v_url_2959_, lean_object* v_init_2960_){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Lasm_Web_Raw_fetch(v_url_2959_, v_init_2960_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch___boxed(lean_object* v_url_2963_, lean_object* v_init_2964_, lean_object* v_a_2965_){
_start:
{
lean_object* v_res_2966_; 
v_res_2966_ = l_Lasm_Web_fetch(v_url_2963_, v_init_2964_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info(lean_object* v_r_2967_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Lasm_Web_Raw_responseInfo(v_r_2967_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info___boxed(lean_object* v_r_2970_, lean_object* v_a_2971_){
_start:
{
lean_object* v_res_2972_; 
v_res_2972_ = l_Lasm_Web_Response_info(v_r_2970_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(lean_object* v_context_2973_, lean_object* v_d_2974_){
_start:
{
lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2983_; lean_object* v_received_2984_; lean_object* v___y_3003_; lean_object* v_a_3006_; lean_object* v_a_3031_; 
switch(lean_obj_tag(v_d_2974_))
{
case 3:
{
double v_n_3037_; lean_object* v___x_3038_; 
v_n_3037_ = lean_ctor_get_float(v_d_2974_, 0);
v___x_3038_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3037_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v___x_3039_; 
v___x_3039_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_3006_ = v___x_3039_;
goto v___jp_3005_;
}
else
{
lean_object* v_val_3040_; 
v_val_3040_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_val_3040_);
lean_dec_ref_known(v___x_3038_, 1);
v_a_3031_ = v_val_3040_;
goto v___jp_3030_;
}
}
case 5:
{
lean_object* v_i_3041_; 
v_i_3041_ = lean_ctor_get(v_d_2974_, 0);
lean_inc(v_i_3041_);
v_a_3031_ = v_i_3041_;
goto v___jp_3030_;
}
default: 
{
lean_object* v___x_3042_; 
v___x_3042_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_3006_ = v___x_3042_;
goto v___jp_3005_;
}
}
v___jp_2976_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2979_ = lean_string_append(v___y_2977_, v___y_2978_);
lean_dec_ref(v___y_2978_);
v___x_2980_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
v___x_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
return v___x_2981_;
}
v___jp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v___x_2985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2986_ = lean_string_append(v___x_2985_, v_context_2973_);
v___x_2987_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2988_ = lean_string_append(v___x_2986_, v___x_2987_);
v___x_2989_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_2990_ = lean_string_append(v___x_2988_, v___x_2989_);
v___x_2991_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2992_ = lean_string_append(v___x_2990_, v___x_2991_);
v___x_2993_ = lean_string_append(v___x_2992_, v_received_2984_);
lean_dec_ref(v_received_2984_);
v___x_2994_ = lean_string_utf8_byte_size(v___y_2983_);
v___x_2995_ = lean_unsigned_to_nat(0u);
v___x_2996_ = lean_nat_dec_eq(v___x_2994_, v___x_2995_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2997_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_2998_ = lean_string_append(v___x_2997_, v___y_2983_);
v___x_2999_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_3000_ = lean_string_append(v___x_2998_, v___x_2999_);
v___y_2977_ = v___x_2993_;
v___y_2978_ = v___x_3000_;
goto v___jp_2976_;
}
else
{
lean_object* v___x_3001_; 
v___x_3001_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_2977_ = v___x_2993_;
v___y_2978_ = v___x_3001_;
goto v___jp_2976_;
}
}
v___jp_3002_:
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lasm_JS_Data_describe(v_d_2974_);
v___y_2983_ = v___y_3003_;
v_received_2984_ = v___x_3004_;
goto v___jp_2982_;
}
v___jp_3005_:
{
if (lean_obj_tag(v_d_2974_) == 9)
{
lean_object* v_value_3007_; lean_object* v_description_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; 
v_value_3007_ = lean_ctor_get(v_d_2974_, 0);
v_description_3008_ = lean_ctor_get(v_d_2974_, 1);
v___x_3009_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3010_ = lean_string_dec_eq(v_description_3008_, v___x_3009_);
if (v___x_3010_ == 0)
{
v___y_3003_ = v_a_3006_;
goto v___jp_3002_;
}
else
{
lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3027_; 
lean_inc(v_value_3007_);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_d_2974_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; lean_object* v_unused_3029_; 
v_unused_3028_ = lean_ctor_get(v_d_2974_, 1);
lean_dec(v_unused_3028_);
v_unused_3029_ = lean_ctor_get(v_d_2974_, 0);
lean_dec(v_unused_3029_);
v___x_3012_ = v_d_2974_;
v_isShared_3013_ = v_isSharedCheck_3027_;
goto v_resetjp_3011_;
}
else
{
lean_dec(v_d_2974_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3027_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
uint32_t v___x_3014_; uint64_t v___x_3015_; lean_object* v___x_3017_; 
v___x_3014_ = 206;
v___x_3015_ = 0ULL;
lean_inc(v_value_3007_);
if (v_isShared_3013_ == 0)
{
lean_ctor_set(v___x_3012_, 1, v___x_3009_);
v___x_3017_ = v___x_3012_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_value_3007_);
lean_ctor_set(v_reuseFailAlloc_3026_, 1, v___x_3009_);
v___x_3017_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
uint32_t v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lasm_js_value_handle(v_value_3007_);
lean_dec(v_value_3007_);
v___x_3019_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3014_, v___x_3015_, v___x_3017_, v___x_3018_);
lean_dec_ref(v___x_3017_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; uint8_t v___x_3021_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v___x_3021_ = lean_string_validate_utf8(v_a_3020_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
lean_dec(v_a_3020_);
v___x_3022_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_3023_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3022_);
v___y_2983_ = v_a_3006_;
v_received_2984_ = v___x_3023_;
goto v___jp_2982_;
}
else
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_string_from_utf8_unchecked(v_a_3020_);
v___y_2983_ = v_a_3006_;
v_received_2984_ = v___x_3024_;
goto v___jp_2982_;
}
}
else
{
lean_object* v___x_3025_; 
lean_dec_ref_known(v___x_3019_, 1);
v___x_3025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v___y_2983_ = v_a_3006_;
v_received_2984_ = v___x_3025_;
goto v___jp_2982_;
}
}
}
}
}
else
{
v___y_3003_ = v_a_3006_;
goto v___jp_3002_;
}
}
v___jp_3030_:
{
lean_object* v___x_3032_; uint8_t v___x_3033_; 
v___x_3032_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_3033_ = lean_int_dec_le(v___x_3032_, v_a_3031_);
if (v___x_3033_ == 0)
{
lean_object* v___x_3034_; 
lean_dec(v_a_3031_);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_3006_ = v___x_3034_;
goto v___jp_3005_;
}
else
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
lean_dec(v_d_2974_);
v___x_3035_ = l_Int_toNat(v_a_3031_);
lean_dec(v_a_3031_);
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
return v___x_3036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3043_, lean_object* v_d_3044_, lean_object* v_a_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_3043_, v_d_3044_);
lean_dec_ref(v_context_3043_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(lean_object* v_context_3047_, lean_object* v_bytes_3048_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3048_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v_a_3051_; lean_object* v___x_3052_; 
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3050_, 1);
v___x_3052_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_3047_, v_a_3051_);
return v___x_3052_;
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
v_a_3053_ = lean_ctor_get(v___x_3050_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3050_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3050_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0___boxed(lean_object* v_context_3061_, lean_object* v_bytes_3062_, lean_object* v_a_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v_context_3061_, v_bytes_3062_);
lean_dec_ref(v_bytes_3062_);
lean_dec_ref(v_context_3061_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(lean_object* v_o_3066_, lean_object* v_key_3067_){
_start:
{
lean_object* v_k_3069_; lean_object* v___x_3070_; 
v_k_3069_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3069_, 0, v_key_3067_);
v___x_3070_ = l_Lasm_JS_Wire_encodeIO(v_k_3069_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; uint32_t v___x_3072_; uint32_t v___x_3073_; uint64_t v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3070_, 1);
v___x_3072_ = 203;
v___x_3073_ = lasm_js_value_handle(v_o_3066_);
v___x_3074_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
v___x_3075_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3076_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_o_3066_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = lean_unsigned_to_nat(2u);
v___x_3078_ = lean_mk_empty_array_with_capacity(v___x_3077_);
lean_inc_ref(v_k_3069_);
v___x_3079_ = lean_array_push(v___x_3078_, v_k_3069_);
v___x_3080_ = lean_array_push(v___x_3079_, v___x_3076_);
v___x_3081_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
v___x_3082_ = lasm_js_call(v___x_3072_, v___x_3073_, v___x_3074_, v_a_3071_, v___x_3081_);
lean_dec_ref_known(v___x_3081_, 1);
lean_dec(v_a_3071_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_3085_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3069_);
v___x_3086_ = lean_string_append(v___x_3084_, v___x_3085_);
lean_dec_ref(v___x_3085_);
v___x_3087_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v___x_3086_, v_a_3083_);
lean_dec(v_a_3083_);
lean_dec_ref(v___x_3086_);
return v___x_3087_;
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
lean_dec_ref_known(v_k_3069_, 1);
v_a_3088_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3082_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3082_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
lean_dec_ref_known(v_k_3069_, 1);
lean_dec(v_o_3066_);
v_a_3096_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3098_ = v___x_3070_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3070_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___boxed(lean_object* v_o_3104_, lean_object* v_key_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_o_3104_, v_key_3105_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status(lean_object* v_r_3108_){
_start:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
v___x_3111_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_r_3108_, v___x_3110_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status___boxed(lean_object* v_r_3112_, lean_object* v_a_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Lasm_Web_Response_status(v_r_3112_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(lean_object* v_context_3115_, lean_object* v_d_3116_){
_start:
{
lean_object* v___y_3119_; lean_object* v___y_3120_; 
if (lean_obj_tag(v_d_3116_) == 2)
{
uint8_t v_b_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_b_3124_ = lean_ctor_get_uint8(v_d_3116_, 0);
lean_dec_ref_known(v_d_3116_, 0);
v___x_3125_ = lean_box(v_b_3124_);
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
return v___x_3126_;
}
else
{
lean_object* v___x_3127_; lean_object* v_received_3129_; 
v___x_3127_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_3116_) == 9)
{
lean_object* v_value_3143_; lean_object* v_description_3144_; uint8_t v___x_3145_; 
v_value_3143_ = lean_ctor_get(v_d_3116_, 0);
v_description_3144_ = lean_ctor_get(v_d_3116_, 1);
v___x_3145_ = lean_string_dec_eq(v_description_3144_, v___x_3127_);
if (v___x_3145_ == 0)
{
goto v___jp_3141_;
}
else
{
uint32_t v___x_3146_; uint64_t v___x_3147_; lean_object* v___x_3148_; uint32_t v___x_3149_; lean_object* v___x_3150_; 
lean_inc_n(v_value_3143_, 2);
lean_dec_ref_known(v_d_3116_, 2);
v___x_3146_ = 206;
v___x_3147_ = 0ULL;
v___x_3148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3148_, 0, v_value_3143_);
lean_ctor_set(v___x_3148_, 1, v___x_3127_);
v___x_3149_ = lasm_js_value_handle(v_value_3143_);
lean_dec(v_value_3143_);
v___x_3150_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3146_, v___x_3147_, v___x_3148_, v___x_3149_);
lean_dec_ref_known(v___x_3148_, 2);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; uint8_t v___x_3152_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
lean_dec_ref_known(v___x_3150_, 1);
v___x_3152_ = lean_string_validate_utf8(v_a_3151_);
if (v___x_3152_ == 0)
{
lean_object* v___x_3153_; lean_object* v___x_3154_; 
lean_dec(v_a_3151_);
v___x_3153_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_3154_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3153_);
v_received_3129_ = v___x_3154_;
goto v___jp_3128_;
}
else
{
lean_object* v___x_3155_; 
v___x_3155_ = lean_string_from_utf8_unchecked(v_a_3151_);
v_received_3129_ = v___x_3155_;
goto v___jp_3128_;
}
}
else
{
lean_object* v___x_3156_; 
lean_dec_ref_known(v___x_3150_, 1);
v___x_3156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_3129_ = v___x_3156_;
goto v___jp_3128_;
}
}
}
else
{
goto v___jp_3141_;
}
v___jp_3128_:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; 
v___x_3130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_3131_ = lean_string_append(v___x_3130_, v_context_3115_);
v___x_3132_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_3133_ = lean_string_append(v___x_3131_, v___x_3132_);
v___x_3134_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_3135_ = lean_string_append(v___x_3133_, v___x_3134_);
v___x_3136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_3137_ = lean_string_append(v___x_3135_, v___x_3136_);
v___x_3138_ = lean_string_append(v___x_3137_, v_received_3129_);
lean_dec_ref(v_received_3129_);
v___x_3139_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_3119_ = v___x_3138_;
v___y_3120_ = v___x_3140_;
goto v___jp_3118_;
}
else
{
v___y_3119_ = v___x_3138_;
v___y_3120_ = v___x_3127_;
goto v___jp_3118_;
}
}
v___jp_3141_:
{
lean_object* v___x_3142_; 
v___x_3142_ = l_Lasm_JS_Data_describe(v_d_3116_);
v_received_3129_ = v___x_3142_;
goto v___jp_3128_;
}
}
v___jp_3118_:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3121_ = lean_string_append(v___y_3119_, v___y_3120_);
v___x_3122_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3157_, lean_object* v_d_3158_, lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_3157_, v_d_3158_);
lean_dec_ref(v_context_3157_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(lean_object* v_context_3161_, lean_object* v_bytes_3162_){
_start:
{
lean_object* v___x_3164_; 
v___x_3164_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3162_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3166_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3164_, 1);
v___x_3166_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_3161_, v_a_3165_);
return v___x_3166_;
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
v_a_3167_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3164_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3164_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0___boxed(lean_object* v_context_3175_, lean_object* v_bytes_3176_, lean_object* v_a_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v_context_3175_, v_bytes_3176_);
lean_dec_ref(v_bytes_3176_);
lean_dec_ref(v_context_3175_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(lean_object* v_o_3179_, lean_object* v_key_3180_){
_start:
{
lean_object* v_k_3182_; lean_object* v___x_3183_; 
v_k_3182_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3182_, 0, v_key_3180_);
v___x_3183_ = l_Lasm_JS_Wire_encodeIO(v_k_3182_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_a_3184_; uint32_t v___x_3185_; uint32_t v___x_3186_; uint64_t v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc(v_a_3184_);
lean_dec_ref_known(v___x_3183_, 1);
v___x_3185_ = 203;
v___x_3186_ = lasm_js_value_handle(v_o_3179_);
v___x_3187_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
v___x_3188_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3189_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3189_, 0, v_o_3179_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = lean_unsigned_to_nat(2u);
v___x_3191_ = lean_mk_empty_array_with_capacity(v___x_3190_);
lean_inc_ref(v_k_3182_);
v___x_3192_ = lean_array_push(v___x_3191_, v_k_3182_);
v___x_3193_ = lean_array_push(v___x_3192_, v___x_3189_);
v___x_3194_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
v___x_3195_ = lasm_js_call(v___x_3185_, v___x_3186_, v___x_3187_, v_a_3184_, v___x_3194_);
lean_dec_ref_known(v___x_3194_, 1);
lean_dec(v_a_3184_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v___x_3197_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_3198_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3182_);
v___x_3199_ = lean_string_append(v___x_3197_, v___x_3198_);
lean_dec_ref(v___x_3198_);
v___x_3200_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v___x_3199_, v_a_3196_);
lean_dec(v_a_3196_);
lean_dec_ref(v___x_3199_);
return v___x_3200_;
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec_ref_known(v_k_3182_, 1);
v_a_3201_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3195_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3195_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec_ref_known(v_k_3182_, 1);
lean_dec(v_o_3179_);
v_a_3209_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3183_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3183_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0___boxed(lean_object* v_o_3217_, lean_object* v_key_3218_, lean_object* v_a_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_o_3217_, v_key_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok(lean_object* v_r_3221_){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
v___x_3224_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_r_3221_, v___x_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok___boxed(lean_object* v_r_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l_Lasm_Web_Response_ok(v_r_3225_);
return v_res_3227_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(uint8_t v_await_3228_, uint64_t v_extra_3229_){
_start:
{
uint64_t v___x_3230_; uint64_t v___y_3232_; 
v___x_3230_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_3228_ == 0)
{
uint64_t v___x_3235_; 
v___x_3235_ = 0ULL;
v___y_3232_ = v___x_3235_;
goto v___jp_3231_;
}
else
{
uint64_t v___x_3236_; 
v___x_3236_ = 2ULL;
v___y_3232_ = v___x_3236_;
goto v___jp_3231_;
}
v___jp_3231_:
{
uint64_t v___x_3233_; uint64_t v___x_3234_; 
v___x_3233_ = lean_uint64_lor(v___x_3230_, v___y_3232_);
v___x_3234_ = lean_uint64_lor(v___x_3233_, v_extra_3229_);
return v___x_3234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0___boxed(lean_object* v_await_3237_, lean_object* v_extra_3238_){
_start:
{
uint8_t v_await_boxed_3239_; uint64_t v_extra_boxed_3240_; uint64_t v_res_3241_; lean_object* v_r_3242_; 
v_await_boxed_3239_ = lean_unbox(v_await_3237_);
v_extra_boxed_3240_ = lean_unbox_uint64(v_extra_3238_);
lean_dec_ref(v_extra_3238_);
v_res_3241_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(v_await_boxed_3239_, v_extra_boxed_3240_);
v_r_3242_ = lean_box_uint64(v_res_3241_);
return v_r_3242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(lean_object* v_context_3244_, lean_object* v_d_3245_){
_start:
{
lean_object* v___y_3251_; lean_object* v___y_3252_; 
switch(lean_obj_tag(v_d_3245_))
{
case 1:
{
goto v___jp_3247_;
}
case 0:
{
goto v___jp_3247_;
}
default: 
{
if (lean_obj_tag(v_d_3245_) == 4)
{
lean_object* v_s_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v_s_3256_ = lean_ctor_get(v_d_3245_, 0);
lean_inc_ref(v_s_3256_);
lean_dec_ref_known(v_d_3245_, 1);
v___x_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3257_, 0, v_s_3256_);
v___x_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
return v___x_3258_;
}
else
{
lean_object* v___x_3259_; lean_object* v_received_3261_; 
v___x_3259_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_3245_) == 9)
{
lean_object* v_value_3275_; lean_object* v_description_3276_; uint8_t v___x_3277_; 
v_value_3275_ = lean_ctor_get(v_d_3245_, 0);
v_description_3276_ = lean_ctor_get(v_d_3245_, 1);
v___x_3277_ = lean_string_dec_eq(v_description_3276_, v___x_3259_);
if (v___x_3277_ == 0)
{
goto v___jp_3273_;
}
else
{
uint32_t v___x_3278_; uint64_t v___x_3279_; lean_object* v___x_3280_; uint32_t v___x_3281_; lean_object* v___x_3282_; 
lean_inc_n(v_value_3275_, 2);
lean_dec_ref_known(v_d_3245_, 2);
v___x_3278_ = 206;
v___x_3279_ = 0ULL;
v___x_3280_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3280_, 0, v_value_3275_);
lean_ctor_set(v___x_3280_, 1, v___x_3259_);
v___x_3281_ = lasm_js_value_handle(v_value_3275_);
lean_dec(v_value_3275_);
v___x_3282_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3278_, v___x_3279_, v___x_3280_, v___x_3281_);
lean_dec_ref_known(v___x_3280_, 2);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; uint8_t v___x_3284_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = lean_string_validate_utf8(v_a_3283_);
if (v___x_3284_ == 0)
{
lean_object* v___x_3285_; lean_object* v___x_3286_; 
lean_dec(v_a_3283_);
v___x_3285_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_3286_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3285_);
v_received_3261_ = v___x_3286_;
goto v___jp_3260_;
}
else
{
lean_object* v___x_3287_; 
v___x_3287_ = lean_string_from_utf8_unchecked(v_a_3283_);
v_received_3261_ = v___x_3287_;
goto v___jp_3260_;
}
}
else
{
lean_object* v___x_3288_; 
lean_dec_ref_known(v___x_3282_, 1);
v___x_3288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_3261_ = v___x_3288_;
goto v___jp_3260_;
}
}
}
else
{
goto v___jp_3273_;
}
v___jp_3260_:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; uint8_t v___x_3271_; 
v___x_3262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_3263_ = lean_string_append(v___x_3262_, v_context_3244_);
v___x_3264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_3265_ = lean_string_append(v___x_3263_, v___x_3264_);
v___x_3266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___closed__0));
v___x_3267_ = lean_string_append(v___x_3265_, v___x_3266_);
v___x_3268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_3269_ = lean_string_append(v___x_3267_, v___x_3268_);
v___x_3270_ = lean_string_append(v___x_3269_, v_received_3261_);
lean_dec_ref(v_received_3261_);
v___x_3271_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; 
v___x_3272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_3251_ = v___x_3270_;
v___y_3252_ = v___x_3272_;
goto v___jp_3250_;
}
else
{
v___y_3251_ = v___x_3270_;
v___y_3252_ = v___x_3259_;
goto v___jp_3250_;
}
}
v___jp_3273_:
{
lean_object* v___x_3274_; 
v___x_3274_ = l_Lasm_JS_Data_describe(v_d_3245_);
v_received_3261_ = v___x_3274_;
goto v___jp_3260_;
}
}
}
}
v___jp_3247_:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = lean_box(0);
v___x_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
return v___x_3249_;
}
v___jp_3250_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3253_ = lean_string_append(v___y_3251_, v___y_3252_);
v___x_3254_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
v___x_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
return v___x_3255_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3289_, lean_object* v_d_3290_, lean_object* v_a_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(v_context_3289_, v_d_3290_);
lean_dec_ref(v_context_3289_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(lean_object* v_context_3293_, lean_object* v_bytes_3294_){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3294_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3298_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3298_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(v_context_3293_, v_a_3297_);
return v___x_3298_;
}
else
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3306_; 
v_a_3299_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3301_ = v___x_3296_;
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3296_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3306_;
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
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v_a_3299_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1___boxed(lean_object* v_context_3307_, lean_object* v_bytes_3308_, lean_object* v_a_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(v_context_3307_, v_bytes_3308_);
lean_dec_ref(v_bytes_3308_);
lean_dec_ref(v_context_3307_);
return v_res_3310_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3311_; uint8_t v___x_3312_; uint64_t v___x_3313_; 
v___x_3311_ = 8ULL;
v___x_3312_ = 0;
v___x_3313_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(v___x_3312_, v___x_3311_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(lean_object* v_o_3315_, lean_object* v_name_3316_, lean_object* v_args_3317_){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; uint64_t v___x_3322_; lean_object* v___x_3323_; 
v___x_3319_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3320_, 0, v_o_3315_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
lean_inc_ref(v_name_3316_);
v___x_3321_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3321_, 0, v_name_3316_);
v___x_3322_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0);
v___x_3323_ = l_Lasm_JS_Value_invokeRaw(v___x_3320_, v___x_3321_, v_args_3317_, v___x_3322_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_a_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
v_a_3324_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_a_3324_);
lean_dec_ref_known(v___x_3323_, 1);
v___x_3325_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__1));
v___x_3326_ = lean_string_append(v___x_3325_, v_name_3316_);
lean_dec_ref(v_name_3316_);
v___x_3327_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(v___x_3326_, v_a_3324_);
lean_dec(v_a_3324_);
lean_dec_ref(v___x_3326_);
return v___x_3327_;
}
else
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3335_; 
lean_dec_ref(v_name_3316_);
v_a_3328_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3330_ = v___x_3323_;
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3323_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___boxed(lean_object* v_o_3336_, lean_object* v_name_3337_, lean_object* v_args_3338_, lean_object* v_a_3339_){
_start:
{
lean_object* v_res_3340_; 
v_res_3340_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(v_o_3336_, v_name_3337_, v_args_3338_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header(lean_object* v_r_3342_, lean_object* v_name_3343_){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_3346_ = l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(v_r_3342_, v___x_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v___x_3348_ = ((lean_object*)(l_Lasm_Web_Response_header___closed__0));
v___x_3349_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3349_, 0, v_name_3343_);
v___x_3350_ = lean_unsigned_to_nat(1u);
v___x_3351_ = lean_mk_empty_array_with_capacity(v___x_3350_);
v___x_3352_ = lean_array_push(v___x_3351_, v___x_3349_);
v___x_3353_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(v_a_3347_, v___x_3348_, v___x_3352_);
return v___x_3353_;
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
lean_dec_ref(v_name_3343_);
v_a_3354_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3346_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3346_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header___boxed(lean_object* v_r_3362_, lean_object* v_name_3363_, lean_object* v_a_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l_Lasm_Web_Response_header(v_r_3362_, v_name_3363_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text(lean_object* v_r_3366_){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Lasm_Web_Raw_responseText(v_r_3366_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text___boxed(lean_object* v_r_3369_, lean_object* v_a_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l_Lasm_Web_Response_text(v_r_3369_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json(lean_object* v_r_3372_){
_start:
{
lean_object* v___x_3374_; 
v___x_3374_ = l_Lasm_Web_Raw_responseJson(v_r_3372_);
return v___x_3374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json___boxed(lean_object* v_r_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lasm_Web_Response_json(v_r_3375_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes(lean_object* v_r_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lasm_Web_Raw_responseBytes(v_r_3378_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes___boxed(lean_object* v_r_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lasm_Web_Response_bytes(v_r_3381_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0(lean_object* v_a_3384_, lean_object* v_x_3385_){
_start:
{
if (lean_obj_tag(v_x_3385_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3395_; 
lean_dec(v_a_3384_);
v_a_3387_ = lean_ctor_get(v_x_3385_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v_x_3385_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3389_ = v_x_3385_;
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v_x_3385_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; 
v___x_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
return v___x_3393_;
}
}
}
else
{
lean_object* v___x_3396_; 
lean_dec_ref_known(v_x_3385_, 1);
v___x_3396_ = l_Lasm_Web_Raw_responseText(v_a_3384_);
return v___x_3396_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0___boxed(lean_object* v_a_3397_, lean_object* v_x_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lasm_Web_fetchText___lam__0(v_a_3397_, v_x_3398_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1(lean_object* v_url_3404_, lean_object* v___f_3405_, lean_object* v_a_3406_, lean_object* v_x_3407_){
_start:
{
if (lean_obj_tag(v_x_3407_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3417_; 
lean_dec(v_a_3406_);
lean_dec_ref(v___f_3405_);
v_a_3409_ = lean_ctor_get(v_x_3407_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v_x_3407_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3411_ = v_x_3407_;
v_isShared_3412_ = v_isSharedCheck_3417_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v_x_3407_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3417_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3409_);
v___x_3414_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3442_; 
v_a_3418_ = lean_ctor_get(v_x_3407_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v_x_3407_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3420_ = v_x_3407_;
v_isShared_3421_ = v_isSharedCheck_3442_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v_x_3407_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3442_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
uint8_t v_ok_3422_; 
v_ok_3422_ = lean_ctor_get_uint8(v_a_3418_, sizeof(void*)*5);
if (v_ok_3422_ == 0)
{
lean_object* v_status_3423_; lean_object* v_statusText_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
lean_dec(v_a_3406_);
v_status_3423_ = lean_ctor_get(v_a_3418_, 0);
lean_inc(v_status_3423_);
v_statusText_3424_ = lean_ctor_get(v_a_3418_, 1);
lean_inc_ref(v_statusText_3424_);
lean_dec(v_a_3418_);
v___x_3425_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3426_ = lean_string_append(v___x_3425_, v_url_3404_);
v___x_3427_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3428_ = lean_string_append(v___x_3426_, v___x_3427_);
v___x_3429_ = l_Nat_reprFast(v_status_3423_);
v___x_3430_ = lean_string_append(v___x_3428_, v___x_3429_);
lean_dec_ref(v___x_3429_);
v___x_3431_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3432_ = lean_string_append(v___x_3430_, v___x_3431_);
v___x_3433_ = lean_string_append(v___x_3432_, v_statusText_3424_);
lean_dec_ref(v_statusText_3424_);
v___x_3434_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3433_);
v___x_3435_ = lean_unsigned_to_nat(0u);
if (v_isShared_3421_ == 0)
{
lean_ctor_set_tag(v___x_3420_, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3434_);
v___x_3437_ = v___x_3420_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v___x_3434_);
v___x_3437_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
v___x_3439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3435_, v_ok_3422_, v___x_3438_, v___f_3405_);
return v___x_3439_;
}
}
else
{
lean_object* v___x_3441_; 
lean_del_object(v___x_3420_);
lean_dec(v_a_3418_);
lean_dec_ref(v___f_3405_);
v___x_3441_ = l_Lasm_Web_Raw_responseText(v_a_3406_);
return v___x_3441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1___boxed(lean_object* v_url_3443_, lean_object* v___f_3444_, lean_object* v_a_3445_, lean_object* v_x_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Lasm_Web_fetchText___lam__1(v_url_3443_, v___f_3444_, v_a_3445_, v_x_3446_);
lean_dec_ref(v_url_3443_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2(lean_object* v_url_3449_, lean_object* v_x_3450_){
_start:
{
if (lean_obj_tag(v_x_3450_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3460_; 
lean_dec_ref(v_url_3449_);
v_a_3452_ = lean_ctor_get(v_x_3450_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_x_3450_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3454_ = v_x_3450_;
v_isShared_3455_ = v_isSharedCheck_3460_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v_x_3450_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3460_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
return v___x_3458_;
}
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3482_; 
v_a_3461_ = lean_ctor_get(v_x_3450_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v_x_3450_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3463_ = v_x_3450_;
v_isShared_3464_ = v_isSharedCheck_3482_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v_x_3450_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3482_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___f_3465_; lean_object* v___f_3466_; lean_object* v___x_3467_; uint8_t v___x_3468_; lean_object* v_val_3470_; lean_object* v___x_3473_; 
lean_inc_n(v_a_3461_, 2);
v___f_3465_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3465_, 0, v_a_3461_);
v___f_3466_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3466_, 0, v_url_3449_);
lean_closure_set(v___f_3466_, 1, v___f_3465_);
lean_closure_set(v___f_3466_, 2, v_a_3461_);
v___x_3467_ = lean_unsigned_to_nat(0u);
v___x_3468_ = 0;
v___x_3473_ = l_Lasm_Web_Raw_responseInfo(v_a_3461_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; lean_object* v___x_3476_; 
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3474_);
lean_dec_ref_known(v___x_3473_, 1);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v_a_3474_);
v___x_3476_ = v___x_3463_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3474_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
v_val_3470_ = v___x_3476_;
goto v___jp_3469_;
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; 
v_a_3478_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3473_, 1);
if (v_isShared_3464_ == 0)
{
lean_ctor_set_tag(v___x_3463_, 0);
lean_ctor_set(v___x_3463_, 0, v_a_3478_);
v___x_3480_ = v___x_3463_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
v_val_3470_ = v___x_3480_;
goto v___jp_3469_;
}
}
v___jp_3469_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3471_, 0, v_val_3470_);
v___x_3472_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3467_, v___x_3468_, v___x_3471_, v___f_3466_);
return v___x_3472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2___boxed(lean_object* v_url_3483_, lean_object* v_x_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l_Lasm_Web_fetchText___lam__2(v_url_3483_, v_x_3484_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText(lean_object* v_url_3487_, lean_object* v_init_3488_){
_start:
{
lean_object* v___f_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_inc_ref(v_url_3487_);
v___f_3490_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3490_, 0, v_url_3487_);
v___x_3491_ = lean_unsigned_to_nat(0u);
v___x_3492_ = 0;
v___x_3493_ = l_Lasm_Web_Raw_fetch(v_url_3487_, v_init_3488_);
v___x_3494_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3492_, v___x_3493_, v___f_3490_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___boxed(lean_object* v_url_3495_, lean_object* v_init_3496_, lean_object* v_a_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lasm_Web_fetchText(v_url_3495_, v_init_3496_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0(lean_object* v_url_3499_, lean_object* v_inst_3500_, lean_object* v_x_3501_){
_start:
{
lean_object* v_val_3504_; 
if (lean_obj_tag(v_x_3501_) == 0)
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3514_; 
lean_dec_ref(v_inst_3500_);
v_a_3506_ = lean_ctor_get(v_x_3501_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v_x_3501_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3508_ = v_x_3501_;
v_isShared_3509_ = v_isSharedCheck_3514_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v_x_3501_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3514_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
lean_object* v___x_3512_; 
v___x_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
return v___x_3512_;
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3530_; 
v_a_3515_ = lean_ctor_get(v_x_3501_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_x_3501_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3517_ = v_x_3501_;
v_isShared_3518_ = v_isSharedCheck_3530_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v_x_3501_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3530_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3519_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3520_ = lean_string_append(v___x_3519_, v_url_3499_);
v___x_3521_ = l_Lasm_JS_decodeAs___redArg(v_inst_3500_, v___x_3520_, v_a_3515_);
lean_dec_ref(v___x_3520_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v___x_3524_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 0, v_a_3522_);
v___x_3524_ = v___x_3517_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3522_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
v_val_3504_ = v___x_3524_;
goto v___jp_3503_;
}
}
else
{
lean_object* v_a_3526_; lean_object* v___x_3528_; 
v_a_3526_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3521_, 1);
if (v_isShared_3518_ == 0)
{
lean_ctor_set_tag(v___x_3517_, 0);
lean_ctor_set(v___x_3517_, 0, v_a_3526_);
v___x_3528_ = v___x_3517_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3526_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
v_val_3504_ = v___x_3528_;
goto v___jp_3503_;
}
}
}
}
v___jp_3503_:
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_val_3504_);
return v___x_3505_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0___boxed(lean_object* v_url_3531_, lean_object* v_inst_3532_, lean_object* v_x_3533_, lean_object* v___y_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lasm_Web_fetchJson___redArg___lam__0(v_url_3531_, v_inst_3532_, v_x_3533_);
lean_dec_ref(v_url_3531_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1(lean_object* v_a_3536_, lean_object* v___f_3537_, lean_object* v_____r_3538_){
_start:
{
lean_object* v___x_3540_; uint8_t v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3540_ = lean_unsigned_to_nat(0u);
v___x_3541_ = 0;
v___x_3542_ = l_Lasm_Web_Raw_responseJson(v_a_3536_);
v___x_3543_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3540_, v___x_3541_, v___x_3542_, v___f_3537_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1___boxed(lean_object* v_a_3544_, lean_object* v___f_3545_, lean_object* v_____r_3546_, lean_object* v___y_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lasm_Web_fetchJson___redArg___lam__1(v_a_3544_, v___f_3545_, v_____r_3546_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2(lean_object* v___f_3549_, lean_object* v_x_3550_){
_start:
{
if (lean_obj_tag(v_x_3550_) == 0)
{
lean_object* v_a_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3560_; 
lean_dec_ref(v___f_3549_);
v_a_3552_ = lean_ctor_get(v_x_3550_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_x_3550_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3554_ = v_x_3550_;
v_isShared_3555_ = v_isSharedCheck_3560_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_a_3552_);
lean_dec(v_x_3550_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3560_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
if (v_isShared_3555_ == 0)
{
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3552_);
v___x_3557_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3558_; 
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3562_; 
v_a_3561_ = lean_ctor_get(v_x_3550_, 0);
lean_inc(v_a_3561_);
lean_dec_ref_known(v_x_3550_, 1);
v___x_3562_ = lean_apply_2(v___f_3549_, v_a_3561_, lean_box(0));
return v___x_3562_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2___boxed(lean_object* v___f_3563_, lean_object* v_x_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_res_3566_; 
v_res_3566_ = l_Lasm_Web_fetchJson___redArg___lam__2(v___f_3563_, v_x_3564_);
return v_res_3566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3(lean_object* v_url_3567_, lean_object* v___f_3568_, lean_object* v___f_3569_, lean_object* v_x_3570_){
_start:
{
if (lean_obj_tag(v_x_3570_) == 0)
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3580_; 
lean_dec_ref(v___f_3569_);
lean_dec_ref(v___f_3568_);
v_a_3572_ = lean_ctor_get(v_x_3570_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v_x_3570_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3574_ = v_x_3570_;
v_isShared_3575_ = v_isSharedCheck_3580_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v_x_3570_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3580_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3572_);
v___x_3577_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3578_; 
v___x_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3577_);
return v___x_3578_;
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3606_; 
v_a_3581_ = lean_ctor_get(v_x_3570_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_x_3570_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3583_ = v_x_3570_;
v_isShared_3584_ = v_isSharedCheck_3606_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v_x_3570_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3606_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
uint8_t v_ok_3585_; 
v_ok_3585_ = lean_ctor_get_uint8(v_a_3581_, sizeof(void*)*5);
if (v_ok_3585_ == 0)
{
lean_object* v_status_3586_; lean_object* v_statusText_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3600_; 
lean_dec_ref(v___f_3569_);
v_status_3586_ = lean_ctor_get(v_a_3581_, 0);
lean_inc(v_status_3586_);
v_statusText_3587_ = lean_ctor_get(v_a_3581_, 1);
lean_inc_ref(v_statusText_3587_);
lean_dec(v_a_3581_);
v___x_3588_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3589_ = lean_string_append(v___x_3588_, v_url_3567_);
v___x_3590_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3591_ = lean_string_append(v___x_3589_, v___x_3590_);
v___x_3592_ = l_Nat_reprFast(v_status_3586_);
v___x_3593_ = lean_string_append(v___x_3591_, v___x_3592_);
lean_dec_ref(v___x_3592_);
v___x_3594_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3595_ = lean_string_append(v___x_3593_, v___x_3594_);
v___x_3596_ = lean_string_append(v___x_3595_, v_statusText_3587_);
lean_dec_ref(v_statusText_3587_);
v___x_3597_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
v___x_3598_ = lean_unsigned_to_nat(0u);
if (v_isShared_3584_ == 0)
{
lean_ctor_set_tag(v___x_3583_, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3597_);
v___x_3600_ = v___x_3583_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3597_);
v___x_3600_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
v___x_3602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3598_, v_ok_3585_, v___x_3601_, v___f_3568_);
return v___x_3602_;
}
}
else
{
lean_object* v___x_3604_; lean_object* v___x_3605_; 
lean_del_object(v___x_3583_);
lean_dec(v_a_3581_);
lean_dec_ref(v___f_3568_);
v___x_3604_ = lean_box(0);
v___x_3605_ = lean_apply_2(v___f_3569_, v___x_3604_, lean_box(0));
return v___x_3605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3___boxed(lean_object* v_url_3607_, lean_object* v___f_3608_, lean_object* v___f_3609_, lean_object* v_x_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_res_3612_; 
v_res_3612_ = l_Lasm_Web_fetchJson___redArg___lam__3(v_url_3607_, v___f_3608_, v___f_3609_, v_x_3610_);
lean_dec_ref(v_url_3607_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4(lean_object* v___f_3613_, lean_object* v_url_3614_, lean_object* v_x_3615_){
_start:
{
if (lean_obj_tag(v_x_3615_) == 0)
{
lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3625_; 
lean_dec_ref(v_url_3614_);
lean_dec_ref(v___f_3613_);
v_a_3617_ = lean_ctor_get(v_x_3615_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v_x_3615_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3619_ = v_x_3615_;
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v_x_3615_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3623_; 
v___x_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
return v___x_3623_;
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3648_; 
v_a_3626_ = lean_ctor_get(v_x_3615_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_x_3615_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3628_ = v_x_3615_;
v_isShared_3629_ = v_isSharedCheck_3648_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v_x_3615_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3648_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___f_3630_; lean_object* v___f_3631_; lean_object* v___f_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; lean_object* v_val_3636_; lean_object* v___x_3639_; 
lean_inc(v_a_3626_);
v___f_3630_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3630_, 0, v_a_3626_);
lean_closure_set(v___f_3630_, 1, v___f_3613_);
lean_inc_ref(v___f_3630_);
v___f_3631_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3631_, 0, v___f_3630_);
v___f_3632_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3632_, 0, v_url_3614_);
lean_closure_set(v___f_3632_, 1, v___f_3631_);
lean_closure_set(v___f_3632_, 2, v___f_3630_);
v___x_3633_ = lean_unsigned_to_nat(0u);
v___x_3634_ = 0;
v___x_3639_ = l_Lasm_Web_Raw_responseInfo(v_a_3626_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; lean_object* v___x_3642_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 1);
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 0, v_a_3640_);
v___x_3642_ = v___x_3628_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3640_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
v_val_3636_ = v___x_3642_;
goto v___jp_3635_;
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; 
v_a_3644_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3639_, 1);
if (v_isShared_3629_ == 0)
{
lean_ctor_set_tag(v___x_3628_, 0);
lean_ctor_set(v___x_3628_, 0, v_a_3644_);
v___x_3646_ = v___x_3628_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3644_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
v_val_3636_ = v___x_3646_;
goto v___jp_3635_;
}
}
v___jp_3635_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v_val_3636_);
v___x_3638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3633_, v___x_3634_, v___x_3637_, v___f_3632_);
return v___x_3638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4___boxed(lean_object* v___f_3649_, lean_object* v_url_3650_, lean_object* v_x_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lasm_Web_fetchJson___redArg___lam__4(v___f_3649_, v_url_3650_, v_x_3651_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg(lean_object* v_url_3654_, lean_object* v_init_3655_, lean_object* v_inst_3656_){
_start:
{
lean_object* v___f_3658_; lean_object* v___f_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_inc_ref_n(v_url_3654_, 2);
v___f_3658_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3658_, 0, v_url_3654_);
lean_closure_set(v___f_3658_, 1, v_inst_3656_);
v___f_3659_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3659_, 0, v___f_3658_);
lean_closure_set(v___f_3659_, 1, v_url_3654_);
v___x_3660_ = lean_unsigned_to_nat(0u);
v___x_3661_ = 0;
v___x_3662_ = l_Lasm_Web_Raw_fetch(v_url_3654_, v_init_3655_);
v___x_3663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3660_, v___x_3661_, v___x_3662_, v___f_3659_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___boxed(lean_object* v_url_3664_, lean_object* v_init_3665_, lean_object* v_inst_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l_Lasm_Web_fetchJson___redArg(v_url_3664_, v_init_3665_, v_inst_3666_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson(lean_object* v_url_3669_, lean_object* v_init_3670_, lean_object* v_00_u03b1_3671_, lean_object* v_inst_3672_){
_start:
{
lean_object* v___x_3674_; 
v___x_3674_ = l_Lasm_Web_fetchJson___redArg(v_url_3669_, v_init_3670_, v_inst_3672_);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___boxed(lean_object* v_url_3675_, lean_object* v_init_3676_, lean_object* v_00_u03b1_3677_, lean_object* v_inst_3678_, lean_object* v_a_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Lasm_Web_fetchJson(v_url_3675_, v_init_3676_, v_00_u03b1_3677_, v_inst_3678_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create(){
_start:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Lasm_Web_Raw_abortController();
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create___boxed(lean_object* v_a_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lasm_Web_AbortController_create();
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal(lean_object* v_c_3685_){
_start:
{
lean_object* v___x_3687_; 
v___x_3687_ = l_Lasm_Web_Raw_abortSignal(v_c_3685_);
return v___x_3687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal___boxed(lean_object* v_c_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lasm_Web_AbortController_signal(v_c_3688_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort(lean_object* v_c_3691_, lean_object* v_reason_3692_){
_start:
{
lean_object* v___x_3694_; 
v___x_3694_ = l_Lasm_Web_Raw_abort(v_c_3691_, v_reason_3692_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort___boxed(lean_object* v_c_3695_, lean_object* v_reason_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lasm_Web_AbortController_abort(v_c_3695_, v_reason_3696_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout(lean_object* v_ms_3699_){
_start:
{
double v___x_3701_; lean_object* v___x_3702_; 
v___x_3701_ = lean_float_of_nat(v_ms_3699_);
v___x_3702_ = l_Lasm_Web_Raw_timeoutSignal(v___x_3701_);
return v___x_3702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout___boxed(lean_object* v_ms_3703_, lean_object* v_a_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l_Lasm_Web_AbortSignal_timeout(v_ms_3703_);
return v_res_3705_;
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
