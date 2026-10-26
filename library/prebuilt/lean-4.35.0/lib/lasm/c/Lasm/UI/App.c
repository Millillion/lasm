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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Lasm_UI_diff___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lasm_Web_App_Port_subscribe(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_UI_Url_parse(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lasm_Web_App_onMessage(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__0_value;
static const lean_array_object l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_UI_App_run___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_App_run___redArg___closed__6;
static lean_once_cell_t l_Lasm_UI_App_run___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_App_run___redArg___closed__7;
static lean_once_cell_t l_Lasm_UI_App_run___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_App_run___redArg___closed__8;
static const lean_array_object l_Lasm_UI_App_run___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__9 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__9_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "https:"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__10 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__10_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__11 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_UI_App_run___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_App_run___redArg___closed__10_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_App_run___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__12 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg(lean_object* v_event_744_, lean_object* v_x_745_){
_start:
{
if (lean_obj_tag(v_x_745_) == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_box(0);
return v___x_746_;
}
else
{
lean_object* v_head_747_; lean_object* v_tail_748_; lean_object* v___x_749_; 
v_head_747_ = lean_ctor_get(v_x_745_, 0);
v_tail_748_ = lean_ctor_get(v_x_745_, 1);
v___x_749_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_744_, v_tail_748_);
if (lean_obj_tag(v___x_749_) == 0)
{
if (lean_obj_tag(v_head_747_) == 3)
{
lean_object* v_listener_750_; lean_object* v_handle_751_; lean_object* v_event_752_; uint8_t v___x_753_; 
v_listener_750_ = lean_ctor_get(v_head_747_, 0);
v_handle_751_ = lean_ctor_get(v_head_747_, 1);
v_event_752_ = lean_ctor_get(v_listener_750_, 0);
v___x_753_ = lean_string_dec_eq(v_event_752_, v_event_744_);
if (v___x_753_ == 0)
{
return v___x_749_;
}
else
{
lean_object* v___x_754_; 
lean_inc_ref(v_handle_751_);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v_handle_751_);
return v___x_754_;
}
}
else
{
return v___x_749_;
}
}
else
{
return v___x_749_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg___boxed(lean_object* v_event_755_, lean_object* v_x_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_755_, v_x_756_);
lean_dec(v_x_756_);
lean_dec_ref(v_event_755_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor(lean_object* v_Msg_758_, lean_object* v_event_759_, lean_object* v_x_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_759_, v_x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___boxed(lean_object* v_Msg_762_, lean_object* v_event_763_, lean_object* v_x_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_UI_Runtime_handlerFor(v_Msg_762_, v_event_763_, v_x_764_);
lean_dec(v_x_764_);
lean_dec_ref(v_event_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
if (lean_obj_tag(v_a_766_) == 0)
{
lean_object* v___x_768_; 
v___x_768_ = l_List_reverse___redArg(v_a_767_);
return v___x_768_;
}
else
{
lean_object* v_head_769_; lean_object* v_tail_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_779_; 
v_head_769_ = lean_ctor_get(v_a_766_, 0);
v_tail_770_ = lean_ctor_get(v_a_766_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v_a_766_);
if (v_isSharedCheck_779_ == 0)
{
v___x_772_ = v_a_766_;
v_isShared_773_ = v_isSharedCheck_779_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_tail_770_);
lean_inc(v_head_769_);
lean_dec(v_a_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_779_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_774_ = lean_array_mk(v_head_769_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v_a_767_);
lean_ctor_set(v___x_772_, 0, v___x_774_);
v___x_776_ = v___x_772_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_a_767_);
v___x_776_ = v_reuseFailAlloc_778_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
v_a_766_ = v_tail_770_;
v_a_767_ = v___x_776_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t v_sz_780_, size_t v_i_781_, lean_object* v_bs_782_){
_start:
{
uint8_t v___x_783_; 
v___x_783_ = lean_usize_dec_lt(v_i_781_, v_sz_780_);
if (v___x_783_ == 0)
{
return v_bs_782_;
}
else
{
lean_object* v_v_784_; lean_object* v___x_785_; lean_object* v_bs_x27_786_; lean_object* v___x_787_; size_t v___x_788_; size_t v___x_789_; lean_object* v___x_790_; 
v_v_784_ = lean_array_uget(v_bs_782_, v_i_781_);
v___x_785_ = lean_unsigned_to_nat(0u);
v_bs_x27_786_ = lean_array_uset(v_bs_782_, v_i_781_, v___x_785_);
v___x_787_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_787_, 0, v_v_784_);
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_add(v_i_781_, v___x_788_);
v___x_790_ = lean_array_uset(v_bs_x27_786_, v_i_781_, v___x_787_);
v_i_781_ = v___x_789_;
v_bs_782_ = v___x_790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object* v_sz_792_, lean_object* v_i_793_, lean_object* v_bs_794_){
_start:
{
size_t v_sz_boxed_795_; size_t v_i_boxed_796_; lean_object* v_res_797_; 
v_sz_boxed_795_ = lean_unbox_usize(v_sz_792_);
lean_dec(v_sz_792_);
v_i_boxed_796_ = lean_unbox_usize(v_i_793_);
lean_dec(v_i_793_);
v_res_797_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_boxed_795_, v_i_boxed_796_, v_bs_794_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t v_sz_798_, size_t v_i_799_, lean_object* v_bs_800_){
_start:
{
uint8_t v___x_801_; 
v___x_801_ = lean_usize_dec_lt(v_i_799_, v_sz_798_);
if (v___x_801_ == 0)
{
return v_bs_800_;
}
else
{
lean_object* v_v_802_; lean_object* v___x_803_; lean_object* v_bs_x27_804_; size_t v_sz_805_; size_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v_v_802_ = lean_array_uget(v_bs_800_, v_i_799_);
v___x_803_ = lean_unsigned_to_nat(0u);
v_bs_x27_804_ = lean_array_uset(v_bs_800_, v_i_799_, v___x_803_);
v_sz_805_ = lean_array_size(v_v_802_);
v___x_806_ = ((size_t)0ULL);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_805_, v___x_806_, v_v_802_);
v___x_808_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
v___x_809_ = ((size_t)1ULL);
v___x_810_ = lean_usize_add(v_i_799_, v___x_809_);
v___x_811_ = lean_array_uset(v_bs_x27_804_, v_i_799_, v___x_808_);
v_i_799_ = v___x_810_;
v_bs_800_ = v___x_811_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object* v_sz_813_, lean_object* v_i_814_, lean_object* v_bs_815_){
_start:
{
size_t v_sz_boxed_816_; size_t v_i_boxed_817_; lean_object* v_res_818_; 
v_sz_boxed_816_ = lean_unbox_usize(v_sz_813_);
lean_dec(v_sz_813_);
v_i_boxed_817_ = lean_unbox_usize(v_i_814_);
lean_dec(v_i_814_);
v_res_818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_boxed_816_, v_i_boxed_817_, v_bs_815_);
return v_res_818_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__2(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_822_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__1));
v___x_823_ = lean_unsigned_to_nat(2u);
v___x_824_ = lean_mk_empty_array_with_capacity(v___x_823_);
v___x_825_ = lean_array_push(v___x_824_, v___x_822_);
return v___x_825_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__9(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_838_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___x_839_ = lean_unsigned_to_nat(5u);
v___x_840_ = lean_mk_empty_array_with_capacity(v___x_839_);
v___x_841_ = lean_array_push(v___x_840_, v___x_838_);
return v___x_841_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__12(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_845_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__11));
v___x_846_ = lean_unsigned_to_nat(5u);
v___x_847_ = lean_mk_empty_array_with_capacity(v___x_846_);
v___x_848_ = lean_array_push(v___x_847_, v___x_845_);
return v___x_848_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__15(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_852_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__14));
v___x_853_ = lean_unsigned_to_nat(2u);
v___x_854_ = lean_mk_empty_array_with_capacity(v___x_853_);
v___x_855_ = lean_array_push(v___x_854_, v___x_852_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_856_){
_start:
{
switch(lean_obj_tag(v_x_856_))
{
case 0:
{
lean_object* v_ms_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_875_; 
v_ms_857_ = lean_ctor_get(v_x_856_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_875_ == 0)
{
v___x_859_ = v_x_856_;
v_isShared_860_ = v_isSharedCheck_875_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_ms_857_);
lean_dec(v_x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_875_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___y_862_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_868_ = lean_nat_to_int(v_ms_857_);
v___x_869_ = lean_nat_abs(v___x_868_);
v___x_870_ = lean_cstr_to_nat("9007199254740991");
v___x_871_ = lean_nat_dec_le(v___x_869_, v___x_870_);
lean_dec(v___x_869_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
v___x_872_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_868_);
v___y_862_ = v___x_872_;
goto v___jp_861_;
}
else
{
double v___x_873_; lean_object* v___x_874_; 
v___x_873_ = l_Float_ofInt(v___x_868_);
lean_dec(v___x_868_);
v___x_874_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_874_, 0, v___x_873_);
v___y_862_ = v___x_874_;
goto v___jp_861_;
}
v___jp_861_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
v___x_863_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_864_ = lean_array_push(v___x_863_, v___y_862_);
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 7);
lean_ctor_set(v___x_859_, 0, v___x_864_);
v___x_866_ = v___x_859_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
case 1:
{
lean_object* v___x_876_; 
v___x_876_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_876_;
}
case 2:
{
lean_object* v_event_877_; lean_object* v_paths_878_; uint8_t v_preventDefault_879_; uint8_t v_stopPropagation_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; size_t v_sz_885_; size_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_event_877_ = lean_ctor_get(v_x_856_, 0);
lean_inc_ref(v_event_877_);
v_paths_878_ = lean_ctor_get(v_x_856_, 1);
lean_inc(v_paths_878_);
v_preventDefault_879_ = lean_ctor_get_uint8(v_x_856_, sizeof(void*)*2);
v_stopPropagation_880_ = lean_ctor_get_uint8(v_x_856_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_856_, 2);
v___x_881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_881_, 0, v_event_877_);
v___x_882_ = lean_box(0);
v___x_883_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_878_, v___x_882_);
v___x_884_ = lean_array_mk(v___x_883_);
v_sz_885_ = lean_array_size(v___x_884_);
v___x_886_ = ((size_t)0ULL);
v___x_887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_885_, v___x_886_, v___x_884_);
v___x_888_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
v___x_889_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_889_, 0, v_preventDefault_879_);
v___x_890_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_890_, 0, v_stopPropagation_880_);
v___x_891_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__9, &l_Lasm_UI_Runtime_specData___closed__9_once, _init_l_Lasm_UI_Runtime_specData___closed__9);
v___x_892_ = lean_array_push(v___x_891_, v___x_881_);
v___x_893_ = lean_array_push(v___x_892_, v___x_888_);
v___x_894_ = lean_array_push(v___x_893_, v___x_889_);
v___x_895_ = lean_array_push(v___x_894_, v___x_890_);
v___x_896_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
return v___x_896_;
}
case 3:
{
lean_object* v_event_897_; lean_object* v_paths_898_; uint8_t v_preventDefault_899_; uint8_t v_stopPropagation_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; size_t v_sz_905_; size_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_event_897_ = lean_ctor_get(v_x_856_, 0);
lean_inc_ref(v_event_897_);
v_paths_898_ = lean_ctor_get(v_x_856_, 1);
lean_inc(v_paths_898_);
v_preventDefault_899_ = lean_ctor_get_uint8(v_x_856_, sizeof(void*)*2);
v_stopPropagation_900_ = lean_ctor_get_uint8(v_x_856_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_856_, 2);
v___x_901_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_901_, 0, v_event_897_);
v___x_902_ = lean_box(0);
v___x_903_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_898_, v___x_902_);
v___x_904_ = lean_array_mk(v___x_903_);
v_sz_905_ = lean_array_size(v___x_904_);
v___x_906_ = ((size_t)0ULL);
v___x_907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_905_, v___x_906_, v___x_904_);
v___x_908_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
v___x_909_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_909_, 0, v_preventDefault_899_);
v___x_910_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_910_, 0, v_stopPropagation_900_);
v___x_911_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__12, &l_Lasm_UI_Runtime_specData___closed__12_once, _init_l_Lasm_UI_Runtime_specData___closed__12);
v___x_912_ = lean_array_push(v___x_911_, v___x_901_);
v___x_913_ = lean_array_push(v___x_912_, v___x_908_);
v___x_914_ = lean_array_push(v___x_913_, v___x_909_);
v___x_915_ = lean_array_push(v___x_914_, v___x_910_);
v___x_916_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
return v___x_916_;
}
default: 
{
lean_object* v_name_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_927_; 
v_name_917_ = lean_ctor_get(v_x_856_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_927_ == 0)
{
v___x_919_ = v_x_856_;
v_isShared_920_ = v_isSharedCheck_927_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_name_917_);
lean_dec(v_x_856_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_927_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_name_917_);
v___x_922_ = v_reuseFailAlloc_926_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__15, &l_Lasm_UI_Runtime_specData___closed__15_once, _init_l_Lasm_UI_Runtime_specData___closed__15);
v___x_924_ = lean_array_push(v___x_923_, v___x_922_);
v___x_925_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_930_){
_start:
{
if (v_x_930_ == 0)
{
lean_object* v___x_931_; 
v___x_931_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_931_;
}
else
{
lean_object* v___x_932_; 
v___x_932_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_933_){
_start:
{
uint8_t v_x_22__boxed_934_; lean_object* v_res_935_; 
v_x_22__boxed_934_ = lean_unbox(v_x_933_);
v_res_935_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_934_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_936_, lean_object* v_e_937_){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_939_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_940_ = lean_string_append(v_what_936_, v___x_939_);
v___x_941_ = lean_io_error_to_string(v_e_937_);
v___x_942_ = lean_string_append(v___x_940_, v___x_941_);
lean_dec_ref(v___x_941_);
v___x_943_ = lean_box(0);
v___x_944_ = l_Lasm_UI_Runtime_Dom_error(v___x_942_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_951_ == 0)
{
lean_object* v_unused_952_; 
v_unused_952_ = lean_ctor_get(v___x_944_, 0);
lean_dec(v_unused_952_);
v___x_946_ = v___x_944_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_dec(v___x_944_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_943_);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_943_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v___x_944_, 0);
lean_dec(v_unused_960_);
v___x_954_ = v___x_944_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_dec(v___x_944_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
lean_ctor_set_tag(v___x_954_, 0);
lean_ctor_set(v___x_954_, 0, v___x_943_);
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_943_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_961_, lean_object* v_e_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lasm_UI_Runtime_report(v_what_961_, v_e_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_965_){
_start:
{
lean_object* v_ref_967_; lean_object* v___x_968_; uint8_t v_dirty_969_; 
v_ref_967_ = lean_ctor_get(v_c_965_, 1);
v___x_968_ = lean_st_ref_get(v_ref_967_);
v_dirty_969_ = lean_ctor_get_uint8(v___x_968_, sizeof(void*)*9);
if (v_dirty_969_ == 0)
{
lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec(v___x_968_);
v___x_970_ = lean_box(v_dirty_969_);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
else
{
uint8_t v_scheduled_972_; 
v_scheduled_972_ = lean_ctor_get_uint8(v___x_968_, sizeof(void*)*9 + 1);
if (v_scheduled_972_ == 0)
{
lean_object* v_model_973_; lean_object* v_live_974_; lean_object* v_next_975_; lean_object* v_tables_976_; lean_object* v_queue_977_; uint8_t v_busy_978_; lean_object* v_subs_979_; lean_object* v_handlers_980_; lean_object* v_nextSub_981_; lean_object* v_ports_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_992_; 
v_model_973_ = lean_ctor_get(v___x_968_, 0);
v_live_974_ = lean_ctor_get(v___x_968_, 1);
v_next_975_ = lean_ctor_get(v___x_968_, 2);
v_tables_976_ = lean_ctor_get(v___x_968_, 3);
v_queue_977_ = lean_ctor_get(v___x_968_, 4);
v_busy_978_ = lean_ctor_get_uint8(v___x_968_, sizeof(void*)*9 + 2);
v_subs_979_ = lean_ctor_get(v___x_968_, 5);
v_handlers_980_ = lean_ctor_get(v___x_968_, 6);
v_nextSub_981_ = lean_ctor_get(v___x_968_, 7);
v_ports_982_ = lean_ctor_get(v___x_968_, 8);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_992_ == 0)
{
v___x_984_ = v___x_968_;
v_isShared_985_ = v_isSharedCheck_992_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_ports_982_);
lean_inc(v_nextSub_981_);
lean_inc(v_handlers_980_);
lean_inc(v_subs_979_);
lean_inc(v_queue_977_);
lean_inc(v_tables_976_);
lean_inc(v_next_975_);
lean_inc(v_live_974_);
lean_inc(v_model_973_);
lean_dec(v___x_968_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_992_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_model_973_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_live_974_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_next_975_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v_tables_976_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v_queue_977_);
lean_ctor_set(v_reuseFailAlloc_991_, 5, v_subs_979_);
lean_ctor_set(v_reuseFailAlloc_991_, 6, v_handlers_980_);
lean_ctor_set(v_reuseFailAlloc_991_, 7, v_nextSub_981_);
lean_ctor_set(v_reuseFailAlloc_991_, 8, v_ports_982_);
lean_ctor_set_uint8(v_reuseFailAlloc_991_, sizeof(void*)*9, v_dirty_969_);
lean_ctor_set_uint8(v_reuseFailAlloc_991_, sizeof(void*)*9 + 2, v_busy_978_);
v___x_987_ = v_reuseFailAlloc_991_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
lean_ctor_set_uint8(v___x_987_, sizeof(void*)*9 + 1, v_dirty_969_);
v___x_988_ = lean_st_ref_swap(v_ref_967_, v___x_987_);
lean_dec(v___x_988_);
v___x_989_ = lean_box(v_dirty_969_);
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
return v___x_990_;
}
}
}
else
{
uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
lean_dec(v___x_968_);
v___x_993_ = 0;
v___x_994_ = lean_box(v___x_993_);
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
return v___x_995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_996_);
lean_dec_ref(v_c_996_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_999_, lean_object* v_Model_1000_, lean_object* v_Msg_1001_, lean_object* v_c_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1002_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1005_, lean_object* v_Model_1006_, lean_object* v_Msg_1007_, lean_object* v_c_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1005_, v_Model_1006_, v_Msg_1007_, v_c_1008_);
lean_dec_ref(v_c_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1024_; 
v___x_1013_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1011_);
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1016_ = v___x_1013_;
v_isShared_1017_ = v_isSharedCheck_1024_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1013_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1024_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
uint8_t v___x_1018_; 
v___x_1018_ = lean_unbox(v_a_1014_);
lean_dec(v_a_1014_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1021_; 
v___x_1019_ = lean_box(0);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v___x_1019_);
v___x_1021_ = v___x_1016_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
else
{
lean_object* v___x_1023_; 
lean_del_object(v___x_1016_);
v___x_1023_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1025_);
lean_dec_ref(v_c_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1028_, lean_object* v_Model_1029_, lean_object* v_Msg_1030_, lean_object* v_c_1031_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1034_, lean_object* v_Model_1035_, lean_object* v_Msg_1036_, lean_object* v_c_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1034_, v_Model_1035_, v_Msg_1036_, v_c_1037_);
lean_dec_ref(v_c_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1040_, lean_object* v_b_1041_, lean_object* v_x_1042_){
_start:
{
if (lean_obj_tag(v_x_1042_) == 0)
{
lean_dec(v_b_1041_);
lean_dec(v_a_1040_);
return v_x_1042_;
}
else
{
lean_object* v_key_1043_; lean_object* v_value_1044_; lean_object* v_tail_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1057_; 
v_key_1043_ = lean_ctor_get(v_x_1042_, 0);
v_value_1044_ = lean_ctor_get(v_x_1042_, 1);
v_tail_1045_ = lean_ctor_get(v_x_1042_, 2);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_x_1042_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1047_ = v_x_1042_;
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_tail_1045_);
lean_inc(v_value_1044_);
lean_inc(v_key_1043_);
lean_dec(v_x_1042_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
uint8_t v___x_1049_; 
lean_inc(v_a_1040_);
lean_inc(v_key_1043_);
v___x_1049_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1043_, v_a_1040_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1050_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1040_, v_b_1041_, v_tail_1045_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1050_);
v___x_1052_ = v___x_1047_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_key_1043_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_value_1044_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
else
{
lean_object* v___x_1055_; 
lean_dec(v_value_1044_);
lean_dec(v_key_1043_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v_b_1041_);
lean_ctor_set(v___x_1047_, 0, v_a_1040_);
v___x_1055_ = v___x_1047_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1040_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_b_1041_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v_tail_1045_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1058_, lean_object* v_x_1059_){
_start:
{
if (lean_obj_tag(v_x_1059_) == 0)
{
uint8_t v___x_1060_; 
lean_dec(v_a_1058_);
v___x_1060_ = 0;
return v___x_1060_;
}
else
{
lean_object* v_key_1061_; lean_object* v_tail_1062_; uint8_t v___x_1063_; 
v_key_1061_ = lean_ctor_get(v_x_1059_, 0);
lean_inc(v_key_1061_);
v_tail_1062_ = lean_ctor_get(v_x_1059_, 2);
lean_inc(v_tail_1062_);
lean_dec_ref_known(v_x_1059_, 3);
lean_inc(v_a_1058_);
v___x_1063_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1061_, v_a_1058_);
if (v___x_1063_ == 0)
{
v_x_1059_ = v_tail_1062_;
goto _start;
}
else
{
lean_dec(v_tail_1062_);
lean_dec(v_a_1058_);
return v___x_1063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1065_, lean_object* v_x_1066_){
_start:
{
uint8_t v_res_1067_; lean_object* v_r_1068_; 
v_res_1067_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1065_, v_x_1066_);
v_r_1068_ = lean_box(v_res_1067_);
return v_r_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1069_, lean_object* v_x_1070_){
_start:
{
if (lean_obj_tag(v_x_1070_) == 0)
{
return v_x_1069_;
}
else
{
lean_object* v_key_1071_; lean_object* v_value_1072_; lean_object* v_tail_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1096_; 
v_key_1071_ = lean_ctor_get(v_x_1070_, 0);
v_value_1072_ = lean_ctor_get(v_x_1070_, 1);
v_tail_1073_ = lean_ctor_get(v_x_1070_, 2);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_x_1070_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1075_ = v_x_1070_;
v_isShared_1076_ = v_isSharedCheck_1096_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_tail_1073_);
lean_inc(v_value_1072_);
lean_inc(v_key_1071_);
lean_dec(v_x_1070_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1096_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; uint64_t v___x_1078_; uint64_t v___x_1079_; uint64_t v___x_1080_; uint64_t v_fold_1081_; uint64_t v___x_1082_; uint64_t v___x_1083_; uint64_t v___x_1084_; size_t v___x_1085_; size_t v___x_1086_; size_t v___x_1087_; size_t v___x_1088_; size_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1077_ = lean_array_get_size(v_x_1069_);
v___x_1078_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1071_);
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
v___x_1090_ = lean_array_uget_borrowed(v_x_1069_, v___x_1089_);
lean_inc(v___x_1090_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 2, v___x_1090_);
v___x_1092_ = v___x_1075_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_key_1071_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_value_1072_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_array_uset(v_x_1069_, v___x_1089_, v___x_1092_);
v_x_1069_ = v___x_1093_;
v_x_1070_ = v_tail_1073_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1097_, lean_object* v_source_1098_, lean_object* v_target_1099_){
_start:
{
lean_object* v___x_1100_; uint8_t v___x_1101_; 
v___x_1100_ = lean_array_get_size(v_source_1098_);
v___x_1101_ = lean_nat_dec_lt(v_i_1097_, v___x_1100_);
if (v___x_1101_ == 0)
{
lean_dec_ref(v_source_1098_);
lean_dec(v_i_1097_);
return v_target_1099_;
}
else
{
lean_object* v_es_1102_; lean_object* v___x_1103_; lean_object* v_source_1104_; lean_object* v_target_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_es_1102_ = lean_array_fget(v_source_1098_, v_i_1097_);
v___x_1103_ = lean_box(0);
v_source_1104_ = lean_array_fset(v_source_1098_, v_i_1097_, v___x_1103_);
v_target_1105_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1099_, v_es_1102_);
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_nat_add(v_i_1097_, v___x_1106_);
lean_dec(v_i_1097_);
v_i_1097_ = v___x_1107_;
v_source_1098_ = v_source_1104_;
v_target_1099_ = v_target_1105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1109_){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v_nbuckets_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1110_ = lean_array_get_size(v_data_1109_);
v___x_1111_ = lean_unsigned_to_nat(2u);
v_nbuckets_1112_ = lean_nat_mul(v___x_1110_, v___x_1111_);
v___x_1113_ = lean_unsigned_to_nat(0u);
v___x_1114_ = lean_box(0);
v___x_1115_ = lean_mk_array(v_nbuckets_1112_, v___x_1114_);
v___x_1116_ = lean_array_propagate_mark(v_data_1109_, v___x_1115_);
v___x_1117_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1113_, v_data_1109_, v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1118_, lean_object* v_a_1119_, lean_object* v_b_1120_){
_start:
{
lean_object* v_size_1121_; lean_object* v_buckets_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1165_; 
v_size_1121_ = lean_ctor_get(v_m_1118_, 0);
v_buckets_1122_ = lean_ctor_get(v_m_1118_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_m_1118_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1124_ = v_m_1118_;
v_isShared_1125_ = v_isSharedCheck_1165_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_buckets_1122_);
lean_inc(v_size_1121_);
lean_dec(v_m_1118_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1165_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1126_; uint64_t v___x_1127_; uint64_t v___x_1128_; uint64_t v___x_1129_; uint64_t v_fold_1130_; uint64_t v___x_1131_; uint64_t v___x_1132_; uint64_t v___x_1133_; size_t v___x_1134_; size_t v___x_1135_; size_t v___x_1136_; size_t v___x_1137_; size_t v___x_1138_; lean_object* v_bkt_1139_; uint8_t v___x_1140_; 
v___x_1126_ = lean_array_get_size(v_buckets_1122_);
v___x_1127_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1119_);
v___x_1128_ = 32ULL;
v___x_1129_ = lean_uint64_shift_right(v___x_1127_, v___x_1128_);
v_fold_1130_ = lean_uint64_xor(v___x_1127_, v___x_1129_);
v___x_1131_ = 16ULL;
v___x_1132_ = lean_uint64_shift_right(v_fold_1130_, v___x_1131_);
v___x_1133_ = lean_uint64_xor(v_fold_1130_, v___x_1132_);
v___x_1134_ = lean_uint64_to_usize(v___x_1133_);
v___x_1135_ = lean_usize_of_nat(v___x_1126_);
v___x_1136_ = ((size_t)1ULL);
v___x_1137_ = lean_usize_sub(v___x_1135_, v___x_1136_);
v___x_1138_ = lean_usize_land(v___x_1134_, v___x_1137_);
v_bkt_1139_ = lean_array_uget_borrowed(v_buckets_1122_, v___x_1138_);
lean_inc(v_bkt_1139_);
lean_inc(v_a_1119_);
v___x_1140_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1119_, v_bkt_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; lean_object* v_size_x27_1142_; lean_object* v___x_1143_; lean_object* v_buckets_x27_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1141_ = lean_unsigned_to_nat(1u);
v_size_x27_1142_ = lean_nat_add(v_size_1121_, v___x_1141_);
lean_dec(v_size_1121_);
lean_inc(v_bkt_1139_);
v___x_1143_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1143_, 0, v_a_1119_);
lean_ctor_set(v___x_1143_, 1, v_b_1120_);
lean_ctor_set(v___x_1143_, 2, v_bkt_1139_);
v_buckets_x27_1144_ = lean_array_uset(v_buckets_1122_, v___x_1138_, v___x_1143_);
v___x_1145_ = lean_unsigned_to_nat(4u);
v___x_1146_ = lean_nat_mul(v_size_x27_1142_, v___x_1145_);
v___x_1147_ = lean_unsigned_to_nat(3u);
v___x_1148_ = lean_nat_div(v___x_1146_, v___x_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_array_get_size(v_buckets_x27_1144_);
v___x_1150_ = lean_nat_dec_le(v___x_1148_, v___x_1149_);
lean_dec(v___x_1148_);
if (v___x_1150_ == 0)
{
lean_object* v_val_1151_; lean_object* v___x_1153_; 
v_val_1151_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1144_);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 1, v_val_1151_);
lean_ctor_set(v___x_1124_, 0, v_size_x27_1142_);
v___x_1153_ = v___x_1124_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_size_x27_1142_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_val_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
else
{
lean_object* v___x_1156_; 
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 1, v_buckets_x27_1144_);
lean_ctor_set(v___x_1124_, 0, v_size_x27_1142_);
v___x_1156_ = v___x_1124_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_size_x27_1142_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_buckets_x27_1144_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v___x_1158_; lean_object* v_buckets_x27_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
lean_inc(v_bkt_1139_);
v___x_1158_ = lean_box(0);
v_buckets_x27_1159_ = lean_array_uset(v_buckets_1122_, v___x_1138_, v___x_1158_);
v___x_1160_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1119_, v_b_1120_, v_bkt_1139_);
v___x_1161_ = lean_array_uset(v_buckets_x27_1159_, v___x_1138_, v___x_1160_);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 1, v___x_1161_);
v___x_1163_ = v___x_1124_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_size_1121_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1166_, lean_object* v_fallback_1167_, lean_object* v_x_1168_){
_start:
{
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_dec(v_a_1166_);
lean_inc(v_fallback_1167_);
return v_fallback_1167_;
}
else
{
lean_object* v_key_1169_; lean_object* v_value_1170_; lean_object* v_tail_1171_; uint8_t v___x_1172_; 
v_key_1169_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_key_1169_);
v_value_1170_ = lean_ctor_get(v_x_1168_, 1);
lean_inc(v_value_1170_);
v_tail_1171_ = lean_ctor_get(v_x_1168_, 2);
lean_inc(v_tail_1171_);
lean_dec_ref_known(v_x_1168_, 3);
lean_inc(v_a_1166_);
v___x_1172_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1169_, v_a_1166_);
if (v___x_1172_ == 0)
{
lean_dec(v_value_1170_);
v_x_1168_ = v_tail_1171_;
goto _start;
}
else
{
lean_dec(v_tail_1171_);
lean_dec(v_a_1166_);
return v_value_1170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1174_, lean_object* v_fallback_1175_, lean_object* v_x_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1174_, v_fallback_1175_, v_x_1176_);
lean_dec(v_fallback_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1178_, lean_object* v_a_1179_, lean_object* v_fallback_1180_){
_start:
{
lean_object* v_buckets_1181_; lean_object* v___x_1182_; uint64_t v___x_1183_; uint64_t v___x_1184_; uint64_t v___x_1185_; uint64_t v_fold_1186_; uint64_t v___x_1187_; uint64_t v___x_1188_; uint64_t v___x_1189_; size_t v___x_1190_; size_t v___x_1191_; size_t v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_buckets_1181_ = lean_ctor_get(v_m_1178_, 1);
v___x_1182_ = lean_array_get_size(v_buckets_1181_);
v___x_1183_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1179_);
v___x_1184_ = 32ULL;
v___x_1185_ = lean_uint64_shift_right(v___x_1183_, v___x_1184_);
v_fold_1186_ = lean_uint64_xor(v___x_1183_, v___x_1185_);
v___x_1187_ = 16ULL;
v___x_1188_ = lean_uint64_shift_right(v_fold_1186_, v___x_1187_);
v___x_1189_ = lean_uint64_xor(v_fold_1186_, v___x_1188_);
v___x_1190_ = lean_uint64_to_usize(v___x_1189_);
v___x_1191_ = lean_usize_of_nat(v___x_1182_);
v___x_1192_ = ((size_t)1ULL);
v___x_1193_ = lean_usize_sub(v___x_1191_, v___x_1192_);
v___x_1194_ = lean_usize_land(v___x_1190_, v___x_1193_);
v___x_1195_ = lean_array_uget_borrowed(v_buckets_1181_, v___x_1194_);
lean_inc(v___x_1195_);
v___x_1196_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1179_, v_fallback_1180_, v___x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1197_, lean_object* v_a_1198_, lean_object* v_fallback_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1197_, v_a_1198_, v_fallback_1199_);
lean_dec(v_fallback_1199_);
lean_dec_ref(v_m_1197_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1201_, lean_object* v_b_1202_){
_start:
{
if (lean_obj_tag(v_as_x27_1201_) == 0)
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_b_1202_);
return v___x_1204_;
}
else
{
lean_object* v_head_1205_; lean_object* v_tail_1206_; lean_object* v_spec_1207_; lean_object* v_handle_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_head_1205_ = lean_ctor_get(v_as_x27_1201_, 0);
v_tail_1206_ = lean_ctor_get(v_as_x27_1201_, 1);
v_spec_1207_ = lean_ctor_get(v_head_1205_, 0);
v_handle_1208_ = lean_ctor_get(v_head_1205_, 1);
v___x_1209_ = lean_box(0);
lean_inc_n(v_spec_1207_, 2);
v___x_1210_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1202_, v_spec_1207_, v___x_1209_);
lean_inc_ref(v_handle_1208_);
v___x_1211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1211_, 0, v_handle_1208_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1202_, v_spec_1207_, v___x_1211_);
v_as_x27_1201_ = v_tail_1206_;
v_b_1202_ = v___x_1212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1214_, lean_object* v_b_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1214_, v_b_1215_);
lean_dec(v_as_x27_1214_);
return v_res_1217_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v_buckets_1220_; lean_object* v___x_1221_; uint64_t v___x_1222_; uint64_t v___x_1223_; uint64_t v___x_1224_; uint64_t v_fold_1225_; uint64_t v___x_1226_; uint64_t v___x_1227_; uint64_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_buckets_1220_ = lean_ctor_get(v_m_1218_, 1);
v___x_1221_ = lean_array_get_size(v_buckets_1220_);
v___x_1222_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1219_);
v___x_1223_ = 32ULL;
v___x_1224_ = lean_uint64_shift_right(v___x_1222_, v___x_1223_);
v_fold_1225_ = lean_uint64_xor(v___x_1222_, v___x_1224_);
v___x_1226_ = 16ULL;
v___x_1227_ = lean_uint64_shift_right(v_fold_1225_, v___x_1226_);
v___x_1228_ = lean_uint64_xor(v_fold_1225_, v___x_1227_);
v___x_1229_ = lean_uint64_to_usize(v___x_1228_);
v___x_1230_ = lean_usize_of_nat(v___x_1221_);
v___x_1231_ = ((size_t)1ULL);
v___x_1232_ = lean_usize_sub(v___x_1230_, v___x_1231_);
v___x_1233_ = lean_usize_land(v___x_1229_, v___x_1232_);
v___x_1234_ = lean_array_uget_borrowed(v_buckets_1220_, v___x_1233_);
lean_inc(v___x_1234_);
v___x_1235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1219_, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1236_, lean_object* v_a_1237_){
_start:
{
uint8_t v_res_1238_; lean_object* v_r_1239_; 
v_res_1238_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1236_, v_a_1237_);
lean_dec_ref(v_m_1236_);
v_r_1239_ = lean_box(v_res_1238_);
return v_r_1239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1240_, lean_object* v_x_1241_){
_start:
{
if (lean_obj_tag(v_x_1241_) == 0)
{
lean_dec(v_a_1240_);
return v_x_1241_;
}
else
{
lean_object* v_key_1242_; lean_object* v_value_1243_; lean_object* v_tail_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1253_; 
v_key_1242_ = lean_ctor_get(v_x_1241_, 0);
v_value_1243_ = lean_ctor_get(v_x_1241_, 1);
v_tail_1244_ = lean_ctor_get(v_x_1241_, 2);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_x_1241_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1246_ = v_x_1241_;
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_tail_1244_);
lean_inc(v_value_1243_);
lean_inc(v_key_1242_);
lean_dec(v_x_1241_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
uint8_t v___x_1248_; 
lean_inc(v_a_1240_);
lean_inc(v_key_1242_);
v___x_1248_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1242_, v_a_1240_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1251_; 
v___x_1249_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1240_, v_tail_1244_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 2, v___x_1249_);
v___x_1251_ = v___x_1246_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_key_1242_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_value_1243_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v___x_1249_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
else
{
lean_del_object(v___x_1246_);
lean_dec(v_value_1243_);
lean_dec(v_key_1242_);
lean_dec(v_a_1240_);
return v_tail_1244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_size_1256_; lean_object* v_buckets_1257_; lean_object* v___x_1258_; uint64_t v___x_1259_; uint64_t v___x_1260_; uint64_t v___x_1261_; uint64_t v_fold_1262_; uint64_t v___x_1263_; uint64_t v___x_1264_; uint64_t v___x_1265_; size_t v___x_1266_; size_t v___x_1267_; size_t v___x_1268_; size_t v___x_1269_; size_t v___x_1270_; lean_object* v_bkt_1271_; uint8_t v___x_1272_; 
v_size_1256_ = lean_ctor_get(v_m_1254_, 0);
v_buckets_1257_ = lean_ctor_get(v_m_1254_, 1);
v___x_1258_ = lean_array_get_size(v_buckets_1257_);
v___x_1259_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1255_);
v___x_1260_ = 32ULL;
v___x_1261_ = lean_uint64_shift_right(v___x_1259_, v___x_1260_);
v_fold_1262_ = lean_uint64_xor(v___x_1259_, v___x_1261_);
v___x_1263_ = 16ULL;
v___x_1264_ = lean_uint64_shift_right(v_fold_1262_, v___x_1263_);
v___x_1265_ = lean_uint64_xor(v_fold_1262_, v___x_1264_);
v___x_1266_ = lean_uint64_to_usize(v___x_1265_);
v___x_1267_ = lean_usize_of_nat(v___x_1258_);
v___x_1268_ = ((size_t)1ULL);
v___x_1269_ = lean_usize_sub(v___x_1267_, v___x_1268_);
v___x_1270_ = lean_usize_land(v___x_1266_, v___x_1269_);
v_bkt_1271_ = lean_array_uget_borrowed(v_buckets_1257_, v___x_1270_);
lean_inc(v_bkt_1271_);
lean_inc(v_a_1255_);
v___x_1272_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1255_, v_bkt_1271_);
if (v___x_1272_ == 0)
{
lean_dec(v_a_1255_);
return v_m_1254_;
}
else
{
lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1285_; 
lean_inc(v_bkt_1271_);
lean_inc_ref(v_buckets_1257_);
lean_inc(v_size_1256_);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_m_1254_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; lean_object* v_unused_1287_; 
v_unused_1286_ = lean_ctor_get(v_m_1254_, 1);
lean_dec(v_unused_1286_);
v_unused_1287_ = lean_ctor_get(v_m_1254_, 0);
lean_dec(v_unused_1287_);
v___x_1274_ = v_m_1254_;
v_isShared_1275_ = v_isSharedCheck_1285_;
goto v_resetjp_1273_;
}
else
{
lean_dec(v_m_1254_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1285_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v_buckets_x27_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1283_; 
v___x_1276_ = lean_box(0);
v_buckets_x27_1277_ = lean_array_uset(v_buckets_1257_, v___x_1270_, v___x_1276_);
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_nat_sub(v_size_1256_, v___x_1278_);
lean_dec(v_size_1256_);
v___x_1280_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1255_, v_bkt_1271_);
v___x_1281_ = lean_array_uset(v_buckets_x27_1277_, v___x_1270_, v___x_1280_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 1, v___x_1281_);
lean_ctor_set(v___x_1274_, 0, v___x_1279_);
v___x_1283_ = v___x_1274_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___x_1281_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
if (lean_obj_tag(v_a_1289_) == 0)
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1292_, 0, v_a_1290_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
else
{
lean_object* v_key_1294_; lean_object* v_value_1295_; lean_object* v_tail_1296_; uint8_t v___x_1297_; 
v_key_1294_ = lean_ctor_get(v_a_1289_, 0);
lean_inc_n(v_key_1294_, 2);
v_value_1295_ = lean_ctor_get(v_a_1289_, 1);
lean_inc(v_value_1295_);
v_tail_1296_ = lean_ctor_get(v_a_1289_, 2);
lean_inc(v_tail_1296_);
lean_dec_ref_known(v_a_1289_, 3);
v___x_1297_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1288_, v_key_1294_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; 
lean_inc(v_key_1294_);
v___x_1298_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1290_, v_key_1294_);
if (lean_obj_tag(v_key_1294_) == 4)
{
lean_dec_ref_known(v_key_1294_, 1);
lean_dec(v_value_1295_);
v_a_1289_ = v_tail_1296_;
v_a_1290_ = v___x_1298_;
goto _start;
}
else
{
lean_dec(v_key_1294_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1295_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_dec_ref_known(v___x_1300_, 1);
v_a_1289_ = v_tail_1296_;
v_a_1290_ = v___x_1298_;
goto _start;
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref(v___x_1298_);
lean_dec(v_tail_1296_);
v_a_1302_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1300_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1300_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_dec(v_value_1295_);
v_a_1289_ = v_tail_1296_;
v_a_1290_ = v___x_1298_;
goto _start;
}
}
}
else
{
lean_dec(v_value_1295_);
lean_dec(v_key_1294_);
v_a_1289_ = v_tail_1296_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1312_, v_a_1313_, v_a_1314_);
lean_dec_ref(v_a_1312_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1317_, lean_object* v_as_1318_, size_t v_sz_1319_, size_t v_i_1320_, lean_object* v_b_1321_){
_start:
{
uint8_t v___x_1323_; 
v___x_1323_ = lean_usize_dec_lt(v_i_1320_, v_sz_1319_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1324_, 0, v_b_1321_);
return v___x_1324_;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1326_; 
v_a_1325_ = lean_array_uget_borrowed(v_as_1318_, v_i_1320_);
lean_inc(v_a_1325_);
v___x_1326_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1317_, v_a_1325_, v_b_1321_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1339_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1339_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1339_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
if (lean_obj_tag(v_a_1327_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; 
v_a_1331_ = lean_ctor_get(v_a_1327_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v_a_1327_, 1);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 0, v_a_1331_);
v___x_1333_ = v___x_1329_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1331_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
else
{
lean_object* v_a_1335_; size_t v___x_1336_; size_t v___x_1337_; 
lean_del_object(v___x_1329_);
v_a_1335_ = lean_ctor_get(v_a_1327_, 0);
lean_inc(v_a_1335_);
lean_dec_ref_known(v_a_1327_, 1);
v___x_1336_ = ((size_t)1ULL);
v___x_1337_ = lean_usize_add(v_i_1320_, v___x_1336_);
v_i_1320_ = v___x_1337_;
v_b_1321_ = v_a_1335_;
goto _start;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1326_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1326_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1348_, lean_object* v_as_1349_, lean_object* v_sz_1350_, lean_object* v_i_1351_, lean_object* v_b_1352_, lean_object* v___y_1353_){
_start:
{
size_t v_sz_boxed_1354_; size_t v_i_boxed_1355_; lean_object* v_res_1356_; 
v_sz_boxed_1354_ = lean_unbox_usize(v_sz_1350_);
lean_dec(v_sz_1350_);
v_i_boxed_1355_ = lean_unbox_usize(v_i_1351_);
lean_dec(v_i_1351_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1348_, v_as_1349_, v_sz_boxed_1354_, v_i_boxed_1355_, v_b_1352_);
lean_dec_ref(v_as_1349_);
lean_dec_ref(v_a_1348_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1357_, lean_object* v_x_1358_){
_start:
{
if (lean_obj_tag(v_x_1358_) == 0)
{
lean_object* v___x_1359_; 
lean_dec(v_a_1357_);
v___x_1359_ = lean_box(0);
return v___x_1359_;
}
else
{
lean_object* v_key_1360_; lean_object* v_value_1361_; lean_object* v_tail_1362_; uint8_t v___x_1363_; 
v_key_1360_ = lean_ctor_get(v_x_1358_, 0);
lean_inc(v_key_1360_);
v_value_1361_ = lean_ctor_get(v_x_1358_, 1);
lean_inc(v_value_1361_);
v_tail_1362_ = lean_ctor_get(v_x_1358_, 2);
lean_inc(v_tail_1362_);
lean_dec_ref_known(v_x_1358_, 3);
lean_inc(v_a_1357_);
v___x_1363_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1360_, v_a_1357_);
if (v___x_1363_ == 0)
{
lean_dec(v_value_1361_);
v_x_1358_ = v_tail_1362_;
goto _start;
}
else
{
lean_object* v___x_1365_; 
lean_dec(v_tail_1362_);
lean_dec(v_a_1357_);
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_value_1361_);
return v___x_1365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v_buckets_1368_; lean_object* v___x_1369_; uint64_t v___x_1370_; uint64_t v___x_1371_; uint64_t v___x_1372_; uint64_t v_fold_1373_; uint64_t v___x_1374_; uint64_t v___x_1375_; uint64_t v___x_1376_; size_t v___x_1377_; size_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; size_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
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
v___x_1383_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1367_, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1384_, v_a_1385_);
lean_dec_ref(v_m_1384_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1387_, lean_object* v_fallback_1388_, lean_object* v_x_1389_){
_start:
{
if (lean_obj_tag(v_x_1389_) == 0)
{
lean_inc(v_fallback_1388_);
return v_fallback_1388_;
}
else
{
lean_object* v_key_1390_; lean_object* v_value_1391_; lean_object* v_tail_1392_; uint8_t v___x_1393_; 
v_key_1390_ = lean_ctor_get(v_x_1389_, 0);
v_value_1391_ = lean_ctor_get(v_x_1389_, 1);
v_tail_1392_ = lean_ctor_get(v_x_1389_, 2);
v___x_1393_ = lean_nat_dec_eq(v_key_1390_, v_a_1387_);
if (v___x_1393_ == 0)
{
v_x_1389_ = v_tail_1392_;
goto _start;
}
else
{
lean_inc(v_value_1391_);
return v_value_1391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1395_, lean_object* v_fallback_1396_, lean_object* v_x_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1395_, v_fallback_1396_, v_x_1397_);
lean_dec(v_x_1397_);
lean_dec(v_fallback_1396_);
lean_dec(v_a_1395_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1399_, lean_object* v_a_1400_, lean_object* v_fallback_1401_){
_start:
{
lean_object* v_buckets_1402_; lean_object* v___x_1403_; uint64_t v___x_1404_; uint64_t v___x_1405_; uint64_t v___x_1406_; uint64_t v_fold_1407_; uint64_t v___x_1408_; uint64_t v___x_1409_; uint64_t v___x_1410_; size_t v___x_1411_; size_t v___x_1412_; size_t v___x_1413_; size_t v___x_1414_; size_t v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_buckets_1402_ = lean_ctor_get(v_m_1399_, 1);
v___x_1403_ = lean_array_get_size(v_buckets_1402_);
v___x_1404_ = lean_uint64_of_nat(v_a_1400_);
v___x_1405_ = 32ULL;
v___x_1406_ = lean_uint64_shift_right(v___x_1404_, v___x_1405_);
v_fold_1407_ = lean_uint64_xor(v___x_1404_, v___x_1406_);
v___x_1408_ = 16ULL;
v___x_1409_ = lean_uint64_shift_right(v_fold_1407_, v___x_1408_);
v___x_1410_ = lean_uint64_xor(v_fold_1407_, v___x_1409_);
v___x_1411_ = lean_uint64_to_usize(v___x_1410_);
v___x_1412_ = lean_usize_of_nat(v___x_1403_);
v___x_1413_ = ((size_t)1ULL);
v___x_1414_ = lean_usize_sub(v___x_1412_, v___x_1413_);
v___x_1415_ = lean_usize_land(v___x_1411_, v___x_1414_);
v___x_1416_ = lean_array_uget_borrowed(v_buckets_1402_, v___x_1415_);
v___x_1417_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1400_, v_fallback_1401_, v___x_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1418_, lean_object* v_a_1419_, lean_object* v_fallback_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1418_, v_a_1419_, v_fallback_1420_);
lean_dec(v_fallback_1420_);
lean_dec(v_a_1419_);
lean_dec_ref(v_m_1418_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1423_, lean_object* v_value_1424_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1426_ = ((lean_object*)(l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1427_ = lean_unsigned_to_nat(1u);
v___x_1428_ = lean_mk_empty_array_with_capacity(v___x_1427_);
v___x_1429_ = lean_array_push(v___x_1428_, v_value_1424_);
v___x_1430_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_1423_, v___x_1426_, v___x_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1431_, lean_object* v_value_1432_, lean_object* v_a_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1431_, v_value_1432_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1440_);
lean_dec_ref(v_x_1440_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
if (lean_obj_tag(v_a_1442_) == 0)
{
lean_object* v___x_1444_; 
v___x_1444_ = l_List_reverse___redArg(v_a_1443_);
return v___x_1444_;
}
else
{
lean_object* v_head_1445_; lean_object* v_tail_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1460_; 
v_head_1445_ = lean_ctor_get(v_a_1442_, 0);
v_tail_1446_ = lean_ctor_get(v_a_1442_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_a_1442_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1448_ = v_a_1442_;
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_tail_1446_);
lean_inc(v_head_1445_);
lean_dec(v_a_1442_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_fst_1450_; lean_object* v_snd_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; 
v_fst_1450_ = lean_ctor_get(v_head_1445_, 0);
lean_inc(v_fst_1450_);
v_snd_1451_ = lean_ctor_get(v_head_1445_, 1);
lean_inc(v_snd_1451_);
lean_dec(v_head_1445_);
v___x_1452_ = lean_unsigned_to_nat(2u);
v___x_1453_ = lean_mk_empty_array_with_capacity(v___x_1452_);
v___x_1454_ = lean_array_push(v___x_1453_, v_fst_1450_);
v___x_1455_ = lean_array_push(v___x_1454_, v_snd_1451_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v_a_1443_);
lean_ctor_set(v___x_1448_, 0, v___x_1455_);
v___x_1457_ = v___x_1448_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1455_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_a_1443_);
v___x_1457_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
v_a_1442_ = v_tail_1446_;
v_a_1443_ = v___x_1457_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
if (lean_obj_tag(v_a_1461_) == 0)
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_array_to_list(v_a_1462_);
return v___x_1463_;
}
else
{
lean_object* v_head_1464_; 
v_head_1464_ = lean_ctor_get(v_a_1461_, 0);
if (lean_obj_tag(v_head_1464_) == 7)
{
lean_object* v_tail_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1487_; 
lean_inc_ref(v_head_1464_);
v_tail_1465_ = lean_ctor_get(v_a_1461_, 1);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_a_1461_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v_a_1461_, 0);
lean_dec(v_unused_1488_);
v___x_1467_ = v_a_1461_;
v_isShared_1468_ = v_isSharedCheck_1487_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_tail_1465_);
lean_dec(v_a_1461_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1487_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_items_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v_items_1469_ = lean_ctor_get(v_head_1464_, 0);
lean_inc_ref(v_items_1469_);
lean_dec_ref_known(v_head_1464_, 1);
v___x_1470_ = lean_array_get_size(v_items_1469_);
v___x_1471_ = lean_unsigned_to_nat(2u);
v___x_1472_ = lean_nat_dec_eq(v___x_1470_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_dec_ref(v_items_1469_);
lean_del_object(v___x_1467_);
v_a_1461_ = v_tail_1465_;
goto _start;
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = lean_array_fget_borrowed(v_items_1469_, v___x_1474_);
if (lean_obj_tag(v___x_1475_) == 4)
{
lean_object* v_s_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_s_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc_ref(v_s_1476_);
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = lean_array_fget(v_items_1469_, v___x_1477_);
lean_dec_ref(v_items_1469_);
if (lean_obj_tag(v___x_1478_) == 4)
{
lean_object* v_s_1479_; lean_object* v___x_1481_; 
v_s_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc_ref(v_s_1479_);
lean_dec_ref_known(v___x_1478_, 1);
if (v_isShared_1468_ == 0)
{
lean_ctor_set_tag(v___x_1467_, 0);
lean_ctor_set(v___x_1467_, 1, v_s_1479_);
lean_ctor_set(v___x_1467_, 0, v_s_1476_);
v___x_1481_ = v___x_1467_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_s_1476_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_s_1479_);
v___x_1481_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_array_push(v_a_1462_, v___x_1481_);
v_a_1461_ = v_tail_1465_;
v_a_1462_ = v___x_1482_;
goto _start;
}
}
else
{
lean_dec(v___x_1478_);
lean_dec_ref(v_s_1476_);
lean_del_object(v___x_1467_);
v_a_1461_ = v_tail_1465_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1469_);
lean_del_object(v___x_1467_);
v_a_1461_ = v_tail_1465_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1489_; 
v_tail_1489_ = lean_ctor_get(v_a_1461_, 1);
lean_inc(v_tail_1489_);
lean_dec_ref_known(v_a_1461_, 2);
v_a_1461_ = v_tail_1489_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1491_, lean_object* v_s_1492_){
_start:
{
lean_object* v_model_1493_; lean_object* v_live_1494_; lean_object* v_next_1495_; lean_object* v_tables_1496_; uint8_t v_dirty_1497_; uint8_t v_scheduled_1498_; lean_object* v_queue_1499_; lean_object* v_subs_1500_; lean_object* v_handlers_1501_; lean_object* v_nextSub_1502_; lean_object* v_ports_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_model_1493_ = lean_ctor_get(v_s_1492_, 0);
v_live_1494_ = lean_ctor_get(v_s_1492_, 1);
v_next_1495_ = lean_ctor_get(v_s_1492_, 2);
v_tables_1496_ = lean_ctor_get(v_s_1492_, 3);
v_dirty_1497_ = lean_ctor_get_uint8(v_s_1492_, sizeof(void*)*9);
v_scheduled_1498_ = lean_ctor_get_uint8(v_s_1492_, sizeof(void*)*9 + 1);
v_queue_1499_ = lean_ctor_get(v_s_1492_, 4);
v_subs_1500_ = lean_ctor_get(v_s_1492_, 5);
v_handlers_1501_ = lean_ctor_get(v_s_1492_, 6);
v_nextSub_1502_ = lean_ctor_get(v_s_1492_, 7);
v_ports_1503_ = lean_ctor_get(v_s_1492_, 8);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_s_1492_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v_s_1492_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_ports_1503_);
lean_inc(v_nextSub_1502_);
lean_inc(v_handlers_1501_);
lean_inc(v_subs_1500_);
lean_inc(v_queue_1499_);
lean_inc(v_tables_1496_);
lean_inc(v_next_1495_);
lean_inc(v_live_1494_);
lean_inc(v_model_1493_);
lean_dec(v_s_1492_);
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
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_model_1493_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_live_1494_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_next_1495_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_tables_1496_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_queue_1499_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_subs_1500_);
lean_ctor_set(v_reuseFailAlloc_1509_, 6, v_handlers_1501_);
lean_ctor_set(v_reuseFailAlloc_1509_, 7, v_nextSub_1502_);
lean_ctor_set(v_reuseFailAlloc_1509_, 8, v_ports_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1509_, sizeof(void*)*9, v_dirty_1497_);
lean_ctor_set_uint8(v_reuseFailAlloc_1509_, sizeof(void*)*9 + 1, v_scheduled_1498_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_ctor_set_uint8(v___x_1508_, sizeof(void*)*9 + 2, v_busy_1491_);
return v___x_1508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1511_, lean_object* v_s_1512_){
_start:
{
uint8_t v_busy_boxed_1513_; lean_object* v_res_1514_; 
v_busy_boxed_1513_ = lean_unbox(v_busy_1511_);
v_res_1514_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1513_, v_s_1512_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1515_, lean_object* v_msg_1516_, lean_object* v_x_1517_){
_start:
{
lean_object* v___x_1519_; 
lean_inc_ref(v_c_1515_);
v___x_1519_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1515_, v_msg_1516_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v___x_1520_; 
lean_dec_ref_known(v___x_1519_, 1);
v___x_1520_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1515_);
lean_dec_ref(v_c_1515_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1530_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; lean_object* v___x_1528_; 
v___x_1525_ = lean_alloc_ctor(2, 0, 1);
v___x_1526_ = lean_unbox(v_a_1521_);
lean_dec(v_a_1521_);
lean_ctor_set_uint8(v___x_1525_, 0, v___x_1526_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1525_);
v___x_1528_ = v___x_1523_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1525_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
v_a_1531_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1520_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1520_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec_ref(v_c_1515_);
v_a_1539_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1519_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1519_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1547_, lean_object* v_msg_1548_, lean_object* v_x_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1547_, v_msg_1548_, v_x_1549_);
lean_dec_ref(v_x_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1555_, lean_object* v_c_1556_, lean_object* v___f_1557_, lean_object* v_args_1558_){
_start:
{
lean_object* v___y_1561_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1591_ = lean_array_get_size(v_args_1558_);
v___x_1592_ = lean_unsigned_to_nat(5u);
v___x_1593_ = lean_nat_dec_eq(v___x_1591_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = lean_unsigned_to_nat(2u);
v___x_1595_ = lean_nat_dec_eq(v___x_1591_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_apply_1(v___f_1557_, v_args_1558_);
v___y_1561_ = v___x_1596_;
goto v___jp_1560_;
}
else
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_unsigned_to_nat(0u);
v___x_1598_ = lean_array_fget(v_args_1558_, v___x_1597_);
if (lean_obj_tag(v___x_1598_) == 2)
{
uint8_t v_b_1599_; 
v_b_1599_ = lean_ctor_get_uint8(v___x_1598_, 0);
if (v_b_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1600_ = lean_unsigned_to_nat(1u);
v___x_1601_ = lean_array_fget(v_args_1558_, v___x_1600_);
lean_dec_ref(v_args_1558_);
if (lean_obj_tag(v___x_1601_) == 4)
{
lean_object* v_s_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec_ref_known(v___x_1598_, 0);
lean_dec_ref(v___f_1557_);
v_s_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_s_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set_tag(v___x_1604_, 0);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_s_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
v___y_1561_ = v___x_1607_;
goto v___jp_1560_;
}
}
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1610_ = lean_mk_empty_array_with_capacity(v___x_1594_);
v___x_1611_ = lean_array_push(v___x_1610_, v___x_1598_);
v___x_1612_ = lean_array_push(v___x_1611_, v___x_1601_);
v___x_1613_ = lean_apply_1(v___f_1557_, v___x_1612_);
v___y_1561_ = v___x_1613_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1614_ = lean_unsigned_to_nat(1u);
v___x_1615_ = lean_array_fget(v_args_1558_, v___x_1614_);
lean_dec_ref(v_args_1558_);
v___x_1616_ = lean_mk_empty_array_with_capacity(v___x_1594_);
v___x_1617_ = lean_array_push(v___x_1616_, v___x_1598_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1615_);
v___x_1619_ = lean_apply_1(v___f_1557_, v___x_1618_);
v___y_1561_ = v___x_1619_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_array_fget(v_args_1558_, v___x_1620_);
lean_dec_ref(v_args_1558_);
v___x_1622_ = lean_mk_empty_array_with_capacity(v___x_1594_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1598_);
v___x_1624_ = lean_array_push(v___x_1623_, v___x_1621_);
v___x_1625_ = lean_apply_1(v___f_1557_, v___x_1624_);
v___y_1561_ = v___x_1625_;
goto v___jp_1560_;
}
}
}
else
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = lean_unsigned_to_nat(0u);
v___x_1627_ = lean_array_fget_borrowed(v_args_1558_, v___x_1626_);
if (lean_obj_tag(v___x_1627_) == 2)
{
uint8_t v_b_1628_; 
v_b_1628_ = lean_ctor_get_uint8(v___x_1627_, 0);
if (v_b_1628_ == 1)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = lean_unsigned_to_nat(2u);
v___x_1630_ = lean_array_fget_borrowed(v_args_1558_, v___x_1629_);
if (lean_obj_tag(v___x_1630_) == 4)
{
lean_object* v_s_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v_s_1631_ = lean_ctor_get(v___x_1630_, 0);
v___x_1632_ = lean_unsigned_to_nat(3u);
v___x_1633_ = lean_array_fget_borrowed(v_args_1558_, v___x_1632_);
if (lean_obj_tag(v___x_1633_) == 7)
{
lean_object* v_items_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_items_1634_ = lean_ctor_get(v___x_1633_, 0);
v___x_1635_ = lean_unsigned_to_nat(4u);
v___x_1636_ = lean_array_fget(v_args_1558_, v___x_1635_);
if (lean_obj_tag(v___x_1636_) == 4)
{
lean_object* v_s_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1655_; 
lean_inc_ref(v_items_1634_);
lean_inc_ref(v_s_1631_);
lean_dec_ref(v___f_1557_);
v_s_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1655_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_s_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1655_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___y_1642_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_unsigned_to_nat(1u);
v___x_1651_ = lean_array_fget(v_args_1558_, v___x_1650_);
lean_dec_ref(v_args_1558_);
if (lean_obj_tag(v___x_1651_) == 3)
{
double v_n_1652_; uint64_t v___x_1653_; lean_object* v___x_1654_; 
v_n_1652_ = lean_ctor_get_float(v___x_1651_, 0);
lean_dec_ref_known(v___x_1651_, 0);
v___x_1653_ = lean_float_to_uint64(v_n_1652_);
v___x_1654_ = lean_uint64_to_nat(v___x_1653_);
v___y_1642_ = v___x_1654_;
goto v___jp_1641_;
}
else
{
lean_dec(v___x_1651_);
v___y_1642_ = v___x_1626_;
goto v___jp_1641_;
}
v___jp_1641_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v___x_1643_ = lean_array_to_list(v_items_1634_);
v___x_1644_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1645_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1643_, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1646_, 0, v___y_1642_);
lean_ctor_set(v___x_1646_, 1, v_s_1631_);
lean_ctor_set(v___x_1646_, 2, v___x_1645_);
lean_ctor_set(v___x_1646_, 3, v_s_1637_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set_tag(v___x_1639_, 1);
lean_ctor_set(v___x_1639_, 0, v___x_1646_);
v___x_1648_ = v___x_1639_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
v___y_1561_ = v___x_1648_;
goto v___jp_1560_;
}
}
}
}
else
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_inc_ref(v___x_1633_);
lean_inc_ref(v___x_1630_);
lean_inc_ref(v___x_1627_);
v___x_1656_ = lean_unsigned_to_nat(1u);
v___x_1657_ = lean_array_fget(v_args_1558_, v___x_1656_);
lean_dec_ref(v_args_1558_);
v___x_1658_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1659_ = lean_array_push(v___x_1658_, v___x_1627_);
v___x_1660_ = lean_array_push(v___x_1659_, v___x_1657_);
v___x_1661_ = lean_array_push(v___x_1660_, v___x_1630_);
v___x_1662_ = lean_array_push(v___x_1661_, v___x_1633_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1636_);
v___x_1664_ = lean_apply_1(v___f_1557_, v___x_1663_);
v___y_1561_ = v___x_1664_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_inc(v___x_1633_);
lean_inc_ref(v___x_1630_);
lean_inc_ref(v___x_1627_);
v___x_1665_ = lean_unsigned_to_nat(1u);
v___x_1666_ = lean_array_fget(v_args_1558_, v___x_1665_);
v___x_1667_ = lean_unsigned_to_nat(4u);
v___x_1668_ = lean_array_fget(v_args_1558_, v___x_1667_);
lean_dec_ref(v_args_1558_);
v___x_1669_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1670_ = lean_array_push(v___x_1669_, v___x_1627_);
v___x_1671_ = lean_array_push(v___x_1670_, v___x_1666_);
v___x_1672_ = lean_array_push(v___x_1671_, v___x_1630_);
v___x_1673_ = lean_array_push(v___x_1672_, v___x_1633_);
v___x_1674_ = lean_array_push(v___x_1673_, v___x_1668_);
v___x_1675_ = lean_apply_1(v___f_1557_, v___x_1674_);
v___y_1561_ = v___x_1675_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_inc(v___x_1630_);
lean_inc_ref(v___x_1627_);
v___x_1676_ = lean_unsigned_to_nat(1u);
v___x_1677_ = lean_array_fget(v_args_1558_, v___x_1676_);
v___x_1678_ = lean_unsigned_to_nat(3u);
v___x_1679_ = lean_array_fget(v_args_1558_, v___x_1678_);
v___x_1680_ = lean_unsigned_to_nat(4u);
v___x_1681_ = lean_array_fget(v_args_1558_, v___x_1680_);
lean_dec_ref(v_args_1558_);
v___x_1682_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1627_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1677_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1630_);
v___x_1686_ = lean_array_push(v___x_1685_, v___x_1679_);
v___x_1687_ = lean_array_push(v___x_1686_, v___x_1681_);
v___x_1688_ = lean_apply_1(v___f_1557_, v___x_1687_);
v___y_1561_ = v___x_1688_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
lean_inc_ref(v___x_1627_);
v___x_1689_ = lean_unsigned_to_nat(1u);
v___x_1690_ = lean_array_fget(v_args_1558_, v___x_1689_);
v___x_1691_ = lean_unsigned_to_nat(2u);
v___x_1692_ = lean_array_fget(v_args_1558_, v___x_1691_);
v___x_1693_ = lean_unsigned_to_nat(3u);
v___x_1694_ = lean_array_fget(v_args_1558_, v___x_1693_);
v___x_1695_ = lean_unsigned_to_nat(4u);
v___x_1696_ = lean_array_fget(v_args_1558_, v___x_1695_);
lean_dec_ref(v_args_1558_);
v___x_1697_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1698_ = lean_array_push(v___x_1697_, v___x_1627_);
v___x_1699_ = lean_array_push(v___x_1698_, v___x_1690_);
v___x_1700_ = lean_array_push(v___x_1699_, v___x_1692_);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1694_);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1696_);
v___x_1703_ = lean_apply_1(v___f_1557_, v___x_1702_);
v___y_1561_ = v___x_1703_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_inc(v___x_1627_);
v___x_1704_ = lean_unsigned_to_nat(1u);
v___x_1705_ = lean_array_fget(v_args_1558_, v___x_1704_);
v___x_1706_ = lean_unsigned_to_nat(2u);
v___x_1707_ = lean_array_fget(v_args_1558_, v___x_1706_);
v___x_1708_ = lean_unsigned_to_nat(3u);
v___x_1709_ = lean_array_fget(v_args_1558_, v___x_1708_);
v___x_1710_ = lean_unsigned_to_nat(4u);
v___x_1711_ = lean_array_fget(v_args_1558_, v___x_1710_);
lean_dec_ref(v_args_1558_);
v___x_1712_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1627_);
v___x_1714_ = lean_array_push(v___x_1713_, v___x_1705_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1707_);
v___x_1716_ = lean_array_push(v___x_1715_, v___x_1709_);
v___x_1717_ = lean_array_push(v___x_1716_, v___x_1711_);
v___x_1718_ = lean_apply_1(v___f_1557_, v___x_1717_);
v___y_1561_ = v___x_1718_;
goto v___jp_1560_;
}
}
v___jp_1560_:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = lean_apply_1(v_handle_1555_, v___y_1561_);
lean_inc_ref(v_c_1556_);
v___x_1563_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1556_, v___x_1562_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1564_; 
lean_dec_ref_known(v___x_1563_, 1);
v___x_1564_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1556_);
lean_dec_ref(v_c_1556_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1574_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1569_; uint8_t v___x_1570_; lean_object* v___x_1572_; 
v___x_1569_ = lean_alloc_ctor(2, 0, 1);
v___x_1570_ = lean_unbox(v_a_1565_);
lean_dec(v_a_1565_);
lean_ctor_set_uint8(v___x_1569_, 0, v___x_1570_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 0, v___x_1569_);
v___x_1572_ = v___x_1567_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1569_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v_a_1575_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1564_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1564_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec_ref(v_c_1556_);
v_a_1583_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1563_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1563_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1719_, lean_object* v_c_1720_, lean_object* v___f_1721_, lean_object* v_args_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1719_, v_c_1720_, v___f_1721_, v_args_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1725_, lean_object* v_m_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1725_, v_m_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1729_, lean_object* v_e_1730_){
_start:
{
switch(lean_obj_tag(v_e_1730_))
{
case 0:
{
lean_object* v_msg_1732_; lean_object* v___x_1733_; 
v_msg_1732_ = lean_ctor_get(v_e_1730_, 0);
lean_inc(v_msg_1732_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1733_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1729_, v_msg_1732_);
return v___x_1733_;
}
case 1:
{
lean_object* v_ms_1734_; lean_object* v_msg_1735_; lean_object* v___f_1736_; lean_object* v___x_1737_; 
v_ms_1734_ = lean_ctor_get(v_e_1730_, 0);
lean_inc(v_ms_1734_);
v_msg_1735_ = lean_ctor_get(v_e_1730_, 1);
lean_inc(v_msg_1735_);
lean_dec_ref_known(v_e_1730_, 2);
v___f_1736_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1736_, 0, v_c_1729_);
lean_closure_set(v___f_1736_, 1, v_msg_1735_);
v___x_1737_ = l_Lasm_JS_Function_ofSyncFn(v___f_1736_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1734_, v_a_1738_);
return v___x_1739_;
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_ms_1734_);
v_a_1740_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1737_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1737_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
case 2:
{
lean_object* v_request_1748_; lean_object* v_handle_1749_; lean_object* v___f_1750_; lean_object* v___f_1751_; lean_object* v___x_1752_; 
v_request_1748_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_request_1748_);
v_handle_1749_ = lean_ctor_get(v_e_1730_, 1);
lean_inc(v_handle_1749_);
lean_dec_ref_known(v_e_1730_, 2);
v___f_1750_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1751_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1751_, 0, v_handle_1749_);
lean_closure_set(v___f_1751_, 1, v_c_1729_);
lean_closure_set(v___f_1751_, 2, v___f_1750_);
v___x_1752_ = l_Lasm_JS_Function_ofSyncFn(v___f_1751_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v_method_1754_; lean_object* v_url_1755_; lean_object* v_headers_1756_; lean_object* v_body_1757_; lean_object* v_credentials_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; size_t v_sz_1762_; size_t v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v_method_1754_ = lean_ctor_get(v_request_1748_, 0);
lean_inc_ref(v_method_1754_);
v_url_1755_ = lean_ctor_get(v_request_1748_, 1);
lean_inc_ref(v_url_1755_);
v_headers_1756_ = lean_ctor_get(v_request_1748_, 2);
lean_inc(v_headers_1756_);
v_body_1757_ = lean_ctor_get(v_request_1748_, 3);
lean_inc(v_body_1757_);
v_credentials_1758_ = lean_ctor_get(v_request_1748_, 4);
lean_inc_ref(v_credentials_1758_);
lean_dec_ref(v_request_1748_);
v___x_1759_ = lean_box(0);
v___x_1760_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1756_, v___x_1759_);
v___x_1761_ = lean_array_mk(v___x_1760_);
v_sz_1762_ = lean_array_size(v___x_1761_);
v___x_1763_ = ((size_t)0ULL);
v___x_1764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1762_, v___x_1763_, v___x_1761_);
v___x_1765_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
v___x_1766_ = l_Lasm_UI_Runtime_Dom_http(v_method_1754_, v_url_1755_, v___x_1765_, v_body_1757_, v_credentials_1758_, v_a_1753_);
return v___x_1766_;
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec_ref(v_request_1748_);
v_a_1767_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1752_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1752_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
case 3:
{
lean_object* v_n_1775_; lean_object* v_handle_1776_; size_t v___x_1777_; lean_object* v___x_1778_; 
v_n_1775_ = lean_ctor_get(v_e_1730_, 0);
lean_inc(v_n_1775_);
v_handle_1776_ = lean_ctor_get(v_e_1730_, 1);
lean_inc(v_handle_1776_);
lean_dec_ref_known(v_e_1730_, 2);
v___x_1777_ = lean_usize_of_nat(v_n_1775_);
lean_dec(v_n_1775_);
v___x_1778_ = lean_io_get_random_bytes(v___x_1777_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_a_1779_);
lean_dec_ref_known(v___x_1778_, 1);
v___x_1780_ = lean_apply_1(v_handle_1776_, v_a_1779_);
v___x_1781_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1729_, v___x_1780_);
return v___x_1781_;
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_dec(v_handle_1776_);
lean_dec_ref(v_c_1729_);
v_a_1782_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1778_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1778_);
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
case 4:
{
lean_object* v_handle_1790_; lean_object* v___x_1791_; 
v_handle_1790_ = lean_ctor_get(v_e_1730_, 0);
lean_inc(v_handle_1790_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1791_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1791_, 1);
v___x_1793_ = lean_apply_1(v_handle_1790_, v_a_1792_);
v___x_1794_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1729_, v___x_1793_);
return v___x_1794_;
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec(v_handle_1790_);
lean_dec_ref(v_c_1729_);
v_a_1795_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1791_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1791_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
case 5:
{
lean_object* v_url_1803_; uint8_t v_replace_1804_; lean_object* v___x_1805_; 
lean_dec_ref(v_c_1729_);
v_url_1803_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_url_1803_);
v_replace_1804_ = lean_ctor_get_uint8(v_e_1730_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1805_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1803_, v_replace_1804_);
return v___x_1805_;
}
case 6:
{
lean_object* v_n_1806_; lean_object* v___x_1807_; 
lean_dec_ref(v_c_1729_);
v_n_1806_ = lean_ctor_get(v_e_1730_, 0);
lean_inc(v_n_1806_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1807_ = l_Lasm_UI_Runtime_Dom_go(v_n_1806_);
return v___x_1807_;
}
case 7:
{
lean_object* v_url_1808_; lean_object* v___x_1809_; 
lean_dec_ref(v_c_1729_);
v_url_1808_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_url_1808_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1809_ = l_Lasm_UI_Runtime_Dom_load(v_url_1808_);
return v___x_1809_;
}
case 8:
{
uint8_t v_storage_1810_; lean_object* v_key_1811_; lean_object* v_value_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec_ref(v_c_1729_);
v_storage_1810_ = lean_ctor_get_uint8(v_e_1730_, sizeof(void*)*2);
v_key_1811_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_key_1811_);
v_value_1812_ = lean_ctor_get(v_e_1730_, 1);
lean_inc_ref(v_value_1812_);
lean_dec_ref_known(v_e_1730_, 2);
v___x_1813_ = l_Lasm_UI_Runtime_storageName(v_storage_1810_);
v___x_1814_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_1813_, v_key_1811_, v_value_1812_);
return v___x_1814_;
}
case 9:
{
uint8_t v_storage_1815_; lean_object* v_key_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_dec_ref(v_c_1729_);
v_storage_1815_ = lean_ctor_get_uint8(v_e_1730_, sizeof(void*)*1);
v_key_1816_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_key_1816_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1817_ = l_Lasm_UI_Runtime_storageName(v_storage_1815_);
v___x_1818_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_1817_, v_key_1816_);
return v___x_1818_;
}
case 10:
{
uint8_t v_storage_1819_; lean_object* v_key_1820_; lean_object* v_handle_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_storage_1819_ = lean_ctor_get_uint8(v_e_1730_, sizeof(void*)*2);
v_key_1820_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_key_1820_);
v_handle_1821_ = lean_ctor_get(v_e_1730_, 1);
lean_inc(v_handle_1821_);
lean_dec_ref_known(v_e_1730_, 2);
v___x_1822_ = l_Lasm_UI_Runtime_storageName(v_storage_1819_);
v___x_1823_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_1822_, v_key_1820_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = lean_apply_1(v_handle_1821_, v_a_1824_);
v___x_1826_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1729_, v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
lean_dec(v_handle_1821_);
lean_dec_ref(v_c_1729_);
v_a_1827_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1823_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1823_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
case 11:
{
lean_object* v_id_1835_; uint8_t v_blur_1836_; lean_object* v___x_1837_; 
lean_dec_ref(v_c_1729_);
v_id_1835_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_id_1835_);
v_blur_1836_ = lean_ctor_get_uint8(v_e_1730_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1837_ = l_Lasm_UI_Runtime_Dom_focus(v_id_1835_, v_blur_1836_);
return v___x_1837_;
}
case 12:
{
lean_object* v_name_1838_; lean_object* v_value_1839_; lean_object* v___x_1840_; 
lean_dec_ref(v_c_1729_);
v_name_1838_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_name_1838_);
v_value_1839_ = lean_ctor_get(v_e_1730_, 1);
lean_inc(v_value_1839_);
lean_dec_ref_known(v_e_1730_, 2);
v___x_1840_ = l_Lasm_Web_App_Raw_port(v_name_1838_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
v___x_1842_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_1841_, v_value_1839_);
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_value_1839_);
v_a_1843_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1840_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
case 13:
{
lean_object* v_title_1851_; lean_object* v___x_1852_; 
lean_dec_ref(v_c_1729_);
v_title_1851_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_title_1851_);
lean_dec_ref_known(v_e_1730_, 1);
v___x_1852_ = l_Lasm_UI_Runtime_Dom_title(v_title_1851_);
return v___x_1852_;
}
default: 
{
lean_object* v_run_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; 
v_run_1853_ = lean_ctor_get(v_e_1730_, 0);
lean_inc_ref(v_run_1853_);
lean_dec_ref_known(v_e_1730_, 1);
v___f_1854_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1854_, 0, v_c_1729_);
v___x_1855_ = lean_apply_2(v_run_1853_, v___f_1854_, lean_box(0));
return v___x_1855_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_1857_, lean_object* v_as_x27_1858_, lean_object* v_b_1859_){
_start:
{
if (lean_obj_tag(v_as_x27_1858_) == 0)
{
lean_object* v___x_1861_; 
lean_dec_ref(v_c_1857_);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_b_1859_);
return v___x_1861_;
}
else
{
lean_object* v_head_1862_; lean_object* v_tail_1863_; lean_object* v___x_1864_; lean_object* v___y_1866_; lean_object* v___x_1868_; 
v_head_1862_ = lean_ctor_get(v_as_x27_1858_, 0);
v_tail_1863_ = lean_ctor_get(v_as_x27_1858_, 1);
v___x_1864_ = lean_box(0);
lean_inc(v_head_1862_);
lean_inc_ref(v_c_1857_);
v___x_1868_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1857_, v_head_1862_);
if (lean_obj_tag(v___x_1868_) == 0)
{
v___y_1866_ = v___x_1868_;
goto v___jp_1865_;
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref_known(v___x_1868_, 1);
v___x_1870_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_1871_ = l_Lasm_UI_Runtime_report(v___x_1870_, v_a_1869_);
v___y_1866_ = v___x_1871_;
goto v___jp_1865_;
}
v___jp_1865_:
{
if (lean_obj_tag(v___y_1866_) == 0)
{
lean_dec_ref_known(v___y_1866_, 1);
v_as_x27_1858_ = v_tail_1863_;
v_b_1859_ = v___x_1864_;
goto _start;
}
else
{
lean_dec_ref(v_c_1857_);
return v___y_1866_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_1872_, lean_object* v_c_1873_){
_start:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; lean_object* v___x_1877_; lean_object* v_model_1878_; lean_object* v_live_1879_; lean_object* v_next_1880_; lean_object* v_tables_1881_; uint8_t v_scheduled_1882_; lean_object* v_queue_1883_; uint8_t v_busy_1884_; lean_object* v_subs_1885_; lean_object* v_handlers_1886_; lean_object* v_nextSub_1887_; lean_object* v_ports_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1910_; 
v___x_1875_ = lean_box(0);
v___x_1876_ = 1;
v___x_1877_ = lean_st_ref_get(v___x_1872_);
v_model_1878_ = lean_ctor_get(v___x_1877_, 0);
v_live_1879_ = lean_ctor_get(v___x_1877_, 1);
v_next_1880_ = lean_ctor_get(v___x_1877_, 2);
v_tables_1881_ = lean_ctor_get(v___x_1877_, 3);
v_scheduled_1882_ = lean_ctor_get_uint8(v___x_1877_, sizeof(void*)*9 + 1);
v_queue_1883_ = lean_ctor_get(v___x_1877_, 4);
v_busy_1884_ = lean_ctor_get_uint8(v___x_1877_, sizeof(void*)*9 + 2);
v_subs_1885_ = lean_ctor_get(v___x_1877_, 5);
v_handlers_1886_ = lean_ctor_get(v___x_1877_, 6);
v_nextSub_1887_ = lean_ctor_get(v___x_1877_, 7);
v_ports_1888_ = lean_ctor_get(v___x_1877_, 8);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1890_ = v___x_1877_;
v_isShared_1891_ = v_isSharedCheck_1910_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_ports_1888_);
lean_inc(v_nextSub_1887_);
lean_inc(v_handlers_1886_);
lean_inc(v_subs_1885_);
lean_inc(v_queue_1883_);
lean_inc(v_tables_1881_);
lean_inc(v_next_1880_);
lean_inc(v_live_1879_);
lean_inc(v_model_1878_);
lean_dec(v___x_1877_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1910_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v___x_1892_ = lean_unsigned_to_nat(0u);
v___x_1893_ = lean_array_get_size(v_queue_1883_);
v___x_1894_ = lean_nat_dec_lt(v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
lean_object* v___x_1895_; 
lean_del_object(v___x_1890_);
lean_dec(v_ports_1888_);
lean_dec(v_nextSub_1887_);
lean_dec_ref(v_handlers_1886_);
lean_dec_ref(v_subs_1885_);
lean_dec_ref(v_queue_1883_);
lean_dec_ref(v_tables_1881_);
lean_dec(v_next_1880_);
lean_dec(v_live_1879_);
lean_dec(v_model_1878_);
lean_dec_ref(v_c_1873_);
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1875_);
return v___x_1895_;
}
else
{
lean_object* v_app_1896_; lean_object* v_update_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v_fst_1900_; lean_object* v_snd_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1905_; 
v_app_1896_ = lean_ctor_get(v_c_1873_, 0);
v_update_1897_ = lean_ctor_get(v_app_1896_, 1);
v___x_1898_ = lean_array_fget_borrowed(v_queue_1883_, v___x_1892_);
lean_inc_ref(v_update_1897_);
lean_inc(v___x_1898_);
v___x_1899_ = lean_apply_2(v_update_1897_, v___x_1898_, v_model_1878_);
v_fst_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_fst_1900_);
v_snd_1901_ = lean_ctor_get(v___x_1899_, 1);
lean_inc(v_snd_1901_);
lean_dec_ref(v___x_1899_);
v___x_1902_ = lean_unsigned_to_nat(1u);
v___x_1903_ = l_Array_extract___redArg(v_queue_1883_, v___x_1902_, v___x_1893_);
lean_dec_ref(v_queue_1883_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 4, v___x_1903_);
lean_ctor_set(v___x_1890_, 0, v_fst_1900_);
v___x_1905_ = v___x_1890_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_fst_1900_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_live_1879_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v_next_1880_);
lean_ctor_set(v_reuseFailAlloc_1909_, 3, v_tables_1881_);
lean_ctor_set(v_reuseFailAlloc_1909_, 4, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1909_, 5, v_subs_1885_);
lean_ctor_set(v_reuseFailAlloc_1909_, 6, v_handlers_1886_);
lean_ctor_set(v_reuseFailAlloc_1909_, 7, v_nextSub_1887_);
lean_ctor_set(v_reuseFailAlloc_1909_, 8, v_ports_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1909_, sizeof(void*)*9 + 1, v_scheduled_1882_);
lean_ctor_set_uint8(v_reuseFailAlloc_1909_, sizeof(void*)*9 + 2, v_busy_1884_);
v___x_1905_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_ctor_set_uint8(v___x_1905_, sizeof(void*)*9, v___x_1876_);
v___x_1906_ = lean_st_ref_swap(v___x_1872_, v___x_1905_);
lean_dec(v___x_1906_);
lean_inc_ref(v_c_1873_);
v___x_1907_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1873_, v_snd_1901_, v___x_1875_);
lean_dec(v_snd_1901_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_dec_ref_known(v___x_1907_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_1873_);
return v___x_1907_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1911_ = lean_box(0);
v___x_1912_ = lean_unsigned_to_nat(16u);
v___x_1913_ = lean_mk_array(v___x_1912_, v___x_1911_);
return v___x_1913_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1914_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_1915_ = lean_unsigned_to_nat(0u);
v___x_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
lean_ctor_set(v___x_1916_, 1, v___x_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_1917_, lean_object* v_c_1918_, lean_object* v_as_x27_1919_, lean_object* v_b_1920_){
_start:
{
if (lean_obj_tag(v_as_x27_1919_) == 0)
{
lean_object* v___x_1922_; 
lean_dec_ref(v_c_1918_);
lean_dec(v_v_1917_);
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_b_1920_);
return v___x_1922_;
}
else
{
lean_object* v_head_1923_; lean_object* v_tail_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_head_1923_ = lean_ctor_get(v_as_x27_1919_, 0);
v_tail_1924_ = lean_ctor_get(v_as_x27_1919_, 1);
v___x_1925_ = lean_box(0);
v___x_1926_ = lean_unsigned_to_nat(1u);
v___x_1927_ = lean_mk_empty_array_with_capacity(v___x_1926_);
lean_inc(v_v_1917_);
v___x_1928_ = lean_array_push(v___x_1927_, v_v_1917_);
lean_inc(v_head_1923_);
v___x_1929_ = lean_apply_1(v_head_1923_, v___x_1928_);
if (lean_obj_tag(v___x_1929_) == 1)
{
lean_object* v_val_1930_; lean_object* v___x_1931_; 
v_val_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_val_1930_);
lean_dec_ref_known(v___x_1929_, 1);
lean_inc_ref(v_c_1918_);
v___x_1931_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1918_, v_val_1930_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_dec_ref_known(v___x_1931_, 1);
v_as_x27_1919_ = v_tail_1924_;
v_b_1920_ = v___x_1925_;
goto _start;
}
else
{
lean_dec_ref(v_c_1918_);
lean_dec(v_v_1917_);
return v___x_1931_;
}
}
else
{
lean_dec(v___x_1929_);
v_as_x27_1919_ = v_tail_1924_;
v_b_1920_ = v___x_1925_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_1934_, lean_object* v_name_1935_, lean_object* v_c_1936_, lean_object* v_v_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v_subs_1940_; lean_object* v_handlers_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1939_ = lean_st_ref_get(v_ref_1934_);
v_subs_1940_ = lean_ctor_get(v___x_1939_, 5);
lean_inc_ref(v_subs_1940_);
v_handlers_1941_ = lean_ctor_get(v___x_1939_, 6);
lean_inc_ref(v_handlers_1941_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1942_, 0, v_name_1935_);
v___x_1943_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_1940_, v___x_1942_);
lean_dec_ref(v_subs_1940_);
if (lean_obj_tag(v___x_1943_) == 1)
{
lean_object* v_val_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_val_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_val_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v___x_1945_ = lean_box(0);
v___x_1946_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_1941_, v_val_1944_, v___x_1945_);
lean_dec(v_val_1944_);
lean_dec_ref(v_handlers_1941_);
v___x_1947_ = lean_box(0);
lean_inc_ref(v_c_1936_);
v___x_1948_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_1937_, v_c_1936_, v___x_1946_, v___x_1947_);
lean_dec(v___x_1946_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v___x_1949_; 
lean_dec_ref_known(v___x_1948_, 1);
v___x_1949_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1936_);
lean_dec_ref(v_c_1936_);
return v___x_1949_;
}
else
{
lean_dec_ref(v_c_1936_);
return v___x_1948_;
}
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_dec(v___x_1943_);
lean_dec_ref(v_handlers_1941_);
lean_dec(v_v_1937_);
lean_dec_ref(v_c_1936_);
v___x_1950_ = lean_box(0);
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
return v___x_1951_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_1952_, lean_object* v_name_1953_, lean_object* v_c_1954_, lean_object* v_v_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_1952_, v_name_1953_, v_c_1954_, v_v_1955_);
lean_dec(v_ref_1952_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_1958_, lean_object* v_name_1959_){
_start:
{
lean_object* v_ref_1961_; lean_object* v___f_1962_; lean_object* v___x_1963_; lean_object* v_model_1964_; lean_object* v_live_1965_; lean_object* v_next_1966_; lean_object* v_tables_1967_; uint8_t v_dirty_1968_; uint8_t v_scheduled_1969_; lean_object* v_queue_1970_; uint8_t v_busy_1971_; lean_object* v_subs_1972_; lean_object* v_handlers_1973_; lean_object* v_nextSub_1974_; lean_object* v_ports_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1995_; 
v_ref_1961_ = lean_ctor_get(v_c_1958_, 1);
lean_inc_n(v_ref_1961_, 2);
lean_inc_ref(v_name_1959_);
v___f_1962_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1962_, 0, v_ref_1961_);
lean_closure_set(v___f_1962_, 1, v_name_1959_);
lean_closure_set(v___f_1962_, 2, v_c_1958_);
v___x_1963_ = lean_st_ref_take(v_ref_1961_);
v_model_1964_ = lean_ctor_get(v___x_1963_, 0);
v_live_1965_ = lean_ctor_get(v___x_1963_, 1);
v_next_1966_ = lean_ctor_get(v___x_1963_, 2);
v_tables_1967_ = lean_ctor_get(v___x_1963_, 3);
v_dirty_1968_ = lean_ctor_get_uint8(v___x_1963_, sizeof(void*)*9);
v_scheduled_1969_ = lean_ctor_get_uint8(v___x_1963_, sizeof(void*)*9 + 1);
v_queue_1970_ = lean_ctor_get(v___x_1963_, 4);
v_busy_1971_ = lean_ctor_get_uint8(v___x_1963_, sizeof(void*)*9 + 2);
v_subs_1972_ = lean_ctor_get(v___x_1963_, 5);
v_handlers_1973_ = lean_ctor_get(v___x_1963_, 6);
v_nextSub_1974_ = lean_ctor_get(v___x_1963_, 7);
v_ports_1975_ = lean_ctor_get(v___x_1963_, 8);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1977_ = v___x_1963_;
v_isShared_1978_ = v_isSharedCheck_1995_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_ports_1975_);
lean_inc(v_nextSub_1974_);
lean_inc(v_handlers_1973_);
lean_inc(v_subs_1972_);
lean_inc(v_queue_1970_);
lean_inc(v_tables_1967_);
lean_inc(v_next_1966_);
lean_inc(v_live_1965_);
lean_inc(v_model_1964_);
lean_dec(v___x_1963_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1995_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1979_; lean_object* v___x_1981_; 
lean_inc_ref(v_name_1959_);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_name_1959_);
lean_ctor_set(v___x_1979_, 1, v_ports_1975_);
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 8, v___x_1979_);
v___x_1981_ = v___x_1977_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_model_1964_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_live_1965_);
lean_ctor_set(v_reuseFailAlloc_1994_, 2, v_next_1966_);
lean_ctor_set(v_reuseFailAlloc_1994_, 3, v_tables_1967_);
lean_ctor_set(v_reuseFailAlloc_1994_, 4, v_queue_1970_);
lean_ctor_set(v_reuseFailAlloc_1994_, 5, v_subs_1972_);
lean_ctor_set(v_reuseFailAlloc_1994_, 6, v_handlers_1973_);
lean_ctor_set(v_reuseFailAlloc_1994_, 7, v_nextSub_1974_);
lean_ctor_set(v_reuseFailAlloc_1994_, 8, v___x_1979_);
lean_ctor_set_uint8(v_reuseFailAlloc_1994_, sizeof(void*)*9, v_dirty_1968_);
lean_ctor_set_uint8(v_reuseFailAlloc_1994_, sizeof(void*)*9 + 1, v_scheduled_1969_);
lean_ctor_set_uint8(v_reuseFailAlloc_1994_, sizeof(void*)*9 + 2, v_busy_1971_);
v___x_1981_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1982_ = lean_st_ref_put(v_ref_1961_, v___x_1981_);
lean_dec(v_ref_1961_);
v___x_1983_ = l_Lasm_Web_App_Raw_port(v_name_1959_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1985_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v___x_1985_ = l_Lasm_Web_App_Port_subscribe(v_a_1984_, v___f_1962_);
return v___x_1985_;
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v___f_1962_);
v_a_1986_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1983_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1983_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_1996_, lean_object* v_c_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
if (lean_obj_tag(v_a_1998_) == 0)
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_dec_ref(v_c_1997_);
v___x_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2001_, 0, v_a_1999_);
v___x_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
return v___x_2002_;
}
else
{
lean_object* v_snd_2003_; lean_object* v_key_2004_; lean_object* v_value_2005_; lean_object* v_tail_2006_; lean_object* v_fst_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2077_; 
v_snd_2003_ = lean_ctor_get(v_a_1999_, 1);
lean_inc(v_snd_2003_);
v_key_2004_ = lean_ctor_get(v_a_1998_, 0);
lean_inc(v_key_2004_);
v_value_2005_ = lean_ctor_get(v_a_1998_, 1);
lean_inc(v_value_2005_);
v_tail_2006_ = lean_ctor_get(v_a_1998_, 2);
lean_inc(v_tail_2006_);
lean_dec_ref_known(v_a_1998_, 3);
v_fst_2007_ = lean_ctor_get(v_a_1999_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_a_1999_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; 
v_unused_2078_ = lean_ctor_get(v_a_1999_, 1);
lean_dec(v_unused_2078_);
v___x_2009_ = v_a_1999_;
v_isShared_2010_ = v_isSharedCheck_2077_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_fst_2007_);
lean_dec(v_a_1999_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2077_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v_fst_2011_; lean_object* v_snd_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2076_; 
v_fst_2011_ = lean_ctor_get(v_snd_2003_, 0);
v_snd_2012_ = lean_ctor_get(v_snd_2003_, 1);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_snd_2003_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2014_ = v_snd_2003_;
v_isShared_2015_ = v_isSharedCheck_2076_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_snd_2012_);
lean_inc(v_fst_2011_);
lean_dec(v_snd_2003_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2076_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2016_; 
lean_inc(v_key_2004_);
v___x_2016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2007_, v_key_2004_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2017_ = lean_unsigned_to_nat(1u);
v___x_2018_ = lean_nat_add(v_snd_2012_, v___x_2017_);
lean_inc_n(v_snd_2012_, 2);
lean_inc(v_key_2004_);
v___x_2019_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2007_, v_key_2004_, v_snd_2012_);
v___x_2020_ = l_List_reverse___redArg(v_value_2005_);
v___x_2021_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2011_, v_snd_2012_, v___x_2020_);
if (lean_obj_tag(v_key_2004_) == 4)
{
lean_object* v_name_2022_; lean_object* v___x_2023_; lean_object* v_ports_2024_; uint8_t v___x_2025_; 
lean_dec(v_snd_2012_);
v_name_2022_ = lean_ctor_get(v_key_2004_, 0);
lean_inc_ref(v_name_2022_);
lean_dec_ref_known(v_key_2004_, 1);
v___x_2023_ = lean_st_ref_get(v___x_1996_);
v_ports_2024_ = lean_ctor_get(v___x_2023_, 8);
lean_inc(v_ports_2024_);
lean_dec(v___x_2023_);
v___x_2025_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2022_, v_ports_2024_);
lean_dec(v_ports_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; 
lean_inc_ref(v_c_1997_);
v___x_2026_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_1997_, v_name_2022_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v___x_2028_; 
lean_dec_ref_known(v___x_2026_, 1);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 1, v___x_2018_);
lean_ctor_set(v___x_2014_, 0, v___x_2021_);
v___x_2028_ = v___x_2014_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v___x_2018_);
v___x_2028_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2030_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v___x_2028_);
lean_ctor_set(v___x_2009_, 0, v___x_2019_);
v___x_2030_ = v___x_2009_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2019_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
v_a_1998_ = v_tail_2006_;
v_a_1999_ = v___x_2030_;
goto _start;
}
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec_ref(v___x_2021_);
lean_dec_ref(v___x_2019_);
lean_dec(v___x_2018_);
lean_del_object(v___x_2014_);
lean_del_object(v___x_2009_);
lean_dec(v_tail_2006_);
lean_dec_ref(v_c_1997_);
v_a_2034_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2026_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2026_);
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
else
{
lean_object* v___x_2043_; 
lean_dec_ref(v_name_2022_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 1, v___x_2018_);
lean_ctor_set(v___x_2014_, 0, v___x_2021_);
v___x_2043_ = v___x_2014_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v___x_2018_);
v___x_2043_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2045_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v___x_2043_);
lean_ctor_set(v___x_2009_, 0, v___x_2019_);
v___x_2045_ = v___x_2009_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2019_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
v_a_1998_ = v_tail_2006_;
v_a_1999_ = v___x_2045_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = l_Lasm_UI_Runtime_specData(v_key_2004_);
v___x_2050_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2012_, v___x_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v___x_2052_; 
lean_dec_ref_known(v___x_2050_, 1);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 1, v___x_2018_);
lean_ctor_set(v___x_2014_, 0, v___x_2021_);
v___x_2052_ = v___x_2014_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v___x_2018_);
v___x_2052_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_2054_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v___x_2052_);
lean_ctor_set(v___x_2009_, 0, v___x_2019_);
v___x_2054_ = v___x_2009_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2019_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
v_a_1998_ = v_tail_2006_;
v_a_1999_ = v___x_2054_;
goto _start;
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref(v___x_2021_);
lean_dec_ref(v___x_2019_);
lean_dec(v___x_2018_);
lean_del_object(v___x_2014_);
lean_del_object(v___x_2009_);
lean_dec(v_tail_2006_);
lean_dec_ref(v_c_1997_);
v_a_2058_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2050_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2050_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
}
else
{
lean_object* v_val_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
lean_dec(v_key_2004_);
v_val_2066_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_val_2066_);
lean_dec_ref_known(v___x_2016_, 1);
v___x_2067_ = l_List_reverse___redArg(v_value_2005_);
v___x_2068_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2011_, v_val_2066_, v___x_2067_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 0, v___x_2068_);
v___x_2070_ = v___x_2014_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v_snd_2012_);
v___x_2070_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2072_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v___x_2070_);
v___x_2072_ = v___x_2009_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_fst_2007_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
v_a_1998_ = v_tail_2006_;
v_a_1999_ = v___x_2072_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2079_, lean_object* v_c_2080_, lean_object* v_as_2081_, size_t v_sz_2082_, size_t v_i_2083_, lean_object* v_b_2084_){
_start:
{
uint8_t v___x_2086_; 
v___x_2086_ = lean_usize_dec_lt(v_i_2083_, v_sz_2082_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
lean_dec_ref(v_c_2080_);
v___x_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2087_, 0, v_b_2084_);
return v___x_2087_;
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2089_; 
v_a_2088_ = lean_array_uget_borrowed(v_as_2081_, v_i_2083_);
lean_inc(v_a_2088_);
lean_inc_ref(v_c_2080_);
v___x_2089_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2079_, v_c_2080_, v_a_2088_, v_b_2084_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2102_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2092_ = v___x_2089_;
v_isShared_2093_ = v_isSharedCheck_2102_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2089_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2102_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
if (lean_obj_tag(v_a_2090_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2096_; 
lean_dec_ref(v_c_2080_);
v_a_2094_ = lean_ctor_get(v_a_2090_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v_a_2090_, 1);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v_a_2094_);
v___x_2096_ = v___x_2092_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2094_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
else
{
lean_object* v_a_2098_; size_t v___x_2099_; size_t v___x_2100_; 
lean_del_object(v___x_2092_);
v_a_2098_ = lean_ctor_get(v_a_2090_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v_a_2090_, 1);
v___x_2099_ = ((size_t)1ULL);
v___x_2100_ = lean_usize_add(v_i_2083_, v___x_2099_);
v_i_2083_ = v___x_2100_;
v_b_2084_ = v_a_2098_;
goto _start;
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec_ref(v_c_2080_);
v_a_2103_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2089_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2089_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2111_){
_start:
{
lean_object* v_app_2113_; lean_object* v_ref_2114_; lean_object* v___x_2115_; lean_object* v_subscriptions_2116_; lean_object* v_model_2117_; lean_object* v_subs_2118_; lean_object* v_nextSub_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v_app_2113_ = lean_ctor_get(v_c_2111_, 0);
v_ref_2114_ = lean_ctor_get(v_c_2111_, 1);
lean_inc(v_ref_2114_);
v___x_2115_ = lean_st_ref_get(v_ref_2114_);
v_subscriptions_2116_ = lean_ctor_get(v_app_2113_, 3);
v_model_2117_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_model_2117_);
v_subs_2118_ = lean_ctor_get(v___x_2115_, 5);
lean_inc_ref(v_subs_2118_);
v_nextSub_2119_ = lean_ctor_get(v___x_2115_, 7);
lean_inc(v_nextSub_2119_);
lean_dec(v___x_2115_);
lean_inc_ref(v_subscriptions_2116_);
v___x_2120_ = lean_apply_1(v_subscriptions_2116_, v_model_2117_);
v___x_2121_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2122_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2120_, v___x_2121_);
lean_dec(v___x_2120_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v_buckets_2124_; size_t v_sz_2125_; size_t v___x_2126_; lean_object* v___x_2127_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v_buckets_2124_ = lean_ctor_get(v_subs_2118_, 1);
lean_inc_ref(v_buckets_2124_);
v_sz_2125_ = lean_array_size(v_buckets_2124_);
v___x_2126_ = ((size_t)0ULL);
v___x_2127_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2123_, v_buckets_2124_, v_sz_2125_, v___x_2126_, v_subs_2118_);
lean_dec_ref(v_buckets_2124_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; lean_object* v_buckets_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2180_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
v_buckets_2129_ = lean_ctor_get(v_a_2123_, 1);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_a_2123_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; 
v_unused_2181_ = lean_ctor_get(v_a_2123_, 0);
lean_dec(v_unused_2181_);
v___x_2131_ = v_a_2123_;
v_isShared_2132_ = v_isSharedCheck_2180_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_buckets_2129_);
lean_dec(v_a_2123_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2180_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 1, v_nextSub_2119_);
lean_ctor_set(v___x_2131_, 0, v___x_2121_);
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2121_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_nextSub_2119_);
v___x_2134_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2135_; size_t v_sz_2136_; lean_object* v___x_2137_; 
v___x_2135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2135_, 0, v_a_2128_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v_sz_2136_ = lean_array_size(v_buckets_2129_);
v___x_2137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2114_, v_c_2111_, v_buckets_2129_, v_sz_2136_, v___x_2126_, v___x_2135_);
lean_dec_ref(v_buckets_2129_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2170_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2170_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2170_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v_snd_2142_; lean_object* v_fst_2143_; lean_object* v_fst_2144_; lean_object* v_snd_2145_; lean_object* v___x_2146_; lean_object* v_model_2147_; lean_object* v_live_2148_; lean_object* v_next_2149_; lean_object* v_tables_2150_; uint8_t v_dirty_2151_; uint8_t v_scheduled_2152_; lean_object* v_queue_2153_; uint8_t v_busy_2154_; lean_object* v_ports_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2166_; 
v_snd_2142_ = lean_ctor_get(v_a_2138_, 1);
lean_inc(v_snd_2142_);
v_fst_2143_ = lean_ctor_get(v_a_2138_, 0);
lean_inc(v_fst_2143_);
lean_dec(v_a_2138_);
v_fst_2144_ = lean_ctor_get(v_snd_2142_, 0);
lean_inc(v_fst_2144_);
v_snd_2145_ = lean_ctor_get(v_snd_2142_, 1);
lean_inc(v_snd_2145_);
lean_dec(v_snd_2142_);
v___x_2146_ = lean_st_ref_take(v_ref_2114_);
v_model_2147_ = lean_ctor_get(v___x_2146_, 0);
v_live_2148_ = lean_ctor_get(v___x_2146_, 1);
v_next_2149_ = lean_ctor_get(v___x_2146_, 2);
v_tables_2150_ = lean_ctor_get(v___x_2146_, 3);
v_dirty_2151_ = lean_ctor_get_uint8(v___x_2146_, sizeof(void*)*9);
v_scheduled_2152_ = lean_ctor_get_uint8(v___x_2146_, sizeof(void*)*9 + 1);
v_queue_2153_ = lean_ctor_get(v___x_2146_, 4);
v_busy_2154_ = lean_ctor_get_uint8(v___x_2146_, sizeof(void*)*9 + 2);
v_ports_2155_ = lean_ctor_get(v___x_2146_, 8);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; lean_object* v_unused_2168_; lean_object* v_unused_2169_; 
v_unused_2167_ = lean_ctor_get(v___x_2146_, 7);
lean_dec(v_unused_2167_);
v_unused_2168_ = lean_ctor_get(v___x_2146_, 6);
lean_dec(v_unused_2168_);
v_unused_2169_ = lean_ctor_get(v___x_2146_, 5);
lean_dec(v_unused_2169_);
v___x_2157_ = v___x_2146_;
v_isShared_2158_ = v_isSharedCheck_2166_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_ports_2155_);
lean_inc(v_queue_2153_);
lean_inc(v_tables_2150_);
lean_inc(v_next_2149_);
lean_inc(v_live_2148_);
lean_inc(v_model_2147_);
lean_dec(v___x_2146_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2166_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 7, v_snd_2145_);
lean_ctor_set(v___x_2157_, 6, v_fst_2144_);
lean_ctor_set(v___x_2157_, 5, v_fst_2143_);
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_model_2147_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_live_2148_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v_next_2149_);
lean_ctor_set(v_reuseFailAlloc_2165_, 3, v_tables_2150_);
lean_ctor_set(v_reuseFailAlloc_2165_, 4, v_queue_2153_);
lean_ctor_set(v_reuseFailAlloc_2165_, 5, v_fst_2143_);
lean_ctor_set(v_reuseFailAlloc_2165_, 6, v_fst_2144_);
lean_ctor_set(v_reuseFailAlloc_2165_, 7, v_snd_2145_);
lean_ctor_set(v_reuseFailAlloc_2165_, 8, v_ports_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2165_, sizeof(void*)*9, v_dirty_2151_);
lean_ctor_set_uint8(v_reuseFailAlloc_2165_, sizeof(void*)*9 + 1, v_scheduled_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2165_, sizeof(void*)*9 + 2, v_busy_2154_);
v___x_2160_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = lean_st_ref_put(v_ref_2114_, v___x_2160_);
lean_dec(v_ref_2114_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v___x_2161_);
v___x_2163_ = v___x_2140_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2161_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec(v_ref_2114_);
v_a_2171_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2137_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2137_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_a_2123_);
lean_dec(v_nextSub_2119_);
lean_dec(v_ref_2114_);
lean_dec_ref(v_c_2111_);
v_a_2182_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2127_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2127_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_nextSub_2119_);
lean_dec_ref(v_subs_2118_);
lean_dec(v_ref_2114_);
lean_dec_ref(v_c_2111_);
v_a_2190_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2122_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2122_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2198_, lean_object* v_msg_2199_){
_start:
{
lean_object* v_ref_2201_; lean_object* v___x_2202_; lean_object* v_model_2203_; lean_object* v_live_2204_; lean_object* v_next_2205_; lean_object* v_tables_2206_; uint8_t v_dirty_2207_; uint8_t v_scheduled_2208_; lean_object* v_queue_2209_; uint8_t v_busy_2210_; lean_object* v_subs_2211_; lean_object* v_handlers_2212_; lean_object* v_nextSub_2213_; lean_object* v_ports_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2274_; 
v_ref_2201_ = lean_ctor_get(v_c_2198_, 1);
lean_inc(v_ref_2201_);
v___x_2202_ = lean_st_ref_take(v_ref_2201_);
v_model_2203_ = lean_ctor_get(v___x_2202_, 0);
v_live_2204_ = lean_ctor_get(v___x_2202_, 1);
v_next_2205_ = lean_ctor_get(v___x_2202_, 2);
v_tables_2206_ = lean_ctor_get(v___x_2202_, 3);
v_dirty_2207_ = lean_ctor_get_uint8(v___x_2202_, sizeof(void*)*9);
v_scheduled_2208_ = lean_ctor_get_uint8(v___x_2202_, sizeof(void*)*9 + 1);
v_queue_2209_ = lean_ctor_get(v___x_2202_, 4);
v_busy_2210_ = lean_ctor_get_uint8(v___x_2202_, sizeof(void*)*9 + 2);
v_subs_2211_ = lean_ctor_get(v___x_2202_, 5);
v_handlers_2212_ = lean_ctor_get(v___x_2202_, 6);
v_nextSub_2213_ = lean_ctor_get(v___x_2202_, 7);
v_ports_2214_ = lean_ctor_get(v___x_2202_, 8);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2216_ = v___x_2202_;
v_isShared_2217_ = v_isSharedCheck_2274_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_ports_2214_);
lean_inc(v_nextSub_2213_);
lean_inc(v_handlers_2212_);
lean_inc(v_subs_2211_);
lean_inc(v_queue_2209_);
lean_inc(v_tables_2206_);
lean_inc(v_next_2205_);
lean_inc(v_live_2204_);
lean_inc(v_model_2203_);
lean_dec(v___x_2202_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2274_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2218_ = lean_array_push(v_queue_2209_, v_msg_2199_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 4, v___x_2218_);
v___x_2220_ = v___x_2216_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_model_2203_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v_live_2204_);
lean_ctor_set(v_reuseFailAlloc_2273_, 2, v_next_2205_);
lean_ctor_set(v_reuseFailAlloc_2273_, 3, v_tables_2206_);
lean_ctor_set(v_reuseFailAlloc_2273_, 4, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2273_, 5, v_subs_2211_);
lean_ctor_set(v_reuseFailAlloc_2273_, 6, v_handlers_2212_);
lean_ctor_set(v_reuseFailAlloc_2273_, 7, v_nextSub_2213_);
lean_ctor_set(v_reuseFailAlloc_2273_, 8, v_ports_2214_);
lean_ctor_set_uint8(v_reuseFailAlloc_2273_, sizeof(void*)*9, v_dirty_2207_);
lean_ctor_set_uint8(v_reuseFailAlloc_2273_, sizeof(void*)*9 + 1, v_scheduled_2208_);
lean_ctor_set_uint8(v_reuseFailAlloc_2273_, sizeof(void*)*9 + 2, v_busy_2210_);
v___x_2220_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; uint8_t v_busy_2223_; 
v___x_2221_ = lean_st_ref_put(v_ref_2201_, v___x_2220_);
v___x_2222_ = lean_st_ref_get(v_ref_2201_);
v_busy_2223_ = lean_ctor_get_uint8(v___x_2222_, sizeof(void*)*9 + 2);
lean_dec(v___x_2222_);
if (v_busy_2223_ == 0)
{
lean_object* v___y_2225_; uint8_t v___x_2248_; lean_object* v___x_2249_; lean_object* v_model_2250_; lean_object* v_live_2251_; lean_object* v_next_2252_; lean_object* v_tables_2253_; uint8_t v_dirty_2254_; uint8_t v_scheduled_2255_; lean_object* v_queue_2256_; lean_object* v_subs_2257_; lean_object* v_handlers_2258_; lean_object* v_nextSub_2259_; lean_object* v_ports_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2270_; 
v___x_2248_ = 1;
v___x_2249_ = lean_st_ref_take(v_ref_2201_);
v_model_2250_ = lean_ctor_get(v___x_2249_, 0);
v_live_2251_ = lean_ctor_get(v___x_2249_, 1);
v_next_2252_ = lean_ctor_get(v___x_2249_, 2);
v_tables_2253_ = lean_ctor_get(v___x_2249_, 3);
v_dirty_2254_ = lean_ctor_get_uint8(v___x_2249_, sizeof(void*)*9);
v_scheduled_2255_ = lean_ctor_get_uint8(v___x_2249_, sizeof(void*)*9 + 1);
v_queue_2256_ = lean_ctor_get(v___x_2249_, 4);
v_subs_2257_ = lean_ctor_get(v___x_2249_, 5);
v_handlers_2258_ = lean_ctor_get(v___x_2249_, 6);
v_nextSub_2259_ = lean_ctor_get(v___x_2249_, 7);
v_ports_2260_ = lean_ctor_get(v___x_2249_, 8);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2262_ = v___x_2249_;
v_isShared_2263_ = v_isSharedCheck_2270_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_ports_2260_);
lean_inc(v_nextSub_2259_);
lean_inc(v_handlers_2258_);
lean_inc(v_subs_2257_);
lean_inc(v_queue_2256_);
lean_inc(v_tables_2253_);
lean_inc(v_next_2252_);
lean_inc(v_live_2251_);
lean_inc(v_model_2250_);
lean_dec(v___x_2249_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2270_;
goto v_resetjp_2261_;
}
v___jp_2224_:
{
if (lean_obj_tag(v___y_2225_) == 0)
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2236_; 
v_a_2226_ = lean_ctor_get(v___y_2225_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___y_2225_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2228_ = v___y_2225_;
v_isShared_2229_ = v_isSharedCheck_2236_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___y_2225_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2236_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2230_ = lean_st_ref_take(v_ref_2201_);
v___x_2231_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2223_, v___x_2230_);
v___x_2232_ = lean_st_ref_put(v_ref_2201_, v___x_2231_);
lean_dec(v_ref_2201_);
if (v_isShared_2229_ == 0)
{
v___x_2234_ = v___x_2228_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2226_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2247_; 
v_a_2237_ = lean_ctor_get(v___y_2225_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___y_2225_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2239_ = v___y_2225_;
v_isShared_2240_ = v_isSharedCheck_2247_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___y_2225_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2247_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2241_ = lean_st_ref_take(v_ref_2201_);
v___x_2242_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2223_, v___x_2241_);
v___x_2243_ = lean_st_ref_put(v_ref_2201_, v___x_2242_);
lean_dec(v_ref_2201_);
if (v_isShared_2240_ == 0)
{
v___x_2245_ = v___x_2239_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2237_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_model_2250_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_live_2251_);
lean_ctor_set(v_reuseFailAlloc_2269_, 2, v_next_2252_);
lean_ctor_set(v_reuseFailAlloc_2269_, 3, v_tables_2253_);
lean_ctor_set(v_reuseFailAlloc_2269_, 4, v_queue_2256_);
lean_ctor_set(v_reuseFailAlloc_2269_, 5, v_subs_2257_);
lean_ctor_set(v_reuseFailAlloc_2269_, 6, v_handlers_2258_);
lean_ctor_set(v_reuseFailAlloc_2269_, 7, v_nextSub_2259_);
lean_ctor_set(v_reuseFailAlloc_2269_, 8, v_ports_2260_);
lean_ctor_set_uint8(v_reuseFailAlloc_2269_, sizeof(void*)*9, v_dirty_2254_);
lean_ctor_set_uint8(v_reuseFailAlloc_2269_, sizeof(void*)*9 + 1, v_scheduled_2255_);
v___x_2265_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
lean_ctor_set_uint8(v___x_2265_, sizeof(void*)*9 + 2, v___x_2248_);
v___x_2266_ = lean_st_ref_put(v_ref_2201_, v___x_2265_);
lean_inc_ref(v_c_2198_);
v___x_2267_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2201_, v_c_2198_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v___x_2268_; 
lean_dec_ref_known(v___x_2267_, 1);
v___x_2268_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2198_);
v___y_2225_ = v___x_2268_;
goto v___jp_2224_;
}
else
{
lean_dec_ref(v_c_2198_);
v___y_2225_ = v___x_2267_;
goto v___jp_2224_;
}
}
}
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
lean_dec(v_ref_2201_);
lean_dec_ref(v_c_2198_);
v___x_2271_ = lean_box(0);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2275_, lean_object* v_m_2276_){
_start:
{
lean_object* v___x_2278_; 
lean_inc_ref(v_c_2275_);
v___x_2278_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2275_, v_m_2276_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v___x_2279_; 
lean_dec_ref_known(v___x_2278_, 1);
v___x_2279_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2275_);
lean_dec_ref(v_c_2275_);
return v___x_2279_;
}
else
{
lean_dec_ref(v_c_2275_);
return v___x_2278_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2280_, lean_object* v_as_x27_2281_, lean_object* v_b_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2280_, v_as_x27_2281_, v_b_2282_);
lean_dec(v_as_x27_2281_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2285_, lean_object* v_c_2286_, lean_object* v_as_x27_2287_, lean_object* v_b_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2285_, v_c_2286_, v_as_x27_2287_, v_b_2288_);
lean_dec(v_as_x27_2287_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2291_, lean_object* v_c_2292_, lean_object* v_as_2293_, lean_object* v_sz_2294_, lean_object* v_i_2295_, lean_object* v_b_2296_, lean_object* v___y_2297_){
_start:
{
size_t v_sz_boxed_2298_; size_t v_i_boxed_2299_; lean_object* v_res_2300_; 
v_sz_boxed_2298_ = lean_unbox_usize(v_sz_2294_);
lean_dec(v_sz_2294_);
v_i_boxed_2299_ = lean_unbox_usize(v_i_2295_);
lean_dec(v_i_2295_);
v_res_2300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2291_, v_c_2292_, v_as_2293_, v_sz_boxed_2298_, v_i_boxed_2299_, v_b_2296_);
lean_dec_ref(v_as_2293_);
lean_dec(v___x_2291_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2301_, lean_object* v_name_2302_, lean_object* v_a_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2301_, v_name_2302_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2305_, lean_object* v_c_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2305_, v_c_2306_);
lean_dec(v___x_2305_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2309_, lean_object* v_c_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2309_, v_c_2310_, v_a_2311_, v_a_2312_);
lean_dec(v___x_2309_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2315_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2318_, lean_object* v_msg_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2318_, v_msg_2319_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2322_, lean_object* v_e_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2322_, v_e_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2326_, lean_object* v_Model_2327_, lean_object* v_Msg_2328_, lean_object* v_c_2329_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2329_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2332_, lean_object* v_Model_2333_, lean_object* v_Msg_2334_, lean_object* v_c_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2332_, v_Model_2333_, v_Msg_2334_, v_c_2335_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2338_, lean_object* v_Model_2339_, lean_object* v_Msg_2340_, lean_object* v_c_2341_, lean_object* v_name_2342_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2341_, v_name_2342_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2345_, lean_object* v_Model_2346_, lean_object* v_Msg_2347_, lean_object* v_c_2348_, lean_object* v_name_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2345_, v_Model_2346_, v_Msg_2347_, v_c_2348_, v_name_2349_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2352_, lean_object* v_Model_2353_, lean_object* v_Msg_2354_, lean_object* v_c_2355_, lean_object* v_msg_2356_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2355_, v_msg_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2359_, lean_object* v_Model_2360_, lean_object* v_Msg_2361_, lean_object* v_c_2362_, lean_object* v_msg_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lasm_UI_Runtime_deliver(v_Flags_2359_, v_Model_2360_, v_Msg_2361_, v_c_2362_, v_msg_2363_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2366_, lean_object* v_Model_2367_, lean_object* v_Msg_2368_, lean_object* v_c_2369_, lean_object* v_e_2370_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2369_, v_e_2370_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2373_, lean_object* v_Model_2374_, lean_object* v_Msg_2375_, lean_object* v_c_2376_, lean_object* v_e_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lasm_UI_Runtime_perform(v_Flags_2373_, v_Model_2374_, v_Msg_2375_, v_c_2376_, v_e_2377_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2380_, lean_object* v_m_2381_, lean_object* v_a_2382_, lean_object* v_fallback_2383_){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2381_, v_a_2382_, v_fallback_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2385_, lean_object* v_m_2386_, lean_object* v_a_2387_, lean_object* v_fallback_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2385_, v_m_2386_, v_a_2387_, v_fallback_2388_);
lean_dec(v_fallback_2388_);
lean_dec_ref(v_m_2386_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2390_, lean_object* v_m_2391_, lean_object* v_a_2392_, lean_object* v_b_2393_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2391_, v_a_2392_, v_b_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2395_, lean_object* v_as_2396_, lean_object* v_as_x27_2397_, lean_object* v_b_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2397_, v_b_2398_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2402_, lean_object* v_as_2403_, lean_object* v_as_x27_2404_, lean_object* v_b_2405_, lean_object* v_a_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2402_, v_as_2403_, v_as_x27_2404_, v_b_2405_, v_a_2406_);
lean_dec(v_as_x27_2404_);
lean_dec(v_as_2403_);
return v_res_2408_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2409_, lean_object* v_m_2410_, lean_object* v_a_2411_){
_start:
{
uint8_t v___x_2412_; 
v___x_2412_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2410_, v_a_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2413_, lean_object* v_m_2414_, lean_object* v_a_2415_){
_start:
{
uint8_t v_res_2416_; lean_object* v_r_2417_; 
v_res_2416_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2413_, v_m_2414_, v_a_2415_);
lean_dec_ref(v_m_2414_);
v_r_2417_ = lean_box(v_res_2416_);
return v_r_2417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2418_, lean_object* v_m_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2419_, v_a_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2423_, v_a_2424_, v_a_2425_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2428_, v_a_2429_, v_a_2430_, v_a_2431_);
lean_dec_ref(v_a_2429_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2434_, lean_object* v_m_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2435_, v_a_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2438_, lean_object* v_m_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2438_, v_m_2439_, v_a_2440_);
lean_dec_ref(v_m_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2442_, lean_object* v_Model_2443_, lean_object* v___x_2444_, lean_object* v_Flags_2445_, lean_object* v_c_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2444_, v_c_2446_, v_a_2447_, v_a_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2451_, lean_object* v_Model_2452_, lean_object* v___x_2453_, lean_object* v_Flags_2454_, lean_object* v_c_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2451_, v_Model_2452_, v___x_2453_, v_Flags_2454_, v_c_2455_, v_a_2456_, v_a_2457_);
lean_dec(v___x_2453_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2460_, lean_object* v_a_2461_, lean_object* v_as_2462_, size_t v_sz_2463_, size_t v_i_2464_, lean_object* v_b_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2461_, v_as_2462_, v_sz_2463_, v_i_2464_, v_b_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2468_, lean_object* v_a_2469_, lean_object* v_as_2470_, lean_object* v_sz_2471_, lean_object* v_i_2472_, lean_object* v_b_2473_, lean_object* v___y_2474_){
_start:
{
size_t v_sz_boxed_2475_; size_t v_i_boxed_2476_; lean_object* v_res_2477_; 
v_sz_boxed_2475_ = lean_unbox_usize(v_sz_2471_);
lean_dec(v_sz_2471_);
v_i_boxed_2476_ = lean_unbox_usize(v_i_2472_);
lean_dec(v_i_2472_);
v_res_2477_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2468_, v_a_2469_, v_as_2470_, v_sz_boxed_2475_, v_i_boxed_2476_, v_b_2473_);
lean_dec_ref(v_as_2470_);
lean_dec_ref(v_a_2469_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2478_, lean_object* v_Model_2479_, lean_object* v___x_2480_, lean_object* v_Flags_2481_, lean_object* v_c_2482_, lean_object* v_as_2483_, size_t v_sz_2484_, size_t v_i_2485_, lean_object* v_b_2486_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2480_, v_c_2482_, v_as_2483_, v_sz_2484_, v_i_2485_, v_b_2486_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2489_, lean_object* v_Model_2490_, lean_object* v___x_2491_, lean_object* v_Flags_2492_, lean_object* v_c_2493_, lean_object* v_as_2494_, lean_object* v_sz_2495_, lean_object* v_i_2496_, lean_object* v_b_2497_, lean_object* v___y_2498_){
_start:
{
size_t v_sz_boxed_2499_; size_t v_i_boxed_2500_; lean_object* v_res_2501_; 
v_sz_boxed_2499_ = lean_unbox_usize(v_sz_2495_);
lean_dec(v_sz_2495_);
v_i_boxed_2500_ = lean_unbox_usize(v_i_2496_);
lean_dec(v_i_2496_);
v_res_2501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2489_, v_Model_2490_, v___x_2491_, v_Flags_2492_, v_c_2493_, v_as_2494_, v_sz_boxed_2499_, v_i_boxed_2500_, v_b_2497_);
lean_dec_ref(v_as_2494_);
lean_dec(v___x_2491_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2502_, lean_object* v_m_2503_, lean_object* v_a_2504_, lean_object* v_fallback_2505_){
_start:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2503_, v_a_2504_, v_fallback_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2507_, lean_object* v_m_2508_, lean_object* v_a_2509_, lean_object* v_fallback_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2507_, v_m_2508_, v_a_2509_, v_fallback_2510_);
lean_dec(v_fallback_2510_);
lean_dec(v_a_2509_);
lean_dec_ref(v_m_2508_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2512_, lean_object* v_v_2513_, lean_object* v_Flags_2514_, lean_object* v_Model_2515_, lean_object* v_c_2516_, lean_object* v_as_2517_, lean_object* v_as_x27_2518_, lean_object* v_b_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2513_, v_c_2516_, v_as_x27_2518_, v_b_2519_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2523_, lean_object* v_v_2524_, lean_object* v_Flags_2525_, lean_object* v_Model_2526_, lean_object* v_c_2527_, lean_object* v_as_2528_, lean_object* v_as_x27_2529_, lean_object* v_b_2530_, lean_object* v_a_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2523_, v_v_2524_, v_Flags_2525_, v_Model_2526_, v_c_2527_, v_as_2528_, v_as_x27_2529_, v_b_2530_, v_a_2531_);
lean_dec(v_as_x27_2529_);
lean_dec(v_as_2528_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2534_, lean_object* v_Flags_2535_, lean_object* v_Model_2536_, lean_object* v_c_2537_, lean_object* v_as_2538_, lean_object* v_as_x27_2539_, lean_object* v_b_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2537_, v_as_x27_2539_, v_b_2540_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2544_, lean_object* v_Flags_2545_, lean_object* v_Model_2546_, lean_object* v_c_2547_, lean_object* v_as_2548_, lean_object* v_as_x27_2549_, lean_object* v_b_2550_, lean_object* v_a_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2544_, v_Flags_2545_, v_Model_2546_, v_c_2547_, v_as_2548_, v_as_x27_2549_, v_b_2550_, v_a_2551_);
lean_dec(v_as_x27_2549_);
lean_dec(v_as_2548_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2554_, lean_object* v_Msg_2555_, lean_object* v___x_2556_, lean_object* v_Flags_2557_, lean_object* v_c_2558_, lean_object* v_inst_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2556_, v_c_2558_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2563_, lean_object* v_Msg_2564_, lean_object* v___x_2565_, lean_object* v_Flags_2566_, lean_object* v_c_2567_, lean_object* v_inst_2568_, lean_object* v_a_2569_, lean_object* v___y_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2563_, v_Msg_2564_, v___x_2565_, v_Flags_2566_, v_c_2567_, v_inst_2568_, v_a_2569_);
lean_dec(v___x_2565_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2572_, lean_object* v_a_2573_, lean_object* v_fallback_2574_, lean_object* v_x_2575_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2573_, v_fallback_2574_, v_x_2575_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2577_, lean_object* v_a_2578_, lean_object* v_fallback_2579_, lean_object* v_x_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2577_, v_a_2578_, v_fallback_2579_, v_x_2580_);
lean_dec(v_fallback_2579_);
return v_res_2581_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2582_, lean_object* v_a_2583_, lean_object* v_x_2584_){
_start:
{
uint8_t v___x_2585_; 
v___x_2585_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2583_, v_x_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2586_, lean_object* v_a_2587_, lean_object* v_x_2588_){
_start:
{
uint8_t v_res_2589_; lean_object* v_r_2590_; 
v_res_2589_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2586_, v_a_2587_, v_x_2588_);
v_r_2590_ = lean_box(v_res_2589_);
return v_r_2590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2591_, lean_object* v_data_2592_){
_start:
{
lean_object* v___x_2593_; 
v___x_2593_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2594_, lean_object* v_a_2595_, lean_object* v_b_2596_, lean_object* v_x_2597_){
_start:
{
lean_object* v___x_2598_; 
v___x_2598_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2595_, v_b_2596_, v_x_2597_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2599_, lean_object* v_a_2600_, lean_object* v_x_2601_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2600_, v_x_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2603_, lean_object* v_a_2604_, lean_object* v_x_2605_){
_start:
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2604_, v_x_2605_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2607_, lean_object* v_a_2608_, lean_object* v_fallback_2609_, lean_object* v_x_2610_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2608_, v_fallback_2609_, v_x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2612_, lean_object* v_a_2613_, lean_object* v_fallback_2614_, lean_object* v_x_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2612_, v_a_2613_, v_fallback_2614_, v_x_2615_);
lean_dec(v_x_2615_);
lean_dec(v_fallback_2614_);
lean_dec(v_a_2613_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2617_, lean_object* v_i_2618_, lean_object* v_source_2619_, lean_object* v_target_2620_){
_start:
{
lean_object* v___x_2621_; 
v___x_2621_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2618_, v_source_2619_, v_target_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2622_, lean_object* v_x_2623_, lean_object* v_x_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2623_, v_x_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2626_){
_start:
{
lean_object* v_app_2628_; lean_object* v_ref_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2689_; 
v_app_2628_ = lean_ctor_get(v_c_2626_, 0);
v_ref_2629_ = lean_ctor_get(v_c_2626_, 1);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_c_2626_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2631_ = v_c_2626_;
v_isShared_2632_ = v_isSharedCheck_2689_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_ref_2629_);
lean_inc(v_app_2628_);
lean_dec(v_c_2626_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2689_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2633_; uint8_t v_dirty_2634_; 
v___x_2633_ = lean_st_ref_get(v_ref_2629_);
v_dirty_2634_ = lean_ctor_get_uint8(v___x_2633_, sizeof(void*)*9);
if (v_dirty_2634_ == 0)
{
lean_object* v_model_2635_; lean_object* v_live_2636_; lean_object* v_next_2637_; lean_object* v_tables_2638_; lean_object* v_queue_2639_; uint8_t v_busy_2640_; lean_object* v_subs_2641_; lean_object* v_handlers_2642_; lean_object* v_nextSub_2643_; lean_object* v_ports_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2654_; 
lean_del_object(v___x_2631_);
lean_dec_ref(v_app_2628_);
v_model_2635_ = lean_ctor_get(v___x_2633_, 0);
v_live_2636_ = lean_ctor_get(v___x_2633_, 1);
v_next_2637_ = lean_ctor_get(v___x_2633_, 2);
v_tables_2638_ = lean_ctor_get(v___x_2633_, 3);
v_queue_2639_ = lean_ctor_get(v___x_2633_, 4);
v_busy_2640_ = lean_ctor_get_uint8(v___x_2633_, sizeof(void*)*9 + 2);
v_subs_2641_ = lean_ctor_get(v___x_2633_, 5);
v_handlers_2642_ = lean_ctor_get(v___x_2633_, 6);
v_nextSub_2643_ = lean_ctor_get(v___x_2633_, 7);
v_ports_2644_ = lean_ctor_get(v___x_2633_, 8);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2646_ = v___x_2633_;
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_ports_2644_);
lean_inc(v_nextSub_2643_);
lean_inc(v_handlers_2642_);
lean_inc(v_subs_2641_);
lean_inc(v_queue_2639_);
lean_inc(v_tables_2638_);
lean_inc(v_next_2637_);
lean_inc(v_live_2636_);
lean_inc(v_model_2635_);
lean_dec(v___x_2633_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_model_2635_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_live_2636_);
lean_ctor_set(v_reuseFailAlloc_2653_, 2, v_next_2637_);
lean_ctor_set(v_reuseFailAlloc_2653_, 3, v_tables_2638_);
lean_ctor_set(v_reuseFailAlloc_2653_, 4, v_queue_2639_);
lean_ctor_set(v_reuseFailAlloc_2653_, 5, v_subs_2641_);
lean_ctor_set(v_reuseFailAlloc_2653_, 6, v_handlers_2642_);
lean_ctor_set(v_reuseFailAlloc_2653_, 7, v_nextSub_2643_);
lean_ctor_set(v_reuseFailAlloc_2653_, 8, v_ports_2644_);
lean_ctor_set_uint8(v_reuseFailAlloc_2653_, sizeof(void*)*9, v_dirty_2634_);
lean_ctor_set_uint8(v_reuseFailAlloc_2653_, sizeof(void*)*9 + 2, v_busy_2640_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*9 + 1, v_dirty_2634_);
v___x_2650_ = lean_st_ref_swap(v_ref_2629_, v___x_2649_);
lean_dec(v_ref_2629_);
lean_dec(v___x_2650_);
v___x_2651_ = l_ByteArray_empty;
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
return v___x_2652_;
}
}
}
else
{
lean_object* v_model_2655_; lean_object* v_live_2656_; lean_object* v_next_2657_; lean_object* v_tables_2658_; lean_object* v_queue_2659_; uint8_t v_busy_2660_; lean_object* v_subs_2661_; lean_object* v_handlers_2662_; lean_object* v_nextSub_2663_; lean_object* v_ports_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2688_; 
v_model_2655_ = lean_ctor_get(v___x_2633_, 0);
v_live_2656_ = lean_ctor_get(v___x_2633_, 1);
v_next_2657_ = lean_ctor_get(v___x_2633_, 2);
v_tables_2658_ = lean_ctor_get(v___x_2633_, 3);
v_queue_2659_ = lean_ctor_get(v___x_2633_, 4);
v_busy_2660_ = lean_ctor_get_uint8(v___x_2633_, sizeof(void*)*9 + 2);
v_subs_2661_ = lean_ctor_get(v___x_2633_, 5);
v_handlers_2662_ = lean_ctor_get(v___x_2633_, 6);
v_nextSub_2663_ = lean_ctor_get(v___x_2633_, 7);
v_ports_2664_ = lean_ctor_get(v___x_2633_, 8);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2666_ = v___x_2633_;
v_isShared_2667_ = v_isSharedCheck_2688_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_ports_2664_);
lean_inc(v_nextSub_2663_);
lean_inc(v_handlers_2662_);
lean_inc(v_subs_2661_);
lean_inc(v_queue_2659_);
lean_inc(v_tables_2658_);
lean_inc(v_next_2657_);
lean_inc(v_live_2656_);
lean_inc(v_model_2655_);
lean_dec(v___x_2633_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2688_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v_view_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2672_; 
v_view_2668_ = lean_ctor_get(v_app_2628_, 2);
lean_inc_ref(v_view_2668_);
lean_dec_ref(v_app_2628_);
lean_inc(v_model_2655_);
v___x_2669_ = lean_apply_1(v_view_2668_, v_model_2655_);
v___x_2670_ = lean_box(0);
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 1);
lean_ctor_set(v___x_2631_, 1, v___x_2670_);
lean_ctor_set(v___x_2631_, 0, v___x_2669_);
v___x_2672_ = v___x_2631_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___x_2670_);
v___x_2672_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2673_; lean_object* v_ops_2674_; lean_object* v_live_2675_; lean_object* v_next_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v_fst_2679_; lean_object* v_snd_2680_; uint8_t v___x_2681_; lean_object* v___x_2683_; 
v___x_2673_ = l_Lasm_UI_diff___redArg(v_live_2656_, v___x_2672_, v_next_2657_);
v_ops_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc_ref(v_ops_2674_);
v_live_2675_ = lean_ctor_get(v___x_2673_, 1);
lean_inc(v_live_2675_);
v_next_2676_ = lean_ctor_get(v___x_2673_, 2);
lean_inc(v_next_2676_);
lean_dec_ref(v___x_2673_);
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2658_, v_ops_2674_, v___x_2677_);
lean_dec_ref(v_ops_2674_);
v_fst_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_fst_2679_);
v_snd_2680_ = lean_ctor_get(v___x_2678_, 1);
lean_inc(v_snd_2680_);
lean_dec_ref(v___x_2678_);
v___x_2681_ = 0;
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 3, v_snd_2680_);
lean_ctor_set(v___x_2666_, 2, v_next_2676_);
lean_ctor_set(v___x_2666_, 1, v_live_2675_);
v___x_2683_ = v___x_2666_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_model_2655_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_live_2675_);
lean_ctor_set(v_reuseFailAlloc_2686_, 2, v_next_2676_);
lean_ctor_set(v_reuseFailAlloc_2686_, 3, v_snd_2680_);
lean_ctor_set(v_reuseFailAlloc_2686_, 4, v_queue_2659_);
lean_ctor_set(v_reuseFailAlloc_2686_, 5, v_subs_2661_);
lean_ctor_set(v_reuseFailAlloc_2686_, 6, v_handlers_2662_);
lean_ctor_set(v_reuseFailAlloc_2686_, 7, v_nextSub_2663_);
lean_ctor_set(v_reuseFailAlloc_2686_, 8, v_ports_2664_);
lean_ctor_set_uint8(v_reuseFailAlloc_2686_, sizeof(void*)*9 + 2, v_busy_2660_);
v___x_2683_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*9, v___x_2681_);
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*9 + 1, v___x_2681_);
v___x_2684_ = lean_st_ref_swap(v_ref_2629_, v___x_2683_);
lean_dec(v_ref_2629_);
lean_dec(v___x_2684_);
v___x_2685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2685_, 0, v_fst_2679_);
return v___x_2685_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2690_, lean_object* v_a_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2690_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2693_, lean_object* v_Model_2694_, lean_object* v_Msg_2695_, lean_object* v_c_2696_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2696_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2699_, lean_object* v_Model_2700_, lean_object* v_Msg_2701_, lean_object* v_c_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lasm_UI_Runtime_frame(v_Flags_2699_, v_Model_2700_, v_Msg_2701_, v_c_2702_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2705_, lean_object* v_____r_2706_, lean_object* v_msgs_2707_){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2709_ = lean_unsigned_to_nat(2u);
v___x_2710_ = lean_nat_add(v_snd_2705_, v___x_2709_);
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v_msgs_2707_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2711_);
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2714_, lean_object* v_____r_2715_, lean_object* v_msgs_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2714_, v_____r_2715_, v_msgs_2716_);
lean_dec(v_snd_2714_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2719_, lean_object* v_fst_2720_, lean_object* v_x_2721_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_box(0);
v___x_2724_ = lean_apply_3(v___f_2719_, v___x_2723_, v_fst_2720_, lean_box(0));
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2725_, lean_object* v_fst_2726_, lean_object* v_x_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2725_, v_fst_2726_, v_x_2727_);
lean_dec(v_x_2727_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2730_, lean_object* v_fst_2731_, lean_object* v_x_2732_){
_start:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2734_ = lean_box(0);
v___x_2735_ = lean_apply_3(v___f_2730_, v___x_2734_, v_fst_2731_, lean_box(0));
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2736_, lean_object* v_fst_2737_, lean_object* v_x_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2736_, v_fst_2737_, v_x_2738_);
lean_dec_ref(v_x_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2741_, lean_object* v___x_2742_, lean_object* v_s_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v___y_2747_; lean_object* v_fst_2767_; lean_object* v_snd_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2824_; 
v_fst_2767_ = lean_ctor_get(v_a_2744_, 0);
v_snd_2768_ = lean_ctor_get(v_a_2744_, 1);
v_isSharedCheck_2824_ = !lean_is_exclusive(v_a_2744_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2770_ = v_a_2744_;
v_isShared_2771_ = v_isSharedCheck_2824_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_snd_2768_);
lean_inc(v_fst_2767_);
lean_dec(v_a_2744_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2824_;
goto v_resetjp_2769_;
}
v___jp_2746_:
{
if (lean_obj_tag(v___y_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2758_; 
v_a_2748_ = lean_ctor_get(v___y_2747_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___y_2747_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2750_ = v___y_2747_;
v_isShared_2751_ = v_isSharedCheck_2758_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___y_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2758_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
if (lean_obj_tag(v_a_2748_) == 0)
{
lean_object* v_a_2752_; lean_object* v___x_2754_; 
v_a_2752_ = lean_ctor_get(v_a_2748_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v_a_2748_, 1);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v_a_2752_);
v___x_2754_ = v___x_2750_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2752_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
else
{
lean_object* v_a_2756_; 
lean_del_object(v___x_2750_);
v_a_2756_ = lean_ctor_get(v_a_2748_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v_a_2748_, 1);
v_a_2744_ = v_a_2756_;
goto _start;
}
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2766_; 
v_a_2759_ = lean_ctor_get(v___y_2747_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___y_2747_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2761_ = v___y_2747_;
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v___y_2747_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2764_; 
if (v_isShared_2762_ == 0)
{
v___x_2764_ = v___x_2761_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_a_2759_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2772_ = lean_unsigned_to_nat(1u);
v___x_2773_ = lean_nat_add(v_snd_2768_, v___x_2772_);
v___x_2774_ = lean_array_get_size(v_items_2741_);
v___x_2775_ = lean_nat_dec_lt(v___x_2773_, v___x_2774_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2777_; 
lean_dec(v___x_2773_);
if (v_isShared_2771_ == 0)
{
v___x_2777_ = v___x_2770_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_fst_2767_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_snd_2768_);
v___x_2777_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v___x_2778_; 
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
}
else
{
lean_object* v___x_2780_; lean_object* v___f_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2780_ = lean_box(0);
lean_inc(v_snd_2768_);
v___f_2781_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2781_, 0, v_snd_2768_);
v___x_2782_ = lean_array_get_borrowed(v___x_2780_, v_items_2741_, v_snd_2768_);
v___x_2783_ = lean_array_get(v___x_2780_, v_items_2741_, v___x_2773_);
lean_dec(v___x_2773_);
if (lean_obj_tag(v___x_2782_) == 3)
{
if (lean_obj_tag(v___x_2783_) == 7)
{
double v_n_2784_; lean_object* v_items_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2815_; 
lean_del_object(v___x_2770_);
v_n_2784_ = lean_ctor_get_float(v___x_2782_, 0);
v_items_2785_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2787_ = v___x_2783_;
v_isShared_2788_ = v_isSharedCheck_2815_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_items_2785_);
lean_dec(v___x_2783_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2815_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
uint64_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2789_ = lean_float_to_uint64(v_n_2784_);
v___x_2790_ = lean_uint64_to_nat(v___x_2789_);
v___x_2791_ = lean_array_get_size(v___x_2742_);
v___x_2792_ = lean_nat_dec_lt(v___x_2790_, v___x_2791_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
lean_dec(v___x_2790_);
lean_del_object(v___x_2787_);
lean_dec_ref(v_items_2785_);
lean_dec(v_snd_2768_);
v___x_2793_ = lean_box(0);
v___x_2794_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2781_, v_fst_2767_, v___x_2793_);
v___y_2747_ = v___x_2794_;
goto v___jp_2746_;
}
else
{
lean_object* v___x_2795_; 
v___x_2795_ = lean_array_fget_borrowed(v___x_2742_, v___x_2790_);
lean_dec(v___x_2790_);
if (lean_obj_tag(v___x_2795_) == 1)
{
lean_object* v_attrs_2796_; lean_object* v___x_2797_; 
lean_del_object(v___x_2787_);
lean_dec_ref(v___f_2781_);
v_attrs_2796_ = lean_ctor_get(v___x_2795_, 3);
v___x_2797_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_s_2743_, v_attrs_2796_);
if (lean_obj_tag(v___x_2797_) == 1)
{
lean_object* v_val_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_val_2798_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_val_2798_);
lean_dec_ref_known(v___x_2797_, 1);
v___x_2799_ = lean_array_to_list(v_items_2785_);
v___x_2800_ = lean_box(0);
v___x_2801_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_2799_, v___x_2800_);
v___x_2802_ = lean_apply_1(v_val_2798_, v___x_2801_);
if (lean_obj_tag(v___x_2802_) == 1)
{
lean_object* v_val_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v_val_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_val_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = lean_array_push(v_fst_2767_, v_val_2803_);
v___x_2805_ = lean_box(0);
v___x_2806_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2768_, v___x_2805_, v___x_2804_);
lean_dec(v_snd_2768_);
v___y_2747_ = v___x_2806_;
goto v___jp_2746_;
}
else
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_dec(v___x_2802_);
v___x_2807_ = lean_box(0);
v___x_2808_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2768_, v___x_2807_, v_fst_2767_);
lean_dec(v_snd_2768_);
v___y_2747_ = v___x_2808_;
goto v___jp_2746_;
}
}
else
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
lean_dec(v___x_2797_);
lean_dec_ref(v_items_2785_);
v___x_2809_ = lean_box(0);
v___x_2810_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2768_, v___x_2809_, v_fst_2767_);
lean_dec(v_snd_2768_);
v___y_2747_ = v___x_2810_;
goto v___jp_2746_;
}
}
else
{
lean_object* v___x_2812_; 
lean_dec_ref(v_items_2785_);
lean_dec(v_snd_2768_);
lean_inc(v___x_2795_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 1);
lean_ctor_set(v___x_2787_, 0, v___x_2795_);
v___x_2812_ = v___x_2787_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2795_);
v___x_2812_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2813_; 
v___x_2813_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2781_, v_fst_2767_, v___x_2812_);
lean_dec_ref(v___x_2812_);
v___y_2747_ = v___x_2813_;
goto v___jp_2746_;
}
}
}
}
}
else
{
lean_object* v___x_2817_; 
lean_dec(v_snd_2768_);
lean_inc_ref(v___x_2782_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 1, v___x_2783_);
lean_ctor_set(v___x_2770_, 0, v___x_2782_);
v___x_2817_ = v___x_2770_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2782_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v___x_2783_);
v___x_2817_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2818_; 
v___x_2818_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2781_, v_fst_2767_, v___x_2817_);
lean_dec_ref(v___x_2817_);
v___y_2747_ = v___x_2818_;
goto v___jp_2746_;
}
}
}
else
{
lean_object* v___x_2821_; 
lean_dec(v_snd_2768_);
lean_inc(v___x_2782_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 1, v___x_2783_);
lean_ctor_set(v___x_2770_, 0, v___x_2782_);
v___x_2821_ = v___x_2770_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2782_);
lean_ctor_set(v_reuseFailAlloc_2823_, 1, v___x_2783_);
v___x_2821_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2822_; 
v___x_2822_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2781_, v_fst_2767_, v___x_2821_);
lean_dec_ref(v___x_2821_);
v___y_2747_ = v___x_2822_;
goto v___jp_2746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_2825_, lean_object* v___x_2826_, lean_object* v_s_2827_, lean_object* v_a_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2825_, v___x_2826_, v_s_2827_, v_a_2828_);
lean_dec_ref(v_s_2827_);
lean_dec_ref(v___x_2826_);
lean_dec_ref(v_items_2825_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_2831_, lean_object* v_as_2832_, size_t v_sz_2833_, size_t v_i_2834_, lean_object* v_b_2835_){
_start:
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_usize_dec_lt(v_i_2834_, v_sz_2833_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; 
lean_dec_ref(v_c_2831_);
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v_b_2835_);
return v___x_2838_;
}
else
{
lean_object* v___x_2839_; lean_object* v_a_2840_; lean_object* v___x_2841_; 
v___x_2839_ = lean_box(0);
v_a_2840_ = lean_array_uget_borrowed(v_as_2832_, v_i_2834_);
lean_inc(v_a_2840_);
lean_inc_ref(v_c_2831_);
v___x_2841_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2831_, v_a_2840_);
if (lean_obj_tag(v___x_2841_) == 0)
{
size_t v___x_2842_; size_t v___x_2843_; 
lean_dec_ref_known(v___x_2841_, 1);
v___x_2842_ = ((size_t)1ULL);
v___x_2843_ = lean_usize_add(v_i_2834_, v___x_2842_);
v_i_2834_ = v___x_2843_;
v_b_2835_ = v___x_2839_;
goto _start;
}
else
{
lean_dec_ref(v_c_2831_);
return v___x_2841_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_2845_, lean_object* v_as_2846_, lean_object* v_sz_2847_, lean_object* v_i_2848_, lean_object* v_b_2849_, lean_object* v___y_2850_){
_start:
{
size_t v_sz_boxed_2851_; size_t v_i_boxed_2852_; lean_object* v_res_2853_; 
v_sz_boxed_2851_ = lean_unbox_usize(v_sz_2847_);
lean_dec(v_sz_2847_);
v_i_boxed_2852_ = lean_unbox_usize(v_i_2848_);
lean_dec(v_i_2848_);
v_res_2853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2845_, v_as_2846_, v_sz_boxed_2851_, v_i_boxed_2852_, v_b_2849_);
lean_dec_ref(v_as_2846_);
return v_res_2853_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_unsigned_to_nat(0u);
v___x_2855_ = lean_nat_to_int(v___x_2854_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_2864_, size_t v_i_2865_, lean_object* v_bs_2866_){
_start:
{
uint8_t v___x_2867_; 
v___x_2867_ = lean_usize_dec_lt(v_i_2865_, v_sz_2864_);
if (v___x_2867_ == 0)
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2868_, 0, v_bs_2866_);
return v___x_2868_;
}
else
{
lean_object* v_v_2869_; lean_object* v___x_2870_; lean_object* v_bs_x27_2871_; lean_object* v_a_2873_; 
v_v_2869_ = lean_array_uget(v_bs_2866_, v_i_2865_);
v___x_2870_ = lean_unsigned_to_nat(0u);
v_bs_x27_2871_ = lean_array_uset(v_bs_2866_, v_i_2865_, v___x_2870_);
switch(lean_obj_tag(v_v_2869_))
{
case 3:
{
double v_n_2882_; lean_object* v___x_2883_; 
v_n_2882_ = lean_ctor_get_float(v_v_2869_, 0);
lean_dec_ref_known(v_v_2869_, 0);
v___x_2883_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2882_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v___x_2884_; 
lean_dec_ref(v_bs_x27_2871_);
v___x_2884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_2884_;
}
else
{
lean_object* v_val_2885_; 
v_val_2885_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_val_2885_);
lean_dec_ref_known(v___x_2883_, 1);
v_a_2873_ = v_val_2885_;
goto v___jp_2872_;
}
}
case 5:
{
lean_object* v_i_2886_; 
v_i_2886_ = lean_ctor_get(v_v_2869_, 0);
lean_inc(v_i_2886_);
lean_dec_ref_known(v_v_2869_, 1);
v_a_2873_ = v_i_2886_;
goto v___jp_2872_;
}
default: 
{
lean_object* v___x_2887_; 
lean_dec_ref(v_bs_x27_2871_);
lean_dec(v_v_2869_);
v___x_2887_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_2887_;
}
}
v___jp_2872_:
{
lean_object* v___x_2874_; uint8_t v___x_2875_; 
v___x_2874_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_2875_ = lean_int_dec_le(v___x_2874_, v_a_2873_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; 
lean_dec(v_a_2873_);
lean_dec_ref(v_bs_x27_2871_);
v___x_2876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_2876_;
}
else
{
lean_object* v___x_2877_; size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2877_ = l_Int_toNat(v_a_2873_);
lean_dec(v_a_2873_);
v___x_2878_ = ((size_t)1ULL);
v___x_2879_ = lean_usize_add(v_i_2865_, v___x_2878_);
v___x_2880_ = lean_array_uset(v_bs_x27_2871_, v_i_2865_, v___x_2877_);
v_i_2865_ = v___x_2879_;
v_bs_2866_ = v___x_2880_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_2888_, lean_object* v_i_2889_, lean_object* v_bs_2890_){
_start:
{
size_t v_sz_boxed_2891_; size_t v_i_boxed_2892_; lean_object* v_res_2893_; 
v_sz_boxed_2891_ = lean_unbox_usize(v_sz_2888_);
lean_dec(v_sz_2888_);
v_i_boxed_2892_ = lean_unbox_usize(v_i_2889_);
lean_dec(v_i_2889_);
v_res_2893_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_2891_, v_i_boxed_2892_, v_bs_2890_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_2901_, lean_object* v_args_2902_){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; 
v___x_2910_ = lean_array_get_size(v_args_2902_);
v___x_2911_ = lean_unsigned_to_nat(3u);
v___x_2912_ = lean_nat_dec_eq(v___x_2910_, v___x_2911_);
if (v___x_2912_ == 0)
{
lean_dec_ref(v_c_2901_);
goto v___jp_2904_;
}
else
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = lean_unsigned_to_nat(1u);
v___x_2914_ = lean_array_fget_borrowed(v_args_2902_, v___x_2913_);
if (lean_obj_tag(v___x_2914_) == 4)
{
lean_object* v_s_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v_s_2915_ = lean_ctor_get(v___x_2914_, 0);
v___x_2916_ = lean_unsigned_to_nat(2u);
v___x_2917_ = lean_array_fget_borrowed(v_args_2902_, v___x_2916_);
if (lean_obj_tag(v___x_2917_) == 7)
{
lean_object* v_items_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v_items_2918_ = lean_ctor_get(v___x_2917_, 0);
v___x_2919_ = lean_unsigned_to_nat(0u);
v___x_2920_ = lean_array_fget_borrowed(v_args_2902_, v___x_2919_);
if (lean_obj_tag(v___x_2920_) == 7)
{
lean_object* v_items_2921_; size_t v_sz_2922_; size_t v___x_2923_; lean_object* v___x_2924_; 
v_items_2921_ = lean_ctor_get(v___x_2920_, 0);
v_sz_2922_ = lean_array_size(v_items_2921_);
v___x_2923_ = ((size_t)0ULL);
lean_inc_ref(v_items_2921_);
v___x_2924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_2922_, v___x_2923_, v_items_2921_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_dec_ref_known(v___x_2924_, 1);
lean_dec_ref(v_c_2901_);
goto v___jp_2907_;
}
else
{
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_dec_ref_known(v___x_2924_, 1);
lean_dec_ref(v_c_2901_);
goto v___jp_2907_;
}
else
{
lean_object* v_a_2925_; lean_object* v_ref_2926_; lean_object* v___x_2927_; lean_object* v_live_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v_a_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_a_2925_);
lean_dec_ref_known(v___x_2924_, 1);
v_ref_2926_ = lean_ctor_get(v_c_2901_, 1);
v___x_2927_ = lean_st_ref_get(v_ref_2926_);
v_live_2928_ = lean_ctor_get(v___x_2927_, 1);
lean_inc(v_live_2928_);
lean_dec(v___x_2927_);
v___x_2929_ = lean_array_to_list(v_a_2925_);
v___x_2930_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_2931_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_2928_, v___x_2929_, v___x_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__2));
v___x_2933_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2918_, v___x_2931_, v_s_2915_, v___x_2932_);
lean_dec_ref(v___x_2931_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v_fst_2935_; lean_object* v___x_2936_; size_t v_sz_2937_; lean_object* v___x_2938_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v___x_2933_, 1);
v_fst_2935_ = lean_ctor_get(v_a_2934_, 0);
lean_inc(v_fst_2935_);
lean_dec(v_a_2934_);
v___x_2936_ = lean_box(0);
v_sz_2937_ = lean_array_size(v_fst_2935_);
lean_inc_ref(v_c_2901_);
v___x_2938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2901_, v_fst_2935_, v_sz_2937_, v___x_2923_, v___x_2936_);
lean_dec(v_fst_2935_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v___x_2939_; lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref_known(v___x_2938_, 1);
v___x_2939_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_2901_);
lean_dec_ref(v_c_2901_);
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2942_ = v___x_2939_;
v_isShared_2943_ = v_isSharedCheck_2949_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2939_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2949_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; uint8_t v___x_2945_; lean_object* v___x_2947_; 
v___x_2944_ = lean_alloc_ctor(2, 0, 1);
v___x_2945_ = lean_unbox(v_a_2940_);
lean_dec(v_a_2940_);
lean_ctor_set_uint8(v___x_2944_, 0, v___x_2945_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2944_);
v___x_2947_ = v___x_2942_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2944_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2957_; 
lean_dec_ref(v_c_2901_);
v_a_2950_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2952_ = v___x_2938_;
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2938_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2955_; 
if (v_isShared_2953_ == 0)
{
v___x_2955_ = v___x_2952_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2950_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
lean_dec_ref(v_c_2901_);
v_a_2958_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2933_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2933_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_c_2901_);
goto v___jp_2907_;
}
}
else
{
lean_dec_ref(v_c_2901_);
goto v___jp_2904_;
}
}
else
{
lean_dec_ref(v_c_2901_);
goto v___jp_2904_;
}
}
v___jp_2904_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
v___jp_2907_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_2966_, lean_object* v_args_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2966_, v_args_2967_);
lean_dec_ref(v_args_2967_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_2970_, lean_object* v_Model_2971_, lean_object* v_Msg_2972_, lean_object* v_c_2973_, lean_object* v_args_2974_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_2973_, v_args_2974_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_2977_, lean_object* v_Model_2978_, lean_object* v_Msg_2979_, lean_object* v_c_2980_, lean_object* v_args_2981_, lean_object* v_a_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Lasm_UI_Runtime_onEvent(v_Flags_2977_, v_Model_2978_, v_Msg_2979_, v_c_2980_, v_args_2981_);
lean_dec_ref(v_args_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_2984_, lean_object* v_items_2985_, lean_object* v___x_2986_, lean_object* v_s_2987_, lean_object* v_inst_2988_, lean_object* v_a_2989_){
_start:
{
lean_object* v___x_2991_; 
v___x_2991_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2985_, v___x_2986_, v_s_2987_, v_a_2989_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_2992_, lean_object* v_items_2993_, lean_object* v___x_2994_, lean_object* v_s_2995_, lean_object* v_inst_2996_, lean_object* v_a_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_2992_, v_items_2993_, v___x_2994_, v_s_2995_, v_inst_2996_, v_a_2997_);
lean_dec_ref(v_s_2995_);
lean_dec_ref(v___x_2994_);
lean_dec_ref(v_items_2993_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3000_, lean_object* v_Flags_3001_, lean_object* v_Model_3002_, lean_object* v_c_3003_, lean_object* v_as_3004_, size_t v_sz_3005_, size_t v_i_3006_, lean_object* v_b_3007_){
_start:
{
lean_object* v___x_3009_; 
v___x_3009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3003_, v_as_3004_, v_sz_3005_, v_i_3006_, v_b_3007_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3010_, lean_object* v_Flags_3011_, lean_object* v_Model_3012_, lean_object* v_c_3013_, lean_object* v_as_3014_, lean_object* v_sz_3015_, lean_object* v_i_3016_, lean_object* v_b_3017_, lean_object* v___y_3018_){
_start:
{
size_t v_sz_boxed_3019_; size_t v_i_boxed_3020_; lean_object* v_res_3021_; 
v_sz_boxed_3019_ = lean_unbox_usize(v_sz_3015_);
lean_dec(v_sz_3015_);
v_i_boxed_3020_ = lean_unbox_usize(v_i_3016_);
lean_dec(v_i_3016_);
v_res_3021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3010_, v_Flags_3011_, v_Model_3012_, v_c_3013_, v_as_3014_, v_sz_boxed_3019_, v_i_boxed_3020_, v_b_3017_);
lean_dec_ref(v_as_3014_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3022_, lean_object* v_c_3023_, lean_object* v_as_x27_3024_, lean_object* v_b_3025_){
_start:
{
if (lean_obj_tag(v_as_x27_3024_) == 0)
{
lean_object* v___x_3027_; 
lean_dec_ref(v_c_3023_);
lean_dec_ref(v___y_3022_);
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v_b_3025_);
return v___x_3027_;
}
else
{
lean_object* v_head_3028_; lean_object* v_tail_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v_head_3028_ = lean_ctor_get(v_as_x27_3024_, 0);
v_tail_3029_ = lean_ctor_get(v_as_x27_3024_, 1);
v___x_3030_ = lean_box(0);
lean_inc(v_head_3028_);
lean_inc_ref(v___y_3022_);
v___x_3031_ = lean_apply_1(v_head_3028_, v___y_3022_);
if (lean_obj_tag(v___x_3031_) == 1)
{
lean_object* v_val_3032_; lean_object* v___x_3033_; 
v_val_3032_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_val_3032_);
lean_dec_ref_known(v___x_3031_, 1);
lean_inc_ref(v_c_3023_);
v___x_3033_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3023_, v_val_3032_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_dec_ref_known(v___x_3033_, 1);
v_as_x27_3024_ = v_tail_3029_;
v_b_3025_ = v___x_3030_;
goto _start;
}
else
{
lean_dec_ref(v_c_3023_);
lean_dec_ref(v___y_3022_);
return v___x_3033_;
}
}
else
{
lean_dec(v___x_3031_);
v_as_x27_3024_ = v_tail_3029_;
v_b_3025_ = v___x_3030_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object* v___y_3036_, lean_object* v_c_3037_, lean_object* v_as_x27_3038_, lean_object* v_b_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3036_, v_c_3037_, v_as_x27_3038_, v_b_3039_);
lean_dec(v_as_x27_3038_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3042_, lean_object* v_args_3043_){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; uint8_t v___x_3050_; 
v___x_3048_ = lean_unsigned_to_nat(0u);
v___x_3049_ = lean_array_get_size(v_args_3043_);
v___x_3050_ = lean_nat_dec_lt(v___x_3048_, v___x_3049_);
if (v___x_3050_ == 0)
{
lean_dec_ref(v_c_3042_);
goto v___jp_3045_;
}
else
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_array_fget_borrowed(v_args_3043_, v___x_3048_);
if (lean_obj_tag(v___x_3051_) == 3)
{
double v_n_3052_; lean_object* v___y_3054_; lean_object* v___x_3085_; uint8_t v___x_3086_; 
v_n_3052_ = lean_ctor_get_float(v___x_3051_, 0);
v___x_3085_ = lean_unsigned_to_nat(1u);
v___x_3086_ = lean_nat_dec_lt(v___x_3085_, v___x_3049_);
if (v___x_3086_ == 0)
{
goto v___jp_3083_;
}
else
{
lean_object* v___x_3087_; 
v___x_3087_ = lean_array_fget_borrowed(v_args_3043_, v___x_3085_);
if (lean_obj_tag(v___x_3087_) == 7)
{
lean_object* v_items_3088_; 
v_items_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc_ref(v_items_3088_);
v___y_3054_ = v_items_3088_;
goto v___jp_3053_;
}
else
{
goto v___jp_3083_;
}
}
v___jp_3053_:
{
lean_object* v_ref_3055_; lean_object* v___x_3056_; lean_object* v_handlers_3057_; uint64_t v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v_ref_3055_ = lean_ctor_get(v_c_3042_, 1);
v___x_3056_ = lean_st_ref_get(v_ref_3055_);
v_handlers_3057_ = lean_ctor_get(v___x_3056_, 6);
lean_inc_ref(v_handlers_3057_);
lean_dec(v___x_3056_);
v___x_3058_ = lean_float_to_uint64(v_n_3052_);
v___x_3059_ = lean_uint64_to_nat(v___x_3058_);
v___x_3060_ = lean_box(0);
v___x_3061_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3057_, v___x_3059_, v___x_3060_);
lean_dec(v___x_3059_);
lean_dec_ref(v_handlers_3057_);
v___x_3062_ = lean_box(0);
lean_inc_ref(v_c_3042_);
v___x_3063_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3054_, v_c_3042_, v___x_3061_, v___x_3062_);
lean_dec(v___x_3061_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v___x_3064_; lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref_known(v___x_3063_, 1);
v___x_3064_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3042_);
lean_dec_ref(v_c_3042_);
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3067_ = v___x_3064_;
v_isShared_3068_ = v_isSharedCheck_3074_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3064_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3074_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3069_; uint8_t v___x_3070_; lean_object* v___x_3072_; 
v___x_3069_ = lean_alloc_ctor(2, 0, 1);
v___x_3070_ = lean_unbox(v_a_3065_);
lean_dec(v_a_3065_);
lean_ctor_set_uint8(v___x_3069_, 0, v___x_3070_);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 0, v___x_3069_);
v___x_3072_ = v___x_3067_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3069_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec_ref(v_c_3042_);
v_a_3075_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3063_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3063_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
v___jp_3083_:
{
lean_object* v___x_3084_; 
v___x_3084_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3054_ = v___x_3084_;
goto v___jp_3053_;
}
}
else
{
lean_dec_ref(v_c_3042_);
goto v___jp_3045_;
}
}
v___jp_3045_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
return v___x_3047_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3089_, lean_object* v_args_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3089_, v_args_3090_);
lean_dec_ref(v_args_3090_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3093_, lean_object* v_Model_3094_, lean_object* v_Msg_3095_, lean_object* v_c_3096_, lean_object* v_args_3097_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3096_, v_args_3097_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3100_, lean_object* v_Model_3101_, lean_object* v_Msg_3102_, lean_object* v_c_3103_, lean_object* v_args_3104_, lean_object* v_a_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_Lasm_UI_Runtime_onSub(v_Flags_3100_, v_Model_3101_, v_Msg_3102_, v_c_3103_, v_args_3104_);
lean_dec_ref(v_args_3104_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3107_, lean_object* v___y_3108_, lean_object* v_Flags_3109_, lean_object* v_Model_3110_, lean_object* v_c_3111_, lean_object* v_as_3112_, lean_object* v_as_x27_3113_, lean_object* v_b_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3108_, v_c_3111_, v_as_x27_3113_, v_b_3114_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object* v_Msg_3118_, lean_object* v___y_3119_, lean_object* v_Flags_3120_, lean_object* v_Model_3121_, lean_object* v_c_3122_, lean_object* v_as_3123_, lean_object* v_as_x27_3124_, lean_object* v_b_3125_, lean_object* v_a_3126_, lean_object* v___y_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(v_Msg_3118_, v___y_3119_, v_Flags_3120_, v_Model_3121_, v_c_3122_, v_as_3123_, v_as_x27_3124_, v_b_3125_, v_a_3126_);
lean_dec(v_as_x27_3124_);
lean_dec(v_as_3123_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3129_, lean_object* v_onUrlChange_3130_, lean_object* v___x_3131_, lean_object* v_args_3132_){
_start:
{
lean_object* v___y_3147_; lean_object* v___x_3163_; uint8_t v___x_3164_; 
v___x_3163_ = lean_array_get_size(v_args_3132_);
v___x_3164_ = lean_nat_dec_lt(v___x_3131_, v___x_3163_);
if (v___x_3164_ == 0)
{
lean_object* v___x_3165_; 
v___x_3165_ = lean_box(0);
v___y_3147_ = v___x_3165_;
goto v___jp_3146_;
}
else
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_array_fget_borrowed(v_args_3132_, v___x_3131_);
lean_inc(v___x_3166_);
v___x_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
v___y_3147_ = v___x_3167_;
goto v___jp_3146_;
}
v___jp_3134_:
{
lean_object* v___x_3135_; lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3145_; 
v___x_3135_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3129_);
lean_dec_ref(v___x_3129_);
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3138_ = v___x_3135_;
v_isShared_3139_ = v_isSharedCheck_3145_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3135_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3145_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3140_; uint8_t v___x_3141_; lean_object* v___x_3143_; 
v___x_3140_ = lean_alloc_ctor(2, 0, 1);
v___x_3141_ = lean_unbox(v_a_3136_);
lean_dec(v_a_3136_);
lean_ctor_set_uint8(v___x_3140_, 0, v___x_3141_);
if (v_isShared_3139_ == 0)
{
lean_ctor_set(v___x_3138_, 0, v___x_3140_);
v___x_3143_ = v___x_3138_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3140_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
v___jp_3146_:
{
if (lean_obj_tag(v_onUrlChange_3130_) == 1)
{
if (lean_obj_tag(v___y_3147_) == 1)
{
lean_object* v_val_3148_; 
v_val_3148_ = lean_ctor_get(v___y_3147_, 0);
lean_inc(v_val_3148_);
lean_dec_ref_known(v___y_3147_, 1);
if (lean_obj_tag(v_val_3148_) == 4)
{
lean_object* v_val_3149_; lean_object* v_s_3150_; lean_object* v___x_3151_; 
v_val_3149_ = lean_ctor_get(v_onUrlChange_3130_, 0);
lean_inc(v_val_3149_);
lean_dec_ref_known(v_onUrlChange_3130_, 1);
v_s_3150_ = lean_ctor_get(v_val_3148_, 0);
lean_inc_ref(v_s_3150_);
lean_dec_ref_known(v_val_3148_, 1);
v___x_3151_ = l_Lasm_UI_Url_parse(v_s_3150_);
if (lean_obj_tag(v___x_3151_) == 1)
{
lean_object* v_val_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v_val_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_val_3152_);
lean_dec_ref_known(v___x_3151_, 1);
v___x_3153_ = lean_apply_1(v_val_3149_, v_val_3152_);
lean_inc_ref(v___x_3129_);
v___x_3154_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3129_, v___x_3153_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_dec_ref_known(v___x_3154_, 1);
goto v___jp_3134_;
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_dec_ref(v___x_3129_);
v_a_3155_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3154_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3154_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
else
{
lean_dec(v___x_3151_);
lean_dec(v_val_3149_);
goto v___jp_3134_;
}
}
else
{
lean_dec(v_val_3148_);
lean_dec_ref_known(v_onUrlChange_3130_, 1);
goto v___jp_3134_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3130_, 1);
lean_dec(v___y_3147_);
goto v___jp_3134_;
}
}
else
{
lean_dec(v___y_3147_);
lean_dec(v_onUrlChange_3130_);
goto v___jp_3134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3168_, lean_object* v_onUrlChange_3169_, lean_object* v___x_3170_, lean_object* v_args_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3168_, v_onUrlChange_3169_, v___x_3170_, v_args_3171_);
lean_dec_ref(v_args_3171_);
lean_dec(v___x_3170_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v___x_3174_, lean_object* v_x_3175_){
_start:
{
lean_object* v___x_3177_; lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3186_; 
v___x_3177_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3174_);
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3186_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3186_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3182_; lean_object* v___x_3184_; 
v___x_3182_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3182_, 0, v_a_3178_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v___x_3182_);
v___x_3184_ = v___x_3180_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v___x_3182_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v___x_3187_, lean_object* v_x_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Lasm_UI_App_run___redArg___lam__1(v___x_3187_, v_x_3188_);
lean_dec_ref(v_x_3188_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3191_, lean_object* v___x_3192_, lean_object* v_a_3193_, lean_object* v_x_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___y_3198_; lean_object* v___x_3216_; 
v___x_3216_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3192_, v_a_3193_);
if (lean_obj_tag(v___x_3216_) == 0)
{
v___y_3198_ = v___x_3216_;
goto v___jp_3197_;
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3219_ = l_Lasm_UI_Runtime_report(v___x_3218_, v_a_3217_);
v___y_3198_ = v___x_3219_;
goto v___jp_3197_;
}
v___jp_3197_:
{
if (lean_obj_tag(v___y_3198_) == 0)
{
lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3206_; 
v_isSharedCheck_3206_ = !lean_is_exclusive(v___y_3198_);
if (v_isSharedCheck_3206_ == 0)
{
lean_object* v_unused_3207_; 
v_unused_3207_ = lean_ctor_get(v___y_3198_, 0);
lean_dec(v_unused_3207_);
v___x_3200_ = v___y_3198_;
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
else
{
lean_dec(v___y_3198_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3202_; lean_object* v___x_3204_; 
v___x_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3191_);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v___x_3202_);
v___x_3204_ = v___x_3200_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3202_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3208_ = lean_ctor_get(v___y_3198_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___y_3198_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___y_3198_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___y_3198_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3220_, lean_object* v___x_3221_, lean_object* v_a_3222_, lean_object* v_x_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3220_, v___x_3221_, v_a_3222_, v_x_3223_, v___y_3224_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3227_, lean_object* v___x_3228_, lean_object* v_d_3229_){
_start:
{
lean_object* v___x_3231_; 
v___x_3231_ = lean_apply_1(v_val_3227_, v_d_3229_);
if (lean_obj_tag(v___x_3231_) == 1)
{
lean_object* v_val_3232_; lean_object* v___x_3233_; 
v_val_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_val_3232_);
lean_dec_ref_known(v___x_3231_, 1);
lean_inc_ref(v___x_3228_);
v___x_3233_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3228_, v_val_3232_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v___x_3234_; 
lean_dec_ref_known(v___x_3233_, 1);
v___x_3234_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3228_);
lean_dec_ref(v___x_3228_);
return v___x_3234_;
}
else
{
lean_dec_ref(v___x_3228_);
return v___x_3233_;
}
}
else
{
lean_object* v___x_3235_; 
lean_dec(v___x_3231_);
v___x_3235_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3228_);
lean_dec_ref(v___x_3228_);
return v___x_3235_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3236_, lean_object* v___x_3237_, lean_object* v_d_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3236_, v___x_3237_, v_d_3238_);
return v_res_3240_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3241_; 
v___x_3241_ = l_instMonadEIO___redArg();
return v___x_3241_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = lean_box(0);
v___x_3248_ = lean_unsigned_to_nat(16u);
v___x_3249_ = lean_mk_array(v___x_3248_, v___x_3247_);
return v___x_3249_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3250_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__6, &l_Lasm_UI_App_run___redArg___closed__6_once, _init_l_Lasm_UI_App_run___redArg___closed__6);
v___x_3251_ = lean_unsigned_to_nat(0u);
v___x_3252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
lean_ctor_set(v___x_3252_, 1, v___x_3250_);
return v___x_3252_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__8(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__7, &l_Lasm_UI_App_run___redArg___closed__7_once, _init_l_Lasm_UI_App_run___redArg___closed__7);
v___x_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3264_, lean_object* v_app_3265_){
_start:
{
lean_object* v___x_3267_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3276_; uint8_t v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___y_3280_; uint8_t v___y_3281_; uint8_t v___y_3282_; lean_object* v___x_3369_; 
v___x_3267_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3369_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___x_3369_, 1);
v___x_3371_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3372_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3373_ = l_Lasm_JS_Data_field(v_a_3370_, v___x_3372_);
v___x_3374_ = l_Lasm_JS_decodeAs___redArg(v_inst_3264_, v___x_3371_, v___x_3373_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v_a_3375_; lean_object* v___x_3376_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; lean_object* v___y_3382_; lean_object* v___y_3383_; lean_object* v___y_3384_; lean_object* v___y_3385_; uint8_t v___y_3386_; uint8_t v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3404_; lean_object* v___x_3478_; 
v_a_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_a_3375_);
lean_dec_ref_known(v___x_3374_, 1);
v___x_3376_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3478_ = l_Lasm_JS_Data_field(v_a_3370_, v___x_3376_);
lean_dec(v_a_3370_);
if (lean_obj_tag(v___x_3478_) == 4)
{
lean_object* v_s_3479_; lean_object* v___x_3480_; 
v_s_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc_ref(v_s_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = l_Lasm_UI_Url_parse(v_s_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
goto v___jp_3476_;
}
else
{
lean_object* v_val_3481_; 
v_val_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_val_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v___y_3404_ = v_val_3481_;
goto v___jp_3403_;
}
}
else
{
lean_dec(v___x_3478_);
goto v___jp_3476_;
}
v___jp_3377_:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3390_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3391_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3392_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___y_3384_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3390_);
lean_ctor_set(v___x_3393_, 1, v___x_3392_);
v___x_3394_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___y_3388_);
lean_ctor_set(v___x_3395_, 1, v___x_3391_);
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3394_);
lean_ctor_set(v___x_3396_, 1, v___x_3395_);
v___x_3397_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3398_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___y_3381_);
lean_ctor_set(v___x_3398_, 1, v___x_3391_);
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___y_3382_);
lean_ctor_set(v___x_3400_, 1, v___x_3391_);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3376_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
v___x_3402_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v___y_3389_) == 0)
{
lean_inc_ref(v___y_3379_);
v___y_3269_ = v___y_3379_;
v___y_3270_ = v___y_3380_;
v___y_3271_ = v___x_3393_;
v___y_3272_ = v___y_3378_;
v___y_3273_ = v___y_3385_;
v___y_3274_ = v___x_3399_;
v___y_3275_ = v___x_3396_;
v___y_3276_ = v___x_3401_;
v___y_3277_ = v___y_3387_;
v___y_3278_ = v___x_3402_;
v___y_3279_ = v___y_3383_;
v___y_3280_ = v___y_3379_;
v___y_3281_ = v___y_3386_;
v___y_3282_ = v___y_3387_;
goto v___jp_3268_;
}
else
{
lean_dec_ref_known(v___y_3389_, 1);
lean_inc_ref(v___y_3379_);
v___y_3269_ = v___y_3379_;
v___y_3270_ = v___y_3380_;
v___y_3271_ = v___x_3393_;
v___y_3272_ = v___y_3378_;
v___y_3273_ = v___y_3385_;
v___y_3274_ = v___x_3399_;
v___y_3275_ = v___x_3396_;
v___y_3276_ = v___x_3401_;
v___y_3277_ = v___y_3387_;
v___y_3278_ = v___x_3402_;
v___y_3279_ = v___y_3383_;
v___y_3280_ = v___y_3379_;
v___y_3281_ = v___y_3386_;
v___y_3282_ = v___y_3386_;
goto v___jp_3268_;
}
}
v___jp_3403_:
{
lean_object* v_init_3405_; lean_object* v_onUrlChange_3406_; lean_object* v_receive_3407_; lean_object* v___x_3408_; lean_object* v_fst_3409_; lean_object* v_snd_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3475_; 
v_init_3405_ = lean_ctor_get(v_app_3265_, 0);
v_onUrlChange_3406_ = lean_ctor_get(v_app_3265_, 4);
lean_inc(v_onUrlChange_3406_);
v_receive_3407_ = lean_ctor_get(v_app_3265_, 5);
lean_inc(v_receive_3407_);
lean_inc_ref(v_init_3405_);
v___x_3408_ = lean_apply_2(v_init_3405_, v_a_3375_, v___y_3404_);
v_fst_3409_ = lean_ctor_get(v___x_3408_, 0);
v_snd_3410_ = lean_ctor_get(v___x_3408_, 1);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3412_ = v___x_3408_;
v_isShared_3413_ = v_isSharedCheck_3475_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_snd_3410_);
lean_inc(v_fst_3409_);
lean_dec(v___x_3408_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3475_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; uint8_t v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3425_; 
v___x_3414_ = lean_box(0);
v___x_3415_ = lean_unsigned_to_nat(1u);
v___x_3416_ = lean_unsigned_to_nat(0u);
v___x_3417_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__7, &l_Lasm_UI_App_run___redArg___closed__7_once, _init_l_Lasm_UI_App_run___redArg___closed__7);
v___x_3418_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__8, &l_Lasm_UI_App_run___redArg___closed__8_once, _init_l_Lasm_UI_App_run___redArg___closed__8);
v___x_3419_ = 1;
v___x_3420_ = 0;
v___x_3421_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__9));
v___x_3422_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v___x_3422_, 0, v_fst_3409_);
lean_ctor_set(v___x_3422_, 1, v___x_3414_);
lean_ctor_set(v___x_3422_, 2, v___x_3415_);
lean_ctor_set(v___x_3422_, 3, v___x_3418_);
lean_ctor_set(v___x_3422_, 4, v___x_3421_);
lean_ctor_set(v___x_3422_, 5, v___x_3417_);
lean_ctor_set(v___x_3422_, 6, v___x_3417_);
lean_ctor_set(v___x_3422_, 7, v___x_3415_);
lean_ctor_set(v___x_3422_, 8, v___x_3414_);
lean_ctor_set_uint8(v___x_3422_, sizeof(void*)*9, v___x_3419_);
lean_ctor_set_uint8(v___x_3422_, sizeof(void*)*9 + 1, v___x_3420_);
lean_ctor_set_uint8(v___x_3422_, sizeof(void*)*9 + 2, v___x_3420_);
v___x_3423_ = lean_st_mk_ref(v___x_3422_);
lean_inc(v___x_3423_);
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 1, v___x_3423_);
lean_ctor_set(v___x_3412_, 0, v_app_3265_);
v___x_3425_ = v___x_3412_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_app_3265_);
lean_ctor_set(v_reuseFailAlloc_3474_, 1, v___x_3423_);
v___x_3425_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
lean_object* v___f_3426_; lean_object* v___f_3427_; lean_object* v___x_3428_; 
lean_inc(v_onUrlChange_3406_);
lean_inc_ref_n(v___x_3425_, 2);
v___f_3426_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3426_, 0, v___x_3425_);
lean_closure_set(v___f_3426_, 1, v_onUrlChange_3406_);
lean_closure_set(v___f_3426_, 2, v___x_3416_);
v___f_3427_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3427_, 0, v___x_3425_);
v___x_3428_ = l_Lasm_JS_Function_ofSyncFn(v___f_3427_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
lean_inc_ref(v___x_3425_);
v___x_3430_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3430_, 0, lean_box(0));
lean_closure_set(v___x_3430_, 1, lean_box(0));
lean_closure_set(v___x_3430_, 2, lean_box(0));
lean_closure_set(v___x_3430_, 3, v___x_3425_);
v___x_3431_ = l_Lasm_JS_Function_ofSyncFn(v___x_3430_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
lean_inc_ref(v___x_3425_);
v___x_3433_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3433_, 0, lean_box(0));
lean_closure_set(v___x_3433_, 1, lean_box(0));
lean_closure_set(v___x_3433_, 2, lean_box(0));
lean_closure_set(v___x_3433_, 3, v___x_3425_);
v___x_3434_ = l_Lasm_JS_Function_ofSyncFn(v___x_3433_);
if (lean_obj_tag(v___x_3434_) == 0)
{
lean_object* v_a_3435_; lean_object* v___x_3436_; 
v_a_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_a_3435_);
lean_dec_ref_known(v___x_3434_, 1);
v___x_3436_ = l_Lasm_JS_Function_ofSyncFn(v___f_3426_);
if (lean_obj_tag(v___x_3436_) == 0)
{
if (lean_obj_tag(v_receive_3407_) == 1)
{
lean_object* v_a_3437_; lean_object* v_val_3438_; lean_object* v___f_3439_; lean_object* v___x_3440_; 
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc(v_a_3437_);
lean_dec_ref_known(v___x_3436_, 1);
v_val_3438_ = lean_ctor_get(v_receive_3407_, 0);
lean_inc(v_val_3438_);
lean_dec_ref_known(v_receive_3407_, 1);
lean_inc_ref(v___x_3425_);
v___f_3439_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3439_, 0, v_val_3438_);
lean_closure_set(v___f_3439_, 1, v___x_3425_);
v___x_3440_ = l_Lasm_Web_App_onMessage(v___f_3439_);
if (lean_obj_tag(v___x_3440_) == 0)
{
lean_dec_ref_known(v___x_3440_, 1);
v___y_3378_ = v___x_3423_;
v___y_3379_ = v___x_3425_;
v___y_3380_ = v___x_3415_;
v___y_3381_ = v_a_3435_;
v___y_3382_ = v_a_3437_;
v___y_3383_ = v___x_3416_;
v___y_3384_ = v_a_3429_;
v___y_3385_ = v_snd_3410_;
v___y_3386_ = v___x_3419_;
v___y_3387_ = v___x_3420_;
v___y_3388_ = v_a_3432_;
v___y_3389_ = v_onUrlChange_3406_;
goto v___jp_3377_;
}
else
{
lean_dec(v_a_3437_);
lean_dec(v_a_3435_);
lean_dec(v_a_3432_);
lean_dec(v_a_3429_);
lean_dec_ref(v___x_3425_);
lean_dec(v___x_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_onUrlChange_3406_);
return v___x_3440_;
}
}
else
{
lean_object* v_a_3441_; 
lean_dec(v_receive_3407_);
v_a_3441_ = lean_ctor_get(v___x_3436_, 0);
lean_inc(v_a_3441_);
lean_dec_ref_known(v___x_3436_, 1);
v___y_3378_ = v___x_3423_;
v___y_3379_ = v___x_3425_;
v___y_3380_ = v___x_3415_;
v___y_3381_ = v_a_3435_;
v___y_3382_ = v_a_3441_;
v___y_3383_ = v___x_3416_;
v___y_3384_ = v_a_3429_;
v___y_3385_ = v_snd_3410_;
v___y_3386_ = v___x_3419_;
v___y_3387_ = v___x_3420_;
v___y_3388_ = v_a_3432_;
v___y_3389_ = v_onUrlChange_3406_;
goto v___jp_3377_;
}
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec(v_a_3435_);
lean_dec(v_a_3432_);
lean_dec(v_a_3429_);
lean_dec_ref(v___x_3425_);
lean_dec(v___x_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_receive_3407_);
lean_dec(v_onUrlChange_3406_);
v_a_3442_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3436_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3436_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_a_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
}
}
}
}
else
{
lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3457_; 
lean_dec(v_a_3432_);
lean_dec(v_a_3429_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___x_3425_);
lean_dec(v___x_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_receive_3407_);
lean_dec(v_onUrlChange_3406_);
v_a_3450_ = lean_ctor_get(v___x_3434_, 0);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3434_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3452_ = v___x_3434_;
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_dec(v___x_3434_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3455_; 
if (v_isShared_3453_ == 0)
{
v___x_3455_ = v___x_3452_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_a_3450_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
}
}
else
{
lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v_a_3429_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___x_3425_);
lean_dec(v___x_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_receive_3407_);
lean_dec(v_onUrlChange_3406_);
v_a_3458_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3460_ = v___x_3431_;
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_dec(v___x_3431_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
if (v_isShared_3461_ == 0)
{
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3458_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
else
{
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___x_3425_);
lean_dec(v___x_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_receive_3407_);
lean_dec(v_onUrlChange_3406_);
v_a_3466_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3428_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3428_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_a_3466_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
}
}
}
v___jp_3476_:
{
lean_object* v___x_3477_; 
v___x_3477_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__12));
v___y_3404_ = v___x_3477_;
goto v___jp_3403_;
}
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec(v_a_3370_);
lean_dec_ref(v_app_3265_);
v_a_3482_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3374_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3374_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v_app_3265_);
lean_dec_ref(v_inst_3264_);
v_a_3490_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3369_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3369_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
v___jp_3268_:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3283_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3283_, 0, v___y_3282_);
lean_inc_ref(v___y_3278_);
v___x_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___y_3278_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = lean_box(0);
v___x_3286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___y_3276_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
v___x_3288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___y_3274_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___y_3275_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___y_3271_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = l_Lasm_JS_obj(v___x_3290_);
v___x_3292_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3291_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v___x_3293_; lean_object* v_a_3294_; lean_object* v___x_3295_; 
lean_dec_ref_known(v___x_3292_, 1);
lean_inc_ref(v___y_3280_);
v___x_3293_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3280_);
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3294_);
lean_dec_ref(v___x_3293_);
v___x_3295_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3294_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v___x_3296_; lean_object* v_model_3297_; lean_object* v_live_3298_; lean_object* v_next_3299_; lean_object* v_tables_3300_; uint8_t v_dirty_3301_; uint8_t v_scheduled_3302_; lean_object* v_queue_3303_; lean_object* v_subs_3304_; lean_object* v_handlers_3305_; lean_object* v_nextSub_3306_; lean_object* v_ports_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3368_; 
lean_dec_ref_known(v___x_3295_, 1);
v___x_3296_ = lean_st_ref_take(v___y_3272_);
v_model_3297_ = lean_ctor_get(v___x_3296_, 0);
v_live_3298_ = lean_ctor_get(v___x_3296_, 1);
v_next_3299_ = lean_ctor_get(v___x_3296_, 2);
v_tables_3300_ = lean_ctor_get(v___x_3296_, 3);
v_dirty_3301_ = lean_ctor_get_uint8(v___x_3296_, sizeof(void*)*9);
v_scheduled_3302_ = lean_ctor_get_uint8(v___x_3296_, sizeof(void*)*9 + 1);
v_queue_3303_ = lean_ctor_get(v___x_3296_, 4);
v_subs_3304_ = lean_ctor_get(v___x_3296_, 5);
v_handlers_3305_ = lean_ctor_get(v___x_3296_, 6);
v_nextSub_3306_ = lean_ctor_get(v___x_3296_, 7);
v_ports_3307_ = lean_ctor_get(v___x_3296_, 8);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3309_ = v___x_3296_;
v_isShared_3310_ = v_isSharedCheck_3368_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_ports_3307_);
lean_inc(v_nextSub_3306_);
lean_inc(v_handlers_3305_);
lean_inc(v_subs_3304_);
lean_inc(v_queue_3303_);
lean_inc(v_tables_3300_);
lean_inc(v_next_3299_);
lean_inc(v_live_3298_);
lean_inc(v_model_3297_);
lean_dec(v___x_3296_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3368_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_model_3297_);
lean_ctor_set(v_reuseFailAlloc_3367_, 1, v_live_3298_);
lean_ctor_set(v_reuseFailAlloc_3367_, 2, v_next_3299_);
lean_ctor_set(v_reuseFailAlloc_3367_, 3, v_tables_3300_);
lean_ctor_set(v_reuseFailAlloc_3367_, 4, v_queue_3303_);
lean_ctor_set(v_reuseFailAlloc_3367_, 5, v_subs_3304_);
lean_ctor_set(v_reuseFailAlloc_3367_, 6, v_handlers_3305_);
lean_ctor_set(v_reuseFailAlloc_3367_, 7, v_nextSub_3306_);
lean_ctor_set(v_reuseFailAlloc_3367_, 8, v_ports_3307_);
lean_ctor_set_uint8(v_reuseFailAlloc_3367_, sizeof(void*)*9, v_dirty_3301_);
lean_ctor_set_uint8(v_reuseFailAlloc_3367_, sizeof(void*)*9 + 1, v_scheduled_3302_);
v___x_3312_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___f_3315_; lean_object* v___x_4071__overap_3316_; lean_object* v___x_3317_; 
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*9 + 2, v___y_3281_);
v___x_3313_ = lean_st_ref_put(v___y_3272_, v___x_3312_);
v___x_3314_ = lean_box(0);
v___f_3315_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3315_, 0, v___x_3314_);
lean_closure_set(v___f_3315_, 1, v___y_3269_);
v___x_4071__overap_3316_ = l_List_forIn_x27_loop___redArg(v___x_3267_, v___f_3315_, v___y_3273_, v___x_3314_);
lean_dec(v___y_3273_);
v___x_3317_ = lean_apply_1(v___x_4071__overap_3316_, lean_box(0));
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v___x_3318_; lean_object* v_model_3319_; lean_object* v_live_3320_; lean_object* v_next_3321_; lean_object* v_tables_3322_; uint8_t v_dirty_3323_; uint8_t v_scheduled_3324_; lean_object* v_queue_3325_; lean_object* v_subs_3326_; lean_object* v_handlers_3327_; lean_object* v_nextSub_3328_; lean_object* v_ports_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3366_; 
lean_dec_ref_known(v___x_3317_, 1);
v___x_3318_ = lean_st_ref_take(v___y_3272_);
v_model_3319_ = lean_ctor_get(v___x_3318_, 0);
v_live_3320_ = lean_ctor_get(v___x_3318_, 1);
v_next_3321_ = lean_ctor_get(v___x_3318_, 2);
v_tables_3322_ = lean_ctor_get(v___x_3318_, 3);
v_dirty_3323_ = lean_ctor_get_uint8(v___x_3318_, sizeof(void*)*9);
v_scheduled_3324_ = lean_ctor_get_uint8(v___x_3318_, sizeof(void*)*9 + 1);
v_queue_3325_ = lean_ctor_get(v___x_3318_, 4);
v_subs_3326_ = lean_ctor_get(v___x_3318_, 5);
v_handlers_3327_ = lean_ctor_get(v___x_3318_, 6);
v_nextSub_3328_ = lean_ctor_get(v___x_3318_, 7);
v_ports_3329_ = lean_ctor_get(v___x_3318_, 8);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3331_ = v___x_3318_;
v_isShared_3332_ = v_isSharedCheck_3366_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_ports_3329_);
lean_inc(v_nextSub_3328_);
lean_inc(v_handlers_3327_);
lean_inc(v_subs_3326_);
lean_inc(v_queue_3325_);
lean_inc(v_tables_3322_);
lean_inc(v_next_3321_);
lean_inc(v_live_3320_);
lean_inc(v_model_3319_);
lean_dec(v___x_3318_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3366_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_model_3319_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v_live_3320_);
lean_ctor_set(v_reuseFailAlloc_3365_, 2, v_next_3321_);
lean_ctor_set(v_reuseFailAlloc_3365_, 3, v_tables_3322_);
lean_ctor_set(v_reuseFailAlloc_3365_, 4, v_queue_3325_);
lean_ctor_set(v_reuseFailAlloc_3365_, 5, v_subs_3326_);
lean_ctor_set(v_reuseFailAlloc_3365_, 6, v_handlers_3327_);
lean_ctor_set(v_reuseFailAlloc_3365_, 7, v_nextSub_3328_);
lean_ctor_set(v_reuseFailAlloc_3365_, 8, v_ports_3329_);
lean_ctor_set_uint8(v_reuseFailAlloc_3365_, sizeof(void*)*9, v_dirty_3323_);
lean_ctor_set_uint8(v_reuseFailAlloc_3365_, sizeof(void*)*9 + 1, v_scheduled_3324_);
v___x_3334_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v_model_3337_; lean_object* v_live_3338_; lean_object* v_next_3339_; lean_object* v_tables_3340_; uint8_t v_dirty_3341_; uint8_t v_scheduled_3342_; lean_object* v_queue_3343_; uint8_t v_busy_3344_; lean_object* v_subs_3345_; lean_object* v_handlers_3346_; lean_object* v_nextSub_3347_; lean_object* v_ports_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3364_; 
lean_ctor_set_uint8(v___x_3334_, sizeof(void*)*9 + 2, v___y_3277_);
v___x_3335_ = lean_st_ref_put(v___y_3272_, v___x_3334_);
v___x_3336_ = lean_st_ref_get(v___y_3272_);
v_model_3337_ = lean_ctor_get(v___x_3336_, 0);
v_live_3338_ = lean_ctor_get(v___x_3336_, 1);
v_next_3339_ = lean_ctor_get(v___x_3336_, 2);
v_tables_3340_ = lean_ctor_get(v___x_3336_, 3);
v_dirty_3341_ = lean_ctor_get_uint8(v___x_3336_, sizeof(void*)*9);
v_scheduled_3342_ = lean_ctor_get_uint8(v___x_3336_, sizeof(void*)*9 + 1);
v_queue_3343_ = lean_ctor_get(v___x_3336_, 4);
v_busy_3344_ = lean_ctor_get_uint8(v___x_3336_, sizeof(void*)*9 + 2);
v_subs_3345_ = lean_ctor_get(v___x_3336_, 5);
v_handlers_3346_ = lean_ctor_get(v___x_3336_, 6);
v_nextSub_3347_ = lean_ctor_get(v___x_3336_, 7);
v_ports_3348_ = lean_ctor_get(v___x_3336_, 8);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3350_ = v___x_3336_;
v_isShared_3351_ = v_isSharedCheck_3364_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_ports_3348_);
lean_inc(v_nextSub_3347_);
lean_inc(v_handlers_3346_);
lean_inc(v_subs_3345_);
lean_inc(v_queue_3343_);
lean_inc(v_tables_3340_);
lean_inc(v_next_3339_);
lean_inc(v_live_3338_);
lean_inc(v_model_3337_);
lean_dec(v___x_3336_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3364_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; uint8_t v___x_3353_; 
v___x_3352_ = lean_array_get_size(v_queue_3343_);
v___x_3353_ = lean_nat_dec_lt(v___y_3279_, v___x_3352_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; 
lean_del_object(v___x_3350_);
lean_dec(v_ports_3348_);
lean_dec(v_nextSub_3347_);
lean_dec_ref(v_handlers_3346_);
lean_dec_ref(v_subs_3345_);
lean_dec_ref(v_queue_3343_);
lean_dec_ref(v_tables_3340_);
lean_dec(v_next_3339_);
lean_dec(v_live_3338_);
lean_dec(v_model_3337_);
lean_dec(v___y_3279_);
lean_dec(v___y_3272_);
lean_dec(v___y_3270_);
lean_inc_ref(v___y_3280_);
v___x_3354_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3280_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v___x_3355_; 
lean_dec_ref_known(v___x_3354_, 1);
v___x_3355_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3280_);
lean_dec_ref(v___y_3280_);
return v___x_3355_;
}
else
{
lean_dec_ref(v___y_3280_);
return v___x_3354_;
}
}
else
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
v___x_3356_ = lean_array_fget(v_queue_3343_, v___y_3279_);
lean_dec(v___y_3279_);
v___x_3357_ = l_Array_extract___redArg(v_queue_3343_, v___y_3270_, v___x_3352_);
lean_dec_ref(v_queue_3343_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 4, v___x_3357_);
v___x_3359_ = v___x_3350_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 9, 3);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_model_3337_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v_live_3338_);
lean_ctor_set(v_reuseFailAlloc_3363_, 2, v_next_3339_);
lean_ctor_set(v_reuseFailAlloc_3363_, 3, v_tables_3340_);
lean_ctor_set(v_reuseFailAlloc_3363_, 4, v___x_3357_);
lean_ctor_set(v_reuseFailAlloc_3363_, 5, v_subs_3345_);
lean_ctor_set(v_reuseFailAlloc_3363_, 6, v_handlers_3346_);
lean_ctor_set(v_reuseFailAlloc_3363_, 7, v_nextSub_3347_);
lean_ctor_set(v_reuseFailAlloc_3363_, 8, v_ports_3348_);
lean_ctor_set_uint8(v_reuseFailAlloc_3363_, sizeof(void*)*9, v_dirty_3341_);
lean_ctor_set_uint8(v_reuseFailAlloc_3363_, sizeof(void*)*9 + 1, v_scheduled_3342_);
lean_ctor_set_uint8(v_reuseFailAlloc_3363_, sizeof(void*)*9 + 2, v_busy_3344_);
v___x_3359_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_st_ref_swap(v___y_3272_, v___x_3359_);
lean_dec(v___y_3272_);
lean_dec(v___x_3360_);
lean_inc_ref(v___y_3280_);
v___x_3361_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3280_, v___x_3356_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v___x_3362_; 
lean_dec_ref_known(v___x_3361_, 1);
v___x_3362_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3280_);
lean_dec_ref(v___y_3280_);
return v___x_3362_;
}
else
{
lean_dec_ref(v___y_3280_);
return v___x_3361_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec(v___y_3272_);
lean_dec(v___y_3270_);
return v___x_3317_;
}
}
}
}
else
{
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
return v___x_3295_;
}
}
else
{
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
return v___x_3292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3498_, lean_object* v_app_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lasm_UI_App_run___redArg(v_inst_3498_, v_app_3499_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3502_, lean_object* v_Model_3503_, lean_object* v_Msg_3504_, lean_object* v_inst_3505_, lean_object* v_app_3506_){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = l_Lasm_UI_App_run___redArg(v_inst_3505_, v_app_3506_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3509_, lean_object* v_Model_3510_, lean_object* v_Msg_3511_, lean_object* v_inst_3512_, lean_object* v_app_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Lasm_UI_App_run(v_Flags_3509_, v_Model_3510_, v_Msg_3511_, v_inst_3512_, v_app_3513_);
return v_res_3515_;
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
