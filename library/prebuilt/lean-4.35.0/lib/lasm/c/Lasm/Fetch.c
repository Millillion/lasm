// Lean compiler output
// Module: Lasm.Fetch
// Imports: public import Init public meta import Init public import Lasm.JS.Core
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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
uint32_t l_Char_ofNat(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint16_t lean_float_to_uint16(double);
lean_object* lean_get_stdout();
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_waitForever();
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lasm_JS_Function_ofFnReply(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* l_List_range(lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
lean_object* l_List_toByteArray(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_onEdge();
lean_object* l_Lasm_JS_exportDefault(lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest_default___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest_default___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__0 = (const lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value;
static const lean_array_object l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__1 = (const lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_instInhabitedRequest_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_instInhabitedRequest_default___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__2 = (const lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__2_value;
static lean_once_cell_t l_Lasm_Fetch_instInhabitedRequest_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__3;
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest_default;
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest;
static lean_once_cell_t l_Lasm_Fetch_instInhabitedResponse_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_instInhabitedResponse_default___closed__0;
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedResponse_default;
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedResponse;
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_lower(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Fetch_percentDecode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_percentDecode___closed__0;
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Request_path___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_Fetch_Request_path___closed__0 = (const lean_object*)&l_Lasm_Fetch_Request_path___closed__0_value;
static const lean_string_object l_Lasm_Fetch_Request_path___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "://"};
static const lean_object* l_Lasm_Fetch_Request_path___closed__1 = (const lean_object*)&l_Lasm_Fetch_Request_path___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Request_query___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lasm_Fetch_Request_query___closed__0 = (const lean_object*)&l_Lasm_Fetch_Request_query___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object*);
static const lean_string_object l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0 = (const lean_object*)&l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Request_queryParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_Lasm_Fetch_Request_queryParams___closed__0 = (const lean_object*)&l_Lasm_Fetch_Request_queryParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_withBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_Fetch_Response_withBody___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_withBody___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object*, lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "text/plain; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_Response_text___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_text___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_html___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "text/html; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_Response_html___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_html___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_Fetch_Response_json___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_json___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object*, lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_redirect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lasm_Fetch_Response_redirect___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_redirect___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object*, lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object*);
static const lean_string_object l_Lasm_Fetch_Response_notFound___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Not Found\n"};
static const lean_object* l_Lasm_Fetch_Response_notFound___closed__0 = (const lean_object*)&l_Lasm_Fetch_Response_notFound___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch_Response_notFound___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_Response_notFound___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_notFound;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_respond___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Internal Server Error\n"};
static const lean_object* l_Lasm_Fetch_respond___lam__1___closed__0 = (const lean_object*)&l_Lasm_Fetch_respond___lam__1___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch_respond___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_respond___lam__1___closed__1;
static lean_once_cell_t l_Lasm_Fetch_respond___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_respond___lam__1___closed__2;
static lean_once_cell_t l_Lasm_Fetch_respond___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_respond___lam__1___closed__3;
static lean_once_cell_t l_Lasm_Fetch_respond___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_respond___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_respond___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.Fetch: the handler failed for "};
static const lean_object* l_Lasm_Fetch_respond___lam__3___closed__0 = (const lean_object*)&l_Lasm_Fetch_respond___lam__3___closed__0_value;
static const lean_string_object l_Lasm_Fetch_respond___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lasm_Fetch_respond___lam__3___closed__1 = (const lean_object*)&l_Lasm_Fetch_respond___lam__3___closed__1_value;
static const lean_string_object l_Lasm_Fetch_respond___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_Fetch_respond___lam__3___closed__2 = (const lean_object*)&l_Lasm_Fetch_respond___lam__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_respond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__0 = (const lean_object*)&l_Lasm_Fetch_respond___closed__0_value;
static const lean_closure_object l_Lasm_Fetch_respond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__1 = (const lean_object*)&l_Lasm_Fetch_respond___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_respond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__2 = (const lean_object*)&l_Lasm_Fetch_respond___closed__2_value;
static const lean_string_object l_Lasm_Fetch_respond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Lasm_Fetch_respond___closed__3 = (const lean_object*)&l_Lasm_Fetch_respond___closed__3_value;
static const lean_string_object l_Lasm_Fetch_respond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Lasm_Fetch_respond___closed__4 = (const lean_object*)&l_Lasm_Fetch_respond___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object*, lean_object*);
uint32_t lasm_fetch_platform(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object*);
lean_object* lasm_fetch_take_request();
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object*);
lean_object* lasm_fetch_send_response(uint16_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fetch_take_request_head();
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object*);
lean_object* lasm_fetch_read(uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object*, lean_object*);
lean_object* lasm_fetch_start_response(uint16_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fetch_write(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object*, lean_object*);
lean_object* lasm_fetch_finish(uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0 = (const lean_object*)&l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default = (const lean_object*)&l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Fetch_instInhabitedServeOptions = (const lean_object*)&l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__0_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getReader"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1_value;
static const lean_array_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__0_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "new"};
static const lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Response"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "write"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.Fetch: the streamed response failed: "};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getWriter"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "writable"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readable"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TransformStream"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformEnv;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 25, .m_data = "Array ((String × String))"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 35, .m_data = "an element is not (String × String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "from"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.Fetch: the fetch handler expected a Request"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__1 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__1_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__1_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__2_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__2_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6_value;
static const lean_array_object l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5_value),((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_jsFetchHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_jsFetchHandler___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__0_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Uint8Array"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__1 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__1_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__2___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__2___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__2___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__2___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__6___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "destroy"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__7___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object*, lean_object*, lean_object*, uint16_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "writeHead"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__11___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__11___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "concat"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "content-length"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "transfer-encoding"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__0_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toWeb"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__1_value;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__17___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__2;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__3_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "localhost:"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__4 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rawHeaders"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__19___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__19___closed__0_value;
static const lean_array_object l_Lasm_Fetch_serveNode___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5_value),((lean_object*)&l_Lasm_Fetch_serveNode___lam__19___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__19___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__19___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.Fetch: expected Node's request and response"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__22___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__22___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__1_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__1_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__22___closed__2 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__2_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__22___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__2_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__22___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__22___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Listening on http://"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__21___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__21___closed__0_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__21___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__21___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__23___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__23___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__23___closed__1;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__23___closed__2;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_serveNode___lam__23___closed__3;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__23___closed__4;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Fetch_serveNode___lam__23___closed__5;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__23___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__23___closed__6;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__0_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value)} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__2 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__2_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__2_value)} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__3_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__4 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__4_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "node:process"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__5 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__5_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTERM"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__6 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__6_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGINT"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__7 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__7_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_serveNode___closed__8 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__8_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__6_value),((lean_object*)&l_Lasm_Fetch_serveNode___closed__8_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___closed__9 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__9_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "node:http"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__10 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__10_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:stream"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__11 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__11_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Readable"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__12 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__12_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Buffer"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__13 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__13_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "createServer"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__14 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__14_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__15 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__15_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HOST"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__16 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__16_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PORT"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__17 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__17_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "0.0.0.0"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__18 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__18_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedFetchOptions_default;
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedFetchOptions;
lean_object* lasm_fetch_send(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.Fetch: truncated response"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__1_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__1_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__0_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "redirect"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__0_value;
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "manual"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__1_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__1_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__2_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__0_value),((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__2_value)}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__3 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__3_value;
static const lean_ctor_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_fetch___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.Fetch.fetch: the response was lost (internal error)"};
static const lean_object* l_Lasm_Fetch_fetch___lam__1___closed__0 = (const lean_object*)&l_Lasm_Fetch_fetch___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_fetch___lam__1___closed__1 = (const lean_object*)&l_Lasm_Fetch_fetch___lam__1___closed__1_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_Fetch_fetch___lam__1___closed__2 = (const lean_object*)&l_Lasm_Fetch_fetch___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Fetch_fetch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lasm_Fetch_fetch___closed__0;
static lean_once_cell_t l_Lasm_Fetch_fetch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_fetch___closed__1;
static const lean_closure_object l_Lasm_Fetch_fetch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_fetch___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_fetch___closed__2 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__2_value;
static const lean_closure_object l_Lasm_Fetch_fetch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_fetch___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_fetch___closed__3 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__3_value;
static lean_once_cell_t l_Lasm_Fetch_fetch___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_fetch___closed__4;
static lean_once_cell_t l_Lasm_Fetch_fetch___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_fetch___closed__5;
static lean_once_cell_t l_Lasm_Fetch_fetch___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_fetch___closed__6;
static const lean_string_object l_Lasm_Fetch_fetch___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "Lasm.Fetch.fetch: needs a program built by Lasm; this program runs natively"};
static const lean_object* l_Lasm_Fetch_fetch___closed__7 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__7_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__7_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__8 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__8_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__8_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__9 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__9_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__9_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__10 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__10_value;
static const lean_string_object l_Lasm_Fetch_fetch___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 180, .m_capacity = 180, .m_length = 179, .m_data = "Lasm.Fetch.fetch: outbound HTTP is not available in a WASI preview 1 program (it has no sockets); build with --target fastly or --target wasi-http, or for Node or an edge platform"};
static const lean_object* l_Lasm_Fetch_fetch___closed__11 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__11_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__11_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__12 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__12_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__12_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__13 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__13_value;
static const lean_ctor_object l_Lasm_Fetch_fetch___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_fetch___closed__13_value)}};
static const lean_object* l_Lasm_Fetch_fetch___closed__14 = (const lean_object*)&l_Lasm_Fetch_fetch___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_post___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_Fetch_post___closed__0 = (const lean_object*)&l_Lasm_Fetch_post___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0_value;
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1_value;
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2_value;
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3_value;
static const lean_closure_object l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
static lean_once_cell_t l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 155, .m_capacity = 155, .m_length = 152, .m_data = "Lasm.Fetch.serve: serving needs a program built by Lasm (lasm build, or lasm build --target wasi|fastly|wasi-http|workers|…); this program runs natively"};
static const lean_object* l_Lasm_Fetch_serveWith___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveWith___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveWith___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveWith___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveWith___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest_default___lam__0(lean_object* v___x_1_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedRequest_default___lam__0___boxed(lean_object* v___x_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lasm_Fetch_instInhabitedRequest_default___lam__0(v___x_5_);
return v_res_7_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest_default___closed__3(void){
_start:
{
lean_object* v___f_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___f_13_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_14_ = l_ByteArray_empty;
v___x_15_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_16_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_17_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
lean_ctor_set(v___x_17_, 2, v___x_15_);
lean_ctor_set(v___x_17_, 3, v___x_14_);
lean_ctor_set(v___x_17_, 4, v___f_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest_default(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lasm_Fetch_instInhabitedRequest_default___closed__3, &l_Lasm_Fetch_instInhabitedRequest_default___closed__3_once, _init_l_Lasm_Fetch_instInhabitedRequest_default___closed__3);
return v___x_18_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lasm_Fetch_instInhabitedRequest_default;
return v___x_19_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse_default___closed__0(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint16_t v___x_23_; lean_object* v___x_24_; 
v___x_20_ = lean_box(0);
v___x_21_ = l_ByteArray_empty;
v___x_22_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_23_ = 200;
v___x_24_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_21_);
lean_ctor_set(v___x_24_, 2, v___x_20_);
lean_ctor_set_uint16(v___x_24_, sizeof(void*)*3, v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse_default(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_obj_once(&l_Lasm_Fetch_instInhabitedResponse_default___closed__0, &l_Lasm_Fetch_instInhabitedResponse_default___closed__0_once, _init_l_Lasm_Fetch_instInhabitedResponse_default___closed__0);
return v___x_25_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lasm_Fetch_instInhabitedResponse_default;
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(lean_object* v_s_27_, lean_object* v_p_28_){
_start:
{
uint32_t v___y_30_; lean_object* v___x_35_; uint8_t v_decide_36_; 
v___x_35_ = lean_string_utf8_byte_size(v_s_27_);
v_decide_36_ = lean_nat_dec_eq(v_p_28_, v___x_35_);
if (v_decide_36_ == 0)
{
uint32_t v___x_37_; uint32_t v___x_38_; uint8_t v___x_39_; 
v___x_37_ = lean_string_utf8_get_fast(v_s_27_, v_p_28_);
v___x_38_ = 65;
v___x_39_ = lean_uint32_dec_le(v___x_38_, v___x_37_);
if (v___x_39_ == 0)
{
v___y_30_ = v___x_37_;
goto v___jp_29_;
}
else
{
uint32_t v___x_40_; uint8_t v___x_41_; 
v___x_40_ = 90;
v___x_41_ = lean_uint32_dec_le(v___x_37_, v___x_40_);
if (v___x_41_ == 0)
{
v___y_30_ = v___x_37_;
goto v___jp_29_;
}
else
{
uint32_t v___x_42_; uint32_t v___x_43_; 
v___x_42_ = 32;
v___x_43_ = lean_uint32_add(v___x_37_, v___x_42_);
v___y_30_ = v___x_43_;
goto v___jp_29_;
}
}
}
else
{
lean_dec(v_p_28_);
return v_s_27_;
}
v___jp_29_:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
lean_inc(v_p_28_);
v___x_31_ = lean_string_utf8_set(v_s_27_, v_p_28_, v___y_30_);
v___x_32_ = l_Char_utf8Size(v___y_30_);
v___x_33_ = lean_nat_add(v_p_28_, v___x_32_);
lean_dec(v___x_32_);
lean_dec(v_p_28_);
v_s_27_ = v___x_31_;
v_p_28_ = v___x_33_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_lower(lean_object* v_s_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(v_s_44_, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(lean_object* v___f_47_, lean_object* v_fst_48_, lean_object* v_snd_49_, lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_box(0);
v___x_53_ = lean_apply_3(v___f_47_, v___x_52_, v_fst_48_, v_snd_49_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed(lean_object* v___f_54_, lean_object* v_fst_55_, lean_object* v_snd_56_, lean_object* v_x_57_, lean_object* v_x_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(v___f_54_, v_fst_55_, v_snd_56_, v_x_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_x_57_);
return v_res_59_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(lean_object* v_xs_60_, lean_object* v_i_61_){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = lean_byte_array_size(v_xs_60_);
v___x_63_ = lean_nat_dec_lt(v_i_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0___boxed(lean_object* v_xs_64_, lean_object* v_i_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_xs_64_, v_i_65_);
lean_dec(v_i_65_);
lean_dec_ref(v_xs_64_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(uint8_t v_plus_68_, uint8_t v___y_69_, lean_object* v_____r_70_, lean_object* v_out_71_, lean_object* v_i_72_){
_start:
{
uint8_t v___y_74_; 
if (v_plus_68_ == 0)
{
v___y_74_ = v___y_69_;
goto v___jp_73_;
}
else
{
uint8_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 43;
v___x_81_ = lean_uint8_dec_eq(v___y_69_, v___x_80_);
if (v___x_81_ == 0)
{
v___y_74_ = v___y_69_;
goto v___jp_73_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = 32;
v___y_74_ = v___x_82_;
goto v___jp_73_;
}
}
v___jp_73_:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = lean_byte_array_push(v_out_71_, v___y_74_);
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_add(v_i_72_, v___x_76_);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_75_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed(lean_object* v_plus_83_, lean_object* v___y_84_, lean_object* v_____r_85_, lean_object* v_out_86_, lean_object* v_i_87_){
_start:
{
uint8_t v_plus_boxed_88_; uint8_t v___y_2134__boxed_89_; lean_object* v_res_90_; 
v_plus_boxed_88_ = lean_unbox(v_plus_83_);
v___y_2134__boxed_89_ = lean_unbox(v___y_84_);
v_res_90_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(v_plus_boxed_88_, v___y_2134__boxed_89_, v_____r_85_, v_out_86_, v_i_87_);
lean_dec(v_i_87_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(uint32_t v_c_91_){
_start:
{
uint32_t v___x_116_; uint8_t v___x_117_; 
v___x_116_ = 48;
v___x_117_ = lean_uint32_dec_le(v___x_116_, v_c_91_);
if (v___x_117_ == 0)
{
goto v___jp_105_;
}
else
{
uint32_t v___x_118_; uint8_t v___x_119_; 
v___x_118_ = 57;
v___x_119_ = lean_uint32_dec_le(v_c_91_, v___x_118_);
if (v___x_119_ == 0)
{
goto v___jp_105_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_120_ = lean_uint32_to_nat(v_c_91_);
v___x_121_ = lean_unsigned_to_nat(48u);
v___x_122_ = lean_nat_sub(v___x_120_, v___x_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
v___jp_92_:
{
uint32_t v___x_93_; uint8_t v___x_94_; 
v___x_93_ = 65;
v___x_94_ = lean_uint32_dec_le(v___x_93_, v_c_91_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
v___x_95_ = lean_box(0);
return v___x_95_;
}
else
{
uint32_t v___x_96_; uint8_t v___x_97_; 
v___x_96_ = 70;
v___x_97_ = lean_uint32_dec_le(v_c_91_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_box(0);
return v___x_98_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_99_ = lean_uint32_to_nat(v_c_91_);
v___x_100_ = lean_unsigned_to_nat(65u);
v___x_101_ = lean_nat_sub(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_unsigned_to_nat(10u);
v___x_103_ = lean_nat_add(v___x_101_, v___x_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
return v___x_104_;
}
}
}
v___jp_105_:
{
uint32_t v___x_106_; uint8_t v___x_107_; 
v___x_106_ = 97;
v___x_107_ = lean_uint32_dec_le(v___x_106_, v_c_91_);
if (v___x_107_ == 0)
{
goto v___jp_92_;
}
else
{
uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_108_ = 102;
v___x_109_ = lean_uint32_dec_le(v_c_91_, v___x_108_);
if (v___x_109_ == 0)
{
goto v___jp_92_;
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_110_ = lean_uint32_to_nat(v_c_91_);
v___x_111_ = lean_unsigned_to_nat(97u);
v___x_112_ = lean_nat_sub(v___x_110_, v___x_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_unsigned_to_nat(10u);
v___x_114_ = lean_nat_add(v___x_112_, v___x_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1___boxed(lean_object* v_c_124_){
_start:
{
uint32_t v_c_boxed_125_; lean_object* v_res_126_; 
v_c_boxed_125_ = lean_unbox_uint32(v_c_124_);
lean_dec(v_c_124_);
v_res_126_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v_c_boxed_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(lean_object* v_bytes_127_, uint8_t v_plus_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___y_131_; lean_object* v_fst_135_; lean_object* v_snd_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_223_; 
v_fst_135_ = lean_ctor_get(v_a_129_, 0);
v_snd_136_ = lean_ctor_get(v_a_129_, 1);
v_isSharedCheck_223_ = !lean_is_exclusive(v_a_129_);
if (v_isSharedCheck_223_ == 0)
{
v___x_138_ = v_a_129_;
v_isShared_139_ = v_isSharedCheck_223_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_snd_136_);
lean_inc(v_fst_135_);
lean_dec(v_a_129_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_223_;
goto v_resetjp_137_;
}
v___jp_130_:
{
if (lean_obj_tag(v___y_131_) == 0)
{
lean_object* v_a_132_; 
v_a_132_ = lean_ctor_get(v___y_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___y_131_, 1);
return v_a_132_;
}
else
{
lean_object* v_a_133_; 
v_a_133_ = lean_ctor_get(v___y_131_, 0);
lean_inc(v_a_133_);
lean_dec_ref_known(v___y_131_, 1);
v_a_129_ = v_a_133_;
goto _start;
}
}
v_resetjp_137_:
{
lean_object* v___y_141_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_byte_array_size(v_bytes_127_);
v___x_145_ = lean_nat_dec_lt(v_snd_136_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_147_; 
if (v_isShared_139_ == 0)
{
v___x_147_ = v___x_138_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_fst_135_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_snd_136_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
else
{
lean_object* v___y_150_; lean_object* v___y_151_; uint8_t v___y_152_; lean_object* v___y_158_; lean_object* v___y_159_; lean_object* v___y_160_; uint8_t v___y_161_; uint8_t v___x_178_; lean_object* v___y_180_; uint8_t v___y_181_; uint8_t v___y_201_; uint8_t v___x_218_; 
v___x_178_ = 0;
v___x_218_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_127_, v_snd_136_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_box(v___x_178_);
v___x_220_ = l_outOfBounds___redArg(v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = lean_unbox(v___x_220_);
lean_dec(v___x_220_);
v___y_201_ = v___x_221_;
goto v___jp_200_;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = lean_byte_array_fget(v_bytes_127_, v_snd_136_);
v___y_201_ = v___x_222_;
goto v___jp_200_;
}
v___jp_149_:
{
lean_object* v___x_153_; uint32_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_153_ = lean_uint8_to_nat(v___y_152_);
v___x_154_ = l_Char_ofNat(v___x_153_);
v___x_155_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_154_);
v___x_156_ = lean_apply_2(v___y_150_, v___y_151_, v___x_155_);
v___y_131_ = v___x_156_;
goto v___jp_130_;
}
v___jp_157_:
{
lean_object* v___x_162_; uint32_t v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_uint8_to_nat(v___y_161_);
v___x_163_ = l_Char_ofNat(v___x_162_);
v___x_164_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_163_);
if (lean_obj_tag(v___x_164_) == 1)
{
lean_object* v_val_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
v_val_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_164_, 1);
v___x_166_ = lean_unsigned_to_nat(16u);
v___x_167_ = lean_nat_mul(v___y_160_, v___x_166_);
lean_dec(v___y_160_);
v___x_168_ = lean_nat_add(v___x_167_, v_val_165_);
lean_dec(v_val_165_);
lean_dec(v___x_167_);
v___x_169_ = lean_uint8_of_nat(v___x_168_);
lean_dec(v___x_168_);
v___x_170_ = lean_byte_array_push(v_fst_135_, v___x_169_);
v___x_171_ = lean_unsigned_to_nat(3u);
v___x_172_ = lean_nat_add(v_snd_136_, v___x_171_);
lean_dec(v_snd_136_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v___x_172_);
lean_ctor_set(v___x_138_, 0, v___x_170_);
v___x_174_ = v___x_138_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_176_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
v_a_129_ = v___x_174_;
goto _start;
}
}
else
{
lean_object* v___x_177_; 
lean_dec(v___y_160_);
lean_del_object(v___x_138_);
lean_dec(v_snd_136_);
lean_dec(v_fst_135_);
v___x_177_ = lean_apply_2(v___y_158_, v___y_159_, v___x_164_);
v___y_131_ = v___x_177_;
goto v___jp_130_;
}
}
v___jp_179_:
{
lean_object* v___x_182_; uint32_t v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_uint8_to_nat(v___y_181_);
v___x_183_ = l_Char_ofNat(v___x_182_);
v___x_184_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_183_);
if (lean_obj_tag(v___x_184_) == 1)
{
lean_object* v_val_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v_val_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_val_185_);
v___x_186_ = lean_unsigned_to_nat(2u);
v___x_187_ = lean_nat_add(v_snd_136_, v___x_186_);
v___x_188_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_127_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
lean_dec(v___x_187_);
v___x_189_ = lean_box(v___x_178_);
v___x_190_ = l_outOfBounds___redArg(v___x_189_);
lean_dec(v___x_189_);
v___x_191_ = lean_unbox(v___x_190_);
lean_dec(v___x_190_);
v___y_158_ = v___y_180_;
v___y_159_ = v___x_184_;
v___y_160_ = v_val_185_;
v___y_161_ = v___x_191_;
goto v___jp_157_;
}
else
{
uint8_t v___x_192_; 
v___x_192_ = lean_byte_array_fget(v_bytes_127_, v___x_187_);
lean_dec(v___x_187_);
v___y_158_ = v___y_180_;
v___y_159_ = v___x_184_;
v___y_160_ = v_val_185_;
v___y_161_ = v___x_192_;
goto v___jp_157_;
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
lean_del_object(v___x_138_);
lean_dec(v_fst_135_);
v___x_193_ = lean_unsigned_to_nat(2u);
v___x_194_ = lean_nat_add(v_snd_136_, v___x_193_);
lean_dec(v_snd_136_);
v___x_195_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_127_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
lean_dec(v___x_194_);
v___x_196_ = lean_box(v___x_178_);
v___x_197_ = l_outOfBounds___redArg(v___x_196_);
lean_dec(v___x_196_);
v___x_198_ = lean_unbox(v___x_197_);
lean_dec(v___x_197_);
v___y_150_ = v___y_180_;
v___y_151_ = v___x_184_;
v___y_152_ = v___x_198_;
goto v___jp_149_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = lean_byte_array_fget(v_bytes_127_, v___x_194_);
lean_dec(v___x_194_);
v___y_150_ = v___y_180_;
v___y_151_ = v___x_184_;
v___y_152_ = v___x_199_;
goto v___jp_149_;
}
}
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___f_204_; uint8_t v___x_205_; uint8_t v___x_206_; 
v___x_202_ = lean_box(v_plus_128_);
v___x_203_ = lean_box(v___y_201_);
v___f_204_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_204_, 0, v___x_202_);
lean_closure_set(v___f_204_, 1, v___x_203_);
v___x_205_ = 37;
v___x_206_ = lean_uint8_dec_eq(v___y_201_, v___x_205_);
if (v___x_206_ == 0)
{
lean_del_object(v___x_138_);
v___y_141_ = v___f_204_;
goto v___jp_140_;
}
else
{
lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_207_ = lean_unsigned_to_nat(2u);
v___x_208_ = lean_nat_add(v_snd_136_, v___x_207_);
v___x_209_ = lean_nat_dec_lt(v___x_208_, v___x_144_);
lean_dec(v___x_208_);
if (v___x_209_ == 0)
{
lean_del_object(v___x_138_);
v___y_141_ = v___f_204_;
goto v___jp_140_;
}
else
{
lean_object* v___f_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
lean_inc(v_snd_136_);
lean_inc(v_fst_135_);
v___f_210_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_210_, 0, v___f_204_);
lean_closure_set(v___f_210_, 1, v_fst_135_);
lean_closure_set(v___f_210_, 2, v_snd_136_);
v___x_211_ = lean_unsigned_to_nat(1u);
v___x_212_ = lean_nat_add(v_snd_136_, v___x_211_);
v___x_213_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_127_, v___x_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
lean_dec(v___x_212_);
v___x_214_ = lean_box(v___x_178_);
v___x_215_ = l_outOfBounds___redArg(v___x_214_);
lean_dec(v___x_214_);
v___x_216_ = lean_unbox(v___x_215_);
lean_dec(v___x_215_);
v___y_180_ = v___f_210_;
v___y_181_ = v___x_216_;
goto v___jp_179_;
}
else
{
uint8_t v___x_217_; 
v___x_217_ = lean_byte_array_fget(v_bytes_127_, v___x_212_);
lean_dec(v___x_212_);
v___y_180_ = v___f_210_;
v___y_181_ = v___x_217_;
goto v___jp_179_;
}
}
}
}
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_box(0);
v___x_143_ = lean_apply_3(v___y_141_, v___x_142_, v_fst_135_, v_snd_136_);
v___y_131_ = v___x_143_;
goto v___jp_130_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___boxed(lean_object* v_bytes_224_, lean_object* v_plus_225_, lean_object* v_a_226_){
_start:
{
uint8_t v_plus_boxed_227_; lean_object* v_res_228_; 
v_plus_boxed_227_ = lean_unbox(v_plus_225_);
v_res_228_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_224_, v_plus_boxed_227_, v_a_226_);
lean_dec_ref(v_bytes_224_);
return v_res_228_;
}
}
static lean_object* _init_l_Lasm_Fetch_percentDecode___closed__0(void){
_start:
{
lean_object* v_i_229_; lean_object* v_out_230_; lean_object* v___x_231_; 
v_i_229_ = lean_unsigned_to_nat(0u);
v_out_230_ = l_ByteArray_empty;
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_out_230_);
lean_ctor_set(v___x_231_, 1, v_i_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode(lean_object* v_s_232_, uint8_t v_plus_233_){
_start:
{
lean_object* v_bytes_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_fst_237_; uint8_t v___x_238_; 
v_bytes_234_ = lean_string_to_utf8(v_s_232_);
v___x_235_ = lean_obj_once(&l_Lasm_Fetch_percentDecode___closed__0, &l_Lasm_Fetch_percentDecode___closed__0_once, _init_l_Lasm_Fetch_percentDecode___closed__0);
v___x_236_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_234_, v_plus_233_, v___x_235_);
lean_dec_ref(v_bytes_234_);
v_fst_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_fst_237_);
lean_dec_ref(v___x_236_);
v___x_238_ = lean_string_validate_utf8(v_fst_237_);
if (v___x_238_ == 0)
{
lean_dec(v_fst_237_);
lean_inc_ref(v_s_232_);
return v_s_232_;
}
else
{
lean_object* v___x_239_; 
v___x_239_ = lean_string_from_utf8_unchecked(v_fst_237_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode___boxed(lean_object* v_s_240_, lean_object* v_plus_241_){
_start:
{
uint8_t v_plus_boxed_242_; lean_object* v_res_243_; 
v_plus_boxed_242_ = lean_unbox(v_plus_241_);
v_res_243_ = l_Lasm_Fetch_percentDecode(v_s_240_, v_plus_boxed_242_);
lean_dec_ref(v_s_240_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(lean_object* v_bytes_244_, uint8_t v_plus_245_, lean_object* v_inst_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_244_, v_plus_245_, v_a_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___boxed(lean_object* v_bytes_249_, lean_object* v_plus_250_, lean_object* v_inst_251_, lean_object* v_a_252_){
_start:
{
uint8_t v_plus_boxed_253_; lean_object* v_res_254_; 
v_plus_boxed_253_ = lean_unbox(v_plus_250_);
v_res_254_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(v_bytes_249_, v_plus_boxed_253_, v_inst_251_, v_a_252_);
lean_dec_ref(v_bytes_249_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(lean_object* v_s_255_, lean_object* v_pos_256_){
_start:
{
lean_object* v_str_257_; lean_object* v_startInclusive_258_; lean_object* v_endExclusive_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v_decide_263_; 
v_str_257_ = lean_ctor_get(v_s_255_, 0);
v_startInclusive_258_ = lean_ctor_get(v_s_255_, 1);
v_endExclusive_259_ = lean_ctor_get(v_s_255_, 2);
v___x_260_ = lean_nat_add(v_startInclusive_258_, v_pos_256_);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = lean_nat_sub(v_endExclusive_259_, v___x_260_);
v_decide_263_ = lean_nat_dec_eq(v___x_261_, v___x_262_);
lean_dec(v___x_262_);
if (v_decide_263_ == 0)
{
uint32_t v___x_264_; uint32_t v___x_265_; uint8_t v___x_266_; 
v___x_264_ = lean_string_utf8_get_fast(v_str_257_, v___x_260_);
v___x_265_ = 63;
v___x_266_ = lean_uint32_dec_eq(v___x_264_, v___x_265_);
if (v___x_266_ == 0)
{
uint32_t v___x_267_; uint8_t v___x_268_; 
v___x_267_ = 35;
v___x_268_ = lean_uint32_dec_eq(v___x_264_, v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_269_ = lean_string_utf8_next_fast(v_str_257_, v___x_260_);
v___x_270_ = lean_nat_sub(v___x_269_, v___x_260_);
lean_dec(v___x_260_);
v___x_271_ = lean_nat_add(v_pos_256_, v___x_270_);
lean_dec(v___x_270_);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_add(v_pos_256_, v___x_272_);
v___x_274_ = lean_nat_dec_le(v___x_273_, v___x_271_);
lean_dec(v___x_273_);
if (v___x_274_ == 0)
{
lean_dec(v___x_271_);
return v_pos_256_;
}
else
{
lean_dec(v_pos_256_);
v_pos_256_ = v___x_271_;
goto _start;
}
}
else
{
lean_dec(v___x_260_);
return v_pos_256_;
}
}
else
{
lean_dec(v___x_260_);
return v_pos_256_;
}
}
else
{
lean_dec(v___x_260_);
return v_pos_256_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0___boxed(lean_object* v_s_276_, lean_object* v_pos_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v_s_276_, v_pos_277_);
lean_dec_ref(v_s_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_281_){
_start:
{
lean_object* v___y_283_; lean_object* v_url_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_url_293_ = lean_ctor_get(v_r_281_, 1);
lean_inc_ref(v_url_293_);
lean_dec_ref(v_r_281_);
v___x_294_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__1));
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_box(0);
v___x_297_ = l_String_splitOnAux(v_url_293_, v___x_294_, v___x_295_, v___x_295_, v___x_295_, v___x_296_);
if (lean_obj_tag(v___x_297_) == 1)
{
lean_object* v_tail_298_; 
v_tail_298_ = lean_ctor_get(v___x_297_, 1);
lean_inc(v_tail_298_);
lean_dec_ref_known(v___x_297_, 2);
if (lean_obj_tag(v_tail_298_) == 1)
{
lean_object* v_tail_299_; 
v_tail_299_ = lean_ctor_get(v_tail_298_, 1);
if (lean_obj_tag(v_tail_299_) == 0)
{
lean_object* v_head_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec_ref(v_url_293_);
v_head_300_ = lean_ctor_get(v_tail_298_, 0);
lean_inc_n(v_head_300_, 2);
lean_dec_ref_known(v_tail_298_, 2);
v___x_301_ = lean_string_utf8_byte_size(v_head_300_);
v___x_302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_302_, 0, v_head_300_);
lean_ctor_set(v___x_302_, 1, v___x_295_);
lean_ctor_set(v___x_302_, 2, v___x_301_);
v___x_303_ = l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(v___x_302_, v___x_295_);
lean_dec_ref_known(v___x_302_, 3);
v___x_304_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_304_, 0, v_head_300_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
lean_ctor_set(v___x_304_, 2, v___x_301_);
v___x_305_ = l_String_Slice_toString(v___x_304_);
lean_dec_ref_known(v___x_304_, 3);
v___y_283_ = v___x_305_;
goto v___jp_282_;
}
else
{
lean_dec_ref_known(v_tail_298_, 2);
v___y_283_ = v_url_293_;
goto v___jp_282_;
}
}
else
{
lean_dec(v_tail_298_);
v___y_283_ = v_url_293_;
goto v___jp_282_;
}
}
else
{
lean_dec(v___x_297_);
v___y_283_ = v_url_293_;
goto v___jp_282_;
}
v___jp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_p_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_string_utf8_byte_size(v___y_283_);
lean_inc_ref(v___y_283_);
v___x_286_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_286_, 0, v___y_283_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_285_);
v___x_287_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v___x_286_, v___x_284_);
lean_dec_ref_known(v___x_286_, 3);
v___x_288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_288_, 0, v___y_283_);
lean_ctor_set(v___x_288_, 1, v___x_284_);
lean_ctor_set(v___x_288_, 2, v___x_287_);
v_p_289_ = l_String_Slice_toString(v___x_288_);
lean_dec_ref_known(v___x_288_, 3);
v___x_290_ = lean_string_utf8_byte_size(v_p_289_);
v___x_291_ = lean_nat_dec_eq(v___x_290_, v___x_284_);
if (v___x_291_ == 0)
{
return v_p_289_;
}
else
{
lean_object* v___x_292_; 
lean_dec_ref(v_p_289_);
v___x_292_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_306_, lean_object* v_pos_307_){
_start:
{
lean_object* v_str_308_; lean_object* v_startInclusive_309_; lean_object* v_endExclusive_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v_decide_314_; 
v_str_308_ = lean_ctor_get(v_s_306_, 0);
v_startInclusive_309_ = lean_ctor_get(v_s_306_, 1);
v_endExclusive_310_ = lean_ctor_get(v_s_306_, 2);
v___x_311_ = lean_nat_add(v_startInclusive_309_, v_pos_307_);
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_nat_sub(v_endExclusive_310_, v___x_311_);
v_decide_314_ = lean_nat_dec_eq(v___x_312_, v___x_313_);
lean_dec(v___x_313_);
if (v_decide_314_ == 0)
{
uint32_t v___x_315_; uint32_t v___x_316_; uint8_t v___x_317_; 
v___x_315_ = lean_string_utf8_get_fast(v_str_308_, v___x_311_);
v___x_316_ = 35;
v___x_317_ = lean_uint32_dec_eq(v___x_315_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_318_ = lean_string_utf8_next_fast(v_str_308_, v___x_311_);
v___x_319_ = lean_nat_sub(v___x_318_, v___x_311_);
lean_dec(v___x_311_);
v___x_320_ = lean_nat_add(v_pos_307_, v___x_319_);
lean_dec(v___x_319_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_add(v_pos_307_, v___x_321_);
v___x_323_ = lean_nat_dec_le(v___x_322_, v___x_320_);
lean_dec(v___x_322_);
if (v___x_323_ == 0)
{
lean_dec(v___x_320_);
return v_pos_307_;
}
else
{
lean_dec(v_pos_307_);
v_pos_307_ = v___x_320_;
goto _start;
}
}
else
{
lean_dec(v___x_311_);
return v_pos_307_;
}
}
else
{
lean_dec(v___x_311_);
return v_pos_307_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_325_, lean_object* v_pos_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_325_, v_pos_326_);
lean_dec_ref(v_s_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_329_){
_start:
{
lean_object* v_url_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_url_330_ = lean_ctor_get(v_r_329_, 1);
v___x_331_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_332_ = lean_unsigned_to_nat(0u);
v___x_333_ = lean_box(0);
v___x_334_ = l_String_splitOnAux(v_url_330_, v___x_331_, v___x_332_, v___x_332_, v___x_332_, v___x_333_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v___x_335_; 
v___x_335_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_335_;
}
else
{
lean_object* v_tail_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_tail_336_ = lean_ctor_get(v___x_334_, 1);
lean_inc(v_tail_336_);
lean_dec_ref_known(v___x_334_, 2);
v___x_337_ = l_String_intercalate(v___x_331_, v_tail_336_);
v___x_338_ = lean_string_utf8_byte_size(v___x_337_);
lean_inc_ref(v___x_337_);
v___x_339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_339_, 0, v___x_337_);
lean_ctor_set(v___x_339_, 1, v___x_332_);
lean_ctor_set(v___x_339_, 2, v___x_338_);
v___x_340_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_339_, v___x_332_);
lean_dec_ref_known(v___x_339_, 3);
v___x_341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_341_, 0, v___x_337_);
lean_ctor_set(v___x_341_, 1, v___x_332_);
lean_ctor_set(v___x_341_, 2, v___x_340_);
v___x_342_ = l_String_Slice_toString(v___x_341_);
lean_dec_ref_known(v___x_341_, 3);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lasm_Fetch_Request_query(v_r_343_);
lean_dec_ref(v_r_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
if (lean_obj_tag(v_a_346_) == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_array_to_list(v_a_347_);
return v___x_348_;
}
else
{
lean_object* v_head_349_; lean_object* v_tail_350_; lean_object* v_val_352_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_head_349_ = lean_ctor_get(v_a_346_, 0);
v_tail_350_ = lean_ctor_get(v_a_346_, 1);
v___x_355_ = lean_string_utf8_byte_size(v_head_349_);
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = lean_nat_dec_eq(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_358_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_359_ = lean_box(0);
v___x_360_ = l_String_splitOnAux(v_head_349_, v___x_358_, v___x_356_, v___x_356_, v___x_356_, v___x_359_);
if (lean_obj_tag(v___x_360_) == 0)
{
v_a_346_ = v_tail_350_;
goto _start;
}
else
{
lean_object* v_head_362_; lean_object* v_tail_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_379_; 
v_head_362_ = lean_ctor_get(v___x_360_, 0);
v_tail_363_ = lean_ctor_get(v___x_360_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_379_ == 0)
{
v___x_365_ = v___x_360_;
v_isShared_366_ = v_isSharedCheck_379_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_tail_363_);
lean_inc(v_head_362_);
lean_dec(v___x_360_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_379_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
uint8_t v___x_367_; 
v___x_367_ = 1;
if (lean_obj_tag(v_tail_363_) == 0)
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_368_ = l_Lasm_Fetch_percentDecode(v_head_362_, v___x_367_);
lean_dec(v_head_362_);
v___x_369_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_366_ == 0)
{
lean_ctor_set_tag(v___x_365_, 0);
lean_ctor_set(v___x_365_, 1, v___x_369_);
lean_ctor_set(v___x_365_, 0, v___x_368_);
v___x_371_ = v___x_365_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
v_val_352_ = v___x_371_;
goto v___jp_351_;
}
}
else
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_373_ = l_Lasm_Fetch_percentDecode(v_head_362_, v___x_367_);
lean_dec(v_head_362_);
v___x_374_ = l_String_intercalate(v___x_358_, v_tail_363_);
v___x_375_ = l_Lasm_Fetch_percentDecode(v___x_374_, v___x_367_);
lean_dec_ref(v___x_374_);
if (v_isShared_366_ == 0)
{
lean_ctor_set_tag(v___x_365_, 0);
lean_ctor_set(v___x_365_, 1, v___x_375_);
lean_ctor_set(v___x_365_, 0, v___x_373_);
v___x_377_ = v___x_365_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
v_val_352_ = v___x_377_;
goto v___jp_351_;
}
}
}
}
}
else
{
v_a_346_ = v_tail_350_;
goto _start;
}
v___jp_351_:
{
lean_object* v___x_353_; 
v___x_353_ = lean_array_push(v_a_347_, v_val_352_);
v_a_346_ = v_tail_350_;
v_a_347_ = v___x_353_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_381_, v_a_382_);
lean_dec(v_a_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_386_ = l_Lasm_Fetch_Request_query(v_r_385_);
v___x_387_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = lean_box(0);
v___x_390_ = l_String_splitOnAux(v___x_386_, v___x_387_, v___x_388_, v___x_388_, v___x_388_, v___x_389_);
lean_dec_ref(v___x_386_);
v___x_391_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_392_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_390_, v___x_391_);
lean_dec(v___x_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lasm_Fetch_Request_queryParams(v_r_393_);
lean_dec_ref(v_r_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_object* v___x_397_; 
v___x_397_ = lean_box(0);
return v___x_397_;
}
else
{
lean_object* v_head_398_; lean_object* v_tail_399_; lean_object* v_fst_400_; lean_object* v_snd_401_; uint8_t v___x_402_; 
v_head_398_ = lean_ctor_get(v_x_396_, 0);
v_tail_399_ = lean_ctor_get(v_x_396_, 1);
v_fst_400_ = lean_ctor_get(v_head_398_, 0);
v_snd_401_ = lean_ctor_get(v_head_398_, 1);
v___x_402_ = lean_string_dec_eq(v_x_395_, v_fst_400_);
if (v___x_402_ == 0)
{
v_x_396_ = v_tail_399_;
goto _start;
}
else
{
lean_object* v___x_404_; 
lean_inc(v_snd_401_);
v___x_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_404_, 0, v_snd_401_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_405_, v_x_406_);
lean_dec(v_x_406_);
lean_dec_ref(v_x_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_408_, lean_object* v_name_409_){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = l_Lasm_Fetch_Request_queryParams(v_r_408_);
v___x_411_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_409_, v___x_410_);
lean_dec(v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_412_, lean_object* v_name_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_412_, v_name_413_);
lean_dec_ref(v_name_413_);
lean_dec_ref(v_r_412_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_415_, lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_416_, v_x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_419_, lean_object* v_x_420_, lean_object* v_x_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_419_, v_x_420_, v_x_421_);
lean_dec(v_x_421_);
lean_dec_ref(v_x_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
if (lean_obj_tag(v_a_423_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = l_List_reverse___redArg(v_a_424_);
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_437_; 
v_head_426_ = lean_ctor_get(v_a_423_, 0);
v_tail_427_ = lean_ctor_get(v_a_423_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_a_423_);
if (v_isSharedCheck_437_ == 0)
{
v___x_429_ = v_a_423_;
v_isShared_430_ = v_isSharedCheck_437_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_tail_427_);
lean_inc(v_head_426_);
lean_dec(v_a_423_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_437_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
uint8_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_431_ = 0;
v___x_432_ = l_Lasm_Fetch_percentDecode(v_head_426_, v___x_431_);
lean_dec(v_head_426_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v_a_424_);
lean_ctor_set(v___x_429_, 0, v___x_432_);
v___x_434_ = v___x_429_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_432_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_a_424_);
v___x_434_ = v_reuseFailAlloc_436_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
v_a_423_ = v_tail_427_;
v_a_424_ = v___x_434_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
if (lean_obj_tag(v_a_438_) == 0)
{
lean_object* v___x_440_; 
v___x_440_ = l_List_reverse___redArg(v_a_439_);
return v___x_440_;
}
else
{
lean_object* v_head_441_; lean_object* v_tail_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_454_; 
v_head_441_ = lean_ctor_get(v_a_438_, 0);
v_tail_442_ = lean_ctor_get(v_a_438_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v_a_438_);
if (v_isSharedCheck_454_ == 0)
{
v___x_444_ = v_a_438_;
v_isShared_445_ = v_isSharedCheck_454_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_tail_442_);
lean_inc(v_head_441_);
lean_dec(v_a_438_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_454_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_string_utf8_byte_size(v_head_441_);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_nat_dec_eq(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_450_; 
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v_a_439_);
v___x_450_ = v___x_444_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_head_441_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_a_439_);
v___x_450_ = v_reuseFailAlloc_452_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
v_a_438_ = v_tail_442_;
v_a_439_ = v___x_450_;
goto _start;
}
}
else
{
lean_del_object(v___x_444_);
lean_dec(v_head_441_);
v_a_438_ = v_tail_442_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_456_ = l_Lasm_Fetch_Request_path(v_r_455_);
v___x_457_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = lean_box(0);
v___x_460_ = l_String_splitOnAux(v___x_456_, v___x_457_, v___x_458_, v___x_458_, v___x_458_, v___x_459_);
lean_dec_ref(v___x_456_);
v___x_461_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_460_, v___x_459_);
v___x_462_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_461_, v___x_459_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_466_, lean_object* v_as_467_, size_t v_sz_468_, size_t v_i_469_, lean_object* v_b_470_){
_start:
{
uint8_t v___x_471_; 
v___x_471_ = lean_usize_dec_lt(v_i_469_, v_sz_468_);
if (v___x_471_ == 0)
{
lean_inc_ref(v_b_470_);
return v_b_470_;
}
else
{
lean_object* v_a_472_; lean_object* v_fst_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v_a_472_ = lean_array_uget_borrowed(v_as_467_, v_i_469_);
v_fst_473_ = lean_ctor_get(v_a_472_, 0);
v___x_474_ = lean_box(0);
lean_inc(v_fst_473_);
v___x_475_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_473_);
v___x_476_ = lean_string_dec_eq(v___x_475_, v_n_466_);
lean_dec_ref(v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; size_t v___x_478_; size_t v___x_479_; 
v___x_477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_478_ = ((size_t)1ULL);
v___x_479_ = lean_usize_add(v_i_469_, v___x_478_);
v_i_469_ = v___x_479_;
v_b_470_ = v___x_477_;
goto _start;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_inc(v_a_472_);
v___x_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_481_, 0, v_a_472_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_474_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_484_, lean_object* v_as_485_, lean_object* v_sz_486_, lean_object* v_i_487_, lean_object* v_b_488_){
_start:
{
size_t v_sz_boxed_489_; size_t v_i_boxed_490_; lean_object* v_res_491_; 
v_sz_boxed_489_ = lean_unbox_usize(v_sz_486_);
lean_dec(v_sz_486_);
v_i_boxed_490_ = lean_unbox_usize(v_i_487_);
lean_dec(v_i_487_);
v_res_491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_484_, v_as_485_, v_sz_boxed_489_, v_i_boxed_490_, v_b_488_);
lean_dec_ref(v_b_488_);
lean_dec_ref(v_as_485_);
lean_dec_ref(v_n_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_492_, lean_object* v_name_493_){
_start:
{
lean_object* v_headers_494_; lean_object* v_n_495_; lean_object* v___x_496_; lean_object* v___x_497_; size_t v_sz_498_; size_t v___x_499_; lean_object* v___x_500_; lean_object* v_fst_501_; 
v_headers_494_ = lean_ctor_get(v_r_492_, 2);
v_n_495_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_493_);
v___x_496_ = lean_box(0);
v___x_497_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_498_ = lean_array_size(v_headers_494_);
v___x_499_ = ((size_t)0ULL);
v___x_500_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_495_, v_headers_494_, v_sz_498_, v___x_499_, v___x_497_);
lean_dec_ref(v_n_495_);
v_fst_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_fst_501_);
lean_dec_ref(v___x_500_);
if (lean_obj_tag(v_fst_501_) == 0)
{
return v___x_496_;
}
else
{
lean_object* v_val_502_; 
v_val_502_ = lean_ctor_get(v_fst_501_, 0);
lean_inc(v_val_502_);
lean_dec_ref_known(v_fst_501_, 1);
if (lean_obj_tag(v_val_502_) == 0)
{
return v___x_496_;
}
else
{
lean_object* v_val_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_511_; 
v_val_503_ = lean_ctor_get(v_val_502_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_val_502_);
if (v_isSharedCheck_511_ == 0)
{
v___x_505_ = v_val_502_;
v_isShared_506_ = v_isSharedCheck_511_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_val_503_);
lean_dec(v_val_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_511_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v_snd_507_; lean_object* v___x_509_; 
v_snd_507_ = lean_ctor_get(v_val_503_, 1);
lean_inc(v_snd_507_);
lean_dec(v_val_503_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v_snd_507_);
v___x_509_ = v___x_505_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_snd_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_512_, lean_object* v_name_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lasm_Fetch_Request_header_x3f(v_r_512_, v_name_513_);
lean_dec_ref(v_r_512_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_515_){
_start:
{
lean_object* v_body_516_; uint8_t v___x_517_; 
v_body_516_ = lean_ctor_get(v_r_515_, 3);
lean_inc_ref(v_body_516_);
lean_dec_ref(v_r_515_);
v___x_517_ = lean_string_validate_utf8(v_body_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_dec_ref(v_body_516_);
v___x_518_ = lean_box(0);
return v___x_518_;
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_string_from_utf8_unchecked(v_body_516_);
v___x_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lasm_Fetch_Request_text_x3f(v_r_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v___x_523_; 
v___x_523_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_523_;
}
else
{
lean_object* v_val_524_; 
v_val_524_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_524_);
lean_dec_ref_known(v___x_522_, 1);
return v_val_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_525_, lean_object* v_r_526_, lean_object* v_x_527_){
_start:
{
if (lean_obj_tag(v_x_527_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_537_; 
lean_dec_ref(v_r_526_);
lean_dec_ref(v_acc_525_);
v_a_529_ = lean_ctor_get(v_x_527_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v_x_527_);
if (v_isSharedCheck_537_ == 0)
{
v___x_531_ = v_x_527_;
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v_x_527_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_536_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_553_; 
v_a_538_ = lean_ctor_get(v_x_527_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v_x_527_);
if (v_isSharedCheck_553_ == 0)
{
v___x_540_ = v_x_527_;
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v_x_527_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
if (lean_obj_tag(v_a_538_) == 0)
{
lean_object* v___x_543_; 
lean_dec_ref(v_r_526_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v_acc_525_);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_acc_525_);
v___x_543_ = v_reuseFailAlloc_545_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; 
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
}
else
{
lean_object* v_val_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_del_object(v___x_540_);
v_val_546_ = lean_ctor_get(v_a_538_, 0);
lean_inc(v_val_546_);
lean_dec_ref_known(v_a_538_, 1);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = lean_byte_array_size(v_acc_525_);
v___x_549_ = lean_byte_array_size(v_val_546_);
v___x_550_ = 0;
v___x_551_ = lean_byte_array_copy_slice(v_val_546_, v___x_547_, v_acc_525_, v___x_548_, v___x_549_, v___x_550_);
lean_dec(v_val_546_);
v___x_552_ = l_Lasm_Fetch_Request_readAll_loop(v_r_526_, v___x_551_);
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_554_, lean_object* v_r_555_, lean_object* v_x_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_554_, v_r_555_, v_x_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_559_, lean_object* v_acc_560_){
_start:
{
lean_object* v_read_562_; lean_object* v___f_563_; lean_object* v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_read_562_ = lean_ctor_get(v_r_559_, 4);
lean_inc_ref(v_read_562_);
v___f_563_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_563_, 0, v_acc_560_);
lean_closure_set(v___f_563_, 1, v_r_559_);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = 0;
v___x_566_ = lean_apply_1(v_read_562_, lean_box(0));
v___x_567_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_564_, v___x_565_, v___x_566_, v___f_563_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_568_, lean_object* v_acc_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lasm_Fetch_Request_readAll_loop(v_r_568_, v_acc_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_572_){
_start:
{
lean_object* v_body_574_; lean_object* v___x_575_; 
v_body_574_ = lean_ctor_get(v_r_572_, 3);
lean_inc_ref(v_body_574_);
v___x_575_ = l_Lasm_Fetch_Request_readAll_loop(v_r_572_, v_body_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lasm_Fetch_Request_readAll(v_r_576_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_580_, lean_object* v_contentType_581_, uint16_t v_status_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_583_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v_contentType_581_);
v___x_585_ = lean_unsigned_to_nat(1u);
v___x_586_ = lean_mk_empty_array_with_capacity(v___x_585_);
v___x_587_ = lean_array_push(v___x_586_, v___x_584_);
v___x_588_ = lean_box(0);
v___x_589_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v_body_580_);
lean_ctor_set(v___x_589_, 2, v___x_588_);
lean_ctor_set_uint16(v___x_589_, sizeof(void*)*3, v_status_582_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_590_, lean_object* v_contentType_591_, lean_object* v_status_592_){
_start:
{
uint16_t v_status_boxed_593_; lean_object* v_res_594_; 
v_status_boxed_593_ = lean_unbox(v_status_592_);
v_res_594_ = l_Lasm_Fetch_Response_withBody(v_body_590_, v_contentType_591_, v_status_boxed_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_596_, uint16_t v_status_597_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = lean_string_to_utf8(v_body_596_);
v___x_599_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_600_ = l_Lasm_Fetch_Response_withBody(v___x_598_, v___x_599_, v_status_597_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_601_, lean_object* v_status_602_){
_start:
{
uint16_t v_status_boxed_603_; lean_object* v_res_604_; 
v_status_boxed_603_ = lean_unbox(v_status_602_);
v_res_604_ = l_Lasm_Fetch_Response_text(v_body_601_, v_status_boxed_603_);
lean_dec_ref(v_body_601_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_606_, uint16_t v_status_607_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_string_to_utf8(v_body_606_);
v___x_609_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_610_ = l_Lasm_Fetch_Response_withBody(v___x_608_, v___x_609_, v_status_607_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_611_, lean_object* v_status_612_){
_start:
{
uint16_t v_status_boxed_613_; lean_object* v_res_614_; 
v_status_boxed_613_ = lean_unbox(v_status_612_);
v_res_614_ = l_Lasm_Fetch_Response_html(v_body_611_, v_status_boxed_613_);
lean_dec_ref(v_body_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_616_, uint16_t v_status_617_){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_618_ = lean_string_to_utf8(v_body_616_);
v___x_619_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_620_ = l_Lasm_Fetch_Response_withBody(v___x_618_, v___x_619_, v_status_617_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_621_, lean_object* v_status_622_){
_start:
{
uint16_t v_status_boxed_623_; lean_object* v_res_624_; 
v_status_boxed_623_ = lean_unbox(v_status_622_);
v_res_624_ = l_Lasm_Fetch_Response_json(v_body_621_, v_status_boxed_623_);
lean_dec_ref(v_body_621_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_625_, lean_object* v_contentType_626_, uint16_t v_status_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lasm_Fetch_Response_withBody(v_body_625_, v_contentType_626_, v_status_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_629_, lean_object* v_contentType_630_, lean_object* v_status_631_){
_start:
{
uint16_t v_status_boxed_632_; lean_object* v_res_633_; 
v_status_boxed_632_ = lean_unbox(v_status_631_);
v_res_633_ = l_Lasm_Fetch_Response_bytes(v_body_629_, v_contentType_630_, v_status_boxed_632_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_635_, uint16_t v_status_636_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_637_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v_location_635_);
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = lean_mk_empty_array_with_capacity(v___x_639_);
v___x_641_ = lean_array_push(v___x_640_, v___x_638_);
v___x_642_ = l_ByteArray_empty;
v___x_643_ = lean_box(0);
v___x_644_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_644_, 0, v___x_641_);
lean_ctor_set(v___x_644_, 1, v___x_642_);
lean_ctor_set(v___x_644_, 2, v___x_643_);
lean_ctor_set_uint16(v___x_644_, sizeof(void*)*3, v_status_636_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_645_, lean_object* v_status_646_){
_start:
{
uint16_t v_status_boxed_647_; lean_object* v_res_648_; 
v_status_boxed_647_ = lean_unbox(v_status_646_);
v_res_648_ = l_Lasm_Fetch_Response_redirect(v_location_645_, v_status_boxed_647_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_649_, lean_object* v_contentType_650_, uint16_t v_status_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_652_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v_contentType_650_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_mk_empty_array_with_capacity(v___x_654_);
v___x_656_ = lean_array_push(v___x_655_, v___x_653_);
v___x_657_ = l_ByteArray_empty;
v___x_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_658_, 0, v_produce_649_);
v___x_659_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_659_, 0, v___x_656_);
lean_ctor_set(v___x_659_, 1, v___x_657_);
lean_ctor_set(v___x_659_, 2, v___x_658_);
lean_ctor_set_uint16(v___x_659_, sizeof(void*)*3, v_status_651_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_660_, lean_object* v_contentType_661_, lean_object* v_status_662_){
_start:
{
uint16_t v_status_boxed_663_; lean_object* v_res_664_; 
v_status_boxed_663_ = lean_unbox(v_status_662_);
v_res_664_ = l_Lasm_Fetch_Response_streaming(v_produce_660_, v_contentType_661_, v_status_boxed_663_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_665_){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_666_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_667_ = l_ByteArray_empty;
v___x_668_ = lean_box(0);
v___x_669_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_669_, 0, v___x_666_);
lean_ctor_set(v___x_669_, 1, v___x_667_);
lean_ctor_set(v___x_669_, 2, v___x_668_);
lean_ctor_set_uint16(v___x_669_, sizeof(void*)*3, v_status_665_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_670_){
_start:
{
uint16_t v_status_boxed_671_; lean_object* v_res_672_; 
v_status_boxed_671_ = lean_unbox(v_status_670_);
v_res_672_ = l_Lasm_Fetch_Response_empty(v_status_boxed_671_);
return v_res_672_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_674_ = 404;
v___x_675_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_676_ = l_Lasm_Fetch_Response_text(v___x_675_, v___x_674_);
return v___x_676_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_678_, lean_object* v_name_679_, lean_object* v_value_680_){
_start:
{
uint16_t v_status_681_; lean_object* v_headers_682_; lean_object* v_body_683_; lean_object* v_stream_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
v_status_681_ = lean_ctor_get_uint16(v_r_678_, sizeof(void*)*3);
v_headers_682_ = lean_ctor_get(v_r_678_, 0);
v_body_683_ = lean_ctor_get(v_r_678_, 1);
v_stream_684_ = lean_ctor_get(v_r_678_, 2);
v_isSharedCheck_693_ = !lean_is_exclusive(v_r_678_);
if (v_isSharedCheck_693_ == 0)
{
v___x_686_ = v_r_678_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_stream_684_);
lean_inc(v_body_683_);
lean_inc(v_headers_682_);
lean_dec(v_r_678_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v_name_679_);
lean_ctor_set(v___x_688_, 1, v_value_680_);
v___x_689_ = lean_array_push(v_headers_682_, v___x_688_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_689_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_body_683_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_stream_684_);
lean_ctor_set_uint16(v_reuseFailAlloc_692_, sizeof(void*)*3, v_status_681_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_694_, uint16_t v_status_695_){
_start:
{
lean_object* v_headers_696_; lean_object* v_body_697_; lean_object* v_stream_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_headers_696_ = lean_ctor_get(v_r_694_, 0);
v_body_697_ = lean_ctor_get(v_r_694_, 1);
v_stream_698_ = lean_ctor_get(v_r_694_, 2);
v_isSharedCheck_705_ = !lean_is_exclusive(v_r_694_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v_r_694_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_stream_698_);
lean_inc(v_body_697_);
lean_inc(v_headers_696_);
lean_dec(v_r_694_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_headers_696_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_body_697_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_stream_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_ctor_set_uint16(v___x_703_, sizeof(void*)*3, v_status_695_);
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_706_, lean_object* v_status_707_){
_start:
{
uint16_t v_status_boxed_708_; lean_object* v_res_709_; 
v_status_boxed_708_ = lean_unbox(v_status_707_);
v_res_709_ = l_Lasm_Fetch_Response_withStatus(v_r_706_, v_status_boxed_708_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_710_){
_start:
{
lean_object* v_r_713_; 
if (lean_obj_tag(v_x_710_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_724_; 
v_a_716_ = lean_ctor_get(v_x_710_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_x_710_);
if (v_isSharedCheck_724_ == 0)
{
v___x_718_ = v_x_710_;
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v_x_710_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_723_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; 
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
}
else
{
lean_object* v_a_725_; lean_object* v_a_726_; 
v_a_725_ = lean_ctor_get(v_x_710_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v_x_710_, 1);
v_a_726_ = lean_ctor_get(v_a_725_, 0);
lean_inc(v_a_726_);
lean_dec(v_a_725_);
v_r_713_ = v_a_726_;
goto v___jp_712_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v_r_713_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lasm_Fetch_respond___lam__0(v_x_727_);
return v_res_729_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = 500;
v___x_732_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_733_ = l_Lasm_Fetch_Response_text(v___x_732_, v___x_731_);
return v___x_733_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
return v___x_735_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_740_){
_start:
{
if (lean_obj_tag(v_x_740_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_750_; 
v_a_742_ = lean_ctor_get(v_x_740_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_750_ == 0)
{
v___x_744_ = v_x_740_;
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v_x_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_749_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_748_; 
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
}
else
{
lean_object* v___x_751_; 
lean_dec_ref_known(v_x_740_, 1);
v___x_751_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lasm_Fetch_respond___lam__1(v_x_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_755_){
_start:
{
if (lean_obj_tag(v_x_755_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_765_; 
v_a_757_ = lean_ctor_get(v_x_755_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v_x_755_);
if (v_isSharedCheck_765_ == 0)
{
v___x_759_ = v_x_755_;
v_isShared_760_ = v_isSharedCheck_765_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v_x_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_765_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_764_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v___x_763_; 
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_775_; 
v_a_766_ = lean_ctor_get(v_x_755_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v_x_755_);
if (v_isSharedCheck_775_ == 0)
{
v___x_768_ = v_x_755_;
v_isShared_769_ = v_isSharedCheck_775_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v_x_755_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_775_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_774_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_776_, lean_object* v___y_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lasm_Fetch_respond___lam__2(v_x_776_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_782_, lean_object* v_req_783_, lean_object* v___f_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_816_; 
v_a_787_ = lean_ctor_get(v_x_785_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v_x_785_);
if (v_isSharedCheck_816_ == 0)
{
v___x_789_ = v_x_785_;
v_isShared_790_ = v_isSharedCheck_816_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v_x_785_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_816_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v_val_804_; lean_object* v___x_807_; 
v___x_791_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_792_ = lean_string_append(v___x_791_, v_method_782_);
v___x_793_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_794_ = lean_string_append(v___x_792_, v___x_793_);
v___x_795_ = l_Lasm_Fetch_Request_path(v_req_783_);
v___x_796_ = lean_string_append(v___x_794_, v___x_795_);
lean_dec_ref(v___x_795_);
v___x_797_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_798_ = lean_string_append(v___x_796_, v___x_797_);
v___x_799_ = lean_io_error_to_string(v_a_787_);
v___x_800_ = lean_string_append(v___x_798_, v___x_799_);
lean_dec_ref(v___x_799_);
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = 0;
v___x_807_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_800_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
if (v_isShared_790_ == 0)
{
lean_ctor_set_tag(v___x_789_, 1);
lean_ctor_set(v___x_789_, 0, v_a_808_);
v___x_810_ = v___x_789_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
v_val_804_ = v___x_810_;
goto v___jp_803_;
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; 
v_a_812_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_807_, 1);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_a_812_);
v___x_814_ = v___x_789_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
v_val_804_ = v___x_814_;
goto v___jp_803_;
}
}
v___jp_803_:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_val_804_);
v___x_806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_801_, v___x_802_, v___x_805_, v___f_784_);
return v___x_806_;
}
}
}
else
{
lean_object* v___x_817_; 
lean_dec_ref(v___f_784_);
lean_dec_ref(v_req_783_);
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_x_785_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_818_, lean_object* v_req_819_, lean_object* v___f_820_, lean_object* v_x_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_Fetch_respond___lam__3(v_method_818_, v_req_819_, v___f_820_, v_x_821_);
lean_dec_ref(v_method_818_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_829_, lean_object* v_req_830_){
_start:
{
lean_object* v_method_832_; lean_object* v_url_833_; lean_object* v_headers_834_; lean_object* v_body_835_; lean_object* v_read_836_; lean_object* v___f_837_; lean_object* v___f_838_; lean_object* v___f_839_; lean_object* v___f_840_; lean_object* v___y_842_; lean_object* v___x_849_; uint8_t v___x_850_; 
v_method_832_ = lean_ctor_get(v_req_830_, 0);
v_url_833_ = lean_ctor_get(v_req_830_, 1);
v_headers_834_ = lean_ctor_get(v_req_830_, 2);
v_body_835_ = lean_ctor_get(v_req_830_, 3);
v_read_836_ = lean_ctor_get(v_req_830_, 4);
v___f_837_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_838_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_839_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_830_);
lean_inc_ref(v_method_832_);
v___f_840_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_840_, 0, v_method_832_);
lean_closure_set(v___f_840_, 1, v_req_830_);
lean_closure_set(v___f_840_, 2, v___f_838_);
v___x_849_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_850_ = lean_string_dec_eq(v_method_832_, v___x_849_);
if (v___x_850_ == 0)
{
v___y_842_ = v_req_830_;
goto v___jp_841_;
}
else
{
lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
lean_inc_ref(v_read_836_);
lean_inc_ref(v_body_835_);
lean_inc_ref(v_headers_834_);
lean_inc_ref(v_url_833_);
v_isSharedCheck_858_ = !lean_is_exclusive(v_req_830_);
if (v_isSharedCheck_858_ == 0)
{
lean_object* v_unused_859_; lean_object* v_unused_860_; lean_object* v_unused_861_; lean_object* v_unused_862_; lean_object* v_unused_863_; 
v_unused_859_ = lean_ctor_get(v_req_830_, 4);
lean_dec(v_unused_859_);
v_unused_860_ = lean_ctor_get(v_req_830_, 3);
lean_dec(v_unused_860_);
v_unused_861_ = lean_ctor_get(v_req_830_, 2);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v_req_830_, 1);
lean_dec(v_unused_862_);
v_unused_863_ = lean_ctor_get(v_req_830_, 0);
lean_dec(v_unused_863_);
v___x_852_ = v_req_830_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_dec(v_req_830_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_854_);
v___x_856_ = v___x_852_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_url_833_);
lean_ctor_set(v_reuseFailAlloc_857_, 2, v_headers_834_);
lean_ctor_set(v_reuseFailAlloc_857_, 3, v_body_835_);
lean_ctor_set(v_reuseFailAlloc_857_, 4, v_read_836_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
v___y_842_ = v___x_856_;
goto v___jp_841_;
}
}
}
v___jp_841_:
{
lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = 0;
v___x_845_ = lean_apply_2(v_handler_829_, v___y_842_, lean_box(0));
v___x_846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_843_, v___x_844_, v___x_845_, v___f_839_);
v___x_847_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_843_, v___x_844_, v___x_846_, v___f_840_);
v___x_848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_843_, v___x_844_, v___x_847_, v___f_837_);
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_864_, lean_object* v_req_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lasm_Fetch_respond(v_handler_864_, v_req_865_);
return v_res_867_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_868_, uint16_t v_status_869_){
_start:
{
lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_870_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_871_ = lean_string_dec_eq(v_method_868_, v___x_870_);
if (v___x_871_ == 0)
{
uint16_t v___x_872_; uint8_t v___x_873_; 
v___x_872_ = 101;
v___x_873_ = lean_uint16_dec_eq(v_status_869_, v___x_872_);
if (v___x_873_ == 0)
{
uint16_t v___x_874_; uint8_t v___x_875_; 
v___x_874_ = 204;
v___x_875_ = lean_uint16_dec_eq(v_status_869_, v___x_874_);
if (v___x_875_ == 0)
{
uint16_t v___x_876_; uint8_t v___x_877_; 
v___x_876_ = 205;
v___x_877_ = lean_uint16_dec_eq(v_status_869_, v___x_876_);
if (v___x_877_ == 0)
{
uint16_t v___x_878_; uint8_t v___x_879_; 
v___x_878_ = 304;
v___x_879_ = lean_uint16_dec_eq(v_status_869_, v___x_878_);
return v___x_879_;
}
else
{
return v___x_877_;
}
}
else
{
return v___x_875_;
}
}
else
{
return v___x_873_;
}
}
else
{
return v___x_871_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_880_, lean_object* v_status_881_){
_start:
{
uint16_t v_status_boxed_882_; uint8_t v_res_883_; lean_object* v_r_884_; 
v_status_boxed_882_ = lean_unbox(v_status_881_);
v_res_883_ = l_Lasm_Fetch_bodyless(v_method_880_, v_status_boxed_882_);
lean_dec_ref(v_method_880_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_886_){
_start:
{
uint32_t v_res_887_; lean_object* v_r_888_; 
v_res_887_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_886_);
v_r_888_ = lean_box_uint32(v_res_887_);
return v_r_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = lasm_fetch_take_request();
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_896_, lean_object* v_headers_897_, lean_object* v_body_898_, lean_object* v_a_00___x40___internal___hyg_899_){
_start:
{
uint16_t v_status_boxed_900_; lean_object* v_res_901_; 
v_status_boxed_900_ = lean_unbox(v_status_896_);
v_res_901_ = lasm_fetch_send_response(v_status_boxed_900_, v_headers_897_, v_body_898_);
lean_dec_ref(v_body_898_);
lean_dec_ref(v_headers_897_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = lasm_fetch_take_request_head();
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_907_, lean_object* v_a_00___x40___internal___hyg_908_){
_start:
{
uint32_t v_max_boxed_909_; lean_object* v_res_910_; 
v_max_boxed_909_ = lean_unbox_uint32(v_max_907_);
lean_dec(v_max_907_);
v_res_910_ = lasm_fetch_read(v_max_boxed_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_914_, lean_object* v_headers_915_, lean_object* v_a_00___x40___internal___hyg_916_){
_start:
{
uint16_t v_status_boxed_917_; lean_object* v_res_918_; 
v_status_boxed_917_ = lean_unbox(v_status_914_);
v_res_918_ = lasm_fetch_start_response(v_status_boxed_917_, v_headers_915_);
lean_dec_ref(v_headers_915_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_921_, lean_object* v_a_00___x40___internal___hyg_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = lasm_fetch_write(v_chunk_921_);
lean_dec_ref(v_chunk_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_926_, lean_object* v_a_00___x40___internal___hyg_927_){
_start:
{
uint8_t v_ok_boxed_928_; lean_object* v_res_929_; 
v_ok_boxed_928_ = lean_unbox(v_ok_926_);
v_res_929_ = lasm_fetch_finish(v_ok_boxed_928_);
return v_res_929_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_930_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = 0;
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_932_){
_start:
{
uint8_t v_res_933_; lean_object* v_r_934_; 
v_res_933_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_932_);
lean_dec_ref(v_x_932_);
v_r_934_ = lean_box(v_res_933_);
return v_r_934_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_944_){
_start:
{
lean_object* v_b_947_; 
if (lean_obj_tag(v_x_944_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_961_; 
v_a_953_ = lean_ctor_get(v_x_944_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v_x_944_);
if (v_isSharedCheck_961_ == 0)
{
v___x_955_ = v_x_944_;
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v_x_944_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_960_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_a_962_ = lean_ctor_get(v_x_944_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v_x_944_, 1);
v___x_963_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_964_ = l_Lasm_JS_Data_field(v_a_962_, v___x_963_);
if (lean_obj_tag(v___x_964_) == 2)
{
uint8_t v_b_965_; 
v_b_965_ = lean_ctor_get_uint8(v___x_964_, 0);
lean_dec_ref_known(v___x_964_, 0);
if (v_b_965_ == 1)
{
lean_object* v___x_966_; 
lean_dec(v_a_962_);
v___x_966_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_966_;
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_968_ = l_Lasm_JS_Data_field(v_a_962_, v___x_967_);
lean_dec(v_a_962_);
if (lean_obj_tag(v___x_968_) == 6)
{
lean_object* v_b_969_; 
v_b_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc_ref(v_b_969_);
lean_dec_ref_known(v___x_968_, 1);
v_b_947_ = v_b_969_;
goto v___jp_946_;
}
else
{
lean_dec(v___x_968_);
goto v___jp_951_;
}
}
}
else
{
lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec(v___x_964_);
v___x_970_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_971_ = l_Lasm_JS_Data_field(v_a_962_, v___x_970_);
lean_dec(v_a_962_);
if (lean_obj_tag(v___x_971_) == 6)
{
lean_object* v_b_972_; 
v_b_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_ref(v_b_972_);
lean_dec_ref_known(v___x_971_, 1);
v_b_947_ = v_b_972_;
goto v___jp_946_;
}
else
{
lean_dec(v___x_971_);
goto v___jp_951_;
}
}
}
v___jp_946_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_948_, 0, v_b_947_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
v___jp_951_:
{
lean_object* v___x_952_; 
v___x_952_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_973_);
return v_res_975_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_976_; uint64_t v___x_977_; 
v___x_976_ = 0;
v___x_977_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_978_, uint64_t v_extra_979_){
_start:
{
uint64_t v___x_980_; uint64_t v___y_982_; 
v___x_980_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_978_ == 0)
{
uint64_t v___x_985_; 
v___x_985_ = 0ULL;
v___y_982_ = v___x_985_;
goto v___jp_981_;
}
else
{
uint64_t v___x_986_; 
v___x_986_ = 2ULL;
v___y_982_ = v___x_986_;
goto v___jp_981_;
}
v___jp_981_:
{
uint64_t v___x_983_; uint64_t v___x_984_; 
v___x_983_ = lean_uint64_lor(v___x_980_, v___y_982_);
v___x_984_ = lean_uint64_lor(v___x_983_, v_extra_979_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_987_, lean_object* v_extra_988_){
_start:
{
uint8_t v_await_boxed_989_; uint64_t v_extra_boxed_990_; uint64_t v_res_991_; lean_object* v_r_992_; 
v_await_boxed_989_ = lean_unbox(v_await_987_);
v_extra_boxed_990_ = lean_unbox_uint64(v_extra_988_);
lean_dec_ref(v_extra_988_);
v_res_991_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_989_, v_extra_boxed_990_);
v_r_992_ = lean_box_uint64(v_res_991_);
return v_r_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_993_){
_start:
{
if (lean_obj_tag(v_x_993_) == 0)
{
lean_object* v___x_995_; 
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v_x_993_);
return v___x_995_;
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1004_; 
v_a_996_ = lean_ctor_get(v_x_993_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_x_993_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_998_ = v_x_993_;
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v_x_993_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_996_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1008_, lean_object* v_x_1009_){
_start:
{
if (lean_obj_tag(v_x_1009_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1019_; 
v_a_1011_ = lean_ctor_get(v_x_1009_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_x_1009_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1013_ = v_x_1009_;
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v_x_1009_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
}
else
{
lean_object* v___x_1020_; 
lean_dec_ref_known(v_x_1009_, 1);
v___x_1020_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1008_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1021_, lean_object* v_x_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1021_, v_x_1022_);
lean_dec(v_a_1021_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1025_, lean_object* v_failurePrefix_1026_, lean_object* v___f_1027_, lean_object* v___f_1028_, uint32_t v_op_1029_, uint64_t v_flags_1030_, lean_object* v___f_1031_, lean_object* v_x_1032_){
_start:
{
if (lean_obj_tag(v_x_1032_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1042_; 
lean_dec_ref(v___f_1031_);
lean_dec_ref(v___f_1028_);
lean_dec_ref(v___f_1027_);
v_a_1034_ = lean_ctor_get(v_x_1032_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_x_1032_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1036_ = v_x_1032_;
v_isShared_1037_ = v_isSharedCheck_1042_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v_x_1032_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1042_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1084_; 
v_a_1043_ = lean_ctor_get(v_x_1032_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_x_1032_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1045_ = v_x_1032_;
v_isShared_1046_ = v_isSharedCheck_1084_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v_x_1032_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1084_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
uint32_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v___x_1047_ = 0;
v___x_1048_ = l_Lasm_JS_Wire_encode(v_payload_1025_);
v___x_1049_ = lean_string_utf8_byte_size(v_failurePrefix_1026_);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_nat_dec_eq(v___x_1049_, v___x_1050_);
if (v___x_1051_ == 0)
{
lean_object* v___f_1052_; lean_object* v_val_1054_; lean_object* v___x_1059_; 
lean_dec_ref(v___f_1031_);
lean_inc(v_a_1043_);
v___f_1052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1052_, 0, v_a_1043_);
v___x_1059_ = lasm_js_call_into(v_a_1043_, v_op_1029_, v___x_1047_, v_flags_1030_, v___x_1048_, v_payload_1025_);
lean_dec_ref(v___x_1048_);
lean_dec(v_a_1043_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1062_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 0, v_a_1060_);
v___x_1062_ = v___x_1045_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
v_val_1054_ = v___x_1062_;
goto v___jp_1053_;
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; 
v_a_1064_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1059_, 1);
if (v_isShared_1046_ == 0)
{
lean_ctor_set_tag(v___x_1045_, 0);
lean_ctor_set(v___x_1045_, 0, v_a_1064_);
v___x_1066_ = v___x_1045_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
v_val_1054_ = v___x_1066_;
goto v___jp_1053_;
}
}
v___jp_1053_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1055_, 0, v_val_1054_);
v___x_1056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1050_, v___x_1051_, v___x_1055_, v___f_1052_);
v___x_1057_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1050_, v___x_1051_, v___x_1056_, v___f_1027_);
v___x_1058_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1050_, v___x_1051_, v___x_1057_, v___f_1028_);
return v___x_1058_;
}
}
else
{
lean_object* v___f_1068_; uint8_t v___x_1069_; lean_object* v_val_1071_; lean_object* v___x_1075_; 
lean_dec_ref(v___f_1028_);
lean_dec_ref(v___f_1027_);
lean_inc(v_a_1043_);
v___f_1068_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1068_, 0, v_a_1043_);
v___x_1069_ = 0;
v___x_1075_ = lasm_js_call_into(v_a_1043_, v_op_1029_, v___x_1047_, v_flags_1030_, v___x_1048_, v_payload_1025_);
lean_dec_ref(v___x_1048_);
lean_dec(v_a_1043_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 0, v_a_1076_);
v___x_1078_ = v___x_1045_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
v_val_1071_ = v___x_1078_;
goto v___jp_1070_;
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; 
v_a_1080_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1075_, 1);
if (v_isShared_1046_ == 0)
{
lean_ctor_set_tag(v___x_1045_, 0);
lean_ctor_set(v___x_1045_, 0, v_a_1080_);
v___x_1082_ = v___x_1045_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
v_val_1071_ = v___x_1082_;
goto v___jp_1070_;
}
}
v___jp_1070_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1072_, 0, v_val_1071_);
v___x_1073_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1050_, v___x_1069_, v___x_1072_, v___f_1068_);
v___x_1074_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1050_, v___x_1069_, v___x_1073_, v___f_1031_);
return v___x_1074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1085_, lean_object* v_failurePrefix_1086_, lean_object* v___f_1087_, lean_object* v___f_1088_, lean_object* v_op_1089_, lean_object* v_flags_1090_, lean_object* v___f_1091_, lean_object* v_x_1092_, lean_object* v___y_1093_){
_start:
{
uint32_t v_op_boxed_1094_; uint64_t v_flags_boxed_1095_; lean_object* v_res_1096_; 
v_op_boxed_1094_ = lean_unbox_uint32(v_op_1089_);
lean_dec(v_op_1089_);
v_flags_boxed_1095_ = lean_unbox_uint64(v_flags_1090_);
lean_dec_ref(v_flags_1090_);
v_res_1096_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1085_, v_failurePrefix_1086_, v___f_1087_, v___f_1088_, v_op_boxed_1094_, v_flags_boxed_1095_, v___f_1091_, v_x_1092_);
lean_dec_ref(v_failurePrefix_1086_);
lean_dec(v_payload_1085_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1097_, lean_object* v_bytes_1098_){
_start:
{
lean_object* v___x_1100_; uint8_t v___x_1101_; lean_object* v_val_1103_; lean_object* v___x_1106_; 
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = 0;
v___x_1106_ = l_Lasm_JS_Wire_decode(v_bytes_1098_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1106_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1106_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 1);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
v_val_1103_ = v___x_1112_;
goto v___jp_1102_;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
v_a_1115_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1106_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1106_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 0);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v_val_1103_ = v___x_1120_;
goto v___jp_1102_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_val_1103_);
v___x_1105_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1100_, v___x_1101_, v___x_1104_, v___f_1097_);
return v___x_1105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1123_, lean_object* v_bytes_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1123_, v_bytes_1124_);
lean_dec_ref(v_bytes_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1127_, lean_object* v_x_1128_){
_start:
{
if (lean_obj_tag(v_x_1128_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1141_; 
v_a_1130_ = lean_ctor_get(v_x_1128_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_x_1128_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1132_ = v_x_1128_;
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v_x_1128_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1134_ = lean_io_error_to_string(v_a_1130_);
v___x_1135_ = lean_string_append(v_failurePrefix_1127_, v___x_1134_);
lean_dec_ref(v___x_1134_);
v___x_1136_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v___x_1136_);
v___x_1138_ = v___x_1132_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
return v___x_1139_;
}
}
}
else
{
lean_object* v___x_1142_; 
lean_dec_ref(v_failurePrefix_1127_);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v_x_1128_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1143_, lean_object* v_x_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1143_, v_x_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1147_, lean_object* v_x_1148_){
_start:
{
if (lean_obj_tag(v_x_1148_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1158_; 
lean_dec_ref(v___f_1147_);
v_a_1150_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1152_ = v_x_1148_;
v_isShared_1153_ = v_isSharedCheck_1158_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v_x_1148_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1158_;
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
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; 
v_a_1159_ = lean_ctor_get(v_x_1148_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v_x_1148_, 1);
v___x_1160_ = lean_apply_2(v___f_1147_, v_a_1159_, lean_box(0));
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1161_, lean_object* v_x_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1161_, v_x_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1165_, lean_object* v_x_1166_){
_start:
{
if (lean_obj_tag(v_x_1166_) == 0)
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v___f_1165_);
v_a_1168_ = lean_ctor_get(v_x_1166_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_x_1166_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1170_ = v_x_1166_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v_x_1166_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
}
else
{
lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1188_; 
v_isSharedCheck_1188_ = !lean_is_exclusive(v_x_1166_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; 
v_unused_1189_ = lean_ctor_get(v_x_1166_, 0);
lean_dec(v_unused_1189_);
v___x_1178_ = v_x_1166_;
v_isShared_1179_ = v_isSharedCheck_1188_;
goto v_resetjp_1177_;
}
else
{
lean_dec(v_x_1166_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1188_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; uint8_t v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = 0;
v___x_1182_ = lean_io_promise_new();
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1182_);
v___x_1184_ = v___x_1178_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
v___x_1186_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1180_, v___x_1181_, v___x_1185_, v___f_1165_);
return v___x_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1190_, lean_object* v_x_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1190_, v_x_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1199_, uint64_t v_flags_1200_, lean_object* v_payload_1201_, lean_object* v_failurePrefix_1202_){
_start:
{
lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___f_1208_; lean_object* v___f_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; lean_object* v_val_1213_; lean_object* v___x_1216_; 
lean_inc_ref(v_failurePrefix_1202_);
v___f_1204_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1204_, 0, v_failurePrefix_1202_);
v___f_1205_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1206_ = lean_box_uint32(v_op_1199_);
v___x_1207_ = lean_box_uint64(v_flags_1200_);
v___f_1208_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1208_, 0, v_payload_1201_);
lean_closure_set(v___f_1208_, 1, v_failurePrefix_1202_);
lean_closure_set(v___f_1208_, 2, v___f_1204_);
lean_closure_set(v___f_1208_, 3, v___f_1205_);
lean_closure_set(v___f_1208_, 4, v___x_1206_);
lean_closure_set(v___f_1208_, 5, v___x_1207_);
lean_closure_set(v___f_1208_, 6, v___f_1205_);
v___f_1209_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1209_, 0, v___f_1208_);
v___x_1210_ = lean_unsigned_to_nat(0u);
v___x_1211_ = 0;
v___x_1216_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1216_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 1);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v_val_1213_ = v___x_1222_;
goto v___jp_1212_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
v_a_1225_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1216_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1216_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
lean_ctor_set_tag(v___x_1227_, 0);
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
v_val_1213_ = v___x_1230_;
goto v___jp_1212_;
}
}
}
v___jp_1212_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v_val_1213_);
v___x_1215_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1210_, v___x_1211_, v___x_1214_, v___f_1209_);
return v___x_1215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1233_, lean_object* v_flags_1234_, lean_object* v_payload_1235_, lean_object* v_failurePrefix_1236_, lean_object* v_a_1237_){
_start:
{
uint32_t v_op_boxed_1238_; uint64_t v_flags_boxed_1239_; lean_object* v_res_1240_; 
v_op_boxed_1238_ = lean_unbox_uint32(v_op_1233_);
lean_dec(v_op_1233_);
v_flags_boxed_1239_ = lean_unbox_uint64(v_flags_1234_);
lean_dec_ref(v_flags_1234_);
v_res_1240_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1238_, v_flags_boxed_1239_, v_payload_1235_, v_failurePrefix_1236_);
return v_res_1240_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1241_; uint8_t v___x_1242_; uint64_t v___x_1243_; 
v___x_1241_ = 8ULL;
v___x_1242_ = 0;
v___x_1243_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1242_, v___x_1241_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1244_, lean_object* v_name_1245_, lean_object* v_args_1246_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint32_t v___x_1251_; uint64_t v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1248_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1249_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1249_, 0, v_o_1244_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1250_, 0, v_name_1245_);
v___x_1251_ = 205;
v___x_1252_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1253_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1253_, 0, v_args_1246_);
v___x_1254_ = lean_unsigned_to_nat(3u);
v___x_1255_ = lean_mk_empty_array_with_capacity(v___x_1254_);
v___x_1256_ = lean_array_push(v___x_1255_, v___x_1249_);
v___x_1257_ = lean_array_push(v___x_1256_, v___x_1250_);
v___x_1258_ = lean_array_push(v___x_1257_, v___x_1253_);
v___x_1259_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
v___x_1260_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1251_, v___x_1252_, v___x_1259_, v___x_1248_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1261_, lean_object* v_name_1262_, lean_object* v_args_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1261_, v_name_1262_, v_args_1263_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1266_, lean_object* v___x_1267_, lean_object* v___x_1268_, lean_object* v___x_1269_, lean_object* v___f_1270_){
_start:
{
uint8_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = 0;
v___x_1273_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1266_, v___x_1267_, v___x_1268_);
v___x_1274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1269_, v___x_1272_, v___x_1273_, v___f_1270_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1275_, lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v___x_1278_, lean_object* v___f_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1275_, v___x_1276_, v___x_1277_, v___x_1278_, v___f_1279_);
return v_res_1281_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1282_; uint64_t v___x_1283_; 
v___x_1282_ = 1;
v___x_1283_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1284_, uint64_t v_extra_1285_){
_start:
{
uint64_t v___x_1286_; uint64_t v___y_1288_; 
v___x_1286_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1284_ == 0)
{
uint64_t v___x_1291_; 
v___x_1291_ = 0ULL;
v___y_1288_ = v___x_1291_;
goto v___jp_1287_;
}
else
{
uint64_t v___x_1292_; 
v___x_1292_ = 2ULL;
v___y_1288_ = v___x_1292_;
goto v___jp_1287_;
}
v___jp_1287_:
{
uint64_t v___x_1289_; uint64_t v___x_1290_; 
v___x_1289_ = lean_uint64_lor(v___x_1286_, v___y_1288_);
v___x_1290_ = lean_uint64_lor(v___x_1289_, v_extra_1285_);
return v___x_1290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1293_, lean_object* v_extra_1294_){
_start:
{
uint8_t v_await_boxed_1295_; uint64_t v_extra_boxed_1296_; uint64_t v_res_1297_; lean_object* v_r_1298_; 
v_await_boxed_1295_ = lean_unbox(v_await_1293_);
v_extra_boxed_1296_ = lean_unbox_uint64(v_extra_1294_);
lean_dec_ref(v_extra_1294_);
v_res_1297_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1295_, v_extra_boxed_1296_);
v_r_1298_ = lean_box_uint64(v_res_1297_);
return v_r_1298_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1299_; uint8_t v___x_1300_; uint64_t v___x_1301_; 
v___x_1299_ = 8ULL;
v___x_1300_ = 0;
v___x_1301_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1300_, v___x_1299_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1303_, lean_object* v_name_1304_, lean_object* v_args_1305_){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; uint64_t v___x_1310_; lean_object* v___x_1311_; 
v___x_1307_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1308_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1308_, 0, v_o_1303_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
lean_inc_ref(v_name_1304_);
v___x_1309_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1309_, 0, v_name_1304_);
v___x_1310_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1311_ = l_Lasm_JS_Value_invokeRaw(v___x_1308_, v___x_1309_, v_args_1305_, v___x_1310_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1313_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1314_ = lean_string_append(v___x_1313_, v_name_1304_);
lean_dec_ref(v_name_1304_);
v___x_1315_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1314_, v_a_1312_);
lean_dec(v_a_1312_);
lean_dec_ref(v___x_1314_);
return v___x_1315_;
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_name_1304_);
v_a_1316_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1311_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1311_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1324_, lean_object* v_name_1325_, lean_object* v_args_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1324_, v_name_1325_, v_args_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1334_){
_start:
{
lean_object* v___f_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___f_1336_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1337_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1340_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1334_, v___x_1337_, v___x_1339_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1350_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1343_ = v___x_1340_;
v_isShared_1344_ = v_isSharedCheck_1350_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1340_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1350_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___f_1346_; lean_object* v___x_1348_; 
v___x_1345_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1346_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1346_, 0, v_a_1341_);
lean_closure_set(v___f_1346_, 1, v___x_1345_);
lean_closure_set(v___f_1346_, 2, v___x_1339_);
lean_closure_set(v___f_1346_, 3, v___x_1338_);
lean_closure_set(v___f_1346_, 4, v___f_1336_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___f_1346_);
v___x_1348_ = v___x_1343_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___f_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1351_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1340_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1340_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1362_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_d_1362_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1365_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1368_, lean_object* v_d_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_d_1369_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1372_, lean_object* v_d_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1372_, v_d_1373_);
lean_dec_ref(v_context_1372_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1376_, uint32_t v_op_1377_, uint64_t v_flags_1378_, lean_object* v_payload_1379_, lean_object* v_failurePrefix_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1377_, v_flags_1378_, v_payload_1379_, v_failurePrefix_1380_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1383_, lean_object* v_op_1384_, lean_object* v_flags_1385_, lean_object* v_payload_1386_, lean_object* v_failurePrefix_1387_, lean_object* v_a_1388_){
_start:
{
uint32_t v_op_boxed_1389_; uint64_t v_flags_boxed_1390_; lean_object* v_res_1391_; 
v_op_boxed_1389_ = lean_unbox_uint32(v_op_1384_);
lean_dec(v_op_1384_);
v_flags_boxed_1390_ = lean_unbox_uint64(v_flags_1385_);
lean_dec_ref(v_flags_1385_);
v_res_1391_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1383_, v_op_boxed_1389_, v_flags_boxed_1390_, v_payload_1386_, v_failurePrefix_1387_);
lean_dec_ref(v_context_1383_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1396_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1406_; 
v_a_1398_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1400_ = v_x_1396_;
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v_x_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
}
}
else
{
lean_object* v___x_1407_; 
lean_dec_ref_known(v_x_1396_, 1);
v___x_1407_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1408_);
return v_res_1410_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1411_; uint8_t v___x_1412_; uint64_t v___x_1413_; 
v___x_1411_ = 4ULL;
v___x_1412_ = 0;
v___x_1413_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1412_, v___x_1411_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1415_, lean_object* v_args_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; uint64_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1418_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1419_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1419_, 0, v_c_1415_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1422_ = l_Lasm_JS_Value_invokeRaw(v___x_1419_, v___x_1420_, v_args_1416_, v___x_1421_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1425_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1424_, v_a_1423_);
lean_dec(v_a_1423_);
return v___x_1425_;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_a_1426_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1422_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1422_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1434_, lean_object* v_args_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1434_, v_args_1435_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1438_, lean_object* v___x_1439_, lean_object* v_x_1440_){
_start:
{
lean_object* v_val_1443_; 
if (lean_obj_tag(v_x_1440_) == 0)
{
lean_object* v___x_1445_; 
lean_dec(v___x_1439_);
lean_dec(v___y_1438_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_x_1440_);
return v___x_1445_;
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1463_; 
v_a_1446_ = lean_ctor_get(v_x_1440_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_x_1440_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1448_ = v_x_1440_;
v_isShared_1449_ = v_isSharedCheck_1463_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v_x_1440_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1463_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1450_ = lean_unsigned_to_nat(2u);
v___x_1451_ = lean_mk_empty_array_with_capacity(v___x_1450_);
v___x_1452_ = lean_array_push(v___x_1451_, v___y_1438_);
v___x_1453_ = lean_array_push(v___x_1452_, v___x_1439_);
v___x_1454_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1446_, v___x_1453_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v_a_1455_);
v___x_1457_ = v___x_1448_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1455_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
v_val_1443_ = v___x_1457_;
goto v___jp_1442_;
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; 
v_a_1459_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1454_, 1);
if (v_isShared_1449_ == 0)
{
lean_ctor_set_tag(v___x_1448_, 0);
lean_ctor_set(v___x_1448_, 0, v_a_1459_);
v___x_1461_ = v___x_1448_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
v_val_1443_ = v___x_1461_;
goto v___jp_1442_;
}
}
}
}
v___jp_1442_:
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v_val_1443_);
return v___x_1444_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_1464_, lean_object* v___x_1465_, lean_object* v_x_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_1464_, v___x_1465_, v_x_1466_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_1469_, lean_object* v___x_1470_, lean_object* v_x_1471_){
_start:
{
lean_object* v_val_1474_; 
if (lean_obj_tag(v_x_1471_) == 0)
{
lean_object* v___x_1476_; 
lean_dec(v___x_1470_);
lean_dec(v_a_1469_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_x_1471_);
return v___x_1476_;
}
else
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1496_; 
v_a_1477_ = lean_ctor_get(v_x_1471_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_x_1471_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1479_ = v_x_1471_;
v_isShared_1480_ = v_isSharedCheck_1496_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v_x_1471_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1496_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1481_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_a_1469_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = lean_unsigned_to_nat(2u);
v___x_1484_ = lean_mk_empty_array_with_capacity(v___x_1483_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1482_);
v___x_1486_ = lean_array_push(v___x_1485_, v___x_1470_);
v___x_1487_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1477_, v___x_1486_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1490_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v___x_1487_, 1);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 0, v_a_1488_);
v___x_1490_ = v___x_1479_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
v_val_1474_ = v___x_1490_;
goto v___jp_1473_;
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; 
v_a_1492_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1487_, 1);
if (v_isShared_1480_ == 0)
{
lean_ctor_set_tag(v___x_1479_, 0);
lean_ctor_set(v___x_1479_, 0, v_a_1492_);
v___x_1494_ = v___x_1479_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1492_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
v_val_1474_ = v___x_1494_;
goto v___jp_1473_;
}
}
}
}
v___jp_1473_:
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_val_1474_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_1497_, lean_object* v___x_1498_, lean_object* v_x_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_1497_, v___x_1498_, v_x_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_1503_, lean_object* v_key_1504_){
_start:
{
uint32_t v___x_1506_; uint32_t v___x_1507_; uint64_t v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1506_ = 203;
v___x_1507_ = lasm_js_value_handle(v_o_1503_);
v___x_1508_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_1504_);
v___x_1509_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1509_, 0, v_key_1504_);
v___x_1510_ = l_Lasm_JS_Wire_encode(v___x_1509_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1511_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1512_, 0, v_o_1503_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lasm_js_call(v___x_1506_, v___x_1507_, v___x_1508_, v___x_1510_, v___x_1512_);
lean_dec_ref_known(v___x_1512_, 2);
lean_dec_ref(v___x_1510_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1513_, 1);
v___x_1515_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_1516_ = l_String_quote(v_key_1504_);
v___x_1517_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
v___x_1518_ = lean_unsigned_to_nat(120u);
v___x_1519_ = lean_unsigned_to_nat(0u);
v___x_1520_ = l_Std_Format_pretty(v___x_1517_, v___x_1518_, v___x_1519_, v___x_1519_);
v___x_1521_ = lean_string_append(v___x_1515_, v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1521_, v_a_1514_);
lean_dec(v_a_1514_);
lean_dec_ref(v___x_1521_);
return v___x_1522_;
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_key_1504_);
v_a_1523_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1513_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1513_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_1531_, lean_object* v_key_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_1531_, v_key_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_1536_, uint8_t v___x_1537_, lean_object* v___f_1538_, lean_object* v_a_1539_, lean_object* v_x_1540_){
_start:
{
lean_object* v_val_1543_; 
if (lean_obj_tag(v_x_1540_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_a_1539_);
lean_dec_ref(v___f_1538_);
lean_dec(v___x_1536_);
v_a_1546_ = lean_ctor_get(v_x_1540_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_x_1540_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1548_ = v_x_1540_;
v_isShared_1549_ = v_isSharedCheck_1554_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v_x_1540_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1554_;
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
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
return v___x_1552_;
}
}
}
else
{
lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1568_; 
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1540_);
if (v_isSharedCheck_1568_ == 0)
{
lean_object* v_unused_1569_; 
v_unused_1569_ = lean_ctor_get(v_x_1540_, 0);
lean_dec(v_unused_1569_);
v___x_1556_ = v_x_1540_;
v_isShared_1557_ = v_isSharedCheck_1568_;
goto v_resetjp_1555_;
}
else
{
lean_dec(v_x_1540_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1568_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_1559_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1539_, v___x_1558_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v___x_1559_, 1);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v_a_1560_);
v___x_1562_ = v___x_1556_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
v_val_1543_ = v___x_1562_;
goto v___jp_1542_;
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; 
v_a_1564_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1559_, 1);
if (v_isShared_1557_ == 0)
{
lean_ctor_set_tag(v___x_1556_, 0);
lean_ctor_set(v___x_1556_, 0, v_a_1564_);
v___x_1566_ = v___x_1556_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
v_val_1543_ = v___x_1566_;
goto v___jp_1542_;
}
}
}
}
v___jp_1542_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1544_, 0, v_val_1543_);
v___x_1545_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1536_, v___x_1537_, v___x_1544_, v___f_1538_);
return v___x_1545_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v___f_1572_, lean_object* v_a_1573_, lean_object* v_x_1574_, lean_object* v___y_1575_){
_start:
{
uint8_t v___x_5404__boxed_1576_; lean_object* v_res_1577_; 
v___x_5404__boxed_1576_ = lean_unbox(v___x_1571_);
v_res_1577_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_1570_, v___x_5404__boxed_1576_, v___f_1572_, v_a_1573_, v_x_1574_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_1579_, lean_object* v___x_1580_, uint8_t v___x_1581_, lean_object* v___f_1582_, lean_object* v_chunk_1583_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1585_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_1586_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_chunk_1583_);
v___x_1587_ = lean_unsigned_to_nat(1u);
v___x_1588_ = lean_mk_empty_array_with_capacity(v___x_1587_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1586_);
v___x_1590_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1579_, v___x_1585_, v___x_1589_);
v___x_1591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1580_, v___x_1581_, v___x_1590_, v___f_1582_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_1592_, lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___f_1595_, lean_object* v_chunk_1596_, lean_object* v___y_1597_){
_start:
{
uint8_t v___x_5483__boxed_1598_; lean_object* v_res_1599_; 
v___x_5483__boxed_1598_ = lean_unbox(v___x_1594_);
v_res_1599_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_1592_, v___x_1593_, v___x_5483__boxed_1598_, v___f_1595_, v_chunk_1596_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_1601_, lean_object* v_a_1602_, lean_object* v___x_1603_, uint8_t v___x_1604_, lean_object* v___f_1605_, lean_object* v_x_1606_){
_start:
{
if (lean_obj_tag(v_x_1606_) == 0)
{
lean_object* v___x_1608_; 
lean_dec_ref(v___f_1605_);
lean_dec(v___x_1603_);
lean_dec(v_a_1602_);
lean_dec_ref(v___x_1601_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v_x_1606_);
return v___x_1608_;
}
else
{
lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1621_; 
v_isSharedCheck_1621_ = !lean_is_exclusive(v_x_1606_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; 
v_unused_1622_ = lean_ctor_get(v_x_1606_, 0);
lean_dec(v_unused_1622_);
v___x_1610_ = v_x_1606_;
v_isShared_1611_ = v_isSharedCheck_1621_;
goto v_resetjp_1609_;
}
else
{
lean_dec(v_x_1606_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1621_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1612_; lean_object* v___x_1614_; 
v___x_1612_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_1611_ == 0)
{
lean_ctor_set_tag(v___x_1610_, 4);
lean_ctor_set(v___x_1610_, 0, v___x_1601_);
v___x_1614_ = v___x_1610_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1601_);
v___x_1614_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1615_ = lean_unsigned_to_nat(1u);
v___x_1616_ = lean_mk_empty_array_with_capacity(v___x_1615_);
v___x_1617_ = lean_array_push(v___x_1616_, v___x_1614_);
v___x_1618_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1602_, v___x_1612_, v___x_1617_);
v___x_1619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1604_, v___x_1618_, v___f_1605_);
return v___x_1619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_1623_, lean_object* v_a_1624_, lean_object* v___x_1625_, lean_object* v___x_1626_, lean_object* v___f_1627_, lean_object* v_x_1628_, lean_object* v___y_1629_){
_start:
{
uint8_t v___x_5516__boxed_1630_; lean_object* v_res_1631_; 
v___x_5516__boxed_1630_ = lean_unbox(v___x_1626_);
v_res_1631_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_1623_, v_a_1624_, v___x_1625_, v___x_5516__boxed_1630_, v___f_1627_, v_x_1628_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_1633_, lean_object* v___x_1634_, uint8_t v___x_1635_, lean_object* v___f_1636_, lean_object* v_x_1637_){
_start:
{
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1661_; 
v_a_1639_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1641_ = v_x_1637_;
v_isShared_1642_ = v_isSharedCheck_1661_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v_x_1637_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1661_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___f_1646_; lean_object* v_val_1648_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1643_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_1644_ = lean_io_error_to_string(v_a_1639_);
v___x_1645_ = lean_box(v___x_1635_);
lean_inc(v___x_1634_);
lean_inc_ref(v___x_1644_);
v___f_1646_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_1646_, 0, v___x_1644_);
lean_closure_set(v___f_1646_, 1, v_a_1633_);
lean_closure_set(v___f_1646_, 2, v___x_1634_);
lean_closure_set(v___f_1646_, 3, v___x_1645_);
lean_closure_set(v___f_1646_, 4, v___f_1636_);
v___x_1651_ = lean_string_append(v___x_1643_, v___x_1644_);
lean_dec_ref(v___x_1644_);
v___x_1652_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1651_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
if (v_isShared_1642_ == 0)
{
lean_ctor_set_tag(v___x_1641_, 1);
lean_ctor_set(v___x_1641_, 0, v_a_1653_);
v___x_1655_ = v___x_1641_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
v_val_1648_ = v___x_1655_;
goto v___jp_1647_;
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; 
v_a_1657_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1652_, 1);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v_a_1657_);
v___x_1659_ = v___x_1641_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
v_val_1648_ = v___x_1659_;
goto v___jp_1647_;
}
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_val_1648_);
v___x_1650_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1634_, v___x_1635_, v___x_1649_, v___f_1646_);
return v___x_1650_;
}
}
}
else
{
lean_object* v___x_1662_; 
lean_dec_ref(v___f_1636_);
lean_dec(v___x_1634_);
lean_dec(v_a_1633_);
v___x_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1662_, 0, v_x_1637_);
return v___x_1662_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_1663_, lean_object* v___x_1664_, lean_object* v___x_1665_, lean_object* v___f_1666_, lean_object* v_x_1667_, lean_object* v___y_1668_){
_start:
{
uint8_t v___x_5571__boxed_1669_; lean_object* v_res_1670_; 
v___x_5571__boxed_1669_ = lean_unbox(v___x_1665_);
v_res_1670_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_1663_, v___x_1664_, v___x_5571__boxed_1669_, v___f_1666_, v_x_1667_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_1672_, lean_object* v___x_1673_, lean_object* v___x_1674_, uint8_t v___x_1675_, lean_object* v___f_1676_, lean_object* v_x_1677_){
_start:
{
if (lean_obj_tag(v_x_1677_) == 0)
{
lean_object* v___x_1679_; 
lean_dec_ref(v___f_1676_);
lean_dec(v___x_1674_);
lean_dec_ref(v___x_1673_);
lean_dec(v_a_1672_);
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_x_1677_);
return v___x_1679_;
}
else
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
lean_dec_ref_known(v_x_1677_, 1);
v___x_1680_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_1681_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1672_, v___x_1680_, v___x_1673_);
v___x_1682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1675_, v___x_1681_, v___f_1676_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_1683_, lean_object* v___x_1684_, lean_object* v___x_1685_, lean_object* v___x_1686_, lean_object* v___f_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_){
_start:
{
uint8_t v___x_5642__boxed_1690_; lean_object* v_res_1691_; 
v___x_5642__boxed_1690_ = lean_unbox(v___x_1686_);
v_res_1691_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_1683_, v___x_1684_, v___x_1685_, v___x_5642__boxed_1690_, v___f_1687_, v_x_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_1692_, lean_object* v___f_1693_, lean_object* v___x_1694_, uint8_t v___x_1695_, lean_object* v___f_1696_, lean_object* v___f_1697_){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1699_ = lean_apply_2(v_val_1692_, v___f_1693_, lean_box(0));
lean_inc(v___x_1694_);
v___x_1700_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1694_, v___x_1695_, v___x_1699_, v___f_1696_);
v___x_1701_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1694_, v___x_1695_, v___x_1700_, v___f_1697_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_1702_, lean_object* v___f_1703_, lean_object* v___x_1704_, lean_object* v___x_1705_, lean_object* v___f_1706_, lean_object* v___f_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v___x_5674__boxed_1709_; lean_object* v_res_1710_; 
v___x_5674__boxed_1709_ = lean_unbox(v___x_1705_);
v_res_1710_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_1702_, v___f_1703_, v___x_1704_, v___x_5674__boxed_1709_, v___f_1706_, v___f_1707_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_1711_, uint8_t v___x_1712_, lean_object* v___f_1713_, lean_object* v___f_1714_, lean_object* v___x_1715_, lean_object* v___f_1716_, lean_object* v_val_1717_, lean_object* v___f_1718_, lean_object* v_x_1719_){
_start:
{
if (lean_obj_tag(v_x_1719_) == 0)
{
lean_object* v___x_1721_; 
lean_dec_ref(v___f_1718_);
lean_dec_ref(v_val_1717_);
lean_dec_ref(v___f_1716_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___f_1714_);
lean_dec_ref(v___f_1713_);
lean_dec(v___x_1711_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_x_1719_);
return v___x_1721_;
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___f_1726_; lean_object* v___x_1727_; lean_object* v___f_1728_; lean_object* v___x_1729_; lean_object* v___f_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_a_1722_ = lean_ctor_get(v_x_1719_, 0);
lean_inc_n(v_a_1722_, 3);
lean_dec_ref_known(v_x_1719_, 1);
v___x_1723_ = lean_box(v___x_1712_);
lean_inc_n(v___x_1711_, 5);
v___f_1724_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_1724_, 0, v_a_1722_);
lean_closure_set(v___f_1724_, 1, v___x_1711_);
lean_closure_set(v___f_1724_, 2, v___x_1723_);
lean_closure_set(v___f_1724_, 3, v___f_1713_);
v___x_1725_ = lean_box(v___x_1712_);
v___f_1726_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1726_, 0, v_a_1722_);
lean_closure_set(v___f_1726_, 1, v___x_1711_);
lean_closure_set(v___f_1726_, 2, v___x_1725_);
lean_closure_set(v___f_1726_, 3, v___f_1714_);
v___x_1727_ = lean_box(v___x_1712_);
v___f_1728_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1728_, 0, v_a_1722_);
lean_closure_set(v___f_1728_, 1, v___x_1715_);
lean_closure_set(v___f_1728_, 2, v___x_1711_);
lean_closure_set(v___f_1728_, 3, v___x_1727_);
lean_closure_set(v___f_1728_, 4, v___f_1716_);
v___x_1729_ = lean_box(v___x_1712_);
v___f_1730_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_1730_, 0, v_val_1717_);
lean_closure_set(v___f_1730_, 1, v___f_1724_);
lean_closure_set(v___f_1730_, 2, v___x_1711_);
lean_closure_set(v___f_1730_, 3, v___x_1729_);
lean_closure_set(v___f_1730_, 4, v___f_1728_);
lean_closure_set(v___f_1730_, 5, v___f_1726_);
v___x_1731_ = lean_io_as_task(v___f_1730_, v___x_1711_);
lean_dec_ref(v___x_1731_);
v___x_1732_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_1733_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1711_, v___x_1712_, v___x_1732_, v___f_1718_);
return v___x_1733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_1734_, lean_object* v___x_1735_, lean_object* v___f_1736_, lean_object* v___f_1737_, lean_object* v___x_1738_, lean_object* v___f_1739_, lean_object* v_val_1740_, lean_object* v___f_1741_, lean_object* v_x_1742_, lean_object* v___y_1743_){
_start:
{
uint8_t v___x_5703__boxed_1744_; lean_object* v_res_1745_; 
v___x_5703__boxed_1744_ = lean_unbox(v___x_1735_);
v_res_1745_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_1734_, v___x_5703__boxed_1744_, v___f_1736_, v___f_1737_, v___x_1738_, v___f_1739_, v_val_1740_, v___f_1741_, v_x_1742_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_1747_, uint8_t v___x_1748_, lean_object* v___f_1749_, lean_object* v___x_1750_, lean_object* v_x_1751_){
_start:
{
lean_object* v_val_1754_; 
if (lean_obj_tag(v_x_1751_) == 0)
{
lean_object* v___x_1757_; 
lean_dec_ref(v___x_1750_);
lean_dec_ref(v___f_1749_);
lean_dec(v___x_1747_);
v___x_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1757_, 0, v_x_1751_);
return v___x_1757_;
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1772_; 
v_a_1758_ = lean_ctor_get(v_x_1751_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v_x_1751_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1760_ = v_x_1751_;
v_isShared_1761_ = v_isSharedCheck_1772_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v_x_1751_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1772_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1762_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_1763_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_1758_, v___x_1762_, v___x_1750_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1766_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v_a_1764_);
v___x_1766_ = v___x_1760_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
v_val_1754_ = v___x_1766_;
goto v___jp_1753_;
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; 
v_a_1768_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1763_, 1);
if (v_isShared_1761_ == 0)
{
lean_ctor_set_tag(v___x_1760_, 0);
lean_ctor_set(v___x_1760_, 0, v_a_1768_);
v___x_1770_ = v___x_1760_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
v_val_1754_ = v___x_1770_;
goto v___jp_1753_;
}
}
}
}
v___jp_1753_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v_val_1754_);
v___x_1756_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1747_, v___x_1748_, v___x_1755_, v___f_1749_);
return v___x_1756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_1773_, lean_object* v___x_1774_, lean_object* v___f_1775_, lean_object* v___x_1776_, lean_object* v_x_1777_, lean_object* v___y_1778_){
_start:
{
uint8_t v___x_5764__boxed_1779_; lean_object* v_res_1780_; 
v___x_5764__boxed_1779_ = lean_unbox(v___x_1774_);
v_res_1780_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_1773_, v___x_5764__boxed_1779_, v___f_1775_, v___x_1776_, v_x_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_1782_, lean_object* v___x_1783_, uint8_t v___x_1784_, lean_object* v_a_1785_, lean_object* v___f_1786_, lean_object* v___f_1787_, lean_object* v___x_1788_, lean_object* v___f_1789_, lean_object* v_val_1790_, lean_object* v_a_1791_, lean_object* v_x_1792_){
_start:
{
if (lean_obj_tag(v_x_1792_) == 0)
{
lean_object* v___x_1794_; 
lean_dec(v_a_1791_);
lean_dec_ref(v_val_1790_);
lean_dec_ref(v___f_1789_);
lean_dec_ref(v___x_1788_);
lean_dec_ref(v___f_1787_);
lean_dec_ref(v___f_1786_);
lean_dec(v_a_1785_);
lean_dec(v___x_1783_);
lean_dec(v___x_1782_);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v_x_1792_);
return v___x_1794_;
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1820_; 
v_a_1795_ = lean_ctor_get(v_x_1792_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v_x_1792_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1797_ = v_x_1792_;
v_isShared_1798_ = v_isSharedCheck_1820_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v_x_1792_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1820_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___f_1799_; lean_object* v___x_1800_; lean_object* v___f_1801_; lean_object* v___x_1802_; lean_object* v___f_1803_; lean_object* v___x_1804_; lean_object* v___f_1805_; lean_object* v_val_1807_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___f_1799_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1799_, 0, v_a_1795_);
lean_closure_set(v___f_1799_, 1, v___x_1782_);
v___x_1800_ = lean_box(v___x_1784_);
lean_inc_n(v___x_1783_, 3);
v___f_1801_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1801_, 0, v___x_1783_);
lean_closure_set(v___f_1801_, 1, v___x_1800_);
lean_closure_set(v___f_1801_, 2, v___f_1799_);
lean_closure_set(v___f_1801_, 3, v_a_1785_);
v___x_1802_ = lean_box(v___x_1784_);
lean_inc_ref(v___x_1788_);
v___f_1803_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_1803_, 0, v___x_1783_);
lean_closure_set(v___f_1803_, 1, v___x_1802_);
lean_closure_set(v___f_1803_, 2, v___f_1786_);
lean_closure_set(v___f_1803_, 3, v___f_1787_);
lean_closure_set(v___f_1803_, 4, v___x_1788_);
lean_closure_set(v___f_1803_, 5, v___f_1789_);
lean_closure_set(v___f_1803_, 6, v_val_1790_);
lean_closure_set(v___f_1803_, 7, v___f_1801_);
v___x_1804_ = lean_box(v___x_1784_);
v___f_1805_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_1805_, 0, v___x_1783_);
lean_closure_set(v___f_1805_, 1, v___x_1804_);
lean_closure_set(v___f_1805_, 2, v___f_1803_);
lean_closure_set(v___f_1805_, 3, v___x_1788_);
v___x_1810_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_1811_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1791_, v___x_1810_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1814_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1811_, 1);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v_a_1812_);
v___x_1814_ = v___x_1797_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
v_val_1807_ = v___x_1814_;
goto v___jp_1806_;
}
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; 
v_a_1816_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1811_, 1);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 0);
lean_ctor_set(v___x_1797_, 0, v_a_1816_);
v___x_1818_ = v___x_1797_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
v_val_1807_ = v___x_1818_;
goto v___jp_1806_;
}
}
v___jp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_val_1807_);
v___x_1809_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1783_, v___x_1784_, v___x_1808_, v___f_1805_);
return v___x_1809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_1821_, lean_object* v___x_1822_, lean_object* v___x_1823_, lean_object* v_a_1824_, lean_object* v___f_1825_, lean_object* v___f_1826_, lean_object* v___x_1827_, lean_object* v___f_1828_, lean_object* v_val_1829_, lean_object* v_a_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_){
_start:
{
uint8_t v___x_5827__boxed_1833_; lean_object* v_res_1834_; 
v___x_5827__boxed_1833_ = lean_unbox(v___x_1823_);
v_res_1834_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_1821_, v___x_1822_, v___x_5827__boxed_1833_, v_a_1824_, v___f_1825_, v___f_1826_, v___x_1827_, v___f_1828_, v_val_1829_, v_a_1830_, v_x_1831_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_1836_, lean_object* v___x_1837_, uint8_t v___x_1838_, lean_object* v_a_1839_, lean_object* v___f_1840_, lean_object* v___f_1841_, lean_object* v___x_1842_, lean_object* v___f_1843_, lean_object* v_val_1844_, lean_object* v_x_1845_){
_start:
{
if (lean_obj_tag(v_x_1845_) == 0)
{
lean_object* v___x_1847_; 
lean_dec_ref(v_val_1844_);
lean_dec_ref(v___f_1843_);
lean_dec_ref(v___x_1842_);
lean_dec_ref(v___f_1841_);
lean_dec_ref(v___f_1840_);
lean_dec(v_a_1839_);
lean_dec(v___x_1837_);
lean_dec(v___x_1836_);
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_x_1845_);
return v___x_1847_;
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1868_; 
v_a_1848_ = lean_ctor_get(v_x_1845_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v_x_1845_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1850_ = v_x_1845_;
v_isShared_1851_ = v_isSharedCheck_1868_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v_x_1845_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1868_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v___f_1853_; lean_object* v_val_1855_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1852_ = lean_box(v___x_1838_);
lean_inc(v_a_1848_);
lean_inc(v___x_1837_);
v___f_1853_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_1853_, 0, v___x_1836_);
lean_closure_set(v___f_1853_, 1, v___x_1837_);
lean_closure_set(v___f_1853_, 2, v___x_1852_);
lean_closure_set(v___f_1853_, 3, v_a_1839_);
lean_closure_set(v___f_1853_, 4, v___f_1840_);
lean_closure_set(v___f_1853_, 5, v___f_1841_);
lean_closure_set(v___f_1853_, 6, v___x_1842_);
lean_closure_set(v___f_1853_, 7, v___f_1843_);
lean_closure_set(v___f_1853_, 8, v_val_1844_);
lean_closure_set(v___f_1853_, 9, v_a_1848_);
v___x_1858_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_1859_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1848_, v___x_1858_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v_a_1860_);
v___x_1862_ = v___x_1850_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
v_val_1855_ = v___x_1862_;
goto v___jp_1854_;
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; 
v_a_1864_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1859_, 1);
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 0);
lean_ctor_set(v___x_1850_, 0, v_a_1864_);
v___x_1866_ = v___x_1850_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
v_val_1855_ = v___x_1866_;
goto v___jp_1854_;
}
}
v___jp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v_val_1855_);
v___x_1857_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1837_, v___x_1838_, v___x_1856_, v___f_1853_);
return v___x_1857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_1869_, lean_object* v___x_1870_, lean_object* v___x_1871_, lean_object* v_a_1872_, lean_object* v___f_1873_, lean_object* v___f_1874_, lean_object* v___x_1875_, lean_object* v___f_1876_, lean_object* v_val_1877_, lean_object* v_x_1878_, lean_object* v___y_1879_){
_start:
{
uint8_t v___x_5921__boxed_1880_; lean_object* v_res_1881_; 
v___x_5921__boxed_1880_ = lean_unbox(v___x_1871_);
v_res_1881_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_1869_, v___x_1870_, v___x_5921__boxed_1880_, v_a_1872_, v___f_1873_, v___f_1874_, v___x_1875_, v___f_1876_, v_val_1877_, v_x_1878_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_1882_, uint8_t v___x_1883_, lean_object* v_a_1884_, lean_object* v___f_1885_, lean_object* v___f_1886_, lean_object* v___f_1887_, lean_object* v_val_1888_, lean_object* v_x_1889_){
_start:
{
if (lean_obj_tag(v_x_1889_) == 0)
{
lean_object* v___x_1891_; 
lean_dec_ref(v_val_1888_);
lean_dec_ref(v___f_1887_);
lean_dec_ref(v___f_1886_);
lean_dec_ref(v___f_1885_);
lean_dec(v_a_1884_);
lean_dec(v___x_1882_);
v___x_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1891_, 0, v_x_1889_);
return v___x_1891_;
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1913_; 
v_a_1892_ = lean_ctor_get(v_x_1889_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_x_1889_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1894_ = v_x_1889_;
v_isShared_1895_ = v_isSharedCheck_1913_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v_x_1889_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1913_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___f_1899_; lean_object* v_val_1901_; lean_object* v___x_1904_; 
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1898_ = lean_box(v___x_1883_);
v___f_1899_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_1899_, 0, v___x_1882_);
lean_closure_set(v___f_1899_, 1, v___x_1896_);
lean_closure_set(v___f_1899_, 2, v___x_1898_);
lean_closure_set(v___f_1899_, 3, v_a_1884_);
lean_closure_set(v___f_1899_, 4, v___f_1885_);
lean_closure_set(v___f_1899_, 5, v___f_1886_);
lean_closure_set(v___f_1899_, 6, v___x_1897_);
lean_closure_set(v___f_1899_, 7, v___f_1887_);
lean_closure_set(v___f_1899_, 8, v_val_1888_);
v___x_1904_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1892_, v___x_1897_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1904_, 1);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v_a_1905_);
v___x_1907_ = v___x_1894_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1905_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
v_val_1901_ = v___x_1907_;
goto v___jp_1900_;
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; 
v_a_1909_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1904_, 1);
if (v_isShared_1895_ == 0)
{
lean_ctor_set_tag(v___x_1894_, 0);
lean_ctor_set(v___x_1894_, 0, v_a_1909_);
v___x_1911_ = v___x_1894_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
v_val_1901_ = v___x_1911_;
goto v___jp_1900_;
}
}
v___jp_1900_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_val_1901_);
v___x_1903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1896_, v___x_1883_, v___x_1902_, v___f_1899_);
return v___x_1903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_1914_, lean_object* v___x_1915_, lean_object* v_a_1916_, lean_object* v___f_1917_, lean_object* v___f_1918_, lean_object* v___f_1919_, lean_object* v_val_1920_, lean_object* v_x_1921_, lean_object* v___y_1922_){
_start:
{
uint8_t v___x_6001__boxed_1923_; lean_object* v_res_1924_; 
v___x_6001__boxed_1923_ = lean_unbox(v___x_1915_);
v_res_1924_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_1914_, v___x_6001__boxed_1923_, v_a_1916_, v___f_1917_, v___f_1918_, v___f_1919_, v_val_1920_, v_x_1921_);
return v_res_1924_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1925_ = lean_box(1);
v___x_1926_ = lean_unsigned_to_nat(2u);
v___x_1927_ = lean_mk_empty_array_with_capacity(v___x_1926_);
v___x_1928_ = lean_array_push(v___x_1927_, v___x_1925_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_1929_, lean_object* v_x_1930_){
_start:
{
lean_object* v_val_1933_; 
if (lean_obj_tag(v_x_1930_) == 0)
{
lean_object* v___x_1935_; 
lean_dec(v___x_1929_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v_x_1930_);
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1951_; 
v_a_1936_ = lean_ctor_get(v_x_1930_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1938_ = v_x_1930_;
v_isShared_1939_ = v_isSharedCheck_1951_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v_x_1930_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1951_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1929_);
v___x_1942_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1936_, v___x_1941_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1942_, 1);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v_a_1943_);
v___x_1945_ = v___x_1938_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
v_val_1933_ = v___x_1945_;
goto v___jp_1932_;
}
}
else
{
lean_object* v_a_1947_; lean_object* v___x_1949_; 
v_a_1947_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1947_);
lean_dec_ref_known(v___x_1942_, 1);
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 0);
lean_ctor_set(v___x_1938_, 0, v_a_1947_);
v___x_1949_ = v___x_1938_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
v_val_1933_ = v___x_1949_;
goto v___jp_1932_;
}
}
}
}
v___jp_1932_:
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1934_, 0, v_val_1933_);
return v___x_1934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_1952_, lean_object* v_x_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_1952_, v_x_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_1956_, size_t v_i_1957_, lean_object* v_bs_1958_){
_start:
{
uint8_t v___x_1959_; 
v___x_1959_ = lean_usize_dec_lt(v_i_1957_, v_sz_1956_);
if (v___x_1959_ == 0)
{
return v_bs_1958_;
}
else
{
lean_object* v_v_1960_; lean_object* v_fst_1961_; lean_object* v_snd_1962_; lean_object* v___x_1963_; lean_object* v_bs_x27_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; size_t v___x_1972_; size_t v___x_1973_; lean_object* v___x_1974_; 
v_v_1960_ = lean_array_uget_borrowed(v_bs_1958_, v_i_1957_);
v_fst_1961_ = lean_ctor_get(v_v_1960_, 0);
lean_inc(v_fst_1961_);
v_snd_1962_ = lean_ctor_get(v_v_1960_, 1);
lean_inc(v_snd_1962_);
v___x_1963_ = lean_unsigned_to_nat(0u);
v_bs_x27_1964_ = lean_array_uset(v_bs_1958_, v_i_1957_, v___x_1963_);
v___x_1965_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_fst_1961_);
v___x_1966_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_snd_1962_);
v___x_1967_ = lean_unsigned_to_nat(2u);
v___x_1968_ = lean_mk_empty_array_with_capacity(v___x_1967_);
v___x_1969_ = lean_array_push(v___x_1968_, v___x_1965_);
v___x_1970_ = lean_array_push(v___x_1969_, v___x_1966_);
v___x_1971_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
v___x_1972_ = ((size_t)1ULL);
v___x_1973_ = lean_usize_add(v_i_1957_, v___x_1972_);
v___x_1974_ = lean_array_uset(v_bs_x27_1964_, v_i_1957_, v___x_1971_);
v_i_1957_ = v___x_1973_;
v_bs_1958_ = v___x_1974_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_1976_, lean_object* v_i_1977_, lean_object* v_bs_1978_){
_start:
{
size_t v_sz_boxed_1979_; size_t v_i_boxed_1980_; lean_object* v_res_1981_; 
v_sz_boxed_1979_ = lean_unbox_usize(v_sz_1976_);
lean_dec(v_sz_1976_);
v_i_boxed_1980_ = lean_unbox_usize(v_i_1977_);
lean_dec(v_i_1977_);
v_res_1981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_1979_, v_i_boxed_1980_, v_bs_1978_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_1985_, lean_object* v_method_1986_, lean_object* v___f_1987_, lean_object* v___f_1988_, lean_object* v___f_1989_, lean_object* v_x_1990_){
_start:
{
lean_object* v___y_1993_; lean_object* v___y_1994_; uint8_t v___y_1995_; lean_object* v_val_1996_; lean_object* v___y_2000_; uint8_t v___y_2001_; lean_object* v___y_2002_; lean_object* v_val_2003_; lean_object* v___y_2007_; lean_object* v___y_2008_; uint8_t v___y_2009_; lean_object* v_val_2010_; 
if (lean_obj_tag(v_x_1990_) == 0)
{
lean_object* v___x_2013_; 
lean_dec_ref(v___f_1989_);
lean_dec_ref(v___f_1988_);
lean_dec_ref(v___f_1987_);
lean_dec_ref(v_r_1985_);
v___x_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2013_, 0, v_x_1990_);
return v___x_2013_;
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2107_; 
v_a_2014_ = lean_ctor_get(v_x_1990_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_x_1990_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2016_ = v_x_1990_;
v_isShared_2017_ = v_isSharedCheck_2107_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v_x_1990_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2107_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___y_2019_; lean_object* v___y_2020_; uint16_t v_status_2034_; lean_object* v_headers_2035_; lean_object* v_body_2036_; lean_object* v_stream_2037_; lean_object* v___x_2038_; lean_object* v___y_2040_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v_status_2034_ = lean_ctor_get_uint16(v_r_1985_, sizeof(void*)*3);
v_headers_2035_ = lean_ctor_get(v_r_1985_, 0);
lean_inc_ref(v_headers_2035_);
v_body_2036_ = lean_ctor_get(v_r_1985_, 1);
lean_inc_ref(v_body_2036_);
v_stream_2037_ = lean_ctor_get(v_r_1985_, 2);
lean_inc(v_stream_2037_);
lean_dec_ref(v_r_1985_);
v___x_2038_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2099_ = lean_uint16_to_nat(v_status_2034_);
v___x_2100_ = lean_nat_to_int(v___x_2099_);
v___x_2101_ = lean_nat_abs(v___x_2100_);
v___x_2102_ = lean_cstr_to_nat("9007199254740991");
v___x_2103_ = lean_nat_dec_le(v___x_2101_, v___x_2102_);
lean_dec(v___x_2101_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; 
v___x_2104_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2100_);
v___y_2040_ = v___x_2104_;
goto v___jp_2039_;
}
else
{
double v___x_2105_; lean_object* v___x_2106_; 
v___x_2105_ = l_Float_ofInt(v___x_2100_);
lean_dec(v___x_2100_);
v___x_2106_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2106_, 0, v___x_2105_);
v___y_2040_ = v___x_2106_;
goto v___jp_2039_;
}
v___jp_2018_:
{
lean_object* v___f_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; 
v___f_2021_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2021_, 0, v___y_2020_);
lean_closure_set(v___f_2021_, 1, v___y_2019_);
v___x_2022_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2023_ = lean_unsigned_to_nat(0u);
v___x_2024_ = 0;
v___x_2025_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2014_, v___x_2022_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2028_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 0, v_a_2026_);
v___x_2028_ = v___x_2016_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2026_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
v___y_2007_ = v___f_2021_;
v___y_2008_ = v___x_2023_;
v___y_2009_ = v___x_2024_;
v_val_2010_ = v___x_2028_;
goto v___jp_2006_;
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; 
v_a_2030_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2025_, 1);
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 0);
lean_ctor_set(v___x_2016_, 0, v_a_2030_);
v___x_2032_ = v___x_2016_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
v___y_2007_ = v___f_2021_;
v___y_2008_ = v___x_2023_;
v___y_2009_ = v___x_2024_;
v_val_2010_ = v___x_2032_;
goto v___jp_2006_;
}
}
}
v___jp_2039_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; size_t v_sz_2043_; size_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2038_);
lean_ctor_set(v___x_2041_, 1, v___y_2040_);
v___x_2042_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2043_ = lean_array_size(v_headers_2035_);
v___x_2044_ = ((size_t)0ULL);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2043_, v___x_2044_, v_headers_2035_);
v___x_2046_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2042_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v___x_2048_ = lean_box(0);
v___x_2049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2047_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2041_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = l_Lasm_JS_obj(v___x_2050_);
if (lean_obj_tag(v_stream_2037_) == 0)
{
uint8_t v___x_2052_; 
lean_dec_ref(v___f_1989_);
lean_dec_ref(v___f_1988_);
lean_dec_ref(v___f_1987_);
v___x_2052_ = l_Lasm_Fetch_bodyless(v_method_1986_, v_status_2034_);
if (v___x_2052_ == 0)
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2053_, 0, v_body_2036_);
v___y_2019_ = v___x_2051_;
v___y_2020_ = v___x_2053_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2054_; 
lean_dec_ref(v_body_2036_);
v___x_2054_ = lean_box(1);
v___y_2019_ = v___x_2051_;
v___y_2020_ = v___x_2054_;
goto v___jp_2018_;
}
}
else
{
lean_object* v_val_2055_; uint8_t v___x_2056_; 
lean_dec_ref(v_body_2036_);
lean_del_object(v___x_2016_);
v_val_2055_ = lean_ctor_get(v_stream_2037_, 0);
lean_inc(v_val_2055_);
lean_dec_ref_known(v_stream_2037_, 1);
v___x_2056_ = l_Lasm_Fetch_bodyless(v_method_1986_, v_status_2034_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; lean_object* v___f_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2057_ = lean_box(v___x_2056_);
lean_inc(v_a_2014_);
v___f_2058_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2058_, 0, v___x_2051_);
lean_closure_set(v___f_2058_, 1, v___x_2057_);
lean_closure_set(v___f_2058_, 2, v_a_2014_);
lean_closure_set(v___f_2058_, 3, v___f_1987_);
lean_closure_set(v___f_2058_, 4, v___f_1988_);
lean_closure_set(v___f_2058_, 5, v___f_1989_);
lean_closure_set(v___f_2058_, 6, v_val_2055_);
v___x_2059_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2060_ = lean_unsigned_to_nat(0u);
v___x_2061_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2014_, v___x_2059_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2061_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2061_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set_tag(v___x_2064_, 1);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v___y_2000_ = v___f_2058_;
v___y_2001_ = v___x_2056_;
v___y_2002_ = v___x_2060_;
v_val_2003_ = v___x_2067_;
goto v___jp_1999_;
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
v_a_2070_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2061_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2061_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set_tag(v___x_2072_, 0);
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
v___y_2000_ = v___f_2058_;
v___y_2001_ = v___x_2056_;
v___y_2002_ = v___x_2060_;
v_val_2003_ = v___x_2075_;
goto v___jp_1999_;
}
}
}
}
else
{
lean_object* v___f_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; lean_object* v___x_2082_; 
lean_dec(v_val_2055_);
lean_dec_ref(v___f_1989_);
lean_dec_ref(v___f_1988_);
lean_dec_ref(v___f_1987_);
v___f_2078_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2078_, 0, v___x_2051_);
v___x_2079_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2080_ = lean_unsigned_to_nat(0u);
v___x_2081_ = 0;
v___x_2082_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2014_, v___x_2079_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2082_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2082_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
lean_ctor_set_tag(v___x_2085_, 1);
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
v___y_1993_ = v___x_2080_;
v___y_1994_ = v___f_2078_;
v___y_1995_ = v___x_2081_;
v_val_1996_ = v___x_2088_;
goto v___jp_1992_;
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
v_a_2091_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2082_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2082_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 0);
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
v___y_1993_ = v___x_2080_;
v___y_1994_ = v___f_2078_;
v___y_1995_ = v___x_2081_;
v_val_1996_ = v___x_2096_;
goto v___jp_1992_;
}
}
}
}
}
}
}
}
v___jp_1992_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_val_1996_);
v___x_1998_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_1993_, v___y_1995_, v___x_1997_, v___y_1994_);
return v___x_1998_;
}
v___jp_1999_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_val_2003_);
v___x_2005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2002_, v___y_2001_, v___x_2004_, v___y_2000_);
return v___x_2005_;
}
v___jp_2006_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2011_, 0, v_val_2010_);
v___x_2012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2008_, v___y_2009_, v___x_2011_, v___y_2007_);
return v___x_2012_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2108_, lean_object* v_method_2109_, lean_object* v___f_2110_, lean_object* v___f_2111_, lean_object* v___f_2112_, lean_object* v_x_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2108_, v_method_2109_, v___f_2110_, v___f_2111_, v___f_2112_, v_x_2113_);
lean_dec_ref(v_method_2109_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2117_, lean_object* v_r_2118_){
_start:
{
lean_object* v___f_2120_; lean_object* v___f_2121_; lean_object* v___x_2122_; uint8_t v___x_2123_; lean_object* v_val_2125_; lean_object* v___x_2128_; 
v___f_2120_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2121_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2121_, 0, v_r_2118_);
lean_closure_set(v___f_2121_, 1, v_method_2117_);
lean_closure_set(v___f_2121_, 2, v___f_2120_);
lean_closure_set(v___f_2121_, 3, v___f_2120_);
lean_closure_set(v___f_2121_, 4, v___f_2120_);
v___x_2122_ = lean_unsigned_to_nat(0u);
v___x_2123_ = 0;
v___x_2128_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2128_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2128_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
lean_ctor_set_tag(v___x_2131_, 1);
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
v_val_2125_ = v___x_2134_;
goto v___jp_2124_;
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
v_a_2137_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2128_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2128_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set_tag(v___x_2139_, 0);
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
v_val_2125_ = v___x_2142_;
goto v___jp_2124_;
}
}
}
v___jp_2124_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2126_, 0, v_val_2125_);
v___x_2127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2122_, v___x_2123_, v___x_2126_, v___f_2121_);
return v___x_2127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2145_, lean_object* v_r_2146_, lean_object* v_a_2147_){
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2145_, v_r_2146_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2150_ = lean_box(0);
v___x_2151_ = lean_st_mk_ref(v___x_2150_);
v___x_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2155_){
_start:
{
if (lean_obj_tag(v_x_2155_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2165_; 
v_a_2157_ = lean_ctor_get(v_x_2155_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_x_2155_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2159_ = v_x_2155_;
v_isShared_2160_ = v_isSharedCheck_2165_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v_x_2155_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2165_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2162_);
return v___x_2163_;
}
}
}
else
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2176_; 
v_a_2166_ = lean_ctor_get(v_x_2155_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v_x_2155_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2168_ = v_x_2155_;
v_isShared_2169_ = v_isSharedCheck_2176_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v_x_2155_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2176_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2173_; 
v___x_2170_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2171_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2171_, 0, v_a_2166_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v___x_2171_);
v___x_2173_ = v___x_2168_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2171_);
v___x_2173_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2177_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2180_, lean_object* v___x_2181_, lean_object* v___f_2182_, lean_object* v_x_2183_){
_start:
{
if (lean_obj_tag(v_x_2183_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2193_; 
lean_dec_ref(v___f_2182_);
lean_dec(v___x_2181_);
lean_dec_ref(v___y_2180_);
v_a_2185_ = lean_ctor_get(v_x_2183_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_x_2183_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2187_ = v_x_2183_;
v_isShared_2188_ = v_isSharedCheck_2193_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v_x_2183_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2193_;
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
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
return v___x_2191_;
}
}
}
else
{
lean_object* v_a_2194_; uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_a_2194_ = lean_ctor_get(v_x_2183_, 0);
lean_inc(v_a_2194_);
lean_dec_ref_known(v_x_2183_, 1);
v___x_2195_ = 0;
v___x_2196_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2180_, v_a_2194_);
v___x_2197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2181_, v___x_2195_, v___x_2196_, v___f_2182_);
return v___x_2197_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2198_, lean_object* v___x_2199_, lean_object* v___f_2200_, lean_object* v_x_2201_, lean_object* v___y_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2198_, v___x_2199_, v___f_2200_, v_x_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2204_, lean_object* v___x_2205_, lean_object* v___f_2206_, lean_object* v_req_2207_){
_start:
{
uint8_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = 0;
v___x_2210_ = l_Lasm_Fetch_respond(v_handler_2204_, v_req_2207_);
v___x_2211_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2205_, v___x_2209_, v___x_2210_, v___f_2206_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2212_, lean_object* v___x_2213_, lean_object* v___f_2214_, lean_object* v_req_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2212_, v___x_2213_, v___f_2214_, v_req_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2218_, lean_object* v_x_2219_){
_start:
{
if (lean_obj_tag(v_x_2219_) == 0)
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2229_; 
lean_dec_ref(v___f_2218_);
v_a_2221_ = lean_ctor_get(v_x_2219_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v_x_2219_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2223_ = v_x_2219_;
v_isShared_2224_ = v_isSharedCheck_2229_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v_x_2219_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2229_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2231_; 
v_a_2230_ = lean_ctor_get(v_x_2219_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v_x_2219_, 1);
v___x_2231_ = lean_apply_2(v___f_2218_, v_a_2230_, lean_box(0));
return v___x_2231_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2232_, lean_object* v_x_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2232_, v_x_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v_headers_2238_, lean_object* v___f_2239_, lean_object* v___x_2240_, uint8_t v___x_2241_, lean_object* v___f_2242_, lean_object* v_x_2243_){
_start:
{
if (lean_obj_tag(v_x_2243_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2253_; 
lean_dec_ref(v___f_2242_);
lean_dec(v___x_2240_);
lean_dec_ref(v___f_2239_);
lean_dec_ref(v_headers_2238_);
lean_dec_ref(v___y_2237_);
lean_dec_ref(v___y_2236_);
v_a_2245_ = lean_ctor_get(v_x_2243_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v_x_2243_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2247_ = v_x_2243_;
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v_x_2243_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2251_; 
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
return v___x_2251_;
}
}
}
else
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2264_; 
v_a_2254_ = lean_ctor_get(v_x_2243_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_x_2243_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2256_ = v_x_2243_;
v_isShared_2257_ = v_isSharedCheck_2264_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v_x_2243_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2264_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; lean_object* v___x_2260_; 
v___x_2258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2258_, 0, v___y_2236_);
lean_ctor_set(v___x_2258_, 1, v___y_2237_);
lean_ctor_set(v___x_2258_, 2, v_headers_2238_);
lean_ctor_set(v___x_2258_, 3, v_a_2254_);
lean_ctor_set(v___x_2258_, 4, v___f_2239_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v___x_2258_);
v___x_2260_ = v___x_2256_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2258_);
v___x_2260_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
v___x_2262_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2240_, v___x_2241_, v___x_2261_, v___f_2242_);
return v___x_2262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v_headers_2267_, lean_object* v___f_2268_, lean_object* v___x_2269_, lean_object* v___x_2270_, lean_object* v___f_2271_, lean_object* v_x_2272_, lean_object* v___y_2273_){
_start:
{
uint8_t v___x_7150__boxed_2274_; lean_object* v_res_2275_; 
v___x_7150__boxed_2274_ = lean_unbox(v___x_2270_);
v_res_2275_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2265_, v___y_2266_, v_headers_2267_, v___f_2268_, v___x_2269_, v___x_7150__boxed_2274_, v___f_2271_, v_x_2272_);
return v_res_2275_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2281_ = lean_string_utf8_byte_size(v___x_2280_);
return v___x_2281_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2282_ = lean_unsigned_to_nat(0u);
v___x_2283_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2284_ = lean_nat_dec_eq(v___x_2283_, v___x_2282_);
return v___x_2284_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2289_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2290_ = lean_unsigned_to_nat(46u);
v___x_2291_ = lean_unsigned_to_nat(193u);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2294_ = l_mkPanicMessageWithDecl(v___x_2293_, v___x_2292_, v___x_2291_, v___x_2290_, v___x_2289_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2296_, lean_object* v_d_2297_){
_start:
{
lean_object* v___y_2300_; lean_object* v___y_2301_; 
if (lean_obj_tag(v_d_2297_) == 6)
{
lean_object* v_b_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
v_b_2305_ = lean_ctor_get(v_d_2297_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_d_2297_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v_d_2297_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_b_2305_);
lean_dec(v_d_2297_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set_tag(v___x_2307_, 0);
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_b_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
else
{
lean_object* v___x_2313_; lean_object* v_received_2315_; 
v___x_2313_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2297_) == 9)
{
lean_object* v_value_2329_; lean_object* v_description_2330_; uint8_t v___x_2331_; 
v_value_2329_ = lean_ctor_get(v_d_2297_, 0);
v_description_2330_ = lean_ctor_get(v_d_2297_, 1);
v___x_2331_ = lean_string_dec_eq(v_description_2330_, v___x_2313_);
if (v___x_2331_ == 0)
{
goto v___jp_2327_;
}
else
{
uint32_t v___x_2332_; uint64_t v___x_2333_; lean_object* v___x_2334_; uint32_t v___x_2335_; lean_object* v___x_2336_; 
lean_inc_n(v_value_2329_, 2);
lean_dec_ref_known(v_d_2297_, 2);
v___x_2332_ = 206;
v___x_2333_ = 0ULL;
v___x_2334_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2334_, 0, v_value_2329_);
lean_ctor_set(v___x_2334_, 1, v___x_2313_);
v___x_2335_ = lasm_js_value_handle(v_value_2329_);
lean_dec(v_value_2329_);
v___x_2336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2332_, v___x_2333_, v___x_2334_, v___x_2335_);
lean_dec_ref_known(v___x_2334_, 2);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; uint8_t v___x_2338_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2338_ = lean_string_validate_utf8(v_a_2337_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec(v_a_2337_);
v___x_2339_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2340_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2339_);
v_received_2315_ = v___x_2340_;
goto v___jp_2314_;
}
else
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_string_from_utf8_unchecked(v_a_2337_);
v_received_2315_ = v___x_2341_;
goto v___jp_2314_;
}
}
else
{
lean_object* v___x_2342_; 
lean_dec_ref_known(v___x_2336_, 1);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2315_ = v___x_2342_;
goto v___jp_2314_;
}
}
}
else
{
goto v___jp_2327_;
}
v___jp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2317_ = lean_string_append(v___x_2316_, v_context_2296_);
v___x_2318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2319_ = lean_string_append(v___x_2317_, v___x_2318_);
v___x_2320_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2321_ = lean_string_append(v___x_2319_, v___x_2320_);
v___x_2322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2323_ = lean_string_append(v___x_2321_, v___x_2322_);
v___x_2324_ = lean_string_append(v___x_2323_, v_received_2315_);
lean_dec_ref(v_received_2315_);
v___x_2325_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; 
v___x_2326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2300_ = v___x_2324_;
v___y_2301_ = v___x_2326_;
goto v___jp_2299_;
}
else
{
v___y_2300_ = v___x_2324_;
v___y_2301_ = v___x_2313_;
goto v___jp_2299_;
}
}
v___jp_2327_:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lasm_JS_Data_describe(v_d_2297_);
v_received_2315_ = v___x_2328_;
goto v___jp_2314_;
}
}
v___jp_2299_:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2302_ = lean_string_append(v___y_2300_, v___y_2301_);
v___x_2303_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2343_, lean_object* v_d_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2343_, v_d_2344_);
lean_dec_ref(v_context_2343_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2347_, lean_object* v_bytes_2348_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lasm_JS_Wire_decode(v_bytes_2348_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2352_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_a_2351_);
lean_dec_ref_known(v___x_2350_, 1);
v___x_2352_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2347_, v_a_2351_);
return v___x_2352_;
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2360_; 
v_a_2353_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2355_ = v___x_2350_;
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2350_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2361_, lean_object* v_bytes_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2361_, v_bytes_2362_);
lean_dec_ref(v_bytes_2362_);
lean_dec_ref(v_context_2361_);
return v_res_2364_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2365_, uint64_t v_extra_2366_){
_start:
{
uint64_t v___x_2367_; uint64_t v___y_2369_; 
v___x_2367_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2365_ == 0)
{
uint64_t v___x_2372_; 
v___x_2372_ = 0ULL;
v___y_2369_ = v___x_2372_;
goto v___jp_2368_;
}
else
{
uint64_t v___x_2373_; 
v___x_2373_ = 2ULL;
v___y_2369_ = v___x_2373_;
goto v___jp_2368_;
}
v___jp_2368_:
{
uint64_t v___x_2370_; uint64_t v___x_2371_; 
v___x_2370_ = lean_uint64_lor(v___x_2367_, v___y_2369_);
v___x_2371_ = lean_uint64_lor(v___x_2370_, v_extra_2366_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2374_, lean_object* v_extra_2375_){
_start:
{
uint8_t v_await_boxed_2376_; uint64_t v_extra_boxed_2377_; uint64_t v_res_2378_; lean_object* v_r_2379_; 
v_await_boxed_2376_ = lean_unbox(v_await_2374_);
v_extra_boxed_2377_ = lean_unbox_uint64(v_extra_2375_);
lean_dec_ref(v_extra_2375_);
v_res_2378_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2376_, v_extra_boxed_2377_);
v_r_2379_ = lean_box_uint64(v_res_2378_);
return v_r_2379_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2380_; uint8_t v___x_2381_; uint64_t v___x_2382_; 
v___x_2380_ = 4ULL;
v___x_2381_ = 0;
v___x_2382_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2381_, v___x_2380_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2383_, lean_object* v_args_2384_){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; uint64_t v___x_2389_; lean_object* v___x_2390_; 
v___x_2386_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2387_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2387_, 0, v_c_2383_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
v___x_2388_ = lean_box(0);
v___x_2389_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2390_ = l_Lasm_JS_Value_invokeRaw(v___x_2387_, v___x_2388_, v_args_2384_, v___x_2389_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
v___x_2392_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2393_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2392_, v_a_2391_);
lean_dec(v_a_2391_);
return v___x_2393_;
}
else
{
return v___x_2390_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2394_, lean_object* v_args_2395_, lean_object* v_a_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2394_, v_args_2395_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2398_, uint8_t v___x_2399_, lean_object* v___f_2400_, lean_object* v_a_2401_, lean_object* v_x_2402_){
_start:
{
lean_object* v_val_2405_; 
if (lean_obj_tag(v_x_2402_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v_a_2401_);
lean_dec_ref(v___f_2400_);
lean_dec(v___x_2398_);
v_a_2408_ = lean_ctor_get(v_x_2402_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_x_2402_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2410_ = v_x_2402_;
v_isShared_2411_ = v_isSharedCheck_2416_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v_x_2402_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2416_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; 
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
return v___x_2414_;
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2435_; 
v_a_2417_ = lean_ctor_get(v_x_2402_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v_x_2402_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2419_ = v_x_2402_;
v_isShared_2420_ = v_isSharedCheck_2435_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v_x_2402_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2435_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2421_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2422_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_a_2417_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_unsigned_to_nat(1u);
v___x_2424_ = lean_mk_empty_array_with_capacity(v___x_2423_);
v___x_2425_ = lean_array_push(v___x_2424_, v___x_2422_);
v___x_2426_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2401_, v___x_2425_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2429_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2426_, 1);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v_a_2427_);
v___x_2429_ = v___x_2419_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2427_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
v_val_2405_ = v___x_2429_;
goto v___jp_2404_;
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2426_, 1);
if (v_isShared_2420_ == 0)
{
lean_ctor_set_tag(v___x_2419_, 0);
lean_ctor_set(v___x_2419_, 0, v_a_2431_);
v___x_2433_ = v___x_2419_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
v_val_2405_ = v___x_2433_;
goto v___jp_2404_;
}
}
}
}
v___jp_2404_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_val_2405_);
v___x_2407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2398_, v___x_2399_, v___x_2406_, v___f_2400_);
return v___x_2407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2436_, lean_object* v___x_2437_, lean_object* v___f_2438_, lean_object* v_a_2439_, lean_object* v_x_2440_, lean_object* v___y_2441_){
_start:
{
uint8_t v___x_7436__boxed_2442_; lean_object* v_res_2443_; 
v___x_7436__boxed_2442_ = lean_unbox(v___x_2437_);
v_res_2443_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2436_, v___x_7436__boxed_2442_, v___f_2438_, v_a_2439_, v_x_2440_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v_headers_2446_, lean_object* v___x_2447_, lean_object* v___x_2448_, lean_object* v___f_2449_, lean_object* v_x_2450_){
_start:
{
if (lean_obj_tag(v_x_2450_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2460_; 
lean_dec_ref(v___f_2449_);
lean_dec(v___x_2448_);
lean_dec_ref(v___x_2447_);
lean_dec_ref(v_headers_2446_);
lean_dec_ref(v___y_2445_);
lean_dec_ref(v___y_2444_);
v_a_2452_ = lean_ctor_get(v_x_2450_, 0);
v_isSharedCheck_2460_ = !lean_is_exclusive(v_x_2450_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2454_ = v_x_2450_;
v_isShared_2455_ = v_isSharedCheck_2460_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v_x_2450_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2460_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
return v___x_2458_;
}
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2472_; 
v_a_2461_ = lean_ctor_get(v_x_2450_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_x_2450_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2463_ = v_x_2450_;
v_isShared_2464_ = v_isSharedCheck_2472_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v_x_2450_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2472_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; uint8_t v___x_2466_; lean_object* v___x_2468_; 
v___x_2465_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2465_, 0, v___y_2444_);
lean_ctor_set(v___x_2465_, 1, v___y_2445_);
lean_ctor_set(v___x_2465_, 2, v_headers_2446_);
lean_ctor_set(v___x_2465_, 3, v___x_2447_);
lean_ctor_set(v___x_2465_, 4, v_a_2461_);
v___x_2466_ = 0;
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v___x_2465_);
v___x_2468_ = v___x_2463_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2465_);
v___x_2468_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
v___x_2470_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2448_, v___x_2466_, v___x_2469_, v___f_2449_);
return v___x_2470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v_headers_2475_, lean_object* v___x_2476_, lean_object* v___x_2477_, lean_object* v___f_2478_, lean_object* v_x_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_2473_, v___y_2474_, v_headers_2475_, v___x_2476_, v___x_2477_, v___f_2478_, v_x_2479_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_2482_, lean_object* v_x_2483_){
_start:
{
if (lean_obj_tag(v_x_2483_) == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v___f_2482_);
v_a_2485_ = lean_ctor_get(v_x_2483_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_x_2483_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2487_ = v_x_2483_;
v_isShared_2488_ = v_isSharedCheck_2493_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v_x_2483_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2493_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
return v___x_2491_;
}
}
}
else
{
lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2505_; 
v_isSharedCheck_2505_ = !lean_is_exclusive(v_x_2483_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; 
v_unused_2506_ = lean_ctor_get(v_x_2483_, 0);
lean_dec(v_unused_2506_);
v___x_2495_ = v_x_2483_;
v_isShared_2496_ = v_isSharedCheck_2505_;
goto v_resetjp_2494_;
}
else
{
lean_dec(v_x_2483_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2505_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v___x_2497_; uint8_t v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2501_; 
v___x_2497_ = lean_unsigned_to_nat(0u);
v___x_2498_ = 0;
v___x_2499_ = lean_io_promise_new();
if (v_isShared_2496_ == 0)
{
lean_ctor_set(v___x_2495_, 0, v___x_2499_);
v___x_2501_ = v___x_2495_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2499_);
v___x_2501_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
v___x_2503_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2497_, v___x_2498_, v___x_2502_, v___f_2482_);
return v___x_2503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2507_, lean_object* v_x_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_2507_, v_x_2508_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_2511_, lean_object* v_x_2512_){
_start:
{
if (lean_obj_tag(v_x_2512_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2522_; 
lean_dec_ref(v___f_2511_);
v_a_2514_ = lean_ctor_get(v_x_2512_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v_x_2512_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2516_ = v_x_2512_;
v_isShared_2517_ = v_isSharedCheck_2522_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v_x_2512_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2522_;
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
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
return v___x_2520_;
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2524_; 
v_a_2523_ = lean_ctor_get(v_x_2512_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v_x_2512_, 1);
v___x_2524_ = lean_apply_2(v___f_2511_, v_a_2523_, lean_box(0));
return v___x_2524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_2525_, v_x_2526_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_2529_, lean_object* v_bytes_2530_){
_start:
{
lean_object* v___x_2532_; uint8_t v___x_2533_; lean_object* v_val_2535_; lean_object* v___x_2538_; 
v___x_2532_ = lean_unsigned_to_nat(0u);
v___x_2533_ = 0;
v___x_2538_ = l_Lasm_JS_Wire_decode(v_bytes_2530_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
lean_ctor_set_tag(v___x_2541_, 1);
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
v_val_2535_ = v___x_2544_;
goto v___jp_2534_;
}
}
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_a_2547_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2538_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2538_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set_tag(v___x_2549_, 0);
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
v_val_2535_ = v___x_2552_;
goto v___jp_2534_;
}
}
}
v___jp_2534_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v_val_2535_);
v___x_2537_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2532_, v___x_2533_, v___x_2536_, v___f_2529_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_2555_, lean_object* v_bytes_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_2555_, v_bytes_2556_);
lean_dec_ref(v_bytes_2556_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_2559_, lean_object* v_failurePrefix_2560_, lean_object* v___f_2561_, lean_object* v___f_2562_, uint32_t v_op_2563_, uint64_t v_flags_2564_, lean_object* v___f_2565_, lean_object* v_x_2566_){
_start:
{
if (lean_obj_tag(v_x_2566_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2576_; 
lean_dec_ref(v___f_2565_);
lean_dec_ref(v___f_2562_);
lean_dec_ref(v___f_2561_);
v_a_2568_ = lean_ctor_get(v_x_2566_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_x_2566_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2570_ = v_x_2566_;
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v_x_2566_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_object* v___x_2574_; 
v___x_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
return v___x_2574_;
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2618_; 
v_a_2577_ = lean_ctor_get(v_x_2566_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v_x_2566_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2579_ = v_x_2566_;
v_isShared_2580_ = v_isSharedCheck_2618_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v_x_2566_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2618_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
uint32_t v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v___x_2581_ = 0;
v___x_2582_ = l_Lasm_JS_Wire_encode(v_payload_2559_);
v___x_2583_ = lean_string_utf8_byte_size(v_failurePrefix_2560_);
v___x_2584_ = lean_unsigned_to_nat(0u);
v___x_2585_ = lean_nat_dec_eq(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___f_2586_; lean_object* v_val_2588_; lean_object* v___x_2593_; 
lean_dec_ref(v___f_2565_);
lean_inc(v_a_2577_);
v___f_2586_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2586_, 0, v_a_2577_);
v___x_2593_ = lasm_js_call_into(v_a_2577_, v_op_2563_, v___x_2581_, v_flags_2564_, v___x_2582_, v_payload_2559_);
lean_dec_ref(v___x_2582_);
lean_dec(v_a_2577_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2596_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v_a_2594_);
v___x_2596_ = v___x_2579_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
v_val_2588_ = v___x_2596_;
goto v___jp_2587_;
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; 
v_a_2598_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2593_, 1);
if (v_isShared_2580_ == 0)
{
lean_ctor_set_tag(v___x_2579_, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2598_);
v___x_2600_ = v___x_2579_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
v_val_2588_ = v___x_2600_;
goto v___jp_2587_;
}
}
v___jp_2587_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_val_2588_);
v___x_2590_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2585_, v___x_2589_, v___f_2586_);
v___x_2591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2585_, v___x_2590_, v___f_2561_);
v___x_2592_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2585_, v___x_2591_, v___f_2562_);
return v___x_2592_;
}
}
else
{
lean_object* v___f_2602_; uint8_t v___x_2603_; lean_object* v_val_2605_; lean_object* v___x_2609_; 
lean_dec_ref(v___f_2562_);
lean_dec_ref(v___f_2561_);
lean_inc(v_a_2577_);
v___f_2602_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2602_, 0, v_a_2577_);
v___x_2603_ = 0;
v___x_2609_ = lasm_js_call_into(v_a_2577_, v_op_2563_, v___x_2581_, v_flags_2564_, v___x_2582_, v_payload_2559_);
lean_dec_ref(v___x_2582_);
lean_dec(v_a_2577_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; lean_object* v___x_2612_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2609_, 1);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v_a_2610_);
v___x_2612_ = v___x_2579_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
v_val_2605_ = v___x_2612_;
goto v___jp_2604_;
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; 
v_a_2614_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2614_);
lean_dec_ref_known(v___x_2609_, 1);
if (v_isShared_2580_ == 0)
{
lean_ctor_set_tag(v___x_2579_, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2614_);
v___x_2616_ = v___x_2579_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
v_val_2605_ = v___x_2616_;
goto v___jp_2604_;
}
}
v___jp_2604_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2606_, 0, v_val_2605_);
v___x_2607_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2603_, v___x_2606_, v___f_2602_);
v___x_2608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2603_, v___x_2607_, v___f_2565_);
return v___x_2608_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_2619_, lean_object* v_failurePrefix_2620_, lean_object* v___f_2621_, lean_object* v___f_2622_, lean_object* v_op_2623_, lean_object* v_flags_2624_, lean_object* v___f_2625_, lean_object* v_x_2626_, lean_object* v___y_2627_){
_start:
{
uint32_t v_op_boxed_2628_; uint64_t v_flags_boxed_2629_; lean_object* v_res_2630_; 
v_op_boxed_2628_ = lean_unbox_uint32(v_op_2623_);
lean_dec(v_op_2623_);
v_flags_boxed_2629_ = lean_unbox_uint64(v_flags_2624_);
lean_dec_ref(v_flags_2624_);
v_res_2630_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_2619_, v_failurePrefix_2620_, v___f_2621_, v___f_2622_, v_op_boxed_2628_, v_flags_boxed_2629_, v___f_2625_, v_x_2626_);
lean_dec_ref(v_failurePrefix_2620_);
lean_dec(v_payload_2619_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_2631_, lean_object* v_x_2632_){
_start:
{
lean_object* v_val_2635_; 
if (lean_obj_tag(v_x_2632_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2645_; 
v_a_2637_ = lean_ctor_get(v_x_2632_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_x_2632_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2639_ = v_x_2632_;
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v_x_2632_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
lean_object* v___x_2643_; 
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2642_);
return v___x_2643_;
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2659_; 
v_a_2646_ = lean_ctor_get(v_x_2632_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v_x_2632_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2648_ = v_x_2632_;
v_isShared_2649_ = v_isSharedCheck_2659_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v_x_2632_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2659_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2631_, v_a_2646_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2653_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2650_, 1);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 0, v_a_2651_);
v___x_2653_ = v___x_2648_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
v_val_2635_ = v___x_2653_;
goto v___jp_2634_;
}
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2650_, 1);
if (v_isShared_2649_ == 0)
{
lean_ctor_set_tag(v___x_2648_, 0);
lean_ctor_set(v___x_2648_, 0, v_a_2655_);
v___x_2657_ = v___x_2648_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2655_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
v_val_2635_ = v___x_2657_;
goto v___jp_2634_;
}
}
}
}
v___jp_2634_:
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2636_, 0, v_val_2635_);
return v___x_2636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_2660_, lean_object* v_x_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_2660_, v_x_2661_);
lean_dec_ref(v_context_2660_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_2664_, uint32_t v_op_2665_, uint64_t v_flags_2666_, lean_object* v_payload_2667_, lean_object* v_failurePrefix_2668_){
_start:
{
lean_object* v___f_2670_; lean_object* v___f_2671_; lean_object* v___f_2672_; lean_object* v___f_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___f_2676_; lean_object* v___f_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; lean_object* v_val_2681_; lean_object* v___x_2684_; 
lean_inc_ref(v_failurePrefix_2668_);
v___f_2670_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2670_, 0, v_failurePrefix_2668_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2671_, 0, v_context_2664_);
v___f_2672_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2672_, 0, v___f_2671_);
v___f_2673_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2673_, 0, v___f_2672_);
v___x_2674_ = lean_box_uint32(v_op_2665_);
v___x_2675_ = lean_box_uint64(v_flags_2666_);
lean_inc_ref(v___f_2673_);
v___f_2676_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2676_, 0, v_payload_2667_);
lean_closure_set(v___f_2676_, 1, v_failurePrefix_2668_);
lean_closure_set(v___f_2676_, 2, v___f_2670_);
lean_closure_set(v___f_2676_, 3, v___f_2673_);
lean_closure_set(v___f_2676_, 4, v___x_2674_);
lean_closure_set(v___f_2676_, 5, v___x_2675_);
lean_closure_set(v___f_2676_, 6, v___f_2673_);
v___f_2677_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2677_, 0, v___f_2676_);
v___x_2678_ = lean_unsigned_to_nat(0u);
v___x_2679_ = 0;
v___x_2684_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2692_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2687_ = v___x_2684_;
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2684_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
lean_ctor_set_tag(v___x_2687_, 1);
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
v_val_2681_ = v___x_2690_;
goto v___jp_2680_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2700_; 
v_a_2693_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2695_ = v___x_2684_;
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v___x_2684_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2698_; 
if (v_isShared_2696_ == 0)
{
lean_ctor_set_tag(v___x_2695_, 0);
v___x_2698_ = v___x_2695_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_a_2693_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
v_val_2681_ = v___x_2698_;
goto v___jp_2680_;
}
}
}
v___jp_2680_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2682_, 0, v_val_2681_);
v___x_2683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2678_, v___x_2679_, v___x_2682_, v___f_2677_);
return v___x_2683_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_2701_, lean_object* v_op_2702_, lean_object* v_flags_2703_, lean_object* v_payload_2704_, lean_object* v_failurePrefix_2705_, lean_object* v_a_2706_){
_start:
{
uint32_t v_op_boxed_2707_; uint64_t v_flags_boxed_2708_; lean_object* v_res_2709_; 
v_op_boxed_2707_ = lean_unbox_uint32(v_op_2702_);
lean_dec(v_op_2702_);
v_flags_boxed_2708_ = lean_unbox_uint64(v_flags_2703_);
lean_dec_ref(v_flags_2703_);
v_res_2709_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_2701_, v_op_boxed_2707_, v_flags_boxed_2708_, v_payload_2704_, v_failurePrefix_2705_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_2710_, lean_object* v_name_2711_, lean_object* v_args_2712_){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; uint32_t v___x_2719_; uint64_t v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2714_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_o_2710_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
lean_inc_ref(v_name_2711_);
v___x_2716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_name_2711_);
v___x_2717_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2718_ = lean_string_append(v___x_2717_, v_name_2711_);
lean_dec_ref(v_name_2711_);
v___x_2719_ = 205;
v___x_2720_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2721_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2721_, 0, v_args_2712_);
v___x_2722_ = lean_unsigned_to_nat(3u);
v___x_2723_ = lean_mk_empty_array_with_capacity(v___x_2722_);
v___x_2724_ = lean_array_push(v___x_2723_, v___x_2715_);
v___x_2725_ = lean_array_push(v___x_2724_, v___x_2716_);
v___x_2726_ = lean_array_push(v___x_2725_, v___x_2721_);
v___x_2727_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
v___x_2728_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_2718_, v___x_2719_, v___x_2720_, v___x_2727_, v___x_2714_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_2729_, lean_object* v_name_2730_, lean_object* v_args_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_2729_, v_name_2730_, v_args_2731_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v_options_2738_, lean_object* v___f_2739_, lean_object* v___f_2740_, lean_object* v_a_2741_, lean_object* v_value_2742_, lean_object* v_a_2743_, lean_object* v___x_2744_, lean_object* v___f_2745_, lean_object* v___f_2746_, lean_object* v_headers_2747_){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___f_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; uint8_t v___x_2761_; 
v___x_2749_ = lean_mk_empty_array_with_capacity(v___x_2735_);
v___x_2750_ = l_ByteArray_empty;
v___f_2751_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_2749_);
lean_inc_ref(v___y_2737_);
lean_inc_ref(v___y_2736_);
v___x_2752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2752_, 0, v___y_2736_);
lean_ctor_set(v___x_2752_, 1, v___y_2737_);
lean_ctor_set(v___x_2752_, 2, v___x_2749_);
lean_ctor_set(v___x_2752_, 3, v___x_2750_);
lean_ctor_set(v___x_2752_, 4, v___f_2751_);
v___x_2753_ = l_Lasm_Fetch_Request_path(v___x_2752_);
v___x_2754_ = lean_apply_1(v_options_2738_, v___x_2753_);
v___x_2761_ = lean_unbox(v___x_2754_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; uint8_t v___x_2763_; 
lean_dec_ref(v___f_2746_);
lean_dec_ref(v___f_2745_);
v___x_2762_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_2763_ = lean_string_dec_eq(v___y_2736_, v___x_2762_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; uint8_t v___x_2765_; 
v___x_2764_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_2765_ = lean_string_dec_eq(v___y_2736_, v___x_2764_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; lean_object* v___f_2767_; lean_object* v___x_2768_; lean_object* v___f_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_dec_ref(v___f_2739_);
v___x_2766_ = lean_box(v___x_2765_);
lean_inc_n(v___x_2735_, 2);
v___f_2767_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_2767_, 0, v___y_2736_);
lean_closure_set(v___f_2767_, 1, v___y_2737_);
lean_closure_set(v___f_2767_, 2, v_headers_2747_);
lean_closure_set(v___f_2767_, 3, v___f_2751_);
lean_closure_set(v___f_2767_, 4, v___x_2735_);
lean_closure_set(v___f_2767_, 5, v___x_2766_);
lean_closure_set(v___f_2767_, 6, v___f_2740_);
v___x_2768_ = lean_box(v___x_2765_);
v___f_2769_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2769_, 0, v___x_2735_);
lean_closure_set(v___f_2769_, 1, v___x_2768_);
lean_closure_set(v___f_2769_, 2, v___f_2767_);
lean_closure_set(v___f_2769_, 3, v_a_2741_);
v___x_2770_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_2771_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_2742_, v___x_2770_, v___x_2749_);
v___x_2772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2735_, v___x_2765_, v___x_2771_, v___f_2769_);
return v___x_2772_;
}
else
{
lean_dec_ref(v___x_2749_);
lean_dec(v_value_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v___f_2740_);
goto v___jp_2755_;
}
}
else
{
lean_dec_ref(v___x_2749_);
lean_dec(v_value_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v___f_2740_);
goto v___jp_2755_;
}
}
else
{
lean_object* v___x_2773_; 
lean_dec_ref(v___x_2749_);
lean_dec(v_value_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v___f_2740_);
lean_dec_ref(v___f_2739_);
v___x_2773_ = l_Lasm_JS_Data_field(v_a_2743_, v___x_2744_);
if (lean_obj_tag(v___x_2773_) == 9)
{
lean_object* v_value_2774_; lean_object* v___f_2775_; uint8_t v___x_2776_; lean_object* v_val_2778_; lean_object* v___x_2781_; 
lean_dec_ref(v___f_2746_);
v_value_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_value_2774_);
lean_dec_ref_known(v___x_2773_, 2);
lean_inc(v___x_2735_);
v___f_2775_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2775_, 0, v___y_2736_);
lean_closure_set(v___f_2775_, 1, v___y_2737_);
lean_closure_set(v___f_2775_, 2, v_headers_2747_);
lean_closure_set(v___f_2775_, 3, v___x_2750_);
lean_closure_set(v___f_2775_, 4, v___x_2735_);
lean_closure_set(v___f_2775_, 5, v___f_2745_);
v___x_2776_ = 0;
v___x_2781_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_2774_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set_tag(v___x_2784_, 1);
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
v_val_2778_ = v___x_2787_;
goto v___jp_2777_;
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
v_a_2790_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2781_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2781_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
lean_ctor_set_tag(v___x_2792_, 0);
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
v_val_2778_ = v___x_2795_;
goto v___jp_2777_;
}
}
}
v___jp_2777_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2779_, 0, v_val_2778_);
v___x_2780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2735_, v___x_2776_, v___x_2779_, v___f_2775_);
return v___x_2780_;
}
}
else
{
lean_object* v___x_2798_; uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
lean_dec(v___x_2773_);
lean_dec_ref(v___f_2745_);
v___x_2798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2798_, 0, v___y_2736_);
lean_ctor_set(v___x_2798_, 1, v___y_2737_);
lean_ctor_set(v___x_2798_, 2, v_headers_2747_);
lean_ctor_set(v___x_2798_, 3, v___x_2750_);
lean_ctor_set(v___x_2798_, 4, v___f_2751_);
v___x_2799_ = 0;
v___x_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2798_);
v___x_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
v___x_2802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2735_, v___x_2799_, v___x_2801_, v___f_2746_);
return v___x_2802_;
}
}
v___jp_2755_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; 
v___x_2756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2756_, 0, v___y_2736_);
lean_ctor_set(v___x_2756_, 1, v___y_2737_);
lean_ctor_set(v___x_2756_, 2, v_headers_2747_);
lean_ctor_set(v___x_2756_, 3, v___x_2750_);
lean_ctor_set(v___x_2756_, 4, v___f_2751_);
v___x_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
v___x_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
v___x_2759_ = lean_unbox(v___x_2754_);
v___x_2760_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2735_, v___x_2759_, v___x_2758_, v___f_2739_);
return v___x_2760_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v_options_2806_, lean_object* v___f_2807_, lean_object* v___f_2808_, lean_object* v_a_2809_, lean_object* v_value_2810_, lean_object* v_a_2811_, lean_object* v___x_2812_, lean_object* v___f_2813_, lean_object* v___f_2814_, lean_object* v_headers_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_2803_, v___y_2804_, v___y_2805_, v_options_2806_, v___f_2807_, v___f_2808_, v_a_2809_, v_value_2810_, v_a_2811_, v___x_2812_, v___f_2813_, v___f_2814_, v_headers_2815_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2811_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_2818_, lean_object* v_x_2819_){
_start:
{
if (lean_obj_tag(v_x_2819_) == 0)
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2829_; 
lean_dec_ref(v___f_2818_);
v_a_2821_ = lean_ctor_get(v_x_2819_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_x_2819_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2823_ = v_x_2819_;
v_isShared_2824_ = v_isSharedCheck_2829_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v_x_2819_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2829_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; 
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2831_; 
v_a_2830_ = lean_ctor_get(v_x_2819_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v_x_2819_, 1);
v___x_2831_ = lean_apply_2(v___f_2818_, v_a_2830_, lean_box(0));
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_2832_, lean_object* v_x_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_2832_, v_x_2833_);
return v_res_2835_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_2836_, uint64_t v_extra_2837_){
_start:
{
uint64_t v___x_2838_; uint64_t v___y_2840_; 
v___x_2838_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2836_ == 0)
{
uint64_t v___x_2843_; 
v___x_2843_ = 0ULL;
v___y_2840_ = v___x_2843_;
goto v___jp_2839_;
}
else
{
uint64_t v___x_2844_; 
v___x_2844_ = 2ULL;
v___y_2840_ = v___x_2844_;
goto v___jp_2839_;
}
v___jp_2839_:
{
uint64_t v___x_2841_; uint64_t v___x_2842_; 
v___x_2841_ = lean_uint64_lor(v___x_2838_, v___y_2840_);
v___x_2842_ = lean_uint64_lor(v___x_2841_, v_extra_2837_);
return v___x_2842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_2845_, lean_object* v_extra_2846_){
_start:
{
uint8_t v_await_boxed_2847_; uint64_t v_extra_boxed_2848_; uint64_t v_res_2849_; lean_object* v_r_2850_; 
v_await_boxed_2847_ = lean_unbox(v_await_2845_);
v_extra_boxed_2848_ = lean_unbox_uint64(v_extra_2846_);
lean_dec_ref(v_extra_2846_);
v_res_2849_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_2847_, v_extra_boxed_2848_);
v_r_2850_ = lean_box_uint64(v_res_2849_);
return v_r_2850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_2856_, size_t v_i_2857_, lean_object* v_bs_2858_){
_start:
{
uint8_t v___x_2861_; 
v___x_2861_ = lean_usize_dec_lt(v_i_2857_, v_sz_2856_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; 
v___x_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2862_, 0, v_bs_2858_);
return v___x_2862_;
}
else
{
lean_object* v_v_2863_; 
v_v_2863_ = lean_array_uget_borrowed(v_bs_2858_, v_i_2857_);
if (lean_obj_tag(v_v_2863_) == 7)
{
lean_object* v_items_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; uint8_t v___x_2867_; 
v_items_2864_ = lean_ctor_get(v_v_2863_, 0);
v___x_2865_ = lean_array_get_size(v_items_2864_);
v___x_2866_ = lean_unsigned_to_nat(2u);
v___x_2867_ = lean_nat_dec_eq(v___x_2865_, v___x_2866_);
if (v___x_2867_ == 0)
{
lean_dec_ref(v_bs_2858_);
goto v___jp_2859_;
}
else
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_unsigned_to_nat(0u);
v___x_2869_ = lean_array_fget_borrowed(v_items_2864_, v___x_2868_);
if (lean_obj_tag(v___x_2869_) == 4)
{
lean_object* v_s_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v_s_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc_ref(v_s_2870_);
v___x_2871_ = lean_unsigned_to_nat(1u);
v___x_2872_ = lean_array_fget_borrowed(v_items_2864_, v___x_2871_);
if (lean_obj_tag(v___x_2872_) == 4)
{
lean_object* v_s_2873_; lean_object* v_bs_x27_2874_; lean_object* v___x_2875_; size_t v___x_2876_; size_t v___x_2877_; lean_object* v___x_2878_; 
v_s_2873_ = lean_ctor_get(v___x_2872_, 0);
lean_inc_ref(v_s_2873_);
v_bs_x27_2874_ = lean_array_uset(v_bs_2858_, v_i_2857_, v___x_2868_);
v___x_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2875_, 0, v_s_2870_);
lean_ctor_set(v___x_2875_, 1, v_s_2873_);
v___x_2876_ = ((size_t)1ULL);
v___x_2877_ = lean_usize_add(v_i_2857_, v___x_2876_);
v___x_2878_ = lean_array_uset(v_bs_x27_2874_, v_i_2857_, v___x_2875_);
v_i_2857_ = v___x_2877_;
v_bs_2858_ = v___x_2878_;
goto _start;
}
else
{
lean_object* v___x_2880_; 
lean_dec_ref(v_s_2870_);
lean_dec_ref(v_bs_2858_);
v___x_2880_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_2880_;
}
}
else
{
lean_object* v___x_2881_; 
lean_dec_ref(v_bs_2858_);
v___x_2881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_2881_;
}
}
}
else
{
lean_dec_ref(v_bs_2858_);
goto v___jp_2859_;
}
}
v___jp_2859_:
{
lean_object* v___x_2860_; 
v___x_2860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_2860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_2882_, lean_object* v_i_2883_, lean_object* v_bs_2884_){
_start:
{
size_t v_sz_boxed_2885_; size_t v_i_boxed_2886_; lean_object* v_res_2887_; 
v_sz_boxed_2885_ = lean_unbox_usize(v_sz_2882_);
lean_dec(v_sz_2882_);
v_i_boxed_2886_ = lean_unbox_usize(v_i_2883_);
lean_dec(v_i_2883_);
v_res_2887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_2885_, v_i_boxed_2886_, v_bs_2884_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_2892_, lean_object* v_d_2893_){
_start:
{
lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2902_; lean_object* v_received_2903_; lean_object* v___y_2922_; lean_object* v_a_2925_; 
if (lean_obj_tag(v_d_2893_) == 7)
{
lean_object* v_items_2949_; size_t v_sz_2950_; size_t v___x_2951_; lean_object* v___x_2952_; 
v_items_2949_ = lean_ctor_get(v_d_2893_, 0);
v_sz_2950_ = lean_array_size(v_items_2949_);
v___x_2951_ = ((size_t)0ULL);
lean_inc_ref(v_items_2949_);
v___x_2952_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_2950_, v___x_2951_, v_items_2949_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2952_, 1);
v___x_2954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_2955_ = lean_string_utf8_byte_size(v_a_2953_);
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = lean_nat_dec_eq(v___x_2955_, v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2958_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_2959_ = lean_string_append(v___x_2958_, v_a_2953_);
lean_dec(v_a_2953_);
v___x_2960_ = lean_string_append(v___x_2954_, v___x_2959_);
lean_dec_ref(v___x_2959_);
v_a_2925_ = v___x_2960_;
goto v___jp_2924_;
}
else
{
lean_dec(v_a_2953_);
v_a_2925_ = v___x_2954_;
goto v___jp_2924_;
}
}
else
{
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2961_; 
v_a_2961_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2952_, 1);
v_a_2925_ = v_a_2961_;
goto v___jp_2924_;
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref_known(v_d_2893_, 1);
v_a_2962_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2952_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2952_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
lean_ctor_set_tag(v___x_2964_, 0);
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
}
else
{
lean_object* v___x_2970_; 
v___x_2970_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_2925_ = v___x_2970_;
goto v___jp_2924_;
}
v___jp_2895_:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2898_ = lean_string_append(v___y_2896_, v___y_2897_);
lean_dec_ref(v___y_2897_);
v___x_2899_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2898_);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
return v___x_2900_;
}
v___jp_2901_:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2904_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2905_ = lean_string_append(v___x_2904_, v_context_2892_);
v___x_2906_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2907_ = lean_string_append(v___x_2905_, v___x_2906_);
v___x_2908_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_2909_ = lean_string_append(v___x_2907_, v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2911_ = lean_string_append(v___x_2909_, v___x_2910_);
v___x_2912_ = lean_string_append(v___x_2911_, v_received_2903_);
lean_dec_ref(v_received_2903_);
v___x_2913_ = lean_string_utf8_byte_size(v___y_2902_);
v___x_2914_ = lean_unsigned_to_nat(0u);
v___x_2915_ = lean_nat_dec_eq(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_2917_ = lean_string_append(v___x_2916_, v___y_2902_);
lean_dec_ref(v___y_2902_);
v___x_2918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_2919_ = lean_string_append(v___x_2917_, v___x_2918_);
v___y_2896_ = v___x_2912_;
v___y_2897_ = v___x_2919_;
goto v___jp_2895_;
}
else
{
lean_object* v___x_2920_; 
lean_dec_ref(v___y_2902_);
v___x_2920_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_2896_ = v___x_2912_;
v___y_2897_ = v___x_2920_;
goto v___jp_2895_;
}
}
v___jp_2921_:
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lasm_JS_Data_describe(v_d_2893_);
v___y_2902_ = v___y_2922_;
v_received_2903_ = v___x_2923_;
goto v___jp_2901_;
}
v___jp_2924_:
{
if (lean_obj_tag(v_d_2893_) == 9)
{
lean_object* v_value_2926_; lean_object* v_description_2927_; lean_object* v___x_2928_; uint8_t v___x_2929_; 
v_value_2926_ = lean_ctor_get(v_d_2893_, 0);
v_description_2927_ = lean_ctor_get(v_d_2893_, 1);
v___x_2928_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2929_ = lean_string_dec_eq(v_description_2927_, v___x_2928_);
if (v___x_2929_ == 0)
{
v___y_2922_ = v_a_2925_;
goto v___jp_2921_;
}
else
{
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2946_; 
lean_inc(v_value_2926_);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_d_2893_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; lean_object* v_unused_2948_; 
v_unused_2947_ = lean_ctor_get(v_d_2893_, 1);
lean_dec(v_unused_2947_);
v_unused_2948_ = lean_ctor_get(v_d_2893_, 0);
lean_dec(v_unused_2948_);
v___x_2931_ = v_d_2893_;
v_isShared_2932_ = v_isSharedCheck_2946_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v_d_2893_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2946_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
uint32_t v___x_2933_; uint64_t v___x_2934_; lean_object* v___x_2936_; 
v___x_2933_ = 206;
v___x_2934_ = 0ULL;
lean_inc(v_value_2926_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 1, v___x_2928_);
v___x_2936_ = v___x_2931_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_value_2926_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v___x_2928_);
v___x_2936_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
uint32_t v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = lasm_js_value_handle(v_value_2926_);
lean_dec(v_value_2926_);
v___x_2938_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2933_, v___x_2934_, v___x_2936_, v___x_2937_);
lean_dec_ref(v___x_2936_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; uint8_t v___x_2940_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
v___x_2940_ = lean_string_validate_utf8(v_a_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec(v_a_2939_);
v___x_2941_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2942_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2941_);
v___y_2902_ = v_a_2925_;
v_received_2903_ = v___x_2942_;
goto v___jp_2901_;
}
else
{
lean_object* v___x_2943_; 
v___x_2943_ = lean_string_from_utf8_unchecked(v_a_2939_);
v___y_2902_ = v_a_2925_;
v_received_2903_ = v___x_2943_;
goto v___jp_2901_;
}
}
else
{
lean_object* v___x_2944_; 
lean_dec_ref_known(v___x_2938_, 1);
v___x_2944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_2902_ = v_a_2925_;
v_received_2903_ = v___x_2944_;
goto v___jp_2901_;
}
}
}
}
}
else
{
v___y_2922_ = v_a_2925_;
goto v___jp_2921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_2971_, lean_object* v_d_2972_, lean_object* v_a_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2971_, v_d_2972_);
lean_dec_ref(v_context_2971_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_2975_, lean_object* v_bytes_2976_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Lasm_JS_Wire_decode(v_bytes_2976_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2980_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
v___x_2980_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2975_, v_a_2979_);
return v___x_2980_;
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2978_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2978_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_2989_, lean_object* v_bytes_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_2989_, v_bytes_2990_);
lean_dec_ref(v_bytes_2990_);
lean_dec_ref(v_context_2989_);
return v_res_2992_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_2993_; uint8_t v___x_2994_; uint64_t v___x_2995_; 
v___x_2993_ = 8ULL;
v___x_2994_ = 0;
v___x_2995_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_2994_, v___x_2993_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_2996_, lean_object* v_name_2997_, lean_object* v_args_2998_){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint64_t v___x_3003_; lean_object* v___x_3004_; 
v___x_3000_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3001_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3001_, 0, v_o_2996_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
lean_inc_ref(v_name_2997_);
v___x_3002_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3002_, 0, v_name_2997_);
v___x_3003_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3004_ = l_Lasm_JS_Value_invokeRaw(v___x_3001_, v___x_3002_, v_args_2998_, v___x_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3006_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3007_ = lean_string_append(v___x_3006_, v_name_2997_);
lean_dec_ref(v_name_2997_);
v___x_3008_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3007_, v_a_3005_);
lean_dec(v_a_3005_);
lean_dec_ref(v___x_3007_);
return v___x_3008_;
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec_ref(v_name_2997_);
v_a_3009_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_3004_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3004_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3017_, lean_object* v_name_3018_, lean_object* v_args_3019_, lean_object* v_a_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3017_, v_name_3018_, v_args_3019_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3023_, lean_object* v___f_3024_, lean_object* v_handler_3025_, lean_object* v_options_3026_, lean_object* v_a_3027_, lean_object* v_value_3028_, lean_object* v___x_3029_, lean_object* v___x_3030_, lean_object* v_a_3031_, lean_object* v___x_3032_, lean_object* v___x_3033_, lean_object* v_x_3034_){
_start:
{
uint8_t v___y_3037_; lean_object* v___y_3038_; lean_object* v_val_3039_; 
if (lean_obj_tag(v_x_3034_) == 0)
{
lean_object* v___x_3042_; 
lean_dec(v_a_3031_);
lean_dec_ref(v___x_3029_);
lean_dec(v_value_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_options_3026_);
lean_dec_ref(v_handler_3025_);
lean_dec_ref(v___f_3024_);
lean_dec(v___x_3023_);
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v_x_3034_);
return v___x_3042_;
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3100_; 
v_a_3043_ = lean_ctor_get(v_x_3034_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_x_3034_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3045_ = v_x_3034_;
v_isShared_3046_ = v_isSharedCheck_3100_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v_x_3034_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3100_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3090_; lean_object* v___x_3097_; 
v___x_3097_ = l_Lasm_JS_Data_field(v_a_3043_, v___x_3033_);
if (lean_obj_tag(v___x_3097_) == 4)
{
lean_object* v_s_3098_; 
v_s_3098_ = lean_ctor_get(v___x_3097_, 0);
lean_inc_ref(v_s_3098_);
lean_dec_ref_known(v___x_3097_, 1);
v___y_3090_ = v_s_3098_;
goto v___jp_3089_;
}
else
{
lean_object* v___x_3099_; 
lean_dec(v___x_3097_);
v___x_3099_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_3090_ = v___x_3099_;
goto v___jp_3089_;
}
v___jp_3047_:
{
lean_object* v___f_3054_; lean_object* v___x_3055_; 
lean_inc(v_a_3043_);
lean_inc(v___x_3023_);
v___f_3054_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3054_, 0, v___x_3023_);
lean_closure_set(v___f_3054_, 1, v___y_3052_);
lean_closure_set(v___f_3054_, 2, v___y_3053_);
lean_closure_set(v___f_3054_, 3, v_options_3026_);
lean_closure_set(v___f_3054_, 4, v___y_3051_);
lean_closure_set(v___f_3054_, 5, v___y_3049_);
lean_closure_set(v___f_3054_, 6, v_a_3027_);
lean_closure_set(v___f_3054_, 7, v_value_3028_);
lean_closure_set(v___f_3054_, 8, v_a_3043_);
lean_closure_set(v___f_3054_, 9, v___x_3029_);
lean_closure_set(v___f_3054_, 10, v___y_3050_);
lean_closure_set(v___f_3054_, 11, v___y_3048_);
v___x_3055_ = l_Lasm_JS_Data_field(v_a_3043_, v___x_3030_);
lean_dec(v_a_3043_);
if (lean_obj_tag(v___x_3055_) == 9)
{
lean_object* v_value_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3079_; 
v_value_3056_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3079_ == 0)
{
lean_object* v_unused_3080_; 
v_unused_3080_ = lean_ctor_get(v___x_3055_, 1);
lean_dec(v_unused_3080_);
v___x_3058_ = v___x_3055_;
v_isShared_3059_ = v_isSharedCheck_3079_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_value_3056_);
lean_dec(v___x_3055_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3079_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___f_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___f_3060_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3060_, 0, v___f_3054_);
v___x_3061_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3062_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 1, v___x_3062_);
v___x_3064_ = v___x_3058_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_value_3056_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; uint8_t v___x_3068_; lean_object* v___x_3069_; 
v___x_3065_ = lean_unsigned_to_nat(1u);
v___x_3066_ = lean_mk_empty_array_with_capacity(v___x_3065_);
v___x_3067_ = lean_array_push(v___x_3066_, v___x_3064_);
v___x_3068_ = 0;
v___x_3069_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3031_, v___x_3061_, v___x_3067_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3072_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v_a_3070_);
v___x_3072_ = v___x_3045_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3070_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
v___y_3037_ = v___x_3068_;
v___y_3038_ = v___f_3060_;
v_val_3039_ = v___x_3072_;
goto v___jp_3036_;
}
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; 
v_a_3074_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3069_, 1);
if (v_isShared_3046_ == 0)
{
lean_ctor_set_tag(v___x_3045_, 0);
lean_ctor_set(v___x_3045_, 0, v_a_3074_);
v___x_3076_ = v___x_3045_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3074_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
v___y_3037_ = v___x_3068_;
v___y_3038_ = v___f_3060_;
v_val_3039_ = v___x_3076_;
goto v___jp_3036_;
}
}
}
}
}
else
{
lean_object* v___f_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; lean_object* v___x_3085_; 
lean_dec(v___x_3055_);
lean_dec(v_a_3031_);
v___f_3081_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3081_, 0, v___f_3054_);
v___x_3082_ = lean_mk_empty_array_with_capacity(v___x_3023_);
v___x_3083_ = 0;
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3082_);
v___x_3085_ = v___x_3045_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3082_);
v___x_3085_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
v___x_3087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3023_, v___x_3083_, v___x_3086_, v___f_3081_);
return v___x_3087_;
}
}
}
v___jp_3089_:
{
lean_object* v___f_3091_; lean_object* v___f_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; 
lean_inc_n(v___x_3023_, 2);
lean_inc_ref(v___y_3090_);
v___f_3091_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3091_, 0, v___y_3090_);
lean_closure_set(v___f_3091_, 1, v___x_3023_);
lean_closure_set(v___f_3091_, 2, v___f_3024_);
v___f_3092_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3092_, 0, v_handler_3025_);
lean_closure_set(v___f_3092_, 1, v___x_3023_);
lean_closure_set(v___f_3092_, 2, v___f_3091_);
v___f_3093_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3093_, 0, v___f_3092_);
v___x_3094_ = l_Lasm_JS_Data_field(v_a_3043_, v___x_3032_);
if (lean_obj_tag(v___x_3094_) == 4)
{
lean_object* v_s_3095_; 
v_s_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc_ref(v_s_3095_);
lean_dec_ref_known(v___x_3094_, 1);
lean_inc_ref_n(v___f_3093_, 3);
v___y_3048_ = v___f_3093_;
v___y_3049_ = v___f_3093_;
v___y_3050_ = v___f_3093_;
v___y_3051_ = v___f_3093_;
v___y_3052_ = v___y_3090_;
v___y_3053_ = v_s_3095_;
goto v___jp_3047_;
}
else
{
lean_object* v___x_3096_; 
lean_dec(v___x_3094_);
v___x_3096_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3093_, 3);
v___y_3048_ = v___f_3093_;
v___y_3049_ = v___f_3093_;
v___y_3050_ = v___f_3093_;
v___y_3051_ = v___f_3093_;
v___y_3052_ = v___y_3090_;
v___y_3053_ = v___x_3096_;
goto v___jp_3047_;
}
}
}
}
v___jp_3036_:
{
lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_val_3039_);
v___x_3041_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3023_, v___y_3037_, v___x_3040_, v___y_3038_);
return v___x_3041_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3101_, lean_object* v___f_3102_, lean_object* v_handler_3103_, lean_object* v_options_3104_, lean_object* v_a_3105_, lean_object* v_value_3106_, lean_object* v___x_3107_, lean_object* v___x_3108_, lean_object* v_a_3109_, lean_object* v___x_3110_, lean_object* v___x_3111_, lean_object* v_x_3112_, lean_object* v___y_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3101_, v___f_3102_, v_handler_3103_, v_options_3104_, v_a_3105_, v_value_3106_, v___x_3107_, v___x_3108_, v_a_3109_, v___x_3110_, v___x_3111_, v_x_3112_);
lean_dec_ref(v___x_3111_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3108_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3115_, size_t v_i_3116_, lean_object* v_bs_3117_){
_start:
{
uint8_t v___x_3118_; 
v___x_3118_ = lean_usize_dec_lt(v_i_3116_, v_sz_3115_);
if (v___x_3118_ == 0)
{
return v_bs_3117_;
}
else
{
lean_object* v_v_3119_; lean_object* v___x_3120_; lean_object* v_bs_x27_3121_; lean_object* v___x_3122_; size_t v___x_3123_; size_t v___x_3124_; lean_object* v___x_3125_; 
v_v_3119_ = lean_array_uget(v_bs_3117_, v_i_3116_);
v___x_3120_ = lean_unsigned_to_nat(0u);
v_bs_x27_3121_ = lean_array_uset(v_bs_3117_, v_i_3116_, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3122_, 0, v_v_3119_);
v___x_3123_ = ((size_t)1ULL);
v___x_3124_ = lean_usize_add(v_i_3116_, v___x_3123_);
v___x_3125_ = lean_array_uset(v_bs_x27_3121_, v_i_3116_, v___x_3122_);
v_i_3116_ = v___x_3124_;
v_bs_3117_ = v___x_3125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3127_, lean_object* v_i_3128_, lean_object* v_bs_3129_){
_start:
{
size_t v_sz_boxed_3130_; size_t v_i_boxed_3131_; lean_object* v_res_3132_; 
v_sz_boxed_3130_ = lean_unbox_usize(v_sz_3127_);
lean_dec(v_sz_3127_);
v_i_boxed_3131_ = lean_unbox_usize(v_i_3128_);
lean_dec(v_i_3128_);
v_res_3132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3130_, v_i_boxed_3131_, v_bs_3129_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3133_, lean_object* v_keys_3134_){
_start:
{
uint32_t v___x_3136_; uint32_t v___x_3137_; uint64_t v___x_3138_; size_t v_sz_3139_; size_t v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3136_ = 203;
v___x_3137_ = lasm_js_value_handle(v_o_3133_);
v___x_3138_ = 0ULL;
v_sz_3139_ = lean_array_size(v_keys_3134_);
v___x_3140_ = ((size_t)0ULL);
v___x_3141_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3139_, v___x_3140_, v_keys_3134_);
v___x_3142_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
v___x_3143_ = l_Lasm_JS_Wire_encode(v___x_3142_);
lean_dec_ref_known(v___x_3142_, 1);
v___x_3144_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3145_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3145_, 0, v_o_3133_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lasm_js_call(v___x_3136_, v___x_3137_, v___x_3138_, v___x_3143_, v___x_3145_);
lean_dec_ref_known(v___x_3145_, 2);
lean_dec_ref(v___x_3143_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3148_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v___x_3146_, 1);
v___x_3148_ = l_Lasm_JS_Wire_decode(v_a_3147_);
lean_dec(v_a_3147_);
return v___x_3148_;
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
v_a_3149_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3146_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3146_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3157_, lean_object* v_keys_3158_, lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3157_, v_keys_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3181_, lean_object* v___f_3182_, lean_object* v_handler_3183_, lean_object* v_options_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_____r_3187_){
_start:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; 
v___x_3191_ = lean_unsigned_to_nat(0u);
v___x_3192_ = lean_array_get_size(v_args_3181_);
v___x_3193_ = lean_nat_dec_lt(v___x_3191_, v___x_3192_);
if (v___x_3193_ == 0)
{
lean_dec(v_a_3186_);
lean_dec(v_a_3185_);
lean_dec_ref(v_options_3184_);
lean_dec_ref(v_handler_3183_);
lean_dec_ref(v___f_3182_);
goto v___jp_3189_;
}
else
{
lean_object* v___x_3194_; 
v___x_3194_ = lean_array_fget_borrowed(v_args_3181_, v___x_3191_);
if (lean_obj_tag(v___x_3194_) == 9)
{
lean_object* v_value_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___f_3200_; lean_object* v___x_3201_; uint8_t v___x_3202_; lean_object* v_val_3204_; lean_object* v___x_3207_; 
v_value_3195_ = lean_ctor_get(v___x_3194_, 0);
v___x_3196_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3197_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3198_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3199_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3195_, 2);
v___f_3200_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3200_, 0, v___x_3191_);
lean_closure_set(v___f_3200_, 1, v___f_3182_);
lean_closure_set(v___f_3200_, 2, v_handler_3183_);
lean_closure_set(v___f_3200_, 3, v_options_3184_);
lean_closure_set(v___f_3200_, 4, v_a_3185_);
lean_closure_set(v___f_3200_, 5, v_value_3195_);
lean_closure_set(v___f_3200_, 6, v___x_3199_);
lean_closure_set(v___f_3200_, 7, v___x_3198_);
lean_closure_set(v___f_3200_, 8, v_a_3186_);
lean_closure_set(v___f_3200_, 9, v___x_3197_);
lean_closure_set(v___f_3200_, 10, v___x_3196_);
v___x_3201_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3202_ = 0;
v___x_3207_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3195_, v___x_3201_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3207_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3207_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
lean_ctor_set_tag(v___x_3210_, 1);
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
v_val_3204_ = v___x_3213_;
goto v___jp_3203_;
}
}
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
v_a_3216_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3207_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3207_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
lean_ctor_set_tag(v___x_3218_, 0);
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
v_val_3204_ = v___x_3221_;
goto v___jp_3203_;
}
}
}
v___jp_3203_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3205_, 0, v_val_3204_);
v___x_3206_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3191_, v___x_3202_, v___x_3205_, v___f_3200_);
return v___x_3206_;
}
}
else
{
lean_dec(v_a_3186_);
lean_dec(v_a_3185_);
lean_dec_ref(v_options_3184_);
lean_dec_ref(v_handler_3183_);
lean_dec_ref(v___f_3182_);
goto v___jp_3189_;
}
}
v___jp_3189_:
{
lean_object* v___x_3190_; 
v___x_3190_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3224_, lean_object* v___f_3225_, lean_object* v_handler_3226_, lean_object* v_options_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_____r_3230_, lean_object* v___y_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3224_, v___f_3225_, v_handler_3226_, v_options_3227_, v_a_3228_, v_a_3229_, v_____r_3230_);
lean_dec_ref(v_args_3224_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3233_, lean_object* v_x_3234_){
_start:
{
if (lean_obj_tag(v_x_3234_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3244_; 
lean_dec_ref(v___f_3233_);
v_a_3236_ = lean_ctor_get(v_x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3238_ = v_x_3234_;
v_isShared_3239_ = v_isSharedCheck_3244_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v_x_3234_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3244_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3242_; 
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3246_; 
v_a_3245_ = lean_ctor_get(v_x_3234_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v_x_3234_, 1);
v___x_3246_ = lean_apply_2(v___f_3233_, v_a_3245_, lean_box(0));
return v___x_3246_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3247_, lean_object* v_x_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3247_, v_x_3248_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__12(lean_object* v___f_3251_, lean_object* v_handler_3252_, lean_object* v_options_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_args_3256_){
_start:
{
lean_object* v___f_3258_; lean_object* v___x_3262_; lean_object* v___x_3263_; uint8_t v___x_3264_; 
lean_inc(v_a_3255_);
lean_inc(v_a_3254_);
lean_inc_ref(v_options_3253_);
lean_inc_ref(v_handler_3252_);
lean_inc_ref(v___f_3251_);
lean_inc_ref(v_args_3256_);
v___f_3258_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3258_, 0, v_args_3256_);
lean_closure_set(v___f_3258_, 1, v___f_3251_);
lean_closure_set(v___f_3258_, 2, v_handler_3252_);
lean_closure_set(v___f_3258_, 3, v_options_3253_);
lean_closure_set(v___f_3258_, 4, v_a_3254_);
lean_closure_set(v___f_3258_, 5, v_a_3255_);
v___x_3262_ = lean_unsigned_to_nat(1u);
v___x_3263_ = lean_array_get_size(v_args_3256_);
v___x_3264_ = lean_nat_dec_lt(v___x_3262_, v___x_3263_);
if (v___x_3264_ == 0)
{
lean_dec_ref(v___f_3258_);
goto v___jp_3259_;
}
else
{
lean_object* v___x_3265_; 
v___x_3265_ = lean_array_fget_borrowed(v_args_3256_, v___x_3262_);
if (lean_obj_tag(v___x_3265_) == 9)
{
lean_object* v___f_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
lean_inc_ref(v___x_3265_);
lean_dec_ref(v_args_3256_);
lean_dec(v_a_3255_);
lean_dec(v_a_3254_);
lean_dec_ref(v_options_3253_);
lean_dec_ref(v_handler_3252_);
lean_dec_ref(v___f_3251_);
v___f_3266_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3266_, 0, v___f_3258_);
v___x_3267_ = l_Lasm_Fetch_platformEnv;
v___x_3268_ = lean_unsigned_to_nat(0u);
v___x_3269_ = 0;
v___x_3270_ = lean_st_ref_swap(v___x_3267_, v___x_3265_);
lean_dec(v___x_3270_);
v___x_3271_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3268_, v___x_3269_, v___x_3271_, v___f_3266_);
return v___x_3272_;
}
else
{
lean_dec_ref(v___f_3258_);
goto v___jp_3259_;
}
}
v___jp_3259_:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = lean_box(0);
v___x_3261_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3256_, v___f_3251_, v_handler_3252_, v_options_3253_, v_a_3254_, v_a_3255_, v___x_3260_);
lean_dec_ref(v_args_3256_);
return v___x_3261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__12___boxed(lean_object* v___f_3273_, lean_object* v_handler_3274_, lean_object* v_options_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_args_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lasm_Fetch_jsFetchHandler___lam__12(v___f_3273_, v_handler_3274_, v_options_3275_, v_a_3276_, v_a_3277_, v_args_3278_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3284_, lean_object* v_options_3285_){
_start:
{
lean_object* v___f_3287_; lean_object* v___x_3288_; 
v___f_3287_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3288_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
lean_inc_n(v_a_3289_, 2);
lean_dec_ref_known(v___x_3288_, 1);
v___x_3290_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3291_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3289_, v___x_3290_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
v___x_3293_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3294_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3289_, v___x_3293_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___f_3296_; lean_object* v___x_3297_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3294_, 1);
v___f_3296_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__12___boxed), 7, 5);
lean_closure_set(v___f_3296_, 0, v___f_3287_);
lean_closure_set(v___f_3296_, 1, v_handler_3284_);
lean_closure_set(v___f_3296_, 2, v_options_3285_);
lean_closure_set(v___f_3296_, 3, v_a_3292_);
lean_closure_set(v___f_3296_, 4, v_a_3295_);
v___x_3297_ = l_Lasm_JS_Function_ofFn(v___f_3296_);
return v___x_3297_;
}
else
{
lean_dec(v_a_3292_);
lean_dec_ref(v_options_3285_);
lean_dec_ref(v_handler_3284_);
return v___x_3294_;
}
}
else
{
lean_dec(v_a_3289_);
lean_dec_ref(v_options_3285_);
lean_dec_ref(v_handler_3284_);
return v___x_3291_;
}
}
else
{
lean_dec_ref(v_options_3285_);
lean_dec_ref(v_handler_3284_);
return v___x_3288_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3298_, lean_object* v_options_3299_, lean_object* v_a_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3298_, v_options_3299_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lasm_JS_Wire_decode(v_bytes_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3305_, lean_object* v_a_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3305_);
lean_dec_ref(v_bytes_3305_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3308_, lean_object* v_bytes_3309_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lasm_JS_Wire_decode(v_bytes_3309_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3312_, lean_object* v_bytes_3313_, lean_object* v_a_3314_){
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3312_, v_bytes_3313_);
lean_dec_ref(v_bytes_3313_);
lean_dec_ref(v_context_3312_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3316_){
_start:
{
if (lean_obj_tag(v_x_3316_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3326_; 
v_a_3318_ = lean_ctor_get(v_x_3316_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v_x_3316_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3320_ = v_x_3316_;
v_isShared_3321_ = v_isSharedCheck_3326_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v_x_3316_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3326_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
return v___x_3324_;
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3336_; 
v_a_3327_ = lean_ctor_get(v_x_3316_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_x_3316_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3329_ = v_x_3316_;
v_isShared_3330_ = v_isSharedCheck_3336_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v_x_3316_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3336_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
v___x_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
return v___x_3334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3344_){
_start:
{
if (lean_obj_tag(v_x_3344_) == 0)
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3354_; 
v_a_3346_ = lean_ctor_get(v_x_3344_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v_x_3344_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3348_ = v_x_3344_;
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v_x_3344_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3354_;
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
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
lean_object* v___x_3352_; 
v___x_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
return v___x_3352_;
}
}
}
else
{
lean_object* v___x_3355_; 
lean_dec_ref_known(v_x_3344_, 1);
v___x_3355_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3355_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3356_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3359_, lean_object* v_x_3360_){
_start:
{
if (lean_obj_tag(v_x_3360_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3370_; 
lean_dec_ref(v___f_3359_);
v_a_3362_ = lean_ctor_get(v_x_3360_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v_x_3360_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3364_ = v_x_3360_;
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v_x_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
lean_object* v___x_3368_; 
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
return v___x_3368_;
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3391_; 
v_a_3371_ = lean_ctor_get(v_x_3360_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v_x_3360_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3373_ = v_x_3360_;
v_isShared_3374_ = v_isSharedCheck_3391_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v_x_3360_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3391_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v_flush_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; lean_object* v_val_3379_; lean_object* v___x_3382_; 
v_flush_3375_ = lean_ctor_get(v_a_3371_, 0);
lean_inc_ref(v_flush_3375_);
lean_dec(v_a_3371_);
v___x_3376_ = lean_unsigned_to_nat(0u);
v___x_3377_ = 0;
v___x_3382_ = lean_apply_1(v_flush_3375_, lean_box(0));
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v___x_3385_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3382_, 1);
if (v_isShared_3374_ == 0)
{
lean_ctor_set(v___x_3373_, 0, v_a_3383_);
v___x_3385_ = v___x_3373_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3383_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
v_val_3379_ = v___x_3385_;
goto v___jp_3378_;
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; 
v_a_3387_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3387_);
lean_dec_ref_known(v___x_3382_, 1);
if (v_isShared_3374_ == 0)
{
lean_ctor_set_tag(v___x_3373_, 0);
lean_ctor_set(v___x_3373_, 0, v_a_3387_);
v___x_3389_ = v___x_3373_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3387_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
v_val_3379_ = v___x_3389_;
goto v___jp_3378_;
}
}
v___jp_3378_:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3380_, 0, v_val_3379_);
v___x_3381_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3376_, v___x_3377_, v___x_3380_, v___f_3359_);
return v___x_3381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3392_, lean_object* v_x_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3392_, v_x_3393_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3396_, lean_object* v_x_3397_){
_start:
{
if (lean_obj_tag(v_x_3397_) == 0)
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3407_; 
lean_dec_ref(v___f_3396_);
v_a_3399_ = lean_ctor_get(v_x_3397_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v_x_3397_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3401_ = v_x_3397_;
v_isShared_3402_ = v_isSharedCheck_3407_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v_x_3397_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3407_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
return v___x_3405_;
}
}
}
else
{
lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3419_; 
v_isSharedCheck_3419_ = !lean_is_exclusive(v_x_3397_);
if (v_isSharedCheck_3419_ == 0)
{
lean_object* v_unused_3420_; 
v_unused_3420_ = lean_ctor_get(v_x_3397_, 0);
lean_dec(v_unused_3420_);
v___x_3409_ = v_x_3397_;
v_isShared_3410_ = v_isSharedCheck_3419_;
goto v_resetjp_3408_;
}
else
{
lean_dec(v_x_3397_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3419_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; uint8_t v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3411_ = lean_unsigned_to_nat(0u);
v___x_3412_ = 0;
v___x_3413_ = lean_get_stdout();
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3413_);
v___x_3415_ = v___x_3409_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v___x_3413_);
v___x_3415_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
v___x_3417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3411_, v___x_3412_, v___x_3416_, v___f_3396_);
return v___x_3417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3421_, lean_object* v_x_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3421_, v_x_3422_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3425_){
_start:
{
if (lean_obj_tag(v_x_3425_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3435_; 
v_a_3427_ = lean_ctor_get(v_x_3425_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v_x_3425_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3429_ = v_x_3425_;
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v_x_3425_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
return v___x_3433_;
}
}
}
else
{
lean_object* v___x_3436_; 
lean_dec_ref_known(v_x_3425_, 1);
v___x_3436_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3436_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3437_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3441_, lean_object* v___x_3442_, lean_object* v_____r_3443_){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3445_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3446_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3446_, 0, v_snd_3441_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
lean_ctor_set(v___x_3446_, 2, v___x_3442_);
v___x_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3449_, lean_object* v___x_3450_, lean_object* v_____r_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3449_, v___x_3450_, v_____r_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3454_, lean_object* v_x_3455_){
_start:
{
if (lean_obj_tag(v_x_3455_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3465_; 
lean_dec_ref(v___f_3454_);
v_a_3457_ = lean_ctor_get(v_x_3455_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_x_3455_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3459_ = v_x_3455_;
v_isShared_3460_ = v_isSharedCheck_3465_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v_x_3455_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3465_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3462_);
return v___x_3463_;
}
}
}
else
{
lean_object* v_a_3466_; 
v_a_3466_ = lean_ctor_get(v_x_3455_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v_x_3455_, 1);
if (lean_obj_tag(v_a_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3475_; 
lean_dec_ref(v___f_3454_);
v_a_3467_ = lean_ctor_get(v_a_3466_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_a_3466_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3469_ = v_a_3466_;
v_isShared_3470_ = v_isSharedCheck_3475_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v_a_3466_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3475_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 1);
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3473_; 
v___x_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
return v___x_3473_;
}
}
}
else
{
lean_object* v_a_3476_; lean_object* v___x_3477_; 
v_a_3476_ = lean_ctor_get(v_a_3466_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v_a_3466_, 1);
v___x_3477_ = lean_apply_2(v___f_3454_, v_a_3476_, lean_box(0));
return v___x_3477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3478_, lean_object* v_x_3479_, lean_object* v___y_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3478_, v_x_3479_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3483_, lean_object* v___x_3484_, lean_object* v_x_3485_){
_start:
{
if (lean_obj_tag(v_x_3485_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3495_; 
lean_dec_ref(v___x_3484_);
lean_dec(v_snd_3483_);
v_a_3487_ = lean_ctor_get(v_x_3485_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v_x_3485_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3489_ = v_x_3485_;
v_isShared_3490_ = v_isSharedCheck_3495_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_a_3487_);
lean_dec(v_x_3485_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3495_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3492_; 
if (v_isShared_3490_ == 0)
{
v___x_3492_ = v___x_3489_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3487_);
v___x_3492_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3492_);
return v___x_3493_;
}
}
}
else
{
lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3506_; 
v_isSharedCheck_3506_ = !lean_is_exclusive(v_x_3485_);
if (v_isSharedCheck_3506_ == 0)
{
lean_object* v_unused_3507_; 
v_unused_3507_ = lean_ctor_get(v_x_3485_, 0);
lean_dec(v_unused_3507_);
v___x_3497_ = v_x_3485_;
v_isShared_3498_ = v_isSharedCheck_3506_;
goto v_resetjp_3496_;
}
else
{
lean_dec(v_x_3485_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3506_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3502_; 
v___x_3499_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3500_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3500_, 0, v_snd_3483_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
lean_ctor_set(v___x_3500_, 2, v___x_3484_);
if (v_isShared_3498_ == 0)
{
lean_ctor_set_tag(v___x_3497_, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3500_);
v___x_3502_ = v___x_3497_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
return v___x_3504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3508_, lean_object* v___x_3509_, lean_object* v_x_3510_, lean_object* v___y_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3508_, v___x_3509_, v_x_3510_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3513_, lean_object* v_name_3514_, lean_object* v_args_3515_){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; uint64_t v___x_3520_; lean_object* v___x_3521_; 
v___x_3517_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3518_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3518_, 0, v_o_3513_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
v___x_3519_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3519_, 0, v_name_3514_);
v___x_3520_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3521_ = l_Lasm_JS_Value_invokeRaw(v___x_3518_, v___x_3519_, v_args_3515_, v___x_3520_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v___x_3523_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v___x_3523_ = l_Lasm_JS_Wire_decode(v_a_3522_);
lean_dec(v_a_3522_);
return v___x_3523_;
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
v_a_3524_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3521_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3521_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3532_, lean_object* v_name_3533_, lean_object* v_args_3534_, lean_object* v_a_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3532_, v_name_3533_, v_args_3534_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3537_, uint8_t v___x_3538_, lean_object* v___f_3539_, lean_object* v_snd_3540_, lean_object* v_chunk_3541_){
_start:
{
lean_object* v_val_3544_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3547_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3548_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3548_, 0, v_chunk_3541_);
v___x_3549_ = lean_unsigned_to_nat(1u);
v___x_3550_ = lean_mk_empty_array_with_capacity(v___x_3549_);
v___x_3551_ = lean_array_push(v___x_3550_, v___x_3548_);
v___x_3552_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3540_, v___x_3547_, v___x_3551_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v___x_3552_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3552_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set_tag(v___x_3555_, 1);
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
v_val_3544_ = v___x_3558_;
goto v___jp_3543_;
}
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
v_a_3561_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v___x_3552_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3552_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
lean_ctor_set_tag(v___x_3563_, 0);
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
v_val_3544_ = v___x_3566_;
goto v___jp_3543_;
}
}
}
v___jp_3543_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_val_3544_);
v___x_3546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3537_, v___x_3538_, v___x_3545_, v___f_3539_);
return v___x_3546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3569_, lean_object* v___x_3570_, lean_object* v___f_3571_, lean_object* v_snd_3572_, lean_object* v_chunk_3573_, lean_object* v___y_3574_){
_start:
{
uint8_t v___x_18404__boxed_3575_; lean_object* v_res_3576_; 
v___x_18404__boxed_3575_ = lean_unbox(v___x_3570_);
v_res_3576_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3569_, v___x_18404__boxed_3575_, v___f_3571_, v_snd_3572_, v_chunk_3573_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3577_, uint8_t v___x_3578_, lean_object* v___f_3579_, lean_object* v_x_3580_){
_start:
{
lean_object* v_val_3583_; 
if (lean_obj_tag(v_x_3580_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3602_; 
v_a_3586_ = lean_ctor_get(v_x_3580_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v_x_3580_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3588_ = v_x_3580_;
v_isShared_3589_ = v_isSharedCheck_3602_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v_x_3580_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3602_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3590_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3591_ = lean_io_error_to_string(v_a_3586_);
v___x_3592_ = lean_string_append(v___x_3590_, v___x_3591_);
lean_dec_ref(v___x_3591_);
v___x_3593_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3592_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v_a_3594_; lean_object* v___x_3596_; 
v_a_3594_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_a_3594_);
lean_dec_ref_known(v___x_3593_, 1);
if (v_isShared_3589_ == 0)
{
lean_ctor_set_tag(v___x_3588_, 1);
lean_ctor_set(v___x_3588_, 0, v_a_3594_);
v___x_3596_ = v___x_3588_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3594_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
v_val_3583_ = v___x_3596_;
goto v___jp_3582_;
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; 
v_a_3598_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3593_, 1);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v_a_3598_);
v___x_3600_ = v___x_3588_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
v_val_3583_ = v___x_3600_;
goto v___jp_3582_;
}
}
}
}
else
{
lean_object* v___x_3603_; 
lean_dec_ref(v___f_3579_);
lean_dec(v___x_3577_);
v___x_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3603_, 0, v_x_3580_);
return v___x_3603_;
}
v___jp_3582_:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3584_, 0, v_val_3583_);
v___x_3585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3577_, v___x_3578_, v___x_3584_, v___f_3579_);
return v___x_3585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3604_, lean_object* v___x_3605_, lean_object* v___f_3606_, lean_object* v_x_3607_, lean_object* v___y_3608_){
_start:
{
uint8_t v___x_18472__boxed_3609_; lean_object* v_res_3610_; 
v___x_18472__boxed_3609_ = lean_unbox(v___x_3605_);
v_res_3610_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3604_, v___x_18472__boxed_3609_, v___f_3606_, v_x_3607_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3611_, lean_object* v_snd_3612_, lean_object* v___y_3613_, uint16_t v_status_3614_, lean_object* v_body_3615_, lean_object* v___x_3616_, lean_object* v___f_3617_, lean_object* v___f_3618_, lean_object* v___f_3619_, lean_object* v___f_3620_, lean_object* v___f_3621_, lean_object* v_x_3622_){
_start:
{
if (lean_obj_tag(v_x_3622_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3632_; 
lean_dec_ref(v___f_3621_);
lean_dec_ref(v___f_3620_);
lean_dec_ref(v___f_3619_);
lean_dec_ref(v___f_3618_);
lean_dec_ref(v___f_3617_);
lean_dec(v___x_3616_);
lean_dec_ref(v_body_3615_);
lean_dec(v_snd_3612_);
lean_dec(v_stream_3611_);
v_a_3624_ = lean_ctor_get(v_x_3622_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v_x_3622_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3626_ = v_x_3622_;
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v_x_3622_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3627_ == 0)
{
v___x_3629_ = v___x_3626_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v___x_3630_; 
v___x_3630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
return v___x_3630_;
}
}
}
else
{
lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3662_; 
v_isSharedCheck_3662_ = !lean_is_exclusive(v_x_3622_);
if (v_isSharedCheck_3662_ == 0)
{
lean_object* v_unused_3663_; 
v_unused_3663_ = lean_ctor_get(v_x_3622_, 0);
lean_dec(v_unused_3663_);
v___x_3634_ = v_x_3622_;
v_isShared_3635_ = v_isSharedCheck_3662_;
goto v_resetjp_3633_;
}
else
{
lean_dec(v_x_3622_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3662_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
if (lean_obj_tag(v_stream_3611_) == 0)
{
lean_object* v___x_3636_; lean_object* v___y_3638_; uint8_t v___x_3647_; 
lean_dec_ref(v___f_3621_);
lean_dec_ref(v___f_3620_);
lean_dec_ref(v___f_3619_);
lean_dec_ref(v___f_3618_);
lean_dec_ref(v___f_3617_);
lean_dec(v___x_3616_);
v___x_3636_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3647_ = l_Lasm_Fetch_bodyless(v___y_3613_, v_status_3614_);
if (v___x_3647_ == 0)
{
lean_object* v___x_3648_; 
v___x_3648_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3648_, 0, v_body_3615_);
v___y_3638_ = v___x_3648_;
goto v___jp_3637_;
}
else
{
lean_object* v___x_3649_; 
lean_dec_ref(v_body_3615_);
v___x_3649_ = lean_box(0);
v___y_3638_ = v___x_3649_;
goto v___jp_3637_;
}
v___jp_3637_:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3644_; 
v___x_3639_ = lean_unsigned_to_nat(1u);
v___x_3640_ = lean_mk_empty_array_with_capacity(v___x_3639_);
v___x_3641_ = lean_array_push(v___x_3640_, v___y_3638_);
v___x_3642_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3642_, 0, v_snd_3612_);
lean_ctor_set(v___x_3642_, 1, v___x_3636_);
lean_ctor_set(v___x_3642_, 2, v___x_3641_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3642_);
v___x_3644_ = v___x_3634_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3642_);
v___x_3644_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; 
v___x_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
return v___x_3645_;
}
}
}
else
{
lean_object* v_val_3650_; uint8_t v___x_3651_; 
lean_del_object(v___x_3634_);
lean_dec_ref(v_body_3615_);
v_val_3650_ = lean_ctor_get(v_stream_3611_, 0);
lean_inc(v_val_3650_);
lean_dec_ref_known(v_stream_3611_, 1);
v___x_3651_ = l_Lasm_Fetch_bodyless(v___y_3613_, v_status_3614_);
if (v___x_3651_ == 0)
{
lean_object* v___x_3652_; lean_object* v___f_3653_; lean_object* v___x_3654_; lean_object* v___f_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
lean_dec_ref(v___f_3621_);
v___x_3652_ = lean_box(v___x_3651_);
lean_inc_n(v___x_3616_, 4);
v___f_3653_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3653_, 0, v___x_3616_);
lean_closure_set(v___f_3653_, 1, v___x_3652_);
lean_closure_set(v___f_3653_, 2, v___f_3617_);
lean_closure_set(v___f_3653_, 3, v_snd_3612_);
v___x_3654_ = lean_box(v___x_3651_);
v___f_3655_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3655_, 0, v___x_3616_);
lean_closure_set(v___f_3655_, 1, v___x_3654_);
lean_closure_set(v___f_3655_, 2, v___f_3618_);
v___x_3656_ = lean_apply_2(v_val_3650_, v___f_3653_, lean_box(0));
v___x_3657_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3616_, v___x_3651_, v___x_3656_, v___f_3619_);
v___x_3658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3616_, v___x_3651_, v___x_3657_, v___f_3655_);
v___x_3659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3616_, v___x_3651_, v___x_3658_, v___f_3620_);
return v___x_3659_;
}
else
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
lean_dec(v_val_3650_);
lean_dec_ref(v___f_3620_);
lean_dec_ref(v___f_3619_);
lean_dec_ref(v___f_3618_);
lean_dec_ref(v___f_3617_);
lean_dec(v___x_3616_);
lean_dec(v_snd_3612_);
v___x_3660_ = lean_box(0);
v___x_3661_ = lean_apply_2(v___f_3621_, v___x_3660_, lean_box(0));
return v___x_3661_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3664_, lean_object* v_snd_3665_, lean_object* v___y_3666_, lean_object* v_status_3667_, lean_object* v_body_3668_, lean_object* v___x_3669_, lean_object* v___f_3670_, lean_object* v___f_3671_, lean_object* v___f_3672_, lean_object* v___f_3673_, lean_object* v___f_3674_, lean_object* v_x_3675_, lean_object* v___y_3676_){
_start:
{
uint16_t v_status_boxed_3677_; lean_object* v_res_3678_; 
v_status_boxed_3677_ = lean_unbox(v_status_3667_);
v_res_3678_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3664_, v_snd_3665_, v___y_3666_, v_status_boxed_3677_, v_body_3668_, v___x_3669_, v___f_3670_, v___f_3671_, v___f_3672_, v___f_3673_, v___f_3674_, v_x_3675_);
lean_dec_ref(v___y_3666_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3679_, size_t v_i_3680_, size_t v_stop_3681_, lean_object* v_b_3682_){
_start:
{
uint8_t v___x_3683_; 
v___x_3683_ = lean_usize_dec_eq(v_i_3680_, v_stop_3681_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v_fst_3685_; lean_object* v_snd_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; size_t v___x_3691_; size_t v___x_3692_; 
v___x_3684_ = lean_array_uget_borrowed(v_as_3679_, v_i_3680_);
v_fst_3685_ = lean_ctor_get(v___x_3684_, 0);
v_snd_3686_ = lean_ctor_get(v___x_3684_, 1);
lean_inc(v_fst_3685_);
v___x_3687_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3687_, 0, v_fst_3685_);
v___x_3688_ = lean_array_push(v_b_3682_, v___x_3687_);
lean_inc(v_snd_3686_);
v___x_3689_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3689_, 0, v_snd_3686_);
v___x_3690_ = lean_array_push(v___x_3688_, v___x_3689_);
v___x_3691_ = ((size_t)1ULL);
v___x_3692_ = lean_usize_add(v_i_3680_, v___x_3691_);
v_i_3680_ = v___x_3692_;
v_b_3682_ = v___x_3690_;
goto _start;
}
else
{
return v_b_3682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3694_, lean_object* v_i_3695_, lean_object* v_stop_3696_, lean_object* v_b_3697_){
_start:
{
size_t v_i_boxed_3698_; size_t v_stop_boxed_3699_; lean_object* v_res_3700_; 
v_i_boxed_3698_ = lean_unbox_usize(v_i_3695_);
lean_dec(v_i_3695_);
v_stop_boxed_3699_ = lean_unbox_usize(v_stop_3696_);
lean_dec(v_stop_3696_);
v_res_3700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3694_, v_i_boxed_3698_, v_stop_boxed_3699_, v_b_3697_);
lean_dec_ref(v_as_3694_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3702_, lean_object* v_snd_3703_, lean_object* v___y_3704_, lean_object* v___f_3705_, lean_object* v___f_3706_, lean_object* v_x_3707_){
_start:
{
lean_object* v___y_3710_; uint8_t v___y_3711_; lean_object* v_val_3712_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; 
if (lean_obj_tag(v_x_3707_) == 0)
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3751_; 
lean_dec_ref(v___f_3706_);
lean_dec_ref(v___f_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v_snd_3703_);
lean_dec(v___x_3702_);
v_a_3743_ = lean_ctor_get(v_x_3707_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v_x_3707_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3745_ = v_x_3707_;
v_isShared_3746_ = v_isSharedCheck_3751_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v_x_3707_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3751_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3749_; 
v___x_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3748_);
return v___x_3749_;
}
}
}
else
{
lean_object* v_a_3752_; uint16_t v_status_3753_; lean_object* v_headers_3754_; lean_object* v_body_3755_; lean_object* v_stream_3756_; lean_object* v___x_3757_; lean_object* v___f_3758_; lean_object* v___f_3759_; lean_object* v___f_3760_; lean_object* v___y_3762_; lean_object* v___x_3774_; uint8_t v___x_3775_; 
v_a_3752_ = lean_ctor_get(v_x_3707_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v_x_3707_, 1);
v_status_3753_ = lean_ctor_get_uint16(v_a_3752_, sizeof(void*)*3);
v_headers_3754_ = lean_ctor_get(v_a_3752_, 0);
lean_inc_ref(v_headers_3754_);
v_body_3755_ = lean_ctor_get(v_a_3752_, 1);
lean_inc_ref(v_body_3755_);
v_stream_3756_ = lean_ctor_get(v_a_3752_, 2);
lean_inc(v_stream_3756_);
lean_dec(v_a_3752_);
v___x_3757_ = lean_mk_empty_array_with_capacity(v___x_3702_);
lean_inc_ref_n(v___x_3757_, 2);
lean_inc_n(v_snd_3703_, 2);
v___f_3758_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3758_, 0, v_snd_3703_);
lean_closure_set(v___f_3758_, 1, v___x_3757_);
lean_inc_ref(v___f_3758_);
v___f_3759_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3759_, 0, v___f_3758_);
v___f_3760_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3760_, 0, v_snd_3703_);
lean_closure_set(v___f_3760_, 1, v___x_3757_);
v___x_3774_ = lean_array_get_size(v_headers_3754_);
v___x_3775_ = lean_nat_dec_lt(v___x_3702_, v___x_3774_);
if (v___x_3775_ == 0)
{
lean_dec_ref(v_headers_3754_);
v___y_3762_ = v___x_3757_;
goto v___jp_3761_;
}
else
{
uint8_t v___x_3776_; 
v___x_3776_ = lean_nat_dec_le(v___x_3774_, v___x_3774_);
if (v___x_3776_ == 0)
{
if (v___x_3775_ == 0)
{
lean_dec_ref(v_headers_3754_);
v___y_3762_ = v___x_3757_;
goto v___jp_3761_;
}
else
{
size_t v___x_3777_; size_t v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = ((size_t)0ULL);
v___x_3778_ = lean_usize_of_nat(v___x_3774_);
v___x_3779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3754_, v___x_3777_, v___x_3778_, v___x_3757_);
lean_dec_ref(v_headers_3754_);
v___y_3762_ = v___x_3779_;
goto v___jp_3761_;
}
}
else
{
size_t v___x_3780_; size_t v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = ((size_t)0ULL);
v___x_3781_ = lean_usize_of_nat(v___x_3774_);
v___x_3782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3754_, v___x_3780_, v___x_3781_, v___x_3757_);
lean_dec_ref(v_headers_3754_);
v___y_3762_ = v___x_3782_;
goto v___jp_3761_;
}
}
v___jp_3761_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___f_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; uint8_t v___x_3770_; 
v___x_3763_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3764_ = lean_box(v_status_3753_);
lean_inc(v___x_3702_);
lean_inc(v_snd_3703_);
v___f_3765_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3765_, 0, v_stream_3756_);
lean_closure_set(v___f_3765_, 1, v_snd_3703_);
lean_closure_set(v___f_3765_, 2, v___y_3704_);
lean_closure_set(v___f_3765_, 3, v___x_3764_);
lean_closure_set(v___f_3765_, 4, v_body_3755_);
lean_closure_set(v___f_3765_, 5, v___x_3702_);
lean_closure_set(v___f_3765_, 6, v___f_3705_);
lean_closure_set(v___f_3765_, 7, v___f_3760_);
lean_closure_set(v___f_3765_, 8, v___f_3706_);
lean_closure_set(v___f_3765_, 9, v___f_3759_);
lean_closure_set(v___f_3765_, 10, v___f_3758_);
v___x_3766_ = lean_uint16_to_nat(v_status_3753_);
v___x_3767_ = lean_nat_to_int(v___x_3766_);
v___x_3768_ = lean_nat_abs(v___x_3767_);
v___x_3769_ = lean_cstr_to_nat("9007199254740991");
v___x_3770_ = lean_nat_dec_le(v___x_3768_, v___x_3769_);
lean_dec(v___x_3768_);
if (v___x_3770_ == 0)
{
lean_object* v___x_3771_; 
v___x_3771_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3767_);
v___y_3716_ = v___x_3763_;
v___y_3717_ = v___f_3765_;
v___y_3718_ = v___y_3762_;
v___y_3719_ = v___x_3771_;
goto v___jp_3715_;
}
else
{
double v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = l_Float_ofInt(v___x_3767_);
lean_dec(v___x_3767_);
v___x_3773_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3773_, 0, v___x_3772_);
v___y_3716_ = v___x_3763_;
v___y_3717_ = v___f_3765_;
v___y_3718_ = v___y_3762_;
v___y_3719_ = v___x_3773_;
goto v___jp_3715_;
}
}
}
v___jp_3709_:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v_val_3712_);
v___x_3714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3702_, v___y_3711_, v___x_3713_, v___y_3710_);
return v___x_3714_;
}
v___jp_3715_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; lean_object* v___x_3726_; 
v___x_3720_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3720_, 0, v___y_3718_);
v___x_3721_ = lean_unsigned_to_nat(2u);
v___x_3722_ = lean_mk_empty_array_with_capacity(v___x_3721_);
v___x_3723_ = lean_array_push(v___x_3722_, v___y_3719_);
v___x_3724_ = lean_array_push(v___x_3723_, v___x_3720_);
v___x_3725_ = 0;
lean_inc_ref(v___y_3716_);
v___x_3726_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3703_, v___y_3716_, v___x_3724_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
lean_ctor_set_tag(v___x_3729_, 1);
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
v___y_3710_ = v___y_3717_;
v___y_3711_ = v___x_3725_;
v_val_3712_ = v___x_3732_;
goto v___jp_3709_;
}
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
v_a_3735_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3726_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3726_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
lean_ctor_set_tag(v___x_3737_, 0);
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
v___y_3710_ = v___y_3717_;
v___y_3711_ = v___x_3725_;
v_val_3712_ = v___x_3740_;
goto v___jp_3709_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3783_, lean_object* v_snd_3784_, lean_object* v___y_3785_, lean_object* v___f_3786_, lean_object* v___f_3787_, lean_object* v_x_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3783_, v_snd_3784_, v___y_3785_, v___f_3786_, v___f_3787_, v_x_3788_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3791_, lean_object* v___x_3792_, lean_object* v___f_3793_, lean_object* v_request_3794_){
_start:
{
uint8_t v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3796_ = 0;
v___x_3797_ = l_Lasm_Fetch_respond(v_handler_3791_, v_request_3794_);
v___x_3798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3792_, v___x_3796_, v___x_3797_, v___f_3793_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3799_, lean_object* v___x_3800_, lean_object* v___f_3801_, lean_object* v_request_3802_, lean_object* v___y_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3799_, v___x_3800_, v___f_3801_, v_request_3802_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3805_, lean_object* v_x_3806_){
_start:
{
if (lean_obj_tag(v_x_3806_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3816_; 
lean_dec_ref(v___f_3805_);
v_a_3808_ = lean_ctor_get(v_x_3806_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3810_ = v_x_3806_;
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v_x_3806_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3813_);
return v___x_3814_;
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3818_; 
v_a_3817_ = lean_ctor_get(v_x_3806_, 0);
lean_inc(v_a_3817_);
lean_dec_ref_known(v_x_3806_, 1);
v___x_3818_ = lean_apply_2(v___f_3805_, v_a_3817_, lean_box(0));
return v___x_3818_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_3819_, lean_object* v_x_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lasm_Fetch_serveNode___lam__13(v___f_3819_, v_x_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___x_3825_, lean_object* v___f_3826_, lean_object* v___x_3827_, uint8_t v___x_3828_, lean_object* v___f_3829_, lean_object* v_x_3830_){
_start:
{
if (lean_obj_tag(v_x_3830_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3840_; 
lean_dec_ref(v___f_3829_);
lean_dec(v___x_3827_);
lean_dec_ref(v___f_3826_);
lean_dec_ref(v___x_3825_);
lean_dec_ref(v___y_3824_);
lean_dec_ref(v___y_3823_);
v_a_3832_ = lean_ctor_get(v_x_3830_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_x_3830_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3834_ = v_x_3830_;
v_isShared_3835_ = v_isSharedCheck_3840_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v_x_3830_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3840_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3838_; 
v___x_3838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
return v___x_3838_;
}
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3851_; 
v_a_3841_ = lean_ctor_get(v_x_3830_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_x_3830_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3843_ = v_x_3830_;
v_isShared_3844_ = v_isSharedCheck_3851_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v_x_3830_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3851_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; lean_object* v___x_3847_; 
v___x_3845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3845_, 0, v___y_3823_);
lean_ctor_set(v___x_3845_, 1, v___y_3824_);
lean_ctor_set(v___x_3845_, 2, v___x_3825_);
lean_ctor_set(v___x_3845_, 3, v_a_3841_);
lean_ctor_set(v___x_3845_, 4, v___f_3826_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v___x_3845_);
v___x_3847_ = v___x_3843_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3845_);
v___x_3847_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
v___x_3849_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3827_, v___x_3828_, v___x_3848_, v___f_3829_);
return v___x_3849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___x_3854_, lean_object* v___f_3855_, lean_object* v___x_3856_, lean_object* v___x_3857_, lean_object* v___f_3858_, lean_object* v_x_3859_, lean_object* v___y_3860_){
_start:
{
uint8_t v___x_18879__boxed_3861_; lean_object* v_res_3862_; 
v___x_18879__boxed_3861_ = lean_unbox(v___x_3857_);
v_res_3862_ = l_Lasm_Fetch_serveNode___lam__18(v___y_3852_, v___y_3853_, v___x_3854_, v___f_3855_, v___x_3856_, v___x_18879__boxed_3861_, v___f_3858_, v_x_3859_);
return v_res_3862_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_3863_; uint8_t v___x_3864_; uint64_t v___x_3865_; 
v___x_3863_ = 8ULL;
v___x_3864_ = 0;
v___x_3865_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3864_, v___x_3863_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_3866_, lean_object* v_name_3867_, lean_object* v_args_3868_){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; uint64_t v___x_3873_; lean_object* v___x_3874_; 
v___x_3870_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3871_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3871_, 0, v_o_3866_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
lean_inc_ref(v_name_3867_);
v___x_3872_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_name_3867_);
v___x_3873_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_3874_ = l_Lasm_JS_Value_invokeRaw(v___x_3871_, v___x_3872_, v_args_3868_, v___x_3873_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_a_3875_);
lean_dec_ref_known(v___x_3874_, 1);
v___x_3876_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3877_ = lean_string_append(v___x_3876_, v_name_3867_);
lean_dec_ref(v_name_3867_);
v___x_3878_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3877_, v_a_3875_);
lean_dec(v_a_3875_);
lean_dec_ref(v___x_3877_);
return v___x_3878_;
}
else
{
lean_dec_ref(v_name_3867_);
return v___x_3874_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_3879_, lean_object* v_name_3880_, lean_object* v_args_3881_, lean_object* v_a_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_3879_, v_name_3880_, v_args_3881_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_3885_, uint8_t v___x_3886_, lean_object* v___f_3887_, lean_object* v___x_3888_, lean_object* v_a_3889_, lean_object* v_x_3890_){
_start:
{
lean_object* v_val_3893_; 
if (lean_obj_tag(v_x_3890_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3904_; 
lean_dec(v_a_3889_);
lean_dec_ref(v___f_3887_);
lean_dec(v___x_3885_);
v_a_3896_ = lean_ctor_get(v_x_3890_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v_x_3890_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3898_ = v_x_3890_;
v_isShared_3899_ = v_isSharedCheck_3904_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v_x_3890_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3904_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
lean_object* v___x_3902_; 
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
return v___x_3902_;
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3923_; 
v_a_3905_ = lean_ctor_get(v_x_3890_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v_x_3890_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3907_ = v_x_3890_;
v_isShared_3908_ = v_isSharedCheck_3923_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v_x_3890_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3923_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3909_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_3910_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3911_, 0, v_a_3905_);
lean_ctor_set(v___x_3911_, 1, v___x_3910_);
v___x_3912_ = lean_mk_empty_array_with_capacity(v___x_3888_);
v___x_3913_ = lean_array_push(v___x_3912_, v___x_3911_);
v___x_3914_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_3889_, v___x_3909_, v___x_3913_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3917_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3914_, 1);
if (v_isShared_3908_ == 0)
{
lean_ctor_set(v___x_3907_, 0, v_a_3915_);
v___x_3917_ = v___x_3907_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3915_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
v_val_3893_ = v___x_3917_;
goto v___jp_3892_;
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; 
v_a_3919_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3919_);
lean_dec_ref_known(v___x_3914_, 1);
if (v_isShared_3908_ == 0)
{
lean_ctor_set_tag(v___x_3907_, 0);
lean_ctor_set(v___x_3907_, 0, v_a_3919_);
v___x_3921_ = v___x_3907_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v_a_3919_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
v_val_3893_ = v___x_3921_;
goto v___jp_3892_;
}
}
}
}
v___jp_3892_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3894_, 0, v_val_3893_);
v___x_3895_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3885_, v___x_3886_, v___x_3894_, v___f_3887_);
return v___x_3895_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_3924_, lean_object* v___x_3925_, lean_object* v___f_3926_, lean_object* v___x_3927_, lean_object* v_a_3928_, lean_object* v_x_3929_, lean_object* v___y_3930_){
_start:
{
uint8_t v___x_18978__boxed_3931_; lean_object* v_res_3932_; 
v___x_18978__boxed_3931_ = lean_unbox(v___x_3925_);
v_res_3932_ = l_Lasm_Fetch_serveNode___lam__14(v___x_3924_, v___x_18978__boxed_3931_, v___f_3926_, v___x_3927_, v_a_3928_, v_x_3929_);
lean_dec(v___x_3927_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___x_3935_, lean_object* v___x_3936_, lean_object* v___x_3937_, uint8_t v___x_3938_, lean_object* v___f_3939_, lean_object* v_x_3940_){
_start:
{
if (lean_obj_tag(v_x_3940_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3950_; 
lean_dec_ref(v___f_3939_);
lean_dec(v___x_3937_);
lean_dec_ref(v___x_3936_);
lean_dec_ref(v___x_3935_);
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3933_);
v_a_3942_ = lean_ctor_get(v_x_3940_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_x_3940_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3944_ = v_x_3940_;
v_isShared_3945_ = v_isSharedCheck_3950_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v_x_3940_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3950_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
lean_object* v___x_3948_; 
v___x_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3947_);
return v___x_3948_;
}
}
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3961_; 
v_a_3951_ = lean_ctor_get(v_x_3940_, 0);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_x_3940_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3953_ = v_x_3940_;
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v_x_3940_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3955_, 0, v___y_3933_);
lean_ctor_set(v___x_3955_, 1, v___y_3934_);
lean_ctor_set(v___x_3955_, 2, v___x_3935_);
lean_ctor_set(v___x_3955_, 3, v___x_3936_);
lean_ctor_set(v___x_3955_, 4, v_a_3951_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 0, v___x_3955_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
v___x_3959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3937_, v___x_3938_, v___x_3958_, v___f_3939_);
return v___x_3959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___x_3964_, lean_object* v___x_3965_, lean_object* v___x_3966_, lean_object* v___x_3967_, lean_object* v___f_3968_, lean_object* v_x_3969_, lean_object* v___y_3970_){
_start:
{
uint8_t v___x_19068__boxed_3971_; lean_object* v_res_3972_; 
v___x_19068__boxed_3971_ = lean_unbox(v___x_3967_);
v_res_3972_ = l_Lasm_Fetch_serveNode___lam__15(v___y_3962_, v___y_3963_, v___x_3964_, v___x_3965_, v___x_3966_, v___x_19068__boxed_3971_, v___f_3968_, v_x_3969_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_3973_, uint8_t v___x_3974_, lean_object* v___f_3975_, lean_object* v_x_3976_){
_start:
{
lean_object* v_val_3979_; 
if (lean_obj_tag(v_x_3976_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3990_; 
lean_dec_ref(v___f_3975_);
lean_dec(v___x_3973_);
v_a_3982_ = lean_ctor_get(v_x_3976_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v_x_3976_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3984_ = v_x_3976_;
v_isShared_3985_ = v_isSharedCheck_3990_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v_x_3976_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3990_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
lean_object* v___x_3988_; 
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
return v___x_3988_;
}
}
}
else
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4004_; 
v_a_3991_ = lean_ctor_get(v_x_3976_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v_x_3976_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3993_ = v_x_3976_;
v_isShared_3994_ = v_isSharedCheck_4004_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v_x_3976_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4004_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3995_; 
v___x_3995_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_3991_);
if (lean_obj_tag(v___x_3995_) == 0)
{
lean_object* v_a_3996_; lean_object* v___x_3998_; 
v_a_3996_ = lean_ctor_get(v___x_3995_, 0);
lean_inc(v_a_3996_);
lean_dec_ref_known(v___x_3995_, 1);
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 0, v_a_3996_);
v___x_3998_ = v___x_3993_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3996_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
v_val_3979_ = v___x_3998_;
goto v___jp_3978_;
}
}
else
{
lean_object* v_a_4000_; lean_object* v___x_4002_; 
v_a_4000_ = lean_ctor_get(v___x_3995_, 0);
lean_inc(v_a_4000_);
lean_dec_ref_known(v___x_3995_, 1);
if (v_isShared_3994_ == 0)
{
lean_ctor_set_tag(v___x_3993_, 0);
lean_ctor_set(v___x_3993_, 0, v_a_4000_);
v___x_4002_ = v___x_3993_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_4000_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
v_val_3979_ = v___x_4002_;
goto v___jp_3978_;
}
}
}
}
v___jp_3978_:
{
lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3980_, 0, v_val_3979_);
v___x_3981_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3973_, v___x_3974_, v___x_3980_, v___f_3975_);
return v___x_3981_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4005_, lean_object* v___x_4006_, lean_object* v___f_4007_, lean_object* v_x_4008_, lean_object* v___y_4009_){
_start:
{
uint8_t v___x_19131__boxed_4010_; lean_object* v_res_4011_; 
v___x_19131__boxed_4010_ = lean_unbox(v___x_4006_);
v_res_4011_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4005_, v___x_19131__boxed_4010_, v___f_4007_, v_x_4008_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4012_, lean_object* v_range_4013_, lean_object* v_b_4014_, lean_object* v_i_4015_){
_start:
{
lean_object* v_stop_4016_; lean_object* v_step_4017_; uint8_t v___x_4018_; 
v_stop_4016_ = lean_ctor_get(v_range_4013_, 1);
v_step_4017_ = lean_ctor_get(v_range_4013_, 2);
v___x_4018_ = lean_nat_dec_lt(v_i_4015_, v_stop_4016_);
if (v___x_4018_ == 0)
{
lean_dec(v_i_4015_);
return v_b_4014_;
}
else
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4019_ = lean_unsigned_to_nat(2u);
v___x_4020_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4021_ = lean_unsigned_to_nat(1u);
v___x_4022_ = lean_nat_mul(v___x_4019_, v_i_4015_);
v___x_4023_ = lean_array_get_borrowed(v___x_4020_, v___y_4012_, v___x_4022_);
v___x_4024_ = lean_nat_add(v___x_4022_, v___x_4021_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_array_get_borrowed(v___x_4020_, v___y_4012_, v___x_4024_);
lean_dec(v___x_4024_);
lean_inc(v___x_4025_);
lean_inc(v___x_4023_);
v___x_4026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4023_);
lean_ctor_set(v___x_4026_, 1, v___x_4025_);
v___x_4027_ = lean_array_push(v_b_4014_, v___x_4026_);
v___x_4028_ = lean_nat_add(v_i_4015_, v_step_4017_);
lean_dec(v_i_4015_);
v_b_4014_ = v___x_4027_;
v_i_4015_ = v___x_4028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4030_, lean_object* v_range_4031_, lean_object* v_b_4032_, lean_object* v_i_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4030_, v_range_4031_, v_b_4032_, v_i_4033_);
lean_dec_ref(v_range_4031_);
lean_dec_ref(v___y_4030_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4035_, size_t v_i_4036_, size_t v_stop_4037_, lean_object* v_b_4038_){
_start:
{
lean_object* v___y_4040_; uint8_t v___x_4044_; 
v___x_4044_ = lean_usize_dec_eq(v_i_4036_, v_stop_4037_);
if (v___x_4044_ == 0)
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_array_uget_borrowed(v_as_4035_, v_i_4036_);
if (lean_obj_tag(v___x_4045_) == 4)
{
lean_object* v_s_4046_; lean_object* v___x_4047_; 
v_s_4046_ = lean_ctor_get(v___x_4045_, 0);
lean_inc_ref(v_s_4046_);
v___x_4047_ = lean_array_push(v_b_4038_, v_s_4046_);
v___y_4040_ = v___x_4047_;
goto v___jp_4039_;
}
else
{
v___y_4040_ = v_b_4038_;
goto v___jp_4039_;
}
}
else
{
return v_b_4038_;
}
v___jp_4039_:
{
size_t v___x_4041_; size_t v___x_4042_; 
v___x_4041_ = ((size_t)1ULL);
v___x_4042_ = lean_usize_add(v_i_4036_, v___x_4041_);
v_i_4036_ = v___x_4042_;
v_b_4038_ = v___y_4040_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4048_, lean_object* v_i_4049_, lean_object* v_stop_4050_, lean_object* v_b_4051_){
_start:
{
size_t v_i_boxed_4052_; size_t v_stop_boxed_4053_; lean_object* v_res_4054_; 
v_i_boxed_4052_ = lean_unbox_usize(v_i_4049_);
lean_dec(v_i_4049_);
v_stop_boxed_4053_ = lean_unbox_usize(v_stop_4050_);
lean_dec(v_stop_4050_);
v_res_4054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4048_, v_i_boxed_4052_, v_stop_boxed_4053_, v_b_4051_);
lean_dec_ref(v_as_4048_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4057_, lean_object* v_start_4058_, lean_object* v_stop_4059_){
_start:
{
lean_object* v___x_4060_; uint8_t v___x_4061_; 
v___x_4060_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4061_ = lean_nat_dec_lt(v_start_4058_, v_stop_4059_);
if (v___x_4061_ == 0)
{
return v___x_4060_;
}
else
{
lean_object* v___x_4062_; uint8_t v___x_4063_; 
v___x_4062_ = lean_array_get_size(v_as_4057_);
v___x_4063_ = lean_nat_dec_le(v_stop_4059_, v___x_4062_);
if (v___x_4063_ == 0)
{
uint8_t v___x_4064_; 
v___x_4064_ = lean_nat_dec_lt(v_start_4058_, v___x_4062_);
if (v___x_4064_ == 0)
{
return v___x_4060_;
}
else
{
size_t v___x_4065_; size_t v___x_4066_; lean_object* v___x_4067_; 
v___x_4065_ = lean_usize_of_nat(v_start_4058_);
v___x_4066_ = lean_usize_of_nat(v___x_4062_);
v___x_4067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4057_, v___x_4065_, v___x_4066_, v___x_4060_);
return v___x_4067_;
}
}
else
{
size_t v___x_4068_; size_t v___x_4069_; lean_object* v___x_4070_; 
v___x_4068_ = lean_usize_of_nat(v_start_4058_);
v___x_4069_ = lean_usize_of_nat(v_stop_4059_);
v___x_4070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4057_, v___x_4068_, v___x_4069_, v___x_4060_);
return v___x_4070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4071_, lean_object* v_start_4072_, lean_object* v_stop_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4071_, v_start_4072_, v_stop_4073_);
lean_dec(v_stop_4073_);
lean_dec(v_start_4072_);
lean_dec_ref(v_as_4071_);
return v_res_4074_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4077_, size_t v_i_4078_, size_t v_stop_4079_){
_start:
{
uint8_t v___x_4080_; 
v___x_4080_ = lean_usize_dec_eq(v_i_4078_, v_stop_4079_);
if (v___x_4080_ == 0)
{
lean_object* v___x_4081_; lean_object* v_fst_4082_; uint8_t v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; uint8_t v___x_4086_; 
v___x_4081_ = lean_array_uget_borrowed(v_as_4077_, v_i_4078_);
v_fst_4082_ = lean_ctor_get(v___x_4081_, 0);
v___x_4083_ = 1;
lean_inc(v_fst_4082_);
v___x_4084_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4082_);
v___x_4085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4086_ = lean_string_dec_eq(v___x_4084_, v___x_4085_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4087_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4088_ = lean_string_dec_eq(v___x_4084_, v___x_4087_);
lean_dec_ref(v___x_4084_);
if (v___x_4088_ == 0)
{
size_t v___x_4089_; size_t v___x_4090_; 
v___x_4089_ = ((size_t)1ULL);
v___x_4090_ = lean_usize_add(v_i_4078_, v___x_4089_);
v_i_4078_ = v___x_4090_;
goto _start;
}
else
{
return v___x_4083_;
}
}
else
{
lean_dec_ref(v___x_4084_);
return v___x_4083_;
}
}
else
{
uint8_t v___x_4092_; 
v___x_4092_ = 0;
return v___x_4092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4093_, lean_object* v_i_4094_, lean_object* v_stop_4095_){
_start:
{
size_t v_i_boxed_4096_; size_t v_stop_boxed_4097_; uint8_t v_res_4098_; lean_object* v_r_4099_; 
v_i_boxed_4096_ = lean_unbox_usize(v_i_4094_);
lean_dec(v_i_4094_);
v_stop_boxed_4097_ = lean_unbox_usize(v_stop_4095_);
lean_dec(v_stop_4095_);
v_res_4098_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4093_, v_i_boxed_4096_, v_stop_boxed_4097_);
lean_dec_ref(v_as_4093_);
v_r_4099_ = lean_box(v_res_4098_);
return v_r_4099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4101_, size_t v_sz_4102_, size_t v_i_4103_, lean_object* v_b_4104_){
_start:
{
uint8_t v___x_4105_; 
v___x_4105_ = lean_usize_dec_lt(v_i_4103_, v_sz_4102_);
if (v___x_4105_ == 0)
{
lean_inc_ref(v_b_4104_);
return v_b_4104_;
}
else
{
lean_object* v_a_4106_; lean_object* v_fst_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; uint8_t v___x_4111_; 
v_a_4106_ = lean_array_uget_borrowed(v_as_4101_, v_i_4103_);
v_fst_4107_ = lean_ctor_get(v_a_4106_, 0);
v___x_4108_ = lean_box(0);
lean_inc(v_fst_4107_);
v___x_4109_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4107_);
v___x_4110_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4111_ = lean_string_dec_eq(v___x_4109_, v___x_4110_);
lean_dec_ref(v___x_4109_);
if (v___x_4111_ == 0)
{
lean_object* v___x_4112_; size_t v___x_4113_; size_t v___x_4114_; 
v___x_4112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4113_ = ((size_t)1ULL);
v___x_4114_ = lean_usize_add(v_i_4103_, v___x_4113_);
v_i_4103_ = v___x_4114_;
v_b_4104_ = v___x_4112_;
goto _start;
}
else
{
lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
lean_inc(v_a_4106_);
v___x_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4116_, 0, v_a_4106_);
v___x_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
lean_ctor_set(v___x_4118_, 1, v___x_4108_);
return v___x_4118_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4119_, lean_object* v_sz_4120_, lean_object* v_i_4121_, lean_object* v_b_4122_){
_start:
{
size_t v_sz_boxed_4123_; size_t v_i_boxed_4124_; lean_object* v_res_4125_; 
v_sz_boxed_4123_ = lean_unbox_usize(v_sz_4120_);
lean_dec(v_sz_4120_);
v_i_boxed_4124_ = lean_unbox_usize(v_i_4121_);
lean_dec(v_i_4121_);
v_res_4125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4119_, v_sz_boxed_4123_, v_i_boxed_4124_, v_b_4122_);
lean_dec_ref(v_b_4122_);
lean_dec_ref(v_as_4119_);
return v_res_4125_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4128_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4129_ = lean_string_utf8_byte_size(v___x_4128_);
return v___x_4129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4132_, lean_object* v___f_4133_, lean_object* v___f_4134_, lean_object* v_handler_4135_, lean_object* v_options_4136_, lean_object* v_a_4137_, lean_object* v_fst_4138_, lean_object* v_a_4139_, lean_object* v___y_4140_, lean_object* v___x_4141_, lean_object* v___x_4142_, lean_object* v___x_4143_, lean_object* v_x_4144_){
_start:
{
lean_object* v___y_4147_; uint8_t v___y_4148_; lean_object* v___y_4149_; lean_object* v_val_4150_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; uint8_t v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; uint8_t v___y_4229_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; 
if (lean_obj_tag(v_x_4144_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4306_; 
lean_dec(v___y_4140_);
lean_dec(v_a_4139_);
lean_dec(v_fst_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_options_4136_);
lean_dec_ref(v_handler_4135_);
lean_dec_ref(v___f_4134_);
lean_dec_ref(v___f_4133_);
lean_dec(v_snd_4132_);
v_a_4298_ = lean_ctor_get(v_x_4144_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v_x_4144_);
if (v_isSharedCheck_4306_ == 0)
{
v___x_4300_ = v_x_4144_;
v_isShared_4301_ = v_isSharedCheck_4306_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v_x_4144_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4306_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v_a_4298_);
v___x_4303_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
lean_object* v___x_4304_; 
v___x_4304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4303_);
return v___x_4304_;
}
}
}
else
{
lean_object* v_a_4307_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4318_; lean_object* v___x_4322_; 
v_a_4307_ = lean_ctor_get(v_x_4144_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v_x_4144_, 1);
v___x_4322_ = l_Lasm_JS_Data_field(v_a_4307_, v___x_4143_);
if (lean_obj_tag(v___x_4322_) == 4)
{
lean_object* v_s_4323_; 
v_s_4323_ = lean_ctor_get(v___x_4322_, 0);
lean_inc_ref(v_s_4323_);
lean_dec_ref_known(v___x_4322_, 1);
v___y_4318_ = v_s_4323_;
goto v___jp_4317_;
}
else
{
lean_object* v___x_4324_; 
lean_dec(v___x_4322_);
v___x_4324_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4318_ = v___x_4324_;
goto v___jp_4317_;
}
v___jp_4308_:
{
lean_object* v___x_4311_; 
v___x_4311_ = l_Lasm_JS_Data_field(v_a_4307_, v___x_4141_);
lean_dec(v_a_4307_);
if (lean_obj_tag(v___x_4311_) == 7)
{
lean_object* v_items_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v_items_4312_ = lean_ctor_get(v___x_4311_, 0);
lean_inc_ref(v_items_4312_);
lean_dec_ref_known(v___x_4311_, 1);
v___x_4313_ = lean_unsigned_to_nat(0u);
v___x_4314_ = lean_array_get_size(v_items_4312_);
v___x_4315_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4312_, v___x_4313_, v___x_4314_);
lean_dec_ref(v_items_4312_);
lean_inc_ref(v___y_4309_);
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4309_;
v___y_4278_ = v___y_4310_;
v___y_4279_ = v___x_4315_;
goto v___jp_4275_;
}
else
{
lean_object* v___x_4316_; 
lean_dec(v___x_4311_);
v___x_4316_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4309_);
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4309_;
v___y_4278_ = v___y_4310_;
v___y_4279_ = v___x_4316_;
goto v___jp_4275_;
}
}
v___jp_4317_:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Lasm_JS_Data_field(v_a_4307_, v___x_4142_);
if (lean_obj_tag(v___x_4319_) == 4)
{
lean_object* v_s_4320_; 
v_s_4320_ = lean_ctor_get(v___x_4319_, 0);
lean_inc_ref(v_s_4320_);
lean_dec_ref_known(v___x_4319_, 1);
v___y_4309_ = v___y_4318_;
v___y_4310_ = v_s_4320_;
goto v___jp_4308_;
}
else
{
lean_object* v___x_4321_; 
lean_dec(v___x_4319_);
v___x_4321_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4309_ = v___y_4318_;
v___y_4310_ = v___x_4321_;
goto v___jp_4308_;
}
}
}
v___jp_4146_:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v_val_4150_);
v___x_4152_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4147_, v___y_4148_, v___x_4151_, v___y_4149_);
return v___x_4152_;
}
v___jp_4153_:
{
if (v___y_4162_ == 0)
{
lean_object* v___x_4168_; lean_object* v___f_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
lean_dec_ref(v___y_4166_);
lean_dec(v___y_4161_);
lean_dec(v___y_4159_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec_ref(v___y_4154_);
lean_dec(v_a_4139_);
lean_dec(v_fst_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_options_4136_);
v___x_4168_ = l_ByteArray_empty;
v___f_4169_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4170_, 0, v___y_4164_);
lean_ctor_set(v___x_4170_, 1, v___y_4167_);
lean_ctor_set(v___x_4170_, 2, v___y_4165_);
lean_ctor_set(v___x_4170_, 3, v___x_4168_);
lean_ctor_set(v___x_4170_, 4, v___f_4169_);
v___x_4171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4170_);
v___x_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4171_);
v___x_4173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4160_, v___y_4162_, v___x_4172_, v___y_4163_);
return v___x_4173_;
}
else
{
lean_object* v___x_4174_; lean_object* v___f_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; uint8_t v___x_4179_; 
lean_dec_ref(v___y_4165_);
lean_dec_ref(v___y_4163_);
v___x_4174_ = l_ByteArray_empty;
v___f_4175_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4167_);
v___x_4176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4176_, 0, v___y_4164_);
lean_ctor_set(v___x_4176_, 1, v___y_4167_);
lean_ctor_set(v___x_4176_, 2, v___y_4166_);
lean_ctor_set(v___x_4176_, 3, v___x_4174_);
lean_ctor_set(v___x_4176_, 4, v___f_4175_);
v___x_4177_ = l_Lasm_Fetch_Request_path(v___x_4176_);
v___x_4178_ = lean_apply_1(v_options_4136_, v___x_4177_);
v___x_4179_ = lean_unbox(v___x_4178_);
if (v___x_4179_ == 0)
{
lean_object* v___f_4180_; lean_object* v___f_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; lean_object* v___x_4186_; 
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4155_);
lean_dec(v_a_4139_);
lean_inc(v___y_4159_);
v___f_4180_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4180_, 0, v___y_4156_);
lean_closure_set(v___f_4180_, 1, v___y_4167_);
lean_closure_set(v___f_4180_, 2, v___y_4154_);
lean_closure_set(v___f_4180_, 3, v___f_4175_);
lean_closure_set(v___f_4180_, 4, v___y_4159_);
lean_closure_set(v___f_4180_, 5, v___x_4178_);
lean_closure_set(v___f_4180_, 6, v___y_4157_);
v___f_4181_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4181_, 0, v___y_4159_);
lean_closure_set(v___f_4181_, 1, v___x_4178_);
lean_closure_set(v___f_4181_, 2, v___f_4180_);
lean_closure_set(v___f_4181_, 3, v___y_4158_);
lean_closure_set(v___f_4181_, 4, v_a_4137_);
v___x_4182_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4183_ = lean_mk_empty_array_with_capacity(v___y_4160_);
v___x_4184_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4138_, v___x_4182_, v___x_4183_);
v___x_4185_ = lean_unbox(v___x_4178_);
v___x_4186_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4160_, v___x_4185_, v___x_4184_, v___f_4181_);
return v___x_4186_;
}
else
{
uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___f_4189_; lean_object* v___x_4190_; lean_object* v___f_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec(v_a_4137_);
v___x_4187_ = 0;
v___x_4188_ = lean_box(v___x_4187_);
lean_inc(v___y_4159_);
v___f_4189_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4189_, 0, v___y_4156_);
lean_closure_set(v___f_4189_, 1, v___y_4167_);
lean_closure_set(v___f_4189_, 2, v___y_4154_);
lean_closure_set(v___f_4189_, 3, v___x_4174_);
lean_closure_set(v___f_4189_, 4, v___y_4159_);
lean_closure_set(v___f_4189_, 5, v___x_4188_);
lean_closure_set(v___f_4189_, 6, v___y_4155_);
v___x_4190_ = lean_box(v___x_4187_);
v___f_4191_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4191_, 0, v___y_4159_);
lean_closure_set(v___f_4191_, 1, v___x_4190_);
lean_closure_set(v___f_4191_, 2, v___f_4189_);
v___x_4192_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4193_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4194_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4194_, 0, v_fst_4138_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = lean_mk_empty_array_with_capacity(v___y_4161_);
lean_dec(v___y_4161_);
v___x_4196_ = lean_array_push(v___x_4195_, v___x_4194_);
v___x_4197_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4139_, v___x_4192_, v___x_4196_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4205_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4200_ = v___x_4197_;
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4197_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
lean_ctor_set_tag(v___x_4200_, 1);
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
v___y_4147_ = v___y_4160_;
v___y_4148_ = v___x_4187_;
v___y_4149_ = v___f_4191_;
v_val_4150_ = v___x_4203_;
goto v___jp_4146_;
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
v_a_4206_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4197_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4197_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
lean_ctor_set_tag(v___x_4208_, 0);
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
v___y_4147_ = v___y_4160_;
v___y_4148_ = v___x_4187_;
v___y_4149_ = v___f_4191_;
v_val_4150_ = v___x_4211_;
goto v___jp_4146_;
}
}
}
}
}
}
v___jp_4214_:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; 
v___x_4230_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4231_ = lean_string_utf8_byte_size(v___y_4226_);
v___x_4232_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4233_ = lean_nat_dec_le(v___x_4232_, v___x_4231_);
if (v___x_4233_ == 0)
{
lean_dec_ref(v___y_4224_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4221_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4229_;
v___y_4163_ = v___y_4223_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___y_4226_;
goto v___jp_4153_;
}
else
{
uint8_t v___x_4234_; 
v___x_4234_ = lean_string_memcmp(v___y_4226_, v___x_4230_, v___y_4221_, v___y_4221_, v___x_4232_);
if (v___x_4234_ == 0)
{
lean_dec_ref(v___y_4224_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4221_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4229_;
v___y_4163_ = v___y_4223_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___y_4226_;
goto v___jp_4153_;
}
else
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4235_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4236_ = lean_string_append(v___x_4235_, v___y_4224_);
lean_dec_ref(v___y_4224_);
v___x_4237_ = lean_string_append(v___x_4236_, v___y_4226_);
lean_dec_ref(v___y_4226_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4221_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4229_;
v___y_4163_ = v___y_4223_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___x_4237_;
goto v___jp_4153_;
}
}
}
v___jp_4238_:
{
lean_object* v___x_4253_; uint8_t v___x_4254_; 
v___x_4253_ = lean_array_get_size(v___y_4249_);
v___x_4254_ = lean_nat_dec_lt(v___y_4245_, v___x_4253_);
if (v___x_4254_ == 0)
{
v___y_4215_ = v___y_4239_;
v___y_4216_ = v___y_4240_;
v___y_4217_ = v___y_4241_;
v___y_4218_ = v___y_4242_;
v___y_4219_ = v___y_4243_;
v___y_4220_ = v___y_4244_;
v___y_4221_ = v___y_4245_;
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4252_;
v___y_4225_ = v___y_4248_;
v___y_4226_ = v___y_4250_;
v___y_4227_ = v___y_4249_;
v___y_4228_ = v___y_4251_;
v___y_4229_ = v___x_4254_;
goto v___jp_4214_;
}
else
{
if (v___x_4254_ == 0)
{
v___y_4215_ = v___y_4239_;
v___y_4216_ = v___y_4240_;
v___y_4217_ = v___y_4241_;
v___y_4218_ = v___y_4242_;
v___y_4219_ = v___y_4243_;
v___y_4220_ = v___y_4244_;
v___y_4221_ = v___y_4245_;
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4252_;
v___y_4225_ = v___y_4248_;
v___y_4226_ = v___y_4250_;
v___y_4227_ = v___y_4249_;
v___y_4228_ = v___y_4251_;
v___y_4229_ = v___x_4254_;
goto v___jp_4214_;
}
else
{
size_t v___x_4255_; size_t v___x_4256_; uint8_t v___x_4257_; 
v___x_4255_ = ((size_t)0ULL);
v___x_4256_ = lean_usize_of_nat(v___x_4253_);
v___x_4257_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4249_, v___x_4255_, v___x_4256_);
v___y_4215_ = v___y_4239_;
v___y_4216_ = v___y_4240_;
v___y_4217_ = v___y_4241_;
v___y_4218_ = v___y_4242_;
v___y_4219_ = v___y_4243_;
v___y_4220_ = v___y_4244_;
v___y_4221_ = v___y_4245_;
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4252_;
v___y_4225_ = v___y_4248_;
v___y_4226_ = v___y_4250_;
v___y_4227_ = v___y_4249_;
v___y_4228_ = v___y_4251_;
v___y_4229_ = v___x_4257_;
goto v___jp_4214_;
}
}
}
v___jp_4258_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4272_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4273_ = l_Nat_reprFast(v___y_4140_);
v___x_4274_ = lean_string_append(v___x_4272_, v___x_4273_);
lean_dec_ref(v___x_4273_);
v___y_4239_ = v___y_4260_;
v___y_4240_ = v___y_4261_;
v___y_4241_ = v___y_4262_;
v___y_4242_ = v___y_4263_;
v___y_4243_ = v___y_4264_;
v___y_4244_ = v___y_4265_;
v___y_4245_ = v___y_4266_;
v___y_4246_ = v___y_4267_;
v___y_4247_ = v___y_4259_;
v___y_4248_ = v___y_4268_;
v___y_4249_ = v___y_4270_;
v___y_4250_ = v___y_4269_;
v___y_4251_ = v___y_4271_;
v___y_4252_ = v___x_4274_;
goto v___jp_4238_;
}
v___jp_4275_:
{
lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; size_t v_sz_4288_; size_t v___x_4289_; lean_object* v___x_4290_; lean_object* v_fst_4291_; lean_object* v___f_4292_; lean_object* v___f_4293_; lean_object* v___f_4294_; 
v___x_4280_ = lean_unsigned_to_nat(0u);
v___x_4281_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4282_ = lean_array_get_size(v___y_4279_);
v___x_4283_ = lean_unsigned_to_nat(1u);
v___x_4284_ = lean_nat_shiftr(v___x_4282_, v___x_4283_);
v___x_4285_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4280_);
lean_ctor_set(v___x_4285_, 1, v___x_4284_);
lean_ctor_set(v___x_4285_, 2, v___x_4283_);
v___x_4286_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4279_, v___x_4285_, v___x_4281_, v___x_4280_);
lean_dec_ref_known(v___x_4285_, 3);
lean_dec_ref(v___y_4279_);
v___x_4287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4288_ = lean_array_size(v___x_4286_);
v___x_4289_ = ((size_t)0ULL);
v___x_4290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4286_, v_sz_4288_, v___x_4289_, v___x_4287_);
v_fst_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_fst_4291_);
lean_dec_ref(v___x_4290_);
lean_inc_ref(v___y_4276_);
v___f_4292_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4292_, 0, v___x_4280_);
lean_closure_set(v___f_4292_, 1, v_snd_4132_);
lean_closure_set(v___f_4292_, 2, v___y_4276_);
lean_closure_set(v___f_4292_, 3, v___f_4133_);
lean_closure_set(v___f_4292_, 4, v___f_4134_);
v___f_4293_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4293_, 0, v_handler_4135_);
lean_closure_set(v___f_4293_, 1, v___x_4280_);
lean_closure_set(v___f_4293_, 2, v___f_4292_);
v___f_4294_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4294_, 0, v___f_4293_);
if (lean_obj_tag(v_fst_4291_) == 0)
{
lean_inc_ref(v___x_4286_);
lean_inc_ref_n(v___f_4294_, 2);
v___y_4259_ = v___f_4294_;
v___y_4260_ = v___x_4286_;
v___y_4261_ = v___f_4294_;
v___y_4262_ = v___y_4276_;
v___y_4263_ = v___f_4294_;
v___y_4264_ = v___x_4283_;
v___y_4265_ = v___x_4280_;
v___y_4266_ = v___x_4280_;
v___y_4267_ = v___x_4283_;
v___y_4268_ = v___y_4277_;
v___y_4269_ = v___y_4278_;
v___y_4270_ = v___x_4286_;
v___y_4271_ = v___x_4281_;
goto v___jp_4258_;
}
else
{
lean_object* v_val_4295_; 
v_val_4295_ = lean_ctor_get(v_fst_4291_, 0);
lean_inc(v_val_4295_);
lean_dec_ref_known(v_fst_4291_, 1);
if (lean_obj_tag(v_val_4295_) == 0)
{
lean_inc_ref(v___x_4286_);
lean_inc_ref_n(v___f_4294_, 2);
v___y_4259_ = v___f_4294_;
v___y_4260_ = v___x_4286_;
v___y_4261_ = v___f_4294_;
v___y_4262_ = v___y_4276_;
v___y_4263_ = v___f_4294_;
v___y_4264_ = v___x_4283_;
v___y_4265_ = v___x_4280_;
v___y_4266_ = v___x_4280_;
v___y_4267_ = v___x_4283_;
v___y_4268_ = v___y_4277_;
v___y_4269_ = v___y_4278_;
v___y_4270_ = v___x_4286_;
v___y_4271_ = v___x_4281_;
goto v___jp_4258_;
}
else
{
lean_object* v_val_4296_; lean_object* v_snd_4297_; 
lean_dec(v___y_4140_);
v_val_4296_ = lean_ctor_get(v_val_4295_, 0);
lean_inc(v_val_4296_);
lean_dec_ref_known(v_val_4295_, 1);
v_snd_4297_ = lean_ctor_get(v_val_4296_, 1);
lean_inc(v_snd_4297_);
lean_dec(v_val_4296_);
lean_inc_ref_n(v___f_4294_, 2);
lean_inc_ref(v___x_4286_);
v___y_4239_ = v___x_4286_;
v___y_4240_ = v___f_4294_;
v___y_4241_ = v___y_4276_;
v___y_4242_ = v___f_4294_;
v___y_4243_ = v___x_4283_;
v___y_4244_ = v___x_4280_;
v___y_4245_ = v___x_4280_;
v___y_4246_ = v___x_4283_;
v___y_4247_ = v___f_4294_;
v___y_4248_ = v___y_4277_;
v___y_4249_ = v___x_4286_;
v___y_4250_ = v___y_4278_;
v___y_4251_ = v___x_4281_;
v___y_4252_ = v_snd_4297_;
goto v___jp_4238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4325_, lean_object* v___f_4326_, lean_object* v___f_4327_, lean_object* v_handler_4328_, lean_object* v_options_4329_, lean_object* v_a_4330_, lean_object* v_fst_4331_, lean_object* v_a_4332_, lean_object* v___y_4333_, lean_object* v___x_4334_, lean_object* v___x_4335_, lean_object* v___x_4336_, lean_object* v_x_4337_, lean_object* v___y_4338_){
_start:
{
lean_object* v_res_4339_; 
v_res_4339_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4325_, v___f_4326_, v___f_4327_, v_handler_4328_, v_options_4329_, v_a_4330_, v_fst_4331_, v_a_4332_, v___y_4333_, v___x_4334_, v___x_4335_, v___x_4336_, v_x_4337_);
lean_dec_ref(v___x_4336_);
lean_dec_ref(v___x_4335_);
lean_dec_ref(v___x_4334_);
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4349_, lean_object* v___f_4350_, lean_object* v_handler_4351_, lean_object* v_options_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_, lean_object* v___y_4355_, lean_object* v_____x_4356_){
_start:
{
lean_object* v_fst_4358_; lean_object* v_snd_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___f_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; uint8_t v___x_4366_; lean_object* v_val_4368_; lean_object* v___x_4371_; 
v_fst_4358_ = lean_ctor_get(v_____x_4356_, 0);
lean_inc_n(v_fst_4358_, 2);
v_snd_4359_ = lean_ctor_get(v_____x_4356_, 1);
lean_inc(v_snd_4359_);
lean_dec_ref(v_____x_4356_);
v___x_4360_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4361_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4362_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4363_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4363_, 0, v_snd_4359_);
lean_closure_set(v___f_4363_, 1, v___f_4349_);
lean_closure_set(v___f_4363_, 2, v___f_4350_);
lean_closure_set(v___f_4363_, 3, v_handler_4351_);
lean_closure_set(v___f_4363_, 4, v_options_4352_);
lean_closure_set(v___f_4363_, 5, v_a_4353_);
lean_closure_set(v___f_4363_, 6, v_fst_4358_);
lean_closure_set(v___f_4363_, 7, v_a_4354_);
lean_closure_set(v___f_4363_, 8, v___y_4355_);
lean_closure_set(v___f_4363_, 9, v___x_4362_);
lean_closure_set(v___f_4363_, 10, v___x_4361_);
lean_closure_set(v___f_4363_, 11, v___x_4360_);
v___x_4364_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4365_ = lean_unsigned_to_nat(0u);
v___x_4366_ = 0;
v___x_4371_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4358_, v___x_4364_);
if (lean_obj_tag(v___x_4371_) == 0)
{
lean_object* v_a_4372_; lean_object* v___x_4374_; uint8_t v_isShared_4375_; uint8_t v_isSharedCheck_4379_; 
v_a_4372_ = lean_ctor_get(v___x_4371_, 0);
v_isSharedCheck_4379_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4374_ = v___x_4371_;
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
else
{
lean_inc(v_a_4372_);
lean_dec(v___x_4371_);
v___x_4374_ = lean_box(0);
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
v_resetjp_4373_:
{
lean_object* v___x_4377_; 
if (v_isShared_4375_ == 0)
{
lean_ctor_set_tag(v___x_4374_, 1);
v___x_4377_ = v___x_4374_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v_a_4372_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
v_val_4368_ = v___x_4377_;
goto v___jp_4367_;
}
}
}
else
{
lean_object* v_a_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4387_; 
v_a_4380_ = lean_ctor_get(v___x_4371_, 0);
v_isSharedCheck_4387_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4387_ == 0)
{
v___x_4382_ = v___x_4371_;
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_a_4380_);
lean_dec(v___x_4371_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v___x_4385_; 
if (v_isShared_4383_ == 0)
{
lean_ctor_set_tag(v___x_4382_, 0);
v___x_4385_ = v___x_4382_;
goto v_reusejp_4384_;
}
else
{
lean_object* v_reuseFailAlloc_4386_; 
v_reuseFailAlloc_4386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4386_, 0, v_a_4380_);
v___x_4385_ = v_reuseFailAlloc_4386_;
goto v_reusejp_4384_;
}
v_reusejp_4384_:
{
v_val_4368_ = v___x_4385_;
goto v___jp_4367_;
}
}
}
v___jp_4367_:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4369_, 0, v_val_4368_);
v___x_4370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4365_, v___x_4366_, v___x_4369_, v___f_4363_);
return v___x_4370_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4388_, lean_object* v___f_4389_, lean_object* v_handler_4390_, lean_object* v_options_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v___y_4394_, lean_object* v_____x_4395_, lean_object* v___y_4396_){
_start:
{
lean_object* v_res_4397_; 
v_res_4397_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4388_, v___f_4389_, v_handler_4390_, v_options_4391_, v_a_4392_, v_a_4393_, v___y_4394_, v_____x_4395_);
return v_res_4397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4398_, lean_object* v_x_4399_){
_start:
{
if (lean_obj_tag(v_x_4399_) == 0)
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4409_; 
lean_dec_ref(v___f_4398_);
v_a_4401_ = lean_ctor_get(v_x_4399_, 0);
v_isSharedCheck_4409_ = !lean_is_exclusive(v_x_4399_);
if (v_isSharedCheck_4409_ == 0)
{
v___x_4403_ = v_x_4399_;
v_isShared_4404_ = v_isSharedCheck_4409_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v_x_4399_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4409_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
lean_object* v___x_4407_; 
v___x_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4407_, 0, v___x_4406_);
return v___x_4407_;
}
}
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4411_; 
v_a_4410_ = lean_ctor_get(v_x_4399_, 0);
lean_inc(v_a_4410_);
lean_dec_ref_known(v_x_4399_, 1);
v___x_4411_ = lean_apply_2(v___f_4398_, v_a_4410_, lean_box(0));
return v___x_4411_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4412_, lean_object* v_x_4413_, lean_object* v___y_4414_){
_start:
{
lean_object* v_res_4415_; 
v_res_4415_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4412_, v_x_4413_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4423_, lean_object* v___f_4424_, lean_object* v_args_4425_){
_start:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; uint8_t v___x_4434_; 
v___x_4432_ = lean_unsigned_to_nat(0u);
v___x_4433_ = lean_array_get_size(v_args_4425_);
v___x_4434_ = lean_nat_dec_lt(v___x_4432_, v___x_4433_);
if (v___x_4434_ == 0)
{
lean_dec_ref(v___f_4424_);
goto v___jp_4427_;
}
else
{
lean_object* v___x_4435_; 
v___x_4435_ = lean_array_fget_borrowed(v_args_4425_, v___x_4432_);
if (lean_obj_tag(v___x_4435_) == 9)
{
lean_object* v_value_4436_; lean_object* v___x_4437_; uint8_t v___x_4438_; 
v_value_4436_ = lean_ctor_get(v___x_4435_, 0);
v___x_4437_ = lean_unsigned_to_nat(1u);
v___x_4438_ = lean_nat_dec_lt(v___x_4437_, v___x_4433_);
if (v___x_4438_ == 0)
{
lean_dec_ref(v___f_4424_);
goto v___jp_4427_;
}
else
{
lean_object* v___x_4439_; 
v___x_4439_ = lean_array_fget(v_args_4425_, v___x_4437_);
if (lean_obj_tag(v___x_4439_) == 9)
{
lean_object* v_value_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4451_; 
lean_dec_ref(v___f_4423_);
v_value_4440_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4451_ == 0)
{
lean_object* v_unused_4452_; 
v_unused_4452_ = lean_ctor_get(v___x_4439_, 1);
lean_dec(v_unused_4452_);
v___x_4442_ = v___x_4439_;
v_isShared_4443_ = v_isSharedCheck_4451_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_value_4440_);
lean_dec(v___x_4439_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4451_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4445_; 
lean_inc(v_value_4436_);
if (v_isShared_4443_ == 0)
{
lean_ctor_set_tag(v___x_4442_, 0);
lean_ctor_set(v___x_4442_, 1, v_value_4440_);
lean_ctor_set(v___x_4442_, 0, v_value_4436_);
v___x_4445_ = v___x_4442_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_value_4436_);
lean_ctor_set(v_reuseFailAlloc_4450_, 1, v_value_4440_);
v___x_4445_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
uint8_t v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4446_ = 0;
v___x_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4445_);
v___x_4448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4447_);
v___x_4449_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4432_, v___x_4446_, v___x_4448_, v___f_4424_);
return v___x_4449_;
}
}
}
else
{
lean_dec(v___x_4439_);
lean_dec_ref(v___f_4424_);
goto v___jp_4427_;
}
}
}
else
{
lean_dec_ref(v___f_4424_);
goto v___jp_4427_;
}
}
v___jp_4427_:
{
lean_object* v___x_4428_; uint8_t v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4428_ = lean_unsigned_to_nat(0u);
v___x_4429_ = 0;
v___x_4430_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4431_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4428_, v___x_4429_, v___x_4430_, v___f_4423_);
return v___x_4431_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4453_, lean_object* v___f_4454_, lean_object* v_args_4455_, lean_object* v___y_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4453_, v___f_4454_, v_args_4455_);
lean_dec_ref(v_args_4455_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4458_){
_start:
{
lean_object* v___x_4460_; lean_object* v_putStr_4461_; lean_object* v___x_4462_; 
v___x_4460_ = lean_get_stdout();
v_putStr_4461_ = lean_ctor_get(v___x_4460_, 4);
lean_inc_ref(v_putStr_4461_);
lean_dec_ref(v___x_4460_);
v___x_4462_ = lean_apply_2(v_putStr_4461_, v_s_4458_, lean_box(0));
return v___x_4462_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4463_, lean_object* v_a_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4463_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4466_){
_start:
{
uint32_t v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4468_ = 10;
v___x_4469_ = lean_string_push(v_s_4466_, v___x_4468_);
v___x_4470_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4469_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4471_, lean_object* v_a_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4471_);
return v_res_4473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___f_4478_, lean_object* v_x_4479_){
_start:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; uint8_t v___x_4488_; lean_object* v_val_4490_; lean_object* v___x_4493_; 
v___x_4481_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4482_ = lean_string_append(v___x_4481_, v___y_4476_);
v___x_4483_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4484_ = lean_string_append(v___x_4482_, v___x_4483_);
v___x_4485_ = l_Nat_reprFast(v___y_4477_);
v___x_4486_ = lean_string_append(v___x_4484_, v___x_4485_);
lean_dec_ref(v___x_4485_);
v___x_4487_ = lean_unsigned_to_nat(0u);
v___x_4488_ = 0;
v___x_4493_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4486_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4493_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_dec(v___x_4493_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
lean_ctor_set_tag(v___x_4496_, 1);
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
v_val_4490_ = v___x_4499_;
goto v___jp_4489_;
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
v_a_4502_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4493_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4493_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
lean_ctor_set_tag(v___x_4504_, 0);
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
v_val_4490_ = v___x_4507_;
goto v___jp_4489_;
}
}
}
v___jp_4489_:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; 
v___x_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4491_, 0, v_val_4490_);
v___x_4492_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4487_, v___x_4488_, v___x_4491_, v___f_4478_);
return v___x_4492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___f_4512_, lean_object* v_x_4513_, lean_object* v___y_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4510_, v___y_4511_, v___f_4512_, v_x_4513_);
lean_dec_ref(v_x_4513_);
lean_dec_ref(v___y_4510_);
return v_res_4515_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4517_ = lean_unsigned_to_nat(0u);
v___x_4518_ = lean_nat_to_int(v___x_4517_);
return v___x_4518_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4519_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4520_ = lean_nat_abs(v___x_4519_);
return v___x_4520_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; 
v___x_4521_ = lean_cstr_to_nat("9007199254740991");
v___x_4522_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4523_ = lean_nat_dec_le(v___x_4522_, v___x_4521_);
return v___x_4523_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4525_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
return v___x_4525_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4526_; double v___x_4527_; 
v___x_4526_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4527_ = l_Float_ofInt(v___x_4526_);
return v___x_4527_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4529_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4530_, lean_object* v___x_4531_, lean_object* v_a_4532_, lean_object* v_x_4533_){
_start:
{
uint8_t v___y_4536_; lean_object* v___y_4537_; lean_object* v_val_4538_; lean_object* v___x_4541_; lean_object* v___y_4543_; uint8_t v___x_4564_; 
v___x_4541_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4564_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4564_ == 0)
{
lean_object* v___x_4565_; 
v___x_4565_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4543_ = v___x_4565_;
goto v___jp_4542_;
}
else
{
lean_object* v___x_4566_; 
v___x_4566_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4543_ = v___x_4566_;
goto v___jp_4542_;
}
v___jp_4535_:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v_val_4538_);
v___x_4540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4537_, v___y_4536_, v___x_4539_, v___f_4530_);
return v___x_4540_;
}
v___jp_4542_:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; uint8_t v___x_4546_; lean_object* v___x_4547_; 
lean_inc(v___y_4543_);
v___x_4544_ = lean_array_push(v___x_4531_, v___y_4543_);
v___x_4545_ = lean_unsigned_to_nat(0u);
v___x_4546_ = 0;
v___x_4547_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4532_, v___x_4541_, v___x_4544_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4547_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4547_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set_tag(v___x_4550_, 1);
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
v___y_4536_ = v___x_4546_;
v___y_4537_ = v___x_4545_;
v_val_4538_ = v___x_4553_;
goto v___jp_4535_;
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
v_a_4556_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4547_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4547_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
lean_ctor_set_tag(v___x_4558_, 0);
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
v___y_4536_ = v___x_4546_;
v___y_4537_ = v___x_4545_;
v_val_4538_ = v___x_4561_;
goto v___jp_4535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4567_, lean_object* v___x_4568_, lean_object* v_a_4569_, lean_object* v_x_4570_, lean_object* v___y_4571_){
_start:
{
lean_object* v_res_4572_; 
v_res_4572_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4567_, v___x_4568_, v_a_4569_, v_x_4570_);
lean_dec_ref(v_x_4570_);
return v_res_4572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4573_, lean_object* v___x_4574_, lean_object* v___x_4575_, lean_object* v___f_4576_, lean_object* v_a_4577_, lean_object* v_x_4578_){
_start:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; uint8_t v___x_4584_; lean_object* v_val_4586_; lean_object* v___x_4589_; 
v___x_4580_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4581_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4581_, 0, v_a_4573_);
lean_ctor_set(v___x_4581_, 1, v___x_4574_);
v___x_4582_ = lean_array_push(v___x_4575_, v___x_4581_);
v___x_4583_ = lean_unsigned_to_nat(0u);
v___x_4584_ = 0;
v___x_4589_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4577_, v___x_4580_, v___x_4582_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4589_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4589_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
lean_ctor_set_tag(v___x_4592_, 1);
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
v_val_4586_ = v___x_4595_;
goto v___jp_4585_;
}
}
}
else
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
v_a_4598_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4600_ = v___x_4589_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4589_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
lean_ctor_set_tag(v___x_4600_, 0);
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_a_4598_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
v_val_4586_ = v___x_4603_;
goto v___jp_4585_;
}
}
}
v___jp_4585_:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4587_, 0, v_val_4586_);
v___x_4588_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4583_, v___x_4584_, v___x_4587_, v___f_4576_);
return v___x_4588_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4606_, lean_object* v___x_4607_, lean_object* v___x_4608_, lean_object* v___f_4609_, lean_object* v_a_4610_, lean_object* v_x_4611_, lean_object* v___y_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4606_, v___x_4607_, v___x_4608_, v___f_4609_, v_a_4610_, v_x_4611_);
lean_dec_ref(v_x_4611_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_as_x27_4617_, lean_object* v_b_4618_){
_start:
{
if (lean_obj_tag(v_as_x27_4617_) == 0)
{
lean_object* v___x_4620_; 
lean_dec(v_a_4616_);
lean_dec(v_a_4615_);
v___x_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4620_, 0, v_b_4618_);
return v___x_4620_;
}
else
{
lean_object* v_head_4621_; lean_object* v_tail_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v_head_4621_ = lean_ctor_get(v_as_x27_4617_, 0);
v_tail_4622_ = lean_ctor_get(v_as_x27_4617_, 1);
v___x_4623_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4624_ = lean_box(0);
v___x_4625_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4621_);
v___x_4626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4626_, 0, v_head_4621_);
lean_inc(v_a_4615_);
v___x_4627_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4627_, 0, v_a_4615_);
lean_ctor_set(v___x_4627_, 1, v___x_4623_);
v___x_4628_ = lean_unsigned_to_nat(2u);
v___x_4629_ = lean_mk_empty_array_with_capacity(v___x_4628_);
v___x_4630_ = lean_array_push(v___x_4629_, v___x_4626_);
v___x_4631_ = lean_array_push(v___x_4630_, v___x_4627_);
lean_inc(v_a_4616_);
v___x_4632_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4616_, v___x_4625_, v___x_4631_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_dec_ref_known(v___x_4632_, 1);
v_as_x27_4617_ = v_tail_4622_;
v_b_4618_ = v___x_4624_;
goto _start;
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_dec(v_a_4616_);
lean_dec(v_a_4615_);
v_a_4634_ = lean_ctor_get(v___x_4632_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4632_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___x_4632_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___x_4632_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_as_x27_4644_, lean_object* v_b_4645_, lean_object* v___y_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4642_, v_a_4643_, v_as_x27_4644_, v_b_4645_);
lean_dec(v_as_x27_4644_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4649_){
_start:
{
uint32_t v___x_4651_; uint32_t v___x_4652_; uint64_t v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4651_ = 201;
v___x_4652_ = 0;
v___x_4653_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_4654_ = lean_string_to_utf8(v_specifier_4649_);
v___x_4655_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4651_, v___x_4652_, v___x_4653_, v___x_4654_);
lean_dec_ref(v___x_4654_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
lean_inc(v_a_4656_);
lean_dec_ref_known(v___x_4655_, 1);
v___x_4657_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4658_ = l_String_quote(v_specifier_4649_);
v___x_4659_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
v___x_4660_ = lean_unsigned_to_nat(120u);
v___x_4661_ = lean_unsigned_to_nat(0u);
v___x_4662_ = l_Std_Format_pretty(v___x_4659_, v___x_4660_, v___x_4661_, v___x_4661_);
v___x_4663_ = lean_string_append(v___x_4657_, v___x_4662_);
lean_dec_ref(v___x_4662_);
v___x_4664_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4663_, v_a_4656_);
lean_dec(v_a_4656_);
lean_dec_ref(v___x_4663_);
return v___x_4664_;
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec_ref(v_specifier_4649_);
v_a_4665_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4655_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4655_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4673_, lean_object* v_a_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4673_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4701_, lean_object* v_options_4702_){
_start:
{
lean_object* v___f_4704_; lean_object* v___f_4705_; lean_object* v___f_4706_; lean_object* v___f_4707_; lean_object* v___y_4709_; lean_object* v___y_4710_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___y_4716_; lean_object* v___x_4770_; lean_object* v___x_4771_; 
v___f_4704_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4705_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4706_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4707_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4770_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4771_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4770_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v_a_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; 
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref_known(v___x_4771_, 1);
v___x_4773_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4774_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4773_);
if (lean_obj_tag(v___x_4774_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; 
v_a_4775_ = lean_ctor_get(v___x_4774_, 0);
lean_inc(v_a_4775_);
lean_dec_ref_known(v___x_4774_, 1);
v___x_4776_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4777_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4775_, v___x_4776_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4779_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
lean_inc(v_a_4778_);
lean_dec_ref_known(v___x_4777_, 1);
v___x_4779_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
lean_inc(v_a_4780_);
lean_dec_ref_known(v___x_4779_, 1);
v___x_4781_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4782_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4780_, v___x_4781_);
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_object* v_a_4783_; lean_object* v___y_4785_; lean_object* v___y_4786_; lean_object* v___y_4787_; lean_object* v___y_4837_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___y_4842_; 
v_a_4783_ = lean_ctor_get(v___x_4782_, 0);
lean_inc(v_a_4783_);
lean_dec_ref_known(v___x_4782_, 1);
v___x_4839_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_4840_ = lean_io_getenv(v___x_4839_);
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v___x_4851_; 
v___x_4851_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_4842_ = v___x_4851_;
goto v___jp_4841_;
}
else
{
lean_object* v_val_4852_; 
v_val_4852_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_val_4852_);
lean_dec_ref_known(v___x_4840_, 1);
v___y_4842_ = v_val_4852_;
goto v___jp_4841_;
}
v___jp_4784_:
{
lean_object* v___f_4788_; lean_object* v___f_4789_; lean_object* v___f_4790_; lean_object* v___f_4791_; lean_object* v___x_4792_; 
lean_inc_n(v___y_4787_, 2);
v___f_4788_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4788_, 0, v___f_4705_);
lean_closure_set(v___f_4788_, 1, v___f_4704_);
lean_closure_set(v___f_4788_, 2, v_handler_4701_);
lean_closure_set(v___f_4788_, 3, v_options_4702_);
lean_closure_set(v___f_4788_, 4, v_a_4783_);
lean_closure_set(v___f_4788_, 5, v_a_4778_);
lean_closure_set(v___f_4788_, 6, v___y_4787_);
v___f_4789_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4789_, 0, v___f_4788_);
lean_inc_ref(v___f_4789_);
v___f_4790_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4790_, 0, v___f_4789_);
lean_closure_set(v___f_4790_, 1, v___f_4789_);
v___f_4791_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4791_, 0, v___y_4785_);
lean_closure_set(v___f_4791_, 1, v___y_4787_);
lean_closure_set(v___f_4791_, 2, v___f_4706_);
v___x_4792_ = l_Lasm_JS_Function_ofFnReply(v___f_4790_);
if (lean_obj_tag(v___x_4792_) == 0)
{
lean_object* v_a_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v_a_4793_ = lean_ctor_get(v___x_4792_, 0);
lean_inc(v_a_4793_);
lean_dec_ref_known(v___x_4792_, 1);
v___x_4794_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4795_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4796_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4796_, 0, v_a_4793_);
lean_ctor_set(v___x_4796_, 1, v___x_4795_);
v___x_4797_ = lean_unsigned_to_nat(1u);
v___x_4798_ = lean_mk_empty_array_with_capacity(v___x_4797_);
lean_inc_ref(v___x_4798_);
v___x_4799_ = lean_array_push(v___x_4798_, v___x_4796_);
v___x_4800_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4772_, v___x_4794_, v___x_4799_);
if (lean_obj_tag(v___x_4800_) == 0)
{
lean_object* v_a_4801_; lean_object* v___x_4802_; 
v_a_4801_ = lean_ctor_get(v___x_4800_, 0);
lean_inc(v_a_4801_);
lean_dec_ref_known(v___x_4800_, 1);
v___x_4802_ = l_Lasm_JS_Function_ofFn(v___f_4791_);
if (lean_obj_tag(v___x_4802_) == 0)
{
lean_object* v_a_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; uint8_t v___x_4808_; 
v_a_4803_ = lean_ctor_get(v___x_4802_, 0);
lean_inc(v_a_4803_);
lean_dec_ref_known(v___x_4802_, 1);
v___x_4804_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4805_ = lean_nat_to_int(v___y_4787_);
v___x_4806_ = lean_nat_abs(v___x_4805_);
v___x_4807_ = lean_cstr_to_nat("9007199254740991");
v___x_4808_ = lean_nat_dec_le(v___x_4806_, v___x_4807_);
lean_dec(v___x_4806_);
if (v___x_4808_ == 0)
{
lean_object* v___x_4809_; 
v___x_4809_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4805_);
v___y_4709_ = v___x_4795_;
v___y_4710_ = v___x_4798_;
v___y_4711_ = v_a_4801_;
v___y_4712_ = v___y_4786_;
v___y_4713_ = v___x_4804_;
v___y_4714_ = v_a_4803_;
v___y_4715_ = v___x_4795_;
v___y_4716_ = v___x_4809_;
goto v___jp_4708_;
}
else
{
double v___x_4810_; lean_object* v___x_4811_; 
v___x_4810_ = l_Float_ofInt(v___x_4805_);
lean_dec(v___x_4805_);
v___x_4811_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4811_, 0, v___x_4810_);
v___y_4709_ = v___x_4795_;
v___y_4710_ = v___x_4798_;
v___y_4711_ = v_a_4801_;
v___y_4712_ = v___y_4786_;
v___y_4713_ = v___x_4804_;
v___y_4714_ = v_a_4803_;
v___y_4715_ = v___x_4795_;
v___y_4716_ = v___x_4811_;
goto v___jp_4708_;
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
lean_dec(v_a_4801_);
lean_dec_ref(v___x_4798_);
lean_dec(v___y_4787_);
lean_dec_ref(v___y_4786_);
v_a_4812_ = lean_ctor_get(v___x_4802_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4802_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4802_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4802_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
}
}
else
{
lean_object* v_a_4820_; lean_object* v___x_4822_; uint8_t v_isShared_4823_; uint8_t v_isSharedCheck_4827_; 
lean_dec_ref(v___x_4798_);
lean_dec_ref(v___f_4791_);
lean_dec(v___y_4787_);
lean_dec_ref(v___y_4786_);
v_a_4820_ = lean_ctor_get(v___x_4800_, 0);
v_isSharedCheck_4827_ = !lean_is_exclusive(v___x_4800_);
if (v_isSharedCheck_4827_ == 0)
{
v___x_4822_ = v___x_4800_;
v_isShared_4823_ = v_isSharedCheck_4827_;
goto v_resetjp_4821_;
}
else
{
lean_inc(v_a_4820_);
lean_dec(v___x_4800_);
v___x_4822_ = lean_box(0);
v_isShared_4823_ = v_isSharedCheck_4827_;
goto v_resetjp_4821_;
}
v_resetjp_4821_:
{
lean_object* v___x_4825_; 
if (v_isShared_4823_ == 0)
{
v___x_4825_ = v___x_4822_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v_a_4820_);
v___x_4825_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
return v___x_4825_;
}
}
}
}
else
{
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4835_; 
lean_dec_ref(v___f_4791_);
lean_dec(v___y_4787_);
lean_dec_ref(v___y_4786_);
lean_dec(v_a_4772_);
v_a_4828_ = lean_ctor_get(v___x_4792_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4792_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4830_ = v___x_4792_;
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___x_4792_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v___x_4833_; 
if (v_isShared_4831_ == 0)
{
v___x_4833_ = v___x_4830_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_a_4828_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
v___jp_4836_:
{
lean_object* v___x_4838_; 
v___x_4838_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_4837_);
v___y_4785_ = v___y_4837_;
v___y_4786_ = v___y_4837_;
v___y_4787_ = v___x_4838_;
goto v___jp_4784_;
}
v___jp_4841_:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4843_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_4844_ = lean_io_getenv(v___x_4843_);
if (lean_obj_tag(v___x_4844_) == 0)
{
v___y_4837_ = v___y_4842_;
goto v___jp_4836_;
}
else
{
lean_object* v_val_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v_val_4845_ = lean_ctor_get(v___x_4844_, 0);
lean_inc(v_val_4845_);
lean_dec_ref_known(v___x_4844_, 1);
v___x_4846_ = lean_unsigned_to_nat(0u);
v___x_4847_ = lean_string_utf8_byte_size(v_val_4845_);
v___x_4848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4848_, 0, v_val_4845_);
lean_ctor_set(v___x_4848_, 1, v___x_4846_);
lean_ctor_set(v___x_4848_, 2, v___x_4847_);
v___x_4849_ = l_String_Slice_toNat_x3f(v___x_4848_);
lean_dec_ref_known(v___x_4848_, 3);
if (lean_obj_tag(v___x_4849_) == 0)
{
v___y_4837_ = v___y_4842_;
goto v___jp_4836_;
}
else
{
lean_object* v_val_4850_; 
v_val_4850_ = lean_ctor_get(v___x_4849_, 0);
lean_inc(v_val_4850_);
lean_dec_ref_known(v___x_4849_, 1);
lean_inc_ref(v___y_4842_);
v___y_4785_ = v___y_4842_;
v___y_4786_ = v___y_4842_;
v___y_4787_ = v_val_4850_;
goto v___jp_4784_;
}
}
}
}
else
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4860_; 
lean_dec(v_a_4778_);
lean_dec(v_a_4772_);
lean_dec_ref(v_options_4702_);
lean_dec_ref(v_handler_4701_);
v_a_4853_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4860_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4860_ == 0)
{
v___x_4855_ = v___x_4782_;
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4782_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v___x_4858_; 
if (v_isShared_4856_ == 0)
{
v___x_4858_ = v___x_4855_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_a_4853_);
v___x_4858_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4857_;
}
v_reusejp_4857_:
{
return v___x_4858_;
}
}
}
}
else
{
lean_object* v_a_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4868_; 
lean_dec(v_a_4778_);
lean_dec(v_a_4772_);
lean_dec_ref(v_options_4702_);
lean_dec_ref(v_handler_4701_);
v_a_4861_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4868_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4868_ == 0)
{
v___x_4863_ = v___x_4779_;
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_a_4861_);
lean_dec(v___x_4779_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v___x_4866_; 
if (v_isShared_4864_ == 0)
{
v___x_4866_ = v___x_4863_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_a_4861_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
else
{
lean_object* v_a_4869_; lean_object* v___x_4871_; uint8_t v_isShared_4872_; uint8_t v_isSharedCheck_4876_; 
lean_dec(v_a_4772_);
lean_dec_ref(v_options_4702_);
lean_dec_ref(v_handler_4701_);
v_a_4869_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4876_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4876_ == 0)
{
v___x_4871_ = v___x_4777_;
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
else
{
lean_inc(v_a_4869_);
lean_dec(v___x_4777_);
v___x_4871_ = lean_box(0);
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
v_resetjp_4870_:
{
lean_object* v___x_4874_; 
if (v_isShared_4872_ == 0)
{
v___x_4874_ = v___x_4871_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4875_; 
v_reuseFailAlloc_4875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4875_, 0, v_a_4869_);
v___x_4874_ = v_reuseFailAlloc_4875_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
return v___x_4874_;
}
}
}
}
else
{
lean_object* v_a_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4884_; 
lean_dec(v_a_4772_);
lean_dec_ref(v_options_4702_);
lean_dec_ref(v_handler_4701_);
v_a_4877_ = lean_ctor_get(v___x_4774_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v___x_4774_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4879_ = v___x_4774_;
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_a_4877_);
lean_dec(v___x_4774_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v___x_4882_; 
if (v_isShared_4880_ == 0)
{
v___x_4882_ = v___x_4879_;
goto v_reusejp_4881_;
}
else
{
lean_object* v_reuseFailAlloc_4883_; 
v_reuseFailAlloc_4883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4883_, 0, v_a_4877_);
v___x_4882_ = v_reuseFailAlloc_4883_;
goto v_reusejp_4881_;
}
v_reusejp_4881_:
{
return v___x_4882_;
}
}
}
}
else
{
lean_object* v_a_4885_; lean_object* v___x_4887_; uint8_t v_isShared_4888_; uint8_t v_isSharedCheck_4892_; 
lean_dec_ref(v_options_4702_);
lean_dec_ref(v_handler_4701_);
v_a_4885_ = lean_ctor_get(v___x_4771_, 0);
v_isSharedCheck_4892_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4892_ == 0)
{
v___x_4887_ = v___x_4771_;
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
else
{
lean_inc(v_a_4885_);
lean_dec(v___x_4771_);
v___x_4887_ = lean_box(0);
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
v_resetjp_4886_:
{
lean_object* v___x_4890_; 
if (v_isShared_4888_ == 0)
{
v___x_4890_ = v___x_4887_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v_a_4885_);
v___x_4890_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
return v___x_4890_;
}
}
}
v___jp_4708_:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4717_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4717_, 0, v___y_4712_);
lean_inc_ref(v___y_4715_);
v___x_4718_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4718_, 0, v___y_4714_);
lean_ctor_set(v___x_4718_, 1, v___y_4715_);
v___x_4719_ = lean_unsigned_to_nat(3u);
v___x_4720_ = lean_mk_empty_array_with_capacity(v___x_4719_);
v___x_4721_ = lean_array_push(v___x_4720_, v___y_4716_);
v___x_4722_ = lean_array_push(v___x_4721_, v___x_4717_);
v___x_4723_ = lean_array_push(v___x_4722_, v___x_4718_);
lean_inc_ref(v___y_4713_);
lean_inc(v___y_4711_);
v___x_4724_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4711_, v___y_4713_, v___x_4723_);
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
lean_dec_ref_known(v___x_4724_, 1);
v___x_4725_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4726_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4725_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___f_4728_; lean_object* v___x_4729_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc_n(v_a_4727_, 2);
lean_dec_ref_known(v___x_4726_, 1);
lean_inc_ref(v___y_4710_);
v___f_4728_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4728_, 0, v___f_4707_);
lean_closure_set(v___f_4728_, 1, v___y_4710_);
lean_closure_set(v___f_4728_, 2, v_a_4727_);
v___x_4729_ = l_Lasm_JS_Function_ofFn(v___f_4728_);
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_object* v_a_4730_; lean_object* v___f_4731_; lean_object* v___x_4732_; 
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
lean_inc(v_a_4730_);
lean_dec_ref_known(v___x_4729_, 1);
lean_inc_ref(v___y_4709_);
v___f_4731_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4731_, 0, v_a_4730_);
lean_closure_set(v___f_4731_, 1, v___y_4709_);
lean_closure_set(v___f_4731_, 2, v___y_4710_);
lean_closure_set(v___f_4731_, 3, v___f_4707_);
lean_closure_set(v___f_4731_, 4, v___y_4711_);
v___x_4732_ = l_Lasm_JS_Function_ofFn(v___f_4731_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4732_, 1);
v___x_4734_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4735_ = lean_box(0);
v___x_4736_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4733_, v_a_4727_, v___x_4734_, v___x_4735_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v___x_4737_; 
lean_dec_ref_known(v___x_4736_, 1);
v___x_4737_ = l_Lasm_JS_waitForever();
return v___x_4737_;
}
else
{
return v___x_4736_;
}
}
else
{
lean_object* v_a_4738_; lean_object* v___x_4740_; uint8_t v_isShared_4741_; uint8_t v_isSharedCheck_4745_; 
lean_dec(v_a_4727_);
v_a_4738_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4740_ = v___x_4732_;
v_isShared_4741_ = v_isSharedCheck_4745_;
goto v_resetjp_4739_;
}
else
{
lean_inc(v_a_4738_);
lean_dec(v___x_4732_);
v___x_4740_ = lean_box(0);
v_isShared_4741_ = v_isSharedCheck_4745_;
goto v_resetjp_4739_;
}
v_resetjp_4739_:
{
lean_object* v___x_4743_; 
if (v_isShared_4741_ == 0)
{
v___x_4743_ = v___x_4740_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_a_4738_);
v___x_4743_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
return v___x_4743_;
}
}
}
}
else
{
lean_object* v_a_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4753_; 
lean_dec(v_a_4727_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
v_a_4746_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4748_ = v___x_4729_;
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_a_4746_);
lean_dec(v___x_4729_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v___x_4751_; 
if (v_isShared_4749_ == 0)
{
v___x_4751_ = v___x_4748_;
goto v_reusejp_4750_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v_a_4746_);
v___x_4751_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4750_;
}
v_reusejp_4750_:
{
return v___x_4751_;
}
}
}
}
else
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
v_a_4754_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4756_ = v___x_4726_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4726_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
else
{
lean_object* v_a_4762_; lean_object* v___x_4764_; uint8_t v_isShared_4765_; uint8_t v_isSharedCheck_4769_; 
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
v_a_4762_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4769_ == 0)
{
v___x_4764_ = v___x_4724_;
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
else
{
lean_inc(v_a_4762_);
lean_dec(v___x_4724_);
v___x_4764_ = lean_box(0);
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
v_resetjp_4763_:
{
lean_object* v___x_4767_; 
if (v_isShared_4765_ == 0)
{
v___x_4767_ = v___x_4764_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v_a_4762_);
v___x_4767_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
return v___x_4767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_4893_, lean_object* v_options_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lasm_Fetch_serveNode(v_handler_4893_, v_options_4894_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_4897_, lean_object* v_range_4898_, lean_object* v_b_4899_, lean_object* v_i_4900_, lean_object* v_hs_4901_, lean_object* v_hl_4902_){
_start:
{
lean_object* v___x_4903_; 
v___x_4903_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4897_, v_range_4898_, v_b_4899_, v_i_4900_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_4904_, lean_object* v_range_4905_, lean_object* v_b_4906_, lean_object* v_i_4907_, lean_object* v_hs_4908_, lean_object* v_hl_4909_){
_start:
{
lean_object* v_res_4910_; 
v_res_4910_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_4904_, v_range_4905_, v_b_4906_, v_i_4907_, v_hs_4908_, v_hl_4909_);
lean_dec_ref(v_range_4905_);
lean_dec_ref(v___y_4904_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_4911_, lean_object* v_a_4912_, lean_object* v_as_4913_, lean_object* v_as_x27_4914_, lean_object* v_b_4915_, lean_object* v_a_4916_){
_start:
{
lean_object* v___x_4918_; 
v___x_4918_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4911_, v_a_4912_, v_as_x27_4914_, v_b_4915_);
return v___x_4918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_as_4921_, lean_object* v_as_x27_4922_, lean_object* v_b_4923_, lean_object* v_a_4924_, lean_object* v___y_4925_){
_start:
{
lean_object* v_res_4926_; 
v_res_4926_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_4919_, v_a_4920_, v_as_4921_, v_as_x27_4922_, v_b_4923_, v_a_4924_);
lean_dec(v_as_x27_4922_);
lean_dec(v_as_4921_);
return v_res_4926_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_4927_; 
v___x_4927_ = lean_box(0);
return v___x_4927_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_4928_; 
v___x_4928_ = lean_box(0);
return v___x_4928_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_4936_, lean_object* v_method_4937_, lean_object* v_url_4938_, lean_object* v_headers_4939_, lean_object* v_body_4940_, lean_object* v_backend_4941_, lean_object* v_a_00___x40___internal___hyg_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = lasm_fetch_send(v_p_4936_, v_method_4937_, v_url_4938_, v_headers_4939_, v_body_4940_, v_backend_4941_);
lean_dec_ref(v_backend_4941_);
lean_dec_ref(v_body_4940_);
lean_dec_ref(v_headers_4939_);
lean_dec_ref(v_url_4938_);
lean_dec_ref(v_method_4937_);
lean_dec(v_p_4936_);
return v_res_4943_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_4944_, lean_object* v_b_4945_, lean_object* v_x_4946_, lean_object* v_x_4947_){
_start:
{
if (lean_obj_tag(v_x_4947_) == 0)
{
return v_x_4946_;
}
else
{
lean_object* v_head_4948_; lean_object* v_tail_4949_; uint8_t v___y_4951_; lean_object* v___x_4958_; lean_object* v___x_4959_; uint8_t v___x_4960_; 
v_head_4948_ = lean_ctor_get(v_x_4947_, 0);
v_tail_4949_ = lean_ctor_get(v_x_4947_, 1);
v___x_4958_ = lean_nat_add(v_pos_4944_, v_head_4948_);
v___x_4959_ = lean_byte_array_size(v_b_4945_);
v___x_4960_ = lean_nat_dec_lt(v___x_4958_, v___x_4959_);
if (v___x_4960_ == 0)
{
uint8_t v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; uint8_t v___x_4964_; 
lean_dec(v___x_4958_);
v___x_4961_ = 0;
v___x_4962_ = lean_box(v___x_4961_);
v___x_4963_ = l_outOfBounds___redArg(v___x_4962_);
lean_dec(v___x_4962_);
v___x_4964_ = lean_unbox(v___x_4963_);
lean_dec(v___x_4963_);
v___y_4951_ = v___x_4964_;
goto v___jp_4950_;
}
else
{
uint8_t v___x_4965_; 
v___x_4965_ = lean_byte_array_fget(v_b_4945_, v___x_4958_);
lean_dec(v___x_4958_);
v___y_4951_ = v___x_4965_;
goto v___jp_4950_;
}
v___jp_4950_:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
v___x_4952_ = lean_uint8_to_nat(v___y_4951_);
v___x_4953_ = lean_unsigned_to_nat(256u);
v___x_4954_ = lean_nat_pow(v___x_4953_, v_head_4948_);
v___x_4955_ = lean_nat_mul(v___x_4952_, v___x_4954_);
lean_dec(v___x_4954_);
v___x_4956_ = lean_nat_add(v_x_4946_, v___x_4955_);
lean_dec(v___x_4955_);
lean_dec(v_x_4946_);
v_x_4946_ = v___x_4956_;
v_x_4947_ = v_tail_4949_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_4966_, lean_object* v_b_4967_, lean_object* v_x_4968_, lean_object* v_x_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4966_, v_b_4967_, v_x_4968_, v_x_4969_);
lean_dec(v_x_4969_);
lean_dec_ref(v_b_4967_);
lean_dec(v_pos_4966_);
return v_res_4970_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; 
v___x_4971_ = lean_unsigned_to_nat(8u);
v___x_4972_ = l_List_range(v___x_4971_);
return v___x_4972_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_4976_, lean_object* v_pos_4977_){
_start:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; uint8_t v___x_4981_; 
v___x_4978_ = lean_byte_array_size(v_b_4976_);
v___x_4979_ = lean_unsigned_to_nat(8u);
v___x_4980_ = lean_nat_add(v_pos_4977_, v___x_4979_);
v___x_4981_ = lean_nat_dec_lt(v___x_4978_, v___x_4980_);
lean_dec(v___x_4980_);
if (v___x_4981_ == 0)
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4982_ = lean_unsigned_to_nat(0u);
v___x_4983_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_4984_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4977_, v_b_4976_, v___x_4982_, v___x_4983_);
v___x_4985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4985_, 0, v___x_4984_);
return v___x_4985_;
}
else
{
lean_object* v___x_4986_; 
v___x_4986_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_4986_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_4987_, lean_object* v_pos_4988_){
_start:
{
lean_object* v_res_4989_; 
v_res_4989_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4987_, v_pos_4988_);
lean_dec(v_pos_4988_);
lean_dec_ref(v_b_4987_);
return v_res_4989_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_4990_, lean_object* v_a_4991_){
_start:
{
if (lean_obj_tag(v_a_4990_) == 0)
{
lean_object* v___x_4992_; 
v___x_4992_ = l_List_reverse___redArg(v_a_4991_);
return v___x_4992_;
}
else
{
lean_object* v_head_4993_; lean_object* v_tail_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5010_; 
v_head_4993_ = lean_ctor_get(v_a_4990_, 0);
v_tail_4994_ = lean_ctor_get(v_a_4990_, 1);
v_isSharedCheck_5010_ = !lean_is_exclusive(v_a_4990_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_4996_ = v_a_4990_;
v_isShared_4997_ = v_isSharedCheck_5010_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_tail_4994_);
lean_inc(v_head_4993_);
lean_dec(v_a_4990_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5010_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
uint8_t v___y_4999_; uint8_t v___x_5005_; uint8_t v___x_5006_; uint8_t v___x_5007_; 
v___x_5005_ = 128;
v___x_5006_ = lean_unbox(v_head_4993_);
v___x_5007_ = lean_uint8_dec_lt(v___x_5006_, v___x_5005_);
if (v___x_5007_ == 0)
{
uint8_t v___x_5008_; 
lean_dec(v_head_4993_);
v___x_5008_ = 63;
v___y_4999_ = v___x_5008_;
goto v___jp_4998_;
}
else
{
uint8_t v___x_5009_; 
v___x_5009_ = lean_unbox(v_head_4993_);
lean_dec(v_head_4993_);
v___y_4999_ = v___x_5009_;
goto v___jp_4998_;
}
v___jp_4998_:
{
lean_object* v___x_5000_; lean_object* v___x_5002_; 
v___x_5000_ = lean_box(v___y_4999_);
if (v_isShared_4997_ == 0)
{
lean_ctor_set(v___x_4996_, 1, v_a_4991_);
lean_ctor_set(v___x_4996_, 0, v___x_5000_);
v___x_5002_ = v___x_4996_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v___x_5000_);
lean_ctor_set(v_reuseFailAlloc_5004_, 1, v_a_4991_);
v___x_5002_ = v_reuseFailAlloc_5004_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
v_a_4990_ = v_tail_4994_;
v_a_4991_ = v___x_5002_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5013_, lean_object* v_pos_5014_, lean_object* v_n_5015_){
_start:
{
lean_object* v___x_5016_; lean_object* v___x_5017_; uint8_t v___x_5018_; 
v___x_5016_ = lean_byte_array_size(v_b_5013_);
v___x_5017_ = lean_nat_add(v_pos_5014_, v_n_5015_);
v___x_5018_ = lean_nat_dec_lt(v___x_5016_, v___x_5017_);
if (v___x_5018_ == 0)
{
lean_object* v___x_5019_; uint8_t v___x_5020_; 
v___x_5019_ = l_ByteArray_extract(v_b_5013_, v_pos_5014_, v___x_5017_);
lean_dec(v___x_5017_);
v___x_5020_ = lean_string_validate_utf8(v___x_5019_);
if (v___x_5020_ == 0)
{
lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; uint8_t v___x_5025_; 
v___x_5021_ = l_ByteArray_toList(v___x_5019_);
lean_dec_ref(v___x_5019_);
v___x_5022_ = lean_box(0);
v___x_5023_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5021_, v___x_5022_);
v___x_5024_ = l_List_toByteArray(v___x_5023_);
lean_dec(v___x_5023_);
v___x_5025_ = lean_string_validate_utf8(v___x_5024_);
if (v___x_5025_ == 0)
{
lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; 
lean_dec_ref(v___x_5024_);
v___x_5026_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5027_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5026_);
v___x_5028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5028_, 0, v___x_5027_);
return v___x_5028_;
}
else
{
lean_object* v___x_5029_; lean_object* v___x_5030_; 
v___x_5029_ = lean_string_from_utf8_unchecked(v___x_5024_);
v___x_5030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5030_, 0, v___x_5029_);
return v___x_5030_;
}
}
else
{
lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5031_ = lean_string_from_utf8_unchecked(v___x_5019_);
v___x_5032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5032_, 0, v___x_5031_);
return v___x_5032_;
}
}
else
{
lean_object* v___x_5033_; 
lean_dec(v___x_5017_);
lean_dec(v_pos_5014_);
v___x_5033_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5033_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5034_, lean_object* v_pos_5035_, lean_object* v_n_5036_){
_start:
{
lean_object* v_res_5037_; 
v_res_5037_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5034_, v_pos_5035_, v_n_5036_);
lean_dec(v_n_5036_);
lean_dec_ref(v_b_5034_);
return v_res_5037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5038_, lean_object* v_range_5039_, lean_object* v_b_5040_, lean_object* v_i_5041_){
_start:
{
lean_object* v_stop_5042_; lean_object* v_step_5043_; uint8_t v___x_5044_; 
v_stop_5042_ = lean_ctor_get(v_range_5039_, 1);
v_step_5043_ = lean_ctor_get(v_range_5039_, 2);
v___x_5044_ = lean_nat_dec_lt(v_i_5041_, v_stop_5042_);
if (v___x_5044_ == 0)
{
lean_object* v___x_5045_; 
lean_dec(v_i_5041_);
v___x_5045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5045_, 0, v_b_5040_);
return v___x_5045_;
}
else
{
lean_object* v_fst_5046_; lean_object* v_snd_5047_; lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5103_; 
v_fst_5046_ = lean_ctor_get(v_b_5040_, 0);
v_snd_5047_ = lean_ctor_get(v_b_5040_, 1);
v_isSharedCheck_5103_ = !lean_is_exclusive(v_b_5040_);
if (v_isSharedCheck_5103_ == 0)
{
v___x_5049_ = v_b_5040_;
v_isShared_5050_ = v_isSharedCheck_5103_;
goto v_resetjp_5048_;
}
else
{
lean_inc(v_snd_5047_);
lean_inc(v_fst_5046_);
lean_dec(v_b_5040_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5103_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v___x_5051_; 
v___x_5051_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5038_, v_fst_5046_);
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_object* v_a_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5059_; 
lean_del_object(v___x_5049_);
lean_dec(v_snd_5047_);
lean_dec(v_fst_5046_);
lean_dec(v_i_5041_);
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5059_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5059_ == 0)
{
v___x_5054_ = v___x_5051_;
v_isShared_5055_ = v_isSharedCheck_5059_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_a_5052_);
lean_dec(v___x_5051_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5059_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
lean_object* v___x_5057_; 
if (v_isShared_5055_ == 0)
{
v___x_5057_ = v___x_5054_;
goto v_reusejp_5056_;
}
else
{
lean_object* v_reuseFailAlloc_5058_; 
v_reuseFailAlloc_5058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5058_, 0, v_a_5052_);
v___x_5057_ = v_reuseFailAlloc_5058_;
goto v_reusejp_5056_;
}
v_reusejp_5056_:
{
return v___x_5057_;
}
}
}
else
{
lean_object* v_a_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; 
v_a_5060_ = lean_ctor_get(v___x_5051_, 0);
lean_inc(v_a_5060_);
lean_dec_ref_known(v___x_5051_, 1);
v___x_5061_ = lean_unsigned_to_nat(8u);
v___x_5062_ = lean_nat_add(v_fst_5046_, v___x_5061_);
lean_dec(v_fst_5046_);
lean_inc(v___x_5062_);
v___x_5063_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5038_, v___x_5062_, v_a_5060_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
lean_dec(v___x_5062_);
lean_dec(v_a_5060_);
lean_del_object(v___x_5049_);
lean_dec(v_snd_5047_);
lean_dec(v_i_5041_);
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v___x_5063_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5063_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_a_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
return v___x_5069_;
}
}
}
else
{
lean_object* v_a_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v_a_5072_ = lean_ctor_get(v___x_5063_, 0);
lean_inc(v_a_5072_);
lean_dec_ref_known(v___x_5063_, 1);
v___x_5073_ = lean_nat_add(v___x_5062_, v_a_5060_);
lean_dec(v_a_5060_);
lean_dec(v___x_5062_);
v___x_5074_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5038_, v___x_5073_);
if (lean_obj_tag(v___x_5074_) == 0)
{
lean_object* v_a_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5082_; 
lean_dec(v___x_5073_);
lean_dec(v_a_5072_);
lean_del_object(v___x_5049_);
lean_dec(v_snd_5047_);
lean_dec(v_i_5041_);
v_a_5075_ = lean_ctor_get(v___x_5074_, 0);
v_isSharedCheck_5082_ = !lean_is_exclusive(v___x_5074_);
if (v_isSharedCheck_5082_ == 0)
{
v___x_5077_ = v___x_5074_;
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_a_5075_);
lean_dec(v___x_5074_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v___x_5080_; 
if (v_isShared_5078_ == 0)
{
v___x_5080_ = v___x_5077_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_a_5075_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
}
else
{
lean_object* v_a_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; 
v_a_5083_ = lean_ctor_get(v___x_5074_, 0);
lean_inc(v_a_5083_);
lean_dec_ref_known(v___x_5074_, 1);
v___x_5084_ = lean_nat_add(v___x_5073_, v___x_5061_);
lean_dec(v___x_5073_);
lean_inc(v___x_5084_);
v___x_5085_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5038_, v___x_5084_, v_a_5083_);
if (lean_obj_tag(v___x_5085_) == 0)
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5093_; 
lean_dec(v___x_5084_);
lean_dec(v_a_5083_);
lean_dec(v_a_5072_);
lean_del_object(v___x_5049_);
lean_dec(v_snd_5047_);
lean_dec(v_i_5041_);
v_a_5086_ = lean_ctor_get(v___x_5085_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_5085_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5088_ = v___x_5085_;
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v___x_5085_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_a_5086_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
else
{
lean_object* v_a_5094_; lean_object* v___x_5095_; lean_object* v___x_5097_; 
v_a_5094_ = lean_ctor_get(v___x_5085_, 0);
lean_inc(v_a_5094_);
lean_dec_ref_known(v___x_5085_, 1);
v___x_5095_ = lean_nat_add(v___x_5084_, v_a_5083_);
lean_dec(v_a_5083_);
lean_dec(v___x_5084_);
if (v_isShared_5050_ == 0)
{
lean_ctor_set(v___x_5049_, 1, v_a_5094_);
lean_ctor_set(v___x_5049_, 0, v_a_5072_);
v___x_5097_ = v___x_5049_;
goto v_reusejp_5096_;
}
else
{
lean_object* v_reuseFailAlloc_5102_; 
v_reuseFailAlloc_5102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5102_, 0, v_a_5072_);
lean_ctor_set(v_reuseFailAlloc_5102_, 1, v_a_5094_);
v___x_5097_ = v_reuseFailAlloc_5102_;
goto v_reusejp_5096_;
}
v_reusejp_5096_:
{
lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5098_ = lean_array_push(v_snd_5047_, v___x_5097_);
v___x_5099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5095_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = lean_nat_add(v_i_5041_, v_step_5043_);
lean_dec(v_i_5041_);
v_b_5040_ = v___x_5099_;
v_i_5041_ = v___x_5100_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5104_, lean_object* v_range_5105_, lean_object* v_b_5106_, lean_object* v_i_5107_){
_start:
{
lean_object* v_res_5108_; 
v_res_5108_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5104_, v_range_5105_, v_b_5106_, v_i_5107_);
lean_dec_ref(v_range_5105_);
lean_dec_ref(v_b_5104_);
return v_res_5108_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5112_){
_start:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; 
v___x_5113_ = lean_unsigned_to_nat(0u);
v___x_5114_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5112_, v___x_5113_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5122_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
v_isSharedCheck_5122_ = !lean_is_exclusive(v___x_5114_);
if (v_isSharedCheck_5122_ == 0)
{
v___x_5117_ = v___x_5114_;
v_isShared_5118_ = v_isSharedCheck_5122_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_a_5115_);
lean_dec(v___x_5114_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5122_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v___x_5120_; 
if (v_isShared_5118_ == 0)
{
v___x_5120_ = v___x_5117_;
goto v_reusejp_5119_;
}
else
{
lean_object* v_reuseFailAlloc_5121_; 
v_reuseFailAlloc_5121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5121_, 0, v_a_5115_);
v___x_5120_ = v_reuseFailAlloc_5121_;
goto v_reusejp_5119_;
}
v_reusejp_5119_:
{
return v___x_5120_;
}
}
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; 
v_a_5123_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5114_, 1);
v___x_5124_ = lean_unsigned_to_nat(8u);
v___x_5125_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5112_, v___x_5124_);
if (lean_obj_tag(v___x_5125_) == 0)
{
lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5133_; 
lean_dec(v_a_5123_);
v_a_5126_ = lean_ctor_get(v___x_5125_, 0);
v_isSharedCheck_5133_ = !lean_is_exclusive(v___x_5125_);
if (v_isSharedCheck_5133_ == 0)
{
v___x_5128_ = v___x_5125_;
v_isShared_5129_ = v_isSharedCheck_5133_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_dec(v___x_5125_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5133_;
goto v_resetjp_5127_;
}
v_resetjp_5127_:
{
lean_object* v___x_5131_; 
if (v_isShared_5129_ == 0)
{
v___x_5131_ = v___x_5128_;
goto v_reusejp_5130_;
}
else
{
lean_object* v_reuseFailAlloc_5132_; 
v_reuseFailAlloc_5132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5132_, 0, v_a_5126_);
v___x_5131_ = v_reuseFailAlloc_5132_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
return v___x_5131_;
}
}
}
else
{
lean_object* v_a_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v_a_5134_ = lean_ctor_get(v___x_5125_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5125_, 1);
v___x_5135_ = lean_unsigned_to_nat(1u);
v___x_5136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5136_, 0, v___x_5113_);
lean_ctor_set(v___x_5136_, 1, v_a_5134_);
lean_ctor_set(v___x_5136_, 2, v___x_5135_);
v___x_5137_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5138_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5112_, v___x_5136_, v___x_5137_, v___x_5113_);
lean_dec_ref_known(v___x_5136_, 3);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5146_; 
lean_dec(v_a_5123_);
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5141_ = v___x_5138_;
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5138_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5144_; 
if (v_isShared_5142_ == 0)
{
v___x_5144_ = v___x_5141_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5139_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
return v___x_5144_;
}
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5161_; 
v_a_5147_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5161_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5149_ = v___x_5138_;
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5138_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v_fst_5151_; lean_object* v_snd_5152_; uint16_t v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5159_; 
v_fst_5151_ = lean_ctor_get(v_a_5147_, 0);
lean_inc(v_fst_5151_);
v_snd_5152_ = lean_ctor_get(v_a_5147_, 1);
lean_inc(v_snd_5152_);
lean_dec(v_a_5147_);
v___x_5153_ = lean_uint16_of_nat(v_a_5123_);
lean_dec(v_a_5123_);
v___x_5154_ = lean_byte_array_size(v_b_5112_);
v___x_5155_ = l_ByteArray_extract(v_b_5112_, v_fst_5151_, v___x_5154_);
v___x_5156_ = lean_box(0);
v___x_5157_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5157_, 0, v_snd_5152_);
lean_ctor_set(v___x_5157_, 1, v___x_5155_);
lean_ctor_set(v___x_5157_, 2, v___x_5156_);
lean_ctor_set_uint16(v___x_5157_, sizeof(void*)*3, v___x_5153_);
if (v_isShared_5150_ == 0)
{
lean_ctor_set(v___x_5149_, 0, v___x_5157_);
v___x_5159_ = v___x_5149_;
goto v_reusejp_5158_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v___x_5157_);
v___x_5159_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5158_;
}
v_reusejp_5158_:
{
return v___x_5159_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5162_){
_start:
{
lean_object* v_res_5163_; 
v_res_5163_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5162_);
lean_dec_ref(v_b_5162_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5164_, lean_object* v_range_5165_, lean_object* v_b_5166_, lean_object* v_i_5167_, lean_object* v_hs_5168_, lean_object* v_hl_5169_){
_start:
{
lean_object* v___x_5170_; 
v___x_5170_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5164_, v_range_5165_, v_b_5166_, v_i_5167_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5171_, lean_object* v_range_5172_, lean_object* v_b_5173_, lean_object* v_i_5174_, lean_object* v_hs_5175_, lean_object* v_hl_5176_){
_start:
{
lean_object* v_res_5177_; 
v_res_5177_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5171_, v_range_5172_, v_b_5173_, v_i_5174_, v_hs_5175_, v_hl_5176_);
lean_dec_ref(v_range_5172_);
lean_dec_ref(v_b_5171_);
return v_res_5177_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5178_, lean_object* v_headers_5179_, lean_object* v_x_5180_){
_start:
{
if (lean_obj_tag(v_x_5180_) == 0)
{
lean_object* v_a_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5190_; 
lean_dec_ref(v_headers_5179_);
v_a_5182_ = lean_ctor_get(v_x_5180_, 0);
v_isSharedCheck_5190_ = !lean_is_exclusive(v_x_5180_);
if (v_isSharedCheck_5190_ == 0)
{
v___x_5184_ = v_x_5180_;
v_isShared_5185_ = v_isSharedCheck_5190_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_a_5182_);
lean_dec(v_x_5180_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5190_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5187_; 
if (v_isShared_5185_ == 0)
{
v___x_5187_ = v___x_5184_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5189_; 
v_reuseFailAlloc_5189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5189_, 0, v_a_5182_);
v___x_5187_ = v_reuseFailAlloc_5189_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
lean_object* v___x_5188_; 
v___x_5188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
return v___x_5188_;
}
}
}
else
{
lean_object* v_a_5191_; lean_object* v___x_5193_; uint8_t v_isShared_5194_; uint8_t v_isSharedCheck_5201_; 
v_a_5191_ = lean_ctor_get(v_x_5180_, 0);
v_isSharedCheck_5201_ = !lean_is_exclusive(v_x_5180_);
if (v_isSharedCheck_5201_ == 0)
{
v___x_5193_ = v_x_5180_;
v_isShared_5194_ = v_isSharedCheck_5201_;
goto v_resetjp_5192_;
}
else
{
lean_inc(v_a_5191_);
lean_dec(v_x_5180_);
v___x_5193_ = lean_box(0);
v_isShared_5194_ = v_isSharedCheck_5201_;
goto v_resetjp_5192_;
}
v_resetjp_5192_:
{
lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5198_; 
v___x_5195_ = lean_box(0);
v___x_5196_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5196_, 0, v_headers_5179_);
lean_ctor_set(v___x_5196_, 1, v_a_5191_);
lean_ctor_set(v___x_5196_, 2, v___x_5195_);
lean_ctor_set_uint16(v___x_5196_, sizeof(void*)*3, v___y_5178_);
if (v_isShared_5194_ == 0)
{
lean_ctor_set(v___x_5193_, 0, v___x_5196_);
v___x_5198_ = v___x_5193_;
goto v_reusejp_5197_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v___x_5196_);
v___x_5198_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5197_;
}
v_reusejp_5197_:
{
lean_object* v___x_5199_; 
v___x_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
return v___x_5199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5202_, lean_object* v_headers_5203_, lean_object* v_x_5204_, lean_object* v___y_5205_){
_start:
{
uint16_t v___y_2853__boxed_5206_; lean_object* v_res_5207_; 
v___y_2853__boxed_5206_ = lean_unbox(v___y_5202_);
v_res_5207_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5206_, v_headers_5203_, v_x_5204_);
return v_res_5207_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5208_, lean_object* v___f_5209_, lean_object* v_x_5210_){
_start:
{
if (lean_obj_tag(v_x_5210_) == 0)
{
lean_object* v_a_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5220_; 
lean_dec_ref(v___f_5209_);
lean_dec(v_a_5208_);
v_a_5212_ = lean_ctor_get(v_x_5210_, 0);
v_isSharedCheck_5220_ = !lean_is_exclusive(v_x_5210_);
if (v_isSharedCheck_5220_ == 0)
{
v___x_5214_ = v_x_5210_;
v_isShared_5215_ = v_isSharedCheck_5220_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_a_5212_);
lean_dec(v_x_5210_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5220_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v___x_5217_; 
if (v_isShared_5215_ == 0)
{
v___x_5217_ = v___x_5214_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v_a_5212_);
v___x_5217_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
lean_object* v___x_5218_; 
v___x_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5218_, 0, v___x_5217_);
return v___x_5218_;
}
}
}
else
{
lean_object* v_a_5221_; lean_object* v___x_5223_; uint8_t v_isShared_5224_; uint8_t v_isSharedCheck_5245_; 
v_a_5221_ = lean_ctor_get(v_x_5210_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v_x_5210_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5223_ = v_x_5210_;
v_isShared_5224_ = v_isSharedCheck_5245_;
goto v_resetjp_5222_;
}
else
{
lean_inc(v_a_5221_);
lean_dec(v_x_5210_);
v___x_5223_ = lean_box(0);
v_isShared_5224_ = v_isSharedCheck_5245_;
goto v_resetjp_5222_;
}
v_resetjp_5222_:
{
lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; uint8_t v___x_5231_; lean_object* v_val_5233_; lean_object* v___x_5236_; 
v___x_5225_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5226_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5226_, 0, v_a_5208_);
lean_ctor_set(v___x_5226_, 1, v___x_5225_);
v___x_5227_ = lean_unsigned_to_nat(1u);
v___x_5228_ = lean_mk_empty_array_with_capacity(v___x_5227_);
v___x_5229_ = lean_array_push(v___x_5228_, v___x_5226_);
v___x_5230_ = lean_unsigned_to_nat(0u);
v___x_5231_ = 0;
v___x_5236_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5221_, v___x_5229_);
if (lean_obj_tag(v___x_5236_) == 0)
{
lean_object* v_a_5237_; lean_object* v___x_5239_; 
v_a_5237_ = lean_ctor_get(v___x_5236_, 0);
lean_inc(v_a_5237_);
lean_dec_ref_known(v___x_5236_, 1);
if (v_isShared_5224_ == 0)
{
lean_ctor_set(v___x_5223_, 0, v_a_5237_);
v___x_5239_ = v___x_5223_;
goto v_reusejp_5238_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v_a_5237_);
v___x_5239_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5238_;
}
v_reusejp_5238_:
{
v_val_5233_ = v___x_5239_;
goto v___jp_5232_;
}
}
else
{
lean_object* v_a_5241_; lean_object* v___x_5243_; 
v_a_5241_ = lean_ctor_get(v___x_5236_, 0);
lean_inc(v_a_5241_);
lean_dec_ref_known(v___x_5236_, 1);
if (v_isShared_5224_ == 0)
{
lean_ctor_set_tag(v___x_5223_, 0);
lean_ctor_set(v___x_5223_, 0, v_a_5241_);
v___x_5243_ = v___x_5223_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v_a_5241_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
v_val_5233_ = v___x_5243_;
goto v___jp_5232_;
}
}
v___jp_5232_:
{
lean_object* v___x_5234_; lean_object* v___x_5235_; 
v___x_5234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5234_, 0, v_val_5233_);
v___x_5235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5230_, v___x_5231_, v___x_5234_, v___f_5209_);
return v___x_5235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5246_, lean_object* v___f_5247_, lean_object* v_x_5248_, lean_object* v___y_5249_){
_start:
{
lean_object* v_res_5250_; 
v_res_5250_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5246_, v___f_5247_, v_x_5248_);
return v_res_5250_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5251_, lean_object* v_a_5252_, lean_object* v_x_5253_){
_start:
{
if (lean_obj_tag(v_x_5253_) == 0)
{
lean_object* v_a_5255_; lean_object* v___x_5257_; uint8_t v_isShared_5258_; uint8_t v_isSharedCheck_5263_; 
lean_dec(v_a_5252_);
lean_dec_ref(v___f_5251_);
v_a_5255_ = lean_ctor_get(v_x_5253_, 0);
v_isSharedCheck_5263_ = !lean_is_exclusive(v_x_5253_);
if (v_isSharedCheck_5263_ == 0)
{
v___x_5257_ = v_x_5253_;
v_isShared_5258_ = v_isSharedCheck_5263_;
goto v_resetjp_5256_;
}
else
{
lean_inc(v_a_5255_);
lean_dec(v_x_5253_);
v___x_5257_ = lean_box(0);
v_isShared_5258_ = v_isSharedCheck_5263_;
goto v_resetjp_5256_;
}
v_resetjp_5256_:
{
lean_object* v___x_5260_; 
if (v_isShared_5258_ == 0)
{
v___x_5260_ = v___x_5257_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5262_; 
v_reuseFailAlloc_5262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5262_, 0, v_a_5255_);
v___x_5260_ = v_reuseFailAlloc_5262_;
goto v_reusejp_5259_;
}
v_reusejp_5259_:
{
lean_object* v___x_5261_; 
v___x_5261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5261_, 0, v___x_5260_);
return v___x_5261_;
}
}
}
else
{
lean_object* v_a_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5285_; 
v_a_5264_ = lean_ctor_get(v_x_5253_, 0);
v_isSharedCheck_5285_ = !lean_is_exclusive(v_x_5253_);
if (v_isSharedCheck_5285_ == 0)
{
v___x_5266_ = v_x_5253_;
v_isShared_5267_ = v_isSharedCheck_5285_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_a_5264_);
lean_dec(v_x_5253_);
v___x_5266_ = lean_box(0);
v_isShared_5267_ = v_isSharedCheck_5285_;
goto v_resetjp_5265_;
}
v_resetjp_5265_:
{
lean_object* v___f_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; uint8_t v___x_5271_; lean_object* v_val_5273_; lean_object* v___x_5276_; 
v___f_5268_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5268_, 0, v_a_5264_);
lean_closure_set(v___f_5268_, 1, v___f_5251_);
v___x_5269_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5270_ = lean_unsigned_to_nat(0u);
v___x_5271_ = 0;
v___x_5276_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5252_, v___x_5269_);
if (lean_obj_tag(v___x_5276_) == 0)
{
lean_object* v_a_5277_; lean_object* v___x_5279_; 
v_a_5277_ = lean_ctor_get(v___x_5276_, 0);
lean_inc(v_a_5277_);
lean_dec_ref_known(v___x_5276_, 1);
if (v_isShared_5267_ == 0)
{
lean_ctor_set(v___x_5266_, 0, v_a_5277_);
v___x_5279_ = v___x_5266_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v_a_5277_);
v___x_5279_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
v_val_5273_ = v___x_5279_;
goto v___jp_5272_;
}
}
else
{
lean_object* v_a_5281_; lean_object* v___x_5283_; 
v_a_5281_ = lean_ctor_get(v___x_5276_, 0);
lean_inc(v_a_5281_);
lean_dec_ref_known(v___x_5276_, 1);
if (v_isShared_5267_ == 0)
{
lean_ctor_set_tag(v___x_5266_, 0);
lean_ctor_set(v___x_5266_, 0, v_a_5281_);
v___x_5283_ = v___x_5266_;
goto v_reusejp_5282_;
}
else
{
lean_object* v_reuseFailAlloc_5284_; 
v_reuseFailAlloc_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5284_, 0, v_a_5281_);
v___x_5283_ = v_reuseFailAlloc_5284_;
goto v_reusejp_5282_;
}
v_reusejp_5282_:
{
v_val_5273_ = v___x_5283_;
goto v___jp_5272_;
}
}
v___jp_5272_:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; 
v___x_5274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5274_, 0, v_val_5273_);
v___x_5275_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5270_, v___x_5271_, v___x_5274_, v___f_5268_);
return v___x_5275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5286_, lean_object* v_a_5287_, lean_object* v_x_5288_, lean_object* v___y_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5286_, v_a_5287_, v_x_5288_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5291_, lean_object* v_a_5292_, lean_object* v_a_5293_, lean_object* v_headers_5294_){
_start:
{
lean_object* v___x_5296_; lean_object* v___f_5297_; lean_object* v___f_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; uint8_t v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v___x_5296_ = lean_box(v___y_5291_);
v___f_5297_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5297_, 0, v___x_5296_);
lean_closure_set(v___f_5297_, 1, v_headers_5294_);
v___f_5298_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5298_, 0, v___f_5297_);
lean_closure_set(v___f_5298_, 1, v_a_5292_);
v___x_5299_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5300_ = lean_unsigned_to_nat(0u);
v___x_5301_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5302_ = 0;
v___x_5303_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5293_, v___x_5299_, v___x_5301_);
v___x_5304_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5300_, v___x_5302_, v___x_5303_, v___f_5298_);
return v___x_5304_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_, lean_object* v_headers_5308_, lean_object* v___y_5309_){
_start:
{
uint16_t v___y_3061__boxed_5310_; lean_object* v_res_5311_; 
v___y_3061__boxed_5310_ = lean_unbox(v___y_5305_);
v_res_5311_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5310_, v_a_5306_, v_a_5307_, v_headers_5308_);
return v_res_5311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5312_, lean_object* v_x_5313_){
_start:
{
if (lean_obj_tag(v_x_5313_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5323_; 
lean_dec_ref(v___f_5312_);
v_a_5315_ = lean_ctor_get(v_x_5313_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v_x_5313_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5317_ = v_x_5313_;
v_isShared_5318_ = v_isSharedCheck_5323_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v_x_5313_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5323_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v___x_5320_; 
if (v_isShared_5318_ == 0)
{
v___x_5320_ = v___x_5317_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5315_);
v___x_5320_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
lean_object* v___x_5321_; 
v___x_5321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5321_, 0, v___x_5320_);
return v___x_5321_;
}
}
}
else
{
lean_object* v_a_5324_; lean_object* v___x_5325_; 
v_a_5324_ = lean_ctor_get(v_x_5313_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v_x_5313_, 1);
v___x_5325_ = lean_apply_2(v___f_5312_, v_a_5324_, lean_box(0));
return v___x_5325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5326_, lean_object* v_x_5327_, lean_object* v___y_5328_){
_start:
{
lean_object* v_res_5329_; 
v_res_5329_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5326_, v_x_5327_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5330_, lean_object* v___f_5331_, lean_object* v_x_5332_){
_start:
{
if (lean_obj_tag(v_x_5332_) == 0)
{
lean_object* v_a_5334_; lean_object* v___x_5336_; uint8_t v_isShared_5337_; uint8_t v_isSharedCheck_5342_; 
lean_dec_ref(v___f_5331_);
lean_dec(v_value_5330_);
v_a_5334_ = lean_ctor_get(v_x_5332_, 0);
v_isSharedCheck_5342_ = !lean_is_exclusive(v_x_5332_);
if (v_isSharedCheck_5342_ == 0)
{
v___x_5336_ = v_x_5332_;
v_isShared_5337_ = v_isSharedCheck_5342_;
goto v_resetjp_5335_;
}
else
{
lean_inc(v_a_5334_);
lean_dec(v_x_5332_);
v___x_5336_ = lean_box(0);
v_isShared_5337_ = v_isSharedCheck_5342_;
goto v_resetjp_5335_;
}
v_resetjp_5335_:
{
lean_object* v___x_5339_; 
if (v_isShared_5337_ == 0)
{
v___x_5339_ = v___x_5336_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5341_; 
v_reuseFailAlloc_5341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5341_, 0, v_a_5334_);
v___x_5339_ = v_reuseFailAlloc_5341_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
lean_object* v___x_5340_; 
v___x_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5339_);
return v___x_5340_;
}
}
}
else
{
lean_object* v_a_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5368_; 
v_a_5343_ = lean_ctor_get(v_x_5332_, 0);
v_isSharedCheck_5368_ = !lean_is_exclusive(v_x_5332_);
if (v_isSharedCheck_5368_ == 0)
{
v___x_5345_ = v_x_5332_;
v_isShared_5346_ = v_isSharedCheck_5368_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_a_5343_);
lean_dec(v_x_5332_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5368_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; uint8_t v___x_5354_; lean_object* v_val_5356_; lean_object* v___x_5359_; 
v___x_5347_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5348_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5349_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5349_, 0, v_value_5330_);
lean_ctor_set(v___x_5349_, 1, v___x_5348_);
v___x_5350_ = lean_unsigned_to_nat(1u);
v___x_5351_ = lean_mk_empty_array_with_capacity(v___x_5350_);
v___x_5352_ = lean_array_push(v___x_5351_, v___x_5349_);
v___x_5353_ = lean_unsigned_to_nat(0u);
v___x_5354_ = 0;
v___x_5359_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5343_, v___x_5347_, v___x_5352_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; lean_object* v___x_5362_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
lean_dec_ref_known(v___x_5359_, 1);
if (v_isShared_5346_ == 0)
{
lean_ctor_set(v___x_5345_, 0, v_a_5360_);
v___x_5362_ = v___x_5345_;
goto v_reusejp_5361_;
}
else
{
lean_object* v_reuseFailAlloc_5363_; 
v_reuseFailAlloc_5363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5363_, 0, v_a_5360_);
v___x_5362_ = v_reuseFailAlloc_5363_;
goto v_reusejp_5361_;
}
v_reusejp_5361_:
{
v_val_5356_ = v___x_5362_;
goto v___jp_5355_;
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; 
v_a_5364_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5359_, 1);
if (v_isShared_5346_ == 0)
{
lean_ctor_set_tag(v___x_5345_, 0);
lean_ctor_set(v___x_5345_, 0, v_a_5364_);
v___x_5366_ = v___x_5345_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5367_; 
v_reuseFailAlloc_5367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5367_, 0, v_a_5364_);
v___x_5366_ = v_reuseFailAlloc_5367_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
v_val_5356_ = v___x_5366_;
goto v___jp_5355_;
}
}
v___jp_5355_:
{
lean_object* v___x_5357_; lean_object* v___x_5358_; 
v___x_5357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5357_, 0, v_val_5356_);
v___x_5358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5353_, v___x_5354_, v___x_5357_, v___f_5331_);
return v___x_5358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5369_, lean_object* v___f_5370_, lean_object* v_x_5371_, lean_object* v___y_5372_){
_start:
{
lean_object* v_res_5373_; 
v_res_5373_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5369_, v___f_5370_, v_x_5371_);
return v_res_5373_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5378_, lean_object* v_a_5379_, lean_object* v___x_5380_, lean_object* v___x_5381_, lean_object* v_x_5382_){
_start:
{
uint8_t v___y_5385_; lean_object* v___y_5386_; lean_object* v___y_5387_; lean_object* v_val_5388_; 
if (lean_obj_tag(v_x_5382_) == 0)
{
lean_object* v_a_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5399_; 
lean_dec(v_a_5379_);
lean_dec(v_a_5378_);
v_a_5391_ = lean_ctor_get(v_x_5382_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v_x_5382_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5393_ = v_x_5382_;
v_isShared_5394_ = v_isSharedCheck_5399_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_a_5391_);
lean_dec(v_x_5382_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5399_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_a_5391_);
v___x_5396_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
lean_object* v___x_5397_; 
v___x_5397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5397_, 0, v___x_5396_);
return v___x_5397_;
}
}
}
else
{
lean_object* v_a_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5433_; 
v_a_5400_ = lean_ctor_get(v_x_5382_, 0);
v_isSharedCheck_5433_ = !lean_is_exclusive(v_x_5382_);
if (v_isSharedCheck_5433_ == 0)
{
v___x_5402_ = v_x_5382_;
v_isShared_5403_ = v_isSharedCheck_5433_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_a_5400_);
lean_dec(v_x_5382_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5433_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
uint16_t v___y_5405_; lean_object* v___x_5429_; 
v___x_5429_ = l_Lasm_JS_Data_field(v_a_5400_, v___x_5381_);
if (lean_obj_tag(v___x_5429_) == 3)
{
double v_n_5430_; uint16_t v___x_5431_; 
v_n_5430_ = lean_ctor_get_float(v___x_5429_, 0);
lean_dec_ref_known(v___x_5429_, 0);
v___x_5431_ = lean_float_to_uint16(v_n_5430_);
v___y_5405_ = v___x_5431_;
goto v___jp_5404_;
}
else
{
uint16_t v___x_5432_; 
lean_dec(v___x_5429_);
v___x_5432_ = 0;
v___y_5405_ = v___x_5432_;
goto v___jp_5404_;
}
v___jp_5404_:
{
lean_object* v___x_5406_; lean_object* v___f_5407_; lean_object* v___x_5408_; 
v___x_5406_ = lean_box(v___y_5405_);
lean_inc(v_a_5378_);
v___f_5407_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5407_, 0, v___x_5406_);
lean_closure_set(v___f_5407_, 1, v_a_5378_);
lean_closure_set(v___f_5407_, 2, v_a_5379_);
v___x_5408_ = l_Lasm_JS_Data_field(v_a_5400_, v___x_5380_);
lean_dec(v_a_5400_);
if (lean_obj_tag(v___x_5408_) == 9)
{
lean_object* v_value_5409_; lean_object* v___f_5410_; lean_object* v___f_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; uint8_t v___x_5414_; lean_object* v___x_5415_; 
v_value_5409_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_value_5409_);
lean_dec_ref_known(v___x_5408_, 2);
v___f_5410_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5410_, 0, v___f_5407_);
v___f_5411_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5411_, 0, v_value_5409_);
lean_closure_set(v___f_5411_, 1, v___f_5410_);
v___x_5412_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5413_ = lean_unsigned_to_nat(0u);
v___x_5414_ = 0;
v___x_5415_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5378_, v___x_5412_);
if (lean_obj_tag(v___x_5415_) == 0)
{
lean_object* v_a_5416_; lean_object* v___x_5418_; 
v_a_5416_ = lean_ctor_get(v___x_5415_, 0);
lean_inc(v_a_5416_);
lean_dec_ref_known(v___x_5415_, 1);
if (v_isShared_5403_ == 0)
{
lean_ctor_set(v___x_5402_, 0, v_a_5416_);
v___x_5418_ = v___x_5402_;
goto v_reusejp_5417_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v_a_5416_);
v___x_5418_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5417_;
}
v_reusejp_5417_:
{
v___y_5385_ = v___x_5414_;
v___y_5386_ = v___x_5413_;
v___y_5387_ = v___f_5411_;
v_val_5388_ = v___x_5418_;
goto v___jp_5384_;
}
}
else
{
lean_object* v_a_5420_; lean_object* v___x_5422_; 
v_a_5420_ = lean_ctor_get(v___x_5415_, 0);
lean_inc(v_a_5420_);
lean_dec_ref_known(v___x_5415_, 1);
if (v_isShared_5403_ == 0)
{
lean_ctor_set_tag(v___x_5402_, 0);
lean_ctor_set(v___x_5402_, 0, v_a_5420_);
v___x_5422_ = v___x_5402_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5420_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
v___y_5385_ = v___x_5414_;
v___y_5386_ = v___x_5413_;
v___y_5387_ = v___f_5411_;
v_val_5388_ = v___x_5422_;
goto v___jp_5384_;
}
}
}
else
{
lean_object* v___f_5424_; lean_object* v___x_5425_; uint8_t v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
lean_dec(v___x_5408_);
lean_del_object(v___x_5402_);
lean_dec(v_a_5378_);
v___f_5424_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5424_, 0, v___f_5407_);
v___x_5425_ = lean_unsigned_to_nat(0u);
v___x_5426_ = 0;
v___x_5427_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5425_, v___x_5426_, v___x_5427_, v___f_5424_);
return v___x_5428_;
}
}
}
}
v___jp_5384_:
{
lean_object* v___x_5389_; lean_object* v___x_5390_; 
v___x_5389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5389_, 0, v_val_5388_);
v___x_5390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5386_, v___y_5385_, v___x_5389_, v___y_5387_);
return v___x_5390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5434_, lean_object* v_a_5435_, lean_object* v___x_5436_, lean_object* v___x_5437_, lean_object* v_x_5438_, lean_object* v___y_5439_){
_start:
{
lean_object* v_res_5440_; 
v_res_5440_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5434_, v_a_5435_, v___x_5436_, v___x_5437_, v_x_5438_);
lean_dec_ref(v___x_5437_);
lean_dec_ref(v___x_5436_);
return v_res_5440_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; 
v___x_5441_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5442_ = lean_unsigned_to_nat(2u);
v___x_5443_ = lean_mk_empty_array_with_capacity(v___x_5442_);
v___x_5444_ = lean_array_push(v___x_5443_, v___x_5441_);
return v___x_5444_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5445_, lean_object* v___x_5446_, lean_object* v_x_5447_){
_start:
{
if (lean_obj_tag(v_x_5447_) == 0)
{
lean_object* v_a_5449_; lean_object* v___x_5451_; uint8_t v_isShared_5452_; uint8_t v_isSharedCheck_5457_; 
lean_dec_ref(v___x_5446_);
lean_dec(v_a_5445_);
v_a_5449_ = lean_ctor_get(v_x_5447_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v_x_5447_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5451_ = v_x_5447_;
v_isShared_5452_ = v_isSharedCheck_5457_;
goto v_resetjp_5450_;
}
else
{
lean_inc(v_a_5449_);
lean_dec(v_x_5447_);
v___x_5451_ = lean_box(0);
v_isShared_5452_ = v_isSharedCheck_5457_;
goto v_resetjp_5450_;
}
v_resetjp_5450_:
{
lean_object* v___x_5454_; 
if (v_isShared_5452_ == 0)
{
v___x_5454_ = v___x_5451_;
goto v_reusejp_5453_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5449_);
v___x_5454_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5453_;
}
v_reusejp_5453_:
{
lean_object* v___x_5455_; 
v___x_5455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5454_);
return v___x_5455_;
}
}
}
else
{
lean_object* v_a_5458_; lean_object* v___x_5460_; uint8_t v_isShared_5461_; uint8_t v_isSharedCheck_5481_; 
v_a_5458_ = lean_ctor_get(v_x_5447_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v_x_5447_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5460_ = v_x_5447_;
v_isShared_5461_ = v_isSharedCheck_5481_;
goto v_resetjp_5459_;
}
else
{
lean_inc(v_a_5458_);
lean_dec(v_x_5447_);
v___x_5460_ = lean_box(0);
v_isShared_5461_ = v_isSharedCheck_5481_;
goto v_resetjp_5459_;
}
v_resetjp_5459_:
{
lean_object* v___x_5462_; lean_object* v___f_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; uint8_t v___x_5467_; lean_object* v_val_5469_; lean_object* v___x_5472_; 
v___x_5462_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5446_);
lean_inc(v_a_5458_);
v___f_5463_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5463_, 0, v_a_5445_);
lean_closure_set(v___f_5463_, 1, v_a_5458_);
lean_closure_set(v___f_5463_, 2, v___x_5446_);
lean_closure_set(v___f_5463_, 3, v___x_5462_);
v___x_5464_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5465_ = lean_array_push(v___x_5464_, v___x_5446_);
v___x_5466_ = lean_unsigned_to_nat(0u);
v___x_5467_ = 0;
v___x_5472_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5458_, v___x_5465_);
if (lean_obj_tag(v___x_5472_) == 0)
{
lean_object* v_a_5473_; lean_object* v___x_5475_; 
v_a_5473_ = lean_ctor_get(v___x_5472_, 0);
lean_inc(v_a_5473_);
lean_dec_ref_known(v___x_5472_, 1);
if (v_isShared_5461_ == 0)
{
lean_ctor_set(v___x_5460_, 0, v_a_5473_);
v___x_5475_ = v___x_5460_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v_a_5473_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
v_val_5469_ = v___x_5475_;
goto v___jp_5468_;
}
}
else
{
lean_object* v_a_5477_; lean_object* v___x_5479_; 
v_a_5477_ = lean_ctor_get(v___x_5472_, 0);
lean_inc(v_a_5477_);
lean_dec_ref_known(v___x_5472_, 1);
if (v_isShared_5461_ == 0)
{
lean_ctor_set_tag(v___x_5460_, 0);
lean_ctor_set(v___x_5460_, 0, v_a_5477_);
v___x_5479_ = v___x_5460_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v_a_5477_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
v_val_5469_ = v___x_5479_;
goto v___jp_5468_;
}
}
v___jp_5468_:
{
lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5470_, 0, v_val_5469_);
v___x_5471_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5466_, v___x_5467_, v___x_5470_, v___f_5463_);
return v___x_5471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5482_, lean_object* v___x_5483_, lean_object* v_x_5484_, lean_object* v___y_5485_){
_start:
{
lean_object* v_res_5486_; 
v_res_5486_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5482_, v___x_5483_, v_x_5484_);
return v_res_5486_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5488_; uint8_t v___x_5489_; uint64_t v___x_5490_; 
v___x_5488_ = 0ULL;
v___x_5489_ = 0;
v___x_5490_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5489_, v___x_5488_);
return v___x_5490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5491_, lean_object* v_args_5492_, lean_object* v_this_5493_){
_start:
{
lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; uint32_t v___x_5498_; uint64_t v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; 
v___x_5495_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5496_, 0, v_f_5491_);
lean_ctor_set(v___x_5496_, 1, v___x_5495_);
v___x_5497_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5498_ = 205;
v___x_5499_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5500_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5500_, 0, v_args_5492_);
v___x_5501_ = lean_unsigned_to_nat(3u);
v___x_5502_ = lean_mk_empty_array_with_capacity(v___x_5501_);
v___x_5503_ = lean_array_push(v___x_5502_, v___x_5496_);
v___x_5504_ = lean_array_push(v___x_5503_, v_this_5493_);
v___x_5505_ = lean_array_push(v___x_5504_, v___x_5500_);
v___x_5506_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5506_, 0, v___x_5505_);
v___x_5507_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5497_, v___x_5498_, v___x_5499_, v___x_5506_, v___x_5495_);
return v___x_5507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5508_, lean_object* v_args_5509_, lean_object* v_this_5510_, lean_object* v___y_5511_){
_start:
{
lean_object* v_res_5512_; 
v_res_5512_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5508_, v_args_5509_, v_this_5510_);
return v_res_5512_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5523_, lean_object* v_a_5524_, lean_object* v_x_5525_){
_start:
{
if (lean_obj_tag(v_x_5525_) == 0)
{
lean_object* v_a_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5535_; 
lean_dec(v_a_5524_);
lean_dec_ref(v_req_5523_);
v_a_5527_ = lean_ctor_get(v_x_5525_, 0);
v_isSharedCheck_5535_ = !lean_is_exclusive(v_x_5525_);
if (v_isSharedCheck_5535_ == 0)
{
v___x_5529_ = v_x_5525_;
v_isShared_5530_ = v_isSharedCheck_5535_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_a_5527_);
lean_dec(v_x_5525_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5535_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
lean_object* v___x_5532_; 
if (v_isShared_5530_ == 0)
{
v___x_5532_ = v___x_5529_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_a_5527_);
v___x_5532_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
lean_object* v___x_5533_; 
v___x_5533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5532_);
return v___x_5533_;
}
}
}
else
{
lean_object* v_a_5536_; lean_object* v_method_5537_; lean_object* v_url_5538_; lean_object* v_headers_5539_; lean_object* v_body_5540_; lean_object* v___y_5542_; lean_object* v___x_5572_; uint8_t v___x_5573_; 
v_a_5536_ = lean_ctor_get(v_x_5525_, 0);
lean_inc(v_a_5536_);
lean_dec_ref_known(v_x_5525_, 1);
v_method_5537_ = lean_ctor_get(v_req_5523_, 0);
lean_inc_ref(v_method_5537_);
v_url_5538_ = lean_ctor_get(v_req_5523_, 1);
lean_inc_ref(v_url_5538_);
v_headers_5539_ = lean_ctor_get(v_req_5523_, 2);
lean_inc_ref(v_headers_5539_);
v_body_5540_ = lean_ctor_get(v_req_5523_, 3);
lean_inc_ref(v_body_5540_);
lean_dec_ref(v_req_5523_);
v___x_5572_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5573_ = lean_string_dec_eq(v_method_5537_, v___x_5572_);
if (v___x_5573_ == 0)
{
lean_object* v___x_5574_; uint8_t v___x_5575_; 
v___x_5574_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5575_ = lean_string_dec_eq(v_method_5537_, v___x_5574_);
if (v___x_5575_ == 0)
{
lean_object* v___x_5576_; 
v___x_5576_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5576_, 0, v_body_5540_);
v___y_5542_ = v___x_5576_;
goto v___jp_5541_;
}
else
{
lean_dec_ref(v_body_5540_);
goto v___jp_5570_;
}
}
else
{
lean_dec_ref(v_body_5540_);
goto v___jp_5570_;
}
v___jp_5541_:
{
lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___f_5547_; size_t v_sz_5548_; size_t v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; uint8_t v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; 
v___x_5543_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5544_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5544_, 0, v_method_5537_);
v___x_5545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5545_, 0, v___x_5543_);
lean_ctor_set(v___x_5545_, 1, v___x_5544_);
v___x_5546_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5547_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5547_, 0, v_a_5524_);
lean_closure_set(v___f_5547_, 1, v___x_5546_);
v_sz_5548_ = lean_array_size(v_headers_5539_);
v___x_5549_ = ((size_t)0ULL);
v___x_5550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5548_, v___x_5549_, v_headers_5539_);
v___x_5551_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5551_, 0, v___x_5550_);
v___x_5552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5552_, 0, v___x_5546_);
lean_ctor_set(v___x_5552_, 1, v___x_5551_);
v___x_5553_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5554_, 0, v___x_5553_);
lean_ctor_set(v___x_5554_, 1, v___y_5542_);
v___x_5555_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5556_, 0, v___x_5554_);
lean_ctor_set(v___x_5556_, 1, v___x_5555_);
v___x_5557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5552_);
lean_ctor_set(v___x_5557_, 1, v___x_5556_);
v___x_5558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5545_);
lean_ctor_set(v___x_5558_, 1, v___x_5557_);
v___x_5559_ = l_Lasm_JS_obj(v___x_5558_);
v___x_5560_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5560_, 0, v_url_5538_);
v___x_5561_ = lean_unsigned_to_nat(2u);
v___x_5562_ = lean_mk_empty_array_with_capacity(v___x_5561_);
v___x_5563_ = lean_array_push(v___x_5562_, v___x_5560_);
v___x_5564_ = lean_array_push(v___x_5563_, v___x_5559_);
v___x_5565_ = lean_box(0);
v___x_5566_ = lean_unsigned_to_nat(0u);
v___x_5567_ = 0;
v___x_5568_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5536_, v___x_5564_, v___x_5565_);
v___x_5569_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5566_, v___x_5567_, v___x_5568_, v___f_5547_);
return v___x_5569_;
}
v___jp_5570_:
{
lean_object* v___x_5571_; 
v___x_5571_ = lean_box(0);
v___y_5542_ = v___x_5571_;
goto v___jp_5541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5577_, lean_object* v_a_5578_, lean_object* v_x_5579_, lean_object* v___y_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5577_, v_a_5578_, v_x_5579_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5583_, lean_object* v_x_5584_){
_start:
{
if (lean_obj_tag(v_x_5584_) == 0)
{
lean_object* v_a_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5594_; 
lean_dec_ref(v_req_5583_);
v_a_5586_ = lean_ctor_get(v_x_5584_, 0);
v_isSharedCheck_5594_ = !lean_is_exclusive(v_x_5584_);
if (v_isSharedCheck_5594_ == 0)
{
v___x_5588_ = v_x_5584_;
v_isShared_5589_ = v_isSharedCheck_5594_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_a_5586_);
lean_dec(v_x_5584_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5594_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_a_5586_);
v___x_5591_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
lean_object* v___x_5592_; 
v___x_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5592_, 0, v___x_5591_);
return v___x_5592_;
}
}
}
else
{
lean_object* v_a_5595_; lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5616_; 
v_a_5595_ = lean_ctor_get(v_x_5584_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v_x_5584_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5597_ = v_x_5584_;
v_isShared_5598_ = v_isSharedCheck_5616_;
goto v_resetjp_5596_;
}
else
{
lean_inc(v_a_5595_);
lean_dec(v_x_5584_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5616_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v___f_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; uint8_t v___x_5602_; lean_object* v_val_5604_; lean_object* v___x_5607_; 
lean_inc(v_a_5595_);
v___f_5599_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5599_, 0, v_req_5583_);
lean_closure_set(v___f_5599_, 1, v_a_5595_);
v___x_5600_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5601_ = lean_unsigned_to_nat(0u);
v___x_5602_ = 0;
v___x_5607_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5595_, v___x_5600_);
if (lean_obj_tag(v___x_5607_) == 0)
{
lean_object* v_a_5608_; lean_object* v___x_5610_; 
v_a_5608_ = lean_ctor_get(v___x_5607_, 0);
lean_inc(v_a_5608_);
lean_dec_ref_known(v___x_5607_, 1);
if (v_isShared_5598_ == 0)
{
lean_ctor_set(v___x_5597_, 0, v_a_5608_);
v___x_5610_ = v___x_5597_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_a_5608_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
v_val_5604_ = v___x_5610_;
goto v___jp_5603_;
}
}
else
{
lean_object* v_a_5612_; lean_object* v___x_5614_; 
v_a_5612_ = lean_ctor_get(v___x_5607_, 0);
lean_inc(v_a_5612_);
lean_dec_ref_known(v___x_5607_, 1);
if (v_isShared_5598_ == 0)
{
lean_ctor_set_tag(v___x_5597_, 0);
lean_ctor_set(v___x_5597_, 0, v_a_5612_);
v___x_5614_ = v___x_5597_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_a_5612_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
v_val_5604_ = v___x_5614_;
goto v___jp_5603_;
}
}
v___jp_5603_:
{
lean_object* v___x_5605_; lean_object* v___x_5606_; 
v___x_5605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5605_, 0, v_val_5604_);
v___x_5606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5601_, v___x_5602_, v___x_5605_, v___f_5599_);
return v___x_5606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5617_, lean_object* v_x_5618_, lean_object* v___y_5619_){
_start:
{
lean_object* v_res_5620_; 
v_res_5620_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5617_, v_x_5618_);
return v_res_5620_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5621_){
_start:
{
lean_object* v___f_5623_; lean_object* v___x_5624_; uint8_t v___x_5625_; lean_object* v_val_5627_; lean_object* v___x_5630_; 
v___f_5623_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5623_, 0, v_req_5621_);
v___x_5624_ = lean_unsigned_to_nat(0u);
v___x_5625_ = 0;
v___x_5630_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5630_) == 0)
{
lean_object* v_a_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5638_; 
v_a_5631_ = lean_ctor_get(v___x_5630_, 0);
v_isSharedCheck_5638_ = !lean_is_exclusive(v___x_5630_);
if (v_isSharedCheck_5638_ == 0)
{
v___x_5633_ = v___x_5630_;
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_a_5631_);
lean_dec(v___x_5630_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5636_; 
if (v_isShared_5634_ == 0)
{
lean_ctor_set_tag(v___x_5633_, 1);
v___x_5636_ = v___x_5633_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_a_5631_);
v___x_5636_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
v_val_5627_ = v___x_5636_;
goto v___jp_5626_;
}
}
}
else
{
lean_object* v_a_5639_; lean_object* v___x_5641_; uint8_t v_isShared_5642_; uint8_t v_isSharedCheck_5646_; 
v_a_5639_ = lean_ctor_get(v___x_5630_, 0);
v_isSharedCheck_5646_ = !lean_is_exclusive(v___x_5630_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5641_ = v___x_5630_;
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
else
{
lean_inc(v_a_5639_);
lean_dec(v___x_5630_);
v___x_5641_ = lean_box(0);
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
v_resetjp_5640_:
{
lean_object* v___x_5644_; 
if (v_isShared_5642_ == 0)
{
lean_ctor_set_tag(v___x_5641_, 0);
v___x_5644_ = v___x_5641_;
goto v_reusejp_5643_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_a_5639_);
v___x_5644_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5643_;
}
v_reusejp_5643_:
{
v_val_5627_ = v___x_5644_;
goto v___jp_5626_;
}
}
}
v___jp_5626_:
{
lean_object* v___x_5628_; lean_object* v___x_5629_; 
v___x_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5628_, 0, v_val_5627_);
v___x_5629_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5624_, v___x_5625_, v___x_5628_, v___f_5623_);
return v___x_5629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5647_, lean_object* v_a_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5647_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5650_){
_start:
{
if (lean_obj_tag(v_x_5650_) == 0)
{
lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5660_; 
v_a_5652_ = lean_ctor_get(v_x_5650_, 0);
v_isSharedCheck_5660_ = !lean_is_exclusive(v_x_5650_);
if (v_isSharedCheck_5660_ == 0)
{
v___x_5654_ = v_x_5650_;
v_isShared_5655_ = v_isSharedCheck_5660_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v_x_5650_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5660_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___x_5657_; 
if (v_isShared_5655_ == 0)
{
v___x_5657_ = v___x_5654_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5659_; 
v_reuseFailAlloc_5659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5659_, 0, v_a_5652_);
v___x_5657_ = v_reuseFailAlloc_5659_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
lean_object* v___x_5658_; 
v___x_5658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5657_);
return v___x_5658_;
}
}
}
else
{
lean_object* v_a_5661_; lean_object* v___x_5662_; 
v_a_5661_ = lean_ctor_get(v_x_5650_, 0);
lean_inc(v_a_5661_);
lean_dec_ref_known(v_x_5650_, 1);
v___x_5662_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5661_);
lean_dec(v_a_5661_);
if (lean_obj_tag(v___x_5662_) == 0)
{
lean_object* v_a_5663_; lean_object* v___x_5665_; uint8_t v_isShared_5666_; uint8_t v_isSharedCheck_5672_; 
v_a_5663_ = lean_ctor_get(v___x_5662_, 0);
v_isSharedCheck_5672_ = !lean_is_exclusive(v___x_5662_);
if (v_isSharedCheck_5672_ == 0)
{
v___x_5665_ = v___x_5662_;
v_isShared_5666_ = v_isSharedCheck_5672_;
goto v_resetjp_5664_;
}
else
{
lean_inc(v_a_5663_);
lean_dec(v___x_5662_);
v___x_5665_ = lean_box(0);
v_isShared_5666_ = v_isSharedCheck_5672_;
goto v_resetjp_5664_;
}
v_resetjp_5664_:
{
lean_object* v___x_5667_; lean_object* v___x_5669_; 
v___x_5667_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5667_, 0, v_a_5663_);
if (v_isShared_5666_ == 0)
{
lean_ctor_set(v___x_5665_, 0, v___x_5667_);
v___x_5669_ = v___x_5665_;
goto v_reusejp_5668_;
}
else
{
lean_object* v_reuseFailAlloc_5671_; 
v_reuseFailAlloc_5671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5671_, 0, v___x_5667_);
v___x_5669_ = v_reuseFailAlloc_5671_;
goto v_reusejp_5668_;
}
v_reusejp_5668_:
{
lean_object* v___x_5670_; 
v___x_5670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5670_, 0, v___x_5669_);
return v___x_5670_;
}
}
}
else
{
lean_object* v_a_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5681_; 
v_a_5673_ = lean_ctor_get(v___x_5662_, 0);
v_isSharedCheck_5681_ = !lean_is_exclusive(v___x_5662_);
if (v_isSharedCheck_5681_ == 0)
{
v___x_5675_ = v___x_5662_;
v_isShared_5676_ = v_isSharedCheck_5681_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_a_5673_);
lean_dec(v___x_5662_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5681_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5678_; 
if (v_isShared_5676_ == 0)
{
v___x_5678_ = v___x_5675_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5680_; 
v_reuseFailAlloc_5680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5680_, 0, v_a_5673_);
v___x_5678_ = v_reuseFailAlloc_5680_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
lean_object* v___x_5679_; 
v___x_5679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5679_, 0, v___x_5678_);
return v___x_5679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5682_, lean_object* v___y_5683_){
_start:
{
lean_object* v_res_5684_; 
v_res_5684_ = l_Lasm_Fetch_fetch___lam__0(v_x_5682_);
return v_res_5684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5690_){
_start:
{
if (lean_obj_tag(v_x_5690_) == 0)
{
lean_object* v___x_5691_; 
v___x_5691_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5691_;
}
else
{
lean_object* v_val_5692_; 
v_val_5692_ = lean_ctor_get(v_x_5690_, 0);
lean_inc(v_val_5692_);
return v_val_5692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5693_){
_start:
{
lean_object* v_res_5694_; 
v_res_5694_ = l_Lasm_Fetch_fetch___lam__1(v_x_5693_);
lean_dec(v_x_5693_);
return v_res_5694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5695_, lean_object* v___f_5696_, uint8_t v___x_5697_, lean_object* v___f_5698_, lean_object* v_x_5699_){
_start:
{
if (lean_obj_tag(v_x_5699_) == 0)
{
lean_object* v_a_5701_; lean_object* v___x_5703_; uint8_t v_isShared_5704_; uint8_t v_isSharedCheck_5709_; 
lean_dec_ref(v___f_5698_);
lean_dec_ref(v___f_5696_);
v_a_5701_ = lean_ctor_get(v_x_5699_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v_x_5699_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5703_ = v_x_5699_;
v_isShared_5704_ = v_isSharedCheck_5709_;
goto v_resetjp_5702_;
}
else
{
lean_inc(v_a_5701_);
lean_dec(v_x_5699_);
v___x_5703_ = lean_box(0);
v_isShared_5704_ = v_isSharedCheck_5709_;
goto v_resetjp_5702_;
}
v_resetjp_5702_:
{
lean_object* v___x_5706_; 
if (v_isShared_5704_ == 0)
{
v___x_5706_ = v___x_5703_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_a_5701_);
v___x_5706_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
lean_object* v___x_5707_; 
v___x_5707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5707_, 0, v___x_5706_);
return v___x_5707_;
}
}
}
else
{
lean_object* v___x_5710_; lean_object* v___x_5711_; uint8_t v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; 
lean_dec_ref_known(v_x_5699_, 1);
v___x_5710_ = lean_io_promise_result_opt(v_a_5695_);
v___x_5711_ = lean_unsigned_to_nat(0u);
v___x_5712_ = 1;
v___x_5713_ = lean_task_map(v___f_5696_, v___x_5710_, v___x_5711_, v___x_5712_);
v___x_5714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
v___x_5715_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5711_, v___x_5697_, v___x_5714_, v___f_5698_);
return v___x_5715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5716_, lean_object* v___f_5717_, lean_object* v___x_5718_, lean_object* v___f_5719_, lean_object* v_x_5720_, lean_object* v___y_5721_){
_start:
{
uint8_t v___x_1064__boxed_5722_; lean_object* v_res_5723_; 
v___x_1064__boxed_5722_ = lean_unbox(v___x_5718_);
v_res_5723_ = l_Lasm_Fetch_fetch___lam__2(v_a_5716_, v___f_5717_, v___x_1064__boxed_5722_, v___f_5719_, v_x_5720_);
lean_dec(v_a_5716_);
return v_res_5723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5724_, lean_object* v___f_5725_, uint8_t v___x_5726_, lean_object* v___f_5727_, lean_object* v_options_5728_, lean_object* v_x_5729_){
_start:
{
if (lean_obj_tag(v_x_5729_) == 0)
{
lean_object* v_a_5731_; lean_object* v___x_5733_; uint8_t v_isShared_5734_; uint8_t v_isSharedCheck_5739_; 
lean_dec_ref(v___f_5727_);
lean_dec_ref(v___f_5725_);
v_a_5731_ = lean_ctor_get(v_x_5729_, 0);
v_isSharedCheck_5739_ = !lean_is_exclusive(v_x_5729_);
if (v_isSharedCheck_5739_ == 0)
{
v___x_5733_ = v_x_5729_;
v_isShared_5734_ = v_isSharedCheck_5739_;
goto v_resetjp_5732_;
}
else
{
lean_inc(v_a_5731_);
lean_dec(v_x_5729_);
v___x_5733_ = lean_box(0);
v_isShared_5734_ = v_isSharedCheck_5739_;
goto v_resetjp_5732_;
}
v_resetjp_5732_:
{
lean_object* v___x_5736_; 
if (v_isShared_5734_ == 0)
{
v___x_5736_ = v___x_5733_;
goto v_reusejp_5735_;
}
else
{
lean_object* v_reuseFailAlloc_5738_; 
v_reuseFailAlloc_5738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5738_, 0, v_a_5731_);
v___x_5736_ = v_reuseFailAlloc_5738_;
goto v_reusejp_5735_;
}
v_reusejp_5735_:
{
lean_object* v___x_5737_; 
v___x_5737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5737_, 0, v___x_5736_);
return v___x_5737_;
}
}
}
else
{
lean_object* v_a_5740_; lean_object* v___x_5742_; uint8_t v_isShared_5743_; uint8_t v_isSharedCheck_5770_; 
v_a_5740_ = lean_ctor_get(v_x_5729_, 0);
v_isSharedCheck_5770_ = !lean_is_exclusive(v_x_5729_);
if (v_isSharedCheck_5770_ == 0)
{
v___x_5742_ = v_x_5729_;
v_isShared_5743_ = v_isSharedCheck_5770_;
goto v_resetjp_5741_;
}
else
{
lean_inc(v_a_5740_);
lean_dec(v_x_5729_);
v___x_5742_ = lean_box(0);
v_isShared_5743_ = v_isSharedCheck_5770_;
goto v_resetjp_5741_;
}
v_resetjp_5741_:
{
lean_object* v_method_5744_; lean_object* v_url_5745_; lean_object* v_headers_5746_; lean_object* v_body_5747_; lean_object* v___x_5748_; lean_object* v___f_5749_; lean_object* v___y_5751_; uint8_t v___y_5752_; lean_object* v_val_5753_; lean_object* v___y_5757_; 
v_method_5744_ = lean_ctor_get(v_req_5724_, 0);
v_url_5745_ = lean_ctor_get(v_req_5724_, 1);
v_headers_5746_ = lean_ctor_get(v_req_5724_, 2);
v_body_5747_ = lean_ctor_get(v_req_5724_, 3);
v___x_5748_ = lean_box(v___x_5726_);
lean_inc(v_a_5740_);
v___f_5749_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5749_, 0, v_a_5740_);
lean_closure_set(v___f_5749_, 1, v___f_5725_);
lean_closure_set(v___f_5749_, 2, v___x_5748_);
lean_closure_set(v___f_5749_, 3, v___f_5727_);
if (lean_obj_tag(v_options_5728_) == 0)
{
lean_object* v___x_5768_; 
v___x_5768_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5757_ = v___x_5768_;
goto v___jp_5756_;
}
else
{
lean_object* v_val_5769_; 
v_val_5769_ = lean_ctor_get(v_options_5728_, 0);
v___y_5757_ = v_val_5769_;
goto v___jp_5756_;
}
v___jp_5750_:
{
lean_object* v___x_5754_; lean_object* v___x_5755_; 
v___x_5754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5754_, 0, v_val_5753_);
v___x_5755_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5751_, v___y_5752_, v___x_5754_, v___f_5749_);
return v___x_5755_;
}
v___jp_5756_:
{
lean_object* v___x_5758_; lean_object* v___x_5759_; 
v___x_5758_ = lean_unsigned_to_nat(0u);
v___x_5759_ = lasm_fetch_send(v_a_5740_, v_method_5744_, v_url_5745_, v_headers_5746_, v_body_5747_, v___y_5757_);
lean_dec(v_a_5740_);
if (lean_obj_tag(v___x_5759_) == 0)
{
lean_object* v_a_5760_; lean_object* v___x_5762_; 
v_a_5760_ = lean_ctor_get(v___x_5759_, 0);
lean_inc(v_a_5760_);
lean_dec_ref_known(v___x_5759_, 1);
if (v_isShared_5743_ == 0)
{
lean_ctor_set(v___x_5742_, 0, v_a_5760_);
v___x_5762_ = v___x_5742_;
goto v_reusejp_5761_;
}
else
{
lean_object* v_reuseFailAlloc_5763_; 
v_reuseFailAlloc_5763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5763_, 0, v_a_5760_);
v___x_5762_ = v_reuseFailAlloc_5763_;
goto v_reusejp_5761_;
}
v_reusejp_5761_:
{
v___y_5751_ = v___x_5758_;
v___y_5752_ = v___x_5726_;
v_val_5753_ = v___x_5762_;
goto v___jp_5750_;
}
}
else
{
lean_object* v_a_5764_; lean_object* v___x_5766_; 
v_a_5764_ = lean_ctor_get(v___x_5759_, 0);
lean_inc(v_a_5764_);
lean_dec_ref_known(v___x_5759_, 1);
if (v_isShared_5743_ == 0)
{
lean_ctor_set_tag(v___x_5742_, 0);
lean_ctor_set(v___x_5742_, 0, v_a_5764_);
v___x_5766_ = v___x_5742_;
goto v_reusejp_5765_;
}
else
{
lean_object* v_reuseFailAlloc_5767_; 
v_reuseFailAlloc_5767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5767_, 0, v_a_5764_);
v___x_5766_ = v_reuseFailAlloc_5767_;
goto v_reusejp_5765_;
}
v_reusejp_5765_:
{
v___y_5751_ = v___x_5758_;
v___y_5752_ = v___x_5726_;
v_val_5753_ = v___x_5766_;
goto v___jp_5750_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5771_, lean_object* v___f_5772_, lean_object* v___x_5773_, lean_object* v___f_5774_, lean_object* v_options_5775_, lean_object* v_x_5776_, lean_object* v___y_5777_){
_start:
{
uint8_t v___x_1113__boxed_5778_; lean_object* v_res_5779_; 
v___x_1113__boxed_5778_ = lean_unbox(v___x_5773_);
v_res_5779_ = l_Lasm_Fetch_fetch___lam__3(v_req_5771_, v___f_5772_, v___x_1113__boxed_5778_, v___f_5774_, v_options_5775_, v_x_5776_);
lean_dec(v_options_5775_);
lean_dec_ref(v_req_5771_);
return v_res_5779_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5780_; uint32_t v___x_5781_; 
v___x_5780_ = lean_box(0);
v___x_5781_ = lasm_fetch_platform(v___x_5780_);
return v___x_5781_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5782_; uint32_t v___x_5783_; uint8_t v___x_5784_; 
v___x_5782_ = 0;
v___x_5783_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5784_ = lean_uint32_dec_eq(v___x_5783_, v___x_5782_);
return v___x_5784_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5787_; uint32_t v___x_5788_; uint8_t v___x_5789_; 
v___x_5787_ = 2;
v___x_5788_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5789_ = lean_uint32_dec_eq(v___x_5788_, v___x_5787_);
return v___x_5789_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5790_; uint32_t v___x_5791_; uint8_t v___x_5792_; 
v___x_5790_ = 4;
v___x_5791_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5792_ = lean_uint32_dec_eq(v___x_5791_, v___x_5790_);
return v___x_5792_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5793_; uint32_t v___x_5794_; uint8_t v___x_5795_; 
v___x_5793_ = 1;
v___x_5794_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5795_ = lean_uint32_dec_eq(v___x_5794_, v___x_5793_);
return v___x_5795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5810_, lean_object* v_options_5811_){
_start:
{
uint8_t v___x_5813_; 
v___x_5813_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_5813_ == 0)
{
lean_object* v___f_5814_; lean_object* v___f_5815_; lean_object* v___x_5816_; lean_object* v___f_5817_; uint8_t v___x_5824_; 
v___f_5814_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_5815_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_5816_ = lean_box(v___x_5813_);
v___f_5817_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_5817_, 0, v_req_5810_);
lean_closure_set(v___f_5817_, 1, v___f_5815_);
lean_closure_set(v___f_5817_, 2, v___x_5816_);
lean_closure_set(v___f_5817_, 3, v___f_5814_);
lean_closure_set(v___f_5817_, 4, v_options_5811_);
v___x_5824_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_5824_ == 0)
{
uint8_t v___x_5825_; 
v___x_5825_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_5825_ == 0)
{
uint8_t v___x_5826_; 
lean_dec_ref(v___f_5817_);
v___x_5826_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_5826_ == 0)
{
lean_object* v___x_5827_; 
v___x_5827_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_5827_;
}
else
{
lean_object* v___x_5828_; 
v___x_5828_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_5828_;
}
}
else
{
goto v___jp_5818_;
}
}
else
{
goto v___jp_5818_;
}
v___jp_5818_:
{
lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5819_ = lean_unsigned_to_nat(0u);
v___x_5820_ = lean_io_promise_new();
v___x_5821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
v___x_5822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5822_, 0, v___x_5821_);
v___x_5823_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5819_, v___x_5813_, v___x_5822_, v___f_5817_);
return v___x_5823_;
}
}
else
{
lean_object* v___x_5829_; 
lean_dec(v_options_5811_);
v___x_5829_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5810_);
return v___x_5829_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_5830_, lean_object* v_options_5831_, lean_object* v_a_5832_){
_start:
{
lean_object* v_res_5833_; 
v_res_5833_ = l_Lasm_Fetch_fetch(v_req_5830_, v_options_5831_);
return v_res_5833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_5834_, lean_object* v_headers_5835_, lean_object* v_options_5836_){
_start:
{
lean_object* v___x_5838_; lean_object* v___x_5839_; lean_object* v___f_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; 
v___x_5838_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5839_ = l_ByteArray_empty;
v___f_5840_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5841_, 0, v___x_5838_);
lean_ctor_set(v___x_5841_, 1, v_url_5834_);
lean_ctor_set(v___x_5841_, 2, v_headers_5835_);
lean_ctor_set(v___x_5841_, 3, v___x_5839_);
lean_ctor_set(v___x_5841_, 4, v___f_5840_);
v___x_5842_ = l_Lasm_Fetch_fetch(v___x_5841_, v_options_5836_);
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_5843_, lean_object* v_headers_5844_, lean_object* v_options_5845_, lean_object* v_a_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lasm_Fetch_get(v_url_5843_, v_headers_5844_, v_options_5845_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_5849_, lean_object* v_body_5850_, lean_object* v_contentType_5851_, lean_object* v_headers_5852_, lean_object* v_options_5853_){
_start:
{
lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___f_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; 
v___x_5855_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_5856_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_5857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5856_);
lean_ctor_set(v___x_5857_, 1, v_contentType_5851_);
v___x_5858_ = lean_unsigned_to_nat(1u);
v___x_5859_ = lean_mk_empty_array_with_capacity(v___x_5858_);
v___x_5860_ = lean_array_push(v___x_5859_, v___x_5857_);
v___x_5861_ = l_Array_append___redArg(v___x_5860_, v_headers_5852_);
v___f_5862_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5863_, 0, v___x_5855_);
lean_ctor_set(v___x_5863_, 1, v_url_5849_);
lean_ctor_set(v___x_5863_, 2, v___x_5861_);
lean_ctor_set(v___x_5863_, 3, v_body_5850_);
lean_ctor_set(v___x_5863_, 4, v___f_5862_);
v___x_5864_ = l_Lasm_Fetch_fetch(v___x_5863_, v_options_5853_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_5865_, lean_object* v_body_5866_, lean_object* v_contentType_5867_, lean_object* v_headers_5868_, lean_object* v_options_5869_, lean_object* v_a_5870_){
_start:
{
lean_object* v_res_5871_; 
v_res_5871_ = l_Lasm_Fetch_post(v_url_5865_, v_body_5866_, v_contentType_5867_, v_headers_5868_, v_options_5869_);
lean_dec_ref(v_headers_5868_);
return v_res_5871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_5872_){
_start:
{
lean_object* v_body_5873_; uint8_t v___x_5874_; 
v_body_5873_ = lean_ctor_get(v_r_5872_, 1);
lean_inc_ref(v_body_5873_);
lean_dec_ref(v_r_5872_);
v___x_5874_ = lean_string_validate_utf8(v_body_5873_);
if (v___x_5874_ == 0)
{
lean_object* v___x_5875_; 
lean_dec_ref(v_body_5873_);
v___x_5875_ = lean_box(0);
return v___x_5875_;
}
else
{
lean_object* v___x_5876_; lean_object* v___x_5877_; 
v___x_5876_ = lean_string_from_utf8_unchecked(v_body_5873_);
v___x_5877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5877_, 0, v___x_5876_);
return v___x_5877_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_5878_, lean_object* v_name_5879_){
_start:
{
lean_object* v_headers_5880_; lean_object* v_n_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; size_t v_sz_5884_; size_t v___x_5885_; lean_object* v___x_5886_; lean_object* v_fst_5887_; 
v_headers_5880_ = lean_ctor_get(v_r_5878_, 0);
v_n_5881_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_5879_);
v___x_5882_ = lean_box(0);
v___x_5883_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5884_ = lean_array_size(v_headers_5880_);
v___x_5885_ = ((size_t)0ULL);
v___x_5886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_5881_, v_headers_5880_, v_sz_5884_, v___x_5885_, v___x_5883_);
lean_dec_ref(v_n_5881_);
v_fst_5887_ = lean_ctor_get(v___x_5886_, 0);
lean_inc(v_fst_5887_);
lean_dec_ref(v___x_5886_);
if (lean_obj_tag(v_fst_5887_) == 0)
{
return v___x_5882_;
}
else
{
lean_object* v_val_5888_; 
v_val_5888_ = lean_ctor_get(v_fst_5887_, 0);
lean_inc(v_val_5888_);
lean_dec_ref_known(v_fst_5887_, 1);
if (lean_obj_tag(v_val_5888_) == 0)
{
return v___x_5882_;
}
else
{
lean_object* v_val_5889_; lean_object* v___x_5891_; uint8_t v_isShared_5892_; uint8_t v_isSharedCheck_5897_; 
v_val_5889_ = lean_ctor_get(v_val_5888_, 0);
v_isSharedCheck_5897_ = !lean_is_exclusive(v_val_5888_);
if (v_isSharedCheck_5897_ == 0)
{
v___x_5891_ = v_val_5888_;
v_isShared_5892_ = v_isSharedCheck_5897_;
goto v_resetjp_5890_;
}
else
{
lean_inc(v_val_5889_);
lean_dec(v_val_5888_);
v___x_5891_ = lean_box(0);
v_isShared_5892_ = v_isSharedCheck_5897_;
goto v_resetjp_5890_;
}
v_resetjp_5890_:
{
lean_object* v_snd_5893_; lean_object* v___x_5895_; 
v_snd_5893_ = lean_ctor_get(v_val_5889_, 1);
lean_inc(v_snd_5893_);
lean_dec(v_val_5889_);
if (v_isShared_5892_ == 0)
{
lean_ctor_set(v___x_5891_, 0, v_snd_5893_);
v___x_5895_ = v___x_5891_;
goto v_reusejp_5894_;
}
else
{
lean_object* v_reuseFailAlloc_5896_; 
v_reuseFailAlloc_5896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5896_, 0, v_snd_5893_);
v___x_5895_ = v_reuseFailAlloc_5896_;
goto v_reusejp_5894_;
}
v_reusejp_5894_:
{
return v___x_5895_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_5898_, lean_object* v_name_5899_){
_start:
{
lean_object* v_res_5900_; 
v_res_5900_ = l_Lasm_Fetch_Response_header_x3f(v_r_5898_, v_name_5899_);
lean_dec_ref(v_r_5898_);
return v_res_5900_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_5901_){
_start:
{
if (lean_obj_tag(v_x_5901_) == 0)
{
lean_object* v_a_5902_; lean_object* v___x_5903_; 
v_a_5902_ = lean_ctor_get(v_x_5901_, 0);
lean_inc(v_a_5902_);
lean_dec_ref_known(v_x_5901_, 1);
v___x_5903_ = lean_task_pure(v_a_5902_);
return v___x_5903_;
}
else
{
lean_object* v_a_5904_; 
v_a_5904_ = lean_ctor_get(v_x_5901_, 0);
lean_inc_ref(v_a_5904_);
lean_dec_ref_known(v_x_5901_, 1);
return v_a_5904_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_5905_){
_start:
{
if (lean_obj_tag(v_x_5905_) == 0)
{
lean_object* v_a_5906_; lean_object* v___x_5907_; 
v_a_5906_ = lean_ctor_get(v_x_5905_, 0);
lean_inc(v_a_5906_);
lean_dec_ref_known(v_x_5905_, 1);
v___x_5907_ = lean_task_pure(v_a_5906_);
return v___x_5907_;
}
else
{
lean_object* v_a_5908_; 
v_a_5908_ = lean_ctor_get(v_x_5905_, 0);
lean_inc_ref(v_a_5908_);
lean_dec_ref_known(v_x_5905_, 1);
return v_a_5908_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_5909_){
_start:
{
lean_object* v_val_5912_; lean_object* v___x_5914_; 
v___x_5914_ = lasm_fetch_write(v_chunk_5909_);
if (lean_obj_tag(v___x_5914_) == 0)
{
lean_object* v_a_5915_; lean_object* v___x_5917_; uint8_t v_isShared_5918_; uint8_t v_isSharedCheck_5922_; 
v_a_5915_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5922_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5922_ == 0)
{
v___x_5917_ = v___x_5914_;
v_isShared_5918_ = v_isSharedCheck_5922_;
goto v_resetjp_5916_;
}
else
{
lean_inc(v_a_5915_);
lean_dec(v___x_5914_);
v___x_5917_ = lean_box(0);
v_isShared_5918_ = v_isSharedCheck_5922_;
goto v_resetjp_5916_;
}
v_resetjp_5916_:
{
lean_object* v___x_5920_; 
if (v_isShared_5918_ == 0)
{
lean_ctor_set_tag(v___x_5917_, 1);
v___x_5920_ = v___x_5917_;
goto v_reusejp_5919_;
}
else
{
lean_object* v_reuseFailAlloc_5921_; 
v_reuseFailAlloc_5921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5921_, 0, v_a_5915_);
v___x_5920_ = v_reuseFailAlloc_5921_;
goto v_reusejp_5919_;
}
v_reusejp_5919_:
{
v_val_5912_ = v___x_5920_;
goto v___jp_5911_;
}
}
}
else
{
lean_object* v_a_5923_; lean_object* v___x_5925_; uint8_t v_isShared_5926_; uint8_t v_isSharedCheck_5930_; 
v_a_5923_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5930_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5930_ == 0)
{
v___x_5925_ = v___x_5914_;
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
else
{
lean_inc(v_a_5923_);
lean_dec(v___x_5914_);
v___x_5925_ = lean_box(0);
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
v_resetjp_5924_:
{
lean_object* v___x_5928_; 
if (v_isShared_5926_ == 0)
{
lean_ctor_set_tag(v___x_5925_, 0);
v___x_5928_ = v___x_5925_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v_a_5923_);
v___x_5928_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
v_val_5912_ = v___x_5928_;
goto v___jp_5911_;
}
}
}
v___jp_5911_:
{
lean_object* v___x_5913_; 
v___x_5913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5913_, 0, v_val_5912_);
return v___x_5913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_5931_, lean_object* v___y_5932_){
_start:
{
lean_object* v_res_5933_; 
v_res_5933_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_5931_);
lean_dec_ref(v_chunk_5931_);
return v_res_5933_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_5934_){
_start:
{
if (lean_obj_tag(v_x_5934_) == 0)
{
lean_object* v_a_5935_; lean_object* v___x_5936_; 
v_a_5935_ = lean_ctor_get(v_x_5934_, 0);
lean_inc(v_a_5935_);
lean_dec_ref_known(v_x_5934_, 1);
v___x_5936_ = lean_task_pure(v_a_5935_);
return v___x_5936_;
}
else
{
lean_object* v_a_5937_; 
v_a_5937_ = lean_ctor_get(v_x_5934_, 0);
lean_inc_ref(v_a_5937_);
lean_dec_ref_known(v_x_5934_, 1);
return v_a_5937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_5938_){
_start:
{
lean_object* v___y_5941_; 
if (lean_obj_tag(v_x_5938_) == 0)
{
lean_object* v_a_5944_; lean_object* v___x_5946_; uint8_t v_isShared_5947_; uint8_t v_isSharedCheck_5952_; 
v_a_5944_ = lean_ctor_get(v_x_5938_, 0);
v_isSharedCheck_5952_ = !lean_is_exclusive(v_x_5938_);
if (v_isSharedCheck_5952_ == 0)
{
v___x_5946_ = v_x_5938_;
v_isShared_5947_ = v_isSharedCheck_5952_;
goto v_resetjp_5945_;
}
else
{
lean_inc(v_a_5944_);
lean_dec(v_x_5938_);
v___x_5946_ = lean_box(0);
v_isShared_5947_ = v_isSharedCheck_5952_;
goto v_resetjp_5945_;
}
v_resetjp_5945_:
{
lean_object* v___x_5949_; 
if (v_isShared_5947_ == 0)
{
v___x_5949_ = v___x_5946_;
goto v_reusejp_5948_;
}
else
{
lean_object* v_reuseFailAlloc_5951_; 
v_reuseFailAlloc_5951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5951_, 0, v_a_5944_);
v___x_5949_ = v_reuseFailAlloc_5951_;
goto v_reusejp_5948_;
}
v_reusejp_5948_:
{
lean_object* v___x_5950_; 
v___x_5950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5950_, 0, v___x_5949_);
return v___x_5950_;
}
}
}
else
{
lean_object* v_a_5953_; uint8_t v___x_5954_; 
v_a_5953_ = lean_ctor_get(v_x_5938_, 0);
lean_inc(v_a_5953_);
lean_dec_ref_known(v_x_5938_, 1);
v___x_5954_ = l_ByteArray_isEmpty(v_a_5953_);
if (v___x_5954_ == 0)
{
lean_object* v___x_5955_; 
v___x_5955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5955_, 0, v_a_5953_);
v___y_5941_ = v___x_5955_;
goto v___jp_5940_;
}
else
{
lean_object* v___x_5956_; 
lean_dec(v_a_5953_);
v___x_5956_ = lean_box(0);
v___y_5941_ = v___x_5956_;
goto v___jp_5940_;
}
}
v___jp_5940_:
{
lean_object* v___x_5942_; lean_object* v___x_5943_; 
v___x_5942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5942_, 0, v___y_5941_);
v___x_5943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5942_);
return v___x_5943_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_5957_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_5960_, uint32_t v___x_5961_){
_start:
{
lean_object* v___x_5963_; uint8_t v___x_5964_; lean_object* v_val_5966_; lean_object* v___x_5969_; 
v___x_5963_ = lean_unsigned_to_nat(0u);
v___x_5964_ = 0;
v___x_5969_ = lasm_fetch_read(v___x_5961_);
if (lean_obj_tag(v___x_5969_) == 0)
{
lean_object* v_a_5970_; lean_object* v___x_5972_; uint8_t v_isShared_5973_; uint8_t v_isSharedCheck_5977_; 
v_a_5970_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_5977_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_5977_ == 0)
{
v___x_5972_ = v___x_5969_;
v_isShared_5973_ = v_isSharedCheck_5977_;
goto v_resetjp_5971_;
}
else
{
lean_inc(v_a_5970_);
lean_dec(v___x_5969_);
v___x_5972_ = lean_box(0);
v_isShared_5973_ = v_isSharedCheck_5977_;
goto v_resetjp_5971_;
}
v_resetjp_5971_:
{
lean_object* v___x_5975_; 
if (v_isShared_5973_ == 0)
{
lean_ctor_set_tag(v___x_5972_, 1);
v___x_5975_ = v___x_5972_;
goto v_reusejp_5974_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5976_, 0, v_a_5970_);
v___x_5975_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5974_;
}
v_reusejp_5974_:
{
v_val_5966_ = v___x_5975_;
goto v___jp_5965_;
}
}
}
else
{
lean_object* v_a_5978_; lean_object* v___x_5980_; uint8_t v_isShared_5981_; uint8_t v_isSharedCheck_5985_; 
v_a_5978_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_5985_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_5985_ == 0)
{
v___x_5980_ = v___x_5969_;
v_isShared_5981_ = v_isSharedCheck_5985_;
goto v_resetjp_5979_;
}
else
{
lean_inc(v_a_5978_);
lean_dec(v___x_5969_);
v___x_5980_ = lean_box(0);
v_isShared_5981_ = v_isSharedCheck_5985_;
goto v_resetjp_5979_;
}
v_resetjp_5979_:
{
lean_object* v___x_5983_; 
if (v_isShared_5981_ == 0)
{
lean_ctor_set_tag(v___x_5980_, 0);
v___x_5983_ = v___x_5980_;
goto v_reusejp_5982_;
}
else
{
lean_object* v_reuseFailAlloc_5984_; 
v_reuseFailAlloc_5984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5984_, 0, v_a_5978_);
v___x_5983_ = v_reuseFailAlloc_5984_;
goto v_reusejp_5982_;
}
v_reusejp_5982_:
{
v_val_5966_ = v___x_5983_;
goto v___jp_5965_;
}
}
}
v___jp_5965_:
{
lean_object* v___x_5967_; lean_object* v___x_5968_; 
v___x_5967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5967_, 0, v_val_5966_);
v___x_5968_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5963_, v___x_5964_, v___x_5967_, v___f_5960_);
return v___x_5968_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_5986_, lean_object* v___x_5987_, lean_object* v___y_5988_){
_start:
{
uint32_t v___x_2044__boxed_5989_; lean_object* v_res_5990_; 
v___x_2044__boxed_5989_ = lean_unbox_uint32(v___x_5987_);
lean_dec(v___x_5987_);
v_res_5990_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_5986_, v___x_2044__boxed_5989_);
return v_res_5990_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_5991_, lean_object* v_req_5992_){
_start:
{
lean_object* v___x_5994_; 
v___x_5994_ = l_Lasm_Fetch_respond(v_handler_5991_, v_req_5992_);
return v___x_5994_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_5995_, lean_object* v_req_5996_, lean_object* v___y_5997_){
_start:
{
lean_object* v_res_5998_; 
v_res_5998_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_5995_, v_req_5996_);
return v_res_5998_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_5999_, lean_object* v___f_6000_){
_start:
{
lean_object* v___x_6002_; 
v___x_6002_ = lean_apply_2(v_val_5999_, v___f_6000_, lean_box(0));
return v___x_6002_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6003_, lean_object* v___f_6004_, lean_object* v___y_6005_){
_start:
{
lean_object* v_res_6006_; 
v_res_6006_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6003_, v___f_6004_);
return v_res_6006_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6007_){
_start:
{
lean_object* v___x_6009_; 
v___x_6009_ = l_Lasm_Fetch_Request_readAll(v___x_6007_);
return v___x_6009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6010_, lean_object* v___y_6011_){
_start:
{
lean_object* v_res_6012_; 
v_res_6012_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6010_);
return v_res_6012_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6018_; lean_object* v___x_6019_; 
v___x_6018_ = 65536;
v___x_6019_ = lean_box_uint32(v___x_6018_);
return v___x_6019_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6020_; lean_object* v___x_6021_; lean_object* v___f_6022_; 
v___f_6020_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6021_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6022_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6022_, 0, v___f_6020_);
lean_closure_set(v___f_6022_, 1, v___x_6021_);
return v___f_6022_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6023_, lean_object* v_options_6024_){
_start:
{
lean_object* v___f_6026_; lean_object* v___f_6027_; lean_object* v___f_6028_; lean_object* v___f_6029_; lean_object* v___x_6030_; 
v___f_6026_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6027_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6028_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6029_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6030_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6030_) == 0)
{
lean_object* v_a_6031_; lean_object* v___x_6033_; uint8_t v_isShared_6034_; uint8_t v_isSharedCheck_6101_; 
v_a_6031_ = lean_ctor_get(v___x_6030_, 0);
v_isSharedCheck_6101_ = !lean_is_exclusive(v___x_6030_);
if (v_isSharedCheck_6101_ == 0)
{
v___x_6033_ = v___x_6030_;
v_isShared_6034_ = v_isSharedCheck_6101_;
goto v_resetjp_6032_;
}
else
{
lean_inc(v_a_6031_);
lean_dec(v___x_6030_);
v___x_6033_ = lean_box(0);
v_isShared_6034_ = v_isSharedCheck_6101_;
goto v_resetjp_6032_;
}
v_resetjp_6032_:
{
lean_object* v_snd_6035_; lean_object* v_fst_6036_; lean_object* v_fst_6037_; lean_object* v_snd_6038_; lean_object* v___f_6039_; lean_object* v___x_6040_; lean_object* v_req_6042_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; uint8_t v___x_6083_; 
v_snd_6035_ = lean_ctor_get(v_a_6031_, 1);
lean_inc(v_snd_6035_);
v_fst_6036_ = lean_ctor_get(v_a_6031_, 0);
lean_inc_n(v_fst_6036_, 2);
lean_dec(v_a_6031_);
v_fst_6037_ = lean_ctor_get(v_snd_6035_, 0);
lean_inc_n(v_fst_6037_, 2);
v_snd_6038_ = lean_ctor_get(v_snd_6035_, 1);
lean_inc_n(v_snd_6038_, 2);
lean_dec(v_snd_6035_);
v___f_6039_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6040_ = l_ByteArray_empty;
v___x_6080_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6080_, 0, v_fst_6036_);
lean_ctor_set(v___x_6080_, 1, v_fst_6037_);
lean_ctor_set(v___x_6080_, 2, v_snd_6038_);
lean_ctor_set(v___x_6080_, 3, v___x_6040_);
lean_ctor_set(v___x_6080_, 4, v___f_6039_);
lean_inc_ref(v___x_6080_);
v___x_6081_ = l_Lasm_Fetch_Request_path(v___x_6080_);
v___x_6082_ = lean_apply_1(v_options_6024_, v___x_6081_);
v___x_6083_ = lean_unbox(v___x_6082_);
if (v___x_6083_ == 0)
{
lean_object* v___f_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; uint8_t v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___f_6084_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6084_, 0, v___x_6080_);
v___x_6085_ = lean_unsigned_to_nat(0u);
v___x_6086_ = lean_io_as_task(v___f_6084_, v___x_6085_);
v___x_6087_ = 1;
v___x_6088_ = lean_task_bind(v___x_6086_, v___f_6026_, v___x_6085_, v___x_6087_);
v___x_6089_ = lean_task_get_own(v___x_6088_);
if (lean_obj_tag(v___x_6089_) == 0)
{
lean_object* v_a_6090_; lean_object* v___x_6092_; uint8_t v_isShared_6093_; uint8_t v_isSharedCheck_6097_; 
lean_dec(v_snd_6038_);
lean_dec(v_fst_6037_);
lean_dec(v_fst_6036_);
lean_del_object(v___x_6033_);
lean_dec_ref(v_handler_6023_);
v_a_6090_ = lean_ctor_get(v___x_6089_, 0);
v_isSharedCheck_6097_ = !lean_is_exclusive(v___x_6089_);
if (v_isSharedCheck_6097_ == 0)
{
v___x_6092_ = v___x_6089_;
v_isShared_6093_ = v_isSharedCheck_6097_;
goto v_resetjp_6091_;
}
else
{
lean_inc(v_a_6090_);
lean_dec(v___x_6089_);
v___x_6092_ = lean_box(0);
v_isShared_6093_ = v_isSharedCheck_6097_;
goto v_resetjp_6091_;
}
v_resetjp_6091_:
{
lean_object* v___x_6095_; 
if (v_isShared_6093_ == 0)
{
lean_ctor_set_tag(v___x_6092_, 1);
v___x_6095_ = v___x_6092_;
goto v_reusejp_6094_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6096_, 0, v_a_6090_);
v___x_6095_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6094_;
}
v_reusejp_6094_:
{
return v___x_6095_;
}
}
}
else
{
lean_object* v_a_6098_; lean_object* v___f_6099_; lean_object* v___x_6100_; 
v_a_6098_ = lean_ctor_get(v___x_6089_, 0);
lean_inc(v_a_6098_);
lean_dec_ref_known(v___x_6089_, 1);
v___f_6099_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6100_, 0, v_fst_6036_);
lean_ctor_set(v___x_6100_, 1, v_fst_6037_);
lean_ctor_set(v___x_6100_, 2, v_snd_6038_);
lean_ctor_set(v___x_6100_, 3, v_a_6098_);
lean_ctor_set(v___x_6100_, 4, v___f_6099_);
v_req_6042_ = v___x_6100_;
goto v___jp_6041_;
}
}
else
{
lean_dec(v_snd_6038_);
lean_dec(v_fst_6037_);
lean_dec(v_fst_6036_);
v_req_6042_ = v___x_6080_;
goto v___jp_6041_;
}
v___jp_6041_:
{
lean_object* v___f_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; uint8_t v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; 
lean_inc_ref(v_req_6042_);
v___f_6043_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6043_, 0, v_handler_6023_);
lean_closure_set(v___f_6043_, 1, v_req_6042_);
v___x_6044_ = lean_unsigned_to_nat(0u);
v___x_6045_ = lean_io_as_task(v___f_6043_, v___x_6044_);
v___x_6046_ = 1;
v___x_6047_ = lean_task_bind(v___x_6045_, v___f_6029_, v___x_6044_, v___x_6046_);
v___x_6048_ = lean_task_get_own(v___x_6047_);
if (lean_obj_tag(v___x_6048_) == 0)
{
lean_object* v_a_6049_; lean_object* v___x_6051_; 
lean_dec_ref(v_req_6042_);
v_a_6049_ = lean_ctor_get(v___x_6048_, 0);
lean_inc(v_a_6049_);
lean_dec_ref_known(v___x_6048_, 1);
if (v_isShared_6034_ == 0)
{
lean_ctor_set_tag(v___x_6033_, 1);
lean_ctor_set(v___x_6033_, 0, v_a_6049_);
v___x_6051_ = v___x_6033_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6052_; 
v_reuseFailAlloc_6052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6052_, 0, v_a_6049_);
v___x_6051_ = v_reuseFailAlloc_6052_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
return v___x_6051_;
}
}
else
{
lean_object* v_a_6053_; lean_object* v_stream_6054_; 
lean_del_object(v___x_6033_);
v_a_6053_ = lean_ctor_get(v___x_6048_, 0);
lean_inc(v_a_6053_);
lean_dec_ref_known(v___x_6048_, 1);
v_stream_6054_ = lean_ctor_get(v_a_6053_, 2);
if (lean_obj_tag(v_stream_6054_) == 0)
{
uint16_t v_status_6055_; lean_object* v_headers_6056_; lean_object* v_body_6057_; lean_object* v_method_6058_; uint8_t v___x_6059_; 
v_status_6055_ = lean_ctor_get_uint16(v_a_6053_, sizeof(void*)*3);
v_headers_6056_ = lean_ctor_get(v_a_6053_, 0);
lean_inc_ref(v_headers_6056_);
v_body_6057_ = lean_ctor_get(v_a_6053_, 1);
lean_inc_ref(v_body_6057_);
lean_dec(v_a_6053_);
v_method_6058_ = lean_ctor_get(v_req_6042_, 0);
lean_inc_ref(v_method_6058_);
lean_dec_ref(v_req_6042_);
v___x_6059_ = l_Lasm_Fetch_bodyless(v_method_6058_, v_status_6055_);
lean_dec_ref(v_method_6058_);
if (v___x_6059_ == 0)
{
lean_object* v___x_6060_; 
v___x_6060_ = lasm_fetch_send_response(v_status_6055_, v_headers_6056_, v_body_6057_);
lean_dec_ref(v_body_6057_);
lean_dec_ref(v_headers_6056_);
return v___x_6060_;
}
else
{
lean_object* v___x_6061_; 
lean_dec_ref(v_body_6057_);
v___x_6061_ = lasm_fetch_send_response(v_status_6055_, v_headers_6056_, v___x_6040_);
lean_dec_ref(v_headers_6056_);
return v___x_6061_;
}
}
else
{
uint16_t v_status_6062_; lean_object* v_headers_6063_; lean_object* v_val_6064_; lean_object* v___f_6065_; lean_object* v___x_6066_; 
lean_inc_ref(v_stream_6054_);
v_status_6062_ = lean_ctor_get_uint16(v_a_6053_, sizeof(void*)*3);
v_headers_6063_ = lean_ctor_get(v_a_6053_, 0);
lean_inc_ref(v_headers_6063_);
lean_dec(v_a_6053_);
v_val_6064_ = lean_ctor_get(v_stream_6054_, 0);
lean_inc(v_val_6064_);
lean_dec_ref_known(v_stream_6054_, 1);
v___f_6065_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6065_, 0, v_val_6064_);
lean_closure_set(v___f_6065_, 1, v___f_6028_);
v___x_6066_ = lasm_fetch_start_response(v_status_6062_, v_headers_6063_);
lean_dec_ref(v_headers_6063_);
if (lean_obj_tag(v___x_6066_) == 0)
{
lean_object* v_method_6067_; uint8_t v___x_6068_; 
lean_dec_ref_known(v___x_6066_, 1);
v_method_6067_ = lean_ctor_get(v_req_6042_, 0);
lean_inc_ref(v_method_6067_);
lean_dec_ref(v_req_6042_);
v___x_6068_ = l_Lasm_Fetch_bodyless(v_method_6067_, v_status_6062_);
lean_dec_ref(v_method_6067_);
if (v___x_6068_ == 0)
{
lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; 
v___x_6069_ = lean_io_as_task(v___f_6065_, v___x_6044_);
v___x_6070_ = lean_task_bind(v___x_6069_, v___f_6027_, v___x_6044_, v___x_6046_);
v___x_6071_ = lean_task_get_own(v___x_6070_);
if (lean_obj_tag(v___x_6071_) == 0)
{
lean_object* v_a_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; 
v_a_6072_ = lean_ctor_get(v___x_6071_, 0);
lean_inc(v_a_6072_);
lean_dec_ref_known(v___x_6071_, 1);
v___x_6073_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6074_ = lean_io_error_to_string(v_a_6072_);
v___x_6075_ = lean_string_append(v___x_6073_, v___x_6074_);
lean_dec_ref(v___x_6074_);
v___x_6076_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6075_);
if (lean_obj_tag(v___x_6076_) == 0)
{
lean_object* v___x_6077_; 
lean_dec_ref_known(v___x_6076_, 1);
v___x_6077_ = lasm_fetch_finish(v___x_6068_);
return v___x_6077_;
}
else
{
return v___x_6076_;
}
}
else
{
lean_object* v___x_6078_; 
lean_dec_ref_known(v___x_6071_, 1);
v___x_6078_ = lasm_fetch_finish(v___x_6046_);
return v___x_6078_;
}
}
else
{
lean_object* v___x_6079_; 
lean_dec_ref(v___f_6065_);
v___x_6079_ = lasm_fetch_finish(v___x_6046_);
return v___x_6079_;
}
}
else
{
lean_dec_ref(v___f_6065_);
lean_dec_ref(v_req_6042_);
return v___x_6066_;
}
}
}
}
}
}
else
{
lean_object* v_a_6102_; lean_object* v___x_6104_; uint8_t v_isShared_6105_; uint8_t v_isSharedCheck_6109_; 
lean_dec_ref(v_options_6024_);
lean_dec_ref(v_handler_6023_);
v_a_6102_ = lean_ctor_get(v___x_6030_, 0);
v_isSharedCheck_6109_ = !lean_is_exclusive(v___x_6030_);
if (v_isSharedCheck_6109_ == 0)
{
v___x_6104_ = v___x_6030_;
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
else
{
lean_inc(v_a_6102_);
lean_dec(v___x_6030_);
v___x_6104_ = lean_box(0);
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
v_resetjp_6103_:
{
lean_object* v___x_6107_; 
if (v_isShared_6105_ == 0)
{
v___x_6107_ = v___x_6104_;
goto v_reusejp_6106_;
}
else
{
lean_object* v_reuseFailAlloc_6108_; 
v_reuseFailAlloc_6108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6108_, 0, v_a_6102_);
v___x_6107_ = v_reuseFailAlloc_6108_;
goto v_reusejp_6106_;
}
v_reusejp_6106_:
{
return v___x_6107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6110_, lean_object* v_options_6111_, lean_object* v_a_6112_){
_start:
{
lean_object* v_res_6113_; 
v_res_6113_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6110_, v_options_6111_);
return v_res_6113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6117_, lean_object* v_handler_6118_){
_start:
{
uint8_t v___x_6120_; 
v___x_6120_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6120_ == 0)
{
uint8_t v___x_6121_; 
v___x_6121_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6121_ == 0)
{
uint8_t v___x_6122_; 
v___x_6122_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6122_ == 0)
{
uint8_t v___x_6123_; 
v___x_6123_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6123_ == 0)
{
lean_object* v___x_6124_; lean_object* v___x_6125_; 
lean_dec_ref(v_handler_6118_);
lean_dec_ref(v_options_6117_);
v___x_6124_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6125_, 0, v___x_6124_);
return v___x_6125_;
}
else
{
lean_object* v___x_6126_; 
v___x_6126_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6126_) == 0)
{
lean_object* v_a_6127_; uint8_t v___x_6128_; 
v_a_6127_ = lean_ctor_get(v___x_6126_, 0);
lean_inc(v_a_6127_);
lean_dec_ref_known(v___x_6126_, 1);
v___x_6128_ = lean_unbox(v_a_6127_);
lean_dec(v_a_6127_);
if (v___x_6128_ == 0)
{
lean_object* v___x_6129_; 
v___x_6129_ = l_Lasm_Fetch_serveNode(v_handler_6118_, v_options_6117_);
return v___x_6129_;
}
else
{
lean_object* v___x_6130_; 
v___x_6130_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6118_, v_options_6117_);
if (lean_obj_tag(v___x_6130_) == 0)
{
lean_object* v_a_6131_; lean_object* v___x_6132_; 
v_a_6131_ = lean_ctor_get(v___x_6130_, 0);
lean_inc(v_a_6131_);
lean_dec_ref_known(v___x_6130_, 1);
v___x_6132_ = l_Lasm_JS_exportDefault(v_a_6131_);
return v___x_6132_;
}
else
{
lean_object* v_a_6133_; lean_object* v___x_6135_; uint8_t v_isShared_6136_; uint8_t v_isSharedCheck_6140_; 
v_a_6133_ = lean_ctor_get(v___x_6130_, 0);
v_isSharedCheck_6140_ = !lean_is_exclusive(v___x_6130_);
if (v_isSharedCheck_6140_ == 0)
{
v___x_6135_ = v___x_6130_;
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
else
{
lean_inc(v_a_6133_);
lean_dec(v___x_6130_);
v___x_6135_ = lean_box(0);
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
v_resetjp_6134_:
{
lean_object* v___x_6138_; 
if (v_isShared_6136_ == 0)
{
v___x_6138_ = v___x_6135_;
goto v_reusejp_6137_;
}
else
{
lean_object* v_reuseFailAlloc_6139_; 
v_reuseFailAlloc_6139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6139_, 0, v_a_6133_);
v___x_6138_ = v_reuseFailAlloc_6139_;
goto v_reusejp_6137_;
}
v_reusejp_6137_:
{
return v___x_6138_;
}
}
}
}
}
else
{
lean_object* v_a_6141_; lean_object* v___x_6143_; uint8_t v_isShared_6144_; uint8_t v_isSharedCheck_6148_; 
lean_dec_ref(v_handler_6118_);
lean_dec_ref(v_options_6117_);
v_a_6141_ = lean_ctor_get(v___x_6126_, 0);
v_isSharedCheck_6148_ = !lean_is_exclusive(v___x_6126_);
if (v_isSharedCheck_6148_ == 0)
{
v___x_6143_ = v___x_6126_;
v_isShared_6144_ = v_isSharedCheck_6148_;
goto v_resetjp_6142_;
}
else
{
lean_inc(v_a_6141_);
lean_dec(v___x_6126_);
v___x_6143_ = lean_box(0);
v_isShared_6144_ = v_isSharedCheck_6148_;
goto v_resetjp_6142_;
}
v_resetjp_6142_:
{
lean_object* v___x_6146_; 
if (v_isShared_6144_ == 0)
{
v___x_6146_ = v___x_6143_;
goto v_reusejp_6145_;
}
else
{
lean_object* v_reuseFailAlloc_6147_; 
v_reuseFailAlloc_6147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6147_, 0, v_a_6141_);
v___x_6146_ = v_reuseFailAlloc_6147_;
goto v_reusejp_6145_;
}
v_reusejp_6145_:
{
return v___x_6146_;
}
}
}
}
}
else
{
lean_object* v___x_6149_; 
v___x_6149_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6118_, v_options_6117_);
return v___x_6149_;
}
}
else
{
lean_object* v___x_6150_; 
v___x_6150_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6118_, v_options_6117_);
return v___x_6150_;
}
}
else
{
lean_object* v___x_6151_; 
v___x_6151_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6118_, v_options_6117_);
return v___x_6151_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6152_, lean_object* v_handler_6153_, lean_object* v_a_6154_){
_start:
{
lean_object* v_res_6155_; 
v_res_6155_ = l_Lasm_Fetch_serveWith(v_options_6152_, v_handler_6153_);
return v_res_6155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6156_){
_start:
{
lean_object* v___f_6158_; lean_object* v___x_6159_; 
v___f_6158_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6159_ = l_Lasm_Fetch_serveWith(v___f_6158_, v_handler_6156_);
return v___x_6159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6160_, lean_object* v_a_6161_){
_start:
{
lean_object* v_res_6162_; 
v_res_6162_ = l_Lasm_Fetch_serve(v_handler_6160_);
return v_res_6162_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Fetch_instInhabitedRequest_default = _init_l_Lasm_Fetch_instInhabitedRequest_default();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedRequest_default);
l_Lasm_Fetch_instInhabitedRequest = _init_l_Lasm_Fetch_instInhabitedRequest();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedRequest);
l_Lasm_Fetch_instInhabitedResponse_default = _init_l_Lasm_Fetch_instInhabitedResponse_default();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedResponse_default);
l_Lasm_Fetch_instInhabitedResponse = _init_l_Lasm_Fetch_instInhabitedResponse();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedResponse);
l_Lasm_Fetch_Response_notFound = _init_l_Lasm_Fetch_Response_notFound();
lean_mark_persistent(l_Lasm_Fetch_Response_notFound);
res = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lasm_Fetch_platformEnv = lean_io_result_get_value(res);
lean_mark_persistent(l_Lasm_Fetch_platformEnv);
lean_dec_ref(res);
l_Lasm_Fetch_instInhabitedFetchOptions_default = _init_l_Lasm_Fetch_instInhabitedFetchOptions_default();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedFetchOptions_default);
l_Lasm_Fetch_instInhabitedFetchOptions = _init_l_Lasm_Fetch_instInhabitedFetchOptions();
lean_mark_persistent(l_Lasm_Fetch_instInhabitedFetchOptions);
l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1 = _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1();
lean_mark_persistent(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
