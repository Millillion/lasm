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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
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
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
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
static const lean_string_object l_Lasm_UI_Runtime_Dom_options___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l_Lasm_UI_Runtime_Dom_options___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__0_value;
static const lean_string_object l_Lasm_UI_Runtime_Dom_options___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lasm:ui-dom"};
static const lean_object* l_Lasm_UI_Runtime_Dom_options___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_options___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_options___closed__2 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__2_value;
static const lean_array_object l_Lasm_UI_Runtime_Dom_options___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_Dom_options___closed__3 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_options();
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_options___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_connect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "connect"};
static const lean_object* l_Lasm_UI_Runtime_Dom_connect___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_connect___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_connect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_connect___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_connect___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_connect___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_connect___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_connect(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_connect___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_apply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Lasm_UI_Runtime_Dom_apply___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_apply___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_apply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_apply___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_apply___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_apply___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_apply___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_apply(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_apply___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_schedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "schedule"};
static const lean_object* l_Lasm_UI_Runtime_Dom_schedule___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_schedule___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_schedule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_schedule___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_schedule___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_schedule___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_schedule___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_schedule();
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_schedule___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_UI_Runtime_Dom_error___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_error___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_error___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_error___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_error___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_error___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_error___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_error(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_error___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_sub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l_Lasm_UI_Runtime_Dom_sub___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_sub___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_sub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_sub___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_sub___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_sub___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_sub___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_sub___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_unsub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsub"};
static const lean_object* l_Lasm_UI_Runtime_Dom_unsub___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_unsub___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_unsub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_unsub___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_unsub___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_unsub___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_unsub___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_unsub(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_unsub___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_timeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l_Lasm_UI_Runtime_Dom_timeout___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_timeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_timeout___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__1_value;
static const lean_string_object l_Lasm_UI_Runtime_Dom_timeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_Runtime_Dom_timeout___closed__2 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_timeout(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_timeout___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_navigate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "navigate"};
static const lean_object* l_Lasm_UI_Runtime_Dom_navigate___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_navigate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_navigate___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_afterFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "afterFrame"};
static const lean_object* l_Lasm_UI_Runtime_Dom_afterFrame___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_afterFrame___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_afterFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_afterFrame___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_afterFrame___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_afterFrame___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_afterFrame___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_afterFrame(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_afterFrame___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_UI_App_run___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_App_run___redArg___closed__6_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_options(){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_68_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__2));
v___x_69_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_70_ = 1;
v___x_71_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_68_, v___x_69_, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_options___boxed(lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lasm_UI_Runtime_Dom_options();
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_connect(lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; 
v___x_82_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_connect___closed__1));
v___x_83_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_84_ = lean_array_push(v___x_83_, v_a_80_);
v___x_85_ = 1;
v___x_86_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_82_, v___x_84_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_connect___boxed(lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lasm_UI_Runtime_Dom_connect(v_a_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_apply(lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; 
v___x_98_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_apply___closed__1));
v___x_99_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_100_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_100_, 0, v_a_96_);
v___x_101_ = lean_array_push(v___x_99_, v___x_100_);
v___x_102_ = 1;
v___x_103_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_98_, v___x_101_, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_apply___boxed(lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lasm_UI_Runtime_Dom_apply(v_a_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_schedule(){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; lean_object* v___x_117_; 
v___x_114_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_schedule___closed__1));
v___x_115_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_116_ = 1;
v___x_117_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_114_, v___x_115_, v___x_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_schedule___boxed(lean_object* v_a_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lasm_UI_Runtime_Dom_schedule();
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_error(lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; 
v___x_128_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_error___closed__1));
v___x_129_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_130_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_130_, 0, v_a_126_);
v___x_131_ = lean_array_push(v___x_129_, v___x_130_);
v___x_132_ = 1;
v___x_133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_128_, v___x_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_error___boxed(lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lasm_UI_Runtime_Dom_error(v_a_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_sub(lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___y_149_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_146_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__1));
v___x_147_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_sub___boxed(lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lasm_UI_Runtime_Dom_sub(v_a_161_, v_a_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_unsub(lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___y_176_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_173_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_unsub___closed__1));
v___x_174_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_unsub___boxed(lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lasm_UI_Runtime_Dom_unsub(v_a_187_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_timeout(lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___y_203_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_200_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__1));
v___x_201_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
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
v___x_205_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_timeout___boxed(lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lasm_UI_Runtime_Dom_timeout(v_a_217_, v_a_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate(lean_object* v_a_227_, uint8_t v_a_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; 
v___x_230_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_navigate___closed__1));
v___x_231_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate___boxed(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
uint8_t v_a_128__boxed_241_; lean_object* v_res_242_; 
v_a_128__boxed_241_ = lean_unbox(v_a_239_);
v_res_242_ = l_Lasm_UI_Runtime_Dom_navigate(v_a_238_, v_a_128__boxed_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_afterFrame(lean_object* v_a_249_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; 
v___x_251_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_afterFrame___closed__1));
v___x_252_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_253_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_254_, 0, v_a_249_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_array_push(v___x_252_, v___x_254_);
v___x_256_ = 1;
v___x_257_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_251_, v___x_255_, v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_afterFrame___boxed(lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lasm_UI_Runtime_Dom_afterFrame(v_a_258_);
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
v___x_706_ = l_Lasm_UI_Runtime_Dom_error(v___x_704_);
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
v___x_786_ = l_Lasm_UI_Runtime_Dom_schedule();
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
v___x_1119_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1114_);
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
lean_object* v_ms_1289_; lean_object* v_msg_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; 
v_ms_1289_ = lean_ctor_get(v_e_1285_, 0);
lean_inc(v_ms_1289_);
v_msg_1290_ = lean_ctor_get(v_e_1285_, 1);
lean_inc(v_msg_1290_);
lean_dec_ref_known(v_e_1285_, 2);
v___f_1291_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1291_, 0, v_c_1284_);
lean_closure_set(v___f_1291_, 1, v_msg_1290_);
v___x_1292_ = l_Lasm_JS_Function_ofSyncFn(v___f_1291_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1289_, v_a_1293_);
return v___x_1294_;
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec(v_ms_1289_);
v_a_1295_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1292_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1292_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
case 2:
{
lean_object* v_url_1303_; uint8_t v_replace_1304_; lean_object* v___x_1305_; 
lean_dec_ref(v_c_1284_);
v_url_1303_ = lean_ctor_get(v_e_1285_, 0);
lean_inc_ref(v_url_1303_);
v_replace_1304_ = lean_ctor_get_uint8(v_e_1285_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1285_, 1);
v___x_1305_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1303_, v_replace_1304_);
return v___x_1305_;
}
default: 
{
lean_object* v_run_1306_; lean_object* v___f_1307_; lean_object* v___f_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_run_1306_ = lean_ctor_get(v_e_1285_, 0);
lean_inc_ref(v_run_1306_);
lean_dec_ref_known(v_e_1285_, 1);
v___f_1307_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1308_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__1));
v___f_1309_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1309_, 0, v_c_1284_);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = 0;
v___x_1312_ = lean_apply_2(v_run_1306_, v___f_1309_, lean_box(0));
v___x_1313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1310_, v___x_1311_, v___x_1312_, v___f_1308_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v___x_1313_, 0);
lean_dec(v_unused_1322_);
v___x_1315_ = v___x_1313_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_dec(v___x_1313_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_box(0);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1317_);
v___x_1319_ = v___x_1315_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1332_; 
v_a_1323_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1325_ = v___x_1313_;
v_isShared_1326_ = v_isSharedCheck_1332_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1313_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1332_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_io_map_task(v___f_1307_, v_a_1323_, v___x_1310_, v___x_1311_);
lean_dec_ref(v___x_1328_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set_tag(v___x_1325_, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1327_);
v___x_1330_ = v___x_1325_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1327_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_1333_, lean_object* v_as_x27_1334_, lean_object* v_b_1335_){
_start:
{
if (lean_obj_tag(v_as_x27_1334_) == 0)
{
lean_object* v___x_1337_; 
lean_dec_ref(v_c_1333_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_b_1335_);
return v___x_1337_;
}
else
{
lean_object* v_head_1338_; lean_object* v_tail_1339_; lean_object* v___x_1340_; lean_object* v___y_1342_; lean_object* v___x_1344_; 
v_head_1338_ = lean_ctor_get(v_as_x27_1334_, 0);
v_tail_1339_ = lean_ctor_get(v_as_x27_1334_, 1);
v___x_1340_ = lean_box(0);
lean_inc(v_head_1338_);
lean_inc_ref(v_c_1333_);
v___x_1344_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1333_, v_head_1338_);
if (lean_obj_tag(v___x_1344_) == 0)
{
v___y_1342_ = v___x_1344_;
goto v___jp_1341_;
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1347_ = l_Lasm_UI_Runtime_report(v___x_1346_, v_a_1345_);
v___y_1342_ = v___x_1347_;
goto v___jp_1341_;
}
v___jp_1341_:
{
if (lean_obj_tag(v___y_1342_) == 0)
{
lean_dec_ref_known(v___y_1342_, 1);
v_as_x27_1334_ = v_tail_1339_;
v_b_1335_ = v___x_1340_;
goto _start;
}
else
{
lean_dec_ref(v_c_1333_);
return v___y_1342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_1348_, lean_object* v_c_1349_){
_start:
{
lean_object* v___x_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v_model_1354_; lean_object* v_live_1355_; lean_object* v_next_1356_; lean_object* v_tables_1357_; uint8_t v_scheduled_1358_; lean_object* v_queue_1359_; uint8_t v_busy_1360_; lean_object* v_subs_1361_; lean_object* v_handlers_1362_; lean_object* v_nextSub_1363_; lean_object* v_touched_1364_; lean_object* v_ports_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1387_; 
v___x_1351_ = lean_box(0);
v___x_1352_ = 1;
v___x_1353_ = lean_st_ref_get(v___x_1348_);
v_model_1354_ = lean_ctor_get(v___x_1353_, 0);
v_live_1355_ = lean_ctor_get(v___x_1353_, 1);
v_next_1356_ = lean_ctor_get(v___x_1353_, 2);
v_tables_1357_ = lean_ctor_get(v___x_1353_, 3);
v_scheduled_1358_ = lean_ctor_get_uint8(v___x_1353_, sizeof(void*)*10 + 1);
v_queue_1359_ = lean_ctor_get(v___x_1353_, 4);
v_busy_1360_ = lean_ctor_get_uint8(v___x_1353_, sizeof(void*)*10 + 2);
v_subs_1361_ = lean_ctor_get(v___x_1353_, 5);
v_handlers_1362_ = lean_ctor_get(v___x_1353_, 6);
v_nextSub_1363_ = lean_ctor_get(v___x_1353_, 7);
v_touched_1364_ = lean_ctor_get(v___x_1353_, 8);
v_ports_1365_ = lean_ctor_get(v___x_1353_, 9);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1367_ = v___x_1353_;
v_isShared_1368_ = v_isSharedCheck_1387_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_ports_1365_);
lean_inc(v_touched_1364_);
lean_inc(v_nextSub_1363_);
lean_inc(v_handlers_1362_);
lean_inc(v_subs_1361_);
lean_inc(v_queue_1359_);
lean_inc(v_tables_1357_);
lean_inc(v_next_1356_);
lean_inc(v_live_1355_);
lean_inc(v_model_1354_);
lean_dec(v___x_1353_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1387_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1369_ = lean_unsigned_to_nat(0u);
v___x_1370_ = lean_array_get_size(v_queue_1359_);
v___x_1371_ = lean_nat_dec_lt(v___x_1369_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
lean_del_object(v___x_1367_);
lean_dec(v_ports_1365_);
lean_dec_ref(v_touched_1364_);
lean_dec(v_nextSub_1363_);
lean_dec_ref(v_handlers_1362_);
lean_dec_ref(v_subs_1361_);
lean_dec_ref(v_queue_1359_);
lean_dec_ref(v_tables_1357_);
lean_dec(v_next_1356_);
lean_dec(v_live_1355_);
lean_dec(v_model_1354_);
lean_dec_ref(v_c_1349_);
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1351_);
return v___x_1372_;
}
else
{
lean_object* v_app_1373_; lean_object* v_update_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v_fst_1377_; lean_object* v_snd_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v_app_1373_ = lean_ctor_get(v_c_1349_, 0);
v_update_1374_ = lean_ctor_get(v_app_1373_, 1);
v___x_1375_ = lean_array_fget_borrowed(v_queue_1359_, v___x_1369_);
lean_inc_ref(v_update_1374_);
lean_inc(v___x_1375_);
v___x_1376_ = lean_apply_2(v_update_1374_, v___x_1375_, v_model_1354_);
v_fst_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_fst_1377_);
v_snd_1378_ = lean_ctor_get(v___x_1376_, 1);
lean_inc(v_snd_1378_);
lean_dec_ref(v___x_1376_);
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = l_Array_extract___redArg(v_queue_1359_, v___x_1379_, v___x_1370_);
lean_dec_ref(v_queue_1359_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 4, v___x_1380_);
lean_ctor_set(v___x_1367_, 0, v_fst_1377_);
v___x_1382_ = v___x_1367_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_fst_1377_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_live_1355_);
lean_ctor_set(v_reuseFailAlloc_1386_, 2, v_next_1356_);
lean_ctor_set(v_reuseFailAlloc_1386_, 3, v_tables_1357_);
lean_ctor_set(v_reuseFailAlloc_1386_, 4, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1386_, 5, v_subs_1361_);
lean_ctor_set(v_reuseFailAlloc_1386_, 6, v_handlers_1362_);
lean_ctor_set(v_reuseFailAlloc_1386_, 7, v_nextSub_1363_);
lean_ctor_set(v_reuseFailAlloc_1386_, 8, v_touched_1364_);
lean_ctor_set(v_reuseFailAlloc_1386_, 9, v_ports_1365_);
lean_ctor_set_uint8(v_reuseFailAlloc_1386_, sizeof(void*)*10 + 1, v_scheduled_1358_);
lean_ctor_set_uint8(v_reuseFailAlloc_1386_, sizeof(void*)*10 + 2, v_busy_1360_);
v___x_1382_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_ctor_set_uint8(v___x_1382_, sizeof(void*)*10, v___x_1352_);
v___x_1383_ = lean_st_ref_swap(v___x_1348_, v___x_1382_);
lean_dec(v___x_1383_);
lean_inc_ref(v_c_1349_);
v___x_1384_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1349_, v_snd_1378_, v___x_1351_);
lean_dec(v_snd_1378_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_dec_ref_known(v___x_1384_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_1349_);
return v___x_1384_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = lean_box(0);
v___x_1389_ = lean_unsigned_to_nat(16u);
v___x_1390_ = lean_mk_array(v___x_1389_, v___x_1388_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1391_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_1392_ = lean_unsigned_to_nat(0u);
v___x_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
lean_ctor_set(v___x_1393_, 1, v___x_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_1394_, lean_object* v_c_1395_, lean_object* v_as_x27_1396_, lean_object* v_b_1397_){
_start:
{
if (lean_obj_tag(v_as_x27_1396_) == 0)
{
lean_object* v___x_1399_; 
lean_dec_ref(v_c_1395_);
lean_dec(v_v_1394_);
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_b_1397_);
return v___x_1399_;
}
else
{
lean_object* v_head_1400_; lean_object* v_tail_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v_head_1400_ = lean_ctor_get(v_as_x27_1396_, 0);
v_tail_1401_ = lean_ctor_get(v_as_x27_1396_, 1);
v___x_1402_ = lean_box(0);
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = lean_mk_empty_array_with_capacity(v___x_1403_);
lean_inc(v_v_1394_);
v___x_1405_ = lean_array_push(v___x_1404_, v_v_1394_);
lean_inc(v_head_1400_);
v___x_1406_ = lean_apply_1(v_head_1400_, v___x_1405_);
if (lean_obj_tag(v___x_1406_) == 1)
{
lean_object* v_val_1407_; lean_object* v_message_1408_; lean_object* v___x_1409_; 
v_val_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_val_1407_);
lean_dec_ref_known(v___x_1406_, 1);
v_message_1408_ = lean_ctor_get(v_val_1407_, 0);
lean_inc(v_message_1408_);
lean_dec(v_val_1407_);
lean_inc_ref(v_c_1395_);
v___x_1409_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1395_, v_message_1408_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_dec_ref_known(v___x_1409_, 1);
v_as_x27_1396_ = v_tail_1401_;
v_b_1397_ = v___x_1402_;
goto _start;
}
else
{
lean_dec_ref(v_c_1395_);
lean_dec(v_v_1394_);
return v___x_1409_;
}
}
else
{
lean_dec(v___x_1406_);
v_as_x27_1396_ = v_tail_1401_;
v_b_1397_ = v___x_1402_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_1412_, lean_object* v_name_1413_, lean_object* v_c_1414_, lean_object* v_v_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v_subs_1418_; lean_object* v_handlers_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1417_ = lean_st_ref_get(v_ref_1412_);
v_subs_1418_ = lean_ctor_get(v___x_1417_, 5);
lean_inc_ref(v_subs_1418_);
v_handlers_1419_ = lean_ctor_get(v___x_1417_, 6);
lean_inc_ref(v_handlers_1419_);
lean_dec(v___x_1417_);
v___x_1420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1420_, 0, v_name_1413_);
v___x_1421_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_1418_, v___x_1420_);
lean_dec_ref(v_subs_1418_);
if (lean_obj_tag(v___x_1421_) == 1)
{
lean_object* v_val_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_val_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_val_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = lean_box(0);
v___x_1424_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_1419_, v_val_1422_, v___x_1423_);
lean_dec(v_val_1422_);
lean_dec_ref(v_handlers_1419_);
v___x_1425_ = lean_box(0);
lean_inc_ref(v_c_1414_);
v___x_1426_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1415_, v_c_1414_, v___x_1424_, v___x_1425_);
lean_dec(v___x_1424_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v___x_1427_; 
lean_dec_ref_known(v___x_1426_, 1);
v___x_1427_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1414_);
lean_dec_ref(v_c_1414_);
return v___x_1427_;
}
else
{
lean_dec_ref(v_c_1414_);
return v___x_1426_;
}
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_dec(v___x_1421_);
lean_dec_ref(v_handlers_1419_);
lean_dec(v_v_1415_);
lean_dec_ref(v_c_1414_);
v___x_1428_ = lean_box(0);
v___x_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
return v___x_1429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_1430_, lean_object* v_name_1431_, lean_object* v_c_1432_, lean_object* v_v_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_1430_, v_name_1431_, v_c_1432_, v_v_1433_);
lean_dec(v_ref_1430_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_1436_, lean_object* v_name_1437_){
_start:
{
lean_object* v_ref_1439_; lean_object* v___f_1440_; lean_object* v___x_1441_; lean_object* v_model_1442_; lean_object* v_live_1443_; lean_object* v_next_1444_; lean_object* v_tables_1445_; uint8_t v_dirty_1446_; uint8_t v_scheduled_1447_; lean_object* v_queue_1448_; uint8_t v_busy_1449_; lean_object* v_subs_1450_; lean_object* v_handlers_1451_; lean_object* v_nextSub_1452_; lean_object* v_touched_1453_; lean_object* v_ports_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1474_; 
v_ref_1439_ = lean_ctor_get(v_c_1436_, 1);
lean_inc_n(v_ref_1439_, 2);
lean_inc_ref(v_name_1437_);
v___f_1440_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1440_, 0, v_ref_1439_);
lean_closure_set(v___f_1440_, 1, v_name_1437_);
lean_closure_set(v___f_1440_, 2, v_c_1436_);
v___x_1441_ = lean_st_ref_take(v_ref_1439_);
v_model_1442_ = lean_ctor_get(v___x_1441_, 0);
v_live_1443_ = lean_ctor_get(v___x_1441_, 1);
v_next_1444_ = lean_ctor_get(v___x_1441_, 2);
v_tables_1445_ = lean_ctor_get(v___x_1441_, 3);
v_dirty_1446_ = lean_ctor_get_uint8(v___x_1441_, sizeof(void*)*10);
v_scheduled_1447_ = lean_ctor_get_uint8(v___x_1441_, sizeof(void*)*10 + 1);
v_queue_1448_ = lean_ctor_get(v___x_1441_, 4);
v_busy_1449_ = lean_ctor_get_uint8(v___x_1441_, sizeof(void*)*10 + 2);
v_subs_1450_ = lean_ctor_get(v___x_1441_, 5);
v_handlers_1451_ = lean_ctor_get(v___x_1441_, 6);
v_nextSub_1452_ = lean_ctor_get(v___x_1441_, 7);
v_touched_1453_ = lean_ctor_get(v___x_1441_, 8);
v_ports_1454_ = lean_ctor_get(v___x_1441_, 9);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1456_ = v___x_1441_;
v_isShared_1457_ = v_isSharedCheck_1474_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_ports_1454_);
lean_inc(v_touched_1453_);
lean_inc(v_nextSub_1452_);
lean_inc(v_handlers_1451_);
lean_inc(v_subs_1450_);
lean_inc(v_queue_1448_);
lean_inc(v_tables_1445_);
lean_inc(v_next_1444_);
lean_inc(v_live_1443_);
lean_inc(v_model_1442_);
lean_dec(v___x_1441_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1474_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
lean_inc_ref(v_name_1437_);
v___x_1458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1458_, 0, v_name_1437_);
lean_ctor_set(v___x_1458_, 1, v_ports_1454_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 9, v___x_1458_);
v___x_1460_ = v___x_1456_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_model_1442_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_live_1443_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_next_1444_);
lean_ctor_set(v_reuseFailAlloc_1473_, 3, v_tables_1445_);
lean_ctor_set(v_reuseFailAlloc_1473_, 4, v_queue_1448_);
lean_ctor_set(v_reuseFailAlloc_1473_, 5, v_subs_1450_);
lean_ctor_set(v_reuseFailAlloc_1473_, 6, v_handlers_1451_);
lean_ctor_set(v_reuseFailAlloc_1473_, 7, v_nextSub_1452_);
lean_ctor_set(v_reuseFailAlloc_1473_, 8, v_touched_1453_);
lean_ctor_set(v_reuseFailAlloc_1473_, 9, v___x_1458_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*10, v_dirty_1446_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*10 + 1, v_scheduled_1447_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*10 + 2, v_busy_1449_);
v___x_1460_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = lean_st_ref_put(v_ref_1439_, v___x_1460_);
lean_dec(v_ref_1439_);
v___x_1462_ = l_Lasm_UI_Mount_Raw_port(v_name_1437_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1464_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = l_Lasm_UI_Mount_Port_subscribe(v_a_1463_, v___f_1440_);
return v___x_1464_;
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec_ref(v___f_1440_);
v_a_1465_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1462_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1462_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_1475_, lean_object* v_c_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
if (lean_obj_tag(v_a_1477_) == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec_ref(v_c_1476_);
v___x_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_a_1478_);
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v_snd_1482_; lean_object* v_key_1483_; lean_object* v_value_1484_; lean_object* v_tail_1485_; lean_object* v_fst_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1556_; 
v_snd_1482_ = lean_ctor_get(v_a_1478_, 1);
lean_inc(v_snd_1482_);
v_key_1483_ = lean_ctor_get(v_a_1477_, 0);
lean_inc(v_key_1483_);
v_value_1484_ = lean_ctor_get(v_a_1477_, 1);
lean_inc(v_value_1484_);
v_tail_1485_ = lean_ctor_get(v_a_1477_, 2);
lean_inc(v_tail_1485_);
lean_dec_ref_known(v_a_1477_, 3);
v_fst_1486_ = lean_ctor_get(v_a_1478_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_a_1478_);
if (v_isSharedCheck_1556_ == 0)
{
lean_object* v_unused_1557_; 
v_unused_1557_ = lean_ctor_get(v_a_1478_, 1);
lean_dec(v_unused_1557_);
v___x_1488_ = v_a_1478_;
v_isShared_1489_ = v_isSharedCheck_1556_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_fst_1486_);
lean_dec(v_a_1478_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1556_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v_fst_1490_; lean_object* v_snd_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1555_; 
v_fst_1490_ = lean_ctor_get(v_snd_1482_, 0);
v_snd_1491_ = lean_ctor_get(v_snd_1482_, 1);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_snd_1482_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1493_ = v_snd_1482_;
v_isShared_1494_ = v_isSharedCheck_1555_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_snd_1491_);
lean_inc(v_fst_1490_);
lean_dec(v_snd_1482_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1555_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; 
lean_inc(v_key_1483_);
v___x_1495_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_1486_, v_key_1483_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1496_ = lean_unsigned_to_nat(1u);
v___x_1497_ = lean_nat_add(v_snd_1491_, v___x_1496_);
lean_inc_n(v_snd_1491_, 2);
lean_inc(v_key_1483_);
v___x_1498_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_1486_, v_key_1483_, v_snd_1491_);
v___x_1499_ = l_List_reverse___redArg(v_value_1484_);
v___x_1500_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_1490_, v_snd_1491_, v___x_1499_);
if (lean_obj_tag(v_key_1483_) == 3)
{
lean_object* v_name_1501_; lean_object* v___x_1502_; lean_object* v_ports_1503_; uint8_t v___x_1504_; 
lean_dec(v_snd_1491_);
v_name_1501_ = lean_ctor_get(v_key_1483_, 0);
lean_inc_ref(v_name_1501_);
lean_dec_ref_known(v_key_1483_, 1);
v___x_1502_ = lean_st_ref_get(v___x_1475_);
v_ports_1503_ = lean_ctor_get(v___x_1502_, 9);
lean_inc(v_ports_1503_);
lean_dec(v___x_1502_);
v___x_1504_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_1501_, v_ports_1503_);
lean_dec(v_ports_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; 
lean_inc_ref(v_c_1476_);
v___x_1505_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1476_, v_name_1501_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v___x_1507_; 
lean_dec_ref_known(v___x_1505_, 1);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 1, v___x_1497_);
lean_ctor_set(v___x_1493_, 0, v___x_1500_);
v___x_1507_ = v___x_1493_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v___x_1497_);
v___x_1507_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_object* v___x_1509_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1507_);
lean_ctor_set(v___x_1488_, 0, v___x_1498_);
v___x_1509_ = v___x_1488_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
v_a_1477_ = v_tail_1485_;
v_a_1478_ = v___x_1509_;
goto _start;
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v___x_1500_);
lean_dec_ref(v___x_1498_);
lean_dec(v___x_1497_);
lean_del_object(v___x_1493_);
lean_del_object(v___x_1488_);
lean_dec(v_tail_1485_);
lean_dec_ref(v_c_1476_);
v_a_1513_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1505_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1505_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
lean_object* v___x_1522_; 
lean_dec_ref(v_name_1501_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 1, v___x_1497_);
lean_ctor_set(v___x_1493_, 0, v___x_1500_);
v___x_1522_ = v___x_1493_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v___x_1497_);
v___x_1522_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1524_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1522_);
lean_ctor_set(v___x_1488_, 0, v___x_1498_);
v___x_1524_ = v___x_1488_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
v_a_1477_ = v_tail_1485_;
v_a_1478_ = v___x_1524_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = l_Lasm_UI_Runtime_specData(v_key_1483_);
v___x_1529_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_1491_, v___x_1528_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1531_; 
lean_dec_ref_known(v___x_1529_, 1);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 1, v___x_1497_);
lean_ctor_set(v___x_1493_, 0, v___x_1500_);
v___x_1531_ = v___x_1493_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v___x_1497_);
v___x_1531_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1533_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1531_);
lean_ctor_set(v___x_1488_, 0, v___x_1498_);
v___x_1533_ = v___x_1488_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1498_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
v_a_1477_ = v_tail_1485_;
v_a_1478_ = v___x_1533_;
goto _start;
}
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec_ref(v___x_1500_);
lean_dec_ref(v___x_1498_);
lean_dec(v___x_1497_);
lean_del_object(v___x_1493_);
lean_del_object(v___x_1488_);
lean_dec(v_tail_1485_);
lean_dec_ref(v_c_1476_);
v_a_1537_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1529_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1529_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
else
{
lean_object* v_val_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
lean_dec(v_key_1483_);
v_val_1545_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1546_ = l_List_reverse___redArg(v_value_1484_);
v___x_1547_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_1490_, v_val_1545_, v___x_1546_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v___x_1547_);
v___x_1549_ = v___x_1493_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1547_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_snd_1491_);
v___x_1549_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1551_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1549_);
v___x_1551_ = v___x_1488_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_fst_1486_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
v_a_1477_ = v_tail_1485_;
v_a_1478_ = v___x_1551_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_1558_, lean_object* v_c_1559_, lean_object* v_as_1560_, size_t v_sz_1561_, size_t v_i_1562_, lean_object* v_b_1563_){
_start:
{
uint8_t v___x_1565_; 
v___x_1565_ = lean_usize_dec_lt(v_i_1562_, v_sz_1561_);
if (v___x_1565_ == 0)
{
lean_object* v___x_1566_; 
lean_dec_ref(v_c_1559_);
v___x_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1566_, 0, v_b_1563_);
return v___x_1566_;
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1568_; 
v_a_1567_ = lean_array_uget_borrowed(v_as_1560_, v_i_1562_);
lean_inc(v_a_1567_);
lean_inc_ref(v_c_1559_);
v___x_1568_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1558_, v_c_1559_, v_a_1567_, v_b_1563_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1581_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1571_ = v___x_1568_;
v_isShared_1572_ = v_isSharedCheck_1581_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1581_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
if (lean_obj_tag(v_a_1569_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1575_; 
lean_dec_ref(v_c_1559_);
v_a_1573_ = lean_ctor_get(v_a_1569_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v_a_1569_, 1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v_a_1573_);
v___x_1575_ = v___x_1571_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1573_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
else
{
lean_object* v_a_1577_; size_t v___x_1578_; size_t v___x_1579_; 
lean_del_object(v___x_1571_);
v_a_1577_ = lean_ctor_get(v_a_1569_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v_a_1569_, 1);
v___x_1578_ = ((size_t)1ULL);
v___x_1579_ = lean_usize_add(v_i_1562_, v___x_1578_);
v_i_1562_ = v___x_1579_;
v_b_1563_ = v_a_1577_;
goto _start;
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_c_1559_);
v_a_1582_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1568_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1568_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_1590_){
_start:
{
lean_object* v_app_1592_; lean_object* v_ref_1593_; lean_object* v___x_1594_; lean_object* v_subscriptions_1595_; lean_object* v_model_1596_; lean_object* v_subs_1597_; lean_object* v_nextSub_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_app_1592_ = lean_ctor_get(v_c_1590_, 0);
v_ref_1593_ = lean_ctor_get(v_c_1590_, 1);
lean_inc(v_ref_1593_);
v___x_1594_ = lean_st_ref_get(v_ref_1593_);
v_subscriptions_1595_ = lean_ctor_get(v_app_1592_, 3);
v_model_1596_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_model_1596_);
v_subs_1597_ = lean_ctor_get(v___x_1594_, 5);
lean_inc_ref(v_subs_1597_);
v_nextSub_1598_ = lean_ctor_get(v___x_1594_, 7);
lean_inc(v_nextSub_1598_);
lean_dec(v___x_1594_);
lean_inc_ref(v_subscriptions_1595_);
v___x_1599_ = lean_apply_1(v_subscriptions_1595_, v_model_1596_);
v___x_1600_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_1601_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_1599_, v___x_1600_);
lean_dec(v___x_1599_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v_buckets_1603_; size_t v_sz_1604_; size_t v___x_1605_; lean_object* v___x_1606_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
lean_dec_ref_known(v___x_1601_, 1);
v_buckets_1603_ = lean_ctor_get(v_subs_1597_, 1);
lean_inc_ref(v_buckets_1603_);
v_sz_1604_ = lean_array_size(v_buckets_1603_);
v___x_1605_ = ((size_t)0ULL);
v___x_1606_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1602_, v_buckets_1603_, v_sz_1604_, v___x_1605_, v_subs_1597_);
lean_dec_ref(v_buckets_1603_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v_buckets_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1660_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1607_);
lean_dec_ref_known(v___x_1606_, 1);
v_buckets_1608_ = lean_ctor_get(v_a_1602_, 1);
v_isSharedCheck_1660_ = !lean_is_exclusive(v_a_1602_);
if (v_isSharedCheck_1660_ == 0)
{
lean_object* v_unused_1661_; 
v_unused_1661_ = lean_ctor_get(v_a_1602_, 0);
lean_dec(v_unused_1661_);
v___x_1610_ = v_a_1602_;
v_isShared_1611_ = v_isSharedCheck_1660_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_buckets_1608_);
lean_dec(v_a_1602_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1660_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 1, v_nextSub_1598_);
lean_ctor_set(v___x_1610_, 0, v___x_1600_);
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1600_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v_nextSub_1598_);
v___x_1613_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
lean_object* v___x_1614_; size_t v_sz_1615_; lean_object* v___x_1616_; 
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v_a_1607_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v_sz_1615_ = lean_array_size(v_buckets_1608_);
v___x_1616_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_1593_, v_c_1590_, v_buckets_1608_, v_sz_1615_, v___x_1605_, v___x_1614_);
lean_dec_ref(v_buckets_1608_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1650_; 
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1619_ = v___x_1616_;
v_isShared_1620_ = v_isSharedCheck_1650_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1616_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1650_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v_snd_1621_; lean_object* v_fst_1622_; lean_object* v_fst_1623_; lean_object* v_snd_1624_; lean_object* v___x_1625_; lean_object* v_model_1626_; lean_object* v_live_1627_; lean_object* v_next_1628_; lean_object* v_tables_1629_; uint8_t v_dirty_1630_; uint8_t v_scheduled_1631_; lean_object* v_queue_1632_; uint8_t v_busy_1633_; lean_object* v_touched_1634_; lean_object* v_ports_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1646_; 
v_snd_1621_ = lean_ctor_get(v_a_1617_, 1);
lean_inc(v_snd_1621_);
v_fst_1622_ = lean_ctor_get(v_a_1617_, 0);
lean_inc(v_fst_1622_);
lean_dec(v_a_1617_);
v_fst_1623_ = lean_ctor_get(v_snd_1621_, 0);
lean_inc(v_fst_1623_);
v_snd_1624_ = lean_ctor_get(v_snd_1621_, 1);
lean_inc(v_snd_1624_);
lean_dec(v_snd_1621_);
v___x_1625_ = lean_st_ref_take(v_ref_1593_);
v_model_1626_ = lean_ctor_get(v___x_1625_, 0);
v_live_1627_ = lean_ctor_get(v___x_1625_, 1);
v_next_1628_ = lean_ctor_get(v___x_1625_, 2);
v_tables_1629_ = lean_ctor_get(v___x_1625_, 3);
v_dirty_1630_ = lean_ctor_get_uint8(v___x_1625_, sizeof(void*)*10);
v_scheduled_1631_ = lean_ctor_get_uint8(v___x_1625_, sizeof(void*)*10 + 1);
v_queue_1632_ = lean_ctor_get(v___x_1625_, 4);
v_busy_1633_ = lean_ctor_get_uint8(v___x_1625_, sizeof(void*)*10 + 2);
v_touched_1634_ = lean_ctor_get(v___x_1625_, 8);
v_ports_1635_ = lean_ctor_get(v___x_1625_, 9);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1646_ == 0)
{
lean_object* v_unused_1647_; lean_object* v_unused_1648_; lean_object* v_unused_1649_; 
v_unused_1647_ = lean_ctor_get(v___x_1625_, 7);
lean_dec(v_unused_1647_);
v_unused_1648_ = lean_ctor_get(v___x_1625_, 6);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v___x_1625_, 5);
lean_dec(v_unused_1649_);
v___x_1637_ = v___x_1625_;
v_isShared_1638_ = v_isSharedCheck_1646_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_ports_1635_);
lean_inc(v_touched_1634_);
lean_inc(v_queue_1632_);
lean_inc(v_tables_1629_);
lean_inc(v_next_1628_);
lean_inc(v_live_1627_);
lean_inc(v_model_1626_);
lean_dec(v___x_1625_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1646_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
lean_ctor_set(v___x_1637_, 7, v_snd_1624_);
lean_ctor_set(v___x_1637_, 6, v_fst_1623_);
lean_ctor_set(v___x_1637_, 5, v_fst_1622_);
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_model_1626_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_live_1627_);
lean_ctor_set(v_reuseFailAlloc_1645_, 2, v_next_1628_);
lean_ctor_set(v_reuseFailAlloc_1645_, 3, v_tables_1629_);
lean_ctor_set(v_reuseFailAlloc_1645_, 4, v_queue_1632_);
lean_ctor_set(v_reuseFailAlloc_1645_, 5, v_fst_1622_);
lean_ctor_set(v_reuseFailAlloc_1645_, 6, v_fst_1623_);
lean_ctor_set(v_reuseFailAlloc_1645_, 7, v_snd_1624_);
lean_ctor_set(v_reuseFailAlloc_1645_, 8, v_touched_1634_);
lean_ctor_set(v_reuseFailAlloc_1645_, 9, v_ports_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1645_, sizeof(void*)*10, v_dirty_1630_);
lean_ctor_set_uint8(v_reuseFailAlloc_1645_, sizeof(void*)*10 + 1, v_scheduled_1631_);
lean_ctor_set_uint8(v_reuseFailAlloc_1645_, sizeof(void*)*10 + 2, v_busy_1633_);
v___x_1640_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = lean_st_ref_put(v_ref_1593_, v___x_1640_);
lean_dec(v_ref_1593_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 0, v___x_1641_);
v___x_1643_ = v___x_1619_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v_ref_1593_);
v_a_1651_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1616_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1616_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_a_1602_);
lean_dec(v_nextSub_1598_);
lean_dec(v_ref_1593_);
lean_dec_ref(v_c_1590_);
v_a_1662_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1606_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1606_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec(v_nextSub_1598_);
lean_dec_ref(v_subs_1597_);
lean_dec(v_ref_1593_);
lean_dec_ref(v_c_1590_);
v_a_1670_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1601_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1601_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_1678_, lean_object* v_msg_1679_){
_start:
{
lean_object* v_ref_1681_; lean_object* v___x_1682_; lean_object* v_model_1683_; lean_object* v_live_1684_; lean_object* v_next_1685_; lean_object* v_tables_1686_; uint8_t v_dirty_1687_; uint8_t v_scheduled_1688_; lean_object* v_queue_1689_; uint8_t v_busy_1690_; lean_object* v_subs_1691_; lean_object* v_handlers_1692_; lean_object* v_nextSub_1693_; lean_object* v_touched_1694_; lean_object* v_ports_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1756_; 
v_ref_1681_ = lean_ctor_get(v_c_1678_, 1);
lean_inc(v_ref_1681_);
v___x_1682_ = lean_st_ref_take(v_ref_1681_);
v_model_1683_ = lean_ctor_get(v___x_1682_, 0);
v_live_1684_ = lean_ctor_get(v___x_1682_, 1);
v_next_1685_ = lean_ctor_get(v___x_1682_, 2);
v_tables_1686_ = lean_ctor_get(v___x_1682_, 3);
v_dirty_1687_ = lean_ctor_get_uint8(v___x_1682_, sizeof(void*)*10);
v_scheduled_1688_ = lean_ctor_get_uint8(v___x_1682_, sizeof(void*)*10 + 1);
v_queue_1689_ = lean_ctor_get(v___x_1682_, 4);
v_busy_1690_ = lean_ctor_get_uint8(v___x_1682_, sizeof(void*)*10 + 2);
v_subs_1691_ = lean_ctor_get(v___x_1682_, 5);
v_handlers_1692_ = lean_ctor_get(v___x_1682_, 6);
v_nextSub_1693_ = lean_ctor_get(v___x_1682_, 7);
v_touched_1694_ = lean_ctor_get(v___x_1682_, 8);
v_ports_1695_ = lean_ctor_get(v___x_1682_, 9);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1697_ = v___x_1682_;
v_isShared_1698_ = v_isSharedCheck_1756_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_ports_1695_);
lean_inc(v_touched_1694_);
lean_inc(v_nextSub_1693_);
lean_inc(v_handlers_1692_);
lean_inc(v_subs_1691_);
lean_inc(v_queue_1689_);
lean_inc(v_tables_1686_);
lean_inc(v_next_1685_);
lean_inc(v_live_1684_);
lean_inc(v_model_1683_);
lean_dec(v___x_1682_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1756_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1699_ = lean_array_push(v_queue_1689_, v_msg_1679_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 4, v___x_1699_);
v___x_1701_ = v___x_1697_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_model_1683_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v_live_1684_);
lean_ctor_set(v_reuseFailAlloc_1755_, 2, v_next_1685_);
lean_ctor_set(v_reuseFailAlloc_1755_, 3, v_tables_1686_);
lean_ctor_set(v_reuseFailAlloc_1755_, 4, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1755_, 5, v_subs_1691_);
lean_ctor_set(v_reuseFailAlloc_1755_, 6, v_handlers_1692_);
lean_ctor_set(v_reuseFailAlloc_1755_, 7, v_nextSub_1693_);
lean_ctor_set(v_reuseFailAlloc_1755_, 8, v_touched_1694_);
lean_ctor_set(v_reuseFailAlloc_1755_, 9, v_ports_1695_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*10, v_dirty_1687_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*10 + 1, v_scheduled_1688_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*10 + 2, v_busy_1690_);
v___x_1701_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; uint8_t v_busy_1704_; 
v___x_1702_ = lean_st_ref_put(v_ref_1681_, v___x_1701_);
v___x_1703_ = lean_st_ref_get(v_ref_1681_);
v_busy_1704_ = lean_ctor_get_uint8(v___x_1703_, sizeof(void*)*10 + 2);
lean_dec(v___x_1703_);
if (v_busy_1704_ == 0)
{
lean_object* v___y_1706_; uint8_t v___x_1729_; lean_object* v___x_1730_; lean_object* v_model_1731_; lean_object* v_live_1732_; lean_object* v_next_1733_; lean_object* v_tables_1734_; uint8_t v_dirty_1735_; uint8_t v_scheduled_1736_; lean_object* v_queue_1737_; lean_object* v_subs_1738_; lean_object* v_handlers_1739_; lean_object* v_nextSub_1740_; lean_object* v_touched_1741_; lean_object* v_ports_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1752_; 
v___x_1729_ = 1;
v___x_1730_ = lean_st_ref_take(v_ref_1681_);
v_model_1731_ = lean_ctor_get(v___x_1730_, 0);
v_live_1732_ = lean_ctor_get(v___x_1730_, 1);
v_next_1733_ = lean_ctor_get(v___x_1730_, 2);
v_tables_1734_ = lean_ctor_get(v___x_1730_, 3);
v_dirty_1735_ = lean_ctor_get_uint8(v___x_1730_, sizeof(void*)*10);
v_scheduled_1736_ = lean_ctor_get_uint8(v___x_1730_, sizeof(void*)*10 + 1);
v_queue_1737_ = lean_ctor_get(v___x_1730_, 4);
v_subs_1738_ = lean_ctor_get(v___x_1730_, 5);
v_handlers_1739_ = lean_ctor_get(v___x_1730_, 6);
v_nextSub_1740_ = lean_ctor_get(v___x_1730_, 7);
v_touched_1741_ = lean_ctor_get(v___x_1730_, 8);
v_ports_1742_ = lean_ctor_get(v___x_1730_, 9);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1744_ = v___x_1730_;
v_isShared_1745_ = v_isSharedCheck_1752_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_ports_1742_);
lean_inc(v_touched_1741_);
lean_inc(v_nextSub_1740_);
lean_inc(v_handlers_1739_);
lean_inc(v_subs_1738_);
lean_inc(v_queue_1737_);
lean_inc(v_tables_1734_);
lean_inc(v_next_1733_);
lean_inc(v_live_1732_);
lean_inc(v_model_1731_);
lean_dec(v___x_1730_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1752_;
goto v_resetjp_1743_;
}
v___jp_1705_:
{
if (lean_obj_tag(v___y_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1717_; 
v_a_1707_ = lean_ctor_get(v___y_1706_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___y_1706_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1709_ = v___y_1706_;
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___y_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1717_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1711_ = lean_st_ref_take(v_ref_1681_);
v___x_1712_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_1704_, v___x_1711_);
v___x_1713_ = lean_st_ref_put(v_ref_1681_, v___x_1712_);
lean_dec(v_ref_1681_);
if (v_isShared_1710_ == 0)
{
v___x_1715_ = v___x_1709_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1707_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1728_; 
v_a_1718_ = lean_ctor_get(v___y_1706_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___y_1706_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1720_ = v___y_1706_;
v_isShared_1721_ = v_isSharedCheck_1728_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___y_1706_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1728_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1726_; 
v___x_1722_ = lean_st_ref_take(v_ref_1681_);
v___x_1723_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_1704_, v___x_1722_);
v___x_1724_ = lean_st_ref_put(v_ref_1681_, v___x_1723_);
lean_dec(v_ref_1681_);
if (v_isShared_1721_ == 0)
{
v___x_1726_ = v___x_1720_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1718_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_model_1731_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_live_1732_);
lean_ctor_set(v_reuseFailAlloc_1751_, 2, v_next_1733_);
lean_ctor_set(v_reuseFailAlloc_1751_, 3, v_tables_1734_);
lean_ctor_set(v_reuseFailAlloc_1751_, 4, v_queue_1737_);
lean_ctor_set(v_reuseFailAlloc_1751_, 5, v_subs_1738_);
lean_ctor_set(v_reuseFailAlloc_1751_, 6, v_handlers_1739_);
lean_ctor_set(v_reuseFailAlloc_1751_, 7, v_nextSub_1740_);
lean_ctor_set(v_reuseFailAlloc_1751_, 8, v_touched_1741_);
lean_ctor_set(v_reuseFailAlloc_1751_, 9, v_ports_1742_);
lean_ctor_set_uint8(v_reuseFailAlloc_1751_, sizeof(void*)*10, v_dirty_1735_);
lean_ctor_set_uint8(v_reuseFailAlloc_1751_, sizeof(void*)*10 + 1, v_scheduled_1736_);
v___x_1747_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*10 + 2, v___x_1729_);
v___x_1748_ = lean_st_ref_put(v_ref_1681_, v___x_1747_);
lean_inc_ref(v_c_1678_);
v___x_1749_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_1681_, v_c_1678_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v___x_1750_; 
lean_dec_ref_known(v___x_1749_, 1);
v___x_1750_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1678_);
v___y_1706_ = v___x_1750_;
goto v___jp_1705_;
}
else
{
lean_dec_ref(v_c_1678_);
v___y_1706_ = v___x_1749_;
goto v___jp_1705_;
}
}
}
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
lean_dec(v_ref_1681_);
lean_dec_ref(v_c_1678_);
v___x_1753_ = lean_box(0);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_1757_, lean_object* v_m_1758_){
_start:
{
lean_object* v___x_1760_; 
lean_inc_ref(v_c_1757_);
v___x_1760_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1757_, v_m_1758_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v___x_1761_; 
lean_dec_ref_known(v___x_1760_, 1);
v___x_1761_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1757_);
lean_dec_ref(v_c_1757_);
return v___x_1761_;
}
else
{
lean_dec_ref(v_c_1757_);
return v___x_1760_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_1762_, lean_object* v_as_x27_1763_, lean_object* v_b_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1762_, v_as_x27_1763_, v_b_1764_);
lean_dec(v_as_x27_1763_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_1767_, lean_object* v_c_1768_, lean_object* v_as_1769_, lean_object* v_sz_1770_, lean_object* v_i_1771_, lean_object* v_b_1772_, lean_object* v___y_1773_){
_start:
{
size_t v_sz_boxed_1774_; size_t v_i_boxed_1775_; lean_object* v_res_1776_; 
v_sz_boxed_1774_ = lean_unbox_usize(v_sz_1770_);
lean_dec(v_sz_1770_);
v_i_boxed_1775_ = lean_unbox_usize(v_i_1771_);
lean_dec(v_i_1771_);
v_res_1776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_1767_, v_c_1768_, v_as_1769_, v_sz_boxed_1774_, v_i_boxed_1775_, v_b_1772_);
lean_dec_ref(v_as_1769_);
lean_dec(v___x_1767_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_1777_, lean_object* v_name_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1777_, v_name_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_1781_, lean_object* v_c_1782_, lean_object* v_as_x27_1783_, lean_object* v_b_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1781_, v_c_1782_, v_as_x27_1783_, v_b_1784_);
lean_dec(v_as_x27_1783_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_1787_, lean_object* v_c_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_1787_, v_c_1788_);
lean_dec(v___x_1787_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_1791_, lean_object* v_e_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1791_, v_e_1792_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_1795_, lean_object* v_c_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1795_, v_c_1796_, v_a_1797_, v_a_1798_);
lean_dec(v___x_1795_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1801_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_1804_, lean_object* v_msg_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1804_, v_msg_1805_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_1808_, lean_object* v_Model_1809_, lean_object* v_Msg_1810_, lean_object* v_c_1811_, lean_object* v_e_1812_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1811_, v_e_1812_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_1815_, lean_object* v_Model_1816_, lean_object* v_Msg_1817_, lean_object* v_c_1818_, lean_object* v_e_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lasm_UI_Runtime_perform(v_Flags_1815_, v_Model_1816_, v_Msg_1817_, v_c_1818_, v_e_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_1822_, lean_object* v_Model_1823_, lean_object* v_Msg_1824_, lean_object* v_c_1825_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_1828_, lean_object* v_Model_1829_, lean_object* v_Msg_1830_, lean_object* v_c_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_1828_, v_Model_1829_, v_Msg_1830_, v_c_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_1834_, lean_object* v_Model_1835_, lean_object* v_Msg_1836_, lean_object* v_c_1837_, lean_object* v_name_1838_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1837_, v_name_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_1841_, lean_object* v_Model_1842_, lean_object* v_Msg_1843_, lean_object* v_c_1844_, lean_object* v_name_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lasm_UI_Runtime_listenPort(v_Flags_1841_, v_Model_1842_, v_Msg_1843_, v_c_1844_, v_name_1845_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_1848_, lean_object* v_Model_1849_, lean_object* v_Msg_1850_, lean_object* v_c_1851_, lean_object* v_msg_1852_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1851_, v_msg_1852_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_1855_, lean_object* v_Model_1856_, lean_object* v_Msg_1857_, lean_object* v_c_1858_, lean_object* v_msg_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lasm_UI_Runtime_deliver(v_Flags_1855_, v_Model_1856_, v_Msg_1857_, v_c_1858_, v_msg_1859_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_1862_, lean_object* v_m_1863_, lean_object* v_a_1864_, lean_object* v_fallback_1865_){
_start:
{
lean_object* v___x_1866_; 
v___x_1866_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1863_, v_a_1864_, v_fallback_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_1867_, lean_object* v_m_1868_, lean_object* v_a_1869_, lean_object* v_fallback_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_1867_, v_m_1868_, v_a_1869_, v_fallback_1870_);
lean_dec(v_fallback_1870_);
lean_dec_ref(v_m_1868_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_1872_, lean_object* v_m_1873_, lean_object* v_a_1874_, lean_object* v_b_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_1873_, v_a_1874_, v_b_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_1877_, lean_object* v_as_1878_, lean_object* v_as_x27_1879_, lean_object* v_b_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1879_, v_b_1880_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_1884_, lean_object* v_as_1885_, lean_object* v_as_x27_1886_, lean_object* v_b_1887_, lean_object* v_a_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_1884_, v_as_1885_, v_as_x27_1886_, v_b_1887_, v_a_1888_);
lean_dec(v_as_x27_1886_);
lean_dec(v_as_1885_);
return v_res_1890_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_1891_, lean_object* v_m_1892_, lean_object* v_a_1893_){
_start:
{
uint8_t v___x_1894_; 
v___x_1894_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1892_, v_a_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_1895_, lean_object* v_m_1896_, lean_object* v_a_1897_){
_start:
{
uint8_t v_res_1898_; lean_object* v_r_1899_; 
v_res_1898_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_1895_, v_m_1896_, v_a_1897_);
lean_dec_ref(v_m_1896_);
v_r_1899_ = lean_box(v_res_1898_);
return v_r_1899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_1900_, lean_object* v_m_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_1901_, v_a_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1905_, v_a_1906_, v_a_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
lean_dec_ref(v_a_1911_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_1916_, lean_object* v_m_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1917_, v_a_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_1920_, lean_object* v_m_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_1920_, v_m_1921_, v_a_1922_);
lean_dec_ref(v_m_1921_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_1924_, lean_object* v_Model_1925_, lean_object* v___x_1926_, lean_object* v_Flags_1927_, lean_object* v_c_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_1926_, v_c_1928_, v_a_1929_, v_a_1930_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_1933_, lean_object* v_Model_1934_, lean_object* v___x_1935_, lean_object* v_Flags_1936_, lean_object* v_c_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_1933_, v_Model_1934_, v___x_1935_, v_Flags_1936_, v_c_1937_, v_a_1938_, v_a_1939_);
lean_dec(v___x_1935_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_1942_, lean_object* v_a_1943_, lean_object* v_as_1944_, size_t v_sz_1945_, size_t v_i_1946_, lean_object* v_b_1947_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1943_, v_as_1944_, v_sz_1945_, v_i_1946_, v_b_1947_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_1950_, lean_object* v_a_1951_, lean_object* v_as_1952_, lean_object* v_sz_1953_, lean_object* v_i_1954_, lean_object* v_b_1955_, lean_object* v___y_1956_){
_start:
{
size_t v_sz_boxed_1957_; size_t v_i_boxed_1958_; lean_object* v_res_1959_; 
v_sz_boxed_1957_ = lean_unbox_usize(v_sz_1953_);
lean_dec(v_sz_1953_);
v_i_boxed_1958_ = lean_unbox_usize(v_i_1954_);
lean_dec(v_i_1954_);
v_res_1959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_1950_, v_a_1951_, v_as_1952_, v_sz_boxed_1957_, v_i_boxed_1958_, v_b_1955_);
lean_dec_ref(v_as_1952_);
lean_dec_ref(v_a_1951_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_1960_, lean_object* v_Model_1961_, lean_object* v___x_1962_, lean_object* v_Flags_1963_, lean_object* v_c_1964_, lean_object* v_as_1965_, size_t v_sz_1966_, size_t v_i_1967_, lean_object* v_b_1968_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_1962_, v_c_1964_, v_as_1965_, v_sz_1966_, v_i_1967_, v_b_1968_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_1971_, lean_object* v_Model_1972_, lean_object* v___x_1973_, lean_object* v_Flags_1974_, lean_object* v_c_1975_, lean_object* v_as_1976_, lean_object* v_sz_1977_, lean_object* v_i_1978_, lean_object* v_b_1979_, lean_object* v___y_1980_){
_start:
{
size_t v_sz_boxed_1981_; size_t v_i_boxed_1982_; lean_object* v_res_1983_; 
v_sz_boxed_1981_ = lean_unbox_usize(v_sz_1977_);
lean_dec(v_sz_1977_);
v_i_boxed_1982_ = lean_unbox_usize(v_i_1978_);
lean_dec(v_i_1978_);
v_res_1983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_1971_, v_Model_1972_, v___x_1973_, v_Flags_1974_, v_c_1975_, v_as_1976_, v_sz_boxed_1981_, v_i_boxed_1982_, v_b_1979_);
lean_dec_ref(v_as_1976_);
lean_dec(v___x_1973_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_1984_, lean_object* v_m_1985_, lean_object* v_a_1986_, lean_object* v_fallback_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1985_, v_a_1986_, v_fallback_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_1989_, lean_object* v_m_1990_, lean_object* v_a_1991_, lean_object* v_fallback_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_1989_, v_m_1990_, v_a_1991_, v_fallback_1992_);
lean_dec(v_fallback_1992_);
lean_dec(v_a_1991_);
lean_dec_ref(v_m_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_1994_, lean_object* v_v_1995_, lean_object* v_Flags_1996_, lean_object* v_Model_1997_, lean_object* v_c_1998_, lean_object* v_as_1999_, lean_object* v_as_x27_2000_, lean_object* v_b_2001_, lean_object* v_a_2002_){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1995_, v_c_1998_, v_as_x27_2000_, v_b_2001_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2005_, lean_object* v_v_2006_, lean_object* v_Flags_2007_, lean_object* v_Model_2008_, lean_object* v_c_2009_, lean_object* v_as_2010_, lean_object* v_as_x27_2011_, lean_object* v_b_2012_, lean_object* v_a_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2005_, v_v_2006_, v_Flags_2007_, v_Model_2008_, v_c_2009_, v_as_2010_, v_as_x27_2011_, v_b_2012_, v_a_2013_);
lean_dec(v_as_x27_2011_);
lean_dec(v_as_2010_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2016_, lean_object* v_Flags_2017_, lean_object* v_Model_2018_, lean_object* v_c_2019_, lean_object* v_as_2020_, lean_object* v_as_x27_2021_, lean_object* v_b_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2019_, v_as_x27_2021_, v_b_2022_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2026_, lean_object* v_Flags_2027_, lean_object* v_Model_2028_, lean_object* v_c_2029_, lean_object* v_as_2030_, lean_object* v_as_x27_2031_, lean_object* v_b_2032_, lean_object* v_a_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2026_, v_Flags_2027_, v_Model_2028_, v_c_2029_, v_as_2030_, v_as_x27_2031_, v_b_2032_, v_a_2033_);
lean_dec(v_as_x27_2031_);
lean_dec(v_as_2030_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2036_, lean_object* v_Msg_2037_, lean_object* v___x_2038_, lean_object* v_Flags_2039_, lean_object* v_c_2040_, lean_object* v_inst_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v___x_2044_; 
v___x_2044_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2038_, v_c_2040_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2045_, lean_object* v_Msg_2046_, lean_object* v___x_2047_, lean_object* v_Flags_2048_, lean_object* v_c_2049_, lean_object* v_inst_2050_, lean_object* v_a_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2045_, v_Msg_2046_, v___x_2047_, v_Flags_2048_, v_c_2049_, v_inst_2050_, v_a_2051_);
lean_dec(v___x_2047_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1(lean_object* v_00_u03b2_2054_, lean_object* v_a_2055_, lean_object* v_fallback_2056_, lean_object* v_x_2057_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___redArg(v_a_2055_, v_fallback_2056_, v_x_2057_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2059_, lean_object* v_a_2060_, lean_object* v_fallback_2061_, lean_object* v_x_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__1(v_00_u03b2_2059_, v_a_2060_, v_fallback_2061_, v_x_2062_);
lean_dec(v_fallback_2061_);
return v_res_2063_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2064_, lean_object* v_a_2065_, lean_object* v_x_2066_){
_start:
{
uint8_t v___x_2067_; 
v___x_2067_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_a_2065_, v_x_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2068_, lean_object* v_a_2069_, lean_object* v_x_2070_){
_start:
{
uint8_t v_res_2071_; lean_object* v_r_2072_; 
v_res_2071_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(v_00_u03b2_2068_, v_a_2069_, v_x_2070_);
v_r_2072_ = lean_box(v_res_2071_);
return v_r_2072_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2073_, lean_object* v_data_2074_){
_start:
{
lean_object* v___x_2075_; 
v___x_2075_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_data_2074_);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5(lean_object* v_00_u03b2_2076_, lean_object* v_a_2077_, lean_object* v_b_2078_, lean_object* v_x_2079_){
_start:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__5___redArg(v_a_2077_, v_b_2078_, v_x_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9(lean_object* v_00_u03b2_2081_, lean_object* v_a_2082_, lean_object* v_x_2083_){
_start:
{
lean_object* v___x_2084_; 
v___x_2084_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__9___redArg(v_a_2082_, v_x_2083_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12(lean_object* v_00_u03b2_2085_, lean_object* v_a_2086_, lean_object* v_x_2087_){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__12___redArg(v_a_2086_, v_x_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18(lean_object* v_00_u03b2_2089_, lean_object* v_a_2090_, lean_object* v_fallback_2091_, lean_object* v_x_2092_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___redArg(v_a_2090_, v_fallback_2091_, v_x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18___boxed(lean_object* v_00_u03b2_2094_, lean_object* v_a_2095_, lean_object* v_fallback_2096_, lean_object* v_x_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__18(v_00_u03b2_2094_, v_a_2095_, v_fallback_2096_, v_x_2097_);
lean_dec(v_x_2097_);
lean_dec(v_fallback_2096_);
lean_dec(v_a_2095_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_2099_, lean_object* v_i_2100_, lean_object* v_source_2101_, lean_object* v_target_2102_){
_start:
{
lean_object* v___x_2103_; 
v___x_2103_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7___redArg(v_i_2100_, v_source_2101_, v_target_2102_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20(lean_object* v_00_u03b2_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4_spec__7_spec__20___redArg(v_x_2105_, v_x_2106_);
return v___x_2107_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
v___x_2111_ = lean_unsigned_to_nat(16u);
v___x_2112_ = lean_mk_array(v___x_2111_, v___x_2110_);
return v___x_2112_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2113_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2114_ = lean_unsigned_to_nat(0u);
v___x_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2114_);
lean_ctor_set(v___x_2115_, 1, v___x_2113_);
return v___x_2115_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
lean_ctor_set(v___x_2117_, 2, v___x_2116_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2118_){
_start:
{
lean_object* v_app_2120_; lean_object* v_ref_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2232_; 
v_app_2120_ = lean_ctor_get(v_c_2118_, 0);
v_ref_2121_ = lean_ctor_get(v_c_2118_, 1);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_c_2118_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2123_ = v_c_2118_;
v_isShared_2124_ = v_isSharedCheck_2232_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_ref_2121_);
lean_inc(v_app_2120_);
lean_dec(v_c_2118_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2232_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v_model_2126_; lean_object* v_live_2127_; lean_object* v_next_2128_; lean_object* v_tables_2129_; uint8_t v_dirty_2130_; uint8_t v_scheduled_2131_; lean_object* v_queue_2132_; uint8_t v_busy_2133_; lean_object* v_subs_2134_; lean_object* v_handlers_2135_; lean_object* v_nextSub_2136_; lean_object* v_touched_2137_; lean_object* v_ports_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2231_; 
v___x_2125_ = lean_st_ref_take(v_ref_2121_);
v_model_2126_ = lean_ctor_get(v___x_2125_, 0);
v_live_2127_ = lean_ctor_get(v___x_2125_, 1);
v_next_2128_ = lean_ctor_get(v___x_2125_, 2);
v_tables_2129_ = lean_ctor_get(v___x_2125_, 3);
v_dirty_2130_ = lean_ctor_get_uint8(v___x_2125_, sizeof(void*)*10);
v_scheduled_2131_ = lean_ctor_get_uint8(v___x_2125_, sizeof(void*)*10 + 1);
v_queue_2132_ = lean_ctor_get(v___x_2125_, 4);
v_busy_2133_ = lean_ctor_get_uint8(v___x_2125_, sizeof(void*)*10 + 2);
v_subs_2134_ = lean_ctor_get(v___x_2125_, 5);
v_handlers_2135_ = lean_ctor_get(v___x_2125_, 6);
v_nextSub_2136_ = lean_ctor_get(v___x_2125_, 7);
v_touched_2137_ = lean_ctor_get(v___x_2125_, 8);
v_ports_2138_ = lean_ctor_get(v___x_2125_, 9);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2140_ = v___x_2125_;
v_isShared_2141_ = v_isSharedCheck_2231_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_ports_2138_);
lean_inc(v_touched_2137_);
lean_inc(v_nextSub_2136_);
lean_inc(v_handlers_2135_);
lean_inc(v_subs_2134_);
lean_inc(v_queue_2132_);
lean_inc(v_tables_2129_);
lean_inc(v_next_2128_);
lean_inc(v_live_2127_);
lean_inc(v_model_2126_);
lean_dec(v___x_2125_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2231_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2142_ = lean_box(0);
v___x_2143_ = lean_unsigned_to_nat(0u);
v___x_2144_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2128_);
lean_inc(v_model_2126_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 8, v___x_2144_);
lean_ctor_set(v___x_2140_, 1, v___x_2142_);
v___x_2146_ = v___x_2140_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_model_2126_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v___x_2142_);
lean_ctor_set(v_reuseFailAlloc_2230_, 2, v_next_2128_);
lean_ctor_set(v_reuseFailAlloc_2230_, 3, v_tables_2129_);
lean_ctor_set(v_reuseFailAlloc_2230_, 4, v_queue_2132_);
lean_ctor_set(v_reuseFailAlloc_2230_, 5, v_subs_2134_);
lean_ctor_set(v_reuseFailAlloc_2230_, 6, v_handlers_2135_);
lean_ctor_set(v_reuseFailAlloc_2230_, 7, v_nextSub_2136_);
lean_ctor_set(v_reuseFailAlloc_2230_, 8, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2230_, 9, v_ports_2138_);
lean_ctor_set_uint8(v_reuseFailAlloc_2230_, sizeof(void*)*10, v_dirty_2130_);
lean_ctor_set_uint8(v_reuseFailAlloc_2230_, sizeof(void*)*10 + 1, v_scheduled_2131_);
lean_ctor_set_uint8(v_reuseFailAlloc_2230_, sizeof(void*)*10 + 2, v_busy_2133_);
v___x_2146_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_st_ref_put(v_ref_2121_, v___x_2146_);
if (v_dirty_2130_ == 0)
{
lean_object* v___x_2148_; lean_object* v_model_2149_; lean_object* v_next_2150_; lean_object* v_tables_2151_; uint8_t v_dirty_2152_; lean_object* v_queue_2153_; uint8_t v_busy_2154_; lean_object* v_subs_2155_; lean_object* v_handlers_2156_; lean_object* v_nextSub_2157_; lean_object* v_touched_2158_; lean_object* v_ports_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2169_; 
lean_dec_ref(v_touched_2137_);
lean_dec(v_next_2128_);
lean_dec(v_model_2126_);
lean_del_object(v___x_2123_);
lean_dec_ref(v_app_2120_);
v___x_2148_ = lean_st_ref_take(v_ref_2121_);
v_model_2149_ = lean_ctor_get(v___x_2148_, 0);
v_next_2150_ = lean_ctor_get(v___x_2148_, 2);
v_tables_2151_ = lean_ctor_get(v___x_2148_, 3);
v_dirty_2152_ = lean_ctor_get_uint8(v___x_2148_, sizeof(void*)*10);
v_queue_2153_ = lean_ctor_get(v___x_2148_, 4);
v_busy_2154_ = lean_ctor_get_uint8(v___x_2148_, sizeof(void*)*10 + 2);
v_subs_2155_ = lean_ctor_get(v___x_2148_, 5);
v_handlers_2156_ = lean_ctor_get(v___x_2148_, 6);
v_nextSub_2157_ = lean_ctor_get(v___x_2148_, 7);
v_touched_2158_ = lean_ctor_get(v___x_2148_, 8);
v_ports_2159_ = lean_ctor_get(v___x_2148_, 9);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2148_, 1);
lean_dec(v_unused_2170_);
v___x_2161_ = v___x_2148_;
v_isShared_2162_ = v_isSharedCheck_2169_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_ports_2159_);
lean_inc(v_touched_2158_);
lean_inc(v_nextSub_2157_);
lean_inc(v_handlers_2156_);
lean_inc(v_subs_2155_);
lean_inc(v_queue_2153_);
lean_inc(v_tables_2151_);
lean_inc(v_next_2150_);
lean_inc(v_model_2149_);
lean_dec(v___x_2148_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2169_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 1, v_live_2127_);
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_model_2149_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_live_2127_);
lean_ctor_set(v_reuseFailAlloc_2168_, 2, v_next_2150_);
lean_ctor_set(v_reuseFailAlloc_2168_, 3, v_tables_2151_);
lean_ctor_set(v_reuseFailAlloc_2168_, 4, v_queue_2153_);
lean_ctor_set(v_reuseFailAlloc_2168_, 5, v_subs_2155_);
lean_ctor_set(v_reuseFailAlloc_2168_, 6, v_handlers_2156_);
lean_ctor_set(v_reuseFailAlloc_2168_, 7, v_nextSub_2157_);
lean_ctor_set(v_reuseFailAlloc_2168_, 8, v_touched_2158_);
lean_ctor_set(v_reuseFailAlloc_2168_, 9, v_ports_2159_);
lean_ctor_set_uint8(v_reuseFailAlloc_2168_, sizeof(void*)*10, v_dirty_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2168_, sizeof(void*)*10 + 2, v_busy_2154_);
v___x_2164_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_ctor_set_uint8(v___x_2164_, sizeof(void*)*10 + 1, v_dirty_2130_);
v___x_2165_ = lean_st_ref_put(v_ref_2121_, v___x_2164_);
lean_dec(v_ref_2121_);
v___x_2166_ = l_ByteArray_empty;
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
return v___x_2167_;
}
}
}
else
{
lean_object* v_view_2171_; lean_object* v___x_2172_; lean_object* v___x_2174_; 
v_view_2171_ = lean_ctor_get(v_app_2120_, 2);
lean_inc_ref(v_view_2171_);
lean_dec_ref(v_app_2120_);
v___x_2172_ = lean_apply_1(v_view_2171_, v_model_2126_);
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 1);
lean_ctor_set(v___x_2123_, 1, v___x_2142_);
lean_ctor_set(v___x_2123_, 0, v___x_2172_);
v___x_2174_ = v___x_2123_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v___x_2142_);
v___x_2174_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2175_; lean_object* v_ops_2176_; lean_object* v_live_2177_; lean_object* v_next_2178_; uint8_t v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v_model_2182_; lean_object* v_live_2183_; lean_object* v_next_2184_; lean_object* v_tables_2185_; uint8_t v_dirty_2186_; uint8_t v_scheduled_2187_; lean_object* v_queue_2188_; uint8_t v_busy_2189_; lean_object* v_subs_2190_; lean_object* v_handlers_2191_; lean_object* v_nextSub_2192_; lean_object* v_touched_2193_; lean_object* v_ports_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2228_; 
v___x_2175_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2127_, v___x_2174_, v_next_2128_);
v_ops_2176_ = lean_ctor_get(v___x_2175_, 0);
lean_inc_ref(v_ops_2176_);
v_live_2177_ = lean_ctor_get(v___x_2175_, 1);
lean_inc_n(v_live_2177_, 2);
v_next_2178_ = lean_ctor_get(v___x_2175_, 2);
lean_inc(v_next_2178_);
lean_dec_ref(v___x_2175_);
v___x_2179_ = 0;
v___x_2180_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2177_, v_touched_2137_);
lean_dec_ref(v_touched_2137_);
v___x_2181_ = lean_st_ref_take(v_ref_2121_);
v_model_2182_ = lean_ctor_get(v___x_2181_, 0);
v_live_2183_ = lean_ctor_get(v___x_2181_, 1);
v_next_2184_ = lean_ctor_get(v___x_2181_, 2);
v_tables_2185_ = lean_ctor_get(v___x_2181_, 3);
v_dirty_2186_ = lean_ctor_get_uint8(v___x_2181_, sizeof(void*)*10);
v_scheduled_2187_ = lean_ctor_get_uint8(v___x_2181_, sizeof(void*)*10 + 1);
v_queue_2188_ = lean_ctor_get(v___x_2181_, 4);
v_busy_2189_ = lean_ctor_get_uint8(v___x_2181_, sizeof(void*)*10 + 2);
v_subs_2190_ = lean_ctor_get(v___x_2181_, 5);
v_handlers_2191_ = lean_ctor_get(v___x_2181_, 6);
v_nextSub_2192_ = lean_ctor_get(v___x_2181_, 7);
v_touched_2193_ = lean_ctor_get(v___x_2181_, 8);
v_ports_2194_ = lean_ctor_get(v___x_2181_, 9);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2196_ = v___x_2181_;
v_isShared_2197_ = v_isSharedCheck_2228_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_ports_2194_);
lean_inc(v_touched_2193_);
lean_inc(v_nextSub_2192_);
lean_inc(v_handlers_2191_);
lean_inc(v_subs_2190_);
lean_inc(v_queue_2188_);
lean_inc(v_tables_2185_);
lean_inc(v_next_2184_);
lean_inc(v_live_2183_);
lean_inc(v_model_2182_);
lean_dec(v___x_2181_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2228_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2198_; lean_object* v___x_2200_; 
v___x_2198_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 3, v___x_2198_);
v___x_2200_ = v___x_2196_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_model_2182_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_live_2183_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_next_2184_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v___x_2198_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_queue_2188_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v_subs_2190_);
lean_ctor_set(v_reuseFailAlloc_2227_, 6, v_handlers_2191_);
lean_ctor_set(v_reuseFailAlloc_2227_, 7, v_nextSub_2192_);
lean_ctor_set(v_reuseFailAlloc_2227_, 8, v_touched_2193_);
lean_ctor_set(v_reuseFailAlloc_2227_, 9, v_ports_2194_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*10, v_dirty_2186_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*10 + 1, v_scheduled_2187_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*10 + 2, v_busy_2189_);
v___x_2200_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v_fst_2204_; lean_object* v_snd_2205_; lean_object* v___x_2206_; lean_object* v_model_2207_; lean_object* v_queue_2208_; uint8_t v_busy_2209_; lean_object* v_subs_2210_; lean_object* v_handlers_2211_; lean_object* v_nextSub_2212_; lean_object* v_touched_2213_; lean_object* v_ports_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2223_; 
v___x_2201_ = lean_st_ref_put(v_ref_2121_, v___x_2200_);
v___x_2202_ = l_Array_append___redArg(v_ops_2176_, v___x_2180_);
lean_dec_ref(v___x_2180_);
v___x_2203_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2185_, v___x_2202_, v___x_2143_);
lean_dec_ref(v___x_2202_);
v_fst_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_fst_2204_);
v_snd_2205_ = lean_ctor_get(v___x_2203_, 1);
lean_inc(v_snd_2205_);
lean_dec_ref(v___x_2203_);
v___x_2206_ = lean_st_ref_take(v_ref_2121_);
v_model_2207_ = lean_ctor_get(v___x_2206_, 0);
v_queue_2208_ = lean_ctor_get(v___x_2206_, 4);
v_busy_2209_ = lean_ctor_get_uint8(v___x_2206_, sizeof(void*)*10 + 2);
v_subs_2210_ = lean_ctor_get(v___x_2206_, 5);
v_handlers_2211_ = lean_ctor_get(v___x_2206_, 6);
v_nextSub_2212_ = lean_ctor_get(v___x_2206_, 7);
v_touched_2213_ = lean_ctor_get(v___x_2206_, 8);
v_ports_2214_ = lean_ctor_get(v___x_2206_, 9);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2223_ == 0)
{
lean_object* v_unused_2224_; lean_object* v_unused_2225_; lean_object* v_unused_2226_; 
v_unused_2224_ = lean_ctor_get(v___x_2206_, 3);
lean_dec(v_unused_2224_);
v_unused_2225_ = lean_ctor_get(v___x_2206_, 2);
lean_dec(v_unused_2225_);
v_unused_2226_ = lean_ctor_get(v___x_2206_, 1);
lean_dec(v_unused_2226_);
v___x_2216_ = v___x_2206_;
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_ports_2214_);
lean_inc(v_touched_2213_);
lean_inc(v_nextSub_2212_);
lean_inc(v_handlers_2211_);
lean_inc(v_subs_2210_);
lean_inc(v_queue_2208_);
lean_inc(v_model_2207_);
lean_dec(v___x_2206_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2223_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 3, v_snd_2205_);
lean_ctor_set(v___x_2216_, 2, v_next_2178_);
lean_ctor_set(v___x_2216_, 1, v_live_2177_);
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_model_2207_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_live_2177_);
lean_ctor_set(v_reuseFailAlloc_2222_, 2, v_next_2178_);
lean_ctor_set(v_reuseFailAlloc_2222_, 3, v_snd_2205_);
lean_ctor_set(v_reuseFailAlloc_2222_, 4, v_queue_2208_);
lean_ctor_set(v_reuseFailAlloc_2222_, 5, v_subs_2210_);
lean_ctor_set(v_reuseFailAlloc_2222_, 6, v_handlers_2211_);
lean_ctor_set(v_reuseFailAlloc_2222_, 7, v_nextSub_2212_);
lean_ctor_set(v_reuseFailAlloc_2222_, 8, v_touched_2213_);
lean_ctor_set(v_reuseFailAlloc_2222_, 9, v_ports_2214_);
lean_ctor_set_uint8(v_reuseFailAlloc_2222_, sizeof(void*)*10 + 2, v_busy_2209_);
v___x_2219_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_ctor_set_uint8(v___x_2219_, sizeof(void*)*10, v___x_2179_);
lean_ctor_set_uint8(v___x_2219_, sizeof(void*)*10 + 1, v___x_2179_);
v___x_2220_ = lean_st_ref_put(v_ref_2121_, v___x_2219_);
lean_dec(v_ref_2121_);
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v_fst_2204_);
return v___x_2221_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2233_, lean_object* v_a_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2236_, lean_object* v_Model_2237_, lean_object* v_Msg_2238_, lean_object* v_c_2239_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2239_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2242_, lean_object* v_Model_2243_, lean_object* v_Msg_2244_, lean_object* v_c_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lasm_UI_Runtime_frame(v_Flags_2242_, v_Model_2243_, v_Msg_2244_, v_c_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2248_, lean_object* v_____r_2249_, lean_object* v_levels_2250_){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2252_ = lean_unsigned_to_nat(2u);
v___x_2253_ = lean_nat_add(v_snd_2248_, v___x_2252_);
v___x_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2254_, 0, v_levels_2250_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2257_, lean_object* v_____r_2258_, lean_object* v_levels_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2257_, v_____r_2258_, v_levels_2259_);
lean_dec(v_snd_2257_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2262_, lean_object* v_fst_2263_, lean_object* v_x_2264_){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_box(0);
v___x_2267_ = lean_apply_3(v___f_2262_, v___x_2266_, v_fst_2263_, lean_box(0));
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2268_, lean_object* v_fst_2269_, lean_object* v_x_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2268_, v_fst_2269_, v_x_2270_);
lean_dec(v_x_2270_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2273_, lean_object* v_fst_2274_, lean_object* v_x_2275_){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_box(0);
v___x_2278_ = lean_apply_3(v___f_2273_, v___x_2277_, v_fst_2274_, lean_box(0));
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2279_, lean_object* v_fst_2280_, lean_object* v_x_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2279_, v_fst_2280_, v_x_2281_);
lean_dec_ref(v_x_2281_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2284_, lean_object* v___x_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v___y_2289_; lean_object* v_fst_2309_; lean_object* v_snd_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2361_; 
v_fst_2309_ = lean_ctor_get(v_a_2286_, 0);
v_snd_2310_ = lean_ctor_get(v_a_2286_, 1);
v_isSharedCheck_2361_ = !lean_is_exclusive(v_a_2286_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2312_ = v_a_2286_;
v_isShared_2313_ = v_isSharedCheck_2361_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_snd_2310_);
lean_inc(v_fst_2309_);
lean_dec(v_a_2286_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2361_;
goto v_resetjp_2311_;
}
v___jp_2288_:
{
if (lean_obj_tag(v___y_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2300_; 
v_a_2290_ = lean_ctor_get(v___y_2289_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___y_2289_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2292_ = v___y_2289_;
v_isShared_2293_ = v_isSharedCheck_2300_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___y_2289_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2300_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
if (lean_obj_tag(v_a_2290_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; 
v_a_2294_ = lean_ctor_get(v_a_2290_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v_a_2290_, 1);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v_a_2294_);
v___x_2296_ = v___x_2292_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2294_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
else
{
lean_object* v_a_2298_; 
lean_del_object(v___x_2292_);
v_a_2298_ = lean_ctor_get(v_a_2290_, 0);
lean_inc(v_a_2298_);
lean_dec_ref_known(v_a_2290_, 1);
v_a_2286_ = v_a_2298_;
goto _start;
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
v_a_2301_ = lean_ctor_get(v___y_2289_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___y_2289_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___y_2289_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___y_2289_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; 
v___x_2314_ = lean_unsigned_to_nat(1u);
v___x_2315_ = lean_nat_add(v_snd_2310_, v___x_2314_);
v___x_2316_ = lean_array_get_size(v_items_2284_);
v___x_2317_ = lean_nat_dec_lt(v___x_2315_, v___x_2316_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2319_; 
lean_dec(v___x_2315_);
if (v_isShared_2313_ == 0)
{
v___x_2319_ = v___x_2312_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v_snd_2310_);
v___x_2319_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
return v___x_2320_;
}
}
else
{
lean_object* v___x_2322_; lean_object* v___f_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2322_ = lean_box(0);
lean_inc(v_snd_2310_);
v___f_2323_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2323_, 0, v_snd_2310_);
v___x_2324_ = lean_array_get_borrowed(v___x_2322_, v_items_2284_, v_snd_2310_);
v___x_2325_ = lean_array_get(v___x_2322_, v_items_2284_, v___x_2315_);
lean_dec(v___x_2315_);
if (lean_obj_tag(v___x_2324_) == 3)
{
if (lean_obj_tag(v___x_2325_) == 7)
{
double v_n_2326_; lean_object* v_items_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2352_; 
v_n_2326_ = lean_ctor_get_float(v___x_2324_, 0);
v_items_2327_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2329_ = v___x_2325_;
v_isShared_2330_ = v_isSharedCheck_2352_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_items_2327_);
lean_dec(v___x_2325_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2352_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
uint64_t v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2331_ = lean_float_to_uint64(v_n_2326_);
v___x_2332_ = lean_uint64_to_nat(v___x_2331_);
v___x_2333_ = lean_array_get_size(v___x_2285_);
v___x_2334_ = lean_nat_dec_lt(v___x_2332_, v___x_2333_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
lean_dec(v___x_2332_);
lean_del_object(v___x_2329_);
lean_dec_ref(v_items_2327_);
lean_del_object(v___x_2312_);
lean_dec(v_snd_2310_);
v___x_2335_ = lean_box(0);
v___x_2336_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2323_, v_fst_2309_, v___x_2335_);
v___y_2289_ = v___x_2336_;
goto v___jp_2288_;
}
else
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_array_fget_borrowed(v___x_2285_, v___x_2332_);
lean_dec(v___x_2332_);
if (lean_obj_tag(v___x_2337_) == 1)
{
lean_object* v_attrs_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2343_; 
lean_del_object(v___x_2329_);
lean_dec_ref(v___f_2323_);
v_attrs_2338_ = lean_ctor_get(v___x_2337_, 3);
v___x_2339_ = lean_array_to_list(v_items_2327_);
v___x_2340_ = lean_box(0);
v___x_2341_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(v___x_2339_, v___x_2340_);
lean_inc(v_attrs_2338_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 1, v___x_2341_);
lean_ctor_set(v___x_2312_, 0, v_attrs_2338_);
v___x_2343_ = v___x_2312_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_attrs_2338_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v___x_2341_);
v___x_2343_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2344_ = lean_array_push(v_fst_2309_, v___x_2343_);
v___x_2345_ = lean_box(0);
v___x_2346_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2310_, v___x_2345_, v___x_2344_);
lean_dec(v_snd_2310_);
v___y_2289_ = v___x_2346_;
goto v___jp_2288_;
}
}
else
{
lean_object* v___x_2349_; 
lean_dec_ref(v_items_2327_);
lean_del_object(v___x_2312_);
lean_dec(v_snd_2310_);
lean_inc(v___x_2337_);
if (v_isShared_2330_ == 0)
{
lean_ctor_set_tag(v___x_2329_, 1);
lean_ctor_set(v___x_2329_, 0, v___x_2337_);
v___x_2349_ = v___x_2329_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2337_);
v___x_2349_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2350_; 
v___x_2350_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2323_, v_fst_2309_, v___x_2349_);
lean_dec_ref(v___x_2349_);
v___y_2289_ = v___x_2350_;
goto v___jp_2288_;
}
}
}
}
}
else
{
lean_object* v___x_2354_; 
lean_dec(v_snd_2310_);
lean_inc_ref(v___x_2324_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 1, v___x_2325_);
lean_ctor_set(v___x_2312_, 0, v___x_2324_);
v___x_2354_ = v___x_2312_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2324_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v___x_2325_);
v___x_2354_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2355_; 
v___x_2355_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2323_, v_fst_2309_, v___x_2354_);
lean_dec_ref(v___x_2354_);
v___y_2289_ = v___x_2355_;
goto v___jp_2288_;
}
}
}
else
{
lean_object* v___x_2358_; 
lean_dec(v_snd_2310_);
lean_inc(v___x_2324_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 1, v___x_2325_);
lean_ctor_set(v___x_2312_, 0, v___x_2324_);
v___x_2358_ = v___x_2312_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2324_);
lean_ctor_set(v_reuseFailAlloc_2360_, 1, v___x_2325_);
v___x_2358_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
lean_object* v___x_2359_; 
v___x_2359_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2323_, v_fst_2309_, v___x_2358_);
lean_dec_ref(v___x_2358_);
v___y_2289_ = v___x_2359_;
goto v___jp_2288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_2362_, lean_object* v___x_2363_, lean_object* v_a_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2362_, v___x_2363_, v_a_2364_);
lean_dec_ref(v___x_2363_);
lean_dec_ref(v_items_2362_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_2367_, lean_object* v_as_2368_, size_t v_sz_2369_, size_t v_i_2370_, lean_object* v_b_2371_){
_start:
{
uint8_t v___x_2373_; 
v___x_2373_ = lean_usize_dec_lt(v_i_2370_, v_sz_2369_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
lean_dec_ref(v_c_2367_);
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_b_2371_);
return v___x_2374_;
}
else
{
lean_object* v___x_2375_; lean_object* v_a_2376_; lean_object* v___x_2377_; 
v___x_2375_ = lean_box(0);
v_a_2376_ = lean_array_uget_borrowed(v_as_2368_, v_i_2370_);
lean_inc(v_a_2376_);
lean_inc_ref(v_c_2367_);
v___x_2377_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2367_, v_a_2376_);
if (lean_obj_tag(v___x_2377_) == 0)
{
size_t v___x_2378_; size_t v___x_2379_; 
lean_dec_ref_known(v___x_2377_, 1);
v___x_2378_ = ((size_t)1ULL);
v___x_2379_ = lean_usize_add(v_i_2370_, v___x_2378_);
v_i_2370_ = v___x_2379_;
v_b_2371_ = v___x_2375_;
goto _start;
}
else
{
lean_dec_ref(v_c_2367_);
return v___x_2377_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_2381_, lean_object* v_as_2382_, lean_object* v_sz_2383_, lean_object* v_i_2384_, lean_object* v_b_2385_, lean_object* v___y_2386_){
_start:
{
size_t v_sz_boxed_2387_; size_t v_i_boxed_2388_; lean_object* v_res_2389_; 
v_sz_boxed_2387_ = lean_unbox_usize(v_sz_2383_);
lean_dec(v_sz_2383_);
v_i_boxed_2388_ = lean_unbox_usize(v_i_2384_);
lean_dec(v_i_2384_);
v_res_2389_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2381_, v_as_2382_, v_sz_boxed_2387_, v_i_boxed_2388_, v_b_2385_);
lean_dec_ref(v_as_2382_);
return v_res_2389_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = lean_unsigned_to_nat(0u);
v___x_2391_ = lean_nat_to_int(v___x_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_2400_, size_t v_i_2401_, lean_object* v_bs_2402_){
_start:
{
uint8_t v___x_2403_; 
v___x_2403_ = lean_usize_dec_lt(v_i_2401_, v_sz_2400_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_bs_2402_);
return v___x_2404_;
}
else
{
lean_object* v_v_2405_; lean_object* v___x_2406_; lean_object* v_bs_x27_2407_; lean_object* v_a_2409_; 
v_v_2405_ = lean_array_uget(v_bs_2402_, v_i_2401_);
v___x_2406_ = lean_unsigned_to_nat(0u);
v_bs_x27_2407_ = lean_array_uset(v_bs_2402_, v_i_2401_, v___x_2406_);
switch(lean_obj_tag(v_v_2405_))
{
case 3:
{
double v_n_2418_; lean_object* v___x_2419_; 
v_n_2418_ = lean_ctor_get_float(v_v_2405_, 0);
lean_dec_ref_known(v_v_2405_, 0);
v___x_2419_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2418_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v___x_2420_; 
lean_dec_ref(v_bs_x27_2407_);
v___x_2420_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_2420_;
}
else
{
lean_object* v_val_2421_; 
v_val_2421_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_val_2421_);
lean_dec_ref_known(v___x_2419_, 1);
v_a_2409_ = v_val_2421_;
goto v___jp_2408_;
}
}
case 5:
{
lean_object* v_i_2422_; 
v_i_2422_ = lean_ctor_get(v_v_2405_, 0);
lean_inc(v_i_2422_);
lean_dec_ref_known(v_v_2405_, 1);
v_a_2409_ = v_i_2422_;
goto v___jp_2408_;
}
default: 
{
lean_object* v___x_2423_; 
lean_dec_ref(v_bs_x27_2407_);
lean_dec(v_v_2405_);
v___x_2423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_2423_;
}
}
v___jp_2408_:
{
lean_object* v___x_2410_; uint8_t v___x_2411_; 
v___x_2410_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_2411_ = lean_int_dec_le(v___x_2410_, v_a_2409_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; 
lean_dec(v_a_2409_);
lean_dec_ref(v_bs_x27_2407_);
v___x_2412_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_2412_;
}
else
{
lean_object* v___x_2413_; size_t v___x_2414_; size_t v___x_2415_; lean_object* v___x_2416_; 
v___x_2413_ = l_Int_toNat(v_a_2409_);
lean_dec(v_a_2409_);
v___x_2414_ = ((size_t)1ULL);
v___x_2415_ = lean_usize_add(v_i_2401_, v___x_2414_);
v___x_2416_ = lean_array_uset(v_bs_x27_2407_, v_i_2401_, v___x_2413_);
v_i_2401_ = v___x_2415_;
v_bs_2402_ = v___x_2416_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_2424_, lean_object* v_i_2425_, lean_object* v_bs_2426_){
_start:
{
size_t v_sz_boxed_2427_; size_t v_i_boxed_2428_; lean_object* v_res_2429_; 
v_sz_boxed_2427_ = lean_unbox_usize(v_sz_2424_);
lean_dec(v_sz_2424_);
v_i_boxed_2428_ = lean_unbox_usize(v_i_2425_);
lean_dec(v_i_2425_);
v_res_2429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_2427_, v_i_boxed_2428_, v_bs_2426_);
return v_res_2429_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0(void){
_start:
{
uint8_t v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = 0;
v___x_2431_ = l_Lasm_UI_Runtime_answer(v___x_2430_, v___x_2430_, v___x_2430_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_2438_, lean_object* v_args_2439_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; uint8_t v___x_2449_; 
v___x_2447_ = lean_array_get_size(v_args_2439_);
v___x_2448_ = lean_unsigned_to_nat(3u);
v___x_2449_ = lean_nat_dec_eq(v___x_2447_, v___x_2448_);
if (v___x_2449_ == 0)
{
lean_dec_ref(v_c_2438_);
goto v___jp_2441_;
}
else
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = lean_unsigned_to_nat(1u);
v___x_2451_ = lean_array_fget_borrowed(v_args_2439_, v___x_2450_);
if (lean_obj_tag(v___x_2451_) == 4)
{
lean_object* v_s_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v_s_2452_ = lean_ctor_get(v___x_2451_, 0);
v___x_2453_ = lean_unsigned_to_nat(2u);
v___x_2454_ = lean_array_fget_borrowed(v_args_2439_, v___x_2453_);
if (lean_obj_tag(v___x_2454_) == 7)
{
lean_object* v_items_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v_items_2455_ = lean_ctor_get(v___x_2454_, 0);
v___x_2456_ = lean_unsigned_to_nat(0u);
v___x_2457_ = lean_array_fget_borrowed(v_args_2439_, v___x_2456_);
if (lean_obj_tag(v___x_2457_) == 7)
{
lean_object* v_items_2458_; size_t v_sz_2459_; size_t v___x_2460_; lean_object* v___x_2461_; 
v_items_2458_ = lean_ctor_get(v___x_2457_, 0);
v_sz_2459_ = lean_array_size(v_items_2458_);
v___x_2460_ = ((size_t)0ULL);
lean_inc_ref(v_items_2458_);
v___x_2461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_2459_, v___x_2460_, v_items_2458_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_dec_ref_known(v___x_2461_, 1);
lean_dec_ref(v_c_2438_);
goto v___jp_2444_;
}
else
{
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_dec_ref_known(v___x_2461_, 1);
lean_dec_ref(v_c_2438_);
goto v___jp_2444_;
}
else
{
lean_object* v_a_2462_; lean_object* v_ref_2463_; lean_object* v___x_2464_; lean_object* v_live_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v_model_2470_; lean_object* v_live_2471_; lean_object* v_next_2472_; lean_object* v_tables_2473_; uint8_t v_dirty_2474_; uint8_t v_scheduled_2475_; lean_object* v_queue_2476_; uint8_t v_busy_2477_; lean_object* v_subs_2478_; lean_object* v_handlers_2479_; lean_object* v_nextSub_2480_; lean_object* v_touched_2481_; lean_object* v_ports_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2531_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v_ref_2463_ = lean_ctor_get(v_c_2438_, 1);
v___x_2464_ = lean_st_ref_get(v_ref_2463_);
v_live_2465_ = lean_ctor_get(v___x_2464_, 1);
lean_inc(v_live_2465_);
lean_dec(v___x_2464_);
v___x_2466_ = lean_array_to_list(v_a_2462_);
v___x_2467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_2468_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_2465_, v___x_2466_, v___x_2467_);
v___x_2469_ = lean_st_ref_take(v_ref_2463_);
v_model_2470_ = lean_ctor_get(v___x_2469_, 0);
v_live_2471_ = lean_ctor_get(v___x_2469_, 1);
v_next_2472_ = lean_ctor_get(v___x_2469_, 2);
v_tables_2473_ = lean_ctor_get(v___x_2469_, 3);
v_dirty_2474_ = lean_ctor_get_uint8(v___x_2469_, sizeof(void*)*10);
v_scheduled_2475_ = lean_ctor_get_uint8(v___x_2469_, sizeof(void*)*10 + 1);
v_queue_2476_ = lean_ctor_get(v___x_2469_, 4);
v_busy_2477_ = lean_ctor_get_uint8(v___x_2469_, sizeof(void*)*10 + 2);
v_subs_2478_ = lean_ctor_get(v___x_2469_, 5);
v_handlers_2479_ = lean_ctor_get(v___x_2469_, 6);
v_nextSub_2480_ = lean_ctor_get(v___x_2469_, 7);
v_touched_2481_ = lean_ctor_get(v___x_2469_, 8);
v_ports_2482_ = lean_ctor_get(v___x_2469_, 9);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2484_ = v___x_2469_;
v_isShared_2485_ = v_isSharedCheck_2531_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_ports_2482_);
lean_inc(v_touched_2481_);
lean_inc(v_nextSub_2480_);
lean_inc(v_handlers_2479_);
lean_inc(v_subs_2478_);
lean_inc(v_queue_2476_);
lean_inc(v_tables_2473_);
lean_inc(v_next_2472_);
lean_inc(v_live_2471_);
lean_inc(v_model_2470_);
lean_dec(v___x_2469_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2531_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2486_ = lean_array_push(v_touched_2481_, v___x_2466_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 8, v___x_2486_);
v___x_2488_ = v___x_2484_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_model_2470_);
lean_ctor_set(v_reuseFailAlloc_2530_, 1, v_live_2471_);
lean_ctor_set(v_reuseFailAlloc_2530_, 2, v_next_2472_);
lean_ctor_set(v_reuseFailAlloc_2530_, 3, v_tables_2473_);
lean_ctor_set(v_reuseFailAlloc_2530_, 4, v_queue_2476_);
lean_ctor_set(v_reuseFailAlloc_2530_, 5, v_subs_2478_);
lean_ctor_set(v_reuseFailAlloc_2530_, 6, v_handlers_2479_);
lean_ctor_set(v_reuseFailAlloc_2530_, 7, v_nextSub_2480_);
lean_ctor_set(v_reuseFailAlloc_2530_, 8, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2530_, 9, v_ports_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2530_, sizeof(void*)*10, v_dirty_2474_);
lean_ctor_set_uint8(v_reuseFailAlloc_2530_, sizeof(void*)*10 + 1, v_scheduled_2475_);
lean_ctor_set_uint8(v_reuseFailAlloc_2530_, sizeof(void*)*10 + 2, v_busy_2477_);
v___x_2488_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2489_ = lean_st_ref_put(v_ref_2463_, v___x_2488_);
v___x_2490_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_2491_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2455_, v___x_2468_, v___x_2490_);
lean_dec_ref(v___x_2468_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; lean_object* v_fst_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v_msgs_2497_; uint8_t v_preventDefault_2498_; uint8_t v_stopPropagation_2499_; lean_object* v___x_2500_; size_t v_sz_2501_; lean_object* v___x_2502_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
v_fst_2493_ = lean_ctor_get(v_a_2492_, 0);
lean_inc(v_fst_2493_);
lean_dec(v_a_2492_);
v___x_2494_ = lean_array_to_list(v_fst_2493_);
v___x_2495_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__2));
lean_inc_ref(v_s_2452_);
v___x_2496_ = l_Lasm_UI_Runtime_decide___redArg(v_s_2452_, v___x_2494_, v___x_2495_);
v_msgs_2497_ = lean_ctor_get(v___x_2496_, 0);
lean_inc_ref(v_msgs_2497_);
v_preventDefault_2498_ = lean_ctor_get_uint8(v___x_2496_, sizeof(void*)*1);
v_stopPropagation_2499_ = lean_ctor_get_uint8(v___x_2496_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_2496_);
v___x_2500_ = lean_box(0);
v_sz_2501_ = lean_array_size(v_msgs_2497_);
lean_inc_ref(v_c_2438_);
v___x_2502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2438_, v_msgs_2497_, v_sz_2501_, v___x_2460_, v___x_2500_);
lean_dec_ref(v_msgs_2497_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v___x_2503_; lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2513_; 
lean_dec_ref_known(v___x_2502_, 1);
v___x_2503_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_2438_);
lean_dec_ref(v_c_2438_);
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2513_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2513_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
uint8_t v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2511_; 
v___x_2508_ = lean_unbox(v_a_2504_);
lean_dec(v_a_2504_);
v___x_2509_ = l_Lasm_UI_Runtime_answer(v___x_2508_, v_preventDefault_2498_, v_stopPropagation_2499_);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2509_);
v___x_2511_ = v___x_2506_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2509_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
lean_dec_ref(v_c_2438_);
v_a_2514_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2502_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2502_);
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
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec_ref(v_c_2438_);
v_a_2522_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2491_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2491_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
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
lean_dec_ref(v_c_2438_);
goto v___jp_2444_;
}
}
else
{
lean_dec_ref(v_c_2438_);
goto v___jp_2441_;
}
}
else
{
lean_dec_ref(v_c_2438_);
goto v___jp_2441_;
}
}
v___jp_2441_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
return v___x_2443_;
}
v___jp_2444_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
return v___x_2446_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_2532_, lean_object* v_args_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2532_, v_args_2533_);
lean_dec_ref(v_args_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_2536_, lean_object* v_Model_2537_, lean_object* v_Msg_2538_, lean_object* v_c_2539_, lean_object* v_args_2540_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2539_, v_args_2540_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_2543_, lean_object* v_Model_2544_, lean_object* v_Msg_2545_, lean_object* v_c_2546_, lean_object* v_args_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lasm_UI_Runtime_onEvent(v_Flags_2543_, v_Model_2544_, v_Msg_2545_, v_c_2546_, v_args_2547_);
lean_dec_ref(v_args_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_2550_, lean_object* v_items_2551_, lean_object* v___x_2552_, lean_object* v_inst_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2551_, v___x_2552_, v_a_2554_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_2557_, lean_object* v_items_2558_, lean_object* v___x_2559_, lean_object* v_inst_2560_, lean_object* v_a_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_2557_, v_items_2558_, v___x_2559_, v_inst_2560_, v_a_2561_);
lean_dec_ref(v___x_2559_);
lean_dec_ref(v_items_2558_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_2564_, lean_object* v_Flags_2565_, lean_object* v_Model_2566_, lean_object* v_c_2567_, lean_object* v_as_2568_, size_t v_sz_2569_, size_t v_i_2570_, lean_object* v_b_2571_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2567_, v_as_2568_, v_sz_2569_, v_i_2570_, v_b_2571_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_2574_, lean_object* v_Flags_2575_, lean_object* v_Model_2576_, lean_object* v_c_2577_, lean_object* v_as_2578_, lean_object* v_sz_2579_, lean_object* v_i_2580_, lean_object* v_b_2581_, lean_object* v___y_2582_){
_start:
{
size_t v_sz_boxed_2583_; size_t v_i_boxed_2584_; lean_object* v_res_2585_; 
v_sz_boxed_2583_ = lean_unbox_usize(v_sz_2579_);
lean_dec(v_sz_2579_);
v_i_boxed_2584_ = lean_unbox_usize(v_i_2580_);
lean_dec(v_i_2580_);
v_res_2585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_2574_, v_Flags_2575_, v_Model_2576_, v_c_2577_, v_as_2578_, v_sz_boxed_2583_, v_i_boxed_2584_, v_b_2581_);
lean_dec_ref(v_as_2578_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_2586_, lean_object* v_x_2587_, lean_object* v_x_2588_){
_start:
{
if (lean_obj_tag(v_x_2588_) == 0)
{
lean_dec_ref(v___y_2586_);
return v_x_2587_;
}
else
{
lean_object* v_head_2589_; lean_object* v_tail_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v_head_2589_ = lean_ctor_get(v_x_2588_, 0);
lean_inc(v_head_2589_);
v_tail_2590_ = lean_ctor_get(v_x_2588_, 1);
lean_inc(v_tail_2590_);
lean_dec_ref_known(v_x_2588_, 2);
lean_inc_ref(v___y_2586_);
v___x_2591_ = lean_apply_1(v_head_2589_, v___y_2586_);
v___x_2592_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_2587_, v___x_2591_);
v_x_2587_ = v___x_2592_;
v_x_2588_ = v_tail_2590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_2599_, lean_object* v_args_2600_){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = lean_array_get_size(v_args_2600_);
v___x_2607_ = lean_nat_dec_lt(v___x_2605_, v___x_2606_);
if (v___x_2607_ == 0)
{
lean_dec_ref(v_c_2599_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2608_; 
v___x_2608_ = lean_array_fget_borrowed(v_args_2600_, v___x_2605_);
if (lean_obj_tag(v___x_2608_) == 3)
{
double v_n_2609_; lean_object* v___y_2611_; lean_object* v___x_2649_; uint8_t v___x_2650_; 
v_n_2609_ = lean_ctor_get_float(v___x_2608_, 0);
v___x_2649_ = lean_unsigned_to_nat(1u);
v___x_2650_ = lean_nat_dec_lt(v___x_2649_, v___x_2606_);
if (v___x_2650_ == 0)
{
goto v___jp_2647_;
}
else
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_array_fget_borrowed(v_args_2600_, v___x_2649_);
if (lean_obj_tag(v___x_2651_) == 7)
{
lean_object* v_items_2652_; 
v_items_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc_ref(v_items_2652_);
v___y_2611_ = v_items_2652_;
goto v___jp_2610_;
}
else
{
goto v___jp_2647_;
}
}
v___jp_2610_:
{
lean_object* v_ref_2612_; lean_object* v___x_2613_; lean_object* v_handlers_2614_; uint64_t v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v_msgs_2621_; uint8_t v_preventDefault_2622_; uint8_t v_stopPropagation_2623_; lean_object* v___x_2624_; size_t v_sz_2625_; size_t v___x_2626_; lean_object* v___x_2627_; 
v_ref_2612_ = lean_ctor_get(v_c_2599_, 1);
v___x_2613_ = lean_st_ref_get(v_ref_2612_);
v_handlers_2614_ = lean_ctor_get(v___x_2613_, 6);
lean_inc_ref(v_handlers_2614_);
lean_dec(v___x_2613_);
v___x_2615_ = lean_float_to_uint64(v_n_2609_);
v___x_2616_ = lean_uint64_to_nat(v___x_2615_);
v___x_2617_ = lean_box(0);
v___x_2618_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2614_, v___x_2616_, v___x_2617_);
lean_dec(v___x_2616_);
lean_dec_ref(v_handlers_2614_);
v___x_2619_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__1));
v___x_2620_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_2611_, v___x_2619_, v___x_2618_);
v_msgs_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc_ref(v_msgs_2621_);
v_preventDefault_2622_ = lean_ctor_get_uint8(v___x_2620_, sizeof(void*)*1);
v_stopPropagation_2623_ = lean_ctor_get_uint8(v___x_2620_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_2620_);
v___x_2624_ = lean_box(0);
v_sz_2625_ = lean_array_size(v_msgs_2621_);
v___x_2626_ = ((size_t)0ULL);
lean_inc_ref(v_c_2599_);
v___x_2627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2599_, v_msgs_2621_, v_sz_2625_, v___x_2626_, v___x_2624_);
lean_dec_ref(v_msgs_2621_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v___x_2628_; lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2638_; 
lean_dec_ref_known(v___x_2627_, 1);
v___x_2628_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_2599_);
lean_dec_ref(v_c_2599_);
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2631_ = v___x_2628_;
v_isShared_2632_ = v_isSharedCheck_2638_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2628_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2638_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
uint8_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2636_; 
v___x_2633_ = lean_unbox(v_a_2629_);
lean_dec(v_a_2629_);
v___x_2634_ = l_Lasm_UI_Runtime_answer(v___x_2633_, v_preventDefault_2622_, v_stopPropagation_2623_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2634_);
v___x_2636_ = v___x_2631_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v___x_2634_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
else
{
lean_object* v_a_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2646_; 
lean_dec_ref(v_c_2599_);
v_a_2639_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2646_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2641_ = v___x_2627_;
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_a_2639_);
lean_dec(v___x_2627_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2644_; 
if (v_isShared_2642_ == 0)
{
v___x_2644_ = v___x_2641_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_a_2639_);
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
v___jp_2647_:
{
lean_object* v___x_2648_; 
v___x_2648_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_2611_ = v___x_2648_;
goto v___jp_2610_;
}
}
else
{
lean_dec_ref(v_c_2599_);
goto v___jp_2602_;
}
}
v___jp_2602_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
return v___x_2604_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_2653_, lean_object* v_args_2654_, lean_object* v_a_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_2653_, v_args_2654_);
lean_dec_ref(v_args_2654_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_2657_, lean_object* v_Model_2658_, lean_object* v_Msg_2659_, lean_object* v_c_2660_, lean_object* v_args_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_2660_, v_args_2661_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_2664_, lean_object* v_Model_2665_, lean_object* v_Msg_2666_, lean_object* v_c_2667_, lean_object* v_args_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Lasm_UI_Runtime_onSub(v_Flags_2664_, v_Model_2665_, v_Msg_2666_, v_c_2667_, v_args_2668_);
lean_dec_ref(v_args_2668_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_2671_, lean_object* v___y_2672_, lean_object* v_x_2673_, lean_object* v_x_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_2672_, v_x_2673_, v_x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Lasm_UI_instHotModel___redArg();
return v_res_2681_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lasm_UI_instHotModel___redArg();
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_2683_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_2685_, lean_object* v_d_2686_){
_start:
{
lean_object* v_fromJS_2687_; lean_object* v___x_2688_; 
v_fromJS_2687_ = lean_ctor_get(v_inst_2685_, 0);
lean_inc_ref(v_fromJS_2687_);
lean_dec_ref(v_inst_2685_);
v___x_2688_ = lean_apply_1(v_fromJS_2687_, v_d_2686_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v___x_2689_; 
lean_dec_ref_known(v___x_2688_, 1);
v___x_2689_ = lean_box(0);
return v___x_2689_;
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
v_a_2690_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2688_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2688_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_2698_, lean_object* v_inst_2699_){
_start:
{
lean_object* v___f_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___f_2700_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2700_, 0, v_inst_2699_);
v___x_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_inst_2698_);
v___x_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___f_2700_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_2704_, lean_object* v_inst_2705_, lean_object* v_inst_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_2705_, v_inst_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__0(lean_object* v_a_2708_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2709_, 0, v_a_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1(lean_object* v_a_2710_, lean_object* v_x_2711_){
_start:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_io_promise_resolve(v___x_2713_, v_a_2710_);
v___x_2715_ = lean_box(0);
v___x_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__1___boxed(lean_object* v_a_2717_, lean_object* v_x_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lasm_UI_afterFrame___lam__1(v_a_2717_, v_x_2718_);
lean_dec_ref(v_x_2718_);
lean_dec(v_a_2717_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2(lean_object* v_a_2721_, lean_object* v___f_2722_, lean_object* v_x_2723_){
_start:
{
if (lean_obj_tag(v_x_2723_) == 0)
{
lean_object* v___x_2725_; 
lean_dec_ref(v___f_2722_);
v___x_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2725_, 0, v_x_2723_);
return v___x_2725_;
}
else
{
lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2736_; 
v_isSharedCheck_2736_ = !lean_is_exclusive(v_x_2723_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; 
v_unused_2737_ = lean_ctor_get(v_x_2723_, 0);
lean_dec(v_unused_2737_);
v___x_2727_ = v_x_2723_;
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
else
{
lean_dec(v_x_2723_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2734_; 
v___x_2729_ = l_IO_Promise_result_x21___redArg(v_a_2721_);
v___x_2730_ = lean_unsigned_to_nat(0u);
v___x_2731_ = 0;
v___x_2732_ = lean_task_map(v___f_2722_, v___x_2729_, v___x_2730_, v___x_2731_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___x_2732_);
v___x_2734_ = v___x_2727_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2732_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__2___boxed(lean_object* v_a_2738_, lean_object* v___f_2739_, lean_object* v_x_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lasm_UI_afterFrame___lam__2(v_a_2738_, v___f_2739_, v_x_2740_);
lean_dec(v_a_2738_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3(lean_object* v___f_2743_, lean_object* v_x_2744_){
_start:
{
if (lean_obj_tag(v_x_2744_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v___f_2743_);
v_a_2746_ = lean_ctor_get(v_x_2744_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2748_ = v_x_2744_;
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v_x_2744_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
return v___x_2752_;
}
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2774_; 
v_a_2755_ = lean_ctor_get(v_x_2744_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2757_ = v_x_2744_;
v_isShared_2758_ = v_isSharedCheck_2774_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v_x_2744_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2774_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2759_; uint8_t v___x_2760_; lean_object* v_val_2762_; lean_object* v___x_2765_; 
v___x_2759_ = lean_unsigned_to_nat(0u);
v___x_2760_ = 0;
v___x_2765_ = l_Lasm_UI_Runtime_Dom_afterFrame(v_a_2755_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2768_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v_a_2766_);
v___x_2768_ = v___x_2757_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
v_val_2762_ = v___x_2768_;
goto v___jp_2761_;
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; 
v_a_2770_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2765_, 1);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 0);
lean_ctor_set(v___x_2757_, 0, v_a_2770_);
v___x_2772_ = v___x_2757_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2770_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
v_val_2762_ = v___x_2772_;
goto v___jp_2761_;
}
}
v___jp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_val_2762_);
v___x_2764_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2759_, v___x_2760_, v___x_2763_, v___f_2743_);
return v___x_2764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__3___boxed(lean_object* v___f_2775_, lean_object* v_x_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l_Lasm_UI_afterFrame___lam__3(v___f_2775_, v_x_2776_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4(lean_object* v___f_2779_, lean_object* v_x_2780_){
_start:
{
if (lean_obj_tag(v_x_2780_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2790_; 
lean_dec_ref(v___f_2779_);
v_a_2782_ = lean_ctor_get(v_x_2780_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_x_2780_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2784_ = v_x_2780_;
v_isShared_2785_ = v_isSharedCheck_2790_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v_x_2780_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2790_;
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
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
return v___x_2788_;
}
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2813_; 
v_a_2791_ = lean_ctor_get(v_x_2780_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v_x_2780_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2793_ = v_x_2780_;
v_isShared_2794_ = v_isSharedCheck_2813_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v_x_2780_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2813_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___f_2795_; lean_object* v___f_2796_; lean_object* v___f_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; lean_object* v_val_2801_; lean_object* v___x_2804_; 
lean_inc(v_a_2791_);
v___f_2795_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2795_, 0, v_a_2791_);
v___f_2796_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2796_, 0, v_a_2791_);
lean_closure_set(v___f_2796_, 1, v___f_2779_);
v___f_2797_ = lean_alloc_closure((void*)(l_Lasm_UI_afterFrame___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2797_, 0, v___f_2796_);
v___x_2798_ = lean_unsigned_to_nat(0u);
v___x_2799_ = 0;
v___x_2804_ = l_Lasm_JS_Function_ofSyncFn(v___f_2795_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2807_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2805_);
lean_dec_ref_known(v___x_2804_, 1);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 0, v_a_2805_);
v___x_2807_ = v___x_2793_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2805_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
v_val_2801_ = v___x_2807_;
goto v___jp_2800_;
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; 
v_a_2809_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2804_, 1);
if (v_isShared_2794_ == 0)
{
lean_ctor_set_tag(v___x_2793_, 0);
lean_ctor_set(v___x_2793_, 0, v_a_2809_);
v___x_2811_ = v___x_2793_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
v_val_2801_ = v___x_2811_;
goto v___jp_2800_;
}
}
v___jp_2800_:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v_val_2801_);
v___x_2803_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2798_, v___x_2799_, v___x_2802_, v___f_2797_);
return v___x_2803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___lam__4___boxed(lean_object* v___f_2814_, lean_object* v_x_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_UI_afterFrame___lam__4(v___f_2814_, v_x_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame(){
_start:
{
lean_object* v___f_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___f_2822_ = ((lean_object*)(l_Lasm_UI_afterFrame___closed__1));
v___x_2823_ = lean_unsigned_to_nat(0u);
v___x_2824_ = 0;
v___x_2825_ = lean_io_promise_new();
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
v___x_2828_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2823_, v___x_2824_, v___x_2827_, v___f_2822_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_afterFrame___boxed(lean_object* v_a_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_Lasm_UI_afterFrame();
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_2831_, lean_object* v_x_2832_){
_start:
{
lean_object* v___x_2834_; lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2843_; 
v___x_2834_ = l_Lasm_UI_Runtime_frame___redArg(v___x_2831_);
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2843_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2843_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2841_; 
v___x_2839_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2839_, 0, v_a_2835_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v___x_2839_);
v___x_2841_ = v___x_2837_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2839_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_2844_, lean_object* v_x_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_2844_, v_x_2845_);
lean_dec_ref(v_x_2845_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v_app_2848_, lean_object* v___x_2849_, lean_object* v___x_2850_, lean_object* v_args_2851_){
_start:
{
lean_object* v_onUrlChange_2865_; lean_object* v___y_2867_; lean_object* v___x_2883_; uint8_t v___x_2884_; 
v_onUrlChange_2865_ = lean_ctor_get(v_app_2848_, 4);
lean_inc(v_onUrlChange_2865_);
lean_dec_ref(v_app_2848_);
v___x_2883_ = lean_array_get_size(v_args_2851_);
v___x_2884_ = lean_nat_dec_lt(v___x_2850_, v___x_2883_);
if (v___x_2884_ == 0)
{
lean_object* v___x_2885_; 
v___x_2885_ = lean_box(0);
v___y_2867_ = v___x_2885_;
goto v___jp_2866_;
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2886_ = lean_array_fget_borrowed(v_args_2851_, v___x_2850_);
lean_inc(v___x_2886_);
v___x_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
v___y_2867_ = v___x_2887_;
goto v___jp_2866_;
}
v___jp_2853_:
{
lean_object* v___x_2854_; lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2864_; 
v___x_2854_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_2849_);
lean_dec_ref(v___x_2849_);
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2857_ = v___x_2854_;
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2854_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2859_; uint8_t v___x_2860_; lean_object* v___x_2862_; 
v___x_2859_ = lean_alloc_ctor(2, 0, 1);
v___x_2860_ = lean_unbox(v_a_2855_);
lean_dec(v_a_2855_);
lean_ctor_set_uint8(v___x_2859_, 0, v___x_2860_);
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 0, v___x_2859_);
v___x_2862_ = v___x_2857_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2859_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
v___jp_2866_:
{
if (lean_obj_tag(v_onUrlChange_2865_) == 1)
{
if (lean_obj_tag(v___y_2867_) == 1)
{
lean_object* v_val_2868_; 
v_val_2868_ = lean_ctor_get(v___y_2867_, 0);
lean_inc(v_val_2868_);
lean_dec_ref_known(v___y_2867_, 1);
if (lean_obj_tag(v_val_2868_) == 4)
{
lean_object* v_val_2869_; lean_object* v_s_2870_; lean_object* v___x_2871_; 
v_val_2869_ = lean_ctor_get(v_onUrlChange_2865_, 0);
lean_inc(v_val_2869_);
lean_dec_ref_known(v_onUrlChange_2865_, 1);
v_s_2870_ = lean_ctor_get(v_val_2868_, 0);
lean_inc_ref(v_s_2870_);
lean_dec_ref_known(v_val_2868_, 1);
v___x_2871_ = l_Lasm_UI_Url_parse(v_s_2870_);
if (lean_obj_tag(v___x_2871_) == 1)
{
lean_object* v_val_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v_val_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_val_2872_);
lean_dec_ref_known(v___x_2871_, 1);
v___x_2873_ = lean_apply_1(v_val_2869_, v_val_2872_);
lean_inc_ref(v___x_2849_);
v___x_2874_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_2849_, v___x_2873_);
if (lean_obj_tag(v___x_2874_) == 0)
{
lean_dec_ref_known(v___x_2874_, 1);
goto v___jp_2853_;
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec_ref(v___x_2849_);
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2874_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2874_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
else
{
lean_dec(v___x_2871_);
lean_dec(v_val_2869_);
goto v___jp_2853_;
}
}
else
{
lean_dec(v_val_2868_);
lean_dec_ref_known(v_onUrlChange_2865_, 1);
goto v___jp_2853_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_2865_, 1);
lean_dec(v___y_2867_);
goto v___jp_2853_;
}
}
else
{
lean_dec(v___y_2867_);
lean_dec(v_onUrlChange_2865_);
goto v___jp_2853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v_app_2888_, lean_object* v___x_2889_, lean_object* v___x_2890_, lean_object* v_args_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lasm_UI_App_run___redArg___lam__1(v_app_2888_, v___x_2889_, v___x_2890_, v_args_2891_);
lean_dec_ref(v_args_2891_);
lean_dec(v___x_2890_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_2894_, lean_object* v___x_2895_, lean_object* v_a_2896_, lean_object* v_x_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v___y_2901_; lean_object* v___x_2919_; 
v___x_2919_ = l_Lasm_UI_Runtime_perform___redArg(v___x_2895_, v_a_2896_);
if (lean_obj_tag(v___x_2919_) == 0)
{
v___y_2901_ = v___x_2919_;
goto v___jp_2900_;
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2920_);
lean_dec_ref_known(v___x_2919_, 1);
v___x_2921_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_2922_ = l_Lasm_UI_Runtime_report(v___x_2921_, v_a_2920_);
v___y_2901_ = v___x_2922_;
goto v___jp_2900_;
}
v___jp_2900_:
{
if (lean_obj_tag(v___y_2901_) == 0)
{
lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2909_; 
v_isSharedCheck_2909_ = !lean_is_exclusive(v___y_2901_);
if (v_isSharedCheck_2909_ == 0)
{
lean_object* v_unused_2910_; 
v_unused_2910_ = lean_ctor_get(v___y_2901_, 0);
lean_dec(v_unused_2910_);
v___x_2903_ = v___y_2901_;
v_isShared_2904_ = v_isSharedCheck_2909_;
goto v_resetjp_2902_;
}
else
{
lean_dec(v___y_2901_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2909_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; lean_object* v___x_2907_; 
v___x_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2894_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2905_);
v___x_2907_ = v___x_2903_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
v_a_2911_ = lean_ctor_get(v___y_2901_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___y_2901_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___y_2901_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___y_2901_);
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
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_2923_, lean_object* v___x_2924_, lean_object* v_a_2925_, lean_object* v_x_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_2923_, v___x_2924_, v_a_2925_, v_x_2926_, v___y_2927_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_2930_, lean_object* v___x_2931_, lean_object* v_d_2932_){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_apply_1(v_val_2930_, v_d_2932_);
if (lean_obj_tag(v___x_2934_) == 1)
{
lean_object* v_val_2935_; lean_object* v___x_2936_; 
v_val_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_val_2935_);
lean_dec_ref_known(v___x_2934_, 1);
lean_inc_ref(v___x_2931_);
v___x_2936_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_2931_, v_val_2935_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v___x_2937_; 
lean_dec_ref_known(v___x_2936_, 1);
v___x_2937_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_2931_);
lean_dec_ref(v___x_2931_);
return v___x_2937_;
}
else
{
lean_dec_ref(v___x_2931_);
return v___x_2936_;
}
}
else
{
lean_object* v___x_2938_; 
lean_dec(v___x_2934_);
v___x_2938_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_2931_);
lean_dec_ref(v___x_2931_);
return v___x_2938_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_2939_, lean_object* v___x_2940_, lean_object* v_d_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_2939_, v___x_2940_, v_d_2941_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_2944_){
_start:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = lean_st_ref_get(v_val_2944_);
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_2948_);
lean_dec(v_val_2948_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_2951_, lean_object* v_____do__lift_2952_){
_start:
{
lean_object* v_model_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v_model_2954_ = lean_ctor_get(v_____do__lift_2952_, 0);
lean_inc(v_model_2954_);
lean_dec_ref(v_____do__lift_2952_);
v___x_2955_ = lean_apply_1(v_val_2951_, v_model_2954_);
v___x_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2955_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_2957_, lean_object* v_____do__lift_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_2957_, v_____do__lift_2958_);
return v_res_2960_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l_instMonadEIO___redArg();
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_2974_, lean_object* v_hot_2975_, lean_object* v_app_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; uint8_t v___y_2985_; lean_object* v___y_2986_; uint8_t v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; uint8_t v___y_2993_; lean_object* v___x_3083_; 
v___x_2978_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3083_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v___x_3085_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3086_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3087_ = l_Lasm_JS_Data_field(v_a_3084_, v___x_3086_);
v___x_3088_ = l_Lasm_JS_decodeAs___redArg(v_inst_2974_, v___x_3085_, v___x_3087_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3090_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; uint8_t v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; uint8_t v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; uint8_t v___y_3126_; uint8_t v___y_3127_; lean_object* v_fst_3176_; lean_object* v_snd_3177_; lean_object* v___y_3205_; lean_object* v___y_3211_; lean_object* v___x_3229_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3089_);
lean_dec_ref_known(v___x_3088_, 1);
v___x_3090_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3229_ = l_Lasm_JS_Data_field(v_a_3084_, v___x_3090_);
lean_dec(v_a_3084_);
if (lean_obj_tag(v___x_3229_) == 4)
{
lean_object* v_s_3230_; lean_object* v___x_3231_; 
v_s_3230_ = lean_ctor_get(v___x_3229_, 0);
lean_inc_ref(v_s_3230_);
lean_dec_ref_known(v___x_3229_, 1);
v___x_3231_ = l_Lasm_UI_Url_parse(v_s_3230_);
if (lean_obj_tag(v___x_3231_) == 0)
{
goto v___jp_3227_;
}
else
{
lean_object* v_val_3232_; 
v_val_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_val_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v___y_3211_ = v_val_3232_;
goto v___jp_3210_;
}
}
else
{
lean_dec(v___x_3229_);
goto v___jp_3227_;
}
v___jp_3091_:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v_onUrlChange_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3104_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___y_3098_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v_onUrlChange_3106_ = lean_ctor_get(v_app_2976_, 4);
lean_inc(v_onUrlChange_3106_);
lean_dec_ref(v_app_2976_);
v___x_3107_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___y_3103_);
lean_ctor_set(v___x_3107_, 1, v___x_3104_);
v___x_3108_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3108_, 0, v___y_3100_);
lean_ctor_set(v___x_3108_, 1, v___x_3104_);
v___x_3109_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3105_);
v___x_3111_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
lean_ctor_set(v___x_3112_, 1, v___x_3107_);
v___x_3113_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
lean_ctor_set(v___x_3114_, 1, v___x_3108_);
v___x_3115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___y_3102_);
lean_ctor_set(v___x_3115_, 1, v___x_3104_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3090_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3106_) == 0)
{
v___y_2980_ = v___y_3092_;
v___y_2981_ = v___x_3112_;
v___y_2982_ = v___y_3093_;
v___y_2983_ = v___y_3095_;
v___y_2984_ = v___y_3097_;
v___y_2985_ = v___y_3096_;
v___y_2986_ = v___x_3114_;
v___y_2987_ = v___y_3099_;
v___y_2988_ = v___y_3101_;
v___y_2989_ = v___y_3094_;
v___y_2990_ = v___x_3110_;
v___y_2991_ = v___x_3116_;
v___y_2992_ = v___x_3117_;
v___y_2993_ = v___y_3099_;
goto v___jp_2979_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3106_, 1);
v___y_2980_ = v___y_3092_;
v___y_2981_ = v___x_3112_;
v___y_2982_ = v___y_3093_;
v___y_2983_ = v___y_3095_;
v___y_2984_ = v___y_3097_;
v___y_2985_ = v___y_3096_;
v___y_2986_ = v___x_3114_;
v___y_2987_ = v___y_3099_;
v___y_2988_ = v___y_3101_;
v___y_2989_ = v___y_3094_;
v___y_2990_ = v___x_3110_;
v___y_2991_ = v___x_3116_;
v___y_2992_ = v___x_3117_;
v___y_2993_ = v___y_3096_;
goto v___jp_2979_;
}
}
v___jp_3118_:
{
lean_object* v___x_3128_; 
v___x_3128_ = l_Lasm_JS_Function_ofSyncFn(v___y_3119_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3129_);
lean_dec_ref_known(v___x_3128_, 1);
lean_inc_ref(v___y_3121_);
v___x_3130_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3130_, 0, lean_box(0));
lean_closure_set(v___x_3130_, 1, lean_box(0));
lean_closure_set(v___x_3130_, 2, lean_box(0));
lean_closure_set(v___x_3130_, 3, v___y_3121_);
v___x_3131_ = l_Lasm_JS_Function_ofSyncFn(v___x_3130_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v___x_3131_, 1);
lean_inc_ref(v___y_3121_);
v___x_3133_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3133_, 0, lean_box(0));
lean_closure_set(v___x_3133_, 1, lean_box(0));
lean_closure_set(v___x_3133_, 2, lean_box(0));
lean_closure_set(v___x_3133_, 3, v___y_3121_);
v___x_3134_ = l_Lasm_JS_Function_ofSyncFn(v___x_3133_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3136_ = l_Lasm_JS_Function_ofSyncFn(v___y_3120_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_receive_3137_; 
v_receive_3137_ = lean_ctor_get(v_app_2976_, 5);
if (lean_obj_tag(v_receive_3137_) == 1)
{
lean_object* v_a_3138_; lean_object* v_val_3139_; lean_object* v___f_3140_; lean_object* v___x_3141_; 
v_a_3138_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3136_, 1);
v_val_3139_ = lean_ctor_get(v_receive_3137_, 0);
lean_inc_ref(v___y_3121_);
lean_inc(v_val_3139_);
v___f_3140_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3140_, 0, v_val_3139_);
lean_closure_set(v___f_3140_, 1, v___y_3121_);
v___x_3141_ = l_Lasm_UI_Mount_onMessage(v___f_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_dec_ref_known(v___x_3141_, 1);
lean_inc_ref(v___y_3121_);
v___y_3092_ = v___y_3121_;
v___y_3093_ = v___y_3122_;
v___y_3094_ = v___y_3124_;
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___y_3126_;
v___y_3097_ = v___y_3125_;
v___y_3098_ = v_a_3129_;
v___y_3099_ = v___y_3127_;
v___y_3100_ = v_a_3135_;
v___y_3101_ = v___y_3121_;
v___y_3102_ = v_a_3138_;
v___y_3103_ = v_a_3132_;
goto v___jp_3091_;
}
else
{
lean_dec(v_a_3138_);
lean_dec(v_a_3135_);
lean_dec(v_a_3132_);
lean_dec(v_a_3129_);
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v_app_2976_);
return v___x_3141_;
}
}
else
{
lean_object* v_a_3142_; 
v_a_3142_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3136_, 1);
lean_inc_ref(v___y_3121_);
v___y_3092_ = v___y_3121_;
v___y_3093_ = v___y_3122_;
v___y_3094_ = v___y_3124_;
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___y_3126_;
v___y_3097_ = v___y_3125_;
v___y_3098_ = v_a_3129_;
v___y_3099_ = v___y_3127_;
v___y_3100_ = v_a_3135_;
v___y_3101_ = v___y_3121_;
v___y_3102_ = v_a_3142_;
v___y_3103_ = v_a_3132_;
goto v___jp_3091_;
}
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
lean_dec(v_a_3135_);
lean_dec(v_a_3132_);
lean_dec(v_a_3129_);
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v_app_2976_);
v_a_3143_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3136_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3136_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec(v_a_3132_);
lean_dec(v_a_3129_);
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2976_);
v_a_3151_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3134_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3134_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3166_; 
lean_dec(v_a_3129_);
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2976_);
v_a_3159_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3161_ = v___x_3131_;
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3131_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3164_; 
if (v_isShared_3162_ == 0)
{
v___x_3164_ = v___x_3161_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3159_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec_ref(v_app_2976_);
v_a_3167_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3128_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3128_);
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
v___jp_3175_:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; uint8_t v___x_3183_; uint8_t v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v_save_x3f_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3202_; 
v___x_3178_ = lean_box(0);
v___x_3179_ = lean_unsigned_to_nat(1u);
v___x_3180_ = lean_unsigned_to_nat(0u);
v___x_3181_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3182_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3183_ = 1;
v___x_3184_ = 0;
v___x_3185_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__0));
v___x_3186_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3186_, 0, v_fst_3176_);
lean_ctor_set(v___x_3186_, 1, v___x_3178_);
lean_ctor_set(v___x_3186_, 2, v___x_3179_);
lean_ctor_set(v___x_3186_, 3, v___x_3182_);
lean_ctor_set(v___x_3186_, 4, v___x_3185_);
lean_ctor_set(v___x_3186_, 5, v___x_3181_);
lean_ctor_set(v___x_3186_, 6, v___x_3181_);
lean_ctor_set(v___x_3186_, 7, v___x_3179_);
lean_ctor_set(v___x_3186_, 8, v___x_3185_);
lean_ctor_set(v___x_3186_, 9, v___x_3178_);
lean_ctor_set_uint8(v___x_3186_, sizeof(void*)*10, v___x_3183_);
lean_ctor_set_uint8(v___x_3186_, sizeof(void*)*10 + 1, v___x_3184_);
lean_ctor_set_uint8(v___x_3186_, sizeof(void*)*10 + 2, v___x_3184_);
v___x_3187_ = lean_st_mk_ref(v___x_3186_);
v_save_x3f_3188_ = lean_ctor_get(v_hot_2975_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v_hot_2975_);
if (v_isSharedCheck_3202_ == 0)
{
lean_object* v_unused_3203_; 
v_unused_3203_ = lean_ctor_get(v_hot_2975_, 1);
lean_dec(v_unused_3203_);
v___x_3190_ = v_hot_2975_;
v_isShared_3191_ = v_isSharedCheck_3202_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_save_x3f_3188_);
lean_dec(v_hot_2975_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3202_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
lean_inc(v___x_3187_);
lean_inc_ref(v_app_2976_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 1, v___x_3187_);
lean_ctor_set(v___x_3190_, 0, v_app_2976_);
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v_app_2976_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v___x_3187_);
v___x_3193_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___f_3194_; lean_object* v___f_3195_; 
lean_inc_ref_n(v___x_3193_, 2);
v___f_3194_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3194_, 0, v___x_3193_);
lean_inc_ref(v_app_2976_);
v___f_3195_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3195_, 0, v_app_2976_);
lean_closure_set(v___f_3195_, 1, v___x_3193_);
lean_closure_set(v___f_3195_, 2, v___x_3180_);
if (lean_obj_tag(v_save_x3f_3188_) == 1)
{
lean_object* v_val_3196_; lean_object* v___f_3197_; lean_object* v___f_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v_val_3196_ = lean_ctor_get(v_save_x3f_3188_, 0);
lean_inc(v_val_3196_);
lean_dec_ref_known(v_save_x3f_3188_, 1);
lean_inc(v___x_3187_);
v___f_3197_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3197_, 0, v___x_3187_);
v___f_3198_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3198_, 0, v_val_3196_);
v___x_3199_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3199_, 0, lean_box(0));
lean_closure_set(v___x_3199_, 1, lean_box(0));
lean_closure_set(v___x_3199_, 2, lean_box(0));
lean_closure_set(v___x_3199_, 3, v___f_3197_);
lean_closure_set(v___x_3199_, 4, v___f_3198_);
v___x_3200_ = l_Lasm_UI_Mount_onHotSave(v___x_3199_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_dec_ref_known(v___x_3200_, 1);
v___y_3119_ = v___f_3194_;
v___y_3120_ = v___f_3195_;
v___y_3121_ = v___x_3193_;
v___y_3122_ = v___x_3180_;
v___y_3123_ = v_snd_3177_;
v___y_3124_ = v___x_3179_;
v___y_3125_ = v___x_3187_;
v___y_3126_ = v___x_3183_;
v___y_3127_ = v___x_3184_;
goto v___jp_3118_;
}
else
{
lean_dec_ref(v___f_3195_);
lean_dec_ref(v___f_3194_);
lean_dec_ref(v___x_3193_);
lean_dec(v___x_3187_);
lean_dec(v_snd_3177_);
lean_dec_ref(v_app_2976_);
return v___x_3200_;
}
}
else
{
lean_dec(v_save_x3f_3188_);
v___y_3119_ = v___f_3194_;
v___y_3120_ = v___f_3195_;
v___y_3121_ = v___x_3193_;
v___y_3122_ = v___x_3180_;
v___y_3123_ = v_snd_3177_;
v___y_3124_ = v___x_3179_;
v___y_3125_ = v___x_3187_;
v___y_3126_ = v___x_3183_;
v___y_3127_ = v___x_3184_;
goto v___jp_3118_;
}
}
}
}
v___jp_3204_:
{
lean_object* v_init_3206_; lean_object* v___x_3207_; lean_object* v_fst_3208_; lean_object* v_snd_3209_; 
v_init_3206_ = lean_ctor_get(v_app_2976_, 0);
lean_inc_ref(v_init_3206_);
v___x_3207_ = lean_apply_2(v_init_3206_, v_a_3089_, v___y_3205_);
v_fst_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_fst_3208_);
v_snd_3209_ = lean_ctor_get(v___x_3207_, 1);
lean_inc(v_snd_3209_);
lean_dec_ref(v___x_3207_);
v_fst_3176_ = v_fst_3208_;
v_snd_3177_ = v_snd_3209_;
goto v___jp_3175_;
}
v___jp_3210_:
{
lean_object* v_load_x3f_3212_; 
v_load_x3f_3212_ = lean_ctor_get(v_hot_2975_, 1);
if (lean_obj_tag(v_load_x3f_3212_) == 0)
{
v___y_3205_ = v___y_3211_;
goto v___jp_3204_;
}
else
{
lean_object* v_val_3213_; lean_object* v___x_3214_; 
v_val_3213_ = lean_ctor_get(v_load_x3f_3212_, 0);
v___x_3214_ = l_Lasm_UI_Mount_Raw_hotState();
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3214_, 1);
if (lean_obj_tag(v_a_3215_) == 0)
{
v___y_3205_ = v___y_3211_;
goto v___jp_3204_;
}
else
{
lean_object* v___x_3216_; 
lean_inc(v_val_3213_);
v___x_3216_ = lean_apply_1(v_val_3213_, v_a_3215_);
if (lean_obj_tag(v___x_3216_) == 0)
{
v___y_3205_ = v___y_3211_;
goto v___jp_3204_;
}
else
{
lean_object* v_val_3217_; lean_object* v___x_3218_; 
lean_dec_ref(v___y_3211_);
lean_dec(v_a_3089_);
v_val_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_val_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = lean_box(0);
v_fst_3176_ = v_val_3217_;
v_snd_3177_ = v___x_3218_;
goto v___jp_3175_;
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
lean_dec_ref(v___y_3211_);
lean_dec(v_a_3089_);
lean_dec_ref(v_app_2976_);
lean_dec_ref(v_hot_2975_);
v_a_3219_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3214_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3214_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
}
v___jp_3227_:
{
lean_object* v___x_3228_; 
v___x_3228_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__8));
v___y_3211_ = v___x_3228_;
goto v___jp_3210_;
}
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec(v_a_3084_);
lean_dec_ref(v_app_2976_);
lean_dec_ref(v_hot_2975_);
v_a_3233_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3088_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3088_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec_ref(v_app_2976_);
lean_dec_ref(v_hot_2975_);
lean_dec_ref(v_inst_2974_);
v_a_3241_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3083_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3083_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
v___jp_2979_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_2994_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2994_, 0, v___y_2993_);
lean_inc_ref(v___y_2992_);
v___x_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___y_2992_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
v___x_2996_ = lean_box(0);
v___x_2997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___y_2991_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___y_2986_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___y_2981_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___y_2990_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = l_Lasm_JS_obj(v___x_3001_);
v___x_3003_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3002_);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_object* v___x_3004_; lean_object* v_a_3005_; lean_object* v___x_3006_; 
lean_dec_ref_known(v___x_3003_, 1);
lean_inc_ref(v___y_2988_);
v___x_3004_ = l_Lasm_UI_Runtime_frame___redArg(v___y_2988_);
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref(v___x_3004_);
v___x_3006_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3005_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v___x_3007_; lean_object* v_model_3008_; lean_object* v_live_3009_; lean_object* v_next_3010_; lean_object* v_tables_3011_; uint8_t v_dirty_3012_; uint8_t v_scheduled_3013_; lean_object* v_queue_3014_; lean_object* v_subs_3015_; lean_object* v_handlers_3016_; lean_object* v_nextSub_3017_; lean_object* v_touched_3018_; lean_object* v_ports_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3082_; 
lean_dec_ref_known(v___x_3006_, 1);
v___x_3007_ = lean_st_ref_take(v___y_2984_);
v_model_3008_ = lean_ctor_get(v___x_3007_, 0);
v_live_3009_ = lean_ctor_get(v___x_3007_, 1);
v_next_3010_ = lean_ctor_get(v___x_3007_, 2);
v_tables_3011_ = lean_ctor_get(v___x_3007_, 3);
v_dirty_3012_ = lean_ctor_get_uint8(v___x_3007_, sizeof(void*)*10);
v_scheduled_3013_ = lean_ctor_get_uint8(v___x_3007_, sizeof(void*)*10 + 1);
v_queue_3014_ = lean_ctor_get(v___x_3007_, 4);
v_subs_3015_ = lean_ctor_get(v___x_3007_, 5);
v_handlers_3016_ = lean_ctor_get(v___x_3007_, 6);
v_nextSub_3017_ = lean_ctor_get(v___x_3007_, 7);
v_touched_3018_ = lean_ctor_get(v___x_3007_, 8);
v_ports_3019_ = lean_ctor_get(v___x_3007_, 9);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3021_ = v___x_3007_;
v_isShared_3022_ = v_isSharedCheck_3082_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_ports_3019_);
lean_inc(v_touched_3018_);
lean_inc(v_nextSub_3017_);
lean_inc(v_handlers_3016_);
lean_inc(v_subs_3015_);
lean_inc(v_queue_3014_);
lean_inc(v_tables_3011_);
lean_inc(v_next_3010_);
lean_inc(v_live_3009_);
lean_inc(v_model_3008_);
lean_dec(v___x_3007_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3082_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_model_3008_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_live_3009_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_next_3010_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v_tables_3011_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v_queue_3014_);
lean_ctor_set(v_reuseFailAlloc_3081_, 5, v_subs_3015_);
lean_ctor_set(v_reuseFailAlloc_3081_, 6, v_handlers_3016_);
lean_ctor_set(v_reuseFailAlloc_3081_, 7, v_nextSub_3017_);
lean_ctor_set(v_reuseFailAlloc_3081_, 8, v_touched_3018_);
lean_ctor_set(v_reuseFailAlloc_3081_, 9, v_ports_3019_);
lean_ctor_set_uint8(v_reuseFailAlloc_3081_, sizeof(void*)*10, v_dirty_3012_);
lean_ctor_set_uint8(v_reuseFailAlloc_3081_, sizeof(void*)*10 + 1, v_scheduled_3013_);
v___x_3024_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___f_3027_; lean_object* v___x_4994__overap_3028_; lean_object* v___x_3029_; 
lean_ctor_set_uint8(v___x_3024_, sizeof(void*)*10 + 2, v___y_2985_);
v___x_3025_ = lean_st_ref_put(v___y_2984_, v___x_3024_);
v___x_3026_ = lean_box(0);
v___f_3027_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3027_, 0, v___x_3026_);
lean_closure_set(v___f_3027_, 1, v___y_2980_);
v___x_4994__overap_3028_ = l_List_forIn_x27_loop___redArg(v___x_2978_, v___f_3027_, v___y_2983_, v___x_3026_);
lean_dec(v___y_2983_);
v___x_3029_ = lean_apply_1(v___x_4994__overap_3028_, lean_box(0));
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v___x_3030_; lean_object* v_model_3031_; lean_object* v_live_3032_; lean_object* v_next_3033_; lean_object* v_tables_3034_; uint8_t v_dirty_3035_; uint8_t v_scheduled_3036_; lean_object* v_queue_3037_; lean_object* v_subs_3038_; lean_object* v_handlers_3039_; lean_object* v_nextSub_3040_; lean_object* v_touched_3041_; lean_object* v_ports_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3080_; 
lean_dec_ref_known(v___x_3029_, 1);
v___x_3030_ = lean_st_ref_take(v___y_2984_);
v_model_3031_ = lean_ctor_get(v___x_3030_, 0);
v_live_3032_ = lean_ctor_get(v___x_3030_, 1);
v_next_3033_ = lean_ctor_get(v___x_3030_, 2);
v_tables_3034_ = lean_ctor_get(v___x_3030_, 3);
v_dirty_3035_ = lean_ctor_get_uint8(v___x_3030_, sizeof(void*)*10);
v_scheduled_3036_ = lean_ctor_get_uint8(v___x_3030_, sizeof(void*)*10 + 1);
v_queue_3037_ = lean_ctor_get(v___x_3030_, 4);
v_subs_3038_ = lean_ctor_get(v___x_3030_, 5);
v_handlers_3039_ = lean_ctor_get(v___x_3030_, 6);
v_nextSub_3040_ = lean_ctor_get(v___x_3030_, 7);
v_touched_3041_ = lean_ctor_get(v___x_3030_, 8);
v_ports_3042_ = lean_ctor_get(v___x_3030_, 9);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3044_ = v___x_3030_;
v_isShared_3045_ = v_isSharedCheck_3080_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_ports_3042_);
lean_inc(v_touched_3041_);
lean_inc(v_nextSub_3040_);
lean_inc(v_handlers_3039_);
lean_inc(v_subs_3038_);
lean_inc(v_queue_3037_);
lean_inc(v_tables_3034_);
lean_inc(v_next_3033_);
lean_inc(v_live_3032_);
lean_inc(v_model_3031_);
lean_dec(v___x_3030_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3080_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_model_3031_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v_live_3032_);
lean_ctor_set(v_reuseFailAlloc_3079_, 2, v_next_3033_);
lean_ctor_set(v_reuseFailAlloc_3079_, 3, v_tables_3034_);
lean_ctor_set(v_reuseFailAlloc_3079_, 4, v_queue_3037_);
lean_ctor_set(v_reuseFailAlloc_3079_, 5, v_subs_3038_);
lean_ctor_set(v_reuseFailAlloc_3079_, 6, v_handlers_3039_);
lean_ctor_set(v_reuseFailAlloc_3079_, 7, v_nextSub_3040_);
lean_ctor_set(v_reuseFailAlloc_3079_, 8, v_touched_3041_);
lean_ctor_set(v_reuseFailAlloc_3079_, 9, v_ports_3042_);
lean_ctor_set_uint8(v_reuseFailAlloc_3079_, sizeof(void*)*10, v_dirty_3035_);
lean_ctor_set_uint8(v_reuseFailAlloc_3079_, sizeof(void*)*10 + 1, v_scheduled_3036_);
v___x_3047_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v_model_3050_; lean_object* v_live_3051_; lean_object* v_next_3052_; lean_object* v_tables_3053_; uint8_t v_dirty_3054_; uint8_t v_scheduled_3055_; lean_object* v_queue_3056_; uint8_t v_busy_3057_; lean_object* v_subs_3058_; lean_object* v_handlers_3059_; lean_object* v_nextSub_3060_; lean_object* v_touched_3061_; lean_object* v_ports_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3078_; 
lean_ctor_set_uint8(v___x_3047_, sizeof(void*)*10 + 2, v___y_2987_);
v___x_3048_ = lean_st_ref_put(v___y_2984_, v___x_3047_);
v___x_3049_ = lean_st_ref_get(v___y_2984_);
v_model_3050_ = lean_ctor_get(v___x_3049_, 0);
v_live_3051_ = lean_ctor_get(v___x_3049_, 1);
v_next_3052_ = lean_ctor_get(v___x_3049_, 2);
v_tables_3053_ = lean_ctor_get(v___x_3049_, 3);
v_dirty_3054_ = lean_ctor_get_uint8(v___x_3049_, sizeof(void*)*10);
v_scheduled_3055_ = lean_ctor_get_uint8(v___x_3049_, sizeof(void*)*10 + 1);
v_queue_3056_ = lean_ctor_get(v___x_3049_, 4);
v_busy_3057_ = lean_ctor_get_uint8(v___x_3049_, sizeof(void*)*10 + 2);
v_subs_3058_ = lean_ctor_get(v___x_3049_, 5);
v_handlers_3059_ = lean_ctor_get(v___x_3049_, 6);
v_nextSub_3060_ = lean_ctor_get(v___x_3049_, 7);
v_touched_3061_ = lean_ctor_get(v___x_3049_, 8);
v_ports_3062_ = lean_ctor_get(v___x_3049_, 9);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3064_ = v___x_3049_;
v_isShared_3065_ = v_isSharedCheck_3078_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_ports_3062_);
lean_inc(v_touched_3061_);
lean_inc(v_nextSub_3060_);
lean_inc(v_handlers_3059_);
lean_inc(v_subs_3058_);
lean_inc(v_queue_3056_);
lean_inc(v_tables_3053_);
lean_inc(v_next_3052_);
lean_inc(v_live_3051_);
lean_inc(v_model_3050_);
lean_dec(v___x_3049_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3078_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; uint8_t v___x_3067_; 
v___x_3066_ = lean_array_get_size(v_queue_3056_);
v___x_3067_ = lean_nat_dec_lt(v___y_2982_, v___x_3066_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; 
lean_del_object(v___x_3064_);
lean_dec(v_ports_3062_);
lean_dec_ref(v_touched_3061_);
lean_dec(v_nextSub_3060_);
lean_dec_ref(v_handlers_3059_);
lean_dec_ref(v_subs_3058_);
lean_dec_ref(v_queue_3056_);
lean_dec_ref(v_tables_3053_);
lean_dec(v_next_3052_);
lean_dec(v_live_3051_);
lean_dec(v_model_3050_);
lean_dec(v___y_2989_);
lean_dec(v___y_2984_);
lean_dec(v___y_2982_);
lean_inc_ref(v___y_2988_);
v___x_3068_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_2988_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v___x_3069_; 
lean_dec_ref_known(v___x_3068_, 1);
v___x_3069_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_2988_);
lean_dec_ref(v___y_2988_);
return v___x_3069_;
}
else
{
lean_dec_ref(v___y_2988_);
return v___x_3068_;
}
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3070_ = lean_array_fget(v_queue_3056_, v___y_2982_);
lean_dec(v___y_2982_);
v___x_3071_ = l_Array_extract___redArg(v_queue_3056_, v___y_2989_, v___x_3066_);
lean_dec_ref(v_queue_3056_);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 4, v___x_3071_);
v___x_3073_ = v___x_3064_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_model_3050_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v_live_3051_);
lean_ctor_set(v_reuseFailAlloc_3077_, 2, v_next_3052_);
lean_ctor_set(v_reuseFailAlloc_3077_, 3, v_tables_3053_);
lean_ctor_set(v_reuseFailAlloc_3077_, 4, v___x_3071_);
lean_ctor_set(v_reuseFailAlloc_3077_, 5, v_subs_3058_);
lean_ctor_set(v_reuseFailAlloc_3077_, 6, v_handlers_3059_);
lean_ctor_set(v_reuseFailAlloc_3077_, 7, v_nextSub_3060_);
lean_ctor_set(v_reuseFailAlloc_3077_, 8, v_touched_3061_);
lean_ctor_set(v_reuseFailAlloc_3077_, 9, v_ports_3062_);
lean_ctor_set_uint8(v_reuseFailAlloc_3077_, sizeof(void*)*10, v_dirty_3054_);
lean_ctor_set_uint8(v_reuseFailAlloc_3077_, sizeof(void*)*10 + 1, v_scheduled_3055_);
lean_ctor_set_uint8(v_reuseFailAlloc_3077_, sizeof(void*)*10 + 2, v_busy_3057_);
v___x_3073_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_st_ref_swap(v___y_2984_, v___x_3073_);
lean_dec(v___y_2984_);
lean_dec(v___x_3074_);
lean_inc_ref(v___y_2988_);
v___x_3075_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_2988_, v___x_3070_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v___x_3076_; 
lean_dec_ref_known(v___x_3075_, 1);
v___x_3076_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_2988_);
lean_dec_ref(v___y_2988_);
return v___x_3076_;
}
else
{
lean_dec_ref(v___y_2988_);
return v___x_3075_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2984_);
lean_dec(v___y_2982_);
return v___x_3029_;
}
}
}
}
else
{
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2980_);
return v___x_3006_;
}
}
else
{
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2980_);
return v___x_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3249_, lean_object* v_hot_3250_, lean_object* v_app_3251_, lean_object* v_a_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lasm_UI_App_run___redArg(v_inst_3249_, v_hot_3250_, v_app_3251_);
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3254_, lean_object* v_Model_3255_, lean_object* v_Msg_3256_, lean_object* v_inst_3257_, lean_object* v_hot_3258_, lean_object* v_app_3259_){
_start:
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lasm_UI_App_run___redArg(v_inst_3257_, v_hot_3258_, v_app_3259_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3262_, lean_object* v_Model_3263_, lean_object* v_Msg_3264_, lean_object* v_inst_3265_, lean_object* v_hot_3266_, lean_object* v_app_3267_, lean_object* v_a_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l_Lasm_UI_App_run(v_Flags_3262_, v_Model_3263_, v_Msg_3264_, v_inst_3265_, v_hot_3266_, v_app_3267_);
return v_res_3269_;
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
