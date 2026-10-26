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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Lasm_UI_diff___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
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
static const lean_array_object l_Lasm_UI_Runtime_frame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Runtime_frame___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Runtime_frame___redArg___closed__0_value;
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
static const lean_ctor_object l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Runtime_onEvent___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Runtime_onEvent___redArg___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg(lean_object* v_event_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_object* v___x_862_; 
v___x_862_ = lean_box(0);
return v___x_862_;
}
else
{
lean_object* v_head_863_; lean_object* v_tail_864_; lean_object* v___x_865_; 
v_head_863_ = lean_ctor_get(v_x_861_, 0);
v_tail_864_ = lean_ctor_get(v_x_861_, 1);
v___x_865_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_860_, v_tail_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
if (lean_obj_tag(v_head_863_) == 3)
{
lean_object* v_listener_866_; lean_object* v_handle_867_; lean_object* v_event_868_; uint8_t v___x_869_; 
v_listener_866_ = lean_ctor_get(v_head_863_, 0);
v_handle_867_ = lean_ctor_get(v_head_863_, 1);
v_event_868_ = lean_ctor_get(v_listener_866_, 0);
v___x_869_ = lean_string_dec_eq(v_event_868_, v_event_860_);
if (v___x_869_ == 0)
{
return v___x_865_;
}
else
{
lean_object* v___x_870_; 
lean_inc_ref(v_handle_867_);
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v_handle_867_);
return v___x_870_;
}
}
else
{
return v___x_865_;
}
}
else
{
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___redArg___boxed(lean_object* v_event_871_, lean_object* v_x_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_871_, v_x_872_);
lean_dec(v_x_872_);
lean_dec_ref(v_event_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor(lean_object* v_Msg_874_, lean_object* v_event_875_, lean_object* v_x_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_event_875_, v_x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_handlerFor___boxed(lean_object* v_Msg_878_, lean_object* v_event_879_, lean_object* v_x_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lasm_UI_Runtime_handlerFor(v_Msg_878_, v_event_879_, v_x_880_);
lean_dec(v_x_880_);
lean_dec_ref(v_event_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
if (lean_obj_tag(v_a_882_) == 0)
{
lean_object* v___x_884_; 
v___x_884_ = l_List_reverse___redArg(v_a_883_);
return v___x_884_;
}
else
{
lean_object* v_head_885_; lean_object* v_tail_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_895_; 
v_head_885_ = lean_ctor_get(v_a_882_, 0);
v_tail_886_ = lean_ctor_get(v_a_882_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_a_882_);
if (v_isSharedCheck_895_ == 0)
{
v___x_888_ = v_a_882_;
v_isShared_889_ = v_isSharedCheck_895_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_tail_886_);
lean_inc(v_head_885_);
lean_dec(v_a_882_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_895_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = lean_array_mk(v_head_885_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 1, v_a_883_);
lean_ctor_set(v___x_888_, 0, v___x_890_);
v___x_892_ = v___x_888_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_a_883_);
v___x_892_ = v_reuseFailAlloc_894_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
v_a_882_ = v_tail_886_;
v_a_883_ = v___x_892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(size_t v_sz_896_, size_t v_i_897_, lean_object* v_bs_898_){
_start:
{
uint8_t v___x_899_; 
v___x_899_ = lean_usize_dec_lt(v_i_897_, v_sz_896_);
if (v___x_899_ == 0)
{
return v_bs_898_;
}
else
{
lean_object* v_v_900_; lean_object* v___x_901_; lean_object* v_bs_x27_902_; lean_object* v___x_903_; size_t v___x_904_; size_t v___x_905_; lean_object* v___x_906_; 
v_v_900_ = lean_array_uget(v_bs_898_, v_i_897_);
v___x_901_ = lean_unsigned_to_nat(0u);
v_bs_x27_902_ = lean_array_uset(v_bs_898_, v_i_897_, v___x_901_);
v___x_903_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_903_, 0, v_v_900_);
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_897_, v___x_904_);
v___x_906_ = lean_array_uset(v_bs_x27_902_, v_i_897_, v___x_903_);
v_i_897_ = v___x_905_;
v_bs_898_ = v___x_906_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0___boxed(lean_object* v_sz_908_, lean_object* v_i_909_, lean_object* v_bs_910_){
_start:
{
size_t v_sz_boxed_911_; size_t v_i_boxed_912_; lean_object* v_res_913_; 
v_sz_boxed_911_ = lean_unbox_usize(v_sz_908_);
lean_dec(v_sz_908_);
v_i_boxed_912_ = lean_unbox_usize(v_i_909_);
lean_dec(v_i_909_);
v_res_913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_boxed_911_, v_i_boxed_912_, v_bs_910_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(size_t v_sz_914_, size_t v_i_915_, lean_object* v_bs_916_){
_start:
{
uint8_t v___x_917_; 
v___x_917_ = lean_usize_dec_lt(v_i_915_, v_sz_914_);
if (v___x_917_ == 0)
{
return v_bs_916_;
}
else
{
lean_object* v_v_918_; lean_object* v___x_919_; lean_object* v_bs_x27_920_; size_t v_sz_921_; size_t v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; size_t v___x_925_; size_t v___x_926_; lean_object* v___x_927_; 
v_v_918_ = lean_array_uget(v_bs_916_, v_i_915_);
v___x_919_ = lean_unsigned_to_nat(0u);
v_bs_x27_920_ = lean_array_uset(v_bs_916_, v_i_915_, v___x_919_);
v_sz_921_ = lean_array_size(v_v_918_);
v___x_922_ = ((size_t)0ULL);
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__0(v_sz_921_, v___x_922_, v_v_918_);
v___x_924_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
v___x_925_ = ((size_t)1ULL);
v___x_926_ = lean_usize_add(v_i_915_, v___x_925_);
v___x_927_ = lean_array_uset(v_bs_x27_920_, v_i_915_, v___x_924_);
v_i_915_ = v___x_926_;
v_bs_916_ = v___x_927_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2___boxed(lean_object* v_sz_929_, lean_object* v_i_930_, lean_object* v_bs_931_){
_start:
{
size_t v_sz_boxed_932_; size_t v_i_boxed_933_; lean_object* v_res_934_; 
v_sz_boxed_932_ = lean_unbox_usize(v_sz_929_);
lean_dec(v_sz_929_);
v_i_boxed_933_ = lean_unbox_usize(v_i_930_);
lean_dec(v_i_930_);
v_res_934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_boxed_932_, v_i_boxed_933_, v_bs_931_);
return v_res_934_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__2(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_938_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__1));
v___x_939_ = lean_unsigned_to_nat(2u);
v___x_940_ = lean_mk_empty_array_with_capacity(v___x_939_);
v___x_941_ = lean_array_push(v___x_940_, v___x_938_);
return v___x_941_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__9(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__8));
v___x_955_ = lean_unsigned_to_nat(5u);
v___x_956_ = lean_mk_empty_array_with_capacity(v___x_955_);
v___x_957_ = lean_array_push(v___x_956_, v___x_954_);
return v___x_957_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__12(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_961_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__11));
v___x_962_ = lean_unsigned_to_nat(5u);
v___x_963_ = lean_mk_empty_array_with_capacity(v___x_962_);
v___x_964_ = lean_array_push(v___x_963_, v___x_961_);
return v___x_964_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_specData___closed__15(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_968_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__14));
v___x_969_ = lean_unsigned_to_nat(2u);
v___x_970_ = lean_mk_empty_array_with_capacity(v___x_969_);
v___x_971_ = lean_array_push(v___x_970_, v___x_968_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_specData(lean_object* v_x_972_){
_start:
{
switch(lean_obj_tag(v_x_972_))
{
case 0:
{
lean_object* v_ms_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_991_; 
v_ms_973_ = lean_ctor_get(v_x_972_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v_x_972_);
if (v_isSharedCheck_991_ == 0)
{
v___x_975_ = v_x_972_;
v_isShared_976_ = v_isSharedCheck_991_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_ms_973_);
lean_dec(v_x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_991_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___y_978_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_984_ = lean_nat_to_int(v_ms_973_);
v___x_985_ = lean_nat_abs(v___x_984_);
v___x_986_ = lean_cstr_to_nat("9007199254740991");
v___x_987_ = lean_nat_dec_le(v___x_985_, v___x_986_);
lean_dec(v___x_985_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
v___x_988_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_984_);
v___y_978_ = v___x_988_;
goto v___jp_977_;
}
else
{
double v___x_989_; lean_object* v___x_990_; 
v___x_989_ = l_Float_ofInt(v___x_984_);
lean_dec(v___x_984_);
v___x_990_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_990_, 0, v___x_989_);
v___y_978_ = v___x_990_;
goto v___jp_977_;
}
v___jp_977_:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_979_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__2, &l_Lasm_UI_Runtime_specData___closed__2_once, _init_l_Lasm_UI_Runtime_specData___closed__2);
v___x_980_ = lean_array_push(v___x_979_, v___y_978_);
if (v_isShared_976_ == 0)
{
lean_ctor_set_tag(v___x_975_, 7);
lean_ctor_set(v___x_975_, 0, v___x_980_);
v___x_982_ = v___x_975_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
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
case 1:
{
lean_object* v___x_992_; 
v___x_992_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__6));
return v___x_992_;
}
case 2:
{
lean_object* v_event_993_; lean_object* v_paths_994_; uint8_t v_preventDefault_995_; uint8_t v_stopPropagation_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; size_t v_sz_1001_; size_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_event_993_ = lean_ctor_get(v_x_972_, 0);
lean_inc_ref(v_event_993_);
v_paths_994_ = lean_ctor_get(v_x_972_, 1);
lean_inc(v_paths_994_);
v_preventDefault_995_ = lean_ctor_get_uint8(v_x_972_, sizeof(void*)*2);
v_stopPropagation_996_ = lean_ctor_get_uint8(v_x_972_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_972_, 2);
v___x_997_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_997_, 0, v_event_993_);
v___x_998_ = lean_box(0);
v___x_999_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_994_, v___x_998_);
v___x_1000_ = lean_array_mk(v___x_999_);
v_sz_1001_ = lean_array_size(v___x_1000_);
v___x_1002_ = ((size_t)0ULL);
v___x_1003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1001_, v___x_1002_, v___x_1000_);
v___x_1004_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1005_, 0, v_preventDefault_995_);
v___x_1006_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1006_, 0, v_stopPropagation_996_);
v___x_1007_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__9, &l_Lasm_UI_Runtime_specData___closed__9_once, _init_l_Lasm_UI_Runtime_specData___closed__9);
v___x_1008_ = lean_array_push(v___x_1007_, v___x_997_);
v___x_1009_ = lean_array_push(v___x_1008_, v___x_1004_);
v___x_1010_ = lean_array_push(v___x_1009_, v___x_1005_);
v___x_1011_ = lean_array_push(v___x_1010_, v___x_1006_);
v___x_1012_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
case 3:
{
lean_object* v_event_1013_; lean_object* v_paths_1014_; uint8_t v_preventDefault_1015_; uint8_t v_stopPropagation_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; size_t v_sz_1021_; size_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_event_1013_ = lean_ctor_get(v_x_972_, 0);
lean_inc_ref(v_event_1013_);
v_paths_1014_ = lean_ctor_get(v_x_972_, 1);
lean_inc(v_paths_1014_);
v_preventDefault_1015_ = lean_ctor_get_uint8(v_x_972_, sizeof(void*)*2);
v_stopPropagation_1016_ = lean_ctor_get_uint8(v_x_972_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_972_, 2);
v___x_1017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_event_1013_);
v___x_1018_ = lean_box(0);
v___x_1019_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_specData_spec__1(v_paths_1014_, v___x_1018_);
v___x_1020_ = lean_array_mk(v___x_1019_);
v_sz_1021_ = lean_array_size(v___x_1020_);
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1021_, v___x_1022_, v___x_1020_);
v___x_1024_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1025_, 0, v_preventDefault_1015_);
v___x_1026_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1026_, 0, v_stopPropagation_1016_);
v___x_1027_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__12, &l_Lasm_UI_Runtime_specData___closed__12_once, _init_l_Lasm_UI_Runtime_specData___closed__12);
v___x_1028_ = lean_array_push(v___x_1027_, v___x_1017_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1024_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1025_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1026_);
v___x_1032_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
default: 
{
lean_object* v_name_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1043_; 
v_name_1033_ = lean_ctor_get(v_x_972_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v_x_972_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1035_ = v_x_972_;
v_isShared_1036_ = v_isSharedCheck_1043_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_name_1033_);
lean_dec(v_x_972_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1043_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_name_1033_);
v___x_1038_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1039_ = lean_obj_once(&l_Lasm_UI_Runtime_specData___closed__15, &l_Lasm_UI_Runtime_specData___closed__15_once, _init_l_Lasm_UI_Runtime_specData___closed__15);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1038_);
v___x_1041_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
return v___x_1041_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName(uint8_t v_x_1046_){
_start:
{
if (v_x_1046_ == 0)
{
lean_object* v___x_1047_; 
v___x_1047_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__0));
return v___x_1047_;
}
else
{
lean_object* v___x_1048_; 
v___x_1048_ = ((lean_object*)(l_Lasm_UI_Runtime_storageName___closed__1));
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_storageName___boxed(lean_object* v_x_1049_){
_start:
{
uint8_t v_x_22__boxed_1050_; lean_object* v_res_1051_; 
v_x_22__boxed_1050_ = lean_unbox(v_x_1049_);
v_res_1051_ = l_Lasm_UI_Runtime_storageName(v_x_22__boxed_1050_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report(lean_object* v_what_1052_, lean_object* v_e_1053_){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1055_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Runtime_Dom_now_spec__0___closed__0));
v___x_1056_ = lean_string_append(v_what_1052_, v___x_1055_);
v___x_1057_ = lean_io_error_to_string(v_e_1053_);
v___x_1058_ = lean_string_append(v___x_1056_, v___x_1057_);
lean_dec_ref(v___x_1057_);
v___x_1059_ = lean_box(0);
v___x_1060_ = l_Lasm_UI_Runtime_Dom_error(v___x_1058_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v___x_1060_, 0);
lean_dec(v_unused_1068_);
v___x_1062_ = v___x_1060_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_dec(v___x_1060_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 0, v___x_1059_);
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1059_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
else
{
lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1060_, 0);
lean_dec(v_unused_1076_);
v___x_1070_ = v___x_1060_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_dec(v___x_1060_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1059_);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1059_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_report___boxed(lean_object* v_what_1077_, lean_object* v_e_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lasm_UI_Runtime_report(v_what_1077_, v_e_1078_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg(lean_object* v_c_1081_){
_start:
{
lean_object* v_ref_1083_; lean_object* v___x_1084_; uint8_t v_dirty_1085_; 
v_ref_1083_ = lean_ctor_get(v_c_1081_, 1);
v___x_1084_ = lean_st_ref_get(v_ref_1083_);
v_dirty_1085_ = lean_ctor_get_uint8(v___x_1084_, sizeof(void*)*10);
if (v_dirty_1085_ == 0)
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
lean_dec(v___x_1084_);
v___x_1086_ = lean_box(v_dirty_1085_);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
else
{
uint8_t v_scheduled_1088_; 
v_scheduled_1088_ = lean_ctor_get_uint8(v___x_1084_, sizeof(void*)*10 + 1);
if (v_scheduled_1088_ == 0)
{
lean_object* v_model_1089_; lean_object* v_live_1090_; lean_object* v_next_1091_; lean_object* v_tables_1092_; lean_object* v_queue_1093_; uint8_t v_busy_1094_; lean_object* v_subs_1095_; lean_object* v_handlers_1096_; lean_object* v_nextSub_1097_; lean_object* v_touched_1098_; lean_object* v_ports_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1109_; 
v_model_1089_ = lean_ctor_get(v___x_1084_, 0);
v_live_1090_ = lean_ctor_get(v___x_1084_, 1);
v_next_1091_ = lean_ctor_get(v___x_1084_, 2);
v_tables_1092_ = lean_ctor_get(v___x_1084_, 3);
v_queue_1093_ = lean_ctor_get(v___x_1084_, 4);
v_busy_1094_ = lean_ctor_get_uint8(v___x_1084_, sizeof(void*)*10 + 2);
v_subs_1095_ = lean_ctor_get(v___x_1084_, 5);
v_handlers_1096_ = lean_ctor_get(v___x_1084_, 6);
v_nextSub_1097_ = lean_ctor_get(v___x_1084_, 7);
v_touched_1098_ = lean_ctor_get(v___x_1084_, 8);
v_ports_1099_ = lean_ctor_get(v___x_1084_, 9);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1101_ = v___x_1084_;
v_isShared_1102_ = v_isSharedCheck_1109_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_ports_1099_);
lean_inc(v_touched_1098_);
lean_inc(v_nextSub_1097_);
lean_inc(v_handlers_1096_);
lean_inc(v_subs_1095_);
lean_inc(v_queue_1093_);
lean_inc(v_tables_1092_);
lean_inc(v_next_1091_);
lean_inc(v_live_1090_);
lean_inc(v_model_1089_);
lean_dec(v___x_1084_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1109_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_model_1089_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_live_1090_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v_next_1091_);
lean_ctor_set(v_reuseFailAlloc_1108_, 3, v_tables_1092_);
lean_ctor_set(v_reuseFailAlloc_1108_, 4, v_queue_1093_);
lean_ctor_set(v_reuseFailAlloc_1108_, 5, v_subs_1095_);
lean_ctor_set(v_reuseFailAlloc_1108_, 6, v_handlers_1096_);
lean_ctor_set(v_reuseFailAlloc_1108_, 7, v_nextSub_1097_);
lean_ctor_set(v_reuseFailAlloc_1108_, 8, v_touched_1098_);
lean_ctor_set(v_reuseFailAlloc_1108_, 9, v_ports_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*10, v_dirty_1085_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*10 + 2, v_busy_1094_);
v___x_1104_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_ctor_set_uint8(v___x_1104_, sizeof(void*)*10 + 1, v_dirty_1085_);
v___x_1105_ = lean_st_ref_swap(v_ref_1083_, v___x_1104_);
lean_dec(v___x_1105_);
v___x_1106_ = lean_box(v_dirty_1085_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
}
}
else
{
uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec(v___x_1084_);
v___x_1110_ = 0;
v___x_1111_ = lean_box(v___x_1110_);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___redArg___boxed(lean_object* v_c_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1113_);
lean_dec_ref(v_c_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame(lean_object* v_Flags_1116_, lean_object* v_Model_1117_, lean_object* v_Msg_1118_, lean_object* v_c_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_takeFrame___boxed(lean_object* v_Flags_1122_, lean_object* v_Model_1123_, lean_object* v_Msg_1124_, lean_object* v_c_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_UI_Runtime_takeFrame(v_Flags_1122_, v_Model_1123_, v_Msg_1124_, v_c_1125_);
lean_dec_ref(v_c_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg(lean_object* v_c_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1141_; 
v___x_1130_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1128_);
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; 
v___x_1135_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_box(0);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
else
{
lean_object* v___x_1140_; 
lean_del_object(v___x_1133_);
v___x_1140_ = l_Lasm_UI_Runtime_Dom_schedule();
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___redArg___boxed(lean_object* v_c_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1142_);
lean_dec_ref(v_c_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame(lean_object* v_Flags_1145_, lean_object* v_Model_1146_, lean_object* v_Msg_1147_, lean_object* v_c_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_1148_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_requestFrame___boxed(lean_object* v_Flags_1151_, lean_object* v_Model_1152_, lean_object* v_Msg_1153_, lean_object* v_c_1154_, lean_object* v_a_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lasm_UI_Runtime_requestFrame(v_Flags_1151_, v_Model_1152_, v_Msg_1153_, v_c_1154_);
lean_dec_ref(v_c_1154_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(lean_object* v_a_1157_, lean_object* v_b_1158_, lean_object* v_x_1159_){
_start:
{
if (lean_obj_tag(v_x_1159_) == 0)
{
lean_dec(v_b_1158_);
lean_dec(v_a_1157_);
return v_x_1159_;
}
else
{
lean_object* v_key_1160_; lean_object* v_value_1161_; lean_object* v_tail_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1174_; 
v_key_1160_ = lean_ctor_get(v_x_1159_, 0);
v_value_1161_ = lean_ctor_get(v_x_1159_, 1);
v_tail_1162_ = lean_ctor_get(v_x_1159_, 2);
v_isSharedCheck_1174_ = !lean_is_exclusive(v_x_1159_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1164_ = v_x_1159_;
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_tail_1162_);
lean_inc(v_value_1161_);
lean_inc(v_key_1160_);
lean_dec(v_x_1159_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
uint8_t v___x_1166_; 
lean_inc(v_a_1157_);
lean_inc(v_key_1160_);
v___x_1166_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1160_, v_a_1157_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1157_, v_b_1158_, v_tail_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 2, v___x_1167_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_key_1160_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_value_1161_);
lean_ctor_set(v_reuseFailAlloc_1170_, 2, v___x_1167_);
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
lean_object* v___x_1172_; 
lean_dec(v_value_1161_);
lean_dec(v_key_1160_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_b_1158_);
lean_ctor_set(v___x_1164_, 0, v_a_1157_);
v___x_1172_ = v___x_1164_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1157_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_b_1158_);
lean_ctor_set(v_reuseFailAlloc_1173_, 2, v_tail_1162_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(lean_object* v_a_1175_, lean_object* v_x_1176_){
_start:
{
if (lean_obj_tag(v_x_1176_) == 0)
{
uint8_t v___x_1177_; 
lean_dec(v_a_1175_);
v___x_1177_ = 0;
return v___x_1177_;
}
else
{
lean_object* v_key_1178_; lean_object* v_tail_1179_; uint8_t v___x_1180_; 
v_key_1178_ = lean_ctor_get(v_x_1176_, 0);
lean_inc(v_key_1178_);
v_tail_1179_ = lean_ctor_get(v_x_1176_, 2);
lean_inc(v_tail_1179_);
lean_dec_ref_known(v_x_1176_, 3);
lean_inc(v_a_1175_);
v___x_1180_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1178_, v_a_1175_);
if (v___x_1180_ == 0)
{
v_x_1176_ = v_tail_1179_;
goto _start;
}
else
{
lean_dec(v_tail_1179_);
lean_dec(v_a_1175_);
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg___boxed(lean_object* v_a_1182_, lean_object* v_x_1183_){
_start:
{
uint8_t v_res_1184_; lean_object* v_r_1185_; 
v_res_1184_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1182_, v_x_1183_);
v_r_1185_ = lean_box(v_res_1184_);
return v_r_1185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(lean_object* v_x_1186_, lean_object* v_x_1187_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
return v_x_1186_;
}
else
{
lean_object* v_key_1188_; lean_object* v_value_1189_; lean_object* v_tail_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1213_; 
v_key_1188_ = lean_ctor_get(v_x_1187_, 0);
v_value_1189_ = lean_ctor_get(v_x_1187_, 1);
v_tail_1190_ = lean_ctor_get(v_x_1187_, 2);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_x_1187_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1192_ = v_x_1187_;
v_isShared_1193_ = v_isSharedCheck_1213_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_tail_1190_);
lean_inc(v_value_1189_);
lean_inc(v_key_1188_);
lean_dec(v_x_1187_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1213_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v___x_1197_; uint64_t v_fold_1198_; uint64_t v___x_1199_; uint64_t v___x_1200_; uint64_t v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; size_t v___x_1204_; size_t v___x_1205_; size_t v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1194_ = lean_array_get_size(v_x_1186_);
v___x_1195_ = l_Lasm_UI_instHashableSubSpec_hash(v_key_1188_);
v___x_1196_ = 32ULL;
v___x_1197_ = lean_uint64_shift_right(v___x_1195_, v___x_1196_);
v_fold_1198_ = lean_uint64_xor(v___x_1195_, v___x_1197_);
v___x_1199_ = 16ULL;
v___x_1200_ = lean_uint64_shift_right(v_fold_1198_, v___x_1199_);
v___x_1201_ = lean_uint64_xor(v_fold_1198_, v___x_1200_);
v___x_1202_ = lean_uint64_to_usize(v___x_1201_);
v___x_1203_ = lean_usize_of_nat(v___x_1194_);
v___x_1204_ = ((size_t)1ULL);
v___x_1205_ = lean_usize_sub(v___x_1203_, v___x_1204_);
v___x_1206_ = lean_usize_land(v___x_1202_, v___x_1205_);
v___x_1207_ = lean_array_uget_borrowed(v_x_1186_, v___x_1206_);
lean_inc(v___x_1207_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 2, v___x_1207_);
v___x_1209_ = v___x_1192_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_key_1188_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_value_1189_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_array_uset(v_x_1186_, v___x_1206_, v___x_1209_);
v_x_1186_ = v___x_1210_;
v_x_1187_ = v_tail_1190_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(lean_object* v_i_1214_, lean_object* v_source_1215_, lean_object* v_target_1216_){
_start:
{
lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = lean_array_get_size(v_source_1215_);
v___x_1218_ = lean_nat_dec_lt(v_i_1214_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_dec_ref(v_source_1215_);
lean_dec(v_i_1214_);
return v_target_1216_;
}
else
{
lean_object* v_es_1219_; lean_object* v___x_1220_; lean_object* v_source_1221_; lean_object* v_target_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_es_1219_ = lean_array_fget(v_source_1215_, v_i_1214_);
v___x_1220_ = lean_box(0);
v_source_1221_ = lean_array_fset(v_source_1215_, v_i_1214_, v___x_1220_);
v_target_1222_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_target_1216_, v_es_1219_);
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = lean_nat_add(v_i_1214_, v___x_1223_);
lean_dec(v_i_1214_);
v_i_1214_ = v___x_1224_;
v_source_1215_ = v_source_1221_;
v_target_1216_ = v_target_1222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(lean_object* v_data_1226_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_nbuckets_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1227_ = lean_array_get_size(v_data_1226_);
v___x_1228_ = lean_unsigned_to_nat(2u);
v_nbuckets_1229_ = lean_nat_mul(v___x_1227_, v___x_1228_);
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = lean_box(0);
v___x_1232_ = lean_mk_array(v_nbuckets_1229_, v___x_1231_);
v___x_1233_ = lean_array_propagate_mark(v_data_1226_, v___x_1232_);
v___x_1234_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v___x_1230_, v_data_1226_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(lean_object* v_m_1235_, lean_object* v_a_1236_, lean_object* v_b_1237_){
_start:
{
lean_object* v_size_1238_; lean_object* v_buckets_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1282_; 
v_size_1238_ = lean_ctor_get(v_m_1235_, 0);
v_buckets_1239_ = lean_ctor_get(v_m_1235_, 1);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_m_1235_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1241_ = v_m_1235_;
v_isShared_1242_ = v_isSharedCheck_1282_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_buckets_1239_);
lean_inc(v_size_1238_);
lean_dec(v_m_1235_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1282_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; uint64_t v___x_1244_; uint64_t v___x_1245_; uint64_t v___x_1246_; uint64_t v_fold_1247_; uint64_t v___x_1248_; uint64_t v___x_1249_; uint64_t v___x_1250_; size_t v___x_1251_; size_t v___x_1252_; size_t v___x_1253_; size_t v___x_1254_; size_t v___x_1255_; lean_object* v_bkt_1256_; uint8_t v___x_1257_; 
v___x_1243_ = lean_array_get_size(v_buckets_1239_);
v___x_1244_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1236_);
v___x_1245_ = 32ULL;
v___x_1246_ = lean_uint64_shift_right(v___x_1244_, v___x_1245_);
v_fold_1247_ = lean_uint64_xor(v___x_1244_, v___x_1246_);
v___x_1248_ = 16ULL;
v___x_1249_ = lean_uint64_shift_right(v_fold_1247_, v___x_1248_);
v___x_1250_ = lean_uint64_xor(v_fold_1247_, v___x_1249_);
v___x_1251_ = lean_uint64_to_usize(v___x_1250_);
v___x_1252_ = lean_usize_of_nat(v___x_1243_);
v___x_1253_ = ((size_t)1ULL);
v___x_1254_ = lean_usize_sub(v___x_1252_, v___x_1253_);
v___x_1255_ = lean_usize_land(v___x_1251_, v___x_1254_);
v_bkt_1256_ = lean_array_uget_borrowed(v_buckets_1239_, v___x_1255_);
lean_inc(v_bkt_1256_);
lean_inc(v_a_1236_);
v___x_1257_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1236_, v_bkt_1256_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; lean_object* v_size_x27_1259_; lean_object* v___x_1260_; lean_object* v_buckets_x27_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1258_ = lean_unsigned_to_nat(1u);
v_size_x27_1259_ = lean_nat_add(v_size_1238_, v___x_1258_);
lean_dec(v_size_1238_);
lean_inc(v_bkt_1256_);
v___x_1260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1260_, 0, v_a_1236_);
lean_ctor_set(v___x_1260_, 1, v_b_1237_);
lean_ctor_set(v___x_1260_, 2, v_bkt_1256_);
v_buckets_x27_1261_ = lean_array_uset(v_buckets_1239_, v___x_1255_, v___x_1260_);
v___x_1262_ = lean_unsigned_to_nat(4u);
v___x_1263_ = lean_nat_mul(v_size_x27_1259_, v___x_1262_);
v___x_1264_ = lean_unsigned_to_nat(3u);
v___x_1265_ = lean_nat_div(v___x_1263_, v___x_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_array_get_size(v_buckets_x27_1261_);
v___x_1267_ = lean_nat_dec_le(v___x_1265_, v___x_1266_);
lean_dec(v___x_1265_);
if (v___x_1267_ == 0)
{
lean_object* v_val_1268_; lean_object* v___x_1270_; 
v_val_1268_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_buckets_x27_1261_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v_val_1268_);
lean_ctor_set(v___x_1241_, 0, v_size_x27_1259_);
v___x_1270_ = v___x_1241_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_size_x27_1259_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_val_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
else
{
lean_object* v___x_1273_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v_buckets_x27_1261_);
lean_ctor_set(v___x_1241_, 0, v_size_x27_1259_);
v___x_1273_ = v___x_1241_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_size_x27_1259_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_buckets_x27_1261_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
lean_object* v___x_1275_; lean_object* v_buckets_x27_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
lean_inc(v_bkt_1256_);
v___x_1275_ = lean_box(0);
v_buckets_x27_1276_ = lean_array_uset(v_buckets_1239_, v___x_1255_, v___x_1275_);
v___x_1277_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_1236_, v_b_1237_, v_bkt_1256_);
v___x_1278_ = lean_array_uset(v_buckets_x27_1276_, v___x_1255_, v___x_1277_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v___x_1278_);
v___x_1280_ = v___x_1241_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_size_1238_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(lean_object* v_a_1283_, lean_object* v_fallback_1284_, lean_object* v_x_1285_){
_start:
{
if (lean_obj_tag(v_x_1285_) == 0)
{
lean_dec(v_a_1283_);
lean_inc(v_fallback_1284_);
return v_fallback_1284_;
}
else
{
lean_object* v_key_1286_; lean_object* v_value_1287_; lean_object* v_tail_1288_; uint8_t v___x_1289_; 
v_key_1286_ = lean_ctor_get(v_x_1285_, 0);
lean_inc(v_key_1286_);
v_value_1287_ = lean_ctor_get(v_x_1285_, 1);
lean_inc(v_value_1287_);
v_tail_1288_ = lean_ctor_get(v_x_1285_, 2);
lean_inc(v_tail_1288_);
lean_dec_ref_known(v_x_1285_, 3);
lean_inc(v_a_1283_);
v___x_1289_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1286_, v_a_1283_);
if (v___x_1289_ == 0)
{
lean_dec(v_value_1287_);
v_x_1285_ = v_tail_1288_;
goto _start;
}
else
{
lean_dec(v_tail_1288_);
lean_dec(v_a_1283_);
return v_value_1287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg___boxed(lean_object* v_a_1291_, lean_object* v_fallback_1292_, lean_object* v_x_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1291_, v_fallback_1292_, v_x_1293_);
lean_dec(v_fallback_1292_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(lean_object* v_m_1295_, lean_object* v_a_1296_, lean_object* v_fallback_1297_){
_start:
{
lean_object* v_buckets_1298_; lean_object* v___x_1299_; uint64_t v___x_1300_; uint64_t v___x_1301_; uint64_t v___x_1302_; uint64_t v_fold_1303_; uint64_t v___x_1304_; uint64_t v___x_1305_; uint64_t v___x_1306_; size_t v___x_1307_; size_t v___x_1308_; size_t v___x_1309_; size_t v___x_1310_; size_t v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_buckets_1298_ = lean_ctor_get(v_m_1295_, 1);
v___x_1299_ = lean_array_get_size(v_buckets_1298_);
v___x_1300_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1296_);
v___x_1301_ = 32ULL;
v___x_1302_ = lean_uint64_shift_right(v___x_1300_, v___x_1301_);
v_fold_1303_ = lean_uint64_xor(v___x_1300_, v___x_1302_);
v___x_1304_ = 16ULL;
v___x_1305_ = lean_uint64_shift_right(v_fold_1303_, v___x_1304_);
v___x_1306_ = lean_uint64_xor(v_fold_1303_, v___x_1305_);
v___x_1307_ = lean_uint64_to_usize(v___x_1306_);
v___x_1308_ = lean_usize_of_nat(v___x_1299_);
v___x_1309_ = ((size_t)1ULL);
v___x_1310_ = lean_usize_sub(v___x_1308_, v___x_1309_);
v___x_1311_ = lean_usize_land(v___x_1307_, v___x_1310_);
v___x_1312_ = lean_array_uget_borrowed(v_buckets_1298_, v___x_1311_);
lean_inc(v___x_1312_);
v___x_1313_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_1296_, v_fallback_1297_, v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg___boxed(lean_object* v_m_1314_, lean_object* v_a_1315_, lean_object* v_fallback_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_1314_, v_a_1315_, v_fallback_1316_);
lean_dec(v_fallback_1316_);
lean_dec_ref(v_m_1314_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(lean_object* v_as_x27_1318_, lean_object* v_b_1319_){
_start:
{
if (lean_obj_tag(v_as_x27_1318_) == 0)
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v_b_1319_);
return v___x_1321_;
}
else
{
lean_object* v_head_1322_; lean_object* v_tail_1323_; lean_object* v_spec_1324_; lean_object* v_handle_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v_head_1322_ = lean_ctor_get(v_as_x27_1318_, 0);
v_tail_1323_ = lean_ctor_get(v_as_x27_1318_, 1);
v_spec_1324_ = lean_ctor_get(v_head_1322_, 0);
v_handle_1325_ = lean_ctor_get(v_head_1322_, 1);
v___x_1326_ = lean_box(0);
lean_inc_n(v_spec_1324_, 2);
v___x_1327_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_b_1319_, v_spec_1324_, v___x_1326_);
lean_inc_ref(v_handle_1325_);
v___x_1328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1328_, 0, v_handle_1325_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_b_1319_, v_spec_1324_, v___x_1328_);
v_as_x27_1318_ = v_tail_1323_;
v_b_1319_ = v___x_1329_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg___boxed(lean_object* v_as_x27_1331_, lean_object* v_b_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_1331_, v_b_1332_);
lean_dec(v_as_x27_1331_);
return v_res_1334_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(lean_object* v_m_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_buckets_1337_; lean_object* v___x_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; uint64_t v___x_1341_; uint64_t v_fold_1342_; uint64_t v___x_1343_; uint64_t v___x_1344_; uint64_t v___x_1345_; size_t v___x_1346_; size_t v___x_1347_; size_t v___x_1348_; size_t v___x_1349_; size_t v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v_buckets_1337_ = lean_ctor_get(v_m_1335_, 1);
v___x_1338_ = lean_array_get_size(v_buckets_1337_);
v___x_1339_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1336_);
v___x_1340_ = 32ULL;
v___x_1341_ = lean_uint64_shift_right(v___x_1339_, v___x_1340_);
v_fold_1342_ = lean_uint64_xor(v___x_1339_, v___x_1341_);
v___x_1343_ = 16ULL;
v___x_1344_ = lean_uint64_shift_right(v_fold_1342_, v___x_1343_);
v___x_1345_ = lean_uint64_xor(v_fold_1342_, v___x_1344_);
v___x_1346_ = lean_uint64_to_usize(v___x_1345_);
v___x_1347_ = lean_usize_of_nat(v___x_1338_);
v___x_1348_ = ((size_t)1ULL);
v___x_1349_ = lean_usize_sub(v___x_1347_, v___x_1348_);
v___x_1350_ = lean_usize_land(v___x_1346_, v___x_1349_);
v___x_1351_ = lean_array_uget_borrowed(v_buckets_1337_, v___x_1350_);
lean_inc(v___x_1351_);
v___x_1352_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1336_, v___x_1351_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg___boxed(lean_object* v_m_1353_, lean_object* v_a_1354_){
_start:
{
uint8_t v_res_1355_; lean_object* v_r_1356_; 
v_res_1355_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_1353_, v_a_1354_);
lean_dec_ref(v_m_1353_);
v_r_1356_ = lean_box(v_res_1355_);
return v_r_1356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(lean_object* v_a_1357_, lean_object* v_x_1358_){
_start:
{
if (lean_obj_tag(v_x_1358_) == 0)
{
lean_dec(v_a_1357_);
return v_x_1358_;
}
else
{
lean_object* v_key_1359_; lean_object* v_value_1360_; lean_object* v_tail_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1370_; 
v_key_1359_ = lean_ctor_get(v_x_1358_, 0);
v_value_1360_ = lean_ctor_get(v_x_1358_, 1);
v_tail_1361_ = lean_ctor_get(v_x_1358_, 2);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1358_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1363_ = v_x_1358_;
v_isShared_1364_ = v_isSharedCheck_1370_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_tail_1361_);
lean_inc(v_value_1360_);
lean_inc(v_key_1359_);
lean_dec(v_x_1358_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1370_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
uint8_t v___x_1365_; 
lean_inc(v_a_1357_);
lean_inc(v_key_1359_);
v___x_1365_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1359_, v_a_1357_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1366_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1357_, v_tail_1361_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 2, v___x_1366_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_key_1359_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_value_1360_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
else
{
lean_del_object(v___x_1363_);
lean_dec(v_value_1360_);
lean_dec(v_key_1359_);
lean_dec(v_a_1357_);
return v_tail_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(lean_object* v_m_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v_size_1373_; lean_object* v_buckets_1374_; lean_object* v___x_1375_; uint64_t v___x_1376_; uint64_t v___x_1377_; uint64_t v___x_1378_; uint64_t v_fold_1379_; uint64_t v___x_1380_; uint64_t v___x_1381_; uint64_t v___x_1382_; size_t v___x_1383_; size_t v___x_1384_; size_t v___x_1385_; size_t v___x_1386_; size_t v___x_1387_; lean_object* v_bkt_1388_; uint8_t v___x_1389_; 
v_size_1373_ = lean_ctor_get(v_m_1371_, 0);
v_buckets_1374_ = lean_ctor_get(v_m_1371_, 1);
v___x_1375_ = lean_array_get_size(v_buckets_1374_);
v___x_1376_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1372_);
v___x_1377_ = 32ULL;
v___x_1378_ = lean_uint64_shift_right(v___x_1376_, v___x_1377_);
v_fold_1379_ = lean_uint64_xor(v___x_1376_, v___x_1378_);
v___x_1380_ = 16ULL;
v___x_1381_ = lean_uint64_shift_right(v_fold_1379_, v___x_1380_);
v___x_1382_ = lean_uint64_xor(v_fold_1379_, v___x_1381_);
v___x_1383_ = lean_uint64_to_usize(v___x_1382_);
v___x_1384_ = lean_usize_of_nat(v___x_1375_);
v___x_1385_ = ((size_t)1ULL);
v___x_1386_ = lean_usize_sub(v___x_1384_, v___x_1385_);
v___x_1387_ = lean_usize_land(v___x_1383_, v___x_1386_);
v_bkt_1388_ = lean_array_uget_borrowed(v_buckets_1374_, v___x_1387_);
lean_inc(v_bkt_1388_);
lean_inc(v_a_1372_);
v___x_1389_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_1372_, v_bkt_1388_);
if (v___x_1389_ == 0)
{
lean_dec(v_a_1372_);
return v_m_1371_;
}
else
{
lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1402_; 
lean_inc(v_bkt_1388_);
lean_inc_ref(v_buckets_1374_);
lean_inc(v_size_1373_);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_m_1371_);
if (v_isSharedCheck_1402_ == 0)
{
lean_object* v_unused_1403_; lean_object* v_unused_1404_; 
v_unused_1403_ = lean_ctor_get(v_m_1371_, 1);
lean_dec(v_unused_1403_);
v_unused_1404_ = lean_ctor_get(v_m_1371_, 0);
lean_dec(v_unused_1404_);
v___x_1391_ = v_m_1371_;
v_isShared_1392_ = v_isSharedCheck_1402_;
goto v_resetjp_1390_;
}
else
{
lean_dec(v_m_1371_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1402_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1393_; lean_object* v_buckets_x27_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1393_ = lean_box(0);
v_buckets_x27_1394_ = lean_array_uset(v_buckets_1374_, v___x_1387_, v___x_1393_);
v___x_1395_ = lean_unsigned_to_nat(1u);
v___x_1396_ = lean_nat_sub(v_size_1373_, v___x_1395_);
lean_dec(v_size_1373_);
v___x_1397_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_1372_, v_bkt_1388_);
v___x_1398_ = lean_array_uset(v_buckets_x27_1394_, v___x_1387_, v___x_1397_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 1, v___x_1398_);
lean_ctor_set(v___x_1391_, 0, v___x_1396_);
v___x_1400_ = v___x_1391_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1396_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
if (lean_obj_tag(v_a_1406_) == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1409_, 0, v_a_1407_);
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
else
{
lean_object* v_key_1411_; lean_object* v_value_1412_; lean_object* v_tail_1413_; uint8_t v___x_1414_; 
v_key_1411_ = lean_ctor_get(v_a_1406_, 0);
lean_inc_n(v_key_1411_, 2);
v_value_1412_ = lean_ctor_get(v_a_1406_, 1);
lean_inc(v_value_1412_);
v_tail_1413_ = lean_ctor_get(v_a_1406_, 2);
lean_inc(v_tail_1413_);
lean_dec_ref_known(v_a_1406_, 3);
v___x_1414_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_a_1405_, v_key_1411_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
lean_inc(v_key_1411_);
v___x_1415_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_a_1407_, v_key_1411_);
if (lean_obj_tag(v_key_1411_) == 4)
{
lean_dec_ref_known(v_key_1411_, 1);
lean_dec(v_value_1412_);
v_a_1406_ = v_tail_1413_;
v_a_1407_ = v___x_1415_;
goto _start;
}
else
{
lean_dec(v_key_1411_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = l_Lasm_UI_Runtime_Dom_unsub(v_value_1412_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_dec_ref_known(v___x_1417_, 1);
v_a_1406_ = v_tail_1413_;
v_a_1407_ = v___x_1415_;
goto _start;
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec_ref(v___x_1415_);
lean_dec(v_tail_1413_);
v_a_1419_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1417_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1417_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_dec(v_value_1412_);
v_a_1406_ = v_tail_1413_;
v_a_1407_ = v___x_1415_;
goto _start;
}
}
}
else
{
lean_dec(v_value_1412_);
lean_dec(v_key_1411_);
v_a_1406_ = v_tail_1413_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg___boxed(lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec_ref(v_a_1429_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(lean_object* v_a_1434_, lean_object* v_as_1435_, size_t v_sz_1436_, size_t v_i_1437_, lean_object* v_b_1438_){
_start:
{
uint8_t v___x_1440_; 
v___x_1440_ = lean_usize_dec_lt(v_i_1437_, v_sz_1436_);
if (v___x_1440_ == 0)
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_b_1438_);
return v___x_1441_;
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1443_; 
v_a_1442_ = lean_array_uget_borrowed(v_as_1435_, v_i_1437_);
lean_inc(v_a_1442_);
v___x_1443_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_1434_, v_a_1442_, v_b_1438_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1456_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1446_ = v___x_1443_;
v_isShared_1447_ = v_isSharedCheck_1456_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1443_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1456_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
if (lean_obj_tag(v_a_1444_) == 0)
{
lean_object* v_a_1448_; lean_object* v___x_1450_; 
v_a_1448_ = lean_ctor_get(v_a_1444_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v_a_1444_, 1);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v_a_1448_);
v___x_1450_ = v___x_1446_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
else
{
lean_object* v_a_1452_; size_t v___x_1453_; size_t v___x_1454_; 
lean_del_object(v___x_1446_);
v_a_1452_ = lean_ctor_get(v_a_1444_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v_a_1444_, 1);
v___x_1453_ = ((size_t)1ULL);
v___x_1454_ = lean_usize_add(v_i_1437_, v___x_1453_);
v_i_1437_ = v___x_1454_;
v_b_1438_ = v_a_1452_;
goto _start;
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_a_1457_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1443_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1443_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg___boxed(lean_object* v_a_1465_, lean_object* v_as_1466_, lean_object* v_sz_1467_, lean_object* v_i_1468_, lean_object* v_b_1469_, lean_object* v___y_1470_){
_start:
{
size_t v_sz_boxed_1471_; size_t v_i_boxed_1472_; lean_object* v_res_1473_; 
v_sz_boxed_1471_ = lean_unbox_usize(v_sz_1467_);
lean_dec(v_sz_1467_);
v_i_boxed_1472_ = lean_unbox_usize(v_i_1468_);
lean_dec(v_i_1468_);
v_res_1473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_1465_, v_as_1466_, v_sz_boxed_1471_, v_i_boxed_1472_, v_b_1469_);
lean_dec_ref(v_as_1466_);
lean_dec_ref(v_a_1465_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(lean_object* v_a_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
lean_object* v___x_1476_; 
lean_dec(v_a_1474_);
v___x_1476_ = lean_box(0);
return v___x_1476_;
}
else
{
lean_object* v_key_1477_; lean_object* v_value_1478_; lean_object* v_tail_1479_; uint8_t v___x_1480_; 
v_key_1477_ = lean_ctor_get(v_x_1475_, 0);
lean_inc(v_key_1477_);
v_value_1478_ = lean_ctor_get(v_x_1475_, 1);
lean_inc(v_value_1478_);
v_tail_1479_ = lean_ctor_get(v_x_1475_, 2);
lean_inc(v_tail_1479_);
lean_dec_ref_known(v_x_1475_, 3);
lean_inc(v_a_1474_);
v___x_1480_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_key_1477_, v_a_1474_);
if (v___x_1480_ == 0)
{
lean_dec(v_value_1478_);
v_x_1475_ = v_tail_1479_;
goto _start;
}
else
{
lean_object* v___x_1482_; 
lean_dec(v_tail_1479_);
lean_dec(v_a_1474_);
v___x_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_value_1478_);
return v___x_1482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(lean_object* v_m_1483_, lean_object* v_a_1484_){
_start:
{
lean_object* v_buckets_1485_; lean_object* v___x_1486_; uint64_t v___x_1487_; uint64_t v___x_1488_; uint64_t v___x_1489_; uint64_t v_fold_1490_; uint64_t v___x_1491_; uint64_t v___x_1492_; uint64_t v___x_1493_; size_t v___x_1494_; size_t v___x_1495_; size_t v___x_1496_; size_t v___x_1497_; size_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_buckets_1485_ = lean_ctor_get(v_m_1483_, 1);
v___x_1486_ = lean_array_get_size(v_buckets_1485_);
v___x_1487_ = l_Lasm_UI_instHashableSubSpec_hash(v_a_1484_);
v___x_1488_ = 32ULL;
v___x_1489_ = lean_uint64_shift_right(v___x_1487_, v___x_1488_);
v_fold_1490_ = lean_uint64_xor(v___x_1487_, v___x_1489_);
v___x_1491_ = 16ULL;
v___x_1492_ = lean_uint64_shift_right(v_fold_1490_, v___x_1491_);
v___x_1493_ = lean_uint64_xor(v_fold_1490_, v___x_1492_);
v___x_1494_ = lean_uint64_to_usize(v___x_1493_);
v___x_1495_ = lean_usize_of_nat(v___x_1486_);
v___x_1496_ = ((size_t)1ULL);
v___x_1497_ = lean_usize_sub(v___x_1495_, v___x_1496_);
v___x_1498_ = lean_usize_land(v___x_1494_, v___x_1497_);
v___x_1499_ = lean_array_uget_borrowed(v_buckets_1485_, v___x_1498_);
lean_inc(v___x_1499_);
v___x_1500_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_1484_, v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg___boxed(lean_object* v_m_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_1501_, v_a_1502_);
lean_dec_ref(v_m_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(lean_object* v_a_1504_, lean_object* v_fallback_1505_, lean_object* v_x_1506_){
_start:
{
if (lean_obj_tag(v_x_1506_) == 0)
{
lean_inc(v_fallback_1505_);
return v_fallback_1505_;
}
else
{
lean_object* v_key_1507_; lean_object* v_value_1508_; lean_object* v_tail_1509_; uint8_t v___x_1510_; 
v_key_1507_ = lean_ctor_get(v_x_1506_, 0);
v_value_1508_ = lean_ctor_get(v_x_1506_, 1);
v_tail_1509_ = lean_ctor_get(v_x_1506_, 2);
v___x_1510_ = lean_nat_dec_eq(v_key_1507_, v_a_1504_);
if (v___x_1510_ == 0)
{
v_x_1506_ = v_tail_1509_;
goto _start;
}
else
{
lean_inc(v_value_1508_);
return v_value_1508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg___boxed(lean_object* v_a_1512_, lean_object* v_fallback_1513_, lean_object* v_x_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1512_, v_fallback_1513_, v_x_1514_);
lean_dec(v_x_1514_);
lean_dec(v_fallback_1513_);
lean_dec(v_a_1512_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(lean_object* v_m_1516_, lean_object* v_a_1517_, lean_object* v_fallback_1518_){
_start:
{
lean_object* v_buckets_1519_; lean_object* v___x_1520_; uint64_t v___x_1521_; uint64_t v___x_1522_; uint64_t v___x_1523_; uint64_t v_fold_1524_; uint64_t v___x_1525_; uint64_t v___x_1526_; uint64_t v___x_1527_; size_t v___x_1528_; size_t v___x_1529_; size_t v___x_1530_; size_t v___x_1531_; size_t v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v_buckets_1519_ = lean_ctor_get(v_m_1516_, 1);
v___x_1520_ = lean_array_get_size(v_buckets_1519_);
v___x_1521_ = lean_uint64_of_nat(v_a_1517_);
v___x_1522_ = 32ULL;
v___x_1523_ = lean_uint64_shift_right(v___x_1521_, v___x_1522_);
v_fold_1524_ = lean_uint64_xor(v___x_1521_, v___x_1523_);
v___x_1525_ = 16ULL;
v___x_1526_ = lean_uint64_shift_right(v_fold_1524_, v___x_1525_);
v___x_1527_ = lean_uint64_xor(v_fold_1524_, v___x_1526_);
v___x_1528_ = lean_uint64_to_usize(v___x_1527_);
v___x_1529_ = lean_usize_of_nat(v___x_1520_);
v___x_1530_ = ((size_t)1ULL);
v___x_1531_ = lean_usize_sub(v___x_1529_, v___x_1530_);
v___x_1532_ = lean_usize_land(v___x_1528_, v___x_1531_);
v___x_1533_ = lean_array_uget_borrowed(v_buckets_1519_, v___x_1532_);
v___x_1534_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_1517_, v_fallback_1518_, v___x_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg___boxed(lean_object* v_m_1535_, lean_object* v_a_1536_, lean_object* v_fallback_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_1535_, v_a_1536_, v_fallback_1537_);
lean_dec(v_fallback_1537_);
lean_dec(v_a_1536_);
lean_dec_ref(v_m_1535_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(lean_object* v_p_1540_, lean_object* v_value_1541_){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1543_ = ((lean_object*)(l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___closed__0));
v___x_1544_ = lean_unsigned_to_nat(1u);
v___x_1545_ = lean_mk_empty_array_with_capacity(v___x_1544_);
v___x_1546_ = lean_array_push(v___x_1545_, v_value_1541_);
v___x_1547_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_1540_, v___x_1543_, v___x_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19___boxed(lean_object* v_p_1548_, lean_object* v_value_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_p_1548_, v_value_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1(lean_object* v_x_1555_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__1___closed__1));
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__1___boxed(lean_object* v_x_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lasm_UI_Runtime_perform___redArg___lam__1(v_x_1557_);
lean_dec_ref(v_x_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
if (lean_obj_tag(v_a_1559_) == 0)
{
lean_object* v___x_1561_; 
v___x_1561_ = l_List_reverse___redArg(v_a_1560_);
return v___x_1561_;
}
else
{
lean_object* v_head_1562_; lean_object* v_tail_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1577_; 
v_head_1562_ = lean_ctor_get(v_a_1559_, 0);
v_tail_1563_ = lean_ctor_get(v_a_1559_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_a_1559_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1565_ = v_a_1559_;
v_isShared_1566_ = v_isSharedCheck_1577_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_tail_1563_);
lean_inc(v_head_1562_);
lean_dec(v_a_1559_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1577_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v_fst_1567_; lean_object* v_snd_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1574_; 
v_fst_1567_ = lean_ctor_get(v_head_1562_, 0);
lean_inc(v_fst_1567_);
v_snd_1568_ = lean_ctor_get(v_head_1562_, 1);
lean_inc(v_snd_1568_);
lean_dec(v_head_1562_);
v___x_1569_ = lean_unsigned_to_nat(2u);
v___x_1570_ = lean_mk_empty_array_with_capacity(v___x_1569_);
v___x_1571_ = lean_array_push(v___x_1570_, v_fst_1567_);
v___x_1572_ = lean_array_push(v___x_1571_, v_snd_1568_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 1, v_a_1560_);
lean_ctor_set(v___x_1565_, 0, v___x_1572_);
v___x_1574_ = v___x_1565_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_a_1560_);
v___x_1574_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
v_a_1559_ = v_tail_1563_;
v_a_1560_ = v___x_1574_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
if (lean_obj_tag(v_a_1578_) == 0)
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_array_to_list(v_a_1579_);
return v___x_1580_;
}
else
{
lean_object* v_head_1581_; 
v_head_1581_ = lean_ctor_get(v_a_1578_, 0);
if (lean_obj_tag(v_head_1581_) == 7)
{
lean_object* v_tail_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1604_; 
lean_inc_ref(v_head_1581_);
v_tail_1582_ = lean_ctor_get(v_a_1578_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_a_1578_);
if (v_isSharedCheck_1604_ == 0)
{
lean_object* v_unused_1605_; 
v_unused_1605_ = lean_ctor_get(v_a_1578_, 0);
lean_dec(v_unused_1605_);
v___x_1584_ = v_a_1578_;
v_isShared_1585_ = v_isSharedCheck_1604_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_tail_1582_);
lean_dec(v_a_1578_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1604_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v_items_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; uint8_t v___x_1589_; 
v_items_1586_ = lean_ctor_get(v_head_1581_, 0);
lean_inc_ref(v_items_1586_);
lean_dec_ref_known(v_head_1581_, 1);
v___x_1587_ = lean_array_get_size(v_items_1586_);
v___x_1588_ = lean_unsigned_to_nat(2u);
v___x_1589_ = lean_nat_dec_eq(v___x_1587_, v___x_1588_);
if (v___x_1589_ == 0)
{
lean_dec_ref(v_items_1586_);
lean_del_object(v___x_1584_);
v_a_1578_ = v_tail_1582_;
goto _start;
}
else
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___x_1592_ = lean_array_fget_borrowed(v_items_1586_, v___x_1591_);
if (lean_obj_tag(v___x_1592_) == 4)
{
lean_object* v_s_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v_s_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc_ref(v_s_1593_);
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = lean_array_fget(v_items_1586_, v___x_1594_);
lean_dec_ref(v_items_1586_);
if (lean_obj_tag(v___x_1595_) == 4)
{
lean_object* v_s_1596_; lean_object* v___x_1598_; 
v_s_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc_ref(v_s_1596_);
lean_dec_ref_known(v___x_1595_, 1);
if (v_isShared_1585_ == 0)
{
lean_ctor_set_tag(v___x_1584_, 0);
lean_ctor_set(v___x_1584_, 1, v_s_1596_);
lean_ctor_set(v___x_1584_, 0, v_s_1593_);
v___x_1598_ = v___x_1584_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_s_1593_);
lean_ctor_set(v_reuseFailAlloc_1601_, 1, v_s_1596_);
v___x_1598_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_array_push(v_a_1579_, v___x_1598_);
v_a_1578_ = v_tail_1582_;
v_a_1579_ = v___x_1599_;
goto _start;
}
}
else
{
lean_dec(v___x_1595_);
lean_dec_ref(v_s_1593_);
lean_del_object(v___x_1584_);
v_a_1578_ = v_tail_1582_;
goto _start;
}
}
else
{
lean_dec_ref(v_items_1586_);
lean_del_object(v___x_1584_);
v_a_1578_ = v_tail_1582_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1606_; 
v_tail_1606_ = lean_ctor_get(v_a_1578_, 1);
lean_inc(v_tail_1606_);
lean_dec_ref_known(v_a_1578_, 2);
v_a_1578_ = v_tail_1606_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0(uint8_t v_busy_1608_, lean_object* v_s_1609_){
_start:
{
lean_object* v_model_1610_; lean_object* v_live_1611_; lean_object* v_next_1612_; lean_object* v_tables_1613_; uint8_t v_dirty_1614_; uint8_t v_scheduled_1615_; lean_object* v_queue_1616_; lean_object* v_subs_1617_; lean_object* v_handlers_1618_; lean_object* v_nextSub_1619_; lean_object* v_touched_1620_; lean_object* v_ports_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
v_model_1610_ = lean_ctor_get(v_s_1609_, 0);
v_live_1611_ = lean_ctor_get(v_s_1609_, 1);
v_next_1612_ = lean_ctor_get(v_s_1609_, 2);
v_tables_1613_ = lean_ctor_get(v_s_1609_, 3);
v_dirty_1614_ = lean_ctor_get_uint8(v_s_1609_, sizeof(void*)*10);
v_scheduled_1615_ = lean_ctor_get_uint8(v_s_1609_, sizeof(void*)*10 + 1);
v_queue_1616_ = lean_ctor_get(v_s_1609_, 4);
v_subs_1617_ = lean_ctor_get(v_s_1609_, 5);
v_handlers_1618_ = lean_ctor_get(v_s_1609_, 6);
v_nextSub_1619_ = lean_ctor_get(v_s_1609_, 7);
v_touched_1620_ = lean_ctor_get(v_s_1609_, 8);
v_ports_1621_ = lean_ctor_get(v_s_1609_, 9);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_s_1609_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v_s_1609_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_ports_1621_);
lean_inc(v_touched_1620_);
lean_inc(v_nextSub_1619_);
lean_inc(v_handlers_1618_);
lean_inc(v_subs_1617_);
lean_inc(v_queue_1616_);
lean_inc(v_tables_1613_);
lean_inc(v_next_1612_);
lean_inc(v_live_1611_);
lean_inc(v_model_1610_);
lean_dec(v_s_1609_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_model_1610_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_live_1611_);
lean_ctor_set(v_reuseFailAlloc_1627_, 2, v_next_1612_);
lean_ctor_set(v_reuseFailAlloc_1627_, 3, v_tables_1613_);
lean_ctor_set(v_reuseFailAlloc_1627_, 4, v_queue_1616_);
lean_ctor_set(v_reuseFailAlloc_1627_, 5, v_subs_1617_);
lean_ctor_set(v_reuseFailAlloc_1627_, 6, v_handlers_1618_);
lean_ctor_set(v_reuseFailAlloc_1627_, 7, v_nextSub_1619_);
lean_ctor_set(v_reuseFailAlloc_1627_, 8, v_touched_1620_);
lean_ctor_set(v_reuseFailAlloc_1627_, 9, v_ports_1621_);
lean_ctor_set_uint8(v_reuseFailAlloc_1627_, sizeof(void*)*10, v_dirty_1614_);
lean_ctor_set_uint8(v_reuseFailAlloc_1627_, sizeof(void*)*10 + 1, v_scheduled_1615_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*10 + 2, v_busy_1608_);
return v___x_1626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___lam__0___boxed(lean_object* v_busy_1629_, lean_object* v_s_1630_){
_start:
{
uint8_t v_busy_boxed_1631_; lean_object* v_res_1632_; 
v_busy_boxed_1631_ = lean_unbox(v_busy_1629_);
v_res_1632_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_boxed_1631_, v_s_1630_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0(lean_object* v_c_1633_, lean_object* v_msg_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v___x_1637_; 
lean_inc_ref(v_c_1633_);
v___x_1637_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1633_, v_msg_1634_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v___x_1638_; 
lean_dec_ref_known(v___x_1637_, 1);
v___x_1638_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1633_);
lean_dec_ref(v_c_1633_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1648_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1648_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v___x_1646_; 
v___x_1643_ = lean_alloc_ctor(2, 0, 1);
v___x_1644_ = lean_unbox(v_a_1639_);
lean_dec(v_a_1639_);
lean_ctor_set_uint8(v___x_1643_, 0, v___x_1644_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1643_);
v___x_1646_ = v___x_1641_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1643_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
v_a_1649_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1638_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1638_);
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
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec_ref(v_c_1633_);
v_a_1657_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1637_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1637_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed(lean_object* v_c_1665_, lean_object* v_msg_1666_, lean_object* v_x_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lasm_UI_Runtime_perform___redArg___lam__0(v_c_1665_, v_msg_1666_, v_x_1667_);
lean_dec_ref(v_x_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2(lean_object* v_handle_1673_, lean_object* v_c_1674_, lean_object* v___f_1675_, lean_object* v_args_1676_){
_start:
{
lean_object* v___y_1679_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v___x_1709_ = lean_array_get_size(v_args_1676_);
v___x_1710_ = lean_unsigned_to_nat(5u);
v___x_1711_ = lean_nat_dec_eq(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = lean_unsigned_to_nat(2u);
v___x_1713_ = lean_nat_dec_eq(v___x_1709_, v___x_1712_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_apply_1(v___f_1675_, v_args_1676_);
v___y_1679_ = v___x_1714_;
goto v___jp_1678_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = lean_array_fget(v_args_1676_, v___x_1715_);
if (lean_obj_tag(v___x_1716_) == 2)
{
uint8_t v_b_1717_; 
v_b_1717_ = lean_ctor_get_uint8(v___x_1716_, 0);
if (v_b_1717_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = lean_unsigned_to_nat(1u);
v___x_1719_ = lean_array_fget(v_args_1676_, v___x_1718_);
lean_dec_ref(v_args_1676_);
if (lean_obj_tag(v___x_1719_) == 4)
{
lean_object* v_s_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref_known(v___x_1716_, 0);
lean_dec_ref(v___f_1675_);
v_s_1720_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1719_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_s_1720_);
lean_dec(v___x_1719_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
lean_ctor_set_tag(v___x_1722_, 0);
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_s_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
v___y_1679_ = v___x_1725_;
goto v___jp_1678_;
}
}
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1728_ = lean_mk_empty_array_with_capacity(v___x_1712_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1716_);
v___x_1730_ = lean_array_push(v___x_1729_, v___x_1719_);
v___x_1731_ = lean_apply_1(v___f_1675_, v___x_1730_);
v___y_1679_ = v___x_1731_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_array_fget(v_args_1676_, v___x_1732_);
lean_dec_ref(v_args_1676_);
v___x_1734_ = lean_mk_empty_array_with_capacity(v___x_1712_);
v___x_1735_ = lean_array_push(v___x_1734_, v___x_1716_);
v___x_1736_ = lean_array_push(v___x_1735_, v___x_1733_);
v___x_1737_ = lean_apply_1(v___f_1675_, v___x_1736_);
v___y_1679_ = v___x_1737_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1738_ = lean_unsigned_to_nat(1u);
v___x_1739_ = lean_array_fget(v_args_1676_, v___x_1738_);
lean_dec_ref(v_args_1676_);
v___x_1740_ = lean_mk_empty_array_with_capacity(v___x_1712_);
v___x_1741_ = lean_array_push(v___x_1740_, v___x_1716_);
v___x_1742_ = lean_array_push(v___x_1741_, v___x_1739_);
v___x_1743_ = lean_apply_1(v___f_1675_, v___x_1742_);
v___y_1679_ = v___x_1743_;
goto v___jp_1678_;
}
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = lean_unsigned_to_nat(0u);
v___x_1745_ = lean_array_fget_borrowed(v_args_1676_, v___x_1744_);
if (lean_obj_tag(v___x_1745_) == 2)
{
uint8_t v_b_1746_; 
v_b_1746_ = lean_ctor_get_uint8(v___x_1745_, 0);
if (v_b_1746_ == 1)
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_unsigned_to_nat(2u);
v___x_1748_ = lean_array_fget_borrowed(v_args_1676_, v___x_1747_);
if (lean_obj_tag(v___x_1748_) == 4)
{
lean_object* v_s_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_s_1749_ = lean_ctor_get(v___x_1748_, 0);
v___x_1750_ = lean_unsigned_to_nat(3u);
v___x_1751_ = lean_array_fget_borrowed(v_args_1676_, v___x_1750_);
if (lean_obj_tag(v___x_1751_) == 7)
{
lean_object* v_items_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_items_1752_ = lean_ctor_get(v___x_1751_, 0);
v___x_1753_ = lean_unsigned_to_nat(4u);
v___x_1754_ = lean_array_fget(v_args_1676_, v___x_1753_);
if (lean_obj_tag(v___x_1754_) == 4)
{
lean_object* v_s_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1773_; 
lean_inc_ref(v_items_1752_);
lean_inc_ref(v_s_1749_);
lean_dec_ref(v___f_1675_);
v_s_1755_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1757_ = v___x_1754_;
v_isShared_1758_ = v_isSharedCheck_1773_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_s_1755_);
lean_dec(v___x_1754_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1773_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___y_1760_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = lean_array_fget(v_args_1676_, v___x_1768_);
lean_dec_ref(v_args_1676_);
if (lean_obj_tag(v___x_1769_) == 3)
{
double v_n_1770_; uint64_t v___x_1771_; lean_object* v___x_1772_; 
v_n_1770_ = lean_ctor_get_float(v___x_1769_, 0);
lean_dec_ref_known(v___x_1769_, 0);
v___x_1771_ = lean_float_to_uint64(v_n_1770_);
v___x_1772_ = lean_uint64_to_nat(v___x_1771_);
v___y_1760_ = v___x_1772_;
goto v___jp_1759_;
}
else
{
lean_dec(v___x_1769_);
v___y_1760_ = v___x_1744_;
goto v___jp_1759_;
}
v___jp_1759_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1761_ = lean_array_to_list(v_items_1752_);
v___x_1762_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___closed__0));
v___x_1763_ = l_List_filterMapTR_go___at___00Lasm_UI_Runtime_perform_spec__17(v___x_1761_, v___x_1762_);
v___x_1764_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1764_, 0, v___y_1760_);
lean_ctor_set(v___x_1764_, 1, v_s_1749_);
lean_ctor_set(v___x_1764_, 2, v___x_1763_);
lean_ctor_set(v___x_1764_, 3, v_s_1755_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set_tag(v___x_1757_, 1);
lean_ctor_set(v___x_1757_, 0, v___x_1764_);
v___x_1766_ = v___x_1757_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
v___y_1679_ = v___x_1766_;
goto v___jp_1678_;
}
}
}
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_inc_ref(v___x_1751_);
lean_inc_ref(v___x_1748_);
lean_inc_ref(v___x_1745_);
v___x_1774_ = lean_unsigned_to_nat(1u);
v___x_1775_ = lean_array_fget(v_args_1676_, v___x_1774_);
lean_dec_ref(v_args_1676_);
v___x_1776_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1777_ = lean_array_push(v___x_1776_, v___x_1745_);
v___x_1778_ = lean_array_push(v___x_1777_, v___x_1775_);
v___x_1779_ = lean_array_push(v___x_1778_, v___x_1748_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1751_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1754_);
v___x_1782_ = lean_apply_1(v___f_1675_, v___x_1781_);
v___y_1679_ = v___x_1782_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
lean_inc(v___x_1751_);
lean_inc_ref(v___x_1748_);
lean_inc_ref(v___x_1745_);
v___x_1783_ = lean_unsigned_to_nat(1u);
v___x_1784_ = lean_array_fget(v_args_1676_, v___x_1783_);
v___x_1785_ = lean_unsigned_to_nat(4u);
v___x_1786_ = lean_array_fget(v_args_1676_, v___x_1785_);
lean_dec_ref(v_args_1676_);
v___x_1787_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1788_ = lean_array_push(v___x_1787_, v___x_1745_);
v___x_1789_ = lean_array_push(v___x_1788_, v___x_1784_);
v___x_1790_ = lean_array_push(v___x_1789_, v___x_1748_);
v___x_1791_ = lean_array_push(v___x_1790_, v___x_1751_);
v___x_1792_ = lean_array_push(v___x_1791_, v___x_1786_);
v___x_1793_ = lean_apply_1(v___f_1675_, v___x_1792_);
v___y_1679_ = v___x_1793_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_inc(v___x_1748_);
lean_inc_ref(v___x_1745_);
v___x_1794_ = lean_unsigned_to_nat(1u);
v___x_1795_ = lean_array_fget(v_args_1676_, v___x_1794_);
v___x_1796_ = lean_unsigned_to_nat(3u);
v___x_1797_ = lean_array_fget(v_args_1676_, v___x_1796_);
v___x_1798_ = lean_unsigned_to_nat(4u);
v___x_1799_ = lean_array_fget(v_args_1676_, v___x_1798_);
lean_dec_ref(v_args_1676_);
v___x_1800_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1745_);
v___x_1802_ = lean_array_push(v___x_1801_, v___x_1795_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1748_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1797_);
v___x_1805_ = lean_array_push(v___x_1804_, v___x_1799_);
v___x_1806_ = lean_apply_1(v___f_1675_, v___x_1805_);
v___y_1679_ = v___x_1806_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_inc_ref(v___x_1745_);
v___x_1807_ = lean_unsigned_to_nat(1u);
v___x_1808_ = lean_array_fget(v_args_1676_, v___x_1807_);
v___x_1809_ = lean_unsigned_to_nat(2u);
v___x_1810_ = lean_array_fget(v_args_1676_, v___x_1809_);
v___x_1811_ = lean_unsigned_to_nat(3u);
v___x_1812_ = lean_array_fget(v_args_1676_, v___x_1811_);
v___x_1813_ = lean_unsigned_to_nat(4u);
v___x_1814_ = lean_array_fget(v_args_1676_, v___x_1813_);
lean_dec_ref(v_args_1676_);
v___x_1815_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1816_ = lean_array_push(v___x_1815_, v___x_1745_);
v___x_1817_ = lean_array_push(v___x_1816_, v___x_1808_);
v___x_1818_ = lean_array_push(v___x_1817_, v___x_1810_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1812_);
v___x_1820_ = lean_array_push(v___x_1819_, v___x_1814_);
v___x_1821_ = lean_apply_1(v___f_1675_, v___x_1820_);
v___y_1679_ = v___x_1821_;
goto v___jp_1678_;
}
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_inc(v___x_1745_);
v___x_1822_ = lean_unsigned_to_nat(1u);
v___x_1823_ = lean_array_fget(v_args_1676_, v___x_1822_);
v___x_1824_ = lean_unsigned_to_nat(2u);
v___x_1825_ = lean_array_fget(v_args_1676_, v___x_1824_);
v___x_1826_ = lean_unsigned_to_nat(3u);
v___x_1827_ = lean_array_fget(v_args_1676_, v___x_1826_);
v___x_1828_ = lean_unsigned_to_nat(4u);
v___x_1829_ = lean_array_fget(v_args_1676_, v___x_1828_);
lean_dec_ref(v_args_1676_);
v___x_1830_ = lean_mk_empty_array_with_capacity(v___x_1710_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1745_);
v___x_1832_ = lean_array_push(v___x_1831_, v___x_1823_);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1825_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1827_);
v___x_1835_ = lean_array_push(v___x_1834_, v___x_1829_);
v___x_1836_ = lean_apply_1(v___f_1675_, v___x_1835_);
v___y_1679_ = v___x_1836_;
goto v___jp_1678_;
}
}
v___jp_1678_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_apply_1(v_handle_1673_, v___y_1679_);
lean_inc_ref(v_c_1674_);
v___x_1681_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1674_, v___x_1680_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v___x_1682_; 
lean_dec_ref_known(v___x_1681_, 1);
v___x_1682_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_1674_);
lean_dec_ref(v_c_1674_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1692_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1685_ = v___x_1682_;
v_isShared_1686_ = v_isSharedCheck_1692_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1682_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1692_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1687_; uint8_t v___x_1688_; lean_object* v___x_1690_; 
v___x_1687_ = lean_alloc_ctor(2, 0, 1);
v___x_1688_ = lean_unbox(v_a_1683_);
lean_dec(v_a_1683_);
lean_ctor_set_uint8(v___x_1687_, 0, v___x_1688_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 0, v___x_1687_);
v___x_1690_ = v___x_1685_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v___x_1687_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_a_1693_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1682_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1682_);
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
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
lean_dec_ref(v_c_1674_);
v_a_1701_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1681_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1681_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed(lean_object* v_handle_1837_, lean_object* v_c_1838_, lean_object* v___f_1839_, lean_object* v_args_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l_Lasm_UI_Runtime_perform___redArg___lam__2(v_handle_1837_, v_c_1838_, v___f_1839_, v_args_1840_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed(lean_object* v_c_1843_, lean_object* v_m_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lasm_UI_Runtime_perform___redArg___lam__3(v_c_1843_, v_m_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg(lean_object* v_c_1847_, lean_object* v_e_1848_){
_start:
{
switch(lean_obj_tag(v_e_1848_))
{
case 0:
{
lean_object* v_msg_1850_; lean_object* v___x_1851_; 
v_msg_1850_ = lean_ctor_get(v_e_1848_, 0);
lean_inc(v_msg_1850_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1851_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1847_, v_msg_1850_);
return v___x_1851_;
}
case 1:
{
lean_object* v_ms_1852_; lean_object* v_msg_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; 
v_ms_1852_ = lean_ctor_get(v_e_1848_, 0);
lean_inc(v_ms_1852_);
v_msg_1853_ = lean_ctor_get(v_e_1848_, 1);
lean_inc(v_msg_1853_);
lean_dec_ref_known(v_e_1848_, 2);
v___f_1854_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1854_, 0, v_c_1847_);
lean_closure_set(v___f_1854_, 1, v_msg_1853_);
v___x_1855_ = l_Lasm_JS_Function_ofSyncFn(v___f_1854_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1857_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v___x_1857_ = l_Lasm_UI_Runtime_Dom_timeout(v_ms_1852_, v_a_1856_);
return v___x_1857_;
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec(v_ms_1852_);
v_a_1858_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1855_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1855_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
case 2:
{
lean_object* v_request_1866_; lean_object* v_handle_1867_; lean_object* v___f_1868_; lean_object* v___f_1869_; lean_object* v___x_1870_; 
v_request_1866_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_request_1866_);
v_handle_1867_ = lean_ctor_get(v_e_1848_, 1);
lean_inc(v_handle_1867_);
lean_dec_ref_known(v_e_1848_, 2);
v___f_1868_ = ((lean_object*)(l_Lasm_UI_Runtime_perform___redArg___closed__0));
v___f_1869_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1869_, 0, v_handle_1867_);
lean_closure_set(v___f_1869_, 1, v_c_1847_);
lean_closure_set(v___f_1869_, 2, v___f_1868_);
v___x_1870_ = l_Lasm_JS_Function_ofSyncFn(v___f_1869_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; lean_object* v_method_1872_; lean_object* v_url_1873_; lean_object* v_headers_1874_; lean_object* v_body_1875_; lean_object* v_credentials_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; size_t v_sz_1880_; size_t v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1870_, 1);
v_method_1872_ = lean_ctor_get(v_request_1866_, 0);
lean_inc_ref(v_method_1872_);
v_url_1873_ = lean_ctor_get(v_request_1866_, 1);
lean_inc_ref(v_url_1873_);
v_headers_1874_ = lean_ctor_get(v_request_1866_, 2);
lean_inc(v_headers_1874_);
v_body_1875_ = lean_ctor_get(v_request_1866_, 3);
lean_inc(v_body_1875_);
v_credentials_1876_ = lean_ctor_get(v_request_1866_, 4);
lean_inc_ref(v_credentials_1876_);
lean_dec_ref(v_request_1866_);
v___x_1877_ = lean_box(0);
v___x_1878_ = l_List_mapTR_loop___at___00Lasm_UI_Runtime_perform_spec__18(v_headers_1874_, v___x_1877_);
v___x_1879_ = lean_array_mk(v___x_1878_);
v_sz_1880_ = lean_array_size(v___x_1879_);
v___x_1881_ = ((size_t)0ULL);
v___x_1882_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_specData_spec__2(v_sz_1880_, v___x_1881_, v___x_1879_);
v___x_1883_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
v___x_1884_ = l_Lasm_UI_Runtime_Dom_http(v_method_1872_, v_url_1873_, v___x_1883_, v_body_1875_, v_credentials_1876_, v_a_1871_);
return v___x_1884_;
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec_ref(v_request_1866_);
v_a_1885_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1870_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1870_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
case 3:
{
lean_object* v_n_1893_; lean_object* v_handle_1894_; size_t v___x_1895_; lean_object* v___x_1896_; 
v_n_1893_ = lean_ctor_get(v_e_1848_, 0);
lean_inc(v_n_1893_);
v_handle_1894_ = lean_ctor_get(v_e_1848_, 1);
lean_inc(v_handle_1894_);
lean_dec_ref_known(v_e_1848_, 2);
v___x_1895_ = lean_usize_of_nat(v_n_1893_);
lean_dec(v_n_1893_);
v___x_1896_ = lean_io_get_random_bytes(v___x_1895_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = lean_apply_1(v_handle_1894_, v_a_1897_);
v___x_1899_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1847_, v___x_1898_);
return v___x_1899_;
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_handle_1894_);
lean_dec_ref(v_c_1847_);
v_a_1900_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1896_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1896_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
case 4:
{
lean_object* v_handle_1908_; lean_object* v___x_1909_; 
v_handle_1908_ = lean_ctor_get(v_e_1848_, 0);
lean_inc(v_handle_1908_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1909_ = l_Lasm_UI_Runtime_Dom_now();
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref_known(v___x_1909_, 1);
v___x_1911_ = lean_apply_1(v_handle_1908_, v_a_1910_);
v___x_1912_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1847_, v___x_1911_);
return v___x_1912_;
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v_handle_1908_);
lean_dec_ref(v_c_1847_);
v_a_1913_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1909_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1909_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
case 5:
{
lean_object* v_url_1921_; uint8_t v_replace_1922_; lean_object* v___x_1923_; 
lean_dec_ref(v_c_1847_);
v_url_1921_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_url_1921_);
v_replace_1922_ = lean_ctor_get_uint8(v_e_1848_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1923_ = l_Lasm_UI_Runtime_Dom_navigate(v_url_1921_, v_replace_1922_);
return v___x_1923_;
}
case 6:
{
lean_object* v_n_1924_; lean_object* v___x_1925_; 
lean_dec_ref(v_c_1847_);
v_n_1924_ = lean_ctor_get(v_e_1848_, 0);
lean_inc(v_n_1924_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1925_ = l_Lasm_UI_Runtime_Dom_go(v_n_1924_);
return v___x_1925_;
}
case 7:
{
lean_object* v_url_1926_; lean_object* v___x_1927_; 
lean_dec_ref(v_c_1847_);
v_url_1926_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_url_1926_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1927_ = l_Lasm_UI_Runtime_Dom_load(v_url_1926_);
return v___x_1927_;
}
case 8:
{
uint8_t v_storage_1928_; lean_object* v_key_1929_; lean_object* v_value_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_dec_ref(v_c_1847_);
v_storage_1928_ = lean_ctor_get_uint8(v_e_1848_, sizeof(void*)*2);
v_key_1929_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_key_1929_);
v_value_1930_ = lean_ctor_get(v_e_1848_, 1);
lean_inc_ref(v_value_1930_);
lean_dec_ref_known(v_e_1848_, 2);
v___x_1931_ = l_Lasm_UI_Runtime_storageName(v_storage_1928_);
v___x_1932_ = l_Lasm_UI_Runtime_Dom_storageSet(v___x_1931_, v_key_1929_, v_value_1930_);
return v___x_1932_;
}
case 9:
{
uint8_t v_storage_1933_; lean_object* v_key_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
lean_dec_ref(v_c_1847_);
v_storage_1933_ = lean_ctor_get_uint8(v_e_1848_, sizeof(void*)*1);
v_key_1934_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_key_1934_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1935_ = l_Lasm_UI_Runtime_storageName(v_storage_1933_);
v___x_1936_ = l_Lasm_UI_Runtime_Dom_storageRemove(v___x_1935_, v_key_1934_);
return v___x_1936_;
}
case 10:
{
uint8_t v_storage_1937_; lean_object* v_key_1938_; lean_object* v_handle_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v_storage_1937_ = lean_ctor_get_uint8(v_e_1848_, sizeof(void*)*2);
v_key_1938_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_key_1938_);
v_handle_1939_ = lean_ctor_get(v_e_1848_, 1);
lean_inc(v_handle_1939_);
lean_dec_ref_known(v_e_1848_, 2);
v___x_1940_ = l_Lasm_UI_Runtime_storageName(v_storage_1937_);
v___x_1941_ = l_Lasm_UI_Runtime_Dom_storageGet(v___x_1940_, v_key_1938_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = lean_apply_1(v_handle_1939_, v_a_1942_);
v___x_1944_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_1847_, v___x_1943_);
return v___x_1944_;
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec(v_handle_1939_);
lean_dec_ref(v_c_1847_);
v_a_1945_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1941_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1941_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
case 11:
{
lean_object* v_id_1953_; uint8_t v_blur_1954_; lean_object* v___x_1955_; 
lean_dec_ref(v_c_1847_);
v_id_1953_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_id_1953_);
v_blur_1954_ = lean_ctor_get_uint8(v_e_1848_, sizeof(void*)*1);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1955_ = l_Lasm_UI_Runtime_Dom_focus(v_id_1953_, v_blur_1954_);
return v___x_1955_;
}
case 12:
{
lean_object* v_name_1956_; lean_object* v_value_1957_; lean_object* v___x_1958_; 
lean_dec_ref(v_c_1847_);
v_name_1956_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_name_1956_);
v_value_1957_ = lean_ctor_get(v_e_1848_, 1);
lean_inc(v_value_1957_);
lean_dec_ref_known(v_e_1848_, 2);
v___x_1958_ = l_Lasm_Web_App_Raw_port(v_name_1956_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1960_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
v___x_1960_ = l_Lasm_Web_App_Port_send___at___00Lasm_UI_Runtime_perform_spec__19(v_a_1959_, v_value_1957_);
return v___x_1960_;
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec(v_value_1957_);
v_a_1961_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1958_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1958_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
case 13:
{
lean_object* v_title_1969_; lean_object* v___x_1970_; 
lean_dec_ref(v_c_1847_);
v_title_1969_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_title_1969_);
lean_dec_ref_known(v_e_1848_, 1);
v___x_1970_ = l_Lasm_UI_Runtime_Dom_title(v_title_1969_);
return v___x_1970_;
}
default: 
{
lean_object* v_run_1971_; lean_object* v___f_1972_; lean_object* v___x_1973_; 
v_run_1971_ = lean_ctor_get(v_e_1848_, 0);
lean_inc_ref(v_run_1971_);
lean_dec_ref_known(v_e_1848_, 1);
v___f_1972_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_perform___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1972_, 0, v_c_1847_);
v___x_1973_ = lean_apply_2(v_run_1971_, v___f_1972_, lean_box(0));
return v___x_1973_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(lean_object* v_c_1975_, lean_object* v_as_x27_1976_, lean_object* v_b_1977_){
_start:
{
if (lean_obj_tag(v_as_x27_1976_) == 0)
{
lean_object* v___x_1979_; 
lean_dec_ref(v_c_1975_);
v___x_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1979_, 0, v_b_1977_);
return v___x_1979_;
}
else
{
lean_object* v_head_1980_; lean_object* v_tail_1981_; lean_object* v___x_1982_; lean_object* v___y_1984_; lean_object* v___x_1986_; 
v_head_1980_ = lean_ctor_get(v_as_x27_1976_, 0);
v_tail_1981_ = lean_ctor_get(v_as_x27_1976_, 1);
v___x_1982_ = lean_box(0);
lean_inc(v_head_1980_);
lean_inc_ref(v_c_1975_);
v___x_1986_ = l_Lasm_UI_Runtime_perform___redArg(v_c_1975_, v_head_1980_);
if (lean_obj_tag(v___x_1986_) == 0)
{
v___y_1984_ = v___x_1986_;
goto v___jp_1983_;
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v___x_1986_, 1);
v___x_1988_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_1989_ = l_Lasm_UI_Runtime_report(v___x_1988_, v_a_1987_);
v___y_1984_ = v___x_1989_;
goto v___jp_1983_;
}
v___jp_1983_:
{
if (lean_obj_tag(v___y_1984_) == 0)
{
lean_dec_ref_known(v___y_1984_, 1);
v_as_x27_1976_ = v_tail_1981_;
v_b_1977_ = v___x_1982_;
goto _start;
}
else
{
lean_dec_ref(v_c_1975_);
return v___y_1984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(lean_object* v___x_1990_, lean_object* v_c_1991_){
_start:
{
lean_object* v___x_1993_; uint8_t v___x_1994_; lean_object* v___x_1995_; lean_object* v_model_1996_; lean_object* v_live_1997_; lean_object* v_next_1998_; lean_object* v_tables_1999_; uint8_t v_scheduled_2000_; lean_object* v_queue_2001_; uint8_t v_busy_2002_; lean_object* v_subs_2003_; lean_object* v_handlers_2004_; lean_object* v_nextSub_2005_; lean_object* v_touched_2006_; lean_object* v_ports_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2029_; 
v___x_1993_ = lean_box(0);
v___x_1994_ = 1;
v___x_1995_ = lean_st_ref_get(v___x_1990_);
v_model_1996_ = lean_ctor_get(v___x_1995_, 0);
v_live_1997_ = lean_ctor_get(v___x_1995_, 1);
v_next_1998_ = lean_ctor_get(v___x_1995_, 2);
v_tables_1999_ = lean_ctor_get(v___x_1995_, 3);
v_scheduled_2000_ = lean_ctor_get_uint8(v___x_1995_, sizeof(void*)*10 + 1);
v_queue_2001_ = lean_ctor_get(v___x_1995_, 4);
v_busy_2002_ = lean_ctor_get_uint8(v___x_1995_, sizeof(void*)*10 + 2);
v_subs_2003_ = lean_ctor_get(v___x_1995_, 5);
v_handlers_2004_ = lean_ctor_get(v___x_1995_, 6);
v_nextSub_2005_ = lean_ctor_get(v___x_1995_, 7);
v_touched_2006_ = lean_ctor_get(v___x_1995_, 8);
v_ports_2007_ = lean_ctor_get(v___x_1995_, 9);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2009_ = v___x_1995_;
v_isShared_2010_ = v_isSharedCheck_2029_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_ports_2007_);
lean_inc(v_touched_2006_);
lean_inc(v_nextSub_2005_);
lean_inc(v_handlers_2004_);
lean_inc(v_subs_2003_);
lean_inc(v_queue_2001_);
lean_inc(v_tables_1999_);
lean_inc(v_next_1998_);
lean_inc(v_live_1997_);
lean_inc(v_model_1996_);
lean_dec(v___x_1995_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2029_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; uint8_t v___x_2013_; 
v___x_2011_ = lean_unsigned_to_nat(0u);
v___x_2012_ = lean_array_get_size(v_queue_2001_);
v___x_2013_ = lean_nat_dec_lt(v___x_2011_, v___x_2012_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; 
lean_del_object(v___x_2009_);
lean_dec(v_ports_2007_);
lean_dec_ref(v_touched_2006_);
lean_dec(v_nextSub_2005_);
lean_dec_ref(v_handlers_2004_);
lean_dec_ref(v_subs_2003_);
lean_dec_ref(v_queue_2001_);
lean_dec_ref(v_tables_1999_);
lean_dec(v_next_1998_);
lean_dec(v_live_1997_);
lean_dec(v_model_1996_);
lean_dec_ref(v_c_1991_);
v___x_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___x_1993_);
return v___x_2014_;
}
else
{
lean_object* v_app_2015_; lean_object* v_update_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v_fst_2019_; lean_object* v_snd_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v_app_2015_ = lean_ctor_get(v_c_1991_, 0);
v_update_2016_ = lean_ctor_get(v_app_2015_, 1);
v___x_2017_ = lean_array_fget_borrowed(v_queue_2001_, v___x_2011_);
lean_inc_ref(v_update_2016_);
lean_inc(v___x_2017_);
v___x_2018_ = lean_apply_2(v_update_2016_, v___x_2017_, v_model_1996_);
v_fst_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_fst_2019_);
v_snd_2020_ = lean_ctor_get(v___x_2018_, 1);
lean_inc(v_snd_2020_);
lean_dec_ref(v___x_2018_);
v___x_2021_ = lean_unsigned_to_nat(1u);
v___x_2022_ = l_Array_extract___redArg(v_queue_2001_, v___x_2021_, v___x_2012_);
lean_dec_ref(v_queue_2001_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 4, v___x_2022_);
lean_ctor_set(v___x_2009_, 0, v_fst_2019_);
v___x_2024_ = v___x_2009_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_fst_2019_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v_live_1997_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_next_1998_);
lean_ctor_set(v_reuseFailAlloc_2028_, 3, v_tables_1999_);
lean_ctor_set(v_reuseFailAlloc_2028_, 4, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2028_, 5, v_subs_2003_);
lean_ctor_set(v_reuseFailAlloc_2028_, 6, v_handlers_2004_);
lean_ctor_set(v_reuseFailAlloc_2028_, 7, v_nextSub_2005_);
lean_ctor_set(v_reuseFailAlloc_2028_, 8, v_touched_2006_);
lean_ctor_set(v_reuseFailAlloc_2028_, 9, v_ports_2007_);
lean_ctor_set_uint8(v_reuseFailAlloc_2028_, sizeof(void*)*10 + 1, v_scheduled_2000_);
lean_ctor_set_uint8(v_reuseFailAlloc_2028_, sizeof(void*)*10 + 2, v_busy_2002_);
v___x_2024_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_ctor_set_uint8(v___x_2024_, sizeof(void*)*10, v___x_1994_);
v___x_2025_ = lean_st_ref_swap(v___x_1990_, v___x_2024_);
lean_dec(v___x_2025_);
lean_inc_ref(v_c_1991_);
v___x_2026_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_1991_, v_snd_2020_, v___x_1993_);
lean_dec(v_snd_2020_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_dec_ref_known(v___x_2026_, 1);
goto _start;
}
else
{
lean_dec_ref(v_c_1991_);
return v___x_2026_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_unsigned_to_nat(16u);
v___x_2032_ = lean_mk_array(v___x_2031_, v___x_2030_);
return v___x_2032_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2033_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__0, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__0_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__0);
v___x_2034_ = lean_unsigned_to_nat(0u);
v___x_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
lean_ctor_set(v___x_2035_, 1, v___x_2033_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(lean_object* v_v_2036_, lean_object* v_c_2037_, lean_object* v_as_x27_2038_, lean_object* v_b_2039_){
_start:
{
if (lean_obj_tag(v_as_x27_2038_) == 0)
{
lean_object* v___x_2041_; 
lean_dec_ref(v_c_2037_);
lean_dec(v_v_2036_);
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v_b_2039_);
return v___x_2041_;
}
else
{
lean_object* v_head_2042_; lean_object* v_tail_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_head_2042_ = lean_ctor_get(v_as_x27_2038_, 0);
v_tail_2043_ = lean_ctor_get(v_as_x27_2038_, 1);
v___x_2044_ = lean_box(0);
v___x_2045_ = lean_unsigned_to_nat(1u);
v___x_2046_ = lean_mk_empty_array_with_capacity(v___x_2045_);
lean_inc(v_v_2036_);
v___x_2047_ = lean_array_push(v___x_2046_, v_v_2036_);
lean_inc(v_head_2042_);
v___x_2048_ = lean_apply_1(v_head_2042_, v___x_2047_);
if (lean_obj_tag(v___x_2048_) == 1)
{
lean_object* v_val_2049_; lean_object* v___x_2050_; 
v_val_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_val_2049_);
lean_dec_ref_known(v___x_2048_, 1);
lean_inc_ref(v_c_2037_);
v___x_2050_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2037_, v_val_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_dec_ref_known(v___x_2050_, 1);
v_as_x27_2038_ = v_tail_2043_;
v_b_2039_ = v___x_2044_;
goto _start;
}
else
{
lean_dec_ref(v_c_2037_);
lean_dec(v_v_2036_);
return v___x_2050_;
}
}
else
{
lean_dec(v___x_2048_);
v_as_x27_2038_ = v_tail_2043_;
v_b_2039_ = v___x_2044_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0(lean_object* v_ref_2053_, lean_object* v_name_2054_, lean_object* v_c_2055_, lean_object* v_v_2056_){
_start:
{
lean_object* v___x_2058_; lean_object* v_subs_2059_; lean_object* v_handlers_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2058_ = lean_st_ref_get(v_ref_2053_);
v_subs_2059_ = lean_ctor_get(v___x_2058_, 5);
lean_inc_ref(v_subs_2059_);
v_handlers_2060_ = lean_ctor_get(v___x_2058_, 6);
lean_inc_ref(v_handlers_2060_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_name_2054_);
v___x_2062_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_subs_2059_, v___x_2061_);
lean_dec_ref(v_subs_2059_);
if (lean_obj_tag(v___x_2062_) == 1)
{
lean_object* v_val_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v_val_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_val_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = lean_box(0);
v___x_2065_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_2060_, v_val_2063_, v___x_2064_);
lean_dec(v_val_2063_);
lean_dec_ref(v_handlers_2060_);
v___x_2066_ = lean_box(0);
lean_inc_ref(v_c_2055_);
v___x_2067_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2056_, v_c_2055_, v___x_2065_, v___x_2066_);
lean_dec(v___x_2065_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v___x_2068_; 
lean_dec_ref_known(v___x_2067_, 1);
v___x_2068_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2055_);
lean_dec_ref(v_c_2055_);
return v___x_2068_;
}
else
{
lean_dec_ref(v_c_2055_);
return v___x_2067_;
}
}
else
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
lean_dec(v___x_2062_);
lean_dec_ref(v_handlers_2060_);
lean_dec(v_v_2056_);
lean_dec_ref(v_c_2055_);
v___x_2069_ = lean_box(0);
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2069_);
return v___x_2070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed(lean_object* v_ref_2071_, lean_object* v_name_2072_, lean_object* v_c_2073_, lean_object* v_v_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Lasm_UI_Runtime_listenPort___redArg___lam__0(v_ref_2071_, v_name_2072_, v_c_2073_, v_v_2074_);
lean_dec(v_ref_2071_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg(lean_object* v_c_2077_, lean_object* v_name_2078_){
_start:
{
lean_object* v_ref_2080_; lean_object* v___f_2081_; lean_object* v___x_2082_; lean_object* v_model_2083_; lean_object* v_live_2084_; lean_object* v_next_2085_; lean_object* v_tables_2086_; uint8_t v_dirty_2087_; uint8_t v_scheduled_2088_; lean_object* v_queue_2089_; uint8_t v_busy_2090_; lean_object* v_subs_2091_; lean_object* v_handlers_2092_; lean_object* v_nextSub_2093_; lean_object* v_touched_2094_; lean_object* v_ports_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2115_; 
v_ref_2080_ = lean_ctor_get(v_c_2077_, 1);
lean_inc_n(v_ref_2080_, 2);
lean_inc_ref(v_name_2078_);
v___f_2081_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_listenPort___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2081_, 0, v_ref_2080_);
lean_closure_set(v___f_2081_, 1, v_name_2078_);
lean_closure_set(v___f_2081_, 2, v_c_2077_);
v___x_2082_ = lean_st_ref_take(v_ref_2080_);
v_model_2083_ = lean_ctor_get(v___x_2082_, 0);
v_live_2084_ = lean_ctor_get(v___x_2082_, 1);
v_next_2085_ = lean_ctor_get(v___x_2082_, 2);
v_tables_2086_ = lean_ctor_get(v___x_2082_, 3);
v_dirty_2087_ = lean_ctor_get_uint8(v___x_2082_, sizeof(void*)*10);
v_scheduled_2088_ = lean_ctor_get_uint8(v___x_2082_, sizeof(void*)*10 + 1);
v_queue_2089_ = lean_ctor_get(v___x_2082_, 4);
v_busy_2090_ = lean_ctor_get_uint8(v___x_2082_, sizeof(void*)*10 + 2);
v_subs_2091_ = lean_ctor_get(v___x_2082_, 5);
v_handlers_2092_ = lean_ctor_get(v___x_2082_, 6);
v_nextSub_2093_ = lean_ctor_get(v___x_2082_, 7);
v_touched_2094_ = lean_ctor_get(v___x_2082_, 8);
v_ports_2095_ = lean_ctor_get(v___x_2082_, 9);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2097_ = v___x_2082_;
v_isShared_2098_ = v_isSharedCheck_2115_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_ports_2095_);
lean_inc(v_touched_2094_);
lean_inc(v_nextSub_2093_);
lean_inc(v_handlers_2092_);
lean_inc(v_subs_2091_);
lean_inc(v_queue_2089_);
lean_inc(v_tables_2086_);
lean_inc(v_next_2085_);
lean_inc(v_live_2084_);
lean_inc(v_model_2083_);
lean_dec(v___x_2082_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2115_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2099_; lean_object* v___x_2101_; 
lean_inc_ref(v_name_2078_);
v___x_2099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2099_, 0, v_name_2078_);
lean_ctor_set(v___x_2099_, 1, v_ports_2095_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 9, v___x_2099_);
v___x_2101_ = v___x_2097_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_model_2083_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_live_2084_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v_next_2085_);
lean_ctor_set(v_reuseFailAlloc_2114_, 3, v_tables_2086_);
lean_ctor_set(v_reuseFailAlloc_2114_, 4, v_queue_2089_);
lean_ctor_set(v_reuseFailAlloc_2114_, 5, v_subs_2091_);
lean_ctor_set(v_reuseFailAlloc_2114_, 6, v_handlers_2092_);
lean_ctor_set(v_reuseFailAlloc_2114_, 7, v_nextSub_2093_);
lean_ctor_set(v_reuseFailAlloc_2114_, 8, v_touched_2094_);
lean_ctor_set(v_reuseFailAlloc_2114_, 9, v___x_2099_);
lean_ctor_set_uint8(v_reuseFailAlloc_2114_, sizeof(void*)*10, v_dirty_2087_);
lean_ctor_set_uint8(v_reuseFailAlloc_2114_, sizeof(void*)*10 + 1, v_scheduled_2088_);
lean_ctor_set_uint8(v_reuseFailAlloc_2114_, sizeof(void*)*10 + 2, v_busy_2090_);
v___x_2101_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2102_ = lean_st_ref_put(v_ref_2080_, v___x_2101_);
lean_dec(v_ref_2080_);
v___x_2103_ = l_Lasm_Web_App_Raw_port(v_name_2078_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = l_Lasm_Web_App_Port_subscribe(v_a_2104_, v___f_2081_);
return v___x_2105_;
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec_ref(v___f_2081_);
v_a_2106_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2103_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2103_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(lean_object* v___x_2116_, lean_object* v_c_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_){
_start:
{
if (lean_obj_tag(v_a_2118_) == 0)
{
lean_object* v___x_2121_; lean_object* v___x_2122_; 
lean_dec_ref(v_c_2117_);
v___x_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2121_, 0, v_a_2119_);
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
return v___x_2122_;
}
else
{
lean_object* v_snd_2123_; lean_object* v_key_2124_; lean_object* v_value_2125_; lean_object* v_tail_2126_; lean_object* v_fst_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2197_; 
v_snd_2123_ = lean_ctor_get(v_a_2119_, 1);
lean_inc(v_snd_2123_);
v_key_2124_ = lean_ctor_get(v_a_2118_, 0);
lean_inc(v_key_2124_);
v_value_2125_ = lean_ctor_get(v_a_2118_, 1);
lean_inc(v_value_2125_);
v_tail_2126_ = lean_ctor_get(v_a_2118_, 2);
lean_inc(v_tail_2126_);
lean_dec_ref_known(v_a_2118_, 3);
v_fst_2127_ = lean_ctor_get(v_a_2119_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_a_2119_);
if (v_isSharedCheck_2197_ == 0)
{
lean_object* v_unused_2198_; 
v_unused_2198_ = lean_ctor_get(v_a_2119_, 1);
lean_dec(v_unused_2198_);
v___x_2129_ = v_a_2119_;
v_isShared_2130_ = v_isSharedCheck_2197_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_fst_2127_);
lean_dec(v_a_2119_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2197_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v_fst_2131_; lean_object* v_snd_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2196_; 
v_fst_2131_ = lean_ctor_get(v_snd_2123_, 0);
v_snd_2132_ = lean_ctor_get(v_snd_2123_, 1);
v_isSharedCheck_2196_ = !lean_is_exclusive(v_snd_2123_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2134_ = v_snd_2123_;
v_isShared_2135_ = v_isSharedCheck_2196_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_snd_2132_);
lean_inc(v_fst_2131_);
lean_dec(v_snd_2123_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2196_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2136_; 
lean_inc(v_key_2124_);
v___x_2136_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_fst_2127_, v_key_2124_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2137_ = lean_unsigned_to_nat(1u);
v___x_2138_ = lean_nat_add(v_snd_2132_, v___x_2137_);
lean_inc_n(v_snd_2132_, 2);
lean_inc(v_key_2124_);
v___x_2139_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_fst_2127_, v_key_2124_, v_snd_2132_);
v___x_2140_ = l_List_reverse___redArg(v_value_2125_);
v___x_2141_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2131_, v_snd_2132_, v___x_2140_);
if (lean_obj_tag(v_key_2124_) == 4)
{
lean_object* v_name_2142_; lean_object* v___x_2143_; lean_object* v_ports_2144_; uint8_t v___x_2145_; 
lean_dec(v_snd_2132_);
v_name_2142_ = lean_ctor_get(v_key_2124_, 0);
lean_inc_ref(v_name_2142_);
lean_dec_ref_known(v_key_2124_, 1);
v___x_2143_ = lean_st_ref_get(v___x_2116_);
v_ports_2144_ = lean_ctor_get(v___x_2143_, 9);
lean_inc(v_ports_2144_);
lean_dec(v___x_2143_);
v___x_2145_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2142_, v_ports_2144_);
lean_dec(v_ports_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; 
lean_inc_ref(v_c_2117_);
v___x_2146_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2117_, v_name_2142_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v___x_2148_; 
lean_dec_ref_known(v___x_2146_, 1);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 1, v___x_2138_);
lean_ctor_set(v___x_2134_, 0, v___x_2141_);
v___x_2148_ = v___x_2134_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v___x_2138_);
v___x_2148_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2150_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2148_);
lean_ctor_set(v___x_2129_, 0, v___x_2139_);
v___x_2150_ = v___x_2129_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
v_a_2118_ = v_tail_2126_;
v_a_2119_ = v___x_2150_;
goto _start;
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v___x_2139_);
lean_dec(v___x_2138_);
lean_del_object(v___x_2134_);
lean_del_object(v___x_2129_);
lean_dec(v_tail_2126_);
lean_dec_ref(v_c_2117_);
v_a_2154_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2146_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2146_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
else
{
lean_object* v___x_2163_; 
lean_dec_ref(v_name_2142_);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 1, v___x_2138_);
lean_ctor_set(v___x_2134_, 0, v___x_2141_);
v___x_2163_ = v___x_2134_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v___x_2138_);
v___x_2163_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2165_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2163_);
lean_ctor_set(v___x_2129_, 0, v___x_2139_);
v___x_2165_ = v___x_2129_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
v_a_2118_ = v_tail_2126_;
v_a_2119_ = v___x_2165_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = l_Lasm_UI_Runtime_specData(v_key_2124_);
v___x_2170_ = l_Lasm_UI_Runtime_Dom_sub(v_snd_2132_, v___x_2169_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v___x_2172_; 
lean_dec_ref_known(v___x_2170_, 1);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 1, v___x_2138_);
lean_ctor_set(v___x_2134_, 0, v___x_2141_);
v___x_2172_ = v___x_2134_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v___x_2138_);
v___x_2172_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2174_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2172_);
lean_ctor_set(v___x_2129_, 0, v___x_2139_);
v___x_2174_ = v___x_2129_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v___x_2172_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
v_a_2118_ = v_tail_2126_;
v_a_2119_ = v___x_2174_;
goto _start;
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec_ref(v___x_2141_);
lean_dec_ref(v___x_2139_);
lean_dec(v___x_2138_);
lean_del_object(v___x_2134_);
lean_del_object(v___x_2129_);
lean_dec(v_tail_2126_);
lean_dec_ref(v_c_2117_);
v_a_2178_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2170_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2170_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
else
{
lean_object* v_val_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
lean_dec(v_key_2124_);
v_val_2186_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_val_2186_);
lean_dec_ref_known(v___x_2136_, 1);
v___x_2187_ = l_List_reverse___redArg(v_value_2125_);
v___x_2188_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_fst_2131_, v_val_2186_, v___x_2187_);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v___x_2188_);
v___x_2190_ = v___x_2134_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_snd_2132_);
v___x_2190_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2190_);
v___x_2192_ = v___x_2129_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_fst_2127_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
v_a_2118_ = v_tail_2126_;
v_a_2119_ = v___x_2192_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(lean_object* v___x_2199_, lean_object* v_c_2200_, lean_object* v_as_2201_, size_t v_sz_2202_, size_t v_i_2203_, lean_object* v_b_2204_){
_start:
{
uint8_t v___x_2206_; 
v___x_2206_ = lean_usize_dec_lt(v_i_2203_, v_sz_2202_);
if (v___x_2206_ == 0)
{
lean_object* v___x_2207_; 
lean_dec_ref(v_c_2200_);
v___x_2207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2207_, 0, v_b_2204_);
return v___x_2207_;
}
else
{
lean_object* v_a_2208_; lean_object* v___x_2209_; 
v_a_2208_ = lean_array_uget_borrowed(v_as_2201_, v_i_2203_);
lean_inc(v_a_2208_);
lean_inc_ref(v_c_2200_);
v___x_2209_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2199_, v_c_2200_, v_a_2208_, v_b_2204_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2222_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2222_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2222_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
if (lean_obj_tag(v_a_2210_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; 
lean_dec_ref(v_c_2200_);
v_a_2214_ = lean_ctor_get(v_a_2210_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v_a_2210_, 1);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v_a_2214_);
v___x_2216_ = v___x_2212_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
else
{
lean_object* v_a_2218_; size_t v___x_2219_; size_t v___x_2220_; 
lean_del_object(v___x_2212_);
v_a_2218_ = lean_ctor_get(v_a_2210_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v_a_2210_, 1);
v___x_2219_ = ((size_t)1ULL);
v___x_2220_ = lean_usize_add(v_i_2203_, v___x_2219_);
v_i_2203_ = v___x_2220_;
v_b_2204_ = v_a_2218_;
goto _start;
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec_ref(v_c_2200_);
v_a_2223_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2209_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2209_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg(lean_object* v_c_2231_){
_start:
{
lean_object* v_app_2233_; lean_object* v_ref_2234_; lean_object* v___x_2235_; lean_object* v_subscriptions_2236_; lean_object* v_model_2237_; lean_object* v_subs_2238_; lean_object* v_nextSub_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_app_2233_ = lean_ctor_get(v_c_2231_, 0);
v_ref_2234_ = lean_ctor_get(v_c_2231_, 1);
lean_inc(v_ref_2234_);
v___x_2235_ = lean_st_ref_get(v_ref_2234_);
v_subscriptions_2236_ = lean_ctor_get(v_app_2233_, 3);
v_model_2237_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_model_2237_);
v_subs_2238_ = lean_ctor_get(v___x_2235_, 5);
lean_inc_ref(v_subs_2238_);
v_nextSub_2239_ = lean_ctor_get(v___x_2235_, 7);
lean_inc(v_nextSub_2239_);
lean_dec(v___x_2235_);
lean_inc_ref(v_subscriptions_2236_);
v___x_2240_ = lean_apply_1(v_subscriptions_2236_, v_model_2237_);
v___x_2241_ = lean_obj_once(&l_Lasm_UI_Runtime_syncSubs___redArg___closed__1, &l_Lasm_UI_Runtime_syncSubs___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_syncSubs___redArg___closed__1);
v___x_2242_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v___x_2240_, v___x_2241_);
lean_dec(v___x_2240_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v_buckets_2244_; size_t v_sz_2245_; size_t v___x_2246_; lean_object* v___x_2247_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2243_);
lean_dec_ref_known(v___x_2242_, 1);
v_buckets_2244_ = lean_ctor_get(v_subs_2238_, 1);
lean_inc_ref(v_buckets_2244_);
v_sz_2245_ = lean_array_size(v_buckets_2244_);
v___x_2246_ = ((size_t)0ULL);
v___x_2247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2243_, v_buckets_2244_, v_sz_2245_, v___x_2246_, v_subs_2238_);
lean_dec_ref(v_buckets_2244_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v_buckets_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2301_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v___x_2247_, 1);
v_buckets_2249_ = lean_ctor_get(v_a_2243_, 1);
v_isSharedCheck_2301_ = !lean_is_exclusive(v_a_2243_);
if (v_isSharedCheck_2301_ == 0)
{
lean_object* v_unused_2302_; 
v_unused_2302_ = lean_ctor_get(v_a_2243_, 0);
lean_dec(v_unused_2302_);
v___x_2251_ = v_a_2243_;
v_isShared_2252_ = v_isSharedCheck_2301_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_buckets_2249_);
lean_dec(v_a_2243_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2301_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v_nextSub_2239_);
lean_ctor_set(v___x_2251_, 0, v___x_2241_);
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v___x_2241_);
lean_ctor_set(v_reuseFailAlloc_2300_, 1, v_nextSub_2239_);
v___x_2254_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; size_t v_sz_2256_; lean_object* v___x_2257_; 
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v_a_2248_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v_sz_2256_ = lean_array_size(v_buckets_2249_);
v___x_2257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v_ref_2234_, v_c_2231_, v_buckets_2249_, v_sz_2256_, v___x_2246_, v___x_2255_);
lean_dec_ref(v_buckets_2249_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2291_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2260_ = v___x_2257_;
v_isShared_2261_ = v_isSharedCheck_2291_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2257_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2291_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v_snd_2262_; lean_object* v_fst_2263_; lean_object* v_fst_2264_; lean_object* v_snd_2265_; lean_object* v___x_2266_; lean_object* v_model_2267_; lean_object* v_live_2268_; lean_object* v_next_2269_; lean_object* v_tables_2270_; uint8_t v_dirty_2271_; uint8_t v_scheduled_2272_; lean_object* v_queue_2273_; uint8_t v_busy_2274_; lean_object* v_touched_2275_; lean_object* v_ports_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2287_; 
v_snd_2262_ = lean_ctor_get(v_a_2258_, 1);
lean_inc(v_snd_2262_);
v_fst_2263_ = lean_ctor_get(v_a_2258_, 0);
lean_inc(v_fst_2263_);
lean_dec(v_a_2258_);
v_fst_2264_ = lean_ctor_get(v_snd_2262_, 0);
lean_inc(v_fst_2264_);
v_snd_2265_ = lean_ctor_get(v_snd_2262_, 1);
lean_inc(v_snd_2265_);
lean_dec(v_snd_2262_);
v___x_2266_ = lean_st_ref_take(v_ref_2234_);
v_model_2267_ = lean_ctor_get(v___x_2266_, 0);
v_live_2268_ = lean_ctor_get(v___x_2266_, 1);
v_next_2269_ = lean_ctor_get(v___x_2266_, 2);
v_tables_2270_ = lean_ctor_get(v___x_2266_, 3);
v_dirty_2271_ = lean_ctor_get_uint8(v___x_2266_, sizeof(void*)*10);
v_scheduled_2272_ = lean_ctor_get_uint8(v___x_2266_, sizeof(void*)*10 + 1);
v_queue_2273_ = lean_ctor_get(v___x_2266_, 4);
v_busy_2274_ = lean_ctor_get_uint8(v___x_2266_, sizeof(void*)*10 + 2);
v_touched_2275_ = lean_ctor_get(v___x_2266_, 8);
v_ports_2276_ = lean_ctor_get(v___x_2266_, 9);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2287_ == 0)
{
lean_object* v_unused_2288_; lean_object* v_unused_2289_; lean_object* v_unused_2290_; 
v_unused_2288_ = lean_ctor_get(v___x_2266_, 7);
lean_dec(v_unused_2288_);
v_unused_2289_ = lean_ctor_get(v___x_2266_, 6);
lean_dec(v_unused_2289_);
v_unused_2290_ = lean_ctor_get(v___x_2266_, 5);
lean_dec(v_unused_2290_);
v___x_2278_ = v___x_2266_;
v_isShared_2279_ = v_isSharedCheck_2287_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_ports_2276_);
lean_inc(v_touched_2275_);
lean_inc(v_queue_2273_);
lean_inc(v_tables_2270_);
lean_inc(v_next_2269_);
lean_inc(v_live_2268_);
lean_inc(v_model_2267_);
lean_dec(v___x_2266_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2287_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 7, v_snd_2265_);
lean_ctor_set(v___x_2278_, 6, v_fst_2264_);
lean_ctor_set(v___x_2278_, 5, v_fst_2263_);
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_model_2267_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_live_2268_);
lean_ctor_set(v_reuseFailAlloc_2286_, 2, v_next_2269_);
lean_ctor_set(v_reuseFailAlloc_2286_, 3, v_tables_2270_);
lean_ctor_set(v_reuseFailAlloc_2286_, 4, v_queue_2273_);
lean_ctor_set(v_reuseFailAlloc_2286_, 5, v_fst_2263_);
lean_ctor_set(v_reuseFailAlloc_2286_, 6, v_fst_2264_);
lean_ctor_set(v_reuseFailAlloc_2286_, 7, v_snd_2265_);
lean_ctor_set(v_reuseFailAlloc_2286_, 8, v_touched_2275_);
lean_ctor_set(v_reuseFailAlloc_2286_, 9, v_ports_2276_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*10, v_dirty_2271_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*10 + 1, v_scheduled_2272_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*10 + 2, v_busy_2274_);
v___x_2281_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2282_ = lean_st_ref_put(v_ref_2234_, v___x_2281_);
lean_dec(v_ref_2234_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2282_);
v___x_2284_ = v___x_2260_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_ref_2234_);
v_a_2292_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v___x_2257_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2257_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2292_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec(v_a_2243_);
lean_dec(v_nextSub_2239_);
lean_dec(v_ref_2234_);
lean_dec_ref(v_c_2231_);
v_a_2303_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2247_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2247_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v_nextSub_2239_);
lean_dec_ref(v_subs_2238_);
lean_dec(v_ref_2234_);
lean_dec_ref(v_c_2231_);
v_a_2311_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2242_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2242_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg(lean_object* v_c_2319_, lean_object* v_msg_2320_){
_start:
{
lean_object* v_ref_2322_; lean_object* v___x_2323_; lean_object* v_model_2324_; lean_object* v_live_2325_; lean_object* v_next_2326_; lean_object* v_tables_2327_; uint8_t v_dirty_2328_; uint8_t v_scheduled_2329_; lean_object* v_queue_2330_; uint8_t v_busy_2331_; lean_object* v_subs_2332_; lean_object* v_handlers_2333_; lean_object* v_nextSub_2334_; lean_object* v_touched_2335_; lean_object* v_ports_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2397_; 
v_ref_2322_ = lean_ctor_get(v_c_2319_, 1);
lean_inc(v_ref_2322_);
v___x_2323_ = lean_st_ref_take(v_ref_2322_);
v_model_2324_ = lean_ctor_get(v___x_2323_, 0);
v_live_2325_ = lean_ctor_get(v___x_2323_, 1);
v_next_2326_ = lean_ctor_get(v___x_2323_, 2);
v_tables_2327_ = lean_ctor_get(v___x_2323_, 3);
v_dirty_2328_ = lean_ctor_get_uint8(v___x_2323_, sizeof(void*)*10);
v_scheduled_2329_ = lean_ctor_get_uint8(v___x_2323_, sizeof(void*)*10 + 1);
v_queue_2330_ = lean_ctor_get(v___x_2323_, 4);
v_busy_2331_ = lean_ctor_get_uint8(v___x_2323_, sizeof(void*)*10 + 2);
v_subs_2332_ = lean_ctor_get(v___x_2323_, 5);
v_handlers_2333_ = lean_ctor_get(v___x_2323_, 6);
v_nextSub_2334_ = lean_ctor_get(v___x_2323_, 7);
v_touched_2335_ = lean_ctor_get(v___x_2323_, 8);
v_ports_2336_ = lean_ctor_get(v___x_2323_, 9);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2338_ = v___x_2323_;
v_isShared_2339_ = v_isSharedCheck_2397_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_ports_2336_);
lean_inc(v_touched_2335_);
lean_inc(v_nextSub_2334_);
lean_inc(v_handlers_2333_);
lean_inc(v_subs_2332_);
lean_inc(v_queue_2330_);
lean_inc(v_tables_2327_);
lean_inc(v_next_2326_);
lean_inc(v_live_2325_);
lean_inc(v_model_2324_);
lean_dec(v___x_2323_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2397_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; lean_object* v___x_2342_; 
v___x_2340_ = lean_array_push(v_queue_2330_, v_msg_2320_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 4, v___x_2340_);
v___x_2342_ = v___x_2338_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_model_2324_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v_live_2325_);
lean_ctor_set(v_reuseFailAlloc_2396_, 2, v_next_2326_);
lean_ctor_set(v_reuseFailAlloc_2396_, 3, v_tables_2327_);
lean_ctor_set(v_reuseFailAlloc_2396_, 4, v___x_2340_);
lean_ctor_set(v_reuseFailAlloc_2396_, 5, v_subs_2332_);
lean_ctor_set(v_reuseFailAlloc_2396_, 6, v_handlers_2333_);
lean_ctor_set(v_reuseFailAlloc_2396_, 7, v_nextSub_2334_);
lean_ctor_set(v_reuseFailAlloc_2396_, 8, v_touched_2335_);
lean_ctor_set(v_reuseFailAlloc_2396_, 9, v_ports_2336_);
lean_ctor_set_uint8(v_reuseFailAlloc_2396_, sizeof(void*)*10, v_dirty_2328_);
lean_ctor_set_uint8(v_reuseFailAlloc_2396_, sizeof(void*)*10 + 1, v_scheduled_2329_);
lean_ctor_set_uint8(v_reuseFailAlloc_2396_, sizeof(void*)*10 + 2, v_busy_2331_);
v___x_2342_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v_busy_2345_; 
v___x_2343_ = lean_st_ref_put(v_ref_2322_, v___x_2342_);
v___x_2344_ = lean_st_ref_get(v_ref_2322_);
v_busy_2345_ = lean_ctor_get_uint8(v___x_2344_, sizeof(void*)*10 + 2);
lean_dec(v___x_2344_);
if (v_busy_2345_ == 0)
{
lean_object* v___y_2347_; uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v_model_2372_; lean_object* v_live_2373_; lean_object* v_next_2374_; lean_object* v_tables_2375_; uint8_t v_dirty_2376_; uint8_t v_scheduled_2377_; lean_object* v_queue_2378_; lean_object* v_subs_2379_; lean_object* v_handlers_2380_; lean_object* v_nextSub_2381_; lean_object* v_touched_2382_; lean_object* v_ports_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2393_; 
v___x_2370_ = 1;
v___x_2371_ = lean_st_ref_take(v_ref_2322_);
v_model_2372_ = lean_ctor_get(v___x_2371_, 0);
v_live_2373_ = lean_ctor_get(v___x_2371_, 1);
v_next_2374_ = lean_ctor_get(v___x_2371_, 2);
v_tables_2375_ = lean_ctor_get(v___x_2371_, 3);
v_dirty_2376_ = lean_ctor_get_uint8(v___x_2371_, sizeof(void*)*10);
v_scheduled_2377_ = lean_ctor_get_uint8(v___x_2371_, sizeof(void*)*10 + 1);
v_queue_2378_ = lean_ctor_get(v___x_2371_, 4);
v_subs_2379_ = lean_ctor_get(v___x_2371_, 5);
v_handlers_2380_ = lean_ctor_get(v___x_2371_, 6);
v_nextSub_2381_ = lean_ctor_get(v___x_2371_, 7);
v_touched_2382_ = lean_ctor_get(v___x_2371_, 8);
v_ports_2383_ = lean_ctor_get(v___x_2371_, 9);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2385_ = v___x_2371_;
v_isShared_2386_ = v_isSharedCheck_2393_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_ports_2383_);
lean_inc(v_touched_2382_);
lean_inc(v_nextSub_2381_);
lean_inc(v_handlers_2380_);
lean_inc(v_subs_2379_);
lean_inc(v_queue_2378_);
lean_inc(v_tables_2375_);
lean_inc(v_next_2374_);
lean_inc(v_live_2373_);
lean_inc(v_model_2372_);
lean_dec(v___x_2371_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2393_;
goto v_resetjp_2384_;
}
v___jp_2346_:
{
if (lean_obj_tag(v___y_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2358_; 
v_a_2348_ = lean_ctor_get(v___y_2347_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___y_2347_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2350_ = v___y_2347_;
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___y_2347_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v___x_2352_ = lean_st_ref_take(v_ref_2322_);
v___x_2353_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2345_, v___x_2352_);
v___x_2354_ = lean_st_ref_put(v_ref_2322_, v___x_2353_);
lean_dec(v_ref_2322_);
if (v_isShared_2351_ == 0)
{
v___x_2356_ = v___x_2350_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2348_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2369_; 
v_a_2359_ = lean_ctor_get(v___y_2347_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___y_2347_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2361_ = v___y_2347_;
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___y_2347_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2367_; 
v___x_2363_ = lean_st_ref_take(v_ref_2322_);
v___x_2364_ = l_Lasm_UI_Runtime_deliver___redArg___lam__0(v_busy_2345_, v___x_2363_);
v___x_2365_ = lean_st_ref_put(v_ref_2322_, v___x_2364_);
lean_dec(v_ref_2322_);
if (v_isShared_2362_ == 0)
{
v___x_2367_ = v___x_2361_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2359_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_model_2372_);
lean_ctor_set(v_reuseFailAlloc_2392_, 1, v_live_2373_);
lean_ctor_set(v_reuseFailAlloc_2392_, 2, v_next_2374_);
lean_ctor_set(v_reuseFailAlloc_2392_, 3, v_tables_2375_);
lean_ctor_set(v_reuseFailAlloc_2392_, 4, v_queue_2378_);
lean_ctor_set(v_reuseFailAlloc_2392_, 5, v_subs_2379_);
lean_ctor_set(v_reuseFailAlloc_2392_, 6, v_handlers_2380_);
lean_ctor_set(v_reuseFailAlloc_2392_, 7, v_nextSub_2381_);
lean_ctor_set(v_reuseFailAlloc_2392_, 8, v_touched_2382_);
lean_ctor_set(v_reuseFailAlloc_2392_, 9, v_ports_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2392_, sizeof(void*)*10, v_dirty_2376_);
lean_ctor_set_uint8(v_reuseFailAlloc_2392_, sizeof(void*)*10 + 1, v_scheduled_2377_);
v___x_2388_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
lean_ctor_set_uint8(v___x_2388_, sizeof(void*)*10 + 2, v___x_2370_);
v___x_2389_ = lean_st_ref_put(v_ref_2322_, v___x_2388_);
lean_inc_ref(v_c_2319_);
v___x_2390_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v_ref_2322_, v_c_2319_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v___x_2391_; 
lean_dec_ref_known(v___x_2390_, 1);
v___x_2391_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2319_);
v___y_2347_ = v___x_2391_;
goto v___jp_2346_;
}
else
{
lean_dec_ref(v_c_2319_);
v___y_2347_ = v___x_2390_;
goto v___jp_2346_;
}
}
}
}
else
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec(v_ref_2322_);
lean_dec_ref(v_c_2319_);
v___x_2394_ = lean_box(0);
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___lam__3(lean_object* v_c_2398_, lean_object* v_m_2399_){
_start:
{
lean_object* v___x_2401_; 
lean_inc_ref(v_c_2398_);
v___x_2401_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2398_, v_m_2399_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v___x_2402_; 
lean_dec_ref_known(v___x_2401_, 1);
v___x_2402_ = l_Lasm_UI_Runtime_requestFrame___redArg(v_c_2398_);
lean_dec_ref(v_c_2398_);
return v___x_2402_;
}
else
{
lean_dec_ref(v_c_2398_);
return v___x_2401_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___boxed(lean_object* v_c_2403_, lean_object* v_as_x27_2404_, lean_object* v_b_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2403_, v_as_x27_2404_, v_b_2405_);
lean_dec(v_as_x27_2404_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg___boxed(lean_object* v_v_2408_, lean_object* v_c_2409_, lean_object* v_as_x27_2410_, lean_object* v_b_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2408_, v_c_2409_, v_as_x27_2410_, v_b_2411_);
lean_dec(v_as_x27_2410_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg___boxed(lean_object* v___x_2414_, lean_object* v_c_2415_, lean_object* v_as_2416_, lean_object* v_sz_2417_, lean_object* v_i_2418_, lean_object* v_b_2419_, lean_object* v___y_2420_){
_start:
{
size_t v_sz_boxed_2421_; size_t v_i_boxed_2422_; lean_object* v_res_2423_; 
v_sz_boxed_2421_ = lean_unbox_usize(v_sz_2417_);
lean_dec(v_sz_2417_);
v_i_boxed_2422_ = lean_unbox_usize(v_i_2418_);
lean_dec(v_i_2418_);
v_res_2423_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2414_, v_c_2415_, v_as_2416_, v_sz_boxed_2421_, v_i_boxed_2422_, v_b_2419_);
lean_dec_ref(v_as_2416_);
lean_dec(v___x_2414_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___redArg___boxed(lean_object* v_c_2424_, lean_object* v_name_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2424_, v_name_2425_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg___boxed(lean_object* v___x_2428_, lean_object* v_c_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2428_, v_c_2429_);
lean_dec(v___x_2428_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg___boxed(lean_object* v___x_2432_, lean_object* v_c_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2432_, v_c_2433_, v_a_2434_, v_a_2435_);
lean_dec(v___x_2432_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___redArg___boxed(lean_object* v_c_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2438_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___redArg___boxed(lean_object* v_c_2441_, lean_object* v_msg_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2441_, v_msg_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___redArg___boxed(lean_object* v_c_2445_, lean_object* v_e_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2445_, v_e_2446_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs(lean_object* v_Flags_2449_, lean_object* v_Model_2450_, lean_object* v_Msg_2451_, lean_object* v_c_2452_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_Lasm_UI_Runtime_syncSubs___redArg(v_c_2452_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_syncSubs___boxed(lean_object* v_Flags_2455_, lean_object* v_Model_2456_, lean_object* v_Msg_2457_, lean_object* v_c_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lasm_UI_Runtime_syncSubs(v_Flags_2455_, v_Model_2456_, v_Msg_2457_, v_c_2458_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort(lean_object* v_Flags_2461_, lean_object* v_Model_2462_, lean_object* v_Msg_2463_, lean_object* v_c_2464_, lean_object* v_name_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Lasm_UI_Runtime_listenPort___redArg(v_c_2464_, v_name_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_listenPort___boxed(lean_object* v_Flags_2468_, lean_object* v_Model_2469_, lean_object* v_Msg_2470_, lean_object* v_c_2471_, lean_object* v_name_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Lasm_UI_Runtime_listenPort(v_Flags_2468_, v_Model_2469_, v_Msg_2470_, v_c_2471_, v_name_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver(lean_object* v_Flags_2475_, lean_object* v_Model_2476_, lean_object* v_Msg_2477_, lean_object* v_c_2478_, lean_object* v_msg_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2478_, v_msg_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_deliver___boxed(lean_object* v_Flags_2482_, lean_object* v_Model_2483_, lean_object* v_Msg_2484_, lean_object* v_c_2485_, lean_object* v_msg_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lasm_UI_Runtime_deliver(v_Flags_2482_, v_Model_2483_, v_Msg_2484_, v_c_2485_, v_msg_2486_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform(lean_object* v_Flags_2489_, lean_object* v_Model_2490_, lean_object* v_Msg_2491_, lean_object* v_c_2492_, lean_object* v_e_2493_){
_start:
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lasm_UI_Runtime_perform___redArg(v_c_2492_, v_e_2493_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_perform___boxed(lean_object* v_Flags_2496_, lean_object* v_Model_2497_, lean_object* v_Msg_2498_, lean_object* v_c_2499_, lean_object* v_e_2500_, lean_object* v_a_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lasm_UI_Runtime_perform(v_Flags_2496_, v_Model_2497_, v_Msg_2498_, v_c_2499_, v_e_2500_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(lean_object* v_00_u03b2_2503_, lean_object* v_m_2504_, lean_object* v_a_2505_, lean_object* v_fallback_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___redArg(v_m_2504_, v_a_2505_, v_fallback_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0___boxed(lean_object* v_00_u03b2_2508_, lean_object* v_m_2509_, lean_object* v_a_2510_, lean_object* v_fallback_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0(v_00_u03b2_2508_, v_m_2509_, v_a_2510_, v_fallback_2511_);
lean_dec(v_fallback_2511_);
lean_dec_ref(v_m_2509_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1(lean_object* v_00_u03b2_2513_, lean_object* v_m_2514_, lean_object* v_a_2515_, lean_object* v_b_2516_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1___redArg(v_m_2514_, v_a_2515_, v_b_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(lean_object* v_Msg_2518_, lean_object* v_as_2519_, lean_object* v_as_x27_2520_, lean_object* v_b_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___redArg(v_as_x27_2520_, v_b_2521_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2___boxed(lean_object* v_Msg_2525_, lean_object* v_as_2526_, lean_object* v_as_x27_2527_, lean_object* v_b_2528_, lean_object* v_a_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_syncSubs_spec__2(v_Msg_2525_, v_as_2526_, v_as_x27_2527_, v_b_2528_, v_a_2529_);
lean_dec(v_as_x27_2527_);
lean_dec(v_as_2526_);
return v_res_2531_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(lean_object* v_00_u03b2_2532_, lean_object* v_m_2533_, lean_object* v_a_2534_){
_start:
{
uint8_t v___x_2535_; 
v___x_2535_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___redArg(v_m_2533_, v_a_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3___boxed(lean_object* v_00_u03b2_2536_, lean_object* v_m_2537_, lean_object* v_a_2538_){
_start:
{
uint8_t v_res_2539_; lean_object* v_r_2540_; 
v_res_2539_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lasm_UI_Runtime_syncSubs_spec__3(v_00_u03b2_2536_, v_m_2537_, v_a_2538_);
lean_dec_ref(v_m_2537_);
v_r_2540_ = lean_box(v_res_2539_);
return v_r_2540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4(lean_object* v_00_u03b2_2541_, lean_object* v_m_2542_, lean_object* v_a_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4___redArg(v_m_2542_, v_a_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(lean_object* v_Msg_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v___x_2550_; 
v___x_2550_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___redArg(v_a_2546_, v_a_2547_, v_a_2548_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5___boxed(lean_object* v_Msg_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__5(v_Msg_2551_, v_a_2552_, v_a_2553_, v_a_2554_);
lean_dec_ref(v_a_2552_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(lean_object* v_00_u03b2_2557_, lean_object* v_m_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___redArg(v_m_2558_, v_a_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6___boxed(lean_object* v_00_u03b2_2561_, lean_object* v_m_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6(v_00_u03b2_2561_, v_m_2562_, v_a_2563_);
lean_dec_ref(v_m_2562_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(lean_object* v_Msg_2565_, lean_object* v_Model_2566_, lean_object* v___x_2567_, lean_object* v_Flags_2568_, lean_object* v_c_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___redArg(v___x_2567_, v_c_2569_, v_a_2570_, v_a_2571_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7___boxed(lean_object* v_Msg_2574_, lean_object* v_Model_2575_, lean_object* v___x_2576_, lean_object* v_Flags_2577_, lean_object* v_c_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lasm_UI_Runtime_syncSubs_spec__7(v_Msg_2574_, v_Model_2575_, v___x_2576_, v_Flags_2577_, v_c_2578_, v_a_2579_, v_a_2580_);
lean_dec(v___x_2576_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(lean_object* v_Msg_2583_, lean_object* v_a_2584_, lean_object* v_as_2585_, size_t v_sz_2586_, size_t v_i_2587_, lean_object* v_b_2588_){
_start:
{
lean_object* v___x_2590_; 
v___x_2590_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___redArg(v_a_2584_, v_as_2585_, v_sz_2586_, v_i_2587_, v_b_2588_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8___boxed(lean_object* v_Msg_2591_, lean_object* v_a_2592_, lean_object* v_as_2593_, lean_object* v_sz_2594_, lean_object* v_i_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_){
_start:
{
size_t v_sz_boxed_2598_; size_t v_i_boxed_2599_; lean_object* v_res_2600_; 
v_sz_boxed_2598_ = lean_unbox_usize(v_sz_2594_);
lean_dec(v_sz_2594_);
v_i_boxed_2599_ = lean_unbox_usize(v_i_2595_);
lean_dec(v_i_2595_);
v_res_2600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__8(v_Msg_2591_, v_a_2592_, v_as_2593_, v_sz_boxed_2598_, v_i_boxed_2599_, v_b_2596_);
lean_dec_ref(v_as_2593_);
lean_dec_ref(v_a_2592_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(lean_object* v_Msg_2601_, lean_object* v_Model_2602_, lean_object* v___x_2603_, lean_object* v_Flags_2604_, lean_object* v_c_2605_, lean_object* v_as_2606_, size_t v_sz_2607_, size_t v_i_2608_, lean_object* v_b_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___redArg(v___x_2603_, v_c_2605_, v_as_2606_, v_sz_2607_, v_i_2608_, v_b_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9___boxed(lean_object* v_Msg_2612_, lean_object* v_Model_2613_, lean_object* v___x_2614_, lean_object* v_Flags_2615_, lean_object* v_c_2616_, lean_object* v_as_2617_, lean_object* v_sz_2618_, lean_object* v_i_2619_, lean_object* v_b_2620_, lean_object* v___y_2621_){
_start:
{
size_t v_sz_boxed_2622_; size_t v_i_boxed_2623_; lean_object* v_res_2624_; 
v_sz_boxed_2622_ = lean_unbox_usize(v_sz_2618_);
lean_dec(v_sz_2618_);
v_i_boxed_2623_ = lean_unbox_usize(v_i_2619_);
lean_dec(v_i_2619_);
v_res_2624_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_syncSubs_spec__9(v_Msg_2612_, v_Model_2613_, v___x_2614_, v_Flags_2615_, v_c_2616_, v_as_2617_, v_sz_boxed_2622_, v_i_boxed_2623_, v_b_2620_);
lean_dec_ref(v_as_2617_);
lean_dec(v___x_2614_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(lean_object* v_00_u03b2_2625_, lean_object* v_m_2626_, lean_object* v_a_2627_, lean_object* v_fallback_2628_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_m_2626_, v_a_2627_, v_fallback_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___boxed(lean_object* v_00_u03b2_2630_, lean_object* v_m_2631_, lean_object* v_a_2632_, lean_object* v_fallback_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11(v_00_u03b2_2630_, v_m_2631_, v_a_2632_, v_fallback_2633_);
lean_dec(v_fallback_2633_);
lean_dec(v_a_2632_);
lean_dec_ref(v_m_2631_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(lean_object* v_Msg_2635_, lean_object* v_v_2636_, lean_object* v_Flags_2637_, lean_object* v_Model_2638_, lean_object* v_c_2639_, lean_object* v_as_2640_, lean_object* v_as_x27_2641_, lean_object* v_b_2642_, lean_object* v_a_2643_){
_start:
{
lean_object* v___x_2645_; 
v___x_2645_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___redArg(v_v_2636_, v_c_2639_, v_as_x27_2641_, v_b_2642_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12___boxed(lean_object* v_Msg_2646_, lean_object* v_v_2647_, lean_object* v_Flags_2648_, lean_object* v_Model_2649_, lean_object* v_c_2650_, lean_object* v_as_2651_, lean_object* v_as_x27_2652_, lean_object* v_b_2653_, lean_object* v_a_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_listenPort_spec__12(v_Msg_2646_, v_v_2647_, v_Flags_2648_, v_Model_2649_, v_c_2650_, v_as_2651_, v_as_x27_2652_, v_b_2653_, v_a_2654_);
lean_dec(v_as_x27_2652_);
lean_dec(v_as_2651_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(lean_object* v_Msg_2657_, lean_object* v_Flags_2658_, lean_object* v_Model_2659_, lean_object* v_c_2660_, lean_object* v_as_2661_, lean_object* v_as_x27_2662_, lean_object* v_b_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg(v_c_2660_, v_as_x27_2662_, v_b_2663_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___boxed(lean_object* v_Msg_2667_, lean_object* v_Flags_2668_, lean_object* v_Model_2669_, lean_object* v_c_2670_, lean_object* v_as_2671_, lean_object* v_as_x27_2672_, lean_object* v_b_2673_, lean_object* v_a_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14(v_Msg_2667_, v_Flags_2668_, v_Model_2669_, v_c_2670_, v_as_2671_, v_as_x27_2672_, v_b_2673_, v_a_2674_);
lean_dec(v_as_x27_2672_);
lean_dec(v_as_2671_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(lean_object* v_Model_2677_, lean_object* v_Msg_2678_, lean_object* v___x_2679_, lean_object* v_Flags_2680_, lean_object* v_c_2681_, lean_object* v_inst_2682_, lean_object* v_a_2683_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___redArg(v___x_2679_, v_c_2681_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15___boxed(lean_object* v_Model_2686_, lean_object* v_Msg_2687_, lean_object* v___x_2688_, lean_object* v_Flags_2689_, lean_object* v_c_2690_, lean_object* v_inst_2691_, lean_object* v_a_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_deliver_spec__15(v_Model_2686_, v_Msg_2687_, v___x_2688_, v_Flags_2689_, v_c_2690_, v_inst_2691_, v_a_2692_);
lean_dec(v___x_2688_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(lean_object* v_00_u03b2_2695_, lean_object* v_a_2696_, lean_object* v_fallback_2697_, lean_object* v_x_2698_){
_start:
{
lean_object* v___x_2699_; 
v___x_2699_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___redArg(v_a_2696_, v_fallback_2697_, v_x_2698_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2700_, lean_object* v_a_2701_, lean_object* v_fallback_2702_, lean_object* v_x_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_syncSubs_spec__0_spec__0(v_00_u03b2_2700_, v_a_2701_, v_fallback_2702_, v_x_2703_);
lean_dec(v_fallback_2702_);
return v_res_2704_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(lean_object* v_00_u03b2_2705_, lean_object* v_a_2706_, lean_object* v_x_2707_){
_start:
{
uint8_t v___x_2708_; 
v___x_2708_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___redArg(v_a_2706_, v_x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2709_, lean_object* v_a_2710_, lean_object* v_x_2711_){
_start:
{
uint8_t v_res_2712_; lean_object* v_r_2713_; 
v_res_2712_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__2(v_00_u03b2_2709_, v_a_2710_, v_x_2711_);
v_r_2713_ = lean_box(v_res_2712_);
return v_r_2713_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3(lean_object* v_00_u03b2_2714_, lean_object* v_data_2715_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3___redArg(v_data_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4(lean_object* v_00_u03b2_2717_, lean_object* v_a_2718_, lean_object* v_b_2719_, lean_object* v_x_2720_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__4___redArg(v_a_2718_, v_b_2719_, v_x_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8(lean_object* v_00_u03b2_2722_, lean_object* v_a_2723_, lean_object* v_x_2724_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_UI_Runtime_syncSubs_spec__4_spec__8___redArg(v_a_2723_, v_x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11(lean_object* v_00_u03b2_2726_, lean_object* v_a_2727_, lean_object* v_x_2728_){
_start:
{
lean_object* v___x_2729_; 
v___x_2729_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Runtime_syncSubs_spec__6_spec__11___redArg(v_a_2727_, v_x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(lean_object* v_00_u03b2_2730_, lean_object* v_a_2731_, lean_object* v_fallback_2732_, lean_object* v_x_2733_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___redArg(v_a_2731_, v_fallback_2732_, v_x_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2735_, lean_object* v_a_2736_, lean_object* v_fallback_2737_, lean_object* v_x_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11_spec__17(v_00_u03b2_2735_, v_a_2736_, v_fallback_2737_, v_x_2738_);
lean_dec(v_x_2738_);
lean_dec(v_fallback_2737_);
lean_dec(v_a_2736_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2740_, lean_object* v_i_2741_, lean_object* v_source_2742_, lean_object* v_target_2743_){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7___redArg(v_i_2741_, v_source_2742_, v_target_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23(lean_object* v_00_u03b2_2745_, lean_object* v_x_2746_, lean_object* v_x_2747_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Runtime_syncSubs_spec__1_spec__3_spec__7_spec__23___redArg(v_x_2746_, v_x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2751_){
_start:
{
lean_object* v_app_2753_; lean_object* v_ref_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2820_; 
v_app_2753_ = lean_ctor_get(v_c_2751_, 0);
v_ref_2754_ = lean_ctor_get(v_c_2751_, 1);
v_isSharedCheck_2820_ = !lean_is_exclusive(v_c_2751_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2756_ = v_c_2751_;
v_isShared_2757_ = v_isSharedCheck_2820_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_ref_2754_);
lean_inc(v_app_2753_);
lean_dec(v_c_2751_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2820_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; uint8_t v_dirty_2759_; 
v___x_2758_ = lean_st_ref_get(v_ref_2754_);
v_dirty_2759_ = lean_ctor_get_uint8(v___x_2758_, sizeof(void*)*10);
if (v_dirty_2759_ == 0)
{
lean_object* v_model_2760_; lean_object* v_live_2761_; lean_object* v_next_2762_; lean_object* v_tables_2763_; lean_object* v_queue_2764_; uint8_t v_busy_2765_; lean_object* v_subs_2766_; lean_object* v_handlers_2767_; lean_object* v_nextSub_2768_; lean_object* v_ports_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2780_; 
lean_del_object(v___x_2756_);
lean_dec_ref(v_app_2753_);
v_model_2760_ = lean_ctor_get(v___x_2758_, 0);
v_live_2761_ = lean_ctor_get(v___x_2758_, 1);
v_next_2762_ = lean_ctor_get(v___x_2758_, 2);
v_tables_2763_ = lean_ctor_get(v___x_2758_, 3);
v_queue_2764_ = lean_ctor_get(v___x_2758_, 4);
v_busy_2765_ = lean_ctor_get_uint8(v___x_2758_, sizeof(void*)*10 + 2);
v_subs_2766_ = lean_ctor_get(v___x_2758_, 5);
v_handlers_2767_ = lean_ctor_get(v___x_2758_, 6);
v_nextSub_2768_ = lean_ctor_get(v___x_2758_, 7);
v_ports_2769_ = lean_ctor_get(v___x_2758_, 9);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2780_ == 0)
{
lean_object* v_unused_2781_; 
v_unused_2781_ = lean_ctor_get(v___x_2758_, 8);
lean_dec(v_unused_2781_);
v___x_2771_ = v___x_2758_;
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_ports_2769_);
lean_inc(v_nextSub_2768_);
lean_inc(v_handlers_2767_);
lean_inc(v_subs_2766_);
lean_inc(v_queue_2764_);
lean_inc(v_tables_2763_);
lean_inc(v_next_2762_);
lean_inc(v_live_2761_);
lean_inc(v_model_2760_);
lean_dec(v___x_2758_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2775_; 
v___x_2773_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 8, v___x_2773_);
v___x_2775_ = v___x_2771_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_model_2760_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_live_2761_);
lean_ctor_set(v_reuseFailAlloc_2779_, 2, v_next_2762_);
lean_ctor_set(v_reuseFailAlloc_2779_, 3, v_tables_2763_);
lean_ctor_set(v_reuseFailAlloc_2779_, 4, v_queue_2764_);
lean_ctor_set(v_reuseFailAlloc_2779_, 5, v_subs_2766_);
lean_ctor_set(v_reuseFailAlloc_2779_, 6, v_handlers_2767_);
lean_ctor_set(v_reuseFailAlloc_2779_, 7, v_nextSub_2768_);
lean_ctor_set(v_reuseFailAlloc_2779_, 8, v___x_2773_);
lean_ctor_set(v_reuseFailAlloc_2779_, 9, v_ports_2769_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*10, v_dirty_2759_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*10 + 2, v_busy_2765_);
v___x_2775_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*10 + 1, v_dirty_2759_);
v___x_2776_ = lean_st_ref_swap(v_ref_2754_, v___x_2775_);
lean_dec(v_ref_2754_);
lean_dec(v___x_2776_);
v___x_2777_ = l_ByteArray_empty;
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
}
}
else
{
lean_object* v_model_2782_; lean_object* v_live_2783_; lean_object* v_next_2784_; lean_object* v_tables_2785_; lean_object* v_queue_2786_; uint8_t v_busy_2787_; lean_object* v_subs_2788_; lean_object* v_handlers_2789_; lean_object* v_nextSub_2790_; lean_object* v_touched_2791_; lean_object* v_ports_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2819_; 
v_model_2782_ = lean_ctor_get(v___x_2758_, 0);
v_live_2783_ = lean_ctor_get(v___x_2758_, 1);
v_next_2784_ = lean_ctor_get(v___x_2758_, 2);
v_tables_2785_ = lean_ctor_get(v___x_2758_, 3);
v_queue_2786_ = lean_ctor_get(v___x_2758_, 4);
v_busy_2787_ = lean_ctor_get_uint8(v___x_2758_, sizeof(void*)*10 + 2);
v_subs_2788_ = lean_ctor_get(v___x_2758_, 5);
v_handlers_2789_ = lean_ctor_get(v___x_2758_, 6);
v_nextSub_2790_ = lean_ctor_get(v___x_2758_, 7);
v_touched_2791_ = lean_ctor_get(v___x_2758_, 8);
v_ports_2792_ = lean_ctor_get(v___x_2758_, 9);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2794_ = v___x_2758_;
v_isShared_2795_ = v_isSharedCheck_2819_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_ports_2792_);
lean_inc(v_touched_2791_);
lean_inc(v_nextSub_2790_);
lean_inc(v_handlers_2789_);
lean_inc(v_subs_2788_);
lean_inc(v_queue_2786_);
lean_inc(v_tables_2785_);
lean_inc(v_next_2784_);
lean_inc(v_live_2783_);
lean_inc(v_model_2782_);
lean_dec(v___x_2758_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2819_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v_view_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2800_; 
v_view_2796_ = lean_ctor_get(v_app_2753_, 2);
lean_inc_ref(v_view_2796_);
lean_dec_ref(v_app_2753_);
lean_inc(v_model_2782_);
v___x_2797_ = lean_apply_1(v_view_2796_, v_model_2782_);
v___x_2798_ = lean_box(0);
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 1);
lean_ctor_set(v___x_2756_, 1, v___x_2798_);
lean_ctor_set(v___x_2756_, 0, v___x_2797_);
v___x_2800_ = v___x_2756_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v___x_2797_);
lean_ctor_set(v_reuseFailAlloc_2818_, 1, v___x_2798_);
v___x_2800_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
lean_object* v___x_2801_; lean_object* v_ops_2802_; lean_object* v_live_2803_; lean_object* v_next_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v_fst_2809_; lean_object* v_snd_2810_; uint8_t v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2814_; 
v___x_2801_ = l_Lasm_UI_diff___redArg(v_live_2783_, v___x_2800_, v_next_2784_);
v_ops_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc_ref(v_ops_2802_);
v_live_2803_ = lean_ctor_get(v___x_2801_, 1);
lean_inc_n(v_live_2803_, 2);
v_next_2804_ = lean_ctor_get(v___x_2801_, 2);
lean_inc(v_next_2804_);
lean_dec_ref(v___x_2801_);
v___x_2805_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2803_, v_touched_2791_);
lean_dec_ref(v_touched_2791_);
v___x_2806_ = l_Array_append___redArg(v_ops_2802_, v___x_2805_);
lean_dec_ref(v___x_2805_);
v___x_2807_ = lean_unsigned_to_nat(0u);
v___x_2808_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2785_, v___x_2806_, v___x_2807_);
lean_dec_ref(v___x_2806_);
v_fst_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_fst_2809_);
v_snd_2810_ = lean_ctor_get(v___x_2808_, 1);
lean_inc(v_snd_2810_);
lean_dec_ref(v___x_2808_);
v___x_2811_ = 0;
v___x_2812_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 8, v___x_2812_);
lean_ctor_set(v___x_2794_, 3, v_snd_2810_);
lean_ctor_set(v___x_2794_, 2, v_next_2804_);
lean_ctor_set(v___x_2794_, 1, v_live_2803_);
v___x_2814_ = v___x_2794_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_model_2782_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_live_2803_);
lean_ctor_set(v_reuseFailAlloc_2817_, 2, v_next_2804_);
lean_ctor_set(v_reuseFailAlloc_2817_, 3, v_snd_2810_);
lean_ctor_set(v_reuseFailAlloc_2817_, 4, v_queue_2786_);
lean_ctor_set(v_reuseFailAlloc_2817_, 5, v_subs_2788_);
lean_ctor_set(v_reuseFailAlloc_2817_, 6, v_handlers_2789_);
lean_ctor_set(v_reuseFailAlloc_2817_, 7, v_nextSub_2790_);
lean_ctor_set(v_reuseFailAlloc_2817_, 8, v___x_2812_);
lean_ctor_set(v_reuseFailAlloc_2817_, 9, v_ports_2792_);
lean_ctor_set_uint8(v_reuseFailAlloc_2817_, sizeof(void*)*10 + 2, v_busy_2787_);
v___x_2814_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*10, v___x_2811_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*10 + 1, v___x_2811_);
v___x_2815_ = lean_st_ref_swap(v_ref_2754_, v___x_2814_);
lean_dec(v_ref_2754_);
lean_dec(v___x_2815_);
v___x_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2816_, 0, v_fst_2809_);
return v___x_2816_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2821_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2824_, lean_object* v_Model_2825_, lean_object* v_Msg_2826_, lean_object* v_c_2827_){
_start:
{
lean_object* v___x_2829_; 
v___x_2829_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2827_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2830_, lean_object* v_Model_2831_, lean_object* v_Msg_2832_, lean_object* v_c_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lasm_UI_Runtime_frame(v_Flags_2830_, v_Model_2831_, v_Msg_2832_, v_c_2833_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2836_, lean_object* v_____r_2837_, lean_object* v_msgs_2838_){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2840_ = lean_unsigned_to_nat(2u);
v___x_2841_ = lean_nat_add(v_snd_2836_, v___x_2840_);
v___x_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2842_, 0, v_msgs_2838_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2845_, lean_object* v_____r_2846_, lean_object* v_msgs_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2845_, v_____r_2846_, v_msgs_2847_);
lean_dec(v_snd_2845_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2850_, lean_object* v_fst_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_apply_3(v___f_2850_, v___x_2854_, v_fst_2851_, lean_box(0));
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2856_, lean_object* v_fst_2857_, lean_object* v_x_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2856_, v_fst_2857_, v_x_2858_);
lean_dec(v_x_2858_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2861_, lean_object* v_fst_2862_, lean_object* v_x_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_box(0);
v___x_2866_ = lean_apply_3(v___f_2861_, v___x_2865_, v_fst_2862_, lean_box(0));
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2867_, lean_object* v_fst_2868_, lean_object* v_x_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2867_, v_fst_2868_, v_x_2869_);
lean_dec_ref(v_x_2869_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2872_, lean_object* v___x_2873_, lean_object* v_s_2874_, lean_object* v_a_2875_){
_start:
{
lean_object* v___y_2878_; lean_object* v_fst_2898_; lean_object* v_snd_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2955_; 
v_fst_2898_ = lean_ctor_get(v_a_2875_, 0);
v_snd_2899_ = lean_ctor_get(v_a_2875_, 1);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_a_2875_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2901_ = v_a_2875_;
v_isShared_2902_ = v_isSharedCheck_2955_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_snd_2899_);
lean_inc(v_fst_2898_);
lean_dec(v_a_2875_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2955_;
goto v_resetjp_2900_;
}
v___jp_2877_:
{
if (lean_obj_tag(v___y_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2889_; 
v_a_2879_ = lean_ctor_get(v___y_2878_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___y_2878_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2881_ = v___y_2878_;
v_isShared_2882_ = v_isSharedCheck_2889_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___y_2878_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2889_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
if (lean_obj_tag(v_a_2879_) == 0)
{
lean_object* v_a_2883_; lean_object* v___x_2885_; 
v_a_2883_ = lean_ctor_get(v_a_2879_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v_a_2879_, 1);
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 0, v_a_2883_);
v___x_2885_ = v___x_2881_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2883_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
else
{
lean_object* v_a_2887_; 
lean_del_object(v___x_2881_);
v_a_2887_ = lean_ctor_get(v_a_2879_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v_a_2879_, 1);
v_a_2875_ = v_a_2887_;
goto _start;
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
v_a_2890_ = lean_ctor_get(v___y_2878_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___y_2878_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___y_2878_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___y_2878_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
v_resetjp_2900_:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v___x_2903_ = lean_unsigned_to_nat(1u);
v___x_2904_ = lean_nat_add(v_snd_2899_, v___x_2903_);
v___x_2905_ = lean_array_get_size(v_items_2872_);
v___x_2906_ = lean_nat_dec_lt(v___x_2904_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2908_; 
lean_dec(v___x_2904_);
if (v_isShared_2902_ == 0)
{
v___x_2908_ = v___x_2901_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v_snd_2899_);
v___x_2908_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
}
else
{
lean_object* v___x_2911_; lean_object* v___f_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2911_ = lean_box(0);
lean_inc(v_snd_2899_);
v___f_2912_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2912_, 0, v_snd_2899_);
v___x_2913_ = lean_array_get_borrowed(v___x_2911_, v_items_2872_, v_snd_2899_);
v___x_2914_ = lean_array_get(v___x_2911_, v_items_2872_, v___x_2904_);
lean_dec(v___x_2904_);
if (lean_obj_tag(v___x_2913_) == 3)
{
if (lean_obj_tag(v___x_2914_) == 7)
{
double v_n_2915_; lean_object* v_items_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2946_; 
lean_del_object(v___x_2901_);
v_n_2915_ = lean_ctor_get_float(v___x_2913_, 0);
v_items_2916_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2918_ = v___x_2914_;
v_isShared_2919_ = v_isSharedCheck_2946_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_items_2916_);
lean_dec(v___x_2914_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2946_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
uint64_t v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v___x_2920_ = lean_float_to_uint64(v_n_2915_);
v___x_2921_ = lean_uint64_to_nat(v___x_2920_);
v___x_2922_ = lean_array_get_size(v___x_2873_);
v___x_2923_ = lean_nat_dec_lt(v___x_2921_, v___x_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
lean_dec(v___x_2921_);
lean_del_object(v___x_2918_);
lean_dec_ref(v_items_2916_);
lean_dec(v_snd_2899_);
v___x_2924_ = lean_box(0);
v___x_2925_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2912_, v_fst_2898_, v___x_2924_);
v___y_2878_ = v___x_2925_;
goto v___jp_2877_;
}
else
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_array_fget_borrowed(v___x_2873_, v___x_2921_);
lean_dec(v___x_2921_);
if (lean_obj_tag(v___x_2926_) == 1)
{
lean_object* v_attrs_2927_; lean_object* v___x_2928_; 
lean_del_object(v___x_2918_);
lean_dec_ref(v___f_2912_);
v_attrs_2927_ = lean_ctor_get(v___x_2926_, 3);
v___x_2928_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_s_2874_, v_attrs_2927_);
if (lean_obj_tag(v___x_2928_) == 1)
{
lean_object* v_val_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v_val_2929_ = lean_ctor_get(v___x_2928_, 0);
lean_inc(v_val_2929_);
lean_dec_ref_known(v___x_2928_, 1);
v___x_2930_ = lean_array_to_list(v_items_2916_);
v___x_2931_ = lean_box(0);
v___x_2932_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_2930_, v___x_2931_);
v___x_2933_ = lean_apply_1(v_val_2929_, v___x_2932_);
if (lean_obj_tag(v___x_2933_) == 1)
{
lean_object* v_val_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_val_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_val_2934_);
lean_dec_ref_known(v___x_2933_, 1);
v___x_2935_ = lean_array_push(v_fst_2898_, v_val_2934_);
v___x_2936_ = lean_box(0);
v___x_2937_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2899_, v___x_2936_, v___x_2935_);
lean_dec(v_snd_2899_);
v___y_2878_ = v___x_2937_;
goto v___jp_2877_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec(v___x_2933_);
v___x_2938_ = lean_box(0);
v___x_2939_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2899_, v___x_2938_, v_fst_2898_);
lean_dec(v_snd_2899_);
v___y_2878_ = v___x_2939_;
goto v___jp_2877_;
}
}
else
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
lean_dec(v___x_2928_);
lean_dec_ref(v_items_2916_);
v___x_2940_ = lean_box(0);
v___x_2941_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2899_, v___x_2940_, v_fst_2898_);
lean_dec(v_snd_2899_);
v___y_2878_ = v___x_2941_;
goto v___jp_2877_;
}
}
else
{
lean_object* v___x_2943_; 
lean_dec_ref(v_items_2916_);
lean_dec(v_snd_2899_);
lean_inc(v___x_2926_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set_tag(v___x_2918_, 1);
lean_ctor_set(v___x_2918_, 0, v___x_2926_);
v___x_2943_ = v___x_2918_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2926_);
v___x_2943_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2944_; 
v___x_2944_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2912_, v_fst_2898_, v___x_2943_);
lean_dec_ref(v___x_2943_);
v___y_2878_ = v___x_2944_;
goto v___jp_2877_;
}
}
}
}
}
else
{
lean_object* v___x_2948_; 
lean_dec(v_snd_2899_);
lean_inc_ref(v___x_2913_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 1, v___x_2914_);
lean_ctor_set(v___x_2901_, 0, v___x_2913_);
v___x_2948_ = v___x_2901_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v___x_2914_);
v___x_2948_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
lean_object* v___x_2949_; 
v___x_2949_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2912_, v_fst_2898_, v___x_2948_);
lean_dec_ref(v___x_2948_);
v___y_2878_ = v___x_2949_;
goto v___jp_2877_;
}
}
}
else
{
lean_object* v___x_2952_; 
lean_dec(v_snd_2899_);
lean_inc(v___x_2913_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 1, v___x_2914_);
lean_ctor_set(v___x_2901_, 0, v___x_2913_);
v___x_2952_ = v___x_2901_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2954_, 1, v___x_2914_);
v___x_2952_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
lean_object* v___x_2953_; 
v___x_2953_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2912_, v_fst_2898_, v___x_2952_);
lean_dec_ref(v___x_2952_);
v___y_2878_ = v___x_2953_;
goto v___jp_2877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_2956_, lean_object* v___x_2957_, lean_object* v_s_2958_, lean_object* v_a_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_2956_, v___x_2957_, v_s_2958_, v_a_2959_);
lean_dec_ref(v_s_2958_);
lean_dec_ref(v___x_2957_);
lean_dec_ref(v_items_2956_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_2962_, lean_object* v_as_2963_, size_t v_sz_2964_, size_t v_i_2965_, lean_object* v_b_2966_){
_start:
{
uint8_t v___x_2968_; 
v___x_2968_ = lean_usize_dec_lt(v_i_2965_, v_sz_2964_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; 
lean_dec_ref(v_c_2962_);
v___x_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2969_, 0, v_b_2966_);
return v___x_2969_;
}
else
{
lean_object* v___x_2970_; lean_object* v_a_2971_; lean_object* v___x_2972_; 
v___x_2970_ = lean_box(0);
v_a_2971_ = lean_array_uget_borrowed(v_as_2963_, v_i_2965_);
lean_inc(v_a_2971_);
lean_inc_ref(v_c_2962_);
v___x_2972_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_2962_, v_a_2971_);
if (lean_obj_tag(v___x_2972_) == 0)
{
size_t v___x_2973_; size_t v___x_2974_; 
lean_dec_ref_known(v___x_2972_, 1);
v___x_2973_ = ((size_t)1ULL);
v___x_2974_ = lean_usize_add(v_i_2965_, v___x_2973_);
v_i_2965_ = v___x_2974_;
v_b_2966_ = v___x_2970_;
goto _start;
}
else
{
lean_dec_ref(v_c_2962_);
return v___x_2972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_2976_, lean_object* v_as_2977_, lean_object* v_sz_2978_, lean_object* v_i_2979_, lean_object* v_b_2980_, lean_object* v___y_2981_){
_start:
{
size_t v_sz_boxed_2982_; size_t v_i_boxed_2983_; lean_object* v_res_2984_; 
v_sz_boxed_2982_ = lean_unbox_usize(v_sz_2978_);
lean_dec(v_sz_2978_);
v_i_boxed_2983_ = lean_unbox_usize(v_i_2979_);
lean_dec(v_i_2979_);
v_res_2984_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_2976_, v_as_2977_, v_sz_boxed_2982_, v_i_boxed_2983_, v_b_2980_);
lean_dec_ref(v_as_2977_);
return v_res_2984_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = lean_unsigned_to_nat(0u);
v___x_2986_ = lean_nat_to_int(v___x_2985_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_2995_, size_t v_i_2996_, lean_object* v_bs_2997_){
_start:
{
uint8_t v___x_2998_; 
v___x_2998_ = lean_usize_dec_lt(v_i_2996_, v_sz_2995_);
if (v___x_2998_ == 0)
{
lean_object* v___x_2999_; 
v___x_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2999_, 0, v_bs_2997_);
return v___x_2999_;
}
else
{
lean_object* v_v_3000_; lean_object* v___x_3001_; lean_object* v_bs_x27_3002_; lean_object* v_a_3004_; 
v_v_3000_ = lean_array_uget(v_bs_2997_, v_i_2996_);
v___x_3001_ = lean_unsigned_to_nat(0u);
v_bs_x27_3002_ = lean_array_uset(v_bs_2997_, v_i_2996_, v___x_3001_);
switch(lean_obj_tag(v_v_3000_))
{
case 3:
{
double v_n_3013_; lean_object* v___x_3014_; 
v_n_3013_ = lean_ctor_get_float(v_v_3000_, 0);
lean_dec_ref_known(v_v_3000_, 0);
v___x_3014_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3013_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v___x_3015_; 
lean_dec_ref(v_bs_x27_3002_);
v___x_3015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3015_;
}
else
{
lean_object* v_val_3016_; 
v_val_3016_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_val_3016_);
lean_dec_ref_known(v___x_3014_, 1);
v_a_3004_ = v_val_3016_;
goto v___jp_3003_;
}
}
case 5:
{
lean_object* v_i_3017_; 
v_i_3017_ = lean_ctor_get(v_v_3000_, 0);
lean_inc(v_i_3017_);
lean_dec_ref_known(v_v_3000_, 1);
v_a_3004_ = v_i_3017_;
goto v___jp_3003_;
}
default: 
{
lean_object* v___x_3018_; 
lean_dec_ref(v_bs_x27_3002_);
lean_dec(v_v_3000_);
v___x_3018_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3018_;
}
}
v___jp_3003_:
{
lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3005_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3006_ = lean_int_dec_le(v___x_3005_, v_a_3004_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; 
lean_dec(v_a_3004_);
lean_dec_ref(v_bs_x27_3002_);
v___x_3007_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3007_;
}
else
{
lean_object* v___x_3008_; size_t v___x_3009_; size_t v___x_3010_; lean_object* v___x_3011_; 
v___x_3008_ = l_Int_toNat(v_a_3004_);
lean_dec(v_a_3004_);
v___x_3009_ = ((size_t)1ULL);
v___x_3010_ = lean_usize_add(v_i_2996_, v___x_3009_);
v___x_3011_ = lean_array_uset(v_bs_x27_3002_, v_i_2996_, v___x_3008_);
v_i_2996_ = v___x_3010_;
v_bs_2997_ = v___x_3011_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3019_, lean_object* v_i_3020_, lean_object* v_bs_3021_){
_start:
{
size_t v_sz_boxed_3022_; size_t v_i_boxed_3023_; lean_object* v_res_3024_; 
v_sz_boxed_3022_ = lean_unbox_usize(v_sz_3019_);
lean_dec(v_sz_3019_);
v_i_boxed_3023_ = lean_unbox_usize(v_i_3020_);
lean_dec(v_i_3020_);
v_res_3024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3022_, v_i_boxed_3023_, v_bs_3021_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3030_, lean_object* v_args_3031_){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; uint8_t v___x_3041_; 
v___x_3039_ = lean_array_get_size(v_args_3031_);
v___x_3040_ = lean_unsigned_to_nat(3u);
v___x_3041_ = lean_nat_dec_eq(v___x_3039_, v___x_3040_);
if (v___x_3041_ == 0)
{
lean_dec_ref(v_c_3030_);
goto v___jp_3033_;
}
else
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_unsigned_to_nat(1u);
v___x_3043_ = lean_array_fget_borrowed(v_args_3031_, v___x_3042_);
if (lean_obj_tag(v___x_3043_) == 4)
{
lean_object* v_s_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_s_3044_ = lean_ctor_get(v___x_3043_, 0);
v___x_3045_ = lean_unsigned_to_nat(2u);
v___x_3046_ = lean_array_fget_borrowed(v_args_3031_, v___x_3045_);
if (lean_obj_tag(v___x_3046_) == 7)
{
lean_object* v_items_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v_items_3047_ = lean_ctor_get(v___x_3046_, 0);
v___x_3048_ = lean_unsigned_to_nat(0u);
v___x_3049_ = lean_array_fget_borrowed(v_args_3031_, v___x_3048_);
if (lean_obj_tag(v___x_3049_) == 7)
{
lean_object* v_items_3050_; size_t v_sz_3051_; size_t v___x_3052_; lean_object* v___x_3053_; 
v_items_3050_ = lean_ctor_get(v___x_3049_, 0);
v_sz_3051_ = lean_array_size(v_items_3050_);
v___x_3052_ = ((size_t)0ULL);
lean_inc_ref(v_items_3050_);
v___x_3053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3051_, v___x_3052_, v_items_3050_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_dec_ref_known(v___x_3053_, 1);
lean_dec_ref(v_c_3030_);
goto v___jp_3036_;
}
else
{
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_dec_ref_known(v___x_3053_, 1);
lean_dec_ref(v_c_3030_);
goto v___jp_3036_;
}
else
{
lean_object* v_a_3054_; lean_object* v_ref_3055_; lean_object* v___x_3056_; lean_object* v_live_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v_model_3062_; lean_object* v_live_3063_; lean_object* v_next_3064_; lean_object* v_tables_3065_; uint8_t v_dirty_3066_; uint8_t v_scheduled_3067_; lean_object* v_queue_3068_; uint8_t v_busy_3069_; lean_object* v_subs_3070_; lean_object* v_handlers_3071_; lean_object* v_nextSub_3072_; lean_object* v_touched_3073_; lean_object* v_ports_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3117_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref_known(v___x_3053_, 1);
v_ref_3055_ = lean_ctor_get(v_c_3030_, 1);
v___x_3056_ = lean_st_ref_get(v_ref_3055_);
v_live_3057_ = lean_ctor_get(v___x_3056_, 1);
lean_inc(v_live_3057_);
lean_dec(v___x_3056_);
v___x_3058_ = lean_array_to_list(v_a_3054_);
v___x_3059_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3060_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3057_, v___x_3058_, v___x_3059_);
v___x_3061_ = lean_st_ref_take(v_ref_3055_);
v_model_3062_ = lean_ctor_get(v___x_3061_, 0);
v_live_3063_ = lean_ctor_get(v___x_3061_, 1);
v_next_3064_ = lean_ctor_get(v___x_3061_, 2);
v_tables_3065_ = lean_ctor_get(v___x_3061_, 3);
v_dirty_3066_ = lean_ctor_get_uint8(v___x_3061_, sizeof(void*)*10);
v_scheduled_3067_ = lean_ctor_get_uint8(v___x_3061_, sizeof(void*)*10 + 1);
v_queue_3068_ = lean_ctor_get(v___x_3061_, 4);
v_busy_3069_ = lean_ctor_get_uint8(v___x_3061_, sizeof(void*)*10 + 2);
v_subs_3070_ = lean_ctor_get(v___x_3061_, 5);
v_handlers_3071_ = lean_ctor_get(v___x_3061_, 6);
v_nextSub_3072_ = lean_ctor_get(v___x_3061_, 7);
v_touched_3073_ = lean_ctor_get(v___x_3061_, 8);
v_ports_3074_ = lean_ctor_get(v___x_3061_, 9);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3076_ = v___x_3061_;
v_isShared_3077_ = v_isSharedCheck_3117_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_ports_3074_);
lean_inc(v_touched_3073_);
lean_inc(v_nextSub_3072_);
lean_inc(v_handlers_3071_);
lean_inc(v_subs_3070_);
lean_inc(v_queue_3068_);
lean_inc(v_tables_3065_);
lean_inc(v_next_3064_);
lean_inc(v_live_3063_);
lean_inc(v_model_3062_);
lean_dec(v___x_3061_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3117_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = lean_array_push(v_touched_3073_, v___x_3058_);
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 8, v___x_3078_);
v___x_3080_ = v___x_3076_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_model_3062_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v_live_3063_);
lean_ctor_set(v_reuseFailAlloc_3116_, 2, v_next_3064_);
lean_ctor_set(v_reuseFailAlloc_3116_, 3, v_tables_3065_);
lean_ctor_set(v_reuseFailAlloc_3116_, 4, v_queue_3068_);
lean_ctor_set(v_reuseFailAlloc_3116_, 5, v_subs_3070_);
lean_ctor_set(v_reuseFailAlloc_3116_, 6, v_handlers_3071_);
lean_ctor_set(v_reuseFailAlloc_3116_, 7, v_nextSub_3072_);
lean_ctor_set(v_reuseFailAlloc_3116_, 8, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3116_, 9, v_ports_3074_);
lean_ctor_set_uint8(v_reuseFailAlloc_3116_, sizeof(void*)*10, v_dirty_3066_);
lean_ctor_set_uint8(v_reuseFailAlloc_3116_, sizeof(void*)*10 + 1, v_scheduled_3067_);
lean_ctor_set_uint8(v_reuseFailAlloc_3116_, sizeof(void*)*10 + 2, v_busy_3069_);
v___x_3080_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3081_ = lean_st_ref_put(v_ref_3055_, v___x_3080_);
v___x_3082_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_3083_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3047_, v___x_3060_, v_s_3044_, v___x_3082_);
lean_dec_ref(v___x_3060_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v_fst_3085_; lean_object* v___x_3086_; size_t v_sz_3087_; lean_object* v___x_3088_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v_fst_3085_ = lean_ctor_get(v_a_3084_, 0);
lean_inc(v_fst_3085_);
lean_dec(v_a_3084_);
v___x_3086_ = lean_box(0);
v_sz_3087_ = lean_array_size(v_fst_3085_);
lean_inc_ref(v_c_3030_);
v___x_3088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3030_, v_fst_3085_, v_sz_3087_, v___x_3052_, v___x_3086_);
lean_dec(v_fst_3085_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v___x_3089_; lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3099_; 
lean_dec_ref_known(v___x_3088_, 1);
v___x_3089_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3030_);
lean_dec_ref(v_c_3030_);
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3092_ = v___x_3089_;
v_isShared_3093_ = v_isSharedCheck_3099_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3089_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3099_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3094_; uint8_t v___x_3095_; lean_object* v___x_3097_; 
v___x_3094_ = lean_alloc_ctor(2, 0, 1);
v___x_3095_ = lean_unbox(v_a_3090_);
lean_dec(v_a_3090_);
lean_ctor_set_uint8(v___x_3094_, 0, v___x_3095_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 0, v___x_3094_);
v___x_3097_ = v___x_3092_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_3094_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v_c_3030_);
v_a_3100_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3088_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3088_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v_c_3030_);
v_a_3108_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3083_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3083_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
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
lean_dec_ref(v_c_3030_);
goto v___jp_3036_;
}
}
else
{
lean_dec_ref(v_c_3030_);
goto v___jp_3033_;
}
}
else
{
lean_dec_ref(v_c_3030_);
goto v___jp_3033_;
}
}
v___jp_3033_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
return v___x_3035_;
}
v___jp_3036_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3118_, lean_object* v_args_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3118_, v_args_3119_);
lean_dec_ref(v_args_3119_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3122_, lean_object* v_Model_3123_, lean_object* v_Msg_3124_, lean_object* v_c_3125_, lean_object* v_args_3126_){
_start:
{
lean_object* v___x_3128_; 
v___x_3128_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3125_, v_args_3126_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3129_, lean_object* v_Model_3130_, lean_object* v_Msg_3131_, lean_object* v_c_3132_, lean_object* v_args_3133_, lean_object* v_a_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3129_, v_Model_3130_, v_Msg_3131_, v_c_3132_, v_args_3133_);
lean_dec_ref(v_args_3133_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3136_, lean_object* v_items_3137_, lean_object* v___x_3138_, lean_object* v_s_3139_, lean_object* v_inst_3140_, lean_object* v_a_3141_){
_start:
{
lean_object* v___x_3143_; 
v___x_3143_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3137_, v___x_3138_, v_s_3139_, v_a_3141_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3144_, lean_object* v_items_3145_, lean_object* v___x_3146_, lean_object* v_s_3147_, lean_object* v_inst_3148_, lean_object* v_a_3149_, lean_object* v___y_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3144_, v_items_3145_, v___x_3146_, v_s_3147_, v_inst_3148_, v_a_3149_);
lean_dec_ref(v_s_3147_);
lean_dec_ref(v___x_3146_);
lean_dec_ref(v_items_3145_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3152_, lean_object* v_Flags_3153_, lean_object* v_Model_3154_, lean_object* v_c_3155_, lean_object* v_as_3156_, size_t v_sz_3157_, size_t v_i_3158_, lean_object* v_b_3159_){
_start:
{
lean_object* v___x_3161_; 
v___x_3161_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3155_, v_as_3156_, v_sz_3157_, v_i_3158_, v_b_3159_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3162_, lean_object* v_Flags_3163_, lean_object* v_Model_3164_, lean_object* v_c_3165_, lean_object* v_as_3166_, lean_object* v_sz_3167_, lean_object* v_i_3168_, lean_object* v_b_3169_, lean_object* v___y_3170_){
_start:
{
size_t v_sz_boxed_3171_; size_t v_i_boxed_3172_; lean_object* v_res_3173_; 
v_sz_boxed_3171_ = lean_unbox_usize(v_sz_3167_);
lean_dec(v_sz_3167_);
v_i_boxed_3172_ = lean_unbox_usize(v_i_3168_);
lean_dec(v_i_3168_);
v_res_3173_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3162_, v_Flags_3163_, v_Model_3164_, v_c_3165_, v_as_3166_, v_sz_boxed_3171_, v_i_boxed_3172_, v_b_3169_);
lean_dec_ref(v_as_3166_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3174_, lean_object* v_c_3175_, lean_object* v_as_x27_3176_, lean_object* v_b_3177_){
_start:
{
if (lean_obj_tag(v_as_x27_3176_) == 0)
{
lean_object* v___x_3179_; 
lean_dec_ref(v_c_3175_);
lean_dec_ref(v___y_3174_);
v___x_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3179_, 0, v_b_3177_);
return v___x_3179_;
}
else
{
lean_object* v_head_3180_; lean_object* v_tail_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v_head_3180_ = lean_ctor_get(v_as_x27_3176_, 0);
v_tail_3181_ = lean_ctor_get(v_as_x27_3176_, 1);
v___x_3182_ = lean_box(0);
lean_inc(v_head_3180_);
lean_inc_ref(v___y_3174_);
v___x_3183_ = lean_apply_1(v_head_3180_, v___y_3174_);
if (lean_obj_tag(v___x_3183_) == 1)
{
lean_object* v_val_3184_; lean_object* v___x_3185_; 
v_val_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc(v_val_3184_);
lean_dec_ref_known(v___x_3183_, 1);
lean_inc_ref(v_c_3175_);
v___x_3185_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3175_, v_val_3184_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_dec_ref_known(v___x_3185_, 1);
v_as_x27_3176_ = v_tail_3181_;
v_b_3177_ = v___x_3182_;
goto _start;
}
else
{
lean_dec_ref(v_c_3175_);
lean_dec_ref(v___y_3174_);
return v___x_3185_;
}
}
else
{
lean_dec(v___x_3183_);
v_as_x27_3176_ = v_tail_3181_;
v_b_3177_ = v___x_3182_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object* v___y_3188_, lean_object* v_c_3189_, lean_object* v_as_x27_3190_, lean_object* v_b_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3188_, v_c_3189_, v_as_x27_3190_, v_b_3191_);
lean_dec(v_as_x27_3190_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3194_, lean_object* v_args_3195_){
_start:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; uint8_t v___x_3202_; 
v___x_3200_ = lean_unsigned_to_nat(0u);
v___x_3201_ = lean_array_get_size(v_args_3195_);
v___x_3202_ = lean_nat_dec_lt(v___x_3200_, v___x_3201_);
if (v___x_3202_ == 0)
{
lean_dec_ref(v_c_3194_);
goto v___jp_3197_;
}
else
{
lean_object* v___x_3203_; 
v___x_3203_ = lean_array_fget_borrowed(v_args_3195_, v___x_3200_);
if (lean_obj_tag(v___x_3203_) == 3)
{
double v_n_3204_; lean_object* v___y_3206_; lean_object* v___x_3237_; uint8_t v___x_3238_; 
v_n_3204_ = lean_ctor_get_float(v___x_3203_, 0);
v___x_3237_ = lean_unsigned_to_nat(1u);
v___x_3238_ = lean_nat_dec_lt(v___x_3237_, v___x_3201_);
if (v___x_3238_ == 0)
{
goto v___jp_3235_;
}
else
{
lean_object* v___x_3239_; 
v___x_3239_ = lean_array_fget_borrowed(v_args_3195_, v___x_3237_);
if (lean_obj_tag(v___x_3239_) == 7)
{
lean_object* v_items_3240_; 
v_items_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc_ref(v_items_3240_);
v___y_3206_ = v_items_3240_;
goto v___jp_3205_;
}
else
{
goto v___jp_3235_;
}
}
v___jp_3205_:
{
lean_object* v_ref_3207_; lean_object* v___x_3208_; lean_object* v_handlers_3209_; uint64_t v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v_ref_3207_ = lean_ctor_get(v_c_3194_, 1);
v___x_3208_ = lean_st_ref_get(v_ref_3207_);
v_handlers_3209_ = lean_ctor_get(v___x_3208_, 6);
lean_inc_ref(v_handlers_3209_);
lean_dec(v___x_3208_);
v___x_3210_ = lean_float_to_uint64(v_n_3204_);
v___x_3211_ = lean_uint64_to_nat(v___x_3210_);
v___x_3212_ = lean_box(0);
v___x_3213_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3209_, v___x_3211_, v___x_3212_);
lean_dec(v___x_3211_);
lean_dec_ref(v_handlers_3209_);
v___x_3214_ = lean_box(0);
lean_inc_ref(v_c_3194_);
v___x_3215_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3206_, v_c_3194_, v___x_3213_, v___x_3214_);
lean_dec(v___x_3213_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v___x_3216_; lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3226_; 
lean_dec_ref_known(v___x_3215_, 1);
v___x_3216_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3194_);
lean_dec_ref(v_c_3194_);
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3219_ = v___x_3216_;
v_isShared_3220_ = v_isSharedCheck_3226_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3226_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; uint8_t v___x_3222_; lean_object* v___x_3224_; 
v___x_3221_ = lean_alloc_ctor(2, 0, 1);
v___x_3222_ = lean_unbox(v_a_3217_);
lean_dec(v_a_3217_);
lean_ctor_set_uint8(v___x_3221_, 0, v___x_3222_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v___x_3221_);
v___x_3224_ = v___x_3219_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3221_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v_c_3194_);
v_a_3227_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3215_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3215_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
v___jp_3235_:
{
lean_object* v___x_3236_; 
v___x_3236_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3206_ = v___x_3236_;
goto v___jp_3205_;
}
}
else
{
lean_dec_ref(v_c_3194_);
goto v___jp_3197_;
}
}
v___jp_3197_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3241_, lean_object* v_args_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3241_, v_args_3242_);
lean_dec_ref(v_args_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3245_, lean_object* v_Model_3246_, lean_object* v_Msg_3247_, lean_object* v_c_3248_, lean_object* v_args_3249_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3248_, v_args_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3252_, lean_object* v_Model_3253_, lean_object* v_Msg_3254_, lean_object* v_c_3255_, lean_object* v_args_3256_, lean_object* v_a_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lasm_UI_Runtime_onSub(v_Flags_3252_, v_Model_3253_, v_Msg_3254_, v_c_3255_, v_args_3256_);
lean_dec_ref(v_args_3256_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3259_, lean_object* v___y_3260_, lean_object* v_Flags_3261_, lean_object* v_Model_3262_, lean_object* v_c_3263_, lean_object* v_as_3264_, lean_object* v_as_x27_3265_, lean_object* v_b_3266_, lean_object* v_a_3267_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3260_, v_c_3263_, v_as_x27_3265_, v_b_3266_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object* v_Msg_3270_, lean_object* v___y_3271_, lean_object* v_Flags_3272_, lean_object* v_Model_3273_, lean_object* v_c_3274_, lean_object* v_as_3275_, lean_object* v_as_x27_3276_, lean_object* v_b_3277_, lean_object* v_a_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(v_Msg_3270_, v___y_3271_, v_Flags_3272_, v_Model_3273_, v_c_3274_, v_as_3275_, v_as_x27_3276_, v_b_3277_, v_a_3278_);
lean_dec(v_as_x27_3276_);
lean_dec(v_as_3275_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3281_, lean_object* v_onUrlChange_3282_, lean_object* v___x_3283_, lean_object* v_args_3284_){
_start:
{
lean_object* v___y_3299_; lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = lean_array_get_size(v_args_3284_);
v___x_3316_ = lean_nat_dec_lt(v___x_3283_, v___x_3315_);
if (v___x_3316_ == 0)
{
lean_object* v___x_3317_; 
v___x_3317_ = lean_box(0);
v___y_3299_ = v___x_3317_;
goto v___jp_3298_;
}
else
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_array_fget_borrowed(v_args_3284_, v___x_3283_);
lean_inc(v___x_3318_);
v___x_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
v___y_3299_ = v___x_3319_;
goto v___jp_3298_;
}
v___jp_3286_:
{
lean_object* v___x_3287_; lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3297_; 
v___x_3287_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3281_);
lean_dec_ref(v___x_3281_);
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3290_ = v___x_3287_;
v_isShared_3291_ = v_isSharedCheck_3297_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3287_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3297_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3292_; uint8_t v___x_3293_; lean_object* v___x_3295_; 
v___x_3292_ = lean_alloc_ctor(2, 0, 1);
v___x_3293_ = lean_unbox(v_a_3288_);
lean_dec(v_a_3288_);
lean_ctor_set_uint8(v___x_3292_, 0, v___x_3293_);
if (v_isShared_3291_ == 0)
{
lean_ctor_set(v___x_3290_, 0, v___x_3292_);
v___x_3295_ = v___x_3290_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3292_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
v___jp_3298_:
{
if (lean_obj_tag(v_onUrlChange_3282_) == 1)
{
if (lean_obj_tag(v___y_3299_) == 1)
{
lean_object* v_val_3300_; 
v_val_3300_ = lean_ctor_get(v___y_3299_, 0);
lean_inc(v_val_3300_);
lean_dec_ref_known(v___y_3299_, 1);
if (lean_obj_tag(v_val_3300_) == 4)
{
lean_object* v_val_3301_; lean_object* v_s_3302_; lean_object* v___x_3303_; 
v_val_3301_ = lean_ctor_get(v_onUrlChange_3282_, 0);
lean_inc(v_val_3301_);
lean_dec_ref_known(v_onUrlChange_3282_, 1);
v_s_3302_ = lean_ctor_get(v_val_3300_, 0);
lean_inc_ref(v_s_3302_);
lean_dec_ref_known(v_val_3300_, 1);
v___x_3303_ = l_Lasm_UI_Url_parse(v_s_3302_);
if (lean_obj_tag(v___x_3303_) == 1)
{
lean_object* v_val_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v_val_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_val_3304_);
lean_dec_ref_known(v___x_3303_, 1);
v___x_3305_ = lean_apply_1(v_val_3301_, v_val_3304_);
lean_inc_ref(v___x_3281_);
v___x_3306_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3281_, v___x_3305_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_dec_ref_known(v___x_3306_, 1);
goto v___jp_3286_;
}
else
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3314_; 
lean_dec_ref(v___x_3281_);
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3309_ = v___x_3306_;
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v___x_3306_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3314_;
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
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3307_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
else
{
lean_dec(v___x_3303_);
lean_dec(v_val_3301_);
goto v___jp_3286_;
}
}
else
{
lean_dec(v_val_3300_);
lean_dec_ref_known(v_onUrlChange_3282_, 1);
goto v___jp_3286_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3282_, 1);
lean_dec(v___y_3299_);
goto v___jp_3286_;
}
}
else
{
lean_dec(v___y_3299_);
lean_dec(v_onUrlChange_3282_);
goto v___jp_3286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3320_, lean_object* v_onUrlChange_3321_, lean_object* v___x_3322_, lean_object* v_args_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3320_, v_onUrlChange_3321_, v___x_3322_, v_args_3323_);
lean_dec_ref(v_args_3323_);
lean_dec(v___x_3322_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v___x_3326_, lean_object* v_x_3327_){
_start:
{
lean_object* v___x_3329_; lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3338_; 
v___x_3329_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3326_);
v_a_3330_ = lean_ctor_get(v___x_3329_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3329_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3332_ = v___x_3329_;
v_isShared_3333_ = v_isSharedCheck_3338_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3329_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3338_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3334_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3334_, 0, v_a_3330_);
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 0, v___x_3334_);
v___x_3336_ = v___x_3332_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3334_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v___x_3339_, lean_object* v_x_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lasm_UI_App_run___redArg___lam__1(v___x_3339_, v_x_3340_);
lean_dec_ref(v_x_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3343_, lean_object* v___x_3344_, lean_object* v_a_3345_, lean_object* v_x_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v___y_3350_; lean_object* v___x_3368_; 
v___x_3368_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3344_, v_a_3345_);
if (lean_obj_tag(v___x_3368_) == 0)
{
v___y_3350_ = v___x_3368_;
goto v___jp_3349_;
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3368_, 1);
v___x_3370_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3371_ = l_Lasm_UI_Runtime_report(v___x_3370_, v_a_3369_);
v___y_3350_ = v___x_3371_;
goto v___jp_3349_;
}
v___jp_3349_:
{
if (lean_obj_tag(v___y_3350_) == 0)
{
lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3358_; 
v_isSharedCheck_3358_ = !lean_is_exclusive(v___y_3350_);
if (v_isSharedCheck_3358_ == 0)
{
lean_object* v_unused_3359_; 
v_unused_3359_ = lean_ctor_get(v___y_3350_, 0);
lean_dec(v_unused_3359_);
v___x_3352_ = v___y_3350_;
v_isShared_3353_ = v_isSharedCheck_3358_;
goto v_resetjp_3351_;
}
else
{
lean_dec(v___y_3350_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3358_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3354_; lean_object* v___x_3356_; 
v___x_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3343_);
if (v_isShared_3353_ == 0)
{
lean_ctor_set(v___x_3352_, 0, v___x_3354_);
v___x_3356_ = v___x_3352_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v___x_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
v_a_3360_ = lean_ctor_get(v___y_3350_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___y_3350_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___y_3350_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___y_3350_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3372_, lean_object* v___x_3373_, lean_object* v_a_3374_, lean_object* v_x_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3372_, v___x_3373_, v_a_3374_, v_x_3375_, v___y_3376_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3379_, lean_object* v___x_3380_, lean_object* v_d_3381_){
_start:
{
lean_object* v___x_3383_; 
v___x_3383_ = lean_apply_1(v_val_3379_, v_d_3381_);
if (lean_obj_tag(v___x_3383_) == 1)
{
lean_object* v_val_3384_; lean_object* v___x_3385_; 
v_val_3384_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_val_3384_);
lean_dec_ref_known(v___x_3383_, 1);
lean_inc_ref(v___x_3380_);
v___x_3385_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3380_, v_val_3384_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v___x_3386_; 
lean_dec_ref_known(v___x_3385_, 1);
v___x_3386_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3380_);
lean_dec_ref(v___x_3380_);
return v___x_3386_;
}
else
{
lean_dec_ref(v___x_3380_);
return v___x_3385_;
}
}
else
{
lean_object* v___x_3387_; 
lean_dec(v___x_3383_);
v___x_3387_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3380_);
lean_dec_ref(v___x_3380_);
return v___x_3387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3388_, lean_object* v___x_3389_, lean_object* v_d_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3388_, v___x_3389_, v_d_3390_);
return v_res_3392_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3393_; 
v___x_3393_ = l_instMonadEIO___redArg();
return v___x_3393_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3399_ = lean_box(0);
v___x_3400_ = lean_unsigned_to_nat(16u);
v___x_3401_ = lean_mk_array(v___x_3400_, v___x_3399_);
return v___x_3401_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3402_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__6, &l_Lasm_UI_App_run___redArg___closed__6_once, _init_l_Lasm_UI_App_run___redArg___closed__6);
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
lean_ctor_set(v___x_3404_, 1, v___x_3402_);
return v___x_3404_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__8(void){
_start:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3405_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__7, &l_Lasm_UI_App_run___redArg___closed__7_once, _init_l_Lasm_UI_App_run___redArg___closed__7);
v___x_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
lean_ctor_set(v___x_3406_, 1, v___x_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3416_, lean_object* v_app_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; uint8_t v___y_3424_; lean_object* v___y_3425_; uint8_t v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3432_; lean_object* v___y_3433_; uint8_t v___y_3434_; lean_object* v___x_3524_; 
v___x_3419_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3524_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v___x_3526_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3527_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3528_ = l_Lasm_JS_Data_field(v_a_3525_, v___x_3527_);
v___x_3529_ = l_Lasm_JS_decodeAs___redArg(v_inst_3416_, v___x_3526_, v___x_3528_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3531_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; uint8_t v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; uint8_t v___y_3543_; lean_object* v___y_3544_; lean_object* v___y_3559_; lean_object* v___x_3633_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
v___x_3531_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3633_ = l_Lasm_JS_Data_field(v_a_3525_, v___x_3531_);
lean_dec(v_a_3525_);
if (lean_obj_tag(v___x_3633_) == 4)
{
lean_object* v_s_3634_; lean_object* v___x_3635_; 
v_s_3634_ = lean_ctor_get(v___x_3633_, 0);
lean_inc_ref(v_s_3634_);
lean_dec_ref_known(v___x_3633_, 1);
v___x_3635_ = l_Lasm_UI_Url_parse(v_s_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
goto v___jp_3631_;
}
else
{
lean_object* v_val_3636_; 
v_val_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_val_3636_);
lean_dec_ref_known(v___x_3635_, 1);
v___y_3559_ = v_val_3636_;
goto v___jp_3558_;
}
}
else
{
lean_dec(v___x_3633_);
goto v___jp_3631_;
}
v___jp_3532_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3545_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3546_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3547_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___y_3542_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3545_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3550_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___y_3535_);
lean_ctor_set(v___x_3550_, 1, v___x_3546_);
v___x_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3549_);
lean_ctor_set(v___x_3551_, 1, v___x_3550_);
v___x_3552_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3553_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3553_, 0, v___y_3539_);
lean_ctor_set(v___x_3553_, 1, v___x_3546_);
v___x_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3552_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___y_3538_);
lean_ctor_set(v___x_3555_, 1, v___x_3546_);
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3531_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
v___x_3557_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v___y_3541_) == 0)
{
lean_inc_ref(v___y_3533_);
v___y_3421_ = v___y_3533_;
v___y_3422_ = v___y_3537_;
v___y_3423_ = v___y_3536_;
v___y_3424_ = v___y_3540_;
v___y_3425_ = v___x_3554_;
v___y_3426_ = v___y_3543_;
v___y_3427_ = v___y_3534_;
v___y_3428_ = v___y_3544_;
v___y_3429_ = v___x_3557_;
v___y_3430_ = v___x_3556_;
v___y_3431_ = v___x_3551_;
v___y_3432_ = v___y_3533_;
v___y_3433_ = v___x_3548_;
v___y_3434_ = v___y_3543_;
goto v___jp_3420_;
}
else
{
lean_dec_ref_known(v___y_3541_, 1);
lean_inc_ref(v___y_3533_);
v___y_3421_ = v___y_3533_;
v___y_3422_ = v___y_3537_;
v___y_3423_ = v___y_3536_;
v___y_3424_ = v___y_3540_;
v___y_3425_ = v___x_3554_;
v___y_3426_ = v___y_3543_;
v___y_3427_ = v___y_3534_;
v___y_3428_ = v___y_3544_;
v___y_3429_ = v___x_3557_;
v___y_3430_ = v___x_3556_;
v___y_3431_ = v___x_3551_;
v___y_3432_ = v___y_3533_;
v___y_3433_ = v___x_3548_;
v___y_3434_ = v___y_3540_;
goto v___jp_3420_;
}
}
v___jp_3558_:
{
lean_object* v_init_3560_; lean_object* v_onUrlChange_3561_; lean_object* v_receive_3562_; lean_object* v___x_3563_; lean_object* v_fst_3564_; lean_object* v_snd_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3630_; 
v_init_3560_ = lean_ctor_get(v_app_3417_, 0);
v_onUrlChange_3561_ = lean_ctor_get(v_app_3417_, 4);
lean_inc(v_onUrlChange_3561_);
v_receive_3562_ = lean_ctor_get(v_app_3417_, 5);
lean_inc(v_receive_3562_);
lean_inc_ref(v_init_3560_);
v___x_3563_ = lean_apply_2(v_init_3560_, v_a_3530_, v___y_3559_);
v_fst_3564_ = lean_ctor_get(v___x_3563_, 0);
v_snd_3565_ = lean_ctor_get(v___x_3563_, 1);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3567_ = v___x_3563_;
v_isShared_3568_ = v_isSharedCheck_3630_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_snd_3565_);
lean_inc(v_fst_3564_);
lean_dec(v___x_3563_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3630_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; uint8_t v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3580_; 
v___x_3569_ = lean_box(0);
v___x_3570_ = lean_unsigned_to_nat(1u);
v___x_3571_ = lean_unsigned_to_nat(0u);
v___x_3572_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__7, &l_Lasm_UI_App_run___redArg___closed__7_once, _init_l_Lasm_UI_App_run___redArg___closed__7);
v___x_3573_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__8, &l_Lasm_UI_App_run___redArg___closed__8_once, _init_l_Lasm_UI_App_run___redArg___closed__8);
v___x_3574_ = 1;
v___x_3575_ = 0;
v___x_3576_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__9));
v___x_3577_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3577_, 0, v_fst_3564_);
lean_ctor_set(v___x_3577_, 1, v___x_3569_);
lean_ctor_set(v___x_3577_, 2, v___x_3570_);
lean_ctor_set(v___x_3577_, 3, v___x_3573_);
lean_ctor_set(v___x_3577_, 4, v___x_3576_);
lean_ctor_set(v___x_3577_, 5, v___x_3572_);
lean_ctor_set(v___x_3577_, 6, v___x_3572_);
lean_ctor_set(v___x_3577_, 7, v___x_3570_);
lean_ctor_set(v___x_3577_, 8, v___x_3576_);
lean_ctor_set(v___x_3577_, 9, v___x_3569_);
lean_ctor_set_uint8(v___x_3577_, sizeof(void*)*10, v___x_3574_);
lean_ctor_set_uint8(v___x_3577_, sizeof(void*)*10 + 1, v___x_3575_);
lean_ctor_set_uint8(v___x_3577_, sizeof(void*)*10 + 2, v___x_3575_);
v___x_3578_ = lean_st_mk_ref(v___x_3577_);
lean_inc(v___x_3578_);
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 1, v___x_3578_);
lean_ctor_set(v___x_3567_, 0, v_app_3417_);
v___x_3580_ = v___x_3567_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_app_3417_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___f_3581_; lean_object* v___f_3582_; lean_object* v___x_3583_; 
lean_inc(v_onUrlChange_3561_);
lean_inc_ref_n(v___x_3580_, 2);
v___f_3581_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3581_, 0, v___x_3580_);
lean_closure_set(v___f_3581_, 1, v_onUrlChange_3561_);
lean_closure_set(v___f_3581_, 2, v___x_3571_);
v___f_3582_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3582_, 0, v___x_3580_);
v___x_3583_ = l_Lasm_JS_Function_ofSyncFn(v___f_3582_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_a_3584_);
lean_dec_ref_known(v___x_3583_, 1);
lean_inc_ref(v___x_3580_);
v___x_3585_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3585_, 0, lean_box(0));
lean_closure_set(v___x_3585_, 1, lean_box(0));
lean_closure_set(v___x_3585_, 2, lean_box(0));
lean_closure_set(v___x_3585_, 3, v___x_3580_);
v___x_3586_ = l_Lasm_JS_Function_ofSyncFn(v___x_3585_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref_known(v___x_3586_, 1);
lean_inc_ref(v___x_3580_);
v___x_3588_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3588_, 0, lean_box(0));
lean_closure_set(v___x_3588_, 1, lean_box(0));
lean_closure_set(v___x_3588_, 2, lean_box(0));
lean_closure_set(v___x_3588_, 3, v___x_3580_);
v___x_3589_ = l_Lasm_JS_Function_ofSyncFn(v___x_3588_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3591_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_a_3590_);
lean_dec_ref_known(v___x_3589_, 1);
v___x_3591_ = l_Lasm_JS_Function_ofSyncFn(v___f_3581_);
if (lean_obj_tag(v___x_3591_) == 0)
{
if (lean_obj_tag(v_receive_3562_) == 1)
{
lean_object* v_a_3592_; lean_object* v_val_3593_; lean_object* v___f_3594_; lean_object* v___x_3595_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3591_, 1);
v_val_3593_ = lean_ctor_get(v_receive_3562_, 0);
lean_inc(v_val_3593_);
lean_dec_ref_known(v_receive_3562_, 1);
lean_inc_ref(v___x_3580_);
v___f_3594_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3594_, 0, v_val_3593_);
lean_closure_set(v___f_3594_, 1, v___x_3580_);
v___x_3595_ = l_Lasm_Web_App_onMessage(v___f_3594_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_dec_ref_known(v___x_3595_, 1);
v___y_3533_ = v___x_3580_;
v___y_3534_ = v___x_3578_;
v___y_3535_ = v_a_3587_;
v___y_3536_ = v___x_3570_;
v___y_3537_ = v_snd_3565_;
v___y_3538_ = v_a_3592_;
v___y_3539_ = v_a_3590_;
v___y_3540_ = v___x_3574_;
v___y_3541_ = v_onUrlChange_3561_;
v___y_3542_ = v_a_3584_;
v___y_3543_ = v___x_3575_;
v___y_3544_ = v___x_3571_;
goto v___jp_3532_;
}
else
{
lean_dec(v_a_3592_);
lean_dec(v_a_3590_);
lean_dec(v_a_3587_);
lean_dec(v_a_3584_);
lean_dec_ref(v___x_3580_);
lean_dec(v___x_3578_);
lean_dec(v_snd_3565_);
lean_dec(v_onUrlChange_3561_);
return v___x_3595_;
}
}
else
{
lean_object* v_a_3596_; 
lean_dec(v_receive_3562_);
v_a_3596_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3591_, 1);
v___y_3533_ = v___x_3580_;
v___y_3534_ = v___x_3578_;
v___y_3535_ = v_a_3587_;
v___y_3536_ = v___x_3570_;
v___y_3537_ = v_snd_3565_;
v___y_3538_ = v_a_3596_;
v___y_3539_ = v_a_3590_;
v___y_3540_ = v___x_3574_;
v___y_3541_ = v_onUrlChange_3561_;
v___y_3542_ = v_a_3584_;
v___y_3543_ = v___x_3575_;
v___y_3544_ = v___x_3571_;
goto v___jp_3532_;
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_dec(v_a_3590_);
lean_dec(v_a_3587_);
lean_dec(v_a_3584_);
lean_dec_ref(v___x_3580_);
lean_dec(v___x_3578_);
lean_dec(v_snd_3565_);
lean_dec(v_receive_3562_);
lean_dec(v_onUrlChange_3561_);
v_a_3597_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3591_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3591_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec(v_a_3587_);
lean_dec(v_a_3584_);
lean_dec_ref(v___f_3581_);
lean_dec_ref(v___x_3580_);
lean_dec(v___x_3578_);
lean_dec(v_snd_3565_);
lean_dec(v_receive_3562_);
lean_dec(v_onUrlChange_3561_);
v_a_3605_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3589_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3589_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec(v_a_3584_);
lean_dec_ref(v___f_3581_);
lean_dec_ref(v___x_3580_);
lean_dec(v___x_3578_);
lean_dec(v_snd_3565_);
lean_dec(v_receive_3562_);
lean_dec(v_onUrlChange_3561_);
v_a_3613_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3586_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3586_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
lean_dec_ref(v___f_3581_);
lean_dec_ref(v___x_3580_);
lean_dec(v___x_3578_);
lean_dec(v_snd_3565_);
lean_dec(v_receive_3562_);
lean_dec(v_onUrlChange_3561_);
v_a_3621_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3623_ = v___x_3583_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3583_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3621_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
}
}
v___jp_3631_:
{
lean_object* v___x_3632_; 
v___x_3632_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__12));
v___y_3559_ = v___x_3632_;
goto v___jp_3558_;
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
lean_dec(v_a_3525_);
lean_dec_ref(v_app_3417_);
v_a_3637_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3529_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3529_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
lean_dec_ref(v_app_3417_);
lean_dec_ref(v_inst_3416_);
v_a_3645_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3524_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3524_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
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
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
v___jp_3420_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3435_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3435_, 0, v___y_3434_);
lean_inc_ref(v___y_3429_);
v___x_3436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___y_3429_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = lean_box(0);
v___x_3438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3436_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___y_3430_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___y_3425_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___y_3431_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___y_3433_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = l_Lasm_JS_obj(v___x_3442_);
v___x_3444_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3443_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v___x_3445_; lean_object* v_a_3446_; lean_object* v___x_3447_; 
lean_dec_ref_known(v___x_3444_, 1);
lean_inc_ref(v___y_3432_);
v___x_3445_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3432_);
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref(v___x_3445_);
v___x_3447_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3446_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v___x_3448_; lean_object* v_model_3449_; lean_object* v_live_3450_; lean_object* v_next_3451_; lean_object* v_tables_3452_; uint8_t v_dirty_3453_; uint8_t v_scheduled_3454_; lean_object* v_queue_3455_; lean_object* v_subs_3456_; lean_object* v_handlers_3457_; lean_object* v_nextSub_3458_; lean_object* v_touched_3459_; lean_object* v_ports_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3523_; 
lean_dec_ref_known(v___x_3447_, 1);
v___x_3448_ = lean_st_ref_take(v___y_3427_);
v_model_3449_ = lean_ctor_get(v___x_3448_, 0);
v_live_3450_ = lean_ctor_get(v___x_3448_, 1);
v_next_3451_ = lean_ctor_get(v___x_3448_, 2);
v_tables_3452_ = lean_ctor_get(v___x_3448_, 3);
v_dirty_3453_ = lean_ctor_get_uint8(v___x_3448_, sizeof(void*)*10);
v_scheduled_3454_ = lean_ctor_get_uint8(v___x_3448_, sizeof(void*)*10 + 1);
v_queue_3455_ = lean_ctor_get(v___x_3448_, 4);
v_subs_3456_ = lean_ctor_get(v___x_3448_, 5);
v_handlers_3457_ = lean_ctor_get(v___x_3448_, 6);
v_nextSub_3458_ = lean_ctor_get(v___x_3448_, 7);
v_touched_3459_ = lean_ctor_get(v___x_3448_, 8);
v_ports_3460_ = lean_ctor_get(v___x_3448_, 9);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3462_ = v___x_3448_;
v_isShared_3463_ = v_isSharedCheck_3523_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_ports_3460_);
lean_inc(v_touched_3459_);
lean_inc(v_nextSub_3458_);
lean_inc(v_handlers_3457_);
lean_inc(v_subs_3456_);
lean_inc(v_queue_3455_);
lean_inc(v_tables_3452_);
lean_inc(v_next_3451_);
lean_inc(v_live_3450_);
lean_inc(v_model_3449_);
lean_dec(v___x_3448_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3523_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_model_3449_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v_live_3450_);
lean_ctor_set(v_reuseFailAlloc_3522_, 2, v_next_3451_);
lean_ctor_set(v_reuseFailAlloc_3522_, 3, v_tables_3452_);
lean_ctor_set(v_reuseFailAlloc_3522_, 4, v_queue_3455_);
lean_ctor_set(v_reuseFailAlloc_3522_, 5, v_subs_3456_);
lean_ctor_set(v_reuseFailAlloc_3522_, 6, v_handlers_3457_);
lean_ctor_set(v_reuseFailAlloc_3522_, 7, v_nextSub_3458_);
lean_ctor_set(v_reuseFailAlloc_3522_, 8, v_touched_3459_);
lean_ctor_set(v_reuseFailAlloc_3522_, 9, v_ports_3460_);
lean_ctor_set_uint8(v_reuseFailAlloc_3522_, sizeof(void*)*10, v_dirty_3453_);
lean_ctor_set_uint8(v_reuseFailAlloc_3522_, sizeof(void*)*10 + 1, v_scheduled_3454_);
v___x_3465_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___f_3468_; lean_object* v___x_4127__overap_3469_; lean_object* v___x_3470_; 
lean_ctor_set_uint8(v___x_3465_, sizeof(void*)*10 + 2, v___y_3424_);
v___x_3466_ = lean_st_ref_put(v___y_3427_, v___x_3465_);
v___x_3467_ = lean_box(0);
v___f_3468_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3468_, 0, v___x_3467_);
lean_closure_set(v___f_3468_, 1, v___y_3421_);
v___x_4127__overap_3469_ = l_List_forIn_x27_loop___redArg(v___x_3419_, v___f_3468_, v___y_3422_, v___x_3467_);
lean_dec(v___y_3422_);
v___x_3470_ = lean_apply_1(v___x_4127__overap_3469_, lean_box(0));
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v___x_3471_; lean_object* v_model_3472_; lean_object* v_live_3473_; lean_object* v_next_3474_; lean_object* v_tables_3475_; uint8_t v_dirty_3476_; uint8_t v_scheduled_3477_; lean_object* v_queue_3478_; lean_object* v_subs_3479_; lean_object* v_handlers_3480_; lean_object* v_nextSub_3481_; lean_object* v_touched_3482_; lean_object* v_ports_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref_known(v___x_3470_, 1);
v___x_3471_ = lean_st_ref_take(v___y_3427_);
v_model_3472_ = lean_ctor_get(v___x_3471_, 0);
v_live_3473_ = lean_ctor_get(v___x_3471_, 1);
v_next_3474_ = lean_ctor_get(v___x_3471_, 2);
v_tables_3475_ = lean_ctor_get(v___x_3471_, 3);
v_dirty_3476_ = lean_ctor_get_uint8(v___x_3471_, sizeof(void*)*10);
v_scheduled_3477_ = lean_ctor_get_uint8(v___x_3471_, sizeof(void*)*10 + 1);
v_queue_3478_ = lean_ctor_get(v___x_3471_, 4);
v_subs_3479_ = lean_ctor_get(v___x_3471_, 5);
v_handlers_3480_ = lean_ctor_get(v___x_3471_, 6);
v_nextSub_3481_ = lean_ctor_get(v___x_3471_, 7);
v_touched_3482_ = lean_ctor_get(v___x_3471_, 8);
v_ports_3483_ = lean_ctor_get(v___x_3471_, 9);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3485_ = v___x_3471_;
v_isShared_3486_ = v_isSharedCheck_3521_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_ports_3483_);
lean_inc(v_touched_3482_);
lean_inc(v_nextSub_3481_);
lean_inc(v_handlers_3480_);
lean_inc(v_subs_3479_);
lean_inc(v_queue_3478_);
lean_inc(v_tables_3475_);
lean_inc(v_next_3474_);
lean_inc(v_live_3473_);
lean_inc(v_model_3472_);
lean_dec(v___x_3471_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3521_;
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
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_model_3472_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v_live_3473_);
lean_ctor_set(v_reuseFailAlloc_3520_, 2, v_next_3474_);
lean_ctor_set(v_reuseFailAlloc_3520_, 3, v_tables_3475_);
lean_ctor_set(v_reuseFailAlloc_3520_, 4, v_queue_3478_);
lean_ctor_set(v_reuseFailAlloc_3520_, 5, v_subs_3479_);
lean_ctor_set(v_reuseFailAlloc_3520_, 6, v_handlers_3480_);
lean_ctor_set(v_reuseFailAlloc_3520_, 7, v_nextSub_3481_);
lean_ctor_set(v_reuseFailAlloc_3520_, 8, v_touched_3482_);
lean_ctor_set(v_reuseFailAlloc_3520_, 9, v_ports_3483_);
lean_ctor_set_uint8(v_reuseFailAlloc_3520_, sizeof(void*)*10, v_dirty_3476_);
lean_ctor_set_uint8(v_reuseFailAlloc_3520_, sizeof(void*)*10 + 1, v_scheduled_3477_);
v___x_3488_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v_model_3491_; lean_object* v_live_3492_; lean_object* v_next_3493_; lean_object* v_tables_3494_; uint8_t v_dirty_3495_; uint8_t v_scheduled_3496_; lean_object* v_queue_3497_; uint8_t v_busy_3498_; lean_object* v_subs_3499_; lean_object* v_handlers_3500_; lean_object* v_nextSub_3501_; lean_object* v_touched_3502_; lean_object* v_ports_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3519_; 
lean_ctor_set_uint8(v___x_3488_, sizeof(void*)*10 + 2, v___y_3426_);
v___x_3489_ = lean_st_ref_put(v___y_3427_, v___x_3488_);
v___x_3490_ = lean_st_ref_get(v___y_3427_);
v_model_3491_ = lean_ctor_get(v___x_3490_, 0);
v_live_3492_ = lean_ctor_get(v___x_3490_, 1);
v_next_3493_ = lean_ctor_get(v___x_3490_, 2);
v_tables_3494_ = lean_ctor_get(v___x_3490_, 3);
v_dirty_3495_ = lean_ctor_get_uint8(v___x_3490_, sizeof(void*)*10);
v_scheduled_3496_ = lean_ctor_get_uint8(v___x_3490_, sizeof(void*)*10 + 1);
v_queue_3497_ = lean_ctor_get(v___x_3490_, 4);
v_busy_3498_ = lean_ctor_get_uint8(v___x_3490_, sizeof(void*)*10 + 2);
v_subs_3499_ = lean_ctor_get(v___x_3490_, 5);
v_handlers_3500_ = lean_ctor_get(v___x_3490_, 6);
v_nextSub_3501_ = lean_ctor_get(v___x_3490_, 7);
v_touched_3502_ = lean_ctor_get(v___x_3490_, 8);
v_ports_3503_ = lean_ctor_get(v___x_3490_, 9);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3505_ = v___x_3490_;
v_isShared_3506_ = v_isSharedCheck_3519_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_ports_3503_);
lean_inc(v_touched_3502_);
lean_inc(v_nextSub_3501_);
lean_inc(v_handlers_3500_);
lean_inc(v_subs_3499_);
lean_inc(v_queue_3497_);
lean_inc(v_tables_3494_);
lean_inc(v_next_3493_);
lean_inc(v_live_3492_);
lean_inc(v_model_3491_);
lean_dec(v___x_3490_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3519_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; uint8_t v___x_3508_; 
v___x_3507_ = lean_array_get_size(v_queue_3497_);
v___x_3508_ = lean_nat_dec_lt(v___y_3428_, v___x_3507_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; 
lean_del_object(v___x_3505_);
lean_dec(v_ports_3503_);
lean_dec_ref(v_touched_3502_);
lean_dec(v_nextSub_3501_);
lean_dec_ref(v_handlers_3500_);
lean_dec_ref(v_subs_3499_);
lean_dec_ref(v_queue_3497_);
lean_dec_ref(v_tables_3494_);
lean_dec(v_next_3493_);
lean_dec(v_live_3492_);
lean_dec(v_model_3491_);
lean_dec(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec(v___y_3423_);
lean_inc_ref(v___y_3432_);
v___x_3509_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3432_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v___x_3510_; 
lean_dec_ref_known(v___x_3509_, 1);
v___x_3510_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3432_);
lean_dec_ref(v___y_3432_);
return v___x_3510_;
}
else
{
lean_dec_ref(v___y_3432_);
return v___x_3509_;
}
}
else
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3514_; 
v___x_3511_ = lean_array_fget(v_queue_3497_, v___y_3428_);
lean_dec(v___y_3428_);
v___x_3512_ = l_Array_extract___redArg(v_queue_3497_, v___y_3423_, v___x_3507_);
lean_dec_ref(v_queue_3497_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 4, v___x_3512_);
v___x_3514_ = v___x_3505_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_model_3491_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v_live_3492_);
lean_ctor_set(v_reuseFailAlloc_3518_, 2, v_next_3493_);
lean_ctor_set(v_reuseFailAlloc_3518_, 3, v_tables_3494_);
lean_ctor_set(v_reuseFailAlloc_3518_, 4, v___x_3512_);
lean_ctor_set(v_reuseFailAlloc_3518_, 5, v_subs_3499_);
lean_ctor_set(v_reuseFailAlloc_3518_, 6, v_handlers_3500_);
lean_ctor_set(v_reuseFailAlloc_3518_, 7, v_nextSub_3501_);
lean_ctor_set(v_reuseFailAlloc_3518_, 8, v_touched_3502_);
lean_ctor_set(v_reuseFailAlloc_3518_, 9, v_ports_3503_);
lean_ctor_set_uint8(v_reuseFailAlloc_3518_, sizeof(void*)*10, v_dirty_3495_);
lean_ctor_set_uint8(v_reuseFailAlloc_3518_, sizeof(void*)*10 + 1, v_scheduled_3496_);
lean_ctor_set_uint8(v_reuseFailAlloc_3518_, sizeof(void*)*10 + 2, v_busy_3498_);
v___x_3514_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = lean_st_ref_swap(v___y_3427_, v___x_3514_);
lean_dec(v___y_3427_);
lean_dec(v___x_3515_);
lean_inc_ref(v___y_3432_);
v___x_3516_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3432_, v___x_3511_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v___x_3517_; 
lean_dec_ref_known(v___x_3516_, 1);
v___x_3517_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3432_);
lean_dec_ref(v___y_3432_);
return v___x_3517_;
}
else
{
lean_dec_ref(v___y_3432_);
return v___x_3516_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec(v___y_3423_);
return v___x_3470_;
}
}
}
}
else
{
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
return v___x_3447_;
}
}
else
{
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
return v___x_3444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3653_, lean_object* v_app_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l_Lasm_UI_App_run___redArg(v_inst_3653_, v_app_3654_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3657_, lean_object* v_Model_3658_, lean_object* v_Msg_3659_, lean_object* v_inst_3660_, lean_object* v_app_3661_){
_start:
{
lean_object* v___x_3663_; 
v___x_3663_ = l_Lasm_UI_App_run___redArg(v_inst_3660_, v_app_3661_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3664_, lean_object* v_Model_3665_, lean_object* v_Msg_3666_, lean_object* v_inst_3667_, lean_object* v_app_3668_, lean_object* v_a_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lasm_UI_App_run(v_Flags_3664_, v_Model_3665_, v_Msg_3666_, v_inst_3667_, v_app_3668_);
return v_res_3670_;
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
