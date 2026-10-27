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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8_value;
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
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__2 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__2_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__17___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "localhost:"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__17___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__17___closed__3_value;
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
lean_object* v___y_30_; lean_object* v___y_31_; uint32_t v___y_35_; lean_object* v___x_47_; uint8_t v_decide_48_; 
v___x_47_ = lean_string_utf8_byte_size(v_s_27_);
v_decide_48_ = lean_nat_dec_eq(v_p_28_, v___x_47_);
if (v_decide_48_ == 0)
{
uint32_t v___x_49_; uint32_t v___x_50_; uint8_t v___x_51_; 
v___x_49_ = lean_string_utf8_get_fast(v_s_27_, v_p_28_);
v___x_50_ = 65;
v___x_51_ = lean_uint32_dec_le(v___x_50_, v___x_49_);
if (v___x_51_ == 0)
{
v___y_35_ = v___x_49_;
goto v___jp_34_;
}
else
{
uint32_t v___x_52_; uint8_t v___x_53_; 
v___x_52_ = 90;
v___x_53_ = lean_uint32_dec_le(v___x_49_, v___x_52_);
if (v___x_53_ == 0)
{
v___y_35_ = v___x_49_;
goto v___jp_34_;
}
else
{
uint32_t v___x_54_; uint32_t v___x_55_; 
v___x_54_ = 32;
v___x_55_ = lean_uint32_add(v___x_49_, v___x_54_);
v___y_35_ = v___x_55_;
goto v___jp_34_;
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
lean_object* v___x_32_; 
v___x_32_ = lean_nat_add(v_p_28_, v___y_31_);
lean_dec(v_p_28_);
v_s_27_ = v___y_30_;
v_p_28_ = v___x_32_;
goto _start;
}
v___jp_34_:
{
lean_object* v___x_36_; uint32_t v___x_37_; uint8_t v___x_38_; 
lean_inc(v_p_28_);
v___x_36_ = lean_string_utf8_set(v_s_27_, v_p_28_, v___y_35_);
v___x_37_ = 127;
v___x_38_ = lean_uint32_dec_le(v___y_35_, v___x_37_);
if (v___x_38_ == 0)
{
uint32_t v___x_39_; uint8_t v___x_40_; 
v___x_39_ = 2047;
v___x_40_ = lean_uint32_dec_le(v___y_35_, v___x_39_);
if (v___x_40_ == 0)
{
uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_41_ = 65535;
v___x_42_ = lean_uint32_dec_le(v___y_35_, v___x_41_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(4u);
v___y_30_ = v___x_36_;
v___y_31_ = v___x_43_;
goto v___jp_29_;
}
else
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(3u);
v___y_30_ = v___x_36_;
v___y_31_ = v___x_44_;
goto v___jp_29_;
}
}
else
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(2u);
v___y_30_ = v___x_36_;
v___y_31_ = v___x_45_;
goto v___jp_29_;
}
}
else
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(1u);
v___y_30_ = v___x_36_;
v___y_31_ = v___x_46_;
goto v___jp_29_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_lower(lean_object* v_s_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(v_s_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(lean_object* v___f_59_, lean_object* v_fst_60_, lean_object* v_snd_61_, lean_object* v_x_62_, lean_object* v_x_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_box(0);
v___x_65_ = lean_apply_3(v___f_59_, v___x_64_, v_fst_60_, v_snd_61_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed(lean_object* v___f_66_, lean_object* v_fst_67_, lean_object* v_snd_68_, lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(v___f_66_, v_fst_67_, v_snd_68_, v_x_69_, v_x_70_);
lean_dec(v_x_70_);
lean_dec(v_x_69_);
return v_res_71_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(lean_object* v_xs_72_, lean_object* v_i_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_byte_array_size(v_xs_72_);
v___x_75_ = lean_nat_dec_lt(v_i_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0___boxed(lean_object* v_xs_76_, lean_object* v_i_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_xs_76_, v_i_77_);
lean_dec(v_i_77_);
lean_dec_ref(v_xs_76_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(uint8_t v_plus_80_, uint8_t v___y_81_, lean_object* v_____r_82_, lean_object* v_out_83_, lean_object* v_i_84_){
_start:
{
uint8_t v___y_86_; 
if (v_plus_80_ == 0)
{
v___y_86_ = v___y_81_;
goto v___jp_85_;
}
else
{
uint8_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 43;
v___x_93_ = lean_uint8_dec_eq(v___y_81_, v___x_92_);
if (v___x_93_ == 0)
{
v___y_86_ = v___y_81_;
goto v___jp_85_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = 32;
v___y_86_ = v___x_94_;
goto v___jp_85_;
}
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_87_ = lean_byte_array_push(v_out_83_, v___y_86_);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_add(v_i_84_, v___x_88_);
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_87_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed(lean_object* v_plus_95_, lean_object* v___y_96_, lean_object* v_____r_97_, lean_object* v_out_98_, lean_object* v_i_99_){
_start:
{
uint8_t v_plus_boxed_100_; uint8_t v___y_2150__boxed_101_; lean_object* v_res_102_; 
v_plus_boxed_100_ = lean_unbox(v_plus_95_);
v___y_2150__boxed_101_ = lean_unbox(v___y_96_);
v_res_102_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(v_plus_boxed_100_, v___y_2150__boxed_101_, v_____r_97_, v_out_98_, v_i_99_);
lean_dec(v_i_99_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(uint32_t v_c_103_){
_start:
{
uint32_t v___x_128_; uint8_t v___x_129_; 
v___x_128_ = 48;
v___x_129_ = lean_uint32_dec_le(v___x_128_, v_c_103_);
if (v___x_129_ == 0)
{
goto v___jp_117_;
}
else
{
uint32_t v___x_130_; uint8_t v___x_131_; 
v___x_130_ = 57;
v___x_131_ = lean_uint32_dec_le(v_c_103_, v___x_130_);
if (v___x_131_ == 0)
{
goto v___jp_117_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_uint32_to_nat(v_c_103_);
v___x_133_ = lean_unsigned_to_nat(48u);
v___x_134_ = lean_nat_sub(v___x_132_, v___x_133_);
lean_dec(v___x_132_);
v___x_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
v___jp_104_:
{
uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = 65;
v___x_106_ = lean_uint32_dec_le(v___x_105_, v_c_103_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_box(0);
return v___x_107_;
}
else
{
uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_108_ = 70;
v___x_109_ = lean_uint32_dec_le(v_c_103_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_box(0);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_111_ = lean_uint32_to_nat(v_c_103_);
v___x_112_ = lean_unsigned_to_nat(65u);
v___x_113_ = lean_nat_sub(v___x_111_, v___x_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_unsigned_to_nat(10u);
v___x_115_ = lean_nat_add(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
}
v___jp_117_:
{
uint32_t v___x_118_; uint8_t v___x_119_; 
v___x_118_ = 97;
v___x_119_ = lean_uint32_dec_le(v___x_118_, v_c_103_);
if (v___x_119_ == 0)
{
goto v___jp_104_;
}
else
{
uint32_t v___x_120_; uint8_t v___x_121_; 
v___x_120_ = 102;
v___x_121_ = lean_uint32_dec_le(v_c_103_, v___x_120_);
if (v___x_121_ == 0)
{
goto v___jp_104_;
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_122_ = lean_uint32_to_nat(v_c_103_);
v___x_123_ = lean_unsigned_to_nat(97u);
v___x_124_ = lean_nat_sub(v___x_122_, v___x_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_unsigned_to_nat(10u);
v___x_126_ = lean_nat_add(v___x_124_, v___x_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1___boxed(lean_object* v_c_136_){
_start:
{
uint32_t v_c_boxed_137_; lean_object* v_res_138_; 
v_c_boxed_137_ = lean_unbox_uint32(v_c_136_);
lean_dec(v_c_136_);
v_res_138_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v_c_boxed_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(lean_object* v_bytes_139_, uint8_t v_plus_140_, lean_object* v_a_141_){
_start:
{
lean_object* v___y_143_; lean_object* v_fst_147_; lean_object* v_snd_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_235_; 
v_fst_147_ = lean_ctor_get(v_a_141_, 0);
v_snd_148_ = lean_ctor_get(v_a_141_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_a_141_);
if (v_isSharedCheck_235_ == 0)
{
v___x_150_ = v_a_141_;
v_isShared_151_ = v_isSharedCheck_235_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_snd_148_);
lean_inc(v_fst_147_);
lean_dec(v_a_141_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_235_;
goto v_resetjp_149_;
}
v___jp_142_:
{
if (lean_obj_tag(v___y_143_) == 0)
{
lean_object* v_a_144_; 
v_a_144_ = lean_ctor_get(v___y_143_, 0);
lean_inc(v_a_144_);
lean_dec_ref_known(v___y_143_, 1);
return v_a_144_;
}
else
{
lean_object* v_a_145_; 
v_a_145_ = lean_ctor_get(v___y_143_, 0);
lean_inc(v_a_145_);
lean_dec_ref_known(v___y_143_, 1);
v_a_141_ = v_a_145_;
goto _start;
}
}
v_resetjp_149_:
{
lean_object* v___y_153_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_156_ = lean_byte_array_size(v_bytes_139_);
v___x_157_ = lean_nat_dec_lt(v_snd_148_, v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_159_; 
if (v_isShared_151_ == 0)
{
v___x_159_ = v___x_150_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_fst_147_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_snd_148_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
else
{
lean_object* v___y_162_; lean_object* v___y_163_; uint8_t v___y_164_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; uint8_t v___y_173_; uint8_t v___x_190_; lean_object* v___y_192_; uint8_t v___y_193_; uint8_t v___y_213_; uint8_t v___x_230_; 
v___x_190_ = 0;
v___x_230_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_139_, v_snd_148_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_231_ = lean_box(v___x_190_);
v___x_232_ = l_outOfBounds___redArg(v___x_231_);
lean_dec(v___x_231_);
v___x_233_ = lean_unbox(v___x_232_);
lean_dec(v___x_232_);
v___y_213_ = v___x_233_;
goto v___jp_212_;
}
else
{
uint8_t v___x_234_; 
v___x_234_ = lean_byte_array_fget(v_bytes_139_, v_snd_148_);
v___y_213_ = v___x_234_;
goto v___jp_212_;
}
v___jp_161_:
{
lean_object* v___x_165_; uint32_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_165_ = lean_uint8_to_nat(v___y_164_);
v___x_166_ = l_Char_ofNat(v___x_165_);
v___x_167_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_166_);
v___x_168_ = lean_apply_2(v___y_163_, v___y_162_, v___x_167_);
v___y_143_ = v___x_168_;
goto v___jp_142_;
}
v___jp_169_:
{
lean_object* v___x_174_; uint32_t v___x_175_; lean_object* v___x_176_; 
v___x_174_ = lean_uint8_to_nat(v___y_173_);
v___x_175_ = l_Char_ofNat(v___x_174_);
v___x_176_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_175_);
if (lean_obj_tag(v___x_176_) == 1)
{
lean_object* v_val_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
v_val_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_val_177_);
lean_dec_ref_known(v___x_176_, 1);
v___x_178_ = lean_unsigned_to_nat(16u);
v___x_179_ = lean_nat_mul(v___y_170_, v___x_178_);
lean_dec(v___y_170_);
v___x_180_ = lean_nat_add(v___x_179_, v_val_177_);
lean_dec(v_val_177_);
lean_dec(v___x_179_);
v___x_181_ = lean_uint8_of_nat(v___x_180_);
lean_dec(v___x_180_);
v___x_182_ = lean_byte_array_push(v_fst_147_, v___x_181_);
v___x_183_ = lean_unsigned_to_nat(3u);
v___x_184_ = lean_nat_add(v_snd_148_, v___x_183_);
lean_dec(v_snd_148_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v___x_184_);
lean_ctor_set(v___x_150_, 0, v___x_182_);
v___x_186_ = v___x_150_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_184_);
v___x_186_ = v_reuseFailAlloc_188_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
v_a_141_ = v___x_186_;
goto _start;
}
}
else
{
lean_object* v___x_189_; 
lean_dec(v___y_170_);
lean_del_object(v___x_150_);
lean_dec(v_snd_148_);
lean_dec(v_fst_147_);
v___x_189_ = lean_apply_2(v___y_172_, v___y_171_, v___x_176_);
v___y_143_ = v___x_189_;
goto v___jp_142_;
}
}
v___jp_191_:
{
lean_object* v___x_194_; uint32_t v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_uint8_to_nat(v___y_193_);
v___x_195_ = l_Char_ofNat(v___x_194_);
v___x_196_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_195_);
if (lean_obj_tag(v___x_196_) == 1)
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_val_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_val_197_);
v___x_198_ = lean_unsigned_to_nat(2u);
v___x_199_ = lean_nat_add(v_snd_148_, v___x_198_);
v___x_200_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_139_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
lean_dec(v___x_199_);
v___x_201_ = lean_box(v___x_190_);
v___x_202_ = l_outOfBounds___redArg(v___x_201_);
lean_dec(v___x_201_);
v___x_203_ = lean_unbox(v___x_202_);
lean_dec(v___x_202_);
v___y_170_ = v_val_197_;
v___y_171_ = v___x_196_;
v___y_172_ = v___y_192_;
v___y_173_ = v___x_203_;
goto v___jp_169_;
}
else
{
uint8_t v___x_204_; 
v___x_204_ = lean_byte_array_fget(v_bytes_139_, v___x_199_);
lean_dec(v___x_199_);
v___y_170_ = v_val_197_;
v___y_171_ = v___x_196_;
v___y_172_ = v___y_192_;
v___y_173_ = v___x_204_;
goto v___jp_169_;
}
}
else
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
lean_del_object(v___x_150_);
lean_dec(v_fst_147_);
v___x_205_ = lean_unsigned_to_nat(2u);
v___x_206_ = lean_nat_add(v_snd_148_, v___x_205_);
lean_dec(v_snd_148_);
v___x_207_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_139_, v___x_206_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
lean_dec(v___x_206_);
v___x_208_ = lean_box(v___x_190_);
v___x_209_ = l_outOfBounds___redArg(v___x_208_);
lean_dec(v___x_208_);
v___x_210_ = lean_unbox(v___x_209_);
lean_dec(v___x_209_);
v___y_162_ = v___x_196_;
v___y_163_ = v___y_192_;
v___y_164_ = v___x_210_;
goto v___jp_161_;
}
else
{
uint8_t v___x_211_; 
v___x_211_ = lean_byte_array_fget(v_bytes_139_, v___x_206_);
lean_dec(v___x_206_);
v___y_162_ = v___x_196_;
v___y_163_ = v___y_192_;
v___y_164_ = v___x_211_;
goto v___jp_161_;
}
}
}
v___jp_212_:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___f_216_; uint8_t v___x_217_; uint8_t v___x_218_; 
v___x_214_ = lean_box(v_plus_140_);
v___x_215_ = lean_box(v___y_213_);
v___f_216_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_216_, 0, v___x_214_);
lean_closure_set(v___f_216_, 1, v___x_215_);
v___x_217_ = 37;
v___x_218_ = lean_uint8_dec_eq(v___y_213_, v___x_217_);
if (v___x_218_ == 0)
{
lean_del_object(v___x_150_);
v___y_153_ = v___f_216_;
goto v___jp_152_;
}
else
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(2u);
v___x_220_ = lean_nat_add(v_snd_148_, v___x_219_);
v___x_221_ = lean_nat_dec_lt(v___x_220_, v___x_156_);
lean_dec(v___x_220_);
if (v___x_221_ == 0)
{
lean_del_object(v___x_150_);
v___y_153_ = v___f_216_;
goto v___jp_152_;
}
else
{
lean_object* v___f_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
lean_inc(v_snd_148_);
lean_inc(v_fst_147_);
v___f_222_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_222_, 0, v___f_216_);
lean_closure_set(v___f_222_, 1, v_fst_147_);
lean_closure_set(v___f_222_, 2, v_snd_148_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_add(v_snd_148_, v___x_223_);
v___x_225_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_139_, v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
lean_dec(v___x_224_);
v___x_226_ = lean_box(v___x_190_);
v___x_227_ = l_outOfBounds___redArg(v___x_226_);
lean_dec(v___x_226_);
v___x_228_ = lean_unbox(v___x_227_);
lean_dec(v___x_227_);
v___y_192_ = v___f_222_;
v___y_193_ = v___x_228_;
goto v___jp_191_;
}
else
{
uint8_t v___x_229_; 
v___x_229_ = lean_byte_array_fget(v_bytes_139_, v___x_224_);
lean_dec(v___x_224_);
v___y_192_ = v___f_222_;
v___y_193_ = v___x_229_;
goto v___jp_191_;
}
}
}
}
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_box(0);
v___x_155_ = lean_apply_3(v___y_153_, v___x_154_, v_fst_147_, v_snd_148_);
v___y_143_ = v___x_155_;
goto v___jp_142_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___boxed(lean_object* v_bytes_236_, lean_object* v_plus_237_, lean_object* v_a_238_){
_start:
{
uint8_t v_plus_boxed_239_; lean_object* v_res_240_; 
v_plus_boxed_239_ = lean_unbox(v_plus_237_);
v_res_240_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_236_, v_plus_boxed_239_, v_a_238_);
lean_dec_ref(v_bytes_236_);
return v_res_240_;
}
}
static lean_object* _init_l_Lasm_Fetch_percentDecode___closed__0(void){
_start:
{
lean_object* v_i_241_; lean_object* v_out_242_; lean_object* v___x_243_; 
v_i_241_ = lean_unsigned_to_nat(0u);
v_out_242_ = l_ByteArray_empty;
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v_out_242_);
lean_ctor_set(v___x_243_, 1, v_i_241_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode(lean_object* v_s_244_, uint8_t v_plus_245_){
_start:
{
lean_object* v_bytes_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_fst_249_; uint8_t v___x_250_; 
lean_inc_ref(v_s_244_);
v_bytes_246_ = lean_string_to_utf8(v_s_244_);
v___x_247_ = lean_obj_once(&l_Lasm_Fetch_percentDecode___closed__0, &l_Lasm_Fetch_percentDecode___closed__0_once, _init_l_Lasm_Fetch_percentDecode___closed__0);
v___x_248_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_246_, v_plus_245_, v___x_247_);
lean_dec_ref(v_bytes_246_);
v_fst_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_fst_249_);
lean_dec_ref(v___x_248_);
v___x_250_ = lean_string_validate_utf8(v_fst_249_);
if (v___x_250_ == 0)
{
lean_dec(v_fst_249_);
return v_s_244_;
}
else
{
lean_object* v___x_251_; 
lean_dec_ref(v_s_244_);
v___x_251_ = lean_string_from_utf8_unchecked(v_fst_249_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode___boxed(lean_object* v_s_252_, lean_object* v_plus_253_){
_start:
{
uint8_t v_plus_boxed_254_; lean_object* v_res_255_; 
v_plus_boxed_254_ = lean_unbox(v_plus_253_);
v_res_255_ = l_Lasm_Fetch_percentDecode(v_s_252_, v_plus_boxed_254_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(lean_object* v_bytes_256_, uint8_t v_plus_257_, lean_object* v_inst_258_, lean_object* v_a_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_256_, v_plus_257_, v_a_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___boxed(lean_object* v_bytes_261_, lean_object* v_plus_262_, lean_object* v_inst_263_, lean_object* v_a_264_){
_start:
{
uint8_t v_plus_boxed_265_; lean_object* v_res_266_; 
v_plus_boxed_265_ = lean_unbox(v_plus_262_);
v_res_266_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(v_bytes_261_, v_plus_boxed_265_, v_inst_263_, v_a_264_);
lean_dec_ref(v_bytes_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(lean_object* v_s_267_, lean_object* v_pos_268_){
_start:
{
lean_object* v_str_269_; lean_object* v_startInclusive_270_; lean_object* v_endExclusive_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v_decide_275_; 
v_str_269_ = lean_ctor_get(v_s_267_, 0);
v_startInclusive_270_ = lean_ctor_get(v_s_267_, 1);
v_endExclusive_271_ = lean_ctor_get(v_s_267_, 2);
v___x_272_ = lean_nat_add(v_startInclusive_270_, v_pos_268_);
v___x_273_ = lean_unsigned_to_nat(0u);
v___x_274_ = lean_nat_sub(v_endExclusive_271_, v___x_272_);
v_decide_275_ = lean_nat_dec_eq(v___x_273_, v___x_274_);
lean_dec(v___x_274_);
if (v_decide_275_ == 0)
{
uint32_t v___x_276_; uint32_t v___x_277_; uint8_t v___x_278_; 
v___x_276_ = lean_string_utf8_get_fast(v_str_269_, v___x_272_);
v___x_277_ = 63;
v___x_278_ = lean_uint32_dec_eq(v___x_276_, v___x_277_);
if (v___x_278_ == 0)
{
uint32_t v___x_279_; uint8_t v___x_280_; 
v___x_279_ = 35;
v___x_280_ = lean_uint32_dec_eq(v___x_276_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_281_ = lean_string_utf8_next_fast(v_str_269_, v___x_272_);
v___x_282_ = lean_nat_sub(v___x_281_, v___x_272_);
lean_dec(v___x_272_);
v___x_283_ = lean_nat_add(v_pos_268_, v___x_282_);
lean_dec(v___x_282_);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_nat_add(v_pos_268_, v___x_284_);
v___x_286_ = lean_nat_dec_le(v___x_285_, v___x_283_);
lean_dec(v___x_285_);
if (v___x_286_ == 0)
{
lean_dec(v___x_283_);
return v_pos_268_;
}
else
{
lean_dec(v_pos_268_);
v_pos_268_ = v___x_283_;
goto _start;
}
}
else
{
lean_dec(v___x_272_);
return v_pos_268_;
}
}
else
{
lean_dec(v___x_272_);
return v_pos_268_;
}
}
else
{
lean_dec(v___x_272_);
return v_pos_268_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0___boxed(lean_object* v_s_288_, lean_object* v_pos_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v_s_288_, v_pos_289_);
lean_dec_ref(v_s_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_293_){
_start:
{
lean_object* v___y_295_; lean_object* v_url_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v_url_305_ = lean_ctor_get(v_r_293_, 1);
lean_inc_ref(v_url_305_);
lean_dec_ref(v_r_293_);
v___x_306_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__1));
v___x_307_ = lean_unsigned_to_nat(0u);
v___x_308_ = lean_box(0);
v___x_309_ = l_String_splitOnAux(v_url_305_, v___x_306_, v___x_307_, v___x_307_, v___x_307_, v___x_308_);
if (lean_obj_tag(v___x_309_) == 1)
{
lean_object* v_tail_310_; 
v_tail_310_ = lean_ctor_get(v___x_309_, 1);
lean_inc(v_tail_310_);
lean_dec_ref_known(v___x_309_, 2);
if (lean_obj_tag(v_tail_310_) == 1)
{
lean_object* v_tail_311_; 
v_tail_311_ = lean_ctor_get(v_tail_310_, 1);
if (lean_obj_tag(v_tail_311_) == 0)
{
lean_object* v_head_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec_ref(v_url_305_);
v_head_312_ = lean_ctor_get(v_tail_310_, 0);
lean_inc_n(v_head_312_, 2);
lean_dec_ref_known(v_tail_310_, 2);
v___x_313_ = lean_string_utf8_byte_size(v_head_312_);
v___x_314_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_314_, 0, v_head_312_);
lean_ctor_set(v___x_314_, 1, v___x_307_);
lean_ctor_set(v___x_314_, 2, v___x_313_);
v___x_315_ = l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(v___x_314_, v___x_307_);
lean_dec_ref_known(v___x_314_, 3);
v___x_316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_316_, 0, v_head_312_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_ctor_set(v___x_316_, 2, v___x_313_);
v___x_317_ = l_String_Slice_toString(v___x_316_);
lean_dec_ref_known(v___x_316_, 3);
v___y_295_ = v___x_317_;
goto v___jp_294_;
}
else
{
lean_dec_ref_known(v_tail_310_, 2);
v___y_295_ = v_url_305_;
goto v___jp_294_;
}
}
else
{
lean_dec(v_tail_310_);
v___y_295_ = v_url_305_;
goto v___jp_294_;
}
}
else
{
lean_dec(v___x_309_);
v___y_295_ = v_url_305_;
goto v___jp_294_;
}
v___jp_294_:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v_p_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_string_utf8_byte_size(v___y_295_);
lean_inc_ref(v___y_295_);
v___x_298_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_298_, 0, v___y_295_);
lean_ctor_set(v___x_298_, 1, v___x_296_);
lean_ctor_set(v___x_298_, 2, v___x_297_);
v___x_299_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v___x_298_, v___x_296_);
lean_dec_ref_known(v___x_298_, 3);
v___x_300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_300_, 0, v___y_295_);
lean_ctor_set(v___x_300_, 1, v___x_296_);
lean_ctor_set(v___x_300_, 2, v___x_299_);
v_p_301_ = l_String_Slice_toString(v___x_300_);
lean_dec_ref_known(v___x_300_, 3);
v___x_302_ = lean_string_utf8_byte_size(v_p_301_);
v___x_303_ = lean_nat_dec_eq(v___x_302_, v___x_296_);
if (v___x_303_ == 0)
{
return v_p_301_;
}
else
{
lean_object* v___x_304_; 
lean_dec_ref(v_p_301_);
v___x_304_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
return v___x_304_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_318_, lean_object* v_pos_319_){
_start:
{
lean_object* v_str_320_; lean_object* v_startInclusive_321_; lean_object* v_endExclusive_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v_decide_326_; 
v_str_320_ = lean_ctor_get(v_s_318_, 0);
v_startInclusive_321_ = lean_ctor_get(v_s_318_, 1);
v_endExclusive_322_ = lean_ctor_get(v_s_318_, 2);
v___x_323_ = lean_nat_add(v_startInclusive_321_, v_pos_319_);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_nat_sub(v_endExclusive_322_, v___x_323_);
v_decide_326_ = lean_nat_dec_eq(v___x_324_, v___x_325_);
lean_dec(v___x_325_);
if (v_decide_326_ == 0)
{
uint32_t v___x_327_; uint32_t v___x_328_; uint8_t v___x_329_; 
v___x_327_ = lean_string_utf8_get_fast(v_str_320_, v___x_323_);
v___x_328_ = 35;
v___x_329_ = lean_uint32_dec_eq(v___x_327_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_330_ = lean_string_utf8_next_fast(v_str_320_, v___x_323_);
v___x_331_ = lean_nat_sub(v___x_330_, v___x_323_);
lean_dec(v___x_323_);
v___x_332_ = lean_nat_add(v_pos_319_, v___x_331_);
lean_dec(v___x_331_);
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_nat_add(v_pos_319_, v___x_333_);
v___x_335_ = lean_nat_dec_le(v___x_334_, v___x_332_);
lean_dec(v___x_334_);
if (v___x_335_ == 0)
{
lean_dec(v___x_332_);
return v_pos_319_;
}
else
{
lean_dec(v_pos_319_);
v_pos_319_ = v___x_332_;
goto _start;
}
}
else
{
lean_dec(v___x_323_);
return v_pos_319_;
}
}
else
{
lean_dec(v___x_323_);
return v_pos_319_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_337_, lean_object* v_pos_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_337_, v_pos_338_);
lean_dec_ref(v_s_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_341_){
_start:
{
lean_object* v_url_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_url_342_ = lean_ctor_get(v_r_341_, 1);
v___x_343_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = lean_box(0);
v___x_346_ = l_String_splitOnAux(v_url_342_, v___x_343_, v___x_344_, v___x_344_, v___x_344_, v___x_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v___x_347_; 
v___x_347_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_347_;
}
else
{
lean_object* v_tail_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_tail_348_ = lean_ctor_get(v___x_346_, 1);
lean_inc(v_tail_348_);
lean_dec_ref_known(v___x_346_, 2);
v___x_349_ = l_String_intercalate(v___x_343_, v_tail_348_);
v___x_350_ = lean_string_utf8_byte_size(v___x_349_);
lean_inc_ref(v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_344_);
lean_ctor_set(v___x_351_, 2, v___x_350_);
v___x_352_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_351_, v___x_344_);
lean_dec_ref_known(v___x_351_, 3);
v___x_353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_353_, 0, v___x_349_);
lean_ctor_set(v___x_353_, 1, v___x_344_);
lean_ctor_set(v___x_353_, 2, v___x_352_);
v___x_354_ = l_String_Slice_toString(v___x_353_);
lean_dec_ref_known(v___x_353_, 3);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_Fetch_Request_query(v_r_355_);
lean_dec_ref(v_r_355_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
if (lean_obj_tag(v_a_358_) == 0)
{
lean_object* v___x_360_; 
v___x_360_ = lean_array_to_list(v_a_359_);
return v___x_360_;
}
else
{
lean_object* v_head_361_; lean_object* v_tail_362_; lean_object* v_val_364_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v_head_361_ = lean_ctor_get(v_a_358_, 0);
v_tail_362_ = lean_ctor_get(v_a_358_, 1);
v___x_367_ = lean_string_utf8_byte_size(v_head_361_);
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = lean_nat_dec_eq(v___x_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_370_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_371_ = lean_box(0);
v___x_372_ = l_String_splitOnAux(v_head_361_, v___x_370_, v___x_368_, v___x_368_, v___x_368_, v___x_371_);
if (lean_obj_tag(v___x_372_) == 0)
{
v_a_358_ = v_tail_362_;
goto _start;
}
else
{
lean_object* v_head_374_; lean_object* v_tail_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_391_; 
v_head_374_ = lean_ctor_get(v___x_372_, 0);
v_tail_375_ = lean_ctor_get(v___x_372_, 1);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_391_ == 0)
{
v___x_377_ = v___x_372_;
v_isShared_378_ = v_isSharedCheck_391_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_tail_375_);
lean_inc(v_head_374_);
lean_dec(v___x_372_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_391_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
uint8_t v___x_379_; 
v___x_379_ = 1;
if (lean_obj_tag(v_tail_375_) == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_380_ = l_Lasm_Fetch_percentDecode(v_head_374_, v___x_379_);
v___x_381_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_378_ == 0)
{
lean_ctor_set_tag(v___x_377_, 0);
lean_ctor_set(v___x_377_, 1, v___x_381_);
lean_ctor_set(v___x_377_, 0, v___x_380_);
v___x_383_ = v___x_377_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
v_val_364_ = v___x_383_;
goto v___jp_363_;
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_385_ = l_Lasm_Fetch_percentDecode(v_head_374_, v___x_379_);
v___x_386_ = l_String_intercalate(v___x_370_, v_tail_375_);
v___x_387_ = l_Lasm_Fetch_percentDecode(v___x_386_, v___x_379_);
if (v_isShared_378_ == 0)
{
lean_ctor_set_tag(v___x_377_, 0);
lean_ctor_set(v___x_377_, 1, v___x_387_);
lean_ctor_set(v___x_377_, 0, v___x_385_);
v___x_389_ = v___x_377_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
v_val_364_ = v___x_389_;
goto v___jp_363_;
}
}
}
}
}
else
{
v_a_358_ = v_tail_362_;
goto _start;
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_push(v_a_359_, v_val_364_);
v_a_358_ = v_tail_362_;
v_a_359_ = v___x_365_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_393_, v_a_394_);
lean_dec(v_a_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_398_ = l_Lasm_Fetch_Request_query(v_r_397_);
v___x_399_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_400_ = lean_unsigned_to_nat(0u);
v___x_401_ = lean_box(0);
v___x_402_ = l_String_splitOnAux(v___x_398_, v___x_399_, v___x_400_, v___x_400_, v___x_400_, v___x_401_);
lean_dec_ref(v___x_398_);
v___x_403_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_404_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_402_, v___x_403_);
lean_dec(v___x_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lasm_Fetch_Request_queryParams(v_r_405_);
lean_dec_ref(v_r_405_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_407_, lean_object* v_x_408_){
_start:
{
if (lean_obj_tag(v_x_408_) == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
else
{
lean_object* v_head_410_; lean_object* v_tail_411_; lean_object* v_fst_412_; lean_object* v_snd_413_; uint8_t v___x_414_; 
v_head_410_ = lean_ctor_get(v_x_408_, 0);
v_tail_411_ = lean_ctor_get(v_x_408_, 1);
v_fst_412_ = lean_ctor_get(v_head_410_, 0);
v_snd_413_ = lean_ctor_get(v_head_410_, 1);
v___x_414_ = lean_string_dec_eq(v_x_407_, v_fst_412_);
if (v___x_414_ == 0)
{
v_x_408_ = v_tail_411_;
goto _start;
}
else
{
lean_object* v___x_416_; 
lean_inc(v_snd_413_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v_snd_413_);
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_417_, v_x_418_);
lean_dec(v_x_418_);
lean_dec_ref(v_x_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_420_, lean_object* v_name_421_){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = l_Lasm_Fetch_Request_queryParams(v_r_420_);
v___x_423_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_421_, v___x_422_);
lean_dec(v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_424_, lean_object* v_name_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_424_, v_name_425_);
lean_dec_ref(v_name_425_);
lean_dec_ref(v_r_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_427_, lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_428_, v_x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_431_, lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_431_, v_x_432_, v_x_433_);
lean_dec(v_x_433_);
lean_dec_ref(v_x_432_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
if (lean_obj_tag(v_a_435_) == 0)
{
lean_object* v___x_437_; 
v___x_437_ = l_List_reverse___redArg(v_a_436_);
return v___x_437_;
}
else
{
lean_object* v_head_438_; lean_object* v_tail_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_449_; 
v_head_438_ = lean_ctor_get(v_a_435_, 0);
v_tail_439_ = lean_ctor_get(v_a_435_, 1);
v_isSharedCheck_449_ = !lean_is_exclusive(v_a_435_);
if (v_isSharedCheck_449_ == 0)
{
v___x_441_ = v_a_435_;
v_isShared_442_ = v_isSharedCheck_449_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_tail_439_);
lean_inc(v_head_438_);
lean_dec(v_a_435_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_449_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_443_ = 0;
v___x_444_ = l_Lasm_Fetch_percentDecode(v_head_438_, v___x_443_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_a_436_);
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_446_ = v___x_441_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_a_436_);
v___x_446_ = v_reuseFailAlloc_448_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
v_a_435_ = v_tail_439_;
v_a_436_ = v___x_446_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
if (lean_obj_tag(v_a_450_) == 0)
{
lean_object* v___x_452_; 
v___x_452_ = l_List_reverse___redArg(v_a_451_);
return v___x_452_;
}
else
{
lean_object* v_head_453_; lean_object* v_tail_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_466_; 
v_head_453_ = lean_ctor_get(v_a_450_, 0);
v_tail_454_ = lean_ctor_get(v_a_450_, 1);
v_isSharedCheck_466_ = !lean_is_exclusive(v_a_450_);
if (v_isSharedCheck_466_ == 0)
{
v___x_456_ = v_a_450_;
v_isShared_457_ = v_isSharedCheck_466_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_tail_454_);
lean_inc(v_head_453_);
lean_dec(v_a_450_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_466_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_458_ = lean_string_utf8_byte_size(v_head_453_);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_nat_dec_eq(v___x_458_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_462_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 1, v_a_451_);
v___x_462_ = v___x_456_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_head_453_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_a_451_);
v___x_462_ = v_reuseFailAlloc_464_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
v_a_450_ = v_tail_454_;
v_a_451_ = v___x_462_;
goto _start;
}
}
else
{
lean_del_object(v___x_456_);
lean_dec(v_head_453_);
v_a_450_ = v_tail_454_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_467_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_468_ = l_Lasm_Fetch_Request_path(v_r_467_);
v___x_469_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = lean_box(0);
v___x_472_ = l_String_splitOnAux(v___x_468_, v___x_469_, v___x_470_, v___x_470_, v___x_470_, v___x_471_);
lean_dec_ref(v___x_468_);
v___x_473_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_472_, v___x_471_);
v___x_474_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_473_, v___x_471_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_478_, lean_object* v_as_479_, size_t v_sz_480_, size_t v_i_481_, lean_object* v_b_482_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_usize_dec_lt(v_i_481_, v_sz_480_);
if (v___x_483_ == 0)
{
lean_inc_ref(v_b_482_);
return v_b_482_;
}
else
{
lean_object* v_a_484_; lean_object* v_fst_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_a_484_ = lean_array_uget_borrowed(v_as_479_, v_i_481_);
v_fst_485_ = lean_ctor_get(v_a_484_, 0);
v___x_486_ = lean_box(0);
lean_inc(v_fst_485_);
v___x_487_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_485_);
v___x_488_ = lean_string_dec_eq(v___x_487_, v_n_478_);
lean_dec_ref(v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; size_t v___x_490_; size_t v___x_491_; 
v___x_489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_490_ = ((size_t)1ULL);
v___x_491_ = lean_usize_add(v_i_481_, v___x_490_);
v_i_481_ = v___x_491_;
v_b_482_ = v___x_489_;
goto _start;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
lean_inc(v_a_484_);
v___x_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_493_, 0, v_a_484_);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_486_);
return v___x_495_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_496_, lean_object* v_as_497_, lean_object* v_sz_498_, lean_object* v_i_499_, lean_object* v_b_500_){
_start:
{
size_t v_sz_boxed_501_; size_t v_i_boxed_502_; lean_object* v_res_503_; 
v_sz_boxed_501_ = lean_unbox_usize(v_sz_498_);
lean_dec(v_sz_498_);
v_i_boxed_502_ = lean_unbox_usize(v_i_499_);
lean_dec(v_i_499_);
v_res_503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_496_, v_as_497_, v_sz_boxed_501_, v_i_boxed_502_, v_b_500_);
lean_dec_ref(v_b_500_);
lean_dec_ref(v_as_497_);
lean_dec_ref(v_n_496_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_504_, lean_object* v_name_505_){
_start:
{
lean_object* v_headers_506_; lean_object* v_n_507_; lean_object* v___x_508_; lean_object* v___x_509_; size_t v_sz_510_; size_t v___x_511_; lean_object* v___x_512_; lean_object* v_fst_513_; 
v_headers_506_ = lean_ctor_get(v_r_504_, 2);
v_n_507_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_505_);
v___x_508_ = lean_box(0);
v___x_509_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_510_ = lean_array_size(v_headers_506_);
v___x_511_ = ((size_t)0ULL);
v___x_512_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_507_, v_headers_506_, v_sz_510_, v___x_511_, v___x_509_);
lean_dec_ref(v_n_507_);
v_fst_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_fst_513_);
lean_dec_ref(v___x_512_);
if (lean_obj_tag(v_fst_513_) == 0)
{
return v___x_508_;
}
else
{
lean_object* v_val_514_; 
v_val_514_ = lean_ctor_get(v_fst_513_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v_fst_513_, 1);
if (lean_obj_tag(v_val_514_) == 0)
{
return v___x_508_;
}
else
{
lean_object* v_val_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_val_515_ = lean_ctor_get(v_val_514_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_val_514_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_val_514_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_val_515_);
lean_dec(v_val_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v_snd_519_; lean_object* v___x_521_; 
v_snd_519_ = lean_ctor_get(v_val_515_, 1);
lean_inc(v_snd_519_);
lean_dec(v_val_515_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v_snd_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_snd_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_524_, lean_object* v_name_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lasm_Fetch_Request_header_x3f(v_r_524_, v_name_525_);
lean_dec_ref(v_r_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_527_){
_start:
{
lean_object* v_body_528_; uint8_t v___x_529_; 
v_body_528_ = lean_ctor_get(v_r_527_, 3);
lean_inc_ref(v_body_528_);
lean_dec_ref(v_r_527_);
v___x_529_ = lean_string_validate_utf8(v_body_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
lean_dec_ref(v_body_528_);
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_string_from_utf8_unchecked(v_body_528_);
v___x_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lasm_Fetch_Request_text_x3f(v_r_533_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v___x_535_; 
v___x_535_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_535_;
}
else
{
lean_object* v_val_536_; 
v_val_536_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_val_536_);
lean_dec_ref_known(v___x_534_, 1);
return v_val_536_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_537_, lean_object* v_r_538_, lean_object* v_x_539_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_549_; 
lean_dec_ref(v_r_538_);
lean_dec_ref(v_acc_537_);
v_a_541_ = lean_ctor_get(v_x_539_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_549_ == 0)
{
v___x_543_ = v_x_539_;
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v_x_539_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_548_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v___x_547_; 
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_565_; 
v_a_550_ = lean_ctor_get(v_x_539_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_565_ == 0)
{
v___x_552_ = v_x_539_;
v_isShared_553_ = v_isSharedCheck_565_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v_x_539_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_565_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_555_; 
lean_dec_ref(v_r_538_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v_acc_537_);
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_acc_537_);
v___x_555_ = v_reuseFailAlloc_557_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
else
{
lean_object* v_val_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
lean_del_object(v___x_552_);
v_val_558_ = lean_ctor_get(v_a_550_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v_a_550_, 1);
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = lean_byte_array_size(v_acc_537_);
v___x_561_ = lean_byte_array_size(v_val_558_);
v___x_562_ = 0;
v___x_563_ = lean_byte_array_copy_slice(v_val_558_, v___x_559_, v_acc_537_, v___x_560_, v___x_561_, v___x_562_);
lean_dec(v_val_558_);
v___x_564_ = l_Lasm_Fetch_Request_readAll_loop(v_r_538_, v___x_563_);
return v___x_564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_566_, lean_object* v_r_567_, lean_object* v_x_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_566_, v_r_567_, v_x_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_571_, lean_object* v_acc_572_){
_start:
{
lean_object* v_read_574_; lean_object* v___f_575_; lean_object* v___x_576_; uint8_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_read_574_ = lean_ctor_get(v_r_571_, 4);
lean_inc_ref(v_read_574_);
v___f_575_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_575_, 0, v_acc_572_);
lean_closure_set(v___f_575_, 1, v_r_571_);
v___x_576_ = lean_unsigned_to_nat(0u);
v___x_577_ = 0;
v___x_578_ = lean_apply_1(v_read_574_, lean_box(0));
v___x_579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_576_, v___x_577_, v___x_578_, v___f_575_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_580_, lean_object* v_acc_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lasm_Fetch_Request_readAll_loop(v_r_580_, v_acc_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_584_){
_start:
{
lean_object* v_body_586_; lean_object* v___x_587_; 
v_body_586_ = lean_ctor_get(v_r_584_, 3);
lean_inc_ref(v_body_586_);
v___x_587_ = l_Lasm_Fetch_Request_readAll_loop(v_r_584_, v_body_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lasm_Fetch_Request_readAll(v_r_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_592_, lean_object* v_contentType_593_, uint16_t v_status_594_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_595_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v_contentType_593_);
v___x_597_ = lean_unsigned_to_nat(1u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
v___x_599_ = lean_array_push(v___x_598_, v___x_596_);
v___x_600_ = lean_box(0);
v___x_601_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v_body_592_);
lean_ctor_set(v___x_601_, 2, v___x_600_);
lean_ctor_set_uint16(v___x_601_, sizeof(void*)*3, v_status_594_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_602_, lean_object* v_contentType_603_, lean_object* v_status_604_){
_start:
{
uint16_t v_status_boxed_605_; lean_object* v_res_606_; 
v_status_boxed_605_ = lean_unbox(v_status_604_);
v_res_606_ = l_Lasm_Fetch_Response_withBody(v_body_602_, v_contentType_603_, v_status_boxed_605_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_608_, uint16_t v_status_609_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_string_to_utf8(v_body_608_);
v___x_611_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_612_ = l_Lasm_Fetch_Response_withBody(v___x_610_, v___x_611_, v_status_609_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_613_, lean_object* v_status_614_){
_start:
{
uint16_t v_status_boxed_615_; lean_object* v_res_616_; 
v_status_boxed_615_ = lean_unbox(v_status_614_);
v_res_616_ = l_Lasm_Fetch_Response_text(v_body_613_, v_status_boxed_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_618_, uint16_t v_status_619_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = lean_string_to_utf8(v_body_618_);
v___x_621_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_622_ = l_Lasm_Fetch_Response_withBody(v___x_620_, v___x_621_, v_status_619_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_623_, lean_object* v_status_624_){
_start:
{
uint16_t v_status_boxed_625_; lean_object* v_res_626_; 
v_status_boxed_625_ = lean_unbox(v_status_624_);
v_res_626_ = l_Lasm_Fetch_Response_html(v_body_623_, v_status_boxed_625_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_628_, uint16_t v_status_629_){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_630_ = lean_string_to_utf8(v_body_628_);
v___x_631_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_632_ = l_Lasm_Fetch_Response_withBody(v___x_630_, v___x_631_, v_status_629_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_633_, lean_object* v_status_634_){
_start:
{
uint16_t v_status_boxed_635_; lean_object* v_res_636_; 
v_status_boxed_635_ = lean_unbox(v_status_634_);
v_res_636_ = l_Lasm_Fetch_Response_json(v_body_633_, v_status_boxed_635_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_637_, lean_object* v_contentType_638_, uint16_t v_status_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lasm_Fetch_Response_withBody(v_body_637_, v_contentType_638_, v_status_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_641_, lean_object* v_contentType_642_, lean_object* v_status_643_){
_start:
{
uint16_t v_status_boxed_644_; lean_object* v_res_645_; 
v_status_boxed_644_ = lean_unbox(v_status_643_);
v_res_645_ = l_Lasm_Fetch_Response_bytes(v_body_641_, v_contentType_642_, v_status_boxed_644_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_647_, uint16_t v_status_648_){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_649_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v_location_647_);
v___x_651_ = lean_unsigned_to_nat(1u);
v___x_652_ = lean_mk_empty_array_with_capacity(v___x_651_);
v___x_653_ = lean_array_push(v___x_652_, v___x_650_);
v___x_654_ = l_ByteArray_empty;
v___x_655_ = lean_box(0);
v___x_656_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_656_, 0, v___x_653_);
lean_ctor_set(v___x_656_, 1, v___x_654_);
lean_ctor_set(v___x_656_, 2, v___x_655_);
lean_ctor_set_uint16(v___x_656_, sizeof(void*)*3, v_status_648_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_657_, lean_object* v_status_658_){
_start:
{
uint16_t v_status_boxed_659_; lean_object* v_res_660_; 
v_status_boxed_659_ = lean_unbox(v_status_658_);
v_res_660_ = l_Lasm_Fetch_Response_redirect(v_location_657_, v_status_boxed_659_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_661_, lean_object* v_contentType_662_, uint16_t v_status_663_){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_664_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v_contentType_662_);
v___x_666_ = lean_unsigned_to_nat(1u);
v___x_667_ = lean_mk_empty_array_with_capacity(v___x_666_);
v___x_668_ = lean_array_push(v___x_667_, v___x_665_);
v___x_669_ = l_ByteArray_empty;
v___x_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_670_, 0, v_produce_661_);
v___x_671_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_671_, 0, v___x_668_);
lean_ctor_set(v___x_671_, 1, v___x_669_);
lean_ctor_set(v___x_671_, 2, v___x_670_);
lean_ctor_set_uint16(v___x_671_, sizeof(void*)*3, v_status_663_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_672_, lean_object* v_contentType_673_, lean_object* v_status_674_){
_start:
{
uint16_t v_status_boxed_675_; lean_object* v_res_676_; 
v_status_boxed_675_ = lean_unbox(v_status_674_);
v_res_676_ = l_Lasm_Fetch_Response_streaming(v_produce_672_, v_contentType_673_, v_status_boxed_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_677_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_678_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_679_ = l_ByteArray_empty;
v___x_680_ = lean_box(0);
v___x_681_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_681_, 0, v___x_678_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
lean_ctor_set(v___x_681_, 2, v___x_680_);
lean_ctor_set_uint16(v___x_681_, sizeof(void*)*3, v_status_677_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_682_){
_start:
{
uint16_t v_status_boxed_683_; lean_object* v_res_684_; 
v_status_boxed_683_ = lean_unbox(v_status_682_);
v_res_684_ = l_Lasm_Fetch_Response_empty(v_status_boxed_683_);
return v_res_684_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = 404;
v___x_687_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_688_ = l_Lasm_Fetch_Response_text(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_690_, lean_object* v_name_691_, lean_object* v_value_692_){
_start:
{
uint16_t v_status_693_; lean_object* v_headers_694_; lean_object* v_body_695_; lean_object* v_stream_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_705_; 
v_status_693_ = lean_ctor_get_uint16(v_r_690_, sizeof(void*)*3);
v_headers_694_ = lean_ctor_get(v_r_690_, 0);
v_body_695_ = lean_ctor_get(v_r_690_, 1);
v_stream_696_ = lean_ctor_get(v_r_690_, 2);
v_isSharedCheck_705_ = !lean_is_exclusive(v_r_690_);
if (v_isSharedCheck_705_ == 0)
{
v___x_698_ = v_r_690_;
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_stream_696_);
lean_inc(v_body_695_);
lean_inc(v_headers_694_);
lean_dec(v_r_690_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v_name_691_);
lean_ctor_set(v___x_700_, 1, v_value_692_);
v___x_701_ = lean_array_push(v_headers_694_, v___x_700_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_701_);
v___x_703_ = v___x_698_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_body_695_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_stream_696_);
lean_ctor_set_uint16(v_reuseFailAlloc_704_, sizeof(void*)*3, v_status_693_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_706_, uint16_t v_status_707_){
_start:
{
lean_object* v_headers_708_; lean_object* v_body_709_; lean_object* v_stream_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
v_headers_708_ = lean_ctor_get(v_r_706_, 0);
v_body_709_ = lean_ctor_get(v_r_706_, 1);
v_stream_710_ = lean_ctor_get(v_r_706_, 2);
v_isSharedCheck_717_ = !lean_is_exclusive(v_r_706_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v_r_706_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_stream_710_);
lean_inc(v_body_709_);
lean_inc(v_headers_708_);
lean_dec(v_r_706_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_headers_708_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_body_709_);
lean_ctor_set(v_reuseFailAlloc_716_, 2, v_stream_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_ctor_set_uint16(v___x_715_, sizeof(void*)*3, v_status_707_);
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_718_, lean_object* v_status_719_){
_start:
{
uint16_t v_status_boxed_720_; lean_object* v_res_721_; 
v_status_boxed_720_ = lean_unbox(v_status_719_);
v_res_721_ = l_Lasm_Fetch_Response_withStatus(v_r_718_, v_status_boxed_720_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_722_){
_start:
{
lean_object* v_r_725_; 
if (lean_obj_tag(v_x_722_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
v_a_728_ = lean_ctor_get(v_x_722_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_722_);
if (v_isSharedCheck_736_ == 0)
{
v___x_730_ = v_x_722_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v_x_722_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v_a_738_; 
v_a_737_ = lean_ctor_get(v_x_722_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v_x_722_, 1);
v_a_738_ = lean_ctor_get(v_a_737_, 0);
lean_inc(v_a_738_);
lean_dec(v_a_737_);
v_r_725_ = v_a_738_;
goto v___jp_724_;
}
v___jp_724_:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_726_, 0, v_r_725_);
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_Fetch_respond___lam__0(v_x_739_);
return v_res_741_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = 500;
v___x_744_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_745_ = l_Lasm_Fetch_Response_text(v___x_744_, v___x_743_);
return v___x_745_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
return v___x_749_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_752_){
_start:
{
if (lean_obj_tag(v_x_752_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_762_; 
v_a_754_ = lean_ctor_get(v_x_752_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_752_);
if (v_isSharedCheck_762_ == 0)
{
v___x_756_ = v_x_752_;
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v_x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_761_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
}
else
{
lean_object* v___x_763_; 
lean_dec_ref_known(v_x_752_, 1);
v___x_763_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_Fetch_respond___lam__1(v_x_764_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_767_){
_start:
{
if (lean_obj_tag(v_x_767_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_777_; 
v_a_769_ = lean_ctor_get(v_x_767_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_777_ == 0)
{
v___x_771_ = v_x_767_;
v_isShared_772_ = v_isSharedCheck_777_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v_x_767_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_777_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_776_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_787_; 
v_a_778_ = lean_ctor_get(v_x_767_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_787_ == 0)
{
v___x_780_ = v_x_767_;
v_isShared_781_ = v_isSharedCheck_787_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v_x_767_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_787_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_786_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
v___x_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lasm_Fetch_respond___lam__2(v_x_788_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_794_, lean_object* v_req_795_, lean_object* v___f_796_, lean_object* v_x_797_){
_start:
{
if (lean_obj_tag(v_x_797_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_828_; 
v_a_799_ = lean_ctor_get(v_x_797_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v_x_797_);
if (v_isSharedCheck_828_ == 0)
{
v___x_801_ = v_x_797_;
v_isShared_802_ = v_isSharedCheck_828_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v_x_797_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_828_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; lean_object* v_val_816_; lean_object* v___x_819_; 
v___x_803_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_804_ = lean_string_append(v___x_803_, v_method_794_);
v___x_805_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_806_ = lean_string_append(v___x_804_, v___x_805_);
v___x_807_ = l_Lasm_Fetch_Request_path(v_req_795_);
v___x_808_ = lean_string_append(v___x_806_, v___x_807_);
lean_dec_ref(v___x_807_);
v___x_809_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_810_ = lean_string_append(v___x_808_, v___x_809_);
v___x_811_ = lean_io_error_to_string(v_a_799_);
v___x_812_ = lean_string_append(v___x_810_, v___x_811_);
lean_dec_ref(v___x_811_);
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = 0;
v___x_819_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_812_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_819_, 1);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 1);
lean_ctor_set(v___x_801_, 0, v_a_820_);
v___x_822_ = v___x_801_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v_val_816_ = v___x_822_;
goto v___jp_815_;
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; 
v_a_824_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_819_, 1);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v_a_824_);
v___x_826_ = v___x_801_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
v_val_816_ = v___x_826_;
goto v___jp_815_;
}
}
v___jp_815_:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_val_816_);
v___x_818_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_813_, v___x_814_, v___x_817_, v___f_796_);
return v___x_818_;
}
}
}
else
{
lean_object* v___x_829_; 
lean_dec_ref(v___f_796_);
lean_dec_ref(v_req_795_);
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_x_797_);
return v___x_829_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_830_, lean_object* v_req_831_, lean_object* v___f_832_, lean_object* v_x_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lasm_Fetch_respond___lam__3(v_method_830_, v_req_831_, v___f_832_, v_x_833_);
lean_dec_ref(v_method_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_841_, lean_object* v_req_842_){
_start:
{
lean_object* v_method_844_; lean_object* v_url_845_; lean_object* v_headers_846_; lean_object* v_body_847_; lean_object* v_read_848_; lean_object* v___f_849_; lean_object* v___f_850_; lean_object* v___f_851_; lean_object* v___f_852_; lean_object* v___y_854_; lean_object* v___x_861_; uint8_t v___x_862_; 
v_method_844_ = lean_ctor_get(v_req_842_, 0);
v_url_845_ = lean_ctor_get(v_req_842_, 1);
v_headers_846_ = lean_ctor_get(v_req_842_, 2);
v_body_847_ = lean_ctor_get(v_req_842_, 3);
v_read_848_ = lean_ctor_get(v_req_842_, 4);
v___f_849_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_850_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_851_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_842_);
lean_inc_ref(v_method_844_);
v___f_852_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_852_, 0, v_method_844_);
lean_closure_set(v___f_852_, 1, v_req_842_);
lean_closure_set(v___f_852_, 2, v___f_850_);
v___x_861_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_862_ = lean_string_dec_eq(v_method_844_, v___x_861_);
if (v___x_862_ == 0)
{
v___y_854_ = v_req_842_;
goto v___jp_853_;
}
else
{
lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
lean_inc_ref(v_read_848_);
lean_inc_ref(v_body_847_);
lean_inc_ref(v_headers_846_);
lean_inc_ref(v_url_845_);
v_isSharedCheck_870_ = !lean_is_exclusive(v_req_842_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; lean_object* v_unused_872_; lean_object* v_unused_873_; lean_object* v_unused_874_; lean_object* v_unused_875_; 
v_unused_871_ = lean_ctor_get(v_req_842_, 4);
lean_dec(v_unused_871_);
v_unused_872_ = lean_ctor_get(v_req_842_, 3);
lean_dec(v_unused_872_);
v_unused_873_ = lean_ctor_get(v_req_842_, 2);
lean_dec(v_unused_873_);
v_unused_874_ = lean_ctor_get(v_req_842_, 1);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_req_842_, 0);
lean_dec(v_unused_875_);
v___x_864_ = v_req_842_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_dec(v_req_842_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_url_845_);
lean_ctor_set(v_reuseFailAlloc_869_, 2, v_headers_846_);
lean_ctor_set(v_reuseFailAlloc_869_, 3, v_body_847_);
lean_ctor_set(v_reuseFailAlloc_869_, 4, v_read_848_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
v___y_854_ = v___x_868_;
goto v___jp_853_;
}
}
}
v___jp_853_:
{
lean_object* v___x_855_; uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = 0;
v___x_857_ = lean_apply_2(v_handler_841_, v___y_854_, lean_box(0));
v___x_858_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_855_, v___x_856_, v___x_857_, v___f_851_);
v___x_859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_855_, v___x_856_, v___x_858_, v___f_852_);
v___x_860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_855_, v___x_856_, v___x_859_, v___f_849_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_876_, lean_object* v_req_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lasm_Fetch_respond(v_handler_876_, v_req_877_);
return v_res_879_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_880_, uint16_t v_status_881_){
_start:
{
lean_object* v___x_882_; uint8_t v___x_883_; 
v___x_882_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_883_ = lean_string_dec_eq(v_method_880_, v___x_882_);
if (v___x_883_ == 0)
{
uint16_t v___x_884_; uint8_t v___x_885_; 
v___x_884_ = 101;
v___x_885_ = lean_uint16_dec_eq(v_status_881_, v___x_884_);
if (v___x_885_ == 0)
{
uint16_t v___x_886_; uint8_t v___x_887_; 
v___x_886_ = 204;
v___x_887_ = lean_uint16_dec_eq(v_status_881_, v___x_886_);
if (v___x_887_ == 0)
{
uint16_t v___x_888_; uint8_t v___x_889_; 
v___x_888_ = 205;
v___x_889_ = lean_uint16_dec_eq(v_status_881_, v___x_888_);
if (v___x_889_ == 0)
{
uint16_t v___x_890_; uint8_t v___x_891_; 
v___x_890_ = 304;
v___x_891_ = lean_uint16_dec_eq(v_status_881_, v___x_890_);
return v___x_891_;
}
else
{
return v___x_889_;
}
}
else
{
return v___x_887_;
}
}
else
{
return v___x_885_;
}
}
else
{
return v___x_883_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_892_, lean_object* v_status_893_){
_start:
{
uint16_t v_status_boxed_894_; uint8_t v_res_895_; lean_object* v_r_896_; 
v_status_boxed_894_ = lean_unbox(v_status_893_);
v_res_895_ = l_Lasm_Fetch_bodyless(v_method_892_, v_status_boxed_894_);
lean_dec_ref(v_method_892_);
v_r_896_ = lean_box(v_res_895_);
return v_r_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_898_){
_start:
{
uint32_t v_res_899_; lean_object* v_r_900_; 
v_res_899_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_898_);
v_r_900_ = lean_box_uint32(v_res_899_);
return v_r_900_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = lasm_fetch_take_request();
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_908_, lean_object* v_headers_909_, lean_object* v_body_910_, lean_object* v_a_00___x40___internal___hyg_911_){
_start:
{
uint16_t v_status_boxed_912_; lean_object* v_res_913_; 
v_status_boxed_912_ = lean_unbox(v_status_908_);
v_res_913_ = lasm_fetch_send_response(v_status_boxed_912_, v_headers_909_, v_body_910_);
lean_dec_ref(v_body_910_);
lean_dec_ref(v_headers_909_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = lasm_fetch_take_request_head();
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_919_, lean_object* v_a_00___x40___internal___hyg_920_){
_start:
{
uint32_t v_max_boxed_921_; lean_object* v_res_922_; 
v_max_boxed_921_ = lean_unbox_uint32(v_max_919_);
lean_dec(v_max_919_);
v_res_922_ = lasm_fetch_read(v_max_boxed_921_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_926_, lean_object* v_headers_927_, lean_object* v_a_00___x40___internal___hyg_928_){
_start:
{
uint16_t v_status_boxed_929_; lean_object* v_res_930_; 
v_status_boxed_929_ = lean_unbox(v_status_926_);
v_res_930_ = lasm_fetch_start_response(v_status_boxed_929_, v_headers_927_);
lean_dec_ref(v_headers_927_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_933_, lean_object* v_a_00___x40___internal___hyg_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = lasm_fetch_write(v_chunk_933_);
lean_dec_ref(v_chunk_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_938_, lean_object* v_a_00___x40___internal___hyg_939_){
_start:
{
uint8_t v_ok_boxed_940_; lean_object* v_res_941_; 
v_ok_boxed_940_ = lean_unbox(v_ok_938_);
v_res_941_ = lasm_fetch_finish(v_ok_boxed_940_);
return v_res_941_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_942_){
_start:
{
uint8_t v___x_943_; 
v___x_943_ = 0;
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_944_);
lean_dec_ref(v_x_944_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_956_){
_start:
{
lean_object* v_b_959_; 
if (lean_obj_tag(v_x_956_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_973_; 
v_a_965_ = lean_ctor_get(v_x_956_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v_x_956_);
if (v_isSharedCheck_973_ == 0)
{
v___x_967_ = v_x_956_;
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v_x_956_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_972_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_a_974_ = lean_ctor_get(v_x_956_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v_x_956_, 1);
v___x_975_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_976_ = l_Lasm_JS_Data_field(v_a_974_, v___x_975_);
if (lean_obj_tag(v___x_976_) == 2)
{
uint8_t v_b_977_; 
v_b_977_ = lean_ctor_get_uint8(v___x_976_, 0);
lean_dec_ref_known(v___x_976_, 0);
if (v_b_977_ == 1)
{
lean_object* v___x_978_; 
lean_dec(v_a_974_);
v___x_978_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_978_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_980_ = l_Lasm_JS_Data_field(v_a_974_, v___x_979_);
lean_dec(v_a_974_);
if (lean_obj_tag(v___x_980_) == 6)
{
lean_object* v_b_981_; 
v_b_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc_ref(v_b_981_);
lean_dec_ref_known(v___x_980_, 1);
v_b_959_ = v_b_981_;
goto v___jp_958_;
}
else
{
lean_dec(v___x_980_);
goto v___jp_963_;
}
}
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; 
lean_dec(v___x_976_);
v___x_982_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_983_ = l_Lasm_JS_Data_field(v_a_974_, v___x_982_);
lean_dec(v_a_974_);
if (lean_obj_tag(v___x_983_) == 6)
{
lean_object* v_b_984_; 
v_b_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc_ref(v_b_984_);
lean_dec_ref_known(v___x_983_, 1);
v_b_959_ = v_b_984_;
goto v___jp_958_;
}
else
{
lean_dec(v___x_983_);
goto v___jp_963_;
}
}
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_960_, 0, v_b_959_);
v___x_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
v___jp_963_:
{
lean_object* v___x_964_; 
v___x_964_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_985_);
return v_res_987_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_988_; uint64_t v___x_989_; 
v___x_988_ = 0;
v___x_989_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_990_, uint64_t v_extra_991_){
_start:
{
uint64_t v___x_992_; uint64_t v___y_994_; 
v___x_992_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_990_ == 0)
{
uint64_t v___x_997_; 
v___x_997_ = 0ULL;
v___y_994_ = v___x_997_;
goto v___jp_993_;
}
else
{
uint64_t v___x_998_; 
v___x_998_ = 2ULL;
v___y_994_ = v___x_998_;
goto v___jp_993_;
}
v___jp_993_:
{
uint64_t v___x_995_; uint64_t v___x_996_; 
v___x_995_ = lean_uint64_lor(v___x_992_, v___y_994_);
v___x_996_ = lean_uint64_lor(v___x_995_, v_extra_991_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_999_, lean_object* v_extra_1000_){
_start:
{
uint8_t v_await_boxed_1001_; uint64_t v_extra_boxed_1002_; uint64_t v_res_1003_; lean_object* v_r_1004_; 
v_await_boxed_1001_ = lean_unbox(v_await_999_);
v_extra_boxed_1002_ = lean_unbox_uint64(v_extra_1000_);
lean_dec_ref(v_extra_1000_);
v_res_1003_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1001_, v_extra_boxed_1002_);
v_r_1004_ = lean_box_uint64(v_res_1003_);
return v_r_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1005_){
_start:
{
if (lean_obj_tag(v_x_1005_) == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1007_, 0, v_x_1005_);
return v___x_1007_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1016_; 
v_a_1008_ = lean_ctor_get(v_x_1005_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_x_1005_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1010_ = v_x_1005_;
v_isShared_1011_ = v_isSharedCheck_1016_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v_x_1005_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1016_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
return v___x_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1020_, lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1021_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1031_; 
v_a_1023_ = lean_ctor_get(v_x_1021_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_x_1021_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1025_ = v_x_1021_;
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v_x_1021_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1031_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
}
}
else
{
lean_object* v___x_1032_; 
lean_dec_ref_known(v_x_1021_, 1);
v___x_1032_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1020_);
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1033_, v_x_1034_);
lean_dec(v_a_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1037_, lean_object* v_failurePrefix_1038_, lean_object* v___f_1039_, lean_object* v___f_1040_, uint32_t v_op_1041_, uint64_t v_flags_1042_, lean_object* v___f_1043_, lean_object* v_x_1044_){
_start:
{
if (lean_obj_tag(v_x_1044_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v___f_1043_);
lean_dec_ref(v___f_1040_);
lean_dec_ref(v___f_1039_);
lean_dec(v_payload_1037_);
v_a_1046_ = lean_ctor_get(v_x_1044_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_x_1044_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1048_ = v_x_1044_;
v_isShared_1049_ = v_isSharedCheck_1054_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v_x_1044_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1054_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___x_1052_; 
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1096_; 
v_a_1055_ = lean_ctor_get(v_x_1044_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_x_1044_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1057_ = v_x_1044_;
v_isShared_1058_ = v_isSharedCheck_1096_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v_x_1044_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1096_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
uint32_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1059_ = 0;
lean_inc(v_payload_1037_);
v___x_1060_ = l_Lasm_JS_Wire_encode(v_payload_1037_);
v___x_1061_ = lean_string_utf8_byte_size(v_failurePrefix_1038_);
v___x_1062_ = lean_unsigned_to_nat(0u);
v___x_1063_ = lean_nat_dec_eq(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___f_1064_; lean_object* v_val_1066_; lean_object* v___x_1071_; 
lean_dec_ref(v___f_1043_);
lean_inc(v_a_1055_);
v___f_1064_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1064_, 0, v_a_1055_);
v___x_1071_ = lasm_js_call_into(v_a_1055_, v_op_1041_, v___x_1059_, v_flags_1042_, v___x_1060_, v_payload_1037_);
lean_dec(v_payload_1037_);
lean_dec_ref(v___x_1060_);
lean_dec(v_a_1055_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v_a_1072_);
v___x_1074_ = v___x_1057_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1072_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
v_val_1066_ = v___x_1074_;
goto v___jp_1065_;
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1071_, 1);
if (v_isShared_1058_ == 0)
{
lean_ctor_set_tag(v___x_1057_, 0);
lean_ctor_set(v___x_1057_, 0, v_a_1076_);
v___x_1078_ = v___x_1057_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
v_val_1066_ = v___x_1078_;
goto v___jp_1065_;
}
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v_val_1066_);
v___x_1068_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1062_, v___x_1063_, v___x_1067_, v___f_1064_);
v___x_1069_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1062_, v___x_1063_, v___x_1068_, v___f_1039_);
v___x_1070_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1062_, v___x_1063_, v___x_1069_, v___f_1040_);
return v___x_1070_;
}
}
else
{
lean_object* v___f_1080_; uint8_t v___x_1081_; lean_object* v_val_1083_; lean_object* v___x_1087_; 
lean_dec_ref(v___f_1040_);
lean_dec_ref(v___f_1039_);
lean_inc(v_a_1055_);
v___f_1080_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1080_, 0, v_a_1055_);
v___x_1081_ = 0;
v___x_1087_ = lasm_js_call_into(v_a_1055_, v_op_1041_, v___x_1059_, v_flags_1042_, v___x_1060_, v_payload_1037_);
lean_dec(v_payload_1037_);
lean_dec_ref(v___x_1060_);
lean_dec(v_a_1055_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v_a_1088_);
v___x_1090_ = v___x_1057_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
v_val_1083_ = v___x_1090_;
goto v___jp_1082_;
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; 
v_a_1092_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1087_, 1);
if (v_isShared_1058_ == 0)
{
lean_ctor_set_tag(v___x_1057_, 0);
lean_ctor_set(v___x_1057_, 0, v_a_1092_);
v___x_1094_ = v___x_1057_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
v_val_1083_ = v___x_1094_;
goto v___jp_1082_;
}
}
v___jp_1082_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v_val_1083_);
v___x_1085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1062_, v___x_1081_, v___x_1084_, v___f_1080_);
v___x_1086_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1062_, v___x_1081_, v___x_1085_, v___f_1043_);
return v___x_1086_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1097_, lean_object* v_failurePrefix_1098_, lean_object* v___f_1099_, lean_object* v___f_1100_, lean_object* v_op_1101_, lean_object* v_flags_1102_, lean_object* v___f_1103_, lean_object* v_x_1104_, lean_object* v___y_1105_){
_start:
{
uint32_t v_op_boxed_1106_; uint64_t v_flags_boxed_1107_; lean_object* v_res_1108_; 
v_op_boxed_1106_ = lean_unbox_uint32(v_op_1101_);
lean_dec(v_op_1101_);
v_flags_boxed_1107_ = lean_unbox_uint64(v_flags_1102_);
lean_dec_ref(v_flags_1102_);
v_res_1108_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1097_, v_failurePrefix_1098_, v___f_1099_, v___f_1100_, v_op_boxed_1106_, v_flags_boxed_1107_, v___f_1103_, v_x_1104_);
lean_dec_ref(v_failurePrefix_1098_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1109_, lean_object* v_bytes_1110_){
_start:
{
lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v_val_1115_; lean_object* v___x_1118_; 
v___x_1112_ = lean_unsigned_to_nat(0u);
v___x_1113_ = 0;
v___x_1118_ = l_Lasm_JS_Wire_decode(v_bytes_1110_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1118_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1118_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
lean_ctor_set_tag(v___x_1121_, 1);
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
v_val_1115_ = v___x_1124_;
goto v___jp_1114_;
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
v_a_1127_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1118_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1118_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set_tag(v___x_1129_, 0);
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
v_val_1115_ = v___x_1132_;
goto v___jp_1114_;
}
}
}
v___jp_1114_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_val_1115_);
v___x_1117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1112_, v___x_1113_, v___x_1116_, v___f_1109_);
return v___x_1117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1135_, lean_object* v_bytes_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1135_, v_bytes_1136_);
lean_dec_ref(v_bytes_1136_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1139_, lean_object* v_x_1140_){
_start:
{
if (lean_obj_tag(v_x_1140_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1153_; 
v_a_1142_ = lean_ctor_get(v_x_1140_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_x_1140_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1144_ = v_x_1140_;
v_isShared_1145_ = v_isSharedCheck_1153_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v_x_1140_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1153_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1146_ = lean_io_error_to_string(v_a_1142_);
v___x_1147_ = lean_string_append(v_failurePrefix_1139_, v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1148_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1148_);
v___x_1150_ = v___x_1144_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
else
{
lean_object* v___x_1154_; 
lean_dec_ref(v_failurePrefix_1139_);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_x_1140_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1155_, lean_object* v_x_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1155_, v_x_1156_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1159_, lean_object* v_x_1160_){
_start:
{
if (lean_obj_tag(v_x_1160_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1170_; 
lean_dec_ref(v___f_1159_);
v_a_1162_ = lean_ctor_get(v_x_1160_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1160_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1164_ = v_x_1160_;
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v_x_1160_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; 
v_a_1171_ = lean_ctor_get(v_x_1160_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v_x_1160_, 1);
v___x_1172_ = lean_apply_2(v___f_1159_, v_a_1171_, lean_box(0));
return v___x_1172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1173_, lean_object* v_x_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1173_, v_x_1174_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1177_, lean_object* v_x_1178_){
_start:
{
if (lean_obj_tag(v_x_1178_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1188_; 
lean_dec_ref(v___f_1177_);
v_a_1180_ = lean_ctor_get(v_x_1178_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_x_1178_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1182_ = v_x_1178_;
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v_x_1178_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
return v___x_1186_;
}
}
}
else
{
lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1200_; 
v_isSharedCheck_1200_ = !lean_is_exclusive(v_x_1178_);
if (v_isSharedCheck_1200_ == 0)
{
lean_object* v_unused_1201_; 
v_unused_1201_ = lean_ctor_get(v_x_1178_, 0);
lean_dec(v_unused_1201_);
v___x_1190_ = v_x_1178_;
v_isShared_1191_ = v_isSharedCheck_1200_;
goto v_resetjp_1189_;
}
else
{
lean_dec(v_x_1178_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1200_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1192_; uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1192_ = lean_unsigned_to_nat(0u);
v___x_1193_ = 0;
v___x_1194_ = lean_io_promise_new();
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 0, v___x_1194_);
v___x_1196_ = v___x_1190_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
v___x_1198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1192_, v___x_1193_, v___x_1197_, v___f_1177_);
return v___x_1198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1202_, lean_object* v_x_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1202_, v_x_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1211_, uint64_t v_flags_1212_, lean_object* v_payload_1213_, lean_object* v_failurePrefix_1214_){
_start:
{
lean_object* v___f_1216_; lean_object* v___f_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v_val_1225_; lean_object* v___x_1228_; 
lean_inc_ref(v_failurePrefix_1214_);
v___f_1216_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1216_, 0, v_failurePrefix_1214_);
v___f_1217_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1218_ = lean_box_uint32(v_op_1211_);
v___x_1219_ = lean_box_uint64(v_flags_1212_);
v___f_1220_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1220_, 0, v_payload_1213_);
lean_closure_set(v___f_1220_, 1, v_failurePrefix_1214_);
lean_closure_set(v___f_1220_, 2, v___f_1216_);
lean_closure_set(v___f_1220_, 3, v___f_1217_);
lean_closure_set(v___f_1220_, 4, v___x_1218_);
lean_closure_set(v___f_1220_, 5, v___x_1219_);
lean_closure_set(v___f_1220_, 6, v___f_1217_);
v___f_1221_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1221_, 0, v___f_1220_);
v___x_1222_ = lean_unsigned_to_nat(0u);
v___x_1223_ = 0;
v___x_1228_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set_tag(v___x_1231_, 1);
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_val_1225_ = v___x_1234_;
goto v___jp_1224_;
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_a_1237_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1228_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1228_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set_tag(v___x_1239_, 0);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
v_val_1225_ = v___x_1242_;
goto v___jp_1224_;
}
}
}
v___jp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_val_1225_);
v___x_1227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1222_, v___x_1223_, v___x_1226_, v___f_1221_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1245_, lean_object* v_flags_1246_, lean_object* v_payload_1247_, lean_object* v_failurePrefix_1248_, lean_object* v_a_1249_){
_start:
{
uint32_t v_op_boxed_1250_; uint64_t v_flags_boxed_1251_; lean_object* v_res_1252_; 
v_op_boxed_1250_ = lean_unbox_uint32(v_op_1245_);
lean_dec(v_op_1245_);
v_flags_boxed_1251_ = lean_unbox_uint64(v_flags_1246_);
lean_dec_ref(v_flags_1246_);
v_res_1252_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1250_, v_flags_boxed_1251_, v_payload_1247_, v_failurePrefix_1248_);
return v_res_1252_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1253_; uint8_t v___x_1254_; uint64_t v___x_1255_; 
v___x_1253_ = 8ULL;
v___x_1254_ = 0;
v___x_1255_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1254_, v___x_1253_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1256_, lean_object* v_name_1257_, lean_object* v_args_1258_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint32_t v___x_1263_; uint64_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1260_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1261_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1261_, 0, v_o_1256_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_name_1257_);
v___x_1263_ = 205;
v___x_1264_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1265_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_args_1258_);
v___x_1266_ = lean_unsigned_to_nat(3u);
v___x_1267_ = lean_mk_empty_array_with_capacity(v___x_1266_);
v___x_1268_ = lean_array_push(v___x_1267_, v___x_1261_);
v___x_1269_ = lean_array_push(v___x_1268_, v___x_1262_);
v___x_1270_ = lean_array_push(v___x_1269_, v___x_1265_);
v___x_1271_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
v___x_1272_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1263_, v___x_1264_, v___x_1271_, v___x_1260_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1273_, lean_object* v_name_1274_, lean_object* v_args_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1273_, v_name_1274_, v_args_1275_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1278_, lean_object* v___x_1279_, lean_object* v___x_1280_, lean_object* v___x_1281_, lean_object* v___f_1282_){
_start:
{
uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = 0;
v___x_1285_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1278_, v___x_1279_, v___x_1280_);
v___x_1286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1281_, v___x_1284_, v___x_1285_, v___f_1282_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1287_, lean_object* v___x_1288_, lean_object* v___x_1289_, lean_object* v___x_1290_, lean_object* v___f_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1287_, v___x_1288_, v___x_1289_, v___x_1290_, v___f_1291_);
return v_res_1293_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1294_; uint64_t v___x_1295_; 
v___x_1294_ = 1;
v___x_1295_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1296_, uint64_t v_extra_1297_){
_start:
{
uint64_t v___x_1298_; uint64_t v___y_1300_; 
v___x_1298_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1296_ == 0)
{
uint64_t v___x_1303_; 
v___x_1303_ = 0ULL;
v___y_1300_ = v___x_1303_;
goto v___jp_1299_;
}
else
{
uint64_t v___x_1304_; 
v___x_1304_ = 2ULL;
v___y_1300_ = v___x_1304_;
goto v___jp_1299_;
}
v___jp_1299_:
{
uint64_t v___x_1301_; uint64_t v___x_1302_; 
v___x_1301_ = lean_uint64_lor(v___x_1298_, v___y_1300_);
v___x_1302_ = lean_uint64_lor(v___x_1301_, v_extra_1297_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1305_, lean_object* v_extra_1306_){
_start:
{
uint8_t v_await_boxed_1307_; uint64_t v_extra_boxed_1308_; uint64_t v_res_1309_; lean_object* v_r_1310_; 
v_await_boxed_1307_ = lean_unbox(v_await_1305_);
v_extra_boxed_1308_ = lean_unbox_uint64(v_extra_1306_);
lean_dec_ref(v_extra_1306_);
v_res_1309_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1307_, v_extra_boxed_1308_);
v_r_1310_ = lean_box_uint64(v_res_1309_);
return v_r_1310_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1311_; uint8_t v___x_1312_; uint64_t v___x_1313_; 
v___x_1311_ = 8ULL;
v___x_1312_ = 0;
v___x_1313_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1312_, v___x_1311_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1315_, lean_object* v_name_1316_, lean_object* v_args_1317_){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; uint64_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1319_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1320_, 0, v_o_1315_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
lean_inc_ref(v_name_1316_);
v___x_1321_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1321_, 0, v_name_1316_);
v___x_1322_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1323_ = l_Lasm_JS_Value_invokeRaw(v___x_1320_, v___x_1321_, v_args_1317_, v___x_1322_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1326_ = lean_string_append(v___x_1325_, v_name_1316_);
lean_dec_ref(v_name_1316_);
v___x_1327_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1326_, v_a_1324_);
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1326_);
return v___x_1327_;
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_dec_ref(v_name_1316_);
v_a_1328_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1323_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1323_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1336_, lean_object* v_name_1337_, lean_object* v_args_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1336_, v_name_1337_, v_args_1338_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1346_){
_start:
{
lean_object* v___f_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___f_1348_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1349_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1350_ = lean_unsigned_to_nat(0u);
v___x_1351_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1352_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1346_, v___x_1349_, v___x_1351_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1362_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1362_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1362_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___f_1358_; lean_object* v___x_1360_; 
v___x_1357_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1358_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1358_, 0, v_a_1353_);
lean_closure_set(v___f_1358_, 1, v___x_1357_);
lean_closure_set(v___f_1358_, 2, v___x_1351_);
lean_closure_set(v___f_1358_, 3, v___x_1350_);
lean_closure_set(v___f_1358_, 4, v___f_1348_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___f_1358_);
v___x_1360_ = v___x_1355_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___f_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1352_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1352_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1371_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1374_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1376_, 0, v_d_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1380_, lean_object* v_d_1381_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1383_, 0, v_d_1381_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1384_, lean_object* v_d_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1384_, v_d_1385_);
lean_dec_ref(v_context_1384_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1388_, uint32_t v_op_1389_, uint64_t v_flags_1390_, lean_object* v_payload_1391_, lean_object* v_failurePrefix_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1389_, v_flags_1390_, v_payload_1391_, v_failurePrefix_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1395_, lean_object* v_op_1396_, lean_object* v_flags_1397_, lean_object* v_payload_1398_, lean_object* v_failurePrefix_1399_, lean_object* v_a_1400_){
_start:
{
uint32_t v_op_boxed_1401_; uint64_t v_flags_boxed_1402_; lean_object* v_res_1403_; 
v_op_boxed_1401_ = lean_unbox_uint32(v_op_1396_);
lean_dec(v_op_1396_);
v_flags_boxed_1402_ = lean_unbox_uint64(v_flags_1397_);
lean_dec_ref(v_flags_1397_);
v_res_1403_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1395_, v_op_boxed_1401_, v_flags_boxed_1402_, v_payload_1398_, v_failurePrefix_1399_);
lean_dec_ref(v_context_1395_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1408_){
_start:
{
if (lean_obj_tag(v_x_1408_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1418_; 
v_a_1410_ = lean_ctor_get(v_x_1408_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_x_1408_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1412_ = v_x_1408_;
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v_x_1408_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
}
else
{
lean_object* v___x_1419_; 
lean_dec_ref_known(v_x_1408_, 1);
v___x_1419_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1420_);
return v_res_1422_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1423_; uint8_t v___x_1424_; uint64_t v___x_1425_; 
v___x_1423_ = 4ULL;
v___x_1424_ = 0;
v___x_1425_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1424_, v___x_1423_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1427_, lean_object* v_args_1428_){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; uint64_t v___x_1433_; lean_object* v___x_1434_; 
v___x_1430_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1431_, 0, v_c_1427_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_box(0);
v___x_1433_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1434_ = l_Lasm_JS_Value_invokeRaw(v___x_1431_, v___x_1432_, v_args_1428_, v___x_1433_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1437_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1436_, v_a_1435_);
lean_dec(v_a_1435_);
return v___x_1437_;
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_a_1438_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1434_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1434_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1446_, lean_object* v_args_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1446_, v_args_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1450_, lean_object* v___x_1451_, lean_object* v_x_1452_){
_start:
{
lean_object* v_val_1455_; 
if (lean_obj_tag(v_x_1452_) == 0)
{
lean_object* v___x_1457_; 
lean_dec(v___x_1451_);
lean_dec(v___y_1450_);
v___x_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1457_, 0, v_x_1452_);
return v___x_1457_;
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1475_; 
v_a_1458_ = lean_ctor_get(v_x_1452_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_x_1452_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1460_ = v_x_1452_;
v_isShared_1461_ = v_isSharedCheck_1475_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v_x_1452_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1475_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1462_ = lean_unsigned_to_nat(2u);
v___x_1463_ = lean_mk_empty_array_with_capacity(v___x_1462_);
v___x_1464_ = lean_array_push(v___x_1463_, v___y_1450_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1451_);
v___x_1466_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1458_, v___x_1465_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1469_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_a_1467_);
v___x_1469_ = v___x_1460_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
v_val_1455_ = v___x_1469_;
goto v___jp_1454_;
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; 
v_a_1471_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1466_, 1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set_tag(v___x_1460_, 0);
lean_ctor_set(v___x_1460_, 0, v_a_1471_);
v___x_1473_ = v___x_1460_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1471_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
v_val_1455_ = v___x_1473_;
goto v___jp_1454_;
}
}
}
}
v___jp_1454_:
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v_val_1455_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_1476_, lean_object* v___x_1477_, lean_object* v_x_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_1476_, v___x_1477_, v_x_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_1481_, lean_object* v___x_1482_, lean_object* v_x_1483_){
_start:
{
lean_object* v_val_1486_; 
if (lean_obj_tag(v_x_1483_) == 0)
{
lean_object* v___x_1488_; 
lean_dec(v___x_1482_);
lean_dec(v_a_1481_);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v_x_1483_);
return v___x_1488_;
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1508_; 
v_a_1489_ = lean_ctor_get(v_x_1483_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_x_1483_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1491_ = v_x_1483_;
v_isShared_1492_ = v_isSharedCheck_1508_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v_x_1483_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1508_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1493_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1494_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1494_, 0, v_a_1481_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_unsigned_to_nat(2u);
v___x_1496_ = lean_mk_empty_array_with_capacity(v___x_1495_);
v___x_1497_ = lean_array_push(v___x_1496_, v___x_1494_);
v___x_1498_ = lean_array_push(v___x_1497_, v___x_1482_);
v___x_1499_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1489_, v___x_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1499_, 1);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v_a_1500_);
v___x_1502_ = v___x_1491_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
v_val_1486_ = v___x_1502_;
goto v___jp_1485_;
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; 
v_a_1504_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1499_, 1);
if (v_isShared_1492_ == 0)
{
lean_ctor_set_tag(v___x_1491_, 0);
lean_ctor_set(v___x_1491_, 0, v_a_1504_);
v___x_1506_ = v___x_1491_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
v_val_1486_ = v___x_1506_;
goto v___jp_1485_;
}
}
}
}
v___jp_1485_:
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v_val_1486_);
return v___x_1487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_1509_, lean_object* v___x_1510_, lean_object* v_x_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_1509_, v___x_1510_, v_x_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_1515_, lean_object* v_key_1516_){
_start:
{
uint32_t v___x_1518_; uint32_t v___x_1519_; uint64_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1518_ = 203;
v___x_1519_ = lasm_js_value_handle(v_o_1515_);
v___x_1520_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_1516_);
v___x_1521_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1521_, 0, v_key_1516_);
v___x_1522_ = l_Lasm_JS_Wire_encode(v___x_1521_);
v___x_1523_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1524_, 0, v_o_1515_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lasm_js_call(v___x_1518_, v___x_1519_, v___x_1520_, v___x_1522_, v___x_1524_);
lean_dec_ref_known(v___x_1524_, 2);
lean_dec_ref(v___x_1522_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_1528_ = l_String_quote(v_key_1516_);
v___x_1529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
v___x_1530_ = lean_unsigned_to_nat(120u);
v___x_1531_ = lean_unsigned_to_nat(0u);
v___x_1532_ = l_Std_Format_pretty(v___x_1529_, v___x_1530_, v___x_1531_, v___x_1531_);
v___x_1533_ = lean_string_append(v___x_1527_, v___x_1532_);
lean_dec_ref(v___x_1532_);
v___x_1534_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1533_, v_a_1526_);
lean_dec(v_a_1526_);
lean_dec_ref(v___x_1533_);
return v___x_1534_;
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref(v_key_1516_);
v_a_1535_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1525_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1525_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_1543_, lean_object* v_key_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_1543_, v_key_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_1548_, uint8_t v___x_1549_, lean_object* v___f_1550_, lean_object* v_a_1551_, lean_object* v_x_1552_){
_start:
{
lean_object* v_val_1555_; 
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1566_; 
lean_dec(v_a_1551_);
lean_dec_ref(v___f_1550_);
lean_dec(v___x_1548_);
v_a_1558_ = lean_ctor_get(v_x_1552_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v_x_1552_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1560_ = v_x_1552_;
v_isShared_1561_ = v_isSharedCheck_1566_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v_x_1552_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1566_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
}
else
{
lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1580_; 
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1552_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; 
v_unused_1581_ = lean_ctor_get(v_x_1552_, 0);
lean_dec(v_unused_1581_);
v___x_1568_ = v_x_1552_;
v_isShared_1569_ = v_isSharedCheck_1580_;
goto v_resetjp_1567_;
}
else
{
lean_dec(v_x_1552_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1580_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_1571_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1551_, v___x_1570_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1574_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1571_, 1);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v_a_1572_);
v___x_1574_ = v___x_1568_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1572_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
v_val_1555_ = v___x_1574_;
goto v___jp_1554_;
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; 
v_a_1576_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v___x_1571_, 1);
if (v_isShared_1569_ == 0)
{
lean_ctor_set_tag(v___x_1568_, 0);
lean_ctor_set(v___x_1568_, 0, v_a_1576_);
v___x_1578_ = v___x_1568_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
v_val_1555_ = v___x_1578_;
goto v___jp_1554_;
}
}
}
}
v___jp_1554_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v_val_1555_);
v___x_1557_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1548_, v___x_1549_, v___x_1556_, v___f_1550_);
return v___x_1557_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_1582_, lean_object* v___x_1583_, lean_object* v___f_1584_, lean_object* v_a_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_){
_start:
{
uint8_t v___x_5404__boxed_1588_; lean_object* v_res_1589_; 
v___x_5404__boxed_1588_ = lean_unbox(v___x_1583_);
v_res_1589_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_1582_, v___x_5404__boxed_1588_, v___f_1584_, v_a_1585_, v_x_1586_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_1591_, lean_object* v___x_1592_, uint8_t v___x_1593_, lean_object* v___f_1594_, lean_object* v_chunk_1595_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1597_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_1598_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_chunk_1595_);
v___x_1599_ = lean_unsigned_to_nat(1u);
v___x_1600_ = lean_mk_empty_array_with_capacity(v___x_1599_);
v___x_1601_ = lean_array_push(v___x_1600_, v___x_1598_);
v___x_1602_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1591_, v___x_1597_, v___x_1601_);
v___x_1603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1592_, v___x_1593_, v___x_1602_, v___f_1594_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_1604_, lean_object* v___x_1605_, lean_object* v___x_1606_, lean_object* v___f_1607_, lean_object* v_chunk_1608_, lean_object* v___y_1609_){
_start:
{
uint8_t v___x_5483__boxed_1610_; lean_object* v_res_1611_; 
v___x_5483__boxed_1610_ = lean_unbox(v___x_1606_);
v_res_1611_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_1604_, v___x_1605_, v___x_5483__boxed_1610_, v___f_1607_, v_chunk_1608_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_1613_, lean_object* v_a_1614_, lean_object* v___x_1615_, uint8_t v___x_1616_, lean_object* v___f_1617_, lean_object* v_x_1618_){
_start:
{
if (lean_obj_tag(v_x_1618_) == 0)
{
lean_object* v___x_1620_; 
lean_dec_ref(v___f_1617_);
lean_dec(v___x_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v___x_1613_);
v___x_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1620_, 0, v_x_1618_);
return v___x_1620_;
}
else
{
lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1633_; 
v_isSharedCheck_1633_ = !lean_is_exclusive(v_x_1618_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v_x_1618_, 0);
lean_dec(v_unused_1634_);
v___x_1622_ = v_x_1618_;
v_isShared_1623_ = v_isSharedCheck_1633_;
goto v_resetjp_1621_;
}
else
{
lean_dec(v_x_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1633_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1624_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_1623_ == 0)
{
lean_ctor_set_tag(v___x_1622_, 4);
lean_ctor_set(v___x_1622_, 0, v___x_1613_);
v___x_1626_ = v___x_1622_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1613_);
v___x_1626_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1627_ = lean_unsigned_to_nat(1u);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1627_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1626_);
v___x_1630_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1614_, v___x_1624_, v___x_1629_);
v___x_1631_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1615_, v___x_1616_, v___x_1630_, v___f_1617_);
return v___x_1631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_1635_, lean_object* v_a_1636_, lean_object* v___x_1637_, lean_object* v___x_1638_, lean_object* v___f_1639_, lean_object* v_x_1640_, lean_object* v___y_1641_){
_start:
{
uint8_t v___x_5516__boxed_1642_; lean_object* v_res_1643_; 
v___x_5516__boxed_1642_ = lean_unbox(v___x_1638_);
v_res_1643_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_1635_, v_a_1636_, v___x_1637_, v___x_5516__boxed_1642_, v___f_1639_, v_x_1640_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_1645_, lean_object* v___x_1646_, uint8_t v___x_1647_, lean_object* v___f_1648_, lean_object* v_x_1649_){
_start:
{
if (lean_obj_tag(v_x_1649_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1673_; 
v_a_1651_ = lean_ctor_get(v_x_1649_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_x_1649_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1653_ = v_x_1649_;
v_isShared_1654_ = v_isSharedCheck_1673_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v_x_1649_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1673_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___f_1658_; lean_object* v_val_1660_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1655_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_1656_ = lean_io_error_to_string(v_a_1651_);
v___x_1657_ = lean_box(v___x_1647_);
lean_inc(v___x_1646_);
lean_inc_ref(v___x_1656_);
v___f_1658_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_1658_, 0, v___x_1656_);
lean_closure_set(v___f_1658_, 1, v_a_1645_);
lean_closure_set(v___f_1658_, 2, v___x_1646_);
lean_closure_set(v___f_1658_, 3, v___x_1657_);
lean_closure_set(v___f_1658_, 4, v___f_1648_);
v___x_1663_ = lean_string_append(v___x_1655_, v___x_1656_);
lean_dec_ref(v___x_1656_);
v___x_1664_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1663_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1667_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1664_, 1);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 1);
lean_ctor_set(v___x_1653_, 0, v_a_1665_);
v___x_1667_ = v___x_1653_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1665_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
v_val_1660_ = v___x_1667_;
goto v___jp_1659_;
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; 
v_a_1669_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1664_, 1);
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 0, v_a_1669_);
v___x_1671_ = v___x_1653_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
v_val_1660_ = v___x_1671_;
goto v___jp_1659_;
}
}
v___jp_1659_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v_val_1660_);
v___x_1662_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1646_, v___x_1647_, v___x_1661_, v___f_1658_);
return v___x_1662_;
}
}
}
else
{
lean_object* v___x_1674_; 
lean_dec_ref(v___f_1648_);
lean_dec(v___x_1646_);
lean_dec(v_a_1645_);
v___x_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1674_, 0, v_x_1649_);
return v___x_1674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_1675_, lean_object* v___x_1676_, lean_object* v___x_1677_, lean_object* v___f_1678_, lean_object* v_x_1679_, lean_object* v___y_1680_){
_start:
{
uint8_t v___x_5571__boxed_1681_; lean_object* v_res_1682_; 
v___x_5571__boxed_1681_ = lean_unbox(v___x_1677_);
v_res_1682_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_1675_, v___x_1676_, v___x_5571__boxed_1681_, v___f_1678_, v_x_1679_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_1684_, lean_object* v___x_1685_, lean_object* v___x_1686_, uint8_t v___x_1687_, lean_object* v___f_1688_, lean_object* v_x_1689_){
_start:
{
if (lean_obj_tag(v_x_1689_) == 0)
{
lean_object* v___x_1691_; 
lean_dec_ref(v___f_1688_);
lean_dec(v___x_1686_);
lean_dec_ref(v___x_1685_);
lean_dec(v_a_1684_);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_x_1689_);
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_dec_ref_known(v_x_1689_, 1);
v___x_1692_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_1693_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1684_, v___x_1692_, v___x_1685_);
v___x_1694_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1686_, v___x_1687_, v___x_1693_, v___f_1688_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_1695_, lean_object* v___x_1696_, lean_object* v___x_1697_, lean_object* v___x_1698_, lean_object* v___f_1699_, lean_object* v_x_1700_, lean_object* v___y_1701_){
_start:
{
uint8_t v___x_5642__boxed_1702_; lean_object* v_res_1703_; 
v___x_5642__boxed_1702_ = lean_unbox(v___x_1698_);
v_res_1703_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_1695_, v___x_1696_, v___x_1697_, v___x_5642__boxed_1702_, v___f_1699_, v_x_1700_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_1704_, lean_object* v___f_1705_, lean_object* v___x_1706_, uint8_t v___x_1707_, lean_object* v___f_1708_, lean_object* v___f_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_apply_2(v_val_1704_, v___f_1705_, lean_box(0));
lean_inc(v___x_1706_);
v___x_1712_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1706_, v___x_1707_, v___x_1711_, v___f_1708_);
v___x_1713_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1706_, v___x_1707_, v___x_1712_, v___f_1709_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_1714_, lean_object* v___f_1715_, lean_object* v___x_1716_, lean_object* v___x_1717_, lean_object* v___f_1718_, lean_object* v___f_1719_, lean_object* v___y_1720_){
_start:
{
uint8_t v___x_5674__boxed_1721_; lean_object* v_res_1722_; 
v___x_5674__boxed_1721_ = lean_unbox(v___x_1717_);
v_res_1722_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_1714_, v___f_1715_, v___x_1716_, v___x_5674__boxed_1721_, v___f_1718_, v___f_1719_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_1723_, uint8_t v___x_1724_, lean_object* v___f_1725_, lean_object* v___f_1726_, lean_object* v___x_1727_, lean_object* v___f_1728_, lean_object* v_val_1729_, lean_object* v___f_1730_, lean_object* v_x_1731_){
_start:
{
if (lean_obj_tag(v_x_1731_) == 0)
{
lean_object* v___x_1733_; 
lean_dec_ref(v___f_1730_);
lean_dec_ref(v_val_1729_);
lean_dec_ref(v___f_1728_);
lean_dec_ref(v___x_1727_);
lean_dec_ref(v___f_1726_);
lean_dec_ref(v___f_1725_);
lean_dec(v___x_1723_);
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_x_1731_);
return v___x_1733_;
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1735_; lean_object* v___f_1736_; lean_object* v___x_1737_; lean_object* v___f_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v___x_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_a_1734_ = lean_ctor_get(v_x_1731_, 0);
lean_inc_n(v_a_1734_, 3);
lean_dec_ref_known(v_x_1731_, 1);
v___x_1735_ = lean_box(v___x_1724_);
lean_inc_n(v___x_1723_, 5);
v___f_1736_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_1736_, 0, v_a_1734_);
lean_closure_set(v___f_1736_, 1, v___x_1723_);
lean_closure_set(v___f_1736_, 2, v___x_1735_);
lean_closure_set(v___f_1736_, 3, v___f_1725_);
v___x_1737_ = lean_box(v___x_1724_);
v___f_1738_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1738_, 0, v_a_1734_);
lean_closure_set(v___f_1738_, 1, v___x_1723_);
lean_closure_set(v___f_1738_, 2, v___x_1737_);
lean_closure_set(v___f_1738_, 3, v___f_1726_);
v___x_1739_ = lean_box(v___x_1724_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1740_, 0, v_a_1734_);
lean_closure_set(v___f_1740_, 1, v___x_1727_);
lean_closure_set(v___f_1740_, 2, v___x_1723_);
lean_closure_set(v___f_1740_, 3, v___x_1739_);
lean_closure_set(v___f_1740_, 4, v___f_1728_);
v___x_1741_ = lean_box(v___x_1724_);
v___f_1742_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_1742_, 0, v_val_1729_);
lean_closure_set(v___f_1742_, 1, v___f_1736_);
lean_closure_set(v___f_1742_, 2, v___x_1723_);
lean_closure_set(v___f_1742_, 3, v___x_1741_);
lean_closure_set(v___f_1742_, 4, v___f_1740_);
lean_closure_set(v___f_1742_, 5, v___f_1738_);
v___x_1743_ = lean_io_as_task(v___f_1742_, v___x_1723_);
lean_dec_ref(v___x_1743_);
v___x_1744_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_1745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1723_, v___x_1724_, v___x_1744_, v___f_1730_);
return v___x_1745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_1746_, lean_object* v___x_1747_, lean_object* v___f_1748_, lean_object* v___f_1749_, lean_object* v___x_1750_, lean_object* v___f_1751_, lean_object* v_val_1752_, lean_object* v___f_1753_, lean_object* v_x_1754_, lean_object* v___y_1755_){
_start:
{
uint8_t v___x_5703__boxed_1756_; lean_object* v_res_1757_; 
v___x_5703__boxed_1756_ = lean_unbox(v___x_1747_);
v_res_1757_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_1746_, v___x_5703__boxed_1756_, v___f_1748_, v___f_1749_, v___x_1750_, v___f_1751_, v_val_1752_, v___f_1753_, v_x_1754_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_1759_, uint8_t v___x_1760_, lean_object* v___f_1761_, lean_object* v___x_1762_, lean_object* v_x_1763_){
_start:
{
lean_object* v_val_1766_; 
if (lean_obj_tag(v_x_1763_) == 0)
{
lean_object* v___x_1769_; 
lean_dec_ref(v___x_1762_);
lean_dec_ref(v___f_1761_);
lean_dec(v___x_1759_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v_x_1763_);
return v___x_1769_;
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1784_; 
v_a_1770_ = lean_ctor_get(v_x_1763_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v_x_1763_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1772_ = v_x_1763_;
v_isShared_1773_ = v_isSharedCheck_1784_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v_x_1763_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1784_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_1775_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_1770_, v___x_1774_, v___x_1762_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref_known(v___x_1775_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v_a_1776_);
v___x_1778_ = v___x_1772_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
v_val_1766_ = v___x_1778_;
goto v___jp_1765_;
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1782_; 
v_a_1780_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1775_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set_tag(v___x_1772_, 0);
lean_ctor_set(v___x_1772_, 0, v_a_1780_);
v___x_1782_ = v___x_1772_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
v_val_1766_ = v___x_1782_;
goto v___jp_1765_;
}
}
}
}
v___jp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_val_1766_);
v___x_1768_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1759_, v___x_1760_, v___x_1767_, v___f_1761_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_1785_, lean_object* v___x_1786_, lean_object* v___f_1787_, lean_object* v___x_1788_, lean_object* v_x_1789_, lean_object* v___y_1790_){
_start:
{
uint8_t v___x_5764__boxed_1791_; lean_object* v_res_1792_; 
v___x_5764__boxed_1791_ = lean_unbox(v___x_1786_);
v_res_1792_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_1785_, v___x_5764__boxed_1791_, v___f_1787_, v___x_1788_, v_x_1789_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_1794_, lean_object* v___x_1795_, uint8_t v___x_1796_, lean_object* v_a_1797_, lean_object* v___f_1798_, lean_object* v___f_1799_, lean_object* v___x_1800_, lean_object* v___f_1801_, lean_object* v_val_1802_, lean_object* v_a_1803_, lean_object* v_x_1804_){
_start:
{
if (lean_obj_tag(v_x_1804_) == 0)
{
lean_object* v___x_1806_; 
lean_dec(v_a_1803_);
lean_dec_ref(v_val_1802_);
lean_dec_ref(v___f_1801_);
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___f_1799_);
lean_dec_ref(v___f_1798_);
lean_dec(v_a_1797_);
lean_dec(v___x_1795_);
lean_dec(v___x_1794_);
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_x_1804_);
return v___x_1806_;
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1832_; 
v_a_1807_ = lean_ctor_get(v_x_1804_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_x_1804_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1809_ = v_x_1804_;
v_isShared_1810_ = v_isSharedCheck_1832_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v_x_1804_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1832_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___f_1811_; lean_object* v___x_1812_; lean_object* v___f_1813_; lean_object* v___x_1814_; lean_object* v___f_1815_; lean_object* v___x_1816_; lean_object* v___f_1817_; lean_object* v_val_1819_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___f_1811_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1811_, 0, v_a_1807_);
lean_closure_set(v___f_1811_, 1, v___x_1794_);
v___x_1812_ = lean_box(v___x_1796_);
lean_inc_n(v___x_1795_, 3);
v___f_1813_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1813_, 0, v___x_1795_);
lean_closure_set(v___f_1813_, 1, v___x_1812_);
lean_closure_set(v___f_1813_, 2, v___f_1811_);
lean_closure_set(v___f_1813_, 3, v_a_1797_);
v___x_1814_ = lean_box(v___x_1796_);
lean_inc_ref(v___x_1800_);
v___f_1815_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_1815_, 0, v___x_1795_);
lean_closure_set(v___f_1815_, 1, v___x_1814_);
lean_closure_set(v___f_1815_, 2, v___f_1798_);
lean_closure_set(v___f_1815_, 3, v___f_1799_);
lean_closure_set(v___f_1815_, 4, v___x_1800_);
lean_closure_set(v___f_1815_, 5, v___f_1801_);
lean_closure_set(v___f_1815_, 6, v_val_1802_);
lean_closure_set(v___f_1815_, 7, v___f_1813_);
v___x_1816_ = lean_box(v___x_1796_);
v___f_1817_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_1817_, 0, v___x_1795_);
lean_closure_set(v___f_1817_, 1, v___x_1816_);
lean_closure_set(v___f_1817_, 2, v___f_1815_);
lean_closure_set(v___f_1817_, 3, v___x_1800_);
v___x_1822_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_1823_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1803_, v___x_1822_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 0, v_a_1824_);
v___x_1826_ = v___x_1809_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1824_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
v_val_1819_ = v___x_1826_;
goto v___jp_1818_;
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; 
v_a_1828_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1823_, 1);
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 0);
lean_ctor_set(v___x_1809_, 0, v_a_1828_);
v___x_1830_ = v___x_1809_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
v_val_1819_ = v___x_1830_;
goto v___jp_1818_;
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_val_1819_);
v___x_1821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1795_, v___x_1796_, v___x_1820_, v___f_1817_);
return v___x_1821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_1833_, lean_object* v___x_1834_, lean_object* v___x_1835_, lean_object* v_a_1836_, lean_object* v___f_1837_, lean_object* v___f_1838_, lean_object* v___x_1839_, lean_object* v___f_1840_, lean_object* v_val_1841_, lean_object* v_a_1842_, lean_object* v_x_1843_, lean_object* v___y_1844_){
_start:
{
uint8_t v___x_5827__boxed_1845_; lean_object* v_res_1846_; 
v___x_5827__boxed_1845_ = lean_unbox(v___x_1835_);
v_res_1846_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_1833_, v___x_1834_, v___x_5827__boxed_1845_, v_a_1836_, v___f_1837_, v___f_1838_, v___x_1839_, v___f_1840_, v_val_1841_, v_a_1842_, v_x_1843_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_1848_, lean_object* v___x_1849_, uint8_t v___x_1850_, lean_object* v_a_1851_, lean_object* v___f_1852_, lean_object* v___f_1853_, lean_object* v___x_1854_, lean_object* v___f_1855_, lean_object* v_val_1856_, lean_object* v_x_1857_){
_start:
{
if (lean_obj_tag(v_x_1857_) == 0)
{
lean_object* v___x_1859_; 
lean_dec_ref(v_val_1856_);
lean_dec_ref(v___f_1855_);
lean_dec_ref(v___x_1854_);
lean_dec_ref(v___f_1853_);
lean_dec_ref(v___f_1852_);
lean_dec(v_a_1851_);
lean_dec(v___x_1849_);
lean_dec(v___x_1848_);
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v_x_1857_);
return v___x_1859_;
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1880_; 
v_a_1860_ = lean_ctor_get(v_x_1857_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_x_1857_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1862_ = v_x_1857_;
v_isShared_1863_ = v_isSharedCheck_1880_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v_x_1857_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1880_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___f_1865_; lean_object* v_val_1867_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1864_ = lean_box(v___x_1850_);
lean_inc(v_a_1860_);
lean_inc(v___x_1849_);
v___f_1865_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_1865_, 0, v___x_1848_);
lean_closure_set(v___f_1865_, 1, v___x_1849_);
lean_closure_set(v___f_1865_, 2, v___x_1864_);
lean_closure_set(v___f_1865_, 3, v_a_1851_);
lean_closure_set(v___f_1865_, 4, v___f_1852_);
lean_closure_set(v___f_1865_, 5, v___f_1853_);
lean_closure_set(v___f_1865_, 6, v___x_1854_);
lean_closure_set(v___f_1865_, 7, v___f_1855_);
lean_closure_set(v___f_1865_, 8, v_val_1856_);
lean_closure_set(v___f_1865_, 9, v_a_1860_);
v___x_1870_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_1871_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1860_, v___x_1870_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v___x_1871_, 1);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v_a_1872_);
v___x_1874_ = v___x_1862_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
v_val_1867_ = v___x_1874_;
goto v___jp_1866_;
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; 
v_a_1876_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v___x_1871_, 1);
if (v_isShared_1863_ == 0)
{
lean_ctor_set_tag(v___x_1862_, 0);
lean_ctor_set(v___x_1862_, 0, v_a_1876_);
v___x_1878_ = v___x_1862_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
v_val_1867_ = v___x_1878_;
goto v___jp_1866_;
}
}
v___jp_1866_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v_val_1867_);
v___x_1869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1849_, v___x_1850_, v___x_1868_, v___f_1865_);
return v___x_1869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_1881_, lean_object* v___x_1882_, lean_object* v___x_1883_, lean_object* v_a_1884_, lean_object* v___f_1885_, lean_object* v___f_1886_, lean_object* v___x_1887_, lean_object* v___f_1888_, lean_object* v_val_1889_, lean_object* v_x_1890_, lean_object* v___y_1891_){
_start:
{
uint8_t v___x_5921__boxed_1892_; lean_object* v_res_1893_; 
v___x_5921__boxed_1892_ = lean_unbox(v___x_1883_);
v_res_1893_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_1881_, v___x_1882_, v___x_5921__boxed_1892_, v_a_1884_, v___f_1885_, v___f_1886_, v___x_1887_, v___f_1888_, v_val_1889_, v_x_1890_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_1894_, uint8_t v___x_1895_, lean_object* v_a_1896_, lean_object* v___f_1897_, lean_object* v___f_1898_, lean_object* v___f_1899_, lean_object* v_val_1900_, lean_object* v_x_1901_){
_start:
{
if (lean_obj_tag(v_x_1901_) == 0)
{
lean_object* v___x_1903_; 
lean_dec_ref(v_val_1900_);
lean_dec_ref(v___f_1899_);
lean_dec_ref(v___f_1898_);
lean_dec_ref(v___f_1897_);
lean_dec(v_a_1896_);
lean_dec(v___x_1894_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_x_1901_);
return v___x_1903_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1925_; 
v_a_1904_ = lean_ctor_get(v_x_1901_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_x_1901_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1906_ = v_x_1901_;
v_isShared_1907_ = v_isSharedCheck_1925_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v_x_1901_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1925_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___f_1911_; lean_object* v_val_1913_; lean_object* v___x_1916_; 
v___x_1908_ = lean_unsigned_to_nat(0u);
v___x_1909_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1910_ = lean_box(v___x_1895_);
v___f_1911_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_1911_, 0, v___x_1894_);
lean_closure_set(v___f_1911_, 1, v___x_1908_);
lean_closure_set(v___f_1911_, 2, v___x_1910_);
lean_closure_set(v___f_1911_, 3, v_a_1896_);
lean_closure_set(v___f_1911_, 4, v___f_1897_);
lean_closure_set(v___f_1911_, 5, v___f_1898_);
lean_closure_set(v___f_1911_, 6, v___x_1909_);
lean_closure_set(v___f_1911_, 7, v___f_1899_);
lean_closure_set(v___f_1911_, 8, v_val_1900_);
v___x_1916_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1904_, v___x_1909_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v_a_1917_);
v___x_1919_ = v___x_1906_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1917_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
v_val_1913_ = v___x_1919_;
goto v___jp_1912_;
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; 
v_a_1921_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1916_, 1);
if (v_isShared_1907_ == 0)
{
lean_ctor_set_tag(v___x_1906_, 0);
lean_ctor_set(v___x_1906_, 0, v_a_1921_);
v___x_1923_ = v___x_1906_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
v_val_1913_ = v___x_1923_;
goto v___jp_1912_;
}
}
v___jp_1912_:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v_val_1913_);
v___x_1915_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1908_, v___x_1895_, v___x_1914_, v___f_1911_);
return v___x_1915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_1926_, lean_object* v___x_1927_, lean_object* v_a_1928_, lean_object* v___f_1929_, lean_object* v___f_1930_, lean_object* v___f_1931_, lean_object* v_val_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_){
_start:
{
uint8_t v___x_6001__boxed_1935_; lean_object* v_res_1936_; 
v___x_6001__boxed_1935_ = lean_unbox(v___x_1927_);
v_res_1936_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_1926_, v___x_6001__boxed_1935_, v_a_1928_, v___f_1929_, v___f_1930_, v___f_1931_, v_val_1932_, v_x_1933_);
return v_res_1936_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1937_ = lean_box(1);
v___x_1938_ = lean_unsigned_to_nat(2u);
v___x_1939_ = lean_mk_empty_array_with_capacity(v___x_1938_);
v___x_1940_ = lean_array_push(v___x_1939_, v___x_1937_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_1941_, lean_object* v_x_1942_){
_start:
{
lean_object* v_val_1945_; 
if (lean_obj_tag(v_x_1942_) == 0)
{
lean_object* v___x_1947_; 
lean_dec(v___x_1941_);
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v_x_1942_);
return v___x_1947_;
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1963_; 
v_a_1948_ = lean_ctor_get(v_x_1942_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_x_1942_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1950_ = v_x_1942_;
v_isShared_1951_ = v_isSharedCheck_1963_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v_x_1942_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1963_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1952_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_1953_ = lean_array_push(v___x_1952_, v___x_1941_);
v___x_1954_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1948_, v___x_1953_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v_a_1955_);
v___x_1957_ = v___x_1950_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1955_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
v_val_1945_ = v___x_1957_;
goto v___jp_1944_;
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1961_; 
v_a_1959_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1954_, 1);
if (v_isShared_1951_ == 0)
{
lean_ctor_set_tag(v___x_1950_, 0);
lean_ctor_set(v___x_1950_, 0, v_a_1959_);
v___x_1961_ = v___x_1950_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1959_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
v_val_1945_ = v___x_1961_;
goto v___jp_1944_;
}
}
}
}
v___jp_1944_:
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v_val_1945_);
return v___x_1946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_1964_, lean_object* v_x_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_1964_, v_x_1965_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_1968_, size_t v_i_1969_, lean_object* v_bs_1970_){
_start:
{
uint8_t v___x_1971_; 
v___x_1971_ = lean_usize_dec_lt(v_i_1969_, v_sz_1968_);
if (v___x_1971_ == 0)
{
return v_bs_1970_;
}
else
{
lean_object* v_v_1972_; lean_object* v_fst_1973_; lean_object* v_snd_1974_; lean_object* v___x_1975_; lean_object* v_bs_x27_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; size_t v___x_1984_; size_t v___x_1985_; lean_object* v___x_1986_; 
v_v_1972_ = lean_array_uget_borrowed(v_bs_1970_, v_i_1969_);
v_fst_1973_ = lean_ctor_get(v_v_1972_, 0);
lean_inc(v_fst_1973_);
v_snd_1974_ = lean_ctor_get(v_v_1972_, 1);
lean_inc(v_snd_1974_);
v___x_1975_ = lean_unsigned_to_nat(0u);
v_bs_x27_1976_ = lean_array_uset(v_bs_1970_, v_i_1969_, v___x_1975_);
v___x_1977_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1977_, 0, v_fst_1973_);
v___x_1978_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1978_, 0, v_snd_1974_);
v___x_1979_ = lean_unsigned_to_nat(2u);
v___x_1980_ = lean_mk_empty_array_with_capacity(v___x_1979_);
v___x_1981_ = lean_array_push(v___x_1980_, v___x_1977_);
v___x_1982_ = lean_array_push(v___x_1981_, v___x_1978_);
v___x_1983_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
v___x_1984_ = ((size_t)1ULL);
v___x_1985_ = lean_usize_add(v_i_1969_, v___x_1984_);
v___x_1986_ = lean_array_uset(v_bs_x27_1976_, v_i_1969_, v___x_1983_);
v_i_1969_ = v___x_1985_;
v_bs_1970_ = v___x_1986_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_1988_, lean_object* v_i_1989_, lean_object* v_bs_1990_){
_start:
{
size_t v_sz_boxed_1991_; size_t v_i_boxed_1992_; lean_object* v_res_1993_; 
v_sz_boxed_1991_ = lean_unbox_usize(v_sz_1988_);
lean_dec(v_sz_1988_);
v_i_boxed_1992_ = lean_unbox_usize(v_i_1989_);
lean_dec(v_i_1989_);
v_res_1993_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_1991_, v_i_boxed_1992_, v_bs_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_1997_, lean_object* v_method_1998_, lean_object* v___f_1999_, lean_object* v___f_2000_, lean_object* v___f_2001_, lean_object* v_x_2002_){
_start:
{
lean_object* v___y_2005_; lean_object* v___y_2006_; uint8_t v___y_2007_; lean_object* v_val_2008_; lean_object* v___y_2012_; lean_object* v___y_2013_; uint8_t v___y_2014_; lean_object* v_val_2015_; lean_object* v___y_2019_; uint8_t v___y_2020_; lean_object* v___y_2021_; lean_object* v_val_2022_; 
if (lean_obj_tag(v_x_2002_) == 0)
{
lean_object* v___x_2025_; 
lean_dec_ref(v___f_2001_);
lean_dec_ref(v___f_2000_);
lean_dec_ref(v___f_1999_);
lean_dec_ref(v_r_1997_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_x_2002_);
return v___x_2025_;
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2119_; 
v_a_2026_ = lean_ctor_get(v_x_2002_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_x_2002_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2028_ = v_x_2002_;
v_isShared_2029_ = v_isSharedCheck_2119_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v_x_2002_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2119_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___y_2031_; lean_object* v___y_2032_; uint16_t v_status_2046_; lean_object* v_headers_2047_; lean_object* v_body_2048_; lean_object* v_stream_2049_; lean_object* v___x_2050_; lean_object* v___y_2052_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v_status_2046_ = lean_ctor_get_uint16(v_r_1997_, sizeof(void*)*3);
v_headers_2047_ = lean_ctor_get(v_r_1997_, 0);
lean_inc_ref(v_headers_2047_);
v_body_2048_ = lean_ctor_get(v_r_1997_, 1);
lean_inc_ref(v_body_2048_);
v_stream_2049_ = lean_ctor_get(v_r_1997_, 2);
lean_inc(v_stream_2049_);
lean_dec_ref(v_r_1997_);
v___x_2050_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2111_ = lean_uint16_to_nat(v_status_2046_);
v___x_2112_ = lean_nat_to_int(v___x_2111_);
v___x_2113_ = lean_nat_abs(v___x_2112_);
v___x_2114_ = lean_cstr_to_nat("9007199254740991");
v___x_2115_ = lean_nat_dec_le(v___x_2113_, v___x_2114_);
lean_dec(v___x_2113_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2112_);
v___y_2052_ = v___x_2116_;
goto v___jp_2051_;
}
else
{
double v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = l_Float_ofInt(v___x_2112_);
lean_dec(v___x_2112_);
v___x_2118_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2118_, 0, v___x_2117_);
v___y_2052_ = v___x_2118_;
goto v___jp_2051_;
}
v___jp_2030_:
{
lean_object* v___f_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
v___f_2033_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2033_, 0, v___y_2032_);
lean_closure_set(v___f_2033_, 1, v___y_2031_);
v___x_2034_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2035_ = lean_unsigned_to_nat(0u);
v___x_2036_ = 0;
v___x_2037_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2026_, v___x_2034_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 0, v_a_2038_);
v___x_2040_ = v___x_2028_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
v___y_2019_ = v___f_2033_;
v___y_2020_ = v___x_2036_;
v___y_2021_ = v___x_2035_;
v_val_2022_ = v___x_2040_;
goto v___jp_2018_;
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; 
v_a_2042_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2037_, 1);
if (v_isShared_2029_ == 0)
{
lean_ctor_set_tag(v___x_2028_, 0);
lean_ctor_set(v___x_2028_, 0, v_a_2042_);
v___x_2044_ = v___x_2028_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v___y_2019_ = v___f_2033_;
v___y_2020_ = v___x_2036_;
v___y_2021_ = v___x_2035_;
v_val_2022_ = v___x_2044_;
goto v___jp_2018_;
}
}
}
v___jp_2051_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; size_t v_sz_2055_; size_t v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2050_);
lean_ctor_set(v___x_2053_, 1, v___y_2052_);
v___x_2054_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2055_ = lean_array_size(v_headers_2047_);
v___x_2056_ = ((size_t)0ULL);
v___x_2057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2055_, v___x_2056_, v_headers_2047_);
v___x_2058_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
v___x_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2054_);
lean_ctor_set(v___x_2059_, 1, v___x_2058_);
v___x_2060_ = lean_box(0);
v___x_2061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2059_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2053_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = l_Lasm_JS_obj(v___x_2062_);
if (lean_obj_tag(v_stream_2049_) == 0)
{
uint8_t v___x_2064_; 
lean_dec_ref(v___f_2001_);
lean_dec_ref(v___f_2000_);
lean_dec_ref(v___f_1999_);
v___x_2064_ = l_Lasm_Fetch_bodyless(v_method_1998_, v_status_2046_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2065_, 0, v_body_2048_);
v___y_2031_ = v___x_2063_;
v___y_2032_ = v___x_2065_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2066_; 
lean_dec_ref(v_body_2048_);
v___x_2066_ = lean_box(1);
v___y_2031_ = v___x_2063_;
v___y_2032_ = v___x_2066_;
goto v___jp_2030_;
}
}
else
{
lean_object* v_val_2067_; uint8_t v___x_2068_; 
lean_dec_ref(v_body_2048_);
lean_del_object(v___x_2028_);
v_val_2067_ = lean_ctor_get(v_stream_2049_, 0);
lean_inc(v_val_2067_);
lean_dec_ref_known(v_stream_2049_, 1);
v___x_2068_ = l_Lasm_Fetch_bodyless(v_method_1998_, v_status_2046_);
if (v___x_2068_ == 0)
{
lean_object* v___x_2069_; lean_object* v___f_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2069_ = lean_box(v___x_2068_);
lean_inc(v_a_2026_);
v___f_2070_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2070_, 0, v___x_2063_);
lean_closure_set(v___f_2070_, 1, v___x_2069_);
lean_closure_set(v___f_2070_, 2, v_a_2026_);
lean_closure_set(v___f_2070_, 3, v___f_1999_);
lean_closure_set(v___f_2070_, 4, v___f_2000_);
lean_closure_set(v___f_2070_, 5, v___f_2001_);
lean_closure_set(v___f_2070_, 6, v_val_2067_);
v___x_2071_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2072_ = lean_unsigned_to_nat(0u);
v___x_2073_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2026_, v___x_2071_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2073_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set_tag(v___x_2076_, 1);
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
v___y_2012_ = v___f_2070_;
v___y_2013_ = v___x_2072_;
v___y_2014_ = v___x_2068_;
v_val_2015_ = v___x_2079_;
goto v___jp_2011_;
}
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
v_a_2082_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2073_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2073_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 0);
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
v___y_2012_ = v___f_2070_;
v___y_2013_ = v___x_2072_;
v___y_2014_ = v___x_2068_;
v_val_2015_ = v___x_2087_;
goto v___jp_2011_;
}
}
}
}
else
{
lean_object* v___f_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; 
lean_dec(v_val_2067_);
lean_dec_ref(v___f_2001_);
lean_dec_ref(v___f_2000_);
lean_dec_ref(v___f_1999_);
v___f_2090_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2090_, 0, v___x_2063_);
v___x_2091_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2092_ = lean_unsigned_to_nat(0u);
v___x_2093_ = 0;
v___x_2094_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2026_, v___x_2091_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
lean_ctor_set_tag(v___x_2097_, 1);
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
v___y_2005_ = v___x_2092_;
v___y_2006_ = v___f_2090_;
v___y_2007_ = v___x_2093_;
v_val_2008_ = v___x_2100_;
goto v___jp_2004_;
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
v_a_2103_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2094_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2094_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 0);
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
v___y_2005_ = v___x_2092_;
v___y_2006_ = v___f_2090_;
v___y_2007_ = v___x_2093_;
v_val_2008_ = v___x_2108_;
goto v___jp_2004_;
}
}
}
}
}
}
}
}
v___jp_2004_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_val_2008_);
v___x_2010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2005_, v___y_2007_, v___x_2009_, v___y_2006_);
return v___x_2010_;
}
v___jp_2011_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_val_2015_);
v___x_2017_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2013_, v___y_2014_, v___x_2016_, v___y_2012_);
return v___x_2017_;
}
v___jp_2018_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_val_2022_);
v___x_2024_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2021_, v___y_2020_, v___x_2023_, v___y_2019_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2120_, lean_object* v_method_2121_, lean_object* v___f_2122_, lean_object* v___f_2123_, lean_object* v___f_2124_, lean_object* v_x_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2120_, v_method_2121_, v___f_2122_, v___f_2123_, v___f_2124_, v_x_2125_);
lean_dec_ref(v_method_2121_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2129_, lean_object* v_r_2130_){
_start:
{
lean_object* v___f_2132_; lean_object* v___f_2133_; lean_object* v___x_2134_; uint8_t v___x_2135_; lean_object* v_val_2137_; lean_object* v___x_2140_; 
v___f_2132_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2133_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2133_, 0, v_r_2130_);
lean_closure_set(v___f_2133_, 1, v_method_2129_);
lean_closure_set(v___f_2133_, 2, v___f_2132_);
lean_closure_set(v___f_2133_, 3, v___f_2132_);
lean_closure_set(v___f_2133_, 4, v___f_2132_);
v___x_2134_ = lean_unsigned_to_nat(0u);
v___x_2135_ = 0;
v___x_2140_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2140_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2140_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
lean_ctor_set_tag(v___x_2143_, 1);
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
v_val_2137_ = v___x_2146_;
goto v___jp_2136_;
}
}
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2140_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2140_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set_tag(v___x_2151_, 0);
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
v_val_2137_ = v___x_2154_;
goto v___jp_2136_;
}
}
}
v___jp_2136_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_val_2137_);
v___x_2139_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2134_, v___x_2135_, v___x_2138_, v___f_2133_);
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2157_, lean_object* v_r_2158_, lean_object* v_a_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2157_, v_r_2158_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = lean_box(0);
v___x_2163_ = lean_st_mk_ref(v___x_2162_);
v___x_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2167_){
_start:
{
if (lean_obj_tag(v_x_2167_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2177_; 
v_a_2169_ = lean_ctor_get(v_x_2167_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_x_2167_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2171_ = v_x_2167_;
v_isShared_2172_ = v_isSharedCheck_2177_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v_x_2167_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2177_;
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
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
return v___x_2175_;
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2188_; 
v_a_2178_ = lean_ctor_get(v_x_2167_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_x_2167_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2180_ = v_x_2167_;
v_isShared_2181_ = v_isSharedCheck_2188_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v_x_2167_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2188_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2182_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2183_, 0, v_a_2178_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 0, v___x_2183_);
v___x_2185_ = v___x_2180_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
return v___x_2186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2189_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2192_, lean_object* v___x_2193_, lean_object* v___f_2194_, lean_object* v_x_2195_){
_start:
{
if (lean_obj_tag(v_x_2195_) == 0)
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2205_; 
lean_dec_ref(v___f_2194_);
lean_dec(v___x_2193_);
lean_dec_ref(v___y_2192_);
v_a_2197_ = lean_ctor_get(v_x_2195_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_x_2195_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2199_ = v_x_2195_;
v_isShared_2200_ = v_isSharedCheck_2205_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v_x_2195_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2205_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
return v___x_2203_;
}
}
}
else
{
lean_object* v_a_2206_; uint8_t v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v_a_2206_ = lean_ctor_get(v_x_2195_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v_x_2195_, 1);
v___x_2207_ = 0;
v___x_2208_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2192_, v_a_2206_);
v___x_2209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2193_, v___x_2207_, v___x_2208_, v___f_2194_);
return v___x_2209_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2210_, lean_object* v___x_2211_, lean_object* v___f_2212_, lean_object* v_x_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2210_, v___x_2211_, v___f_2212_, v_x_2213_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2216_, lean_object* v___x_2217_, lean_object* v___f_2218_, lean_object* v_req_2219_){
_start:
{
uint8_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = 0;
v___x_2222_ = l_Lasm_Fetch_respond(v_handler_2216_, v_req_2219_);
v___x_2223_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2217_, v___x_2221_, v___x_2222_, v___f_2218_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2224_, lean_object* v___x_2225_, lean_object* v___f_2226_, lean_object* v_req_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2224_, v___x_2225_, v___f_2226_, v_req_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2230_, lean_object* v_x_2231_){
_start:
{
if (lean_obj_tag(v_x_2231_) == 0)
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2241_; 
lean_dec_ref(v___f_2230_);
v_a_2233_ = lean_ctor_get(v_x_2231_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v_x_2231_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2235_ = v_x_2231_;
v_isShared_2236_ = v_isSharedCheck_2241_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v_x_2231_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2241_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2238_);
return v___x_2239_;
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2243_; 
v_a_2242_ = lean_ctor_get(v_x_2231_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v_x_2231_, 1);
v___x_2243_ = lean_apply_2(v___f_2230_, v_a_2242_, lean_box(0));
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2244_, lean_object* v_x_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2244_, v_x_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v_headers_2250_, lean_object* v___f_2251_, lean_object* v___x_2252_, uint8_t v___x_2253_, lean_object* v___f_2254_, lean_object* v_x_2255_){
_start:
{
if (lean_obj_tag(v_x_2255_) == 0)
{
lean_object* v_a_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v___f_2254_);
lean_dec(v___x_2252_);
lean_dec_ref(v___f_2251_);
lean_dec_ref(v_headers_2250_);
lean_dec_ref(v___y_2249_);
lean_dec_ref(v___y_2248_);
v_a_2257_ = lean_ctor_get(v_x_2255_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v_x_2255_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2259_ = v_x_2255_;
v_isShared_2260_ = v_isSharedCheck_2265_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_a_2257_);
lean_dec(v_x_2255_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2265_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2257_);
v___x_2262_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2263_; 
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
return v___x_2263_;
}
}
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2276_; 
v_a_2266_ = lean_ctor_get(v_x_2255_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v_x_2255_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2268_ = v_x_2255_;
v_isShared_2269_ = v_isSharedCheck_2276_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v_x_2255_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2276_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2272_; 
v___x_2270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2270_, 0, v___y_2248_);
lean_ctor_set(v___x_2270_, 1, v___y_2249_);
lean_ctor_set(v___x_2270_, 2, v_headers_2250_);
lean_ctor_set(v___x_2270_, 3, v_a_2266_);
lean_ctor_set(v___x_2270_, 4, v___f_2251_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2270_);
v___x_2272_ = v___x_2268_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2270_);
v___x_2272_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
v___x_2274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2252_, v___x_2253_, v___x_2273_, v___f_2254_);
return v___x_2274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v_headers_2279_, lean_object* v___f_2280_, lean_object* v___x_2281_, lean_object* v___x_2282_, lean_object* v___f_2283_, lean_object* v_x_2284_, lean_object* v___y_2285_){
_start:
{
uint8_t v___x_7646__boxed_2286_; lean_object* v_res_2287_; 
v___x_7646__boxed_2286_ = lean_unbox(v___x_2282_);
v_res_2287_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2277_, v___y_2278_, v_headers_2279_, v___f_2280_, v___x_2281_, v___x_7646__boxed_2286_, v___f_2283_, v_x_2284_);
return v_res_2287_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7(void){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2295_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___x_2296_ = lean_unsigned_to_nat(46u);
v___x_2297_ = lean_unsigned_to_nat(193u);
v___x_2298_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5));
v___x_2299_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4));
v___x_2300_ = l_mkPanicMessageWithDecl(v___x_2299_, v___x_2298_, v___x_2297_, v___x_2296_, v___x_2295_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2302_, lean_object* v_d_2303_){
_start:
{
lean_object* v_received_2306_; 
if (lean_obj_tag(v_d_2303_) == 6)
{
lean_object* v_b_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_b_2320_ = lean_ctor_get(v_d_2303_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_d_2303_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v_d_2303_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_b_2320_);
lean_dec(v_d_2303_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set_tag(v___x_2322_, 0);
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_b_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
else
{
if (lean_obj_tag(v_d_2303_) == 9)
{
lean_object* v_value_2328_; lean_object* v_description_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; 
v_value_2328_ = lean_ctor_get(v_d_2303_, 0);
v_description_2329_ = lean_ctor_get(v_d_2303_, 1);
v___x_2330_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2331_ = lean_string_dec_eq(v_description_2329_, v___x_2330_);
if (v___x_2331_ == 0)
{
goto v___jp_2318_;
}
else
{
uint32_t v___x_2332_; uint64_t v___x_2333_; lean_object* v___x_2334_; uint32_t v___x_2335_; lean_object* v___x_2336_; 
lean_inc_n(v_value_2328_, 2);
lean_dec_ref_known(v_d_2303_, 2);
v___x_2332_ = 206;
v___x_2333_ = 0ULL;
v___x_2334_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2334_, 0, v_value_2328_);
lean_ctor_set(v___x_2334_, 1, v___x_2330_);
v___x_2335_ = lasm_js_value_handle(v_value_2328_);
lean_dec(v_value_2328_);
v___x_2336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2332_, v___x_2333_, v___x_2334_, v___x_2335_);
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
v___x_2339_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
v___x_2340_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2339_);
v_received_2306_ = v___x_2340_;
goto v___jp_2305_;
}
else
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_string_from_utf8_unchecked(v_a_2337_);
v_received_2306_ = v___x_2341_;
goto v___jp_2305_;
}
}
else
{
lean_object* v___x_2342_; 
lean_dec_ref_known(v___x_2336_, 1);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v_received_2306_ = v___x_2342_;
goto v___jp_2305_;
}
}
}
else
{
goto v___jp_2318_;
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2308_ = lean_string_append(v___x_2307_, v_context_2302_);
v___x_2309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2310_ = lean_string_append(v___x_2308_, v___x_2309_);
v___x_2311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2312_ = lean_string_append(v___x_2310_, v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2314_ = lean_string_append(v___x_2312_, v___x_2313_);
v___x_2315_ = lean_string_append(v___x_2314_, v_received_2306_);
lean_dec_ref(v_received_2306_);
v___x_2316_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
v___x_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
return v___x_2317_;
}
v___jp_2318_:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lasm_JS_Data_describe(v_d_2303_);
v_received_2306_ = v___x_2319_;
goto v___jp_2305_;
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
uint8_t v___x_7902__boxed_2442_; lean_object* v_res_2443_; 
v___x_7902__boxed_2442_ = lean_unbox(v___x_2437_);
v_res_2443_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2436_, v___x_7902__boxed_2442_, v___f_2438_, v_a_2439_, v_x_2440_);
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
lean_dec(v_payload_2559_);
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
lean_inc(v_payload_2559_);
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
lean_dec(v_payload_2559_);
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
lean_dec(v_payload_2559_);
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
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec_ref_known(v_d_2893_, 1);
v_a_2961_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2952_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2952_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set_tag(v___x_2963_, 0);
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
else
{
lean_object* v___x_2969_; 
v___x_2969_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_2925_ = v___x_2969_;
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
v___x_2941_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
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
v___x_2944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_2970_, lean_object* v_d_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2970_, v_d_2971_);
lean_dec_ref(v_context_2970_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_2974_, lean_object* v_bytes_2975_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = l_Lasm_JS_Wire_decode(v_bytes_2975_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2979_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2977_, 1);
v___x_2979_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2974_, v_a_2978_);
return v___x_2979_;
}
else
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2987_; 
v_a_2980_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2982_ = v___x_2977_;
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2977_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_2988_, lean_object* v_bytes_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_2988_, v_bytes_2989_);
lean_dec_ref(v_bytes_2989_);
lean_dec_ref(v_context_2988_);
return v_res_2991_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_2992_; uint8_t v___x_2993_; uint64_t v___x_2994_; 
v___x_2992_ = 8ULL;
v___x_2993_ = 0;
v___x_2994_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_2993_, v___x_2992_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_2995_, lean_object* v_name_2996_, lean_object* v_args_2997_){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; uint64_t v___x_3002_; lean_object* v___x_3003_; 
v___x_2999_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3000_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3000_, 0, v_o_2995_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
lean_inc_ref(v_name_2996_);
v___x_3001_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3001_, 0, v_name_2996_);
v___x_3002_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3003_ = l_Lasm_JS_Value_invokeRaw(v___x_3000_, v___x_3001_, v_args_2997_, v___x_3002_);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_object* v_a_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v_a_3004_ = lean_ctor_get(v___x_3003_, 0);
lean_inc(v_a_3004_);
lean_dec_ref_known(v___x_3003_, 1);
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3006_ = lean_string_append(v___x_3005_, v_name_2996_);
lean_dec_ref(v_name_2996_);
v___x_3007_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3006_, v_a_3004_);
lean_dec(v_a_3004_);
lean_dec_ref(v___x_3006_);
return v___x_3007_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v_name_2996_);
v_a_3008_ = lean_ctor_get(v___x_3003_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_3003_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_3003_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3003_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3016_, lean_object* v_name_3017_, lean_object* v_args_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3016_, v_name_3017_, v_args_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3022_, lean_object* v___f_3023_, lean_object* v_handler_3024_, lean_object* v_options_3025_, lean_object* v_a_3026_, lean_object* v_value_3027_, lean_object* v___x_3028_, lean_object* v___x_3029_, lean_object* v_a_3030_, lean_object* v___x_3031_, lean_object* v___x_3032_, lean_object* v_x_3033_){
_start:
{
uint8_t v___y_3036_; lean_object* v___y_3037_; lean_object* v_val_3038_; 
if (lean_obj_tag(v_x_3033_) == 0)
{
lean_object* v___x_3041_; 
lean_dec(v_a_3030_);
lean_dec_ref(v___x_3028_);
lean_dec(v_value_3027_);
lean_dec(v_a_3026_);
lean_dec_ref(v_options_3025_);
lean_dec_ref(v_handler_3024_);
lean_dec_ref(v___f_3023_);
lean_dec(v___x_3022_);
v___x_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3041_, 0, v_x_3033_);
return v___x_3041_;
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3099_; 
v_a_3042_ = lean_ctor_get(v_x_3033_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_x_3033_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3044_ = v_x_3033_;
v_isShared_3045_ = v_isSharedCheck_3099_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v_x_3033_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3099_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3089_; lean_object* v___x_3096_; 
v___x_3096_ = l_Lasm_JS_Data_field(v_a_3042_, v___x_3032_);
if (lean_obj_tag(v___x_3096_) == 4)
{
lean_object* v_s_3097_; 
v_s_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc_ref(v_s_3097_);
lean_dec_ref_known(v___x_3096_, 1);
v___y_3089_ = v_s_3097_;
goto v___jp_3088_;
}
else
{
lean_object* v___x_3098_; 
lean_dec(v___x_3096_);
v___x_3098_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_3089_ = v___x_3098_;
goto v___jp_3088_;
}
v___jp_3046_:
{
lean_object* v___f_3053_; lean_object* v___x_3054_; 
lean_inc(v_a_3042_);
lean_inc(v___x_3022_);
v___f_3053_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3053_, 0, v___x_3022_);
lean_closure_set(v___f_3053_, 1, v___y_3048_);
lean_closure_set(v___f_3053_, 2, v___y_3052_);
lean_closure_set(v___f_3053_, 3, v_options_3025_);
lean_closure_set(v___f_3053_, 4, v___y_3047_);
lean_closure_set(v___f_3053_, 5, v___y_3050_);
lean_closure_set(v___f_3053_, 6, v_a_3026_);
lean_closure_set(v___f_3053_, 7, v_value_3027_);
lean_closure_set(v___f_3053_, 8, v_a_3042_);
lean_closure_set(v___f_3053_, 9, v___x_3028_);
lean_closure_set(v___f_3053_, 10, v___y_3051_);
lean_closure_set(v___f_3053_, 11, v___y_3049_);
v___x_3054_ = l_Lasm_JS_Data_field(v_a_3042_, v___x_3029_);
lean_dec(v_a_3042_);
if (lean_obj_tag(v___x_3054_) == 9)
{
lean_object* v_value_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3078_; 
v_value_3055_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3078_ == 0)
{
lean_object* v_unused_3079_; 
v_unused_3079_ = lean_ctor_get(v___x_3054_, 1);
lean_dec(v_unused_3079_);
v___x_3057_ = v___x_3054_;
v_isShared_3058_ = v_isSharedCheck_3078_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_value_3055_);
lean_dec(v___x_3054_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3078_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___f_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3063_; 
v___f_3059_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3059_, 0, v___f_3053_);
v___x_3060_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3061_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3058_ == 0)
{
lean_ctor_set(v___x_3057_, 1, v___x_3061_);
v___x_3063_ = v___x_3057_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_value_3055_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v___x_3061_);
v___x_3063_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; uint8_t v___x_3067_; lean_object* v___x_3068_; 
v___x_3064_ = lean_unsigned_to_nat(1u);
v___x_3065_ = lean_mk_empty_array_with_capacity(v___x_3064_);
v___x_3066_ = lean_array_push(v___x_3065_, v___x_3063_);
v___x_3067_ = 0;
v___x_3068_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3030_, v___x_3060_, v___x_3066_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3071_; 
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3069_);
lean_dec_ref_known(v___x_3068_, 1);
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 0, v_a_3069_);
v___x_3071_ = v___x_3044_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
v___y_3036_ = v___x_3067_;
v___y_3037_ = v___f_3059_;
v_val_3038_ = v___x_3071_;
goto v___jp_3035_;
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3068_, 1);
if (v_isShared_3045_ == 0)
{
lean_ctor_set_tag(v___x_3044_, 0);
lean_ctor_set(v___x_3044_, 0, v_a_3073_);
v___x_3075_ = v___x_3044_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3073_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
v___y_3036_ = v___x_3067_;
v___y_3037_ = v___f_3059_;
v_val_3038_ = v___x_3075_;
goto v___jp_3035_;
}
}
}
}
}
else
{
lean_object* v___f_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; lean_object* v___x_3084_; 
lean_dec(v___x_3054_);
lean_dec(v_a_3030_);
v___f_3080_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3080_, 0, v___f_3053_);
v___x_3081_ = lean_mk_empty_array_with_capacity(v___x_3022_);
v___x_3082_ = 0;
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 0, v___x_3081_);
v___x_3084_ = v___x_3044_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v___x_3081_);
v___x_3084_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3084_);
v___x_3086_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3022_, v___x_3082_, v___x_3085_, v___f_3080_);
return v___x_3086_;
}
}
}
v___jp_3088_:
{
lean_object* v___f_3090_; lean_object* v___f_3091_; lean_object* v___f_3092_; lean_object* v___x_3093_; 
lean_inc_n(v___x_3022_, 2);
lean_inc_ref(v___y_3089_);
v___f_3090_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3090_, 0, v___y_3089_);
lean_closure_set(v___f_3090_, 1, v___x_3022_);
lean_closure_set(v___f_3090_, 2, v___f_3023_);
v___f_3091_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3091_, 0, v_handler_3024_);
lean_closure_set(v___f_3091_, 1, v___x_3022_);
lean_closure_set(v___f_3091_, 2, v___f_3090_);
v___f_3092_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3092_, 0, v___f_3091_);
v___x_3093_ = l_Lasm_JS_Data_field(v_a_3042_, v___x_3031_);
if (lean_obj_tag(v___x_3093_) == 4)
{
lean_object* v_s_3094_; 
v_s_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc_ref(v_s_3094_);
lean_dec_ref_known(v___x_3093_, 1);
lean_inc_ref_n(v___f_3092_, 3);
v___y_3047_ = v___f_3092_;
v___y_3048_ = v___y_3089_;
v___y_3049_ = v___f_3092_;
v___y_3050_ = v___f_3092_;
v___y_3051_ = v___f_3092_;
v___y_3052_ = v_s_3094_;
goto v___jp_3046_;
}
else
{
lean_object* v___x_3095_; 
lean_dec(v___x_3093_);
v___x_3095_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3092_, 3);
v___y_3047_ = v___f_3092_;
v___y_3048_ = v___y_3089_;
v___y_3049_ = v___f_3092_;
v___y_3050_ = v___f_3092_;
v___y_3051_ = v___f_3092_;
v___y_3052_ = v___x_3095_;
goto v___jp_3046_;
}
}
}
}
v___jp_3035_:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v_val_3038_);
v___x_3040_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3022_, v___y_3036_, v___x_3039_, v___y_3037_);
return v___x_3040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3100_, lean_object* v___f_3101_, lean_object* v_handler_3102_, lean_object* v_options_3103_, lean_object* v_a_3104_, lean_object* v_value_3105_, lean_object* v___x_3106_, lean_object* v___x_3107_, lean_object* v_a_3108_, lean_object* v___x_3109_, lean_object* v___x_3110_, lean_object* v_x_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3100_, v___f_3101_, v_handler_3102_, v_options_3103_, v_a_3104_, v_value_3105_, v___x_3106_, v___x_3107_, v_a_3108_, v___x_3109_, v___x_3110_, v_x_3111_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec_ref(v___x_3107_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3114_, size_t v_i_3115_, lean_object* v_bs_3116_){
_start:
{
uint8_t v___x_3117_; 
v___x_3117_ = lean_usize_dec_lt(v_i_3115_, v_sz_3114_);
if (v___x_3117_ == 0)
{
return v_bs_3116_;
}
else
{
lean_object* v_v_3118_; lean_object* v___x_3119_; lean_object* v_bs_x27_3120_; lean_object* v___x_3121_; size_t v___x_3122_; size_t v___x_3123_; lean_object* v___x_3124_; 
v_v_3118_ = lean_array_uget(v_bs_3116_, v_i_3115_);
v___x_3119_ = lean_unsigned_to_nat(0u);
v_bs_x27_3120_ = lean_array_uset(v_bs_3116_, v_i_3115_, v___x_3119_);
v___x_3121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3121_, 0, v_v_3118_);
v___x_3122_ = ((size_t)1ULL);
v___x_3123_ = lean_usize_add(v_i_3115_, v___x_3122_);
v___x_3124_ = lean_array_uset(v_bs_x27_3120_, v_i_3115_, v___x_3121_);
v_i_3115_ = v___x_3123_;
v_bs_3116_ = v___x_3124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3126_, lean_object* v_i_3127_, lean_object* v_bs_3128_){
_start:
{
size_t v_sz_boxed_3129_; size_t v_i_boxed_3130_; lean_object* v_res_3131_; 
v_sz_boxed_3129_ = lean_unbox_usize(v_sz_3126_);
lean_dec(v_sz_3126_);
v_i_boxed_3130_ = lean_unbox_usize(v_i_3127_);
lean_dec(v_i_3127_);
v_res_3131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3129_, v_i_boxed_3130_, v_bs_3128_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3132_, lean_object* v_keys_3133_){
_start:
{
uint32_t v___x_3135_; uint32_t v___x_3136_; uint64_t v___x_3137_; size_t v_sz_3138_; size_t v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3135_ = 203;
v___x_3136_ = lasm_js_value_handle(v_o_3132_);
v___x_3137_ = 0ULL;
v_sz_3138_ = lean_array_size(v_keys_3133_);
v___x_3139_ = ((size_t)0ULL);
v___x_3140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3138_, v___x_3139_, v_keys_3133_);
v___x_3141_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
v___x_3142_ = l_Lasm_JS_Wire_encode(v___x_3141_);
v___x_3143_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3144_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3144_, 0, v_o_3132_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = lasm_js_call(v___x_3135_, v___x_3136_, v___x_3137_, v___x_3142_, v___x_3144_);
lean_dec_ref_known(v___x_3144_, 2);
lean_dec_ref(v___x_3142_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3147_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3145_, 1);
v___x_3147_ = l_Lasm_JS_Wire_decode(v_a_3146_);
lean_dec(v_a_3146_);
return v___x_3147_;
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
v_a_3148_ = lean_ctor_get(v___x_3145_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3145_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3145_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3145_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3156_, lean_object* v_keys_3157_, lean_object* v_a_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3156_, v_keys_3157_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3180_, lean_object* v___f_3181_, lean_object* v_handler_3182_, lean_object* v_options_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_____r_3186_){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; uint8_t v___x_3192_; 
v___x_3190_ = lean_unsigned_to_nat(0u);
v___x_3191_ = lean_array_get_size(v_args_3180_);
v___x_3192_ = lean_nat_dec_lt(v___x_3190_, v___x_3191_);
if (v___x_3192_ == 0)
{
lean_dec(v_a_3185_);
lean_dec(v_a_3184_);
lean_dec_ref(v_options_3183_);
lean_dec_ref(v_handler_3182_);
lean_dec_ref(v___f_3181_);
goto v___jp_3188_;
}
else
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_array_fget_borrowed(v_args_3180_, v___x_3190_);
if (lean_obj_tag(v___x_3193_) == 9)
{
lean_object* v_value_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___f_3199_; lean_object* v___x_3200_; uint8_t v___x_3201_; lean_object* v_val_3203_; lean_object* v___x_3206_; 
v_value_3194_ = lean_ctor_get(v___x_3193_, 0);
v___x_3195_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3196_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3197_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3198_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3194_, 2);
v___f_3199_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3199_, 0, v___x_3190_);
lean_closure_set(v___f_3199_, 1, v___f_3181_);
lean_closure_set(v___f_3199_, 2, v_handler_3182_);
lean_closure_set(v___f_3199_, 3, v_options_3183_);
lean_closure_set(v___f_3199_, 4, v_a_3184_);
lean_closure_set(v___f_3199_, 5, v_value_3194_);
lean_closure_set(v___f_3199_, 6, v___x_3198_);
lean_closure_set(v___f_3199_, 7, v___x_3197_);
lean_closure_set(v___f_3199_, 8, v_a_3185_);
lean_closure_set(v___f_3199_, 9, v___x_3196_);
lean_closure_set(v___f_3199_, 10, v___x_3195_);
v___x_3200_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3201_ = 0;
v___x_3206_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3194_, v___x_3200_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___x_3206_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3206_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
lean_ctor_set_tag(v___x_3209_, 1);
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
v_val_3203_ = v___x_3212_;
goto v___jp_3202_;
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
v_a_3215_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___x_3206_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3206_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
lean_ctor_set_tag(v___x_3217_, 0);
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
v_val_3203_ = v___x_3220_;
goto v___jp_3202_;
}
}
}
v___jp_3202_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v_val_3203_);
v___x_3205_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3190_, v___x_3201_, v___x_3204_, v___f_3199_);
return v___x_3205_;
}
}
else
{
lean_dec(v_a_3185_);
lean_dec(v_a_3184_);
lean_dec_ref(v_options_3183_);
lean_dec_ref(v_handler_3182_);
lean_dec_ref(v___f_3181_);
goto v___jp_3188_;
}
}
v___jp_3188_:
{
lean_object* v___x_3189_; 
v___x_3189_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3223_, lean_object* v___f_3224_, lean_object* v_handler_3225_, lean_object* v_options_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_____r_3229_, lean_object* v___y_3230_){
_start:
{
lean_object* v_res_3231_; 
v_res_3231_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3223_, v___f_3224_, v_handler_3225_, v_options_3226_, v_a_3227_, v_a_3228_, v_____r_3229_);
lean_dec_ref(v_args_3223_);
return v_res_3231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3232_, lean_object* v_x_3233_){
_start:
{
if (lean_obj_tag(v_x_3233_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v___f_3232_);
v_a_3235_ = lean_ctor_get(v_x_3233_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v_x_3233_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3237_ = v_x_3233_;
v_isShared_3238_ = v_isSharedCheck_3243_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v_x_3233_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3243_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v___x_3241_; 
v___x_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
return v___x_3241_;
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3245_; 
v_a_3244_ = lean_ctor_get(v_x_3233_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v_x_3233_, 1);
v___x_3245_ = lean_apply_2(v___f_3232_, v_a_3244_, lean_box(0));
return v___x_3245_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3246_, lean_object* v_x_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3246_, v_x_3247_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3250_, lean_object* v_handler_3251_, lean_object* v_options_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_args_3255_){
_start:
{
lean_object* v___f_3257_; lean_object* v___x_3261_; lean_object* v___x_3262_; uint8_t v___x_3263_; 
lean_inc(v_a_3254_);
lean_inc(v_a_3253_);
lean_inc_ref(v_options_3252_);
lean_inc_ref(v_handler_3251_);
lean_inc_ref(v___f_3250_);
lean_inc_ref(v_args_3255_);
v___f_3257_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3257_, 0, v_args_3255_);
lean_closure_set(v___f_3257_, 1, v___f_3250_);
lean_closure_set(v___f_3257_, 2, v_handler_3251_);
lean_closure_set(v___f_3257_, 3, v_options_3252_);
lean_closure_set(v___f_3257_, 4, v_a_3253_);
lean_closure_set(v___f_3257_, 5, v_a_3254_);
v___x_3261_ = lean_unsigned_to_nat(1u);
v___x_3262_ = lean_array_get_size(v_args_3255_);
v___x_3263_ = lean_nat_dec_lt(v___x_3261_, v___x_3262_);
if (v___x_3263_ == 0)
{
lean_dec_ref(v___f_3257_);
goto v___jp_3258_;
}
else
{
lean_object* v___x_3264_; 
v___x_3264_ = lean_array_fget_borrowed(v_args_3255_, v___x_3261_);
switch(lean_obj_tag(v___x_3264_))
{
case 9:
{
lean_object* v___f_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; uint8_t v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
lean_inc_ref(v___x_3264_);
lean_dec_ref(v_args_3255_);
lean_dec(v_a_3254_);
lean_dec(v_a_3253_);
lean_dec_ref(v_options_3252_);
lean_dec_ref(v_handler_3251_);
lean_dec_ref(v___f_3250_);
v___f_3265_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3265_, 0, v___f_3257_);
v___x_3266_ = l_Lasm_Fetch_platformEnv;
v___x_3267_ = lean_unsigned_to_nat(0u);
v___x_3268_ = 0;
v___x_3269_ = lean_st_ref_swap(v___x_3266_, v___x_3264_);
lean_dec(v___x_3269_);
v___x_3270_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3271_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3267_, v___x_3268_, v___x_3270_, v___f_3265_);
return v___x_3271_;
}
case 8:
{
lean_object* v___f_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
lean_inc_ref(v___x_3264_);
lean_dec_ref(v_args_3255_);
lean_dec(v_a_3254_);
lean_dec(v_a_3253_);
lean_dec_ref(v_options_3252_);
lean_dec_ref(v_handler_3251_);
lean_dec_ref(v___f_3250_);
v___f_3272_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3272_, 0, v___f_3257_);
v___x_3273_ = l_Lasm_Fetch_platformEnv;
v___x_3274_ = lean_unsigned_to_nat(0u);
v___x_3275_ = 0;
v___x_3276_ = lean_st_ref_swap(v___x_3273_, v___x_3264_);
lean_dec(v___x_3276_);
v___x_3277_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3274_, v___x_3275_, v___x_3277_, v___f_3272_);
return v___x_3278_;
}
default: 
{
lean_dec_ref(v___f_3257_);
goto v___jp_3258_;
}
}
}
v___jp_3258_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3259_ = lean_box(0);
v___x_3260_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3255_, v___f_3250_, v_handler_3251_, v_options_3252_, v_a_3253_, v_a_3254_, v___x_3259_);
lean_dec_ref(v_args_3255_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3279_, lean_object* v_handler_3280_, lean_object* v_options_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_args_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3279_, v_handler_3280_, v_options_3281_, v_a_3282_, v_a_3283_, v_args_3284_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3290_, lean_object* v_options_3291_){
_start:
{
lean_object* v___f_3293_; lean_object* v___x_3294_; 
v___f_3293_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3294_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc_n(v_a_3295_, 2);
lean_dec_ref_known(v___x_3294_, 1);
v___x_3296_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3297_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3295_, v___x_3296_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3299_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3300_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3295_, v___x_3299_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___f_3302_; lean_object* v___x_3303_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3300_, 1);
v___f_3302_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3302_, 0, v___f_3293_);
lean_closure_set(v___f_3302_, 1, v_handler_3290_);
lean_closure_set(v___f_3302_, 2, v_options_3291_);
lean_closure_set(v___f_3302_, 3, v_a_3298_);
lean_closure_set(v___f_3302_, 4, v_a_3301_);
v___x_3303_ = l_Lasm_JS_Function_ofFn(v___f_3302_);
return v___x_3303_;
}
else
{
lean_dec(v_a_3298_);
lean_dec_ref(v_options_3291_);
lean_dec_ref(v_handler_3290_);
return v___x_3300_;
}
}
else
{
lean_dec(v_a_3295_);
lean_dec_ref(v_options_3291_);
lean_dec_ref(v_handler_3290_);
return v___x_3297_;
}
}
else
{
lean_dec_ref(v_options_3291_);
lean_dec_ref(v_handler_3290_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3304_, lean_object* v_options_3305_, lean_object* v_a_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3304_, v_options_3305_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3308_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = l_Lasm_JS_Wire_decode(v_bytes_3308_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3311_, lean_object* v_a_3312_){
_start:
{
lean_object* v_res_3313_; 
v_res_3313_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3311_);
lean_dec_ref(v_bytes_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3314_, lean_object* v_bytes_3315_){
_start:
{
lean_object* v___x_3317_; 
v___x_3317_ = l_Lasm_JS_Wire_decode(v_bytes_3315_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3318_, lean_object* v_bytes_3319_, lean_object* v_a_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3318_, v_bytes_3319_);
lean_dec_ref(v_bytes_3319_);
lean_dec_ref(v_context_3318_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3322_){
_start:
{
if (lean_obj_tag(v_x_3322_) == 0)
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3332_; 
v_a_3324_ = lean_ctor_get(v_x_3322_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v_x_3322_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3326_ = v_x_3322_;
v_isShared_3327_ = v_isSharedCheck_3332_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v_x_3322_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3332_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
lean_object* v___x_3330_; 
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
return v___x_3330_;
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3342_; 
v_a_3333_ = lean_ctor_get(v_x_3322_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v_x_3322_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3335_ = v_x_3322_;
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v_x_3322_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
v___x_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3343_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3350_){
_start:
{
if (lean_obj_tag(v_x_3350_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3360_; 
v_a_3352_ = lean_ctor_get(v_x_3350_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v_x_3350_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3354_ = v_x_3350_;
v_isShared_3355_ = v_isSharedCheck_3360_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v_x_3350_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3360_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
lean_object* v___x_3358_; 
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3357_);
return v___x_3358_;
}
}
}
else
{
lean_object* v___x_3361_; 
lean_dec_ref_known(v_x_3350_, 1);
v___x_3361_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3361_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3362_, lean_object* v___y_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3362_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3365_, lean_object* v_x_3366_){
_start:
{
if (lean_obj_tag(v_x_3366_) == 0)
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3376_; 
lean_dec_ref(v___f_3365_);
v_a_3368_ = lean_ctor_get(v_x_3366_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v_x_3366_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3370_ = v_x_3366_;
v_isShared_3371_ = v_isSharedCheck_3376_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v_x_3366_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3376_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
lean_object* v___x_3374_; 
v___x_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3373_);
return v___x_3374_;
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3397_; 
v_a_3377_ = lean_ctor_get(v_x_3366_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_x_3366_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3379_ = v_x_3366_;
v_isShared_3380_ = v_isSharedCheck_3397_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v_x_3366_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3397_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v_flush_3381_; lean_object* v___x_3382_; uint8_t v___x_3383_; lean_object* v_val_3385_; lean_object* v___x_3388_; 
v_flush_3381_ = lean_ctor_get(v_a_3377_, 0);
lean_inc_ref(v_flush_3381_);
lean_dec(v_a_3377_);
v___x_3382_ = lean_unsigned_to_nat(0u);
v___x_3383_ = 0;
v___x_3388_ = lean_apply_1(v_flush_3381_, lean_box(0));
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3391_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___x_3388_, 1);
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 0, v_a_3389_);
v___x_3391_ = v___x_3379_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3389_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
v_val_3385_ = v___x_3391_;
goto v___jp_3384_;
}
}
else
{
lean_object* v_a_3393_; lean_object* v___x_3395_; 
v_a_3393_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3393_);
lean_dec_ref_known(v___x_3388_, 1);
if (v_isShared_3380_ == 0)
{
lean_ctor_set_tag(v___x_3379_, 0);
lean_ctor_set(v___x_3379_, 0, v_a_3393_);
v___x_3395_ = v___x_3379_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
v_val_3385_ = v___x_3395_;
goto v___jp_3384_;
}
}
v___jp_3384_:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3386_, 0, v_val_3385_);
v___x_3387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3382_, v___x_3383_, v___x_3386_, v___f_3365_);
return v___x_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3398_, lean_object* v_x_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3398_, v_x_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3402_, lean_object* v_x_3403_){
_start:
{
if (lean_obj_tag(v_x_3403_) == 0)
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3413_; 
lean_dec_ref(v___f_3402_);
v_a_3405_ = lean_ctor_get(v_x_3403_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_x_3403_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3407_ = v_x_3403_;
v_isShared_3408_ = v_isSharedCheck_3413_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v_x_3403_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3413_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3411_; 
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
}
else
{
lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3425_; 
v_isSharedCheck_3425_ = !lean_is_exclusive(v_x_3403_);
if (v_isSharedCheck_3425_ == 0)
{
lean_object* v_unused_3426_; 
v_unused_3426_ = lean_ctor_get(v_x_3403_, 0);
lean_dec(v_unused_3426_);
v___x_3415_ = v_x_3403_;
v_isShared_3416_ = v_isSharedCheck_3425_;
goto v_resetjp_3414_;
}
else
{
lean_dec(v_x_3403_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3425_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3417_; uint8_t v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3421_; 
v___x_3417_ = lean_unsigned_to_nat(0u);
v___x_3418_ = 0;
v___x_3419_ = lean_get_stdout();
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 0, v___x_3419_);
v___x_3421_ = v___x_3415_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
v___x_3423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3417_, v___x_3418_, v___x_3422_, v___f_3402_);
return v___x_3423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3427_, lean_object* v_x_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v_res_3430_; 
v_res_3430_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3427_, v_x_3428_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3431_){
_start:
{
if (lean_obj_tag(v_x_3431_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3441_; 
v_a_3433_ = lean_ctor_get(v_x_3431_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v_x_3431_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3435_ = v_x_3431_;
v_isShared_3436_ = v_isSharedCheck_3441_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v_x_3431_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3441_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
lean_object* v___x_3439_; 
v___x_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3438_);
return v___x_3439_;
}
}
}
else
{
lean_object* v___x_3442_; 
lean_dec_ref_known(v_x_3431_, 1);
v___x_3442_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3442_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3443_, lean_object* v___y_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3443_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3447_, lean_object* v___x_3448_, lean_object* v_____r_3449_){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3451_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3452_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3452_, 0, v_snd_3447_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
lean_ctor_set(v___x_3452_, 2, v___x_3448_);
v___x_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3455_, lean_object* v___x_3456_, lean_object* v_____r_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3455_, v___x_3456_, v_____r_3457_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3460_, lean_object* v_x_3461_){
_start:
{
if (lean_obj_tag(v_x_3461_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3471_; 
lean_dec_ref(v___f_3460_);
v_a_3463_ = lean_ctor_get(v_x_3461_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v_x_3461_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3465_ = v_x_3461_;
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v_x_3461_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3468_; 
if (v_isShared_3466_ == 0)
{
v___x_3468_ = v___x_3465_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3463_);
v___x_3468_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
lean_object* v___x_3469_; 
v___x_3469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3472_; 
v_a_3472_ = lean_ctor_get(v_x_3461_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v_x_3461_, 1);
if (lean_obj_tag(v_a_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3481_; 
lean_dec_ref(v___f_3460_);
v_a_3473_ = lean_ctor_get(v_a_3472_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v_a_3472_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3475_ = v_a_3472_;
v_isShared_3476_ = v_isSharedCheck_3481_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v_a_3472_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3481_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set_tag(v___x_3475_, 1);
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3479_; 
v___x_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
return v___x_3479_;
}
}
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3483_; 
v_a_3482_ = lean_ctor_get(v_a_3472_, 0);
lean_inc(v_a_3482_);
lean_dec_ref_known(v_a_3472_, 1);
v___x_3483_ = lean_apply_2(v___f_3460_, v_a_3482_, lean_box(0));
return v___x_3483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3484_, lean_object* v_x_3485_, lean_object* v___y_3486_){
_start:
{
lean_object* v_res_3487_; 
v_res_3487_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3484_, v_x_3485_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3489_, lean_object* v___x_3490_, lean_object* v_x_3491_){
_start:
{
if (lean_obj_tag(v_x_3491_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3501_; 
lean_dec_ref(v___x_3490_);
lean_dec(v_snd_3489_);
v_a_3493_ = lean_ctor_get(v_x_3491_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_x_3491_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3495_ = v_x_3491_;
v_isShared_3496_ = v_isSharedCheck_3501_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v_x_3491_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3501_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3499_; 
v___x_3499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
return v___x_3499_;
}
}
}
else
{
lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3512_; 
v_isSharedCheck_3512_ = !lean_is_exclusive(v_x_3491_);
if (v_isSharedCheck_3512_ == 0)
{
lean_object* v_unused_3513_; 
v_unused_3513_ = lean_ctor_get(v_x_3491_, 0);
lean_dec(v_unused_3513_);
v___x_3503_ = v_x_3491_;
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
else
{
lean_dec(v_x_3491_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3505_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3506_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3506_, 0, v_snd_3489_);
lean_ctor_set(v___x_3506_, 1, v___x_3505_);
lean_ctor_set(v___x_3506_, 2, v___x_3490_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set_tag(v___x_3503_, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3506_);
v___x_3508_ = v___x_3503_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
v___x_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
return v___x_3510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3514_, lean_object* v___x_3515_, lean_object* v_x_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3514_, v___x_3515_, v_x_3516_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3519_, lean_object* v_name_3520_, lean_object* v_args_3521_){
_start:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; uint64_t v___x_3526_; lean_object* v___x_3527_; 
v___x_3523_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3524_, 0, v_o_3519_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3525_, 0, v_name_3520_);
v___x_3526_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3527_ = l_Lasm_JS_Value_invokeRaw(v___x_3524_, v___x_3525_, v_args_3521_, v___x_3526_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; lean_object* v___x_3529_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3527_, 1);
v___x_3529_ = l_Lasm_JS_Wire_decode(v_a_3528_);
lean_dec(v_a_3528_);
return v___x_3529_;
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
v_a_3530_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3527_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3527_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3538_, lean_object* v_name_3539_, lean_object* v_args_3540_, lean_object* v_a_3541_){
_start:
{
lean_object* v_res_3542_; 
v_res_3542_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3538_, v_name_3539_, v_args_3540_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3543_, uint8_t v___x_3544_, lean_object* v___f_3545_, lean_object* v_snd_3546_, lean_object* v_chunk_3547_){
_start:
{
lean_object* v_val_3550_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3553_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3554_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3554_, 0, v_chunk_3547_);
v___x_3555_ = lean_unsigned_to_nat(1u);
v___x_3556_ = lean_mk_empty_array_with_capacity(v___x_3555_);
v___x_3557_ = lean_array_push(v___x_3556_, v___x_3554_);
v___x_3558_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3546_, v___x_3553_, v___x_3557_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3558_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3558_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
lean_ctor_set_tag(v___x_3561_, 1);
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
v_val_3550_ = v___x_3564_;
goto v___jp_3549_;
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_a_3567_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3558_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3558_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
lean_ctor_set_tag(v___x_3569_, 0);
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
v_val_3550_ = v___x_3572_;
goto v___jp_3549_;
}
}
}
v___jp_3549_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v_val_3550_);
v___x_3552_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3543_, v___x_3544_, v___x_3551_, v___f_3545_);
return v___x_3552_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3575_, lean_object* v___x_3576_, lean_object* v___f_3577_, lean_object* v_snd_3578_, lean_object* v_chunk_3579_, lean_object* v___y_3580_){
_start:
{
uint8_t v___x_18461__boxed_3581_; lean_object* v_res_3582_; 
v___x_18461__boxed_3581_ = lean_unbox(v___x_3576_);
v_res_3582_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3575_, v___x_18461__boxed_3581_, v___f_3577_, v_snd_3578_, v_chunk_3579_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3583_, uint8_t v___x_3584_, lean_object* v___f_3585_, lean_object* v_x_3586_){
_start:
{
lean_object* v_val_3589_; 
if (lean_obj_tag(v_x_3586_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3608_; 
v_a_3592_ = lean_ctor_get(v_x_3586_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v_x_3586_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3594_ = v_x_3586_;
v_isShared_3595_ = v_isSharedCheck_3608_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v_x_3586_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3608_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v___x_3596_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3597_ = lean_io_error_to_string(v_a_3592_);
v___x_3598_ = lean_string_append(v___x_3596_, v___x_3597_);
lean_dec_ref(v___x_3597_);
v___x_3599_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3598_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_a_3600_; lean_object* v___x_3602_; 
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3599_, 1);
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 1);
lean_ctor_set(v___x_3594_, 0, v_a_3600_);
v___x_3602_ = v___x_3594_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
v_val_3589_ = v___x_3602_;
goto v___jp_3588_;
}
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3606_; 
v_a_3604_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3599_, 1);
if (v_isShared_3595_ == 0)
{
lean_ctor_set(v___x_3594_, 0, v_a_3604_);
v___x_3606_ = v___x_3594_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3604_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
v_val_3589_ = v___x_3606_;
goto v___jp_3588_;
}
}
}
}
else
{
lean_object* v___x_3609_; 
lean_dec_ref(v___f_3585_);
lean_dec(v___x_3583_);
v___x_3609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3609_, 0, v_x_3586_);
return v___x_3609_;
}
v___jp_3588_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3590_, 0, v_val_3589_);
v___x_3591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3583_, v___x_3584_, v___x_3590_, v___f_3585_);
return v___x_3591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3610_, lean_object* v___x_3611_, lean_object* v___f_3612_, lean_object* v_x_3613_, lean_object* v___y_3614_){
_start:
{
uint8_t v___x_18529__boxed_3615_; lean_object* v_res_3616_; 
v___x_18529__boxed_3615_ = lean_unbox(v___x_3611_);
v_res_3616_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3610_, v___x_18529__boxed_3615_, v___f_3612_, v_x_3613_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3617_, lean_object* v_snd_3618_, lean_object* v___y_3619_, uint16_t v_status_3620_, lean_object* v_body_3621_, lean_object* v___x_3622_, lean_object* v___f_3623_, lean_object* v___f_3624_, lean_object* v___f_3625_, lean_object* v___f_3626_, lean_object* v___f_3627_, lean_object* v_x_3628_){
_start:
{
if (lean_obj_tag(v_x_3628_) == 0)
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
lean_dec(v___x_3622_);
lean_dec_ref(v_body_3621_);
lean_dec(v_snd_3618_);
lean_dec(v_stream_3617_);
v_a_3630_ = lean_ctor_get(v_x_3628_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v_x_3628_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3632_ = v_x_3628_;
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v_x_3628_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; 
v___x_3636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
return v___x_3636_;
}
}
}
else
{
lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3668_; 
v_isSharedCheck_3668_ = !lean_is_exclusive(v_x_3628_);
if (v_isSharedCheck_3668_ == 0)
{
lean_object* v_unused_3669_; 
v_unused_3669_ = lean_ctor_get(v_x_3628_, 0);
lean_dec(v_unused_3669_);
v___x_3640_ = v_x_3628_;
v_isShared_3641_ = v_isSharedCheck_3668_;
goto v_resetjp_3639_;
}
else
{
lean_dec(v_x_3628_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3668_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
if (lean_obj_tag(v_stream_3617_) == 0)
{
lean_object* v___x_3642_; lean_object* v___y_3644_; uint8_t v___x_3653_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
lean_dec(v___x_3622_);
v___x_3642_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3653_ = l_Lasm_Fetch_bodyless(v___y_3619_, v_status_3620_);
if (v___x_3653_ == 0)
{
lean_object* v___x_3654_; 
v___x_3654_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3654_, 0, v_body_3621_);
v___y_3644_ = v___x_3654_;
goto v___jp_3643_;
}
else
{
lean_object* v___x_3655_; 
lean_dec_ref(v_body_3621_);
v___x_3655_ = lean_box(0);
v___y_3644_ = v___x_3655_;
goto v___jp_3643_;
}
v___jp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3650_; 
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = lean_mk_empty_array_with_capacity(v___x_3645_);
v___x_3647_ = lean_array_push(v___x_3646_, v___y_3644_);
v___x_3648_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3648_, 0, v_snd_3618_);
lean_ctor_set(v___x_3648_, 1, v___x_3642_);
lean_ctor_set(v___x_3648_, 2, v___x_3647_);
if (v_isShared_3641_ == 0)
{
lean_ctor_set(v___x_3640_, 0, v___x_3648_);
v___x_3650_ = v___x_3640_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3648_);
v___x_3650_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
lean_object* v___x_3651_; 
v___x_3651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3650_);
return v___x_3651_;
}
}
}
else
{
lean_object* v_val_3656_; uint8_t v___x_3657_; 
lean_del_object(v___x_3640_);
lean_dec_ref(v_body_3621_);
v_val_3656_ = lean_ctor_get(v_stream_3617_, 0);
lean_inc(v_val_3656_);
lean_dec_ref_known(v_stream_3617_, 1);
v___x_3657_ = l_Lasm_Fetch_bodyless(v___y_3619_, v_status_3620_);
if (v___x_3657_ == 0)
{
lean_object* v___x_3658_; lean_object* v___f_3659_; lean_object* v___x_3660_; lean_object* v___f_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
lean_dec_ref(v___f_3627_);
v___x_3658_ = lean_box(v___x_3657_);
lean_inc_n(v___x_3622_, 4);
v___f_3659_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3659_, 0, v___x_3622_);
lean_closure_set(v___f_3659_, 1, v___x_3658_);
lean_closure_set(v___f_3659_, 2, v___f_3623_);
lean_closure_set(v___f_3659_, 3, v_snd_3618_);
v___x_3660_ = lean_box(v___x_3657_);
v___f_3661_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3661_, 0, v___x_3622_);
lean_closure_set(v___f_3661_, 1, v___x_3660_);
lean_closure_set(v___f_3661_, 2, v___f_3624_);
v___x_3662_ = lean_apply_2(v_val_3656_, v___f_3659_, lean_box(0));
v___x_3663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3622_, v___x_3657_, v___x_3662_, v___f_3625_);
v___x_3664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3622_, v___x_3657_, v___x_3663_, v___f_3661_);
v___x_3665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3622_, v___x_3657_, v___x_3664_, v___f_3626_);
return v___x_3665_;
}
else
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec(v_val_3656_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v___f_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
lean_dec(v___x_3622_);
lean_dec(v_snd_3618_);
v___x_3666_ = lean_box(0);
v___x_3667_ = lean_apply_2(v___f_3627_, v___x_3666_, lean_box(0));
return v___x_3667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3670_, lean_object* v_snd_3671_, lean_object* v___y_3672_, lean_object* v_status_3673_, lean_object* v_body_3674_, lean_object* v___x_3675_, lean_object* v___f_3676_, lean_object* v___f_3677_, lean_object* v___f_3678_, lean_object* v___f_3679_, lean_object* v___f_3680_, lean_object* v_x_3681_, lean_object* v___y_3682_){
_start:
{
uint16_t v_status_boxed_3683_; lean_object* v_res_3684_; 
v_status_boxed_3683_ = lean_unbox(v_status_3673_);
v_res_3684_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3670_, v_snd_3671_, v___y_3672_, v_status_boxed_3683_, v_body_3674_, v___x_3675_, v___f_3676_, v___f_3677_, v___f_3678_, v___f_3679_, v___f_3680_, v_x_3681_);
lean_dec_ref(v___y_3672_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3685_, size_t v_i_3686_, size_t v_stop_3687_, lean_object* v_b_3688_){
_start:
{
uint8_t v___x_3689_; 
v___x_3689_ = lean_usize_dec_eq(v_i_3686_, v_stop_3687_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; lean_object* v_fst_3691_; lean_object* v_snd_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; size_t v___x_3697_; size_t v___x_3698_; 
v___x_3690_ = lean_array_uget_borrowed(v_as_3685_, v_i_3686_);
v_fst_3691_ = lean_ctor_get(v___x_3690_, 0);
v_snd_3692_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_fst_3691_);
v___x_3693_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3693_, 0, v_fst_3691_);
v___x_3694_ = lean_array_push(v_b_3688_, v___x_3693_);
lean_inc(v_snd_3692_);
v___x_3695_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3695_, 0, v_snd_3692_);
v___x_3696_ = lean_array_push(v___x_3694_, v___x_3695_);
v___x_3697_ = ((size_t)1ULL);
v___x_3698_ = lean_usize_add(v_i_3686_, v___x_3697_);
v_i_3686_ = v___x_3698_;
v_b_3688_ = v___x_3696_;
goto _start;
}
else
{
return v_b_3688_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3700_, lean_object* v_i_3701_, lean_object* v_stop_3702_, lean_object* v_b_3703_){
_start:
{
size_t v_i_boxed_3704_; size_t v_stop_boxed_3705_; lean_object* v_res_3706_; 
v_i_boxed_3704_ = lean_unbox_usize(v_i_3701_);
lean_dec(v_i_3701_);
v_stop_boxed_3705_ = lean_unbox_usize(v_stop_3702_);
lean_dec(v_stop_3702_);
v_res_3706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3700_, v_i_boxed_3704_, v_stop_boxed_3705_, v_b_3703_);
lean_dec_ref(v_as_3700_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3708_, lean_object* v_snd_3709_, lean_object* v___y_3710_, lean_object* v___f_3711_, lean_object* v___f_3712_, lean_object* v_x_3713_){
_start:
{
lean_object* v___y_3716_; uint8_t v___y_3717_; lean_object* v_val_3718_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; 
if (lean_obj_tag(v_x_3713_) == 0)
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3757_; 
lean_dec_ref(v___f_3712_);
lean_dec_ref(v___f_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v_snd_3709_);
lean_dec(v___x_3708_);
v_a_3749_ = lean_ctor_get(v_x_3713_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v_x_3713_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3751_ = v_x_3713_;
v_isShared_3752_ = v_isSharedCheck_3757_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v_x_3713_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3757_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3754_; 
if (v_isShared_3752_ == 0)
{
v___x_3754_ = v___x_3751_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3749_);
v___x_3754_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
lean_object* v___x_3755_; 
v___x_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
return v___x_3755_;
}
}
}
else
{
lean_object* v_a_3758_; uint16_t v_status_3759_; lean_object* v_headers_3760_; lean_object* v_body_3761_; lean_object* v_stream_3762_; lean_object* v___x_3763_; lean_object* v___f_3764_; lean_object* v___f_3765_; lean_object* v___f_3766_; lean_object* v___y_3768_; lean_object* v___x_3780_; uint8_t v___x_3781_; 
v_a_3758_ = lean_ctor_get(v_x_3713_, 0);
lean_inc(v_a_3758_);
lean_dec_ref_known(v_x_3713_, 1);
v_status_3759_ = lean_ctor_get_uint16(v_a_3758_, sizeof(void*)*3);
v_headers_3760_ = lean_ctor_get(v_a_3758_, 0);
lean_inc_ref(v_headers_3760_);
v_body_3761_ = lean_ctor_get(v_a_3758_, 1);
lean_inc_ref(v_body_3761_);
v_stream_3762_ = lean_ctor_get(v_a_3758_, 2);
lean_inc(v_stream_3762_);
lean_dec(v_a_3758_);
v___x_3763_ = lean_mk_empty_array_with_capacity(v___x_3708_);
lean_inc_ref_n(v___x_3763_, 2);
lean_inc_n(v_snd_3709_, 2);
v___f_3764_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3764_, 0, v_snd_3709_);
lean_closure_set(v___f_3764_, 1, v___x_3763_);
lean_inc_ref(v___f_3764_);
v___f_3765_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3765_, 0, v___f_3764_);
v___f_3766_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3766_, 0, v_snd_3709_);
lean_closure_set(v___f_3766_, 1, v___x_3763_);
v___x_3780_ = lean_array_get_size(v_headers_3760_);
v___x_3781_ = lean_nat_dec_lt(v___x_3708_, v___x_3780_);
if (v___x_3781_ == 0)
{
lean_dec_ref(v_headers_3760_);
v___y_3768_ = v___x_3763_;
goto v___jp_3767_;
}
else
{
size_t v___x_3782_; size_t v___x_3783_; lean_object* v___x_3784_; 
v___x_3782_ = ((size_t)0ULL);
v___x_3783_ = lean_usize_of_nat(v___x_3780_);
v___x_3784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3760_, v___x_3782_, v___x_3783_, v___x_3763_);
lean_dec_ref(v_headers_3760_);
v___y_3768_ = v___x_3784_;
goto v___jp_3767_;
}
v___jp_3767_:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___f_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v___x_3769_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3770_ = lean_box(v_status_3759_);
lean_inc(v___x_3708_);
lean_inc(v_snd_3709_);
v___f_3771_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3771_, 0, v_stream_3762_);
lean_closure_set(v___f_3771_, 1, v_snd_3709_);
lean_closure_set(v___f_3771_, 2, v___y_3710_);
lean_closure_set(v___f_3771_, 3, v___x_3770_);
lean_closure_set(v___f_3771_, 4, v_body_3761_);
lean_closure_set(v___f_3771_, 5, v___x_3708_);
lean_closure_set(v___f_3771_, 6, v___f_3711_);
lean_closure_set(v___f_3771_, 7, v___f_3766_);
lean_closure_set(v___f_3771_, 8, v___f_3712_);
lean_closure_set(v___f_3771_, 9, v___f_3765_);
lean_closure_set(v___f_3771_, 10, v___f_3764_);
v___x_3772_ = lean_uint16_to_nat(v_status_3759_);
v___x_3773_ = lean_nat_to_int(v___x_3772_);
v___x_3774_ = lean_nat_abs(v___x_3773_);
v___x_3775_ = lean_cstr_to_nat("9007199254740991");
v___x_3776_ = lean_nat_dec_le(v___x_3774_, v___x_3775_);
lean_dec(v___x_3774_);
if (v___x_3776_ == 0)
{
lean_object* v___x_3777_; 
v___x_3777_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3773_);
v___y_3722_ = v___x_3769_;
v___y_3723_ = v___f_3771_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___x_3777_;
goto v___jp_3721_;
}
else
{
double v___x_3778_; lean_object* v___x_3779_; 
v___x_3778_ = l_Float_ofInt(v___x_3773_);
lean_dec(v___x_3773_);
v___x_3779_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3779_, 0, v___x_3778_);
v___y_3722_ = v___x_3769_;
v___y_3723_ = v___f_3771_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___x_3779_;
goto v___jp_3721_;
}
}
}
v___jp_3715_:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3719_, 0, v_val_3718_);
v___x_3720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3708_, v___y_3717_, v___x_3719_, v___y_3716_);
return v___x_3720_;
}
v___jp_3721_:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3732_; 
v___x_3726_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3726_, 0, v___y_3724_);
v___x_3727_ = lean_unsigned_to_nat(2u);
v___x_3728_ = lean_mk_empty_array_with_capacity(v___x_3727_);
v___x_3729_ = lean_array_push(v___x_3728_, v___y_3725_);
v___x_3730_ = lean_array_push(v___x_3729_, v___x_3726_);
v___x_3731_ = 0;
lean_inc_ref(v___y_3722_);
v___x_3732_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3709_, v___y_3722_, v___x_3730_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3740_; 
v_a_3733_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3735_ = v___x_3732_;
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3732_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3738_; 
if (v_isShared_3736_ == 0)
{
lean_ctor_set_tag(v___x_3735_, 1);
v___x_3738_ = v___x_3735_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_a_3733_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
v___y_3716_ = v___y_3723_;
v___y_3717_ = v___x_3731_;
v_val_3718_ = v___x_3738_;
goto v___jp_3715_;
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
v_a_3741_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3743_ = v___x_3732_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3732_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
lean_ctor_set_tag(v___x_3743_, 0);
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
v___y_3716_ = v___y_3723_;
v___y_3717_ = v___x_3731_;
v_val_3718_ = v___x_3746_;
goto v___jp_3715_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3785_, lean_object* v_snd_3786_, lean_object* v___y_3787_, lean_object* v___f_3788_, lean_object* v___f_3789_, lean_object* v_x_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3785_, v_snd_3786_, v___y_3787_, v___f_3788_, v___f_3789_, v_x_3790_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3793_, lean_object* v___x_3794_, lean_object* v___f_3795_, lean_object* v_request_3796_){
_start:
{
uint8_t v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3798_ = 0;
v___x_3799_ = l_Lasm_Fetch_respond(v_handler_3793_, v_request_3796_);
v___x_3800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3794_, v___x_3798_, v___x_3799_, v___f_3795_);
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3801_, lean_object* v___x_3802_, lean_object* v___f_3803_, lean_object* v_request_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3801_, v___x_3802_, v___f_3803_, v_request_3804_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3807_, lean_object* v_x_3808_){
_start:
{
if (lean_obj_tag(v_x_3808_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3818_; 
lean_dec_ref(v___f_3807_);
v_a_3810_ = lean_ctor_get(v_x_3808_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v_x_3808_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3812_ = v_x_3808_;
v_isShared_3813_ = v_isSharedCheck_3818_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v_x_3808_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3818_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
lean_object* v___x_3816_; 
v___x_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3815_);
return v___x_3816_;
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3820_; 
v_a_3819_ = lean_ctor_get(v_x_3808_, 0);
lean_inc(v_a_3819_);
lean_dec_ref_known(v_x_3808_, 1);
v___x_3820_ = lean_apply_2(v___f_3807_, v_a_3819_, lean_box(0));
return v___x_3820_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_3821_, lean_object* v_x_3822_, lean_object* v___y_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l_Lasm_Fetch_serveNode___lam__13(v___f_3821_, v_x_3822_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___x_3827_, lean_object* v___f_3828_, lean_object* v___x_3829_, uint8_t v___x_3830_, lean_object* v___f_3831_, lean_object* v_x_3832_){
_start:
{
if (lean_obj_tag(v_x_3832_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3842_; 
lean_dec_ref(v___f_3831_);
lean_dec(v___x_3829_);
lean_dec_ref(v___f_3828_);
lean_dec_ref(v___x_3827_);
lean_dec_ref(v___y_3826_);
lean_dec_ref(v___y_3825_);
v_a_3834_ = lean_ctor_get(v_x_3832_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v_x_3832_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3836_ = v_x_3832_;
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v_x_3832_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3834_);
v___x_3839_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; 
v___x_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3840_, 0, v___x_3839_);
return v___x_3840_;
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3853_; 
v_a_3843_ = lean_ctor_get(v_x_3832_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v_x_3832_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3845_ = v_x_3832_;
v_isShared_3846_ = v_isSharedCheck_3853_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v_x_3832_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3853_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3847_, 0, v___y_3825_);
lean_ctor_set(v___x_3847_, 1, v___y_3826_);
lean_ctor_set(v___x_3847_, 2, v___x_3827_);
lean_ctor_set(v___x_3847_, 3, v_a_3843_);
lean_ctor_set(v___x_3847_, 4, v___f_3828_);
if (v_isShared_3846_ == 0)
{
lean_ctor_set(v___x_3845_, 0, v___x_3847_);
v___x_3849_ = v___x_3845_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3847_);
v___x_3849_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
v___x_3851_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3829_, v___x_3830_, v___x_3850_, v___f_3831_);
return v___x_3851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___x_3856_, lean_object* v___f_3857_, lean_object* v___x_3858_, lean_object* v___x_3859_, lean_object* v___f_3860_, lean_object* v_x_3861_, lean_object* v___y_3862_){
_start:
{
uint8_t v___x_18928__boxed_3863_; lean_object* v_res_3864_; 
v___x_18928__boxed_3863_ = lean_unbox(v___x_3859_);
v_res_3864_ = l_Lasm_Fetch_serveNode___lam__18(v___y_3854_, v___y_3855_, v___x_3856_, v___f_3857_, v___x_3858_, v___x_18928__boxed_3863_, v___f_3860_, v_x_3861_);
return v_res_3864_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_3865_; uint8_t v___x_3866_; uint64_t v___x_3867_; 
v___x_3865_ = 8ULL;
v___x_3866_ = 0;
v___x_3867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3866_, v___x_3865_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_3868_, lean_object* v_name_3869_, lean_object* v_args_3870_){
_start:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; uint64_t v___x_3875_; lean_object* v___x_3876_; 
v___x_3872_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3873_, 0, v_o_3868_);
lean_ctor_set(v___x_3873_, 1, v___x_3872_);
lean_inc_ref(v_name_3869_);
v___x_3874_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3874_, 0, v_name_3869_);
v___x_3875_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_3876_ = l_Lasm_JS_Value_invokeRaw(v___x_3873_, v___x_3874_, v_args_3870_, v___x_3875_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3876_, 1);
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3879_ = lean_string_append(v___x_3878_, v_name_3869_);
lean_dec_ref(v_name_3869_);
v___x_3880_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3879_, v_a_3877_);
lean_dec(v_a_3877_);
lean_dec_ref(v___x_3879_);
return v___x_3880_;
}
else
{
lean_dec_ref(v_name_3869_);
return v___x_3876_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_3881_, lean_object* v_name_3882_, lean_object* v_args_3883_, lean_object* v_a_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_3881_, v_name_3882_, v_args_3883_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_3887_, uint8_t v___x_3888_, lean_object* v___f_3889_, lean_object* v___x_3890_, lean_object* v_a_3891_, lean_object* v_x_3892_){
_start:
{
lean_object* v_val_3895_; 
if (lean_obj_tag(v_x_3892_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3906_; 
lean_dec(v_a_3891_);
lean_dec_ref(v___f_3889_);
lean_dec(v___x_3887_);
v_a_3898_ = lean_ctor_get(v_x_3892_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v_x_3892_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3900_ = v_x_3892_;
v_isShared_3901_ = v_isSharedCheck_3906_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v_x_3892_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3906_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3903_);
return v___x_3904_;
}
}
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3925_; 
v_a_3907_ = lean_ctor_get(v_x_3892_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v_x_3892_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3909_ = v_x_3892_;
v_isShared_3910_ = v_isSharedCheck_3925_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v_x_3892_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3925_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v___x_3911_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_3912_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3913_, 0, v_a_3907_);
lean_ctor_set(v___x_3913_, 1, v___x_3912_);
v___x_3914_ = lean_mk_empty_array_with_capacity(v___x_3890_);
v___x_3915_ = lean_array_push(v___x_3914_, v___x_3913_);
v___x_3916_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_3891_, v___x_3911_, v___x_3915_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3919_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v___x_3916_, 1);
if (v_isShared_3910_ == 0)
{
lean_ctor_set(v___x_3909_, 0, v_a_3917_);
v___x_3919_ = v___x_3909_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
v_val_3895_ = v___x_3919_;
goto v___jp_3894_;
}
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; 
v_a_3921_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3921_);
lean_dec_ref_known(v___x_3916_, 1);
if (v_isShared_3910_ == 0)
{
lean_ctor_set_tag(v___x_3909_, 0);
lean_ctor_set(v___x_3909_, 0, v_a_3921_);
v___x_3923_ = v___x_3909_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v_a_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
v_val_3895_ = v___x_3923_;
goto v___jp_3894_;
}
}
}
}
v___jp_3894_:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3896_, 0, v_val_3895_);
v___x_3897_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3887_, v___x_3888_, v___x_3896_, v___f_3889_);
return v___x_3897_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_3926_, lean_object* v___x_3927_, lean_object* v___f_3928_, lean_object* v___x_3929_, lean_object* v_a_3930_, lean_object* v_x_3931_, lean_object* v___y_3932_){
_start:
{
uint8_t v___x_19027__boxed_3933_; lean_object* v_res_3934_; 
v___x_19027__boxed_3933_ = lean_unbox(v___x_3927_);
v_res_3934_ = l_Lasm_Fetch_serveNode___lam__14(v___x_3926_, v___x_19027__boxed_3933_, v___f_3928_, v___x_3929_, v_a_3930_, v_x_3931_);
lean_dec(v___x_3929_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___x_3937_, lean_object* v___x_3938_, lean_object* v___x_3939_, uint8_t v___x_3940_, lean_object* v___f_3941_, lean_object* v_x_3942_){
_start:
{
if (lean_obj_tag(v_x_3942_) == 0)
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3952_; 
lean_dec_ref(v___f_3941_);
lean_dec(v___x_3939_);
lean_dec_ref(v___x_3938_);
lean_dec_ref(v___x_3937_);
lean_dec_ref(v___y_3936_);
lean_dec_ref(v___y_3935_);
v_a_3944_ = lean_ctor_get(v_x_3942_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v_x_3942_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3946_ = v_x_3942_;
v_isShared_3947_ = v_isSharedCheck_3952_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v_x_3942_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3952_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
lean_object* v___x_3950_; 
v___x_3950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3949_);
return v___x_3950_;
}
}
}
else
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3963_; 
v_a_3953_ = lean_ctor_get(v_x_3942_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v_x_3942_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3955_ = v_x_3942_;
v_isShared_3956_ = v_isSharedCheck_3963_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v_x_3942_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3963_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v___x_3959_; 
v___x_3957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3957_, 0, v___y_3935_);
lean_ctor_set(v___x_3957_, 1, v___y_3936_);
lean_ctor_set(v___x_3957_, 2, v___x_3937_);
lean_ctor_set(v___x_3957_, 3, v___x_3938_);
lean_ctor_set(v___x_3957_, 4, v_a_3953_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 0, v___x_3957_);
v___x_3959_ = v___x_3955_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v___x_3957_);
v___x_3959_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; 
v___x_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
v___x_3961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3939_, v___x_3940_, v___x_3960_, v___f_3941_);
return v___x_3961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___x_3966_, lean_object* v___x_3967_, lean_object* v___x_3968_, lean_object* v___x_3969_, lean_object* v___f_3970_, lean_object* v_x_3971_, lean_object* v___y_3972_){
_start:
{
uint8_t v___x_19117__boxed_3973_; lean_object* v_res_3974_; 
v___x_19117__boxed_3973_ = lean_unbox(v___x_3969_);
v_res_3974_ = l_Lasm_Fetch_serveNode___lam__15(v___y_3964_, v___y_3965_, v___x_3966_, v___x_3967_, v___x_3968_, v___x_19117__boxed_3973_, v___f_3970_, v_x_3971_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_3975_, uint8_t v___x_3976_, lean_object* v___f_3977_, lean_object* v_x_3978_){
_start:
{
lean_object* v_val_3981_; 
if (lean_obj_tag(v_x_3978_) == 0)
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3992_; 
lean_dec_ref(v___f_3977_);
lean_dec(v___x_3975_);
v_a_3984_ = lean_ctor_get(v_x_3978_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v_x_3978_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3986_ = v_x_3978_;
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v_x_3978_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4006_; 
v_a_3993_ = lean_ctor_get(v_x_3978_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v_x_3978_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_3995_ = v_x_3978_;
v_isShared_3996_ = v_isSharedCheck_4006_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v_x_3978_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4006_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3997_; 
v___x_3997_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_3993_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v_a_3998_; lean_object* v___x_4000_; 
v_a_3998_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_3998_);
lean_dec_ref_known(v___x_3997_, 1);
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 0, v_a_3998_);
v___x_4000_ = v___x_3995_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3998_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
v_val_3981_ = v___x_4000_;
goto v___jp_3980_;
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; 
v_a_4002_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_4002_);
lean_dec_ref_known(v___x_3997_, 1);
if (v_isShared_3996_ == 0)
{
lean_ctor_set_tag(v___x_3995_, 0);
lean_ctor_set(v___x_3995_, 0, v_a_4002_);
v___x_4004_ = v___x_3995_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_a_4002_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
v_val_3981_ = v___x_4004_;
goto v___jp_3980_;
}
}
}
}
v___jp_3980_:
{
lean_object* v___x_3982_; lean_object* v___x_3983_; 
v___x_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3982_, 0, v_val_3981_);
v___x_3983_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3975_, v___x_3976_, v___x_3982_, v___f_3977_);
return v___x_3983_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4007_, lean_object* v___x_4008_, lean_object* v___f_4009_, lean_object* v_x_4010_, lean_object* v___y_4011_){
_start:
{
uint8_t v___x_19180__boxed_4012_; lean_object* v_res_4013_; 
v___x_19180__boxed_4012_ = lean_unbox(v___x_4008_);
v_res_4013_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4007_, v___x_19180__boxed_4012_, v___f_4009_, v_x_4010_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4014_, lean_object* v_range_4015_, lean_object* v_b_4016_, lean_object* v_i_4017_){
_start:
{
lean_object* v_stop_4018_; lean_object* v_step_4019_; uint8_t v___x_4020_; 
v_stop_4018_ = lean_ctor_get(v_range_4015_, 1);
v_step_4019_ = lean_ctor_get(v_range_4015_, 2);
v___x_4020_ = lean_nat_dec_lt(v_i_4017_, v_stop_4018_);
if (v___x_4020_ == 0)
{
lean_dec(v_i_4017_);
return v_b_4016_;
}
else
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4021_ = lean_unsigned_to_nat(2u);
v___x_4022_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4023_ = lean_unsigned_to_nat(1u);
v___x_4024_ = lean_nat_mul(v___x_4021_, v_i_4017_);
v___x_4025_ = lean_array_get_borrowed(v___x_4022_, v___y_4014_, v___x_4024_);
v___x_4026_ = lean_nat_add(v___x_4024_, v___x_4023_);
lean_dec(v___x_4024_);
v___x_4027_ = lean_array_get_borrowed(v___x_4022_, v___y_4014_, v___x_4026_);
lean_dec(v___x_4026_);
lean_inc(v___x_4027_);
lean_inc(v___x_4025_);
v___x_4028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4025_);
lean_ctor_set(v___x_4028_, 1, v___x_4027_);
v___x_4029_ = lean_array_push(v_b_4016_, v___x_4028_);
v___x_4030_ = lean_nat_add(v_i_4017_, v_step_4019_);
lean_dec(v_i_4017_);
v_b_4016_ = v___x_4029_;
v_i_4017_ = v___x_4030_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4032_, lean_object* v_range_4033_, lean_object* v_b_4034_, lean_object* v_i_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4032_, v_range_4033_, v_b_4034_, v_i_4035_);
lean_dec_ref(v_range_4033_);
lean_dec_ref(v___y_4032_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4037_, size_t v_i_4038_, size_t v_stop_4039_, lean_object* v_b_4040_){
_start:
{
lean_object* v___y_4042_; uint8_t v___x_4046_; 
v___x_4046_ = lean_usize_dec_eq(v_i_4038_, v_stop_4039_);
if (v___x_4046_ == 0)
{
lean_object* v___x_4047_; 
v___x_4047_ = lean_array_uget_borrowed(v_as_4037_, v_i_4038_);
if (lean_obj_tag(v___x_4047_) == 4)
{
lean_object* v_s_4048_; lean_object* v___x_4049_; 
v_s_4048_ = lean_ctor_get(v___x_4047_, 0);
lean_inc_ref(v_s_4048_);
v___x_4049_ = lean_array_push(v_b_4040_, v_s_4048_);
v___y_4042_ = v___x_4049_;
goto v___jp_4041_;
}
else
{
v___y_4042_ = v_b_4040_;
goto v___jp_4041_;
}
}
else
{
return v_b_4040_;
}
v___jp_4041_:
{
size_t v___x_4043_; size_t v___x_4044_; 
v___x_4043_ = ((size_t)1ULL);
v___x_4044_ = lean_usize_add(v_i_4038_, v___x_4043_);
v_i_4038_ = v___x_4044_;
v_b_4040_ = v___y_4042_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4050_, lean_object* v_i_4051_, lean_object* v_stop_4052_, lean_object* v_b_4053_){
_start:
{
size_t v_i_boxed_4054_; size_t v_stop_boxed_4055_; lean_object* v_res_4056_; 
v_i_boxed_4054_ = lean_unbox_usize(v_i_4051_);
lean_dec(v_i_4051_);
v_stop_boxed_4055_ = lean_unbox_usize(v_stop_4052_);
lean_dec(v_stop_4052_);
v_res_4056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4050_, v_i_boxed_4054_, v_stop_boxed_4055_, v_b_4053_);
lean_dec_ref(v_as_4050_);
return v_res_4056_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4059_, lean_object* v_start_4060_, lean_object* v_stop_4061_){
_start:
{
lean_object* v___x_4062_; uint8_t v___x_4063_; 
v___x_4062_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4063_ = lean_nat_dec_lt(v_start_4060_, v_stop_4061_);
if (v___x_4063_ == 0)
{
return v___x_4062_;
}
else
{
lean_object* v___x_4064_; uint8_t v___x_4065_; 
v___x_4064_ = lean_array_get_size(v_as_4059_);
v___x_4065_ = lean_nat_dec_le(v_stop_4061_, v___x_4064_);
if (v___x_4065_ == 0)
{
uint8_t v___x_4066_; 
v___x_4066_ = lean_nat_dec_lt(v_start_4060_, v___x_4064_);
if (v___x_4066_ == 0)
{
return v___x_4062_;
}
else
{
size_t v___x_4067_; size_t v___x_4068_; lean_object* v___x_4069_; 
v___x_4067_ = lean_usize_of_nat(v_start_4060_);
v___x_4068_ = lean_usize_of_nat(v___x_4064_);
v___x_4069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4059_, v___x_4067_, v___x_4068_, v___x_4062_);
return v___x_4069_;
}
}
else
{
size_t v___x_4070_; size_t v___x_4071_; lean_object* v___x_4072_; 
v___x_4070_ = lean_usize_of_nat(v_start_4060_);
v___x_4071_ = lean_usize_of_nat(v_stop_4061_);
v___x_4072_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4059_, v___x_4070_, v___x_4071_, v___x_4062_);
return v___x_4072_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4073_, lean_object* v_start_4074_, lean_object* v_stop_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4073_, v_start_4074_, v_stop_4075_);
lean_dec(v_stop_4075_);
lean_dec(v_start_4074_);
lean_dec_ref(v_as_4073_);
return v_res_4076_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4079_, size_t v_i_4080_, size_t v_stop_4081_){
_start:
{
uint8_t v___x_4082_; 
v___x_4082_ = lean_usize_dec_eq(v_i_4080_, v_stop_4081_);
if (v___x_4082_ == 0)
{
lean_object* v___x_4083_; lean_object* v_fst_4084_; uint8_t v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4083_ = lean_array_uget_borrowed(v_as_4079_, v_i_4080_);
v_fst_4084_ = lean_ctor_get(v___x_4083_, 0);
v___x_4085_ = 1;
lean_inc(v_fst_4084_);
v___x_4086_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4084_);
v___x_4087_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4088_ = lean_string_dec_eq(v___x_4086_, v___x_4087_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; uint8_t v___x_4090_; 
v___x_4089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4090_ = lean_string_dec_eq(v___x_4086_, v___x_4089_);
lean_dec_ref(v___x_4086_);
if (v___x_4090_ == 0)
{
size_t v___x_4091_; size_t v___x_4092_; 
v___x_4091_ = ((size_t)1ULL);
v___x_4092_ = lean_usize_add(v_i_4080_, v___x_4091_);
v_i_4080_ = v___x_4092_;
goto _start;
}
else
{
return v___x_4085_;
}
}
else
{
lean_dec_ref(v___x_4086_);
return v___x_4085_;
}
}
else
{
uint8_t v___x_4094_; 
v___x_4094_ = 0;
return v___x_4094_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4095_, lean_object* v_i_4096_, lean_object* v_stop_4097_){
_start:
{
size_t v_i_boxed_4098_; size_t v_stop_boxed_4099_; uint8_t v_res_4100_; lean_object* v_r_4101_; 
v_i_boxed_4098_ = lean_unbox_usize(v_i_4096_);
lean_dec(v_i_4096_);
v_stop_boxed_4099_ = lean_unbox_usize(v_stop_4097_);
lean_dec(v_stop_4097_);
v_res_4100_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4095_, v_i_boxed_4098_, v_stop_boxed_4099_);
lean_dec_ref(v_as_4095_);
v_r_4101_ = lean_box(v_res_4100_);
return v_r_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4103_, size_t v_sz_4104_, size_t v_i_4105_, lean_object* v_b_4106_){
_start:
{
uint8_t v___x_4107_; 
v___x_4107_ = lean_usize_dec_lt(v_i_4105_, v_sz_4104_);
if (v___x_4107_ == 0)
{
lean_inc_ref(v_b_4106_);
return v_b_4106_;
}
else
{
lean_object* v_a_4108_; lean_object* v_fst_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; uint8_t v___x_4113_; 
v_a_4108_ = lean_array_uget_borrowed(v_as_4103_, v_i_4105_);
v_fst_4109_ = lean_ctor_get(v_a_4108_, 0);
v___x_4110_ = lean_box(0);
lean_inc(v_fst_4109_);
v___x_4111_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4109_);
v___x_4112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4113_ = lean_string_dec_eq(v___x_4111_, v___x_4112_);
lean_dec_ref(v___x_4111_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; size_t v___x_4115_; size_t v___x_4116_; 
v___x_4114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4115_ = ((size_t)1ULL);
v___x_4116_ = lean_usize_add(v_i_4105_, v___x_4115_);
v_i_4105_ = v___x_4116_;
v_b_4106_ = v___x_4114_;
goto _start;
}
else
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
lean_inc(v_a_4108_);
v___x_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4118_, 0, v_a_4108_);
v___x_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4118_);
v___x_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
lean_ctor_set(v___x_4120_, 1, v___x_4110_);
return v___x_4120_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4121_, lean_object* v_sz_4122_, lean_object* v_i_4123_, lean_object* v_b_4124_){
_start:
{
size_t v_sz_boxed_4125_; size_t v_i_boxed_4126_; lean_object* v_res_4127_; 
v_sz_boxed_4125_ = lean_unbox_usize(v_sz_4122_);
lean_dec(v_sz_4122_);
v_i_boxed_4126_ = lean_unbox_usize(v_i_4123_);
lean_dec(v_i_4123_);
v_res_4127_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4121_, v_sz_boxed_4125_, v_i_boxed_4126_, v_b_4124_);
lean_dec_ref(v_b_4124_);
lean_dec_ref(v_as_4121_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4132_, lean_object* v___f_4133_, lean_object* v___f_4134_, lean_object* v_handler_4135_, lean_object* v_options_4136_, lean_object* v_a_4137_, lean_object* v_fst_4138_, lean_object* v_a_4139_, lean_object* v___y_4140_, lean_object* v___x_4141_, lean_object* v___x_4142_, lean_object* v___x_4143_, lean_object* v_x_4144_){
_start:
{
uint8_t v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v_val_4150_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v___y_4162_; uint8_t v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; uint8_t v___y_4229_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; 
if (lean_obj_tag(v_x_4144_) == 0)
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4305_; 
lean_dec(v___y_4140_);
lean_dec(v_a_4139_);
lean_dec(v_fst_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_options_4136_);
lean_dec_ref(v_handler_4135_);
lean_dec_ref(v___f_4134_);
lean_dec_ref(v___f_4133_);
lean_dec(v_snd_4132_);
v_a_4297_ = lean_ctor_get(v_x_4144_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v_x_4144_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4299_ = v_x_4144_;
v_isShared_4300_ = v_isSharedCheck_4305_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v_x_4144_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4305_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4302_; 
if (v_isShared_4300_ == 0)
{
v___x_4302_ = v___x_4299_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_a_4297_);
v___x_4302_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
lean_object* v___x_4303_; 
v___x_4303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4303_, 0, v___x_4302_);
return v___x_4303_;
}
}
}
else
{
lean_object* v_a_4306_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4317_; lean_object* v___x_4321_; 
v_a_4306_ = lean_ctor_get(v_x_4144_, 0);
lean_inc(v_a_4306_);
lean_dec_ref_known(v_x_4144_, 1);
v___x_4321_ = l_Lasm_JS_Data_field(v_a_4306_, v___x_4143_);
if (lean_obj_tag(v___x_4321_) == 4)
{
lean_object* v_s_4322_; 
v_s_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc_ref(v_s_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___y_4317_ = v_s_4322_;
goto v___jp_4316_;
}
else
{
lean_object* v___x_4323_; 
lean_dec(v___x_4321_);
v___x_4323_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4317_ = v___x_4323_;
goto v___jp_4316_;
}
v___jp_4307_:
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Lasm_JS_Data_field(v_a_4306_, v___x_4141_);
lean_dec(v_a_4306_);
if (lean_obj_tag(v___x_4310_) == 7)
{
lean_object* v_items_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v_items_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc_ref(v_items_4311_);
lean_dec_ref_known(v___x_4310_, 1);
v___x_4312_ = lean_unsigned_to_nat(0u);
v___x_4313_ = lean_array_get_size(v_items_4311_);
v___x_4314_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4311_, v___x_4312_, v___x_4313_);
lean_dec_ref(v_items_4311_);
lean_inc_ref(v___y_4308_);
v___y_4275_ = v___y_4308_;
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4308_;
v___y_4278_ = v___x_4314_;
goto v___jp_4274_;
}
else
{
lean_object* v___x_4315_; 
lean_dec(v___x_4310_);
v___x_4315_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4308_);
v___y_4275_ = v___y_4308_;
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4308_;
v___y_4278_ = v___x_4315_;
goto v___jp_4274_;
}
}
v___jp_4316_:
{
lean_object* v___x_4318_; 
v___x_4318_ = l_Lasm_JS_Data_field(v_a_4306_, v___x_4142_);
if (lean_obj_tag(v___x_4318_) == 4)
{
lean_object* v_s_4319_; 
v_s_4319_ = lean_ctor_get(v___x_4318_, 0);
lean_inc_ref(v_s_4319_);
lean_dec_ref_known(v___x_4318_, 1);
v___y_4308_ = v___y_4317_;
v___y_4309_ = v_s_4319_;
goto v___jp_4307_;
}
else
{
lean_object* v___x_4320_; 
lean_dec(v___x_4318_);
v___x_4320_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4308_ = v___y_4317_;
v___y_4309_ = v___x_4320_;
goto v___jp_4307_;
}
}
}
v___jp_4146_:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v_val_4150_);
v___x_4152_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4149_, v___y_4147_, v___x_4151_, v___y_4148_);
return v___x_4152_;
}
v___jp_4153_:
{
if (v___y_4163_ == 0)
{
lean_object* v___x_4168_; lean_object* v___f_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec_ref(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4155_);
lean_dec(v___y_4154_);
lean_dec(v_a_4139_);
lean_dec(v_fst_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_options_4136_);
v___x_4168_ = l_ByteArray_empty;
v___f_4169_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4170_, 0, v___y_4162_);
lean_ctor_set(v___x_4170_, 1, v___y_4167_);
lean_ctor_set(v___x_4170_, 2, v___y_4161_);
lean_ctor_set(v___x_4170_, 3, v___x_4168_);
lean_ctor_set(v___x_4170_, 4, v___f_4169_);
v___x_4171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4170_);
v___x_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4171_);
v___x_4173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4166_, v___y_4163_, v___x_4172_, v___y_4165_);
return v___x_4173_;
}
else
{
lean_object* v___x_4174_; lean_object* v___f_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; uint8_t v___x_4179_; 
lean_dec_ref(v___y_4165_);
lean_dec_ref(v___y_4161_);
v___x_4174_ = l_ByteArray_empty;
v___f_4175_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4167_);
v___x_4176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4176_, 0, v___y_4162_);
lean_ctor_set(v___x_4176_, 1, v___y_4167_);
lean_ctor_set(v___x_4176_, 2, v___y_4164_);
lean_ctor_set(v___x_4176_, 3, v___x_4174_);
lean_ctor_set(v___x_4176_, 4, v___f_4175_);
v___x_4177_ = l_Lasm_Fetch_Request_path(v___x_4176_);
v___x_4178_ = lean_apply_1(v_options_4136_, v___x_4177_);
v___x_4179_ = lean_unbox(v___x_4178_);
if (v___x_4179_ == 0)
{
lean_object* v___f_4180_; lean_object* v___f_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; lean_object* v___x_4186_; 
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec(v_a_4139_);
lean_inc(v___y_4155_);
v___f_4180_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4180_, 0, v___y_4158_);
lean_closure_set(v___f_4180_, 1, v___y_4167_);
lean_closure_set(v___f_4180_, 2, v___y_4157_);
lean_closure_set(v___f_4180_, 3, v___f_4175_);
lean_closure_set(v___f_4180_, 4, v___y_4155_);
lean_closure_set(v___f_4180_, 5, v___x_4178_);
lean_closure_set(v___f_4180_, 6, v___y_4156_);
v___f_4181_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4181_, 0, v___y_4155_);
lean_closure_set(v___f_4181_, 1, v___x_4178_);
lean_closure_set(v___f_4181_, 2, v___f_4180_);
lean_closure_set(v___f_4181_, 3, v___y_4154_);
lean_closure_set(v___f_4181_, 4, v_a_4137_);
v___x_4182_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4183_ = lean_mk_empty_array_with_capacity(v___y_4166_);
v___x_4184_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4138_, v___x_4182_, v___x_4183_);
v___x_4185_ = lean_unbox(v___x_4178_);
v___x_4186_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4166_, v___x_4185_, v___x_4184_, v___f_4181_);
return v___x_4186_;
}
else
{
uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___f_4189_; lean_object* v___x_4190_; lean_object* v___f_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4154_);
lean_dec(v_a_4137_);
v___x_4187_ = 0;
v___x_4188_ = lean_box(v___x_4187_);
lean_inc(v___y_4155_);
v___f_4189_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4189_, 0, v___y_4158_);
lean_closure_set(v___f_4189_, 1, v___y_4167_);
lean_closure_set(v___f_4189_, 2, v___y_4157_);
lean_closure_set(v___f_4189_, 3, v___x_4174_);
lean_closure_set(v___f_4189_, 4, v___y_4155_);
lean_closure_set(v___f_4189_, 5, v___x_4188_);
lean_closure_set(v___f_4189_, 6, v___y_4159_);
v___x_4190_ = lean_box(v___x_4187_);
v___f_4191_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4191_, 0, v___y_4155_);
lean_closure_set(v___f_4191_, 1, v___x_4190_);
lean_closure_set(v___f_4191_, 2, v___f_4189_);
v___x_4192_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4193_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4194_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4194_, 0, v_fst_4138_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = lean_mk_empty_array_with_capacity(v___y_4160_);
lean_dec(v___y_4160_);
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
v___y_4147_ = v___x_4187_;
v___y_4148_ = v___f_4191_;
v___y_4149_ = v___y_4166_;
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
v___y_4147_ = v___x_4187_;
v___y_4148_ = v___f_4191_;
v___y_4149_ = v___y_4166_;
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
lean_object* v___x_4230_; uint8_t v___x_4231_; 
v___x_4230_ = lean_string_utf8_byte_size(v___y_4224_);
v___x_4231_ = lean_nat_dec_le(v___y_4223_, v___x_4230_);
if (v___x_4231_ == 0)
{
lean_dec_ref(v___y_4221_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4223_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4225_;
v___y_4163_ = v___y_4229_;
v___y_4164_ = v___y_4227_;
v___y_4165_ = v___y_4226_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___y_4224_;
goto v___jp_4153_;
}
else
{
lean_object* v___x_4232_; uint8_t v___x_4233_; 
v___x_4232_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4233_ = lean_string_memcmp(v___y_4224_, v___x_4232_, v___y_4228_, v___y_4228_, v___y_4223_);
if (v___x_4233_ == 0)
{
lean_dec_ref(v___y_4221_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4223_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4225_;
v___y_4163_ = v___y_4229_;
v___y_4164_ = v___y_4227_;
v___y_4165_ = v___y_4226_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___y_4224_;
goto v___jp_4153_;
}
else
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4234_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__2));
v___x_4235_ = lean_string_append(v___x_4234_, v___y_4221_);
lean_dec_ref(v___y_4221_);
v___x_4236_ = lean_string_append(v___x_4235_, v___y_4224_);
lean_dec_ref(v___y_4224_);
v___y_4154_ = v___y_4215_;
v___y_4155_ = v___y_4216_;
v___y_4156_ = v___y_4217_;
v___y_4157_ = v___y_4218_;
v___y_4158_ = v___y_4219_;
v___y_4159_ = v___y_4220_;
v___y_4160_ = v___y_4223_;
v___y_4161_ = v___y_4222_;
v___y_4162_ = v___y_4225_;
v___y_4163_ = v___y_4229_;
v___y_4164_ = v___y_4227_;
v___y_4165_ = v___y_4226_;
v___y_4166_ = v___y_4228_;
v___y_4167_ = v___x_4236_;
goto v___jp_4153_;
}
}
}
v___jp_4237_:
{
lean_object* v___x_4252_; uint8_t v___x_4253_; 
v___x_4252_ = lean_array_get_size(v___y_4245_);
v___x_4253_ = lean_nat_dec_lt(v___y_4250_, v___x_4252_);
if (v___x_4253_ == 0)
{
v___y_4215_ = v___y_4238_;
v___y_4216_ = v___y_4239_;
v___y_4217_ = v___y_4240_;
v___y_4218_ = v___y_4241_;
v___y_4219_ = v___y_4242_;
v___y_4220_ = v___y_4243_;
v___y_4221_ = v___y_4251_;
v___y_4222_ = v___y_4245_;
v___y_4223_ = v___y_4244_;
v___y_4224_ = v___y_4246_;
v___y_4225_ = v___y_4247_;
v___y_4226_ = v___y_4249_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___y_4250_;
v___y_4229_ = v___x_4253_;
goto v___jp_4214_;
}
else
{
if (v___x_4253_ == 0)
{
v___y_4215_ = v___y_4238_;
v___y_4216_ = v___y_4239_;
v___y_4217_ = v___y_4240_;
v___y_4218_ = v___y_4241_;
v___y_4219_ = v___y_4242_;
v___y_4220_ = v___y_4243_;
v___y_4221_ = v___y_4251_;
v___y_4222_ = v___y_4245_;
v___y_4223_ = v___y_4244_;
v___y_4224_ = v___y_4246_;
v___y_4225_ = v___y_4247_;
v___y_4226_ = v___y_4249_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___y_4250_;
v___y_4229_ = v___x_4253_;
goto v___jp_4214_;
}
else
{
size_t v___x_4254_; size_t v___x_4255_; uint8_t v___x_4256_; 
v___x_4254_ = ((size_t)0ULL);
v___x_4255_ = lean_usize_of_nat(v___x_4252_);
v___x_4256_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4245_, v___x_4254_, v___x_4255_);
v___y_4215_ = v___y_4238_;
v___y_4216_ = v___y_4239_;
v___y_4217_ = v___y_4240_;
v___y_4218_ = v___y_4241_;
v___y_4219_ = v___y_4242_;
v___y_4220_ = v___y_4243_;
v___y_4221_ = v___y_4251_;
v___y_4222_ = v___y_4245_;
v___y_4223_ = v___y_4244_;
v___y_4224_ = v___y_4246_;
v___y_4225_ = v___y_4247_;
v___y_4226_ = v___y_4249_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___y_4250_;
v___y_4229_ = v___x_4256_;
goto v___jp_4214_;
}
}
}
v___jp_4257_:
{
lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4271_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4272_ = l_Nat_reprFast(v___y_4140_);
v___x_4273_ = lean_string_append(v___x_4271_, v___x_4272_);
lean_dec_ref(v___x_4272_);
v___y_4238_ = v___y_4258_;
v___y_4239_ = v___y_4259_;
v___y_4240_ = v___y_4261_;
v___y_4241_ = v___y_4262_;
v___y_4242_ = v___y_4263_;
v___y_4243_ = v___y_4264_;
v___y_4244_ = v___y_4266_;
v___y_4245_ = v___y_4265_;
v___y_4246_ = v___y_4267_;
v___y_4247_ = v___y_4268_;
v___y_4248_ = v___y_4269_;
v___y_4249_ = v___y_4260_;
v___y_4250_ = v___y_4270_;
v___y_4251_ = v___x_4273_;
goto v___jp_4237_;
}
v___jp_4274_:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; size_t v_sz_4287_; size_t v___x_4288_; lean_object* v___x_4289_; lean_object* v_fst_4290_; lean_object* v___f_4291_; lean_object* v___f_4292_; lean_object* v___f_4293_; 
v___x_4279_ = lean_unsigned_to_nat(0u);
v___x_4280_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4281_ = lean_array_get_size(v___y_4278_);
v___x_4282_ = lean_unsigned_to_nat(1u);
v___x_4283_ = lean_nat_shiftr(v___x_4281_, v___x_4282_);
v___x_4284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4279_);
lean_ctor_set(v___x_4284_, 1, v___x_4283_);
lean_ctor_set(v___x_4284_, 2, v___x_4282_);
v___x_4285_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4278_, v___x_4284_, v___x_4280_, v___x_4279_);
lean_dec_ref_known(v___x_4284_, 3);
lean_dec_ref(v___y_4278_);
v___x_4286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4287_ = lean_array_size(v___x_4285_);
v___x_4288_ = ((size_t)0ULL);
v___x_4289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4285_, v_sz_4287_, v___x_4288_, v___x_4286_);
v_fst_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc(v_fst_4290_);
lean_dec_ref(v___x_4289_);
lean_inc_ref(v___y_4275_);
v___f_4291_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4291_, 0, v___x_4279_);
lean_closure_set(v___f_4291_, 1, v_snd_4132_);
lean_closure_set(v___f_4291_, 2, v___y_4275_);
lean_closure_set(v___f_4291_, 3, v___f_4133_);
lean_closure_set(v___f_4291_, 4, v___f_4134_);
v___f_4292_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4292_, 0, v_handler_4135_);
lean_closure_set(v___f_4292_, 1, v___x_4279_);
lean_closure_set(v___f_4292_, 2, v___f_4291_);
v___f_4293_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4293_, 0, v___f_4292_);
if (lean_obj_tag(v_fst_4290_) == 0)
{
lean_inc_ref(v___x_4285_);
lean_inc_ref_n(v___f_4293_, 2);
v___y_4258_ = v___x_4282_;
v___y_4259_ = v___x_4279_;
v___y_4260_ = v___f_4293_;
v___y_4261_ = v___f_4293_;
v___y_4262_ = v___x_4285_;
v___y_4263_ = v___y_4275_;
v___y_4264_ = v___f_4293_;
v___y_4265_ = v___x_4285_;
v___y_4266_ = v___x_4282_;
v___y_4267_ = v___y_4276_;
v___y_4268_ = v___y_4277_;
v___y_4269_ = v___x_4280_;
v___y_4270_ = v___x_4279_;
goto v___jp_4257_;
}
else
{
lean_object* v_val_4294_; 
v_val_4294_ = lean_ctor_get(v_fst_4290_, 0);
lean_inc(v_val_4294_);
lean_dec_ref_known(v_fst_4290_, 1);
if (lean_obj_tag(v_val_4294_) == 0)
{
lean_inc_ref(v___x_4285_);
lean_inc_ref_n(v___f_4293_, 2);
v___y_4258_ = v___x_4282_;
v___y_4259_ = v___x_4279_;
v___y_4260_ = v___f_4293_;
v___y_4261_ = v___f_4293_;
v___y_4262_ = v___x_4285_;
v___y_4263_ = v___y_4275_;
v___y_4264_ = v___f_4293_;
v___y_4265_ = v___x_4285_;
v___y_4266_ = v___x_4282_;
v___y_4267_ = v___y_4276_;
v___y_4268_ = v___y_4277_;
v___y_4269_ = v___x_4280_;
v___y_4270_ = v___x_4279_;
goto v___jp_4257_;
}
else
{
lean_object* v_val_4295_; lean_object* v_snd_4296_; 
lean_dec(v___y_4140_);
v_val_4295_ = lean_ctor_get(v_val_4294_, 0);
lean_inc(v_val_4295_);
lean_dec_ref_known(v_val_4294_, 1);
v_snd_4296_ = lean_ctor_get(v_val_4295_, 1);
lean_inc(v_snd_4296_);
lean_dec(v_val_4295_);
lean_inc_ref(v___x_4285_);
lean_inc_ref_n(v___f_4293_, 2);
v___y_4238_ = v___x_4282_;
v___y_4239_ = v___x_4279_;
v___y_4240_ = v___f_4293_;
v___y_4241_ = v___x_4285_;
v___y_4242_ = v___y_4275_;
v___y_4243_ = v___f_4293_;
v___y_4244_ = v___x_4282_;
v___y_4245_ = v___x_4285_;
v___y_4246_ = v___y_4276_;
v___y_4247_ = v___y_4277_;
v___y_4248_ = v___x_4280_;
v___y_4249_ = v___f_4293_;
v___y_4250_ = v___x_4279_;
v___y_4251_ = v_snd_4296_;
goto v___jp_4237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4324_, lean_object* v___f_4325_, lean_object* v___f_4326_, lean_object* v_handler_4327_, lean_object* v_options_4328_, lean_object* v_a_4329_, lean_object* v_fst_4330_, lean_object* v_a_4331_, lean_object* v___y_4332_, lean_object* v___x_4333_, lean_object* v___x_4334_, lean_object* v___x_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4324_, v___f_4325_, v___f_4326_, v_handler_4327_, v_options_4328_, v_a_4329_, v_fst_4330_, v_a_4331_, v___y_4332_, v___x_4333_, v___x_4334_, v___x_4335_, v_x_4336_);
lean_dec_ref(v___x_4335_);
lean_dec_ref(v___x_4334_);
lean_dec_ref(v___x_4333_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4348_, lean_object* v___f_4349_, lean_object* v_handler_4350_, lean_object* v_options_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v___y_4354_, lean_object* v_____x_4355_){
_start:
{
lean_object* v_fst_4357_; lean_object* v_snd_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___f_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; uint8_t v___x_4365_; lean_object* v_val_4367_; lean_object* v___x_4370_; 
v_fst_4357_ = lean_ctor_get(v_____x_4355_, 0);
lean_inc_n(v_fst_4357_, 2);
v_snd_4358_ = lean_ctor_get(v_____x_4355_, 1);
lean_inc(v_snd_4358_);
lean_dec_ref(v_____x_4355_);
v___x_4359_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4360_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4361_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4362_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4362_, 0, v_snd_4358_);
lean_closure_set(v___f_4362_, 1, v___f_4348_);
lean_closure_set(v___f_4362_, 2, v___f_4349_);
lean_closure_set(v___f_4362_, 3, v_handler_4350_);
lean_closure_set(v___f_4362_, 4, v_options_4351_);
lean_closure_set(v___f_4362_, 5, v_a_4352_);
lean_closure_set(v___f_4362_, 6, v_fst_4357_);
lean_closure_set(v___f_4362_, 7, v_a_4353_);
lean_closure_set(v___f_4362_, 8, v___y_4354_);
lean_closure_set(v___f_4362_, 9, v___x_4361_);
lean_closure_set(v___f_4362_, 10, v___x_4360_);
lean_closure_set(v___f_4362_, 11, v___x_4359_);
v___x_4363_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4364_ = lean_unsigned_to_nat(0u);
v___x_4365_ = 0;
v___x_4370_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4357_, v___x_4363_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4378_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
v_isSharedCheck_4378_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4373_ = v___x_4370_;
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_a_4371_);
lean_dec(v___x_4370_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
lean_object* v___x_4376_; 
if (v_isShared_4374_ == 0)
{
lean_ctor_set_tag(v___x_4373_, 1);
v___x_4376_ = v___x_4373_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_a_4371_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
v_val_4367_ = v___x_4376_;
goto v___jp_4366_;
}
}
}
else
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
v_a_4379_ = lean_ctor_get(v___x_4370_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___x_4370_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4370_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
lean_ctor_set_tag(v___x_4381_, 0);
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
v_val_4367_ = v___x_4384_;
goto v___jp_4366_;
}
}
}
v___jp_4366_:
{
lean_object* v___x_4368_; lean_object* v___x_4369_; 
v___x_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4368_, 0, v_val_4367_);
v___x_4369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4364_, v___x_4365_, v___x_4368_, v___f_4362_);
return v___x_4369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4387_, lean_object* v___f_4388_, lean_object* v_handler_4389_, lean_object* v_options_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v___y_4393_, lean_object* v_____x_4394_, lean_object* v___y_4395_){
_start:
{
lean_object* v_res_4396_; 
v_res_4396_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4387_, v___f_4388_, v_handler_4389_, v_options_4390_, v_a_4391_, v_a_4392_, v___y_4393_, v_____x_4394_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4397_, lean_object* v_x_4398_){
_start:
{
if (lean_obj_tag(v_x_4398_) == 0)
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4408_; 
lean_dec_ref(v___f_4397_);
v_a_4400_ = lean_ctor_get(v_x_4398_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v_x_4398_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4402_ = v_x_4398_;
v_isShared_4403_ = v_isSharedCheck_4408_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v_x_4398_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4408_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4405_; 
if (v_isShared_4403_ == 0)
{
v___x_4405_ = v___x_4402_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4400_);
v___x_4405_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
lean_object* v___x_4406_; 
v___x_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4405_);
return v___x_4406_;
}
}
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4410_; 
v_a_4409_ = lean_ctor_get(v_x_4398_, 0);
lean_inc(v_a_4409_);
lean_dec_ref_known(v_x_4398_, 1);
v___x_4410_ = lean_apply_2(v___f_4397_, v_a_4409_, lean_box(0));
return v___x_4410_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4411_, lean_object* v_x_4412_, lean_object* v___y_4413_){
_start:
{
lean_object* v_res_4414_; 
v_res_4414_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4411_, v_x_4412_);
return v_res_4414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4422_, lean_object* v___f_4423_, lean_object* v_args_4424_){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; uint8_t v___x_4433_; 
v___x_4431_ = lean_unsigned_to_nat(0u);
v___x_4432_ = lean_array_get_size(v_args_4424_);
v___x_4433_ = lean_nat_dec_lt(v___x_4431_, v___x_4432_);
if (v___x_4433_ == 0)
{
lean_dec_ref(v___f_4423_);
goto v___jp_4426_;
}
else
{
lean_object* v___x_4434_; 
v___x_4434_ = lean_array_fget_borrowed(v_args_4424_, v___x_4431_);
if (lean_obj_tag(v___x_4434_) == 9)
{
lean_object* v_value_4435_; lean_object* v___x_4436_; uint8_t v___x_4437_; 
v_value_4435_ = lean_ctor_get(v___x_4434_, 0);
v___x_4436_ = lean_unsigned_to_nat(1u);
v___x_4437_ = lean_nat_dec_lt(v___x_4436_, v___x_4432_);
if (v___x_4437_ == 0)
{
lean_dec_ref(v___f_4423_);
goto v___jp_4426_;
}
else
{
lean_object* v___x_4438_; 
v___x_4438_ = lean_array_fget(v_args_4424_, v___x_4436_);
if (lean_obj_tag(v___x_4438_) == 9)
{
lean_object* v_value_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4450_; 
lean_dec_ref(v___f_4422_);
v_value_4439_ = lean_ctor_get(v___x_4438_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4438_);
if (v_isSharedCheck_4450_ == 0)
{
lean_object* v_unused_4451_; 
v_unused_4451_ = lean_ctor_get(v___x_4438_, 1);
lean_dec(v_unused_4451_);
v___x_4441_ = v___x_4438_;
v_isShared_4442_ = v_isSharedCheck_4450_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_value_4439_);
lean_dec(v___x_4438_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4450_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
lean_inc(v_value_4435_);
if (v_isShared_4442_ == 0)
{
lean_ctor_set_tag(v___x_4441_, 0);
lean_ctor_set(v___x_4441_, 1, v_value_4439_);
lean_ctor_set(v___x_4441_, 0, v_value_4435_);
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_value_4435_);
lean_ctor_set(v_reuseFailAlloc_4449_, 1, v_value_4439_);
v___x_4444_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
uint8_t v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4445_ = 0;
v___x_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
v___x_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
v___x_4448_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4445_, v___x_4447_, v___f_4423_);
return v___x_4448_;
}
}
}
else
{
lean_dec(v___x_4438_);
lean_dec_ref(v___f_4423_);
goto v___jp_4426_;
}
}
}
else
{
lean_dec_ref(v___f_4423_);
goto v___jp_4426_;
}
}
v___jp_4426_:
{
lean_object* v___x_4427_; uint8_t v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; 
v___x_4427_ = lean_unsigned_to_nat(0u);
v___x_4428_ = 0;
v___x_4429_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4430_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4427_, v___x_4428_, v___x_4429_, v___f_4422_);
return v___x_4430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4452_, lean_object* v___f_4453_, lean_object* v_args_4454_, lean_object* v___y_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4452_, v___f_4453_, v_args_4454_);
lean_dec_ref(v_args_4454_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4457_){
_start:
{
lean_object* v___x_4459_; lean_object* v_putStr_4460_; lean_object* v___x_4461_; 
v___x_4459_ = lean_get_stdout();
v_putStr_4460_ = lean_ctor_get(v___x_4459_, 4);
lean_inc_ref(v_putStr_4460_);
lean_dec_ref(v___x_4459_);
v___x_4461_ = lean_apply_2(v_putStr_4460_, v_s_4457_, lean_box(0));
return v___x_4461_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4462_, lean_object* v_a_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4462_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4465_){
_start:
{
uint32_t v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4467_ = 10;
v___x_4468_ = lean_string_push(v_s_4465_, v___x_4467_);
v___x_4469_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4468_);
return v___x_4469_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4470_, lean_object* v_a_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4470_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___f_4477_, lean_object* v_x_4478_){
_start:
{
lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; lean_object* v_val_4489_; lean_object* v___x_4492_; 
v___x_4480_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4481_ = lean_string_append(v___x_4480_, v___y_4475_);
v___x_4482_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4483_ = lean_string_append(v___x_4481_, v___x_4482_);
v___x_4484_ = l_Nat_reprFast(v___y_4476_);
v___x_4485_ = lean_string_append(v___x_4483_, v___x_4484_);
lean_dec_ref(v___x_4484_);
v___x_4486_ = lean_unsigned_to_nat(0u);
v___x_4487_ = 0;
v___x_4492_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4485_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4492_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4492_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
lean_ctor_set_tag(v___x_4495_, 1);
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
v_val_4489_ = v___x_4498_;
goto v___jp_4488_;
}
}
}
else
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
v_a_4501_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4492_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4492_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set_tag(v___x_4503_, 0);
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
v_val_4489_ = v___x_4506_;
goto v___jp_4488_;
}
}
}
v___jp_4488_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_val_4489_);
v___x_4491_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4486_, v___x_4487_, v___x_4490_, v___f_4477_);
return v___x_4491_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___f_4511_, lean_object* v_x_4512_, lean_object* v___y_4513_){
_start:
{
lean_object* v_res_4514_; 
v_res_4514_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4509_, v___y_4510_, v___f_4511_, v_x_4512_);
lean_dec_ref(v_x_4512_);
lean_dec_ref(v___y_4509_);
return v_res_4514_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4516_ = lean_unsigned_to_nat(0u);
v___x_4517_ = lean_nat_to_int(v___x_4516_);
return v___x_4517_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4518_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4519_ = lean_nat_abs(v___x_4518_);
return v___x_4519_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; uint8_t v___x_4522_; 
v___x_4520_ = lean_cstr_to_nat("9007199254740991");
v___x_4521_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4522_ = lean_nat_dec_le(v___x_4521_, v___x_4520_);
return v___x_4522_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4524_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
return v___x_4524_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4525_; double v___x_4526_; 
v___x_4525_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4526_ = l_Float_ofInt(v___x_4525_);
return v___x_4526_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4527_; lean_object* v___x_4528_; 
v___x_4527_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4528_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4528_, 0, v___x_4527_);
return v___x_4528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4529_, lean_object* v___x_4530_, lean_object* v_a_4531_, lean_object* v_x_4532_){
_start:
{
uint8_t v___y_4535_; lean_object* v___y_4536_; lean_object* v_val_4537_; lean_object* v___x_4540_; lean_object* v___y_4542_; uint8_t v___x_4563_; 
v___x_4540_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4563_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4563_ == 0)
{
lean_object* v___x_4564_; 
v___x_4564_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4542_ = v___x_4564_;
goto v___jp_4541_;
}
else
{
lean_object* v___x_4565_; 
v___x_4565_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4542_ = v___x_4565_;
goto v___jp_4541_;
}
v___jp_4534_:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4538_, 0, v_val_4537_);
v___x_4539_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4536_, v___y_4535_, v___x_4538_, v___f_4529_);
return v___x_4539_;
}
v___jp_4541_:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; uint8_t v___x_4545_; lean_object* v___x_4546_; 
lean_inc(v___y_4542_);
v___x_4543_ = lean_array_push(v___x_4530_, v___y_4542_);
v___x_4544_ = lean_unsigned_to_nat(0u);
v___x_4545_ = 0;
v___x_4546_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4531_, v___x_4540_, v___x_4543_);
if (lean_obj_tag(v___x_4546_) == 0)
{
lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4554_; 
v_a_4547_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4549_ = v___x_4546_;
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v___x_4546_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
lean_ctor_set_tag(v___x_4549_, 1);
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
v___y_4535_ = v___x_4545_;
v___y_4536_ = v___x_4544_;
v_val_4537_ = v___x_4552_;
goto v___jp_4534_;
}
}
}
else
{
lean_object* v_a_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4562_; 
v_a_4555_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4562_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4562_ == 0)
{
v___x_4557_ = v___x_4546_;
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_a_4555_);
lean_dec(v___x_4546_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
lean_object* v___x_4560_; 
if (v_isShared_4558_ == 0)
{
lean_ctor_set_tag(v___x_4557_, 0);
v___x_4560_ = v___x_4557_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v_a_4555_);
v___x_4560_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
v___y_4535_ = v___x_4545_;
v___y_4536_ = v___x_4544_;
v_val_4537_ = v___x_4560_;
goto v___jp_4534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4566_, lean_object* v___x_4567_, lean_object* v_a_4568_, lean_object* v_x_4569_, lean_object* v___y_4570_){
_start:
{
lean_object* v_res_4571_; 
v_res_4571_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4566_, v___x_4567_, v_a_4568_, v_x_4569_);
lean_dec_ref(v_x_4569_);
return v_res_4571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4572_, lean_object* v___x_4573_, lean_object* v___x_4574_, lean_object* v___f_4575_, lean_object* v_a_4576_, lean_object* v_x_4577_){
_start:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; uint8_t v___x_4583_; lean_object* v_val_4585_; lean_object* v___x_4588_; 
v___x_4579_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4580_, 0, v_a_4572_);
lean_ctor_set(v___x_4580_, 1, v___x_4573_);
v___x_4581_ = lean_array_push(v___x_4574_, v___x_4580_);
v___x_4582_ = lean_unsigned_to_nat(0u);
v___x_4583_ = 0;
v___x_4588_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4576_, v___x_4579_, v___x_4581_);
if (lean_obj_tag(v___x_4588_) == 0)
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
v_a_4589_ = lean_ctor_get(v___x_4588_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4588_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4588_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4588_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
lean_ctor_set_tag(v___x_4591_, 1);
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
v_val_4585_ = v___x_4594_;
goto v___jp_4584_;
}
}
}
else
{
lean_object* v_a_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_a_4597_ = lean_ctor_get(v___x_4588_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v___x_4588_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v___x_4588_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_inc(v_a_4597_);
lean_dec(v___x_4588_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set_tag(v___x_4599_, 0);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_a_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
v_val_4585_ = v___x_4602_;
goto v___jp_4584_;
}
}
}
v___jp_4584_:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4586_, 0, v_val_4585_);
v___x_4587_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4582_, v___x_4583_, v___x_4586_, v___f_4575_);
return v___x_4587_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4605_, lean_object* v___x_4606_, lean_object* v___x_4607_, lean_object* v___f_4608_, lean_object* v_a_4609_, lean_object* v_x_4610_, lean_object* v___y_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4605_, v___x_4606_, v___x_4607_, v___f_4608_, v_a_4609_, v_x_4610_);
lean_dec_ref(v_x_4610_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_as_x27_4616_, lean_object* v_b_4617_){
_start:
{
if (lean_obj_tag(v_as_x27_4616_) == 0)
{
lean_object* v___x_4619_; 
lean_dec(v_a_4615_);
lean_dec(v_a_4614_);
v___x_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4619_, 0, v_b_4617_);
return v___x_4619_;
}
else
{
lean_object* v_head_4620_; lean_object* v_tail_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; 
v_head_4620_ = lean_ctor_get(v_as_x27_4616_, 0);
v_tail_4621_ = lean_ctor_get(v_as_x27_4616_, 1);
v___x_4622_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4623_ = lean_box(0);
v___x_4624_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4620_);
v___x_4625_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4625_, 0, v_head_4620_);
lean_inc(v_a_4614_);
v___x_4626_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4626_, 0, v_a_4614_);
lean_ctor_set(v___x_4626_, 1, v___x_4622_);
v___x_4627_ = lean_unsigned_to_nat(2u);
v___x_4628_ = lean_mk_empty_array_with_capacity(v___x_4627_);
v___x_4629_ = lean_array_push(v___x_4628_, v___x_4625_);
v___x_4630_ = lean_array_push(v___x_4629_, v___x_4626_);
lean_inc(v_a_4615_);
v___x_4631_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4615_, v___x_4624_, v___x_4630_);
if (lean_obj_tag(v___x_4631_) == 0)
{
lean_dec_ref_known(v___x_4631_, 1);
v_as_x27_4616_ = v_tail_4621_;
v_b_4617_ = v___x_4623_;
goto _start;
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
lean_dec(v_a_4615_);
lean_dec(v_a_4614_);
v_a_4633_ = lean_ctor_get(v___x_4631_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4631_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4631_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4631_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_as_x27_4643_, lean_object* v_b_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4641_, v_a_4642_, v_as_x27_4643_, v_b_4644_);
lean_dec(v_as_x27_4643_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4648_){
_start:
{
uint32_t v___x_4650_; uint32_t v___x_4651_; uint64_t v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; 
v___x_4650_ = 201;
v___x_4651_ = 0;
v___x_4652_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_specifier_4648_);
v___x_4653_ = lean_string_to_utf8(v_specifier_4648_);
v___x_4654_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4650_, v___x_4651_, v___x_4652_, v___x_4653_);
lean_dec_ref(v___x_4653_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
lean_inc(v_a_4655_);
lean_dec_ref_known(v___x_4654_, 1);
v___x_4656_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4657_ = l_String_quote(v_specifier_4648_);
v___x_4658_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4658_, 0, v___x_4657_);
v___x_4659_ = lean_unsigned_to_nat(120u);
v___x_4660_ = lean_unsigned_to_nat(0u);
v___x_4661_ = l_Std_Format_pretty(v___x_4658_, v___x_4659_, v___x_4660_, v___x_4660_);
v___x_4662_ = lean_string_append(v___x_4656_, v___x_4661_);
lean_dec_ref(v___x_4661_);
v___x_4663_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4662_, v_a_4655_);
lean_dec(v_a_4655_);
lean_dec_ref(v___x_4662_);
return v___x_4663_;
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
lean_dec_ref(v_specifier_4648_);
v_a_4664_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4654_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4654_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4672_, lean_object* v_a_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4672_);
return v_res_4674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4700_, lean_object* v_options_4701_){
_start:
{
lean_object* v___f_4703_; lean_object* v___f_4704_; lean_object* v___f_4705_; lean_object* v___f_4706_; lean_object* v___y_4708_; lean_object* v___y_4709_; lean_object* v___y_4710_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___f_4703_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4704_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4705_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4706_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4769_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4770_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4769_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
lean_inc(v_a_4771_);
lean_dec_ref_known(v___x_4770_, 1);
v___x_4772_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4773_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4772_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
v___x_4775_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4776_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4774_, v___x_4775_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4778_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_a_4777_);
lean_dec_ref_known(v___x_4776_, 1);
v___x_4778_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
lean_inc(v_a_4779_);
lean_dec_ref_known(v___x_4778_, 1);
v___x_4780_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4781_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4779_, v___x_4780_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___y_4784_; lean_object* v___y_4785_; lean_object* v___y_4786_; lean_object* v___y_4836_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___y_4841_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___x_4838_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_4839_ = lean_io_getenv(v___x_4838_);
if (lean_obj_tag(v___x_4839_) == 0)
{
lean_object* v___x_4850_; 
v___x_4850_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_4841_ = v___x_4850_;
goto v___jp_4840_;
}
else
{
lean_object* v_val_4851_; 
v_val_4851_ = lean_ctor_get(v___x_4839_, 0);
lean_inc(v_val_4851_);
lean_dec_ref_known(v___x_4839_, 1);
v___y_4841_ = v_val_4851_;
goto v___jp_4840_;
}
v___jp_4783_:
{
lean_object* v___f_4787_; lean_object* v___f_4788_; lean_object* v___f_4789_; lean_object* v___f_4790_; lean_object* v___x_4791_; 
lean_inc_n(v___y_4786_, 2);
v___f_4787_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4787_, 0, v___f_4704_);
lean_closure_set(v___f_4787_, 1, v___f_4703_);
lean_closure_set(v___f_4787_, 2, v_handler_4700_);
lean_closure_set(v___f_4787_, 3, v_options_4701_);
lean_closure_set(v___f_4787_, 4, v_a_4782_);
lean_closure_set(v___f_4787_, 5, v_a_4777_);
lean_closure_set(v___f_4787_, 6, v___y_4786_);
v___f_4788_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4788_, 0, v___f_4787_);
lean_inc_ref(v___f_4788_);
v___f_4789_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4789_, 0, v___f_4788_);
lean_closure_set(v___f_4789_, 1, v___f_4788_);
v___f_4790_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4790_, 0, v___y_4784_);
lean_closure_set(v___f_4790_, 1, v___y_4786_);
lean_closure_set(v___f_4790_, 2, v___f_4705_);
v___x_4791_ = l_Lasm_JS_Function_ofFnReply(v___f_4789_);
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
lean_inc(v_a_4792_);
lean_dec_ref_known(v___x_4791_, 1);
v___x_4793_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4794_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4795_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4795_, 0, v_a_4792_);
lean_ctor_set(v___x_4795_, 1, v___x_4794_);
v___x_4796_ = lean_unsigned_to_nat(1u);
v___x_4797_ = lean_mk_empty_array_with_capacity(v___x_4796_);
lean_inc_ref(v___x_4797_);
v___x_4798_ = lean_array_push(v___x_4797_, v___x_4795_);
v___x_4799_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4771_, v___x_4793_, v___x_4798_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4801_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
lean_inc(v_a_4800_);
lean_dec_ref_known(v___x_4799_, 1);
v___x_4801_ = l_Lasm_JS_Function_ofFn(v___f_4790_);
if (lean_obj_tag(v___x_4801_) == 0)
{
lean_object* v_a_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; uint8_t v___x_4807_; 
v_a_4802_ = lean_ctor_get(v___x_4801_, 0);
lean_inc(v_a_4802_);
lean_dec_ref_known(v___x_4801_, 1);
v___x_4803_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4804_ = lean_nat_to_int(v___y_4786_);
v___x_4805_ = lean_nat_abs(v___x_4804_);
v___x_4806_ = lean_cstr_to_nat("9007199254740991");
v___x_4807_ = lean_nat_dec_le(v___x_4805_, v___x_4806_);
lean_dec(v___x_4805_);
if (v___x_4807_ == 0)
{
lean_object* v___x_4808_; 
v___x_4808_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4804_);
v___y_4708_ = v___x_4797_;
v___y_4709_ = v_a_4800_;
v___y_4710_ = v___x_4794_;
v___y_4711_ = v___x_4803_;
v___y_4712_ = v___y_4785_;
v___y_4713_ = v_a_4802_;
v___y_4714_ = v___x_4794_;
v___y_4715_ = v___x_4808_;
goto v___jp_4707_;
}
else
{
double v___x_4809_; lean_object* v___x_4810_; 
v___x_4809_ = l_Float_ofInt(v___x_4804_);
lean_dec(v___x_4804_);
v___x_4810_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4810_, 0, v___x_4809_);
v___y_4708_ = v___x_4797_;
v___y_4709_ = v_a_4800_;
v___y_4710_ = v___x_4794_;
v___y_4711_ = v___x_4803_;
v___y_4712_ = v___y_4785_;
v___y_4713_ = v_a_4802_;
v___y_4714_ = v___x_4794_;
v___y_4715_ = v___x_4810_;
goto v___jp_4707_;
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; uint8_t v_isShared_4814_; uint8_t v_isSharedCheck_4818_; 
lean_dec(v_a_4800_);
lean_dec_ref(v___x_4797_);
lean_dec(v___y_4786_);
lean_dec_ref(v___y_4785_);
v_a_4811_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4813_ = v___x_4801_;
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
else
{
lean_inc(v_a_4811_);
lean_dec(v___x_4801_);
v___x_4813_ = lean_box(0);
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
v_resetjp_4812_:
{
lean_object* v___x_4816_; 
if (v_isShared_4814_ == 0)
{
v___x_4816_ = v___x_4813_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4811_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
else
{
lean_object* v_a_4819_; lean_object* v___x_4821_; uint8_t v_isShared_4822_; uint8_t v_isSharedCheck_4826_; 
lean_dec_ref(v___x_4797_);
lean_dec_ref(v___f_4790_);
lean_dec(v___y_4786_);
lean_dec_ref(v___y_4785_);
v_a_4819_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4821_ = v___x_4799_;
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
else
{
lean_inc(v_a_4819_);
lean_dec(v___x_4799_);
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
lean_dec_ref(v___f_4790_);
lean_dec(v___y_4786_);
lean_dec_ref(v___y_4785_);
lean_dec(v_a_4771_);
v_a_4827_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4791_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4791_);
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
v___jp_4835_:
{
lean_object* v___x_4837_; 
v___x_4837_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_4836_);
v___y_4784_ = v___y_4836_;
v___y_4785_ = v___y_4836_;
v___y_4786_ = v___x_4837_;
goto v___jp_4783_;
}
v___jp_4840_:
{
lean_object* v___x_4842_; lean_object* v___x_4843_; 
v___x_4842_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_4843_ = lean_io_getenv(v___x_4842_);
if (lean_obj_tag(v___x_4843_) == 0)
{
v___y_4836_ = v___y_4841_;
goto v___jp_4835_;
}
else
{
lean_object* v_val_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
v_val_4844_ = lean_ctor_get(v___x_4843_, 0);
lean_inc(v_val_4844_);
lean_dec_ref_known(v___x_4843_, 1);
v___x_4845_ = lean_unsigned_to_nat(0u);
v___x_4846_ = lean_string_utf8_byte_size(v_val_4844_);
v___x_4847_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4847_, 0, v_val_4844_);
lean_ctor_set(v___x_4847_, 1, v___x_4845_);
lean_ctor_set(v___x_4847_, 2, v___x_4846_);
v___x_4848_ = l_String_Slice_toNat_x3f(v___x_4847_);
lean_dec_ref_known(v___x_4847_, 3);
if (lean_obj_tag(v___x_4848_) == 0)
{
v___y_4836_ = v___y_4841_;
goto v___jp_4835_;
}
else
{
lean_object* v_val_4849_; 
v_val_4849_ = lean_ctor_get(v___x_4848_, 0);
lean_inc(v_val_4849_);
lean_dec_ref_known(v___x_4848_, 1);
lean_inc_ref(v___y_4841_);
v___y_4784_ = v___y_4841_;
v___y_4785_ = v___y_4841_;
v___y_4786_ = v_val_4849_;
goto v___jp_4783_;
}
}
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4859_; 
lean_dec(v_a_4777_);
lean_dec(v_a_4771_);
lean_dec_ref(v_options_4701_);
lean_dec_ref(v_handler_4700_);
v_a_4852_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4854_ = v___x_4781_;
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4781_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4857_; 
if (v_isShared_4855_ == 0)
{
v___x_4857_ = v___x_4854_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v_a_4852_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
}
else
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4867_; 
lean_dec(v_a_4777_);
lean_dec(v_a_4771_);
lean_dec_ref(v_options_4701_);
lean_dec_ref(v_handler_4700_);
v_a_4860_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4862_ = v___x_4778_;
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4778_);
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
lean_dec(v_a_4771_);
lean_dec_ref(v_options_4701_);
lean_dec_ref(v_handler_4700_);
v_a_4868_ = lean_ctor_get(v___x_4776_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v___x_4776_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4870_ = v___x_4776_;
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4776_);
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
lean_dec(v_a_4771_);
lean_dec_ref(v_options_4701_);
lean_dec_ref(v_handler_4700_);
v_a_4876_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4878_ = v___x_4773_;
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_a_4876_);
lean_dec(v___x_4773_);
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
lean_dec_ref(v_options_4701_);
lean_dec_ref(v_handler_4700_);
v_a_4884_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4891_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4891_ == 0)
{
v___x_4886_ = v___x_4770_;
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4770_);
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
v___jp_4707_:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4716_, 0, v___y_4712_);
lean_inc_ref(v___y_4714_);
v___x_4717_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4717_, 0, v___y_4713_);
lean_ctor_set(v___x_4717_, 1, v___y_4714_);
v___x_4718_ = lean_unsigned_to_nat(3u);
v___x_4719_ = lean_mk_empty_array_with_capacity(v___x_4718_);
v___x_4720_ = lean_array_push(v___x_4719_, v___y_4715_);
v___x_4721_ = lean_array_push(v___x_4720_, v___x_4716_);
v___x_4722_ = lean_array_push(v___x_4721_, v___x_4717_);
lean_inc_ref(v___y_4711_);
lean_inc(v___y_4709_);
v___x_4723_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4709_, v___y_4711_, v___x_4722_);
if (lean_obj_tag(v___x_4723_) == 0)
{
lean_object* v___x_4724_; lean_object* v___x_4725_; 
lean_dec_ref_known(v___x_4723_, 1);
v___x_4724_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4725_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4724_);
if (lean_obj_tag(v___x_4725_) == 0)
{
lean_object* v_a_4726_; lean_object* v___f_4727_; lean_object* v___x_4728_; 
v_a_4726_ = lean_ctor_get(v___x_4725_, 0);
lean_inc_n(v_a_4726_, 2);
lean_dec_ref_known(v___x_4725_, 1);
lean_inc_ref(v___y_4708_);
v___f_4727_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4727_, 0, v___f_4706_);
lean_closure_set(v___f_4727_, 1, v___y_4708_);
lean_closure_set(v___f_4727_, 2, v_a_4726_);
v___x_4728_ = l_Lasm_JS_Function_ofFn(v___f_4727_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v_a_4729_; lean_object* v___f_4730_; lean_object* v___x_4731_; 
v_a_4729_ = lean_ctor_get(v___x_4728_, 0);
lean_inc(v_a_4729_);
lean_dec_ref_known(v___x_4728_, 1);
lean_inc_ref(v___y_4710_);
v___f_4730_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4730_, 0, v_a_4729_);
lean_closure_set(v___f_4730_, 1, v___y_4710_);
lean_closure_set(v___f_4730_, 2, v___y_4708_);
lean_closure_set(v___f_4730_, 3, v___f_4706_);
lean_closure_set(v___f_4730_, 4, v___y_4709_);
v___x_4731_ = l_Lasm_JS_Function_ofFn(v___f_4730_);
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v_a_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; 
v_a_4732_ = lean_ctor_get(v___x_4731_, 0);
lean_inc(v_a_4732_);
lean_dec_ref_known(v___x_4731_, 1);
v___x_4733_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4734_ = lean_box(0);
v___x_4735_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4732_, v_a_4726_, v___x_4733_, v___x_4734_);
if (lean_obj_tag(v___x_4735_) == 0)
{
lean_object* v___x_4736_; 
lean_dec_ref_known(v___x_4735_, 1);
v___x_4736_ = l_Lasm_JS_waitForever();
return v___x_4736_;
}
else
{
return v___x_4735_;
}
}
else
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4744_; 
lean_dec(v_a_4726_);
v_a_4737_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4739_ = v___x_4731_;
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4731_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
return v___x_4742_;
}
}
}
}
else
{
lean_object* v_a_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4752_; 
lean_dec(v_a_4726_);
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
v_a_4745_ = lean_ctor_get(v___x_4728_, 0);
v_isSharedCheck_4752_ = !lean_is_exclusive(v___x_4728_);
if (v_isSharedCheck_4752_ == 0)
{
v___x_4747_ = v___x_4728_;
v_isShared_4748_ = v_isSharedCheck_4752_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_a_4745_);
lean_dec(v___x_4728_);
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
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
v_a_4753_ = lean_ctor_get(v___x_4725_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4725_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4725_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4725_);
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
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
v_a_4761_ = lean_ctor_get(v___x_4723_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4723_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___x_4723_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4723_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_4892_, lean_object* v_options_4893_, lean_object* v_a_4894_){
_start:
{
lean_object* v_res_4895_; 
v_res_4895_ = l_Lasm_Fetch_serveNode(v_handler_4892_, v_options_4893_);
return v_res_4895_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_4896_, lean_object* v_range_4897_, lean_object* v_b_4898_, lean_object* v_i_4899_, lean_object* v_hs_4900_, lean_object* v_hl_4901_){
_start:
{
lean_object* v___x_4902_; 
v___x_4902_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4896_, v_range_4897_, v_b_4898_, v_i_4899_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_4903_, lean_object* v_range_4904_, lean_object* v_b_4905_, lean_object* v_i_4906_, lean_object* v_hs_4907_, lean_object* v_hl_4908_){
_start:
{
lean_object* v_res_4909_; 
v_res_4909_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_4903_, v_range_4904_, v_b_4905_, v_i_4906_, v_hs_4907_, v_hl_4908_);
lean_dec_ref(v_range_4904_);
lean_dec_ref(v___y_4903_);
return v_res_4909_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_4910_, lean_object* v_a_4911_, lean_object* v_as_4912_, lean_object* v_as_x27_4913_, lean_object* v_b_4914_, lean_object* v_a_4915_){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4910_, v_a_4911_, v_as_x27_4913_, v_b_4914_);
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_as_4920_, lean_object* v_as_x27_4921_, lean_object* v_b_4922_, lean_object* v_a_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_4918_, v_a_4919_, v_as_4920_, v_as_x27_4921_, v_b_4922_, v_a_4923_);
lean_dec(v_as_x27_4921_);
lean_dec(v_as_4920_);
return v_res_4925_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = lean_box(0);
return v___x_4926_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_4927_; 
v___x_4927_ = lean_box(0);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_4935_, lean_object* v_method_4936_, lean_object* v_url_4937_, lean_object* v_headers_4938_, lean_object* v_body_4939_, lean_object* v_backend_4940_, lean_object* v_a_00___x40___internal___hyg_4941_){
_start:
{
lean_object* v_res_4942_; 
v_res_4942_ = lasm_fetch_send(v_p_4935_, v_method_4936_, v_url_4937_, v_headers_4938_, v_body_4939_, v_backend_4940_);
lean_dec_ref(v_backend_4940_);
lean_dec_ref(v_body_4939_);
lean_dec_ref(v_headers_4938_);
lean_dec_ref(v_url_4937_);
lean_dec_ref(v_method_4936_);
lean_dec(v_p_4935_);
return v_res_4942_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_4943_, lean_object* v_b_4944_, lean_object* v_x_4945_, lean_object* v_x_4946_){
_start:
{
if (lean_obj_tag(v_x_4946_) == 0)
{
return v_x_4945_;
}
else
{
lean_object* v_head_4947_; lean_object* v_tail_4948_; uint8_t v___y_4950_; lean_object* v___x_4957_; lean_object* v___x_4958_; uint8_t v___x_4959_; 
v_head_4947_ = lean_ctor_get(v_x_4946_, 0);
v_tail_4948_ = lean_ctor_get(v_x_4946_, 1);
v___x_4957_ = lean_nat_add(v_pos_4943_, v_head_4947_);
v___x_4958_ = lean_byte_array_size(v_b_4944_);
v___x_4959_ = lean_nat_dec_lt(v___x_4957_, v___x_4958_);
if (v___x_4959_ == 0)
{
uint8_t v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; uint8_t v___x_4963_; 
lean_dec(v___x_4957_);
v___x_4960_ = 0;
v___x_4961_ = lean_box(v___x_4960_);
v___x_4962_ = l_outOfBounds___redArg(v___x_4961_);
lean_dec(v___x_4961_);
v___x_4963_ = lean_unbox(v___x_4962_);
lean_dec(v___x_4962_);
v___y_4950_ = v___x_4963_;
goto v___jp_4949_;
}
else
{
uint8_t v___x_4964_; 
v___x_4964_ = lean_byte_array_fget(v_b_4944_, v___x_4957_);
lean_dec(v___x_4957_);
v___y_4950_ = v___x_4964_;
goto v___jp_4949_;
}
v___jp_4949_:
{
lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v___x_4951_ = lean_uint8_to_nat(v___y_4950_);
v___x_4952_ = lean_unsigned_to_nat(256u);
v___x_4953_ = lean_nat_pow(v___x_4952_, v_head_4947_);
v___x_4954_ = lean_nat_mul(v___x_4951_, v___x_4953_);
lean_dec(v___x_4953_);
v___x_4955_ = lean_nat_add(v_x_4945_, v___x_4954_);
lean_dec(v___x_4954_);
lean_dec(v_x_4945_);
v_x_4945_ = v___x_4955_;
v_x_4946_ = v_tail_4948_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_4965_, lean_object* v_b_4966_, lean_object* v_x_4967_, lean_object* v_x_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4965_, v_b_4966_, v_x_4967_, v_x_4968_);
lean_dec(v_x_4968_);
lean_dec_ref(v_b_4966_);
lean_dec(v_pos_4965_);
return v_res_4969_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4970_; lean_object* v___x_4971_; 
v___x_4970_ = lean_unsigned_to_nat(8u);
v___x_4971_ = l_List_range(v___x_4970_);
return v___x_4971_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_4975_, lean_object* v_pos_4976_){
_start:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; uint8_t v___x_4980_; 
v___x_4977_ = lean_byte_array_size(v_b_4975_);
v___x_4978_ = lean_unsigned_to_nat(8u);
v___x_4979_ = lean_nat_add(v_pos_4976_, v___x_4978_);
v___x_4980_ = lean_nat_dec_lt(v___x_4977_, v___x_4979_);
lean_dec(v___x_4979_);
if (v___x_4980_ == 0)
{
lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4981_ = lean_unsigned_to_nat(0u);
v___x_4982_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_4983_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4976_, v_b_4975_, v___x_4981_, v___x_4982_);
v___x_4984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4984_, 0, v___x_4983_);
return v___x_4984_;
}
else
{
lean_object* v___x_4985_; 
v___x_4985_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_4985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_4986_, lean_object* v_pos_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4986_, v_pos_4987_);
lean_dec(v_pos_4987_);
lean_dec_ref(v_b_4986_);
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_4989_, lean_object* v_a_4990_){
_start:
{
if (lean_obj_tag(v_a_4989_) == 0)
{
lean_object* v___x_4991_; 
v___x_4991_ = l_List_reverse___redArg(v_a_4990_);
return v___x_4991_;
}
else
{
lean_object* v_head_4992_; lean_object* v_tail_4993_; lean_object* v___x_4995_; uint8_t v_isShared_4996_; uint8_t v_isSharedCheck_5009_; 
v_head_4992_ = lean_ctor_get(v_a_4989_, 0);
v_tail_4993_ = lean_ctor_get(v_a_4989_, 1);
v_isSharedCheck_5009_ = !lean_is_exclusive(v_a_4989_);
if (v_isSharedCheck_5009_ == 0)
{
v___x_4995_ = v_a_4989_;
v_isShared_4996_ = v_isSharedCheck_5009_;
goto v_resetjp_4994_;
}
else
{
lean_inc(v_tail_4993_);
lean_inc(v_head_4992_);
lean_dec(v_a_4989_);
v___x_4995_ = lean_box(0);
v_isShared_4996_ = v_isSharedCheck_5009_;
goto v_resetjp_4994_;
}
v_resetjp_4994_:
{
uint8_t v___y_4998_; uint8_t v___x_5004_; uint8_t v___x_5005_; uint8_t v___x_5006_; 
v___x_5004_ = 128;
v___x_5005_ = lean_unbox(v_head_4992_);
v___x_5006_ = lean_uint8_dec_lt(v___x_5005_, v___x_5004_);
if (v___x_5006_ == 0)
{
uint8_t v___x_5007_; 
lean_dec(v_head_4992_);
v___x_5007_ = 63;
v___y_4998_ = v___x_5007_;
goto v___jp_4997_;
}
else
{
uint8_t v___x_5008_; 
v___x_5008_ = lean_unbox(v_head_4992_);
lean_dec(v_head_4992_);
v___y_4998_ = v___x_5008_;
goto v___jp_4997_;
}
v___jp_4997_:
{
lean_object* v___x_4999_; lean_object* v___x_5001_; 
v___x_4999_ = lean_box(v___y_4998_);
if (v_isShared_4996_ == 0)
{
lean_ctor_set(v___x_4995_, 1, v_a_4990_);
lean_ctor_set(v___x_4995_, 0, v___x_4999_);
v___x_5001_ = v___x_4995_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v___x_4999_);
lean_ctor_set(v_reuseFailAlloc_5003_, 1, v_a_4990_);
v___x_5001_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
v_a_4989_ = v_tail_4993_;
v_a_4990_ = v___x_5001_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5012_, lean_object* v_pos_5013_, lean_object* v_n_5014_){
_start:
{
lean_object* v___x_5015_; lean_object* v___x_5016_; uint8_t v___x_5017_; 
v___x_5015_ = lean_byte_array_size(v_b_5012_);
v___x_5016_ = lean_nat_add(v_pos_5013_, v_n_5014_);
v___x_5017_ = lean_nat_dec_lt(v___x_5015_, v___x_5016_);
if (v___x_5017_ == 0)
{
lean_object* v___x_5018_; uint8_t v___x_5019_; 
v___x_5018_ = l_ByteArray_extract(v_b_5012_, v_pos_5013_, v___x_5016_);
lean_dec(v___x_5016_);
v___x_5019_ = lean_string_validate_utf8(v___x_5018_);
if (v___x_5019_ == 0)
{
lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; uint8_t v___x_5024_; 
v___x_5020_ = l_ByteArray_toList(v___x_5018_);
lean_dec_ref(v___x_5018_);
v___x_5021_ = lean_box(0);
v___x_5022_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5020_, v___x_5021_);
v___x_5023_ = l_List_toByteArray(v___x_5022_);
lean_dec(v___x_5022_);
v___x_5024_ = lean_string_validate_utf8(v___x_5023_);
if (v___x_5024_ == 0)
{
lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
lean_dec_ref(v___x_5023_);
v___x_5025_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
v___x_5026_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5025_);
v___x_5027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5027_, 0, v___x_5026_);
return v___x_5027_;
}
else
{
lean_object* v___x_5028_; lean_object* v___x_5029_; 
v___x_5028_ = lean_string_from_utf8_unchecked(v___x_5023_);
v___x_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5028_);
return v___x_5029_;
}
}
else
{
lean_object* v___x_5030_; lean_object* v___x_5031_; 
v___x_5030_ = lean_string_from_utf8_unchecked(v___x_5018_);
v___x_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5031_, 0, v___x_5030_);
return v___x_5031_;
}
}
else
{
lean_object* v___x_5032_; 
lean_dec(v___x_5016_);
lean_dec(v_pos_5013_);
v___x_5032_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5033_, lean_object* v_pos_5034_, lean_object* v_n_5035_){
_start:
{
lean_object* v_res_5036_; 
v_res_5036_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5033_, v_pos_5034_, v_n_5035_);
lean_dec(v_n_5035_);
lean_dec_ref(v_b_5033_);
return v_res_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5037_, lean_object* v_range_5038_, lean_object* v_b_5039_, lean_object* v_i_5040_){
_start:
{
lean_object* v_stop_5041_; lean_object* v_step_5042_; uint8_t v___x_5043_; 
v_stop_5041_ = lean_ctor_get(v_range_5038_, 1);
v_step_5042_ = lean_ctor_get(v_range_5038_, 2);
v___x_5043_ = lean_nat_dec_lt(v_i_5040_, v_stop_5041_);
if (v___x_5043_ == 0)
{
lean_object* v___x_5044_; 
lean_dec(v_i_5040_);
v___x_5044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5044_, 0, v_b_5039_);
return v___x_5044_;
}
else
{
lean_object* v_fst_5045_; lean_object* v_snd_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5102_; 
v_fst_5045_ = lean_ctor_get(v_b_5039_, 0);
v_snd_5046_ = lean_ctor_get(v_b_5039_, 1);
v_isSharedCheck_5102_ = !lean_is_exclusive(v_b_5039_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5048_ = v_b_5039_;
v_isShared_5049_ = v_isSharedCheck_5102_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_snd_5046_);
lean_inc(v_fst_5045_);
lean_dec(v_b_5039_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5102_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
lean_object* v___x_5050_; 
v___x_5050_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5037_, v_fst_5045_);
if (lean_obj_tag(v___x_5050_) == 0)
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_del_object(v___x_5048_);
lean_dec(v_snd_5046_);
lean_dec(v_fst_5045_);
lean_dec(v_i_5040_);
v_a_5051_ = lean_ctor_get(v___x_5050_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5050_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_5050_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_5050_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; 
v_a_5059_ = lean_ctor_get(v___x_5050_, 0);
lean_inc(v_a_5059_);
lean_dec_ref_known(v___x_5050_, 1);
v___x_5060_ = lean_unsigned_to_nat(8u);
v___x_5061_ = lean_nat_add(v_fst_5045_, v___x_5060_);
lean_dec(v_fst_5045_);
lean_inc(v___x_5061_);
v___x_5062_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5037_, v___x_5061_, v_a_5059_);
if (lean_obj_tag(v___x_5062_) == 0)
{
lean_object* v_a_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
lean_dec(v___x_5061_);
lean_dec(v_a_5059_);
lean_del_object(v___x_5048_);
lean_dec(v_snd_5046_);
lean_dec(v_i_5040_);
v_a_5063_ = lean_ctor_get(v___x_5062_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_5062_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v___x_5062_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_a_5063_);
lean_dec(v___x_5062_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; 
v_a_5071_ = lean_ctor_get(v___x_5062_, 0);
lean_inc(v_a_5071_);
lean_dec_ref_known(v___x_5062_, 1);
v___x_5072_ = lean_nat_add(v___x_5061_, v_a_5059_);
lean_dec(v_a_5059_);
lean_dec(v___x_5061_);
v___x_5073_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5037_, v___x_5072_);
if (lean_obj_tag(v___x_5073_) == 0)
{
lean_object* v_a_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5081_; 
lean_dec(v___x_5072_);
lean_dec(v_a_5071_);
lean_del_object(v___x_5048_);
lean_dec(v_snd_5046_);
lean_dec(v_i_5040_);
v_a_5074_ = lean_ctor_get(v___x_5073_, 0);
v_isSharedCheck_5081_ = !lean_is_exclusive(v___x_5073_);
if (v_isSharedCheck_5081_ == 0)
{
v___x_5076_ = v___x_5073_;
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_a_5074_);
lean_dec(v___x_5073_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5079_; 
if (v_isShared_5077_ == 0)
{
v___x_5079_ = v___x_5076_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5080_; 
v_reuseFailAlloc_5080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5080_, 0, v_a_5074_);
v___x_5079_ = v_reuseFailAlloc_5080_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
return v___x_5079_;
}
}
}
else
{
lean_object* v_a_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; 
v_a_5082_ = lean_ctor_get(v___x_5073_, 0);
lean_inc(v_a_5082_);
lean_dec_ref_known(v___x_5073_, 1);
v___x_5083_ = lean_nat_add(v___x_5072_, v___x_5060_);
lean_dec(v___x_5072_);
lean_inc(v___x_5083_);
v___x_5084_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5037_, v___x_5083_, v_a_5082_);
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_object* v_a_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5092_; 
lean_dec(v___x_5083_);
lean_dec(v_a_5082_);
lean_dec(v_a_5071_);
lean_del_object(v___x_5048_);
lean_dec(v_snd_5046_);
lean_dec(v_i_5040_);
v_a_5085_ = lean_ctor_get(v___x_5084_, 0);
v_isSharedCheck_5092_ = !lean_is_exclusive(v___x_5084_);
if (v_isSharedCheck_5092_ == 0)
{
v___x_5087_ = v___x_5084_;
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_a_5085_);
lean_dec(v___x_5084_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5090_; 
if (v_isShared_5088_ == 0)
{
v___x_5090_ = v___x_5087_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_a_5085_);
v___x_5090_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
return v___x_5090_;
}
}
}
else
{
lean_object* v_a_5093_; lean_object* v___x_5094_; lean_object* v___x_5096_; 
v_a_5093_ = lean_ctor_get(v___x_5084_, 0);
lean_inc(v_a_5093_);
lean_dec_ref_known(v___x_5084_, 1);
v___x_5094_ = lean_nat_add(v___x_5083_, v_a_5082_);
lean_dec(v_a_5082_);
lean_dec(v___x_5083_);
if (v_isShared_5049_ == 0)
{
lean_ctor_set(v___x_5048_, 1, v_a_5093_);
lean_ctor_set(v___x_5048_, 0, v_a_5071_);
v___x_5096_ = v___x_5048_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5071_);
lean_ctor_set(v_reuseFailAlloc_5101_, 1, v_a_5093_);
v___x_5096_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; 
v___x_5097_ = lean_array_push(v_snd_5046_, v___x_5096_);
v___x_5098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5094_);
lean_ctor_set(v___x_5098_, 1, v___x_5097_);
v___x_5099_ = lean_nat_add(v_i_5040_, v_step_5042_);
lean_dec(v_i_5040_);
v_b_5039_ = v___x_5098_;
v_i_5040_ = v___x_5099_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5103_, lean_object* v_range_5104_, lean_object* v_b_5105_, lean_object* v_i_5106_){
_start:
{
lean_object* v_res_5107_; 
v_res_5107_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5103_, v_range_5104_, v_b_5105_, v_i_5106_);
lean_dec_ref(v_range_5104_);
lean_dec_ref(v_b_5103_);
return v_res_5107_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5111_){
_start:
{
lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5112_ = lean_unsigned_to_nat(0u);
v___x_5113_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5111_, v___x_5112_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5113_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5113_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5113_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
else
{
lean_object* v_a_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; 
v_a_5122_ = lean_ctor_get(v___x_5113_, 0);
lean_inc(v_a_5122_);
lean_dec_ref_known(v___x_5113_, 1);
v___x_5123_ = lean_unsigned_to_nat(8u);
v___x_5124_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5111_, v___x_5123_);
if (lean_obj_tag(v___x_5124_) == 0)
{
lean_object* v_a_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5132_; 
lean_dec(v_a_5122_);
v_a_5125_ = lean_ctor_get(v___x_5124_, 0);
v_isSharedCheck_5132_ = !lean_is_exclusive(v___x_5124_);
if (v_isSharedCheck_5132_ == 0)
{
v___x_5127_ = v___x_5124_;
v_isShared_5128_ = v_isSharedCheck_5132_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_a_5125_);
lean_dec(v___x_5124_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5132_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v___x_5130_; 
if (v_isShared_5128_ == 0)
{
v___x_5130_ = v___x_5127_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5131_; 
v_reuseFailAlloc_5131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5131_, 0, v_a_5125_);
v___x_5130_ = v_reuseFailAlloc_5131_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
return v___x_5130_;
}
}
}
else
{
lean_object* v_a_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; 
v_a_5133_ = lean_ctor_get(v___x_5124_, 0);
lean_inc(v_a_5133_);
lean_dec_ref_known(v___x_5124_, 1);
v___x_5134_ = lean_unsigned_to_nat(1u);
v___x_5135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5135_, 0, v___x_5112_);
lean_ctor_set(v___x_5135_, 1, v_a_5133_);
lean_ctor_set(v___x_5135_, 2, v___x_5134_);
v___x_5136_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5137_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5111_, v___x_5135_, v___x_5136_, v___x_5112_);
lean_dec_ref_known(v___x_5135_, 3);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5145_; 
lean_dec(v_a_5122_);
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5140_ = v___x_5137_;
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5137_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5143_; 
if (v_isShared_5141_ == 0)
{
v___x_5143_ = v___x_5140_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_a_5138_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
else
{
lean_object* v_a_5146_; lean_object* v___x_5148_; uint8_t v_isShared_5149_; uint8_t v_isSharedCheck_5160_; 
v_a_5146_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5148_ = v___x_5137_;
v_isShared_5149_ = v_isSharedCheck_5160_;
goto v_resetjp_5147_;
}
else
{
lean_inc(v_a_5146_);
lean_dec(v___x_5137_);
v___x_5148_ = lean_box(0);
v_isShared_5149_ = v_isSharedCheck_5160_;
goto v_resetjp_5147_;
}
v_resetjp_5147_:
{
lean_object* v_fst_5150_; lean_object* v_snd_5151_; uint16_t v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5158_; 
v_fst_5150_ = lean_ctor_get(v_a_5146_, 0);
lean_inc(v_fst_5150_);
v_snd_5151_ = lean_ctor_get(v_a_5146_, 1);
lean_inc(v_snd_5151_);
lean_dec(v_a_5146_);
v___x_5152_ = lean_uint16_of_nat(v_a_5122_);
lean_dec(v_a_5122_);
v___x_5153_ = lean_byte_array_size(v_b_5111_);
v___x_5154_ = l_ByteArray_extract(v_b_5111_, v_fst_5150_, v___x_5153_);
v___x_5155_ = lean_box(0);
v___x_5156_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5156_, 0, v_snd_5151_);
lean_ctor_set(v___x_5156_, 1, v___x_5154_);
lean_ctor_set(v___x_5156_, 2, v___x_5155_);
lean_ctor_set_uint16(v___x_5156_, sizeof(void*)*3, v___x_5152_);
if (v_isShared_5149_ == 0)
{
lean_ctor_set(v___x_5148_, 0, v___x_5156_);
v___x_5158_ = v___x_5148_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v___x_5156_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5161_);
lean_dec_ref(v_b_5161_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5163_, lean_object* v_range_5164_, lean_object* v_b_5165_, lean_object* v_i_5166_, lean_object* v_hs_5167_, lean_object* v_hl_5168_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5163_, v_range_5164_, v_b_5165_, v_i_5166_);
return v___x_5169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5170_, lean_object* v_range_5171_, lean_object* v_b_5172_, lean_object* v_i_5173_, lean_object* v_hs_5174_, lean_object* v_hl_5175_){
_start:
{
lean_object* v_res_5176_; 
v_res_5176_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5170_, v_range_5171_, v_b_5172_, v_i_5173_, v_hs_5174_, v_hl_5175_);
lean_dec_ref(v_range_5171_);
lean_dec_ref(v_b_5170_);
return v_res_5176_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5177_, lean_object* v_headers_5178_, lean_object* v_x_5179_){
_start:
{
if (lean_obj_tag(v_x_5179_) == 0)
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5189_; 
lean_dec_ref(v_headers_5178_);
v_a_5181_ = lean_ctor_get(v_x_5179_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_x_5179_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5183_ = v_x_5179_;
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v_x_5179_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5186_; 
if (v_isShared_5184_ == 0)
{
v___x_5186_ = v___x_5183_;
goto v_reusejp_5185_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5181_);
v___x_5186_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5185_;
}
v_reusejp_5185_:
{
lean_object* v___x_5187_; 
v___x_5187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5186_);
return v___x_5187_;
}
}
}
else
{
lean_object* v_a_5190_; lean_object* v___x_5192_; uint8_t v_isShared_5193_; uint8_t v_isSharedCheck_5200_; 
v_a_5190_ = lean_ctor_get(v_x_5179_, 0);
v_isSharedCheck_5200_ = !lean_is_exclusive(v_x_5179_);
if (v_isSharedCheck_5200_ == 0)
{
v___x_5192_ = v_x_5179_;
v_isShared_5193_ = v_isSharedCheck_5200_;
goto v_resetjp_5191_;
}
else
{
lean_inc(v_a_5190_);
lean_dec(v_x_5179_);
v___x_5192_ = lean_box(0);
v_isShared_5193_ = v_isSharedCheck_5200_;
goto v_resetjp_5191_;
}
v_resetjp_5191_:
{
lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5197_; 
v___x_5194_ = lean_box(0);
v___x_5195_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5195_, 0, v_headers_5178_);
lean_ctor_set(v___x_5195_, 1, v_a_5190_);
lean_ctor_set(v___x_5195_, 2, v___x_5194_);
lean_ctor_set_uint16(v___x_5195_, sizeof(void*)*3, v___y_5177_);
if (v_isShared_5193_ == 0)
{
lean_ctor_set(v___x_5192_, 0, v___x_5195_);
v___x_5197_ = v___x_5192_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5199_; 
v_reuseFailAlloc_5199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5199_, 0, v___x_5195_);
v___x_5197_ = v_reuseFailAlloc_5199_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5198_; 
v___x_5198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
return v___x_5198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5201_, lean_object* v_headers_5202_, lean_object* v_x_5203_, lean_object* v___y_5204_){
_start:
{
uint16_t v___y_2893__boxed_5205_; lean_object* v_res_5206_; 
v___y_2893__boxed_5205_ = lean_unbox(v___y_5201_);
v_res_5206_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2893__boxed_5205_, v_headers_5202_, v_x_5203_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5207_, lean_object* v___f_5208_, lean_object* v_x_5209_){
_start:
{
if (lean_obj_tag(v_x_5209_) == 0)
{
lean_object* v_a_5211_; lean_object* v___x_5213_; uint8_t v_isShared_5214_; uint8_t v_isSharedCheck_5219_; 
lean_dec_ref(v___f_5208_);
lean_dec(v_a_5207_);
v_a_5211_ = lean_ctor_get(v_x_5209_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v_x_5209_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_5213_ = v_x_5209_;
v_isShared_5214_ = v_isSharedCheck_5219_;
goto v_resetjp_5212_;
}
else
{
lean_inc(v_a_5211_);
lean_dec(v_x_5209_);
v___x_5213_ = lean_box(0);
v_isShared_5214_ = v_isSharedCheck_5219_;
goto v_resetjp_5212_;
}
v_resetjp_5212_:
{
lean_object* v___x_5216_; 
if (v_isShared_5214_ == 0)
{
v___x_5216_ = v___x_5213_;
goto v_reusejp_5215_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v_a_5211_);
v___x_5216_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5215_;
}
v_reusejp_5215_:
{
lean_object* v___x_5217_; 
v___x_5217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5216_);
return v___x_5217_;
}
}
}
else
{
lean_object* v_a_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5244_; 
v_a_5220_ = lean_ctor_get(v_x_5209_, 0);
v_isSharedCheck_5244_ = !lean_is_exclusive(v_x_5209_);
if (v_isSharedCheck_5244_ == 0)
{
v___x_5222_ = v_x_5209_;
v_isShared_5223_ = v_isSharedCheck_5244_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_a_5220_);
lean_dec(v_x_5209_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5244_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; lean_object* v_val_5232_; lean_object* v___x_5235_; 
v___x_5224_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5225_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5225_, 0, v_a_5207_);
lean_ctor_set(v___x_5225_, 1, v___x_5224_);
v___x_5226_ = lean_unsigned_to_nat(1u);
v___x_5227_ = lean_mk_empty_array_with_capacity(v___x_5226_);
v___x_5228_ = lean_array_push(v___x_5227_, v___x_5225_);
v___x_5229_ = lean_unsigned_to_nat(0u);
v___x_5230_ = 0;
v___x_5235_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5220_, v___x_5228_);
if (lean_obj_tag(v___x_5235_) == 0)
{
lean_object* v_a_5236_; lean_object* v___x_5238_; 
v_a_5236_ = lean_ctor_get(v___x_5235_, 0);
lean_inc(v_a_5236_);
lean_dec_ref_known(v___x_5235_, 1);
if (v_isShared_5223_ == 0)
{
lean_ctor_set(v___x_5222_, 0, v_a_5236_);
v___x_5238_ = v___x_5222_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5236_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
v_val_5232_ = v___x_5238_;
goto v___jp_5231_;
}
}
else
{
lean_object* v_a_5240_; lean_object* v___x_5242_; 
v_a_5240_ = lean_ctor_get(v___x_5235_, 0);
lean_inc(v_a_5240_);
lean_dec_ref_known(v___x_5235_, 1);
if (v_isShared_5223_ == 0)
{
lean_ctor_set_tag(v___x_5222_, 0);
lean_ctor_set(v___x_5222_, 0, v_a_5240_);
v___x_5242_ = v___x_5222_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v_a_5240_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
v_val_5232_ = v___x_5242_;
goto v___jp_5231_;
}
}
v___jp_5231_:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5233_, 0, v_val_5232_);
v___x_5234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5229_, v___x_5230_, v___x_5233_, v___f_5208_);
return v___x_5234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5245_, lean_object* v___f_5246_, lean_object* v_x_5247_, lean_object* v___y_5248_){
_start:
{
lean_object* v_res_5249_; 
v_res_5249_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5245_, v___f_5246_, v_x_5247_);
return v_res_5249_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5250_, lean_object* v_a_5251_, lean_object* v_x_5252_){
_start:
{
if (lean_obj_tag(v_x_5252_) == 0)
{
lean_object* v_a_5254_; lean_object* v___x_5256_; uint8_t v_isShared_5257_; uint8_t v_isSharedCheck_5262_; 
lean_dec(v_a_5251_);
lean_dec_ref(v___f_5250_);
v_a_5254_ = lean_ctor_get(v_x_5252_, 0);
v_isSharedCheck_5262_ = !lean_is_exclusive(v_x_5252_);
if (v_isSharedCheck_5262_ == 0)
{
v___x_5256_ = v_x_5252_;
v_isShared_5257_ = v_isSharedCheck_5262_;
goto v_resetjp_5255_;
}
else
{
lean_inc(v_a_5254_);
lean_dec(v_x_5252_);
v___x_5256_ = lean_box(0);
v_isShared_5257_ = v_isSharedCheck_5262_;
goto v_resetjp_5255_;
}
v_resetjp_5255_:
{
lean_object* v___x_5259_; 
if (v_isShared_5257_ == 0)
{
v___x_5259_ = v___x_5256_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v_a_5254_);
v___x_5259_ = v_reuseFailAlloc_5261_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
lean_object* v___x_5260_; 
v___x_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5260_, 0, v___x_5259_);
return v___x_5260_;
}
}
}
else
{
lean_object* v_a_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5284_; 
v_a_5263_ = lean_ctor_get(v_x_5252_, 0);
v_isSharedCheck_5284_ = !lean_is_exclusive(v_x_5252_);
if (v_isSharedCheck_5284_ == 0)
{
v___x_5265_ = v_x_5252_;
v_isShared_5266_ = v_isSharedCheck_5284_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_a_5263_);
lean_dec(v_x_5252_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5284_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
lean_object* v___f_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; uint8_t v___x_5270_; lean_object* v_val_5272_; lean_object* v___x_5275_; 
v___f_5267_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5267_, 0, v_a_5263_);
lean_closure_set(v___f_5267_, 1, v___f_5250_);
v___x_5268_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5269_ = lean_unsigned_to_nat(0u);
v___x_5270_ = 0;
v___x_5275_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5251_, v___x_5268_);
if (lean_obj_tag(v___x_5275_) == 0)
{
lean_object* v_a_5276_; lean_object* v___x_5278_; 
v_a_5276_ = lean_ctor_get(v___x_5275_, 0);
lean_inc(v_a_5276_);
lean_dec_ref_known(v___x_5275_, 1);
if (v_isShared_5266_ == 0)
{
lean_ctor_set(v___x_5265_, 0, v_a_5276_);
v___x_5278_ = v___x_5265_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5276_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
v_val_5272_ = v___x_5278_;
goto v___jp_5271_;
}
}
else
{
lean_object* v_a_5280_; lean_object* v___x_5282_; 
v_a_5280_ = lean_ctor_get(v___x_5275_, 0);
lean_inc(v_a_5280_);
lean_dec_ref_known(v___x_5275_, 1);
if (v_isShared_5266_ == 0)
{
lean_ctor_set_tag(v___x_5265_, 0);
lean_ctor_set(v___x_5265_, 0, v_a_5280_);
v___x_5282_ = v___x_5265_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v_a_5280_);
v___x_5282_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
v_val_5272_ = v___x_5282_;
goto v___jp_5271_;
}
}
v___jp_5271_:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; 
v___x_5273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5273_, 0, v_val_5272_);
v___x_5274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5269_, v___x_5270_, v___x_5273_, v___f_5267_);
return v___x_5274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5285_, lean_object* v_a_5286_, lean_object* v_x_5287_, lean_object* v___y_5288_){
_start:
{
lean_object* v_res_5289_; 
v_res_5289_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5285_, v_a_5286_, v_x_5287_);
return v_res_5289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5290_, lean_object* v_a_5291_, lean_object* v_a_5292_, lean_object* v_headers_5293_){
_start:
{
lean_object* v___x_5295_; lean_object* v___f_5296_; lean_object* v___f_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; uint8_t v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5295_ = lean_box(v___y_5290_);
v___f_5296_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5296_, 0, v___x_5295_);
lean_closure_set(v___f_5296_, 1, v_headers_5293_);
v___f_5297_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5297_, 0, v___f_5296_);
lean_closure_set(v___f_5297_, 1, v_a_5291_);
v___x_5298_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5299_ = lean_unsigned_to_nat(0u);
v___x_5300_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5301_ = 0;
v___x_5302_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5292_, v___x_5298_, v___x_5300_);
v___x_5303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5299_, v___x_5301_, v___x_5302_, v___f_5297_);
return v___x_5303_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v_headers_5307_, lean_object* v___y_5308_){
_start:
{
uint16_t v___y_3101__boxed_5309_; lean_object* v_res_5310_; 
v___y_3101__boxed_5309_ = lean_unbox(v___y_5304_);
v_res_5310_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3101__boxed_5309_, v_a_5305_, v_a_5306_, v_headers_5307_);
return v_res_5310_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5311_, lean_object* v_x_5312_){
_start:
{
if (lean_obj_tag(v_x_5312_) == 0)
{
lean_object* v_a_5314_; lean_object* v___x_5316_; uint8_t v_isShared_5317_; uint8_t v_isSharedCheck_5322_; 
lean_dec_ref(v___f_5311_);
v_a_5314_ = lean_ctor_get(v_x_5312_, 0);
v_isSharedCheck_5322_ = !lean_is_exclusive(v_x_5312_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5316_ = v_x_5312_;
v_isShared_5317_ = v_isSharedCheck_5322_;
goto v_resetjp_5315_;
}
else
{
lean_inc(v_a_5314_);
lean_dec(v_x_5312_);
v___x_5316_ = lean_box(0);
v_isShared_5317_ = v_isSharedCheck_5322_;
goto v_resetjp_5315_;
}
v_resetjp_5315_:
{
lean_object* v___x_5319_; 
if (v_isShared_5317_ == 0)
{
v___x_5319_ = v___x_5316_;
goto v_reusejp_5318_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v_a_5314_);
v___x_5319_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5318_;
}
v_reusejp_5318_:
{
lean_object* v___x_5320_; 
v___x_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5320_, 0, v___x_5319_);
return v___x_5320_;
}
}
}
else
{
lean_object* v_a_5323_; lean_object* v___x_5324_; 
v_a_5323_ = lean_ctor_get(v_x_5312_, 0);
lean_inc(v_a_5323_);
lean_dec_ref_known(v_x_5312_, 1);
v___x_5324_ = lean_apply_2(v___f_5311_, v_a_5323_, lean_box(0));
return v___x_5324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5325_, lean_object* v_x_5326_, lean_object* v___y_5327_){
_start:
{
lean_object* v_res_5328_; 
v_res_5328_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5325_, v_x_5326_);
return v_res_5328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5329_, lean_object* v___f_5330_, lean_object* v_x_5331_){
_start:
{
if (lean_obj_tag(v_x_5331_) == 0)
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5341_; 
lean_dec_ref(v___f_5330_);
lean_dec(v_value_5329_);
v_a_5333_ = lean_ctor_get(v_x_5331_, 0);
v_isSharedCheck_5341_ = !lean_is_exclusive(v_x_5331_);
if (v_isSharedCheck_5341_ == 0)
{
v___x_5335_ = v_x_5331_;
v_isShared_5336_ = v_isSharedCheck_5341_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v_x_5331_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5341_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v_a_5333_);
v___x_5338_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
lean_object* v___x_5339_; 
v___x_5339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5339_, 0, v___x_5338_);
return v___x_5339_;
}
}
}
else
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5367_; 
v_a_5342_ = lean_ctor_get(v_x_5331_, 0);
v_isSharedCheck_5367_ = !lean_is_exclusive(v_x_5331_);
if (v_isSharedCheck_5367_ == 0)
{
v___x_5344_ = v_x_5331_;
v_isShared_5345_ = v_isSharedCheck_5367_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v_x_5331_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5367_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; uint8_t v___x_5353_; lean_object* v_val_5355_; lean_object* v___x_5358_; 
v___x_5346_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5347_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5348_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5348_, 0, v_value_5329_);
lean_ctor_set(v___x_5348_, 1, v___x_5347_);
v___x_5349_ = lean_unsigned_to_nat(1u);
v___x_5350_ = lean_mk_empty_array_with_capacity(v___x_5349_);
v___x_5351_ = lean_array_push(v___x_5350_, v___x_5348_);
v___x_5352_ = lean_unsigned_to_nat(0u);
v___x_5353_ = 0;
v___x_5358_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5342_, v___x_5346_, v___x_5351_);
if (lean_obj_tag(v___x_5358_) == 0)
{
lean_object* v_a_5359_; lean_object* v___x_5361_; 
v_a_5359_ = lean_ctor_get(v___x_5358_, 0);
lean_inc(v_a_5359_);
lean_dec_ref_known(v___x_5358_, 1);
if (v_isShared_5345_ == 0)
{
lean_ctor_set(v___x_5344_, 0, v_a_5359_);
v___x_5361_ = v___x_5344_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v_a_5359_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
v_val_5355_ = v___x_5361_;
goto v___jp_5354_;
}
}
else
{
lean_object* v_a_5363_; lean_object* v___x_5365_; 
v_a_5363_ = lean_ctor_get(v___x_5358_, 0);
lean_inc(v_a_5363_);
lean_dec_ref_known(v___x_5358_, 1);
if (v_isShared_5345_ == 0)
{
lean_ctor_set_tag(v___x_5344_, 0);
lean_ctor_set(v___x_5344_, 0, v_a_5363_);
v___x_5365_ = v___x_5344_;
goto v_reusejp_5364_;
}
else
{
lean_object* v_reuseFailAlloc_5366_; 
v_reuseFailAlloc_5366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5366_, 0, v_a_5363_);
v___x_5365_ = v_reuseFailAlloc_5366_;
goto v_reusejp_5364_;
}
v_reusejp_5364_:
{
v_val_5355_ = v___x_5365_;
goto v___jp_5354_;
}
}
v___jp_5354_:
{
lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5356_, 0, v_val_5355_);
v___x_5357_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5352_, v___x_5353_, v___x_5356_, v___f_5330_);
return v___x_5357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5368_, lean_object* v___f_5369_, lean_object* v_x_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v_res_5372_; 
v_res_5372_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5368_, v___f_5369_, v_x_5370_);
return v_res_5372_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v___x_5379_, lean_object* v___x_5380_, lean_object* v_x_5381_){
_start:
{
uint8_t v___y_5384_; lean_object* v___y_5385_; lean_object* v___y_5386_; lean_object* v_val_5387_; 
if (lean_obj_tag(v_x_5381_) == 0)
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5398_; 
lean_dec(v_a_5378_);
lean_dec(v_a_5377_);
v_a_5390_ = lean_ctor_get(v_x_5381_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v_x_5381_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5392_ = v_x_5381_;
v_isShared_5393_ = v_isSharedCheck_5398_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v_x_5381_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5398_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5390_);
v___x_5395_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
lean_object* v___x_5396_; 
v___x_5396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5396_, 0, v___x_5395_);
return v___x_5396_;
}
}
}
else
{
lean_object* v_a_5399_; lean_object* v___x_5401_; uint8_t v_isShared_5402_; uint8_t v_isSharedCheck_5432_; 
v_a_5399_ = lean_ctor_get(v_x_5381_, 0);
v_isSharedCheck_5432_ = !lean_is_exclusive(v_x_5381_);
if (v_isSharedCheck_5432_ == 0)
{
v___x_5401_ = v_x_5381_;
v_isShared_5402_ = v_isSharedCheck_5432_;
goto v_resetjp_5400_;
}
else
{
lean_inc(v_a_5399_);
lean_dec(v_x_5381_);
v___x_5401_ = lean_box(0);
v_isShared_5402_ = v_isSharedCheck_5432_;
goto v_resetjp_5400_;
}
v_resetjp_5400_:
{
uint16_t v___y_5404_; lean_object* v___x_5428_; 
v___x_5428_ = l_Lasm_JS_Data_field(v_a_5399_, v___x_5380_);
if (lean_obj_tag(v___x_5428_) == 3)
{
double v_n_5429_; uint16_t v___x_5430_; 
v_n_5429_ = lean_ctor_get_float(v___x_5428_, 0);
lean_dec_ref_known(v___x_5428_, 0);
v___x_5430_ = lean_float_to_uint16(v_n_5429_);
v___y_5404_ = v___x_5430_;
goto v___jp_5403_;
}
else
{
uint16_t v___x_5431_; 
lean_dec(v___x_5428_);
v___x_5431_ = 0;
v___y_5404_ = v___x_5431_;
goto v___jp_5403_;
}
v___jp_5403_:
{
lean_object* v___x_5405_; lean_object* v___f_5406_; lean_object* v___x_5407_; 
v___x_5405_ = lean_box(v___y_5404_);
lean_inc(v_a_5377_);
v___f_5406_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5406_, 0, v___x_5405_);
lean_closure_set(v___f_5406_, 1, v_a_5377_);
lean_closure_set(v___f_5406_, 2, v_a_5378_);
v___x_5407_ = l_Lasm_JS_Data_field(v_a_5399_, v___x_5379_);
lean_dec(v_a_5399_);
if (lean_obj_tag(v___x_5407_) == 9)
{
lean_object* v_value_5408_; lean_object* v___f_5409_; lean_object* v___f_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; uint8_t v___x_5413_; lean_object* v___x_5414_; 
v_value_5408_ = lean_ctor_get(v___x_5407_, 0);
lean_inc(v_value_5408_);
lean_dec_ref_known(v___x_5407_, 2);
v___f_5409_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5409_, 0, v___f_5406_);
v___f_5410_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5410_, 0, v_value_5408_);
lean_closure_set(v___f_5410_, 1, v___f_5409_);
v___x_5411_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5412_ = lean_unsigned_to_nat(0u);
v___x_5413_ = 0;
v___x_5414_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5377_, v___x_5411_);
if (lean_obj_tag(v___x_5414_) == 0)
{
lean_object* v_a_5415_; lean_object* v___x_5417_; 
v_a_5415_ = lean_ctor_get(v___x_5414_, 0);
lean_inc(v_a_5415_);
lean_dec_ref_known(v___x_5414_, 1);
if (v_isShared_5402_ == 0)
{
lean_ctor_set(v___x_5401_, 0, v_a_5415_);
v___x_5417_ = v___x_5401_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v_a_5415_);
v___x_5417_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
v___y_5384_ = v___x_5413_;
v___y_5385_ = v___x_5412_;
v___y_5386_ = v___f_5410_;
v_val_5387_ = v___x_5417_;
goto v___jp_5383_;
}
}
else
{
lean_object* v_a_5419_; lean_object* v___x_5421_; 
v_a_5419_ = lean_ctor_get(v___x_5414_, 0);
lean_inc(v_a_5419_);
lean_dec_ref_known(v___x_5414_, 1);
if (v_isShared_5402_ == 0)
{
lean_ctor_set_tag(v___x_5401_, 0);
lean_ctor_set(v___x_5401_, 0, v_a_5419_);
v___x_5421_ = v___x_5401_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v_a_5419_);
v___x_5421_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
v___y_5384_ = v___x_5413_;
v___y_5385_ = v___x_5412_;
v___y_5386_ = v___f_5410_;
v_val_5387_ = v___x_5421_;
goto v___jp_5383_;
}
}
}
else
{
lean_object* v___f_5423_; lean_object* v___x_5424_; uint8_t v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; 
lean_dec(v___x_5407_);
lean_del_object(v___x_5401_);
lean_dec(v_a_5377_);
v___f_5423_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5423_, 0, v___f_5406_);
v___x_5424_ = lean_unsigned_to_nat(0u);
v___x_5425_ = 0;
v___x_5426_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5427_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5424_, v___x_5425_, v___x_5426_, v___f_5423_);
return v___x_5427_;
}
}
}
}
v___jp_5383_:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; 
v___x_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5388_, 0, v_val_5387_);
v___x_5389_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5385_, v___y_5384_, v___x_5388_, v___y_5386_);
return v___x_5389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5433_, lean_object* v_a_5434_, lean_object* v___x_5435_, lean_object* v___x_5436_, lean_object* v_x_5437_, lean_object* v___y_5438_){
_start:
{
lean_object* v_res_5439_; 
v_res_5439_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5433_, v_a_5434_, v___x_5435_, v___x_5436_, v_x_5437_);
lean_dec_ref(v___x_5436_);
lean_dec_ref(v___x_5435_);
return v_res_5439_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; 
v___x_5440_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5441_ = lean_unsigned_to_nat(2u);
v___x_5442_ = lean_mk_empty_array_with_capacity(v___x_5441_);
v___x_5443_ = lean_array_push(v___x_5442_, v___x_5440_);
return v___x_5443_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5444_, lean_object* v___x_5445_, lean_object* v_x_5446_){
_start:
{
if (lean_obj_tag(v_x_5446_) == 0)
{
lean_object* v_a_5448_; lean_object* v___x_5450_; uint8_t v_isShared_5451_; uint8_t v_isSharedCheck_5456_; 
lean_dec_ref(v___x_5445_);
lean_dec(v_a_5444_);
v_a_5448_ = lean_ctor_get(v_x_5446_, 0);
v_isSharedCheck_5456_ = !lean_is_exclusive(v_x_5446_);
if (v_isSharedCheck_5456_ == 0)
{
v___x_5450_ = v_x_5446_;
v_isShared_5451_ = v_isSharedCheck_5456_;
goto v_resetjp_5449_;
}
else
{
lean_inc(v_a_5448_);
lean_dec(v_x_5446_);
v___x_5450_ = lean_box(0);
v_isShared_5451_ = v_isSharedCheck_5456_;
goto v_resetjp_5449_;
}
v_resetjp_5449_:
{
lean_object* v___x_5453_; 
if (v_isShared_5451_ == 0)
{
v___x_5453_ = v___x_5450_;
goto v_reusejp_5452_;
}
else
{
lean_object* v_reuseFailAlloc_5455_; 
v_reuseFailAlloc_5455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5455_, 0, v_a_5448_);
v___x_5453_ = v_reuseFailAlloc_5455_;
goto v_reusejp_5452_;
}
v_reusejp_5452_:
{
lean_object* v___x_5454_; 
v___x_5454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5454_, 0, v___x_5453_);
return v___x_5454_;
}
}
}
else
{
lean_object* v_a_5457_; lean_object* v___x_5459_; uint8_t v_isShared_5460_; uint8_t v_isSharedCheck_5480_; 
v_a_5457_ = lean_ctor_get(v_x_5446_, 0);
v_isSharedCheck_5480_ = !lean_is_exclusive(v_x_5446_);
if (v_isSharedCheck_5480_ == 0)
{
v___x_5459_ = v_x_5446_;
v_isShared_5460_ = v_isSharedCheck_5480_;
goto v_resetjp_5458_;
}
else
{
lean_inc(v_a_5457_);
lean_dec(v_x_5446_);
v___x_5459_ = lean_box(0);
v_isShared_5460_ = v_isSharedCheck_5480_;
goto v_resetjp_5458_;
}
v_resetjp_5458_:
{
lean_object* v___x_5461_; lean_object* v___f_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; uint8_t v___x_5466_; lean_object* v_val_5468_; lean_object* v___x_5471_; 
v___x_5461_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5445_);
lean_inc(v_a_5457_);
v___f_5462_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5462_, 0, v_a_5444_);
lean_closure_set(v___f_5462_, 1, v_a_5457_);
lean_closure_set(v___f_5462_, 2, v___x_5445_);
lean_closure_set(v___f_5462_, 3, v___x_5461_);
v___x_5463_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5464_ = lean_array_push(v___x_5463_, v___x_5445_);
v___x_5465_ = lean_unsigned_to_nat(0u);
v___x_5466_ = 0;
v___x_5471_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5457_, v___x_5464_);
if (lean_obj_tag(v___x_5471_) == 0)
{
lean_object* v_a_5472_; lean_object* v___x_5474_; 
v_a_5472_ = lean_ctor_get(v___x_5471_, 0);
lean_inc(v_a_5472_);
lean_dec_ref_known(v___x_5471_, 1);
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 0, v_a_5472_);
v___x_5474_ = v___x_5459_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_a_5472_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
v_val_5468_ = v___x_5474_;
goto v___jp_5467_;
}
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5478_; 
v_a_5476_ = lean_ctor_get(v___x_5471_, 0);
lean_inc(v_a_5476_);
lean_dec_ref_known(v___x_5471_, 1);
if (v_isShared_5460_ == 0)
{
lean_ctor_set_tag(v___x_5459_, 0);
lean_ctor_set(v___x_5459_, 0, v_a_5476_);
v___x_5478_ = v___x_5459_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5479_; 
v_reuseFailAlloc_5479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5479_, 0, v_a_5476_);
v___x_5478_ = v_reuseFailAlloc_5479_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
v_val_5468_ = v___x_5478_;
goto v___jp_5467_;
}
}
v___jp_5467_:
{
lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5469_, 0, v_val_5468_);
v___x_5470_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5465_, v___x_5466_, v___x_5469_, v___f_5462_);
return v___x_5470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5481_, lean_object* v___x_5482_, lean_object* v_x_5483_, lean_object* v___y_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5481_, v___x_5482_, v_x_5483_);
return v_res_5485_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5487_; uint8_t v___x_5488_; uint64_t v___x_5489_; 
v___x_5487_ = 0ULL;
v___x_5488_ = 0;
v___x_5489_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5488_, v___x_5487_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5490_, lean_object* v_args_5491_, lean_object* v_this_5492_){
_start:
{
lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; uint32_t v___x_5497_; uint64_t v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; 
v___x_5494_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5495_, 0, v_f_5490_);
lean_ctor_set(v___x_5495_, 1, v___x_5494_);
v___x_5496_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5497_ = 205;
v___x_5498_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5499_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5499_, 0, v_args_5491_);
v___x_5500_ = lean_unsigned_to_nat(3u);
v___x_5501_ = lean_mk_empty_array_with_capacity(v___x_5500_);
v___x_5502_ = lean_array_push(v___x_5501_, v___x_5495_);
v___x_5503_ = lean_array_push(v___x_5502_, v_this_5492_);
v___x_5504_ = lean_array_push(v___x_5503_, v___x_5499_);
v___x_5505_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5505_, 0, v___x_5504_);
v___x_5506_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5496_, v___x_5497_, v___x_5498_, v___x_5505_, v___x_5494_);
return v___x_5506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5507_, lean_object* v_args_5508_, lean_object* v_this_5509_, lean_object* v___y_5510_){
_start:
{
lean_object* v_res_5511_; 
v_res_5511_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5507_, v_args_5508_, v_this_5509_);
return v_res_5511_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5522_, lean_object* v_a_5523_, lean_object* v_x_5524_){
_start:
{
if (lean_obj_tag(v_x_5524_) == 0)
{
lean_object* v_a_5526_; lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5534_; 
lean_dec(v_a_5523_);
lean_dec_ref(v_req_5522_);
v_a_5526_ = lean_ctor_get(v_x_5524_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v_x_5524_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5528_ = v_x_5524_;
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
else
{
lean_inc(v_a_5526_);
lean_dec(v_x_5524_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v___x_5531_; 
if (v_isShared_5529_ == 0)
{
v___x_5531_ = v___x_5528_;
goto v_reusejp_5530_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5526_);
v___x_5531_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5530_;
}
v_reusejp_5530_:
{
lean_object* v___x_5532_; 
v___x_5532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5532_, 0, v___x_5531_);
return v___x_5532_;
}
}
}
else
{
lean_object* v_a_5535_; lean_object* v_method_5536_; lean_object* v_url_5537_; lean_object* v_headers_5538_; lean_object* v_body_5539_; lean_object* v___y_5541_; lean_object* v___x_5571_; uint8_t v___x_5572_; 
v_a_5535_ = lean_ctor_get(v_x_5524_, 0);
lean_inc(v_a_5535_);
lean_dec_ref_known(v_x_5524_, 1);
v_method_5536_ = lean_ctor_get(v_req_5522_, 0);
lean_inc_ref(v_method_5536_);
v_url_5537_ = lean_ctor_get(v_req_5522_, 1);
lean_inc_ref(v_url_5537_);
v_headers_5538_ = lean_ctor_get(v_req_5522_, 2);
lean_inc_ref(v_headers_5538_);
v_body_5539_ = lean_ctor_get(v_req_5522_, 3);
lean_inc_ref(v_body_5539_);
lean_dec_ref(v_req_5522_);
v___x_5571_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5572_ = lean_string_dec_eq(v_method_5536_, v___x_5571_);
if (v___x_5572_ == 0)
{
lean_object* v___x_5573_; uint8_t v___x_5574_; 
v___x_5573_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5574_ = lean_string_dec_eq(v_method_5536_, v___x_5573_);
if (v___x_5574_ == 0)
{
lean_object* v___x_5575_; 
v___x_5575_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5575_, 0, v_body_5539_);
v___y_5541_ = v___x_5575_;
goto v___jp_5540_;
}
else
{
lean_dec_ref(v_body_5539_);
goto v___jp_5569_;
}
}
else
{
lean_dec_ref(v_body_5539_);
goto v___jp_5569_;
}
v___jp_5540_:
{
lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___f_5546_; size_t v_sz_5547_; size_t v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; uint8_t v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; 
v___x_5542_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5543_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5543_, 0, v_method_5536_);
v___x_5544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5544_, 0, v___x_5542_);
lean_ctor_set(v___x_5544_, 1, v___x_5543_);
v___x_5545_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5546_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5546_, 0, v_a_5523_);
lean_closure_set(v___f_5546_, 1, v___x_5545_);
v_sz_5547_ = lean_array_size(v_headers_5538_);
v___x_5548_ = ((size_t)0ULL);
v___x_5549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5547_, v___x_5548_, v_headers_5538_);
v___x_5550_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5550_, 0, v___x_5549_);
v___x_5551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5551_, 0, v___x_5545_);
lean_ctor_set(v___x_5551_, 1, v___x_5550_);
v___x_5552_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5553_, 0, v___x_5552_);
lean_ctor_set(v___x_5553_, 1, v___y_5541_);
v___x_5554_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5555_, 0, v___x_5553_);
lean_ctor_set(v___x_5555_, 1, v___x_5554_);
v___x_5556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5556_, 0, v___x_5551_);
lean_ctor_set(v___x_5556_, 1, v___x_5555_);
v___x_5557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5544_);
lean_ctor_set(v___x_5557_, 1, v___x_5556_);
v___x_5558_ = l_Lasm_JS_obj(v___x_5557_);
v___x_5559_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5559_, 0, v_url_5537_);
v___x_5560_ = lean_unsigned_to_nat(2u);
v___x_5561_ = lean_mk_empty_array_with_capacity(v___x_5560_);
v___x_5562_ = lean_array_push(v___x_5561_, v___x_5559_);
v___x_5563_ = lean_array_push(v___x_5562_, v___x_5558_);
v___x_5564_ = lean_box(0);
v___x_5565_ = lean_unsigned_to_nat(0u);
v___x_5566_ = 0;
v___x_5567_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5535_, v___x_5563_, v___x_5564_);
v___x_5568_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5565_, v___x_5566_, v___x_5567_, v___f_5546_);
return v___x_5568_;
}
v___jp_5569_:
{
lean_object* v___x_5570_; 
v___x_5570_ = lean_box(0);
v___y_5541_ = v___x_5570_;
goto v___jp_5540_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5576_, lean_object* v_a_5577_, lean_object* v_x_5578_, lean_object* v___y_5579_){
_start:
{
lean_object* v_res_5580_; 
v_res_5580_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5576_, v_a_5577_, v_x_5578_);
return v_res_5580_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5582_, lean_object* v_x_5583_){
_start:
{
if (lean_obj_tag(v_x_5583_) == 0)
{
lean_object* v_a_5585_; lean_object* v___x_5587_; uint8_t v_isShared_5588_; uint8_t v_isSharedCheck_5593_; 
lean_dec_ref(v_req_5582_);
v_a_5585_ = lean_ctor_get(v_x_5583_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v_x_5583_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5587_ = v_x_5583_;
v_isShared_5588_ = v_isSharedCheck_5593_;
goto v_resetjp_5586_;
}
else
{
lean_inc(v_a_5585_);
lean_dec(v_x_5583_);
v___x_5587_ = lean_box(0);
v_isShared_5588_ = v_isSharedCheck_5593_;
goto v_resetjp_5586_;
}
v_resetjp_5586_:
{
lean_object* v___x_5590_; 
if (v_isShared_5588_ == 0)
{
v___x_5590_ = v___x_5587_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5585_);
v___x_5590_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
lean_object* v___x_5591_; 
v___x_5591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5590_);
return v___x_5591_;
}
}
}
else
{
lean_object* v_a_5594_; lean_object* v___x_5596_; uint8_t v_isShared_5597_; uint8_t v_isSharedCheck_5615_; 
v_a_5594_ = lean_ctor_get(v_x_5583_, 0);
v_isSharedCheck_5615_ = !lean_is_exclusive(v_x_5583_);
if (v_isSharedCheck_5615_ == 0)
{
v___x_5596_ = v_x_5583_;
v_isShared_5597_ = v_isSharedCheck_5615_;
goto v_resetjp_5595_;
}
else
{
lean_inc(v_a_5594_);
lean_dec(v_x_5583_);
v___x_5596_ = lean_box(0);
v_isShared_5597_ = v_isSharedCheck_5615_;
goto v_resetjp_5595_;
}
v_resetjp_5595_:
{
lean_object* v___f_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; uint8_t v___x_5601_; lean_object* v_val_5603_; lean_object* v___x_5606_; 
lean_inc(v_a_5594_);
v___f_5598_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5598_, 0, v_req_5582_);
lean_closure_set(v___f_5598_, 1, v_a_5594_);
v___x_5599_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5600_ = lean_unsigned_to_nat(0u);
v___x_5601_ = 0;
v___x_5606_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5594_, v___x_5599_);
if (lean_obj_tag(v___x_5606_) == 0)
{
lean_object* v_a_5607_; lean_object* v___x_5609_; 
v_a_5607_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_a_5607_);
lean_dec_ref_known(v___x_5606_, 1);
if (v_isShared_5597_ == 0)
{
lean_ctor_set(v___x_5596_, 0, v_a_5607_);
v___x_5609_ = v___x_5596_;
goto v_reusejp_5608_;
}
else
{
lean_object* v_reuseFailAlloc_5610_; 
v_reuseFailAlloc_5610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5610_, 0, v_a_5607_);
v___x_5609_ = v_reuseFailAlloc_5610_;
goto v_reusejp_5608_;
}
v_reusejp_5608_:
{
v_val_5603_ = v___x_5609_;
goto v___jp_5602_;
}
}
else
{
lean_object* v_a_5611_; lean_object* v___x_5613_; 
v_a_5611_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_a_5611_);
lean_dec_ref_known(v___x_5606_, 1);
if (v_isShared_5597_ == 0)
{
lean_ctor_set_tag(v___x_5596_, 0);
lean_ctor_set(v___x_5596_, 0, v_a_5611_);
v___x_5613_ = v___x_5596_;
goto v_reusejp_5612_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_a_5611_);
v___x_5613_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5612_;
}
v_reusejp_5612_:
{
v_val_5603_ = v___x_5613_;
goto v___jp_5602_;
}
}
v___jp_5602_:
{
lean_object* v___x_5604_; lean_object* v___x_5605_; 
v___x_5604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5604_, 0, v_val_5603_);
v___x_5605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5600_, v___x_5601_, v___x_5604_, v___f_5598_);
return v___x_5605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5616_, lean_object* v_x_5617_, lean_object* v___y_5618_){
_start:
{
lean_object* v_res_5619_; 
v_res_5619_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5616_, v_x_5617_);
return v_res_5619_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5620_){
_start:
{
lean_object* v___f_5622_; lean_object* v___x_5623_; uint8_t v___x_5624_; lean_object* v_val_5626_; lean_object* v___x_5629_; 
v___f_5622_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5622_, 0, v_req_5620_);
v___x_5623_ = lean_unsigned_to_nat(0u);
v___x_5624_ = 0;
v___x_5629_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5629_) == 0)
{
lean_object* v_a_5630_; lean_object* v___x_5632_; uint8_t v_isShared_5633_; uint8_t v_isSharedCheck_5637_; 
v_a_5630_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5637_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5637_ == 0)
{
v___x_5632_ = v___x_5629_;
v_isShared_5633_ = v_isSharedCheck_5637_;
goto v_resetjp_5631_;
}
else
{
lean_inc(v_a_5630_);
lean_dec(v___x_5629_);
v___x_5632_ = lean_box(0);
v_isShared_5633_ = v_isSharedCheck_5637_;
goto v_resetjp_5631_;
}
v_resetjp_5631_:
{
lean_object* v___x_5635_; 
if (v_isShared_5633_ == 0)
{
lean_ctor_set_tag(v___x_5632_, 1);
v___x_5635_ = v___x_5632_;
goto v_reusejp_5634_;
}
else
{
lean_object* v_reuseFailAlloc_5636_; 
v_reuseFailAlloc_5636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5636_, 0, v_a_5630_);
v___x_5635_ = v_reuseFailAlloc_5636_;
goto v_reusejp_5634_;
}
v_reusejp_5634_:
{
v_val_5626_ = v___x_5635_;
goto v___jp_5625_;
}
}
}
else
{
lean_object* v_a_5638_; lean_object* v___x_5640_; uint8_t v_isShared_5641_; uint8_t v_isSharedCheck_5645_; 
v_a_5638_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5645_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5645_ == 0)
{
v___x_5640_ = v___x_5629_;
v_isShared_5641_ = v_isSharedCheck_5645_;
goto v_resetjp_5639_;
}
else
{
lean_inc(v_a_5638_);
lean_dec(v___x_5629_);
v___x_5640_ = lean_box(0);
v_isShared_5641_ = v_isSharedCheck_5645_;
goto v_resetjp_5639_;
}
v_resetjp_5639_:
{
lean_object* v___x_5643_; 
if (v_isShared_5641_ == 0)
{
lean_ctor_set_tag(v___x_5640_, 0);
v___x_5643_ = v___x_5640_;
goto v_reusejp_5642_;
}
else
{
lean_object* v_reuseFailAlloc_5644_; 
v_reuseFailAlloc_5644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5644_, 0, v_a_5638_);
v___x_5643_ = v_reuseFailAlloc_5644_;
goto v_reusejp_5642_;
}
v_reusejp_5642_:
{
v_val_5626_ = v___x_5643_;
goto v___jp_5625_;
}
}
}
v___jp_5625_:
{
lean_object* v___x_5627_; lean_object* v___x_5628_; 
v___x_5627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5627_, 0, v_val_5626_);
v___x_5628_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5623_, v___x_5624_, v___x_5627_, v___f_5622_);
return v___x_5628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5646_, lean_object* v_a_5647_){
_start:
{
lean_object* v_res_5648_; 
v_res_5648_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5646_);
return v_res_5648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5649_){
_start:
{
if (lean_obj_tag(v_x_5649_) == 0)
{
lean_object* v_a_5651_; lean_object* v___x_5653_; uint8_t v_isShared_5654_; uint8_t v_isSharedCheck_5659_; 
v_a_5651_ = lean_ctor_get(v_x_5649_, 0);
v_isSharedCheck_5659_ = !lean_is_exclusive(v_x_5649_);
if (v_isSharedCheck_5659_ == 0)
{
v___x_5653_ = v_x_5649_;
v_isShared_5654_ = v_isSharedCheck_5659_;
goto v_resetjp_5652_;
}
else
{
lean_inc(v_a_5651_);
lean_dec(v_x_5649_);
v___x_5653_ = lean_box(0);
v_isShared_5654_ = v_isSharedCheck_5659_;
goto v_resetjp_5652_;
}
v_resetjp_5652_:
{
lean_object* v___x_5656_; 
if (v_isShared_5654_ == 0)
{
v___x_5656_ = v___x_5653_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_a_5651_);
v___x_5656_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
lean_object* v___x_5657_; 
v___x_5657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5656_);
return v___x_5657_;
}
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5661_; 
v_a_5660_ = lean_ctor_get(v_x_5649_, 0);
lean_inc(v_a_5660_);
lean_dec_ref_known(v_x_5649_, 1);
v___x_5661_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5660_);
lean_dec(v_a_5660_);
if (lean_obj_tag(v___x_5661_) == 0)
{
lean_object* v_a_5662_; lean_object* v___x_5664_; uint8_t v_isShared_5665_; uint8_t v_isSharedCheck_5671_; 
v_a_5662_ = lean_ctor_get(v___x_5661_, 0);
v_isSharedCheck_5671_ = !lean_is_exclusive(v___x_5661_);
if (v_isSharedCheck_5671_ == 0)
{
v___x_5664_ = v___x_5661_;
v_isShared_5665_ = v_isSharedCheck_5671_;
goto v_resetjp_5663_;
}
else
{
lean_inc(v_a_5662_);
lean_dec(v___x_5661_);
v___x_5664_ = lean_box(0);
v_isShared_5665_ = v_isSharedCheck_5671_;
goto v_resetjp_5663_;
}
v_resetjp_5663_:
{
lean_object* v___x_5666_; lean_object* v___x_5668_; 
v___x_5666_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5666_, 0, v_a_5662_);
if (v_isShared_5665_ == 0)
{
lean_ctor_set(v___x_5664_, 0, v___x_5666_);
v___x_5668_ = v___x_5664_;
goto v_reusejp_5667_;
}
else
{
lean_object* v_reuseFailAlloc_5670_; 
v_reuseFailAlloc_5670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5670_, 0, v___x_5666_);
v___x_5668_ = v_reuseFailAlloc_5670_;
goto v_reusejp_5667_;
}
v_reusejp_5667_:
{
lean_object* v___x_5669_; 
v___x_5669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5669_, 0, v___x_5668_);
return v___x_5669_;
}
}
}
else
{
lean_object* v_a_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5680_; 
v_a_5672_ = lean_ctor_get(v___x_5661_, 0);
v_isSharedCheck_5680_ = !lean_is_exclusive(v___x_5661_);
if (v_isSharedCheck_5680_ == 0)
{
v___x_5674_ = v___x_5661_;
v_isShared_5675_ = v_isSharedCheck_5680_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_a_5672_);
lean_dec(v___x_5661_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5680_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___x_5677_; 
if (v_isShared_5675_ == 0)
{
v___x_5677_ = v___x_5674_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v_a_5672_);
v___x_5677_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
lean_object* v___x_5678_; 
v___x_5678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5678_, 0, v___x_5677_);
return v___x_5678_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5681_, lean_object* v___y_5682_){
_start:
{
lean_object* v_res_5683_; 
v_res_5683_ = l_Lasm_Fetch_fetch___lam__0(v_x_5681_);
return v_res_5683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5689_){
_start:
{
if (lean_obj_tag(v_x_5689_) == 0)
{
lean_object* v___x_5690_; 
v___x_5690_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5690_;
}
else
{
lean_object* v_val_5691_; 
v_val_5691_ = lean_ctor_get(v_x_5689_, 0);
lean_inc(v_val_5691_);
return v_val_5691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5692_){
_start:
{
lean_object* v_res_5693_; 
v_res_5693_ = l_Lasm_Fetch_fetch___lam__1(v_x_5692_);
lean_dec(v_x_5692_);
return v_res_5693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5694_, lean_object* v___f_5695_, uint8_t v___x_5696_, lean_object* v___f_5697_, lean_object* v_x_5698_){
_start:
{
if (lean_obj_tag(v_x_5698_) == 0)
{
lean_object* v_a_5700_; lean_object* v___x_5702_; uint8_t v_isShared_5703_; uint8_t v_isSharedCheck_5708_; 
lean_dec_ref(v___f_5697_);
lean_dec_ref(v___f_5695_);
v_a_5700_ = lean_ctor_get(v_x_5698_, 0);
v_isSharedCheck_5708_ = !lean_is_exclusive(v_x_5698_);
if (v_isSharedCheck_5708_ == 0)
{
v___x_5702_ = v_x_5698_;
v_isShared_5703_ = v_isSharedCheck_5708_;
goto v_resetjp_5701_;
}
else
{
lean_inc(v_a_5700_);
lean_dec(v_x_5698_);
v___x_5702_ = lean_box(0);
v_isShared_5703_ = v_isSharedCheck_5708_;
goto v_resetjp_5701_;
}
v_resetjp_5701_:
{
lean_object* v___x_5705_; 
if (v_isShared_5703_ == 0)
{
v___x_5705_ = v___x_5702_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v_a_5700_);
v___x_5705_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
lean_object* v___x_5706_; 
v___x_5706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5705_);
return v___x_5706_;
}
}
}
else
{
lean_object* v___x_5709_; lean_object* v___x_5710_; uint8_t v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; 
lean_dec_ref_known(v_x_5698_, 1);
v___x_5709_ = lean_io_promise_result_opt(v_a_5694_);
v___x_5710_ = lean_unsigned_to_nat(0u);
v___x_5711_ = 1;
v___x_5712_ = lean_task_map(v___f_5695_, v___x_5709_, v___x_5710_, v___x_5711_);
v___x_5713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5712_);
v___x_5714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5710_, v___x_5696_, v___x_5713_, v___f_5697_);
return v___x_5714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5715_, lean_object* v___f_5716_, lean_object* v___x_5717_, lean_object* v___f_5718_, lean_object* v_x_5719_, lean_object* v___y_5720_){
_start:
{
uint8_t v___x_1064__boxed_5721_; lean_object* v_res_5722_; 
v___x_1064__boxed_5721_ = lean_unbox(v___x_5717_);
v_res_5722_ = l_Lasm_Fetch_fetch___lam__2(v_a_5715_, v___f_5716_, v___x_1064__boxed_5721_, v___f_5718_, v_x_5719_);
lean_dec(v_a_5715_);
return v_res_5722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5723_, lean_object* v___f_5724_, uint8_t v___x_5725_, lean_object* v___f_5726_, lean_object* v_options_5727_, lean_object* v_x_5728_){
_start:
{
if (lean_obj_tag(v_x_5728_) == 0)
{
lean_object* v_a_5730_; lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5738_; 
lean_dec_ref(v___f_5726_);
lean_dec_ref(v___f_5724_);
v_a_5730_ = lean_ctor_get(v_x_5728_, 0);
v_isSharedCheck_5738_ = !lean_is_exclusive(v_x_5728_);
if (v_isSharedCheck_5738_ == 0)
{
v___x_5732_ = v_x_5728_;
v_isShared_5733_ = v_isSharedCheck_5738_;
goto v_resetjp_5731_;
}
else
{
lean_inc(v_a_5730_);
lean_dec(v_x_5728_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5738_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
lean_object* v___x_5735_; 
if (v_isShared_5733_ == 0)
{
v___x_5735_ = v___x_5732_;
goto v_reusejp_5734_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v_a_5730_);
v___x_5735_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5734_;
}
v_reusejp_5734_:
{
lean_object* v___x_5736_; 
v___x_5736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5736_, 0, v___x_5735_);
return v___x_5736_;
}
}
}
else
{
lean_object* v_a_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5769_; 
v_a_5739_ = lean_ctor_get(v_x_5728_, 0);
v_isSharedCheck_5769_ = !lean_is_exclusive(v_x_5728_);
if (v_isSharedCheck_5769_ == 0)
{
v___x_5741_ = v_x_5728_;
v_isShared_5742_ = v_isSharedCheck_5769_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_a_5739_);
lean_dec(v_x_5728_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5769_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v_method_5743_; lean_object* v_url_5744_; lean_object* v_headers_5745_; lean_object* v_body_5746_; lean_object* v___x_5747_; lean_object* v___f_5748_; uint8_t v___y_5750_; lean_object* v___y_5751_; lean_object* v_val_5752_; lean_object* v___y_5756_; 
v_method_5743_ = lean_ctor_get(v_req_5723_, 0);
v_url_5744_ = lean_ctor_get(v_req_5723_, 1);
v_headers_5745_ = lean_ctor_get(v_req_5723_, 2);
v_body_5746_ = lean_ctor_get(v_req_5723_, 3);
v___x_5747_ = lean_box(v___x_5725_);
lean_inc(v_a_5739_);
v___f_5748_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5748_, 0, v_a_5739_);
lean_closure_set(v___f_5748_, 1, v___f_5724_);
lean_closure_set(v___f_5748_, 2, v___x_5747_);
lean_closure_set(v___f_5748_, 3, v___f_5726_);
if (lean_obj_tag(v_options_5727_) == 0)
{
lean_object* v___x_5767_; 
v___x_5767_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5756_ = v___x_5767_;
goto v___jp_5755_;
}
else
{
lean_object* v_val_5768_; 
v_val_5768_ = lean_ctor_get(v_options_5727_, 0);
v___y_5756_ = v_val_5768_;
goto v___jp_5755_;
}
v___jp_5749_:
{
lean_object* v___x_5753_; lean_object* v___x_5754_; 
v___x_5753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5753_, 0, v_val_5752_);
v___x_5754_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5751_, v___y_5750_, v___x_5753_, v___f_5748_);
return v___x_5754_;
}
v___jp_5755_:
{
lean_object* v___x_5757_; lean_object* v___x_5758_; 
v___x_5757_ = lean_unsigned_to_nat(0u);
v___x_5758_ = lasm_fetch_send(v_a_5739_, v_method_5743_, v_url_5744_, v_headers_5745_, v_body_5746_, v___y_5756_);
lean_dec(v_a_5739_);
if (lean_obj_tag(v___x_5758_) == 0)
{
lean_object* v_a_5759_; lean_object* v___x_5761_; 
v_a_5759_ = lean_ctor_get(v___x_5758_, 0);
lean_inc(v_a_5759_);
lean_dec_ref_known(v___x_5758_, 1);
if (v_isShared_5742_ == 0)
{
lean_ctor_set(v___x_5741_, 0, v_a_5759_);
v___x_5761_ = v___x_5741_;
goto v_reusejp_5760_;
}
else
{
lean_object* v_reuseFailAlloc_5762_; 
v_reuseFailAlloc_5762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5762_, 0, v_a_5759_);
v___x_5761_ = v_reuseFailAlloc_5762_;
goto v_reusejp_5760_;
}
v_reusejp_5760_:
{
v___y_5750_ = v___x_5725_;
v___y_5751_ = v___x_5757_;
v_val_5752_ = v___x_5761_;
goto v___jp_5749_;
}
}
else
{
lean_object* v_a_5763_; lean_object* v___x_5765_; 
v_a_5763_ = lean_ctor_get(v___x_5758_, 0);
lean_inc(v_a_5763_);
lean_dec_ref_known(v___x_5758_, 1);
if (v_isShared_5742_ == 0)
{
lean_ctor_set_tag(v___x_5741_, 0);
lean_ctor_set(v___x_5741_, 0, v_a_5763_);
v___x_5765_ = v___x_5741_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v_a_5763_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
v___y_5750_ = v___x_5725_;
v___y_5751_ = v___x_5757_;
v_val_5752_ = v___x_5765_;
goto v___jp_5749_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5770_, lean_object* v___f_5771_, lean_object* v___x_5772_, lean_object* v___f_5773_, lean_object* v_options_5774_, lean_object* v_x_5775_, lean_object* v___y_5776_){
_start:
{
uint8_t v___x_1113__boxed_5777_; lean_object* v_res_5778_; 
v___x_1113__boxed_5777_ = lean_unbox(v___x_5772_);
v_res_5778_ = l_Lasm_Fetch_fetch___lam__3(v_req_5770_, v___f_5771_, v___x_1113__boxed_5777_, v___f_5773_, v_options_5774_, v_x_5775_);
lean_dec(v_options_5774_);
lean_dec_ref(v_req_5770_);
return v_res_5778_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5779_; uint32_t v___x_5780_; 
v___x_5779_ = lean_box(0);
v___x_5780_ = lasm_fetch_platform(v___x_5779_);
return v___x_5780_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5781_; uint32_t v___x_5782_; uint8_t v___x_5783_; 
v___x_5781_ = 0;
v___x_5782_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5783_ = lean_uint32_dec_eq(v___x_5782_, v___x_5781_);
return v___x_5783_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5786_; uint32_t v___x_5787_; uint8_t v___x_5788_; 
v___x_5786_ = 2;
v___x_5787_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5788_ = lean_uint32_dec_eq(v___x_5787_, v___x_5786_);
return v___x_5788_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5789_; uint32_t v___x_5790_; uint8_t v___x_5791_; 
v___x_5789_ = 4;
v___x_5790_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5791_ = lean_uint32_dec_eq(v___x_5790_, v___x_5789_);
return v___x_5791_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5792_; uint32_t v___x_5793_; uint8_t v___x_5794_; 
v___x_5792_ = 1;
v___x_5793_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5794_ = lean_uint32_dec_eq(v___x_5793_, v___x_5792_);
return v___x_5794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5809_, lean_object* v_options_5810_){
_start:
{
uint8_t v___x_5812_; 
v___x_5812_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_5812_ == 0)
{
lean_object* v___f_5813_; lean_object* v___f_5814_; lean_object* v___x_5815_; lean_object* v___f_5816_; uint8_t v___x_5823_; 
v___f_5813_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_5814_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_5815_ = lean_box(v___x_5812_);
v___f_5816_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_5816_, 0, v_req_5809_);
lean_closure_set(v___f_5816_, 1, v___f_5814_);
lean_closure_set(v___f_5816_, 2, v___x_5815_);
lean_closure_set(v___f_5816_, 3, v___f_5813_);
lean_closure_set(v___f_5816_, 4, v_options_5810_);
v___x_5823_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_5823_ == 0)
{
uint8_t v___x_5824_; 
v___x_5824_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_5824_ == 0)
{
uint8_t v___x_5825_; 
lean_dec_ref(v___f_5816_);
v___x_5825_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_5825_ == 0)
{
lean_object* v___x_5826_; 
v___x_5826_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_5826_;
}
else
{
lean_object* v___x_5827_; 
v___x_5827_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_5827_;
}
}
else
{
goto v___jp_5817_;
}
}
else
{
goto v___jp_5817_;
}
v___jp_5817_:
{
lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; 
v___x_5818_ = lean_unsigned_to_nat(0u);
v___x_5819_ = lean_io_promise_new();
v___x_5820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5820_, 0, v___x_5819_);
v___x_5821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
v___x_5822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5818_, v___x_5812_, v___x_5821_, v___f_5816_);
return v___x_5822_;
}
}
else
{
lean_object* v___x_5828_; 
lean_dec(v_options_5810_);
v___x_5828_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5809_);
return v___x_5828_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_5829_, lean_object* v_options_5830_, lean_object* v_a_5831_){
_start:
{
lean_object* v_res_5832_; 
v_res_5832_ = l_Lasm_Fetch_fetch(v_req_5829_, v_options_5830_);
return v_res_5832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_5833_, lean_object* v_headers_5834_, lean_object* v_options_5835_){
_start:
{
lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___f_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; 
v___x_5837_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5838_ = l_ByteArray_empty;
v___f_5839_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5840_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5840_, 0, v___x_5837_);
lean_ctor_set(v___x_5840_, 1, v_url_5833_);
lean_ctor_set(v___x_5840_, 2, v_headers_5834_);
lean_ctor_set(v___x_5840_, 3, v___x_5838_);
lean_ctor_set(v___x_5840_, 4, v___f_5839_);
v___x_5841_ = l_Lasm_Fetch_fetch(v___x_5840_, v_options_5835_);
return v___x_5841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_5842_, lean_object* v_headers_5843_, lean_object* v_options_5844_, lean_object* v_a_5845_){
_start:
{
lean_object* v_res_5846_; 
v_res_5846_ = l_Lasm_Fetch_get(v_url_5842_, v_headers_5843_, v_options_5844_);
return v_res_5846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_5848_, lean_object* v_body_5849_, lean_object* v_contentType_5850_, lean_object* v_headers_5851_, lean_object* v_options_5852_){
_start:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___f_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; 
v___x_5854_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_5855_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_5856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5856_, 0, v___x_5855_);
lean_ctor_set(v___x_5856_, 1, v_contentType_5850_);
v___x_5857_ = lean_unsigned_to_nat(1u);
v___x_5858_ = lean_mk_empty_array_with_capacity(v___x_5857_);
v___x_5859_ = lean_array_push(v___x_5858_, v___x_5856_);
v___x_5860_ = l_Array_append___redArg(v___x_5859_, v_headers_5851_);
v___f_5861_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5862_, 0, v___x_5854_);
lean_ctor_set(v___x_5862_, 1, v_url_5848_);
lean_ctor_set(v___x_5862_, 2, v___x_5860_);
lean_ctor_set(v___x_5862_, 3, v_body_5849_);
lean_ctor_set(v___x_5862_, 4, v___f_5861_);
v___x_5863_ = l_Lasm_Fetch_fetch(v___x_5862_, v_options_5852_);
return v___x_5863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_5864_, lean_object* v_body_5865_, lean_object* v_contentType_5866_, lean_object* v_headers_5867_, lean_object* v_options_5868_, lean_object* v_a_5869_){
_start:
{
lean_object* v_res_5870_; 
v_res_5870_ = l_Lasm_Fetch_post(v_url_5864_, v_body_5865_, v_contentType_5866_, v_headers_5867_, v_options_5868_);
lean_dec_ref(v_headers_5867_);
return v_res_5870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_5871_){
_start:
{
lean_object* v_body_5872_; uint8_t v___x_5873_; 
v_body_5872_ = lean_ctor_get(v_r_5871_, 1);
lean_inc_ref(v_body_5872_);
lean_dec_ref(v_r_5871_);
v___x_5873_ = lean_string_validate_utf8(v_body_5872_);
if (v___x_5873_ == 0)
{
lean_object* v___x_5874_; 
lean_dec_ref(v_body_5872_);
v___x_5874_ = lean_box(0);
return v___x_5874_;
}
else
{
lean_object* v___x_5875_; lean_object* v___x_5876_; 
v___x_5875_ = lean_string_from_utf8_unchecked(v_body_5872_);
v___x_5876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5876_, 0, v___x_5875_);
return v___x_5876_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_5877_, lean_object* v_name_5878_){
_start:
{
lean_object* v_headers_5879_; lean_object* v_n_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; size_t v_sz_5883_; size_t v___x_5884_; lean_object* v___x_5885_; lean_object* v_fst_5886_; 
v_headers_5879_ = lean_ctor_get(v_r_5877_, 0);
v_n_5880_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_5878_);
v___x_5881_ = lean_box(0);
v___x_5882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5883_ = lean_array_size(v_headers_5879_);
v___x_5884_ = ((size_t)0ULL);
v___x_5885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_5880_, v_headers_5879_, v_sz_5883_, v___x_5884_, v___x_5882_);
lean_dec_ref(v_n_5880_);
v_fst_5886_ = lean_ctor_get(v___x_5885_, 0);
lean_inc(v_fst_5886_);
lean_dec_ref(v___x_5885_);
if (lean_obj_tag(v_fst_5886_) == 0)
{
return v___x_5881_;
}
else
{
lean_object* v_val_5887_; 
v_val_5887_ = lean_ctor_get(v_fst_5886_, 0);
lean_inc(v_val_5887_);
lean_dec_ref_known(v_fst_5886_, 1);
if (lean_obj_tag(v_val_5887_) == 0)
{
return v___x_5881_;
}
else
{
lean_object* v_val_5888_; lean_object* v___x_5890_; uint8_t v_isShared_5891_; uint8_t v_isSharedCheck_5896_; 
v_val_5888_ = lean_ctor_get(v_val_5887_, 0);
v_isSharedCheck_5896_ = !lean_is_exclusive(v_val_5887_);
if (v_isSharedCheck_5896_ == 0)
{
v___x_5890_ = v_val_5887_;
v_isShared_5891_ = v_isSharedCheck_5896_;
goto v_resetjp_5889_;
}
else
{
lean_inc(v_val_5888_);
lean_dec(v_val_5887_);
v___x_5890_ = lean_box(0);
v_isShared_5891_ = v_isSharedCheck_5896_;
goto v_resetjp_5889_;
}
v_resetjp_5889_:
{
lean_object* v_snd_5892_; lean_object* v___x_5894_; 
v_snd_5892_ = lean_ctor_get(v_val_5888_, 1);
lean_inc(v_snd_5892_);
lean_dec(v_val_5888_);
if (v_isShared_5891_ == 0)
{
lean_ctor_set(v___x_5890_, 0, v_snd_5892_);
v___x_5894_ = v___x_5890_;
goto v_reusejp_5893_;
}
else
{
lean_object* v_reuseFailAlloc_5895_; 
v_reuseFailAlloc_5895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5895_, 0, v_snd_5892_);
v___x_5894_ = v_reuseFailAlloc_5895_;
goto v_reusejp_5893_;
}
v_reusejp_5893_:
{
return v___x_5894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_5897_, lean_object* v_name_5898_){
_start:
{
lean_object* v_res_5899_; 
v_res_5899_ = l_Lasm_Fetch_Response_header_x3f(v_r_5897_, v_name_5898_);
lean_dec_ref(v_r_5897_);
return v_res_5899_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_5900_){
_start:
{
if (lean_obj_tag(v_x_5900_) == 0)
{
lean_object* v_a_5901_; lean_object* v___x_5902_; 
v_a_5901_ = lean_ctor_get(v_x_5900_, 0);
lean_inc(v_a_5901_);
lean_dec_ref_known(v_x_5900_, 1);
v___x_5902_ = lean_task_pure(v_a_5901_);
return v___x_5902_;
}
else
{
lean_object* v_a_5903_; 
v_a_5903_ = lean_ctor_get(v_x_5900_, 0);
lean_inc_ref(v_a_5903_);
lean_dec_ref_known(v_x_5900_, 1);
return v_a_5903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_5904_){
_start:
{
if (lean_obj_tag(v_x_5904_) == 0)
{
lean_object* v_a_5905_; lean_object* v___x_5906_; 
v_a_5905_ = lean_ctor_get(v_x_5904_, 0);
lean_inc(v_a_5905_);
lean_dec_ref_known(v_x_5904_, 1);
v___x_5906_ = lean_task_pure(v_a_5905_);
return v___x_5906_;
}
else
{
lean_object* v_a_5907_; 
v_a_5907_ = lean_ctor_get(v_x_5904_, 0);
lean_inc_ref(v_a_5907_);
lean_dec_ref_known(v_x_5904_, 1);
return v_a_5907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_5908_){
_start:
{
lean_object* v_val_5911_; lean_object* v___x_5913_; 
v___x_5913_ = lasm_fetch_write(v_chunk_5908_);
if (lean_obj_tag(v___x_5913_) == 0)
{
lean_object* v_a_5914_; lean_object* v___x_5916_; uint8_t v_isShared_5917_; uint8_t v_isSharedCheck_5921_; 
v_a_5914_ = lean_ctor_get(v___x_5913_, 0);
v_isSharedCheck_5921_ = !lean_is_exclusive(v___x_5913_);
if (v_isSharedCheck_5921_ == 0)
{
v___x_5916_ = v___x_5913_;
v_isShared_5917_ = v_isSharedCheck_5921_;
goto v_resetjp_5915_;
}
else
{
lean_inc(v_a_5914_);
lean_dec(v___x_5913_);
v___x_5916_ = lean_box(0);
v_isShared_5917_ = v_isSharedCheck_5921_;
goto v_resetjp_5915_;
}
v_resetjp_5915_:
{
lean_object* v___x_5919_; 
if (v_isShared_5917_ == 0)
{
lean_ctor_set_tag(v___x_5916_, 1);
v___x_5919_ = v___x_5916_;
goto v_reusejp_5918_;
}
else
{
lean_object* v_reuseFailAlloc_5920_; 
v_reuseFailAlloc_5920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5920_, 0, v_a_5914_);
v___x_5919_ = v_reuseFailAlloc_5920_;
goto v_reusejp_5918_;
}
v_reusejp_5918_:
{
v_val_5911_ = v___x_5919_;
goto v___jp_5910_;
}
}
}
else
{
lean_object* v_a_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5929_; 
v_a_5922_ = lean_ctor_get(v___x_5913_, 0);
v_isSharedCheck_5929_ = !lean_is_exclusive(v___x_5913_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5924_ = v___x_5913_;
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_a_5922_);
lean_dec(v___x_5913_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5927_; 
if (v_isShared_5925_ == 0)
{
lean_ctor_set_tag(v___x_5924_, 0);
v___x_5927_ = v___x_5924_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v_a_5922_);
v___x_5927_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
v_val_5911_ = v___x_5927_;
goto v___jp_5910_;
}
}
}
v___jp_5910_:
{
lean_object* v___x_5912_; 
v___x_5912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5912_, 0, v_val_5911_);
return v___x_5912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_5930_, lean_object* v___y_5931_){
_start:
{
lean_object* v_res_5932_; 
v_res_5932_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_5930_);
lean_dec_ref(v_chunk_5930_);
return v_res_5932_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_5933_){
_start:
{
if (lean_obj_tag(v_x_5933_) == 0)
{
lean_object* v_a_5934_; lean_object* v___x_5935_; 
v_a_5934_ = lean_ctor_get(v_x_5933_, 0);
lean_inc(v_a_5934_);
lean_dec_ref_known(v_x_5933_, 1);
v___x_5935_ = lean_task_pure(v_a_5934_);
return v___x_5935_;
}
else
{
lean_object* v_a_5936_; 
v_a_5936_ = lean_ctor_get(v_x_5933_, 0);
lean_inc_ref(v_a_5936_);
lean_dec_ref_known(v_x_5933_, 1);
return v_a_5936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_5937_){
_start:
{
lean_object* v___y_5940_; 
if (lean_obj_tag(v_x_5937_) == 0)
{
lean_object* v_a_5943_; lean_object* v___x_5945_; uint8_t v_isShared_5946_; uint8_t v_isSharedCheck_5951_; 
v_a_5943_ = lean_ctor_get(v_x_5937_, 0);
v_isSharedCheck_5951_ = !lean_is_exclusive(v_x_5937_);
if (v_isSharedCheck_5951_ == 0)
{
v___x_5945_ = v_x_5937_;
v_isShared_5946_ = v_isSharedCheck_5951_;
goto v_resetjp_5944_;
}
else
{
lean_inc(v_a_5943_);
lean_dec(v_x_5937_);
v___x_5945_ = lean_box(0);
v_isShared_5946_ = v_isSharedCheck_5951_;
goto v_resetjp_5944_;
}
v_resetjp_5944_:
{
lean_object* v___x_5948_; 
if (v_isShared_5946_ == 0)
{
v___x_5948_ = v___x_5945_;
goto v_reusejp_5947_;
}
else
{
lean_object* v_reuseFailAlloc_5950_; 
v_reuseFailAlloc_5950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5950_, 0, v_a_5943_);
v___x_5948_ = v_reuseFailAlloc_5950_;
goto v_reusejp_5947_;
}
v_reusejp_5947_:
{
lean_object* v___x_5949_; 
v___x_5949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5948_);
return v___x_5949_;
}
}
}
else
{
lean_object* v_a_5952_; uint8_t v___x_5953_; 
v_a_5952_ = lean_ctor_get(v_x_5937_, 0);
lean_inc(v_a_5952_);
lean_dec_ref_known(v_x_5937_, 1);
v___x_5953_ = l_ByteArray_isEmpty(v_a_5952_);
if (v___x_5953_ == 0)
{
lean_object* v___x_5954_; 
v___x_5954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5954_, 0, v_a_5952_);
v___y_5940_ = v___x_5954_;
goto v___jp_5939_;
}
else
{
lean_object* v___x_5955_; 
lean_dec(v_a_5952_);
v___x_5955_ = lean_box(0);
v___y_5940_ = v___x_5955_;
goto v___jp_5939_;
}
}
v___jp_5939_:
{
lean_object* v___x_5941_; lean_object* v___x_5942_; 
v___x_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5941_, 0, v___y_5940_);
v___x_5942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5942_, 0, v___x_5941_);
return v___x_5942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_5956_, lean_object* v___y_5957_){
_start:
{
lean_object* v_res_5958_; 
v_res_5958_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_5956_);
return v_res_5958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_5959_, uint32_t v___x_5960_){
_start:
{
lean_object* v___x_5962_; uint8_t v___x_5963_; lean_object* v_val_5965_; lean_object* v___x_5968_; 
v___x_5962_ = lean_unsigned_to_nat(0u);
v___x_5963_ = 0;
v___x_5968_ = lasm_fetch_read(v___x_5960_);
if (lean_obj_tag(v___x_5968_) == 0)
{
lean_object* v_a_5969_; lean_object* v___x_5971_; uint8_t v_isShared_5972_; uint8_t v_isSharedCheck_5976_; 
v_a_5969_ = lean_ctor_get(v___x_5968_, 0);
v_isSharedCheck_5976_ = !lean_is_exclusive(v___x_5968_);
if (v_isSharedCheck_5976_ == 0)
{
v___x_5971_ = v___x_5968_;
v_isShared_5972_ = v_isSharedCheck_5976_;
goto v_resetjp_5970_;
}
else
{
lean_inc(v_a_5969_);
lean_dec(v___x_5968_);
v___x_5971_ = lean_box(0);
v_isShared_5972_ = v_isSharedCheck_5976_;
goto v_resetjp_5970_;
}
v_resetjp_5970_:
{
lean_object* v___x_5974_; 
if (v_isShared_5972_ == 0)
{
lean_ctor_set_tag(v___x_5971_, 1);
v___x_5974_ = v___x_5971_;
goto v_reusejp_5973_;
}
else
{
lean_object* v_reuseFailAlloc_5975_; 
v_reuseFailAlloc_5975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5975_, 0, v_a_5969_);
v___x_5974_ = v_reuseFailAlloc_5975_;
goto v_reusejp_5973_;
}
v_reusejp_5973_:
{
v_val_5965_ = v___x_5974_;
goto v___jp_5964_;
}
}
}
else
{
lean_object* v_a_5977_; lean_object* v___x_5979_; uint8_t v_isShared_5980_; uint8_t v_isSharedCheck_5984_; 
v_a_5977_ = lean_ctor_get(v___x_5968_, 0);
v_isSharedCheck_5984_ = !lean_is_exclusive(v___x_5968_);
if (v_isSharedCheck_5984_ == 0)
{
v___x_5979_ = v___x_5968_;
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
else
{
lean_inc(v_a_5977_);
lean_dec(v___x_5968_);
v___x_5979_ = lean_box(0);
v_isShared_5980_ = v_isSharedCheck_5984_;
goto v_resetjp_5978_;
}
v_resetjp_5978_:
{
lean_object* v___x_5982_; 
if (v_isShared_5980_ == 0)
{
lean_ctor_set_tag(v___x_5979_, 0);
v___x_5982_ = v___x_5979_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v_a_5977_);
v___x_5982_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
v_val_5965_ = v___x_5982_;
goto v___jp_5964_;
}
}
}
v___jp_5964_:
{
lean_object* v___x_5966_; lean_object* v___x_5967_; 
v___x_5966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5966_, 0, v_val_5965_);
v___x_5967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5962_, v___x_5963_, v___x_5966_, v___f_5959_);
return v___x_5967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_5985_, lean_object* v___x_5986_, lean_object* v___y_5987_){
_start:
{
uint32_t v___x_2044__boxed_5988_; lean_object* v_res_5989_; 
v___x_2044__boxed_5988_ = lean_unbox_uint32(v___x_5986_);
lean_dec(v___x_5986_);
v_res_5989_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_5985_, v___x_2044__boxed_5988_);
return v_res_5989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_5990_, lean_object* v_req_5991_){
_start:
{
lean_object* v___x_5993_; 
v___x_5993_ = l_Lasm_Fetch_respond(v_handler_5990_, v_req_5991_);
return v___x_5993_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_5994_, lean_object* v_req_5995_, lean_object* v___y_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_5994_, v_req_5995_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_5998_, lean_object* v___f_5999_){
_start:
{
lean_object* v___x_6001_; 
v___x_6001_ = lean_apply_2(v_val_5998_, v___f_5999_, lean_box(0));
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6002_, lean_object* v___f_6003_, lean_object* v___y_6004_){
_start:
{
lean_object* v_res_6005_; 
v_res_6005_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6002_, v___f_6003_);
return v_res_6005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6006_){
_start:
{
lean_object* v___x_6008_; 
v___x_6008_ = l_Lasm_Fetch_Request_readAll(v___x_6006_);
return v___x_6008_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6009_, lean_object* v___y_6010_){
_start:
{
lean_object* v_res_6011_; 
v_res_6011_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6009_);
return v_res_6011_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6017_; lean_object* v___x_6018_; 
v___x_6017_ = 65536;
v___x_6018_ = lean_box_uint32(v___x_6017_);
return v___x_6018_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6019_; lean_object* v___x_6020_; lean_object* v___f_6021_; 
v___f_6019_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6020_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6021_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6021_, 0, v___f_6019_);
lean_closure_set(v___f_6021_, 1, v___x_6020_);
return v___f_6021_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6022_, lean_object* v_options_6023_){
_start:
{
lean_object* v___f_6025_; lean_object* v___f_6026_; lean_object* v___f_6027_; lean_object* v___f_6028_; lean_object* v___x_6029_; 
v___f_6025_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6026_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6027_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6028_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6029_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6029_) == 0)
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6100_; 
v_a_6030_ = lean_ctor_get(v___x_6029_, 0);
v_isSharedCheck_6100_ = !lean_is_exclusive(v___x_6029_);
if (v_isSharedCheck_6100_ == 0)
{
v___x_6032_ = v___x_6029_;
v_isShared_6033_ = v_isSharedCheck_6100_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6029_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6100_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v_snd_6034_; lean_object* v_fst_6035_; lean_object* v_fst_6036_; lean_object* v_snd_6037_; lean_object* v___f_6038_; lean_object* v___x_6039_; lean_object* v_req_6041_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; uint8_t v___x_6082_; 
v_snd_6034_ = lean_ctor_get(v_a_6030_, 1);
lean_inc(v_snd_6034_);
v_fst_6035_ = lean_ctor_get(v_a_6030_, 0);
lean_inc_n(v_fst_6035_, 2);
lean_dec(v_a_6030_);
v_fst_6036_ = lean_ctor_get(v_snd_6034_, 0);
lean_inc_n(v_fst_6036_, 2);
v_snd_6037_ = lean_ctor_get(v_snd_6034_, 1);
lean_inc_n(v_snd_6037_, 2);
lean_dec(v_snd_6034_);
v___f_6038_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6039_ = l_ByteArray_empty;
v___x_6079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6079_, 0, v_fst_6035_);
lean_ctor_set(v___x_6079_, 1, v_fst_6036_);
lean_ctor_set(v___x_6079_, 2, v_snd_6037_);
lean_ctor_set(v___x_6079_, 3, v___x_6039_);
lean_ctor_set(v___x_6079_, 4, v___f_6038_);
lean_inc_ref(v___x_6079_);
v___x_6080_ = l_Lasm_Fetch_Request_path(v___x_6079_);
v___x_6081_ = lean_apply_1(v_options_6023_, v___x_6080_);
v___x_6082_ = lean_unbox(v___x_6081_);
if (v___x_6082_ == 0)
{
lean_object* v___f_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; uint8_t v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; 
v___f_6083_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6083_, 0, v___x_6079_);
v___x_6084_ = lean_unsigned_to_nat(0u);
v___x_6085_ = lean_io_as_task(v___f_6083_, v___x_6084_);
v___x_6086_ = 1;
v___x_6087_ = lean_task_bind(v___x_6085_, v___f_6025_, v___x_6084_, v___x_6086_);
v___x_6088_ = lean_task_get_own(v___x_6087_);
if (lean_obj_tag(v___x_6088_) == 0)
{
lean_object* v_a_6089_; lean_object* v___x_6091_; uint8_t v_isShared_6092_; uint8_t v_isSharedCheck_6096_; 
lean_dec(v_snd_6037_);
lean_dec(v_fst_6036_);
lean_dec(v_fst_6035_);
lean_del_object(v___x_6032_);
lean_dec_ref(v_handler_6022_);
v_a_6089_ = lean_ctor_get(v___x_6088_, 0);
v_isSharedCheck_6096_ = !lean_is_exclusive(v___x_6088_);
if (v_isSharedCheck_6096_ == 0)
{
v___x_6091_ = v___x_6088_;
v_isShared_6092_ = v_isSharedCheck_6096_;
goto v_resetjp_6090_;
}
else
{
lean_inc(v_a_6089_);
lean_dec(v___x_6088_);
v___x_6091_ = lean_box(0);
v_isShared_6092_ = v_isSharedCheck_6096_;
goto v_resetjp_6090_;
}
v_resetjp_6090_:
{
lean_object* v___x_6094_; 
if (v_isShared_6092_ == 0)
{
lean_ctor_set_tag(v___x_6091_, 1);
v___x_6094_ = v___x_6091_;
goto v_reusejp_6093_;
}
else
{
lean_object* v_reuseFailAlloc_6095_; 
v_reuseFailAlloc_6095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6095_, 0, v_a_6089_);
v___x_6094_ = v_reuseFailAlloc_6095_;
goto v_reusejp_6093_;
}
v_reusejp_6093_:
{
return v___x_6094_;
}
}
}
else
{
lean_object* v_a_6097_; lean_object* v___f_6098_; lean_object* v___x_6099_; 
v_a_6097_ = lean_ctor_get(v___x_6088_, 0);
lean_inc(v_a_6097_);
lean_dec_ref_known(v___x_6088_, 1);
v___f_6098_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6099_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6099_, 0, v_fst_6035_);
lean_ctor_set(v___x_6099_, 1, v_fst_6036_);
lean_ctor_set(v___x_6099_, 2, v_snd_6037_);
lean_ctor_set(v___x_6099_, 3, v_a_6097_);
lean_ctor_set(v___x_6099_, 4, v___f_6098_);
v_req_6041_ = v___x_6099_;
goto v___jp_6040_;
}
}
else
{
lean_dec(v_snd_6037_);
lean_dec(v_fst_6036_);
lean_dec(v_fst_6035_);
v_req_6041_ = v___x_6079_;
goto v___jp_6040_;
}
v___jp_6040_:
{
lean_object* v___f_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; uint8_t v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; 
lean_inc_ref(v_req_6041_);
v___f_6042_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6042_, 0, v_handler_6022_);
lean_closure_set(v___f_6042_, 1, v_req_6041_);
v___x_6043_ = lean_unsigned_to_nat(0u);
v___x_6044_ = lean_io_as_task(v___f_6042_, v___x_6043_);
v___x_6045_ = 1;
v___x_6046_ = lean_task_bind(v___x_6044_, v___f_6028_, v___x_6043_, v___x_6045_);
v___x_6047_ = lean_task_get_own(v___x_6046_);
if (lean_obj_tag(v___x_6047_) == 0)
{
lean_object* v_a_6048_; lean_object* v___x_6050_; 
lean_dec_ref(v_req_6041_);
v_a_6048_ = lean_ctor_get(v___x_6047_, 0);
lean_inc(v_a_6048_);
lean_dec_ref_known(v___x_6047_, 1);
if (v_isShared_6033_ == 0)
{
lean_ctor_set_tag(v___x_6032_, 1);
lean_ctor_set(v___x_6032_, 0, v_a_6048_);
v___x_6050_ = v___x_6032_;
goto v_reusejp_6049_;
}
else
{
lean_object* v_reuseFailAlloc_6051_; 
v_reuseFailAlloc_6051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6051_, 0, v_a_6048_);
v___x_6050_ = v_reuseFailAlloc_6051_;
goto v_reusejp_6049_;
}
v_reusejp_6049_:
{
return v___x_6050_;
}
}
else
{
lean_object* v_a_6052_; lean_object* v_stream_6053_; 
lean_del_object(v___x_6032_);
v_a_6052_ = lean_ctor_get(v___x_6047_, 0);
lean_inc(v_a_6052_);
lean_dec_ref_known(v___x_6047_, 1);
v_stream_6053_ = lean_ctor_get(v_a_6052_, 2);
if (lean_obj_tag(v_stream_6053_) == 0)
{
uint16_t v_status_6054_; lean_object* v_headers_6055_; lean_object* v_body_6056_; lean_object* v_method_6057_; uint8_t v___x_6058_; 
v_status_6054_ = lean_ctor_get_uint16(v_a_6052_, sizeof(void*)*3);
v_headers_6055_ = lean_ctor_get(v_a_6052_, 0);
lean_inc_ref(v_headers_6055_);
v_body_6056_ = lean_ctor_get(v_a_6052_, 1);
lean_inc_ref(v_body_6056_);
lean_dec(v_a_6052_);
v_method_6057_ = lean_ctor_get(v_req_6041_, 0);
lean_inc_ref(v_method_6057_);
lean_dec_ref(v_req_6041_);
v___x_6058_ = l_Lasm_Fetch_bodyless(v_method_6057_, v_status_6054_);
lean_dec_ref(v_method_6057_);
if (v___x_6058_ == 0)
{
lean_object* v___x_6059_; 
v___x_6059_ = lasm_fetch_send_response(v_status_6054_, v_headers_6055_, v_body_6056_);
lean_dec_ref(v_body_6056_);
lean_dec_ref(v_headers_6055_);
return v___x_6059_;
}
else
{
lean_object* v___x_6060_; 
lean_dec_ref(v_body_6056_);
v___x_6060_ = lasm_fetch_send_response(v_status_6054_, v_headers_6055_, v___x_6039_);
lean_dec_ref(v_headers_6055_);
return v___x_6060_;
}
}
else
{
uint16_t v_status_6061_; lean_object* v_headers_6062_; lean_object* v_val_6063_; lean_object* v___f_6064_; lean_object* v___x_6065_; 
lean_inc_ref(v_stream_6053_);
v_status_6061_ = lean_ctor_get_uint16(v_a_6052_, sizeof(void*)*3);
v_headers_6062_ = lean_ctor_get(v_a_6052_, 0);
lean_inc_ref(v_headers_6062_);
lean_dec(v_a_6052_);
v_val_6063_ = lean_ctor_get(v_stream_6053_, 0);
lean_inc(v_val_6063_);
lean_dec_ref_known(v_stream_6053_, 1);
v___f_6064_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6064_, 0, v_val_6063_);
lean_closure_set(v___f_6064_, 1, v___f_6027_);
v___x_6065_ = lasm_fetch_start_response(v_status_6061_, v_headers_6062_);
lean_dec_ref(v_headers_6062_);
if (lean_obj_tag(v___x_6065_) == 0)
{
lean_object* v_method_6066_; uint8_t v___x_6067_; 
lean_dec_ref_known(v___x_6065_, 1);
v_method_6066_ = lean_ctor_get(v_req_6041_, 0);
lean_inc_ref(v_method_6066_);
lean_dec_ref(v_req_6041_);
v___x_6067_ = l_Lasm_Fetch_bodyless(v_method_6066_, v_status_6061_);
lean_dec_ref(v_method_6066_);
if (v___x_6067_ == 0)
{
lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; 
v___x_6068_ = lean_io_as_task(v___f_6064_, v___x_6043_);
v___x_6069_ = lean_task_bind(v___x_6068_, v___f_6026_, v___x_6043_, v___x_6045_);
v___x_6070_ = lean_task_get_own(v___x_6069_);
if (lean_obj_tag(v___x_6070_) == 0)
{
lean_object* v_a_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v_a_6071_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v_a_6071_);
lean_dec_ref_known(v___x_6070_, 1);
v___x_6072_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6073_ = lean_io_error_to_string(v_a_6071_);
v___x_6074_ = lean_string_append(v___x_6072_, v___x_6073_);
lean_dec_ref(v___x_6073_);
v___x_6075_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6074_);
if (lean_obj_tag(v___x_6075_) == 0)
{
lean_object* v___x_6076_; 
lean_dec_ref_known(v___x_6075_, 1);
v___x_6076_ = lasm_fetch_finish(v___x_6067_);
return v___x_6076_;
}
else
{
return v___x_6075_;
}
}
else
{
lean_object* v___x_6077_; 
lean_dec_ref_known(v___x_6070_, 1);
v___x_6077_ = lasm_fetch_finish(v___x_6045_);
return v___x_6077_;
}
}
else
{
lean_object* v___x_6078_; 
lean_dec_ref(v___f_6064_);
v___x_6078_ = lasm_fetch_finish(v___x_6045_);
return v___x_6078_;
}
}
else
{
lean_dec_ref(v___f_6064_);
lean_dec_ref(v_req_6041_);
return v___x_6065_;
}
}
}
}
}
}
else
{
lean_object* v_a_6101_; lean_object* v___x_6103_; uint8_t v_isShared_6104_; uint8_t v_isSharedCheck_6108_; 
lean_dec_ref(v_options_6023_);
lean_dec_ref(v_handler_6022_);
v_a_6101_ = lean_ctor_get(v___x_6029_, 0);
v_isSharedCheck_6108_ = !lean_is_exclusive(v___x_6029_);
if (v_isSharedCheck_6108_ == 0)
{
v___x_6103_ = v___x_6029_;
v_isShared_6104_ = v_isSharedCheck_6108_;
goto v_resetjp_6102_;
}
else
{
lean_inc(v_a_6101_);
lean_dec(v___x_6029_);
v___x_6103_ = lean_box(0);
v_isShared_6104_ = v_isSharedCheck_6108_;
goto v_resetjp_6102_;
}
v_resetjp_6102_:
{
lean_object* v___x_6106_; 
if (v_isShared_6104_ == 0)
{
v___x_6106_ = v___x_6103_;
goto v_reusejp_6105_;
}
else
{
lean_object* v_reuseFailAlloc_6107_; 
v_reuseFailAlloc_6107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6107_, 0, v_a_6101_);
v___x_6106_ = v_reuseFailAlloc_6107_;
goto v_reusejp_6105_;
}
v_reusejp_6105_:
{
return v___x_6106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6109_, lean_object* v_options_6110_, lean_object* v_a_6111_){
_start:
{
lean_object* v_res_6112_; 
v_res_6112_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6109_, v_options_6110_);
return v_res_6112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6116_, lean_object* v_handler_6117_){
_start:
{
uint8_t v___x_6119_; 
v___x_6119_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6119_ == 0)
{
uint8_t v___x_6120_; 
v___x_6120_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6120_ == 0)
{
uint8_t v___x_6121_; 
v___x_6121_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6121_ == 0)
{
uint8_t v___x_6122_; 
v___x_6122_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6122_ == 0)
{
lean_object* v___x_6123_; lean_object* v___x_6124_; 
lean_dec_ref(v_handler_6117_);
lean_dec_ref(v_options_6116_);
v___x_6123_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6124_, 0, v___x_6123_);
return v___x_6124_;
}
else
{
lean_object* v___x_6125_; 
v___x_6125_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6125_) == 0)
{
lean_object* v_a_6126_; uint8_t v___x_6127_; 
v_a_6126_ = lean_ctor_get(v___x_6125_, 0);
lean_inc(v_a_6126_);
lean_dec_ref_known(v___x_6125_, 1);
v___x_6127_ = lean_unbox(v_a_6126_);
lean_dec(v_a_6126_);
if (v___x_6127_ == 0)
{
lean_object* v___x_6128_; 
v___x_6128_ = l_Lasm_Fetch_serveNode(v_handler_6117_, v_options_6116_);
return v___x_6128_;
}
else
{
lean_object* v___x_6129_; 
v___x_6129_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6117_, v_options_6116_);
if (lean_obj_tag(v___x_6129_) == 0)
{
lean_object* v_a_6130_; lean_object* v___x_6131_; 
v_a_6130_ = lean_ctor_get(v___x_6129_, 0);
lean_inc(v_a_6130_);
lean_dec_ref_known(v___x_6129_, 1);
v___x_6131_ = l_Lasm_JS_exportDefault(v_a_6130_);
return v___x_6131_;
}
else
{
lean_object* v_a_6132_; lean_object* v___x_6134_; uint8_t v_isShared_6135_; uint8_t v_isSharedCheck_6139_; 
v_a_6132_ = lean_ctor_get(v___x_6129_, 0);
v_isSharedCheck_6139_ = !lean_is_exclusive(v___x_6129_);
if (v_isSharedCheck_6139_ == 0)
{
v___x_6134_ = v___x_6129_;
v_isShared_6135_ = v_isSharedCheck_6139_;
goto v_resetjp_6133_;
}
else
{
lean_inc(v_a_6132_);
lean_dec(v___x_6129_);
v___x_6134_ = lean_box(0);
v_isShared_6135_ = v_isSharedCheck_6139_;
goto v_resetjp_6133_;
}
v_resetjp_6133_:
{
lean_object* v___x_6137_; 
if (v_isShared_6135_ == 0)
{
v___x_6137_ = v___x_6134_;
goto v_reusejp_6136_;
}
else
{
lean_object* v_reuseFailAlloc_6138_; 
v_reuseFailAlloc_6138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6138_, 0, v_a_6132_);
v___x_6137_ = v_reuseFailAlloc_6138_;
goto v_reusejp_6136_;
}
v_reusejp_6136_:
{
return v___x_6137_;
}
}
}
}
}
else
{
lean_object* v_a_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6147_; 
lean_dec_ref(v_handler_6117_);
lean_dec_ref(v_options_6116_);
v_a_6140_ = lean_ctor_get(v___x_6125_, 0);
v_isSharedCheck_6147_ = !lean_is_exclusive(v___x_6125_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6142_ = v___x_6125_;
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_a_6140_);
lean_dec(v___x_6125_);
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
lean_object* v___x_6148_; 
v___x_6148_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6117_, v_options_6116_);
return v___x_6148_;
}
}
else
{
lean_object* v___x_6149_; 
v___x_6149_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6117_, v_options_6116_);
return v___x_6149_;
}
}
else
{
lean_object* v___x_6150_; 
v___x_6150_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6117_, v_options_6116_);
return v___x_6150_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6151_, lean_object* v_handler_6152_, lean_object* v_a_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l_Lasm_Fetch_serveWith(v_options_6151_, v_handler_6152_);
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6155_){
_start:
{
lean_object* v___f_6157_; lean_object* v___x_6158_; 
v___f_6157_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6158_ = l_Lasm_Fetch_serveWith(v___f_6157_, v_handler_6155_);
return v___x_6158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6159_, lean_object* v_a_6160_){
_start:
{
lean_object* v_res_6161_; 
v_res_6161_ = l_Lasm_Fetch_serve(v_handler_6159_);
return v_res_6161_;
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
