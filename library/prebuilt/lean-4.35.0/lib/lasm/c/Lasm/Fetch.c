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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_obj(lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_get_stdout();
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_waitForever();
lean_object* l_Lasm_JS_global();
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lasm_JS_Function_ofFnReply(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lasm_JS_onEdge();
lean_object* l_Lasm_JS_exportDefault(lean_object*);
static const lean_string_object l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__0 = (const lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value;
static const lean_array_object l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__1 = (const lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__1_value;
static lean_once_cell_t l_Lasm_Fetch_instInhabitedRequest_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_instInhabitedRequest_default___closed__2;
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "new"};
static const lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0;
static lean_once_cell_t l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_instInhabitedRequest_default___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 25, .m_data = "Array ((String × String))"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 35, .m_data = "an element is not (String × String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "from"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.Fetch: the fetch handler expected a Request"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__1 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__1_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__1_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__2_value;
static const lean_ctor_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__2_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__3 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__3_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6_value;
static const lean_array_object l_Lasm_Fetch_jsFetchHandler___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6_value)}};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___closed__7 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_jsFetchHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_jsFetchHandler___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__0 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__0_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Response"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__1 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__1_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Uint8Array"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__2_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___closed__3 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__0___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__0___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__5___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object*, lean_object*, uint16_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "writeHead"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__4___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__6___closed__0;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__6___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "concat"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__9___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "content-length"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "transfer-encoding"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__8___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__8___closed__0_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "localhost:"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__8___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rawHeaders"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__10___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__10___closed__0_value;
static const lean_array_object l_Lasm_Fetch_serveNode___lam__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4_value),((lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5_value),((lean_object*)&l_Lasm_Fetch_serveNode___lam__10___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__10___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.Fetch: expected Node's request and response"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__13___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__13___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__1_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__1_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__13___closed__2 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__2_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__2_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__13___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__13___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Listening on http://"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__12___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__12___closed__0_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__12___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__14___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__1;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__2;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_serveNode___lam__14___closed__3;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__4;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Fetch_serveNode___lam__14___closed__5;
static lean_once_cell_t l_Lasm_Fetch_serveNode___lam__14___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__6;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__15___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__15___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__0_value)} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value)} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__2 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__2_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__3 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__3_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "node:process"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__4 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__4_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTERM"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__5 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__5_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGINT"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__6 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__6_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_serveNode___closed__7 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__7_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__5_value),((lean_object*)&l_Lasm_Fetch_serveNode___closed__7_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___closed__8 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__8_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "node:http"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__9 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__9_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Buffer"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__10 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__10_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "createServer"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__11 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__11_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__12 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__12_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HOST"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__13 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__13_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PORT"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__14 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__14_value;
static const lean_string_object l_Lasm_Fetch_serveNode___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "0.0.0.0"};
static const lean_object* l_Lasm_Fetch_serveNode___closed__15 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__15_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serve___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serve___closed__0 = (const lean_object*)&l_Lasm_Fetch_serve___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch_serve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lasm_Fetch_serve___closed__1;
static lean_once_cell_t l_Lasm_Fetch_serve___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_serve___closed__2;
static lean_once_cell_t l_Lasm_Fetch_serve___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_serve___closed__3;
static lean_once_cell_t l_Lasm_Fetch_serve___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_Fetch_serve___closed__4;
static const lean_string_object l_Lasm_Fetch_serve___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 142, .m_data = "Lasm.Fetch.serve: serving needs a program built by Lasm (lasm build, or lasm build --target wasi|fastly|workers|…); this program runs natively"};
static const lean_object* l_Lasm_Fetch_serve___closed__5 = (const lean_object*)&l_Lasm_Fetch_serve___closed__5_value;
static const lean_ctor_object l_Lasm_Fetch_serve___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serve___closed__5_value)}};
static const lean_object* l_Lasm_Fetch_serve___closed__6 = (const lean_object*)&l_Lasm_Fetch_serve___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = l_ByteArray_empty;
v___x_5_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_6_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_7_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_5_);
lean_ctor_set(v___x_7_, 3, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest_default(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lasm_Fetch_instInhabitedRequest_default___closed__2, &l_Lasm_Fetch_instInhabitedRequest_default___closed__2_once, _init_l_Lasm_Fetch_instInhabitedRequest_default___closed__2);
return v___x_8_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedRequest(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lasm_Fetch_instInhabitedRequest_default;
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse_default___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; uint16_t v___x_12_; lean_object* v___x_13_; 
v___x_10_ = l_ByteArray_empty;
v___x_11_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_12_ = 200;
v___x_13_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_10_);
lean_ctor_set_uint16(v___x_13_, sizeof(void*)*2, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse_default(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lasm_Fetch_instInhabitedResponse_default___closed__0, &l_Lasm_Fetch_instInhabitedResponse_default___closed__0_once, _init_l_Lasm_Fetch_instInhabitedResponse_default___closed__0);
return v___x_14_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedResponse(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lasm_Fetch_instInhabitedResponse_default;
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(lean_object* v_s_16_, lean_object* v_p_17_){
_start:
{
uint32_t v___y_19_; lean_object* v___x_24_; uint8_t v_decide_25_; 
v___x_24_ = lean_string_utf8_byte_size(v_s_16_);
v_decide_25_ = lean_nat_dec_eq(v_p_17_, v___x_24_);
if (v_decide_25_ == 0)
{
uint32_t v___x_26_; uint32_t v___x_27_; uint8_t v___x_28_; 
v___x_26_ = lean_string_utf8_get_fast(v_s_16_, v_p_17_);
v___x_27_ = 65;
v___x_28_ = lean_uint32_dec_le(v___x_27_, v___x_26_);
if (v___x_28_ == 0)
{
v___y_19_ = v___x_26_;
goto v___jp_18_;
}
else
{
uint32_t v___x_29_; uint8_t v___x_30_; 
v___x_29_ = 90;
v___x_30_ = lean_uint32_dec_le(v___x_26_, v___x_29_);
if (v___x_30_ == 0)
{
v___y_19_ = v___x_26_;
goto v___jp_18_;
}
else
{
uint32_t v___x_31_; uint32_t v___x_32_; 
v___x_31_ = 32;
v___x_32_ = lean_uint32_add(v___x_26_, v___x_31_);
v___y_19_ = v___x_32_;
goto v___jp_18_;
}
}
}
else
{
lean_dec(v_p_17_);
return v_s_16_;
}
v___jp_18_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_inc(v_p_17_);
v___x_20_ = lean_string_utf8_set(v_s_16_, v_p_17_, v___y_19_);
v___x_21_ = l_Char_utf8Size(v___y_19_);
v___x_22_ = lean_nat_add(v_p_17_, v___x_21_);
lean_dec(v___x_21_);
lean_dec(v_p_17_);
v_s_16_ = v___x_20_;
v_p_17_ = v___x_22_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_lower(lean_object* v_s_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = l_String_mapAux___at___00__private_Lasm_Fetch_0__Lasm_Fetch_lower_spec__0(v_s_33_, v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(lean_object* v___f_36_, lean_object* v_fst_37_, lean_object* v_snd_38_, lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_apply_3(v___f_36_, v___x_41_, v_fst_37_, v_snd_38_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed(lean_object* v___f_43_, lean_object* v_fst_44_, lean_object* v_snd_45_, lean_object* v_x_46_, lean_object* v_x_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3(v___f_43_, v_fst_44_, v_snd_45_, v_x_46_, v_x_47_);
lean_dec(v_x_47_);
lean_dec(v_x_46_);
return v_res_48_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(lean_object* v_xs_49_, lean_object* v_i_50_){
_start:
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_byte_array_size(v_xs_49_);
v___x_52_ = lean_nat_dec_lt(v_i_50_, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0___boxed(lean_object* v_xs_53_, lean_object* v_i_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_xs_53_, v_i_54_);
lean_dec(v_i_54_);
lean_dec_ref(v_xs_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(uint8_t v_plus_57_, uint8_t v___y_58_, lean_object* v_____r_59_, lean_object* v_out_60_, lean_object* v_i_61_){
_start:
{
uint8_t v___y_63_; 
if (v_plus_57_ == 0)
{
v___y_63_ = v___y_58_;
goto v___jp_62_;
}
else
{
uint8_t v___x_69_; uint8_t v___x_70_; 
v___x_69_ = 43;
v___x_70_ = lean_uint8_dec_eq(v___y_58_, v___x_69_);
if (v___x_70_ == 0)
{
v___y_63_ = v___y_58_;
goto v___jp_62_;
}
else
{
uint8_t v___x_71_; 
v___x_71_ = 32;
v___y_63_ = v___x_71_;
goto v___jp_62_;
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_64_ = lean_byte_array_push(v_out_60_, v___y_63_);
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = lean_nat_add(v_i_61_, v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_64_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed(lean_object* v_plus_72_, lean_object* v___y_73_, lean_object* v_____r_74_, lean_object* v_out_75_, lean_object* v_i_76_){
_start:
{
uint8_t v_plus_boxed_77_; uint8_t v___y_2134__boxed_78_; lean_object* v_res_79_; 
v_plus_boxed_77_ = lean_unbox(v_plus_72_);
v___y_2134__boxed_78_ = lean_unbox(v___y_73_);
v_res_79_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2(v_plus_boxed_77_, v___y_2134__boxed_78_, v_____r_74_, v_out_75_, v_i_76_);
lean_dec(v_i_76_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(uint32_t v_c_80_){
_start:
{
uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = 48;
v___x_106_ = lean_uint32_dec_le(v___x_105_, v_c_80_);
if (v___x_106_ == 0)
{
goto v___jp_94_;
}
else
{
uint32_t v___x_107_; uint8_t v___x_108_; 
v___x_107_ = 57;
v___x_108_ = lean_uint32_dec_le(v_c_80_, v___x_107_);
if (v___x_108_ == 0)
{
goto v___jp_94_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = lean_uint32_to_nat(v_c_80_);
v___x_110_ = lean_unsigned_to_nat(48u);
v___x_111_ = lean_nat_sub(v___x_109_, v___x_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
v___jp_81_:
{
uint32_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 65;
v___x_83_ = lean_uint32_dec_le(v___x_82_, v_c_80_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
uint32_t v___x_85_; uint8_t v___x_86_; 
v___x_85_ = 70;
v___x_86_ = lean_uint32_dec_le(v_c_80_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
v___x_87_ = lean_box(0);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_88_ = lean_uint32_to_nat(v_c_80_);
v___x_89_ = lean_unsigned_to_nat(65u);
v___x_90_ = lean_nat_sub(v___x_88_, v___x_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_unsigned_to_nat(10u);
v___x_92_ = lean_nat_add(v___x_90_, v___x_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
v___jp_94_:
{
uint32_t v___x_95_; uint8_t v___x_96_; 
v___x_95_ = 97;
v___x_96_ = lean_uint32_dec_le(v___x_95_, v_c_80_);
if (v___x_96_ == 0)
{
goto v___jp_81_;
}
else
{
uint32_t v___x_97_; uint8_t v___x_98_; 
v___x_97_ = 102;
v___x_98_ = lean_uint32_dec_le(v_c_80_, v___x_97_);
if (v___x_98_ == 0)
{
goto v___jp_81_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_99_ = lean_uint32_to_nat(v_c_80_);
v___x_100_ = lean_unsigned_to_nat(97u);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1___boxed(lean_object* v_c_113_){
_start:
{
uint32_t v_c_boxed_114_; lean_object* v_res_115_; 
v_c_boxed_114_ = lean_unbox_uint32(v_c_113_);
lean_dec(v_c_113_);
v_res_115_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v_c_boxed_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(lean_object* v_bytes_116_, uint8_t v_plus_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___y_120_; lean_object* v_fst_124_; lean_object* v_snd_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_212_; 
v_fst_124_ = lean_ctor_get(v_a_118_, 0);
v_snd_125_ = lean_ctor_get(v_a_118_, 1);
v_isSharedCheck_212_ = !lean_is_exclusive(v_a_118_);
if (v_isSharedCheck_212_ == 0)
{
v___x_127_ = v_a_118_;
v_isShared_128_ = v_isSharedCheck_212_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_snd_125_);
lean_inc(v_fst_124_);
lean_dec(v_a_118_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_212_;
goto v_resetjp_126_;
}
v___jp_119_:
{
if (lean_obj_tag(v___y_120_) == 0)
{
lean_object* v_a_121_; 
v_a_121_ = lean_ctor_get(v___y_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref_known(v___y_120_, 1);
return v_a_121_;
}
else
{
lean_object* v_a_122_; 
v_a_122_ = lean_ctor_get(v___y_120_, 0);
lean_inc(v_a_122_);
lean_dec_ref_known(v___y_120_, 1);
v_a_118_ = v_a_122_;
goto _start;
}
}
v_resetjp_126_:
{
lean_object* v___y_130_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = lean_byte_array_size(v_bytes_116_);
v___x_134_ = lean_nat_dec_lt(v_snd_125_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_136_; 
if (v_isShared_128_ == 0)
{
v___x_136_ = v___x_127_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_fst_124_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_snd_125_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___y_139_; lean_object* v___y_140_; uint8_t v___y_141_; lean_object* v___y_147_; lean_object* v___y_148_; lean_object* v___y_149_; uint8_t v___y_150_; uint8_t v___x_167_; lean_object* v___y_169_; uint8_t v___y_170_; uint8_t v___y_190_; uint8_t v___x_207_; 
v___x_167_ = 0;
v___x_207_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_116_, v_snd_125_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = lean_box(v___x_167_);
v___x_209_ = l_outOfBounds___redArg(v___x_208_);
lean_dec(v___x_208_);
v___x_210_ = lean_unbox(v___x_209_);
lean_dec(v___x_209_);
v___y_190_ = v___x_210_;
goto v___jp_189_;
}
else
{
uint8_t v___x_211_; 
v___x_211_ = lean_byte_array_fget(v_bytes_116_, v_snd_125_);
v___y_190_ = v___x_211_;
goto v___jp_189_;
}
v___jp_138_:
{
lean_object* v___x_142_; uint32_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = lean_uint8_to_nat(v___y_141_);
v___x_143_ = l_Char_ofNat(v___x_142_);
v___x_144_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_143_);
v___x_145_ = lean_apply_2(v___y_140_, v___y_139_, v___x_144_);
v___y_120_ = v___x_145_;
goto v___jp_119_;
}
v___jp_146_:
{
lean_object* v___x_151_; uint32_t v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_uint8_to_nat(v___y_150_);
v___x_152_ = l_Char_ofNat(v___x_151_);
v___x_153_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_152_);
if (lean_obj_tag(v___x_153_) == 1)
{
lean_object* v_val_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
v_val_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_val_154_);
lean_dec_ref_known(v___x_153_, 1);
v___x_155_ = lean_unsigned_to_nat(16u);
v___x_156_ = lean_nat_mul(v___y_149_, v___x_155_);
lean_dec(v___y_149_);
v___x_157_ = lean_nat_add(v___x_156_, v_val_154_);
lean_dec(v_val_154_);
lean_dec(v___x_156_);
v___x_158_ = lean_uint8_of_nat(v___x_157_);
lean_dec(v___x_157_);
v___x_159_ = lean_byte_array_push(v_fst_124_, v___x_158_);
v___x_160_ = lean_unsigned_to_nat(3u);
v___x_161_ = lean_nat_add(v_snd_125_, v___x_160_);
lean_dec(v_snd_125_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_161_);
lean_ctor_set(v___x_127_, 0, v___x_159_);
v___x_163_ = v___x_127_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_161_);
v___x_163_ = v_reuseFailAlloc_165_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
v_a_118_ = v___x_163_;
goto _start;
}
}
else
{
lean_object* v___x_166_; 
lean_dec(v___y_149_);
lean_del_object(v___x_127_);
lean_dec(v_snd_125_);
lean_dec(v_fst_124_);
v___x_166_ = lean_apply_2(v___y_148_, v___y_147_, v___x_153_);
v___y_120_ = v___x_166_;
goto v___jp_119_;
}
}
v___jp_168_:
{
lean_object* v___x_171_; uint32_t v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_uint8_to_nat(v___y_170_);
v___x_172_ = l_Char_ofNat(v___x_171_);
v___x_173_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__1(v___x_172_);
if (lean_obj_tag(v___x_173_) == 1)
{
lean_object* v_val_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_val_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_val_174_);
v___x_175_ = lean_unsigned_to_nat(2u);
v___x_176_ = lean_nat_add(v_snd_125_, v___x_175_);
v___x_177_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_116_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
lean_dec(v___x_176_);
v___x_178_ = lean_box(v___x_167_);
v___x_179_ = l_outOfBounds___redArg(v___x_178_);
lean_dec(v___x_178_);
v___x_180_ = lean_unbox(v___x_179_);
lean_dec(v___x_179_);
v___y_147_ = v___x_173_;
v___y_148_ = v___y_169_;
v___y_149_ = v_val_174_;
v___y_150_ = v___x_180_;
goto v___jp_146_;
}
else
{
uint8_t v___x_181_; 
v___x_181_ = lean_byte_array_fget(v_bytes_116_, v___x_176_);
lean_dec(v___x_176_);
v___y_147_ = v___x_173_;
v___y_148_ = v___y_169_;
v___y_149_ = v_val_174_;
v___y_150_ = v___x_181_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
lean_del_object(v___x_127_);
lean_dec(v_fst_124_);
v___x_182_ = lean_unsigned_to_nat(2u);
v___x_183_ = lean_nat_add(v_snd_125_, v___x_182_);
lean_dec(v_snd_125_);
v___x_184_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_116_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
lean_dec(v___x_183_);
v___x_185_ = lean_box(v___x_167_);
v___x_186_ = l_outOfBounds___redArg(v___x_185_);
lean_dec(v___x_185_);
v___x_187_ = lean_unbox(v___x_186_);
lean_dec(v___x_186_);
v___y_139_ = v___x_173_;
v___y_140_ = v___y_169_;
v___y_141_ = v___x_187_;
goto v___jp_138_;
}
else
{
uint8_t v___x_188_; 
v___x_188_ = lean_byte_array_fget(v_bytes_116_, v___x_183_);
lean_dec(v___x_183_);
v___y_139_ = v___x_173_;
v___y_140_ = v___y_169_;
v___y_141_ = v___x_188_;
goto v___jp_138_;
}
}
}
v___jp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___f_193_; uint8_t v___x_194_; uint8_t v___x_195_; 
v___x_191_ = lean_box(v_plus_117_);
v___x_192_ = lean_box(v___y_190_);
v___f_193_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_193_, 0, v___x_191_);
lean_closure_set(v___f_193_, 1, v___x_192_);
v___x_194_ = 37;
v___x_195_ = lean_uint8_dec_eq(v___y_190_, v___x_194_);
if (v___x_195_ == 0)
{
lean_del_object(v___x_127_);
v___y_130_ = v___f_193_;
goto v___jp_129_;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_unsigned_to_nat(2u);
v___x_197_ = lean_nat_add(v_snd_125_, v___x_196_);
v___x_198_ = lean_nat_dec_lt(v___x_197_, v___x_133_);
lean_dec(v___x_197_);
if (v___x_198_ == 0)
{
lean_del_object(v___x_127_);
v___y_130_ = v___f_193_;
goto v___jp_129_;
}
else
{
lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
lean_inc(v_snd_125_);
lean_inc(v_fst_124_);
v___f_199_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_199_, 0, v___f_193_);
lean_closure_set(v___f_199_, 1, v_fst_124_);
lean_closure_set(v___f_199_, 2, v_snd_125_);
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = lean_nat_add(v_snd_125_, v___x_200_);
v___x_202_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___lam__0(v_bytes_116_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
lean_dec(v___x_201_);
v___x_203_ = lean_box(v___x_167_);
v___x_204_ = l_outOfBounds___redArg(v___x_203_);
lean_dec(v___x_203_);
v___x_205_ = lean_unbox(v___x_204_);
lean_dec(v___x_204_);
v___y_169_ = v___f_199_;
v___y_170_ = v___x_205_;
goto v___jp_168_;
}
else
{
uint8_t v___x_206_; 
v___x_206_ = lean_byte_array_fget(v_bytes_116_, v___x_201_);
lean_dec(v___x_201_);
v___y_169_ = v___f_199_;
v___y_170_ = v___x_206_;
goto v___jp_168_;
}
}
}
}
}
v___jp_129_:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_box(0);
v___x_132_ = lean_apply_3(v___y_130_, v___x_131_, v_fst_124_, v_snd_125_);
v___y_120_ = v___x_132_;
goto v___jp_119_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg___boxed(lean_object* v_bytes_213_, lean_object* v_plus_214_, lean_object* v_a_215_){
_start:
{
uint8_t v_plus_boxed_216_; lean_object* v_res_217_; 
v_plus_boxed_216_ = lean_unbox(v_plus_214_);
v_res_217_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_213_, v_plus_boxed_216_, v_a_215_);
lean_dec_ref(v_bytes_213_);
return v_res_217_;
}
}
static lean_object* _init_l_Lasm_Fetch_percentDecode___closed__0(void){
_start:
{
lean_object* v_i_218_; lean_object* v_out_219_; lean_object* v___x_220_; 
v_i_218_ = lean_unsigned_to_nat(0u);
v_out_219_ = l_ByteArray_empty;
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_out_219_);
lean_ctor_set(v___x_220_, 1, v_i_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode(lean_object* v_s_221_, uint8_t v_plus_222_){
_start:
{
lean_object* v_bytes_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v_fst_226_; uint8_t v___x_227_; 
v_bytes_223_ = lean_string_to_utf8(v_s_221_);
v___x_224_ = lean_obj_once(&l_Lasm_Fetch_percentDecode___closed__0, &l_Lasm_Fetch_percentDecode___closed__0_once, _init_l_Lasm_Fetch_percentDecode___closed__0);
v___x_225_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_223_, v_plus_222_, v___x_224_);
lean_dec_ref(v_bytes_223_);
v_fst_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_fst_226_);
lean_dec_ref(v___x_225_);
v___x_227_ = lean_string_validate_utf8(v_fst_226_);
if (v___x_227_ == 0)
{
lean_dec(v_fst_226_);
lean_inc_ref(v_s_221_);
return v_s_221_;
}
else
{
lean_object* v___x_228_; 
v___x_228_ = lean_string_from_utf8_unchecked(v_fst_226_);
return v___x_228_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_percentDecode___boxed(lean_object* v_s_229_, lean_object* v_plus_230_){
_start:
{
uint8_t v_plus_boxed_231_; lean_object* v_res_232_; 
v_plus_boxed_231_ = lean_unbox(v_plus_230_);
v_res_232_ = l_Lasm_Fetch_percentDecode(v_s_229_, v_plus_boxed_231_);
lean_dec_ref(v_s_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(lean_object* v_bytes_233_, uint8_t v_plus_234_, lean_object* v_inst_235_, lean_object* v_a_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___redArg(v_bytes_233_, v_plus_234_, v_a_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0___boxed(lean_object* v_bytes_238_, lean_object* v_plus_239_, lean_object* v_inst_240_, lean_object* v_a_241_){
_start:
{
uint8_t v_plus_boxed_242_; lean_object* v_res_243_; 
v_plus_boxed_242_ = lean_unbox(v_plus_239_);
v_res_243_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_percentDecode_spec__0(v_bytes_238_, v_plus_boxed_242_, v_inst_240_, v_a_241_);
lean_dec_ref(v_bytes_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(lean_object* v_s_244_, lean_object* v_pos_245_){
_start:
{
lean_object* v_str_246_; lean_object* v_startInclusive_247_; lean_object* v_endExclusive_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v_decide_252_; 
v_str_246_ = lean_ctor_get(v_s_244_, 0);
v_startInclusive_247_ = lean_ctor_get(v_s_244_, 1);
v_endExclusive_248_ = lean_ctor_get(v_s_244_, 2);
v___x_249_ = lean_nat_add(v_startInclusive_247_, v_pos_245_);
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_nat_sub(v_endExclusive_248_, v___x_249_);
v_decide_252_ = lean_nat_dec_eq(v___x_250_, v___x_251_);
lean_dec(v___x_251_);
if (v_decide_252_ == 0)
{
uint32_t v___x_253_; uint32_t v___x_254_; uint8_t v___x_255_; 
v___x_253_ = lean_string_utf8_get_fast(v_str_246_, v___x_249_);
v___x_254_ = 63;
v___x_255_ = lean_uint32_dec_eq(v___x_253_, v___x_254_);
if (v___x_255_ == 0)
{
uint32_t v___x_256_; uint8_t v___x_257_; 
v___x_256_ = 35;
v___x_257_ = lean_uint32_dec_eq(v___x_253_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_258_ = lean_string_utf8_next_fast(v_str_246_, v___x_249_);
v___x_259_ = lean_nat_sub(v___x_258_, v___x_249_);
lean_dec(v___x_249_);
v___x_260_ = lean_nat_add(v_pos_245_, v___x_259_);
lean_dec(v___x_259_);
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_nat_add(v_pos_245_, v___x_261_);
v___x_263_ = lean_nat_dec_le(v___x_262_, v___x_260_);
lean_dec(v___x_262_);
if (v___x_263_ == 0)
{
lean_dec(v___x_260_);
return v_pos_245_;
}
else
{
lean_dec(v_pos_245_);
v_pos_245_ = v___x_260_;
goto _start;
}
}
else
{
lean_dec(v___x_249_);
return v_pos_245_;
}
}
else
{
lean_dec(v___x_249_);
return v_pos_245_;
}
}
else
{
lean_dec(v___x_249_);
return v_pos_245_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0___boxed(lean_object* v_s_265_, lean_object* v_pos_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v_s_265_, v_pos_266_);
lean_dec_ref(v_s_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_270_){
_start:
{
lean_object* v___y_272_; lean_object* v_url_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_url_282_ = lean_ctor_get(v_r_270_, 1);
lean_inc_ref(v_url_282_);
lean_dec_ref(v_r_270_);
v___x_283_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__1));
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_box(0);
v___x_286_ = l_String_splitOnAux(v_url_282_, v___x_283_, v___x_284_, v___x_284_, v___x_284_, v___x_285_);
if (lean_obj_tag(v___x_286_) == 1)
{
lean_object* v_tail_287_; 
v_tail_287_ = lean_ctor_get(v___x_286_, 1);
lean_inc(v_tail_287_);
lean_dec_ref_known(v___x_286_, 2);
if (lean_obj_tag(v_tail_287_) == 1)
{
lean_object* v_tail_288_; 
v_tail_288_ = lean_ctor_get(v_tail_287_, 1);
if (lean_obj_tag(v_tail_288_) == 0)
{
lean_object* v_head_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec_ref(v_url_282_);
v_head_289_ = lean_ctor_get(v_tail_287_, 0);
lean_inc_n(v_head_289_, 2);
lean_dec_ref_known(v_tail_287_, 2);
v___x_290_ = lean_string_utf8_byte_size(v_head_289_);
v___x_291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_291_, 0, v_head_289_);
lean_ctor_set(v___x_291_, 1, v___x_284_);
lean_ctor_set(v___x_291_, 2, v___x_290_);
v___x_292_ = l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(v___x_291_, v___x_284_);
lean_dec_ref_known(v___x_291_, 3);
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v_head_289_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
lean_ctor_set(v___x_293_, 2, v___x_290_);
v___x_294_ = l_String_Slice_toString(v___x_293_);
lean_dec_ref_known(v___x_293_, 3);
v___y_272_ = v___x_294_;
goto v___jp_271_;
}
else
{
lean_dec_ref_known(v_tail_287_, 2);
v___y_272_ = v_url_282_;
goto v___jp_271_;
}
}
else
{
lean_dec(v_tail_287_);
v___y_272_ = v_url_282_;
goto v___jp_271_;
}
}
else
{
lean_dec(v___x_286_);
v___y_272_ = v_url_282_;
goto v___jp_271_;
}
v___jp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v_p_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_273_ = lean_unsigned_to_nat(0u);
v___x_274_ = lean_string_utf8_byte_size(v___y_272_);
lean_inc_ref(v___y_272_);
v___x_275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_275_, 0, v___y_272_);
lean_ctor_set(v___x_275_, 1, v___x_273_);
lean_ctor_set(v___x_275_, 2, v___x_274_);
v___x_276_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_path_spec__0(v___x_275_, v___x_273_);
lean_dec_ref_known(v___x_275_, 3);
v___x_277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_277_, 0, v___y_272_);
lean_ctor_set(v___x_277_, 1, v___x_273_);
lean_ctor_set(v___x_277_, 2, v___x_276_);
v_p_278_ = l_String_Slice_toString(v___x_277_);
lean_dec_ref_known(v___x_277_, 3);
v___x_279_ = lean_string_utf8_byte_size(v_p_278_);
v___x_280_ = lean_nat_dec_eq(v___x_279_, v___x_273_);
if (v___x_280_ == 0)
{
return v_p_278_;
}
else
{
lean_object* v___x_281_; 
lean_dec_ref(v_p_278_);
v___x_281_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_295_, lean_object* v_pos_296_){
_start:
{
lean_object* v_str_297_; lean_object* v_startInclusive_298_; lean_object* v_endExclusive_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v_decide_303_; 
v_str_297_ = lean_ctor_get(v_s_295_, 0);
v_startInclusive_298_ = lean_ctor_get(v_s_295_, 1);
v_endExclusive_299_ = lean_ctor_get(v_s_295_, 2);
v___x_300_ = lean_nat_add(v_startInclusive_298_, v_pos_296_);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_nat_sub(v_endExclusive_299_, v___x_300_);
v_decide_303_ = lean_nat_dec_eq(v___x_301_, v___x_302_);
lean_dec(v___x_302_);
if (v_decide_303_ == 0)
{
uint32_t v___x_304_; uint32_t v___x_305_; uint8_t v___x_306_; 
v___x_304_ = lean_string_utf8_get_fast(v_str_297_, v___x_300_);
v___x_305_ = 35;
v___x_306_ = lean_uint32_dec_eq(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_307_ = lean_string_utf8_next_fast(v_str_297_, v___x_300_);
v___x_308_ = lean_nat_sub(v___x_307_, v___x_300_);
lean_dec(v___x_300_);
v___x_309_ = lean_nat_add(v_pos_296_, v___x_308_);
lean_dec(v___x_308_);
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v_pos_296_, v___x_310_);
v___x_312_ = lean_nat_dec_le(v___x_311_, v___x_309_);
lean_dec(v___x_311_);
if (v___x_312_ == 0)
{
lean_dec(v___x_309_);
return v_pos_296_;
}
else
{
lean_dec(v_pos_296_);
v_pos_296_ = v___x_309_;
goto _start;
}
}
else
{
lean_dec(v___x_300_);
return v_pos_296_;
}
}
else
{
lean_dec(v___x_300_);
return v_pos_296_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_314_, lean_object* v_pos_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_314_, v_pos_315_);
lean_dec_ref(v_s_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_318_){
_start:
{
lean_object* v_url_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_url_319_ = lean_ctor_get(v_r_318_, 1);
v___x_320_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = lean_box(0);
v___x_323_ = l_String_splitOnAux(v_url_319_, v___x_320_, v___x_321_, v___x_321_, v___x_321_, v___x_322_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v___x_324_; 
v___x_324_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_324_;
}
else
{
lean_object* v_tail_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_tail_325_ = lean_ctor_get(v___x_323_, 1);
lean_inc(v_tail_325_);
lean_dec_ref_known(v___x_323_, 2);
v___x_326_ = l_String_intercalate(v___x_320_, v_tail_325_);
v___x_327_ = lean_string_utf8_byte_size(v___x_326_);
lean_inc_ref(v___x_326_);
v___x_328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set(v___x_328_, 1, v___x_321_);
lean_ctor_set(v___x_328_, 2, v___x_327_);
v___x_329_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_328_, v___x_321_);
lean_dec_ref_known(v___x_328_, 3);
v___x_330_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_330_, 0, v___x_326_);
lean_ctor_set(v___x_330_, 1, v___x_321_);
lean_ctor_set(v___x_330_, 2, v___x_329_);
v___x_331_ = l_String_Slice_toString(v___x_330_);
lean_dec_ref_known(v___x_330_, 3);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_Fetch_Request_query(v_r_332_);
lean_dec_ref(v_r_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
if (lean_obj_tag(v_a_335_) == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_array_to_list(v_a_336_);
return v___x_337_;
}
else
{
lean_object* v_head_338_; lean_object* v_tail_339_; lean_object* v_val_341_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_head_338_ = lean_ctor_get(v_a_335_, 0);
v_tail_339_ = lean_ctor_get(v_a_335_, 1);
v___x_344_ = lean_string_utf8_byte_size(v_head_338_);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lean_nat_dec_eq(v___x_344_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_348_ = lean_box(0);
v___x_349_ = l_String_splitOnAux(v_head_338_, v___x_347_, v___x_345_, v___x_345_, v___x_345_, v___x_348_);
if (lean_obj_tag(v___x_349_) == 0)
{
v_a_335_ = v_tail_339_;
goto _start;
}
else
{
lean_object* v_head_351_; lean_object* v_tail_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_368_; 
v_head_351_ = lean_ctor_get(v___x_349_, 0);
v_tail_352_ = lean_ctor_get(v___x_349_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_368_ == 0)
{
v___x_354_ = v___x_349_;
v_isShared_355_ = v_isSharedCheck_368_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_tail_352_);
lean_inc(v_head_351_);
lean_dec(v___x_349_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_368_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
uint8_t v___x_356_; 
v___x_356_ = 1;
if (lean_obj_tag(v_tail_352_) == 0)
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_357_ = l_Lasm_Fetch_percentDecode(v_head_351_, v___x_356_);
lean_dec(v_head_351_);
v___x_358_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 0);
lean_ctor_set(v___x_354_, 1, v___x_358_);
lean_ctor_set(v___x_354_, 0, v___x_357_);
v___x_360_ = v___x_354_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v_val_341_ = v___x_360_;
goto v___jp_340_;
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_362_ = l_Lasm_Fetch_percentDecode(v_head_351_, v___x_356_);
lean_dec(v_head_351_);
v___x_363_ = l_String_intercalate(v___x_347_, v_tail_352_);
v___x_364_ = l_Lasm_Fetch_percentDecode(v___x_363_, v___x_356_);
lean_dec_ref(v___x_363_);
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 0);
lean_ctor_set(v___x_354_, 1, v___x_364_);
lean_ctor_set(v___x_354_, 0, v___x_362_);
v___x_366_ = v___x_354_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
v_val_341_ = v___x_366_;
goto v___jp_340_;
}
}
}
}
}
else
{
v_a_335_ = v_tail_339_;
goto _start;
}
v___jp_340_:
{
lean_object* v___x_342_; 
v___x_342_ = lean_array_push(v_a_336_, v_val_341_);
v_a_335_ = v_tail_339_;
v_a_336_ = v___x_342_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_370_, v_a_371_);
lean_dec(v_a_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_375_ = l_Lasm_Fetch_Request_query(v_r_374_);
v___x_376_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_377_ = lean_unsigned_to_nat(0u);
v___x_378_ = lean_box(0);
v___x_379_ = l_String_splitOnAux(v___x_375_, v___x_376_, v___x_377_, v___x_377_, v___x_377_, v___x_378_);
lean_dec_ref(v___x_375_);
v___x_380_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_381_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_379_, v___x_380_);
lean_dec(v___x_379_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_Fetch_Request_queryParams(v_r_382_);
lean_dec_ref(v_r_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
if (lean_obj_tag(v_x_385_) == 0)
{
lean_object* v___x_386_; 
v___x_386_ = lean_box(0);
return v___x_386_;
}
else
{
lean_object* v_head_387_; lean_object* v_tail_388_; lean_object* v_fst_389_; lean_object* v_snd_390_; uint8_t v___x_391_; 
v_head_387_ = lean_ctor_get(v_x_385_, 0);
v_tail_388_ = lean_ctor_get(v_x_385_, 1);
v_fst_389_ = lean_ctor_get(v_head_387_, 0);
v_snd_390_ = lean_ctor_get(v_head_387_, 1);
v___x_391_ = lean_string_dec_eq(v_x_384_, v_fst_389_);
if (v___x_391_ == 0)
{
v_x_385_ = v_tail_388_;
goto _start;
}
else
{
lean_object* v___x_393_; 
lean_inc(v_snd_390_);
v___x_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_393_, 0, v_snd_390_);
return v___x_393_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_394_, lean_object* v_x_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_394_, v_x_395_);
lean_dec(v_x_395_);
lean_dec_ref(v_x_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_397_, lean_object* v_name_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = l_Lasm_Fetch_Request_queryParams(v_r_397_);
v___x_400_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_398_, v___x_399_);
lean_dec(v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_401_, lean_object* v_name_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_401_, v_name_402_);
lean_dec_ref(v_name_402_);
lean_dec_ref(v_r_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_404_, lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_405_, v_x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_408_, lean_object* v_x_409_, lean_object* v_x_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_408_, v_x_409_, v_x_410_);
lean_dec(v_x_410_);
lean_dec_ref(v_x_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
if (lean_obj_tag(v_a_412_) == 0)
{
lean_object* v___x_414_; 
v___x_414_ = l_List_reverse___redArg(v_a_413_);
return v___x_414_;
}
else
{
lean_object* v_head_415_; lean_object* v_tail_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_426_; 
v_head_415_ = lean_ctor_get(v_a_412_, 0);
v_tail_416_ = lean_ctor_get(v_a_412_, 1);
v_isSharedCheck_426_ = !lean_is_exclusive(v_a_412_);
if (v_isSharedCheck_426_ == 0)
{
v___x_418_ = v_a_412_;
v_isShared_419_ = v_isSharedCheck_426_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_tail_416_);
lean_inc(v_head_415_);
lean_dec(v_a_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_426_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_420_ = 0;
v___x_421_ = l_Lasm_Fetch_percentDecode(v_head_415_, v___x_420_);
lean_dec(v_head_415_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v_a_413_);
lean_ctor_set(v___x_418_, 0, v___x_421_);
v___x_423_ = v___x_418_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_a_413_);
v___x_423_ = v_reuseFailAlloc_425_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
v_a_412_ = v_tail_416_;
v_a_413_ = v___x_423_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
if (lean_obj_tag(v_a_427_) == 0)
{
lean_object* v___x_429_; 
v___x_429_ = l_List_reverse___redArg(v_a_428_);
return v___x_429_;
}
else
{
lean_object* v_head_430_; lean_object* v_tail_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_443_; 
v_head_430_ = lean_ctor_get(v_a_427_, 0);
v_tail_431_ = lean_ctor_get(v_a_427_, 1);
v_isSharedCheck_443_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_443_ == 0)
{
v___x_433_ = v_a_427_;
v_isShared_434_ = v_isSharedCheck_443_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_tail_431_);
lean_inc(v_head_430_);
lean_dec(v_a_427_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_443_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_435_ = lean_string_utf8_byte_size(v_head_430_);
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_nat_dec_eq(v___x_435_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_439_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 1, v_a_428_);
v___x_439_ = v___x_433_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_head_430_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_a_428_);
v___x_439_ = v_reuseFailAlloc_441_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
v_a_427_ = v_tail_431_;
v_a_428_ = v___x_439_;
goto _start;
}
}
else
{
lean_del_object(v___x_433_);
lean_dec(v_head_430_);
v_a_427_ = v_tail_431_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_444_){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_445_ = l_Lasm_Fetch_Request_path(v_r_444_);
v___x_446_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_box(0);
v___x_449_ = l_String_splitOnAux(v___x_445_, v___x_446_, v___x_447_, v___x_447_, v___x_447_, v___x_448_);
lean_dec_ref(v___x_445_);
v___x_450_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_449_, v___x_448_);
v___x_451_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_450_, v___x_448_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_455_, lean_object* v_as_456_, size_t v_sz_457_, size_t v_i_458_, lean_object* v_b_459_){
_start:
{
uint8_t v___x_460_; 
v___x_460_ = lean_usize_dec_lt(v_i_458_, v_sz_457_);
if (v___x_460_ == 0)
{
lean_inc_ref(v_b_459_);
return v_b_459_;
}
else
{
lean_object* v_a_461_; lean_object* v_fst_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_a_461_ = lean_array_uget_borrowed(v_as_456_, v_i_458_);
v_fst_462_ = lean_ctor_get(v_a_461_, 0);
v___x_463_ = lean_box(0);
lean_inc(v_fst_462_);
v___x_464_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_462_);
v___x_465_ = lean_string_dec_eq(v___x_464_, v_n_455_);
lean_dec_ref(v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; size_t v___x_467_; size_t v___x_468_; 
v___x_466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_add(v_i_458_, v___x_467_);
v_i_458_ = v___x_468_;
v_b_459_ = v___x_466_;
goto _start;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
lean_inc(v_a_461_);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v_a_461_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v___x_463_);
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_473_, lean_object* v_as_474_, lean_object* v_sz_475_, lean_object* v_i_476_, lean_object* v_b_477_){
_start:
{
size_t v_sz_boxed_478_; size_t v_i_boxed_479_; lean_object* v_res_480_; 
v_sz_boxed_478_ = lean_unbox_usize(v_sz_475_);
lean_dec(v_sz_475_);
v_i_boxed_479_ = lean_unbox_usize(v_i_476_);
lean_dec(v_i_476_);
v_res_480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_473_, v_as_474_, v_sz_boxed_478_, v_i_boxed_479_, v_b_477_);
lean_dec_ref(v_b_477_);
lean_dec_ref(v_as_474_);
lean_dec_ref(v_n_473_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_481_, lean_object* v_name_482_){
_start:
{
lean_object* v_headers_483_; lean_object* v_n_484_; lean_object* v___x_485_; lean_object* v___x_486_; size_t v_sz_487_; size_t v___x_488_; lean_object* v___x_489_; lean_object* v_fst_490_; 
v_headers_483_ = lean_ctor_get(v_r_481_, 2);
v_n_484_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_482_);
v___x_485_ = lean_box(0);
v___x_486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_487_ = lean_array_size(v_headers_483_);
v___x_488_ = ((size_t)0ULL);
v___x_489_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_484_, v_headers_483_, v_sz_487_, v___x_488_, v___x_486_);
lean_dec_ref(v_n_484_);
v_fst_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_fst_490_);
lean_dec_ref(v___x_489_);
if (lean_obj_tag(v_fst_490_) == 0)
{
return v___x_485_;
}
else
{
lean_object* v_val_491_; 
v_val_491_ = lean_ctor_get(v_fst_490_, 0);
lean_inc(v_val_491_);
lean_dec_ref_known(v_fst_490_, 1);
if (lean_obj_tag(v_val_491_) == 0)
{
return v___x_485_;
}
else
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_val_492_ = lean_ctor_get(v_val_491_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v_val_491_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v_val_491_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v_val_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_snd_496_; lean_object* v___x_498_; 
v_snd_496_ = lean_ctor_get(v_val_492_, 1);
lean_inc(v_snd_496_);
lean_dec(v_val_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v_snd_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_snd_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_501_, lean_object* v_name_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lasm_Fetch_Request_header_x3f(v_r_501_, v_name_502_);
lean_dec_ref(v_r_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_504_){
_start:
{
lean_object* v_body_505_; uint8_t v___x_506_; 
v_body_505_ = lean_ctor_get(v_r_504_, 3);
lean_inc_ref(v_body_505_);
lean_dec_ref(v_r_504_);
v___x_506_ = lean_string_validate_utf8(v_body_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec_ref(v_body_505_);
v___x_507_ = lean_box(0);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_string_from_utf8_unchecked(v_body_505_);
v___x_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lasm_Fetch_Request_text_x3f(v_r_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v___x_512_; 
v___x_512_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_512_;
}
else
{
lean_object* v_val_513_; 
v_val_513_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_val_513_);
lean_dec_ref_known(v___x_511_, 1);
return v_val_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_515_, lean_object* v_contentType_516_, uint16_t v_status_517_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_518_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
lean_ctor_set(v___x_519_, 1, v_contentType_516_);
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = lean_mk_empty_array_with_capacity(v___x_520_);
v___x_522_ = lean_array_push(v___x_521_, v___x_519_);
v___x_523_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v_body_515_);
lean_ctor_set_uint16(v___x_523_, sizeof(void*)*2, v_status_517_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_524_, lean_object* v_contentType_525_, lean_object* v_status_526_){
_start:
{
uint16_t v_status_boxed_527_; lean_object* v_res_528_; 
v_status_boxed_527_ = lean_unbox(v_status_526_);
v_res_528_ = l_Lasm_Fetch_Response_withBody(v_body_524_, v_contentType_525_, v_status_boxed_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_530_, uint16_t v_status_531_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_string_to_utf8(v_body_530_);
v___x_533_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_534_ = l_Lasm_Fetch_Response_withBody(v___x_532_, v___x_533_, v_status_531_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_535_, lean_object* v_status_536_){
_start:
{
uint16_t v_status_boxed_537_; lean_object* v_res_538_; 
v_status_boxed_537_ = lean_unbox(v_status_536_);
v_res_538_ = l_Lasm_Fetch_Response_text(v_body_535_, v_status_boxed_537_);
lean_dec_ref(v_body_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_540_, uint16_t v_status_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = lean_string_to_utf8(v_body_540_);
v___x_543_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_544_ = l_Lasm_Fetch_Response_withBody(v___x_542_, v___x_543_, v_status_541_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_545_, lean_object* v_status_546_){
_start:
{
uint16_t v_status_boxed_547_; lean_object* v_res_548_; 
v_status_boxed_547_ = lean_unbox(v_status_546_);
v_res_548_ = l_Lasm_Fetch_Response_html(v_body_545_, v_status_boxed_547_);
lean_dec_ref(v_body_545_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_550_, uint16_t v_status_551_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_string_to_utf8(v_body_550_);
v___x_553_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_554_ = l_Lasm_Fetch_Response_withBody(v___x_552_, v___x_553_, v_status_551_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_555_, lean_object* v_status_556_){
_start:
{
uint16_t v_status_boxed_557_; lean_object* v_res_558_; 
v_status_boxed_557_ = lean_unbox(v_status_556_);
v_res_558_ = l_Lasm_Fetch_Response_json(v_body_555_, v_status_boxed_557_);
lean_dec_ref(v_body_555_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_559_, lean_object* v_contentType_560_, uint16_t v_status_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lasm_Fetch_Response_withBody(v_body_559_, v_contentType_560_, v_status_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_563_, lean_object* v_contentType_564_, lean_object* v_status_565_){
_start:
{
uint16_t v_status_boxed_566_; lean_object* v_res_567_; 
v_status_boxed_566_ = lean_unbox(v_status_565_);
v_res_567_ = l_Lasm_Fetch_Response_bytes(v_body_563_, v_contentType_564_, v_status_boxed_566_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_569_, uint16_t v_status_570_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_571_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v_location_569_);
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_mk_empty_array_with_capacity(v___x_573_);
v___x_575_ = lean_array_push(v___x_574_, v___x_572_);
v___x_576_ = l_ByteArray_empty;
v___x_577_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
lean_ctor_set_uint16(v___x_577_, sizeof(void*)*2, v_status_570_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_578_, lean_object* v_status_579_){
_start:
{
uint16_t v_status_boxed_580_; lean_object* v_res_581_; 
v_status_boxed_580_ = lean_unbox(v_status_579_);
v_res_581_ = l_Lasm_Fetch_Response_redirect(v_location_578_, v_status_boxed_580_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_584_ = l_ByteArray_empty;
v___x_585_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
lean_ctor_set_uint16(v___x_585_, sizeof(void*)*2, v_status_582_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_586_){
_start:
{
uint16_t v_status_boxed_587_; lean_object* v_res_588_; 
v_status_boxed_587_ = lean_unbox(v_status_586_);
v_res_588_ = l_Lasm_Fetch_Response_empty(v_status_boxed_587_);
return v_res_588_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = 404;
v___x_591_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_592_ = l_Lasm_Fetch_Response_text(v___x_591_, v___x_590_);
return v___x_592_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_594_, lean_object* v_name_595_, lean_object* v_value_596_){
_start:
{
uint16_t v_status_597_; lean_object* v_headers_598_; lean_object* v_body_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_608_; 
v_status_597_ = lean_ctor_get_uint16(v_r_594_, sizeof(void*)*2);
v_headers_598_ = lean_ctor_get(v_r_594_, 0);
v_body_599_ = lean_ctor_get(v_r_594_, 1);
v_isSharedCheck_608_ = !lean_is_exclusive(v_r_594_);
if (v_isSharedCheck_608_ == 0)
{
v___x_601_ = v_r_594_;
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_body_599_);
lean_inc(v_headers_598_);
lean_dec(v_r_594_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v_name_595_);
lean_ctor_set(v___x_603_, 1, v_value_596_);
v___x_604_ = lean_array_push(v_headers_598_, v___x_603_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_body_599_);
lean_ctor_set_uint16(v_reuseFailAlloc_607_, sizeof(void*)*2, v_status_597_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_609_, uint16_t v_status_610_){
_start:
{
lean_object* v_headers_611_; lean_object* v_body_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_headers_611_ = lean_ctor_get(v_r_609_, 0);
v_body_612_ = lean_ctor_get(v_r_609_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_r_609_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v_r_609_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_body_612_);
lean_inc(v_headers_611_);
lean_dec(v_r_609_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_headers_611_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_body_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_ctor_set_uint16(v___x_617_, sizeof(void*)*2, v_status_610_);
return v___x_617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_620_, lean_object* v_status_621_){
_start:
{
uint16_t v_status_boxed_622_; lean_object* v_res_623_; 
v_status_boxed_622_ = lean_unbox(v_status_621_);
v_res_623_ = l_Lasm_Fetch_Response_withStatus(v_r_620_, v_status_boxed_622_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_624_){
_start:
{
lean_object* v_r_627_; 
if (lean_obj_tag(v_x_624_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
v_a_630_ = lean_ctor_get(v_x_624_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_624_);
if (v_isSharedCheck_638_ == 0)
{
v___x_632_ = v_x_624_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v_x_624_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_637_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v_a_640_; 
v_a_639_ = lean_ctor_get(v_x_624_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v_x_624_, 1);
v_a_640_ = lean_ctor_get(v_a_639_, 0);
lean_inc(v_a_640_);
lean_dec(v_a_639_);
v_r_627_ = v_a_640_;
goto v___jp_626_;
}
v___jp_626_:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v_r_627_);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lasm_Fetch_respond___lam__0(v_x_641_);
return v_res_643_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_645_ = 500;
v___x_646_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_647_ = l_Lasm_Fetch_Response_text(v___x_646_, v___x_645_);
return v___x_647_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_654_){
_start:
{
if (lean_obj_tag(v_x_654_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_664_; 
v_a_656_ = lean_ctor_get(v_x_654_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_664_ == 0)
{
v___x_658_ = v_x_654_;
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v_x_654_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_662_; 
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
return v___x_662_;
}
}
}
else
{
lean_object* v___x_665_; 
lean_dec_ref_known(v_x_654_, 1);
v___x_665_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_666_, lean_object* v___y_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_Fetch_respond___lam__1(v_x_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_669_){
_start:
{
if (lean_obj_tag(v_x_669_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_a_671_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v_x_669_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v_x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_678_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_689_; 
v_a_680_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_689_ == 0)
{
v___x_682_ = v_x_669_;
v_isShared_683_ = v_isSharedCheck_689_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v_x_669_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_689_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_688_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lasm_Fetch_respond___lam__2(v_x_690_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_696_, lean_object* v_req_697_, lean_object* v___f_698_, lean_object* v_x_699_){
_start:
{
if (lean_obj_tag(v_x_699_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_730_; 
v_a_701_ = lean_ctor_get(v_x_699_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_699_);
if (v_isSharedCheck_730_ == 0)
{
v___x_703_ = v_x_699_;
v_isShared_704_ = v_isSharedCheck_730_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v_x_699_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_730_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v_val_718_; lean_object* v___x_721_; 
v___x_705_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_706_ = lean_string_append(v___x_705_, v_method_696_);
v___x_707_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = l_Lasm_Fetch_Request_path(v_req_697_);
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
lean_dec_ref(v___x_709_);
v___x_711_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_712_ = lean_string_append(v___x_710_, v___x_711_);
v___x_713_ = lean_io_error_to_string(v_a_701_);
v___x_714_ = lean_string_append(v___x_712_, v___x_713_);
lean_dec_ref(v___x_713_);
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = 0;
v___x_721_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_714_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
if (v_isShared_704_ == 0)
{
lean_ctor_set_tag(v___x_703_, 1);
lean_ctor_set(v___x_703_, 0, v_a_722_);
v___x_724_ = v___x_703_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v_val_718_ = v___x_724_;
goto v___jp_717_;
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; 
v_a_726_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_721_, 1);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v_a_726_);
v___x_728_ = v___x_703_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v_val_718_ = v___x_728_;
goto v___jp_717_;
}
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v_val_718_);
v___x_720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_715_, v___x_716_, v___x_719_, v___f_698_);
return v___x_720_;
}
}
}
else
{
lean_object* v___x_731_; 
lean_dec_ref(v___f_698_);
lean_dec_ref(v_req_697_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v_x_699_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_732_, lean_object* v_req_733_, lean_object* v___f_734_, lean_object* v_x_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lasm_Fetch_respond___lam__3(v_method_732_, v_req_733_, v___f_734_, v_x_735_);
lean_dec_ref(v_method_732_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_743_, lean_object* v_req_744_){
_start:
{
lean_object* v_method_746_; lean_object* v_url_747_; lean_object* v_headers_748_; lean_object* v_body_749_; lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___y_755_; lean_object* v___x_762_; uint8_t v___x_763_; 
v_method_746_ = lean_ctor_get(v_req_744_, 0);
v_url_747_ = lean_ctor_get(v_req_744_, 1);
v_headers_748_ = lean_ctor_get(v_req_744_, 2);
v_body_749_ = lean_ctor_get(v_req_744_, 3);
v___f_750_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_751_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_752_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_744_);
lean_inc_ref(v_method_746_);
v___f_753_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_753_, 0, v_method_746_);
lean_closure_set(v___f_753_, 1, v_req_744_);
lean_closure_set(v___f_753_, 2, v___f_751_);
v___x_762_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_763_ = lean_string_dec_eq(v_method_746_, v___x_762_);
if (v___x_763_ == 0)
{
v___y_755_ = v_req_744_;
goto v___jp_754_;
}
else
{
lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
lean_inc_ref(v_body_749_);
lean_inc_ref(v_headers_748_);
lean_inc_ref(v_url_747_);
v_isSharedCheck_771_ = !lean_is_exclusive(v_req_744_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; lean_object* v_unused_773_; lean_object* v_unused_774_; lean_object* v_unused_775_; 
v_unused_772_ = lean_ctor_get(v_req_744_, 3);
lean_dec(v_unused_772_);
v_unused_773_ = lean_ctor_get(v_req_744_, 2);
lean_dec(v_unused_773_);
v_unused_774_ = lean_ctor_get(v_req_744_, 1);
lean_dec(v_unused_774_);
v_unused_775_ = lean_ctor_get(v_req_744_, 0);
lean_dec(v_unused_775_);
v___x_765_ = v_req_744_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_dec(v_req_744_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_767_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_767_);
v___x_769_ = v___x_765_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_url_747_);
lean_ctor_set(v_reuseFailAlloc_770_, 2, v_headers_748_);
lean_ctor_set(v_reuseFailAlloc_770_, 3, v_body_749_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
v___y_755_ = v___x_769_;
goto v___jp_754_;
}
}
}
v___jp_754_:
{
lean_object* v___x_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_756_ = lean_unsigned_to_nat(0u);
v___x_757_ = 0;
v___x_758_ = lean_apply_2(v_handler_743_, v___y_755_, lean_box(0));
v___x_759_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_756_, v___x_757_, v___x_758_, v___f_752_);
v___x_760_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_756_, v___x_757_, v___x_759_, v___f_753_);
v___x_761_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_756_, v___x_757_, v___x_760_, v___f_750_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_776_, lean_object* v_req_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_Fetch_respond(v_handler_776_, v_req_777_);
return v_res_779_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_780_, uint16_t v_status_781_){
_start:
{
lean_object* v___x_782_; uint8_t v___x_783_; 
v___x_782_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_783_ = lean_string_dec_eq(v_method_780_, v___x_782_);
if (v___x_783_ == 0)
{
uint16_t v___x_784_; uint8_t v___x_785_; 
v___x_784_ = 101;
v___x_785_ = lean_uint16_dec_eq(v_status_781_, v___x_784_);
if (v___x_785_ == 0)
{
uint16_t v___x_786_; uint8_t v___x_787_; 
v___x_786_ = 204;
v___x_787_ = lean_uint16_dec_eq(v_status_781_, v___x_786_);
if (v___x_787_ == 0)
{
uint16_t v___x_788_; uint8_t v___x_789_; 
v___x_788_ = 205;
v___x_789_ = lean_uint16_dec_eq(v_status_781_, v___x_788_);
if (v___x_789_ == 0)
{
uint16_t v___x_790_; uint8_t v___x_791_; 
v___x_790_ = 304;
v___x_791_ = lean_uint16_dec_eq(v_status_781_, v___x_790_);
return v___x_791_;
}
else
{
return v___x_789_;
}
}
else
{
return v___x_787_;
}
}
else
{
return v___x_785_;
}
}
else
{
return v___x_783_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_792_, lean_object* v_status_793_){
_start:
{
uint16_t v_status_boxed_794_; uint8_t v_res_795_; lean_object* v_r_796_; 
v_status_boxed_794_ = lean_unbox(v_status_793_);
v_res_795_ = l_Lasm_Fetch_bodyless(v_method_792_, v_status_boxed_794_);
lean_dec_ref(v_method_792_);
v_r_796_ = lean_box(v_res_795_);
return v_r_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_798_){
_start:
{
uint32_t v_res_799_; lean_object* v_r_800_; 
v_res_799_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_798_);
v_r_800_ = lean_box_uint32(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = lasm_fetch_take_request();
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_808_, lean_object* v_headers_809_, lean_object* v_body_810_, lean_object* v_a_00___x40___internal___hyg_811_){
_start:
{
uint16_t v_status_boxed_812_; lean_object* v_res_813_; 
v_status_boxed_812_ = lean_unbox(v_status_808_);
v_res_813_ = lasm_fetch_send_response(v_status_boxed_812_, v_headers_809_, v_body_810_);
lean_dec_ref(v_body_810_);
lean_dec_ref(v_headers_809_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_814_){
_start:
{
if (lean_obj_tag(v_x_814_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_824_; 
v_a_816_ = lean_ctor_get(v_x_814_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v_x_814_);
if (v_isSharedCheck_824_ == 0)
{
v___x_818_ = v_x_814_;
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v_x_814_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_823_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_822_; 
v___x_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
return v___x_822_;
}
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_835_; 
v_a_825_ = lean_ctor_get(v_x_814_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v_x_814_);
if (v_isSharedCheck_835_ == 0)
{
v___x_827_ = v_x_814_;
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v_x_814_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_829_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_830_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_830_, 0, v_a_825_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_830_);
v___x_832_ = v___x_827_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_834_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_833_; 
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
return v___x_833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_836_);
return v_res_838_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0(void){
_start:
{
uint8_t v___x_839_; uint64_t v___x_840_; 
v___x_839_ = 1;
v___x_840_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(uint8_t v_await_841_, uint64_t v_extra_842_){
_start:
{
uint64_t v___x_843_; uint64_t v___y_845_; 
v___x_843_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
if (v_await_841_ == 0)
{
uint64_t v___x_848_; 
v___x_848_ = 0ULL;
v___y_845_ = v___x_848_;
goto v___jp_844_;
}
else
{
uint64_t v___x_849_; 
v___x_849_ = 2ULL;
v___y_845_ = v___x_849_;
goto v___jp_844_;
}
v___jp_844_:
{
uint64_t v___x_846_; uint64_t v___x_847_; 
v___x_846_ = lean_uint64_lor(v___x_843_, v___y_845_);
v___x_847_ = lean_uint64_lor(v___x_846_, v_extra_842_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___boxed(lean_object* v_await_850_, lean_object* v_extra_851_){
_start:
{
uint8_t v_await_boxed_852_; uint64_t v_extra_boxed_853_; uint64_t v_res_854_; lean_object* v_r_855_; 
v_await_boxed_852_ = lean_unbox(v_await_850_);
v_extra_boxed_853_ = lean_unbox_uint64(v_extra_851_);
lean_dec_ref(v_extra_851_);
v_res_854_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v_await_boxed_852_, v_extra_boxed_853_);
v_r_855_ = lean_box_uint64(v_res_854_);
return v_r_855_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_856_; uint8_t v___x_857_; uint64_t v___x_858_; 
v___x_856_ = 4ULL;
v___x_857_ = 0;
v___x_858_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v___x_857_, v___x_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_c_860_, lean_object* v_args_861_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; uint64_t v___x_866_; lean_object* v___x_867_; 
v___x_863_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_864_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_864_, 0, v_c_860_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = lean_box(0);
v___x_866_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_867_ = l_Lasm_JS_Value_invokeRaw(v___x_864_, v___x_865_, v_args_861_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1));
v___x_870_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_869_, v_a_868_);
lean_dec(v_a_868_);
return v___x_870_;
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
v_a_871_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_867_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_867_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_c_879_, lean_object* v_args_880_, lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_c_879_, v_args_880_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(size_t v_sz_883_, size_t v_i_884_, lean_object* v_bs_885_){
_start:
{
uint8_t v___x_886_; 
v___x_886_ = lean_usize_dec_lt(v_i_884_, v_sz_883_);
if (v___x_886_ == 0)
{
return v_bs_885_;
}
else
{
lean_object* v_v_887_; lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_890_; lean_object* v_bs_x27_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; size_t v___x_899_; size_t v___x_900_; lean_object* v___x_901_; 
v_v_887_ = lean_array_uget_borrowed(v_bs_885_, v_i_884_);
v_fst_888_ = lean_ctor_get(v_v_887_, 0);
lean_inc(v_fst_888_);
v_snd_889_ = lean_ctor_get(v_v_887_, 1);
lean_inc(v_snd_889_);
v___x_890_ = lean_unsigned_to_nat(0u);
v_bs_x27_891_ = lean_array_uset(v_bs_885_, v_i_884_, v___x_890_);
v___x_892_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_892_, 0, v_fst_888_);
v___x_893_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_893_, 0, v_snd_889_);
v___x_894_ = lean_unsigned_to_nat(2u);
v___x_895_ = lean_mk_empty_array_with_capacity(v___x_894_);
v___x_896_ = lean_array_push(v___x_895_, v___x_892_);
v___x_897_ = lean_array_push(v___x_896_, v___x_893_);
v___x_898_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = ((size_t)1ULL);
v___x_900_ = lean_usize_add(v_i_884_, v___x_899_);
v___x_901_ = lean_array_uset(v_bs_x27_891_, v_i_884_, v___x_898_);
v_i_884_ = v___x_900_;
v_bs_885_ = v___x_901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_sz_903_, lean_object* v_i_904_, lean_object* v_bs_905_){
_start:
{
size_t v_sz_boxed_906_; size_t v_i_boxed_907_; lean_object* v_res_908_; 
v_sz_boxed_906_ = lean_unbox_usize(v_sz_903_);
lean_dec(v_sz_903_);
v_i_boxed_907_ = lean_unbox_usize(v_i_904_);
lean_dec(v_i_904_);
v_res_908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_sz_boxed_906_, v_i_boxed_907_, v_bs_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___x_910_, lean_object* v___f_911_, lean_object* v_a_912_, lean_object* v___x_913_, lean_object* v___y_914_, lean_object* v_x_915_){
_start:
{
uint8_t v___y_918_; lean_object* v_val_919_; lean_object* v___y_923_; lean_object* v___y_924_; 
if (lean_obj_tag(v_x_915_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v___x_913_);
lean_dec(v_a_912_);
lean_dec_ref(v___f_911_);
lean_dec(v___x_910_);
v_a_947_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_955_ == 0)
{
v___x_949_ = v_x_915_;
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v_x_915_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; uint16_t v_status_957_; lean_object* v_headers_958_; lean_object* v_body_959_; lean_object* v___x_960_; lean_object* v___y_962_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v_a_956_ = lean_ctor_get(v_x_915_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v_x_915_, 1);
v_status_957_ = lean_ctor_get_uint16(v_a_956_, sizeof(void*)*2);
v_headers_958_ = lean_ctor_get(v_a_956_, 0);
lean_inc_ref(v_headers_958_);
v_body_959_ = lean_ctor_get(v_a_956_, 1);
lean_inc_ref(v_body_959_);
lean_dec(v_a_956_);
v___x_960_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__1___closed__0));
v___x_976_ = lean_uint16_to_nat(v_status_957_);
v___x_977_ = lean_nat_to_int(v___x_976_);
v___x_978_ = lean_nat_abs(v___x_977_);
v___x_979_ = lean_cstr_to_nat("9007199254740991");
v___x_980_ = lean_nat_dec_le(v___x_978_, v___x_979_);
lean_dec(v___x_978_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_977_);
v___y_962_ = v___x_981_;
goto v___jp_961_;
}
else
{
double v___x_982_; lean_object* v___x_983_; 
v___x_982_ = l_Float_ofInt(v___x_977_);
lean_dec(v___x_977_);
v___x_983_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_983_, 0, v___x_982_);
v___y_962_ = v___x_983_;
goto v___jp_961_;
}
v___jp_961_:
{
lean_object* v___x_963_; size_t v_sz_964_; size_t v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_960_);
lean_ctor_set(v___x_963_, 1, v___y_962_);
v_sz_964_ = lean_array_size(v_headers_958_);
v___x_965_ = ((size_t)0ULL);
v___x_966_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_sz_964_, v___x_965_, v_headers_958_);
v___x_967_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_913_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = lean_box(0);
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_963_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = l_Lasm_JS_obj(v___x_971_);
v___x_973_ = l_Lasm_Fetch_bodyless(v___y_914_, v_status_957_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_974_, 0, v_body_959_);
v___y_923_ = v___x_972_;
v___y_924_ = v___x_974_;
goto v___jp_922_;
}
else
{
lean_object* v___x_975_; 
lean_dec_ref(v_body_959_);
v___x_975_ = lean_box(1);
v___y_923_ = v___x_972_;
v___y_924_ = v___x_975_;
goto v___jp_922_;
}
}
}
v___jp_917_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v_val_919_);
v___x_921_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_910_, v___y_918_, v___x_920_, v___f_911_);
return v___x_921_;
}
v___jp_922_:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; lean_object* v___x_930_; 
v___x_925_ = lean_unsigned_to_nat(2u);
v___x_926_ = lean_mk_empty_array_with_capacity(v___x_925_);
v___x_927_ = lean_array_push(v___x_926_, v___y_924_);
v___x_928_ = lean_array_push(v___x_927_, v___y_923_);
v___x_929_ = 0;
v___x_930_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_912_, v___x_928_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 1);
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
v___y_918_ = v___x_929_;
v_val_919_ = v___x_936_;
goto v___jp_917_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_930_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_930_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 0);
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
v___y_918_ = v___x_929_;
v_val_919_ = v___x_944_;
goto v___jp_917_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___x_984_, lean_object* v___f_985_, lean_object* v_a_986_, lean_object* v___x_987_, lean_object* v___y_988_, lean_object* v_x_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___x_984_, v___f_985_, v_a_986_, v___x_987_, v___y_988_, v_x_989_);
lean_dec_ref(v___y_988_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v_headers_994_, lean_object* v_handler_995_, lean_object* v___x_996_, lean_object* v___f_997_, lean_object* v_body_998_){
_start:
{
lean_object* v___x_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1000_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1000_, 0, v___y_992_);
lean_ctor_set(v___x_1000_, 1, v___y_993_);
lean_ctor_set(v___x_1000_, 2, v_headers_994_);
lean_ctor_set(v___x_1000_, 3, v_body_998_);
v___x_1001_ = 0;
v___x_1002_ = l_Lasm_Fetch_respond(v_handler_995_, v___x_1000_);
v___x_1003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_996_, v___x_1001_, v___x_1002_, v___f_997_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v_headers_1006_, lean_object* v_handler_1007_, lean_object* v___x_1008_, lean_object* v___f_1009_, lean_object* v_body_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v___y_1004_, v___y_1005_, v_headers_1006_, v_handler_1007_, v___x_1008_, v___f_1009_, v_body_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_1013_, lean_object* v_x_1014_){
_start:
{
if (lean_obj_tag(v_x_1014_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref(v___f_1013_);
v_a_1016_ = lean_ctor_get(v_x_1014_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_x_1014_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1018_ = v_x_1014_;
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v_x_1014_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
return v___x_1022_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1026_; 
v_a_1025_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v_x_1014_, 1);
v___x_1026_ = lean_apply_2(v___f_1013_, v_a_1025_, lean_box(0));
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_1027_, lean_object* v_x_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_1027_, v_x_1028_);
return v_res_1030_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1036_ = lean_string_utf8_byte_size(v___x_1035_);
return v___x_1036_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4);
v___x_1039_ = lean_nat_dec_eq(v___x_1038_, v___x_1037_);
return v___x_1039_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__9));
v___x_1045_ = lean_unsigned_to_nat(46u);
v___x_1046_ = lean_unsigned_to_nat(193u);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__8));
v___x_1048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__7));
v___x_1049_ = l_mkPanicMessageWithDecl(v___x_1048_, v___x_1047_, v___x_1046_, v___x_1045_, v___x_1044_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(lean_object* v_context_1051_, lean_object* v_d_1052_){
_start:
{
lean_object* v___y_1055_; lean_object* v___y_1056_; 
if (lean_obj_tag(v_d_1052_) == 6)
{
lean_object* v_b_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_b_1060_ = lean_ctor_get(v_d_1052_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_d_1052_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v_d_1052_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_b_1060_);
lean_dec(v_d_1052_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
lean_ctor_set_tag(v___x_1062_, 0);
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_b_1060_);
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
lean_object* v___x_1068_; lean_object* v_received_1070_; 
v___x_1068_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_1052_) == 9)
{
lean_object* v_value_1084_; lean_object* v_description_1085_; uint8_t v___x_1086_; 
v_value_1084_ = lean_ctor_get(v_d_1052_, 0);
v_description_1085_ = lean_ctor_get(v_d_1052_, 1);
v___x_1086_ = lean_string_dec_eq(v_description_1085_, v___x_1068_);
if (v___x_1086_ == 0)
{
goto v___jp_1082_;
}
else
{
uint32_t v___x_1087_; uint64_t v___x_1088_; lean_object* v___x_1089_; uint32_t v___x_1090_; lean_object* v___x_1091_; 
lean_inc_n(v_value_1084_, 2);
lean_dec_ref_known(v_d_1052_, 2);
v___x_1087_ = 206;
v___x_1088_ = 0ULL;
v___x_1089_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_value_1084_);
lean_ctor_set(v___x_1089_, 1, v___x_1068_);
v___x_1090_ = lasm_js_value_handle(v_value_1084_);
lean_dec(v_value_1084_);
v___x_1091_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1087_, v___x_1088_, v___x_1089_, v___x_1090_);
lean_dec_ref_known(v___x_1089_, 2);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; uint8_t v___x_1093_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1091_, 1);
v___x_1093_ = lean_string_validate_utf8(v_a_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
lean_dec(v_a_1092_);
v___x_1094_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10);
v___x_1095_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1094_);
v_received_1070_ = v___x_1095_;
goto v___jp_1069_;
}
else
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_string_from_utf8_unchecked(v_a_1092_);
v_received_1070_ = v___x_1096_;
goto v___jp_1069_;
}
}
else
{
lean_object* v___x_1097_; 
lean_dec_ref_known(v___x_1091_, 1);
v___x_1097_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11));
v_received_1070_ = v___x_1097_;
goto v___jp_1069_;
}
}
}
else
{
goto v___jp_1082_;
}
v___jp_1069_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1071_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0));
v___x_1072_ = lean_string_append(v___x_1071_, v_context_1051_);
v___x_1073_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1));
v___x_1074_ = lean_string_append(v___x_1072_, v___x_1073_);
v___x_1075_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__2));
v___x_1076_ = lean_string_append(v___x_1074_, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3));
v___x_1078_ = lean_string_append(v___x_1076_, v___x_1077_);
v___x_1079_ = lean_string_append(v___x_1078_, v_received_1070_);
lean_dec_ref(v_received_1070_);
v___x_1080_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__6));
v___y_1055_ = v___x_1079_;
v___y_1056_ = v___x_1081_;
goto v___jp_1054_;
}
else
{
v___y_1055_ = v___x_1079_;
v___y_1056_ = v___x_1068_;
goto v___jp_1054_;
}
}
v___jp_1082_:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_JS_Data_describe(v_d_1052_);
v_received_1070_ = v___x_1083_;
goto v___jp_1069_;
}
}
v___jp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1057_ = lean_string_append(v___y_1055_, v___y_1056_);
v___x_1058_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___boxed(lean_object* v_context_1098_, lean_object* v_d_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(v_context_1098_, v_d_1099_);
lean_dec_ref(v_context_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(lean_object* v_context_1102_, lean_object* v_bytes_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lasm_JS_Wire_decode(v_bytes_1103_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1107_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
v___x_1107_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(v_context_1102_, v_a_1106_);
return v___x_1107_;
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
v_a_1108_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1105_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1105_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5___boxed(lean_object* v_context_1116_, lean_object* v_bytes_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v_context_1116_, v_bytes_1117_);
lean_dec_ref(v_bytes_1117_);
lean_dec_ref(v_context_1116_);
return v_res_1119_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0(void){
_start:
{
uint8_t v___x_1120_; uint64_t v___x_1121_; 
v___x_1120_ = 0;
v___x_1121_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(uint8_t v_await_1122_, uint64_t v_extra_1123_){
_start:
{
uint64_t v___x_1124_; uint64_t v___y_1126_; 
v___x_1124_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0);
if (v_await_1122_ == 0)
{
uint64_t v___x_1129_; 
v___x_1129_ = 0ULL;
v___y_1126_ = v___x_1129_;
goto v___jp_1125_;
}
else
{
uint64_t v___x_1130_; 
v___x_1130_ = 2ULL;
v___y_1126_ = v___x_1130_;
goto v___jp_1125_;
}
v___jp_1125_:
{
uint64_t v___x_1127_; uint64_t v___x_1128_; 
v___x_1127_ = lean_uint64_lor(v___x_1124_, v___y_1126_);
v___x_1128_ = lean_uint64_lor(v___x_1127_, v_extra_1123_);
return v___x_1128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___boxed(lean_object* v_await_1131_, lean_object* v_extra_1132_){
_start:
{
uint8_t v_await_boxed_1133_; uint64_t v_extra_boxed_1134_; uint64_t v_res_1135_; lean_object* v_r_1136_; 
v_await_boxed_1133_ = lean_unbox(v_await_1131_);
v_extra_boxed_1134_ = lean_unbox_uint64(v_extra_1132_);
lean_dec_ref(v_extra_1132_);
v_res_1135_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v_await_boxed_1133_, v_extra_boxed_1134_);
v_r_1136_ = lean_box_uint64(v_res_1135_);
return v_r_1136_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0(void){
_start:
{
uint64_t v___x_1137_; uint8_t v___x_1138_; uint64_t v___x_1139_; 
v___x_1137_ = 4ULL;
v___x_1138_ = 0;
v___x_1139_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v___x_1138_, v___x_1137_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_c_1140_, lean_object* v_args_1141_){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; uint64_t v___x_1146_; lean_object* v___x_1147_; 
v___x_1143_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1144_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1144_, 0, v_c_1140_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0);
v___x_1147_ = l_Lasm_JS_Value_invokeRaw(v___x_1144_, v___x_1145_, v_args_1141_, v___x_1146_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1));
v___x_1150_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v___x_1149_, v_a_1148_);
lean_dec(v_a_1148_);
return v___x_1150_;
}
else
{
return v___x_1147_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_c_1151_, lean_object* v_args_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_c_1151_, v_args_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___x_1155_, uint8_t v___x_1156_, lean_object* v___f_1157_, lean_object* v_a_1158_, lean_object* v_x_1159_){
_start:
{
lean_object* v_val_1162_; 
if (lean_obj_tag(v_x_1159_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_a_1158_);
lean_dec_ref(v___f_1157_);
lean_dec(v___x_1155_);
v_a_1165_ = lean_ctor_get(v_x_1159_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_x_1159_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1167_ = v_x_1159_;
v_isShared_1168_ = v_isSharedCheck_1173_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v_x_1159_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1173_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
return v___x_1171_;
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1192_; 
v_a_1174_ = lean_ctor_get(v_x_1159_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_x_1159_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1176_ = v_x_1159_;
v_isShared_1177_ = v_isSharedCheck_1192_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v_x_1159_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1192_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1178_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1179_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1179_, 0, v_a_1174_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = lean_unsigned_to_nat(1u);
v___x_1181_ = lean_mk_empty_array_with_capacity(v___x_1180_);
v___x_1182_ = lean_array_push(v___x_1181_, v___x_1179_);
v___x_1183_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_1158_, v___x_1182_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref_known(v___x_1183_, 1);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v_a_1184_);
v___x_1186_ = v___x_1176_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
v_val_1162_ = v___x_1186_;
goto v___jp_1161_;
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; 
v_a_1188_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1183_, 1);
if (v_isShared_1177_ == 0)
{
lean_ctor_set_tag(v___x_1176_, 0);
lean_ctor_set(v___x_1176_, 0, v_a_1188_);
v___x_1190_ = v___x_1176_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
v_val_1162_ = v___x_1190_;
goto v___jp_1161_;
}
}
}
}
v___jp_1161_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v_val_1162_);
v___x_1164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1155_, v___x_1156_, v___x_1163_, v___f_1157_);
return v___x_1164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___x_1193_, lean_object* v___x_1194_, lean_object* v___f_1195_, lean_object* v_a_1196_, lean_object* v_x_1197_, lean_object* v___y_1198_){
_start:
{
uint8_t v___x_7258__boxed_1199_; lean_object* v_res_1200_; 
v___x_7258__boxed_1199_ = lean_unbox(v___x_1194_);
v_res_1200_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___x_1193_, v___x_7258__boxed_1199_, v___f_1195_, v_a_1196_, v_x_1197_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4(lean_object* v___f_1201_, lean_object* v_x_1202_){
_start:
{
if (lean_obj_tag(v_x_1202_) == 0)
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v___f_1201_);
v_a_1204_ = lean_ctor_get(v_x_1202_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_x_1202_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1206_ = v_x_1202_;
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v_x_1202_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1212_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
}
}
else
{
lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1224_; 
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1202_);
if (v_isSharedCheck_1224_ == 0)
{
lean_object* v_unused_1225_; 
v_unused_1225_ = lean_ctor_get(v_x_1202_, 0);
lean_dec(v_unused_1225_);
v___x_1214_ = v_x_1202_;
v_isShared_1215_ = v_isSharedCheck_1224_;
goto v_resetjp_1213_;
}
else
{
lean_dec(v_x_1202_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1224_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1216_; uint8_t v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = 0;
v___x_1218_ = lean_io_promise_new();
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 0, v___x_1218_);
v___x_1220_ = v___x_1214_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
v___x_1222_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1216_, v___x_1217_, v___x_1221_, v___f_1201_);
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4___boxed(lean_object* v___f_1226_, lean_object* v_x_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4(v___f_1226_, v_x_1227_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3(lean_object* v___f_1230_, lean_object* v_x_1231_){
_start:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1241_; 
lean_dec_ref(v___f_1230_);
v_a_1233_ = lean_ctor_get(v_x_1231_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_x_1231_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1235_ = v_x_1231_;
v_isShared_1236_ = v_isSharedCheck_1241_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v_x_1231_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1241_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
return v___x_1239_;
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1243_; 
v_a_1242_ = lean_ctor_get(v_x_1231_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v_x_1231_, 1);
v___x_1243_ = lean_apply_2(v___f_1230_, v_a_1242_, lean_box(0));
return v___x_1243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3___boxed(lean_object* v___f_1244_, lean_object* v_x_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3(v___f_1244_, v_x_1245_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5(lean_object* v_a_1248_, lean_object* v_x_1249_){
_start:
{
if (lean_obj_tag(v_x_1249_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1259_; 
v_a_1251_ = lean_ctor_get(v_x_1249_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_x_1249_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1253_ = v_x_1249_;
v_isShared_1254_ = v_isSharedCheck_1259_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v_x_1249_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1259_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1257_; 
v___x_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
return v___x_1257_;
}
}
}
else
{
lean_object* v___x_1260_; 
lean_dec_ref_known(v_x_1249_, 1);
v___x_1260_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1248_);
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed(lean_object* v_a_1261_, lean_object* v_x_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5(v_a_1261_, v_x_1262_);
lean_dec(v_a_1261_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6(lean_object* v_payload_1265_, lean_object* v_failurePrefix_1266_, lean_object* v___f_1267_, lean_object* v___f_1268_, uint32_t v_op_1269_, uint64_t v_flags_1270_, lean_object* v___f_1271_, lean_object* v_x_1272_){
_start:
{
if (lean_obj_tag(v_x_1272_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref(v___f_1271_);
lean_dec_ref(v___f_1268_);
lean_dec_ref(v___f_1267_);
v_a_1274_ = lean_ctor_get(v_x_1272_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_x_1272_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1276_ = v_x_1272_;
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v_x_1272_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1274_);
v___x_1279_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
return v___x_1280_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1324_; 
v_a_1283_ = lean_ctor_get(v_x_1272_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_x_1272_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1285_ = v_x_1272_;
v_isShared_1286_ = v_isSharedCheck_1324_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v_x_1272_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1324_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
uint32_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1287_ = 0;
v___x_1288_ = l_Lasm_JS_Wire_encode(v_payload_1265_);
v___x_1289_ = lean_string_utf8_byte_size(v_failurePrefix_1266_);
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = lean_nat_dec_eq(v___x_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_object* v___f_1292_; lean_object* v_val_1294_; lean_object* v___x_1299_; 
lean_dec_ref(v___f_1271_);
lean_inc(v_a_1283_);
v___f_1292_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1292_, 0, v_a_1283_);
v___x_1299_ = lasm_js_call_into(v_a_1283_, v_op_1269_, v___x_1287_, v_flags_1270_, v___x_1288_, v_payload_1265_);
lean_dec_ref(v___x_1288_);
lean_dec(v_a_1283_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; lean_object* v___x_1302_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
lean_dec_ref_known(v___x_1299_, 1);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v_a_1300_);
v___x_1302_ = v___x_1285_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1300_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
v_val_1294_ = v___x_1302_;
goto v___jp_1293_;
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1306_; 
v_a_1304_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1299_, 1);
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 0);
lean_ctor_set(v___x_1285_, 0, v_a_1304_);
v___x_1306_ = v___x_1285_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
v_val_1294_ = v___x_1306_;
goto v___jp_1293_;
}
}
v___jp_1293_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v_val_1294_);
v___x_1296_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1290_, v___x_1291_, v___x_1295_, v___f_1292_);
v___x_1297_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1290_, v___x_1291_, v___x_1296_, v___f_1267_);
v___x_1298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1290_, v___x_1291_, v___x_1297_, v___f_1268_);
return v___x_1298_;
}
}
else
{
lean_object* v___f_1308_; uint8_t v___x_1309_; lean_object* v_val_1311_; lean_object* v___x_1315_; 
lean_dec_ref(v___f_1268_);
lean_dec_ref(v___f_1267_);
lean_inc(v_a_1283_);
v___f_1308_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1308_, 0, v_a_1283_);
v___x_1309_ = 0;
v___x_1315_ = lasm_js_call_into(v_a_1283_, v_op_1269_, v___x_1287_, v_flags_1270_, v___x_1288_, v_payload_1265_);
lean_dec_ref(v___x_1288_);
lean_dec(v_a_1283_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref_known(v___x_1315_, 1);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v_a_1316_);
v___x_1318_ = v___x_1285_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
v_val_1311_ = v___x_1318_;
goto v___jp_1310_;
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1315_, 1);
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 0);
lean_ctor_set(v___x_1285_, 0, v_a_1320_);
v___x_1322_ = v___x_1285_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
v_val_1311_ = v___x_1322_;
goto v___jp_1310_;
}
}
v___jp_1310_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1312_, 0, v_val_1311_);
v___x_1313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1290_, v___x_1309_, v___x_1312_, v___f_1308_);
v___x_1314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1290_, v___x_1309_, v___x_1313_, v___f_1271_);
return v___x_1314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6___boxed(lean_object* v_payload_1325_, lean_object* v_failurePrefix_1326_, lean_object* v___f_1327_, lean_object* v___f_1328_, lean_object* v_op_1329_, lean_object* v_flags_1330_, lean_object* v___f_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_){
_start:
{
uint32_t v_op_boxed_1334_; uint64_t v_flags_boxed_1335_; lean_object* v_res_1336_; 
v_op_boxed_1334_ = lean_unbox_uint32(v_op_1329_);
lean_dec(v_op_1329_);
v_flags_boxed_1335_ = lean_unbox_uint64(v_flags_1330_);
lean_dec_ref(v_flags_1330_);
v_res_1336_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6(v_payload_1325_, v_failurePrefix_1326_, v___f_1327_, v___f_1328_, v_op_boxed_1334_, v_flags_boxed_1335_, v___f_1331_, v_x_1332_);
lean_dec_ref(v_failurePrefix_1326_);
lean_dec(v_payload_1325_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0(lean_object* v_failurePrefix_1337_, lean_object* v_x_1338_){
_start:
{
if (lean_obj_tag(v_x_1338_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1351_; 
v_a_1340_ = lean_ctor_get(v_x_1338_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_x_1338_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1342_ = v_x_1338_;
v_isShared_1343_ = v_isSharedCheck_1351_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v_x_1338_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1351_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
v___x_1344_ = lean_io_error_to_string(v_a_1340_);
v___x_1345_ = lean_string_append(v_failurePrefix_1337_, v___x_1344_);
lean_dec_ref(v___x_1344_);
v___x_1346_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1346_);
v___x_1348_ = v___x_1342_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
}
else
{
lean_object* v___x_1352_; 
lean_dec_ref(v_failurePrefix_1337_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_x_1338_);
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0___boxed(lean_object* v_failurePrefix_1353_, lean_object* v_x_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0(v_failurePrefix_1353_, v_x_1354_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2(lean_object* v___f_1357_, lean_object* v_bytes_1358_){
_start:
{
lean_object* v___x_1360_; uint8_t v___x_1361_; lean_object* v_val_1363_; lean_object* v___x_1366_; 
v___x_1360_ = lean_unsigned_to_nat(0u);
v___x_1361_ = 0;
v___x_1366_ = l_Lasm_JS_Wire_decode(v_bytes_1358_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
lean_ctor_set_tag(v___x_1369_, 1);
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
v_val_1363_ = v___x_1372_;
goto v___jp_1362_;
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1366_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1366_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
lean_ctor_set_tag(v___x_1377_, 0);
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
v_val_1363_ = v___x_1380_;
goto v___jp_1362_;
}
}
}
v___jp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_val_1363_);
v___x_1365_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1360_, v___x_1361_, v___x_1364_, v___f_1357_);
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2___boxed(lean_object* v___f_1383_, lean_object* v_bytes_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2(v___f_1383_, v_bytes_1384_);
lean_dec_ref(v_bytes_1384_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1(lean_object* v_context_1387_, lean_object* v_x_1388_){
_start:
{
lean_object* v_val_1391_; 
if (lean_obj_tag(v_x_1388_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1401_; 
v_a_1393_ = lean_ctor_get(v_x_1388_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_x_1388_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1395_ = v_x_1388_;
v_isShared_1396_ = v_isSharedCheck_1401_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v_x_1388_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1401_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
return v___x_1399_;
}
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1415_; 
v_a_1402_ = lean_ctor_get(v_x_1388_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_x_1388_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1404_ = v_x_1388_;
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v_x_1388_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1406_; 
v___x_1406_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1387_, v_a_1402_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1409_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref_known(v___x_1406_, 1);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v_a_1407_);
v___x_1409_ = v___x_1404_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
v_val_1391_ = v___x_1409_;
goto v___jp_1390_;
}
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1413_; 
v_a_1411_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1406_, 1);
if (v_isShared_1405_ == 0)
{
lean_ctor_set_tag(v___x_1404_, 0);
lean_ctor_set(v___x_1404_, 0, v_a_1411_);
v___x_1413_ = v___x_1404_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
v_val_1391_ = v___x_1413_;
goto v___jp_1390_;
}
}
}
}
v___jp_1390_:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_val_1391_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1___boxed(lean_object* v_context_1416_, lean_object* v_x_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1(v_context_1416_, v_x_1417_);
lean_dec_ref(v_context_1416_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(lean_object* v_context_1420_, uint32_t v_op_1421_, uint64_t v_flags_1422_, lean_object* v_payload_1423_, lean_object* v_failurePrefix_1424_){
_start:
{
lean_object* v___f_1426_; lean_object* v___f_1427_; lean_object* v___f_1428_; lean_object* v___f_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___f_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; lean_object* v_val_1437_; lean_object* v___x_1440_; 
lean_inc_ref(v_failurePrefix_1424_);
v___f_1426_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1426_, 0, v_failurePrefix_1424_);
v___f_1427_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1427_, 0, v_context_1420_);
v___f_1428_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1428_, 0, v___f_1427_);
v___f_1429_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1429_, 0, v___f_1428_);
v___x_1430_ = lean_box_uint32(v_op_1421_);
v___x_1431_ = lean_box_uint64(v_flags_1422_);
lean_inc_ref(v___f_1429_);
v___f_1432_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1432_, 0, v_payload_1423_);
lean_closure_set(v___f_1432_, 1, v_failurePrefix_1424_);
lean_closure_set(v___f_1432_, 2, v___f_1426_);
lean_closure_set(v___f_1432_, 3, v___f_1429_);
lean_closure_set(v___f_1432_, 4, v___x_1430_);
lean_closure_set(v___f_1432_, 5, v___x_1431_);
lean_closure_set(v___f_1432_, 6, v___f_1429_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1433_, 0, v___f_1432_);
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = 0;
v___x_1440_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
lean_ctor_set_tag(v___x_1443_, 1);
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
v_val_1437_ = v___x_1446_;
goto v___jp_1436_;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
v_a_1449_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1440_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1440_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
lean_ctor_set_tag(v___x_1451_, 0);
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
v_val_1437_ = v___x_1454_;
goto v___jp_1436_;
}
}
}
v___jp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v_val_1437_);
v___x_1439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1434_, v___x_1435_, v___x_1438_, v___f_1433_);
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___boxed(lean_object* v_context_1457_, lean_object* v_op_1458_, lean_object* v_flags_1459_, lean_object* v_payload_1460_, lean_object* v_failurePrefix_1461_, lean_object* v_a_1462_){
_start:
{
uint32_t v_op_boxed_1463_; uint64_t v_flags_boxed_1464_; lean_object* v_res_1465_; 
v_op_boxed_1463_ = lean_unbox_uint32(v_op_1458_);
lean_dec(v_op_1458_);
v_flags_boxed_1464_ = lean_unbox_uint64(v_flags_1459_);
lean_dec_ref(v_flags_1459_);
v_res_1465_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(v_context_1457_, v_op_boxed_1463_, v_flags_boxed_1464_, v_payload_1460_, v_failurePrefix_1461_);
return v_res_1465_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1(void){
_start:
{
uint64_t v___x_1467_; uint8_t v___x_1468_; uint64_t v___x_1469_; 
v___x_1467_ = 8ULL;
v___x_1468_ = 0;
v___x_1469_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v___x_1468_, v___x_1467_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(lean_object* v_o_1470_, lean_object* v_name_1471_, lean_object* v_args_1472_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; uint32_t v___x_1479_; uint64_t v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1474_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1475_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_o_1470_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
lean_inc_ref(v_name_1471_);
v___x_1476_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_name_1471_);
v___x_1477_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_1478_ = lean_string_append(v___x_1477_, v_name_1471_);
lean_dec_ref(v_name_1471_);
v___x_1479_ = 205;
v___x_1480_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1);
v___x_1481_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_args_1472_);
v___x_1482_ = lean_unsigned_to_nat(3u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1475_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1476_);
v___x_1486_ = lean_array_push(v___x_1485_, v___x_1481_);
v___x_1487_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
v___x_1488_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(v___x_1478_, v___x_1479_, v___x_1480_, v___x_1487_, v___x_1474_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___boxed(lean_object* v_o_1489_, lean_object* v_name_1490_, lean_object* v_args_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_o_1489_, v_name_1490_, v_args_1491_);
return v_res_1493_;
}
}
static lean_object* _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = l_ByteArray_empty;
v___x_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
return v___x_1495_;
}
}
static lean_object* _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0);
v___x_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v_handler_1501_, lean_object* v___x_1502_, lean_object* v___f_1503_, lean_object* v_a_1504_, lean_object* v_value_1505_, lean_object* v_headers_1506_){
_start:
{
lean_object* v___f_1508_; lean_object* v___f_1509_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
lean_inc(v___x_1502_);
lean_inc_ref(v___y_1499_);
v___f_1508_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 8, 6);
lean_closure_set(v___f_1508_, 0, v___y_1499_);
lean_closure_set(v___f_1508_, 1, v___y_1500_);
lean_closure_set(v___f_1508_, 2, v_headers_1506_);
lean_closure_set(v___f_1508_, 3, v_handler_1501_);
lean_closure_set(v___f_1508_, 4, v___x_1502_);
lean_closure_set(v___f_1508_, 5, v___f_1503_);
v___f_1509_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1509_, 0, v___f_1508_);
v___x_1514_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_1515_ = lean_string_dec_eq(v___y_1499_, v___x_1514_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1517_ = lean_string_dec_eq(v___y_1499_, v___x_1516_);
lean_dec_ref(v___y_1499_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; lean_object* v___f_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1518_ = lean_box(v___x_1517_);
lean_inc(v___x_1502_);
v___f_1519_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 6, 4);
lean_closure_set(v___f_1519_, 0, v___x_1502_);
lean_closure_set(v___f_1519_, 1, v___x_1518_);
lean_closure_set(v___f_1519_, 2, v___f_1509_);
lean_closure_set(v___f_1519_, 3, v_a_1504_);
v___x_1520_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2));
v___x_1521_ = lean_mk_empty_array_with_capacity(v___x_1502_);
v___x_1522_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_value_1505_, v___x_1520_, v___x_1521_);
v___x_1523_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1502_, v___x_1517_, v___x_1522_, v___f_1519_);
return v___x_1523_;
}
else
{
lean_dec(v_value_1505_);
lean_dec(v_a_1504_);
goto v___jp_1510_;
}
}
else
{
lean_dec(v_value_1505_);
lean_dec(v_a_1504_);
lean_dec_ref(v___y_1499_);
goto v___jp_1510_;
}
v___jp_1510_:
{
uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1511_ = 0;
v___x_1512_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1);
v___x_1513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1502_, v___x_1511_, v___x_1512_, v___f_1509_);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v_handler_1526_, lean_object* v___x_1527_, lean_object* v___f_1528_, lean_object* v_a_1529_, lean_object* v_value_1530_, lean_object* v_headers_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___y_1524_, v___y_1525_, v_handler_1526_, v___x_1527_, v___f_1528_, v_a_1529_, v_value_1530_, v_headers_1531_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___f_1534_, lean_object* v_x_1535_){
_start:
{
if (lean_obj_tag(v_x_1535_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v___f_1534_);
v_a_1537_ = lean_ctor_get(v_x_1535_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_x_1535_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1539_ = v_x_1535_;
v_isShared_1540_ = v_isSharedCheck_1545_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v_x_1535_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1545_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
return v___x_1543_;
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1547_; 
v_a_1546_ = lean_ctor_get(v_x_1535_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v_x_1535_, 1);
v___x_1547_ = lean_apply_2(v___f_1534_, v_a_1546_, lean_box(0));
return v___x_1547_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___f_1548_, lean_object* v_x_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___f_1548_, v_x_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(uint8_t v_await_1552_, uint64_t v_extra_1553_){
_start:
{
uint64_t v___x_1554_; uint64_t v___y_1556_; 
v___x_1554_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0);
if (v_await_1552_ == 0)
{
uint64_t v___x_1559_; 
v___x_1559_ = 0ULL;
v___y_1556_ = v___x_1559_;
goto v___jp_1555_;
}
else
{
uint64_t v___x_1560_; 
v___x_1560_ = 2ULL;
v___y_1556_ = v___x_1560_;
goto v___jp_1555_;
}
v___jp_1555_:
{
uint64_t v___x_1557_; uint64_t v___x_1558_; 
v___x_1557_ = lean_uint64_lor(v___x_1554_, v___y_1556_);
v___x_1558_ = lean_uint64_lor(v___x_1557_, v_extra_1553_);
return v___x_1558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9___boxed(lean_object* v_await_1561_, lean_object* v_extra_1562_){
_start:
{
uint8_t v_await_boxed_1563_; uint64_t v_extra_boxed_1564_; uint64_t v_res_1565_; lean_object* v_r_1566_; 
v_await_boxed_1563_ = lean_unbox(v_await_1561_);
v_extra_boxed_1564_ = lean_unbox_uint64(v_extra_1562_);
lean_dec_ref(v_extra_1562_);
v_res_1565_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(v_await_boxed_1563_, v_extra_boxed_1564_);
v_r_1566_ = lean_box_uint64(v_res_1565_);
return v_r_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(size_t v_sz_1572_, size_t v_i_1573_, lean_object* v_bs_1574_){
_start:
{
uint8_t v___x_1577_; 
v___x_1577_ = lean_usize_dec_lt(v_i_1573_, v_sz_1572_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1578_, 0, v_bs_1574_);
return v___x_1578_;
}
else
{
lean_object* v_v_1579_; 
v_v_1579_ = lean_array_uget_borrowed(v_bs_1574_, v_i_1573_);
if (lean_obj_tag(v_v_1579_) == 7)
{
lean_object* v_items_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v_items_1580_ = lean_ctor_get(v_v_1579_, 0);
v___x_1581_ = lean_array_get_size(v_items_1580_);
v___x_1582_ = lean_unsigned_to_nat(2u);
v___x_1583_ = lean_nat_dec_eq(v___x_1581_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_dec_ref(v_bs_1574_);
goto v___jp_1575_;
}
else
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_unsigned_to_nat(0u);
v___x_1585_ = lean_array_fget_borrowed(v_items_1580_, v___x_1584_);
if (lean_obj_tag(v___x_1585_) == 4)
{
lean_object* v_s_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_s_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc_ref(v_s_1586_);
v___x_1587_ = lean_unsigned_to_nat(1u);
v___x_1588_ = lean_array_fget_borrowed(v_items_1580_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 4)
{
lean_object* v_s_1589_; lean_object* v_bs_x27_1590_; lean_object* v___x_1591_; size_t v___x_1592_; size_t v___x_1593_; lean_object* v___x_1594_; 
v_s_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc_ref(v_s_1589_);
v_bs_x27_1590_ = lean_array_uset(v_bs_1574_, v_i_1573_, v___x_1584_);
v___x_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_s_1586_);
lean_ctor_set(v___x_1591_, 1, v_s_1589_);
v___x_1592_ = ((size_t)1ULL);
v___x_1593_ = lean_usize_add(v_i_1573_, v___x_1592_);
v___x_1594_ = lean_array_uset(v_bs_x27_1590_, v_i_1573_, v___x_1591_);
v_i_1573_ = v___x_1593_;
v_bs_1574_ = v___x_1594_;
goto _start;
}
else
{
lean_object* v___x_1596_; 
lean_dec_ref(v_s_1586_);
lean_dec_ref(v_bs_1574_);
v___x_1596_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2));
return v___x_1596_;
}
}
else
{
lean_object* v___x_1597_; 
lean_dec_ref(v_bs_1574_);
v___x_1597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2));
return v___x_1597_;
}
}
}
else
{
lean_dec_ref(v_bs_1574_);
goto v___jp_1575_;
}
}
v___jp_1575_:
{
lean_object* v___x_1576_; 
v___x_1576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__1));
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___boxed(lean_object* v_sz_1598_, lean_object* v_i_1599_, lean_object* v_bs_1600_){
_start:
{
size_t v_sz_boxed_1601_; size_t v_i_boxed_1602_; lean_object* v_res_1603_; 
v_sz_boxed_1601_ = lean_unbox_usize(v_sz_1598_);
lean_dec(v_sz_1598_);
v_i_boxed_1602_ = lean_unbox_usize(v_i_1599_);
lean_dec(v_i_1599_);
v_res_1603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(v_sz_boxed_1601_, v_i_boxed_1602_, v_bs_1600_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(lean_object* v_context_1608_, lean_object* v_d_1609_){
_start:
{
lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1618_; lean_object* v_received_1619_; lean_object* v___y_1638_; lean_object* v_a_1641_; 
if (lean_obj_tag(v_d_1609_) == 7)
{
lean_object* v_items_1665_; size_t v_sz_1666_; size_t v___x_1667_; lean_object* v___x_1668_; 
v_items_1665_ = lean_ctor_get(v_d_1609_, 0);
v_sz_1666_ = lean_array_size(v_items_1665_);
v___x_1667_ = ((size_t)0ULL);
lean_inc_ref(v_items_1665_);
v___x_1668_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(v_sz_1666_, v___x_1667_, v_items_1665_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v___x_1670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__3));
v___x_1671_ = lean_string_utf8_byte_size(v_a_1669_);
v___x_1672_ = lean_unsigned_to_nat(0u);
v___x_1673_ = lean_nat_dec_eq(v___x_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1675_ = lean_string_append(v___x_1674_, v_a_1669_);
lean_dec(v_a_1669_);
v___x_1676_ = lean_string_append(v___x_1670_, v___x_1675_);
lean_dec_ref(v___x_1675_);
v_a_1641_ = v___x_1676_;
goto v___jp_1640_;
}
else
{
lean_dec(v_a_1669_);
v_a_1641_ = v___x_1670_;
goto v___jp_1640_;
}
}
else
{
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1677_; 
v_a_1677_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1668_, 1);
v_a_1641_ = v_a_1677_;
goto v___jp_1640_;
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_dec_ref_known(v_d_1609_, 1);
v_a_1678_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1668_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1668_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 0);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
else
{
lean_object* v___x_1686_; 
v___x_1686_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_1641_ = v___x_1686_;
goto v___jp_1640_;
}
v___jp_1611_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = lean_string_append(v___y_1612_, v___y_1613_);
lean_dec_ref(v___y_1613_);
v___x_1615_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
v___x_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
return v___x_1616_;
}
v___jp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1620_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0));
v___x_1621_ = lean_string_append(v___x_1620_, v_context_1608_);
v___x_1622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1));
v___x_1623_ = lean_string_append(v___x_1621_, v___x_1622_);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__0));
v___x_1625_ = lean_string_append(v___x_1623_, v___x_1624_);
v___x_1626_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3));
v___x_1627_ = lean_string_append(v___x_1625_, v___x_1626_);
v___x_1628_ = lean_string_append(v___x_1627_, v_received_1619_);
lean_dec_ref(v_received_1619_);
v___x_1629_ = lean_string_utf8_byte_size(v___y_1618_);
v___x_1630_ = lean_unsigned_to_nat(0u);
v___x_1631_ = lean_nat_dec_eq(v___x_1629_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__1));
v___x_1633_ = lean_string_append(v___x_1632_, v___y_1618_);
lean_dec_ref(v___y_1618_);
v___x_1634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__2));
v___x_1635_ = lean_string_append(v___x_1633_, v___x_1634_);
v___y_1612_ = v___x_1628_;
v___y_1613_ = v___x_1635_;
goto v___jp_1611_;
}
else
{
lean_object* v___x_1636_; 
lean_dec_ref(v___y_1618_);
v___x_1636_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_1612_ = v___x_1628_;
v___y_1613_ = v___x_1636_;
goto v___jp_1611_;
}
}
v___jp_1637_:
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lasm_JS_Data_describe(v_d_1609_);
v___y_1618_ = v___y_1638_;
v_received_1619_ = v___x_1639_;
goto v___jp_1617_;
}
v___jp_1640_:
{
if (lean_obj_tag(v_d_1609_) == 9)
{
lean_object* v_value_1642_; lean_object* v_description_1643_; lean_object* v___x_1644_; uint8_t v___x_1645_; 
v_value_1642_ = lean_ctor_get(v_d_1609_, 0);
v_description_1643_ = lean_ctor_get(v_d_1609_, 1);
v___x_1644_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1645_ = lean_string_dec_eq(v_description_1643_, v___x_1644_);
if (v___x_1645_ == 0)
{
v___y_1638_ = v_a_1641_;
goto v___jp_1637_;
}
else
{
lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1662_; 
lean_inc(v_value_1642_);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_d_1609_);
if (v_isSharedCheck_1662_ == 0)
{
lean_object* v_unused_1663_; lean_object* v_unused_1664_; 
v_unused_1663_ = lean_ctor_get(v_d_1609_, 1);
lean_dec(v_unused_1663_);
v_unused_1664_ = lean_ctor_get(v_d_1609_, 0);
lean_dec(v_unused_1664_);
v___x_1647_ = v_d_1609_;
v_isShared_1648_ = v_isSharedCheck_1662_;
goto v_resetjp_1646_;
}
else
{
lean_dec(v_d_1609_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1662_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
uint32_t v___x_1649_; uint64_t v___x_1650_; lean_object* v___x_1652_; 
v___x_1649_ = 206;
v___x_1650_ = 0ULL;
lean_inc(v_value_1642_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 1, v___x_1644_);
v___x_1652_ = v___x_1647_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_value_1642_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v___x_1644_);
v___x_1652_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
uint32_t v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = lasm_js_value_handle(v_value_1642_);
lean_dec(v_value_1642_);
v___x_1654_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1649_, v___x_1650_, v___x_1652_, v___x_1653_);
lean_dec_ref(v___x_1652_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; uint8_t v___x_1656_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = lean_string_validate_utf8(v_a_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_dec(v_a_1655_);
v___x_1657_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10);
v___x_1658_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1657_);
v___y_1618_ = v_a_1641_;
v_received_1619_ = v___x_1658_;
goto v___jp_1617_;
}
else
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_string_from_utf8_unchecked(v_a_1655_);
v___y_1618_ = v_a_1641_;
v_received_1619_ = v___x_1659_;
goto v___jp_1617_;
}
}
else
{
lean_object* v___x_1660_; 
lean_dec_ref_known(v___x_1654_, 1);
v___x_1660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11));
v___y_1618_ = v_a_1641_;
v_received_1619_ = v___x_1660_;
goto v___jp_1617_;
}
}
}
}
}
else
{
v___y_1638_ = v_a_1641_;
goto v___jp_1637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___boxed(lean_object* v_context_1687_, lean_object* v_d_1688_, lean_object* v_a_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(v_context_1687_, v_d_1688_);
lean_dec_ref(v_context_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(lean_object* v_context_1691_, lean_object* v_bytes_1692_){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = l_Lasm_JS_Wire_decode(v_bytes_1692_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1696_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_a_1695_);
lean_dec_ref_known(v___x_1694_, 1);
v___x_1696_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(v_context_1691_, v_a_1695_);
return v___x_1696_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
v_a_1697_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1694_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1694_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10___boxed(lean_object* v_context_1705_, lean_object* v_bytes_1706_, lean_object* v_a_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(v_context_1705_, v_bytes_1706_);
lean_dec_ref(v_bytes_1706_);
lean_dec_ref(v_context_1705_);
return v_res_1708_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0(void){
_start:
{
uint64_t v___x_1709_; uint8_t v___x_1710_; uint64_t v___x_1711_; 
v___x_1709_ = 8ULL;
v___x_1710_ = 0;
v___x_1711_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(v___x_1710_, v___x_1709_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(lean_object* v_o_1712_, lean_object* v_name_1713_, lean_object* v_args_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; uint64_t v___x_1719_; lean_object* v___x_1720_; 
v___x_1716_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1717_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1717_, 0, v_o_1712_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
lean_inc_ref(v_name_1713_);
v___x_1718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_name_1713_);
v___x_1719_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0);
v___x_1720_ = l_Lasm_JS_Value_invokeRaw(v___x_1717_, v___x_1718_, v_args_1714_, v___x_1719_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1720_, 1);
v___x_1722_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_1723_ = lean_string_append(v___x_1722_, v_name_1713_);
lean_dec_ref(v_name_1713_);
v___x_1724_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(v___x_1723_, v_a_1721_);
lean_dec(v_a_1721_);
lean_dec_ref(v___x_1723_);
return v___x_1724_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec_ref(v_name_1713_);
v_a_1725_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1720_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1720_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___boxed(lean_object* v_o_1733_, lean_object* v_name_1734_, lean_object* v_args_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v_res_1737_; 
v_res_1737_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(v_o_1733_, v_name_1734_, v_args_1735_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___x_1739_, lean_object* v___f_1740_, lean_object* v_a_1741_, lean_object* v___x_1742_, lean_object* v_handler_1743_, lean_object* v_a_1744_, lean_object* v_value_1745_, lean_object* v_a_1746_, lean_object* v___x_1747_, lean_object* v___x_1748_, lean_object* v_x_1749_){
_start:
{
lean_object* v___y_1752_; uint8_t v___y_1753_; lean_object* v_val_1754_; 
if (lean_obj_tag(v_x_1749_) == 0)
{
lean_object* v___x_1757_; 
lean_dec(v_a_1746_);
lean_dec(v_value_1745_);
lean_dec(v_a_1744_);
lean_dec_ref(v_handler_1743_);
lean_dec_ref(v___x_1742_);
lean_dec(v_a_1741_);
lean_dec_ref(v___f_1740_);
lean_dec(v___x_1739_);
v___x_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1757_, 0, v_x_1749_);
return v___x_1757_;
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1810_; 
v_a_1758_ = lean_ctor_get(v_x_1749_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_x_1749_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1760_ = v_x_1749_;
v_isShared_1761_ = v_isSharedCheck_1810_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v_x_1749_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1810_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1802_; lean_object* v___x_1807_; 
v___x_1807_ = l_Lasm_JS_Data_field(v_a_1758_, v___x_1748_);
if (lean_obj_tag(v___x_1807_) == 4)
{
lean_object* v_s_1808_; 
v_s_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc_ref(v_s_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___y_1802_ = v_s_1808_;
goto v___jp_1801_;
}
else
{
lean_object* v___x_1809_; 
lean_dec(v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_1802_ = v___x_1809_;
goto v___jp_1801_;
}
v___jp_1762_:
{
lean_object* v___f_1766_; lean_object* v___x_1767_; 
lean_inc(v___x_1739_);
v___f_1766_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 9, 7);
lean_closure_set(v___f_1766_, 0, v___y_1764_);
lean_closure_set(v___f_1766_, 1, v___y_1765_);
lean_closure_set(v___f_1766_, 2, v_handler_1743_);
lean_closure_set(v___f_1766_, 3, v___x_1739_);
lean_closure_set(v___f_1766_, 4, v___y_1763_);
lean_closure_set(v___f_1766_, 5, v_a_1744_);
lean_closure_set(v___f_1766_, 6, v_value_1745_);
v___x_1767_ = l_Lasm_JS_Data_field(v_a_1758_, v___x_1742_);
lean_dec_ref(v___x_1742_);
lean_dec(v_a_1758_);
if (lean_obj_tag(v___x_1767_) == 9)
{
lean_object* v_value_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1791_; 
v_value_1768_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1791_ == 0)
{
lean_object* v_unused_1792_; 
v_unused_1792_ = lean_ctor_get(v___x_1767_, 1);
lean_dec(v_unused_1792_);
v___x_1770_ = v___x_1767_;
v_isShared_1771_ = v_isSharedCheck_1791_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_value_1768_);
lean_dec(v___x_1767_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1791_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___f_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___f_1772_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1772_, 0, v___f_1766_);
v___x_1773_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__8___closed__0));
v___x_1774_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v___x_1774_);
v___x_1776_ = v___x_1770_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_value_1768_);
lean_ctor_set(v_reuseFailAlloc_1790_, 1, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; uint8_t v___x_1780_; lean_object* v___x_1781_; 
v___x_1777_ = lean_unsigned_to_nat(1u);
v___x_1778_ = lean_mk_empty_array_with_capacity(v___x_1777_);
v___x_1779_ = lean_array_push(v___x_1778_, v___x_1776_);
v___x_1780_ = 0;
v___x_1781_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(v_a_1746_, v___x_1773_, v___x_1779_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1782_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v_a_1782_);
v___x_1784_ = v___x_1760_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
v___y_1752_ = v___f_1772_;
v___y_1753_ = v___x_1780_;
v_val_1754_ = v___x_1784_;
goto v___jp_1751_;
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; 
v_a_1786_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1761_ == 0)
{
lean_ctor_set_tag(v___x_1760_, 0);
lean_ctor_set(v___x_1760_, 0, v_a_1786_);
v___x_1788_ = v___x_1760_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
v___y_1752_ = v___f_1772_;
v___y_1753_ = v___x_1780_;
v_val_1754_ = v___x_1788_;
goto v___jp_1751_;
}
}
}
}
}
else
{
lean_object* v___f_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; lean_object* v___x_1797_; 
lean_dec(v___x_1767_);
lean_dec(v_a_1746_);
v___f_1793_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1793_, 0, v___f_1766_);
v___x_1794_ = lean_mk_empty_array_with_capacity(v___x_1739_);
v___x_1795_ = 0;
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1794_);
v___x_1797_ = v___x_1760_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1794_);
v___x_1797_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
v___x_1799_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1739_, v___x_1795_, v___x_1798_, v___f_1793_);
return v___x_1799_;
}
}
}
v___jp_1801_:
{
lean_object* v___f_1803_; lean_object* v___x_1804_; 
lean_inc_ref(v___y_1802_);
lean_inc_ref(v___x_1742_);
lean_inc(v___x_1739_);
v___f_1803_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 7, 5);
lean_closure_set(v___f_1803_, 0, v___x_1739_);
lean_closure_set(v___f_1803_, 1, v___f_1740_);
lean_closure_set(v___f_1803_, 2, v_a_1741_);
lean_closure_set(v___f_1803_, 3, v___x_1742_);
lean_closure_set(v___f_1803_, 4, v___y_1802_);
v___x_1804_ = l_Lasm_JS_Data_field(v_a_1758_, v___x_1747_);
if (lean_obj_tag(v___x_1804_) == 4)
{
lean_object* v_s_1805_; 
v_s_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc_ref(v_s_1805_);
lean_dec_ref_known(v___x_1804_, 1);
v___y_1763_ = v___f_1803_;
v___y_1764_ = v___y_1802_;
v___y_1765_ = v_s_1805_;
goto v___jp_1762_;
}
else
{
lean_object* v___x_1806_; 
lean_dec(v___x_1804_);
v___x_1806_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_1763_ = v___f_1803_;
v___y_1764_ = v___y_1802_;
v___y_1765_ = v___x_1806_;
goto v___jp_1762_;
}
}
}
}
v___jp_1751_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v_val_1754_);
v___x_1756_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1739_, v___y_1753_, v___x_1755_, v___y_1752_);
return v___x_1756_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___x_1811_, lean_object* v___f_1812_, lean_object* v_a_1813_, lean_object* v___x_1814_, lean_object* v_handler_1815_, lean_object* v_a_1816_, lean_object* v_value_1817_, lean_object* v_a_1818_, lean_object* v___x_1819_, lean_object* v___x_1820_, lean_object* v_x_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___x_1811_, v___f_1812_, v_a_1813_, v___x_1814_, v_handler_1815_, v_a_1816_, v_value_1817_, v_a_1818_, v___x_1819_, v___x_1820_, v_x_1821_);
lean_dec_ref(v___x_1820_);
lean_dec_ref(v___x_1819_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(lean_object* v_bytes_1824_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l_Lasm_JS_Wire_decode(v_bytes_1824_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1826_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1826_);
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
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
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
else
{
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg___boxed(lean_object* v_bytes_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_bytes_1835_);
lean_dec_ref(v_bytes_1835_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(size_t v_sz_1838_, size_t v_i_1839_, lean_object* v_bs_1840_){
_start:
{
uint8_t v___x_1841_; 
v___x_1841_ = lean_usize_dec_lt(v_i_1839_, v_sz_1838_);
if (v___x_1841_ == 0)
{
return v_bs_1840_;
}
else
{
lean_object* v_v_1842_; lean_object* v___x_1843_; lean_object* v_bs_x27_1844_; lean_object* v___x_1845_; size_t v___x_1846_; size_t v___x_1847_; lean_object* v___x_1848_; 
v_v_1842_ = lean_array_uget(v_bs_1840_, v_i_1839_);
v___x_1843_ = lean_unsigned_to_nat(0u);
v_bs_x27_1844_ = lean_array_uset(v_bs_1840_, v_i_1839_, v___x_1843_);
v___x_1845_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_v_1842_);
v___x_1846_ = ((size_t)1ULL);
v___x_1847_ = lean_usize_add(v_i_1839_, v___x_1846_);
v___x_1848_ = lean_array_uset(v_bs_x27_1844_, v_i_1839_, v___x_1845_);
v_i_1839_ = v___x_1847_;
v_bs_1840_ = v___x_1848_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12___boxed(lean_object* v_sz_1850_, lean_object* v_i_1851_, lean_object* v_bs_1852_){
_start:
{
size_t v_sz_boxed_1853_; size_t v_i_boxed_1854_; lean_object* v_res_1855_; 
v_sz_boxed_1853_ = lean_unbox_usize(v_sz_1850_);
lean_dec(v_sz_1850_);
v_i_boxed_1854_ = lean_unbox_usize(v_i_1851_);
lean_dec(v_i_1851_);
v_res_1855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(v_sz_boxed_1853_, v_i_boxed_1854_, v_bs_1852_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(lean_object* v_o_1856_, lean_object* v_keys_1857_){
_start:
{
uint32_t v___x_1859_; uint32_t v___x_1860_; uint64_t v___x_1861_; size_t v_sz_1862_; size_t v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1859_ = 203;
v___x_1860_ = lasm_js_value_handle(v_o_1856_);
v___x_1861_ = 0ULL;
v_sz_1862_ = lean_array_size(v_keys_1857_);
v___x_1863_ = ((size_t)0ULL);
v___x_1864_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(v_sz_1862_, v___x_1863_, v_keys_1857_);
v___x_1865_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
v___x_1866_ = l_Lasm_JS_Wire_encode(v___x_1865_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1868_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1868_, 0, v_o_1856_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = lasm_js_call(v___x_1859_, v___x_1860_, v___x_1861_, v___x_1866_, v___x_1868_);
lean_dec_ref_known(v___x_1868_, 2);
lean_dec_ref(v___x_1866_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1871_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v___x_1871_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_a_1870_);
lean_dec(v_a_1870_);
return v___x_1871_;
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
v_a_1872_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1869_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1869_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6___boxed(lean_object* v_o_1880_, lean_object* v_keys_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_o_1880_, v_keys_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_1902_, lean_object* v_a_1903_, lean_object* v_handler_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_args_1907_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1911_ = lean_unsigned_to_nat(0u);
v___x_1912_ = lean_array_get_size(v_args_1907_);
v___x_1913_ = lean_nat_dec_lt(v___x_1911_, v___x_1912_);
if (v___x_1913_ == 0)
{
lean_dec(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_handler_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v___f_1902_);
goto v___jp_1909_;
}
else
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_array_fget_borrowed(v_args_1907_, v___x_1911_);
if (lean_obj_tag(v___x_1914_) == 9)
{
lean_object* v_value_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; lean_object* v_val_1923_; lean_object* v___x_1926_; 
v_value_1915_ = lean_ctor_get(v___x_1914_, 0);
v___x_1916_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4));
v___x_1917_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5));
v___x_1918_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6));
lean_inc_n(v_value_1915_, 2);
v___f_1919_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 12, 10);
lean_closure_set(v___f_1919_, 0, v___x_1911_);
lean_closure_set(v___f_1919_, 1, v___f_1902_);
lean_closure_set(v___f_1919_, 2, v_a_1903_);
lean_closure_set(v___f_1919_, 3, v___x_1918_);
lean_closure_set(v___f_1919_, 4, v_handler_1904_);
lean_closure_set(v___f_1919_, 5, v_a_1905_);
lean_closure_set(v___f_1919_, 6, v_value_1915_);
lean_closure_set(v___f_1919_, 7, v_a_1906_);
lean_closure_set(v___f_1919_, 8, v___x_1917_);
lean_closure_set(v___f_1919_, 9, v___x_1916_);
v___x_1920_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__7));
v___x_1921_ = 0;
v___x_1926_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_value_1915_, v___x_1920_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
lean_ctor_set_tag(v___x_1929_, 1);
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
v_val_1923_ = v___x_1932_;
goto v___jp_1922_;
}
}
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
v_a_1935_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1926_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1926_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
lean_ctor_set_tag(v___x_1937_, 0);
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
v_val_1923_ = v___x_1940_;
goto v___jp_1922_;
}
}
}
v___jp_1922_:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_val_1923_);
v___x_1925_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1911_, v___x_1921_, v___x_1924_, v___f_1919_);
return v___x_1925_;
}
}
else
{
lean_dec(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_handler_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v___f_1902_);
goto v___jp_1909_;
}
}
v___jp_1909_:
{
lean_object* v___x_1910_; 
v___x_1910_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__3));
return v___x_1910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_1943_, lean_object* v_a_1944_, lean_object* v_handler_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_args_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_1943_, v_a_1944_, v_handler_1945_, v_a_1946_, v_a_1947_, v_args_1948_);
lean_dec_ref(v_args_1948_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_o_1952_, lean_object* v_key_1953_){
_start:
{
uint32_t v___x_1955_; uint32_t v___x_1956_; uint64_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1955_ = 203;
v___x_1956_ = lasm_js_value_handle(v_o_1952_);
v___x_1957_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
lean_inc_ref(v_key_1953_);
v___x_1958_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1958_, 0, v_key_1953_);
v___x_1959_ = l_Lasm_JS_Wire_encode(v___x_1958_);
lean_dec_ref_known(v___x_1958_, 1);
v___x_1960_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1961_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_o_1952_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = lasm_js_call(v___x_1955_, v___x_1956_, v___x_1957_, v___x_1959_, v___x_1961_);
lean_dec_ref_known(v___x_1961_, 2);
lean_dec_ref(v___x_1959_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_a_1963_);
lean_dec_ref_known(v___x_1962_, 1);
v___x_1964_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0));
v___x_1965_ = l_String_quote(v_key_1953_);
v___x_1966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
v___x_1967_ = lean_unsigned_to_nat(120u);
v___x_1968_ = lean_unsigned_to_nat(0u);
v___x_1969_ = l_Std_Format_pretty(v___x_1966_, v___x_1967_, v___x_1968_, v___x_1968_);
v___x_1970_ = lean_string_append(v___x_1964_, v___x_1969_);
lean_dec_ref(v___x_1969_);
v___x_1971_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1970_, v_a_1963_);
lean_dec(v_a_1963_);
lean_dec_ref(v___x_1970_);
return v___x_1971_;
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec_ref(v_key_1953_);
v_a_1972_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1962_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1962_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_o_1980_, lean_object* v_key_1981_, lean_object* v_a_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_o_1980_, v_key_1981_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_1988_){
_start:
{
lean_object* v___f_1990_; lean_object* v___x_1991_; 
v___f_1990_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_1991_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc_n(v_a_1992_, 2);
lean_dec_ref_known(v___x_1991_, 1);
v___x_1993_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_1994_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1992_, v___x_1993_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
lean_inc(v_a_1992_);
v___x_1997_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1992_, v___x_1996_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1997_, 1);
v___x_1999_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__3));
v___x_2000_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1992_, v___x_1999_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_2000_, 1);
v___f_2002_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2002_, 0, v___f_1990_);
lean_closure_set(v___f_2002_, 1, v_a_1995_);
lean_closure_set(v___f_2002_, 2, v_handler_1988_);
lean_closure_set(v___f_2002_, 3, v_a_1998_);
lean_closure_set(v___f_2002_, 4, v_a_2001_);
v___x_2003_ = l_Lasm_JS_Function_ofFn(v___f_2002_);
return v___x_2003_;
}
else
{
lean_dec(v_a_1998_);
lean_dec(v_a_1995_);
lean_dec_ref(v_handler_1988_);
return v___x_2000_;
}
}
else
{
lean_dec(v_a_1995_);
lean_dec(v_a_1992_);
lean_dec_ref(v_handler_1988_);
return v___x_1997_;
}
}
else
{
lean_dec(v_a_1992_);
lean_dec_ref(v_handler_1988_);
return v___x_1994_;
}
}
else
{
lean_dec_ref(v_handler_1988_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lasm_Fetch_jsFetchHandler(v_handler_2004_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg(lean_object* v_d_2007_){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_d_2007_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg___boxed(lean_object* v_d_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg(v_d_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16(lean_object* v_context_2013_, lean_object* v_d_2014_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_d_2014_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___boxed(lean_object* v_context_2017_, lean_object* v_d_2018_, lean_object* v_a_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16(v_context_2017_, v_d_2018_);
lean_dec_ref(v_context_2017_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13(lean_object* v_context_2021_, lean_object* v_bytes_2022_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_bytes_2022_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___boxed(lean_object* v_context_2025_, lean_object* v_bytes_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13(v_context_2025_, v_bytes_2026_);
lean_dec_ref(v_bytes_2026_);
lean_dec_ref(v_context_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_2033_){
_start:
{
if (lean_obj_tag(v_x_2033_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2043_; 
v_a_2035_ = lean_ctor_get(v_x_2033_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_x_2033_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2037_ = v_x_2033_;
v_isShared_2038_ = v_isSharedCheck_2043_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v_x_2033_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2043_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
}
}
else
{
lean_object* v___x_2044_; 
lean_dec_ref_known(v_x_2033_, 1);
v___x_2044_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_2044_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Lasm_Fetch_serveNode___lam__0(v_x_2045_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_2048_, lean_object* v_x_2049_){
_start:
{
if (lean_obj_tag(v_x_2049_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2059_; 
lean_dec_ref(v___f_2048_);
v_a_2051_ = lean_ctor_get(v_x_2049_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_2049_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2053_ = v_x_2049_;
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v_x_2049_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2057_; 
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2080_; 
v_a_2060_ = lean_ctor_get(v_x_2049_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2049_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2062_ = v_x_2049_;
v_isShared_2063_ = v_isSharedCheck_2080_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v_x_2049_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2080_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_flush_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; lean_object* v_val_2068_; lean_object* v___x_2071_; 
v_flush_2064_ = lean_ctor_get(v_a_2060_, 0);
lean_inc_ref(v_flush_2064_);
lean_dec(v_a_2060_);
v___x_2065_ = lean_unsigned_to_nat(0u);
v___x_2066_ = 0;
v___x_2071_ = lean_apply_1(v_flush_2064_, lean_box(0));
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___x_2071_, 1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v_a_2072_);
v___x_2074_ = v___x_2062_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2072_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
v_val_2068_ = v___x_2074_;
goto v___jp_2067_;
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; 
v_a_2076_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2071_, 1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set_tag(v___x_2062_, 0);
lean_ctor_set(v___x_2062_, 0, v_a_2076_);
v___x_2078_ = v___x_2062_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
v_val_2068_ = v___x_2078_;
goto v___jp_2067_;
}
}
v___jp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v_val_2068_);
v___x_2070_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2065_, v___x_2066_, v___x_2069_, v___f_2048_);
return v___x_2070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_2081_, lean_object* v_x_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lasm_Fetch_serveNode___lam__1(v___f_2081_, v_x_2082_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_2085_, lean_object* v_x_2086_){
_start:
{
if (lean_obj_tag(v_x_2086_) == 0)
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
lean_dec_ref(v___f_2085_);
v_a_2088_ = lean_ctor_get(v_x_2086_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_x_2086_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v_x_2086_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v_x_2086_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
}
}
}
else
{
lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2108_; 
v_isSharedCheck_2108_ = !lean_is_exclusive(v_x_2086_);
if (v_isSharedCheck_2108_ == 0)
{
lean_object* v_unused_2109_; 
v_unused_2109_ = lean_ctor_get(v_x_2086_, 0);
lean_dec(v_unused_2109_);
v___x_2098_ = v_x_2086_;
v_isShared_2099_ = v_isSharedCheck_2108_;
goto v_resetjp_2097_;
}
else
{
lean_dec(v_x_2086_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2108_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; uint8_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___x_2100_ = lean_unsigned_to_nat(0u);
v___x_2101_ = 0;
v___x_2102_ = lean_get_stdout();
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2102_);
v___x_2104_ = v___x_2098_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
v___x_2106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2100_, v___x_2101_, v___x_2105_, v___f_2085_);
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_2110_, lean_object* v_x_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lasm_Fetch_serveNode___lam__2(v___f_2110_, v_x_2111_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v_x_2114_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2124_; 
v_a_2116_ = lean_ctor_get(v_x_2114_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2118_ = v_x_2114_;
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v_x_2114_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
return v___x_2122_;
}
}
}
else
{
lean_object* v___x_2125_; 
lean_dec_ref_known(v_x_2114_, 1);
v___x_2125_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_2125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v_x_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Lasm_Fetch_serveNode___lam__3(v_x_2126_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v_snd_2130_, lean_object* v___y_2131_, uint16_t v_status_2132_, lean_object* v_body_2133_, lean_object* v_x_2134_){
_start:
{
if (lean_obj_tag(v_x_2134_) == 0)
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v_body_2133_);
lean_dec(v_snd_2130_);
v_a_2136_ = lean_ctor_get(v_x_2134_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_x_2134_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2138_ = v_x_2134_;
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v_x_2134_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2142_; 
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
return v___x_2142_;
}
}
}
else
{
lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2162_; 
v_isSharedCheck_2162_ = !lean_is_exclusive(v_x_2134_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v_x_2134_, 0);
lean_dec(v_unused_2163_);
v___x_2146_ = v_x_2134_;
v_isShared_2147_ = v_isSharedCheck_2162_;
goto v_resetjp_2145_;
}
else
{
lean_dec(v_x_2134_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2162_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2148_; lean_object* v___y_2150_; uint8_t v___x_2159_; 
v___x_2148_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__5___closed__0));
v___x_2159_ = l_Lasm_Fetch_bodyless(v___y_2131_, v_status_2132_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
v___x_2160_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_body_2133_);
v___y_2150_ = v___x_2160_;
goto v___jp_2149_;
}
else
{
lean_object* v___x_2161_; 
lean_dec_ref(v_body_2133_);
v___x_2161_ = lean_box(0);
v___y_2150_ = v___x_2161_;
goto v___jp_2149_;
}
v___jp_2149_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2151_ = lean_unsigned_to_nat(1u);
v___x_2152_ = lean_mk_empty_array_with_capacity(v___x_2151_);
v___x_2153_ = lean_array_push(v___x_2152_, v___y_2150_);
v___x_2154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2154_, 0, v_snd_2130_);
lean_ctor_set(v___x_2154_, 1, v___x_2148_);
lean_ctor_set(v___x_2154_, 2, v___x_2153_);
if (v_isShared_2147_ == 0)
{
lean_ctor_set(v___x_2146_, 0, v___x_2154_);
v___x_2156_ = v___x_2146_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2154_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v_snd_2164_, lean_object* v___y_2165_, lean_object* v_status_2166_, lean_object* v_body_2167_, lean_object* v_x_2168_, lean_object* v___y_2169_){
_start:
{
uint16_t v_status_boxed_2170_; lean_object* v_res_2171_; 
v_status_boxed_2170_ = lean_unbox(v_status_2166_);
v_res_2171_ = l_Lasm_Fetch_serveNode___lam__5(v_snd_2164_, v___y_2165_, v_status_boxed_2170_, v_body_2167_, v_x_2168_);
lean_dec_ref(v___y_2165_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_2172_, size_t v_i_2173_, size_t v_stop_2174_, lean_object* v_b_2175_){
_start:
{
uint8_t v___x_2176_; 
v___x_2176_ = lean_usize_dec_eq(v_i_2173_, v_stop_2174_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; lean_object* v_fst_2178_; lean_object* v_snd_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; size_t v___x_2184_; size_t v___x_2185_; 
v___x_2177_ = lean_array_uget_borrowed(v_as_2172_, v_i_2173_);
v_fst_2178_ = lean_ctor_get(v___x_2177_, 0);
v_snd_2179_ = lean_ctor_get(v___x_2177_, 1);
lean_inc(v_fst_2178_);
v___x_2180_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2180_, 0, v_fst_2178_);
v___x_2181_ = lean_array_push(v_b_2175_, v___x_2180_);
lean_inc(v_snd_2179_);
v___x_2182_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2182_, 0, v_snd_2179_);
v___x_2183_ = lean_array_push(v___x_2181_, v___x_2182_);
v___x_2184_ = ((size_t)1ULL);
v___x_2185_ = lean_usize_add(v_i_2173_, v___x_2184_);
v_i_2173_ = v___x_2185_;
v_b_2175_ = v___x_2183_;
goto _start;
}
else
{
return v_b_2175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_2187_, lean_object* v_i_2188_, lean_object* v_stop_2189_, lean_object* v_b_2190_){
_start:
{
size_t v_i_boxed_2191_; size_t v_stop_boxed_2192_; lean_object* v_res_2193_; 
v_i_boxed_2191_ = lean_unbox_usize(v_i_2188_);
lean_dec(v_i_2188_);
v_stop_boxed_2192_ = lean_unbox_usize(v_stop_2189_);
lean_dec(v_stop_2189_);
v_res_2193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_2187_, v_i_boxed_2191_, v_stop_boxed_2192_, v_b_2190_);
lean_dec_ref(v_as_2187_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_2194_, lean_object* v_name_2195_, lean_object* v_args_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; uint64_t v___x_2201_; lean_object* v___x_2202_; 
v___x_2198_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2199_, 0, v_o_2194_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
lean_inc_ref(v_name_2195_);
v___x_2200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_name_2195_);
v___x_2201_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1);
v___x_2202_ = l_Lasm_JS_Value_invokeRaw(v___x_2199_, v___x_2200_, v_args_2196_, v___x_2201_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_2205_ = lean_string_append(v___x_2204_, v_name_2195_);
lean_dec_ref(v_name_2195_);
v___x_2206_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2205_, v_a_2203_);
lean_dec(v_a_2203_);
lean_dec_ref(v___x_2205_);
return v___x_2206_;
}
else
{
lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2214_; 
lean_dec_ref(v_name_2195_);
v_a_2207_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2209_ = v___x_2202_;
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2202_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2212_; 
if (v_isShared_2210_ == 0)
{
v___x_2212_ = v___x_2209_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_a_2207_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_2215_, lean_object* v_name_2216_, lean_object* v_args_2217_, lean_object* v_a_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_2215_, v_name_2216_, v_args_2217_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v___x_2221_, lean_object* v_snd_2222_, lean_object* v___y_2223_, lean_object* v_x_2224_){
_start:
{
uint8_t v___y_2227_; lean_object* v___y_2228_; lean_object* v_val_2229_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; 
if (lean_obj_tag(v_x_2224_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2268_; 
lean_dec_ref(v___y_2223_);
lean_dec(v_snd_2222_);
lean_dec(v___x_2221_);
v_a_2260_ = lean_ctor_get(v_x_2224_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v_x_2224_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2262_ = v_x_2224_;
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v_x_2224_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
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
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; 
v___x_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
}
}
else
{
lean_object* v_a_2269_; uint16_t v_status_2270_; lean_object* v_headers_2271_; lean_object* v_body_2272_; lean_object* v___y_2274_; lean_object* v___x_2286_; lean_object* v___x_2287_; uint8_t v___x_2288_; 
v_a_2269_ = lean_ctor_get(v_x_2224_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v_x_2224_, 1);
v_status_2270_ = lean_ctor_get_uint16(v_a_2269_, sizeof(void*)*2);
v_headers_2271_ = lean_ctor_get(v_a_2269_, 0);
lean_inc_ref(v_headers_2271_);
v_body_2272_ = lean_ctor_get(v_a_2269_, 1);
lean_inc_ref(v_body_2272_);
lean_dec(v_a_2269_);
v___x_2286_ = lean_mk_empty_array_with_capacity(v___x_2221_);
v___x_2287_ = lean_array_get_size(v_headers_2271_);
v___x_2288_ = lean_nat_dec_lt(v___x_2221_, v___x_2287_);
if (v___x_2288_ == 0)
{
lean_dec_ref(v_headers_2271_);
v___y_2274_ = v___x_2286_;
goto v___jp_2273_;
}
else
{
uint8_t v___x_2289_; 
v___x_2289_ = lean_nat_dec_le(v___x_2287_, v___x_2287_);
if (v___x_2289_ == 0)
{
if (v___x_2288_ == 0)
{
lean_dec_ref(v_headers_2271_);
v___y_2274_ = v___x_2286_;
goto v___jp_2273_;
}
else
{
size_t v___x_2290_; size_t v___x_2291_; lean_object* v___x_2292_; 
v___x_2290_ = ((size_t)0ULL);
v___x_2291_ = lean_usize_of_nat(v___x_2287_);
v___x_2292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_2271_, v___x_2290_, v___x_2291_, v___x_2286_);
lean_dec_ref(v_headers_2271_);
v___y_2274_ = v___x_2292_;
goto v___jp_2273_;
}
}
else
{
size_t v___x_2293_; size_t v___x_2294_; lean_object* v___x_2295_; 
v___x_2293_ = ((size_t)0ULL);
v___x_2294_ = lean_usize_of_nat(v___x_2287_);
v___x_2295_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_2271_, v___x_2293_, v___x_2294_, v___x_2286_);
lean_dec_ref(v_headers_2271_);
v___y_2274_ = v___x_2295_;
goto v___jp_2273_;
}
}
v___jp_2273_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___f_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; uint8_t v___x_2282_; 
v___x_2275_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__4___closed__0));
v___x_2276_ = lean_box(v_status_2270_);
lean_inc(v_snd_2222_);
v___f_2277_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 6, 4);
lean_closure_set(v___f_2277_, 0, v_snd_2222_);
lean_closure_set(v___f_2277_, 1, v___y_2223_);
lean_closure_set(v___f_2277_, 2, v___x_2276_);
lean_closure_set(v___f_2277_, 3, v_body_2272_);
v___x_2278_ = lean_uint16_to_nat(v_status_2270_);
v___x_2279_ = lean_nat_to_int(v___x_2278_);
v___x_2280_ = lean_nat_abs(v___x_2279_);
v___x_2281_ = lean_cstr_to_nat("9007199254740991");
v___x_2282_ = lean_nat_dec_le(v___x_2280_, v___x_2281_);
lean_dec(v___x_2280_);
if (v___x_2282_ == 0)
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2279_);
v___y_2233_ = v___y_2274_;
v___y_2234_ = v___x_2275_;
v___y_2235_ = v___f_2277_;
v___y_2236_ = v___x_2283_;
goto v___jp_2232_;
}
else
{
double v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = l_Float_ofInt(v___x_2279_);
lean_dec(v___x_2279_);
v___x_2285_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2285_, 0, v___x_2284_);
v___y_2233_ = v___y_2274_;
v___y_2234_ = v___x_2275_;
v___y_2235_ = v___f_2277_;
v___y_2236_ = v___x_2285_;
goto v___jp_2232_;
}
}
}
v___jp_2226_:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2230_, 0, v_val_2229_);
v___x_2231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2221_, v___y_2227_, v___x_2230_, v___y_2228_);
return v___x_2231_;
}
v___jp_2232_:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; lean_object* v___x_2243_; 
v___x_2237_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___y_2233_);
v___x_2238_ = lean_unsigned_to_nat(2u);
v___x_2239_ = lean_mk_empty_array_with_capacity(v___x_2238_);
v___x_2240_ = lean_array_push(v___x_2239_, v___y_2236_);
v___x_2241_ = lean_array_push(v___x_2240_, v___x_2237_);
v___x_2242_ = 0;
lean_inc_ref(v___y_2234_);
v___x_2243_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_2222_, v___y_2234_, v___x_2241_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2251_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2246_ = v___x_2243_;
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2243_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 1);
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
v___y_2227_ = v___x_2242_;
v___y_2228_ = v___y_2235_;
v_val_2229_ = v___x_2249_;
goto v___jp_2226_;
}
}
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
v_a_2252_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v___x_2243_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_dec(v___x_2243_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set_tag(v___x_2254_, 0);
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
v___y_2227_ = v___x_2242_;
v___y_2228_ = v___y_2235_;
v_val_2229_ = v___x_2257_;
goto v___jp_2226_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v___x_2296_, lean_object* v_snd_2297_, lean_object* v___y_2298_, lean_object* v_x_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lasm_Fetch_serveNode___lam__4(v___x_2296_, v_snd_2297_, v___y_2298_, v_x_2299_);
return v_res_2301_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__6___closed__0(void){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_2303_ = lean_string_utf8_byte_size(v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v___y_2305_, lean_object* v___x_2306_, lean_object* v_handler_2307_, lean_object* v___x_2308_, lean_object* v___f_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v_body_2312_){
_start:
{
lean_object* v___y_2315_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; 
v___x_2320_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_2321_ = lean_string_utf8_byte_size(v___y_2310_);
v___x_2322_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__6___closed__0, &l_Lasm_Fetch_serveNode___lam__6___closed__0_once, _init_l_Lasm_Fetch_serveNode___lam__6___closed__0);
v___x_2323_ = lean_nat_dec_le(v___x_2322_, v___x_2321_);
if (v___x_2323_ == 0)
{
v___y_2315_ = v___y_2310_;
goto v___jp_2314_;
}
else
{
uint8_t v___x_2324_; 
v___x_2324_ = lean_string_memcmp(v___y_2310_, v___x_2320_, v___x_2308_, v___x_2308_, v___x_2322_);
if (v___x_2324_ == 0)
{
v___y_2315_ = v___y_2310_;
goto v___jp_2314_;
}
else
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__1));
v___x_2326_ = lean_string_append(v___x_2325_, v___y_2311_);
v___x_2327_ = lean_string_append(v___x_2326_, v___y_2310_);
lean_dec_ref(v___y_2310_);
v___y_2315_ = v___x_2327_;
goto v___jp_2314_;
}
}
v___jp_2314_:
{
lean_object* v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2316_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2316_, 0, v___y_2305_);
lean_ctor_set(v___x_2316_, 1, v___y_2315_);
lean_ctor_set(v___x_2316_, 2, v___x_2306_);
lean_ctor_set(v___x_2316_, 3, v_body_2312_);
v___x_2317_ = 0;
v___x_2318_ = l_Lasm_Fetch_respond(v_handler_2307_, v___x_2316_);
v___x_2319_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2308_, v___x_2317_, v___x_2318_, v___f_2309_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v___y_2328_, lean_object* v___x_2329_, lean_object* v_handler_2330_, lean_object* v___x_2331_, lean_object* v___f_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v_body_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lasm_Fetch_serveNode___lam__6(v___y_2328_, v___x_2329_, v_handler_2330_, v___x_2331_, v___f_2332_, v___y_2333_, v___y_2334_, v_body_2335_);
lean_dec_ref(v___y_2334_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v___f_2338_, lean_object* v_x_2339_){
_start:
{
if (lean_obj_tag(v_x_2339_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2349_; 
lean_dec_ref(v___f_2338_);
v_a_2341_ = lean_ctor_get(v_x_2339_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v_x_2339_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2343_ = v_x_2339_;
v_isShared_2344_ = v_isSharedCheck_2349_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v_x_2339_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2349_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2347_; 
v___x_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
return v___x_2347_;
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2351_; 
v_a_2350_ = lean_ctor_get(v_x_2339_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v_x_2339_, 1);
v___x_2351_ = lean_apply_2(v___f_2338_, v_a_2350_, lean_box(0));
return v___x_2351_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v___f_2352_, lean_object* v_x_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lasm_Fetch_serveNode___lam__7(v___f_2352_, v_x_2353_);
return v_res_2355_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_2356_; uint8_t v___x_2357_; uint64_t v___x_2358_; 
v___x_2356_ = 8ULL;
v___x_2357_ = 0;
v___x_2358_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v___x_2357_, v___x_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_2359_, lean_object* v_name_2360_, lean_object* v_args_2361_){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; uint64_t v___x_2366_; lean_object* v___x_2367_; 
v___x_2363_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2364_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2364_, 0, v_o_2359_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
lean_inc_ref(v_name_2360_);
v___x_2365_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2365_, 0, v_name_2360_);
v___x_2366_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_2367_ = l_Lasm_JS_Value_invokeRaw(v___x_2364_, v___x_2365_, v_args_2361_, v___x_2366_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
v___x_2369_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_2370_ = lean_string_append(v___x_2369_, v_name_2360_);
lean_dec_ref(v_name_2360_);
v___x_2371_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v___x_2370_, v_a_2368_);
lean_dec(v_a_2368_);
lean_dec_ref(v___x_2370_);
return v___x_2371_;
}
else
{
lean_dec_ref(v_name_2360_);
return v___x_2367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_2372_, lean_object* v_name_2373_, lean_object* v_args_2374_, lean_object* v_a_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_2372_, v_name_2373_, v_args_2374_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_2378_, uint8_t v___x_2379_, lean_object* v___f_2380_, lean_object* v___x_2381_, lean_object* v_a_2382_, lean_object* v_x_2383_){
_start:
{
lean_object* v_val_2386_; 
if (lean_obj_tag(v_x_2383_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2397_; 
lean_dec(v_a_2382_);
lean_dec_ref(v___f_2380_);
lean_dec(v___x_2378_);
v_a_2389_ = lean_ctor_get(v_x_2383_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2391_ = v_x_2383_;
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v_x_2383_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2416_; 
v_a_2398_ = lean_ctor_get(v_x_2383_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2400_ = v_x_2383_;
v_isShared_2401_ = v_isSharedCheck_2416_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v_x_2383_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2416_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2402_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__9___closed__0));
v___x_2403_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2404_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2404_, 0, v_a_2398_);
lean_ctor_set(v___x_2404_, 1, v___x_2403_);
v___x_2405_ = lean_mk_empty_array_with_capacity(v___x_2381_);
v___x_2406_ = lean_array_push(v___x_2405_, v___x_2404_);
v___x_2407_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_2382_, v___x_2402_, v___x_2406_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2410_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v_a_2408_);
v___x_2410_ = v___x_2400_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2408_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
v_val_2386_ = v___x_2410_;
goto v___jp_2385_;
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; 
v_a_2412_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2407_, 1);
if (v_isShared_2401_ == 0)
{
lean_ctor_set_tag(v___x_2400_, 0);
lean_ctor_set(v___x_2400_, 0, v_a_2412_);
v___x_2414_ = v___x_2400_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
v_val_2386_ = v___x_2414_;
goto v___jp_2385_;
}
}
}
}
v___jp_2385_:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_val_2386_);
v___x_2388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2378_, v___x_2379_, v___x_2387_, v___f_2380_);
return v___x_2388_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_2417_, lean_object* v___x_2418_, lean_object* v___f_2419_, lean_object* v___x_2420_, lean_object* v_a_2421_, lean_object* v_x_2422_, lean_object* v___y_2423_){
_start:
{
uint8_t v___x_12310__boxed_2424_; lean_object* v_res_2425_; 
v___x_12310__boxed_2424_ = lean_unbox(v___x_2418_);
v_res_2425_ = l_Lasm_Fetch_serveNode___lam__9(v___x_2417_, v___x_12310__boxed_2424_, v___f_2419_, v___x_2420_, v_a_2421_, v_x_2422_);
lean_dec(v___x_2420_);
return v_res_2425_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_2428_, size_t v_i_2429_, size_t v_stop_2430_){
_start:
{
uint8_t v___x_2431_; 
v___x_2431_ = lean_usize_dec_eq(v_i_2429_, v_stop_2430_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; lean_object* v_fst_2433_; uint8_t v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; uint8_t v___x_2437_; 
v___x_2432_ = lean_array_uget_borrowed(v_as_2428_, v_i_2429_);
v_fst_2433_ = lean_ctor_get(v___x_2432_, 0);
v___x_2434_ = 1;
lean_inc(v_fst_2433_);
v___x_2435_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_2433_);
v___x_2436_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_2437_ = lean_string_dec_eq(v___x_2435_, v___x_2436_);
if (v___x_2437_ == 0)
{
lean_object* v___x_2438_; uint8_t v___x_2439_; 
v___x_2438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_2439_ = lean_string_dec_eq(v___x_2435_, v___x_2438_);
lean_dec_ref(v___x_2435_);
if (v___x_2439_ == 0)
{
size_t v___x_2440_; size_t v___x_2441_; 
v___x_2440_ = ((size_t)1ULL);
v___x_2441_ = lean_usize_add(v_i_2429_, v___x_2440_);
v_i_2429_ = v___x_2441_;
goto _start;
}
else
{
return v___x_2434_;
}
}
else
{
lean_dec_ref(v___x_2435_);
return v___x_2434_;
}
}
else
{
uint8_t v___x_2443_; 
v___x_2443_ = 0;
return v___x_2443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_2444_, lean_object* v_i_2445_, lean_object* v_stop_2446_){
_start:
{
size_t v_i_boxed_2447_; size_t v_stop_boxed_2448_; uint8_t v_res_2449_; lean_object* v_r_2450_; 
v_i_boxed_2447_ = lean_unbox_usize(v_i_2445_);
lean_dec(v_i_2445_);
v_stop_boxed_2448_ = lean_unbox_usize(v_stop_2446_);
lean_dec(v_stop_2446_);
v_res_2449_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_2444_, v_i_boxed_2447_, v_stop_boxed_2448_);
lean_dec_ref(v_as_2444_);
v_r_2450_ = lean_box(v_res_2449_);
return v_r_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_2451_, lean_object* v_range_2452_, lean_object* v_b_2453_, lean_object* v_i_2454_){
_start:
{
lean_object* v_stop_2455_; lean_object* v_step_2456_; uint8_t v___x_2457_; 
v_stop_2455_ = lean_ctor_get(v_range_2452_, 1);
v_step_2456_ = lean_ctor_get(v_range_2452_, 2);
v___x_2457_ = lean_nat_dec_lt(v_i_2454_, v_stop_2455_);
if (v___x_2457_ == 0)
{
lean_dec(v_i_2454_);
return v_b_2453_;
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2458_ = lean_unsigned_to_nat(2u);
v___x_2459_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2460_ = lean_unsigned_to_nat(1u);
v___x_2461_ = lean_nat_mul(v___x_2458_, v_i_2454_);
v___x_2462_ = lean_array_get_borrowed(v___x_2459_, v___y_2451_, v___x_2461_);
v___x_2463_ = lean_nat_add(v___x_2461_, v___x_2460_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_array_get_borrowed(v___x_2459_, v___y_2451_, v___x_2463_);
lean_dec(v___x_2463_);
lean_inc(v___x_2464_);
lean_inc(v___x_2462_);
v___x_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2462_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = lean_array_push(v_b_2453_, v___x_2465_);
v___x_2467_ = lean_nat_add(v_i_2454_, v_step_2456_);
lean_dec(v_i_2454_);
v_b_2453_ = v___x_2466_;
v_i_2454_ = v___x_2467_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_2469_, lean_object* v_range_2470_, lean_object* v_b_2471_, lean_object* v_i_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_2469_, v_range_2470_, v_b_2471_, v_i_2472_);
lean_dec_ref(v_range_2470_);
lean_dec_ref(v___y_2469_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_2474_, size_t v_i_2475_, size_t v_stop_2476_, lean_object* v_b_2477_){
_start:
{
lean_object* v___y_2479_; uint8_t v___x_2483_; 
v___x_2483_ = lean_usize_dec_eq(v_i_2475_, v_stop_2476_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_array_uget_borrowed(v_as_2474_, v_i_2475_);
if (lean_obj_tag(v___x_2484_) == 4)
{
lean_object* v_s_2485_; lean_object* v___x_2486_; 
v_s_2485_ = lean_ctor_get(v___x_2484_, 0);
lean_inc_ref(v_s_2485_);
v___x_2486_ = lean_array_push(v_b_2477_, v_s_2485_);
v___y_2479_ = v___x_2486_;
goto v___jp_2478_;
}
else
{
v___y_2479_ = v_b_2477_;
goto v___jp_2478_;
}
}
else
{
return v_b_2477_;
}
v___jp_2478_:
{
size_t v___x_2480_; size_t v___x_2481_; 
v___x_2480_ = ((size_t)1ULL);
v___x_2481_ = lean_usize_add(v_i_2475_, v___x_2480_);
v_i_2475_ = v___x_2481_;
v_b_2477_ = v___y_2479_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_2487_, lean_object* v_i_2488_, lean_object* v_stop_2489_, lean_object* v_b_2490_){
_start:
{
size_t v_i_boxed_2491_; size_t v_stop_boxed_2492_; lean_object* v_res_2493_; 
v_i_boxed_2491_ = lean_unbox_usize(v_i_2488_);
lean_dec(v_i_2488_);
v_stop_boxed_2492_ = lean_unbox_usize(v_stop_2489_);
lean_dec(v_stop_2489_);
v_res_2493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2487_, v_i_boxed_2491_, v_stop_boxed_2492_, v_b_2490_);
lean_dec_ref(v_as_2487_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_2496_, lean_object* v_start_2497_, lean_object* v_stop_2498_){
_start:
{
lean_object* v___x_2499_; uint8_t v___x_2500_; 
v___x_2499_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_2500_ = lean_nat_dec_lt(v_start_2497_, v_stop_2498_);
if (v___x_2500_ == 0)
{
return v___x_2499_;
}
else
{
lean_object* v___x_2501_; uint8_t v___x_2502_; 
v___x_2501_ = lean_array_get_size(v_as_2496_);
v___x_2502_ = lean_nat_dec_le(v_stop_2498_, v___x_2501_);
if (v___x_2502_ == 0)
{
uint8_t v___x_2503_; 
v___x_2503_ = lean_nat_dec_lt(v_start_2497_, v___x_2501_);
if (v___x_2503_ == 0)
{
return v___x_2499_;
}
else
{
size_t v___x_2504_; size_t v___x_2505_; lean_object* v___x_2506_; 
v___x_2504_ = lean_usize_of_nat(v_start_2497_);
v___x_2505_ = lean_usize_of_nat(v___x_2501_);
v___x_2506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2496_, v___x_2504_, v___x_2505_, v___x_2499_);
return v___x_2506_;
}
}
else
{
size_t v___x_2507_; size_t v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = lean_usize_of_nat(v_start_2497_);
v___x_2508_ = lean_usize_of_nat(v_stop_2498_);
v___x_2509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2496_, v___x_2507_, v___x_2508_, v___x_2499_);
return v___x_2509_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_2510_, lean_object* v_start_2511_, lean_object* v_stop_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_2510_, v_start_2511_, v_stop_2512_);
lean_dec(v_stop_2512_);
lean_dec(v_start_2511_);
lean_dec_ref(v_as_2510_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_2515_, size_t v_sz_2516_, size_t v_i_2517_, lean_object* v_b_2518_){
_start:
{
uint8_t v___x_2519_; 
v___x_2519_ = lean_usize_dec_lt(v_i_2517_, v_sz_2516_);
if (v___x_2519_ == 0)
{
lean_inc_ref(v_b_2518_);
return v_b_2518_;
}
else
{
lean_object* v_a_2520_; lean_object* v_fst_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; uint8_t v___x_2525_; 
v_a_2520_ = lean_array_uget_borrowed(v_as_2515_, v_i_2517_);
v_fst_2521_ = lean_ctor_get(v_a_2520_, 0);
v___x_2522_ = lean_box(0);
lean_inc(v_fst_2521_);
v___x_2523_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_2521_);
v___x_2524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_2525_ = lean_string_dec_eq(v___x_2523_, v___x_2524_);
lean_dec_ref(v___x_2523_);
if (v___x_2525_ == 0)
{
lean_object* v___x_2526_; size_t v___x_2527_; size_t v___x_2528_; 
v___x_2526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_2527_ = ((size_t)1ULL);
v___x_2528_ = lean_usize_add(v_i_2517_, v___x_2527_);
v_i_2517_ = v___x_2528_;
v_b_2518_ = v___x_2526_;
goto _start;
}
else
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_inc(v_a_2520_);
v___x_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_a_2520_);
v___x_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
v___x_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
lean_ctor_set(v___x_2532_, 1, v___x_2522_);
return v___x_2532_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_2533_, lean_object* v_sz_2534_, lean_object* v_i_2535_, lean_object* v_b_2536_){
_start:
{
size_t v_sz_boxed_2537_; size_t v_i_boxed_2538_; lean_object* v_res_2539_; 
v_sz_boxed_2537_ = lean_unbox_usize(v_sz_2534_);
lean_dec(v_sz_2534_);
v_i_boxed_2538_ = lean_unbox_usize(v_i_2535_);
lean_dec(v_i_2535_);
v_res_2539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_2533_, v_sz_boxed_2537_, v_i_boxed_2538_, v_b_2536_);
lean_dec_ref(v_b_2536_);
lean_dec_ref(v_as_2533_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v_snd_2542_, lean_object* v_handler_2543_, lean_object* v_a_2544_, lean_object* v_fst_2545_, lean_object* v___y_2546_, lean_object* v___x_2547_, lean_object* v___x_2548_, lean_object* v___x_2549_, lean_object* v_x_2550_){
_start:
{
lean_object* v___y_2553_; lean_object* v___y_2554_; uint8_t v___y_2555_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; 
if (lean_obj_tag(v_x_2550_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v___y_2546_);
lean_dec(v_fst_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_handler_2543_);
lean_dec(v_snd_2542_);
v_a_2614_ = lean_ctor_get(v_x_2550_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_x_2550_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2616_ = v_x_2550_;
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v_x_2550_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; 
v___x_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2634_; lean_object* v___x_2638_; 
v_a_2623_ = lean_ctor_get(v_x_2550_, 0);
lean_inc(v_a_2623_);
lean_dec_ref_known(v_x_2550_, 1);
v___x_2638_ = l_Lasm_JS_Data_field(v_a_2623_, v___x_2549_);
if (lean_obj_tag(v___x_2638_) == 4)
{
lean_object* v_s_2639_; 
v_s_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc_ref(v_s_2639_);
lean_dec_ref_known(v___x_2638_, 1);
v___y_2634_ = v_s_2639_;
goto v___jp_2633_;
}
else
{
lean_object* v___x_2640_; 
lean_dec(v___x_2638_);
v___x_2640_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_2634_ = v___x_2640_;
goto v___jp_2633_;
}
v___jp_2624_:
{
lean_object* v___x_2627_; 
v___x_2627_ = l_Lasm_JS_Data_field(v_a_2623_, v___x_2547_);
lean_dec(v_a_2623_);
if (lean_obj_tag(v___x_2627_) == 7)
{
lean_object* v_items_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_items_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc_ref(v_items_2628_);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = lean_array_get_size(v_items_2628_);
v___x_2631_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_2628_, v___x_2629_, v___x_2630_);
lean_dec_ref(v_items_2628_);
v___y_2595_ = v___y_2625_;
v___y_2596_ = v___y_2626_;
v___y_2597_ = v___x_2631_;
goto v___jp_2594_;
}
else
{
lean_object* v___x_2632_; 
lean_dec(v___x_2627_);
v___x_2632_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___y_2595_ = v___y_2625_;
v___y_2596_ = v___y_2626_;
v___y_2597_ = v___x_2632_;
goto v___jp_2594_;
}
}
v___jp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_Lasm_JS_Data_field(v_a_2623_, v___x_2548_);
if (lean_obj_tag(v___x_2635_) == 4)
{
lean_object* v_s_2636_; 
v_s_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc_ref(v_s_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v___y_2625_ = v___y_2634_;
v___y_2626_ = v_s_2636_;
goto v___jp_2624_;
}
else
{
lean_object* v___x_2637_; 
lean_dec(v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_2625_ = v___y_2634_;
v___y_2626_ = v___x_2637_;
goto v___jp_2624_;
}
}
}
v___jp_2552_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1);
v___x_2557_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2554_, v___y_2555_, v___x_2556_, v___y_2553_);
return v___x_2557_;
}
v___jp_2558_:
{
lean_object* v___f_2568_; lean_object* v___f_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; 
lean_inc(v___y_2560_);
v___f_2568_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2568_, 0, v___y_2562_);
lean_closure_set(v___f_2568_, 1, v___y_2563_);
lean_closure_set(v___f_2568_, 2, v_handler_2543_);
lean_closure_set(v___f_2568_, 3, v___y_2560_);
lean_closure_set(v___f_2568_, 4, v___y_2559_);
lean_closure_set(v___f_2568_, 5, v___y_2564_);
lean_closure_set(v___f_2568_, 6, v___y_2567_);
v___f_2569_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2569_, 0, v___f_2568_);
v___x_2570_ = lean_array_get_size(v___y_2565_);
v___x_2571_ = lean_nat_dec_lt(v___y_2566_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v_fst_2545_);
lean_dec(v_a_2544_);
v___y_2553_ = v___f_2569_;
v___y_2554_ = v___y_2566_;
v___y_2555_ = v___x_2571_;
goto v___jp_2552_;
}
else
{
if (v___x_2571_ == 0)
{
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v_fst_2545_);
lean_dec(v_a_2544_);
v___y_2553_ = v___f_2569_;
v___y_2554_ = v___y_2566_;
v___y_2555_ = v___x_2571_;
goto v___jp_2552_;
}
else
{
size_t v___x_2572_; size_t v___x_2573_; uint8_t v___x_2574_; 
v___x_2572_ = ((size_t)0ULL);
v___x_2573_ = lean_usize_of_nat(v___x_2570_);
v___x_2574_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_2565_, v___x_2572_, v___x_2573_);
lean_dec_ref(v___y_2565_);
if (v___x_2574_ == 0)
{
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v_fst_2545_);
lean_dec(v_a_2544_);
v___y_2553_ = v___f_2569_;
v___y_2554_ = v___y_2566_;
v___y_2555_ = v___x_2574_;
goto v___jp_2552_;
}
else
{
uint8_t v___x_2575_; lean_object* v___x_2576_; lean_object* v___f_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2575_ = 0;
v___x_2576_ = lean_box(v___x_2575_);
v___f_2577_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 7, 5);
lean_closure_set(v___f_2577_, 0, v___y_2560_);
lean_closure_set(v___f_2577_, 1, v___x_2576_);
lean_closure_set(v___f_2577_, 2, v___f_2569_);
lean_closure_set(v___f_2577_, 3, v___y_2561_);
lean_closure_set(v___f_2577_, 4, v_a_2544_);
v___x_2578_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__8___closed__0));
v___x_2579_ = lean_mk_empty_array_with_capacity(v___y_2566_);
v___x_2580_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_fst_2545_, v___x_2578_, v___x_2579_);
v___x_2581_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2566_, v___x_2575_, v___x_2580_, v___f_2577_);
return v___x_2581_;
}
}
}
}
v___jp_2582_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__8___closed__1));
v___x_2592_ = l_Nat_reprFast(v___y_2546_);
v___x_2593_ = lean_string_append(v___x_2591_, v___x_2592_);
lean_dec_ref(v___x_2592_);
v___y_2559_ = v___y_2584_;
v___y_2560_ = v___y_2583_;
v___y_2561_ = v___y_2586_;
v___y_2562_ = v___y_2585_;
v___y_2563_ = v___y_2587_;
v___y_2564_ = v___y_2588_;
v___y_2565_ = v___y_2589_;
v___y_2566_ = v___y_2590_;
v___y_2567_ = v___x_2593_;
goto v___jp_2558_;
}
v___jp_2594_:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; size_t v_sz_2606_; size_t v___x_2607_; lean_object* v___x_2608_; lean_object* v_fst_2609_; lean_object* v___f_2610_; 
v___x_2598_ = lean_unsigned_to_nat(0u);
v___x_2599_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_2600_ = lean_array_get_size(v___y_2597_);
v___x_2601_ = lean_unsigned_to_nat(1u);
v___x_2602_ = lean_nat_shiftr(v___x_2600_, v___x_2601_);
v___x_2603_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2598_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
lean_ctor_set(v___x_2603_, 2, v___x_2601_);
v___x_2604_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_2597_, v___x_2603_, v___x_2599_, v___x_2598_);
lean_dec_ref_known(v___x_2603_, 3);
lean_dec_ref(v___y_2597_);
v___x_2605_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_2606_ = lean_array_size(v___x_2604_);
v___x_2607_ = ((size_t)0ULL);
v___x_2608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_2604_, v_sz_2606_, v___x_2607_, v___x_2605_);
v_fst_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_fst_2609_);
lean_dec_ref(v___x_2608_);
lean_inc_ref(v___y_2595_);
v___f_2610_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__4___boxed), 5, 3);
lean_closure_set(v___f_2610_, 0, v___x_2598_);
lean_closure_set(v___f_2610_, 1, v_snd_2542_);
lean_closure_set(v___f_2610_, 2, v___y_2595_);
if (lean_obj_tag(v_fst_2609_) == 0)
{
lean_inc_ref(v___x_2604_);
v___y_2583_ = v___x_2598_;
v___y_2584_ = v___f_2610_;
v___y_2585_ = v___y_2595_;
v___y_2586_ = v___x_2601_;
v___y_2587_ = v___x_2604_;
v___y_2588_ = v___y_2596_;
v___y_2589_ = v___x_2604_;
v___y_2590_ = v___x_2598_;
goto v___jp_2582_;
}
else
{
lean_object* v_val_2611_; 
v_val_2611_ = lean_ctor_get(v_fst_2609_, 0);
lean_inc(v_val_2611_);
lean_dec_ref_known(v_fst_2609_, 1);
if (lean_obj_tag(v_val_2611_) == 0)
{
lean_inc_ref(v___x_2604_);
v___y_2583_ = v___x_2598_;
v___y_2584_ = v___f_2610_;
v___y_2585_ = v___y_2595_;
v___y_2586_ = v___x_2601_;
v___y_2587_ = v___x_2604_;
v___y_2588_ = v___y_2596_;
v___y_2589_ = v___x_2604_;
v___y_2590_ = v___x_2598_;
goto v___jp_2582_;
}
else
{
lean_object* v_val_2612_; lean_object* v_snd_2613_; 
lean_dec(v___y_2546_);
v_val_2612_ = lean_ctor_get(v_val_2611_, 0);
lean_inc(v_val_2612_);
lean_dec_ref_known(v_val_2611_, 1);
v_snd_2613_ = lean_ctor_get(v_val_2612_, 1);
lean_inc(v_snd_2613_);
lean_dec(v_val_2612_);
lean_inc_ref(v___x_2604_);
v___y_2559_ = v___f_2610_;
v___y_2560_ = v___x_2598_;
v___y_2561_ = v___x_2601_;
v___y_2562_ = v___y_2595_;
v___y_2563_ = v___x_2604_;
v___y_2564_ = v___y_2596_;
v___y_2565_ = v___x_2604_;
v___y_2566_ = v___x_2598_;
v___y_2567_ = v_snd_2613_;
goto v___jp_2558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v_snd_2641_, lean_object* v_handler_2642_, lean_object* v_a_2643_, lean_object* v_fst_2644_, lean_object* v___y_2645_, lean_object* v___x_2646_, lean_object* v___x_2647_, lean_object* v___x_2648_, lean_object* v_x_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lasm_Fetch_serveNode___lam__8(v_snd_2641_, v_handler_2642_, v_a_2643_, v_fst_2644_, v___y_2645_, v___x_2646_, v___x_2647_, v___x_2648_, v_x_2649_);
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2647_);
lean_dec_ref(v___x_2646_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_handler_2661_, lean_object* v_a_2662_, lean_object* v___y_2663_, lean_object* v_____x_2664_){
_start:
{
lean_object* v_fst_2666_; lean_object* v_snd_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; uint8_t v___x_2674_; lean_object* v_val_2676_; lean_object* v___x_2679_; 
v_fst_2666_ = lean_ctor_get(v_____x_2664_, 0);
lean_inc_n(v_fst_2666_, 2);
v_snd_2667_ = lean_ctor_get(v_____x_2664_, 1);
lean_inc(v_snd_2667_);
lean_dec_ref(v_____x_2664_);
v___x_2668_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4));
v___x_2669_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5));
v___x_2670_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__10___closed__0));
v___f_2671_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 10, 8);
lean_closure_set(v___f_2671_, 0, v_snd_2667_);
lean_closure_set(v___f_2671_, 1, v_handler_2661_);
lean_closure_set(v___f_2671_, 2, v_a_2662_);
lean_closure_set(v___f_2671_, 3, v_fst_2666_);
lean_closure_set(v___f_2671_, 4, v___y_2663_);
lean_closure_set(v___f_2671_, 5, v___x_2670_);
lean_closure_set(v___f_2671_, 6, v___x_2669_);
lean_closure_set(v___f_2671_, 7, v___x_2668_);
v___x_2672_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__10___closed__1));
v___x_2673_ = lean_unsigned_to_nat(0u);
v___x_2674_ = 0;
v___x_2679_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_fst_2666_, v___x_2672_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set_tag(v___x_2682_, 1);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
v_val_2676_ = v___x_2685_;
goto v___jp_2675_;
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
v_a_2688_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2679_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2679_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 0);
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
v_val_2676_ = v___x_2693_;
goto v___jp_2675_;
}
}
}
v___jp_2675_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_val_2676_);
v___x_2678_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2673_, v___x_2674_, v___x_2677_, v___f_2671_);
return v___x_2678_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_handler_2696_, lean_object* v_a_2697_, lean_object* v___y_2698_, lean_object* v_____x_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_Lasm_Fetch_serveNode___lam__10(v_handler_2696_, v_a_2697_, v___y_2698_, v_____x_2699_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___f_2702_, lean_object* v_x_2703_){
_start:
{
if (lean_obj_tag(v_x_2703_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v___f_2702_);
v_a_2705_ = lean_ctor_get(v_x_2703_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2703_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2707_ = v_x_2703_;
v_isShared_2708_ = v_isSharedCheck_2713_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v_x_2703_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2713_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
return v___x_2711_;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2715_; 
v_a_2714_ = lean_ctor_get(v_x_2703_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v_x_2703_, 1);
v___x_2715_ = lean_apply_2(v___f_2702_, v_a_2714_, lean_box(0));
return v___x_2715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___f_2716_, lean_object* v_x_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lasm_Fetch_serveNode___lam__11(v___f_2716_, v_x_2717_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_2727_, lean_object* v___f_2728_, lean_object* v_args_2729_){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = lean_array_get_size(v_args_2729_);
v___x_2738_ = lean_nat_dec_lt(v___x_2736_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_dec_ref(v___f_2728_);
goto v___jp_2731_;
}
else
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_array_fget_borrowed(v_args_2729_, v___x_2736_);
if (lean_obj_tag(v___x_2739_) == 9)
{
lean_object* v_value_2740_; lean_object* v___x_2741_; uint8_t v___x_2742_; 
v_value_2740_ = lean_ctor_get(v___x_2739_, 0);
v___x_2741_ = lean_unsigned_to_nat(1u);
v___x_2742_ = lean_nat_dec_lt(v___x_2741_, v___x_2737_);
if (v___x_2742_ == 0)
{
lean_dec_ref(v___f_2728_);
goto v___jp_2731_;
}
else
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_array_fget(v_args_2729_, v___x_2741_);
if (lean_obj_tag(v___x_2743_) == 9)
{
lean_object* v_value_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2755_; 
lean_dec_ref(v___f_2727_);
v_value_2744_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2755_ == 0)
{
lean_object* v_unused_2756_; 
v_unused_2756_ = lean_ctor_get(v___x_2743_, 1);
lean_dec(v_unused_2756_);
v___x_2746_ = v___x_2743_;
v_isShared_2747_ = v_isSharedCheck_2755_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_value_2744_);
lean_dec(v___x_2743_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2755_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
lean_inc(v_value_2740_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set_tag(v___x_2746_, 0);
lean_ctor_set(v___x_2746_, 1, v_value_2744_);
lean_ctor_set(v___x_2746_, 0, v_value_2740_);
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_value_2740_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_value_2744_);
v___x_2749_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
uint8_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2750_ = 0;
v___x_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2749_);
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
v___x_2753_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2736_, v___x_2750_, v___x_2752_, v___f_2728_);
return v___x_2753_;
}
}
}
else
{
lean_dec(v___x_2743_);
lean_dec_ref(v___f_2728_);
goto v___jp_2731_;
}
}
}
else
{
lean_dec_ref(v___f_2728_);
goto v___jp_2731_;
}
}
v___jp_2731_:
{
lean_object* v___x_2732_; uint8_t v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2732_ = lean_unsigned_to_nat(0u);
v___x_2733_ = 0;
v___x_2734_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__13___closed__3));
v___x_2735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2732_, v___x_2733_, v___x_2734_, v___f_2727_);
return v___x_2735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_2757_, lean_object* v___f_2758_, lean_object* v_args_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lasm_Fetch_serveNode___lam__13(v___f_2757_, v___f_2758_, v_args_2759_);
lean_dec_ref(v_args_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_2762_){
_start:
{
lean_object* v___x_2764_; lean_object* v_putStr_2765_; lean_object* v___x_2766_; 
v___x_2764_ = lean_get_stdout();
v_putStr_2765_ = lean_ctor_get(v___x_2764_, 4);
lean_inc_ref(v_putStr_2765_);
lean_dec_ref(v___x_2764_);
v___x_2766_ = lean_apply_2(v_putStr_2765_, v_s_2762_, lean_box(0));
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_2767_, lean_object* v_a_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_2767_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_2770_){
_start:
{
uint32_t v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = 10;
v___x_2773_ = lean_string_push(v_s_2770_, v___x_2772_);
v___x_2774_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_2775_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___f_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; lean_object* v_val_2794_; lean_object* v___x_2797_; 
v___x_2785_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__12___closed__0));
v___x_2786_ = lean_string_append(v___x_2785_, v___y_2780_);
v___x_2787_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__12___closed__1));
v___x_2788_ = lean_string_append(v___x_2786_, v___x_2787_);
v___x_2789_ = l_Nat_reprFast(v___y_2781_);
v___x_2790_ = lean_string_append(v___x_2788_, v___x_2789_);
lean_dec_ref(v___x_2789_);
v___x_2791_ = lean_unsigned_to_nat(0u);
v___x_2792_ = 0;
v___x_2797_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_2790_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2805_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2800_ = v___x_2797_;
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
lean_ctor_set_tag(v___x_2800_, 1);
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2798_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
v_val_2794_ = v___x_2803_;
goto v___jp_2793_;
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
v_a_2806_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2797_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2797_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set_tag(v___x_2808_, 0);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
v_val_2794_ = v___x_2811_;
goto v___jp_2793_;
}
}
}
v___jp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2795_, 0, v_val_2794_);
v___x_2796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2791_, v___x_2792_, v___x_2795_, v___f_2782_);
return v___x_2796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___f_2816_, lean_object* v_x_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lasm_Fetch_serveNode___lam__12(v___y_2814_, v___y_2815_, v___f_2816_, v_x_2817_);
lean_dec_ref(v_x_2817_);
lean_dec_ref(v___y_2814_);
return v_res_2819_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__1(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = lean_unsigned_to_nat(0u);
v___x_2822_ = lean_nat_to_int(v___x_2821_);
return v___x_2822_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__2(void){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2824_ = lean_nat_abs(v___x_2823_);
return v___x_2824_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__14___closed__3(void){
_start:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2825_ = lean_cstr_to_nat("9007199254740991");
v___x_2826_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__2, &l_Lasm_Fetch_serveNode___lam__14___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__2);
v___x_2827_ = lean_nat_dec_le(v___x_2826_, v___x_2825_);
return v___x_2827_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__4(void){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2829_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
return v___x_2829_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__14___closed__5(void){
_start:
{
lean_object* v___x_2830_; double v___x_2831_; 
v___x_2830_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2831_ = l_Float_ofInt(v___x_2830_);
return v___x_2831_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__6(void){
_start:
{
double v___x_2832_; lean_object* v___x_2833_; 
v___x_2832_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__14___closed__5, &l_Lasm_Fetch_serveNode___lam__14___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__5);
v___x_2833_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2833_, 0, v___x_2832_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___f_2834_, lean_object* v___x_2835_, lean_object* v_a_2836_, lean_object* v_x_2837_){
_start:
{
uint8_t v___y_2840_; lean_object* v___y_2841_; lean_object* v_val_2842_; lean_object* v___x_2845_; lean_object* v___y_2847_; uint8_t v___x_2868_; 
v___x_2845_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_2868_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__14___closed__3, &l_Lasm_Fetch_serveNode___lam__14___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__3);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__4, &l_Lasm_Fetch_serveNode___lam__14___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__4);
v___y_2847_ = v___x_2869_;
goto v___jp_2846_;
}
else
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__6, &l_Lasm_Fetch_serveNode___lam__14___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__6);
v___y_2847_ = v___x_2870_;
goto v___jp_2846_;
}
v___jp_2839_:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2843_, 0, v_val_2842_);
v___x_2844_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2841_, v___y_2840_, v___x_2843_, v___f_2834_);
return v___x_2844_;
}
v___jp_2846_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; lean_object* v___x_2851_; 
lean_inc(v___y_2847_);
v___x_2848_ = lean_array_push(v___x_2835_, v___y_2847_);
v___x_2849_ = lean_unsigned_to_nat(0u);
v___x_2850_ = 0;
v___x_2851_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2836_, v___x_2845_, v___x_2848_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2851_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2851_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
lean_ctor_set_tag(v___x_2854_, 1);
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
v___y_2840_ = v___x_2850_;
v___y_2841_ = v___x_2849_;
v_val_2842_ = v___x_2857_;
goto v___jp_2839_;
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
v_a_2860_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2851_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2851_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
lean_ctor_set_tag(v___x_2862_, 0);
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
v___y_2840_ = v___x_2850_;
v___y_2841_ = v___x_2849_;
v_val_2842_ = v___x_2865_;
goto v___jp_2839_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___f_2871_, lean_object* v___x_2872_, lean_object* v_a_2873_, lean_object* v_x_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Lasm_Fetch_serveNode___lam__14(v___f_2871_, v___x_2872_, v_a_2873_, v_x_2874_);
lean_dec_ref(v_x_2874_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v_a_2878_, lean_object* v___x_2879_, lean_object* v___x_2880_, lean_object* v___f_2881_, lean_object* v_a_2882_, lean_object* v_x_2883_){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; uint8_t v___x_2889_; lean_object* v_val_2891_; lean_object* v___x_2894_; 
v___x_2885_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__15___closed__0));
v___x_2886_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_a_2878_);
lean_ctor_set(v___x_2886_, 1, v___x_2879_);
v___x_2887_ = lean_array_push(v___x_2880_, v___x_2886_);
v___x_2888_ = lean_unsigned_to_nat(0u);
v___x_2889_ = 0;
v___x_2894_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2882_, v___x_2885_, v___x_2887_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
v_a_2895_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2894_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2894_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set_tag(v___x_2897_, 1);
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
v_val_2891_ = v___x_2900_;
goto v___jp_2890_;
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
v_a_2903_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2894_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2894_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
lean_ctor_set_tag(v___x_2905_, 0);
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
v_val_2891_ = v___x_2908_;
goto v___jp_2890_;
}
}
}
v___jp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2892_, 0, v_val_2891_);
v___x_2893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2888_, v___x_2889_, v___x_2892_, v___f_2881_);
return v___x_2893_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v_a_2911_, lean_object* v___x_2912_, lean_object* v___x_2913_, lean_object* v___f_2914_, lean_object* v_a_2915_, lean_object* v_x_2916_, lean_object* v___y_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_Lasm_Fetch_serveNode___lam__15(v_a_2911_, v___x_2912_, v___x_2913_, v___f_2914_, v_a_2915_, v_x_2916_);
lean_dec_ref(v_x_2916_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_as_x27_2922_, lean_object* v_b_2923_){
_start:
{
if (lean_obj_tag(v_as_x27_2922_) == 0)
{
lean_object* v___x_2925_; 
lean_dec(v_a_2921_);
lean_dec(v_a_2920_);
v___x_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2925_, 0, v_b_2923_);
return v___x_2925_;
}
else
{
lean_object* v_head_2926_; lean_object* v_tail_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_head_2926_ = lean_ctor_get(v_as_x27_2922_, 0);
v_tail_2927_ = lean_ctor_get(v_as_x27_2922_, 1);
v___x_2928_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2929_ = lean_box(0);
v___x_2930_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_2926_);
v___x_2931_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2931_, 0, v_head_2926_);
lean_inc(v_a_2920_);
v___x_2932_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2932_, 0, v_a_2920_);
lean_ctor_set(v___x_2932_, 1, v___x_2928_);
v___x_2933_ = lean_unsigned_to_nat(2u);
v___x_2934_ = lean_mk_empty_array_with_capacity(v___x_2933_);
v___x_2935_ = lean_array_push(v___x_2934_, v___x_2931_);
v___x_2936_ = lean_array_push(v___x_2935_, v___x_2932_);
lean_inc(v_a_2921_);
v___x_2937_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2921_, v___x_2930_, v___x_2936_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_dec_ref_known(v___x_2937_, 1);
v_as_x27_2922_ = v_tail_2927_;
v_b_2923_ = v___x_2929_;
goto _start;
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec(v_a_2921_);
lean_dec(v_a_2920_);
v_a_2939_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2937_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2937_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_as_x27_2949_, lean_object* v_b_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_2947_, v_a_2948_, v_as_x27_2949_, v_b_2950_);
lean_dec(v_as_x27_2949_);
return v_res_2952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_2954_){
_start:
{
uint32_t v___x_2956_; uint32_t v___x_2957_; uint64_t v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2956_ = 201;
v___x_2957_ = 0;
v___x_2958_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
v___x_2959_ = lean_string_to_utf8(v_specifier_2954_);
v___x_2960_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_2956_, v___x_2957_, v___x_2958_, v___x_2959_);
lean_dec_ref(v___x_2959_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2962_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_2963_ = l_String_quote(v_specifier_2954_);
v___x_2964_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
v___x_2965_ = lean_unsigned_to_nat(120u);
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = l_Std_Format_pretty(v___x_2964_, v___x_2965_, v___x_2966_, v___x_2966_);
v___x_2968_ = lean_string_append(v___x_2962_, v___x_2967_);
lean_dec_ref(v___x_2967_);
v___x_2969_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2968_, v_a_2961_);
lean_dec(v_a_2961_);
lean_dec_ref(v___x_2968_);
return v___x_2969_;
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2977_; 
lean_dec_ref(v_specifier_2954_);
v_a_2970_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2972_ = v___x_2960_;
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2960_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_2978_, lean_object* v_a_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_2978_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_3003_){
_start:
{
lean_object* v___f_3005_; lean_object* v___f_3006_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___f_3005_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__2));
v___f_3006_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___x_3069_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_3070_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_3069_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3072_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3070_, 1);
v___x_3072_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_3075_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3073_, v___x_3074_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3130_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___y_3135_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3132_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_3133_ = lean_io_getenv(v___x_3132_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v___x_3144_; 
v___x_3144_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___y_3135_ = v___x_3144_;
goto v___jp_3134_;
}
else
{
lean_object* v_val_3145_; 
v_val_3145_ = lean_ctor_get(v___x_3133_, 0);
lean_inc(v_val_3145_);
lean_dec_ref_known(v___x_3133_, 1);
v___y_3135_ = v_val_3145_;
goto v___jp_3134_;
}
v___jp_3077_:
{
lean_object* v___f_3081_; lean_object* v___f_3082_; lean_object* v___f_3083_; lean_object* v___f_3084_; lean_object* v___x_3085_; 
lean_inc_n(v___y_3080_, 2);
v___f_3081_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 5, 3);
lean_closure_set(v___f_3081_, 0, v_handler_3003_);
lean_closure_set(v___f_3081_, 1, v_a_3076_);
lean_closure_set(v___f_3081_, 2, v___y_3080_);
v___f_3082_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3082_, 0, v___f_3081_);
lean_inc_ref(v___f_3082_);
v___f_3083_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 4, 2);
lean_closure_set(v___f_3083_, 0, v___f_3082_);
lean_closure_set(v___f_3083_, 1, v___f_3082_);
v___f_3084_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_3084_, 0, v___y_3078_);
lean_closure_set(v___f_3084_, 1, v___y_3080_);
lean_closure_set(v___f_3084_, 2, v___f_3005_);
v___x_3085_ = l_Lasm_JS_Function_ofFnReply(v___f_3083_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
lean_dec_ref_known(v___x_3085_, 1);
v___x_3087_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_3088_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3089_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3089_, 0, v_a_3086_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = lean_unsigned_to_nat(1u);
v___x_3091_ = lean_mk_empty_array_with_capacity(v___x_3090_);
lean_inc_ref(v___x_3091_);
v___x_3092_ = lean_array_push(v___x_3091_, v___x_3089_);
v___x_3093_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_3071_, v___x_3087_, v___x_3092_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3095_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref_known(v___x_3093_, 1);
v___x_3095_ = l_Lasm_JS_Function_ofFn(v___f_3084_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; uint8_t v___x_3101_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___x_3095_, 1);
v___x_3097_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_3098_ = lean_nat_to_int(v___y_3080_);
v___x_3099_ = lean_nat_abs(v___x_3098_);
v___x_3100_ = lean_cstr_to_nat("9007199254740991");
v___x_3101_ = lean_nat_dec_le(v___x_3099_, v___x_3100_);
lean_dec(v___x_3099_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; 
v___x_3102_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3098_);
v___y_3008_ = v_a_3094_;
v___y_3009_ = v___x_3088_;
v___y_3010_ = v___x_3091_;
v___y_3011_ = v_a_3096_;
v___y_3012_ = v___x_3088_;
v___y_3013_ = v___y_3079_;
v___y_3014_ = v___x_3097_;
v___y_3015_ = v___x_3102_;
goto v___jp_3007_;
}
else
{
double v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = l_Float_ofInt(v___x_3098_);
lean_dec(v___x_3098_);
v___x_3104_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3104_, 0, v___x_3103_);
v___y_3008_ = v_a_3094_;
v___y_3009_ = v___x_3088_;
v___y_3010_ = v___x_3091_;
v___y_3011_ = v_a_3096_;
v___y_3012_ = v___x_3088_;
v___y_3013_ = v___y_3079_;
v___y_3014_ = v___x_3097_;
v___y_3015_ = v___x_3104_;
goto v___jp_3007_;
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_a_3094_);
lean_dec_ref(v___x_3091_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
v_a_3105_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3095_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3095_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3120_; 
lean_dec_ref(v___x_3091_);
lean_dec_ref(v___f_3084_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
v_a_3113_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3115_ = v___x_3093_;
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3093_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v___f_3084_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v_a_3071_);
v_a_3121_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3085_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3085_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
v___jp_3129_:
{
lean_object* v___x_3131_; 
v___x_3131_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_3130_);
v___y_3078_ = v___y_3130_;
v___y_3079_ = v___y_3130_;
v___y_3080_ = v___x_3131_;
goto v___jp_3077_;
}
v___jp_3134_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_3137_ = lean_io_getenv(v___x_3136_);
if (lean_obj_tag(v___x_3137_) == 0)
{
v___y_3130_ = v___y_3135_;
goto v___jp_3129_;
}
else
{
lean_object* v_val_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v_val_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_val_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = lean_unsigned_to_nat(0u);
v___x_3140_ = lean_string_utf8_byte_size(v_val_3138_);
v___x_3141_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3141_, 0, v_val_3138_);
lean_ctor_set(v___x_3141_, 1, v___x_3139_);
lean_ctor_set(v___x_3141_, 2, v___x_3140_);
v___x_3142_ = l_String_Slice_toNat_x3f(v___x_3141_);
lean_dec_ref_known(v___x_3141_, 3);
if (lean_obj_tag(v___x_3142_) == 0)
{
v___y_3130_ = v___y_3135_;
goto v___jp_3129_;
}
else
{
lean_object* v_val_3143_; 
v_val_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_val_3143_);
lean_dec_ref_known(v___x_3142_, 1);
lean_inc_ref(v___y_3135_);
v___y_3078_ = v___y_3135_;
v___y_3079_ = v___y_3135_;
v___y_3080_ = v_val_3143_;
goto v___jp_3077_;
}
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec(v_a_3071_);
lean_dec_ref(v_handler_3003_);
v_a_3146_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3075_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3075_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v_a_3071_);
lean_dec_ref(v_handler_3003_);
v_a_3154_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3072_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3072_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec_ref(v_handler_3003_);
v_a_3162_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3070_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3070_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
v___jp_3007_:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3016_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3016_, 0, v___y_3013_);
lean_inc_ref(v___y_3012_);
v___x_3017_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___y_3011_);
lean_ctor_set(v___x_3017_, 1, v___y_3012_);
v___x_3018_ = lean_unsigned_to_nat(3u);
v___x_3019_ = lean_mk_empty_array_with_capacity(v___x_3018_);
v___x_3020_ = lean_array_push(v___x_3019_, v___y_3015_);
v___x_3021_ = lean_array_push(v___x_3020_, v___x_3016_);
v___x_3022_ = lean_array_push(v___x_3021_, v___x_3017_);
lean_inc_ref(v___y_3014_);
lean_inc(v___y_3008_);
v___x_3023_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v___y_3008_, v___y_3014_, v___x_3022_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
lean_dec_ref_known(v___x_3023_, 1);
v___x_3024_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_3025_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___f_3027_; lean_object* v___x_3028_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc_n(v_a_3026_, 2);
lean_dec_ref_known(v___x_3025_, 1);
lean_inc_ref(v___y_3010_);
v___f_3027_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3027_, 0, v___f_3006_);
lean_closure_set(v___f_3027_, 1, v___y_3010_);
lean_closure_set(v___f_3027_, 2, v_a_3026_);
v___x_3028_ = l_Lasm_JS_Function_ofFn(v___f_3027_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; lean_object* v___f_3030_; lean_object* v___x_3031_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3028_, 1);
lean_inc_ref(v___y_3009_);
v___f_3030_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 7, 5);
lean_closure_set(v___f_3030_, 0, v_a_3029_);
lean_closure_set(v___f_3030_, 1, v___y_3009_);
lean_closure_set(v___f_3030_, 2, v___y_3010_);
lean_closure_set(v___f_3030_, 3, v___f_3006_);
lean_closure_set(v___f_3030_, 4, v___y_3008_);
v___x_3031_ = l_Lasm_JS_Function_ofFn(v___f_3030_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v_a_3032_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_a_3032_);
lean_dec_ref_known(v___x_3031_, 1);
v___x_3033_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__8));
v___x_3034_ = lean_box(0);
v___x_3035_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_3032_, v_a_3026_, v___x_3033_, v___x_3034_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v___x_3036_; 
lean_dec_ref_known(v___x_3035_, 1);
v___x_3036_ = l_Lasm_JS_waitForever();
return v___x_3036_;
}
else
{
return v___x_3035_;
}
}
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3044_; 
lean_dec(v_a_3026_);
v_a_3037_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3039_ = v___x_3031_;
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3031_);
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
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
lean_dec(v_a_3026_);
lean_dec_ref(v___y_3010_);
lean_dec(v___y_3008_);
v_a_3045_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3028_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3028_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
lean_dec_ref(v___y_3010_);
lean_dec(v___y_3008_);
v_a_3053_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3025_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3025_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
lean_dec_ref(v___y_3010_);
lean_dec(v___y_3008_);
v_a_3061_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3023_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3023_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lasm_Fetch_serveNode(v_handler_3170_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_3173_, lean_object* v_range_3174_, lean_object* v_b_3175_, lean_object* v_i_3176_, lean_object* v_hs_3177_, lean_object* v_hl_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_3173_, v_range_3174_, v_b_3175_, v_i_3176_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_3180_, lean_object* v_range_3181_, lean_object* v_b_3182_, lean_object* v_i_3183_, lean_object* v_hs_3184_, lean_object* v_hl_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_3180_, v_range_3181_, v_b_3182_, v_i_3183_, v_hs_3184_, v_hl_3185_);
lean_dec_ref(v_range_3181_);
lean_dec_ref(v___y_3180_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_as_3189_, lean_object* v_as_x27_3190_, lean_object* v_b_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_3187_, v_a_3188_, v_as_x27_3190_, v_b_3191_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_as_3197_, lean_object* v_as_x27_3198_, lean_object* v_b_3199_, lean_object* v_a_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_3195_, v_a_3196_, v_as_3197_, v_as_x27_3198_, v_b_3199_, v_a_3200_);
lean_dec(v_as_x27_3198_);
lean_dec(v_as_3197_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__0(lean_object* v_x_3203_){
_start:
{
if (lean_obj_tag(v_x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3205_; 
v_a_3204_ = lean_ctor_get(v_x_3203_, 0);
lean_inc(v_a_3204_);
lean_dec_ref_known(v_x_3203_, 1);
v___x_3205_ = lean_task_pure(v_a_3204_);
return v___x_3205_;
}
else
{
lean_object* v_a_3206_; 
v_a_3206_ = lean_ctor_get(v_x_3203_, 0);
lean_inc_ref(v_a_3206_);
lean_dec_ref_known(v_x_3203_, 1);
return v_a_3206_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1(lean_object* v_handler_3207_, lean_object* v___x_3208_){
_start:
{
lean_object* v___x_3210_; 
v___x_3210_ = l_Lasm_Fetch_respond(v_handler_3207_, v___x_3208_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1___boxed(lean_object* v_handler_3211_, lean_object* v___x_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Lasm_Fetch_serve___lam__1(v_handler_3211_, v___x_3212_);
return v_res_3214_;
}
}
static uint32_t _init_l_Lasm_Fetch_serve___closed__1(void){
_start:
{
lean_object* v___x_3216_; uint32_t v___x_3217_; 
v___x_3216_ = lean_box(0);
v___x_3217_ = lasm_fetch_platform(v___x_3216_);
return v___x_3217_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__2(void){
_start:
{
uint32_t v___x_3218_; uint32_t v___x_3219_; uint8_t v___x_3220_; 
v___x_3218_ = 1;
v___x_3219_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3220_ = lean_uint32_dec_eq(v___x_3219_, v___x_3218_);
return v___x_3220_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__3(void){
_start:
{
uint32_t v___x_3221_; uint32_t v___x_3222_; uint8_t v___x_3223_; 
v___x_3221_ = 2;
v___x_3222_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3223_ = lean_uint32_dec_eq(v___x_3222_, v___x_3221_);
return v___x_3223_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__4(void){
_start:
{
uint32_t v___x_3224_; uint32_t v___x_3225_; uint8_t v___x_3226_; 
v___x_3224_ = 0;
v___x_3225_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3226_ = lean_uint32_dec_eq(v___x_3225_, v___x_3224_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_3230_){
_start:
{
lean_object* v___f_3232_; uint8_t v___x_3273_; 
v___f_3232_ = ((lean_object*)(l_Lasm_Fetch_serve___closed__0));
v___x_3273_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__2, &l_Lasm_Fetch_serve___closed__2_once, _init_l_Lasm_Fetch_serve___closed__2);
if (v___x_3273_ == 0)
{
uint8_t v___x_3274_; 
v___x_3274_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__3, &l_Lasm_Fetch_serve___closed__3_once, _init_l_Lasm_Fetch_serve___closed__3);
if (v___x_3274_ == 0)
{
uint8_t v___x_3275_; 
v___x_3275_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__4, &l_Lasm_Fetch_serve___closed__4_once, _init_l_Lasm_Fetch_serve___closed__4);
if (v___x_3275_ == 0)
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
lean_dec_ref(v_handler_3230_);
v___x_3276_ = ((lean_object*)(l_Lasm_Fetch_serve___closed__6));
v___x_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
return v___x_3277_;
}
else
{
lean_object* v___x_3278_; 
v___x_3278_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; uint8_t v___x_3280_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v___x_3280_ = lean_unbox(v_a_3279_);
lean_dec(v_a_3279_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; 
v___x_3281_ = l_Lasm_Fetch_serveNode(v_handler_3230_);
return v___x_3281_;
}
else
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3230_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3284_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = l_Lasm_JS_exportDefault(v_a_3283_);
return v___x_3284_;
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
v_a_3285_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3282_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3282_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec_ref(v_handler_3230_);
v_a_3293_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3278_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3278_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
else
{
goto v___jp_3233_;
}
}
else
{
goto v___jp_3233_;
}
v___jp_3233_:
{
lean_object* v___x_3234_; 
v___x_3234_ = lasm_fetch_take_request();
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3264_; 
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3264_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3264_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v_snd_3239_; lean_object* v_snd_3240_; lean_object* v_fst_3241_; lean_object* v_fst_3242_; lean_object* v_fst_3243_; lean_object* v_snd_3244_; lean_object* v___x_3245_; lean_object* v___f_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; uint8_t v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v_snd_3239_ = lean_ctor_get(v_a_3235_, 1);
lean_inc(v_snd_3239_);
v_snd_3240_ = lean_ctor_get(v_snd_3239_, 1);
lean_inc(v_snd_3240_);
v_fst_3241_ = lean_ctor_get(v_a_3235_, 0);
lean_inc_n(v_fst_3241_, 2);
lean_dec(v_a_3235_);
v_fst_3242_ = lean_ctor_get(v_snd_3239_, 0);
lean_inc(v_fst_3242_);
lean_dec(v_snd_3239_);
v_fst_3243_ = lean_ctor_get(v_snd_3240_, 0);
lean_inc(v_fst_3243_);
v_snd_3244_ = lean_ctor_get(v_snd_3240_, 1);
lean_inc(v_snd_3244_);
lean_dec(v_snd_3240_);
v___x_3245_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3245_, 0, v_fst_3241_);
lean_ctor_set(v___x_3245_, 1, v_fst_3242_);
lean_ctor_set(v___x_3245_, 2, v_fst_3243_);
lean_ctor_set(v___x_3245_, 3, v_snd_3244_);
v___f_3246_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serve___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3246_, 0, v_handler_3230_);
lean_closure_set(v___f_3246_, 1, v___x_3245_);
v___x_3247_ = lean_unsigned_to_nat(0u);
v___x_3248_ = lean_io_as_task(v___f_3246_, v___x_3247_);
v___x_3249_ = 1;
v___x_3250_ = lean_task_bind(v___x_3248_, v___f_3232_, v___x_3247_, v___x_3249_);
v___x_3251_ = lean_task_get_own(v___x_3250_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3254_; 
lean_dec(v_fst_3241_);
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
if (v_isShared_3238_ == 0)
{
lean_ctor_set_tag(v___x_3237_, 1);
lean_ctor_set(v___x_3237_, 0, v_a_3252_);
v___x_3254_ = v___x_3237_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3252_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
else
{
lean_object* v_a_3256_; uint16_t v_status_3257_; lean_object* v_headers_3258_; lean_object* v_body_3259_; uint8_t v___x_3260_; 
lean_del_object(v___x_3237_);
v_a_3256_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3251_, 1);
v_status_3257_ = lean_ctor_get_uint16(v_a_3256_, sizeof(void*)*2);
v_headers_3258_ = lean_ctor_get(v_a_3256_, 0);
lean_inc_ref(v_headers_3258_);
v_body_3259_ = lean_ctor_get(v_a_3256_, 1);
lean_inc_ref(v_body_3259_);
lean_dec(v_a_3256_);
v___x_3260_ = l_Lasm_Fetch_bodyless(v_fst_3241_, v_status_3257_);
lean_dec(v_fst_3241_);
if (v___x_3260_ == 0)
{
lean_object* v___x_3261_; 
v___x_3261_ = lasm_fetch_send_response(v_status_3257_, v_headers_3258_, v_body_3259_);
lean_dec_ref(v_body_3259_);
lean_dec_ref(v_headers_3258_);
return v___x_3261_;
}
else
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec_ref(v_body_3259_);
v___x_3262_ = l_ByteArray_empty;
v___x_3263_ = lasm_fetch_send_response(v_status_3257_, v_headers_3258_, v___x_3262_);
lean_dec_ref(v_headers_3258_);
return v___x_3263_;
}
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
lean_dec_ref(v_handler_3230_);
v_a_3265_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3234_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3234_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lasm_Fetch_serve(v_handler_3301_);
return v_res_3303_;
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
