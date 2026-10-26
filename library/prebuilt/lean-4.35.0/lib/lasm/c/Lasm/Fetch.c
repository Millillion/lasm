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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2149_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2159_; 
v_a_2151_ = lean_ctor_get(v_x_2149_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_x_2149_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2153_ = v_x_2149_;
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v_x_2149_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; 
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
return v___x_2157_;
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2170_; 
v_a_2160_ = lean_ctor_get(v_x_2149_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_x_2149_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2162_ = v_x_2149_;
v_isShared_2163_ = v_isSharedCheck_2170_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v_x_2149_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2170_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
v___x_2164_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2165_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2165_, 0, v_a_2160_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 0, v___x_2165_);
v___x_2167_ = v___x_2162_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2171_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2174_, lean_object* v___x_2175_, lean_object* v___f_2176_, lean_object* v_x_2177_){
_start:
{
if (lean_obj_tag(v_x_2177_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v___f_2176_);
lean_dec(v___x_2175_);
lean_dec_ref(v___y_2174_);
v_a_2179_ = lean_ctor_get(v_x_2177_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_x_2177_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2181_ = v_x_2177_;
v_isShared_2182_ = v_isSharedCheck_2187_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v_x_2177_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2187_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
return v___x_2185_;
}
}
}
else
{
lean_object* v_a_2188_; uint8_t v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v_a_2188_ = lean_ctor_get(v_x_2177_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v_x_2177_, 1);
v___x_2189_ = 0;
v___x_2190_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2174_, v_a_2188_);
v___x_2191_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2175_, v___x_2189_, v___x_2190_, v___f_2176_);
return v___x_2191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2192_, lean_object* v___x_2193_, lean_object* v___f_2194_, lean_object* v_x_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2192_, v___x_2193_, v___f_2194_, v_x_2195_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2198_, lean_object* v___x_2199_, lean_object* v___f_2200_, lean_object* v_req_2201_){
_start:
{
uint8_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = 0;
v___x_2204_ = l_Lasm_Fetch_respond(v_handler_2198_, v_req_2201_);
v___x_2205_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2199_, v___x_2203_, v___x_2204_, v___f_2200_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2206_, lean_object* v___x_2207_, lean_object* v___f_2208_, lean_object* v_req_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2206_, v___x_2207_, v___f_2208_, v_req_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2212_, lean_object* v_x_2213_){
_start:
{
if (lean_obj_tag(v_x_2213_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
lean_dec_ref(v___f_2212_);
v_a_2215_ = lean_ctor_get(v_x_2213_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_x_2213_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v_x_2213_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v_x_2213_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; 
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2225_; 
v_a_2224_ = lean_ctor_get(v_x_2213_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v_x_2213_, 1);
v___x_2225_ = lean_apply_2(v___f_2212_, v_a_2224_, lean_box(0));
return v___x_2225_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2226_, lean_object* v_x_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2226_, v_x_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v_headers_2232_, lean_object* v___f_2233_, lean_object* v___x_2234_, uint8_t v___x_2235_, lean_object* v___f_2236_, lean_object* v_x_2237_){
_start:
{
if (lean_obj_tag(v_x_2237_) == 0)
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2247_; 
lean_dec_ref(v___f_2236_);
lean_dec(v___x_2234_);
lean_dec_ref(v___f_2233_);
lean_dec_ref(v_headers_2232_);
lean_dec_ref(v___y_2231_);
lean_dec_ref(v___y_2230_);
v_a_2239_ = lean_ctor_get(v_x_2237_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_x_2237_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2241_ = v_x_2237_;
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v_x_2237_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2258_; 
v_a_2248_ = lean_ctor_get(v_x_2237_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_x_2237_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2250_ = v_x_2237_;
v_isShared_2251_ = v_isSharedCheck_2258_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v_x_2237_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2258_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2254_; 
v___x_2252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2252_, 0, v___y_2230_);
lean_ctor_set(v___x_2252_, 1, v___y_2231_);
lean_ctor_set(v___x_2252_, 2, v_headers_2232_);
lean_ctor_set(v___x_2252_, 3, v_a_2248_);
lean_ctor_set(v___x_2252_, 4, v___f_2233_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2252_);
v___x_2254_ = v___x_2250_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
v___x_2256_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2234_, v___x_2235_, v___x_2255_, v___f_2236_);
return v___x_2256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v_headers_2261_, lean_object* v___f_2262_, lean_object* v___x_2263_, lean_object* v___x_2264_, lean_object* v___f_2265_, lean_object* v_x_2266_, lean_object* v___y_2267_){
_start:
{
uint8_t v___x_6555__boxed_2268_; lean_object* v_res_2269_; 
v___x_6555__boxed_2268_ = lean_unbox(v___x_2264_);
v_res_2269_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2259_, v___y_2260_, v_headers_2261_, v___f_2262_, v___x_2263_, v___x_6555__boxed_2268_, v___f_2265_, v_x_2266_);
return v_res_2269_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2274_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2275_ = lean_string_utf8_byte_size(v___x_2274_);
return v___x_2275_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2278_ = lean_nat_dec_eq(v___x_2277_, v___x_2276_);
return v___x_2278_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2283_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2284_ = lean_unsigned_to_nat(46u);
v___x_2285_ = lean_unsigned_to_nat(193u);
v___x_2286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2287_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2288_ = l_mkPanicMessageWithDecl(v___x_2287_, v___x_2286_, v___x_2285_, v___x_2284_, v___x_2283_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2290_, lean_object* v_d_2291_){
_start:
{
lean_object* v___y_2294_; lean_object* v___y_2295_; 
if (lean_obj_tag(v_d_2291_) == 6)
{
lean_object* v_b_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
v_b_2299_ = lean_ctor_get(v_d_2291_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v_d_2291_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v_d_2291_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_b_2299_);
lean_dec(v_d_2291_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
lean_ctor_set_tag(v___x_2301_, 0);
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_b_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
else
{
lean_object* v___x_2307_; lean_object* v_received_2309_; 
v___x_2307_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2291_) == 9)
{
lean_object* v_value_2323_; lean_object* v_description_2324_; uint8_t v___x_2325_; 
v_value_2323_ = lean_ctor_get(v_d_2291_, 0);
v_description_2324_ = lean_ctor_get(v_d_2291_, 1);
v___x_2325_ = lean_string_dec_eq(v_description_2324_, v___x_2307_);
if (v___x_2325_ == 0)
{
goto v___jp_2321_;
}
else
{
uint32_t v___x_2326_; uint64_t v___x_2327_; lean_object* v___x_2328_; uint32_t v___x_2329_; lean_object* v___x_2330_; 
lean_inc_n(v_value_2323_, 2);
lean_dec_ref_known(v_d_2291_, 2);
v___x_2326_ = 206;
v___x_2327_ = 0ULL;
v___x_2328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2328_, 0, v_value_2323_);
lean_ctor_set(v___x_2328_, 1, v___x_2307_);
v___x_2329_ = lasm_js_value_handle(v_value_2323_);
lean_dec(v_value_2323_);
v___x_2330_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2326_, v___x_2327_, v___x_2328_, v___x_2329_);
lean_dec_ref_known(v___x_2328_, 2);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; uint8_t v___x_2332_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v___x_2332_ = lean_string_validate_utf8(v_a_2331_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_dec(v_a_2331_);
v___x_2333_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2334_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2333_);
v_received_2309_ = v___x_2334_;
goto v___jp_2308_;
}
else
{
lean_object* v___x_2335_; 
v___x_2335_ = lean_string_from_utf8_unchecked(v_a_2331_);
v_received_2309_ = v___x_2335_;
goto v___jp_2308_;
}
}
else
{
lean_object* v___x_2336_; 
lean_dec_ref_known(v___x_2330_, 1);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2309_ = v___x_2336_;
goto v___jp_2308_;
}
}
}
else
{
goto v___jp_2321_;
}
v___jp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v___x_2310_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2311_ = lean_string_append(v___x_2310_, v_context_2290_);
v___x_2312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2313_ = lean_string_append(v___x_2311_, v___x_2312_);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2315_ = lean_string_append(v___x_2313_, v___x_2314_);
v___x_2316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2317_ = lean_string_append(v___x_2315_, v___x_2316_);
v___x_2318_ = lean_string_append(v___x_2317_, v_received_2309_);
lean_dec_ref(v_received_2309_);
v___x_2319_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2294_ = v___x_2318_;
v___y_2295_ = v___x_2320_;
goto v___jp_2293_;
}
else
{
v___y_2294_ = v___x_2318_;
v___y_2295_ = v___x_2307_;
goto v___jp_2293_;
}
}
v___jp_2321_:
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lasm_JS_Data_describe(v_d_2291_);
v_received_2309_ = v___x_2322_;
goto v___jp_2308_;
}
}
v___jp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = lean_string_append(v___y_2294_, v___y_2295_);
v___x_2297_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
v___x_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2337_, lean_object* v_d_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2337_, v_d_2338_);
lean_dec_ref(v_context_2337_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2341_, lean_object* v_bytes_2342_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = l_Lasm_JS_Wire_decode(v_bytes_2342_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2346_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v___x_2346_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2341_, v_a_2345_);
return v___x_2346_;
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
v_a_2347_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2344_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2344_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2355_, lean_object* v_bytes_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2355_, v_bytes_2356_);
lean_dec_ref(v_bytes_2356_);
lean_dec_ref(v_context_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2359_, uint64_t v_extra_2360_){
_start:
{
uint64_t v___x_2361_; uint64_t v___y_2363_; 
v___x_2361_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2359_ == 0)
{
uint64_t v___x_2366_; 
v___x_2366_ = 0ULL;
v___y_2363_ = v___x_2366_;
goto v___jp_2362_;
}
else
{
uint64_t v___x_2367_; 
v___x_2367_ = 2ULL;
v___y_2363_ = v___x_2367_;
goto v___jp_2362_;
}
v___jp_2362_:
{
uint64_t v___x_2364_; uint64_t v___x_2365_; 
v___x_2364_ = lean_uint64_lor(v___x_2361_, v___y_2363_);
v___x_2365_ = lean_uint64_lor(v___x_2364_, v_extra_2360_);
return v___x_2365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2368_, lean_object* v_extra_2369_){
_start:
{
uint8_t v_await_boxed_2370_; uint64_t v_extra_boxed_2371_; uint64_t v_res_2372_; lean_object* v_r_2373_; 
v_await_boxed_2370_ = lean_unbox(v_await_2368_);
v_extra_boxed_2371_ = lean_unbox_uint64(v_extra_2369_);
lean_dec_ref(v_extra_2369_);
v_res_2372_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2370_, v_extra_boxed_2371_);
v_r_2373_ = lean_box_uint64(v_res_2372_);
return v_r_2373_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2374_; uint8_t v___x_2375_; uint64_t v___x_2376_; 
v___x_2374_ = 4ULL;
v___x_2375_ = 0;
v___x_2376_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2375_, v___x_2374_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2377_, lean_object* v_args_2378_){
_start:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint64_t v___x_2383_; lean_object* v___x_2384_; 
v___x_2380_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2381_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2381_, 0, v_c_2377_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = lean_box(0);
v___x_2383_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2384_ = l_Lasm_JS_Value_invokeRaw(v___x_2381_, v___x_2382_, v_args_2378_, v___x_2383_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2384_, 1);
v___x_2386_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2387_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2386_, v_a_2385_);
lean_dec(v_a_2385_);
return v___x_2387_;
}
else
{
return v___x_2384_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2388_, lean_object* v_args_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2388_, v_args_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2392_, uint8_t v___x_2393_, lean_object* v___f_2394_, lean_object* v_a_2395_, lean_object* v_x_2396_){
_start:
{
lean_object* v_val_2399_; 
if (lean_obj_tag(v_x_2396_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v_a_2395_);
lean_dec_ref(v___f_2394_);
lean_dec(v___x_2392_);
v_a_2402_ = lean_ctor_get(v_x_2396_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_x_2396_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2404_ = v_x_2396_;
v_isShared_2405_ = v_isSharedCheck_2410_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v_x_2396_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2410_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
return v___x_2408_;
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2429_; 
v_a_2411_ = lean_ctor_get(v_x_2396_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v_x_2396_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2413_ = v_x_2396_;
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v_x_2396_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2415_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2416_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2416_, 0, v_a_2411_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
v___x_2417_ = lean_unsigned_to_nat(1u);
v___x_2418_ = lean_mk_empty_array_with_capacity(v___x_2417_);
v___x_2419_ = lean_array_push(v___x_2418_, v___x_2416_);
v___x_2420_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2395_, v___x_2419_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2423_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 0, v_a_2421_);
v___x_2423_ = v___x_2413_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
v_val_2399_ = v___x_2423_;
goto v___jp_2398_;
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; 
v_a_2425_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___x_2420_, 1);
if (v_isShared_2414_ == 0)
{
lean_ctor_set_tag(v___x_2413_, 0);
lean_ctor_set(v___x_2413_, 0, v_a_2425_);
v___x_2427_ = v___x_2413_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2425_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
v_val_2399_ = v___x_2427_;
goto v___jp_2398_;
}
}
}
}
v___jp_2398_:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2400_, 0, v_val_2399_);
v___x_2401_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2392_, v___x_2393_, v___x_2400_, v___f_2394_);
return v___x_2401_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2430_, lean_object* v___x_2431_, lean_object* v___f_2432_, lean_object* v_a_2433_, lean_object* v_x_2434_, lean_object* v___y_2435_){
_start:
{
uint8_t v___x_6841__boxed_2436_; lean_object* v_res_2437_; 
v___x_6841__boxed_2436_ = lean_unbox(v___x_2431_);
v_res_2437_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2430_, v___x_6841__boxed_2436_, v___f_2432_, v_a_2433_, v_x_2434_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v_headers_2440_, lean_object* v___x_2441_, lean_object* v___x_2442_, lean_object* v___f_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2454_; 
lean_dec_ref(v___f_2443_);
lean_dec(v___x_2442_);
lean_dec_ref(v___x_2441_);
lean_dec_ref(v_headers_2440_);
lean_dec_ref(v___y_2439_);
lean_dec_ref(v___y_2438_);
v_a_2446_ = lean_ctor_get(v_x_2444_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v_x_2444_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2448_ = v_x_2444_;
v_isShared_2449_ = v_isSharedCheck_2454_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v_x_2444_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2454_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
return v___x_2452_;
}
}
}
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2466_; 
v_a_2455_ = lean_ctor_get(v_x_2444_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_x_2444_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2457_ = v_x_2444_;
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v_x_2444_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2459_; uint8_t v___x_2460_; lean_object* v___x_2462_; 
v___x_2459_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2459_, 0, v___y_2438_);
lean_ctor_set(v___x_2459_, 1, v___y_2439_);
lean_ctor_set(v___x_2459_, 2, v_headers_2440_);
lean_ctor_set(v___x_2459_, 3, v___x_2441_);
lean_ctor_set(v___x_2459_, 4, v_a_2455_);
v___x_2460_ = 0;
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v___x_2459_);
v___x_2462_ = v___x_2457_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2459_);
v___x_2462_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
v___x_2464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2442_, v___x_2460_, v___x_2463_, v___f_2443_);
return v___x_2464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v_headers_2469_, lean_object* v___x_2470_, lean_object* v___x_2471_, lean_object* v___f_2472_, lean_object* v_x_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_2467_, v___y_2468_, v_headers_2469_, v___x_2470_, v___x_2471_, v___f_2472_, v_x_2473_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_2476_, lean_object* v_x_2477_){
_start:
{
if (lean_obj_tag(v_x_2477_) == 0)
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref(v___f_2476_);
v_a_2479_ = lean_ctor_get(v_x_2477_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v_x_2477_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2481_ = v_x_2477_;
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v_x_2477_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
return v___x_2485_;
}
}
}
else
{
lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2499_; 
v_isSharedCheck_2499_ = !lean_is_exclusive(v_x_2477_);
if (v_isSharedCheck_2499_ == 0)
{
lean_object* v_unused_2500_; 
v_unused_2500_ = lean_ctor_get(v_x_2477_, 0);
lean_dec(v_unused_2500_);
v___x_2489_ = v_x_2477_;
v_isShared_2490_ = v_isSharedCheck_2499_;
goto v_resetjp_2488_;
}
else
{
lean_dec(v_x_2477_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2499_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2495_; 
v___x_2491_ = lean_unsigned_to_nat(0u);
v___x_2492_ = 0;
v___x_2493_ = lean_io_promise_new();
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v___x_2493_);
v___x_2495_ = v___x_2489_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v___x_2493_);
v___x_2495_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
v___x_2497_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2491_, v___x_2492_, v___x_2496_, v___f_2476_);
return v___x_2497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_2501_, v_x_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_2505_, lean_object* v_x_2506_){
_start:
{
if (lean_obj_tag(v_x_2506_) == 0)
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2516_; 
lean_dec_ref(v___f_2505_);
v_a_2508_ = lean_ctor_get(v_x_2506_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_x_2506_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2510_ = v_x_2506_;
v_isShared_2511_ = v_isSharedCheck_2516_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v_x_2506_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2516_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2513_);
return v___x_2514_;
}
}
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2518_; 
v_a_2517_ = lean_ctor_get(v_x_2506_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v_x_2506_, 1);
v___x_2518_ = lean_apply_2(v___f_2505_, v_a_2517_, lean_box(0));
return v___x_2518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2519_, lean_object* v_x_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_2519_, v_x_2520_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_2523_, lean_object* v_bytes_2524_){
_start:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; lean_object* v_val_2529_; lean_object* v___x_2532_; 
v___x_2526_ = lean_unsigned_to_nat(0u);
v___x_2527_ = 0;
v___x_2532_ = l_Lasm_JS_Wire_decode(v_bytes_2524_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set_tag(v___x_2535_, 1);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
v_val_2529_ = v___x_2538_;
goto v___jp_2528_;
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
v_a_2541_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2532_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2532_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
lean_ctor_set_tag(v___x_2543_, 0);
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
v_val_2529_ = v___x_2546_;
goto v___jp_2528_;
}
}
}
v___jp_2528_:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_val_2529_);
v___x_2531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2526_, v___x_2527_, v___x_2530_, v___f_2523_);
return v___x_2531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_2549_, lean_object* v_bytes_2550_, lean_object* v___y_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_2549_, v_bytes_2550_);
lean_dec_ref(v_bytes_2550_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_2553_, lean_object* v_failurePrefix_2554_, lean_object* v___f_2555_, lean_object* v___f_2556_, uint32_t v_op_2557_, uint64_t v_flags_2558_, lean_object* v___f_2559_, lean_object* v_x_2560_){
_start:
{
if (lean_obj_tag(v_x_2560_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2570_; 
lean_dec_ref(v___f_2559_);
lean_dec_ref(v___f_2556_);
lean_dec_ref(v___f_2555_);
v_a_2562_ = lean_ctor_get(v_x_2560_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_x_2560_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2564_ = v_x_2560_;
v_isShared_2565_ = v_isSharedCheck_2570_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v_x_2560_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2570_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; 
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
return v___x_2568_;
}
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2612_; 
v_a_2571_ = lean_ctor_get(v_x_2560_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_x_2560_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2573_ = v_x_2560_;
v_isShared_2574_ = v_isSharedCheck_2612_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v_x_2560_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2612_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
uint32_t v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; uint8_t v___x_2579_; 
v___x_2575_ = 0;
v___x_2576_ = l_Lasm_JS_Wire_encode(v_payload_2553_);
v___x_2577_ = lean_string_utf8_byte_size(v_failurePrefix_2554_);
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2579_ = lean_nat_dec_eq(v___x_2577_, v___x_2578_);
if (v___x_2579_ == 0)
{
lean_object* v___f_2580_; lean_object* v_val_2582_; lean_object* v___x_2587_; 
lean_dec_ref(v___f_2559_);
lean_inc(v_a_2571_);
v___f_2580_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2580_, 0, v_a_2571_);
v___x_2587_ = lasm_js_call_into(v_a_2571_, v_op_2557_, v___x_2575_, v_flags_2558_, v___x_2576_, v_payload_2553_);
lean_dec_ref(v___x_2576_);
lean_dec(v_a_2571_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; lean_object* v___x_2590_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 0, v_a_2588_);
v___x_2590_ = v___x_2573_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
v_val_2582_ = v___x_2590_;
goto v___jp_2581_;
}
}
else
{
lean_object* v_a_2592_; lean_object* v___x_2594_; 
v_a_2592_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2592_);
lean_dec_ref_known(v___x_2587_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set_tag(v___x_2573_, 0);
lean_ctor_set(v___x_2573_, 0, v_a_2592_);
v___x_2594_ = v___x_2573_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
v_val_2582_ = v___x_2594_;
goto v___jp_2581_;
}
}
v___jp_2581_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v_val_2582_);
v___x_2584_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2578_, v___x_2579_, v___x_2583_, v___f_2580_);
v___x_2585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2578_, v___x_2579_, v___x_2584_, v___f_2555_);
v___x_2586_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2578_, v___x_2579_, v___x_2585_, v___f_2556_);
return v___x_2586_;
}
}
else
{
lean_object* v___f_2596_; uint8_t v___x_2597_; lean_object* v_val_2599_; lean_object* v___x_2603_; 
lean_dec_ref(v___f_2556_);
lean_dec_ref(v___f_2555_);
lean_inc(v_a_2571_);
v___f_2596_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2596_, 0, v_a_2571_);
v___x_2597_ = 0;
v___x_2603_ = lasm_js_call_into(v_a_2571_, v_op_2557_, v___x_2575_, v_flags_2558_, v___x_2576_, v_payload_2553_);
lean_dec_ref(v___x_2576_);
lean_dec(v_a_2571_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v_a_2604_; lean_object* v___x_2606_; 
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2603_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 0, v_a_2604_);
v___x_2606_ = v___x_2573_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
v_val_2599_ = v___x_2606_;
goto v___jp_2598_;
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; 
v_a_2608_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2608_);
lean_dec_ref_known(v___x_2603_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set_tag(v___x_2573_, 0);
lean_ctor_set(v___x_2573_, 0, v_a_2608_);
v___x_2610_ = v___x_2573_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2608_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
v_val_2599_ = v___x_2610_;
goto v___jp_2598_;
}
}
v___jp_2598_:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v_val_2599_);
v___x_2601_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2578_, v___x_2597_, v___x_2600_, v___f_2596_);
v___x_2602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2578_, v___x_2597_, v___x_2601_, v___f_2559_);
return v___x_2602_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_2613_, lean_object* v_failurePrefix_2614_, lean_object* v___f_2615_, lean_object* v___f_2616_, lean_object* v_op_2617_, lean_object* v_flags_2618_, lean_object* v___f_2619_, lean_object* v_x_2620_, lean_object* v___y_2621_){
_start:
{
uint32_t v_op_boxed_2622_; uint64_t v_flags_boxed_2623_; lean_object* v_res_2624_; 
v_op_boxed_2622_ = lean_unbox_uint32(v_op_2617_);
lean_dec(v_op_2617_);
v_flags_boxed_2623_ = lean_unbox_uint64(v_flags_2618_);
lean_dec_ref(v_flags_2618_);
v_res_2624_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_2613_, v_failurePrefix_2614_, v___f_2615_, v___f_2616_, v_op_boxed_2622_, v_flags_boxed_2623_, v___f_2619_, v_x_2620_);
lean_dec_ref(v_failurePrefix_2614_);
lean_dec(v_payload_2613_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_2625_, lean_object* v_x_2626_){
_start:
{
lean_object* v_val_2629_; 
if (lean_obj_tag(v_x_2626_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2639_; 
v_a_2631_ = lean_ctor_get(v_x_2626_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v_x_2626_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2633_ = v_x_2626_;
v_isShared_2634_ = v_isSharedCheck_2639_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v_x_2626_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2639_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2631_);
v___x_2636_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2637_; 
v___x_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2636_);
return v___x_2637_;
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2653_; 
v_a_2640_ = lean_ctor_get(v_x_2626_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v_x_2626_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2642_ = v_x_2626_;
v_isShared_2643_ = v_isSharedCheck_2653_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v_x_2626_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2653_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2644_; 
v___x_2644_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2625_, v_a_2640_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2647_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v_a_2645_);
v___x_2647_ = v___x_2642_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
v_val_2629_ = v___x_2647_;
goto v___jp_2628_;
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; 
v_a_2649_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2644_, 1);
if (v_isShared_2643_ == 0)
{
lean_ctor_set_tag(v___x_2642_, 0);
lean_ctor_set(v___x_2642_, 0, v_a_2649_);
v___x_2651_ = v___x_2642_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
v_val_2629_ = v___x_2651_;
goto v___jp_2628_;
}
}
}
}
v___jp_2628_:
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v_val_2629_);
return v___x_2630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_2654_, lean_object* v_x_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_2654_, v_x_2655_);
lean_dec_ref(v_context_2654_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_2658_, uint32_t v_op_2659_, uint64_t v_flags_2660_, lean_object* v_payload_2661_, lean_object* v_failurePrefix_2662_){
_start:
{
lean_object* v___f_2664_; lean_object* v___f_2665_; lean_object* v___f_2666_; lean_object* v___f_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___f_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; lean_object* v_val_2675_; lean_object* v___x_2678_; 
lean_inc_ref(v_failurePrefix_2662_);
v___f_2664_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2664_, 0, v_failurePrefix_2662_);
v___f_2665_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2665_, 0, v_context_2658_);
v___f_2666_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2666_, 0, v___f_2665_);
v___f_2667_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2667_, 0, v___f_2666_);
v___x_2668_ = lean_box_uint32(v_op_2659_);
v___x_2669_ = lean_box_uint64(v_flags_2660_);
lean_inc_ref(v___f_2667_);
v___f_2670_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2670_, 0, v_payload_2661_);
lean_closure_set(v___f_2670_, 1, v_failurePrefix_2662_);
lean_closure_set(v___f_2670_, 2, v___f_2664_);
lean_closure_set(v___f_2670_, 3, v___f_2667_);
lean_closure_set(v___f_2670_, 4, v___x_2668_);
lean_closure_set(v___f_2670_, 5, v___x_2669_);
lean_closure_set(v___f_2670_, 6, v___f_2667_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2671_, 0, v___f_2670_);
v___x_2672_ = lean_unsigned_to_nat(0u);
v___x_2673_ = 0;
v___x_2678_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set_tag(v___x_2681_, 1);
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
v_val_2675_ = v___x_2684_;
goto v___jp_2674_;
}
}
}
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
v_a_2687_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2678_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2678_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set_tag(v___x_2689_, 0);
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
v_val_2675_ = v___x_2692_;
goto v___jp_2674_;
}
}
}
v___jp_2674_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v_val_2675_);
v___x_2677_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2672_, v___x_2673_, v___x_2676_, v___f_2671_);
return v___x_2677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_2695_, lean_object* v_op_2696_, lean_object* v_flags_2697_, lean_object* v_payload_2698_, lean_object* v_failurePrefix_2699_, lean_object* v_a_2700_){
_start:
{
uint32_t v_op_boxed_2701_; uint64_t v_flags_boxed_2702_; lean_object* v_res_2703_; 
v_op_boxed_2701_ = lean_unbox_uint32(v_op_2696_);
lean_dec(v_op_2696_);
v_flags_boxed_2702_ = lean_unbox_uint64(v_flags_2697_);
lean_dec_ref(v_flags_2697_);
v_res_2703_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_2695_, v_op_boxed_2701_, v_flags_boxed_2702_, v_payload_2698_, v_failurePrefix_2699_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_2704_, lean_object* v_name_2705_, lean_object* v_args_2706_){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; uint32_t v___x_2713_; uint64_t v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2708_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2709_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_o_2704_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
lean_inc_ref(v_name_2705_);
v___x_2710_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2710_, 0, v_name_2705_);
v___x_2711_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2712_ = lean_string_append(v___x_2711_, v_name_2705_);
lean_dec_ref(v_name_2705_);
v___x_2713_ = 205;
v___x_2714_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2715_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2715_, 0, v_args_2706_);
v___x_2716_ = lean_unsigned_to_nat(3u);
v___x_2717_ = lean_mk_empty_array_with_capacity(v___x_2716_);
v___x_2718_ = lean_array_push(v___x_2717_, v___x_2709_);
v___x_2719_ = lean_array_push(v___x_2718_, v___x_2710_);
v___x_2720_ = lean_array_push(v___x_2719_, v___x_2715_);
v___x_2721_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
v___x_2722_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_2712_, v___x_2713_, v___x_2714_, v___x_2721_, v___x_2708_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_2723_, lean_object* v_name_2724_, lean_object* v_args_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_2723_, v_name_2724_, v_args_2725_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v_options_2732_, lean_object* v___f_2733_, lean_object* v___f_2734_, lean_object* v_a_2735_, lean_object* v_value_2736_, lean_object* v_a_2737_, lean_object* v___x_2738_, lean_object* v___f_2739_, lean_object* v___f_2740_, lean_object* v_headers_2741_){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___f_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2755_; 
v___x_2743_ = lean_mk_empty_array_with_capacity(v___x_2729_);
v___x_2744_ = l_ByteArray_empty;
v___f_2745_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_2743_);
lean_inc_ref(v___y_2731_);
lean_inc_ref(v___y_2730_);
v___x_2746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2746_, 0, v___y_2730_);
lean_ctor_set(v___x_2746_, 1, v___y_2731_);
lean_ctor_set(v___x_2746_, 2, v___x_2743_);
lean_ctor_set(v___x_2746_, 3, v___x_2744_);
lean_ctor_set(v___x_2746_, 4, v___f_2745_);
v___x_2747_ = l_Lasm_Fetch_Request_path(v___x_2746_);
v___x_2748_ = lean_apply_1(v_options_2732_, v___x_2747_);
v___x_2755_ = lean_unbox(v___x_2748_);
if (v___x_2755_ == 0)
{
lean_object* v___x_2756_; uint8_t v___x_2757_; 
lean_dec_ref(v___f_2740_);
lean_dec_ref(v___f_2739_);
v___x_2756_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_2757_ = lean_string_dec_eq(v___y_2730_, v___x_2756_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2758_; uint8_t v___x_2759_; 
v___x_2758_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_2759_ = lean_string_dec_eq(v___y_2730_, v___x_2758_);
if (v___x_2759_ == 0)
{
lean_object* v___x_2760_; lean_object* v___f_2761_; lean_object* v___x_2762_; lean_object* v___f_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
lean_dec_ref(v___f_2733_);
v___x_2760_ = lean_box(v___x_2759_);
lean_inc_n(v___x_2729_, 2);
v___f_2761_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_2761_, 0, v___y_2730_);
lean_closure_set(v___f_2761_, 1, v___y_2731_);
lean_closure_set(v___f_2761_, 2, v_headers_2741_);
lean_closure_set(v___f_2761_, 3, v___f_2745_);
lean_closure_set(v___f_2761_, 4, v___x_2729_);
lean_closure_set(v___f_2761_, 5, v___x_2760_);
lean_closure_set(v___f_2761_, 6, v___f_2734_);
v___x_2762_ = lean_box(v___x_2759_);
v___f_2763_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2763_, 0, v___x_2729_);
lean_closure_set(v___f_2763_, 1, v___x_2762_);
lean_closure_set(v___f_2763_, 2, v___f_2761_);
lean_closure_set(v___f_2763_, 3, v_a_2735_);
v___x_2764_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_2765_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_2736_, v___x_2764_, v___x_2743_);
v___x_2766_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2729_, v___x_2759_, v___x_2765_, v___f_2763_);
return v___x_2766_;
}
else
{
lean_dec_ref(v___x_2743_);
lean_dec(v_value_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v___f_2734_);
goto v___jp_2749_;
}
}
else
{
lean_dec_ref(v___x_2743_);
lean_dec(v_value_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v___f_2734_);
goto v___jp_2749_;
}
}
else
{
lean_object* v___x_2767_; 
lean_dec_ref(v___x_2743_);
lean_dec(v_value_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v___f_2734_);
lean_dec_ref(v___f_2733_);
v___x_2767_ = l_Lasm_JS_Data_field(v_a_2737_, v___x_2738_);
if (lean_obj_tag(v___x_2767_) == 9)
{
lean_object* v_value_2768_; lean_object* v___f_2769_; uint8_t v___x_2770_; lean_object* v_val_2772_; lean_object* v___x_2775_; 
lean_dec_ref(v___f_2740_);
v_value_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_value_2768_);
lean_dec_ref_known(v___x_2767_, 2);
lean_inc(v___x_2729_);
v___f_2769_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2769_, 0, v___y_2730_);
lean_closure_set(v___f_2769_, 1, v___y_2731_);
lean_closure_set(v___f_2769_, 2, v_headers_2741_);
lean_closure_set(v___f_2769_, 3, v___x_2744_);
lean_closure_set(v___f_2769_, 4, v___x_2729_);
lean_closure_set(v___f_2769_, 5, v___f_2739_);
v___x_2770_ = 0;
v___x_2775_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_2768_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
lean_ctor_set_tag(v___x_2778_, 1);
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
v_val_2772_ = v___x_2781_;
goto v___jp_2771_;
}
}
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2791_; 
v_a_2784_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2786_ = v___x_2775_;
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2775_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2789_; 
if (v_isShared_2787_ == 0)
{
lean_ctor_set_tag(v___x_2786_, 0);
v___x_2789_ = v___x_2786_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2784_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
v_val_2772_ = v___x_2789_;
goto v___jp_2771_;
}
}
}
v___jp_2771_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_val_2772_);
v___x_2774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2729_, v___x_2770_, v___x_2773_, v___f_2769_);
return v___x_2774_;
}
}
else
{
lean_object* v___x_2792_; uint8_t v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
lean_dec(v___x_2767_);
lean_dec_ref(v___f_2739_);
v___x_2792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2792_, 0, v___y_2730_);
lean_ctor_set(v___x_2792_, 1, v___y_2731_);
lean_ctor_set(v___x_2792_, 2, v_headers_2741_);
lean_ctor_set(v___x_2792_, 3, v___x_2744_);
lean_ctor_set(v___x_2792_, 4, v___f_2745_);
v___x_2793_ = 0;
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2792_);
v___x_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
v___x_2796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2729_, v___x_2793_, v___x_2795_, v___f_2740_);
return v___x_2796_;
}
}
v___jp_2749_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; lean_object* v___x_2754_; 
v___x_2750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2750_, 0, v___y_2730_);
lean_ctor_set(v___x_2750_, 1, v___y_2731_);
lean_ctor_set(v___x_2750_, 2, v_headers_2741_);
lean_ctor_set(v___x_2750_, 3, v___x_2744_);
lean_ctor_set(v___x_2750_, 4, v___f_2745_);
v___x_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
v___x_2753_ = lean_unbox(v___x_2748_);
v___x_2754_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2729_, v___x_2753_, v___x_2752_, v___f_2733_);
return v___x_2754_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v_options_2800_, lean_object* v___f_2801_, lean_object* v___f_2802_, lean_object* v_a_2803_, lean_object* v_value_2804_, lean_object* v_a_2805_, lean_object* v___x_2806_, lean_object* v___f_2807_, lean_object* v___f_2808_, lean_object* v_headers_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_2797_, v___y_2798_, v___y_2799_, v_options_2800_, v___f_2801_, v___f_2802_, v_a_2803_, v_value_2804_, v_a_2805_, v___x_2806_, v___f_2807_, v___f_2808_, v_headers_2809_);
lean_dec_ref(v___x_2806_);
lean_dec(v_a_2805_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_2812_, lean_object* v_x_2813_){
_start:
{
if (lean_obj_tag(v_x_2813_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2823_; 
lean_dec_ref(v___f_2812_);
v_a_2815_ = lean_ctor_get(v_x_2813_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_x_2813_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2817_ = v_x_2813_;
v_isShared_2818_ = v_isSharedCheck_2823_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v_x_2813_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2823_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
return v___x_2821_;
}
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2825_; 
v_a_2824_ = lean_ctor_get(v_x_2813_, 0);
lean_inc(v_a_2824_);
lean_dec_ref_known(v_x_2813_, 1);
v___x_2825_ = lean_apply_2(v___f_2812_, v_a_2824_, lean_box(0));
return v___x_2825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_2826_, lean_object* v_x_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_2826_, v_x_2827_);
return v_res_2829_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_2830_, uint64_t v_extra_2831_){
_start:
{
uint64_t v___x_2832_; uint64_t v___y_2834_; 
v___x_2832_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2830_ == 0)
{
uint64_t v___x_2837_; 
v___x_2837_ = 0ULL;
v___y_2834_ = v___x_2837_;
goto v___jp_2833_;
}
else
{
uint64_t v___x_2838_; 
v___x_2838_ = 2ULL;
v___y_2834_ = v___x_2838_;
goto v___jp_2833_;
}
v___jp_2833_:
{
uint64_t v___x_2835_; uint64_t v___x_2836_; 
v___x_2835_ = lean_uint64_lor(v___x_2832_, v___y_2834_);
v___x_2836_ = lean_uint64_lor(v___x_2835_, v_extra_2831_);
return v___x_2836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_2839_, lean_object* v_extra_2840_){
_start:
{
uint8_t v_await_boxed_2841_; uint64_t v_extra_boxed_2842_; uint64_t v_res_2843_; lean_object* v_r_2844_; 
v_await_boxed_2841_ = lean_unbox(v_await_2839_);
v_extra_boxed_2842_ = lean_unbox_uint64(v_extra_2840_);
lean_dec_ref(v_extra_2840_);
v_res_2843_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_2841_, v_extra_boxed_2842_);
v_r_2844_ = lean_box_uint64(v_res_2843_);
return v_r_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_2850_, size_t v_i_2851_, lean_object* v_bs_2852_){
_start:
{
uint8_t v___x_2855_; 
v___x_2855_ = lean_usize_dec_lt(v_i_2851_, v_sz_2850_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2856_, 0, v_bs_2852_);
return v___x_2856_;
}
else
{
lean_object* v_v_2857_; 
v_v_2857_ = lean_array_uget_borrowed(v_bs_2852_, v_i_2851_);
if (lean_obj_tag(v_v_2857_) == 7)
{
lean_object* v_items_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v_items_2858_ = lean_ctor_get(v_v_2857_, 0);
v___x_2859_ = lean_array_get_size(v_items_2858_);
v___x_2860_ = lean_unsigned_to_nat(2u);
v___x_2861_ = lean_nat_dec_eq(v___x_2859_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_dec_ref(v_bs_2852_);
goto v___jp_2853_;
}
else
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2862_ = lean_unsigned_to_nat(0u);
v___x_2863_ = lean_array_fget_borrowed(v_items_2858_, v___x_2862_);
if (lean_obj_tag(v___x_2863_) == 4)
{
lean_object* v_s_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_s_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc_ref(v_s_2864_);
v___x_2865_ = lean_unsigned_to_nat(1u);
v___x_2866_ = lean_array_fget_borrowed(v_items_2858_, v___x_2865_);
if (lean_obj_tag(v___x_2866_) == 4)
{
lean_object* v_s_2867_; lean_object* v_bs_x27_2868_; lean_object* v___x_2869_; size_t v___x_2870_; size_t v___x_2871_; lean_object* v___x_2872_; 
v_s_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc_ref(v_s_2867_);
v_bs_x27_2868_ = lean_array_uset(v_bs_2852_, v_i_2851_, v___x_2862_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v_s_2864_);
lean_ctor_set(v___x_2869_, 1, v_s_2867_);
v___x_2870_ = ((size_t)1ULL);
v___x_2871_ = lean_usize_add(v_i_2851_, v___x_2870_);
v___x_2872_ = lean_array_uset(v_bs_x27_2868_, v_i_2851_, v___x_2869_);
v_i_2851_ = v___x_2871_;
v_bs_2852_ = v___x_2872_;
goto _start;
}
else
{
lean_object* v___x_2874_; 
lean_dec_ref(v_s_2864_);
lean_dec_ref(v_bs_2852_);
v___x_2874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_2874_;
}
}
else
{
lean_object* v___x_2875_; 
lean_dec_ref(v_bs_2852_);
v___x_2875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_2875_;
}
}
}
else
{
lean_dec_ref(v_bs_2852_);
goto v___jp_2853_;
}
}
v___jp_2853_:
{
lean_object* v___x_2854_; 
v___x_2854_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_2854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_2876_, lean_object* v_i_2877_, lean_object* v_bs_2878_){
_start:
{
size_t v_sz_boxed_2879_; size_t v_i_boxed_2880_; lean_object* v_res_2881_; 
v_sz_boxed_2879_ = lean_unbox_usize(v_sz_2876_);
lean_dec(v_sz_2876_);
v_i_boxed_2880_ = lean_unbox_usize(v_i_2877_);
lean_dec(v_i_2877_);
v_res_2881_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_2879_, v_i_boxed_2880_, v_bs_2878_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_2886_, lean_object* v_d_2887_){
_start:
{
lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___y_2896_; lean_object* v_received_2897_; lean_object* v___y_2916_; lean_object* v_a_2919_; 
if (lean_obj_tag(v_d_2887_) == 7)
{
lean_object* v_items_2943_; size_t v_sz_2944_; size_t v___x_2945_; lean_object* v___x_2946_; 
v_items_2943_ = lean_ctor_get(v_d_2887_, 0);
v_sz_2944_ = lean_array_size(v_items_2943_);
v___x_2945_ = ((size_t)0ULL);
lean_inc_ref(v_items_2943_);
v___x_2946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_2944_, v___x_2945_, v_items_2943_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; uint8_t v___x_2951_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_2949_ = lean_string_utf8_byte_size(v_a_2947_);
v___x_2950_ = lean_unsigned_to_nat(0u);
v___x_2951_ = lean_nat_dec_eq(v___x_2949_, v___x_2950_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2952_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_2953_ = lean_string_append(v___x_2952_, v_a_2947_);
lean_dec(v_a_2947_);
v___x_2954_ = lean_string_append(v___x_2948_, v___x_2953_);
lean_dec_ref(v___x_2953_);
v_a_2919_ = v___x_2954_;
goto v___jp_2918_;
}
else
{
lean_dec(v_a_2947_);
v_a_2919_ = v___x_2948_;
goto v___jp_2918_;
}
}
else
{
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2955_; 
v_a_2955_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2946_, 1);
v_a_2919_ = v_a_2955_;
goto v___jp_2918_;
}
else
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
lean_dec_ref_known(v_d_2887_, 1);
v_a_2956_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2946_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2946_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
lean_ctor_set_tag(v___x_2958_, 0);
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
else
{
lean_object* v___x_2964_; 
v___x_2964_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_2919_ = v___x_2964_;
goto v___jp_2918_;
}
v___jp_2889_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2892_ = lean_string_append(v___y_2890_, v___y_2891_);
lean_dec_ref(v___y_2891_);
v___x_2893_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
v___jp_2895_:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; uint8_t v___x_2909_; 
v___x_2898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2899_ = lean_string_append(v___x_2898_, v_context_2886_);
v___x_2900_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2901_ = lean_string_append(v___x_2899_, v___x_2900_);
v___x_2902_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_2903_ = lean_string_append(v___x_2901_, v___x_2902_);
v___x_2904_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2905_ = lean_string_append(v___x_2903_, v___x_2904_);
v___x_2906_ = lean_string_append(v___x_2905_, v_received_2897_);
lean_dec_ref(v_received_2897_);
v___x_2907_ = lean_string_utf8_byte_size(v___y_2896_);
v___x_2908_ = lean_unsigned_to_nat(0u);
v___x_2909_ = lean_nat_dec_eq(v___x_2907_, v___x_2908_);
if (v___x_2909_ == 0)
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_2911_ = lean_string_append(v___x_2910_, v___y_2896_);
lean_dec_ref(v___y_2896_);
v___x_2912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_2913_ = lean_string_append(v___x_2911_, v___x_2912_);
v___y_2890_ = v___x_2906_;
v___y_2891_ = v___x_2913_;
goto v___jp_2889_;
}
else
{
lean_object* v___x_2914_; 
lean_dec_ref(v___y_2896_);
v___x_2914_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_2890_ = v___x_2906_;
v___y_2891_ = v___x_2914_;
goto v___jp_2889_;
}
}
v___jp_2915_:
{
lean_object* v___x_2917_; 
v___x_2917_ = l_Lasm_JS_Data_describe(v_d_2887_);
v___y_2896_ = v___y_2916_;
v_received_2897_ = v___x_2917_;
goto v___jp_2895_;
}
v___jp_2918_:
{
if (lean_obj_tag(v_d_2887_) == 9)
{
lean_object* v_value_2920_; lean_object* v_description_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v_value_2920_ = lean_ctor_get(v_d_2887_, 0);
v_description_2921_ = lean_ctor_get(v_d_2887_, 1);
v___x_2922_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2923_ = lean_string_dec_eq(v_description_2921_, v___x_2922_);
if (v___x_2923_ == 0)
{
v___y_2916_ = v_a_2919_;
goto v___jp_2915_;
}
else
{
lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2940_; 
lean_inc(v_value_2920_);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_d_2887_);
if (v_isSharedCheck_2940_ == 0)
{
lean_object* v_unused_2941_; lean_object* v_unused_2942_; 
v_unused_2941_ = lean_ctor_get(v_d_2887_, 1);
lean_dec(v_unused_2941_);
v_unused_2942_ = lean_ctor_get(v_d_2887_, 0);
lean_dec(v_unused_2942_);
v___x_2925_ = v_d_2887_;
v_isShared_2926_ = v_isSharedCheck_2940_;
goto v_resetjp_2924_;
}
else
{
lean_dec(v_d_2887_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2940_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
uint32_t v___x_2927_; uint64_t v___x_2928_; lean_object* v___x_2930_; 
v___x_2927_ = 206;
v___x_2928_ = 0ULL;
lean_inc(v_value_2920_);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 1, v___x_2922_);
v___x_2930_ = v___x_2925_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_value_2920_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2922_);
v___x_2930_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
uint32_t v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lasm_js_value_handle(v_value_2920_);
lean_dec(v_value_2920_);
v___x_2932_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2927_, v___x_2928_, v___x_2930_, v___x_2931_);
lean_dec_ref(v___x_2930_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_object* v_a_2933_; uint8_t v___x_2934_; 
v_a_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2933_);
lean_dec_ref_known(v___x_2932_, 1);
v___x_2934_ = lean_string_validate_utf8(v_a_2933_);
if (v___x_2934_ == 0)
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
lean_dec(v_a_2933_);
v___x_2935_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2936_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2935_);
v___y_2896_ = v_a_2919_;
v_received_2897_ = v___x_2936_;
goto v___jp_2895_;
}
else
{
lean_object* v___x_2937_; 
v___x_2937_ = lean_string_from_utf8_unchecked(v_a_2933_);
v___y_2896_ = v_a_2919_;
v_received_2897_ = v___x_2937_;
goto v___jp_2895_;
}
}
else
{
lean_object* v___x_2938_; 
lean_dec_ref_known(v___x_2932_, 1);
v___x_2938_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_2896_ = v_a_2919_;
v_received_2897_ = v___x_2938_;
goto v___jp_2895_;
}
}
}
}
}
else
{
v___y_2916_ = v_a_2919_;
goto v___jp_2915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_2965_, lean_object* v_d_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2965_, v_d_2966_);
lean_dec_ref(v_context_2965_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_2969_, lean_object* v_bytes_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lasm_JS_Wire_decode(v_bytes_2970_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2974_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2974_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_2969_, v_a_2973_);
return v___x_2974_;
}
else
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2982_; 
v_a_2975_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2977_ = v___x_2972_;
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2972_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_2983_, lean_object* v_bytes_2984_, lean_object* v_a_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_2983_, v_bytes_2984_);
lean_dec_ref(v_bytes_2984_);
lean_dec_ref(v_context_2983_);
return v_res_2986_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_2987_; uint8_t v___x_2988_; uint64_t v___x_2989_; 
v___x_2987_ = 8ULL;
v___x_2988_ = 0;
v___x_2989_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_2988_, v___x_2987_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_2990_, lean_object* v_name_2991_, lean_object* v_args_2992_){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; uint64_t v___x_2997_; lean_object* v___x_2998_; 
v___x_2994_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2995_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2995_, 0, v_o_2990_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
lean_inc_ref(v_name_2991_);
v___x_2996_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2996_, 0, v_name_2991_);
v___x_2997_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_2998_ = l_Lasm_JS_Value_invokeRaw(v___x_2995_, v___x_2996_, v_args_2992_, v___x_2997_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v_a_2999_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_a_2999_);
lean_dec_ref_known(v___x_2998_, 1);
v___x_3000_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3001_ = lean_string_append(v___x_3000_, v_name_2991_);
lean_dec_ref(v_name_2991_);
v___x_3002_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3001_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v___x_3001_);
return v___x_3002_;
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec_ref(v_name_2991_);
v_a_3003_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2998_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2998_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3011_, lean_object* v_name_3012_, lean_object* v_args_3013_, lean_object* v_a_3014_){
_start:
{
lean_object* v_res_3015_; 
v_res_3015_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3011_, v_name_3012_, v_args_3013_);
return v_res_3015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3017_, lean_object* v___f_3018_, lean_object* v_handler_3019_, lean_object* v_options_3020_, lean_object* v_a_3021_, lean_object* v_value_3022_, lean_object* v___x_3023_, lean_object* v___x_3024_, lean_object* v_a_3025_, lean_object* v___x_3026_, lean_object* v___x_3027_, lean_object* v_x_3028_){
_start:
{
uint8_t v___y_3031_; lean_object* v___y_3032_; lean_object* v_val_3033_; 
if (lean_obj_tag(v_x_3028_) == 0)
{
lean_object* v___x_3036_; 
lean_dec(v_a_3025_);
lean_dec_ref(v___x_3023_);
lean_dec(v_value_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_options_3020_);
lean_dec_ref(v_handler_3019_);
lean_dec_ref(v___f_3018_);
lean_dec(v___x_3017_);
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v_x_3028_);
return v___x_3036_;
}
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3094_; 
v_a_3037_ = lean_ctor_get(v_x_3028_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v_x_3028_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3039_ = v_x_3028_;
v_isShared_3040_ = v_isSharedCheck_3094_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v_x_3028_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3094_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3084_; lean_object* v___x_3091_; 
v___x_3091_ = l_Lasm_JS_Data_field(v_a_3037_, v___x_3027_);
if (lean_obj_tag(v___x_3091_) == 4)
{
lean_object* v_s_3092_; 
v_s_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc_ref(v_s_3092_);
lean_dec_ref_known(v___x_3091_, 1);
v___y_3084_ = v_s_3092_;
goto v___jp_3083_;
}
else
{
lean_object* v___x_3093_; 
lean_dec(v___x_3091_);
v___x_3093_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_3084_ = v___x_3093_;
goto v___jp_3083_;
}
v___jp_3041_:
{
lean_object* v___f_3048_; lean_object* v___x_3049_; 
lean_inc(v_a_3037_);
lean_inc(v___x_3017_);
v___f_3048_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3048_, 0, v___x_3017_);
lean_closure_set(v___f_3048_, 1, v___y_3044_);
lean_closure_set(v___f_3048_, 2, v___y_3047_);
lean_closure_set(v___f_3048_, 3, v_options_3020_);
lean_closure_set(v___f_3048_, 4, v___y_3046_);
lean_closure_set(v___f_3048_, 5, v___y_3042_);
lean_closure_set(v___f_3048_, 6, v_a_3021_);
lean_closure_set(v___f_3048_, 7, v_value_3022_);
lean_closure_set(v___f_3048_, 8, v_a_3037_);
lean_closure_set(v___f_3048_, 9, v___x_3023_);
lean_closure_set(v___f_3048_, 10, v___y_3045_);
lean_closure_set(v___f_3048_, 11, v___y_3043_);
v___x_3049_ = l_Lasm_JS_Data_field(v_a_3037_, v___x_3024_);
lean_dec(v_a_3037_);
if (lean_obj_tag(v___x_3049_) == 9)
{
lean_object* v_value_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3073_; 
v_value_3050_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v___x_3049_, 1);
lean_dec(v_unused_3074_);
v___x_3052_ = v___x_3049_;
v_isShared_3053_ = v_isSharedCheck_3073_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_value_3050_);
lean_dec(v___x_3049_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3073_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___f_3054_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3054_, 0, v___f_3048_);
v___x_3055_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3056_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 1, v___x_3056_);
v___x_3058_ = v___x_3052_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_value_3050_);
lean_ctor_set(v_reuseFailAlloc_3072_, 1, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; lean_object* v___x_3063_; 
v___x_3059_ = lean_unsigned_to_nat(1u);
v___x_3060_ = lean_mk_empty_array_with_capacity(v___x_3059_);
v___x_3061_ = lean_array_push(v___x_3060_, v___x_3058_);
v___x_3062_ = 0;
v___x_3063_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3025_, v___x_3055_, v___x_3061_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3066_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v_a_3064_);
v___x_3066_ = v___x_3039_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3064_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
v___y_3031_ = v___x_3062_;
v___y_3032_ = v___f_3054_;
v_val_3033_ = v___x_3066_;
goto v___jp_3030_;
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; 
v_a_3068_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3063_, 1);
if (v_isShared_3040_ == 0)
{
lean_ctor_set_tag(v___x_3039_, 0);
lean_ctor_set(v___x_3039_, 0, v_a_3068_);
v___x_3070_ = v___x_3039_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3068_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
v___y_3031_ = v___x_3062_;
v___y_3032_ = v___f_3054_;
v_val_3033_ = v___x_3070_;
goto v___jp_3030_;
}
}
}
}
}
else
{
lean_object* v___f_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; lean_object* v___x_3079_; 
lean_dec(v___x_3049_);
lean_dec(v_a_3025_);
v___f_3075_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3075_, 0, v___f_3048_);
v___x_3076_ = lean_mk_empty_array_with_capacity(v___x_3017_);
v___x_3077_ = 0;
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v___x_3076_);
v___x_3079_ = v___x_3039_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3076_);
v___x_3079_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
v___x_3081_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3017_, v___x_3077_, v___x_3080_, v___f_3075_);
return v___x_3081_;
}
}
}
v___jp_3083_:
{
lean_object* v___f_3085_; lean_object* v___f_3086_; lean_object* v___f_3087_; lean_object* v___x_3088_; 
lean_inc_n(v___x_3017_, 2);
lean_inc_ref(v___y_3084_);
v___f_3085_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3085_, 0, v___y_3084_);
lean_closure_set(v___f_3085_, 1, v___x_3017_);
lean_closure_set(v___f_3085_, 2, v___f_3018_);
v___f_3086_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3086_, 0, v_handler_3019_);
lean_closure_set(v___f_3086_, 1, v___x_3017_);
lean_closure_set(v___f_3086_, 2, v___f_3085_);
v___f_3087_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3087_, 0, v___f_3086_);
v___x_3088_ = l_Lasm_JS_Data_field(v_a_3037_, v___x_3026_);
if (lean_obj_tag(v___x_3088_) == 4)
{
lean_object* v_s_3089_; 
v_s_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_ref(v_s_3089_);
lean_dec_ref_known(v___x_3088_, 1);
lean_inc_ref_n(v___f_3087_, 3);
v___y_3042_ = v___f_3087_;
v___y_3043_ = v___f_3087_;
v___y_3044_ = v___y_3084_;
v___y_3045_ = v___f_3087_;
v___y_3046_ = v___f_3087_;
v___y_3047_ = v_s_3089_;
goto v___jp_3041_;
}
else
{
lean_object* v___x_3090_; 
lean_dec(v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3087_, 3);
v___y_3042_ = v___f_3087_;
v___y_3043_ = v___f_3087_;
v___y_3044_ = v___y_3084_;
v___y_3045_ = v___f_3087_;
v___y_3046_ = v___f_3087_;
v___y_3047_ = v___x_3090_;
goto v___jp_3041_;
}
}
}
}
v___jp_3030_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3034_, 0, v_val_3033_);
v___x_3035_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3017_, v___y_3031_, v___x_3034_, v___y_3032_);
return v___x_3035_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3095_, lean_object* v___f_3096_, lean_object* v_handler_3097_, lean_object* v_options_3098_, lean_object* v_a_3099_, lean_object* v_value_3100_, lean_object* v___x_3101_, lean_object* v___x_3102_, lean_object* v_a_3103_, lean_object* v___x_3104_, lean_object* v___x_3105_, lean_object* v_x_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3095_, v___f_3096_, v_handler_3097_, v_options_3098_, v_a_3099_, v_value_3100_, v___x_3101_, v___x_3102_, v_a_3103_, v___x_3104_, v___x_3105_, v_x_3106_);
lean_dec_ref(v___x_3105_);
lean_dec_ref(v___x_3104_);
lean_dec_ref(v___x_3102_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3109_, size_t v_i_3110_, lean_object* v_bs_3111_){
_start:
{
uint8_t v___x_3112_; 
v___x_3112_ = lean_usize_dec_lt(v_i_3110_, v_sz_3109_);
if (v___x_3112_ == 0)
{
return v_bs_3111_;
}
else
{
lean_object* v_v_3113_; lean_object* v___x_3114_; lean_object* v_bs_x27_3115_; lean_object* v___x_3116_; size_t v___x_3117_; size_t v___x_3118_; lean_object* v___x_3119_; 
v_v_3113_ = lean_array_uget(v_bs_3111_, v_i_3110_);
v___x_3114_ = lean_unsigned_to_nat(0u);
v_bs_x27_3115_ = lean_array_uset(v_bs_3111_, v_i_3110_, v___x_3114_);
v___x_3116_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3116_, 0, v_v_3113_);
v___x_3117_ = ((size_t)1ULL);
v___x_3118_ = lean_usize_add(v_i_3110_, v___x_3117_);
v___x_3119_ = lean_array_uset(v_bs_x27_3115_, v_i_3110_, v___x_3116_);
v_i_3110_ = v___x_3118_;
v_bs_3111_ = v___x_3119_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3121_, lean_object* v_i_3122_, lean_object* v_bs_3123_){
_start:
{
size_t v_sz_boxed_3124_; size_t v_i_boxed_3125_; lean_object* v_res_3126_; 
v_sz_boxed_3124_ = lean_unbox_usize(v_sz_3121_);
lean_dec(v_sz_3121_);
v_i_boxed_3125_ = lean_unbox_usize(v_i_3122_);
lean_dec(v_i_3122_);
v_res_3126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3124_, v_i_boxed_3125_, v_bs_3123_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3127_, lean_object* v_keys_3128_){
_start:
{
uint32_t v___x_3130_; uint32_t v___x_3131_; uint64_t v___x_3132_; size_t v_sz_3133_; size_t v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3130_ = 203;
v___x_3131_ = lasm_js_value_handle(v_o_3127_);
v___x_3132_ = 0ULL;
v_sz_3133_ = lean_array_size(v_keys_3128_);
v___x_3134_ = ((size_t)0ULL);
v___x_3135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3133_, v___x_3134_, v_keys_3128_);
v___x_3136_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
v___x_3137_ = l_Lasm_JS_Wire_encode(v___x_3136_);
lean_dec_ref_known(v___x_3136_, 1);
v___x_3138_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3139_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3139_, 0, v_o_3127_);
lean_ctor_set(v___x_3139_, 1, v___x_3138_);
v___x_3140_ = lasm_js_call(v___x_3130_, v___x_3131_, v___x_3132_, v___x_3137_, v___x_3139_);
lean_dec_ref_known(v___x_3139_, 2);
lean_dec_ref(v___x_3137_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3142_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3140_, 1);
v___x_3142_ = l_Lasm_JS_Wire_decode(v_a_3141_);
lean_dec(v_a_3141_);
return v___x_3142_;
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
v_a_3143_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3140_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3140_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3151_, lean_object* v_keys_3152_, lean_object* v_a_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3151_, v_keys_3152_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v___f_3175_, lean_object* v_handler_3176_, lean_object* v_options_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_args_3180_){
_start:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; uint8_t v___x_3186_; 
v___x_3184_ = lean_unsigned_to_nat(0u);
v___x_3185_ = lean_array_get_size(v_args_3180_);
v___x_3186_ = lean_nat_dec_lt(v___x_3184_, v___x_3185_);
if (v___x_3186_ == 0)
{
lean_dec(v_a_3179_);
lean_dec(v_a_3178_);
lean_dec_ref(v_options_3177_);
lean_dec_ref(v_handler_3176_);
lean_dec_ref(v___f_3175_);
goto v___jp_3182_;
}
else
{
lean_object* v___x_3187_; 
v___x_3187_ = lean_array_fget_borrowed(v_args_3180_, v___x_3184_);
if (lean_obj_tag(v___x_3187_) == 9)
{
lean_object* v_value_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___f_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; lean_object* v_val_3197_; lean_object* v___x_3200_; 
v_value_3188_ = lean_ctor_get(v___x_3187_, 0);
v___x_3189_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3190_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3191_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3192_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3188_, 2);
v___f_3193_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3193_, 0, v___x_3184_);
lean_closure_set(v___f_3193_, 1, v___f_3175_);
lean_closure_set(v___f_3193_, 2, v_handler_3176_);
lean_closure_set(v___f_3193_, 3, v_options_3177_);
lean_closure_set(v___f_3193_, 4, v_a_3178_);
lean_closure_set(v___f_3193_, 5, v_value_3188_);
lean_closure_set(v___f_3193_, 6, v___x_3192_);
lean_closure_set(v___f_3193_, 7, v___x_3191_);
lean_closure_set(v___f_3193_, 8, v_a_3179_);
lean_closure_set(v___f_3193_, 9, v___x_3190_);
lean_closure_set(v___f_3193_, 10, v___x_3189_);
v___x_3194_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3195_ = 0;
v___x_3200_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3188_, v___x_3194_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3200_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3200_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 1);
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
v_val_3197_ = v___x_3206_;
goto v___jp_3196_;
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
v_a_3209_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3200_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3200_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
lean_ctor_set_tag(v___x_3211_, 0);
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
v_val_3197_ = v___x_3214_;
goto v___jp_3196_;
}
}
}
v___jp_3196_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_val_3197_);
v___x_3199_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3184_, v___x_3195_, v___x_3198_, v___f_3193_);
return v___x_3199_;
}
}
else
{
lean_dec(v_a_3179_);
lean_dec(v_a_3178_);
lean_dec_ref(v_options_3177_);
lean_dec_ref(v_handler_3176_);
lean_dec_ref(v___f_3175_);
goto v___jp_3182_;
}
}
v___jp_3182_:
{
lean_object* v___x_3183_; 
v___x_3183_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3183_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v___f_3217_, lean_object* v_handler_3218_, lean_object* v_options_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_args_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v___f_3217_, v_handler_3218_, v_options_3219_, v_a_3220_, v_a_3221_, v_args_3222_);
lean_dec_ref(v_args_3222_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3228_, lean_object* v_options_3229_){
_start:
{
lean_object* v___f_3231_; lean_object* v___x_3232_; 
v___f_3231_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3232_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc_n(v_a_3233_, 2);
lean_dec_ref_known(v___x_3232_, 1);
v___x_3234_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3235_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3233_, v___x_3234_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3238_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3233_, v___x_3237_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___f_3240_; lean_object* v___x_3241_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3238_, 1);
v___f_3240_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 7, 5);
lean_closure_set(v___f_3240_, 0, v___f_3231_);
lean_closure_set(v___f_3240_, 1, v_handler_3228_);
lean_closure_set(v___f_3240_, 2, v_options_3229_);
lean_closure_set(v___f_3240_, 3, v_a_3236_);
lean_closure_set(v___f_3240_, 4, v_a_3239_);
v___x_3241_ = l_Lasm_JS_Function_ofFn(v___f_3240_);
return v___x_3241_;
}
else
{
lean_dec(v_a_3236_);
lean_dec_ref(v_options_3229_);
lean_dec_ref(v_handler_3228_);
return v___x_3238_;
}
}
else
{
lean_dec(v_a_3233_);
lean_dec_ref(v_options_3229_);
lean_dec_ref(v_handler_3228_);
return v___x_3235_;
}
}
else
{
lean_dec_ref(v_options_3229_);
lean_dec_ref(v_handler_3228_);
return v___x_3232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3242_, lean_object* v_options_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3242_, v_options_3243_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3246_){
_start:
{
lean_object* v___x_3248_; 
v___x_3248_ = l_Lasm_JS_Wire_decode(v_bytes_3246_);
return v___x_3248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3249_, lean_object* v_a_3250_){
_start:
{
lean_object* v_res_3251_; 
v_res_3251_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3249_);
lean_dec_ref(v_bytes_3249_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3252_, lean_object* v_bytes_3253_){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = l_Lasm_JS_Wire_decode(v_bytes_3253_);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3256_, lean_object* v_bytes_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3256_, v_bytes_3257_);
lean_dec_ref(v_bytes_3257_);
lean_dec_ref(v_context_3256_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3260_){
_start:
{
if (lean_obj_tag(v_x_3260_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3270_; 
v_a_3262_ = lean_ctor_get(v_x_3260_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v_x_3260_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3264_ = v_x_3260_;
v_isShared_3265_ = v_isSharedCheck_3270_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v_x_3260_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3270_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
return v___x_3268_;
}
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3280_; 
v_a_3271_ = lean_ctor_get(v_x_3260_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_x_3260_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3273_ = v_x_3260_;
v_isShared_3274_ = v_isSharedCheck_3280_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v_x_3260_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3280_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
return v___x_3278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3281_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3288_){
_start:
{
if (lean_obj_tag(v_x_3288_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3298_; 
v_a_3290_ = lean_ctor_get(v_x_3288_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v_x_3288_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3292_ = v_x_3288_;
v_isShared_3293_ = v_isSharedCheck_3298_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v_x_3288_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3298_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
return v___x_3296_;
}
}
}
else
{
lean_object* v___x_3299_; 
lean_dec_ref_known(v_x_3288_, 1);
v___x_3299_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3299_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3300_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3303_, lean_object* v_x_3304_){
_start:
{
if (lean_obj_tag(v_x_3304_) == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3314_; 
lean_dec_ref(v___f_3303_);
v_a_3306_ = lean_ctor_get(v_x_3304_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_x_3304_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3308_ = v_x_3304_;
v_isShared_3309_ = v_isSharedCheck_3314_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v_x_3304_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3314_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
lean_object* v___x_3312_; 
v___x_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3311_);
return v___x_3312_;
}
}
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3335_; 
v_a_3315_ = lean_ctor_get(v_x_3304_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v_x_3304_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3317_ = v_x_3304_;
v_isShared_3318_ = v_isSharedCheck_3335_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v_x_3304_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3335_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v_flush_3319_; lean_object* v___x_3320_; uint8_t v___x_3321_; lean_object* v_val_3323_; lean_object* v___x_3326_; 
v_flush_3319_ = lean_ctor_get(v_a_3315_, 0);
lean_inc_ref(v_flush_3319_);
lean_dec(v_a_3315_);
v___x_3320_ = lean_unsigned_to_nat(0u);
v___x_3321_ = 0;
v___x_3326_ = lean_apply_1(v_flush_3319_, lean_box(0));
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v___x_3329_; 
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3327_);
lean_dec_ref_known(v___x_3326_, 1);
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 0, v_a_3327_);
v___x_3329_ = v___x_3317_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3327_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
v_val_3323_ = v___x_3329_;
goto v___jp_3322_;
}
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; 
v_a_3331_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3331_);
lean_dec_ref_known(v___x_3326_, 1);
if (v_isShared_3318_ == 0)
{
lean_ctor_set_tag(v___x_3317_, 0);
lean_ctor_set(v___x_3317_, 0, v_a_3331_);
v___x_3333_ = v___x_3317_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
v_val_3323_ = v___x_3333_;
goto v___jp_3322_;
}
}
v___jp_3322_:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v_val_3323_);
v___x_3325_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3320_, v___x_3321_, v___x_3324_, v___f_3303_);
return v___x_3325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3336_, lean_object* v_x_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3336_, v_x_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3340_, lean_object* v_x_3341_){
_start:
{
if (lean_obj_tag(v_x_3341_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3351_; 
lean_dec_ref(v___f_3340_);
v_a_3343_ = lean_ctor_get(v_x_3341_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_x_3341_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3345_ = v_x_3341_;
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v_x_3341_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
lean_object* v___x_3349_; 
v___x_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
return v___x_3349_;
}
}
}
else
{
lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3363_; 
v_isSharedCheck_3363_ = !lean_is_exclusive(v_x_3341_);
if (v_isSharedCheck_3363_ == 0)
{
lean_object* v_unused_3364_; 
v_unused_3364_ = lean_ctor_get(v_x_3341_, 0);
lean_dec(v_unused_3364_);
v___x_3353_ = v_x_3341_;
v_isShared_3354_ = v_isSharedCheck_3363_;
goto v_resetjp_3352_;
}
else
{
lean_dec(v_x_3341_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3363_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; uint8_t v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = 0;
v___x_3357_ = lean_get_stdout();
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 0, v___x_3357_);
v___x_3359_ = v___x_3353_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
v___x_3361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3355_, v___x_3356_, v___x_3360_, v___f_3340_);
return v___x_3361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3365_, lean_object* v_x_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3365_, v_x_3366_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3369_){
_start:
{
if (lean_obj_tag(v_x_3369_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3379_; 
v_a_3371_ = lean_ctor_get(v_x_3369_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v_x_3369_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3373_ = v_x_3369_;
v_isShared_3374_ = v_isSharedCheck_3379_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v_x_3369_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3379_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
return v___x_3377_;
}
}
}
else
{
lean_object* v___x_3380_; 
lean_dec_ref_known(v_x_3369_, 1);
v___x_3380_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3381_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3385_, lean_object* v___x_3386_, lean_object* v_____r_3387_){
_start:
{
lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3389_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3390_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3390_, 0, v_snd_3385_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
lean_ctor_set(v___x_3390_, 2, v___x_3386_);
v___x_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3391_, 0, v___x_3390_);
v___x_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3393_, lean_object* v___x_3394_, lean_object* v_____r_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3393_, v___x_3394_, v_____r_3395_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3398_, lean_object* v_x_3399_){
_start:
{
if (lean_obj_tag(v_x_3399_) == 0)
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3409_; 
lean_dec_ref(v___f_3398_);
v_a_3401_ = lean_ctor_get(v_x_3399_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_x_3399_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3403_ = v_x_3399_;
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v_x_3399_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3406_; 
if (v_isShared_3404_ == 0)
{
v___x_3406_ = v___x_3403_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3401_);
v___x_3406_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
lean_object* v___x_3407_; 
v___x_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
return v___x_3407_;
}
}
}
else
{
lean_object* v_a_3410_; 
v_a_3410_ = lean_ctor_get(v_x_3399_, 0);
lean_inc(v_a_3410_);
lean_dec_ref_known(v_x_3399_, 1);
if (lean_obj_tag(v_a_3410_) == 0)
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3419_; 
lean_dec_ref(v___f_3398_);
v_a_3411_ = lean_ctor_get(v_a_3410_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_a_3410_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3413_ = v_a_3410_;
v_isShared_3414_ = v_isSharedCheck_3419_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v_a_3410_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3419_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
lean_ctor_set_tag(v___x_3413_, 1);
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; 
v___x_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
return v___x_3417_;
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3421_; 
v_a_3420_ = lean_ctor_get(v_a_3410_, 0);
lean_inc(v_a_3420_);
lean_dec_ref_known(v_a_3410_, 1);
v___x_3421_ = lean_apply_2(v___f_3398_, v_a_3420_, lean_box(0));
return v___x_3421_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3422_, lean_object* v_x_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3422_, v_x_3423_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3427_, lean_object* v___x_3428_, lean_object* v_x_3429_){
_start:
{
if (lean_obj_tag(v_x_3429_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3439_; 
lean_dec_ref(v___x_3428_);
lean_dec(v_snd_3427_);
v_a_3431_ = lean_ctor_get(v_x_3429_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_x_3429_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3433_ = v_x_3429_;
v_isShared_3434_ = v_isSharedCheck_3439_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v_x_3429_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3439_;
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
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
lean_object* v___x_3437_; 
v___x_3437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3436_);
return v___x_3437_;
}
}
}
else
{
lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3450_; 
v_isSharedCheck_3450_ = !lean_is_exclusive(v_x_3429_);
if (v_isSharedCheck_3450_ == 0)
{
lean_object* v_unused_3451_; 
v_unused_3451_ = lean_ctor_get(v_x_3429_, 0);
lean_dec(v_unused_3451_);
v___x_3441_ = v_x_3429_;
v_isShared_3442_ = v_isSharedCheck_3450_;
goto v_resetjp_3440_;
}
else
{
lean_dec(v_x_3429_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3450_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3446_; 
v___x_3443_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3444_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3444_, 0, v_snd_3427_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
lean_ctor_set(v___x_3444_, 2, v___x_3428_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3444_);
v___x_3446_ = v___x_3441_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
return v___x_3448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3452_, lean_object* v___x_3453_, lean_object* v_x_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3452_, v___x_3453_, v_x_3454_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3457_, lean_object* v_name_3458_, lean_object* v_args_3459_){
_start:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; uint64_t v___x_3464_; lean_object* v___x_3465_; 
v___x_3461_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3462_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3462_, 0, v_o_3457_);
lean_ctor_set(v___x_3462_, 1, v___x_3461_);
v___x_3463_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3463_, 0, v_name_3458_);
v___x_3464_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3465_ = l_Lasm_JS_Value_invokeRaw(v___x_3462_, v___x_3463_, v_args_3459_, v___x_3464_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v___x_3467_; 
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v___x_3467_ = l_Lasm_JS_Wire_decode(v_a_3466_);
lean_dec(v_a_3466_);
return v___x_3467_;
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
v_a_3468_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3465_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3465_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3476_, lean_object* v_name_3477_, lean_object* v_args_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3476_, v_name_3477_, v_args_3478_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3481_, uint8_t v___x_3482_, lean_object* v___f_3483_, lean_object* v_snd_3484_, lean_object* v_chunk_3485_){
_start:
{
lean_object* v_val_3488_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3491_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3492_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3492_, 0, v_chunk_3485_);
v___x_3493_ = lean_unsigned_to_nat(1u);
v___x_3494_ = lean_mk_empty_array_with_capacity(v___x_3493_);
v___x_3495_ = lean_array_push(v___x_3494_, v___x_3492_);
v___x_3496_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3484_, v___x_3491_, v___x_3495_);
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3496_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3496_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
lean_ctor_set_tag(v___x_3499_, 1);
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
v_val_3488_ = v___x_3502_;
goto v___jp_3487_;
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
v_a_3505_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3496_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3496_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 0);
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
v_val_3488_ = v___x_3510_;
goto v___jp_3487_;
}
}
}
v___jp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3489_, 0, v_val_3488_);
v___x_3490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3481_, v___x_3482_, v___x_3489_, v___f_3483_);
return v___x_3490_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3513_, lean_object* v___x_3514_, lean_object* v___f_3515_, lean_object* v_snd_3516_, lean_object* v_chunk_3517_, lean_object* v___y_3518_){
_start:
{
uint8_t v___x_18404__boxed_3519_; lean_object* v_res_3520_; 
v___x_18404__boxed_3519_ = lean_unbox(v___x_3514_);
v_res_3520_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3513_, v___x_18404__boxed_3519_, v___f_3515_, v_snd_3516_, v_chunk_3517_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3521_, uint8_t v___x_3522_, lean_object* v___f_3523_, lean_object* v_x_3524_){
_start:
{
lean_object* v_val_3527_; 
if (lean_obj_tag(v_x_3524_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3546_; 
v_a_3530_ = lean_ctor_get(v_x_3524_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v_x_3524_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3532_ = v_x_3524_;
v_isShared_3533_ = v_isSharedCheck_3546_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v_x_3524_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3546_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3534_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3535_ = lean_io_error_to_string(v_a_3530_);
v___x_3536_ = lean_string_append(v___x_3534_, v___x_3535_);
lean_dec_ref(v___x_3535_);
v___x_3537_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3536_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3540_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
if (v_isShared_3533_ == 0)
{
lean_ctor_set_tag(v___x_3532_, 1);
lean_ctor_set(v___x_3532_, 0, v_a_3538_);
v___x_3540_ = v___x_3532_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
v_val_3527_ = v___x_3540_;
goto v___jp_3526_;
}
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3544_; 
v_a_3542_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3537_, 1);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 0, v_a_3542_);
v___x_3544_ = v___x_3532_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3542_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
v_val_3527_ = v___x_3544_;
goto v___jp_3526_;
}
}
}
}
else
{
lean_object* v___x_3547_; 
lean_dec_ref(v___f_3523_);
lean_dec(v___x_3521_);
v___x_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3547_, 0, v_x_3524_);
return v___x_3547_;
}
v___jp_3526_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v_val_3527_);
v___x_3529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3521_, v___x_3522_, v___x_3528_, v___f_3523_);
return v___x_3529_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3548_, lean_object* v___x_3549_, lean_object* v___f_3550_, lean_object* v_x_3551_, lean_object* v___y_3552_){
_start:
{
uint8_t v___x_18472__boxed_3553_; lean_object* v_res_3554_; 
v___x_18472__boxed_3553_ = lean_unbox(v___x_3549_);
v_res_3554_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3548_, v___x_18472__boxed_3553_, v___f_3550_, v_x_3551_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3555_, lean_object* v_snd_3556_, lean_object* v___y_3557_, uint16_t v_status_3558_, lean_object* v_body_3559_, lean_object* v___x_3560_, lean_object* v___f_3561_, lean_object* v___f_3562_, lean_object* v___f_3563_, lean_object* v___f_3564_, lean_object* v___f_3565_, lean_object* v_x_3566_){
_start:
{
if (lean_obj_tag(v_x_3566_) == 0)
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3576_; 
lean_dec_ref(v___f_3565_);
lean_dec_ref(v___f_3564_);
lean_dec_ref(v___f_3563_);
lean_dec_ref(v___f_3562_);
lean_dec_ref(v___f_3561_);
lean_dec(v___x_3560_);
lean_dec_ref(v_body_3559_);
lean_dec(v_snd_3556_);
lean_dec(v_stream_3555_);
v_a_3568_ = lean_ctor_get(v_x_3566_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v_x_3566_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3570_ = v_x_3566_;
v_isShared_3571_ = v_isSharedCheck_3576_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v_x_3566_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3576_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; 
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
return v___x_3574_;
}
}
}
else
{
lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3606_; 
v_isSharedCheck_3606_ = !lean_is_exclusive(v_x_3566_);
if (v_isSharedCheck_3606_ == 0)
{
lean_object* v_unused_3607_; 
v_unused_3607_ = lean_ctor_get(v_x_3566_, 0);
lean_dec(v_unused_3607_);
v___x_3578_ = v_x_3566_;
v_isShared_3579_ = v_isSharedCheck_3606_;
goto v_resetjp_3577_;
}
else
{
lean_dec(v_x_3566_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3606_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
if (lean_obj_tag(v_stream_3555_) == 0)
{
lean_object* v___x_3580_; lean_object* v___y_3582_; uint8_t v___x_3591_; 
lean_dec_ref(v___f_3565_);
lean_dec_ref(v___f_3564_);
lean_dec_ref(v___f_3563_);
lean_dec_ref(v___f_3562_);
lean_dec_ref(v___f_3561_);
lean_dec(v___x_3560_);
v___x_3580_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3591_ = l_Lasm_Fetch_bodyless(v___y_3557_, v_status_3558_);
if (v___x_3591_ == 0)
{
lean_object* v___x_3592_; 
v___x_3592_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_body_3559_);
v___y_3582_ = v___x_3592_;
goto v___jp_3581_;
}
else
{
lean_object* v___x_3593_; 
lean_dec_ref(v_body_3559_);
v___x_3593_ = lean_box(0);
v___y_3582_ = v___x_3593_;
goto v___jp_3581_;
}
v___jp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3588_; 
v___x_3583_ = lean_unsigned_to_nat(1u);
v___x_3584_ = lean_mk_empty_array_with_capacity(v___x_3583_);
v___x_3585_ = lean_array_push(v___x_3584_, v___y_3582_);
v___x_3586_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3586_, 0, v_snd_3556_);
lean_ctor_set(v___x_3586_, 1, v___x_3580_);
lean_ctor_set(v___x_3586_, 2, v___x_3585_);
if (v_isShared_3579_ == 0)
{
lean_ctor_set(v___x_3578_, 0, v___x_3586_);
v___x_3588_ = v___x_3578_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3586_);
v___x_3588_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3589_; 
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
}
}
else
{
lean_object* v_val_3594_; uint8_t v___x_3595_; 
lean_del_object(v___x_3578_);
lean_dec_ref(v_body_3559_);
v_val_3594_ = lean_ctor_get(v_stream_3555_, 0);
lean_inc(v_val_3594_);
lean_dec_ref_known(v_stream_3555_, 1);
v___x_3595_ = l_Lasm_Fetch_bodyless(v___y_3557_, v_status_3558_);
if (v___x_3595_ == 0)
{
lean_object* v___x_3596_; lean_object* v___f_3597_; lean_object* v___x_3598_; lean_object* v___f_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; 
lean_dec_ref(v___f_3565_);
v___x_3596_ = lean_box(v___x_3595_);
lean_inc_n(v___x_3560_, 4);
v___f_3597_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3597_, 0, v___x_3560_);
lean_closure_set(v___f_3597_, 1, v___x_3596_);
lean_closure_set(v___f_3597_, 2, v___f_3561_);
lean_closure_set(v___f_3597_, 3, v_snd_3556_);
v___x_3598_ = lean_box(v___x_3595_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3599_, 0, v___x_3560_);
lean_closure_set(v___f_3599_, 1, v___x_3598_);
lean_closure_set(v___f_3599_, 2, v___f_3562_);
v___x_3600_ = lean_apply_2(v_val_3594_, v___f_3597_, lean_box(0));
v___x_3601_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3560_, v___x_3595_, v___x_3600_, v___f_3563_);
v___x_3602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3560_, v___x_3595_, v___x_3601_, v___f_3599_);
v___x_3603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3560_, v___x_3595_, v___x_3602_, v___f_3564_);
return v___x_3603_;
}
else
{
lean_object* v___x_3604_; lean_object* v___x_3605_; 
lean_dec(v_val_3594_);
lean_dec_ref(v___f_3564_);
lean_dec_ref(v___f_3563_);
lean_dec_ref(v___f_3562_);
lean_dec_ref(v___f_3561_);
lean_dec(v___x_3560_);
lean_dec(v_snd_3556_);
v___x_3604_ = lean_box(0);
v___x_3605_ = lean_apply_2(v___f_3565_, v___x_3604_, lean_box(0));
return v___x_3605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3608_, lean_object* v_snd_3609_, lean_object* v___y_3610_, lean_object* v_status_3611_, lean_object* v_body_3612_, lean_object* v___x_3613_, lean_object* v___f_3614_, lean_object* v___f_3615_, lean_object* v___f_3616_, lean_object* v___f_3617_, lean_object* v___f_3618_, lean_object* v_x_3619_, lean_object* v___y_3620_){
_start:
{
uint16_t v_status_boxed_3621_; lean_object* v_res_3622_; 
v_status_boxed_3621_ = lean_unbox(v_status_3611_);
v_res_3622_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3608_, v_snd_3609_, v___y_3610_, v_status_boxed_3621_, v_body_3612_, v___x_3613_, v___f_3614_, v___f_3615_, v___f_3616_, v___f_3617_, v___f_3618_, v_x_3619_);
lean_dec_ref(v___y_3610_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3623_, size_t v_i_3624_, size_t v_stop_3625_, lean_object* v_b_3626_){
_start:
{
uint8_t v___x_3627_; 
v___x_3627_ = lean_usize_dec_eq(v_i_3624_, v_stop_3625_);
if (v___x_3627_ == 0)
{
lean_object* v___x_3628_; lean_object* v_fst_3629_; lean_object* v_snd_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; size_t v___x_3635_; size_t v___x_3636_; 
v___x_3628_ = lean_array_uget_borrowed(v_as_3623_, v_i_3624_);
v_fst_3629_ = lean_ctor_get(v___x_3628_, 0);
v_snd_3630_ = lean_ctor_get(v___x_3628_, 1);
lean_inc(v_fst_3629_);
v___x_3631_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3631_, 0, v_fst_3629_);
v___x_3632_ = lean_array_push(v_b_3626_, v___x_3631_);
lean_inc(v_snd_3630_);
v___x_3633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3633_, 0, v_snd_3630_);
v___x_3634_ = lean_array_push(v___x_3632_, v___x_3633_);
v___x_3635_ = ((size_t)1ULL);
v___x_3636_ = lean_usize_add(v_i_3624_, v___x_3635_);
v_i_3624_ = v___x_3636_;
v_b_3626_ = v___x_3634_;
goto _start;
}
else
{
return v_b_3626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3638_, lean_object* v_i_3639_, lean_object* v_stop_3640_, lean_object* v_b_3641_){
_start:
{
size_t v_i_boxed_3642_; size_t v_stop_boxed_3643_; lean_object* v_res_3644_; 
v_i_boxed_3642_ = lean_unbox_usize(v_i_3639_);
lean_dec(v_i_3639_);
v_stop_boxed_3643_ = lean_unbox_usize(v_stop_3640_);
lean_dec(v_stop_3640_);
v_res_3644_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3638_, v_i_boxed_3642_, v_stop_boxed_3643_, v_b_3641_);
lean_dec_ref(v_as_3638_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3646_, lean_object* v_snd_3647_, lean_object* v___y_3648_, lean_object* v___f_3649_, lean_object* v___f_3650_, lean_object* v_x_3651_){
_start:
{
lean_object* v___y_3654_; uint8_t v___y_3655_; lean_object* v_val_3656_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; 
if (lean_obj_tag(v_x_3651_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3695_; 
lean_dec_ref(v___f_3650_);
lean_dec_ref(v___f_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v_snd_3647_);
lean_dec(v___x_3646_);
v_a_3687_ = lean_ctor_get(v_x_3651_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_x_3651_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3689_ = v_x_3651_;
v_isShared_3690_ = v_isSharedCheck_3695_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v_x_3651_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3695_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3692_; 
if (v_isShared_3690_ == 0)
{
v___x_3692_ = v___x_3689_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3687_);
v___x_3692_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
lean_object* v___x_3693_; 
v___x_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
return v___x_3693_;
}
}
}
else
{
lean_object* v_a_3696_; uint16_t v_status_3697_; lean_object* v_headers_3698_; lean_object* v_body_3699_; lean_object* v_stream_3700_; lean_object* v___x_3701_; lean_object* v___f_3702_; lean_object* v___f_3703_; lean_object* v___f_3704_; lean_object* v___y_3706_; lean_object* v___x_3718_; uint8_t v___x_3719_; 
v_a_3696_ = lean_ctor_get(v_x_3651_, 0);
lean_inc(v_a_3696_);
lean_dec_ref_known(v_x_3651_, 1);
v_status_3697_ = lean_ctor_get_uint16(v_a_3696_, sizeof(void*)*3);
v_headers_3698_ = lean_ctor_get(v_a_3696_, 0);
lean_inc_ref(v_headers_3698_);
v_body_3699_ = lean_ctor_get(v_a_3696_, 1);
lean_inc_ref(v_body_3699_);
v_stream_3700_ = lean_ctor_get(v_a_3696_, 2);
lean_inc(v_stream_3700_);
lean_dec(v_a_3696_);
v___x_3701_ = lean_mk_empty_array_with_capacity(v___x_3646_);
lean_inc_ref_n(v___x_3701_, 2);
lean_inc_n(v_snd_3647_, 2);
v___f_3702_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3702_, 0, v_snd_3647_);
lean_closure_set(v___f_3702_, 1, v___x_3701_);
lean_inc_ref(v___f_3702_);
v___f_3703_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3703_, 0, v___f_3702_);
v___f_3704_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3704_, 0, v_snd_3647_);
lean_closure_set(v___f_3704_, 1, v___x_3701_);
v___x_3718_ = lean_array_get_size(v_headers_3698_);
v___x_3719_ = lean_nat_dec_lt(v___x_3646_, v___x_3718_);
if (v___x_3719_ == 0)
{
lean_dec_ref(v_headers_3698_);
v___y_3706_ = v___x_3701_;
goto v___jp_3705_;
}
else
{
uint8_t v___x_3720_; 
v___x_3720_ = lean_nat_dec_le(v___x_3718_, v___x_3718_);
if (v___x_3720_ == 0)
{
if (v___x_3719_ == 0)
{
lean_dec_ref(v_headers_3698_);
v___y_3706_ = v___x_3701_;
goto v___jp_3705_;
}
else
{
size_t v___x_3721_; size_t v___x_3722_; lean_object* v___x_3723_; 
v___x_3721_ = ((size_t)0ULL);
v___x_3722_ = lean_usize_of_nat(v___x_3718_);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3698_, v___x_3721_, v___x_3722_, v___x_3701_);
lean_dec_ref(v_headers_3698_);
v___y_3706_ = v___x_3723_;
goto v___jp_3705_;
}
}
else
{
size_t v___x_3724_; size_t v___x_3725_; lean_object* v___x_3726_; 
v___x_3724_ = ((size_t)0ULL);
v___x_3725_ = lean_usize_of_nat(v___x_3718_);
v___x_3726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3698_, v___x_3724_, v___x_3725_, v___x_3701_);
lean_dec_ref(v_headers_3698_);
v___y_3706_ = v___x_3726_;
goto v___jp_3705_;
}
}
v___jp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___f_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; uint8_t v___x_3714_; 
v___x_3707_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3708_ = lean_box(v_status_3697_);
lean_inc(v___x_3646_);
lean_inc(v_snd_3647_);
v___f_3709_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3709_, 0, v_stream_3700_);
lean_closure_set(v___f_3709_, 1, v_snd_3647_);
lean_closure_set(v___f_3709_, 2, v___y_3648_);
lean_closure_set(v___f_3709_, 3, v___x_3708_);
lean_closure_set(v___f_3709_, 4, v_body_3699_);
lean_closure_set(v___f_3709_, 5, v___x_3646_);
lean_closure_set(v___f_3709_, 6, v___f_3649_);
lean_closure_set(v___f_3709_, 7, v___f_3704_);
lean_closure_set(v___f_3709_, 8, v___f_3650_);
lean_closure_set(v___f_3709_, 9, v___f_3703_);
lean_closure_set(v___f_3709_, 10, v___f_3702_);
v___x_3710_ = lean_uint16_to_nat(v_status_3697_);
v___x_3711_ = lean_nat_to_int(v___x_3710_);
v___x_3712_ = lean_nat_abs(v___x_3711_);
v___x_3713_ = lean_cstr_to_nat("9007199254740991");
v___x_3714_ = lean_nat_dec_le(v___x_3712_, v___x_3713_);
lean_dec(v___x_3712_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; 
v___x_3715_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3711_);
v___y_3660_ = v___y_3706_;
v___y_3661_ = v___x_3707_;
v___y_3662_ = v___f_3709_;
v___y_3663_ = v___x_3715_;
goto v___jp_3659_;
}
else
{
double v___x_3716_; lean_object* v___x_3717_; 
v___x_3716_ = l_Float_ofInt(v___x_3711_);
lean_dec(v___x_3711_);
v___x_3717_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3717_, 0, v___x_3716_);
v___y_3660_ = v___y_3706_;
v___y_3661_ = v___x_3707_;
v___y_3662_ = v___f_3709_;
v___y_3663_ = v___x_3717_;
goto v___jp_3659_;
}
}
}
v___jp_3653_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3657_, 0, v_val_3656_);
v___x_3658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3646_, v___y_3655_, v___x_3657_, v___y_3654_);
return v___x_3658_;
}
v___jp_3659_:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; lean_object* v___x_3670_; 
v___x_3664_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3664_, 0, v___y_3660_);
v___x_3665_ = lean_unsigned_to_nat(2u);
v___x_3666_ = lean_mk_empty_array_with_capacity(v___x_3665_);
v___x_3667_ = lean_array_push(v___x_3666_, v___y_3663_);
v___x_3668_ = lean_array_push(v___x_3667_, v___x_3664_);
v___x_3669_ = 0;
lean_inc_ref(v___y_3661_);
v___x_3670_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3647_, v___y_3661_, v___x_3668_);
if (lean_obj_tag(v___x_3670_) == 0)
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
v_a_3671_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3670_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3670_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
lean_ctor_set_tag(v___x_3673_, 1);
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
v___y_3654_ = v___y_3662_;
v___y_3655_ = v___x_3669_;
v_val_3656_ = v___x_3676_;
goto v___jp_3653_;
}
}
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
v_a_3679_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3670_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3670_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
lean_ctor_set_tag(v___x_3681_, 0);
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
v___y_3654_ = v___y_3662_;
v___y_3655_ = v___x_3669_;
v_val_3656_ = v___x_3684_;
goto v___jp_3653_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3727_, lean_object* v_snd_3728_, lean_object* v___y_3729_, lean_object* v___f_3730_, lean_object* v___f_3731_, lean_object* v_x_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3727_, v_snd_3728_, v___y_3729_, v___f_3730_, v___f_3731_, v_x_3732_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3735_, lean_object* v___x_3736_, lean_object* v___f_3737_, lean_object* v_request_3738_){
_start:
{
uint8_t v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3740_ = 0;
v___x_3741_ = l_Lasm_Fetch_respond(v_handler_3735_, v_request_3738_);
v___x_3742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3736_, v___x_3740_, v___x_3741_, v___f_3737_);
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3743_, lean_object* v___x_3744_, lean_object* v___f_3745_, lean_object* v_request_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3743_, v___x_3744_, v___f_3745_, v_request_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3749_, lean_object* v_x_3750_){
_start:
{
if (lean_obj_tag(v_x_3750_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3760_; 
lean_dec_ref(v___f_3749_);
v_a_3752_ = lean_ctor_get(v_x_3750_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v_x_3750_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3754_ = v_x_3750_;
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v_x_3750_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
lean_object* v___x_3758_; 
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
return v___x_3758_;
}
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3762_; 
v_a_3761_ = lean_ctor_get(v_x_3750_, 0);
lean_inc(v_a_3761_);
lean_dec_ref_known(v_x_3750_, 1);
v___x_3762_ = lean_apply_2(v___f_3749_, v_a_3761_, lean_box(0));
return v___x_3762_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_3763_, lean_object* v_x_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lasm_Fetch_serveNode___lam__13(v___f_3763_, v_x_3764_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___x_3769_, lean_object* v___f_3770_, lean_object* v___x_3771_, uint8_t v___x_3772_, lean_object* v___f_3773_, lean_object* v_x_3774_){
_start:
{
if (lean_obj_tag(v_x_3774_) == 0)
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3784_; 
lean_dec_ref(v___f_3773_);
lean_dec(v___x_3771_);
lean_dec_ref(v___f_3770_);
lean_dec_ref(v___x_3769_);
lean_dec_ref(v___y_3768_);
lean_dec_ref(v___y_3767_);
v_a_3776_ = lean_ctor_get(v_x_3774_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_x_3774_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3778_ = v_x_3774_;
v_isShared_3779_ = v_isSharedCheck_3784_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v_x_3774_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3784_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3782_; 
v___x_3782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
return v___x_3782_;
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3795_; 
v_a_3785_ = lean_ctor_get(v_x_3774_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v_x_3774_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3787_ = v_x_3774_;
v_isShared_3788_ = v_isSharedCheck_3795_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v_x_3774_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3795_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3789_; lean_object* v___x_3791_; 
v___x_3789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3789_, 0, v___y_3767_);
lean_ctor_set(v___x_3789_, 1, v___y_3768_);
lean_ctor_set(v___x_3789_, 2, v___x_3769_);
lean_ctor_set(v___x_3789_, 3, v_a_3785_);
lean_ctor_set(v___x_3789_, 4, v___f_3770_);
if (v_isShared_3788_ == 0)
{
lean_ctor_set(v___x_3787_, 0, v___x_3789_);
v___x_3791_ = v___x_3787_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3789_);
v___x_3791_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
v___x_3793_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3771_, v___x_3772_, v___x_3792_, v___f_3773_);
return v___x_3793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___x_3798_, lean_object* v___f_3799_, lean_object* v___x_3800_, lean_object* v___x_3801_, lean_object* v___f_3802_, lean_object* v_x_3803_, lean_object* v___y_3804_){
_start:
{
uint8_t v___x_18879__boxed_3805_; lean_object* v_res_3806_; 
v___x_18879__boxed_3805_ = lean_unbox(v___x_3801_);
v_res_3806_ = l_Lasm_Fetch_serveNode___lam__18(v___y_3796_, v___y_3797_, v___x_3798_, v___f_3799_, v___x_3800_, v___x_18879__boxed_3805_, v___f_3802_, v_x_3803_);
return v_res_3806_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_3807_; uint8_t v___x_3808_; uint64_t v___x_3809_; 
v___x_3807_ = 8ULL;
v___x_3808_ = 0;
v___x_3809_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3808_, v___x_3807_);
return v___x_3809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_3810_, lean_object* v_name_3811_, lean_object* v_args_3812_){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; uint64_t v___x_3817_; lean_object* v___x_3818_; 
v___x_3814_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3815_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3815_, 0, v_o_3810_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
lean_inc_ref(v_name_3811_);
v___x_3816_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3816_, 0, v_name_3811_);
v___x_3817_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_3818_ = l_Lasm_JS_Value_invokeRaw(v___x_3815_, v___x_3816_, v_args_3812_, v___x_3817_);
if (lean_obj_tag(v___x_3818_) == 0)
{
lean_object* v_a_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
v_a_3819_ = lean_ctor_get(v___x_3818_, 0);
lean_inc(v_a_3819_);
lean_dec_ref_known(v___x_3818_, 1);
v___x_3820_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3821_ = lean_string_append(v___x_3820_, v_name_3811_);
lean_dec_ref(v_name_3811_);
v___x_3822_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3821_, v_a_3819_);
lean_dec(v_a_3819_);
lean_dec_ref(v___x_3821_);
return v___x_3822_;
}
else
{
lean_dec_ref(v_name_3811_);
return v___x_3818_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_3823_, lean_object* v_name_3824_, lean_object* v_args_3825_, lean_object* v_a_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_3823_, v_name_3824_, v_args_3825_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_3829_, uint8_t v___x_3830_, lean_object* v___f_3831_, lean_object* v___x_3832_, lean_object* v_a_3833_, lean_object* v_x_3834_){
_start:
{
lean_object* v_val_3837_; 
if (lean_obj_tag(v_x_3834_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3848_; 
lean_dec(v_a_3833_);
lean_dec_ref(v___f_3831_);
lean_dec(v___x_3829_);
v_a_3840_ = lean_ctor_get(v_x_3834_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v_x_3834_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3842_ = v_x_3834_;
v_isShared_3843_ = v_isSharedCheck_3848_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v_x_3834_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3848_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3845_; 
if (v_isShared_3843_ == 0)
{
v___x_3845_ = v___x_3842_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3840_);
v___x_3845_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
lean_object* v___x_3846_; 
v___x_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
return v___x_3846_;
}
}
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3867_; 
v_a_3849_ = lean_ctor_get(v_x_3834_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_x_3834_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3851_ = v_x_3834_;
v_isShared_3852_ = v_isSharedCheck_3867_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v_x_3834_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3867_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3853_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_3854_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3855_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3855_, 0, v_a_3849_);
lean_ctor_set(v___x_3855_, 1, v___x_3854_);
v___x_3856_ = lean_mk_empty_array_with_capacity(v___x_3832_);
v___x_3857_ = lean_array_push(v___x_3856_, v___x_3855_);
v___x_3858_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_3833_, v___x_3853_, v___x_3857_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3861_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
lean_dec_ref_known(v___x_3858_, 1);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v_a_3859_);
v___x_3861_ = v___x_3851_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3859_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
v_val_3837_ = v___x_3861_;
goto v___jp_3836_;
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; 
v_a_3863_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3863_);
lean_dec_ref_known(v___x_3858_, 1);
if (v_isShared_3852_ == 0)
{
lean_ctor_set_tag(v___x_3851_, 0);
lean_ctor_set(v___x_3851_, 0, v_a_3863_);
v___x_3865_ = v___x_3851_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3863_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
v_val_3837_ = v___x_3865_;
goto v___jp_3836_;
}
}
}
}
v___jp_3836_:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3838_, 0, v_val_3837_);
v___x_3839_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3829_, v___x_3830_, v___x_3838_, v___f_3831_);
return v___x_3839_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_3868_, lean_object* v___x_3869_, lean_object* v___f_3870_, lean_object* v___x_3871_, lean_object* v_a_3872_, lean_object* v_x_3873_, lean_object* v___y_3874_){
_start:
{
uint8_t v___x_18978__boxed_3875_; lean_object* v_res_3876_; 
v___x_18978__boxed_3875_ = lean_unbox(v___x_3869_);
v_res_3876_ = l_Lasm_Fetch_serveNode___lam__14(v___x_3868_, v___x_18978__boxed_3875_, v___f_3870_, v___x_3871_, v_a_3872_, v_x_3873_);
lean_dec(v___x_3871_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___x_3879_, lean_object* v___x_3880_, lean_object* v___x_3881_, uint8_t v___x_3882_, lean_object* v___f_3883_, lean_object* v_x_3884_){
_start:
{
if (lean_obj_tag(v_x_3884_) == 0)
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3894_; 
lean_dec_ref(v___f_3883_);
lean_dec(v___x_3881_);
lean_dec_ref(v___x_3880_);
lean_dec_ref(v___x_3879_);
lean_dec_ref(v___y_3878_);
lean_dec_ref(v___y_3877_);
v_a_3886_ = lean_ctor_get(v_x_3884_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v_x_3884_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3888_ = v_x_3884_;
v_isShared_3889_ = v_isSharedCheck_3894_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v_x_3884_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3894_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
lean_object* v___x_3892_; 
v___x_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
return v___x_3892_;
}
}
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3905_; 
v_a_3895_ = lean_ctor_get(v_x_3884_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_x_3884_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3897_ = v_x_3884_;
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v_x_3884_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; lean_object* v___x_3901_; 
v___x_3899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3899_, 0, v___y_3877_);
lean_ctor_set(v___x_3899_, 1, v___y_3878_);
lean_ctor_set(v___x_3899_, 2, v___x_3879_);
lean_ctor_set(v___x_3899_, 3, v___x_3880_);
lean_ctor_set(v___x_3899_, 4, v_a_3895_);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 0, v___x_3899_);
v___x_3901_ = v___x_3897_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3899_);
v___x_3901_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
v___x_3903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3881_, v___x_3882_, v___x_3902_, v___f_3883_);
return v___x_3903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___x_3908_, lean_object* v___x_3909_, lean_object* v___x_3910_, lean_object* v___x_3911_, lean_object* v___f_3912_, lean_object* v_x_3913_, lean_object* v___y_3914_){
_start:
{
uint8_t v___x_19068__boxed_3915_; lean_object* v_res_3916_; 
v___x_19068__boxed_3915_ = lean_unbox(v___x_3911_);
v_res_3916_ = l_Lasm_Fetch_serveNode___lam__15(v___y_3906_, v___y_3907_, v___x_3908_, v___x_3909_, v___x_3910_, v___x_19068__boxed_3915_, v___f_3912_, v_x_3913_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_3917_, uint8_t v___x_3918_, lean_object* v___f_3919_, lean_object* v_x_3920_){
_start:
{
lean_object* v_val_3923_; 
if (lean_obj_tag(v_x_3920_) == 0)
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3934_; 
lean_dec_ref(v___f_3919_);
lean_dec(v___x_3917_);
v_a_3926_ = lean_ctor_get(v_x_3920_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_x_3920_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3928_ = v_x_3920_;
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v_x_3920_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
lean_object* v___x_3932_; 
v___x_3932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3931_);
return v___x_3932_;
}
}
}
else
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3948_; 
v_a_3935_ = lean_ctor_get(v_x_3920_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v_x_3920_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3937_ = v_x_3920_;
v_isShared_3938_ = v_isSharedCheck_3948_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v_x_3920_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3948_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; 
v___x_3939_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_3935_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3942_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3939_, 1);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v_a_3940_);
v___x_3942_ = v___x_3937_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
v_val_3923_ = v___x_3942_;
goto v___jp_3922_;
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; 
v_a_3944_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3939_, 1);
if (v_isShared_3938_ == 0)
{
lean_ctor_set_tag(v___x_3937_, 0);
lean_ctor_set(v___x_3937_, 0, v_a_3944_);
v___x_3946_ = v___x_3937_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3944_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
v_val_3923_ = v___x_3946_;
goto v___jp_3922_;
}
}
}
}
v___jp_3922_:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3924_, 0, v_val_3923_);
v___x_3925_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3917_, v___x_3918_, v___x_3924_, v___f_3919_);
return v___x_3925_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_3949_, lean_object* v___x_3950_, lean_object* v___f_3951_, lean_object* v_x_3952_, lean_object* v___y_3953_){
_start:
{
uint8_t v___x_19131__boxed_3954_; lean_object* v_res_3955_; 
v___x_19131__boxed_3954_ = lean_unbox(v___x_3950_);
v_res_3955_ = l_Lasm_Fetch_serveNode___lam__16(v___x_3949_, v___x_19131__boxed_3954_, v___f_3951_, v_x_3952_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_3956_, lean_object* v_range_3957_, lean_object* v_b_3958_, lean_object* v_i_3959_){
_start:
{
lean_object* v_stop_3960_; lean_object* v_step_3961_; uint8_t v___x_3962_; 
v_stop_3960_ = lean_ctor_get(v_range_3957_, 1);
v_step_3961_ = lean_ctor_get(v_range_3957_, 2);
v___x_3962_ = lean_nat_dec_lt(v_i_3959_, v_stop_3960_);
if (v___x_3962_ == 0)
{
lean_dec(v_i_3959_);
return v_b_3958_;
}
else
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v___x_3963_ = lean_unsigned_to_nat(2u);
v___x_3964_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3965_ = lean_unsigned_to_nat(1u);
v___x_3966_ = lean_nat_mul(v___x_3963_, v_i_3959_);
v___x_3967_ = lean_array_get_borrowed(v___x_3964_, v___y_3956_, v___x_3966_);
v___x_3968_ = lean_nat_add(v___x_3966_, v___x_3965_);
lean_dec(v___x_3966_);
v___x_3969_ = lean_array_get_borrowed(v___x_3964_, v___y_3956_, v___x_3968_);
lean_dec(v___x_3968_);
lean_inc(v___x_3969_);
lean_inc(v___x_3967_);
v___x_3970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3967_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
v___x_3971_ = lean_array_push(v_b_3958_, v___x_3970_);
v___x_3972_ = lean_nat_add(v_i_3959_, v_step_3961_);
lean_dec(v_i_3959_);
v_b_3958_ = v___x_3971_;
v_i_3959_ = v___x_3972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_3974_, lean_object* v_range_3975_, lean_object* v_b_3976_, lean_object* v_i_3977_){
_start:
{
lean_object* v_res_3978_; 
v_res_3978_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_3974_, v_range_3975_, v_b_3976_, v_i_3977_);
lean_dec_ref(v_range_3975_);
lean_dec_ref(v___y_3974_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_3979_, size_t v_i_3980_, size_t v_stop_3981_, lean_object* v_b_3982_){
_start:
{
lean_object* v___y_3984_; uint8_t v___x_3988_; 
v___x_3988_ = lean_usize_dec_eq(v_i_3980_, v_stop_3981_);
if (v___x_3988_ == 0)
{
lean_object* v___x_3989_; 
v___x_3989_ = lean_array_uget_borrowed(v_as_3979_, v_i_3980_);
if (lean_obj_tag(v___x_3989_) == 4)
{
lean_object* v_s_3990_; lean_object* v___x_3991_; 
v_s_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc_ref(v_s_3990_);
v___x_3991_ = lean_array_push(v_b_3982_, v_s_3990_);
v___y_3984_ = v___x_3991_;
goto v___jp_3983_;
}
else
{
v___y_3984_ = v_b_3982_;
goto v___jp_3983_;
}
}
else
{
return v_b_3982_;
}
v___jp_3983_:
{
size_t v___x_3985_; size_t v___x_3986_; 
v___x_3985_ = ((size_t)1ULL);
v___x_3986_ = lean_usize_add(v_i_3980_, v___x_3985_);
v_i_3980_ = v___x_3986_;
v_b_3982_ = v___y_3984_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_3992_, lean_object* v_i_3993_, lean_object* v_stop_3994_, lean_object* v_b_3995_){
_start:
{
size_t v_i_boxed_3996_; size_t v_stop_boxed_3997_; lean_object* v_res_3998_; 
v_i_boxed_3996_ = lean_unbox_usize(v_i_3993_);
lean_dec(v_i_3993_);
v_stop_boxed_3997_ = lean_unbox_usize(v_stop_3994_);
lean_dec(v_stop_3994_);
v_res_3998_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_3992_, v_i_boxed_3996_, v_stop_boxed_3997_, v_b_3995_);
lean_dec_ref(v_as_3992_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4001_, lean_object* v_start_4002_, lean_object* v_stop_4003_){
_start:
{
lean_object* v___x_4004_; uint8_t v___x_4005_; 
v___x_4004_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4005_ = lean_nat_dec_lt(v_start_4002_, v_stop_4003_);
if (v___x_4005_ == 0)
{
return v___x_4004_;
}
else
{
lean_object* v___x_4006_; uint8_t v___x_4007_; 
v___x_4006_ = lean_array_get_size(v_as_4001_);
v___x_4007_ = lean_nat_dec_le(v_stop_4003_, v___x_4006_);
if (v___x_4007_ == 0)
{
uint8_t v___x_4008_; 
v___x_4008_ = lean_nat_dec_lt(v_start_4002_, v___x_4006_);
if (v___x_4008_ == 0)
{
return v___x_4004_;
}
else
{
size_t v___x_4009_; size_t v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = lean_usize_of_nat(v_start_4002_);
v___x_4010_ = lean_usize_of_nat(v___x_4006_);
v___x_4011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4001_, v___x_4009_, v___x_4010_, v___x_4004_);
return v___x_4011_;
}
}
else
{
size_t v___x_4012_; size_t v___x_4013_; lean_object* v___x_4014_; 
v___x_4012_ = lean_usize_of_nat(v_start_4002_);
v___x_4013_ = lean_usize_of_nat(v_stop_4003_);
v___x_4014_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4001_, v___x_4012_, v___x_4013_, v___x_4004_);
return v___x_4014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4015_, lean_object* v_start_4016_, lean_object* v_stop_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4015_, v_start_4016_, v_stop_4017_);
lean_dec(v_stop_4017_);
lean_dec(v_start_4016_);
lean_dec_ref(v_as_4015_);
return v_res_4018_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4021_, size_t v_i_4022_, size_t v_stop_4023_){
_start:
{
uint8_t v___x_4024_; 
v___x_4024_ = lean_usize_dec_eq(v_i_4022_, v_stop_4023_);
if (v___x_4024_ == 0)
{
lean_object* v___x_4025_; lean_object* v_fst_4026_; uint8_t v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; uint8_t v___x_4030_; 
v___x_4025_ = lean_array_uget_borrowed(v_as_4021_, v_i_4022_);
v_fst_4026_ = lean_ctor_get(v___x_4025_, 0);
v___x_4027_ = 1;
lean_inc(v_fst_4026_);
v___x_4028_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4026_);
v___x_4029_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4030_ = lean_string_dec_eq(v___x_4028_, v___x_4029_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; uint8_t v___x_4032_; 
v___x_4031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4032_ = lean_string_dec_eq(v___x_4028_, v___x_4031_);
lean_dec_ref(v___x_4028_);
if (v___x_4032_ == 0)
{
size_t v___x_4033_; size_t v___x_4034_; 
v___x_4033_ = ((size_t)1ULL);
v___x_4034_ = lean_usize_add(v_i_4022_, v___x_4033_);
v_i_4022_ = v___x_4034_;
goto _start;
}
else
{
return v___x_4027_;
}
}
else
{
lean_dec_ref(v___x_4028_);
return v___x_4027_;
}
}
else
{
uint8_t v___x_4036_; 
v___x_4036_ = 0;
return v___x_4036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4037_, lean_object* v_i_4038_, lean_object* v_stop_4039_){
_start:
{
size_t v_i_boxed_4040_; size_t v_stop_boxed_4041_; uint8_t v_res_4042_; lean_object* v_r_4043_; 
v_i_boxed_4040_ = lean_unbox_usize(v_i_4038_);
lean_dec(v_i_4038_);
v_stop_boxed_4041_ = lean_unbox_usize(v_stop_4039_);
lean_dec(v_stop_4039_);
v_res_4042_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4037_, v_i_boxed_4040_, v_stop_boxed_4041_);
lean_dec_ref(v_as_4037_);
v_r_4043_ = lean_box(v_res_4042_);
return v_r_4043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4045_, size_t v_sz_4046_, size_t v_i_4047_, lean_object* v_b_4048_){
_start:
{
uint8_t v___x_4049_; 
v___x_4049_ = lean_usize_dec_lt(v_i_4047_, v_sz_4046_);
if (v___x_4049_ == 0)
{
lean_inc_ref(v_b_4048_);
return v_b_4048_;
}
else
{
lean_object* v_a_4050_; lean_object* v_fst_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; uint8_t v___x_4055_; 
v_a_4050_ = lean_array_uget_borrowed(v_as_4045_, v_i_4047_);
v_fst_4051_ = lean_ctor_get(v_a_4050_, 0);
v___x_4052_ = lean_box(0);
lean_inc(v_fst_4051_);
v___x_4053_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4051_);
v___x_4054_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4055_ = lean_string_dec_eq(v___x_4053_, v___x_4054_);
lean_dec_ref(v___x_4053_);
if (v___x_4055_ == 0)
{
lean_object* v___x_4056_; size_t v___x_4057_; size_t v___x_4058_; 
v___x_4056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4057_ = ((size_t)1ULL);
v___x_4058_ = lean_usize_add(v_i_4047_, v___x_4057_);
v_i_4047_ = v___x_4058_;
v_b_4048_ = v___x_4056_;
goto _start;
}
else
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
lean_inc(v_a_4050_);
v___x_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4060_, 0, v_a_4050_);
v___x_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4060_);
v___x_4062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
lean_ctor_set(v___x_4062_, 1, v___x_4052_);
return v___x_4062_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4063_, lean_object* v_sz_4064_, lean_object* v_i_4065_, lean_object* v_b_4066_){
_start:
{
size_t v_sz_boxed_4067_; size_t v_i_boxed_4068_; lean_object* v_res_4069_; 
v_sz_boxed_4067_ = lean_unbox_usize(v_sz_4064_);
lean_dec(v_sz_4064_);
v_i_boxed_4068_ = lean_unbox_usize(v_i_4065_);
lean_dec(v_i_4065_);
v_res_4069_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4063_, v_sz_boxed_4067_, v_i_boxed_4068_, v_b_4066_);
lean_dec_ref(v_b_4066_);
lean_dec_ref(v_as_4063_);
return v_res_4069_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4072_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4073_ = lean_string_utf8_byte_size(v___x_4072_);
return v___x_4073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4076_, lean_object* v___f_4077_, lean_object* v___f_4078_, lean_object* v_handler_4079_, lean_object* v_options_4080_, lean_object* v_a_4081_, lean_object* v_fst_4082_, lean_object* v_a_4083_, lean_object* v___y_4084_, lean_object* v___x_4085_, lean_object* v___x_4086_, lean_object* v___x_4087_, lean_object* v_x_4088_){
_start:
{
lean_object* v___y_4091_; uint8_t v___y_4092_; lean_object* v___y_4093_; lean_object* v_val_4094_; lean_object* v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; uint8_t v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; uint8_t v___y_4173_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; 
if (lean_obj_tag(v_x_4088_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4250_; 
lean_dec(v___y_4084_);
lean_dec(v_a_4083_);
lean_dec(v_fst_4082_);
lean_dec(v_a_4081_);
lean_dec_ref(v_options_4080_);
lean_dec_ref(v_handler_4079_);
lean_dec_ref(v___f_4078_);
lean_dec_ref(v___f_4077_);
lean_dec(v_snd_4076_);
v_a_4242_ = lean_ctor_get(v_x_4088_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v_x_4088_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4244_ = v_x_4088_;
v_isShared_4245_ = v_isSharedCheck_4250_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v_x_4088_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4250_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v___x_4247_; 
if (v_isShared_4245_ == 0)
{
v___x_4247_ = v___x_4244_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4242_);
v___x_4247_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
lean_object* v___x_4248_; 
v___x_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
return v___x_4248_;
}
}
}
else
{
lean_object* v_a_4251_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4262_; lean_object* v___x_4266_; 
v_a_4251_ = lean_ctor_get(v_x_4088_, 0);
lean_inc(v_a_4251_);
lean_dec_ref_known(v_x_4088_, 1);
v___x_4266_ = l_Lasm_JS_Data_field(v_a_4251_, v___x_4087_);
if (lean_obj_tag(v___x_4266_) == 4)
{
lean_object* v_s_4267_; 
v_s_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc_ref(v_s_4267_);
lean_dec_ref_known(v___x_4266_, 1);
v___y_4262_ = v_s_4267_;
goto v___jp_4261_;
}
else
{
lean_object* v___x_4268_; 
lean_dec(v___x_4266_);
v___x_4268_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4262_ = v___x_4268_;
goto v___jp_4261_;
}
v___jp_4252_:
{
lean_object* v___x_4255_; 
v___x_4255_ = l_Lasm_JS_Data_field(v_a_4251_, v___x_4085_);
lean_dec(v_a_4251_);
if (lean_obj_tag(v___x_4255_) == 7)
{
lean_object* v_items_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v_items_4256_ = lean_ctor_get(v___x_4255_, 0);
lean_inc_ref(v_items_4256_);
lean_dec_ref_known(v___x_4255_, 1);
v___x_4257_ = lean_unsigned_to_nat(0u);
v___x_4258_ = lean_array_get_size(v_items_4256_);
v___x_4259_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4256_, v___x_4257_, v___x_4258_);
lean_dec_ref(v_items_4256_);
lean_inc_ref(v___y_4253_);
v___y_4220_ = v___y_4253_;
v___y_4221_ = v___y_4253_;
v___y_4222_ = v___y_4254_;
v___y_4223_ = v___x_4259_;
goto v___jp_4219_;
}
else
{
lean_object* v___x_4260_; 
lean_dec(v___x_4255_);
v___x_4260_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4253_);
v___y_4220_ = v___y_4253_;
v___y_4221_ = v___y_4253_;
v___y_4222_ = v___y_4254_;
v___y_4223_ = v___x_4260_;
goto v___jp_4219_;
}
}
v___jp_4261_:
{
lean_object* v___x_4263_; 
v___x_4263_ = l_Lasm_JS_Data_field(v_a_4251_, v___x_4086_);
if (lean_obj_tag(v___x_4263_) == 4)
{
lean_object* v_s_4264_; 
v_s_4264_ = lean_ctor_get(v___x_4263_, 0);
lean_inc_ref(v_s_4264_);
lean_dec_ref_known(v___x_4263_, 1);
v___y_4253_ = v___y_4262_;
v___y_4254_ = v_s_4264_;
goto v___jp_4252_;
}
else
{
lean_object* v___x_4265_; 
lean_dec(v___x_4263_);
v___x_4265_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4253_ = v___y_4262_;
v___y_4254_ = v___x_4265_;
goto v___jp_4252_;
}
}
}
v___jp_4090_:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4095_, 0, v_val_4094_);
v___x_4096_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4091_, v___y_4092_, v___x_4095_, v___y_4093_);
return v___x_4096_;
}
v___jp_4097_:
{
if (v___y_4106_ == 0)
{
lean_object* v___x_4112_; lean_object* v___f_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4104_);
lean_dec_ref(v___y_4103_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v_a_4083_);
lean_dec(v_fst_4082_);
lean_dec(v_a_4081_);
lean_dec_ref(v_options_4080_);
v___x_4112_ = l_ByteArray_empty;
v___f_4113_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4114_, 0, v___y_4105_);
lean_ctor_set(v___x_4114_, 1, v___y_4111_);
lean_ctor_set(v___x_4114_, 2, v___y_4110_);
lean_ctor_set(v___x_4114_, 3, v___x_4112_);
lean_ctor_set(v___x_4114_, 4, v___f_4113_);
v___x_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
v___x_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
v___x_4117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4108_, v___y_4106_, v___x_4116_, v___y_4109_);
return v___x_4117_;
}
else
{
lean_object* v___x_4118_; lean_object* v___f_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; uint8_t v___x_4123_; 
lean_dec_ref(v___y_4110_);
lean_dec_ref(v___y_4109_);
v___x_4118_ = l_ByteArray_empty;
v___f_4119_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4111_);
v___x_4120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4120_, 0, v___y_4105_);
lean_ctor_set(v___x_4120_, 1, v___y_4111_);
lean_ctor_set(v___x_4120_, 2, v___y_4104_);
lean_ctor_set(v___x_4120_, 3, v___x_4118_);
lean_ctor_set(v___x_4120_, 4, v___f_4119_);
v___x_4121_ = l_Lasm_Fetch_Request_path(v___x_4120_);
v___x_4122_ = lean_apply_1(v_options_4080_, v___x_4121_);
v___x_4123_ = lean_unbox(v___x_4122_);
if (v___x_4123_ == 0)
{
lean_object* v___f_4124_; lean_object* v___f_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; uint8_t v___x_4129_; lean_object* v___x_4130_; 
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4099_);
lean_dec(v_a_4083_);
lean_inc(v___y_4100_);
v___f_4124_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4124_, 0, v___y_4098_);
lean_closure_set(v___f_4124_, 1, v___y_4111_);
lean_closure_set(v___f_4124_, 2, v___y_4103_);
lean_closure_set(v___f_4124_, 3, v___f_4119_);
lean_closure_set(v___f_4124_, 4, v___y_4100_);
lean_closure_set(v___f_4124_, 5, v___x_4122_);
lean_closure_set(v___f_4124_, 6, v___y_4101_);
v___f_4125_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4125_, 0, v___y_4100_);
lean_closure_set(v___f_4125_, 1, v___x_4122_);
lean_closure_set(v___f_4125_, 2, v___f_4124_);
lean_closure_set(v___f_4125_, 3, v___y_4102_);
lean_closure_set(v___f_4125_, 4, v_a_4081_);
v___x_4126_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4127_ = lean_mk_empty_array_with_capacity(v___y_4108_);
v___x_4128_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4082_, v___x_4126_, v___x_4127_);
v___x_4129_ = lean_unbox(v___x_4122_);
v___x_4130_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4108_, v___x_4129_, v___x_4128_, v___f_4125_);
return v___x_4130_;
}
else
{
uint8_t v___x_4131_; lean_object* v___x_4132_; lean_object* v___f_4133_; lean_object* v___x_4134_; lean_object* v___f_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v_a_4081_);
v___x_4131_ = 0;
v___x_4132_ = lean_box(v___x_4131_);
lean_inc(v___y_4100_);
v___f_4133_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4133_, 0, v___y_4098_);
lean_closure_set(v___f_4133_, 1, v___y_4111_);
lean_closure_set(v___f_4133_, 2, v___y_4103_);
lean_closure_set(v___f_4133_, 3, v___x_4118_);
lean_closure_set(v___f_4133_, 4, v___y_4100_);
lean_closure_set(v___f_4133_, 5, v___x_4132_);
lean_closure_set(v___f_4133_, 6, v___y_4099_);
v___x_4134_ = lean_box(v___x_4131_);
v___f_4135_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4135_, 0, v___y_4100_);
lean_closure_set(v___f_4135_, 1, v___x_4134_);
lean_closure_set(v___f_4135_, 2, v___f_4133_);
v___x_4136_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4137_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4138_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4138_, 0, v_fst_4082_);
lean_ctor_set(v___x_4138_, 1, v___x_4137_);
v___x_4139_ = lean_mk_empty_array_with_capacity(v___y_4107_);
lean_dec(v___y_4107_);
v___x_4140_ = lean_array_push(v___x_4139_, v___x_4138_);
v___x_4141_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4083_, v___x_4136_, v___x_4140_);
if (lean_obj_tag(v___x_4141_) == 0)
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4149_; 
v_a_4142_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4144_ = v___x_4141_;
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_4141_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4147_; 
if (v_isShared_4145_ == 0)
{
lean_ctor_set_tag(v___x_4144_, 1);
v___x_4147_ = v___x_4144_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
v___y_4091_ = v___y_4108_;
v___y_4092_ = v___x_4131_;
v___y_4093_ = v___f_4135_;
v_val_4094_ = v___x_4147_;
goto v___jp_4090_;
}
}
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
v_a_4150_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_4141_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4141_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
lean_ctor_set_tag(v___x_4152_, 0);
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
v___y_4091_ = v___y_4108_;
v___y_4092_ = v___x_4131_;
v___y_4093_ = v___f_4135_;
v_val_4094_ = v___x_4155_;
goto v___jp_4090_;
}
}
}
}
}
}
v___jp_4158_:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; uint8_t v___x_4177_; 
v___x_4174_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4175_ = lean_string_utf8_byte_size(v___y_4170_);
v___x_4176_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4177_ = lean_nat_dec_le(v___x_4176_, v___x_4175_);
if (v___x_4177_ == 0)
{
lean_dec_ref(v___y_4167_);
v___y_4098_ = v___y_4159_;
v___y_4099_ = v___y_4160_;
v___y_4100_ = v___y_4161_;
v___y_4101_ = v___y_4162_;
v___y_4102_ = v___y_4163_;
v___y_4103_ = v___y_4164_;
v___y_4104_ = v___y_4165_;
v___y_4105_ = v___y_4166_;
v___y_4106_ = v___y_4173_;
v___y_4107_ = v___y_4168_;
v___y_4108_ = v___y_4169_;
v___y_4109_ = v___y_4171_;
v___y_4110_ = v___y_4172_;
v___y_4111_ = v___y_4170_;
goto v___jp_4097_;
}
else
{
uint8_t v___x_4178_; 
v___x_4178_ = lean_string_memcmp(v___y_4170_, v___x_4174_, v___y_4169_, v___y_4169_, v___x_4176_);
if (v___x_4178_ == 0)
{
lean_dec_ref(v___y_4167_);
v___y_4098_ = v___y_4159_;
v___y_4099_ = v___y_4160_;
v___y_4100_ = v___y_4161_;
v___y_4101_ = v___y_4162_;
v___y_4102_ = v___y_4163_;
v___y_4103_ = v___y_4164_;
v___y_4104_ = v___y_4165_;
v___y_4105_ = v___y_4166_;
v___y_4106_ = v___y_4173_;
v___y_4107_ = v___y_4168_;
v___y_4108_ = v___y_4169_;
v___y_4109_ = v___y_4171_;
v___y_4110_ = v___y_4172_;
v___y_4111_ = v___y_4170_;
goto v___jp_4097_;
}
else
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; 
v___x_4179_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4180_ = lean_string_append(v___x_4179_, v___y_4167_);
lean_dec_ref(v___y_4167_);
v___x_4181_ = lean_string_append(v___x_4180_, v___y_4170_);
lean_dec_ref(v___y_4170_);
v___y_4098_ = v___y_4159_;
v___y_4099_ = v___y_4160_;
v___y_4100_ = v___y_4161_;
v___y_4101_ = v___y_4162_;
v___y_4102_ = v___y_4163_;
v___y_4103_ = v___y_4164_;
v___y_4104_ = v___y_4165_;
v___y_4105_ = v___y_4166_;
v___y_4106_ = v___y_4173_;
v___y_4107_ = v___y_4168_;
v___y_4108_ = v___y_4169_;
v___y_4109_ = v___y_4171_;
v___y_4110_ = v___y_4172_;
v___y_4111_ = v___x_4181_;
goto v___jp_4097_;
}
}
}
v___jp_4182_:
{
lean_object* v___x_4197_; uint8_t v___x_4198_; 
v___x_4197_ = lean_array_get_size(v___y_4195_);
v___x_4198_ = lean_nat_dec_lt(v___y_4192_, v___x_4197_);
if (v___x_4198_ == 0)
{
v___y_4159_ = v___y_4183_;
v___y_4160_ = v___y_4184_;
v___y_4161_ = v___y_4185_;
v___y_4162_ = v___y_4186_;
v___y_4163_ = v___y_4187_;
v___y_4164_ = v___y_4188_;
v___y_4165_ = v___y_4189_;
v___y_4166_ = v___y_4190_;
v___y_4167_ = v___y_4196_;
v___y_4168_ = v___y_4191_;
v___y_4169_ = v___y_4192_;
v___y_4170_ = v___y_4194_;
v___y_4171_ = v___y_4193_;
v___y_4172_ = v___y_4195_;
v___y_4173_ = v___x_4198_;
goto v___jp_4158_;
}
else
{
if (v___x_4198_ == 0)
{
v___y_4159_ = v___y_4183_;
v___y_4160_ = v___y_4184_;
v___y_4161_ = v___y_4185_;
v___y_4162_ = v___y_4186_;
v___y_4163_ = v___y_4187_;
v___y_4164_ = v___y_4188_;
v___y_4165_ = v___y_4189_;
v___y_4166_ = v___y_4190_;
v___y_4167_ = v___y_4196_;
v___y_4168_ = v___y_4191_;
v___y_4169_ = v___y_4192_;
v___y_4170_ = v___y_4194_;
v___y_4171_ = v___y_4193_;
v___y_4172_ = v___y_4195_;
v___y_4173_ = v___x_4198_;
goto v___jp_4158_;
}
else
{
size_t v___x_4199_; size_t v___x_4200_; uint8_t v___x_4201_; 
v___x_4199_ = ((size_t)0ULL);
v___x_4200_ = lean_usize_of_nat(v___x_4197_);
v___x_4201_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4195_, v___x_4199_, v___x_4200_);
v___y_4159_ = v___y_4183_;
v___y_4160_ = v___y_4184_;
v___y_4161_ = v___y_4185_;
v___y_4162_ = v___y_4186_;
v___y_4163_ = v___y_4187_;
v___y_4164_ = v___y_4188_;
v___y_4165_ = v___y_4189_;
v___y_4166_ = v___y_4190_;
v___y_4167_ = v___y_4196_;
v___y_4168_ = v___y_4191_;
v___y_4169_ = v___y_4192_;
v___y_4170_ = v___y_4194_;
v___y_4171_ = v___y_4193_;
v___y_4172_ = v___y_4195_;
v___y_4173_ = v___x_4201_;
goto v___jp_4158_;
}
}
}
v___jp_4202_:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v___x_4216_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4217_ = l_Nat_reprFast(v___y_4084_);
v___x_4218_ = lean_string_append(v___x_4216_, v___x_4217_);
lean_dec_ref(v___x_4217_);
v___y_4183_ = v___y_4203_;
v___y_4184_ = v___y_4205_;
v___y_4185_ = v___y_4206_;
v___y_4186_ = v___y_4207_;
v___y_4187_ = v___y_4208_;
v___y_4188_ = v___y_4209_;
v___y_4189_ = v___y_4210_;
v___y_4190_ = v___y_4211_;
v___y_4191_ = v___y_4212_;
v___y_4192_ = v___y_4213_;
v___y_4193_ = v___y_4204_;
v___y_4194_ = v___y_4214_;
v___y_4195_ = v___y_4215_;
v___y_4196_ = v___x_4218_;
goto v___jp_4182_;
}
v___jp_4219_:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; size_t v_sz_4232_; size_t v___x_4233_; lean_object* v___x_4234_; lean_object* v_fst_4235_; lean_object* v___f_4236_; lean_object* v___f_4237_; lean_object* v___f_4238_; 
v___x_4224_ = lean_unsigned_to_nat(0u);
v___x_4225_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4226_ = lean_array_get_size(v___y_4223_);
v___x_4227_ = lean_unsigned_to_nat(1u);
v___x_4228_ = lean_nat_shiftr(v___x_4226_, v___x_4227_);
v___x_4229_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4224_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
lean_ctor_set(v___x_4229_, 2, v___x_4227_);
v___x_4230_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4223_, v___x_4229_, v___x_4225_, v___x_4224_);
lean_dec_ref_known(v___x_4229_, 3);
lean_dec_ref(v___y_4223_);
v___x_4231_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4232_ = lean_array_size(v___x_4230_);
v___x_4233_ = ((size_t)0ULL);
v___x_4234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4230_, v_sz_4232_, v___x_4233_, v___x_4231_);
v_fst_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc(v_fst_4235_);
lean_dec_ref(v___x_4234_);
lean_inc_ref(v___y_4220_);
v___f_4236_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4236_, 0, v___x_4224_);
lean_closure_set(v___f_4236_, 1, v_snd_4076_);
lean_closure_set(v___f_4236_, 2, v___y_4220_);
lean_closure_set(v___f_4236_, 3, v___f_4077_);
lean_closure_set(v___f_4236_, 4, v___f_4078_);
v___f_4237_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4237_, 0, v_handler_4079_);
lean_closure_set(v___f_4237_, 1, v___x_4224_);
lean_closure_set(v___f_4237_, 2, v___f_4236_);
v___f_4238_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4238_, 0, v___f_4237_);
if (lean_obj_tag(v_fst_4235_) == 0)
{
lean_inc_ref(v___x_4230_);
lean_inc_ref_n(v___f_4238_, 2);
v___y_4203_ = v___y_4220_;
v___y_4204_ = v___f_4238_;
v___y_4205_ = v___f_4238_;
v___y_4206_ = v___x_4224_;
v___y_4207_ = v___f_4238_;
v___y_4208_ = v___x_4227_;
v___y_4209_ = v___x_4230_;
v___y_4210_ = v___x_4225_;
v___y_4211_ = v___y_4221_;
v___y_4212_ = v___x_4227_;
v___y_4213_ = v___x_4224_;
v___y_4214_ = v___y_4222_;
v___y_4215_ = v___x_4230_;
goto v___jp_4202_;
}
else
{
lean_object* v_val_4239_; 
v_val_4239_ = lean_ctor_get(v_fst_4235_, 0);
lean_inc(v_val_4239_);
lean_dec_ref_known(v_fst_4235_, 1);
if (lean_obj_tag(v_val_4239_) == 0)
{
lean_inc_ref(v___x_4230_);
lean_inc_ref_n(v___f_4238_, 2);
v___y_4203_ = v___y_4220_;
v___y_4204_ = v___f_4238_;
v___y_4205_ = v___f_4238_;
v___y_4206_ = v___x_4224_;
v___y_4207_ = v___f_4238_;
v___y_4208_ = v___x_4227_;
v___y_4209_ = v___x_4230_;
v___y_4210_ = v___x_4225_;
v___y_4211_ = v___y_4221_;
v___y_4212_ = v___x_4227_;
v___y_4213_ = v___x_4224_;
v___y_4214_ = v___y_4222_;
v___y_4215_ = v___x_4230_;
goto v___jp_4202_;
}
else
{
lean_object* v_val_4240_; lean_object* v_snd_4241_; 
lean_dec(v___y_4084_);
v_val_4240_ = lean_ctor_get(v_val_4239_, 0);
lean_inc(v_val_4240_);
lean_dec_ref_known(v_val_4239_, 1);
v_snd_4241_ = lean_ctor_get(v_val_4240_, 1);
lean_inc(v_snd_4241_);
lean_dec(v_val_4240_);
lean_inc_ref(v___x_4230_);
lean_inc_ref_n(v___f_4238_, 2);
v___y_4183_ = v___y_4220_;
v___y_4184_ = v___f_4238_;
v___y_4185_ = v___x_4224_;
v___y_4186_ = v___f_4238_;
v___y_4187_ = v___x_4227_;
v___y_4188_ = v___x_4230_;
v___y_4189_ = v___x_4225_;
v___y_4190_ = v___y_4221_;
v___y_4191_ = v___x_4227_;
v___y_4192_ = v___x_4224_;
v___y_4193_ = v___f_4238_;
v___y_4194_ = v___y_4222_;
v___y_4195_ = v___x_4230_;
v___y_4196_ = v_snd_4241_;
goto v___jp_4182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4269_, lean_object* v___f_4270_, lean_object* v___f_4271_, lean_object* v_handler_4272_, lean_object* v_options_4273_, lean_object* v_a_4274_, lean_object* v_fst_4275_, lean_object* v_a_4276_, lean_object* v___y_4277_, lean_object* v___x_4278_, lean_object* v___x_4279_, lean_object* v___x_4280_, lean_object* v_x_4281_, lean_object* v___y_4282_){
_start:
{
lean_object* v_res_4283_; 
v_res_4283_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4269_, v___f_4270_, v___f_4271_, v_handler_4272_, v_options_4273_, v_a_4274_, v_fst_4275_, v_a_4276_, v___y_4277_, v___x_4278_, v___x_4279_, v___x_4280_, v_x_4281_);
lean_dec_ref(v___x_4280_);
lean_dec_ref(v___x_4279_);
lean_dec_ref(v___x_4278_);
return v_res_4283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4293_, lean_object* v___f_4294_, lean_object* v_handler_4295_, lean_object* v_options_4296_, lean_object* v_a_4297_, lean_object* v_a_4298_, lean_object* v___y_4299_, lean_object* v_____x_4300_){
_start:
{
lean_object* v_fst_4302_; lean_object* v_snd_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___f_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; uint8_t v___x_4310_; lean_object* v_val_4312_; lean_object* v___x_4315_; 
v_fst_4302_ = lean_ctor_get(v_____x_4300_, 0);
lean_inc_n(v_fst_4302_, 2);
v_snd_4303_ = lean_ctor_get(v_____x_4300_, 1);
lean_inc(v_snd_4303_);
lean_dec_ref(v_____x_4300_);
v___x_4304_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4305_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4306_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4307_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4307_, 0, v_snd_4303_);
lean_closure_set(v___f_4307_, 1, v___f_4293_);
lean_closure_set(v___f_4307_, 2, v___f_4294_);
lean_closure_set(v___f_4307_, 3, v_handler_4295_);
lean_closure_set(v___f_4307_, 4, v_options_4296_);
lean_closure_set(v___f_4307_, 5, v_a_4297_);
lean_closure_set(v___f_4307_, 6, v_fst_4302_);
lean_closure_set(v___f_4307_, 7, v_a_4298_);
lean_closure_set(v___f_4307_, 8, v___y_4299_);
lean_closure_set(v___f_4307_, 9, v___x_4306_);
lean_closure_set(v___f_4307_, 10, v___x_4305_);
lean_closure_set(v___f_4307_, 11, v___x_4304_);
v___x_4308_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4309_ = lean_unsigned_to_nat(0u);
v___x_4310_ = 0;
v___x_4315_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4302_, v___x_4308_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4323_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4318_ = v___x_4315_;
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v___x_4315_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4321_; 
if (v_isShared_4319_ == 0)
{
lean_ctor_set_tag(v___x_4318_, 1);
v___x_4321_ = v___x_4318_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v_a_4316_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
v_val_4312_ = v___x_4321_;
goto v___jp_4311_;
}
}
}
else
{
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
v_a_4324_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___x_4315_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___x_4315_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
lean_ctor_set_tag(v___x_4326_, 0);
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_a_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
v_val_4312_ = v___x_4329_;
goto v___jp_4311_;
}
}
}
v___jp_4311_:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v_val_4312_);
v___x_4314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4309_, v___x_4310_, v___x_4313_, v___f_4307_);
return v___x_4314_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4332_, lean_object* v___f_4333_, lean_object* v_handler_4334_, lean_object* v_options_4335_, lean_object* v_a_4336_, lean_object* v_a_4337_, lean_object* v___y_4338_, lean_object* v_____x_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4332_, v___f_4333_, v_handler_4334_, v_options_4335_, v_a_4336_, v_a_4337_, v___y_4338_, v_____x_4339_);
return v_res_4341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4342_, lean_object* v_x_4343_){
_start:
{
if (lean_obj_tag(v_x_4343_) == 0)
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4353_; 
lean_dec_ref(v___f_4342_);
v_a_4345_ = lean_ctor_get(v_x_4343_, 0);
v_isSharedCheck_4353_ = !lean_is_exclusive(v_x_4343_);
if (v_isSharedCheck_4353_ == 0)
{
v___x_4347_ = v_x_4343_;
v_isShared_4348_ = v_isSharedCheck_4353_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v_x_4343_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4353_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
lean_object* v___x_4351_; 
v___x_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4350_);
return v___x_4351_;
}
}
}
else
{
lean_object* v_a_4354_; lean_object* v___x_4355_; 
v_a_4354_ = lean_ctor_get(v_x_4343_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v_x_4343_, 1);
v___x_4355_ = lean_apply_2(v___f_4342_, v_a_4354_, lean_box(0));
return v___x_4355_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4356_, lean_object* v_x_4357_, lean_object* v___y_4358_){
_start:
{
lean_object* v_res_4359_; 
v_res_4359_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4356_, v_x_4357_);
return v_res_4359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4367_, lean_object* v___f_4368_, lean_object* v_args_4369_){
_start:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; uint8_t v___x_4378_; 
v___x_4376_ = lean_unsigned_to_nat(0u);
v___x_4377_ = lean_array_get_size(v_args_4369_);
v___x_4378_ = lean_nat_dec_lt(v___x_4376_, v___x_4377_);
if (v___x_4378_ == 0)
{
lean_dec_ref(v___f_4368_);
goto v___jp_4371_;
}
else
{
lean_object* v___x_4379_; 
v___x_4379_ = lean_array_fget_borrowed(v_args_4369_, v___x_4376_);
if (lean_obj_tag(v___x_4379_) == 9)
{
lean_object* v_value_4380_; lean_object* v___x_4381_; uint8_t v___x_4382_; 
v_value_4380_ = lean_ctor_get(v___x_4379_, 0);
v___x_4381_ = lean_unsigned_to_nat(1u);
v___x_4382_ = lean_nat_dec_lt(v___x_4381_, v___x_4377_);
if (v___x_4382_ == 0)
{
lean_dec_ref(v___f_4368_);
goto v___jp_4371_;
}
else
{
lean_object* v___x_4383_; 
v___x_4383_ = lean_array_fget(v_args_4369_, v___x_4381_);
if (lean_obj_tag(v___x_4383_) == 9)
{
lean_object* v_value_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4395_; 
lean_dec_ref(v___f_4367_);
v_value_4384_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4395_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4395_ == 0)
{
lean_object* v_unused_4396_; 
v_unused_4396_ = lean_ctor_get(v___x_4383_, 1);
lean_dec(v_unused_4396_);
v___x_4386_ = v___x_4383_;
v_isShared_4387_ = v_isSharedCheck_4395_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_value_4384_);
lean_dec(v___x_4383_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4395_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___x_4389_; 
lean_inc(v_value_4380_);
if (v_isShared_4387_ == 0)
{
lean_ctor_set_tag(v___x_4386_, 0);
lean_ctor_set(v___x_4386_, 1, v_value_4384_);
lean_ctor_set(v___x_4386_, 0, v_value_4380_);
v___x_4389_ = v___x_4386_;
goto v_reusejp_4388_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_value_4380_);
lean_ctor_set(v_reuseFailAlloc_4394_, 1, v_value_4384_);
v___x_4389_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4388_;
}
v_reusejp_4388_:
{
uint8_t v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4390_ = 0;
v___x_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4391_, 0, v___x_4389_);
v___x_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
v___x_4393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4376_, v___x_4390_, v___x_4392_, v___f_4368_);
return v___x_4393_;
}
}
}
else
{
lean_dec(v___x_4383_);
lean_dec_ref(v___f_4368_);
goto v___jp_4371_;
}
}
}
else
{
lean_dec_ref(v___f_4368_);
goto v___jp_4371_;
}
}
v___jp_4371_:
{
lean_object* v___x_4372_; uint8_t v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4372_ = lean_unsigned_to_nat(0u);
v___x_4373_ = 0;
v___x_4374_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4372_, v___x_4373_, v___x_4374_, v___f_4367_);
return v___x_4375_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4397_, lean_object* v___f_4398_, lean_object* v_args_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4397_, v___f_4398_, v_args_4399_);
lean_dec_ref(v_args_4399_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4402_){
_start:
{
lean_object* v___x_4404_; lean_object* v_putStr_4405_; lean_object* v___x_4406_; 
v___x_4404_ = lean_get_stdout();
v_putStr_4405_ = lean_ctor_get(v___x_4404_, 4);
lean_inc_ref(v_putStr_4405_);
lean_dec_ref(v___x_4404_);
v___x_4406_ = lean_apply_2(v_putStr_4405_, v_s_4402_, lean_box(0));
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4407_, lean_object* v_a_4408_){
_start:
{
lean_object* v_res_4409_; 
v_res_4409_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4407_);
return v_res_4409_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4410_){
_start:
{
uint32_t v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4412_ = 10;
v___x_4413_ = lean_string_push(v_s_4410_, v___x_4412_);
v___x_4414_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4413_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4415_, lean_object* v_a_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4415_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___f_4422_, lean_object* v_x_4423_){
_start:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; uint8_t v___x_4432_; lean_object* v_val_4434_; lean_object* v___x_4437_; 
v___x_4425_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4426_ = lean_string_append(v___x_4425_, v___y_4420_);
v___x_4427_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4428_ = lean_string_append(v___x_4426_, v___x_4427_);
v___x_4429_ = l_Nat_reprFast(v___y_4421_);
v___x_4430_ = lean_string_append(v___x_4428_, v___x_4429_);
lean_dec_ref(v___x_4429_);
v___x_4431_ = lean_unsigned_to_nat(0u);
v___x_4432_ = 0;
v___x_4437_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4430_);
if (lean_obj_tag(v___x_4437_) == 0)
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
v_a_4438_ = lean_ctor_get(v___x_4437_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4437_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4437_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4437_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
lean_ctor_set_tag(v___x_4440_, 1);
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
v_val_4434_ = v___x_4443_;
goto v___jp_4433_;
}
}
}
else
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4453_; 
v_a_4446_ = lean_ctor_get(v___x_4437_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4437_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4448_ = v___x_4437_;
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4437_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
lean_ctor_set_tag(v___x_4448_, 0);
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4446_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
v_val_4434_ = v___x_4451_;
goto v___jp_4433_;
}
}
}
v___jp_4433_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4435_, 0, v_val_4434_);
v___x_4436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4432_, v___x_4435_, v___f_4422_);
return v___x_4436_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___f_4456_, lean_object* v_x_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v_res_4459_; 
v_res_4459_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4454_, v___y_4455_, v___f_4456_, v_x_4457_);
lean_dec_ref(v_x_4457_);
lean_dec_ref(v___y_4454_);
return v_res_4459_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4461_ = lean_unsigned_to_nat(0u);
v___x_4462_ = lean_nat_to_int(v___x_4461_);
return v___x_4462_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4463_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4464_ = lean_nat_abs(v___x_4463_);
return v___x_4464_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4465_ = lean_cstr_to_nat("9007199254740991");
v___x_4466_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4467_ = lean_nat_dec_le(v___x_4466_, v___x_4465_);
return v___x_4467_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4468_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4469_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
return v___x_4469_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4470_; double v___x_4471_; 
v___x_4470_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4471_ = l_Float_ofInt(v___x_4470_);
return v___x_4471_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4472_; lean_object* v___x_4473_; 
v___x_4472_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4473_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4473_, 0, v___x_4472_);
return v___x_4473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4474_, lean_object* v___x_4475_, lean_object* v_a_4476_, lean_object* v_x_4477_){
_start:
{
lean_object* v___y_4480_; uint8_t v___y_4481_; lean_object* v_val_4482_; lean_object* v___x_4485_; lean_object* v___y_4487_; uint8_t v___x_4508_; 
v___x_4485_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4508_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4508_ == 0)
{
lean_object* v___x_4509_; 
v___x_4509_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4487_ = v___x_4509_;
goto v___jp_4486_;
}
else
{
lean_object* v___x_4510_; 
v___x_4510_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4487_ = v___x_4510_;
goto v___jp_4486_;
}
v___jp_4479_:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
v___x_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4483_, 0, v_val_4482_);
v___x_4484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4480_, v___y_4481_, v___x_4483_, v___f_4474_);
return v___x_4484_;
}
v___jp_4486_:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; uint8_t v___x_4490_; lean_object* v___x_4491_; 
lean_inc(v___y_4487_);
v___x_4488_ = lean_array_push(v___x_4475_, v___y_4487_);
v___x_4489_ = lean_unsigned_to_nat(0u);
v___x_4490_ = 0;
v___x_4491_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4476_, v___x_4485_, v___x_4488_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v_a_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4499_; 
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4494_ = v___x_4491_;
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_a_4492_);
lean_dec(v___x_4491_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4497_; 
if (v_isShared_4495_ == 0)
{
lean_ctor_set_tag(v___x_4494_, 1);
v___x_4497_ = v___x_4494_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v_a_4492_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
v___y_4480_ = v___x_4489_;
v___y_4481_ = v___x_4490_;
v_val_4482_ = v___x_4497_;
goto v___jp_4479_;
}
}
}
else
{
lean_object* v_a_4500_; lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4507_; 
v_a_4500_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4507_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4507_ == 0)
{
v___x_4502_ = v___x_4491_;
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
else
{
lean_inc(v_a_4500_);
lean_dec(v___x_4491_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v___x_4505_; 
if (v_isShared_4503_ == 0)
{
lean_ctor_set_tag(v___x_4502_, 0);
v___x_4505_ = v___x_4502_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4500_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
v___y_4480_ = v___x_4489_;
v___y_4481_ = v___x_4490_;
v_val_4482_ = v___x_4505_;
goto v___jp_4479_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4511_, lean_object* v___x_4512_, lean_object* v_a_4513_, lean_object* v_x_4514_, lean_object* v___y_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4511_, v___x_4512_, v_a_4513_, v_x_4514_);
lean_dec_ref(v_x_4514_);
return v_res_4516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4517_, lean_object* v___x_4518_, lean_object* v___x_4519_, lean_object* v___f_4520_, lean_object* v_a_4521_, lean_object* v_x_4522_){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; uint8_t v___x_4528_; lean_object* v_val_4530_; lean_object* v___x_4533_; 
v___x_4524_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4525_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4525_, 0, v_a_4517_);
lean_ctor_set(v___x_4525_, 1, v___x_4518_);
v___x_4526_ = lean_array_push(v___x_4519_, v___x_4525_);
v___x_4527_ = lean_unsigned_to_nat(0u);
v___x_4528_ = 0;
v___x_4533_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4521_, v___x_4524_, v___x_4526_);
if (lean_obj_tag(v___x_4533_) == 0)
{
lean_object* v_a_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4541_; 
v_a_4534_ = lean_ctor_get(v___x_4533_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4533_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4536_ = v___x_4533_;
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_a_4534_);
lean_dec(v___x_4533_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4541_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v___x_4539_; 
if (v_isShared_4537_ == 0)
{
lean_ctor_set_tag(v___x_4536_, 1);
v___x_4539_ = v___x_4536_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v_a_4534_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
v_val_4530_ = v___x_4539_;
goto v___jp_4529_;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
v_a_4542_ = lean_ctor_get(v___x_4533_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4533_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4533_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4533_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
lean_ctor_set_tag(v___x_4544_, 0);
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
v_val_4530_ = v___x_4547_;
goto v___jp_4529_;
}
}
}
v___jp_4529_:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4531_, 0, v_val_4530_);
v___x_4532_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4527_, v___x_4528_, v___x_4531_, v___f_4520_);
return v___x_4532_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4550_, lean_object* v___x_4551_, lean_object* v___x_4552_, lean_object* v___f_4553_, lean_object* v_a_4554_, lean_object* v_x_4555_, lean_object* v___y_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4550_, v___x_4551_, v___x_4552_, v___f_4553_, v_a_4554_, v_x_4555_);
lean_dec_ref(v_x_4555_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_as_x27_4561_, lean_object* v_b_4562_){
_start:
{
if (lean_obj_tag(v_as_x27_4561_) == 0)
{
lean_object* v___x_4564_; 
lean_dec(v_a_4560_);
lean_dec(v_a_4559_);
v___x_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4564_, 0, v_b_4562_);
return v___x_4564_;
}
else
{
lean_object* v_head_4565_; lean_object* v_tail_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
v_head_4565_ = lean_ctor_get(v_as_x27_4561_, 0);
v_tail_4566_ = lean_ctor_get(v_as_x27_4561_, 1);
v___x_4567_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4568_ = lean_box(0);
v___x_4569_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4565_);
v___x_4570_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4570_, 0, v_head_4565_);
lean_inc(v_a_4559_);
v___x_4571_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4571_, 0, v_a_4559_);
lean_ctor_set(v___x_4571_, 1, v___x_4567_);
v___x_4572_ = lean_unsigned_to_nat(2u);
v___x_4573_ = lean_mk_empty_array_with_capacity(v___x_4572_);
v___x_4574_ = lean_array_push(v___x_4573_, v___x_4570_);
v___x_4575_ = lean_array_push(v___x_4574_, v___x_4571_);
lean_inc(v_a_4560_);
v___x_4576_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4560_, v___x_4569_, v___x_4575_);
if (lean_obj_tag(v___x_4576_) == 0)
{
lean_dec_ref_known(v___x_4576_, 1);
v_as_x27_4561_ = v_tail_4566_;
v_b_4562_ = v___x_4568_;
goto _start;
}
else
{
lean_object* v_a_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4585_; 
lean_dec(v_a_4560_);
lean_dec(v_a_4559_);
v_a_4578_ = lean_ctor_get(v___x_4576_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4576_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4580_ = v___x_4576_;
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_a_4578_);
lean_dec(v___x_4576_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
lean_object* v___x_4583_; 
if (v_isShared_4581_ == 0)
{
v___x_4583_ = v___x_4580_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_a_4578_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_as_x27_4588_, lean_object* v_b_4589_, lean_object* v___y_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4586_, v_a_4587_, v_as_x27_4588_, v_b_4589_);
lean_dec(v_as_x27_4588_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4593_){
_start:
{
uint32_t v___x_4595_; uint32_t v___x_4596_; uint64_t v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4595_ = 201;
v___x_4596_ = 0;
v___x_4597_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_4598_ = lean_string_to_utf8(v_specifier_4593_);
v___x_4599_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4595_, v___x_4596_, v___x_4597_, v___x_4598_);
lean_dec_ref(v___x_4598_);
if (lean_obj_tag(v___x_4599_) == 0)
{
lean_object* v_a_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v_a_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc(v_a_4600_);
lean_dec_ref_known(v___x_4599_, 1);
v___x_4601_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4602_ = l_String_quote(v_specifier_4593_);
v___x_4603_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4602_);
v___x_4604_ = lean_unsigned_to_nat(120u);
v___x_4605_ = lean_unsigned_to_nat(0u);
v___x_4606_ = l_Std_Format_pretty(v___x_4603_, v___x_4604_, v___x_4605_, v___x_4605_);
v___x_4607_ = lean_string_append(v___x_4601_, v___x_4606_);
lean_dec_ref(v___x_4606_);
v___x_4608_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4607_, v_a_4600_);
lean_dec(v_a_4600_);
lean_dec_ref(v___x_4607_);
return v___x_4608_;
}
else
{
lean_object* v_a_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4616_; 
lean_dec_ref(v_specifier_4593_);
v_a_4609_ = lean_ctor_get(v___x_4599_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4599_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4611_ = v___x_4599_;
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_a_4609_);
lean_dec(v___x_4599_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4614_; 
if (v_isShared_4612_ == 0)
{
v___x_4614_ = v___x_4611_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v_a_4609_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
return v___x_4614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4617_, lean_object* v_a_4618_){
_start:
{
lean_object* v_res_4619_; 
v_res_4619_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4617_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4645_, lean_object* v_options_4646_){
_start:
{
lean_object* v___f_4648_; lean_object* v___f_4649_; lean_object* v___f_4650_; lean_object* v___f_4651_; lean_object* v___y_4653_; lean_object* v___y_4654_; lean_object* v___y_4655_; lean_object* v___y_4656_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___y_4659_; lean_object* v___y_4660_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___f_4648_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4649_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4650_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4651_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4714_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4715_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4714_);
if (lean_obj_tag(v___x_4715_) == 0)
{
lean_object* v_a_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
v_a_4716_ = lean_ctor_get(v___x_4715_, 0);
lean_inc(v_a_4716_);
lean_dec_ref_known(v___x_4715_, 1);
v___x_4717_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4718_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4717_);
if (lean_obj_tag(v___x_4718_) == 0)
{
lean_object* v_a_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v_a_4719_ = lean_ctor_get(v___x_4718_, 0);
lean_inc(v_a_4719_);
lean_dec_ref_known(v___x_4718_, 1);
v___x_4720_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4721_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4719_, v___x_4720_);
if (lean_obj_tag(v___x_4721_) == 0)
{
lean_object* v_a_4722_; lean_object* v___x_4723_; 
v_a_4722_ = lean_ctor_get(v___x_4721_, 0);
lean_inc(v_a_4722_);
lean_dec_ref_known(v___x_4721_, 1);
v___x_4723_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4723_) == 0)
{
lean_object* v_a_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
v_a_4724_ = lean_ctor_get(v___x_4723_, 0);
lean_inc(v_a_4724_);
lean_dec_ref_known(v___x_4723_, 1);
v___x_4725_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4726_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4724_, v___x_4725_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___y_4729_; lean_object* v___y_4730_; lean_object* v___y_4731_; lean_object* v___y_4781_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___y_4786_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc(v_a_4727_);
lean_dec_ref_known(v___x_4726_, 1);
v___x_4783_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_4784_ = lean_io_getenv(v___x_4783_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4795_; 
v___x_4795_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_4786_ = v___x_4795_;
goto v___jp_4785_;
}
else
{
lean_object* v_val_4796_; 
v_val_4796_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_val_4796_);
lean_dec_ref_known(v___x_4784_, 1);
v___y_4786_ = v_val_4796_;
goto v___jp_4785_;
}
v___jp_4728_:
{
lean_object* v___f_4732_; lean_object* v___f_4733_; lean_object* v___f_4734_; lean_object* v___f_4735_; lean_object* v___x_4736_; 
lean_inc_n(v___y_4731_, 2);
v___f_4732_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4732_, 0, v___f_4649_);
lean_closure_set(v___f_4732_, 1, v___f_4648_);
lean_closure_set(v___f_4732_, 2, v_handler_4645_);
lean_closure_set(v___f_4732_, 3, v_options_4646_);
lean_closure_set(v___f_4732_, 4, v_a_4727_);
lean_closure_set(v___f_4732_, 5, v_a_4722_);
lean_closure_set(v___f_4732_, 6, v___y_4731_);
v___f_4733_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4733_, 0, v___f_4732_);
lean_inc_ref(v___f_4733_);
v___f_4734_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4734_, 0, v___f_4733_);
lean_closure_set(v___f_4734_, 1, v___f_4733_);
v___f_4735_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4735_, 0, v___y_4729_);
lean_closure_set(v___f_4735_, 1, v___y_4731_);
lean_closure_set(v___f_4735_, 2, v___f_4650_);
v___x_4736_ = l_Lasm_JS_Function_ofFnReply(v___f_4734_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v_a_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
v_a_4737_ = lean_ctor_get(v___x_4736_, 0);
lean_inc(v_a_4737_);
lean_dec_ref_known(v___x_4736_, 1);
v___x_4738_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4739_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4740_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4740_, 0, v_a_4737_);
lean_ctor_set(v___x_4740_, 1, v___x_4739_);
v___x_4741_ = lean_unsigned_to_nat(1u);
v___x_4742_ = lean_mk_empty_array_with_capacity(v___x_4741_);
lean_inc_ref(v___x_4742_);
v___x_4743_ = lean_array_push(v___x_4742_, v___x_4740_);
v___x_4744_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4716_, v___x_4738_, v___x_4743_);
if (lean_obj_tag(v___x_4744_) == 0)
{
lean_object* v_a_4745_; lean_object* v___x_4746_; 
v_a_4745_ = lean_ctor_get(v___x_4744_, 0);
lean_inc(v_a_4745_);
lean_dec_ref_known(v___x_4744_, 1);
v___x_4746_ = l_Lasm_JS_Function_ofFn(v___f_4735_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_object* v_a_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; uint8_t v___x_4752_; 
v_a_4747_ = lean_ctor_get(v___x_4746_, 0);
lean_inc(v_a_4747_);
lean_dec_ref_known(v___x_4746_, 1);
v___x_4748_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4749_ = lean_nat_to_int(v___y_4731_);
v___x_4750_ = lean_nat_abs(v___x_4749_);
v___x_4751_ = lean_cstr_to_nat("9007199254740991");
v___x_4752_ = lean_nat_dec_le(v___x_4750_, v___x_4751_);
lean_dec(v___x_4750_);
if (v___x_4752_ == 0)
{
lean_object* v___x_4753_; 
v___x_4753_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4753_, 0, v___x_4749_);
v___y_4653_ = v___x_4742_;
v___y_4654_ = v_a_4745_;
v___y_4655_ = v___x_4739_;
v___y_4656_ = v___y_4730_;
v___y_4657_ = v___x_4748_;
v___y_4658_ = v___x_4739_;
v___y_4659_ = v_a_4747_;
v___y_4660_ = v___x_4753_;
goto v___jp_4652_;
}
else
{
double v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = l_Float_ofInt(v___x_4749_);
lean_dec(v___x_4749_);
v___x_4755_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4755_, 0, v___x_4754_);
v___y_4653_ = v___x_4742_;
v___y_4654_ = v_a_4745_;
v___y_4655_ = v___x_4739_;
v___y_4656_ = v___y_4730_;
v___y_4657_ = v___x_4748_;
v___y_4658_ = v___x_4739_;
v___y_4659_ = v_a_4747_;
v___y_4660_ = v___x_4755_;
goto v___jp_4652_;
}
}
else
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
lean_dec(v_a_4745_);
lean_dec_ref(v___x_4742_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
v_a_4756_ = lean_ctor_get(v___x_4746_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4746_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4746_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4746_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4771_; 
lean_dec_ref(v___x_4742_);
lean_dec_ref(v___f_4735_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
v_a_4764_ = lean_ctor_get(v___x_4744_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4744_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4766_ = v___x_4744_;
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___x_4744_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4764_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
return v___x_4769_;
}
}
}
}
else
{
lean_object* v_a_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4779_; 
lean_dec_ref(v___f_4735_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v_a_4716_);
v_a_4772_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4779_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4779_ == 0)
{
v___x_4774_ = v___x_4736_;
v_isShared_4775_ = v_isSharedCheck_4779_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_a_4772_);
lean_dec(v___x_4736_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4779_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
lean_object* v___x_4777_; 
if (v_isShared_4775_ == 0)
{
v___x_4777_ = v___x_4774_;
goto v_reusejp_4776_;
}
else
{
lean_object* v_reuseFailAlloc_4778_; 
v_reuseFailAlloc_4778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4778_, 0, v_a_4772_);
v___x_4777_ = v_reuseFailAlloc_4778_;
goto v_reusejp_4776_;
}
v_reusejp_4776_:
{
return v___x_4777_;
}
}
}
}
v___jp_4780_:
{
lean_object* v___x_4782_; 
v___x_4782_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_4781_);
v___y_4729_ = v___y_4781_;
v___y_4730_ = v___y_4781_;
v___y_4731_ = v___x_4782_;
goto v___jp_4728_;
}
v___jp_4785_:
{
lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4787_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_4788_ = lean_io_getenv(v___x_4787_);
if (lean_obj_tag(v___x_4788_) == 0)
{
v___y_4781_ = v___y_4786_;
goto v___jp_4780_;
}
else
{
lean_object* v_val_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v_val_4789_ = lean_ctor_get(v___x_4788_, 0);
lean_inc(v_val_4789_);
lean_dec_ref_known(v___x_4788_, 1);
v___x_4790_ = lean_unsigned_to_nat(0u);
v___x_4791_ = lean_string_utf8_byte_size(v_val_4789_);
v___x_4792_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4792_, 0, v_val_4789_);
lean_ctor_set(v___x_4792_, 1, v___x_4790_);
lean_ctor_set(v___x_4792_, 2, v___x_4791_);
v___x_4793_ = l_String_Slice_toNat_x3f(v___x_4792_);
lean_dec_ref_known(v___x_4792_, 3);
if (lean_obj_tag(v___x_4793_) == 0)
{
v___y_4781_ = v___y_4786_;
goto v___jp_4780_;
}
else
{
lean_object* v_val_4794_; 
v_val_4794_ = lean_ctor_get(v___x_4793_, 0);
lean_inc(v_val_4794_);
lean_dec_ref_known(v___x_4793_, 1);
lean_inc_ref(v___y_4786_);
v___y_4729_ = v___y_4786_;
v___y_4730_ = v___y_4786_;
v___y_4731_ = v_val_4794_;
goto v___jp_4728_;
}
}
}
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec(v_a_4722_);
lean_dec(v_a_4716_);
lean_dec_ref(v_options_4646_);
lean_dec_ref(v_handler_4645_);
v_a_4797_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4726_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4726_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
else
{
lean_object* v_a_4805_; lean_object* v___x_4807_; uint8_t v_isShared_4808_; uint8_t v_isSharedCheck_4812_; 
lean_dec(v_a_4722_);
lean_dec(v_a_4716_);
lean_dec_ref(v_options_4646_);
lean_dec_ref(v_handler_4645_);
v_a_4805_ = lean_ctor_get(v___x_4723_, 0);
v_isSharedCheck_4812_ = !lean_is_exclusive(v___x_4723_);
if (v_isSharedCheck_4812_ == 0)
{
v___x_4807_ = v___x_4723_;
v_isShared_4808_ = v_isSharedCheck_4812_;
goto v_resetjp_4806_;
}
else
{
lean_inc(v_a_4805_);
lean_dec(v___x_4723_);
v___x_4807_ = lean_box(0);
v_isShared_4808_ = v_isSharedCheck_4812_;
goto v_resetjp_4806_;
}
v_resetjp_4806_:
{
lean_object* v___x_4810_; 
if (v_isShared_4808_ == 0)
{
v___x_4810_ = v___x_4807_;
goto v_reusejp_4809_;
}
else
{
lean_object* v_reuseFailAlloc_4811_; 
v_reuseFailAlloc_4811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4811_, 0, v_a_4805_);
v___x_4810_ = v_reuseFailAlloc_4811_;
goto v_reusejp_4809_;
}
v_reusejp_4809_:
{
return v___x_4810_;
}
}
}
}
else
{
lean_object* v_a_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4820_; 
lean_dec(v_a_4716_);
lean_dec_ref(v_options_4646_);
lean_dec_ref(v_handler_4645_);
v_a_4813_ = lean_ctor_get(v___x_4721_, 0);
v_isSharedCheck_4820_ = !lean_is_exclusive(v___x_4721_);
if (v_isSharedCheck_4820_ == 0)
{
v___x_4815_ = v___x_4721_;
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_a_4813_);
lean_dec(v___x_4721_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4818_; 
if (v_isShared_4816_ == 0)
{
v___x_4818_ = v___x_4815_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4819_; 
v_reuseFailAlloc_4819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4819_, 0, v_a_4813_);
v___x_4818_ = v_reuseFailAlloc_4819_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
return v___x_4818_;
}
}
}
}
else
{
lean_object* v_a_4821_; lean_object* v___x_4823_; uint8_t v_isShared_4824_; uint8_t v_isSharedCheck_4828_; 
lean_dec(v_a_4716_);
lean_dec_ref(v_options_4646_);
lean_dec_ref(v_handler_4645_);
v_a_4821_ = lean_ctor_get(v___x_4718_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v___x_4718_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4823_ = v___x_4718_;
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
else
{
lean_inc(v_a_4821_);
lean_dec(v___x_4718_);
v___x_4823_ = lean_box(0);
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
v_resetjp_4822_:
{
lean_object* v___x_4826_; 
if (v_isShared_4824_ == 0)
{
v___x_4826_ = v___x_4823_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4821_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
return v___x_4826_;
}
}
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
lean_dec_ref(v_options_4646_);
lean_dec_ref(v_handler_4645_);
v_a_4829_ = lean_ctor_get(v___x_4715_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4715_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4715_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4715_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
v___jp_4652_:
{
lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4661_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4661_, 0, v___y_4656_);
lean_inc_ref(v___y_4658_);
v___x_4662_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4662_, 0, v___y_4659_);
lean_ctor_set(v___x_4662_, 1, v___y_4658_);
v___x_4663_ = lean_unsigned_to_nat(3u);
v___x_4664_ = lean_mk_empty_array_with_capacity(v___x_4663_);
v___x_4665_ = lean_array_push(v___x_4664_, v___y_4660_);
v___x_4666_ = lean_array_push(v___x_4665_, v___x_4661_);
v___x_4667_ = lean_array_push(v___x_4666_, v___x_4662_);
lean_inc_ref(v___y_4657_);
lean_inc(v___y_4654_);
v___x_4668_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4654_, v___y_4657_, v___x_4667_);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v___x_4669_; lean_object* v___x_4670_; 
lean_dec_ref_known(v___x_4668_, 1);
v___x_4669_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4670_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4669_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v_a_4671_; lean_object* v___f_4672_; lean_object* v___x_4673_; 
v_a_4671_ = lean_ctor_get(v___x_4670_, 0);
lean_inc_n(v_a_4671_, 2);
lean_dec_ref_known(v___x_4670_, 1);
lean_inc_ref(v___y_4653_);
v___f_4672_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4672_, 0, v___f_4651_);
lean_closure_set(v___f_4672_, 1, v___y_4653_);
lean_closure_set(v___f_4672_, 2, v_a_4671_);
v___x_4673_ = l_Lasm_JS_Function_ofFn(v___f_4672_);
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_object* v_a_4674_; lean_object* v___f_4675_; lean_object* v___x_4676_; 
v_a_4674_ = lean_ctor_get(v___x_4673_, 0);
lean_inc(v_a_4674_);
lean_dec_ref_known(v___x_4673_, 1);
lean_inc_ref(v___y_4655_);
v___f_4675_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4675_, 0, v_a_4674_);
lean_closure_set(v___f_4675_, 1, v___y_4655_);
lean_closure_set(v___f_4675_, 2, v___y_4653_);
lean_closure_set(v___f_4675_, 3, v___f_4651_);
lean_closure_set(v___f_4675_, 4, v___y_4654_);
v___x_4676_ = l_Lasm_JS_Function_ofFn(v___f_4675_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v_a_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; 
v_a_4677_ = lean_ctor_get(v___x_4676_, 0);
lean_inc(v_a_4677_);
lean_dec_ref_known(v___x_4676_, 1);
v___x_4678_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4679_ = lean_box(0);
v___x_4680_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4677_, v_a_4671_, v___x_4678_, v___x_4679_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v___x_4681_; 
lean_dec_ref_known(v___x_4680_, 1);
v___x_4681_ = l_Lasm_JS_waitForever();
return v___x_4681_;
}
else
{
return v___x_4680_;
}
}
else
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
lean_dec(v_a_4671_);
v_a_4682_ = lean_ctor_get(v___x_4676_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4676_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4684_ = v___x_4676_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4676_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4682_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4697_; 
lean_dec(v_a_4671_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
v_a_4690_ = lean_ctor_get(v___x_4673_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v___x_4673_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4692_ = v___x_4673_;
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_a_4690_);
lean_dec(v___x_4673_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4695_; 
if (v_isShared_4693_ == 0)
{
v___x_4695_ = v___x_4692_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4690_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
else
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4705_; 
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
v_a_4698_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4700_ = v___x_4670_;
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v___x_4670_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4698_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
v_a_4706_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4668_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4668_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_4837_, lean_object* v_options_4838_, lean_object* v_a_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l_Lasm_Fetch_serveNode(v_handler_4837_, v_options_4838_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_4841_, lean_object* v_range_4842_, lean_object* v_b_4843_, lean_object* v_i_4844_, lean_object* v_hs_4845_, lean_object* v_hl_4846_){
_start:
{
lean_object* v___x_4847_; 
v___x_4847_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4841_, v_range_4842_, v_b_4843_, v_i_4844_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_4848_, lean_object* v_range_4849_, lean_object* v_b_4850_, lean_object* v_i_4851_, lean_object* v_hs_4852_, lean_object* v_hl_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_4848_, v_range_4849_, v_b_4850_, v_i_4851_, v_hs_4852_, v_hl_4853_);
lean_dec_ref(v_range_4849_);
lean_dec_ref(v___y_4848_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_4855_, lean_object* v_a_4856_, lean_object* v_as_4857_, lean_object* v_as_x27_4858_, lean_object* v_b_4859_, lean_object* v_a_4860_){
_start:
{
lean_object* v___x_4862_; 
v___x_4862_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4855_, v_a_4856_, v_as_x27_4858_, v_b_4859_);
return v___x_4862_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_as_4865_, lean_object* v_as_x27_4866_, lean_object* v_b_4867_, lean_object* v_a_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_4863_, v_a_4864_, v_as_4865_, v_as_x27_4866_, v_b_4867_, v_a_4868_);
lean_dec(v_as_x27_4866_);
lean_dec(v_as_4865_);
return v_res_4870_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_4871_; 
v___x_4871_ = lean_box(0);
return v___x_4871_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = lean_box(0);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_4880_, lean_object* v_method_4881_, lean_object* v_url_4882_, lean_object* v_headers_4883_, lean_object* v_body_4884_, lean_object* v_backend_4885_, lean_object* v_a_00___x40___internal___hyg_4886_){
_start:
{
lean_object* v_res_4887_; 
v_res_4887_ = lasm_fetch_send(v_p_4880_, v_method_4881_, v_url_4882_, v_headers_4883_, v_body_4884_, v_backend_4885_);
lean_dec_ref(v_backend_4885_);
lean_dec_ref(v_body_4884_);
lean_dec_ref(v_headers_4883_);
lean_dec_ref(v_url_4882_);
lean_dec_ref(v_method_4881_);
lean_dec(v_p_4880_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_4888_, lean_object* v_b_4889_, lean_object* v_x_4890_, lean_object* v_x_4891_){
_start:
{
if (lean_obj_tag(v_x_4891_) == 0)
{
return v_x_4890_;
}
else
{
lean_object* v_head_4892_; lean_object* v_tail_4893_; uint8_t v___y_4895_; lean_object* v___x_4902_; lean_object* v___x_4903_; uint8_t v___x_4904_; 
v_head_4892_ = lean_ctor_get(v_x_4891_, 0);
v_tail_4893_ = lean_ctor_get(v_x_4891_, 1);
v___x_4902_ = lean_nat_add(v_pos_4888_, v_head_4892_);
v___x_4903_ = lean_byte_array_size(v_b_4889_);
v___x_4904_ = lean_nat_dec_lt(v___x_4902_, v___x_4903_);
if (v___x_4904_ == 0)
{
uint8_t v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; uint8_t v___x_4908_; 
lean_dec(v___x_4902_);
v___x_4905_ = 0;
v___x_4906_ = lean_box(v___x_4905_);
v___x_4907_ = l_outOfBounds___redArg(v___x_4906_);
lean_dec(v___x_4906_);
v___x_4908_ = lean_unbox(v___x_4907_);
lean_dec(v___x_4907_);
v___y_4895_ = v___x_4908_;
goto v___jp_4894_;
}
else
{
uint8_t v___x_4909_; 
v___x_4909_ = lean_byte_array_fget(v_b_4889_, v___x_4902_);
lean_dec(v___x_4902_);
v___y_4895_ = v___x_4909_;
goto v___jp_4894_;
}
v___jp_4894_:
{
lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4896_ = lean_uint8_to_nat(v___y_4895_);
v___x_4897_ = lean_unsigned_to_nat(256u);
v___x_4898_ = lean_nat_pow(v___x_4897_, v_head_4892_);
v___x_4899_ = lean_nat_mul(v___x_4896_, v___x_4898_);
lean_dec(v___x_4898_);
v___x_4900_ = lean_nat_add(v_x_4890_, v___x_4899_);
lean_dec(v___x_4899_);
lean_dec(v_x_4890_);
v_x_4890_ = v___x_4900_;
v_x_4891_ = v_tail_4893_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_4910_, lean_object* v_b_4911_, lean_object* v_x_4912_, lean_object* v_x_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4910_, v_b_4911_, v_x_4912_, v_x_4913_);
lean_dec(v_x_4913_);
lean_dec_ref(v_b_4911_);
lean_dec(v_pos_4910_);
return v_res_4914_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4915_ = lean_unsigned_to_nat(8u);
v___x_4916_ = l_List_range(v___x_4915_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_4920_, lean_object* v_pos_4921_){
_start:
{
lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; uint8_t v___x_4925_; 
v___x_4922_ = lean_byte_array_size(v_b_4920_);
v___x_4923_ = lean_unsigned_to_nat(8u);
v___x_4924_ = lean_nat_add(v_pos_4921_, v___x_4923_);
v___x_4925_ = lean_nat_dec_lt(v___x_4922_, v___x_4924_);
lean_dec(v___x_4924_);
if (v___x_4925_ == 0)
{
lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; 
v___x_4926_ = lean_unsigned_to_nat(0u);
v___x_4927_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_4928_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_4921_, v_b_4920_, v___x_4926_, v___x_4927_);
v___x_4929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4929_, 0, v___x_4928_);
return v___x_4929_;
}
else
{
lean_object* v___x_4930_; 
v___x_4930_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_4930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_4931_, lean_object* v_pos_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4931_, v_pos_4932_);
lean_dec(v_pos_4932_);
lean_dec_ref(v_b_4931_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_4934_, lean_object* v_a_4935_){
_start:
{
if (lean_obj_tag(v_a_4934_) == 0)
{
lean_object* v___x_4936_; 
v___x_4936_ = l_List_reverse___redArg(v_a_4935_);
return v___x_4936_;
}
else
{
lean_object* v_head_4937_; lean_object* v_tail_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4954_; 
v_head_4937_ = lean_ctor_get(v_a_4934_, 0);
v_tail_4938_ = lean_ctor_get(v_a_4934_, 1);
v_isSharedCheck_4954_ = !lean_is_exclusive(v_a_4934_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4940_ = v_a_4934_;
v_isShared_4941_ = v_isSharedCheck_4954_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_tail_4938_);
lean_inc(v_head_4937_);
lean_dec(v_a_4934_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4954_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
uint8_t v___y_4943_; uint8_t v___x_4949_; uint8_t v___x_4950_; uint8_t v___x_4951_; 
v___x_4949_ = 128;
v___x_4950_ = lean_unbox(v_head_4937_);
v___x_4951_ = lean_uint8_dec_lt(v___x_4950_, v___x_4949_);
if (v___x_4951_ == 0)
{
uint8_t v___x_4952_; 
lean_dec(v_head_4937_);
v___x_4952_ = 63;
v___y_4943_ = v___x_4952_;
goto v___jp_4942_;
}
else
{
uint8_t v___x_4953_; 
v___x_4953_ = lean_unbox(v_head_4937_);
lean_dec(v_head_4937_);
v___y_4943_ = v___x_4953_;
goto v___jp_4942_;
}
v___jp_4942_:
{
lean_object* v___x_4944_; lean_object* v___x_4946_; 
v___x_4944_ = lean_box(v___y_4943_);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v_a_4935_);
lean_ctor_set(v___x_4940_, 0, v___x_4944_);
v___x_4946_ = v___x_4940_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4944_);
lean_ctor_set(v_reuseFailAlloc_4948_, 1, v_a_4935_);
v___x_4946_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
v_a_4934_ = v_tail_4938_;
v_a_4935_ = v___x_4946_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_4957_, lean_object* v_pos_4958_, lean_object* v_n_4959_){
_start:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; uint8_t v___x_4962_; 
v___x_4960_ = lean_byte_array_size(v_b_4957_);
v___x_4961_ = lean_nat_add(v_pos_4958_, v_n_4959_);
v___x_4962_ = lean_nat_dec_lt(v___x_4960_, v___x_4961_);
if (v___x_4962_ == 0)
{
lean_object* v___x_4963_; uint8_t v___x_4964_; 
v___x_4963_ = l_ByteArray_extract(v_b_4957_, v_pos_4958_, v___x_4961_);
lean_dec(v___x_4961_);
v___x_4964_ = lean_string_validate_utf8(v___x_4963_);
if (v___x_4964_ == 0)
{
lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; uint8_t v___x_4969_; 
v___x_4965_ = l_ByteArray_toList(v___x_4963_);
lean_dec_ref(v___x_4963_);
v___x_4966_ = lean_box(0);
v___x_4967_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_4965_, v___x_4966_);
v___x_4968_ = l_List_toByteArray(v___x_4967_);
lean_dec(v___x_4967_);
v___x_4969_ = lean_string_validate_utf8(v___x_4968_);
if (v___x_4969_ == 0)
{
lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; 
lean_dec_ref(v___x_4968_);
v___x_4970_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_4971_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4970_);
v___x_4972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4971_);
return v___x_4972_;
}
else
{
lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4973_ = lean_string_from_utf8_unchecked(v___x_4968_);
v___x_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
return v___x_4974_;
}
}
else
{
lean_object* v___x_4975_; lean_object* v___x_4976_; 
v___x_4975_ = lean_string_from_utf8_unchecked(v___x_4963_);
v___x_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4975_);
return v___x_4976_;
}
}
else
{
lean_object* v___x_4977_; 
lean_dec(v___x_4961_);
lean_dec(v_pos_4958_);
v___x_4977_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_4977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_4978_, lean_object* v_pos_4979_, lean_object* v_n_4980_){
_start:
{
lean_object* v_res_4981_; 
v_res_4981_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_4978_, v_pos_4979_, v_n_4980_);
lean_dec(v_n_4980_);
lean_dec_ref(v_b_4978_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_4982_, lean_object* v_range_4983_, lean_object* v_b_4984_, lean_object* v_i_4985_){
_start:
{
lean_object* v_stop_4986_; lean_object* v_step_4987_; uint8_t v___x_4988_; 
v_stop_4986_ = lean_ctor_get(v_range_4983_, 1);
v_step_4987_ = lean_ctor_get(v_range_4983_, 2);
v___x_4988_ = lean_nat_dec_lt(v_i_4985_, v_stop_4986_);
if (v___x_4988_ == 0)
{
lean_object* v___x_4989_; 
lean_dec(v_i_4985_);
v___x_4989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4989_, 0, v_b_4984_);
return v___x_4989_;
}
else
{
lean_object* v_fst_4990_; lean_object* v_snd_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_5047_; 
v_fst_4990_ = lean_ctor_get(v_b_4984_, 0);
v_snd_4991_ = lean_ctor_get(v_b_4984_, 1);
v_isSharedCheck_5047_ = !lean_is_exclusive(v_b_4984_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_4993_ = v_b_4984_;
v_isShared_4994_ = v_isSharedCheck_5047_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_snd_4991_);
lean_inc(v_fst_4990_);
lean_dec(v_b_4984_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_5047_;
goto v_resetjp_4992_;
}
v_resetjp_4992_:
{
lean_object* v___x_4995_; 
v___x_4995_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4982_, v_fst_4990_);
if (lean_obj_tag(v___x_4995_) == 0)
{
lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5003_; 
lean_del_object(v___x_4993_);
lean_dec(v_snd_4991_);
lean_dec(v_fst_4990_);
lean_dec(v_i_4985_);
v_a_4996_ = lean_ctor_get(v___x_4995_, 0);
v_isSharedCheck_5003_ = !lean_is_exclusive(v___x_4995_);
if (v_isSharedCheck_5003_ == 0)
{
v___x_4998_ = v___x_4995_;
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v___x_4995_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5001_; 
if (v_isShared_4999_ == 0)
{
v___x_5001_ = v___x_4998_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v_a_4996_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
return v___x_5001_;
}
}
}
else
{
lean_object* v_a_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v_a_5004_ = lean_ctor_get(v___x_4995_, 0);
lean_inc(v_a_5004_);
lean_dec_ref_known(v___x_4995_, 1);
v___x_5005_ = lean_unsigned_to_nat(8u);
v___x_5006_ = lean_nat_add(v_fst_4990_, v___x_5005_);
lean_dec(v_fst_4990_);
lean_inc(v___x_5006_);
v___x_5007_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_4982_, v___x_5006_, v_a_5004_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
lean_dec(v___x_5006_);
lean_dec(v_a_5004_);
lean_del_object(v___x_4993_);
lean_dec(v_snd_4991_);
lean_dec(v_i_4985_);
v_a_5008_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5010_ = v___x_5007_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_5007_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5008_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
else
{
lean_object* v_a_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
v_a_5016_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_a_5016_);
lean_dec_ref_known(v___x_5007_, 1);
v___x_5017_ = lean_nat_add(v___x_5006_, v_a_5004_);
lean_dec(v_a_5004_);
lean_dec(v___x_5006_);
v___x_5018_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_4982_, v___x_5017_);
if (lean_obj_tag(v___x_5018_) == 0)
{
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_dec(v___x_5017_);
lean_dec(v_a_5016_);
lean_del_object(v___x_4993_);
lean_dec(v_snd_4991_);
lean_dec(v_i_4985_);
v_a_5019_ = lean_ctor_get(v___x_5018_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_5018_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_5018_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_5018_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
else
{
lean_object* v_a_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
v_a_5027_ = lean_ctor_get(v___x_5018_, 0);
lean_inc(v_a_5027_);
lean_dec_ref_known(v___x_5018_, 1);
v___x_5028_ = lean_nat_add(v___x_5017_, v___x_5005_);
lean_dec(v___x_5017_);
lean_inc(v___x_5028_);
v___x_5029_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_4982_, v___x_5028_, v_a_5027_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v_a_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5037_; 
lean_dec(v___x_5028_);
lean_dec(v_a_5027_);
lean_dec(v_a_5016_);
lean_del_object(v___x_4993_);
lean_dec(v_snd_4991_);
lean_dec(v_i_4985_);
v_a_5030_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5037_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5037_ == 0)
{
v___x_5032_ = v___x_5029_;
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_a_5030_);
lean_dec(v___x_5029_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5035_; 
if (v_isShared_5033_ == 0)
{
v___x_5035_ = v___x_5032_;
goto v_reusejp_5034_;
}
else
{
lean_object* v_reuseFailAlloc_5036_; 
v_reuseFailAlloc_5036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5036_, 0, v_a_5030_);
v___x_5035_ = v_reuseFailAlloc_5036_;
goto v_reusejp_5034_;
}
v_reusejp_5034_:
{
return v___x_5035_;
}
}
}
else
{
lean_object* v_a_5038_; lean_object* v___x_5039_; lean_object* v___x_5041_; 
v_a_5038_ = lean_ctor_get(v___x_5029_, 0);
lean_inc(v_a_5038_);
lean_dec_ref_known(v___x_5029_, 1);
v___x_5039_ = lean_nat_add(v___x_5028_, v_a_5027_);
lean_dec(v_a_5027_);
lean_dec(v___x_5028_);
if (v_isShared_4994_ == 0)
{
lean_ctor_set(v___x_4993_, 1, v_a_5038_);
lean_ctor_set(v___x_4993_, 0, v_a_5016_);
v___x_5041_ = v___x_4993_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v_a_5016_);
lean_ctor_set(v_reuseFailAlloc_5046_, 1, v_a_5038_);
v___x_5041_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; 
v___x_5042_ = lean_array_push(v_snd_4991_, v___x_5041_);
v___x_5043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5043_, 0, v___x_5039_);
lean_ctor_set(v___x_5043_, 1, v___x_5042_);
v___x_5044_ = lean_nat_add(v_i_4985_, v_step_4987_);
lean_dec(v_i_4985_);
v_b_4984_ = v___x_5043_;
v_i_4985_ = v___x_5044_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5048_, lean_object* v_range_5049_, lean_object* v_b_5050_, lean_object* v_i_5051_){
_start:
{
lean_object* v_res_5052_; 
v_res_5052_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5048_, v_range_5049_, v_b_5050_, v_i_5051_);
lean_dec_ref(v_range_5049_);
lean_dec_ref(v_b_5048_);
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5056_){
_start:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; 
v___x_5057_ = lean_unsigned_to_nat(0u);
v___x_5058_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5056_, v___x_5057_);
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
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
lean_object* v_a_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v_a_5067_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5058_, 1);
v___x_5068_ = lean_unsigned_to_nat(8u);
v___x_5069_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5056_, v___x_5068_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5077_; 
lean_dec(v_a_5067_);
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5072_ = v___x_5069_;
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5069_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5075_; 
if (v_isShared_5073_ == 0)
{
v___x_5075_ = v___x_5072_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5070_);
v___x_5075_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
return v___x_5075_;
}
}
}
else
{
lean_object* v_a_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; 
v_a_5078_ = lean_ctor_get(v___x_5069_, 0);
lean_inc(v_a_5078_);
lean_dec_ref_known(v___x_5069_, 1);
v___x_5079_ = lean_unsigned_to_nat(1u);
v___x_5080_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5057_);
lean_ctor_set(v___x_5080_, 1, v_a_5078_);
lean_ctor_set(v___x_5080_, 2, v___x_5079_);
v___x_5081_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5082_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5056_, v___x_5080_, v___x_5081_, v___x_5057_);
lean_dec_ref_known(v___x_5080_, 3);
if (lean_obj_tag(v___x_5082_) == 0)
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5090_; 
lean_dec(v_a_5067_);
v_a_5083_ = lean_ctor_get(v___x_5082_, 0);
v_isSharedCheck_5090_ = !lean_is_exclusive(v___x_5082_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_5085_ = v___x_5082_;
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v___x_5082_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___x_5088_; 
if (v_isShared_5086_ == 0)
{
v___x_5088_ = v___x_5085_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5083_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
return v___x_5088_;
}
}
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5105_; 
v_a_5091_ = lean_ctor_get(v___x_5082_, 0);
v_isSharedCheck_5105_ = !lean_is_exclusive(v___x_5082_);
if (v_isSharedCheck_5105_ == 0)
{
v___x_5093_ = v___x_5082_;
v_isShared_5094_ = v_isSharedCheck_5105_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5082_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5105_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v_fst_5095_; lean_object* v_snd_5096_; uint16_t v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5103_; 
v_fst_5095_ = lean_ctor_get(v_a_5091_, 0);
lean_inc(v_fst_5095_);
v_snd_5096_ = lean_ctor_get(v_a_5091_, 1);
lean_inc(v_snd_5096_);
lean_dec(v_a_5091_);
v___x_5097_ = lean_uint16_of_nat(v_a_5067_);
lean_dec(v_a_5067_);
v___x_5098_ = lean_byte_array_size(v_b_5056_);
v___x_5099_ = l_ByteArray_extract(v_b_5056_, v_fst_5095_, v___x_5098_);
v___x_5100_ = lean_box(0);
v___x_5101_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5101_, 0, v_snd_5096_);
lean_ctor_set(v___x_5101_, 1, v___x_5099_);
lean_ctor_set(v___x_5101_, 2, v___x_5100_);
lean_ctor_set_uint16(v___x_5101_, sizeof(void*)*3, v___x_5097_);
if (v_isShared_5094_ == 0)
{
lean_ctor_set(v___x_5093_, 0, v___x_5101_);
v___x_5103_ = v___x_5093_;
goto v_reusejp_5102_;
}
else
{
lean_object* v_reuseFailAlloc_5104_; 
v_reuseFailAlloc_5104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5104_, 0, v___x_5101_);
v___x_5103_ = v_reuseFailAlloc_5104_;
goto v_reusejp_5102_;
}
v_reusejp_5102_:
{
return v___x_5103_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5106_){
_start:
{
lean_object* v_res_5107_; 
v_res_5107_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5106_);
lean_dec_ref(v_b_5106_);
return v_res_5107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5108_, lean_object* v_range_5109_, lean_object* v_b_5110_, lean_object* v_i_5111_, lean_object* v_hs_5112_, lean_object* v_hl_5113_){
_start:
{
lean_object* v___x_5114_; 
v___x_5114_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5108_, v_range_5109_, v_b_5110_, v_i_5111_);
return v___x_5114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5115_, lean_object* v_range_5116_, lean_object* v_b_5117_, lean_object* v_i_5118_, lean_object* v_hs_5119_, lean_object* v_hl_5120_){
_start:
{
lean_object* v_res_5121_; 
v_res_5121_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5115_, v_range_5116_, v_b_5117_, v_i_5118_, v_hs_5119_, v_hl_5120_);
lean_dec_ref(v_range_5116_);
lean_dec_ref(v_b_5115_);
return v_res_5121_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5122_, lean_object* v_headers_5123_, lean_object* v_x_5124_){
_start:
{
if (lean_obj_tag(v_x_5124_) == 0)
{
lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5134_; 
lean_dec_ref(v_headers_5123_);
v_a_5126_ = lean_ctor_get(v_x_5124_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v_x_5124_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5128_ = v_x_5124_;
v_isShared_5129_ = v_isSharedCheck_5134_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_dec(v_x_5124_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5134_;
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
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_a_5126_);
v___x_5131_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
lean_object* v___x_5132_; 
v___x_5132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5132_, 0, v___x_5131_);
return v___x_5132_;
}
}
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5145_; 
v_a_5135_ = lean_ctor_get(v_x_5124_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v_x_5124_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5137_ = v_x_5124_;
v_isShared_5138_ = v_isSharedCheck_5145_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v_x_5124_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5145_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5142_; 
v___x_5139_ = lean_box(0);
v___x_5140_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5140_, 0, v_headers_5123_);
lean_ctor_set(v___x_5140_, 1, v_a_5135_);
lean_ctor_set(v___x_5140_, 2, v___x_5139_);
lean_ctor_set_uint16(v___x_5140_, sizeof(void*)*3, v___y_5122_);
if (v_isShared_5138_ == 0)
{
lean_ctor_set(v___x_5137_, 0, v___x_5140_);
v___x_5142_ = v___x_5137_;
goto v_reusejp_5141_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v___x_5140_);
v___x_5142_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5141_;
}
v_reusejp_5141_:
{
lean_object* v___x_5143_; 
v___x_5143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5143_, 0, v___x_5142_);
return v___x_5143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5146_, lean_object* v_headers_5147_, lean_object* v_x_5148_, lean_object* v___y_5149_){
_start:
{
uint16_t v___y_2853__boxed_5150_; lean_object* v_res_5151_; 
v___y_2853__boxed_5150_ = lean_unbox(v___y_5146_);
v_res_5151_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5150_, v_headers_5147_, v_x_5148_);
return v_res_5151_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5152_, lean_object* v___f_5153_, lean_object* v_x_5154_){
_start:
{
if (lean_obj_tag(v_x_5154_) == 0)
{
lean_object* v_a_5156_; lean_object* v___x_5158_; uint8_t v_isShared_5159_; uint8_t v_isSharedCheck_5164_; 
lean_dec_ref(v___f_5153_);
lean_dec(v_a_5152_);
v_a_5156_ = lean_ctor_get(v_x_5154_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v_x_5154_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5158_ = v_x_5154_;
v_isShared_5159_ = v_isSharedCheck_5164_;
goto v_resetjp_5157_;
}
else
{
lean_inc(v_a_5156_);
lean_dec(v_x_5154_);
v___x_5158_ = lean_box(0);
v_isShared_5159_ = v_isSharedCheck_5164_;
goto v_resetjp_5157_;
}
v_resetjp_5157_:
{
lean_object* v___x_5161_; 
if (v_isShared_5159_ == 0)
{
v___x_5161_ = v___x_5158_;
goto v_reusejp_5160_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_a_5156_);
v___x_5161_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5160_;
}
v_reusejp_5160_:
{
lean_object* v___x_5162_; 
v___x_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5162_, 0, v___x_5161_);
return v___x_5162_;
}
}
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5189_; 
v_a_5165_ = lean_ctor_get(v_x_5154_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v_x_5154_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5167_ = v_x_5154_;
v_isShared_5168_ = v_isSharedCheck_5189_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v_x_5154_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5189_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; uint8_t v___x_5175_; lean_object* v_val_5177_; lean_object* v___x_5180_; 
v___x_5169_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5170_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5170_, 0, v_a_5152_);
lean_ctor_set(v___x_5170_, 1, v___x_5169_);
v___x_5171_ = lean_unsigned_to_nat(1u);
v___x_5172_ = lean_mk_empty_array_with_capacity(v___x_5171_);
v___x_5173_ = lean_array_push(v___x_5172_, v___x_5170_);
v___x_5174_ = lean_unsigned_to_nat(0u);
v___x_5175_ = 0;
v___x_5180_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5165_, v___x_5173_);
if (lean_obj_tag(v___x_5180_) == 0)
{
lean_object* v_a_5181_; lean_object* v___x_5183_; 
v_a_5181_ = lean_ctor_get(v___x_5180_, 0);
lean_inc(v_a_5181_);
lean_dec_ref_known(v___x_5180_, 1);
if (v_isShared_5168_ == 0)
{
lean_ctor_set(v___x_5167_, 0, v_a_5181_);
v___x_5183_ = v___x_5167_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5184_; 
v_reuseFailAlloc_5184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5184_, 0, v_a_5181_);
v___x_5183_ = v_reuseFailAlloc_5184_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
v_val_5177_ = v___x_5183_;
goto v___jp_5176_;
}
}
else
{
lean_object* v_a_5185_; lean_object* v___x_5187_; 
v_a_5185_ = lean_ctor_get(v___x_5180_, 0);
lean_inc(v_a_5185_);
lean_dec_ref_known(v___x_5180_, 1);
if (v_isShared_5168_ == 0)
{
lean_ctor_set_tag(v___x_5167_, 0);
lean_ctor_set(v___x_5167_, 0, v_a_5185_);
v___x_5187_ = v___x_5167_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5185_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
v_val_5177_ = v___x_5187_;
goto v___jp_5176_;
}
}
v___jp_5176_:
{
lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5178_, 0, v_val_5177_);
v___x_5179_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5174_, v___x_5175_, v___x_5178_, v___f_5153_);
return v___x_5179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5190_, lean_object* v___f_5191_, lean_object* v_x_5192_, lean_object* v___y_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5190_, v___f_5191_, v_x_5192_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5195_, lean_object* v_a_5196_, lean_object* v_x_5197_){
_start:
{
if (lean_obj_tag(v_x_5197_) == 0)
{
lean_object* v_a_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5207_; 
lean_dec(v_a_5196_);
lean_dec_ref(v___f_5195_);
v_a_5199_ = lean_ctor_get(v_x_5197_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_x_5197_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5201_ = v_x_5197_;
v_isShared_5202_ = v_isSharedCheck_5207_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_a_5199_);
lean_dec(v_x_5197_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5207_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5204_; 
if (v_isShared_5202_ == 0)
{
v___x_5204_ = v___x_5201_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5199_);
v___x_5204_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
lean_object* v___x_5205_; 
v___x_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5205_, 0, v___x_5204_);
return v___x_5205_;
}
}
}
else
{
lean_object* v_a_5208_; lean_object* v___x_5210_; uint8_t v_isShared_5211_; uint8_t v_isSharedCheck_5229_; 
v_a_5208_ = lean_ctor_get(v_x_5197_, 0);
v_isSharedCheck_5229_ = !lean_is_exclusive(v_x_5197_);
if (v_isSharedCheck_5229_ == 0)
{
v___x_5210_ = v_x_5197_;
v_isShared_5211_ = v_isSharedCheck_5229_;
goto v_resetjp_5209_;
}
else
{
lean_inc(v_a_5208_);
lean_dec(v_x_5197_);
v___x_5210_ = lean_box(0);
v_isShared_5211_ = v_isSharedCheck_5229_;
goto v_resetjp_5209_;
}
v_resetjp_5209_:
{
lean_object* v___f_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; lean_object* v_val_5217_; lean_object* v___x_5220_; 
v___f_5212_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5212_, 0, v_a_5208_);
lean_closure_set(v___f_5212_, 1, v___f_5195_);
v___x_5213_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5214_ = lean_unsigned_to_nat(0u);
v___x_5215_ = 0;
v___x_5220_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5196_, v___x_5213_);
if (lean_obj_tag(v___x_5220_) == 0)
{
lean_object* v_a_5221_; lean_object* v___x_5223_; 
v_a_5221_ = lean_ctor_get(v___x_5220_, 0);
lean_inc(v_a_5221_);
lean_dec_ref_known(v___x_5220_, 1);
if (v_isShared_5211_ == 0)
{
lean_ctor_set(v___x_5210_, 0, v_a_5221_);
v___x_5223_ = v___x_5210_;
goto v_reusejp_5222_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v_a_5221_);
v___x_5223_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5222_;
}
v_reusejp_5222_:
{
v_val_5217_ = v___x_5223_;
goto v___jp_5216_;
}
}
else
{
lean_object* v_a_5225_; lean_object* v___x_5227_; 
v_a_5225_ = lean_ctor_get(v___x_5220_, 0);
lean_inc(v_a_5225_);
lean_dec_ref_known(v___x_5220_, 1);
if (v_isShared_5211_ == 0)
{
lean_ctor_set_tag(v___x_5210_, 0);
lean_ctor_set(v___x_5210_, 0, v_a_5225_);
v___x_5227_ = v___x_5210_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v_a_5225_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
v_val_5217_ = v___x_5227_;
goto v___jp_5216_;
}
}
v___jp_5216_:
{
lean_object* v___x_5218_; lean_object* v___x_5219_; 
v___x_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5218_, 0, v_val_5217_);
v___x_5219_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5214_, v___x_5215_, v___x_5218_, v___f_5212_);
return v___x_5219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5230_, lean_object* v_a_5231_, lean_object* v_x_5232_, lean_object* v___y_5233_){
_start:
{
lean_object* v_res_5234_; 
v_res_5234_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5230_, v_a_5231_, v_x_5232_);
return v_res_5234_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5235_, lean_object* v_a_5236_, lean_object* v_a_5237_, lean_object* v_headers_5238_){
_start:
{
lean_object* v___x_5240_; lean_object* v___f_5241_; lean_object* v___f_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; uint8_t v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; 
v___x_5240_ = lean_box(v___y_5235_);
v___f_5241_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5241_, 0, v___x_5240_);
lean_closure_set(v___f_5241_, 1, v_headers_5238_);
v___f_5242_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5242_, 0, v___f_5241_);
lean_closure_set(v___f_5242_, 1, v_a_5236_);
v___x_5243_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5244_ = lean_unsigned_to_nat(0u);
v___x_5245_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5246_ = 0;
v___x_5247_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5237_, v___x_5243_, v___x_5245_);
v___x_5248_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5244_, v___x_5246_, v___x_5247_, v___f_5242_);
return v___x_5248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5249_, lean_object* v_a_5250_, lean_object* v_a_5251_, lean_object* v_headers_5252_, lean_object* v___y_5253_){
_start:
{
uint16_t v___y_3061__boxed_5254_; lean_object* v_res_5255_; 
v___y_3061__boxed_5254_ = lean_unbox(v___y_5249_);
v_res_5255_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5254_, v_a_5250_, v_a_5251_, v_headers_5252_);
return v_res_5255_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5256_, lean_object* v_x_5257_){
_start:
{
if (lean_obj_tag(v_x_5257_) == 0)
{
lean_object* v_a_5259_; lean_object* v___x_5261_; uint8_t v_isShared_5262_; uint8_t v_isSharedCheck_5267_; 
lean_dec_ref(v___f_5256_);
v_a_5259_ = lean_ctor_get(v_x_5257_, 0);
v_isSharedCheck_5267_ = !lean_is_exclusive(v_x_5257_);
if (v_isSharedCheck_5267_ == 0)
{
v___x_5261_ = v_x_5257_;
v_isShared_5262_ = v_isSharedCheck_5267_;
goto v_resetjp_5260_;
}
else
{
lean_inc(v_a_5259_);
lean_dec(v_x_5257_);
v___x_5261_ = lean_box(0);
v_isShared_5262_ = v_isSharedCheck_5267_;
goto v_resetjp_5260_;
}
v_resetjp_5260_:
{
lean_object* v___x_5264_; 
if (v_isShared_5262_ == 0)
{
v___x_5264_ = v___x_5261_;
goto v_reusejp_5263_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v_a_5259_);
v___x_5264_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5263_;
}
v_reusejp_5263_:
{
lean_object* v___x_5265_; 
v___x_5265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5265_, 0, v___x_5264_);
return v___x_5265_;
}
}
}
else
{
lean_object* v_a_5268_; lean_object* v___x_5269_; 
v_a_5268_ = lean_ctor_get(v_x_5257_, 0);
lean_inc(v_a_5268_);
lean_dec_ref_known(v_x_5257_, 1);
v___x_5269_ = lean_apply_2(v___f_5256_, v_a_5268_, lean_box(0));
return v___x_5269_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5270_, lean_object* v_x_5271_, lean_object* v___y_5272_){
_start:
{
lean_object* v_res_5273_; 
v_res_5273_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5270_, v_x_5271_);
return v_res_5273_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5274_, lean_object* v___f_5275_, lean_object* v_x_5276_){
_start:
{
if (lean_obj_tag(v_x_5276_) == 0)
{
lean_object* v_a_5278_; lean_object* v___x_5280_; uint8_t v_isShared_5281_; uint8_t v_isSharedCheck_5286_; 
lean_dec_ref(v___f_5275_);
lean_dec(v_value_5274_);
v_a_5278_ = lean_ctor_get(v_x_5276_, 0);
v_isSharedCheck_5286_ = !lean_is_exclusive(v_x_5276_);
if (v_isSharedCheck_5286_ == 0)
{
v___x_5280_ = v_x_5276_;
v_isShared_5281_ = v_isSharedCheck_5286_;
goto v_resetjp_5279_;
}
else
{
lean_inc(v_a_5278_);
lean_dec(v_x_5276_);
v___x_5280_ = lean_box(0);
v_isShared_5281_ = v_isSharedCheck_5286_;
goto v_resetjp_5279_;
}
v_resetjp_5279_:
{
lean_object* v___x_5283_; 
if (v_isShared_5281_ == 0)
{
v___x_5283_ = v___x_5280_;
goto v_reusejp_5282_;
}
else
{
lean_object* v_reuseFailAlloc_5285_; 
v_reuseFailAlloc_5285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5285_, 0, v_a_5278_);
v___x_5283_ = v_reuseFailAlloc_5285_;
goto v_reusejp_5282_;
}
v_reusejp_5282_:
{
lean_object* v___x_5284_; 
v___x_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5283_);
return v___x_5284_;
}
}
}
else
{
lean_object* v_a_5287_; lean_object* v___x_5289_; uint8_t v_isShared_5290_; uint8_t v_isSharedCheck_5312_; 
v_a_5287_ = lean_ctor_get(v_x_5276_, 0);
v_isSharedCheck_5312_ = !lean_is_exclusive(v_x_5276_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5289_ = v_x_5276_;
v_isShared_5290_ = v_isSharedCheck_5312_;
goto v_resetjp_5288_;
}
else
{
lean_inc(v_a_5287_);
lean_dec(v_x_5276_);
v___x_5289_ = lean_box(0);
v_isShared_5290_ = v_isSharedCheck_5312_;
goto v_resetjp_5288_;
}
v_resetjp_5288_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; uint8_t v___x_5298_; lean_object* v_val_5300_; lean_object* v___x_5303_; 
v___x_5291_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5292_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5293_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5293_, 0, v_value_5274_);
lean_ctor_set(v___x_5293_, 1, v___x_5292_);
v___x_5294_ = lean_unsigned_to_nat(1u);
v___x_5295_ = lean_mk_empty_array_with_capacity(v___x_5294_);
v___x_5296_ = lean_array_push(v___x_5295_, v___x_5293_);
v___x_5297_ = lean_unsigned_to_nat(0u);
v___x_5298_ = 0;
v___x_5303_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5287_, v___x_5291_, v___x_5296_);
if (lean_obj_tag(v___x_5303_) == 0)
{
lean_object* v_a_5304_; lean_object* v___x_5306_; 
v_a_5304_ = lean_ctor_get(v___x_5303_, 0);
lean_inc(v_a_5304_);
lean_dec_ref_known(v___x_5303_, 1);
if (v_isShared_5290_ == 0)
{
lean_ctor_set(v___x_5289_, 0, v_a_5304_);
v___x_5306_ = v___x_5289_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5307_; 
v_reuseFailAlloc_5307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5307_, 0, v_a_5304_);
v___x_5306_ = v_reuseFailAlloc_5307_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
v_val_5300_ = v___x_5306_;
goto v___jp_5299_;
}
}
else
{
lean_object* v_a_5308_; lean_object* v___x_5310_; 
v_a_5308_ = lean_ctor_get(v___x_5303_, 0);
lean_inc(v_a_5308_);
lean_dec_ref_known(v___x_5303_, 1);
if (v_isShared_5290_ == 0)
{
lean_ctor_set_tag(v___x_5289_, 0);
lean_ctor_set(v___x_5289_, 0, v_a_5308_);
v___x_5310_ = v___x_5289_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v_a_5308_);
v___x_5310_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
v_val_5300_ = v___x_5310_;
goto v___jp_5299_;
}
}
v___jp_5299_:
{
lean_object* v___x_5301_; lean_object* v___x_5302_; 
v___x_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5301_, 0, v_val_5300_);
v___x_5302_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5297_, v___x_5298_, v___x_5301_, v___f_5275_);
return v___x_5302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5313_, lean_object* v___f_5314_, lean_object* v_x_5315_, lean_object* v___y_5316_){
_start:
{
lean_object* v_res_5317_; 
v_res_5317_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5313_, v___f_5314_, v_x_5315_);
return v_res_5317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v___x_5324_, lean_object* v___x_5325_, lean_object* v_x_5326_){
_start:
{
uint8_t v___y_5329_; lean_object* v___y_5330_; lean_object* v___y_5331_; lean_object* v_val_5332_; 
if (lean_obj_tag(v_x_5326_) == 0)
{
lean_object* v_a_5335_; lean_object* v___x_5337_; uint8_t v_isShared_5338_; uint8_t v_isSharedCheck_5343_; 
lean_dec(v_a_5323_);
lean_dec(v_a_5322_);
v_a_5335_ = lean_ctor_get(v_x_5326_, 0);
v_isSharedCheck_5343_ = !lean_is_exclusive(v_x_5326_);
if (v_isSharedCheck_5343_ == 0)
{
v___x_5337_ = v_x_5326_;
v_isShared_5338_ = v_isSharedCheck_5343_;
goto v_resetjp_5336_;
}
else
{
lean_inc(v_a_5335_);
lean_dec(v_x_5326_);
v___x_5337_ = lean_box(0);
v_isShared_5338_ = v_isSharedCheck_5343_;
goto v_resetjp_5336_;
}
v_resetjp_5336_:
{
lean_object* v___x_5340_; 
if (v_isShared_5338_ == 0)
{
v___x_5340_ = v___x_5337_;
goto v_reusejp_5339_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v_a_5335_);
v___x_5340_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5339_;
}
v_reusejp_5339_:
{
lean_object* v___x_5341_; 
v___x_5341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5341_, 0, v___x_5340_);
return v___x_5341_;
}
}
}
else
{
lean_object* v_a_5344_; lean_object* v___x_5346_; uint8_t v_isShared_5347_; uint8_t v_isSharedCheck_5377_; 
v_a_5344_ = lean_ctor_get(v_x_5326_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v_x_5326_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5346_ = v_x_5326_;
v_isShared_5347_ = v_isSharedCheck_5377_;
goto v_resetjp_5345_;
}
else
{
lean_inc(v_a_5344_);
lean_dec(v_x_5326_);
v___x_5346_ = lean_box(0);
v_isShared_5347_ = v_isSharedCheck_5377_;
goto v_resetjp_5345_;
}
v_resetjp_5345_:
{
uint16_t v___y_5349_; lean_object* v___x_5373_; 
v___x_5373_ = l_Lasm_JS_Data_field(v_a_5344_, v___x_5325_);
if (lean_obj_tag(v___x_5373_) == 3)
{
double v_n_5374_; uint16_t v___x_5375_; 
v_n_5374_ = lean_ctor_get_float(v___x_5373_, 0);
lean_dec_ref_known(v___x_5373_, 0);
v___x_5375_ = lean_float_to_uint16(v_n_5374_);
v___y_5349_ = v___x_5375_;
goto v___jp_5348_;
}
else
{
uint16_t v___x_5376_; 
lean_dec(v___x_5373_);
v___x_5376_ = 0;
v___y_5349_ = v___x_5376_;
goto v___jp_5348_;
}
v___jp_5348_:
{
lean_object* v___x_5350_; lean_object* v___f_5351_; lean_object* v___x_5352_; 
v___x_5350_ = lean_box(v___y_5349_);
lean_inc(v_a_5322_);
v___f_5351_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5351_, 0, v___x_5350_);
lean_closure_set(v___f_5351_, 1, v_a_5322_);
lean_closure_set(v___f_5351_, 2, v_a_5323_);
v___x_5352_ = l_Lasm_JS_Data_field(v_a_5344_, v___x_5324_);
lean_dec(v_a_5344_);
if (lean_obj_tag(v___x_5352_) == 9)
{
lean_object* v_value_5353_; lean_object* v___f_5354_; lean_object* v___f_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; uint8_t v___x_5358_; lean_object* v___x_5359_; 
v_value_5353_ = lean_ctor_get(v___x_5352_, 0);
lean_inc(v_value_5353_);
lean_dec_ref_known(v___x_5352_, 2);
v___f_5354_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5354_, 0, v___f_5351_);
v___f_5355_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5355_, 0, v_value_5353_);
lean_closure_set(v___f_5355_, 1, v___f_5354_);
v___x_5356_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5357_ = lean_unsigned_to_nat(0u);
v___x_5358_ = 0;
v___x_5359_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5322_, v___x_5356_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; lean_object* v___x_5362_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
lean_dec_ref_known(v___x_5359_, 1);
if (v_isShared_5347_ == 0)
{
lean_ctor_set(v___x_5346_, 0, v_a_5360_);
v___x_5362_ = v___x_5346_;
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
v___y_5329_ = v___x_5358_;
v___y_5330_ = v___x_5357_;
v___y_5331_ = v___f_5355_;
v_val_5332_ = v___x_5362_;
goto v___jp_5328_;
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; 
v_a_5364_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5359_, 1);
if (v_isShared_5347_ == 0)
{
lean_ctor_set_tag(v___x_5346_, 0);
lean_ctor_set(v___x_5346_, 0, v_a_5364_);
v___x_5366_ = v___x_5346_;
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
v___y_5329_ = v___x_5358_;
v___y_5330_ = v___x_5357_;
v___y_5331_ = v___f_5355_;
v_val_5332_ = v___x_5366_;
goto v___jp_5328_;
}
}
}
else
{
lean_object* v___f_5368_; lean_object* v___x_5369_; uint8_t v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; 
lean_dec(v___x_5352_);
lean_del_object(v___x_5346_);
lean_dec(v_a_5322_);
v___f_5368_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5368_, 0, v___f_5351_);
v___x_5369_ = lean_unsigned_to_nat(0u);
v___x_5370_ = 0;
v___x_5371_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5369_, v___x_5370_, v___x_5371_, v___f_5368_);
return v___x_5372_;
}
}
}
}
v___jp_5328_:
{
lean_object* v___x_5333_; lean_object* v___x_5334_; 
v___x_5333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5333_, 0, v_val_5332_);
v___x_5334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5330_, v___y_5329_, v___x_5333_, v___y_5331_);
return v___x_5334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5378_, lean_object* v_a_5379_, lean_object* v___x_5380_, lean_object* v___x_5381_, lean_object* v_x_5382_, lean_object* v___y_5383_){
_start:
{
lean_object* v_res_5384_; 
v_res_5384_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5378_, v_a_5379_, v___x_5380_, v___x_5381_, v_x_5382_);
lean_dec_ref(v___x_5381_);
lean_dec_ref(v___x_5380_);
return v_res_5384_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; 
v___x_5385_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5386_ = lean_unsigned_to_nat(2u);
v___x_5387_ = lean_mk_empty_array_with_capacity(v___x_5386_);
v___x_5388_ = lean_array_push(v___x_5387_, v___x_5385_);
return v___x_5388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5389_, lean_object* v___x_5390_, lean_object* v_x_5391_){
_start:
{
if (lean_obj_tag(v_x_5391_) == 0)
{
lean_object* v_a_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5401_; 
lean_dec_ref(v___x_5390_);
lean_dec(v_a_5389_);
v_a_5393_ = lean_ctor_get(v_x_5391_, 0);
v_isSharedCheck_5401_ = !lean_is_exclusive(v_x_5391_);
if (v_isSharedCheck_5401_ == 0)
{
v___x_5395_ = v_x_5391_;
v_isShared_5396_ = v_isSharedCheck_5401_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_a_5393_);
lean_dec(v_x_5391_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5401_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5398_; 
if (v_isShared_5396_ == 0)
{
v___x_5398_ = v___x_5395_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v_a_5393_);
v___x_5398_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
lean_object* v___x_5399_; 
v___x_5399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5399_, 0, v___x_5398_);
return v___x_5399_;
}
}
}
else
{
lean_object* v_a_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5425_; 
v_a_5402_ = lean_ctor_get(v_x_5391_, 0);
v_isSharedCheck_5425_ = !lean_is_exclusive(v_x_5391_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5404_ = v_x_5391_;
v_isShared_5405_ = v_isSharedCheck_5425_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_a_5402_);
lean_dec(v_x_5391_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5425_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v___x_5406_; lean_object* v___f_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; uint8_t v___x_5411_; lean_object* v_val_5413_; lean_object* v___x_5416_; 
v___x_5406_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5390_);
lean_inc(v_a_5402_);
v___f_5407_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5407_, 0, v_a_5389_);
lean_closure_set(v___f_5407_, 1, v_a_5402_);
lean_closure_set(v___f_5407_, 2, v___x_5390_);
lean_closure_set(v___f_5407_, 3, v___x_5406_);
v___x_5408_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5409_ = lean_array_push(v___x_5408_, v___x_5390_);
v___x_5410_ = lean_unsigned_to_nat(0u);
v___x_5411_ = 0;
v___x_5416_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5402_, v___x_5409_);
if (lean_obj_tag(v___x_5416_) == 0)
{
lean_object* v_a_5417_; lean_object* v___x_5419_; 
v_a_5417_ = lean_ctor_get(v___x_5416_, 0);
lean_inc(v_a_5417_);
lean_dec_ref_known(v___x_5416_, 1);
if (v_isShared_5405_ == 0)
{
lean_ctor_set(v___x_5404_, 0, v_a_5417_);
v___x_5419_ = v___x_5404_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v_a_5417_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
v_val_5413_ = v___x_5419_;
goto v___jp_5412_;
}
}
else
{
lean_object* v_a_5421_; lean_object* v___x_5423_; 
v_a_5421_ = lean_ctor_get(v___x_5416_, 0);
lean_inc(v_a_5421_);
lean_dec_ref_known(v___x_5416_, 1);
if (v_isShared_5405_ == 0)
{
lean_ctor_set_tag(v___x_5404_, 0);
lean_ctor_set(v___x_5404_, 0, v_a_5421_);
v___x_5423_ = v___x_5404_;
goto v_reusejp_5422_;
}
else
{
lean_object* v_reuseFailAlloc_5424_; 
v_reuseFailAlloc_5424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5424_, 0, v_a_5421_);
v___x_5423_ = v_reuseFailAlloc_5424_;
goto v_reusejp_5422_;
}
v_reusejp_5422_:
{
v_val_5413_ = v___x_5423_;
goto v___jp_5412_;
}
}
v___jp_5412_:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; 
v___x_5414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5414_, 0, v_val_5413_);
v___x_5415_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5410_, v___x_5411_, v___x_5414_, v___f_5407_);
return v___x_5415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5426_, lean_object* v___x_5427_, lean_object* v_x_5428_, lean_object* v___y_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5426_, v___x_5427_, v_x_5428_);
return v_res_5430_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5432_; uint8_t v___x_5433_; uint64_t v___x_5434_; 
v___x_5432_ = 0ULL;
v___x_5433_ = 0;
v___x_5434_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5433_, v___x_5432_);
return v___x_5434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5435_, lean_object* v_args_5436_, lean_object* v_this_5437_){
_start:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; uint32_t v___x_5442_; uint64_t v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5439_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5440_, 0, v_f_5435_);
lean_ctor_set(v___x_5440_, 1, v___x_5439_);
v___x_5441_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5442_ = 205;
v___x_5443_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5444_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5444_, 0, v_args_5436_);
v___x_5445_ = lean_unsigned_to_nat(3u);
v___x_5446_ = lean_mk_empty_array_with_capacity(v___x_5445_);
v___x_5447_ = lean_array_push(v___x_5446_, v___x_5440_);
v___x_5448_ = lean_array_push(v___x_5447_, v_this_5437_);
v___x_5449_ = lean_array_push(v___x_5448_, v___x_5444_);
v___x_5450_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5450_, 0, v___x_5449_);
v___x_5451_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5441_, v___x_5442_, v___x_5443_, v___x_5450_, v___x_5439_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5452_, lean_object* v_args_5453_, lean_object* v_this_5454_, lean_object* v___y_5455_){
_start:
{
lean_object* v_res_5456_; 
v_res_5456_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5452_, v_args_5453_, v_this_5454_);
return v_res_5456_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5467_, lean_object* v_a_5468_, lean_object* v_x_5469_){
_start:
{
if (lean_obj_tag(v_x_5469_) == 0)
{
lean_object* v_a_5471_; lean_object* v___x_5473_; uint8_t v_isShared_5474_; uint8_t v_isSharedCheck_5479_; 
lean_dec(v_a_5468_);
lean_dec_ref(v_req_5467_);
v_a_5471_ = lean_ctor_get(v_x_5469_, 0);
v_isSharedCheck_5479_ = !lean_is_exclusive(v_x_5469_);
if (v_isSharedCheck_5479_ == 0)
{
v___x_5473_ = v_x_5469_;
v_isShared_5474_ = v_isSharedCheck_5479_;
goto v_resetjp_5472_;
}
else
{
lean_inc(v_a_5471_);
lean_dec(v_x_5469_);
v___x_5473_ = lean_box(0);
v_isShared_5474_ = v_isSharedCheck_5479_;
goto v_resetjp_5472_;
}
v_resetjp_5472_:
{
lean_object* v___x_5476_; 
if (v_isShared_5474_ == 0)
{
v___x_5476_ = v___x_5473_;
goto v_reusejp_5475_;
}
else
{
lean_object* v_reuseFailAlloc_5478_; 
v_reuseFailAlloc_5478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5478_, 0, v_a_5471_);
v___x_5476_ = v_reuseFailAlloc_5478_;
goto v_reusejp_5475_;
}
v_reusejp_5475_:
{
lean_object* v___x_5477_; 
v___x_5477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5477_, 0, v___x_5476_);
return v___x_5477_;
}
}
}
else
{
lean_object* v_a_5480_; lean_object* v_method_5481_; lean_object* v_url_5482_; lean_object* v_headers_5483_; lean_object* v_body_5484_; lean_object* v___y_5486_; lean_object* v___x_5516_; uint8_t v___x_5517_; 
v_a_5480_ = lean_ctor_get(v_x_5469_, 0);
lean_inc(v_a_5480_);
lean_dec_ref_known(v_x_5469_, 1);
v_method_5481_ = lean_ctor_get(v_req_5467_, 0);
lean_inc_ref(v_method_5481_);
v_url_5482_ = lean_ctor_get(v_req_5467_, 1);
lean_inc_ref(v_url_5482_);
v_headers_5483_ = lean_ctor_get(v_req_5467_, 2);
lean_inc_ref(v_headers_5483_);
v_body_5484_ = lean_ctor_get(v_req_5467_, 3);
lean_inc_ref(v_body_5484_);
lean_dec_ref(v_req_5467_);
v___x_5516_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5517_ = lean_string_dec_eq(v_method_5481_, v___x_5516_);
if (v___x_5517_ == 0)
{
lean_object* v___x_5518_; uint8_t v___x_5519_; 
v___x_5518_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5519_ = lean_string_dec_eq(v_method_5481_, v___x_5518_);
if (v___x_5519_ == 0)
{
lean_object* v___x_5520_; 
v___x_5520_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5520_, 0, v_body_5484_);
v___y_5486_ = v___x_5520_;
goto v___jp_5485_;
}
else
{
lean_dec_ref(v_body_5484_);
goto v___jp_5514_;
}
}
else
{
lean_dec_ref(v_body_5484_);
goto v___jp_5514_;
}
v___jp_5485_:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___f_5491_; size_t v_sz_5492_; size_t v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; uint8_t v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5487_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5488_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5488_, 0, v_method_5481_);
v___x_5489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5489_, 0, v___x_5487_);
lean_ctor_set(v___x_5489_, 1, v___x_5488_);
v___x_5490_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5491_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5491_, 0, v_a_5468_);
lean_closure_set(v___f_5491_, 1, v___x_5490_);
v_sz_5492_ = lean_array_size(v_headers_5483_);
v___x_5493_ = ((size_t)0ULL);
v___x_5494_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5492_, v___x_5493_, v_headers_5483_);
v___x_5495_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5495_, 0, v___x_5494_);
v___x_5496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5496_, 0, v___x_5490_);
lean_ctor_set(v___x_5496_, 1, v___x_5495_);
v___x_5497_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5497_);
lean_ctor_set(v___x_5498_, 1, v___y_5486_);
v___x_5499_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5500_, 0, v___x_5498_);
lean_ctor_set(v___x_5500_, 1, v___x_5499_);
v___x_5501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5501_, 0, v___x_5496_);
lean_ctor_set(v___x_5501_, 1, v___x_5500_);
v___x_5502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5502_, 0, v___x_5489_);
lean_ctor_set(v___x_5502_, 1, v___x_5501_);
v___x_5503_ = l_Lasm_JS_obj(v___x_5502_);
v___x_5504_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5504_, 0, v_url_5482_);
v___x_5505_ = lean_unsigned_to_nat(2u);
v___x_5506_ = lean_mk_empty_array_with_capacity(v___x_5505_);
v___x_5507_ = lean_array_push(v___x_5506_, v___x_5504_);
v___x_5508_ = lean_array_push(v___x_5507_, v___x_5503_);
v___x_5509_ = lean_box(0);
v___x_5510_ = lean_unsigned_to_nat(0u);
v___x_5511_ = 0;
v___x_5512_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5480_, v___x_5508_, v___x_5509_);
v___x_5513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5510_, v___x_5511_, v___x_5512_, v___f_5491_);
return v___x_5513_;
}
v___jp_5514_:
{
lean_object* v___x_5515_; 
v___x_5515_ = lean_box(0);
v___y_5486_ = v___x_5515_;
goto v___jp_5485_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5521_, lean_object* v_a_5522_, lean_object* v_x_5523_, lean_object* v___y_5524_){
_start:
{
lean_object* v_res_5525_; 
v_res_5525_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5521_, v_a_5522_, v_x_5523_);
return v_res_5525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5527_, lean_object* v_x_5528_){
_start:
{
if (lean_obj_tag(v_x_5528_) == 0)
{
lean_object* v_a_5530_; lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5538_; 
lean_dec_ref(v_req_5527_);
v_a_5530_ = lean_ctor_get(v_x_5528_, 0);
v_isSharedCheck_5538_ = !lean_is_exclusive(v_x_5528_);
if (v_isSharedCheck_5538_ == 0)
{
v___x_5532_ = v_x_5528_;
v_isShared_5533_ = v_isSharedCheck_5538_;
goto v_resetjp_5531_;
}
else
{
lean_inc(v_a_5530_);
lean_dec(v_x_5528_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5538_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v___x_5535_; 
if (v_isShared_5533_ == 0)
{
v___x_5535_ = v___x_5532_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5530_);
v___x_5535_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
lean_object* v___x_5536_; 
v___x_5536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5536_, 0, v___x_5535_);
return v___x_5536_;
}
}
}
else
{
lean_object* v_a_5539_; lean_object* v___x_5541_; uint8_t v_isShared_5542_; uint8_t v_isSharedCheck_5560_; 
v_a_5539_ = lean_ctor_get(v_x_5528_, 0);
v_isSharedCheck_5560_ = !lean_is_exclusive(v_x_5528_);
if (v_isSharedCheck_5560_ == 0)
{
v___x_5541_ = v_x_5528_;
v_isShared_5542_ = v_isSharedCheck_5560_;
goto v_resetjp_5540_;
}
else
{
lean_inc(v_a_5539_);
lean_dec(v_x_5528_);
v___x_5541_ = lean_box(0);
v_isShared_5542_ = v_isSharedCheck_5560_;
goto v_resetjp_5540_;
}
v_resetjp_5540_:
{
lean_object* v___f_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; uint8_t v___x_5546_; lean_object* v_val_5548_; lean_object* v___x_5551_; 
lean_inc(v_a_5539_);
v___f_5543_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5543_, 0, v_req_5527_);
lean_closure_set(v___f_5543_, 1, v_a_5539_);
v___x_5544_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5545_ = lean_unsigned_to_nat(0u);
v___x_5546_ = 0;
v___x_5551_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5539_, v___x_5544_);
if (lean_obj_tag(v___x_5551_) == 0)
{
lean_object* v_a_5552_; lean_object* v___x_5554_; 
v_a_5552_ = lean_ctor_get(v___x_5551_, 0);
lean_inc(v_a_5552_);
lean_dec_ref_known(v___x_5551_, 1);
if (v_isShared_5542_ == 0)
{
lean_ctor_set(v___x_5541_, 0, v_a_5552_);
v___x_5554_ = v___x_5541_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5555_; 
v_reuseFailAlloc_5555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5555_, 0, v_a_5552_);
v___x_5554_ = v_reuseFailAlloc_5555_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
v_val_5548_ = v___x_5554_;
goto v___jp_5547_;
}
}
else
{
lean_object* v_a_5556_; lean_object* v___x_5558_; 
v_a_5556_ = lean_ctor_get(v___x_5551_, 0);
lean_inc(v_a_5556_);
lean_dec_ref_known(v___x_5551_, 1);
if (v_isShared_5542_ == 0)
{
lean_ctor_set_tag(v___x_5541_, 0);
lean_ctor_set(v___x_5541_, 0, v_a_5556_);
v___x_5558_ = v___x_5541_;
goto v_reusejp_5557_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v_a_5556_);
v___x_5558_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5557_;
}
v_reusejp_5557_:
{
v_val_5548_ = v___x_5558_;
goto v___jp_5547_;
}
}
v___jp_5547_:
{
lean_object* v___x_5549_; lean_object* v___x_5550_; 
v___x_5549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5549_, 0, v_val_5548_);
v___x_5550_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5545_, v___x_5546_, v___x_5549_, v___f_5543_);
return v___x_5550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5561_, lean_object* v_x_5562_, lean_object* v___y_5563_){
_start:
{
lean_object* v_res_5564_; 
v_res_5564_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5561_, v_x_5562_);
return v_res_5564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5565_){
_start:
{
lean_object* v___f_5567_; lean_object* v___x_5568_; uint8_t v___x_5569_; lean_object* v_val_5571_; lean_object* v___x_5574_; 
v___f_5567_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5567_, 0, v_req_5565_);
v___x_5568_ = lean_unsigned_to_nat(0u);
v___x_5569_ = 0;
v___x_5574_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5574_) == 0)
{
lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
v_a_5575_ = lean_ctor_get(v___x_5574_, 0);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5574_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5574_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_dec(v___x_5574_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
lean_ctor_set_tag(v___x_5577_, 1);
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
v_val_5571_ = v___x_5580_;
goto v___jp_5570_;
}
}
}
else
{
lean_object* v_a_5583_; lean_object* v___x_5585_; uint8_t v_isShared_5586_; uint8_t v_isSharedCheck_5590_; 
v_a_5583_ = lean_ctor_get(v___x_5574_, 0);
v_isSharedCheck_5590_ = !lean_is_exclusive(v___x_5574_);
if (v_isSharedCheck_5590_ == 0)
{
v___x_5585_ = v___x_5574_;
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
else
{
lean_inc(v_a_5583_);
lean_dec(v___x_5574_);
v___x_5585_ = lean_box(0);
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
v_resetjp_5584_:
{
lean_object* v___x_5588_; 
if (v_isShared_5586_ == 0)
{
lean_ctor_set_tag(v___x_5585_, 0);
v___x_5588_ = v___x_5585_;
goto v_reusejp_5587_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v_a_5583_);
v___x_5588_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5587_;
}
v_reusejp_5587_:
{
v_val_5571_ = v___x_5588_;
goto v___jp_5570_;
}
}
}
v___jp_5570_:
{
lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5572_, 0, v_val_5571_);
v___x_5573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5568_, v___x_5569_, v___x_5572_, v___f_5567_);
return v___x_5573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5591_, lean_object* v_a_5592_){
_start:
{
lean_object* v_res_5593_; 
v_res_5593_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5591_);
return v_res_5593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5594_){
_start:
{
if (lean_obj_tag(v_x_5594_) == 0)
{
lean_object* v_a_5596_; lean_object* v___x_5598_; uint8_t v_isShared_5599_; uint8_t v_isSharedCheck_5604_; 
v_a_5596_ = lean_ctor_get(v_x_5594_, 0);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_x_5594_);
if (v_isSharedCheck_5604_ == 0)
{
v___x_5598_ = v_x_5594_;
v_isShared_5599_ = v_isSharedCheck_5604_;
goto v_resetjp_5597_;
}
else
{
lean_inc(v_a_5596_);
lean_dec(v_x_5594_);
v___x_5598_ = lean_box(0);
v_isShared_5599_ = v_isSharedCheck_5604_;
goto v_resetjp_5597_;
}
v_resetjp_5597_:
{
lean_object* v___x_5601_; 
if (v_isShared_5599_ == 0)
{
v___x_5601_ = v___x_5598_;
goto v_reusejp_5600_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_a_5596_);
v___x_5601_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5600_;
}
v_reusejp_5600_:
{
lean_object* v___x_5602_; 
v___x_5602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5602_, 0, v___x_5601_);
return v___x_5602_;
}
}
}
else
{
lean_object* v_a_5605_; lean_object* v___x_5606_; 
v_a_5605_ = lean_ctor_get(v_x_5594_, 0);
lean_inc(v_a_5605_);
lean_dec_ref_known(v_x_5594_, 1);
v___x_5606_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5605_);
lean_dec(v_a_5605_);
if (lean_obj_tag(v___x_5606_) == 0)
{
lean_object* v_a_5607_; lean_object* v___x_5609_; uint8_t v_isShared_5610_; uint8_t v_isSharedCheck_5616_; 
v_a_5607_ = lean_ctor_get(v___x_5606_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5606_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5609_ = v___x_5606_;
v_isShared_5610_ = v_isSharedCheck_5616_;
goto v_resetjp_5608_;
}
else
{
lean_inc(v_a_5607_);
lean_dec(v___x_5606_);
v___x_5609_ = lean_box(0);
v_isShared_5610_ = v_isSharedCheck_5616_;
goto v_resetjp_5608_;
}
v_resetjp_5608_:
{
lean_object* v___x_5611_; lean_object* v___x_5613_; 
v___x_5611_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5611_, 0, v_a_5607_);
if (v_isShared_5610_ == 0)
{
lean_ctor_set(v___x_5609_, 0, v___x_5611_);
v___x_5613_ = v___x_5609_;
goto v_reusejp_5612_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v___x_5611_);
v___x_5613_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5612_;
}
v_reusejp_5612_:
{
lean_object* v___x_5614_; 
v___x_5614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5614_, 0, v___x_5613_);
return v___x_5614_;
}
}
}
else
{
lean_object* v_a_5617_; lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5625_; 
v_a_5617_ = lean_ctor_get(v___x_5606_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v___x_5606_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5619_ = v___x_5606_;
v_isShared_5620_ = v_isSharedCheck_5625_;
goto v_resetjp_5618_;
}
else
{
lean_inc(v_a_5617_);
lean_dec(v___x_5606_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5625_;
goto v_resetjp_5618_;
}
v_resetjp_5618_:
{
lean_object* v___x_5622_; 
if (v_isShared_5620_ == 0)
{
v___x_5622_ = v___x_5619_;
goto v_reusejp_5621_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_a_5617_);
v___x_5622_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
lean_object* v___x_5623_; 
v___x_5623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5623_, 0, v___x_5622_);
return v___x_5623_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5626_, lean_object* v___y_5627_){
_start:
{
lean_object* v_res_5628_; 
v_res_5628_ = l_Lasm_Fetch_fetch___lam__0(v_x_5626_);
return v_res_5628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5634_){
_start:
{
if (lean_obj_tag(v_x_5634_) == 0)
{
lean_object* v___x_5635_; 
v___x_5635_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5635_;
}
else
{
lean_object* v_val_5636_; 
v_val_5636_ = lean_ctor_get(v_x_5634_, 0);
lean_inc(v_val_5636_);
return v_val_5636_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l_Lasm_Fetch_fetch___lam__1(v_x_5637_);
lean_dec(v_x_5637_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5639_, lean_object* v___f_5640_, uint8_t v___x_5641_, lean_object* v___f_5642_, lean_object* v_x_5643_){
_start:
{
if (lean_obj_tag(v_x_5643_) == 0)
{
lean_object* v_a_5645_; lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5653_; 
lean_dec_ref(v___f_5642_);
lean_dec_ref(v___f_5640_);
v_a_5645_ = lean_ctor_get(v_x_5643_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v_x_5643_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5647_ = v_x_5643_;
v_isShared_5648_ = v_isSharedCheck_5653_;
goto v_resetjp_5646_;
}
else
{
lean_inc(v_a_5645_);
lean_dec(v_x_5643_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5653_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v___x_5650_; 
if (v_isShared_5648_ == 0)
{
v___x_5650_ = v___x_5647_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_a_5645_);
v___x_5650_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
lean_object* v___x_5651_; 
v___x_5651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5651_, 0, v___x_5650_);
return v___x_5651_;
}
}
}
else
{
lean_object* v___x_5654_; lean_object* v___x_5655_; uint8_t v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
lean_dec_ref_known(v_x_5643_, 1);
v___x_5654_ = lean_io_promise_result_opt(v_a_5639_);
v___x_5655_ = lean_unsigned_to_nat(0u);
v___x_5656_ = 1;
v___x_5657_ = lean_task_map(v___f_5640_, v___x_5654_, v___x_5655_, v___x_5656_);
v___x_5658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5657_);
v___x_5659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5655_, v___x_5641_, v___x_5658_, v___f_5642_);
return v___x_5659_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5660_, lean_object* v___f_5661_, lean_object* v___x_5662_, lean_object* v___f_5663_, lean_object* v_x_5664_, lean_object* v___y_5665_){
_start:
{
uint8_t v___x_1064__boxed_5666_; lean_object* v_res_5667_; 
v___x_1064__boxed_5666_ = lean_unbox(v___x_5662_);
v_res_5667_ = l_Lasm_Fetch_fetch___lam__2(v_a_5660_, v___f_5661_, v___x_1064__boxed_5666_, v___f_5663_, v_x_5664_);
lean_dec(v_a_5660_);
return v_res_5667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5668_, lean_object* v___f_5669_, uint8_t v___x_5670_, lean_object* v___f_5671_, lean_object* v_options_5672_, lean_object* v_x_5673_){
_start:
{
if (lean_obj_tag(v_x_5673_) == 0)
{
lean_object* v_a_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5683_; 
lean_dec_ref(v___f_5671_);
lean_dec_ref(v___f_5669_);
v_a_5675_ = lean_ctor_get(v_x_5673_, 0);
v_isSharedCheck_5683_ = !lean_is_exclusive(v_x_5673_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5677_ = v_x_5673_;
v_isShared_5678_ = v_isSharedCheck_5683_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_a_5675_);
lean_dec(v_x_5673_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5683_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5680_; 
if (v_isShared_5678_ == 0)
{
v___x_5680_ = v___x_5677_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_a_5675_);
v___x_5680_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
lean_object* v___x_5681_; 
v___x_5681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5681_, 0, v___x_5680_);
return v___x_5681_;
}
}
}
else
{
lean_object* v_a_5684_; lean_object* v___x_5686_; uint8_t v_isShared_5687_; uint8_t v_isSharedCheck_5714_; 
v_a_5684_ = lean_ctor_get(v_x_5673_, 0);
v_isSharedCheck_5714_ = !lean_is_exclusive(v_x_5673_);
if (v_isSharedCheck_5714_ == 0)
{
v___x_5686_ = v_x_5673_;
v_isShared_5687_ = v_isSharedCheck_5714_;
goto v_resetjp_5685_;
}
else
{
lean_inc(v_a_5684_);
lean_dec(v_x_5673_);
v___x_5686_ = lean_box(0);
v_isShared_5687_ = v_isSharedCheck_5714_;
goto v_resetjp_5685_;
}
v_resetjp_5685_:
{
lean_object* v_method_5688_; lean_object* v_url_5689_; lean_object* v_headers_5690_; lean_object* v_body_5691_; lean_object* v___x_5692_; lean_object* v___f_5693_; lean_object* v___y_5695_; uint8_t v___y_5696_; lean_object* v_val_5697_; lean_object* v___y_5701_; 
v_method_5688_ = lean_ctor_get(v_req_5668_, 0);
v_url_5689_ = lean_ctor_get(v_req_5668_, 1);
v_headers_5690_ = lean_ctor_get(v_req_5668_, 2);
v_body_5691_ = lean_ctor_get(v_req_5668_, 3);
v___x_5692_ = lean_box(v___x_5670_);
lean_inc(v_a_5684_);
v___f_5693_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5693_, 0, v_a_5684_);
lean_closure_set(v___f_5693_, 1, v___f_5669_);
lean_closure_set(v___f_5693_, 2, v___x_5692_);
lean_closure_set(v___f_5693_, 3, v___f_5671_);
if (lean_obj_tag(v_options_5672_) == 0)
{
lean_object* v___x_5712_; 
v___x_5712_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5701_ = v___x_5712_;
goto v___jp_5700_;
}
else
{
lean_object* v_val_5713_; 
v_val_5713_ = lean_ctor_get(v_options_5672_, 0);
v___y_5701_ = v_val_5713_;
goto v___jp_5700_;
}
v___jp_5694_:
{
lean_object* v___x_5698_; lean_object* v___x_5699_; 
v___x_5698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5698_, 0, v_val_5697_);
v___x_5699_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5695_, v___y_5696_, v___x_5698_, v___f_5693_);
return v___x_5699_;
}
v___jp_5700_:
{
lean_object* v___x_5702_; lean_object* v___x_5703_; 
v___x_5702_ = lean_unsigned_to_nat(0u);
v___x_5703_ = lasm_fetch_send(v_a_5684_, v_method_5688_, v_url_5689_, v_headers_5690_, v_body_5691_, v___y_5701_);
lean_dec(v_a_5684_);
if (lean_obj_tag(v___x_5703_) == 0)
{
lean_object* v_a_5704_; lean_object* v___x_5706_; 
v_a_5704_ = lean_ctor_get(v___x_5703_, 0);
lean_inc(v_a_5704_);
lean_dec_ref_known(v___x_5703_, 1);
if (v_isShared_5687_ == 0)
{
lean_ctor_set(v___x_5686_, 0, v_a_5704_);
v___x_5706_ = v___x_5686_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v_a_5704_);
v___x_5706_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
v___y_5695_ = v___x_5702_;
v___y_5696_ = v___x_5670_;
v_val_5697_ = v___x_5706_;
goto v___jp_5694_;
}
}
else
{
lean_object* v_a_5708_; lean_object* v___x_5710_; 
v_a_5708_ = lean_ctor_get(v___x_5703_, 0);
lean_inc(v_a_5708_);
lean_dec_ref_known(v___x_5703_, 1);
if (v_isShared_5687_ == 0)
{
lean_ctor_set_tag(v___x_5686_, 0);
lean_ctor_set(v___x_5686_, 0, v_a_5708_);
v___x_5710_ = v___x_5686_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_a_5708_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
v___y_5695_ = v___x_5702_;
v___y_5696_ = v___x_5670_;
v_val_5697_ = v___x_5710_;
goto v___jp_5694_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5715_, lean_object* v___f_5716_, lean_object* v___x_5717_, lean_object* v___f_5718_, lean_object* v_options_5719_, lean_object* v_x_5720_, lean_object* v___y_5721_){
_start:
{
uint8_t v___x_1113__boxed_5722_; lean_object* v_res_5723_; 
v___x_1113__boxed_5722_ = lean_unbox(v___x_5717_);
v_res_5723_ = l_Lasm_Fetch_fetch___lam__3(v_req_5715_, v___f_5716_, v___x_1113__boxed_5722_, v___f_5718_, v_options_5719_, v_x_5720_);
lean_dec(v_options_5719_);
lean_dec_ref(v_req_5715_);
return v_res_5723_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5724_; uint32_t v___x_5725_; 
v___x_5724_ = lean_box(0);
v___x_5725_ = lasm_fetch_platform(v___x_5724_);
return v___x_5725_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5726_; uint32_t v___x_5727_; uint8_t v___x_5728_; 
v___x_5726_ = 0;
v___x_5727_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5728_ = lean_uint32_dec_eq(v___x_5727_, v___x_5726_);
return v___x_5728_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5731_; uint32_t v___x_5732_; uint8_t v___x_5733_; 
v___x_5731_ = 2;
v___x_5732_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5733_ = lean_uint32_dec_eq(v___x_5732_, v___x_5731_);
return v___x_5733_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5734_; uint32_t v___x_5735_; uint8_t v___x_5736_; 
v___x_5734_ = 4;
v___x_5735_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5736_ = lean_uint32_dec_eq(v___x_5735_, v___x_5734_);
return v___x_5736_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5737_; uint32_t v___x_5738_; uint8_t v___x_5739_; 
v___x_5737_ = 1;
v___x_5738_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5739_ = lean_uint32_dec_eq(v___x_5738_, v___x_5737_);
return v___x_5739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5754_, lean_object* v_options_5755_){
_start:
{
uint8_t v___x_5757_; 
v___x_5757_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_5757_ == 0)
{
lean_object* v___f_5758_; lean_object* v___f_5759_; lean_object* v___x_5760_; lean_object* v___f_5761_; uint8_t v___x_5768_; 
v___f_5758_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_5759_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_5760_ = lean_box(v___x_5757_);
v___f_5761_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_5761_, 0, v_req_5754_);
lean_closure_set(v___f_5761_, 1, v___f_5759_);
lean_closure_set(v___f_5761_, 2, v___x_5760_);
lean_closure_set(v___f_5761_, 3, v___f_5758_);
lean_closure_set(v___f_5761_, 4, v_options_5755_);
v___x_5768_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_5768_ == 0)
{
uint8_t v___x_5769_; 
v___x_5769_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_5769_ == 0)
{
uint8_t v___x_5770_; 
lean_dec_ref(v___f_5761_);
v___x_5770_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_5770_ == 0)
{
lean_object* v___x_5771_; 
v___x_5771_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_5771_;
}
else
{
lean_object* v___x_5772_; 
v___x_5772_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_5772_;
}
}
else
{
goto v___jp_5762_;
}
}
else
{
goto v___jp_5762_;
}
v___jp_5762_:
{
lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; 
v___x_5763_ = lean_unsigned_to_nat(0u);
v___x_5764_ = lean_io_promise_new();
v___x_5765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5765_, 0, v___x_5764_);
v___x_5766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5766_, 0, v___x_5765_);
v___x_5767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5763_, v___x_5757_, v___x_5766_, v___f_5761_);
return v___x_5767_;
}
}
else
{
lean_object* v___x_5773_; 
lean_dec(v_options_5755_);
v___x_5773_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5754_);
return v___x_5773_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_5774_, lean_object* v_options_5775_, lean_object* v_a_5776_){
_start:
{
lean_object* v_res_5777_; 
v_res_5777_ = l_Lasm_Fetch_fetch(v_req_5774_, v_options_5775_);
return v_res_5777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_5778_, lean_object* v_headers_5779_, lean_object* v_options_5780_){
_start:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___f_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5782_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5783_ = l_ByteArray_empty;
v___f_5784_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5782_);
lean_ctor_set(v___x_5785_, 1, v_url_5778_);
lean_ctor_set(v___x_5785_, 2, v_headers_5779_);
lean_ctor_set(v___x_5785_, 3, v___x_5783_);
lean_ctor_set(v___x_5785_, 4, v___f_5784_);
v___x_5786_ = l_Lasm_Fetch_fetch(v___x_5785_, v_options_5780_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_5787_, lean_object* v_headers_5788_, lean_object* v_options_5789_, lean_object* v_a_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lasm_Fetch_get(v_url_5787_, v_headers_5788_, v_options_5789_);
return v_res_5791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_5793_, lean_object* v_body_5794_, lean_object* v_contentType_5795_, lean_object* v_headers_5796_, lean_object* v_options_5797_){
_start:
{
lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___f_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; 
v___x_5799_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_5800_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_5801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5801_, 0, v___x_5800_);
lean_ctor_set(v___x_5801_, 1, v_contentType_5795_);
v___x_5802_ = lean_unsigned_to_nat(1u);
v___x_5803_ = lean_mk_empty_array_with_capacity(v___x_5802_);
v___x_5804_ = lean_array_push(v___x_5803_, v___x_5801_);
v___x_5805_ = l_Array_append___redArg(v___x_5804_, v_headers_5796_);
v___f_5806_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_5807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5807_, 0, v___x_5799_);
lean_ctor_set(v___x_5807_, 1, v_url_5793_);
lean_ctor_set(v___x_5807_, 2, v___x_5805_);
lean_ctor_set(v___x_5807_, 3, v_body_5794_);
lean_ctor_set(v___x_5807_, 4, v___f_5806_);
v___x_5808_ = l_Lasm_Fetch_fetch(v___x_5807_, v_options_5797_);
return v___x_5808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_5809_, lean_object* v_body_5810_, lean_object* v_contentType_5811_, lean_object* v_headers_5812_, lean_object* v_options_5813_, lean_object* v_a_5814_){
_start:
{
lean_object* v_res_5815_; 
v_res_5815_ = l_Lasm_Fetch_post(v_url_5809_, v_body_5810_, v_contentType_5811_, v_headers_5812_, v_options_5813_);
lean_dec_ref(v_headers_5812_);
return v_res_5815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_5816_){
_start:
{
lean_object* v_body_5817_; uint8_t v___x_5818_; 
v_body_5817_ = lean_ctor_get(v_r_5816_, 1);
lean_inc_ref(v_body_5817_);
lean_dec_ref(v_r_5816_);
v___x_5818_ = lean_string_validate_utf8(v_body_5817_);
if (v___x_5818_ == 0)
{
lean_object* v___x_5819_; 
lean_dec_ref(v_body_5817_);
v___x_5819_ = lean_box(0);
return v___x_5819_;
}
else
{
lean_object* v___x_5820_; lean_object* v___x_5821_; 
v___x_5820_ = lean_string_from_utf8_unchecked(v_body_5817_);
v___x_5821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
return v___x_5821_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_5822_, lean_object* v_name_5823_){
_start:
{
lean_object* v_headers_5824_; lean_object* v_n_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; size_t v_sz_5828_; size_t v___x_5829_; lean_object* v___x_5830_; lean_object* v_fst_5831_; 
v_headers_5824_ = lean_ctor_get(v_r_5822_, 0);
v_n_5825_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_5823_);
v___x_5826_ = lean_box(0);
v___x_5827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5828_ = lean_array_size(v_headers_5824_);
v___x_5829_ = ((size_t)0ULL);
v___x_5830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_5825_, v_headers_5824_, v_sz_5828_, v___x_5829_, v___x_5827_);
lean_dec_ref(v_n_5825_);
v_fst_5831_ = lean_ctor_get(v___x_5830_, 0);
lean_inc(v_fst_5831_);
lean_dec_ref(v___x_5830_);
if (lean_obj_tag(v_fst_5831_) == 0)
{
return v___x_5826_;
}
else
{
lean_object* v_val_5832_; 
v_val_5832_ = lean_ctor_get(v_fst_5831_, 0);
lean_inc(v_val_5832_);
lean_dec_ref_known(v_fst_5831_, 1);
if (lean_obj_tag(v_val_5832_) == 0)
{
return v___x_5826_;
}
else
{
lean_object* v_val_5833_; lean_object* v___x_5835_; uint8_t v_isShared_5836_; uint8_t v_isSharedCheck_5841_; 
v_val_5833_ = lean_ctor_get(v_val_5832_, 0);
v_isSharedCheck_5841_ = !lean_is_exclusive(v_val_5832_);
if (v_isSharedCheck_5841_ == 0)
{
v___x_5835_ = v_val_5832_;
v_isShared_5836_ = v_isSharedCheck_5841_;
goto v_resetjp_5834_;
}
else
{
lean_inc(v_val_5833_);
lean_dec(v_val_5832_);
v___x_5835_ = lean_box(0);
v_isShared_5836_ = v_isSharedCheck_5841_;
goto v_resetjp_5834_;
}
v_resetjp_5834_:
{
lean_object* v_snd_5837_; lean_object* v___x_5839_; 
v_snd_5837_ = lean_ctor_get(v_val_5833_, 1);
lean_inc(v_snd_5837_);
lean_dec(v_val_5833_);
if (v_isShared_5836_ == 0)
{
lean_ctor_set(v___x_5835_, 0, v_snd_5837_);
v___x_5839_ = v___x_5835_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5840_; 
v_reuseFailAlloc_5840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5840_, 0, v_snd_5837_);
v___x_5839_ = v_reuseFailAlloc_5840_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
return v___x_5839_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_5842_, lean_object* v_name_5843_){
_start:
{
lean_object* v_res_5844_; 
v_res_5844_ = l_Lasm_Fetch_Response_header_x3f(v_r_5842_, v_name_5843_);
lean_dec_ref(v_r_5842_);
return v_res_5844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_5845_){
_start:
{
if (lean_obj_tag(v_x_5845_) == 0)
{
lean_object* v_a_5846_; lean_object* v___x_5847_; 
v_a_5846_ = lean_ctor_get(v_x_5845_, 0);
lean_inc(v_a_5846_);
lean_dec_ref_known(v_x_5845_, 1);
v___x_5847_ = lean_task_pure(v_a_5846_);
return v___x_5847_;
}
else
{
lean_object* v_a_5848_; 
v_a_5848_ = lean_ctor_get(v_x_5845_, 0);
lean_inc_ref(v_a_5848_);
lean_dec_ref_known(v_x_5845_, 1);
return v_a_5848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_5849_){
_start:
{
if (lean_obj_tag(v_x_5849_) == 0)
{
lean_object* v_a_5850_; lean_object* v___x_5851_; 
v_a_5850_ = lean_ctor_get(v_x_5849_, 0);
lean_inc(v_a_5850_);
lean_dec_ref_known(v_x_5849_, 1);
v___x_5851_ = lean_task_pure(v_a_5850_);
return v___x_5851_;
}
else
{
lean_object* v_a_5852_; 
v_a_5852_ = lean_ctor_get(v_x_5849_, 0);
lean_inc_ref(v_a_5852_);
lean_dec_ref_known(v_x_5849_, 1);
return v_a_5852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_5853_){
_start:
{
lean_object* v_val_5856_; lean_object* v___x_5858_; 
v___x_5858_ = lasm_fetch_write(v_chunk_5853_);
if (lean_obj_tag(v___x_5858_) == 0)
{
lean_object* v_a_5859_; lean_object* v___x_5861_; uint8_t v_isShared_5862_; uint8_t v_isSharedCheck_5866_; 
v_a_5859_ = lean_ctor_get(v___x_5858_, 0);
v_isSharedCheck_5866_ = !lean_is_exclusive(v___x_5858_);
if (v_isSharedCheck_5866_ == 0)
{
v___x_5861_ = v___x_5858_;
v_isShared_5862_ = v_isSharedCheck_5866_;
goto v_resetjp_5860_;
}
else
{
lean_inc(v_a_5859_);
lean_dec(v___x_5858_);
v___x_5861_ = lean_box(0);
v_isShared_5862_ = v_isSharedCheck_5866_;
goto v_resetjp_5860_;
}
v_resetjp_5860_:
{
lean_object* v___x_5864_; 
if (v_isShared_5862_ == 0)
{
lean_ctor_set_tag(v___x_5861_, 1);
v___x_5864_ = v___x_5861_;
goto v_reusejp_5863_;
}
else
{
lean_object* v_reuseFailAlloc_5865_; 
v_reuseFailAlloc_5865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5865_, 0, v_a_5859_);
v___x_5864_ = v_reuseFailAlloc_5865_;
goto v_reusejp_5863_;
}
v_reusejp_5863_:
{
v_val_5856_ = v___x_5864_;
goto v___jp_5855_;
}
}
}
else
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5874_; 
v_a_5867_ = lean_ctor_get(v___x_5858_, 0);
v_isSharedCheck_5874_ = !lean_is_exclusive(v___x_5858_);
if (v_isSharedCheck_5874_ == 0)
{
v___x_5869_ = v___x_5858_;
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v___x_5858_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
lean_ctor_set_tag(v___x_5869_, 0);
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
v_val_5856_ = v___x_5872_;
goto v___jp_5855_;
}
}
}
v___jp_5855_:
{
lean_object* v___x_5857_; 
v___x_5857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5857_, 0, v_val_5856_);
return v___x_5857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_5875_, lean_object* v___y_5876_){
_start:
{
lean_object* v_res_5877_; 
v_res_5877_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_5875_);
lean_dec_ref(v_chunk_5875_);
return v_res_5877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_5878_){
_start:
{
if (lean_obj_tag(v_x_5878_) == 0)
{
lean_object* v_a_5879_; lean_object* v___x_5880_; 
v_a_5879_ = lean_ctor_get(v_x_5878_, 0);
lean_inc(v_a_5879_);
lean_dec_ref_known(v_x_5878_, 1);
v___x_5880_ = lean_task_pure(v_a_5879_);
return v___x_5880_;
}
else
{
lean_object* v_a_5881_; 
v_a_5881_ = lean_ctor_get(v_x_5878_, 0);
lean_inc_ref(v_a_5881_);
lean_dec_ref_known(v_x_5878_, 1);
return v_a_5881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_5882_){
_start:
{
lean_object* v___y_5885_; 
if (lean_obj_tag(v_x_5882_) == 0)
{
lean_object* v_a_5888_; lean_object* v___x_5890_; uint8_t v_isShared_5891_; uint8_t v_isSharedCheck_5896_; 
v_a_5888_ = lean_ctor_get(v_x_5882_, 0);
v_isSharedCheck_5896_ = !lean_is_exclusive(v_x_5882_);
if (v_isSharedCheck_5896_ == 0)
{
v___x_5890_ = v_x_5882_;
v_isShared_5891_ = v_isSharedCheck_5896_;
goto v_resetjp_5889_;
}
else
{
lean_inc(v_a_5888_);
lean_dec(v_x_5882_);
v___x_5890_ = lean_box(0);
v_isShared_5891_ = v_isSharedCheck_5896_;
goto v_resetjp_5889_;
}
v_resetjp_5889_:
{
lean_object* v___x_5893_; 
if (v_isShared_5891_ == 0)
{
v___x_5893_ = v___x_5890_;
goto v_reusejp_5892_;
}
else
{
lean_object* v_reuseFailAlloc_5895_; 
v_reuseFailAlloc_5895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5895_, 0, v_a_5888_);
v___x_5893_ = v_reuseFailAlloc_5895_;
goto v_reusejp_5892_;
}
v_reusejp_5892_:
{
lean_object* v___x_5894_; 
v___x_5894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5893_);
return v___x_5894_;
}
}
}
else
{
lean_object* v_a_5897_; uint8_t v___x_5898_; 
v_a_5897_ = lean_ctor_get(v_x_5882_, 0);
lean_inc(v_a_5897_);
lean_dec_ref_known(v_x_5882_, 1);
v___x_5898_ = l_ByteArray_isEmpty(v_a_5897_);
if (v___x_5898_ == 0)
{
lean_object* v___x_5899_; 
v___x_5899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5899_, 0, v_a_5897_);
v___y_5885_ = v___x_5899_;
goto v___jp_5884_;
}
else
{
lean_object* v___x_5900_; 
lean_dec(v_a_5897_);
v___x_5900_ = lean_box(0);
v___y_5885_ = v___x_5900_;
goto v___jp_5884_;
}
}
v___jp_5884_:
{
lean_object* v___x_5886_; lean_object* v___x_5887_; 
v___x_5886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5886_, 0, v___y_5885_);
v___x_5887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5887_, 0, v___x_5886_);
return v___x_5887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_5901_, lean_object* v___y_5902_){
_start:
{
lean_object* v_res_5903_; 
v_res_5903_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_5901_);
return v_res_5903_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_5904_, uint32_t v___x_5905_){
_start:
{
lean_object* v___x_5907_; uint8_t v___x_5908_; lean_object* v_val_5910_; lean_object* v___x_5913_; 
v___x_5907_ = lean_unsigned_to_nat(0u);
v___x_5908_ = 0;
v___x_5913_ = lasm_fetch_read(v___x_5905_);
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
v_val_5910_ = v___x_5919_;
goto v___jp_5909_;
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
v_val_5910_ = v___x_5927_;
goto v___jp_5909_;
}
}
}
v___jp_5909_:
{
lean_object* v___x_5911_; lean_object* v___x_5912_; 
v___x_5911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5911_, 0, v_val_5910_);
v___x_5912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5907_, v___x_5908_, v___x_5911_, v___f_5904_);
return v___x_5912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_5930_, lean_object* v___x_5931_, lean_object* v___y_5932_){
_start:
{
uint32_t v___x_2044__boxed_5933_; lean_object* v_res_5934_; 
v___x_2044__boxed_5933_ = lean_unbox_uint32(v___x_5931_);
lean_dec(v___x_5931_);
v_res_5934_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_5930_, v___x_2044__boxed_5933_);
return v_res_5934_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_5935_, lean_object* v_req_5936_){
_start:
{
lean_object* v___x_5938_; 
v___x_5938_ = l_Lasm_Fetch_respond(v_handler_5935_, v_req_5936_);
return v___x_5938_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_5939_, lean_object* v_req_5940_, lean_object* v___y_5941_){
_start:
{
lean_object* v_res_5942_; 
v_res_5942_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_5939_, v_req_5940_);
return v_res_5942_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_5943_, lean_object* v___f_5944_){
_start:
{
lean_object* v___x_5946_; 
v___x_5946_ = lean_apply_2(v_val_5943_, v___f_5944_, lean_box(0));
return v___x_5946_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_5947_, lean_object* v___f_5948_, lean_object* v___y_5949_){
_start:
{
lean_object* v_res_5950_; 
v_res_5950_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_5947_, v___f_5948_);
return v_res_5950_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_5951_){
_start:
{
lean_object* v___x_5953_; 
v___x_5953_ = l_Lasm_Fetch_Request_readAll(v___x_5951_);
return v___x_5953_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_5954_, lean_object* v___y_5955_){
_start:
{
lean_object* v_res_5956_; 
v_res_5956_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_5954_);
return v_res_5956_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_5962_; lean_object* v___x_5963_; 
v___x_5962_ = 65536;
v___x_5963_ = lean_box_uint32(v___x_5962_);
return v___x_5963_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_5964_; lean_object* v___x_5965_; lean_object* v___f_5966_; 
v___f_5964_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_5965_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_5966_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_5966_, 0, v___f_5964_);
lean_closure_set(v___f_5966_, 1, v___x_5965_);
return v___f_5966_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_5967_, lean_object* v_options_5968_){
_start:
{
lean_object* v___f_5970_; lean_object* v___f_5971_; lean_object* v___f_5972_; lean_object* v___f_5973_; lean_object* v___x_5974_; 
v___f_5970_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_5971_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_5972_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_5973_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_5974_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_5974_) == 0)
{
lean_object* v_a_5975_; lean_object* v___x_5977_; uint8_t v_isShared_5978_; uint8_t v_isSharedCheck_6045_; 
v_a_5975_ = lean_ctor_get(v___x_5974_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_5974_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_5977_ = v___x_5974_;
v_isShared_5978_ = v_isSharedCheck_6045_;
goto v_resetjp_5976_;
}
else
{
lean_inc(v_a_5975_);
lean_dec(v___x_5974_);
v___x_5977_ = lean_box(0);
v_isShared_5978_ = v_isSharedCheck_6045_;
goto v_resetjp_5976_;
}
v_resetjp_5976_:
{
lean_object* v_snd_5979_; lean_object* v_fst_5980_; lean_object* v_fst_5981_; lean_object* v_snd_5982_; lean_object* v___f_5983_; lean_object* v___x_5984_; lean_object* v_req_5986_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; uint8_t v___x_6027_; 
v_snd_5979_ = lean_ctor_get(v_a_5975_, 1);
lean_inc(v_snd_5979_);
v_fst_5980_ = lean_ctor_get(v_a_5975_, 0);
lean_inc_n(v_fst_5980_, 2);
lean_dec(v_a_5975_);
v_fst_5981_ = lean_ctor_get(v_snd_5979_, 0);
lean_inc_n(v_fst_5981_, 2);
v_snd_5982_ = lean_ctor_get(v_snd_5979_, 1);
lean_inc_n(v_snd_5982_, 2);
lean_dec(v_snd_5979_);
v___f_5983_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_5984_ = l_ByteArray_empty;
v___x_6024_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6024_, 0, v_fst_5980_);
lean_ctor_set(v___x_6024_, 1, v_fst_5981_);
lean_ctor_set(v___x_6024_, 2, v_snd_5982_);
lean_ctor_set(v___x_6024_, 3, v___x_5984_);
lean_ctor_set(v___x_6024_, 4, v___f_5983_);
lean_inc_ref(v___x_6024_);
v___x_6025_ = l_Lasm_Fetch_Request_path(v___x_6024_);
v___x_6026_ = lean_apply_1(v_options_5968_, v___x_6025_);
v___x_6027_ = lean_unbox(v___x_6026_);
if (v___x_6027_ == 0)
{
lean_object* v___f_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; uint8_t v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; 
v___f_6028_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6028_, 0, v___x_6024_);
v___x_6029_ = lean_unsigned_to_nat(0u);
v___x_6030_ = lean_io_as_task(v___f_6028_, v___x_6029_);
v___x_6031_ = 1;
v___x_6032_ = lean_task_bind(v___x_6030_, v___f_5970_, v___x_6029_, v___x_6031_);
v___x_6033_ = lean_task_get_own(v___x_6032_);
if (lean_obj_tag(v___x_6033_) == 0)
{
lean_object* v_a_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6041_; 
lean_dec(v_snd_5982_);
lean_dec(v_fst_5981_);
lean_dec(v_fst_5980_);
lean_del_object(v___x_5977_);
lean_dec_ref(v_handler_5967_);
v_a_6034_ = lean_ctor_get(v___x_6033_, 0);
v_isSharedCheck_6041_ = !lean_is_exclusive(v___x_6033_);
if (v_isSharedCheck_6041_ == 0)
{
v___x_6036_ = v___x_6033_;
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_a_6034_);
lean_dec(v___x_6033_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6039_; 
if (v_isShared_6037_ == 0)
{
lean_ctor_set_tag(v___x_6036_, 1);
v___x_6039_ = v___x_6036_;
goto v_reusejp_6038_;
}
else
{
lean_object* v_reuseFailAlloc_6040_; 
v_reuseFailAlloc_6040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6040_, 0, v_a_6034_);
v___x_6039_ = v_reuseFailAlloc_6040_;
goto v_reusejp_6038_;
}
v_reusejp_6038_:
{
return v___x_6039_;
}
}
}
else
{
lean_object* v_a_6042_; lean_object* v___f_6043_; lean_object* v___x_6044_; 
v_a_6042_ = lean_ctor_get(v___x_6033_, 0);
lean_inc(v_a_6042_);
lean_dec_ref_known(v___x_6033_, 1);
v___f_6043_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6044_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6044_, 0, v_fst_5980_);
lean_ctor_set(v___x_6044_, 1, v_fst_5981_);
lean_ctor_set(v___x_6044_, 2, v_snd_5982_);
lean_ctor_set(v___x_6044_, 3, v_a_6042_);
lean_ctor_set(v___x_6044_, 4, v___f_6043_);
v_req_5986_ = v___x_6044_;
goto v___jp_5985_;
}
}
else
{
lean_dec(v_snd_5982_);
lean_dec(v_fst_5981_);
lean_dec(v_fst_5980_);
v_req_5986_ = v___x_6024_;
goto v___jp_5985_;
}
v___jp_5985_:
{
lean_object* v___f_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; uint8_t v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
lean_inc_ref(v_req_5986_);
v___f_5987_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_5987_, 0, v_handler_5967_);
lean_closure_set(v___f_5987_, 1, v_req_5986_);
v___x_5988_ = lean_unsigned_to_nat(0u);
v___x_5989_ = lean_io_as_task(v___f_5987_, v___x_5988_);
v___x_5990_ = 1;
v___x_5991_ = lean_task_bind(v___x_5989_, v___f_5973_, v___x_5988_, v___x_5990_);
v___x_5992_ = lean_task_get_own(v___x_5991_);
if (lean_obj_tag(v___x_5992_) == 0)
{
lean_object* v_a_5993_; lean_object* v___x_5995_; 
lean_dec_ref(v_req_5986_);
v_a_5993_ = lean_ctor_get(v___x_5992_, 0);
lean_inc(v_a_5993_);
lean_dec_ref_known(v___x_5992_, 1);
if (v_isShared_5978_ == 0)
{
lean_ctor_set_tag(v___x_5977_, 1);
lean_ctor_set(v___x_5977_, 0, v_a_5993_);
v___x_5995_ = v___x_5977_;
goto v_reusejp_5994_;
}
else
{
lean_object* v_reuseFailAlloc_5996_; 
v_reuseFailAlloc_5996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5996_, 0, v_a_5993_);
v___x_5995_ = v_reuseFailAlloc_5996_;
goto v_reusejp_5994_;
}
v_reusejp_5994_:
{
return v___x_5995_;
}
}
else
{
lean_object* v_a_5997_; lean_object* v_stream_5998_; 
lean_del_object(v___x_5977_);
v_a_5997_ = lean_ctor_get(v___x_5992_, 0);
lean_inc(v_a_5997_);
lean_dec_ref_known(v___x_5992_, 1);
v_stream_5998_ = lean_ctor_get(v_a_5997_, 2);
if (lean_obj_tag(v_stream_5998_) == 0)
{
uint16_t v_status_5999_; lean_object* v_headers_6000_; lean_object* v_body_6001_; lean_object* v_method_6002_; uint8_t v___x_6003_; 
v_status_5999_ = lean_ctor_get_uint16(v_a_5997_, sizeof(void*)*3);
v_headers_6000_ = lean_ctor_get(v_a_5997_, 0);
lean_inc_ref(v_headers_6000_);
v_body_6001_ = lean_ctor_get(v_a_5997_, 1);
lean_inc_ref(v_body_6001_);
lean_dec(v_a_5997_);
v_method_6002_ = lean_ctor_get(v_req_5986_, 0);
lean_inc_ref(v_method_6002_);
lean_dec_ref(v_req_5986_);
v___x_6003_ = l_Lasm_Fetch_bodyless(v_method_6002_, v_status_5999_);
lean_dec_ref(v_method_6002_);
if (v___x_6003_ == 0)
{
lean_object* v___x_6004_; 
v___x_6004_ = lasm_fetch_send_response(v_status_5999_, v_headers_6000_, v_body_6001_);
lean_dec_ref(v_body_6001_);
lean_dec_ref(v_headers_6000_);
return v___x_6004_;
}
else
{
lean_object* v___x_6005_; 
lean_dec_ref(v_body_6001_);
v___x_6005_ = lasm_fetch_send_response(v_status_5999_, v_headers_6000_, v___x_5984_);
lean_dec_ref(v_headers_6000_);
return v___x_6005_;
}
}
else
{
uint16_t v_status_6006_; lean_object* v_headers_6007_; lean_object* v_val_6008_; lean_object* v___f_6009_; lean_object* v___x_6010_; 
lean_inc_ref(v_stream_5998_);
v_status_6006_ = lean_ctor_get_uint16(v_a_5997_, sizeof(void*)*3);
v_headers_6007_ = lean_ctor_get(v_a_5997_, 0);
lean_inc_ref(v_headers_6007_);
lean_dec(v_a_5997_);
v_val_6008_ = lean_ctor_get(v_stream_5998_, 0);
lean_inc(v_val_6008_);
lean_dec_ref_known(v_stream_5998_, 1);
v___f_6009_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6009_, 0, v_val_6008_);
lean_closure_set(v___f_6009_, 1, v___f_5972_);
v___x_6010_ = lasm_fetch_start_response(v_status_6006_, v_headers_6007_);
lean_dec_ref(v_headers_6007_);
if (lean_obj_tag(v___x_6010_) == 0)
{
lean_object* v_method_6011_; uint8_t v___x_6012_; 
lean_dec_ref_known(v___x_6010_, 1);
v_method_6011_ = lean_ctor_get(v_req_5986_, 0);
lean_inc_ref(v_method_6011_);
lean_dec_ref(v_req_5986_);
v___x_6012_ = l_Lasm_Fetch_bodyless(v_method_6011_, v_status_6006_);
lean_dec_ref(v_method_6011_);
if (v___x_6012_ == 0)
{
lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; 
v___x_6013_ = lean_io_as_task(v___f_6009_, v___x_5988_);
v___x_6014_ = lean_task_bind(v___x_6013_, v___f_5971_, v___x_5988_, v___x_5990_);
v___x_6015_ = lean_task_get_own(v___x_6014_);
if (lean_obj_tag(v___x_6015_) == 0)
{
lean_object* v_a_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; 
v_a_6016_ = lean_ctor_get(v___x_6015_, 0);
lean_inc(v_a_6016_);
lean_dec_ref_known(v___x_6015_, 1);
v___x_6017_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6018_ = lean_io_error_to_string(v_a_6016_);
v___x_6019_ = lean_string_append(v___x_6017_, v___x_6018_);
lean_dec_ref(v___x_6018_);
v___x_6020_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6019_);
if (lean_obj_tag(v___x_6020_) == 0)
{
lean_object* v___x_6021_; 
lean_dec_ref_known(v___x_6020_, 1);
v___x_6021_ = lasm_fetch_finish(v___x_6012_);
return v___x_6021_;
}
else
{
return v___x_6020_;
}
}
else
{
lean_object* v___x_6022_; 
lean_dec_ref_known(v___x_6015_, 1);
v___x_6022_ = lasm_fetch_finish(v___x_5990_);
return v___x_6022_;
}
}
else
{
lean_object* v___x_6023_; 
lean_dec_ref(v___f_6009_);
v___x_6023_ = lasm_fetch_finish(v___x_5990_);
return v___x_6023_;
}
}
else
{
lean_dec_ref(v___f_6009_);
lean_dec_ref(v_req_5986_);
return v___x_6010_;
}
}
}
}
}
}
else
{
lean_object* v_a_6046_; lean_object* v___x_6048_; uint8_t v_isShared_6049_; uint8_t v_isSharedCheck_6053_; 
lean_dec_ref(v_options_5968_);
lean_dec_ref(v_handler_5967_);
v_a_6046_ = lean_ctor_get(v___x_5974_, 0);
v_isSharedCheck_6053_ = !lean_is_exclusive(v___x_5974_);
if (v_isSharedCheck_6053_ == 0)
{
v___x_6048_ = v___x_5974_;
v_isShared_6049_ = v_isSharedCheck_6053_;
goto v_resetjp_6047_;
}
else
{
lean_inc(v_a_6046_);
lean_dec(v___x_5974_);
v___x_6048_ = lean_box(0);
v_isShared_6049_ = v_isSharedCheck_6053_;
goto v_resetjp_6047_;
}
v_resetjp_6047_:
{
lean_object* v___x_6051_; 
if (v_isShared_6049_ == 0)
{
v___x_6051_ = v___x_6048_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6052_; 
v_reuseFailAlloc_6052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6052_, 0, v_a_6046_);
v___x_6051_ = v_reuseFailAlloc_6052_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
return v___x_6051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6054_, lean_object* v_options_6055_, lean_object* v_a_6056_){
_start:
{
lean_object* v_res_6057_; 
v_res_6057_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6054_, v_options_6055_);
return v_res_6057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6061_, lean_object* v_handler_6062_){
_start:
{
uint8_t v___x_6064_; 
v___x_6064_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6064_ == 0)
{
uint8_t v___x_6065_; 
v___x_6065_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6065_ == 0)
{
uint8_t v___x_6066_; 
v___x_6066_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6066_ == 0)
{
uint8_t v___x_6067_; 
v___x_6067_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6067_ == 0)
{
lean_object* v___x_6068_; lean_object* v___x_6069_; 
lean_dec_ref(v_handler_6062_);
lean_dec_ref(v_options_6061_);
v___x_6068_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6069_, 0, v___x_6068_);
return v___x_6069_;
}
else
{
lean_object* v___x_6070_; 
v___x_6070_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6070_) == 0)
{
lean_object* v_a_6071_; uint8_t v___x_6072_; 
v_a_6071_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v_a_6071_);
lean_dec_ref_known(v___x_6070_, 1);
v___x_6072_ = lean_unbox(v_a_6071_);
lean_dec(v_a_6071_);
if (v___x_6072_ == 0)
{
lean_object* v___x_6073_; 
v___x_6073_ = l_Lasm_Fetch_serveNode(v_handler_6062_, v_options_6061_);
return v___x_6073_;
}
else
{
lean_object* v___x_6074_; 
v___x_6074_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6062_, v_options_6061_);
if (lean_obj_tag(v___x_6074_) == 0)
{
lean_object* v_a_6075_; lean_object* v___x_6076_; 
v_a_6075_ = lean_ctor_get(v___x_6074_, 0);
lean_inc(v_a_6075_);
lean_dec_ref_known(v___x_6074_, 1);
v___x_6076_ = l_Lasm_JS_exportDefault(v_a_6075_);
return v___x_6076_;
}
else
{
lean_object* v_a_6077_; lean_object* v___x_6079_; uint8_t v_isShared_6080_; uint8_t v_isSharedCheck_6084_; 
v_a_6077_ = lean_ctor_get(v___x_6074_, 0);
v_isSharedCheck_6084_ = !lean_is_exclusive(v___x_6074_);
if (v_isSharedCheck_6084_ == 0)
{
v___x_6079_ = v___x_6074_;
v_isShared_6080_ = v_isSharedCheck_6084_;
goto v_resetjp_6078_;
}
else
{
lean_inc(v_a_6077_);
lean_dec(v___x_6074_);
v___x_6079_ = lean_box(0);
v_isShared_6080_ = v_isSharedCheck_6084_;
goto v_resetjp_6078_;
}
v_resetjp_6078_:
{
lean_object* v___x_6082_; 
if (v_isShared_6080_ == 0)
{
v___x_6082_ = v___x_6079_;
goto v_reusejp_6081_;
}
else
{
lean_object* v_reuseFailAlloc_6083_; 
v_reuseFailAlloc_6083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6083_, 0, v_a_6077_);
v___x_6082_ = v_reuseFailAlloc_6083_;
goto v_reusejp_6081_;
}
v_reusejp_6081_:
{
return v___x_6082_;
}
}
}
}
}
else
{
lean_object* v_a_6085_; lean_object* v___x_6087_; uint8_t v_isShared_6088_; uint8_t v_isSharedCheck_6092_; 
lean_dec_ref(v_handler_6062_);
lean_dec_ref(v_options_6061_);
v_a_6085_ = lean_ctor_get(v___x_6070_, 0);
v_isSharedCheck_6092_ = !lean_is_exclusive(v___x_6070_);
if (v_isSharedCheck_6092_ == 0)
{
v___x_6087_ = v___x_6070_;
v_isShared_6088_ = v_isSharedCheck_6092_;
goto v_resetjp_6086_;
}
else
{
lean_inc(v_a_6085_);
lean_dec(v___x_6070_);
v___x_6087_ = lean_box(0);
v_isShared_6088_ = v_isSharedCheck_6092_;
goto v_resetjp_6086_;
}
v_resetjp_6086_:
{
lean_object* v___x_6090_; 
if (v_isShared_6088_ == 0)
{
v___x_6090_ = v___x_6087_;
goto v_reusejp_6089_;
}
else
{
lean_object* v_reuseFailAlloc_6091_; 
v_reuseFailAlloc_6091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6091_, 0, v_a_6085_);
v___x_6090_ = v_reuseFailAlloc_6091_;
goto v_reusejp_6089_;
}
v_reusejp_6089_:
{
return v___x_6090_;
}
}
}
}
}
else
{
lean_object* v___x_6093_; 
v___x_6093_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6062_, v_options_6061_);
return v___x_6093_;
}
}
else
{
lean_object* v___x_6094_; 
v___x_6094_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6062_, v_options_6061_);
return v___x_6094_;
}
}
else
{
lean_object* v___x_6095_; 
v___x_6095_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6062_, v_options_6061_);
return v___x_6095_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6096_, lean_object* v_handler_6097_, lean_object* v_a_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l_Lasm_Fetch_serveWith(v_options_6096_, v_handler_6097_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6100_){
_start:
{
lean_object* v___f_6102_; lean_object* v___x_6103_; 
v___f_6102_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6103_ = l_Lasm_Fetch_serveWith(v___f_6102_, v_handler_6100_);
return v___x_6103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6104_, lean_object* v_a_6105_){
_start:
{
lean_object* v_res_6106_; 
v_res_6106_ = l_Lasm_Fetch_serve(v_handler_6104_);
return v_res_6106_;
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
