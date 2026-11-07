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
uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object*, lean_object*);
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
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_io_get_random_bytes(size_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
v___x_350_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_349_);
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
v___x_586_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_585_);
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
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__11(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_987_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__10));
v___x_988_ = lean_unsigned_to_nat(2u);
v___x_989_ = lean_mk_empty_array_with_capacity(v___x_988_);
v___x_990_ = lean_array_push(v___x_989_, v___x_987_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_991_){
_start:
{
switch(lean_obj_tag(v_x_991_))
{
case 0:
{
lean_object* v_ms_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1010_; 
v_ms_992_ = lean_ctor_get(v_x_991_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_x_991_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_994_ = v_x_991_;
v_isShared_995_ = v_isSharedCheck_1010_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_ms_992_);
lean_dec(v_x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1010_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___y_997_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1003_ = lean_nat_to_int(v_ms_992_);
v___x_1004_ = lean_nat_abs(v___x_1003_);
v___x_1005_ = lean_cstr_to_nat("9007199254740991");
v___x_1006_ = lean_nat_dec_le(v___x_1004_, v___x_1005_);
lean_dec(v___x_1004_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1003_);
v___y_997_ = v___x_1007_;
goto v___jp_996_;
}
else
{
double v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = l_Float_ofInt(v___x_1003_);
lean_dec(v___x_1003_);
v___x_1009_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1009_, 0, v___x_1008_);
v___y_997_ = v___x_1009_;
goto v___jp_996_;
}
v___jp_996_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_998_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_999_ = lean_array_push(v___x_998_, v___y_997_);
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 7);
lean_ctor_set(v___x_994_, 0, v___x_999_);
v___x_1001_ = v___x_994_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
case 1:
{
lean_object* v___x_1011_; 
v___x_1011_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_1011_;
}
case 2:
{
uint8_t v_target_1012_; lean_object* v_event_1013_; lean_object* v_paths_1014_; lean_object* v___y_1016_; 
v_target_1012_ = lean_ctor_get_uint8(v_x_991_, sizeof(void*)*2);
v_event_1013_ = lean_ctor_get(v_x_991_, 0);
lean_inc_ref(v_event_1013_);
v_paths_1014_ = lean_ctor_get(v_x_991_, 1);
lean_inc(v_paths_1014_);
lean_dec_ref_known(v_x_991_, 2);
if (v_target_1012_ == 0)
{
lean_object* v___x_1032_; 
v___x_1032_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__7));
v___y_1016_ = v___x_1032_;
goto v___jp_1015_;
}
else
{
lean_object* v___x_1033_; 
v___x_1033_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___y_1016_ = v___x_1033_;
goto v___jp_1015_;
}
v___jp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; size_t v_sz_1022_; size_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
lean_inc_ref(v___y_1016_);
v___x_1017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___y_1016_);
v___x_1018_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_event_1013_);
v___x_1019_ = lean_box(0);
v___x_1020_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_1014_, v___x_1019_);
v___x_1021_ = lean_array_mk(v___x_1020_);
v_sz_1022_ = lean_array_size(v___x_1021_);
v___x_1023_ = ((size_t)0ULL);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1022_, v___x_1023_, v___x_1021_);
v___x_1025_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
v___x_1026_ = lean_unsigned_to_nat(3u);
v___x_1027_ = lean_mk_empty_array_with_capacity(v___x_1026_);
v___x_1028_ = lean_array_push(v___x_1027_, v___x_1017_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1018_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1025_);
v___x_1031_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
default: 
{
lean_object* v_name_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1044_; 
v_name_1034_ = lean_ctor_get(v_x_991_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_x_991_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1036_ = v_x_991_;
v_isShared_1037_ = v_isSharedCheck_1044_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_name_1034_);
lean_dec(v_x_991_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1044_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 4);
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_name_1034_);
v___x_1039_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__11, &l_Lasm_UI_Runtime_specData___closed__11_once, _init_l_Lasm_UI_Runtime_specData___closed__11);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1039_);
v___x_1042_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add___redArg(lean_object* v_d_1045_, lean_object* v_x_1046_){
_start:
{
if (lean_obj_tag(v_x_1046_) == 0)
{
return v_d_1045_;
}
else
{
lean_object* v_val_1047_; lean_object* v_msgs_1048_; uint8_t v_preventDefault_1049_; uint8_t v_stopPropagation_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1066_; 
v_val_1047_ = lean_ctor_get(v_x_1046_, 0);
lean_inc(v_val_1047_);
lean_dec_ref_known(v_x_1046_, 1);
v_msgs_1048_ = lean_ctor_get(v_d_1045_, 0);
v_preventDefault_1049_ = lean_ctor_get_uint8(v_d_1045_, sizeof(void*)*1);
v_stopPropagation_1050_ = lean_ctor_get_uint8(v_d_1045_, sizeof(void*)*1 + 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_d_1045_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1052_ = v_d_1045_;
v_isShared_1053_ = v_isSharedCheck_1066_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_msgs_1048_);
lean_dec(v_d_1045_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1066_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v_message_1054_; uint8_t v_preventDefault_1055_; uint8_t v_stopPropagation_1056_; lean_object* v___x_1057_; uint8_t v___y_1059_; 
v_message_1054_ = lean_ctor_get(v_val_1047_, 0);
lean_inc(v_message_1054_);
v_preventDefault_1055_ = lean_ctor_get_uint8(v_val_1047_, sizeof(void*)*1);
v_stopPropagation_1056_ = lean_ctor_get_uint8(v_val_1047_, sizeof(void*)*1 + 1);
lean_dec(v_val_1047_);
v___x_1057_ = lean_array_push(v_msgs_1048_, v_message_1054_);
if (v_preventDefault_1049_ == 0)
{
v___y_1059_ = v_preventDefault_1055_;
goto v___jp_1058_;
}
else
{
v___y_1059_ = v_preventDefault_1049_;
goto v___jp_1058_;
}
v___jp_1058_:
{
if (v_stopPropagation_1050_ == 0)
{
lean_object* v___x_1061_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1057_);
v___x_1061_ = v___x_1052_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1057_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*1, v___y_1059_);
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*1 + 1, v_stopPropagation_1056_);
return v___x_1061_;
}
}
else
{
lean_object* v___x_1064_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1057_);
v___x_1064_ = v___x_1052_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1065_, sizeof(void*)*1 + 1, v_stopPropagation_1050_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*1, v___y_1059_);
return v___x_1064_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add(lean_object* v_Msg_1067_, lean_object* v_d_1068_, lean_object* v_x_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_d_1068_, v_x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(lean_object* v_snd_1071_, lean_object* v_x_1072_, lean_object* v_x_1073_){
_start:
{
if (lean_obj_tag(v_x_1073_) == 0)
{
lean_dec(v_snd_1071_);
return v_x_1072_;
}
else
{
lean_object* v_head_1074_; lean_object* v_tail_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_head_1074_ = lean_ctor_get(v_x_1073_, 0);
lean_inc(v_head_1074_);
v_tail_1075_ = lean_ctor_get(v_x_1073_, 1);
lean_inc(v_tail_1075_);
lean_dec_ref_known(v_x_1073_, 2);
lean_inc(v_snd_1071_);
v___x_1076_ = lean_apply_1(v_head_1074_, v_snd_1071_);
v___x_1077_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_1072_, v___x_1076_);
v_x_1072_ = v___x_1077_;
v_x_1073_ = v_tail_1075_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide___redArg(lean_object* v_type_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_dec_ref(v_type_1079_);
return v_x_1081_;
}
else
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; lean_object* v_fst_1084_; lean_object* v_snd_1085_; lean_object* v___x_1086_; lean_object* v_d_1087_; uint8_t v_stopPropagation_1088_; 
v_head_1082_ = lean_ctor_get(v_x_1080_, 0);
lean_inc(v_head_1082_);
v_tail_1083_ = lean_ctor_get(v_x_1080_, 1);
lean_inc(v_tail_1083_);
lean_dec_ref_known(v_x_1080_, 2);
v_fst_1084_ = lean_ctor_get(v_head_1082_, 0);
lean_inc(v_fst_1084_);
v_snd_1085_ = lean_ctor_get(v_head_1082_, 1);
lean_inc(v_snd_1085_);
lean_dec(v_head_1082_);
lean_inc_ref(v_type_1079_);
v___x_1086_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_type_1079_, v_fst_1084_);
v_d_1087_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_1085_, v_x_1081_, v___x_1086_);
v_stopPropagation_1088_ = lean_ctor_get_uint8(v_d_1087_, sizeof(void*)*1 + 1);
if (v_stopPropagation_1088_ == 0)
{
v_x_1080_ = v_tail_1083_;
v_x_1081_ = v_d_1087_;
goto _start;
}
else
{
lean_dec(v_tail_1083_);
lean_dec_ref(v_type_1079_);
return v_d_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide(lean_object* v_Msg_1090_, lean_object* v_type_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lasm_UI_Runtime_decide___redArg(v_type_1091_, v_x_1092_, v_x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0(lean_object* v_Msg_1095_, lean_object* v_snd_1096_, lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_1096_, v_x_1097_, v_x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer(uint8_t v_frame_1100_, uint8_t v_preventDefault_1101_, uint8_t v_stopPropagation_1102_){
_start:
{
lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1121_; 
if (v_frame_1100_ == 0)
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_unsigned_to_nat(0u);
v___y_1121_ = v___x_1124_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_unsigned_to_nat(1u);
v___y_1121_ = v___x_1125_;
goto v___jp_1120_;
}
v___jp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1106_ = lean_nat_add(v___y_1104_, v___y_1105_);
lean_dec(v___y_1104_);
v___x_1107_ = lean_nat_to_int(v___x_1106_);
v___x_1108_ = lean_nat_abs(v___x_1107_);
v___x_1109_ = lean_cstr_to_nat("9007199254740991");
v___x_1110_ = lean_nat_dec_le(v___x_1108_, v___x_1109_);
lean_dec(v___x_1108_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1107_);
return v___x_1111_;
}
else
{
double v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = l_Float_ofInt(v___x_1107_);
lean_dec(v___x_1107_);
v___x_1113_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
v___jp_1114_:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_nat_add(v___y_1115_, v___y_1116_);
if (v_stopPropagation_1102_ == 0)
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___y_1104_ = v___x_1117_;
v___y_1105_ = v___x_1118_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_unsigned_to_nat(4u);
v___y_1104_ = v___x_1117_;
v___y_1105_ = v___x_1119_;
goto v___jp_1103_;
}
}
v___jp_1120_:
{
if (v_preventDefault_1101_ == 0)
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_unsigned_to_nat(0u);
v___y_1115_ = v___y_1121_;
v___y_1116_ = v___x_1122_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_unsigned_to_nat(2u);
v___y_1115_ = v___y_1121_;
v___y_1116_ = v___x_1123_;
goto v___jp_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer___boxed(lean_object* v_frame_1126_, lean_object* v_preventDefault_1127_, lean_object* v_stopPropagation_1128_){
_start:
{
uint8_t v_frame_boxed_1129_; uint8_t v_preventDefault_boxed_1130_; uint8_t v_stopPropagation_boxed_1131_; lean_object* v_res_1132_; 
v_frame_boxed_1129_ = lean_unbox(v_frame_1126_);
v_preventDefault_boxed_1130_ = lean_unbox(v_preventDefault_1127_);
v_stopPropagation_boxed_1131_ = lean_unbox(v_stopPropagation_1128_);
v_res_1132_ = l_Lasm_UI_Runtime_answer(v_frame_boxed_1129_, v_preventDefault_boxed_1130_, v_stopPropagation_boxed_1131_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_1135_){
_start:
{
if (v_x_1135_ == 0)
{
lean_object* v___x_1136_; 
v___x_1136_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_1136_;
}
else
{
lean_object* v___x_1137_; 
v___x_1137_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_1138_){
_start:
{
uint8_t v_x_22__boxed_1139_; lean_object* v_res_1140_; 
v_x_22__boxed_1139_ = lean_unbox(v_x_1138_);
v_res_1140_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_1139_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_1141_, lean_object* v_e_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1144_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_1145_ = lean_string_append(v_what_1141_, v___x_1144_);
v___x_1146_ = lean_io_error_to_string(v_e_1142_);
v___x_1147_ = lean_string_append(v___x_1145_, v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1148_ = lean_box(0);
v___x_1149_ = l_Lasm_UI_Runtime_Dom_error(v___x_1147_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1156_ == 0)
{
lean_object* v_unused_1157_; 
v_unused_1157_ = lean_ctor_get(v___x_1149_, 0);
lean_dec(v_unused_1157_);
v___x_1151_ = v___x_1149_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_dec(v___x_1149_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v___x_1148_);
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1148_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
else
{
lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; 
v_unused_1165_ = lean_ctor_get(v___x_1149_, 0);
lean_dec(v_unused_1165_);
v___x_1159_ = v___x_1149_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_dec(v___x_1149_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1148_);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1148_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_1166_, lean_object* v_e_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lasm_UI_Runtime_report(v_what_1166_, v_e_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_1170_){
_start:
{
lean_object* v_ref_1172_; lean_object* v___x_1173_; uint8_t v_dirty_1174_; 
v_ref_1172_ = lean_ctor_get(v_c_1170_, 1);
v___x_1173_ = lean_st_ref_get(v_ref_1172_);
v_dirty_1174_ = lean_ctor_get_uint8(v___x_1173_, sizeof(void*)*10);
if (v_dirty_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec(v___x_1173_);
v___x_1175_ = lean_box(v_dirty_1174_);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
else
{
uint8_t v_scheduled_1177_; 
v_scheduled_1177_ = lean_ctor_get_uint8(v___x_1173_, sizeof(void*)*10 + 1);
if (v_scheduled_1177_ == 0)
{
lean_object* v_model_1178_; lean_object* v_live_1179_; lean_object* v_next_1180_; lean_object* v_tables_1181_; lean_object* v_queue_1182_; uint8_t v_busy_1183_; lean_object* v_subs_1184_; lean_object* v_handlers_1185_; lean_object* v_nextSub_1186_; lean_object* v_touched_1187_; lean_object* v_ports_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1198_; 
v_model_1178_ = lean_ctor_get(v___x_1173_, 0);
v_live_1179_ = lean_ctor_get(v___x_1173_, 1);
v_next_1180_ = lean_ctor_get(v___x_1173_, 2);
v_tables_1181_ = lean_ctor_get(v___x_1173_, 3);
v_queue_1182_ = lean_ctor_get(v___x_1173_, 4);
v_busy_1183_ = lean_ctor_get_uint8(v___x_1173_, sizeof(void*)*10 + 2);
v_subs_1184_ = lean_ctor_get(v___x_1173_, 5);
v_handlers_1185_ = lean_ctor_get(v___x_1173_, 6);
v_nextSub_1186_ = lean_ctor_get(v___x_1173_, 7);
v_touched_1187_ = lean_ctor_get(v___x_1173_, 8);
v_ports_1188_ = lean_ctor_get(v___x_1173_, 9);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1190_ = v___x_1173_;
v_isShared_1191_ = v_isSharedCheck_1198_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_ports_1188_);
lean_inc(v_touched_1187_);
lean_inc(v_nextSub_1186_);
lean_inc(v_handlers_1185_);
lean_inc(v_subs_1184_);
lean_inc(v_queue_1182_);
lean_inc(v_tables_1181_);
lean_inc(v_next_1180_);
lean_inc(v_live_1179_);
lean_inc(v_model_1178_);
lean_dec(v___x_1173_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1198_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_model_1178_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v_live_1179_);
lean_ctor_set(v_reuseFailAlloc_1197_, 2, v_next_1180_);
lean_ctor_set(v_reuseFailAlloc_1197_, 3, v_tables_1181_);
lean_ctor_set(v_reuseFailAlloc_1197_, 4, v_queue_1182_);
lean_ctor_set(v_reuseFailAlloc_1197_, 5, v_subs_1184_);
lean_ctor_set(v_reuseFailAlloc_1197_, 6, v_handlers_1185_);
lean_ctor_set(v_reuseFailAlloc_1197_, 7, v_nextSub_1186_);
lean_ctor_set(v_reuseFailAlloc_1197_, 8, v_touched_1187_);
lean_ctor_set(v_reuseFailAlloc_1197_, 9, v_ports_1188_);
lean_ctor_set_uint8(v_reuseFailAlloc_1197_, sizeof(void*)*10, v_dirty_1174_);
lean_ctor_set_uint8(v_reuseFailAlloc_1197_, sizeof(void*)*10 + 2, v_busy_1183_);
v___x_1193_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_ctor_set_uint8(v___x_1193_, sizeof(void*)*10 + 1, v_dirty_1174_);
v___x_1194_ = lean_st_ref_swap(v_ref_1172_, v___x_1193_);
lean_dec(v___x_1194_);
v___x_1195_ = lean_box(v_dirty_1174_);
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
}
else
{
uint8_t v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_dec(v___x_1173_);
v___x_1199_ = 0;
v___x_1200_ = lean_box(v___x_1199_);
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1202_);
lean_dec_ref(v_c_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_1205_, lean_object* v_Model_1206_, lean_object* v_Msg_1207_, lean_object* v_c_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1211_, lean_object* v_Model_1212_, lean_object* v_Msg_1213_, lean_object* v_c_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1211_, v_Model_1212_, v_Msg_1213_, v_c_1214_);
lean_dec_ref(v_c_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1230_; 
v___x_1219_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1217_);
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1230_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1230_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_unbox(v_a_1220_);
lean_dec(v_a_1220_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1225_ = lean_box(0);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1225_);
v___x_1227_ = v___x_1222_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
else
{
lean_object* v___x_1229_; 
lean_del_object(v___x_1222_);
v___x_1229_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1231_, lean_object* v_a_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1231_);
lean_dec_ref(v_c_1231_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1234_, lean_object* v_Model_1235_, lean_object* v_Msg_1236_, lean_object* v_c_1237_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1240_, lean_object* v_Model_1241_, lean_object* v_Msg_1242_, lean_object* v_c_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1240_, v_Model_1241_, v_Msg_1242_, v_c_1243_);
lean_dec_ref(v_c_1243_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1246_, lean_object* v_b_1247_, lean_object* v_x_1248_){
_start:
{
if (lean_obj_tag(v_x_1248_) == 0)
{
lean_dec(v_b_1247_);
lean_dec(v_a_1246_);
return v_x_1248_;
}
else
{
lean_object* v_key_1249_; lean_object* v_value_1250_; lean_object* v_tail_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1263_; 
v_key_1249_ = lean_ctor_get(v_x_1248_, 0);
v_value_1250_ = lean_ctor_get(v_x_1248_, 1);
v_tail_1251_ = lean_ctor_get(v_x_1248_, 2);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_x_1248_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1253_ = v_x_1248_;
v_isShared_1254_ = v_isSharedCheck_1263_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_tail_1251_);
lean_inc(v_value_1250_);
lean_inc(v_key_1249_);
lean_dec(v_x_1248_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1263_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
uint8_t v___x_1255_; 
lean_inc(v_a_1246_);
lean_inc(v_key_1249_);
v___x_1255_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1249_, v_a_1246_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1246_, v_b_1247_, v_tail_1251_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 2, v___x_1256_);
v___x_1258_ = v___x_1253_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_key_1249_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_value_1250_);
lean_ctor_set(v_reuseFailAlloc_1259_, 2, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
else
{
lean_object* v___x_1261_; 
lean_dec(v_value_1250_);
lean_dec(v_key_1249_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 1, v_b_1247_);
lean_ctor_set(v___x_1253_, 0, v_a_1246_);
v___x_1261_ = v___x_1253_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1246_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_b_1247_);
lean_ctor_set(v_reuseFailAlloc_1262_, 2, v_tail_1251_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1264_, lean_object* v_x_1265_){
_start:
{
if (lean_obj_tag(v_x_1265_) == 0)
{
uint8_t v___x_1266_; 
lean_dec(v_a_1264_);
v___x_1266_ = 0;
return v___x_1266_;
}
else
{
lean_object* v_key_1267_; lean_object* v_tail_1268_; uint8_t v___x_1269_; 
v_key_1267_ = lean_ctor_get(v_x_1265_, 0);
lean_inc(v_key_1267_);
v_tail_1268_ = lean_ctor_get(v_x_1265_, 2);
lean_inc(v_tail_1268_);
lean_dec_ref_known(v_x_1265_, 3);
lean_inc(v_a_1264_);
v___x_1269_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1267_, v_a_1264_);
if (v___x_1269_ == 0)
{
v_x_1265_ = v_tail_1268_;
goto _start;
}
else
{
lean_dec(v_tail_1268_);
lean_dec(v_a_1264_);
return v___x_1269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1271_, lean_object* v_x_1272_){
_start:
{
uint8_t v_res_1273_; lean_object* v_r_1274_; 
v_res_1273_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1271_, v_x_1272_);
v_r_1274_ = lean_box(v_res_1273_);
return v_r_1274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1275_, lean_object* v_x_1276_){
_start:
{
if (lean_obj_tag(v_x_1276_) == 0)
{
return v_x_1275_;
}
else
{
lean_object* v_key_1277_; lean_object* v_value_1278_; lean_object* v_tail_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1302_; 
v_key_1277_ = lean_ctor_get(v_x_1276_, 0);
v_value_1278_ = lean_ctor_get(v_x_1276_, 1);
v_tail_1279_ = lean_ctor_get(v_x_1276_, 2);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1281_ = v_x_1276_;
v_isShared_1282_ = v_isSharedCheck_1302_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_tail_1279_);
lean_inc(v_value_1278_);
lean_inc(v_key_1277_);
lean_dec(v_x_1276_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1302_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; uint64_t v___x_1284_; uint64_t v___x_1285_; uint64_t v___x_1286_; uint64_t v_fold_1287_; uint64_t v___x_1288_; uint64_t v___x_1289_; uint64_t v___x_1290_; size_t v___x_1291_; size_t v___x_1292_; size_t v___x_1293_; size_t v___x_1294_; size_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1283_ = lean_array_get_size(v_x_1275_);
v___x_1284_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1277_);
v___x_1285_ = 32ULL;
v___x_1286_ = lean_uint64_shift_right(v___x_1284_, v___x_1285_);
v_fold_1287_ = lean_uint64_xor(v___x_1284_, v___x_1286_);
v___x_1288_ = 16ULL;
v___x_1289_ = lean_uint64_shift_right(v_fold_1287_, v___x_1288_);
v___x_1290_ = lean_uint64_xor(v_fold_1287_, v___x_1289_);
v___x_1291_ = lean_uint64_to_usize(v___x_1290_);
v___x_1292_ = lean_usize_of_nat(v___x_1283_);
v___x_1293_ = ((size_t)1ULL);
v___x_1294_ = lean_usize_sub(v___x_1292_, v___x_1293_);
v___x_1295_ = lean_usize_land(v___x_1291_, v___x_1294_);
v___x_1296_ = lean_array_uget_borrowed(v_x_1275_, v___x_1295_);
lean_inc(v___x_1296_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 2, v___x_1296_);
v___x_1298_ = v___x_1281_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_key_1277_);
lean_ctor_set(v_reuseFailAlloc_1301_, 1, v_value_1278_);
lean_ctor_set(v_reuseFailAlloc_1301_, 2, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_array_uset(v_x_1275_, v___x_1295_, v___x_1298_);
v_x_1275_ = v___x_1299_;
v_x_1276_ = v_tail_1279_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1303_, lean_object* v_source_1304_, lean_object* v_target_1305_){
_start:
{
lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1306_ = lean_array_get_size(v_source_1304_);
v___x_1307_ = lean_nat_dec_lt(v_i_1303_, v___x_1306_);
if (v___x_1307_ == 0)
{
lean_dec_ref(v_source_1304_);
lean_dec(v_i_1303_);
return v_target_1305_;
}
else
{
lean_object* v_es_1308_; lean_object* v___x_1309_; lean_object* v_source_1310_; lean_object* v_target_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_es_1308_ = lean_array_fget(v_source_1304_, v_i_1303_);
v___x_1309_ = lean_box(0);
v_source_1310_ = lean_array_fset(v_source_1304_, v_i_1303_, v___x_1309_);
v_target_1311_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1305_, v_es_1308_);
v___x_1312_ = lean_unsigned_to_nat(1u);
v___x_1313_ = lean_nat_add(v_i_1303_, v___x_1312_);
lean_dec(v_i_1303_);
v_i_1303_ = v___x_1313_;
v_source_1304_ = v_source_1310_;
v_target_1305_ = v_target_1311_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1315_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v_nbuckets_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1316_ = lean_array_get_size(v_data_1315_);
v___x_1317_ = lean_unsigned_to_nat(2u);
v_nbuckets_1318_ = lean_nat_mul(v___x_1316_, v___x_1317_);
v___x_1319_ = lean_unsigned_to_nat(0u);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_mk_array(v_nbuckets_1318_, v___x_1320_);
v___x_1322_ = lean_array_propagate_mark(v_data_1315_, v___x_1321_);
v___x_1323_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1319_, v_data_1315_, v___x_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1324_, lean_object* v_a_1325_, lean_object* v_b_1326_){
_start:
{
lean_object* v_size_1327_; lean_object* v_buckets_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1371_; 
v_size_1327_ = lean_ctor_get(v_m_1324_, 0);
v_buckets_1328_ = lean_ctor_get(v_m_1324_, 1);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_m_1324_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1330_ = v_m_1324_;
v_isShared_1331_ = v_isSharedCheck_1371_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_buckets_1328_);
lean_inc(v_size_1327_);
lean_dec(v_m_1324_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1371_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; uint64_t v___x_1333_; uint64_t v___x_1334_; uint64_t v___x_1335_; uint64_t v_fold_1336_; uint64_t v___x_1337_; uint64_t v___x_1338_; uint64_t v___x_1339_; size_t v___x_1340_; size_t v___x_1341_; size_t v___x_1342_; size_t v___x_1343_; size_t v___x_1344_; lean_object* v_bkt_1345_; uint8_t v___x_1346_; 
v___x_1332_ = lean_array_get_size(v_buckets_1328_);
v___x_1333_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1325_);
v___x_1334_ = 32ULL;
v___x_1335_ = lean_uint64_shift_right(v___x_1333_, v___x_1334_);
v_fold_1336_ = lean_uint64_xor(v___x_1333_, v___x_1335_);
v___x_1337_ = 16ULL;
v___x_1338_ = lean_uint64_shift_right(v_fold_1336_, v___x_1337_);
v___x_1339_ = lean_uint64_xor(v_fold_1336_, v___x_1338_);
v___x_1340_ = lean_uint64_to_usize(v___x_1339_);
v___x_1341_ = lean_usize_of_nat(v___x_1332_);
v___x_1342_ = ((size_t)1ULL);
v___x_1343_ = lean_usize_sub(v___x_1341_, v___x_1342_);
v___x_1344_ = lean_usize_land(v___x_1340_, v___x_1343_);
v_bkt_1345_ = lean_array_uget_borrowed(v_buckets_1328_, v___x_1344_);
lean_inc(v_bkt_1345_);
lean_inc(v_a_1325_);
v___x_1346_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1325_, v_bkt_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v_size_x27_1348_; lean_object* v___x_1349_; lean_object* v_buckets_x27_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1347_ = lean_unsigned_to_nat(1u);
v_size_x27_1348_ = lean_nat_add(v_size_1327_, v___x_1347_);
lean_dec(v_size_1327_);
lean_inc(v_bkt_1345_);
v___x_1349_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1349_, 0, v_a_1325_);
lean_ctor_set(v___x_1349_, 1, v_b_1326_);
lean_ctor_set(v___x_1349_, 2, v_bkt_1345_);
v_buckets_x27_1350_ = lean_array_uset(v_buckets_1328_, v___x_1344_, v___x_1349_);
v___x_1351_ = lean_unsigned_to_nat(4u);
v___x_1352_ = lean_nat_mul(v_size_x27_1348_, v___x_1351_);
v___x_1353_ = lean_unsigned_to_nat(3u);
v___x_1354_ = lean_nat_div(v___x_1352_, v___x_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_array_get_size(v_buckets_x27_1350_);
v___x_1356_ = lean_nat_dec_le(v___x_1354_, v___x_1355_);
lean_dec(v___x_1354_);
if (v___x_1356_ == 0)
{
lean_object* v_val_1357_; lean_object* v___x_1359_; 
v_val_1357_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1350_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 1, v_val_1357_);
lean_ctor_set(v___x_1330_, 0, v_size_x27_1348_);
v___x_1359_ = v___x_1330_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_size_x27_1348_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v_val_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
else
{
lean_object* v___x_1362_; 
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 1, v_buckets_x27_1350_);
lean_ctor_set(v___x_1330_, 0, v_size_x27_1348_);
v___x_1362_ = v___x_1330_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_size_x27_1348_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_buckets_x27_1350_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
else
{
lean_object* v___x_1364_; lean_object* v_buckets_x27_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1369_; 
lean_inc(v_bkt_1345_);
v___x_1364_ = lean_box(0);
v_buckets_x27_1365_ = lean_array_uset(v_buckets_1328_, v___x_1344_, v___x_1364_);
v___x_1366_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1325_, v_b_1326_, v_bkt_1345_);
v___x_1367_ = lean_array_uset(v_buckets_x27_1365_, v___x_1344_, v___x_1366_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 1, v___x_1367_);
v___x_1369_ = v___x_1330_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_size_1327_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1372_, lean_object* v_fallback_1373_, lean_object* v_x_1374_){
_start:
{
if (lean_obj_tag(v_x_1374_) == 0)
{
lean_dec(v_a_1372_);
lean_inc(v_fallback_1373_);
return v_fallback_1373_;
}
else
{
lean_object* v_key_1375_; lean_object* v_value_1376_; lean_object* v_tail_1377_; uint8_t v___x_1378_; 
v_key_1375_ = lean_ctor_get(v_x_1374_, 0);
lean_inc(v_key_1375_);
v_value_1376_ = lean_ctor_get(v_x_1374_, 1);
lean_inc(v_value_1376_);
v_tail_1377_ = lean_ctor_get(v_x_1374_, 2);
lean_inc(v_tail_1377_);
lean_dec_ref_known(v_x_1374_, 3);
lean_inc(v_a_1372_);
v___x_1378_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1375_, v_a_1372_);
if (v___x_1378_ == 0)
{
lean_dec(v_value_1376_);
v_x_1374_ = v_tail_1377_;
goto _start;
}
else
{
lean_dec(v_tail_1377_);
lean_dec(v_a_1372_);
return v_value_1376_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1380_, lean_object* v_fallback_1381_, lean_object* v_x_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1380_, v_fallback_1381_, v_x_1382_);
lean_dec(v_fallback_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1384_, lean_object* v_a_1385_, lean_object* v_fallback_1386_){
_start:
{
lean_object* v_buckets_1387_; lean_object* v___x_1388_; uint64_t v___x_1389_; uint64_t v___x_1390_; uint64_t v___x_1391_; uint64_t v_fold_1392_; uint64_t v___x_1393_; uint64_t v___x_1394_; uint64_t v___x_1395_; size_t v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_buckets_1387_ = lean_ctor_get(v_m_1384_, 1);
v___x_1388_ = lean_array_get_size(v_buckets_1387_);
v___x_1389_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1385_);
v___x_1390_ = 32ULL;
v___x_1391_ = lean_uint64_shift_right(v___x_1389_, v___x_1390_);
v_fold_1392_ = lean_uint64_xor(v___x_1389_, v___x_1391_);
v___x_1393_ = 16ULL;
v___x_1394_ = lean_uint64_shift_right(v_fold_1392_, v___x_1393_);
v___x_1395_ = lean_uint64_xor(v_fold_1392_, v___x_1394_);
v___x_1396_ = lean_uint64_to_usize(v___x_1395_);
v___x_1397_ = lean_usize_of_nat(v___x_1388_);
v___x_1398_ = ((size_t)1ULL);
v___x_1399_ = lean_usize_sub(v___x_1397_, v___x_1398_);
v___x_1400_ = lean_usize_land(v___x_1396_, v___x_1399_);
v___x_1401_ = lean_array_uget_borrowed(v_buckets_1387_, v___x_1400_);
lean_inc(v___x_1401_);
v___x_1402_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1385_, v_fallback_1386_, v___x_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1403_, lean_object* v_a_1404_, lean_object* v_fallback_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1403_, v_a_1404_, v_fallback_1405_);
lean_dec(v_fallback_1405_);
lean_dec_ref(v_m_1403_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1407_, lean_object* v_b_1408_){
_start:
{
if (lean_obj_tag(v_as_x27_1407_) == 0)
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v_b_1408_);
return v___x_1410_;
}
else
{
lean_object* v_head_1411_; lean_object* v_tail_1412_; lean_object* v_spec_1413_; lean_object* v_handle_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_head_1411_ = lean_ctor_get(v_as_x27_1407_, 0);
v_tail_1412_ = lean_ctor_get(v_as_x27_1407_, 1);
v_spec_1413_ = lean_ctor_get(v_head_1411_, 0);
v_handle_1414_ = lean_ctor_get(v_head_1411_, 1);
v___x_1415_ = lean_box(0);
lean_inc_n(v_spec_1413_, 2);
v___x_1416_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1408_, v_spec_1413_, v___x_1415_);
lean_inc_ref(v_handle_1414_);
v___x_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1417_, 0, v_handle_1414_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1408_, v_spec_1413_, v___x_1417_);
v_as_x27_1407_ = v_tail_1412_;
v_b_1408_ = v___x_1418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1420_, lean_object* v_b_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1420_, v_b_1421_);
lean_dec(v_as_x27_1420_);
return v_res_1423_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_buckets_1426_; lean_object* v___x_1427_; uint64_t v___x_1428_; uint64_t v___x_1429_; uint64_t v___x_1430_; uint64_t v_fold_1431_; uint64_t v___x_1432_; uint64_t v___x_1433_; uint64_t v___x_1434_; size_t v___x_1435_; size_t v___x_1436_; size_t v___x_1437_; size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v_buckets_1426_ = lean_ctor_get(v_m_1424_, 1);
v___x_1427_ = lean_array_get_size(v_buckets_1426_);
v___x_1428_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1425_);
v___x_1429_ = 32ULL;
v___x_1430_ = lean_uint64_shift_right(v___x_1428_, v___x_1429_);
v_fold_1431_ = lean_uint64_xor(v___x_1428_, v___x_1430_);
v___x_1432_ = 16ULL;
v___x_1433_ = lean_uint64_shift_right(v_fold_1431_, v___x_1432_);
v___x_1434_ = lean_uint64_xor(v_fold_1431_, v___x_1433_);
v___x_1435_ = lean_uint64_to_usize(v___x_1434_);
v___x_1436_ = lean_usize_of_nat(v___x_1427_);
v___x_1437_ = ((size_t)1ULL);
v___x_1438_ = lean_usize_sub(v___x_1436_, v___x_1437_);
v___x_1439_ = lean_usize_land(v___x_1435_, v___x_1438_);
v___x_1440_ = lean_array_uget_borrowed(v_buckets_1426_, v___x_1439_);
lean_inc(v___x_1440_);
v___x_1441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1425_, v___x_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1442_, lean_object* v_a_1443_){
_start:
{
uint8_t v_res_1444_; lean_object* v_r_1445_; 
v_res_1444_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1442_, v_a_1443_);
lean_dec_ref(v_m_1442_);
v_r_1445_ = lean_box(v_res_1444_);
return v_r_1445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1446_, lean_object* v_x_1447_){
_start:
{
if (lean_obj_tag(v_x_1447_) == 0)
{
lean_dec(v_a_1446_);
return v_x_1447_;
}
else
{
lean_object* v_key_1448_; lean_object* v_value_1449_; lean_object* v_tail_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1459_; 
v_key_1448_ = lean_ctor_get(v_x_1447_, 0);
v_value_1449_ = lean_ctor_get(v_x_1447_, 1);
v_tail_1450_ = lean_ctor_get(v_x_1447_, 2);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_x_1447_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1452_ = v_x_1447_;
v_isShared_1453_ = v_isSharedCheck_1459_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_tail_1450_);
lean_inc(v_value_1449_);
lean_inc(v_key_1448_);
lean_dec(v_x_1447_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1459_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
uint8_t v___x_1454_; 
lean_inc(v_a_1446_);
lean_inc(v_key_1448_);
v___x_1454_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1448_, v_a_1446_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1457_; 
v___x_1455_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1446_, v_tail_1450_);
if (v_isShared_1453_ == 0)
{
lean_ctor_set(v___x_1452_, 2, v___x_1455_);
v___x_1457_ = v___x_1452_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_key_1448_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_value_1449_);
lean_ctor_set(v_reuseFailAlloc_1458_, 2, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
else
{
lean_del_object(v___x_1452_);
lean_dec(v_value_1449_);
lean_dec(v_key_1448_);
lean_dec(v_a_1446_);
return v_tail_1450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_size_1462_; lean_object* v_buckets_1463_; lean_object* v___x_1464_; uint64_t v___x_1465_; uint64_t v___x_1466_; uint64_t v___x_1467_; uint64_t v_fold_1468_; uint64_t v___x_1469_; uint64_t v___x_1470_; uint64_t v___x_1471_; size_t v___x_1472_; size_t v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; size_t v___x_1476_; lean_object* v_bkt_1477_; uint8_t v___x_1478_; 
v_size_1462_ = lean_ctor_get(v_m_1460_, 0);
v_buckets_1463_ = lean_ctor_get(v_m_1460_, 1);
v___x_1464_ = lean_array_get_size(v_buckets_1463_);
v___x_1465_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1461_);
v___x_1466_ = 32ULL;
v___x_1467_ = lean_uint64_shift_right(v___x_1465_, v___x_1466_);
v_fold_1468_ = lean_uint64_xor(v___x_1465_, v___x_1467_);
v___x_1469_ = 16ULL;
v___x_1470_ = lean_uint64_shift_right(v_fold_1468_, v___x_1469_);
v___x_1471_ = lean_uint64_xor(v_fold_1468_, v___x_1470_);
v___x_1472_ = lean_uint64_to_usize(v___x_1471_);
v___x_1473_ = lean_usize_of_nat(v___x_1464_);
v___x_1474_ = ((size_t)1ULL);
v___x_1475_ = lean_usize_sub(v___x_1473_, v___x_1474_);
v___x_1476_ = lean_usize_land(v___x_1472_, v___x_1475_);
v_bkt_1477_ = lean_array_uget_borrowed(v_buckets_1463_, v___x_1476_);
lean_inc(v_bkt_1477_);
lean_inc(v_a_1461_);
v___x_1478_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1461_, v_bkt_1477_);
if (v___x_1478_ == 0)
{
lean_dec(v_a_1461_);
return v_m_1460_;
}
else
{
lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1491_; 
lean_inc(v_bkt_1477_);
lean_inc_ref(v_buckets_1463_);
lean_inc(v_size_1462_);
v_isSharedCheck_1491_ = !lean_is_exclusive(v_m_1460_);
if (v_isSharedCheck_1491_ == 0)
{
lean_object* v_unused_1492_; lean_object* v_unused_1493_; 
v_unused_1492_ = lean_ctor_get(v_m_1460_, 1);
lean_dec(v_unused_1492_);
v_unused_1493_ = lean_ctor_get(v_m_1460_, 0);
lean_dec(v_unused_1493_);
v___x_1480_ = v_m_1460_;
v_isShared_1481_ = v_isSharedCheck_1491_;
goto v_resetjp_1479_;
}
else
{
lean_dec(v_m_1460_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1491_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1482_; lean_object* v_buckets_x27_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1489_; 
v___x_1482_ = lean_box(0);
v_buckets_x27_1483_ = lean_array_uset(v_buckets_1463_, v___x_1476_, v___x_1482_);
v___x_1484_ = lean_unsigned_to_nat(1u);
v___x_1485_ = lean_nat_sub(v_size_1462_, v___x_1484_);
lean_dec(v_size_1462_);
v___x_1486_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1461_, v_bkt_1477_);
v___x_1487_ = lean_array_uset(v_buckets_x27_1483_, v___x_1476_, v___x_1486_);
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 1, v___x_1487_);
lean_ctor_set(v___x_1480_, 0, v___x_1485_);
v___x_1489_ = v___x_1480_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_){
_start:
{
if (lean_obj_tag(v_a_1495_) == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1498_, 0, v_a_1496_);
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
else
{
lean_object* v_key_1500_; lean_object* v_value_1501_; lean_object* v_tail_1502_; uint8_t v___x_1503_; 
v_key_1500_ = lean_ctor_get(v_a_1495_, 0);
lean_inc_n(v_key_1500_, 2);
v_value_1501_ = lean_ctor_get(v_a_1495_, 1);
lean_inc(v_value_1501_);
v_tail_1502_ = lean_ctor_get(v_a_1495_, 2);
lean_inc(v_tail_1502_);
lean_dec_ref_known(v_a_1495_, 3);
v___x_1503_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1494_, v_key_1500_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; 
lean_inc(v_key_1500_);
v___x_1504_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1496_, v_key_1500_);
if (lean_obj_tag(v_key_1500_) == 3)
{
lean_dec_ref_known(v_key_1500_, 1);
lean_dec(v_value_1501_);
v_a_1495_ = v_tail_1502_;
v_a_1496_ = v___x_1504_;
goto _start;
}
else
{
lean_dec(v_key_1500_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1501_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_dec_ref_known(v___x_1506_, 1);
v_a_1495_ = v_tail_1502_;
v_a_1496_ = v___x_1504_;
goto _start;
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v___x_1504_);
lean_dec(v_tail_1502_);
v_a_1508_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1506_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1506_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_dec(v_value_1501_);
v_a_1495_ = v_tail_1502_;
v_a_1496_ = v___x_1504_;
goto _start;
}
}
}
else
{
lean_dec(v_value_1501_);
lean_dec(v_key_1500_);
v_a_1495_ = v_tail_1502_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1518_, v_a_1519_, v_a_1520_);
lean_dec_ref(v_a_1518_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1523_, lean_object* v_as_1524_, size_t v_sz_1525_, size_t v_i_1526_, lean_object* v_b_1527_){
_start:
{
uint8_t v___x_1529_; 
v___x_1529_ = lean_usize_dec_lt(v_i_1526_, v_sz_1525_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v_b_1527_);
return v___x_1530_;
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1532_; 
v_a_1531_ = lean_array_uget_borrowed(v_as_1524_, v_i_1526_);
lean_inc(v_a_1531_);
v___x_1532_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1523_, v_a_1531_, v_b_1527_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1545_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
if (lean_obj_tag(v_a_1533_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1539_; 
v_a_1537_ = lean_ctor_get(v_a_1533_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v_a_1533_, 1);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v_a_1537_);
v___x_1539_ = v___x_1535_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
else
{
lean_object* v_a_1541_; size_t v___x_1542_; size_t v___x_1543_; 
lean_del_object(v___x_1535_);
v_a_1541_ = lean_ctor_get(v_a_1533_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v_a_1533_, 1);
v___x_1542_ = ((size_t)1ULL);
v___x_1543_ = lean_usize_add(v_i_1526_, v___x_1542_);
v_i_1526_ = v___x_1543_;
v_b_1527_ = v_a_1541_;
goto _start;
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
v_a_1546_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1532_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1532_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1554_, lean_object* v_as_1555_, lean_object* v_sz_1556_, lean_object* v_i_1557_, lean_object* v_b_1558_, lean_object* v___y_1559_){
_start:
{
size_t v_sz_boxed_1560_; size_t v_i_boxed_1561_; lean_object* v_res_1562_; 
v_sz_boxed_1560_ = lean_unbox_usize(v_sz_1556_);
lean_dec(v_sz_1556_);
v_i_boxed_1561_ = lean_unbox_usize(v_i_1557_);
lean_dec(v_i_1557_);
v_res_1562_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1554_, v_as_1555_, v_sz_boxed_1560_, v_i_boxed_1561_, v_b_1558_);
lean_dec_ref(v_as_1555_);
lean_dec_ref(v_a_1554_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1563_, lean_object* v_x_1564_){
_start:
{
if (lean_obj_tag(v_x_1564_) == 0)
{
lean_object* v___x_1565_; 
lean_dec(v_a_1563_);
v___x_1565_ = lean_box(0);
return v___x_1565_;
}
else
{
lean_object* v_key_1566_; lean_object* v_value_1567_; lean_object* v_tail_1568_; uint8_t v___x_1569_; 
v_key_1566_ = lean_ctor_get(v_x_1564_, 0);
lean_inc(v_key_1566_);
v_value_1567_ = lean_ctor_get(v_x_1564_, 1);
lean_inc(v_value_1567_);
v_tail_1568_ = lean_ctor_get(v_x_1564_, 2);
lean_inc(v_tail_1568_);
lean_dec_ref_known(v_x_1564_, 3);
lean_inc(v_a_1563_);
v___x_1569_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1566_, v_a_1563_);
if (v___x_1569_ == 0)
{
lean_dec(v_value_1567_);
v_x_1564_ = v_tail_1568_;
goto _start;
}
else
{
lean_object* v___x_1571_; 
lean_dec(v_tail_1568_);
lean_dec(v_a_1563_);
v___x_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_value_1567_);
return v___x_1571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_buckets_1574_; lean_object* v___x_1575_; uint64_t v___x_1576_; uint64_t v___x_1577_; uint64_t v___x_1578_; uint64_t v_fold_1579_; uint64_t v___x_1580_; uint64_t v___x_1581_; uint64_t v___x_1582_; size_t v___x_1583_; size_t v___x_1584_; size_t v___x_1585_; size_t v___x_1586_; size_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_buckets_1574_ = lean_ctor_get(v_m_1572_, 1);
v___x_1575_ = lean_array_get_size(v_buckets_1574_);
v___x_1576_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1573_);
v___x_1577_ = 32ULL;
v___x_1578_ = lean_uint64_shift_right(v___x_1576_, v___x_1577_);
v_fold_1579_ = lean_uint64_xor(v___x_1576_, v___x_1578_);
v___x_1580_ = 16ULL;
v___x_1581_ = lean_uint64_shift_right(v_fold_1579_, v___x_1580_);
v___x_1582_ = lean_uint64_xor(v_fold_1579_, v___x_1581_);
v___x_1583_ = lean_uint64_to_usize(v___x_1582_);
v___x_1584_ = lean_usize_of_nat(v___x_1575_);
v___x_1585_ = ((size_t)1ULL);
v___x_1586_ = lean_usize_sub(v___x_1584_, v___x_1585_);
v___x_1587_ = lean_usize_land(v___x_1583_, v___x_1586_);
v___x_1588_ = lean_array_uget_borrowed(v_buckets_1574_, v___x_1587_);
lean_inc(v___x_1588_);
v___x_1589_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1573_, v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1590_, v_a_1591_);
lean_dec_ref(v_m_1590_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1593_, lean_object* v_fallback_1594_, lean_object* v_x_1595_){
_start:
{
if (lean_obj_tag(v_x_1595_) == 0)
{
lean_inc(v_fallback_1594_);
return v_fallback_1594_;
}
else
{
lean_object* v_key_1596_; lean_object* v_value_1597_; lean_object* v_tail_1598_; uint8_t v___x_1599_; 
v_key_1596_ = lean_ctor_get(v_x_1595_, 0);
v_value_1597_ = lean_ctor_get(v_x_1595_, 1);
v_tail_1598_ = lean_ctor_get(v_x_1595_, 2);
v___x_1599_ = lean_nat_dec_eq(v_key_1596_, v_a_1593_);
if (v___x_1599_ == 0)
{
v_x_1595_ = v_tail_1598_;
goto _start;
}
else
{
lean_inc(v_value_1597_);
return v_value_1597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1601_, lean_object* v_fallback_1602_, lean_object* v_x_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1601_, v_fallback_1602_, v_x_1603_);
lean_dec(v_x_1603_);
lean_dec(v_fallback_1602_);
lean_dec(v_a_1601_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1605_, lean_object* v_a_1606_, lean_object* v_fallback_1607_){
_start:
{
lean_object* v_buckets_1608_; lean_object* v___x_1609_; uint64_t v___x_1610_; uint64_t v___x_1611_; uint64_t v___x_1612_; uint64_t v_fold_1613_; uint64_t v___x_1614_; uint64_t v___x_1615_; uint64_t v___x_1616_; size_t v___x_1617_; size_t v___x_1618_; size_t v___x_1619_; size_t v___x_1620_; size_t v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_buckets_1608_ = lean_ctor_get(v_m_1605_, 1);
v___x_1609_ = lean_array_get_size(v_buckets_1608_);
v___x_1610_ = lean_uint64_of_nat(v_a_1606_);
v___x_1611_ = 32ULL;
v___x_1612_ = lean_uint64_shift_right(v___x_1610_, v___x_1611_);
v_fold_1613_ = lean_uint64_xor(v___x_1610_, v___x_1612_);
v___x_1614_ = 16ULL;
v___x_1615_ = lean_uint64_shift_right(v_fold_1613_, v___x_1614_);
v___x_1616_ = lean_uint64_xor(v_fold_1613_, v___x_1615_);
v___x_1617_ = lean_uint64_to_usize(v___x_1616_);
v___x_1618_ = lean_usize_of_nat(v___x_1609_);
v___x_1619_ = ((size_t)1ULL);
v___x_1620_ = lean_usize_sub(v___x_1618_, v___x_1619_);
v___x_1621_ = lean_usize_land(v___x_1617_, v___x_1620_);
v___x_1622_ = lean_array_uget_borrowed(v_buckets_1608_, v___x_1621_);
v___x_1623_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1606_, v_fallback_1607_, v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1624_, lean_object* v_a_1625_, lean_object* v_fallback_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1624_, v_a_1625_, v_fallback_1626_);
lean_dec(v_fallback_1626_);
lean_dec(v_a_1625_);
lean_dec_ref(v_m_1624_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1629_, lean_object* v_value_1630_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1632_ = ((lean_object*)(l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1633_ = lean_unsigned_to_nat(1u);
v___x_1634_ = lean_mk_empty_array_with_capacity(v___x_1633_);
v___x_1635_ = lean_array_push(v___x_1634_, v_value_1630_);
v___x_1636_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_1629_, v___x_1632_, v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1637_, lean_object* v_value_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1637_, v_value_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1646_);
lean_dec_ref(v_x_1646_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
if (lean_obj_tag(v_a_1648_) == 0)
{
lean_object* v___x_1650_; 
v___x_1650_ = l_List_reverse___redArg(v_a_1649_);
return v___x_1650_;
}
else
{
lean_object* v_head_1651_; lean_object* v_tail_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1666_; 
v_head_1651_ = lean_ctor_get(v_a_1648_, 0);
v_tail_1652_ = lean_ctor_get(v_a_1648_, 1);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_a_1648_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1654_ = v_a_1648_;
v_isShared_1655_ = v_isSharedCheck_1666_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_tail_1652_);
lean_inc(v_head_1651_);
lean_dec(v_a_1648_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1666_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v_fst_1656_; lean_object* v_snd_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1663_; 
v_fst_1656_ = lean_ctor_get(v_head_1651_, 0);
lean_inc(v_fst_1656_);
v_snd_1657_ = lean_ctor_get(v_head_1651_, 1);
lean_inc(v_snd_1657_);
lean_dec(v_head_1651_);
v___x_1658_ = lean_unsigned_to_nat(2u);
v___x_1659_ = lean_mk_empty_array_with_capacity(v___x_1658_);
v___x_1660_ = lean_array_push(v___x_1659_, v_fst_1656_);
v___x_1661_ = lean_array_push(v___x_1660_, v_snd_1657_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 1, v_a_1649_);
lean_ctor_set(v___x_1654_, 0, v___x_1661_);
v___x_1663_ = v___x_1654_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_a_1649_);
v___x_1663_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
v_a_1648_ = v_tail_1652_;
v_a_1649_ = v___x_1663_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1667_, lean_object* v_a_1668_){
_start:
{
if (lean_obj_tag(v_a_1667_) == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_array_to_list(v_a_1668_);
return v___x_1669_;
}
else
{
lean_object* v_head_1670_; 
v_head_1670_ = lean_ctor_get(v_a_1667_, 0);
if (lean_obj_tag(v_head_1670_) == 7)
{
lean_object* v_tail_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1693_; 
lean_inc_ref(v_head_1670_);
v_tail_1671_ = lean_ctor_get(v_a_1667_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_a_1667_);
if (v_isSharedCheck_1693_ == 0)
{
lean_object* v_unused_1694_; 
v_unused_1694_ = lean_ctor_get(v_a_1667_, 0);
lean_dec(v_unused_1694_);
v___x_1673_ = v_a_1667_;
v_isShared_1674_ = v_isSharedCheck_1693_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_tail_1671_);
lean_dec(v_a_1667_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1693_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v_items_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
v_items_1675_ = lean_ctor_get(v_head_1670_, 0);
lean_inc_ref(v_items_1675_);
lean_dec_ref_known(v_head_1670_, 1);
v___x_1676_ = lean_array_get_size(v_items_1675_);
v___x_1677_ = lean_unsigned_to_nat(2u);
v___x_1678_ = lean_nat_dec_eq(v___x_1676_, v___x_1677_);
if (v___x_1678_ == 0)
{
lean_dec_ref(v_items_1675_);
lean_del_object(v___x_1673_);
v_a_1667_ = v_tail_1671_;
goto _start;
}
else
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_unsigned_to_nat(0u);
v___x_1681_ = lean_array_fget_borrowed(v_items_1675_, v___x_1680_);
if (lean_obj_tag(v___x_1681_) == 4)
{
lean_object* v_s_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v_s_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc_ref(v_s_1682_);
v___x_1683_ = lean_unsigned_to_nat(1u);
v___x_1684_ = lean_array_fget(v_items_1675_, v___x_1683_);
lean_dec_ref(v_items_1675_);
if (lean_obj_tag(v___x_1684_) == 4)
{
lean_object* v_s_1685_; lean_object* v___x_1687_; 
v_s_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc_ref(v_s_1685_);
lean_dec_ref_known(v___x_1684_, 1);
if (v_isShared_1674_ == 0)
{
lean_ctor_set_tag(v___x_1673_, 0);
lean_ctor_set(v___x_1673_, 1, v_s_1685_);
lean_ctor_set(v___x_1673_, 0, v_s_1682_);
v___x_1687_ = v___x_1673_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_s_1682_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_s_1685_);
v___x_1687_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_array_push(v_a_1668_, v___x_1687_);
v_a_1667_ = v_tail_1671_;
v_a_1668_ = v___x_1688_;
goto _start;
}
}
else
{
lean_dec(v___x_1684_);
lean_dec_ref(v_s_1682_);
lean_del_object(v___x_1673_);
v_a_1667_ = v_tail_1671_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1675_);
lean_del_object(v___x_1673_);
v_a_1667_ = v_tail_1671_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1695_; 
v_tail_1695_ = lean_ctor_get(v_a_1667_, 1);
lean_inc(v_tail_1695_);
lean_dec_ref_known(v_a_1667_, 2);
v_a_1667_ = v_tail_1695_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1697_, lean_object* v_s_1698_){
_start:
{
lean_object* v_model_1699_; lean_object* v_live_1700_; lean_object* v_next_1701_; lean_object* v_tables_1702_; uint8_t v_dirty_1703_; uint8_t v_scheduled_1704_; lean_object* v_queue_1705_; lean_object* v_subs_1706_; lean_object* v_handlers_1707_; lean_object* v_nextSub_1708_; lean_object* v_touched_1709_; lean_object* v_ports_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
v_model_1699_ = lean_ctor_get(v_s_1698_, 0);
v_live_1700_ = lean_ctor_get(v_s_1698_, 1);
v_next_1701_ = lean_ctor_get(v_s_1698_, 2);
v_tables_1702_ = lean_ctor_get(v_s_1698_, 3);
v_dirty_1703_ = lean_ctor_get_uint8(v_s_1698_, sizeof(void*)*10);
v_scheduled_1704_ = lean_ctor_get_uint8(v_s_1698_, sizeof(void*)*10 + 1);
v_queue_1705_ = lean_ctor_get(v_s_1698_, 4);
v_subs_1706_ = lean_ctor_get(v_s_1698_, 5);
v_handlers_1707_ = lean_ctor_get(v_s_1698_, 6);
v_nextSub_1708_ = lean_ctor_get(v_s_1698_, 7);
v_touched_1709_ = lean_ctor_get(v_s_1698_, 8);
v_ports_1710_ = lean_ctor_get(v_s_1698_, 9);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_s_1698_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v_s_1698_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_ports_1710_);
lean_inc(v_touched_1709_);
lean_inc(v_nextSub_1708_);
lean_inc(v_handlers_1707_);
lean_inc(v_subs_1706_);
lean_inc(v_queue_1705_);
lean_inc(v_tables_1702_);
lean_inc(v_next_1701_);
lean_inc(v_live_1700_);
lean_inc(v_model_1699_);
lean_dec(v_s_1698_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_model_1699_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v_live_1700_);
lean_ctor_set(v_reuseFailAlloc_1716_, 2, v_next_1701_);
lean_ctor_set(v_reuseFailAlloc_1716_, 3, v_tables_1702_);
lean_ctor_set(v_reuseFailAlloc_1716_, 4, v_queue_1705_);
lean_ctor_set(v_reuseFailAlloc_1716_, 5, v_subs_1706_);
lean_ctor_set(v_reuseFailAlloc_1716_, 6, v_handlers_1707_);
lean_ctor_set(v_reuseFailAlloc_1716_, 7, v_nextSub_1708_);
lean_ctor_set(v_reuseFailAlloc_1716_, 8, v_touched_1709_);
lean_ctor_set(v_reuseFailAlloc_1716_, 9, v_ports_1710_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*10, v_dirty_1703_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*10 + 1, v_scheduled_1704_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_ctor_set_uint8(v___x_1715_, sizeof(void*)*10 + 2, v_busy_1697_);
return v___x_1715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1718_, lean_object* v_s_1719_){
_start:
{
uint8_t v_busy_boxed_1720_; lean_object* v_res_1721_; 
v_busy_boxed_1720_ = lean_unbox(v_busy_1718_);
v_res_1721_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1720_, v_s_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1722_, lean_object* v_msg_1723_, lean_object* v_x_1724_){
_start:
{
lean_object* v___x_1726_; 
lean_inc_ref(v_c_1722_);
v___x_1726_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1722_, v_msg_1723_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v___x_1727_; 
lean_dec_ref_known(v___x_1726_, 1);
v___x_1727_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1722_);
lean_dec_ref(v_c_1722_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1737_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; uint8_t v___x_1733_; lean_object* v___x_1735_; 
v___x_1732_ = lean_alloc_ctor(2, 0, 1);
v___x_1733_ = lean_unbox(v_a_1728_);
lean_dec(v_a_1728_);
lean_ctor_set_uint8(v___x_1732_, 0, v___x_1733_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1732_);
v___x_1735_ = v___x_1730_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1732_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
v_a_1738_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1727_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1727_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v_c_1722_);
v_a_1746_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1726_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1726_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1754_, lean_object* v_msg_1755_, lean_object* v_x_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1754_, v_msg_1755_, v_x_1756_);
lean_dec_ref(v_x_1756_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1762_, lean_object* v_c_1763_, lean_object* v___f_1764_, lean_object* v_args_1765_){
_start:
{
lean_object* v___y_1768_; lean_object* v___x_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; 
v___x_1798_ = lean_array_get_size(v_args_1765_);
v___x_1799_ = lean_unsigned_to_nat(5u);
v___x_1800_ = lean_nat_dec_eq(v___x_1798_, v___x_1799_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; uint8_t v___x_1802_; 
v___x_1801_ = lean_unsigned_to_nat(2u);
v___x_1802_ = lean_nat_dec_eq(v___x_1798_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_apply_1(v___f_1764_, v_args_1765_);
v___y_1768_ = v___x_1803_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = lean_unsigned_to_nat(0u);
v___x_1805_ = lean_array_fget(v_args_1765_, v___x_1804_);
if (lean_obj_tag(v___x_1805_) == 2)
{
uint8_t v_b_1806_; 
v_b_1806_ = lean_ctor_get_uint8(v___x_1805_, 0);
if (v_b_1806_ == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(1u);
v___x_1808_ = lean_array_fget(v_args_1765_, v___x_1807_);
lean_dec_ref(v_args_1765_);
if (lean_obj_tag(v___x_1808_) == 4)
{
lean_object* v_s_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_dec_ref_known(v___x_1805_, 0);
lean_dec_ref(v___f_1764_);
v_s_1809_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1808_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_s_1809_);
lean_dec(v___x_1808_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 0);
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_s_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
v___y_1768_ = v___x_1814_;
goto v___jp_1767_;
}
}
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1817_ = lean_mk_empty_array_with_capacity(v___x_1801_);
v___x_1818_ = lean_array_push(v___x_1817_, v___x_1805_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1808_);
v___x_1820_ = lean_apply_1(v___f_1764_, v___x_1819_);
v___y_1768_ = v___x_1820_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1821_ = lean_unsigned_to_nat(1u);
v___x_1822_ = lean_array_fget(v_args_1765_, v___x_1821_);
lean_dec_ref(v_args_1765_);
v___x_1823_ = lean_mk_empty_array_with_capacity(v___x_1801_);
v___x_1824_ = lean_array_push(v___x_1823_, v___x_1805_);
v___x_1825_ = lean_array_push(v___x_1824_, v___x_1822_);
v___x_1826_ = lean_apply_1(v___f_1764_, v___x_1825_);
v___y_1768_ = v___x_1826_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1827_ = lean_unsigned_to_nat(1u);
v___x_1828_ = lean_array_fget(v_args_1765_, v___x_1827_);
lean_dec_ref(v_args_1765_);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1801_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1805_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1828_);
v___x_1832_ = lean_apply_1(v___f_1764_, v___x_1831_);
v___y_1768_ = v___x_1832_;
goto v___jp_1767_;
}
}
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = lean_array_fget_borrowed(v_args_1765_, v___x_1833_);
if (lean_obj_tag(v___x_1834_) == 2)
{
uint8_t v_b_1835_; 
v_b_1835_ = lean_ctor_get_uint8(v___x_1834_, 0);
if (v_b_1835_ == 1)
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_unsigned_to_nat(2u);
v___x_1837_ = lean_array_fget_borrowed(v_args_1765_, v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 4)
{
lean_object* v_s_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v_s_1838_ = lean_ctor_get(v___x_1837_, 0);
v___x_1839_ = lean_unsigned_to_nat(3u);
v___x_1840_ = lean_array_fget_borrowed(v_args_1765_, v___x_1839_);
if (lean_obj_tag(v___x_1840_) == 7)
{
lean_object* v_items_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_items_1841_ = lean_ctor_get(v___x_1840_, 0);
v___x_1842_ = lean_unsigned_to_nat(4u);
v___x_1843_ = lean_array_fget(v_args_1765_, v___x_1842_);
if (lean_obj_tag(v___x_1843_) == 4)
{
lean_object* v_s_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1862_; 
lean_inc_ref(v_items_1841_);
lean_inc_ref(v_s_1838_);
lean_dec_ref(v___f_1764_);
v_s_1844_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1846_ = v___x_1843_;
v_isShared_1847_ = v_isSharedCheck_1862_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_s_1844_);
lean_dec(v___x_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1862_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___y_1849_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = lean_array_fget(v_args_1765_, v___x_1857_);
lean_dec_ref(v_args_1765_);
if (lean_obj_tag(v___x_1858_) == 3)
{
double v_n_1859_; uint64_t v___x_1860_; lean_object* v___x_1861_; 
v_n_1859_ = lean_ctor_get_float(v___x_1858_, 0);
lean_dec_ref_known(v___x_1858_, 0);
v___x_1860_ = lean_float_to_uint64(v_n_1859_);
v___x_1861_ = lean_uint64_to_nat(v___x_1860_);
v___y_1849_ = v___x_1861_;
goto v___jp_1848_;
}
else
{
lean_dec(v___x_1858_);
v___y_1849_ = v___x_1833_;
goto v___jp_1848_;
}
v___jp_1848_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1850_ = lean_array_to_list(v_items_1841_);
v___x_1851_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1852_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1850_, v___x_1851_);
v___x_1853_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1853_, 0, v___y_1849_);
lean_ctor_set(v___x_1853_, 1, v_s_1838_);
lean_ctor_set(v___x_1853_, 2, v___x_1852_);
lean_ctor_set(v___x_1853_, 3, v_s_1844_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set_tag(v___x_1846_, 1);
lean_ctor_set(v___x_1846_, 0, v___x_1853_);
v___x_1855_ = v___x_1846_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
v___y_1768_ = v___x_1855_;
goto v___jp_1767_;
}
}
}
}
else
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
lean_inc_ref(v___x_1840_);
lean_inc_ref(v___x_1837_);
lean_inc_ref(v___x_1834_);
v___x_1863_ = lean_unsigned_to_nat(1u);
v___x_1864_ = lean_array_fget(v_args_1765_, v___x_1863_);
lean_dec_ref(v_args_1765_);
v___x_1865_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1834_);
v___x_1867_ = lean_array_push(v___x_1866_, v___x_1864_);
v___x_1868_ = lean_array_push(v___x_1867_, v___x_1837_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1840_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1843_);
v___x_1871_ = lean_apply_1(v___f_1764_, v___x_1870_);
v___y_1768_ = v___x_1871_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
lean_inc(v___x_1840_);
lean_inc_ref(v___x_1837_);
lean_inc_ref(v___x_1834_);
v___x_1872_ = lean_unsigned_to_nat(1u);
v___x_1873_ = lean_array_fget(v_args_1765_, v___x_1872_);
v___x_1874_ = lean_unsigned_to_nat(4u);
v___x_1875_ = lean_array_fget(v_args_1765_, v___x_1874_);
lean_dec_ref(v_args_1765_);
v___x_1876_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1877_ = lean_array_push(v___x_1876_, v___x_1834_);
v___x_1878_ = lean_array_push(v___x_1877_, v___x_1873_);
v___x_1879_ = lean_array_push(v___x_1878_, v___x_1837_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1840_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1875_);
v___x_1882_ = lean_apply_1(v___f_1764_, v___x_1881_);
v___y_1768_ = v___x_1882_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_inc(v___x_1837_);
lean_inc_ref(v___x_1834_);
v___x_1883_ = lean_unsigned_to_nat(1u);
v___x_1884_ = lean_array_fget(v_args_1765_, v___x_1883_);
v___x_1885_ = lean_unsigned_to_nat(3u);
v___x_1886_ = lean_array_fget(v_args_1765_, v___x_1885_);
v___x_1887_ = lean_unsigned_to_nat(4u);
v___x_1888_ = lean_array_fget(v_args_1765_, v___x_1887_);
lean_dec_ref(v_args_1765_);
v___x_1889_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1890_ = lean_array_push(v___x_1889_, v___x_1834_);
v___x_1891_ = lean_array_push(v___x_1890_, v___x_1884_);
v___x_1892_ = lean_array_push(v___x_1891_, v___x_1837_);
v___x_1893_ = lean_array_push(v___x_1892_, v___x_1886_);
v___x_1894_ = lean_array_push(v___x_1893_, v___x_1888_);
v___x_1895_ = lean_apply_1(v___f_1764_, v___x_1894_);
v___y_1768_ = v___x_1895_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
lean_inc_ref(v___x_1834_);
v___x_1896_ = lean_unsigned_to_nat(1u);
v___x_1897_ = lean_array_fget(v_args_1765_, v___x_1896_);
v___x_1898_ = lean_unsigned_to_nat(2u);
v___x_1899_ = lean_array_fget(v_args_1765_, v___x_1898_);
v___x_1900_ = lean_unsigned_to_nat(3u);
v___x_1901_ = lean_array_fget(v_args_1765_, v___x_1900_);
v___x_1902_ = lean_unsigned_to_nat(4u);
v___x_1903_ = lean_array_fget(v_args_1765_, v___x_1902_);
lean_dec_ref(v_args_1765_);
v___x_1904_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1905_ = lean_array_push(v___x_1904_, v___x_1834_);
v___x_1906_ = lean_array_push(v___x_1905_, v___x_1897_);
v___x_1907_ = lean_array_push(v___x_1906_, v___x_1899_);
v___x_1908_ = lean_array_push(v___x_1907_, v___x_1901_);
v___x_1909_ = lean_array_push(v___x_1908_, v___x_1903_);
v___x_1910_ = lean_apply_1(v___f_1764_, v___x_1909_);
v___y_1768_ = v___x_1910_;
goto v___jp_1767_;
}
}
else
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
lean_inc(v___x_1834_);
v___x_1911_ = lean_unsigned_to_nat(1u);
v___x_1912_ = lean_array_fget(v_args_1765_, v___x_1911_);
v___x_1913_ = lean_unsigned_to_nat(2u);
v___x_1914_ = lean_array_fget(v_args_1765_, v___x_1913_);
v___x_1915_ = lean_unsigned_to_nat(3u);
v___x_1916_ = lean_array_fget(v_args_1765_, v___x_1915_);
v___x_1917_ = lean_unsigned_to_nat(4u);
v___x_1918_ = lean_array_fget(v_args_1765_, v___x_1917_);
lean_dec_ref(v_args_1765_);
v___x_1919_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1920_ = lean_array_push(v___x_1919_, v___x_1834_);
v___x_1921_ = lean_array_push(v___x_1920_, v___x_1912_);
v___x_1922_ = lean_array_push(v___x_1921_, v___x_1914_);
v___x_1923_ = lean_array_push(v___x_1922_, v___x_1916_);
v___x_1924_ = lean_array_push(v___x_1923_, v___x_1918_);
v___x_1925_ = lean_apply_1(v___f_1764_, v___x_1924_);
v___y_1768_ = v___x_1925_;
goto v___jp_1767_;
}
}
v___jp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_apply_1(v_handle_1762_, v___y_1768_);
lean_inc_ref(v_c_1763_);
v___x_1770_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1763_, v___x_1769_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v___x_1771_; 
lean_dec_ref_known(v___x_1770_, 1);
v___x_1771_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1763_);
lean_dec_ref(v_c_1763_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1781_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1781_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1781_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; uint8_t v___x_1777_; lean_object* v___x_1779_; 
v___x_1776_ = lean_alloc_ctor(2, 0, 1);
v___x_1777_ = lean_unbox(v_a_1772_);
lean_dec(v_a_1772_);
lean_ctor_set_uint8(v___x_1776_, 0, v___x_1777_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1776_);
v___x_1779_ = v___x_1774_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1776_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
v_a_1782_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1771_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1771_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v_c_1763_);
v_a_1790_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1770_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1770_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1926_, lean_object* v_c_1927_, lean_object* v___f_1928_, lean_object* v_args_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1926_, v_c_1927_, v___f_1928_, v_args_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1932_, lean_object* v_m_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1932_, v_m_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1936_, lean_object* v_e_1937_){
_start:
{
switch(lean_obj_tag(v_e_1937_))
{
case 0:
{
lean_object* v_msg_1939_; lean_object* v___x_1940_; 
v_msg_1939_ = lean_ctor_get(v_e_1937_, 0);
lean_inc(v_msg_1939_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_1940_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1936_, v_msg_1939_);
return v___x_1940_;
}
case 1:
{
lean_object* v_ms_1941_; lean_object* v_msg_1942_; lean_object* v___f_1943_; lean_object* v___x_1944_; 
v_ms_1941_ = lean_ctor_get(v_e_1937_, 0);
lean_inc(v_ms_1941_);
v_msg_1942_ = lean_ctor_get(v_e_1937_, 1);
lean_inc(v_msg_1942_);
lean_dec_ref_known(v_e_1937_, 2);
v___f_1943_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1943_, 0, v_c_1936_);
lean_closure_set(v___f_1943_, 1, v_msg_1942_);
v___x_1944_ = l_Lasm_JS_Function_ofSyncFn(v___f_1943_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1946_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref_known(v___x_1944_, 1);
v___x_1946_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1941_, v_a_1945_);
return v___x_1946_;
}
else
{
lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1954_; 
lean_dec(v_ms_1941_);
v_a_1947_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1949_ = v___x_1944_;
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1944_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1952_; 
if (v_isShared_1950_ == 0)
{
v___x_1952_ = v___x_1949_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1947_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
case 2:
{
lean_object* v_request_1955_; lean_object* v_handle_1956_; lean_object* v___f_1957_; lean_object* v___f_1958_; lean_object* v___x_1959_; 
v_request_1955_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_request_1955_);
v_handle_1956_ = lean_ctor_get(v_e_1937_, 1);
lean_inc(v_handle_1956_);
lean_dec_ref_known(v_e_1937_, 2);
v___f_1957_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1958_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1958_, 0, v_handle_1956_);
lean_closure_set(v___f_1958_, 1, v_c_1936_);
lean_closure_set(v___f_1958_, 2, v___f_1957_);
v___x_1959_ = l_Lasm_JS_Function_ofSyncFn(v___f_1958_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v_method_1961_; lean_object* v_url_1962_; lean_object* v_headers_1963_; lean_object* v_body_1964_; lean_object* v_credentials_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; size_t v_sz_1969_; size_t v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v_method_1961_ = lean_ctor_get(v_request_1955_, 0);
lean_inc_ref(v_method_1961_);
v_url_1962_ = lean_ctor_get(v_request_1955_, 1);
lean_inc_ref(v_url_1962_);
v_headers_1963_ = lean_ctor_get(v_request_1955_, 2);
lean_inc(v_headers_1963_);
v_body_1964_ = lean_ctor_get(v_request_1955_, 3);
lean_inc(v_body_1964_);
v_credentials_1965_ = lean_ctor_get(v_request_1955_, 4);
lean_inc_ref(v_credentials_1965_);
lean_dec_ref(v_request_1955_);
v___x_1966_ = lean_box(0);
v___x_1967_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1963_, v___x_1966_);
v___x_1968_ = lean_array_mk(v___x_1967_);
v_sz_1969_ = lean_array_size(v___x_1968_);
v___x_1970_ = ((size_t)0ULL);
v___x_1971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1969_, v___x_1970_, v___x_1968_);
v___x_1972_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1971_);
v___x_1973_ = l_Lasm_UI_Runtime_Dom_http(v_method_1961_, v_url_1962_, v___x_1972_, v_body_1964_, v_credentials_1965_, v_a_1960_);
return v___x_1973_;
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
lean_dec_ref(v_request_1955_);
v_a_1974_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1959_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1959_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
case 3:
{
lean_object* v_n_1982_; lean_object* v_handle_1983_; size_t v___x_1984_; lean_object* v___x_1985_; 
v_n_1982_ = lean_ctor_get(v_e_1937_, 0);
lean_inc(v_n_1982_);
v_handle_1983_ = lean_ctor_get(v_e_1937_, 1);
lean_inc(v_handle_1983_);
lean_dec_ref_known(v_e_1937_, 2);
v___x_1984_ = lean_usize_of_nat(v_n_1982_);
lean_dec(v_n_1982_);
v___x_1985_ = lean_io_get_random_bytes(v___x_1984_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_1987_ = lean_apply_1(v_handle_1983_, v_a_1986_);
v___x_1988_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1936_, v___x_1987_);
return v___x_1988_;
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
lean_dec(v_handle_1983_);
lean_dec_ref(v_c_1936_);
v_a_1989_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1985_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1985_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
case 4:
{
lean_object* v_handle_1997_; lean_object* v___x_1998_; 
v_handle_1997_ = lean_ctor_get(v_e_1937_, 0);
lean_inc(v_handle_1997_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_1998_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = lean_apply_1(v_handle_1997_, v_a_1999_);
v___x_2001_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1936_, v___x_2000_);
return v___x_2001_;
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec(v_handle_1997_);
lean_dec_ref(v_c_1936_);
v_a_2002_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1998_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1998_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
case 5:
{
lean_object* v_url_2010_; uint8_t v_replace_2011_; lean_object* v___x_2012_; 
lean_dec_ref(v_c_1936_);
v_url_2010_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_url_2010_);
v_replace_2011_ = lean_ctor_get_uint8(v_e_1937_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2012_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_2010_, v_replace_2011_);
return v___x_2012_;
}
case 6:
{
lean_object* v_n_2013_; lean_object* v___x_2014_; 
lean_dec_ref(v_c_1936_);
v_n_2013_ = lean_ctor_get(v_e_1937_, 0);
lean_inc(v_n_2013_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2014_ = l_Lasm_UI_Runtime_Dom_go(v_n_2013_);
return v___x_2014_;
}
case 7:
{
lean_object* v_url_2015_; lean_object* v___x_2016_; 
lean_dec_ref(v_c_1936_);
v_url_2015_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_url_2015_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2016_ = l_Lasm_UI_Runtime_Dom_load(v_url_2015_);
return v___x_2016_;
}
case 8:
{
uint8_t v_storage_2017_; lean_object* v_key_2018_; lean_object* v_value_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
lean_dec_ref(v_c_1936_);
v_storage_2017_ = lean_ctor_get_uint8(v_e_1937_, sizeof(void*)*2);
v_key_2018_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_key_2018_);
v_value_2019_ = lean_ctor_get(v_e_1937_, 1);
lean_inc_ref(v_value_2019_);
lean_dec_ref_known(v_e_1937_, 2);
v___x_2020_ = l_Lasm_UI_Runtime_storageName(v_storage_2017_);
v___x_2021_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_2020_, v_key_2018_, v_value_2019_);
return v___x_2021_;
}
case 9:
{
uint8_t v_storage_2022_; lean_object* v_key_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec_ref(v_c_1936_);
v_storage_2022_ = lean_ctor_get_uint8(v_e_1937_, sizeof(void*)*1);
v_key_2023_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_key_2023_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2024_ = l_Lasm_UI_Runtime_storageName(v_storage_2022_);
v___x_2025_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_2024_, v_key_2023_);
return v___x_2025_;
}
case 10:
{
uint8_t v_storage_2026_; lean_object* v_key_2027_; lean_object* v_handle_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_storage_2026_ = lean_ctor_get_uint8(v_e_1937_, sizeof(void*)*2);
v_key_2027_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_key_2027_);
v_handle_2028_ = lean_ctor_get(v_e_1937_, 1);
lean_inc(v_handle_2028_);
lean_dec_ref_known(v_e_1937_, 2);
v___x_2029_ = l_Lasm_UI_Runtime_storageName(v_storage_2026_);
v___x_2030_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_2029_, v_key_2027_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2031_);
lean_dec_ref_known(v___x_2030_, 1);
v___x_2032_ = lean_apply_1(v_handle_2028_, v_a_2031_);
v___x_2033_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1936_, v___x_2032_);
return v___x_2033_;
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec(v_handle_2028_);
lean_dec_ref(v_c_1936_);
v_a_2034_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2030_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2030_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
case 11:
{
lean_object* v_id_2042_; uint8_t v_blur_2043_; lean_object* v___x_2044_; 
lean_dec_ref(v_c_1936_);
v_id_2042_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_id_2042_);
v_blur_2043_ = lean_ctor_get_uint8(v_e_1937_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2044_ = l_Lasm_UI_Runtime_Dom_focus(v_id_2042_, v_blur_2043_);
return v___x_2044_;
}
case 12:
{
lean_object* v_name_2045_; lean_object* v_value_2046_; lean_object* v___x_2047_; 
lean_dec_ref(v_c_1936_);
v_name_2045_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_name_2045_);
v_value_2046_ = lean_ctor_get(v_e_1937_, 1);
lean_inc(v_value_2046_);
lean_dec_ref_known(v_e_1937_, 2);
v___x_2047_ = l_Lasm_Web_App_Raw_port(v_name_2045_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2049_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_a_2048_);
lean_dec_ref_known(v___x_2047_, 1);
v___x_2049_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_2048_, v_value_2046_);
return v___x_2049_;
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2057_; 
lean_dec(v_value_2046_);
v_a_2050_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2052_ = v___x_2047_;
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_a_2050_);
lean_dec(v___x_2047_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2050_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
case 13:
{
lean_object* v_title_2058_; lean_object* v___x_2059_; 
lean_dec_ref(v_c_1936_);
v_title_2058_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_title_2058_);
lean_dec_ref_known(v_e_1937_, 1);
v___x_2059_ = l_Lasm_UI_Runtime_Dom_title(v_title_2058_);
return v___x_2059_;
}
default: 
{
lean_object* v_run_2060_; lean_object* v___f_2061_; lean_object* v___x_2062_; 
v_run_2060_ = lean_ctor_get(v_e_1937_, 0);
lean_inc_ref(v_run_2060_);
lean_dec_ref_known(v_e_1937_, 1);
v___f_2061_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2061_, 0, v_c_1936_);
v___x_2062_ = lean_apply_2(v_run_2060_, v___f_2061_, lean_box(0));
return v___x_2062_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_2064_, lean_object* v_as_x27_2065_, lean_object* v_b_2066_){
_start:
{
if (lean_obj_tag(v_as_x27_2065_) == 0)
{
lean_object* v___x_2068_; 
lean_dec_ref(v_c_2064_);
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v_b_2066_);
return v___x_2068_;
}
else
{
lean_object* v_head_2069_; lean_object* v_tail_2070_; lean_object* v___x_2071_; lean_object* v___y_2073_; lean_object* v___x_2075_; 
v_head_2069_ = lean_ctor_get(v_as_x27_2065_, 0);
v_tail_2070_ = lean_ctor_get(v_as_x27_2065_, 1);
v___x_2071_ = lean_box(0);
lean_inc(v_head_2069_);
lean_inc_ref(v_c_2064_);
v___x_2075_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2064_, v_head_2069_);
if (lean_obj_tag(v___x_2075_) == 0)
{
v___y_2073_ = v___x_2075_;
goto v___jp_2072_;
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2077_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_2078_ = l_Lasm_UI_Runtime_report(v___x_2077_, v_a_2076_);
v___y_2073_ = v___x_2078_;
goto v___jp_2072_;
}
v___jp_2072_:
{
if (lean_obj_tag(v___y_2073_) == 0)
{
lean_dec_ref_known(v___y_2073_, 1);
v_as_x27_2065_ = v_tail_2070_;
v_b_2066_ = v___x_2071_;
goto _start;
}
else
{
lean_dec_ref(v_c_2064_);
return v___y_2073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_2079_, lean_object* v_c_2080_){
_start:
{
lean_object* v___x_2082_; uint8_t v___x_2083_; lean_object* v___x_2084_; lean_object* v_model_2085_; lean_object* v_live_2086_; lean_object* v_next_2087_; lean_object* v_tables_2088_; uint8_t v_scheduled_2089_; lean_object* v_queue_2090_; uint8_t v_busy_2091_; lean_object* v_subs_2092_; lean_object* v_handlers_2093_; lean_object* v_nextSub_2094_; lean_object* v_touched_2095_; lean_object* v_ports_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2118_; 
v___x_2082_ = lean_box(0);
v___x_2083_ = 1;
v___x_2084_ = lean_st_ref_get(v___x_2079_);
v_model_2085_ = lean_ctor_get(v___x_2084_, 0);
v_live_2086_ = lean_ctor_get(v___x_2084_, 1);
v_next_2087_ = lean_ctor_get(v___x_2084_, 2);
v_tables_2088_ = lean_ctor_get(v___x_2084_, 3);
v_scheduled_2089_ = lean_ctor_get_uint8(v___x_2084_, sizeof(void*)*10 + 1);
v_queue_2090_ = lean_ctor_get(v___x_2084_, 4);
v_busy_2091_ = lean_ctor_get_uint8(v___x_2084_, sizeof(void*)*10 + 2);
v_subs_2092_ = lean_ctor_get(v___x_2084_, 5);
v_handlers_2093_ = lean_ctor_get(v___x_2084_, 6);
v_nextSub_2094_ = lean_ctor_get(v___x_2084_, 7);
v_touched_2095_ = lean_ctor_get(v___x_2084_, 8);
v_ports_2096_ = lean_ctor_get(v___x_2084_, 9);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2098_ = v___x_2084_;
v_isShared_2099_ = v_isSharedCheck_2118_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_ports_2096_);
lean_inc(v_touched_2095_);
lean_inc(v_nextSub_2094_);
lean_inc(v_handlers_2093_);
lean_inc(v_subs_2092_);
lean_inc(v_queue_2090_);
lean_inc(v_tables_2088_);
lean_inc(v_next_2087_);
lean_inc(v_live_2086_);
lean_inc(v_model_2085_);
lean_dec(v___x_2084_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2118_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; uint8_t v___x_2102_; 
v___x_2100_ = lean_unsigned_to_nat(0u);
v___x_2101_ = lean_array_get_size(v_queue_2090_);
v___x_2102_ = lean_nat_dec_lt(v___x_2100_, v___x_2101_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; 
lean_del_object(v___x_2098_);
lean_dec(v_ports_2096_);
lean_dec_ref(v_touched_2095_);
lean_dec(v_nextSub_2094_);
lean_dec_ref(v_handlers_2093_);
lean_dec_ref(v_subs_2092_);
lean_dec_ref(v_queue_2090_);
lean_dec_ref(v_tables_2088_);
lean_dec(v_next_2087_);
lean_dec(v_live_2086_);
lean_dec(v_model_2085_);
lean_dec_ref(v_c_2080_);
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2082_);
return v___x_2103_;
}
else
{
lean_object* v_app_2104_; lean_object* v_update_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v_fst_2108_; lean_object* v_snd_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v_app_2104_ = lean_ctor_get(v_c_2080_, 0);
v_update_2105_ = lean_ctor_get(v_app_2104_, 1);
v___x_2106_ = lean_array_fget_borrowed(v_queue_2090_, v___x_2100_);
lean_inc_ref(v_update_2105_);
lean_inc(v___x_2106_);
v___x_2107_ = lean_apply_2(v_update_2105_, v___x_2106_, v_model_2085_);
v_fst_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_fst_2108_);
v_snd_2109_ = lean_ctor_get(v___x_2107_, 1);
lean_inc(v_snd_2109_);
lean_dec_ref(v___x_2107_);
v___x_2110_ = lean_unsigned_to_nat(1u);
v___x_2111_ = l_Array_extract___redArg(v_queue_2090_, v___x_2110_, v___x_2101_);
lean_dec_ref(v_queue_2090_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 4, v___x_2111_);
lean_ctor_set(v___x_2098_, 0, v_fst_2108_);
v___x_2113_ = v___x_2098_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_fst_2108_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_live_2086_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_next_2087_);
lean_ctor_set(v_reuseFailAlloc_2117_, 3, v_tables_2088_);
lean_ctor_set(v_reuseFailAlloc_2117_, 4, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2117_, 5, v_subs_2092_);
lean_ctor_set(v_reuseFailAlloc_2117_, 6, v_handlers_2093_);
lean_ctor_set(v_reuseFailAlloc_2117_, 7, v_nextSub_2094_);
lean_ctor_set(v_reuseFailAlloc_2117_, 8, v_touched_2095_);
lean_ctor_set(v_reuseFailAlloc_2117_, 9, v_ports_2096_);
lean_ctor_set_uint8(v_reuseFailAlloc_2117_, sizeof(void*)*10 + 1, v_scheduled_2089_);
lean_ctor_set_uint8(v_reuseFailAlloc_2117_, sizeof(void*)*10 + 2, v_busy_2091_);
v___x_2113_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
lean_ctor_set_uint8(v___x_2113_, sizeof(void*)*10, v___x_2083_);
v___x_2114_ = lean_st_ref_swap(v___x_2079_, v___x_2113_);
lean_dec(v___x_2114_);
lean_inc_ref(v_c_2080_);
v___x_2115_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2080_, v_snd_2109_, v___x_2082_);
lean_dec(v_snd_2109_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_dec_ref_known(v___x_2115_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_2080_);
return v___x_2115_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2119_ = lean_box(0);
v___x_2120_ = lean_unsigned_to_nat(16u);
v___x_2121_ = lean_mk_array(v___x_2120_, v___x_2119_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_2123_ = lean_unsigned_to_nat(0u);
v___x_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
lean_ctor_set(v___x_2124_, 1, v___x_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_2125_, lean_object* v_c_2126_, lean_object* v_as_x27_2127_, lean_object* v_b_2128_){
_start:
{
if (lean_obj_tag(v_as_x27_2127_) == 0)
{
lean_object* v___x_2130_; 
lean_dec_ref(v_c_2126_);
lean_dec(v_v_2125_);
v___x_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2130_, 0, v_b_2128_);
return v___x_2130_;
}
else
{
lean_object* v_head_2131_; lean_object* v_tail_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_head_2131_ = lean_ctor_get(v_as_x27_2127_, 0);
v_tail_2132_ = lean_ctor_get(v_as_x27_2127_, 1);
v___x_2133_ = lean_box(0);
v___x_2134_ = lean_unsigned_to_nat(1u);
v___x_2135_ = lean_mk_empty_array_with_capacity(v___x_2134_);
lean_inc(v_v_2125_);
v___x_2136_ = lean_array_push(v___x_2135_, v_v_2125_);
lean_inc(v_head_2131_);
v___x_2137_ = lean_apply_1(v_head_2131_, v___x_2136_);
if (lean_obj_tag(v___x_2137_) == 1)
{
lean_object* v_val_2138_; lean_object* v_message_2139_; lean_object* v___x_2140_; 
v_val_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_val_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v_message_2139_ = lean_ctor_get(v_val_2138_, 0);
lean_inc(v_message_2139_);
lean_dec(v_val_2138_);
lean_inc_ref(v_c_2126_);
v___x_2140_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2126_, v_message_2139_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_dec_ref_known(v___x_2140_, 1);
v_as_x27_2127_ = v_tail_2132_;
v_b_2128_ = v___x_2133_;
goto _start;
}
else
{
lean_dec_ref(v_c_2126_);
lean_dec(v_v_2125_);
return v___x_2140_;
}
}
else
{
lean_dec(v___x_2137_);
v_as_x27_2127_ = v_tail_2132_;
v_b_2128_ = v___x_2133_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_2143_, lean_object* v_name_2144_, lean_object* v_c_2145_, lean_object* v_v_2146_){
_start:
{
lean_object* v___x_2148_; lean_object* v_subs_2149_; lean_object* v_handlers_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2148_ = lean_st_ref_get(v_ref_2143_);
v_subs_2149_ = lean_ctor_get(v___x_2148_, 5);
lean_inc_ref(v_subs_2149_);
v_handlers_2150_ = lean_ctor_get(v___x_2148_, 6);
lean_inc_ref(v_handlers_2150_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_name_2144_);
v___x_2152_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_2149_, v___x_2151_);
lean_dec_ref(v_subs_2149_);
if (lean_obj_tag(v___x_2152_) == 1)
{
lean_object* v_val_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_val_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_val_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v___x_2154_ = lean_box(0);
v___x_2155_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2150_, v_val_2153_, v___x_2154_);
lean_dec(v_val_2153_);
lean_dec_ref(v_handlers_2150_);
v___x_2156_ = lean_box(0);
lean_inc_ref(v_c_2145_);
v___x_2157_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2146_, v_c_2145_, v___x_2155_, v___x_2156_);
lean_dec(v___x_2155_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v___x_2158_; 
lean_dec_ref_known(v___x_2157_, 1);
v___x_2158_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2145_);
lean_dec_ref(v_c_2145_);
return v___x_2158_;
}
else
{
lean_dec_ref(v_c_2145_);
return v___x_2157_;
}
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
lean_dec(v___x_2152_);
lean_dec_ref(v_handlers_2150_);
lean_dec(v_v_2146_);
lean_dec_ref(v_c_2145_);
v___x_2159_ = lean_box(0);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
return v___x_2160_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_2161_, lean_object* v_name_2162_, lean_object* v_c_2163_, lean_object* v_v_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_2161_, v_name_2162_, v_c_2163_, v_v_2164_);
lean_dec(v_ref_2161_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_2167_, lean_object* v_name_2168_){
_start:
{
lean_object* v_ref_2170_; lean_object* v___f_2171_; lean_object* v___x_2172_; lean_object* v_model_2173_; lean_object* v_live_2174_; lean_object* v_next_2175_; lean_object* v_tables_2176_; uint8_t v_dirty_2177_; uint8_t v_scheduled_2178_; lean_object* v_queue_2179_; uint8_t v_busy_2180_; lean_object* v_subs_2181_; lean_object* v_handlers_2182_; lean_object* v_nextSub_2183_; lean_object* v_touched_2184_; lean_object* v_ports_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2205_; 
v_ref_2170_ = lean_ctor_get(v_c_2167_, 1);
lean_inc_n(v_ref_2170_, 2);
lean_inc_ref(v_name_2168_);
v___f_2171_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2171_, 0, v_ref_2170_);
lean_closure_set(v___f_2171_, 1, v_name_2168_);
lean_closure_set(v___f_2171_, 2, v_c_2167_);
v___x_2172_ = lean_st_ref_take(v_ref_2170_);
v_model_2173_ = lean_ctor_get(v___x_2172_, 0);
v_live_2174_ = lean_ctor_get(v___x_2172_, 1);
v_next_2175_ = lean_ctor_get(v___x_2172_, 2);
v_tables_2176_ = lean_ctor_get(v___x_2172_, 3);
v_dirty_2177_ = lean_ctor_get_uint8(v___x_2172_, sizeof(void*)*10);
v_scheduled_2178_ = lean_ctor_get_uint8(v___x_2172_, sizeof(void*)*10 + 1);
v_queue_2179_ = lean_ctor_get(v___x_2172_, 4);
v_busy_2180_ = lean_ctor_get_uint8(v___x_2172_, sizeof(void*)*10 + 2);
v_subs_2181_ = lean_ctor_get(v___x_2172_, 5);
v_handlers_2182_ = lean_ctor_get(v___x_2172_, 6);
v_nextSub_2183_ = lean_ctor_get(v___x_2172_, 7);
v_touched_2184_ = lean_ctor_get(v___x_2172_, 8);
v_ports_2185_ = lean_ctor_get(v___x_2172_, 9);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2187_ = v___x_2172_;
v_isShared_2188_ = v_isSharedCheck_2205_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_ports_2185_);
lean_inc(v_touched_2184_);
lean_inc(v_nextSub_2183_);
lean_inc(v_handlers_2182_);
lean_inc(v_subs_2181_);
lean_inc(v_queue_2179_);
lean_inc(v_tables_2176_);
lean_inc(v_next_2175_);
lean_inc(v_live_2174_);
lean_inc(v_model_2173_);
lean_dec(v___x_2172_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2205_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_inc_ref(v_name_2168_);
v___x_2189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2189_, 0, v_name_2168_);
lean_ctor_set(v___x_2189_, 1, v_ports_2185_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 9, v___x_2189_);
v___x_2191_ = v___x_2187_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_model_2173_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_live_2174_);
lean_ctor_set(v_reuseFailAlloc_2204_, 2, v_next_2175_);
lean_ctor_set(v_reuseFailAlloc_2204_, 3, v_tables_2176_);
lean_ctor_set(v_reuseFailAlloc_2204_, 4, v_queue_2179_);
lean_ctor_set(v_reuseFailAlloc_2204_, 5, v_subs_2181_);
lean_ctor_set(v_reuseFailAlloc_2204_, 6, v_handlers_2182_);
lean_ctor_set(v_reuseFailAlloc_2204_, 7, v_nextSub_2183_);
lean_ctor_set(v_reuseFailAlloc_2204_, 8, v_touched_2184_);
lean_ctor_set(v_reuseFailAlloc_2204_, 9, v___x_2189_);
lean_ctor_set_uint8(v_reuseFailAlloc_2204_, sizeof(void*)*10, v_dirty_2177_);
lean_ctor_set_uint8(v_reuseFailAlloc_2204_, sizeof(void*)*10 + 1, v_scheduled_2178_);
lean_ctor_set_uint8(v_reuseFailAlloc_2204_, sizeof(void*)*10 + 2, v_busy_2180_);
v___x_2191_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = lean_st_ref_put(v_ref_2170_, v___x_2191_);
lean_dec(v_ref_2170_);
v___x_2193_ = l_Lasm_Web_App_Raw_port(v_name_2168_);
if (lean_obj_tag(v___x_2193_) == 0)
{
lean_object* v_a_2194_; lean_object* v___x_2195_; 
v_a_2194_ = lean_ctor_get(v___x_2193_, 0);
lean_inc(v_a_2194_);
lean_dec_ref_known(v___x_2193_, 1);
v___x_2195_ = l_Lasm_Web_App_Port_subscribe(v_a_2194_, v___f_2171_);
return v___x_2195_;
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
lean_dec_ref(v___f_2171_);
v_a_2196_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2193_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2193_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_2206_, lean_object* v_c_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_){
_start:
{
if (lean_obj_tag(v_a_2208_) == 0)
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_dec_ref(v_c_2207_);
v___x_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2211_, 0, v_a_2209_);
v___x_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
return v___x_2212_;
}
else
{
lean_object* v_snd_2213_; lean_object* v_key_2214_; lean_object* v_value_2215_; lean_object* v_tail_2216_; lean_object* v_fst_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2287_; 
v_snd_2213_ = lean_ctor_get(v_a_2209_, 1);
lean_inc(v_snd_2213_);
v_key_2214_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_key_2214_);
v_value_2215_ = lean_ctor_get(v_a_2208_, 1);
lean_inc(v_value_2215_);
v_tail_2216_ = lean_ctor_get(v_a_2208_, 2);
lean_inc(v_tail_2216_);
lean_dec_ref_known(v_a_2208_, 3);
v_fst_2217_ = lean_ctor_get(v_a_2209_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_a_2209_);
if (v_isSharedCheck_2287_ == 0)
{
lean_object* v_unused_2288_; 
v_unused_2288_ = lean_ctor_get(v_a_2209_, 1);
lean_dec(v_unused_2288_);
v___x_2219_ = v_a_2209_;
v_isShared_2220_ = v_isSharedCheck_2287_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_fst_2217_);
lean_dec(v_a_2209_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2287_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v_fst_2221_; lean_object* v_snd_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2286_; 
v_fst_2221_ = lean_ctor_get(v_snd_2213_, 0);
v_snd_2222_ = lean_ctor_get(v_snd_2213_, 1);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_snd_2213_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2224_ = v_snd_2213_;
v_isShared_2225_ = v_isSharedCheck_2286_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_snd_2222_);
lean_inc(v_fst_2221_);
lean_dec(v_snd_2213_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2286_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; 
lean_inc(v_key_2214_);
v___x_2226_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2217_, v_key_2214_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2227_ = lean_unsigned_to_nat(1u);
v___x_2228_ = lean_nat_add(v_snd_2222_, v___x_2227_);
lean_inc_n(v_snd_2222_, 2);
lean_inc(v_key_2214_);
v___x_2229_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2217_, v_key_2214_, v_snd_2222_);
v___x_2230_ = l_List_reverse___redArg(v_value_2215_);
v___x_2231_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2221_, v_snd_2222_, v___x_2230_);
if (lean_obj_tag(v_key_2214_) == 3)
{
lean_object* v_name_2232_; lean_object* v___x_2233_; lean_object* v_ports_2234_; uint8_t v___x_2235_; 
lean_dec(v_snd_2222_);
v_name_2232_ = lean_ctor_get(v_key_2214_, 0);
lean_inc_ref(v_name_2232_);
lean_dec_ref_known(v_key_2214_, 1);
v___x_2233_ = lean_st_ref_get(v___x_2206_);
v_ports_2234_ = lean_ctor_get(v___x_2233_, 9);
lean_inc(v_ports_2234_);
lean_dec(v___x_2233_);
v___x_2235_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2232_, v_ports_2234_);
lean_dec(v_ports_2234_);
if (v___x_2235_ == 0)
{
lean_object* v___x_2236_; 
lean_inc_ref(v_c_2207_);
v___x_2236_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2207_, v_name_2232_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v___x_2238_; 
lean_dec_ref_known(v___x_2236_, 1);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 1, v___x_2228_);
lean_ctor_set(v___x_2224_, 0, v___x_2231_);
v___x_2238_ = v___x_2224_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v___x_2231_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v___x_2228_);
v___x_2238_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2240_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2238_);
lean_ctor_set(v___x_2219_, 0, v___x_2229_);
v___x_2240_ = v___x_2219_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v___x_2229_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v___x_2238_);
v___x_2240_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
v_a_2208_ = v_tail_2216_;
v_a_2209_ = v___x_2240_;
goto _start;
}
}
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2251_; 
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2229_);
lean_dec(v___x_2228_);
lean_del_object(v___x_2224_);
lean_del_object(v___x_2219_);
lean_dec(v_tail_2216_);
lean_dec_ref(v_c_2207_);
v_a_2244_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2246_ = v___x_2236_;
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2236_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
v___x_2249_ = v___x_2246_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_a_2244_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
else
{
lean_object* v___x_2253_; 
lean_dec_ref(v_name_2232_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 1, v___x_2228_);
lean_ctor_set(v___x_2224_, 0, v___x_2231_);
v___x_2253_ = v___x_2224_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2231_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v___x_2228_);
v___x_2253_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2253_);
lean_ctor_set(v___x_2219_, 0, v___x_2229_);
v___x_2255_ = v___x_2219_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2229_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
v_a_2208_ = v_tail_2216_;
v_a_2209_ = v___x_2255_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = l_Lasm_UI_Runtime_specData(v_key_2214_);
v___x_2260_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2222_, v___x_2259_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v___x_2262_; 
lean_dec_ref_known(v___x_2260_, 1);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 1, v___x_2228_);
lean_ctor_set(v___x_2224_, 0, v___x_2231_);
v___x_2262_ = v___x_2224_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2231_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v___x_2228_);
v___x_2262_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2264_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2262_);
lean_ctor_set(v___x_2219_, 0, v___x_2229_);
v___x_2264_ = v___x_2219_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2229_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v___x_2262_);
v___x_2264_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
v_a_2208_ = v_tail_2216_;
v_a_2209_ = v___x_2264_;
goto _start;
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v___x_2231_);
lean_dec_ref(v___x_2229_);
lean_dec(v___x_2228_);
lean_del_object(v___x_2224_);
lean_del_object(v___x_2219_);
lean_dec(v_tail_2216_);
lean_dec_ref(v_c_2207_);
v_a_2268_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2260_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2260_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
else
{
lean_object* v_val_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2280_; 
lean_dec(v_key_2214_);
v_val_2276_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_val_2276_);
lean_dec_ref_known(v___x_2226_, 1);
v___x_2277_ = l_List_reverse___redArg(v_value_2215_);
v___x_2278_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2221_, v_val_2276_, v___x_2277_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 0, v___x_2278_);
v___x_2280_ = v___x_2224_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2278_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_snd_2222_);
v___x_2280_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
lean_object* v___x_2282_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2280_);
v___x_2282_ = v___x_2219_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_fst_2217_);
lean_ctor_set(v_reuseFailAlloc_2284_, 1, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
v_a_2208_ = v_tail_2216_;
v_a_2209_ = v___x_2282_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2289_, lean_object* v_c_2290_, lean_object* v_as_2291_, size_t v_sz_2292_, size_t v_i_2293_, lean_object* v_b_2294_){
_start:
{
uint8_t v___x_2296_; 
v___x_2296_ = lean_usize_dec_lt(v_i_2293_, v_sz_2292_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; 
lean_dec_ref(v_c_2290_);
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v_b_2294_);
return v___x_2297_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2299_; 
v_a_2298_ = lean_array_uget_borrowed(v_as_2291_, v_i_2293_);
lean_inc(v_a_2298_);
lean_inc_ref(v_c_2290_);
v___x_2299_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2289_, v_c_2290_, v_a_2298_, v_b_2294_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2312_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2302_ = v___x_2299_;
v_isShared_2303_ = v_isSharedCheck_2312_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2299_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2312_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
if (lean_obj_tag(v_a_2300_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2306_; 
lean_dec_ref(v_c_2290_);
v_a_2304_ = lean_ctor_get(v_a_2300_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v_a_2300_, 1);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v_a_2304_);
v___x_2306_ = v___x_2302_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2304_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
else
{
lean_object* v_a_2308_; size_t v___x_2309_; size_t v___x_2310_; 
lean_del_object(v___x_2302_);
v_a_2308_ = lean_ctor_get(v_a_2300_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v_a_2300_, 1);
v___x_2309_ = ((size_t)1ULL);
v___x_2310_ = lean_usize_add(v_i_2293_, v___x_2309_);
v_i_2293_ = v___x_2310_;
v_b_2294_ = v_a_2308_;
goto _start;
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec_ref(v_c_2290_);
v_a_2313_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2299_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2299_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2321_){
_start:
{
lean_object* v_app_2323_; lean_object* v_ref_2324_; lean_object* v___x_2325_; lean_object* v_subscriptions_2326_; lean_object* v_model_2327_; lean_object* v_subs_2328_; lean_object* v_nextSub_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_app_2323_ = lean_ctor_get(v_c_2321_, 0);
v_ref_2324_ = lean_ctor_get(v_c_2321_, 1);
lean_inc(v_ref_2324_);
v___x_2325_ = lean_st_ref_get(v_ref_2324_);
v_subscriptions_2326_ = lean_ctor_get(v_app_2323_, 3);
v_model_2327_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_model_2327_);
v_subs_2328_ = lean_ctor_get(v___x_2325_, 5);
lean_inc_ref(v_subs_2328_);
v_nextSub_2329_ = lean_ctor_get(v___x_2325_, 7);
lean_inc(v_nextSub_2329_);
lean_dec(v___x_2325_);
lean_inc_ref(v_subscriptions_2326_);
v___x_2330_ = lean_apply_1(v_subscriptions_2326_, v_model_2327_);
v___x_2331_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2332_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2330_, v___x_2331_);
lean_dec(v___x_2330_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v_buckets_2334_; size_t v_sz_2335_; size_t v___x_2336_; lean_object* v___x_2337_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v_buckets_2334_ = lean_ctor_get(v_subs_2328_, 1);
lean_inc_ref(v_buckets_2334_);
v_sz_2335_ = lean_array_size(v_buckets_2334_);
v___x_2336_ = ((size_t)0ULL);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2333_, v_buckets_2334_, v_sz_2335_, v___x_2336_, v_subs_2328_);
lean_dec_ref(v_buckets_2334_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v_buckets_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2391_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v_buckets_2339_ = lean_ctor_get(v_a_2333_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_a_2333_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; 
v_unused_2392_ = lean_ctor_get(v_a_2333_, 0);
lean_dec(v_unused_2392_);
v___x_2341_ = v_a_2333_;
v_isShared_2342_ = v_isSharedCheck_2391_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_buckets_2339_);
lean_dec(v_a_2333_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2391_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 1, v_nextSub_2329_);
lean_ctor_set(v___x_2341_, 0, v___x_2331_);
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_nextSub_2329_);
v___x_2344_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; size_t v_sz_2346_; lean_object* v___x_2347_; 
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v_a_2338_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v_sz_2346_ = lean_array_size(v_buckets_2339_);
v___x_2347_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2324_, v_c_2321_, v_buckets_2339_, v_sz_2346_, v___x_2336_, v___x_2345_);
lean_dec_ref(v_buckets_2339_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2381_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2350_ = v___x_2347_;
v_isShared_2351_ = v_isSharedCheck_2381_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2347_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2381_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v_snd_2352_; lean_object* v_fst_2353_; lean_object* v_fst_2354_; lean_object* v_snd_2355_; lean_object* v___x_2356_; lean_object* v_model_2357_; lean_object* v_live_2358_; lean_object* v_next_2359_; lean_object* v_tables_2360_; uint8_t v_dirty_2361_; uint8_t v_scheduled_2362_; lean_object* v_queue_2363_; uint8_t v_busy_2364_; lean_object* v_touched_2365_; lean_object* v_ports_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2377_; 
v_snd_2352_ = lean_ctor_get(v_a_2348_, 1);
lean_inc(v_snd_2352_);
v_fst_2353_ = lean_ctor_get(v_a_2348_, 0);
lean_inc(v_fst_2353_);
lean_dec(v_a_2348_);
v_fst_2354_ = lean_ctor_get(v_snd_2352_, 0);
lean_inc(v_fst_2354_);
v_snd_2355_ = lean_ctor_get(v_snd_2352_, 1);
lean_inc(v_snd_2355_);
lean_dec(v_snd_2352_);
v___x_2356_ = lean_st_ref_take(v_ref_2324_);
v_model_2357_ = lean_ctor_get(v___x_2356_, 0);
v_live_2358_ = lean_ctor_get(v___x_2356_, 1);
v_next_2359_ = lean_ctor_get(v___x_2356_, 2);
v_tables_2360_ = lean_ctor_get(v___x_2356_, 3);
v_dirty_2361_ = lean_ctor_get_uint8(v___x_2356_, sizeof(void*)*10);
v_scheduled_2362_ = lean_ctor_get_uint8(v___x_2356_, sizeof(void*)*10 + 1);
v_queue_2363_ = lean_ctor_get(v___x_2356_, 4);
v_busy_2364_ = lean_ctor_get_uint8(v___x_2356_, sizeof(void*)*10 + 2);
v_touched_2365_ = lean_ctor_get(v___x_2356_, 8);
v_ports_2366_ = lean_ctor_get(v___x_2356_, 9);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; lean_object* v_unused_2379_; lean_object* v_unused_2380_; 
v_unused_2378_ = lean_ctor_get(v___x_2356_, 7);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v___x_2356_, 6);
lean_dec(v_unused_2379_);
v_unused_2380_ = lean_ctor_get(v___x_2356_, 5);
lean_dec(v_unused_2380_);
v___x_2368_ = v___x_2356_;
v_isShared_2369_ = v_isSharedCheck_2377_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_ports_2366_);
lean_inc(v_touched_2365_);
lean_inc(v_queue_2363_);
lean_inc(v_tables_2360_);
lean_inc(v_next_2359_);
lean_inc(v_live_2358_);
lean_inc(v_model_2357_);
lean_dec(v___x_2356_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2377_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 7, v_snd_2355_);
lean_ctor_set(v___x_2368_, 6, v_fst_2354_);
lean_ctor_set(v___x_2368_, 5, v_fst_2353_);
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_model_2357_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v_live_2358_);
lean_ctor_set(v_reuseFailAlloc_2376_, 2, v_next_2359_);
lean_ctor_set(v_reuseFailAlloc_2376_, 3, v_tables_2360_);
lean_ctor_set(v_reuseFailAlloc_2376_, 4, v_queue_2363_);
lean_ctor_set(v_reuseFailAlloc_2376_, 5, v_fst_2353_);
lean_ctor_set(v_reuseFailAlloc_2376_, 6, v_fst_2354_);
lean_ctor_set(v_reuseFailAlloc_2376_, 7, v_snd_2355_);
lean_ctor_set(v_reuseFailAlloc_2376_, 8, v_touched_2365_);
lean_ctor_set(v_reuseFailAlloc_2376_, 9, v_ports_2366_);
lean_ctor_set_uint8(v_reuseFailAlloc_2376_, sizeof(void*)*10, v_dirty_2361_);
lean_ctor_set_uint8(v_reuseFailAlloc_2376_, sizeof(void*)*10 + 1, v_scheduled_2362_);
lean_ctor_set_uint8(v_reuseFailAlloc_2376_, sizeof(void*)*10 + 2, v_busy_2364_);
v___x_2371_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___x_2372_; lean_object* v___x_2374_; 
v___x_2372_ = lean_st_ref_put(v_ref_2324_, v___x_2371_);
lean_dec(v_ref_2324_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2372_);
v___x_2374_ = v___x_2350_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec(v_ref_2324_);
v_a_2382_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2347_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2347_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec(v_a_2333_);
lean_dec(v_nextSub_2329_);
lean_dec(v_ref_2324_);
lean_dec_ref(v_c_2321_);
v_a_2393_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2337_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2337_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
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
return v___x_2398_;
}
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_dec(v_nextSub_2329_);
lean_dec_ref(v_subs_2328_);
lean_dec(v_ref_2324_);
lean_dec_ref(v_c_2321_);
v_a_2401_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2332_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2332_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2409_, lean_object* v_msg_2410_){
_start:
{
lean_object* v_ref_2412_; lean_object* v___x_2413_; lean_object* v_model_2414_; lean_object* v_live_2415_; lean_object* v_next_2416_; lean_object* v_tables_2417_; uint8_t v_dirty_2418_; uint8_t v_scheduled_2419_; lean_object* v_queue_2420_; uint8_t v_busy_2421_; lean_object* v_subs_2422_; lean_object* v_handlers_2423_; lean_object* v_nextSub_2424_; lean_object* v_touched_2425_; lean_object* v_ports_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2487_; 
v_ref_2412_ = lean_ctor_get(v_c_2409_, 1);
lean_inc(v_ref_2412_);
v___x_2413_ = lean_st_ref_take(v_ref_2412_);
v_model_2414_ = lean_ctor_get(v___x_2413_, 0);
v_live_2415_ = lean_ctor_get(v___x_2413_, 1);
v_next_2416_ = lean_ctor_get(v___x_2413_, 2);
v_tables_2417_ = lean_ctor_get(v___x_2413_, 3);
v_dirty_2418_ = lean_ctor_get_uint8(v___x_2413_, sizeof(void*)*10);
v_scheduled_2419_ = lean_ctor_get_uint8(v___x_2413_, sizeof(void*)*10 + 1);
v_queue_2420_ = lean_ctor_get(v___x_2413_, 4);
v_busy_2421_ = lean_ctor_get_uint8(v___x_2413_, sizeof(void*)*10 + 2);
v_subs_2422_ = lean_ctor_get(v___x_2413_, 5);
v_handlers_2423_ = lean_ctor_get(v___x_2413_, 6);
v_nextSub_2424_ = lean_ctor_get(v___x_2413_, 7);
v_touched_2425_ = lean_ctor_get(v___x_2413_, 8);
v_ports_2426_ = lean_ctor_get(v___x_2413_, 9);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2428_ = v___x_2413_;
v_isShared_2429_ = v_isSharedCheck_2487_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_ports_2426_);
lean_inc(v_touched_2425_);
lean_inc(v_nextSub_2424_);
lean_inc(v_handlers_2423_);
lean_inc(v_subs_2422_);
lean_inc(v_queue_2420_);
lean_inc(v_tables_2417_);
lean_inc(v_next_2416_);
lean_inc(v_live_2415_);
lean_inc(v_model_2414_);
lean_dec(v___x_2413_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2487_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2430_ = lean_array_push(v_queue_2420_, v_msg_2410_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 4, v___x_2430_);
v___x_2432_ = v___x_2428_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_model_2414_);
lean_ctor_set(v_reuseFailAlloc_2486_, 1, v_live_2415_);
lean_ctor_set(v_reuseFailAlloc_2486_, 2, v_next_2416_);
lean_ctor_set(v_reuseFailAlloc_2486_, 3, v_tables_2417_);
lean_ctor_set(v_reuseFailAlloc_2486_, 4, v___x_2430_);
lean_ctor_set(v_reuseFailAlloc_2486_, 5, v_subs_2422_);
lean_ctor_set(v_reuseFailAlloc_2486_, 6, v_handlers_2423_);
lean_ctor_set(v_reuseFailAlloc_2486_, 7, v_nextSub_2424_);
lean_ctor_set(v_reuseFailAlloc_2486_, 8, v_touched_2425_);
lean_ctor_set(v_reuseFailAlloc_2486_, 9, v_ports_2426_);
lean_ctor_set_uint8(v_reuseFailAlloc_2486_, sizeof(void*)*10, v_dirty_2418_);
lean_ctor_set_uint8(v_reuseFailAlloc_2486_, sizeof(void*)*10 + 1, v_scheduled_2419_);
lean_ctor_set_uint8(v_reuseFailAlloc_2486_, sizeof(void*)*10 + 2, v_busy_2421_);
v___x_2432_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; uint8_t v_busy_2435_; 
v___x_2433_ = lean_st_ref_put(v_ref_2412_, v___x_2432_);
v___x_2434_ = lean_st_ref_get(v_ref_2412_);
v_busy_2435_ = lean_ctor_get_uint8(v___x_2434_, sizeof(void*)*10 + 2);
lean_dec(v___x_2434_);
if (v_busy_2435_ == 0)
{
lean_object* v___y_2437_; uint8_t v___x_2460_; lean_object* v___x_2461_; lean_object* v_model_2462_; lean_object* v_live_2463_; lean_object* v_next_2464_; lean_object* v_tables_2465_; uint8_t v_dirty_2466_; uint8_t v_scheduled_2467_; lean_object* v_queue_2468_; lean_object* v_subs_2469_; lean_object* v_handlers_2470_; lean_object* v_nextSub_2471_; lean_object* v_touched_2472_; lean_object* v_ports_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2483_; 
v___x_2460_ = 1;
v___x_2461_ = lean_st_ref_take(v_ref_2412_);
v_model_2462_ = lean_ctor_get(v___x_2461_, 0);
v_live_2463_ = lean_ctor_get(v___x_2461_, 1);
v_next_2464_ = lean_ctor_get(v___x_2461_, 2);
v_tables_2465_ = lean_ctor_get(v___x_2461_, 3);
v_dirty_2466_ = lean_ctor_get_uint8(v___x_2461_, sizeof(void*)*10);
v_scheduled_2467_ = lean_ctor_get_uint8(v___x_2461_, sizeof(void*)*10 + 1);
v_queue_2468_ = lean_ctor_get(v___x_2461_, 4);
v_subs_2469_ = lean_ctor_get(v___x_2461_, 5);
v_handlers_2470_ = lean_ctor_get(v___x_2461_, 6);
v_nextSub_2471_ = lean_ctor_get(v___x_2461_, 7);
v_touched_2472_ = lean_ctor_get(v___x_2461_, 8);
v_ports_2473_ = lean_ctor_get(v___x_2461_, 9);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2475_ = v___x_2461_;
v_isShared_2476_ = v_isSharedCheck_2483_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_ports_2473_);
lean_inc(v_touched_2472_);
lean_inc(v_nextSub_2471_);
lean_inc(v_handlers_2470_);
lean_inc(v_subs_2469_);
lean_inc(v_queue_2468_);
lean_inc(v_tables_2465_);
lean_inc(v_next_2464_);
lean_inc(v_live_2463_);
lean_inc(v_model_2462_);
lean_dec(v___x_2461_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2483_;
goto v_resetjp_2474_;
}
v___jp_2436_:
{
if (lean_obj_tag(v___y_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2448_; 
v_a_2438_ = lean_ctor_get(v___y_2437_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___y_2437_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2440_ = v___y_2437_;
v_isShared_2441_ = v_isSharedCheck_2448_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___y_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2448_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2442_ = lean_st_ref_take(v_ref_2412_);
v___x_2443_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2435_, v___x_2442_);
v___x_2444_ = lean_st_ref_put(v_ref_2412_, v___x_2443_);
lean_dec(v_ref_2412_);
if (v_isShared_2441_ == 0)
{
v___x_2446_ = v___x_2440_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2438_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2459_; 
v_a_2449_ = lean_ctor_get(v___y_2437_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___y_2437_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2451_ = v___y_2437_;
v_isShared_2452_ = v_isSharedCheck_2459_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___y_2437_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2459_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2457_; 
v___x_2453_ = lean_st_ref_take(v_ref_2412_);
v___x_2454_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2435_, v___x_2453_);
v___x_2455_ = lean_st_ref_put(v_ref_2412_, v___x_2454_);
lean_dec(v_ref_2412_);
if (v_isShared_2452_ == 0)
{
v___x_2457_ = v___x_2451_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2449_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
v_resetjp_2474_:
{
lean_object* v___x_2478_; 
if (v_isShared_2476_ == 0)
{
v___x_2478_ = v___x_2475_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_model_2462_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_live_2463_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v_next_2464_);
lean_ctor_set(v_reuseFailAlloc_2482_, 3, v_tables_2465_);
lean_ctor_set(v_reuseFailAlloc_2482_, 4, v_queue_2468_);
lean_ctor_set(v_reuseFailAlloc_2482_, 5, v_subs_2469_);
lean_ctor_set(v_reuseFailAlloc_2482_, 6, v_handlers_2470_);
lean_ctor_set(v_reuseFailAlloc_2482_, 7, v_nextSub_2471_);
lean_ctor_set(v_reuseFailAlloc_2482_, 8, v_touched_2472_);
lean_ctor_set(v_reuseFailAlloc_2482_, 9, v_ports_2473_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*10, v_dirty_2466_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*10 + 1, v_scheduled_2467_);
v___x_2478_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
lean_ctor_set_uint8(v___x_2478_, sizeof(void*)*10 + 2, v___x_2460_);
v___x_2479_ = lean_st_ref_put(v_ref_2412_, v___x_2478_);
lean_inc_ref(v_c_2409_);
v___x_2480_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2412_, v_c_2409_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v___x_2481_; 
lean_dec_ref_known(v___x_2480_, 1);
v___x_2481_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2409_);
v___y_2437_ = v___x_2481_;
goto v___jp_2436_;
}
else
{
lean_dec_ref(v_c_2409_);
v___y_2437_ = v___x_2480_;
goto v___jp_2436_;
}
}
}
}
else
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
lean_dec(v_ref_2412_);
lean_dec_ref(v_c_2409_);
v___x_2484_ = lean_box(0);
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2488_, lean_object* v_m_2489_){
_start:
{
lean_object* v___x_2491_; 
lean_inc_ref(v_c_2488_);
v___x_2491_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2488_, v_m_2489_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v___x_2492_; 
lean_dec_ref_known(v___x_2491_, 1);
v___x_2492_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2488_);
lean_dec_ref(v_c_2488_);
return v___x_2492_;
}
else
{
lean_dec_ref(v_c_2488_);
return v___x_2491_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2493_, lean_object* v_as_x27_2494_, lean_object* v_b_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2493_, v_as_x27_2494_, v_b_2495_);
lean_dec(v_as_x27_2494_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2498_, lean_object* v_c_2499_, lean_object* v_as_2500_, lean_object* v_sz_2501_, lean_object* v_i_2502_, lean_object* v_b_2503_, lean_object* v___y_2504_){
_start:
{
size_t v_sz_boxed_2505_; size_t v_i_boxed_2506_; lean_object* v_res_2507_; 
v_sz_boxed_2505_ = lean_unbox_usize(v_sz_2501_);
lean_dec(v_sz_2501_);
v_i_boxed_2506_ = lean_unbox_usize(v_i_2502_);
lean_dec(v_i_2502_);
v_res_2507_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2498_, v_c_2499_, v_as_2500_, v_sz_boxed_2505_, v_i_boxed_2506_, v_b_2503_);
lean_dec_ref(v_as_2500_);
lean_dec(v___x_2498_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2508_, lean_object* v_name_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2508_, v_name_2509_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2512_, lean_object* v_c_2513_, lean_object* v_as_x27_2514_, lean_object* v_b_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2512_, v_c_2513_, v_as_x27_2514_, v_b_2515_);
lean_dec(v_as_x27_2514_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2518_, lean_object* v_c_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2518_, v_c_2519_);
lean_dec(v___x_2518_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2522_, lean_object* v_c_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2522_, v_c_2523_, v_a_2524_, v_a_2525_);
lean_dec(v___x_2522_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2528_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2531_, lean_object* v_msg_2532_, lean_object* v_a_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2531_, v_msg_2532_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2535_, lean_object* v_e_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2535_, v_e_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2539_, lean_object* v_Model_2540_, lean_object* v_Msg_2541_, lean_object* v_c_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2545_, lean_object* v_Model_2546_, lean_object* v_Msg_2547_, lean_object* v_c_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2545_, v_Model_2546_, v_Msg_2547_, v_c_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2551_, lean_object* v_Model_2552_, lean_object* v_Msg_2553_, lean_object* v_c_2554_, lean_object* v_name_2555_){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2554_, v_name_2555_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2558_, lean_object* v_Model_2559_, lean_object* v_Msg_2560_, lean_object* v_c_2561_, lean_object* v_name_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2558_, v_Model_2559_, v_Msg_2560_, v_c_2561_, v_name_2562_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2565_, lean_object* v_Model_2566_, lean_object* v_Msg_2567_, lean_object* v_c_2568_, lean_object* v_msg_2569_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2568_, v_msg_2569_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2572_, lean_object* v_Model_2573_, lean_object* v_Msg_2574_, lean_object* v_c_2575_, lean_object* v_msg_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l_Lasm_UI_Runtime_deliver(v_Flags_2572_, v_Model_2573_, v_Msg_2574_, v_c_2575_, v_msg_2576_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2579_, lean_object* v_Model_2580_, lean_object* v_Msg_2581_, lean_object* v_c_2582_, lean_object* v_e_2583_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2582_, v_e_2583_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2586_, lean_object* v_Model_2587_, lean_object* v_Msg_2588_, lean_object* v_c_2589_, lean_object* v_e_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lasm_UI_Runtime_perform(v_Flags_2586_, v_Model_2587_, v_Msg_2588_, v_c_2589_, v_e_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2593_, lean_object* v_m_2594_, lean_object* v_a_2595_, lean_object* v_fallback_2596_){
_start:
{
lean_object* v___x_2597_; 
v___x_2597_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2594_, v_a_2595_, v_fallback_2596_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2598_, lean_object* v_m_2599_, lean_object* v_a_2600_, lean_object* v_fallback_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2598_, v_m_2599_, v_a_2600_, v_fallback_2601_);
lean_dec(v_fallback_2601_);
lean_dec_ref(v_m_2599_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2603_, lean_object* v_m_2604_, lean_object* v_a_2605_, lean_object* v_b_2606_){
_start:
{
lean_object* v___x_2607_; 
v___x_2607_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2604_, v_a_2605_, v_b_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2608_, lean_object* v_as_2609_, lean_object* v_as_x27_2610_, lean_object* v_b_2611_, lean_object* v_a_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2610_, v_b_2611_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2615_, lean_object* v_as_2616_, lean_object* v_as_x27_2617_, lean_object* v_b_2618_, lean_object* v_a_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2615_, v_as_2616_, v_as_x27_2617_, v_b_2618_, v_a_2619_);
lean_dec(v_as_x27_2617_);
lean_dec(v_as_2616_);
return v_res_2621_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2622_, lean_object* v_m_2623_, lean_object* v_a_2624_){
_start:
{
uint8_t v___x_2625_; 
v___x_2625_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2623_, v_a_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2626_, lean_object* v_m_2627_, lean_object* v_a_2628_){
_start:
{
uint8_t v_res_2629_; lean_object* v_r_2630_; 
v_res_2629_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2626_, v_m_2627_, v_a_2628_);
lean_dec_ref(v_m_2627_);
v_r_2630_ = lean_box(v_res_2629_);
return v_r_2630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2631_, lean_object* v_m_2632_, lean_object* v_a_2633_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2632_, v_a_2633_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v___x_2640_; 
v___x_2640_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2636_, v_a_2637_, v_a_2638_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_, lean_object* v___y_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2641_, v_a_2642_, v_a_2643_, v_a_2644_);
lean_dec_ref(v_a_2642_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2647_, lean_object* v_m_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2648_, v_a_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2651_, lean_object* v_m_2652_, lean_object* v_a_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2651_, v_m_2652_, v_a_2653_);
lean_dec_ref(v_m_2652_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2655_, lean_object* v_Model_2656_, lean_object* v___x_2657_, lean_object* v_Flags_2658_, lean_object* v_c_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2657_, v_c_2659_, v_a_2660_, v_a_2661_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2664_, lean_object* v_Model_2665_, lean_object* v___x_2666_, lean_object* v_Flags_2667_, lean_object* v_c_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2664_, v_Model_2665_, v___x_2666_, v_Flags_2667_, v_c_2668_, v_a_2669_, v_a_2670_);
lean_dec(v___x_2666_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2673_, lean_object* v_a_2674_, lean_object* v_as_2675_, size_t v_sz_2676_, size_t v_i_2677_, lean_object* v_b_2678_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2674_, v_as_2675_, v_sz_2676_, v_i_2677_, v_b_2678_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2681_, lean_object* v_a_2682_, lean_object* v_as_2683_, lean_object* v_sz_2684_, lean_object* v_i_2685_, lean_object* v_b_2686_, lean_object* v___y_2687_){
_start:
{
size_t v_sz_boxed_2688_; size_t v_i_boxed_2689_; lean_object* v_res_2690_; 
v_sz_boxed_2688_ = lean_unbox_usize(v_sz_2684_);
lean_dec(v_sz_2684_);
v_i_boxed_2689_ = lean_unbox_usize(v_i_2685_);
lean_dec(v_i_2685_);
v_res_2690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2681_, v_a_2682_, v_as_2683_, v_sz_boxed_2688_, v_i_boxed_2689_, v_b_2686_);
lean_dec_ref(v_as_2683_);
lean_dec_ref(v_a_2682_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2691_, lean_object* v_Model_2692_, lean_object* v___x_2693_, lean_object* v_Flags_2694_, lean_object* v_c_2695_, lean_object* v_as_2696_, size_t v_sz_2697_, size_t v_i_2698_, lean_object* v_b_2699_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2693_, v_c_2695_, v_as_2696_, v_sz_2697_, v_i_2698_, v_b_2699_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2702_, lean_object* v_Model_2703_, lean_object* v___x_2704_, lean_object* v_Flags_2705_, lean_object* v_c_2706_, lean_object* v_as_2707_, lean_object* v_sz_2708_, lean_object* v_i_2709_, lean_object* v_b_2710_, lean_object* v___y_2711_){
_start:
{
size_t v_sz_boxed_2712_; size_t v_i_boxed_2713_; lean_object* v_res_2714_; 
v_sz_boxed_2712_ = lean_unbox_usize(v_sz_2708_);
lean_dec(v_sz_2708_);
v_i_boxed_2713_ = lean_unbox_usize(v_i_2709_);
lean_dec(v_i_2709_);
v_res_2714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2702_, v_Model_2703_, v___x_2704_, v_Flags_2705_, v_c_2706_, v_as_2707_, v_sz_boxed_2712_, v_i_boxed_2713_, v_b_2710_);
lean_dec_ref(v_as_2707_);
lean_dec(v___x_2704_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2715_, lean_object* v_m_2716_, lean_object* v_a_2717_, lean_object* v_fallback_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2716_, v_a_2717_, v_fallback_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2720_, lean_object* v_m_2721_, lean_object* v_a_2722_, lean_object* v_fallback_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2720_, v_m_2721_, v_a_2722_, v_fallback_2723_);
lean_dec(v_fallback_2723_);
lean_dec(v_a_2722_);
lean_dec_ref(v_m_2721_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2725_, lean_object* v_v_2726_, lean_object* v_Flags_2727_, lean_object* v_Model_2728_, lean_object* v_c_2729_, lean_object* v_as_2730_, lean_object* v_as_x27_2731_, lean_object* v_b_2732_, lean_object* v_a_2733_){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2726_, v_c_2729_, v_as_x27_2731_, v_b_2732_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2736_, lean_object* v_v_2737_, lean_object* v_Flags_2738_, lean_object* v_Model_2739_, lean_object* v_c_2740_, lean_object* v_as_2741_, lean_object* v_as_x27_2742_, lean_object* v_b_2743_, lean_object* v_a_2744_, lean_object* v___y_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2736_, v_v_2737_, v_Flags_2738_, v_Model_2739_, v_c_2740_, v_as_2741_, v_as_x27_2742_, v_b_2743_, v_a_2744_);
lean_dec(v_as_x27_2742_);
lean_dec(v_as_2741_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2747_, lean_object* v_Flags_2748_, lean_object* v_Model_2749_, lean_object* v_c_2750_, lean_object* v_as_2751_, lean_object* v_as_x27_2752_, lean_object* v_b_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2750_, v_as_x27_2752_, v_b_2753_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2757_, lean_object* v_Flags_2758_, lean_object* v_Model_2759_, lean_object* v_c_2760_, lean_object* v_as_2761_, lean_object* v_as_x27_2762_, lean_object* v_b_2763_, lean_object* v_a_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2757_, v_Flags_2758_, v_Model_2759_, v_c_2760_, v_as_2761_, v_as_x27_2762_, v_b_2763_, v_a_2764_);
lean_dec(v_as_x27_2762_);
lean_dec(v_as_2761_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2767_, lean_object* v_Msg_2768_, lean_object* v___x_2769_, lean_object* v_Flags_2770_, lean_object* v_c_2771_, lean_object* v_inst_2772_, lean_object* v_a_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2769_, v_c_2771_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2776_, lean_object* v_Msg_2777_, lean_object* v___x_2778_, lean_object* v_Flags_2779_, lean_object* v_c_2780_, lean_object* v_inst_2781_, lean_object* v_a_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2776_, v_Msg_2777_, v___x_2778_, v_Flags_2779_, v_c_2780_, v_inst_2781_, v_a_2782_);
lean_dec(v___x_2778_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2785_, lean_object* v_a_2786_, lean_object* v_fallback_2787_, lean_object* v_x_2788_){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2786_, v_fallback_2787_, v_x_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2790_, lean_object* v_a_2791_, lean_object* v_fallback_2792_, lean_object* v_x_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2790_, v_a_2791_, v_fallback_2792_, v_x_2793_);
lean_dec(v_fallback_2792_);
return v_res_2794_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2795_, lean_object* v_a_2796_, lean_object* v_x_2797_){
_start:
{
uint8_t v___x_2798_; 
v___x_2798_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2796_, v_x_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2799_, lean_object* v_a_2800_, lean_object* v_x_2801_){
_start:
{
uint8_t v_res_2802_; lean_object* v_r_2803_; 
v_res_2802_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2799_, v_a_2800_, v_x_2801_);
v_r_2803_ = lean_box(v_res_2802_);
return v_r_2803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2804_, lean_object* v_data_2805_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2807_, lean_object* v_a_2808_, lean_object* v_b_2809_, lean_object* v_x_2810_){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2808_, v_b_2809_, v_x_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2812_, lean_object* v_a_2813_, lean_object* v_x_2814_){
_start:
{
lean_object* v___x_2815_; 
v___x_2815_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2813_, v_x_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2816_, lean_object* v_a_2817_, lean_object* v_x_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2817_, v_x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2820_, lean_object* v_a_2821_, lean_object* v_fallback_2822_, lean_object* v_x_2823_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2821_, v_fallback_2822_, v_x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2825_, lean_object* v_a_2826_, lean_object* v_fallback_2827_, lean_object* v_x_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2825_, v_a_2826_, v_fallback_2827_, v_x_2828_);
lean_dec(v_x_2828_);
lean_dec(v_fallback_2827_);
lean_dec(v_a_2826_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2830_, lean_object* v_i_2831_, lean_object* v_source_2832_, lean_object* v_target_2833_){
_start:
{
lean_object* v___x_2834_; 
v___x_2834_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2831_, v_source_2832_, v_target_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2836_, v_x_2837_);
return v___x_2838_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = lean_box(0);
v___x_2842_ = lean_unsigned_to_nat(16u);
v___x_2843_ = lean_mk_array(v___x_2842_, v___x_2841_);
return v___x_2843_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2845_ = lean_unsigned_to_nat(0u);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
lean_ctor_set(v___x_2846_, 1, v___x_2844_);
return v___x_2846_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
lean_ctor_set(v___x_2848_, 2, v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2849_){
_start:
{
lean_object* v_app_2851_; lean_object* v_ref_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2963_; 
v_app_2851_ = lean_ctor_get(v_c_2849_, 0);
v_ref_2852_ = lean_ctor_get(v_c_2849_, 1);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_c_2849_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2854_ = v_c_2849_;
v_isShared_2855_ = v_isSharedCheck_2963_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_ref_2852_);
lean_inc(v_app_2851_);
lean_dec(v_c_2849_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2963_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2856_; lean_object* v_model_2857_; lean_object* v_live_2858_; lean_object* v_next_2859_; lean_object* v_tables_2860_; uint8_t v_dirty_2861_; uint8_t v_scheduled_2862_; lean_object* v_queue_2863_; uint8_t v_busy_2864_; lean_object* v_subs_2865_; lean_object* v_handlers_2866_; lean_object* v_nextSub_2867_; lean_object* v_touched_2868_; lean_object* v_ports_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2962_; 
v___x_2856_ = lean_st_ref_take(v_ref_2852_);
v_model_2857_ = lean_ctor_get(v___x_2856_, 0);
v_live_2858_ = lean_ctor_get(v___x_2856_, 1);
v_next_2859_ = lean_ctor_get(v___x_2856_, 2);
v_tables_2860_ = lean_ctor_get(v___x_2856_, 3);
v_dirty_2861_ = lean_ctor_get_uint8(v___x_2856_, sizeof(void*)*10);
v_scheduled_2862_ = lean_ctor_get_uint8(v___x_2856_, sizeof(void*)*10 + 1);
v_queue_2863_ = lean_ctor_get(v___x_2856_, 4);
v_busy_2864_ = lean_ctor_get_uint8(v___x_2856_, sizeof(void*)*10 + 2);
v_subs_2865_ = lean_ctor_get(v___x_2856_, 5);
v_handlers_2866_ = lean_ctor_get(v___x_2856_, 6);
v_nextSub_2867_ = lean_ctor_get(v___x_2856_, 7);
v_touched_2868_ = lean_ctor_get(v___x_2856_, 8);
v_ports_2869_ = lean_ctor_get(v___x_2856_, 9);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2871_ = v___x_2856_;
v_isShared_2872_ = v_isSharedCheck_2962_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_ports_2869_);
lean_inc(v_touched_2868_);
lean_inc(v_nextSub_2867_);
lean_inc(v_handlers_2866_);
lean_inc(v_subs_2865_);
lean_inc(v_queue_2863_);
lean_inc(v_tables_2860_);
lean_inc(v_next_2859_);
lean_inc(v_live_2858_);
lean_inc(v_model_2857_);
lean_dec(v___x_2856_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2962_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2873_ = lean_box(0);
v___x_2874_ = lean_unsigned_to_nat(0u);
v___x_2875_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2859_);
lean_inc(v_model_2857_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 8, v___x_2875_);
lean_ctor_set(v___x_2871_, 1, v___x_2873_);
v___x_2877_ = v___x_2871_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_model_2857_);
lean_ctor_set(v_reuseFailAlloc_2961_, 1, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2961_, 2, v_next_2859_);
lean_ctor_set(v_reuseFailAlloc_2961_, 3, v_tables_2860_);
lean_ctor_set(v_reuseFailAlloc_2961_, 4, v_queue_2863_);
lean_ctor_set(v_reuseFailAlloc_2961_, 5, v_subs_2865_);
lean_ctor_set(v_reuseFailAlloc_2961_, 6, v_handlers_2866_);
lean_ctor_set(v_reuseFailAlloc_2961_, 7, v_nextSub_2867_);
lean_ctor_set(v_reuseFailAlloc_2961_, 8, v___x_2875_);
lean_ctor_set(v_reuseFailAlloc_2961_, 9, v_ports_2869_);
lean_ctor_set_uint8(v_reuseFailAlloc_2961_, sizeof(void*)*10, v_dirty_2861_);
lean_ctor_set_uint8(v_reuseFailAlloc_2961_, sizeof(void*)*10 + 1, v_scheduled_2862_);
lean_ctor_set_uint8(v_reuseFailAlloc_2961_, sizeof(void*)*10 + 2, v_busy_2864_);
v___x_2877_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_st_ref_put(v_ref_2852_, v___x_2877_);
if (v_dirty_2861_ == 0)
{
lean_object* v___x_2879_; lean_object* v_model_2880_; lean_object* v_next_2881_; lean_object* v_tables_2882_; uint8_t v_dirty_2883_; lean_object* v_queue_2884_; uint8_t v_busy_2885_; lean_object* v_subs_2886_; lean_object* v_handlers_2887_; lean_object* v_nextSub_2888_; lean_object* v_touched_2889_; lean_object* v_ports_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2900_; 
lean_dec_ref(v_touched_2868_);
lean_dec(v_next_2859_);
lean_dec(v_model_2857_);
lean_del_object(v___x_2854_);
lean_dec_ref(v_app_2851_);
v___x_2879_ = lean_st_ref_take(v_ref_2852_);
v_model_2880_ = lean_ctor_get(v___x_2879_, 0);
v_next_2881_ = lean_ctor_get(v___x_2879_, 2);
v_tables_2882_ = lean_ctor_get(v___x_2879_, 3);
v_dirty_2883_ = lean_ctor_get_uint8(v___x_2879_, sizeof(void*)*10);
v_queue_2884_ = lean_ctor_get(v___x_2879_, 4);
v_busy_2885_ = lean_ctor_get_uint8(v___x_2879_, sizeof(void*)*10 + 2);
v_subs_2886_ = lean_ctor_get(v___x_2879_, 5);
v_handlers_2887_ = lean_ctor_get(v___x_2879_, 6);
v_nextSub_2888_ = lean_ctor_get(v___x_2879_, 7);
v_touched_2889_ = lean_ctor_get(v___x_2879_, 8);
v_ports_2890_ = lean_ctor_get(v___x_2879_, 9);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; 
v_unused_2901_ = lean_ctor_get(v___x_2879_, 1);
lean_dec(v_unused_2901_);
v___x_2892_ = v___x_2879_;
v_isShared_2893_ = v_isSharedCheck_2900_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_ports_2890_);
lean_inc(v_touched_2889_);
lean_inc(v_nextSub_2888_);
lean_inc(v_handlers_2887_);
lean_inc(v_subs_2886_);
lean_inc(v_queue_2884_);
lean_inc(v_tables_2882_);
lean_inc(v_next_2881_);
lean_inc(v_model_2880_);
lean_dec(v___x_2879_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2900_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 1, v_live_2858_);
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_model_2880_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_live_2858_);
lean_ctor_set(v_reuseFailAlloc_2899_, 2, v_next_2881_);
lean_ctor_set(v_reuseFailAlloc_2899_, 3, v_tables_2882_);
lean_ctor_set(v_reuseFailAlloc_2899_, 4, v_queue_2884_);
lean_ctor_set(v_reuseFailAlloc_2899_, 5, v_subs_2886_);
lean_ctor_set(v_reuseFailAlloc_2899_, 6, v_handlers_2887_);
lean_ctor_set(v_reuseFailAlloc_2899_, 7, v_nextSub_2888_);
lean_ctor_set(v_reuseFailAlloc_2899_, 8, v_touched_2889_);
lean_ctor_set(v_reuseFailAlloc_2899_, 9, v_ports_2890_);
lean_ctor_set_uint8(v_reuseFailAlloc_2899_, sizeof(void*)*10, v_dirty_2883_);
lean_ctor_set_uint8(v_reuseFailAlloc_2899_, sizeof(void*)*10 + 2, v_busy_2885_);
v___x_2895_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
lean_ctor_set_uint8(v___x_2895_, sizeof(void*)*10 + 1, v_dirty_2861_);
v___x_2896_ = lean_st_ref_put(v_ref_2852_, v___x_2895_);
lean_dec(v_ref_2852_);
v___x_2897_ = l_ByteArray_empty;
v___x_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
}
}
else
{
lean_object* v_view_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
v_view_2902_ = lean_ctor_get(v_app_2851_, 2);
lean_inc_ref(v_view_2902_);
lean_dec_ref(v_app_2851_);
v___x_2903_ = lean_apply_1(v_view_2902_, v_model_2857_);
if (v_isShared_2855_ == 0)
{
lean_ctor_set_tag(v___x_2854_, 1);
lean_ctor_set(v___x_2854_, 1, v___x_2873_);
lean_ctor_set(v___x_2854_, 0, v___x_2903_);
v___x_2905_ = v___x_2854_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v___x_2873_);
v___x_2905_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; lean_object* v_ops_2907_; lean_object* v_live_2908_; lean_object* v_next_2909_; uint8_t v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v_model_2913_; lean_object* v_live_2914_; lean_object* v_next_2915_; lean_object* v_tables_2916_; uint8_t v_dirty_2917_; uint8_t v_scheduled_2918_; lean_object* v_queue_2919_; uint8_t v_busy_2920_; lean_object* v_subs_2921_; lean_object* v_handlers_2922_; lean_object* v_nextSub_2923_; lean_object* v_touched_2924_; lean_object* v_ports_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2959_; 
v___x_2906_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2858_, v___x_2905_, v_next_2859_);
v_ops_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc_ref(v_ops_2907_);
v_live_2908_ = lean_ctor_get(v___x_2906_, 1);
lean_inc_n(v_live_2908_, 2);
v_next_2909_ = lean_ctor_get(v___x_2906_, 2);
lean_inc(v_next_2909_);
lean_dec_ref(v___x_2906_);
v___x_2910_ = 0;
v___x_2911_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2908_, v_touched_2868_);
lean_dec_ref(v_touched_2868_);
v___x_2912_ = lean_st_ref_take(v_ref_2852_);
v_model_2913_ = lean_ctor_get(v___x_2912_, 0);
v_live_2914_ = lean_ctor_get(v___x_2912_, 1);
v_next_2915_ = lean_ctor_get(v___x_2912_, 2);
v_tables_2916_ = lean_ctor_get(v___x_2912_, 3);
v_dirty_2917_ = lean_ctor_get_uint8(v___x_2912_, sizeof(void*)*10);
v_scheduled_2918_ = lean_ctor_get_uint8(v___x_2912_, sizeof(void*)*10 + 1);
v_queue_2919_ = lean_ctor_get(v___x_2912_, 4);
v_busy_2920_ = lean_ctor_get_uint8(v___x_2912_, sizeof(void*)*10 + 2);
v_subs_2921_ = lean_ctor_get(v___x_2912_, 5);
v_handlers_2922_ = lean_ctor_get(v___x_2912_, 6);
v_nextSub_2923_ = lean_ctor_get(v___x_2912_, 7);
v_touched_2924_ = lean_ctor_get(v___x_2912_, 8);
v_ports_2925_ = lean_ctor_get(v___x_2912_, 9);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2927_ = v___x_2912_;
v_isShared_2928_ = v_isSharedCheck_2959_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_ports_2925_);
lean_inc(v_touched_2924_);
lean_inc(v_nextSub_2923_);
lean_inc(v_handlers_2922_);
lean_inc(v_subs_2921_);
lean_inc(v_queue_2919_);
lean_inc(v_tables_2916_);
lean_inc(v_next_2915_);
lean_inc(v_live_2914_);
lean_inc(v_model_2913_);
lean_dec(v___x_2912_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2959_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2929_; lean_object* v___x_2931_; 
v___x_2929_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 3, v___x_2929_);
v___x_2931_ = v___x_2927_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_model_2913_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_live_2914_);
lean_ctor_set(v_reuseFailAlloc_2958_, 2, v_next_2915_);
lean_ctor_set(v_reuseFailAlloc_2958_, 3, v___x_2929_);
lean_ctor_set(v_reuseFailAlloc_2958_, 4, v_queue_2919_);
lean_ctor_set(v_reuseFailAlloc_2958_, 5, v_subs_2921_);
lean_ctor_set(v_reuseFailAlloc_2958_, 6, v_handlers_2922_);
lean_ctor_set(v_reuseFailAlloc_2958_, 7, v_nextSub_2923_);
lean_ctor_set(v_reuseFailAlloc_2958_, 8, v_touched_2924_);
lean_ctor_set(v_reuseFailAlloc_2958_, 9, v_ports_2925_);
lean_ctor_set_uint8(v_reuseFailAlloc_2958_, sizeof(void*)*10, v_dirty_2917_);
lean_ctor_set_uint8(v_reuseFailAlloc_2958_, sizeof(void*)*10 + 1, v_scheduled_2918_);
lean_ctor_set_uint8(v_reuseFailAlloc_2958_, sizeof(void*)*10 + 2, v_busy_2920_);
v___x_2931_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v_fst_2935_; lean_object* v_snd_2936_; lean_object* v___x_2937_; lean_object* v_model_2938_; lean_object* v_queue_2939_; uint8_t v_busy_2940_; lean_object* v_subs_2941_; lean_object* v_handlers_2942_; lean_object* v_nextSub_2943_; lean_object* v_touched_2944_; lean_object* v_ports_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2954_; 
v___x_2932_ = lean_st_ref_put(v_ref_2852_, v___x_2931_);
v___x_2933_ = l_Array_append___redArg(v_ops_2907_, v___x_2911_);
lean_dec_ref(v___x_2911_);
v___x_2934_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2916_, v___x_2933_, v___x_2874_);
lean_dec_ref(v___x_2933_);
v_fst_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_fst_2935_);
v_snd_2936_ = lean_ctor_get(v___x_2934_, 1);
lean_inc(v_snd_2936_);
lean_dec_ref(v___x_2934_);
v___x_2937_ = lean_st_ref_take(v_ref_2852_);
v_model_2938_ = lean_ctor_get(v___x_2937_, 0);
v_queue_2939_ = lean_ctor_get(v___x_2937_, 4);
v_busy_2940_ = lean_ctor_get_uint8(v___x_2937_, sizeof(void*)*10 + 2);
v_subs_2941_ = lean_ctor_get(v___x_2937_, 5);
v_handlers_2942_ = lean_ctor_get(v___x_2937_, 6);
v_nextSub_2943_ = lean_ctor_get(v___x_2937_, 7);
v_touched_2944_ = lean_ctor_get(v___x_2937_, 8);
v_ports_2945_ = lean_ctor_get(v___x_2937_, 9);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; lean_object* v_unused_2956_; lean_object* v_unused_2957_; 
v_unused_2955_ = lean_ctor_get(v___x_2937_, 3);
lean_dec(v_unused_2955_);
v_unused_2956_ = lean_ctor_get(v___x_2937_, 2);
lean_dec(v_unused_2956_);
v_unused_2957_ = lean_ctor_get(v___x_2937_, 1);
lean_dec(v_unused_2957_);
v___x_2947_ = v___x_2937_;
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_ports_2945_);
lean_inc(v_touched_2944_);
lean_inc(v_nextSub_2943_);
lean_inc(v_handlers_2942_);
lean_inc(v_subs_2941_);
lean_inc(v_queue_2939_);
lean_inc(v_model_2938_);
lean_dec(v___x_2937_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 3, v_snd_2936_);
lean_ctor_set(v___x_2947_, 2, v_next_2909_);
lean_ctor_set(v___x_2947_, 1, v_live_2908_);
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_model_2938_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v_live_2908_);
lean_ctor_set(v_reuseFailAlloc_2953_, 2, v_next_2909_);
lean_ctor_set(v_reuseFailAlloc_2953_, 3, v_snd_2936_);
lean_ctor_set(v_reuseFailAlloc_2953_, 4, v_queue_2939_);
lean_ctor_set(v_reuseFailAlloc_2953_, 5, v_subs_2941_);
lean_ctor_set(v_reuseFailAlloc_2953_, 6, v_handlers_2942_);
lean_ctor_set(v_reuseFailAlloc_2953_, 7, v_nextSub_2943_);
lean_ctor_set(v_reuseFailAlloc_2953_, 8, v_touched_2944_);
lean_ctor_set(v_reuseFailAlloc_2953_, 9, v_ports_2945_);
lean_ctor_set_uint8(v_reuseFailAlloc_2953_, sizeof(void*)*10 + 2, v_busy_2940_);
v___x_2950_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
lean_ctor_set_uint8(v___x_2950_, sizeof(void*)*10, v___x_2910_);
lean_ctor_set_uint8(v___x_2950_, sizeof(void*)*10 + 1, v___x_2910_);
v___x_2951_ = lean_st_ref_put(v_ref_2852_, v___x_2950_);
lean_dec(v_ref_2852_);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v_fst_2935_);
return v___x_2952_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2964_, lean_object* v_a_2965_){
_start:
{
lean_object* v_res_2966_; 
v_res_2966_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2964_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2967_, lean_object* v_Model_2968_, lean_object* v_Msg_2969_, lean_object* v_c_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2970_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2973_, lean_object* v_Model_2974_, lean_object* v_Msg_2975_, lean_object* v_c_2976_, lean_object* v_a_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l_Lasm_UI_Runtime_frame(v_Flags_2973_, v_Model_2974_, v_Msg_2975_, v_c_2976_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2979_, lean_object* v_____r_2980_, lean_object* v_levels_2981_){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2983_ = lean_unsigned_to_nat(2u);
v___x_2984_ = lean_nat_add(v_snd_2979_, v___x_2983_);
v___x_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2985_, 0, v_levels_2981_);
lean_ctor_set(v___x_2985_, 1, v___x_2984_);
v___x_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2988_, lean_object* v_____r_2989_, lean_object* v_levels_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2988_, v_____r_2989_, v_levels_2990_);
lean_dec(v_snd_2988_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2993_, lean_object* v_fst_2994_, lean_object* v_x_2995_){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2997_ = lean_box(0);
v___x_2998_ = lean_apply_3(v___f_2993_, v___x_2997_, v_fst_2994_, lean_box(0));
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2999_, lean_object* v_fst_3000_, lean_object* v_x_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2999_, v_fst_3000_, v_x_3001_);
lean_dec(v_x_3001_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_3004_, lean_object* v_fst_3005_, lean_object* v_x_3006_){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3008_ = lean_box(0);
v___x_3009_ = lean_apply_3(v___f_3004_, v___x_3008_, v_fst_3005_, lean_box(0));
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_3010_, lean_object* v_fst_3011_, lean_object* v_x_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_3010_, v_fst_3011_, v_x_3012_);
lean_dec_ref(v_x_3012_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_3015_, lean_object* v___x_3016_, lean_object* v_a_3017_){
_start:
{
lean_object* v___y_3020_; lean_object* v_fst_3040_; lean_object* v_snd_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3092_; 
v_fst_3040_ = lean_ctor_get(v_a_3017_, 0);
v_snd_3041_ = lean_ctor_get(v_a_3017_, 1);
v_isSharedCheck_3092_ = !lean_is_exclusive(v_a_3017_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3043_ = v_a_3017_;
v_isShared_3044_ = v_isSharedCheck_3092_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_snd_3041_);
lean_inc(v_fst_3040_);
lean_dec(v_a_3017_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3092_;
goto v_resetjp_3042_;
}
v___jp_3019_:
{
if (lean_obj_tag(v___y_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3031_; 
v_a_3021_ = lean_ctor_get(v___y_3020_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___y_3020_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3023_ = v___y_3020_;
v_isShared_3024_ = v_isSharedCheck_3031_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___y_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3031_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
if (lean_obj_tag(v_a_3021_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3027_; 
v_a_3025_ = lean_ctor_get(v_a_3021_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v_a_3021_, 1);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v_a_3025_);
v___x_3027_ = v___x_3023_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
else
{
lean_object* v_a_3029_; 
lean_del_object(v___x_3023_);
v_a_3029_ = lean_ctor_get(v_a_3021_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v_a_3021_, 1);
v_a_3017_ = v_a_3029_;
goto _start;
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
v_a_3032_ = lean_ctor_get(v___y_3020_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___y_3020_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___y_3020_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___y_3020_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; uint8_t v___x_3048_; 
v___x_3045_ = lean_unsigned_to_nat(1u);
v___x_3046_ = lean_nat_add(v_snd_3041_, v___x_3045_);
v___x_3047_ = lean_array_get_size(v_items_3015_);
v___x_3048_ = lean_nat_dec_lt(v___x_3046_, v___x_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3050_; 
lean_dec(v___x_3046_);
if (v_isShared_3044_ == 0)
{
v___x_3050_ = v___x_3043_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_fst_3040_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v_snd_3041_);
v___x_3050_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
return v___x_3051_;
}
}
else
{
lean_object* v___x_3053_; lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3053_ = lean_box(0);
lean_inc(v_snd_3041_);
v___f_3054_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3054_, 0, v_snd_3041_);
v___x_3055_ = lean_array_get_borrowed(v___x_3053_, v_items_3015_, v_snd_3041_);
v___x_3056_ = lean_array_get(v___x_3053_, v_items_3015_, v___x_3046_);
lean_dec(v___x_3046_);
if (lean_obj_tag(v___x_3055_) == 3)
{
if (lean_obj_tag(v___x_3056_) == 7)
{
double v_n_3057_; lean_object* v_items_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3083_; 
v_n_3057_ = lean_ctor_get_float(v___x_3055_, 0);
v_items_3058_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3060_ = v___x_3056_;
v_isShared_3061_ = v_isSharedCheck_3083_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_items_3058_);
lean_dec(v___x_3056_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3083_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
uint64_t v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; uint8_t v___x_3065_; 
v___x_3062_ = lean_float_to_uint64(v_n_3057_);
v___x_3063_ = lean_uint64_to_nat(v___x_3062_);
v___x_3064_ = lean_array_get_size(v___x_3016_);
v___x_3065_ = lean_nat_dec_lt(v___x_3063_, v___x_3064_);
if (v___x_3065_ == 0)
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
lean_dec(v___x_3063_);
lean_del_object(v___x_3060_);
lean_dec_ref(v_items_3058_);
lean_del_object(v___x_3043_);
lean_dec(v_snd_3041_);
v___x_3066_ = lean_box(0);
v___x_3067_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_3054_, v_fst_3040_, v___x_3066_);
v___y_3020_ = v___x_3067_;
goto v___jp_3019_;
}
else
{
lean_object* v___x_3068_; 
v___x_3068_ = lean_array_fget_borrowed(v___x_3016_, v___x_3063_);
lean_dec(v___x_3063_);
if (lean_obj_tag(v___x_3068_) == 1)
{
lean_object* v_attrs_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3074_; 
lean_del_object(v___x_3060_);
lean_dec_ref(v___f_3054_);
v_attrs_3069_ = lean_ctor_get(v___x_3068_, 3);
v___x_3070_ = lean_array_to_list(v_items_3058_);
v___x_3071_ = lean_box(0);
v___x_3072_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(v___x_3070_, v___x_3071_);
lean_inc(v_attrs_3069_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v___x_3072_);
lean_ctor_set(v___x_3043_, 0, v_attrs_3069_);
v___x_3074_ = v___x_3043_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_attrs_3069_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3075_ = lean_array_push(v_fst_3040_, v___x_3074_);
v___x_3076_ = lean_box(0);
v___x_3077_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_3041_, v___x_3076_, v___x_3075_);
lean_dec(v_snd_3041_);
v___y_3020_ = v___x_3077_;
goto v___jp_3019_;
}
}
else
{
lean_object* v___x_3080_; 
lean_dec_ref(v_items_3058_);
lean_del_object(v___x_3043_);
lean_dec(v_snd_3041_);
lean_inc(v___x_3068_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 1);
lean_ctor_set(v___x_3060_, 0, v___x_3068_);
v___x_3080_ = v___x_3060_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3068_);
v___x_3080_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; 
v___x_3081_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_3054_, v_fst_3040_, v___x_3080_);
lean_dec_ref(v___x_3080_);
v___y_3020_ = v___x_3081_;
goto v___jp_3019_;
}
}
}
}
}
else
{
lean_object* v___x_3085_; 
lean_dec(v_snd_3041_);
lean_inc_ref(v___x_3055_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v___x_3056_);
lean_ctor_set(v___x_3043_, 0, v___x_3055_);
v___x_3085_ = v___x_3043_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3087_, 1, v___x_3056_);
v___x_3085_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
lean_object* v___x_3086_; 
v___x_3086_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_3054_, v_fst_3040_, v___x_3085_);
lean_dec_ref(v___x_3085_);
v___y_3020_ = v___x_3086_;
goto v___jp_3019_;
}
}
}
else
{
lean_object* v___x_3089_; 
lean_dec(v_snd_3041_);
lean_inc(v___x_3055_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v___x_3056_);
lean_ctor_set(v___x_3043_, 0, v___x_3055_);
v___x_3089_ = v___x_3043_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3091_, 1, v___x_3056_);
v___x_3089_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
lean_object* v___x_3090_; 
v___x_3090_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_3054_, v_fst_3040_, v___x_3089_);
lean_dec_ref(v___x_3089_);
v___y_3020_ = v___x_3090_;
goto v___jp_3019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_3093_, lean_object* v___x_3094_, lean_object* v_a_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3093_, v___x_3094_, v_a_3095_);
lean_dec_ref(v___x_3094_);
lean_dec_ref(v_items_3093_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_3098_, lean_object* v_as_3099_, size_t v_sz_3100_, size_t v_i_3101_, lean_object* v_b_3102_){
_start:
{
uint8_t v___x_3104_; 
v___x_3104_ = lean_usize_dec_lt(v_i_3101_, v_sz_3100_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; 
lean_dec_ref(v_c_3098_);
v___x_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3105_, 0, v_b_3102_);
return v___x_3105_;
}
else
{
lean_object* v___x_3106_; lean_object* v_a_3107_; lean_object* v___x_3108_; 
v___x_3106_ = lean_box(0);
v_a_3107_ = lean_array_uget_borrowed(v_as_3099_, v_i_3101_);
lean_inc(v_a_3107_);
lean_inc_ref(v_c_3098_);
v___x_3108_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3098_, v_a_3107_);
if (lean_obj_tag(v___x_3108_) == 0)
{
size_t v___x_3109_; size_t v___x_3110_; 
lean_dec_ref_known(v___x_3108_, 1);
v___x_3109_ = ((size_t)1ULL);
v___x_3110_ = lean_usize_add(v_i_3101_, v___x_3109_);
v_i_3101_ = v___x_3110_;
v_b_3102_ = v___x_3106_;
goto _start;
}
else
{
lean_dec_ref(v_c_3098_);
return v___x_3108_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_3112_, lean_object* v_as_3113_, lean_object* v_sz_3114_, lean_object* v_i_3115_, lean_object* v_b_3116_, lean_object* v___y_3117_){
_start:
{
size_t v_sz_boxed_3118_; size_t v_i_boxed_3119_; lean_object* v_res_3120_; 
v_sz_boxed_3118_ = lean_unbox_usize(v_sz_3114_);
lean_dec(v_sz_3114_);
v_i_boxed_3119_ = lean_unbox_usize(v_i_3115_);
lean_dec(v_i_3115_);
v_res_3120_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3112_, v_as_3113_, v_sz_boxed_3118_, v_i_boxed_3119_, v_b_3116_);
lean_dec_ref(v_as_3113_);
return v_res_3120_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_unsigned_to_nat(0u);
v___x_3122_ = lean_nat_to_int(v___x_3121_);
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_3131_, size_t v_i_3132_, lean_object* v_bs_3133_){
_start:
{
uint8_t v___x_3134_; 
v___x_3134_ = lean_usize_dec_lt(v_i_3132_, v_sz_3131_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3135_, 0, v_bs_3133_);
return v___x_3135_;
}
else
{
lean_object* v_v_3136_; lean_object* v___x_3137_; lean_object* v_bs_x27_3138_; lean_object* v_a_3140_; 
v_v_3136_ = lean_array_uget(v_bs_3133_, v_i_3132_);
v___x_3137_ = lean_unsigned_to_nat(0u);
v_bs_x27_3138_ = lean_array_uset(v_bs_3133_, v_i_3132_, v___x_3137_);
switch(lean_obj_tag(v_v_3136_))
{
case 3:
{
double v_n_3149_; lean_object* v___x_3150_; 
v_n_3149_ = lean_ctor_get_float(v_v_3136_, 0);
lean_dec_ref_known(v_v_3136_, 0);
v___x_3150_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3149_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v___x_3151_; 
lean_dec_ref(v_bs_x27_3138_);
v___x_3151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3151_;
}
else
{
lean_object* v_val_3152_; 
v_val_3152_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_val_3152_);
lean_dec_ref_known(v___x_3150_, 1);
v_a_3140_ = v_val_3152_;
goto v___jp_3139_;
}
}
case 5:
{
lean_object* v_i_3153_; 
v_i_3153_ = lean_ctor_get(v_v_3136_, 0);
lean_inc(v_i_3153_);
lean_dec_ref_known(v_v_3136_, 1);
v_a_3140_ = v_i_3153_;
goto v___jp_3139_;
}
default: 
{
lean_object* v___x_3154_; 
lean_dec_ref(v_bs_x27_3138_);
lean_dec(v_v_3136_);
v___x_3154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3154_;
}
}
v___jp_3139_:
{
lean_object* v___x_3141_; uint8_t v___x_3142_; 
v___x_3141_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3142_ = lean_int_dec_le(v___x_3141_, v_a_3140_);
if (v___x_3142_ == 0)
{
lean_object* v___x_3143_; 
lean_dec(v_a_3140_);
lean_dec_ref(v_bs_x27_3138_);
v___x_3143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3143_;
}
else
{
lean_object* v___x_3144_; size_t v___x_3145_; size_t v___x_3146_; lean_object* v___x_3147_; 
v___x_3144_ = l_Int_toNat(v_a_3140_);
lean_dec(v_a_3140_);
v___x_3145_ = ((size_t)1ULL);
v___x_3146_ = lean_usize_add(v_i_3132_, v___x_3145_);
v___x_3147_ = lean_array_uset(v_bs_x27_3138_, v_i_3132_, v___x_3144_);
v_i_3132_ = v___x_3146_;
v_bs_3133_ = v___x_3147_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3155_, lean_object* v_i_3156_, lean_object* v_bs_3157_){
_start:
{
size_t v_sz_boxed_3158_; size_t v_i_boxed_3159_; lean_object* v_res_3160_; 
v_sz_boxed_3158_ = lean_unbox_usize(v_sz_3155_);
lean_dec(v_sz_3155_);
v_i_boxed_3159_ = lean_unbox_usize(v_i_3156_);
lean_dec(v_i_3156_);
v_res_3160_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3158_, v_i_boxed_3159_, v_bs_3157_);
return v_res_3160_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0(void){
_start:
{
uint8_t v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = 0;
v___x_3162_ = l_Lasm_UI_Runtime_answer(v___x_3161_, v___x_3161_, v___x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3169_, lean_object* v_args_3170_){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3178_ = lean_array_get_size(v_args_3170_);
v___x_3179_ = lean_unsigned_to_nat(3u);
v___x_3180_ = lean_nat_dec_eq(v___x_3178_, v___x_3179_);
if (v___x_3180_ == 0)
{
lean_dec_ref(v_c_3169_);
goto v___jp_3172_;
}
else
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = lean_unsigned_to_nat(1u);
v___x_3182_ = lean_array_fget_borrowed(v_args_3170_, v___x_3181_);
if (lean_obj_tag(v___x_3182_) == 4)
{
lean_object* v_s_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v_s_3183_ = lean_ctor_get(v___x_3182_, 0);
v___x_3184_ = lean_unsigned_to_nat(2u);
v___x_3185_ = lean_array_fget_borrowed(v_args_3170_, v___x_3184_);
if (lean_obj_tag(v___x_3185_) == 7)
{
lean_object* v_items_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_items_3186_ = lean_ctor_get(v___x_3185_, 0);
v___x_3187_ = lean_unsigned_to_nat(0u);
v___x_3188_ = lean_array_fget_borrowed(v_args_3170_, v___x_3187_);
if (lean_obj_tag(v___x_3188_) == 7)
{
lean_object* v_items_3189_; size_t v_sz_3190_; size_t v___x_3191_; lean_object* v___x_3192_; 
v_items_3189_ = lean_ctor_get(v___x_3188_, 0);
v_sz_3190_ = lean_array_size(v_items_3189_);
v___x_3191_ = ((size_t)0ULL);
lean_inc_ref(v_items_3189_);
v___x_3192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3190_, v___x_3191_, v_items_3189_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_dec_ref_known(v___x_3192_, 1);
lean_dec_ref(v_c_3169_);
goto v___jp_3175_;
}
else
{
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_dec_ref_known(v___x_3192_, 1);
lean_dec_ref(v_c_3169_);
goto v___jp_3175_;
}
else
{
lean_object* v_a_3193_; lean_object* v_ref_3194_; lean_object* v___x_3195_; lean_object* v_live_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v_model_3201_; lean_object* v_live_3202_; lean_object* v_next_3203_; lean_object* v_tables_3204_; uint8_t v_dirty_3205_; uint8_t v_scheduled_3206_; lean_object* v_queue_3207_; uint8_t v_busy_3208_; lean_object* v_subs_3209_; lean_object* v_handlers_3210_; lean_object* v_nextSub_3211_; lean_object* v_touched_3212_; lean_object* v_ports_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3262_; 
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3193_);
lean_dec_ref_known(v___x_3192_, 1);
v_ref_3194_ = lean_ctor_get(v_c_3169_, 1);
v___x_3195_ = lean_st_ref_get(v_ref_3194_);
v_live_3196_ = lean_ctor_get(v___x_3195_, 1);
lean_inc(v_live_3196_);
lean_dec(v___x_3195_);
v___x_3197_ = lean_array_to_list(v_a_3193_);
v___x_3198_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3199_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3196_, v___x_3197_, v___x_3198_);
v___x_3200_ = lean_st_ref_take(v_ref_3194_);
v_model_3201_ = lean_ctor_get(v___x_3200_, 0);
v_live_3202_ = lean_ctor_get(v___x_3200_, 1);
v_next_3203_ = lean_ctor_get(v___x_3200_, 2);
v_tables_3204_ = lean_ctor_get(v___x_3200_, 3);
v_dirty_3205_ = lean_ctor_get_uint8(v___x_3200_, sizeof(void*)*10);
v_scheduled_3206_ = lean_ctor_get_uint8(v___x_3200_, sizeof(void*)*10 + 1);
v_queue_3207_ = lean_ctor_get(v___x_3200_, 4);
v_busy_3208_ = lean_ctor_get_uint8(v___x_3200_, sizeof(void*)*10 + 2);
v_subs_3209_ = lean_ctor_get(v___x_3200_, 5);
v_handlers_3210_ = lean_ctor_get(v___x_3200_, 6);
v_nextSub_3211_ = lean_ctor_get(v___x_3200_, 7);
v_touched_3212_ = lean_ctor_get(v___x_3200_, 8);
v_ports_3213_ = lean_ctor_get(v___x_3200_, 9);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3215_ = v___x_3200_;
v_isShared_3216_ = v_isSharedCheck_3262_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_ports_3213_);
lean_inc(v_touched_3212_);
lean_inc(v_nextSub_3211_);
lean_inc(v_handlers_3210_);
lean_inc(v_subs_3209_);
lean_inc(v_queue_3207_);
lean_inc(v_tables_3204_);
lean_inc(v_next_3203_);
lean_inc(v_live_3202_);
lean_inc(v_model_3201_);
lean_dec(v___x_3200_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3262_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3217_; lean_object* v___x_3219_; 
v___x_3217_ = lean_array_push(v_touched_3212_, v___x_3197_);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 8, v___x_3217_);
v___x_3219_ = v___x_3215_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_model_3201_);
lean_ctor_set(v_reuseFailAlloc_3261_, 1, v_live_3202_);
lean_ctor_set(v_reuseFailAlloc_3261_, 2, v_next_3203_);
lean_ctor_set(v_reuseFailAlloc_3261_, 3, v_tables_3204_);
lean_ctor_set(v_reuseFailAlloc_3261_, 4, v_queue_3207_);
lean_ctor_set(v_reuseFailAlloc_3261_, 5, v_subs_3209_);
lean_ctor_set(v_reuseFailAlloc_3261_, 6, v_handlers_3210_);
lean_ctor_set(v_reuseFailAlloc_3261_, 7, v_nextSub_3211_);
lean_ctor_set(v_reuseFailAlloc_3261_, 8, v___x_3217_);
lean_ctor_set(v_reuseFailAlloc_3261_, 9, v_ports_3213_);
lean_ctor_set_uint8(v_reuseFailAlloc_3261_, sizeof(void*)*10, v_dirty_3205_);
lean_ctor_set_uint8(v_reuseFailAlloc_3261_, sizeof(void*)*10 + 1, v_scheduled_3206_);
lean_ctor_set_uint8(v_reuseFailAlloc_3261_, sizeof(void*)*10 + 2, v_busy_3208_);
v___x_3219_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_st_ref_put(v_ref_3194_, v___x_3219_);
v___x_3221_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_3222_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3186_, v___x_3199_, v___x_3221_);
lean_dec_ref(v___x_3199_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; lean_object* v_fst_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v_msgs_3228_; uint8_t v_preventDefault_3229_; uint8_t v_stopPropagation_3230_; lean_object* v___x_3231_; size_t v_sz_3232_; lean_object* v___x_3233_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v_fst_3224_ = lean_ctor_get(v_a_3223_, 0);
lean_inc(v_fst_3224_);
lean_dec(v_a_3223_);
v___x_3225_ = lean_array_to_list(v_fst_3224_);
v___x_3226_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__2));
lean_inc_ref(v_s_3183_);
v___x_3227_ = l_Lasm_UI_Runtime_decide___redArg(v_s_3183_, v___x_3225_, v___x_3226_);
v_msgs_3228_ = lean_ctor_get(v___x_3227_, 0);
lean_inc_ref(v_msgs_3228_);
v_preventDefault_3229_ = lean_ctor_get_uint8(v___x_3227_, sizeof(void*)*1);
v_stopPropagation_3230_ = lean_ctor_get_uint8(v___x_3227_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_3227_);
v___x_3231_ = lean_box(0);
v_sz_3232_ = lean_array_size(v_msgs_3228_);
lean_inc_ref(v_c_3169_);
v___x_3233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3169_, v_msgs_3228_, v_sz_3232_, v___x_3191_, v___x_3231_);
lean_dec_ref(v_msgs_3228_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v___x_3234_; lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3244_; 
lean_dec_ref_known(v___x_3233_, 1);
v___x_3234_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3169_);
lean_dec_ref(v_c_3169_);
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
uint8_t v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3242_; 
v___x_3239_ = lean_unbox(v_a_3235_);
lean_dec(v_a_3235_);
v___x_3240_ = l_Lasm_UI_Runtime_answer(v___x_3239_, v_preventDefault_3229_, v_stopPropagation_3230_);
if (v_isShared_3238_ == 0)
{
lean_ctor_set(v___x_3237_, 0, v___x_3240_);
v___x_3242_ = v___x_3237_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3240_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec_ref(v_c_3169_);
v_a_3245_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3233_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3233_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
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
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
lean_dec_ref(v_c_3169_);
v_a_3253_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3222_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3222_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
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
lean_dec_ref(v_c_3169_);
goto v___jp_3175_;
}
}
else
{
lean_dec_ref(v_c_3169_);
goto v___jp_3172_;
}
}
else
{
lean_dec_ref(v_c_3169_);
goto v___jp_3172_;
}
}
v___jp_3172_:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3173_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
return v___x_3174_;
}
v___jp_3175_:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3176_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
return v___x_3177_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3263_, lean_object* v_args_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3263_, v_args_3264_);
lean_dec_ref(v_args_3264_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3267_, lean_object* v_Model_3268_, lean_object* v_Msg_3269_, lean_object* v_c_3270_, lean_object* v_args_3271_){
_start:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3270_, v_args_3271_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3274_, lean_object* v_Model_3275_, lean_object* v_Msg_3276_, lean_object* v_c_3277_, lean_object* v_args_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3274_, v_Model_3275_, v_Msg_3276_, v_c_3277_, v_args_3278_);
lean_dec_ref(v_args_3278_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3281_, lean_object* v_items_3282_, lean_object* v___x_3283_, lean_object* v_inst_3284_, lean_object* v_a_3285_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3282_, v___x_3283_, v_a_3285_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3288_, lean_object* v_items_3289_, lean_object* v___x_3290_, lean_object* v_inst_3291_, lean_object* v_a_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3288_, v_items_3289_, v___x_3290_, v_inst_3291_, v_a_3292_);
lean_dec_ref(v___x_3290_);
lean_dec_ref(v_items_3289_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3295_, lean_object* v_Flags_3296_, lean_object* v_Model_3297_, lean_object* v_c_3298_, lean_object* v_as_3299_, size_t v_sz_3300_, size_t v_i_3301_, lean_object* v_b_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3298_, v_as_3299_, v_sz_3300_, v_i_3301_, v_b_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3305_, lean_object* v_Flags_3306_, lean_object* v_Model_3307_, lean_object* v_c_3308_, lean_object* v_as_3309_, lean_object* v_sz_3310_, lean_object* v_i_3311_, lean_object* v_b_3312_, lean_object* v___y_3313_){
_start:
{
size_t v_sz_boxed_3314_; size_t v_i_boxed_3315_; lean_object* v_res_3316_; 
v_sz_boxed_3314_ = lean_unbox_usize(v_sz_3310_);
lean_dec(v_sz_3310_);
v_i_boxed_3315_ = lean_unbox_usize(v_i_3311_);
lean_dec(v_i_3311_);
v_res_3316_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3305_, v_Flags_3306_, v_Model_3307_, v_c_3308_, v_as_3309_, v_sz_boxed_3314_, v_i_boxed_3315_, v_b_3312_);
lean_dec_ref(v_as_3309_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3317_, lean_object* v_x_3318_, lean_object* v_x_3319_){
_start:
{
if (lean_obj_tag(v_x_3319_) == 0)
{
lean_dec_ref(v___y_3317_);
return v_x_3318_;
}
else
{
lean_object* v_head_3320_; lean_object* v_tail_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v_head_3320_ = lean_ctor_get(v_x_3319_, 0);
lean_inc(v_head_3320_);
v_tail_3321_ = lean_ctor_get(v_x_3319_, 1);
lean_inc(v_tail_3321_);
lean_dec_ref_known(v_x_3319_, 2);
lean_inc_ref(v___y_3317_);
v___x_3322_ = lean_apply_1(v_head_3320_, v___y_3317_);
v___x_3323_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_3318_, v___x_3322_);
v_x_3318_ = v___x_3323_;
v_x_3319_ = v_tail_3321_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3330_, lean_object* v_args_3331_){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; uint8_t v___x_3338_; 
v___x_3336_ = lean_unsigned_to_nat(0u);
v___x_3337_ = lean_array_get_size(v_args_3331_);
v___x_3338_ = lean_nat_dec_lt(v___x_3336_, v___x_3337_);
if (v___x_3338_ == 0)
{
lean_dec_ref(v_c_3330_);
goto v___jp_3333_;
}
else
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_array_fget_borrowed(v_args_3331_, v___x_3336_);
if (lean_obj_tag(v___x_3339_) == 3)
{
double v_n_3340_; lean_object* v___y_3342_; lean_object* v___x_3380_; uint8_t v___x_3381_; 
v_n_3340_ = lean_ctor_get_float(v___x_3339_, 0);
v___x_3380_ = lean_unsigned_to_nat(1u);
v___x_3381_ = lean_nat_dec_lt(v___x_3380_, v___x_3337_);
if (v___x_3381_ == 0)
{
goto v___jp_3378_;
}
else
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_array_fget_borrowed(v_args_3331_, v___x_3380_);
if (lean_obj_tag(v___x_3382_) == 7)
{
lean_object* v_items_3383_; 
v_items_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc_ref(v_items_3383_);
v___y_3342_ = v_items_3383_;
goto v___jp_3341_;
}
else
{
goto v___jp_3378_;
}
}
v___jp_3341_:
{
lean_object* v_ref_3343_; lean_object* v___x_3344_; lean_object* v_handlers_3345_; uint64_t v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v_msgs_3352_; uint8_t v_preventDefault_3353_; uint8_t v_stopPropagation_3354_; lean_object* v___x_3355_; size_t v_sz_3356_; size_t v___x_3357_; lean_object* v___x_3358_; 
v_ref_3343_ = lean_ctor_get(v_c_3330_, 1);
v___x_3344_ = lean_st_ref_get(v_ref_3343_);
v_handlers_3345_ = lean_ctor_get(v___x_3344_, 6);
lean_inc_ref(v_handlers_3345_);
lean_dec(v___x_3344_);
v___x_3346_ = lean_float_to_uint64(v_n_3340_);
v___x_3347_ = lean_uint64_to_nat(v___x_3346_);
v___x_3348_ = lean_box(0);
v___x_3349_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3345_, v___x_3347_, v___x_3348_);
lean_dec(v___x_3347_);
lean_dec_ref(v_handlers_3345_);
v___x_3350_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__1));
v___x_3351_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3342_, v___x_3350_, v___x_3349_);
v_msgs_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc_ref(v_msgs_3352_);
v_preventDefault_3353_ = lean_ctor_get_uint8(v___x_3351_, sizeof(void*)*1);
v_stopPropagation_3354_ = lean_ctor_get_uint8(v___x_3351_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_3351_);
v___x_3355_ = lean_box(0);
v_sz_3356_ = lean_array_size(v_msgs_3352_);
v___x_3357_ = ((size_t)0ULL);
lean_inc_ref(v_c_3330_);
v___x_3358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3330_, v_msgs_3352_, v_sz_3356_, v___x_3357_, v___x_3355_);
lean_dec_ref(v_msgs_3352_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v___x_3359_; lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3369_; 
lean_dec_ref_known(v___x_3358_, 1);
v___x_3359_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3330_);
lean_dec_ref(v_c_3330_);
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3362_ = v___x_3359_;
v_isShared_3363_ = v_isSharedCheck_3369_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3359_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3369_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
uint8_t v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3367_; 
v___x_3364_ = lean_unbox(v_a_3360_);
lean_dec(v_a_3360_);
v___x_3365_ = l_Lasm_UI_Runtime_answer(v___x_3364_, v_preventDefault_3353_, v_stopPropagation_3354_);
if (v_isShared_3363_ == 0)
{
lean_ctor_set(v___x_3362_, 0, v___x_3365_);
v___x_3367_ = v___x_3362_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v___x_3365_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec_ref(v_c_3330_);
v_a_3370_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3358_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3358_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
v___jp_3378_:
{
lean_object* v___x_3379_; 
v___x_3379_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3342_ = v___x_3379_;
goto v___jp_3341_;
}
}
else
{
lean_dec_ref(v_c_3330_);
goto v___jp_3333_;
}
}
v___jp_3333_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3334_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3384_, lean_object* v_args_3385_, lean_object* v_a_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3384_, v_args_3385_);
lean_dec_ref(v_args_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3388_, lean_object* v_Model_3389_, lean_object* v_Msg_3390_, lean_object* v_c_3391_, lean_object* v_args_3392_){
_start:
{
lean_object* v___x_3394_; 
v___x_3394_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3391_, v_args_3392_);
return v___x_3394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3395_, lean_object* v_Model_3396_, lean_object* v_Msg_3397_, lean_object* v_c_3398_, lean_object* v_args_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lasm_UI_Runtime_onSub(v_Flags_3395_, v_Model_3396_, v_Msg_3397_, v_c_3398_, v_args_3399_);
lean_dec_ref(v_args_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3402_, lean_object* v___y_3403_, lean_object* v_x_3404_, lean_object* v_x_3405_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3403_, v_x_3404_, v_x_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lasm_UI_instHotModel___redArg();
return v_res_3412_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = l_Lasm_UI_instHotModel___redArg();
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_3414_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_3416_, lean_object* v_d_3417_){
_start:
{
lean_object* v_fromJS_3418_; lean_object* v___x_3419_; 
v_fromJS_3418_ = lean_ctor_get(v_inst_3416_, 0);
lean_inc_ref(v_fromJS_3418_);
lean_dec_ref(v_inst_3416_);
v___x_3419_ = lean_apply_1(v_fromJS_3418_, v_d_3417_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v___x_3420_; 
lean_dec_ref_known(v___x_3419_, 1);
v___x_3420_ = lean_box(0);
return v___x_3420_;
}
else
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3428_; 
v_a_3421_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3423_ = v___x_3419_;
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3419_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v___x_3426_; 
if (v_isShared_3424_ == 0)
{
v___x_3426_ = v___x_3423_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_a_3421_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_3429_, lean_object* v_inst_3430_){
_start:
{
lean_object* v___f_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
v___f_3431_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3431_, 0, v_inst_3430_);
v___x_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3432_, 0, v_inst_3429_);
v___x_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3433_, 0, v___f_3431_);
v___x_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_3435_, lean_object* v_inst_3436_, lean_object* v_inst_3437_){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_3436_, v_inst_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3439_, lean_object* v_x_3440_){
_start:
{
lean_object* v___x_3442_; lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3451_; 
v___x_3442_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3439_);
v_a_3443_ = lean_ctor_get(v___x_3442_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3445_ = v___x_3442_;
v_isShared_3446_ = v_isSharedCheck_3451_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3442_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3451_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3447_; lean_object* v___x_3449_; 
v___x_3447_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3447_, 0, v_a_3443_);
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 0, v___x_3447_);
v___x_3449_ = v___x_3445_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3452_, lean_object* v_x_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3452_, v_x_3453_);
lean_dec_ref(v_x_3453_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v_app_3456_, lean_object* v___x_3457_, lean_object* v___x_3458_, lean_object* v_args_3459_){
_start:
{
lean_object* v_onUrlChange_3473_; lean_object* v___y_3475_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v_onUrlChange_3473_ = lean_ctor_get(v_app_3456_, 4);
lean_inc(v_onUrlChange_3473_);
lean_dec_ref(v_app_3456_);
v___x_3491_ = lean_array_get_size(v_args_3459_);
v___x_3492_ = lean_nat_dec_lt(v___x_3458_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_box(0);
v___y_3475_ = v___x_3493_;
goto v___jp_3474_;
}
else
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lean_array_fget_borrowed(v_args_3459_, v___x_3458_);
lean_inc(v___x_3494_);
v___x_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
v___y_3475_ = v___x_3495_;
goto v___jp_3474_;
}
v___jp_3461_:
{
lean_object* v___x_3462_; lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3472_; 
v___x_3462_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3457_);
lean_dec_ref(v___x_3457_);
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3465_ = v___x_3462_;
v_isShared_3466_ = v_isSharedCheck_3472_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3462_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3472_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3467_; uint8_t v___x_3468_; lean_object* v___x_3470_; 
v___x_3467_ = lean_alloc_ctor(2, 0, 1);
v___x_3468_ = lean_unbox(v_a_3463_);
lean_dec(v_a_3463_);
lean_ctor_set_uint8(v___x_3467_, 0, v___x_3468_);
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 0, v___x_3467_);
v___x_3470_ = v___x_3465_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v___x_3467_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
v___jp_3474_:
{
if (lean_obj_tag(v_onUrlChange_3473_) == 1)
{
if (lean_obj_tag(v___y_3475_) == 1)
{
lean_object* v_val_3476_; 
v_val_3476_ = lean_ctor_get(v___y_3475_, 0);
lean_inc(v_val_3476_);
lean_dec_ref_known(v___y_3475_, 1);
if (lean_obj_tag(v_val_3476_) == 4)
{
lean_object* v_val_3477_; lean_object* v_s_3478_; lean_object* v___x_3479_; 
v_val_3477_ = lean_ctor_get(v_onUrlChange_3473_, 0);
lean_inc(v_val_3477_);
lean_dec_ref_known(v_onUrlChange_3473_, 1);
v_s_3478_ = lean_ctor_get(v_val_3476_, 0);
lean_inc_ref(v_s_3478_);
lean_dec_ref_known(v_val_3476_, 1);
v___x_3479_ = l_Lasm_UI_Url_parse(v_s_3478_);
if (lean_obj_tag(v___x_3479_) == 1)
{
lean_object* v_val_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v_val_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_val_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v___x_3481_ = lean_apply_1(v_val_3477_, v_val_3480_);
lean_inc_ref(v___x_3457_);
v___x_3482_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3457_, v___x_3481_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_dec_ref_known(v___x_3482_, 1);
goto v___jp_3461_;
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec_ref(v___x_3457_);
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3482_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3482_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
else
{
lean_dec(v___x_3479_);
lean_dec(v_val_3477_);
goto v___jp_3461_;
}
}
else
{
lean_dec(v_val_3476_);
lean_dec_ref_known(v_onUrlChange_3473_, 1);
goto v___jp_3461_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3473_, 1);
lean_dec(v___y_3475_);
goto v___jp_3461_;
}
}
else
{
lean_dec(v___y_3475_);
lean_dec(v_onUrlChange_3473_);
goto v___jp_3461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v_app_3496_, lean_object* v___x_3497_, lean_object* v___x_3498_, lean_object* v_args_3499_, lean_object* v___y_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lasm_UI_App_run___redArg___lam__1(v_app_3496_, v___x_3497_, v___x_3498_, v_args_3499_);
lean_dec_ref(v_args_3499_);
lean_dec(v___x_3498_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3502_, lean_object* v___x_3503_, lean_object* v_a_3504_, lean_object* v_x_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v___y_3509_; lean_object* v___x_3527_; 
v___x_3527_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3503_, v_a_3504_);
if (lean_obj_tag(v___x_3527_) == 0)
{
v___y_3509_ = v___x_3527_;
goto v___jp_3508_;
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3527_, 1);
v___x_3529_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3530_ = l_Lasm_UI_Runtime_report(v___x_3529_, v_a_3528_);
v___y_3509_ = v___x_3530_;
goto v___jp_3508_;
}
v___jp_3508_:
{
if (lean_obj_tag(v___y_3509_) == 0)
{
lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3517_; 
v_isSharedCheck_3517_ = !lean_is_exclusive(v___y_3509_);
if (v_isSharedCheck_3517_ == 0)
{
lean_object* v_unused_3518_; 
v_unused_3518_ = lean_ctor_get(v___y_3509_, 0);
lean_dec(v_unused_3518_);
v___x_3511_ = v___y_3509_;
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
else
{
lean_dec(v___y_3509_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3502_);
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3513_);
v___x_3515_ = v___x_3511_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
else
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3526_; 
v_a_3519_ = lean_ctor_get(v___y_3509_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___y_3509_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3521_ = v___y_3509_;
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___y_3509_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3524_; 
if (v_isShared_3522_ == 0)
{
v___x_3524_ = v___x_3521_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3519_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3531_, lean_object* v___x_3532_, lean_object* v_a_3533_, lean_object* v_x_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3531_, v___x_3532_, v_a_3533_, v_x_3534_, v___y_3535_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3538_, lean_object* v___x_3539_, lean_object* v_d_3540_){
_start:
{
lean_object* v___x_3542_; 
v___x_3542_ = lean_apply_1(v_val_3538_, v_d_3540_);
if (lean_obj_tag(v___x_3542_) == 1)
{
lean_object* v_val_3543_; lean_object* v___x_3544_; 
v_val_3543_ = lean_ctor_get(v___x_3542_, 0);
lean_inc(v_val_3543_);
lean_dec_ref_known(v___x_3542_, 1);
lean_inc_ref(v___x_3539_);
v___x_3544_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3539_, v_val_3543_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v___x_3545_; 
lean_dec_ref_known(v___x_3544_, 1);
v___x_3545_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3539_);
lean_dec_ref(v___x_3539_);
return v___x_3545_;
}
else
{
lean_dec_ref(v___x_3539_);
return v___x_3544_;
}
}
else
{
lean_object* v___x_3546_; 
lean_dec(v___x_3542_);
v___x_3546_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3539_);
lean_dec_ref(v___x_3539_);
return v___x_3546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3547_, lean_object* v___x_3548_, lean_object* v_d_3549_, lean_object* v___y_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3547_, v___x_3548_, v_d_3549_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_3552_){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3554_ = lean_st_ref_get(v_val_3552_);
v___x_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_3556_, lean_object* v___y_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_3556_);
lean_dec(v_val_3556_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_3559_, lean_object* v_____do__lift_3560_){
_start:
{
lean_object* v_model_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v_model_3562_ = lean_ctor_get(v_____do__lift_3560_, 0);
lean_inc(v_model_3562_);
lean_dec_ref(v_____do__lift_3560_);
v___x_3563_ = lean_apply_1(v_val_3559_, v_model_3562_);
v___x_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_3565_, lean_object* v_____do__lift_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_3565_, v_____do__lift_3566_);
return v_res_3568_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3569_; 
v___x_3569_ = l_instMonadEIO___redArg();
return v___x_3569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3582_, lean_object* v_hot_3583_, lean_object* v_app_3584_){
_start:
{
lean_object* v___x_3586_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; uint8_t v___y_3597_; uint8_t v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; uint8_t v___y_3601_; lean_object* v___x_3691_; 
v___x_3586_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3691_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
lean_inc(v_a_3692_);
lean_dec_ref_known(v___x_3691_, 1);
v___x_3693_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3694_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3695_ = l_Lasm_JS_Data_field(v_a_3692_, v___x_3694_);
v___x_3696_ = l_Lasm_JS_decodeAs___redArg(v_inst_3582_, v___x_3693_, v___x_3695_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; lean_object* v___x_3698_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; uint8_t v___y_3709_; uint8_t v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; uint8_t v___y_3734_; uint8_t v___y_3735_; lean_object* v_fst_3784_; lean_object* v_snd_3785_; lean_object* v___y_3813_; lean_object* v___y_3819_; lean_object* v___x_3837_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v___x_3696_, 1);
v___x_3698_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3837_ = l_Lasm_JS_Data_field(v_a_3692_, v___x_3698_);
lean_dec(v_a_3692_);
if (lean_obj_tag(v___x_3837_) == 4)
{
lean_object* v_s_3838_; lean_object* v___x_3839_; 
v_s_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc_ref(v_s_3838_);
lean_dec_ref_known(v___x_3837_, 1);
v___x_3839_ = l_Lasm_UI_Url_parse(v_s_3838_);
if (lean_obj_tag(v___x_3839_) == 0)
{
goto v___jp_3835_;
}
else
{
lean_object* v_val_3840_; 
v_val_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_val_3840_);
lean_dec_ref_known(v___x_3839_, 1);
v___y_3819_ = v_val_3840_;
goto v___jp_3818_;
}
}
else
{
lean_dec(v___x_3837_);
goto v___jp_3835_;
}
v___jp_3699_:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v_onUrlChange_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3712_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3713_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___y_3702_);
lean_ctor_set(v___x_3713_, 1, v___x_3712_);
v_onUrlChange_3714_ = lean_ctor_get(v_app_3584_, 4);
lean_inc(v_onUrlChange_3714_);
lean_dec_ref(v_app_3584_);
v___x_3715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3715_, 0, v___y_3701_);
lean_ctor_set(v___x_3715_, 1, v___x_3712_);
v___x_3716_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___y_3707_);
lean_ctor_set(v___x_3716_, 1, v___x_3712_);
v___x_3717_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
lean_ctor_set(v___x_3718_, 1, v___x_3713_);
v___x_3719_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3719_);
lean_ctor_set(v___x_3720_, 1, v___x_3715_);
v___x_3721_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
lean_ctor_set(v___x_3722_, 1, v___x_3716_);
v___x_3723_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___y_3704_);
lean_ctor_set(v___x_3723_, 1, v___x_3712_);
v___x_3724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3698_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3714_) == 0)
{
v___y_3588_ = v___y_3700_;
v___y_3589_ = v___y_3703_;
v___y_3590_ = v___x_3718_;
v___y_3591_ = v___y_3706_;
v___y_3592_ = v___y_3708_;
v___y_3593_ = v___x_3722_;
v___y_3594_ = v___y_3705_;
v___y_3595_ = v___x_3725_;
v___y_3596_ = v___x_3720_;
v___y_3597_ = v___y_3710_;
v___y_3598_ = v___y_3709_;
v___y_3599_ = v___x_3724_;
v___y_3600_ = v___y_3711_;
v___y_3601_ = v___y_3709_;
goto v___jp_3587_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3714_, 1);
v___y_3588_ = v___y_3700_;
v___y_3589_ = v___y_3703_;
v___y_3590_ = v___x_3718_;
v___y_3591_ = v___y_3706_;
v___y_3592_ = v___y_3708_;
v___y_3593_ = v___x_3722_;
v___y_3594_ = v___y_3705_;
v___y_3595_ = v___x_3725_;
v___y_3596_ = v___x_3720_;
v___y_3597_ = v___y_3710_;
v___y_3598_ = v___y_3709_;
v___y_3599_ = v___x_3724_;
v___y_3600_ = v___y_3711_;
v___y_3601_ = v___y_3710_;
goto v___jp_3587_;
}
}
v___jp_3726_:
{
lean_object* v___x_3736_; 
v___x_3736_ = l_Lasm_JS_Function_ofSyncFn(v___y_3728_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
lean_inc_ref(v___y_3729_);
v___x_3738_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3738_, 0, lean_box(0));
lean_closure_set(v___x_3738_, 1, lean_box(0));
lean_closure_set(v___x_3738_, 2, lean_box(0));
lean_closure_set(v___x_3738_, 3, v___y_3729_);
v___x_3739_ = l_Lasm_JS_Function_ofSyncFn(v___x_3738_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_a_3740_);
lean_dec_ref_known(v___x_3739_, 1);
lean_inc_ref(v___y_3729_);
v___x_3741_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3741_, 0, lean_box(0));
lean_closure_set(v___x_3741_, 1, lean_box(0));
lean_closure_set(v___x_3741_, 2, lean_box(0));
lean_closure_set(v___x_3741_, 3, v___y_3729_);
v___x_3742_ = l_Lasm_JS_Function_ofSyncFn(v___x_3741_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_object* v_a_3743_; lean_object* v___x_3744_; 
v_a_3743_ = lean_ctor_get(v___x_3742_, 0);
lean_inc(v_a_3743_);
lean_dec_ref_known(v___x_3742_, 1);
v___x_3744_ = l_Lasm_JS_Function_ofSyncFn(v___y_3727_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_receive_3745_; 
v_receive_3745_ = lean_ctor_get(v_app_3584_, 5);
if (lean_obj_tag(v_receive_3745_) == 1)
{
lean_object* v_a_3746_; lean_object* v_val_3747_; lean_object* v___f_3748_; lean_object* v___x_3749_; 
v_a_3746_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___x_3744_, 1);
v_val_3747_ = lean_ctor_get(v_receive_3745_, 0);
lean_inc_ref(v___y_3729_);
lean_inc(v_val_3747_);
v___f_3748_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3748_, 0, v_val_3747_);
lean_closure_set(v___f_3748_, 1, v___y_3729_);
v___x_3749_ = l_Lasm_Web_App_onMessage(v___f_3748_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_dec_ref_known(v___x_3749_, 1);
lean_inc_ref(v___y_3729_);
v___y_3700_ = v___y_3729_;
v___y_3701_ = v_a_3740_;
v___y_3702_ = v_a_3737_;
v___y_3703_ = v___y_3730_;
v___y_3704_ = v_a_3746_;
v___y_3705_ = v___y_3731_;
v___y_3706_ = v___y_3732_;
v___y_3707_ = v_a_3743_;
v___y_3708_ = v___y_3733_;
v___y_3709_ = v___y_3735_;
v___y_3710_ = v___y_3734_;
v___y_3711_ = v___y_3729_;
goto v___jp_3699_;
}
else
{
lean_dec(v_a_3746_);
lean_dec(v_a_3743_);
lean_dec(v_a_3740_);
lean_dec(v_a_3737_);
lean_dec(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v_app_3584_);
return v___x_3749_;
}
}
else
{
lean_object* v_a_3750_; 
v_a_3750_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3750_);
lean_dec_ref_known(v___x_3744_, 1);
lean_inc_ref(v___y_3729_);
v___y_3700_ = v___y_3729_;
v___y_3701_ = v_a_3740_;
v___y_3702_ = v_a_3737_;
v___y_3703_ = v___y_3730_;
v___y_3704_ = v_a_3750_;
v___y_3705_ = v___y_3731_;
v___y_3706_ = v___y_3732_;
v___y_3707_ = v_a_3743_;
v___y_3708_ = v___y_3733_;
v___y_3709_ = v___y_3735_;
v___y_3710_ = v___y_3734_;
v___y_3711_ = v___y_3729_;
goto v___jp_3699_;
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
lean_dec(v_a_3743_);
lean_dec(v_a_3740_);
lean_dec(v_a_3737_);
lean_dec(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v_app_3584_);
v_a_3751_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3744_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3744_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_dec(v_a_3740_);
lean_dec(v_a_3737_);
lean_dec(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v___y_3727_);
lean_dec_ref(v_app_3584_);
v_a_3759_ = lean_ctor_get(v___x_3742_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3742_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3742_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3742_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3764_; 
if (v_isShared_3762_ == 0)
{
v___x_3764_ = v___x_3761_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_a_3759_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_dec(v_a_3737_);
lean_dec(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v___y_3727_);
lean_dec_ref(v_app_3584_);
v_a_3767_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3739_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3739_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v___y_3727_);
lean_dec_ref(v_app_3584_);
v_a_3775_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3736_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3736_);
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
v___jp_3783_:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v_save_x3f_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3810_; 
v___x_3786_ = lean_box(0);
v___x_3787_ = lean_unsigned_to_nat(1u);
v___x_3788_ = lean_unsigned_to_nat(0u);
v___x_3789_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3790_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3791_ = 1;
v___x_3792_ = 0;
v___x_3793_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__0));
v___x_3794_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3794_, 0, v_fst_3784_);
lean_ctor_set(v___x_3794_, 1, v___x_3786_);
lean_ctor_set(v___x_3794_, 2, v___x_3787_);
lean_ctor_set(v___x_3794_, 3, v___x_3790_);
lean_ctor_set(v___x_3794_, 4, v___x_3793_);
lean_ctor_set(v___x_3794_, 5, v___x_3789_);
lean_ctor_set(v___x_3794_, 6, v___x_3789_);
lean_ctor_set(v___x_3794_, 7, v___x_3787_);
lean_ctor_set(v___x_3794_, 8, v___x_3793_);
lean_ctor_set(v___x_3794_, 9, v___x_3786_);
lean_ctor_set_uint8(v___x_3794_, sizeof(void*)*10, v___x_3791_);
lean_ctor_set_uint8(v___x_3794_, sizeof(void*)*10 + 1, v___x_3792_);
lean_ctor_set_uint8(v___x_3794_, sizeof(void*)*10 + 2, v___x_3792_);
v___x_3795_ = lean_st_mk_ref(v___x_3794_);
v_save_x3f_3796_ = lean_ctor_get(v_hot_3583_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_hot_3583_);
if (v_isSharedCheck_3810_ == 0)
{
lean_object* v_unused_3811_; 
v_unused_3811_ = lean_ctor_get(v_hot_3583_, 1);
lean_dec(v_unused_3811_);
v___x_3798_ = v_hot_3583_;
v_isShared_3799_ = v_isSharedCheck_3810_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_save_x3f_3796_);
lean_dec(v_hot_3583_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3810_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
lean_inc(v___x_3795_);
lean_inc_ref(v_app_3584_);
if (v_isShared_3799_ == 0)
{
lean_ctor_set(v___x_3798_, 1, v___x_3795_);
lean_ctor_set(v___x_3798_, 0, v_app_3584_);
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_app_3584_);
lean_ctor_set(v_reuseFailAlloc_3809_, 1, v___x_3795_);
v___x_3801_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
lean_object* v___f_3802_; lean_object* v___f_3803_; 
lean_inc_ref_n(v___x_3801_, 2);
v___f_3802_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3802_, 0, v___x_3801_);
lean_inc_ref(v_app_3584_);
v___f_3803_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3803_, 0, v_app_3584_);
lean_closure_set(v___f_3803_, 1, v___x_3801_);
lean_closure_set(v___f_3803_, 2, v___x_3788_);
if (lean_obj_tag(v_save_x3f_3796_) == 1)
{
lean_object* v_val_3804_; lean_object* v___f_3805_; lean_object* v___f_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v_val_3804_ = lean_ctor_get(v_save_x3f_3796_, 0);
lean_inc(v_val_3804_);
lean_dec_ref_known(v_save_x3f_3796_, 1);
lean_inc(v___x_3795_);
v___f_3805_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3805_, 0, v___x_3795_);
v___f_3806_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3806_, 0, v_val_3804_);
v___x_3807_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3807_, 0, lean_box(0));
lean_closure_set(v___x_3807_, 1, lean_box(0));
lean_closure_set(v___x_3807_, 2, lean_box(0));
lean_closure_set(v___x_3807_, 3, v___f_3805_);
lean_closure_set(v___x_3807_, 4, v___f_3806_);
v___x_3808_ = l_Lasm_Web_App_onHotSave(v___x_3807_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_dec_ref_known(v___x_3808_, 1);
v___y_3727_ = v___f_3803_;
v___y_3728_ = v___f_3802_;
v___y_3729_ = v___x_3801_;
v___y_3730_ = v___x_3795_;
v___y_3731_ = v___x_3787_;
v___y_3732_ = v___x_3788_;
v___y_3733_ = v_snd_3785_;
v___y_3734_ = v___x_3791_;
v___y_3735_ = v___x_3792_;
goto v___jp_3726_;
}
else
{
lean_dec_ref(v___f_3803_);
lean_dec_ref(v___f_3802_);
lean_dec_ref(v___x_3801_);
lean_dec(v___x_3795_);
lean_dec(v_snd_3785_);
lean_dec_ref(v_app_3584_);
return v___x_3808_;
}
}
else
{
lean_dec(v_save_x3f_3796_);
v___y_3727_ = v___f_3803_;
v___y_3728_ = v___f_3802_;
v___y_3729_ = v___x_3801_;
v___y_3730_ = v___x_3795_;
v___y_3731_ = v___x_3787_;
v___y_3732_ = v___x_3788_;
v___y_3733_ = v_snd_3785_;
v___y_3734_ = v___x_3791_;
v___y_3735_ = v___x_3792_;
goto v___jp_3726_;
}
}
}
}
v___jp_3812_:
{
lean_object* v_init_3814_; lean_object* v___x_3815_; lean_object* v_fst_3816_; lean_object* v_snd_3817_; 
v_init_3814_ = lean_ctor_get(v_app_3584_, 0);
lean_inc_ref(v_init_3814_);
v___x_3815_ = lean_apply_2(v_init_3814_, v_a_3697_, v___y_3813_);
v_fst_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_fst_3816_);
v_snd_3817_ = lean_ctor_get(v___x_3815_, 1);
lean_inc(v_snd_3817_);
lean_dec_ref(v___x_3815_);
v_fst_3784_ = v_fst_3816_;
v_snd_3785_ = v_snd_3817_;
goto v___jp_3783_;
}
v___jp_3818_:
{
lean_object* v_load_x3f_3820_; 
v_load_x3f_3820_ = lean_ctor_get(v_hot_3583_, 1);
if (lean_obj_tag(v_load_x3f_3820_) == 0)
{
v___y_3813_ = v___y_3819_;
goto v___jp_3812_;
}
else
{
lean_object* v_val_3821_; lean_object* v___x_3822_; 
v_val_3821_ = lean_ctor_get(v_load_x3f_3820_, 0);
v___x_3822_ = l_Lasm_Web_App_Raw_hotState();
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref_known(v___x_3822_, 1);
if (lean_obj_tag(v_a_3823_) == 0)
{
v___y_3813_ = v___y_3819_;
goto v___jp_3812_;
}
else
{
lean_object* v___x_3824_; 
lean_inc(v_val_3821_);
v___x_3824_ = lean_apply_1(v_val_3821_, v_a_3823_);
if (lean_obj_tag(v___x_3824_) == 0)
{
v___y_3813_ = v___y_3819_;
goto v___jp_3812_;
}
else
{
lean_object* v_val_3825_; lean_object* v___x_3826_; 
lean_dec_ref(v___y_3819_);
lean_dec(v_a_3697_);
v_val_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_val_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v___x_3826_ = lean_box(0);
v_fst_3784_ = v_val_3825_;
v_snd_3785_ = v___x_3826_;
goto v___jp_3783_;
}
}
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
lean_dec_ref(v___y_3819_);
lean_dec(v_a_3697_);
lean_dec_ref(v_app_3584_);
lean_dec_ref(v_hot_3583_);
v_a_3827_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3822_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3822_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
v___jp_3835_:
{
lean_object* v___x_3836_; 
v___x_3836_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__8));
v___y_3819_ = v___x_3836_;
goto v___jp_3818_;
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
lean_dec(v_a_3692_);
lean_dec_ref(v_app_3584_);
lean_dec_ref(v_hot_3583_);
v_a_3841_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3696_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___x_3696_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
lean_dec_ref(v_app_3584_);
lean_dec_ref(v_hot_3583_);
lean_dec_ref(v_inst_3582_);
v_a_3849_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v___x_3691_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v___x_3691_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_a_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
v___jp_3587_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3602_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3602_, 0, v___y_3601_);
lean_inc_ref(v___y_3595_);
v___x_3603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___y_3595_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = lean_box(0);
v___x_3605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3603_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
v___x_3606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___y_3599_);
lean_ctor_set(v___x_3606_, 1, v___x_3605_);
v___x_3607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___y_3593_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___y_3596_);
lean_ctor_set(v___x_3608_, 1, v___x_3607_);
v___x_3609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3609_, 0, v___y_3590_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = l_Lasm_JS_obj(v___x_3609_);
v___x_3611_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3610_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v___x_3612_; lean_object* v_a_3613_; lean_object* v___x_3614_; 
lean_dec_ref_known(v___x_3611_, 1);
lean_inc_ref(v___y_3600_);
v___x_3612_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3600_);
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc(v_a_3613_);
lean_dec_ref(v___x_3612_);
v___x_3614_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3613_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v___x_3615_; lean_object* v_model_3616_; lean_object* v_live_3617_; lean_object* v_next_3618_; lean_object* v_tables_3619_; uint8_t v_dirty_3620_; uint8_t v_scheduled_3621_; lean_object* v_queue_3622_; lean_object* v_subs_3623_; lean_object* v_handlers_3624_; lean_object* v_nextSub_3625_; lean_object* v_touched_3626_; lean_object* v_ports_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3690_; 
lean_dec_ref_known(v___x_3614_, 1);
v___x_3615_ = lean_st_ref_take(v___y_3589_);
v_model_3616_ = lean_ctor_get(v___x_3615_, 0);
v_live_3617_ = lean_ctor_get(v___x_3615_, 1);
v_next_3618_ = lean_ctor_get(v___x_3615_, 2);
v_tables_3619_ = lean_ctor_get(v___x_3615_, 3);
v_dirty_3620_ = lean_ctor_get_uint8(v___x_3615_, sizeof(void*)*10);
v_scheduled_3621_ = lean_ctor_get_uint8(v___x_3615_, sizeof(void*)*10 + 1);
v_queue_3622_ = lean_ctor_get(v___x_3615_, 4);
v_subs_3623_ = lean_ctor_get(v___x_3615_, 5);
v_handlers_3624_ = lean_ctor_get(v___x_3615_, 6);
v_nextSub_3625_ = lean_ctor_get(v___x_3615_, 7);
v_touched_3626_ = lean_ctor_get(v___x_3615_, 8);
v_ports_3627_ = lean_ctor_get(v___x_3615_, 9);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3629_ = v___x_3615_;
v_isShared_3630_ = v_isSharedCheck_3690_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_ports_3627_);
lean_inc(v_touched_3626_);
lean_inc(v_nextSub_3625_);
lean_inc(v_handlers_3624_);
lean_inc(v_subs_3623_);
lean_inc(v_queue_3622_);
lean_inc(v_tables_3619_);
lean_inc(v_next_3618_);
lean_inc(v_live_3617_);
lean_inc(v_model_3616_);
lean_dec(v___x_3615_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3690_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_model_3616_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_live_3617_);
lean_ctor_set(v_reuseFailAlloc_3689_, 2, v_next_3618_);
lean_ctor_set(v_reuseFailAlloc_3689_, 3, v_tables_3619_);
lean_ctor_set(v_reuseFailAlloc_3689_, 4, v_queue_3622_);
lean_ctor_set(v_reuseFailAlloc_3689_, 5, v_subs_3623_);
lean_ctor_set(v_reuseFailAlloc_3689_, 6, v_handlers_3624_);
lean_ctor_set(v_reuseFailAlloc_3689_, 7, v_nextSub_3625_);
lean_ctor_set(v_reuseFailAlloc_3689_, 8, v_touched_3626_);
lean_ctor_set(v_reuseFailAlloc_3689_, 9, v_ports_3627_);
lean_ctor_set_uint8(v_reuseFailAlloc_3689_, sizeof(void*)*10, v_dirty_3620_);
lean_ctor_set_uint8(v_reuseFailAlloc_3689_, sizeof(void*)*10 + 1, v_scheduled_3621_);
v___x_3632_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___f_3635_; lean_object* v___x_4994__overap_3636_; lean_object* v___x_3637_; 
lean_ctor_set_uint8(v___x_3632_, sizeof(void*)*10 + 2, v___y_3597_);
v___x_3633_ = lean_st_ref_put(v___y_3589_, v___x_3632_);
v___x_3634_ = lean_box(0);
v___f_3635_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3635_, 0, v___x_3634_);
lean_closure_set(v___f_3635_, 1, v___y_3588_);
v___x_4994__overap_3636_ = l_List_forIn_x27_loop___redArg(v___x_3586_, v___f_3635_, v___y_3592_, v___x_3634_);
lean_dec(v___y_3592_);
v___x_3637_ = lean_apply_1(v___x_4994__overap_3636_, lean_box(0));
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v___x_3638_; lean_object* v_model_3639_; lean_object* v_live_3640_; lean_object* v_next_3641_; lean_object* v_tables_3642_; uint8_t v_dirty_3643_; uint8_t v_scheduled_3644_; lean_object* v_queue_3645_; lean_object* v_subs_3646_; lean_object* v_handlers_3647_; lean_object* v_nextSub_3648_; lean_object* v_touched_3649_; lean_object* v_ports_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3688_; 
lean_dec_ref_known(v___x_3637_, 1);
v___x_3638_ = lean_st_ref_take(v___y_3589_);
v_model_3639_ = lean_ctor_get(v___x_3638_, 0);
v_live_3640_ = lean_ctor_get(v___x_3638_, 1);
v_next_3641_ = lean_ctor_get(v___x_3638_, 2);
v_tables_3642_ = lean_ctor_get(v___x_3638_, 3);
v_dirty_3643_ = lean_ctor_get_uint8(v___x_3638_, sizeof(void*)*10);
v_scheduled_3644_ = lean_ctor_get_uint8(v___x_3638_, sizeof(void*)*10 + 1);
v_queue_3645_ = lean_ctor_get(v___x_3638_, 4);
v_subs_3646_ = lean_ctor_get(v___x_3638_, 5);
v_handlers_3647_ = lean_ctor_get(v___x_3638_, 6);
v_nextSub_3648_ = lean_ctor_get(v___x_3638_, 7);
v_touched_3649_ = lean_ctor_get(v___x_3638_, 8);
v_ports_3650_ = lean_ctor_get(v___x_3638_, 9);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3652_ = v___x_3638_;
v_isShared_3653_ = v_isSharedCheck_3688_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_ports_3650_);
lean_inc(v_touched_3649_);
lean_inc(v_nextSub_3648_);
lean_inc(v_handlers_3647_);
lean_inc(v_subs_3646_);
lean_inc(v_queue_3645_);
lean_inc(v_tables_3642_);
lean_inc(v_next_3641_);
lean_inc(v_live_3640_);
lean_inc(v_model_3639_);
lean_dec(v___x_3638_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3688_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_model_3639_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v_live_3640_);
lean_ctor_set(v_reuseFailAlloc_3687_, 2, v_next_3641_);
lean_ctor_set(v_reuseFailAlloc_3687_, 3, v_tables_3642_);
lean_ctor_set(v_reuseFailAlloc_3687_, 4, v_queue_3645_);
lean_ctor_set(v_reuseFailAlloc_3687_, 5, v_subs_3646_);
lean_ctor_set(v_reuseFailAlloc_3687_, 6, v_handlers_3647_);
lean_ctor_set(v_reuseFailAlloc_3687_, 7, v_nextSub_3648_);
lean_ctor_set(v_reuseFailAlloc_3687_, 8, v_touched_3649_);
lean_ctor_set(v_reuseFailAlloc_3687_, 9, v_ports_3650_);
lean_ctor_set_uint8(v_reuseFailAlloc_3687_, sizeof(void*)*10, v_dirty_3643_);
lean_ctor_set_uint8(v_reuseFailAlloc_3687_, sizeof(void*)*10 + 1, v_scheduled_3644_);
v___x_3655_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v_model_3658_; lean_object* v_live_3659_; lean_object* v_next_3660_; lean_object* v_tables_3661_; uint8_t v_dirty_3662_; uint8_t v_scheduled_3663_; lean_object* v_queue_3664_; uint8_t v_busy_3665_; lean_object* v_subs_3666_; lean_object* v_handlers_3667_; lean_object* v_nextSub_3668_; lean_object* v_touched_3669_; lean_object* v_ports_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3686_; 
lean_ctor_set_uint8(v___x_3655_, sizeof(void*)*10 + 2, v___y_3598_);
v___x_3656_ = lean_st_ref_put(v___y_3589_, v___x_3655_);
v___x_3657_ = lean_st_ref_get(v___y_3589_);
v_model_3658_ = lean_ctor_get(v___x_3657_, 0);
v_live_3659_ = lean_ctor_get(v___x_3657_, 1);
v_next_3660_ = lean_ctor_get(v___x_3657_, 2);
v_tables_3661_ = lean_ctor_get(v___x_3657_, 3);
v_dirty_3662_ = lean_ctor_get_uint8(v___x_3657_, sizeof(void*)*10);
v_scheduled_3663_ = lean_ctor_get_uint8(v___x_3657_, sizeof(void*)*10 + 1);
v_queue_3664_ = lean_ctor_get(v___x_3657_, 4);
v_busy_3665_ = lean_ctor_get_uint8(v___x_3657_, sizeof(void*)*10 + 2);
v_subs_3666_ = lean_ctor_get(v___x_3657_, 5);
v_handlers_3667_ = lean_ctor_get(v___x_3657_, 6);
v_nextSub_3668_ = lean_ctor_get(v___x_3657_, 7);
v_touched_3669_ = lean_ctor_get(v___x_3657_, 8);
v_ports_3670_ = lean_ctor_get(v___x_3657_, 9);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3672_ = v___x_3657_;
v_isShared_3673_ = v_isSharedCheck_3686_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_ports_3670_);
lean_inc(v_touched_3669_);
lean_inc(v_nextSub_3668_);
lean_inc(v_handlers_3667_);
lean_inc(v_subs_3666_);
lean_inc(v_queue_3664_);
lean_inc(v_tables_3661_);
lean_inc(v_next_3660_);
lean_inc(v_live_3659_);
lean_inc(v_model_3658_);
lean_dec(v___x_3657_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3686_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3674_; uint8_t v___x_3675_; 
v___x_3674_ = lean_array_get_size(v_queue_3664_);
v___x_3675_ = lean_nat_dec_lt(v___y_3591_, v___x_3674_);
if (v___x_3675_ == 0)
{
lean_object* v___x_3676_; 
lean_del_object(v___x_3672_);
lean_dec(v_ports_3670_);
lean_dec_ref(v_touched_3669_);
lean_dec(v_nextSub_3668_);
lean_dec_ref(v_handlers_3667_);
lean_dec_ref(v_subs_3666_);
lean_dec_ref(v_queue_3664_);
lean_dec_ref(v_tables_3661_);
lean_dec(v_next_3660_);
lean_dec(v_live_3659_);
lean_dec(v_model_3658_);
lean_dec(v___y_3594_);
lean_dec(v___y_3591_);
lean_dec(v___y_3589_);
lean_inc_ref(v___y_3600_);
v___x_3676_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3600_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v___x_3677_; 
lean_dec_ref_known(v___x_3676_, 1);
v___x_3677_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3600_);
lean_dec_ref(v___y_3600_);
return v___x_3677_;
}
else
{
lean_dec_ref(v___y_3600_);
return v___x_3676_;
}
}
else
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3681_; 
v___x_3678_ = lean_array_fget(v_queue_3664_, v___y_3591_);
lean_dec(v___y_3591_);
v___x_3679_ = l_Array_extract___redArg(v_queue_3664_, v___y_3594_, v___x_3674_);
lean_dec_ref(v_queue_3664_);
if (v_isShared_3673_ == 0)
{
lean_ctor_set(v___x_3672_, 4, v___x_3679_);
v___x_3681_ = v___x_3672_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_model_3658_);
lean_ctor_set(v_reuseFailAlloc_3685_, 1, v_live_3659_);
lean_ctor_set(v_reuseFailAlloc_3685_, 2, v_next_3660_);
lean_ctor_set(v_reuseFailAlloc_3685_, 3, v_tables_3661_);
lean_ctor_set(v_reuseFailAlloc_3685_, 4, v___x_3679_);
lean_ctor_set(v_reuseFailAlloc_3685_, 5, v_subs_3666_);
lean_ctor_set(v_reuseFailAlloc_3685_, 6, v_handlers_3667_);
lean_ctor_set(v_reuseFailAlloc_3685_, 7, v_nextSub_3668_);
lean_ctor_set(v_reuseFailAlloc_3685_, 8, v_touched_3669_);
lean_ctor_set(v_reuseFailAlloc_3685_, 9, v_ports_3670_);
lean_ctor_set_uint8(v_reuseFailAlloc_3685_, sizeof(void*)*10, v_dirty_3662_);
lean_ctor_set_uint8(v_reuseFailAlloc_3685_, sizeof(void*)*10 + 1, v_scheduled_3663_);
lean_ctor_set_uint8(v_reuseFailAlloc_3685_, sizeof(void*)*10 + 2, v_busy_3665_);
v___x_3681_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = lean_st_ref_swap(v___y_3589_, v___x_3681_);
lean_dec(v___y_3589_);
lean_dec(v___x_3682_);
lean_inc_ref(v___y_3600_);
v___x_3683_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3600_, v___x_3678_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v___x_3684_; 
lean_dec_ref_known(v___x_3683_, 1);
v___x_3684_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3600_);
lean_dec_ref(v___y_3600_);
return v___x_3684_;
}
else
{
lean_dec_ref(v___y_3600_);
return v___x_3683_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_3600_);
lean_dec(v___y_3594_);
lean_dec(v___y_3591_);
lean_dec(v___y_3589_);
return v___x_3637_;
}
}
}
}
else
{
lean_dec_ref(v___y_3600_);
lean_dec(v___y_3594_);
lean_dec(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
return v___x_3614_;
}
}
else
{
lean_dec_ref(v___y_3600_);
lean_dec(v___y_3594_);
lean_dec(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
return v___x_3611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3857_, lean_object* v_hot_3858_, lean_object* v_app_3859_, lean_object* v_a_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_Lasm_UI_App_run___redArg(v_inst_3857_, v_hot_3858_, v_app_3859_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3862_, lean_object* v_Model_3863_, lean_object* v_Msg_3864_, lean_object* v_inst_3865_, lean_object* v_hot_3866_, lean_object* v_app_3867_){
_start:
{
lean_object* v___x_3869_; 
v___x_3869_ = l_Lasm_UI_App_run___redArg(v_inst_3865_, v_hot_3866_, v_app_3867_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3870_, lean_object* v_Model_3871_, lean_object* v_Msg_3872_, lean_object* v_inst_3873_, lean_object* v_hot_3874_, lean_object* v_app_3875_, lean_object* v_a_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lasm_UI_App_run(v_Flags_3870_, v_Model_3871_, v_Msg_3872_, v_inst_3873_, v_hot_3874_, v_app_3875_);
return v_res_3877_;
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
