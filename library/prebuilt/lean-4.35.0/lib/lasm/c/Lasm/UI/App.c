// Lean compiler output
// Module: Lasm.UI.App
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.UI.Mount public import Lasm.UI.Diff public import Lasm.UI.Encode public import Lasm.UI.Cmd public import Lasm.UI.Subs public import Lasm.UI.Url
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lasm_UI_Mount_Raw_port(lean_object*);
lean_object* l_Lasm_UI_Mount_Port_subscribe(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_UI_lastVal___redArg(lean_object*, lean_object*);
uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Mount_onMessage(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lasm_UI_Url_parse(lean_object*);
lean_object* l_instMonadEIO___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Mount_onHotSave(lean_object*);
lean_object* l_Lasm_UI_Mount_Raw_hotState();
lean_object* lean_io_promise_new();
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__2___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_App_sandbox___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_App_sandbox___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_App_sandbox___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_App_sandbox___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_element(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__0_value;
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lasm:ui-dom"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__2 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__2_value;
static const lean_array_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options();
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___boxed(lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "connect"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "schedule"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule();
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___boxed(lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsub"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__1_value;
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "navigate"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "afterFrame"};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__0 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__0_value;
static const lean_ctor_object l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__0_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__1 = (const lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_userProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_UI_Runtime_userProp___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_userProp___closed__0_value;
static const lean_string_object l_Lasm_UI_Runtime_userProp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_UI_Runtime_userProp___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_userProp___closed__1_value;
static const lean_string_object l_Lasm_UI_Runtime_userProp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "selected"};
static const lean_object* l_Lasm_UI_Runtime_userProp___closed__2 = (const lean_object*)&l_Lasm_UI_Runtime_userProp___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_UI_Runtime_userProp(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_userProp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Runtime_resync___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_resync___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_resync___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Runtime_handlersFor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_handlersFor___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_handlersFor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "every"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__0_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Runtime_specData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_specData___closed__2;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__3 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__3_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__4 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__4_value;
static const lean_array_object l_Lasm_UI_Runtime_specData___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__4_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__5 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__5_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__6 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__6_value;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "window"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__7 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__7_value;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "document"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__8 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__8_value;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__9 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__9_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__10 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__10_value;
static lean_once_cell_t l_Lasm_UI_Runtime_specData___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_specData___closed__11;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_UI_Runtime_report___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_report___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "a command failed"};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Runtime_perform___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___closed__0_value;
static const lean_closure_object l_Lasm_UI_Runtime_perform___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___closed__0;
static lean_once_cell_t l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Runtime_frame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_frame___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_frame___redArg___closed__0_value;
static lean_once_cell_t l_Lasm_UI_Runtime_frame___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_frame___redArg___closed__1;
static lean_once_cell_t l_Lasm_UI_Runtime_frame___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_frame___redArg___closed__2;
static lean_once_cell_t l_Lasm_UI_Runtime_frame___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_frame___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__3_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__0;
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Runtime_onSub___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_onSub___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_onSub___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_onSub___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_onSub___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_onSub___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_onSub___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_instHotModel___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instHotModel___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instHotModel___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_instHotModel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instHotModel___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_afterFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_afterFrame___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_afterFrame___closed__0 = (const lean_object*)&l_Lasm_UI_afterFrame___closed__0_value;
static const lean_closure_object l_Lasm_UI_afterFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_afterFrame___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_UI_afterFrame___closed__0_value)} };
static const lean_object* l_Lasm_UI_afterFrame___closed__1 = (const lean_object*)&l_Lasm_UI_afterFrame___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame();
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_App_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_App_run___redArg___closed__0;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "the app's flags"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__1_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flags"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__2_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__3_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "event"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__4 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__4_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "application"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__5 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__5_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "https:"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__6_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__7 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_UI_App_run___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_App_run___redArg___closed__6_value),((lean_object*)&l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__0(lean_object* v_init_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v_init_1_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__0___boxed(lean_object* v_init_6_, lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lasm_UI_App_sandbox___redArg___lam__0(v_init_6_, v_x_7_, v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__1(lean_object* v_update_10_, lean_object* v_msg_11_, lean_object* v_m_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_apply_2(v_update_10_, v_msg_11_, v_m_12_);
v___x_14_ = lean_box(0);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_13_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__2(lean_object* v_x_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_box(0);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg___lam__2___boxed(lean_object* v_x_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lasm_UI_App_sandbox___redArg___lam__2(v_x_18_);
lean_dec(v_x_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox___redArg(lean_object* v_init_21_, lean_object* v_update_22_, lean_object* v_view_23_){
_start:
{
lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___f_24_ = lean_alloc_closure((void*)(l_Lasm_UI_App_sandbox___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_24_, 0, v_init_21_);
v___f_25_ = lean_alloc_closure((void*)(l_Lasm_UI_App_sandbox___redArg___lam__1), 3, 1);
lean_closure_set(v___f_25_, 0, v_update_22_);
v___f_26_ = ((lean_object*)(l_Lasm_UI_App_sandbox___redArg___closed__0));
v___x_27_ = lean_box(0);
v___x_28_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_28_, 0, v___f_24_);
lean_ctor_set(v___x_28_, 1, v___f_25_);
lean_ctor_set(v___x_28_, 2, v_view_23_);
lean_ctor_set(v___x_28_, 3, v___f_26_);
lean_ctor_set(v___x_28_, 4, v___x_27_);
lean_ctor_set(v___x_28_, 5, v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_sandbox(lean_object* v_Model_29_, lean_object* v_Msg_30_, lean_object* v_init_31_, lean_object* v_update_32_, lean_object* v_view_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_UI_App_sandbox___redArg(v_init_31_, v_update_32_, v_view_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg___lam__0(lean_object* v_init_35_, lean_object* v_flags_36_, lean_object* v_x_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_apply_1(v_init_35_, v_flags_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg___lam__0___boxed(lean_object* v_init_39_, lean_object* v_flags_40_, lean_object* v_x_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lasm_UI_App_element___redArg___lam__0(v_init_39_, v_flags_40_, v_x_41_);
lean_dec_ref(v_x_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_element___redArg(lean_object* v_init_43_, lean_object* v_update_44_, lean_object* v_view_45_, lean_object* v_subscriptions_46_){
_start:
{
lean_object* v___f_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___f_47_ = lean_alloc_closure((void*)(l_Lasm_UI_App_element___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_47_, 0, v_init_43_);
v___x_48_ = lean_box(0);
v___x_49_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_49_, 0, v___f_47_);
lean_ctor_set(v___x_49_, 1, v_update_44_);
lean_ctor_set(v___x_49_, 2, v_view_45_);
lean_ctor_set(v___x_49_, 3, v_subscriptions_46_);
lean_ctor_set(v___x_49_, 4, v___x_48_);
lean_ctor_set(v___x_49_, 5, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_element(lean_object* v_Flags_50_, lean_object* v_Model_51_, lean_object* v_Msg_52_, lean_object* v_init_53_, lean_object* v_update_54_, lean_object* v_view_55_, lean_object* v_subscriptions_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_UI_App_element___redArg(v_init_53_, v_update_54_, v_view_55_, v_subscriptions_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options(){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_68_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__2));
v___x_69_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_70_ = 1;
v___x_71_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_68_, v___x_69_, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___boxed(lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options();
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect(lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; 
v___x_82_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___closed__1));
v___x_83_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_84_ = lean_array_push(v___x_83_, v_a_80_);
v___x_85_ = 1;
v___x_86_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_82_, v___x_84_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect___boxed(lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect(v_a_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply(lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; 
v___x_98_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___closed__1));
v___x_99_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_100_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_100_, 0, v_a_96_);
v___x_101_ = lean_array_push(v___x_99_, v___x_100_);
v___x_102_ = 1;
v___x_103_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_98_, v___x_101_, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply___boxed(lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply(v_a_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule(){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; lean_object* v___x_117_; 
v___x_114_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___closed__1));
v___x_115_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_116_ = 1;
v___x_117_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_114_, v___x_115_, v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule___boxed(lean_object* v_a_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule();
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error(lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; 
v___x_128_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___closed__1));
v___x_129_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_130_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_130_, 0, v_a_126_);
v___x_131_ = lean_array_push(v___x_129_, v___x_130_);
v___x_132_ = 1;
v___x_133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_128_, v___x_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error___boxed(lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error(v_a_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub(lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___y_149_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_146_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__1));
v___x_147_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_154_ = lean_nat_to_int(v_a_143_);
v___x_155_ = lean_nat_abs(v___x_154_);
v___x_156_ = lean_cstr_to_nat("9007199254740991");
v___x_157_ = lean_nat_dec_le(v___x_155_, v___x_156_);
lean_dec(v___x_155_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_154_);
v___y_149_ = v___x_158_;
goto v___jp_148_;
}
else
{
double v___x_159_; lean_object* v___x_160_; 
v___x_159_ = l_Float_ofInt(v___x_154_);
lean_dec(v___x_154_);
v___x_160_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_160_, 0, v___x_159_);
v___y_149_ = v___x_160_;
goto v___jp_148_;
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; lean_object* v___x_153_; 
v___x_150_ = lean_array_push(v___x_147_, v___y_149_);
v___x_151_ = lean_array_push(v___x_150_, v_a_144_);
v___x_152_ = 1;
v___x_153_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_146_, v___x_151_, v___x_152_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___boxed(lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub(v_a_161_, v_a_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub(lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___y_176_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_173_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___closed__1));
v___x_174_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_180_ = lean_nat_to_int(v_a_171_);
v___x_181_ = lean_nat_abs(v___x_180_);
v___x_182_ = lean_cstr_to_nat("9007199254740991");
v___x_183_ = lean_nat_dec_le(v___x_181_, v___x_182_);
lean_dec(v___x_181_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_180_);
v___y_176_ = v___x_184_;
goto v___jp_175_;
}
else
{
double v___x_185_; lean_object* v___x_186_; 
v___x_185_ = l_Float_ofInt(v___x_180_);
lean_dec(v___x_180_);
v___x_186_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_186_, 0, v___x_185_);
v___y_176_ = v___x_186_;
goto v___jp_175_;
}
v___jp_175_:
{
lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_array_push(v___x_174_, v___y_176_);
v___x_178_ = 1;
v___x_179_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_173_, v___x_177_, v___x_178_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub___boxed(lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub(v_a_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout(lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___y_203_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_200_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__1));
v___x_201_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_210_ = lean_nat_to_int(v_a_197_);
v___x_211_ = lean_nat_abs(v___x_210_);
v___x_212_ = lean_cstr_to_nat("9007199254740991");
v___x_213_ = lean_nat_dec_le(v___x_211_, v___x_212_);
lean_dec(v___x_211_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_210_);
v___y_203_ = v___x_214_;
goto v___jp_202_;
}
else
{
double v___x_215_; lean_object* v___x_216_; 
v___x_215_ = l_Float_ofInt(v___x_210_);
lean_dec(v___x_210_);
v___x_216_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_216_, 0, v___x_215_);
v___y_203_ = v___x_216_;
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; 
v___x_204_ = lean_array_push(v___x_201_, v___y_203_);
v___x_205_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_206_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_206_, 0, v_a_198_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_array_push(v___x_204_, v___x_206_);
v___x_208_ = 1;
v___x_209_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_200_, v___x_207_, v___x_208_);
return v___x_209_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___boxed(lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout(v_a_217_, v_a_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate(lean_object* v_a_227_, uint8_t v_a_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; 
v___x_230_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___closed__1));
v___x_231_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_232_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_232_, 0, v_a_227_);
v___x_233_ = lean_array_push(v___x_231_, v___x_232_);
v___x_234_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_234_, 0, v_a_228_);
v___x_235_ = lean_array_push(v___x_233_, v___x_234_);
v___x_236_ = 1;
v___x_237_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_230_, v___x_235_, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate___boxed(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
uint8_t v_a_128__boxed_241_; lean_object* v_res_242_; 
v_a_128__boxed_241_ = lean_unbox(v_a_239_);
v_res_242_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate(v_a_238_, v_a_128__boxed_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame(lean_object* v_a_249_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; 
v___x_251_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___closed__1));
v___x_252_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___x_253_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_254_, 0, v_a_249_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_array_push(v___x_252_, v___x_254_);
v___x_256_ = 1;
v___x_257_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_251_, v___x_255_, v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame___boxed(lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame(v_a_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(lean_object* v_head_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_box(0);
return v___x_263_;
}
else
{
lean_object* v_head_264_; lean_object* v_tail_265_; lean_object* v___y_267_; lean_object* v_id_271_; 
v_head_264_ = lean_ctor_get(v_x_262_, 0);
v_tail_265_ = lean_ctor_get(v_x_262_, 1);
v_id_271_ = lean_ctor_get(v_head_264_, 0);
v___y_267_ = v_id_271_;
goto v___jp_266_;
v___jp_266_:
{
uint8_t v___x_268_; 
v___x_268_ = lean_nat_dec_eq(v___y_267_, v_head_261_);
if (v___x_268_ == 0)
{
v_x_262_ = v_tail_265_;
goto _start;
}
else
{
lean_object* v___x_270_; 
lean_inc(v_head_264_);
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v_head_264_);
return v___x_270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg___boxed(lean_object* v_head_272_, lean_object* v_x_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_272_, v_x_273_);
lean_dec(v_x_273_);
lean_dec(v_head_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg(lean_object* v_live_275_, lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_dec(v_live_275_);
return v_x_277_;
}
else
{
lean_object* v_head_278_; lean_object* v_tail_279_; lean_object* v___x_280_; 
v_head_278_ = lean_ctor_get(v_x_276_, 0);
v_tail_279_ = lean_ctor_get(v_x_276_, 1);
v___x_280_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_278_, v_live_275_);
lean_dec(v_live_275_);
if (lean_obj_tag(v___x_280_) == 0)
{
return v_x_277_;
}
else
{
lean_object* v_val_281_; 
v_val_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v___x_280_, 1);
if (lean_obj_tag(v_val_281_) == 1)
{
lean_object* v_children_282_; lean_object* v___x_283_; 
v_children_282_ = lean_ctor_get(v_val_281_, 4);
lean_inc(v_children_282_);
v___x_283_ = lean_array_push(v_x_277_, v_val_281_);
v_live_275_ = v_children_282_;
v_x_276_ = v_tail_279_;
v_x_277_ = v___x_283_;
goto _start;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = lean_array_push(v_x_277_, v_val_281_);
return v___x_285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg___boxed(lean_object* v_live_286_, lean_object* v_x_287_, lean_object* v_x_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_286_, v_x_287_, v_x_288_);
lean_dec(v_x_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath(lean_object* v_Msg_290_, lean_object* v_live_291_, lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_291_, v_x_292_, v_x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___boxed(lean_object* v_Msg_295_, lean_object* v_live_296_, lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lasm_UI_Runtime_findPath(v_Msg_295_, v_live_296_, v_x_297_, v_x_298_);
lean_dec(v_x_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(lean_object* v_Msg_300_, lean_object* v_head_301_, lean_object* v_x_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_301_, v_x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___boxed(lean_object* v_Msg_304_, lean_object* v_head_305_, lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(v_Msg_304_, v_head_305_, v_x_306_);
lean_dec(v_x_306_);
lean_dec(v_head_305_);
return v_res_307_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Runtime_userProp(lean_object* v_name_311_){
_start:
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__0));
v___x_313_ = lean_string_dec_eq(v_name_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__1));
v___x_315_ = lean_string_dec_eq(v_name_311_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__2));
v___x_317_ = lean_string_dec_eq(v_name_311_, v___x_316_);
return v___x_317_;
}
else
{
return v___x_315_;
}
}
else
{
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_userProp___boxed(lean_object* v_name_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Lasm_UI_Runtime_userProp(v_name_318_);
lean_dec_ref(v_name_318_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
if (lean_obj_tag(v_a_321_) == 0)
{
lean_object* v___x_323_; 
v___x_323_ = lean_array_to_list(v_a_322_);
return v___x_323_;
}
else
{
lean_object* v_head_324_; 
v_head_324_ = lean_ctor_get(v_a_321_, 0);
lean_inc(v_head_324_);
if (lean_obj_tag(v_head_324_) == 1)
{
lean_object* v_tail_325_; lean_object* v_name_326_; lean_object* v_value_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_340_; 
v_tail_325_ = lean_ctor_get(v_a_321_, 1);
lean_inc(v_tail_325_);
lean_dec_ref_known(v_a_321_, 2);
v_name_326_ = lean_ctor_get(v_head_324_, 0);
v_value_327_ = lean_ctor_get(v_head_324_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_head_324_);
if (v_isSharedCheck_340_ == 0)
{
v___x_329_ = v_head_324_;
v_isShared_330_ = v_isSharedCheck_340_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_value_327_);
lean_inc(v_name_326_);
lean_dec(v_head_324_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_340_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
uint8_t v___x_331_; 
v___x_331_ = l_Lasm_UI_Runtime_userProp(v_name_326_);
if (v___x_331_ == 0)
{
lean_del_object(v___x_329_);
lean_dec_ref(v_value_327_);
lean_dec_ref(v_name_326_);
v_a_321_ = v_tail_325_;
goto _start;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v_name_326_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v_value_327_);
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 0);
lean_ctor_set(v___x_329_, 1, v___x_334_);
lean_ctor_set(v___x_329_, 0, v___x_333_);
v___x_336_ = v___x_329_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v___x_334_);
v___x_336_ = v_reuseFailAlloc_339_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_array_push(v_a_322_, v___x_336_);
v_a_321_ = v_tail_325_;
v_a_322_ = v___x_337_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_341_; 
lean_dec(v_head_324_);
v_tail_341_ = lean_ctor_get(v_a_321_, 1);
lean_inc(v_tail_341_);
lean_dec_ref_known(v_a_321_, 2);
v_a_321_ = v_tail_341_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(lean_object* v_live_345_, lean_object* v_as_346_, size_t v_i_347_, size_t v_stop_348_, lean_object* v_b_349_){
_start:
{
lean_object* v___y_351_; uint8_t v___x_355_; 
v___x_355_ = lean_usize_dec_eq(v_i_347_, v_stop_348_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_356_ = lean_array_uget_borrowed(v_as_346_, v_i_347_);
v___x_357_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
lean_inc(v_live_345_);
v___x_358_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_345_, v___x_356_, v___x_357_);
v___x_359_ = lean_array_get_size(v___x_358_);
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_361_ = lean_nat_sub(v___x_359_, v___x_360_);
v___x_362_ = lean_nat_dec_lt(v___x_361_, v___x_359_);
if (v___x_362_ == 0)
{
lean_dec(v___x_361_);
lean_dec_ref(v___x_358_);
v___y_351_ = v_b_349_;
goto v___jp_350_;
}
else
{
lean_object* v___x_363_; 
v___x_363_ = lean_array_fget(v___x_358_, v___x_361_);
lean_dec(v___x_361_);
lean_dec_ref(v___x_358_);
if (lean_obj_tag(v___x_363_) == 1)
{
lean_object* v_id_364_; lean_object* v_attrs_365_; lean_object* v_sets_366_; uint8_t v___x_367_; 
v_id_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_id_364_);
v_attrs_365_ = lean_ctor_get(v___x_363_, 3);
lean_inc(v_attrs_365_);
lean_dec_ref_known(v___x_363_, 5);
v_sets_366_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_attrs_365_, v___x_357_);
v___x_367_ = l_List_isEmpty___redArg(v_sets_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_368_, 0, v_id_364_);
lean_ctor_set(v___x_368_, 1, v_sets_366_);
v___x_369_ = lean_array_push(v_b_349_, v___x_368_);
v___y_351_ = v___x_369_;
goto v___jp_350_;
}
else
{
lean_dec(v_sets_366_);
lean_dec(v_id_364_);
v___y_351_ = v_b_349_;
goto v___jp_350_;
}
}
else
{
lean_dec(v___x_363_);
v___y_351_ = v_b_349_;
goto v___jp_350_;
}
}
}
else
{
lean_dec(v_live_345_);
return v_b_349_;
}
v___jp_350_:
{
size_t v___x_352_; size_t v___x_353_; 
v___x_352_ = ((size_t)1ULL);
v___x_353_ = lean_usize_add(v_i_347_, v___x_352_);
v_i_347_ = v___x_353_;
v_b_349_ = v___y_351_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___boxed(lean_object* v_live_370_, lean_object* v_as_371_, lean_object* v_i_372_, lean_object* v_stop_373_, lean_object* v_b_374_){
_start:
{
size_t v_i_boxed_375_; size_t v_stop_boxed_376_; lean_object* v_res_377_; 
v_i_boxed_375_ = lean_unbox_usize(v_i_372_);
lean_dec(v_i_372_);
v_stop_boxed_376_ = lean_unbox_usize(v_stop_373_);
lean_dec(v_stop_373_);
v_res_377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_370_, v_as_371_, v_i_boxed_375_, v_stop_boxed_376_, v_b_374_);
lean_dec_ref(v_as_371_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg(lean_object* v_live_380_, lean_object* v_touched_381_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = ((lean_object*)(l_Lasm_UI_Runtime_resync___redArg___closed__0));
v___x_384_ = lean_array_get_size(v_touched_381_);
v___x_385_ = lean_nat_dec_lt(v___x_382_, v___x_384_);
if (v___x_385_ == 0)
{
lean_dec(v_live_380_);
return v___x_383_;
}
else
{
uint8_t v___x_386_; 
v___x_386_ = lean_nat_dec_le(v___x_384_, v___x_384_);
if (v___x_386_ == 0)
{
if (v___x_385_ == 0)
{
lean_dec(v_live_380_);
return v___x_383_;
}
else
{
size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; 
v___x_387_ = ((size_t)0ULL);
v___x_388_ = lean_usize_of_nat(v___x_384_);
v___x_389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_380_, v_touched_381_, v___x_387_, v___x_388_, v___x_383_);
return v___x_389_;
}
}
else
{
size_t v___x_390_; size_t v___x_391_; lean_object* v___x_392_; 
v___x_390_ = ((size_t)0ULL);
v___x_391_ = lean_usize_of_nat(v___x_384_);
v___x_392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_380_, v_touched_381_, v___x_390_, v___x_391_, v___x_383_);
return v___x_392_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg___boxed(lean_object* v_live_393_, lean_object* v_touched_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lasm_UI_Runtime_resync___redArg(v_live_393_, v_touched_394_);
lean_dec_ref(v_touched_394_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync(lean_object* v_Msg_396_, lean_object* v_live_397_, lean_object* v_touched_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lasm_UI_Runtime_resync___redArg(v_live_397_, v_touched_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___boxed(lean_object* v_Msg_400_, lean_object* v_live_401_, lean_object* v_touched_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lasm_UI_Runtime_resync(v_Msg_400_, v_live_401_, v_touched_402_);
lean_dec_ref(v_touched_402_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0(lean_object* v_Msg_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_a_405_, v_a_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(lean_object* v_Msg_408_, lean_object* v_live_409_, lean_object* v_as_410_, size_t v_i_411_, size_t v_stop_412_, lean_object* v_b_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_409_, v_as_410_, v_i_411_, v_stop_412_, v_b_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___boxed(lean_object* v_Msg_415_, lean_object* v_live_416_, lean_object* v_as_417_, lean_object* v_i_418_, lean_object* v_stop_419_, lean_object* v_b_420_){
_start:
{
size_t v_i_boxed_421_; size_t v_stop_boxed_422_; lean_object* v_res_423_; 
v_i_boxed_421_ = lean_unbox_usize(v_i_418_);
lean_dec(v_i_418_);
v_stop_boxed_422_ = lean_unbox_usize(v_stop_419_);
lean_dec(v_stop_419_);
v_res_423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(v_Msg_415_, v_live_416_, v_as_417_, v_i_boxed_421_, v_stop_boxed_422_, v_b_420_);
lean_dec_ref(v_as_417_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(lean_object* v_event_424_, lean_object* v_l_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
if (lean_obj_tag(v_a_426_) == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_array_to_list(v_a_427_);
return v___x_428_;
}
else
{
lean_object* v_head_429_; 
v_head_429_ = lean_ctor_get(v_a_426_, 0);
if (lean_obj_tag(v_head_429_) == 3)
{
lean_object* v_listener_430_; lean_object* v_tail_431_; lean_object* v_handle_432_; lean_object* v_event_433_; lean_object* v_paths_434_; uint8_t v___x_435_; 
lean_inc_ref(v_head_429_);
v_listener_430_ = lean_ctor_get(v_head_429_, 0);
lean_inc_ref(v_listener_430_);
v_tail_431_ = lean_ctor_get(v_a_426_, 1);
lean_inc(v_tail_431_);
lean_dec_ref_known(v_a_426_, 2);
v_handle_432_ = lean_ctor_get(v_head_429_, 1);
lean_inc_ref(v_handle_432_);
lean_dec_ref_known(v_head_429_, 2);
v_event_433_ = lean_ctor_get(v_listener_430_, 0);
lean_inc_ref(v_event_433_);
v_paths_434_ = lean_ctor_get(v_listener_430_, 1);
lean_inc(v_paths_434_);
lean_dec_ref(v_listener_430_);
v___x_435_ = lean_string_dec_eq(v_event_433_, v_event_424_);
lean_dec_ref(v_event_433_);
if (v___x_435_ == 0)
{
lean_dec(v_paths_434_);
lean_dec_ref(v_handle_432_);
v_a_426_ = v_tail_431_;
goto _start;
}
else
{
lean_object* v_paths_437_; uint8_t v___x_438_; 
v_paths_437_ = lean_ctor_get(v_l_425_, 1);
v___x_438_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_paths_434_, v_paths_437_);
lean_dec(v_paths_434_);
if (v___x_438_ == 0)
{
lean_dec_ref(v_handle_432_);
v_a_426_ = v_tail_431_;
goto _start;
}
else
{
lean_object* v___x_440_; 
v___x_440_ = lean_array_push(v_a_427_, v_handle_432_);
v_a_426_ = v_tail_431_;
v_a_427_ = v___x_440_;
goto _start;
}
}
}
else
{
lean_object* v_tail_442_; 
v_tail_442_ = lean_ctor_get(v_a_426_, 1);
lean_inc(v_tail_442_);
lean_dec_ref_known(v_a_426_, 2);
v_a_426_ = v_tail_442_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg___boxed(lean_object* v_event_444_, lean_object* v_l_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_444_, v_l_445_, v_a_446_, v_a_447_);
lean_dec_ref(v_l_445_);
lean_dec_ref(v_event_444_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor___redArg(lean_object* v_event_451_, lean_object* v_attrs_452_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
lean_inc_ref(v_event_451_);
v___x_453_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_453_, 0, v_event_451_);
v___x_454_ = l_Lasm_UI_lastVal___redArg(v___x_453_, v_attrs_452_);
lean_dec_ref_known(v___x_453_, 1);
if (lean_obj_tag(v___x_454_) == 1)
{
lean_object* v_val_455_; 
v_val_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v___x_454_, 1);
if (lean_obj_tag(v_val_455_) == 2)
{
lean_object* v_l_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_l_456_ = lean_ctor_get(v_val_455_, 0);
lean_inc_ref(v_l_456_);
lean_dec_ref_known(v_val_455_, 1);
v___x_457_ = ((lean_object*)(l_Lasm_UI_Runtime_handlersFor___redArg___closed__0));
v___x_458_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_451_, v_l_456_, v_attrs_452_, v___x_457_);
lean_dec_ref(v_l_456_);
lean_dec_ref(v_event_451_);
return v___x_458_;
}
else
{
lean_object* v___x_459_; 
lean_dec(v_val_455_);
lean_dec(v_attrs_452_);
lean_dec_ref(v_event_451_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
}
else
{
lean_object* v___x_460_; 
lean_dec(v___x_454_);
lean_dec(v_attrs_452_);
lean_dec_ref(v_event_451_);
v___x_460_ = lean_box(0);
return v___x_460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor(lean_object* v_Msg_461_, lean_object* v_event_462_, lean_object* v_attrs_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_event_462_, v_attrs_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(lean_object* v_Msg_465_, lean_object* v_event_466_, lean_object* v_l_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_466_, v_l_467_, v_a_468_, v_a_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___boxed(lean_object* v_Msg_471_, lean_object* v_event_472_, lean_object* v_l_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(v_Msg_471_, v_event_472_, v_l_473_, v_a_474_, v_a_475_);
lean_dec_ref(v_l_473_);
lean_dec_ref(v_event_472_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
if (lean_obj_tag(v_a_477_) == 0)
{
lean_object* v___x_479_; 
v___x_479_ = l_List_reverse___redArg(v_a_478_);
return v___x_479_;
}
else
{
lean_object* v_head_480_; lean_object* v_tail_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_490_; 
v_head_480_ = lean_ctor_get(v_a_477_, 0);
v_tail_481_ = lean_ctor_get(v_a_477_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_a_477_);
if (v_isSharedCheck_490_ == 0)
{
v___x_483_ = v_a_477_;
v_isShared_484_ = v_isSharedCheck_490_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_tail_481_);
lean_inc(v_head_480_);
lean_dec(v_a_477_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_490_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = lean_array_mk(v_head_480_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 1, v_a_478_);
lean_ctor_set(v___x_483_, 0, v___x_485_);
v___x_487_ = v___x_483_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v_a_478_);
v___x_487_ = v_reuseFailAlloc_489_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
v_a_477_ = v_tail_481_;
v_a_478_ = v___x_487_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t v_sz_491_, size_t v_i_492_, lean_object* v_bs_493_){
_start:
{
uint8_t v___x_494_; 
v___x_494_ = lean_usize_dec_lt(v_i_492_, v_sz_491_);
if (v___x_494_ == 0)
{
return v_bs_493_;
}
else
{
lean_object* v_v_495_; lean_object* v___x_496_; lean_object* v_bs_x27_497_; lean_object* v___x_498_; size_t v___x_499_; size_t v___x_500_; lean_object* v___x_501_; 
v_v_495_ = lean_array_uget(v_bs_493_, v_i_492_);
v___x_496_ = lean_unsigned_to_nat(0u);
v_bs_x27_497_ = lean_array_uset(v_bs_493_, v_i_492_, v___x_496_);
v___x_498_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_498_, 0, v_v_495_);
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_492_, v___x_499_);
v___x_501_ = lean_array_uset(v_bs_x27_497_, v_i_492_, v___x_498_);
v_i_492_ = v___x_500_;
v_bs_493_ = v___x_501_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object* v_sz_503_, lean_object* v_i_504_, lean_object* v_bs_505_){
_start:
{
size_t v_sz_boxed_506_; size_t v_i_boxed_507_; lean_object* v_res_508_; 
v_sz_boxed_506_ = lean_unbox_usize(v_sz_503_);
lean_dec(v_sz_503_);
v_i_boxed_507_ = lean_unbox_usize(v_i_504_);
lean_dec(v_i_504_);
v_res_508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_boxed_506_, v_i_boxed_507_, v_bs_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t v_sz_509_, size_t v_i_510_, lean_object* v_bs_511_){
_start:
{
uint8_t v___x_512_; 
v___x_512_ = lean_usize_dec_lt(v_i_510_, v_sz_509_);
if (v___x_512_ == 0)
{
return v_bs_511_;
}
else
{
lean_object* v_v_513_; lean_object* v___x_514_; lean_object* v_bs_x27_515_; size_t v_sz_516_; size_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; size_t v___x_520_; size_t v___x_521_; lean_object* v___x_522_; 
v_v_513_ = lean_array_uget(v_bs_511_, v_i_510_);
v___x_514_ = lean_unsigned_to_nat(0u);
v_bs_x27_515_ = lean_array_uset(v_bs_511_, v_i_510_, v___x_514_);
v_sz_516_ = lean_array_size(v_v_513_);
v___x_517_ = ((size_t)0ULL);
v___x_518_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_516_, v___x_517_, v_v_513_);
v___x_519_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = ((size_t)1ULL);
v___x_521_ = lean_usize_add(v_i_510_, v___x_520_);
v___x_522_ = lean_array_uset(v_bs_x27_515_, v_i_510_, v___x_519_);
v_i_510_ = v___x_521_;
v_bs_511_ = v___x_522_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object* v_sz_524_, lean_object* v_i_525_, lean_object* v_bs_526_){
_start:
{
size_t v_sz_boxed_527_; size_t v_i_boxed_528_; lean_object* v_res_529_; 
v_sz_boxed_527_ = lean_unbox_usize(v_sz_524_);
lean_dec(v_sz_524_);
v_i_boxed_528_ = lean_unbox_usize(v_i_525_);
lean_dec(v_i_525_);
v_res_529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_boxed_527_, v_i_boxed_528_, v_bs_526_);
return v_res_529_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__2(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__1));
v___x_534_ = lean_unsigned_to_nat(2u);
v___x_535_ = lean_mk_empty_array_with_capacity(v___x_534_);
v___x_536_ = lean_array_push(v___x_535_, v___x_533_);
return v___x_536_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__11(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_551_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__10));
v___x_552_ = lean_unsigned_to_nat(2u);
v___x_553_ = lean_mk_empty_array_with_capacity(v___x_552_);
v___x_554_ = lean_array_push(v___x_553_, v___x_551_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_555_){
_start:
{
switch(lean_obj_tag(v_x_555_))
{
case 0:
{
lean_object* v_ms_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_574_; 
v_ms_556_ = lean_ctor_get(v_x_555_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_574_ == 0)
{
v___x_558_ = v_x_555_;
v_isShared_559_ = v_isSharedCheck_574_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_ms_556_);
lean_dec(v_x_555_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_574_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___y_561_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_567_ = lean_nat_to_int(v_ms_556_);
v___x_568_ = lean_nat_abs(v___x_567_);
v___x_569_ = lean_cstr_to_nat("9007199254740991");
v___x_570_ = lean_nat_dec_le(v___x_568_, v___x_569_);
lean_dec(v___x_568_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_567_);
v___y_561_ = v___x_571_;
goto v___jp_560_;
}
else
{
double v___x_572_; lean_object* v___x_573_; 
v___x_572_ = l_Float_ofInt(v___x_567_);
lean_dec(v___x_567_);
v___x_573_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_573_, 0, v___x_572_);
v___y_561_ = v___x_573_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_562_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_563_ = lean_array_push(v___x_562_, v___y_561_);
if (v_isShared_559_ == 0)
{
lean_ctor_set_tag(v___x_558_, 7);
lean_ctor_set(v___x_558_, 0, v___x_563_);
v___x_565_ = v___x_558_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
case 1:
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_575_;
}
case 2:
{
uint8_t v_target_576_; lean_object* v_event_577_; lean_object* v_paths_578_; lean_object* v___y_580_; 
v_target_576_ = lean_ctor_get_uint8(v_x_555_, sizeof(void*)*2);
v_event_577_ = lean_ctor_get(v_x_555_, 0);
lean_inc_ref(v_event_577_);
v_paths_578_ = lean_ctor_get(v_x_555_, 1);
lean_inc(v_paths_578_);
lean_dec_ref_known(v_x_555_, 2);
if (v_target_576_ == 0)
{
lean_object* v___x_596_; 
v___x_596_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__7));
v___y_580_ = v___x_596_;
goto v___jp_579_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___y_580_ = v___x_597_;
goto v___jp_579_;
}
v___jp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
lean_inc_ref(v___y_580_);
v___x_581_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_581_, 0, v___y_580_);
v___x_582_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_582_, 0, v_event_577_);
v___x_583_ = lean_box(0);
v___x_584_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_578_, v___x_583_);
v___x_585_ = lean_array_mk(v___x_584_);
v_sz_586_ = lean_array_size(v___x_585_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_586_, v___x_587_, v___x_585_);
v___x_589_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
v___x_590_ = lean_unsigned_to_nat(3u);
v___x_591_ = lean_mk_empty_array_with_capacity(v___x_590_);
v___x_592_ = lean_array_push(v___x_591_, v___x_581_);
v___x_593_ = lean_array_push(v___x_592_, v___x_582_);
v___x_594_ = lean_array_push(v___x_593_, v___x_589_);
v___x_595_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
default: 
{
lean_object* v_name_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_608_; 
v_name_598_ = lean_ctor_get(v_x_555_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_608_ == 0)
{
v___x_600_ = v_x_555_;
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_name_598_);
lean_dec(v_x_555_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set_tag(v___x_600_, 4);
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_name_598_);
v___x_603_ = v_reuseFailAlloc_607_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__11, &l_Lasm_UI_Runtime_specData___closed__11_once, _init_l_Lasm_UI_Runtime_specData___closed__11);
v___x_605_ = lean_array_push(v___x_604_, v___x_603_);
v___x_606_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add___redArg(lean_object* v_d_609_, lean_object* v_x_610_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
return v_d_609_;
}
else
{
lean_object* v_val_611_; lean_object* v_msgs_612_; uint8_t v_preventDefault_613_; uint8_t v_stopPropagation_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_630_; 
v_val_611_ = lean_ctor_get(v_x_610_, 0);
lean_inc(v_val_611_);
lean_dec_ref_known(v_x_610_, 1);
v_msgs_612_ = lean_ctor_get(v_d_609_, 0);
v_preventDefault_613_ = lean_ctor_get_uint8(v_d_609_, sizeof(void*)*1);
v_stopPropagation_614_ = lean_ctor_get_uint8(v_d_609_, sizeof(void*)*1 + 1);
v_isSharedCheck_630_ = !lean_is_exclusive(v_d_609_);
if (v_isSharedCheck_630_ == 0)
{
v___x_616_ = v_d_609_;
v_isShared_617_ = v_isSharedCheck_630_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_msgs_612_);
lean_dec(v_d_609_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_630_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_message_618_; uint8_t v_preventDefault_619_; uint8_t v_stopPropagation_620_; lean_object* v___x_621_; uint8_t v___y_623_; 
v_message_618_ = lean_ctor_get(v_val_611_, 0);
lean_inc(v_message_618_);
v_preventDefault_619_ = lean_ctor_get_uint8(v_val_611_, sizeof(void*)*1);
v_stopPropagation_620_ = lean_ctor_get_uint8(v_val_611_, sizeof(void*)*1 + 1);
lean_dec(v_val_611_);
v___x_621_ = lean_array_push(v_msgs_612_, v_message_618_);
if (v_preventDefault_613_ == 0)
{
v___y_623_ = v_preventDefault_619_;
goto v___jp_622_;
}
else
{
v___y_623_ = v_preventDefault_613_;
goto v___jp_622_;
}
v___jp_622_:
{
if (v_stopPropagation_614_ == 0)
{
lean_object* v___x_625_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_621_);
v___x_625_ = v___x_616_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_621_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*1, v___y_623_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*1 + 1, v_stopPropagation_620_);
return v___x_625_;
}
}
else
{
lean_object* v___x_628_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_621_);
v___x_628_ = v___x_616_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_621_);
lean_ctor_set_uint8(v_reuseFailAlloc_629_, sizeof(void*)*1 + 1, v_stopPropagation_614_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*1, v___y_623_);
return v___x_628_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add(lean_object* v_Msg_631_, lean_object* v_d_632_, lean_object* v_x_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_d_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(lean_object* v_snd_635_, lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
if (lean_obj_tag(v_x_637_) == 0)
{
lean_dec(v_snd_635_);
return v_x_636_;
}
else
{
lean_object* v_head_638_; lean_object* v_tail_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_head_638_ = lean_ctor_get(v_x_637_, 0);
lean_inc(v_head_638_);
v_tail_639_ = lean_ctor_get(v_x_637_, 1);
lean_inc(v_tail_639_);
lean_dec_ref_known(v_x_637_, 2);
lean_inc(v_snd_635_);
v___x_640_ = lean_apply_1(v_head_638_, v_snd_635_);
v___x_641_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_636_, v___x_640_);
v_x_636_ = v___x_641_;
v_x_637_ = v_tail_639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide___redArg(lean_object* v_type_643_, lean_object* v_x_644_, lean_object* v_x_645_){
_start:
{
if (lean_obj_tag(v_x_644_) == 0)
{
lean_dec_ref(v_type_643_);
return v_x_645_;
}
else
{
lean_object* v_head_646_; lean_object* v_tail_647_; lean_object* v_fst_648_; lean_object* v_snd_649_; lean_object* v___x_650_; lean_object* v_d_651_; uint8_t v_stopPropagation_652_; 
v_head_646_ = lean_ctor_get(v_x_644_, 0);
lean_inc(v_head_646_);
v_tail_647_ = lean_ctor_get(v_x_644_, 1);
lean_inc(v_tail_647_);
lean_dec_ref_known(v_x_644_, 2);
v_fst_648_ = lean_ctor_get(v_head_646_, 0);
lean_inc(v_fst_648_);
v_snd_649_ = lean_ctor_get(v_head_646_, 1);
lean_inc(v_snd_649_);
lean_dec(v_head_646_);
lean_inc_ref(v_type_643_);
v___x_650_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_type_643_, v_fst_648_);
v_d_651_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_649_, v_x_645_, v___x_650_);
v_stopPropagation_652_ = lean_ctor_get_uint8(v_d_651_, sizeof(void*)*1 + 1);
if (v_stopPropagation_652_ == 0)
{
v_x_644_ = v_tail_647_;
v_x_645_ = v_d_651_;
goto _start;
}
else
{
lean_dec(v_tail_647_);
lean_dec_ref(v_type_643_);
return v_d_651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide(lean_object* v_Msg_654_, lean_object* v_type_655_, lean_object* v_x_656_, lean_object* v_x_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lasm_UI_Runtime_decide___redArg(v_type_655_, v_x_656_, v_x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0(lean_object* v_Msg_659_, lean_object* v_snd_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_660_, v_x_661_, v_x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer(uint8_t v_frame_664_, uint8_t v_preventDefault_665_, uint8_t v_stopPropagation_666_){
_start:
{
lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_685_; 
if (v_frame_664_ == 0)
{
lean_object* v___x_688_; 
v___x_688_ = lean_unsigned_to_nat(0u);
v___y_685_ = v___x_688_;
goto v___jp_684_;
}
else
{
lean_object* v___x_689_; 
v___x_689_ = lean_unsigned_to_nat(1u);
v___y_685_ = v___x_689_;
goto v___jp_684_;
}
v___jp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_670_ = lean_nat_add(v___y_668_, v___y_669_);
lean_dec(v___y_668_);
v___x_671_ = lean_nat_to_int(v___x_670_);
v___x_672_ = lean_nat_abs(v___x_671_);
v___x_673_ = lean_cstr_to_nat("9007199254740991");
v___x_674_ = lean_nat_dec_le(v___x_672_, v___x_673_);
lean_dec(v___x_672_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; 
v___x_675_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_671_);
return v___x_675_;
}
else
{
double v___x_676_; lean_object* v___x_677_; 
v___x_676_ = l_Float_ofInt(v___x_671_);
lean_dec(v___x_671_);
v___x_677_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
v___jp_678_:
{
lean_object* v___x_681_; 
v___x_681_ = lean_nat_add(v___y_679_, v___y_680_);
if (v_stopPropagation_666_ == 0)
{
lean_object* v___x_682_; 
v___x_682_ = lean_unsigned_to_nat(0u);
v___y_668_ = v___x_681_;
v___y_669_ = v___x_682_;
goto v___jp_667_;
}
else
{
lean_object* v___x_683_; 
v___x_683_ = lean_unsigned_to_nat(4u);
v___y_668_ = v___x_681_;
v___y_669_ = v___x_683_;
goto v___jp_667_;
}
}
v___jp_684_:
{
if (v_preventDefault_665_ == 0)
{
lean_object* v___x_686_; 
v___x_686_ = lean_unsigned_to_nat(0u);
v___y_679_ = v___y_685_;
v___y_680_ = v___x_686_;
goto v___jp_678_;
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_unsigned_to_nat(2u);
v___y_679_ = v___y_685_;
v___y_680_ = v___x_687_;
goto v___jp_678_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer___boxed(lean_object* v_frame_690_, lean_object* v_preventDefault_691_, lean_object* v_stopPropagation_692_){
_start:
{
uint8_t v_frame_boxed_693_; uint8_t v_preventDefault_boxed_694_; uint8_t v_stopPropagation_boxed_695_; lean_object* v_res_696_; 
v_frame_boxed_693_ = lean_unbox(v_frame_690_);
v_preventDefault_boxed_694_ = lean_unbox(v_preventDefault_691_);
v_stopPropagation_boxed_695_ = lean_unbox(v_stopPropagation_692_);
v_res_696_ = l_Lasm_UI_Runtime_answer(v_frame_boxed_693_, v_preventDefault_boxed_694_, v_stopPropagation_boxed_695_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_698_, lean_object* v_e_699_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_701_ = ((lean_object*)(l_Lasm_UI_Runtime_report___closed__0));
v___x_702_ = lean_string_append(v_what_698_, v___x_701_);
v___x_703_ = lean_io_error_to_string(v_e_699_);
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
lean_dec_ref(v___x_703_);
v___x_705_ = lean_box(0);
v___x_706_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_error(v___x_704_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_713_ == 0)
{
lean_object* v_unused_714_; 
v_unused_714_ = lean_ctor_get(v___x_706_, 0);
lean_dec(v_unused_714_);
v___x_708_ = v___x_706_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_dec(v___x_706_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_705_);
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_705_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
else
{
lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_721_ == 0)
{
lean_object* v_unused_722_; 
v_unused_722_ = lean_ctor_get(v___x_706_, 0);
lean_dec(v_unused_722_);
v___x_716_ = v___x_706_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_dec(v___x_706_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set_tag(v___x_716_, 0);
lean_ctor_set(v___x_716_, 0, v___x_705_);
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_705_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_723_, lean_object* v_e_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lasm_UI_Runtime_report(v_what_723_, v_e_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_727_){
_start:
{
lean_object* v_ref_729_; lean_object* v___x_730_; uint8_t v_dirty_731_; 
v_ref_729_ = lean_ctor_get(v_c_727_, 1);
v___x_730_ = lean_st_ref_get(v_ref_729_);
v_dirty_731_ = lean_ctor_get_uint8(v___x_730_, sizeof(void*)*10);
if (v_dirty_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v___x_730_);
v___x_732_ = lean_box(v_dirty_731_);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
else
{
uint8_t v_scheduled_734_; 
v_scheduled_734_ = lean_ctor_get_uint8(v___x_730_, sizeof(void*)*10 + 1);
if (v_scheduled_734_ == 0)
{
lean_object* v_model_735_; lean_object* v_live_736_; lean_object* v_next_737_; lean_object* v_tables_738_; lean_object* v_queue_739_; uint8_t v_busy_740_; lean_object* v_subs_741_; lean_object* v_handlers_742_; lean_object* v_nextSub_743_; lean_object* v_touched_744_; lean_object* v_ports_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_755_; 
v_model_735_ = lean_ctor_get(v___x_730_, 0);
v_live_736_ = lean_ctor_get(v___x_730_, 1);
v_next_737_ = lean_ctor_get(v___x_730_, 2);
v_tables_738_ = lean_ctor_get(v___x_730_, 3);
v_queue_739_ = lean_ctor_get(v___x_730_, 4);
v_busy_740_ = lean_ctor_get_uint8(v___x_730_, sizeof(void*)*10 + 2);
v_subs_741_ = lean_ctor_get(v___x_730_, 5);
v_handlers_742_ = lean_ctor_get(v___x_730_, 6);
v_nextSub_743_ = lean_ctor_get(v___x_730_, 7);
v_touched_744_ = lean_ctor_get(v___x_730_, 8);
v_ports_745_ = lean_ctor_get(v___x_730_, 9);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_755_ == 0)
{
v___x_747_ = v___x_730_;
v_isShared_748_ = v_isSharedCheck_755_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_ports_745_);
lean_inc(v_touched_744_);
lean_inc(v_nextSub_743_);
lean_inc(v_handlers_742_);
lean_inc(v_subs_741_);
lean_inc(v_queue_739_);
lean_inc(v_tables_738_);
lean_inc(v_next_737_);
lean_inc(v_live_736_);
lean_inc(v_model_735_);
lean_dec(v___x_730_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_755_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_model_735_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_live_736_);
lean_ctor_set(v_reuseFailAlloc_754_, 2, v_next_737_);
lean_ctor_set(v_reuseFailAlloc_754_, 3, v_tables_738_);
lean_ctor_set(v_reuseFailAlloc_754_, 4, v_queue_739_);
lean_ctor_set(v_reuseFailAlloc_754_, 5, v_subs_741_);
lean_ctor_set(v_reuseFailAlloc_754_, 6, v_handlers_742_);
lean_ctor_set(v_reuseFailAlloc_754_, 7, v_nextSub_743_);
lean_ctor_set(v_reuseFailAlloc_754_, 8, v_touched_744_);
lean_ctor_set(v_reuseFailAlloc_754_, 9, v_ports_745_);
lean_ctor_set_uint8(v_reuseFailAlloc_754_, sizeof(void*)*10, v_dirty_731_);
lean_ctor_set_uint8(v_reuseFailAlloc_754_, sizeof(void*)*10 + 2, v_busy_740_);
v___x_750_ = v_reuseFailAlloc_754_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
lean_ctor_set_uint8(v___x_750_, sizeof(void*)*10 + 1, v_dirty_731_);
v___x_751_ = lean_st_ref_swap(v_ref_729_, v___x_750_);
lean_dec(v___x_751_);
v___x_752_ = lean_box(v_dirty_731_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
return v___x_753_;
}
}
}
else
{
uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_dec(v___x_730_);
v___x_756_ = 0;
v___x_757_ = lean_box(v___x_756_);
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_759_);
lean_dec_ref(v_c_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_762_, lean_object* v_Model_763_, lean_object* v_Msg_764_, lean_object* v_c_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_765_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_768_, lean_object* v_Model_769_, lean_object* v_Msg_770_, lean_object* v_c_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_768_, v_Model_769_, v_Msg_770_, v_c_771_);
lean_dec_ref(v_c_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_774_){
_start:
{
lean_object* v___x_776_; lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_787_; 
v___x_776_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_774_);
v_a_777_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_787_ == 0)
{
v___x_779_ = v___x_776_;
v_isShared_780_ = v_isSharedCheck_787_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_776_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_787_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
uint8_t v___x_781_; 
v___x_781_ = lean_unbox(v_a_777_);
lean_dec(v_a_777_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_box(0);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_782_);
v___x_784_ = v___x_779_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
else
{
lean_object* v___x_786_; 
lean_del_object(v___x_779_);
v___x_786_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_schedule();
return v___x_786_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_788_);
lean_dec_ref(v_c_788_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_791_, lean_object* v_Model_792_, lean_object* v_Msg_793_, lean_object* v_c_794_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_794_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_797_, lean_object* v_Model_798_, lean_object* v_Msg_799_, lean_object* v_c_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_797_, v_Model_798_, v_Msg_799_, v_c_800_);
lean_dec_ref(v_c_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_803_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = lean_box(0);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_806_);
lean_dec_ref(v_x_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_x_810_){
_start:
{
lean_object* v_val_813_; 
if (lean_obj_tag(v_x_810_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_829_; 
v_a_815_ = lean_ctor_get(v_x_810_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v_x_810_);
if (v_isSharedCheck_829_ == 0)
{
v___x_817_ = v_x_810_;
v_isShared_818_ = v_isSharedCheck_829_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v_x_810_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_829_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_820_ = l_Lasm_UI_Runtime_report(v___x_819_, v_a_815_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_820_, 1);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 1);
lean_ctor_set(v___x_817_, 0, v_a_821_);
v___x_823_ = v___x_817_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
v_val_813_ = v___x_823_;
goto v___jp_812_;
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; 
v_a_825_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_820_, 1);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v_a_825_);
v___x_827_ = v___x_817_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_825_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
v_val_813_ = v___x_827_;
goto v___jp_812_;
}
}
}
}
else
{
lean_object* v___x_830_; 
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v_x_810_);
return v___x_830_;
}
v___jp_812_:
{
lean_object* v___x_814_; 
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v_val_813_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_x_831_, lean_object* v___y_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_x_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_834_, lean_object* v_s_835_){
_start:
{
lean_object* v_model_836_; lean_object* v_live_837_; lean_object* v_next_838_; lean_object* v_tables_839_; uint8_t v_dirty_840_; uint8_t v_scheduled_841_; lean_object* v_queue_842_; lean_object* v_subs_843_; lean_object* v_handlers_844_; lean_object* v_nextSub_845_; lean_object* v_touched_846_; lean_object* v_ports_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
v_model_836_ = lean_ctor_get(v_s_835_, 0);
v_live_837_ = lean_ctor_get(v_s_835_, 1);
v_next_838_ = lean_ctor_get(v_s_835_, 2);
v_tables_839_ = lean_ctor_get(v_s_835_, 3);
v_dirty_840_ = lean_ctor_get_uint8(v_s_835_, sizeof(void*)*10);
v_scheduled_841_ = lean_ctor_get_uint8(v_s_835_, sizeof(void*)*10 + 1);
v_queue_842_ = lean_ctor_get(v_s_835_, 4);
v_subs_843_ = lean_ctor_get(v_s_835_, 5);
v_handlers_844_ = lean_ctor_get(v_s_835_, 6);
v_nextSub_845_ = lean_ctor_get(v_s_835_, 7);
v_touched_846_ = lean_ctor_get(v_s_835_, 8);
v_ports_847_ = lean_ctor_get(v_s_835_, 9);
v_isSharedCheck_854_ = !lean_is_exclusive(v_s_835_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v_s_835_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_ports_847_);
lean_inc(v_touched_846_);
lean_inc(v_nextSub_845_);
lean_inc(v_handlers_844_);
lean_inc(v_subs_843_);
lean_inc(v_queue_842_);
lean_inc(v_tables_839_);
lean_inc(v_next_838_);
lean_inc(v_live_837_);
lean_inc(v_model_836_);
lean_dec(v_s_835_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_model_836_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_live_837_);
lean_ctor_set(v_reuseFailAlloc_853_, 2, v_next_838_);
lean_ctor_set(v_reuseFailAlloc_853_, 3, v_tables_839_);
lean_ctor_set(v_reuseFailAlloc_853_, 4, v_queue_842_);
lean_ctor_set(v_reuseFailAlloc_853_, 5, v_subs_843_);
lean_ctor_set(v_reuseFailAlloc_853_, 6, v_handlers_844_);
lean_ctor_set(v_reuseFailAlloc_853_, 7, v_nextSub_845_);
lean_ctor_set(v_reuseFailAlloc_853_, 8, v_touched_846_);
lean_ctor_set(v_reuseFailAlloc_853_, 9, v_ports_847_);
lean_ctor_set_uint8(v_reuseFailAlloc_853_, sizeof(void*)*10, v_dirty_840_);
lean_ctor_set_uint8(v_reuseFailAlloc_853_, sizeof(void*)*10 + 1, v_scheduled_841_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_ctor_set_uint8(v___x_852_, sizeof(void*)*10 + 2, v_busy_834_);
return v___x_852_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_855_, lean_object* v_s_856_){
_start:
{
uint8_t v_busy_boxed_857_; lean_object* v_res_858_; 
v_busy_boxed_857_ = lean_unbox(v_busy_855_);
v_res_858_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_857_, v_s_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(lean_object* v_a_859_, lean_object* v_b_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_dec(v_b_860_);
lean_dec(v_a_859_);
return v_x_861_;
}
else
{
lean_object* v_key_862_; lean_object* v_value_863_; lean_object* v_tail_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_876_; 
v_key_862_ = lean_ctor_get(v_x_861_, 0);
v_value_863_ = lean_ctor_get(v_x_861_, 1);
v_tail_864_ = lean_ctor_get(v_x_861_, 2);
v_isSharedCheck_876_ = !lean_is_exclusive(v_x_861_);
if (v_isSharedCheck_876_ == 0)
{
v___x_866_ = v_x_861_;
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_tail_864_);
lean_inc(v_value_863_);
lean_inc(v_key_862_);
lean_dec(v_x_861_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
uint8_t v___x_868_; 
lean_inc(v_a_859_);
lean_inc(v_key_862_);
v___x_868_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_862_, v_a_859_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_869_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(v_a_859_, v_b_860_, v_tail_864_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 2, v___x_869_);
v___x_871_ = v___x_866_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_key_862_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_value_863_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
lean_object* v___x_874_; 
lean_dec(v_value_863_);
lean_dec(v_key_862_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 1, v_b_860_);
lean_ctor_set(v___x_866_, 0, v_a_859_);
v___x_874_ = v___x_866_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_859_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v_b_860_);
lean_ctor_set(v_reuseFailAlloc_875_, 2, v_tail_864_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20___redArg(lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
if (lean_obj_tag(v_x_878_) == 0)
{
return v_x_877_;
}
else
{
lean_object* v_key_879_; lean_object* v_value_880_; lean_object* v_tail_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_904_; 
v_key_879_ = lean_ctor_get(v_x_878_, 0);
v_value_880_ = lean_ctor_get(v_x_878_, 1);
v_tail_881_ = lean_ctor_get(v_x_878_, 2);
v_isSharedCheck_904_ = !lean_is_exclusive(v_x_878_);
if (v_isSharedCheck_904_ == 0)
{
v___x_883_ = v_x_878_;
v_isShared_884_ = v_isSharedCheck_904_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_tail_881_);
lean_inc(v_value_880_);
lean_inc(v_key_879_);
lean_dec(v_x_878_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_904_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; uint64_t v___x_886_; uint64_t v___x_887_; uint64_t v___x_888_; uint64_t v_fold_889_; uint64_t v___x_890_; uint64_t v___x_891_; uint64_t v___x_892_; size_t v___x_893_; size_t v___x_894_; size_t v___x_895_; size_t v___x_896_; size_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_885_ = lean_array_get_size(v_x_877_);
v___x_886_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_879_);
v___x_887_ = 32ULL;
v___x_888_ = lean_uint64_shift_right(v___x_886_, v___x_887_);
v_fold_889_ = lean_uint64_xor(v___x_886_, v___x_888_);
v___x_890_ = 16ULL;
v___x_891_ = lean_uint64_shift_right(v_fold_889_, v___x_890_);
v___x_892_ = lean_uint64_xor(v_fold_889_, v___x_891_);
v___x_893_ = lean_uint64_to_usize(v___x_892_);
v___x_894_ = lean_usize_of_nat(v___x_885_);
v___x_895_ = ((size_t)1ULL);
v___x_896_ = lean_usize_sub(v___x_894_, v___x_895_);
v___x_897_ = lean_usize_land(v___x_893_, v___x_896_);
v___x_898_ = lean_array_uget_borrowed(v_x_877_, v___x_897_);
lean_inc(v___x_898_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 2, v___x_898_);
v___x_900_ = v___x_883_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_key_879_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_value_880_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v___x_898_);
v___x_900_ = v_reuseFailAlloc_903_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; 
v___x_901_ = lean_array_uset(v_x_877_, v___x_897_, v___x_900_);
v_x_877_ = v___x_901_;
v_x_878_ = v_tail_881_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7___redArg(lean_object* v_i_905_, lean_object* v_source_906_, lean_object* v_target_907_){
_start:
{
lean_object* v___x_908_; uint8_t v___x_909_; 
v___x_908_ = lean_array_get_size(v_source_906_);
v___x_909_ = lean_nat_dec_lt(v_i_905_, v___x_908_);
if (v___x_909_ == 0)
{
lean_dec_ref(v_source_906_);
lean_dec(v_i_905_);
return v_target_907_;
}
else
{
lean_object* v_es_910_; lean_object* v___x_911_; lean_object* v_source_912_; lean_object* v_target_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_es_910_ = lean_array_fget(v_source_906_, v_i_905_);
v___x_911_ = lean_box(0);
v_source_912_ = lean_array_fset(v_source_906_, v_i_905_, v___x_911_);
v_target_913_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20___redArg(v_target_907_, v_es_910_);
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = lean_nat_add(v_i_905_, v___x_914_);
lean_dec(v_i_905_);
v_i_905_ = v___x_915_;
v_source_906_ = v_source_912_;
v_target_907_ = v_target_913_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_data_917_){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v_nbuckets_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_918_ = lean_array_get_size(v_data_917_);
v___x_919_ = lean_unsigned_to_nat(2u);
v_nbuckets_920_ = lean_nat_mul(v___x_918_, v___x_919_);
v___x_921_ = lean_unsigned_to_nat(0u);
v___x_922_ = lean_box(0);
v___x_923_ = lean_mk_array(v_nbuckets_920_, v___x_922_);
v___x_924_ = lean_array_propagate_mark(v_data_917_, v___x_923_);
v___x_925_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7___redArg(v___x_921_, v_data_917_, v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_a_926_, lean_object* v_x_927_){
_start:
{
if (lean_obj_tag(v_x_927_) == 0)
{
uint8_t v___x_928_; 
lean_dec(v_a_926_);
v___x_928_ = 0;
return v___x_928_;
}
else
{
lean_object* v_key_929_; lean_object* v_tail_930_; uint8_t v___x_931_; 
v_key_929_ = lean_ctor_get(v_x_927_, 0);
lean_inc(v_key_929_);
v_tail_930_ = lean_ctor_get(v_x_927_, 2);
lean_inc(v_tail_930_);
lean_dec_ref_known(v_x_927_, 3);
lean_inc(v_a_926_);
v___x_931_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_929_, v_a_926_);
if (v___x_931_ == 0)
{
v_x_927_ = v_tail_930_;
goto _start;
}
else
{
lean_dec(v_tail_930_);
lean_dec(v_a_926_);
return v___x_931_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg___boxed(lean_object* v_a_933_, lean_object* v_x_934_){
_start:
{
uint8_t v_res_935_; lean_object* v_r_936_; 
v_res_935_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_933_, v_x_934_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_937_, lean_object* v_a_938_, lean_object* v_b_939_){
_start:
{
lean_object* v_size_940_; lean_object* v_buckets_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_984_; 
v_size_940_ = lean_ctor_get(v_m_937_, 0);
v_buckets_941_ = lean_ctor_get(v_m_937_, 1);
v_isSharedCheck_984_ = !lean_is_exclusive(v_m_937_);
if (v_isSharedCheck_984_ == 0)
{
v___x_943_ = v_m_937_;
v_isShared_944_ = v_isSharedCheck_984_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_buckets_941_);
lean_inc(v_size_940_);
lean_dec(v_m_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_984_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; uint64_t v___x_946_; uint64_t v___x_947_; uint64_t v___x_948_; uint64_t v_fold_949_; uint64_t v___x_950_; uint64_t v___x_951_; uint64_t v___x_952_; size_t v___x_953_; size_t v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; lean_object* v_bkt_958_; uint8_t v___x_959_; 
v___x_945_ = lean_array_get_size(v_buckets_941_);
v___x_946_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_938_);
v___x_947_ = 32ULL;
v___x_948_ = lean_uint64_shift_right(v___x_946_, v___x_947_);
v_fold_949_ = lean_uint64_xor(v___x_946_, v___x_948_);
v___x_950_ = 16ULL;
v___x_951_ = lean_uint64_shift_right(v_fold_949_, v___x_950_);
v___x_952_ = lean_uint64_xor(v_fold_949_, v___x_951_);
v___x_953_ = lean_uint64_to_usize(v___x_952_);
v___x_954_ = lean_usize_of_nat(v___x_945_);
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_sub(v___x_954_, v___x_955_);
v___x_957_ = lean_usize_land(v___x_953_, v___x_956_);
v_bkt_958_ = lean_array_uget_borrowed(v_buckets_941_, v___x_957_);
lean_inc(v_bkt_958_);
lean_inc(v_a_938_);
v___x_959_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_938_, v_bkt_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v_size_x27_961_; lean_object* v___x_962_; lean_object* v_buckets_x27_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_960_ = lean_unsigned_to_nat(1u);
v_size_x27_961_ = lean_nat_add(v_size_940_, v___x_960_);
lean_dec(v_size_940_);
lean_inc(v_bkt_958_);
v___x_962_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_962_, 0, v_a_938_);
lean_ctor_set(v___x_962_, 1, v_b_939_);
lean_ctor_set(v___x_962_, 2, v_bkt_958_);
v_buckets_x27_963_ = lean_array_uset(v_buckets_941_, v___x_957_, v___x_962_);
v___x_964_ = lean_unsigned_to_nat(4u);
v___x_965_ = lean_nat_mul(v_size_x27_961_, v___x_964_);
v___x_966_ = lean_unsigned_to_nat(3u);
v___x_967_ = lean_nat_div(v___x_965_, v___x_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_array_get_size(v_buckets_x27_963_);
v___x_969_ = lean_nat_dec_le(v___x_967_, v___x_968_);
lean_dec(v___x_967_);
if (v___x_969_ == 0)
{
lean_object* v_val_970_; lean_object* v___x_972_; 
v_val_970_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_buckets_x27_963_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_val_970_);
lean_ctor_set(v___x_943_, 0, v_size_x27_961_);
v___x_972_ = v___x_943_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_size_x27_961_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_val_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
else
{
lean_object* v___x_975_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_buckets_x27_963_);
lean_ctor_set(v___x_943_, 0, v_size_x27_961_);
v___x_975_ = v___x_943_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_size_x27_961_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_buckets_x27_963_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
else
{
lean_object* v___x_977_; lean_object* v_buckets_x27_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
lean_inc(v_bkt_958_);
v___x_977_ = lean_box(0);
v_buckets_x27_978_ = lean_array_uset(v_buckets_941_, v___x_957_, v___x_977_);
v___x_979_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(v_a_938_, v_b_939_, v_bkt_958_);
v___x_980_ = lean_array_uset(v_buckets_x27_978_, v___x_957_, v___x_979_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_980_);
v___x_982_ = v___x_943_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_size_940_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(lean_object* v_a_985_, lean_object* v_fallback_986_, lean_object* v_x_987_){
_start:
{
if (lean_obj_tag(v_x_987_) == 0)
{
lean_dec(v_a_985_);
lean_inc(v_fallback_986_);
return v_fallback_986_;
}
else
{
lean_object* v_key_988_; lean_object* v_value_989_; lean_object* v_tail_990_; uint8_t v___x_991_; 
v_key_988_ = lean_ctor_get(v_x_987_, 0);
lean_inc(v_key_988_);
v_value_989_ = lean_ctor_get(v_x_987_, 1);
lean_inc(v_value_989_);
v_tail_990_ = lean_ctor_get(v_x_987_, 2);
lean_inc(v_tail_990_);
lean_dec_ref_known(v_x_987_, 3);
lean_inc(v_a_985_);
v___x_991_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_988_, v_a_985_);
if (v___x_991_ == 0)
{
lean_dec(v_value_989_);
v_x_987_ = v_tail_990_;
goto _start;
}
else
{
lean_dec(v_tail_990_);
lean_dec(v_a_985_);
return v_value_989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg___boxed(lean_object* v_a_993_, lean_object* v_fallback_994_, lean_object* v_x_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(v_a_993_, v_fallback_994_, v_x_995_);
lean_dec(v_fallback_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_997_, lean_object* v_a_998_, lean_object* v_fallback_999_){
_start:
{
lean_object* v_buckets_1000_; lean_object* v___x_1001_; uint64_t v___x_1002_; uint64_t v___x_1003_; uint64_t v___x_1004_; uint64_t v_fold_1005_; uint64_t v___x_1006_; uint64_t v___x_1007_; uint64_t v___x_1008_; size_t v___x_1009_; size_t v___x_1010_; size_t v___x_1011_; size_t v___x_1012_; size_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_buckets_1000_ = lean_ctor_get(v_m_997_, 1);
v___x_1001_ = lean_array_get_size(v_buckets_1000_);
v___x_1002_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_998_);
v___x_1003_ = 32ULL;
v___x_1004_ = lean_uint64_shift_right(v___x_1002_, v___x_1003_);
v_fold_1005_ = lean_uint64_xor(v___x_1002_, v___x_1004_);
v___x_1006_ = 16ULL;
v___x_1007_ = lean_uint64_shift_right(v_fold_1005_, v___x_1006_);
v___x_1008_ = lean_uint64_xor(v_fold_1005_, v___x_1007_);
v___x_1009_ = lean_uint64_to_usize(v___x_1008_);
v___x_1010_ = lean_usize_of_nat(v___x_1001_);
v___x_1011_ = ((size_t)1ULL);
v___x_1012_ = lean_usize_sub(v___x_1010_, v___x_1011_);
v___x_1013_ = lean_usize_land(v___x_1009_, v___x_1012_);
v___x_1014_ = lean_array_uget_borrowed(v_buckets_1000_, v___x_1013_);
lean_inc(v___x_1014_);
v___x_1015_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(v_a_998_, v_fallback_999_, v___x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1016_, lean_object* v_a_1017_, lean_object* v_fallback_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1016_, v_a_1017_, v_fallback_1018_);
lean_dec(v_fallback_1018_);
lean_dec_ref(v_m_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1020_, lean_object* v_b_1021_){
_start:
{
if (lean_obj_tag(v_as_x27_1020_) == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v_b_1021_);
return v___x_1023_;
}
else
{
lean_object* v_head_1024_; lean_object* v_tail_1025_; lean_object* v_spec_1026_; lean_object* v_handle_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_head_1024_ = lean_ctor_get(v_as_x27_1020_, 0);
v_tail_1025_ = lean_ctor_get(v_as_x27_1020_, 1);
v_spec_1026_ = lean_ctor_get(v_head_1024_, 0);
v_handle_1027_ = lean_ctor_get(v_head_1024_, 1);
v___x_1028_ = lean_box(0);
lean_inc_n(v_spec_1026_, 2);
v___x_1029_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1021_, v_spec_1026_, v___x_1028_);
lean_inc_ref(v_handle_1027_);
v___x_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_handle_1027_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1021_, v_spec_1026_, v___x_1030_);
v_as_x27_1020_ = v_tail_1025_;
v_b_1021_ = v___x_1031_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1033_, lean_object* v_b_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1033_, v_b_1034_);
lean_dec(v_as_x27_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_buckets_1039_; lean_object* v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; uint64_t v___x_1043_; uint64_t v_fold_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; size_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; size_t v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v_buckets_1039_ = lean_ctor_get(v_m_1037_, 1);
v___x_1040_ = lean_array_get_size(v_buckets_1039_);
v___x_1041_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1038_);
v___x_1042_ = 32ULL;
v___x_1043_ = lean_uint64_shift_right(v___x_1041_, v___x_1042_);
v_fold_1044_ = lean_uint64_xor(v___x_1041_, v___x_1043_);
v___x_1045_ = 16ULL;
v___x_1046_ = lean_uint64_shift_right(v_fold_1044_, v___x_1045_);
v___x_1047_ = lean_uint64_xor(v_fold_1044_, v___x_1046_);
v___x_1048_ = lean_uint64_to_usize(v___x_1047_);
v___x_1049_ = lean_usize_of_nat(v___x_1040_);
v___x_1050_ = ((size_t)1ULL);
v___x_1051_ = lean_usize_sub(v___x_1049_, v___x_1050_);
v___x_1052_ = lean_usize_land(v___x_1048_, v___x_1051_);
v___x_1053_ = lean_array_uget_borrowed(v_buckets_1039_, v___x_1052_);
lean_inc(v___x_1053_);
v___x_1054_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_1038_, v___x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1055_, lean_object* v_a_1056_){
_start:
{
uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_res_1057_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1055_, v_a_1056_);
lean_dec_ref(v_m_1055_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(lean_object* v_a_1059_, lean_object* v_x_1060_){
_start:
{
if (lean_obj_tag(v_x_1060_) == 0)
{
lean_dec(v_a_1059_);
return v_x_1060_;
}
else
{
lean_object* v_key_1061_; lean_object* v_value_1062_; lean_object* v_tail_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1072_; 
v_key_1061_ = lean_ctor_get(v_x_1060_, 0);
v_value_1062_ = lean_ctor_get(v_x_1060_, 1);
v_tail_1063_ = lean_ctor_get(v_x_1060_, 2);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_x_1060_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1065_ = v_x_1060_;
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_tail_1063_);
lean_inc(v_value_1062_);
lean_inc(v_key_1061_);
lean_dec(v_x_1060_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
uint8_t v___x_1067_; 
lean_inc(v_a_1059_);
lean_inc(v_key_1061_);
v___x_1067_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1061_, v_a_1059_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1068_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(v_a_1059_, v_tail_1063_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 2, v___x_1068_);
v___x_1070_ = v___x_1065_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_key_1061_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_value_1062_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
else
{
lean_del_object(v___x_1065_);
lean_dec(v_value_1062_);
lean_dec(v_key_1061_);
lean_dec(v_a_1059_);
return v_tail_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v_size_1075_; lean_object* v_buckets_1076_; lean_object* v___x_1077_; uint64_t v___x_1078_; uint64_t v___x_1079_; uint64_t v___x_1080_; uint64_t v_fold_1081_; uint64_t v___x_1082_; uint64_t v___x_1083_; uint64_t v___x_1084_; size_t v___x_1085_; size_t v___x_1086_; size_t v___x_1087_; size_t v___x_1088_; size_t v___x_1089_; lean_object* v_bkt_1090_; uint8_t v___x_1091_; 
v_size_1075_ = lean_ctor_get(v_m_1073_, 0);
v_buckets_1076_ = lean_ctor_get(v_m_1073_, 1);
v___x_1077_ = lean_array_get_size(v_buckets_1076_);
v___x_1078_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1074_);
v___x_1079_ = 32ULL;
v___x_1080_ = lean_uint64_shift_right(v___x_1078_, v___x_1079_);
v_fold_1081_ = lean_uint64_xor(v___x_1078_, v___x_1080_);
v___x_1082_ = 16ULL;
v___x_1083_ = lean_uint64_shift_right(v_fold_1081_, v___x_1082_);
v___x_1084_ = lean_uint64_xor(v_fold_1081_, v___x_1083_);
v___x_1085_ = lean_uint64_to_usize(v___x_1084_);
v___x_1086_ = lean_usize_of_nat(v___x_1077_);
v___x_1087_ = ((size_t)1ULL);
v___x_1088_ = lean_usize_sub(v___x_1086_, v___x_1087_);
v___x_1089_ = lean_usize_land(v___x_1085_, v___x_1088_);
v_bkt_1090_ = lean_array_uget_borrowed(v_buckets_1076_, v___x_1089_);
lean_inc(v_bkt_1090_);
lean_inc(v_a_1074_);
v___x_1091_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_1074_, v_bkt_1090_);
if (v___x_1091_ == 0)
{
lean_dec(v_a_1074_);
return v_m_1073_;
}
else
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1104_; 
lean_inc(v_bkt_1090_);
lean_inc_ref(v_buckets_1076_);
lean_inc(v_size_1075_);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_m_1073_);
if (v_isSharedCheck_1104_ == 0)
{
lean_object* v_unused_1105_; lean_object* v_unused_1106_; 
v_unused_1105_ = lean_ctor_get(v_m_1073_, 1);
lean_dec(v_unused_1105_);
v_unused_1106_ = lean_ctor_get(v_m_1073_, 0);
lean_dec(v_unused_1106_);
v___x_1093_ = v_m_1073_;
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v_m_1073_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v_buckets_x27_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1095_ = lean_box(0);
v_buckets_x27_1096_ = lean_array_uset(v_buckets_1076_, v___x_1089_, v___x_1095_);
v___x_1097_ = lean_unsigned_to_nat(1u);
v___x_1098_ = lean_nat_sub(v_size_1075_, v___x_1097_);
lean_dec(v_size_1075_);
v___x_1099_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(v_a_1074_, v_bkt_1090_);
v___x_1100_ = lean_array_uset(v_buckets_x27_1096_, v___x_1089_, v___x_1099_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v___x_1100_);
lean_ctor_set(v___x_1093_, 0, v___x_1098_);
v___x_1102_ = v___x_1093_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
if (lean_obj_tag(v_a_1108_) == 0)
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_a_1109_);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
else
{
lean_object* v_key_1113_; lean_object* v_value_1114_; lean_object* v_tail_1115_; uint8_t v___x_1116_; 
v_key_1113_ = lean_ctor_get(v_a_1108_, 0);
lean_inc_n(v_key_1113_, 2);
v_value_1114_ = lean_ctor_get(v_a_1108_, 1);
lean_inc(v_value_1114_);
v_tail_1115_ = lean_ctor_get(v_a_1108_, 2);
lean_inc(v_tail_1115_);
lean_dec_ref_known(v_a_1108_, 3);
v___x_1116_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1107_, v_key_1113_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
lean_inc(v_key_1113_);
v___x_1117_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1109_, v_key_1113_);
if (lean_obj_tag(v_key_1113_) == 3)
{
lean_dec_ref_known(v_key_1113_, 1);
lean_dec(v_value_1114_);
v_a_1108_ = v_tail_1115_;
v_a_1109_ = v___x_1117_;
goto _start;
}
else
{
lean_dec(v_key_1113_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1119_; 
v___x_1119_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_unsub(v_value_1114_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_dec_ref_known(v___x_1119_, 1);
v_a_1108_ = v_tail_1115_;
v_a_1109_ = v___x_1117_;
goto _start;
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec_ref(v___x_1117_);
lean_dec(v_tail_1115_);
v_a_1121_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1119_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1119_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_dec(v_value_1114_);
v_a_1108_ = v_tail_1115_;
v_a_1109_ = v___x_1117_;
goto _start;
}
}
}
else
{
lean_dec(v_value_1114_);
lean_dec(v_key_1113_);
v_a_1108_ = v_tail_1115_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1131_, v_a_1132_, v_a_1133_);
lean_dec_ref(v_a_1131_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1136_, lean_object* v_as_1137_, size_t v_sz_1138_, size_t v_i_1139_, lean_object* v_b_1140_){
_start:
{
uint8_t v___x_1142_; 
v___x_1142_ = lean_usize_dec_lt(v_i_1139_, v_sz_1138_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_b_1140_);
return v___x_1143_;
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1145_; 
v_a_1144_ = lean_array_uget_borrowed(v_as_1137_, v_i_1139_);
lean_inc(v_a_1144_);
v___x_1145_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1136_, v_a_1144_, v_b_1140_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1158_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1158_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1158_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
if (lean_obj_tag(v_a_1146_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; 
v_a_1150_ = lean_ctor_get(v_a_1146_, 0);
lean_inc(v_a_1150_);
lean_dec_ref_known(v_a_1146_, 1);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v_a_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
else
{
lean_object* v_a_1154_; size_t v___x_1155_; size_t v___x_1156_; 
lean_del_object(v___x_1148_);
v_a_1154_ = lean_ctor_get(v_a_1146_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v_a_1146_, 1);
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1139_, v___x_1155_);
v_i_1139_ = v___x_1156_;
v_b_1140_ = v_a_1154_;
goto _start;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_a_1159_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1145_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1145_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1167_, lean_object* v_as_1168_, lean_object* v_sz_1169_, lean_object* v_i_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_){
_start:
{
size_t v_sz_boxed_1173_; size_t v_i_boxed_1174_; lean_object* v_res_1175_; 
v_sz_boxed_1173_ = lean_unbox_usize(v_sz_1169_);
lean_dec(v_sz_1169_);
v_i_boxed_1174_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_res_1175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1167_, v_as_1168_, v_sz_boxed_1173_, v_i_boxed_1174_, v_b_1171_);
lean_dec_ref(v_as_1168_);
lean_dec_ref(v_a_1167_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12___redArg(lean_object* v_a_1176_, lean_object* v_x_1177_){
_start:
{
if (lean_obj_tag(v_x_1177_) == 0)
{
lean_object* v___x_1178_; 
lean_dec(v_a_1176_);
v___x_1178_ = lean_box(0);
return v___x_1178_;
}
else
{
lean_object* v_key_1179_; lean_object* v_value_1180_; lean_object* v_tail_1181_; uint8_t v___x_1182_; 
v_key_1179_ = lean_ctor_get(v_x_1177_, 0);
lean_inc(v_key_1179_);
v_value_1180_ = lean_ctor_get(v_x_1177_, 1);
lean_inc(v_value_1180_);
v_tail_1181_ = lean_ctor_get(v_x_1177_, 2);
lean_inc(v_tail_1181_);
lean_dec_ref_known(v_x_1177_, 3);
lean_inc(v_a_1176_);
v___x_1182_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1179_, v_a_1176_);
if (v___x_1182_ == 0)
{
lean_dec(v_value_1180_);
v_x_1177_ = v_tail_1181_;
goto _start;
}
else
{
lean_object* v___x_1184_; 
lean_dec(v_tail_1181_);
lean_dec(v_a_1176_);
v___x_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1184_, 0, v_value_1180_);
return v___x_1184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_buckets_1187_; lean_object* v___x_1188_; uint64_t v___x_1189_; uint64_t v___x_1190_; uint64_t v___x_1191_; uint64_t v_fold_1192_; uint64_t v___x_1193_; uint64_t v___x_1194_; uint64_t v___x_1195_; size_t v___x_1196_; size_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; size_t v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v_buckets_1187_ = lean_ctor_get(v_m_1185_, 1);
v___x_1188_ = lean_array_get_size(v_buckets_1187_);
v___x_1189_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1186_);
v___x_1190_ = 32ULL;
v___x_1191_ = lean_uint64_shift_right(v___x_1189_, v___x_1190_);
v_fold_1192_ = lean_uint64_xor(v___x_1189_, v___x_1191_);
v___x_1193_ = 16ULL;
v___x_1194_ = lean_uint64_shift_right(v_fold_1192_, v___x_1193_);
v___x_1195_ = lean_uint64_xor(v_fold_1192_, v___x_1194_);
v___x_1196_ = lean_uint64_to_usize(v___x_1195_);
v___x_1197_ = lean_usize_of_nat(v___x_1188_);
v___x_1198_ = ((size_t)1ULL);
v___x_1199_ = lean_usize_sub(v___x_1197_, v___x_1198_);
v___x_1200_ = lean_usize_land(v___x_1196_, v___x_1199_);
v___x_1201_ = lean_array_uget_borrowed(v_buckets_1187_, v___x_1200_);
lean_inc(v___x_1201_);
v___x_1202_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12___redArg(v_a_1186_, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1203_, v_a_1204_);
lean_dec_ref(v_m_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(lean_object* v_a_1206_, lean_object* v_fallback_1207_, lean_object* v_x_1208_){
_start:
{
if (lean_obj_tag(v_x_1208_) == 0)
{
lean_inc(v_fallback_1207_);
return v_fallback_1207_;
}
else
{
lean_object* v_key_1209_; lean_object* v_value_1210_; lean_object* v_tail_1211_; uint8_t v___x_1212_; 
v_key_1209_ = lean_ctor_get(v_x_1208_, 0);
v_value_1210_ = lean_ctor_get(v_x_1208_, 1);
v_tail_1211_ = lean_ctor_get(v_x_1208_, 2);
v___x_1212_ = lean_nat_dec_eq(v_key_1209_, v_a_1206_);
if (v___x_1212_ == 0)
{
v_x_1208_ = v_tail_1211_;
goto _start;
}
else
{
lean_inc(v_value_1210_);
return v_value_1210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg___boxed(lean_object* v_a_1214_, lean_object* v_fallback_1215_, lean_object* v_x_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(v_a_1214_, v_fallback_1215_, v_x_1216_);
lean_dec(v_x_1216_);
lean_dec(v_fallback_1215_);
lean_dec(v_a_1214_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1218_, lean_object* v_a_1219_, lean_object* v_fallback_1220_){
_start:
{
lean_object* v_buckets_1221_; lean_object* v___x_1222_; uint64_t v___x_1223_; uint64_t v___x_1224_; uint64_t v___x_1225_; uint64_t v_fold_1226_; uint64_t v___x_1227_; uint64_t v___x_1228_; uint64_t v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v_buckets_1221_ = lean_ctor_get(v_m_1218_, 1);
v___x_1222_ = lean_array_get_size(v_buckets_1221_);
v___x_1223_ = lean_uint64_of_nat(v_a_1219_);
v___x_1224_ = 32ULL;
v___x_1225_ = lean_uint64_shift_right(v___x_1223_, v___x_1224_);
v_fold_1226_ = lean_uint64_xor(v___x_1223_, v___x_1225_);
v___x_1227_ = 16ULL;
v___x_1228_ = lean_uint64_shift_right(v_fold_1226_, v___x_1227_);
v___x_1229_ = lean_uint64_xor(v_fold_1226_, v___x_1228_);
v___x_1230_ = lean_uint64_to_usize(v___x_1229_);
v___x_1231_ = lean_usize_of_nat(v___x_1222_);
v___x_1232_ = ((size_t)1ULL);
v___x_1233_ = lean_usize_sub(v___x_1231_, v___x_1232_);
v___x_1234_ = lean_usize_land(v___x_1230_, v___x_1233_);
v___x_1235_ = lean_array_uget_borrowed(v_buckets_1221_, v___x_1234_);
v___x_1236_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(v_a_1219_, v_fallback_1220_, v___x_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1237_, lean_object* v_a_1238_, lean_object* v_fallback_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1237_, v_a_1238_, v_fallback_1239_);
lean_dec(v_fallback_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_m_1237_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1241_, lean_object* v_msg_1242_, lean_object* v_x_1243_){
_start:
{
lean_object* v___x_1245_; 
lean_inc_ref(v_c_1241_);
v___x_1245_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1241_, v_msg_1242_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v___x_1246_; 
lean_dec_ref_known(v___x_1245_, 1);
v___x_1246_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1241_);
lean_dec_ref(v_c_1241_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1256_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; uint8_t v___x_1252_; lean_object* v___x_1254_; 
v___x_1251_ = lean_alloc_ctor(2, 0, 1);
v___x_1252_ = lean_unbox(v_a_1247_);
lean_dec(v_a_1247_);
lean_ctor_set_uint8(v___x_1251_, 0, v___x_1252_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v___x_1251_);
v___x_1254_ = v___x_1249_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1251_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1246_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1246_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec_ref(v_c_1241_);
v_a_1265_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1245_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1245_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1273_, lean_object* v_msg_1274_, lean_object* v_x_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1273_, v_msg_1274_, v_x_1275_);
lean_dec_ref(v_x_1275_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1280_, lean_object* v_m_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1280_, v_m_1281_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1284_, lean_object* v_e_1285_){
_start:
{
switch(lean_obj_tag(v_e_1285_))
{
case 0:
{
lean_object* v_msg_1287_; lean_object* v___x_1288_; 
v_msg_1287_ = lean_ctor_get(v_e_1285_, 0);
lean_inc(v_msg_1287_);
lean_dec_ref_known(v_e_1285_, 1);
v___x_1288_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1284_, v_msg_1287_);
return v___x_1288_;
}
case 1:
{
lean_object* v_ms_1289_; lean_object* v_msg_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_ms_1289_ = lean_ctor_get(v_e_1285_, 0);
lean_inc(v_ms_1289_);
v_msg_1290_ = lean_ctor_get(v_e_1285_, 1);
lean_inc(v_msg_1290_);
lean_dec_ref_known(v_e_1285_, 2);
v___f_1291_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1291_, 0, v_c_1284_);
lean_closure_set(v___f_1291_, 1, v_msg_1290_);
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = l_Lasm_JS_Function_ofSyncFn(v___f_1291_, v___x_1292_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; lean_object* v___x_1295_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
lean_dec_ref_known(v___x_1293_, 1);
v___x_1295_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout(v_ms_1289_, v_a_1294_);
return v___x_1295_;
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec(v_ms_1289_);
v_a_1296_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1293_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1293_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
case 2:
{
lean_object* v_url_1304_; uint8_t v_replace_1305_; lean_object* v___x_1306_; 
lean_dec_ref(v_c_1284_);
v_url_1304_ = lean_ctor_get(v_e_1285_, 0);
lean_inc_ref(v_url_1304_);
v_replace_1305_ = lean_ctor_get_uint8(v_e_1285_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1285_, 1);
v___x_1306_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_navigate(v_url_1304_, v_replace_1305_);
return v___x_1306_;
}
default: 
{
lean_object* v_run_1307_; lean_object* v___f_1308_; lean_object* v___f_1309_; lean_object* v___f_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_run_1307_ = lean_ctor_get(v_e_1285_, 0);
lean_inc_ref(v_run_1307_);
lean_dec_ref_known(v_e_1285_, 1);
v___f_1308_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1309_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__1));
v___f_1310_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1310_, 0, v_c_1284_);
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = 0;
v___x_1313_ = lean_apply_2(v_run_1307_, v___f_1310_, lean_box(0));
v___x_1314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1311_, v___x_1312_, v___x_1313_, v___f_1309_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1322_; 
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
lean_object* v_unused_1323_; 
v_unused_1323_ = lean_ctor_get(v___x_1314_, 0);
lean_dec(v_unused_1323_);
v___x_1316_ = v___x_1314_;
v_isShared_1317_ = v_isSharedCheck_1322_;
goto v_resetjp_1315_;
}
else
{
lean_dec(v___x_1314_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1322_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1318_; lean_object* v___x_1320_; 
v___x_1318_ = lean_box(0);
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 0, v___x_1318_);
v___x_1320_ = v___x_1316_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1333_; 
v_a_1324_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1326_ = v___x_1314_;
v_isShared_1327_ = v_isSharedCheck_1333_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1314_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1333_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1331_; 
v___x_1328_ = lean_box(0);
v___x_1329_ = lean_io_map_task(v___f_1308_, v_a_1324_, v___x_1311_, v___x_1312_);
lean_dec_ref(v___x_1329_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set_tag(v___x_1326_, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1328_);
v___x_1331_ = v___x_1326_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1328_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_1334_, lean_object* v_as_x27_1335_, lean_object* v_b_1336_){
_start:
{
if (lean_obj_tag(v_as_x27_1335_) == 0)
{
lean_object* v___x_1338_; 
lean_dec_ref(v_c_1334_);
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_b_1336_);
return v___x_1338_;
}
else
{
lean_object* v_head_1339_; lean_object* v_tail_1340_; lean_object* v___x_1341_; lean_object* v___y_1343_; lean_object* v___x_1345_; 
v_head_1339_ = lean_ctor_get(v_as_x27_1335_, 0);
v_tail_1340_ = lean_ctor_get(v_as_x27_1335_, 1);
v___x_1341_ = lean_box(0);
lean_inc(v_head_1339_);
lean_inc_ref(v_c_1334_);
v___x_1345_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1334_, v_head_1339_);
if (lean_obj_tag(v___x_1345_) == 0)
{
v___y_1343_ = v___x_1345_;
goto v___jp_1342_;
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
v___x_1347_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1348_ = l_Lasm_UI_Runtime_report(v___x_1347_, v_a_1346_);
v___y_1343_ = v___x_1348_;
goto v___jp_1342_;
}
v___jp_1342_:
{
if (lean_obj_tag(v___y_1343_) == 0)
{
lean_dec_ref_known(v___y_1343_, 1);
v_as_x27_1335_ = v_tail_1340_;
v_b_1336_ = v___x_1341_;
goto _start;
}
else
{
lean_dec_ref(v_c_1334_);
return v___y_1343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_1349_, lean_object* v_c_1350_){
_start:
{
lean_object* v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1354_; lean_object* v_model_1355_; lean_object* v_live_1356_; lean_object* v_next_1357_; lean_object* v_tables_1358_; uint8_t v_scheduled_1359_; lean_object* v_queue_1360_; uint8_t v_busy_1361_; lean_object* v_subs_1362_; lean_object* v_handlers_1363_; lean_object* v_nextSub_1364_; lean_object* v_touched_1365_; lean_object* v_ports_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1388_; 
v___x_1352_ = lean_box(0);
v___x_1353_ = 1;
v___x_1354_ = lean_st_ref_get(v___x_1349_);
v_model_1355_ = lean_ctor_get(v___x_1354_, 0);
v_live_1356_ = lean_ctor_get(v___x_1354_, 1);
v_next_1357_ = lean_ctor_get(v___x_1354_, 2);
v_tables_1358_ = lean_ctor_get(v___x_1354_, 3);
v_scheduled_1359_ = lean_ctor_get_uint8(v___x_1354_, sizeof(void*)*10 + 1);
v_queue_1360_ = lean_ctor_get(v___x_1354_, 4);
v_busy_1361_ = lean_ctor_get_uint8(v___x_1354_, sizeof(void*)*10 + 2);
v_subs_1362_ = lean_ctor_get(v___x_1354_, 5);
v_handlers_1363_ = lean_ctor_get(v___x_1354_, 6);
v_nextSub_1364_ = lean_ctor_get(v___x_1354_, 7);
v_touched_1365_ = lean_ctor_get(v___x_1354_, 8);
v_ports_1366_ = lean_ctor_get(v___x_1354_, 9);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1368_ = v___x_1354_;
v_isShared_1369_ = v_isSharedCheck_1388_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_ports_1366_);
lean_inc(v_touched_1365_);
lean_inc(v_nextSub_1364_);
lean_inc(v_handlers_1363_);
lean_inc(v_subs_1362_);
lean_inc(v_queue_1360_);
lean_inc(v_tables_1358_);
lean_inc(v_next_1357_);
lean_inc(v_live_1356_);
lean_inc(v_model_1355_);
lean_dec(v___x_1354_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1388_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = lean_array_get_size(v_queue_1360_);
v___x_1372_ = lean_nat_dec_lt(v___x_1370_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; 
lean_del_object(v___x_1368_);
lean_dec(v_ports_1366_);
lean_dec_ref(v_touched_1365_);
lean_dec(v_nextSub_1364_);
lean_dec_ref(v_handlers_1363_);
lean_dec_ref(v_subs_1362_);
lean_dec_ref(v_queue_1360_);
lean_dec_ref(v_tables_1358_);
lean_dec(v_next_1357_);
lean_dec(v_live_1356_);
lean_dec(v_model_1355_);
lean_dec_ref(v_c_1350_);
v___x_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1352_);
return v___x_1373_;
}
else
{
lean_object* v_app_1374_; lean_object* v_update_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v_fst_1378_; lean_object* v_snd_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v_app_1374_ = lean_ctor_get(v_c_1350_, 0);
v_update_1375_ = lean_ctor_get(v_app_1374_, 1);
v___x_1376_ = lean_array_fget_borrowed(v_queue_1360_, v___x_1370_);
lean_inc_ref(v_update_1375_);
lean_inc(v___x_1376_);
v___x_1377_ = lean_apply_2(v_update_1375_, v___x_1376_, v_model_1355_);
v_fst_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_fst_1378_);
v_snd_1379_ = lean_ctor_get(v___x_1377_, 1);
lean_inc(v_snd_1379_);
lean_dec_ref(v___x_1377_);
v___x_1380_ = lean_unsigned_to_nat(1u);
v___x_1381_ = l_Array_extract___redArg(v_queue_1360_, v___x_1380_, v___x_1371_);
lean_dec_ref(v_queue_1360_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 4, v___x_1381_);
lean_ctor_set(v___x_1368_, 0, v_fst_1378_);
v___x_1383_ = v___x_1368_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_fst_1378_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_live_1356_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_next_1357_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v_tables_1358_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1387_, 5, v_subs_1362_);
lean_ctor_set(v_reuseFailAlloc_1387_, 6, v_handlers_1363_);
lean_ctor_set(v_reuseFailAlloc_1387_, 7, v_nextSub_1364_);
lean_ctor_set(v_reuseFailAlloc_1387_, 8, v_touched_1365_);
lean_ctor_set(v_reuseFailAlloc_1387_, 9, v_ports_1366_);
lean_ctor_set_uint8(v_reuseFailAlloc_1387_, sizeof(void*)*10 + 1, v_scheduled_1359_);
lean_ctor_set_uint8(v_reuseFailAlloc_1387_, sizeof(void*)*10 + 2, v_busy_1361_);
v___x_1383_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*10, v___x_1353_);
v___x_1384_ = lean_st_ref_swap(v___x_1349_, v___x_1383_);
lean_dec(v___x_1384_);
lean_inc_ref(v_c_1350_);
v___x_1385_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1350_, v_snd_1379_, v___x_1352_);
lean_dec(v_snd_1379_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_dec_ref_known(v___x_1385_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_1350_);
return v___x_1385_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1389_ = lean_box(0);
v___x_1390_ = lean_unsigned_to_nat(16u);
v___x_1391_ = lean_mk_array(v___x_1390_, v___x_1389_);
return v___x_1391_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1392_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_1393_ = lean_unsigned_to_nat(0u);
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
lean_ctor_set(v___x_1394_, 1, v___x_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_1395_, lean_object* v_c_1396_, lean_object* v_as_x27_1397_, lean_object* v_b_1398_){
_start:
{
if (lean_obj_tag(v_as_x27_1397_) == 0)
{
lean_object* v___x_1400_; 
lean_dec_ref(v_c_1396_);
lean_dec(v_v_1395_);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v_b_1398_);
return v___x_1400_;
}
else
{
lean_object* v_head_1401_; lean_object* v_tail_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_head_1401_ = lean_ctor_get(v_as_x27_1397_, 0);
v_tail_1402_ = lean_ctor_get(v_as_x27_1397_, 1);
v___x_1403_ = lean_box(0);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = lean_mk_empty_array_with_capacity(v___x_1404_);
lean_inc(v_v_1395_);
v___x_1406_ = lean_array_push(v___x_1405_, v_v_1395_);
lean_inc(v_head_1401_);
v___x_1407_ = lean_apply_1(v_head_1401_, v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 1)
{
lean_object* v_val_1408_; lean_object* v_message_1409_; lean_object* v___x_1410_; 
v_val_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_val_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v_message_1409_ = lean_ctor_get(v_val_1408_, 0);
lean_inc(v_message_1409_);
lean_dec(v_val_1408_);
lean_inc_ref(v_c_1396_);
v___x_1410_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1396_, v_message_1409_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_dec_ref_known(v___x_1410_, 1);
v_as_x27_1397_ = v_tail_1402_;
v_b_1398_ = v___x_1403_;
goto _start;
}
else
{
lean_dec_ref(v_c_1396_);
lean_dec(v_v_1395_);
return v___x_1410_;
}
}
else
{
lean_dec(v___x_1407_);
v_as_x27_1397_ = v_tail_1402_;
v_b_1398_ = v___x_1403_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_1413_, lean_object* v_name_1414_, lean_object* v_c_1415_, lean_object* v_v_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v_subs_1419_; lean_object* v_handlers_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1418_ = lean_st_ref_get(v_ref_1413_);
v_subs_1419_ = lean_ctor_get(v___x_1418_, 5);
lean_inc_ref(v_subs_1419_);
v_handlers_1420_ = lean_ctor_get(v___x_1418_, 6);
lean_inc_ref(v_handlers_1420_);
lean_dec(v___x_1418_);
v___x_1421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1421_, 0, v_name_1414_);
v___x_1422_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_1419_, v___x_1421_);
lean_dec_ref(v_subs_1419_);
if (lean_obj_tag(v___x_1422_) == 1)
{
lean_object* v_val_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_val_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_val_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = lean_box(0);
v___x_1425_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_1420_, v_val_1423_, v___x_1424_);
lean_dec(v_val_1423_);
lean_dec_ref(v_handlers_1420_);
v___x_1426_ = lean_box(0);
lean_inc_ref(v_c_1415_);
v___x_1427_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1416_, v_c_1415_, v___x_1425_, v___x_1426_);
lean_dec(v___x_1425_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v___x_1428_; 
lean_dec_ref_known(v___x_1427_, 1);
v___x_1428_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1415_);
lean_dec_ref(v_c_1415_);
return v___x_1428_;
}
else
{
lean_dec_ref(v_c_1415_);
return v___x_1427_;
}
}
else
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
lean_dec(v___x_1422_);
lean_dec_ref(v_handlers_1420_);
lean_dec(v_v_1416_);
lean_dec_ref(v_c_1415_);
v___x_1429_ = lean_box(0);
v___x_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_1431_, lean_object* v_name_1432_, lean_object* v_c_1433_, lean_object* v_v_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_1431_, v_name_1432_, v_c_1433_, v_v_1434_);
lean_dec(v_ref_1431_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_1437_, lean_object* v_name_1438_){
_start:
{
lean_object* v_ref_1440_; lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v_model_1443_; lean_object* v_live_1444_; lean_object* v_next_1445_; lean_object* v_tables_1446_; uint8_t v_dirty_1447_; uint8_t v_scheduled_1448_; lean_object* v_queue_1449_; uint8_t v_busy_1450_; lean_object* v_subs_1451_; lean_object* v_handlers_1452_; lean_object* v_nextSub_1453_; lean_object* v_touched_1454_; lean_object* v_ports_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1475_; 
v_ref_1440_ = lean_ctor_get(v_c_1437_, 1);
lean_inc_n(v_ref_1440_, 2);
lean_inc_ref(v_name_1438_);
v___f_1441_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1441_, 0, v_ref_1440_);
lean_closure_set(v___f_1441_, 1, v_name_1438_);
lean_closure_set(v___f_1441_, 2, v_c_1437_);
v___x_1442_ = lean_st_ref_take(v_ref_1440_);
v_model_1443_ = lean_ctor_get(v___x_1442_, 0);
v_live_1444_ = lean_ctor_get(v___x_1442_, 1);
v_next_1445_ = lean_ctor_get(v___x_1442_, 2);
v_tables_1446_ = lean_ctor_get(v___x_1442_, 3);
v_dirty_1447_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*10);
v_scheduled_1448_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*10 + 1);
v_queue_1449_ = lean_ctor_get(v___x_1442_, 4);
v_busy_1450_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*10 + 2);
v_subs_1451_ = lean_ctor_get(v___x_1442_, 5);
v_handlers_1452_ = lean_ctor_get(v___x_1442_, 6);
v_nextSub_1453_ = lean_ctor_get(v___x_1442_, 7);
v_touched_1454_ = lean_ctor_get(v___x_1442_, 8);
v_ports_1455_ = lean_ctor_get(v___x_1442_, 9);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1457_ = v___x_1442_;
v_isShared_1458_ = v_isSharedCheck_1475_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_ports_1455_);
lean_inc(v_touched_1454_);
lean_inc(v_nextSub_1453_);
lean_inc(v_handlers_1452_);
lean_inc(v_subs_1451_);
lean_inc(v_queue_1449_);
lean_inc(v_tables_1446_);
lean_inc(v_next_1445_);
lean_inc(v_live_1444_);
lean_inc(v_model_1443_);
lean_dec(v___x_1442_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1475_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1461_; 
lean_inc_ref(v_name_1438_);
v___x_1459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1459_, 0, v_name_1438_);
lean_ctor_set(v___x_1459_, 1, v_ports_1455_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 9, v___x_1459_);
v___x_1461_ = v___x_1457_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_model_1443_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v_live_1444_);
lean_ctor_set(v_reuseFailAlloc_1474_, 2, v_next_1445_);
lean_ctor_set(v_reuseFailAlloc_1474_, 3, v_tables_1446_);
lean_ctor_set(v_reuseFailAlloc_1474_, 4, v_queue_1449_);
lean_ctor_set(v_reuseFailAlloc_1474_, 5, v_subs_1451_);
lean_ctor_set(v_reuseFailAlloc_1474_, 6, v_handlers_1452_);
lean_ctor_set(v_reuseFailAlloc_1474_, 7, v_nextSub_1453_);
lean_ctor_set(v_reuseFailAlloc_1474_, 8, v_touched_1454_);
lean_ctor_set(v_reuseFailAlloc_1474_, 9, v___x_1459_);
lean_ctor_set_uint8(v_reuseFailAlloc_1474_, sizeof(void*)*10, v_dirty_1447_);
lean_ctor_set_uint8(v_reuseFailAlloc_1474_, sizeof(void*)*10 + 1, v_scheduled_1448_);
lean_ctor_set_uint8(v_reuseFailAlloc_1474_, sizeof(void*)*10 + 2, v_busy_1450_);
v___x_1461_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_st_ref_put(v_ref_1440_, v___x_1461_);
lean_dec(v_ref_1440_);
v___x_1463_ = l_Lasm_UI_Mount_Raw_port(v_name_1438_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1465_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v___x_1465_ = l_Lasm_UI_Mount_Port_subscribe(v_a_1464_, v___f_1441_);
return v___x_1465_;
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v___f_1441_);
v_a_1466_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1463_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1463_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_1476_, lean_object* v_c_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_){
_start:
{
if (lean_obj_tag(v_a_1478_) == 0)
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
lean_dec_ref(v_c_1477_);
v___x_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_a_1479_);
v___x_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
return v___x_1482_;
}
else
{
lean_object* v_snd_1483_; lean_object* v_key_1484_; lean_object* v_value_1485_; lean_object* v_tail_1486_; lean_object* v_fst_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1557_; 
v_snd_1483_ = lean_ctor_get(v_a_1479_, 1);
lean_inc(v_snd_1483_);
v_key_1484_ = lean_ctor_get(v_a_1478_, 0);
lean_inc(v_key_1484_);
v_value_1485_ = lean_ctor_get(v_a_1478_, 1);
lean_inc(v_value_1485_);
v_tail_1486_ = lean_ctor_get(v_a_1478_, 2);
lean_inc(v_tail_1486_);
lean_dec_ref_known(v_a_1478_, 3);
v_fst_1487_ = lean_ctor_get(v_a_1479_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_a_1479_);
if (v_isSharedCheck_1557_ == 0)
{
lean_object* v_unused_1558_; 
v_unused_1558_ = lean_ctor_get(v_a_1479_, 1);
lean_dec(v_unused_1558_);
v___x_1489_ = v_a_1479_;
v_isShared_1490_ = v_isSharedCheck_1557_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_fst_1487_);
lean_dec(v_a_1479_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1557_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v_fst_1491_; lean_object* v_snd_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1556_; 
v_fst_1491_ = lean_ctor_get(v_snd_1483_, 0);
v_snd_1492_ = lean_ctor_get(v_snd_1483_, 1);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_snd_1483_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1494_ = v_snd_1483_;
v_isShared_1495_ = v_isSharedCheck_1556_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_snd_1492_);
lean_inc(v_fst_1491_);
lean_dec(v_snd_1483_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1556_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1496_; 
lean_inc(v_key_1484_);
v___x_1496_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_1487_, v_key_1484_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1497_ = lean_unsigned_to_nat(1u);
v___x_1498_ = lean_nat_add(v_snd_1492_, v___x_1497_);
lean_inc_n(v_snd_1492_, 2);
lean_inc(v_key_1484_);
v___x_1499_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_1487_, v_key_1484_, v_snd_1492_);
v___x_1500_ = l_List_reverse___redArg(v_value_1485_);
v___x_1501_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_1491_, v_snd_1492_, v___x_1500_);
if (lean_obj_tag(v_key_1484_) == 3)
{
lean_object* v_name_1502_; lean_object* v___x_1503_; lean_object* v_ports_1504_; uint8_t v___x_1505_; 
lean_dec(v_snd_1492_);
v_name_1502_ = lean_ctor_get(v_key_1484_, 0);
lean_inc_ref(v_name_1502_);
lean_dec_ref_known(v_key_1484_, 1);
v___x_1503_ = lean_st_ref_get(v___x_1476_);
v_ports_1504_ = lean_ctor_get(v___x_1503_, 9);
lean_inc(v_ports_1504_);
lean_dec(v___x_1503_);
v___x_1505_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_1502_, v_ports_1504_);
lean_dec(v_ports_1504_);
if (v___x_1505_ == 0)
{
lean_object* v___x_1506_; 
lean_inc_ref(v_c_1477_);
v___x_1506_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1477_, v_name_1502_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v___x_1508_; 
lean_dec_ref_known(v___x_1506_, 1);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 1, v___x_1498_);
lean_ctor_set(v___x_1494_, 0, v___x_1501_);
v___x_1508_ = v___x_1494_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1498_);
v___x_1508_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1510_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 1, v___x_1508_);
lean_ctor_set(v___x_1489_, 0, v___x_1499_);
v___x_1510_ = v___x_1489_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
v_a_1478_ = v_tail_1486_;
v_a_1479_ = v___x_1510_;
goto _start;
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___x_1501_);
lean_dec_ref(v___x_1499_);
lean_dec(v___x_1498_);
lean_del_object(v___x_1494_);
lean_del_object(v___x_1489_);
lean_dec(v_tail_1486_);
lean_dec_ref(v_c_1477_);
v_a_1514_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1506_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1506_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
else
{
lean_object* v___x_1523_; 
lean_dec_ref(v_name_1502_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 1, v___x_1498_);
lean_ctor_set(v___x_1494_, 0, v___x_1501_);
v___x_1523_ = v___x_1494_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1528_, 1, v___x_1498_);
v___x_1523_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1525_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 1, v___x_1523_);
lean_ctor_set(v___x_1489_, 0, v___x_1499_);
v___x_1525_ = v___x_1489_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
v_a_1478_ = v_tail_1486_;
v_a_1479_ = v___x_1525_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = l_Lasm_UI_Runtime_specData(v_key_1484_);
v___x_1530_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub(v_snd_1492_, v___x_1529_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v___x_1532_; 
lean_dec_ref_known(v___x_1530_, 1);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 1, v___x_1498_);
lean_ctor_set(v___x_1494_, 0, v___x_1501_);
v___x_1532_ = v___x_1494_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v___x_1498_);
v___x_1532_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 1, v___x_1532_);
lean_ctor_set(v___x_1489_, 0, v___x_1499_);
v___x_1534_ = v___x_1489_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
v_a_1478_ = v_tail_1486_;
v_a_1479_ = v___x_1534_;
goto _start;
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v___x_1501_);
lean_dec_ref(v___x_1499_);
lean_dec(v___x_1498_);
lean_del_object(v___x_1494_);
lean_del_object(v___x_1489_);
lean_dec(v_tail_1486_);
lean_dec_ref(v_c_1477_);
v_a_1538_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1530_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1530_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
else
{
lean_object* v_val_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
lean_dec(v_key_1484_);
v_val_1546_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v___x_1496_, 1);
v___x_1547_ = l_List_reverse___redArg(v_value_1485_);
v___x_1548_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_1491_, v_val_1546_, v___x_1547_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 0, v___x_1548_);
v___x_1550_ = v___x_1494_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_snd_1492_);
v___x_1550_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1552_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 1, v___x_1550_);
v___x_1552_ = v___x_1489_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_fst_1487_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
v_a_1478_ = v_tail_1486_;
v_a_1479_ = v___x_1552_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_1559_, lean_object* v_c_1560_, lean_object* v_as_1561_, size_t v_sz_1562_, size_t v_i_1563_, lean_object* v_b_1564_){
_start:
{
uint8_t v___x_1566_; 
v___x_1566_ = lean_usize_dec_lt(v_i_1563_, v_sz_1562_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; 
lean_dec_ref(v_c_1560_);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_b_1564_);
return v___x_1567_;
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1569_; 
v_a_1568_ = lean_array_uget_borrowed(v_as_1561_, v_i_1563_);
lean_inc(v_a_1568_);
lean_inc_ref(v_c_1560_);
v___x_1569_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1559_, v_c_1560_, v_a_1568_, v_b_1564_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1582_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1582_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1582_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
if (lean_obj_tag(v_a_1570_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; 
lean_dec_ref(v_c_1560_);
v_a_1574_ = lean_ctor_get(v_a_1570_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v_a_1570_, 1);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v_a_1574_);
v___x_1576_ = v___x_1572_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1574_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
else
{
lean_object* v_a_1578_; size_t v___x_1579_; size_t v___x_1580_; 
lean_del_object(v___x_1572_);
v_a_1578_ = lean_ctor_get(v_a_1570_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v_a_1570_, 1);
v___x_1579_ = ((size_t)1ULL);
v___x_1580_ = lean_usize_add(v_i_1563_, v___x_1579_);
v_i_1563_ = v___x_1580_;
v_b_1564_ = v_a_1578_;
goto _start;
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec_ref(v_c_1560_);
v_a_1583_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1569_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1569_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_1591_){
_start:
{
lean_object* v_app_1593_; lean_object* v_ref_1594_; lean_object* v___x_1595_; lean_object* v_subscriptions_1596_; lean_object* v_model_1597_; lean_object* v_subs_1598_; lean_object* v_nextSub_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_app_1593_ = lean_ctor_get(v_c_1591_, 0);
v_ref_1594_ = lean_ctor_get(v_c_1591_, 1);
lean_inc(v_ref_1594_);
v___x_1595_ = lean_st_ref_get(v_ref_1594_);
v_subscriptions_1596_ = lean_ctor_get(v_app_1593_, 3);
v_model_1597_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_model_1597_);
v_subs_1598_ = lean_ctor_get(v___x_1595_, 5);
lean_inc_ref(v_subs_1598_);
v_nextSub_1599_ = lean_ctor_get(v___x_1595_, 7);
lean_inc(v_nextSub_1599_);
lean_dec(v___x_1595_);
lean_inc_ref(v_subscriptions_1596_);
v___x_1600_ = lean_apply_1(v_subscriptions_1596_, v_model_1597_);
v___x_1601_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_1602_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_1600_, v___x_1601_);
lean_dec(v___x_1600_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v_buckets_1604_; size_t v_sz_1605_; size_t v___x_1606_; lean_object* v___x_1607_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v_buckets_1604_ = lean_ctor_get(v_subs_1598_, 1);
lean_inc_ref(v_buckets_1604_);
v_sz_1605_ = lean_array_size(v_buckets_1604_);
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1603_, v_buckets_1604_, v_sz_1605_, v___x_1606_, v_subs_1598_);
lean_dec_ref(v_buckets_1604_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_buckets_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1661_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v_buckets_1609_ = lean_ctor_get(v_a_1603_, 1);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_a_1603_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; 
v_unused_1662_ = lean_ctor_get(v_a_1603_, 0);
lean_dec(v_unused_1662_);
v___x_1611_ = v_a_1603_;
v_isShared_1612_ = v_isSharedCheck_1661_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_buckets_1609_);
lean_dec(v_a_1603_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1661_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 1, v_nextSub_1599_);
lean_ctor_set(v___x_1611_, 0, v___x_1601_);
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1601_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_nextSub_1599_);
v___x_1614_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1615_; size_t v_sz_1616_; lean_object* v___x_1617_; 
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_a_1608_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v_sz_1616_ = lean_array_size(v_buckets_1609_);
v___x_1617_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_1594_, v_c_1591_, v_buckets_1609_, v_sz_1616_, v___x_1606_, v___x_1615_);
lean_dec_ref(v_buckets_1609_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1651_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1651_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1651_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v_snd_1622_; lean_object* v_fst_1623_; lean_object* v_fst_1624_; lean_object* v_snd_1625_; lean_object* v___x_1626_; lean_object* v_model_1627_; lean_object* v_live_1628_; lean_object* v_next_1629_; lean_object* v_tables_1630_; uint8_t v_dirty_1631_; uint8_t v_scheduled_1632_; lean_object* v_queue_1633_; uint8_t v_busy_1634_; lean_object* v_touched_1635_; lean_object* v_ports_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1647_; 
v_snd_1622_ = lean_ctor_get(v_a_1618_, 1);
lean_inc(v_snd_1622_);
v_fst_1623_ = lean_ctor_get(v_a_1618_, 0);
lean_inc(v_fst_1623_);
lean_dec(v_a_1618_);
v_fst_1624_ = lean_ctor_get(v_snd_1622_, 0);
lean_inc(v_fst_1624_);
v_snd_1625_ = lean_ctor_get(v_snd_1622_, 1);
lean_inc(v_snd_1625_);
lean_dec(v_snd_1622_);
v___x_1626_ = lean_st_ref_take(v_ref_1594_);
v_model_1627_ = lean_ctor_get(v___x_1626_, 0);
v_live_1628_ = lean_ctor_get(v___x_1626_, 1);
v_next_1629_ = lean_ctor_get(v___x_1626_, 2);
v_tables_1630_ = lean_ctor_get(v___x_1626_, 3);
v_dirty_1631_ = lean_ctor_get_uint8(v___x_1626_, sizeof(void*)*10);
v_scheduled_1632_ = lean_ctor_get_uint8(v___x_1626_, sizeof(void*)*10 + 1);
v_queue_1633_ = lean_ctor_get(v___x_1626_, 4);
v_busy_1634_ = lean_ctor_get_uint8(v___x_1626_, sizeof(void*)*10 + 2);
v_touched_1635_ = lean_ctor_get(v___x_1626_, 8);
v_ports_1636_ = lean_ctor_get(v___x_1626_, 9);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1648_ = lean_ctor_get(v___x_1626_, 7);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v___x_1626_, 6);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v___x_1626_, 5);
lean_dec(v_unused_1650_);
v___x_1638_ = v___x_1626_;
v_isShared_1639_ = v_isSharedCheck_1647_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_ports_1636_);
lean_inc(v_touched_1635_);
lean_inc(v_queue_1633_);
lean_inc(v_tables_1630_);
lean_inc(v_next_1629_);
lean_inc(v_live_1628_);
lean_inc(v_model_1627_);
lean_dec(v___x_1626_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1647_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 7, v_snd_1625_);
lean_ctor_set(v___x_1638_, 6, v_fst_1624_);
lean_ctor_set(v___x_1638_, 5, v_fst_1623_);
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_model_1627_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_live_1628_);
lean_ctor_set(v_reuseFailAlloc_1646_, 2, v_next_1629_);
lean_ctor_set(v_reuseFailAlloc_1646_, 3, v_tables_1630_);
lean_ctor_set(v_reuseFailAlloc_1646_, 4, v_queue_1633_);
lean_ctor_set(v_reuseFailAlloc_1646_, 5, v_fst_1623_);
lean_ctor_set(v_reuseFailAlloc_1646_, 6, v_fst_1624_);
lean_ctor_set(v_reuseFailAlloc_1646_, 7, v_snd_1625_);
lean_ctor_set(v_reuseFailAlloc_1646_, 8, v_touched_1635_);
lean_ctor_set(v_reuseFailAlloc_1646_, 9, v_ports_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1646_, sizeof(void*)*10, v_dirty_1631_);
lean_ctor_set_uint8(v_reuseFailAlloc_1646_, sizeof(void*)*10 + 1, v_scheduled_1632_);
lean_ctor_set_uint8(v_reuseFailAlloc_1646_, sizeof(void*)*10 + 2, v_busy_1634_);
v___x_1641_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1642_ = lean_st_ref_put(v_ref_1594_, v___x_1641_);
lean_dec(v_ref_1594_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v___x_1642_);
v___x_1644_ = v___x_1620_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec(v_ref_1594_);
v_a_1652_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1617_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1617_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
}
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec(v_a_1603_);
lean_dec(v_nextSub_1599_);
lean_dec(v_ref_1594_);
lean_dec_ref(v_c_1591_);
v_a_1663_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1607_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1607_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec(v_nextSub_1599_);
lean_dec_ref(v_subs_1598_);
lean_dec(v_ref_1594_);
lean_dec_ref(v_c_1591_);
v_a_1671_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1602_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1602_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_1679_, lean_object* v_msg_1680_){
_start:
{
lean_object* v_ref_1682_; lean_object* v___x_1683_; lean_object* v_model_1684_; lean_object* v_live_1685_; lean_object* v_next_1686_; lean_object* v_tables_1687_; uint8_t v_dirty_1688_; uint8_t v_scheduled_1689_; lean_object* v_queue_1690_; uint8_t v_busy_1691_; lean_object* v_subs_1692_; lean_object* v_handlers_1693_; lean_object* v_nextSub_1694_; lean_object* v_touched_1695_; lean_object* v_ports_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1757_; 
v_ref_1682_ = lean_ctor_get(v_c_1679_, 1);
lean_inc(v_ref_1682_);
v___x_1683_ = lean_st_ref_take(v_ref_1682_);
v_model_1684_ = lean_ctor_get(v___x_1683_, 0);
v_live_1685_ = lean_ctor_get(v___x_1683_, 1);
v_next_1686_ = lean_ctor_get(v___x_1683_, 2);
v_tables_1687_ = lean_ctor_get(v___x_1683_, 3);
v_dirty_1688_ = lean_ctor_get_uint8(v___x_1683_, sizeof(void*)*10);
v_scheduled_1689_ = lean_ctor_get_uint8(v___x_1683_, sizeof(void*)*10 + 1);
v_queue_1690_ = lean_ctor_get(v___x_1683_, 4);
v_busy_1691_ = lean_ctor_get_uint8(v___x_1683_, sizeof(void*)*10 + 2);
v_subs_1692_ = lean_ctor_get(v___x_1683_, 5);
v_handlers_1693_ = lean_ctor_get(v___x_1683_, 6);
v_nextSub_1694_ = lean_ctor_get(v___x_1683_, 7);
v_touched_1695_ = lean_ctor_get(v___x_1683_, 8);
v_ports_1696_ = lean_ctor_get(v___x_1683_, 9);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1698_ = v___x_1683_;
v_isShared_1699_ = v_isSharedCheck_1757_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_ports_1696_);
lean_inc(v_touched_1695_);
lean_inc(v_nextSub_1694_);
lean_inc(v_handlers_1693_);
lean_inc(v_subs_1692_);
lean_inc(v_queue_1690_);
lean_inc(v_tables_1687_);
lean_inc(v_next_1686_);
lean_inc(v_live_1685_);
lean_inc(v_model_1684_);
lean_dec(v___x_1683_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1757_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1700_ = lean_array_push(v_queue_1690_, v_msg_1680_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 4, v___x_1700_);
v___x_1702_ = v___x_1698_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_model_1684_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_live_1685_);
lean_ctor_set(v_reuseFailAlloc_1756_, 2, v_next_1686_);
lean_ctor_set(v_reuseFailAlloc_1756_, 3, v_tables_1687_);
lean_ctor_set(v_reuseFailAlloc_1756_, 4, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1756_, 5, v_subs_1692_);
lean_ctor_set(v_reuseFailAlloc_1756_, 6, v_handlers_1693_);
lean_ctor_set(v_reuseFailAlloc_1756_, 7, v_nextSub_1694_);
lean_ctor_set(v_reuseFailAlloc_1756_, 8, v_touched_1695_);
lean_ctor_set(v_reuseFailAlloc_1756_, 9, v_ports_1696_);
lean_ctor_set_uint8(v_reuseFailAlloc_1756_, sizeof(void*)*10, v_dirty_1688_);
lean_ctor_set_uint8(v_reuseFailAlloc_1756_, sizeof(void*)*10 + 1, v_scheduled_1689_);
lean_ctor_set_uint8(v_reuseFailAlloc_1756_, sizeof(void*)*10 + 2, v_busy_1691_);
v___x_1702_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v_busy_1705_; 
v___x_1703_ = lean_st_ref_put(v_ref_1682_, v___x_1702_);
v___x_1704_ = lean_st_ref_get(v_ref_1682_);
v_busy_1705_ = lean_ctor_get_uint8(v___x_1704_, sizeof(void*)*10 + 2);
lean_dec(v___x_1704_);
if (v_busy_1705_ == 0)
{
lean_object* v___y_1707_; uint8_t v___x_1730_; lean_object* v___x_1731_; lean_object* v_model_1732_; lean_object* v_live_1733_; lean_object* v_next_1734_; lean_object* v_tables_1735_; uint8_t v_dirty_1736_; uint8_t v_scheduled_1737_; lean_object* v_queue_1738_; lean_object* v_subs_1739_; lean_object* v_handlers_1740_; lean_object* v_nextSub_1741_; lean_object* v_touched_1742_; lean_object* v_ports_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1753_; 
v___x_1730_ = 1;
v___x_1731_ = lean_st_ref_take(v_ref_1682_);
v_model_1732_ = lean_ctor_get(v___x_1731_, 0);
v_live_1733_ = lean_ctor_get(v___x_1731_, 1);
v_next_1734_ = lean_ctor_get(v___x_1731_, 2);
v_tables_1735_ = lean_ctor_get(v___x_1731_, 3);
v_dirty_1736_ = lean_ctor_get_uint8(v___x_1731_, sizeof(void*)*10);
v_scheduled_1737_ = lean_ctor_get_uint8(v___x_1731_, sizeof(void*)*10 + 1);
v_queue_1738_ = lean_ctor_get(v___x_1731_, 4);
v_subs_1739_ = lean_ctor_get(v___x_1731_, 5);
v_handlers_1740_ = lean_ctor_get(v___x_1731_, 6);
v_nextSub_1741_ = lean_ctor_get(v___x_1731_, 7);
v_touched_1742_ = lean_ctor_get(v___x_1731_, 8);
v_ports_1743_ = lean_ctor_get(v___x_1731_, 9);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1745_ = v___x_1731_;
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_ports_1743_);
lean_inc(v_touched_1742_);
lean_inc(v_nextSub_1741_);
lean_inc(v_handlers_1740_);
lean_inc(v_subs_1739_);
lean_inc(v_queue_1738_);
lean_inc(v_tables_1735_);
lean_inc(v_next_1734_);
lean_inc(v_live_1733_);
lean_inc(v_model_1732_);
lean_dec(v___x_1731_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1753_;
goto v_resetjp_1744_;
}
v___jp_1706_:
{
if (lean_obj_tag(v___y_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1718_; 
v_a_1708_ = lean_ctor_get(v___y_1707_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___y_1707_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1710_ = v___y_1707_;
v_isShared_1711_ = v_isSharedCheck_1718_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___y_1707_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1718_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1712_ = lean_st_ref_take(v_ref_1682_);
v___x_1713_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_1705_, v___x_1712_);
v___x_1714_ = lean_st_ref_put(v_ref_1682_, v___x_1713_);
lean_dec(v_ref_1682_);
if (v_isShared_1711_ == 0)
{
v___x_1716_ = v___x_1710_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1708_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
else
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1729_; 
v_a_1719_ = lean_ctor_get(v___y_1707_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___y_1707_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1721_ = v___y_1707_;
v_isShared_1722_ = v_isSharedCheck_1729_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___y_1707_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1729_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1727_; 
v___x_1723_ = lean_st_ref_take(v_ref_1682_);
v___x_1724_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_1705_, v___x_1723_);
v___x_1725_ = lean_st_ref_put(v_ref_1682_, v___x_1724_);
lean_dec(v_ref_1682_);
if (v_isShared_1722_ == 0)
{
v___x_1727_ = v___x_1721_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1719_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_model_1732_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v_live_1733_);
lean_ctor_set(v_reuseFailAlloc_1752_, 2, v_next_1734_);
lean_ctor_set(v_reuseFailAlloc_1752_, 3, v_tables_1735_);
lean_ctor_set(v_reuseFailAlloc_1752_, 4, v_queue_1738_);
lean_ctor_set(v_reuseFailAlloc_1752_, 5, v_subs_1739_);
lean_ctor_set(v_reuseFailAlloc_1752_, 6, v_handlers_1740_);
lean_ctor_set(v_reuseFailAlloc_1752_, 7, v_nextSub_1741_);
lean_ctor_set(v_reuseFailAlloc_1752_, 8, v_touched_1742_);
lean_ctor_set(v_reuseFailAlloc_1752_, 9, v_ports_1743_);
lean_ctor_set_uint8(v_reuseFailAlloc_1752_, sizeof(void*)*10, v_dirty_1736_);
lean_ctor_set_uint8(v_reuseFailAlloc_1752_, sizeof(void*)*10 + 1, v_scheduled_1737_);
v___x_1748_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_ctor_set_uint8(v___x_1748_, sizeof(void*)*10 + 2, v___x_1730_);
v___x_1749_ = lean_st_ref_put(v_ref_1682_, v___x_1748_);
lean_inc_ref(v_c_1679_);
v___x_1750_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_1682_, v_c_1679_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v___x_1751_; 
lean_dec_ref_known(v___x_1750_, 1);
v___x_1751_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1679_);
v___y_1707_ = v___x_1751_;
goto v___jp_1706_;
}
else
{
lean_dec_ref(v_c_1679_);
v___y_1707_ = v___x_1750_;
goto v___jp_1706_;
}
}
}
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec(v_ref_1682_);
lean_dec_ref(v_c_1679_);
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_1758_, lean_object* v_m_1759_){
_start:
{
lean_object* v___x_1761_; 
lean_inc_ref(v_c_1758_);
v___x_1761_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1758_, v_m_1759_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v___x_1762_; 
lean_dec_ref_known(v___x_1761_, 1);
v___x_1762_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1758_);
lean_dec_ref(v_c_1758_);
return v___x_1762_;
}
else
{
lean_dec_ref(v_c_1758_);
return v___x_1761_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_1763_, lean_object* v_as_x27_1764_, lean_object* v_b_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1763_, v_as_x27_1764_, v_b_1765_);
lean_dec(v_as_x27_1764_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_1768_, lean_object* v_c_1769_, lean_object* v_as_1770_, lean_object* v_sz_1771_, lean_object* v_i_1772_, lean_object* v_b_1773_, lean_object* v___y_1774_){
_start:
{
size_t v_sz_boxed_1775_; size_t v_i_boxed_1776_; lean_object* v_res_1777_; 
v_sz_boxed_1775_ = lean_unbox_usize(v_sz_1771_);
lean_dec(v_sz_1771_);
v_i_boxed_1776_ = lean_unbox_usize(v_i_1772_);
lean_dec(v_i_1772_);
v_res_1777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_1768_, v_c_1769_, v_as_1770_, v_sz_boxed_1775_, v_i_boxed_1776_, v_b_1773_);
lean_dec_ref(v_as_1770_);
lean_dec(v___x_1768_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_1778_, lean_object* v_name_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1778_, v_name_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_1782_, lean_object* v_c_1783_, lean_object* v_as_x27_1784_, lean_object* v_b_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1782_, v_c_1783_, v_as_x27_1784_, v_b_1785_);
lean_dec(v_as_x27_1784_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_1788_, lean_object* v_c_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_1788_, v_c_1789_);
lean_dec(v___x_1788_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_1792_, lean_object* v_e_1793_, lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1792_, v_e_1793_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_1796_, lean_object* v_c_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1796_, v_c_1797_, v_a_1798_, v_a_1799_);
lean_dec(v___x_1796_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_1805_, lean_object* v_msg_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1805_, v_msg_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_1809_, lean_object* v_Model_1810_, lean_object* v_Msg_1811_, lean_object* v_c_1812_, lean_object* v_e_1813_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1812_, v_e_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_1816_, lean_object* v_Model_1817_, lean_object* v_Msg_1818_, lean_object* v_c_1819_, lean_object* v_e_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lasm_UI_Runtime_perform(v_Flags_1816_, v_Model_1817_, v_Msg_1818_, v_c_1819_, v_e_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_1823_, lean_object* v_Model_1824_, lean_object* v_Msg_1825_, lean_object* v_c_1826_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_1829_, lean_object* v_Model_1830_, lean_object* v_Msg_1831_, lean_object* v_c_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_1829_, v_Model_1830_, v_Msg_1831_, v_c_1832_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_1835_, lean_object* v_Model_1836_, lean_object* v_Msg_1837_, lean_object* v_c_1838_, lean_object* v_name_1839_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1838_, v_name_1839_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_1842_, lean_object* v_Model_1843_, lean_object* v_Msg_1844_, lean_object* v_c_1845_, lean_object* v_name_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lasm_UI_Runtime_listenPort(v_Flags_1842_, v_Model_1843_, v_Msg_1844_, v_c_1845_, v_name_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_1849_, lean_object* v_Model_1850_, lean_object* v_Msg_1851_, lean_object* v_c_1852_, lean_object* v_msg_1853_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1852_, v_msg_1853_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_1856_, lean_object* v_Model_1857_, lean_object* v_Msg_1858_, lean_object* v_c_1859_, lean_object* v_msg_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lasm_UI_Runtime_deliver(v_Flags_1856_, v_Model_1857_, v_Msg_1858_, v_c_1859_, v_msg_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_1863_, lean_object* v_m_1864_, lean_object* v_a_1865_, lean_object* v_fallback_1866_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1864_, v_a_1865_, v_fallback_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_1868_, lean_object* v_m_1869_, lean_object* v_a_1870_, lean_object* v_fallback_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_1868_, v_m_1869_, v_a_1870_, v_fallback_1871_);
lean_dec(v_fallback_1871_);
lean_dec_ref(v_m_1869_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_1873_, lean_object* v_m_1874_, lean_object* v_a_1875_, lean_object* v_b_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_1874_, v_a_1875_, v_b_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_1878_, lean_object* v_as_1879_, lean_object* v_as_x27_1880_, lean_object* v_b_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1880_, v_b_1881_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_1885_, lean_object* v_as_1886_, lean_object* v_as_x27_1887_, lean_object* v_b_1888_, lean_object* v_a_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_1885_, v_as_1886_, v_as_x27_1887_, v_b_1888_, v_a_1889_);
lean_dec(v_as_x27_1887_);
lean_dec(v_as_1886_);
return v_res_1891_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_1892_, lean_object* v_m_1893_, lean_object* v_a_1894_){
_start:
{
uint8_t v___x_1895_; 
v___x_1895_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1893_, v_a_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_1896_, lean_object* v_m_1897_, lean_object* v_a_1898_){
_start:
{
uint8_t v_res_1899_; lean_object* v_r_1900_; 
v_res_1899_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_1896_, v_m_1897_, v_a_1898_);
lean_dec_ref(v_m_1897_);
v_r_1900_ = lean_box(v_res_1899_);
return v_r_1900_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_1901_, lean_object* v_m_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_1902_, v_a_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1906_, v_a_1907_, v_a_1908_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_1911_, v_a_1912_, v_a_1913_, v_a_1914_);
lean_dec_ref(v_a_1912_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_1917_, lean_object* v_m_1918_, lean_object* v_a_1919_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1918_, v_a_1919_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_1921_, lean_object* v_m_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_1921_, v_m_1922_, v_a_1923_);
lean_dec_ref(v_m_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_1925_, lean_object* v_Model_1926_, lean_object* v___x_1927_, lean_object* v_Flags_1928_, lean_object* v_c_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1927_, v_c_1929_, v_a_1930_, v_a_1931_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_1934_, lean_object* v_Model_1935_, lean_object* v___x_1936_, lean_object* v_Flags_1937_, lean_object* v_c_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_1934_, v_Model_1935_, v___x_1936_, v_Flags_1937_, v_c_1938_, v_a_1939_, v_a_1940_);
lean_dec(v___x_1936_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_1943_, lean_object* v_a_1944_, lean_object* v_as_1945_, size_t v_sz_1946_, size_t v_i_1947_, lean_object* v_b_1948_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1944_, v_as_1945_, v_sz_1946_, v_i_1947_, v_b_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_1951_, lean_object* v_a_1952_, lean_object* v_as_1953_, lean_object* v_sz_1954_, lean_object* v_i_1955_, lean_object* v_b_1956_, lean_object* v___y_1957_){
_start:
{
size_t v_sz_boxed_1958_; size_t v_i_boxed_1959_; lean_object* v_res_1960_; 
v_sz_boxed_1958_ = lean_unbox_usize(v_sz_1954_);
lean_dec(v_sz_1954_);
v_i_boxed_1959_ = lean_unbox_usize(v_i_1955_);
lean_dec(v_i_1955_);
v_res_1960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_1951_, v_a_1952_, v_as_1953_, v_sz_boxed_1958_, v_i_boxed_1959_, v_b_1956_);
lean_dec_ref(v_as_1953_);
lean_dec_ref(v_a_1952_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_1961_, lean_object* v_Model_1962_, lean_object* v___x_1963_, lean_object* v_Flags_1964_, lean_object* v_c_1965_, lean_object* v_as_1966_, size_t v_sz_1967_, size_t v_i_1968_, lean_object* v_b_1969_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_1963_, v_c_1965_, v_as_1966_, v_sz_1967_, v_i_1968_, v_b_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_1972_, lean_object* v_Model_1973_, lean_object* v___x_1974_, lean_object* v_Flags_1975_, lean_object* v_c_1976_, lean_object* v_as_1977_, lean_object* v_sz_1978_, lean_object* v_i_1979_, lean_object* v_b_1980_, lean_object* v___y_1981_){
_start:
{
size_t v_sz_boxed_1982_; size_t v_i_boxed_1983_; lean_object* v_res_1984_; 
v_sz_boxed_1982_ = lean_unbox_usize(v_sz_1978_);
lean_dec(v_sz_1978_);
v_i_boxed_1983_ = lean_unbox_usize(v_i_1979_);
lean_dec(v_i_1979_);
v_res_1984_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_1972_, v_Model_1973_, v___x_1974_, v_Flags_1975_, v_c_1976_, v_as_1977_, v_sz_boxed_1982_, v_i_boxed_1983_, v_b_1980_);
lean_dec_ref(v_as_1977_);
lean_dec(v___x_1974_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_1985_, lean_object* v_m_1986_, lean_object* v_a_1987_, lean_object* v_fallback_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1986_, v_a_1987_, v_fallback_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_1990_, lean_object* v_m_1991_, lean_object* v_a_1992_, lean_object* v_fallback_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_1990_, v_m_1991_, v_a_1992_, v_fallback_1993_);
lean_dec(v_fallback_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_m_1991_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_1995_, lean_object* v_v_1996_, lean_object* v_Flags_1997_, lean_object* v_Model_1998_, lean_object* v_c_1999_, lean_object* v_as_2000_, lean_object* v_as_x27_2001_, lean_object* v_b_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v___x_2005_; 
v___x_2005_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1996_, v_c_1999_, v_as_x27_2001_, v_b_2002_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2006_, lean_object* v_v_2007_, lean_object* v_Flags_2008_, lean_object* v_Model_2009_, lean_object* v_c_2010_, lean_object* v_as_2011_, lean_object* v_as_x27_2012_, lean_object* v_b_2013_, lean_object* v_a_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2006_, v_v_2007_, v_Flags_2008_, v_Model_2009_, v_c_2010_, v_as_2011_, v_as_x27_2012_, v_b_2013_, v_a_2014_);
lean_dec(v_as_x27_2012_);
lean_dec(v_as_2011_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2017_, lean_object* v_Flags_2018_, lean_object* v_Model_2019_, lean_object* v_c_2020_, lean_object* v_as_2021_, lean_object* v_as_x27_2022_, lean_object* v_b_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___x_2026_; 
v___x_2026_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2020_, v_as_x27_2022_, v_b_2023_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2027_, lean_object* v_Flags_2028_, lean_object* v_Model_2029_, lean_object* v_c_2030_, lean_object* v_as_2031_, lean_object* v_as_x27_2032_, lean_object* v_b_2033_, lean_object* v_a_2034_, lean_object* v___y_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2027_, v_Flags_2028_, v_Model_2029_, v_c_2030_, v_as_2031_, v_as_x27_2032_, v_b_2033_, v_a_2034_);
lean_dec(v_as_x27_2032_);
lean_dec(v_as_2031_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2037_, lean_object* v_Msg_2038_, lean_object* v___x_2039_, lean_object* v_Flags_2040_, lean_object* v_c_2041_, lean_object* v_inst_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2039_, v_c_2041_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2046_, lean_object* v_Msg_2047_, lean_object* v___x_2048_, lean_object* v_Flags_2049_, lean_object* v_c_2050_, lean_object* v_inst_2051_, lean_object* v_a_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2046_, v_Msg_2047_, v___x_2048_, v_Flags_2049_, v_c_2050_, v_inst_2051_, v_a_2052_);
lean_dec(v___x_2048_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1(lean_object* v_00_u03b2_2055_, lean_object* v_a_2056_, lean_object* v_fallback_2057_, lean_object* v_x_2058_){
_start:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(v_a_2056_, v_fallback_2057_, v_x_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2060_, lean_object* v_a_2061_, lean_object* v_fallback_2062_, lean_object* v_x_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1(v_00_u03b2_2060_, v_a_2061_, v_fallback_2062_, v_x_2063_);
lean_dec(v_fallback_2062_);
return v_res_2064_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2065_, lean_object* v_a_2066_, lean_object* v_x_2067_){
_start:
{
uint8_t v___x_2068_; 
v___x_2068_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_2066_, v_x_2067_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2069_, lean_object* v_a_2070_, lean_object* v_x_2071_){
_start:
{
uint8_t v_res_2072_; lean_object* v_r_2073_; 
v_res_2072_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(v_00_u03b2_2069_, v_a_2070_, v_x_2071_);
v_r_2073_ = lean_box(v_res_2072_);
return v_r_2073_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2074_, lean_object* v_data_2075_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_data_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5(lean_object* v_00_u03b2_2077_, lean_object* v_a_2078_, lean_object* v_b_2079_, lean_object* v_x_2080_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(v_a_2078_, v_b_2079_, v_x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9(lean_object* v_00_u03b2_2082_, lean_object* v_a_2083_, lean_object* v_x_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(v_a_2083_, v_x_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12(lean_object* v_00_u03b2_2086_, lean_object* v_a_2087_, lean_object* v_x_2088_){
_start:
{
lean_object* v___x_2089_; 
v___x_2089_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12___redArg(v_a_2087_, v_x_2088_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18(lean_object* v_00_u03b2_2090_, lean_object* v_a_2091_, lean_object* v_fallback_2092_, lean_object* v_x_2093_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(v_a_2091_, v_fallback_2092_, v_x_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___boxed(lean_object* v_00_u03b2_2095_, lean_object* v_a_2096_, lean_object* v_fallback_2097_, lean_object* v_x_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18(v_00_u03b2_2095_, v_a_2096_, v_fallback_2097_, v_x_2098_);
lean_dec(v_x_2098_);
lean_dec(v_fallback_2097_);
lean_dec(v_a_2096_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_2100_, lean_object* v_i_2101_, lean_object* v_source_2102_, lean_object* v_target_2103_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7___redArg(v_i_2101_, v_source_2102_, v_target_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20(lean_object* v_00_u03b2_2105_, lean_object* v_x_2106_, lean_object* v_x_2107_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20___redArg(v_x_2106_, v_x_2107_);
return v___x_2108_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2111_ = lean_box(0);
v___x_2112_ = lean_unsigned_to_nat(16u);
v___x_2113_ = lean_mk_array(v___x_2112_, v___x_2111_);
return v___x_2113_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2115_ = lean_unsigned_to_nat(0u);
v___x_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
lean_ctor_set(v___x_2116_, 1, v___x_2114_);
return v___x_2116_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
lean_ctor_set(v___x_2118_, 2, v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2119_){
_start:
{
lean_object* v_app_2121_; lean_object* v_ref_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2233_; 
v_app_2121_ = lean_ctor_get(v_c_2119_, 0);
v_ref_2122_ = lean_ctor_get(v_c_2119_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_c_2119_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2124_ = v_c_2119_;
v_isShared_2125_ = v_isSharedCheck_2233_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_ref_2122_);
lean_inc(v_app_2121_);
lean_dec(v_c_2119_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2233_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v_model_2127_; lean_object* v_live_2128_; lean_object* v_next_2129_; lean_object* v_tables_2130_; uint8_t v_dirty_2131_; uint8_t v_scheduled_2132_; lean_object* v_queue_2133_; uint8_t v_busy_2134_; lean_object* v_subs_2135_; lean_object* v_handlers_2136_; lean_object* v_nextSub_2137_; lean_object* v_touched_2138_; lean_object* v_ports_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2232_; 
v___x_2126_ = lean_st_ref_take(v_ref_2122_);
v_model_2127_ = lean_ctor_get(v___x_2126_, 0);
v_live_2128_ = lean_ctor_get(v___x_2126_, 1);
v_next_2129_ = lean_ctor_get(v___x_2126_, 2);
v_tables_2130_ = lean_ctor_get(v___x_2126_, 3);
v_dirty_2131_ = lean_ctor_get_uint8(v___x_2126_, sizeof(void*)*10);
v_scheduled_2132_ = lean_ctor_get_uint8(v___x_2126_, sizeof(void*)*10 + 1);
v_queue_2133_ = lean_ctor_get(v___x_2126_, 4);
v_busy_2134_ = lean_ctor_get_uint8(v___x_2126_, sizeof(void*)*10 + 2);
v_subs_2135_ = lean_ctor_get(v___x_2126_, 5);
v_handlers_2136_ = lean_ctor_get(v___x_2126_, 6);
v_nextSub_2137_ = lean_ctor_get(v___x_2126_, 7);
v_touched_2138_ = lean_ctor_get(v___x_2126_, 8);
v_ports_2139_ = lean_ctor_get(v___x_2126_, 9);
v_isSharedCheck_2232_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2141_ = v___x_2126_;
v_isShared_2142_ = v_isSharedCheck_2232_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_ports_2139_);
lean_inc(v_touched_2138_);
lean_inc(v_nextSub_2137_);
lean_inc(v_handlers_2136_);
lean_inc(v_subs_2135_);
lean_inc(v_queue_2133_);
lean_inc(v_tables_2130_);
lean_inc(v_next_2129_);
lean_inc(v_live_2128_);
lean_inc(v_model_2127_);
lean_dec(v___x_2126_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2232_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2143_ = lean_box(0);
v___x_2144_ = lean_unsigned_to_nat(0u);
v___x_2145_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2129_);
lean_inc(v_model_2127_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 8, v___x_2145_);
lean_ctor_set(v___x_2141_, 1, v___x_2143_);
v___x_2147_ = v___x_2141_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_model_2127_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2231_, 2, v_next_2129_);
lean_ctor_set(v_reuseFailAlloc_2231_, 3, v_tables_2130_);
lean_ctor_set(v_reuseFailAlloc_2231_, 4, v_queue_2133_);
lean_ctor_set(v_reuseFailAlloc_2231_, 5, v_subs_2135_);
lean_ctor_set(v_reuseFailAlloc_2231_, 6, v_handlers_2136_);
lean_ctor_set(v_reuseFailAlloc_2231_, 7, v_nextSub_2137_);
lean_ctor_set(v_reuseFailAlloc_2231_, 8, v___x_2145_);
lean_ctor_set(v_reuseFailAlloc_2231_, 9, v_ports_2139_);
lean_ctor_set_uint8(v_reuseFailAlloc_2231_, sizeof(void*)*10, v_dirty_2131_);
lean_ctor_set_uint8(v_reuseFailAlloc_2231_, sizeof(void*)*10 + 1, v_scheduled_2132_);
lean_ctor_set_uint8(v_reuseFailAlloc_2231_, sizeof(void*)*10 + 2, v_busy_2134_);
v___x_2147_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_st_ref_put(v_ref_2122_, v___x_2147_);
if (v_dirty_2131_ == 0)
{
lean_object* v___x_2149_; lean_object* v_model_2150_; lean_object* v_next_2151_; lean_object* v_tables_2152_; uint8_t v_dirty_2153_; lean_object* v_queue_2154_; uint8_t v_busy_2155_; lean_object* v_subs_2156_; lean_object* v_handlers_2157_; lean_object* v_nextSub_2158_; lean_object* v_touched_2159_; lean_object* v_ports_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v_touched_2138_);
lean_dec(v_next_2129_);
lean_dec(v_model_2127_);
lean_del_object(v___x_2124_);
lean_dec_ref(v_app_2121_);
v___x_2149_ = lean_st_ref_take(v_ref_2122_);
v_model_2150_ = lean_ctor_get(v___x_2149_, 0);
v_next_2151_ = lean_ctor_get(v___x_2149_, 2);
v_tables_2152_ = lean_ctor_get(v___x_2149_, 3);
v_dirty_2153_ = lean_ctor_get_uint8(v___x_2149_, sizeof(void*)*10);
v_queue_2154_ = lean_ctor_get(v___x_2149_, 4);
v_busy_2155_ = lean_ctor_get_uint8(v___x_2149_, sizeof(void*)*10 + 2);
v_subs_2156_ = lean_ctor_get(v___x_2149_, 5);
v_handlers_2157_ = lean_ctor_get(v___x_2149_, 6);
v_nextSub_2158_ = lean_ctor_get(v___x_2149_, 7);
v_touched_2159_ = lean_ctor_get(v___x_2149_, 8);
v_ports_2160_ = lean_ctor_get(v___x_2149_, 9);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2170_ == 0)
{
lean_object* v_unused_2171_; 
v_unused_2171_ = lean_ctor_get(v___x_2149_, 1);
lean_dec(v_unused_2171_);
v___x_2162_ = v___x_2149_;
v_isShared_2163_ = v_isSharedCheck_2170_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_ports_2160_);
lean_inc(v_touched_2159_);
lean_inc(v_nextSub_2158_);
lean_inc(v_handlers_2157_);
lean_inc(v_subs_2156_);
lean_inc(v_queue_2154_);
lean_inc(v_tables_2152_);
lean_inc(v_next_2151_);
lean_inc(v_model_2150_);
lean_dec(v___x_2149_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2170_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 1, v_live_2128_);
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_model_2150_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_live_2128_);
lean_ctor_set(v_reuseFailAlloc_2169_, 2, v_next_2151_);
lean_ctor_set(v_reuseFailAlloc_2169_, 3, v_tables_2152_);
lean_ctor_set(v_reuseFailAlloc_2169_, 4, v_queue_2154_);
lean_ctor_set(v_reuseFailAlloc_2169_, 5, v_subs_2156_);
lean_ctor_set(v_reuseFailAlloc_2169_, 6, v_handlers_2157_);
lean_ctor_set(v_reuseFailAlloc_2169_, 7, v_nextSub_2158_);
lean_ctor_set(v_reuseFailAlloc_2169_, 8, v_touched_2159_);
lean_ctor_set(v_reuseFailAlloc_2169_, 9, v_ports_2160_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*10, v_dirty_2153_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*10 + 2, v_busy_2155_);
v___x_2165_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
lean_ctor_set_uint8(v___x_2165_, sizeof(void*)*10 + 1, v_dirty_2131_);
v___x_2166_ = lean_st_ref_put(v_ref_2122_, v___x_2165_);
lean_dec(v_ref_2122_);
v___x_2167_ = l_ByteArray_empty;
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
else
{
lean_object* v_view_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
v_view_2172_ = lean_ctor_get(v_app_2121_, 2);
lean_inc_ref(v_view_2172_);
lean_dec_ref(v_app_2121_);
v___x_2173_ = lean_apply_1(v_view_2172_, v_model_2127_);
if (v_isShared_2125_ == 0)
{
lean_ctor_set_tag(v___x_2124_, 1);
lean_ctor_set(v___x_2124_, 1, v___x_2143_);
lean_ctor_set(v___x_2124_, 0, v___x_2173_);
v___x_2175_ = v___x_2124_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v___x_2143_);
v___x_2175_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2176_; lean_object* v_ops_2177_; lean_object* v_live_2178_; lean_object* v_next_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v_model_2183_; lean_object* v_live_2184_; lean_object* v_next_2185_; lean_object* v_tables_2186_; uint8_t v_dirty_2187_; uint8_t v_scheduled_2188_; lean_object* v_queue_2189_; uint8_t v_busy_2190_; lean_object* v_subs_2191_; lean_object* v_handlers_2192_; lean_object* v_nextSub_2193_; lean_object* v_touched_2194_; lean_object* v_ports_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2229_; 
v___x_2176_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2128_, v___x_2175_, v_next_2129_);
v_ops_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc_ref(v_ops_2177_);
v_live_2178_ = lean_ctor_get(v___x_2176_, 1);
lean_inc_n(v_live_2178_, 2);
v_next_2179_ = lean_ctor_get(v___x_2176_, 2);
lean_inc(v_next_2179_);
lean_dec_ref(v___x_2176_);
v___x_2180_ = 0;
v___x_2181_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2178_, v_touched_2138_);
lean_dec_ref(v_touched_2138_);
v___x_2182_ = lean_st_ref_take(v_ref_2122_);
v_model_2183_ = lean_ctor_get(v___x_2182_, 0);
v_live_2184_ = lean_ctor_get(v___x_2182_, 1);
v_next_2185_ = lean_ctor_get(v___x_2182_, 2);
v_tables_2186_ = lean_ctor_get(v___x_2182_, 3);
v_dirty_2187_ = lean_ctor_get_uint8(v___x_2182_, sizeof(void*)*10);
v_scheduled_2188_ = lean_ctor_get_uint8(v___x_2182_, sizeof(void*)*10 + 1);
v_queue_2189_ = lean_ctor_get(v___x_2182_, 4);
v_busy_2190_ = lean_ctor_get_uint8(v___x_2182_, sizeof(void*)*10 + 2);
v_subs_2191_ = lean_ctor_get(v___x_2182_, 5);
v_handlers_2192_ = lean_ctor_get(v___x_2182_, 6);
v_nextSub_2193_ = lean_ctor_get(v___x_2182_, 7);
v_touched_2194_ = lean_ctor_get(v___x_2182_, 8);
v_ports_2195_ = lean_ctor_get(v___x_2182_, 9);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2197_ = v___x_2182_;
v_isShared_2198_ = v_isSharedCheck_2229_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_ports_2195_);
lean_inc(v_touched_2194_);
lean_inc(v_nextSub_2193_);
lean_inc(v_handlers_2192_);
lean_inc(v_subs_2191_);
lean_inc(v_queue_2189_);
lean_inc(v_tables_2186_);
lean_inc(v_next_2185_);
lean_inc(v_live_2184_);
lean_inc(v_model_2183_);
lean_dec(v___x_2182_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2229_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v___x_2201_; 
v___x_2199_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 3, v___x_2199_);
v___x_2201_ = v___x_2197_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_model_2183_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_live_2184_);
lean_ctor_set(v_reuseFailAlloc_2228_, 2, v_next_2185_);
lean_ctor_set(v_reuseFailAlloc_2228_, 3, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2228_, 4, v_queue_2189_);
lean_ctor_set(v_reuseFailAlloc_2228_, 5, v_subs_2191_);
lean_ctor_set(v_reuseFailAlloc_2228_, 6, v_handlers_2192_);
lean_ctor_set(v_reuseFailAlloc_2228_, 7, v_nextSub_2193_);
lean_ctor_set(v_reuseFailAlloc_2228_, 8, v_touched_2194_);
lean_ctor_set(v_reuseFailAlloc_2228_, 9, v_ports_2195_);
lean_ctor_set_uint8(v_reuseFailAlloc_2228_, sizeof(void*)*10, v_dirty_2187_);
lean_ctor_set_uint8(v_reuseFailAlloc_2228_, sizeof(void*)*10 + 1, v_scheduled_2188_);
lean_ctor_set_uint8(v_reuseFailAlloc_2228_, sizeof(void*)*10 + 2, v_busy_2190_);
v___x_2201_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v_fst_2205_; lean_object* v_snd_2206_; lean_object* v___x_2207_; lean_object* v_model_2208_; lean_object* v_queue_2209_; uint8_t v_busy_2210_; lean_object* v_subs_2211_; lean_object* v_handlers_2212_; lean_object* v_nextSub_2213_; lean_object* v_touched_2214_; lean_object* v_ports_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2224_; 
v___x_2202_ = lean_st_ref_put(v_ref_2122_, v___x_2201_);
v___x_2203_ = l_Array_append___redArg(v_ops_2177_, v___x_2181_);
lean_dec_ref(v___x_2181_);
v___x_2204_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2186_, v___x_2203_, v___x_2144_);
lean_dec_ref(v___x_2203_);
v_fst_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_fst_2205_);
v_snd_2206_ = lean_ctor_get(v___x_2204_, 1);
lean_inc(v_snd_2206_);
lean_dec_ref(v___x_2204_);
v___x_2207_ = lean_st_ref_take(v_ref_2122_);
v_model_2208_ = lean_ctor_get(v___x_2207_, 0);
v_queue_2209_ = lean_ctor_get(v___x_2207_, 4);
v_busy_2210_ = lean_ctor_get_uint8(v___x_2207_, sizeof(void*)*10 + 2);
v_subs_2211_ = lean_ctor_get(v___x_2207_, 5);
v_handlers_2212_ = lean_ctor_get(v___x_2207_, 6);
v_nextSub_2213_ = lean_ctor_get(v___x_2207_, 7);
v_touched_2214_ = lean_ctor_get(v___x_2207_, 8);
v_ports_2215_ = lean_ctor_get(v___x_2207_, 9);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2224_ == 0)
{
lean_object* v_unused_2225_; lean_object* v_unused_2226_; lean_object* v_unused_2227_; 
v_unused_2225_ = lean_ctor_get(v___x_2207_, 3);
lean_dec(v_unused_2225_);
v_unused_2226_ = lean_ctor_get(v___x_2207_, 2);
lean_dec(v_unused_2226_);
v_unused_2227_ = lean_ctor_get(v___x_2207_, 1);
lean_dec(v_unused_2227_);
v___x_2217_ = v___x_2207_;
v_isShared_2218_ = v_isSharedCheck_2224_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_ports_2215_);
lean_inc(v_touched_2214_);
lean_inc(v_nextSub_2213_);
lean_inc(v_handlers_2212_);
lean_inc(v_subs_2211_);
lean_inc(v_queue_2209_);
lean_inc(v_model_2208_);
lean_dec(v___x_2207_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2224_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 3, v_snd_2206_);
lean_ctor_set(v___x_2217_, 2, v_next_2179_);
lean_ctor_set(v___x_2217_, 1, v_live_2178_);
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_model_2208_);
lean_ctor_set(v_reuseFailAlloc_2223_, 1, v_live_2178_);
lean_ctor_set(v_reuseFailAlloc_2223_, 2, v_next_2179_);
lean_ctor_set(v_reuseFailAlloc_2223_, 3, v_snd_2206_);
lean_ctor_set(v_reuseFailAlloc_2223_, 4, v_queue_2209_);
lean_ctor_set(v_reuseFailAlloc_2223_, 5, v_subs_2211_);
lean_ctor_set(v_reuseFailAlloc_2223_, 6, v_handlers_2212_);
lean_ctor_set(v_reuseFailAlloc_2223_, 7, v_nextSub_2213_);
lean_ctor_set(v_reuseFailAlloc_2223_, 8, v_touched_2214_);
lean_ctor_set(v_reuseFailAlloc_2223_, 9, v_ports_2215_);
lean_ctor_set_uint8(v_reuseFailAlloc_2223_, sizeof(void*)*10 + 2, v_busy_2210_);
v___x_2220_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*10, v___x_2180_);
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*10 + 1, v___x_2180_);
v___x_2221_ = lean_st_ref_put(v_ref_2122_, v___x_2220_);
lean_dec(v_ref_2122_);
v___x_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2222_, 0, v_fst_2205_);
return v___x_2222_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2234_, lean_object* v_a_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2234_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2237_, lean_object* v_Model_2238_, lean_object* v_Msg_2239_, lean_object* v_c_2240_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2243_, lean_object* v_Model_2244_, lean_object* v_Msg_2245_, lean_object* v_c_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Lasm_UI_Runtime_frame(v_Flags_2243_, v_Model_2244_, v_Msg_2245_, v_c_2246_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2249_, lean_object* v_____r_2250_, lean_object* v_levels_2251_){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2253_ = lean_unsigned_to_nat(2u);
v___x_2254_ = lean_nat_add(v_snd_2249_, v___x_2253_);
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v_levels_2251_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2258_, lean_object* v_____r_2259_, lean_object* v_levels_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2258_, v_____r_2259_, v_levels_2260_);
lean_dec(v_snd_2258_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2263_, lean_object* v_fst_2264_, lean_object* v_x_2265_){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_box(0);
v___x_2268_ = lean_apply_3(v___f_2263_, v___x_2267_, v_fst_2264_, lean_box(0));
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2269_, lean_object* v_fst_2270_, lean_object* v_x_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2269_, v_fst_2270_, v_x_2271_);
lean_dec(v_x_2271_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2274_, lean_object* v_fst_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = lean_box(0);
v___x_2279_ = lean_apply_3(v___f_2274_, v___x_2278_, v_fst_2275_, lean_box(0));
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2280_, lean_object* v_fst_2281_, lean_object* v_x_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2280_, v_fst_2281_, v_x_2282_);
lean_dec_ref(v_x_2282_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2285_, lean_object* v___x_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v___y_2290_; lean_object* v_fst_2310_; lean_object* v_snd_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2362_; 
v_fst_2310_ = lean_ctor_get(v_a_2287_, 0);
v_snd_2311_ = lean_ctor_get(v_a_2287_, 1);
v_isSharedCheck_2362_ = !lean_is_exclusive(v_a_2287_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2313_ = v_a_2287_;
v_isShared_2314_ = v_isSharedCheck_2362_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_snd_2311_);
lean_inc(v_fst_2310_);
lean_dec(v_a_2287_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2362_;
goto v_resetjp_2312_;
}
v___jp_2289_:
{
if (lean_obj_tag(v___y_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2301_; 
v_a_2291_ = lean_ctor_get(v___y_2290_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___y_2290_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2293_ = v___y_2290_;
v_isShared_2294_ = v_isSharedCheck_2301_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___y_2290_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2301_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
if (lean_obj_tag(v_a_2291_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; 
v_a_2295_ = lean_ctor_get(v_a_2291_, 0);
lean_inc(v_a_2295_);
lean_dec_ref_known(v_a_2291_, 1);
if (v_isShared_2294_ == 0)
{
lean_ctor_set(v___x_2293_, 0, v_a_2295_);
v___x_2297_ = v___x_2293_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
else
{
lean_object* v_a_2299_; 
lean_del_object(v___x_2293_);
v_a_2299_ = lean_ctor_get(v_a_2291_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v_a_2291_, 1);
v_a_2287_ = v_a_2299_;
goto _start;
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
v_a_2302_ = lean_ctor_get(v___y_2290_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___y_2290_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___y_2290_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___y_2290_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
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
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
v_resetjp_2312_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2315_ = lean_unsigned_to_nat(1u);
v___x_2316_ = lean_nat_add(v_snd_2311_, v___x_2315_);
v___x_2317_ = lean_array_get_size(v_items_2285_);
v___x_2318_ = lean_nat_dec_lt(v___x_2316_, v___x_2317_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2320_; 
lean_dec(v___x_2316_);
if (v_isShared_2314_ == 0)
{
v___x_2320_ = v___x_2313_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_fst_2310_);
lean_ctor_set(v_reuseFailAlloc_2322_, 1, v_snd_2311_);
v___x_2320_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
lean_object* v___x_2321_; 
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
return v___x_2321_;
}
}
else
{
lean_object* v___x_2323_; lean_object* v___f_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2323_ = lean_box(0);
lean_inc(v_snd_2311_);
v___f_2324_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2324_, 0, v_snd_2311_);
v___x_2325_ = lean_array_get_borrowed(v___x_2323_, v_items_2285_, v_snd_2311_);
v___x_2326_ = lean_array_get(v___x_2323_, v_items_2285_, v___x_2316_);
lean_dec(v___x_2316_);
if (lean_obj_tag(v___x_2325_) == 3)
{
if (lean_obj_tag(v___x_2326_) == 7)
{
double v_n_2327_; lean_object* v_items_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2353_; 
v_n_2327_ = lean_ctor_get_float(v___x_2325_, 0);
v_items_2328_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2330_ = v___x_2326_;
v_isShared_2331_ = v_isSharedCheck_2353_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_items_2328_);
lean_dec(v___x_2326_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2353_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
uint64_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; uint8_t v___x_2335_; 
v___x_2332_ = lean_float_to_uint64(v_n_2327_);
v___x_2333_ = lean_uint64_to_nat(v___x_2332_);
v___x_2334_ = lean_array_get_size(v___x_2286_);
v___x_2335_ = lean_nat_dec_lt(v___x_2333_, v___x_2334_);
if (v___x_2335_ == 0)
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
lean_dec(v___x_2333_);
lean_del_object(v___x_2330_);
lean_dec_ref(v_items_2328_);
lean_del_object(v___x_2313_);
lean_dec(v_snd_2311_);
v___x_2336_ = lean_box(0);
v___x_2337_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2324_, v_fst_2310_, v___x_2336_);
v___y_2290_ = v___x_2337_;
goto v___jp_2289_;
}
else
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_array_fget_borrowed(v___x_2286_, v___x_2333_);
lean_dec(v___x_2333_);
if (lean_obj_tag(v___x_2338_) == 1)
{
lean_object* v_attrs_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2344_; 
lean_del_object(v___x_2330_);
lean_dec_ref(v___f_2324_);
v_attrs_2339_ = lean_ctor_get(v___x_2338_, 3);
v___x_2340_ = lean_array_to_list(v_items_2328_);
v___x_2341_ = lean_box(0);
v___x_2342_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(v___x_2340_, v___x_2341_);
lean_inc(v_attrs_2339_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v___x_2342_);
lean_ctor_set(v___x_2313_, 0, v_attrs_2339_);
v___x_2344_ = v___x_2313_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_attrs_2339_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2345_ = lean_array_push(v_fst_2310_, v___x_2344_);
v___x_2346_ = lean_box(0);
v___x_2347_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2311_, v___x_2346_, v___x_2345_);
lean_dec(v_snd_2311_);
v___y_2290_ = v___x_2347_;
goto v___jp_2289_;
}
}
else
{
lean_object* v___x_2350_; 
lean_dec_ref(v_items_2328_);
lean_del_object(v___x_2313_);
lean_dec(v_snd_2311_);
lean_inc(v___x_2338_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 1);
lean_ctor_set(v___x_2330_, 0, v___x_2338_);
v___x_2350_ = v___x_2330_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2338_);
v___x_2350_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; 
v___x_2351_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2324_, v_fst_2310_, v___x_2350_);
lean_dec_ref(v___x_2350_);
v___y_2290_ = v___x_2351_;
goto v___jp_2289_;
}
}
}
}
}
else
{
lean_object* v___x_2355_; 
lean_dec(v_snd_2311_);
lean_inc_ref(v___x_2325_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v___x_2326_);
lean_ctor_set(v___x_2313_, 0, v___x_2325_);
v___x_2355_ = v___x_2313_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v___x_2326_);
v___x_2355_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
lean_object* v___x_2356_; 
v___x_2356_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2324_, v_fst_2310_, v___x_2355_);
lean_dec_ref(v___x_2355_);
v___y_2290_ = v___x_2356_;
goto v___jp_2289_;
}
}
}
else
{
lean_object* v___x_2359_; 
lean_dec(v_snd_2311_);
lean_inc(v___x_2325_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v___x_2326_);
lean_ctor_set(v___x_2313_, 0, v___x_2325_);
v___x_2359_ = v___x_2313_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v___x_2326_);
v___x_2359_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
lean_object* v___x_2360_; 
v___x_2360_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2324_, v_fst_2310_, v___x_2359_);
lean_dec_ref(v___x_2359_);
v___y_2290_ = v___x_2360_;
goto v___jp_2289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_2363_, lean_object* v___x_2364_, lean_object* v_a_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2363_, v___x_2364_, v_a_2365_);
lean_dec_ref(v___x_2364_);
lean_dec_ref(v_items_2363_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_2368_, lean_object* v_as_2369_, size_t v_sz_2370_, size_t v_i_2371_, lean_object* v_b_2372_){
_start:
{
uint8_t v___x_2374_; 
v___x_2374_ = lean_usize_dec_lt(v_i_2371_, v_sz_2370_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; 
lean_dec_ref(v_c_2368_);
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v_b_2372_);
return v___x_2375_;
}
else
{
lean_object* v___x_2376_; lean_object* v_a_2377_; lean_object* v___x_2378_; 
v___x_2376_ = lean_box(0);
v_a_2377_ = lean_array_uget_borrowed(v_as_2369_, v_i_2371_);
lean_inc(v_a_2377_);
lean_inc_ref(v_c_2368_);
v___x_2378_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2368_, v_a_2377_);
if (lean_obj_tag(v___x_2378_) == 0)
{
size_t v___x_2379_; size_t v___x_2380_; 
lean_dec_ref_known(v___x_2378_, 1);
v___x_2379_ = ((size_t)1ULL);
v___x_2380_ = lean_usize_add(v_i_2371_, v___x_2379_);
v_i_2371_ = v___x_2380_;
v_b_2372_ = v___x_2376_;
goto _start;
}
else
{
lean_dec_ref(v_c_2368_);
return v___x_2378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_2382_, lean_object* v_as_2383_, lean_object* v_sz_2384_, lean_object* v_i_2385_, lean_object* v_b_2386_, lean_object* v___y_2387_){
_start:
{
size_t v_sz_boxed_2388_; size_t v_i_boxed_2389_; lean_object* v_res_2390_; 
v_sz_boxed_2388_ = lean_unbox_usize(v_sz_2384_);
lean_dec(v_sz_2384_);
v_i_boxed_2389_ = lean_unbox_usize(v_i_2385_);
lean_dec(v_i_2385_);
v_res_2390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2382_, v_as_2383_, v_sz_boxed_2388_, v_i_boxed_2389_, v_b_2386_);
lean_dec_ref(v_as_2383_);
return v_res_2390_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2391_ = lean_unsigned_to_nat(0u);
v___x_2392_ = lean_nat_to_int(v___x_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_2401_, size_t v_i_2402_, lean_object* v_bs_2403_){
_start:
{
uint8_t v___x_2404_; 
v___x_2404_ = lean_usize_dec_lt(v_i_2402_, v_sz_2401_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_bs_2403_);
return v___x_2405_;
}
else
{
lean_object* v_v_2406_; lean_object* v___x_2407_; lean_object* v_bs_x27_2408_; lean_object* v_a_2410_; 
v_v_2406_ = lean_array_uget(v_bs_2403_, v_i_2402_);
v___x_2407_ = lean_unsigned_to_nat(0u);
v_bs_x27_2408_ = lean_array_uset(v_bs_2403_, v_i_2402_, v___x_2407_);
switch(lean_obj_tag(v_v_2406_))
{
case 3:
{
double v_n_2419_; lean_object* v___x_2420_; 
v_n_2419_ = lean_ctor_get_float(v_v_2406_, 0);
lean_dec_ref_known(v_v_2406_, 0);
v___x_2420_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2419_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v___x_2421_; 
lean_dec_ref(v_bs_x27_2408_);
v___x_2421_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_2421_;
}
else
{
lean_object* v_val_2422_; 
v_val_2422_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_val_2422_);
lean_dec_ref_known(v___x_2420_, 1);
v_a_2410_ = v_val_2422_;
goto v___jp_2409_;
}
}
case 5:
{
lean_object* v_i_2423_; 
v_i_2423_ = lean_ctor_get(v_v_2406_, 0);
lean_inc(v_i_2423_);
lean_dec_ref_known(v_v_2406_, 1);
v_a_2410_ = v_i_2423_;
goto v___jp_2409_;
}
default: 
{
lean_object* v___x_2424_; 
lean_dec_ref(v_bs_x27_2408_);
lean_dec(v_v_2406_);
v___x_2424_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_2424_;
}
}
v___jp_2409_:
{
lean_object* v___x_2411_; uint8_t v___x_2412_; 
v___x_2411_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_2412_ = lean_int_dec_le(v___x_2411_, v_a_2410_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; 
lean_dec(v_a_2410_);
lean_dec_ref(v_bs_x27_2408_);
v___x_2413_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_2413_;
}
else
{
lean_object* v___x_2414_; size_t v___x_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2414_ = l_Int_toNat(v_a_2410_);
lean_dec(v_a_2410_);
v___x_2415_ = ((size_t)1ULL);
v___x_2416_ = lean_usize_add(v_i_2402_, v___x_2415_);
v___x_2417_ = lean_array_uset(v_bs_x27_2408_, v_i_2402_, v___x_2414_);
v_i_2402_ = v___x_2416_;
v_bs_2403_ = v___x_2417_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_2425_, lean_object* v_i_2426_, lean_object* v_bs_2427_){
_start:
{
size_t v_sz_boxed_2428_; size_t v_i_boxed_2429_; lean_object* v_res_2430_; 
v_sz_boxed_2428_ = lean_unbox_usize(v_sz_2425_);
lean_dec(v_sz_2425_);
v_i_boxed_2429_ = lean_unbox_usize(v_i_2426_);
lean_dec(v_i_2426_);
v_res_2430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_2428_, v_i_boxed_2429_, v_bs_2427_);
return v_res_2430_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0(void){
_start:
{
uint8_t v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = 0;
v___x_2432_ = l_Lasm_UI_Runtime_answer(v___x_2431_, v___x_2431_, v___x_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_2439_, lean_object* v_args_2440_){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; uint8_t v___x_2450_; 
v___x_2448_ = lean_array_get_size(v_args_2440_);
v___x_2449_ = lean_unsigned_to_nat(3u);
v___x_2450_ = lean_nat_dec_eq(v___x_2448_, v___x_2449_);
if (v___x_2450_ == 0)
{
lean_dec_ref(v_c_2439_);
goto v___jp_2442_;
}
else
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = lean_unsigned_to_nat(1u);
v___x_2452_ = lean_array_fget_borrowed(v_args_2440_, v___x_2451_);
if (lean_obj_tag(v___x_2452_) == 4)
{
lean_object* v_s_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_s_2453_ = lean_ctor_get(v___x_2452_, 0);
v___x_2454_ = lean_unsigned_to_nat(2u);
v___x_2455_ = lean_array_fget_borrowed(v_args_2440_, v___x_2454_);
if (lean_obj_tag(v___x_2455_) == 7)
{
lean_object* v_items_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v_items_2456_ = lean_ctor_get(v___x_2455_, 0);
v___x_2457_ = lean_unsigned_to_nat(0u);
v___x_2458_ = lean_array_fget_borrowed(v_args_2440_, v___x_2457_);
if (lean_obj_tag(v___x_2458_) == 7)
{
lean_object* v_items_2459_; size_t v_sz_2460_; size_t v___x_2461_; lean_object* v___x_2462_; 
v_items_2459_ = lean_ctor_get(v___x_2458_, 0);
v_sz_2460_ = lean_array_size(v_items_2459_);
v___x_2461_ = ((size_t)0ULL);
lean_inc_ref(v_items_2459_);
v___x_2462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_2460_, v___x_2461_, v_items_2459_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_dec_ref_known(v___x_2462_, 1);
lean_dec_ref(v_c_2439_);
goto v___jp_2445_;
}
else
{
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_dec_ref_known(v___x_2462_, 1);
lean_dec_ref(v_c_2439_);
goto v___jp_2445_;
}
else
{
lean_object* v_a_2463_; lean_object* v_ref_2464_; lean_object* v___x_2465_; lean_object* v_live_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v_model_2471_; lean_object* v_live_2472_; lean_object* v_next_2473_; lean_object* v_tables_2474_; uint8_t v_dirty_2475_; uint8_t v_scheduled_2476_; lean_object* v_queue_2477_; uint8_t v_busy_2478_; lean_object* v_subs_2479_; lean_object* v_handlers_2480_; lean_object* v_nextSub_2481_; lean_object* v_touched_2482_; lean_object* v_ports_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2532_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_a_2463_);
lean_dec_ref_known(v___x_2462_, 1);
v_ref_2464_ = lean_ctor_get(v_c_2439_, 1);
v___x_2465_ = lean_st_ref_get(v_ref_2464_);
v_live_2466_ = lean_ctor_get(v___x_2465_, 1);
lean_inc(v_live_2466_);
lean_dec(v___x_2465_);
v___x_2467_ = lean_array_to_list(v_a_2463_);
v___x_2468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_2469_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_2466_, v___x_2467_, v___x_2468_);
v___x_2470_ = lean_st_ref_take(v_ref_2464_);
v_model_2471_ = lean_ctor_get(v___x_2470_, 0);
v_live_2472_ = lean_ctor_get(v___x_2470_, 1);
v_next_2473_ = lean_ctor_get(v___x_2470_, 2);
v_tables_2474_ = lean_ctor_get(v___x_2470_, 3);
v_dirty_2475_ = lean_ctor_get_uint8(v___x_2470_, sizeof(void*)*10);
v_scheduled_2476_ = lean_ctor_get_uint8(v___x_2470_, sizeof(void*)*10 + 1);
v_queue_2477_ = lean_ctor_get(v___x_2470_, 4);
v_busy_2478_ = lean_ctor_get_uint8(v___x_2470_, sizeof(void*)*10 + 2);
v_subs_2479_ = lean_ctor_get(v___x_2470_, 5);
v_handlers_2480_ = lean_ctor_get(v___x_2470_, 6);
v_nextSub_2481_ = lean_ctor_get(v___x_2470_, 7);
v_touched_2482_ = lean_ctor_get(v___x_2470_, 8);
v_ports_2483_ = lean_ctor_get(v___x_2470_, 9);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2485_ = v___x_2470_;
v_isShared_2486_ = v_isSharedCheck_2532_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_ports_2483_);
lean_inc(v_touched_2482_);
lean_inc(v_nextSub_2481_);
lean_inc(v_handlers_2480_);
lean_inc(v_subs_2479_);
lean_inc(v_queue_2477_);
lean_inc(v_tables_2474_);
lean_inc(v_next_2473_);
lean_inc(v_live_2472_);
lean_inc(v_model_2471_);
lean_dec(v___x_2470_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2532_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___x_2487_ = lean_array_push(v_touched_2482_, v___x_2467_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 8, v___x_2487_);
v___x_2489_ = v___x_2485_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_model_2471_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v_live_2472_);
lean_ctor_set(v_reuseFailAlloc_2531_, 2, v_next_2473_);
lean_ctor_set(v_reuseFailAlloc_2531_, 3, v_tables_2474_);
lean_ctor_set(v_reuseFailAlloc_2531_, 4, v_queue_2477_);
lean_ctor_set(v_reuseFailAlloc_2531_, 5, v_subs_2479_);
lean_ctor_set(v_reuseFailAlloc_2531_, 6, v_handlers_2480_);
lean_ctor_set(v_reuseFailAlloc_2531_, 7, v_nextSub_2481_);
lean_ctor_set(v_reuseFailAlloc_2531_, 8, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2531_, 9, v_ports_2483_);
lean_ctor_set_uint8(v_reuseFailAlloc_2531_, sizeof(void*)*10, v_dirty_2475_);
lean_ctor_set_uint8(v_reuseFailAlloc_2531_, sizeof(void*)*10 + 1, v_scheduled_2476_);
lean_ctor_set_uint8(v_reuseFailAlloc_2531_, sizeof(void*)*10 + 2, v_busy_2478_);
v___x_2489_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2490_ = lean_st_ref_put(v_ref_2464_, v___x_2489_);
v___x_2491_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_2492_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2456_, v___x_2469_, v___x_2491_);
lean_dec_ref(v___x_2469_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v_fst_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v_msgs_2498_; uint8_t v_preventDefault_2499_; uint8_t v_stopPropagation_2500_; lean_object* v___x_2501_; size_t v_sz_2502_; lean_object* v___x_2503_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2492_, 1);
v_fst_2494_ = lean_ctor_get(v_a_2493_, 0);
lean_inc(v_fst_2494_);
lean_dec(v_a_2493_);
v___x_2495_ = lean_array_to_list(v_fst_2494_);
v___x_2496_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__2));
lean_inc_ref(v_s_2453_);
v___x_2497_ = l_Lasm_UI_Runtime_decide___redArg(v_s_2453_, v___x_2495_, v___x_2496_);
v_msgs_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc_ref(v_msgs_2498_);
v_preventDefault_2499_ = lean_ctor_get_uint8(v___x_2497_, sizeof(void*)*1);
v_stopPropagation_2500_ = lean_ctor_get_uint8(v___x_2497_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_2497_);
v___x_2501_ = lean_box(0);
v_sz_2502_ = lean_array_size(v_msgs_2498_);
lean_inc_ref(v_c_2439_);
v___x_2503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2439_, v_msgs_2498_, v_sz_2502_, v___x_2461_, v___x_2501_);
lean_dec_ref(v_msgs_2498_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v___x_2504_; lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2514_; 
lean_dec_ref_known(v___x_2503_, 1);
v___x_2504_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_2439_);
lean_dec_ref(v_c_2439_);
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2514_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2514_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
uint8_t v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2509_ = lean_unbox(v_a_2505_);
lean_dec(v_a_2505_);
v___x_2510_ = l_Lasm_UI_Runtime_answer(v___x_2509_, v_preventDefault_2499_, v_stopPropagation_2500_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2510_);
v___x_2512_ = v___x_2507_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec_ref(v_c_2439_);
v_a_2515_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2503_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2503_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec_ref(v_c_2439_);
v_a_2523_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2492_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2492_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_c_2439_);
goto v___jp_2445_;
}
}
else
{
lean_dec_ref(v_c_2439_);
goto v___jp_2442_;
}
}
else
{
lean_dec_ref(v_c_2439_);
goto v___jp_2442_;
}
}
v___jp_2442_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
return v___x_2444_;
}
v___jp_2445_:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2446_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2446_);
return v___x_2447_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_2533_, lean_object* v_args_2534_, lean_object* v_a_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2533_, v_args_2534_);
lean_dec_ref(v_args_2534_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_2537_, lean_object* v_Model_2538_, lean_object* v_Msg_2539_, lean_object* v_c_2540_, lean_object* v_args_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2540_, v_args_2541_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_2544_, lean_object* v_Model_2545_, lean_object* v_Msg_2546_, lean_object* v_c_2547_, lean_object* v_args_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_UI_Runtime_onEvent(v_Flags_2544_, v_Model_2545_, v_Msg_2546_, v_c_2547_, v_args_2548_);
lean_dec_ref(v_args_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_2551_, lean_object* v_items_2552_, lean_object* v___x_2553_, lean_object* v_inst_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2552_, v___x_2553_, v_a_2555_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_2558_, lean_object* v_items_2559_, lean_object* v___x_2560_, lean_object* v_inst_2561_, lean_object* v_a_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_2558_, v_items_2559_, v___x_2560_, v_inst_2561_, v_a_2562_);
lean_dec_ref(v___x_2560_);
lean_dec_ref(v_items_2559_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_2565_, lean_object* v_Flags_2566_, lean_object* v_Model_2567_, lean_object* v_c_2568_, lean_object* v_as_2569_, size_t v_sz_2570_, size_t v_i_2571_, lean_object* v_b_2572_){
_start:
{
lean_object* v___x_2574_; 
v___x_2574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2568_, v_as_2569_, v_sz_2570_, v_i_2571_, v_b_2572_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_2575_, lean_object* v_Flags_2576_, lean_object* v_Model_2577_, lean_object* v_c_2578_, lean_object* v_as_2579_, lean_object* v_sz_2580_, lean_object* v_i_2581_, lean_object* v_b_2582_, lean_object* v___y_2583_){
_start:
{
size_t v_sz_boxed_2584_; size_t v_i_boxed_2585_; lean_object* v_res_2586_; 
v_sz_boxed_2584_ = lean_unbox_usize(v_sz_2580_);
lean_dec(v_sz_2580_);
v_i_boxed_2585_ = lean_unbox_usize(v_i_2581_);
lean_dec(v_i_2581_);
v_res_2586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_2575_, v_Flags_2576_, v_Model_2577_, v_c_2578_, v_as_2579_, v_sz_boxed_2584_, v_i_boxed_2585_, v_b_2582_);
lean_dec_ref(v_as_2579_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_2587_, lean_object* v_x_2588_, lean_object* v_x_2589_){
_start:
{
if (lean_obj_tag(v_x_2589_) == 0)
{
lean_dec_ref(v___y_2587_);
return v_x_2588_;
}
else
{
lean_object* v_head_2590_; lean_object* v_tail_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_head_2590_ = lean_ctor_get(v_x_2589_, 0);
lean_inc(v_head_2590_);
v_tail_2591_ = lean_ctor_get(v_x_2589_, 1);
lean_inc(v_tail_2591_);
lean_dec_ref_known(v_x_2589_, 2);
lean_inc_ref(v___y_2587_);
v___x_2592_ = lean_apply_1(v_head_2590_, v___y_2587_);
v___x_2593_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_2588_, v___x_2592_);
v_x_2588_ = v___x_2593_;
v_x_2589_ = v_tail_2591_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_2600_, lean_object* v_args_2601_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2606_ = lean_unsigned_to_nat(0u);
v___x_2607_ = lean_array_get_size(v_args_2601_);
v___x_2608_ = lean_nat_dec_lt(v___x_2606_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_dec_ref(v_c_2600_);
goto v___jp_2603_;
}
else
{
lean_object* v___x_2609_; 
v___x_2609_ = lean_array_fget_borrowed(v_args_2601_, v___x_2606_);
if (lean_obj_tag(v___x_2609_) == 3)
{
double v_n_2610_; lean_object* v___y_2612_; lean_object* v___x_2650_; uint8_t v___x_2651_; 
v_n_2610_ = lean_ctor_get_float(v___x_2609_, 0);
v___x_2650_ = lean_unsigned_to_nat(1u);
v___x_2651_ = lean_nat_dec_lt(v___x_2650_, v___x_2607_);
if (v___x_2651_ == 0)
{
goto v___jp_2648_;
}
else
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_array_fget_borrowed(v_args_2601_, v___x_2650_);
if (lean_obj_tag(v___x_2652_) == 7)
{
lean_object* v_items_2653_; 
v_items_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc_ref(v_items_2653_);
v___y_2612_ = v_items_2653_;
goto v___jp_2611_;
}
else
{
goto v___jp_2648_;
}
}
v___jp_2611_:
{
lean_object* v_ref_2613_; lean_object* v___x_2614_; lean_object* v_handlers_2615_; uint64_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v_msgs_2622_; uint8_t v_preventDefault_2623_; uint8_t v_stopPropagation_2624_; lean_object* v___x_2625_; size_t v_sz_2626_; size_t v___x_2627_; lean_object* v___x_2628_; 
v_ref_2613_ = lean_ctor_get(v_c_2600_, 1);
v___x_2614_ = lean_st_ref_get(v_ref_2613_);
v_handlers_2615_ = lean_ctor_get(v___x_2614_, 6);
lean_inc_ref(v_handlers_2615_);
lean_dec(v___x_2614_);
v___x_2616_ = lean_float_to_uint64(v_n_2610_);
v___x_2617_ = lean_uint64_to_nat(v___x_2616_);
v___x_2618_ = lean_box(0);
v___x_2619_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2615_, v___x_2617_, v___x_2618_);
lean_dec(v___x_2617_);
lean_dec_ref(v_handlers_2615_);
v___x_2620_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__1));
v___x_2621_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_2612_, v___x_2620_, v___x_2619_);
v_msgs_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc_ref(v_msgs_2622_);
v_preventDefault_2623_ = lean_ctor_get_uint8(v___x_2621_, sizeof(void*)*1);
v_stopPropagation_2624_ = lean_ctor_get_uint8(v___x_2621_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_2621_);
v___x_2625_ = lean_box(0);
v_sz_2626_ = lean_array_size(v_msgs_2622_);
v___x_2627_ = ((size_t)0ULL);
lean_inc_ref(v_c_2600_);
v___x_2628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2600_, v_msgs_2622_, v_sz_2626_, v___x_2627_, v___x_2625_);
lean_dec_ref(v_msgs_2622_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v___x_2629_; lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2639_; 
lean_dec_ref_known(v___x_2628_, 1);
v___x_2629_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_2600_);
lean_dec_ref(v_c_2600_);
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2632_ = v___x_2629_;
v_isShared_2633_ = v_isSharedCheck_2639_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v___x_2629_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2639_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
uint8_t v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2637_; 
v___x_2634_ = lean_unbox(v_a_2630_);
lean_dec(v_a_2630_);
v___x_2635_ = l_Lasm_UI_Runtime_answer(v___x_2634_, v_preventDefault_2623_, v_stopPropagation_2624_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 0, v___x_2635_);
v___x_2637_ = v___x_2632_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v___x_2635_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec_ref(v_c_2600_);
v_a_2640_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2628_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2628_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
v___jp_2648_:
{
lean_object* v___x_2649_; 
v___x_2649_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options___closed__3));
v___y_2612_ = v___x_2649_;
goto v___jp_2611_;
}
}
else
{
lean_dec_ref(v_c_2600_);
goto v___jp_2603_;
}
}
v___jp_2603_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_2654_, lean_object* v_args_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_2654_, v_args_2655_);
lean_dec_ref(v_args_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_2658_, lean_object* v_Model_2659_, lean_object* v_Msg_2660_, lean_object* v_c_2661_, lean_object* v_args_2662_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_2661_, v_args_2662_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_2665_, lean_object* v_Model_2666_, lean_object* v_Msg_2667_, lean_object* v_c_2668_, lean_object* v_args_2669_, lean_object* v_a_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Lasm_UI_Runtime_onSub(v_Flags_2665_, v_Model_2666_, v_Msg_2667_, v_c_2668_, v_args_2669_);
lean_dec_ref(v_args_2669_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_2672_, lean_object* v___y_2673_, lean_object* v_x_2674_, lean_object* v_x_2675_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_2673_, v_x_2674_, v_x_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l_Lasm_UI_instHotModel___redArg();
return v_res_2682_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lasm_UI_instHotModel___redArg();
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_2686_, lean_object* v_d_2687_){
_start:
{
lean_object* v_fromJS_2688_; lean_object* v___x_2689_; 
v_fromJS_2688_ = lean_ctor_get(v_inst_2686_, 0);
lean_inc_ref(v_fromJS_2688_);
lean_dec_ref(v_inst_2686_);
v___x_2689_ = lean_apply_1(v_fromJS_2688_, v_d_2687_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v___x_2690_; 
lean_dec_ref_known(v___x_2689_, 1);
v___x_2690_ = lean_box(0);
return v___x_2690_;
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v_a_2691_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2689_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2689_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_2699_, lean_object* v_inst_2700_){
_start:
{
lean_object* v___f_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___f_2701_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2701_, 0, v_inst_2700_);
v___x_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2702_, 0, v_inst_2699_);
v___x_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2703_, 0, v___f_2701_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_2705_, lean_object* v_inst_2706_, lean_object* v_inst_2707_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_2706_, v_inst_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__0(lean_object* v_a_2709_){
_start:
{
lean_object* v___x_2710_; 
v___x_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2710_, 0, v_a_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1(lean_object* v_a_2711_, lean_object* v_x_2712_){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2714_ = lean_box(0);
v___x_2715_ = lean_io_promise_resolve(v___x_2714_, v_a_2711_);
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1___boxed(lean_object* v_a_2718_, lean_object* v_x_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Lasm_UI_afterFrame___lam__1(v_a_2718_, v_x_2719_);
lean_dec_ref(v_x_2719_);
lean_dec(v_a_2718_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2(lean_object* v_a_2722_, lean_object* v___f_2723_, lean_object* v_x_2724_){
_start:
{
if (lean_obj_tag(v_x_2724_) == 0)
{
lean_object* v___x_2726_; 
lean_dec_ref(v___f_2723_);
v___x_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2726_, 0, v_x_2724_);
return v___x_2726_;
}
else
{
lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2737_; 
v_isSharedCheck_2737_ = !lean_is_exclusive(v_x_2724_);
if (v_isSharedCheck_2737_ == 0)
{
lean_object* v_unused_2738_; 
v_unused_2738_ = lean_ctor_get(v_x_2724_, 0);
lean_dec(v_unused_2738_);
v___x_2728_ = v_x_2724_;
v_isShared_2729_ = v_isSharedCheck_2737_;
goto v_resetjp_2727_;
}
else
{
lean_dec(v_x_2724_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2737_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2730_ = l_IO_Promise_result_x21___redArg(v_a_2722_);
v___x_2731_ = lean_unsigned_to_nat(0u);
v___x_2732_ = 0;
v___x_2733_ = lean_task_map(v___f_2723_, v___x_2730_, v___x_2731_, v___x_2732_);
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 0, v___x_2733_);
v___x_2735_ = v___x_2728_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2___boxed(lean_object* v_a_2739_, lean_object* v___f_2740_, lean_object* v_x_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lasm_UI_afterFrame___lam__2(v_a_2739_, v___f_2740_, v_x_2741_);
lean_dec(v_a_2739_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3(lean_object* v___f_2744_, lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2755_; 
lean_dec_ref(v___f_2744_);
v_a_2747_ = lean_ctor_get(v_x_2745_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_x_2745_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2749_ = v_x_2745_;
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v_x_2745_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
return v___x_2753_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2775_; 
v_a_2756_ = lean_ctor_get(v_x_2745_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v_x_2745_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2758_ = v_x_2745_;
v_isShared_2759_ = v_isSharedCheck_2775_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v_x_2745_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2775_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2760_; uint8_t v___x_2761_; lean_object* v_val_2763_; lean_object* v___x_2766_; 
v___x_2760_ = lean_unsigned_to_nat(0u);
v___x_2761_ = 0;
v___x_2766_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_afterFrame(v_a_2756_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2769_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
lean_dec_ref_known(v___x_2766_, 1);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v_a_2767_);
v___x_2769_ = v___x_2758_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2767_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
v_val_2763_ = v___x_2769_;
goto v___jp_2762_;
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; 
v_a_2771_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2766_, 1);
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
lean_ctor_set(v___x_2758_, 0, v_a_2771_);
v___x_2773_ = v___x_2758_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_a_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
v_val_2763_ = v___x_2773_;
goto v___jp_2762_;
}
}
v___jp_2762_:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2764_, 0, v_val_2763_);
v___x_2765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2760_, v___x_2761_, v___x_2764_, v___f_2744_);
return v___x_2765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3___boxed(lean_object* v___f_2776_, lean_object* v_x_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lasm_UI_afterFrame___lam__3(v___f_2776_, v_x_2777_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4(lean_object* v___f_2780_, lean_object* v_x_2781_){
_start:
{
if (lean_obj_tag(v_x_2781_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2791_; 
lean_dec_ref(v___f_2780_);
v_a_2783_ = lean_ctor_get(v_x_2781_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_x_2781_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2785_ = v_x_2781_;
v_isShared_2786_ = v_isSharedCheck_2791_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v_x_2781_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2791_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2788_);
return v___x_2789_;
}
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2814_; 
v_a_2792_ = lean_ctor_get(v_x_2781_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v_x_2781_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2794_ = v_x_2781_;
v_isShared_2795_ = v_isSharedCheck_2814_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v_x_2781_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2814_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___f_2796_; lean_object* v___f_2797_; lean_object* v___f_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v_val_2802_; lean_object* v___x_2805_; 
lean_inc(v_a_2792_);
v___f_2796_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2796_, 0, v_a_2792_);
v___f_2797_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2797_, 0, v_a_2792_);
lean_closure_set(v___f_2797_, 1, v___f_2780_);
v___f_2798_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2798_, 0, v___f_2797_);
v___x_2799_ = lean_unsigned_to_nat(0u);
v___x_2800_ = 0;
v___x_2805_ = l_Lasm_JS_Function_ofSyncFn(v___f_2796_, v___x_2799_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2808_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v_a_2806_);
v___x_2808_ = v___x_2794_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
v_val_2802_ = v___x_2808_;
goto v___jp_2801_;
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; 
v_a_2810_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2810_);
lean_dec_ref_known(v___x_2805_, 1);
if (v_isShared_2795_ == 0)
{
lean_ctor_set_tag(v___x_2794_, 0);
lean_ctor_set(v___x_2794_, 0, v_a_2810_);
v___x_2812_ = v___x_2794_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2810_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
v_val_2802_ = v___x_2812_;
goto v___jp_2801_;
}
}
v___jp_2801_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2803_, 0, v_val_2802_);
v___x_2804_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2799_, v___x_2800_, v___x_2803_, v___f_2798_);
return v___x_2804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4___boxed(lean_object* v___f_2815_, lean_object* v_x_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = l_Lasm_UI_afterFrame___lam__4(v___f_2815_, v_x_2816_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame(){
_start:
{
lean_object* v___f_2823_; lean_object* v___x_2824_; uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___f_2823_ = ((lean_object*)(l_Lasm_UI_afterFrame___closed__1));
v___x_2824_ = lean_unsigned_to_nat(0u);
v___x_2825_ = 0;
v___x_2826_ = lean_io_promise_new();
v___x_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
v___x_2829_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2824_, v___x_2825_, v___x_2828_, v___f_2823_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___boxed(lean_object* v_a_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lasm_UI_afterFrame();
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_2832_, lean_object* v_x_2833_){
_start:
{
lean_object* v___x_2835_; lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2844_; 
v___x_2835_ = l_Lasm_UI_Runtime_frame___redArg(v___x_2832_);
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2844_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2844_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2840_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2840_, 0, v_a_2836_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2840_);
v___x_2842_ = v___x_2838_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_2845_, lean_object* v_x_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_2845_, v_x_2846_);
lean_dec_ref(v_x_2846_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v___x_2849_, lean_object* v___x_2850_, lean_object* v_a_2851_, lean_object* v_x_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v___y_2856_; lean_object* v___x_2874_; 
v___x_2874_ = l_Lasm_UI_Runtime_perform___redArg(v___x_2850_, v_a_2851_);
if (lean_obj_tag(v___x_2874_) == 0)
{
v___y_2856_ = v___x_2874_;
goto v___jp_2855_;
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_a_2875_);
lean_dec_ref_known(v___x_2874_, 1);
v___x_2876_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_2877_ = l_Lasm_UI_Runtime_report(v___x_2876_, v_a_2875_);
v___y_2856_ = v___x_2877_;
goto v___jp_2855_;
}
v___jp_2855_:
{
if (lean_obj_tag(v___y_2856_) == 0)
{
lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2864_; 
v_isSharedCheck_2864_ = !lean_is_exclusive(v___y_2856_);
if (v_isSharedCheck_2864_ == 0)
{
lean_object* v_unused_2865_; 
v_unused_2865_ = lean_ctor_get(v___y_2856_, 0);
lean_dec(v_unused_2865_);
v___x_2858_ = v___y_2856_;
v_isShared_2859_ = v_isSharedCheck_2864_;
goto v_resetjp_2857_;
}
else
{
lean_dec(v___y_2856_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2864_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; lean_object* v___x_2862_; 
v___x_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2849_);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v___x_2860_);
v___x_2862_ = v___x_2858_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2860_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
v_a_2866_ = lean_ctor_get(v___y_2856_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___y_2856_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___y_2856_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___y_2856_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v___x_2878_, lean_object* v___x_2879_, lean_object* v_a_2880_, lean_object* v_x_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lasm_UI_App_run___redArg___lam__1(v___x_2878_, v___x_2879_, v_a_2880_, v_x_2881_, v___y_2882_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v_app_2885_, lean_object* v___x_2886_, lean_object* v___x_2887_, lean_object* v_args_2888_){
_start:
{
lean_object* v_onUrlChange_2902_; lean_object* v___y_2904_; lean_object* v___x_2920_; uint8_t v___x_2921_; 
v_onUrlChange_2902_ = lean_ctor_get(v_app_2885_, 4);
lean_inc(v_onUrlChange_2902_);
lean_dec_ref(v_app_2885_);
v___x_2920_ = lean_array_get_size(v_args_2888_);
v___x_2921_ = lean_nat_dec_lt(v___x_2887_, v___x_2920_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; 
v___x_2922_ = lean_box(0);
v___y_2904_ = v___x_2922_;
goto v___jp_2903_;
}
else
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2923_ = lean_array_fget_borrowed(v_args_2888_, v___x_2887_);
lean_inc(v___x_2923_);
v___x_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2923_);
v___y_2904_ = v___x_2924_;
goto v___jp_2903_;
}
v___jp_2890_:
{
lean_object* v___x_2891_; lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2901_; 
v___x_2891_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_2886_);
lean_dec_ref(v___x_2886_);
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2894_ = v___x_2891_;
v_isShared_2895_ = v_isSharedCheck_2901_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2891_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2901_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2896_; uint8_t v___x_2897_; lean_object* v___x_2899_; 
v___x_2896_ = lean_alloc_ctor(2, 0, 1);
v___x_2897_ = lean_unbox(v_a_2892_);
lean_dec(v_a_2892_);
lean_ctor_set_uint8(v___x_2896_, 0, v___x_2897_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2896_);
v___x_2899_ = v___x_2894_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2896_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
v___jp_2903_:
{
if (lean_obj_tag(v_onUrlChange_2902_) == 1)
{
if (lean_obj_tag(v___y_2904_) == 1)
{
lean_object* v_val_2905_; 
v_val_2905_ = lean_ctor_get(v___y_2904_, 0);
lean_inc(v_val_2905_);
lean_dec_ref_known(v___y_2904_, 1);
if (lean_obj_tag(v_val_2905_) == 4)
{
lean_object* v_val_2906_; lean_object* v_s_2907_; lean_object* v___x_2908_; 
v_val_2906_ = lean_ctor_get(v_onUrlChange_2902_, 0);
lean_inc(v_val_2906_);
lean_dec_ref_known(v_onUrlChange_2902_, 1);
v_s_2907_ = lean_ctor_get(v_val_2905_, 0);
lean_inc_ref(v_s_2907_);
lean_dec_ref_known(v_val_2905_, 1);
v___x_2908_ = l_Lasm_UI_Url_parse(v_s_2907_);
if (lean_obj_tag(v___x_2908_) == 1)
{
lean_object* v_val_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_val_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_val_2909_);
lean_dec_ref_known(v___x_2908_, 1);
v___x_2910_ = lean_apply_1(v_val_2906_, v_val_2909_);
lean_inc_ref(v___x_2886_);
v___x_2911_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_2886_, v___x_2910_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_dec_ref_known(v___x_2911_, 1);
goto v___jp_2890_;
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref(v___x_2886_);
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_dec(v___x_2908_);
lean_dec(v_val_2906_);
goto v___jp_2890_;
}
}
else
{
lean_dec(v_val_2905_);
lean_dec_ref_known(v_onUrlChange_2902_, 1);
goto v___jp_2890_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_2902_, 1);
lean_dec(v___y_2904_);
goto v___jp_2890_;
}
}
else
{
lean_dec(v___y_2904_);
lean_dec(v_onUrlChange_2902_);
goto v___jp_2890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v_app_2925_, lean_object* v___x_2926_, lean_object* v___x_2927_, lean_object* v_args_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Lasm_UI_App_run___redArg___lam__2(v_app_2925_, v___x_2926_, v___x_2927_, v_args_2928_);
lean_dec_ref(v_args_2928_);
lean_dec(v___x_2927_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_2931_, lean_object* v___x_2932_, lean_object* v_d_2933_){
_start:
{
lean_object* v___x_2935_; 
v___x_2935_ = lean_apply_1(v_val_2931_, v_d_2933_);
if (lean_obj_tag(v___x_2935_) == 1)
{
lean_object* v_val_2936_; lean_object* v___x_2937_; 
v_val_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_val_2936_);
lean_dec_ref_known(v___x_2935_, 1);
lean_inc_ref(v___x_2932_);
v___x_2937_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_2932_, v_val_2936_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v___x_2938_; 
lean_dec_ref_known(v___x_2937_, 1);
v___x_2938_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_2932_);
lean_dec_ref(v___x_2932_);
return v___x_2938_;
}
else
{
lean_dec_ref(v___x_2932_);
return v___x_2937_;
}
}
else
{
lean_object* v___x_2939_; 
lean_dec(v___x_2935_);
v___x_2939_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_2932_);
lean_dec_ref(v___x_2932_);
return v___x_2939_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_2940_, lean_object* v___x_2941_, lean_object* v_d_2942_, lean_object* v___y_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_2940_, v___x_2941_, v_d_2942_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_2945_){
_start:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2947_ = lean_st_ref_get(v_val_2945_);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_2949_, lean_object* v___y_2950_){
_start:
{
lean_object* v_res_2951_; 
v_res_2951_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_2949_);
lean_dec(v_val_2949_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_2952_, lean_object* v_____do__lift_2953_){
_start:
{
lean_object* v_model_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_model_2955_ = lean_ctor_get(v_____do__lift_2953_, 0);
lean_inc(v_model_2955_);
lean_dec_ref(v_____do__lift_2953_);
v___x_2956_ = lean_apply_1(v_val_2952_, v_model_2955_);
v___x_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_2958_, lean_object* v_____do__lift_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_2958_, v_____do__lift_2959_);
return v_res_2961_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l_instMonadEIO___redArg();
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_2975_, lean_object* v_hot_2976_, lean_object* v_app_2977_){
_start:
{
lean_object* v___x_2979_; lean_object* v___y_2981_; lean_object* v___y_2982_; uint8_t v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; uint8_t v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; uint8_t v___y_2994_; lean_object* v___x_3084_; 
v___x_2979_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3084_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3084_, 1);
v___x_3086_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3087_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3088_ = l_Lasm_JS_Data_field(v_a_3085_, v___x_3087_);
v___x_3089_ = l_Lasm_JS_decodeAs___redArg(v_inst_2975_, v___x_3086_, v___x_3088_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; uint8_t v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; uint8_t v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; uint8_t v___y_3124_; uint8_t v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v_fst_3177_; lean_object* v_snd_3178_; lean_object* v___y_3206_; lean_object* v___y_3212_; lean_object* v___x_3230_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3230_ = l_Lasm_JS_Data_field(v_a_3085_, v___x_3091_);
lean_dec(v_a_3085_);
if (lean_obj_tag(v___x_3230_) == 4)
{
lean_object* v_s_3231_; lean_object* v___x_3232_; 
v_s_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc_ref(v_s_3231_);
lean_dec_ref_known(v___x_3230_, 1);
v___x_3232_ = l_Lasm_UI_Url_parse(v_s_3231_);
if (lean_obj_tag(v___x_3232_) == 0)
{
goto v___jp_3228_;
}
else
{
lean_object* v_val_3233_; 
v_val_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_val_3233_);
lean_dec_ref_known(v___x_3232_, 1);
v___y_3212_ = v_val_3233_;
goto v___jp_3211_;
}
}
else
{
lean_dec(v___x_3230_);
goto v___jp_3228_;
}
v___jp_3092_:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v_onUrlChange_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3105_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___y_3102_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v_onUrlChange_3107_ = lean_ctor_get(v_app_2977_, 4);
lean_inc(v_onUrlChange_3107_);
lean_dec_ref(v_app_2977_);
v___x_3108_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3108_, 0, v___y_3099_);
lean_ctor_set(v___x_3108_, 1, v___x_3105_);
v___x_3109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___y_3094_);
lean_ctor_set(v___x_3109_, 1, v___x_3105_);
v___x_3110_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
lean_ctor_set(v___x_3111_, 1, v___x_3106_);
v___x_3112_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
lean_ctor_set(v___x_3113_, 1, v___x_3108_);
v___x_3114_ = ((lean_object*)(l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
lean_ctor_set(v___x_3115_, 1, v___x_3109_);
v___x_3116_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___y_3097_);
lean_ctor_set(v___x_3116_, 1, v___x_3105_);
v___x_3117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3091_);
lean_ctor_set(v___x_3117_, 1, v___x_3116_);
v___x_3118_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3107_) == 0)
{
v___y_2981_ = v___y_3093_;
v___y_2982_ = v___y_3095_;
v___y_2983_ = v___y_3096_;
v___y_2984_ = v___x_3117_;
v___y_2985_ = v___x_3115_;
v___y_2986_ = v___x_3111_;
v___y_2987_ = v___y_3100_;
v___y_2988_ = v___y_3104_;
v___y_2989_ = v___y_3098_;
v___y_2990_ = v___x_3118_;
v___y_2991_ = v___y_3101_;
v___y_2992_ = v___x_3113_;
v___y_2993_ = v___y_3103_;
v___y_2994_ = v___y_3100_;
goto v___jp_2980_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3107_, 1);
v___y_2981_ = v___y_3093_;
v___y_2982_ = v___y_3095_;
v___y_2983_ = v___y_3096_;
v___y_2984_ = v___x_3117_;
v___y_2985_ = v___x_3115_;
v___y_2986_ = v___x_3111_;
v___y_2987_ = v___y_3100_;
v___y_2988_ = v___y_3104_;
v___y_2989_ = v___y_3098_;
v___y_2990_ = v___x_3118_;
v___y_2991_ = v___y_3101_;
v___y_2992_ = v___x_3113_;
v___y_2993_ = v___y_3103_;
v___y_2994_ = v___y_3096_;
goto v___jp_2980_;
}
}
v___jp_3119_:
{
lean_object* v___x_3129_; 
v___x_3129_ = l_Lasm_JS_Function_ofSyncFn(v___y_3122_, v___y_3128_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_a_3130_);
lean_dec_ref_known(v___x_3129_, 1);
lean_inc_ref(v___y_3120_);
v___x_3131_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3131_, 0, lean_box(0));
lean_closure_set(v___x_3131_, 1, lean_box(0));
lean_closure_set(v___x_3131_, 2, lean_box(0));
lean_closure_set(v___x_3131_, 3, v___y_3120_);
v___x_3132_ = l_Lasm_JS_Function_ofSyncFn(v___x_3131_, v___y_3128_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v_a_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3132_, 1);
lean_inc_ref(v___y_3120_);
v___x_3134_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3134_, 0, lean_box(0));
lean_closure_set(v___x_3134_, 1, lean_box(0));
lean_closure_set(v___x_3134_, 2, lean_box(0));
lean_closure_set(v___x_3134_, 3, v___y_3120_);
v___x_3135_ = l_Lasm_JS_Function_ofSyncFn(v___x_3134_, v___y_3128_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3137_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v___x_3137_ = l_Lasm_JS_Function_ofSyncFn(v___y_3121_, v___y_3128_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_receive_3138_; 
v_receive_3138_ = lean_ctor_get(v_app_2977_, 5);
if (lean_obj_tag(v_receive_3138_) == 1)
{
lean_object* v_a_3139_; lean_object* v_val_3140_; lean_object* v___f_3141_; lean_object* v___x_3142_; 
v_a_3139_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3139_);
lean_dec_ref_known(v___x_3137_, 1);
v_val_3140_ = lean_ctor_get(v_receive_3138_, 0);
lean_inc_ref(v___y_3120_);
lean_inc(v_val_3140_);
v___f_3141_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3141_, 0, v_val_3140_);
lean_closure_set(v___f_3141_, 1, v___y_3120_);
v___x_3142_ = l_Lasm_UI_Mount_onMessage(v___f_3141_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_dec_ref_known(v___x_3142_, 1);
lean_inc_ref(v___y_3120_);
v___y_3093_ = v___y_3120_;
v___y_3094_ = v_a_3136_;
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___y_3124_;
v___y_3097_ = v_a_3139_;
v___y_3098_ = v___y_3120_;
v___y_3099_ = v_a_3133_;
v___y_3100_ = v___y_3125_;
v___y_3101_ = v___y_3126_;
v___y_3102_ = v_a_3130_;
v___y_3103_ = v___y_3127_;
v___y_3104_ = v___y_3128_;
goto v___jp_3092_;
}
else
{
lean_dec(v_a_3139_);
lean_dec(v_a_3136_);
lean_dec(v_a_3133_);
lean_dec(v_a_3130_);
lean_dec(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2977_);
return v___x_3142_;
}
}
else
{
lean_object* v_a_3143_; 
v_a_3143_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v___x_3137_, 1);
lean_inc_ref(v___y_3120_);
v___y_3093_ = v___y_3120_;
v___y_3094_ = v_a_3136_;
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___y_3124_;
v___y_3097_ = v_a_3143_;
v___y_3098_ = v___y_3120_;
v___y_3099_ = v_a_3133_;
v___y_3100_ = v___y_3125_;
v___y_3101_ = v___y_3126_;
v___y_3102_ = v_a_3130_;
v___y_3103_ = v___y_3127_;
v___y_3104_ = v___y_3128_;
goto v___jp_3092_;
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec(v_a_3136_);
lean_dec(v_a_3133_);
lean_dec(v_a_3130_);
lean_dec(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2977_);
v_a_3144_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3137_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3137_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec(v_a_3133_);
lean_dec(v_a_3130_);
lean_dec(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2977_);
v_a_3152_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3135_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3135_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
else
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3167_; 
lean_dec(v_a_3130_);
lean_dec(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2977_);
v_a_3160_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3162_ = v___x_3132_;
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3132_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
else
{
lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3175_; 
lean_dec(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2977_);
v_a_3168_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3170_ = v___x_3129_;
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___x_3129_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3173_; 
if (v_isShared_3171_ == 0)
{
v___x_3173_ = v___x_3170_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_3168_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
}
}
v___jp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; uint8_t v___x_3184_; uint8_t v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v_save_x3f_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3203_; 
v___x_3179_ = lean_box(0);
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_unsigned_to_nat(0u);
v___x_3182_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3183_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3184_ = 1;
v___x_3185_ = 0;
v___x_3186_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__0));
v___x_3187_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3187_, 0, v_fst_3177_);
lean_ctor_set(v___x_3187_, 1, v___x_3179_);
lean_ctor_set(v___x_3187_, 2, v___x_3180_);
lean_ctor_set(v___x_3187_, 3, v___x_3183_);
lean_ctor_set(v___x_3187_, 4, v___x_3186_);
lean_ctor_set(v___x_3187_, 5, v___x_3182_);
lean_ctor_set(v___x_3187_, 6, v___x_3182_);
lean_ctor_set(v___x_3187_, 7, v___x_3180_);
lean_ctor_set(v___x_3187_, 8, v___x_3186_);
lean_ctor_set(v___x_3187_, 9, v___x_3179_);
lean_ctor_set_uint8(v___x_3187_, sizeof(void*)*10, v___x_3184_);
lean_ctor_set_uint8(v___x_3187_, sizeof(void*)*10 + 1, v___x_3185_);
lean_ctor_set_uint8(v___x_3187_, sizeof(void*)*10 + 2, v___x_3185_);
v___x_3188_ = lean_st_mk_ref(v___x_3187_);
v_save_x3f_3189_ = lean_ctor_get(v_hot_2976_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_hot_2976_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; 
v_unused_3204_ = lean_ctor_get(v_hot_2976_, 1);
lean_dec(v_unused_3204_);
v___x_3191_ = v_hot_2976_;
v_isShared_3192_ = v_isSharedCheck_3203_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_save_x3f_3189_);
lean_dec(v_hot_2976_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3203_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
lean_inc(v___x_3188_);
lean_inc_ref(v_app_2977_);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 1, v___x_3188_);
lean_ctor_set(v___x_3191_, 0, v_app_2977_);
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_app_2977_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v___x_3188_);
v___x_3194_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___f_3195_; lean_object* v___f_3196_; 
lean_inc_ref_n(v___x_3194_, 2);
v___f_3195_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3195_, 0, v___x_3194_);
lean_inc_ref(v_app_2977_);
v___f_3196_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3196_, 0, v_app_2977_);
lean_closure_set(v___f_3196_, 1, v___x_3194_);
lean_closure_set(v___f_3196_, 2, v___x_3181_);
if (lean_obj_tag(v_save_x3f_3189_) == 1)
{
lean_object* v_val_3197_; lean_object* v___f_3198_; lean_object* v___f_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_val_3197_ = lean_ctor_get(v_save_x3f_3189_, 0);
lean_inc(v_val_3197_);
lean_dec_ref_known(v_save_x3f_3189_, 1);
lean_inc(v___x_3188_);
v___f_3198_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3198_, 0, v___x_3188_);
v___f_3199_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3199_, 0, v_val_3197_);
v___x_3200_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3200_, 0, lean_box(0));
lean_closure_set(v___x_3200_, 1, lean_box(0));
lean_closure_set(v___x_3200_, 2, lean_box(0));
lean_closure_set(v___x_3200_, 3, v___f_3198_);
lean_closure_set(v___x_3200_, 4, v___f_3199_);
v___x_3201_ = l_Lasm_UI_Mount_onHotSave(v___x_3200_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_dec_ref_known(v___x_3201_, 1);
v___y_3120_ = v___x_3194_;
v___y_3121_ = v___f_3196_;
v___y_3122_ = v___f_3195_;
v___y_3123_ = v___x_3180_;
v___y_3124_ = v___x_3184_;
v___y_3125_ = v___x_3185_;
v___y_3126_ = v_snd_3178_;
v___y_3127_ = v___x_3188_;
v___y_3128_ = v___x_3181_;
goto v___jp_3119_;
}
else
{
lean_dec_ref(v___f_3196_);
lean_dec_ref(v___f_3195_);
lean_dec_ref(v___x_3194_);
lean_dec(v___x_3188_);
lean_dec(v_snd_3178_);
lean_dec_ref(v_app_2977_);
return v___x_3201_;
}
}
else
{
lean_dec(v_save_x3f_3189_);
v___y_3120_ = v___x_3194_;
v___y_3121_ = v___f_3196_;
v___y_3122_ = v___f_3195_;
v___y_3123_ = v___x_3180_;
v___y_3124_ = v___x_3184_;
v___y_3125_ = v___x_3185_;
v___y_3126_ = v_snd_3178_;
v___y_3127_ = v___x_3188_;
v___y_3128_ = v___x_3181_;
goto v___jp_3119_;
}
}
}
}
v___jp_3205_:
{
lean_object* v_init_3207_; lean_object* v___x_3208_; lean_object* v_fst_3209_; lean_object* v_snd_3210_; 
v_init_3207_ = lean_ctor_get(v_app_2977_, 0);
lean_inc_ref(v_init_3207_);
v___x_3208_ = lean_apply_2(v_init_3207_, v_a_3090_, v___y_3206_);
v_fst_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_fst_3209_);
v_snd_3210_ = lean_ctor_get(v___x_3208_, 1);
lean_inc(v_snd_3210_);
lean_dec_ref(v___x_3208_);
v_fst_3177_ = v_fst_3209_;
v_snd_3178_ = v_snd_3210_;
goto v___jp_3176_;
}
v___jp_3211_:
{
lean_object* v_load_x3f_3213_; 
v_load_x3f_3213_ = lean_ctor_get(v_hot_2976_, 1);
if (lean_obj_tag(v_load_x3f_3213_) == 0)
{
v___y_3206_ = v___y_3212_;
goto v___jp_3205_;
}
else
{
lean_object* v_val_3214_; lean_object* v___x_3215_; 
v_val_3214_ = lean_ctor_get(v_load_x3f_3213_, 0);
v___x_3215_ = l_Lasm_UI_Mount_Raw_hotState();
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
if (lean_obj_tag(v_a_3216_) == 0)
{
v___y_3206_ = v___y_3212_;
goto v___jp_3205_;
}
else
{
lean_object* v___x_3217_; 
lean_inc(v_val_3214_);
v___x_3217_ = lean_apply_1(v_val_3214_, v_a_3216_);
if (lean_obj_tag(v___x_3217_) == 0)
{
v___y_3206_ = v___y_3212_;
goto v___jp_3205_;
}
else
{
lean_object* v_val_3218_; lean_object* v___x_3219_; 
lean_dec_ref(v___y_3212_);
lean_dec(v_a_3090_);
v_val_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_val_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3219_ = lean_box(0);
v_fst_3177_ = v_val_3218_;
v_snd_3178_ = v___x_3219_;
goto v___jp_3176_;
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec_ref(v___y_3212_);
lean_dec(v_a_3090_);
lean_dec_ref(v_app_2977_);
lean_dec_ref(v_hot_2976_);
v_a_3220_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3215_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3215_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
}
v___jp_3228_:
{
lean_object* v___x_3229_; 
v___x_3229_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__8));
v___y_3212_ = v___x_3229_;
goto v___jp_3211_;
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec(v_a_3085_);
lean_dec_ref(v_app_2977_);
lean_dec_ref(v_hot_2976_);
v_a_3234_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3089_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3089_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3249_; 
lean_dec_ref(v_app_2977_);
lean_dec_ref(v_hot_2976_);
lean_dec_ref(v_inst_2975_);
v_a_3242_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3244_ = v___x_3084_;
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3084_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3242_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
v___jp_2980_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_2995_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2995_, 0, v___y_2994_);
lean_inc_ref(v___y_2990_);
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___y_2990_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = lean_box(0);
v___x_2998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2996_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___y_2984_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___y_2985_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___y_2992_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___y_2986_);
lean_ctor_set(v___x_3002_, 1, v___x_3001_);
v___x_3003_ = l_Lasm_JS_obj(v___x_3002_);
v___x_3004_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_connect(v___x_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v___x_3005_; lean_object* v_a_3006_; lean_object* v___x_3007_; 
lean_dec_ref_known(v___x_3004_, 1);
lean_inc_ref(v___y_2989_);
v___x_3005_ = l_Lasm_UI_Runtime_frame___redArg(v___y_2989_);
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
lean_dec_ref(v___x_3005_);
v___x_3007_ = l___private_Lasm_UI_App_0__Lasm_UI_Runtime_Dom_apply(v_a_3006_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v___x_3008_; lean_object* v_model_3009_; lean_object* v_live_3010_; lean_object* v_next_3011_; lean_object* v_tables_3012_; uint8_t v_dirty_3013_; uint8_t v_scheduled_3014_; lean_object* v_queue_3015_; lean_object* v_subs_3016_; lean_object* v_handlers_3017_; lean_object* v_nextSub_3018_; lean_object* v_touched_3019_; lean_object* v_ports_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3083_; 
lean_dec_ref_known(v___x_3007_, 1);
v___x_3008_ = lean_st_ref_take(v___y_2993_);
v_model_3009_ = lean_ctor_get(v___x_3008_, 0);
v_live_3010_ = lean_ctor_get(v___x_3008_, 1);
v_next_3011_ = lean_ctor_get(v___x_3008_, 2);
v_tables_3012_ = lean_ctor_get(v___x_3008_, 3);
v_dirty_3013_ = lean_ctor_get_uint8(v___x_3008_, sizeof(void*)*10);
v_scheduled_3014_ = lean_ctor_get_uint8(v___x_3008_, sizeof(void*)*10 + 1);
v_queue_3015_ = lean_ctor_get(v___x_3008_, 4);
v_subs_3016_ = lean_ctor_get(v___x_3008_, 5);
v_handlers_3017_ = lean_ctor_get(v___x_3008_, 6);
v_nextSub_3018_ = lean_ctor_get(v___x_3008_, 7);
v_touched_3019_ = lean_ctor_get(v___x_3008_, 8);
v_ports_3020_ = lean_ctor_get(v___x_3008_, 9);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3022_ = v___x_3008_;
v_isShared_3023_ = v_isSharedCheck_3083_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_ports_3020_);
lean_inc(v_touched_3019_);
lean_inc(v_nextSub_3018_);
lean_inc(v_handlers_3017_);
lean_inc(v_subs_3016_);
lean_inc(v_queue_3015_);
lean_inc(v_tables_3012_);
lean_inc(v_next_3011_);
lean_inc(v_live_3010_);
lean_inc(v_model_3009_);
lean_dec(v___x_3008_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3083_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_model_3009_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_live_3010_);
lean_ctor_set(v_reuseFailAlloc_3082_, 2, v_next_3011_);
lean_ctor_set(v_reuseFailAlloc_3082_, 3, v_tables_3012_);
lean_ctor_set(v_reuseFailAlloc_3082_, 4, v_queue_3015_);
lean_ctor_set(v_reuseFailAlloc_3082_, 5, v_subs_3016_);
lean_ctor_set(v_reuseFailAlloc_3082_, 6, v_handlers_3017_);
lean_ctor_set(v_reuseFailAlloc_3082_, 7, v_nextSub_3018_);
lean_ctor_set(v_reuseFailAlloc_3082_, 8, v_touched_3019_);
lean_ctor_set(v_reuseFailAlloc_3082_, 9, v_ports_3020_);
lean_ctor_set_uint8(v_reuseFailAlloc_3082_, sizeof(void*)*10, v_dirty_3013_);
lean_ctor_set_uint8(v_reuseFailAlloc_3082_, sizeof(void*)*10 + 1, v_scheduled_3014_);
v___x_3025_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___f_3028_; lean_object* v___x_4971__overap_3029_; lean_object* v___x_3030_; 
lean_ctor_set_uint8(v___x_3025_, sizeof(void*)*10 + 2, v___y_2983_);
v___x_3026_ = lean_st_ref_put(v___y_2993_, v___x_3025_);
v___x_3027_ = lean_box(0);
v___f_3028_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_3028_, 0, v___x_3027_);
lean_closure_set(v___f_3028_, 1, v___y_2981_);
v___x_4971__overap_3029_ = l_List_forIn_x27_loop___redArg(v___x_2979_, v___f_3028_, v___y_2991_, v___x_3027_);
lean_dec(v___y_2991_);
v___x_3030_ = lean_apply_1(v___x_4971__overap_3029_, lean_box(0));
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v___x_3031_; lean_object* v_model_3032_; lean_object* v_live_3033_; lean_object* v_next_3034_; lean_object* v_tables_3035_; uint8_t v_dirty_3036_; uint8_t v_scheduled_3037_; lean_object* v_queue_3038_; lean_object* v_subs_3039_; lean_object* v_handlers_3040_; lean_object* v_nextSub_3041_; lean_object* v_touched_3042_; lean_object* v_ports_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref_known(v___x_3030_, 1);
v___x_3031_ = lean_st_ref_take(v___y_2993_);
v_model_3032_ = lean_ctor_get(v___x_3031_, 0);
v_live_3033_ = lean_ctor_get(v___x_3031_, 1);
v_next_3034_ = lean_ctor_get(v___x_3031_, 2);
v_tables_3035_ = lean_ctor_get(v___x_3031_, 3);
v_dirty_3036_ = lean_ctor_get_uint8(v___x_3031_, sizeof(void*)*10);
v_scheduled_3037_ = lean_ctor_get_uint8(v___x_3031_, sizeof(void*)*10 + 1);
v_queue_3038_ = lean_ctor_get(v___x_3031_, 4);
v_subs_3039_ = lean_ctor_get(v___x_3031_, 5);
v_handlers_3040_ = lean_ctor_get(v___x_3031_, 6);
v_nextSub_3041_ = lean_ctor_get(v___x_3031_, 7);
v_touched_3042_ = lean_ctor_get(v___x_3031_, 8);
v_ports_3043_ = lean_ctor_get(v___x_3031_, 9);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3045_ = v___x_3031_;
v_isShared_3046_ = v_isSharedCheck_3081_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_ports_3043_);
lean_inc(v_touched_3042_);
lean_inc(v_nextSub_3041_);
lean_inc(v_handlers_3040_);
lean_inc(v_subs_3039_);
lean_inc(v_queue_3038_);
lean_inc(v_tables_3035_);
lean_inc(v_next_3034_);
lean_inc(v_live_3033_);
lean_inc(v_model_3032_);
lean_dec(v___x_3031_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3081_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_model_3032_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v_live_3033_);
lean_ctor_set(v_reuseFailAlloc_3080_, 2, v_next_3034_);
lean_ctor_set(v_reuseFailAlloc_3080_, 3, v_tables_3035_);
lean_ctor_set(v_reuseFailAlloc_3080_, 4, v_queue_3038_);
lean_ctor_set(v_reuseFailAlloc_3080_, 5, v_subs_3039_);
lean_ctor_set(v_reuseFailAlloc_3080_, 6, v_handlers_3040_);
lean_ctor_set(v_reuseFailAlloc_3080_, 7, v_nextSub_3041_);
lean_ctor_set(v_reuseFailAlloc_3080_, 8, v_touched_3042_);
lean_ctor_set(v_reuseFailAlloc_3080_, 9, v_ports_3043_);
lean_ctor_set_uint8(v_reuseFailAlloc_3080_, sizeof(void*)*10, v_dirty_3036_);
lean_ctor_set_uint8(v_reuseFailAlloc_3080_, sizeof(void*)*10 + 1, v_scheduled_3037_);
v___x_3048_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v_model_3051_; lean_object* v_live_3052_; lean_object* v_next_3053_; lean_object* v_tables_3054_; uint8_t v_dirty_3055_; uint8_t v_scheduled_3056_; lean_object* v_queue_3057_; uint8_t v_busy_3058_; lean_object* v_subs_3059_; lean_object* v_handlers_3060_; lean_object* v_nextSub_3061_; lean_object* v_touched_3062_; lean_object* v_ports_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3079_; 
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*10 + 2, v___y_2987_);
v___x_3049_ = lean_st_ref_put(v___y_2993_, v___x_3048_);
v___x_3050_ = lean_st_ref_get(v___y_2993_);
v_model_3051_ = lean_ctor_get(v___x_3050_, 0);
v_live_3052_ = lean_ctor_get(v___x_3050_, 1);
v_next_3053_ = lean_ctor_get(v___x_3050_, 2);
v_tables_3054_ = lean_ctor_get(v___x_3050_, 3);
v_dirty_3055_ = lean_ctor_get_uint8(v___x_3050_, sizeof(void*)*10);
v_scheduled_3056_ = lean_ctor_get_uint8(v___x_3050_, sizeof(void*)*10 + 1);
v_queue_3057_ = lean_ctor_get(v___x_3050_, 4);
v_busy_3058_ = lean_ctor_get_uint8(v___x_3050_, sizeof(void*)*10 + 2);
v_subs_3059_ = lean_ctor_get(v___x_3050_, 5);
v_handlers_3060_ = lean_ctor_get(v___x_3050_, 6);
v_nextSub_3061_ = lean_ctor_get(v___x_3050_, 7);
v_touched_3062_ = lean_ctor_get(v___x_3050_, 8);
v_ports_3063_ = lean_ctor_get(v___x_3050_, 9);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3065_ = v___x_3050_;
v_isShared_3066_ = v_isSharedCheck_3079_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_ports_3063_);
lean_inc(v_touched_3062_);
lean_inc(v_nextSub_3061_);
lean_inc(v_handlers_3060_);
lean_inc(v_subs_3059_);
lean_inc(v_queue_3057_);
lean_inc(v_tables_3054_);
lean_inc(v_next_3053_);
lean_inc(v_live_3052_);
lean_inc(v_model_3051_);
lean_dec(v___x_3050_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3079_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3067_; uint8_t v___x_3068_; 
v___x_3067_ = lean_array_get_size(v_queue_3057_);
v___x_3068_ = lean_nat_dec_lt(v___y_2988_, v___x_3067_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
lean_del_object(v___x_3065_);
lean_dec(v_ports_3063_);
lean_dec_ref(v_touched_3062_);
lean_dec(v_nextSub_3061_);
lean_dec_ref(v_handlers_3060_);
lean_dec_ref(v_subs_3059_);
lean_dec_ref(v_queue_3057_);
lean_dec_ref(v_tables_3054_);
lean_dec(v_next_3053_);
lean_dec(v_live_3052_);
lean_dec(v_model_3051_);
lean_dec(v___y_2993_);
lean_dec(v___y_2988_);
lean_dec(v___y_2982_);
lean_inc_ref(v___y_2989_);
v___x_3069_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_2989_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v___x_3070_; 
lean_dec_ref_known(v___x_3069_, 1);
v___x_3070_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_2989_);
lean_dec_ref(v___y_2989_);
return v___x_3070_;
}
else
{
lean_dec_ref(v___y_2989_);
return v___x_3069_;
}
}
else
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3071_ = lean_array_fget(v_queue_3057_, v___y_2988_);
lean_dec(v___y_2988_);
v___x_3072_ = l_Array_extract___redArg(v_queue_3057_, v___y_2982_, v___x_3067_);
lean_dec_ref(v_queue_3057_);
if (v_isShared_3066_ == 0)
{
lean_ctor_set(v___x_3065_, 4, v___x_3072_);
v___x_3074_ = v___x_3065_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_model_3051_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v_live_3052_);
lean_ctor_set(v_reuseFailAlloc_3078_, 2, v_next_3053_);
lean_ctor_set(v_reuseFailAlloc_3078_, 3, v_tables_3054_);
lean_ctor_set(v_reuseFailAlloc_3078_, 4, v___x_3072_);
lean_ctor_set(v_reuseFailAlloc_3078_, 5, v_subs_3059_);
lean_ctor_set(v_reuseFailAlloc_3078_, 6, v_handlers_3060_);
lean_ctor_set(v_reuseFailAlloc_3078_, 7, v_nextSub_3061_);
lean_ctor_set(v_reuseFailAlloc_3078_, 8, v_touched_3062_);
lean_ctor_set(v_reuseFailAlloc_3078_, 9, v_ports_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*10, v_dirty_3055_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*10 + 1, v_scheduled_3056_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*10 + 2, v_busy_3058_);
v___x_3074_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_st_ref_swap(v___y_2993_, v___x_3074_);
lean_dec(v___y_2993_);
lean_dec(v___x_3075_);
lean_inc_ref(v___y_2989_);
v___x_3076_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_2989_, v___x_3071_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v___x_3077_; 
lean_dec_ref_known(v___x_3076_, 1);
v___x_3077_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_2989_);
lean_dec_ref(v___y_2989_);
return v___x_3077_;
}
else
{
lean_dec_ref(v___y_2989_);
return v___x_3076_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec(v___y_2982_);
return v___x_3030_;
}
}
}
}
else
{
lean_dec(v___y_2993_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
return v___x_3007_;
}
}
else
{
lean_dec(v___y_2993_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
return v___x_3004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3250_, lean_object* v_hot_3251_, lean_object* v_app_3252_, lean_object* v_a_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_Lasm_UI_App_run___redArg(v_inst_3250_, v_hot_3251_, v_app_3252_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3255_, lean_object* v_Model_3256_, lean_object* v_Msg_3257_, lean_object* v_inst_3258_, lean_object* v_hot_3259_, lean_object* v_app_3260_){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = l_Lasm_UI_App_run___redArg(v_inst_3258_, v_hot_3259_, v_app_3260_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3263_, lean_object* v_Model_3264_, lean_object* v_Msg_3265_, lean_object* v_inst_3266_, lean_object* v_hot_3267_, lean_object* v_app_3268_, lean_object* v_a_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_Lasm_UI_App_run(v_Flags_3263_, v_Model_3264_, v_Msg_3265_, v_inst_3266_, v_hot_3267_, v_app_3268_);
return v_res_3270_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_UI_Mount(uint8_t builtin);
lean_object* initialize_Lasm_UI_Diff(uint8_t builtin);
lean_object* initialize_Lasm_UI_Encode(uint8_t builtin);
lean_object* initialize_Lasm_UI_Cmd(uint8_t builtin);
lean_object* initialize_Lasm_UI_Subs(uint8_t builtin);
lean_object* initialize_Lasm_UI_Url(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_App(uint8_t builtin) {
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
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Mount(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Encode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Cmd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Subs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
