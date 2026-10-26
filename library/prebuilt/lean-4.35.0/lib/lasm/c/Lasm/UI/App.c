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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
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
static const lean_array_object l_Lasm_UI_App_run___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__6_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "https:"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__7 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value;
static const lean_string_object l_Lasm_UI_App_run___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_UI_App_run___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_App_run___redArg___closed__7_value),((lean_object*)&l_Lasm_UI_Runtime_Dom_timeout___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_App_run___redArg___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_App_run___redArg___closed__9 = (const lean_object*)&l_Lasm_UI_App_run___redArg___closed__9_value;
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
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__1(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = lean_box(0);
v___x_2752_ = lean_unsigned_to_nat(16u);
v___x_2753_ = lean_mk_array(v___x_2752_, v___x_2751_);
return v___x_2753_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__2(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__1, &l_Lasm_UI_Runtime_frame___redArg___closed__1_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__1);
v___x_2755_ = lean_unsigned_to_nat(0u);
v___x_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
lean_ctor_set(v___x_2756_, 1, v___x_2754_);
return v___x_2756_;
}
}
static lean_object* _init_l_Lasm_UI_Runtime_frame___redArg___closed__3(void){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2757_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg(lean_object* v_c_2759_){
_start:
{
lean_object* v_app_2761_; lean_object* v_ref_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2873_; 
v_app_2761_ = lean_ctor_get(v_c_2759_, 0);
v_ref_2762_ = lean_ctor_get(v_c_2759_, 1);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_c_2759_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2764_ = v_c_2759_;
v_isShared_2765_ = v_isSharedCheck_2873_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_ref_2762_);
lean_inc(v_app_2761_);
lean_dec(v_c_2759_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2873_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2766_; lean_object* v_model_2767_; lean_object* v_live_2768_; lean_object* v_next_2769_; lean_object* v_tables_2770_; uint8_t v_dirty_2771_; uint8_t v_scheduled_2772_; lean_object* v_queue_2773_; uint8_t v_busy_2774_; lean_object* v_subs_2775_; lean_object* v_handlers_2776_; lean_object* v_nextSub_2777_; lean_object* v_touched_2778_; lean_object* v_ports_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2872_; 
v___x_2766_ = lean_st_ref_take(v_ref_2762_);
v_model_2767_ = lean_ctor_get(v___x_2766_, 0);
v_live_2768_ = lean_ctor_get(v___x_2766_, 1);
v_next_2769_ = lean_ctor_get(v___x_2766_, 2);
v_tables_2770_ = lean_ctor_get(v___x_2766_, 3);
v_dirty_2771_ = lean_ctor_get_uint8(v___x_2766_, sizeof(void*)*10);
v_scheduled_2772_ = lean_ctor_get_uint8(v___x_2766_, sizeof(void*)*10 + 1);
v_queue_2773_ = lean_ctor_get(v___x_2766_, 4);
v_busy_2774_ = lean_ctor_get_uint8(v___x_2766_, sizeof(void*)*10 + 2);
v_subs_2775_ = lean_ctor_get(v___x_2766_, 5);
v_handlers_2776_ = lean_ctor_get(v___x_2766_, 6);
v_nextSub_2777_ = lean_ctor_get(v___x_2766_, 7);
v_touched_2778_ = lean_ctor_get(v___x_2766_, 8);
v_ports_2779_ = lean_ctor_get(v___x_2766_, 9);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2781_ = v___x_2766_;
v_isShared_2782_ = v_isSharedCheck_2872_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_ports_2779_);
lean_inc(v_touched_2778_);
lean_inc(v_nextSub_2777_);
lean_inc(v_handlers_2776_);
lean_inc(v_subs_2775_);
lean_inc(v_queue_2773_);
lean_inc(v_tables_2770_);
lean_inc(v_next_2769_);
lean_inc(v_live_2768_);
lean_inc(v_model_2767_);
lean_dec(v___x_2766_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2872_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v___x_2783_ = lean_box(0);
v___x_2784_ = lean_unsigned_to_nat(0u);
v___x_2785_ = ((lean_object*)(l_Lasm_UI_Runtime_frame___redArg___closed__0));
lean_inc(v_next_2769_);
lean_inc(v_model_2767_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 8, v___x_2785_);
lean_ctor_set(v___x_2781_, 1, v___x_2783_);
v___x_2787_ = v___x_2781_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_model_2767_);
lean_ctor_set(v_reuseFailAlloc_2871_, 1, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2871_, 2, v_next_2769_);
lean_ctor_set(v_reuseFailAlloc_2871_, 3, v_tables_2770_);
lean_ctor_set(v_reuseFailAlloc_2871_, 4, v_queue_2773_);
lean_ctor_set(v_reuseFailAlloc_2871_, 5, v_subs_2775_);
lean_ctor_set(v_reuseFailAlloc_2871_, 6, v_handlers_2776_);
lean_ctor_set(v_reuseFailAlloc_2871_, 7, v_nextSub_2777_);
lean_ctor_set(v_reuseFailAlloc_2871_, 8, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2871_, 9, v_ports_2779_);
lean_ctor_set_uint8(v_reuseFailAlloc_2871_, sizeof(void*)*10, v_dirty_2771_);
lean_ctor_set_uint8(v_reuseFailAlloc_2871_, sizeof(void*)*10 + 1, v_scheduled_2772_);
lean_ctor_set_uint8(v_reuseFailAlloc_2871_, sizeof(void*)*10 + 2, v_busy_2774_);
v___x_2787_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_st_ref_put(v_ref_2762_, v___x_2787_);
if (v_dirty_2771_ == 0)
{
lean_object* v___x_2789_; lean_object* v_model_2790_; lean_object* v_next_2791_; lean_object* v_tables_2792_; uint8_t v_dirty_2793_; lean_object* v_queue_2794_; uint8_t v_busy_2795_; lean_object* v_subs_2796_; lean_object* v_handlers_2797_; lean_object* v_nextSub_2798_; lean_object* v_touched_2799_; lean_object* v_ports_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2810_; 
lean_dec_ref(v_touched_2778_);
lean_dec(v_next_2769_);
lean_dec(v_model_2767_);
lean_del_object(v___x_2764_);
lean_dec_ref(v_app_2761_);
v___x_2789_ = lean_st_ref_take(v_ref_2762_);
v_model_2790_ = lean_ctor_get(v___x_2789_, 0);
v_next_2791_ = lean_ctor_get(v___x_2789_, 2);
v_tables_2792_ = lean_ctor_get(v___x_2789_, 3);
v_dirty_2793_ = lean_ctor_get_uint8(v___x_2789_, sizeof(void*)*10);
v_queue_2794_ = lean_ctor_get(v___x_2789_, 4);
v_busy_2795_ = lean_ctor_get_uint8(v___x_2789_, sizeof(void*)*10 + 2);
v_subs_2796_ = lean_ctor_get(v___x_2789_, 5);
v_handlers_2797_ = lean_ctor_get(v___x_2789_, 6);
v_nextSub_2798_ = lean_ctor_get(v___x_2789_, 7);
v_touched_2799_ = lean_ctor_get(v___x_2789_, 8);
v_ports_2800_ = lean_ctor_get(v___x_2789_, 9);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2810_ == 0)
{
lean_object* v_unused_2811_; 
v_unused_2811_ = lean_ctor_get(v___x_2789_, 1);
lean_dec(v_unused_2811_);
v___x_2802_ = v___x_2789_;
v_isShared_2803_ = v_isSharedCheck_2810_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_ports_2800_);
lean_inc(v_touched_2799_);
lean_inc(v_nextSub_2798_);
lean_inc(v_handlers_2797_);
lean_inc(v_subs_2796_);
lean_inc(v_queue_2794_);
lean_inc(v_tables_2792_);
lean_inc(v_next_2791_);
lean_inc(v_model_2790_);
lean_dec(v___x_2789_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2810_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2805_; 
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v_live_2768_);
v___x_2805_ = v___x_2802_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_model_2790_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v_live_2768_);
lean_ctor_set(v_reuseFailAlloc_2809_, 2, v_next_2791_);
lean_ctor_set(v_reuseFailAlloc_2809_, 3, v_tables_2792_);
lean_ctor_set(v_reuseFailAlloc_2809_, 4, v_queue_2794_);
lean_ctor_set(v_reuseFailAlloc_2809_, 5, v_subs_2796_);
lean_ctor_set(v_reuseFailAlloc_2809_, 6, v_handlers_2797_);
lean_ctor_set(v_reuseFailAlloc_2809_, 7, v_nextSub_2798_);
lean_ctor_set(v_reuseFailAlloc_2809_, 8, v_touched_2799_);
lean_ctor_set(v_reuseFailAlloc_2809_, 9, v_ports_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*10, v_dirty_2793_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*10 + 2, v_busy_2795_);
v___x_2805_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*10 + 1, v_dirty_2771_);
v___x_2806_ = lean_st_ref_put(v_ref_2762_, v___x_2805_);
lean_dec(v_ref_2762_);
v___x_2807_ = l_ByteArray_empty;
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
}
}
else
{
lean_object* v_view_2812_; lean_object* v___x_2813_; lean_object* v___x_2815_; 
v_view_2812_ = lean_ctor_get(v_app_2761_, 2);
lean_inc_ref(v_view_2812_);
lean_dec_ref(v_app_2761_);
v___x_2813_ = lean_apply_1(v_view_2812_, v_model_2767_);
if (v_isShared_2765_ == 0)
{
lean_ctor_set_tag(v___x_2764_, 1);
lean_ctor_set(v___x_2764_, 1, v___x_2783_);
lean_ctor_set(v___x_2764_, 0, v___x_2813_);
v___x_2815_ = v___x_2764_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2813_);
lean_ctor_set(v_reuseFailAlloc_2870_, 1, v___x_2783_);
v___x_2815_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
lean_object* v___x_2816_; lean_object* v_ops_2817_; lean_object* v_live_2818_; lean_object* v_next_2819_; uint8_t v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v_model_2823_; lean_object* v_live_2824_; lean_object* v_next_2825_; lean_object* v_tables_2826_; uint8_t v_dirty_2827_; uint8_t v_scheduled_2828_; lean_object* v_queue_2829_; uint8_t v_busy_2830_; lean_object* v_subs_2831_; lean_object* v_handlers_2832_; lean_object* v_nextSub_2833_; lean_object* v_touched_2834_; lean_object* v_ports_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2869_; 
v___x_2816_ = l_Lasm_UI_diff___redArg(v_live_2768_, v___x_2815_, v_next_2769_);
v_ops_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc_ref(v_ops_2817_);
v_live_2818_ = lean_ctor_get(v___x_2816_, 1);
lean_inc_n(v_live_2818_, 2);
v_next_2819_ = lean_ctor_get(v___x_2816_, 2);
lean_inc(v_next_2819_);
lean_dec_ref(v___x_2816_);
v___x_2820_ = 0;
v___x_2821_ = l_Lasm_UI_Runtime_resync___redArg(v_live_2818_, v_touched_2778_);
lean_dec_ref(v_touched_2778_);
v___x_2822_ = lean_st_ref_take(v_ref_2762_);
v_model_2823_ = lean_ctor_get(v___x_2822_, 0);
v_live_2824_ = lean_ctor_get(v___x_2822_, 1);
v_next_2825_ = lean_ctor_get(v___x_2822_, 2);
v_tables_2826_ = lean_ctor_get(v___x_2822_, 3);
v_dirty_2827_ = lean_ctor_get_uint8(v___x_2822_, sizeof(void*)*10);
v_scheduled_2828_ = lean_ctor_get_uint8(v___x_2822_, sizeof(void*)*10 + 1);
v_queue_2829_ = lean_ctor_get(v___x_2822_, 4);
v_busy_2830_ = lean_ctor_get_uint8(v___x_2822_, sizeof(void*)*10 + 2);
v_subs_2831_ = lean_ctor_get(v___x_2822_, 5);
v_handlers_2832_ = lean_ctor_get(v___x_2822_, 6);
v_nextSub_2833_ = lean_ctor_get(v___x_2822_, 7);
v_touched_2834_ = lean_ctor_get(v___x_2822_, 8);
v_ports_2835_ = lean_ctor_get(v___x_2822_, 9);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2837_ = v___x_2822_;
v_isShared_2838_ = v_isSharedCheck_2869_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_ports_2835_);
lean_inc(v_touched_2834_);
lean_inc(v_nextSub_2833_);
lean_inc(v_handlers_2832_);
lean_inc(v_subs_2831_);
lean_inc(v_queue_2829_);
lean_inc(v_tables_2826_);
lean_inc(v_next_2825_);
lean_inc(v_live_2824_);
lean_inc(v_model_2823_);
lean_dec(v___x_2822_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2869_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2841_; 
v___x_2839_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 3, v___x_2839_);
v___x_2841_ = v___x_2837_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_model_2823_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_live_2824_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_next_2825_);
lean_ctor_set(v_reuseFailAlloc_2868_, 3, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2868_, 4, v_queue_2829_);
lean_ctor_set(v_reuseFailAlloc_2868_, 5, v_subs_2831_);
lean_ctor_set(v_reuseFailAlloc_2868_, 6, v_handlers_2832_);
lean_ctor_set(v_reuseFailAlloc_2868_, 7, v_nextSub_2833_);
lean_ctor_set(v_reuseFailAlloc_2868_, 8, v_touched_2834_);
lean_ctor_set(v_reuseFailAlloc_2868_, 9, v_ports_2835_);
lean_ctor_set_uint8(v_reuseFailAlloc_2868_, sizeof(void*)*10, v_dirty_2827_);
lean_ctor_set_uint8(v_reuseFailAlloc_2868_, sizeof(void*)*10 + 1, v_scheduled_2828_);
lean_ctor_set_uint8(v_reuseFailAlloc_2868_, sizeof(void*)*10 + 2, v_busy_2830_);
v___x_2841_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v_fst_2845_; lean_object* v_snd_2846_; lean_object* v___x_2847_; lean_object* v_model_2848_; lean_object* v_queue_2849_; uint8_t v_busy_2850_; lean_object* v_subs_2851_; lean_object* v_handlers_2852_; lean_object* v_nextSub_2853_; lean_object* v_touched_2854_; lean_object* v_ports_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2864_; 
v___x_2842_ = lean_st_ref_put(v_ref_2762_, v___x_2841_);
v___x_2843_ = l_Array_append___redArg(v_ops_2817_, v___x_2821_);
lean_dec_ref(v___x_2821_);
v___x_2844_ = l_Lasm_UI_Encode_frame___redArg(v_tables_2826_, v___x_2843_, v___x_2784_);
lean_dec_ref(v___x_2843_);
v_fst_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_fst_2845_);
v_snd_2846_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_snd_2846_);
lean_dec_ref(v___x_2844_);
v___x_2847_ = lean_st_ref_take(v_ref_2762_);
v_model_2848_ = lean_ctor_get(v___x_2847_, 0);
v_queue_2849_ = lean_ctor_get(v___x_2847_, 4);
v_busy_2850_ = lean_ctor_get_uint8(v___x_2847_, sizeof(void*)*10 + 2);
v_subs_2851_ = lean_ctor_get(v___x_2847_, 5);
v_handlers_2852_ = lean_ctor_get(v___x_2847_, 6);
v_nextSub_2853_ = lean_ctor_get(v___x_2847_, 7);
v_touched_2854_ = lean_ctor_get(v___x_2847_, 8);
v_ports_2855_ = lean_ctor_get(v___x_2847_, 9);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2864_ == 0)
{
lean_object* v_unused_2865_; lean_object* v_unused_2866_; lean_object* v_unused_2867_; 
v_unused_2865_ = lean_ctor_get(v___x_2847_, 3);
lean_dec(v_unused_2865_);
v_unused_2866_ = lean_ctor_get(v___x_2847_, 2);
lean_dec(v_unused_2866_);
v_unused_2867_ = lean_ctor_get(v___x_2847_, 1);
lean_dec(v_unused_2867_);
v___x_2857_ = v___x_2847_;
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_ports_2855_);
lean_inc(v_touched_2854_);
lean_inc(v_nextSub_2853_);
lean_inc(v_handlers_2852_);
lean_inc(v_subs_2851_);
lean_inc(v_queue_2849_);
lean_inc(v_model_2848_);
lean_dec(v___x_2847_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 3, v_snd_2846_);
lean_ctor_set(v___x_2857_, 2, v_next_2819_);
lean_ctor_set(v___x_2857_, 1, v_live_2818_);
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_model_2848_);
lean_ctor_set(v_reuseFailAlloc_2863_, 1, v_live_2818_);
lean_ctor_set(v_reuseFailAlloc_2863_, 2, v_next_2819_);
lean_ctor_set(v_reuseFailAlloc_2863_, 3, v_snd_2846_);
lean_ctor_set(v_reuseFailAlloc_2863_, 4, v_queue_2849_);
lean_ctor_set(v_reuseFailAlloc_2863_, 5, v_subs_2851_);
lean_ctor_set(v_reuseFailAlloc_2863_, 6, v_handlers_2852_);
lean_ctor_set(v_reuseFailAlloc_2863_, 7, v_nextSub_2853_);
lean_ctor_set(v_reuseFailAlloc_2863_, 8, v_touched_2854_);
lean_ctor_set(v_reuseFailAlloc_2863_, 9, v_ports_2855_);
lean_ctor_set_uint8(v_reuseFailAlloc_2863_, sizeof(void*)*10 + 2, v_busy_2850_);
v___x_2860_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_ctor_set_uint8(v___x_2860_, sizeof(void*)*10, v___x_2820_);
lean_ctor_set_uint8(v___x_2860_, sizeof(void*)*10 + 1, v___x_2820_);
v___x_2861_ = lean_st_ref_put(v_ref_2762_, v___x_2860_);
lean_dec(v_ref_2762_);
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v_fst_2845_);
return v___x_2862_;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___redArg___boxed(lean_object* v_c_2874_, lean_object* v_a_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2874_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame(lean_object* v_Flags_2877_, lean_object* v_Model_2878_, lean_object* v_Msg_2879_, lean_object* v_c_2880_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l_Lasm_UI_Runtime_frame___redArg(v_c_2880_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_frame___boxed(lean_object* v_Flags_2883_, lean_object* v_Model_2884_, lean_object* v_Msg_2885_, lean_object* v_c_2886_, lean_object* v_a_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lasm_UI_Runtime_frame(v_Flags_2883_, v_Model_2884_, v_Msg_2885_, v_c_2886_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(lean_object* v_snd_2889_, lean_object* v_____r_2890_, lean_object* v_msgs_2891_){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2893_ = lean_unsigned_to_nat(2u);
v___x_2894_ = lean_nat_add(v_snd_2889_, v___x_2893_);
v___x_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2895_, 0, v_msgs_2891_);
lean_ctor_set(v___x_2895_, 1, v___x_2894_);
v___x_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
v___x_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2898_, lean_object* v_____r_2899_, lean_object* v_msgs_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2898_, v_____r_2899_, v_msgs_2900_);
lean_dec(v_snd_2898_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(lean_object* v___f_2903_, lean_object* v_fst_2904_, lean_object* v_x_2905_){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_apply_3(v___f_2903_, v___x_2907_, v_fst_2904_, lean_box(0));
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2___boxed(lean_object* v___f_2909_, lean_object* v_fst_2910_, lean_object* v_x_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2909_, v_fst_2910_, v_x_2911_);
lean_dec(v_x_2911_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(lean_object* v___f_2914_, lean_object* v_fst_2915_, lean_object* v_x_2916_){
_start:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2918_ = lean_box(0);
v___x_2919_ = lean_apply_3(v___f_2914_, v___x_2918_, v_fst_2915_, lean_box(0));
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1___boxed(lean_object* v___f_2920_, lean_object* v_fst_2921_, lean_object* v_x_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2920_, v_fst_2921_, v_x_2922_);
lean_dec_ref(v_x_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(lean_object* v_items_2925_, lean_object* v___x_2926_, lean_object* v_s_2927_, lean_object* v_a_2928_){
_start:
{
lean_object* v___y_2931_; lean_object* v_fst_2951_; lean_object* v_snd_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_3008_; 
v_fst_2951_ = lean_ctor_get(v_a_2928_, 0);
v_snd_2952_ = lean_ctor_get(v_a_2928_, 1);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_a_2928_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2954_ = v_a_2928_;
v_isShared_2955_ = v_isSharedCheck_3008_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_snd_2952_);
lean_inc(v_fst_2951_);
lean_dec(v_a_2928_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_3008_;
goto v_resetjp_2953_;
}
v___jp_2930_:
{
if (lean_obj_tag(v___y_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2942_; 
v_a_2932_ = lean_ctor_get(v___y_2931_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___y_2931_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2934_ = v___y_2931_;
v_isShared_2935_ = v_isSharedCheck_2942_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___y_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2942_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
if (lean_obj_tag(v_a_2932_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2938_; 
v_a_2936_ = lean_ctor_get(v_a_2932_, 0);
lean_inc(v_a_2936_);
lean_dec_ref_known(v_a_2932_, 1);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v_a_2936_);
v___x_2938_ = v___x_2934_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2936_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
else
{
lean_object* v_a_2940_; 
lean_del_object(v___x_2934_);
v_a_2940_ = lean_ctor_get(v_a_2932_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v_a_2932_, 1);
v_a_2928_ = v_a_2940_;
goto _start;
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
v_a_2943_ = lean_ctor_get(v___y_2931_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___y_2931_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___y_2931_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___y_2931_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
v_resetjp_2953_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v___x_2956_ = lean_unsigned_to_nat(1u);
v___x_2957_ = lean_nat_add(v_snd_2952_, v___x_2956_);
v___x_2958_ = lean_array_get_size(v_items_2925_);
v___x_2959_ = lean_nat_dec_lt(v___x_2957_, v___x_2958_);
if (v___x_2959_ == 0)
{
lean_object* v___x_2961_; 
lean_dec(v___x_2957_);
if (v_isShared_2955_ == 0)
{
v___x_2961_ = v___x_2954_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_fst_2951_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_snd_2952_);
v___x_2961_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
else
{
lean_object* v___x_2964_; lean_object* v___f_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2964_ = lean_box(0);
lean_inc(v_snd_2952_);
v___f_2965_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2965_, 0, v_snd_2952_);
v___x_2966_ = lean_array_get_borrowed(v___x_2964_, v_items_2925_, v_snd_2952_);
v___x_2967_ = lean_array_get(v___x_2964_, v_items_2925_, v___x_2957_);
lean_dec(v___x_2957_);
if (lean_obj_tag(v___x_2966_) == 3)
{
if (lean_obj_tag(v___x_2967_) == 7)
{
double v_n_2968_; lean_object* v_items_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2999_; 
lean_del_object(v___x_2954_);
v_n_2968_ = lean_ctor_get_float(v___x_2966_, 0);
v_items_2969_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2971_ = v___x_2967_;
v_isShared_2972_ = v_isSharedCheck_2999_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_items_2969_);
lean_dec(v___x_2967_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2999_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
uint64_t v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; uint8_t v___x_2976_; 
v___x_2973_ = lean_float_to_uint64(v_n_2968_);
v___x_2974_ = lean_uint64_to_nat(v___x_2973_);
v___x_2975_ = lean_array_get_size(v___x_2926_);
v___x_2976_ = lean_nat_dec_lt(v___x_2974_, v___x_2975_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec(v___x_2974_);
lean_del_object(v___x_2971_);
lean_dec_ref(v_items_2969_);
lean_dec(v_snd_2952_);
v___x_2977_ = lean_box(0);
v___x_2978_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2965_, v_fst_2951_, v___x_2977_);
v___y_2931_ = v___x_2978_;
goto v___jp_2930_;
}
else
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_array_fget_borrowed(v___x_2926_, v___x_2974_);
lean_dec(v___x_2974_);
if (lean_obj_tag(v___x_2979_) == 1)
{
lean_object* v_attrs_2980_; lean_object* v___x_2981_; 
lean_del_object(v___x_2971_);
lean_dec_ref(v___f_2965_);
v_attrs_2980_ = lean_ctor_get(v___x_2979_, 3);
v___x_2981_ = l_Lasm_UI_Runtime_handlerFor___redArg(v_s_2927_, v_attrs_2980_);
if (lean_obj_tag(v___x_2981_) == 1)
{
lean_object* v_val_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v_val_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_val_2982_);
lean_dec_ref_known(v___x_2981_, 1);
v___x_2983_ = lean_array_to_list(v_items_2969_);
v___x_2984_ = lean_box(0);
v___x_2985_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_2983_, v___x_2984_);
v___x_2986_ = lean_apply_1(v_val_2982_, v___x_2985_);
if (lean_obj_tag(v___x_2986_) == 1)
{
lean_object* v_val_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; 
v_val_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_val_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = lean_array_push(v_fst_2951_, v_val_2987_);
v___x_2989_ = lean_box(0);
v___x_2990_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2952_, v___x_2989_, v___x_2988_);
lean_dec(v_snd_2952_);
v___y_2931_ = v___x_2990_;
goto v___jp_2930_;
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
lean_dec(v___x_2986_);
v___x_2991_ = lean_box(0);
v___x_2992_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2952_, v___x_2991_, v_fst_2951_);
lean_dec(v_snd_2952_);
v___y_2931_ = v___x_2992_;
goto v___jp_2930_;
}
}
else
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
lean_dec(v___x_2981_);
lean_dec_ref(v_items_2969_);
v___x_2993_ = lean_box(0);
v___x_2994_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__0(v_snd_2952_, v___x_2993_, v_fst_2951_);
lean_dec(v_snd_2952_);
v___y_2931_ = v___x_2994_;
goto v___jp_2930_;
}
}
else
{
lean_object* v___x_2996_; 
lean_dec_ref(v_items_2969_);
lean_dec(v_snd_2952_);
lean_inc(v___x_2979_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set_tag(v___x_2971_, 1);
lean_ctor_set(v___x_2971_, 0, v___x_2979_);
v___x_2996_ = v___x_2971_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2979_);
v___x_2996_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2997_; 
v___x_2997_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__2(v___f_2965_, v_fst_2951_, v___x_2996_);
lean_dec_ref(v___x_2996_);
v___y_2931_ = v___x_2997_;
goto v___jp_2930_;
}
}
}
}
}
else
{
lean_object* v___x_3001_; 
lean_dec(v_snd_2952_);
lean_inc_ref(v___x_2966_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 1, v___x_2967_);
lean_ctor_set(v___x_2954_, 0, v___x_2966_);
v___x_3001_ = v___x_2954_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2966_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v___x_2967_);
v___x_3001_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
lean_object* v___x_3002_; 
v___x_3002_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2965_, v_fst_2951_, v___x_3001_);
lean_dec_ref(v___x_3001_);
v___y_2931_ = v___x_3002_;
goto v___jp_2930_;
}
}
}
else
{
lean_object* v___x_3005_; 
lean_dec(v_snd_2952_);
lean_inc(v___x_2966_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 1, v___x_2967_);
lean_ctor_set(v___x_2954_, 0, v___x_2966_);
v___x_3005_ = v___x_2954_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_2966_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___x_2967_);
v___x_3005_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; 
v___x_3006_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___lam__1(v___f_2965_, v_fst_2951_, v___x_3005_);
lean_dec_ref(v___x_3005_);
v___y_2931_ = v___x_3006_;
goto v___jp_2930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg___boxed(lean_object* v_items_3009_, lean_object* v___x_3010_, lean_object* v_s_3011_, lean_object* v_a_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3009_, v___x_3010_, v_s_3011_, v_a_3012_);
lean_dec_ref(v_s_3011_);
lean_dec_ref(v___x_3010_);
lean_dec_ref(v_items_3009_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(lean_object* v_c_3015_, lean_object* v_as_3016_, size_t v_sz_3017_, size_t v_i_3018_, lean_object* v_b_3019_){
_start:
{
uint8_t v___x_3021_; 
v___x_3021_ = lean_usize_dec_lt(v_i_3018_, v_sz_3017_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; 
lean_dec_ref(v_c_3015_);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v_b_3019_);
return v___x_3022_;
}
else
{
lean_object* v___x_3023_; lean_object* v_a_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_box(0);
v_a_3024_ = lean_array_uget_borrowed(v_as_3016_, v_i_3018_);
lean_inc(v_a_3024_);
lean_inc_ref(v_c_3015_);
v___x_3025_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3015_, v_a_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
size_t v___x_3026_; size_t v___x_3027_; 
lean_dec_ref_known(v___x_3025_, 1);
v___x_3026_ = ((size_t)1ULL);
v___x_3027_ = lean_usize_add(v_i_3018_, v___x_3026_);
v_i_3018_ = v___x_3027_;
v_b_3019_ = v___x_3023_;
goto _start;
}
else
{
lean_dec_ref(v_c_3015_);
return v___x_3025_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg___boxed(lean_object* v_c_3029_, lean_object* v_as_3030_, lean_object* v_sz_3031_, lean_object* v_i_3032_, lean_object* v_b_3033_, lean_object* v___y_3034_){
_start:
{
size_t v_sz_boxed_3035_; size_t v_i_boxed_3036_; lean_object* v_res_3037_; 
v_sz_boxed_3035_ = lean_unbox_usize(v_sz_3031_);
lean_dec(v_sz_3031_);
v_i_boxed_3036_ = lean_unbox_usize(v_i_3032_);
lean_dec(v_i_3032_);
v_res_3037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3029_, v_as_3030_, v_sz_boxed_3035_, v_i_boxed_3036_, v_b_3033_);
lean_dec_ref(v_as_3030_);
return v_res_3037_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3038_ = lean_unsigned_to_nat(0u);
v___x_3039_ = lean_nat_to_int(v___x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(size_t v_sz_3048_, size_t v_i_3049_, lean_object* v_bs_3050_){
_start:
{
uint8_t v___x_3051_; 
v___x_3051_ = lean_usize_dec_lt(v_i_3049_, v_sz_3048_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
v___x_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3052_, 0, v_bs_3050_);
return v___x_3052_;
}
else
{
lean_object* v_v_3053_; lean_object* v___x_3054_; lean_object* v_bs_x27_3055_; lean_object* v_a_3057_; 
v_v_3053_ = lean_array_uget(v_bs_3050_, v_i_3049_);
v___x_3054_ = lean_unsigned_to_nat(0u);
v_bs_x27_3055_ = lean_array_uset(v_bs_3050_, v_i_3049_, v___x_3054_);
switch(lean_obj_tag(v_v_3053_))
{
case 3:
{
double v_n_3066_; lean_object* v___x_3067_; 
v_n_3066_ = lean_ctor_get_float(v_v_3053_, 0);
lean_dec_ref_known(v_v_3053_, 0);
v___x_3067_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3066_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v___x_3068_; 
lean_dec_ref(v_bs_x27_3055_);
v___x_3068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__4));
return v___x_3068_;
}
else
{
lean_object* v_val_3069_; 
v_val_3069_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_val_3069_);
lean_dec_ref_known(v___x_3067_, 1);
v_a_3057_ = v_val_3069_;
goto v___jp_3056_;
}
}
case 5:
{
lean_object* v_i_3070_; 
v_i_3070_ = lean_ctor_get(v_v_3053_, 0);
lean_inc(v_i_3070_);
lean_dec_ref_known(v_v_3053_, 1);
v_a_3057_ = v_i_3070_;
goto v___jp_3056_;
}
default: 
{
lean_object* v___x_3071_; 
lean_dec_ref(v_bs_x27_3055_);
lean_dec(v_v_3053_);
v___x_3071_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__5));
return v___x_3071_;
}
}
v___jp_3056_:
{
lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3058_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__0);
v___x_3059_ = lean_int_dec_le(v___x_3058_, v_a_3057_);
if (v___x_3059_ == 0)
{
lean_object* v___x_3060_; 
lean_dec(v_a_3057_);
lean_dec_ref(v_bs_x27_3055_);
v___x_3060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___closed__2));
return v___x_3060_;
}
else
{
lean_object* v___x_3061_; size_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; 
v___x_3061_ = l_Int_toNat(v_a_3057_);
lean_dec(v_a_3057_);
v___x_3062_ = ((size_t)1ULL);
v___x_3063_ = lean_usize_add(v_i_3049_, v___x_3062_);
v___x_3064_ = lean_array_uset(v_bs_x27_3055_, v_i_3049_, v___x_3061_);
v_i_3049_ = v___x_3063_;
v_bs_3050_ = v___x_3064_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0___boxed(lean_object* v_sz_3072_, lean_object* v_i_3073_, lean_object* v_bs_3074_){
_start:
{
size_t v_sz_boxed_3075_; size_t v_i_boxed_3076_; lean_object* v_res_3077_; 
v_sz_boxed_3075_ = lean_unbox_usize(v_sz_3072_);
lean_dec(v_sz_3072_);
v_i_boxed_3076_ = lean_unbox_usize(v_i_3073_);
lean_dec(v_i_3073_);
v_res_3077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_boxed_3075_, v_i_boxed_3076_, v_bs_3074_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg(lean_object* v_c_3083_, lean_object* v_args_3084_){
_start:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3092_ = lean_array_get_size(v_args_3084_);
v___x_3093_ = lean_unsigned_to_nat(3u);
v___x_3094_ = lean_nat_dec_eq(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_dec_ref(v_c_3083_);
goto v___jp_3086_;
}
else
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = lean_unsigned_to_nat(1u);
v___x_3096_ = lean_array_fget_borrowed(v_args_3084_, v___x_3095_);
if (lean_obj_tag(v___x_3096_) == 4)
{
lean_object* v_s_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v_s_3097_ = lean_ctor_get(v___x_3096_, 0);
v___x_3098_ = lean_unsigned_to_nat(2u);
v___x_3099_ = lean_array_fget_borrowed(v_args_3084_, v___x_3098_);
if (lean_obj_tag(v___x_3099_) == 7)
{
lean_object* v_items_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_items_3100_ = lean_ctor_get(v___x_3099_, 0);
v___x_3101_ = lean_unsigned_to_nat(0u);
v___x_3102_ = lean_array_fget_borrowed(v_args_3084_, v___x_3101_);
if (lean_obj_tag(v___x_3102_) == 7)
{
lean_object* v_items_3103_; size_t v_sz_3104_; size_t v___x_3105_; lean_object* v___x_3106_; 
v_items_3103_ = lean_ctor_get(v___x_3102_, 0);
v_sz_3104_ = lean_array_size(v_items_3103_);
v___x_3105_ = ((size_t)0ULL);
lean_inc_ref(v_items_3103_);
v___x_3106_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_UI_Runtime_onEvent_spec__0(v_sz_3104_, v___x_3105_, v_items_3103_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_dec_ref_known(v___x_3106_, 1);
lean_dec_ref(v_c_3083_);
goto v___jp_3089_;
}
else
{
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_dec_ref_known(v___x_3106_, 1);
lean_dec_ref(v_c_3083_);
goto v___jp_3089_;
}
else
{
lean_object* v_a_3107_; lean_object* v_ref_3108_; lean_object* v___x_3109_; lean_object* v_live_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v_model_3115_; lean_object* v_live_3116_; lean_object* v_next_3117_; lean_object* v_tables_3118_; uint8_t v_dirty_3119_; uint8_t v_scheduled_3120_; lean_object* v_queue_3121_; uint8_t v_busy_3122_; lean_object* v_subs_3123_; lean_object* v_handlers_3124_; lean_object* v_nextSub_3125_; lean_object* v_touched_3126_; lean_object* v_ports_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3170_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3106_, 1);
v_ref_3108_ = lean_ctor_get(v_c_3083_, 1);
v___x_3109_ = lean_st_ref_get(v_ref_3108_);
v_live_3110_ = lean_ctor_get(v___x_3109_, 1);
lean_inc(v_live_3110_);
lean_dec(v___x_3109_);
v___x_3111_ = lean_array_to_list(v_a_3107_);
v___x_3112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Runtime_resync_spec__1___redArg___closed__0));
v___x_3113_ = l_Lasm_UI_Runtime_findPath___redArg(v_live_3110_, v___x_3111_, v___x_3112_);
v___x_3114_ = lean_st_ref_take(v_ref_3108_);
v_model_3115_ = lean_ctor_get(v___x_3114_, 0);
v_live_3116_ = lean_ctor_get(v___x_3114_, 1);
v_next_3117_ = lean_ctor_get(v___x_3114_, 2);
v_tables_3118_ = lean_ctor_get(v___x_3114_, 3);
v_dirty_3119_ = lean_ctor_get_uint8(v___x_3114_, sizeof(void*)*10);
v_scheduled_3120_ = lean_ctor_get_uint8(v___x_3114_, sizeof(void*)*10 + 1);
v_queue_3121_ = lean_ctor_get(v___x_3114_, 4);
v_busy_3122_ = lean_ctor_get_uint8(v___x_3114_, sizeof(void*)*10 + 2);
v_subs_3123_ = lean_ctor_get(v___x_3114_, 5);
v_handlers_3124_ = lean_ctor_get(v___x_3114_, 6);
v_nextSub_3125_ = lean_ctor_get(v___x_3114_, 7);
v_touched_3126_ = lean_ctor_get(v___x_3114_, 8);
v_ports_3127_ = lean_ctor_get(v___x_3114_, 9);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3129_ = v___x_3114_;
v_isShared_3130_ = v_isSharedCheck_3170_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_ports_3127_);
lean_inc(v_touched_3126_);
lean_inc(v_nextSub_3125_);
lean_inc(v_handlers_3124_);
lean_inc(v_subs_3123_);
lean_inc(v_queue_3121_);
lean_inc(v_tables_3118_);
lean_inc(v_next_3117_);
lean_inc(v_live_3116_);
lean_inc(v_model_3115_);
lean_dec(v___x_3114_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3170_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3131_; lean_object* v___x_3133_; 
v___x_3131_ = lean_array_push(v_touched_3126_, v___x_3111_);
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 8, v___x_3131_);
v___x_3133_ = v___x_3129_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_model_3115_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v_live_3116_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v_next_3117_);
lean_ctor_set(v_reuseFailAlloc_3169_, 3, v_tables_3118_);
lean_ctor_set(v_reuseFailAlloc_3169_, 4, v_queue_3121_);
lean_ctor_set(v_reuseFailAlloc_3169_, 5, v_subs_3123_);
lean_ctor_set(v_reuseFailAlloc_3169_, 6, v_handlers_3124_);
lean_ctor_set(v_reuseFailAlloc_3169_, 7, v_nextSub_3125_);
lean_ctor_set(v_reuseFailAlloc_3169_, 8, v___x_3131_);
lean_ctor_set(v_reuseFailAlloc_3169_, 9, v_ports_3127_);
lean_ctor_set_uint8(v_reuseFailAlloc_3169_, sizeof(void*)*10, v_dirty_3119_);
lean_ctor_set_uint8(v_reuseFailAlloc_3169_, sizeof(void*)*10 + 1, v_scheduled_3120_);
lean_ctor_set_uint8(v_reuseFailAlloc_3169_, sizeof(void*)*10 + 2, v_busy_3122_);
v___x_3133_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3134_ = lean_st_ref_put(v_ref_3108_, v___x_3133_);
v___x_3135_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__1));
v___x_3136_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3100_, v___x_3113_, v_s_3097_, v___x_3135_);
lean_dec_ref(v___x_3113_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v_fst_3138_; lean_object* v___x_3139_; size_t v_sz_3140_; lean_object* v___x_3141_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3136_, 1);
v_fst_3138_ = lean_ctor_get(v_a_3137_, 0);
lean_inc(v_fst_3138_);
lean_dec(v_a_3137_);
v___x_3139_ = lean_box(0);
v_sz_3140_ = lean_array_size(v_fst_3138_);
lean_inc_ref(v_c_3083_);
v___x_3141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3083_, v_fst_3138_, v_sz_3140_, v___x_3105_, v___x_3139_);
lean_dec(v_fst_3138_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v___x_3142_; lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3152_; 
lean_dec_ref_known(v___x_3141_, 1);
v___x_3142_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3083_);
lean_dec_ref(v_c_3083_);
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3145_ = v___x_3142_;
v_isShared_3146_ = v_isSharedCheck_3152_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3142_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3152_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; uint8_t v___x_3148_; lean_object* v___x_3150_; 
v___x_3147_ = lean_alloc_ctor(2, 0, 1);
v___x_3148_ = lean_unbox(v_a_3143_);
lean_dec(v_a_3143_);
lean_ctor_set_uint8(v___x_3147_, 0, v___x_3148_);
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 0, v___x_3147_);
v___x_3150_ = v___x_3145_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3147_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec_ref(v_c_3083_);
v_a_3153_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3141_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3141_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec_ref(v_c_3083_);
v_a_3161_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3136_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3136_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
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
lean_dec_ref(v_c_3083_);
goto v___jp_3089_;
}
}
else
{
lean_dec_ref(v_c_3083_);
goto v___jp_3086_;
}
}
else
{
lean_dec_ref(v_c_3083_);
goto v___jp_3086_;
}
}
v___jp_3086_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3087_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3087_);
return v___x_3088_;
}
v___jp_3089_:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3090_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
return v___x_3091_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___redArg___boxed(lean_object* v_c_3171_, lean_object* v_args_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3171_, v_args_3172_);
lean_dec_ref(v_args_3172_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent(lean_object* v_Flags_3175_, lean_object* v_Model_3176_, lean_object* v_Msg_3177_, lean_object* v_c_3178_, lean_object* v_args_3179_){
_start:
{
lean_object* v___x_3181_; 
v___x_3181_ = l_Lasm_UI_Runtime_onEvent___redArg(v_c_3178_, v_args_3179_);
return v___x_3181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onEvent___boxed(lean_object* v_Flags_3182_, lean_object* v_Model_3183_, lean_object* v_Msg_3184_, lean_object* v_c_3185_, lean_object* v_args_3186_, lean_object* v_a_3187_){
_start:
{
lean_object* v_res_3188_; 
v_res_3188_ = l_Lasm_UI_Runtime_onEvent(v_Flags_3182_, v_Model_3183_, v_Msg_3184_, v_c_3185_, v_args_3186_);
lean_dec_ref(v_args_3186_);
return v_res_3188_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(lean_object* v_Msg_3189_, lean_object* v_items_3190_, lean_object* v___x_3191_, lean_object* v_s_3192_, lean_object* v_inst_3193_, lean_object* v_a_3194_){
_start:
{
lean_object* v___x_3196_; 
v___x_3196_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___redArg(v_items_3190_, v___x_3191_, v_s_3192_, v_a_3194_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1___boxed(lean_object* v_Msg_3197_, lean_object* v_items_3198_, lean_object* v___x_3199_, lean_object* v_s_3200_, lean_object* v_inst_3201_, lean_object* v_a_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Runtime_onEvent_spec__1(v_Msg_3197_, v_items_3198_, v___x_3199_, v_s_3200_, v_inst_3201_, v_a_3202_);
lean_dec_ref(v_s_3200_);
lean_dec_ref(v___x_3199_);
lean_dec_ref(v_items_3198_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(lean_object* v_Msg_3205_, lean_object* v_Flags_3206_, lean_object* v_Model_3207_, lean_object* v_c_3208_, lean_object* v_as_3209_, size_t v_sz_3210_, size_t v_i_3211_, lean_object* v_b_3212_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___redArg(v_c_3208_, v_as_3209_, v_sz_3210_, v_i_3211_, v_b_3212_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2___boxed(lean_object* v_Msg_3215_, lean_object* v_Flags_3216_, lean_object* v_Model_3217_, lean_object* v_c_3218_, lean_object* v_as_3219_, lean_object* v_sz_3220_, lean_object* v_i_3221_, lean_object* v_b_3222_, lean_object* v___y_3223_){
_start:
{
size_t v_sz_boxed_3224_; size_t v_i_boxed_3225_; lean_object* v_res_3226_; 
v_sz_boxed_3224_ = lean_unbox_usize(v_sz_3220_);
lean_dec(v_sz_3220_);
v_i_boxed_3225_ = lean_unbox_usize(v_i_3221_);
lean_dec(v_i_3221_);
v_res_3226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Runtime_onEvent_spec__2(v_Msg_3215_, v_Flags_3216_, v_Model_3217_, v_c_3218_, v_as_3219_, v_sz_boxed_3224_, v_i_boxed_3225_, v_b_3222_);
lean_dec_ref(v_as_3219_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(lean_object* v___y_3227_, lean_object* v_c_3228_, lean_object* v_as_x27_3229_, lean_object* v_b_3230_){
_start:
{
if (lean_obj_tag(v_as_x27_3229_) == 0)
{
lean_object* v___x_3232_; 
lean_dec_ref(v_c_3228_);
lean_dec_ref(v___y_3227_);
v___x_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3232_, 0, v_b_3230_);
return v___x_3232_;
}
else
{
lean_object* v_head_3233_; lean_object* v_tail_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v_head_3233_ = lean_ctor_get(v_as_x27_3229_, 0);
v_tail_3234_ = lean_ctor_get(v_as_x27_3229_, 1);
v___x_3235_ = lean_box(0);
lean_inc(v_head_3233_);
lean_inc_ref(v___y_3227_);
v___x_3236_ = lean_apply_1(v_head_3233_, v___y_3227_);
if (lean_obj_tag(v___x_3236_) == 1)
{
lean_object* v_val_3237_; lean_object* v___x_3238_; 
v_val_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_val_3237_);
lean_dec_ref_known(v___x_3236_, 1);
lean_inc_ref(v_c_3228_);
v___x_3238_ = l_Lasm_UI_Runtime_deliver___redArg(v_c_3228_, v_val_3237_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_dec_ref_known(v___x_3238_, 1);
v_as_x27_3229_ = v_tail_3234_;
v_b_3230_ = v___x_3235_;
goto _start;
}
else
{
lean_dec_ref(v_c_3228_);
lean_dec_ref(v___y_3227_);
return v___x_3238_;
}
}
else
{
lean_dec(v___x_3236_);
v_as_x27_3229_ = v_tail_3234_;
v_b_3230_ = v___x_3235_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg___boxed(lean_object* v___y_3241_, lean_object* v_c_3242_, lean_object* v_as_x27_3243_, lean_object* v_b_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3241_, v_c_3242_, v_as_x27_3243_, v_b_3244_);
lean_dec(v_as_x27_3243_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg(lean_object* v_c_3247_, lean_object* v_args_3248_){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; uint8_t v___x_3255_; 
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = lean_array_get_size(v_args_3248_);
v___x_3255_ = lean_nat_dec_lt(v___x_3253_, v___x_3254_);
if (v___x_3255_ == 0)
{
lean_dec_ref(v_c_3247_);
goto v___jp_3250_;
}
else
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_array_fget_borrowed(v_args_3248_, v___x_3253_);
if (lean_obj_tag(v___x_3256_) == 3)
{
double v_n_3257_; lean_object* v___y_3259_; lean_object* v___x_3290_; uint8_t v___x_3291_; 
v_n_3257_ = lean_ctor_get_float(v___x_3256_, 0);
v___x_3290_ = lean_unsigned_to_nat(1u);
v___x_3291_ = lean_nat_dec_lt(v___x_3290_, v___x_3254_);
if (v___x_3291_ == 0)
{
goto v___jp_3288_;
}
else
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_array_fget_borrowed(v_args_3248_, v___x_3290_);
if (lean_obj_tag(v___x_3292_) == 7)
{
lean_object* v_items_3293_; 
v_items_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc_ref(v_items_3293_);
v___y_3259_ = v_items_3293_;
goto v___jp_3258_;
}
else
{
goto v___jp_3288_;
}
}
v___jp_3258_:
{
lean_object* v_ref_3260_; lean_object* v___x_3261_; lean_object* v_handlers_3262_; uint64_t v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_ref_3260_ = lean_ctor_get(v_c_3247_, 1);
v___x_3261_ = lean_st_ref_get(v_ref_3260_);
v_handlers_3262_ = lean_ctor_get(v___x_3261_, 6);
lean_inc_ref(v_handlers_3262_);
lean_dec(v___x_3261_);
v___x_3263_ = lean_float_to_uint64(v_n_3257_);
v___x_3264_ = lean_uint64_to_nat(v___x_3263_);
v___x_3265_ = lean_box(0);
v___x_3266_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lasm_UI_Runtime_listenPort_spec__11___redArg(v_handlers_3262_, v___x_3264_, v___x_3265_);
lean_dec(v___x_3264_);
lean_dec_ref(v_handlers_3262_);
v___x_3267_ = lean_box(0);
lean_inc_ref(v_c_3247_);
v___x_3268_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3259_, v_c_3247_, v___x_3266_, v___x_3267_);
lean_dec(v___x_3266_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v___x_3269_; lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3279_; 
lean_dec_ref_known(v___x_3268_, 1);
v___x_3269_ = l_Lasm_UI_Runtime_takeFrame___redArg(v_c_3247_);
lean_dec_ref(v_c_3247_);
v_a_3270_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3272_ = v___x_3269_;
v_isShared_3273_ = v_isSharedCheck_3279_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3269_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3279_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; uint8_t v___x_3275_; lean_object* v___x_3277_; 
v___x_3274_ = lean_alloc_ctor(2, 0, 1);
v___x_3275_ = lean_unbox(v_a_3270_);
lean_dec(v_a_3270_);
lean_ctor_set_uint8(v___x_3274_, 0, v___x_3275_);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3274_);
v___x_3277_ = v___x_3272_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3274_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec_ref(v_c_3247_);
v_a_3280_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3268_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3268_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
v___jp_3288_:
{
lean_object* v___x_3289_; 
v___x_3289_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_options___closed__3));
v___y_3259_ = v___x_3289_;
goto v___jp_3258_;
}
}
else
{
lean_dec_ref(v_c_3247_);
goto v___jp_3250_;
}
}
v___jp_3250_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3251_ = ((lean_object*)(l_Lasm_UI_Runtime_onEvent___redArg___closed__0));
v___x_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
return v___x_3252_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___redArg___boxed(lean_object* v_c_3294_, lean_object* v_args_3295_, lean_object* v_a_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3294_, v_args_3295_);
lean_dec_ref(v_args_3295_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub(lean_object* v_Flags_3298_, lean_object* v_Model_3299_, lean_object* v_Msg_3300_, lean_object* v_c_3301_, lean_object* v_args_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lasm_UI_Runtime_onSub___redArg(v_c_3301_, v_args_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Runtime_onSub___boxed(lean_object* v_Flags_3305_, lean_object* v_Model_3306_, lean_object* v_Msg_3307_, lean_object* v_c_3308_, lean_object* v_args_3309_, lean_object* v_a_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l_Lasm_UI_Runtime_onSub(v_Flags_3305_, v_Model_3306_, v_Msg_3307_, v_c_3308_, v_args_3309_);
lean_dec_ref(v_args_3309_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(lean_object* v_Msg_3312_, lean_object* v___y_3313_, lean_object* v_Flags_3314_, lean_object* v_Model_3315_, lean_object* v_c_3316_, lean_object* v_as_3317_, lean_object* v_as_x27_3318_, lean_object* v_b_3319_, lean_object* v_a_3320_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___redArg(v___y_3313_, v_c_3316_, v_as_x27_3318_, v_b_3319_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0___boxed(lean_object* v_Msg_3323_, lean_object* v___y_3324_, lean_object* v_Flags_3325_, lean_object* v_Model_3326_, lean_object* v_c_3327_, lean_object* v_as_3328_, lean_object* v_as_x27_3329_, lean_object* v_b_3330_, lean_object* v_a_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_onSub_spec__0(v_Msg_3323_, v___y_3324_, v_Flags_3325_, v_Model_3326_, v_c_3327_, v_as_3328_, v_as_x27_3329_, v_b_3330_, v_a_3331_);
lean_dec(v_as_x27_3329_);
lean_dec(v_as_3328_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0(lean_object* v___x_3334_, lean_object* v_onUrlChange_3335_, lean_object* v___x_3336_, lean_object* v_args_3337_){
_start:
{
lean_object* v___y_3352_; lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3368_ = lean_array_get_size(v_args_3337_);
v___x_3369_ = lean_nat_dec_lt(v___x_3336_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_box(0);
v___y_3352_ = v___x_3370_;
goto v___jp_3351_;
}
else
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = lean_array_fget_borrowed(v_args_3337_, v___x_3336_);
lean_inc(v___x_3371_);
v___x_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
v___y_3352_ = v___x_3372_;
goto v___jp_3351_;
}
v___jp_3339_:
{
lean_object* v___x_3340_; lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3350_; 
v___x_3340_ = l_Lasm_UI_Runtime_takeFrame___redArg(v___x_3334_);
lean_dec_ref(v___x_3334_);
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3343_ = v___x_3340_;
v_isShared_3344_ = v_isSharedCheck_3350_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3350_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3345_; uint8_t v___x_3346_; lean_object* v___x_3348_; 
v___x_3345_ = lean_alloc_ctor(2, 0, 1);
v___x_3346_ = lean_unbox(v_a_3341_);
lean_dec(v_a_3341_);
lean_ctor_set_uint8(v___x_3345_, 0, v___x_3346_);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v___x_3345_);
v___x_3348_ = v___x_3343_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v___x_3345_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
v___jp_3351_:
{
if (lean_obj_tag(v_onUrlChange_3335_) == 1)
{
if (lean_obj_tag(v___y_3352_) == 1)
{
lean_object* v_val_3353_; 
v_val_3353_ = lean_ctor_get(v___y_3352_, 0);
lean_inc(v_val_3353_);
lean_dec_ref_known(v___y_3352_, 1);
if (lean_obj_tag(v_val_3353_) == 4)
{
lean_object* v_val_3354_; lean_object* v_s_3355_; lean_object* v___x_3356_; 
v_val_3354_ = lean_ctor_get(v_onUrlChange_3335_, 0);
lean_inc(v_val_3354_);
lean_dec_ref_known(v_onUrlChange_3335_, 1);
v_s_3355_ = lean_ctor_get(v_val_3353_, 0);
lean_inc_ref(v_s_3355_);
lean_dec_ref_known(v_val_3353_, 1);
v___x_3356_ = l_Lasm_UI_Url_parse(v_s_3355_);
if (lean_obj_tag(v___x_3356_) == 1)
{
lean_object* v_val_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v_val_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc(v_val_3357_);
lean_dec_ref_known(v___x_3356_, 1);
v___x_3358_ = lean_apply_1(v_val_3354_, v_val_3357_);
lean_inc_ref(v___x_3334_);
v___x_3359_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3334_, v___x_3358_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_dec_ref_known(v___x_3359_, 1);
goto v___jp_3339_;
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec_ref(v___x_3334_);
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3359_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3359_);
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
else
{
lean_dec(v___x_3356_);
lean_dec(v_val_3354_);
goto v___jp_3339_;
}
}
else
{
lean_dec(v_val_3353_);
lean_dec_ref_known(v_onUrlChange_3335_, 1);
goto v___jp_3339_;
}
}
else
{
lean_dec_ref_known(v_onUrlChange_3335_, 1);
lean_dec(v___y_3352_);
goto v___jp_3339_;
}
}
else
{
lean_dec(v___y_3352_);
lean_dec(v_onUrlChange_3335_);
goto v___jp_3339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__0___boxed(lean_object* v___x_3373_, lean_object* v_onUrlChange_3374_, lean_object* v___x_3375_, lean_object* v_args_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lasm_UI_App_run___redArg___lam__0(v___x_3373_, v_onUrlChange_3374_, v___x_3375_, v_args_3376_);
lean_dec_ref(v_args_3376_);
lean_dec(v___x_3375_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1(lean_object* v___x_3379_, lean_object* v_x_3380_){
_start:
{
lean_object* v___x_3382_; lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3391_; 
v___x_3382_ = l_Lasm_UI_Runtime_frame___redArg(v___x_3379_);
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3385_ = v___x_3382_;
v_isShared_3386_ = v_isSharedCheck_3391_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3382_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3391_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3387_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3387_, 0, v_a_3383_);
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v___x_3387_);
v___x_3389_ = v___x_3385_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3387_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__1___boxed(lean_object* v___x_3392_, lean_object* v_x_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lasm_UI_App_run___redArg___lam__1(v___x_3392_, v_x_3393_);
lean_dec_ref(v_x_3393_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2(lean_object* v___x_3396_, lean_object* v___x_3397_, lean_object* v_a_3398_, lean_object* v_x_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v___y_3403_; lean_object* v___x_3421_; 
v___x_3421_ = l_Lasm_UI_Runtime_perform___redArg(v___x_3397_, v_a_3398_);
if (lean_obj_tag(v___x_3421_) == 0)
{
v___y_3403_ = v___x_3421_;
goto v___jp_3402_;
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc(v_a_3422_);
lean_dec_ref_known(v___x_3421_, 1);
v___x_3423_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Runtime_deliver_spec__14___redArg___closed__0));
v___x_3424_ = l_Lasm_UI_Runtime_report(v___x_3423_, v_a_3422_);
v___y_3403_ = v___x_3424_;
goto v___jp_3402_;
}
v___jp_3402_:
{
if (lean_obj_tag(v___y_3403_) == 0)
{
lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3411_; 
v_isSharedCheck_3411_ = !lean_is_exclusive(v___y_3403_);
if (v_isSharedCheck_3411_ == 0)
{
lean_object* v_unused_3412_; 
v_unused_3412_ = lean_ctor_get(v___y_3403_, 0);
lean_dec(v_unused_3412_);
v___x_3405_ = v___y_3403_;
v_isShared_3406_ = v_isSharedCheck_3411_;
goto v_resetjp_3404_;
}
else
{
lean_dec(v___y_3403_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3411_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3407_; lean_object* v___x_3409_; 
v___x_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3396_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 0, v___x_3407_);
v___x_3409_ = v___x_3405_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
v_a_3413_ = lean_ctor_get(v___y_3403_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___y_3403_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___y_3403_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___y_3403_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__2___boxed(lean_object* v___x_3425_, lean_object* v___x_3426_, lean_object* v_a_3427_, lean_object* v_x_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lasm_UI_App_run___redArg___lam__2(v___x_3425_, v___x_3426_, v_a_3427_, v_x_3428_, v___y_3429_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3(lean_object* v_val_3432_, lean_object* v___x_3433_, lean_object* v_d_3434_){
_start:
{
lean_object* v___x_3436_; 
v___x_3436_ = lean_apply_1(v_val_3432_, v_d_3434_);
if (lean_obj_tag(v___x_3436_) == 1)
{
lean_object* v_val_3437_; lean_object* v___x_3438_; 
v_val_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc(v_val_3437_);
lean_dec_ref_known(v___x_3436_, 1);
lean_inc_ref(v___x_3433_);
v___x_3438_ = l_Lasm_UI_Runtime_deliver___redArg(v___x_3433_, v_val_3437_);
if (lean_obj_tag(v___x_3438_) == 0)
{
lean_object* v___x_3439_; 
lean_dec_ref_known(v___x_3438_, 1);
v___x_3439_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3433_);
lean_dec_ref(v___x_3433_);
return v___x_3439_;
}
else
{
lean_dec_ref(v___x_3433_);
return v___x_3438_;
}
}
else
{
lean_object* v___x_3440_; 
lean_dec(v___x_3436_);
v___x_3440_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___x_3433_);
lean_dec_ref(v___x_3433_);
return v___x_3440_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___lam__3___boxed(lean_object* v_val_3441_, lean_object* v___x_3442_, lean_object* v_d_3443_, lean_object* v___y_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lasm_UI_App_run___redArg___lam__3(v_val_3441_, v___x_3442_, v_d_3443_);
return v_res_3445_;
}
}
static lean_object* _init_l_Lasm_UI_App_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_3446_; 
v___x_3446_ = l_instMonadEIO___redArg();
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg(lean_object* v_inst_3461_, lean_object* v_app_3462_){
_start:
{
lean_object* v___x_3464_; lean_object* v___y_3466_; lean_object* v___y_3467_; uint8_t v___y_3468_; lean_object* v___y_3469_; lean_object* v___y_3470_; lean_object* v___y_3471_; uint8_t v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; uint8_t v___y_3479_; lean_object* v___x_3569_; 
v___x_3464_ = lean_obj_once(&l_Lasm_UI_App_run___redArg___closed__0, &l_Lasm_UI_App_run___redArg___closed__0_once, _init_l_Lasm_UI_App_run___redArg___closed__0);
v___x_3569_ = l_Lasm_UI_Runtime_Dom_options();
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3570_);
lean_dec_ref_known(v___x_3569_, 1);
v___x_3571_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__1));
v___x_3572_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__2));
v___x_3573_ = l_Lasm_JS_Data_field(v_a_3570_, v___x_3572_);
v___x_3574_ = l_Lasm_JS_decodeAs___redArg(v_inst_3461_, v___x_3571_, v___x_3573_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3576_; lean_object* v___y_3578_; lean_object* v___y_3579_; uint8_t v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; uint8_t v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3604_; lean_object* v___x_3678_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v___x_3576_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__3));
v___x_3678_ = l_Lasm_JS_Data_field(v_a_3570_, v___x_3576_);
lean_dec(v_a_3570_);
if (lean_obj_tag(v___x_3678_) == 4)
{
lean_object* v_s_3679_; lean_object* v___x_3680_; 
v_s_3679_ = lean_ctor_get(v___x_3678_, 0);
lean_inc_ref(v_s_3679_);
lean_dec_ref_known(v___x_3678_, 1);
v___x_3680_ = l_Lasm_UI_Url_parse(v_s_3679_);
if (lean_obj_tag(v___x_3680_) == 0)
{
goto v___jp_3676_;
}
else
{
lean_object* v_val_3681_; 
v_val_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_val_3681_);
lean_dec_ref_known(v___x_3680_, 1);
v___y_3604_ = v_val_3681_;
goto v___jp_3603_;
}
}
else
{
lean_dec(v___x_3678_);
goto v___jp_3676_;
}
v___jp_3577_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3590_ = ((lean_object*)(l_Lasm_UI_Runtime_specData___closed__3));
v___x_3591_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_timeout___closed__2));
v___x_3592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3592_, 0, v___y_3581_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3590_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__4));
v___x_3595_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___y_3584_);
lean_ctor_set(v___x_3595_, 1, v___x_3591_);
v___x_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3594_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
v___x_3597_ = ((lean_object*)(l_Lasm_UI_Runtime_Dom_sub___closed__0));
v___x_3598_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___y_3589_);
lean_ctor_set(v___x_3598_, 1, v___x_3591_);
v___x_3599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3597_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___y_3582_);
lean_ctor_set(v___x_3600_, 1, v___x_3591_);
v___x_3601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3576_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__5));
if (lean_obj_tag(v___y_3588_) == 0)
{
lean_inc_ref(v___y_3579_);
v___y_3466_ = v___y_3579_;
v___y_3467_ = v___x_3596_;
v___y_3468_ = v___y_3583_;
v___y_3469_ = v___x_3593_;
v___y_3470_ = v___y_3578_;
v___y_3471_ = v___x_3599_;
v___y_3472_ = v___y_3580_;
v___y_3473_ = v___x_3602_;
v___y_3474_ = v___y_3585_;
v___y_3475_ = v___x_3601_;
v___y_3476_ = v___y_3586_;
v___y_3477_ = v___y_3579_;
v___y_3478_ = v___y_3587_;
v___y_3479_ = v___y_3583_;
goto v___jp_3465_;
}
else
{
lean_dec_ref_known(v___y_3588_, 1);
lean_inc_ref(v___y_3579_);
v___y_3466_ = v___y_3579_;
v___y_3467_ = v___x_3596_;
v___y_3468_ = v___y_3583_;
v___y_3469_ = v___x_3593_;
v___y_3470_ = v___y_3578_;
v___y_3471_ = v___x_3599_;
v___y_3472_ = v___y_3580_;
v___y_3473_ = v___x_3602_;
v___y_3474_ = v___y_3585_;
v___y_3475_ = v___x_3601_;
v___y_3476_ = v___y_3586_;
v___y_3477_ = v___y_3579_;
v___y_3478_ = v___y_3587_;
v___y_3479_ = v___y_3580_;
goto v___jp_3465_;
}
}
v___jp_3603_:
{
lean_object* v_init_3605_; lean_object* v_onUrlChange_3606_; lean_object* v_receive_3607_; lean_object* v___x_3608_; lean_object* v_fst_3609_; lean_object* v_snd_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3675_; 
v_init_3605_ = lean_ctor_get(v_app_3462_, 0);
v_onUrlChange_3606_ = lean_ctor_get(v_app_3462_, 4);
lean_inc(v_onUrlChange_3606_);
v_receive_3607_ = lean_ctor_get(v_app_3462_, 5);
lean_inc(v_receive_3607_);
lean_inc_ref(v_init_3605_);
v___x_3608_ = lean_apply_2(v_init_3605_, v_a_3575_, v___y_3604_);
v_fst_3609_ = lean_ctor_get(v___x_3608_, 0);
v_snd_3610_ = lean_ctor_get(v___x_3608_, 1);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3612_ = v___x_3608_;
v_isShared_3613_ = v_isSharedCheck_3675_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_snd_3610_);
lean_inc(v_fst_3609_);
lean_dec(v___x_3608_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3675_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; uint8_t v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3625_; 
v___x_3614_ = lean_box(0);
v___x_3615_ = lean_unsigned_to_nat(1u);
v___x_3616_ = lean_unsigned_to_nat(0u);
v___x_3617_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__2, &l_Lasm_UI_Runtime_frame___redArg___closed__2_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__2);
v___x_3618_ = lean_obj_once(&l_Lasm_UI_Runtime_frame___redArg___closed__3, &l_Lasm_UI_Runtime_frame___redArg___closed__3_once, _init_l_Lasm_UI_Runtime_frame___redArg___closed__3);
v___x_3619_ = 1;
v___x_3620_ = 0;
v___x_3621_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__6));
v___x_3622_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_3622_, 0, v_fst_3609_);
lean_ctor_set(v___x_3622_, 1, v___x_3614_);
lean_ctor_set(v___x_3622_, 2, v___x_3615_);
lean_ctor_set(v___x_3622_, 3, v___x_3618_);
lean_ctor_set(v___x_3622_, 4, v___x_3621_);
lean_ctor_set(v___x_3622_, 5, v___x_3617_);
lean_ctor_set(v___x_3622_, 6, v___x_3617_);
lean_ctor_set(v___x_3622_, 7, v___x_3615_);
lean_ctor_set(v___x_3622_, 8, v___x_3621_);
lean_ctor_set(v___x_3622_, 9, v___x_3614_);
lean_ctor_set_uint8(v___x_3622_, sizeof(void*)*10, v___x_3619_);
lean_ctor_set_uint8(v___x_3622_, sizeof(void*)*10 + 1, v___x_3620_);
lean_ctor_set_uint8(v___x_3622_, sizeof(void*)*10 + 2, v___x_3620_);
v___x_3623_ = lean_st_mk_ref(v___x_3622_);
lean_inc(v___x_3623_);
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 1, v___x_3623_);
lean_ctor_set(v___x_3612_, 0, v_app_3462_);
v___x_3625_ = v___x_3612_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_app_3462_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v___x_3623_);
v___x_3625_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___f_3626_; lean_object* v___f_3627_; lean_object* v___x_3628_; 
lean_inc(v_onUrlChange_3606_);
lean_inc_ref_n(v___x_3625_, 2);
v___f_3626_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3626_, 0, v___x_3625_);
lean_closure_set(v___f_3626_, 1, v_onUrlChange_3606_);
lean_closure_set(v___f_3626_, 2, v___x_3616_);
v___f_3627_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3627_, 0, v___x_3625_);
v___x_3628_ = l_Lasm_JS_Function_ofSyncFn(v___f_3627_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3628_, 1);
lean_inc_ref(v___x_3625_);
v___x_3630_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onEvent___boxed), 6, 4);
lean_closure_set(v___x_3630_, 0, lean_box(0));
lean_closure_set(v___x_3630_, 1, lean_box(0));
lean_closure_set(v___x_3630_, 2, lean_box(0));
lean_closure_set(v___x_3630_, 3, v___x_3625_);
v___x_3631_ = l_Lasm_JS_Function_ofSyncFn(v___x_3630_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v_a_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
lean_inc(v_a_3632_);
lean_dec_ref_known(v___x_3631_, 1);
lean_inc_ref(v___x_3625_);
v___x_3633_ = lean_alloc_closure((void*)(l_Lasm_UI_Runtime_onSub___boxed), 6, 4);
lean_closure_set(v___x_3633_, 0, lean_box(0));
lean_closure_set(v___x_3633_, 1, lean_box(0));
lean_closure_set(v___x_3633_, 2, lean_box(0));
lean_closure_set(v___x_3633_, 3, v___x_3625_);
v___x_3634_ = l_Lasm_JS_Function_ofSyncFn(v___x_3633_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v_a_3635_; lean_object* v___x_3636_; 
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3634_, 1);
v___x_3636_ = l_Lasm_JS_Function_ofSyncFn(v___f_3626_);
if (lean_obj_tag(v___x_3636_) == 0)
{
if (lean_obj_tag(v_receive_3607_) == 1)
{
lean_object* v_a_3637_; lean_object* v_val_3638_; lean_object* v___f_3639_; lean_object* v___x_3640_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v_val_3638_ = lean_ctor_get(v_receive_3607_, 0);
lean_inc(v_val_3638_);
lean_dec_ref_known(v_receive_3607_, 1);
lean_inc_ref(v___x_3625_);
v___f_3639_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3639_, 0, v_val_3638_);
lean_closure_set(v___f_3639_, 1, v___x_3625_);
v___x_3640_ = l_Lasm_Web_App_onMessage(v___f_3639_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_dec_ref_known(v___x_3640_, 1);
v___y_3578_ = v___x_3623_;
v___y_3579_ = v___x_3625_;
v___y_3580_ = v___x_3619_;
v___y_3581_ = v_a_3629_;
v___y_3582_ = v_a_3637_;
v___y_3583_ = v___x_3620_;
v___y_3584_ = v_a_3632_;
v___y_3585_ = v___x_3615_;
v___y_3586_ = v_snd_3610_;
v___y_3587_ = v___x_3616_;
v___y_3588_ = v_onUrlChange_3606_;
v___y_3589_ = v_a_3635_;
goto v___jp_3577_;
}
else
{
lean_dec(v_a_3637_);
lean_dec(v_a_3635_);
lean_dec(v_a_3632_);
lean_dec(v_a_3629_);
lean_dec_ref(v___x_3625_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3610_);
lean_dec(v_onUrlChange_3606_);
return v___x_3640_;
}
}
else
{
lean_object* v_a_3641_; 
lean_dec(v_receive_3607_);
v_a_3641_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v___x_3636_, 1);
v___y_3578_ = v___x_3623_;
v___y_3579_ = v___x_3625_;
v___y_3580_ = v___x_3619_;
v___y_3581_ = v_a_3629_;
v___y_3582_ = v_a_3641_;
v___y_3583_ = v___x_3620_;
v___y_3584_ = v_a_3632_;
v___y_3585_ = v___x_3615_;
v___y_3586_ = v_snd_3610_;
v___y_3587_ = v___x_3616_;
v___y_3588_ = v_onUrlChange_3606_;
v___y_3589_ = v_a_3635_;
goto v___jp_3577_;
}
}
else
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_dec(v_a_3635_);
lean_dec(v_a_3632_);
lean_dec(v_a_3629_);
lean_dec_ref(v___x_3625_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3610_);
lean_dec(v_receive_3607_);
lean_dec(v_onUrlChange_3606_);
v_a_3642_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3636_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3636_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3657_; 
lean_dec(v_a_3632_);
lean_dec(v_a_3629_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___x_3625_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3610_);
lean_dec(v_receive_3607_);
lean_dec(v_onUrlChange_3606_);
v_a_3650_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3652_ = v___x_3634_;
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3634_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3657_;
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
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
else
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3665_; 
lean_dec(v_a_3629_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___x_3625_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3610_);
lean_dec(v_receive_3607_);
lean_dec(v_onUrlChange_3606_);
v_a_3658_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3660_ = v___x_3631_;
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3631_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___x_3625_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3610_);
lean_dec(v_receive_3607_);
lean_dec(v_onUrlChange_3606_);
v_a_3666_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3628_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3628_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
}
}
v___jp_3676_:
{
lean_object* v___x_3677_; 
v___x_3677_ = ((lean_object*)(l_Lasm_UI_App_run___redArg___closed__9));
v___y_3604_ = v___x_3677_;
goto v___jp_3603_;
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec(v_a_3570_);
lean_dec_ref(v_app_3462_);
v_a_3682_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3574_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3574_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec_ref(v_app_3462_);
lean_dec_ref(v_inst_3461_);
v_a_3690_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3569_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3569_);
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
v___jp_3465_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3480_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3480_, 0, v___y_3479_);
lean_inc_ref(v___y_3473_);
v___x_3481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___y_3473_);
lean_ctor_set(v___x_3481_, 1, v___x_3480_);
v___x_3482_ = lean_box(0);
v___x_3483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v___x_3484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___y_3475_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
v___x_3485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___y_3471_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___y_3467_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
v___x_3487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___y_3469_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = l_Lasm_JS_obj(v___x_3487_);
v___x_3489_ = l_Lasm_UI_Runtime_Dom_connect(v___x_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v___x_3490_; lean_object* v_a_3491_; lean_object* v___x_3492_; 
lean_dec_ref_known(v___x_3489_, 1);
lean_inc_ref(v___y_3477_);
v___x_3490_ = l_Lasm_UI_Runtime_frame___redArg(v___y_3477_);
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref(v___x_3490_);
v___x_3492_ = l_Lasm_UI_Runtime_Dom_apply(v_a_3491_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v___x_3493_; lean_object* v_model_3494_; lean_object* v_live_3495_; lean_object* v_next_3496_; lean_object* v_tables_3497_; uint8_t v_dirty_3498_; uint8_t v_scheduled_3499_; lean_object* v_queue_3500_; lean_object* v_subs_3501_; lean_object* v_handlers_3502_; lean_object* v_nextSub_3503_; lean_object* v_touched_3504_; lean_object* v_ports_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3568_; 
lean_dec_ref_known(v___x_3492_, 1);
v___x_3493_ = lean_st_ref_take(v___y_3470_);
v_model_3494_ = lean_ctor_get(v___x_3493_, 0);
v_live_3495_ = lean_ctor_get(v___x_3493_, 1);
v_next_3496_ = lean_ctor_get(v___x_3493_, 2);
v_tables_3497_ = lean_ctor_get(v___x_3493_, 3);
v_dirty_3498_ = lean_ctor_get_uint8(v___x_3493_, sizeof(void*)*10);
v_scheduled_3499_ = lean_ctor_get_uint8(v___x_3493_, sizeof(void*)*10 + 1);
v_queue_3500_ = lean_ctor_get(v___x_3493_, 4);
v_subs_3501_ = lean_ctor_get(v___x_3493_, 5);
v_handlers_3502_ = lean_ctor_get(v___x_3493_, 6);
v_nextSub_3503_ = lean_ctor_get(v___x_3493_, 7);
v_touched_3504_ = lean_ctor_get(v___x_3493_, 8);
v_ports_3505_ = lean_ctor_get(v___x_3493_, 9);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3507_ = v___x_3493_;
v_isShared_3508_ = v_isSharedCheck_3568_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_ports_3505_);
lean_inc(v_touched_3504_);
lean_inc(v_nextSub_3503_);
lean_inc(v_handlers_3502_);
lean_inc(v_subs_3501_);
lean_inc(v_queue_3500_);
lean_inc(v_tables_3497_);
lean_inc(v_next_3496_);
lean_inc(v_live_3495_);
lean_inc(v_model_3494_);
lean_dec(v___x_3493_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3568_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_model_3494_);
lean_ctor_set(v_reuseFailAlloc_3567_, 1, v_live_3495_);
lean_ctor_set(v_reuseFailAlloc_3567_, 2, v_next_3496_);
lean_ctor_set(v_reuseFailAlloc_3567_, 3, v_tables_3497_);
lean_ctor_set(v_reuseFailAlloc_3567_, 4, v_queue_3500_);
lean_ctor_set(v_reuseFailAlloc_3567_, 5, v_subs_3501_);
lean_ctor_set(v_reuseFailAlloc_3567_, 6, v_handlers_3502_);
lean_ctor_set(v_reuseFailAlloc_3567_, 7, v_nextSub_3503_);
lean_ctor_set(v_reuseFailAlloc_3567_, 8, v_touched_3504_);
lean_ctor_set(v_reuseFailAlloc_3567_, 9, v_ports_3505_);
lean_ctor_set_uint8(v_reuseFailAlloc_3567_, sizeof(void*)*10, v_dirty_3498_);
lean_ctor_set_uint8(v_reuseFailAlloc_3567_, sizeof(void*)*10 + 1, v_scheduled_3499_);
v___x_3510_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___f_3513_; lean_object* v___x_4127__overap_3514_; lean_object* v___x_3515_; 
lean_ctor_set_uint8(v___x_3510_, sizeof(void*)*10 + 2, v___y_3472_);
v___x_3511_ = lean_st_ref_put(v___y_3470_, v___x_3510_);
v___x_3512_ = lean_box(0);
v___f_3513_ = lean_alloc_closure((void*)(l_Lasm_UI_App_run___redArg___lam__2___boxed), 6, 2);
lean_closure_set(v___f_3513_, 0, v___x_3512_);
lean_closure_set(v___f_3513_, 1, v___y_3466_);
v___x_4127__overap_3514_ = l_List_forIn_x27_loop___redArg(v___x_3464_, v___f_3513_, v___y_3476_, v___x_3512_);
lean_dec(v___y_3476_);
v___x_3515_ = lean_apply_1(v___x_4127__overap_3514_, lean_box(0));
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v___x_3516_; lean_object* v_model_3517_; lean_object* v_live_3518_; lean_object* v_next_3519_; lean_object* v_tables_3520_; uint8_t v_dirty_3521_; uint8_t v_scheduled_3522_; lean_object* v_queue_3523_; lean_object* v_subs_3524_; lean_object* v_handlers_3525_; lean_object* v_nextSub_3526_; lean_object* v_touched_3527_; lean_object* v_ports_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3566_; 
lean_dec_ref_known(v___x_3515_, 1);
v___x_3516_ = lean_st_ref_take(v___y_3470_);
v_model_3517_ = lean_ctor_get(v___x_3516_, 0);
v_live_3518_ = lean_ctor_get(v___x_3516_, 1);
v_next_3519_ = lean_ctor_get(v___x_3516_, 2);
v_tables_3520_ = lean_ctor_get(v___x_3516_, 3);
v_dirty_3521_ = lean_ctor_get_uint8(v___x_3516_, sizeof(void*)*10);
v_scheduled_3522_ = lean_ctor_get_uint8(v___x_3516_, sizeof(void*)*10 + 1);
v_queue_3523_ = lean_ctor_get(v___x_3516_, 4);
v_subs_3524_ = lean_ctor_get(v___x_3516_, 5);
v_handlers_3525_ = lean_ctor_get(v___x_3516_, 6);
v_nextSub_3526_ = lean_ctor_get(v___x_3516_, 7);
v_touched_3527_ = lean_ctor_get(v___x_3516_, 8);
v_ports_3528_ = lean_ctor_get(v___x_3516_, 9);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3530_ = v___x_3516_;
v_isShared_3531_ = v_isSharedCheck_3566_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_ports_3528_);
lean_inc(v_touched_3527_);
lean_inc(v_nextSub_3526_);
lean_inc(v_handlers_3525_);
lean_inc(v_subs_3524_);
lean_inc(v_queue_3523_);
lean_inc(v_tables_3520_);
lean_inc(v_next_3519_);
lean_inc(v_live_3518_);
lean_inc(v_model_3517_);
lean_dec(v___x_3516_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3566_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_model_3517_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_live_3518_);
lean_ctor_set(v_reuseFailAlloc_3565_, 2, v_next_3519_);
lean_ctor_set(v_reuseFailAlloc_3565_, 3, v_tables_3520_);
lean_ctor_set(v_reuseFailAlloc_3565_, 4, v_queue_3523_);
lean_ctor_set(v_reuseFailAlloc_3565_, 5, v_subs_3524_);
lean_ctor_set(v_reuseFailAlloc_3565_, 6, v_handlers_3525_);
lean_ctor_set(v_reuseFailAlloc_3565_, 7, v_nextSub_3526_);
lean_ctor_set(v_reuseFailAlloc_3565_, 8, v_touched_3527_);
lean_ctor_set(v_reuseFailAlloc_3565_, 9, v_ports_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3565_, sizeof(void*)*10, v_dirty_3521_);
lean_ctor_set_uint8(v_reuseFailAlloc_3565_, sizeof(void*)*10 + 1, v_scheduled_3522_);
v___x_3533_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v_model_3536_; lean_object* v_live_3537_; lean_object* v_next_3538_; lean_object* v_tables_3539_; uint8_t v_dirty_3540_; uint8_t v_scheduled_3541_; lean_object* v_queue_3542_; uint8_t v_busy_3543_; lean_object* v_subs_3544_; lean_object* v_handlers_3545_; lean_object* v_nextSub_3546_; lean_object* v_touched_3547_; lean_object* v_ports_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3564_; 
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*10 + 2, v___y_3468_);
v___x_3534_ = lean_st_ref_put(v___y_3470_, v___x_3533_);
v___x_3535_ = lean_st_ref_get(v___y_3470_);
v_model_3536_ = lean_ctor_get(v___x_3535_, 0);
v_live_3537_ = lean_ctor_get(v___x_3535_, 1);
v_next_3538_ = lean_ctor_get(v___x_3535_, 2);
v_tables_3539_ = lean_ctor_get(v___x_3535_, 3);
v_dirty_3540_ = lean_ctor_get_uint8(v___x_3535_, sizeof(void*)*10);
v_scheduled_3541_ = lean_ctor_get_uint8(v___x_3535_, sizeof(void*)*10 + 1);
v_queue_3542_ = lean_ctor_get(v___x_3535_, 4);
v_busy_3543_ = lean_ctor_get_uint8(v___x_3535_, sizeof(void*)*10 + 2);
v_subs_3544_ = lean_ctor_get(v___x_3535_, 5);
v_handlers_3545_ = lean_ctor_get(v___x_3535_, 6);
v_nextSub_3546_ = lean_ctor_get(v___x_3535_, 7);
v_touched_3547_ = lean_ctor_get(v___x_3535_, 8);
v_ports_3548_ = lean_ctor_get(v___x_3535_, 9);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3550_ = v___x_3535_;
v_isShared_3551_ = v_isSharedCheck_3564_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_ports_3548_);
lean_inc(v_touched_3547_);
lean_inc(v_nextSub_3546_);
lean_inc(v_handlers_3545_);
lean_inc(v_subs_3544_);
lean_inc(v_queue_3542_);
lean_inc(v_tables_3539_);
lean_inc(v_next_3538_);
lean_inc(v_live_3537_);
lean_inc(v_model_3536_);
lean_dec(v___x_3535_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3564_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3552_ = lean_array_get_size(v_queue_3542_);
v___x_3553_ = lean_nat_dec_lt(v___y_3478_, v___x_3552_);
if (v___x_3553_ == 0)
{
lean_object* v___x_3554_; 
lean_del_object(v___x_3550_);
lean_dec(v_ports_3548_);
lean_dec_ref(v_touched_3547_);
lean_dec(v_nextSub_3546_);
lean_dec_ref(v_handlers_3545_);
lean_dec_ref(v_subs_3544_);
lean_dec_ref(v_queue_3542_);
lean_dec_ref(v_tables_3539_);
lean_dec(v_next_3538_);
lean_dec(v_live_3537_);
lean_dec(v_model_3536_);
lean_dec(v___y_3478_);
lean_dec(v___y_3474_);
lean_dec(v___y_3470_);
lean_inc_ref(v___y_3477_);
v___x_3554_ = l_Lasm_UI_Runtime_syncSubs___redArg(v___y_3477_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v___x_3555_; 
lean_dec_ref_known(v___x_3554_, 1);
v___x_3555_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3477_);
lean_dec_ref(v___y_3477_);
return v___x_3555_;
}
else
{
lean_dec_ref(v___y_3477_);
return v___x_3554_;
}
}
else
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3559_; 
v___x_3556_ = lean_array_fget(v_queue_3542_, v___y_3478_);
lean_dec(v___y_3478_);
v___x_3557_ = l_Array_extract___redArg(v_queue_3542_, v___y_3474_, v___x_3552_);
lean_dec_ref(v_queue_3542_);
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 4, v___x_3557_);
v___x_3559_ = v___x_3550_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_model_3536_);
lean_ctor_set(v_reuseFailAlloc_3563_, 1, v_live_3537_);
lean_ctor_set(v_reuseFailAlloc_3563_, 2, v_next_3538_);
lean_ctor_set(v_reuseFailAlloc_3563_, 3, v_tables_3539_);
lean_ctor_set(v_reuseFailAlloc_3563_, 4, v___x_3557_);
lean_ctor_set(v_reuseFailAlloc_3563_, 5, v_subs_3544_);
lean_ctor_set(v_reuseFailAlloc_3563_, 6, v_handlers_3545_);
lean_ctor_set(v_reuseFailAlloc_3563_, 7, v_nextSub_3546_);
lean_ctor_set(v_reuseFailAlloc_3563_, 8, v_touched_3547_);
lean_ctor_set(v_reuseFailAlloc_3563_, 9, v_ports_3548_);
lean_ctor_set_uint8(v_reuseFailAlloc_3563_, sizeof(void*)*10, v_dirty_3540_);
lean_ctor_set_uint8(v_reuseFailAlloc_3563_, sizeof(void*)*10 + 1, v_scheduled_3541_);
lean_ctor_set_uint8(v_reuseFailAlloc_3563_, sizeof(void*)*10 + 2, v_busy_3543_);
v___x_3559_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = lean_st_ref_swap(v___y_3470_, v___x_3559_);
lean_dec(v___y_3470_);
lean_dec(v___x_3560_);
lean_inc_ref(v___y_3477_);
v___x_3561_ = l_Lasm_UI_Runtime_deliver___redArg(v___y_3477_, v___x_3556_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v___x_3562_; 
lean_dec_ref_known(v___x_3561_, 1);
v___x_3562_ = l_Lasm_UI_Runtime_requestFrame___redArg(v___y_3477_);
lean_dec_ref(v___y_3477_);
return v___x_3562_;
}
else
{
lean_dec_ref(v___y_3477_);
return v___x_3561_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3474_);
lean_dec(v___y_3470_);
return v___x_3515_;
}
}
}
}
else
{
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec(v___y_3474_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3466_);
return v___x_3492_;
}
}
else
{
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec(v___y_3474_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3466_);
return v___x_3489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___redArg___boxed(lean_object* v_inst_3698_, lean_object* v_app_3699_, lean_object* v_a_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_UI_App_run___redArg(v_inst_3698_, v_app_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run(lean_object* v_Flags_3702_, lean_object* v_Model_3703_, lean_object* v_Msg_3704_, lean_object* v_inst_3705_, lean_object* v_app_3706_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l_Lasm_UI_App_run___redArg(v_inst_3705_, v_app_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_App_run___boxed(lean_object* v_Flags_3709_, lean_object* v_Model_3710_, lean_object* v_Msg_3711_, lean_object* v_inst_3712_, lean_object* v_app_3713_, lean_object* v_a_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l_Lasm_UI_App_run(v_Flags_3709_, v_Model_3710_, v_Msg_3711_, v_inst_3712_, v_app_3713_);
return v_res_3715_;
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
