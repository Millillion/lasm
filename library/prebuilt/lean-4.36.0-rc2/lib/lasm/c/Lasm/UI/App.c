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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_UI_Mount_Raw_port(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Mount_Port_subscribe(lean_object*, lean_object*);
lean_object* l_Lasm_UI_lastVal___redArg(lean_object*, lean_object*);
uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
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
static const lean_string_object l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "malformed response"};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object*, lean_object*, lean_object*);
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
v___x_250_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_234_, v___x_248_, v___x_249_);
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
v___x_338_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_337_);
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
v___x_410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_403_, v___x_408_, v___x_409_);
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
v___x_430_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_424_, v___x_428_, v___x_429_);
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
v___x_453_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_448_, v___x_451_, v___x_452_);
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
v___x_476_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_467_, v___x_474_, v___x_475_);
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
v___x_498_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_491_, v___x_496_, v___x_497_);
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
v___x_560_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_559_);
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
v___x_640_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_633_, v___x_638_, v___x_639_);
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
v___x_659_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_654_, v___x_657_, v___x_658_);
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
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__11(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_949_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__10));
v___x_950_ = lean_unsigned_to_nat(2u);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_950_);
v___x_952_ = lean_array_push(v___x_951_, v___x_949_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_953_){
_start:
{
switch(lean_obj_tag(v_x_953_))
{
case 0:
{
lean_object* v_ms_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_972_; 
v_ms_954_ = lean_ctor_get(v_x_953_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v_x_953_);
if (v_isSharedCheck_972_ == 0)
{
v___x_956_ = v_x_953_;
v_isShared_957_ = v_isSharedCheck_972_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_ms_954_);
lean_dec(v_x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_972_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___y_959_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_965_ = lean_nat_to_int(v_ms_954_);
v___x_966_ = lean_nat_abs(v___x_965_);
v___x_967_ = lean_cstr_to_nat("9007199254740991");
v___x_968_ = lean_nat_dec_le(v___x_966_, v___x_967_);
lean_dec(v___x_966_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_965_);
v___y_959_ = v___x_969_;
goto v___jp_958_;
}
else
{
double v___x_970_; lean_object* v___x_971_; 
v___x_970_ = l_Float_ofInt(v___x_965_);
lean_dec(v___x_965_);
v___x_971_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_971_, 0, v___x_970_);
v___y_959_ = v___x_971_;
goto v___jp_958_;
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_960_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_961_ = lean_array_push(v___x_960_, v___y_959_);
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 7);
lean_ctor_set(v___x_956_, 0, v___x_961_);
v___x_963_ = v___x_956_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
case 1:
{
lean_object* v___x_973_; 
v___x_973_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_973_;
}
case 2:
{
uint8_t v_target_974_; lean_object* v_event_975_; lean_object* v_paths_976_; lean_object* v___y_978_; 
v_target_974_ = lean_ctor_get_uint8(v_x_953_, sizeof(void*)*2);
v_event_975_ = lean_ctor_get(v_x_953_, 0);
lean_inc_ref(v_event_975_);
v_paths_976_ = lean_ctor_get(v_x_953_, 1);
lean_inc(v_paths_976_);
lean_dec_ref_known(v_x_953_, 2);
if (v_target_974_ == 0)
{
lean_object* v___x_994_; 
v___x_994_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__7));
v___y_978_ = v___x_994_;
goto v___jp_977_;
}
else
{
lean_object* v___x_995_; 
v___x_995_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___y_978_ = v___x_995_;
goto v___jp_977_;
}
v___jp_977_:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; size_t v_sz_984_; size_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
lean_inc_ref(v___y_978_);
v___x_979_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_979_, 0, v___y_978_);
v___x_980_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_980_, 0, v_event_975_);
v___x_981_ = lean_box(0);
v___x_982_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_976_, v___x_981_);
v___x_983_ = lean_array_mk(v___x_982_);
v_sz_984_ = lean_array_size(v___x_983_);
v___x_985_ = ((size_t)0ULL);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_984_, v___x_985_, v___x_983_);
v___x_987_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
v___x_988_ = lean_unsigned_to_nat(3u);
v___x_989_ = lean_mk_empty_array_with_capacity(v___x_988_);
v___x_990_ = lean_array_push(v___x_989_, v___x_979_);
v___x_991_ = lean_array_push(v___x_990_, v___x_980_);
v___x_992_ = lean_array_push(v___x_991_, v___x_987_);
v___x_993_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
return v___x_993_;
}
}
default: 
{
lean_object* v_name_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1006_; 
v_name_996_ = lean_ctor_get(v_x_953_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_x_953_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_998_ = v_x_953_;
v_isShared_999_ = v_isSharedCheck_1006_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_name_996_);
lean_dec(v_x_953_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1006_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
lean_ctor_set_tag(v___x_998_, 4);
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_name_996_);
v___x_1001_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1002_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__11, &l_Lasm_UI_Runtime_specData___closed__11_once, _init_l_Lasm_UI_Runtime_specData___closed__11);
v___x_1003_ = lean_array_push(v___x_1002_, v___x_1001_);
v___x_1004_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add___redArg(lean_object* v_d_1007_, lean_object* v_x_1008_){
_start:
{
if (lean_obj_tag(v_x_1008_) == 0)
{
return v_d_1007_;
}
else
{
lean_object* v_val_1009_; lean_object* v_msgs_1010_; uint8_t v_preventDefault_1011_; uint8_t v_stopPropagation_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1028_; 
v_val_1009_ = lean_ctor_get(v_x_1008_, 0);
lean_inc(v_val_1009_);
lean_dec_ref_known(v_x_1008_, 1);
v_msgs_1010_ = lean_ctor_get(v_d_1007_, 0);
v_preventDefault_1011_ = lean_ctor_get_uint8(v_d_1007_, sizeof(void*)*1);
v_stopPropagation_1012_ = lean_ctor_get_uint8(v_d_1007_, sizeof(void*)*1 + 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_d_1007_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1014_ = v_d_1007_;
v_isShared_1015_ = v_isSharedCheck_1028_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_msgs_1010_);
lean_dec(v_d_1007_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1028_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_message_1016_; uint8_t v_preventDefault_1017_; uint8_t v_stopPropagation_1018_; lean_object* v___x_1019_; uint8_t v___y_1021_; 
v_message_1016_ = lean_ctor_get(v_val_1009_, 0);
lean_inc(v_message_1016_);
v_preventDefault_1017_ = lean_ctor_get_uint8(v_val_1009_, sizeof(void*)*1);
v_stopPropagation_1018_ = lean_ctor_get_uint8(v_val_1009_, sizeof(void*)*1 + 1);
lean_dec(v_val_1009_);
v___x_1019_ = lean_array_push(v_msgs_1010_, v_message_1016_);
if (v_preventDefault_1011_ == 0)
{
v___y_1021_ = v_preventDefault_1017_;
goto v___jp_1020_;
}
else
{
v___y_1021_ = v_preventDefault_1011_;
goto v___jp_1020_;
}
v___jp_1020_:
{
if (v_stopPropagation_1012_ == 0)
{
lean_object* v___x_1023_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 0, v___x_1019_);
v___x_1023_ = v___x_1014_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1019_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*1, v___y_1021_);
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*1 + 1, v_stopPropagation_1018_);
return v___x_1023_;
}
}
else
{
lean_object* v___x_1026_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 0, v___x_1019_);
v___x_1026_ = v___x_1014_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1019_);
lean_ctor_set_uint8(v_reuseFailAlloc_1027_, sizeof(void*)*1 + 1, v_stopPropagation_1012_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_ctor_set_uint8(v___x_1026_, sizeof(void*)*1, v___y_1021_);
return v___x_1026_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_Decision_add(lean_object* v_Msg_1029_, lean_object* v_d_1030_, lean_object* v_x_1031_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_d_1030_, v_x_1031_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(lean_object* v_snd_1033_, lean_object* v_x_1034_, lean_object* v_x_1035_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 0)
{
lean_dec(v_snd_1033_);
return v_x_1034_;
}
else
{
lean_object* v_head_1036_; lean_object* v_tail_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_head_1036_ = lean_ctor_get(v_x_1035_, 0);
lean_inc(v_head_1036_);
v_tail_1037_ = lean_ctor_get(v_x_1035_, 1);
lean_inc(v_tail_1037_);
lean_dec_ref_known(v_x_1035_, 2);
lean_inc(v_snd_1033_);
v___x_1038_ = lean_apply_1(v_head_1036_, v_snd_1033_);
v___x_1039_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_1034_, v___x_1038_);
v_x_1034_ = v___x_1039_;
v_x_1035_ = v_tail_1037_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide___redArg(lean_object* v_type_1041_, lean_object* v_x_1042_, lean_object* v_x_1043_){
_start:
{
if (lean_obj_tag(v_x_1042_) == 0)
{
lean_dec_ref(v_type_1041_);
return v_x_1043_;
}
else
{
lean_object* v_head_1044_; lean_object* v_tail_1045_; lean_object* v_fst_1046_; lean_object* v_snd_1047_; lean_object* v___x_1048_; lean_object* v_d_1049_; uint8_t v_stopPropagation_1050_; 
v_head_1044_ = lean_ctor_get(v_x_1042_, 0);
lean_inc(v_head_1044_);
v_tail_1045_ = lean_ctor_get(v_x_1042_, 1);
lean_inc(v_tail_1045_);
lean_dec_ref_known(v_x_1042_, 2);
v_fst_1046_ = lean_ctor_get(v_head_1044_, 0);
lean_inc(v_fst_1046_);
v_snd_1047_ = lean_ctor_get(v_head_1044_, 1);
lean_inc(v_snd_1047_);
lean_dec(v_head_1044_);
lean_inc_ref(v_type_1041_);
v___x_1048_ = l_Lasm_UI_Runtime_handlersFor___redArg(v_type_1041_, v_fst_1046_);
v_d_1049_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_1047_, v_x_1043_, v___x_1048_);
v_stopPropagation_1050_ = lean_ctor_get_uint8(v_d_1049_, sizeof(void*)*1 + 1);
if (v_stopPropagation_1050_ == 0)
{
v_x_1042_ = v_tail_1045_;
v_x_1043_ = v_d_1049_;
goto _start;
}
else
{
lean_dec(v_tail_1045_);
lean_dec_ref(v_type_1041_);
return v_d_1049_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_decide(lean_object* v_Msg_1052_, lean_object* v_type_1053_, lean_object* v_x_1054_, lean_object* v_x_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lasm_UI_Runtime_decide___redArg(v_type_1053_, v_x_1054_, v_x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0(lean_object* v_Msg_1057_, lean_object* v_snd_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_List_foldl___at___00Lasm_UI_Runtime_decide_spec__0___redArg(v_snd_1058_, v_x_1059_, v_x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer(uint8_t v_frame_1062_, uint8_t v_preventDefault_1063_, uint8_t v_stopPropagation_1064_){
_start:
{
lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1083_; 
if (v_frame_1062_ == 0)
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_unsigned_to_nat(0u);
v___y_1083_ = v___x_1086_;
goto v___jp_1082_;
}
else
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_unsigned_to_nat(1u);
v___y_1083_ = v___x_1087_;
goto v___jp_1082_;
}
v___jp_1065_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1068_ = lean_nat_add(v___y_1066_, v___y_1067_);
lean_dec(v___y_1066_);
v___x_1069_ = lean_nat_to_int(v___x_1068_);
v___x_1070_ = lean_nat_abs(v___x_1069_);
v___x_1071_ = lean_cstr_to_nat("9007199254740991");
v___x_1072_ = lean_nat_dec_le(v___x_1070_, v___x_1071_);
lean_dec(v___x_1070_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1069_);
return v___x_1073_;
}
else
{
double v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = l_Float_ofInt(v___x_1069_);
lean_dec(v___x_1069_);
v___x_1075_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
}
v___jp_1076_:
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_nat_add(v___y_1077_, v___y_1078_);
if (v_stopPropagation_1064_ == 0)
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_unsigned_to_nat(0u);
v___y_1066_ = v___x_1079_;
v___y_1067_ = v___x_1080_;
goto v___jp_1065_;
}
else
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_unsigned_to_nat(4u);
v___y_1066_ = v___x_1079_;
v___y_1067_ = v___x_1081_;
goto v___jp_1065_;
}
}
v___jp_1082_:
{
if (v_preventDefault_1063_ == 0)
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___y_1077_ = v___y_1083_;
v___y_1078_ = v___x_1084_;
goto v___jp_1076_;
}
else
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_unsigned_to_nat(2u);
v___y_1077_ = v___y_1083_;
v___y_1078_ = v___x_1085_;
goto v___jp_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_answer___boxed(lean_object* v_frame_1088_, lean_object* v_preventDefault_1089_, lean_object* v_stopPropagation_1090_){
_start:
{
uint8_t v_frame_boxed_1091_; uint8_t v_preventDefault_boxed_1092_; uint8_t v_stopPropagation_boxed_1093_; lean_object* v_res_1094_; 
v_frame_boxed_1091_ = lean_unbox(v_frame_1088_);
v_preventDefault_boxed_1092_ = lean_unbox(v_preventDefault_1089_);
v_stopPropagation_boxed_1093_ = lean_unbox(v_stopPropagation_1090_);
v_res_1094_ = l_Lasm_UI_Runtime_answer(v_frame_boxed_1091_, v_preventDefault_boxed_1092_, v_stopPropagation_boxed_1093_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_1097_){
_start:
{
if (v_x_1097_ == 0)
{
lean_object* v___x_1098_; 
v___x_1098_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_1098_;
}
else
{
lean_object* v___x_1099_; 
v___x_1099_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_1100_){
_start:
{
uint8_t v_x_22__boxed_1101_; lean_object* v_res_1102_; 
v_x_22__boxed_1101_ = lean_unbox(v_x_1100_);
v_res_1102_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_1101_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_1103_, lean_object* v_e_1104_){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_1107_ = lean_string_append(v_what_1103_, v___x_1106_);
v___x_1108_ = lean_io_error_to_string(v_e_1104_);
v___x_1109_ = lean_string_append(v___x_1107_, v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1110_ = lean_box(0);
v___x_1111_ = l_Lasm_UI_Runtime_Dom_error(v___x_1109_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; 
v_unused_1119_ = lean_ctor_get(v___x_1111_, 0);
lean_dec(v_unused_1119_);
v___x_1113_ = v___x_1111_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_dec(v___x_1111_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v___x_1110_);
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1110_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1126_ == 0)
{
lean_object* v_unused_1127_; 
v_unused_1127_ = lean_ctor_get(v___x_1111_, 0);
lean_dec(v_unused_1127_);
v___x_1121_ = v___x_1111_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_dec(v___x_1111_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
lean_ctor_set_tag(v___x_1121_, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1110_);
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1110_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_1128_, lean_object* v_e_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lasm_UI_Runtime_report(v_what_1128_, v_e_1129_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_1132_){
_start:
{
lean_object* v_ref_1134_; lean_object* v___x_1135_; uint8_t v_dirty_1136_; 
v_ref_1134_ = lean_ctor_get(v_c_1132_, 1);
v___x_1135_ = lean_st_ref_get(v_ref_1134_);
v_dirty_1136_ = lean_ctor_get_uint8(v___x_1135_, sizeof(void*)*10);
if (v_dirty_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec(v___x_1135_);
v___x_1137_ = lean_box(v_dirty_1136_);
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
else
{
uint8_t v_scheduled_1139_; 
v_scheduled_1139_ = lean_ctor_get_uint8(v___x_1135_, sizeof(void*)*10 + 1);
if (v_scheduled_1139_ == 0)
{
lean_object* v_model_1140_; lean_object* v_live_1141_; lean_object* v_next_1142_; lean_object* v_tables_1143_; lean_object* v_queue_1144_; uint8_t v_busy_1145_; lean_object* v_subs_1146_; lean_object* v_handlers_1147_; lean_object* v_nextSub_1148_; lean_object* v_touched_1149_; lean_object* v_ports_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1160_; 
v_model_1140_ = lean_ctor_get(v___x_1135_, 0);
v_live_1141_ = lean_ctor_get(v___x_1135_, 1);
v_next_1142_ = lean_ctor_get(v___x_1135_, 2);
v_tables_1143_ = lean_ctor_get(v___x_1135_, 3);
v_queue_1144_ = lean_ctor_get(v___x_1135_, 4);
v_busy_1145_ = lean_ctor_get_uint8(v___x_1135_, sizeof(void*)*10 + 2);
v_subs_1146_ = lean_ctor_get(v___x_1135_, 5);
v_handlers_1147_ = lean_ctor_get(v___x_1135_, 6);
v_nextSub_1148_ = lean_ctor_get(v___x_1135_, 7);
v_touched_1149_ = lean_ctor_get(v___x_1135_, 8);
v_ports_1150_ = lean_ctor_get(v___x_1135_, 9);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1152_ = v___x_1135_;
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_ports_1150_);
lean_inc(v_touched_1149_);
lean_inc(v_nextSub_1148_);
lean_inc(v_handlers_1147_);
lean_inc(v_subs_1146_);
lean_inc(v_queue_1144_);
lean_inc(v_tables_1143_);
lean_inc(v_next_1142_);
lean_inc(v_live_1141_);
lean_inc(v_model_1140_);
lean_dec(v___x_1135_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_model_1140_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_live_1141_);
lean_ctor_set(v_reuseFailAlloc_1159_, 2, v_next_1142_);
lean_ctor_set(v_reuseFailAlloc_1159_, 3, v_tables_1143_);
lean_ctor_set(v_reuseFailAlloc_1159_, 4, v_queue_1144_);
lean_ctor_set(v_reuseFailAlloc_1159_, 5, v_subs_1146_);
lean_ctor_set(v_reuseFailAlloc_1159_, 6, v_handlers_1147_);
lean_ctor_set(v_reuseFailAlloc_1159_, 7, v_nextSub_1148_);
lean_ctor_set(v_reuseFailAlloc_1159_, 8, v_touched_1149_);
lean_ctor_set(v_reuseFailAlloc_1159_, 9, v_ports_1150_);
lean_ctor_set_uint8(v_reuseFailAlloc_1159_, sizeof(void*)*10, v_dirty_1136_);
lean_ctor_set_uint8(v_reuseFailAlloc_1159_, sizeof(void*)*10 + 2, v_busy_1145_);
v___x_1155_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*10 + 1, v_dirty_1136_);
v___x_1156_ = lean_st_ref_swap(v_ref_1134_, v___x_1155_);
lean_dec(v___x_1156_);
v___x_1157_ = lean_box(v_dirty_1136_);
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
else
{
uint8_t v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
lean_dec(v___x_1135_);
v___x_1161_ = 0;
v___x_1162_ = lean_box(v___x_1161_);
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
return v___x_1163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1164_);
lean_dec_ref(v_c_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_1167_, lean_object* v_Model_1168_, lean_object* v_Msg_1169_, lean_object* v_c_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1173_, lean_object* v_Model_1174_, lean_object* v_Msg_1175_, lean_object* v_c_1176_, lean_object* v_a_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1173_, v_Model_1174_, v_Msg_1175_, v_c_1176_);
lean_dec_ref(v_c_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1192_; 
v___x_1181_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1179_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1192_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1192_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
uint8_t v___x_1186_; 
v___x_1186_ = lean_unbox(v_a_1182_);
lean_dec(v_a_1182_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1187_ = lean_box(0);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1187_);
v___x_1189_ = v___x_1184_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
else
{
lean_object* v___x_1191_; 
lean_del_object(v___x_1184_);
v___x_1191_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1193_);
lean_dec_ref(v_c_1193_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1196_, lean_object* v_Model_1197_, lean_object* v_Msg_1198_, lean_object* v_c_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1202_, lean_object* v_Model_1203_, lean_object* v_Msg_1204_, lean_object* v_c_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1202_, v_Model_1203_, v_Msg_1204_, v_c_1205_);
lean_dec_ref(v_c_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1208_, lean_object* v_b_1209_, lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 0)
{
lean_dec(v_b_1209_);
lean_dec(v_a_1208_);
return v_x_1210_;
}
else
{
lean_object* v_key_1211_; lean_object* v_value_1212_; lean_object* v_tail_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1225_; 
v_key_1211_ = lean_ctor_get(v_x_1210_, 0);
v_value_1212_ = lean_ctor_get(v_x_1210_, 1);
v_tail_1213_ = lean_ctor_get(v_x_1210_, 2);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_x_1210_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1215_ = v_x_1210_;
v_isShared_1216_ = v_isSharedCheck_1225_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_tail_1213_);
lean_inc(v_value_1212_);
lean_inc(v_key_1211_);
lean_dec(v_x_1210_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1225_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
uint8_t v___x_1217_; 
lean_inc(v_a_1208_);
lean_inc(v_key_1211_);
v___x_1217_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1211_, v_a_1208_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1218_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1208_, v_b_1209_, v_tail_1213_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 2, v___x_1218_);
v___x_1220_ = v___x_1215_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_key_1211_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_value_1212_);
lean_ctor_set(v_reuseFailAlloc_1221_, 2, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_object* v___x_1223_; 
lean_dec(v_value_1212_);
lean_dec(v_key_1211_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 1, v_b_1209_);
lean_ctor_set(v___x_1215_, 0, v_a_1208_);
v___x_1223_ = v___x_1215_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1208_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_b_1209_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_tail_1213_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
uint8_t v___x_1228_; 
lean_dec(v_a_1226_);
v___x_1228_ = 0;
return v___x_1228_;
}
else
{
lean_object* v_key_1229_; lean_object* v_tail_1230_; uint8_t v___x_1231_; 
v_key_1229_ = lean_ctor_get(v_x_1227_, 0);
lean_inc(v_key_1229_);
v_tail_1230_ = lean_ctor_get(v_x_1227_, 2);
lean_inc(v_tail_1230_);
lean_dec_ref_known(v_x_1227_, 3);
lean_inc(v_a_1226_);
v___x_1231_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1229_, v_a_1226_);
if (v___x_1231_ == 0)
{
v_x_1227_ = v_tail_1230_;
goto _start;
}
else
{
lean_dec(v_tail_1230_);
lean_dec(v_a_1226_);
return v___x_1231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1233_, lean_object* v_x_1234_){
_start:
{
uint8_t v_res_1235_; lean_object* v_r_1236_; 
v_res_1235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1233_, v_x_1234_);
v_r_1236_ = lean_box(v_res_1235_);
return v_r_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1237_, lean_object* v_x_1238_){
_start:
{
if (lean_obj_tag(v_x_1238_) == 0)
{
return v_x_1237_;
}
else
{
lean_object* v_key_1239_; lean_object* v_value_1240_; lean_object* v_tail_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1264_; 
v_key_1239_ = lean_ctor_get(v_x_1238_, 0);
v_value_1240_ = lean_ctor_get(v_x_1238_, 1);
v_tail_1241_ = lean_ctor_get(v_x_1238_, 2);
v_isSharedCheck_1264_ = !lean_is_exclusive(v_x_1238_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1243_ = v_x_1238_;
v_isShared_1244_ = v_isSharedCheck_1264_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_tail_1241_);
lean_inc(v_value_1240_);
lean_inc(v_key_1239_);
lean_dec(v_x_1238_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1264_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; uint64_t v___x_1246_; uint64_t v___x_1247_; uint64_t v___x_1248_; uint64_t v_fold_1249_; uint64_t v___x_1250_; uint64_t v___x_1251_; uint64_t v___x_1252_; size_t v___x_1253_; size_t v___x_1254_; size_t v___x_1255_; size_t v___x_1256_; size_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1245_ = lean_array_get_size(v_x_1237_);
v___x_1246_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1239_);
v___x_1247_ = 32ULL;
v___x_1248_ = lean_uint64_shift_right(v___x_1246_, v___x_1247_);
v_fold_1249_ = lean_uint64_xor(v___x_1246_, v___x_1248_);
v___x_1250_ = 16ULL;
v___x_1251_ = lean_uint64_shift_right(v_fold_1249_, v___x_1250_);
v___x_1252_ = lean_uint64_xor(v_fold_1249_, v___x_1251_);
v___x_1253_ = lean_uint64_to_usize(v___x_1252_);
v___x_1254_ = lean_usize_of_nat(v___x_1245_);
v___x_1255_ = ((size_t)1ULL);
v___x_1256_ = lean_usize_sub(v___x_1254_, v___x_1255_);
v___x_1257_ = lean_usize_land(v___x_1253_, v___x_1256_);
v___x_1258_ = lean_array_uget_borrowed(v_x_1237_, v___x_1257_);
lean_inc(v___x_1258_);
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 2, v___x_1258_);
v___x_1260_ = v___x_1243_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_key_1239_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_value_1240_);
lean_ctor_set(v_reuseFailAlloc_1263_, 2, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_array_uset(v_x_1237_, v___x_1257_, v___x_1260_);
v_x_1237_ = v___x_1261_;
v_x_1238_ = v_tail_1241_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1265_, lean_object* v_source_1266_, lean_object* v_target_1267_){
_start:
{
lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = lean_array_get_size(v_source_1266_);
v___x_1269_ = lean_nat_dec_lt(v_i_1265_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_dec_ref(v_source_1266_);
lean_dec(v_i_1265_);
return v_target_1267_;
}
else
{
lean_object* v_es_1270_; lean_object* v___x_1271_; lean_object* v_source_1272_; lean_object* v_target_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v_es_1270_ = lean_array_fget(v_source_1266_, v_i_1265_);
v___x_1271_ = lean_box(0);
v_source_1272_ = lean_array_fset(v_source_1266_, v_i_1265_, v___x_1271_);
v_target_1273_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1267_, v_es_1270_);
v___x_1274_ = lean_unsigned_to_nat(1u);
v___x_1275_ = lean_nat_add(v_i_1265_, v___x_1274_);
lean_dec(v_i_1265_);
v_i_1265_ = v___x_1275_;
v_source_1266_ = v_source_1272_;
v_target_1267_ = v_target_1273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1277_){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v_nbuckets_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1278_ = lean_array_get_size(v_data_1277_);
v___x_1279_ = lean_unsigned_to_nat(2u);
v_nbuckets_1280_ = lean_nat_mul(v___x_1278_, v___x_1279_);
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_box(0);
v___x_1283_ = lean_mk_array(v_nbuckets_1280_, v___x_1282_);
v___x_1284_ = lean_array_propagate_mark(v_data_1277_, v___x_1283_);
v___x_1285_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1281_, v_data_1277_, v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1286_, lean_object* v_a_1287_, lean_object* v_b_1288_){
_start:
{
lean_object* v_size_1289_; lean_object* v_buckets_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1333_; 
v_size_1289_ = lean_ctor_get(v_m_1286_, 0);
v_buckets_1290_ = lean_ctor_get(v_m_1286_, 1);
v_isSharedCheck_1333_ = !lean_is_exclusive(v_m_1286_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1292_ = v_m_1286_;
v_isShared_1293_ = v_isSharedCheck_1333_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_buckets_1290_);
lean_inc(v_size_1289_);
lean_dec(v_m_1286_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1333_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; uint64_t v___x_1295_; uint64_t v___x_1296_; uint64_t v___x_1297_; uint64_t v_fold_1298_; uint64_t v___x_1299_; uint64_t v___x_1300_; uint64_t v___x_1301_; size_t v___x_1302_; size_t v___x_1303_; size_t v___x_1304_; size_t v___x_1305_; size_t v___x_1306_; lean_object* v_bkt_1307_; uint8_t v___x_1308_; 
v___x_1294_ = lean_array_get_size(v_buckets_1290_);
v___x_1295_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1287_);
v___x_1296_ = 32ULL;
v___x_1297_ = lean_uint64_shift_right(v___x_1295_, v___x_1296_);
v_fold_1298_ = lean_uint64_xor(v___x_1295_, v___x_1297_);
v___x_1299_ = 16ULL;
v___x_1300_ = lean_uint64_shift_right(v_fold_1298_, v___x_1299_);
v___x_1301_ = lean_uint64_xor(v_fold_1298_, v___x_1300_);
v___x_1302_ = lean_uint64_to_usize(v___x_1301_);
v___x_1303_ = lean_usize_of_nat(v___x_1294_);
v___x_1304_ = ((size_t)1ULL);
v___x_1305_ = lean_usize_sub(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_usize_land(v___x_1302_, v___x_1305_);
v_bkt_1307_ = lean_array_uget_borrowed(v_buckets_1290_, v___x_1306_);
lean_inc(v_bkt_1307_);
lean_inc(v_a_1287_);
v___x_1308_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1287_, v_bkt_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v_size_x27_1310_; lean_object* v___x_1311_; lean_object* v_buckets_x27_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1309_ = lean_unsigned_to_nat(1u);
v_size_x27_1310_ = lean_nat_add(v_size_1289_, v___x_1309_);
lean_dec(v_size_1289_);
lean_inc(v_bkt_1307_);
v___x_1311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1311_, 0, v_a_1287_);
lean_ctor_set(v___x_1311_, 1, v_b_1288_);
lean_ctor_set(v___x_1311_, 2, v_bkt_1307_);
v_buckets_x27_1312_ = lean_array_uset(v_buckets_1290_, v___x_1306_, v___x_1311_);
v___x_1313_ = lean_unsigned_to_nat(4u);
v___x_1314_ = lean_nat_mul(v_size_x27_1310_, v___x_1313_);
v___x_1315_ = lean_unsigned_to_nat(3u);
v___x_1316_ = lean_nat_div(v___x_1314_, v___x_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_array_get_size(v_buckets_x27_1312_);
v___x_1318_ = lean_nat_dec_le(v___x_1316_, v___x_1317_);
lean_dec(v___x_1316_);
if (v___x_1318_ == 0)
{
lean_object* v_val_1319_; lean_object* v___x_1321_; 
v_val_1319_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1312_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v_val_1319_);
lean_ctor_set(v___x_1292_, 0, v_size_x27_1310_);
v___x_1321_ = v___x_1292_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_size_x27_1310_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v_val_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
else
{
lean_object* v___x_1324_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v_buckets_x27_1312_);
lean_ctor_set(v___x_1292_, 0, v_size_x27_1310_);
v___x_1324_ = v___x_1292_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_size_x27_1310_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v_buckets_x27_1312_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
else
{
lean_object* v___x_1326_; lean_object* v_buckets_x27_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1331_; 
lean_inc(v_bkt_1307_);
v___x_1326_ = lean_box(0);
v_buckets_x27_1327_ = lean_array_uset(v_buckets_1290_, v___x_1306_, v___x_1326_);
v___x_1328_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1287_, v_b_1288_, v_bkt_1307_);
v___x_1329_ = lean_array_uset(v_buckets_x27_1327_, v___x_1306_, v___x_1328_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v___x_1329_);
v___x_1331_ = v___x_1292_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_size_1289_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v___x_1329_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1334_, lean_object* v_fallback_1335_, lean_object* v_x_1336_){
_start:
{
if (lean_obj_tag(v_x_1336_) == 0)
{
lean_dec(v_a_1334_);
lean_inc(v_fallback_1335_);
return v_fallback_1335_;
}
else
{
lean_object* v_key_1337_; lean_object* v_value_1338_; lean_object* v_tail_1339_; uint8_t v___x_1340_; 
v_key_1337_ = lean_ctor_get(v_x_1336_, 0);
lean_inc(v_key_1337_);
v_value_1338_ = lean_ctor_get(v_x_1336_, 1);
lean_inc(v_value_1338_);
v_tail_1339_ = lean_ctor_get(v_x_1336_, 2);
lean_inc(v_tail_1339_);
lean_dec_ref_known(v_x_1336_, 3);
lean_inc(v_a_1334_);
v___x_1340_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1337_, v_a_1334_);
if (v___x_1340_ == 0)
{
lean_dec(v_value_1338_);
v_x_1336_ = v_tail_1339_;
goto _start;
}
else
{
lean_dec(v_tail_1339_);
lean_dec(v_a_1334_);
return v_value_1338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1342_, lean_object* v_fallback_1343_, lean_object* v_x_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1342_, v_fallback_1343_, v_x_1344_);
lean_dec(v_fallback_1343_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1346_, lean_object* v_a_1347_, lean_object* v_fallback_1348_){
_start:
{
lean_object* v_buckets_1349_; lean_object* v___x_1350_; uint64_t v___x_1351_; uint64_t v___x_1352_; uint64_t v___x_1353_; uint64_t v_fold_1354_; uint64_t v___x_1355_; uint64_t v___x_1356_; uint64_t v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; size_t v___x_1360_; size_t v___x_1361_; size_t v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_buckets_1349_ = lean_ctor_get(v_m_1346_, 1);
v___x_1350_ = lean_array_get_size(v_buckets_1349_);
v___x_1351_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1347_);
v___x_1352_ = 32ULL;
v___x_1353_ = lean_uint64_shift_right(v___x_1351_, v___x_1352_);
v_fold_1354_ = lean_uint64_xor(v___x_1351_, v___x_1353_);
v___x_1355_ = 16ULL;
v___x_1356_ = lean_uint64_shift_right(v_fold_1354_, v___x_1355_);
v___x_1357_ = lean_uint64_xor(v_fold_1354_, v___x_1356_);
v___x_1358_ = lean_uint64_to_usize(v___x_1357_);
v___x_1359_ = lean_usize_of_nat(v___x_1350_);
v___x_1360_ = ((size_t)1ULL);
v___x_1361_ = lean_usize_sub(v___x_1359_, v___x_1360_);
v___x_1362_ = lean_usize_land(v___x_1358_, v___x_1361_);
v___x_1363_ = lean_array_uget_borrowed(v_buckets_1349_, v___x_1362_);
lean_inc(v___x_1363_);
v___x_1364_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1347_, v_fallback_1348_, v___x_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1365_, lean_object* v_a_1366_, lean_object* v_fallback_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1365_, v_a_1366_, v_fallback_1367_);
lean_dec(v_fallback_1367_);
lean_dec_ref(v_m_1365_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1369_, lean_object* v_b_1370_){
_start:
{
if (lean_obj_tag(v_as_x27_1369_) == 0)
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v_b_1370_);
return v___x_1372_;
}
else
{
lean_object* v_head_1373_; lean_object* v_tail_1374_; lean_object* v_spec_1375_; lean_object* v_handle_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v_head_1373_ = lean_ctor_get(v_as_x27_1369_, 0);
v_tail_1374_ = lean_ctor_get(v_as_x27_1369_, 1);
v_spec_1375_ = lean_ctor_get(v_head_1373_, 0);
v_handle_1376_ = lean_ctor_get(v_head_1373_, 1);
v___x_1377_ = lean_box(0);
lean_inc_n(v_spec_1375_, 2);
v___x_1378_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1370_, v_spec_1375_, v___x_1377_);
lean_inc_ref(v_handle_1376_);
v___x_1379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1379_, 0, v_handle_1376_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1370_, v_spec_1375_, v___x_1379_);
v_as_x27_1369_ = v_tail_1374_;
v_b_1370_ = v___x_1380_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1382_, lean_object* v_b_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1382_, v_b_1383_);
lean_dec(v_as_x27_1382_);
return v_res_1385_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1386_, lean_object* v_a_1387_){
_start:
{
lean_object* v_buckets_1388_; lean_object* v___x_1389_; uint64_t v___x_1390_; uint64_t v___x_1391_; uint64_t v___x_1392_; uint64_t v_fold_1393_; uint64_t v___x_1394_; uint64_t v___x_1395_; uint64_t v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; size_t v___x_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v_buckets_1388_ = lean_ctor_get(v_m_1386_, 1);
v___x_1389_ = lean_array_get_size(v_buckets_1388_);
v___x_1390_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1387_);
v___x_1391_ = 32ULL;
v___x_1392_ = lean_uint64_shift_right(v___x_1390_, v___x_1391_);
v_fold_1393_ = lean_uint64_xor(v___x_1390_, v___x_1392_);
v___x_1394_ = 16ULL;
v___x_1395_ = lean_uint64_shift_right(v_fold_1393_, v___x_1394_);
v___x_1396_ = lean_uint64_xor(v_fold_1393_, v___x_1395_);
v___x_1397_ = lean_uint64_to_usize(v___x_1396_);
v___x_1398_ = lean_usize_of_nat(v___x_1389_);
v___x_1399_ = ((size_t)1ULL);
v___x_1400_ = lean_usize_sub(v___x_1398_, v___x_1399_);
v___x_1401_ = lean_usize_land(v___x_1397_, v___x_1400_);
v___x_1402_ = lean_array_uget_borrowed(v_buckets_1388_, v___x_1401_);
lean_inc(v___x_1402_);
v___x_1403_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1387_, v___x_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1404_, lean_object* v_a_1405_){
_start:
{
uint8_t v_res_1406_; lean_object* v_r_1407_; 
v_res_1406_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1404_, v_a_1405_);
lean_dec_ref(v_m_1404_);
v_r_1407_ = lean_box(v_res_1406_);
return v_r_1407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1408_, lean_object* v_x_1409_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
lean_dec(v_a_1408_);
return v_x_1409_;
}
else
{
lean_object* v_key_1410_; lean_object* v_value_1411_; lean_object* v_tail_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1421_; 
v_key_1410_ = lean_ctor_get(v_x_1409_, 0);
v_value_1411_ = lean_ctor_get(v_x_1409_, 1);
v_tail_1412_ = lean_ctor_get(v_x_1409_, 2);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_x_1409_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1414_ = v_x_1409_;
v_isShared_1415_ = v_isSharedCheck_1421_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_tail_1412_);
lean_inc(v_value_1411_);
lean_inc(v_key_1410_);
lean_dec(v_x_1409_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1421_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
uint8_t v___x_1416_; 
lean_inc(v_a_1408_);
lean_inc(v_key_1410_);
v___x_1416_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1410_, v_a_1408_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1419_; 
v___x_1417_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1408_, v_tail_1412_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 2, v___x_1417_);
v___x_1419_ = v___x_1414_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_key_1410_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v_value_1411_);
lean_ctor_set(v_reuseFailAlloc_1420_, 2, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
else
{
lean_del_object(v___x_1414_);
lean_dec(v_value_1411_);
lean_dec(v_key_1410_);
lean_dec(v_a_1408_);
return v_tail_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v_size_1424_; lean_object* v_buckets_1425_; lean_object* v___x_1426_; uint64_t v___x_1427_; uint64_t v___x_1428_; uint64_t v___x_1429_; uint64_t v_fold_1430_; uint64_t v___x_1431_; uint64_t v___x_1432_; uint64_t v___x_1433_; size_t v___x_1434_; size_t v___x_1435_; size_t v___x_1436_; size_t v___x_1437_; size_t v___x_1438_; lean_object* v_bkt_1439_; uint8_t v___x_1440_; 
v_size_1424_ = lean_ctor_get(v_m_1422_, 0);
v_buckets_1425_ = lean_ctor_get(v_m_1422_, 1);
v___x_1426_ = lean_array_get_size(v_buckets_1425_);
v___x_1427_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1423_);
v___x_1428_ = 32ULL;
v___x_1429_ = lean_uint64_shift_right(v___x_1427_, v___x_1428_);
v_fold_1430_ = lean_uint64_xor(v___x_1427_, v___x_1429_);
v___x_1431_ = 16ULL;
v___x_1432_ = lean_uint64_shift_right(v_fold_1430_, v___x_1431_);
v___x_1433_ = lean_uint64_xor(v_fold_1430_, v___x_1432_);
v___x_1434_ = lean_uint64_to_usize(v___x_1433_);
v___x_1435_ = lean_usize_of_nat(v___x_1426_);
v___x_1436_ = ((size_t)1ULL);
v___x_1437_ = lean_usize_sub(v___x_1435_, v___x_1436_);
v___x_1438_ = lean_usize_land(v___x_1434_, v___x_1437_);
v_bkt_1439_ = lean_array_uget_borrowed(v_buckets_1425_, v___x_1438_);
lean_inc(v_bkt_1439_);
lean_inc(v_a_1423_);
v___x_1440_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1423_, v_bkt_1439_);
if (v___x_1440_ == 0)
{
lean_dec(v_a_1423_);
return v_m_1422_;
}
else
{
lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1453_; 
lean_inc(v_bkt_1439_);
lean_inc_ref(v_buckets_1425_);
lean_inc(v_size_1424_);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_m_1422_);
if (v_isSharedCheck_1453_ == 0)
{
lean_object* v_unused_1454_; lean_object* v_unused_1455_; 
v_unused_1454_ = lean_ctor_get(v_m_1422_, 1);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_m_1422_, 0);
lean_dec(v_unused_1455_);
v___x_1442_ = v_m_1422_;
v_isShared_1443_ = v_isSharedCheck_1453_;
goto v_resetjp_1441_;
}
else
{
lean_dec(v_m_1422_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1453_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v_buckets_x27_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1444_ = lean_box(0);
v_buckets_x27_1445_ = lean_array_uset(v_buckets_1425_, v___x_1438_, v___x_1444_);
v___x_1446_ = lean_unsigned_to_nat(1u);
v___x_1447_ = lean_nat_sub(v_size_1424_, v___x_1446_);
lean_dec(v_size_1424_);
v___x_1448_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1423_, v_bkt_1439_);
v___x_1449_ = lean_array_uset(v_buckets_x27_1445_, v___x_1438_, v___x_1448_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1449_);
lean_ctor_set(v___x_1442_, 0, v___x_1447_);
v___x_1451_ = v___x_1442_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
if (lean_obj_tag(v_a_1457_) == 0)
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1460_, 0, v_a_1458_);
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
return v___x_1461_;
}
else
{
lean_object* v_key_1462_; lean_object* v_value_1463_; lean_object* v_tail_1464_; uint8_t v___x_1465_; 
v_key_1462_ = lean_ctor_get(v_a_1457_, 0);
lean_inc_n(v_key_1462_, 2);
v_value_1463_ = lean_ctor_get(v_a_1457_, 1);
lean_inc(v_value_1463_);
v_tail_1464_ = lean_ctor_get(v_a_1457_, 2);
lean_inc(v_tail_1464_);
lean_dec_ref_known(v_a_1457_, 3);
v___x_1465_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1456_, v_key_1462_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; 
lean_inc(v_key_1462_);
v___x_1466_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1458_, v_key_1462_);
if (lean_obj_tag(v_key_1462_) == 3)
{
lean_dec_ref_known(v_key_1462_, 1);
lean_dec(v_value_1463_);
v_a_1457_ = v_tail_1464_;
v_a_1458_ = v___x_1466_;
goto _start;
}
else
{
lean_object* v___x_1468_; 
lean_dec(v_key_1462_);
v___x_1468_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1463_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_dec_ref_known(v___x_1468_, 1);
v_a_1457_ = v_tail_1464_;
v_a_1458_ = v___x_1466_;
goto _start;
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref(v___x_1466_);
lean_dec(v_tail_1464_);
v_a_1470_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1468_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1468_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
else
{
lean_dec(v_value_1463_);
lean_dec(v_key_1462_);
v_a_1457_ = v_tail_1464_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1479_, v_a_1480_, v_a_1481_);
lean_dec_ref(v_a_1479_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1484_, lean_object* v_as_1485_, size_t v_sz_1486_, size_t v_i_1487_, lean_object* v_b_1488_){
_start:
{
uint8_t v___x_1490_; 
v___x_1490_ = lean_usize_dec_lt(v_i_1487_, v_sz_1486_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_b_1488_);
return v___x_1491_;
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1493_; 
v_a_1492_ = lean_array_uget_borrowed(v_as_1485_, v_i_1487_);
lean_inc(v_a_1492_);
v___x_1493_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1484_, v_a_1492_, v_b_1488_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1506_; 
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1496_ = v___x_1493_;
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
if (lean_obj_tag(v_a_1494_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1500_; 
v_a_1498_ = lean_ctor_get(v_a_1494_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v_a_1494_, 1);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 0, v_a_1498_);
v___x_1500_ = v___x_1496_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
else
{
lean_object* v_a_1502_; size_t v___x_1503_; size_t v___x_1504_; 
lean_del_object(v___x_1496_);
v_a_1502_ = lean_ctor_get(v_a_1494_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v_a_1494_, 1);
v___x_1503_ = ((size_t)1ULL);
v___x_1504_ = lean_usize_add(v_i_1487_, v___x_1503_);
v_i_1487_ = v___x_1504_;
v_b_1488_ = v_a_1502_;
goto _start;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_a_1507_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1493_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1493_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1515_, lean_object* v_as_1516_, lean_object* v_sz_1517_, lean_object* v_i_1518_, lean_object* v_b_1519_, lean_object* v___y_1520_){
_start:
{
size_t v_sz_boxed_1521_; size_t v_i_boxed_1522_; lean_object* v_res_1523_; 
v_sz_boxed_1521_ = lean_unbox_usize(v_sz_1517_);
lean_dec(v_sz_1517_);
v_i_boxed_1522_ = lean_unbox_usize(v_i_1518_);
lean_dec(v_i_1518_);
v_res_1523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1515_, v_as_1516_, v_sz_boxed_1521_, v_i_boxed_1522_, v_b_1519_);
lean_dec_ref(v_as_1516_);
lean_dec_ref(v_a_1515_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1524_, lean_object* v_x_1525_){
_start:
{
if (lean_obj_tag(v_x_1525_) == 0)
{
lean_object* v___x_1526_; 
lean_dec(v_a_1524_);
v___x_1526_ = lean_box(0);
return v___x_1526_;
}
else
{
lean_object* v_key_1527_; lean_object* v_value_1528_; lean_object* v_tail_1529_; uint8_t v___x_1530_; 
v_key_1527_ = lean_ctor_get(v_x_1525_, 0);
lean_inc(v_key_1527_);
v_value_1528_ = lean_ctor_get(v_x_1525_, 1);
lean_inc(v_value_1528_);
v_tail_1529_ = lean_ctor_get(v_x_1525_, 2);
lean_inc(v_tail_1529_);
lean_dec_ref_known(v_x_1525_, 3);
lean_inc(v_a_1524_);
v___x_1530_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1527_, v_a_1524_);
if (v___x_1530_ == 0)
{
lean_dec(v_value_1528_);
v_x_1525_ = v_tail_1529_;
goto _start;
}
else
{
lean_object* v___x_1532_; 
lean_dec(v_tail_1529_);
lean_dec(v_a_1524_);
v___x_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1532_, 0, v_value_1528_);
return v___x_1532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v_buckets_1535_; lean_object* v___x_1536_; uint64_t v___x_1537_; uint64_t v___x_1538_; uint64_t v___x_1539_; uint64_t v_fold_1540_; uint64_t v___x_1541_; uint64_t v___x_1542_; uint64_t v___x_1543_; size_t v___x_1544_; size_t v___x_1545_; size_t v___x_1546_; size_t v___x_1547_; size_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v_buckets_1535_ = lean_ctor_get(v_m_1533_, 1);
v___x_1536_ = lean_array_get_size(v_buckets_1535_);
v___x_1537_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1534_);
v___x_1538_ = 32ULL;
v___x_1539_ = lean_uint64_shift_right(v___x_1537_, v___x_1538_);
v_fold_1540_ = lean_uint64_xor(v___x_1537_, v___x_1539_);
v___x_1541_ = 16ULL;
v___x_1542_ = lean_uint64_shift_right(v_fold_1540_, v___x_1541_);
v___x_1543_ = lean_uint64_xor(v_fold_1540_, v___x_1542_);
v___x_1544_ = lean_uint64_to_usize(v___x_1543_);
v___x_1545_ = lean_usize_of_nat(v___x_1536_);
v___x_1546_ = ((size_t)1ULL);
v___x_1547_ = lean_usize_sub(v___x_1545_, v___x_1546_);
v___x_1548_ = lean_usize_land(v___x_1544_, v___x_1547_);
v___x_1549_ = lean_array_uget_borrowed(v_buckets_1535_, v___x_1548_);
lean_inc(v___x_1549_);
v___x_1550_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1534_, v___x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1551_, v_a_1552_);
lean_dec_ref(v_m_1551_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1554_, lean_object* v_fallback_1555_, lean_object* v_x_1556_){
_start:
{
if (lean_obj_tag(v_x_1556_) == 0)
{
lean_inc(v_fallback_1555_);
return v_fallback_1555_;
}
else
{
lean_object* v_key_1557_; lean_object* v_value_1558_; lean_object* v_tail_1559_; uint8_t v___x_1560_; 
v_key_1557_ = lean_ctor_get(v_x_1556_, 0);
v_value_1558_ = lean_ctor_get(v_x_1556_, 1);
v_tail_1559_ = lean_ctor_get(v_x_1556_, 2);
v___x_1560_ = lean_nat_dec_eq(v_key_1557_, v_a_1554_);
if (v___x_1560_ == 0)
{
v_x_1556_ = v_tail_1559_;
goto _start;
}
else
{
lean_inc(v_value_1558_);
return v_value_1558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1562_, lean_object* v_fallback_1563_, lean_object* v_x_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1562_, v_fallback_1563_, v_x_1564_);
lean_dec(v_x_1564_);
lean_dec(v_fallback_1563_);
lean_dec(v_a_1562_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1566_, lean_object* v_a_1567_, lean_object* v_fallback_1568_){
_start:
{
lean_object* v_buckets_1569_; lean_object* v___x_1570_; uint64_t v___x_1571_; uint64_t v___x_1572_; uint64_t v___x_1573_; uint64_t v_fold_1574_; uint64_t v___x_1575_; uint64_t v___x_1576_; uint64_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; size_t v___x_1580_; size_t v___x_1581_; size_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_buckets_1569_ = lean_ctor_get(v_m_1566_, 1);
v___x_1570_ = lean_array_get_size(v_buckets_1569_);
v___x_1571_ = lean_uint64_of_nat(v_a_1567_);
v___x_1572_ = 32ULL;
v___x_1573_ = lean_uint64_shift_right(v___x_1571_, v___x_1572_);
v_fold_1574_ = lean_uint64_xor(v___x_1571_, v___x_1573_);
v___x_1575_ = 16ULL;
v___x_1576_ = lean_uint64_shift_right(v_fold_1574_, v___x_1575_);
v___x_1577_ = lean_uint64_xor(v_fold_1574_, v___x_1576_);
v___x_1578_ = lean_uint64_to_usize(v___x_1577_);
v___x_1579_ = lean_usize_of_nat(v___x_1570_);
v___x_1580_ = ((size_t)1ULL);
v___x_1581_ = lean_usize_sub(v___x_1579_, v___x_1580_);
v___x_1582_ = lean_usize_land(v___x_1578_, v___x_1581_);
v___x_1583_ = lean_array_uget_borrowed(v_buckets_1569_, v___x_1582_);
v___x_1584_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1567_, v_fallback_1568_, v___x_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1585_, lean_object* v_a_1586_, lean_object* v_fallback_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1585_, v_a_1586_, v_fallback_1587_);
lean_dec(v_fallback_1587_);
lean_dec(v_a_1586_);
lean_dec_ref(v_m_1585_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1594_);
lean_dec_ref(v_x_1594_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1597_, lean_object* v_value_1598_){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1600_ = ((lean_object*)(l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1601_ = lean_unsigned_to_nat(1u);
v___x_1602_ = lean_mk_empty_array_with_capacity(v___x_1601_);
v___x_1603_ = lean_array_push(v___x_1602_, v_value_1598_);
v___x_1604_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_p_1597_, v___x_1600_, v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1605_, lean_object* v_value_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1605_, v_value_1606_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
if (lean_obj_tag(v_a_1609_) == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = l_List_reverse___redArg(v_a_1610_);
return v___x_1611_;
}
else
{
lean_object* v_head_1612_; lean_object* v_tail_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1627_; 
v_head_1612_ = lean_ctor_get(v_a_1609_, 0);
v_tail_1613_ = lean_ctor_get(v_a_1609_, 1);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_a_1609_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1615_ = v_a_1609_;
v_isShared_1616_ = v_isSharedCheck_1627_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_tail_1613_);
lean_inc(v_head_1612_);
lean_dec(v_a_1609_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1627_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v_fst_1617_; lean_object* v_snd_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1624_; 
v_fst_1617_ = lean_ctor_get(v_head_1612_, 0);
lean_inc(v_fst_1617_);
v_snd_1618_ = lean_ctor_get(v_head_1612_, 1);
lean_inc(v_snd_1618_);
lean_dec(v_head_1612_);
v___x_1619_ = lean_unsigned_to_nat(2u);
v___x_1620_ = lean_mk_empty_array_with_capacity(v___x_1619_);
v___x_1621_ = lean_array_push(v___x_1620_, v_fst_1617_);
v___x_1622_ = lean_array_push(v___x_1621_, v_snd_1618_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 1, v_a_1610_);
lean_ctor_set(v___x_1615_, 0, v___x_1622_);
v___x_1624_ = v___x_1615_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1622_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v_a_1610_);
v___x_1624_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
v_a_1609_ = v_tail_1613_;
v_a_1610_ = v___x_1624_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
if (lean_obj_tag(v_a_1628_) == 0)
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_array_to_list(v_a_1629_);
return v___x_1630_;
}
else
{
lean_object* v_head_1631_; 
v_head_1631_ = lean_ctor_get(v_a_1628_, 0);
if (lean_obj_tag(v_head_1631_) == 7)
{
lean_object* v_tail_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1654_; 
lean_inc_ref(v_head_1631_);
v_tail_1632_ = lean_ctor_get(v_a_1628_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_a_1628_);
if (v_isSharedCheck_1654_ == 0)
{
lean_object* v_unused_1655_; 
v_unused_1655_ = lean_ctor_get(v_a_1628_, 0);
lean_dec(v_unused_1655_);
v___x_1634_ = v_a_1628_;
v_isShared_1635_ = v_isSharedCheck_1654_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_tail_1632_);
lean_dec(v_a_1628_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1654_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v_items_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v_items_1636_ = lean_ctor_get(v_head_1631_, 0);
lean_inc_ref(v_items_1636_);
lean_dec_ref_known(v_head_1631_, 1);
v___x_1637_ = lean_array_get_size(v_items_1636_);
v___x_1638_ = lean_unsigned_to_nat(2u);
v___x_1639_ = lean_nat_dec_eq(v___x_1637_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_dec_ref(v_items_1636_);
lean_del_object(v___x_1634_);
v_a_1628_ = v_tail_1632_;
goto _start;
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = lean_unsigned_to_nat(0u);
v___x_1642_ = lean_array_fget_borrowed(v_items_1636_, v___x_1641_);
if (lean_obj_tag(v___x_1642_) == 4)
{
lean_object* v_s_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_s_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc_ref(v_s_1643_);
v___x_1644_ = lean_unsigned_to_nat(1u);
v___x_1645_ = lean_array_fget(v_items_1636_, v___x_1644_);
lean_dec_ref(v_items_1636_);
if (lean_obj_tag(v___x_1645_) == 4)
{
lean_object* v_s_1646_; lean_object* v___x_1648_; 
v_s_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc_ref(v_s_1646_);
lean_dec_ref_known(v___x_1645_, 1);
if (v_isShared_1635_ == 0)
{
lean_ctor_set_tag(v___x_1634_, 0);
lean_ctor_set(v___x_1634_, 1, v_s_1646_);
lean_ctor_set(v___x_1634_, 0, v_s_1643_);
v___x_1648_ = v___x_1634_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_s_1643_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_s_1646_);
v___x_1648_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_array_push(v_a_1629_, v___x_1648_);
v_a_1628_ = v_tail_1632_;
v_a_1629_ = v___x_1649_;
goto _start;
}
}
else
{
lean_dec(v___x_1645_);
lean_dec_ref(v_s_1643_);
lean_del_object(v___x_1634_);
v_a_1628_ = v_tail_1632_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1636_);
lean_del_object(v___x_1634_);
v_a_1628_ = v_tail_1632_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1656_; 
v_tail_1656_ = lean_ctor_get(v_a_1628_, 1);
lean_inc(v_tail_1656_);
lean_dec_ref_known(v_a_1628_, 2);
v_a_1628_ = v_tail_1656_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1658_, lean_object* v_s_1659_){
_start:
{
lean_object* v_model_1660_; lean_object* v_live_1661_; lean_object* v_next_1662_; lean_object* v_tables_1663_; uint8_t v_dirty_1664_; uint8_t v_scheduled_1665_; lean_object* v_queue_1666_; lean_object* v_subs_1667_; lean_object* v_handlers_1668_; lean_object* v_nextSub_1669_; lean_object* v_touched_1670_; lean_object* v_ports_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
v_model_1660_ = lean_ctor_get(v_s_1659_, 0);
v_live_1661_ = lean_ctor_get(v_s_1659_, 1);
v_next_1662_ = lean_ctor_get(v_s_1659_, 2);
v_tables_1663_ = lean_ctor_get(v_s_1659_, 3);
v_dirty_1664_ = lean_ctor_get_uint8(v_s_1659_, sizeof(void*)*10);
v_scheduled_1665_ = lean_ctor_get_uint8(v_s_1659_, sizeof(void*)*10 + 1);
v_queue_1666_ = lean_ctor_get(v_s_1659_, 4);
v_subs_1667_ = lean_ctor_get(v_s_1659_, 5);
v_handlers_1668_ = lean_ctor_get(v_s_1659_, 6);
v_nextSub_1669_ = lean_ctor_get(v_s_1659_, 7);
v_touched_1670_ = lean_ctor_get(v_s_1659_, 8);
v_ports_1671_ = lean_ctor_get(v_s_1659_, 9);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_s_1659_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v_s_1659_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_ports_1671_);
lean_inc(v_touched_1670_);
lean_inc(v_nextSub_1669_);
lean_inc(v_handlers_1668_);
lean_inc(v_subs_1667_);
lean_inc(v_queue_1666_);
lean_inc(v_tables_1663_);
lean_inc(v_next_1662_);
lean_inc(v_live_1661_);
lean_inc(v_model_1660_);
lean_dec(v_s_1659_);
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
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_model_1660_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v_live_1661_);
lean_ctor_set(v_reuseFailAlloc_1677_, 2, v_next_1662_);
lean_ctor_set(v_reuseFailAlloc_1677_, 3, v_tables_1663_);
lean_ctor_set(v_reuseFailAlloc_1677_, 4, v_queue_1666_);
lean_ctor_set(v_reuseFailAlloc_1677_, 5, v_subs_1667_);
lean_ctor_set(v_reuseFailAlloc_1677_, 6, v_handlers_1668_);
lean_ctor_set(v_reuseFailAlloc_1677_, 7, v_nextSub_1669_);
lean_ctor_set(v_reuseFailAlloc_1677_, 8, v_touched_1670_);
lean_ctor_set(v_reuseFailAlloc_1677_, 9, v_ports_1671_);
lean_ctor_set_uint8(v_reuseFailAlloc_1677_, sizeof(void*)*10, v_dirty_1664_);
lean_ctor_set_uint8(v_reuseFailAlloc_1677_, sizeof(void*)*10 + 1, v_scheduled_1665_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
lean_ctor_set_uint8(v___x_1676_, sizeof(void*)*10 + 2, v_busy_1658_);
return v___x_1676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1679_, lean_object* v_s_1680_){
_start:
{
uint8_t v_busy_boxed_1681_; lean_object* v_res_1682_; 
v_busy_boxed_1681_ = lean_unbox(v_busy_1679_);
v_res_1682_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1681_, v_s_1680_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1683_, lean_object* v_msg_1684_, lean_object* v_x_1685_){
_start:
{
lean_object* v___x_1687_; 
lean_inc_ref(v_c_1683_);
v___x_1687_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1683_, v_msg_1684_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v___x_1688_; 
lean_dec_ref_known(v___x_1687_, 1);
v___x_1688_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1683_);
lean_dec_ref(v_c_1683_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1698_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1698_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1698_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1696_; 
v___x_1693_ = lean_alloc_ctor(2, 0, 1);
v___x_1694_ = lean_unbox(v_a_1689_);
lean_dec(v_a_1689_);
lean_ctor_set_uint8(v___x_1693_, 0, v___x_1694_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1693_);
v___x_1696_ = v___x_1691_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1693_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
v_a_1699_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1688_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1688_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
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
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec_ref(v_c_1683_);
v_a_1707_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1687_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1687_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1715_, lean_object* v_msg_1716_, lean_object* v_x_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1715_, v_msg_1716_, v_x_1717_);
lean_dec_ref(v_x_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1723_, lean_object* v_c_1724_, lean_object* v___f_1725_, lean_object* v_args_1726_){
_start:
{
lean_object* v___y_1729_; lean_object* v___x_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1759_ = lean_array_get_size(v_args_1726_);
v___x_1760_ = lean_unsigned_to_nat(5u);
v___x_1761_ = lean_nat_dec_eq(v___x_1759_, v___x_1760_);
if (v___x_1761_ == 0)
{
lean_object* v___x_1762_; uint8_t v___x_1763_; 
v___x_1762_ = lean_unsigned_to_nat(2u);
v___x_1763_ = lean_nat_dec_eq(v___x_1759_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_apply_1(v___f_1725_, v_args_1726_);
v___y_1729_ = v___x_1764_;
goto v___jp_1728_;
}
else
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_unsigned_to_nat(0u);
v___x_1766_ = lean_array_fget(v_args_1726_, v___x_1765_);
if (lean_obj_tag(v___x_1766_) == 2)
{
uint8_t v_b_1767_; 
v_b_1767_ = lean_ctor_get_uint8(v___x_1766_, 0);
if (v_b_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = lean_array_fget(v_args_1726_, v___x_1768_);
lean_dec_ref(v_args_1726_);
if (lean_obj_tag(v___x_1769_) == 4)
{
lean_object* v_s_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref_known(v___x_1766_, 0);
lean_dec_ref(v___f_1725_);
v_s_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_s_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
lean_ctor_set_tag(v___x_1772_, 0);
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_s_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
v___y_1729_ = v___x_1775_;
goto v___jp_1728_;
}
}
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = lean_mk_empty_array_with_capacity(v___x_1762_);
v___x_1779_ = lean_array_push(v___x_1778_, v___x_1766_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1769_);
v___x_1781_ = lean_apply_1(v___f_1725_, v___x_1780_);
v___y_1729_ = v___x_1781_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1782_ = lean_unsigned_to_nat(1u);
v___x_1783_ = lean_array_fget(v_args_1726_, v___x_1782_);
lean_dec_ref(v_args_1726_);
v___x_1784_ = lean_mk_empty_array_with_capacity(v___x_1762_);
v___x_1785_ = lean_array_push(v___x_1784_, v___x_1766_);
v___x_1786_ = lean_array_push(v___x_1785_, v___x_1783_);
v___x_1787_ = lean_apply_1(v___f_1725_, v___x_1786_);
v___y_1729_ = v___x_1787_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1788_ = lean_unsigned_to_nat(1u);
v___x_1789_ = lean_array_fget(v_args_1726_, v___x_1788_);
lean_dec_ref(v_args_1726_);
v___x_1790_ = lean_mk_empty_array_with_capacity(v___x_1762_);
v___x_1791_ = lean_array_push(v___x_1790_, v___x_1766_);
v___x_1792_ = lean_array_push(v___x_1791_, v___x_1789_);
v___x_1793_ = lean_apply_1(v___f_1725_, v___x_1792_);
v___y_1729_ = v___x_1793_;
goto v___jp_1728_;
}
}
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_unsigned_to_nat(0u);
v___x_1795_ = lean_array_fget_borrowed(v_args_1726_, v___x_1794_);
if (lean_obj_tag(v___x_1795_) == 2)
{
uint8_t v_b_1796_; 
v_b_1796_ = lean_ctor_get_uint8(v___x_1795_, 0);
if (v_b_1796_ == 1)
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_unsigned_to_nat(2u);
v___x_1798_ = lean_array_fget_borrowed(v_args_1726_, v___x_1797_);
if (lean_obj_tag(v___x_1798_) == 4)
{
lean_object* v_s_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_s_1799_ = lean_ctor_get(v___x_1798_, 0);
v___x_1800_ = lean_unsigned_to_nat(3u);
v___x_1801_ = lean_array_fget_borrowed(v_args_1726_, v___x_1800_);
if (lean_obj_tag(v___x_1801_) == 7)
{
lean_object* v_items_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v_items_1802_ = lean_ctor_get(v___x_1801_, 0);
v___x_1803_ = lean_unsigned_to_nat(4u);
v___x_1804_ = lean_array_fget(v_args_1726_, v___x_1803_);
if (lean_obj_tag(v___x_1804_) == 4)
{
lean_object* v_s_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1823_; 
lean_inc_ref(v_items_1802_);
lean_inc_ref(v_s_1799_);
lean_dec_ref(v___f_1725_);
v_s_1805_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1807_ = v___x_1804_;
v_isShared_1808_ = v_isSharedCheck_1823_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_s_1805_);
lean_dec(v___x_1804_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1823_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___y_1810_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_unsigned_to_nat(1u);
v___x_1819_ = lean_array_fget(v_args_1726_, v___x_1818_);
lean_dec_ref(v_args_1726_);
if (lean_obj_tag(v___x_1819_) == 3)
{
double v_n_1820_; uint64_t v___x_1821_; lean_object* v___x_1822_; 
v_n_1820_ = lean_ctor_get_float(v___x_1819_, 0);
lean_dec_ref_known(v___x_1819_, 0);
v___x_1821_ = lean_float_to_uint64(v_n_1820_);
v___x_1822_ = lean_uint64_to_nat(v___x_1821_);
v___y_1810_ = v___x_1822_;
goto v___jp_1809_;
}
else
{
lean_dec(v___x_1819_);
v___y_1810_ = v___x_1794_;
goto v___jp_1809_;
}
v___jp_1809_:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1816_; 
v___x_1811_ = lean_array_to_list(v_items_1802_);
v___x_1812_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1813_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1811_, v___x_1812_);
v___x_1814_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1814_, 0, v___y_1810_);
lean_ctor_set(v___x_1814_, 1, v_s_1799_);
lean_ctor_set(v___x_1814_, 2, v___x_1813_);
lean_ctor_set(v___x_1814_, 3, v_s_1805_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set_tag(v___x_1807_, 1);
lean_ctor_set(v___x_1807_, 0, v___x_1814_);
v___x_1816_ = v___x_1807_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
v___y_1729_ = v___x_1816_;
goto v___jp_1728_;
}
}
}
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_inc_ref(v___x_1801_);
lean_inc_ref(v___x_1798_);
lean_inc_ref(v___x_1795_);
v___x_1824_ = lean_unsigned_to_nat(1u);
v___x_1825_ = lean_array_fget(v_args_1726_, v___x_1824_);
lean_dec_ref(v_args_1726_);
v___x_1826_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1795_);
v___x_1828_ = lean_array_push(v___x_1827_, v___x_1825_);
v___x_1829_ = lean_array_push(v___x_1828_, v___x_1798_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1801_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1804_);
v___x_1832_ = lean_apply_1(v___f_1725_, v___x_1831_);
v___y_1729_ = v___x_1832_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
lean_inc(v___x_1801_);
lean_inc_ref(v___x_1798_);
lean_inc_ref(v___x_1795_);
v___x_1833_ = lean_unsigned_to_nat(1u);
v___x_1834_ = lean_array_fget(v_args_1726_, v___x_1833_);
v___x_1835_ = lean_unsigned_to_nat(4u);
v___x_1836_ = lean_array_fget(v_args_1726_, v___x_1835_);
lean_dec_ref(v_args_1726_);
v___x_1837_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1838_ = lean_array_push(v___x_1837_, v___x_1795_);
v___x_1839_ = lean_array_push(v___x_1838_, v___x_1834_);
v___x_1840_ = lean_array_push(v___x_1839_, v___x_1798_);
v___x_1841_ = lean_array_push(v___x_1840_, v___x_1801_);
v___x_1842_ = lean_array_push(v___x_1841_, v___x_1836_);
v___x_1843_ = lean_apply_1(v___f_1725_, v___x_1842_);
v___y_1729_ = v___x_1843_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_inc(v___x_1798_);
lean_inc_ref(v___x_1795_);
v___x_1844_ = lean_unsigned_to_nat(1u);
v___x_1845_ = lean_array_fget(v_args_1726_, v___x_1844_);
v___x_1846_ = lean_unsigned_to_nat(3u);
v___x_1847_ = lean_array_fget(v_args_1726_, v___x_1846_);
v___x_1848_ = lean_unsigned_to_nat(4u);
v___x_1849_ = lean_array_fget(v_args_1726_, v___x_1848_);
lean_dec_ref(v_args_1726_);
v___x_1850_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1851_ = lean_array_push(v___x_1850_, v___x_1795_);
v___x_1852_ = lean_array_push(v___x_1851_, v___x_1845_);
v___x_1853_ = lean_array_push(v___x_1852_, v___x_1798_);
v___x_1854_ = lean_array_push(v___x_1853_, v___x_1847_);
v___x_1855_ = lean_array_push(v___x_1854_, v___x_1849_);
v___x_1856_ = lean_apply_1(v___f_1725_, v___x_1855_);
v___y_1729_ = v___x_1856_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
lean_inc_ref(v___x_1795_);
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = lean_array_fget(v_args_1726_, v___x_1857_);
v___x_1859_ = lean_unsigned_to_nat(2u);
v___x_1860_ = lean_array_fget(v_args_1726_, v___x_1859_);
v___x_1861_ = lean_unsigned_to_nat(3u);
v___x_1862_ = lean_array_fget(v_args_1726_, v___x_1861_);
v___x_1863_ = lean_unsigned_to_nat(4u);
v___x_1864_ = lean_array_fget(v_args_1726_, v___x_1863_);
lean_dec_ref(v_args_1726_);
v___x_1865_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1795_);
v___x_1867_ = lean_array_push(v___x_1866_, v___x_1858_);
v___x_1868_ = lean_array_push(v___x_1867_, v___x_1860_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1862_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1864_);
v___x_1871_ = lean_apply_1(v___f_1725_, v___x_1870_);
v___y_1729_ = v___x_1871_;
goto v___jp_1728_;
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
lean_inc(v___x_1795_);
v___x_1872_ = lean_unsigned_to_nat(1u);
v___x_1873_ = lean_array_fget(v_args_1726_, v___x_1872_);
v___x_1874_ = lean_unsigned_to_nat(2u);
v___x_1875_ = lean_array_fget(v_args_1726_, v___x_1874_);
v___x_1876_ = lean_unsigned_to_nat(3u);
v___x_1877_ = lean_array_fget(v_args_1726_, v___x_1876_);
v___x_1878_ = lean_unsigned_to_nat(4u);
v___x_1879_ = lean_array_fget(v_args_1726_, v___x_1878_);
lean_dec_ref(v_args_1726_);
v___x_1880_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1795_);
v___x_1882_ = lean_array_push(v___x_1881_, v___x_1873_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1875_);
v___x_1884_ = lean_array_push(v___x_1883_, v___x_1877_);
v___x_1885_ = lean_array_push(v___x_1884_, v___x_1879_);
v___x_1886_ = lean_apply_1(v___f_1725_, v___x_1885_);
v___y_1729_ = v___x_1886_;
goto v___jp_1728_;
}
}
v___jp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_apply_1(v_handle_1723_, v___y_1729_);
lean_inc_ref(v_c_1724_);
v___x_1731_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1724_, v___x_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v___x_1732_; 
lean_dec_ref_known(v___x_1731_, 1);
v___x_1732_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1724_);
lean_dec_ref(v_c_1724_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1742_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1742_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1742_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1740_; 
v___x_1737_ = lean_alloc_ctor(2, 0, 1);
v___x_1738_ = lean_unbox(v_a_1733_);
lean_dec(v_a_1733_);
lean_ctor_set_uint8(v___x_1737_, 0, v___x_1738_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1737_);
v___x_1740_ = v___x_1735_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1737_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1732_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1732_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
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
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
lean_dec_ref(v_c_1724_);
v_a_1751_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1731_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1731_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1887_, lean_object* v_c_1888_, lean_object* v___f_1889_, lean_object* v_args_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1887_, v_c_1888_, v___f_1889_, v_args_1890_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1893_, lean_object* v_m_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1893_, v_m_1894_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1897_, lean_object* v_e_1898_){
_start:
{
switch(lean_obj_tag(v_e_1898_))
{
case 0:
{
lean_object* v_msg_1900_; lean_object* v___x_1901_; 
v_msg_1900_ = lean_ctor_get(v_e_1898_, 0);
lean_inc(v_msg_1900_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1901_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1897_, v_msg_1900_);
return v___x_1901_;
}
case 1:
{
lean_object* v_ms_1902_; lean_object* v_msg_1903_; lean_object* v___f_1904_; lean_object* v___x_1905_; 
v_ms_1902_ = lean_ctor_get(v_e_1898_, 0);
lean_inc(v_ms_1902_);
v_msg_1903_ = lean_ctor_get(v_e_1898_, 1);
lean_inc(v_msg_1903_);
lean_dec_ref_known(v_e_1898_, 2);
v___f_1904_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1904_, 0, v_c_1897_);
lean_closure_set(v___f_1904_, 1, v_msg_1903_);
v___x_1905_ = l_Lasm_JS_Function_ofSyncFn(v___f_1904_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1907_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1902_, v_a_1906_);
return v___x_1907_;
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_ms_1902_);
v_a_1908_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1905_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1905_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
case 2:
{
lean_object* v_request_1916_; lean_object* v_handle_1917_; lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; 
v_request_1916_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_request_1916_);
v_handle_1917_ = lean_ctor_get(v_e_1898_, 1);
lean_inc(v_handle_1917_);
lean_dec_ref_known(v_e_1898_, 2);
v___f_1918_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1919_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1919_, 0, v_handle_1917_);
lean_closure_set(v___f_1919_, 1, v_c_1897_);
lean_closure_set(v___f_1919_, 2, v___f_1918_);
v___x_1920_ = l_Lasm_JS_Function_ofSyncFn(v___f_1919_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v_method_1922_; lean_object* v_url_1923_; lean_object* v_headers_1924_; lean_object* v_body_1925_; lean_object* v_credentials_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; size_t v_sz_1930_; size_t v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
v_method_1922_ = lean_ctor_get(v_request_1916_, 0);
lean_inc_ref(v_method_1922_);
v_url_1923_ = lean_ctor_get(v_request_1916_, 1);
lean_inc_ref(v_url_1923_);
v_headers_1924_ = lean_ctor_get(v_request_1916_, 2);
lean_inc(v_headers_1924_);
v_body_1925_ = lean_ctor_get(v_request_1916_, 3);
lean_inc(v_body_1925_);
v_credentials_1926_ = lean_ctor_get(v_request_1916_, 4);
lean_inc_ref(v_credentials_1926_);
lean_dec_ref(v_request_1916_);
v___x_1927_ = lean_box(0);
v___x_1928_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1924_, v___x_1927_);
v___x_1929_ = lean_array_mk(v___x_1928_);
v_sz_1930_ = lean_array_size(v___x_1929_);
v___x_1931_ = ((size_t)0ULL);
v___x_1932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1930_, v___x_1931_, v___x_1929_);
v___x_1933_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
v___x_1934_ = l_Lasm_UI_Runtime_Dom_http(v_method_1922_, v_url_1923_, v___x_1933_, v_body_1925_, v_credentials_1926_, v_a_1921_);
return v___x_1934_;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec_ref(v_request_1916_);
v_a_1935_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1920_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1920_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
case 3:
{
lean_object* v_n_1943_; lean_object* v_handle_1944_; size_t v___x_1945_; lean_object* v___x_1946_; 
v_n_1943_ = lean_ctor_get(v_e_1898_, 0);
lean_inc(v_n_1943_);
v_handle_1944_ = lean_ctor_get(v_e_1898_, 1);
lean_inc(v_handle_1944_);
lean_dec_ref_known(v_e_1898_, 2);
v___x_1945_ = lean_usize_of_nat(v_n_1943_);
lean_dec(v_n_1943_);
v___x_1946_ = lean_io_get_random_bytes(v___x_1945_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref_known(v___x_1946_, 1);
v___x_1948_ = lean_apply_1(v_handle_1944_, v_a_1947_);
v___x_1949_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1897_, v___x_1948_);
return v___x_1949_;
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec(v_handle_1944_);
lean_dec_ref(v_c_1897_);
v_a_1950_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1946_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1946_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
case 4:
{
lean_object* v_handle_1958_; lean_object* v___x_1959_; 
v_handle_1958_ = lean_ctor_get(v_e_1898_, 0);
lean_inc(v_handle_1958_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1959_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = lean_apply_1(v_handle_1958_, v_a_1960_);
v___x_1962_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1897_, v___x_1961_);
return v___x_1962_;
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec(v_handle_1958_);
lean_dec_ref(v_c_1897_);
v_a_1963_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1959_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1959_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
case 5:
{
lean_object* v_url_1971_; uint8_t v_replace_1972_; lean_object* v___x_1973_; 
lean_dec_ref(v_c_1897_);
v_url_1971_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_url_1971_);
v_replace_1972_ = lean_ctor_get_uint8(v_e_1898_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1973_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1971_, v_replace_1972_);
return v___x_1973_;
}
case 6:
{
lean_object* v_n_1974_; lean_object* v___x_1975_; 
lean_dec_ref(v_c_1897_);
v_n_1974_ = lean_ctor_get(v_e_1898_, 0);
lean_inc(v_n_1974_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1975_ = l_Lasm_UI_Runtime_Dom_go(v_n_1974_);
return v___x_1975_;
}
case 7:
{
lean_object* v_url_1976_; lean_object* v___x_1977_; 
lean_dec_ref(v_c_1897_);
v_url_1976_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_url_1976_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1977_ = l_Lasm_UI_Runtime_Dom_load(v_url_1976_);
return v___x_1977_;
}
case 8:
{
uint8_t v_storage_1978_; lean_object* v_key_1979_; lean_object* v_value_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
lean_dec_ref(v_c_1897_);
v_storage_1978_ = lean_ctor_get_uint8(v_e_1898_, sizeof(void*)*2);
v_key_1979_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_key_1979_);
v_value_1980_ = lean_ctor_get(v_e_1898_, 1);
lean_inc_ref(v_value_1980_);
lean_dec_ref_known(v_e_1898_, 2);
v___x_1981_ = l_Lasm_UI_Runtime_storageName(v_storage_1978_);
v___x_1982_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_1981_, v_key_1979_, v_value_1980_);
return v___x_1982_;
}
case 9:
{
uint8_t v_storage_1983_; lean_object* v_key_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
lean_dec_ref(v_c_1897_);
v_storage_1983_ = lean_ctor_get_uint8(v_e_1898_, sizeof(void*)*1);
v_key_1984_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_key_1984_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_1985_ = l_Lasm_UI_Runtime_storageName(v_storage_1983_);
v___x_1986_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_1985_, v_key_1984_);
return v___x_1986_;
}
case 10:
{
uint8_t v_storage_1987_; lean_object* v_key_1988_; lean_object* v_handle_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v_storage_1987_ = lean_ctor_get_uint8(v_e_1898_, sizeof(void*)*2);
v_key_1988_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_key_1988_);
v_handle_1989_ = lean_ctor_get(v_e_1898_, 1);
lean_inc(v_handle_1989_);
lean_dec_ref_known(v_e_1898_, 2);
v___x_1990_ = l_Lasm_UI_Runtime_storageName(v_storage_1987_);
v___x_1991_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_1990_, v_key_1988_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_a_1992_);
lean_dec_ref_known(v___x_1991_, 1);
v___x_1993_ = lean_apply_1(v_handle_1989_, v_a_1992_);
v___x_1994_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1897_, v___x_1993_);
return v___x_1994_;
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec(v_handle_1989_);
lean_dec_ref(v_c_1897_);
v_a_1995_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1991_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1991_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
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
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
case 11:
{
lean_object* v_id_2003_; uint8_t v_blur_2004_; lean_object* v___x_2005_; 
lean_dec_ref(v_c_1897_);
v_id_2003_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_id_2003_);
v_blur_2004_ = lean_ctor_get_uint8(v_e_1898_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1898_, 1);
v___x_2005_ = l_Lasm_UI_Runtime_Dom_focus(v_id_2003_, v_blur_2004_);
return v___x_2005_;
}
case 12:
{
lean_object* v_name_2006_; lean_object* v_value_2007_; lean_object* v___x_2008_; 
lean_dec_ref(v_c_1897_);
v_name_2006_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_name_2006_);
v_value_2007_ = lean_ctor_get(v_e_1898_, 1);
lean_inc(v_value_2007_);
lean_dec_ref_known(v_e_1898_, 2);
v___x_2008_ = l_Lasm_UI_Mount_Raw_port(v_name_2006_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2010_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2009_);
lean_dec_ref_known(v___x_2008_, 1);
v___x_2010_ = l_Lasm_UI_Mount_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_2009_, v_value_2007_);
return v___x_2010_;
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec(v_value_2007_);
v_a_2011_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2008_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2008_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
case 13:
{
lean_object* v_title_2019_; lean_object* v___x_2020_; 
lean_dec_ref(v_c_1897_);
v_title_2019_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_title_2019_);
lean_dec_ref_known(v_e_1898_, 1);
v___x_2020_ = l_Lasm_UI_Runtime_Dom_title(v_title_2019_);
return v___x_2020_;
}
default: 
{
lean_object* v_run_2021_; lean_object* v___f_2022_; lean_object* v___x_2023_; 
v_run_2021_ = lean_ctor_get(v_e_1898_, 0);
lean_inc_ref(v_run_2021_);
lean_dec_ref_known(v_e_1898_, 1);
v___f_2022_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2022_, 0, v_c_1897_);
v___x_2023_ = lean_apply_2(v_run_2021_, v___f_2022_, lean_box(0));
return v___x_2023_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_2025_, lean_object* v_as_x27_2026_, lean_object* v_b_2027_){
_start:
{
if (lean_obj_tag(v_as_x27_2026_) == 0)
{
lean_object* v___x_2029_; 
lean_dec_ref(v_c_2025_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_b_2027_);
return v___x_2029_;
}
else
{
lean_object* v_head_2030_; lean_object* v_tail_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_head_2030_ = lean_ctor_get(v_as_x27_2026_, 0);
v_tail_2031_ = lean_ctor_get(v_as_x27_2026_, 1);
v___x_2032_ = lean_box(0);
lean_inc(v_head_2030_);
lean_inc_ref(v_c_2025_);
v___x_2033_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2025_, v_head_2030_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_dec_ref_known(v___x_2033_, 1);
v_as_x27_2026_ = v_tail_2031_;
v_b_2027_ = v___x_2032_;
goto _start;
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v_a_2035_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2036_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_2037_ = l_Lasm_UI_Runtime_report(v___x_2036_, v_a_2035_);
lean_dec_ref(v___x_2037_);
v_as_x27_2026_ = v_tail_2031_;
v_b_2027_ = v___x_2032_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_2039_, lean_object* v_c_2040_){
_start:
{
lean_object* v___x_2042_; uint8_t v___x_2043_; lean_object* v___x_2044_; lean_object* v_model_2045_; lean_object* v_live_2046_; lean_object* v_next_2047_; lean_object* v_tables_2048_; uint8_t v_scheduled_2049_; lean_object* v_queue_2050_; uint8_t v_busy_2051_; lean_object* v_subs_2052_; lean_object* v_handlers_2053_; lean_object* v_nextSub_2054_; lean_object* v_touched_2055_; lean_object* v_ports_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2078_; 
v___x_2042_ = lean_box(0);
v___x_2043_ = 1;
v___x_2044_ = lean_st_ref_get(v___x_2039_);
v_model_2045_ = lean_ctor_get(v___x_2044_, 0);
v_live_2046_ = lean_ctor_get(v___x_2044_, 1);
v_next_2047_ = lean_ctor_get(v___x_2044_, 2);
v_tables_2048_ = lean_ctor_get(v___x_2044_, 3);
v_scheduled_2049_ = lean_ctor_get_uint8(v___x_2044_, sizeof(void*)*10 + 1);
v_queue_2050_ = lean_ctor_get(v___x_2044_, 4);
v_busy_2051_ = lean_ctor_get_uint8(v___x_2044_, sizeof(void*)*10 + 2);
v_subs_2052_ = lean_ctor_get(v___x_2044_, 5);
v_handlers_2053_ = lean_ctor_get(v___x_2044_, 6);
v_nextSub_2054_ = lean_ctor_get(v___x_2044_, 7);
v_touched_2055_ = lean_ctor_get(v___x_2044_, 8);
v_ports_2056_ = lean_ctor_get(v___x_2044_, 9);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2058_ = v___x_2044_;
v_isShared_2059_ = v_isSharedCheck_2078_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_ports_2056_);
lean_inc(v_touched_2055_);
lean_inc(v_nextSub_2054_);
lean_inc(v_handlers_2053_);
lean_inc(v_subs_2052_);
lean_inc(v_queue_2050_);
lean_inc(v_tables_2048_);
lean_inc(v_next_2047_);
lean_inc(v_live_2046_);
lean_inc(v_model_2045_);
lean_dec(v___x_2044_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2078_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; uint8_t v___x_2062_; 
v___x_2060_ = lean_unsigned_to_nat(0u);
v___x_2061_ = lean_array_get_size(v_queue_2050_);
v___x_2062_ = lean_nat_dec_lt(v___x_2060_, v___x_2061_);
if (v___x_2062_ == 0)
{
lean_object* v___x_2063_; 
lean_del_object(v___x_2058_);
lean_dec(v_ports_2056_);
lean_dec_ref(v_touched_2055_);
lean_dec(v_nextSub_2054_);
lean_dec_ref(v_handlers_2053_);
lean_dec_ref(v_subs_2052_);
lean_dec_ref(v_queue_2050_);
lean_dec_ref(v_tables_2048_);
lean_dec(v_next_2047_);
lean_dec(v_live_2046_);
lean_dec(v_model_2045_);
lean_dec_ref(v_c_2040_);
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2042_);
return v___x_2063_;
}
else
{
lean_object* v_app_2064_; lean_object* v_update_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v_fst_2068_; lean_object* v_snd_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2073_; 
v_app_2064_ = lean_ctor_get(v_c_2040_, 0);
v_update_2065_ = lean_ctor_get(v_app_2064_, 1);
v___x_2066_ = lean_array_fget_borrowed(v_queue_2050_, v___x_2060_);
lean_inc_ref(v_update_2065_);
lean_inc(v___x_2066_);
v___x_2067_ = lean_apply_2(v_update_2065_, v___x_2066_, v_model_2045_);
v_fst_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_fst_2068_);
v_snd_2069_ = lean_ctor_get(v___x_2067_, 1);
lean_inc(v_snd_2069_);
lean_dec_ref(v___x_2067_);
v___x_2070_ = lean_unsigned_to_nat(1u);
v___x_2071_ = l_Array_extract___redArg(v_queue_2050_, v___x_2070_, v___x_2061_);
lean_dec_ref(v_queue_2050_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 4, v___x_2071_);
lean_ctor_set(v___x_2058_, 0, v_fst_2068_);
v___x_2073_ = v___x_2058_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_fst_2068_);
lean_ctor_set(v_reuseFailAlloc_2077_, 1, v_live_2046_);
lean_ctor_set(v_reuseFailAlloc_2077_, 2, v_next_2047_);
lean_ctor_set(v_reuseFailAlloc_2077_, 3, v_tables_2048_);
lean_ctor_set(v_reuseFailAlloc_2077_, 4, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2077_, 5, v_subs_2052_);
lean_ctor_set(v_reuseFailAlloc_2077_, 6, v_handlers_2053_);
lean_ctor_set(v_reuseFailAlloc_2077_, 7, v_nextSub_2054_);
lean_ctor_set(v_reuseFailAlloc_2077_, 8, v_touched_2055_);
lean_ctor_set(v_reuseFailAlloc_2077_, 9, v_ports_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2077_, sizeof(void*)*10 + 1, v_scheduled_2049_);
lean_ctor_set_uint8(v_reuseFailAlloc_2077_, sizeof(void*)*10 + 2, v_busy_2051_);
v___x_2073_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
lean_ctor_set_uint8(v___x_2073_, sizeof(void*)*10, v___x_2043_);
v___x_2074_ = lean_st_ref_swap(v___x_2039_, v___x_2073_);
lean_dec(v___x_2074_);
lean_inc_ref(v_c_2040_);
v___x_2075_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2040_, v_snd_2069_, v___x_2042_);
lean_dec(v_snd_2069_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_dec_ref_known(v___x_2075_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_2040_);
return v___x_2075_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = lean_box(0);
v___x_2080_ = lean_unsigned_to_nat(16u);
v___x_2081_ = lean_mk_array(v___x_2080_, v___x_2079_);
return v___x_2081_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2082_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_2083_ = lean_unsigned_to_nat(0u);
v___x_2084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
lean_ctor_set(v___x_2084_, 1, v___x_2082_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_2085_, lean_object* v_c_2086_, lean_object* v_as_x27_2087_, lean_object* v_b_2088_){
_start:
{
if (lean_obj_tag(v_as_x27_2087_) == 0)
{
lean_object* v___x_2090_; 
lean_dec_ref(v_c_2086_);
lean_dec(v_v_2085_);
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v_b_2088_);
return v___x_2090_;
}
else
{
lean_object* v_head_2091_; lean_object* v_tail_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_head_2091_ = lean_ctor_get(v_as_x27_2087_, 0);
v_tail_2092_ = lean_ctor_get(v_as_x27_2087_, 1);
v___x_2093_ = lean_box(0);
v___x_2094_ = lean_unsigned_to_nat(1u);
v___x_2095_ = lean_mk_empty_array_with_capacity(v___x_2094_);
lean_inc(v_v_2085_);
v___x_2096_ = lean_array_push(v___x_2095_, v_v_2085_);
lean_inc(v_head_2091_);
v___x_2097_ = lean_apply_1(v_head_2091_, v___x_2096_);
if (lean_obj_tag(v___x_2097_) == 1)
{
lean_object* v_val_2098_; lean_object* v_message_2099_; lean_object* v___x_2100_; 
v_val_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_val_2098_);
lean_dec_ref_known(v___x_2097_, 1);
v_message_2099_ = lean_ctor_get(v_val_2098_, 0);
lean_inc(v_message_2099_);
lean_dec(v_val_2098_);
lean_inc_ref(v_c_2086_);
v___x_2100_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2086_, v_message_2099_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_dec_ref_known(v___x_2100_, 1);
v_as_x27_2087_ = v_tail_2092_;
v_b_2088_ = v___x_2093_;
goto _start;
}
else
{
lean_dec_ref(v_c_2086_);
lean_dec(v_v_2085_);
return v___x_2100_;
}
}
else
{
lean_dec(v___x_2097_);
v_as_x27_2087_ = v_tail_2092_;
v_b_2088_ = v___x_2093_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_2103_, lean_object* v_name_2104_, lean_object* v_c_2105_, lean_object* v_v_2106_){
_start:
{
lean_object* v___x_2108_; lean_object* v_subs_2109_; lean_object* v_handlers_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2108_ = lean_st_ref_get(v_ref_2103_);
v_subs_2109_ = lean_ctor_get(v___x_2108_, 5);
lean_inc_ref(v_subs_2109_);
v_handlers_2110_ = lean_ctor_get(v___x_2108_, 6);
lean_inc_ref(v_handlers_2110_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_name_2104_);
v___x_2112_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_2109_, v___x_2111_);
lean_dec_ref(v_subs_2109_);
if (lean_obj_tag(v___x_2112_) == 1)
{
lean_object* v_val_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v_val_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_val_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = lean_box(0);
v___x_2115_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2110_, v_val_2113_, v___x_2114_);
lean_dec(v_val_2113_);
lean_dec_ref(v_handlers_2110_);
v___x_2116_ = lean_box(0);
lean_inc_ref(v_c_2105_);
v___x_2117_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2106_, v_c_2105_, v___x_2115_, v___x_2116_);
lean_dec(v___x_2115_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v___x_2118_; 
lean_dec_ref_known(v___x_2117_, 1);
v___x_2118_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2105_);
lean_dec_ref(v_c_2105_);
return v___x_2118_;
}
else
{
lean_dec_ref(v_c_2105_);
return v___x_2117_;
}
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
lean_dec(v___x_2112_);
lean_dec_ref(v_handlers_2110_);
lean_dec(v_v_2106_);
lean_dec_ref(v_c_2105_);
v___x_2119_ = lean_box(0);
v___x_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
return v___x_2120_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_2121_, lean_object* v_name_2122_, lean_object* v_c_2123_, lean_object* v_v_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_2121_, v_name_2122_, v_c_2123_, v_v_2124_);
lean_dec(v_ref_2121_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_2127_, lean_object* v_name_2128_){
_start:
{
lean_object* v_ref_2130_; lean_object* v___f_2131_; lean_object* v___x_2132_; lean_object* v_model_2133_; lean_object* v_live_2134_; lean_object* v_next_2135_; lean_object* v_tables_2136_; uint8_t v_dirty_2137_; uint8_t v_scheduled_2138_; lean_object* v_queue_2139_; uint8_t v_busy_2140_; lean_object* v_subs_2141_; lean_object* v_handlers_2142_; lean_object* v_nextSub_2143_; lean_object* v_touched_2144_; lean_object* v_ports_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2165_; 
v_ref_2130_ = lean_ctor_get(v_c_2127_, 1);
lean_inc_n(v_ref_2130_, 2);
lean_inc_ref(v_name_2128_);
v___f_2131_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2131_, 0, v_ref_2130_);
lean_closure_set(v___f_2131_, 1, v_name_2128_);
lean_closure_set(v___f_2131_, 2, v_c_2127_);
v___x_2132_ = lean_st_ref_take(v_ref_2130_);
v_model_2133_ = lean_ctor_get(v___x_2132_, 0);
v_live_2134_ = lean_ctor_get(v___x_2132_, 1);
v_next_2135_ = lean_ctor_get(v___x_2132_, 2);
v_tables_2136_ = lean_ctor_get(v___x_2132_, 3);
v_dirty_2137_ = lean_ctor_get_uint8(v___x_2132_, sizeof(void*)*10);
v_scheduled_2138_ = lean_ctor_get_uint8(v___x_2132_, sizeof(void*)*10 + 1);
v_queue_2139_ = lean_ctor_get(v___x_2132_, 4);
v_busy_2140_ = lean_ctor_get_uint8(v___x_2132_, sizeof(void*)*10 + 2);
v_subs_2141_ = lean_ctor_get(v___x_2132_, 5);
v_handlers_2142_ = lean_ctor_get(v___x_2132_, 6);
v_nextSub_2143_ = lean_ctor_get(v___x_2132_, 7);
v_touched_2144_ = lean_ctor_get(v___x_2132_, 8);
v_ports_2145_ = lean_ctor_get(v___x_2132_, 9);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2147_ = v___x_2132_;
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_ports_2145_);
lean_inc(v_touched_2144_);
lean_inc(v_nextSub_2143_);
lean_inc(v_handlers_2142_);
lean_inc(v_subs_2141_);
lean_inc(v_queue_2139_);
lean_inc(v_tables_2136_);
lean_inc(v_next_2135_);
lean_inc(v_live_2134_);
lean_inc(v_model_2133_);
lean_dec(v___x_2132_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2149_; lean_object* v___x_2151_; 
lean_inc_ref(v_name_2128_);
v___x_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2149_, 0, v_name_2128_);
lean_ctor_set(v___x_2149_, 1, v_ports_2145_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 9, v___x_2149_);
v___x_2151_ = v___x_2147_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_model_2133_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_live_2134_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v_next_2135_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v_tables_2136_);
lean_ctor_set(v_reuseFailAlloc_2164_, 4, v_queue_2139_);
lean_ctor_set(v_reuseFailAlloc_2164_, 5, v_subs_2141_);
lean_ctor_set(v_reuseFailAlloc_2164_, 6, v_handlers_2142_);
lean_ctor_set(v_reuseFailAlloc_2164_, 7, v_nextSub_2143_);
lean_ctor_set(v_reuseFailAlloc_2164_, 8, v_touched_2144_);
lean_ctor_set(v_reuseFailAlloc_2164_, 9, v___x_2149_);
lean_ctor_set_uint8(v_reuseFailAlloc_2164_, sizeof(void*)*10, v_dirty_2137_);
lean_ctor_set_uint8(v_reuseFailAlloc_2164_, sizeof(void*)*10 + 1, v_scheduled_2138_);
lean_ctor_set_uint8(v_reuseFailAlloc_2164_, sizeof(void*)*10 + 2, v_busy_2140_);
v___x_2151_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_st_ref_put(v_ref_2130_, v___x_2151_);
lean_dec(v_ref_2130_);
v___x_2153_ = l_Lasm_UI_Mount_Raw_port(v_name_2128_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2155_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v___x_2153_, 1);
v___x_2155_ = l_Lasm_UI_Mount_Port_subscribe(v_a_2154_, v___f_2131_);
return v___x_2155_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v___f_2131_);
v_a_2156_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2153_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2153_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_2166_, lean_object* v_c_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_){
_start:
{
if (lean_obj_tag(v_a_2168_) == 0)
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec_ref(v_c_2167_);
v___x_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2171_, 0, v_a_2169_);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
return v___x_2172_;
}
else
{
lean_object* v_snd_2173_; lean_object* v_key_2174_; lean_object* v_value_2175_; lean_object* v_tail_2176_; lean_object* v_fst_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2247_; 
v_snd_2173_ = lean_ctor_get(v_a_2169_, 1);
lean_inc(v_snd_2173_);
v_key_2174_ = lean_ctor_get(v_a_2168_, 0);
lean_inc(v_key_2174_);
v_value_2175_ = lean_ctor_get(v_a_2168_, 1);
lean_inc(v_value_2175_);
v_tail_2176_ = lean_ctor_get(v_a_2168_, 2);
lean_inc(v_tail_2176_);
lean_dec_ref_known(v_a_2168_, 3);
v_fst_2177_ = lean_ctor_get(v_a_2169_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_a_2169_);
if (v_isSharedCheck_2247_ == 0)
{
lean_object* v_unused_2248_; 
v_unused_2248_ = lean_ctor_get(v_a_2169_, 1);
lean_dec(v_unused_2248_);
v___x_2179_ = v_a_2169_;
v_isShared_2180_ = v_isSharedCheck_2247_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_fst_2177_);
lean_dec(v_a_2169_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2247_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v_fst_2181_; lean_object* v_snd_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2246_; 
v_fst_2181_ = lean_ctor_get(v_snd_2173_, 0);
v_snd_2182_ = lean_ctor_get(v_snd_2173_, 1);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_snd_2173_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2184_ = v_snd_2173_;
v_isShared_2185_ = v_isSharedCheck_2246_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_snd_2182_);
lean_inc(v_fst_2181_);
lean_dec(v_snd_2173_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2246_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; 
lean_inc(v_key_2174_);
v___x_2186_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2177_, v_key_2174_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2187_ = lean_unsigned_to_nat(1u);
v___x_2188_ = lean_nat_add(v_snd_2182_, v___x_2187_);
lean_inc_n(v_snd_2182_, 2);
lean_inc(v_key_2174_);
v___x_2189_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2177_, v_key_2174_, v_snd_2182_);
v___x_2190_ = l_List_reverse___redArg(v_value_2175_);
v___x_2191_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2181_, v_snd_2182_, v___x_2190_);
if (lean_obj_tag(v_key_2174_) == 3)
{
lean_object* v_name_2192_; lean_object* v___x_2193_; lean_object* v_ports_2194_; uint8_t v___x_2195_; 
lean_dec(v_snd_2182_);
v_name_2192_ = lean_ctor_get(v_key_2174_, 0);
lean_inc_ref(v_name_2192_);
lean_dec_ref_known(v_key_2174_, 1);
v___x_2193_ = lean_st_ref_get(v___x_2166_);
v_ports_2194_ = lean_ctor_get(v___x_2193_, 9);
lean_inc(v_ports_2194_);
lean_dec(v___x_2193_);
v___x_2195_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2192_, v_ports_2194_);
lean_dec(v_ports_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; 
lean_inc_ref(v_c_2167_);
v___x_2196_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2167_, v_name_2192_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2198_; 
lean_dec_ref_known(v___x_2196_, 1);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2188_);
lean_ctor_set(v___x_2184_, 0, v___x_2191_);
v___x_2198_ = v___x_2184_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2191_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v___x_2188_);
v___x_2198_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2200_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v___x_2198_);
lean_ctor_set(v___x_2179_, 0, v___x_2189_);
v___x_2200_ = v___x_2179_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2189_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_a_2168_ = v_tail_2176_;
v_a_2169_ = v___x_2200_;
goto _start;
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
lean_dec_ref(v___x_2191_);
lean_dec_ref(v___x_2189_);
lean_dec(v___x_2188_);
lean_del_object(v___x_2184_);
lean_del_object(v___x_2179_);
lean_dec(v_tail_2176_);
lean_dec_ref(v_c_2167_);
v_a_2204_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2196_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2196_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v___x_2213_; 
lean_dec_ref(v_name_2192_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2188_);
lean_ctor_set(v___x_2184_, 0, v___x_2191_);
v___x_2213_ = v___x_2184_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v___x_2191_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v___x_2188_);
v___x_2213_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2215_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v___x_2213_);
lean_ctor_set(v___x_2179_, 0, v___x_2189_);
v___x_2215_ = v___x_2179_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2189_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2213_);
v___x_2215_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
v_a_2168_ = v_tail_2176_;
v_a_2169_ = v___x_2215_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2219_ = l_Lasm_UI_Runtime_specData(v_key_2174_);
v___x_2220_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2182_, v___x_2219_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v___x_2222_; 
lean_dec_ref_known(v___x_2220_, 1);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2188_);
lean_ctor_set(v___x_2184_, 0, v___x_2191_);
v___x_2222_ = v___x_2184_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2191_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v___x_2188_);
v___x_2222_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2224_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v___x_2222_);
lean_ctor_set(v___x_2179_, 0, v___x_2189_);
v___x_2224_ = v___x_2179_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2189_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v___x_2222_);
v___x_2224_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
v_a_2168_ = v_tail_2176_;
v_a_2169_ = v___x_2224_;
goto _start;
}
}
}
else
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2235_; 
lean_dec_ref(v___x_2191_);
lean_dec_ref(v___x_2189_);
lean_dec(v___x_2188_);
lean_del_object(v___x_2184_);
lean_del_object(v___x_2179_);
lean_dec(v_tail_2176_);
lean_dec_ref(v_c_2167_);
v_a_2228_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2230_ = v___x_2220_;
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2220_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2231_ == 0)
{
v___x_2233_ = v___x_2230_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_a_2228_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
}
else
{
lean_object* v_val_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
lean_dec(v_key_2174_);
v_val_2236_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_val_2236_);
lean_dec_ref_known(v___x_2186_, 1);
v___x_2237_ = l_List_reverse___redArg(v_value_2175_);
v___x_2238_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2181_, v_val_2236_, v___x_2237_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2238_);
v___x_2240_ = v___x_2184_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2238_);
lean_ctor_set(v_reuseFailAlloc_2245_, 1, v_snd_2182_);
v___x_2240_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2242_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v___x_2240_);
v___x_2242_ = v___x_2179_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_fst_2177_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
v_a_2168_ = v_tail_2176_;
v_a_2169_ = v___x_2242_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2249_, lean_object* v_c_2250_, lean_object* v_as_2251_, size_t v_sz_2252_, size_t v_i_2253_, lean_object* v_b_2254_){
_start:
{
uint8_t v___x_2256_; 
v___x_2256_ = lean_usize_dec_lt(v_i_2253_, v_sz_2252_);
if (v___x_2256_ == 0)
{
lean_object* v___x_2257_; 
lean_dec_ref(v_c_2250_);
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_b_2254_);
return v___x_2257_;
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2259_; 
v_a_2258_ = lean_array_uget_borrowed(v_as_2251_, v_i_2253_);
lean_inc(v_a_2258_);
lean_inc_ref(v_c_2250_);
v___x_2259_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2249_, v_c_2250_, v_a_2258_, v_b_2254_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2272_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2272_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2272_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
if (lean_obj_tag(v_a_2260_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; 
lean_dec_ref(v_c_2250_);
v_a_2264_ = lean_ctor_get(v_a_2260_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v_a_2260_, 1);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v_a_2264_);
v___x_2266_ = v___x_2262_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
else
{
lean_object* v_a_2268_; size_t v___x_2269_; size_t v___x_2270_; 
lean_del_object(v___x_2262_);
v_a_2268_ = lean_ctor_get(v_a_2260_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v_a_2260_, 1);
v___x_2269_ = ((size_t)1ULL);
v___x_2270_ = lean_usize_add(v_i_2253_, v___x_2269_);
v_i_2253_ = v___x_2270_;
v_b_2254_ = v_a_2268_;
goto _start;
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_dec_ref(v_c_2250_);
v_a_2273_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2259_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2259_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2281_){
_start:
{
lean_object* v_app_2283_; lean_object* v_ref_2284_; lean_object* v___x_2285_; lean_object* v_subscriptions_2286_; lean_object* v_model_2287_; lean_object* v_subs_2288_; lean_object* v_nextSub_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_app_2283_ = lean_ctor_get(v_c_2281_, 0);
v_ref_2284_ = lean_ctor_get(v_c_2281_, 1);
lean_inc(v_ref_2284_);
v___x_2285_ = lean_st_ref_get(v_ref_2284_);
v_subscriptions_2286_ = lean_ctor_get(v_app_2283_, 3);
v_model_2287_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_model_2287_);
v_subs_2288_ = lean_ctor_get(v___x_2285_, 5);
lean_inc_ref(v_subs_2288_);
v_nextSub_2289_ = lean_ctor_get(v___x_2285_, 7);
lean_inc(v_nextSub_2289_);
lean_dec(v___x_2285_);
lean_inc_ref(v_subscriptions_2286_);
v___x_2290_ = lean_apply_1(v_subscriptions_2286_, v_model_2287_);
v___x_2291_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2292_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2290_, v___x_2291_);
lean_dec(v___x_2290_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v_buckets_2294_; size_t v_sz_2295_; size_t v___x_2296_; lean_object* v___x_2297_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v_buckets_2294_ = lean_ctor_get(v_subs_2288_, 1);
lean_inc_ref(v_buckets_2294_);
v_sz_2295_ = lean_array_size(v_buckets_2294_);
v___x_2296_ = ((size_t)0ULL);
v___x_2297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2293_, v_buckets_2294_, v_sz_2295_, v___x_2296_, v_subs_2288_);
lean_dec_ref(v_buckets_2294_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; lean_object* v_buckets_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2351_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_a_2298_);
lean_dec_ref_known(v___x_2297_, 1);
v_buckets_2299_ = lean_ctor_get(v_a_2293_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_a_2293_);
if (v_isSharedCheck_2351_ == 0)
{
lean_object* v_unused_2352_; 
v_unused_2352_ = lean_ctor_get(v_a_2293_, 0);
lean_dec(v_unused_2352_);
v___x_2301_ = v_a_2293_;
v_isShared_2302_ = v_isSharedCheck_2351_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_buckets_2299_);
lean_dec(v_a_2293_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2351_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
lean_ctor_set(v___x_2301_, 1, v_nextSub_2289_);
lean_ctor_set(v___x_2301_, 0, v___x_2291_);
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v_nextSub_2289_);
v___x_2304_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2305_; size_t v_sz_2306_; lean_object* v___x_2307_; 
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v_a_2298_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v_sz_2306_ = lean_array_size(v_buckets_2299_);
v___x_2307_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2284_, v_c_2281_, v_buckets_2299_, v_sz_2306_, v___x_2296_, v___x_2305_);
lean_dec_ref(v_buckets_2299_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2341_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2310_ = v___x_2307_;
v_isShared_2311_ = v_isSharedCheck_2341_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2307_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2341_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_snd_2312_; lean_object* v_fst_2313_; lean_object* v_fst_2314_; lean_object* v_snd_2315_; lean_object* v___x_2316_; lean_object* v_model_2317_; lean_object* v_live_2318_; lean_object* v_next_2319_; lean_object* v_tables_2320_; uint8_t v_dirty_2321_; uint8_t v_scheduled_2322_; lean_object* v_queue_2323_; uint8_t v_busy_2324_; lean_object* v_touched_2325_; lean_object* v_ports_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2337_; 
v_snd_2312_ = lean_ctor_get(v_a_2308_, 1);
lean_inc(v_snd_2312_);
v_fst_2313_ = lean_ctor_get(v_a_2308_, 0);
lean_inc(v_fst_2313_);
lean_dec(v_a_2308_);
v_fst_2314_ = lean_ctor_get(v_snd_2312_, 0);
lean_inc(v_fst_2314_);
v_snd_2315_ = lean_ctor_get(v_snd_2312_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_snd_2312_);
v___x_2316_ = lean_st_ref_take(v_ref_2284_);
v_model_2317_ = lean_ctor_get(v___x_2316_, 0);
v_live_2318_ = lean_ctor_get(v___x_2316_, 1);
v_next_2319_ = lean_ctor_get(v___x_2316_, 2);
v_tables_2320_ = lean_ctor_get(v___x_2316_, 3);
v_dirty_2321_ = lean_ctor_get_uint8(v___x_2316_, sizeof(void*)*10);
v_scheduled_2322_ = lean_ctor_get_uint8(v___x_2316_, sizeof(void*)*10 + 1);
v_queue_2323_ = lean_ctor_get(v___x_2316_, 4);
v_busy_2324_ = lean_ctor_get_uint8(v___x_2316_, sizeof(void*)*10 + 2);
v_touched_2325_ = lean_ctor_get(v___x_2316_, 8);
v_ports_2326_ = lean_ctor_get(v___x_2316_, 9);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; lean_object* v_unused_2339_; lean_object* v_unused_2340_; 
v_unused_2338_ = lean_ctor_get(v___x_2316_, 7);
lean_dec(v_unused_2338_);
v_unused_2339_ = lean_ctor_get(v___x_2316_, 6);
lean_dec(v_unused_2339_);
v_unused_2340_ = lean_ctor_get(v___x_2316_, 5);
lean_dec(v_unused_2340_);
v___x_2328_ = v___x_2316_;
v_isShared_2329_ = v_isSharedCheck_2337_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_ports_2326_);
lean_inc(v_touched_2325_);
lean_inc(v_queue_2323_);
lean_inc(v_tables_2320_);
lean_inc(v_next_2319_);
lean_inc(v_live_2318_);
lean_inc(v_model_2317_);
lean_dec(v___x_2316_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2337_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 7, v_snd_2315_);
lean_ctor_set(v___x_2328_, 6, v_fst_2314_);
lean_ctor_set(v___x_2328_, 5, v_fst_2313_);
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_model_2317_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_live_2318_);
lean_ctor_set(v_reuseFailAlloc_2336_, 2, v_next_2319_);
lean_ctor_set(v_reuseFailAlloc_2336_, 3, v_tables_2320_);
lean_ctor_set(v_reuseFailAlloc_2336_, 4, v_queue_2323_);
lean_ctor_set(v_reuseFailAlloc_2336_, 5, v_fst_2313_);
lean_ctor_set(v_reuseFailAlloc_2336_, 6, v_fst_2314_);
lean_ctor_set(v_reuseFailAlloc_2336_, 7, v_snd_2315_);
lean_ctor_set(v_reuseFailAlloc_2336_, 8, v_touched_2325_);
lean_ctor_set(v_reuseFailAlloc_2336_, 9, v_ports_2326_);
lean_ctor_set_uint8(v_reuseFailAlloc_2336_, sizeof(void*)*10, v_dirty_2321_);
lean_ctor_set_uint8(v_reuseFailAlloc_2336_, sizeof(void*)*10 + 1, v_scheduled_2322_);
lean_ctor_set_uint8(v_reuseFailAlloc_2336_, sizeof(void*)*10 + 2, v_busy_2324_);
v___x_2331_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2332_ = lean_st_ref_put(v_ref_2284_, v___x_2331_);
lean_dec(v_ref_2284_);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 0, v___x_2332_);
v___x_2334_ = v___x_2310_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
lean_dec(v_ref_2284_);
v_a_2342_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2307_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2307_);
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
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2360_; 
lean_dec(v_a_2293_);
lean_dec(v_nextSub_2289_);
lean_dec(v_ref_2284_);
lean_dec_ref(v_c_2281_);
v_a_2353_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2355_ = v___x_2297_;
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2297_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2358_; 
if (v_isShared_2356_ == 0)
{
v___x_2358_ = v___x_2355_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_a_2353_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_dec(v_nextSub_2289_);
lean_dec_ref(v_subs_2288_);
lean_dec(v_ref_2284_);
lean_dec_ref(v_c_2281_);
v_a_2361_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2292_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2292_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2369_, lean_object* v_msg_2370_){
_start:
{
lean_object* v_ref_2372_; lean_object* v___x_2373_; lean_object* v_model_2374_; lean_object* v_live_2375_; lean_object* v_next_2376_; lean_object* v_tables_2377_; uint8_t v_dirty_2378_; uint8_t v_scheduled_2379_; lean_object* v_queue_2380_; uint8_t v_busy_2381_; lean_object* v_subs_2382_; lean_object* v_handlers_2383_; lean_object* v_nextSub_2384_; lean_object* v_touched_2385_; lean_object* v_ports_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2442_; 
v_ref_2372_ = lean_ctor_get(v_c_2369_, 1);
lean_inc(v_ref_2372_);
v___x_2373_ = lean_st_ref_take(v_ref_2372_);
v_model_2374_ = lean_ctor_get(v___x_2373_, 0);
v_live_2375_ = lean_ctor_get(v___x_2373_, 1);
v_next_2376_ = lean_ctor_get(v___x_2373_, 2);
v_tables_2377_ = lean_ctor_get(v___x_2373_, 3);
v_dirty_2378_ = lean_ctor_get_uint8(v___x_2373_, sizeof(void*)*10);
v_scheduled_2379_ = lean_ctor_get_uint8(v___x_2373_, sizeof(void*)*10 + 1);
v_queue_2380_ = lean_ctor_get(v___x_2373_, 4);
v_busy_2381_ = lean_ctor_get_uint8(v___x_2373_, sizeof(void*)*10 + 2);
v_subs_2382_ = lean_ctor_get(v___x_2373_, 5);
v_handlers_2383_ = lean_ctor_get(v___x_2373_, 6);
v_nextSub_2384_ = lean_ctor_get(v___x_2373_, 7);
v_touched_2385_ = lean_ctor_get(v___x_2373_, 8);
v_ports_2386_ = lean_ctor_get(v___x_2373_, 9);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2388_ = v___x_2373_;
v_isShared_2389_ = v_isSharedCheck_2442_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_ports_2386_);
lean_inc(v_touched_2385_);
lean_inc(v_nextSub_2384_);
lean_inc(v_handlers_2383_);
lean_inc(v_subs_2382_);
lean_inc(v_queue_2380_);
lean_inc(v_tables_2377_);
lean_inc(v_next_2376_);
lean_inc(v_live_2375_);
lean_inc(v_model_2374_);
lean_dec(v___x_2373_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2442_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2390_; lean_object* v___x_2392_; 
v___x_2390_ = lean_array_push(v_queue_2380_, v_msg_2370_);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 4, v___x_2390_);
v___x_2392_ = v___x_2388_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_model_2374_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v_live_2375_);
lean_ctor_set(v_reuseFailAlloc_2441_, 2, v_next_2376_);
lean_ctor_set(v_reuseFailAlloc_2441_, 3, v_tables_2377_);
lean_ctor_set(v_reuseFailAlloc_2441_, 4, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2441_, 5, v_subs_2382_);
lean_ctor_set(v_reuseFailAlloc_2441_, 6, v_handlers_2383_);
lean_ctor_set(v_reuseFailAlloc_2441_, 7, v_nextSub_2384_);
lean_ctor_set(v_reuseFailAlloc_2441_, 8, v_touched_2385_);
lean_ctor_set(v_reuseFailAlloc_2441_, 9, v_ports_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2441_, sizeof(void*)*10, v_dirty_2378_);
lean_ctor_set_uint8(v_reuseFailAlloc_2441_, sizeof(void*)*10 + 1, v_scheduled_2379_);
lean_ctor_set_uint8(v_reuseFailAlloc_2441_, sizeof(void*)*10 + 2, v_busy_2381_);
v___x_2392_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; uint8_t v_busy_2395_; 
v___x_2393_ = lean_st_ref_put(v_ref_2372_, v___x_2392_);
v___x_2394_ = lean_st_ref_get(v_ref_2372_);
v_busy_2395_ = lean_ctor_get_uint8(v___x_2394_, sizeof(void*)*10 + 2);
lean_dec(v___x_2394_);
if (v_busy_2395_ == 0)
{
lean_object* v_a_2397_; uint8_t v___x_2402_; lean_object* v___x_2403_; lean_object* v_model_2404_; lean_object* v_live_2405_; lean_object* v_next_2406_; lean_object* v_tables_2407_; uint8_t v_dirty_2408_; uint8_t v_scheduled_2409_; lean_object* v_queue_2410_; lean_object* v_subs_2411_; lean_object* v_handlers_2412_; lean_object* v_nextSub_2413_; lean_object* v_touched_2414_; lean_object* v_ports_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2438_; 
v___x_2402_ = 1;
v___x_2403_ = lean_st_ref_take(v_ref_2372_);
v_model_2404_ = lean_ctor_get(v___x_2403_, 0);
v_live_2405_ = lean_ctor_get(v___x_2403_, 1);
v_next_2406_ = lean_ctor_get(v___x_2403_, 2);
v_tables_2407_ = lean_ctor_get(v___x_2403_, 3);
v_dirty_2408_ = lean_ctor_get_uint8(v___x_2403_, sizeof(void*)*10);
v_scheduled_2409_ = lean_ctor_get_uint8(v___x_2403_, sizeof(void*)*10 + 1);
v_queue_2410_ = lean_ctor_get(v___x_2403_, 4);
v_subs_2411_ = lean_ctor_get(v___x_2403_, 5);
v_handlers_2412_ = lean_ctor_get(v___x_2403_, 6);
v_nextSub_2413_ = lean_ctor_get(v___x_2403_, 7);
v_touched_2414_ = lean_ctor_get(v___x_2403_, 8);
v_ports_2415_ = lean_ctor_get(v___x_2403_, 9);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2417_ = v___x_2403_;
v_isShared_2418_ = v_isSharedCheck_2438_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_ports_2415_);
lean_inc(v_touched_2414_);
lean_inc(v_nextSub_2413_);
lean_inc(v_handlers_2412_);
lean_inc(v_subs_2411_);
lean_inc(v_queue_2410_);
lean_inc(v_tables_2407_);
lean_inc(v_next_2406_);
lean_inc(v_live_2405_);
lean_inc(v_model_2404_);
lean_dec(v___x_2403_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2438_;
goto v_resetjp_2416_;
}
v___jp_2396_:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2398_ = lean_st_ref_take(v_ref_2372_);
v___x_2399_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2395_, v___x_2398_);
v___x_2400_ = lean_st_ref_put(v_ref_2372_, v___x_2399_);
lean_dec(v_ref_2372_);
v___x_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2401_, 0, v_a_2397_);
return v___x_2401_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_model_2404_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v_live_2405_);
lean_ctor_set(v_reuseFailAlloc_2437_, 2, v_next_2406_);
lean_ctor_set(v_reuseFailAlloc_2437_, 3, v_tables_2407_);
lean_ctor_set(v_reuseFailAlloc_2437_, 4, v_queue_2410_);
lean_ctor_set(v_reuseFailAlloc_2437_, 5, v_subs_2411_);
lean_ctor_set(v_reuseFailAlloc_2437_, 6, v_handlers_2412_);
lean_ctor_set(v_reuseFailAlloc_2437_, 7, v_nextSub_2413_);
lean_ctor_set(v_reuseFailAlloc_2437_, 8, v_touched_2414_);
lean_ctor_set(v_reuseFailAlloc_2437_, 9, v_ports_2415_);
lean_ctor_set_uint8(v_reuseFailAlloc_2437_, sizeof(void*)*10, v_dirty_2408_);
lean_ctor_set_uint8(v_reuseFailAlloc_2437_, sizeof(void*)*10 + 1, v_scheduled_2409_);
v___x_2420_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_ctor_set_uint8(v___x_2420_, sizeof(void*)*10 + 2, v___x_2402_);
v___x_2421_ = lean_st_ref_put(v_ref_2372_, v___x_2420_);
lean_inc_ref(v_c_2369_);
v___x_2422_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2372_, v_c_2369_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v___x_2423_; 
lean_dec_ref_known(v___x_2422_, 1);
v___x_2423_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2369_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2434_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2434_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2434_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2428_ = lean_st_ref_take(v_ref_2372_);
v___x_2429_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2395_, v___x_2428_);
v___x_2430_ = lean_st_ref_put(v_ref_2372_, v___x_2429_);
lean_dec(v_ref_2372_);
if (v_isShared_2427_ == 0)
{
v___x_2432_ = v___x_2426_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2424_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
else
{
lean_object* v_a_2435_; 
v_a_2435_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2423_, 1);
v_a_2397_ = v_a_2435_;
goto v___jp_2396_;
}
}
else
{
lean_object* v_a_2436_; 
lean_dec_ref(v_c_2369_);
v_a_2436_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2436_);
lean_dec_ref_known(v___x_2422_, 1);
v_a_2397_ = v_a_2436_;
goto v___jp_2396_;
}
}
}
}
else
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_dec(v_ref_2372_);
lean_dec_ref(v_c_2369_);
v___x_2439_ = lean_box(0);
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
return v___x_2440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2443_, lean_object* v_m_2444_){
_start:
{
lean_object* v___x_2446_; 
lean_inc_ref(v_c_2443_);
v___x_2446_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2443_, v_m_2444_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v___x_2447_; 
lean_dec_ref_known(v___x_2446_, 1);
v___x_2447_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2443_);
lean_dec_ref(v_c_2443_);
return v___x_2447_;
}
else
{
lean_dec_ref(v_c_2443_);
return v___x_2446_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2448_, lean_object* v_as_x27_2449_, lean_object* v_b_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2448_, v_as_x27_2449_, v_b_2450_);
lean_dec(v_as_x27_2449_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2453_, lean_object* v_c_2454_, lean_object* v_as_2455_, lean_object* v_sz_2456_, lean_object* v_i_2457_, lean_object* v_b_2458_, lean_object* v___y_2459_){
_start:
{
size_t v_sz_boxed_2460_; size_t v_i_boxed_2461_; lean_object* v_res_2462_; 
v_sz_boxed_2460_ = lean_unbox_usize(v_sz_2456_);
lean_dec(v_sz_2456_);
v_i_boxed_2461_ = lean_unbox_usize(v_i_2457_);
lean_dec(v_i_2457_);
v_res_2462_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2453_, v_c_2454_, v_as_2455_, v_sz_boxed_2460_, v_i_boxed_2461_, v_b_2458_);
lean_dec_ref(v_as_2455_);
lean_dec(v___x_2453_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2463_, lean_object* v_name_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2463_, v_name_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2467_, lean_object* v_c_2468_, lean_object* v_as_x27_2469_, lean_object* v_b_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2467_, v_c_2468_, v_as_x27_2469_, v_b_2470_);
lean_dec(v_as_x27_2469_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2473_, lean_object* v_c_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2473_, v_c_2474_);
lean_dec(v___x_2473_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2477_, lean_object* v_c_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2477_, v_c_2478_, v_a_2479_, v_a_2480_);
lean_dec(v___x_2477_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2483_, lean_object* v_a_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2483_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2486_, lean_object* v_msg_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2486_, v_msg_2487_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2490_, lean_object* v_e_2491_, lean_object* v_a_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2490_, v_e_2491_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2494_, lean_object* v_Model_2495_, lean_object* v_Msg_2496_, lean_object* v_c_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2497_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2500_, lean_object* v_Model_2501_, lean_object* v_Msg_2502_, lean_object* v_c_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2500_, v_Model_2501_, v_Msg_2502_, v_c_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2506_, lean_object* v_Model_2507_, lean_object* v_Msg_2508_, lean_object* v_c_2509_, lean_object* v_name_2510_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2509_, v_name_2510_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2513_, lean_object* v_Model_2514_, lean_object* v_Msg_2515_, lean_object* v_c_2516_, lean_object* v_name_2517_, lean_object* v_a_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2513_, v_Model_2514_, v_Msg_2515_, v_c_2516_, v_name_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2520_, lean_object* v_Model_2521_, lean_object* v_Msg_2522_, lean_object* v_c_2523_, lean_object* v_msg_2524_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2523_, v_msg_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2527_, lean_object* v_Model_2528_, lean_object* v_Msg_2529_, lean_object* v_c_2530_, lean_object* v_msg_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lasm_UI_Runtime_deliver(v_Flags_2527_, v_Model_2528_, v_Msg_2529_, v_c_2530_, v_msg_2531_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2534_, lean_object* v_Model_2535_, lean_object* v_Msg_2536_, lean_object* v_c_2537_, lean_object* v_e_2538_){
_start:
{
lean_object* v___x_2540_; 
v___x_2540_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2537_, v_e_2538_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2541_, lean_object* v_Model_2542_, lean_object* v_Msg_2543_, lean_object* v_c_2544_, lean_object* v_e_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lasm_UI_Runtime_perform(v_Flags_2541_, v_Model_2542_, v_Msg_2543_, v_c_2544_, v_e_2545_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2548_, lean_object* v_m_2549_, lean_object* v_a_2550_, lean_object* v_fallback_2551_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2549_, v_a_2550_, v_fallback_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2553_, lean_object* v_m_2554_, lean_object* v_a_2555_, lean_object* v_fallback_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2553_, v_m_2554_, v_a_2555_, v_fallback_2556_);
lean_dec(v_fallback_2556_);
lean_dec_ref(v_m_2554_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2558_, lean_object* v_m_2559_, lean_object* v_a_2560_, lean_object* v_b_2561_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2559_, v_a_2560_, v_b_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2563_, lean_object* v_as_2564_, lean_object* v_as_x27_2565_, lean_object* v_b_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2565_, v_b_2566_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2570_, lean_object* v_as_2571_, lean_object* v_as_x27_2572_, lean_object* v_b_2573_, lean_object* v_a_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2570_, v_as_2571_, v_as_x27_2572_, v_b_2573_, v_a_2574_);
lean_dec(v_as_x27_2572_);
lean_dec(v_as_2571_);
return v_res_2576_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2577_, lean_object* v_m_2578_, lean_object* v_a_2579_){
_start:
{
uint8_t v___x_2580_; 
v___x_2580_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2578_, v_a_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2581_, lean_object* v_m_2582_, lean_object* v_a_2583_){
_start:
{
uint8_t v_res_2584_; lean_object* v_r_2585_; 
v_res_2584_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2581_, v_m_2582_, v_a_2583_);
lean_dec_ref(v_m_2582_);
v_r_2585_ = lean_box(v_res_2584_);
return v_r_2585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2586_, lean_object* v_m_2587_, lean_object* v_a_2588_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2587_, v_a_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_){
_start:
{
lean_object* v___x_2595_; 
v___x_2595_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2591_, v_a_2592_, v_a_2593_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2596_, v_a_2597_, v_a_2598_, v_a_2599_);
lean_dec_ref(v_a_2597_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2602_, lean_object* v_m_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2603_, v_a_2604_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2606_, lean_object* v_m_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2606_, v_m_2607_, v_a_2608_);
lean_dec_ref(v_m_2607_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2610_, lean_object* v_Model_2611_, lean_object* v___x_2612_, lean_object* v_Flags_2613_, lean_object* v_c_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2612_, v_c_2614_, v_a_2615_, v_a_2616_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2619_, lean_object* v_Model_2620_, lean_object* v___x_2621_, lean_object* v_Flags_2622_, lean_object* v_c_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2619_, v_Model_2620_, v___x_2621_, v_Flags_2622_, v_c_2623_, v_a_2624_, v_a_2625_);
lean_dec(v___x_2621_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2628_, lean_object* v_a_2629_, lean_object* v_as_2630_, size_t v_sz_2631_, size_t v_i_2632_, lean_object* v_b_2633_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2629_, v_as_2630_, v_sz_2631_, v_i_2632_, v_b_2633_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2636_, lean_object* v_a_2637_, lean_object* v_as_2638_, lean_object* v_sz_2639_, lean_object* v_i_2640_, lean_object* v_b_2641_, lean_object* v___y_2642_){
_start:
{
size_t v_sz_boxed_2643_; size_t v_i_boxed_2644_; lean_object* v_res_2645_; 
v_sz_boxed_2643_ = lean_unbox_usize(v_sz_2639_);
lean_dec(v_sz_2639_);
v_i_boxed_2644_ = lean_unbox_usize(v_i_2640_);
lean_dec(v_i_2640_);
v_res_2645_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2636_, v_a_2637_, v_as_2638_, v_sz_boxed_2643_, v_i_boxed_2644_, v_b_2641_);
lean_dec_ref(v_as_2638_);
lean_dec_ref(v_a_2637_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2646_, lean_object* v_Model_2647_, lean_object* v___x_2648_, lean_object* v_Flags_2649_, lean_object* v_c_2650_, lean_object* v_as_2651_, size_t v_sz_2652_, size_t v_i_2653_, lean_object* v_b_2654_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2648_, v_c_2650_, v_as_2651_, v_sz_2652_, v_i_2653_, v_b_2654_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2657_, lean_object* v_Model_2658_, lean_object* v___x_2659_, lean_object* v_Flags_2660_, lean_object* v_c_2661_, lean_object* v_as_2662_, lean_object* v_sz_2663_, lean_object* v_i_2664_, lean_object* v_b_2665_, lean_object* v___y_2666_){
_start:
{
size_t v_sz_boxed_2667_; size_t v_i_boxed_2668_; lean_object* v_res_2669_; 
v_sz_boxed_2667_ = lean_unbox_usize(v_sz_2663_);
lean_dec(v_sz_2663_);
v_i_boxed_2668_ = lean_unbox_usize(v_i_2664_);
lean_dec(v_i_2664_);
v_res_2669_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2657_, v_Model_2658_, v___x_2659_, v_Flags_2660_, v_c_2661_, v_as_2662_, v_sz_boxed_2667_, v_i_boxed_2668_, v_b_2665_);
lean_dec_ref(v_as_2662_);
lean_dec(v___x_2659_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2670_, lean_object* v_m_2671_, lean_object* v_a_2672_, lean_object* v_fallback_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2671_, v_a_2672_, v_fallback_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2675_, lean_object* v_m_2676_, lean_object* v_a_2677_, lean_object* v_fallback_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2675_, v_m_2676_, v_a_2677_, v_fallback_2678_);
lean_dec(v_fallback_2678_);
lean_dec(v_a_2677_);
lean_dec_ref(v_m_2676_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2680_, lean_object* v_v_2681_, lean_object* v_Flags_2682_, lean_object* v_Model_2683_, lean_object* v_c_2684_, lean_object* v_as_2685_, lean_object* v_as_x27_2686_, lean_object* v_b_2687_, lean_object* v_a_2688_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2681_, v_c_2684_, v_as_x27_2686_, v_b_2687_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2691_, lean_object* v_v_2692_, lean_object* v_Flags_2693_, lean_object* v_Model_2694_, lean_object* v_c_2695_, lean_object* v_as_2696_, lean_object* v_as_x27_2697_, lean_object* v_b_2698_, lean_object* v_a_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2691_, v_v_2692_, v_Flags_2693_, v_Model_2694_, v_c_2695_, v_as_2696_, v_as_x27_2697_, v_b_2698_, v_a_2699_);
lean_dec(v_as_x27_2697_);
lean_dec(v_as_2696_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2702_, lean_object* v_Flags_2703_, lean_object* v_Model_2704_, lean_object* v_c_2705_, lean_object* v_as_2706_, lean_object* v_as_x27_2707_, lean_object* v_b_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2705_, v_as_x27_2707_, v_b_2708_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2712_, lean_object* v_Flags_2713_, lean_object* v_Model_2714_, lean_object* v_c_2715_, lean_object* v_as_2716_, lean_object* v_as_x27_2717_, lean_object* v_b_2718_, lean_object* v_a_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2712_, v_Flags_2713_, v_Model_2714_, v_c_2715_, v_as_2716_, v_as_x27_2717_, v_b_2718_, v_a_2719_);
lean_dec(v_as_x27_2717_);
lean_dec(v_as_2716_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2722_, lean_object* v_Msg_2723_, lean_object* v___x_2724_, lean_object* v_Flags_2725_, lean_object* v_c_2726_, lean_object* v_inst_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2724_, v_c_2726_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2731_, lean_object* v_Msg_2732_, lean_object* v___x_2733_, lean_object* v_Flags_2734_, lean_object* v_c_2735_, lean_object* v_inst_2736_, lean_object* v_a_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2731_, v_Msg_2732_, v___x_2733_, v_Flags_2734_, v_c_2735_, v_inst_2736_, v_a_2737_);
lean_dec(v___x_2733_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2740_, lean_object* v_a_2741_, lean_object* v_fallback_2742_, lean_object* v_x_2743_){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2741_, v_fallback_2742_, v_x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2745_, lean_object* v_a_2746_, lean_object* v_fallback_2747_, lean_object* v_x_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2745_, v_a_2746_, v_fallback_2747_, v_x_2748_);
lean_dec(v_fallback_2747_);
return v_res_2749_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2750_, lean_object* v_a_2751_, lean_object* v_x_2752_){
_start:
{
uint8_t v___x_2753_; 
v___x_2753_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2751_, v_x_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2754_, lean_object* v_a_2755_, lean_object* v_x_2756_){
_start:
{
uint8_t v_res_2757_; lean_object* v_r_2758_; 
v_res_2757_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2754_, v_a_2755_, v_x_2756_);
v_r_2758_ = lean_box(v_res_2757_);
return v_r_2758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2759_, lean_object* v_data_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2762_, lean_object* v_a_2763_, lean_object* v_b_2764_, lean_object* v_x_2765_){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2763_, v_b_2764_, v_x_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2767_, lean_object* v_a_2768_, lean_object* v_x_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2768_, v_x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2771_, lean_object* v_a_2772_, lean_object* v_x_2773_){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2772_, v_x_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2775_, lean_object* v_a_2776_, lean_object* v_fallback_2777_, lean_object* v_x_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2776_, v_fallback_2777_, v_x_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2780_, lean_object* v_a_2781_, lean_object* v_fallback_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2780_, v_a_2781_, v_fallback_2782_, v_x_2783_);
lean_dec(v_x_2783_);
lean_dec(v_fallback_2782_);
lean_dec(v_a_2781_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2785_, lean_object* v_i_2786_, lean_object* v_source_2787_, lean_object* v_target_2788_){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2786_, v_source_2787_, v_target_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2790_, lean_object* v_x_2791_, lean_object* v_x_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2791_, v_x_2792_);
return v___x_2793_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = lean_box(0);
v___x_2797_ = lean_unsigned_to_nat(16u);
v___x_2798_ = lean_mk_array(v___x_2797_, v___x_2796_);
return v___x_2798_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2799_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
lean_ctor_set(v___x_2801_, 1, v___x_2799_);
return v___x_2801_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
lean_ctor_set(v___x_2803_, 2, v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2804_){
_start:
{
lean_object* v_app_2806_; lean_object* v_ref_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2918_; 
v_app_2806_ = lean_ctor_get(v_c_2804_, 0);
v_ref_2807_ = lean_ctor_get(v_c_2804_, 1);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_c_2804_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2809_ = v_c_2804_;
v_isShared_2810_ = v_isSharedCheck_2918_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_ref_2807_);
lean_inc(v_app_2806_);
lean_dec(v_c_2804_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2918_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2811_; lean_object* v_model_2812_; lean_object* v_live_2813_; lean_object* v_next_2814_; lean_object* v_tables_2815_; uint8_t v_dirty_2816_; uint8_t v_scheduled_2817_; lean_object* v_queue_2818_; uint8_t v_busy_2819_; lean_object* v_subs_2820_; lean_object* v_handlers_2821_; lean_object* v_nextSub_2822_; lean_object* v_touched_2823_; lean_object* v_ports_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2917_; 
v___x_2811_ = lean_st_ref_take(v_ref_2807_);
v_model_2812_ = lean_ctor_get(v___x_2811_, 0);
v_live_2813_ = lean_ctor_get(v___x_2811_, 1);
v_next_2814_ = lean_ctor_get(v___x_2811_, 2);
v_tables_2815_ = lean_ctor_get(v___x_2811_, 3);
v_dirty_2816_ = lean_ctor_get_uint8(v___x_2811_, sizeof(void*)*10);
v_scheduled_2817_ = lean_ctor_get_uint8(v___x_2811_, sizeof(void*)*10 + 1);
v_queue_2818_ = lean_ctor_get(v___x_2811_, 4);
v_busy_2819_ = lean_ctor_get_uint8(v___x_2811_, sizeof(void*)*10 + 2);
v_subs_2820_ = lean_ctor_get(v___x_2811_, 5);
v_handlers_2821_ = lean_ctor_get(v___x_2811_, 6);
v_nextSub_2822_ = lean_ctor_get(v___x_2811_, 7);
v_touched_2823_ = lean_ctor_get(v___x_2811_, 8);
v_ports_2824_ = lean_ctor_get(v___x_2811_, 9);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2826_ = v___x_2811_;
v_isShared_2827_ = v_isSharedCheck_2917_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_ports_2824_);
lean_inc(v_touched_2823_);
lean_inc(v_nextSub_2822_);
lean_inc(v_handlers_2821_);
lean_inc(v_subs_2820_);
lean_inc(v_queue_2818_);
lean_inc(v_tables_2815_);
lean_inc(v_next_2814_);
lean_inc(v_live_2813_);
lean_inc(v_model_2812_);
lean_dec(v___x_2811_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2917_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2832_; 
v___x_2828_ = lean_box(0);
v___x_2829_ = lean_unsigned_to_nat(0u);
v___x_2830_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2814_);
lean_inc(v_model_2812_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 8, v___x_2830_);
lean_ctor_set(v___x_2826_, 1, v___x_2828_);
v___x_2832_ = v___x_2826_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_model_2812_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v___x_2828_);
lean_ctor_set(v_reuseFailAlloc_2916_, 2, v_next_2814_);
lean_ctor_set(v_reuseFailAlloc_2916_, 3, v_tables_2815_);
lean_ctor_set(v_reuseFailAlloc_2916_, 4, v_queue_2818_);
lean_ctor_set(v_reuseFailAlloc_2916_, 5, v_subs_2820_);
lean_ctor_set(v_reuseFailAlloc_2916_, 6, v_handlers_2821_);
lean_ctor_set(v_reuseFailAlloc_2916_, 7, v_nextSub_2822_);
lean_ctor_set(v_reuseFailAlloc_2916_, 8, v___x_2830_);
lean_ctor_set(v_reuseFailAlloc_2916_, 9, v_ports_2824_);
lean_ctor_set_uint8(v_reuseFailAlloc_2916_, sizeof(void*)*10, v_dirty_2816_);
lean_ctor_set_uint8(v_reuseFailAlloc_2916_, sizeof(void*)*10 + 1, v_scheduled_2817_);
lean_ctor_set_uint8(v_reuseFailAlloc_2916_, sizeof(void*)*10 + 2, v_busy_2819_);
v___x_2832_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; 
v___x_2833_ = lean_st_ref_put(v_ref_2807_, v___x_2832_);
if (v_dirty_2816_ == 0)
{
lean_object* v___x_2834_; lean_object* v_model_2835_; lean_object* v_next_2836_; lean_object* v_tables_2837_; uint8_t v_dirty_2838_; lean_object* v_queue_2839_; uint8_t v_busy_2840_; lean_object* v_subs_2841_; lean_object* v_handlers_2842_; lean_object* v_nextSub_2843_; lean_object* v_touched_2844_; lean_object* v_ports_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2855_; 
lean_dec_ref(v_touched_2823_);
lean_dec(v_next_2814_);
lean_dec(v_model_2812_);
lean_del_object(v___x_2809_);
lean_dec_ref(v_app_2806_);
v___x_2834_ = lean_st_ref_take(v_ref_2807_);
v_model_2835_ = lean_ctor_get(v___x_2834_, 0);
v_next_2836_ = lean_ctor_get(v___x_2834_, 2);
v_tables_2837_ = lean_ctor_get(v___x_2834_, 3);
v_dirty_2838_ = lean_ctor_get_uint8(v___x_2834_, sizeof(void*)*10);
v_queue_2839_ = lean_ctor_get(v___x_2834_, 4);
v_busy_2840_ = lean_ctor_get_uint8(v___x_2834_, sizeof(void*)*10 + 2);
v_subs_2841_ = lean_ctor_get(v___x_2834_, 5);
v_handlers_2842_ = lean_ctor_get(v___x_2834_, 6);
v_nextSub_2843_ = lean_ctor_get(v___x_2834_, 7);
v_touched_2844_ = lean_ctor_get(v___x_2834_, 8);
v_ports_2845_ = lean_ctor_get(v___x_2834_, 9);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; 
v_unused_2856_ = lean_ctor_get(v___x_2834_, 1);
lean_dec(v_unused_2856_);
v___x_2847_ = v___x_2834_;
v_isShared_2848_ = v_isSharedCheck_2855_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_ports_2845_);
lean_inc(v_touched_2844_);
lean_inc(v_nextSub_2843_);
lean_inc(v_handlers_2842_);
lean_inc(v_subs_2841_);
lean_inc(v_queue_2839_);
lean_inc(v_tables_2837_);
lean_inc(v_next_2836_);
lean_inc(v_model_2835_);
lean_dec(v___x_2834_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2855_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 1, v_live_2813_);
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_model_2835_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_live_2813_);
lean_ctor_set(v_reuseFailAlloc_2854_, 2, v_next_2836_);
lean_ctor_set(v_reuseFailAlloc_2854_, 3, v_tables_2837_);
lean_ctor_set(v_reuseFailAlloc_2854_, 4, v_queue_2839_);
lean_ctor_set(v_reuseFailAlloc_2854_, 5, v_subs_2841_);
lean_ctor_set(v_reuseFailAlloc_2854_, 6, v_handlers_2842_);
lean_ctor_set(v_reuseFailAlloc_2854_, 7, v_nextSub_2843_);
lean_ctor_set(v_reuseFailAlloc_2854_, 8, v_touched_2844_);
lean_ctor_set(v_reuseFailAlloc_2854_, 9, v_ports_2845_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*10, v_dirty_2838_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*10 + 2, v_busy_2840_);
v___x_2850_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
lean_ctor_set_uint8(v___x_2850_, sizeof(void*)*10 + 1, v_dirty_2816_);
v___x_2851_ = lean_st_ref_put(v_ref_2807_, v___x_2850_);
lean_dec(v_ref_2807_);
v___x_2852_ = l_ByteArray_empty;
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
return v___x_2853_;
}
}
}
else
{
lean_object* v_view_2857_; lean_object* v___x_2858_; lean_object* v___x_2860_; 
v_view_2857_ = lean_ctor_get(v_app_2806_, 2);
lean_inc_ref(v_view_2857_);
lean_dec_ref(v_app_2806_);
v___x_2858_ = lean_apply_1(v_view_2857_, v_model_2812_);
if (v_isShared_2810_ == 0)
{
lean_ctor_set_tag(v___x_2809_, 1);
lean_ctor_set(v___x_2809_, 1, v___x_2828_);
lean_ctor_set(v___x_2809_, 0, v___x_2858_);
v___x_2860_ = v___x_2809_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v___x_2858_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v___x_2828_);
v___x_2860_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; lean_object* v_ops_2862_; lean_object* v_live_2863_; lean_object* v_next_2864_; uint8_t v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v_model_2868_; lean_object* v_live_2869_; lean_object* v_next_2870_; lean_object* v_tables_2871_; uint8_t v_dirty_2872_; uint8_t v_scheduled_2873_; lean_object* v_queue_2874_; uint8_t v_busy_2875_; lean_object* v_subs_2876_; lean_object* v_handlers_2877_; lean_object* v_nextSub_2878_; lean_object* v_touched_2879_; lean_object* v_ports_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2914_; 
v___x_2861_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_live_2813_, v___x_2860_, v_next_2814_);
v_ops_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc_ref(v_ops_2862_);
v_live_2863_ = lean_ctor_get(v___x_2861_, 1);
lean_inc_n(v_live_2863_, 2);
v_next_2864_ = lean_ctor_get(v___x_2861_, 2);
lean_inc(v_next_2864_);
lean_dec_ref(v___x_2861_);
v___x_2865_ = 0;
v___x_2866_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2863_, v_touched_2823_);
lean_dec_ref(v_touched_2823_);
v___x_2867_ = lean_st_ref_take(v_ref_2807_);
v_model_2868_ = lean_ctor_get(v___x_2867_, 0);
v_live_2869_ = lean_ctor_get(v___x_2867_, 1);
v_next_2870_ = lean_ctor_get(v___x_2867_, 2);
v_tables_2871_ = lean_ctor_get(v___x_2867_, 3);
v_dirty_2872_ = lean_ctor_get_uint8(v___x_2867_, sizeof(void*)*10);
v_scheduled_2873_ = lean_ctor_get_uint8(v___x_2867_, sizeof(void*)*10 + 1);
v_queue_2874_ = lean_ctor_get(v___x_2867_, 4);
v_busy_2875_ = lean_ctor_get_uint8(v___x_2867_, sizeof(void*)*10 + 2);
v_subs_2876_ = lean_ctor_get(v___x_2867_, 5);
v_handlers_2877_ = lean_ctor_get(v___x_2867_, 6);
v_nextSub_2878_ = lean_ctor_get(v___x_2867_, 7);
v_touched_2879_ = lean_ctor_get(v___x_2867_, 8);
v_ports_2880_ = lean_ctor_get(v___x_2867_, 9);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2882_ = v___x_2867_;
v_isShared_2883_ = v_isSharedCheck_2914_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_ports_2880_);
lean_inc(v_touched_2879_);
lean_inc(v_nextSub_2878_);
lean_inc(v_handlers_2877_);
lean_inc(v_subs_2876_);
lean_inc(v_queue_2874_);
lean_inc(v_tables_2871_);
lean_inc(v_next_2870_);
lean_inc(v_live_2869_);
lean_inc(v_model_2868_);
lean_dec(v___x_2867_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2914_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2884_; lean_object* v___x_2886_; 
v___x_2884_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 3, v___x_2884_);
v___x_2886_ = v___x_2882_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_model_2868_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v_live_2869_);
lean_ctor_set(v_reuseFailAlloc_2913_, 2, v_next_2870_);
lean_ctor_set(v_reuseFailAlloc_2913_, 3, v___x_2884_);
lean_ctor_set(v_reuseFailAlloc_2913_, 4, v_queue_2874_);
lean_ctor_set(v_reuseFailAlloc_2913_, 5, v_subs_2876_);
lean_ctor_set(v_reuseFailAlloc_2913_, 6, v_handlers_2877_);
lean_ctor_set(v_reuseFailAlloc_2913_, 7, v_nextSub_2878_);
lean_ctor_set(v_reuseFailAlloc_2913_, 8, v_touched_2879_);
lean_ctor_set(v_reuseFailAlloc_2913_, 9, v_ports_2880_);
lean_ctor_set_uint8(v_reuseFailAlloc_2913_, sizeof(void*)*10, v_dirty_2872_);
lean_ctor_set_uint8(v_reuseFailAlloc_2913_, sizeof(void*)*10 + 1, v_scheduled_2873_);
lean_ctor_set_uint8(v_reuseFailAlloc_2913_, sizeof(void*)*10 + 2, v_busy_2875_);
v___x_2886_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v_fst_2890_; lean_object* v_snd_2891_; lean_object* v___x_2892_; lean_object* v_model_2893_; lean_object* v_queue_2894_; uint8_t v_busy_2895_; lean_object* v_subs_2896_; lean_object* v_handlers_2897_; lean_object* v_nextSub_2898_; lean_object* v_touched_2899_; lean_object* v_ports_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2909_; 
v___x_2887_ = lean_st_ref_put(v_ref_2807_, v___x_2886_);
v___x_2888_ = l_Array_append___redArg(v_ops_2862_, v___x_2866_);
lean_dec_ref(v___x_2866_);
v___x_2889_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2871_, v___x_2888_, v___x_2829_);
lean_dec_ref(v___x_2888_);
v_fst_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_fst_2890_);
v_snd_2891_ = lean_ctor_get(v___x_2889_, 1);
lean_inc(v_snd_2891_);
lean_dec_ref(v___x_2889_);
v___x_2892_ = lean_st_ref_take(v_ref_2807_);
v_model_2893_ = lean_ctor_get(v___x_2892_, 0);
v_queue_2894_ = lean_ctor_get(v___x_2892_, 4);
v_busy_2895_ = lean_ctor_get_uint8(v___x_2892_, sizeof(void*)*10 + 2);
v_subs_2896_ = lean_ctor_get(v___x_2892_, 5);
v_handlers_2897_ = lean_ctor_get(v___x_2892_, 6);
v_nextSub_2898_ = lean_ctor_get(v___x_2892_, 7);
v_touched_2899_ = lean_ctor_get(v___x_2892_, 8);
v_ports_2900_ = lean_ctor_get(v___x_2892_, 9);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2909_ == 0)
{
lean_object* v_unused_2910_; lean_object* v_unused_2911_; lean_object* v_unused_2912_; 
v_unused_2910_ = lean_ctor_get(v___x_2892_, 3);
lean_dec(v_unused_2910_);
v_unused_2911_ = lean_ctor_get(v___x_2892_, 2);
lean_dec(v_unused_2911_);
v_unused_2912_ = lean_ctor_get(v___x_2892_, 1);
lean_dec(v_unused_2912_);
v___x_2902_ = v___x_2892_;
v_isShared_2903_ = v_isSharedCheck_2909_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_ports_2900_);
lean_inc(v_touched_2899_);
lean_inc(v_nextSub_2898_);
lean_inc(v_handlers_2897_);
lean_inc(v_subs_2896_);
lean_inc(v_queue_2894_);
lean_inc(v_model_2893_);
lean_dec(v___x_2892_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2909_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 3, v_snd_2891_);
lean_ctor_set(v___x_2902_, 2, v_next_2864_);
lean_ctor_set(v___x_2902_, 1, v_live_2863_);
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_model_2893_);
lean_ctor_set(v_reuseFailAlloc_2908_, 1, v_live_2863_);
lean_ctor_set(v_reuseFailAlloc_2908_, 2, v_next_2864_);
lean_ctor_set(v_reuseFailAlloc_2908_, 3, v_snd_2891_);
lean_ctor_set(v_reuseFailAlloc_2908_, 4, v_queue_2894_);
lean_ctor_set(v_reuseFailAlloc_2908_, 5, v_subs_2896_);
lean_ctor_set(v_reuseFailAlloc_2908_, 6, v_handlers_2897_);
lean_ctor_set(v_reuseFailAlloc_2908_, 7, v_nextSub_2898_);
lean_ctor_set(v_reuseFailAlloc_2908_, 8, v_touched_2899_);
lean_ctor_set(v_reuseFailAlloc_2908_, 9, v_ports_2900_);
lean_ctor_set_uint8(v_reuseFailAlloc_2908_, sizeof(void*)*10 + 2, v_busy_2895_);
v___x_2905_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; 
lean_ctor_set_uint8(v___x_2905_, sizeof(void*)*10, v___x_2865_);
lean_ctor_set_uint8(v___x_2905_, sizeof(void*)*10 + 1, v___x_2865_);
v___x_2906_ = lean_st_ref_put(v_ref_2807_, v___x_2905_);
lean_dec(v_ref_2807_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_fst_2890_);
return v___x_2907_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2919_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2922_, lean_object* v_Model_2923_, lean_object* v_Msg_2924_, lean_object* v_c_2925_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2925_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2928_, lean_object* v_Model_2929_, lean_object* v_Msg_2930_, lean_object* v_c_2931_, lean_object* v_a_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Lasm_UI_Runtime_frame(v_Flags_2928_, v_Model_2929_, v_Msg_2930_, v_c_2931_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2934_, lean_object* v_____r_2935_, lean_object* v_levels_2936_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2938_ = lean_unsigned_to_nat(2u);
v___x_2939_ = lean_nat_add(v_snd_2934_, v___x_2938_);
v___x_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2940_, 0, v_levels_2936_);
lean_ctor_set(v___x_2940_, 1, v___x_2939_);
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
v___x_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2943_, lean_object* v_____r_2944_, lean_object* v_levels_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2943_, v_____r_2944_, v_levels_2945_);
lean_dec(v_snd_2943_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2948_, lean_object* v_fst_2949_, lean_object* v_x_2950_){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = lean_box(0);
v___x_2953_ = lean_apply_3(v___f_2948_, v___x_2952_, v_fst_2949_, lean_box(0));
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2954_, lean_object* v_fst_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2954_, v_fst_2955_, v_x_2956_);
lean_dec(v_x_2956_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2959_, lean_object* v_fst_2960_, lean_object* v_x_2961_){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2963_ = lean_box(0);
v___x_2964_ = lean_apply_3(v___f_2959_, v___x_2963_, v_fst_2960_, lean_box(0));
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2965_, lean_object* v_fst_2966_, lean_object* v_x_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2965_, v_fst_2966_, v_x_2967_);
lean_dec_ref(v_x_2967_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2970_, lean_object* v___x_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v___y_2975_; lean_object* v_fst_2995_; lean_object* v_snd_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3047_; 
v_fst_2995_ = lean_ctor_get(v_a_2972_, 0);
v_snd_2996_ = lean_ctor_get(v_a_2972_, 1);
v_isSharedCheck_3047_ = !lean_is_exclusive(v_a_2972_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_2998_ = v_a_2972_;
v_isShared_2999_ = v_isSharedCheck_3047_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_snd_2996_);
lean_inc(v_fst_2995_);
lean_dec(v_a_2972_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3047_;
goto v_resetjp_2997_;
}
v___jp_2974_:
{
if (lean_obj_tag(v___y_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2986_; 
v_a_2976_ = lean_ctor_get(v___y_2975_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___y_2975_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2978_ = v___y_2975_;
v_isShared_2979_ = v_isSharedCheck_2986_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___y_2975_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2986_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
if (lean_obj_tag(v_a_2976_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2982_; 
v_a_2980_ = lean_ctor_get(v_a_2976_, 0);
lean_inc(v_a_2980_);
lean_dec_ref_known(v_a_2976_, 1);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v_a_2980_);
v___x_2982_ = v___x_2978_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2980_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
else
{
lean_object* v_a_2984_; 
lean_del_object(v___x_2978_);
v_a_2984_ = lean_ctor_get(v_a_2976_, 0);
lean_inc(v_a_2984_);
lean_dec_ref_known(v_a_2976_, 1);
v_a_2972_ = v_a_2984_;
goto _start;
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
v_a_2987_ = lean_ctor_get(v___y_2975_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___y_2975_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___y_2975_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___y_2975_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
v_resetjp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3000_ = lean_unsigned_to_nat(1u);
v___x_3001_ = lean_nat_add(v_snd_2996_, v___x_3000_);
v___x_3002_ = lean_array_get_size(v_items_2970_);
v___x_3003_ = lean_nat_dec_lt(v___x_3001_, v___x_3002_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3005_; 
lean_dec(v___x_3001_);
if (v_isShared_2999_ == 0)
{
v___x_3005_ = v___x_2998_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_fst_2995_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_snd_2996_);
v___x_3005_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
return v___x_3006_;
}
}
else
{
lean_object* v___x_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v___x_3008_ = lean_box(0);
lean_inc(v_snd_2996_);
v___f_3009_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3009_, 0, v_snd_2996_);
v___x_3010_ = lean_array_get_borrowed(v___x_3008_, v_items_2970_, v_snd_2996_);
v___x_3011_ = lean_array_get(v___x_3008_, v_items_2970_, v___x_3001_);
lean_dec(v___x_3001_);
if (lean_obj_tag(v___x_3010_) == 3)
{
if (lean_obj_tag(v___x_3011_) == 7)
{
double v_n_3012_; lean_object* v_items_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3038_; 
v_n_3012_ = lean_ctor_get_float(v___x_3010_, 0);
v_items_3013_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3015_ = v___x_3011_;
v_isShared_3016_ = v_isSharedCheck_3038_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_items_3013_);
lean_dec(v___x_3011_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3038_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
uint64_t v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; 
v___x_3017_ = lean_float_to_uint64(v_n_3012_);
v___x_3018_ = lean_uint64_to_nat(v___x_3017_);
v___x_3019_ = lean_array_get_size(v___x_2971_);
v___x_3020_ = lean_nat_dec_lt(v___x_3018_, v___x_3019_);
if (v___x_3020_ == 0)
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_dec(v___x_3018_);
lean_del_object(v___x_3015_);
lean_dec_ref(v_items_3013_);
lean_del_object(v___x_2998_);
lean_dec(v_snd_2996_);
v___x_3021_ = lean_box(0);
v___x_3022_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_3009_, v_fst_2995_, v___x_3021_);
v___y_2975_ = v___x_3022_;
goto v___jp_2974_;
}
else
{
lean_object* v___x_3023_; 
v___x_3023_ = lean_array_fget_borrowed(v___x_2971_, v___x_3018_);
lean_dec(v___x_3018_);
if (lean_obj_tag(v___x_3023_) == 1)
{
lean_object* v_attrs_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
lean_del_object(v___x_3015_);
lean_dec_ref(v___f_3009_);
v_attrs_3024_ = lean_ctor_get(v___x_3023_, 3);
v___x_3025_ = lean_array_to_list(v_items_3013_);
v___x_3026_ = lean_box(0);
v___x_3027_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(v___x_3025_, v___x_3026_);
lean_inc(v_attrs_3024_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___x_3027_);
lean_ctor_set(v___x_2998_, 0, v_attrs_3024_);
v___x_3029_ = v___x_2998_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_attrs_3024_);
lean_ctor_set(v_reuseFailAlloc_3033_, 1, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3030_ = lean_array_push(v_fst_2995_, v___x_3029_);
v___x_3031_ = lean_box(0);
v___x_3032_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2996_, v___x_3031_, v___x_3030_);
lean_dec(v_snd_2996_);
v___y_2975_ = v___x_3032_;
goto v___jp_2974_;
}
}
else
{
lean_object* v___x_3035_; 
lean_dec_ref(v_items_3013_);
lean_del_object(v___x_2998_);
lean_dec(v_snd_2996_);
lean_inc(v___x_3023_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set_tag(v___x_3015_, 1);
lean_ctor_set(v___x_3015_, 0, v___x_3023_);
v___x_3035_ = v___x_3015_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3023_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_3009_, v_fst_2995_, v___x_3035_);
lean_dec_ref(v___x_3035_);
v___y_2975_ = v___x_3036_;
goto v___jp_2974_;
}
}
}
}
}
else
{
lean_object* v___x_3040_; 
lean_dec(v_snd_2996_);
lean_inc_ref(v___x_3010_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___x_3011_);
lean_ctor_set(v___x_2998_, 0, v___x_3010_);
v___x_3040_ = v___x_2998_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v___x_3011_);
v___x_3040_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
lean_object* v___x_3041_; 
v___x_3041_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_3009_, v_fst_2995_, v___x_3040_);
lean_dec_ref(v___x_3040_);
v___y_2975_ = v___x_3041_;
goto v___jp_2974_;
}
}
}
else
{
lean_object* v___x_3044_; 
lean_dec(v_snd_2996_);
lean_inc(v___x_3010_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___x_3011_);
lean_ctor_set(v___x_2998_, 0, v___x_3010_);
v___x_3044_ = v___x_2998_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3046_, 1, v___x_3011_);
v___x_3044_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3045_; 
v___x_3045_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_3009_, v_fst_2995_, v___x_3044_);
lean_dec_ref(v___x_3044_);
v___y_2975_ = v___x_3045_;
goto v___jp_2974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_3048_, lean_object* v___x_3049_, lean_object* v_a_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3048_, v___x_3049_, v_a_3050_);
lean_dec_ref(v___x_3049_);
lean_dec_ref(v_items_3048_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_3053_, lean_object* v_as_3054_, size_t v_sz_3055_, size_t v_i_3056_, lean_object* v_b_3057_){
_start:
{
uint8_t v___x_3059_; 
v___x_3059_ = lean_usize_dec_lt(v_i_3056_, v_sz_3055_);
if (v___x_3059_ == 0)
{
lean_object* v___x_3060_; 
lean_dec_ref(v_c_3053_);
v___x_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3060_, 0, v_b_3057_);
return v___x_3060_;
}
else
{
lean_object* v___x_3061_; lean_object* v_a_3062_; lean_object* v___x_3063_; 
v___x_3061_ = lean_box(0);
v_a_3062_ = lean_array_uget_borrowed(v_as_3054_, v_i_3056_);
lean_inc(v_a_3062_);
lean_inc_ref(v_c_3053_);
v___x_3063_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3053_, v_a_3062_);
if (lean_obj_tag(v___x_3063_) == 0)
{
size_t v___x_3064_; size_t v___x_3065_; 
lean_dec_ref_known(v___x_3063_, 1);
v___x_3064_ = ((size_t)1ULL);
v___x_3065_ = lean_usize_add(v_i_3056_, v___x_3064_);
v_i_3056_ = v___x_3065_;
v_b_3057_ = v___x_3061_;
goto _start;
}
else
{
lean_dec_ref(v_c_3053_);
return v___x_3063_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_3067_, lean_object* v_as_3068_, lean_object* v_sz_3069_, lean_object* v_i_3070_, lean_object* v_b_3071_, lean_object* v___y_3072_){
_start:
{
size_t v_sz_boxed_3073_; size_t v_i_boxed_3074_; lean_object* v_res_3075_; 
v_sz_boxed_3073_ = lean_unbox_usize(v_sz_3069_);
lean_dec(v_sz_3069_);
v_i_boxed_3074_ = lean_unbox_usize(v_i_3070_);
lean_dec(v_i_3070_);
v_res_3075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3067_, v_as_3068_, v_sz_boxed_3073_, v_i_boxed_3074_, v_b_3071_);
lean_dec_ref(v_as_3068_);
return v_res_3075_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = lean_unsigned_to_nat(0u);
v___x_3077_ = lean_nat_to_int(v___x_3076_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_3086_, size_t v_i_3087_, lean_object* v_bs_3088_){
_start:
{
uint8_t v___x_3089_; 
v___x_3089_ = lean_usize_dec_lt(v_i_3087_, v_sz_3086_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; 
v___x_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3090_, 0, v_bs_3088_);
return v___x_3090_;
}
else
{
lean_object* v_v_3091_; lean_object* v___x_3092_; lean_object* v_bs_x27_3093_; lean_object* v_a_3095_; 
v_v_3091_ = lean_array_uget(v_bs_3088_, v_i_3087_);
v___x_3092_ = lean_unsigned_to_nat(0u);
v_bs_x27_3093_ = lean_array_uset(v_bs_3088_, v_i_3087_, v___x_3092_);
switch(lean_obj_tag(v_v_3091_))
{
case 3:
{
double v_n_3104_; lean_object* v___x_3105_; 
v_n_3104_ = lean_ctor_get_float(v_v_3091_, 0);
lean_dec_ref_known(v_v_3091_, 0);
v___x_3105_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3104_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v___x_3106_; 
lean_dec_ref(v_bs_x27_3093_);
v___x_3106_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3106_;
}
else
{
lean_object* v_val_3107_; 
v_val_3107_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_val_3107_);
lean_dec_ref_known(v___x_3105_, 1);
v_a_3095_ = v_val_3107_;
goto v___jp_3094_;
}
}
case 5:
{
lean_object* v_i_3108_; 
v_i_3108_ = lean_ctor_get(v_v_3091_, 0);
lean_inc(v_i_3108_);
lean_dec_ref_known(v_v_3091_, 1);
v_a_3095_ = v_i_3108_;
goto v___jp_3094_;
}
default: 
{
lean_object* v___x_3109_; 
lean_dec_ref(v_bs_x27_3093_);
lean_dec(v_v_3091_);
v___x_3109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3109_;
}
}
v___jp_3094_:
{
lean_object* v___x_3096_; uint8_t v___x_3097_; 
v___x_3096_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3097_ = lean_int_dec_le(v___x_3096_, v_a_3095_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; 
lean_dec(v_a_3095_);
lean_dec_ref(v_bs_x27_3093_);
v___x_3098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3098_;
}
else
{
lean_object* v___x_3099_; size_t v___x_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3099_ = l_Int_toNat(v_a_3095_);
lean_dec(v_a_3095_);
v___x_3100_ = ((size_t)1ULL);
v___x_3101_ = lean_usize_add(v_i_3087_, v___x_3100_);
v___x_3102_ = lean_array_uset(v_bs_x27_3093_, v_i_3087_, v___x_3099_);
v_i_3087_ = v___x_3101_;
v_bs_3088_ = v___x_3102_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3110_, lean_object* v_i_3111_, lean_object* v_bs_3112_){
_start:
{
size_t v_sz_boxed_3113_; size_t v_i_boxed_3114_; lean_object* v_res_3115_; 
v_sz_boxed_3113_ = lean_unbox_usize(v_sz_3110_);
lean_dec(v_sz_3110_);
v_i_boxed_3114_ = lean_unbox_usize(v_i_3111_);
lean_dec(v_i_3111_);
v_res_3115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3113_, v_i_boxed_3114_, v_bs_3112_);
return v_res_3115_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0(void){
_start:
{
uint8_t v___x_3116_; lean_object* v___x_3117_; 
v___x_3116_ = 0;
v___x_3117_ = l_Lasm_UI_Runtime_answer(v___x_3116_, v___x_3116_, v___x_3116_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3124_, lean_object* v_args_3125_){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3133_ = lean_array_get_size(v_args_3125_);
v___x_3134_ = lean_unsigned_to_nat(3u);
v___x_3135_ = lean_nat_dec_eq(v___x_3133_, v___x_3134_);
if (v___x_3135_ == 0)
{
lean_dec_ref(v_c_3124_);
goto v___jp_3127_;
}
else
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_unsigned_to_nat(1u);
v___x_3137_ = lean_array_fget_borrowed(v_args_3125_, v___x_3136_);
if (lean_obj_tag(v___x_3137_) == 4)
{
lean_object* v_s_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_s_3138_ = lean_ctor_get(v___x_3137_, 0);
v___x_3139_ = lean_unsigned_to_nat(2u);
v___x_3140_ = lean_array_fget_borrowed(v_args_3125_, v___x_3139_);
if (lean_obj_tag(v___x_3140_) == 7)
{
lean_object* v_items_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v_items_3141_ = lean_ctor_get(v___x_3140_, 0);
v___x_3142_ = lean_unsigned_to_nat(0u);
v___x_3143_ = lean_array_fget_borrowed(v_args_3125_, v___x_3142_);
if (lean_obj_tag(v___x_3143_) == 7)
{
lean_object* v_items_3144_; size_t v_sz_3145_; size_t v___x_3146_; lean_object* v___x_3147_; 
v_items_3144_ = lean_ctor_get(v___x_3143_, 0);
v_sz_3145_ = lean_array_size(v_items_3144_);
v___x_3146_ = ((size_t)0ULL);
lean_inc_ref(v_items_3144_);
v___x_3147_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3145_, v___x_3146_, v_items_3144_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_dec_ref_known(v___x_3147_, 1);
lean_dec_ref(v_c_3124_);
goto v___jp_3130_;
}
else
{
lean_object* v_a_3148_; lean_object* v_ref_3149_; lean_object* v___x_3150_; lean_object* v_live_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v_model_3156_; lean_object* v_live_3157_; lean_object* v_next_3158_; lean_object* v_tables_3159_; uint8_t v_dirty_3160_; uint8_t v_scheduled_3161_; lean_object* v_queue_3162_; uint8_t v_busy_3163_; lean_object* v_subs_3164_; lean_object* v_handlers_3165_; lean_object* v_nextSub_3166_; lean_object* v_touched_3167_; lean_object* v_ports_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3217_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3147_, 1);
v_ref_3149_ = lean_ctor_get(v_c_3124_, 1);
v___x_3150_ = lean_st_ref_get(v_ref_3149_);
v_live_3151_ = lean_ctor_get(v___x_3150_, 1);
lean_inc(v_live_3151_);
lean_dec(v___x_3150_);
v___x_3152_ = lean_array_to_list(v_a_3148_);
v___x_3153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3154_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3151_, v___x_3152_, v___x_3153_);
v___x_3155_ = lean_st_ref_take(v_ref_3149_);
v_model_3156_ = lean_ctor_get(v___x_3155_, 0);
v_live_3157_ = lean_ctor_get(v___x_3155_, 1);
v_next_3158_ = lean_ctor_get(v___x_3155_, 2);
v_tables_3159_ = lean_ctor_get(v___x_3155_, 3);
v_dirty_3160_ = lean_ctor_get_uint8(v___x_3155_, sizeof(void*)*10);
v_scheduled_3161_ = lean_ctor_get_uint8(v___x_3155_, sizeof(void*)*10 + 1);
v_queue_3162_ = lean_ctor_get(v___x_3155_, 4);
v_busy_3163_ = lean_ctor_get_uint8(v___x_3155_, sizeof(void*)*10 + 2);
v_subs_3164_ = lean_ctor_get(v___x_3155_, 5);
v_handlers_3165_ = lean_ctor_get(v___x_3155_, 6);
v_nextSub_3166_ = lean_ctor_get(v___x_3155_, 7);
v_touched_3167_ = lean_ctor_get(v___x_3155_, 8);
v_ports_3168_ = lean_ctor_get(v___x_3155_, 9);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3170_ = v___x_3155_;
v_isShared_3171_ = v_isSharedCheck_3217_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_ports_3168_);
lean_inc(v_touched_3167_);
lean_inc(v_nextSub_3166_);
lean_inc(v_handlers_3165_);
lean_inc(v_subs_3164_);
lean_inc(v_queue_3162_);
lean_inc(v_tables_3159_);
lean_inc(v_next_3158_);
lean_inc(v_live_3157_);
lean_inc(v_model_3156_);
lean_dec(v___x_3155_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3217_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3172_ = lean_array_push(v_touched_3167_, v___x_3152_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 8, v___x_3172_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_model_3156_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v_live_3157_);
lean_ctor_set(v_reuseFailAlloc_3216_, 2, v_next_3158_);
lean_ctor_set(v_reuseFailAlloc_3216_, 3, v_tables_3159_);
lean_ctor_set(v_reuseFailAlloc_3216_, 4, v_queue_3162_);
lean_ctor_set(v_reuseFailAlloc_3216_, 5, v_subs_3164_);
lean_ctor_set(v_reuseFailAlloc_3216_, 6, v_handlers_3165_);
lean_ctor_set(v_reuseFailAlloc_3216_, 7, v_nextSub_3166_);
lean_ctor_set(v_reuseFailAlloc_3216_, 8, v___x_3172_);
lean_ctor_set(v_reuseFailAlloc_3216_, 9, v_ports_3168_);
lean_ctor_set_uint8(v_reuseFailAlloc_3216_, sizeof(void*)*10, v_dirty_3160_);
lean_ctor_set_uint8(v_reuseFailAlloc_3216_, sizeof(void*)*10 + 1, v_scheduled_3161_);
lean_ctor_set_uint8(v_reuseFailAlloc_3216_, sizeof(void*)*10 + 2, v_busy_3163_);
v___x_3174_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3175_ = lean_st_ref_put(v_ref_3149_, v___x_3174_);
v___x_3176_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_3177_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3141_, v___x_3154_, v___x_3176_);
lean_dec_ref(v___x_3154_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v_fst_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v_msgs_3183_; uint8_t v_preventDefault_3184_; uint8_t v_stopPropagation_3185_; lean_object* v___x_3186_; size_t v_sz_3187_; lean_object* v___x_3188_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3178_);
lean_dec_ref_known(v___x_3177_, 1);
v_fst_3179_ = lean_ctor_get(v_a_3178_, 0);
lean_inc(v_fst_3179_);
lean_dec(v_a_3178_);
v___x_3180_ = lean_array_to_list(v_fst_3179_);
v___x_3181_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__2));
lean_inc_ref(v_s_3138_);
v___x_3182_ = l_Lasm_UI_Runtime_decide___redArg(v_s_3138_, v___x_3180_, v___x_3181_);
v_msgs_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc_ref(v_msgs_3183_);
v_preventDefault_3184_ = lean_ctor_get_uint8(v___x_3182_, sizeof(void*)*1);
v_stopPropagation_3185_ = lean_ctor_get_uint8(v___x_3182_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_3182_);
v___x_3186_ = lean_box(0);
v_sz_3187_ = lean_array_size(v_msgs_3183_);
lean_inc_ref(v_c_3124_);
v___x_3188_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3124_, v_msgs_3183_, v_sz_3187_, v___x_3146_, v___x_3186_);
lean_dec_ref(v_msgs_3183_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v___x_3189_; lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3199_; 
lean_dec_ref_known(v___x_3188_, 1);
v___x_3189_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3124_);
lean_dec_ref(v_c_3124_);
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3192_ = v___x_3189_;
v_isShared_3193_ = v_isSharedCheck_3199_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3199_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
uint8_t v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
v___x_3194_ = lean_unbox(v_a_3190_);
lean_dec(v_a_3190_);
v___x_3195_ = l_Lasm_UI_Runtime_answer(v___x_3194_, v_preventDefault_3184_, v_stopPropagation_3185_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v___x_3195_);
v___x_3197_ = v___x_3192_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3195_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec_ref(v_c_3124_);
v_a_3200_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3188_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3188_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_dec_ref(v_c_3124_);
v_a_3208_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3177_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3177_);
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
}
}
else
{
lean_dec_ref(v_c_3124_);
goto v___jp_3130_;
}
}
else
{
lean_dec_ref(v_c_3124_);
goto v___jp_3127_;
}
}
else
{
lean_dec_ref(v_c_3124_);
goto v___jp_3127_;
}
}
v___jp_3127_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
return v___x_3129_;
}
v___jp_3130_:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3218_, lean_object* v_args_3219_, lean_object* v_a_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3218_, v_args_3219_);
lean_dec_ref(v_args_3219_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3222_, lean_object* v_Model_3223_, lean_object* v_Msg_3224_, lean_object* v_c_3225_, lean_object* v_args_3226_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3225_, v_args_3226_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3229_, lean_object* v_Model_3230_, lean_object* v_Msg_3231_, lean_object* v_c_3232_, lean_object* v_args_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3229_, v_Model_3230_, v_Msg_3231_, v_c_3232_, v_args_3233_);
lean_dec_ref(v_args_3233_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3236_, lean_object* v_items_3237_, lean_object* v___x_3238_, lean_object* v_inst_3239_, lean_object* v_a_3240_){
_start:
{
lean_object* v___x_3242_; 
v___x_3242_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3237_, v___x_3238_, v_a_3240_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3243_, lean_object* v_items_3244_, lean_object* v___x_3245_, lean_object* v_inst_3246_, lean_object* v_a_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3243_, v_items_3244_, v___x_3245_, v_inst_3246_, v_a_3247_);
lean_dec_ref(v___x_3245_);
lean_dec_ref(v_items_3244_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3250_, lean_object* v_Flags_3251_, lean_object* v_Model_3252_, lean_object* v_c_3253_, lean_object* v_as_3254_, size_t v_sz_3255_, size_t v_i_3256_, lean_object* v_b_3257_){
_start:
{
lean_object* v___x_3259_; 
v___x_3259_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3253_, v_as_3254_, v_sz_3255_, v_i_3256_, v_b_3257_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3260_, lean_object* v_Flags_3261_, lean_object* v_Model_3262_, lean_object* v_c_3263_, lean_object* v_as_3264_, lean_object* v_sz_3265_, lean_object* v_i_3266_, lean_object* v_b_3267_, lean_object* v___y_3268_){
_start:
{
size_t v_sz_boxed_3269_; size_t v_i_boxed_3270_; lean_object* v_res_3271_; 
v_sz_boxed_3269_ = lean_unbox_usize(v_sz_3265_);
lean_dec(v_sz_3265_);
v_i_boxed_3270_ = lean_unbox_usize(v_i_3266_);
lean_dec(v_i_3266_);
v_res_3271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3260_, v_Flags_3261_, v_Model_3262_, v_c_3263_, v_as_3264_, v_sz_boxed_3269_, v_i_boxed_3270_, v_b_3267_);
lean_dec_ref(v_as_3264_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3272_, lean_object* v_x_3273_, lean_object* v_x_3274_){
_start:
{
if (lean_obj_tag(v_x_3274_) == 0)
{
lean_dec_ref(v___y_3272_);
return v_x_3273_;
}
else
{
lean_object* v_head_3275_; lean_object* v_tail_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v_head_3275_ = lean_ctor_get(v_x_3274_, 0);
lean_inc(v_head_3275_);
v_tail_3276_ = lean_ctor_get(v_x_3274_, 1);
lean_inc(v_tail_3276_);
lean_dec_ref_known(v_x_3274_, 2);
lean_inc_ref(v___y_3272_);
v___x_3277_ = lean_apply_1(v_head_3275_, v___y_3272_);
v___x_3278_ = l_Lasm_UI_Runtime_Decision_add___redArg(v_x_3273_, v___x_3277_);
v_x_3273_ = v___x_3278_;
v_x_3274_ = v_tail_3276_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3285_, lean_object* v_args_3286_){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; uint8_t v___x_3293_; 
v___x_3291_ = lean_unsigned_to_nat(0u);
v___x_3292_ = lean_array_get_size(v_args_3286_);
v___x_3293_ = lean_nat_dec_lt(v___x_3291_, v___x_3292_);
if (v___x_3293_ == 0)
{
lean_dec_ref(v_c_3285_);
goto v___jp_3288_;
}
else
{
lean_object* v___x_3294_; 
v___x_3294_ = lean_array_fget_borrowed(v_args_3286_, v___x_3291_);
if (lean_obj_tag(v___x_3294_) == 3)
{
double v_n_3295_; lean_object* v___y_3297_; lean_object* v___x_3335_; uint8_t v___x_3336_; 
v_n_3295_ = lean_ctor_get_float(v___x_3294_, 0);
v___x_3335_ = lean_unsigned_to_nat(1u);
v___x_3336_ = lean_nat_dec_lt(v___x_3335_, v___x_3292_);
if (v___x_3336_ == 0)
{
goto v___jp_3333_;
}
else
{
lean_object* v___x_3337_; 
v___x_3337_ = lean_array_fget_borrowed(v_args_3286_, v___x_3335_);
if (lean_obj_tag(v___x_3337_) == 7)
{
lean_object* v_items_3338_; 
v_items_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc_ref(v_items_3338_);
v___y_3297_ = v_items_3338_;
goto v___jp_3296_;
}
else
{
goto v___jp_3333_;
}
}
v___jp_3296_:
{
lean_object* v_ref_3298_; lean_object* v___x_3299_; lean_object* v_handlers_3300_; uint64_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v_msgs_3307_; uint8_t v_preventDefault_3308_; uint8_t v_stopPropagation_3309_; lean_object* v___x_3310_; size_t v_sz_3311_; size_t v___x_3312_; lean_object* v___x_3313_; 
v_ref_3298_ = lean_ctor_get(v_c_3285_, 1);
v___x_3299_ = lean_st_ref_get(v_ref_3298_);
v_handlers_3300_ = lean_ctor_get(v___x_3299_, 6);
lean_inc_ref(v_handlers_3300_);
lean_dec(v___x_3299_);
v___x_3301_ = lean_float_to_uint64(v_n_3295_);
v___x_3302_ = lean_uint64_to_nat(v___x_3301_);
v___x_3303_ = lean_box(0);
v___x_3304_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3300_, v___x_3302_, v___x_3303_);
lean_dec(v___x_3302_);
lean_dec_ref(v_handlers_3300_);
v___x_3305_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__1));
v___x_3306_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3297_, v___x_3305_, v___x_3304_);
v_msgs_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc_ref(v_msgs_3307_);
v_preventDefault_3308_ = lean_ctor_get_uint8(v___x_3306_, sizeof(void*)*1);
v_stopPropagation_3309_ = lean_ctor_get_uint8(v___x_3306_, sizeof(void*)*1 + 1);
lean_dec_ref(v___x_3306_);
v___x_3310_ = lean_box(0);
v_sz_3311_ = lean_array_size(v_msgs_3307_);
v___x_3312_ = ((size_t)0ULL);
lean_inc_ref(v_c_3285_);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3285_, v_msgs_3307_, v_sz_3311_, v___x_3312_, v___x_3310_);
lean_dec_ref(v_msgs_3307_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v___x_3314_; lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3324_; 
lean_dec_ref_known(v___x_3313_, 1);
v___x_3314_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3285_);
lean_dec_ref(v_c_3285_);
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3317_ = v___x_3314_;
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3314_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
uint8_t v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3322_; 
v___x_3319_ = lean_unbox(v_a_3315_);
lean_dec(v_a_3315_);
v___x_3320_ = l_Lasm_UI_Runtime_answer(v___x_3319_, v_preventDefault_3308_, v_stopPropagation_3309_);
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 0, v___x_3320_);
v___x_3322_ = v___x_3317_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
lean_dec_ref(v_c_3285_);
v_a_3325_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3313_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3313_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
v___jp_3333_:
{
lean_object* v___x_3334_; 
v___x_3334_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3297_ = v___x_3334_;
goto v___jp_3296_;
}
}
else
{
lean_dec_ref(v_c_3285_);
goto v___jp_3288_;
}
}
v___jp_3288_:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = lean_obj_once(&l_Lasm_UI_Runtime_onEvent___redArg___closed__0, &l_Lasm_UI_Runtime_onEvent___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_onEvent___redArg___closed__0);
v___x_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
return v___x_3290_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3339_, lean_object* v_args_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3339_, v_args_3340_);
lean_dec_ref(v_args_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3343_, lean_object* v_Model_3344_, lean_object* v_Msg_3345_, lean_object* v_c_3346_, lean_object* v_args_3347_){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3346_, v_args_3347_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3350_, lean_object* v_Model_3351_, lean_object* v_Msg_3352_, lean_object* v_c_3353_, lean_object* v_args_3354_, lean_object* v_a_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lasm_UI_Runtime_onSub(v_Flags_3350_, v_Model_3351_, v_Msg_3352_, v_c_3353_, v_args_3354_);
lean_dec_ref(v_args_3354_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3357_, lean_object* v___y_3358_, lean_object* v_x_3359_, lean_object* v_x_3360_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_List_foldl___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3358_, v_x_3359_, v_x_3360_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg(){
_start:
{
lean_object* v___x_3365_; 
v___x_3365_ = ((lean_object*)(l_Lasm_UI_instHotModel___redArg___closed__0));
return v___x_3365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel___redArg___boxed(lean_object* v___dummy_3366_){
_start:
{
lean_object* v_res_3367_; 
v_res_3367_ = l_Lasm_UI_instHotModel___redArg();
return v_res_3367_;
}
}
static lean_object* _init_l_Lasm_UI_instHotModel___closed__0(void){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Lasm_UI_instHotModel___redArg();
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModel(lean_object* v_Model_3369_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_obj_once(&l_Lasm_UI_instHotModel___closed__0, &l_Lasm_UI_instHotModel___closed__0_once, _init_l_Lasm_UI_instHotModel___closed__0);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0(lean_object* v_inst_3371_, lean_object* v_d_3372_){
_start:
{
lean_object* v_fromJS_3373_; lean_object* v___x_3374_; 
v_fromJS_3373_ = lean_ctor_get(v_inst_3371_, 0);
lean_inc_ref(v_fromJS_3373_);
lean_dec_ref(v_inst_3371_);
v___x_3374_ = lean_apply_1(v_fromJS_3373_, v_d_3372_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3375_; 
lean_dec_ref_known(v___x_3374_, 1);
v___x_3375_ = lean_box(0);
return v___x_3375_;
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
v_a_3376_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3374_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3374_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
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
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(lean_object* v_inst_3384_, lean_object* v_inst_3385_){
_start:
{
lean_object* v___f_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___f_3386_ = lean_alloc_closure((void*)(l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3386_, 0, v_inst_3385_);
v___x_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3387_, 0, v_inst_3384_);
v___x_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3388_, 0, v___f_3386_);
v___x_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3387_);
lean_ctor_set(v___x_3389_, 1, v___x_3388_);
return v___x_3389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHotModelOfToJSOfFromJS(lean_object* v_Model_3390_, lean_object* v_inst_3391_, lean_object* v_inst_3392_){
_start:
{
lean_object* v___x_3393_; 
v___x_3393_ = l_Lasm_UI_instHotModelOfToJSOfFromJS___redArg(v_inst_3391_, v_inst_3392_);
return v___x_3393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3394_, lean_object* v_x_3395_){
_start:
{
lean_object* v___x_3397_; lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3406_; 
v___x_3397_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3394_);
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3400_ = v___x_3397_;
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3397_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3402_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3402_, 0, v_a_3398_);
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v___x_3402_);
v___x_3404_ = v___x_3400_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3407_, lean_object* v_x_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3407_, v_x_3408_);
lean_dec_ref(v_x_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v_app_3411_, lean_object* v___x_3412_, lean_object* v___x_3413_, lean_object* v_args_3414_){
_start:
{
lean_object* v_onUrlChange_3428_; lean_object* v___y_3430_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v_onUrlChange_3428_ = lean_ctor_get(v_app_3411_, 4);
lean_inc(v_onUrlChange_3428_);
lean_dec_ref(v_app_3411_);
v___x_3446_ = lean_array_get_size(v_args_3414_);
v___x_3447_ = lean_nat_dec_lt(v___x_3413_, v___x_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_box(0);
v___y_3430_ = v___x_3448_;
goto v___jp_3429_;
}
else
{
lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3449_ = lean_array_fget_borrowed(v_args_3414_, v___x_3413_);
lean_inc(v___x_3449_);
v___x_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3449_);
v___y_3430_ = v___x_3450_;
goto v___jp_3429_;
}
v___jp_3416_:
{
lean_object* v___x_3417_; lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3427_; 
v___x_3417_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3412_);
lean_dec_ref(v___x_3412_);
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3420_ = v___x_3417_;
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3417_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; uint8_t v___x_3423_; lean_object* v___x_3425_; 
v___x_3422_ = lean_alloc_ctor(2, 0, 1);
v___x_3423_ = lean_unbox(v_a_3418_);
lean_dec(v_a_3418_);
lean_ctor_set_uint8(v___x_3422_, 0, v___x_3423_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v___x_3422_);
v___x_3425_ = v___x_3420_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3422_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
v___jp_3429_:
{
if (lean_obj_tag(v_onUrlChange_3428_) == 1)
{
if (lean_obj_tag(v___y_3430_) == 1)
{
lean_object* v_val_3431_; 
v_val_3431_ = lean_ctor_get(v___y_3430_, 0);
lean_inc(v_val_3431_);
lean_dec_ref_known(v___y_3430_, 1);
if (lean_obj_tag(v_val_3431_) == 4)
{
lean_object* v_val_3432_; lean_object* v_s_3433_; lean_object* v___x_3434_; 
v_val_3432_ = lean_ctor_get(v_onUrlChange_3428_, 0);
lean_inc(v_val_3432_);
lean_dec_ref_known(v_onUrlChange_3428_, 1);
v_s_3433_ = lean_ctor_get(v_val_3431_, 0);
lean_inc_ref(v_s_3433_);
lean_dec_ref_known(v_val_3431_, 1);
v___x_3434_ = l_Lasm_UI_Url_parse(v_s_3433_);
if (lean_obj_tag(v___x_3434_) == 1)
{
lean_object* v_val_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
v_val_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_val_3435_);
lean_dec_ref_known(v___x_3434_, 1);
v___x_3436_ = lean_apply_1(v_val_3432_, v_val_3435_);
lean_inc_ref(v___x_3412_);
v___x_3437_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3412_, v___x_3436_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_dec_ref_known(v___x_3437_, 1);
goto v___jp_3416_;
}
else
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref(v___x_3412_);
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3437_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
else
{
lean_dec(v___x_3434_);
lean_dec(v_val_3432_);
goto v___jp_3416_;
}
}
else
{
lean_dec(v_val_3431_);
lean_dec_ref_known(v_onUrlChange_3428_, 1);
goto v___jp_3416_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3428_, 1);
lean_dec(v___y_3430_);
goto v___jp_3416_;
}
}
else
{
lean_dec(v___y_3430_);
lean_dec(v_onUrlChange_3428_);
goto v___jp_3416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v_app_3451_, lean_object* v___x_3452_, lean_object* v___x_3453_, lean_object* v_args_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_Lasm_UI_App_run___redArg___lam__1(v_app_3451_, v___x_3452_, v___x_3453_, v_args_3454_);
lean_dec_ref(v_args_3454_);
lean_dec(v___x_3453_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3457_, lean_object* v___x_3458_, lean_object* v_a_3459_, lean_object* v_x_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v___x_3466_; 
v___x_3466_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3458_, v_a_3459_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_dec_ref_known(v___x_3466_, 1);
goto v___jp_3463_;
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3468_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3469_ = l_Lasm_UI_Runtime_report(v___x_3468_, v_a_3467_);
lean_dec_ref(v___x_3469_);
goto v___jp_3463_;
}
v___jp_3463_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3457_);
v___x_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3465_, 0, v___x_3464_);
return v___x_3465_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3470_, lean_object* v___x_3471_, lean_object* v_a_3472_, lean_object* v_x_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3470_, v___x_3471_, v_a_3472_, v_x_3473_, v___y_3474_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3477_, lean_object* v___x_3478_, lean_object* v_d_3479_){
_start:
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_apply_1(v_val_3477_, v_d_3479_);
if (lean_obj_tag(v___x_3481_) == 1)
{
lean_object* v_val_3482_; lean_object* v___x_3483_; 
v_val_3482_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_val_3482_);
lean_dec_ref_known(v___x_3481_, 1);
lean_inc_ref(v___x_3478_);
v___x_3483_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3478_, v_val_3482_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v___x_3484_; 
lean_dec_ref_known(v___x_3483_, 1);
v___x_3484_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3478_);
lean_dec_ref(v___x_3478_);
return v___x_3484_;
}
else
{
lean_dec_ref(v___x_3478_);
return v___x_3483_;
}
}
else
{
lean_object* v___x_3485_; 
lean_dec(v___x_3481_);
v___x_3485_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3478_);
lean_dec_ref(v___x_3478_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3486_, lean_object* v___x_3487_, lean_object* v_d_3488_, lean_object* v___y_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3486_, v___x_3487_, v_d_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4(lean_object* v_val_3491_){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3493_ = lean_st_ref_get(v_val_3491_);
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__4___boxed(lean_object* v_val_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v_res_3497_; 
v_res_3497_ = l_Lasm_UI_App_run___redArg___lam__4(v_val_3495_);
lean_dec(v_val_3495_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5(lean_object* v_val_3498_, lean_object* v_____do__lift_3499_){
_start:
{
lean_object* v_model_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v_model_3501_ = lean_ctor_get(v_____do__lift_3499_, 0);
lean_inc(v_model_3501_);
lean_dec_ref(v_____do__lift_3499_);
v___x_3502_ = lean_apply_1(v_val_3498_, v_model_3501_);
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__5___boxed(lean_object* v_val_3504_, lean_object* v_____do__lift_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l_Lasm_UI_App_run___redArg___lam__5(v_val_3504_, v_____do__lift_3505_);
return v_res_3507_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = l_instMonadEIO___redArg();
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3521_, lean_object* v_hot_3522_, lean_object* v_app_3523_){
_start:
{
lean_object* v___x_3525_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; uint8_t v___y_3531_; uint8_t v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; uint8_t v___y_3540_; lean_object* v___x_3630_; 
v___x_3525_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3630_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v___x_3632_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3633_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3634_ = l_Lasm_JS_Data_field(v_a_3631_, v___x_3633_);
v___x_3635_ = l_Lasm_JS_decodeAs___redArg(v_inst_3521_, v___x_3632_, v___x_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; lean_object* v___x_3637_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; uint8_t v___y_3644_; lean_object* v___y_3645_; uint8_t v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3666_; lean_object* v___y_3667_; lean_object* v___y_3668_; lean_object* v___y_3669_; lean_object* v___y_3670_; uint8_t v___y_3671_; uint8_t v___y_3672_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v_fst_3723_; lean_object* v_snd_3724_; lean_object* v___y_3752_; lean_object* v___y_3758_; lean_object* v___x_3776_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3635_, 1);
v___x_3637_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3776_ = l_Lasm_JS_Data_field(v_a_3631_, v___x_3637_);
lean_dec(v_a_3631_);
if (lean_obj_tag(v___x_3776_) == 4)
{
lean_object* v_s_3777_; lean_object* v___x_3778_; 
v_s_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc_ref(v_s_3777_);
lean_dec_ref_known(v___x_3776_, 1);
v___x_3778_ = l_Lasm_UI_Url_parse(v_s_3777_);
if (lean_obj_tag(v___x_3778_) == 0)
{
goto v___jp_3774_;
}
else
{
lean_object* v_val_3779_; 
v_val_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_val_3779_);
lean_dec_ref_known(v___x_3778_, 1);
v___y_3758_ = v_val_3779_;
goto v___jp_3757_;
}
}
else
{
lean_dec(v___x_3776_);
goto v___jp_3774_;
}
v___jp_3638_:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v_onUrlChange_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3651_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3652_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___y_3641_);
lean_ctor_set(v___x_3652_, 1, v___x_3651_);
v_onUrlChange_3653_ = lean_ctor_get(v_app_3523_, 4);
lean_inc(v_onUrlChange_3653_);
lean_dec_ref(v_app_3523_);
v___x_3654_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3654_, 0, v___y_3648_);
lean_ctor_set(v___x_3654_, 1, v___x_3651_);
v___x_3655_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___y_3647_);
lean_ctor_set(v___x_3655_, 1, v___x_3651_);
v___x_3656_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
lean_ctor_set(v___x_3657_, 1, v___x_3652_);
v___x_3658_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3658_);
lean_ctor_set(v___x_3659_, 1, v___x_3654_);
v___x_3660_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3660_);
lean_ctor_set(v___x_3661_, 1, v___x_3655_);
v___x_3662_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___y_3650_);
lean_ctor_set(v___x_3662_, 1, v___x_3651_);
v___x_3663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3637_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
v___x_3664_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v_onUrlChange_3653_) == 0)
{
v___y_3527_ = v___y_3639_;
v___y_3528_ = v___y_3642_;
v___y_3529_ = v___x_3663_;
v___y_3530_ = v___y_3643_;
v___y_3531_ = v___y_3644_;
v___y_3532_ = v___y_3646_;
v___y_3533_ = v___y_3645_;
v___y_3534_ = v___x_3664_;
v___y_3535_ = v___y_3640_;
v___y_3536_ = v___x_3659_;
v___y_3537_ = v___x_3657_;
v___y_3538_ = v___x_3661_;
v___y_3539_ = v___y_3649_;
v___y_3540_ = v___y_3644_;
goto v___jp_3526_;
}
else
{
lean_dec_ref_known(v_onUrlChange_3653_, 1);
v___y_3527_ = v___y_3639_;
v___y_3528_ = v___y_3642_;
v___y_3529_ = v___x_3663_;
v___y_3530_ = v___y_3643_;
v___y_3531_ = v___y_3644_;
v___y_3532_ = v___y_3646_;
v___y_3533_ = v___y_3645_;
v___y_3534_ = v___x_3664_;
v___y_3535_ = v___y_3640_;
v___y_3536_ = v___x_3659_;
v___y_3537_ = v___x_3657_;
v___y_3538_ = v___x_3661_;
v___y_3539_ = v___y_3649_;
v___y_3540_ = v___y_3646_;
goto v___jp_3526_;
}
}
v___jp_3665_:
{
lean_object* v___x_3675_; 
v___x_3675_ = l_Lasm_JS_Function_ofSyncFn(v___y_3667_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v___x_3675_, 1);
lean_inc_ref(v___y_3666_);
v___x_3677_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3677_, 0, lean_box(0));
lean_closure_set(v___x_3677_, 1, lean_box(0));
lean_closure_set(v___x_3677_, 2, lean_box(0));
lean_closure_set(v___x_3677_, 3, v___y_3666_);
v___x_3678_ = l_Lasm_JS_Function_ofSyncFn(v___x_3677_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3679_);
lean_dec_ref_known(v___x_3678_, 1);
lean_inc_ref(v___y_3666_);
v___x_3680_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3680_, 0, lean_box(0));
lean_closure_set(v___x_3680_, 1, lean_box(0));
lean_closure_set(v___x_3680_, 2, lean_box(0));
lean_closure_set(v___x_3680_, 3, v___y_3666_);
v___x_3681_ = l_Lasm_JS_Function_ofSyncFn(v___x_3680_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3683_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref_known(v___x_3681_, 1);
v___x_3683_ = l_Lasm_JS_Function_ofSyncFn(v___y_3668_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_receive_3684_; 
v_receive_3684_ = lean_ctor_get(v_app_3523_, 5);
if (lean_obj_tag(v_receive_3684_) == 1)
{
lean_object* v_a_3685_; lean_object* v_val_3686_; lean_object* v___f_3687_; lean_object* v___x_3688_; 
v_a_3685_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3683_, 1);
v_val_3686_ = lean_ctor_get(v_receive_3684_, 0);
lean_inc_ref(v___y_3666_);
lean_inc(v_val_3686_);
v___f_3687_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3687_, 0, v_val_3686_);
lean_closure_set(v___f_3687_, 1, v___y_3666_);
v___x_3688_ = l_Lasm_UI_Mount_onMessage(v___f_3687_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_dec_ref_known(v___x_3688_, 1);
lean_inc_ref(v___y_3666_);
v___y_3639_ = v___y_3666_;
v___y_3640_ = v___y_3666_;
v___y_3641_ = v_a_3676_;
v___y_3642_ = v___y_3669_;
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3671_;
v___y_3645_ = v___y_3673_;
v___y_3646_ = v___y_3672_;
v___y_3647_ = v_a_3682_;
v___y_3648_ = v_a_3679_;
v___y_3649_ = v___y_3674_;
v___y_3650_ = v_a_3685_;
goto v___jp_3638_;
}
else
{
lean_dec(v_a_3685_);
lean_dec(v_a_3682_);
lean_dec(v_a_3679_);
lean_dec(v_a_3676_);
lean_dec(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_app_3523_);
return v___x_3688_;
}
}
else
{
lean_object* v_a_3689_; 
v_a_3689_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___x_3683_, 1);
lean_inc_ref(v___y_3666_);
v___y_3639_ = v___y_3666_;
v___y_3640_ = v___y_3666_;
v___y_3641_ = v_a_3676_;
v___y_3642_ = v___y_3669_;
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3671_;
v___y_3645_ = v___y_3673_;
v___y_3646_ = v___y_3672_;
v___y_3647_ = v_a_3682_;
v___y_3648_ = v_a_3679_;
v___y_3649_ = v___y_3674_;
v___y_3650_ = v_a_3689_;
goto v___jp_3638_;
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec(v_a_3682_);
lean_dec(v_a_3679_);
lean_dec(v_a_3676_);
lean_dec(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_app_3523_);
v_a_3690_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3683_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3683_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3705_; 
lean_dec(v_a_3679_);
lean_dec(v_a_3676_);
lean_dec(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_app_3523_);
v_a_3698_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3700_ = v___x_3681_;
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3681_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3703_; 
if (v_isShared_3701_ == 0)
{
v___x_3703_ = v___x_3700_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3698_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
lean_dec(v_a_3676_);
lean_dec(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_app_3523_);
v_a_3706_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3678_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3678_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
else
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
lean_dec(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec_ref(v___y_3666_);
lean_dec_ref(v_app_3523_);
v_a_3714_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3675_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3675_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
}
v___jp_3722_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v_save_x3f_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3749_; 
v___x_3725_ = lean_box(0);
v___x_3726_ = lean_unsigned_to_nat(1u);
v___x_3727_ = lean_unsigned_to_nat(0u);
v___x_3728_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3729_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3730_ = 1;
v___x_3731_ = 0;
v___x_3732_ = ((lean_object*)(l_Lasm_UI_Runtime_onSub___redArg___closed__0));
v___x_3733_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3733_, 0, v_fst_3723_);
lean_ctor_set(v___x_3733_, 1, v___x_3725_);
lean_ctor_set(v___x_3733_, 2, v___x_3726_);
lean_ctor_set(v___x_3733_, 3, v___x_3729_);
lean_ctor_set(v___x_3733_, 4, v___x_3732_);
lean_ctor_set(v___x_3733_, 5, v___x_3728_);
lean_ctor_set(v___x_3733_, 6, v___x_3728_);
lean_ctor_set(v___x_3733_, 7, v___x_3726_);
lean_ctor_set(v___x_3733_, 8, v___x_3732_);
lean_ctor_set(v___x_3733_, 9, v___x_3725_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*10, v___x_3730_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*10 + 1, v___x_3731_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*10 + 2, v___x_3731_);
v___x_3734_ = lean_st_mk_ref(v___x_3733_);
v_save_x3f_3735_ = lean_ctor_get(v_hot_3522_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_hot_3522_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; 
v_unused_3750_ = lean_ctor_get(v_hot_3522_, 1);
lean_dec(v_unused_3750_);
v___x_3737_ = v_hot_3522_;
v_isShared_3738_ = v_isSharedCheck_3749_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_save_x3f_3735_);
lean_dec(v_hot_3522_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3749_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
lean_inc(v___x_3734_);
lean_inc_ref(v_app_3523_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 1, v___x_3734_);
lean_ctor_set(v___x_3737_, 0, v_app_3523_);
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_app_3523_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v___x_3734_);
v___x_3740_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
lean_object* v___f_3741_; lean_object* v___f_3742_; 
lean_inc_ref_n(v___x_3740_, 2);
v___f_3741_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3741_, 0, v___x_3740_);
lean_inc_ref(v_app_3523_);
v___f_3742_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3742_, 0, v_app_3523_);
lean_closure_set(v___f_3742_, 1, v___x_3740_);
lean_closure_set(v___f_3742_, 2, v___x_3727_);
if (lean_obj_tag(v_save_x3f_3735_) == 1)
{
lean_object* v_val_3743_; lean_object* v___f_3744_; lean_object* v___f_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v_val_3743_ = lean_ctor_get(v_save_x3f_3735_, 0);
lean_inc(v_val_3743_);
lean_dec_ref_known(v_save_x3f_3735_, 1);
lean_inc(v___x_3734_);
v___f_3744_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_3744_, 0, v___x_3734_);
v___f_3745_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3745_, 0, v_val_3743_);
v___x_3746_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3746_, 0, lean_box(0));
lean_closure_set(v___x_3746_, 1, lean_box(0));
lean_closure_set(v___x_3746_, 2, lean_box(0));
lean_closure_set(v___x_3746_, 3, v___f_3744_);
lean_closure_set(v___x_3746_, 4, v___f_3745_);
v___x_3747_ = l_Lasm_UI_Mount_onHotSave(v___x_3746_);
if (lean_obj_tag(v___x_3747_) == 0)
{
lean_dec_ref_known(v___x_3747_, 1);
v___y_3666_ = v___x_3740_;
v___y_3667_ = v___f_3741_;
v___y_3668_ = v___f_3742_;
v___y_3669_ = v___x_3734_;
v___y_3670_ = v_snd_3724_;
v___y_3671_ = v___x_3731_;
v___y_3672_ = v___x_3730_;
v___y_3673_ = v___x_3727_;
v___y_3674_ = v___x_3726_;
goto v___jp_3665_;
}
else
{
lean_dec_ref(v___f_3742_);
lean_dec_ref(v___f_3741_);
lean_dec_ref(v___x_3740_);
lean_dec(v___x_3734_);
lean_dec(v_snd_3724_);
lean_dec_ref(v_app_3523_);
return v___x_3747_;
}
}
else
{
lean_dec(v_save_x3f_3735_);
v___y_3666_ = v___x_3740_;
v___y_3667_ = v___f_3741_;
v___y_3668_ = v___f_3742_;
v___y_3669_ = v___x_3734_;
v___y_3670_ = v_snd_3724_;
v___y_3671_ = v___x_3731_;
v___y_3672_ = v___x_3730_;
v___y_3673_ = v___x_3727_;
v___y_3674_ = v___x_3726_;
goto v___jp_3665_;
}
}
}
}
v___jp_3751_:
{
lean_object* v_init_3753_; lean_object* v___x_3754_; lean_object* v_fst_3755_; lean_object* v_snd_3756_; 
v_init_3753_ = lean_ctor_get(v_app_3523_, 0);
lean_inc_ref(v_init_3753_);
v___x_3754_ = lean_apply_2(v_init_3753_, v_a_3636_, v___y_3752_);
v_fst_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc(v_fst_3755_);
v_snd_3756_ = lean_ctor_get(v___x_3754_, 1);
lean_inc(v_snd_3756_);
lean_dec_ref(v___x_3754_);
v_fst_3723_ = v_fst_3755_;
v_snd_3724_ = v_snd_3756_;
goto v___jp_3722_;
}
v___jp_3757_:
{
lean_object* v_load_x3f_3759_; 
v_load_x3f_3759_ = lean_ctor_get(v_hot_3522_, 1);
if (lean_obj_tag(v_load_x3f_3759_) == 0)
{
v___y_3752_ = v___y_3758_;
goto v___jp_3751_;
}
else
{
lean_object* v_val_3760_; lean_object* v___x_3761_; 
v_val_3760_ = lean_ctor_get(v_load_x3f_3759_, 0);
v___x_3761_ = l_Lasm_UI_Mount_Raw_hotState();
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
if (lean_obj_tag(v_a_3762_) == 0)
{
v___y_3752_ = v___y_3758_;
goto v___jp_3751_;
}
else
{
lean_object* v___x_3763_; 
lean_inc(v_val_3760_);
v___x_3763_ = lean_apply_1(v_val_3760_, v_a_3762_);
if (lean_obj_tag(v___x_3763_) == 0)
{
v___y_3752_ = v___y_3758_;
goto v___jp_3751_;
}
else
{
lean_object* v_val_3764_; lean_object* v___x_3765_; 
lean_dec_ref(v___y_3758_);
lean_dec(v_a_3636_);
v_val_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_val_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3765_ = lean_box(0);
v_fst_3723_ = v_val_3764_;
v_snd_3724_ = v___x_3765_;
goto v___jp_3722_;
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
lean_dec_ref(v___y_3758_);
lean_dec(v_a_3636_);
lean_dec_ref(v_app_3523_);
lean_dec_ref(v_hot_3522_);
v_a_3766_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3761_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3761_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
v___jp_3774_:
{
lean_object* v___x_3775_; 
v___x_3775_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__8));
v___y_3758_ = v___x_3775_;
goto v___jp_3757_;
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec(v_a_3631_);
lean_dec_ref(v_app_3523_);
lean_dec_ref(v_hot_3522_);
v_a_3780_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3635_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3635_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_dec_ref(v_app_3523_);
lean_dec_ref(v_hot_3522_);
lean_dec_ref(v_inst_3521_);
v_a_3788_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3630_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3630_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
v___jp_3526_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3541_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3541_, 0, v___y_3540_);
lean_inc_ref(v___y_3534_);
v___x_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___y_3534_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = lean_box(0);
v___x_3544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3542_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v___x_3545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___y_3529_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___y_3538_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___y_3536_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___y_3537_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = l_Lasm_JS_obj(v___x_3548_);
v___x_3550_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3549_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v___x_3551_; lean_object* v_a_3552_; lean_object* v___x_3553_; 
lean_dec_ref_known(v___x_3550_, 1);
lean_inc_ref(v___y_3535_);
v___x_3551_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3535_);
v_a_3552_ = lean_ctor_get(v___x_3551_, 0);
lean_inc(v_a_3552_);
lean_dec_ref(v___x_3551_);
v___x_3553_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3552_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v___x_3554_; lean_object* v_model_3555_; lean_object* v_live_3556_; lean_object* v_next_3557_; lean_object* v_tables_3558_; uint8_t v_dirty_3559_; uint8_t v_scheduled_3560_; lean_object* v_queue_3561_; lean_object* v_subs_3562_; lean_object* v_handlers_3563_; lean_object* v_nextSub_3564_; lean_object* v_touched_3565_; lean_object* v_ports_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3629_; 
lean_dec_ref_known(v___x_3553_, 1);
v___x_3554_ = lean_st_ref_take(v___y_3528_);
v_model_3555_ = lean_ctor_get(v___x_3554_, 0);
v_live_3556_ = lean_ctor_get(v___x_3554_, 1);
v_next_3557_ = lean_ctor_get(v___x_3554_, 2);
v_tables_3558_ = lean_ctor_get(v___x_3554_, 3);
v_dirty_3559_ = lean_ctor_get_uint8(v___x_3554_, sizeof(void*)*10);
v_scheduled_3560_ = lean_ctor_get_uint8(v___x_3554_, sizeof(void*)*10 + 1);
v_queue_3561_ = lean_ctor_get(v___x_3554_, 4);
v_subs_3562_ = lean_ctor_get(v___x_3554_, 5);
v_handlers_3563_ = lean_ctor_get(v___x_3554_, 6);
v_nextSub_3564_ = lean_ctor_get(v___x_3554_, 7);
v_touched_3565_ = lean_ctor_get(v___x_3554_, 8);
v_ports_3566_ = lean_ctor_get(v___x_3554_, 9);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3568_ = v___x_3554_;
v_isShared_3569_ = v_isSharedCheck_3629_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_ports_3566_);
lean_inc(v_touched_3565_);
lean_inc(v_nextSub_3564_);
lean_inc(v_handlers_3563_);
lean_inc(v_subs_3562_);
lean_inc(v_queue_3561_);
lean_inc(v_tables_3558_);
lean_inc(v_next_3557_);
lean_inc(v_live_3556_);
lean_inc(v_model_3555_);
lean_dec(v___x_3554_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3629_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_model_3555_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_live_3556_);
lean_ctor_set(v_reuseFailAlloc_3628_, 2, v_next_3557_);
lean_ctor_set(v_reuseFailAlloc_3628_, 3, v_tables_3558_);
lean_ctor_set(v_reuseFailAlloc_3628_, 4, v_queue_3561_);
lean_ctor_set(v_reuseFailAlloc_3628_, 5, v_subs_3562_);
lean_ctor_set(v_reuseFailAlloc_3628_, 6, v_handlers_3563_);
lean_ctor_set(v_reuseFailAlloc_3628_, 7, v_nextSub_3564_);
lean_ctor_set(v_reuseFailAlloc_3628_, 8, v_touched_3565_);
lean_ctor_set(v_reuseFailAlloc_3628_, 9, v_ports_3566_);
lean_ctor_set_uint8(v_reuseFailAlloc_3628_, sizeof(void*)*10, v_dirty_3559_);
lean_ctor_set_uint8(v_reuseFailAlloc_3628_, sizeof(void*)*10 + 1, v_scheduled_3560_);
v___x_3571_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___f_3574_; lean_object* v___x_5004__overap_3575_; lean_object* v___x_3576_; 
lean_ctor_set_uint8(v___x_3571_, sizeof(void*)*10 + 2, v___y_3532_);
v___x_3572_ = lean_st_ref_put(v___y_3528_, v___x_3571_);
v___x_3573_ = lean_box(0);
v___f_3574_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3574_, 0, v___x_3573_);
lean_closure_set(v___f_3574_, 1, v___y_3527_);
v___x_5004__overap_3575_ = l_List_forIn_x27_loop___redArg(v___x_3525_, v___f_3574_, v___y_3530_, v___x_3573_);
lean_dec(v___y_3530_);
v___x_3576_ = lean_apply_1(v___x_5004__overap_3575_, lean_box(0));
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v___x_3577_; lean_object* v_model_3578_; lean_object* v_live_3579_; lean_object* v_next_3580_; lean_object* v_tables_3581_; uint8_t v_dirty_3582_; uint8_t v_scheduled_3583_; lean_object* v_queue_3584_; lean_object* v_subs_3585_; lean_object* v_handlers_3586_; lean_object* v_nextSub_3587_; lean_object* v_touched_3588_; lean_object* v_ports_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3627_; 
lean_dec_ref_known(v___x_3576_, 1);
v___x_3577_ = lean_st_ref_take(v___y_3528_);
v_model_3578_ = lean_ctor_get(v___x_3577_, 0);
v_live_3579_ = lean_ctor_get(v___x_3577_, 1);
v_next_3580_ = lean_ctor_get(v___x_3577_, 2);
v_tables_3581_ = lean_ctor_get(v___x_3577_, 3);
v_dirty_3582_ = lean_ctor_get_uint8(v___x_3577_, sizeof(void*)*10);
v_scheduled_3583_ = lean_ctor_get_uint8(v___x_3577_, sizeof(void*)*10 + 1);
v_queue_3584_ = lean_ctor_get(v___x_3577_, 4);
v_subs_3585_ = lean_ctor_get(v___x_3577_, 5);
v_handlers_3586_ = lean_ctor_get(v___x_3577_, 6);
v_nextSub_3587_ = lean_ctor_get(v___x_3577_, 7);
v_touched_3588_ = lean_ctor_get(v___x_3577_, 8);
v_ports_3589_ = lean_ctor_get(v___x_3577_, 9);
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3591_ = v___x_3577_;
v_isShared_3592_ = v_isSharedCheck_3627_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_ports_3589_);
lean_inc(v_touched_3588_);
lean_inc(v_nextSub_3587_);
lean_inc(v_handlers_3586_);
lean_inc(v_subs_3585_);
lean_inc(v_queue_3584_);
lean_inc(v_tables_3581_);
lean_inc(v_next_3580_);
lean_inc(v_live_3579_);
lean_inc(v_model_3578_);
lean_dec(v___x_3577_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3627_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v_model_3578_);
lean_ctor_set(v_reuseFailAlloc_3626_, 1, v_live_3579_);
lean_ctor_set(v_reuseFailAlloc_3626_, 2, v_next_3580_);
lean_ctor_set(v_reuseFailAlloc_3626_, 3, v_tables_3581_);
lean_ctor_set(v_reuseFailAlloc_3626_, 4, v_queue_3584_);
lean_ctor_set(v_reuseFailAlloc_3626_, 5, v_subs_3585_);
lean_ctor_set(v_reuseFailAlloc_3626_, 6, v_handlers_3586_);
lean_ctor_set(v_reuseFailAlloc_3626_, 7, v_nextSub_3587_);
lean_ctor_set(v_reuseFailAlloc_3626_, 8, v_touched_3588_);
lean_ctor_set(v_reuseFailAlloc_3626_, 9, v_ports_3589_);
lean_ctor_set_uint8(v_reuseFailAlloc_3626_, sizeof(void*)*10, v_dirty_3582_);
lean_ctor_set_uint8(v_reuseFailAlloc_3626_, sizeof(void*)*10 + 1, v_scheduled_3583_);
v___x_3594_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v_model_3597_; lean_object* v_live_3598_; lean_object* v_next_3599_; lean_object* v_tables_3600_; uint8_t v_dirty_3601_; uint8_t v_scheduled_3602_; lean_object* v_queue_3603_; uint8_t v_busy_3604_; lean_object* v_subs_3605_; lean_object* v_handlers_3606_; lean_object* v_nextSub_3607_; lean_object* v_touched_3608_; lean_object* v_ports_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3625_; 
lean_ctor_set_uint8(v___x_3594_, sizeof(void*)*10 + 2, v___y_3531_);
v___x_3595_ = lean_st_ref_put(v___y_3528_, v___x_3594_);
v___x_3596_ = lean_st_ref_get(v___y_3528_);
v_model_3597_ = lean_ctor_get(v___x_3596_, 0);
v_live_3598_ = lean_ctor_get(v___x_3596_, 1);
v_next_3599_ = lean_ctor_get(v___x_3596_, 2);
v_tables_3600_ = lean_ctor_get(v___x_3596_, 3);
v_dirty_3601_ = lean_ctor_get_uint8(v___x_3596_, sizeof(void*)*10);
v_scheduled_3602_ = lean_ctor_get_uint8(v___x_3596_, sizeof(void*)*10 + 1);
v_queue_3603_ = lean_ctor_get(v___x_3596_, 4);
v_busy_3604_ = lean_ctor_get_uint8(v___x_3596_, sizeof(void*)*10 + 2);
v_subs_3605_ = lean_ctor_get(v___x_3596_, 5);
v_handlers_3606_ = lean_ctor_get(v___x_3596_, 6);
v_nextSub_3607_ = lean_ctor_get(v___x_3596_, 7);
v_touched_3608_ = lean_ctor_get(v___x_3596_, 8);
v_ports_3609_ = lean_ctor_get(v___x_3596_, 9);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3611_ = v___x_3596_;
v_isShared_3612_ = v_isSharedCheck_3625_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_ports_3609_);
lean_inc(v_touched_3608_);
lean_inc(v_nextSub_3607_);
lean_inc(v_handlers_3606_);
lean_inc(v_subs_3605_);
lean_inc(v_queue_3603_);
lean_inc(v_tables_3600_);
lean_inc(v_next_3599_);
lean_inc(v_live_3598_);
lean_inc(v_model_3597_);
lean_dec(v___x_3596_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3625_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; uint8_t v___x_3614_; 
v___x_3613_ = lean_array_get_size(v_queue_3603_);
v___x_3614_ = lean_nat_dec_lt(v___y_3533_, v___x_3613_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; 
lean_del_object(v___x_3611_);
lean_dec(v_ports_3609_);
lean_dec_ref(v_touched_3608_);
lean_dec(v_nextSub_3607_);
lean_dec_ref(v_handlers_3606_);
lean_dec_ref(v_subs_3605_);
lean_dec_ref(v_queue_3603_);
lean_dec_ref(v_tables_3600_);
lean_dec(v_next_3599_);
lean_dec(v_live_3598_);
lean_dec(v_model_3597_);
lean_dec(v___y_3539_);
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
lean_inc_ref(v___y_3535_);
v___x_3615_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3535_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v___x_3616_; 
lean_dec_ref_known(v___x_3615_, 1);
v___x_3616_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3535_);
lean_dec_ref(v___y_3535_);
return v___x_3616_;
}
else
{
lean_dec_ref(v___y_3535_);
return v___x_3615_;
}
}
else
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3620_; 
v___x_3617_ = lean_array_fget(v_queue_3603_, v___y_3533_);
lean_dec(v___y_3533_);
v___x_3618_ = l_Array_extract___redArg(v_queue_3603_, v___y_3539_, v___x_3613_);
lean_dec_ref(v_queue_3603_);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 4, v___x_3618_);
v___x_3620_ = v___x_3611_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_model_3597_);
lean_ctor_set(v_reuseFailAlloc_3624_, 1, v_live_3598_);
lean_ctor_set(v_reuseFailAlloc_3624_, 2, v_next_3599_);
lean_ctor_set(v_reuseFailAlloc_3624_, 3, v_tables_3600_);
lean_ctor_set(v_reuseFailAlloc_3624_, 4, v___x_3618_);
lean_ctor_set(v_reuseFailAlloc_3624_, 5, v_subs_3605_);
lean_ctor_set(v_reuseFailAlloc_3624_, 6, v_handlers_3606_);
lean_ctor_set(v_reuseFailAlloc_3624_, 7, v_nextSub_3607_);
lean_ctor_set(v_reuseFailAlloc_3624_, 8, v_touched_3608_);
lean_ctor_set(v_reuseFailAlloc_3624_, 9, v_ports_3609_);
lean_ctor_set_uint8(v_reuseFailAlloc_3624_, sizeof(void*)*10, v_dirty_3601_);
lean_ctor_set_uint8(v_reuseFailAlloc_3624_, sizeof(void*)*10 + 1, v_scheduled_3602_);
lean_ctor_set_uint8(v_reuseFailAlloc_3624_, sizeof(void*)*10 + 2, v_busy_3604_);
v___x_3620_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3621_ = lean_st_ref_swap(v___y_3528_, v___x_3620_);
lean_dec(v___y_3528_);
lean_dec(v___x_3621_);
lean_inc_ref(v___y_3535_);
v___x_3622_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3535_, v___x_3617_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v___x_3623_; 
lean_dec_ref_known(v___x_3622_, 1);
v___x_3623_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3535_);
lean_dec_ref(v___y_3535_);
return v___x_3623_;
}
else
{
lean_dec_ref(v___y_3535_);
return v___x_3622_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3533_);
lean_dec(v___y_3528_);
return v___x_3576_;
}
}
}
}
else
{
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3533_);
lean_dec(v___y_3530_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3527_);
return v___x_3553_;
}
}
else
{
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3533_);
lean_dec(v___y_3530_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3527_);
return v___x_3550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3796_, lean_object* v_hot_3797_, lean_object* v_app_3798_, lean_object* v_a_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_Lasm_UI_App_run___redArg(v_inst_3796_, v_hot_3797_, v_app_3798_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3801_, lean_object* v_Model_3802_, lean_object* v_Msg_3803_, lean_object* v_inst_3804_, lean_object* v_hot_3805_, lean_object* v_app_3806_){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Lasm_UI_App_run___redArg(v_inst_3804_, v_hot_3805_, v_app_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3809_, lean_object* v_Model_3810_, lean_object* v_Msg_3811_, lean_object* v_inst_3812_, lean_object* v_hot_3813_, lean_object* v_app_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v_res_3816_; 
v_res_3816_ = l_Lasm_UI_App_run(v_Flags_3809_, v_Model_3810_, v_Msg_3811_, v_inst_3812_, v_hot_3813_, v_app_3814_);
return v_res_3816_;
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
