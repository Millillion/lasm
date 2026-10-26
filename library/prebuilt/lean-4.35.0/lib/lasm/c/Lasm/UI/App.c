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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
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
lean_object* lean_string_utf8_byte_size(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__11_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_273_ = lean_string_utf8_byte_size(v___x_272_);
return v___x_273_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__4);
v___x_276_ = lean_nat_dec_eq(v___x_275_, v___x_274_);
return v___x_276_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__9));
v___x_282_ = lean_unsigned_to_nat(46u);
v___x_283_ = lean_unsigned_to_nat(193u);
v___x_284_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__8));
v___x_285_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__7));
v___x_286_ = l_mkPanicMessageWithDecl(v___x_285_, v___x_284_, v___x_283_, v___x_282_, v___x_281_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(lean_object* v_context_288_, lean_object* v_d_289_){
_start:
{
lean_object* v___y_292_; lean_object* v___y_293_; 
if (lean_obj_tag(v_d_289_) == 3)
{
double v_n_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_n_297_ = lean_ctor_get_float(v_d_289_, 0);
lean_dec_ref_known(v_d_289_, 0);
v___x_298_ = lean_box_float(v_n_297_);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
else
{
lean_object* v___x_300_; lean_object* v_received_302_; 
v___x_300_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
if (lean_obj_tag(v_d_289_) == 9)
{
lean_object* v_value_316_; lean_object* v_description_317_; uint8_t v___x_318_; 
v_value_316_ = lean_ctor_get(v_d_289_, 0);
v_description_317_ = lean_ctor_get(v_d_289_, 1);
v___x_318_ = lean_string_dec_eq(v_description_317_, v___x_300_);
if (v___x_318_ == 0)
{
goto v___jp_314_;
}
else
{
uint32_t v___x_319_; uint64_t v___x_320_; lean_object* v___x_321_; uint32_t v___x_322_; lean_object* v___x_323_; 
lean_inc_n(v_value_316_, 2);
lean_dec_ref_known(v_d_289_, 2);
v___x_319_ = 206;
v___x_320_ = 0ULL;
v___x_321_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_321_, 0, v_value_316_);
lean_ctor_set(v___x_321_, 1, v___x_300_);
v___x_322_ = lasm_js_value_handle(v_value_316_);
lean_dec(v_value_316_);
v___x_323_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_319_, v___x_320_, v___x_321_, v___x_322_);
lean_dec_ref_known(v___x_321_, 2);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; uint8_t v___x_325_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v___x_323_, 1);
v___x_325_ = lean_string_validate_utf8(v_a_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec(v_a_324_);
v___x_326_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10);
v___x_327_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_326_);
v_received_302_ = v___x_327_;
goto v___jp_301_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = lean_string_from_utf8_unchecked(v_a_324_);
v_received_302_ = v___x_328_;
goto v___jp_301_;
}
}
else
{
lean_object* v___x_329_; 
lean_dec_ref_known(v___x_323_, 1);
v___x_329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__11));
v_received_302_ = v___x_329_;
goto v___jp_301_;
}
}
}
else
{
goto v___jp_314_;
}
v___jp_301_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_304_ = lean_string_append(v___x_303_, v_context_288_);
v___x_305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1));
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
v___x_307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__2));
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
v___x_309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3));
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
v___x_311_ = lean_string_append(v___x_310_, v_received_302_);
lean_dec_ref(v_received_302_);
v___x_312_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
v___x_313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6));
v___y_292_ = v___x_311_;
v___y_293_ = v___x_313_;
goto v___jp_291_;
}
else
{
v___y_292_ = v___x_311_;
v___y_293_ = v___x_300_;
goto v___jp_291_;
}
}
v___jp_314_:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lasm_JS_Data_describe(v_d_289_);
v_received_302_ = v___x_315_;
goto v___jp_301_;
}
}
v___jp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_string_append(v___y_292_, v___y_293_);
v___x_295_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
v___x_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___boxed(lean_object* v_context_330_, lean_object* v_d_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(v_context_330_, v_d_331_);
lean_dec_ref(v_context_330_);
return v_res_333_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1(void){
_start:
{
uint8_t v___x_335_; uint64_t v___x_336_; 
v___x_335_ = 0;
v___x_336_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(lean_object* v_b_337_, lean_object* v_args_338_, uint8_t v_await_339_){
_start:
{
uint64_t v___y_342_; uint64_t v___y_343_; uint64_t v___x_386_; uint64_t v___y_388_; 
v___x_386_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1);
if (v_await_339_ == 0)
{
uint64_t v___x_393_; 
v___x_393_ = 0ULL;
v___y_388_ = v___x_393_;
goto v___jp_387_;
}
else
{
uint64_t v___x_394_; 
v___x_394_ = 2ULL;
v___y_388_ = v___x_394_;
goto v___jp_387_;
}
v___jp_341_:
{
uint64_t v_flags_344_; uint32_t v___x_345_; lean_object* v___x_346_; uint32_t v___x_347_; lean_object* v___x_348_; 
v_flags_344_ = lean_uint64_lor(v___y_342_, v___y_343_);
v___x_345_ = 214;
v___x_346_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_337_, v_args_338_);
v___x_347_ = 0;
v___x_348_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_345_, v_flags_344_, v___x_346_, v___x_347_);
lean_dec(v___x_346_);
if (lean_obj_tag(v___x_348_) == 0)
{
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_350_; 
v_a_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v___x_348_, 1);
v___x_350_ = l_Lasm_JS_Wire_decode(v_a_349_);
lean_dec(v_a_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_337_);
v___x_353_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0(v___x_352_, v_a_351_);
lean_dec_ref(v___x_352_);
return v___x_353_;
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_350_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_350_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
v_a_362_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_348_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_348_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 1);
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_385_; 
v_a_370_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_385_ == 0)
{
v___x_372_ = v___x_348_;
v_isShared_373_ = v_isSharedCheck_385_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_348_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_385_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_375_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_337_);
v___x_376_ = lean_string_append(v___x_374_, v___x_375_);
lean_dec_ref(v___x_375_);
v___x_377_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
v___x_379_ = lean_io_error_to_string(v_a_370_);
v___x_380_ = lean_string_append(v___x_378_, v___x_379_);
lean_dec_ref(v___x_379_);
v___x_381_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_381_);
v___x_383_ = v___x_372_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
v___jp_387_:
{
uint8_t v_construct_389_; uint64_t v___x_390_; 
v_construct_389_ = lean_ctor_get_uint8(v_b_337_, sizeof(void*)*4);
v___x_390_ = lean_uint64_lor(v___x_386_, v___y_388_);
if (v_construct_389_ == 0)
{
uint64_t v___x_391_; 
v___x_391_ = 0ULL;
v___y_342_ = v___x_390_;
v___y_343_ = v___x_391_;
goto v___jp_341_;
}
else
{
uint64_t v___x_392_; 
v___x_392_ = 4ULL;
v___y_342_ = v___x_390_;
v___y_343_ = v___x_392_;
goto v___jp_341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___boxed(lean_object* v_b_395_, lean_object* v_args_396_, lean_object* v_await_397_, lean_object* v_a_398_){
_start:
{
uint8_t v_await_boxed_399_; lean_object* v_res_400_; 
v_await_boxed_399_ = lean_unbox(v_await_397_);
v_res_400_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(v_b_395_, v_args_396_, v_await_boxed_399_);
lean_dec_ref(v_b_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now(){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; 
v___x_408_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_now___closed__1));
v___x_409_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_410_ = 1;
v___x_411_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0(v___x_408_, v___x_409_, v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_now___boxed(lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lasm_UI_Runtime_Dom_now();
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate(lean_object* v_a_420_, uint8_t v_a_421_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; lean_object* v___x_430_; 
v___x_423_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_navigate___closed__1));
v___x_424_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_425_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_425_, 0, v_a_420_);
v___x_426_ = lean_array_push(v___x_424_, v___x_425_);
v___x_427_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_427_, 0, v_a_421_);
v___x_428_ = lean_array_push(v___x_426_, v___x_427_);
v___x_429_ = 1;
v___x_430_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_423_, v___x_428_, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_navigate___boxed(lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
uint8_t v_a_128__boxed_434_; lean_object* v_res_435_; 
v_a_128__boxed_434_ = lean_unbox(v_a_432_);
v_res_435_ = l_Lasm_UI_Runtime_Dom_navigate(v_a_431_, v_a_128__boxed_434_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go(lean_object* v_a_442_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___y_447_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_444_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_go___closed__1));
v___x_445_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_451_ = lean_nat_abs(v_a_442_);
v___x_452_ = lean_cstr_to_nat("9007199254740991");
v___x_453_ = lean_nat_dec_le(v___x_451_, v___x_452_);
lean_dec(v___x_451_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_454_, 0, v_a_442_);
v___y_447_ = v___x_454_;
goto v___jp_446_;
}
else
{
double v___x_455_; lean_object* v___x_456_; 
v___x_455_ = l_Float_ofInt(v_a_442_);
lean_dec(v_a_442_);
v___x_456_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_456_, 0, v___x_455_);
v___y_447_ = v___x_456_;
goto v___jp_446_;
}
v___jp_446_:
{
lean_object* v___x_448_; uint8_t v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_array_push(v___x_445_, v___y_447_);
v___x_449_ = 1;
v___x_450_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_444_, v___x_448_, v___x_449_);
return v___x_450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_go___boxed(lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lasm_UI_Runtime_Dom_go(v_a_457_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load(lean_object* v_a_466_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; lean_object* v___x_473_; 
v___x_468_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_load___closed__1));
v___x_469_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_470_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_470_, 0, v_a_466_);
v___x_471_ = lean_array_push(v___x_469_, v___x_470_);
v___x_472_ = 1;
v___x_473_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_468_, v___x_471_, v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_load___boxed(lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lasm_UI_Runtime_Dom_load(v_a_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet(lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; 
v___x_487_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageSet___closed__1));
v___x_488_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_489_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_489_, 0, v_a_483_);
v___x_490_ = lean_array_push(v___x_488_, v___x_489_);
v___x_491_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_491_, 0, v_a_484_);
v___x_492_ = lean_array_push(v___x_490_, v___x_491_);
v___x_493_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_493_, 0, v_a_485_);
v___x_494_ = lean_array_push(v___x_492_, v___x_493_);
v___x_495_ = 1;
v___x_496_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_487_, v___x_494_, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageSet___boxed(lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lasm_UI_Runtime_Dom_storageSet(v_a_497_, v_a_498_, v_a_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove(lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; lean_object* v___x_518_; 
v___x_511_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageRemove___closed__1));
v___x_512_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_513_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_513_, 0, v_a_508_);
v___x_514_ = lean_array_push(v___x_512_, v___x_513_);
v___x_515_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_515_, 0, v_a_509_);
v___x_516_ = lean_array_push(v___x_514_, v___x_515_);
v___x_517_ = 1;
v___x_518_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_511_, v___x_516_, v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageRemove___boxed(lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lasm_UI_Runtime_Dom_storageRemove(v_a_519_, v_a_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(lean_object* v_context_524_, lean_object* v_d_525_){
_start:
{
lean_object* v___y_531_; lean_object* v___y_532_; 
switch(lean_obj_tag(v_d_525_))
{
case 1:
{
goto v___jp_527_;
}
case 0:
{
goto v___jp_527_;
}
default: 
{
if (lean_obj_tag(v_d_525_) == 4)
{
lean_object* v_s_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_s_536_ = lean_ctor_get(v_d_525_, 0);
lean_inc_ref(v_s_536_);
lean_dec_ref_known(v_d_525_, 1);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v_s_536_);
v___x_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; lean_object* v_received_541_; 
v___x_539_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
if (lean_obj_tag(v_d_525_) == 9)
{
lean_object* v_value_555_; lean_object* v_description_556_; uint8_t v___x_557_; 
v_value_555_ = lean_ctor_get(v_d_525_, 0);
v_description_556_ = lean_ctor_get(v_d_525_, 1);
v___x_557_ = lean_string_dec_eq(v_description_556_, v___x_539_);
if (v___x_557_ == 0)
{
goto v___jp_553_;
}
else
{
uint32_t v___x_558_; uint64_t v___x_559_; lean_object* v___x_560_; uint32_t v___x_561_; lean_object* v___x_562_; 
lean_inc_n(v_value_555_, 2);
lean_dec_ref_known(v_d_525_, 2);
v___x_558_ = 206;
v___x_559_ = 0ULL;
v___x_560_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_560_, 0, v_value_555_);
lean_ctor_set(v___x_560_, 1, v___x_539_);
v___x_561_ = lasm_js_value_handle(v_value_555_);
lean_dec(v_value_555_);
v___x_562_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_558_, v___x_559_, v___x_560_, v___x_561_);
lean_dec_ref_known(v___x_560_, 2);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; uint8_t v___x_564_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v___x_564_ = lean_string_validate_utf8(v_a_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec(v_a_563_);
v___x_565_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__10);
v___x_566_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_565_);
v_received_541_ = v___x_566_;
goto v___jp_540_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lean_string_from_utf8_unchecked(v_a_563_);
v_received_541_ = v___x_567_;
goto v___jp_540_;
}
}
else
{
lean_object* v___x_568_; 
lean_dec_ref_known(v___x_562_, 1);
v___x_568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__11));
v_received_541_ = v___x_568_;
goto v___jp_540_;
}
}
}
else
{
goto v___jp_553_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_543_ = lean_string_append(v___x_542_, v_context_524_);
v___x_544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__1));
v___x_545_ = lean_string_append(v___x_543_, v___x_544_);
v___x_546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___closed__0));
v___x_547_ = lean_string_append(v___x_545_, v___x_546_);
v___x_548_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__3));
v___x_549_ = lean_string_append(v___x_547_, v___x_548_);
v___x_550_ = lean_string_append(v___x_549_, v_received_541_);
lean_dec_ref(v_received_541_);
v___x_551_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__5);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__6));
v___y_531_ = v___x_550_;
v___y_532_ = v___x_552_;
goto v___jp_530_;
}
else
{
v___y_531_ = v___x_550_;
v___y_532_ = v___x_539_;
goto v___jp_530_;
}
}
v___jp_553_:
{
lean_object* v___x_554_; 
v___x_554_ = l_Lasm_JS_Data_describe(v_d_525_);
v_received_541_ = v___x_554_;
goto v___jp_540_;
}
}
}
}
v___jp_527_:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_box(0);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
v___jp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = lean_string_append(v___y_531_, v___y_532_);
v___x_534_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0___boxed(lean_object* v_context_569_, lean_object* v_d_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(v_context_569_, v_d_570_);
lean_dec_ref(v_context_569_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(lean_object* v_b_573_, lean_object* v_args_574_, uint8_t v_await_575_){
_start:
{
uint64_t v___y_578_; uint64_t v___y_579_; uint64_t v___x_622_; uint64_t v___y_624_; 
v___x_622_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__1);
if (v_await_575_ == 0)
{
uint64_t v___x_629_; 
v___x_629_ = 0ULL;
v___y_624_ = v___x_629_;
goto v___jp_623_;
}
else
{
uint64_t v___x_630_; 
v___x_630_ = 2ULL;
v___y_624_ = v___x_630_;
goto v___jp_623_;
}
v___jp_577_:
{
uint64_t v_flags_580_; uint32_t v___x_581_; lean_object* v___x_582_; uint32_t v___x_583_; lean_object* v___x_584_; 
v_flags_580_ = lean_uint64_lor(v___y_578_, v___y_579_);
v___x_581_ = 214;
v___x_582_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_573_, v_args_574_);
v___x_583_ = 0;
v___x_584_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_581_, v_flags_580_, v___x_582_, v___x_583_);
lean_dec(v___x_582_);
if (lean_obj_tag(v___x_584_) == 0)
{
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = l_Lasm_JS_Wire_decode(v_a_585_);
lean_dec(v_a_585_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_573_);
v___x_589_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0_spec__0(v___x_588_, v_a_587_);
lean_dec_ref(v___x_588_);
return v___x_589_;
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_a_590_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_586_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_586_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_598_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_584_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_584_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set_tag(v___x_600_, 1);
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_621_; 
v_a_606_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_621_ == 0)
{
v___x_608_ = v___x_584_;
v_isShared_609_ = v_isSharedCheck_621_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_584_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_621_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_610_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0_spec__0___closed__0));
v___x_611_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_573_);
v___x_612_ = lean_string_append(v___x_610_, v___x_611_);
lean_dec_ref(v___x_611_);
v___x_613_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_614_ = lean_string_append(v___x_612_, v___x_613_);
v___x_615_ = lean_io_error_to_string(v_a_606_);
v___x_616_ = lean_string_append(v___x_614_, v___x_615_);
lean_dec_ref(v___x_615_);
v___x_617_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_617_);
v___x_619_ = v___x_608_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_617_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
v___jp_623_:
{
uint8_t v_construct_625_; uint64_t v___x_626_; 
v_construct_625_ = lean_ctor_get_uint8(v_b_573_, sizeof(void*)*4);
v___x_626_ = lean_uint64_lor(v___x_622_, v___y_624_);
if (v_construct_625_ == 0)
{
uint64_t v___x_627_; 
v___x_627_ = 0ULL;
v___y_578_ = v___x_626_;
v___y_579_ = v___x_627_;
goto v___jp_577_;
}
else
{
uint64_t v___x_628_; 
v___x_628_ = 4ULL;
v___y_578_ = v___x_626_;
v___y_579_ = v___x_628_;
goto v___jp_577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0___boxed(lean_object* v_b_631_, lean_object* v_args_632_, lean_object* v_await_633_, lean_object* v_a_634_){
_start:
{
uint8_t v_await_boxed_635_; lean_object* v_res_636_; 
v_await_boxed_635_ = lean_unbox(v_await_633_);
v_res_636_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(v_b_631_, v_args_632_, v_await_boxed_635_);
lean_dec_ref(v_b_631_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet(lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; lean_object* v___x_653_; 
v___x_646_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_storageGet___closed__1));
v___x_647_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_648_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_648_, 0, v_a_643_);
v___x_649_ = lean_array_push(v___x_647_, v___x_648_);
v___x_650_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_650_, 0, v_a_644_);
v___x_651_ = lean_array_push(v___x_649_, v___x_650_);
v___x_652_ = 1;
v___x_653_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_storageGet_spec__0(v___x_646_, v___x_651_, v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_storageGet___boxed(lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lasm_UI_Runtime_Dom_storageGet(v_a_654_, v_a_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus(lean_object* v_a_664_, uint8_t v_a_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; lean_object* v___x_674_; 
v___x_667_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_focus___closed__1));
v___x_668_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_669_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_669_, 0, v_a_664_);
v___x_670_ = lean_array_push(v___x_668_, v___x_669_);
v___x_671_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_671_, 0, v_a_665_);
v___x_672_ = lean_array_push(v___x_670_, v___x_671_);
v___x_673_ = 1;
v___x_674_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_667_, v___x_672_, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_focus___boxed(lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
uint8_t v_a_128__boxed_678_; lean_object* v_res_679_; 
v_a_128__boxed_678_ = lean_unbox(v_a_676_);
v_res_679_ = l_Lasm_UI_Runtime_Dom_focus(v_a_675_, v_a_128__boxed_678_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title(lean_object* v_a_686_){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; 
v___x_688_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_title___closed__1));
v___x_689_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___x_690_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_690_, 0, v_a_686_);
v___x_691_ = lean_array_push(v___x_689_, v___x_690_);
v___x_692_ = 1;
v___x_693_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_688_, v___x_691_, v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Dom_title___boxed(lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lasm_UI_Runtime_Dom_title(v_a_694_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(lean_object* v_head_697_, lean_object* v_x_698_){
_start:
{
if (lean_obj_tag(v_x_698_) == 0)
{
lean_object* v___x_699_; 
v___x_699_ = lean_box(0);
return v___x_699_;
}
else
{
lean_object* v_head_700_; lean_object* v_tail_701_; lean_object* v___y_703_; lean_object* v_id_707_; 
v_head_700_ = lean_ctor_get(v_x_698_, 0);
v_tail_701_ = lean_ctor_get(v_x_698_, 1);
v_id_707_ = lean_ctor_get(v_head_700_, 0);
v___y_703_ = v_id_707_;
goto v___jp_702_;
v___jp_702_:
{
uint8_t v___x_704_; 
v___x_704_ = lean_nat_dec_eq(v___y_703_, v_head_697_);
if (v___x_704_ == 0)
{
v_x_698_ = v_tail_701_;
goto _start;
}
else
{
lean_object* v___x_706_; 
lean_inc(v_head_700_);
v___x_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_706_, 0, v_head_700_);
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg___boxed(lean_object* v_head_708_, lean_object* v_x_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_708_, v_x_709_);
lean_dec(v_x_709_);
lean_dec(v_head_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg(lean_object* v_live_711_, lean_object* v_x_712_, lean_object* v_x_713_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
lean_dec(v_live_711_);
return v_x_713_;
}
else
{
lean_object* v_head_714_; lean_object* v_tail_715_; lean_object* v___x_716_; 
v_head_714_ = lean_ctor_get(v_x_712_, 0);
v_tail_715_ = lean_ctor_get(v_x_712_, 1);
v___x_716_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_714_, v_live_711_);
lean_dec(v_live_711_);
if (lean_obj_tag(v___x_716_) == 0)
{
return v_x_713_;
}
else
{
lean_object* v_val_717_; 
v_val_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc(v_val_717_);
lean_dec_ref_known(v___x_716_, 1);
if (lean_obj_tag(v_val_717_) == 1)
{
lean_object* v_children_718_; lean_object* v___x_719_; 
v_children_718_ = lean_ctor_get(v_val_717_, 4);
lean_inc(v_children_718_);
v___x_719_ = lean_array_push(v_x_713_, v_val_717_);
v_live_711_ = v_children_718_;
v_x_712_ = v_tail_715_;
v_x_713_ = v___x_719_;
goto _start;
}
else
{
lean_object* v___x_721_; 
v___x_721_ = lean_array_push(v_x_713_, v_val_717_);
return v___x_721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___redArg___boxed(lean_object* v_live_722_, lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_722_, v_x_723_, v_x_724_);
lean_dec(v_x_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath(lean_object* v_Msg_726_, lean_object* v_live_727_, lean_object* v_x_728_, lean_object* v_x_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_727_, v_x_728_, v_x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_findPath___boxed(lean_object* v_Msg_731_, lean_object* v_live_732_, lean_object* v_x_733_, lean_object* v_x_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lasm_UI_Runtime_findPath(v_Msg_731_, v_live_732_, v_x_733_, v_x_734_);
lean_dec(v_x_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(lean_object* v_Msg_736_, lean_object* v_head_737_, lean_object* v_x_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___redArg(v_head_737_, v_x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0___boxed(lean_object* v_Msg_740_, lean_object* v_head_741_, lean_object* v_x_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_List_find_x3f___at___00Lasm_UI_Runtime_findPath_spec__0(v_Msg_740_, v_head_741_, v_x_742_);
lean_dec(v_x_742_);
lean_dec(v_head_741_);
return v_res_743_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Runtime_userProp(lean_object* v_name_747_){
_start:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__0));
v___x_749_ = lean_string_dec_eq(v_name_747_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__1));
v___x_751_ = lean_string_dec_eq(v_name_747_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = ((lean_object*)(l_Lasm_UI_Runtime_userProp___closed__2));
v___x_753_ = lean_string_dec_eq(v_name_747_, v___x_752_);
return v___x_753_;
}
else
{
return v___x_751_;
}
}
else
{
return v___x_749_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_userProp___boxed(lean_object* v_name_754_){
_start:
{
uint8_t v_res_755_; lean_object* v_r_756_; 
v_res_755_ = l_Lasm_UI_Runtime_userProp(v_name_754_);
lean_dec_ref(v_name_754_);
v_r_756_ = lean_box(v_res_755_);
return v_r_756_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
if (lean_obj_tag(v_a_757_) == 0)
{
lean_object* v___x_759_; 
v___x_759_ = lean_array_to_list(v_a_758_);
return v___x_759_;
}
else
{
lean_object* v_head_760_; 
v_head_760_ = lean_ctor_get(v_a_757_, 0);
lean_inc(v_head_760_);
if (lean_obj_tag(v_head_760_) == 1)
{
lean_object* v_tail_761_; lean_object* v_name_762_; lean_object* v_value_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_776_; 
v_tail_761_ = lean_ctor_get(v_a_757_, 1);
lean_inc(v_tail_761_);
lean_dec_ref_known(v_a_757_, 2);
v_name_762_ = lean_ctor_get(v_head_760_, 0);
v_value_763_ = lean_ctor_get(v_head_760_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_head_760_);
if (v_isSharedCheck_776_ == 0)
{
v___x_765_ = v_head_760_;
v_isShared_766_ = v_isSharedCheck_776_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_value_763_);
lean_inc(v_name_762_);
lean_dec(v_head_760_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_776_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
uint8_t v___x_767_; 
v___x_767_ = l_Lasm_UI_Runtime_userProp(v_name_762_);
if (v___x_767_ == 0)
{
lean_del_object(v___x_765_);
lean_dec_ref(v_value_763_);
lean_dec_ref(v_name_762_);
v_a_757_ = v_tail_761_;
goto _start;
}
else
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_769_, 0, v_name_762_);
v___x_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_770_, 0, v_value_763_);
if (v_isShared_766_ == 0)
{
lean_ctor_set_tag(v___x_765_, 0);
lean_ctor_set(v___x_765_, 1, v___x_770_);
lean_ctor_set(v___x_765_, 0, v___x_769_);
v___x_772_ = v___x_765_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v___x_770_);
v___x_772_ = v_reuseFailAlloc_775_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; 
v___x_773_ = lean_array_push(v_a_758_, v___x_772_);
v_a_757_ = v_tail_761_;
v_a_758_ = v___x_773_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_777_; 
lean_dec(v_head_760_);
v_tail_777_ = lean_ctor_get(v_a_757_, 1);
lean_inc(v_tail_777_);
lean_dec_ref_known(v_a_757_, 2);
v_a_757_ = v_tail_777_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(lean_object* v_live_781_, lean_object* v_as_782_, size_t v_i_783_, size_t v_stop_784_, lean_object* v_b_785_){
_start:
{
lean_object* v___y_787_; uint8_t v___x_791_; 
v___x_791_ = lean_usize_dec_eq(v_i_783_, v_stop_784_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_792_ = lean_array_uget_borrowed(v_as_782_, v_i_783_);
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
lean_inc(v_live_781_);
v___x_794_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_781_, v___x_792_, v___x_793_);
v___x_795_ = lean_array_get_size(v___x_794_);
v___x_796_ = lean_unsigned_to_nat(1u);
v___x_797_ = lean_nat_sub(v___x_795_, v___x_796_);
v___x_798_ = lean_nat_dec_lt(v___x_797_, v___x_795_);
if (v___x_798_ == 0)
{
lean_dec(v___x_797_);
lean_dec_ref(v___x_794_);
v___y_787_ = v_b_785_;
goto v___jp_786_;
}
else
{
lean_object* v___x_799_; 
v___x_799_ = lean_array_fget(v___x_794_, v___x_797_);
lean_dec(v___x_797_);
lean_dec_ref(v___x_794_);
if (lean_obj_tag(v___x_799_) == 1)
{
lean_object* v_id_800_; lean_object* v_attrs_801_; lean_object* v_sets_802_; uint8_t v___x_803_; 
v_id_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_id_800_);
v_attrs_801_ = lean_ctor_get(v___x_799_, 3);
lean_inc(v_attrs_801_);
lean_dec_ref_known(v___x_799_, 5);
v_sets_802_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_attrs_801_, v___x_793_);
v___x_803_ = l_List_isEmpty___redArg(v_sets_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_804_, 0, v_id_800_);
lean_ctor_set(v___x_804_, 1, v_sets_802_);
v___x_805_ = lean_array_push(v_b_785_, v___x_804_);
v___y_787_ = v___x_805_;
goto v___jp_786_;
}
else
{
lean_dec(v_sets_802_);
lean_dec(v_id_800_);
v___y_787_ = v_b_785_;
goto v___jp_786_;
}
}
else
{
lean_dec(v___x_799_);
v___y_787_ = v_b_785_;
goto v___jp_786_;
}
}
}
else
{
lean_dec(v_live_781_);
return v_b_785_;
}
v___jp_786_:
{
size_t v___x_788_; size_t v___x_789_; 
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_add(v_i_783_, v___x_788_);
v_i_783_ = v___x_789_;
v_b_785_ = v___y_787_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___boxed(lean_object* v_live_806_, lean_object* v_as_807_, lean_object* v_i_808_, lean_object* v_stop_809_, lean_object* v_b_810_){
_start:
{
size_t v_i_boxed_811_; size_t v_stop_boxed_812_; lean_object* v_res_813_; 
v_i_boxed_811_ = lean_unbox_usize(v_i_808_);
lean_dec(v_i_808_);
v_stop_boxed_812_ = lean_unbox_usize(v_stop_809_);
lean_dec(v_stop_809_);
v_res_813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_806_, v_as_807_, v_i_boxed_811_, v_stop_boxed_812_, v_b_810_);
lean_dec_ref(v_as_807_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg(lean_object* v_live_816_, lean_object* v_touched_817_){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_818_ = lean_unsigned_to_nat(0u);
v___x_819_ = ((lean_object*)(l_Lasm_UI_Runtime_resync___redArg___closed__0));
v___x_820_ = lean_array_get_size(v_touched_817_);
v___x_821_ = lean_nat_dec_lt(v___x_818_, v___x_820_);
if (v___x_821_ == 0)
{
lean_dec(v_live_816_);
return v___x_819_;
}
else
{
uint8_t v___x_822_; 
v___x_822_ = lean_nat_dec_le(v___x_820_, v___x_820_);
if (v___x_822_ == 0)
{
if (v___x_821_ == 0)
{
lean_dec(v_live_816_);
return v___x_819_;
}
else
{
size_t v___x_823_; size_t v___x_824_; lean_object* v___x_825_; 
v___x_823_ = ((size_t)0ULL);
v___x_824_ = lean_usize_of_nat(v___x_820_);
v___x_825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_816_, v_touched_817_, v___x_823_, v___x_824_, v___x_819_);
return v___x_825_;
}
}
else
{
size_t v___x_826_; size_t v___x_827_; lean_object* v___x_828_; 
v___x_826_ = ((size_t)0ULL);
v___x_827_ = lean_usize_of_nat(v___x_820_);
v___x_828_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_816_, v_touched_817_, v___x_826_, v___x_827_, v___x_819_);
return v___x_828_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___redArg___boxed(lean_object* v_live_829_, lean_object* v_touched_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_UI_Runtime_resync___redArg(v_live_829_, v_touched_830_);
lean_dec_ref(v_touched_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync(lean_object* v_Msg_832_, lean_object* v_live_833_, lean_object* v_touched_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lasm_UI_Runtime_resync___redArg(v_live_833_, v_touched_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_resync___boxed(lean_object* v_Msg_836_, lean_object* v_live_837_, lean_object* v_touched_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lasm_UI_Runtime_resync(v_Msg_836_, v_live_837_, v_touched_838_);
lean_dec_ref(v_touched_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0(lean_object* v_Msg_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_resync_spec__0___redArg(v_a_841_, v_a_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(lean_object* v_Msg_844_, lean_object* v_live_845_, lean_object* v_as_846_, size_t v_i_847_, size_t v_stop_848_, lean_object* v_b_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg(v_live_845_, v_as_846_, v_i_847_, v_stop_848_, v_b_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___boxed(lean_object* v_Msg_851_, lean_object* v_live_852_, lean_object* v_as_853_, lean_object* v_i_854_, lean_object* v_stop_855_, lean_object* v_b_856_){
_start:
{
size_t v_i_boxed_857_; size_t v_stop_boxed_858_; lean_object* v_res_859_; 
v_i_boxed_857_ = lean_unbox_usize(v_i_854_);
lean_dec(v_i_854_);
v_stop_boxed_858_ = lean_unbox_usize(v_stop_855_);
lean_dec(v_stop_855_);
v_res_859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1(v_Msg_851_, v_live_852_, v_as_853_, v_i_boxed_857_, v_stop_boxed_858_, v_b_856_);
lean_dec_ref(v_as_853_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(lean_object* v_event_860_, lean_object* v_l_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
if (lean_obj_tag(v_a_862_) == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_array_to_list(v_a_863_);
return v___x_864_;
}
else
{
lean_object* v_head_865_; 
v_head_865_ = lean_ctor_get(v_a_862_, 0);
if (lean_obj_tag(v_head_865_) == 3)
{
lean_object* v_listener_866_; lean_object* v_tail_867_; lean_object* v_handle_868_; lean_object* v_event_869_; lean_object* v_paths_870_; uint8_t v___x_871_; 
lean_inc_ref(v_head_865_);
v_listener_866_ = lean_ctor_get(v_head_865_, 0);
lean_inc_ref(v_listener_866_);
v_tail_867_ = lean_ctor_get(v_a_862_, 1);
lean_inc(v_tail_867_);
lean_dec_ref_known(v_a_862_, 2);
v_handle_868_ = lean_ctor_get(v_head_865_, 1);
lean_inc_ref(v_handle_868_);
lean_dec_ref_known(v_head_865_, 2);
v_event_869_ = lean_ctor_get(v_listener_866_, 0);
lean_inc_ref(v_event_869_);
v_paths_870_ = lean_ctor_get(v_listener_866_, 1);
lean_inc(v_paths_870_);
lean_dec_ref(v_listener_866_);
v___x_871_ = lean_string_dec_eq(v_event_869_, v_event_860_);
lean_dec_ref(v_event_869_);
if (v___x_871_ == 0)
{
lean_dec(v_paths_870_);
lean_dec_ref(v_handle_868_);
v_a_862_ = v_tail_867_;
goto _start;
}
else
{
lean_object* v_paths_873_; uint8_t v___x_874_; 
v_paths_873_ = lean_ctor_get(v_l_861_, 1);
v___x_874_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_paths_870_, v_paths_873_);
lean_dec(v_paths_870_);
if (v___x_874_ == 0)
{
lean_dec_ref(v_handle_868_);
v_a_862_ = v_tail_867_;
goto _start;
}
else
{
lean_object* v___x_876_; 
v___x_876_ = lean_array_push(v_a_863_, v_handle_868_);
v_a_862_ = v_tail_867_;
v_a_863_ = v___x_876_;
goto _start;
}
}
}
else
{
lean_object* v_tail_878_; 
v_tail_878_ = lean_ctor_get(v_a_862_, 1);
lean_inc(v_tail_878_);
lean_dec_ref_known(v_a_862_, 2);
v_a_862_ = v_tail_878_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg___boxed(lean_object* v_event_880_, lean_object* v_l_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_880_, v_l_881_, v_a_882_, v_a_883_);
lean_dec_ref(v_l_881_);
lean_dec_ref(v_event_880_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor___redArg(lean_object* v_event_887_, lean_object* v_attrs_888_){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
lean_inc_ref(v_event_887_);
v___x_889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_889_, 0, v_event_887_);
v___x_890_ = l_Lasm_UI_lastVal___redArg(v___x_889_, v_attrs_888_);
lean_dec_ref_known(v___x_889_, 1);
if (lean_obj_tag(v___x_890_) == 1)
{
lean_object* v_val_891_; 
v_val_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_val_891_);
lean_dec_ref_known(v___x_890_, 1);
if (lean_obj_tag(v_val_891_) == 2)
{
lean_object* v_l_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_l_892_ = lean_ctor_get(v_val_891_, 0);
lean_inc_ref(v_l_892_);
lean_dec_ref_known(v_val_891_, 1);
v___x_893_ = ((lean_object*)(l_Lasm_UI_Runtime_handlersFor___redArg___closed__0));
v___x_894_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_887_, v_l_892_, v_attrs_888_, v___x_893_);
lean_dec_ref(v_l_892_);
lean_dec_ref(v_event_887_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; 
lean_dec(v_val_891_);
lean_dec(v_attrs_888_);
lean_dec_ref(v_event_887_);
v___x_895_ = lean_box(0);
return v___x_895_;
}
}
else
{
lean_object* v___x_896_; 
lean_dec(v___x_890_);
lean_dec(v_attrs_888_);
lean_dec_ref(v_event_887_);
v___x_896_ = lean_box(0);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlersFor(lean_object* v_Msg_897_, lean_object* v_event_898_, lean_object* v_attrs_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_event_898_, v_attrs_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(lean_object* v_Msg_901_, lean_object* v_event_902_, lean_object* v_l_903_, lean_object* v_a_904_, lean_object* v_a_905_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___redArg(v_event_902_, v_l_903_, v_a_904_, v_a_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0___boxed(lean_object* v_Msg_907_, lean_object* v_event_908_, lean_object* v_l_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_handlersFor_spec__0(v_Msg_907_, v_event_908_, v_l_909_, v_a_910_, v_a_911_);
lean_dec_ref(v_l_909_);
lean_dec_ref(v_event_908_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
if (lean_obj_tag(v_a_913_) == 0)
{
lean_object* v___x_915_; 
v___x_915_ = l_List_reverse___redArg(v_a_914_);
return v___x_915_;
}
else
{
lean_object* v_head_916_; lean_object* v_tail_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_926_; 
v_head_916_ = lean_ctor_get(v_a_913_, 0);
v_tail_917_ = lean_ctor_get(v_a_913_, 1);
v_isSharedCheck_926_ = !lean_is_exclusive(v_a_913_);
if (v_isSharedCheck_926_ == 0)
{
v___x_919_ = v_a_913_;
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_tail_917_);
lean_inc(v_head_916_);
lean_dec(v_a_913_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = lean_array_mk(v_head_916_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 1, v_a_914_);
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_a_914_);
v___x_923_ = v_reuseFailAlloc_925_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
v_a_913_ = v_tail_917_;
v_a_914_ = v___x_923_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t v_sz_927_, size_t v_i_928_, lean_object* v_bs_929_){
_start:
{
uint8_t v___x_930_; 
v___x_930_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_930_ == 0)
{
return v_bs_929_;
}
else
{
lean_object* v_v_931_; lean_object* v___x_932_; lean_object* v_bs_x27_933_; lean_object* v___x_934_; size_t v___x_935_; size_t v___x_936_; lean_object* v___x_937_; 
v_v_931_ = lean_array_uget(v_bs_929_, v_i_928_);
v___x_932_ = lean_unsigned_to_nat(0u);
v_bs_x27_933_ = lean_array_uset(v_bs_929_, v_i_928_, v___x_932_);
v___x_934_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_934_, 0, v_v_931_);
v___x_935_ = ((size_t)1ULL);
v___x_936_ = lean_usize_add(v_i_928_, v___x_935_);
v___x_937_ = lean_array_uset(v_bs_x27_933_, v_i_928_, v___x_934_);
v_i_928_ = v___x_936_;
v_bs_929_ = v___x_937_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object* v_sz_939_, lean_object* v_i_940_, lean_object* v_bs_941_){
_start:
{
size_t v_sz_boxed_942_; size_t v_i_boxed_943_; lean_object* v_res_944_; 
v_sz_boxed_942_ = lean_unbox_usize(v_sz_939_);
lean_dec(v_sz_939_);
v_i_boxed_943_ = lean_unbox_usize(v_i_940_);
lean_dec(v_i_940_);
v_res_944_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_boxed_942_, v_i_boxed_943_, v_bs_941_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t v_sz_945_, size_t v_i_946_, lean_object* v_bs_947_){
_start:
{
uint8_t v___x_948_; 
v___x_948_ = lean_usize_dec_lt(v_i_946_, v_sz_945_);
if (v___x_948_ == 0)
{
return v_bs_947_;
}
else
{
lean_object* v_v_949_; lean_object* v___x_950_; lean_object* v_bs_x27_951_; size_t v_sz_952_; size_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; size_t v___x_956_; size_t v___x_957_; lean_object* v___x_958_; 
v_v_949_ = lean_array_uget(v_bs_947_, v_i_946_);
v___x_950_ = lean_unsigned_to_nat(0u);
v_bs_x27_951_ = lean_array_uset(v_bs_947_, v_i_946_, v___x_950_);
v_sz_952_ = lean_array_size(v_v_949_);
v___x_953_ = ((size_t)0ULL);
v___x_954_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_952_, v___x_953_, v_v_949_);
v___x_955_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
v___x_956_ = ((size_t)1ULL);
v___x_957_ = lean_usize_add(v_i_946_, v___x_956_);
v___x_958_ = lean_array_uset(v_bs_x27_951_, v_i_946_, v___x_955_);
v_i_946_ = v___x_957_;
v_bs_947_ = v___x_958_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object* v_sz_960_, lean_object* v_i_961_, lean_object* v_bs_962_){
_start:
{
size_t v_sz_boxed_963_; size_t v_i_boxed_964_; lean_object* v_res_965_; 
v_sz_boxed_963_ = lean_unbox_usize(v_sz_960_);
lean_dec(v_sz_960_);
v_i_boxed_964_ = lean_unbox_usize(v_i_961_);
lean_dec(v_i_961_);
v_res_965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_boxed_963_, v_i_boxed_964_, v_bs_962_);
return v_res_965_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__2(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_969_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__1));
v___x_970_ = lean_unsigned_to_nat(2u);
v___x_971_ = lean_mk_empty_array_with_capacity(v___x_970_);
v___x_972_ = lean_array_push(v___x_971_, v___x_969_);
return v___x_972_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__9(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_985_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___x_986_ = lean_unsigned_to_nat(5u);
v___x_987_ = lean_mk_empty_array_with_capacity(v___x_986_);
v___x_988_ = lean_array_push(v___x_987_, v___x_985_);
return v___x_988_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__12(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_992_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__11));
v___x_993_ = lean_unsigned_to_nat(5u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_array_push(v___x_994_, v___x_992_);
return v___x_995_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__15(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_999_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__14));
v___x_1000_ = lean_unsigned_to_nat(2u);
v___x_1001_ = lean_mk_empty_array_with_capacity(v___x_1000_);
v___x_1002_ = lean_array_push(v___x_1001_, v___x_999_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_1003_){
_start:
{
switch(lean_obj_tag(v_x_1003_))
{
case 0:
{
lean_object* v_ms_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1022_; 
v_ms_1004_ = lean_ctor_get(v_x_1003_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_x_1003_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1006_ = v_x_1003_;
v_isShared_1007_ = v_isSharedCheck_1022_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_ms_1004_);
lean_dec(v_x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1022_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___y_1009_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1015_ = lean_nat_to_int(v_ms_1004_);
v___x_1016_ = lean_nat_abs(v___x_1015_);
v___x_1017_ = lean_cstr_to_nat("9007199254740991");
v___x_1018_ = lean_nat_dec_le(v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1015_);
v___y_1009_ = v___x_1019_;
goto v___jp_1008_;
}
else
{
double v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = l_Float_ofInt(v___x_1015_);
lean_dec(v___x_1015_);
v___x_1021_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1021_, 0, v___x_1020_);
v___y_1009_ = v___x_1021_;
goto v___jp_1008_;
}
v___jp_1008_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1010_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_1011_ = lean_array_push(v___x_1010_, v___y_1009_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 7);
lean_ctor_set(v___x_1006_, 0, v___x_1011_);
v___x_1013_ = v___x_1006_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
case 1:
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_1023_;
}
case 2:
{
lean_object* v_event_1024_; lean_object* v_paths_1025_; uint8_t v_preventDefault_1026_; uint8_t v_stopPropagation_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; size_t v_sz_1032_; size_t v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_event_1024_ = lean_ctor_get(v_x_1003_, 0);
lean_inc_ref(v_event_1024_);
v_paths_1025_ = lean_ctor_get(v_x_1003_, 1);
lean_inc(v_paths_1025_);
v_preventDefault_1026_ = lean_ctor_get_uint8(v_x_1003_, sizeof(void*)*2);
v_stopPropagation_1027_ = lean_ctor_get_uint8(v_x_1003_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_1003_, 2);
v___x_1028_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_event_1024_);
v___x_1029_ = lean_box(0);
v___x_1030_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_1025_, v___x_1029_);
v___x_1031_ = lean_array_mk(v___x_1030_);
v_sz_1032_ = lean_array_size(v___x_1031_);
v___x_1033_ = ((size_t)0ULL);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1032_, v___x_1033_, v___x_1031_);
v___x_1035_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1036_, 0, v_preventDefault_1026_);
v___x_1037_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1037_, 0, v_stopPropagation_1027_);
v___x_1038_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__9, &l_Lasm_UI_Runtime_specData___closed__9_once, _init_l_Lasm_UI_Runtime_specData___closed__9);
v___x_1039_ = lean_array_push(v___x_1038_, v___x_1028_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1035_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1036_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1037_);
v___x_1043_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
case 3:
{
lean_object* v_event_1044_; lean_object* v_paths_1045_; uint8_t v_preventDefault_1046_; uint8_t v_stopPropagation_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; size_t v_sz_1052_; size_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_event_1044_ = lean_ctor_get(v_x_1003_, 0);
lean_inc_ref(v_event_1044_);
v_paths_1045_ = lean_ctor_get(v_x_1003_, 1);
lean_inc(v_paths_1045_);
v_preventDefault_1046_ = lean_ctor_get_uint8(v_x_1003_, sizeof(void*)*2);
v_stopPropagation_1047_ = lean_ctor_get_uint8(v_x_1003_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_1003_, 2);
v___x_1048_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1048_, 0, v_event_1044_);
v___x_1049_ = lean_box(0);
v___x_1050_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_1045_, v___x_1049_);
v___x_1051_ = lean_array_mk(v___x_1050_);
v_sz_1052_ = lean_array_size(v___x_1051_);
v___x_1053_ = ((size_t)0ULL);
v___x_1054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1052_, v___x_1053_, v___x_1051_);
v___x_1055_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1056_, 0, v_preventDefault_1046_);
v___x_1057_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1057_, 0, v_stopPropagation_1047_);
v___x_1058_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__12, &l_Lasm_UI_Runtime_specData___closed__12_once, _init_l_Lasm_UI_Runtime_specData___closed__12);
v___x_1059_ = lean_array_push(v___x_1058_, v___x_1048_);
v___x_1060_ = lean_array_push(v___x_1059_, v___x_1055_);
v___x_1061_ = lean_array_push(v___x_1060_, v___x_1056_);
v___x_1062_ = lean_array_push(v___x_1061_, v___x_1057_);
v___x_1063_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
default: 
{
lean_object* v_name_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1074_; 
v_name_1064_ = lean_ctor_get(v_x_1003_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_x_1003_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1066_ = v_x_1003_;
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_name_1064_);
lean_dec(v_x_1003_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_name_1064_);
v___x_1069_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1070_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__15, &l_Lasm_UI_Runtime_specData___closed__15_once, _init_l_Lasm_UI_Runtime_specData___closed__15);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1069_);
v___x_1072_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_1077_){
_start:
{
if (v_x_1077_ == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_1078_;
}
else
{
lean_object* v___x_1079_; 
v___x_1079_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_1080_){
_start:
{
uint8_t v_x_22__boxed_1081_; lean_object* v_res_1082_; 
v_x_22__boxed_1081_ = lean_unbox(v_x_1080_);
v_res_1082_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_1081_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_1083_, lean_object* v_e_1084_){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_1087_ = lean_string_append(v_what_1083_, v___x_1086_);
v___x_1088_ = lean_io_error_to_string(v_e_1084_);
v___x_1089_ = lean_string_append(v___x_1087_, v___x_1088_);
lean_dec_ref(v___x_1088_);
v___x_1090_ = lean_box(0);
v___x_1091_ = l_Lasm_UI_Runtime_Dom_error(v___x_1089_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1098_ == 0)
{
lean_object* v_unused_1099_; 
v_unused_1099_ = lean_ctor_get(v___x_1091_, 0);
lean_dec(v_unused_1099_);
v___x_1093_ = v___x_1091_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v___x_1091_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1090_);
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1090_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
else
{
lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; 
v_unused_1107_ = lean_ctor_get(v___x_1091_, 0);
lean_dec(v_unused_1107_);
v___x_1101_ = v___x_1091_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_dec(v___x_1091_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1090_);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1090_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_1108_, lean_object* v_e_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lasm_UI_Runtime_report(v_what_1108_, v_e_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_1112_){
_start:
{
lean_object* v_ref_1114_; lean_object* v___x_1115_; uint8_t v_dirty_1116_; 
v_ref_1114_ = lean_ctor_get(v_c_1112_, 1);
v___x_1115_ = lean_st_ref_get(v_ref_1114_);
v_dirty_1116_ = lean_ctor_get_uint8(v___x_1115_, sizeof(void*)*10);
if (v_dirty_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec(v___x_1115_);
v___x_1117_ = lean_box(v_dirty_1116_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
else
{
uint8_t v_scheduled_1119_; 
v_scheduled_1119_ = lean_ctor_get_uint8(v___x_1115_, sizeof(void*)*10 + 1);
if (v_scheduled_1119_ == 0)
{
lean_object* v_model_1120_; lean_object* v_live_1121_; lean_object* v_next_1122_; lean_object* v_tables_1123_; lean_object* v_queue_1124_; uint8_t v_busy_1125_; lean_object* v_subs_1126_; lean_object* v_handlers_1127_; lean_object* v_nextSub_1128_; lean_object* v_touched_1129_; lean_object* v_ports_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1140_; 
v_model_1120_ = lean_ctor_get(v___x_1115_, 0);
v_live_1121_ = lean_ctor_get(v___x_1115_, 1);
v_next_1122_ = lean_ctor_get(v___x_1115_, 2);
v_tables_1123_ = lean_ctor_get(v___x_1115_, 3);
v_queue_1124_ = lean_ctor_get(v___x_1115_, 4);
v_busy_1125_ = lean_ctor_get_uint8(v___x_1115_, sizeof(void*)*10 + 2);
v_subs_1126_ = lean_ctor_get(v___x_1115_, 5);
v_handlers_1127_ = lean_ctor_get(v___x_1115_, 6);
v_nextSub_1128_ = lean_ctor_get(v___x_1115_, 7);
v_touched_1129_ = lean_ctor_get(v___x_1115_, 8);
v_ports_1130_ = lean_ctor_get(v___x_1115_, 9);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1132_ = v___x_1115_;
v_isShared_1133_ = v_isSharedCheck_1140_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_ports_1130_);
lean_inc(v_touched_1129_);
lean_inc(v_nextSub_1128_);
lean_inc(v_handlers_1127_);
lean_inc(v_subs_1126_);
lean_inc(v_queue_1124_);
lean_inc(v_tables_1123_);
lean_inc(v_next_1122_);
lean_inc(v_live_1121_);
lean_inc(v_model_1120_);
lean_dec(v___x_1115_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1140_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_model_1120_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_live_1121_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v_next_1122_);
lean_ctor_set(v_reuseFailAlloc_1139_, 3, v_tables_1123_);
lean_ctor_set(v_reuseFailAlloc_1139_, 4, v_queue_1124_);
lean_ctor_set(v_reuseFailAlloc_1139_, 5, v_subs_1126_);
lean_ctor_set(v_reuseFailAlloc_1139_, 6, v_handlers_1127_);
lean_ctor_set(v_reuseFailAlloc_1139_, 7, v_nextSub_1128_);
lean_ctor_set(v_reuseFailAlloc_1139_, 8, v_touched_1129_);
lean_ctor_set(v_reuseFailAlloc_1139_, 9, v_ports_1130_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*10, v_dirty_1116_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*10 + 2, v_busy_1125_);
v___x_1135_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*10 + 1, v_dirty_1116_);
v___x_1136_ = lean_st_ref_swap(v_ref_1114_, v___x_1135_);
lean_dec(v___x_1136_);
v___x_1137_ = lean_box(v_dirty_1116_);
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
}
}
else
{
uint8_t v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_dec(v___x_1115_);
v___x_1141_ = 0;
v___x_1142_ = lean_box(v___x_1141_);
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1144_);
lean_dec_ref(v_c_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_1147_, lean_object* v_Model_1148_, lean_object* v_Msg_1149_, lean_object* v_c_1150_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1150_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1153_, lean_object* v_Model_1154_, lean_object* v_Msg_1155_, lean_object* v_c_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1153_, v_Model_1154_, v_Msg_1155_, v_c_1156_);
lean_dec_ref(v_c_1156_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1172_; 
v___x_1161_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1159_);
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1172_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1172_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
uint8_t v___x_1166_; 
v___x_1166_ = lean_unbox(v_a_1162_);
lean_dec(v_a_1162_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = lean_box(0);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1167_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
lean_object* v___x_1171_; 
lean_del_object(v___x_1164_);
v___x_1171_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1171_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1173_);
lean_dec_ref(v_c_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1176_, lean_object* v_Model_1177_, lean_object* v_Msg_1178_, lean_object* v_c_1179_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1179_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1182_, lean_object* v_Model_1183_, lean_object* v_Msg_1184_, lean_object* v_c_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1182_, v_Model_1183_, v_Msg_1184_, v_c_1185_);
lean_dec_ref(v_c_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1188_, lean_object* v_b_1189_, lean_object* v_x_1190_){
_start:
{
if (lean_obj_tag(v_x_1190_) == 0)
{
lean_dec(v_b_1189_);
lean_dec(v_a_1188_);
return v_x_1190_;
}
else
{
lean_object* v_key_1191_; lean_object* v_value_1192_; lean_object* v_tail_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1205_; 
v_key_1191_ = lean_ctor_get(v_x_1190_, 0);
v_value_1192_ = lean_ctor_get(v_x_1190_, 1);
v_tail_1193_ = lean_ctor_get(v_x_1190_, 2);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_x_1190_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1195_ = v_x_1190_;
v_isShared_1196_ = v_isSharedCheck_1205_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_tail_1193_);
lean_inc(v_value_1192_);
lean_inc(v_key_1191_);
lean_dec(v_x_1190_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1205_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
uint8_t v___x_1197_; 
lean_inc(v_a_1188_);
lean_inc(v_key_1191_);
v___x_1197_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1191_, v_a_1188_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1198_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1188_, v_b_1189_, v_tail_1193_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 2, v___x_1198_);
v___x_1200_ = v___x_1195_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_key_1191_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_value_1192_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
else
{
lean_object* v___x_1203_; 
lean_dec(v_value_1192_);
lean_dec(v_key_1191_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v_b_1189_);
lean_ctor_set(v___x_1195_, 0, v_a_1188_);
v___x_1203_ = v___x_1195_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1188_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_b_1189_);
lean_ctor_set(v_reuseFailAlloc_1204_, 2, v_tail_1193_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1206_, lean_object* v_x_1207_){
_start:
{
if (lean_obj_tag(v_x_1207_) == 0)
{
uint8_t v___x_1208_; 
lean_dec(v_a_1206_);
v___x_1208_ = 0;
return v___x_1208_;
}
else
{
lean_object* v_key_1209_; lean_object* v_tail_1210_; uint8_t v___x_1211_; 
v_key_1209_ = lean_ctor_get(v_x_1207_, 0);
lean_inc(v_key_1209_);
v_tail_1210_ = lean_ctor_get(v_x_1207_, 2);
lean_inc(v_tail_1210_);
lean_dec_ref_known(v_x_1207_, 3);
lean_inc(v_a_1206_);
v___x_1211_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1209_, v_a_1206_);
if (v___x_1211_ == 0)
{
v_x_1207_ = v_tail_1210_;
goto _start;
}
else
{
lean_dec(v_tail_1210_);
lean_dec(v_a_1206_);
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1213_, lean_object* v_x_1214_){
_start:
{
uint8_t v_res_1215_; lean_object* v_r_1216_; 
v_res_1215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1213_, v_x_1214_);
v_r_1216_ = lean_box(v_res_1215_);
return v_r_1216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1217_, lean_object* v_x_1218_){
_start:
{
if (lean_obj_tag(v_x_1218_) == 0)
{
return v_x_1217_;
}
else
{
lean_object* v_key_1219_; lean_object* v_value_1220_; lean_object* v_tail_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1244_; 
v_key_1219_ = lean_ctor_get(v_x_1218_, 0);
v_value_1220_ = lean_ctor_get(v_x_1218_, 1);
v_tail_1221_ = lean_ctor_get(v_x_1218_, 2);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_x_1218_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1223_ = v_x_1218_;
v_isShared_1224_ = v_isSharedCheck_1244_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_tail_1221_);
lean_inc(v_value_1220_);
lean_inc(v_key_1219_);
lean_dec(v_x_1218_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1244_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1225_; uint64_t v___x_1226_; uint64_t v___x_1227_; uint64_t v___x_1228_; uint64_t v_fold_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; uint64_t v___x_1232_; size_t v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; size_t v___x_1236_; size_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1225_ = lean_array_get_size(v_x_1217_);
v___x_1226_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1219_);
v___x_1227_ = 32ULL;
v___x_1228_ = lean_uint64_shift_right(v___x_1226_, v___x_1227_);
v_fold_1229_ = lean_uint64_xor(v___x_1226_, v___x_1228_);
v___x_1230_ = 16ULL;
v___x_1231_ = lean_uint64_shift_right(v_fold_1229_, v___x_1230_);
v___x_1232_ = lean_uint64_xor(v_fold_1229_, v___x_1231_);
v___x_1233_ = lean_uint64_to_usize(v___x_1232_);
v___x_1234_ = lean_usize_of_nat(v___x_1225_);
v___x_1235_ = ((size_t)1ULL);
v___x_1236_ = lean_usize_sub(v___x_1234_, v___x_1235_);
v___x_1237_ = lean_usize_land(v___x_1233_, v___x_1236_);
v___x_1238_ = lean_array_uget_borrowed(v_x_1217_, v___x_1237_);
lean_inc(v___x_1238_);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 2, v___x_1238_);
v___x_1240_ = v___x_1223_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_key_1219_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_value_1220_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; 
v___x_1241_ = lean_array_uset(v_x_1217_, v___x_1237_, v___x_1240_);
v_x_1217_ = v___x_1241_;
v_x_1218_ = v_tail_1221_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1245_, lean_object* v_source_1246_, lean_object* v_target_1247_){
_start:
{
lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1248_ = lean_array_get_size(v_source_1246_);
v___x_1249_ = lean_nat_dec_lt(v_i_1245_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_dec_ref(v_source_1246_);
lean_dec(v_i_1245_);
return v_target_1247_;
}
else
{
lean_object* v_es_1250_; lean_object* v___x_1251_; lean_object* v_source_1252_; lean_object* v_target_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v_es_1250_ = lean_array_fget(v_source_1246_, v_i_1245_);
v___x_1251_ = lean_box(0);
v_source_1252_ = lean_array_fset(v_source_1246_, v_i_1245_, v___x_1251_);
v_target_1253_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1247_, v_es_1250_);
v___x_1254_ = lean_unsigned_to_nat(1u);
v___x_1255_ = lean_nat_add(v_i_1245_, v___x_1254_);
lean_dec(v_i_1245_);
v_i_1245_ = v___x_1255_;
v_source_1246_ = v_source_1252_;
v_target_1247_ = v_target_1253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1257_){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_nbuckets_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1258_ = lean_array_get_size(v_data_1257_);
v___x_1259_ = lean_unsigned_to_nat(2u);
v_nbuckets_1260_ = lean_nat_mul(v___x_1258_, v___x_1259_);
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = lean_box(0);
v___x_1263_ = lean_mk_array(v_nbuckets_1260_, v___x_1262_);
v___x_1264_ = lean_array_propagate_mark(v_data_1257_, v___x_1263_);
v___x_1265_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1261_, v_data_1257_, v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1266_, lean_object* v_a_1267_, lean_object* v_b_1268_){
_start:
{
lean_object* v_size_1269_; lean_object* v_buckets_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1313_; 
v_size_1269_ = lean_ctor_get(v_m_1266_, 0);
v_buckets_1270_ = lean_ctor_get(v_m_1266_, 1);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_m_1266_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1272_ = v_m_1266_;
v_isShared_1273_ = v_isSharedCheck_1313_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_buckets_1270_);
lean_inc(v_size_1269_);
lean_dec(v_m_1266_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1313_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; uint64_t v___x_1275_; uint64_t v___x_1276_; uint64_t v___x_1277_; uint64_t v_fold_1278_; uint64_t v___x_1279_; uint64_t v___x_1280_; uint64_t v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; size_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; lean_object* v_bkt_1287_; uint8_t v___x_1288_; 
v___x_1274_ = lean_array_get_size(v_buckets_1270_);
v___x_1275_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1267_);
v___x_1276_ = 32ULL;
v___x_1277_ = lean_uint64_shift_right(v___x_1275_, v___x_1276_);
v_fold_1278_ = lean_uint64_xor(v___x_1275_, v___x_1277_);
v___x_1279_ = 16ULL;
v___x_1280_ = lean_uint64_shift_right(v_fold_1278_, v___x_1279_);
v___x_1281_ = lean_uint64_xor(v_fold_1278_, v___x_1280_);
v___x_1282_ = lean_uint64_to_usize(v___x_1281_);
v___x_1283_ = lean_usize_of_nat(v___x_1274_);
v___x_1284_ = ((size_t)1ULL);
v___x_1285_ = lean_usize_sub(v___x_1283_, v___x_1284_);
v___x_1286_ = lean_usize_land(v___x_1282_, v___x_1285_);
v_bkt_1287_ = lean_array_uget_borrowed(v_buckets_1270_, v___x_1286_);
lean_inc(v_bkt_1287_);
lean_inc(v_a_1267_);
v___x_1288_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1267_, v_bkt_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v_size_x27_1290_; lean_object* v___x_1291_; lean_object* v_buckets_x27_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1289_ = lean_unsigned_to_nat(1u);
v_size_x27_1290_ = lean_nat_add(v_size_1269_, v___x_1289_);
lean_dec(v_size_1269_);
lean_inc(v_bkt_1287_);
v___x_1291_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1291_, 0, v_a_1267_);
lean_ctor_set(v___x_1291_, 1, v_b_1268_);
lean_ctor_set(v___x_1291_, 2, v_bkt_1287_);
v_buckets_x27_1292_ = lean_array_uset(v_buckets_1270_, v___x_1286_, v___x_1291_);
v___x_1293_ = lean_unsigned_to_nat(4u);
v___x_1294_ = lean_nat_mul(v_size_x27_1290_, v___x_1293_);
v___x_1295_ = lean_unsigned_to_nat(3u);
v___x_1296_ = lean_nat_div(v___x_1294_, v___x_1295_);
lean_dec(v___x_1294_);
v___x_1297_ = lean_array_get_size(v_buckets_x27_1292_);
v___x_1298_ = lean_nat_dec_le(v___x_1296_, v___x_1297_);
lean_dec(v___x_1296_);
if (v___x_1298_ == 0)
{
lean_object* v_val_1299_; lean_object* v___x_1301_; 
v_val_1299_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1292_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 1, v_val_1299_);
lean_ctor_set(v___x_1272_, 0, v_size_x27_1290_);
v___x_1301_ = v___x_1272_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_size_x27_1290_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_val_1299_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
else
{
lean_object* v___x_1304_; 
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 1, v_buckets_x27_1292_);
lean_ctor_set(v___x_1272_, 0, v_size_x27_1290_);
v___x_1304_ = v___x_1272_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_size_x27_1290_);
lean_ctor_set(v_reuseFailAlloc_1305_, 1, v_buckets_x27_1292_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
else
{
lean_object* v___x_1306_; lean_object* v_buckets_x27_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
lean_inc(v_bkt_1287_);
v___x_1306_ = lean_box(0);
v_buckets_x27_1307_ = lean_array_uset(v_buckets_1270_, v___x_1286_, v___x_1306_);
v___x_1308_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1267_, v_b_1268_, v_bkt_1287_);
v___x_1309_ = lean_array_uset(v_buckets_x27_1307_, v___x_1286_, v___x_1308_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 1, v___x_1309_);
v___x_1311_ = v___x_1272_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_size_1269_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1314_, lean_object* v_fallback_1315_, lean_object* v_x_1316_){
_start:
{
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_dec(v_a_1314_);
lean_inc(v_fallback_1315_);
return v_fallback_1315_;
}
else
{
lean_object* v_key_1317_; lean_object* v_value_1318_; lean_object* v_tail_1319_; uint8_t v___x_1320_; 
v_key_1317_ = lean_ctor_get(v_x_1316_, 0);
lean_inc(v_key_1317_);
v_value_1318_ = lean_ctor_get(v_x_1316_, 1);
lean_inc(v_value_1318_);
v_tail_1319_ = lean_ctor_get(v_x_1316_, 2);
lean_inc(v_tail_1319_);
lean_dec_ref_known(v_x_1316_, 3);
lean_inc(v_a_1314_);
v___x_1320_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1317_, v_a_1314_);
if (v___x_1320_ == 0)
{
lean_dec(v_value_1318_);
v_x_1316_ = v_tail_1319_;
goto _start;
}
else
{
lean_dec(v_tail_1319_);
lean_dec(v_a_1314_);
return v_value_1318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1322_, lean_object* v_fallback_1323_, lean_object* v_x_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1322_, v_fallback_1323_, v_x_1324_);
lean_dec(v_fallback_1323_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1326_, lean_object* v_a_1327_, lean_object* v_fallback_1328_){
_start:
{
lean_object* v_buckets_1329_; lean_object* v___x_1330_; uint64_t v___x_1331_; uint64_t v___x_1332_; uint64_t v___x_1333_; uint64_t v_fold_1334_; uint64_t v___x_1335_; uint64_t v___x_1336_; uint64_t v___x_1337_; size_t v___x_1338_; size_t v___x_1339_; size_t v___x_1340_; size_t v___x_1341_; size_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v_buckets_1329_ = lean_ctor_get(v_m_1326_, 1);
v___x_1330_ = lean_array_get_size(v_buckets_1329_);
v___x_1331_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1327_);
v___x_1332_ = 32ULL;
v___x_1333_ = lean_uint64_shift_right(v___x_1331_, v___x_1332_);
v_fold_1334_ = lean_uint64_xor(v___x_1331_, v___x_1333_);
v___x_1335_ = 16ULL;
v___x_1336_ = lean_uint64_shift_right(v_fold_1334_, v___x_1335_);
v___x_1337_ = lean_uint64_xor(v_fold_1334_, v___x_1336_);
v___x_1338_ = lean_uint64_to_usize(v___x_1337_);
v___x_1339_ = lean_usize_of_nat(v___x_1330_);
v___x_1340_ = ((size_t)1ULL);
v___x_1341_ = lean_usize_sub(v___x_1339_, v___x_1340_);
v___x_1342_ = lean_usize_land(v___x_1338_, v___x_1341_);
v___x_1343_ = lean_array_uget_borrowed(v_buckets_1329_, v___x_1342_);
lean_inc(v___x_1343_);
v___x_1344_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1327_, v_fallback_1328_, v___x_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1345_, lean_object* v_a_1346_, lean_object* v_fallback_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1345_, v_a_1346_, v_fallback_1347_);
lean_dec(v_fallback_1347_);
lean_dec_ref(v_m_1345_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1349_, lean_object* v_b_1350_){
_start:
{
if (lean_obj_tag(v_as_x27_1349_) == 0)
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_b_1350_);
return v___x_1352_;
}
else
{
lean_object* v_head_1353_; lean_object* v_tail_1354_; lean_object* v_spec_1355_; lean_object* v_handle_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_head_1353_ = lean_ctor_get(v_as_x27_1349_, 0);
v_tail_1354_ = lean_ctor_get(v_as_x27_1349_, 1);
v_spec_1355_ = lean_ctor_get(v_head_1353_, 0);
v_handle_1356_ = lean_ctor_get(v_head_1353_, 1);
v___x_1357_ = lean_box(0);
lean_inc_n(v_spec_1355_, 2);
v___x_1358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1350_, v_spec_1355_, v___x_1357_);
lean_inc_ref(v_handle_1356_);
v___x_1359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1359_, 0, v_handle_1356_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
v___x_1360_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1350_, v_spec_1355_, v___x_1359_);
v_as_x27_1349_ = v_tail_1354_;
v_b_1350_ = v___x_1360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1362_, lean_object* v_b_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1362_, v_b_1363_);
lean_dec(v_as_x27_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v_buckets_1368_; lean_object* v___x_1369_; uint64_t v___x_1370_; uint64_t v___x_1371_; uint64_t v___x_1372_; uint64_t v_fold_1373_; uint64_t v___x_1374_; uint64_t v___x_1375_; uint64_t v___x_1376_; size_t v___x_1377_; size_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; size_t v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
v_buckets_1368_ = lean_ctor_get(v_m_1366_, 1);
v___x_1369_ = lean_array_get_size(v_buckets_1368_);
v___x_1370_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1367_);
v___x_1371_ = 32ULL;
v___x_1372_ = lean_uint64_shift_right(v___x_1370_, v___x_1371_);
v_fold_1373_ = lean_uint64_xor(v___x_1370_, v___x_1372_);
v___x_1374_ = 16ULL;
v___x_1375_ = lean_uint64_shift_right(v_fold_1373_, v___x_1374_);
v___x_1376_ = lean_uint64_xor(v_fold_1373_, v___x_1375_);
v___x_1377_ = lean_uint64_to_usize(v___x_1376_);
v___x_1378_ = lean_usize_of_nat(v___x_1369_);
v___x_1379_ = ((size_t)1ULL);
v___x_1380_ = lean_usize_sub(v___x_1378_, v___x_1379_);
v___x_1381_ = lean_usize_land(v___x_1377_, v___x_1380_);
v___x_1382_ = lean_array_uget_borrowed(v_buckets_1368_, v___x_1381_);
lean_inc(v___x_1382_);
v___x_1383_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1367_, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1384_, lean_object* v_a_1385_){
_start:
{
uint8_t v_res_1386_; lean_object* v_r_1387_; 
v_res_1386_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1384_, v_a_1385_);
lean_dec_ref(v_m_1384_);
v_r_1387_ = lean_box(v_res_1386_);
return v_r_1387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1388_, lean_object* v_x_1389_){
_start:
{
if (lean_obj_tag(v_x_1389_) == 0)
{
lean_dec(v_a_1388_);
return v_x_1389_;
}
else
{
lean_object* v_key_1390_; lean_object* v_value_1391_; lean_object* v_tail_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1401_; 
v_key_1390_ = lean_ctor_get(v_x_1389_, 0);
v_value_1391_ = lean_ctor_get(v_x_1389_, 1);
v_tail_1392_ = lean_ctor_get(v_x_1389_, 2);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_x_1389_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1394_ = v_x_1389_;
v_isShared_1395_ = v_isSharedCheck_1401_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_tail_1392_);
lean_inc(v_value_1391_);
lean_inc(v_key_1390_);
lean_dec(v_x_1389_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1401_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
uint8_t v___x_1396_; 
lean_inc(v_a_1388_);
lean_inc(v_key_1390_);
v___x_1396_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1390_, v_a_1388_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1399_; 
v___x_1397_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1388_, v_tail_1392_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 2, v___x_1397_);
v___x_1399_ = v___x_1394_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_key_1390_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_value_1391_);
lean_ctor_set(v_reuseFailAlloc_1400_, 2, v___x_1397_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
else
{
lean_del_object(v___x_1394_);
lean_dec(v_value_1391_);
lean_dec(v_key_1390_);
lean_dec(v_a_1388_);
return v_tail_1392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_size_1404_; lean_object* v_buckets_1405_; lean_object* v___x_1406_; uint64_t v___x_1407_; uint64_t v___x_1408_; uint64_t v___x_1409_; uint64_t v_fold_1410_; uint64_t v___x_1411_; uint64_t v___x_1412_; uint64_t v___x_1413_; size_t v___x_1414_; size_t v___x_1415_; size_t v___x_1416_; size_t v___x_1417_; size_t v___x_1418_; lean_object* v_bkt_1419_; uint8_t v___x_1420_; 
v_size_1404_ = lean_ctor_get(v_m_1402_, 0);
v_buckets_1405_ = lean_ctor_get(v_m_1402_, 1);
v___x_1406_ = lean_array_get_size(v_buckets_1405_);
v___x_1407_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1403_);
v___x_1408_ = 32ULL;
v___x_1409_ = lean_uint64_shift_right(v___x_1407_, v___x_1408_);
v_fold_1410_ = lean_uint64_xor(v___x_1407_, v___x_1409_);
v___x_1411_ = 16ULL;
v___x_1412_ = lean_uint64_shift_right(v_fold_1410_, v___x_1411_);
v___x_1413_ = lean_uint64_xor(v_fold_1410_, v___x_1412_);
v___x_1414_ = lean_uint64_to_usize(v___x_1413_);
v___x_1415_ = lean_usize_of_nat(v___x_1406_);
v___x_1416_ = ((size_t)1ULL);
v___x_1417_ = lean_usize_sub(v___x_1415_, v___x_1416_);
v___x_1418_ = lean_usize_land(v___x_1414_, v___x_1417_);
v_bkt_1419_ = lean_array_uget_borrowed(v_buckets_1405_, v___x_1418_);
lean_inc(v_bkt_1419_);
lean_inc(v_a_1403_);
v___x_1420_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1403_, v_bkt_1419_);
if (v___x_1420_ == 0)
{
lean_dec(v_a_1403_);
return v_m_1402_;
}
else
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1433_; 
lean_inc(v_bkt_1419_);
lean_inc_ref(v_buckets_1405_);
lean_inc(v_size_1404_);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_m_1402_);
if (v_isSharedCheck_1433_ == 0)
{
lean_object* v_unused_1434_; lean_object* v_unused_1435_; 
v_unused_1434_ = lean_ctor_get(v_m_1402_, 1);
lean_dec(v_unused_1434_);
v_unused_1435_ = lean_ctor_get(v_m_1402_, 0);
lean_dec(v_unused_1435_);
v___x_1422_ = v_m_1402_;
v_isShared_1423_ = v_isSharedCheck_1433_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v_m_1402_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1433_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v_buckets_x27_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1431_; 
v___x_1424_ = lean_box(0);
v_buckets_x27_1425_ = lean_array_uset(v_buckets_1405_, v___x_1418_, v___x_1424_);
v___x_1426_ = lean_unsigned_to_nat(1u);
v___x_1427_ = lean_nat_sub(v_size_1404_, v___x_1426_);
lean_dec(v_size_1404_);
v___x_1428_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1403_, v_bkt_1419_);
v___x_1429_ = lean_array_uset(v_buckets_x27_1425_, v___x_1418_, v___x_1428_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 1, v___x_1429_);
lean_ctor_set(v___x_1422_, 0, v___x_1427_);
v___x_1431_ = v___x_1422_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1427_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v___x_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
if (lean_obj_tag(v_a_1437_) == 0)
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1440_, 0, v_a_1438_);
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
return v___x_1441_;
}
else
{
lean_object* v_key_1442_; lean_object* v_value_1443_; lean_object* v_tail_1444_; uint8_t v___x_1445_; 
v_key_1442_ = lean_ctor_get(v_a_1437_, 0);
lean_inc_n(v_key_1442_, 2);
v_value_1443_ = lean_ctor_get(v_a_1437_, 1);
lean_inc(v_value_1443_);
v_tail_1444_ = lean_ctor_get(v_a_1437_, 2);
lean_inc(v_tail_1444_);
lean_dec_ref_known(v_a_1437_, 3);
v___x_1445_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1436_, v_key_1442_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; 
lean_inc(v_key_1442_);
v___x_1446_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1438_, v_key_1442_);
if (lean_obj_tag(v_key_1442_) == 4)
{
lean_dec_ref_known(v_key_1442_, 1);
lean_dec(v_value_1443_);
v_a_1437_ = v_tail_1444_;
v_a_1438_ = v___x_1446_;
goto _start;
}
else
{
lean_dec(v_key_1442_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1443_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_dec_ref_known(v___x_1448_, 1);
v_a_1437_ = v_tail_1444_;
v_a_1438_ = v___x_1446_;
goto _start;
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref(v___x_1446_);
lean_dec(v_tail_1444_);
v_a_1450_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1448_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1448_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_dec(v_value_1443_);
v_a_1437_ = v_tail_1444_;
v_a_1438_ = v___x_1446_;
goto _start;
}
}
}
else
{
lean_dec(v_value_1443_);
lean_dec(v_key_1442_);
v_a_1437_ = v_tail_1444_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1460_, v_a_1461_, v_a_1462_);
lean_dec_ref(v_a_1460_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1465_, lean_object* v_as_1466_, size_t v_sz_1467_, size_t v_i_1468_, lean_object* v_b_1469_){
_start:
{
uint8_t v___x_1471_; 
v___x_1471_ = lean_usize_dec_lt(v_i_1468_, v_sz_1467_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_b_1469_);
return v___x_1472_;
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1474_; 
v_a_1473_ = lean_array_uget_borrowed(v_as_1466_, v_i_1468_);
lean_inc(v_a_1473_);
v___x_1474_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1465_, v_a_1473_, v_b_1469_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1487_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1487_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1487_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
if (lean_obj_tag(v_a_1475_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; 
v_a_1479_ = lean_ctor_get(v_a_1475_, 0);
lean_inc(v_a_1479_);
lean_dec_ref_known(v_a_1475_, 1);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v_a_1479_);
v___x_1481_ = v___x_1477_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
else
{
lean_object* v_a_1483_; size_t v___x_1484_; size_t v___x_1485_; 
lean_del_object(v___x_1477_);
v_a_1483_ = lean_ctor_get(v_a_1475_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v_a_1475_, 1);
v___x_1484_ = ((size_t)1ULL);
v___x_1485_ = lean_usize_add(v_i_1468_, v___x_1484_);
v_i_1468_ = v___x_1485_;
v_b_1469_ = v_a_1483_;
goto _start;
}
}
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
v_a_1488_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1474_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1474_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1496_, lean_object* v_as_1497_, lean_object* v_sz_1498_, lean_object* v_i_1499_, lean_object* v_b_1500_, lean_object* v___y_1501_){
_start:
{
size_t v_sz_boxed_1502_; size_t v_i_boxed_1503_; lean_object* v_res_1504_; 
v_sz_boxed_1502_ = lean_unbox_usize(v_sz_1498_);
lean_dec(v_sz_1498_);
v_i_boxed_1503_ = lean_unbox_usize(v_i_1499_);
lean_dec(v_i_1499_);
v_res_1504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1496_, v_as_1497_, v_sz_boxed_1502_, v_i_boxed_1503_, v_b_1500_);
lean_dec_ref(v_as_1497_);
lean_dec_ref(v_a_1496_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1505_, lean_object* v_x_1506_){
_start:
{
if (lean_obj_tag(v_x_1506_) == 0)
{
lean_object* v___x_1507_; 
lean_dec(v_a_1505_);
v___x_1507_ = lean_box(0);
return v___x_1507_;
}
else
{
lean_object* v_key_1508_; lean_object* v_value_1509_; lean_object* v_tail_1510_; uint8_t v___x_1511_; 
v_key_1508_ = lean_ctor_get(v_x_1506_, 0);
lean_inc(v_key_1508_);
v_value_1509_ = lean_ctor_get(v_x_1506_, 1);
lean_inc(v_value_1509_);
v_tail_1510_ = lean_ctor_get(v_x_1506_, 2);
lean_inc(v_tail_1510_);
lean_dec_ref_known(v_x_1506_, 3);
lean_inc(v_a_1505_);
v___x_1511_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1508_, v_a_1505_);
if (v___x_1511_ == 0)
{
lean_dec(v_value_1509_);
v_x_1506_ = v_tail_1510_;
goto _start;
}
else
{
lean_object* v___x_1513_; 
lean_dec(v_tail_1510_);
lean_dec(v_a_1505_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_value_1509_);
return v___x_1513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_buckets_1516_; lean_object* v___x_1517_; uint64_t v___x_1518_; uint64_t v___x_1519_; uint64_t v___x_1520_; uint64_t v_fold_1521_; uint64_t v___x_1522_; uint64_t v___x_1523_; uint64_t v___x_1524_; size_t v___x_1525_; size_t v___x_1526_; size_t v___x_1527_; size_t v___x_1528_; size_t v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_buckets_1516_ = lean_ctor_get(v_m_1514_, 1);
v___x_1517_ = lean_array_get_size(v_buckets_1516_);
v___x_1518_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1515_);
v___x_1519_ = 32ULL;
v___x_1520_ = lean_uint64_shift_right(v___x_1518_, v___x_1519_);
v_fold_1521_ = lean_uint64_xor(v___x_1518_, v___x_1520_);
v___x_1522_ = 16ULL;
v___x_1523_ = lean_uint64_shift_right(v_fold_1521_, v___x_1522_);
v___x_1524_ = lean_uint64_xor(v_fold_1521_, v___x_1523_);
v___x_1525_ = lean_uint64_to_usize(v___x_1524_);
v___x_1526_ = lean_usize_of_nat(v___x_1517_);
v___x_1527_ = ((size_t)1ULL);
v___x_1528_ = lean_usize_sub(v___x_1526_, v___x_1527_);
v___x_1529_ = lean_usize_land(v___x_1525_, v___x_1528_);
v___x_1530_ = lean_array_uget_borrowed(v_buckets_1516_, v___x_1529_);
lean_inc(v___x_1530_);
v___x_1531_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1515_, v___x_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1532_, v_a_1533_);
lean_dec_ref(v_m_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1535_, lean_object* v_fallback_1536_, lean_object* v_x_1537_){
_start:
{
if (lean_obj_tag(v_x_1537_) == 0)
{
lean_inc(v_fallback_1536_);
return v_fallback_1536_;
}
else
{
lean_object* v_key_1538_; lean_object* v_value_1539_; lean_object* v_tail_1540_; uint8_t v___x_1541_; 
v_key_1538_ = lean_ctor_get(v_x_1537_, 0);
v_value_1539_ = lean_ctor_get(v_x_1537_, 1);
v_tail_1540_ = lean_ctor_get(v_x_1537_, 2);
v___x_1541_ = lean_nat_dec_eq(v_key_1538_, v_a_1535_);
if (v___x_1541_ == 0)
{
v_x_1537_ = v_tail_1540_;
goto _start;
}
else
{
lean_inc(v_value_1539_);
return v_value_1539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1543_, lean_object* v_fallback_1544_, lean_object* v_x_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1543_, v_fallback_1544_, v_x_1545_);
lean_dec(v_x_1545_);
lean_dec(v_fallback_1544_);
lean_dec(v_a_1543_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1547_, lean_object* v_a_1548_, lean_object* v_fallback_1549_){
_start:
{
lean_object* v_buckets_1550_; lean_object* v___x_1551_; uint64_t v___x_1552_; uint64_t v___x_1553_; uint64_t v___x_1554_; uint64_t v_fold_1555_; uint64_t v___x_1556_; uint64_t v___x_1557_; uint64_t v___x_1558_; size_t v___x_1559_; size_t v___x_1560_; size_t v___x_1561_; size_t v___x_1562_; size_t v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v_buckets_1550_ = lean_ctor_get(v_m_1547_, 1);
v___x_1551_ = lean_array_get_size(v_buckets_1550_);
v___x_1552_ = lean_uint64_of_nat(v_a_1548_);
v___x_1553_ = 32ULL;
v___x_1554_ = lean_uint64_shift_right(v___x_1552_, v___x_1553_);
v_fold_1555_ = lean_uint64_xor(v___x_1552_, v___x_1554_);
v___x_1556_ = 16ULL;
v___x_1557_ = lean_uint64_shift_right(v_fold_1555_, v___x_1556_);
v___x_1558_ = lean_uint64_xor(v_fold_1555_, v___x_1557_);
v___x_1559_ = lean_uint64_to_usize(v___x_1558_);
v___x_1560_ = lean_usize_of_nat(v___x_1551_);
v___x_1561_ = ((size_t)1ULL);
v___x_1562_ = lean_usize_sub(v___x_1560_, v___x_1561_);
v___x_1563_ = lean_usize_land(v___x_1559_, v___x_1562_);
v___x_1564_ = lean_array_uget_borrowed(v_buckets_1550_, v___x_1563_);
v___x_1565_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1548_, v_fallback_1549_, v___x_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1566_, lean_object* v_a_1567_, lean_object* v_fallback_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1566_, v_a_1567_, v_fallback_1568_);
lean_dec(v_fallback_1568_);
lean_dec(v_a_1567_);
lean_dec_ref(v_m_1566_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1571_, lean_object* v_value_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1574_ = ((lean_object*)(l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_mk_empty_array_with_capacity(v___x_1575_);
v___x_1577_ = lean_array_push(v___x_1576_, v_value_1572_);
v___x_1578_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_1571_, v___x_1574_, v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1579_, lean_object* v_value_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1579_, v_value_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1588_);
lean_dec_ref(v_x_1588_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1590_, lean_object* v_a_1591_){
_start:
{
if (lean_obj_tag(v_a_1590_) == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = l_List_reverse___redArg(v_a_1591_);
return v___x_1592_;
}
else
{
lean_object* v_head_1593_; lean_object* v_tail_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1608_; 
v_head_1593_ = lean_ctor_get(v_a_1590_, 0);
v_tail_1594_ = lean_ctor_get(v_a_1590_, 1);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_a_1590_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1596_ = v_a_1590_;
v_isShared_1597_ = v_isSharedCheck_1608_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_tail_1594_);
lean_inc(v_head_1593_);
lean_dec(v_a_1590_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1608_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v_fst_1598_; lean_object* v_snd_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
v_fst_1598_ = lean_ctor_get(v_head_1593_, 0);
lean_inc(v_fst_1598_);
v_snd_1599_ = lean_ctor_get(v_head_1593_, 1);
lean_inc(v_snd_1599_);
lean_dec(v_head_1593_);
v___x_1600_ = lean_unsigned_to_nat(2u);
v___x_1601_ = lean_mk_empty_array_with_capacity(v___x_1600_);
v___x_1602_ = lean_array_push(v___x_1601_, v_fst_1598_);
v___x_1603_ = lean_array_push(v___x_1602_, v_snd_1599_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 1, v_a_1591_);
lean_ctor_set(v___x_1596_, 0, v___x_1603_);
v___x_1605_ = v___x_1596_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1603_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_a_1591_);
v___x_1605_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
v_a_1590_ = v_tail_1594_;
v_a_1591_ = v___x_1605_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
if (lean_obj_tag(v_a_1609_) == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_array_to_list(v_a_1610_);
return v___x_1611_;
}
else
{
lean_object* v_head_1612_; 
v_head_1612_ = lean_ctor_get(v_a_1609_, 0);
if (lean_obj_tag(v_head_1612_) == 7)
{
lean_object* v_tail_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1635_; 
lean_inc_ref(v_head_1612_);
v_tail_1613_ = lean_ctor_get(v_a_1609_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_a_1609_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; 
v_unused_1636_ = lean_ctor_get(v_a_1609_, 0);
lean_dec(v_unused_1636_);
v___x_1615_ = v_a_1609_;
v_isShared_1616_ = v_isSharedCheck_1635_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_tail_1613_);
lean_dec(v_a_1609_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1635_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v_items_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; 
v_items_1617_ = lean_ctor_get(v_head_1612_, 0);
lean_inc_ref(v_items_1617_);
lean_dec_ref_known(v_head_1612_, 1);
v___x_1618_ = lean_array_get_size(v_items_1617_);
v___x_1619_ = lean_unsigned_to_nat(2u);
v___x_1620_ = lean_nat_dec_eq(v___x_1618_, v___x_1619_);
if (v___x_1620_ == 0)
{
lean_dec_ref(v_items_1617_);
lean_del_object(v___x_1615_);
v_a_1609_ = v_tail_1613_;
goto _start;
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = lean_unsigned_to_nat(0u);
v___x_1623_ = lean_array_fget_borrowed(v_items_1617_, v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 4)
{
lean_object* v_s_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v_s_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc_ref(v_s_1624_);
v___x_1625_ = lean_unsigned_to_nat(1u);
v___x_1626_ = lean_array_fget(v_items_1617_, v___x_1625_);
lean_dec_ref(v_items_1617_);
if (lean_obj_tag(v___x_1626_) == 4)
{
lean_object* v_s_1627_; lean_object* v___x_1629_; 
v_s_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc_ref(v_s_1627_);
lean_dec_ref_known(v___x_1626_, 1);
if (v_isShared_1616_ == 0)
{
lean_ctor_set_tag(v___x_1615_, 0);
lean_ctor_set(v___x_1615_, 1, v_s_1627_);
lean_ctor_set(v___x_1615_, 0, v_s_1624_);
v___x_1629_ = v___x_1615_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_s_1624_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_s_1627_);
v___x_1629_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_array_push(v_a_1610_, v___x_1629_);
v_a_1609_ = v_tail_1613_;
v_a_1610_ = v___x_1630_;
goto _start;
}
}
else
{
lean_dec(v___x_1626_);
lean_dec_ref(v_s_1624_);
lean_del_object(v___x_1615_);
v_a_1609_ = v_tail_1613_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1617_);
lean_del_object(v___x_1615_);
v_a_1609_ = v_tail_1613_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1637_; 
v_tail_1637_ = lean_ctor_get(v_a_1609_, 1);
lean_inc(v_tail_1637_);
lean_dec_ref_known(v_a_1609_, 2);
v_a_1609_ = v_tail_1637_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1639_, lean_object* v_s_1640_){
_start:
{
lean_object* v_model_1641_; lean_object* v_live_1642_; lean_object* v_next_1643_; lean_object* v_tables_1644_; uint8_t v_dirty_1645_; uint8_t v_scheduled_1646_; lean_object* v_queue_1647_; lean_object* v_subs_1648_; lean_object* v_handlers_1649_; lean_object* v_nextSub_1650_; lean_object* v_touched_1651_; lean_object* v_ports_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
v_model_1641_ = lean_ctor_get(v_s_1640_, 0);
v_live_1642_ = lean_ctor_get(v_s_1640_, 1);
v_next_1643_ = lean_ctor_get(v_s_1640_, 2);
v_tables_1644_ = lean_ctor_get(v_s_1640_, 3);
v_dirty_1645_ = lean_ctor_get_uint8(v_s_1640_, sizeof(void*)*10);
v_scheduled_1646_ = lean_ctor_get_uint8(v_s_1640_, sizeof(void*)*10 + 1);
v_queue_1647_ = lean_ctor_get(v_s_1640_, 4);
v_subs_1648_ = lean_ctor_get(v_s_1640_, 5);
v_handlers_1649_ = lean_ctor_get(v_s_1640_, 6);
v_nextSub_1650_ = lean_ctor_get(v_s_1640_, 7);
v_touched_1651_ = lean_ctor_get(v_s_1640_, 8);
v_ports_1652_ = lean_ctor_get(v_s_1640_, 9);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_s_1640_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v_s_1640_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_ports_1652_);
lean_inc(v_touched_1651_);
lean_inc(v_nextSub_1650_);
lean_inc(v_handlers_1649_);
lean_inc(v_subs_1648_);
lean_inc(v_queue_1647_);
lean_inc(v_tables_1644_);
lean_inc(v_next_1643_);
lean_inc(v_live_1642_);
lean_inc(v_model_1641_);
lean_dec(v_s_1640_);
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
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_model_1641_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_live_1642_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_next_1643_);
lean_ctor_set(v_reuseFailAlloc_1658_, 3, v_tables_1644_);
lean_ctor_set(v_reuseFailAlloc_1658_, 4, v_queue_1647_);
lean_ctor_set(v_reuseFailAlloc_1658_, 5, v_subs_1648_);
lean_ctor_set(v_reuseFailAlloc_1658_, 6, v_handlers_1649_);
lean_ctor_set(v_reuseFailAlloc_1658_, 7, v_nextSub_1650_);
lean_ctor_set(v_reuseFailAlloc_1658_, 8, v_touched_1651_);
lean_ctor_set(v_reuseFailAlloc_1658_, 9, v_ports_1652_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*10, v_dirty_1645_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*10 + 1, v_scheduled_1646_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_ctor_set_uint8(v___x_1657_, sizeof(void*)*10 + 2, v_busy_1639_);
return v___x_1657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1660_, lean_object* v_s_1661_){
_start:
{
uint8_t v_busy_boxed_1662_; lean_object* v_res_1663_; 
v_busy_boxed_1662_ = lean_unbox(v_busy_1660_);
v_res_1663_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1662_, v_s_1661_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1664_, lean_object* v_msg_1665_, lean_object* v_x_1666_){
_start:
{
lean_object* v___x_1668_; 
lean_inc_ref(v_c_1664_);
v___x_1668_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1664_, v_msg_1665_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref_known(v___x_1668_, 1);
v___x_1669_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1664_);
lean_dec_ref(v_c_1664_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1679_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1679_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1679_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1674_; uint8_t v___x_1675_; lean_object* v___x_1677_; 
v___x_1674_ = lean_alloc_ctor(2, 0, 1);
v___x_1675_ = lean_unbox(v_a_1670_);
lean_dec(v_a_1670_);
lean_ctor_set_uint8(v___x_1674_, 0, v___x_1675_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1674_);
v___x_1677_ = v___x_1672_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1674_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
v_a_1680_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1669_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1669_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_dec_ref(v_c_1664_);
v_a_1688_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1668_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1668_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1696_, lean_object* v_msg_1697_, lean_object* v_x_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1696_, v_msg_1697_, v_x_1698_);
lean_dec_ref(v_x_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1704_, lean_object* v_c_1705_, lean_object* v___f_1706_, lean_object* v_args_1707_){
_start:
{
lean_object* v___y_1710_; lean_object* v___x_1740_; lean_object* v___x_1741_; uint8_t v___x_1742_; 
v___x_1740_ = lean_array_get_size(v_args_1707_);
v___x_1741_ = lean_unsigned_to_nat(5u);
v___x_1742_ = lean_nat_dec_eq(v___x_1740_, v___x_1741_);
if (v___x_1742_ == 0)
{
lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = lean_unsigned_to_nat(2u);
v___x_1744_ = lean_nat_dec_eq(v___x_1740_, v___x_1743_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_apply_1(v___f_1706_, v_args_1707_);
v___y_1710_ = v___x_1745_;
goto v___jp_1709_;
}
else
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = lean_array_fget(v_args_1707_, v___x_1746_);
if (lean_obj_tag(v___x_1747_) == 2)
{
uint8_t v_b_1748_; 
v_b_1748_ = lean_ctor_get_uint8(v___x_1747_, 0);
if (v_b_1748_ == 0)
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1749_ = lean_unsigned_to_nat(1u);
v___x_1750_ = lean_array_fget(v_args_1707_, v___x_1749_);
lean_dec_ref(v_args_1707_);
if (lean_obj_tag(v___x_1750_) == 4)
{
lean_object* v_s_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
lean_dec_ref_known(v___x_1747_, 0);
lean_dec_ref(v___f_1706_);
v_s_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_s_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 0);
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_s_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
v___y_1710_ = v___x_1756_;
goto v___jp_1709_;
}
}
}
else
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1759_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1760_ = lean_array_push(v___x_1759_, v___x_1747_);
v___x_1761_ = lean_array_push(v___x_1760_, v___x_1750_);
v___x_1762_ = lean_apply_1(v___f_1706_, v___x_1761_);
v___y_1710_ = v___x_1762_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1763_ = lean_unsigned_to_nat(1u);
v___x_1764_ = lean_array_fget(v_args_1707_, v___x_1763_);
lean_dec_ref(v_args_1707_);
v___x_1765_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1766_ = lean_array_push(v___x_1765_, v___x_1747_);
v___x_1767_ = lean_array_push(v___x_1766_, v___x_1764_);
v___x_1768_ = lean_apply_1(v___f_1706_, v___x_1767_);
v___y_1710_ = v___x_1768_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1769_ = lean_unsigned_to_nat(1u);
v___x_1770_ = lean_array_fget(v_args_1707_, v___x_1769_);
lean_dec_ref(v_args_1707_);
v___x_1771_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1772_ = lean_array_push(v___x_1771_, v___x_1747_);
v___x_1773_ = lean_array_push(v___x_1772_, v___x_1770_);
v___x_1774_ = lean_apply_1(v___f_1706_, v___x_1773_);
v___y_1710_ = v___x_1774_;
goto v___jp_1709_;
}
}
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = lean_unsigned_to_nat(0u);
v___x_1776_ = lean_array_fget_borrowed(v_args_1707_, v___x_1775_);
if (lean_obj_tag(v___x_1776_) == 2)
{
uint8_t v_b_1777_; 
v_b_1777_ = lean_ctor_get_uint8(v___x_1776_, 0);
if (v_b_1777_ == 1)
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = lean_unsigned_to_nat(2u);
v___x_1779_ = lean_array_fget_borrowed(v_args_1707_, v___x_1778_);
if (lean_obj_tag(v___x_1779_) == 4)
{
lean_object* v_s_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v_s_1780_ = lean_ctor_get(v___x_1779_, 0);
v___x_1781_ = lean_unsigned_to_nat(3u);
v___x_1782_ = lean_array_fget_borrowed(v_args_1707_, v___x_1781_);
if (lean_obj_tag(v___x_1782_) == 7)
{
lean_object* v_items_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v_items_1783_ = lean_ctor_get(v___x_1782_, 0);
v___x_1784_ = lean_unsigned_to_nat(4u);
v___x_1785_ = lean_array_fget(v_args_1707_, v___x_1784_);
if (lean_obj_tag(v___x_1785_) == 4)
{
lean_object* v_s_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1804_; 
lean_inc_ref(v_items_1783_);
lean_inc_ref(v_s_1780_);
lean_dec_ref(v___f_1706_);
v_s_1786_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1788_ = v___x_1785_;
v_isShared_1789_ = v_isSharedCheck_1804_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_s_1786_);
lean_dec(v___x_1785_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1804_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___y_1791_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_unsigned_to_nat(1u);
v___x_1800_ = lean_array_fget(v_args_1707_, v___x_1799_);
lean_dec_ref(v_args_1707_);
if (lean_obj_tag(v___x_1800_) == 3)
{
double v_n_1801_; uint64_t v___x_1802_; lean_object* v___x_1803_; 
v_n_1801_ = lean_ctor_get_float(v___x_1800_, 0);
lean_dec_ref_known(v___x_1800_, 0);
v___x_1802_ = lean_float_to_uint64(v_n_1801_);
v___x_1803_ = lean_uint64_to_nat(v___x_1802_);
v___y_1791_ = v___x_1803_;
goto v___jp_1790_;
}
else
{
lean_dec(v___x_1800_);
v___y_1791_ = v___x_1775_;
goto v___jp_1790_;
}
v___jp_1790_:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1792_ = lean_array_to_list(v_items_1783_);
v___x_1793_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1794_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1792_, v___x_1793_);
v___x_1795_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1795_, 0, v___y_1791_);
lean_ctor_set(v___x_1795_, 1, v_s_1780_);
lean_ctor_set(v___x_1795_, 2, v___x_1794_);
lean_ctor_set(v___x_1795_, 3, v_s_1786_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set_tag(v___x_1788_, 1);
lean_ctor_set(v___x_1788_, 0, v___x_1795_);
v___x_1797_ = v___x_1788_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
v___y_1710_ = v___x_1797_;
goto v___jp_1709_;
}
}
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
lean_inc_ref(v___x_1782_);
lean_inc_ref(v___x_1779_);
lean_inc_ref(v___x_1776_);
v___x_1805_ = lean_unsigned_to_nat(1u);
v___x_1806_ = lean_array_fget(v_args_1707_, v___x_1805_);
lean_dec_ref(v_args_1707_);
v___x_1807_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1776_);
v___x_1809_ = lean_array_push(v___x_1808_, v___x_1806_);
v___x_1810_ = lean_array_push(v___x_1809_, v___x_1779_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1782_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1785_);
v___x_1813_ = lean_apply_1(v___f_1706_, v___x_1812_);
v___y_1710_ = v___x_1813_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
lean_inc(v___x_1782_);
lean_inc_ref(v___x_1779_);
lean_inc_ref(v___x_1776_);
v___x_1814_ = lean_unsigned_to_nat(1u);
v___x_1815_ = lean_array_fget(v_args_1707_, v___x_1814_);
v___x_1816_ = lean_unsigned_to_nat(4u);
v___x_1817_ = lean_array_fget(v_args_1707_, v___x_1816_);
lean_dec_ref(v_args_1707_);
v___x_1818_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1776_);
v___x_1820_ = lean_array_push(v___x_1819_, v___x_1815_);
v___x_1821_ = lean_array_push(v___x_1820_, v___x_1779_);
v___x_1822_ = lean_array_push(v___x_1821_, v___x_1782_);
v___x_1823_ = lean_array_push(v___x_1822_, v___x_1817_);
v___x_1824_ = lean_apply_1(v___f_1706_, v___x_1823_);
v___y_1710_ = v___x_1824_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
lean_inc(v___x_1779_);
lean_inc_ref(v___x_1776_);
v___x_1825_ = lean_unsigned_to_nat(1u);
v___x_1826_ = lean_array_fget(v_args_1707_, v___x_1825_);
v___x_1827_ = lean_unsigned_to_nat(3u);
v___x_1828_ = lean_array_fget(v_args_1707_, v___x_1827_);
v___x_1829_ = lean_unsigned_to_nat(4u);
v___x_1830_ = lean_array_fget(v_args_1707_, v___x_1829_);
lean_dec_ref(v_args_1707_);
v___x_1831_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1832_ = lean_array_push(v___x_1831_, v___x_1776_);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1826_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1779_);
v___x_1835_ = lean_array_push(v___x_1834_, v___x_1828_);
v___x_1836_ = lean_array_push(v___x_1835_, v___x_1830_);
v___x_1837_ = lean_apply_1(v___f_1706_, v___x_1836_);
v___y_1710_ = v___x_1837_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_inc_ref(v___x_1776_);
v___x_1838_ = lean_unsigned_to_nat(1u);
v___x_1839_ = lean_array_fget(v_args_1707_, v___x_1838_);
v___x_1840_ = lean_unsigned_to_nat(2u);
v___x_1841_ = lean_array_fget(v_args_1707_, v___x_1840_);
v___x_1842_ = lean_unsigned_to_nat(3u);
v___x_1843_ = lean_array_fget(v_args_1707_, v___x_1842_);
v___x_1844_ = lean_unsigned_to_nat(4u);
v___x_1845_ = lean_array_fget(v_args_1707_, v___x_1844_);
lean_dec_ref(v_args_1707_);
v___x_1846_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1847_ = lean_array_push(v___x_1846_, v___x_1776_);
v___x_1848_ = lean_array_push(v___x_1847_, v___x_1839_);
v___x_1849_ = lean_array_push(v___x_1848_, v___x_1841_);
v___x_1850_ = lean_array_push(v___x_1849_, v___x_1843_);
v___x_1851_ = lean_array_push(v___x_1850_, v___x_1845_);
v___x_1852_ = lean_apply_1(v___f_1706_, v___x_1851_);
v___y_1710_ = v___x_1852_;
goto v___jp_1709_;
}
}
else
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_inc(v___x_1776_);
v___x_1853_ = lean_unsigned_to_nat(1u);
v___x_1854_ = lean_array_fget(v_args_1707_, v___x_1853_);
v___x_1855_ = lean_unsigned_to_nat(2u);
v___x_1856_ = lean_array_fget(v_args_1707_, v___x_1855_);
v___x_1857_ = lean_unsigned_to_nat(3u);
v___x_1858_ = lean_array_fget(v_args_1707_, v___x_1857_);
v___x_1859_ = lean_unsigned_to_nat(4u);
v___x_1860_ = lean_array_fget(v_args_1707_, v___x_1859_);
lean_dec_ref(v_args_1707_);
v___x_1861_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1862_ = lean_array_push(v___x_1861_, v___x_1776_);
v___x_1863_ = lean_array_push(v___x_1862_, v___x_1854_);
v___x_1864_ = lean_array_push(v___x_1863_, v___x_1856_);
v___x_1865_ = lean_array_push(v___x_1864_, v___x_1858_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1860_);
v___x_1867_ = lean_apply_1(v___f_1706_, v___x_1866_);
v___y_1710_ = v___x_1867_;
goto v___jp_1709_;
}
}
v___jp_1709_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_apply_1(v_handle_1704_, v___y_1710_);
lean_inc_ref(v_c_1705_);
v___x_1712_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1705_, v___x_1711_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v___x_1713_; 
lean_dec_ref_known(v___x_1712_, 1);
v___x_1713_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1705_);
lean_dec_ref(v_c_1705_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1723_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; uint8_t v___x_1719_; lean_object* v___x_1721_; 
v___x_1718_ = lean_alloc_ctor(2, 0, 1);
v___x_1719_ = lean_unbox(v_a_1714_);
lean_dec(v_a_1714_);
lean_ctor_set_uint8(v___x_1718_, 0, v___x_1719_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1718_);
v___x_1721_ = v___x_1716_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1718_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
else
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
v_a_1724_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1713_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1713_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
lean_dec_ref(v_c_1705_);
v_a_1732_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1712_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1712_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1868_, lean_object* v_c_1869_, lean_object* v___f_1870_, lean_object* v_args_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1868_, v_c_1869_, v___f_1870_, v_args_1871_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1874_, lean_object* v_m_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1874_, v_m_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1878_, lean_object* v_e_1879_){
_start:
{
switch(lean_obj_tag(v_e_1879_))
{
case 0:
{
lean_object* v_msg_1881_; lean_object* v___x_1882_; 
v_msg_1881_ = lean_ctor_get(v_e_1879_, 0);
lean_inc(v_msg_1881_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1882_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1878_, v_msg_1881_);
return v___x_1882_;
}
case 1:
{
lean_object* v_ms_1883_; lean_object* v_msg_1884_; lean_object* v___f_1885_; lean_object* v___x_1886_; 
v_ms_1883_ = lean_ctor_get(v_e_1879_, 0);
lean_inc(v_ms_1883_);
v_msg_1884_ = lean_ctor_get(v_e_1879_, 1);
lean_inc(v_msg_1884_);
lean_dec_ref_known(v_e_1879_, 2);
v___f_1885_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1885_, 0, v_c_1878_);
lean_closure_set(v___f_1885_, 1, v_msg_1884_);
v___x_1886_ = l_Lasm_JS_Function_ofSyncFn(v___f_1885_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1888_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1883_, v_a_1887_);
return v___x_1888_;
}
else
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
lean_dec(v_ms_1883_);
v_a_1889_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v___x_1886_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1886_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
case 2:
{
lean_object* v_request_1897_; lean_object* v_handle_1898_; lean_object* v___f_1899_; lean_object* v___f_1900_; lean_object* v___x_1901_; 
v_request_1897_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_request_1897_);
v_handle_1898_ = lean_ctor_get(v_e_1879_, 1);
lean_inc(v_handle_1898_);
lean_dec_ref_known(v_e_1879_, 2);
v___f_1899_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1900_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1900_, 0, v_handle_1898_);
lean_closure_set(v___f_1900_, 1, v_c_1878_);
lean_closure_set(v___f_1900_, 2, v___f_1899_);
v___x_1901_ = l_Lasm_JS_Function_ofSyncFn(v___f_1900_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v_method_1903_; lean_object* v_url_1904_; lean_object* v_headers_1905_; lean_object* v_body_1906_; lean_object* v_credentials_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; size_t v_sz_1911_; size_t v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v_method_1903_ = lean_ctor_get(v_request_1897_, 0);
lean_inc_ref(v_method_1903_);
v_url_1904_ = lean_ctor_get(v_request_1897_, 1);
lean_inc_ref(v_url_1904_);
v_headers_1905_ = lean_ctor_get(v_request_1897_, 2);
lean_inc(v_headers_1905_);
v_body_1906_ = lean_ctor_get(v_request_1897_, 3);
lean_inc(v_body_1906_);
v_credentials_1907_ = lean_ctor_get(v_request_1897_, 4);
lean_inc_ref(v_credentials_1907_);
lean_dec_ref(v_request_1897_);
v___x_1908_ = lean_box(0);
v___x_1909_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1905_, v___x_1908_);
v___x_1910_ = lean_array_mk(v___x_1909_);
v_sz_1911_ = lean_array_size(v___x_1910_);
v___x_1912_ = ((size_t)0ULL);
v___x_1913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1911_, v___x_1912_, v___x_1910_);
v___x_1914_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1913_);
v___x_1915_ = l_Lasm_UI_Runtime_Dom_http(v_method_1903_, v_url_1904_, v___x_1914_, v_body_1906_, v_credentials_1907_, v_a_1902_);
return v___x_1915_;
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec_ref(v_request_1897_);
v_a_1916_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1901_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1901_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
case 3:
{
lean_object* v_n_1924_; lean_object* v_handle_1925_; size_t v___x_1926_; lean_object* v___x_1927_; 
v_n_1924_ = lean_ctor_get(v_e_1879_, 0);
lean_inc(v_n_1924_);
v_handle_1925_ = lean_ctor_get(v_e_1879_, 1);
lean_inc(v_handle_1925_);
lean_dec_ref_known(v_e_1879_, 2);
v___x_1926_ = lean_usize_of_nat(v_n_1924_);
lean_dec(v_n_1924_);
v___x_1927_ = lean_io_get_random_bytes(v___x_1926_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = lean_apply_1(v_handle_1925_, v_a_1928_);
v___x_1930_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1878_, v___x_1929_);
return v___x_1930_;
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec(v_handle_1925_);
lean_dec_ref(v_c_1878_);
v_a_1931_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1927_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1927_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
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
return v___x_1936_;
}
}
}
}
case 4:
{
lean_object* v_handle_1939_; lean_object* v___x_1940_; 
v_handle_1939_ = lean_ctor_get(v_e_1879_, 0);
lean_inc(v_handle_1939_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1940_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = lean_apply_1(v_handle_1939_, v_a_1941_);
v___x_1943_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1878_, v___x_1942_);
return v___x_1943_;
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec(v_handle_1939_);
lean_dec_ref(v_c_1878_);
v_a_1944_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1940_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1940_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
case 5:
{
lean_object* v_url_1952_; uint8_t v_replace_1953_; lean_object* v___x_1954_; 
lean_dec_ref(v_c_1878_);
v_url_1952_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_url_1952_);
v_replace_1953_ = lean_ctor_get_uint8(v_e_1879_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1954_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1952_, v_replace_1953_);
return v___x_1954_;
}
case 6:
{
lean_object* v_n_1955_; lean_object* v___x_1956_; 
lean_dec_ref(v_c_1878_);
v_n_1955_ = lean_ctor_get(v_e_1879_, 0);
lean_inc(v_n_1955_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1956_ = l_Lasm_UI_Runtime_Dom_go(v_n_1955_);
return v___x_1956_;
}
case 7:
{
lean_object* v_url_1957_; lean_object* v___x_1958_; 
lean_dec_ref(v_c_1878_);
v_url_1957_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_url_1957_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1958_ = l_Lasm_UI_Runtime_Dom_load(v_url_1957_);
return v___x_1958_;
}
case 8:
{
uint8_t v_storage_1959_; lean_object* v_key_1960_; lean_object* v_value_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
lean_dec_ref(v_c_1878_);
v_storage_1959_ = lean_ctor_get_uint8(v_e_1879_, sizeof(void*)*2);
v_key_1960_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_key_1960_);
v_value_1961_ = lean_ctor_get(v_e_1879_, 1);
lean_inc_ref(v_value_1961_);
lean_dec_ref_known(v_e_1879_, 2);
v___x_1962_ = l_Lasm_UI_Runtime_storageName(v_storage_1959_);
v___x_1963_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_1962_, v_key_1960_, v_value_1961_);
return v___x_1963_;
}
case 9:
{
uint8_t v_storage_1964_; lean_object* v_key_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
lean_dec_ref(v_c_1878_);
v_storage_1964_ = lean_ctor_get_uint8(v_e_1879_, sizeof(void*)*1);
v_key_1965_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_key_1965_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1966_ = l_Lasm_UI_Runtime_storageName(v_storage_1964_);
v___x_1967_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_1966_, v_key_1965_);
return v___x_1967_;
}
case 10:
{
uint8_t v_storage_1968_; lean_object* v_key_1969_; lean_object* v_handle_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v_storage_1968_ = lean_ctor_get_uint8(v_e_1879_, sizeof(void*)*2);
v_key_1969_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_key_1969_);
v_handle_1970_ = lean_ctor_get(v_e_1879_, 1);
lean_inc(v_handle_1970_);
lean_dec_ref_known(v_e_1879_, 2);
v___x_1971_ = l_Lasm_UI_Runtime_storageName(v_storage_1968_);
v___x_1972_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_1971_, v_key_1969_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v___x_1974_ = lean_apply_1(v_handle_1970_, v_a_1973_);
v___x_1975_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1878_, v___x_1974_);
return v___x_1975_;
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec(v_handle_1970_);
lean_dec_ref(v_c_1878_);
v_a_1976_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1972_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1972_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
case 11:
{
lean_object* v_id_1984_; uint8_t v_blur_1985_; lean_object* v___x_1986_; 
lean_dec_ref(v_c_1878_);
v_id_1984_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_id_1984_);
v_blur_1985_ = lean_ctor_get_uint8(v_e_1879_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1879_, 1);
v___x_1986_ = l_Lasm_UI_Runtime_Dom_focus(v_id_1984_, v_blur_1985_);
return v___x_1986_;
}
case 12:
{
lean_object* v_name_1987_; lean_object* v_value_1988_; lean_object* v___x_1989_; 
lean_dec_ref(v_c_1878_);
v_name_1987_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_name_1987_);
v_value_1988_ = lean_ctor_get(v_e_1879_, 1);
lean_inc(v_value_1988_);
lean_dec_ref_known(v_e_1879_, 2);
v___x_1989_ = l_Lasm_Web_App_Raw_port(v_name_1987_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_1990_, v_value_1988_);
return v___x_1991_;
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec(v_value_1988_);
v_a_1992_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1989_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1989_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
case 13:
{
lean_object* v_title_2000_; lean_object* v___x_2001_; 
lean_dec_ref(v_c_1878_);
v_title_2000_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_title_2000_);
lean_dec_ref_known(v_e_1879_, 1);
v___x_2001_ = l_Lasm_UI_Runtime_Dom_title(v_title_2000_);
return v___x_2001_;
}
default: 
{
lean_object* v_run_2002_; lean_object* v___f_2003_; lean_object* v___x_2004_; 
v_run_2002_ = lean_ctor_get(v_e_1879_, 0);
lean_inc_ref(v_run_2002_);
lean_dec_ref_known(v_e_1879_, 1);
v___f_2003_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2003_, 0, v_c_1878_);
v___x_2004_ = lean_apply_2(v_run_2002_, v___f_2003_, lean_box(0));
return v___x_2004_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_2006_, lean_object* v_as_x27_2007_, lean_object* v_b_2008_){
_start:
{
if (lean_obj_tag(v_as_x27_2007_) == 0)
{
lean_object* v___x_2010_; 
lean_dec_ref(v_c_2006_);
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v_b_2008_);
return v___x_2010_;
}
else
{
lean_object* v_head_2011_; lean_object* v_tail_2012_; lean_object* v___x_2013_; lean_object* v___y_2015_; lean_object* v___x_2017_; 
v_head_2011_ = lean_ctor_get(v_as_x27_2007_, 0);
v_tail_2012_ = lean_ctor_get(v_as_x27_2007_, 1);
v___x_2013_ = lean_box(0);
lean_inc(v_head_2011_);
lean_inc_ref(v_c_2006_);
v___x_2017_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2006_, v_head_2011_);
if (lean_obj_tag(v___x_2017_) == 0)
{
v___y_2015_ = v___x_2017_;
goto v___jp_2014_;
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2017_, 1);
v___x_2019_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_2020_ = l_Lasm_UI_Runtime_report(v___x_2019_, v_a_2018_);
v___y_2015_ = v___x_2020_;
goto v___jp_2014_;
}
v___jp_2014_:
{
if (lean_obj_tag(v___y_2015_) == 0)
{
lean_dec_ref_known(v___y_2015_, 1);
v_as_x27_2007_ = v_tail_2012_;
v_b_2008_ = v___x_2013_;
goto _start;
}
else
{
lean_dec_ref(v_c_2006_);
return v___y_2015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_2021_, lean_object* v_c_2022_){
_start:
{
lean_object* v___x_2024_; uint8_t v___x_2025_; lean_object* v___x_2026_; lean_object* v_model_2027_; lean_object* v_live_2028_; lean_object* v_next_2029_; lean_object* v_tables_2030_; uint8_t v_scheduled_2031_; lean_object* v_queue_2032_; uint8_t v_busy_2033_; lean_object* v_subs_2034_; lean_object* v_handlers_2035_; lean_object* v_nextSub_2036_; lean_object* v_touched_2037_; lean_object* v_ports_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2060_; 
v___x_2024_ = lean_box(0);
v___x_2025_ = 1;
v___x_2026_ = lean_st_ref_get(v___x_2021_);
v_model_2027_ = lean_ctor_get(v___x_2026_, 0);
v_live_2028_ = lean_ctor_get(v___x_2026_, 1);
v_next_2029_ = lean_ctor_get(v___x_2026_, 2);
v_tables_2030_ = lean_ctor_get(v___x_2026_, 3);
v_scheduled_2031_ = lean_ctor_get_uint8(v___x_2026_, sizeof(void*)*10 + 1);
v_queue_2032_ = lean_ctor_get(v___x_2026_, 4);
v_busy_2033_ = lean_ctor_get_uint8(v___x_2026_, sizeof(void*)*10 + 2);
v_subs_2034_ = lean_ctor_get(v___x_2026_, 5);
v_handlers_2035_ = lean_ctor_get(v___x_2026_, 6);
v_nextSub_2036_ = lean_ctor_get(v___x_2026_, 7);
v_touched_2037_ = lean_ctor_get(v___x_2026_, 8);
v_ports_2038_ = lean_ctor_get(v___x_2026_, 9);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2040_ = v___x_2026_;
v_isShared_2041_ = v_isSharedCheck_2060_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_ports_2038_);
lean_inc(v_touched_2037_);
lean_inc(v_nextSub_2036_);
lean_inc(v_handlers_2035_);
lean_inc(v_subs_2034_);
lean_inc(v_queue_2032_);
lean_inc(v_tables_2030_);
lean_inc(v_next_2029_);
lean_inc(v_live_2028_);
lean_inc(v_model_2027_);
lean_dec(v___x_2026_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2060_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; 
v___x_2042_ = lean_unsigned_to_nat(0u);
v___x_2043_ = lean_array_get_size(v_queue_2032_);
v___x_2044_ = lean_nat_dec_lt(v___x_2042_, v___x_2043_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2045_; 
lean_del_object(v___x_2040_);
lean_dec(v_ports_2038_);
lean_dec_ref(v_touched_2037_);
lean_dec(v_nextSub_2036_);
lean_dec_ref(v_handlers_2035_);
lean_dec_ref(v_subs_2034_);
lean_dec_ref(v_queue_2032_);
lean_dec_ref(v_tables_2030_);
lean_dec(v_next_2029_);
lean_dec(v_live_2028_);
lean_dec(v_model_2027_);
lean_dec_ref(v_c_2022_);
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2024_);
return v___x_2045_;
}
else
{
lean_object* v_app_2046_; lean_object* v_update_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v_fst_2050_; lean_object* v_snd_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
v_app_2046_ = lean_ctor_get(v_c_2022_, 0);
v_update_2047_ = lean_ctor_get(v_app_2046_, 1);
v___x_2048_ = lean_array_fget_borrowed(v_queue_2032_, v___x_2042_);
lean_inc_ref(v_update_2047_);
lean_inc(v___x_2048_);
v___x_2049_ = lean_apply_2(v_update_2047_, v___x_2048_, v_model_2027_);
v_fst_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_fst_2050_);
v_snd_2051_ = lean_ctor_get(v___x_2049_, 1);
lean_inc(v_snd_2051_);
lean_dec_ref(v___x_2049_);
v___x_2052_ = lean_unsigned_to_nat(1u);
v___x_2053_ = l_Array_extract___redArg(v_queue_2032_, v___x_2052_, v___x_2043_);
lean_dec_ref(v_queue_2032_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 4, v___x_2053_);
lean_ctor_set(v___x_2040_, 0, v_fst_2050_);
v___x_2055_ = v___x_2040_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_fst_2050_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v_live_2028_);
lean_ctor_set(v_reuseFailAlloc_2059_, 2, v_next_2029_);
lean_ctor_set(v_reuseFailAlloc_2059_, 3, v_tables_2030_);
lean_ctor_set(v_reuseFailAlloc_2059_, 4, v___x_2053_);
lean_ctor_set(v_reuseFailAlloc_2059_, 5, v_subs_2034_);
lean_ctor_set(v_reuseFailAlloc_2059_, 6, v_handlers_2035_);
lean_ctor_set(v_reuseFailAlloc_2059_, 7, v_nextSub_2036_);
lean_ctor_set(v_reuseFailAlloc_2059_, 8, v_touched_2037_);
lean_ctor_set(v_reuseFailAlloc_2059_, 9, v_ports_2038_);
lean_ctor_set_uint8(v_reuseFailAlloc_2059_, sizeof(void*)*10 + 1, v_scheduled_2031_);
lean_ctor_set_uint8(v_reuseFailAlloc_2059_, sizeof(void*)*10 + 2, v_busy_2033_);
v___x_2055_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_ctor_set_uint8(v___x_2055_, sizeof(void*)*10, v___x_2025_);
v___x_2056_ = lean_st_ref_swap(v___x_2021_, v___x_2055_);
lean_dec(v___x_2056_);
lean_inc_ref(v_c_2022_);
v___x_2057_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2022_, v_snd_2051_, v___x_2024_);
lean_dec(v_snd_2051_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_dec_ref_known(v___x_2057_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_2022_);
return v___x_2057_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2061_ = lean_box(0);
v___x_2062_ = lean_unsigned_to_nat(16u);
v___x_2063_ = lean_mk_array(v___x_2062_, v___x_2061_);
return v___x_2063_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2064_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_2065_ = lean_unsigned_to_nat(0u);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___x_2064_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_2067_, lean_object* v_c_2068_, lean_object* v_as_x27_2069_, lean_object* v_b_2070_){
_start:
{
if (lean_obj_tag(v_as_x27_2069_) == 0)
{
lean_object* v___x_2072_; 
lean_dec_ref(v_c_2068_);
lean_dec(v_v_2067_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_b_2070_);
return v___x_2072_;
}
else
{
lean_object* v_head_2073_; lean_object* v_tail_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_head_2073_ = lean_ctor_get(v_as_x27_2069_, 0);
v_tail_2074_ = lean_ctor_get(v_as_x27_2069_, 1);
v___x_2075_ = lean_box(0);
v___x_2076_ = lean_unsigned_to_nat(1u);
v___x_2077_ = lean_mk_empty_array_with_capacity(v___x_2076_);
lean_inc(v_v_2067_);
v___x_2078_ = lean_array_push(v___x_2077_, v_v_2067_);
lean_inc(v_head_2073_);
v___x_2079_ = lean_apply_1(v_head_2073_, v___x_2078_);
if (lean_obj_tag(v___x_2079_) == 1)
{
lean_object* v_val_2080_; lean_object* v___x_2081_; 
v_val_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_val_2080_);
lean_dec_ref_known(v___x_2079_, 1);
lean_inc_ref(v_c_2068_);
v___x_2081_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2068_, v_val_2080_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_dec_ref_known(v___x_2081_, 1);
v_as_x27_2069_ = v_tail_2074_;
v_b_2070_ = v___x_2075_;
goto _start;
}
else
{
lean_dec_ref(v_c_2068_);
lean_dec(v_v_2067_);
return v___x_2081_;
}
}
else
{
lean_dec(v___x_2079_);
v_as_x27_2069_ = v_tail_2074_;
v_b_2070_ = v___x_2075_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_2084_, lean_object* v_name_2085_, lean_object* v_c_2086_, lean_object* v_v_2087_){
_start:
{
lean_object* v___x_2089_; lean_object* v_subs_2090_; lean_object* v_handlers_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2089_ = lean_st_ref_get(v_ref_2084_);
v_subs_2090_ = lean_ctor_get(v___x_2089_, 5);
lean_inc_ref(v_subs_2090_);
v_handlers_2091_ = lean_ctor_get(v___x_2089_, 6);
lean_inc_ref(v_handlers_2091_);
lean_dec(v___x_2089_);
v___x_2092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_name_2085_);
v___x_2093_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_2090_, v___x_2092_);
lean_dec_ref(v_subs_2090_);
if (lean_obj_tag(v___x_2093_) == 1)
{
lean_object* v_val_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v_val_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_val_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = lean_box(0);
v___x_2096_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2091_, v_val_2094_, v___x_2095_);
lean_dec(v_val_2094_);
lean_dec_ref(v_handlers_2091_);
v___x_2097_ = lean_box(0);
lean_inc_ref(v_c_2086_);
v___x_2098_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2087_, v_c_2086_, v___x_2096_, v___x_2097_);
lean_dec(v___x_2096_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v___x_2099_; 
lean_dec_ref_known(v___x_2098_, 1);
v___x_2099_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2086_);
lean_dec_ref(v_c_2086_);
return v___x_2099_;
}
else
{
lean_dec_ref(v_c_2086_);
return v___x_2098_;
}
}
else
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
lean_dec(v___x_2093_);
lean_dec_ref(v_handlers_2091_);
lean_dec(v_v_2087_);
lean_dec_ref(v_c_2086_);
v___x_2100_ = lean_box(0);
v___x_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
return v___x_2101_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_2102_, lean_object* v_name_2103_, lean_object* v_c_2104_, lean_object* v_v_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_2102_, v_name_2103_, v_c_2104_, v_v_2105_);
lean_dec(v_ref_2102_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_2108_, lean_object* v_name_2109_){
_start:
{
lean_object* v_ref_2111_; lean_object* v___f_2112_; lean_object* v___x_2113_; lean_object* v_model_2114_; lean_object* v_live_2115_; lean_object* v_next_2116_; lean_object* v_tables_2117_; uint8_t v_dirty_2118_; uint8_t v_scheduled_2119_; lean_object* v_queue_2120_; uint8_t v_busy_2121_; lean_object* v_subs_2122_; lean_object* v_handlers_2123_; lean_object* v_nextSub_2124_; lean_object* v_touched_2125_; lean_object* v_ports_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2146_; 
v_ref_2111_ = lean_ctor_get(v_c_2108_, 1);
lean_inc_n(v_ref_2111_, 2);
lean_inc_ref(v_name_2109_);
v___f_2112_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2112_, 0, v_ref_2111_);
lean_closure_set(v___f_2112_, 1, v_name_2109_);
lean_closure_set(v___f_2112_, 2, v_c_2108_);
v___x_2113_ = lean_st_ref_take(v_ref_2111_);
v_model_2114_ = lean_ctor_get(v___x_2113_, 0);
v_live_2115_ = lean_ctor_get(v___x_2113_, 1);
v_next_2116_ = lean_ctor_get(v___x_2113_, 2);
v_tables_2117_ = lean_ctor_get(v___x_2113_, 3);
v_dirty_2118_ = lean_ctor_get_uint8(v___x_2113_, sizeof(void*)*10);
v_scheduled_2119_ = lean_ctor_get_uint8(v___x_2113_, sizeof(void*)*10 + 1);
v_queue_2120_ = lean_ctor_get(v___x_2113_, 4);
v_busy_2121_ = lean_ctor_get_uint8(v___x_2113_, sizeof(void*)*10 + 2);
v_subs_2122_ = lean_ctor_get(v___x_2113_, 5);
v_handlers_2123_ = lean_ctor_get(v___x_2113_, 6);
v_nextSub_2124_ = lean_ctor_get(v___x_2113_, 7);
v_touched_2125_ = lean_ctor_get(v___x_2113_, 8);
v_ports_2126_ = lean_ctor_get(v___x_2113_, 9);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2128_ = v___x_2113_;
v_isShared_2129_ = v_isSharedCheck_2146_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_ports_2126_);
lean_inc(v_touched_2125_);
lean_inc(v_nextSub_2124_);
lean_inc(v_handlers_2123_);
lean_inc(v_subs_2122_);
lean_inc(v_queue_2120_);
lean_inc(v_tables_2117_);
lean_inc(v_next_2116_);
lean_inc(v_live_2115_);
lean_inc(v_model_2114_);
lean_dec(v___x_2113_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2146_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2130_; lean_object* v___x_2132_; 
lean_inc_ref(v_name_2109_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v_name_2109_);
lean_ctor_set(v___x_2130_, 1, v_ports_2126_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 9, v___x_2130_);
v___x_2132_ = v___x_2128_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_model_2114_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_live_2115_);
lean_ctor_set(v_reuseFailAlloc_2145_, 2, v_next_2116_);
lean_ctor_set(v_reuseFailAlloc_2145_, 3, v_tables_2117_);
lean_ctor_set(v_reuseFailAlloc_2145_, 4, v_queue_2120_);
lean_ctor_set(v_reuseFailAlloc_2145_, 5, v_subs_2122_);
lean_ctor_set(v_reuseFailAlloc_2145_, 6, v_handlers_2123_);
lean_ctor_set(v_reuseFailAlloc_2145_, 7, v_nextSub_2124_);
lean_ctor_set(v_reuseFailAlloc_2145_, 8, v_touched_2125_);
lean_ctor_set(v_reuseFailAlloc_2145_, 9, v___x_2130_);
lean_ctor_set_uint8(v_reuseFailAlloc_2145_, sizeof(void*)*10, v_dirty_2118_);
lean_ctor_set_uint8(v_reuseFailAlloc_2145_, sizeof(void*)*10 + 1, v_scheduled_2119_);
lean_ctor_set_uint8(v_reuseFailAlloc_2145_, sizeof(void*)*10 + 2, v_busy_2121_);
v___x_2132_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_st_ref_put(v_ref_2111_, v___x_2132_);
lean_dec(v_ref_2111_);
v___x_2134_ = l_Lasm_Web_App_Raw_port(v_name_2109_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = l_Lasm_Web_App_Port_subscribe(v_a_2135_, v___f_2112_);
return v___x_2136_;
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v___f_2112_);
v_a_2137_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2134_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2134_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_2147_, lean_object* v_c_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
if (lean_obj_tag(v_a_2149_) == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_dec_ref(v_c_2148_);
v___x_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2152_, 0, v_a_2150_);
v___x_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2152_);
return v___x_2153_;
}
else
{
lean_object* v_snd_2154_; lean_object* v_key_2155_; lean_object* v_value_2156_; lean_object* v_tail_2157_; lean_object* v_fst_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2228_; 
v_snd_2154_ = lean_ctor_get(v_a_2150_, 1);
lean_inc(v_snd_2154_);
v_key_2155_ = lean_ctor_get(v_a_2149_, 0);
lean_inc(v_key_2155_);
v_value_2156_ = lean_ctor_get(v_a_2149_, 1);
lean_inc(v_value_2156_);
v_tail_2157_ = lean_ctor_get(v_a_2149_, 2);
lean_inc(v_tail_2157_);
lean_dec_ref_known(v_a_2149_, 3);
v_fst_2158_ = lean_ctor_get(v_a_2150_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_a_2150_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v_a_2150_, 1);
lean_dec(v_unused_2229_);
v___x_2160_ = v_a_2150_;
v_isShared_2161_ = v_isSharedCheck_2228_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_fst_2158_);
lean_dec(v_a_2150_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2228_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v_fst_2162_; lean_object* v_snd_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2227_; 
v_fst_2162_ = lean_ctor_get(v_snd_2154_, 0);
v_snd_2163_ = lean_ctor_get(v_snd_2154_, 1);
v_isSharedCheck_2227_ = !lean_is_exclusive(v_snd_2154_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2165_ = v_snd_2154_;
v_isShared_2166_ = v_isSharedCheck_2227_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_snd_2163_);
lean_inc(v_fst_2162_);
lean_dec(v_snd_2154_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2227_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; 
lean_inc(v_key_2155_);
v___x_2167_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2158_, v_key_2155_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = lean_nat_add(v_snd_2163_, v___x_2168_);
lean_inc_n(v_snd_2163_, 2);
lean_inc(v_key_2155_);
v___x_2170_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2158_, v_key_2155_, v_snd_2163_);
v___x_2171_ = l_List_reverse___redArg(v_value_2156_);
v___x_2172_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2162_, v_snd_2163_, v___x_2171_);
if (lean_obj_tag(v_key_2155_) == 4)
{
lean_object* v_name_2173_; lean_object* v___x_2174_; lean_object* v_ports_2175_; uint8_t v___x_2176_; 
lean_dec(v_snd_2163_);
v_name_2173_ = lean_ctor_get(v_key_2155_, 0);
lean_inc_ref(v_name_2173_);
lean_dec_ref_known(v_key_2155_, 1);
v___x_2174_ = lean_st_ref_get(v___x_2147_);
v_ports_2175_ = lean_ctor_get(v___x_2174_, 9);
lean_inc(v_ports_2175_);
lean_dec(v___x_2174_);
v___x_2176_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2173_, v_ports_2175_);
lean_dec(v_ports_2175_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; 
lean_inc_ref(v_c_2148_);
v___x_2177_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2148_, v_name_2173_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v___x_2179_; 
lean_dec_ref_known(v___x_2177_, 1);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v___x_2169_);
lean_ctor_set(v___x_2165_, 0, v___x_2172_);
v___x_2179_ = v___x_2165_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v___x_2169_);
v___x_2179_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
lean_object* v___x_2181_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2179_);
lean_ctor_set(v___x_2160_, 0, v___x_2170_);
v___x_2181_ = v___x_2160_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2170_);
lean_ctor_set(v_reuseFailAlloc_2183_, 1, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
v_a_2149_ = v_tail_2157_;
v_a_2150_ = v___x_2181_;
goto _start;
}
}
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
lean_dec_ref(v___x_2172_);
lean_dec_ref(v___x_2170_);
lean_dec(v___x_2169_);
lean_del_object(v___x_2165_);
lean_del_object(v___x_2160_);
lean_dec(v_tail_2157_);
lean_dec_ref(v_c_2148_);
v_a_2185_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2177_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2177_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
else
{
lean_object* v___x_2194_; 
lean_dec_ref(v_name_2173_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v___x_2169_);
lean_ctor_set(v___x_2165_, 0, v___x_2172_);
v___x_2194_ = v___x_2165_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v___x_2169_);
v___x_2194_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2196_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2194_);
lean_ctor_set(v___x_2160_, 0, v___x_2170_);
v___x_2196_ = v___x_2160_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2170_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v___x_2194_);
v___x_2196_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
v_a_2149_ = v_tail_2157_;
v_a_2150_ = v___x_2196_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = l_Lasm_UI_Runtime_specData(v_key_2155_);
v___x_2201_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2163_, v___x_2200_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v___x_2203_; 
lean_dec_ref_known(v___x_2201_, 1);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v___x_2169_);
lean_ctor_set(v___x_2165_, 0, v___x_2172_);
v___x_2203_ = v___x_2165_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2208_, 1, v___x_2169_);
v___x_2203_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2205_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2203_);
lean_ctor_set(v___x_2160_, 0, v___x_2170_);
v___x_2205_ = v___x_2160_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2170_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v___x_2203_);
v___x_2205_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
v_a_2149_ = v_tail_2157_;
v_a_2150_ = v___x_2205_;
goto _start;
}
}
}
else
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2216_; 
lean_dec_ref(v___x_2172_);
lean_dec_ref(v___x_2170_);
lean_dec(v___x_2169_);
lean_del_object(v___x_2165_);
lean_del_object(v___x_2160_);
lean_dec(v_tail_2157_);
lean_dec_ref(v_c_2148_);
v_a_2209_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2211_ = v___x_2201_;
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2201_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2209_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
}
else
{
lean_object* v_val_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_dec(v_key_2155_);
v_val_2217_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_val_2217_);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2218_ = l_List_reverse___redArg(v_value_2156_);
v___x_2219_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2162_, v_val_2217_, v___x_2218_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2219_);
v___x_2221_ = v___x_2165_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_snd_2163_);
v___x_2221_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2223_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2221_);
v___x_2223_ = v___x_2160_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_fst_2158_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
v_a_2149_ = v_tail_2157_;
v_a_2150_ = v___x_2223_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2230_, lean_object* v_c_2231_, lean_object* v_as_2232_, size_t v_sz_2233_, size_t v_i_2234_, lean_object* v_b_2235_){
_start:
{
uint8_t v___x_2237_; 
v___x_2237_ = lean_usize_dec_lt(v_i_2234_, v_sz_2233_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2238_; 
lean_dec_ref(v_c_2231_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_b_2235_);
return v___x_2238_;
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2240_; 
v_a_2239_ = lean_array_uget_borrowed(v_as_2232_, v_i_2234_);
lean_inc(v_a_2239_);
lean_inc_ref(v_c_2231_);
v___x_2240_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2230_, v_c_2231_, v_a_2239_, v_b_2235_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2253_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2243_ = v___x_2240_;
v_isShared_2244_ = v_isSharedCheck_2253_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2240_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2253_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
if (lean_obj_tag(v_a_2241_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; 
lean_dec_ref(v_c_2231_);
v_a_2245_ = lean_ctor_get(v_a_2241_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v_a_2241_, 1);
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 0, v_a_2245_);
v___x_2247_ = v___x_2243_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2245_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
else
{
lean_object* v_a_2249_; size_t v___x_2250_; size_t v___x_2251_; 
lean_del_object(v___x_2243_);
v_a_2249_ = lean_ctor_get(v_a_2241_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v_a_2241_, 1);
v___x_2250_ = ((size_t)1ULL);
v___x_2251_ = lean_usize_add(v_i_2234_, v___x_2250_);
v_i_2234_ = v___x_2251_;
v_b_2235_ = v_a_2249_;
goto _start;
}
}
}
else
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
lean_dec_ref(v_c_2231_);
v_a_2254_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v___x_2240_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v___x_2240_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2262_){
_start:
{
lean_object* v_app_2264_; lean_object* v_ref_2265_; lean_object* v___x_2266_; lean_object* v_subscriptions_2267_; lean_object* v_model_2268_; lean_object* v_subs_2269_; lean_object* v_nextSub_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_app_2264_ = lean_ctor_get(v_c_2262_, 0);
v_ref_2265_ = lean_ctor_get(v_c_2262_, 1);
lean_inc(v_ref_2265_);
v___x_2266_ = lean_st_ref_get(v_ref_2265_);
v_subscriptions_2267_ = lean_ctor_get(v_app_2264_, 3);
v_model_2268_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_model_2268_);
v_subs_2269_ = lean_ctor_get(v___x_2266_, 5);
lean_inc_ref(v_subs_2269_);
v_nextSub_2270_ = lean_ctor_get(v___x_2266_, 7);
lean_inc(v_nextSub_2270_);
lean_dec(v___x_2266_);
lean_inc_ref(v_subscriptions_2267_);
v___x_2271_ = lean_apply_1(v_subscriptions_2267_, v_model_2268_);
v___x_2272_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2273_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2271_, v___x_2272_);
lean_dec(v___x_2271_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v_buckets_2275_; size_t v_sz_2276_; size_t v___x_2277_; lean_object* v___x_2278_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v_buckets_2275_ = lean_ctor_get(v_subs_2269_, 1);
lean_inc_ref(v_buckets_2275_);
v_sz_2276_ = lean_array_size(v_buckets_2275_);
v___x_2277_ = ((size_t)0ULL);
v___x_2278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2274_, v_buckets_2275_, v_sz_2276_, v___x_2277_, v_subs_2269_);
lean_dec_ref(v_buckets_2275_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v_buckets_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2332_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
v_buckets_2280_ = lean_ctor_get(v_a_2274_, 1);
v_isSharedCheck_2332_ = !lean_is_exclusive(v_a_2274_);
if (v_isSharedCheck_2332_ == 0)
{
lean_object* v_unused_2333_; 
v_unused_2333_ = lean_ctor_get(v_a_2274_, 0);
lean_dec(v_unused_2333_);
v___x_2282_ = v_a_2274_;
v_isShared_2283_ = v_isSharedCheck_2332_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_buckets_2280_);
lean_dec(v_a_2274_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2332_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 1, v_nextSub_2270_);
lean_ctor_set(v___x_2282_, 0, v___x_2272_);
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2272_);
lean_ctor_set(v_reuseFailAlloc_2331_, 1, v_nextSub_2270_);
v___x_2285_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2286_; size_t v_sz_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v_a_2279_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v_sz_2287_ = lean_array_size(v_buckets_2280_);
v___x_2288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2265_, v_c_2262_, v_buckets_2280_, v_sz_2287_, v___x_2277_, v___x_2286_);
lean_dec_ref(v_buckets_2280_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2322_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2322_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2322_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v_snd_2293_; lean_object* v_fst_2294_; lean_object* v_fst_2295_; lean_object* v_snd_2296_; lean_object* v___x_2297_; lean_object* v_model_2298_; lean_object* v_live_2299_; lean_object* v_next_2300_; lean_object* v_tables_2301_; uint8_t v_dirty_2302_; uint8_t v_scheduled_2303_; lean_object* v_queue_2304_; uint8_t v_busy_2305_; lean_object* v_touched_2306_; lean_object* v_ports_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2318_; 
v_snd_2293_ = lean_ctor_get(v_a_2289_, 1);
lean_inc(v_snd_2293_);
v_fst_2294_ = lean_ctor_get(v_a_2289_, 0);
lean_inc(v_fst_2294_);
lean_dec(v_a_2289_);
v_fst_2295_ = lean_ctor_get(v_snd_2293_, 0);
lean_inc(v_fst_2295_);
v_snd_2296_ = lean_ctor_get(v_snd_2293_, 1);
lean_inc(v_snd_2296_);
lean_dec(v_snd_2293_);
v___x_2297_ = lean_st_ref_take(v_ref_2265_);
v_model_2298_ = lean_ctor_get(v___x_2297_, 0);
v_live_2299_ = lean_ctor_get(v___x_2297_, 1);
v_next_2300_ = lean_ctor_get(v___x_2297_, 2);
v_tables_2301_ = lean_ctor_get(v___x_2297_, 3);
v_dirty_2302_ = lean_ctor_get_uint8(v___x_2297_, sizeof(void*)*10);
v_scheduled_2303_ = lean_ctor_get_uint8(v___x_2297_, sizeof(void*)*10 + 1);
v_queue_2304_ = lean_ctor_get(v___x_2297_, 4);
v_busy_2305_ = lean_ctor_get_uint8(v___x_2297_, sizeof(void*)*10 + 2);
v_touched_2306_ = lean_ctor_get(v___x_2297_, 8);
v_ports_2307_ = lean_ctor_get(v___x_2297_, 9);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; lean_object* v_unused_2320_; lean_object* v_unused_2321_; 
v_unused_2319_ = lean_ctor_get(v___x_2297_, 7);
lean_dec(v_unused_2319_);
v_unused_2320_ = lean_ctor_get(v___x_2297_, 6);
lean_dec(v_unused_2320_);
v_unused_2321_ = lean_ctor_get(v___x_2297_, 5);
lean_dec(v_unused_2321_);
v___x_2309_ = v___x_2297_;
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_ports_2307_);
lean_inc(v_touched_2306_);
lean_inc(v_queue_2304_);
lean_inc(v_tables_2301_);
lean_inc(v_next_2300_);
lean_inc(v_live_2299_);
lean_inc(v_model_2298_);
lean_dec(v___x_2297_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 7, v_snd_2296_);
lean_ctor_set(v___x_2309_, 6, v_fst_2295_);
lean_ctor_set(v___x_2309_, 5, v_fst_2294_);
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_model_2298_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v_live_2299_);
lean_ctor_set(v_reuseFailAlloc_2317_, 2, v_next_2300_);
lean_ctor_set(v_reuseFailAlloc_2317_, 3, v_tables_2301_);
lean_ctor_set(v_reuseFailAlloc_2317_, 4, v_queue_2304_);
lean_ctor_set(v_reuseFailAlloc_2317_, 5, v_fst_2294_);
lean_ctor_set(v_reuseFailAlloc_2317_, 6, v_fst_2295_);
lean_ctor_set(v_reuseFailAlloc_2317_, 7, v_snd_2296_);
lean_ctor_set(v_reuseFailAlloc_2317_, 8, v_touched_2306_);
lean_ctor_set(v_reuseFailAlloc_2317_, 9, v_ports_2307_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*10, v_dirty_2302_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*10 + 1, v_scheduled_2303_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*10 + 2, v_busy_2305_);
v___x_2312_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2313_ = lean_st_ref_put(v_ref_2265_, v___x_2312_);
lean_dec(v_ref_2265_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 0, v___x_2313_);
v___x_2315_ = v___x_2291_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_dec(v_ref_2265_);
v_a_2323_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2288_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2288_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
}
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
lean_dec(v_a_2274_);
lean_dec(v_nextSub_2270_);
lean_dec(v_ref_2265_);
lean_dec_ref(v_c_2262_);
v_a_2334_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2336_ = v___x_2278_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2278_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_a_2334_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
lean_dec(v_nextSub_2270_);
lean_dec_ref(v_subs_2269_);
lean_dec(v_ref_2265_);
lean_dec_ref(v_c_2262_);
v_a_2342_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2273_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2273_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2350_, lean_object* v_msg_2351_){
_start:
{
lean_object* v_ref_2353_; lean_object* v___x_2354_; lean_object* v_model_2355_; lean_object* v_live_2356_; lean_object* v_next_2357_; lean_object* v_tables_2358_; uint8_t v_dirty_2359_; uint8_t v_scheduled_2360_; lean_object* v_queue_2361_; uint8_t v_busy_2362_; lean_object* v_subs_2363_; lean_object* v_handlers_2364_; lean_object* v_nextSub_2365_; lean_object* v_touched_2366_; lean_object* v_ports_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2428_; 
v_ref_2353_ = lean_ctor_get(v_c_2350_, 1);
lean_inc(v_ref_2353_);
v___x_2354_ = lean_st_ref_take(v_ref_2353_);
v_model_2355_ = lean_ctor_get(v___x_2354_, 0);
v_live_2356_ = lean_ctor_get(v___x_2354_, 1);
v_next_2357_ = lean_ctor_get(v___x_2354_, 2);
v_tables_2358_ = lean_ctor_get(v___x_2354_, 3);
v_dirty_2359_ = lean_ctor_get_uint8(v___x_2354_, sizeof(void*)*10);
v_scheduled_2360_ = lean_ctor_get_uint8(v___x_2354_, sizeof(void*)*10 + 1);
v_queue_2361_ = lean_ctor_get(v___x_2354_, 4);
v_busy_2362_ = lean_ctor_get_uint8(v___x_2354_, sizeof(void*)*10 + 2);
v_subs_2363_ = lean_ctor_get(v___x_2354_, 5);
v_handlers_2364_ = lean_ctor_get(v___x_2354_, 6);
v_nextSub_2365_ = lean_ctor_get(v___x_2354_, 7);
v_touched_2366_ = lean_ctor_get(v___x_2354_, 8);
v_ports_2367_ = lean_ctor_get(v___x_2354_, 9);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2369_ = v___x_2354_;
v_isShared_2370_ = v_isSharedCheck_2428_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_ports_2367_);
lean_inc(v_touched_2366_);
lean_inc(v_nextSub_2365_);
lean_inc(v_handlers_2364_);
lean_inc(v_subs_2363_);
lean_inc(v_queue_2361_);
lean_inc(v_tables_2358_);
lean_inc(v_next_2357_);
lean_inc(v_live_2356_);
lean_inc(v_model_2355_);
lean_dec(v___x_2354_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2428_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2371_ = lean_array_push(v_queue_2361_, v_msg_2351_);
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 4, v___x_2371_);
v___x_2373_ = v___x_2369_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_model_2355_);
lean_ctor_set(v_reuseFailAlloc_2427_, 1, v_live_2356_);
lean_ctor_set(v_reuseFailAlloc_2427_, 2, v_next_2357_);
lean_ctor_set(v_reuseFailAlloc_2427_, 3, v_tables_2358_);
lean_ctor_set(v_reuseFailAlloc_2427_, 4, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2427_, 5, v_subs_2363_);
lean_ctor_set(v_reuseFailAlloc_2427_, 6, v_handlers_2364_);
lean_ctor_set(v_reuseFailAlloc_2427_, 7, v_nextSub_2365_);
lean_ctor_set(v_reuseFailAlloc_2427_, 8, v_touched_2366_);
lean_ctor_set(v_reuseFailAlloc_2427_, 9, v_ports_2367_);
lean_ctor_set_uint8(v_reuseFailAlloc_2427_, sizeof(void*)*10, v_dirty_2359_);
lean_ctor_set_uint8(v_reuseFailAlloc_2427_, sizeof(void*)*10 + 1, v_scheduled_2360_);
lean_ctor_set_uint8(v_reuseFailAlloc_2427_, sizeof(void*)*10 + 2, v_busy_2362_);
v___x_2373_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v_busy_2376_; 
v___x_2374_ = lean_st_ref_put(v_ref_2353_, v___x_2373_);
v___x_2375_ = lean_st_ref_get(v_ref_2353_);
v_busy_2376_ = lean_ctor_get_uint8(v___x_2375_, sizeof(void*)*10 + 2);
lean_dec(v___x_2375_);
if (v_busy_2376_ == 0)
{
lean_object* v___y_2378_; uint8_t v___x_2401_; lean_object* v___x_2402_; lean_object* v_model_2403_; lean_object* v_live_2404_; lean_object* v_next_2405_; lean_object* v_tables_2406_; uint8_t v_dirty_2407_; uint8_t v_scheduled_2408_; lean_object* v_queue_2409_; lean_object* v_subs_2410_; lean_object* v_handlers_2411_; lean_object* v_nextSub_2412_; lean_object* v_touched_2413_; lean_object* v_ports_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2424_; 
v___x_2401_ = 1;
v___x_2402_ = lean_st_ref_take(v_ref_2353_);
v_model_2403_ = lean_ctor_get(v___x_2402_, 0);
v_live_2404_ = lean_ctor_get(v___x_2402_, 1);
v_next_2405_ = lean_ctor_get(v___x_2402_, 2);
v_tables_2406_ = lean_ctor_get(v___x_2402_, 3);
v_dirty_2407_ = lean_ctor_get_uint8(v___x_2402_, sizeof(void*)*10);
v_scheduled_2408_ = lean_ctor_get_uint8(v___x_2402_, sizeof(void*)*10 + 1);
v_queue_2409_ = lean_ctor_get(v___x_2402_, 4);
v_subs_2410_ = lean_ctor_get(v___x_2402_, 5);
v_handlers_2411_ = lean_ctor_get(v___x_2402_, 6);
v_nextSub_2412_ = lean_ctor_get(v___x_2402_, 7);
v_touched_2413_ = lean_ctor_get(v___x_2402_, 8);
v_ports_2414_ = lean_ctor_get(v___x_2402_, 9);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2416_ = v___x_2402_;
v_isShared_2417_ = v_isSharedCheck_2424_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_ports_2414_);
lean_inc(v_touched_2413_);
lean_inc(v_nextSub_2412_);
lean_inc(v_handlers_2411_);
lean_inc(v_subs_2410_);
lean_inc(v_queue_2409_);
lean_inc(v_tables_2406_);
lean_inc(v_next_2405_);
lean_inc(v_live_2404_);
lean_inc(v_model_2403_);
lean_dec(v___x_2402_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2424_;
goto v_resetjp_2415_;
}
v___jp_2377_:
{
if (lean_obj_tag(v___y_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2389_; 
v_a_2379_ = lean_ctor_get(v___y_2378_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___y_2378_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2381_ = v___y_2378_;
v_isShared_2382_ = v_isSharedCheck_2389_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___y_2378_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2389_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2383_ = lean_st_ref_take(v_ref_2353_);
v___x_2384_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2376_, v___x_2383_);
v___x_2385_ = lean_st_ref_put(v_ref_2353_, v___x_2384_);
lean_dec(v_ref_2353_);
if (v_isShared_2382_ == 0)
{
v___x_2387_ = v___x_2381_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2379_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2400_; 
v_a_2390_ = lean_ctor_get(v___y_2378_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___y_2378_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2392_ = v___y_2378_;
v_isShared_2393_ = v_isSharedCheck_2400_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___y_2378_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2400_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2398_; 
v___x_2394_ = lean_st_ref_take(v_ref_2353_);
v___x_2395_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2376_, v___x_2394_);
v___x_2396_ = lean_st_ref_put(v_ref_2353_, v___x_2395_);
lean_dec(v_ref_2353_);
if (v_isShared_2393_ == 0)
{
v___x_2398_ = v___x_2392_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2390_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_model_2403_);
lean_ctor_set(v_reuseFailAlloc_2423_, 1, v_live_2404_);
lean_ctor_set(v_reuseFailAlloc_2423_, 2, v_next_2405_);
lean_ctor_set(v_reuseFailAlloc_2423_, 3, v_tables_2406_);
lean_ctor_set(v_reuseFailAlloc_2423_, 4, v_queue_2409_);
lean_ctor_set(v_reuseFailAlloc_2423_, 5, v_subs_2410_);
lean_ctor_set(v_reuseFailAlloc_2423_, 6, v_handlers_2411_);
lean_ctor_set(v_reuseFailAlloc_2423_, 7, v_nextSub_2412_);
lean_ctor_set(v_reuseFailAlloc_2423_, 8, v_touched_2413_);
lean_ctor_set(v_reuseFailAlloc_2423_, 9, v_ports_2414_);
lean_ctor_set_uint8(v_reuseFailAlloc_2423_, sizeof(void*)*10, v_dirty_2407_);
lean_ctor_set_uint8(v_reuseFailAlloc_2423_, sizeof(void*)*10 + 1, v_scheduled_2408_);
v___x_2419_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_ctor_set_uint8(v___x_2419_, sizeof(void*)*10 + 2, v___x_2401_);
v___x_2420_ = lean_st_ref_put(v_ref_2353_, v___x_2419_);
lean_inc_ref(v_c_2350_);
v___x_2421_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2353_, v_c_2350_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v___x_2422_; 
lean_dec_ref_known(v___x_2421_, 1);
v___x_2422_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2350_);
v___y_2378_ = v___x_2422_;
goto v___jp_2377_;
}
else
{
lean_dec_ref(v_c_2350_);
v___y_2378_ = v___x_2421_;
goto v___jp_2377_;
}
}
}
}
else
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_dec(v_ref_2353_);
lean_dec_ref(v_c_2350_);
v___x_2425_ = lean_box(0);
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
return v___x_2426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2429_, lean_object* v_m_2430_){
_start:
{
lean_object* v___x_2432_; 
lean_inc_ref(v_c_2429_);
v___x_2432_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2429_, v_m_2430_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v___x_2433_; 
lean_dec_ref_known(v___x_2432_, 1);
v___x_2433_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2429_);
lean_dec_ref(v_c_2429_);
return v___x_2433_;
}
else
{
lean_dec_ref(v_c_2429_);
return v___x_2432_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2434_, lean_object* v_as_x27_2435_, lean_object* v_b_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2434_, v_as_x27_2435_, v_b_2436_);
lean_dec(v_as_x27_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2439_, lean_object* v_c_2440_, lean_object* v_as_x27_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2439_, v_c_2440_, v_as_x27_2441_, v_b_2442_);
lean_dec(v_as_x27_2441_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2445_, lean_object* v_c_2446_, lean_object* v_as_2447_, lean_object* v_sz_2448_, lean_object* v_i_2449_, lean_object* v_b_2450_, lean_object* v___y_2451_){
_start:
{
size_t v_sz_boxed_2452_; size_t v_i_boxed_2453_; lean_object* v_res_2454_; 
v_sz_boxed_2452_ = lean_unbox_usize(v_sz_2448_);
lean_dec(v_sz_2448_);
v_i_boxed_2453_ = lean_unbox_usize(v_i_2449_);
lean_dec(v_i_2449_);
v_res_2454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2445_, v_c_2446_, v_as_2447_, v_sz_boxed_2452_, v_i_boxed_2453_, v_b_2450_);
lean_dec_ref(v_as_2447_);
lean_dec(v___x_2445_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2455_, lean_object* v_name_2456_, lean_object* v_a_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2455_, v_name_2456_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2459_, lean_object* v_c_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2459_, v_c_2460_);
lean_dec(v___x_2459_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2463_, lean_object* v_c_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2463_, v_c_2464_, v_a_2465_, v_a_2466_);
lean_dec(v___x_2463_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2469_, lean_object* v_a_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2472_, lean_object* v_msg_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2472_, v_msg_2473_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2476_, lean_object* v_e_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2476_, v_e_2477_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2480_, lean_object* v_Model_2481_, lean_object* v_Msg_2482_, lean_object* v_c_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2483_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2486_, lean_object* v_Model_2487_, lean_object* v_Msg_2488_, lean_object* v_c_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2486_, v_Model_2487_, v_Msg_2488_, v_c_2489_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2492_, lean_object* v_Model_2493_, lean_object* v_Msg_2494_, lean_object* v_c_2495_, lean_object* v_name_2496_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2495_, v_name_2496_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2499_, lean_object* v_Model_2500_, lean_object* v_Msg_2501_, lean_object* v_c_2502_, lean_object* v_name_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2499_, v_Model_2500_, v_Msg_2501_, v_c_2502_, v_name_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2506_, lean_object* v_Model_2507_, lean_object* v_Msg_2508_, lean_object* v_c_2509_, lean_object* v_msg_2510_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2509_, v_msg_2510_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2513_, lean_object* v_Model_2514_, lean_object* v_Msg_2515_, lean_object* v_c_2516_, lean_object* v_msg_2517_, lean_object* v_a_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lasm_UI_Runtime_deliver(v_Flags_2513_, v_Model_2514_, v_Msg_2515_, v_c_2516_, v_msg_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2520_, lean_object* v_Model_2521_, lean_object* v_Msg_2522_, lean_object* v_c_2523_, lean_object* v_e_2524_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2523_, v_e_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2527_, lean_object* v_Model_2528_, lean_object* v_Msg_2529_, lean_object* v_c_2530_, lean_object* v_e_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lasm_UI_Runtime_perform(v_Flags_2527_, v_Model_2528_, v_Msg_2529_, v_c_2530_, v_e_2531_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2534_, lean_object* v_m_2535_, lean_object* v_a_2536_, lean_object* v_fallback_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2535_, v_a_2536_, v_fallback_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2539_, lean_object* v_m_2540_, lean_object* v_a_2541_, lean_object* v_fallback_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2539_, v_m_2540_, v_a_2541_, v_fallback_2542_);
lean_dec(v_fallback_2542_);
lean_dec_ref(v_m_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2544_, lean_object* v_m_2545_, lean_object* v_a_2546_, lean_object* v_b_2547_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2545_, v_a_2546_, v_b_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2549_, lean_object* v_as_2550_, lean_object* v_as_x27_2551_, lean_object* v_b_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2551_, v_b_2552_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2556_, lean_object* v_as_2557_, lean_object* v_as_x27_2558_, lean_object* v_b_2559_, lean_object* v_a_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2556_, v_as_2557_, v_as_x27_2558_, v_b_2559_, v_a_2560_);
lean_dec(v_as_x27_2558_);
lean_dec(v_as_2557_);
return v_res_2562_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2563_, lean_object* v_m_2564_, lean_object* v_a_2565_){
_start:
{
uint8_t v___x_2566_; 
v___x_2566_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2564_, v_a_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2567_, lean_object* v_m_2568_, lean_object* v_a_2569_){
_start:
{
uint8_t v_res_2570_; lean_object* v_r_2571_; 
v_res_2570_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2567_, v_m_2568_, v_a_2569_);
lean_dec_ref(v_m_2568_);
v_r_2571_ = lean_box(v_res_2570_);
return v_r_2571_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2572_, lean_object* v_m_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2573_, v_a_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v___x_2581_; 
v___x_2581_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2577_, v_a_2578_, v_a_2579_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec_ref(v_a_2583_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2588_, lean_object* v_m_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2589_, v_a_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2592_, lean_object* v_m_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2592_, v_m_2593_, v_a_2594_);
lean_dec_ref(v_m_2593_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2596_, lean_object* v_Model_2597_, lean_object* v___x_2598_, lean_object* v_Flags_2599_, lean_object* v_c_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2598_, v_c_2600_, v_a_2601_, v_a_2602_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2605_, lean_object* v_Model_2606_, lean_object* v___x_2607_, lean_object* v_Flags_2608_, lean_object* v_c_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2605_, v_Model_2606_, v___x_2607_, v_Flags_2608_, v_c_2609_, v_a_2610_, v_a_2611_);
lean_dec(v___x_2607_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2614_, lean_object* v_a_2615_, lean_object* v_as_2616_, size_t v_sz_2617_, size_t v_i_2618_, lean_object* v_b_2619_){
_start:
{
lean_object* v___x_2621_; 
v___x_2621_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2615_, v_as_2616_, v_sz_2617_, v_i_2618_, v_b_2619_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2622_, lean_object* v_a_2623_, lean_object* v_as_2624_, lean_object* v_sz_2625_, lean_object* v_i_2626_, lean_object* v_b_2627_, lean_object* v___y_2628_){
_start:
{
size_t v_sz_boxed_2629_; size_t v_i_boxed_2630_; lean_object* v_res_2631_; 
v_sz_boxed_2629_ = lean_unbox_usize(v_sz_2625_);
lean_dec(v_sz_2625_);
v_i_boxed_2630_ = lean_unbox_usize(v_i_2626_);
lean_dec(v_i_2626_);
v_res_2631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2622_, v_a_2623_, v_as_2624_, v_sz_boxed_2629_, v_i_boxed_2630_, v_b_2627_);
lean_dec_ref(v_as_2624_);
lean_dec_ref(v_a_2623_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2632_, lean_object* v_Model_2633_, lean_object* v___x_2634_, lean_object* v_Flags_2635_, lean_object* v_c_2636_, lean_object* v_as_2637_, size_t v_sz_2638_, size_t v_i_2639_, lean_object* v_b_2640_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2634_, v_c_2636_, v_as_2637_, v_sz_2638_, v_i_2639_, v_b_2640_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2643_, lean_object* v_Model_2644_, lean_object* v___x_2645_, lean_object* v_Flags_2646_, lean_object* v_c_2647_, lean_object* v_as_2648_, lean_object* v_sz_2649_, lean_object* v_i_2650_, lean_object* v_b_2651_, lean_object* v___y_2652_){
_start:
{
size_t v_sz_boxed_2653_; size_t v_i_boxed_2654_; lean_object* v_res_2655_; 
v_sz_boxed_2653_ = lean_unbox_usize(v_sz_2649_);
lean_dec(v_sz_2649_);
v_i_boxed_2654_ = lean_unbox_usize(v_i_2650_);
lean_dec(v_i_2650_);
v_res_2655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2643_, v_Model_2644_, v___x_2645_, v_Flags_2646_, v_c_2647_, v_as_2648_, v_sz_boxed_2653_, v_i_boxed_2654_, v_b_2651_);
lean_dec_ref(v_as_2648_);
lean_dec(v___x_2645_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2656_, lean_object* v_m_2657_, lean_object* v_a_2658_, lean_object* v_fallback_2659_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2657_, v_a_2658_, v_fallback_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2661_, lean_object* v_m_2662_, lean_object* v_a_2663_, lean_object* v_fallback_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2661_, v_m_2662_, v_a_2663_, v_fallback_2664_);
lean_dec(v_fallback_2664_);
lean_dec(v_a_2663_);
lean_dec_ref(v_m_2662_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2666_, lean_object* v_v_2667_, lean_object* v_Flags_2668_, lean_object* v_Model_2669_, lean_object* v_c_2670_, lean_object* v_as_2671_, lean_object* v_as_x27_2672_, lean_object* v_b_2673_, lean_object* v_a_2674_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2667_, v_c_2670_, v_as_x27_2672_, v_b_2673_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2677_, lean_object* v_v_2678_, lean_object* v_Flags_2679_, lean_object* v_Model_2680_, lean_object* v_c_2681_, lean_object* v_as_2682_, lean_object* v_as_x27_2683_, lean_object* v_b_2684_, lean_object* v_a_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2677_, v_v_2678_, v_Flags_2679_, v_Model_2680_, v_c_2681_, v_as_2682_, v_as_x27_2683_, v_b_2684_, v_a_2685_);
lean_dec(v_as_x27_2683_);
lean_dec(v_as_2682_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2688_, lean_object* v_Flags_2689_, lean_object* v_Model_2690_, lean_object* v_c_2691_, lean_object* v_as_2692_, lean_object* v_as_x27_2693_, lean_object* v_b_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2691_, v_as_x27_2693_, v_b_2694_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2698_, lean_object* v_Flags_2699_, lean_object* v_Model_2700_, lean_object* v_c_2701_, lean_object* v_as_2702_, lean_object* v_as_x27_2703_, lean_object* v_b_2704_, lean_object* v_a_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2698_, v_Flags_2699_, v_Model_2700_, v_c_2701_, v_as_2702_, v_as_x27_2703_, v_b_2704_, v_a_2705_);
lean_dec(v_as_x27_2703_);
lean_dec(v_as_2702_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2708_, lean_object* v_Msg_2709_, lean_object* v___x_2710_, lean_object* v_Flags_2711_, lean_object* v_c_2712_, lean_object* v_inst_2713_, lean_object* v_a_2714_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2710_, v_c_2712_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2717_, lean_object* v_Msg_2718_, lean_object* v___x_2719_, lean_object* v_Flags_2720_, lean_object* v_c_2721_, lean_object* v_inst_2722_, lean_object* v_a_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2717_, v_Msg_2718_, v___x_2719_, v_Flags_2720_, v_c_2721_, v_inst_2722_, v_a_2723_);
lean_dec(v___x_2719_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2726_, lean_object* v_a_2727_, lean_object* v_fallback_2728_, lean_object* v_x_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2727_, v_fallback_2728_, v_x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2731_, lean_object* v_a_2732_, lean_object* v_fallback_2733_, lean_object* v_x_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2731_, v_a_2732_, v_fallback_2733_, v_x_2734_);
lean_dec(v_fallback_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2736_, lean_object* v_a_2737_, lean_object* v_x_2738_){
_start:
{
uint8_t v___x_2739_; 
v___x_2739_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2737_, v_x_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2740_, lean_object* v_a_2741_, lean_object* v_x_2742_){
_start:
{
uint8_t v_res_2743_; lean_object* v_r_2744_; 
v_res_2743_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2740_, v_a_2741_, v_x_2742_);
v_r_2744_ = lean_box(v_res_2743_);
return v_r_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2745_, lean_object* v_data_2746_){
_start:
{
lean_object* v___x_2747_; 
v___x_2747_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2748_, lean_object* v_a_2749_, lean_object* v_b_2750_, lean_object* v_x_2751_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2749_, v_b_2750_, v_x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2753_, lean_object* v_a_2754_, lean_object* v_x_2755_){
_start:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2754_, v_x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2757_, lean_object* v_a_2758_, lean_object* v_x_2759_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2758_, v_x_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2761_, lean_object* v_a_2762_, lean_object* v_fallback_2763_, lean_object* v_x_2764_){
_start:
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2762_, v_fallback_2763_, v_x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2766_, lean_object* v_a_2767_, lean_object* v_fallback_2768_, lean_object* v_x_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2766_, v_a_2767_, v_fallback_2768_, v_x_2769_);
lean_dec(v_x_2769_);
lean_dec(v_fallback_2768_);
lean_dec(v_a_2767_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2771_, lean_object* v_i_2772_, lean_object* v_source_2773_, lean_object* v_target_2774_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2772_, v_source_2773_, v_target_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2776_, lean_object* v_x_2777_, lean_object* v_x_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2777_, v_x_2778_);
return v___x_2779_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2782_ = lean_box(0);
v___x_2783_ = lean_unsigned_to_nat(16u);
v___x_2784_ = lean_mk_array(v___x_2783_, v___x_2782_);
return v___x_2784_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2785_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2786_ = lean_unsigned_to_nat(0u);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
lean_ctor_set(v___x_2787_, 1, v___x_2785_);
return v___x_2787_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2788_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
lean_ctor_set(v___x_2789_, 2, v___x_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2790_){
_start:
{
lean_object* v_app_2792_; lean_object* v_ref_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2904_; 
v_app_2792_ = lean_ctor_get(v_c_2790_, 0);
v_ref_2793_ = lean_ctor_get(v_c_2790_, 1);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_c_2790_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2795_ = v_c_2790_;
v_isShared_2796_ = v_isSharedCheck_2904_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_ref_2793_);
lean_inc(v_app_2792_);
lean_dec(v_c_2790_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2904_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2797_; lean_object* v_model_2798_; lean_object* v_live_2799_; lean_object* v_next_2800_; lean_object* v_tables_2801_; uint8_t v_dirty_2802_; uint8_t v_scheduled_2803_; lean_object* v_queue_2804_; uint8_t v_busy_2805_; lean_object* v_subs_2806_; lean_object* v_handlers_2807_; lean_object* v_nextSub_2808_; lean_object* v_touched_2809_; lean_object* v_ports_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2903_; 
v___x_2797_ = lean_st_ref_take(v_ref_2793_);
v_model_2798_ = lean_ctor_get(v___x_2797_, 0);
v_live_2799_ = lean_ctor_get(v___x_2797_, 1);
v_next_2800_ = lean_ctor_get(v___x_2797_, 2);
v_tables_2801_ = lean_ctor_get(v___x_2797_, 3);
v_dirty_2802_ = lean_ctor_get_uint8(v___x_2797_, sizeof(void*)*10);
v_scheduled_2803_ = lean_ctor_get_uint8(v___x_2797_, sizeof(void*)*10 + 1);
v_queue_2804_ = lean_ctor_get(v___x_2797_, 4);
v_busy_2805_ = lean_ctor_get_uint8(v___x_2797_, sizeof(void*)*10 + 2);
v_subs_2806_ = lean_ctor_get(v___x_2797_, 5);
v_handlers_2807_ = lean_ctor_get(v___x_2797_, 6);
v_nextSub_2808_ = lean_ctor_get(v___x_2797_, 7);
v_touched_2809_ = lean_ctor_get(v___x_2797_, 8);
v_ports_2810_ = lean_ctor_get(v___x_2797_, 9);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2812_ = v___x_2797_;
v_isShared_2813_ = v_isSharedCheck_2903_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_ports_2810_);
lean_inc(v_touched_2809_);
lean_inc(v_nextSub_2808_);
lean_inc(v_handlers_2807_);
lean_inc(v_subs_2806_);
lean_inc(v_queue_2804_);
lean_inc(v_tables_2801_);
lean_inc(v_next_2800_);
lean_inc(v_live_2799_);
lean_inc(v_model_2798_);
lean_dec(v___x_2797_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2903_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2818_; 
v___x_2814_ = lean_box(0);
v___x_2815_ = lean_unsigned_to_nat(0u);
v___x_2816_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2800_);
lean_inc(v_model_2798_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 8, v___x_2816_);
lean_ctor_set(v___x_2812_, 1, v___x_2814_);
v___x_2818_ = v___x_2812_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_model_2798_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2902_, 2, v_next_2800_);
lean_ctor_set(v_reuseFailAlloc_2902_, 3, v_tables_2801_);
lean_ctor_set(v_reuseFailAlloc_2902_, 4, v_queue_2804_);
lean_ctor_set(v_reuseFailAlloc_2902_, 5, v_subs_2806_);
lean_ctor_set(v_reuseFailAlloc_2902_, 6, v_handlers_2807_);
lean_ctor_set(v_reuseFailAlloc_2902_, 7, v_nextSub_2808_);
lean_ctor_set(v_reuseFailAlloc_2902_, 8, v___x_2816_);
lean_ctor_set(v_reuseFailAlloc_2902_, 9, v_ports_2810_);
lean_ctor_set_uint8(v_reuseFailAlloc_2902_, sizeof(void*)*10, v_dirty_2802_);
lean_ctor_set_uint8(v_reuseFailAlloc_2902_, sizeof(void*)*10 + 1, v_scheduled_2803_);
lean_ctor_set_uint8(v_reuseFailAlloc_2902_, sizeof(void*)*10 + 2, v_busy_2805_);
v___x_2818_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; 
v___x_2819_ = lean_st_ref_put(v_ref_2793_, v___x_2818_);
if (v_dirty_2802_ == 0)
{
lean_object* v___x_2820_; lean_object* v_model_2821_; lean_object* v_next_2822_; lean_object* v_tables_2823_; uint8_t v_dirty_2824_; lean_object* v_queue_2825_; uint8_t v_busy_2826_; lean_object* v_subs_2827_; lean_object* v_handlers_2828_; lean_object* v_nextSub_2829_; lean_object* v_touched_2830_; lean_object* v_ports_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_touched_2809_);
lean_dec(v_next_2800_);
lean_dec(v_model_2798_);
lean_del_object(v___x_2795_);
lean_dec_ref(v_app_2792_);
v___x_2820_ = lean_st_ref_take(v_ref_2793_);
v_model_2821_ = lean_ctor_get(v___x_2820_, 0);
v_next_2822_ = lean_ctor_get(v___x_2820_, 2);
v_tables_2823_ = lean_ctor_get(v___x_2820_, 3);
v_dirty_2824_ = lean_ctor_get_uint8(v___x_2820_, sizeof(void*)*10);
v_queue_2825_ = lean_ctor_get(v___x_2820_, 4);
v_busy_2826_ = lean_ctor_get_uint8(v___x_2820_, sizeof(void*)*10 + 2);
v_subs_2827_ = lean_ctor_get(v___x_2820_, 5);
v_handlers_2828_ = lean_ctor_get(v___x_2820_, 6);
v_nextSub_2829_ = lean_ctor_get(v___x_2820_, 7);
v_touched_2830_ = lean_ctor_get(v___x_2820_, 8);
v_ports_2831_ = lean_ctor_get(v___x_2820_, 9);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v___x_2820_, 1);
lean_dec(v_unused_2842_);
v___x_2833_ = v___x_2820_;
v_isShared_2834_ = v_isSharedCheck_2841_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_ports_2831_);
lean_inc(v_touched_2830_);
lean_inc(v_nextSub_2829_);
lean_inc(v_handlers_2828_);
lean_inc(v_subs_2827_);
lean_inc(v_queue_2825_);
lean_inc(v_tables_2823_);
lean_inc(v_next_2822_);
lean_inc(v_model_2821_);
lean_dec(v___x_2820_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2841_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 1, v_live_2799_);
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_model_2821_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v_live_2799_);
lean_ctor_set(v_reuseFailAlloc_2840_, 2, v_next_2822_);
lean_ctor_set(v_reuseFailAlloc_2840_, 3, v_tables_2823_);
lean_ctor_set(v_reuseFailAlloc_2840_, 4, v_queue_2825_);
lean_ctor_set(v_reuseFailAlloc_2840_, 5, v_subs_2827_);
lean_ctor_set(v_reuseFailAlloc_2840_, 6, v_handlers_2828_);
lean_ctor_set(v_reuseFailAlloc_2840_, 7, v_nextSub_2829_);
lean_ctor_set(v_reuseFailAlloc_2840_, 8, v_touched_2830_);
lean_ctor_set(v_reuseFailAlloc_2840_, 9, v_ports_2831_);
lean_ctor_set_uint8(v_reuseFailAlloc_2840_, sizeof(void*)*10, v_dirty_2824_);
lean_ctor_set_uint8(v_reuseFailAlloc_2840_, sizeof(void*)*10 + 2, v_busy_2826_);
v___x_2836_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_ctor_set_uint8(v___x_2836_, sizeof(void*)*10 + 1, v_dirty_2802_);
v___x_2837_ = lean_st_ref_put(v_ref_2793_, v___x_2836_);
lean_dec(v_ref_2793_);
v___x_2838_ = l_ByteArray_empty;
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
return v___x_2839_;
}
}
}
else
{
lean_object* v_view_2843_; lean_object* v___x_2844_; lean_object* v___x_2846_; 
v_view_2843_ = lean_ctor_get(v_app_2792_, 2);
lean_inc_ref(v_view_2843_);
lean_dec_ref(v_app_2792_);
v___x_2844_ = lean_apply_1(v_view_2843_, v_model_2798_);
if (v_isShared_2796_ == 0)
{
lean_ctor_set_tag(v___x_2795_, 1);
lean_ctor_set(v___x_2795_, 1, v___x_2814_);
lean_ctor_set(v___x_2795_, 0, v___x_2844_);
v___x_2846_ = v___x_2795_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v___x_2814_);
v___x_2846_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v_ops_2848_; lean_object* v_live_2849_; lean_object* v_next_2850_; uint8_t v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v_model_2854_; lean_object* v_live_2855_; lean_object* v_next_2856_; lean_object* v_tables_2857_; uint8_t v_dirty_2858_; uint8_t v_scheduled_2859_; lean_object* v_queue_2860_; uint8_t v_busy_2861_; lean_object* v_subs_2862_; lean_object* v_handlers_2863_; lean_object* v_nextSub_2864_; lean_object* v_touched_2865_; lean_object* v_ports_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2900_; 
v___x_2847_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2799_, v___x_2846_, v_next_2800_);
v_ops_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc_ref(v_ops_2848_);
v_live_2849_ = lean_ctor_get(v___x_2847_, 1);
lean_inc_n(v_live_2849_, 2);
v_next_2850_ = lean_ctor_get(v___x_2847_, 2);
lean_inc(v_next_2850_);
lean_dec_ref(v___x_2847_);
v___x_2851_ = 0;
v___x_2852_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2849_, v_touched_2809_);
lean_dec_ref(v_touched_2809_);
v___x_2853_ = lean_st_ref_take(v_ref_2793_);
v_model_2854_ = lean_ctor_get(v___x_2853_, 0);
v_live_2855_ = lean_ctor_get(v___x_2853_, 1);
v_next_2856_ = lean_ctor_get(v___x_2853_, 2);
v_tables_2857_ = lean_ctor_get(v___x_2853_, 3);
v_dirty_2858_ = lean_ctor_get_uint8(v___x_2853_, sizeof(void*)*10);
v_scheduled_2859_ = lean_ctor_get_uint8(v___x_2853_, sizeof(void*)*10 + 1);
v_queue_2860_ = lean_ctor_get(v___x_2853_, 4);
v_busy_2861_ = lean_ctor_get_uint8(v___x_2853_, sizeof(void*)*10 + 2);
v_subs_2862_ = lean_ctor_get(v___x_2853_, 5);
v_handlers_2863_ = lean_ctor_get(v___x_2853_, 6);
v_nextSub_2864_ = lean_ctor_get(v___x_2853_, 7);
v_touched_2865_ = lean_ctor_get(v___x_2853_, 8);
v_ports_2866_ = lean_ctor_get(v___x_2853_, 9);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2868_ = v___x_2853_;
v_isShared_2869_ = v_isSharedCheck_2900_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_ports_2866_);
lean_inc(v_touched_2865_);
lean_inc(v_nextSub_2864_);
lean_inc(v_handlers_2863_);
lean_inc(v_subs_2862_);
lean_inc(v_queue_2860_);
lean_inc(v_tables_2857_);
lean_inc(v_next_2856_);
lean_inc(v_live_2855_);
lean_inc(v_model_2854_);
lean_dec(v___x_2853_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2900_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 3, v___x_2870_);
v___x_2872_ = v___x_2868_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_model_2854_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_live_2855_);
lean_ctor_set(v_reuseFailAlloc_2899_, 2, v_next_2856_);
lean_ctor_set(v_reuseFailAlloc_2899_, 3, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2899_, 4, v_queue_2860_);
lean_ctor_set(v_reuseFailAlloc_2899_, 5, v_subs_2862_);
lean_ctor_set(v_reuseFailAlloc_2899_, 6, v_handlers_2863_);
lean_ctor_set(v_reuseFailAlloc_2899_, 7, v_nextSub_2864_);
lean_ctor_set(v_reuseFailAlloc_2899_, 8, v_touched_2865_);
lean_ctor_set(v_reuseFailAlloc_2899_, 9, v_ports_2866_);
lean_ctor_set_uint8(v_reuseFailAlloc_2899_, sizeof(void*)*10, v_dirty_2858_);
lean_ctor_set_uint8(v_reuseFailAlloc_2899_, sizeof(void*)*10 + 1, v_scheduled_2859_);
lean_ctor_set_uint8(v_reuseFailAlloc_2899_, sizeof(void*)*10 + 2, v_busy_2861_);
v___x_2872_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v_fst_2876_; lean_object* v_snd_2877_; lean_object* v___x_2878_; lean_object* v_model_2879_; lean_object* v_queue_2880_; uint8_t v_busy_2881_; lean_object* v_subs_2882_; lean_object* v_handlers_2883_; lean_object* v_nextSub_2884_; lean_object* v_touched_2885_; lean_object* v_ports_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2895_; 
v___x_2873_ = lean_st_ref_put(v_ref_2793_, v___x_2872_);
v___x_2874_ = l_Array_append___redArg(v_ops_2848_, v___x_2852_);
lean_dec_ref(v___x_2852_);
v___x_2875_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2857_, v___x_2874_, v___x_2815_);
lean_dec_ref(v___x_2874_);
v_fst_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_fst_2876_);
v_snd_2877_ = lean_ctor_get(v___x_2875_, 1);
lean_inc(v_snd_2877_);
lean_dec_ref(v___x_2875_);
v___x_2878_ = lean_st_ref_take(v_ref_2793_);
v_model_2879_ = lean_ctor_get(v___x_2878_, 0);
v_queue_2880_ = lean_ctor_get(v___x_2878_, 4);
v_busy_2881_ = lean_ctor_get_uint8(v___x_2878_, sizeof(void*)*10 + 2);
v_subs_2882_ = lean_ctor_get(v___x_2878_, 5);
v_handlers_2883_ = lean_ctor_get(v___x_2878_, 6);
v_nextSub_2884_ = lean_ctor_get(v___x_2878_, 7);
v_touched_2885_ = lean_ctor_get(v___x_2878_, 8);
v_ports_2886_ = lean_ctor_get(v___x_2878_, 9);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; lean_object* v_unused_2897_; lean_object* v_unused_2898_; 
v_unused_2896_ = lean_ctor_get(v___x_2878_, 3);
lean_dec(v_unused_2896_);
v_unused_2897_ = lean_ctor_get(v___x_2878_, 2);
lean_dec(v_unused_2897_);
v_unused_2898_ = lean_ctor_get(v___x_2878_, 1);
lean_dec(v_unused_2898_);
v___x_2888_ = v___x_2878_;
v_isShared_2889_ = v_isSharedCheck_2895_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_ports_2886_);
lean_inc(v_touched_2885_);
lean_inc(v_nextSub_2884_);
lean_inc(v_handlers_2883_);
lean_inc(v_subs_2882_);
lean_inc(v_queue_2880_);
lean_inc(v_model_2879_);
lean_dec(v___x_2878_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2895_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 3, v_snd_2877_);
lean_ctor_set(v___x_2888_, 2, v_next_2850_);
lean_ctor_set(v___x_2888_, 1, v_live_2849_);
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_model_2879_);
lean_ctor_set(v_reuseFailAlloc_2894_, 1, v_live_2849_);
lean_ctor_set(v_reuseFailAlloc_2894_, 2, v_next_2850_);
lean_ctor_set(v_reuseFailAlloc_2894_, 3, v_snd_2877_);
lean_ctor_set(v_reuseFailAlloc_2894_, 4, v_queue_2880_);
lean_ctor_set(v_reuseFailAlloc_2894_, 5, v_subs_2882_);
lean_ctor_set(v_reuseFailAlloc_2894_, 6, v_handlers_2883_);
lean_ctor_set(v_reuseFailAlloc_2894_, 7, v_nextSub_2884_);
lean_ctor_set(v_reuseFailAlloc_2894_, 8, v_touched_2885_);
lean_ctor_set(v_reuseFailAlloc_2894_, 9, v_ports_2886_);
lean_ctor_set_uint8(v_reuseFailAlloc_2894_, sizeof(void*)*10 + 2, v_busy_2881_);
v___x_2891_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
lean_ctor_set_uint8(v___x_2891_, sizeof(void*)*10, v___x_2851_);
lean_ctor_set_uint8(v___x_2891_, sizeof(void*)*10 + 1, v___x_2851_);
v___x_2892_ = lean_st_ref_put(v_ref_2793_, v___x_2891_);
lean_dec(v_ref_2793_);
v___x_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2893_, 0, v_fst_2876_);
return v___x_2893_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2908_, lean_object* v_Model_2909_, lean_object* v_Msg_2910_, lean_object* v_c_2911_){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2911_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2914_, lean_object* v_Model_2915_, lean_object* v_Msg_2916_, lean_object* v_c_2917_, lean_object* v_a_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lasm_UI_Runtime_frame(v_Flags_2914_, v_Model_2915_, v_Msg_2916_, v_c_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(lean_object* v___f_2920_, lean_object* v_fst_2921_, lean_object* v_x_2922_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2924_ = lean_box(0);
v___x_2925_ = lean_apply_3(v___f_2920_, v___x_2924_, v_fst_2921_, lean_box(0));
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1___boxed(lean_object* v___f_2926_, lean_object* v_fst_2927_, lean_object* v_x_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_2926_, v_fst_2927_, v_x_2928_);
lean_dec_ref(v_x_2928_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(lean_object* v_snd_2931_, lean_object* v_____r_2932_, lean_object* v_msgs_2933_){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2935_ = lean_unsigned_to_nat(2u);
v___x_2936_ = lean_nat_add(v_snd_2931_, v___x_2935_);
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v_msgs_2933_);
lean_ctor_set(v___x_2937_, 1, v___x_2936_);
v___x_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
v___x_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0___boxed(lean_object* v_snd_2940_, lean_object* v_____r_2941_, lean_object* v_msgs_2942_, lean_object* v___y_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(v_snd_2940_, v_____r_2941_, v_msgs_2942_);
lean_dec(v_snd_2940_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v___x_2945_, lean_object* v_as_x27_2946_, lean_object* v_b_2947_){
_start:
{
if (lean_obj_tag(v_as_x27_2946_) == 0)
{
lean_object* v___x_2949_; 
lean_dec(v___x_2945_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_b_2947_);
return v___x_2949_;
}
else
{
lean_object* v_head_2950_; lean_object* v_tail_2951_; lean_object* v___x_2952_; 
v_head_2950_ = lean_ctor_get(v_as_x27_2946_, 0);
v_tail_2951_ = lean_ctor_get(v_as_x27_2946_, 1);
lean_inc(v_head_2950_);
lean_inc(v___x_2945_);
v___x_2952_ = lean_apply_1(v_head_2950_, v___x_2945_);
if (lean_obj_tag(v___x_2952_) == 1)
{
lean_object* v_val_2953_; lean_object* v___x_2954_; 
v_val_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_val_2953_);
lean_dec_ref_known(v___x_2952_, 1);
v___x_2954_ = lean_array_push(v_b_2947_, v_val_2953_);
v_as_x27_2946_ = v_tail_2951_;
v_b_2947_ = v___x_2954_;
goto _start;
}
else
{
lean_dec(v___x_2952_);
v_as_x27_2946_ = v_tail_2951_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v___x_2957_, lean_object* v_as_x27_2958_, lean_object* v_b_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_2957_, v_as_x27_2958_, v_b_2959_);
lean_dec(v_as_x27_2958_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(lean_object* v___f_2962_, lean_object* v_fst_2963_, lean_object* v_x_2964_){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_apply_3(v___f_2962_, v___x_2966_, v_fst_2963_, lean_box(0));
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2___boxed(lean_object* v___f_2968_, lean_object* v_fst_2969_, lean_object* v_x_2970_, lean_object* v___y_2971_){
_start:
{
lean_object* v_res_2972_; 
v_res_2972_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_2968_, v_fst_2969_, v_x_2970_);
lean_dec(v_x_2970_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_items_2973_, lean_object* v___x_2974_, lean_object* v_s_2975_, lean_object* v_a_2976_){
_start:
{
lean_object* v___y_2979_; lean_object* v_fst_2999_; lean_object* v_snd_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3058_; 
v_fst_2999_ = lean_ctor_get(v_a_2976_, 0);
v_snd_3000_ = lean_ctor_get(v_a_2976_, 1);
v_isSharedCheck_3058_ = !lean_is_exclusive(v_a_2976_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3002_ = v_a_2976_;
v_isShared_3003_ = v_isSharedCheck_3058_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_snd_3000_);
lean_inc(v_fst_2999_);
lean_dec(v_a_2976_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3058_;
goto v_resetjp_3001_;
}
v___jp_2978_:
{
if (lean_obj_tag(v___y_2979_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2990_; 
v_a_2980_ = lean_ctor_get(v___y_2979_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___y_2979_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2982_ = v___y_2979_;
v_isShared_2983_ = v_isSharedCheck_2990_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___y_2979_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2990_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
if (lean_obj_tag(v_a_2980_) == 0)
{
lean_object* v_a_2984_; lean_object* v___x_2986_; 
lean_dec_ref(v_s_2975_);
v_a_2984_ = lean_ctor_get(v_a_2980_, 0);
lean_inc(v_a_2984_);
lean_dec_ref_known(v_a_2980_, 1);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 0, v_a_2984_);
v___x_2986_ = v___x_2982_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
else
{
lean_object* v_a_2988_; 
lean_del_object(v___x_2982_);
v_a_2988_ = lean_ctor_get(v_a_2980_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v_a_2980_, 1);
v_a_2976_ = v_a_2988_;
goto _start;
}
}
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
lean_dec_ref(v_s_2975_);
v_a_2991_ = lean_ctor_get(v___y_2979_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___y_2979_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2993_ = v___y_2979_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___y_2979_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3004_ = lean_unsigned_to_nat(1u);
v___x_3005_ = lean_nat_add(v_snd_3000_, v___x_3004_);
v___x_3006_ = lean_array_get_size(v_items_2973_);
v___x_3007_ = lean_nat_dec_lt(v___x_3005_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3009_; 
lean_dec(v___x_3005_);
lean_dec_ref(v_s_2975_);
if (v_isShared_3003_ == 0)
{
v___x_3009_ = v___x_3002_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_fst_2999_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v_snd_3000_);
v___x_3009_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
return v___x_3010_;
}
}
else
{
lean_object* v___x_3012_; lean_object* v___f_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3012_ = lean_box(0);
lean_inc(v_snd_3000_);
v___f_3013_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3013_, 0, v_snd_3000_);
v___x_3014_ = lean_array_get_borrowed(v___x_3012_, v_items_2973_, v_snd_3000_);
v___x_3015_ = lean_array_get(v___x_3012_, v_items_2973_, v___x_3005_);
lean_dec(v___x_3005_);
if (lean_obj_tag(v___x_3014_) == 3)
{
if (lean_obj_tag(v___x_3015_) == 7)
{
double v_n_3016_; lean_object* v_items_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3049_; 
lean_del_object(v___x_3002_);
v_n_3016_ = lean_ctor_get_float(v___x_3014_, 0);
v_items_3017_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3019_ = v___x_3015_;
v_isShared_3020_ = v_isSharedCheck_3049_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_items_3017_);
lean_dec(v___x_3015_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3049_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
uint64_t v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3021_ = lean_float_to_uint64(v_n_3016_);
v___x_3022_ = lean_uint64_to_nat(v___x_3021_);
v___x_3023_ = lean_array_get_size(v___x_2974_);
v___x_3024_ = lean_nat_dec_lt(v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
lean_dec(v___x_3022_);
lean_del_object(v___x_3019_);
lean_dec_ref(v_items_3017_);
lean_dec(v_snd_3000_);
v___x_3025_ = lean_box(0);
v___x_3026_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_3013_, v_fst_2999_, v___x_3025_);
v___y_2979_ = v___x_3026_;
goto v___jp_2978_;
}
else
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_array_fget_borrowed(v___x_2974_, v___x_3022_);
lean_dec(v___x_3022_);
if (lean_obj_tag(v___x_3027_) == 1)
{
lean_object* v_attrs_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
lean_del_object(v___x_3019_);
lean_dec_ref(v___f_3013_);
v_attrs_3028_ = lean_ctor_get(v___x_3027_, 3);
v___x_3029_ = lean_array_to_list(v_items_3017_);
v___x_3030_ = lean_box(0);
v___x_3031_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_3029_, v___x_3030_);
lean_inc(v_attrs_3028_);
lean_inc_ref(v_s_2975_);
v___x_3032_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_s_2975_, v_attrs_3028_);
v___x_3033_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_3031_, v___x_3032_, v_fst_2999_);
lean_dec(v___x_3032_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v_a_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
lean_inc(v_a_3034_);
lean_dec_ref_known(v___x_3033_, 1);
v___x_3035_ = lean_box(0);
v___x_3036_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__0(v_snd_3000_, v___x_3035_, v_a_3034_);
lean_dec(v_snd_3000_);
v___y_2979_ = v___x_3036_;
goto v___jp_2978_;
}
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3044_; 
lean_dec(v_snd_3000_);
lean_dec_ref(v_s_2975_);
v_a_3037_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3039_ = v___x_3033_;
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3033_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3042_; 
if (v_isShared_3040_ == 0)
{
v___x_3042_ = v___x_3039_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_a_3037_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
}
else
{
lean_object* v___x_3046_; 
lean_dec_ref(v_items_3017_);
lean_dec(v_snd_3000_);
lean_inc(v___x_3027_);
if (v_isShared_3020_ == 0)
{
lean_ctor_set_tag(v___x_3019_, 1);
lean_ctor_set(v___x_3019_, 0, v___x_3027_);
v___x_3046_ = v___x_3019_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3027_);
v___x_3046_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
lean_object* v___x_3047_; 
v___x_3047_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__2(v___f_3013_, v_fst_2999_, v___x_3046_);
lean_dec_ref(v___x_3046_);
v___y_2979_ = v___x_3047_;
goto v___jp_2978_;
}
}
}
}
}
else
{
lean_object* v___x_3051_; 
lean_dec(v_snd_3000_);
lean_inc_ref(v___x_3014_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 1, v___x_3015_);
lean_ctor_set(v___x_3002_, 0, v___x_3014_);
v___x_3051_ = v___x_3002_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3014_);
lean_ctor_set(v_reuseFailAlloc_3053_, 1, v___x_3015_);
v___x_3051_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
lean_object* v___x_3052_; 
v___x_3052_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_3013_, v_fst_2999_, v___x_3051_);
lean_dec_ref(v___x_3051_);
v___y_2979_ = v___x_3052_;
goto v___jp_2978_;
}
}
}
else
{
lean_object* v___x_3055_; 
lean_dec(v_snd_3000_);
lean_inc(v___x_3014_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 1, v___x_3015_);
lean_ctor_set(v___x_3002_, 0, v___x_3014_);
v___x_3055_ = v___x_3002_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3014_);
lean_ctor_set(v_reuseFailAlloc_3057_, 1, v___x_3015_);
v___x_3055_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
lean_object* v___x_3056_; 
v___x_3056_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___lam__1(v___f_3013_, v_fst_2999_, v___x_3055_);
lean_dec_ref(v___x_3055_);
v___y_2979_ = v___x_3056_;
goto v___jp_2978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_items_3059_, lean_object* v___x_3060_, lean_object* v_s_3061_, lean_object* v_a_3062_, lean_object* v___y_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3059_, v___x_3060_, v_s_3061_, v_a_3062_);
lean_dec_ref(v___x_3060_);
lean_dec_ref(v_items_3059_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(lean_object* v_c_3065_, lean_object* v_as_3066_, size_t v_sz_3067_, size_t v_i_3068_, lean_object* v_b_3069_){
_start:
{
uint8_t v___x_3071_; 
v___x_3071_ = lean_usize_dec_lt(v_i_3068_, v_sz_3067_);
if (v___x_3071_ == 0)
{
lean_object* v___x_3072_; 
lean_dec_ref(v_c_3065_);
v___x_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3072_, 0, v_b_3069_);
return v___x_3072_;
}
else
{
lean_object* v___x_3073_; lean_object* v_a_3074_; lean_object* v___x_3075_; 
v___x_3073_ = lean_box(0);
v_a_3074_ = lean_array_uget_borrowed(v_as_3066_, v_i_3068_);
lean_inc(v_a_3074_);
lean_inc_ref(v_c_3065_);
v___x_3075_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3065_, v_a_3074_);
if (lean_obj_tag(v___x_3075_) == 0)
{
size_t v___x_3076_; size_t v___x_3077_; 
lean_dec_ref_known(v___x_3075_, 1);
v___x_3076_ = ((size_t)1ULL);
v___x_3077_ = lean_usize_add(v_i_3068_, v___x_3076_);
v_i_3068_ = v___x_3077_;
v_b_3069_ = v___x_3073_;
goto _start;
}
else
{
lean_dec_ref(v_c_3065_);
return v___x_3075_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg___boxed(lean_object* v_c_3079_, lean_object* v_as_3080_, lean_object* v_sz_3081_, lean_object* v_i_3082_, lean_object* v_b_3083_, lean_object* v___y_3084_){
_start:
{
size_t v_sz_boxed_3085_; size_t v_i_boxed_3086_; lean_object* v_res_3087_; 
v_sz_boxed_3085_ = lean_unbox_usize(v_sz_3081_);
lean_dec(v_sz_3081_);
v_i_boxed_3086_ = lean_unbox_usize(v_i_3082_);
lean_dec(v_i_3082_);
v_res_3087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3079_, v_as_3080_, v_sz_boxed_3085_, v_i_boxed_3086_, v_b_3083_);
lean_dec_ref(v_as_3080_);
return v_res_3087_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = lean_nat_to_int(v___x_3088_);
return v___x_3089_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_3098_, size_t v_i_3099_, lean_object* v_bs_3100_){
_start:
{
uint8_t v___x_3101_; 
v___x_3101_ = lean_usize_dec_lt(v_i_3099_, v_sz_3098_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; 
v___x_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3102_, 0, v_bs_3100_);
return v___x_3102_;
}
else
{
lean_object* v_v_3103_; lean_object* v___x_3104_; lean_object* v_bs_x27_3105_; lean_object* v_a_3107_; 
v_v_3103_ = lean_array_uget(v_bs_3100_, v_i_3099_);
v___x_3104_ = lean_unsigned_to_nat(0u);
v_bs_x27_3105_ = lean_array_uset(v_bs_3100_, v_i_3099_, v___x_3104_);
switch(lean_obj_tag(v_v_3103_))
{
case 3:
{
double v_n_3116_; lean_object* v___x_3117_; 
v_n_3116_ = lean_ctor_get_float(v_v_3103_, 0);
lean_dec_ref_known(v_v_3103_, 0);
v___x_3117_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3116_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v___x_3118_; 
lean_dec_ref(v_bs_x27_3105_);
v___x_3118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3118_;
}
else
{
lean_object* v_val_3119_; 
v_val_3119_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_val_3119_);
lean_dec_ref_known(v___x_3117_, 1);
v_a_3107_ = v_val_3119_;
goto v___jp_3106_;
}
}
case 5:
{
lean_object* v_i_3120_; 
v_i_3120_ = lean_ctor_get(v_v_3103_, 0);
lean_inc(v_i_3120_);
lean_dec_ref_known(v_v_3103_, 1);
v_a_3107_ = v_i_3120_;
goto v___jp_3106_;
}
default: 
{
lean_object* v___x_3121_; 
lean_dec_ref(v_bs_x27_3105_);
lean_dec(v_v_3103_);
v___x_3121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3121_;
}
}
v___jp_3106_:
{
lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3108_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3109_ = lean_int_dec_le(v___x_3108_, v_a_3107_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; 
lean_dec(v_a_3107_);
lean_dec_ref(v_bs_x27_3105_);
v___x_3110_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3110_;
}
else
{
lean_object* v___x_3111_; size_t v___x_3112_; size_t v___x_3113_; lean_object* v___x_3114_; 
v___x_3111_ = l_Int_toNat(v_a_3107_);
lean_dec(v_a_3107_);
v___x_3112_ = ((size_t)1ULL);
v___x_3113_ = lean_usize_add(v_i_3099_, v___x_3112_);
v___x_3114_ = lean_array_uset(v_bs_x27_3105_, v_i_3099_, v___x_3111_);
v_i_3099_ = v___x_3113_;
v_bs_3100_ = v___x_3114_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3122_, lean_object* v_i_3123_, lean_object* v_bs_3124_){
_start:
{
size_t v_sz_boxed_3125_; size_t v_i_boxed_3126_; lean_object* v_res_3127_; 
v_sz_boxed_3125_ = lean_unbox_usize(v_sz_3122_);
lean_dec(v_sz_3122_);
v_i_boxed_3126_ = lean_unbox_usize(v_i_3123_);
lean_dec(v_i_3123_);
v_res_3127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3125_, v_i_boxed_3126_, v_bs_3124_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3133_, lean_object* v_args_3134_){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; uint8_t v___x_3144_; 
v___x_3142_ = lean_array_get_size(v_args_3134_);
v___x_3143_ = lean_unsigned_to_nat(3u);
v___x_3144_ = lean_nat_dec_eq(v___x_3142_, v___x_3143_);
if (v___x_3144_ == 0)
{
lean_dec_ref(v_c_3133_);
goto v___jp_3136_;
}
else
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3145_ = lean_unsigned_to_nat(1u);
v___x_3146_ = lean_array_fget_borrowed(v_args_3134_, v___x_3145_);
if (lean_obj_tag(v___x_3146_) == 4)
{
lean_object* v_s_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v_s_3147_ = lean_ctor_get(v___x_3146_, 0);
v___x_3148_ = lean_unsigned_to_nat(2u);
v___x_3149_ = lean_array_fget_borrowed(v_args_3134_, v___x_3148_);
if (lean_obj_tag(v___x_3149_) == 7)
{
lean_object* v_items_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v_items_3150_ = lean_ctor_get(v___x_3149_, 0);
v___x_3151_ = lean_unsigned_to_nat(0u);
v___x_3152_ = lean_array_fget_borrowed(v_args_3134_, v___x_3151_);
if (lean_obj_tag(v___x_3152_) == 7)
{
lean_object* v_items_3153_; size_t v_sz_3154_; size_t v___x_3155_; lean_object* v___x_3156_; 
v_items_3153_ = lean_ctor_get(v___x_3152_, 0);
v_sz_3154_ = lean_array_size(v_items_3153_);
v___x_3155_ = ((size_t)0ULL);
lean_inc_ref(v_items_3153_);
v___x_3156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3154_, v___x_3155_, v_items_3153_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_dec_ref_known(v___x_3156_, 1);
lean_dec_ref(v_c_3133_);
goto v___jp_3139_;
}
else
{
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_dec_ref_known(v___x_3156_, 1);
lean_dec_ref(v_c_3133_);
goto v___jp_3139_;
}
else
{
lean_object* v_a_3157_; lean_object* v_ref_3158_; lean_object* v___x_3159_; lean_object* v_live_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v_model_3165_; lean_object* v_live_3166_; lean_object* v_next_3167_; lean_object* v_tables_3168_; uint8_t v_dirty_3169_; uint8_t v_scheduled_3170_; lean_object* v_queue_3171_; uint8_t v_busy_3172_; lean_object* v_subs_3173_; lean_object* v_handlers_3174_; lean_object* v_nextSub_3175_; lean_object* v_touched_3176_; lean_object* v_ports_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3220_; 
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_a_3157_);
lean_dec_ref_known(v___x_3156_, 1);
v_ref_3158_ = lean_ctor_get(v_c_3133_, 1);
v___x_3159_ = lean_st_ref_get(v_ref_3158_);
v_live_3160_ = lean_ctor_get(v___x_3159_, 1);
lean_inc(v_live_3160_);
lean_dec(v___x_3159_);
v___x_3161_ = lean_array_to_list(v_a_3157_);
v___x_3162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3163_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3160_, v___x_3161_, v___x_3162_);
v___x_3164_ = lean_st_ref_take(v_ref_3158_);
v_model_3165_ = lean_ctor_get(v___x_3164_, 0);
v_live_3166_ = lean_ctor_get(v___x_3164_, 1);
v_next_3167_ = lean_ctor_get(v___x_3164_, 2);
v_tables_3168_ = lean_ctor_get(v___x_3164_, 3);
v_dirty_3169_ = lean_ctor_get_uint8(v___x_3164_, sizeof(void*)*10);
v_scheduled_3170_ = lean_ctor_get_uint8(v___x_3164_, sizeof(void*)*10 + 1);
v_queue_3171_ = lean_ctor_get(v___x_3164_, 4);
v_busy_3172_ = lean_ctor_get_uint8(v___x_3164_, sizeof(void*)*10 + 2);
v_subs_3173_ = lean_ctor_get(v___x_3164_, 5);
v_handlers_3174_ = lean_ctor_get(v___x_3164_, 6);
v_nextSub_3175_ = lean_ctor_get(v___x_3164_, 7);
v_touched_3176_ = lean_ctor_get(v___x_3164_, 8);
v_ports_3177_ = lean_ctor_get(v___x_3164_, 9);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3179_ = v___x_3164_;
v_isShared_3180_ = v_isSharedCheck_3220_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_ports_3177_);
lean_inc(v_touched_3176_);
lean_inc(v_nextSub_3175_);
lean_inc(v_handlers_3174_);
lean_inc(v_subs_3173_);
lean_inc(v_queue_3171_);
lean_inc(v_tables_3168_);
lean_inc(v_next_3167_);
lean_inc(v_live_3166_);
lean_inc(v_model_3165_);
lean_dec(v___x_3164_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3220_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3181_; lean_object* v___x_3183_; 
v___x_3181_ = lean_array_push(v_touched_3176_, v___x_3161_);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 8, v___x_3181_);
v___x_3183_ = v___x_3179_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v_model_3165_);
lean_ctor_set(v_reuseFailAlloc_3219_, 1, v_live_3166_);
lean_ctor_set(v_reuseFailAlloc_3219_, 2, v_next_3167_);
lean_ctor_set(v_reuseFailAlloc_3219_, 3, v_tables_3168_);
lean_ctor_set(v_reuseFailAlloc_3219_, 4, v_queue_3171_);
lean_ctor_set(v_reuseFailAlloc_3219_, 5, v_subs_3173_);
lean_ctor_set(v_reuseFailAlloc_3219_, 6, v_handlers_3174_);
lean_ctor_set(v_reuseFailAlloc_3219_, 7, v_nextSub_3175_);
lean_ctor_set(v_reuseFailAlloc_3219_, 8, v___x_3181_);
lean_ctor_set(v_reuseFailAlloc_3219_, 9, v_ports_3177_);
lean_ctor_set_uint8(v_reuseFailAlloc_3219_, sizeof(void*)*10, v_dirty_3169_);
lean_ctor_set_uint8(v_reuseFailAlloc_3219_, sizeof(void*)*10 + 1, v_scheduled_3170_);
lean_ctor_set_uint8(v_reuseFailAlloc_3219_, sizeof(void*)*10 + 2, v_busy_3172_);
v___x_3183_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3184_ = lean_st_ref_put(v_ref_3158_, v___x_3183_);
v___x_3185_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
lean_inc_ref(v_s_3147_);
v___x_3186_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3150_, v___x_3163_, v_s_3147_, v___x_3185_);
lean_dec_ref(v___x_3163_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v_fst_3188_; lean_object* v___x_3189_; size_t v_sz_3190_; lean_object* v___x_3191_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3187_);
lean_dec_ref_known(v___x_3186_, 1);
v_fst_3188_ = lean_ctor_get(v_a_3187_, 0);
lean_inc(v_fst_3188_);
lean_dec(v_a_3187_);
v___x_3189_ = lean_box(0);
v_sz_3190_ = lean_array_size(v_fst_3188_);
lean_inc_ref(v_c_3133_);
v___x_3191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3133_, v_fst_3188_, v_sz_3190_, v___x_3155_, v___x_3189_);
lean_dec(v_fst_3188_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v___x_3192_; lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3202_; 
lean_dec_ref_known(v___x_3191_, 1);
v___x_3192_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3133_);
lean_dec_ref(v_c_3133_);
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3202_ == 0)
{
v___x_3195_ = v___x_3192_;
v_isShared_3196_ = v_isSharedCheck_3202_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3192_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3202_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; uint8_t v___x_3198_; lean_object* v___x_3200_; 
v___x_3197_ = lean_alloc_ctor(2, 0, 1);
v___x_3198_ = lean_unbox(v_a_3193_);
lean_dec(v_a_3193_);
lean_ctor_set_uint8(v___x_3197_, 0, v___x_3198_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 0, v___x_3197_);
v___x_3200_ = v___x_3195_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3197_);
v___x_3200_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
return v___x_3200_;
}
}
}
else
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref(v_c_3133_);
v_a_3203_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3191_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3191_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_dec_ref(v_c_3133_);
v_a_3211_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3186_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3186_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
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
lean_dec_ref(v_c_3133_);
goto v___jp_3139_;
}
}
else
{
lean_dec_ref(v_c_3133_);
goto v___jp_3136_;
}
}
else
{
lean_dec_ref(v_c_3133_);
goto v___jp_3136_;
}
}
v___jp_3136_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
return v___x_3138_;
}
v___jp_3139_:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
return v___x_3141_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3221_, lean_object* v_args_3222_, lean_object* v_a_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3221_, v_args_3222_);
lean_dec_ref(v_args_3222_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3225_, lean_object* v_Model_3226_, lean_object* v_Msg_3227_, lean_object* v_c_3228_, lean_object* v_args_3229_){
_start:
{
lean_object* v___x_3231_; 
v___x_3231_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3228_, v_args_3229_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3232_, lean_object* v_Model_3233_, lean_object* v_Msg_3234_, lean_object* v_c_3235_, lean_object* v_args_3236_, lean_object* v_a_3237_){
_start:
{
lean_object* v_res_3238_; 
v_res_3238_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3232_, v_Model_3233_, v_Msg_3234_, v_c_3235_, v_args_3236_);
lean_dec_ref(v_args_3236_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3239_, lean_object* v___x_3240_, lean_object* v_as_3241_, lean_object* v_as_x27_3242_, lean_object* v_b_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v___x_3246_; 
v___x_3246_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v___x_3240_, v_as_x27_3242_, v_b_3243_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3247_, lean_object* v___x_3248_, lean_object* v_as_3249_, lean_object* v_as_x27_3250_, lean_object* v_b_3251_, lean_object* v_a_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3247_, v___x_3248_, v_as_3249_, v_as_x27_3250_, v_b_3251_, v_a_3252_);
lean_dec(v_as_x27_3250_);
lean_dec(v_as_3249_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3255_, lean_object* v_items_3256_, lean_object* v___x_3257_, lean_object* v_s_3258_, lean_object* v_inst_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_items_3256_, v___x_3257_, v_s_3258_, v_a_3260_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3263_, lean_object* v_items_3264_, lean_object* v___x_3265_, lean_object* v_s_3266_, lean_object* v_inst_3267_, lean_object* v_a_3268_, lean_object* v___y_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3263_, v_items_3264_, v___x_3265_, v_s_3266_, v_inst_3267_, v_a_3268_);
lean_dec_ref(v___x_3265_);
lean_dec_ref(v_items_3264_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3(lean_object* v_Msg_3271_, lean_object* v_Flags_3272_, lean_object* v_Model_3273_, lean_object* v_c_3274_, lean_object* v_as_3275_, size_t v_sz_3276_, size_t v_i_3277_, lean_object* v_b_3278_){
_start:
{
lean_object* v___x_3280_; 
v___x_3280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___redArg(v_c_3274_, v_as_3275_, v_sz_3276_, v_i_3277_, v_b_3278_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3___boxed(lean_object* v_Msg_3281_, lean_object* v_Flags_3282_, lean_object* v_Model_3283_, lean_object* v_c_3284_, lean_object* v_as_3285_, lean_object* v_sz_3286_, lean_object* v_i_3287_, lean_object* v_b_3288_, lean_object* v___y_3289_){
_start:
{
size_t v_sz_boxed_3290_; size_t v_i_boxed_3291_; lean_object* v_res_3292_; 
v_sz_boxed_3290_ = lean_unbox_usize(v_sz_3286_);
lean_dec(v_sz_3286_);
v_i_boxed_3291_ = lean_unbox_usize(v_i_3287_);
lean_dec(v_i_3287_);
v_res_3292_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__3(v_Msg_3281_, v_Flags_3282_, v_Model_3283_, v_c_3284_, v_as_3285_, v_sz_boxed_3290_, v_i_boxed_3291_, v_b_3288_);
lean_dec_ref(v_as_3285_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3293_, lean_object* v_c_3294_, lean_object* v_as_x27_3295_, lean_object* v_b_3296_){
_start:
{
if (lean_obj_tag(v_as_x27_3295_) == 0)
{
lean_object* v___x_3298_; 
lean_dec_ref(v_c_3294_);
lean_dec_ref(v___y_3293_);
v___x_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_b_3296_);
return v___x_3298_;
}
else
{
lean_object* v_head_3299_; lean_object* v_tail_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v_head_3299_ = lean_ctor_get(v_as_x27_3295_, 0);
v_tail_3300_ = lean_ctor_get(v_as_x27_3295_, 1);
v___x_3301_ = lean_box(0);
lean_inc(v_head_3299_);
lean_inc_ref(v___y_3293_);
v___x_3302_ = lean_apply_1(v_head_3299_, v___y_3293_);
if (lean_obj_tag(v___x_3302_) == 1)
{
lean_object* v_val_3303_; lean_object* v___x_3304_; 
v_val_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_val_3303_);
lean_dec_ref_known(v___x_3302_, 1);
lean_inc_ref(v_c_3294_);
v___x_3304_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3294_, v_val_3303_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_dec_ref_known(v___x_3304_, 1);
v_as_x27_3295_ = v_tail_3300_;
v_b_3296_ = v___x_3301_;
goto _start;
}
else
{
lean_dec_ref(v_c_3294_);
lean_dec_ref(v___y_3293_);
return v___x_3304_;
}
}
else
{
lean_dec(v___x_3302_);
v_as_x27_3295_ = v_tail_3300_;
v_b_3296_ = v___x_3301_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object* v___y_3307_, lean_object* v_c_3308_, lean_object* v_as_x27_3309_, lean_object* v_b_3310_, lean_object* v___y_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3307_, v_c_3308_, v_as_x27_3309_, v_b_3310_);
lean_dec(v_as_x27_3309_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3313_, lean_object* v_args_3314_){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; uint8_t v___x_3321_; 
v___x_3319_ = lean_unsigned_to_nat(0u);
v___x_3320_ = lean_array_get_size(v_args_3314_);
v___x_3321_ = lean_nat_dec_lt(v___x_3319_, v___x_3320_);
if (v___x_3321_ == 0)
{
lean_dec_ref(v_c_3313_);
goto v___jp_3316_;
}
else
{
lean_object* v___x_3322_; 
v___x_3322_ = lean_array_fget_borrowed(v_args_3314_, v___x_3319_);
if (lean_obj_tag(v___x_3322_) == 3)
{
double v_n_3323_; lean_object* v___y_3325_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v_n_3323_ = lean_ctor_get_float(v___x_3322_, 0);
v___x_3356_ = lean_unsigned_to_nat(1u);
v___x_3357_ = lean_nat_dec_lt(v___x_3356_, v___x_3320_);
if (v___x_3357_ == 0)
{
goto v___jp_3354_;
}
else
{
lean_object* v___x_3358_; 
v___x_3358_ = lean_array_fget_borrowed(v_args_3314_, v___x_3356_);
if (lean_obj_tag(v___x_3358_) == 7)
{
lean_object* v_items_3359_; 
v_items_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc_ref(v_items_3359_);
v___y_3325_ = v_items_3359_;
goto v___jp_3324_;
}
else
{
goto v___jp_3354_;
}
}
v___jp_3324_:
{
lean_object* v_ref_3326_; lean_object* v___x_3327_; lean_object* v_handlers_3328_; uint64_t v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v_ref_3326_ = lean_ctor_get(v_c_3313_, 1);
v___x_3327_ = lean_st_ref_get(v_ref_3326_);
v_handlers_3328_ = lean_ctor_get(v___x_3327_, 6);
lean_inc_ref(v_handlers_3328_);
lean_dec(v___x_3327_);
v___x_3329_ = lean_float_to_uint64(v_n_3323_);
v___x_3330_ = lean_uint64_to_nat(v___x_3329_);
v___x_3331_ = lean_box(0);
v___x_3332_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3328_, v___x_3330_, v___x_3331_);
lean_dec(v___x_3330_);
lean_dec_ref(v_handlers_3328_);
v___x_3333_ = lean_box(0);
lean_inc_ref(v_c_3313_);
v___x_3334_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3325_, v_c_3313_, v___x_3332_, v___x_3333_);
lean_dec(v___x_3332_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v___x_3335_; lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3345_; 
lean_dec_ref_known(v___x_3334_, 1);
v___x_3335_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3313_);
lean_dec_ref(v_c_3313_);
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3338_ = v___x_3335_;
v_isShared_3339_ = v_isSharedCheck_3345_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3335_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3345_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3340_; uint8_t v___x_3341_; lean_object* v___x_3343_; 
v___x_3340_ = lean_alloc_ctor(2, 0, 1);
v___x_3341_ = lean_unbox(v_a_3336_);
lean_dec(v_a_3336_);
lean_ctor_set_uint8(v___x_3340_, 0, v___x_3341_);
if (v_isShared_3339_ == 0)
{
lean_ctor_set(v___x_3338_, 0, v___x_3340_);
v___x_3343_ = v___x_3338_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3340_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
lean_dec_ref(v_c_3313_);
v_a_3346_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3334_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3334_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
v___jp_3354_:
{
lean_object* v___x_3355_; 
v___x_3355_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3325_ = v___x_3355_;
goto v___jp_3324_;
}
}
else
{
lean_dec_ref(v_c_3313_);
goto v___jp_3316_;
}
}
v___jp_3316_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
return v___x_3318_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3360_, lean_object* v_args_3361_, lean_object* v_a_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3360_, v_args_3361_);
lean_dec_ref(v_args_3361_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3364_, lean_object* v_Model_3365_, lean_object* v_Msg_3366_, lean_object* v_c_3367_, lean_object* v_args_3368_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3367_, v_args_3368_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3371_, lean_object* v_Model_3372_, lean_object* v_Msg_3373_, lean_object* v_c_3374_, lean_object* v_args_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lasm_UI_Runtime_onSub(v_Flags_3371_, v_Model_3372_, v_Msg_3373_, v_c_3374_, v_args_3375_);
lean_dec_ref(v_args_3375_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3378_, lean_object* v___y_3379_, lean_object* v_Flags_3380_, lean_object* v_Model_3381_, lean_object* v_c_3382_, lean_object* v_as_3383_, lean_object* v_as_x27_3384_, lean_object* v_b_3385_, lean_object* v_a_3386_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3379_, v_c_3382_, v_as_x27_3384_, v_b_3385_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object* v_Msg_3389_, lean_object* v___y_3390_, lean_object* v_Flags_3391_, lean_object* v_Model_3392_, lean_object* v_c_3393_, lean_object* v_as_3394_, lean_object* v_as_x27_3395_, lean_object* v_b_3396_, lean_object* v_a_3397_, lean_object* v___y_3398_){
_start:
{
lean_object* v_res_3399_; 
v_res_3399_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(v_Msg_3389_, v___y_3390_, v_Flags_3391_, v_Model_3392_, v_c_3393_, v_as_3394_, v_as_x27_3395_, v_b_3396_, v_a_3397_);
lean_dec(v_as_x27_3395_);
lean_dec(v_as_3394_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = l_Lasm_UI_instHotModel___redArg();
return v_res_3405_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lasm_UI_instHotModel___redArg();
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_3407_){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_3409_, lean_object* v_d_3410_){
_start:
{
lean_object* v_fromJS_3411_; lean_object* v___x_3412_; 
v_fromJS_3411_ = lean_ctor_get(v_inst_3409_, 0);
lean_inc_ref(v_fromJS_3411_);
lean_dec_ref(v_inst_3409_);
v___x_3412_ = lean_apply_1(v_fromJS_3411_, v_d_3410_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v___x_3413_; 
lean_dec_ref_known(v___x_3412_, 1);
v___x_3413_ = lean_box(0);
return v___x_3413_;
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
v_a_3414_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3412_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3412_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_3422_, lean_object* v_inst_3423_){
_start:
{
lean_object* v___f_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___f_3424_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3424_, 0, v_inst_3423_);
v___x_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3425_, 0, v_inst_3422_);
v___x_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3426_, 0, v___f_3424_);
v___x_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3425_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_3428_, lean_object* v_inst_3429_, lean_object* v_inst_3430_){
_start:
{
lean_object* v___x_3431_; 
v___x_3431_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_3429_, v_inst_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3432_, lean_object* v_x_3433_){
_start:
{
lean_object* v___x_3435_; lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3444_; 
v___x_3435_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3432_);
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3438_ = v___x_3435_;
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3435_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3440_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3440_, 0, v_a_3436_);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 0, v___x_3440_);
v___x_3442_ = v___x_3438_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3445_, lean_object* v_x_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3445_, v_x_3446_);
lean_dec_ref(v_x_3446_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v_app_3449_, lean_object* v___x_3450_, lean_object* v___x_3451_, lean_object* v_args_3452_){
_start:
{
lean_object* v_onUrlChange_3466_; lean_object* v___y_3468_; lean_object* v___x_3484_; uint8_t v___x_3485_; 
v_onUrlChange_3466_ = lean_ctor_get(v_app_3449_, 4);
lean_inc(v_onUrlChange_3466_);
lean_dec_ref(v_app_3449_);
v___x_3484_ = lean_array_get_size(v_args_3452_);
v___x_3485_ = lean_nat_dec_lt(v___x_3451_, v___x_3484_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; 
v___x_3486_ = lean_box(0);
v___y_3468_ = v___x_3486_;
goto v___jp_3467_;
}
else
{
lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3487_ = lean_array_fget_borrowed(v_args_3452_, v___x_3451_);
lean_inc(v___x_3487_);
v___x_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3487_);
v___y_3468_ = v___x_3488_;
goto v___jp_3467_;
}
v___jp_3454_:
{
lean_object* v___x_3455_; lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3465_; 
v___x_3455_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3450_);
lean_dec_ref(v___x_3450_);
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3458_ = v___x_3455_;
v_isShared_3459_ = v_isSharedCheck_3465_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3455_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3465_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3460_; uint8_t v___x_3461_; lean_object* v___x_3463_; 
v___x_3460_ = lean_alloc_ctor(2, 0, 1);
v___x_3461_ = lean_unbox(v_a_3456_);
lean_dec(v_a_3456_);
lean_ctor_set_uint8(v___x_3460_, 0, v___x_3461_);
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 0, v___x_3460_);
v___x_3463_ = v___x_3458_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3460_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
v___jp_3467_:
{
if (lean_obj_tag(v_onUrlChange_3466_) == 1)
{
if (lean_obj_tag(v___y_3468_) == 1)
{
lean_object* v_val_3469_; 
v_val_3469_ = lean_ctor_get(v___y_3468_, 0);
lean_inc(v_val_3469_);
lean_dec_ref_known(v___y_3468_, 1);
if (lean_obj_tag(v_val_3469_) == 4)
{
lean_object* v_val_3470_; lean_object* v_s_3471_; lean_object* v___x_3472_; 
v_val_3470_ = lean_ctor_get(v_onUrlChange_3466_, 0);
lean_inc(v_val_3470_);
lean_dec_ref_known(v_onUrlChange_3466_, 1);
v_s_3471_ = lean_ctor_get(v_val_3469_, 0);
lean_inc_ref(v_s_3471_);
lean_dec_ref_known(v_val_3469_, 1);
v___x_3472_ = l_Lasm_UI_Url_parse(v_s_3471_);
if (lean_obj_tag(v___x_3472_) == 1)
{
lean_object* v_val_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v_val_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_val_3473_);
lean_dec_ref_known(v___x_3472_, 1);
v___x_3474_ = lean_apply_1(v_val_3470_, v_val_3473_);
lean_inc_ref(v___x_3450_);
v___x_3475_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3450_, v___x_3474_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_dec_ref_known(v___x_3475_, 1);
goto v___jp_3454_;
}
else
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3483_; 
lean_dec_ref(v___x_3450_);
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3478_ = v___x_3475_;
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v___x_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3483_;
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
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_a_3476_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
else
{
lean_dec(v___x_3472_);
lean_dec(v_val_3470_);
goto v___jp_3454_;
}
}
else
{
lean_dec(v_val_3469_);
lean_dec_ref_known(v_onUrlChange_3466_, 1);
goto v___jp_3454_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3466_, 1);
lean_dec(v___y_3468_);
goto v___jp_3454_;
}
}
else
{
lean_dec(v___y_3468_);
lean_dec(v_onUrlChange_3466_);
goto v___jp_3454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v_app_3489_, lean_object* v___x_3490_, lean_object* v___x_3491_, lean_object* v_args_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lasm_UI_App_run___redArg___lam__1(v_app_3489_, v___x_3490_, v___x_3491_, v_args_3492_);
lean_dec_ref(v_args_3492_);
lean_dec(v___x_3491_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3495_, lean_object* v___x_3496_, lean_object* v_a_3497_, lean_object* v_x_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v___y_3502_; lean_object* v___x_3520_; 
v___x_3520_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3496_, v_a_3497_);
if (lean_obj_tag(v___x_3520_) == 0)
{
v___y_3502_ = v___x_3520_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
v___x_3522_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3523_ = l_Lasm_UI_Runtime_report(v___x_3522_, v_a_3521_);
v___y_3502_ = v___x_3523_;
goto v___jp_3501_;
}
v___jp_3501_:
{
if (lean_obj_tag(v___y_3502_) == 0)
{
lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3510_; 
v_isSharedCheck_3510_ = !lean_is_exclusive(v___y_3502_);
if (v_isSharedCheck_3510_ == 0)
{
lean_object* v_unused_3511_; 
v_unused_3511_ = lean_ctor_get(v___y_3502_, 0);
lean_dec(v_unused_3511_);
v___x_3504_ = v___y_3502_;
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
else
{
lean_dec(v___y_3502_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3495_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3506_);
v___x_3508_ = v___x_3504_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3519_; 
v_a_3512_ = lean_ctor_get(v___y_3502_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___y_3502_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3514_ = v___y_3502_;
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___y_3502_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3512_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3524_, lean_object* v___x_3525_, lean_object* v_a_3526_, lean_object* v_x_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3524_, v___x_3525_, v_a_3526_, v_x_3527_, v___y_3528_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3531_, lean_object* v___x_3532_, lean_object* v_d_3533_){
_start:
{
lean_object* v___x_3535_; 
v___x_3535_ = lean_apply_1(v_val_3531_, v_d_3533_);
if (lean_obj_tag(v___x_3535_) == 1)
{
lean_object* v_val_3536_; lean_object* v___x_3537_; 
v_val_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_val_3536_);
lean_dec_ref_known(v___x_3535_, 1);
lean_inc_ref(v___x_3532_);
v___x_3537_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3532_, v_val_3536_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v___x_3538_; 
lean_dec_ref_known(v___x_3537_, 1);
v___x_3538_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3532_);
lean_dec_ref(v___x_3532_);
return v___x_3538_;
}
else
{
lean_dec_ref(v___x_3532_);
return v___x_3537_;
}
}
else
{
lean_object* v___x_3539_; 
lean_dec(v___x_3535_);
v___x_3539_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3532_);
lean_dec_ref(v___x_3532_);
return v___x_3539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3540_, lean_object* v___x_3541_, lean_object* v_d_3542_, lean_object* v___y_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3540_, v___x_3541_, v_d_3542_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_3545_){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = lean_st_ref_get(v_val_3545_);
v___x_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
return v___x_3548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_3549_, lean_object* v___y_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_3549_);
lean_dec(v_val_3549_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_3552_, lean_object* v_____do__lift_3553_){
_start:
{
lean_object* v_model_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v_model_3555_ = lean_ctor_get(v_____do__lift_3553_, 0);
lean_inc(v_model_3555_);
lean_dec_ref(v_____do__lift_3553_);
v___x_3556_ = lean_apply_1(v_val_3552_, v_model_3555_);
v___x_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_3558_, lean_object* v_____do__lift_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v_res_3561_; 
v_res_3561_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_3558_, v_____do__lift_3559_);
return v_res_3561_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_instMonadEIO___redArg();
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3577_, lean_object* v_hot_3578_, lean_object* v_app_3579_){
_start:
{
lean_object* v___x_3581_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; uint8_t v___y_3591_; uint8_t v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; uint8_t v___y_3596_; lean_object* v___x_3686_; 
v___x_3581_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3686_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
lean_dec_ref_known(v___x_3686_, 1);
v___x_3688_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3689_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3690_ = l_Lasm_JS_Data_field(v_a_3687_, v___x_3689_);
v___x_3691_ = l_Lasm_JS_decodeAs___redArg(v_inst_3577_, v___x_3688_, v___x_3690_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3693_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; uint8_t v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; uint8_t v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; uint8_t v___y_3728_; uint8_t v___y_3729_; lean_object* v___y_3730_; lean_object* v_fst_3779_; lean_object* v_snd_3780_; lean_object* v___y_3808_; lean_object* v___y_3814_; lean_object* v___x_3832_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
lean_inc(v_a_3692_);
lean_dec_ref_known(v___x_3691_, 1);
v___x_3693_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3832_ = l_Lasm_JS_Data_field(v_a_3687_, v___x_3693_);
lean_dec(v_a_3687_);
if (lean_obj_tag(v___x_3832_) == 4)
{
lean_object* v_s_3833_; lean_object* v___x_3834_; 
v_s_3833_ = lean_ctor_get(v___x_3832_, 0);
lean_inc_ref(v_s_3833_);
lean_dec_ref_known(v___x_3832_, 1);
v___x_3834_ = l_Lasm_UI_Url_parse(v_s_3833_);
if (lean_obj_tag(v___x_3834_) == 0)
{
goto v___jp_3830_;
}
else
{
lean_object* v_val_3835_; 
v_val_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_val_3835_);
lean_dec_ref_known(v___x_3834_, 1);
v___y_3814_ = v_val_3835_;
goto v___jp_3813_;
}
}
else
{
lean_dec(v___x_3832_);
goto v___jp_3830_;
}
v___jp_3694_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v_onUrlChange_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3707_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___y_3699_);
lean_ctor_set(v___x_3708_, 1, v___x_3707_);
v_onUrlChange_3709_ = lean_ctor_get(v_app_3579_, 4);
lean_inc(v_onUrlChange_3709_);
lean_dec_ref(v_app_3579_);
v___x_3710_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___y_3703_);
lean_ctor_set(v___x_3710_, 1, v___x_3707_);
v___x_3711_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3711_, 0, v___y_3697_);
lean_ctor_set(v___x_3711_, 1, v___x_3707_);
v___x_3712_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set(v___x_3713_, 1, v___x_3708_);
v___x_3714_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3714_);
lean_ctor_set(v___x_3715_, 1, v___x_3710_);
v___x_3716_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
lean_ctor_set(v___x_3717_, 1, v___x_3711_);
v___x_3718_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___y_3705_);
lean_ctor_set(v___x_3718_, 1, v___x_3707_);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3693_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v___x_3720_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3709_) == 0)
{
v___y_3583_ = v___y_3695_;
v___y_3584_ = v___y_3696_;
v___y_3585_ = v___y_3698_;
v___y_3586_ = v___y_3702_;
v___y_3587_ = v___y_3701_;
v___y_3588_ = v___x_3719_;
v___y_3589_ = v___x_3720_;
v___y_3590_ = v___x_3713_;
v___y_3591_ = v___y_3700_;
v___y_3592_ = v___y_3704_;
v___y_3593_ = v___x_3717_;
v___y_3594_ = v___x_3715_;
v___y_3595_ = v___y_3706_;
v___y_3596_ = v___y_3700_;
goto v___jp_3582_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3709_, 1);
v___y_3583_ = v___y_3695_;
v___y_3584_ = v___y_3696_;
v___y_3585_ = v___y_3698_;
v___y_3586_ = v___y_3702_;
v___y_3587_ = v___y_3701_;
v___y_3588_ = v___x_3719_;
v___y_3589_ = v___x_3720_;
v___y_3590_ = v___x_3713_;
v___y_3591_ = v___y_3700_;
v___y_3592_ = v___y_3704_;
v___y_3593_ = v___x_3717_;
v___y_3594_ = v___x_3715_;
v___y_3595_ = v___y_3706_;
v___y_3596_ = v___y_3704_;
goto v___jp_3582_;
}
}
v___jp_3721_:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Lasm_JS_Function_ofSyncFn(v___y_3723_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v___x_3731_, 1);
lean_inc_ref(v___y_3722_);
v___x_3733_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3733_, 0, lean_box(0));
lean_closure_set(v___x_3733_, 1, lean_box(0));
lean_closure_set(v___x_3733_, 2, lean_box(0));
lean_closure_set(v___x_3733_, 3, v___y_3722_);
v___x_3734_ = l_Lasm_JS_Function_ofSyncFn(v___x_3733_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v_a_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v_a_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v___x_3734_, 1);
lean_inc_ref(v___y_3722_);
v___x_3736_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3736_, 0, lean_box(0));
lean_closure_set(v___x_3736_, 1, lean_box(0));
lean_closure_set(v___x_3736_, 2, lean_box(0));
lean_closure_set(v___x_3736_, 3, v___y_3722_);
v___x_3737_ = l_Lasm_JS_Function_ofSyncFn(v___x_3736_);
if (lean_obj_tag(v___x_3737_) == 0)
{
lean_object* v_a_3738_; lean_object* v___x_3739_; 
v_a_3738_ = lean_ctor_get(v___x_3737_, 0);
lean_inc(v_a_3738_);
lean_dec_ref_known(v___x_3737_, 1);
v___x_3739_ = l_Lasm_JS_Function_ofSyncFn(v___y_3724_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_receive_3740_; 
v_receive_3740_ = lean_ctor_get(v_app_3579_, 5);
if (lean_obj_tag(v_receive_3740_) == 1)
{
lean_object* v_a_3741_; lean_object* v_val_3742_; lean_object* v___f_3743_; lean_object* v___x_3744_; 
v_a_3741_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3739_, 1);
v_val_3742_ = lean_ctor_get(v_receive_3740_, 0);
lean_inc_ref(v___y_3722_);
lean_inc(v_val_3742_);
v___f_3743_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3743_, 0, v_val_3742_);
lean_closure_set(v___f_3743_, 1, v___y_3722_);
v___x_3744_ = l_Lasm_Web_App_onMessage(v___f_3743_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_dec_ref_known(v___x_3744_, 1);
lean_inc_ref(v___y_3722_);
v___y_3695_ = v___y_3722_;
v___y_3696_ = v___y_3722_;
v___y_3697_ = v_a_3738_;
v___y_3698_ = v___y_3725_;
v___y_3699_ = v_a_3732_;
v___y_3700_ = v___y_3728_;
v___y_3701_ = v___y_3727_;
v___y_3702_ = v___y_3726_;
v___y_3703_ = v_a_3735_;
v___y_3704_ = v___y_3729_;
v___y_3705_ = v_a_3741_;
v___y_3706_ = v___y_3730_;
goto v___jp_3694_;
}
else
{
lean_dec(v_a_3741_);
lean_dec(v_a_3738_);
lean_dec(v_a_3735_);
lean_dec(v_a_3732_);
lean_dec(v___y_3730_);
lean_dec(v___y_3727_);
lean_dec(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3722_);
lean_dec_ref(v_app_3579_);
return v___x_3744_;
}
}
else
{
lean_object* v_a_3745_; 
v_a_3745_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___x_3739_, 1);
lean_inc_ref(v___y_3722_);
v___y_3695_ = v___y_3722_;
v___y_3696_ = v___y_3722_;
v___y_3697_ = v_a_3738_;
v___y_3698_ = v___y_3725_;
v___y_3699_ = v_a_3732_;
v___y_3700_ = v___y_3728_;
v___y_3701_ = v___y_3727_;
v___y_3702_ = v___y_3726_;
v___y_3703_ = v_a_3735_;
v___y_3704_ = v___y_3729_;
v___y_3705_ = v_a_3745_;
v___y_3706_ = v___y_3730_;
goto v___jp_3694_;
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec(v_a_3738_);
lean_dec(v_a_3735_);
lean_dec(v_a_3732_);
lean_dec(v___y_3730_);
lean_dec(v___y_3727_);
lean_dec(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3722_);
lean_dec_ref(v_app_3579_);
v_a_3746_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3739_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3739_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_dec(v_a_3735_);
lean_dec(v_a_3732_);
lean_dec(v___y_3730_);
lean_dec(v___y_3727_);
lean_dec(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec_ref(v___y_3722_);
lean_dec_ref(v_app_3579_);
v_a_3754_ = lean_ctor_get(v___x_3737_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3737_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3737_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3737_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
else
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3769_; 
lean_dec(v_a_3732_);
lean_dec(v___y_3730_);
lean_dec(v___y_3727_);
lean_dec(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec_ref(v___y_3722_);
lean_dec_ref(v_app_3579_);
v_a_3762_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3764_ = v___x_3734_;
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3734_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
return v___x_3767_;
}
}
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
lean_dec(v___y_3730_);
lean_dec(v___y_3727_);
lean_dec(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec_ref(v___y_3722_);
lean_dec_ref(v_app_3579_);
v_a_3770_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3731_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3731_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
v___jp_3778_:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; uint8_t v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v_save_x3f_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3805_; 
v___x_3781_ = lean_box(0);
v___x_3782_ = lean_unsigned_to_nat(1u);
v___x_3783_ = lean_unsigned_to_nat(0u);
v___x_3784_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3785_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3786_ = 1;
v___x_3787_ = 0;
v___x_3788_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__6));
v___x_3789_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3789_, 0, v_fst_3779_);
lean_ctor_set(v___x_3789_, 1, v___x_3781_);
lean_ctor_set(v___x_3789_, 2, v___x_3782_);
lean_ctor_set(v___x_3789_, 3, v___x_3785_);
lean_ctor_set(v___x_3789_, 4, v___x_3788_);
lean_ctor_set(v___x_3789_, 5, v___x_3784_);
lean_ctor_set(v___x_3789_, 6, v___x_3784_);
lean_ctor_set(v___x_3789_, 7, v___x_3782_);
lean_ctor_set(v___x_3789_, 8, v___x_3788_);
lean_ctor_set(v___x_3789_, 9, v___x_3781_);
lean_ctor_set_uint8(v___x_3789_, sizeof(void*)*10, v___x_3786_);
lean_ctor_set_uint8(v___x_3789_, sizeof(void*)*10 + 1, v___x_3787_);
lean_ctor_set_uint8(v___x_3789_, sizeof(void*)*10 + 2, v___x_3787_);
v___x_3790_ = lean_st_mk_ref(v___x_3789_);
v_save_x3f_3791_ = lean_ctor_get(v_hot_3578_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v_hot_3578_);
if (v_isSharedCheck_3805_ == 0)
{
lean_object* v_unused_3806_; 
v_unused_3806_ = lean_ctor_get(v_hot_3578_, 1);
lean_dec(v_unused_3806_);
v___x_3793_ = v_hot_3578_;
v_isShared_3794_ = v_isSharedCheck_3805_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_save_x3f_3791_);
lean_dec(v_hot_3578_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3805_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
lean_inc(v___x_3790_);
lean_inc_ref(v_app_3579_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 1, v___x_3790_);
lean_ctor_set(v___x_3793_, 0, v_app_3579_);
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_app_3579_);
lean_ctor_set(v_reuseFailAlloc_3804_, 1, v___x_3790_);
v___x_3796_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
lean_object* v___f_3797_; lean_object* v___f_3798_; 
lean_inc_ref_n(v___x_3796_, 2);
v___f_3797_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3797_, 0, v___x_3796_);
lean_inc_ref(v_app_3579_);
v___f_3798_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3798_, 0, v_app_3579_);
lean_closure_set(v___f_3798_, 1, v___x_3796_);
lean_closure_set(v___f_3798_, 2, v___x_3783_);
if (lean_obj_tag(v_save_x3f_3791_) == 1)
{
lean_object* v_val_3799_; lean_object* v___f_3800_; lean_object* v___f_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v_val_3799_ = lean_ctor_get(v_save_x3f_3791_, 0);
lean_inc(v_val_3799_);
lean_dec_ref_known(v_save_x3f_3791_, 1);
lean_inc(v___x_3790_);
v___f_3800_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3800_, 0, v___x_3790_);
v___f_3801_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3801_, 0, v_val_3799_);
v___x_3802_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3802_, 0, lean_box(0));
lean_closure_set(v___x_3802_, 1, lean_box(0));
lean_closure_set(v___x_3802_, 2, lean_box(0));
lean_closure_set(v___x_3802_, 3, v___f_3800_);
lean_closure_set(v___x_3802_, 4, v___f_3801_);
v___x_3803_ = l_Lasm_Web_App_onHotSave(v___x_3802_);
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_dec_ref_known(v___x_3803_, 1);
v___y_3722_ = v___x_3796_;
v___y_3723_ = v___f_3797_;
v___y_3724_ = v___f_3798_;
v___y_3725_ = v___x_3783_;
v___y_3726_ = v___x_3790_;
v___y_3727_ = v___x_3782_;
v___y_3728_ = v___x_3787_;
v___y_3729_ = v___x_3786_;
v___y_3730_ = v_snd_3780_;
goto v___jp_3721_;
}
else
{
lean_dec_ref(v___f_3798_);
lean_dec_ref(v___f_3797_);
lean_dec_ref(v___x_3796_);
lean_dec(v___x_3790_);
lean_dec(v_snd_3780_);
lean_dec_ref(v_app_3579_);
return v___x_3803_;
}
}
else
{
lean_dec(v_save_x3f_3791_);
v___y_3722_ = v___x_3796_;
v___y_3723_ = v___f_3797_;
v___y_3724_ = v___f_3798_;
v___y_3725_ = v___x_3783_;
v___y_3726_ = v___x_3790_;
v___y_3727_ = v___x_3782_;
v___y_3728_ = v___x_3787_;
v___y_3729_ = v___x_3786_;
v___y_3730_ = v_snd_3780_;
goto v___jp_3721_;
}
}
}
}
v___jp_3807_:
{
lean_object* v_init_3809_; lean_object* v___x_3810_; lean_object* v_fst_3811_; lean_object* v_snd_3812_; 
v_init_3809_ = lean_ctor_get(v_app_3579_, 0);
lean_inc_ref(v_init_3809_);
v___x_3810_ = lean_apply_2(v_init_3809_, v_a_3692_, v___y_3808_);
v_fst_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_fst_3811_);
v_snd_3812_ = lean_ctor_get(v___x_3810_, 1);
lean_inc(v_snd_3812_);
lean_dec_ref(v___x_3810_);
v_fst_3779_ = v_fst_3811_;
v_snd_3780_ = v_snd_3812_;
goto v___jp_3778_;
}
v___jp_3813_:
{
lean_object* v_load_x3f_3815_; 
v_load_x3f_3815_ = lean_ctor_get(v_hot_3578_, 1);
if (lean_obj_tag(v_load_x3f_3815_) == 0)
{
v___y_3808_ = v___y_3814_;
goto v___jp_3807_;
}
else
{
lean_object* v_val_3816_; lean_object* v___x_3817_; 
v_val_3816_ = lean_ctor_get(v_load_x3f_3815_, 0);
v___x_3817_ = l_Lasm_Web_App_Raw_hotState();
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
if (lean_obj_tag(v_a_3818_) == 0)
{
v___y_3808_ = v___y_3814_;
goto v___jp_3807_;
}
else
{
lean_object* v___x_3819_; 
lean_inc(v_val_3816_);
v___x_3819_ = lean_apply_1(v_val_3816_, v_a_3818_);
if (lean_obj_tag(v___x_3819_) == 0)
{
v___y_3808_ = v___y_3814_;
goto v___jp_3807_;
}
else
{
lean_object* v_val_3820_; lean_object* v___x_3821_; 
lean_dec_ref(v___y_3814_);
lean_dec(v_a_3692_);
v_val_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_val_3820_);
lean_dec_ref_known(v___x_3819_, 1);
v___x_3821_ = lean_box(0);
v_fst_3779_ = v_val_3820_;
v_snd_3780_ = v___x_3821_;
goto v___jp_3778_;
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec_ref(v___y_3814_);
lean_dec(v_a_3692_);
lean_dec_ref(v_app_3579_);
lean_dec_ref(v_hot_3578_);
v_a_3822_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3817_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3817_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
v___jp_3830_:
{
lean_object* v___x_3831_; 
v___x_3831_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__9));
v___y_3814_ = v___x_3831_;
goto v___jp_3813_;
}
}
else
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
lean_dec(v_a_3687_);
lean_dec_ref(v_app_3579_);
lean_dec_ref(v_hot_3578_);
v_a_3836_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3691_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3691_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3851_; 
lean_dec_ref(v_app_3579_);
lean_dec_ref(v_hot_3578_);
lean_dec_ref(v_inst_3577_);
v_a_3844_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3846_ = v___x_3686_;
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___x_3686_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
v___jp_3582_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3597_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3597_, 0, v___y_3596_);
lean_inc_ref(v___y_3589_);
v___x_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___y_3589_);
lean_ctor_set(v___x_3598_, 1, v___x_3597_);
v___x_3599_ = lean_box(0);
v___x_3600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3598_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
v___x_3601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___y_3588_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___y_3593_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v___x_3603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___y_3594_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___y_3590_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
v___x_3605_ = l_Lasm_JS_obj(v___x_3604_);
v___x_3606_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3605_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v___x_3607_; lean_object* v_a_3608_; lean_object* v___x_3609_; 
lean_dec_ref_known(v___x_3606_, 1);
lean_inc_ref(v___y_3584_);
v___x_3607_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3584_);
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref(v___x_3607_);
v___x_3609_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3608_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v___x_3610_; lean_object* v_model_3611_; lean_object* v_live_3612_; lean_object* v_next_3613_; lean_object* v_tables_3614_; uint8_t v_dirty_3615_; uint8_t v_scheduled_3616_; lean_object* v_queue_3617_; lean_object* v_subs_3618_; lean_object* v_handlers_3619_; lean_object* v_nextSub_3620_; lean_object* v_touched_3621_; lean_object* v_ports_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3685_; 
lean_dec_ref_known(v___x_3609_, 1);
v___x_3610_ = lean_st_ref_take(v___y_3586_);
v_model_3611_ = lean_ctor_get(v___x_3610_, 0);
v_live_3612_ = lean_ctor_get(v___x_3610_, 1);
v_next_3613_ = lean_ctor_get(v___x_3610_, 2);
v_tables_3614_ = lean_ctor_get(v___x_3610_, 3);
v_dirty_3615_ = lean_ctor_get_uint8(v___x_3610_, sizeof(void*)*10);
v_scheduled_3616_ = lean_ctor_get_uint8(v___x_3610_, sizeof(void*)*10 + 1);
v_queue_3617_ = lean_ctor_get(v___x_3610_, 4);
v_subs_3618_ = lean_ctor_get(v___x_3610_, 5);
v_handlers_3619_ = lean_ctor_get(v___x_3610_, 6);
v_nextSub_3620_ = lean_ctor_get(v___x_3610_, 7);
v_touched_3621_ = lean_ctor_get(v___x_3610_, 8);
v_ports_3622_ = lean_ctor_get(v___x_3610_, 9);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3624_ = v___x_3610_;
v_isShared_3625_ = v_isSharedCheck_3685_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_ports_3622_);
lean_inc(v_touched_3621_);
lean_inc(v_nextSub_3620_);
lean_inc(v_handlers_3619_);
lean_inc(v_subs_3618_);
lean_inc(v_queue_3617_);
lean_inc(v_tables_3614_);
lean_inc(v_next_3613_);
lean_inc(v_live_3612_);
lean_inc(v_model_3611_);
lean_dec(v___x_3610_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3685_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_model_3611_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v_live_3612_);
lean_ctor_set(v_reuseFailAlloc_3684_, 2, v_next_3613_);
lean_ctor_set(v_reuseFailAlloc_3684_, 3, v_tables_3614_);
lean_ctor_set(v_reuseFailAlloc_3684_, 4, v_queue_3617_);
lean_ctor_set(v_reuseFailAlloc_3684_, 5, v_subs_3618_);
lean_ctor_set(v_reuseFailAlloc_3684_, 6, v_handlers_3619_);
lean_ctor_set(v_reuseFailAlloc_3684_, 7, v_nextSub_3620_);
lean_ctor_set(v_reuseFailAlloc_3684_, 8, v_touched_3621_);
lean_ctor_set(v_reuseFailAlloc_3684_, 9, v_ports_3622_);
lean_ctor_set_uint8(v_reuseFailAlloc_3684_, sizeof(void*)*10, v_dirty_3615_);
lean_ctor_set_uint8(v_reuseFailAlloc_3684_, sizeof(void*)*10 + 1, v_scheduled_3616_);
v___x_3627_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___f_3630_; lean_object* v___x_4994__overap_3631_; lean_object* v___x_3632_; 
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*10 + 2, v___y_3592_);
v___x_3628_ = lean_st_ref_put(v___y_3586_, v___x_3627_);
v___x_3629_ = lean_box(0);
v___f_3630_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3630_, 0, v___x_3629_);
lean_closure_set(v___f_3630_, 1, v___y_3583_);
v___x_4994__overap_3631_ = l_List_forIn_x27_loop___redArg(v___x_3581_, v___f_3630_, v___y_3595_, v___x_3629_);
lean_dec(v___y_3595_);
v___x_3632_ = lean_apply_1(v___x_4994__overap_3631_, lean_box(0));
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v___x_3633_; lean_object* v_model_3634_; lean_object* v_live_3635_; lean_object* v_next_3636_; lean_object* v_tables_3637_; uint8_t v_dirty_3638_; uint8_t v_scheduled_3639_; lean_object* v_queue_3640_; lean_object* v_subs_3641_; lean_object* v_handlers_3642_; lean_object* v_nextSub_3643_; lean_object* v_touched_3644_; lean_object* v_ports_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3683_; 
lean_dec_ref_known(v___x_3632_, 1);
v___x_3633_ = lean_st_ref_take(v___y_3586_);
v_model_3634_ = lean_ctor_get(v___x_3633_, 0);
v_live_3635_ = lean_ctor_get(v___x_3633_, 1);
v_next_3636_ = lean_ctor_get(v___x_3633_, 2);
v_tables_3637_ = lean_ctor_get(v___x_3633_, 3);
v_dirty_3638_ = lean_ctor_get_uint8(v___x_3633_, sizeof(void*)*10);
v_scheduled_3639_ = lean_ctor_get_uint8(v___x_3633_, sizeof(void*)*10 + 1);
v_queue_3640_ = lean_ctor_get(v___x_3633_, 4);
v_subs_3641_ = lean_ctor_get(v___x_3633_, 5);
v_handlers_3642_ = lean_ctor_get(v___x_3633_, 6);
v_nextSub_3643_ = lean_ctor_get(v___x_3633_, 7);
v_touched_3644_ = lean_ctor_get(v___x_3633_, 8);
v_ports_3645_ = lean_ctor_get(v___x_3633_, 9);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3633_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3647_ = v___x_3633_;
v_isShared_3648_ = v_isSharedCheck_3683_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_ports_3645_);
lean_inc(v_touched_3644_);
lean_inc(v_nextSub_3643_);
lean_inc(v_handlers_3642_);
lean_inc(v_subs_3641_);
lean_inc(v_queue_3640_);
lean_inc(v_tables_3637_);
lean_inc(v_next_3636_);
lean_inc(v_live_3635_);
lean_inc(v_model_3634_);
lean_dec(v___x_3633_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3683_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_model_3634_);
lean_ctor_set(v_reuseFailAlloc_3682_, 1, v_live_3635_);
lean_ctor_set(v_reuseFailAlloc_3682_, 2, v_next_3636_);
lean_ctor_set(v_reuseFailAlloc_3682_, 3, v_tables_3637_);
lean_ctor_set(v_reuseFailAlloc_3682_, 4, v_queue_3640_);
lean_ctor_set(v_reuseFailAlloc_3682_, 5, v_subs_3641_);
lean_ctor_set(v_reuseFailAlloc_3682_, 6, v_handlers_3642_);
lean_ctor_set(v_reuseFailAlloc_3682_, 7, v_nextSub_3643_);
lean_ctor_set(v_reuseFailAlloc_3682_, 8, v_touched_3644_);
lean_ctor_set(v_reuseFailAlloc_3682_, 9, v_ports_3645_);
lean_ctor_set_uint8(v_reuseFailAlloc_3682_, sizeof(void*)*10, v_dirty_3638_);
lean_ctor_set_uint8(v_reuseFailAlloc_3682_, sizeof(void*)*10 + 1, v_scheduled_3639_);
v___x_3650_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v_model_3653_; lean_object* v_live_3654_; lean_object* v_next_3655_; lean_object* v_tables_3656_; uint8_t v_dirty_3657_; uint8_t v_scheduled_3658_; lean_object* v_queue_3659_; uint8_t v_busy_3660_; lean_object* v_subs_3661_; lean_object* v_handlers_3662_; lean_object* v_nextSub_3663_; lean_object* v_touched_3664_; lean_object* v_ports_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3681_; 
lean_ctor_set_uint8(v___x_3650_, sizeof(void*)*10 + 2, v___y_3591_);
v___x_3651_ = lean_st_ref_put(v___y_3586_, v___x_3650_);
v___x_3652_ = lean_st_ref_get(v___y_3586_);
v_model_3653_ = lean_ctor_get(v___x_3652_, 0);
v_live_3654_ = lean_ctor_get(v___x_3652_, 1);
v_next_3655_ = lean_ctor_get(v___x_3652_, 2);
v_tables_3656_ = lean_ctor_get(v___x_3652_, 3);
v_dirty_3657_ = lean_ctor_get_uint8(v___x_3652_, sizeof(void*)*10);
v_scheduled_3658_ = lean_ctor_get_uint8(v___x_3652_, sizeof(void*)*10 + 1);
v_queue_3659_ = lean_ctor_get(v___x_3652_, 4);
v_busy_3660_ = lean_ctor_get_uint8(v___x_3652_, sizeof(void*)*10 + 2);
v_subs_3661_ = lean_ctor_get(v___x_3652_, 5);
v_handlers_3662_ = lean_ctor_get(v___x_3652_, 6);
v_nextSub_3663_ = lean_ctor_get(v___x_3652_, 7);
v_touched_3664_ = lean_ctor_get(v___x_3652_, 8);
v_ports_3665_ = lean_ctor_get(v___x_3652_, 9);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3667_ = v___x_3652_;
v_isShared_3668_ = v_isSharedCheck_3681_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_ports_3665_);
lean_inc(v_touched_3664_);
lean_inc(v_nextSub_3663_);
lean_inc(v_handlers_3662_);
lean_inc(v_subs_3661_);
lean_inc(v_queue_3659_);
lean_inc(v_tables_3656_);
lean_inc(v_next_3655_);
lean_inc(v_live_3654_);
lean_inc(v_model_3653_);
lean_dec(v___x_3652_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3681_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3669_; uint8_t v___x_3670_; 
v___x_3669_ = lean_array_get_size(v_queue_3659_);
v___x_3670_ = lean_nat_dec_lt(v___y_3585_, v___x_3669_);
if (v___x_3670_ == 0)
{
lean_object* v___x_3671_; 
lean_del_object(v___x_3667_);
lean_dec(v_ports_3665_);
lean_dec_ref(v_touched_3664_);
lean_dec(v_nextSub_3663_);
lean_dec_ref(v_handlers_3662_);
lean_dec_ref(v_subs_3661_);
lean_dec_ref(v_queue_3659_);
lean_dec_ref(v_tables_3656_);
lean_dec(v_next_3655_);
lean_dec(v_live_3654_);
lean_dec(v_model_3653_);
lean_dec(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_inc_ref(v___y_3584_);
v___x_3671_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3584_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v___x_3672_; 
lean_dec_ref_known(v___x_3671_, 1);
v___x_3672_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3584_);
lean_dec_ref(v___y_3584_);
return v___x_3672_;
}
else
{
lean_dec_ref(v___y_3584_);
return v___x_3671_;
}
}
else
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3676_; 
v___x_3673_ = lean_array_fget(v_queue_3659_, v___y_3585_);
lean_dec(v___y_3585_);
v___x_3674_ = l_Array_extract___redArg(v_queue_3659_, v___y_3587_, v___x_3669_);
lean_dec_ref(v_queue_3659_);
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 4, v___x_3674_);
v___x_3676_ = v___x_3667_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_model_3653_);
lean_ctor_set(v_reuseFailAlloc_3680_, 1, v_live_3654_);
lean_ctor_set(v_reuseFailAlloc_3680_, 2, v_next_3655_);
lean_ctor_set(v_reuseFailAlloc_3680_, 3, v_tables_3656_);
lean_ctor_set(v_reuseFailAlloc_3680_, 4, v___x_3674_);
lean_ctor_set(v_reuseFailAlloc_3680_, 5, v_subs_3661_);
lean_ctor_set(v_reuseFailAlloc_3680_, 6, v_handlers_3662_);
lean_ctor_set(v_reuseFailAlloc_3680_, 7, v_nextSub_3663_);
lean_ctor_set(v_reuseFailAlloc_3680_, 8, v_touched_3664_);
lean_ctor_set(v_reuseFailAlloc_3680_, 9, v_ports_3665_);
lean_ctor_set_uint8(v_reuseFailAlloc_3680_, sizeof(void*)*10, v_dirty_3657_);
lean_ctor_set_uint8(v_reuseFailAlloc_3680_, sizeof(void*)*10 + 1, v_scheduled_3658_);
lean_ctor_set_uint8(v_reuseFailAlloc_3680_, sizeof(void*)*10 + 2, v_busy_3660_);
v___x_3676_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3677_ = lean_st_ref_swap(v___y_3586_, v___x_3676_);
lean_dec(v___y_3586_);
lean_dec(v___x_3677_);
lean_inc_ref(v___y_3584_);
v___x_3678_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3584_, v___x_3673_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v___x_3679_; 
lean_dec_ref_known(v___x_3678_, 1);
v___x_3679_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3584_);
lean_dec_ref(v___y_3584_);
return v___x_3679_;
}
else
{
lean_dec_ref(v___y_3584_);
return v___x_3678_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
return v___x_3632_;
}
}
}
}
else
{
lean_dec(v___y_3595_);
lean_dec(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
lean_dec_ref(v___y_3583_);
return v___x_3609_;
}
}
else
{
lean_dec(v___y_3595_);
lean_dec(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
lean_dec_ref(v___y_3583_);
return v___x_3606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3852_, lean_object* v_hot_3853_, lean_object* v_app_3854_, lean_object* v_a_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lasm_UI_App_run___redArg(v_inst_3852_, v_hot_3853_, v_app_3854_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3857_, lean_object* v_Model_3858_, lean_object* v_Msg_3859_, lean_object* v_inst_3860_, lean_object* v_hot_3861_, lean_object* v_app_3862_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_Lasm_UI_App_run___redArg(v_inst_3860_, v_hot_3861_, v_app_3862_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3865_, lean_object* v_Model_3866_, lean_object* v_Msg_3867_, lean_object* v_inst_3868_, lean_object* v_hot_3869_, lean_object* v_app_3870_, lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_UI_App_run(v_Flags_3865_, v_Model_3866_, v_Msg_3867_, v_inst_3868_, v_hot_3869_, v_app_3870_);
return v_res_3872_;
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
