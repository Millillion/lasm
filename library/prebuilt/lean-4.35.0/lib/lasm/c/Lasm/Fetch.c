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
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* lean_array_uget(lean_object*, size_t);
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
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t v___x_7603__boxed_2274_; lean_object* v_res_2275_; 
v___x_7603__boxed_2274_ = lean_unbox(v___x_2270_);
v_res_2275_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2265_, v___y_2266_, v_headers_2267_, v___f_2268_, v___x_2269_, v___x_7603__boxed_2274_, v___f_2271_, v_x_2272_);
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
uint8_t v___x_7889__boxed_2442_; lean_object* v_res_2443_; 
v___x_7889__boxed_2442_ = lean_unbox(v___x_2437_);
v_res_2443_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2436_, v___x_7889__boxed_2442_, v___f_2438_, v_a_2439_, v_x_2440_);
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
lean_closure_set(v___f_3054_, 1, v___y_3051_);
lean_closure_set(v___f_3054_, 2, v___y_3053_);
lean_closure_set(v___f_3054_, 3, v_options_3026_);
lean_closure_set(v___f_3054_, 4, v___y_3049_);
lean_closure_set(v___f_3054_, 5, v___y_3052_);
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
v___y_3051_ = v___y_3090_;
v___y_3052_ = v___f_3093_;
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
v___y_3051_ = v___y_3090_;
v___y_3052_ = v___f_3093_;
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3251_, lean_object* v_handler_3252_, lean_object* v_options_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_args_3256_){
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
switch(lean_obj_tag(v___x_3265_))
{
case 9:
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
case 8:
{
lean_object* v___f_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
lean_inc_ref(v___x_3265_);
lean_dec_ref(v_args_3256_);
lean_dec(v_a_3255_);
lean_dec(v_a_3254_);
lean_dec_ref(v_options_3253_);
lean_dec_ref(v_handler_3252_);
lean_dec_ref(v___f_3251_);
v___f_3273_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3273_, 0, v___f_3258_);
v___x_3274_ = l_Lasm_Fetch_platformEnv;
v___x_3275_ = lean_unsigned_to_nat(0u);
v___x_3276_ = 0;
v___x_3277_ = lean_st_ref_swap(v___x_3274_, v___x_3265_);
lean_dec(v___x_3277_);
v___x_3278_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3279_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3276_, v___x_3278_, v___f_3273_);
return v___x_3279_;
}
default: 
{
lean_dec_ref(v___f_3258_);
goto v___jp_3259_;
}
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3280_, lean_object* v_handler_3281_, lean_object* v_options_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_args_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3280_, v_handler_3281_, v_options_3282_, v_a_3283_, v_a_3284_, v_args_3285_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3291_, lean_object* v_options_3292_){
_start:
{
lean_object* v___f_3294_; lean_object* v___x_3295_; 
v___f_3294_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3295_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc_n(v_a_3296_, 2);
lean_dec_ref_known(v___x_3295_, 1);
v___x_3297_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3298_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3296_, v___x_3297_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v___x_3300_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3301_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3296_, v___x_3300_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_object* v_a_3302_; lean_object* v___f_3303_; lean_object* v___x_3304_; 
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
lean_inc(v_a_3302_);
lean_dec_ref_known(v___x_3301_, 1);
v___f_3303_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3303_, 0, v___f_3294_);
lean_closure_set(v___f_3303_, 1, v_handler_3291_);
lean_closure_set(v___f_3303_, 2, v_options_3292_);
lean_closure_set(v___f_3303_, 3, v_a_3299_);
lean_closure_set(v___f_3303_, 4, v_a_3302_);
v___x_3304_ = l_Lasm_JS_Function_ofFn(v___f_3303_);
return v___x_3304_;
}
else
{
lean_dec(v_a_3299_);
lean_dec_ref(v_options_3292_);
lean_dec_ref(v_handler_3291_);
return v___x_3301_;
}
}
else
{
lean_dec(v_a_3296_);
lean_dec_ref(v_options_3292_);
lean_dec_ref(v_handler_3291_);
return v___x_3298_;
}
}
else
{
lean_dec_ref(v_options_3292_);
lean_dec_ref(v_handler_3291_);
return v___x_3295_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3305_, lean_object* v_options_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3305_, v_options_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3309_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lasm_JS_Wire_decode(v_bytes_3309_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3312_);
lean_dec_ref(v_bytes_3312_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3315_, lean_object* v_bytes_3316_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Lasm_JS_Wire_decode(v_bytes_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3319_, lean_object* v_bytes_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3319_, v_bytes_3320_);
lean_dec_ref(v_bytes_3320_);
lean_dec_ref(v_context_3319_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3323_){
_start:
{
if (lean_obj_tag(v_x_3323_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3333_; 
v_a_3325_ = lean_ctor_get(v_x_3323_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v_x_3323_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3327_ = v_x_3323_;
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v_x_3323_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3333_;
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
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
lean_object* v___x_3331_; 
v___x_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3330_);
return v___x_3331_;
}
}
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3343_; 
v_a_3334_ = lean_ctor_get(v_x_3323_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v_x_3323_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3336_ = v_x_3323_;
v_isShared_3337_ = v_isSharedCheck_3343_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v_x_3323_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3343_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
v___x_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3340_);
return v___x_3341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3344_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3351_){
_start:
{
if (lean_obj_tag(v_x_3351_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3361_; 
v_a_3353_ = lean_ctor_get(v_x_3351_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_x_3351_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3355_ = v_x_3351_;
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v_x_3351_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
lean_object* v___x_3359_; 
v___x_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
return v___x_3359_;
}
}
}
else
{
lean_object* v___x_3362_; 
lean_dec_ref_known(v_x_3351_, 1);
v___x_3362_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3362_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3363_, lean_object* v___y_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3363_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3366_, lean_object* v_x_3367_){
_start:
{
if (lean_obj_tag(v_x_3367_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3377_; 
lean_dec_ref(v___f_3366_);
v_a_3369_ = lean_ctor_get(v_x_3367_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v_x_3367_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3371_ = v_x_3367_;
v_isShared_3372_ = v_isSharedCheck_3377_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v_x_3367_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3377_;
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
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
lean_object* v___x_3375_; 
v___x_3375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
return v___x_3375_;
}
}
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3398_; 
v_a_3378_ = lean_ctor_get(v_x_3367_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v_x_3367_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3380_ = v_x_3367_;
v_isShared_3381_ = v_isSharedCheck_3398_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v_x_3367_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3398_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v_flush_3382_; lean_object* v___x_3383_; uint8_t v___x_3384_; lean_object* v_val_3386_; lean_object* v___x_3389_; 
v_flush_3382_ = lean_ctor_get(v_a_3378_, 0);
lean_inc_ref(v_flush_3382_);
lean_dec(v_a_3378_);
v___x_3383_ = lean_unsigned_to_nat(0u);
v___x_3384_ = 0;
v___x_3389_ = lean_apply_1(v_flush_3382_, lean_box(0));
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v_a_3390_; lean_object* v___x_3392_; 
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
lean_inc(v_a_3390_);
lean_dec_ref_known(v___x_3389_, 1);
if (v_isShared_3381_ == 0)
{
lean_ctor_set(v___x_3380_, 0, v_a_3390_);
v___x_3392_ = v___x_3380_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3390_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
v_val_3386_ = v___x_3392_;
goto v___jp_3385_;
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; 
v_a_3394_ = lean_ctor_get(v___x_3389_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3389_, 1);
if (v_isShared_3381_ == 0)
{
lean_ctor_set_tag(v___x_3380_, 0);
lean_ctor_set(v___x_3380_, 0, v_a_3394_);
v___x_3396_ = v___x_3380_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3394_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
v_val_3386_ = v___x_3396_;
goto v___jp_3385_;
}
}
v___jp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3387_, 0, v_val_3386_);
v___x_3388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3383_, v___x_3384_, v___x_3387_, v___f_3366_);
return v___x_3388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3399_, lean_object* v_x_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v_res_3402_; 
v_res_3402_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3399_, v_x_3400_);
return v_res_3402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3403_, lean_object* v_x_3404_){
_start:
{
if (lean_obj_tag(v_x_3404_) == 0)
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3414_; 
lean_dec_ref(v___f_3403_);
v_a_3406_ = lean_ctor_get(v_x_3404_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v_x_3404_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3408_ = v_x_3404_;
v_isShared_3409_ = v_isSharedCheck_3414_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v_x_3404_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3414_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
lean_object* v___x_3412_; 
v___x_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
return v___x_3412_;
}
}
}
else
{
lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3426_; 
v_isSharedCheck_3426_ = !lean_is_exclusive(v_x_3404_);
if (v_isSharedCheck_3426_ == 0)
{
lean_object* v_unused_3427_; 
v_unused_3427_ = lean_ctor_get(v_x_3404_, 0);
lean_dec(v_unused_3427_);
v___x_3416_ = v_x_3404_;
v_isShared_3417_ = v_isSharedCheck_3426_;
goto v_resetjp_3415_;
}
else
{
lean_dec(v_x_3404_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3426_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3418_; uint8_t v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3422_; 
v___x_3418_ = lean_unsigned_to_nat(0u);
v___x_3419_ = 0;
v___x_3420_ = lean_get_stdout();
if (v_isShared_3417_ == 0)
{
lean_ctor_set(v___x_3416_, 0, v___x_3420_);
v___x_3422_ = v___x_3416_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3420_);
v___x_3422_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
v___x_3424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3418_, v___x_3419_, v___x_3423_, v___f_3403_);
return v___x_3424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3428_, lean_object* v_x_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3428_, v_x_3429_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3432_){
_start:
{
if (lean_obj_tag(v_x_3432_) == 0)
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3442_; 
v_a_3434_ = lean_ctor_get(v_x_3432_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v_x_3432_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3436_ = v_x_3432_;
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v_x_3432_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3440_; 
v___x_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
return v___x_3440_;
}
}
}
else
{
lean_object* v___x_3443_; 
lean_dec_ref_known(v_x_3432_, 1);
v___x_3443_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3448_, lean_object* v___x_3449_, lean_object* v_____r_3450_){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3452_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3453_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3453_, 0, v_snd_3448_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
lean_ctor_set(v___x_3453_, 2, v___x_3449_);
v___x_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
v___x_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
return v___x_3455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3456_, lean_object* v___x_3457_, lean_object* v_____r_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3456_, v___x_3457_, v_____r_3458_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3461_, lean_object* v_x_3462_){
_start:
{
if (lean_obj_tag(v_x_3462_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3472_; 
lean_dec_ref(v___f_3461_);
v_a_3464_ = lean_ctor_get(v_x_3462_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_x_3462_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3466_ = v_x_3462_;
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v_x_3462_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
lean_object* v___x_3470_; 
v___x_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3469_);
return v___x_3470_;
}
}
}
else
{
lean_object* v_a_3473_; 
v_a_3473_ = lean_ctor_get(v_x_3462_, 0);
lean_inc(v_a_3473_);
lean_dec_ref_known(v_x_3462_, 1);
if (lean_obj_tag(v_a_3473_) == 0)
{
lean_object* v_a_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3482_; 
lean_dec_ref(v___f_3461_);
v_a_3474_ = lean_ctor_get(v_a_3473_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v_a_3473_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3476_ = v_a_3473_;
v_isShared_3477_ = v_isSharedCheck_3482_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_a_3474_);
lean_dec(v_a_3473_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3482_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3479_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set_tag(v___x_3476_, 1);
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3474_);
v___x_3479_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3480_; 
v___x_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3479_);
return v___x_3480_;
}
}
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3484_; 
v_a_3483_ = lean_ctor_get(v_a_3473_, 0);
lean_inc(v_a_3483_);
lean_dec_ref_known(v_a_3473_, 1);
v___x_3484_ = lean_apply_2(v___f_3461_, v_a_3483_, lean_box(0));
return v___x_3484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3485_, lean_object* v_x_3486_, lean_object* v___y_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3485_, v_x_3486_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3490_, lean_object* v___x_3491_, lean_object* v_x_3492_){
_start:
{
if (lean_obj_tag(v_x_3492_) == 0)
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3502_; 
lean_dec_ref(v___x_3491_);
lean_dec(v_snd_3490_);
v_a_3494_ = lean_ctor_get(v_x_3492_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v_x_3492_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3496_ = v_x_3492_;
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v_x_3492_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3499_);
return v___x_3500_;
}
}
}
else
{
lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3513_; 
v_isSharedCheck_3513_ = !lean_is_exclusive(v_x_3492_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v_x_3492_, 0);
lean_dec(v_unused_3514_);
v___x_3504_ = v_x_3492_;
v_isShared_3505_ = v_isSharedCheck_3513_;
goto v_resetjp_3503_;
}
else
{
lean_dec(v_x_3492_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3513_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3509_; 
v___x_3506_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3507_, 0, v_snd_3490_);
lean_ctor_set(v___x_3507_, 1, v___x_3506_);
lean_ctor_set(v___x_3507_, 2, v___x_3491_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set_tag(v___x_3504_, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3507_);
v___x_3509_ = v___x_3504_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
v___x_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3510_);
return v___x_3511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3515_, lean_object* v___x_3516_, lean_object* v_x_3517_, lean_object* v___y_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3515_, v___x_3516_, v_x_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3520_, lean_object* v_name_3521_, lean_object* v_args_3522_){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; uint64_t v___x_3527_; lean_object* v___x_3528_; 
v___x_3524_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3525_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3525_, 0, v_o_3520_);
lean_ctor_set(v___x_3525_, 1, v___x_3524_);
v___x_3526_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3526_, 0, v_name_3521_);
v___x_3527_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3528_ = l_Lasm_JS_Value_invokeRaw(v___x_3525_, v___x_3526_, v_args_3522_, v___x_3527_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_Lasm_JS_Wire_decode(v_a_3529_);
lean_dec(v_a_3529_);
return v___x_3530_;
}
else
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3538_; 
v_a_3531_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3533_ = v___x_3528_;
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3528_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_a_3531_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3539_, lean_object* v_name_3540_, lean_object* v_args_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3539_, v_name_3540_, v_args_3541_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3544_, uint8_t v___x_3545_, lean_object* v___f_3546_, lean_object* v_snd_3547_, lean_object* v_chunk_3548_){
_start:
{
lean_object* v_val_3551_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3554_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3555_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3555_, 0, v_chunk_3548_);
v___x_3556_ = lean_unsigned_to_nat(1u);
v___x_3557_ = lean_mk_empty_array_with_capacity(v___x_3556_);
v___x_3558_ = lean_array_push(v___x_3557_, v___x_3555_);
v___x_3559_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3547_, v___x_3554_, v___x_3558_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3559_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3559_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
lean_ctor_set_tag(v___x_3562_, 1);
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
v_val_3551_ = v___x_3565_;
goto v___jp_3550_;
}
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
v_a_3568_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3559_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3559_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
lean_ctor_set_tag(v___x_3570_, 0);
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
v_val_3551_ = v___x_3573_;
goto v___jp_3550_;
}
}
}
v___jp_3550_:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3552_, 0, v_val_3551_);
v___x_3553_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3544_, v___x_3545_, v___x_3552_, v___f_3546_);
return v___x_3553_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3576_, lean_object* v___x_3577_, lean_object* v___f_3578_, lean_object* v_snd_3579_, lean_object* v_chunk_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v___x_18404__boxed_3582_; lean_object* v_res_3583_; 
v___x_18404__boxed_3582_ = lean_unbox(v___x_3577_);
v_res_3583_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3576_, v___x_18404__boxed_3582_, v___f_3578_, v_snd_3579_, v_chunk_3580_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3584_, uint8_t v___x_3585_, lean_object* v___f_3586_, lean_object* v_x_3587_){
_start:
{
lean_object* v_val_3590_; 
if (lean_obj_tag(v_x_3587_) == 0)
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3609_; 
v_a_3593_ = lean_ctor_get(v_x_3587_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v_x_3587_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3595_ = v_x_3587_;
v_isShared_3596_ = v_isSharedCheck_3609_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v_x_3587_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3609_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3597_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3598_ = lean_io_error_to_string(v_a_3593_);
v___x_3599_ = lean_string_append(v___x_3597_, v___x_3598_);
lean_dec_ref(v___x_3598_);
v___x_3600_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3599_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3603_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref_known(v___x_3600_, 1);
if (v_isShared_3596_ == 0)
{
lean_ctor_set_tag(v___x_3595_, 1);
lean_ctor_set(v___x_3595_, 0, v_a_3601_);
v___x_3603_ = v___x_3595_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3601_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
v_val_3590_ = v___x_3603_;
goto v___jp_3589_;
}
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; 
v_a_3605_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3600_, 1);
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 0, v_a_3605_);
v___x_3607_ = v___x_3595_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
v_val_3590_ = v___x_3607_;
goto v___jp_3589_;
}
}
}
}
else
{
lean_object* v___x_3610_; 
lean_dec_ref(v___f_3586_);
lean_dec(v___x_3584_);
v___x_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3610_, 0, v_x_3587_);
return v___x_3610_;
}
v___jp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_val_3590_);
v___x_3592_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3584_, v___x_3585_, v___x_3591_, v___f_3586_);
return v___x_3592_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3611_, lean_object* v___x_3612_, lean_object* v___f_3613_, lean_object* v_x_3614_, lean_object* v___y_3615_){
_start:
{
uint8_t v___x_18472__boxed_3616_; lean_object* v_res_3617_; 
v___x_18472__boxed_3616_ = lean_unbox(v___x_3612_);
v_res_3617_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3611_, v___x_18472__boxed_3616_, v___f_3613_, v_x_3614_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3618_, lean_object* v_snd_3619_, lean_object* v___y_3620_, uint16_t v_status_3621_, lean_object* v_body_3622_, lean_object* v___x_3623_, lean_object* v___f_3624_, lean_object* v___f_3625_, lean_object* v___f_3626_, lean_object* v___f_3627_, lean_object* v___f_3628_, lean_object* v_x_3629_){
_start:
{
if (lean_obj_tag(v_x_3629_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3639_; 
lean_dec_ref(v___f_3628_);
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec(v___x_3623_);
lean_dec_ref(v_body_3622_);
lean_dec(v_snd_3619_);
lean_dec(v_stream_3618_);
v_a_3631_ = lean_ctor_get(v_x_3629_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_x_3629_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3633_ = v_x_3629_;
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v_x_3629_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3639_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
lean_object* v___x_3637_; 
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
return v___x_3637_;
}
}
}
else
{
lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3669_; 
v_isSharedCheck_3669_ = !lean_is_exclusive(v_x_3629_);
if (v_isSharedCheck_3669_ == 0)
{
lean_object* v_unused_3670_; 
v_unused_3670_ = lean_ctor_get(v_x_3629_, 0);
lean_dec(v_unused_3670_);
v___x_3641_ = v_x_3629_;
v_isShared_3642_ = v_isSharedCheck_3669_;
goto v_resetjp_3640_;
}
else
{
lean_dec(v_x_3629_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3669_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
if (lean_obj_tag(v_stream_3618_) == 0)
{
lean_object* v___x_3643_; lean_object* v___y_3645_; uint8_t v___x_3654_; 
lean_dec_ref(v___f_3628_);
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec(v___x_3623_);
v___x_3643_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3654_ = l_Lasm_Fetch_bodyless(v___y_3620_, v_status_3621_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; 
v___x_3655_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3655_, 0, v_body_3622_);
v___y_3645_ = v___x_3655_;
goto v___jp_3644_;
}
else
{
lean_object* v___x_3656_; 
lean_dec_ref(v_body_3622_);
v___x_3656_ = lean_box(0);
v___y_3645_ = v___x_3656_;
goto v___jp_3644_;
}
v___jp_3644_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3651_; 
v___x_3646_ = lean_unsigned_to_nat(1u);
v___x_3647_ = lean_mk_empty_array_with_capacity(v___x_3646_);
v___x_3648_ = lean_array_push(v___x_3647_, v___y_3645_);
v___x_3649_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3649_, 0, v_snd_3619_);
lean_ctor_set(v___x_3649_, 1, v___x_3643_);
lean_ctor_set(v___x_3649_, 2, v___x_3648_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v___x_3649_);
v___x_3651_ = v___x_3641_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3652_; 
v___x_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
return v___x_3652_;
}
}
}
else
{
lean_object* v_val_3657_; uint8_t v___x_3658_; 
lean_del_object(v___x_3641_);
lean_dec_ref(v_body_3622_);
v_val_3657_ = lean_ctor_get(v_stream_3618_, 0);
lean_inc(v_val_3657_);
lean_dec_ref_known(v_stream_3618_, 1);
v___x_3658_ = l_Lasm_Fetch_bodyless(v___y_3620_, v_status_3621_);
if (v___x_3658_ == 0)
{
lean_object* v___x_3659_; lean_object* v___f_3660_; lean_object* v___x_3661_; lean_object* v___f_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
lean_dec_ref(v___f_3628_);
v___x_3659_ = lean_box(v___x_3658_);
lean_inc_n(v___x_3623_, 4);
v___f_3660_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3660_, 0, v___x_3623_);
lean_closure_set(v___f_3660_, 1, v___x_3659_);
lean_closure_set(v___f_3660_, 2, v___f_3624_);
lean_closure_set(v___f_3660_, 3, v_snd_3619_);
v___x_3661_ = lean_box(v___x_3658_);
v___f_3662_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3662_, 0, v___x_3623_);
lean_closure_set(v___f_3662_, 1, v___x_3661_);
lean_closure_set(v___f_3662_, 2, v___f_3625_);
v___x_3663_ = lean_apply_2(v_val_3657_, v___f_3660_, lean_box(0));
v___x_3664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3623_, v___x_3658_, v___x_3663_, v___f_3626_);
v___x_3665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3623_, v___x_3658_, v___x_3664_, v___f_3662_);
v___x_3666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3623_, v___x_3658_, v___x_3665_, v___f_3627_);
return v___x_3666_;
}
else
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
lean_dec(v_val_3657_);
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec(v___x_3623_);
lean_dec(v_snd_3619_);
v___x_3667_ = lean_box(0);
v___x_3668_ = lean_apply_2(v___f_3628_, v___x_3667_, lean_box(0));
return v___x_3668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3671_, lean_object* v_snd_3672_, lean_object* v___y_3673_, lean_object* v_status_3674_, lean_object* v_body_3675_, lean_object* v___x_3676_, lean_object* v___f_3677_, lean_object* v___f_3678_, lean_object* v___f_3679_, lean_object* v___f_3680_, lean_object* v___f_3681_, lean_object* v_x_3682_, lean_object* v___y_3683_){
_start:
{
uint16_t v_status_boxed_3684_; lean_object* v_res_3685_; 
v_status_boxed_3684_ = lean_unbox(v_status_3674_);
v_res_3685_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3671_, v_snd_3672_, v___y_3673_, v_status_boxed_3684_, v_body_3675_, v___x_3676_, v___f_3677_, v___f_3678_, v___f_3679_, v___f_3680_, v___f_3681_, v_x_3682_);
lean_dec_ref(v___y_3673_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3686_, size_t v_i_3687_, size_t v_stop_3688_, lean_object* v_b_3689_){
_start:
{
uint8_t v___x_3690_; 
v___x_3690_ = lean_usize_dec_eq(v_i_3687_, v_stop_3688_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; lean_object* v_fst_3692_; lean_object* v_snd_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; size_t v___x_3698_; size_t v___x_3699_; 
v___x_3691_ = lean_array_uget_borrowed(v_as_3686_, v_i_3687_);
v_fst_3692_ = lean_ctor_get(v___x_3691_, 0);
v_snd_3693_ = lean_ctor_get(v___x_3691_, 1);
lean_inc(v_fst_3692_);
v___x_3694_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3694_, 0, v_fst_3692_);
v___x_3695_ = lean_array_push(v_b_3689_, v___x_3694_);
lean_inc(v_snd_3693_);
v___x_3696_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3696_, 0, v_snd_3693_);
v___x_3697_ = lean_array_push(v___x_3695_, v___x_3696_);
v___x_3698_ = ((size_t)1ULL);
v___x_3699_ = lean_usize_add(v_i_3687_, v___x_3698_);
v_i_3687_ = v___x_3699_;
v_b_3689_ = v___x_3697_;
goto _start;
}
else
{
return v_b_3689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3701_, lean_object* v_i_3702_, lean_object* v_stop_3703_, lean_object* v_b_3704_){
_start:
{
size_t v_i_boxed_3705_; size_t v_stop_boxed_3706_; lean_object* v_res_3707_; 
v_i_boxed_3705_ = lean_unbox_usize(v_i_3702_);
lean_dec(v_i_3702_);
v_stop_boxed_3706_ = lean_unbox_usize(v_stop_3703_);
lean_dec(v_stop_3703_);
v_res_3707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3701_, v_i_boxed_3705_, v_stop_boxed_3706_, v_b_3704_);
lean_dec_ref(v_as_3701_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3709_, lean_object* v_snd_3710_, lean_object* v___y_3711_, lean_object* v___f_3712_, lean_object* v___f_3713_, lean_object* v_x_3714_){
_start:
{
lean_object* v___y_3717_; uint8_t v___y_3718_; lean_object* v_val_3719_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; 
if (lean_obj_tag(v_x_3714_) == 0)
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3758_; 
lean_dec_ref(v___f_3713_);
lean_dec_ref(v___f_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v_snd_3710_);
lean_dec(v___x_3709_);
v_a_3750_ = lean_ctor_get(v_x_3714_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v_x_3714_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3752_ = v_x_3714_;
v_isShared_3753_ = v_isSharedCheck_3758_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v_x_3714_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3758_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
lean_object* v___x_3756_; 
v___x_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
return v___x_3756_;
}
}
}
else
{
lean_object* v_a_3759_; uint16_t v_status_3760_; lean_object* v_headers_3761_; lean_object* v_body_3762_; lean_object* v_stream_3763_; lean_object* v___x_3764_; lean_object* v___f_3765_; lean_object* v___f_3766_; lean_object* v___f_3767_; lean_object* v___y_3769_; lean_object* v___x_3781_; uint8_t v___x_3782_; 
v_a_3759_ = lean_ctor_get(v_x_3714_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v_x_3714_, 1);
v_status_3760_ = lean_ctor_get_uint16(v_a_3759_, sizeof(void*)*3);
v_headers_3761_ = lean_ctor_get(v_a_3759_, 0);
lean_inc_ref(v_headers_3761_);
v_body_3762_ = lean_ctor_get(v_a_3759_, 1);
lean_inc_ref(v_body_3762_);
v_stream_3763_ = lean_ctor_get(v_a_3759_, 2);
lean_inc(v_stream_3763_);
lean_dec(v_a_3759_);
v___x_3764_ = lean_mk_empty_array_with_capacity(v___x_3709_);
lean_inc_ref_n(v___x_3764_, 2);
lean_inc_n(v_snd_3710_, 2);
v___f_3765_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3765_, 0, v_snd_3710_);
lean_closure_set(v___f_3765_, 1, v___x_3764_);
lean_inc_ref(v___f_3765_);
v___f_3766_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3766_, 0, v___f_3765_);
v___f_3767_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3767_, 0, v_snd_3710_);
lean_closure_set(v___f_3767_, 1, v___x_3764_);
v___x_3781_ = lean_array_get_size(v_headers_3761_);
v___x_3782_ = lean_nat_dec_lt(v___x_3709_, v___x_3781_);
if (v___x_3782_ == 0)
{
lean_dec_ref(v_headers_3761_);
v___y_3769_ = v___x_3764_;
goto v___jp_3768_;
}
else
{
uint8_t v___x_3783_; 
v___x_3783_ = lean_nat_dec_le(v___x_3781_, v___x_3781_);
if (v___x_3783_ == 0)
{
if (v___x_3782_ == 0)
{
lean_dec_ref(v_headers_3761_);
v___y_3769_ = v___x_3764_;
goto v___jp_3768_;
}
else
{
size_t v___x_3784_; size_t v___x_3785_; lean_object* v___x_3786_; 
v___x_3784_ = ((size_t)0ULL);
v___x_3785_ = lean_usize_of_nat(v___x_3781_);
v___x_3786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3761_, v___x_3784_, v___x_3785_, v___x_3764_);
lean_dec_ref(v_headers_3761_);
v___y_3769_ = v___x_3786_;
goto v___jp_3768_;
}
}
else
{
size_t v___x_3787_; size_t v___x_3788_; lean_object* v___x_3789_; 
v___x_3787_ = ((size_t)0ULL);
v___x_3788_ = lean_usize_of_nat(v___x_3781_);
v___x_3789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3761_, v___x_3787_, v___x_3788_, v___x_3764_);
lean_dec_ref(v_headers_3761_);
v___y_3769_ = v___x_3789_;
goto v___jp_3768_;
}
}
v___jp_3768_:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___f_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; uint8_t v___x_3777_; 
v___x_3770_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3771_ = lean_box(v_status_3760_);
lean_inc(v___x_3709_);
lean_inc(v_snd_3710_);
v___f_3772_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3772_, 0, v_stream_3763_);
lean_closure_set(v___f_3772_, 1, v_snd_3710_);
lean_closure_set(v___f_3772_, 2, v___y_3711_);
lean_closure_set(v___f_3772_, 3, v___x_3771_);
lean_closure_set(v___f_3772_, 4, v_body_3762_);
lean_closure_set(v___f_3772_, 5, v___x_3709_);
lean_closure_set(v___f_3772_, 6, v___f_3712_);
lean_closure_set(v___f_3772_, 7, v___f_3767_);
lean_closure_set(v___f_3772_, 8, v___f_3713_);
lean_closure_set(v___f_3772_, 9, v___f_3766_);
lean_closure_set(v___f_3772_, 10, v___f_3765_);
v___x_3773_ = lean_uint16_to_nat(v_status_3760_);
v___x_3774_ = lean_nat_to_int(v___x_3773_);
v___x_3775_ = lean_nat_abs(v___x_3774_);
v___x_3776_ = lean_cstr_to_nat("9007199254740991");
v___x_3777_ = lean_nat_dec_le(v___x_3775_, v___x_3776_);
lean_dec(v___x_3775_);
if (v___x_3777_ == 0)
{
lean_object* v___x_3778_; 
v___x_3778_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3774_);
v___y_3723_ = v___f_3772_;
v___y_3724_ = v___y_3769_;
v___y_3725_ = v___x_3770_;
v___y_3726_ = v___x_3778_;
goto v___jp_3722_;
}
else
{
double v___x_3779_; lean_object* v___x_3780_; 
v___x_3779_ = l_Float_ofInt(v___x_3774_);
lean_dec(v___x_3774_);
v___x_3780_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3780_, 0, v___x_3779_);
v___y_3723_ = v___f_3772_;
v___y_3724_ = v___y_3769_;
v___y_3725_ = v___x_3770_;
v___y_3726_ = v___x_3780_;
goto v___jp_3722_;
}
}
}
v___jp_3716_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3720_, 0, v_val_3719_);
v___x_3721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3709_, v___y_3718_, v___x_3720_, v___y_3717_);
return v___x_3721_;
}
v___jp_3722_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; 
v___x_3727_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3727_, 0, v___y_3724_);
v___x_3728_ = lean_unsigned_to_nat(2u);
v___x_3729_ = lean_mk_empty_array_with_capacity(v___x_3728_);
v___x_3730_ = lean_array_push(v___x_3729_, v___y_3726_);
v___x_3731_ = lean_array_push(v___x_3730_, v___x_3727_);
v___x_3732_ = 0;
lean_inc_ref(v___y_3725_);
v___x_3733_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3710_, v___y_3725_, v___x_3731_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3733_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3733_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
lean_ctor_set_tag(v___x_3736_, 1);
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
v___y_3717_ = v___y_3723_;
v___y_3718_ = v___x_3732_;
v_val_3719_ = v___x_3739_;
goto v___jp_3716_;
}
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
v_a_3742_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3733_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3733_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
lean_ctor_set_tag(v___x_3744_, 0);
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
v___y_3717_ = v___y_3723_;
v___y_3718_ = v___x_3732_;
v_val_3719_ = v___x_3747_;
goto v___jp_3716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3790_, lean_object* v_snd_3791_, lean_object* v___y_3792_, lean_object* v___f_3793_, lean_object* v___f_3794_, lean_object* v_x_3795_, lean_object* v___y_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3790_, v_snd_3791_, v___y_3792_, v___f_3793_, v___f_3794_, v_x_3795_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3798_, lean_object* v___x_3799_, lean_object* v___f_3800_, lean_object* v_request_3801_){
_start:
{
uint8_t v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3803_ = 0;
v___x_3804_ = l_Lasm_Fetch_respond(v_handler_3798_, v_request_3801_);
v___x_3805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3799_, v___x_3803_, v___x_3804_, v___f_3800_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3806_, lean_object* v___x_3807_, lean_object* v___f_3808_, lean_object* v_request_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3806_, v___x_3807_, v___f_3808_, v_request_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3812_, lean_object* v_x_3813_){
_start:
{
if (lean_obj_tag(v_x_3813_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3823_; 
lean_dec_ref(v___f_3812_);
v_a_3815_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3817_ = v_x_3813_;
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v_x_3813_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3821_; 
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
return v___x_3821_;
}
}
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3825_; 
v_a_3824_ = lean_ctor_get(v_x_3813_, 0);
lean_inc(v_a_3824_);
lean_dec_ref_known(v_x_3813_, 1);
v___x_3825_ = lean_apply_2(v___f_3812_, v_a_3824_, lean_box(0));
return v___x_3825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_3826_, lean_object* v_x_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lasm_Fetch_serveNode___lam__13(v___f_3826_, v_x_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___x_3832_, lean_object* v___f_3833_, lean_object* v___x_3834_, uint8_t v___x_3835_, lean_object* v___f_3836_, lean_object* v_x_3837_){
_start:
{
if (lean_obj_tag(v_x_3837_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3847_; 
lean_dec_ref(v___f_3836_);
lean_dec(v___x_3834_);
lean_dec_ref(v___f_3833_);
lean_dec_ref(v___x_3832_);
lean_dec_ref(v___y_3831_);
lean_dec_ref(v___y_3830_);
v_a_3839_ = lean_ctor_get(v_x_3837_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v_x_3837_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3841_ = v_x_3837_;
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v_x_3837_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
lean_object* v___x_3845_; 
v___x_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
return v___x_3845_;
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3858_; 
v_a_3848_ = lean_ctor_get(v_x_3837_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v_x_3837_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3850_ = v_x_3837_;
v_isShared_3851_ = v_isSharedCheck_3858_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v_x_3837_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3858_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3852_; lean_object* v___x_3854_; 
v___x_3852_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3852_, 0, v___y_3830_);
lean_ctor_set(v___x_3852_, 1, v___y_3831_);
lean_ctor_set(v___x_3852_, 2, v___x_3832_);
lean_ctor_set(v___x_3852_, 3, v_a_3848_);
lean_ctor_set(v___x_3852_, 4, v___f_3833_);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 0, v___x_3852_);
v___x_3854_ = v___x_3850_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3852_);
v___x_3854_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
v___x_3856_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3834_, v___x_3835_, v___x_3855_, v___f_3836_);
return v___x_3856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___x_3861_, lean_object* v___f_3862_, lean_object* v___x_3863_, lean_object* v___x_3864_, lean_object* v___f_3865_, lean_object* v_x_3866_, lean_object* v___y_3867_){
_start:
{
uint8_t v___x_18879__boxed_3868_; lean_object* v_res_3869_; 
v___x_18879__boxed_3868_ = lean_unbox(v___x_3864_);
v_res_3869_ = l_Lasm_Fetch_serveNode___lam__18(v___y_3859_, v___y_3860_, v___x_3861_, v___f_3862_, v___x_3863_, v___x_18879__boxed_3868_, v___f_3865_, v_x_3866_);
return v_res_3869_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_3870_; uint8_t v___x_3871_; uint64_t v___x_3872_; 
v___x_3870_ = 8ULL;
v___x_3871_ = 0;
v___x_3872_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3871_, v___x_3870_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_3873_, lean_object* v_name_3874_, lean_object* v_args_3875_){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; uint64_t v___x_3880_; lean_object* v___x_3881_; 
v___x_3877_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3878_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3878_, 0, v_o_3873_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
lean_inc_ref(v_name_3874_);
v___x_3879_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3879_, 0, v_name_3874_);
v___x_3880_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_3881_ = l_Lasm_JS_Value_invokeRaw(v___x_3878_, v___x_3879_, v_args_3875_, v___x_3880_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v_a_3882_ = lean_ctor_get(v___x_3881_, 0);
lean_inc(v_a_3882_);
lean_dec_ref_known(v___x_3881_, 1);
v___x_3883_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3884_ = lean_string_append(v___x_3883_, v_name_3874_);
lean_dec_ref(v_name_3874_);
v___x_3885_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3884_, v_a_3882_);
lean_dec(v_a_3882_);
lean_dec_ref(v___x_3884_);
return v___x_3885_;
}
else
{
lean_dec_ref(v_name_3874_);
return v___x_3881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_3886_, lean_object* v_name_3887_, lean_object* v_args_3888_, lean_object* v_a_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_3886_, v_name_3887_, v_args_3888_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_3892_, uint8_t v___x_3893_, lean_object* v___f_3894_, lean_object* v___x_3895_, lean_object* v_a_3896_, lean_object* v_x_3897_){
_start:
{
lean_object* v_val_3900_; 
if (lean_obj_tag(v_x_3897_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3911_; 
lean_dec(v_a_3896_);
lean_dec_ref(v___f_3894_);
lean_dec(v___x_3892_);
v_a_3903_ = lean_ctor_get(v_x_3897_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v_x_3897_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3905_ = v_x_3897_;
v_isShared_3906_ = v_isSharedCheck_3911_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v_x_3897_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3911_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v___x_3908_; 
if (v_isShared_3906_ == 0)
{
v___x_3908_ = v___x_3905_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3903_);
v___x_3908_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
lean_object* v___x_3909_; 
v___x_3909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
return v___x_3909_;
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3930_; 
v_a_3912_ = lean_ctor_get(v_x_3897_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v_x_3897_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3914_ = v_x_3897_;
v_isShared_3915_ = v_isSharedCheck_3930_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v_x_3897_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3930_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3916_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_3917_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3918_, 0, v_a_3912_);
lean_ctor_set(v___x_3918_, 1, v___x_3917_);
v___x_3919_ = lean_mk_empty_array_with_capacity(v___x_3895_);
v___x_3920_ = lean_array_push(v___x_3919_, v___x_3918_);
v___x_3921_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_3896_, v___x_3916_, v___x_3920_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3924_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 0, v_a_3922_);
v___x_3924_ = v___x_3914_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3922_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
v_val_3900_ = v___x_3924_;
goto v___jp_3899_;
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; 
v_a_3926_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3926_);
lean_dec_ref_known(v___x_3921_, 1);
if (v_isShared_3915_ == 0)
{
lean_ctor_set_tag(v___x_3914_, 0);
lean_ctor_set(v___x_3914_, 0, v_a_3926_);
v___x_3928_ = v___x_3914_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3926_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
v_val_3900_ = v___x_3928_;
goto v___jp_3899_;
}
}
}
}
v___jp_3899_:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3901_, 0, v_val_3900_);
v___x_3902_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3892_, v___x_3893_, v___x_3901_, v___f_3894_);
return v___x_3902_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_3931_, lean_object* v___x_3932_, lean_object* v___f_3933_, lean_object* v___x_3934_, lean_object* v_a_3935_, lean_object* v_x_3936_, lean_object* v___y_3937_){
_start:
{
uint8_t v___x_18978__boxed_3938_; lean_object* v_res_3939_; 
v___x_18978__boxed_3938_ = lean_unbox(v___x_3932_);
v_res_3939_ = l_Lasm_Fetch_serveNode___lam__14(v___x_3931_, v___x_18978__boxed_3938_, v___f_3933_, v___x_3934_, v_a_3935_, v_x_3936_);
lean_dec(v___x_3934_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___x_3942_, lean_object* v___x_3943_, lean_object* v___x_3944_, uint8_t v___x_3945_, lean_object* v___f_3946_, lean_object* v_x_3947_){
_start:
{
if (lean_obj_tag(v_x_3947_) == 0)
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3957_; 
lean_dec_ref(v___f_3946_);
lean_dec(v___x_3944_);
lean_dec_ref(v___x_3943_);
lean_dec_ref(v___x_3942_);
lean_dec_ref(v___y_3941_);
lean_dec_ref(v___y_3940_);
v_a_3949_ = lean_ctor_get(v_x_3947_, 0);
v_isSharedCheck_3957_ = !lean_is_exclusive(v_x_3947_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3951_ = v_x_3947_;
v_isShared_3952_ = v_isSharedCheck_3957_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v_x_3947_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3957_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
lean_object* v___x_3955_; 
v___x_3955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3954_);
return v___x_3955_;
}
}
}
else
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3968_; 
v_a_3958_ = lean_ctor_get(v_x_3947_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v_x_3947_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3960_ = v_x_3947_;
v_isShared_3961_ = v_isSharedCheck_3968_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v_x_3947_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3968_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3964_; 
v___x_3962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3962_, 0, v___y_3940_);
lean_ctor_set(v___x_3962_, 1, v___y_3941_);
lean_ctor_set(v___x_3962_, 2, v___x_3942_);
lean_ctor_set(v___x_3962_, 3, v___x_3943_);
lean_ctor_set(v___x_3962_, 4, v_a_3958_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_3962_);
v___x_3964_ = v___x_3960_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3962_);
v___x_3964_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
v___x_3966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3944_, v___x_3945_, v___x_3965_, v___f_3946_);
return v___x_3966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___x_3971_, lean_object* v___x_3972_, lean_object* v___x_3973_, lean_object* v___x_3974_, lean_object* v___f_3975_, lean_object* v_x_3976_, lean_object* v___y_3977_){
_start:
{
uint8_t v___x_19068__boxed_3978_; lean_object* v_res_3979_; 
v___x_19068__boxed_3978_ = lean_unbox(v___x_3974_);
v_res_3979_ = l_Lasm_Fetch_serveNode___lam__15(v___y_3969_, v___y_3970_, v___x_3971_, v___x_3972_, v___x_3973_, v___x_19068__boxed_3978_, v___f_3975_, v_x_3976_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_3980_, uint8_t v___x_3981_, lean_object* v___f_3982_, lean_object* v_x_3983_){
_start:
{
lean_object* v_val_3986_; 
if (lean_obj_tag(v_x_3983_) == 0)
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3997_; 
lean_dec_ref(v___f_3982_);
lean_dec(v___x_3980_);
v_a_3989_ = lean_ctor_get(v_x_3983_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3991_ = v_x_3983_;
v_isShared_3992_ = v_isSharedCheck_3997_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v_x_3983_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3997_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3995_; 
v___x_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
return v___x_3995_;
}
}
}
else
{
lean_object* v_a_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4011_; 
v_a_3998_ = lean_ctor_get(v_x_3983_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_4000_ = v_x_3983_;
v_isShared_4001_ = v_isSharedCheck_4011_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_a_3998_);
lean_dec(v_x_3983_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4011_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4002_; 
v___x_4002_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_3998_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4005_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4003_);
lean_dec_ref_known(v___x_4002_, 1);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v_a_4003_);
v___x_4005_ = v___x_4000_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_4003_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
v_val_3986_ = v___x_4005_;
goto v___jp_3985_;
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; 
v_a_4007_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v___x_4002_, 1);
if (v_isShared_4001_ == 0)
{
lean_ctor_set_tag(v___x_4000_, 0);
lean_ctor_set(v___x_4000_, 0, v_a_4007_);
v___x_4009_ = v___x_4000_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v_a_4007_);
v___x_4009_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
v_val_3986_ = v___x_4009_;
goto v___jp_3985_;
}
}
}
}
v___jp_3985_:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3987_, 0, v_val_3986_);
v___x_3988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3980_, v___x_3981_, v___x_3987_, v___f_3982_);
return v___x_3988_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4012_, lean_object* v___x_4013_, lean_object* v___f_4014_, lean_object* v_x_4015_, lean_object* v___y_4016_){
_start:
{
uint8_t v___x_19131__boxed_4017_; lean_object* v_res_4018_; 
v___x_19131__boxed_4017_ = lean_unbox(v___x_4013_);
v_res_4018_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4012_, v___x_19131__boxed_4017_, v___f_4014_, v_x_4015_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4019_, lean_object* v_range_4020_, lean_object* v_b_4021_, lean_object* v_i_4022_){
_start:
{
lean_object* v_stop_4023_; lean_object* v_step_4024_; uint8_t v___x_4025_; 
v_stop_4023_ = lean_ctor_get(v_range_4020_, 1);
v_step_4024_ = lean_ctor_get(v_range_4020_, 2);
v___x_4025_ = lean_nat_dec_lt(v_i_4022_, v_stop_4023_);
if (v___x_4025_ == 0)
{
lean_dec(v_i_4022_);
return v_b_4021_;
}
else
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4026_ = lean_unsigned_to_nat(2u);
v___x_4027_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4028_ = lean_unsigned_to_nat(1u);
v___x_4029_ = lean_nat_mul(v___x_4026_, v_i_4022_);
v___x_4030_ = lean_array_get_borrowed(v___x_4027_, v___y_4019_, v___x_4029_);
v___x_4031_ = lean_nat_add(v___x_4029_, v___x_4028_);
lean_dec(v___x_4029_);
v___x_4032_ = lean_array_get_borrowed(v___x_4027_, v___y_4019_, v___x_4031_);
lean_dec(v___x_4031_);
lean_inc(v___x_4032_);
lean_inc(v___x_4030_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4030_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
v___x_4034_ = lean_array_push(v_b_4021_, v___x_4033_);
v___x_4035_ = lean_nat_add(v_i_4022_, v_step_4024_);
lean_dec(v_i_4022_);
v_b_4021_ = v___x_4034_;
v_i_4022_ = v___x_4035_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4037_, lean_object* v_range_4038_, lean_object* v_b_4039_, lean_object* v_i_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4037_, v_range_4038_, v_b_4039_, v_i_4040_);
lean_dec_ref(v_range_4038_);
lean_dec_ref(v___y_4037_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4042_, size_t v_i_4043_, size_t v_stop_4044_, lean_object* v_b_4045_){
_start:
{
lean_object* v___y_4047_; uint8_t v___x_4051_; 
v___x_4051_ = lean_usize_dec_eq(v_i_4043_, v_stop_4044_);
if (v___x_4051_ == 0)
{
lean_object* v___x_4052_; 
v___x_4052_ = lean_array_uget_borrowed(v_as_4042_, v_i_4043_);
if (lean_obj_tag(v___x_4052_) == 4)
{
lean_object* v_s_4053_; lean_object* v___x_4054_; 
v_s_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc_ref(v_s_4053_);
v___x_4054_ = lean_array_push(v_b_4045_, v_s_4053_);
v___y_4047_ = v___x_4054_;
goto v___jp_4046_;
}
else
{
v___y_4047_ = v_b_4045_;
goto v___jp_4046_;
}
}
else
{
return v_b_4045_;
}
v___jp_4046_:
{
size_t v___x_4048_; size_t v___x_4049_; 
v___x_4048_ = ((size_t)1ULL);
v___x_4049_ = lean_usize_add(v_i_4043_, v___x_4048_);
v_i_4043_ = v___x_4049_;
v_b_4045_ = v___y_4047_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4055_, lean_object* v_i_4056_, lean_object* v_stop_4057_, lean_object* v_b_4058_){
_start:
{
size_t v_i_boxed_4059_; size_t v_stop_boxed_4060_; lean_object* v_res_4061_; 
v_i_boxed_4059_ = lean_unbox_usize(v_i_4056_);
lean_dec(v_i_4056_);
v_stop_boxed_4060_ = lean_unbox_usize(v_stop_4057_);
lean_dec(v_stop_4057_);
v_res_4061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4055_, v_i_boxed_4059_, v_stop_boxed_4060_, v_b_4058_);
lean_dec_ref(v_as_4055_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4064_, lean_object* v_start_4065_, lean_object* v_stop_4066_){
_start:
{
lean_object* v___x_4067_; uint8_t v___x_4068_; 
v___x_4067_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4068_ = lean_nat_dec_lt(v_start_4065_, v_stop_4066_);
if (v___x_4068_ == 0)
{
return v___x_4067_;
}
else
{
lean_object* v___x_4069_; uint8_t v___x_4070_; 
v___x_4069_ = lean_array_get_size(v_as_4064_);
v___x_4070_ = lean_nat_dec_le(v_stop_4066_, v___x_4069_);
if (v___x_4070_ == 0)
{
uint8_t v___x_4071_; 
v___x_4071_ = lean_nat_dec_lt(v_start_4065_, v___x_4069_);
if (v___x_4071_ == 0)
{
return v___x_4067_;
}
else
{
size_t v___x_4072_; size_t v___x_4073_; lean_object* v___x_4074_; 
v___x_4072_ = lean_usize_of_nat(v_start_4065_);
v___x_4073_ = lean_usize_of_nat(v___x_4069_);
v___x_4074_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4064_, v___x_4072_, v___x_4073_, v___x_4067_);
return v___x_4074_;
}
}
else
{
size_t v___x_4075_; size_t v___x_4076_; lean_object* v___x_4077_; 
v___x_4075_ = lean_usize_of_nat(v_start_4065_);
v___x_4076_ = lean_usize_of_nat(v_stop_4066_);
v___x_4077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4064_, v___x_4075_, v___x_4076_, v___x_4067_);
return v___x_4077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4078_, lean_object* v_start_4079_, lean_object* v_stop_4080_){
_start:
{
lean_object* v_res_4081_; 
v_res_4081_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4078_, v_start_4079_, v_stop_4080_);
lean_dec(v_stop_4080_);
lean_dec(v_start_4079_);
lean_dec_ref(v_as_4078_);
return v_res_4081_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4084_, size_t v_i_4085_, size_t v_stop_4086_){
_start:
{
uint8_t v___x_4087_; 
v___x_4087_ = lean_usize_dec_eq(v_i_4085_, v_stop_4086_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v_fst_4089_; uint8_t v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; uint8_t v___x_4093_; 
v___x_4088_ = lean_array_uget_borrowed(v_as_4084_, v_i_4085_);
v_fst_4089_ = lean_ctor_get(v___x_4088_, 0);
v___x_4090_ = 1;
lean_inc(v_fst_4089_);
v___x_4091_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4089_);
v___x_4092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4093_ = lean_string_dec_eq(v___x_4091_, v___x_4092_);
if (v___x_4093_ == 0)
{
lean_object* v___x_4094_; uint8_t v___x_4095_; 
v___x_4094_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4095_ = lean_string_dec_eq(v___x_4091_, v___x_4094_);
lean_dec_ref(v___x_4091_);
if (v___x_4095_ == 0)
{
size_t v___x_4096_; size_t v___x_4097_; 
v___x_4096_ = ((size_t)1ULL);
v___x_4097_ = lean_usize_add(v_i_4085_, v___x_4096_);
v_i_4085_ = v___x_4097_;
goto _start;
}
else
{
return v___x_4090_;
}
}
else
{
lean_dec_ref(v___x_4091_);
return v___x_4090_;
}
}
else
{
uint8_t v___x_4099_; 
v___x_4099_ = 0;
return v___x_4099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4100_, lean_object* v_i_4101_, lean_object* v_stop_4102_){
_start:
{
size_t v_i_boxed_4103_; size_t v_stop_boxed_4104_; uint8_t v_res_4105_; lean_object* v_r_4106_; 
v_i_boxed_4103_ = lean_unbox_usize(v_i_4101_);
lean_dec(v_i_4101_);
v_stop_boxed_4104_ = lean_unbox_usize(v_stop_4102_);
lean_dec(v_stop_4102_);
v_res_4105_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4100_, v_i_boxed_4103_, v_stop_boxed_4104_);
lean_dec_ref(v_as_4100_);
v_r_4106_ = lean_box(v_res_4105_);
return v_r_4106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4108_, size_t v_sz_4109_, size_t v_i_4110_, lean_object* v_b_4111_){
_start:
{
uint8_t v___x_4112_; 
v___x_4112_ = lean_usize_dec_lt(v_i_4110_, v_sz_4109_);
if (v___x_4112_ == 0)
{
lean_inc_ref(v_b_4111_);
return v_b_4111_;
}
else
{
lean_object* v_a_4113_; lean_object* v_fst_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; uint8_t v___x_4118_; 
v_a_4113_ = lean_array_uget_borrowed(v_as_4108_, v_i_4110_);
v_fst_4114_ = lean_ctor_get(v_a_4113_, 0);
v___x_4115_ = lean_box(0);
lean_inc(v_fst_4114_);
v___x_4116_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4114_);
v___x_4117_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4118_ = lean_string_dec_eq(v___x_4116_, v___x_4117_);
lean_dec_ref(v___x_4116_);
if (v___x_4118_ == 0)
{
lean_object* v___x_4119_; size_t v___x_4120_; size_t v___x_4121_; 
v___x_4119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4120_ = ((size_t)1ULL);
v___x_4121_ = lean_usize_add(v_i_4110_, v___x_4120_);
v_i_4110_ = v___x_4121_;
v_b_4111_ = v___x_4119_;
goto _start;
}
else
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
lean_inc(v_a_4113_);
v___x_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4123_, 0, v_a_4113_);
v___x_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4123_);
v___x_4125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
lean_ctor_set(v___x_4125_, 1, v___x_4115_);
return v___x_4125_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4126_, lean_object* v_sz_4127_, lean_object* v_i_4128_, lean_object* v_b_4129_){
_start:
{
size_t v_sz_boxed_4130_; size_t v_i_boxed_4131_; lean_object* v_res_4132_; 
v_sz_boxed_4130_ = lean_unbox_usize(v_sz_4127_);
lean_dec(v_sz_4127_);
v_i_boxed_4131_ = lean_unbox_usize(v_i_4128_);
lean_dec(v_i_4128_);
v_res_4132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4126_, v_sz_boxed_4130_, v_i_boxed_4131_, v_b_4129_);
lean_dec_ref(v_b_4129_);
lean_dec_ref(v_as_4126_);
return v_res_4132_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4135_; lean_object* v___x_4136_; 
v___x_4135_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4136_ = lean_string_utf8_byte_size(v___x_4135_);
return v___x_4136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4139_, lean_object* v___f_4140_, lean_object* v___f_4141_, lean_object* v_handler_4142_, lean_object* v_options_4143_, lean_object* v_a_4144_, lean_object* v_fst_4145_, lean_object* v_a_4146_, lean_object* v___y_4147_, lean_object* v___x_4148_, lean_object* v___x_4149_, lean_object* v___x_4150_, lean_object* v_x_4151_){
_start:
{
uint8_t v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v_val_4157_; lean_object* v___y_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; uint8_t v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; lean_object* v___y_4235_; uint8_t v___y_4236_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4286_; 
if (lean_obj_tag(v_x_4151_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4313_; 
lean_dec(v___y_4147_);
lean_dec(v_a_4146_);
lean_dec(v_fst_4145_);
lean_dec(v_a_4144_);
lean_dec_ref(v_options_4143_);
lean_dec_ref(v_handler_4142_);
lean_dec_ref(v___f_4141_);
lean_dec_ref(v___f_4140_);
lean_dec(v_snd_4139_);
v_a_4305_ = lean_ctor_get(v_x_4151_, 0);
v_isSharedCheck_4313_ = !lean_is_exclusive(v_x_4151_);
if (v_isSharedCheck_4313_ == 0)
{
v___x_4307_ = v_x_4151_;
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v_x_4151_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4310_; 
if (v_isShared_4308_ == 0)
{
v___x_4310_ = v___x_4307_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v_a_4305_);
v___x_4310_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
lean_object* v___x_4311_; 
v___x_4311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4311_, 0, v___x_4310_);
return v___x_4311_;
}
}
}
else
{
lean_object* v_a_4314_; lean_object* v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4325_; lean_object* v___x_4329_; 
v_a_4314_ = lean_ctor_get(v_x_4151_, 0);
lean_inc(v_a_4314_);
lean_dec_ref_known(v_x_4151_, 1);
v___x_4329_ = l_Lasm_JS_Data_field(v_a_4314_, v___x_4150_);
if (lean_obj_tag(v___x_4329_) == 4)
{
lean_object* v_s_4330_; 
v_s_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc_ref(v_s_4330_);
lean_dec_ref_known(v___x_4329_, 1);
v___y_4325_ = v_s_4330_;
goto v___jp_4324_;
}
else
{
lean_object* v___x_4331_; 
lean_dec(v___x_4329_);
v___x_4331_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4325_ = v___x_4331_;
goto v___jp_4324_;
}
v___jp_4315_:
{
lean_object* v___x_4318_; 
v___x_4318_ = l_Lasm_JS_Data_field(v_a_4314_, v___x_4148_);
lean_dec(v_a_4314_);
if (lean_obj_tag(v___x_4318_) == 7)
{
lean_object* v_items_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v_items_4319_ = lean_ctor_get(v___x_4318_, 0);
lean_inc_ref(v_items_4319_);
lean_dec_ref_known(v___x_4318_, 1);
v___x_4320_ = lean_unsigned_to_nat(0u);
v___x_4321_ = lean_array_get_size(v_items_4319_);
v___x_4322_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4319_, v___x_4320_, v___x_4321_);
lean_dec_ref(v_items_4319_);
lean_inc_ref(v___y_4316_);
v___y_4283_ = v___y_4316_;
v___y_4284_ = v___y_4317_;
v___y_4285_ = v___y_4316_;
v___y_4286_ = v___x_4322_;
goto v___jp_4282_;
}
else
{
lean_object* v___x_4323_; 
lean_dec(v___x_4318_);
v___x_4323_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4316_);
v___y_4283_ = v___y_4316_;
v___y_4284_ = v___y_4317_;
v___y_4285_ = v___y_4316_;
v___y_4286_ = v___x_4323_;
goto v___jp_4282_;
}
}
v___jp_4324_:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Lasm_JS_Data_field(v_a_4314_, v___x_4149_);
if (lean_obj_tag(v___x_4326_) == 4)
{
lean_object* v_s_4327_; 
v_s_4327_ = lean_ctor_get(v___x_4326_, 0);
lean_inc_ref(v_s_4327_);
lean_dec_ref_known(v___x_4326_, 1);
v___y_4316_ = v___y_4325_;
v___y_4317_ = v_s_4327_;
goto v___jp_4315_;
}
else
{
lean_object* v___x_4328_; 
lean_dec(v___x_4326_);
v___x_4328_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4316_ = v___y_4325_;
v___y_4317_ = v___x_4328_;
goto v___jp_4315_;
}
}
}
v___jp_4153_:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; 
v___x_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4158_, 0, v_val_4157_);
v___x_4159_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4156_, v___y_4154_, v___x_4158_, v___y_4155_);
return v___x_4159_;
}
v___jp_4160_:
{
if (v___y_4173_ == 0)
{
lean_object* v___x_4175_; lean_object* v___f_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
lean_dec_ref(v___y_4172_);
lean_dec(v___y_4168_);
lean_dec_ref(v___y_4166_);
lean_dec_ref(v___y_4165_);
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec(v___y_4162_);
lean_dec_ref(v___y_4161_);
lean_dec(v_a_4146_);
lean_dec(v_fst_4145_);
lean_dec(v_a_4144_);
lean_dec_ref(v_options_4143_);
v___x_4175_ = l_ByteArray_empty;
v___f_4176_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4177_, 0, v___y_4171_);
lean_ctor_set(v___x_4177_, 1, v___y_4174_);
lean_ctor_set(v___x_4177_, 2, v___y_4167_);
lean_ctor_set(v___x_4177_, 3, v___x_4175_);
lean_ctor_set(v___x_4177_, 4, v___f_4176_);
v___x_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
v___x_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4178_);
v___x_4180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4170_, v___y_4173_, v___x_4179_, v___y_4169_);
return v___x_4180_;
}
else
{
lean_object* v___x_4181_; lean_object* v___f_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; uint8_t v___x_4186_; 
lean_dec_ref(v___y_4169_);
lean_dec_ref(v___y_4167_);
v___x_4181_ = l_ByteArray_empty;
v___f_4182_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4174_);
v___x_4183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4183_, 0, v___y_4171_);
lean_ctor_set(v___x_4183_, 1, v___y_4174_);
lean_ctor_set(v___x_4183_, 2, v___y_4172_);
lean_ctor_set(v___x_4183_, 3, v___x_4181_);
lean_ctor_set(v___x_4183_, 4, v___f_4182_);
v___x_4184_ = l_Lasm_Fetch_Request_path(v___x_4183_);
v___x_4185_ = lean_apply_1(v_options_4143_, v___x_4184_);
v___x_4186_ = lean_unbox(v___x_4185_);
if (v___x_4186_ == 0)
{
lean_object* v___f_4187_; lean_object* v___f_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; uint8_t v___x_4192_; lean_object* v___x_4193_; 
lean_dec(v___y_4168_);
lean_dec_ref(v___y_4165_);
lean_dec(v_a_4146_);
lean_inc(v___y_4164_);
v___f_4187_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4187_, 0, v___y_4166_);
lean_closure_set(v___f_4187_, 1, v___y_4174_);
lean_closure_set(v___f_4187_, 2, v___y_4161_);
lean_closure_set(v___f_4187_, 3, v___f_4182_);
lean_closure_set(v___f_4187_, 4, v___y_4164_);
lean_closure_set(v___f_4187_, 5, v___x_4185_);
lean_closure_set(v___f_4187_, 6, v___y_4163_);
v___f_4188_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4188_, 0, v___y_4164_);
lean_closure_set(v___f_4188_, 1, v___x_4185_);
lean_closure_set(v___f_4188_, 2, v___f_4187_);
lean_closure_set(v___f_4188_, 3, v___y_4162_);
lean_closure_set(v___f_4188_, 4, v_a_4144_);
v___x_4189_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4190_ = lean_mk_empty_array_with_capacity(v___y_4170_);
v___x_4191_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4145_, v___x_4189_, v___x_4190_);
v___x_4192_ = lean_unbox(v___x_4185_);
v___x_4193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4170_, v___x_4192_, v___x_4191_, v___f_4188_);
return v___x_4193_;
}
else
{
uint8_t v___x_4194_; lean_object* v___x_4195_; lean_object* v___f_4196_; lean_object* v___x_4197_; lean_object* v___f_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; 
lean_dec_ref(v___y_4163_);
lean_dec(v___y_4162_);
lean_dec(v_a_4144_);
v___x_4194_ = 0;
v___x_4195_ = lean_box(v___x_4194_);
lean_inc(v___y_4164_);
v___f_4196_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4196_, 0, v___y_4166_);
lean_closure_set(v___f_4196_, 1, v___y_4174_);
lean_closure_set(v___f_4196_, 2, v___y_4161_);
lean_closure_set(v___f_4196_, 3, v___x_4181_);
lean_closure_set(v___f_4196_, 4, v___y_4164_);
lean_closure_set(v___f_4196_, 5, v___x_4195_);
lean_closure_set(v___f_4196_, 6, v___y_4165_);
v___x_4197_ = lean_box(v___x_4194_);
v___f_4198_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4198_, 0, v___y_4164_);
lean_closure_set(v___f_4198_, 1, v___x_4197_);
lean_closure_set(v___f_4198_, 2, v___f_4196_);
v___x_4199_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4200_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4201_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4201_, 0, v_fst_4145_);
lean_ctor_set(v___x_4201_, 1, v___x_4200_);
v___x_4202_ = lean_mk_empty_array_with_capacity(v___y_4168_);
lean_dec(v___y_4168_);
v___x_4203_ = lean_array_push(v___x_4202_, v___x_4201_);
v___x_4204_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4146_, v___x_4199_, v___x_4203_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4204_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
lean_ctor_set_tag(v___x_4207_, 1);
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
v___y_4154_ = v___x_4194_;
v___y_4155_ = v___f_4198_;
v___y_4156_ = v___y_4170_;
v_val_4157_ = v___x_4210_;
goto v___jp_4153_;
}
}
}
else
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4220_; 
v_a_4213_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4215_ = v___x_4204_;
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4204_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4218_; 
if (v_isShared_4216_ == 0)
{
lean_ctor_set_tag(v___x_4215_, 0);
v___x_4218_ = v___x_4215_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4213_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
v___y_4154_ = v___x_4194_;
v___y_4155_ = v___f_4198_;
v___y_4156_ = v___y_4170_;
v_val_4157_ = v___x_4218_;
goto v___jp_4153_;
}
}
}
}
}
}
v___jp_4221_:
{
lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; uint8_t v___x_4240_; 
v___x_4237_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4238_ = lean_string_utf8_byte_size(v___y_4230_);
v___x_4239_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4240_ = lean_nat_dec_le(v___x_4239_, v___x_4238_);
if (v___x_4240_ == 0)
{
lean_dec_ref(v___y_4229_);
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4223_;
v___y_4163_ = v___y_4224_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4226_;
v___y_4167_ = v___y_4228_;
v___y_4168_ = v___y_4231_;
v___y_4169_ = v___y_4234_;
v___y_4170_ = v___y_4233_;
v___y_4171_ = v___y_4232_;
v___y_4172_ = v___y_4235_;
v___y_4173_ = v___y_4236_;
v___y_4174_ = v___y_4230_;
goto v___jp_4160_;
}
else
{
uint8_t v___x_4241_; 
v___x_4241_ = lean_string_memcmp(v___y_4230_, v___x_4237_, v___y_4233_, v___y_4233_, v___x_4239_);
if (v___x_4241_ == 0)
{
lean_dec_ref(v___y_4229_);
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4223_;
v___y_4163_ = v___y_4224_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4226_;
v___y_4167_ = v___y_4228_;
v___y_4168_ = v___y_4231_;
v___y_4169_ = v___y_4234_;
v___y_4170_ = v___y_4233_;
v___y_4171_ = v___y_4232_;
v___y_4172_ = v___y_4235_;
v___y_4173_ = v___y_4236_;
v___y_4174_ = v___y_4230_;
goto v___jp_4160_;
}
else
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4242_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4243_ = lean_string_append(v___x_4242_, v___y_4229_);
lean_dec_ref(v___y_4229_);
v___x_4244_ = lean_string_append(v___x_4243_, v___y_4230_);
lean_dec_ref(v___y_4230_);
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4223_;
v___y_4163_ = v___y_4224_;
v___y_4164_ = v___y_4225_;
v___y_4165_ = v___y_4227_;
v___y_4166_ = v___y_4226_;
v___y_4167_ = v___y_4228_;
v___y_4168_ = v___y_4231_;
v___y_4169_ = v___y_4234_;
v___y_4170_ = v___y_4233_;
v___y_4171_ = v___y_4232_;
v___y_4172_ = v___y_4235_;
v___y_4173_ = v___y_4236_;
v___y_4174_ = v___x_4244_;
goto v___jp_4160_;
}
}
}
v___jp_4245_:
{
lean_object* v___x_4260_; uint8_t v___x_4261_; 
v___x_4260_ = lean_array_get_size(v___y_4252_);
v___x_4261_ = lean_nat_dec_lt(v___y_4256_, v___x_4260_);
if (v___x_4261_ == 0)
{
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4248_;
v___y_4225_ = v___y_4249_;
v___y_4226_ = v___y_4251_;
v___y_4227_ = v___y_4250_;
v___y_4228_ = v___y_4252_;
v___y_4229_ = v___y_4259_;
v___y_4230_ = v___y_4254_;
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4257_;
v___y_4233_ = v___y_4256_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v___y_4258_;
v___y_4236_ = v___x_4261_;
goto v___jp_4221_;
}
else
{
if (v___x_4261_ == 0)
{
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4248_;
v___y_4225_ = v___y_4249_;
v___y_4226_ = v___y_4251_;
v___y_4227_ = v___y_4250_;
v___y_4228_ = v___y_4252_;
v___y_4229_ = v___y_4259_;
v___y_4230_ = v___y_4254_;
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4257_;
v___y_4233_ = v___y_4256_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v___y_4258_;
v___y_4236_ = v___x_4261_;
goto v___jp_4221_;
}
else
{
size_t v___x_4262_; size_t v___x_4263_; uint8_t v___x_4264_; 
v___x_4262_ = ((size_t)0ULL);
v___x_4263_ = lean_usize_of_nat(v___x_4260_);
v___x_4264_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4252_, v___x_4262_, v___x_4263_);
v___y_4222_ = v___y_4246_;
v___y_4223_ = v___y_4247_;
v___y_4224_ = v___y_4248_;
v___y_4225_ = v___y_4249_;
v___y_4226_ = v___y_4251_;
v___y_4227_ = v___y_4250_;
v___y_4228_ = v___y_4252_;
v___y_4229_ = v___y_4259_;
v___y_4230_ = v___y_4254_;
v___y_4231_ = v___y_4253_;
v___y_4232_ = v___y_4257_;
v___y_4233_ = v___y_4256_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v___y_4258_;
v___y_4236_ = v___x_4264_;
goto v___jp_4221_;
}
}
}
v___jp_4265_:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4279_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4280_ = l_Nat_reprFast(v___y_4147_);
v___x_4281_ = lean_string_append(v___x_4279_, v___x_4280_);
lean_dec_ref(v___x_4280_);
v___y_4246_ = v___y_4266_;
v___y_4247_ = v___y_4268_;
v___y_4248_ = v___y_4269_;
v___y_4249_ = v___y_4270_;
v___y_4250_ = v___y_4272_;
v___y_4251_ = v___y_4271_;
v___y_4252_ = v___y_4273_;
v___y_4253_ = v___y_4275_;
v___y_4254_ = v___y_4274_;
v___y_4255_ = v___y_4267_;
v___y_4256_ = v___y_4277_;
v___y_4257_ = v___y_4276_;
v___y_4258_ = v___y_4278_;
v___y_4259_ = v___x_4281_;
goto v___jp_4245_;
}
v___jp_4282_:
{
lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; size_t v_sz_4295_; size_t v___x_4296_; lean_object* v___x_4297_; lean_object* v_fst_4298_; lean_object* v___f_4299_; lean_object* v___f_4300_; lean_object* v___f_4301_; 
v___x_4287_ = lean_unsigned_to_nat(0u);
v___x_4288_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4289_ = lean_array_get_size(v___y_4286_);
v___x_4290_ = lean_unsigned_to_nat(1u);
v___x_4291_ = lean_nat_shiftr(v___x_4289_, v___x_4290_);
v___x_4292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4292_, 0, v___x_4287_);
lean_ctor_set(v___x_4292_, 1, v___x_4291_);
lean_ctor_set(v___x_4292_, 2, v___x_4290_);
v___x_4293_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4286_, v___x_4292_, v___x_4288_, v___x_4287_);
lean_dec_ref_known(v___x_4292_, 3);
lean_dec_ref(v___y_4286_);
v___x_4294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4295_ = lean_array_size(v___x_4293_);
v___x_4296_ = ((size_t)0ULL);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4293_, v_sz_4295_, v___x_4296_, v___x_4294_);
v_fst_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_fst_4298_);
lean_dec_ref(v___x_4297_);
lean_inc_ref(v___y_4283_);
v___f_4299_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4299_, 0, v___x_4287_);
lean_closure_set(v___f_4299_, 1, v_snd_4139_);
lean_closure_set(v___f_4299_, 2, v___y_4283_);
lean_closure_set(v___f_4299_, 3, v___f_4140_);
lean_closure_set(v___f_4299_, 4, v___f_4141_);
v___f_4300_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4300_, 0, v_handler_4142_);
lean_closure_set(v___f_4300_, 1, v___x_4287_);
lean_closure_set(v___f_4300_, 2, v___f_4299_);
v___f_4301_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4301_, 0, v___f_4300_);
if (lean_obj_tag(v_fst_4298_) == 0)
{
lean_inc_ref_n(v___f_4301_, 2);
lean_inc_ref(v___x_4293_);
v___y_4266_ = v___x_4293_;
v___y_4267_ = v___f_4301_;
v___y_4268_ = v___x_4290_;
v___y_4269_ = v___f_4301_;
v___y_4270_ = v___x_4287_;
v___y_4271_ = v___y_4283_;
v___y_4272_ = v___f_4301_;
v___y_4273_ = v___x_4293_;
v___y_4274_ = v___y_4284_;
v___y_4275_ = v___x_4290_;
v___y_4276_ = v___y_4285_;
v___y_4277_ = v___x_4287_;
v___y_4278_ = v___x_4288_;
goto v___jp_4265_;
}
else
{
lean_object* v_val_4302_; 
v_val_4302_ = lean_ctor_get(v_fst_4298_, 0);
lean_inc(v_val_4302_);
lean_dec_ref_known(v_fst_4298_, 1);
if (lean_obj_tag(v_val_4302_) == 0)
{
lean_inc_ref_n(v___f_4301_, 2);
lean_inc_ref(v___x_4293_);
v___y_4266_ = v___x_4293_;
v___y_4267_ = v___f_4301_;
v___y_4268_ = v___x_4290_;
v___y_4269_ = v___f_4301_;
v___y_4270_ = v___x_4287_;
v___y_4271_ = v___y_4283_;
v___y_4272_ = v___f_4301_;
v___y_4273_ = v___x_4293_;
v___y_4274_ = v___y_4284_;
v___y_4275_ = v___x_4290_;
v___y_4276_ = v___y_4285_;
v___y_4277_ = v___x_4287_;
v___y_4278_ = v___x_4288_;
goto v___jp_4265_;
}
else
{
lean_object* v_val_4303_; lean_object* v_snd_4304_; 
lean_dec(v___y_4147_);
v_val_4303_ = lean_ctor_get(v_val_4302_, 0);
lean_inc(v_val_4303_);
lean_dec_ref_known(v_val_4302_, 1);
v_snd_4304_ = lean_ctor_get(v_val_4303_, 1);
lean_inc(v_snd_4304_);
lean_dec(v_val_4303_);
lean_inc_ref_n(v___f_4301_, 2);
lean_inc_ref(v___x_4293_);
v___y_4246_ = v___x_4293_;
v___y_4247_ = v___x_4290_;
v___y_4248_ = v___f_4301_;
v___y_4249_ = v___x_4287_;
v___y_4250_ = v___f_4301_;
v___y_4251_ = v___y_4283_;
v___y_4252_ = v___x_4293_;
v___y_4253_ = v___x_4290_;
v___y_4254_ = v___y_4284_;
v___y_4255_ = v___f_4301_;
v___y_4256_ = v___x_4287_;
v___y_4257_ = v___y_4285_;
v___y_4258_ = v___x_4288_;
v___y_4259_ = v_snd_4304_;
goto v___jp_4245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4332_, lean_object* v___f_4333_, lean_object* v___f_4334_, lean_object* v_handler_4335_, lean_object* v_options_4336_, lean_object* v_a_4337_, lean_object* v_fst_4338_, lean_object* v_a_4339_, lean_object* v___y_4340_, lean_object* v___x_4341_, lean_object* v___x_4342_, lean_object* v___x_4343_, lean_object* v_x_4344_, lean_object* v___y_4345_){
_start:
{
lean_object* v_res_4346_; 
v_res_4346_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4332_, v___f_4333_, v___f_4334_, v_handler_4335_, v_options_4336_, v_a_4337_, v_fst_4338_, v_a_4339_, v___y_4340_, v___x_4341_, v___x_4342_, v___x_4343_, v_x_4344_);
lean_dec_ref(v___x_4343_);
lean_dec_ref(v___x_4342_);
lean_dec_ref(v___x_4341_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4356_, lean_object* v___f_4357_, lean_object* v_handler_4358_, lean_object* v_options_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v___y_4362_, lean_object* v_____x_4363_){
_start:
{
lean_object* v_fst_4365_; lean_object* v_snd_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___f_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; lean_object* v_val_4375_; lean_object* v___x_4378_; 
v_fst_4365_ = lean_ctor_get(v_____x_4363_, 0);
lean_inc_n(v_fst_4365_, 2);
v_snd_4366_ = lean_ctor_get(v_____x_4363_, 1);
lean_inc(v_snd_4366_);
lean_dec_ref(v_____x_4363_);
v___x_4367_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4368_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4369_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4370_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4370_, 0, v_snd_4366_);
lean_closure_set(v___f_4370_, 1, v___f_4356_);
lean_closure_set(v___f_4370_, 2, v___f_4357_);
lean_closure_set(v___f_4370_, 3, v_handler_4358_);
lean_closure_set(v___f_4370_, 4, v_options_4359_);
lean_closure_set(v___f_4370_, 5, v_a_4360_);
lean_closure_set(v___f_4370_, 6, v_fst_4365_);
lean_closure_set(v___f_4370_, 7, v_a_4361_);
lean_closure_set(v___f_4370_, 8, v___y_4362_);
lean_closure_set(v___f_4370_, 9, v___x_4369_);
lean_closure_set(v___f_4370_, 10, v___x_4368_);
lean_closure_set(v___f_4370_, 11, v___x_4367_);
v___x_4371_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4372_ = lean_unsigned_to_nat(0u);
v___x_4373_ = 0;
v___x_4378_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4365_, v___x_4371_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___x_4378_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4378_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
lean_ctor_set_tag(v___x_4381_, 1);
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
v_val_4375_ = v___x_4384_;
goto v___jp_4374_;
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
v_a_4387_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4378_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4378_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
lean_ctor_set_tag(v___x_4389_, 0);
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
v_val_4375_ = v___x_4392_;
goto v___jp_4374_;
}
}
}
v___jp_4374_:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4376_, 0, v_val_4375_);
v___x_4377_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4372_, v___x_4373_, v___x_4376_, v___f_4370_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4395_, lean_object* v___f_4396_, lean_object* v_handler_4397_, lean_object* v_options_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_, lean_object* v___y_4401_, lean_object* v_____x_4402_, lean_object* v___y_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4395_, v___f_4396_, v_handler_4397_, v_options_4398_, v_a_4399_, v_a_4400_, v___y_4401_, v_____x_4402_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4405_, lean_object* v_x_4406_){
_start:
{
if (lean_obj_tag(v_x_4406_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4416_; 
lean_dec_ref(v___f_4405_);
v_a_4408_ = lean_ctor_get(v_x_4406_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v_x_4406_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4410_ = v_x_4406_;
v_isShared_4411_ = v_isSharedCheck_4416_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v_x_4406_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4416_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
lean_object* v___x_4414_; 
v___x_4414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4413_);
return v___x_4414_;
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4418_; 
v_a_4417_ = lean_ctor_get(v_x_4406_, 0);
lean_inc(v_a_4417_);
lean_dec_ref_known(v_x_4406_, 1);
v___x_4418_ = lean_apply_2(v___f_4405_, v_a_4417_, lean_box(0));
return v___x_4418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4419_, lean_object* v_x_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4419_, v_x_4420_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4430_, lean_object* v___f_4431_, lean_object* v_args_4432_){
_start:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; uint8_t v___x_4441_; 
v___x_4439_ = lean_unsigned_to_nat(0u);
v___x_4440_ = lean_array_get_size(v_args_4432_);
v___x_4441_ = lean_nat_dec_lt(v___x_4439_, v___x_4440_);
if (v___x_4441_ == 0)
{
lean_dec_ref(v___f_4431_);
goto v___jp_4434_;
}
else
{
lean_object* v___x_4442_; 
v___x_4442_ = lean_array_fget_borrowed(v_args_4432_, v___x_4439_);
if (lean_obj_tag(v___x_4442_) == 9)
{
lean_object* v_value_4443_; lean_object* v___x_4444_; uint8_t v___x_4445_; 
v_value_4443_ = lean_ctor_get(v___x_4442_, 0);
v___x_4444_ = lean_unsigned_to_nat(1u);
v___x_4445_ = lean_nat_dec_lt(v___x_4444_, v___x_4440_);
if (v___x_4445_ == 0)
{
lean_dec_ref(v___f_4431_);
goto v___jp_4434_;
}
else
{
lean_object* v___x_4446_; 
v___x_4446_ = lean_array_fget(v_args_4432_, v___x_4444_);
if (lean_obj_tag(v___x_4446_) == 9)
{
lean_object* v_value_4447_; lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4458_; 
lean_dec_ref(v___f_4430_);
v_value_4447_ = lean_ctor_get(v___x_4446_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4446_);
if (v_isSharedCheck_4458_ == 0)
{
lean_object* v_unused_4459_; 
v_unused_4459_ = lean_ctor_get(v___x_4446_, 1);
lean_dec(v_unused_4459_);
v___x_4449_ = v___x_4446_;
v_isShared_4450_ = v_isSharedCheck_4458_;
goto v_resetjp_4448_;
}
else
{
lean_inc(v_value_4447_);
lean_dec(v___x_4446_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4458_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
lean_object* v___x_4452_; 
lean_inc(v_value_4443_);
if (v_isShared_4450_ == 0)
{
lean_ctor_set_tag(v___x_4449_, 0);
lean_ctor_set(v___x_4449_, 1, v_value_4447_);
lean_ctor_set(v___x_4449_, 0, v_value_4443_);
v___x_4452_ = v___x_4449_;
goto v_reusejp_4451_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_value_4443_);
lean_ctor_set(v_reuseFailAlloc_4457_, 1, v_value_4447_);
v___x_4452_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4451_;
}
v_reusejp_4451_:
{
uint8_t v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
v___x_4453_ = 0;
v___x_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4452_);
v___x_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4455_, 0, v___x_4454_);
v___x_4456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4439_, v___x_4453_, v___x_4455_, v___f_4431_);
return v___x_4456_;
}
}
}
else
{
lean_dec(v___x_4446_);
lean_dec_ref(v___f_4431_);
goto v___jp_4434_;
}
}
}
else
{
lean_dec_ref(v___f_4431_);
goto v___jp_4434_;
}
}
v___jp_4434_:
{
lean_object* v___x_4435_; uint8_t v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4435_ = lean_unsigned_to_nat(0u);
v___x_4436_ = 0;
v___x_4437_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4435_, v___x_4436_, v___x_4437_, v___f_4430_);
return v___x_4438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4460_, lean_object* v___f_4461_, lean_object* v_args_4462_, lean_object* v___y_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4460_, v___f_4461_, v_args_4462_);
lean_dec_ref(v_args_4462_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4465_){
_start:
{
lean_object* v___x_4467_; lean_object* v_putStr_4468_; lean_object* v___x_4469_; 
v___x_4467_ = lean_get_stdout();
v_putStr_4468_ = lean_ctor_get(v___x_4467_, 4);
lean_inc_ref(v_putStr_4468_);
lean_dec_ref(v___x_4467_);
v___x_4469_ = lean_apply_2(v_putStr_4468_, v_s_4465_, lean_box(0));
return v___x_4469_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4470_, lean_object* v_a_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4470_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4473_){
_start:
{
uint32_t v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
v___x_4475_ = 10;
v___x_4476_ = lean_string_push(v_s_4473_, v___x_4475_);
v___x_4477_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4476_);
return v___x_4477_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4478_, lean_object* v_a_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4478_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___f_4485_, lean_object* v_x_4486_){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; uint8_t v___x_4495_; lean_object* v_val_4497_; lean_object* v___x_4500_; 
v___x_4488_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4489_ = lean_string_append(v___x_4488_, v___y_4483_);
v___x_4490_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4491_ = lean_string_append(v___x_4489_, v___x_4490_);
v___x_4492_ = l_Nat_reprFast(v___y_4484_);
v___x_4493_ = lean_string_append(v___x_4491_, v___x_4492_);
lean_dec_ref(v___x_4492_);
v___x_4494_ = lean_unsigned_to_nat(0u);
v___x_4495_ = 0;
v___x_4500_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4493_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4500_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4500_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set_tag(v___x_4503_, 1);
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
v_val_4497_ = v___x_4506_;
goto v___jp_4496_;
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
v_a_4509_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4500_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4500_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
lean_ctor_set_tag(v___x_4511_, 0);
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
v_val_4497_ = v___x_4514_;
goto v___jp_4496_;
}
}
}
v___jp_4496_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4498_, 0, v_val_4497_);
v___x_4499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4494_, v___x_4495_, v___x_4498_, v___f_4485_);
return v___x_4499_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___f_4519_, lean_object* v_x_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4517_, v___y_4518_, v___f_4519_, v_x_4520_);
lean_dec_ref(v_x_4520_);
lean_dec_ref(v___y_4517_);
return v_res_4522_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_unsigned_to_nat(0u);
v___x_4525_ = lean_nat_to_int(v___x_4524_);
return v___x_4525_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4526_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4527_ = lean_nat_abs(v___x_4526_);
return v___x_4527_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; uint8_t v___x_4530_; 
v___x_4528_ = lean_cstr_to_nat("9007199254740991");
v___x_4529_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4530_ = lean_nat_dec_le(v___x_4529_, v___x_4528_);
return v___x_4530_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4532_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
return v___x_4532_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4533_; double v___x_4534_; 
v___x_4533_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4534_ = l_Float_ofInt(v___x_4533_);
return v___x_4534_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4535_; lean_object* v___x_4536_; 
v___x_4535_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4536_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4536_, 0, v___x_4535_);
return v___x_4536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4537_, lean_object* v___x_4538_, lean_object* v_a_4539_, lean_object* v_x_4540_){
_start:
{
uint8_t v___y_4543_; lean_object* v___y_4544_; lean_object* v_val_4545_; lean_object* v___x_4548_; lean_object* v___y_4550_; uint8_t v___x_4571_; 
v___x_4548_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4571_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4571_ == 0)
{
lean_object* v___x_4572_; 
v___x_4572_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4550_ = v___x_4572_;
goto v___jp_4549_;
}
else
{
lean_object* v___x_4573_; 
v___x_4573_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4550_ = v___x_4573_;
goto v___jp_4549_;
}
v___jp_4542_:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4546_, 0, v_val_4545_);
v___x_4547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4544_, v___y_4543_, v___x_4546_, v___f_4537_);
return v___x_4547_;
}
v___jp_4549_:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; uint8_t v___x_4553_; lean_object* v___x_4554_; 
lean_inc(v___y_4550_);
v___x_4551_ = lean_array_push(v___x_4538_, v___y_4550_);
v___x_4552_ = lean_unsigned_to_nat(0u);
v___x_4553_ = 0;
v___x_4554_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4539_, v___x_4548_, v___x_4551_);
if (lean_obj_tag(v___x_4554_) == 0)
{
lean_object* v_a_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4562_; 
v_a_4555_ = lean_ctor_get(v___x_4554_, 0);
v_isSharedCheck_4562_ = !lean_is_exclusive(v___x_4554_);
if (v_isSharedCheck_4562_ == 0)
{
v___x_4557_ = v___x_4554_;
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_a_4555_);
lean_dec(v___x_4554_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
lean_object* v___x_4560_; 
if (v_isShared_4558_ == 0)
{
lean_ctor_set_tag(v___x_4557_, 1);
v___x_4560_ = v___x_4557_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v_a_4555_);
v___x_4560_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
v___y_4543_ = v___x_4553_;
v___y_4544_ = v___x_4552_;
v_val_4545_ = v___x_4560_;
goto v___jp_4542_;
}
}
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
v_a_4563_ = lean_ctor_get(v___x_4554_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4554_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___x_4554_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4554_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
if (v_isShared_4566_ == 0)
{
lean_ctor_set_tag(v___x_4565_, 0);
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
v___y_4543_ = v___x_4553_;
v___y_4544_ = v___x_4552_;
v_val_4545_ = v___x_4568_;
goto v___jp_4542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4574_, lean_object* v___x_4575_, lean_object* v_a_4576_, lean_object* v_x_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4574_, v___x_4575_, v_a_4576_, v_x_4577_);
lean_dec_ref(v_x_4577_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4580_, lean_object* v___x_4581_, lean_object* v___x_4582_, lean_object* v___f_4583_, lean_object* v_a_4584_, lean_object* v_x_4585_){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; lean_object* v_val_4593_; lean_object* v___x_4596_; 
v___x_4587_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4588_, 0, v_a_4580_);
lean_ctor_set(v___x_4588_, 1, v___x_4581_);
v___x_4589_ = lean_array_push(v___x_4582_, v___x_4588_);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = 0;
v___x_4596_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4584_, v___x_4587_, v___x_4589_);
if (lean_obj_tag(v___x_4596_) == 0)
{
lean_object* v_a_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_a_4597_ = lean_ctor_get(v___x_4596_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v___x_4596_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v___x_4596_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_inc(v_a_4597_);
lean_dec(v___x_4596_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set_tag(v___x_4599_, 1);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_a_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
v_val_4593_ = v___x_4602_;
goto v___jp_4592_;
}
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
v_a_4605_ = lean_ctor_get(v___x_4596_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4596_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4596_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4596_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
lean_ctor_set_tag(v___x_4607_, 0);
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
v_val_4593_ = v___x_4610_;
goto v___jp_4592_;
}
}
}
v___jp_4592_:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4594_, 0, v_val_4593_);
v___x_4595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4590_, v___x_4591_, v___x_4594_, v___f_4583_);
return v___x_4595_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4613_, lean_object* v___x_4614_, lean_object* v___x_4615_, lean_object* v___f_4616_, lean_object* v_a_4617_, lean_object* v_x_4618_, lean_object* v___y_4619_){
_start:
{
lean_object* v_res_4620_; 
v_res_4620_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4613_, v___x_4614_, v___x_4615_, v___f_4616_, v_a_4617_, v_x_4618_);
lean_dec_ref(v_x_4618_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_as_x27_4624_, lean_object* v_b_4625_){
_start:
{
if (lean_obj_tag(v_as_x27_4624_) == 0)
{
lean_object* v___x_4627_; 
lean_dec(v_a_4623_);
lean_dec(v_a_4622_);
v___x_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4627_, 0, v_b_4625_);
return v___x_4627_;
}
else
{
lean_object* v_head_4628_; lean_object* v_tail_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_head_4628_ = lean_ctor_get(v_as_x27_4624_, 0);
v_tail_4629_ = lean_ctor_get(v_as_x27_4624_, 1);
v___x_4630_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4631_ = lean_box(0);
v___x_4632_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4628_);
v___x_4633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4633_, 0, v_head_4628_);
lean_inc(v_a_4622_);
v___x_4634_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4634_, 0, v_a_4622_);
lean_ctor_set(v___x_4634_, 1, v___x_4630_);
v___x_4635_ = lean_unsigned_to_nat(2u);
v___x_4636_ = lean_mk_empty_array_with_capacity(v___x_4635_);
v___x_4637_ = lean_array_push(v___x_4636_, v___x_4633_);
v___x_4638_ = lean_array_push(v___x_4637_, v___x_4634_);
lean_inc(v_a_4623_);
v___x_4639_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4623_, v___x_4632_, v___x_4638_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_dec_ref_known(v___x_4639_, 1);
v_as_x27_4624_ = v_tail_4629_;
v_b_4625_ = v___x_4631_;
goto _start;
}
else
{
lean_object* v_a_4641_; lean_object* v___x_4643_; uint8_t v_isShared_4644_; uint8_t v_isSharedCheck_4648_; 
lean_dec(v_a_4623_);
lean_dec(v_a_4622_);
v_a_4641_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4648_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4648_ == 0)
{
v___x_4643_ = v___x_4639_;
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
else
{
lean_inc(v_a_4641_);
lean_dec(v___x_4639_);
v___x_4643_ = lean_box(0);
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
v_resetjp_4642_:
{
lean_object* v___x_4646_; 
if (v_isShared_4644_ == 0)
{
v___x_4646_ = v___x_4643_;
goto v_reusejp_4645_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v_a_4641_);
v___x_4646_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4645_;
}
v_reusejp_4645_:
{
return v___x_4646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_as_x27_4651_, lean_object* v_b_4652_, lean_object* v___y_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4649_, v_a_4650_, v_as_x27_4651_, v_b_4652_);
lean_dec(v_as_x27_4651_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4656_){
_start:
{
uint32_t v___x_4658_; uint32_t v___x_4659_; uint64_t v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4658_ = 201;
v___x_4659_ = 0;
v___x_4660_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_4661_ = lean_string_to_utf8(v_specifier_4656_);
v___x_4662_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4658_, v___x_4659_, v___x_4660_, v___x_4661_);
lean_dec_ref(v___x_4661_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v___x_4662_, 1);
v___x_4664_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4665_ = l_String_quote(v_specifier_4656_);
v___x_4666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4666_, 0, v___x_4665_);
v___x_4667_ = lean_unsigned_to_nat(120u);
v___x_4668_ = lean_unsigned_to_nat(0u);
v___x_4669_ = l_Std_Format_pretty(v___x_4666_, v___x_4667_, v___x_4668_, v___x_4668_);
v___x_4670_ = lean_string_append(v___x_4664_, v___x_4669_);
lean_dec_ref(v___x_4669_);
v___x_4671_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4670_, v_a_4663_);
lean_dec(v_a_4663_);
lean_dec_ref(v___x_4670_);
return v___x_4671_;
}
else
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4679_; 
lean_dec_ref(v_specifier_4656_);
v_a_4672_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4679_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4679_ == 0)
{
v___x_4674_ = v___x_4662_;
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v___x_4662_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4677_; 
if (v_isShared_4675_ == 0)
{
v___x_4677_ = v___x_4674_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4678_; 
v_reuseFailAlloc_4678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4678_, 0, v_a_4672_);
v___x_4677_ = v_reuseFailAlloc_4678_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
return v___x_4677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4680_, lean_object* v_a_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4680_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4708_, lean_object* v_options_4709_){
_start:
{
lean_object* v___f_4711_; lean_object* v___f_4712_; lean_object* v___f_4713_; lean_object* v___f_4714_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___y_4718_; lean_object* v___y_4719_; lean_object* v___y_4720_; lean_object* v___y_4721_; lean_object* v___y_4722_; lean_object* v___y_4723_; lean_object* v___x_4777_; lean_object* v___x_4778_; 
v___f_4711_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4712_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4713_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4714_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4777_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4778_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4777_);
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
lean_inc(v_a_4779_);
lean_dec_ref_known(v___x_4778_, 1);
v___x_4780_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4781_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4780_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___x_4783_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4784_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4782_, v___x_4783_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4786_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4784_, 1);
v___x_4786_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v_a_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
lean_inc(v_a_4787_);
lean_dec_ref_known(v___x_4786_, 1);
v___x_4788_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4789_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4787_, v___x_4788_);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v_a_4790_; lean_object* v___y_4792_; lean_object* v___y_4793_; lean_object* v___y_4794_; lean_object* v___y_4844_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___y_4849_; 
v_a_4790_ = lean_ctor_get(v___x_4789_, 0);
lean_inc(v_a_4790_);
lean_dec_ref_known(v___x_4789_, 1);
v___x_4846_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_4847_ = lean_io_getenv(v___x_4846_);
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v___x_4858_; 
v___x_4858_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_4849_ = v___x_4858_;
goto v___jp_4848_;
}
else
{
lean_object* v_val_4859_; 
v_val_4859_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_val_4859_);
lean_dec_ref_known(v___x_4847_, 1);
v___y_4849_ = v_val_4859_;
goto v___jp_4848_;
}
v___jp_4791_:
{
lean_object* v___f_4795_; lean_object* v___f_4796_; lean_object* v___f_4797_; lean_object* v___f_4798_; lean_object* v___x_4799_; 
lean_inc_n(v___y_4794_, 2);
v___f_4795_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4795_, 0, v___f_4712_);
lean_closure_set(v___f_4795_, 1, v___f_4711_);
lean_closure_set(v___f_4795_, 2, v_handler_4708_);
lean_closure_set(v___f_4795_, 3, v_options_4709_);
lean_closure_set(v___f_4795_, 4, v_a_4790_);
lean_closure_set(v___f_4795_, 5, v_a_4785_);
lean_closure_set(v___f_4795_, 6, v___y_4794_);
v___f_4796_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4796_, 0, v___f_4795_);
lean_inc_ref(v___f_4796_);
v___f_4797_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4797_, 0, v___f_4796_);
lean_closure_set(v___f_4797_, 1, v___f_4796_);
v___f_4798_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4798_, 0, v___y_4792_);
lean_closure_set(v___f_4798_, 1, v___y_4794_);
lean_closure_set(v___f_4798_, 2, v___f_4713_);
v___x_4799_ = l_Lasm_JS_Function_ofFnReply(v___f_4797_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
lean_inc(v_a_4800_);
lean_dec_ref_known(v___x_4799_, 1);
v___x_4801_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4802_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4803_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4803_, 0, v_a_4800_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = lean_unsigned_to_nat(1u);
v___x_4805_ = lean_mk_empty_array_with_capacity(v___x_4804_);
lean_inc_ref(v___x_4805_);
v___x_4806_ = lean_array_push(v___x_4805_, v___x_4803_);
v___x_4807_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4779_, v___x_4801_, v___x_4806_);
if (lean_obj_tag(v___x_4807_) == 0)
{
lean_object* v_a_4808_; lean_object* v___x_4809_; 
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
lean_inc(v_a_4808_);
lean_dec_ref_known(v___x_4807_, 1);
v___x_4809_ = l_Lasm_JS_Function_ofFn(v___f_4798_);
if (lean_obj_tag(v___x_4809_) == 0)
{
lean_object* v_a_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; uint8_t v___x_4815_; 
v_a_4810_ = lean_ctor_get(v___x_4809_, 0);
lean_inc(v_a_4810_);
lean_dec_ref_known(v___x_4809_, 1);
v___x_4811_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4812_ = lean_nat_to_int(v___y_4794_);
v___x_4813_ = lean_nat_abs(v___x_4812_);
v___x_4814_ = lean_cstr_to_nat("9007199254740991");
v___x_4815_ = lean_nat_dec_le(v___x_4813_, v___x_4814_);
lean_dec(v___x_4813_);
if (v___x_4815_ == 0)
{
lean_object* v___x_4816_; 
v___x_4816_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4812_);
v___y_4716_ = v___x_4802_;
v___y_4717_ = v___x_4805_;
v___y_4718_ = v_a_4808_;
v___y_4719_ = v___x_4802_;
v___y_4720_ = v_a_4810_;
v___y_4721_ = v___y_4793_;
v___y_4722_ = v___x_4811_;
v___y_4723_ = v___x_4816_;
goto v___jp_4715_;
}
else
{
double v___x_4817_; lean_object* v___x_4818_; 
v___x_4817_ = l_Float_ofInt(v___x_4812_);
lean_dec(v___x_4812_);
v___x_4818_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4818_, 0, v___x_4817_);
v___y_4716_ = v___x_4802_;
v___y_4717_ = v___x_4805_;
v___y_4718_ = v_a_4808_;
v___y_4719_ = v___x_4802_;
v___y_4720_ = v_a_4810_;
v___y_4721_ = v___y_4793_;
v___y_4722_ = v___x_4811_;
v___y_4723_ = v___x_4818_;
goto v___jp_4715_;
}
}
else
{
lean_object* v_a_4819_; lean_object* v___x_4821_; uint8_t v_isShared_4822_; uint8_t v_isSharedCheck_4826_; 
lean_dec(v_a_4808_);
lean_dec_ref(v___x_4805_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
v_a_4819_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4821_ = v___x_4809_;
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
else
{
lean_inc(v_a_4819_);
lean_dec(v___x_4809_);
v___x_4821_ = lean_box(0);
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
v_resetjp_4820_:
{
lean_object* v___x_4824_; 
if (v_isShared_4822_ == 0)
{
v___x_4824_ = v___x_4821_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4819_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
lean_dec_ref(v___x_4805_);
lean_dec_ref(v___f_4798_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
v_a_4827_ = lean_ctor_get(v___x_4807_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4807_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4807_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4807_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4827_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
else
{
lean_object* v_a_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4842_; 
lean_dec_ref(v___f_4798_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
lean_dec(v_a_4779_);
v_a_4835_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4837_ = v___x_4799_;
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_a_4835_);
lean_dec(v___x_4799_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4840_; 
if (v_isShared_4838_ == 0)
{
v___x_4840_ = v___x_4837_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_a_4835_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
}
v___jp_4843_:
{
lean_object* v___x_4845_; 
v___x_4845_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_4844_);
v___y_4792_ = v___y_4844_;
v___y_4793_ = v___y_4844_;
v___y_4794_ = v___x_4845_;
goto v___jp_4791_;
}
v___jp_4848_:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4850_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_4851_ = lean_io_getenv(v___x_4850_);
if (lean_obj_tag(v___x_4851_) == 0)
{
v___y_4844_ = v___y_4849_;
goto v___jp_4843_;
}
else
{
lean_object* v_val_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; 
v_val_4852_ = lean_ctor_get(v___x_4851_, 0);
lean_inc(v_val_4852_);
lean_dec_ref_known(v___x_4851_, 1);
v___x_4853_ = lean_unsigned_to_nat(0u);
v___x_4854_ = lean_string_utf8_byte_size(v_val_4852_);
v___x_4855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4855_, 0, v_val_4852_);
lean_ctor_set(v___x_4855_, 1, v___x_4853_);
lean_ctor_set(v___x_4855_, 2, v___x_4854_);
v___x_4856_ = l_String_Slice_toNat_x3f(v___x_4855_);
lean_dec_ref_known(v___x_4855_, 3);
if (lean_obj_tag(v___x_4856_) == 0)
{
v___y_4844_ = v___y_4849_;
goto v___jp_4843_;
}
else
{
lean_object* v_val_4857_; 
v_val_4857_ = lean_ctor_get(v___x_4856_, 0);
lean_inc(v_val_4857_);
lean_dec_ref_known(v___x_4856_, 1);
lean_inc_ref(v___y_4849_);
v___y_4792_ = v___y_4849_;
v___y_4793_ = v___y_4849_;
v___y_4794_ = v_val_4857_;
goto v___jp_4791_;
}
}
}
}
else
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4867_; 
lean_dec(v_a_4785_);
lean_dec(v_a_4779_);
lean_dec_ref(v_options_4709_);
lean_dec_ref(v_handler_4708_);
v_a_4860_ = lean_ctor_get(v___x_4789_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4862_ = v___x_4789_;
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4789_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4865_; 
if (v_isShared_4863_ == 0)
{
v___x_4865_ = v___x_4862_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_a_4860_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
return v___x_4865_;
}
}
}
}
else
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4875_; 
lean_dec(v_a_4785_);
lean_dec(v_a_4779_);
lean_dec_ref(v_options_4709_);
lean_dec_ref(v_handler_4708_);
v_a_4868_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4870_ = v___x_4786_;
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4786_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v___x_4873_; 
if (v_isShared_4871_ == 0)
{
v___x_4873_ = v___x_4870_;
goto v_reusejp_4872_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v_a_4868_);
v___x_4873_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4872_;
}
v_reusejp_4872_:
{
return v___x_4873_;
}
}
}
}
else
{
lean_object* v_a_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4883_; 
lean_dec(v_a_4779_);
lean_dec_ref(v_options_4709_);
lean_dec_ref(v_handler_4708_);
v_a_4876_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4878_ = v___x_4784_;
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_a_4876_);
lean_dec(v___x_4784_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
lean_object* v___x_4881_; 
if (v_isShared_4879_ == 0)
{
v___x_4881_ = v___x_4878_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4882_; 
v_reuseFailAlloc_4882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4882_, 0, v_a_4876_);
v___x_4881_ = v_reuseFailAlloc_4882_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
return v___x_4881_;
}
}
}
}
else
{
lean_object* v_a_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4891_; 
lean_dec(v_a_4779_);
lean_dec_ref(v_options_4709_);
lean_dec_ref(v_handler_4708_);
v_a_4884_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4891_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4891_ == 0)
{
v___x_4886_ = v___x_4781_;
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4781_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4889_; 
if (v_isShared_4887_ == 0)
{
v___x_4889_ = v___x_4886_;
goto v_reusejp_4888_;
}
else
{
lean_object* v_reuseFailAlloc_4890_; 
v_reuseFailAlloc_4890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4890_, 0, v_a_4884_);
v___x_4889_ = v_reuseFailAlloc_4890_;
goto v_reusejp_4888_;
}
v_reusejp_4888_:
{
return v___x_4889_;
}
}
}
}
else
{
lean_object* v_a_4892_; lean_object* v___x_4894_; uint8_t v_isShared_4895_; uint8_t v_isSharedCheck_4899_; 
lean_dec_ref(v_options_4709_);
lean_dec_ref(v_handler_4708_);
v_a_4892_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4899_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4894_ = v___x_4778_;
v_isShared_4895_ = v_isSharedCheck_4899_;
goto v_resetjp_4893_;
}
else
{
lean_inc(v_a_4892_);
lean_dec(v___x_4778_);
v___x_4894_ = lean_box(0);
v_isShared_4895_ = v_isSharedCheck_4899_;
goto v_resetjp_4893_;
}
v_resetjp_4893_:
{
lean_object* v___x_4897_; 
if (v_isShared_4895_ == 0)
{
v___x_4897_ = v___x_4894_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v_a_4892_);
v___x_4897_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
return v___x_4897_;
}
}
}
v___jp_4715_:
{
lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v___x_4724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4724_, 0, v___y_4721_);
lean_inc_ref(v___y_4719_);
v___x_4725_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___y_4720_);
lean_ctor_set(v___x_4725_, 1, v___y_4719_);
v___x_4726_ = lean_unsigned_to_nat(3u);
v___x_4727_ = lean_mk_empty_array_with_capacity(v___x_4726_);
v___x_4728_ = lean_array_push(v___x_4727_, v___y_4723_);
v___x_4729_ = lean_array_push(v___x_4728_, v___x_4724_);
v___x_4730_ = lean_array_push(v___x_4729_, v___x_4725_);
lean_inc_ref(v___y_4722_);
lean_inc(v___y_4718_);
v___x_4731_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4718_, v___y_4722_, v___x_4730_);
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v___x_4732_; lean_object* v___x_4733_; 
lean_dec_ref_known(v___x_4731_, 1);
v___x_4732_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4733_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4732_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v___f_4735_; lean_object* v___x_4736_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
lean_inc_n(v_a_4734_, 2);
lean_dec_ref_known(v___x_4733_, 1);
lean_inc_ref(v___y_4717_);
v___f_4735_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4735_, 0, v___f_4714_);
lean_closure_set(v___f_4735_, 1, v___y_4717_);
lean_closure_set(v___f_4735_, 2, v_a_4734_);
v___x_4736_ = l_Lasm_JS_Function_ofFn(v___f_4735_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v_a_4737_; lean_object* v___f_4738_; lean_object* v___x_4739_; 
v_a_4737_ = lean_ctor_get(v___x_4736_, 0);
lean_inc(v_a_4737_);
lean_dec_ref_known(v___x_4736_, 1);
lean_inc_ref(v___y_4716_);
v___f_4738_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4738_, 0, v_a_4737_);
lean_closure_set(v___f_4738_, 1, v___y_4716_);
lean_closure_set(v___f_4738_, 2, v___y_4717_);
lean_closure_set(v___f_4738_, 3, v___f_4714_);
lean_closure_set(v___f_4738_, 4, v___y_4718_);
v___x_4739_ = l_Lasm_JS_Function_ofFn(v___f_4738_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_object* v_a_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; 
v_a_4740_ = lean_ctor_get(v___x_4739_, 0);
lean_inc(v_a_4740_);
lean_dec_ref_known(v___x_4739_, 1);
v___x_4741_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4742_ = lean_box(0);
v___x_4743_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4740_, v_a_4734_, v___x_4741_, v___x_4742_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_object* v___x_4744_; 
lean_dec_ref_known(v___x_4743_, 1);
v___x_4744_ = l_Lasm_JS_waitForever();
return v___x_4744_;
}
else
{
return v___x_4743_;
}
}
else
{
lean_object* v_a_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4752_; 
lean_dec(v_a_4734_);
v_a_4745_ = lean_ctor_get(v___x_4739_, 0);
v_isSharedCheck_4752_ = !lean_is_exclusive(v___x_4739_);
if (v_isSharedCheck_4752_ == 0)
{
v___x_4747_ = v___x_4739_;
v_isShared_4748_ = v_isSharedCheck_4752_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_a_4745_);
lean_dec(v___x_4739_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_4752_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
lean_object* v___x_4750_; 
if (v_isShared_4748_ == 0)
{
v___x_4750_ = v___x_4747_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v_a_4745_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
}
}
else
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
lean_dec(v_a_4734_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
v_a_4753_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4736_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4736_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
v___x_4758_ = v___x_4755_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_a_4753_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4768_; 
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
v_a_4761_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___x_4733_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4733_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4764_ == 0)
{
v___x_4766_ = v___x_4763_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v_a_4761_);
v___x_4766_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
return v___x_4766_;
}
}
}
}
else
{
lean_object* v_a_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4776_; 
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
v_a_4769_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4771_ = v___x_4731_;
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
else
{
lean_inc(v_a_4769_);
lean_dec(v___x_4731_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
lean_object* v___x_4774_; 
if (v_isShared_4772_ == 0)
{
v___x_4774_ = v___x_4771_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_a_4769_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_4900_, lean_object* v_options_4901_, lean_object* v_a_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Lasm_Fetch_serveNode(v_handler_4900_, v_options_4901_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_4904_, lean_object* v_range_4905_, lean_object* v_b_4906_, lean_object* v_i_4907_, lean_object* v_hs_4908_, lean_object* v_hl_4909_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4904_, v_range_4905_, v_b_4906_, v_i_4907_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_4911_, lean_object* v_range_4912_, lean_object* v_b_4913_, lean_object* v_i_4914_, lean_object* v_hs_4915_, lean_object* v_hl_4916_){
_start:
{
lean_object* v_res_4917_; 
v_res_4917_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_4911_, v_range_4912_, v_b_4913_, v_i_4914_, v_hs_4915_, v_hl_4916_);
lean_dec_ref(v_range_4912_);
lean_dec_ref(v___y_4911_);
return v_res_4917_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_as_4920_, lean_object* v_as_x27_4921_, lean_object* v_b_4922_, lean_object* v_a_4923_){
_start:
{
lean_object* v___x_4925_; 
v___x_4925_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4918_, v_a_4919_, v_as_x27_4921_, v_b_4922_);
return v___x_4925_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_4926_, lean_object* v_a_4927_, lean_object* v_as_4928_, lean_object* v_as_x27_4929_, lean_object* v_b_4930_, lean_object* v_a_4931_, lean_object* v___y_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_4926_, v_a_4927_, v_as_4928_, v_as_x27_4929_, v_b_4930_, v_a_4931_);
lean_dec(v_as_x27_4929_);
lean_dec(v_as_4928_);
return v_res_4933_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_4934_; 
v___x_4934_ = lean_box(0);
return v___x_4934_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_4935_; 
v___x_4935_ = lean_box(0);
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_4943_, lean_object* v_method_4944_, lean_object* v_url_4945_, lean_object* v_headers_4946_, lean_object* v_body_4947_, lean_object* v_backend_4948_, lean_object* v_a_00___x40___internal___hyg_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = lasm_fetch_send(v_p_4943_, v_method_4944_, v_url_4945_, v_headers_4946_, v_body_4947_, v_backend_4948_);
lean_dec_ref(v_backend_4948_);
lean_dec_ref(v_body_4947_);
lean_dec_ref(v_headers_4946_);
lean_dec_ref(v_url_4945_);
lean_dec_ref(v_method_4944_);
lean_dec(v_p_4943_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_4951_, lean_object* v_b_4952_, lean_object* v_x_4953_, lean_object* v_x_4954_){
_start:
{
if (lean_obj_tag(v_x_4954_) == 0)
{
return v_x_4953_;
}
else
{
lean_object* v_head_4955_; lean_object* v_tail_4956_; uint8_t v___y_4958_; lean_object* v___x_4965_; lean_object* v___x_4966_; uint8_t v___x_4967_; 
v_head_4955_ = lean_ctor_get(v_x_4954_, 0);
v_tail_4956_ = lean_ctor_get(v_x_4954_, 1);
v___x_4965_ = lean_nat_add(v_pos_4951_, v_head_4955_);
v___x_4966_ = lean_byte_array_size(v_b_4952_);
v___x_4967_ = lean_nat_dec_lt(v___x_4965_, v___x_4966_);
if (v___x_4967_ == 0)
{
uint8_t v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; uint8_t v___x_4971_; 
lean_dec(v___x_4965_);
v___x_4968_ = 0;
v___x_4969_ = lean_box(v___x_4968_);
v___x_4970_ = l_outOfBounds___redArg(v___x_4969_);
lean_dec(v___x_4969_);
v___x_4971_ = lean_unbox(v___x_4970_);
lean_dec(v___x_4970_);
v___y_4958_ = v___x_4971_;
goto v___jp_4957_;
}
else
{
uint8_t v___x_4972_; 
v___x_4972_ = lean_byte_array_fget(v_b_4952_, v___x_4965_);
lean_dec(v___x_4965_);
v___y_4958_ = v___x_4972_;
goto v___jp_4957_;
}
v___jp_4957_:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4959_ = lean_uint8_to_nat(v___y_4958_);
v___x_4960_ = lean_unsigned_to_nat(256u);
v___x_4961_ = lean_nat_pow(v___x_4960_, v_head_4955_);
v___x_4962_ = lean_nat_mul(v___x_4959_, v___x_4961_);
lean_dec(v___x_4961_);
v___x_4963_ = lean_nat_add(v_x_4953_, v___x_4962_);
lean_dec(v___x_4962_);
lean_dec(v_x_4953_);
v_x_4953_ = v___x_4963_;
v_x_4954_ = v_tail_4956_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_4973_, lean_object* v_b_4974_, lean_object* v_x_4975_, lean_object* v_x_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4973_, v_b_4974_, v_x_4975_, v_x_4976_);
lean_dec(v_x_4976_);
lean_dec_ref(v_b_4974_);
lean_dec(v_pos_4973_);
return v_res_4977_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4978_ = lean_unsigned_to_nat(8u);
v___x_4979_ = l_List_range(v___x_4978_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_4983_, lean_object* v_pos_4984_){
_start:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; uint8_t v___x_4988_; 
v___x_4985_ = lean_byte_array_size(v_b_4983_);
v___x_4986_ = lean_unsigned_to_nat(8u);
v___x_4987_ = lean_nat_add(v_pos_4984_, v___x_4986_);
v___x_4988_ = lean_nat_dec_lt(v___x_4985_, v___x_4987_);
lean_dec(v___x_4987_);
if (v___x_4988_ == 0)
{
lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; 
v___x_4989_ = lean_unsigned_to_nat(0u);
v___x_4990_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_4991_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4984_, v_b_4983_, v___x_4989_, v___x_4990_);
v___x_4992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4991_);
return v___x_4992_;
}
else
{
lean_object* v___x_4993_; 
v___x_4993_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_4993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_4994_, lean_object* v_pos_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4994_, v_pos_4995_);
lean_dec(v_pos_4995_);
lean_dec_ref(v_b_4994_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_4997_, lean_object* v_a_4998_){
_start:
{
if (lean_obj_tag(v_a_4997_) == 0)
{
lean_object* v___x_4999_; 
v___x_4999_ = l_List_reverse___redArg(v_a_4998_);
return v___x_4999_;
}
else
{
lean_object* v_head_5000_; lean_object* v_tail_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5017_; 
v_head_5000_ = lean_ctor_get(v_a_4997_, 0);
v_tail_5001_ = lean_ctor_get(v_a_4997_, 1);
v_isSharedCheck_5017_ = !lean_is_exclusive(v_a_4997_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5003_ = v_a_4997_;
v_isShared_5004_ = v_isSharedCheck_5017_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_tail_5001_);
lean_inc(v_head_5000_);
lean_dec(v_a_4997_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5017_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
uint8_t v___y_5006_; uint8_t v___x_5012_; uint8_t v___x_5013_; uint8_t v___x_5014_; 
v___x_5012_ = 128;
v___x_5013_ = lean_unbox(v_head_5000_);
v___x_5014_ = lean_uint8_dec_lt(v___x_5013_, v___x_5012_);
if (v___x_5014_ == 0)
{
uint8_t v___x_5015_; 
lean_dec(v_head_5000_);
v___x_5015_ = 63;
v___y_5006_ = v___x_5015_;
goto v___jp_5005_;
}
else
{
uint8_t v___x_5016_; 
v___x_5016_ = lean_unbox(v_head_5000_);
lean_dec(v_head_5000_);
v___y_5006_ = v___x_5016_;
goto v___jp_5005_;
}
v___jp_5005_:
{
lean_object* v___x_5007_; lean_object* v___x_5009_; 
v___x_5007_ = lean_box(v___y_5006_);
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 1, v_a_4998_);
lean_ctor_set(v___x_5003_, 0, v___x_5007_);
v___x_5009_ = v___x_5003_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v___x_5007_);
lean_ctor_set(v_reuseFailAlloc_5011_, 1, v_a_4998_);
v___x_5009_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
v_a_4997_ = v_tail_5001_;
v_a_4998_ = v___x_5009_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5020_, lean_object* v_pos_5021_, lean_object* v_n_5022_){
_start:
{
lean_object* v___x_5023_; lean_object* v___x_5024_; uint8_t v___x_5025_; 
v___x_5023_ = lean_byte_array_size(v_b_5020_);
v___x_5024_ = lean_nat_add(v_pos_5021_, v_n_5022_);
v___x_5025_ = lean_nat_dec_lt(v___x_5023_, v___x_5024_);
if (v___x_5025_ == 0)
{
lean_object* v___x_5026_; uint8_t v___x_5027_; 
v___x_5026_ = l_ByteArray_extract(v_b_5020_, v_pos_5021_, v___x_5024_);
lean_dec(v___x_5024_);
v___x_5027_ = lean_string_validate_utf8(v___x_5026_);
if (v___x_5027_ == 0)
{
lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; uint8_t v___x_5032_; 
v___x_5028_ = l_ByteArray_toList(v___x_5026_);
lean_dec_ref(v___x_5026_);
v___x_5029_ = lean_box(0);
v___x_5030_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5028_, v___x_5029_);
v___x_5031_ = l_List_toByteArray(v___x_5030_);
lean_dec(v___x_5030_);
v___x_5032_ = lean_string_validate_utf8(v___x_5031_);
if (v___x_5032_ == 0)
{
lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; 
lean_dec_ref(v___x_5031_);
v___x_5033_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5034_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5033_);
v___x_5035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5035_, 0, v___x_5034_);
return v___x_5035_;
}
else
{
lean_object* v___x_5036_; lean_object* v___x_5037_; 
v___x_5036_ = lean_string_from_utf8_unchecked(v___x_5031_);
v___x_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
return v___x_5037_;
}
}
else
{
lean_object* v___x_5038_; lean_object* v___x_5039_; 
v___x_5038_ = lean_string_from_utf8_unchecked(v___x_5026_);
v___x_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5039_, 0, v___x_5038_);
return v___x_5039_;
}
}
else
{
lean_object* v___x_5040_; 
lean_dec(v___x_5024_);
lean_dec(v_pos_5021_);
v___x_5040_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5041_, lean_object* v_pos_5042_, lean_object* v_n_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5041_, v_pos_5042_, v_n_5043_);
lean_dec(v_n_5043_);
lean_dec_ref(v_b_5041_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5045_, lean_object* v_range_5046_, lean_object* v_b_5047_, lean_object* v_i_5048_){
_start:
{
lean_object* v_stop_5049_; lean_object* v_step_5050_; uint8_t v___x_5051_; 
v_stop_5049_ = lean_ctor_get(v_range_5046_, 1);
v_step_5050_ = lean_ctor_get(v_range_5046_, 2);
v___x_5051_ = lean_nat_dec_lt(v_i_5048_, v_stop_5049_);
if (v___x_5051_ == 0)
{
lean_object* v___x_5052_; 
lean_dec(v_i_5048_);
v___x_5052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5052_, 0, v_b_5047_);
return v___x_5052_;
}
else
{
lean_object* v_fst_5053_; lean_object* v_snd_5054_; lean_object* v___x_5056_; uint8_t v_isShared_5057_; uint8_t v_isSharedCheck_5110_; 
v_fst_5053_ = lean_ctor_get(v_b_5047_, 0);
v_snd_5054_ = lean_ctor_get(v_b_5047_, 1);
v_isSharedCheck_5110_ = !lean_is_exclusive(v_b_5047_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5056_ = v_b_5047_;
v_isShared_5057_ = v_isSharedCheck_5110_;
goto v_resetjp_5055_;
}
else
{
lean_inc(v_snd_5054_);
lean_inc(v_fst_5053_);
lean_dec(v_b_5047_);
v___x_5056_ = lean_box(0);
v_isShared_5057_ = v_isSharedCheck_5110_;
goto v_resetjp_5055_;
}
v_resetjp_5055_:
{
lean_object* v___x_5058_; 
v___x_5058_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5045_, v_fst_5053_);
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
lean_del_object(v___x_5056_);
lean_dec(v_snd_5054_);
lean_dec(v_fst_5053_);
lean_dec(v_i_5048_);
v_a_5059_ = lean_ctor_get(v___x_5058_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5058_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5061_ = v___x_5058_;
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5058_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5064_; 
if (v_isShared_5062_ == 0)
{
v___x_5064_ = v___x_5061_;
goto v_reusejp_5063_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v_a_5059_);
v___x_5064_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5063_;
}
v_reusejp_5063_:
{
return v___x_5064_;
}
}
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; 
v_a_5067_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5058_, 1);
v___x_5068_ = lean_unsigned_to_nat(8u);
v___x_5069_ = lean_nat_add(v_fst_5053_, v___x_5068_);
lean_dec(v_fst_5053_);
lean_inc(v___x_5069_);
v___x_5070_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5045_, v___x_5069_, v_a_5067_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
lean_dec(v___x_5069_);
lean_dec(v_a_5067_);
lean_del_object(v___x_5056_);
lean_dec(v_snd_5054_);
lean_dec(v_i_5048_);
v_a_5071_ = lean_ctor_get(v___x_5070_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_5070_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_5070_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_5070_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
}
else
{
lean_object* v_a_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v_a_5079_ = lean_ctor_get(v___x_5070_, 0);
lean_inc(v_a_5079_);
lean_dec_ref_known(v___x_5070_, 1);
v___x_5080_ = lean_nat_add(v___x_5069_, v_a_5067_);
lean_dec(v_a_5067_);
lean_dec(v___x_5069_);
v___x_5081_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5045_, v___x_5080_);
if (lean_obj_tag(v___x_5081_) == 0)
{
lean_object* v_a_5082_; lean_object* v___x_5084_; uint8_t v_isShared_5085_; uint8_t v_isSharedCheck_5089_; 
lean_dec(v___x_5080_);
lean_dec(v_a_5079_);
lean_del_object(v___x_5056_);
lean_dec(v_snd_5054_);
lean_dec(v_i_5048_);
v_a_5082_ = lean_ctor_get(v___x_5081_, 0);
v_isSharedCheck_5089_ = !lean_is_exclusive(v___x_5081_);
if (v_isSharedCheck_5089_ == 0)
{
v___x_5084_ = v___x_5081_;
v_isShared_5085_ = v_isSharedCheck_5089_;
goto v_resetjp_5083_;
}
else
{
lean_inc(v_a_5082_);
lean_dec(v___x_5081_);
v___x_5084_ = lean_box(0);
v_isShared_5085_ = v_isSharedCheck_5089_;
goto v_resetjp_5083_;
}
v_resetjp_5083_:
{
lean_object* v___x_5087_; 
if (v_isShared_5085_ == 0)
{
v___x_5087_ = v___x_5084_;
goto v_reusejp_5086_;
}
else
{
lean_object* v_reuseFailAlloc_5088_; 
v_reuseFailAlloc_5088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5088_, 0, v_a_5082_);
v___x_5087_ = v_reuseFailAlloc_5088_;
goto v_reusejp_5086_;
}
v_reusejp_5086_:
{
return v___x_5087_;
}
}
}
else
{
lean_object* v_a_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; 
v_a_5090_ = lean_ctor_get(v___x_5081_, 0);
lean_inc(v_a_5090_);
lean_dec_ref_known(v___x_5081_, 1);
v___x_5091_ = lean_nat_add(v___x_5080_, v___x_5068_);
lean_dec(v___x_5080_);
lean_inc(v___x_5091_);
v___x_5092_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5045_, v___x_5091_, v_a_5090_);
if (lean_obj_tag(v___x_5092_) == 0)
{
lean_object* v_a_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5100_; 
lean_dec(v___x_5091_);
lean_dec(v_a_5090_);
lean_dec(v_a_5079_);
lean_del_object(v___x_5056_);
lean_dec(v_snd_5054_);
lean_dec(v_i_5048_);
v_a_5093_ = lean_ctor_get(v___x_5092_, 0);
v_isSharedCheck_5100_ = !lean_is_exclusive(v___x_5092_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5095_ = v___x_5092_;
v_isShared_5096_ = v_isSharedCheck_5100_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_a_5093_);
lean_dec(v___x_5092_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5100_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5098_; 
if (v_isShared_5096_ == 0)
{
v___x_5098_ = v___x_5095_;
goto v_reusejp_5097_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v_a_5093_);
v___x_5098_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5097_;
}
v_reusejp_5097_:
{
return v___x_5098_;
}
}
}
else
{
lean_object* v_a_5101_; lean_object* v___x_5102_; lean_object* v___x_5104_; 
v_a_5101_ = lean_ctor_get(v___x_5092_, 0);
lean_inc(v_a_5101_);
lean_dec_ref_known(v___x_5092_, 1);
v___x_5102_ = lean_nat_add(v___x_5091_, v_a_5090_);
lean_dec(v_a_5090_);
lean_dec(v___x_5091_);
if (v_isShared_5057_ == 0)
{
lean_ctor_set(v___x_5056_, 1, v_a_5101_);
lean_ctor_set(v___x_5056_, 0, v_a_5079_);
v___x_5104_ = v___x_5056_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5079_);
lean_ctor_set(v_reuseFailAlloc_5109_, 1, v_a_5101_);
v___x_5104_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; 
v___x_5105_ = lean_array_push(v_snd_5054_, v___x_5104_);
v___x_5106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5106_, 0, v___x_5102_);
lean_ctor_set(v___x_5106_, 1, v___x_5105_);
v___x_5107_ = lean_nat_add(v_i_5048_, v_step_5050_);
lean_dec(v_i_5048_);
v_b_5047_ = v___x_5106_;
v_i_5048_ = v___x_5107_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5111_, lean_object* v_range_5112_, lean_object* v_b_5113_, lean_object* v_i_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5111_, v_range_5112_, v_b_5113_, v_i_5114_);
lean_dec_ref(v_range_5112_);
lean_dec_ref(v_b_5111_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5119_){
_start:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5120_ = lean_unsigned_to_nat(0u);
v___x_5121_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5119_, v___x_5120_);
if (lean_obj_tag(v___x_5121_) == 0)
{
lean_object* v_a_5122_; lean_object* v___x_5124_; uint8_t v_isShared_5125_; uint8_t v_isSharedCheck_5129_; 
v_a_5122_ = lean_ctor_get(v___x_5121_, 0);
v_isSharedCheck_5129_ = !lean_is_exclusive(v___x_5121_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5124_ = v___x_5121_;
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
else
{
lean_inc(v_a_5122_);
lean_dec(v___x_5121_);
v___x_5124_ = lean_box(0);
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
v_resetjp_5123_:
{
lean_object* v___x_5127_; 
if (v_isShared_5125_ == 0)
{
v___x_5127_ = v___x_5124_;
goto v_reusejp_5126_;
}
else
{
lean_object* v_reuseFailAlloc_5128_; 
v_reuseFailAlloc_5128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5128_, 0, v_a_5122_);
v___x_5127_ = v_reuseFailAlloc_5128_;
goto v_reusejp_5126_;
}
v_reusejp_5126_:
{
return v___x_5127_;
}
}
}
else
{
lean_object* v_a_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; 
v_a_5130_ = lean_ctor_get(v___x_5121_, 0);
lean_inc(v_a_5130_);
lean_dec_ref_known(v___x_5121_, 1);
v___x_5131_ = lean_unsigned_to_nat(8u);
v___x_5132_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5119_, v___x_5131_);
if (lean_obj_tag(v___x_5132_) == 0)
{
lean_object* v_a_5133_; lean_object* v___x_5135_; uint8_t v_isShared_5136_; uint8_t v_isSharedCheck_5140_; 
lean_dec(v_a_5130_);
v_a_5133_ = lean_ctor_get(v___x_5132_, 0);
v_isSharedCheck_5140_ = !lean_is_exclusive(v___x_5132_);
if (v_isSharedCheck_5140_ == 0)
{
v___x_5135_ = v___x_5132_;
v_isShared_5136_ = v_isSharedCheck_5140_;
goto v_resetjp_5134_;
}
else
{
lean_inc(v_a_5133_);
lean_dec(v___x_5132_);
v___x_5135_ = lean_box(0);
v_isShared_5136_ = v_isSharedCheck_5140_;
goto v_resetjp_5134_;
}
v_resetjp_5134_:
{
lean_object* v___x_5138_; 
if (v_isShared_5136_ == 0)
{
v___x_5138_ = v___x_5135_;
goto v_reusejp_5137_;
}
else
{
lean_object* v_reuseFailAlloc_5139_; 
v_reuseFailAlloc_5139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5139_, 0, v_a_5133_);
v___x_5138_ = v_reuseFailAlloc_5139_;
goto v_reusejp_5137_;
}
v_reusejp_5137_:
{
return v___x_5138_;
}
}
}
else
{
lean_object* v_a_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v_a_5141_ = lean_ctor_get(v___x_5132_, 0);
lean_inc(v_a_5141_);
lean_dec_ref_known(v___x_5132_, 1);
v___x_5142_ = lean_unsigned_to_nat(1u);
v___x_5143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5143_, 0, v___x_5120_);
lean_ctor_set(v___x_5143_, 1, v_a_5141_);
lean_ctor_set(v___x_5143_, 2, v___x_5142_);
v___x_5144_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5145_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5119_, v___x_5143_, v___x_5144_, v___x_5120_);
lean_dec_ref_known(v___x_5143_, 3);
if (lean_obj_tag(v___x_5145_) == 0)
{
lean_object* v_a_5146_; lean_object* v___x_5148_; uint8_t v_isShared_5149_; uint8_t v_isSharedCheck_5153_; 
lean_dec(v_a_5130_);
v_a_5146_ = lean_ctor_get(v___x_5145_, 0);
v_isSharedCheck_5153_ = !lean_is_exclusive(v___x_5145_);
if (v_isSharedCheck_5153_ == 0)
{
v___x_5148_ = v___x_5145_;
v_isShared_5149_ = v_isSharedCheck_5153_;
goto v_resetjp_5147_;
}
else
{
lean_inc(v_a_5146_);
lean_dec(v___x_5145_);
v___x_5148_ = lean_box(0);
v_isShared_5149_ = v_isSharedCheck_5153_;
goto v_resetjp_5147_;
}
v_resetjp_5147_:
{
lean_object* v___x_5151_; 
if (v_isShared_5149_ == 0)
{
v___x_5151_ = v___x_5148_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v_a_5146_);
v___x_5151_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
return v___x_5151_;
}
}
}
else
{
lean_object* v_a_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5168_; 
v_a_5154_ = lean_ctor_get(v___x_5145_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5145_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5156_ = v___x_5145_;
v_isShared_5157_ = v_isSharedCheck_5168_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_a_5154_);
lean_dec(v___x_5145_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5168_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
lean_object* v_fst_5158_; lean_object* v_snd_5159_; uint16_t v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5166_; 
v_fst_5158_ = lean_ctor_get(v_a_5154_, 0);
lean_inc(v_fst_5158_);
v_snd_5159_ = lean_ctor_get(v_a_5154_, 1);
lean_inc(v_snd_5159_);
lean_dec(v_a_5154_);
v___x_5160_ = lean_uint16_of_nat(v_a_5130_);
lean_dec(v_a_5130_);
v___x_5161_ = lean_byte_array_size(v_b_5119_);
v___x_5162_ = l_ByteArray_extract(v_b_5119_, v_fst_5158_, v___x_5161_);
v___x_5163_ = lean_box(0);
v___x_5164_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5164_, 0, v_snd_5159_);
lean_ctor_set(v___x_5164_, 1, v___x_5162_);
lean_ctor_set(v___x_5164_, 2, v___x_5163_);
lean_ctor_set_uint16(v___x_5164_, sizeof(void*)*3, v___x_5160_);
if (v_isShared_5157_ == 0)
{
lean_ctor_set(v___x_5156_, 0, v___x_5164_);
v___x_5166_ = v___x_5156_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v___x_5164_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5169_);
lean_dec_ref(v_b_5169_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5171_, lean_object* v_range_5172_, lean_object* v_b_5173_, lean_object* v_i_5174_, lean_object* v_hs_5175_, lean_object* v_hl_5176_){
_start:
{
lean_object* v___x_5177_; 
v___x_5177_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5171_, v_range_5172_, v_b_5173_, v_i_5174_);
return v___x_5177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5178_, lean_object* v_range_5179_, lean_object* v_b_5180_, lean_object* v_i_5181_, lean_object* v_hs_5182_, lean_object* v_hl_5183_){
_start:
{
lean_object* v_res_5184_; 
v_res_5184_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5178_, v_range_5179_, v_b_5180_, v_i_5181_, v_hs_5182_, v_hl_5183_);
lean_dec_ref(v_range_5179_);
lean_dec_ref(v_b_5178_);
return v_res_5184_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5185_, lean_object* v_headers_5186_, lean_object* v_x_5187_){
_start:
{
if (lean_obj_tag(v_x_5187_) == 0)
{
lean_object* v_a_5189_; lean_object* v___x_5191_; uint8_t v_isShared_5192_; uint8_t v_isSharedCheck_5197_; 
lean_dec_ref(v_headers_5186_);
v_a_5189_ = lean_ctor_get(v_x_5187_, 0);
v_isSharedCheck_5197_ = !lean_is_exclusive(v_x_5187_);
if (v_isSharedCheck_5197_ == 0)
{
v___x_5191_ = v_x_5187_;
v_isShared_5192_ = v_isSharedCheck_5197_;
goto v_resetjp_5190_;
}
else
{
lean_inc(v_a_5189_);
lean_dec(v_x_5187_);
v___x_5191_ = lean_box(0);
v_isShared_5192_ = v_isSharedCheck_5197_;
goto v_resetjp_5190_;
}
v_resetjp_5190_:
{
lean_object* v___x_5194_; 
if (v_isShared_5192_ == 0)
{
v___x_5194_ = v___x_5191_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v_a_5189_);
v___x_5194_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
lean_object* v___x_5195_; 
v___x_5195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5194_);
return v___x_5195_;
}
}
}
else
{
lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5208_; 
v_a_5198_ = lean_ctor_get(v_x_5187_, 0);
v_isSharedCheck_5208_ = !lean_is_exclusive(v_x_5187_);
if (v_isSharedCheck_5208_ == 0)
{
v___x_5200_ = v_x_5187_;
v_isShared_5201_ = v_isSharedCheck_5208_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v_x_5187_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5208_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5205_; 
v___x_5202_ = lean_box(0);
v___x_5203_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5203_, 0, v_headers_5186_);
lean_ctor_set(v___x_5203_, 1, v_a_5198_);
lean_ctor_set(v___x_5203_, 2, v___x_5202_);
lean_ctor_set_uint16(v___x_5203_, sizeof(void*)*3, v___y_5185_);
if (v_isShared_5201_ == 0)
{
lean_ctor_set(v___x_5200_, 0, v___x_5203_);
v___x_5205_ = v___x_5200_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v___x_5203_);
v___x_5205_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
lean_object* v___x_5206_; 
v___x_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5206_, 0, v___x_5205_);
return v___x_5206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5209_, lean_object* v_headers_5210_, lean_object* v_x_5211_, lean_object* v___y_5212_){
_start:
{
uint16_t v___y_2853__boxed_5213_; lean_object* v_res_5214_; 
v___y_2853__boxed_5213_ = lean_unbox(v___y_5209_);
v_res_5214_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5213_, v_headers_5210_, v_x_5211_);
return v_res_5214_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5215_, lean_object* v___f_5216_, lean_object* v_x_5217_){
_start:
{
if (lean_obj_tag(v_x_5217_) == 0)
{
lean_object* v_a_5219_; lean_object* v___x_5221_; uint8_t v_isShared_5222_; uint8_t v_isSharedCheck_5227_; 
lean_dec_ref(v___f_5216_);
lean_dec(v_a_5215_);
v_a_5219_ = lean_ctor_get(v_x_5217_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v_x_5217_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5221_ = v_x_5217_;
v_isShared_5222_ = v_isSharedCheck_5227_;
goto v_resetjp_5220_;
}
else
{
lean_inc(v_a_5219_);
lean_dec(v_x_5217_);
v___x_5221_ = lean_box(0);
v_isShared_5222_ = v_isSharedCheck_5227_;
goto v_resetjp_5220_;
}
v_resetjp_5220_:
{
lean_object* v___x_5224_; 
if (v_isShared_5222_ == 0)
{
v___x_5224_ = v___x_5221_;
goto v_reusejp_5223_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v_a_5219_);
v___x_5224_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5223_;
}
v_reusejp_5223_:
{
lean_object* v___x_5225_; 
v___x_5225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5225_, 0, v___x_5224_);
return v___x_5225_;
}
}
}
else
{
lean_object* v_a_5228_; lean_object* v___x_5230_; uint8_t v_isShared_5231_; uint8_t v_isSharedCheck_5252_; 
v_a_5228_ = lean_ctor_get(v_x_5217_, 0);
v_isSharedCheck_5252_ = !lean_is_exclusive(v_x_5217_);
if (v_isSharedCheck_5252_ == 0)
{
v___x_5230_ = v_x_5217_;
v_isShared_5231_ = v_isSharedCheck_5252_;
goto v_resetjp_5229_;
}
else
{
lean_inc(v_a_5228_);
lean_dec(v_x_5217_);
v___x_5230_ = lean_box(0);
v_isShared_5231_ = v_isSharedCheck_5252_;
goto v_resetjp_5229_;
}
v_resetjp_5229_:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; uint8_t v___x_5238_; lean_object* v_val_5240_; lean_object* v___x_5243_; 
v___x_5232_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5233_, 0, v_a_5215_);
lean_ctor_set(v___x_5233_, 1, v___x_5232_);
v___x_5234_ = lean_unsigned_to_nat(1u);
v___x_5235_ = lean_mk_empty_array_with_capacity(v___x_5234_);
v___x_5236_ = lean_array_push(v___x_5235_, v___x_5233_);
v___x_5237_ = lean_unsigned_to_nat(0u);
v___x_5238_ = 0;
v___x_5243_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5228_, v___x_5236_);
if (lean_obj_tag(v___x_5243_) == 0)
{
lean_object* v_a_5244_; lean_object* v___x_5246_; 
v_a_5244_ = lean_ctor_get(v___x_5243_, 0);
lean_inc(v_a_5244_);
lean_dec_ref_known(v___x_5243_, 1);
if (v_isShared_5231_ == 0)
{
lean_ctor_set(v___x_5230_, 0, v_a_5244_);
v___x_5246_ = v___x_5230_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5244_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
v_val_5240_ = v___x_5246_;
goto v___jp_5239_;
}
}
else
{
lean_object* v_a_5248_; lean_object* v___x_5250_; 
v_a_5248_ = lean_ctor_get(v___x_5243_, 0);
lean_inc(v_a_5248_);
lean_dec_ref_known(v___x_5243_, 1);
if (v_isShared_5231_ == 0)
{
lean_ctor_set_tag(v___x_5230_, 0);
lean_ctor_set(v___x_5230_, 0, v_a_5248_);
v___x_5250_ = v___x_5230_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v_a_5248_);
v___x_5250_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
v_val_5240_ = v___x_5250_;
goto v___jp_5239_;
}
}
v___jp_5239_:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; 
v___x_5241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5241_, 0, v_val_5240_);
v___x_5242_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5237_, v___x_5238_, v___x_5241_, v___f_5216_);
return v___x_5242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5253_, lean_object* v___f_5254_, lean_object* v_x_5255_, lean_object* v___y_5256_){
_start:
{
lean_object* v_res_5257_; 
v_res_5257_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5253_, v___f_5254_, v_x_5255_);
return v_res_5257_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5258_, lean_object* v_a_5259_, lean_object* v_x_5260_){
_start:
{
if (lean_obj_tag(v_x_5260_) == 0)
{
lean_object* v_a_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5270_; 
lean_dec(v_a_5259_);
lean_dec_ref(v___f_5258_);
v_a_5262_ = lean_ctor_get(v_x_5260_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v_x_5260_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5264_ = v_x_5260_;
v_isShared_5265_ = v_isSharedCheck_5270_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_a_5262_);
lean_dec(v_x_5260_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5270_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5267_; 
if (v_isShared_5265_ == 0)
{
v___x_5267_ = v___x_5264_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5269_; 
v_reuseFailAlloc_5269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5269_, 0, v_a_5262_);
v___x_5267_ = v_reuseFailAlloc_5269_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
lean_object* v___x_5268_; 
v___x_5268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5268_, 0, v___x_5267_);
return v___x_5268_;
}
}
}
else
{
lean_object* v_a_5271_; lean_object* v___x_5273_; uint8_t v_isShared_5274_; uint8_t v_isSharedCheck_5292_; 
v_a_5271_ = lean_ctor_get(v_x_5260_, 0);
v_isSharedCheck_5292_ = !lean_is_exclusive(v_x_5260_);
if (v_isSharedCheck_5292_ == 0)
{
v___x_5273_ = v_x_5260_;
v_isShared_5274_ = v_isSharedCheck_5292_;
goto v_resetjp_5272_;
}
else
{
lean_inc(v_a_5271_);
lean_dec(v_x_5260_);
v___x_5273_ = lean_box(0);
v_isShared_5274_ = v_isSharedCheck_5292_;
goto v_resetjp_5272_;
}
v_resetjp_5272_:
{
lean_object* v___f_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; lean_object* v_val_5280_; lean_object* v___x_5283_; 
v___f_5275_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5275_, 0, v_a_5271_);
lean_closure_set(v___f_5275_, 1, v___f_5258_);
v___x_5276_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5277_ = lean_unsigned_to_nat(0u);
v___x_5278_ = 0;
v___x_5283_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5259_, v___x_5276_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; lean_object* v___x_5286_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
lean_inc(v_a_5284_);
lean_dec_ref_known(v___x_5283_, 1);
if (v_isShared_5274_ == 0)
{
lean_ctor_set(v___x_5273_, 0, v_a_5284_);
v___x_5286_ = v___x_5273_;
goto v_reusejp_5285_;
}
else
{
lean_object* v_reuseFailAlloc_5287_; 
v_reuseFailAlloc_5287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5287_, 0, v_a_5284_);
v___x_5286_ = v_reuseFailAlloc_5287_;
goto v_reusejp_5285_;
}
v_reusejp_5285_:
{
v_val_5280_ = v___x_5286_;
goto v___jp_5279_;
}
}
else
{
lean_object* v_a_5288_; lean_object* v___x_5290_; 
v_a_5288_ = lean_ctor_get(v___x_5283_, 0);
lean_inc(v_a_5288_);
lean_dec_ref_known(v___x_5283_, 1);
if (v_isShared_5274_ == 0)
{
lean_ctor_set_tag(v___x_5273_, 0);
lean_ctor_set(v___x_5273_, 0, v_a_5288_);
v___x_5290_ = v___x_5273_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v_a_5288_);
v___x_5290_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
v_val_5280_ = v___x_5290_;
goto v___jp_5279_;
}
}
v___jp_5279_:
{
lean_object* v___x_5281_; lean_object* v___x_5282_; 
v___x_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5281_, 0, v_val_5280_);
v___x_5282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5277_, v___x_5278_, v___x_5281_, v___f_5275_);
return v___x_5282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5293_, lean_object* v_a_5294_, lean_object* v_x_5295_, lean_object* v___y_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5293_, v_a_5294_, v_x_5295_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5298_, lean_object* v_a_5299_, lean_object* v_a_5300_, lean_object* v_headers_5301_){
_start:
{
lean_object* v___x_5303_; lean_object* v___f_5304_; lean_object* v___f_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; uint8_t v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; 
v___x_5303_ = lean_box(v___y_5298_);
v___f_5304_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5304_, 0, v___x_5303_);
lean_closure_set(v___f_5304_, 1, v_headers_5301_);
v___f_5305_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5305_, 0, v___f_5304_);
lean_closure_set(v___f_5305_, 1, v_a_5299_);
v___x_5306_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5307_ = lean_unsigned_to_nat(0u);
v___x_5308_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5309_ = 0;
v___x_5310_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5300_, v___x_5306_, v___x_5308_);
v___x_5311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5307_, v___x_5309_, v___x_5310_, v___f_5305_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_headers_5315_, lean_object* v___y_5316_){
_start:
{
uint16_t v___y_3061__boxed_5317_; lean_object* v_res_5318_; 
v___y_3061__boxed_5317_ = lean_unbox(v___y_5312_);
v_res_5318_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5317_, v_a_5313_, v_a_5314_, v_headers_5315_);
return v_res_5318_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5319_, lean_object* v_x_5320_){
_start:
{
if (lean_obj_tag(v_x_5320_) == 0)
{
lean_object* v_a_5322_; lean_object* v___x_5324_; uint8_t v_isShared_5325_; uint8_t v_isSharedCheck_5330_; 
lean_dec_ref(v___f_5319_);
v_a_5322_ = lean_ctor_get(v_x_5320_, 0);
v_isSharedCheck_5330_ = !lean_is_exclusive(v_x_5320_);
if (v_isSharedCheck_5330_ == 0)
{
v___x_5324_ = v_x_5320_;
v_isShared_5325_ = v_isSharedCheck_5330_;
goto v_resetjp_5323_;
}
else
{
lean_inc(v_a_5322_);
lean_dec(v_x_5320_);
v___x_5324_ = lean_box(0);
v_isShared_5325_ = v_isSharedCheck_5330_;
goto v_resetjp_5323_;
}
v_resetjp_5323_:
{
lean_object* v___x_5327_; 
if (v_isShared_5325_ == 0)
{
v___x_5327_ = v___x_5324_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5329_; 
v_reuseFailAlloc_5329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5329_, 0, v_a_5322_);
v___x_5327_ = v_reuseFailAlloc_5329_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
lean_object* v___x_5328_; 
v___x_5328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5328_, 0, v___x_5327_);
return v___x_5328_;
}
}
}
else
{
lean_object* v_a_5331_; lean_object* v___x_5332_; 
v_a_5331_ = lean_ctor_get(v_x_5320_, 0);
lean_inc(v_a_5331_);
lean_dec_ref_known(v_x_5320_, 1);
v___x_5332_ = lean_apply_2(v___f_5319_, v_a_5331_, lean_box(0));
return v___x_5332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5333_, lean_object* v_x_5334_, lean_object* v___y_5335_){
_start:
{
lean_object* v_res_5336_; 
v_res_5336_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5333_, v_x_5334_);
return v_res_5336_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5337_, lean_object* v___f_5338_, lean_object* v_x_5339_){
_start:
{
if (lean_obj_tag(v_x_5339_) == 0)
{
lean_object* v_a_5341_; lean_object* v___x_5343_; uint8_t v_isShared_5344_; uint8_t v_isSharedCheck_5349_; 
lean_dec_ref(v___f_5338_);
lean_dec(v_value_5337_);
v_a_5341_ = lean_ctor_get(v_x_5339_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v_x_5339_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5343_ = v_x_5339_;
v_isShared_5344_ = v_isSharedCheck_5349_;
goto v_resetjp_5342_;
}
else
{
lean_inc(v_a_5341_);
lean_dec(v_x_5339_);
v___x_5343_ = lean_box(0);
v_isShared_5344_ = v_isSharedCheck_5349_;
goto v_resetjp_5342_;
}
v_resetjp_5342_:
{
lean_object* v___x_5346_; 
if (v_isShared_5344_ == 0)
{
v___x_5346_ = v___x_5343_;
goto v_reusejp_5345_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v_a_5341_);
v___x_5346_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5345_;
}
v_reusejp_5345_:
{
lean_object* v___x_5347_; 
v___x_5347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5347_, 0, v___x_5346_);
return v___x_5347_;
}
}
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5375_; 
v_a_5350_ = lean_ctor_get(v_x_5339_, 0);
v_isSharedCheck_5375_ = !lean_is_exclusive(v_x_5339_);
if (v_isSharedCheck_5375_ == 0)
{
v___x_5352_ = v_x_5339_;
v_isShared_5353_ = v_isSharedCheck_5375_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_a_5350_);
lean_dec(v_x_5339_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5375_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; uint8_t v___x_5361_; lean_object* v_val_5363_; lean_object* v___x_5366_; 
v___x_5354_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5355_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5356_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5356_, 0, v_value_5337_);
lean_ctor_set(v___x_5356_, 1, v___x_5355_);
v___x_5357_ = lean_unsigned_to_nat(1u);
v___x_5358_ = lean_mk_empty_array_with_capacity(v___x_5357_);
v___x_5359_ = lean_array_push(v___x_5358_, v___x_5356_);
v___x_5360_ = lean_unsigned_to_nat(0u);
v___x_5361_ = 0;
v___x_5366_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5350_, v___x_5354_, v___x_5359_);
if (lean_obj_tag(v___x_5366_) == 0)
{
lean_object* v_a_5367_; lean_object* v___x_5369_; 
v_a_5367_ = lean_ctor_get(v___x_5366_, 0);
lean_inc(v_a_5367_);
lean_dec_ref_known(v___x_5366_, 1);
if (v_isShared_5353_ == 0)
{
lean_ctor_set(v___x_5352_, 0, v_a_5367_);
v___x_5369_ = v___x_5352_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5367_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
v_val_5363_ = v___x_5369_;
goto v___jp_5362_;
}
}
else
{
lean_object* v_a_5371_; lean_object* v___x_5373_; 
v_a_5371_ = lean_ctor_get(v___x_5366_, 0);
lean_inc(v_a_5371_);
lean_dec_ref_known(v___x_5366_, 1);
if (v_isShared_5353_ == 0)
{
lean_ctor_set_tag(v___x_5352_, 0);
lean_ctor_set(v___x_5352_, 0, v_a_5371_);
v___x_5373_ = v___x_5352_;
goto v_reusejp_5372_;
}
else
{
lean_object* v_reuseFailAlloc_5374_; 
v_reuseFailAlloc_5374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5374_, 0, v_a_5371_);
v___x_5373_ = v_reuseFailAlloc_5374_;
goto v_reusejp_5372_;
}
v_reusejp_5372_:
{
v_val_5363_ = v___x_5373_;
goto v___jp_5362_;
}
}
v___jp_5362_:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___x_5364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5364_, 0, v_val_5363_);
v___x_5365_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5360_, v___x_5361_, v___x_5364_, v___f_5338_);
return v___x_5365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5376_, lean_object* v___f_5377_, lean_object* v_x_5378_, lean_object* v___y_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5376_, v___f_5377_, v_x_5378_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5385_, lean_object* v_a_5386_, lean_object* v___x_5387_, lean_object* v___x_5388_, lean_object* v_x_5389_){
_start:
{
lean_object* v___y_5392_; lean_object* v___y_5393_; uint8_t v___y_5394_; lean_object* v_val_5395_; 
if (lean_obj_tag(v_x_5389_) == 0)
{
lean_object* v_a_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5406_; 
lean_dec(v_a_5386_);
lean_dec(v_a_5385_);
v_a_5398_ = lean_ctor_get(v_x_5389_, 0);
v_isSharedCheck_5406_ = !lean_is_exclusive(v_x_5389_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5400_ = v_x_5389_;
v_isShared_5401_ = v_isSharedCheck_5406_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_a_5398_);
lean_dec(v_x_5389_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5406_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v___x_5403_; 
if (v_isShared_5401_ == 0)
{
v___x_5403_ = v___x_5400_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5405_; 
v_reuseFailAlloc_5405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5405_, 0, v_a_5398_);
v___x_5403_ = v_reuseFailAlloc_5405_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
lean_object* v___x_5404_; 
v___x_5404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5403_);
return v___x_5404_;
}
}
}
else
{
lean_object* v_a_5407_; lean_object* v___x_5409_; uint8_t v_isShared_5410_; uint8_t v_isSharedCheck_5440_; 
v_a_5407_ = lean_ctor_get(v_x_5389_, 0);
v_isSharedCheck_5440_ = !lean_is_exclusive(v_x_5389_);
if (v_isSharedCheck_5440_ == 0)
{
v___x_5409_ = v_x_5389_;
v_isShared_5410_ = v_isSharedCheck_5440_;
goto v_resetjp_5408_;
}
else
{
lean_inc(v_a_5407_);
lean_dec(v_x_5389_);
v___x_5409_ = lean_box(0);
v_isShared_5410_ = v_isSharedCheck_5440_;
goto v_resetjp_5408_;
}
v_resetjp_5408_:
{
uint16_t v___y_5412_; lean_object* v___x_5436_; 
v___x_5436_ = l_Lasm_JS_Data_field(v_a_5407_, v___x_5388_);
if (lean_obj_tag(v___x_5436_) == 3)
{
double v_n_5437_; uint16_t v___x_5438_; 
v_n_5437_ = lean_ctor_get_float(v___x_5436_, 0);
lean_dec_ref_known(v___x_5436_, 0);
v___x_5438_ = lean_float_to_uint16(v_n_5437_);
v___y_5412_ = v___x_5438_;
goto v___jp_5411_;
}
else
{
uint16_t v___x_5439_; 
lean_dec(v___x_5436_);
v___x_5439_ = 0;
v___y_5412_ = v___x_5439_;
goto v___jp_5411_;
}
v___jp_5411_:
{
lean_object* v___x_5413_; lean_object* v___f_5414_; lean_object* v___x_5415_; 
v___x_5413_ = lean_box(v___y_5412_);
lean_inc(v_a_5385_);
v___f_5414_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5414_, 0, v___x_5413_);
lean_closure_set(v___f_5414_, 1, v_a_5385_);
lean_closure_set(v___f_5414_, 2, v_a_5386_);
v___x_5415_ = l_Lasm_JS_Data_field(v_a_5407_, v___x_5387_);
lean_dec(v_a_5407_);
if (lean_obj_tag(v___x_5415_) == 9)
{
lean_object* v_value_5416_; lean_object* v___f_5417_; lean_object* v___f_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; uint8_t v___x_5421_; lean_object* v___x_5422_; 
v_value_5416_ = lean_ctor_get(v___x_5415_, 0);
lean_inc(v_value_5416_);
lean_dec_ref_known(v___x_5415_, 2);
v___f_5417_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5417_, 0, v___f_5414_);
v___f_5418_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5418_, 0, v_value_5416_);
lean_closure_set(v___f_5418_, 1, v___f_5417_);
v___x_5419_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5420_ = lean_unsigned_to_nat(0u);
v___x_5421_ = 0;
v___x_5422_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5385_, v___x_5419_);
if (lean_obj_tag(v___x_5422_) == 0)
{
lean_object* v_a_5423_; lean_object* v___x_5425_; 
v_a_5423_ = lean_ctor_get(v___x_5422_, 0);
lean_inc(v_a_5423_);
lean_dec_ref_known(v___x_5422_, 1);
if (v_isShared_5410_ == 0)
{
lean_ctor_set(v___x_5409_, 0, v_a_5423_);
v___x_5425_ = v___x_5409_;
goto v_reusejp_5424_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v_a_5423_);
v___x_5425_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5424_;
}
v_reusejp_5424_:
{
v___y_5392_ = v___x_5420_;
v___y_5393_ = v___f_5418_;
v___y_5394_ = v___x_5421_;
v_val_5395_ = v___x_5425_;
goto v___jp_5391_;
}
}
else
{
lean_object* v_a_5427_; lean_object* v___x_5429_; 
v_a_5427_ = lean_ctor_get(v___x_5422_, 0);
lean_inc(v_a_5427_);
lean_dec_ref_known(v___x_5422_, 1);
if (v_isShared_5410_ == 0)
{
lean_ctor_set_tag(v___x_5409_, 0);
lean_ctor_set(v___x_5409_, 0, v_a_5427_);
v___x_5429_ = v___x_5409_;
goto v_reusejp_5428_;
}
else
{
lean_object* v_reuseFailAlloc_5430_; 
v_reuseFailAlloc_5430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5430_, 0, v_a_5427_);
v___x_5429_ = v_reuseFailAlloc_5430_;
goto v_reusejp_5428_;
}
v_reusejp_5428_:
{
v___y_5392_ = v___x_5420_;
v___y_5393_ = v___f_5418_;
v___y_5394_ = v___x_5421_;
v_val_5395_ = v___x_5429_;
goto v___jp_5391_;
}
}
}
else
{
lean_object* v___f_5431_; lean_object* v___x_5432_; uint8_t v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; 
lean_dec(v___x_5415_);
lean_del_object(v___x_5409_);
lean_dec(v_a_5385_);
v___f_5431_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5431_, 0, v___f_5414_);
v___x_5432_ = lean_unsigned_to_nat(0u);
v___x_5433_ = 0;
v___x_5434_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5435_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5432_, v___x_5433_, v___x_5434_, v___f_5431_);
return v___x_5435_;
}
}
}
}
v___jp_5391_:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; 
v___x_5396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5396_, 0, v_val_5395_);
v___x_5397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5392_, v___y_5394_, v___x_5396_, v___y_5393_);
return v___x_5397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5441_, lean_object* v_a_5442_, lean_object* v___x_5443_, lean_object* v___x_5444_, lean_object* v_x_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v_res_5447_; 
v_res_5447_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5441_, v_a_5442_, v___x_5443_, v___x_5444_, v_x_5445_);
lean_dec_ref(v___x_5444_);
lean_dec_ref(v___x_5443_);
return v_res_5447_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5448_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5449_ = lean_unsigned_to_nat(2u);
v___x_5450_ = lean_mk_empty_array_with_capacity(v___x_5449_);
v___x_5451_ = lean_array_push(v___x_5450_, v___x_5448_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5452_, lean_object* v___x_5453_, lean_object* v_x_5454_){
_start:
{
if (lean_obj_tag(v_x_5454_) == 0)
{
lean_object* v_a_5456_; lean_object* v___x_5458_; uint8_t v_isShared_5459_; uint8_t v_isSharedCheck_5464_; 
lean_dec_ref(v___x_5453_);
lean_dec(v_a_5452_);
v_a_5456_ = lean_ctor_get(v_x_5454_, 0);
v_isSharedCheck_5464_ = !lean_is_exclusive(v_x_5454_);
if (v_isSharedCheck_5464_ == 0)
{
v___x_5458_ = v_x_5454_;
v_isShared_5459_ = v_isSharedCheck_5464_;
goto v_resetjp_5457_;
}
else
{
lean_inc(v_a_5456_);
lean_dec(v_x_5454_);
v___x_5458_ = lean_box(0);
v_isShared_5459_ = v_isSharedCheck_5464_;
goto v_resetjp_5457_;
}
v_resetjp_5457_:
{
lean_object* v___x_5461_; 
if (v_isShared_5459_ == 0)
{
v___x_5461_ = v___x_5458_;
goto v_reusejp_5460_;
}
else
{
lean_object* v_reuseFailAlloc_5463_; 
v_reuseFailAlloc_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5463_, 0, v_a_5456_);
v___x_5461_ = v_reuseFailAlloc_5463_;
goto v_reusejp_5460_;
}
v_reusejp_5460_:
{
lean_object* v___x_5462_; 
v___x_5462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5462_, 0, v___x_5461_);
return v___x_5462_;
}
}
}
else
{
lean_object* v_a_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5488_; 
v_a_5465_ = lean_ctor_get(v_x_5454_, 0);
v_isSharedCheck_5488_ = !lean_is_exclusive(v_x_5454_);
if (v_isSharedCheck_5488_ == 0)
{
v___x_5467_ = v_x_5454_;
v_isShared_5468_ = v_isSharedCheck_5488_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_a_5465_);
lean_dec(v_x_5454_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5488_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___x_5469_; lean_object* v___f_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; uint8_t v___x_5474_; lean_object* v_val_5476_; lean_object* v___x_5479_; 
v___x_5469_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5453_);
lean_inc(v_a_5465_);
v___f_5470_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5470_, 0, v_a_5452_);
lean_closure_set(v___f_5470_, 1, v_a_5465_);
lean_closure_set(v___f_5470_, 2, v___x_5453_);
lean_closure_set(v___f_5470_, 3, v___x_5469_);
v___x_5471_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5472_ = lean_array_push(v___x_5471_, v___x_5453_);
v___x_5473_ = lean_unsigned_to_nat(0u);
v___x_5474_ = 0;
v___x_5479_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5465_, v___x_5472_);
if (lean_obj_tag(v___x_5479_) == 0)
{
lean_object* v_a_5480_; lean_object* v___x_5482_; 
v_a_5480_ = lean_ctor_get(v___x_5479_, 0);
lean_inc(v_a_5480_);
lean_dec_ref_known(v___x_5479_, 1);
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 0, v_a_5480_);
v___x_5482_ = v___x_5467_;
goto v_reusejp_5481_;
}
else
{
lean_object* v_reuseFailAlloc_5483_; 
v_reuseFailAlloc_5483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5483_, 0, v_a_5480_);
v___x_5482_ = v_reuseFailAlloc_5483_;
goto v_reusejp_5481_;
}
v_reusejp_5481_:
{
v_val_5476_ = v___x_5482_;
goto v___jp_5475_;
}
}
else
{
lean_object* v_a_5484_; lean_object* v___x_5486_; 
v_a_5484_ = lean_ctor_get(v___x_5479_, 0);
lean_inc(v_a_5484_);
lean_dec_ref_known(v___x_5479_, 1);
if (v_isShared_5468_ == 0)
{
lean_ctor_set_tag(v___x_5467_, 0);
lean_ctor_set(v___x_5467_, 0, v_a_5484_);
v___x_5486_ = v___x_5467_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v_a_5484_);
v___x_5486_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
v_val_5476_ = v___x_5486_;
goto v___jp_5475_;
}
}
v___jp_5475_:
{
lean_object* v___x_5477_; lean_object* v___x_5478_; 
v___x_5477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5477_, 0, v_val_5476_);
v___x_5478_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5473_, v___x_5474_, v___x_5477_, v___f_5470_);
return v___x_5478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5489_, lean_object* v___x_5490_, lean_object* v_x_5491_, lean_object* v___y_5492_){
_start:
{
lean_object* v_res_5493_; 
v_res_5493_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5489_, v___x_5490_, v_x_5491_);
return v_res_5493_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5495_; uint8_t v___x_5496_; uint64_t v___x_5497_; 
v___x_5495_ = 0ULL;
v___x_5496_ = 0;
v___x_5497_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5496_, v___x_5495_);
return v___x_5497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5498_, lean_object* v_args_5499_, lean_object* v_this_5500_){
_start:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; uint32_t v___x_5505_; uint64_t v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; 
v___x_5502_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5503_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5503_, 0, v_f_5498_);
lean_ctor_set(v___x_5503_, 1, v___x_5502_);
v___x_5504_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5505_ = 205;
v___x_5506_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5507_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5507_, 0, v_args_5499_);
v___x_5508_ = lean_unsigned_to_nat(3u);
v___x_5509_ = lean_mk_empty_array_with_capacity(v___x_5508_);
v___x_5510_ = lean_array_push(v___x_5509_, v___x_5503_);
v___x_5511_ = lean_array_push(v___x_5510_, v_this_5500_);
v___x_5512_ = lean_array_push(v___x_5511_, v___x_5507_);
v___x_5513_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5513_, 0, v___x_5512_);
v___x_5514_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5504_, v___x_5505_, v___x_5506_, v___x_5513_, v___x_5502_);
return v___x_5514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5515_, lean_object* v_args_5516_, lean_object* v_this_5517_, lean_object* v___y_5518_){
_start:
{
lean_object* v_res_5519_; 
v_res_5519_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5515_, v_args_5516_, v_this_5517_);
return v_res_5519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5530_, lean_object* v_a_5531_, lean_object* v_x_5532_){
_start:
{
if (lean_obj_tag(v_x_5532_) == 0)
{
lean_object* v_a_5534_; lean_object* v___x_5536_; uint8_t v_isShared_5537_; uint8_t v_isSharedCheck_5542_; 
lean_dec(v_a_5531_);
lean_dec_ref(v_req_5530_);
v_a_5534_ = lean_ctor_get(v_x_5532_, 0);
v_isSharedCheck_5542_ = !lean_is_exclusive(v_x_5532_);
if (v_isSharedCheck_5542_ == 0)
{
v___x_5536_ = v_x_5532_;
v_isShared_5537_ = v_isSharedCheck_5542_;
goto v_resetjp_5535_;
}
else
{
lean_inc(v_a_5534_);
lean_dec(v_x_5532_);
v___x_5536_ = lean_box(0);
v_isShared_5537_ = v_isSharedCheck_5542_;
goto v_resetjp_5535_;
}
v_resetjp_5535_:
{
lean_object* v___x_5539_; 
if (v_isShared_5537_ == 0)
{
v___x_5539_ = v___x_5536_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_a_5534_);
v___x_5539_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
lean_object* v___x_5540_; 
v___x_5540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5540_, 0, v___x_5539_);
return v___x_5540_;
}
}
}
else
{
lean_object* v_a_5543_; lean_object* v_method_5544_; lean_object* v_url_5545_; lean_object* v_headers_5546_; lean_object* v_body_5547_; lean_object* v___y_5549_; lean_object* v___x_5579_; uint8_t v___x_5580_; 
v_a_5543_ = lean_ctor_get(v_x_5532_, 0);
lean_inc(v_a_5543_);
lean_dec_ref_known(v_x_5532_, 1);
v_method_5544_ = lean_ctor_get(v_req_5530_, 0);
lean_inc_ref(v_method_5544_);
v_url_5545_ = lean_ctor_get(v_req_5530_, 1);
lean_inc_ref(v_url_5545_);
v_headers_5546_ = lean_ctor_get(v_req_5530_, 2);
lean_inc_ref(v_headers_5546_);
v_body_5547_ = lean_ctor_get(v_req_5530_, 3);
lean_inc_ref(v_body_5547_);
lean_dec_ref(v_req_5530_);
v___x_5579_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5580_ = lean_string_dec_eq(v_method_5544_, v___x_5579_);
if (v___x_5580_ == 0)
{
lean_object* v___x_5581_; uint8_t v___x_5582_; 
v___x_5581_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5582_ = lean_string_dec_eq(v_method_5544_, v___x_5581_);
if (v___x_5582_ == 0)
{
lean_object* v___x_5583_; 
v___x_5583_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5583_, 0, v_body_5547_);
v___y_5549_ = v___x_5583_;
goto v___jp_5548_;
}
else
{
lean_dec_ref(v_body_5547_);
goto v___jp_5577_;
}
}
else
{
lean_dec_ref(v_body_5547_);
goto v___jp_5577_;
}
v___jp_5548_:
{
lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___f_5554_; size_t v_sz_5555_; size_t v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; uint8_t v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; 
v___x_5550_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5551_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5551_, 0, v_method_5544_);
v___x_5552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5552_, 0, v___x_5550_);
lean_ctor_set(v___x_5552_, 1, v___x_5551_);
v___x_5553_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5554_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5554_, 0, v_a_5531_);
lean_closure_set(v___f_5554_, 1, v___x_5553_);
v_sz_5555_ = lean_array_size(v_headers_5546_);
v___x_5556_ = ((size_t)0ULL);
v___x_5557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5555_, v___x_5556_, v_headers_5546_);
v___x_5558_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5557_);
v___x_5559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5559_, 0, v___x_5553_);
lean_ctor_set(v___x_5559_, 1, v___x_5558_);
v___x_5560_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5561_, 0, v___x_5560_);
lean_ctor_set(v___x_5561_, 1, v___y_5549_);
v___x_5562_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5563_, 0, v___x_5561_);
lean_ctor_set(v___x_5563_, 1, v___x_5562_);
v___x_5564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5564_, 0, v___x_5559_);
lean_ctor_set(v___x_5564_, 1, v___x_5563_);
v___x_5565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5565_, 0, v___x_5552_);
lean_ctor_set(v___x_5565_, 1, v___x_5564_);
v___x_5566_ = l_Lasm_JS_obj(v___x_5565_);
v___x_5567_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5567_, 0, v_url_5545_);
v___x_5568_ = lean_unsigned_to_nat(2u);
v___x_5569_ = lean_mk_empty_array_with_capacity(v___x_5568_);
v___x_5570_ = lean_array_push(v___x_5569_, v___x_5567_);
v___x_5571_ = lean_array_push(v___x_5570_, v___x_5566_);
v___x_5572_ = lean_box(0);
v___x_5573_ = lean_unsigned_to_nat(0u);
v___x_5574_ = 0;
v___x_5575_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5543_, v___x_5571_, v___x_5572_);
v___x_5576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5573_, v___x_5574_, v___x_5575_, v___f_5554_);
return v___x_5576_;
}
v___jp_5577_:
{
lean_object* v___x_5578_; 
v___x_5578_ = lean_box(0);
v___y_5549_ = v___x_5578_;
goto v___jp_5548_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5584_, lean_object* v_a_5585_, lean_object* v_x_5586_, lean_object* v___y_5587_){
_start:
{
lean_object* v_res_5588_; 
v_res_5588_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5584_, v_a_5585_, v_x_5586_);
return v_res_5588_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5590_, lean_object* v_x_5591_){
_start:
{
if (lean_obj_tag(v_x_5591_) == 0)
{
lean_object* v_a_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5601_; 
lean_dec_ref(v_req_5590_);
v_a_5593_ = lean_ctor_get(v_x_5591_, 0);
v_isSharedCheck_5601_ = !lean_is_exclusive(v_x_5591_);
if (v_isSharedCheck_5601_ == 0)
{
v___x_5595_ = v_x_5591_;
v_isShared_5596_ = v_isSharedCheck_5601_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_a_5593_);
lean_dec(v_x_5591_);
v___x_5595_ = lean_box(0);
v_isShared_5596_ = v_isSharedCheck_5601_;
goto v_resetjp_5594_;
}
v_resetjp_5594_:
{
lean_object* v___x_5598_; 
if (v_isShared_5596_ == 0)
{
v___x_5598_ = v___x_5595_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v_a_5593_);
v___x_5598_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
lean_object* v___x_5599_; 
v___x_5599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5599_, 0, v___x_5598_);
return v___x_5599_;
}
}
}
else
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5623_; 
v_a_5602_ = lean_ctor_get(v_x_5591_, 0);
v_isSharedCheck_5623_ = !lean_is_exclusive(v_x_5591_);
if (v_isSharedCheck_5623_ == 0)
{
v___x_5604_ = v_x_5591_;
v_isShared_5605_ = v_isSharedCheck_5623_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v_x_5591_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5623_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___f_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; uint8_t v___x_5609_; lean_object* v_val_5611_; lean_object* v___x_5614_; 
lean_inc(v_a_5602_);
v___f_5606_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5606_, 0, v_req_5590_);
lean_closure_set(v___f_5606_, 1, v_a_5602_);
v___x_5607_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5608_ = lean_unsigned_to_nat(0u);
v___x_5609_ = 0;
v___x_5614_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5602_, v___x_5607_);
if (lean_obj_tag(v___x_5614_) == 0)
{
lean_object* v_a_5615_; lean_object* v___x_5617_; 
v_a_5615_ = lean_ctor_get(v___x_5614_, 0);
lean_inc(v_a_5615_);
lean_dec_ref_known(v___x_5614_, 1);
if (v_isShared_5605_ == 0)
{
lean_ctor_set(v___x_5604_, 0, v_a_5615_);
v___x_5617_ = v___x_5604_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v_a_5615_);
v___x_5617_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
v_val_5611_ = v___x_5617_;
goto v___jp_5610_;
}
}
else
{
lean_object* v_a_5619_; lean_object* v___x_5621_; 
v_a_5619_ = lean_ctor_get(v___x_5614_, 0);
lean_inc(v_a_5619_);
lean_dec_ref_known(v___x_5614_, 1);
if (v_isShared_5605_ == 0)
{
lean_ctor_set_tag(v___x_5604_, 0);
lean_ctor_set(v___x_5604_, 0, v_a_5619_);
v___x_5621_ = v___x_5604_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5622_; 
v_reuseFailAlloc_5622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5622_, 0, v_a_5619_);
v___x_5621_ = v_reuseFailAlloc_5622_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
v_val_5611_ = v___x_5621_;
goto v___jp_5610_;
}
}
v___jp_5610_:
{
lean_object* v___x_5612_; lean_object* v___x_5613_; 
v___x_5612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5612_, 0, v_val_5611_);
v___x_5613_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5608_, v___x_5609_, v___x_5612_, v___f_5606_);
return v___x_5613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5624_, lean_object* v_x_5625_, lean_object* v___y_5626_){
_start:
{
lean_object* v_res_5627_; 
v_res_5627_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5624_, v_x_5625_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5628_){
_start:
{
lean_object* v___f_5630_; lean_object* v___x_5631_; uint8_t v___x_5632_; lean_object* v_val_5634_; lean_object* v___x_5637_; 
v___f_5630_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5630_, 0, v_req_5628_);
v___x_5631_ = lean_unsigned_to_nat(0u);
v___x_5632_ = 0;
v___x_5637_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5637_) == 0)
{
lean_object* v_a_5638_; lean_object* v___x_5640_; uint8_t v_isShared_5641_; uint8_t v_isSharedCheck_5645_; 
v_a_5638_ = lean_ctor_get(v___x_5637_, 0);
v_isSharedCheck_5645_ = !lean_is_exclusive(v___x_5637_);
if (v_isSharedCheck_5645_ == 0)
{
v___x_5640_ = v___x_5637_;
v_isShared_5641_ = v_isSharedCheck_5645_;
goto v_resetjp_5639_;
}
else
{
lean_inc(v_a_5638_);
lean_dec(v___x_5637_);
v___x_5640_ = lean_box(0);
v_isShared_5641_ = v_isSharedCheck_5645_;
goto v_resetjp_5639_;
}
v_resetjp_5639_:
{
lean_object* v___x_5643_; 
if (v_isShared_5641_ == 0)
{
lean_ctor_set_tag(v___x_5640_, 1);
v___x_5643_ = v___x_5640_;
goto v_reusejp_5642_;
}
else
{
lean_object* v_reuseFailAlloc_5644_; 
v_reuseFailAlloc_5644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5644_, 0, v_a_5638_);
v___x_5643_ = v_reuseFailAlloc_5644_;
goto v_reusejp_5642_;
}
v_reusejp_5642_:
{
v_val_5634_ = v___x_5643_;
goto v___jp_5633_;
}
}
}
else
{
lean_object* v_a_5646_; lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5653_; 
v_a_5646_ = lean_ctor_get(v___x_5637_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5637_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5648_ = v___x_5637_;
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
else
{
lean_inc(v_a_5646_);
lean_dec(v___x_5637_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
lean_object* v___x_5651_; 
if (v_isShared_5649_ == 0)
{
lean_ctor_set_tag(v___x_5648_, 0);
v___x_5651_ = v___x_5648_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_a_5646_);
v___x_5651_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
v_val_5634_ = v___x_5651_;
goto v___jp_5633_;
}
}
}
v___jp_5633_:
{
lean_object* v___x_5635_; lean_object* v___x_5636_; 
v___x_5635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5635_, 0, v_val_5634_);
v___x_5636_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5631_, v___x_5632_, v___x_5635_, v___f_5630_);
return v___x_5636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5654_, lean_object* v_a_5655_){
_start:
{
lean_object* v_res_5656_; 
v_res_5656_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5654_);
return v_res_5656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5657_){
_start:
{
if (lean_obj_tag(v_x_5657_) == 0)
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5667_; 
v_a_5659_ = lean_ctor_get(v_x_5657_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v_x_5657_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5661_ = v_x_5657_;
v_isShared_5662_ = v_isSharedCheck_5667_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v_x_5657_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5667_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
lean_object* v___x_5665_; 
v___x_5665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5665_, 0, v___x_5664_);
return v___x_5665_;
}
}
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5669_; 
v_a_5668_ = lean_ctor_get(v_x_5657_, 0);
lean_inc(v_a_5668_);
lean_dec_ref_known(v_x_5657_, 1);
v___x_5669_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5668_);
lean_dec(v_a_5668_);
if (lean_obj_tag(v___x_5669_) == 0)
{
lean_object* v_a_5670_; lean_object* v___x_5672_; uint8_t v_isShared_5673_; uint8_t v_isSharedCheck_5679_; 
v_a_5670_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5679_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5679_ == 0)
{
v___x_5672_ = v___x_5669_;
v_isShared_5673_ = v_isSharedCheck_5679_;
goto v_resetjp_5671_;
}
else
{
lean_inc(v_a_5670_);
lean_dec(v___x_5669_);
v___x_5672_ = lean_box(0);
v_isShared_5673_ = v_isSharedCheck_5679_;
goto v_resetjp_5671_;
}
v_resetjp_5671_:
{
lean_object* v___x_5674_; lean_object* v___x_5676_; 
v___x_5674_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5674_, 0, v_a_5670_);
if (v_isShared_5673_ == 0)
{
lean_ctor_set(v___x_5672_, 0, v___x_5674_);
v___x_5676_ = v___x_5672_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v___x_5674_);
v___x_5676_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
lean_object* v___x_5677_; 
v___x_5677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5677_, 0, v___x_5676_);
return v___x_5677_;
}
}
}
else
{
lean_object* v_a_5680_; lean_object* v___x_5682_; uint8_t v_isShared_5683_; uint8_t v_isSharedCheck_5688_; 
v_a_5680_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5688_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5688_ == 0)
{
v___x_5682_ = v___x_5669_;
v_isShared_5683_ = v_isSharedCheck_5688_;
goto v_resetjp_5681_;
}
else
{
lean_inc(v_a_5680_);
lean_dec(v___x_5669_);
v___x_5682_ = lean_box(0);
v_isShared_5683_ = v_isSharedCheck_5688_;
goto v_resetjp_5681_;
}
v_resetjp_5681_:
{
lean_object* v___x_5685_; 
if (v_isShared_5683_ == 0)
{
v___x_5685_ = v___x_5682_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v_a_5680_);
v___x_5685_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
lean_object* v___x_5686_; 
v___x_5686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5686_, 0, v___x_5685_);
return v___x_5686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5689_, lean_object* v___y_5690_){
_start:
{
lean_object* v_res_5691_; 
v_res_5691_ = l_Lasm_Fetch_fetch___lam__0(v_x_5689_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5697_){
_start:
{
if (lean_obj_tag(v_x_5697_) == 0)
{
lean_object* v___x_5698_; 
v___x_5698_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5698_;
}
else
{
lean_object* v_val_5699_; 
v_val_5699_ = lean_ctor_get(v_x_5697_, 0);
lean_inc(v_val_5699_);
return v_val_5699_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5700_){
_start:
{
lean_object* v_res_5701_; 
v_res_5701_ = l_Lasm_Fetch_fetch___lam__1(v_x_5700_);
lean_dec(v_x_5700_);
return v_res_5701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5702_, lean_object* v___f_5703_, uint8_t v___x_5704_, lean_object* v___f_5705_, lean_object* v_x_5706_){
_start:
{
if (lean_obj_tag(v_x_5706_) == 0)
{
lean_object* v_a_5708_; lean_object* v___x_5710_; uint8_t v_isShared_5711_; uint8_t v_isSharedCheck_5716_; 
lean_dec_ref(v___f_5705_);
lean_dec_ref(v___f_5703_);
v_a_5708_ = lean_ctor_get(v_x_5706_, 0);
v_isSharedCheck_5716_ = !lean_is_exclusive(v_x_5706_);
if (v_isSharedCheck_5716_ == 0)
{
v___x_5710_ = v_x_5706_;
v_isShared_5711_ = v_isSharedCheck_5716_;
goto v_resetjp_5709_;
}
else
{
lean_inc(v_a_5708_);
lean_dec(v_x_5706_);
v___x_5710_ = lean_box(0);
v_isShared_5711_ = v_isSharedCheck_5716_;
goto v_resetjp_5709_;
}
v_resetjp_5709_:
{
lean_object* v___x_5713_; 
if (v_isShared_5711_ == 0)
{
v___x_5713_ = v___x_5710_;
goto v_reusejp_5712_;
}
else
{
lean_object* v_reuseFailAlloc_5715_; 
v_reuseFailAlloc_5715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5715_, 0, v_a_5708_);
v___x_5713_ = v_reuseFailAlloc_5715_;
goto v_reusejp_5712_;
}
v_reusejp_5712_:
{
lean_object* v___x_5714_; 
v___x_5714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
return v___x_5714_;
}
}
}
else
{
lean_object* v___x_5717_; lean_object* v___x_5718_; uint8_t v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; 
lean_dec_ref_known(v_x_5706_, 1);
v___x_5717_ = lean_io_promise_result_opt(v_a_5702_);
v___x_5718_ = lean_unsigned_to_nat(0u);
v___x_5719_ = 1;
v___x_5720_ = lean_task_map(v___f_5703_, v___x_5717_, v___x_5718_, v___x_5719_);
v___x_5721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5720_);
v___x_5722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5718_, v___x_5704_, v___x_5721_, v___f_5705_);
return v___x_5722_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5723_, lean_object* v___f_5724_, lean_object* v___x_5725_, lean_object* v___f_5726_, lean_object* v_x_5727_, lean_object* v___y_5728_){
_start:
{
uint8_t v___x_1064__boxed_5729_; lean_object* v_res_5730_; 
v___x_1064__boxed_5729_ = lean_unbox(v___x_5725_);
v_res_5730_ = l_Lasm_Fetch_fetch___lam__2(v_a_5723_, v___f_5724_, v___x_1064__boxed_5729_, v___f_5726_, v_x_5727_);
lean_dec(v_a_5723_);
return v_res_5730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5731_, lean_object* v___f_5732_, uint8_t v___x_5733_, lean_object* v___f_5734_, lean_object* v_options_5735_, lean_object* v_x_5736_){
_start:
{
if (lean_obj_tag(v_x_5736_) == 0)
{
lean_object* v_a_5738_; lean_object* v___x_5740_; uint8_t v_isShared_5741_; uint8_t v_isSharedCheck_5746_; 
lean_dec_ref(v___f_5734_);
lean_dec_ref(v___f_5732_);
v_a_5738_ = lean_ctor_get(v_x_5736_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v_x_5736_);
if (v_isSharedCheck_5746_ == 0)
{
v___x_5740_ = v_x_5736_;
v_isShared_5741_ = v_isSharedCheck_5746_;
goto v_resetjp_5739_;
}
else
{
lean_inc(v_a_5738_);
lean_dec(v_x_5736_);
v___x_5740_ = lean_box(0);
v_isShared_5741_ = v_isSharedCheck_5746_;
goto v_resetjp_5739_;
}
v_resetjp_5739_:
{
lean_object* v___x_5743_; 
if (v_isShared_5741_ == 0)
{
v___x_5743_ = v___x_5740_;
goto v_reusejp_5742_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_a_5738_);
v___x_5743_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5742_;
}
v_reusejp_5742_:
{
lean_object* v___x_5744_; 
v___x_5744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5744_, 0, v___x_5743_);
return v___x_5744_;
}
}
}
else
{
lean_object* v_a_5747_; lean_object* v___x_5749_; uint8_t v_isShared_5750_; uint8_t v_isSharedCheck_5777_; 
v_a_5747_ = lean_ctor_get(v_x_5736_, 0);
v_isSharedCheck_5777_ = !lean_is_exclusive(v_x_5736_);
if (v_isSharedCheck_5777_ == 0)
{
v___x_5749_ = v_x_5736_;
v_isShared_5750_ = v_isSharedCheck_5777_;
goto v_resetjp_5748_;
}
else
{
lean_inc(v_a_5747_);
lean_dec(v_x_5736_);
v___x_5749_ = lean_box(0);
v_isShared_5750_ = v_isSharedCheck_5777_;
goto v_resetjp_5748_;
}
v_resetjp_5748_:
{
lean_object* v_method_5751_; lean_object* v_url_5752_; lean_object* v_headers_5753_; lean_object* v_body_5754_; lean_object* v___x_5755_; lean_object* v___f_5756_; lean_object* v___y_5758_; uint8_t v___y_5759_; lean_object* v_val_5760_; lean_object* v___y_5764_; 
v_method_5751_ = lean_ctor_get(v_req_5731_, 0);
v_url_5752_ = lean_ctor_get(v_req_5731_, 1);
v_headers_5753_ = lean_ctor_get(v_req_5731_, 2);
v_body_5754_ = lean_ctor_get(v_req_5731_, 3);
v___x_5755_ = lean_box(v___x_5733_);
lean_inc(v_a_5747_);
v___f_5756_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5756_, 0, v_a_5747_);
lean_closure_set(v___f_5756_, 1, v___f_5732_);
lean_closure_set(v___f_5756_, 2, v___x_5755_);
lean_closure_set(v___f_5756_, 3, v___f_5734_);
if (lean_obj_tag(v_options_5735_) == 0)
{
lean_object* v___x_5775_; 
v___x_5775_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5764_ = v___x_5775_;
goto v___jp_5763_;
}
else
{
lean_object* v_val_5776_; 
v_val_5776_ = lean_ctor_get(v_options_5735_, 0);
v___y_5764_ = v_val_5776_;
goto v___jp_5763_;
}
v___jp_5757_:
{
lean_object* v___x_5761_; lean_object* v___x_5762_; 
v___x_5761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5761_, 0, v_val_5760_);
v___x_5762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5758_, v___y_5759_, v___x_5761_, v___f_5756_);
return v___x_5762_;
}
v___jp_5763_:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5765_ = lean_unsigned_to_nat(0u);
v___x_5766_ = lasm_fetch_send(v_a_5747_, v_method_5751_, v_url_5752_, v_headers_5753_, v_body_5754_, v___y_5764_);
lean_dec(v_a_5747_);
if (lean_obj_tag(v___x_5766_) == 0)
{
lean_object* v_a_5767_; lean_object* v___x_5769_; 
v_a_5767_ = lean_ctor_get(v___x_5766_, 0);
lean_inc(v_a_5767_);
lean_dec_ref_known(v___x_5766_, 1);
if (v_isShared_5750_ == 0)
{
lean_ctor_set(v___x_5749_, 0, v_a_5767_);
v___x_5769_ = v___x_5749_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5770_; 
v_reuseFailAlloc_5770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5770_, 0, v_a_5767_);
v___x_5769_ = v_reuseFailAlloc_5770_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
v___y_5758_ = v___x_5765_;
v___y_5759_ = v___x_5733_;
v_val_5760_ = v___x_5769_;
goto v___jp_5757_;
}
}
else
{
lean_object* v_a_5771_; lean_object* v___x_5773_; 
v_a_5771_ = lean_ctor_get(v___x_5766_, 0);
lean_inc(v_a_5771_);
lean_dec_ref_known(v___x_5766_, 1);
if (v_isShared_5750_ == 0)
{
lean_ctor_set_tag(v___x_5749_, 0);
lean_ctor_set(v___x_5749_, 0, v_a_5771_);
v___x_5773_ = v___x_5749_;
goto v_reusejp_5772_;
}
else
{
lean_object* v_reuseFailAlloc_5774_; 
v_reuseFailAlloc_5774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5774_, 0, v_a_5771_);
v___x_5773_ = v_reuseFailAlloc_5774_;
goto v_reusejp_5772_;
}
v_reusejp_5772_:
{
v___y_5758_ = v___x_5765_;
v___y_5759_ = v___x_5733_;
v_val_5760_ = v___x_5773_;
goto v___jp_5757_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5778_, lean_object* v___f_5779_, lean_object* v___x_5780_, lean_object* v___f_5781_, lean_object* v_options_5782_, lean_object* v_x_5783_, lean_object* v___y_5784_){
_start:
{
uint8_t v___x_1113__boxed_5785_; lean_object* v_res_5786_; 
v___x_1113__boxed_5785_ = lean_unbox(v___x_5780_);
v_res_5786_ = l_Lasm_Fetch_fetch___lam__3(v_req_5778_, v___f_5779_, v___x_1113__boxed_5785_, v___f_5781_, v_options_5782_, v_x_5783_);
lean_dec(v_options_5782_);
lean_dec_ref(v_req_5778_);
return v_res_5786_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5787_; uint32_t v___x_5788_; 
v___x_5787_ = lean_box(0);
v___x_5788_ = lasm_fetch_platform(v___x_5787_);
return v___x_5788_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5789_; uint32_t v___x_5790_; uint8_t v___x_5791_; 
v___x_5789_ = 0;
v___x_5790_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5791_ = lean_uint32_dec_eq(v___x_5790_, v___x_5789_);
return v___x_5791_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5794_; uint32_t v___x_5795_; uint8_t v___x_5796_; 
v___x_5794_ = 2;
v___x_5795_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5796_ = lean_uint32_dec_eq(v___x_5795_, v___x_5794_);
return v___x_5796_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5797_; uint32_t v___x_5798_; uint8_t v___x_5799_; 
v___x_5797_ = 4;
v___x_5798_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5799_ = lean_uint32_dec_eq(v___x_5798_, v___x_5797_);
return v___x_5799_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5800_; uint32_t v___x_5801_; uint8_t v___x_5802_; 
v___x_5800_ = 1;
v___x_5801_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5802_ = lean_uint32_dec_eq(v___x_5801_, v___x_5800_);
return v___x_5802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5817_, lean_object* v_options_5818_){
_start:
{
uint8_t v___x_5820_; 
v___x_5820_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_5820_ == 0)
{
lean_object* v___f_5821_; lean_object* v___f_5822_; lean_object* v___x_5823_; lean_object* v___f_5824_; uint8_t v___x_5831_; 
v___f_5821_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_5822_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_5823_ = lean_box(v___x_5820_);
v___f_5824_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_5824_, 0, v_req_5817_);
lean_closure_set(v___f_5824_, 1, v___f_5822_);
lean_closure_set(v___f_5824_, 2, v___x_5823_);
lean_closure_set(v___f_5824_, 3, v___f_5821_);
lean_closure_set(v___f_5824_, 4, v_options_5818_);
v___x_5831_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_5831_ == 0)
{
uint8_t v___x_5832_; 
v___x_5832_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_5832_ == 0)
{
uint8_t v___x_5833_; 
lean_dec_ref(v___f_5824_);
v___x_5833_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_5833_ == 0)
{
lean_object* v___x_5834_; 
v___x_5834_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_5834_;
}
else
{
lean_object* v___x_5835_; 
v___x_5835_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_5835_;
}
}
else
{
goto v___jp_5825_;
}
}
else
{
goto v___jp_5825_;
}
v___jp_5825_:
{
lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; 
v___x_5826_ = lean_unsigned_to_nat(0u);
v___x_5827_ = lean_io_promise_new();
v___x_5828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5828_, 0, v___x_5827_);
v___x_5829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5829_, 0, v___x_5828_);
v___x_5830_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5826_, v___x_5820_, v___x_5829_, v___f_5824_);
return v___x_5830_;
}
}
else
{
lean_object* v___x_5836_; 
lean_dec(v_options_5818_);
v___x_5836_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5817_);
return v___x_5836_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_5837_, lean_object* v_options_5838_, lean_object* v_a_5839_){
_start:
{
lean_object* v_res_5840_; 
v_res_5840_ = l_Lasm_Fetch_fetch(v_req_5837_, v_options_5838_);
return v_res_5840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_5841_, lean_object* v_headers_5842_, lean_object* v_options_5843_){
_start:
{
lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___f_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; 
v___x_5845_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5846_ = l_ByteArray_empty;
v___f_5847_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5848_, 0, v___x_5845_);
lean_ctor_set(v___x_5848_, 1, v_url_5841_);
lean_ctor_set(v___x_5848_, 2, v_headers_5842_);
lean_ctor_set(v___x_5848_, 3, v___x_5846_);
lean_ctor_set(v___x_5848_, 4, v___f_5847_);
v___x_5849_ = l_Lasm_Fetch_fetch(v___x_5848_, v_options_5843_);
return v___x_5849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_5850_, lean_object* v_headers_5851_, lean_object* v_options_5852_, lean_object* v_a_5853_){
_start:
{
lean_object* v_res_5854_; 
v_res_5854_ = l_Lasm_Fetch_get(v_url_5850_, v_headers_5851_, v_options_5852_);
return v_res_5854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_5856_, lean_object* v_body_5857_, lean_object* v_contentType_5858_, lean_object* v_headers_5859_, lean_object* v_options_5860_){
_start:
{
lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___f_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; 
v___x_5862_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_5863_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_5864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5864_, 0, v___x_5863_);
lean_ctor_set(v___x_5864_, 1, v_contentType_5858_);
v___x_5865_ = lean_unsigned_to_nat(1u);
v___x_5866_ = lean_mk_empty_array_with_capacity(v___x_5865_);
v___x_5867_ = lean_array_push(v___x_5866_, v___x_5864_);
v___x_5868_ = l_Array_append___redArg(v___x_5867_, v_headers_5859_);
v___f_5869_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5870_, 0, v___x_5862_);
lean_ctor_set(v___x_5870_, 1, v_url_5856_);
lean_ctor_set(v___x_5870_, 2, v___x_5868_);
lean_ctor_set(v___x_5870_, 3, v_body_5857_);
lean_ctor_set(v___x_5870_, 4, v___f_5869_);
v___x_5871_ = l_Lasm_Fetch_fetch(v___x_5870_, v_options_5860_);
return v___x_5871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_5872_, lean_object* v_body_5873_, lean_object* v_contentType_5874_, lean_object* v_headers_5875_, lean_object* v_options_5876_, lean_object* v_a_5877_){
_start:
{
lean_object* v_res_5878_; 
v_res_5878_ = l_Lasm_Fetch_post(v_url_5872_, v_body_5873_, v_contentType_5874_, v_headers_5875_, v_options_5876_);
lean_dec_ref(v_headers_5875_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_5879_){
_start:
{
lean_object* v_body_5880_; uint8_t v___x_5881_; 
v_body_5880_ = lean_ctor_get(v_r_5879_, 1);
lean_inc_ref(v_body_5880_);
lean_dec_ref(v_r_5879_);
v___x_5881_ = lean_string_validate_utf8(v_body_5880_);
if (v___x_5881_ == 0)
{
lean_object* v___x_5882_; 
lean_dec_ref(v_body_5880_);
v___x_5882_ = lean_box(0);
return v___x_5882_;
}
else
{
lean_object* v___x_5883_; lean_object* v___x_5884_; 
v___x_5883_ = lean_string_from_utf8_unchecked(v_body_5880_);
v___x_5884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5884_, 0, v___x_5883_);
return v___x_5884_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_5885_, lean_object* v_name_5886_){
_start:
{
lean_object* v_headers_5887_; lean_object* v_n_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; size_t v_sz_5891_; size_t v___x_5892_; lean_object* v___x_5893_; lean_object* v_fst_5894_; 
v_headers_5887_ = lean_ctor_get(v_r_5885_, 0);
v_n_5888_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_5886_);
v___x_5889_ = lean_box(0);
v___x_5890_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5891_ = lean_array_size(v_headers_5887_);
v___x_5892_ = ((size_t)0ULL);
v___x_5893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_5888_, v_headers_5887_, v_sz_5891_, v___x_5892_, v___x_5890_);
lean_dec_ref(v_n_5888_);
v_fst_5894_ = lean_ctor_get(v___x_5893_, 0);
lean_inc(v_fst_5894_);
lean_dec_ref(v___x_5893_);
if (lean_obj_tag(v_fst_5894_) == 0)
{
return v___x_5889_;
}
else
{
lean_object* v_val_5895_; 
v_val_5895_ = lean_ctor_get(v_fst_5894_, 0);
lean_inc(v_val_5895_);
lean_dec_ref_known(v_fst_5894_, 1);
if (lean_obj_tag(v_val_5895_) == 0)
{
return v___x_5889_;
}
else
{
lean_object* v_val_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5904_; 
v_val_5896_ = lean_ctor_get(v_val_5895_, 0);
v_isSharedCheck_5904_ = !lean_is_exclusive(v_val_5895_);
if (v_isSharedCheck_5904_ == 0)
{
v___x_5898_ = v_val_5895_;
v_isShared_5899_ = v_isSharedCheck_5904_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_val_5896_);
lean_dec(v_val_5895_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5904_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
lean_object* v_snd_5900_; lean_object* v___x_5902_; 
v_snd_5900_ = lean_ctor_get(v_val_5896_, 1);
lean_inc(v_snd_5900_);
lean_dec(v_val_5896_);
if (v_isShared_5899_ == 0)
{
lean_ctor_set(v___x_5898_, 0, v_snd_5900_);
v___x_5902_ = v___x_5898_;
goto v_reusejp_5901_;
}
else
{
lean_object* v_reuseFailAlloc_5903_; 
v_reuseFailAlloc_5903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5903_, 0, v_snd_5900_);
v___x_5902_ = v_reuseFailAlloc_5903_;
goto v_reusejp_5901_;
}
v_reusejp_5901_:
{
return v___x_5902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_5905_, lean_object* v_name_5906_){
_start:
{
lean_object* v_res_5907_; 
v_res_5907_ = l_Lasm_Fetch_Response_header_x3f(v_r_5905_, v_name_5906_);
lean_dec_ref(v_r_5905_);
return v_res_5907_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_5908_){
_start:
{
if (lean_obj_tag(v_x_5908_) == 0)
{
lean_object* v_a_5909_; lean_object* v___x_5910_; 
v_a_5909_ = lean_ctor_get(v_x_5908_, 0);
lean_inc(v_a_5909_);
lean_dec_ref_known(v_x_5908_, 1);
v___x_5910_ = lean_task_pure(v_a_5909_);
return v___x_5910_;
}
else
{
lean_object* v_a_5911_; 
v_a_5911_ = lean_ctor_get(v_x_5908_, 0);
lean_inc_ref(v_a_5911_);
lean_dec_ref_known(v_x_5908_, 1);
return v_a_5911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_5912_){
_start:
{
if (lean_obj_tag(v_x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5914_; 
v_a_5913_ = lean_ctor_get(v_x_5912_, 0);
lean_inc(v_a_5913_);
lean_dec_ref_known(v_x_5912_, 1);
v___x_5914_ = lean_task_pure(v_a_5913_);
return v___x_5914_;
}
else
{
lean_object* v_a_5915_; 
v_a_5915_ = lean_ctor_get(v_x_5912_, 0);
lean_inc_ref(v_a_5915_);
lean_dec_ref_known(v_x_5912_, 1);
return v_a_5915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_5916_){
_start:
{
lean_object* v_val_5919_; lean_object* v___x_5921_; 
v___x_5921_ = lasm_fetch_write(v_chunk_5916_);
if (lean_obj_tag(v___x_5921_) == 0)
{
lean_object* v_a_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5929_; 
v_a_5922_ = lean_ctor_get(v___x_5921_, 0);
v_isSharedCheck_5929_ = !lean_is_exclusive(v___x_5921_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5924_ = v___x_5921_;
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_a_5922_);
lean_dec(v___x_5921_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5927_; 
if (v_isShared_5925_ == 0)
{
lean_ctor_set_tag(v___x_5924_, 1);
v___x_5927_ = v___x_5924_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v_a_5922_);
v___x_5927_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
v_val_5919_ = v___x_5927_;
goto v___jp_5918_;
}
}
}
else
{
lean_object* v_a_5930_; lean_object* v___x_5932_; uint8_t v_isShared_5933_; uint8_t v_isSharedCheck_5937_; 
v_a_5930_ = lean_ctor_get(v___x_5921_, 0);
v_isSharedCheck_5937_ = !lean_is_exclusive(v___x_5921_);
if (v_isSharedCheck_5937_ == 0)
{
v___x_5932_ = v___x_5921_;
v_isShared_5933_ = v_isSharedCheck_5937_;
goto v_resetjp_5931_;
}
else
{
lean_inc(v_a_5930_);
lean_dec(v___x_5921_);
v___x_5932_ = lean_box(0);
v_isShared_5933_ = v_isSharedCheck_5937_;
goto v_resetjp_5931_;
}
v_resetjp_5931_:
{
lean_object* v___x_5935_; 
if (v_isShared_5933_ == 0)
{
lean_ctor_set_tag(v___x_5932_, 0);
v___x_5935_ = v___x_5932_;
goto v_reusejp_5934_;
}
else
{
lean_object* v_reuseFailAlloc_5936_; 
v_reuseFailAlloc_5936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5936_, 0, v_a_5930_);
v___x_5935_ = v_reuseFailAlloc_5936_;
goto v_reusejp_5934_;
}
v_reusejp_5934_:
{
v_val_5919_ = v___x_5935_;
goto v___jp_5918_;
}
}
}
v___jp_5918_:
{
lean_object* v___x_5920_; 
v___x_5920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5920_, 0, v_val_5919_);
return v___x_5920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_5938_, lean_object* v___y_5939_){
_start:
{
lean_object* v_res_5940_; 
v_res_5940_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_5938_);
lean_dec_ref(v_chunk_5938_);
return v_res_5940_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_5941_){
_start:
{
if (lean_obj_tag(v_x_5941_) == 0)
{
lean_object* v_a_5942_; lean_object* v___x_5943_; 
v_a_5942_ = lean_ctor_get(v_x_5941_, 0);
lean_inc(v_a_5942_);
lean_dec_ref_known(v_x_5941_, 1);
v___x_5943_ = lean_task_pure(v_a_5942_);
return v___x_5943_;
}
else
{
lean_object* v_a_5944_; 
v_a_5944_ = lean_ctor_get(v_x_5941_, 0);
lean_inc_ref(v_a_5944_);
lean_dec_ref_known(v_x_5941_, 1);
return v_a_5944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_5945_){
_start:
{
lean_object* v___y_5948_; 
if (lean_obj_tag(v_x_5945_) == 0)
{
lean_object* v_a_5951_; lean_object* v___x_5953_; uint8_t v_isShared_5954_; uint8_t v_isSharedCheck_5959_; 
v_a_5951_ = lean_ctor_get(v_x_5945_, 0);
v_isSharedCheck_5959_ = !lean_is_exclusive(v_x_5945_);
if (v_isSharedCheck_5959_ == 0)
{
v___x_5953_ = v_x_5945_;
v_isShared_5954_ = v_isSharedCheck_5959_;
goto v_resetjp_5952_;
}
else
{
lean_inc(v_a_5951_);
lean_dec(v_x_5945_);
v___x_5953_ = lean_box(0);
v_isShared_5954_ = v_isSharedCheck_5959_;
goto v_resetjp_5952_;
}
v_resetjp_5952_:
{
lean_object* v___x_5956_; 
if (v_isShared_5954_ == 0)
{
v___x_5956_ = v___x_5953_;
goto v_reusejp_5955_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v_a_5951_);
v___x_5956_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5955_;
}
v_reusejp_5955_:
{
lean_object* v___x_5957_; 
v___x_5957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
return v___x_5957_;
}
}
}
else
{
lean_object* v_a_5960_; uint8_t v___x_5961_; 
v_a_5960_ = lean_ctor_get(v_x_5945_, 0);
lean_inc(v_a_5960_);
lean_dec_ref_known(v_x_5945_, 1);
v___x_5961_ = l_ByteArray_isEmpty(v_a_5960_);
if (v___x_5961_ == 0)
{
lean_object* v___x_5962_; 
v___x_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5962_, 0, v_a_5960_);
v___y_5948_ = v___x_5962_;
goto v___jp_5947_;
}
else
{
lean_object* v___x_5963_; 
lean_dec(v_a_5960_);
v___x_5963_ = lean_box(0);
v___y_5948_ = v___x_5963_;
goto v___jp_5947_;
}
}
v___jp_5947_:
{
lean_object* v___x_5949_; lean_object* v___x_5950_; 
v___x_5949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5949_, 0, v___y_5948_);
v___x_5950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5950_, 0, v___x_5949_);
return v___x_5950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_5964_, lean_object* v___y_5965_){
_start:
{
lean_object* v_res_5966_; 
v_res_5966_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_5964_);
return v_res_5966_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_5967_, uint32_t v___x_5968_){
_start:
{
lean_object* v___x_5970_; uint8_t v___x_5971_; lean_object* v_val_5973_; lean_object* v___x_5976_; 
v___x_5970_ = lean_unsigned_to_nat(0u);
v___x_5971_ = 0;
v___x_5976_ = lasm_fetch_read(v___x_5968_);
if (lean_obj_tag(v___x_5976_) == 0)
{
lean_object* v_a_5977_; lean_object* v___x_5979_; uint8_t v_isShared_5980_; uint8_t v_isSharedCheck_5984_; 
v_a_5977_ = lean_ctor_get(v___x_5976_, 0);
v_isSharedCheck_5984_ = !lean_is_exclusive(v___x_5976_);
if (v_isSharedCheck_5984_ == 0)
{
v___x_5979_ = v___x_5976_;
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
else
{
lean_inc(v_a_5977_);
lean_dec(v___x_5976_);
v___x_5979_ = lean_box(0);
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
v_resetjp_5978_:
{
lean_object* v___x_5982_; 
if (v_isShared_5980_ == 0)
{
lean_ctor_set_tag(v___x_5979_, 1);
v___x_5982_ = v___x_5979_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v_a_5977_);
v___x_5982_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
v_val_5973_ = v___x_5982_;
goto v___jp_5972_;
}
}
}
else
{
lean_object* v_a_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_5992_; 
v_a_5985_ = lean_ctor_get(v___x_5976_, 0);
v_isSharedCheck_5992_ = !lean_is_exclusive(v___x_5976_);
if (v_isSharedCheck_5992_ == 0)
{
v___x_5987_ = v___x_5976_;
v_isShared_5988_ = v_isSharedCheck_5992_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_a_5985_);
lean_dec(v___x_5976_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_5992_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
lean_object* v___x_5990_; 
if (v_isShared_5988_ == 0)
{
lean_ctor_set_tag(v___x_5987_, 0);
v___x_5990_ = v___x_5987_;
goto v_reusejp_5989_;
}
else
{
lean_object* v_reuseFailAlloc_5991_; 
v_reuseFailAlloc_5991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5991_, 0, v_a_5985_);
v___x_5990_ = v_reuseFailAlloc_5991_;
goto v_reusejp_5989_;
}
v_reusejp_5989_:
{
v_val_5973_ = v___x_5990_;
goto v___jp_5972_;
}
}
}
v___jp_5972_:
{
lean_object* v___x_5974_; lean_object* v___x_5975_; 
v___x_5974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5974_, 0, v_val_5973_);
v___x_5975_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5970_, v___x_5971_, v___x_5974_, v___f_5967_);
return v___x_5975_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_5993_, lean_object* v___x_5994_, lean_object* v___y_5995_){
_start:
{
uint32_t v___x_2044__boxed_5996_; lean_object* v_res_5997_; 
v___x_2044__boxed_5996_ = lean_unbox_uint32(v___x_5994_);
lean_dec(v___x_5994_);
v_res_5997_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_5993_, v___x_2044__boxed_5996_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_5998_, lean_object* v_req_5999_){
_start:
{
lean_object* v___x_6001_; 
v___x_6001_ = l_Lasm_Fetch_respond(v_handler_5998_, v_req_5999_);
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6002_, lean_object* v_req_6003_, lean_object* v___y_6004_){
_start:
{
lean_object* v_res_6005_; 
v_res_6005_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6002_, v_req_6003_);
return v_res_6005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6006_, lean_object* v___f_6007_){
_start:
{
lean_object* v___x_6009_; 
v___x_6009_ = lean_apply_2(v_val_6006_, v___f_6007_, lean_box(0));
return v___x_6009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6010_, lean_object* v___f_6011_, lean_object* v___y_6012_){
_start:
{
lean_object* v_res_6013_; 
v_res_6013_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6010_, v___f_6011_);
return v_res_6013_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6014_){
_start:
{
lean_object* v___x_6016_; 
v___x_6016_ = l_Lasm_Fetch_Request_readAll(v___x_6014_);
return v___x_6016_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6017_, lean_object* v___y_6018_){
_start:
{
lean_object* v_res_6019_; 
v_res_6019_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6017_);
return v_res_6019_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6025_; lean_object* v___x_6026_; 
v___x_6025_ = 65536;
v___x_6026_ = lean_box_uint32(v___x_6025_);
return v___x_6026_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6027_; lean_object* v___x_6028_; lean_object* v___f_6029_; 
v___f_6027_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6028_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6029_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6029_, 0, v___f_6027_);
lean_closure_set(v___f_6029_, 1, v___x_6028_);
return v___f_6029_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6030_, lean_object* v_options_6031_){
_start:
{
lean_object* v___f_6033_; lean_object* v___f_6034_; lean_object* v___f_6035_; lean_object* v___f_6036_; lean_object* v___x_6037_; 
v___f_6033_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6034_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6035_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6036_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6037_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6037_) == 0)
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6108_; 
v_a_6038_ = lean_ctor_get(v___x_6037_, 0);
v_isSharedCheck_6108_ = !lean_is_exclusive(v___x_6037_);
if (v_isSharedCheck_6108_ == 0)
{
v___x_6040_ = v___x_6037_;
v_isShared_6041_ = v_isSharedCheck_6108_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_6037_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6108_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v_snd_6042_; lean_object* v_fst_6043_; lean_object* v_fst_6044_; lean_object* v_snd_6045_; lean_object* v___f_6046_; lean_object* v___x_6047_; lean_object* v_req_6049_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; uint8_t v___x_6090_; 
v_snd_6042_ = lean_ctor_get(v_a_6038_, 1);
lean_inc(v_snd_6042_);
v_fst_6043_ = lean_ctor_get(v_a_6038_, 0);
lean_inc_n(v_fst_6043_, 2);
lean_dec(v_a_6038_);
v_fst_6044_ = lean_ctor_get(v_snd_6042_, 0);
lean_inc_n(v_fst_6044_, 2);
v_snd_6045_ = lean_ctor_get(v_snd_6042_, 1);
lean_inc_n(v_snd_6045_, 2);
lean_dec(v_snd_6042_);
v___f_6046_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6047_ = l_ByteArray_empty;
v___x_6087_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6087_, 0, v_fst_6043_);
lean_ctor_set(v___x_6087_, 1, v_fst_6044_);
lean_ctor_set(v___x_6087_, 2, v_snd_6045_);
lean_ctor_set(v___x_6087_, 3, v___x_6047_);
lean_ctor_set(v___x_6087_, 4, v___f_6046_);
lean_inc_ref(v___x_6087_);
v___x_6088_ = l_Lasm_Fetch_Request_path(v___x_6087_);
v___x_6089_ = lean_apply_1(v_options_6031_, v___x_6088_);
v___x_6090_ = lean_unbox(v___x_6089_);
if (v___x_6090_ == 0)
{
lean_object* v___f_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; uint8_t v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; 
v___f_6091_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6091_, 0, v___x_6087_);
v___x_6092_ = lean_unsigned_to_nat(0u);
v___x_6093_ = lean_io_as_task(v___f_6091_, v___x_6092_);
v___x_6094_ = 1;
v___x_6095_ = lean_task_bind(v___x_6093_, v___f_6033_, v___x_6092_, v___x_6094_);
v___x_6096_ = lean_task_get_own(v___x_6095_);
if (lean_obj_tag(v___x_6096_) == 0)
{
lean_object* v_a_6097_; lean_object* v___x_6099_; uint8_t v_isShared_6100_; uint8_t v_isSharedCheck_6104_; 
lean_dec(v_snd_6045_);
lean_dec(v_fst_6044_);
lean_dec(v_fst_6043_);
lean_del_object(v___x_6040_);
lean_dec_ref(v_handler_6030_);
v_a_6097_ = lean_ctor_get(v___x_6096_, 0);
v_isSharedCheck_6104_ = !lean_is_exclusive(v___x_6096_);
if (v_isSharedCheck_6104_ == 0)
{
v___x_6099_ = v___x_6096_;
v_isShared_6100_ = v_isSharedCheck_6104_;
goto v_resetjp_6098_;
}
else
{
lean_inc(v_a_6097_);
lean_dec(v___x_6096_);
v___x_6099_ = lean_box(0);
v_isShared_6100_ = v_isSharedCheck_6104_;
goto v_resetjp_6098_;
}
v_resetjp_6098_:
{
lean_object* v___x_6102_; 
if (v_isShared_6100_ == 0)
{
lean_ctor_set_tag(v___x_6099_, 1);
v___x_6102_ = v___x_6099_;
goto v_reusejp_6101_;
}
else
{
lean_object* v_reuseFailAlloc_6103_; 
v_reuseFailAlloc_6103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6103_, 0, v_a_6097_);
v___x_6102_ = v_reuseFailAlloc_6103_;
goto v_reusejp_6101_;
}
v_reusejp_6101_:
{
return v___x_6102_;
}
}
}
else
{
lean_object* v_a_6105_; lean_object* v___f_6106_; lean_object* v___x_6107_; 
v_a_6105_ = lean_ctor_get(v___x_6096_, 0);
lean_inc(v_a_6105_);
lean_dec_ref_known(v___x_6096_, 1);
v___f_6106_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6107_, 0, v_fst_6043_);
lean_ctor_set(v___x_6107_, 1, v_fst_6044_);
lean_ctor_set(v___x_6107_, 2, v_snd_6045_);
lean_ctor_set(v___x_6107_, 3, v_a_6105_);
lean_ctor_set(v___x_6107_, 4, v___f_6106_);
v_req_6049_ = v___x_6107_;
goto v___jp_6048_;
}
}
else
{
lean_dec(v_snd_6045_);
lean_dec(v_fst_6044_);
lean_dec(v_fst_6043_);
v_req_6049_ = v___x_6087_;
goto v___jp_6048_;
}
v___jp_6048_:
{
lean_object* v___f_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; uint8_t v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; 
lean_inc_ref(v_req_6049_);
v___f_6050_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6050_, 0, v_handler_6030_);
lean_closure_set(v___f_6050_, 1, v_req_6049_);
v___x_6051_ = lean_unsigned_to_nat(0u);
v___x_6052_ = lean_io_as_task(v___f_6050_, v___x_6051_);
v___x_6053_ = 1;
v___x_6054_ = lean_task_bind(v___x_6052_, v___f_6036_, v___x_6051_, v___x_6053_);
v___x_6055_ = lean_task_get_own(v___x_6054_);
if (lean_obj_tag(v___x_6055_) == 0)
{
lean_object* v_a_6056_; lean_object* v___x_6058_; 
lean_dec_ref(v_req_6049_);
v_a_6056_ = lean_ctor_get(v___x_6055_, 0);
lean_inc(v_a_6056_);
lean_dec_ref_known(v___x_6055_, 1);
if (v_isShared_6041_ == 0)
{
lean_ctor_set_tag(v___x_6040_, 1);
lean_ctor_set(v___x_6040_, 0, v_a_6056_);
v___x_6058_ = v___x_6040_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6059_; 
v_reuseFailAlloc_6059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6059_, 0, v_a_6056_);
v___x_6058_ = v_reuseFailAlloc_6059_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
return v___x_6058_;
}
}
else
{
lean_object* v_a_6060_; lean_object* v_stream_6061_; 
lean_del_object(v___x_6040_);
v_a_6060_ = lean_ctor_get(v___x_6055_, 0);
lean_inc(v_a_6060_);
lean_dec_ref_known(v___x_6055_, 1);
v_stream_6061_ = lean_ctor_get(v_a_6060_, 2);
if (lean_obj_tag(v_stream_6061_) == 0)
{
uint16_t v_status_6062_; lean_object* v_headers_6063_; lean_object* v_body_6064_; lean_object* v_method_6065_; uint8_t v___x_6066_; 
v_status_6062_ = lean_ctor_get_uint16(v_a_6060_, sizeof(void*)*3);
v_headers_6063_ = lean_ctor_get(v_a_6060_, 0);
lean_inc_ref(v_headers_6063_);
v_body_6064_ = lean_ctor_get(v_a_6060_, 1);
lean_inc_ref(v_body_6064_);
lean_dec(v_a_6060_);
v_method_6065_ = lean_ctor_get(v_req_6049_, 0);
lean_inc_ref(v_method_6065_);
lean_dec_ref(v_req_6049_);
v___x_6066_ = l_Lasm_Fetch_bodyless(v_method_6065_, v_status_6062_);
lean_dec_ref(v_method_6065_);
if (v___x_6066_ == 0)
{
lean_object* v___x_6067_; 
v___x_6067_ = lasm_fetch_send_response(v_status_6062_, v_headers_6063_, v_body_6064_);
lean_dec_ref(v_body_6064_);
lean_dec_ref(v_headers_6063_);
return v___x_6067_;
}
else
{
lean_object* v___x_6068_; 
lean_dec_ref(v_body_6064_);
v___x_6068_ = lasm_fetch_send_response(v_status_6062_, v_headers_6063_, v___x_6047_);
lean_dec_ref(v_headers_6063_);
return v___x_6068_;
}
}
else
{
uint16_t v_status_6069_; lean_object* v_headers_6070_; lean_object* v_val_6071_; lean_object* v___f_6072_; lean_object* v___x_6073_; 
lean_inc_ref(v_stream_6061_);
v_status_6069_ = lean_ctor_get_uint16(v_a_6060_, sizeof(void*)*3);
v_headers_6070_ = lean_ctor_get(v_a_6060_, 0);
lean_inc_ref(v_headers_6070_);
lean_dec(v_a_6060_);
v_val_6071_ = lean_ctor_get(v_stream_6061_, 0);
lean_inc(v_val_6071_);
lean_dec_ref_known(v_stream_6061_, 1);
v___f_6072_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6072_, 0, v_val_6071_);
lean_closure_set(v___f_6072_, 1, v___f_6035_);
v___x_6073_ = lasm_fetch_start_response(v_status_6069_, v_headers_6070_);
lean_dec_ref(v_headers_6070_);
if (lean_obj_tag(v___x_6073_) == 0)
{
lean_object* v_method_6074_; uint8_t v___x_6075_; 
lean_dec_ref_known(v___x_6073_, 1);
v_method_6074_ = lean_ctor_get(v_req_6049_, 0);
lean_inc_ref(v_method_6074_);
lean_dec_ref(v_req_6049_);
v___x_6075_ = l_Lasm_Fetch_bodyless(v_method_6074_, v_status_6069_);
lean_dec_ref(v_method_6074_);
if (v___x_6075_ == 0)
{
lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; 
v___x_6076_ = lean_io_as_task(v___f_6072_, v___x_6051_);
v___x_6077_ = lean_task_bind(v___x_6076_, v___f_6034_, v___x_6051_, v___x_6053_);
v___x_6078_ = lean_task_get_own(v___x_6077_);
if (lean_obj_tag(v___x_6078_) == 0)
{
lean_object* v_a_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; 
v_a_6079_ = lean_ctor_get(v___x_6078_, 0);
lean_inc(v_a_6079_);
lean_dec_ref_known(v___x_6078_, 1);
v___x_6080_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6081_ = lean_io_error_to_string(v_a_6079_);
v___x_6082_ = lean_string_append(v___x_6080_, v___x_6081_);
lean_dec_ref(v___x_6081_);
v___x_6083_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6082_);
if (lean_obj_tag(v___x_6083_) == 0)
{
lean_object* v___x_6084_; 
lean_dec_ref_known(v___x_6083_, 1);
v___x_6084_ = lasm_fetch_finish(v___x_6075_);
return v___x_6084_;
}
else
{
return v___x_6083_;
}
}
else
{
lean_object* v___x_6085_; 
lean_dec_ref_known(v___x_6078_, 1);
v___x_6085_ = lasm_fetch_finish(v___x_6053_);
return v___x_6085_;
}
}
else
{
lean_object* v___x_6086_; 
lean_dec_ref(v___f_6072_);
v___x_6086_ = lasm_fetch_finish(v___x_6053_);
return v___x_6086_;
}
}
else
{
lean_dec_ref(v___f_6072_);
lean_dec_ref(v_req_6049_);
return v___x_6073_;
}
}
}
}
}
}
else
{
lean_object* v_a_6109_; lean_object* v___x_6111_; uint8_t v_isShared_6112_; uint8_t v_isSharedCheck_6116_; 
lean_dec_ref(v_options_6031_);
lean_dec_ref(v_handler_6030_);
v_a_6109_ = lean_ctor_get(v___x_6037_, 0);
v_isSharedCheck_6116_ = !lean_is_exclusive(v___x_6037_);
if (v_isSharedCheck_6116_ == 0)
{
v___x_6111_ = v___x_6037_;
v_isShared_6112_ = v_isSharedCheck_6116_;
goto v_resetjp_6110_;
}
else
{
lean_inc(v_a_6109_);
lean_dec(v___x_6037_);
v___x_6111_ = lean_box(0);
v_isShared_6112_ = v_isSharedCheck_6116_;
goto v_resetjp_6110_;
}
v_resetjp_6110_:
{
lean_object* v___x_6114_; 
if (v_isShared_6112_ == 0)
{
v___x_6114_ = v___x_6111_;
goto v_reusejp_6113_;
}
else
{
lean_object* v_reuseFailAlloc_6115_; 
v_reuseFailAlloc_6115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6115_, 0, v_a_6109_);
v___x_6114_ = v_reuseFailAlloc_6115_;
goto v_reusejp_6113_;
}
v_reusejp_6113_:
{
return v___x_6114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6117_, lean_object* v_options_6118_, lean_object* v_a_6119_){
_start:
{
lean_object* v_res_6120_; 
v_res_6120_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6117_, v_options_6118_);
return v_res_6120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6124_, lean_object* v_handler_6125_){
_start:
{
uint8_t v___x_6127_; 
v___x_6127_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6127_ == 0)
{
uint8_t v___x_6128_; 
v___x_6128_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6128_ == 0)
{
uint8_t v___x_6129_; 
v___x_6129_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6129_ == 0)
{
uint8_t v___x_6130_; 
v___x_6130_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6130_ == 0)
{
lean_object* v___x_6131_; lean_object* v___x_6132_; 
lean_dec_ref(v_handler_6125_);
lean_dec_ref(v_options_6124_);
v___x_6131_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6132_, 0, v___x_6131_);
return v___x_6132_;
}
else
{
lean_object* v___x_6133_; 
v___x_6133_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6133_) == 0)
{
lean_object* v_a_6134_; uint8_t v___x_6135_; 
v_a_6134_ = lean_ctor_get(v___x_6133_, 0);
lean_inc(v_a_6134_);
lean_dec_ref_known(v___x_6133_, 1);
v___x_6135_ = lean_unbox(v_a_6134_);
lean_dec(v_a_6134_);
if (v___x_6135_ == 0)
{
lean_object* v___x_6136_; 
v___x_6136_ = l_Lasm_Fetch_serveNode(v_handler_6125_, v_options_6124_);
return v___x_6136_;
}
else
{
lean_object* v___x_6137_; 
v___x_6137_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6125_, v_options_6124_);
if (lean_obj_tag(v___x_6137_) == 0)
{
lean_object* v_a_6138_; lean_object* v___x_6139_; 
v_a_6138_ = lean_ctor_get(v___x_6137_, 0);
lean_inc(v_a_6138_);
lean_dec_ref_known(v___x_6137_, 1);
v___x_6139_ = l_Lasm_JS_exportDefault(v_a_6138_);
return v___x_6139_;
}
else
{
lean_object* v_a_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6147_; 
v_a_6140_ = lean_ctor_get(v___x_6137_, 0);
v_isSharedCheck_6147_ = !lean_is_exclusive(v___x_6137_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6142_ = v___x_6137_;
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_a_6140_);
lean_dec(v___x_6137_);
v___x_6142_ = lean_box(0);
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
v_resetjp_6141_:
{
lean_object* v___x_6145_; 
if (v_isShared_6143_ == 0)
{
v___x_6145_ = v___x_6142_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6146_; 
v_reuseFailAlloc_6146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6146_, 0, v_a_6140_);
v___x_6145_ = v_reuseFailAlloc_6146_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
return v___x_6145_;
}
}
}
}
}
else
{
lean_object* v_a_6148_; lean_object* v___x_6150_; uint8_t v_isShared_6151_; uint8_t v_isSharedCheck_6155_; 
lean_dec_ref(v_handler_6125_);
lean_dec_ref(v_options_6124_);
v_a_6148_ = lean_ctor_get(v___x_6133_, 0);
v_isSharedCheck_6155_ = !lean_is_exclusive(v___x_6133_);
if (v_isSharedCheck_6155_ == 0)
{
v___x_6150_ = v___x_6133_;
v_isShared_6151_ = v_isSharedCheck_6155_;
goto v_resetjp_6149_;
}
else
{
lean_inc(v_a_6148_);
lean_dec(v___x_6133_);
v___x_6150_ = lean_box(0);
v_isShared_6151_ = v_isSharedCheck_6155_;
goto v_resetjp_6149_;
}
v_resetjp_6149_:
{
lean_object* v___x_6153_; 
if (v_isShared_6151_ == 0)
{
v___x_6153_ = v___x_6150_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6154_; 
v_reuseFailAlloc_6154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6154_, 0, v_a_6148_);
v___x_6153_ = v_reuseFailAlloc_6154_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
return v___x_6153_;
}
}
}
}
}
else
{
lean_object* v___x_6156_; 
v___x_6156_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6125_, v_options_6124_);
return v___x_6156_;
}
}
else
{
lean_object* v___x_6157_; 
v___x_6157_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6125_, v_options_6124_);
return v___x_6157_;
}
}
else
{
lean_object* v___x_6158_; 
v___x_6158_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6125_, v_options_6124_);
return v___x_6158_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6159_, lean_object* v_handler_6160_, lean_object* v_a_6161_){
_start:
{
lean_object* v_res_6162_; 
v_res_6162_ = l_Lasm_Fetch_serveWith(v_options_6159_, v_handler_6160_);
return v_res_6162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6163_){
_start:
{
lean_object* v___f_6165_; lean_object* v___x_6166_; 
v___f_6165_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6166_ = l_Lasm_Fetch_serveWith(v___f_6165_, v_handler_6163_);
return v___x_6166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6167_, lean_object* v_a_6168_){
_start:
{
lean_object* v_res_6169_; 
v_res_6169_ = l_Lasm_Fetch_serve(v_handler_6167_);
return v_res_6169_;
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
