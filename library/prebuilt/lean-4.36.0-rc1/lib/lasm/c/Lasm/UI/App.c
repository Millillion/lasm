// Lean compiler output
// Module: Lasm.UI.App
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.App public import Lasm.UI.Diff public import Lasm.UI.Encode public import Lasm.UI.Cmd public import Lasm.UI.Subs public import Lasm.UI.Url
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
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
uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_io_get_random_bytes(size_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_Web_App_Raw_port(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_Web_App_Port_subscribe(lean_object*, lean_object*);
lean_object* l_Lasm_UI_lastVal___redArg(lean_object*, lean_object*);
uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_Web_App_onMessage(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lasm_UI_Url_parse(lean_object*);
lean_object* l_instMonadEIO___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_Web_App_onHotSave(lean_object*);
lean_object* l_Lasm_Web_App_Raw_hotState();
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
static const lean_string_object l_Lasm_UI_Runtime_Dom_http___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Lasm_UI_Runtime_Dom_http___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_http___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_http___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_http___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_http___closed__0_value),((lean_object*)(((size_t)(6) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_http___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_http___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_http(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_http___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_now___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "now"};
static const lean_object* l_Lasm_UI_Runtime_Dom_now___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_now___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_now___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_now___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_now___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_now___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_now___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now();
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_navigate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "navigate"};
static const lean_object* l_Lasm_UI_Runtime_Dom_navigate___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_navigate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_navigate___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_navigate___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "go"};
static const lean_object* l_Lasm_UI_Runtime_Dom_go___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_go___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_go___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_go___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_go___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_go___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "load"};
static const lean_object* l_Lasm_UI_Runtime_Dom_load___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_load___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_load___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_load___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_load___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_load___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_load___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_storageSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "storageSet"};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageSet___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageSet___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_storageSet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_storageSet___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_storageSet___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageSet___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageSet___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_storageRemove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "storageRemove"};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageRemove___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageRemove___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_storageRemove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_storageRemove___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_storageRemove___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageRemove___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageRemove___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_storageGet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "storageGet"};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageGet___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageGet___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_storageGet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_storageGet___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_storageGet___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_storageGet___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_storageGet___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_focus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "focus"};
static const lean_object* l_Lasm_UI_Runtime_Dom_focus___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_focus___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_focus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_focus___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_focus___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_focus___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_focus___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_Dom_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_UI_Runtime_Dom_title___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_title___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_Dom_title___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_Dom_title___closed__0_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_options___closed__1_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_title___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_Dom_title___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_Dom_title___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__7_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__8 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__8_value;
static lean_once_cell_t l_Lasm_UI_Runtime_specData___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_specData___closed__9;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "document"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__10 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__10_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__11 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__11_value;
static lean_once_cell_t l_Lasm_UI_Runtime_specData___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_specData___closed__12;
static const lean_string_object l_Lasm_UI_Runtime_specData___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__13 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Runtime_specData___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_specData___closed__13_value)}};
static const lean_object* l_Lasm_UI_Runtime_specData___closed__14 = (const lean_object*)&l_Lasm_UI_Runtime_specData___closed__14_value;
static lean_once_cell_t l_Lasm_UI_Runtime_specData___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Runtime_specData___closed__15;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_storageName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lasm_UI_Runtime_storageName___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_storageName___closed__0_value;
static const lean_string_object l_Lasm_UI_Runtime_storageName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "session"};
static const lean_object* l_Lasm_UI_Runtime_storageName___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_storageName___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0 = (const lean_object*)&l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "malformed response"};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Runtime_perform___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___closed__0_value;
static const lean_array_object l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "a command failed"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0_value;
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_array_object l_Lasm_UI_App_run___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__6_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "https:"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__7 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_UI_App_run___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_App_run___redArg___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__9 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__9_value;
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
v___x_71_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v___x_68_, v___x_69_, v___x_70_);
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
v___x_86_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_82_, v___x_84_, v___x_85_);
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
v___x_103_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_98_, v___x_101_, v___x_102_);
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
v___x_117_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_114_, v___x_115_, v___x_116_);
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
v___x_133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_128_, v___x_131_, v___x_132_);
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
v___x_153_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_146_, v___x_151_, v___x_152_);
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
v___x_179_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_173_, v___x_177_, v___x_178_);
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
v___x_209_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_200_, v___x_207_, v___x_208_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_http(lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___y_242_; 
v___x_234_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_http___closed__1));
v___x_235_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_236_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_236_, 0, v_a_227_);
v___x_237_ = lean_array_push(v___x_235_, v___x_236_);
v___x_238_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_238_, 0, v_a_228_);
v___x_239_ = lean_array_push(v___x_237_, v___x_238_);
v___x_240_ = lean_array_push(v___x_239_, v_a_229_);
if (lean_obj_tag(v_a_230_) == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_box(1);
v___y_242_ = v___x_251_;
goto v___jp_241_;
}
else
{
lean_object* v_val_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_val_252_ = lean_ctor_get(v_a_230_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_a_230_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v_a_230_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_val_252_);
lean_dec(v_a_230_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set_tag(v___x_254_, 4);
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_val_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
v___y_242_ = v___x_257_;
goto v___jp_241_;
}
}
}
v___jp_241_:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; 
v___x_243_ = lean_array_push(v___x_240_, v___y_242_);
v___x_244_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_244_, 0, v_a_231_);
v___x_245_ = lean_array_push(v___x_243_, v___x_244_);
v___x_246_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_247_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_247_, 0, v_a_232_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_array_push(v___x_245_, v___x_247_);
v___x_249_ = 1;
v___x_250_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_234_, v___x_248_, v___x_249_);
return v___x_250_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_http___boxed(lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lasm_UI_Runtime_Dom_http(v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
return v_res_267_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6));
v___x_276_ = lean_unsigned_to_nat(46u);
v___x_277_ = lean_unsigned_to_nat(193u);
v___x_278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5));
v___x_279_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4));
v___x_280_ = l_mkPanicMessageWithDecl(v___x_279_, v___x_278_, v___x_277_, v___x_276_, v___x_275_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(lean_object* v_context_282_, lean_object* v_d_283_){
_start:
{
lean_object* v_received_286_; 
if (lean_obj_tag(v_d_283_) == 3)
{
double v_n_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_n_300_ = lean_ctor_get_float(v_d_283_, 0);
lean_dec_ref_known(v_d_283_, 0);
v___x_301_ = lean_box_float(v_n_300_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
else
{
if (lean_obj_tag(v_d_283_) == 9)
{
lean_object* v_value_303_; lean_object* v_description_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_value_303_ = lean_ctor_get(v_d_283_, 0);
v_description_304_ = lean_ctor_get(v_d_283_, 1);
v___x_305_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_306_ = lean_string_dec_eq(v_description_304_, v___x_305_);
if (v___x_306_ == 0)
{
goto v___jp_298_;
}
else
{
uint32_t v___x_307_; uint64_t v___x_308_; lean_object* v___x_309_; uint32_t v___x_310_; lean_object* v___x_311_; 
lean_inc_n(v_value_303_, 2);
lean_dec_ref_known(v_d_283_, 2);
v___x_307_ = 206;
v___x_308_ = 0ULL;
v___x_309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_309_, 0, v_value_303_);
lean_ctor_set(v___x_309_, 1, v___x_305_);
v___x_310_ = lasm_js_value_handle(v_value_303_);
lean_dec(v_value_303_);
v___x_311_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_307_, v___x_308_, v___x_309_, v___x_310_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; uint8_t v___x_313_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v___x_313_ = lean_string_validate_utf8(v_a_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_a_312_);
v___x_314_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7);
v___x_315_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_314_);
v_received_286_ = v___x_315_;
goto v___jp_285_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_string_from_utf8_unchecked(v_a_312_);
v_received_286_ = v___x_316_;
goto v___jp_285_;
}
}
else
{
lean_object* v___x_317_; 
lean_dec_ref_known(v___x_311_, 1);
v___x_317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8));
v_received_286_ = v___x_317_;
goto v___jp_285_;
}
}
}
else
{
goto v___jp_298_;
}
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_287_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_288_ = lean_string_append(v___x_287_, v_context_282_);
v___x_289_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1));
v___x_290_ = lean_string_append(v___x_288_, v___x_289_);
v___x_291_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__2));
v___x_292_ = lean_string_append(v___x_290_, v___x_291_);
v___x_293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3));
v___x_294_ = lean_string_append(v___x_292_, v___x_293_);
v___x_295_ = lean_string_append(v___x_294_, v_received_286_);
lean_dec_ref(v_received_286_);
v___x_296_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
v___x_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
v___jp_298_:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lasm_JS_Data_describe(v_d_283_);
v_received_286_ = v___x_299_;
goto v___jp_285_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___boxed(lean_object* v_context_318_, lean_object* v_d_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(v_context_318_, v_d_319_);
lean_dec_ref(v_context_318_);
return v_res_321_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1(void){
_start:
{
uint8_t v___x_323_; uint64_t v___x_324_; 
v___x_323_ = 0;
v___x_324_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(lean_object* v_b_325_, lean_object* v_args_326_, uint8_t v_await_327_){
_start:
{
uint64_t v___y_330_; uint64_t v___y_331_; uint64_t v___x_366_; uint64_t v___y_368_; 
v___x_366_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1);
if (v_await_327_ == 0)
{
uint64_t v___x_373_; 
v___x_373_ = 0ULL;
v___y_368_ = v___x_373_;
goto v___jp_367_;
}
else
{
uint64_t v___x_374_; 
v___x_374_ = 2ULL;
v___y_368_ = v___x_374_;
goto v___jp_367_;
}
v___jp_329_:
{
uint64_t v_flags_332_; uint32_t v___x_333_; lean_object* v___x_334_; uint32_t v___x_335_; lean_object* v___x_336_; 
v_flags_332_ = lean_uint64_lor(v___y_330_, v___y_331_);
v___x_333_ = 214;
v___x_334_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_325_, v_args_326_);
v___x_335_ = 0;
v___x_336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_333_, v_flags_332_, v___x_334_, v___x_335_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = l_Lasm_JS_Wire_decode(v_a_337_);
lean_dec(v_a_337_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_338_, 1);
v___x_340_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_325_);
v___x_341_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(v___x_340_, v_a_339_);
lean_dec_ref(v___x_340_);
return v___x_341_;
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
v_a_342_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_338_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_338_);
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
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_365_; 
v_a_350_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_365_ == 0)
{
v___x_352_ = v___x_336_;
v_isShared_353_ = v_isSharedCheck_365_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_336_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_365_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_354_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_355_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_325_);
v___x_356_ = lean_string_append(v___x_354_, v___x_355_);
lean_dec_ref(v___x_355_);
v___x_357_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
v___x_359_ = lean_io_error_to_string(v_a_350_);
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
lean_dec_ref(v___x_359_);
v___x_361_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_361_);
v___x_363_ = v___x_352_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
v___jp_367_:
{
uint8_t v_construct_369_; uint64_t v___x_370_; 
v_construct_369_ = lean_ctor_get_uint8(v_b_325_, sizeof(void*)*4);
v___x_370_ = lean_uint64_lor(v___x_366_, v___y_368_);
if (v_construct_369_ == 0)
{
uint64_t v___x_371_; 
v___x_371_ = 0ULL;
v___y_330_ = v___x_370_;
v___y_331_ = v___x_371_;
goto v___jp_329_;
}
else
{
uint64_t v___x_372_; 
v___x_372_ = 4ULL;
v___y_330_ = v___x_370_;
v___y_331_ = v___x_372_;
goto v___jp_329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___boxed(lean_object* v_b_375_, lean_object* v_args_376_, lean_object* v_await_377_, lean_object* v_a_378_){
_start:
{
uint8_t v_await_boxed_379_; lean_object* v_res_380_; 
v_await_boxed_379_ = lean_unbox(v_await_377_);
v_res_380_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(v_b_375_, v_args_376_, v_await_boxed_379_);
lean_dec_ref(v_b_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now(){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; lean_object* v___x_391_; 
v___x_388_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_now___closed__1));
v___x_389_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_390_ = 1;
v___x_391_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(v___x_388_, v___x_389_, v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now___boxed(lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lasm_UI_Runtime_Dom_now();
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate(lean_object* v_a_400_, uint8_t v_a_401_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; lean_object* v___x_410_; 
v___x_403_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_navigate___closed__1));
v___x_404_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_405_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_405_, 0, v_a_400_);
v___x_406_ = lean_array_push(v___x_404_, v___x_405_);
v___x_407_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_407_, 0, v_a_401_);
v___x_408_ = lean_array_push(v___x_406_, v___x_407_);
v___x_409_ = 1;
v___x_410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_403_, v___x_408_, v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate___boxed(lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
uint8_t v_a_128__boxed_414_; lean_object* v_res_415_; 
v_a_128__boxed_414_ = lean_unbox(v_a_412_);
v_res_415_ = l_Lasm_UI_Runtime_Dom_navigate(v_a_411_, v_a_128__boxed_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go(lean_object* v_a_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___y_427_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_424_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_go___closed__1));
v___x_425_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_431_ = lean_nat_abs(v_a_422_);
v___x_432_ = lean_cstr_to_nat("9007199254740991");
v___x_433_ = lean_nat_dec_le(v___x_431_, v___x_432_);
lean_dec(v___x_431_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
v___x_434_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_434_, 0, v_a_422_);
v___y_427_ = v___x_434_;
goto v___jp_426_;
}
else
{
double v___x_435_; lean_object* v___x_436_; 
v___x_435_ = l_Float_ofInt(v_a_422_);
lean_dec(v_a_422_);
v___x_436_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_436_, 0, v___x_435_);
v___y_427_ = v___x_436_;
goto v___jp_426_;
}
v___jp_426_:
{
lean_object* v___x_428_; uint8_t v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_array_push(v___x_425_, v___y_427_);
v___x_429_ = 1;
v___x_430_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_424_, v___x_428_, v___x_429_);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go___boxed(lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lasm_UI_Runtime_Dom_go(v_a_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load(lean_object* v_a_446_){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v___x_453_; 
v___x_448_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_load___closed__1));
v___x_449_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_450_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_450_, 0, v_a_446_);
v___x_451_ = lean_array_push(v___x_449_, v___x_450_);
v___x_452_ = 1;
v___x_453_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_448_, v___x_451_, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load___boxed(lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lasm_UI_Runtime_Dom_load(v_a_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet(lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; lean_object* v___x_476_; 
v___x_467_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageSet___closed__1));
v___x_468_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_469_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_469_, 0, v_a_463_);
v___x_470_ = lean_array_push(v___x_468_, v___x_469_);
v___x_471_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_471_, 0, v_a_464_);
v___x_472_ = lean_array_push(v___x_470_, v___x_471_);
v___x_473_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_473_, 0, v_a_465_);
v___x_474_ = lean_array_push(v___x_472_, v___x_473_);
v___x_475_ = 1;
v___x_476_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_467_, v___x_474_, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet___boxed(lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lasm_UI_Runtime_Dom_storageSet(v_a_477_, v_a_478_, v_a_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove(lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
v___x_491_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageRemove___closed__1));
v___x_492_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_493_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_493_, 0, v_a_488_);
v___x_494_ = lean_array_push(v___x_492_, v___x_493_);
v___x_495_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_495_, 0, v_a_489_);
v___x_496_ = lean_array_push(v___x_494_, v___x_495_);
v___x_497_ = 1;
v___x_498_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_491_, v___x_496_, v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove___boxed(lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lasm_UI_Runtime_Dom_storageRemove(v_a_499_, v_a_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(lean_object* v_context_504_, lean_object* v_d_505_){
_start:
{
lean_object* v_received_511_; 
switch(lean_obj_tag(v_d_505_))
{
case 1:
{
goto v___jp_507_;
}
case 0:
{
goto v___jp_507_;
}
default: 
{
if (lean_obj_tag(v_d_505_) == 4)
{
lean_object* v_s_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_s_525_ = lean_ctor_get(v_d_505_, 0);
lean_inc_ref(v_s_525_);
lean_dec_ref_known(v_d_505_, 1);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v_s_525_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
else
{
if (lean_obj_tag(v_d_505_) == 9)
{
lean_object* v_value_528_; lean_object* v_description_529_; lean_object* v___x_530_; uint8_t v___x_531_; 
v_value_528_ = lean_ctor_get(v_d_505_, 0);
v_description_529_ = lean_ctor_get(v_d_505_, 1);
v___x_530_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_531_ = lean_string_dec_eq(v_description_529_, v___x_530_);
if (v___x_531_ == 0)
{
goto v___jp_523_;
}
else
{
uint32_t v___x_532_; uint64_t v___x_533_; lean_object* v___x_534_; uint32_t v___x_535_; lean_object* v___x_536_; 
lean_inc_n(v_value_528_, 2);
lean_dec_ref_known(v_d_505_, 2);
v___x_532_ = 206;
v___x_533_ = 0ULL;
v___x_534_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_534_, 0, v_value_528_);
lean_ctor_set(v___x_534_, 1, v___x_530_);
v___x_535_ = lasm_js_value_handle(v_value_528_);
lean_dec(v_value_528_);
v___x_536_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_532_, v___x_533_, v___x_534_, v___x_535_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; uint8_t v___x_538_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v___x_536_, 1);
v___x_538_ = lean_string_validate_utf8(v_a_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v_a_537_);
v___x_539_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7);
v___x_540_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_539_);
v_received_511_ = v___x_540_;
goto v___jp_510_;
}
else
{
lean_object* v___x_541_; 
v___x_541_ = lean_string_from_utf8_unchecked(v_a_537_);
v_received_511_ = v___x_541_;
goto v___jp_510_;
}
}
else
{
lean_object* v___x_542_; 
lean_dec_ref_known(v___x_536_, 1);
v___x_542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8));
v_received_511_ = v___x_542_;
goto v___jp_510_;
}
}
}
else
{
goto v___jp_523_;
}
}
}
}
v___jp_507_:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
v___jp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_513_ = lean_string_append(v___x_512_, v_context_504_);
v___x_514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1));
v___x_515_ = lean_string_append(v___x_513_, v___x_514_);
v___x_516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___closed__0));
v___x_517_ = lean_string_append(v___x_515_, v___x_516_);
v___x_518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3));
v___x_519_ = lean_string_append(v___x_517_, v___x_518_);
v___x_520_ = lean_string_append(v___x_519_, v_received_511_);
lean_dec_ref(v_received_511_);
v___x_521_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
v___x_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
v___jp_523_:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lasm_JS_Data_describe(v_d_505_);
v_received_511_ = v___x_524_;
goto v___jp_510_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___boxed(lean_object* v_context_543_, lean_object* v_d_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(v_context_543_, v_d_544_);
lean_dec_ref(v_context_543_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(lean_object* v_b_547_, lean_object* v_args_548_, uint8_t v_await_549_){
_start:
{
uint64_t v___y_552_; uint64_t v___y_553_; uint64_t v___x_588_; uint64_t v___y_590_; 
v___x_588_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1);
if (v_await_549_ == 0)
{
uint64_t v___x_595_; 
v___x_595_ = 0ULL;
v___y_590_ = v___x_595_;
goto v___jp_589_;
}
else
{
uint64_t v___x_596_; 
v___x_596_ = 2ULL;
v___y_590_ = v___x_596_;
goto v___jp_589_;
}
v___jp_551_:
{
uint64_t v_flags_554_; uint32_t v___x_555_; lean_object* v___x_556_; uint32_t v___x_557_; lean_object* v___x_558_; 
v_flags_554_ = lean_uint64_lor(v___y_552_, v___y_553_);
v___x_555_ = 214;
v___x_556_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_547_, v_args_548_);
v___x_557_ = 0;
v___x_558_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_555_, v_flags_554_, v___x_556_, v___x_557_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_558_, 1);
v___x_560_ = l_Lasm_JS_Wire_decode(v_a_559_);
lean_dec(v_a_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_547_);
v___x_563_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(v___x_562_, v_a_561_);
lean_dec_ref(v___x_562_);
return v___x_563_;
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
v_a_564_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_560_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_560_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_587_; 
v_a_572_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_587_ == 0)
{
v___x_574_ = v___x_558_;
v_isShared_575_ = v_isSharedCheck_587_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_558_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_587_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_576_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_577_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_547_);
v___x_578_ = lean_string_append(v___x_576_, v___x_577_);
lean_dec_ref(v___x_577_);
v___x_579_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
v___x_581_ = lean_io_error_to_string(v_a_572_);
v___x_582_ = lean_string_append(v___x_580_, v___x_581_);
lean_dec_ref(v___x_581_);
v___x_583_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_583_);
v___x_585_ = v___x_574_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
v___jp_589_:
{
uint8_t v_construct_591_; uint64_t v___x_592_; 
v_construct_591_ = lean_ctor_get_uint8(v_b_547_, sizeof(void*)*4);
v___x_592_ = lean_uint64_lor(v___x_588_, v___y_590_);
if (v_construct_591_ == 0)
{
uint64_t v___x_593_; 
v___x_593_ = 0ULL;
v___y_552_ = v___x_592_;
v___y_553_ = v___x_593_;
goto v___jp_551_;
}
else
{
uint64_t v___x_594_; 
v___x_594_ = 4ULL;
v___y_552_ = v___x_592_;
v___y_553_ = v___x_594_;
goto v___jp_551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0___boxed(lean_object* v_b_597_, lean_object* v_args_598_, lean_object* v_await_599_, lean_object* v_a_600_){
_start:
{
uint8_t v_await_boxed_601_; lean_object* v_res_602_; 
v_await_boxed_601_ = lean_unbox(v_await_599_);
v_res_602_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(v_b_597_, v_args_598_, v_await_boxed_601_);
lean_dec_ref(v_b_597_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet(lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; 
v___x_612_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageGet___closed__1));
v___x_613_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_614_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_614_, 0, v_a_609_);
v___x_615_ = lean_array_push(v___x_613_, v___x_614_);
v___x_616_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_616_, 0, v_a_610_);
v___x_617_ = lean_array_push(v___x_615_, v___x_616_);
v___x_618_ = 1;
v___x_619_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(v___x_612_, v___x_617_, v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet___boxed(lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lasm_UI_Runtime_Dom_storageGet(v_a_620_, v_a_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus(lean_object* v_a_630_, uint8_t v_a_631_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; 
v___x_633_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_focus___closed__1));
v___x_634_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_635_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_635_, 0, v_a_630_);
v___x_636_ = lean_array_push(v___x_634_, v___x_635_);
v___x_637_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_637_, 0, v_a_631_);
v___x_638_ = lean_array_push(v___x_636_, v___x_637_);
v___x_639_ = 1;
v___x_640_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_633_, v___x_638_, v___x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus___boxed(lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_){
_start:
{
uint8_t v_a_128__boxed_644_; lean_object* v_res_645_; 
v_a_128__boxed_644_ = lean_unbox(v_a_642_);
v_res_645_ = l_Lasm_UI_Runtime_Dom_focus(v_a_641_, v_a_128__boxed_644_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title(lean_object* v_a_652_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; lean_object* v___x_659_; 
v___x_654_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_title___closed__1));
v___x_655_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_656_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_656_, 0, v_a_652_);
v___x_657_ = lean_array_push(v___x_655_, v___x_656_);
v___x_658_ = 1;
v___x_659_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_654_, v___x_657_, v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title___boxed(lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lasm_UI_Runtime_Dom_title(v_a_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(lean_object* v_head_663_, lean_object* v_x_664_){
_start:
{
if (lean_obj_tag(v_x_664_) == 0)
{
lean_object* v___x_665_; 
v___x_665_ = lean_box(0);
return v___x_665_;
}
else
{
lean_object* v_head_666_; lean_object* v_tail_667_; lean_object* v___y_669_; lean_object* v_id_673_; 
v_head_666_ = lean_ctor_get(v_x_664_, 0);
v_tail_667_ = lean_ctor_get(v_x_664_, 1);
v_id_673_ = lean_ctor_get(v_head_666_, 0);
v___y_669_ = v_id_673_;
goto v___jp_668_;
v___jp_668_:
{
uint8_t v___x_670_; 
v___x_670_ = lean_nat_dec_eq(v___y_669_, v_head_663_);
if (v___x_670_ == 0)
{
v_x_664_ = v_tail_667_;
goto _start;
}
else
{
lean_object* v___x_672_; 
lean_inc(v_head_666_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v_head_666_);
return v___x_672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg___boxed(lean_object* v_head_674_, lean_object* v_x_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_674_, v_x_675_);
lean_dec(v_x_675_);
lean_dec(v_head_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg(lean_object* v_live_677_, lean_object* v_x_678_, lean_object* v_x_679_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_dec(v_live_677_);
return v_x_679_;
}
else
{
lean_object* v_head_680_; lean_object* v_tail_681_; lean_object* v___x_682_; 
v_head_680_ = lean_ctor_get(v_x_678_, 0);
v_tail_681_ = lean_ctor_get(v_x_678_, 1);
v___x_682_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_680_, v_live_677_);
lean_dec(v_live_677_);
if (lean_obj_tag(v___x_682_) == 0)
{
return v_x_679_;
}
else
{
lean_object* v_val_683_; 
v_val_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_val_683_);
lean_dec_ref_known(v___x_682_, 1);
if (lean_obj_tag(v_val_683_) == 1)
{
lean_object* v_children_684_; lean_object* v___x_685_; 
v_children_684_ = lean_ctor_get(v_val_683_, 4);
lean_inc(v_children_684_);
v___x_685_ = lean_array_push(v_x_679_, v_val_683_);
v_live_677_ = v_children_684_;
v_x_678_ = v_tail_681_;
v_x_679_ = v___x_685_;
goto _start;
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_array_push(v_x_679_, v_val_683_);
return v___x_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg___boxed(lean_object* v_live_688_, lean_object* v_x_689_, lean_object* v_x_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_688_, v_x_689_, v_x_690_);
lean_dec(v_x_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath(lean_object* v_Msg_692_, lean_object* v_live_693_, lean_object* v_x_694_, lean_object* v_x_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_693_, v_x_694_, v_x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___boxed(lean_object* v_Msg_697_, lean_object* v_live_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lasm_UI_Runtime_findPath(v_Msg_697_, v_live_698_, v_x_699_, v_x_700_);
lean_dec(v_x_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(lean_object* v_Msg_702_, lean_object* v_head_703_, lean_object* v_x_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_703_, v_x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___boxed(lean_object* v_Msg_706_, lean_object* v_head_707_, lean_object* v_x_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(v_Msg_706_, v_head_707_, v_x_708_);
lean_dec(v_x_708_);
lean_dec(v_head_707_);
return v_res_709_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Runtime_userProp(lean_object* v_name_713_){
_start:
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__0));
v___x_715_ = lean_string_dec_eq(v_name_713_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__1));
v___x_717_ = lean_string_dec_eq(v_name_713_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__2));
v___x_719_ = lean_string_dec_eq(v_name_713_, v___x_718_);
return v___x_719_;
}
else
{
return v___x_717_;
}
}
else
{
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_userProp___boxed(lean_object* v_name_720_){
_start:
{
uint8_t v_res_721_; lean_object* v_r_722_; 
v_res_721_ = l_Lasm_UI_Runtime_userProp(v_name_720_);
lean_dec_ref(v_name_720_);
v_r_722_ = lean_box(v_res_721_);
return v_r_722_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
if (lean_obj_tag(v_a_723_) == 0)
{
lean_object* v___x_725_; 
v___x_725_ = lean_array_to_list(v_a_724_);
return v___x_725_;
}
else
{
lean_object* v_head_726_; 
v_head_726_ = lean_ctor_get(v_a_723_, 0);
lean_inc(v_head_726_);
if (lean_obj_tag(v_head_726_) == 1)
{
lean_object* v_tail_727_; lean_object* v_name_728_; lean_object* v_value_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_742_; 
v_tail_727_ = lean_ctor_get(v_a_723_, 1);
lean_inc(v_tail_727_);
lean_dec_ref_known(v_a_723_, 2);
v_name_728_ = lean_ctor_get(v_head_726_, 0);
v_value_729_ = lean_ctor_get(v_head_726_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_head_726_);
if (v_isSharedCheck_742_ == 0)
{
v___x_731_ = v_head_726_;
v_isShared_732_ = v_isSharedCheck_742_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_value_729_);
lean_inc(v_name_728_);
lean_dec(v_head_726_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_742_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
uint8_t v___x_733_; 
v___x_733_ = l_Lasm_UI_Runtime_userProp(v_name_728_);
if (v___x_733_ == 0)
{
lean_del_object(v___x_731_);
lean_dec_ref(v_value_729_);
lean_dec_ref(v_name_728_);
v_a_723_ = v_tail_727_;
goto _start;
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v_name_728_);
v___x_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_736_, 0, v_value_729_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 0);
lean_ctor_set(v___x_731_, 1, v___x_736_);
lean_ctor_set(v___x_731_, 0, v___x_735_);
v___x_738_ = v___x_731_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_736_);
v___x_738_ = v_reuseFailAlloc_741_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; 
v___x_739_ = lean_array_push(v_a_724_, v___x_738_);
v_a_723_ = v_tail_727_;
v_a_724_ = v___x_739_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_743_; 
lean_dec(v_head_726_);
v_tail_743_ = lean_ctor_get(v_a_723_, 1);
lean_inc(v_tail_743_);
lean_dec_ref_known(v_a_723_, 2);
v_a_723_ = v_tail_743_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(lean_object* v_live_747_, lean_object* v_as_748_, size_t v_i_749_, size_t v_stop_750_, lean_object* v_b_751_){
_start:
{
lean_object* v___y_753_; uint8_t v___x_757_; 
v___x_757_ = lean_usize_dec_eq(v_i_749_, v_stop_750_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_758_ = lean_array_uget_borrowed(v_as_748_, v_i_749_);
v___x_759_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
lean_inc(v_live_747_);
v___x_760_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_747_, v___x_758_, v___x_759_);
v___x_761_ = lean_array_get_size(v___x_760_);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_nat_sub(v___x_761_, v___x_762_);
v___x_764_ = lean_nat_dec_lt(v___x_763_, v___x_761_);
if (v___x_764_ == 0)
{
lean_dec(v___x_763_);
lean_dec_ref(v___x_760_);
v___y_753_ = v_b_751_;
goto v___jp_752_;
}
else
{
lean_object* v___x_765_; 
v___x_765_ = lean_array_fget(v___x_760_, v___x_763_);
lean_dec(v___x_763_);
lean_dec_ref(v___x_760_);
if (lean_obj_tag(v___x_765_) == 1)
{
lean_object* v_id_766_; lean_object* v_attrs_767_; lean_object* v_sets_768_; uint8_t v___x_769_; 
v_id_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_id_766_);
v_attrs_767_ = lean_ctor_get(v___x_765_, 3);
lean_inc(v_attrs_767_);
lean_dec_ref_known(v___x_765_, 5);
v_sets_768_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_attrs_767_, v___x_759_);
v___x_769_ = l_List_isEmpty___redArg(v_sets_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_770_, 0, v_id_766_);
lean_ctor_set(v___x_770_, 1, v_sets_768_);
v___x_771_ = lean_array_push(v_b_751_, v___x_770_);
v___y_753_ = v___x_771_;
goto v___jp_752_;
}
else
{
lean_dec(v_sets_768_);
lean_dec(v_id_766_);
v___y_753_ = v_b_751_;
goto v___jp_752_;
}
}
else
{
lean_dec(v___x_765_);
v___y_753_ = v_b_751_;
goto v___jp_752_;
}
}
}
else
{
lean_dec(v_live_747_);
return v_b_751_;
}
v___jp_752_:
{
size_t v___x_754_; size_t v___x_755_; 
v___x_754_ = ((size_t)1ULL);
v___x_755_ = lean_usize_add(v_i_749_, v___x_754_);
v_i_749_ = v___x_755_;
v_b_751_ = v___y_753_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___boxed(lean_object* v_live_772_, lean_object* v_as_773_, lean_object* v_i_774_, lean_object* v_stop_775_, lean_object* v_b_776_){
_start:
{
size_t v_i_boxed_777_; size_t v_stop_boxed_778_; lean_object* v_res_779_; 
v_i_boxed_777_ = lean_unbox_usize(v_i_774_);
lean_dec(v_i_774_);
v_stop_boxed_778_ = lean_unbox_usize(v_stop_775_);
lean_dec(v_stop_775_);
v_res_779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_772_, v_as_773_, v_i_boxed_777_, v_stop_boxed_778_, v_b_776_);
lean_dec_ref(v_as_773_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg(lean_object* v_live_782_, lean_object* v_touched_783_){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = ((lean_object*)(l_Lasm_UI_Runtime_resync___redArg___closed__0));
v___x_786_ = lean_array_get_size(v_touched_783_);
v___x_787_ = lean_nat_dec_lt(v___x_784_, v___x_786_);
if (v___x_787_ == 0)
{
lean_dec(v_live_782_);
return v___x_785_;
}
else
{
size_t v___x_788_; size_t v___x_789_; lean_object* v___x_790_; 
v___x_788_ = ((size_t)0ULL);
v___x_789_ = lean_usize_of_nat(v___x_786_);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_782_, v_touched_783_, v___x_788_, v___x_789_, v___x_785_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg___boxed(lean_object* v_live_791_, lean_object* v_touched_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lasm_UI_Runtime_resync___redArg(v_live_791_, v_touched_792_);
lean_dec_ref(v_touched_792_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync(lean_object* v_Msg_794_, lean_object* v_live_795_, lean_object* v_touched_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lasm_UI_Runtime_resync___redArg(v_live_795_, v_touched_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___boxed(lean_object* v_Msg_798_, lean_object* v_live_799_, lean_object* v_touched_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lasm_UI_Runtime_resync(v_Msg_798_, v_live_799_, v_touched_800_);
lean_dec_ref(v_touched_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0(lean_object* v_Msg_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_a_803_, v_a_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(lean_object* v_Msg_806_, lean_object* v_live_807_, lean_object* v_as_808_, size_t v_i_809_, size_t v_stop_810_, lean_object* v_b_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_807_, v_as_808_, v_i_809_, v_stop_810_, v_b_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___boxed(lean_object* v_Msg_813_, lean_object* v_live_814_, lean_object* v_as_815_, lean_object* v_i_816_, lean_object* v_stop_817_, lean_object* v_b_818_){
_start:
{
size_t v_i_boxed_819_; size_t v_stop_boxed_820_; lean_object* v_res_821_; 
v_i_boxed_819_ = lean_unbox_usize(v_i_816_);
lean_dec(v_i_816_);
v_stop_boxed_820_ = lean_unbox_usize(v_stop_817_);
lean_dec(v_stop_817_);
v_res_821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(v_Msg_813_, v_live_814_, v_as_815_, v_i_boxed_819_, v_stop_boxed_820_, v_b_818_);
lean_dec_ref(v_as_815_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(lean_object* v_event_822_, lean_object* v_l_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
if (lean_obj_tag(v_a_824_) == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_array_to_list(v_a_825_);
return v___x_826_;
}
else
{
lean_object* v_head_827_; 
v_head_827_ = lean_ctor_get(v_a_824_, 0);
if (lean_obj_tag(v_head_827_) == 3)
{
lean_object* v_listener_828_; lean_object* v_tail_829_; lean_object* v_handle_830_; lean_object* v_event_831_; lean_object* v_paths_832_; uint8_t v___x_833_; 
lean_inc_ref(v_head_827_);
v_listener_828_ = lean_ctor_get(v_head_827_, 0);
lean_inc_ref(v_listener_828_);
v_tail_829_ = lean_ctor_get(v_a_824_, 1);
lean_inc(v_tail_829_);
lean_dec_ref_known(v_a_824_, 2);
v_handle_830_ = lean_ctor_get(v_head_827_, 1);
lean_inc_ref(v_handle_830_);
lean_dec_ref_known(v_head_827_, 2);
v_event_831_ = lean_ctor_get(v_listener_828_, 0);
lean_inc_ref(v_event_831_);
v_paths_832_ = lean_ctor_get(v_listener_828_, 1);
lean_inc(v_paths_832_);
lean_dec_ref(v_listener_828_);
v___x_833_ = lean_string_dec_eq(v_event_831_, v_event_822_);
lean_dec_ref(v_event_831_);
if (v___x_833_ == 0)
{
lean_dec(v_paths_832_);
lean_dec_ref(v_handle_830_);
v_a_824_ = v_tail_829_;
goto _start;
}
else
{
lean_object* v_paths_835_; uint8_t v___x_836_; 
v_paths_835_ = lean_ctor_get(v_l_823_, 1);
v___x_836_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_paths_832_, v_paths_835_);
lean_dec(v_paths_832_);
if (v___x_836_ == 0)
{
lean_dec_ref(v_handle_830_);
v_a_824_ = v_tail_829_;
goto _start;
}
else
{
lean_object* v___x_838_; 
v___x_838_ = lean_array_push(v_a_825_, v_handle_830_);
v_a_824_ = v_tail_829_;
v_a_825_ = v___x_838_;
goto _start;
}
}
}
else
{
lean_object* v_tail_840_; 
v_tail_840_ = lean_ctor_get(v_a_824_, 1);
lean_inc(v_tail_840_);
lean_dec_ref_known(v_a_824_, 2);
v_a_824_ = v_tail_840_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg___boxed(lean_object* v_event_842_, lean_object* v_l_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_842_, v_l_843_, v_a_844_, v_a_845_);
lean_dec_ref(v_l_843_);
lean_dec_ref(v_event_842_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor___redArg(lean_object* v_event_849_, lean_object* v_attrs_850_){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_inc_ref(v_event_849_);
v___x_851_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_851_, 0, v_event_849_);
v___x_852_ = l_Lasm_UI_lastVal___redArg(v___x_851_, v_attrs_850_);
lean_dec_ref_known(v___x_851_, 1);
if (lean_obj_tag(v___x_852_) == 1)
{
lean_object* v_val_853_; 
v_val_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v___x_852_, 1);
if (lean_obj_tag(v_val_853_) == 2)
{
lean_object* v_l_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_l_854_ = lean_ctor_get(v_val_853_, 0);
lean_inc_ref(v_l_854_);
lean_dec_ref_known(v_val_853_, 1);
v___x_855_ = ((lean_object*)(l_Lasm_UI_Runtime_handlersFor___redArg___closed__0));
v___x_856_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_849_, v_l_854_, v_attrs_850_, v___x_855_);
lean_dec_ref(v_l_854_);
lean_dec_ref(v_event_849_);
return v___x_856_;
}
else
{
lean_object* v___x_857_; 
lean_dec(v_val_853_);
lean_dec(v_attrs_850_);
lean_dec_ref(v_event_849_);
v___x_857_ = lean_box(0);
return v___x_857_;
}
}
else
{
lean_object* v___x_858_; 
lean_dec(v___x_852_);
lean_dec(v_attrs_850_);
lean_dec_ref(v_event_849_);
v___x_858_ = lean_box(0);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor(lean_object* v_Msg_859_, lean_object* v_event_860_, lean_object* v_attrs_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_event_860_, v_attrs_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(lean_object* v_Msg_863_, lean_object* v_event_864_, lean_object* v_l_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_864_, v_l_865_, v_a_866_, v_a_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___boxed(lean_object* v_Msg_869_, lean_object* v_event_870_, lean_object* v_l_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(v_Msg_869_, v_event_870_, v_l_871_, v_a_872_, v_a_873_);
lean_dec_ref(v_l_871_);
lean_dec_ref(v_event_870_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
if (lean_obj_tag(v_a_875_) == 0)
{
lean_object* v___x_877_; 
v___x_877_ = l_List_reverse___redArg(v_a_876_);
return v___x_877_;
}
else
{
lean_object* v_head_878_; lean_object* v_tail_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_888_; 
v_head_878_ = lean_ctor_get(v_a_875_, 0);
v_tail_879_ = lean_ctor_get(v_a_875_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_a_875_);
if (v_isSharedCheck_888_ == 0)
{
v___x_881_ = v_a_875_;
v_isShared_882_ = v_isSharedCheck_888_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_tail_879_);
lean_inc(v_head_878_);
lean_dec(v_a_875_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_888_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_883_ = lean_array_mk(v_head_878_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 1, v_a_876_);
lean_ctor_set(v___x_881_, 0, v___x_883_);
v___x_885_ = v___x_881_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_a_876_);
v___x_885_ = v_reuseFailAlloc_887_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
v_a_875_ = v_tail_879_;
v_a_876_ = v___x_885_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t v_sz_889_, size_t v_i_890_, lean_object* v_bs_891_){
_start:
{
uint8_t v___x_892_; 
v___x_892_ = lean_usize_dec_lt(v_i_890_, v_sz_889_);
if (v___x_892_ == 0)
{
return v_bs_891_;
}
else
{
lean_object* v_v_893_; lean_object* v___x_894_; lean_object* v_bs_x27_895_; lean_object* v___x_896_; size_t v___x_897_; size_t v___x_898_; lean_object* v___x_899_; 
v_v_893_ = lean_array_uget(v_bs_891_, v_i_890_);
v___x_894_ = lean_unsigned_to_nat(0u);
v_bs_x27_895_ = lean_array_uset(v_bs_891_, v_i_890_, v___x_894_);
v___x_896_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_896_, 0, v_v_893_);
v___x_897_ = ((size_t)1ULL);
v___x_898_ = lean_usize_add(v_i_890_, v___x_897_);
v___x_899_ = lean_array_uset(v_bs_x27_895_, v_i_890_, v___x_896_);
v_i_890_ = v___x_898_;
v_bs_891_ = v___x_899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object* v_sz_901_, lean_object* v_i_902_, lean_object* v_bs_903_){
_start:
{
size_t v_sz_boxed_904_; size_t v_i_boxed_905_; lean_object* v_res_906_; 
v_sz_boxed_904_ = lean_unbox_usize(v_sz_901_);
lean_dec(v_sz_901_);
v_i_boxed_905_ = lean_unbox_usize(v_i_902_);
lean_dec(v_i_902_);
v_res_906_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_boxed_904_, v_i_boxed_905_, v_bs_903_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t v_sz_907_, size_t v_i_908_, lean_object* v_bs_909_){
_start:
{
uint8_t v___x_910_; 
v___x_910_ = lean_usize_dec_lt(v_i_908_, v_sz_907_);
if (v___x_910_ == 0)
{
return v_bs_909_;
}
else
{
lean_object* v_v_911_; lean_object* v___x_912_; lean_object* v_bs_x27_913_; size_t v_sz_914_; size_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; size_t v___x_918_; size_t v___x_919_; lean_object* v___x_920_; 
v_v_911_ = lean_array_uget(v_bs_909_, v_i_908_);
v___x_912_ = lean_unsigned_to_nat(0u);
v_bs_x27_913_ = lean_array_uset(v_bs_909_, v_i_908_, v___x_912_);
v_sz_914_ = lean_array_size(v_v_911_);
v___x_915_ = ((size_t)0ULL);
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_914_, v___x_915_, v_v_911_);
v___x_917_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
v___x_918_ = ((size_t)1ULL);
v___x_919_ = lean_usize_add(v_i_908_, v___x_918_);
v___x_920_ = lean_array_uset(v_bs_x27_913_, v_i_908_, v___x_917_);
v_i_908_ = v___x_919_;
v_bs_909_ = v___x_920_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object* v_sz_922_, lean_object* v_i_923_, lean_object* v_bs_924_){
_start:
{
size_t v_sz_boxed_925_; size_t v_i_boxed_926_; lean_object* v_res_927_; 
v_sz_boxed_925_ = lean_unbox_usize(v_sz_922_);
lean_dec(v_sz_922_);
v_i_boxed_926_ = lean_unbox_usize(v_i_923_);
lean_dec(v_i_923_);
v_res_927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_boxed_925_, v_i_boxed_926_, v_bs_924_);
return v_res_927_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__2(void){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_931_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__1));
v___x_932_ = lean_unsigned_to_nat(2u);
v___x_933_ = lean_mk_empty_array_with_capacity(v___x_932_);
v___x_934_ = lean_array_push(v___x_933_, v___x_931_);
return v___x_934_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__9(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_947_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___x_948_ = lean_unsigned_to_nat(5u);
v___x_949_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_950_ = lean_array_push(v___x_949_, v___x_947_);
return v___x_950_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__12(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__11));
v___x_955_ = lean_unsigned_to_nat(5u);
v___x_956_ = lean_mk_empty_array_with_capacity(v___x_955_);
v___x_957_ = lean_array_push(v___x_956_, v___x_954_);
return v___x_957_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__15(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_961_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__14));
v___x_962_ = lean_unsigned_to_nat(2u);
v___x_963_ = lean_mk_empty_array_with_capacity(v___x_962_);
v___x_964_ = lean_array_push(v___x_963_, v___x_961_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_965_){
_start:
{
switch(lean_obj_tag(v_x_965_))
{
case 0:
{
lean_object* v_ms_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_984_; 
v_ms_966_ = lean_ctor_get(v_x_965_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v_x_965_);
if (v_isSharedCheck_984_ == 0)
{
v___x_968_ = v_x_965_;
v_isShared_969_ = v_isSharedCheck_984_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_ms_966_);
lean_dec(v_x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_984_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___y_971_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_977_ = lean_nat_to_int(v_ms_966_);
v___x_978_ = lean_nat_abs(v___x_977_);
v___x_979_ = lean_cstr_to_nat("9007199254740991");
v___x_980_ = lean_nat_dec_le(v___x_978_, v___x_979_);
lean_dec(v___x_978_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_977_);
v___y_971_ = v___x_981_;
goto v___jp_970_;
}
else
{
double v___x_982_; lean_object* v___x_983_; 
v___x_982_ = l_Float_ofInt(v___x_977_);
lean_dec(v___x_977_);
v___x_983_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_983_, 0, v___x_982_);
v___y_971_ = v___x_983_;
goto v___jp_970_;
}
v___jp_970_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_972_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_973_ = lean_array_push(v___x_972_, v___y_971_);
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 7);
lean_ctor_set(v___x_968_, 0, v___x_973_);
v___x_975_ = v___x_968_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
case 1:
{
lean_object* v___x_985_; 
v___x_985_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_985_;
}
case 2:
{
lean_object* v_event_986_; lean_object* v_paths_987_; uint8_t v_preventDefault_988_; uint8_t v_stopPropagation_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; size_t v_sz_994_; size_t v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_event_986_ = lean_ctor_get(v_x_965_, 0);
lean_inc_ref(v_event_986_);
v_paths_987_ = lean_ctor_get(v_x_965_, 1);
lean_inc(v_paths_987_);
v_preventDefault_988_ = lean_ctor_get_uint8(v_x_965_, sizeof(void*)*2);
v_stopPropagation_989_ = lean_ctor_get_uint8(v_x_965_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_965_, 2);
v___x_990_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_990_, 0, v_event_986_);
v___x_991_ = lean_box(0);
v___x_992_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_987_, v___x_991_);
v___x_993_ = lean_array_mk(v___x_992_);
v_sz_994_ = lean_array_size(v___x_993_);
v___x_995_ = ((size_t)0ULL);
v___x_996_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_994_, v___x_995_, v___x_993_);
v___x_997_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
v___x_998_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_998_, 0, v_preventDefault_988_);
v___x_999_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_999_, 0, v_stopPropagation_989_);
v___x_1000_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__9, &l_Lasm_UI_Runtime_specData___closed__9_once, _init_l_Lasm_UI_Runtime_specData___closed__9);
v___x_1001_ = lean_array_push(v___x_1000_, v___x_990_);
v___x_1002_ = lean_array_push(v___x_1001_, v___x_997_);
v___x_1003_ = lean_array_push(v___x_1002_, v___x_998_);
v___x_1004_ = lean_array_push(v___x_1003_, v___x_999_);
v___x_1005_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
case 3:
{
lean_object* v_event_1006_; lean_object* v_paths_1007_; uint8_t v_preventDefault_1008_; uint8_t v_stopPropagation_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; size_t v_sz_1014_; size_t v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_event_1006_ = lean_ctor_get(v_x_965_, 0);
lean_inc_ref(v_event_1006_);
v_paths_1007_ = lean_ctor_get(v_x_965_, 1);
lean_inc(v_paths_1007_);
v_preventDefault_1008_ = lean_ctor_get_uint8(v_x_965_, sizeof(void*)*2);
v_stopPropagation_1009_ = lean_ctor_get_uint8(v_x_965_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_965_, 2);
v___x_1010_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1010_, 0, v_event_1006_);
v___x_1011_ = lean_box(0);
v___x_1012_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_1007_, v___x_1011_);
v___x_1013_ = lean_array_mk(v___x_1012_);
v_sz_1014_ = lean_array_size(v___x_1013_);
v___x_1015_ = ((size_t)0ULL);
v___x_1016_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1014_, v___x_1015_, v___x_1013_);
v___x_1017_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1018_, 0, v_preventDefault_1008_);
v___x_1019_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1019_, 0, v_stopPropagation_1009_);
v___x_1020_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__12, &l_Lasm_UI_Runtime_specData___closed__12_once, _init_l_Lasm_UI_Runtime_specData___closed__12);
v___x_1021_ = lean_array_push(v___x_1020_, v___x_1010_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_1017_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1018_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1019_);
v___x_1025_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
return v___x_1025_;
}
default: 
{
lean_object* v_name_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1036_; 
v_name_1026_ = lean_ctor_get(v_x_965_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_x_965_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1028_ = v_x_965_;
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_name_1026_);
lean_dec(v_x_965_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_name_1026_);
v___x_1031_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__15, &l_Lasm_UI_Runtime_specData___closed__15_once, _init_l_Lasm_UI_Runtime_specData___closed__15);
v___x_1033_ = lean_array_push(v___x_1032_, v___x_1031_);
v___x_1034_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
return v___x_1034_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_1039_){
_start:
{
if (v_x_1039_ == 0)
{
lean_object* v___x_1040_; 
v___x_1040_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_1040_;
}
else
{
lean_object* v___x_1041_; 
v___x_1041_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_1041_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_1042_){
_start:
{
uint8_t v_x_22__boxed_1043_; lean_object* v_res_1044_; 
v_x_22__boxed_1043_ = lean_unbox(v_x_1042_);
v_res_1044_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_1043_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_1045_, lean_object* v_e_1046_){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_1049_ = lean_string_append(v_what_1045_, v___x_1048_);
v___x_1050_ = lean_io_error_to_string(v_e_1046_);
v___x_1051_ = lean_string_append(v___x_1049_, v___x_1050_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = lean_box(0);
v___x_1053_ = l_Lasm_UI_Runtime_Dom_error(v___x_1051_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1060_ == 0)
{
lean_object* v_unused_1061_; 
v_unused_1061_ = lean_ctor_get(v___x_1053_, 0);
lean_dec(v_unused_1061_);
v___x_1055_ = v___x_1053_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_dec(v___x_1053_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1052_);
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1052_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
else
{
lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1068_ == 0)
{
lean_object* v_unused_1069_; 
v_unused_1069_ = lean_ctor_get(v___x_1053_, 0);
lean_dec(v_unused_1069_);
v___x_1063_ = v___x_1053_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_dec(v___x_1053_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1052_);
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1052_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_1070_, lean_object* v_e_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_UI_Runtime_report(v_what_1070_, v_e_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_1074_){
_start:
{
lean_object* v_ref_1076_; lean_object* v___x_1077_; uint8_t v_dirty_1078_; 
v_ref_1076_ = lean_ctor_get(v_c_1074_, 1);
v___x_1077_ = lean_st_ref_get(v_ref_1076_);
v_dirty_1078_ = lean_ctor_get_uint8(v___x_1077_, sizeof(void*)*10);
if (v_dirty_1078_ == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_dec(v___x_1077_);
v___x_1079_ = lean_box(v_dirty_1078_);
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
return v___x_1080_;
}
else
{
uint8_t v_scheduled_1081_; 
v_scheduled_1081_ = lean_ctor_get_uint8(v___x_1077_, sizeof(void*)*10 + 1);
if (v_scheduled_1081_ == 0)
{
lean_object* v_model_1082_; lean_object* v_live_1083_; lean_object* v_next_1084_; lean_object* v_tables_1085_; lean_object* v_queue_1086_; uint8_t v_busy_1087_; lean_object* v_subs_1088_; lean_object* v_handlers_1089_; lean_object* v_nextSub_1090_; lean_object* v_touched_1091_; lean_object* v_ports_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1102_; 
v_model_1082_ = lean_ctor_get(v___x_1077_, 0);
v_live_1083_ = lean_ctor_get(v___x_1077_, 1);
v_next_1084_ = lean_ctor_get(v___x_1077_, 2);
v_tables_1085_ = lean_ctor_get(v___x_1077_, 3);
v_queue_1086_ = lean_ctor_get(v___x_1077_, 4);
v_busy_1087_ = lean_ctor_get_uint8(v___x_1077_, sizeof(void*)*10 + 2);
v_subs_1088_ = lean_ctor_get(v___x_1077_, 5);
v_handlers_1089_ = lean_ctor_get(v___x_1077_, 6);
v_nextSub_1090_ = lean_ctor_get(v___x_1077_, 7);
v_touched_1091_ = lean_ctor_get(v___x_1077_, 8);
v_ports_1092_ = lean_ctor_get(v___x_1077_, 9);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1094_ = v___x_1077_;
v_isShared_1095_ = v_isSharedCheck_1102_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_ports_1092_);
lean_inc(v_touched_1091_);
lean_inc(v_nextSub_1090_);
lean_inc(v_handlers_1089_);
lean_inc(v_subs_1088_);
lean_inc(v_queue_1086_);
lean_inc(v_tables_1085_);
lean_inc(v_next_1084_);
lean_inc(v_live_1083_);
lean_inc(v_model_1082_);
lean_dec(v___x_1077_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1102_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_model_1082_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_live_1083_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_next_1084_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_tables_1085_);
lean_ctor_set(v_reuseFailAlloc_1101_, 4, v_queue_1086_);
lean_ctor_set(v_reuseFailAlloc_1101_, 5, v_subs_1088_);
lean_ctor_set(v_reuseFailAlloc_1101_, 6, v_handlers_1089_);
lean_ctor_set(v_reuseFailAlloc_1101_, 7, v_nextSub_1090_);
lean_ctor_set(v_reuseFailAlloc_1101_, 8, v_touched_1091_);
lean_ctor_set(v_reuseFailAlloc_1101_, 9, v_ports_1092_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*10, v_dirty_1078_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*10 + 2, v_busy_1087_);
v___x_1097_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*10 + 1, v_dirty_1078_);
v___x_1098_ = lean_st_ref_swap(v_ref_1076_, v___x_1097_);
lean_dec(v___x_1098_);
v___x_1099_ = lean_box(v_dirty_1078_);
v___x_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
return v___x_1100_;
}
}
}
else
{
uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec(v___x_1077_);
v___x_1103_ = 0;
v___x_1104_ = lean_box(v___x_1103_);
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
return v___x_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1106_);
lean_dec_ref(v_c_1106_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_1109_, lean_object* v_Model_1110_, lean_object* v_Msg_1111_, lean_object* v_c_1112_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1112_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1115_, lean_object* v_Model_1116_, lean_object* v_Msg_1117_, lean_object* v_c_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1115_, v_Model_1116_, v_Msg_1117_, v_c_1118_);
lean_dec_ref(v_c_1118_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1134_; 
v___x_1123_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1121_);
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1134_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1123_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1134_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
uint8_t v___x_1128_; 
v___x_1128_ = lean_unbox(v_a_1124_);
lean_dec(v_a_1124_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(0);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1129_);
v___x_1131_ = v___x_1126_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
else
{
lean_object* v___x_1133_; 
lean_del_object(v___x_1126_);
v___x_1133_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1135_);
lean_dec_ref(v_c_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1138_, lean_object* v_Model_1139_, lean_object* v_Msg_1140_, lean_object* v_c_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1144_, lean_object* v_Model_1145_, lean_object* v_Msg_1146_, lean_object* v_c_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1144_, v_Model_1145_, v_Msg_1146_, v_c_1147_);
lean_dec_ref(v_c_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1150_, lean_object* v_b_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_dec(v_b_1151_);
lean_dec(v_a_1150_);
return v_x_1152_;
}
else
{
lean_object* v_key_1153_; lean_object* v_value_1154_; lean_object* v_tail_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1167_; 
v_key_1153_ = lean_ctor_get(v_x_1152_, 0);
v_value_1154_ = lean_ctor_get(v_x_1152_, 1);
v_tail_1155_ = lean_ctor_get(v_x_1152_, 2);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1157_ = v_x_1152_;
v_isShared_1158_ = v_isSharedCheck_1167_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_tail_1155_);
lean_inc(v_value_1154_);
lean_inc(v_key_1153_);
lean_dec(v_x_1152_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1167_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
uint8_t v___x_1159_; 
lean_inc(v_a_1150_);
lean_inc(v_key_1153_);
v___x_1159_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1153_, v_a_1150_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1160_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1150_, v_b_1151_, v_tail_1155_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 2, v___x_1160_);
v___x_1162_ = v___x_1157_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_key_1153_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_value_1154_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
else
{
lean_object* v___x_1165_; 
lean_dec(v_value_1154_);
lean_dec(v_key_1153_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 1, v_b_1151_);
lean_ctor_set(v___x_1157_, 0, v_a_1150_);
v___x_1165_ = v___x_1157_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1150_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_b_1151_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_tail_1155_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1168_, lean_object* v_x_1169_){
_start:
{
if (lean_obj_tag(v_x_1169_) == 0)
{
uint8_t v___x_1170_; 
lean_dec(v_a_1168_);
v___x_1170_ = 0;
return v___x_1170_;
}
else
{
lean_object* v_key_1171_; lean_object* v_tail_1172_; uint8_t v___x_1173_; 
v_key_1171_ = lean_ctor_get(v_x_1169_, 0);
lean_inc(v_key_1171_);
v_tail_1172_ = lean_ctor_get(v_x_1169_, 2);
lean_inc(v_tail_1172_);
lean_dec_ref_known(v_x_1169_, 3);
lean_inc(v_a_1168_);
v___x_1173_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1171_, v_a_1168_);
if (v___x_1173_ == 0)
{
v_x_1169_ = v_tail_1172_;
goto _start;
}
else
{
lean_dec(v_tail_1172_);
lean_dec(v_a_1168_);
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1175_, lean_object* v_x_1176_){
_start:
{
uint8_t v_res_1177_; lean_object* v_r_1178_; 
v_res_1177_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1175_, v_x_1176_);
v_r_1178_ = lean_box(v_res_1177_);
return v_r_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
if (lean_obj_tag(v_x_1180_) == 0)
{
return v_x_1179_;
}
else
{
lean_object* v_key_1181_; lean_object* v_value_1182_; lean_object* v_tail_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1206_; 
v_key_1181_ = lean_ctor_get(v_x_1180_, 0);
v_value_1182_ = lean_ctor_get(v_x_1180_, 1);
v_tail_1183_ = lean_ctor_get(v_x_1180_, 2);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1185_ = v_x_1180_;
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_tail_1183_);
lean_inc(v_value_1182_);
lean_inc(v_key_1181_);
lean_dec(v_x_1180_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; uint64_t v___x_1188_; uint64_t v___x_1189_; uint64_t v___x_1190_; uint64_t v_fold_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v___x_1194_; size_t v___x_1195_; size_t v___x_1196_; size_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1187_ = lean_array_get_size(v_x_1179_);
v___x_1188_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1181_);
v___x_1189_ = 32ULL;
v___x_1190_ = lean_uint64_shift_right(v___x_1188_, v___x_1189_);
v_fold_1191_ = lean_uint64_xor(v___x_1188_, v___x_1190_);
v___x_1192_ = 16ULL;
v___x_1193_ = lean_uint64_shift_right(v_fold_1191_, v___x_1192_);
v___x_1194_ = lean_uint64_xor(v_fold_1191_, v___x_1193_);
v___x_1195_ = lean_uint64_to_usize(v___x_1194_);
v___x_1196_ = lean_usize_of_nat(v___x_1187_);
v___x_1197_ = ((size_t)1ULL);
v___x_1198_ = lean_usize_sub(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_usize_land(v___x_1195_, v___x_1198_);
v___x_1200_ = lean_array_uget_borrowed(v_x_1179_, v___x_1199_);
lean_inc(v___x_1200_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 2, v___x_1200_);
v___x_1202_ = v___x_1185_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_key_1181_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v_value_1182_);
lean_ctor_set(v_reuseFailAlloc_1205_, 2, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_array_uset(v_x_1179_, v___x_1199_, v___x_1202_);
v_x_1179_ = v___x_1203_;
v_x_1180_ = v_tail_1183_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1207_, lean_object* v_source_1208_, lean_object* v_target_1209_){
_start:
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = lean_array_get_size(v_source_1208_);
v___x_1211_ = lean_nat_dec_lt(v_i_1207_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_dec_ref(v_source_1208_);
lean_dec(v_i_1207_);
return v_target_1209_;
}
else
{
lean_object* v_es_1212_; lean_object* v___x_1213_; lean_object* v_source_1214_; lean_object* v_target_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_es_1212_ = lean_array_fget(v_source_1208_, v_i_1207_);
v___x_1213_ = lean_box(0);
v_source_1214_ = lean_array_fset(v_source_1208_, v_i_1207_, v___x_1213_);
v_target_1215_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1209_, v_es_1212_);
v___x_1216_ = lean_unsigned_to_nat(1u);
v___x_1217_ = lean_nat_add(v_i_1207_, v___x_1216_);
lean_dec(v_i_1207_);
v_i_1207_ = v___x_1217_;
v_source_1208_ = v_source_1214_;
v_target_1209_ = v_target_1215_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1219_){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v_nbuckets_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1220_ = lean_array_get_size(v_data_1219_);
v___x_1221_ = lean_unsigned_to_nat(2u);
v_nbuckets_1222_ = lean_nat_mul(v___x_1220_, v___x_1221_);
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_mk_array(v_nbuckets_1222_, v___x_1224_);
v___x_1226_ = lean_array_propagate_mark(v_data_1219_, v___x_1225_);
v___x_1227_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1223_, v_data_1219_, v___x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1228_, lean_object* v_a_1229_, lean_object* v_b_1230_){
_start:
{
lean_object* v_size_1231_; lean_object* v_buckets_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1275_; 
v_size_1231_ = lean_ctor_get(v_m_1228_, 0);
v_buckets_1232_ = lean_ctor_get(v_m_1228_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_m_1228_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1234_ = v_m_1228_;
v_isShared_1235_ = v_isSharedCheck_1275_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_buckets_1232_);
lean_inc(v_size_1231_);
lean_dec(v_m_1228_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1275_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1236_; uint64_t v___x_1237_; uint64_t v___x_1238_; uint64_t v___x_1239_; uint64_t v_fold_1240_; uint64_t v___x_1241_; uint64_t v___x_1242_; uint64_t v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; size_t v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; lean_object* v_bkt_1249_; uint8_t v___x_1250_; 
v___x_1236_ = lean_array_get_size(v_buckets_1232_);
v___x_1237_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1229_);
v___x_1238_ = 32ULL;
v___x_1239_ = lean_uint64_shift_right(v___x_1237_, v___x_1238_);
v_fold_1240_ = lean_uint64_xor(v___x_1237_, v___x_1239_);
v___x_1241_ = 16ULL;
v___x_1242_ = lean_uint64_shift_right(v_fold_1240_, v___x_1241_);
v___x_1243_ = lean_uint64_xor(v_fold_1240_, v___x_1242_);
v___x_1244_ = lean_uint64_to_usize(v___x_1243_);
v___x_1245_ = lean_usize_of_nat(v___x_1236_);
v___x_1246_ = ((size_t)1ULL);
v___x_1247_ = lean_usize_sub(v___x_1245_, v___x_1246_);
v___x_1248_ = lean_usize_land(v___x_1244_, v___x_1247_);
v_bkt_1249_ = lean_array_uget_borrowed(v_buckets_1232_, v___x_1248_);
lean_inc(v_bkt_1249_);
lean_inc(v_a_1229_);
v___x_1250_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1229_, v_bkt_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; lean_object* v_size_x27_1252_; lean_object* v___x_1253_; lean_object* v_buckets_x27_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1251_ = lean_unsigned_to_nat(1u);
v_size_x27_1252_ = lean_nat_add(v_size_1231_, v___x_1251_);
lean_dec(v_size_1231_);
lean_inc(v_bkt_1249_);
v___x_1253_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1253_, 0, v_a_1229_);
lean_ctor_set(v___x_1253_, 1, v_b_1230_);
lean_ctor_set(v___x_1253_, 2, v_bkt_1249_);
v_buckets_x27_1254_ = lean_array_uset(v_buckets_1232_, v___x_1248_, v___x_1253_);
v___x_1255_ = lean_unsigned_to_nat(4u);
v___x_1256_ = lean_nat_mul(v_size_x27_1252_, v___x_1255_);
v___x_1257_ = lean_unsigned_to_nat(3u);
v___x_1258_ = lean_nat_div(v___x_1256_, v___x_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_array_get_size(v_buckets_x27_1254_);
v___x_1260_ = lean_nat_dec_le(v___x_1258_, v___x_1259_);
lean_dec(v___x_1258_);
if (v___x_1260_ == 0)
{
lean_object* v_val_1261_; lean_object* v___x_1263_; 
v_val_1261_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1254_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v_val_1261_);
lean_ctor_set(v___x_1234_, 0, v_size_x27_1252_);
v___x_1263_ = v___x_1234_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_size_x27_1252_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_val_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
else
{
lean_object* v___x_1266_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v_buckets_x27_1254_);
lean_ctor_set(v___x_1234_, 0, v_size_x27_1252_);
v___x_1266_ = v___x_1234_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_size_x27_1252_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_buckets_x27_1254_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
else
{
lean_object* v___x_1268_; lean_object* v_buckets_x27_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
lean_inc(v_bkt_1249_);
v___x_1268_ = lean_box(0);
v_buckets_x27_1269_ = lean_array_uset(v_buckets_1232_, v___x_1248_, v___x_1268_);
v___x_1270_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1229_, v_b_1230_, v_bkt_1249_);
v___x_1271_ = lean_array_uset(v_buckets_x27_1269_, v___x_1248_, v___x_1270_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v___x_1271_);
v___x_1273_ = v___x_1234_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_size_1231_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1276_, lean_object* v_fallback_1277_, lean_object* v_x_1278_){
_start:
{
if (lean_obj_tag(v_x_1278_) == 0)
{
lean_dec(v_a_1276_);
lean_inc(v_fallback_1277_);
return v_fallback_1277_;
}
else
{
lean_object* v_key_1279_; lean_object* v_value_1280_; lean_object* v_tail_1281_; uint8_t v___x_1282_; 
v_key_1279_ = lean_ctor_get(v_x_1278_, 0);
lean_inc(v_key_1279_);
v_value_1280_ = lean_ctor_get(v_x_1278_, 1);
lean_inc(v_value_1280_);
v_tail_1281_ = lean_ctor_get(v_x_1278_, 2);
lean_inc(v_tail_1281_);
lean_dec_ref_known(v_x_1278_, 3);
lean_inc(v_a_1276_);
v___x_1282_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1279_, v_a_1276_);
if (v___x_1282_ == 0)
{
lean_dec(v_value_1280_);
v_x_1278_ = v_tail_1281_;
goto _start;
}
else
{
lean_dec(v_tail_1281_);
lean_dec(v_a_1276_);
return v_value_1280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1284_, lean_object* v_fallback_1285_, lean_object* v_x_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1284_, v_fallback_1285_, v_x_1286_);
lean_dec(v_fallback_1285_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1288_, lean_object* v_a_1289_, lean_object* v_fallback_1290_){
_start:
{
lean_object* v_buckets_1291_; lean_object* v___x_1292_; uint64_t v___x_1293_; uint64_t v___x_1294_; uint64_t v___x_1295_; uint64_t v_fold_1296_; uint64_t v___x_1297_; uint64_t v___x_1298_; uint64_t v___x_1299_; size_t v___x_1300_; size_t v___x_1301_; size_t v___x_1302_; size_t v___x_1303_; size_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_buckets_1291_ = lean_ctor_get(v_m_1288_, 1);
v___x_1292_ = lean_array_get_size(v_buckets_1291_);
v___x_1293_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1289_);
v___x_1294_ = 32ULL;
v___x_1295_ = lean_uint64_shift_right(v___x_1293_, v___x_1294_);
v_fold_1296_ = lean_uint64_xor(v___x_1293_, v___x_1295_);
v___x_1297_ = 16ULL;
v___x_1298_ = lean_uint64_shift_right(v_fold_1296_, v___x_1297_);
v___x_1299_ = lean_uint64_xor(v_fold_1296_, v___x_1298_);
v___x_1300_ = lean_uint64_to_usize(v___x_1299_);
v___x_1301_ = lean_usize_of_nat(v___x_1292_);
v___x_1302_ = ((size_t)1ULL);
v___x_1303_ = lean_usize_sub(v___x_1301_, v___x_1302_);
v___x_1304_ = lean_usize_land(v___x_1300_, v___x_1303_);
v___x_1305_ = lean_array_uget_borrowed(v_buckets_1291_, v___x_1304_);
lean_inc(v___x_1305_);
v___x_1306_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1289_, v_fallback_1290_, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1307_, lean_object* v_a_1308_, lean_object* v_fallback_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1307_, v_a_1308_, v_fallback_1309_);
lean_dec(v_fallback_1309_);
lean_dec_ref(v_m_1307_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1311_, lean_object* v_b_1312_){
_start:
{
if (lean_obj_tag(v_as_x27_1311_) == 0)
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_b_1312_);
return v___x_1314_;
}
else
{
lean_object* v_head_1315_; lean_object* v_tail_1316_; lean_object* v_spec_1317_; lean_object* v_handle_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v_head_1315_ = lean_ctor_get(v_as_x27_1311_, 0);
v_tail_1316_ = lean_ctor_get(v_as_x27_1311_, 1);
v_spec_1317_ = lean_ctor_get(v_head_1315_, 0);
v_handle_1318_ = lean_ctor_get(v_head_1315_, 1);
v___x_1319_ = lean_box(0);
lean_inc_n(v_spec_1317_, 2);
v___x_1320_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1312_, v_spec_1317_, v___x_1319_);
lean_inc_ref(v_handle_1318_);
v___x_1321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1321_, 0, v_handle_1318_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1312_, v_spec_1317_, v___x_1321_);
v_as_x27_1311_ = v_tail_1316_;
v_b_1312_ = v___x_1322_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1324_, lean_object* v_b_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1324_, v_b_1325_);
lean_dec(v_as_x27_1324_);
return v_res_1327_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v_buckets_1330_; lean_object* v___x_1331_; uint64_t v___x_1332_; uint64_t v___x_1333_; uint64_t v___x_1334_; uint64_t v_fold_1335_; uint64_t v___x_1336_; uint64_t v___x_1337_; uint64_t v___x_1338_; size_t v___x_1339_; size_t v___x_1340_; size_t v___x_1341_; size_t v___x_1342_; size_t v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v_buckets_1330_ = lean_ctor_get(v_m_1328_, 1);
v___x_1331_ = lean_array_get_size(v_buckets_1330_);
v___x_1332_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1329_);
v___x_1333_ = 32ULL;
v___x_1334_ = lean_uint64_shift_right(v___x_1332_, v___x_1333_);
v_fold_1335_ = lean_uint64_xor(v___x_1332_, v___x_1334_);
v___x_1336_ = 16ULL;
v___x_1337_ = lean_uint64_shift_right(v_fold_1335_, v___x_1336_);
v___x_1338_ = lean_uint64_xor(v_fold_1335_, v___x_1337_);
v___x_1339_ = lean_uint64_to_usize(v___x_1338_);
v___x_1340_ = lean_usize_of_nat(v___x_1331_);
v___x_1341_ = ((size_t)1ULL);
v___x_1342_ = lean_usize_sub(v___x_1340_, v___x_1341_);
v___x_1343_ = lean_usize_land(v___x_1339_, v___x_1342_);
v___x_1344_ = lean_array_uget_borrowed(v_buckets_1330_, v___x_1343_);
lean_inc(v___x_1344_);
v___x_1345_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1329_, v___x_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1346_, lean_object* v_a_1347_){
_start:
{
uint8_t v_res_1348_; lean_object* v_r_1349_; 
v_res_1348_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1346_, v_a_1347_);
lean_dec_ref(v_m_1346_);
v_r_1349_ = lean_box(v_res_1348_);
return v_r_1349_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1350_, lean_object* v_x_1351_){
_start:
{
if (lean_obj_tag(v_x_1351_) == 0)
{
lean_dec(v_a_1350_);
return v_x_1351_;
}
else
{
lean_object* v_key_1352_; lean_object* v_value_1353_; lean_object* v_tail_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1363_; 
v_key_1352_ = lean_ctor_get(v_x_1351_, 0);
v_value_1353_ = lean_ctor_get(v_x_1351_, 1);
v_tail_1354_ = lean_ctor_get(v_x_1351_, 2);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_x_1351_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1356_ = v_x_1351_;
v_isShared_1357_ = v_isSharedCheck_1363_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_tail_1354_);
lean_inc(v_value_1353_);
lean_inc(v_key_1352_);
lean_dec(v_x_1351_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1363_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
uint8_t v___x_1358_; 
lean_inc(v_a_1350_);
lean_inc(v_key_1352_);
v___x_1358_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1352_, v_a_1350_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1350_, v_tail_1354_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 2, v___x_1359_);
v___x_1361_ = v___x_1356_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_key_1352_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_value_1353_);
lean_ctor_set(v_reuseFailAlloc_1362_, 2, v___x_1359_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
else
{
lean_del_object(v___x_1356_);
lean_dec(v_value_1353_);
lean_dec(v_key_1352_);
lean_dec(v_a_1350_);
return v_tail_1354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_size_1366_; lean_object* v_buckets_1367_; lean_object* v___x_1368_; uint64_t v___x_1369_; uint64_t v___x_1370_; uint64_t v___x_1371_; uint64_t v_fold_1372_; uint64_t v___x_1373_; uint64_t v___x_1374_; uint64_t v___x_1375_; size_t v___x_1376_; size_t v___x_1377_; size_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; lean_object* v_bkt_1381_; uint8_t v___x_1382_; 
v_size_1366_ = lean_ctor_get(v_m_1364_, 0);
v_buckets_1367_ = lean_ctor_get(v_m_1364_, 1);
v___x_1368_ = lean_array_get_size(v_buckets_1367_);
v___x_1369_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1365_);
v___x_1370_ = 32ULL;
v___x_1371_ = lean_uint64_shift_right(v___x_1369_, v___x_1370_);
v_fold_1372_ = lean_uint64_xor(v___x_1369_, v___x_1371_);
v___x_1373_ = 16ULL;
v___x_1374_ = lean_uint64_shift_right(v_fold_1372_, v___x_1373_);
v___x_1375_ = lean_uint64_xor(v_fold_1372_, v___x_1374_);
v___x_1376_ = lean_uint64_to_usize(v___x_1375_);
v___x_1377_ = lean_usize_of_nat(v___x_1368_);
v___x_1378_ = ((size_t)1ULL);
v___x_1379_ = lean_usize_sub(v___x_1377_, v___x_1378_);
v___x_1380_ = lean_usize_land(v___x_1376_, v___x_1379_);
v_bkt_1381_ = lean_array_uget_borrowed(v_buckets_1367_, v___x_1380_);
lean_inc(v_bkt_1381_);
lean_inc(v_a_1365_);
v___x_1382_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1365_, v_bkt_1381_);
if (v___x_1382_ == 0)
{
lean_dec(v_a_1365_);
return v_m_1364_;
}
else
{
lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1395_; 
lean_inc(v_bkt_1381_);
lean_inc_ref(v_buckets_1367_);
lean_inc(v_size_1366_);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_m_1364_);
if (v_isSharedCheck_1395_ == 0)
{
lean_object* v_unused_1396_; lean_object* v_unused_1397_; 
v_unused_1396_ = lean_ctor_get(v_m_1364_, 1);
lean_dec(v_unused_1396_);
v_unused_1397_ = lean_ctor_get(v_m_1364_, 0);
lean_dec(v_unused_1397_);
v___x_1384_ = v_m_1364_;
v_isShared_1385_ = v_isSharedCheck_1395_;
goto v_resetjp_1383_;
}
else
{
lean_dec(v_m_1364_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1395_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v_buckets_x27_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1386_ = lean_box(0);
v_buckets_x27_1387_ = lean_array_uset(v_buckets_1367_, v___x_1380_, v___x_1386_);
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = lean_nat_sub(v_size_1366_, v___x_1388_);
lean_dec(v_size_1366_);
v___x_1390_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1365_, v_bkt_1381_);
v___x_1391_ = lean_array_uset(v_buckets_x27_1387_, v___x_1380_, v___x_1390_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v___x_1391_);
lean_ctor_set(v___x_1384_, 0, v___x_1389_);
v___x_1393_ = v___x_1384_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
if (lean_obj_tag(v_a_1399_) == 0)
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_a_1400_);
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
return v___x_1403_;
}
else
{
lean_object* v_key_1404_; lean_object* v_value_1405_; lean_object* v_tail_1406_; uint8_t v___x_1407_; 
v_key_1404_ = lean_ctor_get(v_a_1399_, 0);
lean_inc_n(v_key_1404_, 2);
v_value_1405_ = lean_ctor_get(v_a_1399_, 1);
lean_inc(v_value_1405_);
v_tail_1406_ = lean_ctor_get(v_a_1399_, 2);
lean_inc(v_tail_1406_);
lean_dec_ref_known(v_a_1399_, 3);
v___x_1407_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1398_, v_key_1404_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; 
lean_inc(v_key_1404_);
v___x_1408_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1400_, v_key_1404_);
if (lean_obj_tag(v_key_1404_) == 4)
{
lean_dec_ref_known(v_key_1404_, 1);
lean_dec(v_value_1405_);
v_a_1399_ = v_tail_1406_;
v_a_1400_ = v___x_1408_;
goto _start;
}
else
{
lean_object* v___x_1410_; 
lean_dec(v_key_1404_);
v___x_1410_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1405_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_dec_ref_known(v___x_1410_, 1);
v_a_1399_ = v_tail_1406_;
v_a_1400_ = v___x_1408_;
goto _start;
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec_ref(v___x_1408_);
lean_dec(v_tail_1406_);
v_a_1412_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1410_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1410_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
}
else
{
lean_dec(v_value_1405_);
lean_dec(v_key_1404_);
v_a_1399_ = v_tail_1406_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1421_, v_a_1422_, v_a_1423_);
lean_dec_ref(v_a_1421_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1426_, lean_object* v_as_1427_, size_t v_sz_1428_, size_t v_i_1429_, lean_object* v_b_1430_){
_start:
{
uint8_t v___x_1432_; 
v___x_1432_ = lean_usize_dec_lt(v_i_1429_, v_sz_1428_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v_b_1430_);
return v___x_1433_;
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1435_; 
v_a_1434_ = lean_array_uget_borrowed(v_as_1427_, v_i_1429_);
lean_inc(v_a_1434_);
v___x_1435_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1426_, v_a_1434_, v_b_1430_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1448_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1438_ = v___x_1435_;
v_isShared_1439_ = v_isSharedCheck_1448_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1435_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1448_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
if (lean_obj_tag(v_a_1436_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1442_; 
v_a_1440_ = lean_ctor_get(v_a_1436_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v_a_1436_, 1);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v_a_1440_);
v___x_1442_ = v___x_1438_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
else
{
lean_object* v_a_1444_; size_t v___x_1445_; size_t v___x_1446_; 
lean_del_object(v___x_1438_);
v_a_1444_ = lean_ctor_get(v_a_1436_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v_a_1436_, 1);
v___x_1445_ = ((size_t)1ULL);
v___x_1446_ = lean_usize_add(v_i_1429_, v___x_1445_);
v_i_1429_ = v___x_1446_;
v_b_1430_ = v_a_1444_;
goto _start;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
v_a_1449_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1435_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1435_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1457_, lean_object* v_as_1458_, lean_object* v_sz_1459_, lean_object* v_i_1460_, lean_object* v_b_1461_, lean_object* v___y_1462_){
_start:
{
size_t v_sz_boxed_1463_; size_t v_i_boxed_1464_; lean_object* v_res_1465_; 
v_sz_boxed_1463_ = lean_unbox_usize(v_sz_1459_);
lean_dec(v_sz_1459_);
v_i_boxed_1464_ = lean_unbox_usize(v_i_1460_);
lean_dec(v_i_1460_);
v_res_1465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1457_, v_as_1458_, v_sz_boxed_1463_, v_i_boxed_1464_, v_b_1461_);
lean_dec_ref(v_as_1458_);
lean_dec_ref(v_a_1457_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1466_, lean_object* v_x_1467_){
_start:
{
if (lean_obj_tag(v_x_1467_) == 0)
{
lean_object* v___x_1468_; 
lean_dec(v_a_1466_);
v___x_1468_ = lean_box(0);
return v___x_1468_;
}
else
{
lean_object* v_key_1469_; lean_object* v_value_1470_; lean_object* v_tail_1471_; uint8_t v___x_1472_; 
v_key_1469_ = lean_ctor_get(v_x_1467_, 0);
lean_inc(v_key_1469_);
v_value_1470_ = lean_ctor_get(v_x_1467_, 1);
lean_inc(v_value_1470_);
v_tail_1471_ = lean_ctor_get(v_x_1467_, 2);
lean_inc(v_tail_1471_);
lean_dec_ref_known(v_x_1467_, 3);
lean_inc(v_a_1466_);
v___x_1472_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1469_, v_a_1466_);
if (v___x_1472_ == 0)
{
lean_dec(v_value_1470_);
v_x_1467_ = v_tail_1471_;
goto _start;
}
else
{
lean_object* v___x_1474_; 
lean_dec(v_tail_1471_);
lean_dec(v_a_1466_);
v___x_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1474_, 0, v_value_1470_);
return v___x_1474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v_buckets_1477_; lean_object* v___x_1478_; uint64_t v___x_1479_; uint64_t v___x_1480_; uint64_t v___x_1481_; uint64_t v_fold_1482_; uint64_t v___x_1483_; uint64_t v___x_1484_; uint64_t v___x_1485_; size_t v___x_1486_; size_t v___x_1487_; size_t v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v_buckets_1477_ = lean_ctor_get(v_m_1475_, 1);
v___x_1478_ = lean_array_get_size(v_buckets_1477_);
v___x_1479_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1476_);
v___x_1480_ = 32ULL;
v___x_1481_ = lean_uint64_shift_right(v___x_1479_, v___x_1480_);
v_fold_1482_ = lean_uint64_xor(v___x_1479_, v___x_1481_);
v___x_1483_ = 16ULL;
v___x_1484_ = lean_uint64_shift_right(v_fold_1482_, v___x_1483_);
v___x_1485_ = lean_uint64_xor(v_fold_1482_, v___x_1484_);
v___x_1486_ = lean_uint64_to_usize(v___x_1485_);
v___x_1487_ = lean_usize_of_nat(v___x_1478_);
v___x_1488_ = ((size_t)1ULL);
v___x_1489_ = lean_usize_sub(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_usize_land(v___x_1486_, v___x_1489_);
v___x_1491_ = lean_array_uget_borrowed(v_buckets_1477_, v___x_1490_);
lean_inc(v___x_1491_);
v___x_1492_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1476_, v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1493_, lean_object* v_a_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1493_, v_a_1494_);
lean_dec_ref(v_m_1493_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1496_, lean_object* v_fallback_1497_, lean_object* v_x_1498_){
_start:
{
if (lean_obj_tag(v_x_1498_) == 0)
{
lean_inc(v_fallback_1497_);
return v_fallback_1497_;
}
else
{
lean_object* v_key_1499_; lean_object* v_value_1500_; lean_object* v_tail_1501_; uint8_t v___x_1502_; 
v_key_1499_ = lean_ctor_get(v_x_1498_, 0);
v_value_1500_ = lean_ctor_get(v_x_1498_, 1);
v_tail_1501_ = lean_ctor_get(v_x_1498_, 2);
v___x_1502_ = lean_nat_dec_eq(v_key_1499_, v_a_1496_);
if (v___x_1502_ == 0)
{
v_x_1498_ = v_tail_1501_;
goto _start;
}
else
{
lean_inc(v_value_1500_);
return v_value_1500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1504_, lean_object* v_fallback_1505_, lean_object* v_x_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1504_, v_fallback_1505_, v_x_1506_);
lean_dec(v_x_1506_);
lean_dec(v_fallback_1505_);
lean_dec(v_a_1504_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1508_, lean_object* v_a_1509_, lean_object* v_fallback_1510_){
_start:
{
lean_object* v_buckets_1511_; lean_object* v___x_1512_; uint64_t v___x_1513_; uint64_t v___x_1514_; uint64_t v___x_1515_; uint64_t v_fold_1516_; uint64_t v___x_1517_; uint64_t v___x_1518_; uint64_t v___x_1519_; size_t v___x_1520_; size_t v___x_1521_; size_t v___x_1522_; size_t v___x_1523_; size_t v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_buckets_1511_ = lean_ctor_get(v_m_1508_, 1);
v___x_1512_ = lean_array_get_size(v_buckets_1511_);
v___x_1513_ = lean_uint64_of_nat(v_a_1509_);
v___x_1514_ = 32ULL;
v___x_1515_ = lean_uint64_shift_right(v___x_1513_, v___x_1514_);
v_fold_1516_ = lean_uint64_xor(v___x_1513_, v___x_1515_);
v___x_1517_ = 16ULL;
v___x_1518_ = lean_uint64_shift_right(v_fold_1516_, v___x_1517_);
v___x_1519_ = lean_uint64_xor(v_fold_1516_, v___x_1518_);
v___x_1520_ = lean_uint64_to_usize(v___x_1519_);
v___x_1521_ = lean_usize_of_nat(v___x_1512_);
v___x_1522_ = ((size_t)1ULL);
v___x_1523_ = lean_usize_sub(v___x_1521_, v___x_1522_);
v___x_1524_ = lean_usize_land(v___x_1520_, v___x_1523_);
v___x_1525_ = lean_array_uget_borrowed(v_buckets_1511_, v___x_1524_);
v___x_1526_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1509_, v_fallback_1510_, v___x_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1527_, lean_object* v_a_1528_, lean_object* v_fallback_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1527_, v_a_1528_, v_fallback_1529_);
lean_dec(v_fallback_1529_);
lean_dec(v_a_1528_);
lean_dec_ref(v_m_1527_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1532_, lean_object* v_value_1533_){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = ((lean_object*)(l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_mk_empty_array_with_capacity(v___x_1536_);
v___x_1538_ = lean_array_push(v___x_1537_, v_value_1533_);
v___x_1539_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_1532_, v___x_1535_, v___x_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1540_, lean_object* v_value_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1540_, v_value_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1549_);
lean_dec_ref(v_x_1549_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
if (lean_obj_tag(v_a_1551_) == 0)
{
lean_object* v___x_1553_; 
v___x_1553_ = l_List_reverse___redArg(v_a_1552_);
return v___x_1553_;
}
else
{
lean_object* v_head_1554_; lean_object* v_tail_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1569_; 
v_head_1554_ = lean_ctor_get(v_a_1551_, 0);
v_tail_1555_ = lean_ctor_get(v_a_1551_, 1);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_a_1551_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1557_ = v_a_1551_;
v_isShared_1558_ = v_isSharedCheck_1569_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_tail_1555_);
lean_inc(v_head_1554_);
lean_dec(v_a_1551_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1569_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v_fst_1559_; lean_object* v_snd_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
v_fst_1559_ = lean_ctor_get(v_head_1554_, 0);
lean_inc(v_fst_1559_);
v_snd_1560_ = lean_ctor_get(v_head_1554_, 1);
lean_inc(v_snd_1560_);
lean_dec(v_head_1554_);
v___x_1561_ = lean_unsigned_to_nat(2u);
v___x_1562_ = lean_mk_empty_array_with_capacity(v___x_1561_);
v___x_1563_ = lean_array_push(v___x_1562_, v_fst_1559_);
v___x_1564_ = lean_array_push(v___x_1563_, v_snd_1560_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 1, v_a_1552_);
lean_ctor_set(v___x_1557_, 0, v___x_1564_);
v___x_1566_ = v___x_1557_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v_a_1552_);
v___x_1566_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
v_a_1551_ = v_tail_1555_;
v_a_1552_ = v___x_1566_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
if (lean_obj_tag(v_a_1570_) == 0)
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_array_to_list(v_a_1571_);
return v___x_1572_;
}
else
{
lean_object* v_head_1573_; 
v_head_1573_ = lean_ctor_get(v_a_1570_, 0);
if (lean_obj_tag(v_head_1573_) == 7)
{
lean_object* v_tail_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1596_; 
lean_inc_ref(v_head_1573_);
v_tail_1574_ = lean_ctor_get(v_a_1570_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_a_1570_);
if (v_isSharedCheck_1596_ == 0)
{
lean_object* v_unused_1597_; 
v_unused_1597_ = lean_ctor_get(v_a_1570_, 0);
lean_dec(v_unused_1597_);
v___x_1576_ = v_a_1570_;
v_isShared_1577_ = v_isSharedCheck_1596_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_tail_1574_);
lean_dec(v_a_1570_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1596_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v_items_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; 
v_items_1578_ = lean_ctor_get(v_head_1573_, 0);
lean_inc_ref(v_items_1578_);
lean_dec_ref_known(v_head_1573_, 1);
v___x_1579_ = lean_array_get_size(v_items_1578_);
v___x_1580_ = lean_unsigned_to_nat(2u);
v___x_1581_ = lean_nat_dec_eq(v___x_1579_, v___x_1580_);
if (v___x_1581_ == 0)
{
lean_dec_ref(v_items_1578_);
lean_del_object(v___x_1576_);
v_a_1570_ = v_tail_1574_;
goto _start;
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = lean_array_fget_borrowed(v_items_1578_, v___x_1583_);
if (lean_obj_tag(v___x_1584_) == 4)
{
lean_object* v_s_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v_s_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc_ref(v_s_1585_);
v___x_1586_ = lean_unsigned_to_nat(1u);
v___x_1587_ = lean_array_fget(v_items_1578_, v___x_1586_);
lean_dec_ref(v_items_1578_);
if (lean_obj_tag(v___x_1587_) == 4)
{
lean_object* v_s_1588_; lean_object* v___x_1590_; 
v_s_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc_ref(v_s_1588_);
lean_dec_ref_known(v___x_1587_, 1);
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 0);
lean_ctor_set(v___x_1576_, 1, v_s_1588_);
lean_ctor_set(v___x_1576_, 0, v_s_1585_);
v___x_1590_ = v___x_1576_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_s_1585_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v_s_1588_);
v___x_1590_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_array_push(v_a_1571_, v___x_1590_);
v_a_1570_ = v_tail_1574_;
v_a_1571_ = v___x_1591_;
goto _start;
}
}
else
{
lean_dec(v___x_1587_);
lean_dec_ref(v_s_1585_);
lean_del_object(v___x_1576_);
v_a_1570_ = v_tail_1574_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1578_);
lean_del_object(v___x_1576_);
v_a_1570_ = v_tail_1574_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1598_; 
v_tail_1598_ = lean_ctor_get(v_a_1570_, 1);
lean_inc(v_tail_1598_);
lean_dec_ref_known(v_a_1570_, 2);
v_a_1570_ = v_tail_1598_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1600_, lean_object* v_s_1601_){
_start:
{
lean_object* v_model_1602_; lean_object* v_live_1603_; lean_object* v_next_1604_; lean_object* v_tables_1605_; uint8_t v_dirty_1606_; uint8_t v_scheduled_1607_; lean_object* v_queue_1608_; lean_object* v_subs_1609_; lean_object* v_handlers_1610_; lean_object* v_nextSub_1611_; lean_object* v_touched_1612_; lean_object* v_ports_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
v_model_1602_ = lean_ctor_get(v_s_1601_, 0);
v_live_1603_ = lean_ctor_get(v_s_1601_, 1);
v_next_1604_ = lean_ctor_get(v_s_1601_, 2);
v_tables_1605_ = lean_ctor_get(v_s_1601_, 3);
v_dirty_1606_ = lean_ctor_get_uint8(v_s_1601_, sizeof(void*)*10);
v_scheduled_1607_ = lean_ctor_get_uint8(v_s_1601_, sizeof(void*)*10 + 1);
v_queue_1608_ = lean_ctor_get(v_s_1601_, 4);
v_subs_1609_ = lean_ctor_get(v_s_1601_, 5);
v_handlers_1610_ = lean_ctor_get(v_s_1601_, 6);
v_nextSub_1611_ = lean_ctor_get(v_s_1601_, 7);
v_touched_1612_ = lean_ctor_get(v_s_1601_, 8);
v_ports_1613_ = lean_ctor_get(v_s_1601_, 9);
v_isSharedCheck_1620_ = !lean_is_exclusive(v_s_1601_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v_s_1601_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_ports_1613_);
lean_inc(v_touched_1612_);
lean_inc(v_nextSub_1611_);
lean_inc(v_handlers_1610_);
lean_inc(v_subs_1609_);
lean_inc(v_queue_1608_);
lean_inc(v_tables_1605_);
lean_inc(v_next_1604_);
lean_inc(v_live_1603_);
lean_inc(v_model_1602_);
lean_dec(v_s_1601_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
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
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_model_1602_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v_live_1603_);
lean_ctor_set(v_reuseFailAlloc_1619_, 2, v_next_1604_);
lean_ctor_set(v_reuseFailAlloc_1619_, 3, v_tables_1605_);
lean_ctor_set(v_reuseFailAlloc_1619_, 4, v_queue_1608_);
lean_ctor_set(v_reuseFailAlloc_1619_, 5, v_subs_1609_);
lean_ctor_set(v_reuseFailAlloc_1619_, 6, v_handlers_1610_);
lean_ctor_set(v_reuseFailAlloc_1619_, 7, v_nextSub_1611_);
lean_ctor_set(v_reuseFailAlloc_1619_, 8, v_touched_1612_);
lean_ctor_set(v_reuseFailAlloc_1619_, 9, v_ports_1613_);
lean_ctor_set_uint8(v_reuseFailAlloc_1619_, sizeof(void*)*10, v_dirty_1606_);
lean_ctor_set_uint8(v_reuseFailAlloc_1619_, sizeof(void*)*10 + 1, v_scheduled_1607_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
lean_ctor_set_uint8(v___x_1618_, sizeof(void*)*10 + 2, v_busy_1600_);
return v___x_1618_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1621_, lean_object* v_s_1622_){
_start:
{
uint8_t v_busy_boxed_1623_; lean_object* v_res_1624_; 
v_busy_boxed_1623_ = lean_unbox(v_busy_1621_);
v_res_1624_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1623_, v_s_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1625_, lean_object* v_msg_1626_, lean_object* v_x_1627_){
_start:
{
lean_object* v___x_1629_; 
lean_inc_ref(v_c_1625_);
v___x_1629_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1625_, v_msg_1626_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v___x_1630_; 
lean_dec_ref_known(v___x_1629_, 1);
v___x_1630_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1625_);
lean_dec_ref(v_c_1625_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1640_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1633_ = v___x_1630_;
v_isShared_1634_ = v_isSharedCheck_1640_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1630_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1640_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v___x_1638_; 
v___x_1635_ = lean_alloc_ctor(2, 0, 1);
v___x_1636_ = lean_unbox(v_a_1631_);
lean_dec(v_a_1631_);
lean_ctor_set_uint8(v___x_1635_, 0, v___x_1636_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1635_);
v___x_1638_ = v___x_1633_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1635_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
v_a_1641_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1630_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1630_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec_ref(v_c_1625_);
v_a_1649_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1629_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1629_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1657_, lean_object* v_msg_1658_, lean_object* v_x_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1657_, v_msg_1658_, v_x_1659_);
lean_dec_ref(v_x_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1665_, lean_object* v_c_1666_, lean_object* v___f_1667_, lean_object* v_args_1668_){
_start:
{
lean_object* v___y_1671_; lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = lean_array_get_size(v_args_1668_);
v___x_1702_ = lean_unsigned_to_nat(5u);
v___x_1703_ = lean_nat_dec_eq(v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = lean_unsigned_to_nat(2u);
v___x_1705_ = lean_nat_dec_eq(v___x_1701_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_apply_1(v___f_1667_, v_args_1668_);
v___y_1671_ = v___x_1706_;
goto v___jp_1670_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_unsigned_to_nat(0u);
v___x_1708_ = lean_array_fget(v_args_1668_, v___x_1707_);
if (lean_obj_tag(v___x_1708_) == 2)
{
uint8_t v_b_1709_; 
v_b_1709_ = lean_ctor_get_uint8(v___x_1708_, 0);
if (v_b_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1710_ = lean_unsigned_to_nat(1u);
v___x_1711_ = lean_array_fget(v_args_1668_, v___x_1710_);
lean_dec_ref(v_args_1668_);
if (lean_obj_tag(v___x_1711_) == 4)
{
lean_object* v_s_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
lean_dec_ref_known(v___x_1708_, 0);
lean_dec_ref(v___f_1667_);
v_s_1712_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___x_1711_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_s_1712_);
lean_dec(v___x_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
lean_ctor_set_tag(v___x_1714_, 0);
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_s_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
v___y_1671_ = v___x_1717_;
goto v___jp_1670_;
}
}
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1720_ = lean_mk_empty_array_with_capacity(v___x_1704_);
v___x_1721_ = lean_array_push(v___x_1720_, v___x_1708_);
v___x_1722_ = lean_array_push(v___x_1721_, v___x_1711_);
v___x_1723_ = lean_apply_1(v___f_1667_, v___x_1722_);
v___y_1671_ = v___x_1723_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1724_ = lean_unsigned_to_nat(1u);
v___x_1725_ = lean_array_fget(v_args_1668_, v___x_1724_);
lean_dec_ref(v_args_1668_);
v___x_1726_ = lean_mk_empty_array_with_capacity(v___x_1704_);
v___x_1727_ = lean_array_push(v___x_1726_, v___x_1708_);
v___x_1728_ = lean_array_push(v___x_1727_, v___x_1725_);
v___x_1729_ = lean_apply_1(v___f_1667_, v___x_1728_);
v___y_1671_ = v___x_1729_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1730_ = lean_unsigned_to_nat(1u);
v___x_1731_ = lean_array_fget(v_args_1668_, v___x_1730_);
lean_dec_ref(v_args_1668_);
v___x_1732_ = lean_mk_empty_array_with_capacity(v___x_1704_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1708_);
v___x_1734_ = lean_array_push(v___x_1733_, v___x_1731_);
v___x_1735_ = lean_apply_1(v___f_1667_, v___x_1734_);
v___y_1671_ = v___x_1735_;
goto v___jp_1670_;
}
}
}
else
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_unsigned_to_nat(0u);
v___x_1737_ = lean_array_fget_borrowed(v_args_1668_, v___x_1736_);
if (lean_obj_tag(v___x_1737_) == 2)
{
uint8_t v_b_1738_; 
v_b_1738_ = lean_ctor_get_uint8(v___x_1737_, 0);
if (v_b_1738_ == 1)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_unsigned_to_nat(2u);
v___x_1740_ = lean_array_fget_borrowed(v_args_1668_, v___x_1739_);
if (lean_obj_tag(v___x_1740_) == 4)
{
lean_object* v_s_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_s_1741_ = lean_ctor_get(v___x_1740_, 0);
v___x_1742_ = lean_unsigned_to_nat(3u);
v___x_1743_ = lean_array_fget_borrowed(v_args_1668_, v___x_1742_);
if (lean_obj_tag(v___x_1743_) == 7)
{
lean_object* v_items_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v_items_1744_ = lean_ctor_get(v___x_1743_, 0);
v___x_1745_ = lean_unsigned_to_nat(4u);
v___x_1746_ = lean_array_fget(v_args_1668_, v___x_1745_);
if (lean_obj_tag(v___x_1746_) == 4)
{
lean_object* v_s_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1765_; 
lean_inc_ref(v_items_1744_);
lean_inc_ref(v_s_1741_);
lean_dec_ref(v___f_1667_);
v_s_1747_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1749_ = v___x_1746_;
v_isShared_1750_ = v_isSharedCheck_1765_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_s_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1765_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___y_1752_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_unsigned_to_nat(1u);
v___x_1761_ = lean_array_fget(v_args_1668_, v___x_1760_);
lean_dec_ref(v_args_1668_);
if (lean_obj_tag(v___x_1761_) == 3)
{
double v_n_1762_; uint64_t v___x_1763_; lean_object* v___x_1764_; 
v_n_1762_ = lean_ctor_get_float(v___x_1761_, 0);
lean_dec_ref_known(v___x_1761_, 0);
v___x_1763_ = lean_float_to_uint64(v_n_1762_);
v___x_1764_ = lean_uint64_to_nat(v___x_1763_);
v___y_1752_ = v___x_1764_;
goto v___jp_1751_;
}
else
{
lean_dec(v___x_1761_);
v___y_1752_ = v___x_1736_;
goto v___jp_1751_;
}
v___jp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1753_ = lean_array_to_list(v_items_1744_);
v___x_1754_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1755_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1753_, v___x_1754_);
v___x_1756_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1756_, 0, v___y_1752_);
lean_ctor_set(v___x_1756_, 1, v_s_1741_);
lean_ctor_set(v___x_1756_, 2, v___x_1755_);
lean_ctor_set(v___x_1756_, 3, v_s_1747_);
if (v_isShared_1750_ == 0)
{
lean_ctor_set_tag(v___x_1749_, 1);
lean_ctor_set(v___x_1749_, 0, v___x_1756_);
v___x_1758_ = v___x_1749_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
v___y_1671_ = v___x_1758_;
goto v___jp_1670_;
}
}
}
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_inc_ref(v___x_1743_);
lean_inc_ref(v___x_1740_);
lean_inc_ref(v___x_1737_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_array_fget(v_args_1668_, v___x_1766_);
lean_dec_ref(v_args_1668_);
v___x_1768_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1769_ = lean_array_push(v___x_1768_, v___x_1737_);
v___x_1770_ = lean_array_push(v___x_1769_, v___x_1767_);
v___x_1771_ = lean_array_push(v___x_1770_, v___x_1740_);
v___x_1772_ = lean_array_push(v___x_1771_, v___x_1743_);
v___x_1773_ = lean_array_push(v___x_1772_, v___x_1746_);
v___x_1774_ = lean_apply_1(v___f_1667_, v___x_1773_);
v___y_1671_ = v___x_1774_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
lean_inc(v___x_1743_);
lean_inc_ref(v___x_1740_);
lean_inc_ref(v___x_1737_);
v___x_1775_ = lean_unsigned_to_nat(1u);
v___x_1776_ = lean_array_fget(v_args_1668_, v___x_1775_);
v___x_1777_ = lean_unsigned_to_nat(4u);
v___x_1778_ = lean_array_fget(v_args_1668_, v___x_1777_);
lean_dec_ref(v_args_1668_);
v___x_1779_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1737_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1776_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1740_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1743_);
v___x_1784_ = lean_array_push(v___x_1783_, v___x_1778_);
v___x_1785_ = lean_apply_1(v___f_1667_, v___x_1784_);
v___y_1671_ = v___x_1785_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_inc(v___x_1740_);
lean_inc_ref(v___x_1737_);
v___x_1786_ = lean_unsigned_to_nat(1u);
v___x_1787_ = lean_array_fget(v_args_1668_, v___x_1786_);
v___x_1788_ = lean_unsigned_to_nat(3u);
v___x_1789_ = lean_array_fget(v_args_1668_, v___x_1788_);
v___x_1790_ = lean_unsigned_to_nat(4u);
v___x_1791_ = lean_array_fget(v_args_1668_, v___x_1790_);
lean_dec_ref(v_args_1668_);
v___x_1792_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1793_ = lean_array_push(v___x_1792_, v___x_1737_);
v___x_1794_ = lean_array_push(v___x_1793_, v___x_1787_);
v___x_1795_ = lean_array_push(v___x_1794_, v___x_1740_);
v___x_1796_ = lean_array_push(v___x_1795_, v___x_1789_);
v___x_1797_ = lean_array_push(v___x_1796_, v___x_1791_);
v___x_1798_ = lean_apply_1(v___f_1667_, v___x_1797_);
v___y_1671_ = v___x_1798_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
lean_inc_ref(v___x_1737_);
v___x_1799_ = lean_unsigned_to_nat(1u);
v___x_1800_ = lean_array_fget(v_args_1668_, v___x_1799_);
v___x_1801_ = lean_unsigned_to_nat(2u);
v___x_1802_ = lean_array_fget(v_args_1668_, v___x_1801_);
v___x_1803_ = lean_unsigned_to_nat(3u);
v___x_1804_ = lean_array_fget(v_args_1668_, v___x_1803_);
v___x_1805_ = lean_unsigned_to_nat(4u);
v___x_1806_ = lean_array_fget(v_args_1668_, v___x_1805_);
lean_dec_ref(v_args_1668_);
v___x_1807_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1737_);
v___x_1809_ = lean_array_push(v___x_1808_, v___x_1800_);
v___x_1810_ = lean_array_push(v___x_1809_, v___x_1802_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1804_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1806_);
v___x_1813_ = lean_apply_1(v___f_1667_, v___x_1812_);
v___y_1671_ = v___x_1813_;
goto v___jp_1670_;
}
}
else
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_inc(v___x_1737_);
v___x_1814_ = lean_unsigned_to_nat(1u);
v___x_1815_ = lean_array_fget(v_args_1668_, v___x_1814_);
v___x_1816_ = lean_unsigned_to_nat(2u);
v___x_1817_ = lean_array_fget(v_args_1668_, v___x_1816_);
v___x_1818_ = lean_unsigned_to_nat(3u);
v___x_1819_ = lean_array_fget(v_args_1668_, v___x_1818_);
v___x_1820_ = lean_unsigned_to_nat(4u);
v___x_1821_ = lean_array_fget(v_args_1668_, v___x_1820_);
lean_dec_ref(v_args_1668_);
v___x_1822_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1823_ = lean_array_push(v___x_1822_, v___x_1737_);
v___x_1824_ = lean_array_push(v___x_1823_, v___x_1815_);
v___x_1825_ = lean_array_push(v___x_1824_, v___x_1817_);
v___x_1826_ = lean_array_push(v___x_1825_, v___x_1819_);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1821_);
v___x_1828_ = lean_apply_1(v___f_1667_, v___x_1827_);
v___y_1671_ = v___x_1828_;
goto v___jp_1670_;
}
}
v___jp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_apply_1(v_handle_1665_, v___y_1671_);
lean_inc_ref(v_c_1666_);
v___x_1673_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1666_, v___x_1672_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v___x_1674_; 
lean_dec_ref_known(v___x_1673_, 1);
v___x_1674_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1666_);
lean_dec_ref(v_c_1666_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1684_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; uint8_t v___x_1680_; lean_object* v___x_1682_; 
v___x_1679_ = lean_alloc_ctor(2, 0, 1);
v___x_1680_ = lean_unbox(v_a_1675_);
lean_dec(v_a_1675_);
lean_ctor_set_uint8(v___x_1679_, 0, v___x_1680_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v___x_1679_);
v___x_1682_ = v___x_1677_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1679_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v_a_1685_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1674_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1674_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_dec_ref(v_c_1666_);
v_a_1693_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1673_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1673_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1829_, lean_object* v_c_1830_, lean_object* v___f_1831_, lean_object* v_args_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1829_, v_c_1830_, v___f_1831_, v_args_1832_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1835_, lean_object* v_m_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1835_, v_m_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1839_, lean_object* v_e_1840_){
_start:
{
switch(lean_obj_tag(v_e_1840_))
{
case 0:
{
lean_object* v_msg_1842_; lean_object* v___x_1843_; 
v_msg_1842_ = lean_ctor_get(v_e_1840_, 0);
lean_inc(v_msg_1842_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1843_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1839_, v_msg_1842_);
return v___x_1843_;
}
case 1:
{
lean_object* v_ms_1844_; lean_object* v_msg_1845_; lean_object* v___f_1846_; lean_object* v___x_1847_; 
v_ms_1844_ = lean_ctor_get(v_e_1840_, 0);
lean_inc(v_ms_1844_);
v_msg_1845_ = lean_ctor_get(v_e_1840_, 1);
lean_inc(v_msg_1845_);
lean_dec_ref_known(v_e_1840_, 2);
v___f_1846_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1846_, 0, v_c_1839_);
lean_closure_set(v___f_1846_, 1, v_msg_1845_);
v___x_1847_ = l_Lasm_JS_Function_ofSyncFn(v___f_1846_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1849_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref_known(v___x_1847_, 1);
v___x_1849_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1844_, v_a_1848_);
return v___x_1849_;
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_ms_1844_);
v_a_1850_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1847_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1847_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
case 2:
{
lean_object* v_request_1858_; lean_object* v_handle_1859_; lean_object* v___f_1860_; lean_object* v___f_1861_; lean_object* v___x_1862_; 
v_request_1858_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_request_1858_);
v_handle_1859_ = lean_ctor_get(v_e_1840_, 1);
lean_inc(v_handle_1859_);
lean_dec_ref_known(v_e_1840_, 2);
v___f_1860_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1861_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1861_, 0, v_handle_1859_);
lean_closure_set(v___f_1861_, 1, v_c_1839_);
lean_closure_set(v___f_1861_, 2, v___f_1860_);
v___x_1862_ = l_Lasm_JS_Function_ofSyncFn(v___f_1861_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v_a_1863_; lean_object* v_method_1864_; lean_object* v_url_1865_; lean_object* v_headers_1866_; lean_object* v_body_1867_; lean_object* v_credentials_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; size_t v_sz_1872_; size_t v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v_a_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_a_1863_);
lean_dec_ref_known(v___x_1862_, 1);
v_method_1864_ = lean_ctor_get(v_request_1858_, 0);
lean_inc_ref(v_method_1864_);
v_url_1865_ = lean_ctor_get(v_request_1858_, 1);
lean_inc_ref(v_url_1865_);
v_headers_1866_ = lean_ctor_get(v_request_1858_, 2);
lean_inc(v_headers_1866_);
v_body_1867_ = lean_ctor_get(v_request_1858_, 3);
lean_inc(v_body_1867_);
v_credentials_1868_ = lean_ctor_get(v_request_1858_, 4);
lean_inc_ref(v_credentials_1868_);
lean_dec_ref(v_request_1858_);
v___x_1869_ = lean_box(0);
v___x_1870_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1866_, v___x_1869_);
v___x_1871_ = lean_array_mk(v___x_1870_);
v_sz_1872_ = lean_array_size(v___x_1871_);
v___x_1873_ = ((size_t)0ULL);
v___x_1874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1872_, v___x_1873_, v___x_1871_);
v___x_1875_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
v___x_1876_ = l_Lasm_UI_Runtime_Dom_http(v_method_1864_, v_url_1865_, v___x_1875_, v_body_1867_, v_credentials_1868_, v_a_1863_);
return v___x_1876_;
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec_ref(v_request_1858_);
v_a_1877_ = lean_ctor_get(v___x_1862_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1862_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1862_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
case 3:
{
lean_object* v_n_1885_; lean_object* v_handle_1886_; size_t v___x_1887_; lean_object* v___x_1888_; 
v_n_1885_ = lean_ctor_get(v_e_1840_, 0);
lean_inc(v_n_1885_);
v_handle_1886_ = lean_ctor_get(v_e_1840_, 1);
lean_inc(v_handle_1886_);
lean_dec_ref_known(v_e_1840_, 2);
v___x_1887_ = lean_usize_of_nat(v_n_1885_);
lean_dec(v_n_1885_);
v___x_1888_ = lean_io_get_random_bytes(v___x_1887_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1888_, 1);
v___x_1890_ = lean_apply_1(v_handle_1886_, v_a_1889_);
v___x_1891_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1839_, v___x_1890_);
return v___x_1891_;
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1899_; 
lean_dec(v_handle_1886_);
lean_dec_ref(v_c_1839_);
v_a_1892_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1894_ = v___x_1888_;
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v___x_1888_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1899_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1897_; 
if (v_isShared_1895_ == 0)
{
v___x_1897_ = v___x_1894_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1892_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
case 4:
{
lean_object* v_handle_1900_; lean_object* v___x_1901_; 
v_handle_1900_ = lean_ctor_get(v_e_1840_, 0);
lean_inc(v_handle_1900_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1901_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = lean_apply_1(v_handle_1900_, v_a_1902_);
v___x_1904_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1839_, v___x_1903_);
return v___x_1904_;
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_dec(v_handle_1900_);
lean_dec_ref(v_c_1839_);
v_a_1905_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1901_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1901_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
case 5:
{
lean_object* v_url_1913_; uint8_t v_replace_1914_; lean_object* v___x_1915_; 
lean_dec_ref(v_c_1839_);
v_url_1913_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_url_1913_);
v_replace_1914_ = lean_ctor_get_uint8(v_e_1840_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1915_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1913_, v_replace_1914_);
return v___x_1915_;
}
case 6:
{
lean_object* v_n_1916_; lean_object* v___x_1917_; 
lean_dec_ref(v_c_1839_);
v_n_1916_ = lean_ctor_get(v_e_1840_, 0);
lean_inc(v_n_1916_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1917_ = l_Lasm_UI_Runtime_Dom_go(v_n_1916_);
return v___x_1917_;
}
case 7:
{
lean_object* v_url_1918_; lean_object* v___x_1919_; 
lean_dec_ref(v_c_1839_);
v_url_1918_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_url_1918_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1919_ = l_Lasm_UI_Runtime_Dom_load(v_url_1918_);
return v___x_1919_;
}
case 8:
{
uint8_t v_storage_1920_; lean_object* v_key_1921_; lean_object* v_value_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
lean_dec_ref(v_c_1839_);
v_storage_1920_ = lean_ctor_get_uint8(v_e_1840_, sizeof(void*)*2);
v_key_1921_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_key_1921_);
v_value_1922_ = lean_ctor_get(v_e_1840_, 1);
lean_inc_ref(v_value_1922_);
lean_dec_ref_known(v_e_1840_, 2);
v___x_1923_ = l_Lasm_UI_Runtime_storageName(v_storage_1920_);
v___x_1924_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_1923_, v_key_1921_, v_value_1922_);
return v___x_1924_;
}
case 9:
{
uint8_t v_storage_1925_; lean_object* v_key_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
lean_dec_ref(v_c_1839_);
v_storage_1925_ = lean_ctor_get_uint8(v_e_1840_, sizeof(void*)*1);
v_key_1926_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_key_1926_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1927_ = l_Lasm_UI_Runtime_storageName(v_storage_1925_);
v___x_1928_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_1927_, v_key_1926_);
return v___x_1928_;
}
case 10:
{
uint8_t v_storage_1929_; lean_object* v_key_1930_; lean_object* v_handle_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_storage_1929_ = lean_ctor_get_uint8(v_e_1840_, sizeof(void*)*2);
v_key_1930_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_key_1930_);
v_handle_1931_ = lean_ctor_get(v_e_1840_, 1);
lean_inc(v_handle_1931_);
lean_dec_ref_known(v_e_1840_, 2);
v___x_1932_ = l_Lasm_UI_Runtime_storageName(v_storage_1929_);
v___x_1933_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_1932_, v_key_1930_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1933_, 1);
v___x_1935_ = lean_apply_1(v_handle_1931_, v_a_1934_);
v___x_1936_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1839_, v___x_1935_);
return v___x_1936_;
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_handle_1931_);
lean_dec_ref(v_c_1839_);
v_a_1937_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1933_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1933_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
case 11:
{
lean_object* v_id_1945_; uint8_t v_blur_1946_; lean_object* v___x_1947_; 
lean_dec_ref(v_c_1839_);
v_id_1945_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_id_1945_);
v_blur_1946_ = lean_ctor_get_uint8(v_e_1840_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1947_ = l_Lasm_UI_Runtime_Dom_focus(v_id_1945_, v_blur_1946_);
return v___x_1947_;
}
case 12:
{
lean_object* v_name_1948_; lean_object* v_value_1949_; lean_object* v___x_1950_; 
lean_dec_ref(v_c_1839_);
v_name_1948_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_name_1948_);
v_value_1949_ = lean_ctor_get(v_e_1840_, 1);
lean_inc(v_value_1949_);
lean_dec_ref_known(v_e_1840_, 2);
v___x_1950_ = l_Lasm_Web_App_Raw_port(v_name_1948_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1952_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1951_);
lean_dec_ref_known(v___x_1950_, 1);
v___x_1952_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_1951_, v_value_1949_);
return v___x_1952_;
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec(v_value_1949_);
v_a_1953_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1950_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1950_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
case 13:
{
lean_object* v_title_1961_; lean_object* v___x_1962_; 
lean_dec_ref(v_c_1839_);
v_title_1961_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_title_1961_);
lean_dec_ref_known(v_e_1840_, 1);
v___x_1962_ = l_Lasm_UI_Runtime_Dom_title(v_title_1961_);
return v___x_1962_;
}
default: 
{
lean_object* v_run_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; 
v_run_1963_ = lean_ctor_get(v_e_1840_, 0);
lean_inc_ref(v_run_1963_);
lean_dec_ref_known(v_e_1840_, 1);
v___f_1964_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1964_, 0, v_c_1839_);
v___x_1965_ = lean_apply_2(v_run_1963_, v___f_1964_, lean_box(0));
return v___x_1965_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_1967_, lean_object* v_as_x27_1968_, lean_object* v_b_1969_){
_start:
{
if (lean_obj_tag(v_as_x27_1968_) == 0)
{
lean_object* v___x_1971_; 
lean_dec_ref(v_c_1967_);
v___x_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1971_, 0, v_b_1969_);
return v___x_1971_;
}
else
{
lean_object* v_head_1972_; lean_object* v_tail_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_head_1972_ = lean_ctor_get(v_as_x27_1968_, 0);
v_tail_1973_ = lean_ctor_get(v_as_x27_1968_, 1);
v___x_1974_ = lean_box(0);
lean_inc(v_head_1972_);
lean_inc_ref(v_c_1967_);
v___x_1975_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1967_, v_head_1972_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_dec_ref_known(v___x_1975_, 1);
v_as_x27_1968_ = v_tail_1973_;
v_b_1969_ = v___x_1974_;
goto _start;
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1977_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1975_, 1);
v___x_1978_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_1979_ = l_Lasm_UI_Runtime_report(v___x_1978_, v_a_1977_);
lean_dec_ref(v___x_1979_);
v_as_x27_1968_ = v_tail_1973_;
v_b_1969_ = v___x_1974_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_1981_, lean_object* v_c_1982_){
_start:
{
lean_object* v___x_1984_; uint8_t v___x_1985_; lean_object* v___x_1986_; lean_object* v_model_1987_; lean_object* v_live_1988_; lean_object* v_next_1989_; lean_object* v_tables_1990_; uint8_t v_scheduled_1991_; lean_object* v_queue_1992_; uint8_t v_busy_1993_; lean_object* v_subs_1994_; lean_object* v_handlers_1995_; lean_object* v_nextSub_1996_; lean_object* v_touched_1997_; lean_object* v_ports_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2020_; 
v___x_1984_ = lean_box(0);
v___x_1985_ = 1;
v___x_1986_ = lean_st_ref_get(v___x_1981_);
v_model_1987_ = lean_ctor_get(v___x_1986_, 0);
v_live_1988_ = lean_ctor_get(v___x_1986_, 1);
v_next_1989_ = lean_ctor_get(v___x_1986_, 2);
v_tables_1990_ = lean_ctor_get(v___x_1986_, 3);
v_scheduled_1991_ = lean_ctor_get_uint8(v___x_1986_, sizeof(void*)*10 + 1);
v_queue_1992_ = lean_ctor_get(v___x_1986_, 4);
v_busy_1993_ = lean_ctor_get_uint8(v___x_1986_, sizeof(void*)*10 + 2);
v_subs_1994_ = lean_ctor_get(v___x_1986_, 5);
v_handlers_1995_ = lean_ctor_get(v___x_1986_, 6);
v_nextSub_1996_ = lean_ctor_get(v___x_1986_, 7);
v_touched_1997_ = lean_ctor_get(v___x_1986_, 8);
v_ports_1998_ = lean_ctor_get(v___x_1986_, 9);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2000_ = v___x_1986_;
v_isShared_2001_ = v_isSharedCheck_2020_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_ports_1998_);
lean_inc(v_touched_1997_);
lean_inc(v_nextSub_1996_);
lean_inc(v_handlers_1995_);
lean_inc(v_subs_1994_);
lean_inc(v_queue_1992_);
lean_inc(v_tables_1990_);
lean_inc(v_next_1989_);
lean_inc(v_live_1988_);
lean_inc(v_model_1987_);
lean_dec(v___x_1986_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2020_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2002_ = lean_unsigned_to_nat(0u);
v___x_2003_ = lean_array_get_size(v_queue_1992_);
v___x_2004_ = lean_nat_dec_lt(v___x_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; 
lean_del_object(v___x_2000_);
lean_dec(v_ports_1998_);
lean_dec_ref(v_touched_1997_);
lean_dec(v_nextSub_1996_);
lean_dec_ref(v_handlers_1995_);
lean_dec_ref(v_subs_1994_);
lean_dec_ref(v_queue_1992_);
lean_dec_ref(v_tables_1990_);
lean_dec(v_next_1989_);
lean_dec(v_live_1988_);
lean_dec(v_model_1987_);
lean_dec_ref(v_c_1982_);
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v___x_1984_);
return v___x_2005_;
}
else
{
lean_object* v_app_2006_; lean_object* v_update_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v_fst_2010_; lean_object* v_snd_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2015_; 
v_app_2006_ = lean_ctor_get(v_c_1982_, 0);
v_update_2007_ = lean_ctor_get(v_app_2006_, 1);
v___x_2008_ = lean_array_fget_borrowed(v_queue_1992_, v___x_2002_);
lean_inc_ref(v_update_2007_);
lean_inc(v___x_2008_);
v___x_2009_ = lean_apply_2(v_update_2007_, v___x_2008_, v_model_1987_);
v_fst_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_fst_2010_);
v_snd_2011_ = lean_ctor_get(v___x_2009_, 1);
lean_inc(v_snd_2011_);
lean_dec_ref(v___x_2009_);
v___x_2012_ = lean_unsigned_to_nat(1u);
v___x_2013_ = l_Array_extract___redArg(v_queue_1992_, v___x_2012_, v___x_2003_);
lean_dec_ref(v_queue_1992_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 4, v___x_2013_);
lean_ctor_set(v___x_2000_, 0, v_fst_2010_);
v___x_2015_ = v___x_2000_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_fst_2010_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_live_1988_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_next_1989_);
lean_ctor_set(v_reuseFailAlloc_2019_, 3, v_tables_1990_);
lean_ctor_set(v_reuseFailAlloc_2019_, 4, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2019_, 5, v_subs_1994_);
lean_ctor_set(v_reuseFailAlloc_2019_, 6, v_handlers_1995_);
lean_ctor_set(v_reuseFailAlloc_2019_, 7, v_nextSub_1996_);
lean_ctor_set(v_reuseFailAlloc_2019_, 8, v_touched_1997_);
lean_ctor_set(v_reuseFailAlloc_2019_, 9, v_ports_1998_);
lean_ctor_set_uint8(v_reuseFailAlloc_2019_, sizeof(void*)*10 + 1, v_scheduled_1991_);
lean_ctor_set_uint8(v_reuseFailAlloc_2019_, sizeof(void*)*10 + 2, v_busy_1993_);
v___x_2015_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_ctor_set_uint8(v___x_2015_, sizeof(void*)*10, v___x_1985_);
v___x_2016_ = lean_st_ref_swap(v___x_1981_, v___x_2015_);
lean_dec(v___x_2016_);
lean_inc_ref(v_c_1982_);
v___x_2017_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1982_, v_snd_2011_, v___x_1984_);
lean_dec(v_snd_2011_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_dec_ref_known(v___x_2017_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_1982_);
return v___x_2017_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = lean_box(0);
v___x_2022_ = lean_unsigned_to_nat(16u);
v___x_2023_ = lean_mk_array(v___x_2022_, v___x_2021_);
return v___x_2023_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2024_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_2025_ = lean_unsigned_to_nat(0u);
v___x_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
lean_ctor_set(v___x_2026_, 1, v___x_2024_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_2027_, lean_object* v_c_2028_, lean_object* v_as_x27_2029_, lean_object* v_b_2030_){
_start:
{
if (lean_obj_tag(v_as_x27_2029_) == 0)
{
lean_object* v___x_2032_; 
lean_dec_ref(v_c_2028_);
lean_dec(v_v_2027_);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v_b_2030_);
return v___x_2032_;
}
else
{
lean_object* v_head_2033_; lean_object* v_tail_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_head_2033_ = lean_ctor_get(v_as_x27_2029_, 0);
v_tail_2034_ = lean_ctor_get(v_as_x27_2029_, 1);
v___x_2035_ = lean_box(0);
v___x_2036_ = lean_unsigned_to_nat(1u);
v___x_2037_ = lean_mk_empty_array_with_capacity(v___x_2036_);
lean_inc(v_v_2027_);
v___x_2038_ = lean_array_push(v___x_2037_, v_v_2027_);
lean_inc(v_head_2033_);
v___x_2039_ = lean_apply_1(v_head_2033_, v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 1)
{
lean_object* v_val_2040_; lean_object* v___x_2041_; 
v_val_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_val_2040_);
lean_dec_ref_known(v___x_2039_, 1);
lean_inc_ref(v_c_2028_);
v___x_2041_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2028_, v_val_2040_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_dec_ref_known(v___x_2041_, 1);
v_as_x27_2029_ = v_tail_2034_;
v_b_2030_ = v___x_2035_;
goto _start;
}
else
{
lean_dec_ref(v_c_2028_);
lean_dec(v_v_2027_);
return v___x_2041_;
}
}
else
{
lean_dec(v___x_2039_);
v_as_x27_2029_ = v_tail_2034_;
v_b_2030_ = v___x_2035_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_2044_, lean_object* v_name_2045_, lean_object* v_c_2046_, lean_object* v_v_2047_){
_start:
{
lean_object* v___x_2049_; lean_object* v_subs_2050_; lean_object* v_handlers_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2049_ = lean_st_ref_get(v_ref_2044_);
v_subs_2050_ = lean_ctor_get(v___x_2049_, 5);
lean_inc_ref(v_subs_2050_);
v_handlers_2051_ = lean_ctor_get(v___x_2049_, 6);
lean_inc_ref(v_handlers_2051_);
lean_dec(v___x_2049_);
v___x_2052_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2052_, 0, v_name_2045_);
v___x_2053_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_2050_, v___x_2052_);
lean_dec_ref(v_subs_2050_);
if (lean_obj_tag(v___x_2053_) == 1)
{
lean_object* v_val_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v_val_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_val_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2055_ = lean_box(0);
v___x_2056_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2051_, v_val_2054_, v___x_2055_);
lean_dec(v_val_2054_);
lean_dec_ref(v_handlers_2051_);
v___x_2057_ = lean_box(0);
lean_inc_ref(v_c_2046_);
v___x_2058_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2047_, v_c_2046_, v___x_2056_, v___x_2057_);
lean_dec(v___x_2056_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v___x_2059_; 
lean_dec_ref_known(v___x_2058_, 1);
v___x_2059_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2046_);
lean_dec_ref(v_c_2046_);
return v___x_2059_;
}
else
{
lean_dec_ref(v_c_2046_);
return v___x_2058_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_dec(v___x_2053_);
lean_dec_ref(v_handlers_2051_);
lean_dec(v_v_2047_);
lean_dec_ref(v_c_2046_);
v___x_2060_ = lean_box(0);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
return v___x_2061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_2062_, lean_object* v_name_2063_, lean_object* v_c_2064_, lean_object* v_v_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_2062_, v_name_2063_, v_c_2064_, v_v_2065_);
lean_dec(v_ref_2062_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_2068_, lean_object* v_name_2069_){
_start:
{
lean_object* v_ref_2071_; lean_object* v___f_2072_; lean_object* v___x_2073_; lean_object* v_model_2074_; lean_object* v_live_2075_; lean_object* v_next_2076_; lean_object* v_tables_2077_; uint8_t v_dirty_2078_; uint8_t v_scheduled_2079_; lean_object* v_queue_2080_; uint8_t v_busy_2081_; lean_object* v_subs_2082_; lean_object* v_handlers_2083_; lean_object* v_nextSub_2084_; lean_object* v_touched_2085_; lean_object* v_ports_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2106_; 
v_ref_2071_ = lean_ctor_get(v_c_2068_, 1);
lean_inc_n(v_ref_2071_, 2);
lean_inc_ref(v_name_2069_);
v___f_2072_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2072_, 0, v_ref_2071_);
lean_closure_set(v___f_2072_, 1, v_name_2069_);
lean_closure_set(v___f_2072_, 2, v_c_2068_);
v___x_2073_ = lean_st_ref_take(v_ref_2071_);
v_model_2074_ = lean_ctor_get(v___x_2073_, 0);
v_live_2075_ = lean_ctor_get(v___x_2073_, 1);
v_next_2076_ = lean_ctor_get(v___x_2073_, 2);
v_tables_2077_ = lean_ctor_get(v___x_2073_, 3);
v_dirty_2078_ = lean_ctor_get_uint8(v___x_2073_, sizeof(void*)*10);
v_scheduled_2079_ = lean_ctor_get_uint8(v___x_2073_, sizeof(void*)*10 + 1);
v_queue_2080_ = lean_ctor_get(v___x_2073_, 4);
v_busy_2081_ = lean_ctor_get_uint8(v___x_2073_, sizeof(void*)*10 + 2);
v_subs_2082_ = lean_ctor_get(v___x_2073_, 5);
v_handlers_2083_ = lean_ctor_get(v___x_2073_, 6);
v_nextSub_2084_ = lean_ctor_get(v___x_2073_, 7);
v_touched_2085_ = lean_ctor_get(v___x_2073_, 8);
v_ports_2086_ = lean_ctor_get(v___x_2073_, 9);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2088_ = v___x_2073_;
v_isShared_2089_ = v_isSharedCheck_2106_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_ports_2086_);
lean_inc(v_touched_2085_);
lean_inc(v_nextSub_2084_);
lean_inc(v_handlers_2083_);
lean_inc(v_subs_2082_);
lean_inc(v_queue_2080_);
lean_inc(v_tables_2077_);
lean_inc(v_next_2076_);
lean_inc(v_live_2075_);
lean_inc(v_model_2074_);
lean_dec(v___x_2073_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2106_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
lean_inc_ref(v_name_2069_);
v___x_2090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2090_, 0, v_name_2069_);
lean_ctor_set(v___x_2090_, 1, v_ports_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 9, v___x_2090_);
v___x_2092_ = v___x_2088_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_model_2074_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v_live_2075_);
lean_ctor_set(v_reuseFailAlloc_2105_, 2, v_next_2076_);
lean_ctor_set(v_reuseFailAlloc_2105_, 3, v_tables_2077_);
lean_ctor_set(v_reuseFailAlloc_2105_, 4, v_queue_2080_);
lean_ctor_set(v_reuseFailAlloc_2105_, 5, v_subs_2082_);
lean_ctor_set(v_reuseFailAlloc_2105_, 6, v_handlers_2083_);
lean_ctor_set(v_reuseFailAlloc_2105_, 7, v_nextSub_2084_);
lean_ctor_set(v_reuseFailAlloc_2105_, 8, v_touched_2085_);
lean_ctor_set(v_reuseFailAlloc_2105_, 9, v___x_2090_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*10, v_dirty_2078_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*10 + 1, v_scheduled_2079_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*10 + 2, v_busy_2081_);
v___x_2092_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = lean_st_ref_put(v_ref_2071_, v___x_2092_);
lean_dec(v_ref_2071_);
v___x_2094_ = l_Lasm_Web_App_Raw_port(v_name_2069_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref_known(v___x_2094_, 1);
v___x_2096_ = l_Lasm_Web_App_Port_subscribe(v_a_2095_, v___f_2072_);
return v___x_2096_;
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec_ref(v___f_2072_);
v_a_2097_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2094_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2094_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_2107_, lean_object* v_c_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
if (lean_obj_tag(v_a_2109_) == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
lean_dec_ref(v_c_2108_);
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_a_2110_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
else
{
lean_object* v_snd_2114_; lean_object* v_key_2115_; lean_object* v_value_2116_; lean_object* v_tail_2117_; lean_object* v_fst_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2188_; 
v_snd_2114_ = lean_ctor_get(v_a_2110_, 1);
lean_inc(v_snd_2114_);
v_key_2115_ = lean_ctor_get(v_a_2109_, 0);
lean_inc(v_key_2115_);
v_value_2116_ = lean_ctor_get(v_a_2109_, 1);
lean_inc(v_value_2116_);
v_tail_2117_ = lean_ctor_get(v_a_2109_, 2);
lean_inc(v_tail_2117_);
lean_dec_ref_known(v_a_2109_, 3);
v_fst_2118_ = lean_ctor_get(v_a_2110_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_a_2110_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; 
v_unused_2189_ = lean_ctor_get(v_a_2110_, 1);
lean_dec(v_unused_2189_);
v___x_2120_ = v_a_2110_;
v_isShared_2121_ = v_isSharedCheck_2188_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_fst_2118_);
lean_dec(v_a_2110_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2188_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v_fst_2122_; lean_object* v_snd_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2187_; 
v_fst_2122_ = lean_ctor_get(v_snd_2114_, 0);
v_snd_2123_ = lean_ctor_get(v_snd_2114_, 1);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_snd_2114_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2125_ = v_snd_2114_;
v_isShared_2126_ = v_isSharedCheck_2187_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_snd_2123_);
lean_inc(v_fst_2122_);
lean_dec(v_snd_2114_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2187_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; 
lean_inc(v_key_2115_);
v___x_2127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2118_, v_key_2115_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2128_ = lean_unsigned_to_nat(1u);
v___x_2129_ = lean_nat_add(v_snd_2123_, v___x_2128_);
lean_inc_n(v_snd_2123_, 2);
lean_inc(v_key_2115_);
v___x_2130_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2118_, v_key_2115_, v_snd_2123_);
v___x_2131_ = l_List_reverse___redArg(v_value_2116_);
v___x_2132_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2122_, v_snd_2123_, v___x_2131_);
if (lean_obj_tag(v_key_2115_) == 4)
{
lean_object* v_name_2133_; lean_object* v___x_2134_; lean_object* v_ports_2135_; uint8_t v___x_2136_; 
lean_dec(v_snd_2123_);
v_name_2133_ = lean_ctor_get(v_key_2115_, 0);
lean_inc_ref(v_name_2133_);
lean_dec_ref_known(v_key_2115_, 1);
v___x_2134_ = lean_st_ref_get(v___x_2107_);
v_ports_2135_ = lean_ctor_get(v___x_2134_, 9);
lean_inc(v_ports_2135_);
lean_dec(v___x_2134_);
v___x_2136_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2133_, v_ports_2135_);
lean_dec(v_ports_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; 
lean_inc_ref(v_c_2108_);
v___x_2137_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2108_, v_name_2133_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v___x_2139_; 
lean_dec_ref_known(v___x_2137_, 1);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2129_);
lean_ctor_set(v___x_2125_, 0, v___x_2132_);
v___x_2139_ = v___x_2125_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v___x_2129_);
v___x_2139_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2141_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 1, v___x_2139_);
lean_ctor_set(v___x_2120_, 0, v___x_2130_);
v___x_2141_ = v___x_2120_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v___x_2139_);
v___x_2141_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
v_a_2109_ = v_tail_2117_;
v_a_2110_ = v___x_2141_;
goto _start;
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v___x_2132_);
lean_dec_ref(v___x_2130_);
lean_dec(v___x_2129_);
lean_del_object(v___x_2125_);
lean_del_object(v___x_2120_);
lean_dec(v_tail_2117_);
lean_dec_ref(v_c_2108_);
v_a_2145_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2137_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2137_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
else
{
lean_object* v___x_2154_; 
lean_dec_ref(v_name_2133_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2129_);
lean_ctor_set(v___x_2125_, 0, v___x_2132_);
v___x_2154_ = v___x_2125_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v___x_2129_);
v___x_2154_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2156_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 1, v___x_2154_);
lean_ctor_set(v___x_2120_, 0, v___x_2130_);
v___x_2156_ = v___x_2120_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
v_a_2109_ = v_tail_2117_;
v_a_2110_ = v___x_2156_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = l_Lasm_UI_Runtime_specData(v_key_2115_);
v___x_2161_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2123_, v___x_2160_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v___x_2163_; 
lean_dec_ref_known(v___x_2161_, 1);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2129_);
lean_ctor_set(v___x_2125_, 0, v___x_2132_);
v___x_2163_ = v___x_2125_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v___x_2129_);
v___x_2163_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2165_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 1, v___x_2163_);
lean_ctor_set(v___x_2120_, 0, v___x_2130_);
v___x_2165_ = v___x_2120_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
v_a_2109_ = v_tail_2117_;
v_a_2110_ = v___x_2165_;
goto _start;
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec_ref(v___x_2132_);
lean_dec_ref(v___x_2130_);
lean_dec(v___x_2129_);
lean_del_object(v___x_2125_);
lean_del_object(v___x_2120_);
lean_dec(v_tail_2117_);
lean_dec_ref(v_c_2108_);
v_a_2169_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2161_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2161_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
}
else
{
lean_object* v_val_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; 
lean_dec(v_key_2115_);
v_val_2177_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_val_2177_);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2178_ = l_List_reverse___redArg(v_value_2116_);
v___x_2179_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2122_, v_val_2177_, v___x_2178_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2179_);
v___x_2181_ = v___x_2125_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2179_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_snd_2123_);
v___x_2181_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
lean_object* v___x_2183_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 1, v___x_2181_);
v___x_2183_ = v___x_2120_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_fst_2118_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
v_a_2109_ = v_tail_2117_;
v_a_2110_ = v___x_2183_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2190_, lean_object* v_c_2191_, lean_object* v_as_2192_, size_t v_sz_2193_, size_t v_i_2194_, lean_object* v_b_2195_){
_start:
{
uint8_t v___x_2197_; 
v___x_2197_ = lean_usize_dec_lt(v_i_2194_, v_sz_2193_);
if (v___x_2197_ == 0)
{
lean_object* v___x_2198_; 
lean_dec_ref(v_c_2191_);
v___x_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2198_, 0, v_b_2195_);
return v___x_2198_;
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2200_; 
v_a_2199_ = lean_array_uget_borrowed(v_as_2192_, v_i_2194_);
lean_inc(v_a_2199_);
lean_inc_ref(v_c_2191_);
v___x_2200_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2190_, v_c_2191_, v_a_2199_, v_b_2195_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2213_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2213_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2200_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2213_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
if (lean_obj_tag(v_a_2201_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2207_; 
lean_dec_ref(v_c_2191_);
v_a_2205_ = lean_ctor_get(v_a_2201_, 0);
lean_inc(v_a_2205_);
lean_dec_ref_known(v_a_2201_, 1);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v_a_2205_);
v___x_2207_ = v___x_2203_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
else
{
lean_object* v_a_2209_; size_t v___x_2210_; size_t v___x_2211_; 
lean_del_object(v___x_2203_);
v_a_2209_ = lean_ctor_get(v_a_2201_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v_a_2201_, 1);
v___x_2210_ = ((size_t)1ULL);
v___x_2211_ = lean_usize_add(v_i_2194_, v___x_2210_);
v_i_2194_ = v___x_2211_;
v_b_2195_ = v_a_2209_;
goto _start;
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec_ref(v_c_2191_);
v_a_2214_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2200_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2200_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2222_){
_start:
{
lean_object* v_app_2224_; lean_object* v_ref_2225_; lean_object* v___x_2226_; lean_object* v_subscriptions_2227_; lean_object* v_model_2228_; lean_object* v_subs_2229_; lean_object* v_nextSub_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_app_2224_ = lean_ctor_get(v_c_2222_, 0);
v_ref_2225_ = lean_ctor_get(v_c_2222_, 1);
lean_inc(v_ref_2225_);
v___x_2226_ = lean_st_ref_get(v_ref_2225_);
v_subscriptions_2227_ = lean_ctor_get(v_app_2224_, 3);
v_model_2228_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_model_2228_);
v_subs_2229_ = lean_ctor_get(v___x_2226_, 5);
lean_inc_ref(v_subs_2229_);
v_nextSub_2230_ = lean_ctor_get(v___x_2226_, 7);
lean_inc(v_nextSub_2230_);
lean_dec(v___x_2226_);
lean_inc_ref(v_subscriptions_2227_);
v___x_2231_ = lean_apply_1(v_subscriptions_2227_, v_model_2228_);
v___x_2232_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2233_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2231_, v___x_2232_);
lean_dec(v___x_2231_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; lean_object* v_buckets_2235_; size_t v_sz_2236_; size_t v___x_2237_; lean_object* v___x_2238_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_a_2234_);
lean_dec_ref_known(v___x_2233_, 1);
v_buckets_2235_ = lean_ctor_get(v_subs_2229_, 1);
lean_inc_ref(v_buckets_2235_);
v_sz_2236_ = lean_array_size(v_buckets_2235_);
v___x_2237_ = ((size_t)0ULL);
v___x_2238_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2234_, v_buckets_2235_, v_sz_2236_, v___x_2237_, v_subs_2229_);
lean_dec_ref(v_buckets_2235_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v_buckets_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2292_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v_buckets_2240_ = lean_ctor_get(v_a_2234_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_a_2234_);
if (v_isSharedCheck_2292_ == 0)
{
lean_object* v_unused_2293_; 
v_unused_2293_ = lean_ctor_get(v_a_2234_, 0);
lean_dec(v_unused_2293_);
v___x_2242_ = v_a_2234_;
v_isShared_2243_ = v_isSharedCheck_2292_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_buckets_2240_);
lean_dec(v_a_2234_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2292_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
lean_ctor_set(v___x_2242_, 1, v_nextSub_2230_);
lean_ctor_set(v___x_2242_, 0, v___x_2232_);
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_nextSub_2230_);
v___x_2245_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
lean_object* v___x_2246_; size_t v_sz_2247_; lean_object* v___x_2248_; 
v___x_2246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2246_, 0, v_a_2239_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
v_sz_2247_ = lean_array_size(v_buckets_2240_);
v___x_2248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2225_, v_c_2222_, v_buckets_2240_, v_sz_2247_, v___x_2237_, v___x_2246_);
lean_dec_ref(v_buckets_2240_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2282_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2282_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2282_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v_snd_2253_; lean_object* v_fst_2254_; lean_object* v_fst_2255_; lean_object* v_snd_2256_; lean_object* v___x_2257_; lean_object* v_model_2258_; lean_object* v_live_2259_; lean_object* v_next_2260_; lean_object* v_tables_2261_; uint8_t v_dirty_2262_; uint8_t v_scheduled_2263_; lean_object* v_queue_2264_; uint8_t v_busy_2265_; lean_object* v_touched_2266_; lean_object* v_ports_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2278_; 
v_snd_2253_ = lean_ctor_get(v_a_2249_, 1);
lean_inc(v_snd_2253_);
v_fst_2254_ = lean_ctor_get(v_a_2249_, 0);
lean_inc(v_fst_2254_);
lean_dec(v_a_2249_);
v_fst_2255_ = lean_ctor_get(v_snd_2253_, 0);
lean_inc(v_fst_2255_);
v_snd_2256_ = lean_ctor_get(v_snd_2253_, 1);
lean_inc(v_snd_2256_);
lean_dec(v_snd_2253_);
v___x_2257_ = lean_st_ref_take(v_ref_2225_);
v_model_2258_ = lean_ctor_get(v___x_2257_, 0);
v_live_2259_ = lean_ctor_get(v___x_2257_, 1);
v_next_2260_ = lean_ctor_get(v___x_2257_, 2);
v_tables_2261_ = lean_ctor_get(v___x_2257_, 3);
v_dirty_2262_ = lean_ctor_get_uint8(v___x_2257_, sizeof(void*)*10);
v_scheduled_2263_ = lean_ctor_get_uint8(v___x_2257_, sizeof(void*)*10 + 1);
v_queue_2264_ = lean_ctor_get(v___x_2257_, 4);
v_busy_2265_ = lean_ctor_get_uint8(v___x_2257_, sizeof(void*)*10 + 2);
v_touched_2266_ = lean_ctor_get(v___x_2257_, 8);
v_ports_2267_ = lean_ctor_get(v___x_2257_, 9);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2278_ == 0)
{
lean_object* v_unused_2279_; lean_object* v_unused_2280_; lean_object* v_unused_2281_; 
v_unused_2279_ = lean_ctor_get(v___x_2257_, 7);
lean_dec(v_unused_2279_);
v_unused_2280_ = lean_ctor_get(v___x_2257_, 6);
lean_dec(v_unused_2280_);
v_unused_2281_ = lean_ctor_get(v___x_2257_, 5);
lean_dec(v_unused_2281_);
v___x_2269_ = v___x_2257_;
v_isShared_2270_ = v_isSharedCheck_2278_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_ports_2267_);
lean_inc(v_touched_2266_);
lean_inc(v_queue_2264_);
lean_inc(v_tables_2261_);
lean_inc(v_next_2260_);
lean_inc(v_live_2259_);
lean_inc(v_model_2258_);
lean_dec(v___x_2257_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2278_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 7, v_snd_2256_);
lean_ctor_set(v___x_2269_, 6, v_fst_2255_);
lean_ctor_set(v___x_2269_, 5, v_fst_2254_);
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_model_2258_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v_live_2259_);
lean_ctor_set(v_reuseFailAlloc_2277_, 2, v_next_2260_);
lean_ctor_set(v_reuseFailAlloc_2277_, 3, v_tables_2261_);
lean_ctor_set(v_reuseFailAlloc_2277_, 4, v_queue_2264_);
lean_ctor_set(v_reuseFailAlloc_2277_, 5, v_fst_2254_);
lean_ctor_set(v_reuseFailAlloc_2277_, 6, v_fst_2255_);
lean_ctor_set(v_reuseFailAlloc_2277_, 7, v_snd_2256_);
lean_ctor_set(v_reuseFailAlloc_2277_, 8, v_touched_2266_);
lean_ctor_set(v_reuseFailAlloc_2277_, 9, v_ports_2267_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*10, v_dirty_2262_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*10 + 1, v_scheduled_2263_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*10 + 2, v_busy_2265_);
v___x_2272_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2275_; 
v___x_2273_ = lean_st_ref_put(v_ref_2225_, v___x_2272_);
lean_dec(v_ref_2225_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2273_);
v___x_2275_ = v___x_2251_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
lean_dec(v_ref_2225_);
v_a_2283_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2248_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2248_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_a_2234_);
lean_dec(v_nextSub_2230_);
lean_dec(v_ref_2225_);
lean_dec_ref(v_c_2222_);
v_a_2294_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2238_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2238_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec(v_nextSub_2230_);
lean_dec_ref(v_subs_2229_);
lean_dec(v_ref_2225_);
lean_dec_ref(v_c_2222_);
v_a_2302_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2233_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2233_);
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
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2310_, lean_object* v_msg_2311_){
_start:
{
lean_object* v_ref_2313_; lean_object* v___x_2314_; lean_object* v_model_2315_; lean_object* v_live_2316_; lean_object* v_next_2317_; lean_object* v_tables_2318_; uint8_t v_dirty_2319_; uint8_t v_scheduled_2320_; lean_object* v_queue_2321_; uint8_t v_busy_2322_; lean_object* v_subs_2323_; lean_object* v_handlers_2324_; lean_object* v_nextSub_2325_; lean_object* v_touched_2326_; lean_object* v_ports_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2383_; 
v_ref_2313_ = lean_ctor_get(v_c_2310_, 1);
lean_inc(v_ref_2313_);
v___x_2314_ = lean_st_ref_take(v_ref_2313_);
v_model_2315_ = lean_ctor_get(v___x_2314_, 0);
v_live_2316_ = lean_ctor_get(v___x_2314_, 1);
v_next_2317_ = lean_ctor_get(v___x_2314_, 2);
v_tables_2318_ = lean_ctor_get(v___x_2314_, 3);
v_dirty_2319_ = lean_ctor_get_uint8(v___x_2314_, sizeof(void*)*10);
v_scheduled_2320_ = lean_ctor_get_uint8(v___x_2314_, sizeof(void*)*10 + 1);
v_queue_2321_ = lean_ctor_get(v___x_2314_, 4);
v_busy_2322_ = lean_ctor_get_uint8(v___x_2314_, sizeof(void*)*10 + 2);
v_subs_2323_ = lean_ctor_get(v___x_2314_, 5);
v_handlers_2324_ = lean_ctor_get(v___x_2314_, 6);
v_nextSub_2325_ = lean_ctor_get(v___x_2314_, 7);
v_touched_2326_ = lean_ctor_get(v___x_2314_, 8);
v_ports_2327_ = lean_ctor_get(v___x_2314_, 9);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2329_ = v___x_2314_;
v_isShared_2330_ = v_isSharedCheck_2383_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_ports_2327_);
lean_inc(v_touched_2326_);
lean_inc(v_nextSub_2325_);
lean_inc(v_handlers_2324_);
lean_inc(v_subs_2323_);
lean_inc(v_queue_2321_);
lean_inc(v_tables_2318_);
lean_inc(v_next_2317_);
lean_inc(v_live_2316_);
lean_inc(v_model_2315_);
lean_dec(v___x_2314_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2383_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2331_ = lean_array_push(v_queue_2321_, v_msg_2311_);
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 4, v___x_2331_);
v___x_2333_ = v___x_2329_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_model_2315_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v_live_2316_);
lean_ctor_set(v_reuseFailAlloc_2382_, 2, v_next_2317_);
lean_ctor_set(v_reuseFailAlloc_2382_, 3, v_tables_2318_);
lean_ctor_set(v_reuseFailAlloc_2382_, 4, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2382_, 5, v_subs_2323_);
lean_ctor_set(v_reuseFailAlloc_2382_, 6, v_handlers_2324_);
lean_ctor_set(v_reuseFailAlloc_2382_, 7, v_nextSub_2325_);
lean_ctor_set(v_reuseFailAlloc_2382_, 8, v_touched_2326_);
lean_ctor_set(v_reuseFailAlloc_2382_, 9, v_ports_2327_);
lean_ctor_set_uint8(v_reuseFailAlloc_2382_, sizeof(void*)*10, v_dirty_2319_);
lean_ctor_set_uint8(v_reuseFailAlloc_2382_, sizeof(void*)*10 + 1, v_scheduled_2320_);
lean_ctor_set_uint8(v_reuseFailAlloc_2382_, sizeof(void*)*10 + 2, v_busy_2322_);
v___x_2333_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v_busy_2336_; 
v___x_2334_ = lean_st_ref_put(v_ref_2313_, v___x_2333_);
v___x_2335_ = lean_st_ref_get(v_ref_2313_);
v_busy_2336_ = lean_ctor_get_uint8(v___x_2335_, sizeof(void*)*10 + 2);
lean_dec(v___x_2335_);
if (v_busy_2336_ == 0)
{
lean_object* v_a_2338_; uint8_t v___x_2343_; lean_object* v___x_2344_; lean_object* v_model_2345_; lean_object* v_live_2346_; lean_object* v_next_2347_; lean_object* v_tables_2348_; uint8_t v_dirty_2349_; uint8_t v_scheduled_2350_; lean_object* v_queue_2351_; lean_object* v_subs_2352_; lean_object* v_handlers_2353_; lean_object* v_nextSub_2354_; lean_object* v_touched_2355_; lean_object* v_ports_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2379_; 
v___x_2343_ = 1;
v___x_2344_ = lean_st_ref_take(v_ref_2313_);
v_model_2345_ = lean_ctor_get(v___x_2344_, 0);
v_live_2346_ = lean_ctor_get(v___x_2344_, 1);
v_next_2347_ = lean_ctor_get(v___x_2344_, 2);
v_tables_2348_ = lean_ctor_get(v___x_2344_, 3);
v_dirty_2349_ = lean_ctor_get_uint8(v___x_2344_, sizeof(void*)*10);
v_scheduled_2350_ = lean_ctor_get_uint8(v___x_2344_, sizeof(void*)*10 + 1);
v_queue_2351_ = lean_ctor_get(v___x_2344_, 4);
v_subs_2352_ = lean_ctor_get(v___x_2344_, 5);
v_handlers_2353_ = lean_ctor_get(v___x_2344_, 6);
v_nextSub_2354_ = lean_ctor_get(v___x_2344_, 7);
v_touched_2355_ = lean_ctor_get(v___x_2344_, 8);
v_ports_2356_ = lean_ctor_get(v___x_2344_, 9);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2358_ = v___x_2344_;
v_isShared_2359_ = v_isSharedCheck_2379_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_ports_2356_);
lean_inc(v_touched_2355_);
lean_inc(v_nextSub_2354_);
lean_inc(v_handlers_2353_);
lean_inc(v_subs_2352_);
lean_inc(v_queue_2351_);
lean_inc(v_tables_2348_);
lean_inc(v_next_2347_);
lean_inc(v_live_2346_);
lean_inc(v_model_2345_);
lean_dec(v___x_2344_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2379_;
goto v_resetjp_2357_;
}
v___jp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2339_ = lean_st_ref_take(v_ref_2313_);
v___x_2340_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2336_, v___x_2339_);
v___x_2341_ = lean_st_ref_put(v_ref_2313_, v___x_2340_);
lean_dec(v_ref_2313_);
v___x_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2342_, 0, v_a_2338_);
return v___x_2342_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_model_2345_);
lean_ctor_set(v_reuseFailAlloc_2378_, 1, v_live_2346_);
lean_ctor_set(v_reuseFailAlloc_2378_, 2, v_next_2347_);
lean_ctor_set(v_reuseFailAlloc_2378_, 3, v_tables_2348_);
lean_ctor_set(v_reuseFailAlloc_2378_, 4, v_queue_2351_);
lean_ctor_set(v_reuseFailAlloc_2378_, 5, v_subs_2352_);
lean_ctor_set(v_reuseFailAlloc_2378_, 6, v_handlers_2353_);
lean_ctor_set(v_reuseFailAlloc_2378_, 7, v_nextSub_2354_);
lean_ctor_set(v_reuseFailAlloc_2378_, 8, v_touched_2355_);
lean_ctor_set(v_reuseFailAlloc_2378_, 9, v_ports_2356_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*10, v_dirty_2349_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*10 + 1, v_scheduled_2350_);
v___x_2361_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_ctor_set_uint8(v___x_2361_, sizeof(void*)*10 + 2, v___x_2343_);
v___x_2362_ = lean_st_ref_put(v_ref_2313_, v___x_2361_);
lean_inc_ref(v_c_2310_);
v___x_2363_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2313_, v_c_2310_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v___x_2364_; 
lean_dec_ref_known(v___x_2363_, 1);
v___x_2364_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2310_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2375_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2367_ = v___x_2364_;
v_isShared_2368_ = v_isSharedCheck_2375_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2364_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2375_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2369_ = lean_st_ref_take(v_ref_2313_);
v___x_2370_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2336_, v___x_2369_);
v___x_2371_ = lean_st_ref_put(v_ref_2313_, v___x_2370_);
lean_dec(v_ref_2313_);
if (v_isShared_2368_ == 0)
{
v___x_2373_ = v___x_2367_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2365_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
else
{
lean_object* v_a_2376_; 
v_a_2376_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2364_, 1);
v_a_2338_ = v_a_2376_;
goto v___jp_2337_;
}
}
else
{
lean_object* v_a_2377_; 
lean_dec_ref(v_c_2310_);
v_a_2377_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2363_, 1);
v_a_2338_ = v_a_2377_;
goto v___jp_2337_;
}
}
}
}
else
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
lean_dec(v_ref_2313_);
lean_dec_ref(v_c_2310_);
v___x_2380_ = lean_box(0);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2384_, lean_object* v_m_2385_){
_start:
{
lean_object* v___x_2387_; 
lean_inc_ref(v_c_2384_);
v___x_2387_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2384_, v_m_2385_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v___x_2388_; 
lean_dec_ref_known(v___x_2387_, 1);
v___x_2388_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2384_);
lean_dec_ref(v_c_2384_);
return v___x_2388_;
}
else
{
lean_dec_ref(v_c_2384_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2389_, lean_object* v_as_x27_2390_, lean_object* v_b_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2389_, v_as_x27_2390_, v_b_2391_);
lean_dec(v_as_x27_2390_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2394_, lean_object* v_c_2395_, lean_object* v_as_x27_2396_, lean_object* v_b_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2394_, v_c_2395_, v_as_x27_2396_, v_b_2397_);
lean_dec(v_as_x27_2396_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2400_, lean_object* v_c_2401_, lean_object* v_as_2402_, lean_object* v_sz_2403_, lean_object* v_i_2404_, lean_object* v_b_2405_, lean_object* v___y_2406_){
_start:
{
size_t v_sz_boxed_2407_; size_t v_i_boxed_2408_; lean_object* v_res_2409_; 
v_sz_boxed_2407_ = lean_unbox_usize(v_sz_2403_);
lean_dec(v_sz_2403_);
v_i_boxed_2408_ = lean_unbox_usize(v_i_2404_);
lean_dec(v_i_2404_);
v_res_2409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2400_, v_c_2401_, v_as_2402_, v_sz_boxed_2407_, v_i_boxed_2408_, v_b_2405_);
lean_dec_ref(v_as_2402_);
lean_dec(v___x_2400_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2410_, lean_object* v_name_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2410_, v_name_2411_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2414_, lean_object* v_c_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2414_, v_c_2415_);
lean_dec(v___x_2414_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2418_, lean_object* v_c_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2418_, v_c_2419_, v_a_2420_, v_a_2421_);
lean_dec(v___x_2418_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2424_, lean_object* v_a_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2424_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2427_, lean_object* v_msg_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2427_, v_msg_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2431_, lean_object* v_e_2432_, lean_object* v_a_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2431_, v_e_2432_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2435_, lean_object* v_Model_2436_, lean_object* v_Msg_2437_, lean_object* v_c_2438_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2441_, lean_object* v_Model_2442_, lean_object* v_Msg_2443_, lean_object* v_c_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2441_, v_Model_2442_, v_Msg_2443_, v_c_2444_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2447_, lean_object* v_Model_2448_, lean_object* v_Msg_2449_, lean_object* v_c_2450_, lean_object* v_name_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2450_, v_name_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2454_, lean_object* v_Model_2455_, lean_object* v_Msg_2456_, lean_object* v_c_2457_, lean_object* v_name_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2454_, v_Model_2455_, v_Msg_2456_, v_c_2457_, v_name_2458_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2461_, lean_object* v_Model_2462_, lean_object* v_Msg_2463_, lean_object* v_c_2464_, lean_object* v_msg_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2464_, v_msg_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2468_, lean_object* v_Model_2469_, lean_object* v_Msg_2470_, lean_object* v_c_2471_, lean_object* v_msg_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Lasm_UI_Runtime_deliver(v_Flags_2468_, v_Model_2469_, v_Msg_2470_, v_c_2471_, v_msg_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2475_, lean_object* v_Model_2476_, lean_object* v_Msg_2477_, lean_object* v_c_2478_, lean_object* v_e_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2478_, v_e_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2482_, lean_object* v_Model_2483_, lean_object* v_Msg_2484_, lean_object* v_c_2485_, lean_object* v_e_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lasm_UI_Runtime_perform(v_Flags_2482_, v_Model_2483_, v_Msg_2484_, v_c_2485_, v_e_2486_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2489_, lean_object* v_m_2490_, lean_object* v_a_2491_, lean_object* v_fallback_2492_){
_start:
{
lean_object* v___x_2493_; 
v___x_2493_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2490_, v_a_2491_, v_fallback_2492_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2494_, lean_object* v_m_2495_, lean_object* v_a_2496_, lean_object* v_fallback_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2494_, v_m_2495_, v_a_2496_, v_fallback_2497_);
lean_dec(v_fallback_2497_);
lean_dec_ref(v_m_2495_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2499_, lean_object* v_m_2500_, lean_object* v_a_2501_, lean_object* v_b_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2500_, v_a_2501_, v_b_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2504_, lean_object* v_as_2505_, lean_object* v_as_x27_2506_, lean_object* v_b_2507_, lean_object* v_a_2508_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2506_, v_b_2507_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2511_, lean_object* v_as_2512_, lean_object* v_as_x27_2513_, lean_object* v_b_2514_, lean_object* v_a_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2511_, v_as_2512_, v_as_x27_2513_, v_b_2514_, v_a_2515_);
lean_dec(v_as_x27_2513_);
lean_dec(v_as_2512_);
return v_res_2517_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2518_, lean_object* v_m_2519_, lean_object* v_a_2520_){
_start:
{
uint8_t v___x_2521_; 
v___x_2521_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2519_, v_a_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2522_, lean_object* v_m_2523_, lean_object* v_a_2524_){
_start:
{
uint8_t v_res_2525_; lean_object* v_r_2526_; 
v_res_2525_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2522_, v_m_2523_, v_a_2524_);
lean_dec_ref(v_m_2523_);
v_r_2526_ = lean_box(v_res_2525_);
return v_r_2526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2527_, lean_object* v_m_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v___x_2530_; 
v___x_2530_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2528_, v_a_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v___x_2536_; 
v___x_2536_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2532_, v_a_2533_, v_a_2534_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2537_, v_a_2538_, v_a_2539_, v_a_2540_);
lean_dec_ref(v_a_2538_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2543_, lean_object* v_m_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2544_, v_a_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2547_, lean_object* v_m_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2547_, v_m_2548_, v_a_2549_);
lean_dec_ref(v_m_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2551_, lean_object* v_Model_2552_, lean_object* v___x_2553_, lean_object* v_Flags_2554_, lean_object* v_c_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_){
_start:
{
lean_object* v___x_2559_; 
v___x_2559_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2553_, v_c_2555_, v_a_2556_, v_a_2557_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2560_, lean_object* v_Model_2561_, lean_object* v___x_2562_, lean_object* v_Flags_2563_, lean_object* v_c_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2560_, v_Model_2561_, v___x_2562_, v_Flags_2563_, v_c_2564_, v_a_2565_, v_a_2566_);
lean_dec(v___x_2562_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2569_, lean_object* v_a_2570_, lean_object* v_as_2571_, size_t v_sz_2572_, size_t v_i_2573_, lean_object* v_b_2574_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2570_, v_as_2571_, v_sz_2572_, v_i_2573_, v_b_2574_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2577_, lean_object* v_a_2578_, lean_object* v_as_2579_, lean_object* v_sz_2580_, lean_object* v_i_2581_, lean_object* v_b_2582_, lean_object* v___y_2583_){
_start:
{
size_t v_sz_boxed_2584_; size_t v_i_boxed_2585_; lean_object* v_res_2586_; 
v_sz_boxed_2584_ = lean_unbox_usize(v_sz_2580_);
lean_dec(v_sz_2580_);
v_i_boxed_2585_ = lean_unbox_usize(v_i_2581_);
lean_dec(v_i_2581_);
v_res_2586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2577_, v_a_2578_, v_as_2579_, v_sz_boxed_2584_, v_i_boxed_2585_, v_b_2582_);
lean_dec_ref(v_as_2579_);
lean_dec_ref(v_a_2578_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2587_, lean_object* v_Model_2588_, lean_object* v___x_2589_, lean_object* v_Flags_2590_, lean_object* v_c_2591_, lean_object* v_as_2592_, size_t v_sz_2593_, size_t v_i_2594_, lean_object* v_b_2595_){
_start:
{
lean_object* v___x_2597_; 
v___x_2597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2589_, v_c_2591_, v_as_2592_, v_sz_2593_, v_i_2594_, v_b_2595_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2598_, lean_object* v_Model_2599_, lean_object* v___x_2600_, lean_object* v_Flags_2601_, lean_object* v_c_2602_, lean_object* v_as_2603_, lean_object* v_sz_2604_, lean_object* v_i_2605_, lean_object* v_b_2606_, lean_object* v___y_2607_){
_start:
{
size_t v_sz_boxed_2608_; size_t v_i_boxed_2609_; lean_object* v_res_2610_; 
v_sz_boxed_2608_ = lean_unbox_usize(v_sz_2604_);
lean_dec(v_sz_2604_);
v_i_boxed_2609_ = lean_unbox_usize(v_i_2605_);
lean_dec(v_i_2605_);
v_res_2610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2598_, v_Model_2599_, v___x_2600_, v_Flags_2601_, v_c_2602_, v_as_2603_, v_sz_boxed_2608_, v_i_boxed_2609_, v_b_2606_);
lean_dec_ref(v_as_2603_);
lean_dec(v___x_2600_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2611_, lean_object* v_m_2612_, lean_object* v_a_2613_, lean_object* v_fallback_2614_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2612_, v_a_2613_, v_fallback_2614_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2616_, lean_object* v_m_2617_, lean_object* v_a_2618_, lean_object* v_fallback_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2616_, v_m_2617_, v_a_2618_, v_fallback_2619_);
lean_dec(v_fallback_2619_);
lean_dec(v_a_2618_);
lean_dec_ref(v_m_2617_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2621_, lean_object* v_v_2622_, lean_object* v_Flags_2623_, lean_object* v_Model_2624_, lean_object* v_c_2625_, lean_object* v_as_2626_, lean_object* v_as_x27_2627_, lean_object* v_b_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v___x_2631_; 
v___x_2631_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2622_, v_c_2625_, v_as_x27_2627_, v_b_2628_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2632_, lean_object* v_v_2633_, lean_object* v_Flags_2634_, lean_object* v_Model_2635_, lean_object* v_c_2636_, lean_object* v_as_2637_, lean_object* v_as_x27_2638_, lean_object* v_b_2639_, lean_object* v_a_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2632_, v_v_2633_, v_Flags_2634_, v_Model_2635_, v_c_2636_, v_as_2637_, v_as_x27_2638_, v_b_2639_, v_a_2640_);
lean_dec(v_as_x27_2638_);
lean_dec(v_as_2637_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2643_, lean_object* v_Flags_2644_, lean_object* v_Model_2645_, lean_object* v_c_2646_, lean_object* v_as_2647_, lean_object* v_as_x27_2648_, lean_object* v_b_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2646_, v_as_x27_2648_, v_b_2649_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2653_, lean_object* v_Flags_2654_, lean_object* v_Model_2655_, lean_object* v_c_2656_, lean_object* v_as_2657_, lean_object* v_as_x27_2658_, lean_object* v_b_2659_, lean_object* v_a_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2653_, v_Flags_2654_, v_Model_2655_, v_c_2656_, v_as_2657_, v_as_x27_2658_, v_b_2659_, v_a_2660_);
lean_dec(v_as_x27_2658_);
lean_dec(v_as_2657_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2663_, lean_object* v_Msg_2664_, lean_object* v___x_2665_, lean_object* v_Flags_2666_, lean_object* v_c_2667_, lean_object* v_inst_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2665_, v_c_2667_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2672_, lean_object* v_Msg_2673_, lean_object* v___x_2674_, lean_object* v_Flags_2675_, lean_object* v_c_2676_, lean_object* v_inst_2677_, lean_object* v_a_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2672_, v_Msg_2673_, v___x_2674_, v_Flags_2675_, v_c_2676_, v_inst_2677_, v_a_2678_);
lean_dec(v___x_2674_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2681_, lean_object* v_a_2682_, lean_object* v_fallback_2683_, lean_object* v_x_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2682_, v_fallback_2683_, v_x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2686_, lean_object* v_a_2687_, lean_object* v_fallback_2688_, lean_object* v_x_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2686_, v_a_2687_, v_fallback_2688_, v_x_2689_);
lean_dec(v_fallback_2688_);
return v_res_2690_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2691_, lean_object* v_a_2692_, lean_object* v_x_2693_){
_start:
{
uint8_t v___x_2694_; 
v___x_2694_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2692_, v_x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2695_, lean_object* v_a_2696_, lean_object* v_x_2697_){
_start:
{
uint8_t v_res_2698_; lean_object* v_r_2699_; 
v_res_2698_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2695_, v_a_2696_, v_x_2697_);
v_r_2699_ = lean_box(v_res_2698_);
return v_r_2699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2700_, lean_object* v_data_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2703_, lean_object* v_a_2704_, lean_object* v_b_2705_, lean_object* v_x_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2704_, v_b_2705_, v_x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2708_, lean_object* v_a_2709_, lean_object* v_x_2710_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2709_, v_x_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2712_, lean_object* v_a_2713_, lean_object* v_x_2714_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2713_, v_x_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2716_, lean_object* v_a_2717_, lean_object* v_fallback_2718_, lean_object* v_x_2719_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2717_, v_fallback_2718_, v_x_2719_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2721_, lean_object* v_a_2722_, lean_object* v_fallback_2723_, lean_object* v_x_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2721_, v_a_2722_, v_fallback_2723_, v_x_2724_);
lean_dec(v_x_2724_);
lean_dec(v_fallback_2723_);
lean_dec(v_a_2722_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2726_, lean_object* v_i_2727_, lean_object* v_source_2728_, lean_object* v_target_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2727_, v_source_2728_, v_target_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2731_, lean_object* v_x_2732_, lean_object* v_x_2733_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2732_, v_x_2733_);
return v___x_2734_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2737_ = lean_box(0);
v___x_2738_ = lean_unsigned_to_nat(16u);
v___x_2739_ = lean_mk_array(v___x_2738_, v___x_2737_);
return v___x_2739_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2740_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2741_ = lean_unsigned_to_nat(0u);
v___x_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2741_);
lean_ctor_set(v___x_2742_, 1, v___x_2740_);
return v___x_2742_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
lean_ctor_set(v___x_2744_, 2, v___x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2745_){
_start:
{
lean_object* v_app_2747_; lean_object* v_ref_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2859_; 
v_app_2747_ = lean_ctor_get(v_c_2745_, 0);
v_ref_2748_ = lean_ctor_get(v_c_2745_, 1);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_c_2745_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2750_ = v_c_2745_;
v_isShared_2751_ = v_isSharedCheck_2859_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_ref_2748_);
lean_inc(v_app_2747_);
lean_dec(v_c_2745_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2859_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; lean_object* v_model_2753_; lean_object* v_live_2754_; lean_object* v_next_2755_; lean_object* v_tables_2756_; uint8_t v_dirty_2757_; uint8_t v_scheduled_2758_; lean_object* v_queue_2759_; uint8_t v_busy_2760_; lean_object* v_subs_2761_; lean_object* v_handlers_2762_; lean_object* v_nextSub_2763_; lean_object* v_touched_2764_; lean_object* v_ports_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2858_; 
v___x_2752_ = lean_st_ref_take(v_ref_2748_);
v_model_2753_ = lean_ctor_get(v___x_2752_, 0);
v_live_2754_ = lean_ctor_get(v___x_2752_, 1);
v_next_2755_ = lean_ctor_get(v___x_2752_, 2);
v_tables_2756_ = lean_ctor_get(v___x_2752_, 3);
v_dirty_2757_ = lean_ctor_get_uint8(v___x_2752_, sizeof(void*)*10);
v_scheduled_2758_ = lean_ctor_get_uint8(v___x_2752_, sizeof(void*)*10 + 1);
v_queue_2759_ = lean_ctor_get(v___x_2752_, 4);
v_busy_2760_ = lean_ctor_get_uint8(v___x_2752_, sizeof(void*)*10 + 2);
v_subs_2761_ = lean_ctor_get(v___x_2752_, 5);
v_handlers_2762_ = lean_ctor_get(v___x_2752_, 6);
v_nextSub_2763_ = lean_ctor_get(v___x_2752_, 7);
v_touched_2764_ = lean_ctor_get(v___x_2752_, 8);
v_ports_2765_ = lean_ctor_get(v___x_2752_, 9);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2767_ = v___x_2752_;
v_isShared_2768_ = v_isSharedCheck_2858_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_ports_2765_);
lean_inc(v_touched_2764_);
lean_inc(v_nextSub_2763_);
lean_inc(v_handlers_2762_);
lean_inc(v_subs_2761_);
lean_inc(v_queue_2759_);
lean_inc(v_tables_2756_);
lean_inc(v_next_2755_);
lean_inc(v_live_2754_);
lean_inc(v_model_2753_);
lean_dec(v___x_2752_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2858_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2773_; 
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_unsigned_to_nat(0u);
v___x_2771_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2755_);
lean_inc(v_model_2753_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 8, v___x_2771_);
lean_ctor_set(v___x_2767_, 1, v___x_2769_);
v___x_2773_ = v___x_2767_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_model_2753_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v___x_2769_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_next_2755_);
lean_ctor_set(v_reuseFailAlloc_2857_, 3, v_tables_2756_);
lean_ctor_set(v_reuseFailAlloc_2857_, 4, v_queue_2759_);
lean_ctor_set(v_reuseFailAlloc_2857_, 5, v_subs_2761_);
lean_ctor_set(v_reuseFailAlloc_2857_, 6, v_handlers_2762_);
lean_ctor_set(v_reuseFailAlloc_2857_, 7, v_nextSub_2763_);
lean_ctor_set(v_reuseFailAlloc_2857_, 8, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2857_, 9, v_ports_2765_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, sizeof(void*)*10, v_dirty_2757_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, sizeof(void*)*10 + 1, v_scheduled_2758_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, sizeof(void*)*10 + 2, v_busy_2760_);
v___x_2773_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; 
v___x_2774_ = lean_st_ref_put(v_ref_2748_, v___x_2773_);
if (v_dirty_2757_ == 0)
{
lean_object* v___x_2775_; lean_object* v_model_2776_; lean_object* v_next_2777_; lean_object* v_tables_2778_; uint8_t v_dirty_2779_; lean_object* v_queue_2780_; uint8_t v_busy_2781_; lean_object* v_subs_2782_; lean_object* v_handlers_2783_; lean_object* v_nextSub_2784_; lean_object* v_touched_2785_; lean_object* v_ports_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2796_; 
lean_dec_ref(v_touched_2764_);
lean_dec(v_next_2755_);
lean_dec(v_model_2753_);
lean_del_object(v___x_2750_);
lean_dec_ref(v_app_2747_);
v___x_2775_ = lean_st_ref_take(v_ref_2748_);
v_model_2776_ = lean_ctor_get(v___x_2775_, 0);
v_next_2777_ = lean_ctor_get(v___x_2775_, 2);
v_tables_2778_ = lean_ctor_get(v___x_2775_, 3);
v_dirty_2779_ = lean_ctor_get_uint8(v___x_2775_, sizeof(void*)*10);
v_queue_2780_ = lean_ctor_get(v___x_2775_, 4);
v_busy_2781_ = lean_ctor_get_uint8(v___x_2775_, sizeof(void*)*10 + 2);
v_subs_2782_ = lean_ctor_get(v___x_2775_, 5);
v_handlers_2783_ = lean_ctor_get(v___x_2775_, 6);
v_nextSub_2784_ = lean_ctor_get(v___x_2775_, 7);
v_touched_2785_ = lean_ctor_get(v___x_2775_, 8);
v_ports_2786_ = lean_ctor_get(v___x_2775_, 9);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2796_ == 0)
{
lean_object* v_unused_2797_; 
v_unused_2797_ = lean_ctor_get(v___x_2775_, 1);
lean_dec(v_unused_2797_);
v___x_2788_ = v___x_2775_;
v_isShared_2789_ = v_isSharedCheck_2796_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_ports_2786_);
lean_inc(v_touched_2785_);
lean_inc(v_nextSub_2784_);
lean_inc(v_handlers_2783_);
lean_inc(v_subs_2782_);
lean_inc(v_queue_2780_);
lean_inc(v_tables_2778_);
lean_inc(v_next_2777_);
lean_inc(v_model_2776_);
lean_dec(v___x_2775_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2796_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 1, v_live_2754_);
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_model_2776_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v_live_2754_);
lean_ctor_set(v_reuseFailAlloc_2795_, 2, v_next_2777_);
lean_ctor_set(v_reuseFailAlloc_2795_, 3, v_tables_2778_);
lean_ctor_set(v_reuseFailAlloc_2795_, 4, v_queue_2780_);
lean_ctor_set(v_reuseFailAlloc_2795_, 5, v_subs_2782_);
lean_ctor_set(v_reuseFailAlloc_2795_, 6, v_handlers_2783_);
lean_ctor_set(v_reuseFailAlloc_2795_, 7, v_nextSub_2784_);
lean_ctor_set(v_reuseFailAlloc_2795_, 8, v_touched_2785_);
lean_ctor_set(v_reuseFailAlloc_2795_, 9, v_ports_2786_);
lean_ctor_set_uint8(v_reuseFailAlloc_2795_, sizeof(void*)*10, v_dirty_2779_);
lean_ctor_set_uint8(v_reuseFailAlloc_2795_, sizeof(void*)*10 + 2, v_busy_2781_);
v___x_2791_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
lean_ctor_set_uint8(v___x_2791_, sizeof(void*)*10 + 1, v_dirty_2757_);
v___x_2792_ = lean_st_ref_put(v_ref_2748_, v___x_2791_);
lean_dec(v_ref_2748_);
v___x_2793_ = l_ByteArray_empty;
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
return v___x_2794_;
}
}
}
else
{
lean_object* v_view_2798_; lean_object* v___x_2799_; lean_object* v___x_2801_; 
v_view_2798_ = lean_ctor_get(v_app_2747_, 2);
lean_inc_ref(v_view_2798_);
lean_dec_ref(v_app_2747_);
v___x_2799_ = lean_apply_1(v_view_2798_, v_model_2753_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set_tag(v___x_2750_, 1);
lean_ctor_set(v___x_2750_, 1, v___x_2769_);
lean_ctor_set(v___x_2750_, 0, v___x_2799_);
v___x_2801_ = v___x_2750_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2799_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v___x_2769_);
v___x_2801_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
lean_object* v___x_2802_; lean_object* v_ops_2803_; lean_object* v_live_2804_; lean_object* v_next_2805_; uint8_t v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v_model_2809_; lean_object* v_live_2810_; lean_object* v_next_2811_; lean_object* v_tables_2812_; uint8_t v_dirty_2813_; uint8_t v_scheduled_2814_; lean_object* v_queue_2815_; uint8_t v_busy_2816_; lean_object* v_subs_2817_; lean_object* v_handlers_2818_; lean_object* v_nextSub_2819_; lean_object* v_touched_2820_; lean_object* v_ports_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2855_; 
v___x_2802_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2754_, v___x_2801_, v_next_2755_);
v_ops_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc_ref(v_ops_2803_);
v_live_2804_ = lean_ctor_get(v___x_2802_, 1);
lean_inc_n(v_live_2804_, 2);
v_next_2805_ = lean_ctor_get(v___x_2802_, 2);
lean_inc(v_next_2805_);
lean_dec_ref(v___x_2802_);
v___x_2806_ = 0;
v___x_2807_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2804_, v_touched_2764_);
lean_dec_ref(v_touched_2764_);
v___x_2808_ = lean_st_ref_take(v_ref_2748_);
v_model_2809_ = lean_ctor_get(v___x_2808_, 0);
v_live_2810_ = lean_ctor_get(v___x_2808_, 1);
v_next_2811_ = lean_ctor_get(v___x_2808_, 2);
v_tables_2812_ = lean_ctor_get(v___x_2808_, 3);
v_dirty_2813_ = lean_ctor_get_uint8(v___x_2808_, sizeof(void*)*10);
v_scheduled_2814_ = lean_ctor_get_uint8(v___x_2808_, sizeof(void*)*10 + 1);
v_queue_2815_ = lean_ctor_get(v___x_2808_, 4);
v_busy_2816_ = lean_ctor_get_uint8(v___x_2808_, sizeof(void*)*10 + 2);
v_subs_2817_ = lean_ctor_get(v___x_2808_, 5);
v_handlers_2818_ = lean_ctor_get(v___x_2808_, 6);
v_nextSub_2819_ = lean_ctor_get(v___x_2808_, 7);
v_touched_2820_ = lean_ctor_get(v___x_2808_, 8);
v_ports_2821_ = lean_ctor_get(v___x_2808_, 9);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2823_ = v___x_2808_;
v_isShared_2824_ = v_isSharedCheck_2855_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_ports_2821_);
lean_inc(v_touched_2820_);
lean_inc(v_nextSub_2819_);
lean_inc(v_handlers_2818_);
lean_inc(v_subs_2817_);
lean_inc(v_queue_2815_);
lean_inc(v_tables_2812_);
lean_inc(v_next_2811_);
lean_inc(v_live_2810_);
lean_inc(v_model_2809_);
lean_dec(v___x_2808_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2855_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2825_; lean_object* v___x_2827_; 
v___x_2825_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 3, v___x_2825_);
v___x_2827_ = v___x_2823_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_model_2809_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_live_2810_);
lean_ctor_set(v_reuseFailAlloc_2854_, 2, v_next_2811_);
lean_ctor_set(v_reuseFailAlloc_2854_, 3, v___x_2825_);
lean_ctor_set(v_reuseFailAlloc_2854_, 4, v_queue_2815_);
lean_ctor_set(v_reuseFailAlloc_2854_, 5, v_subs_2817_);
lean_ctor_set(v_reuseFailAlloc_2854_, 6, v_handlers_2818_);
lean_ctor_set(v_reuseFailAlloc_2854_, 7, v_nextSub_2819_);
lean_ctor_set(v_reuseFailAlloc_2854_, 8, v_touched_2820_);
lean_ctor_set(v_reuseFailAlloc_2854_, 9, v_ports_2821_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*10, v_dirty_2813_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*10 + 1, v_scheduled_2814_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*10 + 2, v_busy_2816_);
v___x_2827_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v_fst_2831_; lean_object* v_snd_2832_; lean_object* v___x_2833_; lean_object* v_model_2834_; lean_object* v_queue_2835_; uint8_t v_busy_2836_; lean_object* v_subs_2837_; lean_object* v_handlers_2838_; lean_object* v_nextSub_2839_; lean_object* v_touched_2840_; lean_object* v_ports_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2850_; 
v___x_2828_ = lean_st_ref_put(v_ref_2748_, v___x_2827_);
v___x_2829_ = l_Array_append___redArg(v_ops_2803_, v___x_2807_);
lean_dec_ref(v___x_2807_);
v___x_2830_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2812_, v___x_2829_, v___x_2770_);
lean_dec_ref(v___x_2829_);
v_fst_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_fst_2831_);
v_snd_2832_ = lean_ctor_get(v___x_2830_, 1);
lean_inc(v_snd_2832_);
lean_dec_ref(v___x_2830_);
v___x_2833_ = lean_st_ref_take(v_ref_2748_);
v_model_2834_ = lean_ctor_get(v___x_2833_, 0);
v_queue_2835_ = lean_ctor_get(v___x_2833_, 4);
v_busy_2836_ = lean_ctor_get_uint8(v___x_2833_, sizeof(void*)*10 + 2);
v_subs_2837_ = lean_ctor_get(v___x_2833_, 5);
v_handlers_2838_ = lean_ctor_get(v___x_2833_, 6);
v_nextSub_2839_ = lean_ctor_get(v___x_2833_, 7);
v_touched_2840_ = lean_ctor_get(v___x_2833_, 8);
v_ports_2841_ = lean_ctor_get(v___x_2833_, 9);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2850_ == 0)
{
lean_object* v_unused_2851_; lean_object* v_unused_2852_; lean_object* v_unused_2853_; 
v_unused_2851_ = lean_ctor_get(v___x_2833_, 3);
lean_dec(v_unused_2851_);
v_unused_2852_ = lean_ctor_get(v___x_2833_, 2);
lean_dec(v_unused_2852_);
v_unused_2853_ = lean_ctor_get(v___x_2833_, 1);
lean_dec(v_unused_2853_);
v___x_2843_ = v___x_2833_;
v_isShared_2844_ = v_isSharedCheck_2850_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_ports_2841_);
lean_inc(v_touched_2840_);
lean_inc(v_nextSub_2839_);
lean_inc(v_handlers_2838_);
lean_inc(v_subs_2837_);
lean_inc(v_queue_2835_);
lean_inc(v_model_2834_);
lean_dec(v___x_2833_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2850_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 3, v_snd_2832_);
lean_ctor_set(v___x_2843_, 2, v_next_2805_);
lean_ctor_set(v___x_2843_, 1, v_live_2804_);
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_model_2834_);
lean_ctor_set(v_reuseFailAlloc_2849_, 1, v_live_2804_);
lean_ctor_set(v_reuseFailAlloc_2849_, 2, v_next_2805_);
lean_ctor_set(v_reuseFailAlloc_2849_, 3, v_snd_2832_);
lean_ctor_set(v_reuseFailAlloc_2849_, 4, v_queue_2835_);
lean_ctor_set(v_reuseFailAlloc_2849_, 5, v_subs_2837_);
lean_ctor_set(v_reuseFailAlloc_2849_, 6, v_handlers_2838_);
lean_ctor_set(v_reuseFailAlloc_2849_, 7, v_nextSub_2839_);
lean_ctor_set(v_reuseFailAlloc_2849_, 8, v_touched_2840_);
lean_ctor_set(v_reuseFailAlloc_2849_, 9, v_ports_2841_);
lean_ctor_set_uint8(v_reuseFailAlloc_2849_, sizeof(void*)*10 + 2, v_busy_2836_);
v___x_2846_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_ctor_set_uint8(v___x_2846_, sizeof(void*)*10, v___x_2806_);
lean_ctor_set_uint8(v___x_2846_, sizeof(void*)*10 + 1, v___x_2806_);
v___x_2847_ = lean_st_ref_put(v_ref_2748_, v___x_2846_);
lean_dec(v_ref_2748_);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v_fst_2831_);
return v___x_2848_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2863_, lean_object* v_Model_2864_, lean_object* v_Msg_2865_, lean_object* v_c_2866_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2866_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2869_, lean_object* v_Model_2870_, lean_object* v_Msg_2871_, lean_object* v_c_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lasm_UI_Runtime_frame(v_Flags_2869_, v_Model_2870_, v_Msg_2871_, v_c_2872_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(lean_object* v___f_2875_, lean_object* v_fst_2876_, lean_object* v_x_2877_){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_box(0);
v___x_2880_ = lean_apply_3(v___f_2875_, v___x_2879_, v_fst_2876_, lean_box(0));
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1___boxed(lean_object* v___f_2881_, lean_object* v_fst_2882_, lean_object* v_x_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_2881_, v_fst_2882_, v_x_2883_);
lean_dec_ref(v_x_2883_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(lean_object* v_snd_2886_, lean_object* v_____r_2887_, lean_object* v_msgs_2888_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2890_ = lean_unsigned_to_nat(2u);
v___x_2891_ = lean_nat_add(v_snd_2886_, v___x_2890_);
v___x_2892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2892_, 0, v_msgs_2888_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0___boxed(lean_object* v_snd_2895_, lean_object* v_____r_2896_, lean_object* v_msgs_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(v_snd_2895_, v_____r_2896_, v_msgs_2897_);
lean_dec(v_snd_2895_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v___x_2900_, lean_object* v_as_x27_2901_, lean_object* v_b_2902_){
_start:
{
if (lean_obj_tag(v_as_x27_2901_) == 0)
{
lean_object* v___x_2904_; 
lean_dec(v___x_2900_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_b_2902_);
return v___x_2904_;
}
else
{
lean_object* v_head_2905_; lean_object* v_tail_2906_; lean_object* v___x_2907_; 
v_head_2905_ = lean_ctor_get(v_as_x27_2901_, 0);
v_tail_2906_ = lean_ctor_get(v_as_x27_2901_, 1);
lean_inc(v_head_2905_);
lean_inc(v___x_2900_);
v___x_2907_ = lean_apply_1(v_head_2905_, v___x_2900_);
if (lean_obj_tag(v___x_2907_) == 1)
{
lean_object* v_val_2908_; lean_object* v___x_2909_; 
v_val_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_val_2908_);
lean_dec_ref_known(v___x_2907_, 1);
v___x_2909_ = lean_array_push(v_b_2902_, v_val_2908_);
v_as_x27_2901_ = v_tail_2906_;
v_b_2902_ = v___x_2909_;
goto _start;
}
else
{
lean_dec(v___x_2907_);
v_as_x27_2901_ = v_tail_2906_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v___x_2912_, lean_object* v_as_x27_2913_, lean_object* v_b_2914_, lean_object* v___y_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_2912_, v_as_x27_2913_, v_b_2914_);
lean_dec(v_as_x27_2913_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(lean_object* v___f_2917_, lean_object* v_fst_2918_, lean_object* v_x_2919_){
_start:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2921_ = lean_box(0);
v___x_2922_ = lean_apply_3(v___f_2917_, v___x_2921_, v_fst_2918_, lean_box(0));
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2___boxed(lean_object* v___f_2923_, lean_object* v_fst_2924_, lean_object* v_x_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_2923_, v_fst_2924_, v_x_2925_);
lean_dec(v_x_2925_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_items_2928_, lean_object* v___x_2929_, lean_object* v_s_2930_, lean_object* v_a_2931_){
_start:
{
lean_object* v___y_2934_; lean_object* v_fst_2954_; lean_object* v_snd_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_3013_; 
v_fst_2954_ = lean_ctor_get(v_a_2931_, 0);
v_snd_2955_ = lean_ctor_get(v_a_2931_, 1);
v_isSharedCheck_3013_ = !lean_is_exclusive(v_a_2931_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_2957_ = v_a_2931_;
v_isShared_2958_ = v_isSharedCheck_3013_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_snd_2955_);
lean_inc(v_fst_2954_);
lean_dec(v_a_2931_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_3013_;
goto v_resetjp_2956_;
}
v___jp_2933_:
{
if (lean_obj_tag(v___y_2934_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2945_; 
v_a_2935_ = lean_ctor_get(v___y_2934_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___y_2934_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2937_ = v___y_2934_;
v_isShared_2938_ = v_isSharedCheck_2945_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___y_2934_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2945_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
if (lean_obj_tag(v_a_2935_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; 
lean_dec_ref(v_s_2930_);
v_a_2939_ = lean_ctor_get(v_a_2935_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v_a_2935_, 1);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v_a_2939_);
v___x_2941_ = v___x_2937_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2939_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
else
{
lean_object* v_a_2943_; 
lean_del_object(v___x_2937_);
v_a_2943_ = lean_ctor_get(v_a_2935_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v_a_2935_, 1);
v_a_2931_ = v_a_2943_;
goto _start;
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_dec_ref(v_s_2930_);
v_a_2946_ = lean_ctor_get(v___y_2934_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___y_2934_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___y_2934_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___y_2934_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v___x_2959_ = lean_unsigned_to_nat(1u);
v___x_2960_ = lean_nat_add(v_snd_2955_, v___x_2959_);
v___x_2961_ = lean_array_get_size(v_items_2928_);
v___x_2962_ = lean_nat_dec_lt(v___x_2960_, v___x_2961_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2964_; 
lean_dec(v___x_2960_);
lean_dec_ref(v_s_2930_);
if (v_isShared_2958_ == 0)
{
v___x_2964_ = v___x_2957_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_fst_2954_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v_snd_2955_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
else
{
lean_object* v___x_2967_; lean_object* v___f_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2967_ = lean_box(0);
lean_inc(v_snd_2955_);
v___f_2968_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2968_, 0, v_snd_2955_);
v___x_2969_ = lean_array_get_borrowed(v___x_2967_, v_items_2928_, v_snd_2955_);
v___x_2970_ = lean_array_get(v___x_2967_, v_items_2928_, v___x_2960_);
lean_dec(v___x_2960_);
if (lean_obj_tag(v___x_2969_) == 3)
{
if (lean_obj_tag(v___x_2970_) == 7)
{
double v_n_2971_; lean_object* v_items_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3004_; 
lean_del_object(v___x_2957_);
v_n_2971_ = lean_ctor_get_float(v___x_2969_, 0);
v_items_2972_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2974_ = v___x_2970_;
v_isShared_2975_ = v_isSharedCheck_3004_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_items_2972_);
lean_dec(v___x_2970_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3004_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
uint64_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v___x_2976_ = lean_float_to_uint64(v_n_2971_);
v___x_2977_ = lean_uint64_to_nat(v___x_2976_);
v___x_2978_ = lean_array_get_size(v___x_2929_);
v___x_2979_ = lean_nat_dec_lt(v___x_2977_, v___x_2978_);
if (v___x_2979_ == 0)
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec(v___x_2977_);
lean_del_object(v___x_2974_);
lean_dec_ref(v_items_2972_);
lean_dec(v_snd_2955_);
v___x_2980_ = lean_box(0);
v___x_2981_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_2968_, v_fst_2954_, v___x_2980_);
v___y_2934_ = v___x_2981_;
goto v___jp_2933_;
}
else
{
lean_object* v___x_2982_; 
v___x_2982_ = lean_array_fget_borrowed(v___x_2929_, v___x_2977_);
lean_dec(v___x_2977_);
if (lean_obj_tag(v___x_2982_) == 1)
{
lean_object* v_attrs_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
lean_del_object(v___x_2974_);
lean_dec_ref(v___f_2968_);
v_attrs_2983_ = lean_ctor_get(v___x_2982_, 3);
v___x_2984_ = lean_array_to_list(v_items_2972_);
v___x_2985_ = lean_box(0);
v___x_2986_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_2984_, v___x_2985_);
lean_inc(v_attrs_2983_);
lean_inc_ref(v_s_2930_);
v___x_2987_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_s_2930_, v_attrs_2983_);
v___x_2988_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_2986_, v___x_2987_, v_fst_2954_);
lean_dec(v___x_2987_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = lean_box(0);
v___x_2991_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(v_snd_2955_, v___x_2990_, v_a_2989_);
lean_dec(v_snd_2955_);
v___y_2934_ = v___x_2991_;
goto v___jp_2933_;
}
else
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_2999_; 
lean_dec(v_snd_2955_);
lean_dec_ref(v_s_2930_);
v_a_2992_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2994_ = v___x_2988_;
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2988_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2997_; 
if (v_isShared_2995_ == 0)
{
v___x_2997_ = v___x_2994_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2992_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
}
else
{
lean_object* v___x_3001_; 
lean_dec_ref(v_items_2972_);
lean_dec(v_snd_2955_);
lean_inc(v___x_2982_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 1);
lean_ctor_set(v___x_2974_, 0, v___x_2982_);
v___x_3001_ = v___x_2974_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2982_);
v___x_3001_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
lean_object* v___x_3002_; 
v___x_3002_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_2968_, v_fst_2954_, v___x_3001_);
lean_dec_ref(v___x_3001_);
v___y_2934_ = v___x_3002_;
goto v___jp_2933_;
}
}
}
}
}
else
{
lean_object* v___x_3006_; 
lean_dec(v_snd_2955_);
lean_inc_ref(v___x_2969_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2970_);
lean_ctor_set(v___x_2957_, 0, v___x_2969_);
v___x_3006_ = v___x_2957_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v___x_2969_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v___x_2970_);
v___x_3006_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; 
v___x_3007_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_2968_, v_fst_2954_, v___x_3006_);
lean_dec_ref(v___x_3006_);
v___y_2934_ = v___x_3007_;
goto v___jp_2933_;
}
}
}
else
{
lean_object* v___x_3010_; 
lean_dec(v_snd_2955_);
lean_inc(v___x_2969_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2970_);
lean_ctor_set(v___x_2957_, 0, v___x_2969_);
v___x_3010_ = v___x_2957_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v___x_2969_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v___x_2970_);
v___x_3010_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3011_; 
v___x_3011_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_2968_, v_fst_2954_, v___x_3010_);
lean_dec_ref(v___x_3010_);
v___y_2934_ = v___x_3011_;
goto v___jp_2933_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_items_3014_, lean_object* v___x_3015_, lean_object* v_s_3016_, lean_object* v_a_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3014_, v___x_3015_, v_s_3016_, v_a_3017_);
lean_dec_ref(v___x_3015_);
lean_dec_ref(v_items_3014_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(lean_object* v_c_3020_, lean_object* v_as_3021_, size_t v_sz_3022_, size_t v_i_3023_, lean_object* v_b_3024_){
_start:
{
uint8_t v___x_3026_; 
v___x_3026_ = lean_usize_dec_lt(v_i_3023_, v_sz_3022_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; 
lean_dec_ref(v_c_3020_);
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v_b_3024_);
return v___x_3027_;
}
else
{
lean_object* v___x_3028_; lean_object* v_a_3029_; lean_object* v___x_3030_; 
v___x_3028_ = lean_box(0);
v_a_3029_ = lean_array_uget_borrowed(v_as_3021_, v_i_3023_);
lean_inc(v_a_3029_);
lean_inc_ref(v_c_3020_);
v___x_3030_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3020_, v_a_3029_);
if (lean_obj_tag(v___x_3030_) == 0)
{
size_t v___x_3031_; size_t v___x_3032_; 
lean_dec_ref_known(v___x_3030_, 1);
v___x_3031_ = ((size_t)1ULL);
v___x_3032_ = lean_usize_add(v_i_3023_, v___x_3031_);
v_i_3023_ = v___x_3032_;
v_b_3024_ = v___x_3028_;
goto _start;
}
else
{
lean_dec_ref(v_c_3020_);
return v___x_3030_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg___boxed(lean_object* v_c_3034_, lean_object* v_as_3035_, lean_object* v_sz_3036_, lean_object* v_i_3037_, lean_object* v_b_3038_, lean_object* v___y_3039_){
_start:
{
size_t v_sz_boxed_3040_; size_t v_i_boxed_3041_; lean_object* v_res_3042_; 
v_sz_boxed_3040_ = lean_unbox_usize(v_sz_3036_);
lean_dec(v_sz_3036_);
v_i_boxed_3041_ = lean_unbox_usize(v_i_3037_);
lean_dec(v_i_3037_);
v_res_3042_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3034_, v_as_3035_, v_sz_boxed_3040_, v_i_boxed_3041_, v_b_3038_);
lean_dec_ref(v_as_3035_);
return v_res_3042_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = lean_unsigned_to_nat(0u);
v___x_3044_ = lean_nat_to_int(v___x_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_3053_, size_t v_i_3054_, lean_object* v_bs_3055_){
_start:
{
uint8_t v___x_3056_; 
v___x_3056_ = lean_usize_dec_lt(v_i_3054_, v_sz_3053_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; 
v___x_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3057_, 0, v_bs_3055_);
return v___x_3057_;
}
else
{
lean_object* v_v_3058_; lean_object* v___x_3059_; lean_object* v_bs_x27_3060_; lean_object* v_a_3062_; 
v_v_3058_ = lean_array_uget(v_bs_3055_, v_i_3054_);
v___x_3059_ = lean_unsigned_to_nat(0u);
v_bs_x27_3060_ = lean_array_uset(v_bs_3055_, v_i_3054_, v___x_3059_);
switch(lean_obj_tag(v_v_3058_))
{
case 3:
{
double v_n_3071_; lean_object* v___x_3072_; 
v_n_3071_ = lean_ctor_get_float(v_v_3058_, 0);
lean_dec_ref_known(v_v_3058_, 0);
v___x_3072_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3071_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v___x_3073_; 
lean_dec_ref(v_bs_x27_3060_);
v___x_3073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3073_;
}
else
{
lean_object* v_val_3074_; 
v_val_3074_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_val_3074_);
lean_dec_ref_known(v___x_3072_, 1);
v_a_3062_ = v_val_3074_;
goto v___jp_3061_;
}
}
case 5:
{
lean_object* v_i_3075_; 
v_i_3075_ = lean_ctor_get(v_v_3058_, 0);
lean_inc(v_i_3075_);
lean_dec_ref_known(v_v_3058_, 1);
v_a_3062_ = v_i_3075_;
goto v___jp_3061_;
}
default: 
{
lean_object* v___x_3076_; 
lean_dec_ref(v_bs_x27_3060_);
lean_dec(v_v_3058_);
v___x_3076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3076_;
}
}
v___jp_3061_:
{
lean_object* v___x_3063_; uint8_t v___x_3064_; 
v___x_3063_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3064_ = lean_int_dec_le(v___x_3063_, v_a_3062_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; 
lean_dec(v_a_3062_);
lean_dec_ref(v_bs_x27_3060_);
v___x_3065_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3065_;
}
else
{
lean_object* v___x_3066_; size_t v___x_3067_; size_t v___x_3068_; lean_object* v___x_3069_; 
v___x_3066_ = l_Int_toNat(v_a_3062_);
lean_dec(v_a_3062_);
v___x_3067_ = ((size_t)1ULL);
v___x_3068_ = lean_usize_add(v_i_3054_, v___x_3067_);
v___x_3069_ = lean_array_uset(v_bs_x27_3060_, v_i_3054_, v___x_3066_);
v_i_3054_ = v___x_3068_;
v_bs_3055_ = v___x_3069_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3077_, lean_object* v_i_3078_, lean_object* v_bs_3079_){
_start:
{
size_t v_sz_boxed_3080_; size_t v_i_boxed_3081_; lean_object* v_res_3082_; 
v_sz_boxed_3080_ = lean_unbox_usize(v_sz_3077_);
lean_dec(v_sz_3077_);
v_i_boxed_3081_ = lean_unbox_usize(v_i_3078_);
lean_dec(v_i_3078_);
v_res_3082_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3080_, v_i_boxed_3081_, v_bs_3079_);
return v_res_3082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3088_, lean_object* v_args_3089_){
_start:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; uint8_t v___x_3099_; 
v___x_3097_ = lean_array_get_size(v_args_3089_);
v___x_3098_ = lean_unsigned_to_nat(3u);
v___x_3099_ = lean_nat_dec_eq(v___x_3097_, v___x_3098_);
if (v___x_3099_ == 0)
{
lean_dec_ref(v_c_3088_);
goto v___jp_3091_;
}
else
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3100_ = lean_unsigned_to_nat(1u);
v___x_3101_ = lean_array_fget_borrowed(v_args_3089_, v___x_3100_);
if (lean_obj_tag(v___x_3101_) == 4)
{
lean_object* v_s_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_s_3102_ = lean_ctor_get(v___x_3101_, 0);
v___x_3103_ = lean_unsigned_to_nat(2u);
v___x_3104_ = lean_array_fget_borrowed(v_args_3089_, v___x_3103_);
if (lean_obj_tag(v___x_3104_) == 7)
{
lean_object* v_items_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v_items_3105_ = lean_ctor_get(v___x_3104_, 0);
v___x_3106_ = lean_unsigned_to_nat(0u);
v___x_3107_ = lean_array_fget_borrowed(v_args_3089_, v___x_3106_);
if (lean_obj_tag(v___x_3107_) == 7)
{
lean_object* v_items_3108_; size_t v_sz_3109_; size_t v___x_3110_; lean_object* v___x_3111_; 
v_items_3108_ = lean_ctor_get(v___x_3107_, 0);
v_sz_3109_ = lean_array_size(v_items_3108_);
v___x_3110_ = ((size_t)0ULL);
lean_inc_ref(v_items_3108_);
v___x_3111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3109_, v___x_3110_, v_items_3108_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_dec_ref_known(v___x_3111_, 1);
lean_dec_ref(v_c_3088_);
goto v___jp_3094_;
}
else
{
lean_object* v_a_3112_; lean_object* v_ref_3113_; lean_object* v___x_3114_; lean_object* v_live_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v_model_3120_; lean_object* v_live_3121_; lean_object* v_next_3122_; lean_object* v_tables_3123_; uint8_t v_dirty_3124_; uint8_t v_scheduled_3125_; lean_object* v_queue_3126_; uint8_t v_busy_3127_; lean_object* v_subs_3128_; lean_object* v_handlers_3129_; lean_object* v_nextSub_3130_; lean_object* v_touched_3131_; lean_object* v_ports_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3175_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v_ref_3113_ = lean_ctor_get(v_c_3088_, 1);
v___x_3114_ = lean_st_ref_get(v_ref_3113_);
v_live_3115_ = lean_ctor_get(v___x_3114_, 1);
lean_inc(v_live_3115_);
lean_dec(v___x_3114_);
v___x_3116_ = lean_array_to_list(v_a_3112_);
v___x_3117_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3118_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3115_, v___x_3116_, v___x_3117_);
v___x_3119_ = lean_st_ref_take(v_ref_3113_);
v_model_3120_ = lean_ctor_get(v___x_3119_, 0);
v_live_3121_ = lean_ctor_get(v___x_3119_, 1);
v_next_3122_ = lean_ctor_get(v___x_3119_, 2);
v_tables_3123_ = lean_ctor_get(v___x_3119_, 3);
v_dirty_3124_ = lean_ctor_get_uint8(v___x_3119_, sizeof(void*)*10);
v_scheduled_3125_ = lean_ctor_get_uint8(v___x_3119_, sizeof(void*)*10 + 1);
v_queue_3126_ = lean_ctor_get(v___x_3119_, 4);
v_busy_3127_ = lean_ctor_get_uint8(v___x_3119_, sizeof(void*)*10 + 2);
v_subs_3128_ = lean_ctor_get(v___x_3119_, 5);
v_handlers_3129_ = lean_ctor_get(v___x_3119_, 6);
v_nextSub_3130_ = lean_ctor_get(v___x_3119_, 7);
v_touched_3131_ = lean_ctor_get(v___x_3119_, 8);
v_ports_3132_ = lean_ctor_get(v___x_3119_, 9);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3134_ = v___x_3119_;
v_isShared_3135_ = v_isSharedCheck_3175_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_ports_3132_);
lean_inc(v_touched_3131_);
lean_inc(v_nextSub_3130_);
lean_inc(v_handlers_3129_);
lean_inc(v_subs_3128_);
lean_inc(v_queue_3126_);
lean_inc(v_tables_3123_);
lean_inc(v_next_3122_);
lean_inc(v_live_3121_);
lean_inc(v_model_3120_);
lean_dec(v___x_3119_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3175_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3136_; lean_object* v___x_3138_; 
v___x_3136_ = lean_array_push(v_touched_3131_, v___x_3116_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 8, v___x_3136_);
v___x_3138_ = v___x_3134_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_model_3120_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v_live_3121_);
lean_ctor_set(v_reuseFailAlloc_3174_, 2, v_next_3122_);
lean_ctor_set(v_reuseFailAlloc_3174_, 3, v_tables_3123_);
lean_ctor_set(v_reuseFailAlloc_3174_, 4, v_queue_3126_);
lean_ctor_set(v_reuseFailAlloc_3174_, 5, v_subs_3128_);
lean_ctor_set(v_reuseFailAlloc_3174_, 6, v_handlers_3129_);
lean_ctor_set(v_reuseFailAlloc_3174_, 7, v_nextSub_3130_);
lean_ctor_set(v_reuseFailAlloc_3174_, 8, v___x_3136_);
lean_ctor_set(v_reuseFailAlloc_3174_, 9, v_ports_3132_);
lean_ctor_set_uint8(v_reuseFailAlloc_3174_, sizeof(void*)*10, v_dirty_3124_);
lean_ctor_set_uint8(v_reuseFailAlloc_3174_, sizeof(void*)*10 + 1, v_scheduled_3125_);
lean_ctor_set_uint8(v_reuseFailAlloc_3174_, sizeof(void*)*10 + 2, v_busy_3127_);
v___x_3138_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3139_ = lean_st_ref_put(v_ref_3113_, v___x_3138_);
v___x_3140_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
lean_inc_ref(v_s_3102_);
v___x_3141_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3105_, v___x_3118_, v_s_3102_, v___x_3140_);
lean_dec_ref(v___x_3118_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v_fst_3143_; lean_object* v___x_3144_; size_t v_sz_3145_; lean_object* v___x_3146_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v_fst_3143_ = lean_ctor_get(v_a_3142_, 0);
lean_inc(v_fst_3143_);
lean_dec(v_a_3142_);
v___x_3144_ = lean_box(0);
v_sz_3145_ = lean_array_size(v_fst_3143_);
lean_inc_ref(v_c_3088_);
v___x_3146_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3088_, v_fst_3143_, v_sz_3145_, v___x_3110_, v___x_3144_);
lean_dec(v_fst_3143_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v___x_3147_; lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3157_; 
lean_dec_ref_known(v___x_3146_, 1);
v___x_3147_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3088_);
lean_dec_ref(v_c_3088_);
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3150_ = v___x_3147_;
v_isShared_3151_ = v_isSharedCheck_3157_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3147_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3157_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3152_; uint8_t v___x_3153_; lean_object* v___x_3155_; 
v___x_3152_ = lean_alloc_ctor(2, 0, 1);
v___x_3153_ = lean_unbox(v_a_3148_);
lean_dec(v_a_3148_);
lean_ctor_set_uint8(v___x_3152_, 0, v___x_3153_);
if (v_isShared_3151_ == 0)
{
lean_ctor_set(v___x_3150_, 0, v___x_3152_);
v___x_3155_ = v___x_3150_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3152_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec_ref(v_c_3088_);
v_a_3158_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3146_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3146_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
lean_dec_ref(v_c_3088_);
v_a_3166_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v___x_3141_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_3141_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_c_3088_);
goto v___jp_3094_;
}
}
else
{
lean_dec_ref(v_c_3088_);
goto v___jp_3091_;
}
}
else
{
lean_dec_ref(v_c_3088_);
goto v___jp_3091_;
}
}
v___jp_3091_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
return v___x_3093_;
}
v___jp_3094_:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3176_, lean_object* v_args_3177_, lean_object* v_a_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3176_, v_args_3177_);
lean_dec_ref(v_args_3177_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3180_, lean_object* v_Model_3181_, lean_object* v_Msg_3182_, lean_object* v_c_3183_, lean_object* v_args_3184_){
_start:
{
lean_object* v___x_3186_; 
v___x_3186_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3183_, v_args_3184_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3187_, lean_object* v_Model_3188_, lean_object* v_Msg_3189_, lean_object* v_c_3190_, lean_object* v_args_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3187_, v_Model_3188_, v_Msg_3189_, v_c_3190_, v_args_3191_);
lean_dec_ref(v_args_3191_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3194_, lean_object* v___x_3195_, lean_object* v_as_3196_, lean_object* v_as_x27_3197_, lean_object* v_b_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_3195_, v_as_x27_3197_, v_b_3198_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3202_, lean_object* v___x_3203_, lean_object* v_as_3204_, lean_object* v_as_x27_3205_, lean_object* v_b_3206_, lean_object* v_a_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3202_, v___x_3203_, v_as_3204_, v_as_x27_3205_, v_b_3206_, v_a_3207_);
lean_dec(v_as_x27_3205_);
lean_dec(v_as_3204_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3210_, lean_object* v_items_3211_, lean_object* v___x_3212_, lean_object* v_s_3213_, lean_object* v_inst_3214_, lean_object* v_a_3215_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3211_, v___x_3212_, v_s_3213_, v_a_3215_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3218_, lean_object* v_items_3219_, lean_object* v___x_3220_, lean_object* v_s_3221_, lean_object* v_inst_3222_, lean_object* v_a_3223_, lean_object* v___y_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3218_, v_items_3219_, v___x_3220_, v_s_3221_, v_inst_3222_, v_a_3223_);
lean_dec_ref(v___x_3220_);
lean_dec_ref(v_items_3219_);
return v_res_3225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3(lean_object* v_Msg_3226_, lean_object* v_Flags_3227_, lean_object* v_Model_3228_, lean_object* v_c_3229_, lean_object* v_as_3230_, size_t v_sz_3231_, size_t v_i_3232_, lean_object* v_b_3233_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3229_, v_as_3230_, v_sz_3231_, v_i_3232_, v_b_3233_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___boxed(lean_object* v_Msg_3236_, lean_object* v_Flags_3237_, lean_object* v_Model_3238_, lean_object* v_c_3239_, lean_object* v_as_3240_, lean_object* v_sz_3241_, lean_object* v_i_3242_, lean_object* v_b_3243_, lean_object* v___y_3244_){
_start:
{
size_t v_sz_boxed_3245_; size_t v_i_boxed_3246_; lean_object* v_res_3247_; 
v_sz_boxed_3245_ = lean_unbox_usize(v_sz_3241_);
lean_dec(v_sz_3241_);
v_i_boxed_3246_ = lean_unbox_usize(v_i_3242_);
lean_dec(v_i_3242_);
v_res_3247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3(v_Msg_3236_, v_Flags_3237_, v_Model_3238_, v_c_3239_, v_as_3240_, v_sz_boxed_3245_, v_i_boxed_3246_, v_b_3243_);
lean_dec_ref(v_as_3240_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3248_, lean_object* v_c_3249_, lean_object* v_as_x27_3250_, lean_object* v_b_3251_){
_start:
{
if (lean_obj_tag(v_as_x27_3250_) == 0)
{
lean_object* v___x_3253_; 
lean_dec_ref(v_c_3249_);
lean_dec_ref(v___y_3248_);
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_b_3251_);
return v___x_3253_;
}
else
{
lean_object* v_head_3254_; lean_object* v_tail_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v_head_3254_ = lean_ctor_get(v_as_x27_3250_, 0);
v_tail_3255_ = lean_ctor_get(v_as_x27_3250_, 1);
v___x_3256_ = lean_box(0);
lean_inc(v_head_3254_);
lean_inc_ref(v___y_3248_);
v___x_3257_ = lean_apply_1(v_head_3254_, v___y_3248_);
if (lean_obj_tag(v___x_3257_) == 1)
{
lean_object* v_val_3258_; lean_object* v___x_3259_; 
v_val_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_val_3258_);
lean_dec_ref_known(v___x_3257_, 1);
lean_inc_ref(v_c_3249_);
v___x_3259_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3249_, v_val_3258_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_dec_ref_known(v___x_3259_, 1);
v_as_x27_3250_ = v_tail_3255_;
v_b_3251_ = v___x_3256_;
goto _start;
}
else
{
lean_dec_ref(v_c_3249_);
lean_dec_ref(v___y_3248_);
return v___x_3259_;
}
}
else
{
lean_dec(v___x_3257_);
v_as_x27_3250_ = v_tail_3255_;
v_b_3251_ = v___x_3256_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object* v___y_3262_, lean_object* v_c_3263_, lean_object* v_as_x27_3264_, lean_object* v_b_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3262_, v_c_3263_, v_as_x27_3264_, v_b_3265_);
lean_dec(v_as_x27_3264_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3268_, lean_object* v_args_3269_){
_start:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; 
v___x_3274_ = lean_unsigned_to_nat(0u);
v___x_3275_ = lean_array_get_size(v_args_3269_);
v___x_3276_ = lean_nat_dec_lt(v___x_3274_, v___x_3275_);
if (v___x_3276_ == 0)
{
lean_dec_ref(v_c_3268_);
goto v___jp_3271_;
}
else
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_array_fget_borrowed(v_args_3269_, v___x_3274_);
if (lean_obj_tag(v___x_3277_) == 3)
{
double v_n_3278_; lean_object* v___y_3280_; lean_object* v___x_3311_; uint8_t v___x_3312_; 
v_n_3278_ = lean_ctor_get_float(v___x_3277_, 0);
v___x_3311_ = lean_unsigned_to_nat(1u);
v___x_3312_ = lean_nat_dec_lt(v___x_3311_, v___x_3275_);
if (v___x_3312_ == 0)
{
goto v___jp_3309_;
}
else
{
lean_object* v___x_3313_; 
v___x_3313_ = lean_array_fget_borrowed(v_args_3269_, v___x_3311_);
if (lean_obj_tag(v___x_3313_) == 7)
{
lean_object* v_items_3314_; 
v_items_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc_ref(v_items_3314_);
v___y_3280_ = v_items_3314_;
goto v___jp_3279_;
}
else
{
goto v___jp_3309_;
}
}
v___jp_3279_:
{
lean_object* v_ref_3281_; lean_object* v___x_3282_; lean_object* v_handlers_3283_; uint64_t v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v_ref_3281_ = lean_ctor_get(v_c_3268_, 1);
v___x_3282_ = lean_st_ref_get(v_ref_3281_);
v_handlers_3283_ = lean_ctor_get(v___x_3282_, 6);
lean_inc_ref(v_handlers_3283_);
lean_dec(v___x_3282_);
v___x_3284_ = lean_float_to_uint64(v_n_3278_);
v___x_3285_ = lean_uint64_to_nat(v___x_3284_);
v___x_3286_ = lean_box(0);
v___x_3287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3283_, v___x_3285_, v___x_3286_);
lean_dec(v___x_3285_);
lean_dec_ref(v_handlers_3283_);
v___x_3288_ = lean_box(0);
lean_inc_ref(v_c_3268_);
v___x_3289_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3280_, v_c_3268_, v___x_3287_, v___x_3288_);
lean_dec(v___x_3287_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v___x_3290_; lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3300_; 
lean_dec_ref_known(v___x_3289_, 1);
v___x_3290_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3268_);
lean_dec_ref(v_c_3268_);
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3293_ = v___x_3290_;
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; uint8_t v___x_3296_; lean_object* v___x_3298_; 
v___x_3295_ = lean_alloc_ctor(2, 0, 1);
v___x_3296_ = lean_unbox(v_a_3291_);
lean_dec(v_a_3291_);
lean_ctor_set_uint8(v___x_3295_, 0, v___x_3296_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3295_);
v___x_3298_ = v___x_3293_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3295_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec_ref(v_c_3268_);
v_a_3301_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3289_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3289_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
}
v___jp_3309_:
{
lean_object* v___x_3310_; 
v___x_3310_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3280_ = v___x_3310_;
goto v___jp_3279_;
}
}
else
{
lean_dec_ref(v_c_3268_);
goto v___jp_3271_;
}
}
v___jp_3271_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3272_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
return v___x_3273_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3315_, lean_object* v_args_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3315_, v_args_3316_);
lean_dec_ref(v_args_3316_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3319_, lean_object* v_Model_3320_, lean_object* v_Msg_3321_, lean_object* v_c_3322_, lean_object* v_args_3323_){
_start:
{
lean_object* v___x_3325_; 
v___x_3325_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3322_, v_args_3323_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3326_, lean_object* v_Model_3327_, lean_object* v_Msg_3328_, lean_object* v_c_3329_, lean_object* v_args_3330_, lean_object* v_a_3331_){
_start:
{
lean_object* v_res_3332_; 
v_res_3332_ = l_Lasm_UI_Runtime_onSub(v_Flags_3326_, v_Model_3327_, v_Msg_3328_, v_c_3329_, v_args_3330_);
lean_dec_ref(v_args_3330_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3333_, lean_object* v___y_3334_, lean_object* v_Flags_3335_, lean_object* v_Model_3336_, lean_object* v_c_3337_, lean_object* v_as_3338_, lean_object* v_as_x27_3339_, lean_object* v_b_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v___x_3343_; 
v___x_3343_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3334_, v_c_3337_, v_as_x27_3339_, v_b_3340_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object* v_Msg_3344_, lean_object* v___y_3345_, lean_object* v_Flags_3346_, lean_object* v_Model_3347_, lean_object* v_c_3348_, lean_object* v_as_3349_, lean_object* v_as_x27_3350_, lean_object* v_b_3351_, lean_object* v_a_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v_res_3354_; 
v_res_3354_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(v_Msg_3344_, v___y_3345_, v_Flags_3346_, v_Model_3347_, v_c_3348_, v_as_3349_, v_as_x27_3350_, v_b_3351_, v_a_3352_);
lean_dec(v_as_x27_3350_);
lean_dec(v_as_3349_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_3358_; 
v___x_3358_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_3358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Lasm_UI_instHotModel___redArg();
return v_res_3360_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Lasm_UI_instHotModel___redArg();
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_3362_){
_start:
{
lean_object* v___x_3363_; 
v___x_3363_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_3363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_3364_, lean_object* v_d_3365_){
_start:
{
lean_object* v_fromJS_3366_; lean_object* v___x_3367_; 
v_fromJS_3366_ = lean_ctor_get(v_inst_3364_, 0);
lean_inc_ref(v_fromJS_3366_);
lean_dec_ref(v_inst_3364_);
v___x_3367_ = lean_apply_1(v_fromJS_3366_, v_d_3365_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v___x_3368_; 
lean_dec_ref_known(v___x_3367_, 1);
v___x_3368_ = lean_box(0);
return v___x_3368_;
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3367_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3367_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_3377_, lean_object* v_inst_3378_){
_start:
{
lean_object* v___f_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___f_3379_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3379_, 0, v_inst_3378_);
v___x_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3380_, 0, v_inst_3377_);
v___x_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___f_3379_);
v___x_3382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3380_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_3383_, lean_object* v_inst_3384_, lean_object* v_inst_3385_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_3384_, v_inst_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3387_, lean_object* v_x_3388_){
_start:
{
lean_object* v___x_3390_; lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3399_; 
v___x_3390_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3387_);
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3393_ = v___x_3390_;
v_isShared_3394_ = v_isSharedCheck_3399_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3390_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3399_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3395_; lean_object* v___x_3397_; 
v___x_3395_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3395_, 0, v_a_3391_);
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 0, v___x_3395_);
v___x_3397_ = v___x_3393_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3400_, lean_object* v_x_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3400_, v_x_3401_);
lean_dec_ref(v_x_3401_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v_app_3404_, lean_object* v___x_3405_, lean_object* v___x_3406_, lean_object* v_args_3407_){
_start:
{
lean_object* v_onUrlChange_3421_; lean_object* v___y_3423_; lean_object* v___x_3439_; uint8_t v___x_3440_; 
v_onUrlChange_3421_ = lean_ctor_get(v_app_3404_, 4);
lean_inc(v_onUrlChange_3421_);
lean_dec_ref(v_app_3404_);
v___x_3439_ = lean_array_get_size(v_args_3407_);
v___x_3440_ = lean_nat_dec_lt(v___x_3406_, v___x_3439_);
if (v___x_3440_ == 0)
{
lean_object* v___x_3441_; 
v___x_3441_ = lean_box(0);
v___y_3423_ = v___x_3441_;
goto v___jp_3422_;
}
else
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3442_ = lean_array_fget_borrowed(v_args_3407_, v___x_3406_);
lean_inc(v___x_3442_);
v___x_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3442_);
v___y_3423_ = v___x_3443_;
goto v___jp_3422_;
}
v___jp_3409_:
{
lean_object* v___x_3410_; lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3420_; 
v___x_3410_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3405_);
lean_dec_ref(v___x_3405_);
v_a_3411_ = lean_ctor_get(v___x_3410_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3413_ = v___x_3410_;
v_isShared_3414_ = v_isSharedCheck_3420_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3410_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3420_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3415_; uint8_t v___x_3416_; lean_object* v___x_3418_; 
v___x_3415_ = lean_alloc_ctor(2, 0, 1);
v___x_3416_ = lean_unbox(v_a_3411_);
lean_dec(v_a_3411_);
lean_ctor_set_uint8(v___x_3415_, 0, v___x_3416_);
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 0, v___x_3415_);
v___x_3418_ = v___x_3413_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3415_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
v___jp_3422_:
{
if (lean_obj_tag(v_onUrlChange_3421_) == 1)
{
if (lean_obj_tag(v___y_3423_) == 1)
{
lean_object* v_val_3424_; 
v_val_3424_ = lean_ctor_get(v___y_3423_, 0);
lean_inc(v_val_3424_);
lean_dec_ref_known(v___y_3423_, 1);
if (lean_obj_tag(v_val_3424_) == 4)
{
lean_object* v_val_3425_; lean_object* v_s_3426_; lean_object* v___x_3427_; 
v_val_3425_ = lean_ctor_get(v_onUrlChange_3421_, 0);
lean_inc(v_val_3425_);
lean_dec_ref_known(v_onUrlChange_3421_, 1);
v_s_3426_ = lean_ctor_get(v_val_3424_, 0);
lean_inc_ref(v_s_3426_);
lean_dec_ref_known(v_val_3424_, 1);
v___x_3427_ = l_Lasm_UI_Url_parse(v_s_3426_);
if (lean_obj_tag(v___x_3427_) == 1)
{
lean_object* v_val_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v_val_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_val_3428_);
lean_dec_ref_known(v___x_3427_, 1);
v___x_3429_ = lean_apply_1(v_val_3425_, v_val_3428_);
lean_inc_ref(v___x_3405_);
v___x_3430_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3405_, v___x_3429_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_dec_ref_known(v___x_3430_, 1);
goto v___jp_3409_;
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec_ref(v___x_3405_);
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
else
{
lean_dec(v___x_3427_);
lean_dec(v_val_3425_);
goto v___jp_3409_;
}
}
else
{
lean_dec(v_val_3424_);
lean_dec_ref_known(v_onUrlChange_3421_, 1);
goto v___jp_3409_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3421_, 1);
lean_dec(v___y_3423_);
goto v___jp_3409_;
}
}
else
{
lean_dec(v___y_3423_);
lean_dec(v_onUrlChange_3421_);
goto v___jp_3409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v_app_3444_, lean_object* v___x_3445_, lean_object* v___x_3446_, lean_object* v_args_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lasm_UI_App_run___redArg___lam__1(v_app_3444_, v___x_3445_, v___x_3446_, v_args_3447_);
lean_dec_ref(v_args_3447_);
lean_dec(v___x_3446_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3450_, lean_object* v___x_3451_, lean_object* v_a_3452_, lean_object* v_x_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3451_, v_a_3452_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_dec_ref_known(v___x_3459_, 1);
goto v___jp_3456_;
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3461_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3462_ = l_Lasm_UI_Runtime_report(v___x_3461_, v_a_3460_);
lean_dec_ref(v___x_3462_);
goto v___jp_3456_;
}
v___jp_3456_:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3450_);
v___x_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
return v___x_3458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3463_, lean_object* v___x_3464_, lean_object* v_a_3465_, lean_object* v_x_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3463_, v___x_3464_, v_a_3465_, v_x_3466_, v___y_3467_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3470_, lean_object* v___x_3471_, lean_object* v_d_3472_){
_start:
{
lean_object* v___x_3474_; 
v___x_3474_ = lean_apply_1(v_val_3470_, v_d_3472_);
if (lean_obj_tag(v___x_3474_) == 1)
{
lean_object* v_val_3475_; lean_object* v___x_3476_; 
v_val_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_val_3475_);
lean_dec_ref_known(v___x_3474_, 1);
lean_inc_ref(v___x_3471_);
v___x_3476_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3471_, v_val_3475_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v___x_3477_; 
lean_dec_ref_known(v___x_3476_, 1);
v___x_3477_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3471_);
lean_dec_ref(v___x_3471_);
return v___x_3477_;
}
else
{
lean_dec_ref(v___x_3471_);
return v___x_3476_;
}
}
else
{
lean_object* v___x_3478_; 
lean_dec(v___x_3474_);
v___x_3478_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3471_);
lean_dec_ref(v___x_3471_);
return v___x_3478_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3479_, lean_object* v___x_3480_, lean_object* v_d_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3479_, v___x_3480_, v_d_3481_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_3484_){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = lean_st_ref_get(v_val_3484_);
v___x_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_3488_, lean_object* v___y_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_3488_);
lean_dec(v_val_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_3491_, lean_object* v_____do__lift_3492_){
_start:
{
lean_object* v_model_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v_model_3494_ = lean_ctor_get(v_____do__lift_3492_, 0);
lean_inc(v_model_3494_);
lean_dec_ref(v_____do__lift_3492_);
v___x_3495_ = lean_apply_1(v_val_3491_, v_model_3494_);
v___x_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_3497_, lean_object* v_____do__lift_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_3497_, v_____do__lift_3498_);
return v_res_3500_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = l_instMonadEIO___redArg();
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3516_, lean_object* v_hot_3517_, lean_object* v_app_3518_){
_start:
{
lean_object* v___x_3520_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; uint8_t v___y_3532_; lean_object* v___y_3533_; uint8_t v___y_3534_; uint8_t v___y_3535_; lean_object* v___x_3625_; 
v___x_3520_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3625_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3625_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
lean_inc(v_a_3626_);
lean_dec_ref_known(v___x_3625_, 1);
v___x_3627_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3628_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3629_ = l_Lasm_JS_Data_field(v_a_3626_, v___x_3628_);
v___x_3630_ = l_Lasm_JS_decodeAs___redArg(v_inst_3516_, v___x_3627_, v___x_3629_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3632_; lean_object* v___y_3634_; lean_object* v___y_3635_; lean_object* v___y_3636_; lean_object* v___y_3637_; lean_object* v___y_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; uint8_t v___y_3644_; uint8_t v___y_3645_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; uint8_t v___y_3667_; lean_object* v___y_3668_; uint8_t v___y_3669_; lean_object* v_fst_3718_; lean_object* v_snd_3719_; lean_object* v___y_3747_; lean_object* v___y_3753_; lean_object* v___x_3771_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v___x_3632_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3771_ = l_Lasm_JS_Data_field(v_a_3626_, v___x_3632_);
lean_dec(v_a_3626_);
if (lean_obj_tag(v___x_3771_) == 4)
{
lean_object* v_s_3772_; lean_object* v___x_3773_; 
v_s_3772_ = lean_ctor_get(v___x_3771_, 0);
lean_inc_ref(v_s_3772_);
lean_dec_ref_known(v___x_3771_, 1);
v___x_3773_ = l_Lasm_UI_Url_parse(v_s_3772_);
if (lean_obj_tag(v___x_3773_) == 0)
{
goto v___jp_3769_;
}
else
{
lean_object* v_val_3774_; 
v_val_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_val_3774_);
lean_dec_ref_known(v___x_3773_, 1);
v___y_3753_ = v_val_3774_;
goto v___jp_3752_;
}
}
else
{
lean_dec(v___x_3771_);
goto v___jp_3769_;
}
v___jp_3633_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v_onUrlChange_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3646_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3647_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3647_, 0, v___y_3642_);
lean_ctor_set(v___x_3647_, 1, v___x_3646_);
v_onUrlChange_3648_ = lean_ctor_get(v_app_3518_, 4);
lean_inc(v_onUrlChange_3648_);
lean_dec_ref(v_app_3518_);
v___x_3649_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___y_3641_);
lean_ctor_set(v___x_3649_, 1, v___x_3646_);
v___x_3650_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___y_3640_);
lean_ctor_set(v___x_3650_, 1, v___x_3646_);
v___x_3651_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
lean_ctor_set(v___x_3652_, 1, v___x_3647_);
v___x_3653_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
lean_ctor_set(v___x_3654_, 1, v___x_3649_);
v___x_3655_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3655_);
lean_ctor_set(v___x_3656_, 1, v___x_3650_);
v___x_3657_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___y_3636_);
lean_ctor_set(v___x_3657_, 1, v___x_3646_);
v___x_3658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3632_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3648_) == 0)
{
v___y_3522_ = v___y_3634_;
v___y_3523_ = v___y_3637_;
v___y_3524_ = v___x_3658_;
v___y_3525_ = v___y_3635_;
v___y_3526_ = v___y_3638_;
v___y_3527_ = v___x_3652_;
v___y_3528_ = v___y_3639_;
v___y_3529_ = v___x_3656_;
v___y_3530_ = v___x_3659_;
v___y_3531_ = v___x_3654_;
v___y_3532_ = v___y_3644_;
v___y_3533_ = v___y_3643_;
v___y_3534_ = v___y_3645_;
v___y_3535_ = v___y_3645_;
goto v___jp_3521_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3648_, 1);
v___y_3522_ = v___y_3634_;
v___y_3523_ = v___y_3637_;
v___y_3524_ = v___x_3658_;
v___y_3525_ = v___y_3635_;
v___y_3526_ = v___y_3638_;
v___y_3527_ = v___x_3652_;
v___y_3528_ = v___y_3639_;
v___y_3529_ = v___x_3656_;
v___y_3530_ = v___x_3659_;
v___y_3531_ = v___x_3654_;
v___y_3532_ = v___y_3644_;
v___y_3533_ = v___y_3643_;
v___y_3534_ = v___y_3645_;
v___y_3535_ = v___y_3644_;
goto v___jp_3521_;
}
}
v___jp_3660_:
{
lean_object* v___x_3670_; 
v___x_3670_ = l_Lasm_JS_Function_ofSyncFn(v___y_3661_);
if (lean_obj_tag(v___x_3670_) == 0)
{
lean_object* v_a_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; 
v_a_3671_ = lean_ctor_get(v___x_3670_, 0);
lean_inc(v_a_3671_);
lean_dec_ref_known(v___x_3670_, 1);
lean_inc_ref(v___y_3663_);
v___x_3672_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3672_, 0, lean_box(0));
lean_closure_set(v___x_3672_, 1, lean_box(0));
lean_closure_set(v___x_3672_, 2, lean_box(0));
lean_closure_set(v___x_3672_, 3, v___y_3663_);
v___x_3673_ = l_Lasm_JS_Function_ofSyncFn(v___x_3672_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
lean_inc_ref(v___y_3663_);
v___x_3675_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3675_, 0, lean_box(0));
lean_closure_set(v___x_3675_, 1, lean_box(0));
lean_closure_set(v___x_3675_, 2, lean_box(0));
lean_closure_set(v___x_3675_, 3, v___y_3663_);
v___x_3676_ = l_Lasm_JS_Function_ofSyncFn(v___x_3675_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3678_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3677_);
lean_dec_ref_known(v___x_3676_, 1);
v___x_3678_ = l_Lasm_JS_Function_ofSyncFn(v___y_3662_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_receive_3679_; 
v_receive_3679_ = lean_ctor_get(v_app_3518_, 5);
if (lean_obj_tag(v_receive_3679_) == 1)
{
lean_object* v_a_3680_; lean_object* v_val_3681_; lean_object* v___f_3682_; lean_object* v___x_3683_; 
v_a_3680_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3680_);
lean_dec_ref_known(v___x_3678_, 1);
v_val_3681_ = lean_ctor_get(v_receive_3679_, 0);
lean_inc_ref(v___y_3663_);
lean_inc(v_val_3681_);
v___f_3682_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3682_, 0, v_val_3681_);
lean_closure_set(v___f_3682_, 1, v___y_3663_);
v___x_3683_ = l_Lasm_Web_App_onMessage(v___f_3682_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_dec_ref_known(v___x_3683_, 1);
lean_inc_ref(v___y_3663_);
v___y_3634_ = v___y_3663_;
v___y_3635_ = v___y_3664_;
v___y_3636_ = v_a_3680_;
v___y_3637_ = v___y_3665_;
v___y_3638_ = v___y_3663_;
v___y_3639_ = v___y_3666_;
v___y_3640_ = v_a_3677_;
v___y_3641_ = v_a_3674_;
v___y_3642_ = v_a_3671_;
v___y_3643_ = v___y_3668_;
v___y_3644_ = v___y_3667_;
v___y_3645_ = v___y_3669_;
goto v___jp_3633_;
}
else
{
lean_dec(v_a_3680_);
lean_dec(v_a_3677_);
lean_dec(v_a_3674_);
lean_dec(v_a_3671_);
lean_dec(v___y_3668_);
lean_dec(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v_app_3518_);
return v___x_3683_;
}
}
else
{
lean_object* v_a_3684_; 
v_a_3684_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3684_);
lean_dec_ref_known(v___x_3678_, 1);
lean_inc_ref(v___y_3663_);
v___y_3634_ = v___y_3663_;
v___y_3635_ = v___y_3664_;
v___y_3636_ = v_a_3684_;
v___y_3637_ = v___y_3665_;
v___y_3638_ = v___y_3663_;
v___y_3639_ = v___y_3666_;
v___y_3640_ = v_a_3677_;
v___y_3641_ = v_a_3674_;
v___y_3642_ = v_a_3671_;
v___y_3643_ = v___y_3668_;
v___y_3644_ = v___y_3667_;
v___y_3645_ = v___y_3669_;
goto v___jp_3633_;
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_dec(v_a_3677_);
lean_dec(v_a_3674_);
lean_dec(v_a_3671_);
lean_dec(v___y_3668_);
lean_dec(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v_app_3518_);
v_a_3685_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3678_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3678_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec(v_a_3674_);
lean_dec(v_a_3671_);
lean_dec(v___y_3668_);
lean_dec(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec_ref(v_app_3518_);
v_a_3693_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3676_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3676_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v_a_3671_);
lean_dec(v___y_3668_);
lean_dec(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec_ref(v_app_3518_);
v_a_3701_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3673_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3673_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_object* v_a_3709_; lean_object* v___x_3711_; uint8_t v_isShared_3712_; uint8_t v_isSharedCheck_3716_; 
lean_dec(v___y_3668_);
lean_dec(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec_ref(v_app_3518_);
v_a_3709_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3711_ = v___x_3670_;
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
else
{
lean_inc(v_a_3709_);
lean_dec(v___x_3670_);
v___x_3711_ = lean_box(0);
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
v_resetjp_3710_:
{
lean_object* v___x_3714_; 
if (v_isShared_3712_ == 0)
{
v___x_3714_ = v___x_3711_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_a_3709_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
v___jp_3717_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; uint8_t v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v_save_x3f_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3744_; 
v___x_3720_ = lean_box(0);
v___x_3721_ = lean_unsigned_to_nat(1u);
v___x_3722_ = lean_unsigned_to_nat(0u);
v___x_3723_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3724_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3725_ = 1;
v___x_3726_ = 0;
v___x_3727_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__6));
v___x_3728_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3728_, 0, v_fst_3718_);
lean_ctor_set(v___x_3728_, 1, v___x_3720_);
lean_ctor_set(v___x_3728_, 2, v___x_3721_);
lean_ctor_set(v___x_3728_, 3, v___x_3724_);
lean_ctor_set(v___x_3728_, 4, v___x_3727_);
lean_ctor_set(v___x_3728_, 5, v___x_3723_);
lean_ctor_set(v___x_3728_, 6, v___x_3723_);
lean_ctor_set(v___x_3728_, 7, v___x_3721_);
lean_ctor_set(v___x_3728_, 8, v___x_3727_);
lean_ctor_set(v___x_3728_, 9, v___x_3720_);
lean_ctor_set_uint8(v___x_3728_, sizeof(void*)*10, v___x_3725_);
lean_ctor_set_uint8(v___x_3728_, sizeof(void*)*10 + 1, v___x_3726_);
lean_ctor_set_uint8(v___x_3728_, sizeof(void*)*10 + 2, v___x_3726_);
v___x_3729_ = lean_st_mk_ref(v___x_3728_);
v_save_x3f_3730_ = lean_ctor_get(v_hot_3517_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_hot_3517_);
if (v_isSharedCheck_3744_ == 0)
{
lean_object* v_unused_3745_; 
v_unused_3745_ = lean_ctor_get(v_hot_3517_, 1);
lean_dec(v_unused_3745_);
v___x_3732_ = v_hot_3517_;
v_isShared_3733_ = v_isSharedCheck_3744_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_save_x3f_3730_);
lean_dec(v_hot_3517_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3744_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
lean_inc(v___x_3729_);
lean_inc_ref(v_app_3518_);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 1, v___x_3729_);
lean_ctor_set(v___x_3732_, 0, v_app_3518_);
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_app_3518_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v___x_3729_);
v___x_3735_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
lean_object* v___f_3736_; lean_object* v___f_3737_; 
lean_inc_ref_n(v___x_3735_, 2);
v___f_3736_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3736_, 0, v___x_3735_);
lean_inc_ref(v_app_3518_);
v___f_3737_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3737_, 0, v_app_3518_);
lean_closure_set(v___f_3737_, 1, v___x_3735_);
lean_closure_set(v___f_3737_, 2, v___x_3722_);
if (lean_obj_tag(v_save_x3f_3730_) == 1)
{
lean_object* v_val_3738_; lean_object* v___f_3739_; lean_object* v___f_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v_val_3738_ = lean_ctor_get(v_save_x3f_3730_, 0);
lean_inc(v_val_3738_);
lean_dec_ref_known(v_save_x3f_3730_, 1);
lean_inc(v___x_3729_);
v___f_3739_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3739_, 0, v___x_3729_);
v___f_3740_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3740_, 0, v_val_3738_);
v___x_3741_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3741_, 0, lean_box(0));
lean_closure_set(v___x_3741_, 1, lean_box(0));
lean_closure_set(v___x_3741_, 2, lean_box(0));
lean_closure_set(v___x_3741_, 3, v___f_3739_);
lean_closure_set(v___x_3741_, 4, v___f_3740_);
v___x_3742_ = l_Lasm_Web_App_onHotSave(v___x_3741_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_dec_ref_known(v___x_3742_, 1);
v___y_3661_ = v___f_3736_;
v___y_3662_ = v___f_3737_;
v___y_3663_ = v___x_3735_;
v___y_3664_ = v_snd_3719_;
v___y_3665_ = v___x_3729_;
v___y_3666_ = v___x_3722_;
v___y_3667_ = v___x_3725_;
v___y_3668_ = v___x_3721_;
v___y_3669_ = v___x_3726_;
goto v___jp_3660_;
}
else
{
lean_dec_ref(v___f_3737_);
lean_dec_ref(v___f_3736_);
lean_dec_ref(v___x_3735_);
lean_dec(v___x_3729_);
lean_dec(v_snd_3719_);
lean_dec_ref(v_app_3518_);
return v___x_3742_;
}
}
else
{
lean_dec(v_save_x3f_3730_);
v___y_3661_ = v___f_3736_;
v___y_3662_ = v___f_3737_;
v___y_3663_ = v___x_3735_;
v___y_3664_ = v_snd_3719_;
v___y_3665_ = v___x_3729_;
v___y_3666_ = v___x_3722_;
v___y_3667_ = v___x_3725_;
v___y_3668_ = v___x_3721_;
v___y_3669_ = v___x_3726_;
goto v___jp_3660_;
}
}
}
}
v___jp_3746_:
{
lean_object* v_init_3748_; lean_object* v___x_3749_; lean_object* v_fst_3750_; lean_object* v_snd_3751_; 
v_init_3748_ = lean_ctor_get(v_app_3518_, 0);
lean_inc_ref(v_init_3748_);
v___x_3749_ = lean_apply_2(v_init_3748_, v_a_3631_, v___y_3747_);
v_fst_3750_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_fst_3750_);
v_snd_3751_ = lean_ctor_get(v___x_3749_, 1);
lean_inc(v_snd_3751_);
lean_dec_ref(v___x_3749_);
v_fst_3718_ = v_fst_3750_;
v_snd_3719_ = v_snd_3751_;
goto v___jp_3717_;
}
v___jp_3752_:
{
lean_object* v_load_x3f_3754_; 
v_load_x3f_3754_ = lean_ctor_get(v_hot_3517_, 1);
if (lean_obj_tag(v_load_x3f_3754_) == 0)
{
v___y_3747_ = v___y_3753_;
goto v___jp_3746_;
}
else
{
lean_object* v_val_3755_; lean_object* v___x_3756_; 
v_val_3755_ = lean_ctor_get(v_load_x3f_3754_, 0);
v___x_3756_ = l_Lasm_Web_App_Raw_hotState();
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
if (lean_obj_tag(v_a_3757_) == 0)
{
v___y_3747_ = v___y_3753_;
goto v___jp_3746_;
}
else
{
lean_object* v___x_3758_; 
lean_inc(v_val_3755_);
v___x_3758_ = lean_apply_1(v_val_3755_, v_a_3757_);
if (lean_obj_tag(v___x_3758_) == 0)
{
v___y_3747_ = v___y_3753_;
goto v___jp_3746_;
}
else
{
lean_object* v_val_3759_; lean_object* v___x_3760_; 
lean_dec_ref(v___y_3753_);
lean_dec(v_a_3631_);
v_val_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_val_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v___x_3760_ = lean_box(0);
v_fst_3718_ = v_val_3759_;
v_snd_3719_ = v___x_3760_;
goto v___jp_3717_;
}
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
lean_dec_ref(v___y_3753_);
lean_dec(v_a_3631_);
lean_dec_ref(v_app_3518_);
lean_dec_ref(v_hot_3517_);
v_a_3761_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v___x_3756_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3756_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_a_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
}
v___jp_3769_:
{
lean_object* v___x_3770_; 
v___x_3770_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__9));
v___y_3753_ = v___x_3770_;
goto v___jp_3752_;
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec(v_a_3626_);
lean_dec_ref(v_app_3518_);
lean_dec_ref(v_hot_3517_);
v_a_3775_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3630_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3630_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
else
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3790_; 
lean_dec_ref(v_app_3518_);
lean_dec_ref(v_hot_3517_);
lean_dec_ref(v_inst_3516_);
v_a_3783_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3785_ = v___x_3625_;
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v___x_3625_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3783_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
return v___x_3788_;
}
}
}
v___jp_3521_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3536_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3536_, 0, v___y_3535_);
lean_inc_ref(v___y_3530_);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___y_3530_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_box(0);
v___x_3539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3537_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___y_3524_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___y_3529_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___y_3531_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___y_3527_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = l_Lasm_JS_obj(v___x_3543_);
v___x_3545_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3544_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v___x_3546_; lean_object* v_a_3547_; lean_object* v___x_3548_; 
lean_dec_ref_known(v___x_3545_, 1);
lean_inc_ref(v___y_3526_);
v___x_3546_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3526_);
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_a_3547_);
lean_dec_ref(v___x_3546_);
v___x_3548_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3547_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v___x_3549_; lean_object* v_model_3550_; lean_object* v_live_3551_; lean_object* v_next_3552_; lean_object* v_tables_3553_; uint8_t v_dirty_3554_; uint8_t v_scheduled_3555_; lean_object* v_queue_3556_; lean_object* v_subs_3557_; lean_object* v_handlers_3558_; lean_object* v_nextSub_3559_; lean_object* v_touched_3560_; lean_object* v_ports_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3624_; 
lean_dec_ref_known(v___x_3548_, 1);
v___x_3549_ = lean_st_ref_take(v___y_3523_);
v_model_3550_ = lean_ctor_get(v___x_3549_, 0);
v_live_3551_ = lean_ctor_get(v___x_3549_, 1);
v_next_3552_ = lean_ctor_get(v___x_3549_, 2);
v_tables_3553_ = lean_ctor_get(v___x_3549_, 3);
v_dirty_3554_ = lean_ctor_get_uint8(v___x_3549_, sizeof(void*)*10);
v_scheduled_3555_ = lean_ctor_get_uint8(v___x_3549_, sizeof(void*)*10 + 1);
v_queue_3556_ = lean_ctor_get(v___x_3549_, 4);
v_subs_3557_ = lean_ctor_get(v___x_3549_, 5);
v_handlers_3558_ = lean_ctor_get(v___x_3549_, 6);
v_nextSub_3559_ = lean_ctor_get(v___x_3549_, 7);
v_touched_3560_ = lean_ctor_get(v___x_3549_, 8);
v_ports_3561_ = lean_ctor_get(v___x_3549_, 9);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3563_ = v___x_3549_;
v_isShared_3564_ = v_isSharedCheck_3624_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_ports_3561_);
lean_inc(v_touched_3560_);
lean_inc(v_nextSub_3559_);
lean_inc(v_handlers_3558_);
lean_inc(v_subs_3557_);
lean_inc(v_queue_3556_);
lean_inc(v_tables_3553_);
lean_inc(v_next_3552_);
lean_inc(v_live_3551_);
lean_inc(v_model_3550_);
lean_dec(v___x_3549_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3624_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_model_3550_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v_live_3551_);
lean_ctor_set(v_reuseFailAlloc_3623_, 2, v_next_3552_);
lean_ctor_set(v_reuseFailAlloc_3623_, 3, v_tables_3553_);
lean_ctor_set(v_reuseFailAlloc_3623_, 4, v_queue_3556_);
lean_ctor_set(v_reuseFailAlloc_3623_, 5, v_subs_3557_);
lean_ctor_set(v_reuseFailAlloc_3623_, 6, v_handlers_3558_);
lean_ctor_set(v_reuseFailAlloc_3623_, 7, v_nextSub_3559_);
lean_ctor_set(v_reuseFailAlloc_3623_, 8, v_touched_3560_);
lean_ctor_set(v_reuseFailAlloc_3623_, 9, v_ports_3561_);
lean_ctor_set_uint8(v_reuseFailAlloc_3623_, sizeof(void*)*10, v_dirty_3554_);
lean_ctor_set_uint8(v_reuseFailAlloc_3623_, sizeof(void*)*10 + 1, v_scheduled_3555_);
v___x_3566_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___f_3569_; lean_object* v___x_5004__overap_3570_; lean_object* v___x_3571_; 
lean_ctor_set_uint8(v___x_3566_, sizeof(void*)*10 + 2, v___y_3532_);
v___x_3567_ = lean_st_ref_put(v___y_3523_, v___x_3566_);
v___x_3568_ = lean_box(0);
v___f_3569_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3569_, 0, v___x_3568_);
lean_closure_set(v___f_3569_, 1, v___y_3522_);
v___x_5004__overap_3570_ = l_List_forIn_x27_loop___redArg(v___x_3520_, v___f_3569_, v___y_3525_, v___x_3568_);
lean_dec(v___y_3525_);
v___x_3571_ = lean_apply_1(v___x_5004__overap_3570_, lean_box(0));
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v___x_3572_; lean_object* v_model_3573_; lean_object* v_live_3574_; lean_object* v_next_3575_; lean_object* v_tables_3576_; uint8_t v_dirty_3577_; uint8_t v_scheduled_3578_; lean_object* v_queue_3579_; lean_object* v_subs_3580_; lean_object* v_handlers_3581_; lean_object* v_nextSub_3582_; lean_object* v_touched_3583_; lean_object* v_ports_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3622_; 
lean_dec_ref_known(v___x_3571_, 1);
v___x_3572_ = lean_st_ref_take(v___y_3523_);
v_model_3573_ = lean_ctor_get(v___x_3572_, 0);
v_live_3574_ = lean_ctor_get(v___x_3572_, 1);
v_next_3575_ = lean_ctor_get(v___x_3572_, 2);
v_tables_3576_ = lean_ctor_get(v___x_3572_, 3);
v_dirty_3577_ = lean_ctor_get_uint8(v___x_3572_, sizeof(void*)*10);
v_scheduled_3578_ = lean_ctor_get_uint8(v___x_3572_, sizeof(void*)*10 + 1);
v_queue_3579_ = lean_ctor_get(v___x_3572_, 4);
v_subs_3580_ = lean_ctor_get(v___x_3572_, 5);
v_handlers_3581_ = lean_ctor_get(v___x_3572_, 6);
v_nextSub_3582_ = lean_ctor_get(v___x_3572_, 7);
v_touched_3583_ = lean_ctor_get(v___x_3572_, 8);
v_ports_3584_ = lean_ctor_get(v___x_3572_, 9);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3586_ = v___x_3572_;
v_isShared_3587_ = v_isSharedCheck_3622_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_ports_3584_);
lean_inc(v_touched_3583_);
lean_inc(v_nextSub_3582_);
lean_inc(v_handlers_3581_);
lean_inc(v_subs_3580_);
lean_inc(v_queue_3579_);
lean_inc(v_tables_3576_);
lean_inc(v_next_3575_);
lean_inc(v_live_3574_);
lean_inc(v_model_3573_);
lean_dec(v___x_3572_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3622_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v___x_3589_; 
if (v_isShared_3587_ == 0)
{
v___x_3589_ = v___x_3586_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_model_3573_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v_live_3574_);
lean_ctor_set(v_reuseFailAlloc_3621_, 2, v_next_3575_);
lean_ctor_set(v_reuseFailAlloc_3621_, 3, v_tables_3576_);
lean_ctor_set(v_reuseFailAlloc_3621_, 4, v_queue_3579_);
lean_ctor_set(v_reuseFailAlloc_3621_, 5, v_subs_3580_);
lean_ctor_set(v_reuseFailAlloc_3621_, 6, v_handlers_3581_);
lean_ctor_set(v_reuseFailAlloc_3621_, 7, v_nextSub_3582_);
lean_ctor_set(v_reuseFailAlloc_3621_, 8, v_touched_3583_);
lean_ctor_set(v_reuseFailAlloc_3621_, 9, v_ports_3584_);
lean_ctor_set_uint8(v_reuseFailAlloc_3621_, sizeof(void*)*10, v_dirty_3577_);
lean_ctor_set_uint8(v_reuseFailAlloc_3621_, sizeof(void*)*10 + 1, v_scheduled_3578_);
v___x_3589_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v_model_3592_; lean_object* v_live_3593_; lean_object* v_next_3594_; lean_object* v_tables_3595_; uint8_t v_dirty_3596_; uint8_t v_scheduled_3597_; lean_object* v_queue_3598_; uint8_t v_busy_3599_; lean_object* v_subs_3600_; lean_object* v_handlers_3601_; lean_object* v_nextSub_3602_; lean_object* v_touched_3603_; lean_object* v_ports_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3620_; 
lean_ctor_set_uint8(v___x_3589_, sizeof(void*)*10 + 2, v___y_3534_);
v___x_3590_ = lean_st_ref_put(v___y_3523_, v___x_3589_);
v___x_3591_ = lean_st_ref_get(v___y_3523_);
v_model_3592_ = lean_ctor_get(v___x_3591_, 0);
v_live_3593_ = lean_ctor_get(v___x_3591_, 1);
v_next_3594_ = lean_ctor_get(v___x_3591_, 2);
v_tables_3595_ = lean_ctor_get(v___x_3591_, 3);
v_dirty_3596_ = lean_ctor_get_uint8(v___x_3591_, sizeof(void*)*10);
v_scheduled_3597_ = lean_ctor_get_uint8(v___x_3591_, sizeof(void*)*10 + 1);
v_queue_3598_ = lean_ctor_get(v___x_3591_, 4);
v_busy_3599_ = lean_ctor_get_uint8(v___x_3591_, sizeof(void*)*10 + 2);
v_subs_3600_ = lean_ctor_get(v___x_3591_, 5);
v_handlers_3601_ = lean_ctor_get(v___x_3591_, 6);
v_nextSub_3602_ = lean_ctor_get(v___x_3591_, 7);
v_touched_3603_ = lean_ctor_get(v___x_3591_, 8);
v_ports_3604_ = lean_ctor_get(v___x_3591_, 9);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3606_ = v___x_3591_;
v_isShared_3607_ = v_isSharedCheck_3620_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_ports_3604_);
lean_inc(v_touched_3603_);
lean_inc(v_nextSub_3602_);
lean_inc(v_handlers_3601_);
lean_inc(v_subs_3600_);
lean_inc(v_queue_3598_);
lean_inc(v_tables_3595_);
lean_inc(v_next_3594_);
lean_inc(v_live_3593_);
lean_inc(v_model_3592_);
lean_dec(v___x_3591_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3620_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3608_; uint8_t v___x_3609_; 
v___x_3608_ = lean_array_get_size(v_queue_3598_);
v___x_3609_ = lean_nat_dec_lt(v___y_3528_, v___x_3608_);
if (v___x_3609_ == 0)
{
lean_object* v___x_3610_; 
lean_del_object(v___x_3606_);
lean_dec(v_ports_3604_);
lean_dec_ref(v_touched_3603_);
lean_dec(v_nextSub_3602_);
lean_dec_ref(v_handlers_3601_);
lean_dec_ref(v_subs_3600_);
lean_dec_ref(v_queue_3598_);
lean_dec_ref(v_tables_3595_);
lean_dec(v_next_3594_);
lean_dec(v_live_3593_);
lean_dec(v_model_3592_);
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
lean_dec(v___y_3523_);
lean_inc_ref(v___y_3526_);
v___x_3610_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3526_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v___x_3611_; 
lean_dec_ref_known(v___x_3610_, 1);
v___x_3611_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3526_);
lean_dec_ref(v___y_3526_);
return v___x_3611_;
}
else
{
lean_dec_ref(v___y_3526_);
return v___x_3610_;
}
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3612_ = lean_array_fget(v_queue_3598_, v___y_3528_);
lean_dec(v___y_3528_);
v___x_3613_ = l_Array_extract___redArg(v_queue_3598_, v___y_3533_, v___x_3608_);
lean_dec_ref(v_queue_3598_);
if (v_isShared_3607_ == 0)
{
lean_ctor_set(v___x_3606_, 4, v___x_3613_);
v___x_3615_ = v___x_3606_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_model_3592_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v_live_3593_);
lean_ctor_set(v_reuseFailAlloc_3619_, 2, v_next_3594_);
lean_ctor_set(v_reuseFailAlloc_3619_, 3, v_tables_3595_);
lean_ctor_set(v_reuseFailAlloc_3619_, 4, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3619_, 5, v_subs_3600_);
lean_ctor_set(v_reuseFailAlloc_3619_, 6, v_handlers_3601_);
lean_ctor_set(v_reuseFailAlloc_3619_, 7, v_nextSub_3602_);
lean_ctor_set(v_reuseFailAlloc_3619_, 8, v_touched_3603_);
lean_ctor_set(v_reuseFailAlloc_3619_, 9, v_ports_3604_);
lean_ctor_set_uint8(v_reuseFailAlloc_3619_, sizeof(void*)*10, v_dirty_3596_);
lean_ctor_set_uint8(v_reuseFailAlloc_3619_, sizeof(void*)*10 + 1, v_scheduled_3597_);
lean_ctor_set_uint8(v_reuseFailAlloc_3619_, sizeof(void*)*10 + 2, v_busy_3599_);
v___x_3615_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3616_ = lean_st_ref_swap(v___y_3523_, v___x_3615_);
lean_dec(v___y_3523_);
lean_dec(v___x_3616_);
lean_inc_ref(v___y_3526_);
v___x_3617_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3526_, v___x_3612_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v___x_3618_; 
lean_dec_ref_known(v___x_3617_, 1);
v___x_3618_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3526_);
lean_dec_ref(v___y_3526_);
return v___x_3618_;
}
else
{
lean_dec_ref(v___y_3526_);
return v___x_3617_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3526_);
lean_dec(v___y_3523_);
return v___x_3571_;
}
}
}
}
else
{
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3526_);
lean_dec(v___y_3525_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
return v___x_3548_;
}
}
else
{
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3526_);
lean_dec(v___y_3525_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
return v___x_3545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3791_, lean_object* v_hot_3792_, lean_object* v_app_3793_, lean_object* v_a_3794_){
_start:
{
lean_object* v_res_3795_; 
v_res_3795_ = l_Lasm_UI_App_run___redArg(v_inst_3791_, v_hot_3792_, v_app_3793_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3796_, lean_object* v_Model_3797_, lean_object* v_Msg_3798_, lean_object* v_inst_3799_, lean_object* v_hot_3800_, lean_object* v_app_3801_){
_start:
{
lean_object* v___x_3803_; 
v___x_3803_ = l_Lasm_UI_App_run___redArg(v_inst_3799_, v_hot_3800_, v_app_3801_);
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3804_, lean_object* v_Model_3805_, lean_object* v_Msg_3806_, lean_object* v_inst_3807_, lean_object* v_hot_3808_, lean_object* v_app_3809_, lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lasm_UI_App_run(v_Flags_3804_, v_Model_3805_, v_Msg_3806_, v_inst_3807_, v_hot_3808_, v_app_3809_);
return v_res_3811_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_App(uint8_t builtin);
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
res = initialize_Lasm_Web_App(builtin);
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
