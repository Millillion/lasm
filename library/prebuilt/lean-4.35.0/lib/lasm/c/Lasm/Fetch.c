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
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Fetch_respond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__0 = (const lean_object*)&l_Lasm_Fetch_respond___closed__0_value;
static const lean_closure_object l_Lasm_Fetch_respond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__1 = (const lean_object*)&l_Lasm_Fetch_respond___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_respond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_respond___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_respond___closed__2 = (const lean_object*)&l_Lasm_Fetch_respond___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_bodyless___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Lasm_Fetch_bodyless___closed__0 = (const lean_object*)&l_Lasm_Fetch_bodyless___closed__0_value;
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
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2_value;
static const lean_string_object l_Lasm_Fetch_jsFetchHandler___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___closed__3 = (const lean_object*)&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__3_value;
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
if (lean_obj_tag(v_x_624_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_634_; 
v_a_626_ = lean_ctor_get(v_x_624_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v_x_624_);
if (v_isSharedCheck_634_ == 0)
{
v___x_628_ = v_x_624_;
v_isShared_629_ = v_isSharedCheck_634_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v_x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_634_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_633_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_632_; 
v___x_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
return v___x_632_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_644_; 
v_a_635_ = lean_ctor_get(v_x_624_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_624_);
if (v_isSharedCheck_644_ == 0)
{
v___x_637_ = v_x_624_;
v_isShared_638_ = v_isSharedCheck_644_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v_x_624_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_644_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_643_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lasm_Fetch_respond___lam__0(v_x_645_);
return v_res_647_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = 500;
v___x_650_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_651_ = l_Lasm_Fetch_Response_text(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
return v___x_653_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_658_){
_start:
{
if (lean_obj_tag(v_x_658_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_668_; 
v_a_660_ = lean_ctor_get(v_x_658_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_x_658_);
if (v_isSharedCheck_668_ == 0)
{
v___x_662_ = v_x_658_;
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v_x_658_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_667_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
else
{
lean_object* v___x_669_; 
lean_dec_ref_known(v_x_658_, 1);
v___x_669_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_Fetch_respond___lam__1(v_x_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_673_){
_start:
{
lean_object* v_r_676_; 
if (lean_obj_tag(v_x_673_) == 0)
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_687_; 
v_a_679_ = lean_ctor_get(v_x_673_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v_x_673_);
if (v_isSharedCheck_687_ == 0)
{
v___x_681_ = v_x_673_;
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v_x_673_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; 
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
}
}
else
{
lean_object* v_a_688_; lean_object* v_a_689_; 
v_a_688_ = lean_ctor_get(v_x_673_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v_x_673_, 1);
v_a_689_ = lean_ctor_get(v_a_688_, 0);
lean_inc(v_a_689_);
lean_dec(v_a_688_);
v_r_676_ = v_a_689_;
goto v___jp_675_;
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_r_676_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_req_696_, lean_object* v___f_697_, lean_object* v_x_698_){
_start:
{
if (lean_obj_tag(v_x_698_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_730_; 
v_a_700_ = lean_ctor_get(v_x_698_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_698_);
if (v_isSharedCheck_730_ == 0)
{
v___x_702_ = v_x_698_;
v_isShared_703_ = v_isSharedCheck_730_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v_x_698_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_730_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_method_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v_val_718_; lean_object* v___x_721_; 
v_method_704_ = lean_ctor_get(v_req_696_, 0);
v___x_705_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_706_ = lean_string_append(v___x_705_, v_method_704_);
v___x_707_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = l_Lasm_Fetch_Request_path(v_req_696_);
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
lean_dec_ref(v___x_709_);
v___x_711_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_712_ = lean_string_append(v___x_710_, v___x_711_);
v___x_713_ = lean_io_error_to_string(v_a_700_);
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
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 1);
lean_ctor_set(v___x_702_, 0, v_a_722_);
v___x_724_ = v___x_702_;
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
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v_a_726_);
v___x_728_ = v___x_702_;
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
v___x_720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_715_, v___x_716_, v___x_719_, v___f_697_);
return v___x_720_;
}
}
}
else
{
lean_object* v___x_731_; 
lean_dec_ref(v___f_697_);
lean_dec_ref(v_req_696_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v_x_698_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_req_732_, lean_object* v___f_733_, lean_object* v_x_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lasm_Fetch_respond___lam__3(v_req_732_, v___f_733_, v_x_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_740_, lean_object* v_req_741_){
_start:
{
lean_object* v___f_743_; lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v___f_746_; lean_object* v___x_747_; uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___f_743_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_744_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_745_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_741_);
v___f_746_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 4, 2);
lean_closure_set(v___f_746_, 0, v_req_741_);
lean_closure_set(v___f_746_, 1, v___f_744_);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = 0;
v___x_749_ = lean_apply_2(v_handler_740_, v_req_741_, lean_box(0));
v___x_750_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_747_, v___x_748_, v___x_749_, v___f_743_);
v___x_751_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_747_, v___x_748_, v___x_750_, v___f_746_);
v___x_752_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_747_, v___x_748_, v___x_751_, v___f_745_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_753_, lean_object* v_req_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lasm_Fetch_respond(v_handler_753_, v_req_754_);
return v_res_756_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_758_, uint16_t v_status_759_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = ((lean_object*)(l_Lasm_Fetch_bodyless___closed__0));
v___x_761_ = lean_string_dec_eq(v_method_758_, v___x_760_);
if (v___x_761_ == 0)
{
uint16_t v___x_762_; uint8_t v___x_763_; 
v___x_762_ = 101;
v___x_763_ = lean_uint16_dec_eq(v_status_759_, v___x_762_);
if (v___x_763_ == 0)
{
uint16_t v___x_764_; uint8_t v___x_765_; 
v___x_764_ = 204;
v___x_765_ = lean_uint16_dec_eq(v_status_759_, v___x_764_);
if (v___x_765_ == 0)
{
uint16_t v___x_766_; uint8_t v___x_767_; 
v___x_766_ = 205;
v___x_767_ = lean_uint16_dec_eq(v_status_759_, v___x_766_);
if (v___x_767_ == 0)
{
uint16_t v___x_768_; uint8_t v___x_769_; 
v___x_768_ = 304;
v___x_769_ = lean_uint16_dec_eq(v_status_759_, v___x_768_);
return v___x_769_;
}
else
{
return v___x_767_;
}
}
else
{
return v___x_765_;
}
}
else
{
return v___x_763_;
}
}
else
{
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_770_, lean_object* v_status_771_){
_start:
{
uint16_t v_status_boxed_772_; uint8_t v_res_773_; lean_object* v_r_774_; 
v_status_boxed_772_ = lean_unbox(v_status_771_);
v_res_773_ = l_Lasm_Fetch_bodyless(v_method_770_, v_status_boxed_772_);
lean_dec_ref(v_method_770_);
v_r_774_ = lean_box(v_res_773_);
return v_r_774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_776_){
_start:
{
uint32_t v_res_777_; lean_object* v_r_778_; 
v_res_777_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_776_);
v_r_778_ = lean_box_uint32(v_res_777_);
return v_r_778_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = lasm_fetch_take_request();
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_786_, lean_object* v_headers_787_, lean_object* v_body_788_, lean_object* v_a_00___x40___internal___hyg_789_){
_start:
{
uint16_t v_status_boxed_790_; lean_object* v_res_791_; 
v_status_boxed_790_ = lean_unbox(v_status_786_);
v_res_791_ = lasm_fetch_send_response(v_status_boxed_790_, v_headers_787_, v_body_788_);
lean_dec_ref(v_body_788_);
lean_dec_ref(v_headers_787_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_792_){
_start:
{
if (lean_obj_tag(v_x_792_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_802_; 
v_a_794_ = lean_ctor_get(v_x_792_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v_x_792_);
if (v_isSharedCheck_802_ == 0)
{
v___x_796_ = v_x_792_;
v_isShared_797_ = v_isSharedCheck_802_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v_x_792_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_802_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_801_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_800_; 
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_813_; 
v_a_803_ = lean_ctor_get(v_x_792_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v_x_792_);
if (v_isSharedCheck_813_ == 0)
{
v___x_805_ = v_x_792_;
v_isShared_806_ = v_isSharedCheck_813_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v_x_792_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_813_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_810_; 
v___x_807_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_808_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_808_, 0, v_a_803_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_808_);
v___x_810_ = v___x_805_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_808_);
v___x_810_ = v_reuseFailAlloc_812_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_811_; 
v___x_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
return v___x_811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_814_);
return v_res_816_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0(void){
_start:
{
uint8_t v___x_817_; uint64_t v___x_818_; 
v___x_817_ = 1;
v___x_818_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(uint8_t v_await_819_, uint64_t v_extra_820_){
_start:
{
uint64_t v___x_821_; uint64_t v___y_823_; 
v___x_821_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
if (v_await_819_ == 0)
{
uint64_t v___x_826_; 
v___x_826_ = 0ULL;
v___y_823_ = v___x_826_;
goto v___jp_822_;
}
else
{
uint64_t v___x_827_; 
v___x_827_ = 2ULL;
v___y_823_ = v___x_827_;
goto v___jp_822_;
}
v___jp_822_:
{
uint64_t v___x_824_; uint64_t v___x_825_; 
v___x_824_ = lean_uint64_lor(v___x_821_, v___y_823_);
v___x_825_ = lean_uint64_lor(v___x_824_, v_extra_820_);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___boxed(lean_object* v_await_828_, lean_object* v_extra_829_){
_start:
{
uint8_t v_await_boxed_830_; uint64_t v_extra_boxed_831_; uint64_t v_res_832_; lean_object* v_r_833_; 
v_await_boxed_830_ = lean_unbox(v_await_828_);
v_extra_boxed_831_ = lean_unbox_uint64(v_extra_829_);
lean_dec_ref(v_extra_829_);
v_res_832_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v_await_boxed_830_, v_extra_boxed_831_);
v_r_833_ = lean_box_uint64(v_res_832_);
return v_r_833_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_834_; uint8_t v___x_835_; uint64_t v___x_836_; 
v___x_834_ = 4ULL;
v___x_835_ = 0;
v___x_836_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v___x_835_, v___x_834_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_c_838_, lean_object* v_args_839_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint64_t v___x_844_; lean_object* v___x_845_; 
v___x_841_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_842_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_842_, 0, v_c_838_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = lean_box(0);
v___x_844_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_845_ = l_Lasm_JS_Value_invokeRaw(v___x_842_, v___x_843_, v_args_839_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
v___x_847_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1));
v___x_848_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_847_, v_a_846_);
lean_dec(v_a_846_);
return v___x_848_;
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
v_a_849_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_845_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_845_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_c_857_, lean_object* v_args_858_, lean_object* v_a_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_c_857_, v_args_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(size_t v_sz_861_, size_t v_i_862_, lean_object* v_bs_863_){
_start:
{
uint8_t v___x_864_; 
v___x_864_ = lean_usize_dec_lt(v_i_862_, v_sz_861_);
if (v___x_864_ == 0)
{
return v_bs_863_;
}
else
{
lean_object* v_v_865_; lean_object* v_fst_866_; lean_object* v_snd_867_; lean_object* v___x_868_; lean_object* v_bs_x27_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; size_t v___x_877_; size_t v___x_878_; lean_object* v___x_879_; 
v_v_865_ = lean_array_uget_borrowed(v_bs_863_, v_i_862_);
v_fst_866_ = lean_ctor_get(v_v_865_, 0);
lean_inc(v_fst_866_);
v_snd_867_ = lean_ctor_get(v_v_865_, 1);
lean_inc(v_snd_867_);
v___x_868_ = lean_unsigned_to_nat(0u);
v_bs_x27_869_ = lean_array_uset(v_bs_863_, v_i_862_, v___x_868_);
v___x_870_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_870_, 0, v_fst_866_);
v___x_871_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_871_, 0, v_snd_867_);
v___x_872_ = lean_unsigned_to_nat(2u);
v___x_873_ = lean_mk_empty_array_with_capacity(v___x_872_);
v___x_874_ = lean_array_push(v___x_873_, v___x_870_);
v___x_875_ = lean_array_push(v___x_874_, v___x_871_);
v___x_876_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
v___x_877_ = ((size_t)1ULL);
v___x_878_ = lean_usize_add(v_i_862_, v___x_877_);
v___x_879_ = lean_array_uset(v_bs_x27_869_, v_i_862_, v___x_876_);
v_i_862_ = v___x_878_;
v_bs_863_ = v___x_879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_sz_881_, lean_object* v_i_882_, lean_object* v_bs_883_){
_start:
{
size_t v_sz_boxed_884_; size_t v_i_boxed_885_; lean_object* v_res_886_; 
v_sz_boxed_884_ = lean_unbox_usize(v_sz_881_);
lean_dec(v_sz_881_);
v_i_boxed_885_ = lean_unbox_usize(v_i_882_);
lean_dec(v_i_882_);
v_res_886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_sz_boxed_884_, v_i_boxed_885_, v_bs_883_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___x_888_, lean_object* v___f_889_, lean_object* v_a_890_, lean_object* v___x_891_, lean_object* v___y_892_, lean_object* v_x_893_){
_start:
{
uint8_t v___y_896_; lean_object* v_val_897_; lean_object* v___y_901_; lean_object* v___y_902_; 
if (lean_obj_tag(v_x_893_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___x_891_);
lean_dec(v_a_890_);
lean_dec_ref(v___f_889_);
lean_dec(v___x_888_);
v_a_925_ = lean_ctor_get(v_x_893_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_933_ == 0)
{
v___x_927_ = v_x_893_;
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v_x_893_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_932_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_931_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
return v___x_931_;
}
}
}
else
{
lean_object* v_a_934_; uint16_t v_status_935_; lean_object* v_headers_936_; lean_object* v_body_937_; lean_object* v___x_938_; lean_object* v___y_940_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; uint8_t v___x_958_; 
v_a_934_ = lean_ctor_get(v_x_893_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v_x_893_, 1);
v_status_935_ = lean_ctor_get_uint16(v_a_934_, sizeof(void*)*2);
v_headers_936_ = lean_ctor_get(v_a_934_, 0);
lean_inc_ref(v_headers_936_);
v_body_937_ = lean_ctor_get(v_a_934_, 1);
lean_inc_ref(v_body_937_);
lean_dec(v_a_934_);
v___x_938_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__1___closed__0));
v___x_954_ = lean_uint16_to_nat(v_status_935_);
v___x_955_ = lean_nat_to_int(v___x_954_);
v___x_956_ = lean_nat_abs(v___x_955_);
v___x_957_ = lean_cstr_to_nat("9007199254740991");
v___x_958_ = lean_nat_dec_le(v___x_956_, v___x_957_);
lean_dec(v___x_956_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_955_);
v___y_940_ = v___x_959_;
goto v___jp_939_;
}
else
{
double v___x_960_; lean_object* v___x_961_; 
v___x_960_ = l_Float_ofInt(v___x_955_);
lean_dec(v___x_955_);
v___x_961_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_961_, 0, v___x_960_);
v___y_940_ = v___x_961_;
goto v___jp_939_;
}
v___jp_939_:
{
lean_object* v___x_941_; size_t v_sz_942_; size_t v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_938_);
lean_ctor_set(v___x_941_, 1, v___y_940_);
v_sz_942_ = lean_array_size(v_headers_936_);
v___x_943_ = ((size_t)0ULL);
v___x_944_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_sz_942_, v___x_943_, v_headers_936_);
v___x_945_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_891_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_box(0);
v___x_948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_941_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = l_Lasm_JS_obj(v___x_949_);
v___x_951_ = l_Lasm_Fetch_bodyless(v___y_892_, v_status_935_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_952_, 0, v_body_937_);
v___y_901_ = v___x_950_;
v___y_902_ = v___x_952_;
goto v___jp_900_;
}
else
{
lean_object* v___x_953_; 
lean_dec_ref(v_body_937_);
v___x_953_ = lean_box(1);
v___y_901_ = v___x_950_;
v___y_902_ = v___x_953_;
goto v___jp_900_;
}
}
}
v___jp_895_:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_val_897_);
v___x_899_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_888_, v___y_896_, v___x_898_, v___f_889_);
return v___x_899_;
}
v___jp_900_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; lean_object* v___x_908_; 
v___x_903_ = lean_unsigned_to_nat(2u);
v___x_904_ = lean_mk_empty_array_with_capacity(v___x_903_);
v___x_905_ = lean_array_push(v___x_904_, v___y_902_);
v___x_906_ = lean_array_push(v___x_905_, v___y_901_);
v___x_907_ = 0;
v___x_908_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_890_, v___x_906_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_908_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set_tag(v___x_911_, 1);
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v___y_896_ = v___x_907_;
v_val_897_ = v___x_914_;
goto v___jp_895_;
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
v_a_917_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_908_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_908_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set_tag(v___x_919_, 0);
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
v___y_896_ = v___x_907_;
v_val_897_ = v___x_922_;
goto v___jp_895_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___x_962_, lean_object* v___f_963_, lean_object* v_a_964_, lean_object* v___x_965_, lean_object* v___y_966_, lean_object* v_x_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___x_962_, v___f_963_, v_a_964_, v___x_965_, v___y_966_, v_x_967_);
lean_dec_ref(v___y_966_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v_headers_972_, lean_object* v_handler_973_, lean_object* v___x_974_, lean_object* v___f_975_, lean_object* v_body_976_){
_start:
{
lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_978_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_978_, 0, v___y_970_);
lean_ctor_set(v___x_978_, 1, v___y_971_);
lean_ctor_set(v___x_978_, 2, v_headers_972_);
lean_ctor_set(v___x_978_, 3, v_body_976_);
v___x_979_ = 0;
v___x_980_ = l_Lasm_Fetch_respond(v_handler_973_, v___x_978_);
v___x_981_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_974_, v___x_979_, v___x_980_, v___f_975_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v_headers_984_, lean_object* v_handler_985_, lean_object* v___x_986_, lean_object* v___f_987_, lean_object* v_body_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v___y_982_, v___y_983_, v_headers_984_, v_handler_985_, v___x_986_, v___f_987_, v_body_988_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_991_, lean_object* v_x_992_){
_start:
{
if (lean_obj_tag(v_x_992_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1002_; 
lean_dec_ref(v___f_991_);
v_a_994_ = lean_ctor_get(v_x_992_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_x_992_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_996_ = v_x_992_;
v_isShared_997_ = v_isSharedCheck_1002_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v_x_992_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1002_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1001_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_ctor_get(v_x_992_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v_x_992_, 1);
v___x_1004_ = lean_apply_2(v___f_991_, v_a_1003_, lean_box(0));
return v___x_1004_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_1005_, lean_object* v_x_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_1005_, v_x_1006_);
return v_res_1008_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1014_ = lean_string_utf8_byte_size(v___x_1013_);
return v___x_1014_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__4);
v___x_1017_ = lean_nat_dec_eq(v___x_1016_, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__9));
v___x_1023_ = lean_unsigned_to_nat(46u);
v___x_1024_ = lean_unsigned_to_nat(193u);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__8));
v___x_1026_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__7));
v___x_1027_ = l_mkPanicMessageWithDecl(v___x_1026_, v___x_1025_, v___x_1024_, v___x_1023_, v___x_1022_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(lean_object* v_context_1029_, lean_object* v_d_1030_){
_start:
{
lean_object* v___y_1033_; lean_object* v___y_1034_; 
if (lean_obj_tag(v_d_1030_) == 6)
{
lean_object* v_b_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v_b_1038_ = lean_ctor_get(v_d_1030_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_d_1030_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v_d_1030_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_b_1038_);
lean_dec(v_d_1030_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 0);
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_b_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
else
{
lean_object* v___x_1046_; lean_object* v_received_1048_; 
v___x_1046_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_1030_) == 9)
{
lean_object* v_value_1062_; lean_object* v_description_1063_; uint8_t v___x_1064_; 
v_value_1062_ = lean_ctor_get(v_d_1030_, 0);
v_description_1063_ = lean_ctor_get(v_d_1030_, 1);
v___x_1064_ = lean_string_dec_eq(v_description_1063_, v___x_1046_);
if (v___x_1064_ == 0)
{
goto v___jp_1060_;
}
else
{
uint32_t v___x_1065_; uint64_t v___x_1066_; lean_object* v___x_1067_; uint32_t v___x_1068_; lean_object* v___x_1069_; 
lean_inc_n(v_value_1062_, 2);
lean_dec_ref_known(v_d_1030_, 2);
v___x_1065_ = 206;
v___x_1066_ = 0ULL;
v___x_1067_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1067_, 0, v_value_1062_);
lean_ctor_set(v___x_1067_, 1, v___x_1046_);
v___x_1068_ = lasm_js_value_handle(v_value_1062_);
lean_dec(v_value_1062_);
v___x_1069_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1065_, v___x_1066_, v___x_1067_, v___x_1068_);
lean_dec_ref_known(v___x_1067_, 2);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; uint8_t v___x_1071_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v___x_1071_ = lean_string_validate_utf8(v_a_1070_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec(v_a_1070_);
v___x_1072_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10);
v___x_1073_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1072_);
v_received_1048_ = v___x_1073_;
goto v___jp_1047_;
}
else
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_string_from_utf8_unchecked(v_a_1070_);
v_received_1048_ = v___x_1074_;
goto v___jp_1047_;
}
}
else
{
lean_object* v___x_1075_; 
lean_dec_ref_known(v___x_1069_, 1);
v___x_1075_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11));
v_received_1048_ = v___x_1075_;
goto v___jp_1047_;
}
}
}
else
{
goto v___jp_1060_;
}
v___jp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v___x_1049_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0));
v___x_1050_ = lean_string_append(v___x_1049_, v_context_1029_);
v___x_1051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1));
v___x_1052_ = lean_string_append(v___x_1050_, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__2));
v___x_1054_ = lean_string_append(v___x_1052_, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3));
v___x_1056_ = lean_string_append(v___x_1054_, v___x_1055_);
v___x_1057_ = lean_string_append(v___x_1056_, v_received_1048_);
lean_dec_ref(v_received_1048_);
v___x_1058_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__5);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; 
v___x_1059_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__6));
v___y_1033_ = v___x_1057_;
v___y_1034_ = v___x_1059_;
goto v___jp_1032_;
}
else
{
v___y_1033_ = v___x_1057_;
v___y_1034_ = v___x_1046_;
goto v___jp_1032_;
}
}
v___jp_1060_:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_JS_Data_describe(v_d_1030_);
v_received_1048_ = v___x_1061_;
goto v___jp_1047_;
}
}
v___jp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = lean_string_append(v___y_1033_, v___y_1034_);
v___x_1036_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
return v___x_1037_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___boxed(lean_object* v_context_1076_, lean_object* v_d_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(v_context_1076_, v_d_1077_);
lean_dec_ref(v_context_1076_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(lean_object* v_context_1080_, lean_object* v_bytes_1081_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_JS_Wire_decode(v_bytes_1081_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6(v_context_1080_, v_a_1084_);
return v___x_1085_;
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1083_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1083_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5___boxed(lean_object* v_context_1094_, lean_object* v_bytes_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v_context_1094_, v_bytes_1095_);
lean_dec_ref(v_bytes_1095_);
lean_dec_ref(v_context_1094_);
return v_res_1097_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0(void){
_start:
{
uint8_t v___x_1098_; uint64_t v___x_1099_; 
v___x_1098_ = 0;
v___x_1099_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(uint8_t v_await_1100_, uint64_t v_extra_1101_){
_start:
{
uint64_t v___x_1102_; uint64_t v___y_1104_; 
v___x_1102_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0);
if (v_await_1100_ == 0)
{
uint64_t v___x_1107_; 
v___x_1107_ = 0ULL;
v___y_1104_ = v___x_1107_;
goto v___jp_1103_;
}
else
{
uint64_t v___x_1108_; 
v___x_1108_ = 2ULL;
v___y_1104_ = v___x_1108_;
goto v___jp_1103_;
}
v___jp_1103_:
{
uint64_t v___x_1105_; uint64_t v___x_1106_; 
v___x_1105_ = lean_uint64_lor(v___x_1102_, v___y_1104_);
v___x_1106_ = lean_uint64_lor(v___x_1105_, v_extra_1101_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___boxed(lean_object* v_await_1109_, lean_object* v_extra_1110_){
_start:
{
uint8_t v_await_boxed_1111_; uint64_t v_extra_boxed_1112_; uint64_t v_res_1113_; lean_object* v_r_1114_; 
v_await_boxed_1111_ = lean_unbox(v_await_1109_);
v_extra_boxed_1112_ = lean_unbox_uint64(v_extra_1110_);
lean_dec_ref(v_extra_1110_);
v_res_1113_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v_await_boxed_1111_, v_extra_boxed_1112_);
v_r_1114_ = lean_box_uint64(v_res_1113_);
return v_r_1114_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0(void){
_start:
{
uint64_t v___x_1115_; uint8_t v___x_1116_; uint64_t v___x_1117_; 
v___x_1115_ = 4ULL;
v___x_1116_ = 0;
v___x_1117_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v___x_1116_, v___x_1115_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_c_1118_, lean_object* v_args_1119_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint64_t v___x_1124_; lean_object* v___x_1125_; 
v___x_1121_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1122_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1122_, 0, v_c_1118_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
v___x_1123_ = lean_box(0);
v___x_1124_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___closed__0);
v___x_1125_ = l_Lasm_JS_Value_invokeRaw(v___x_1122_, v___x_1123_, v_args_1119_, v___x_1124_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1127_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__1));
v___x_1128_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v___x_1127_, v_a_1126_);
lean_dec(v_a_1126_);
return v___x_1128_;
}
else
{
return v___x_1125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_c_1129_, lean_object* v_args_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_c_1129_, v_args_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___x_1133_, uint8_t v___x_1134_, lean_object* v___f_1135_, lean_object* v_a_1136_, lean_object* v_x_1137_){
_start:
{
lean_object* v_val_1140_; 
if (lean_obj_tag(v_x_1137_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1151_; 
lean_dec(v_a_1136_);
lean_dec_ref(v___f_1135_);
lean_dec(v___x_1133_);
v_a_1143_ = lean_ctor_get(v_x_1137_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_x_1137_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1145_ = v_x_1137_;
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v_x_1137_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
return v___x_1149_;
}
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1170_; 
v_a_1152_ = lean_ctor_get(v_x_1137_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1137_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1154_ = v_x_1137_;
v_isShared_1155_ = v_isSharedCheck_1170_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v_x_1137_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1170_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1156_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1157_, 0, v_a_1152_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_unsigned_to_nat(1u);
v___x_1159_ = lean_mk_empty_array_with_capacity(v___x_1158_);
v___x_1160_ = lean_array_push(v___x_1159_, v___x_1157_);
v___x_1161_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_1136_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1162_);
lean_dec_ref_known(v___x_1161_, 1);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v_a_1162_);
v___x_1164_ = v___x_1154_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
v_val_1140_ = v___x_1164_;
goto v___jp_1139_;
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; 
v_a_1166_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1166_);
lean_dec_ref_known(v___x_1161_, 1);
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 0);
lean_ctor_set(v___x_1154_, 0, v_a_1166_);
v___x_1168_ = v___x_1154_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
v_val_1140_ = v___x_1168_;
goto v___jp_1139_;
}
}
}
}
v___jp_1139_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v_val_1140_);
v___x_1142_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1133_, v___x_1134_, v___x_1141_, v___f_1135_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___x_1171_, lean_object* v___x_1172_, lean_object* v___f_1173_, lean_object* v_a_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_){
_start:
{
uint8_t v___x_7258__boxed_1177_; lean_object* v_res_1178_; 
v___x_7258__boxed_1177_ = lean_unbox(v___x_1172_);
v_res_1178_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___x_1171_, v___x_7258__boxed_1177_, v___f_1173_, v_a_1174_, v_x_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4(lean_object* v___f_1179_, lean_object* v_x_1180_){
_start:
{
if (lean_obj_tag(v_x_1180_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v___f_1179_);
v_a_1182_ = lean_ctor_get(v_x_1180_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1184_ = v_x_1180_;
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v_x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
return v___x_1188_;
}
}
}
else
{
lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1202_; 
v_isSharedCheck_1202_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v_x_1180_, 0);
lean_dec(v_unused_1203_);
v___x_1192_ = v_x_1180_;
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
else
{
lean_dec(v_x_1180_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = 0;
v___x_1196_ = lean_io_promise_new();
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1196_);
v___x_1198_ = v___x_1192_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
v___x_1200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1194_, v___x_1195_, v___x_1199_, v___f_1179_);
return v___x_1200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4___boxed(lean_object* v___f_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4(v___f_1204_, v_x_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3(lean_object* v___f_1208_, lean_object* v_x_1209_){
_start:
{
if (lean_obj_tag(v_x_1209_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref(v___f_1208_);
v_a_1211_ = lean_ctor_get(v_x_1209_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_x_1209_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1213_ = v_x_1209_;
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v_x_1209_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
return v___x_1217_;
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1221_; 
v_a_1220_ = lean_ctor_get(v_x_1209_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v_x_1209_, 1);
v___x_1221_ = lean_apply_2(v___f_1208_, v_a_1220_, lean_box(0));
return v___x_1221_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3___boxed(lean_object* v___f_1222_, lean_object* v_x_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3(v___f_1222_, v_x_1223_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5(lean_object* v_a_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1237_; 
v_a_1229_ = lean_ctor_get(v_x_1227_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1231_ = v_x_1227_;
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v_x_1227_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
}
else
{
lean_object* v___x_1238_; 
lean_dec_ref_known(v_x_1227_, 1);
v___x_1238_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1226_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed(lean_object* v_a_1239_, lean_object* v_x_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5(v_a_1239_, v_x_1240_);
lean_dec(v_a_1239_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6(lean_object* v_payload_1243_, lean_object* v_failurePrefix_1244_, lean_object* v___f_1245_, lean_object* v___f_1246_, uint32_t v_op_1247_, uint64_t v_flags_1248_, lean_object* v___f_1249_, lean_object* v_x_1250_){
_start:
{
if (lean_obj_tag(v_x_1250_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v___f_1249_);
lean_dec_ref(v___f_1246_);
lean_dec_ref(v___f_1245_);
v_a_1252_ = lean_ctor_get(v_x_1250_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_x_1250_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1254_ = v_x_1250_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v_x_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1302_; 
v_a_1261_ = lean_ctor_get(v_x_1250_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_x_1250_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1263_ = v_x_1250_;
v_isShared_1264_ = v_isSharedCheck_1302_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v_x_1250_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1302_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
uint32_t v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1265_ = 0;
v___x_1266_ = l_Lasm_JS_Wire_encode(v_payload_1243_);
v___x_1267_ = lean_string_utf8_byte_size(v_failurePrefix_1244_);
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = lean_nat_dec_eq(v___x_1267_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___f_1270_; lean_object* v_val_1272_; lean_object* v___x_1277_; 
lean_dec_ref(v___f_1249_);
lean_inc(v_a_1261_);
v___f_1270_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1270_, 0, v_a_1261_);
v___x_1277_ = lasm_js_call_into(v_a_1261_, v_op_1247_, v___x_1265_, v_flags_1248_, v___x_1266_, v_payload_1243_);
lean_dec_ref(v___x_1266_);
lean_dec(v_a_1261_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1280_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v_a_1278_);
v___x_1280_ = v___x_1263_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
v_val_1272_ = v___x_1280_;
goto v___jp_1271_;
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; 
v_a_1282_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1277_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 0);
lean_ctor_set(v___x_1263_, 0, v_a_1282_);
v___x_1284_ = v___x_1263_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
v_val_1272_ = v___x_1284_;
goto v___jp_1271_;
}
}
v___jp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_val_1272_);
v___x_1274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1268_, v___x_1269_, v___x_1273_, v___f_1270_);
v___x_1275_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1268_, v___x_1269_, v___x_1274_, v___f_1245_);
v___x_1276_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1268_, v___x_1269_, v___x_1275_, v___f_1246_);
return v___x_1276_;
}
}
else
{
lean_object* v___f_1286_; uint8_t v___x_1287_; lean_object* v_val_1289_; lean_object* v___x_1293_; 
lean_dec_ref(v___f_1246_);
lean_dec_ref(v___f_1245_);
lean_inc(v_a_1261_);
v___f_1286_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1286_, 0, v_a_1261_);
v___x_1287_ = 0;
v___x_1293_ = lasm_js_call_into(v_a_1261_, v_op_1247_, v___x_1265_, v_flags_1248_, v___x_1266_, v_payload_1243_);
lean_dec_ref(v___x_1266_);
lean_dec(v_a_1261_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; lean_object* v___x_1296_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
lean_dec_ref_known(v___x_1293_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v_a_1294_);
v___x_1296_ = v___x_1263_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
v_val_1289_ = v___x_1296_;
goto v___jp_1288_;
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1300_; 
v_a_1298_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1298_);
lean_dec_ref_known(v___x_1293_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 0);
lean_ctor_set(v___x_1263_, 0, v_a_1298_);
v___x_1300_ = v___x_1263_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1298_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
v_val_1289_ = v___x_1300_;
goto v___jp_1288_;
}
}
v___jp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v_val_1289_);
v___x_1291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1268_, v___x_1287_, v___x_1290_, v___f_1286_);
v___x_1292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1268_, v___x_1287_, v___x_1291_, v___f_1249_);
return v___x_1292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6___boxed(lean_object* v_payload_1303_, lean_object* v_failurePrefix_1304_, lean_object* v___f_1305_, lean_object* v___f_1306_, lean_object* v_op_1307_, lean_object* v_flags_1308_, lean_object* v___f_1309_, lean_object* v_x_1310_, lean_object* v___y_1311_){
_start:
{
uint32_t v_op_boxed_1312_; uint64_t v_flags_boxed_1313_; lean_object* v_res_1314_; 
v_op_boxed_1312_ = lean_unbox_uint32(v_op_1307_);
lean_dec(v_op_1307_);
v_flags_boxed_1313_ = lean_unbox_uint64(v_flags_1308_);
lean_dec_ref(v_flags_1308_);
v_res_1314_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6(v_payload_1303_, v_failurePrefix_1304_, v___f_1305_, v___f_1306_, v_op_boxed_1312_, v_flags_boxed_1313_, v___f_1309_, v_x_1310_);
lean_dec_ref(v_failurePrefix_1304_);
lean_dec(v_payload_1303_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0(lean_object* v_failurePrefix_1315_, lean_object* v_x_1316_){
_start:
{
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1329_; 
v_a_1318_ = lean_ctor_get(v_x_1316_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_x_1316_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1320_ = v_x_1316_;
v_isShared_1321_ = v_isSharedCheck_1329_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v_x_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1329_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1326_; 
v___x_1322_ = lean_io_error_to_string(v_a_1318_);
v___x_1323_ = lean_string_append(v_failurePrefix_1315_, v___x_1322_);
lean_dec_ref(v___x_1322_);
v___x_1324_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1324_);
v___x_1326_ = v___x_1320_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
}
}
else
{
lean_object* v___x_1330_; 
lean_dec_ref(v_failurePrefix_1315_);
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_x_1316_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0___boxed(lean_object* v_failurePrefix_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0(v_failurePrefix_1331_, v_x_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2(lean_object* v___f_1335_, lean_object* v_bytes_1336_){
_start:
{
lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v_val_1341_; lean_object* v___x_1344_; 
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = 0;
v___x_1344_ = l_Lasm_JS_Wire_decode(v_bytes_1336_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1344_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1344_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 1);
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
v_val_1341_ = v___x_1350_;
goto v___jp_1340_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
v_a_1353_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1344_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1344_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
lean_ctor_set_tag(v___x_1355_, 0);
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
v_val_1341_ = v___x_1358_;
goto v___jp_1340_;
}
}
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1342_, 0, v_val_1341_);
v___x_1343_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1338_, v___x_1339_, v___x_1342_, v___f_1335_);
return v___x_1343_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2___boxed(lean_object* v___f_1361_, lean_object* v_bytes_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2(v___f_1361_, v_bytes_1362_);
lean_dec_ref(v_bytes_1362_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1(lean_object* v_context_1365_, lean_object* v_x_1366_){
_start:
{
lean_object* v_val_1369_; 
if (lean_obj_tag(v_x_1366_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1379_; 
v_a_1371_ = lean_ctor_get(v_x_1366_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1373_ = v_x_1366_;
v_isShared_1374_ = v_isSharedCheck_1379_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v_x_1366_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1379_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1393_; 
v_a_1380_ = lean_ctor_get(v_x_1366_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1382_ = v_x_1366_;
v_isShared_1383_ = v_isSharedCheck_1393_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v_x_1366_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1393_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1365_, v_a_1380_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1387_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v_a_1385_);
v___x_1387_ = v___x_1382_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1385_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
v_val_1369_ = v___x_1387_;
goto v___jp_1368_;
}
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; 
v_a_1389_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1384_, 1);
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 0);
lean_ctor_set(v___x_1382_, 0, v_a_1389_);
v___x_1391_ = v___x_1382_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
v_val_1369_ = v___x_1391_;
goto v___jp_1368_;
}
}
}
}
v___jp_1368_:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_val_1369_);
return v___x_1370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1___boxed(lean_object* v_context_1394_, lean_object* v_x_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1(v_context_1394_, v_x_1395_);
lean_dec_ref(v_context_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(lean_object* v_context_1398_, uint32_t v_op_1399_, uint64_t v_flags_1400_, lean_object* v_payload_1401_, lean_object* v_failurePrefix_1402_){
_start:
{
lean_object* v___f_1404_; lean_object* v___f_1405_; lean_object* v___f_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___f_1410_; lean_object* v___f_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; lean_object* v_val_1415_; lean_object* v___x_1418_; 
lean_inc_ref(v_failurePrefix_1402_);
v___f_1404_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1404_, 0, v_failurePrefix_1402_);
v___f_1405_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1405_, 0, v_context_1398_);
v___f_1406_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1406_, 0, v___f_1405_);
v___f_1407_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1407_, 0, v___f_1406_);
v___x_1408_ = lean_box_uint32(v_op_1399_);
v___x_1409_ = lean_box_uint64(v_flags_1400_);
lean_inc_ref(v___f_1407_);
v___f_1410_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1410_, 0, v_payload_1401_);
lean_closure_set(v___f_1410_, 1, v_failurePrefix_1402_);
lean_closure_set(v___f_1410_, 2, v___f_1404_);
lean_closure_set(v___f_1410_, 3, v___f_1407_);
lean_closure_set(v___f_1410_, 4, v___x_1408_);
lean_closure_set(v___f_1410_, 5, v___x_1409_);
lean_closure_set(v___f_1410_, 6, v___f_1407_);
v___f_1411_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1411_, 0, v___f_1410_);
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = 0;
v___x_1418_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1418_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 1);
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
v_val_1415_ = v___x_1424_;
goto v___jp_1414_;
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1418_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1418_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 0);
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
v_val_1415_ = v___x_1432_;
goto v___jp_1414_;
}
}
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_val_1415_);
v___x_1417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1413_, v___x_1416_, v___f_1411_);
return v___x_1417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7___boxed(lean_object* v_context_1435_, lean_object* v_op_1436_, lean_object* v_flags_1437_, lean_object* v_payload_1438_, lean_object* v_failurePrefix_1439_, lean_object* v_a_1440_){
_start:
{
uint32_t v_op_boxed_1441_; uint64_t v_flags_boxed_1442_; lean_object* v_res_1443_; 
v_op_boxed_1441_ = lean_unbox_uint32(v_op_1436_);
lean_dec(v_op_1436_);
v_flags_boxed_1442_ = lean_unbox_uint64(v_flags_1437_);
lean_dec_ref(v_flags_1437_);
v_res_1443_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(v_context_1435_, v_op_boxed_1441_, v_flags_boxed_1442_, v_payload_1438_, v_failurePrefix_1439_);
return v_res_1443_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1(void){
_start:
{
uint64_t v___x_1445_; uint8_t v___x_1446_; uint64_t v___x_1447_; 
v___x_1445_ = 8ULL;
v___x_1446_ = 0;
v___x_1447_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2(v___x_1446_, v___x_1445_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(lean_object* v_o_1448_, lean_object* v_name_1449_, lean_object* v_args_1450_){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint32_t v___x_1457_; uint64_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1452_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1453_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1453_, 0, v_o_1448_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
lean_inc_ref(v_name_1449_);
v___x_1454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_name_1449_);
v___x_1455_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_1456_ = lean_string_append(v___x_1455_, v_name_1449_);
lean_dec_ref(v_name_1449_);
v___x_1457_ = 205;
v___x_1458_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1);
v___x_1459_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_args_1450_);
v___x_1460_ = lean_unsigned_to_nat(3u);
v___x_1461_ = lean_mk_empty_array_with_capacity(v___x_1460_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1453_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1454_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1459_);
v___x_1465_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
v___x_1466_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4_spec__7(v___x_1456_, v___x_1457_, v___x_1458_, v___x_1465_, v___x_1452_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___boxed(lean_object* v_o_1467_, lean_object* v_name_1468_, lean_object* v_args_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_o_1467_, v_name_1468_, v_args_1469_);
return v_res_1471_;
}
}
static lean_object* _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = l_ByteArray_empty;
v___x_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__0);
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v_handler_1480_, lean_object* v___x_1481_, lean_object* v___f_1482_, lean_object* v_a_1483_, lean_object* v_value_1484_, lean_object* v_headers_1485_){
_start:
{
lean_object* v___f_1487_; lean_object* v___f_1488_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
lean_inc(v___x_1481_);
lean_inc_ref(v___y_1478_);
v___f_1487_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 8, 6);
lean_closure_set(v___f_1487_, 0, v___y_1478_);
lean_closure_set(v___f_1487_, 1, v___y_1479_);
lean_closure_set(v___f_1487_, 2, v_headers_1485_);
lean_closure_set(v___f_1487_, 3, v_handler_1480_);
lean_closure_set(v___f_1487_, 4, v___x_1481_);
lean_closure_set(v___f_1487_, 5, v___f_1482_);
v___f_1488_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1488_, 0, v___f_1487_);
v___x_1493_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2));
v___x_1494_ = lean_string_dec_eq(v___y_1478_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1495_ = ((lean_object*)(l_Lasm_Fetch_bodyless___closed__0));
v___x_1496_ = lean_string_dec_eq(v___y_1478_, v___x_1495_);
lean_dec_ref(v___y_1478_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1497_ = lean_box(v___x_1496_);
lean_inc(v___x_1481_);
v___f_1498_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 6, 4);
lean_closure_set(v___f_1498_, 0, v___x_1481_);
lean_closure_set(v___f_1498_, 1, v___x_1497_);
lean_closure_set(v___f_1498_, 2, v___f_1488_);
lean_closure_set(v___f_1498_, 3, v_a_1483_);
v___x_1499_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__4___closed__3));
v___x_1500_ = lean_mk_empty_array_with_capacity(v___x_1481_);
v___x_1501_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_value_1484_, v___x_1499_, v___x_1500_);
v___x_1502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1481_, v___x_1496_, v___x_1501_, v___f_1498_);
return v___x_1502_;
}
else
{
lean_dec(v_value_1484_);
lean_dec(v_a_1483_);
goto v___jp_1489_;
}
}
else
{
lean_dec(v_value_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v___y_1478_);
goto v___jp_1489_;
}
v___jp_1489_:
{
uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = 0;
v___x_1491_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1);
v___x_1492_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1481_, v___x_1490_, v___x_1491_, v___f_1488_);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v_handler_1505_, lean_object* v___x_1506_, lean_object* v___f_1507_, lean_object* v_a_1508_, lean_object* v_value_1509_, lean_object* v_headers_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___y_1503_, v___y_1504_, v_handler_1505_, v___x_1506_, v___f_1507_, v_a_1508_, v_value_1509_, v_headers_1510_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___f_1513_, lean_object* v_x_1514_){
_start:
{
if (lean_obj_tag(v_x_1514_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1524_; 
lean_dec_ref(v___f_1513_);
v_a_1516_ = lean_ctor_get(v_x_1514_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_x_1514_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1518_ = v_x_1514_;
v_isShared_1519_ = v_isSharedCheck_1524_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v_x_1514_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1524_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1526_; 
v_a_1525_ = lean_ctor_get(v_x_1514_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v_x_1514_, 1);
v___x_1526_ = lean_apply_2(v___f_1513_, v_a_1525_, lean_box(0));
return v___x_1526_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___f_1527_, lean_object* v_x_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___f_1527_, v_x_1528_);
return v_res_1530_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(uint8_t v_await_1531_, uint64_t v_extra_1532_){
_start:
{
uint64_t v___x_1533_; uint64_t v___y_1535_; 
v___x_1533_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4___closed__0);
if (v_await_1531_ == 0)
{
uint64_t v___x_1538_; 
v___x_1538_ = 0ULL;
v___y_1535_ = v___x_1538_;
goto v___jp_1534_;
}
else
{
uint64_t v___x_1539_; 
v___x_1539_ = 2ULL;
v___y_1535_ = v___x_1539_;
goto v___jp_1534_;
}
v___jp_1534_:
{
uint64_t v___x_1536_; uint64_t v___x_1537_; 
v___x_1536_ = lean_uint64_lor(v___x_1533_, v___y_1535_);
v___x_1537_ = lean_uint64_lor(v___x_1536_, v_extra_1532_);
return v___x_1537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9___boxed(lean_object* v_await_1540_, lean_object* v_extra_1541_){
_start:
{
uint8_t v_await_boxed_1542_; uint64_t v_extra_boxed_1543_; uint64_t v_res_1544_; lean_object* v_r_1545_; 
v_await_boxed_1542_ = lean_unbox(v_await_1540_);
v_extra_boxed_1543_ = lean_unbox_uint64(v_extra_1541_);
lean_dec_ref(v_extra_1541_);
v_res_1544_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(v_await_boxed_1542_, v_extra_boxed_1543_);
v_r_1545_ = lean_box_uint64(v_res_1544_);
return v_r_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(size_t v_sz_1551_, size_t v_i_1552_, lean_object* v_bs_1553_){
_start:
{
uint8_t v___x_1556_; 
v___x_1556_ = lean_usize_dec_lt(v_i_1552_, v_sz_1551_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_bs_1553_);
return v___x_1557_;
}
else
{
lean_object* v_v_1558_; 
v_v_1558_ = lean_array_uget_borrowed(v_bs_1553_, v_i_1552_);
if (lean_obj_tag(v_v_1558_) == 7)
{
lean_object* v_items_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v_items_1559_ = lean_ctor_get(v_v_1558_, 0);
v___x_1560_ = lean_array_get_size(v_items_1559_);
v___x_1561_ = lean_unsigned_to_nat(2u);
v___x_1562_ = lean_nat_dec_eq(v___x_1560_, v___x_1561_);
if (v___x_1562_ == 0)
{
lean_dec_ref(v_bs_1553_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_unsigned_to_nat(0u);
v___x_1564_ = lean_array_fget_borrowed(v_items_1559_, v___x_1563_);
if (lean_obj_tag(v___x_1564_) == 4)
{
lean_object* v_s_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_s_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc_ref(v_s_1565_);
v___x_1566_ = lean_unsigned_to_nat(1u);
v___x_1567_ = lean_array_fget_borrowed(v_items_1559_, v___x_1566_);
if (lean_obj_tag(v___x_1567_) == 4)
{
lean_object* v_s_1568_; lean_object* v_bs_x27_1569_; lean_object* v___x_1570_; size_t v___x_1571_; size_t v___x_1572_; lean_object* v___x_1573_; 
v_s_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc_ref(v_s_1568_);
v_bs_x27_1569_ = lean_array_uset(v_bs_1553_, v_i_1552_, v___x_1563_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v_s_1565_);
lean_ctor_set(v___x_1570_, 1, v_s_1568_);
v___x_1571_ = ((size_t)1ULL);
v___x_1572_ = lean_usize_add(v_i_1552_, v___x_1571_);
v___x_1573_ = lean_array_uset(v_bs_x27_1569_, v_i_1552_, v___x_1570_);
v_i_1552_ = v___x_1572_;
v_bs_1553_ = v___x_1573_;
goto _start;
}
else
{
lean_object* v___x_1575_; 
lean_dec_ref(v_s_1565_);
lean_dec_ref(v_bs_1553_);
v___x_1575_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2));
return v___x_1575_;
}
}
else
{
lean_object* v___x_1576_; 
lean_dec_ref(v_bs_1553_);
v___x_1576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__2));
return v___x_1576_;
}
}
}
else
{
lean_dec_ref(v_bs_1553_);
goto v___jp_1554_;
}
}
v___jp_1554_:
{
lean_object* v___x_1555_; 
v___x_1555_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___closed__1));
return v___x_1555_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14___boxed(lean_object* v_sz_1577_, lean_object* v_i_1578_, lean_object* v_bs_1579_){
_start:
{
size_t v_sz_boxed_1580_; size_t v_i_boxed_1581_; lean_object* v_res_1582_; 
v_sz_boxed_1580_ = lean_unbox_usize(v_sz_1577_);
lean_dec(v_sz_1577_);
v_i_boxed_1581_ = lean_unbox_usize(v_i_1578_);
lean_dec(v_i_1578_);
v_res_1582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(v_sz_boxed_1580_, v_i_boxed_1581_, v_bs_1579_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(lean_object* v_context_1587_, lean_object* v_d_1588_){
_start:
{
lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1597_; lean_object* v_received_1598_; lean_object* v___y_1617_; lean_object* v_a_1620_; 
if (lean_obj_tag(v_d_1588_) == 7)
{
lean_object* v_items_1644_; size_t v_sz_1645_; size_t v___x_1646_; lean_object* v___x_1647_; 
v_items_1644_ = lean_ctor_get(v_d_1588_, 0);
v_sz_1645_ = lean_array_size(v_items_1644_);
v___x_1646_ = ((size_t)0ULL);
lean_inc_ref(v_items_1644_);
v___x_1647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12_spec__14(v_sz_1645_, v___x_1646_, v_items_1644_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v___x_1649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__3));
v___x_1650_ = lean_string_utf8_byte_size(v_a_1648_);
v___x_1651_ = lean_unsigned_to_nat(0u);
v___x_1652_ = lean_nat_dec_eq(v___x_1650_, v___x_1651_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1654_ = lean_string_append(v___x_1653_, v_a_1648_);
lean_dec(v_a_1648_);
v___x_1655_ = lean_string_append(v___x_1649_, v___x_1654_);
lean_dec_ref(v___x_1654_);
v_a_1620_ = v___x_1655_;
goto v___jp_1619_;
}
else
{
lean_dec(v_a_1648_);
v_a_1620_ = v___x_1649_;
goto v___jp_1619_;
}
}
else
{
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1656_; 
v_a_1656_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1656_);
lean_dec_ref_known(v___x_1647_, 1);
v_a_1620_ = v_a_1656_;
goto v___jp_1619_;
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec_ref_known(v_d_1588_, 1);
v_a_1657_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1647_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1647_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set_tag(v___x_1659_, 0);
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_1665_; 
v___x_1665_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_1620_ = v___x_1665_;
goto v___jp_1619_;
}
v___jp_1590_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = lean_string_append(v___y_1591_, v___y_1592_);
lean_dec_ref(v___y_1592_);
v___x_1594_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
v___x_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
return v___x_1595_;
}
v___jp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__0));
v___x_1600_ = lean_string_append(v___x_1599_, v_context_1587_);
v___x_1601_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__1));
v___x_1602_ = lean_string_append(v___x_1600_, v___x_1601_);
v___x_1603_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__0));
v___x_1604_ = lean_string_append(v___x_1602_, v___x_1603_);
v___x_1605_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__3));
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
v___x_1607_ = lean_string_append(v___x_1606_, v_received_1598_);
lean_dec_ref(v_received_1598_);
v___x_1608_ = lean_string_utf8_byte_size(v___y_1597_);
v___x_1609_ = lean_unsigned_to_nat(0u);
v___x_1610_ = lean_nat_dec_eq(v___x_1608_, v___x_1609_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1611_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__1));
v___x_1612_ = lean_string_append(v___x_1611_, v___y_1597_);
lean_dec_ref(v___y_1597_);
v___x_1613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___closed__2));
v___x_1614_ = lean_string_append(v___x_1612_, v___x_1613_);
v___y_1591_ = v___x_1607_;
v___y_1592_ = v___x_1614_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1615_; 
lean_dec_ref(v___y_1597_);
v___x_1615_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_1591_ = v___x_1607_;
v___y_1592_ = v___x_1615_;
goto v___jp_1590_;
}
}
v___jp_1616_:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lasm_JS_Data_describe(v_d_1588_);
v___y_1597_ = v___y_1617_;
v_received_1598_ = v___x_1618_;
goto v___jp_1596_;
}
v___jp_1619_:
{
if (lean_obj_tag(v_d_1588_) == 9)
{
lean_object* v_value_1621_; lean_object* v_description_1622_; lean_object* v___x_1623_; uint8_t v___x_1624_; 
v_value_1621_ = lean_ctor_get(v_d_1588_, 0);
v_description_1622_ = lean_ctor_get(v_d_1588_, 1);
v___x_1623_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1624_ = lean_string_dec_eq(v_description_1622_, v___x_1623_);
if (v___x_1624_ == 0)
{
v___y_1617_ = v_a_1620_;
goto v___jp_1616_;
}
else
{
lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1641_; 
lean_inc(v_value_1621_);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_d_1588_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; lean_object* v_unused_1643_; 
v_unused_1642_ = lean_ctor_get(v_d_1588_, 1);
lean_dec(v_unused_1642_);
v_unused_1643_ = lean_ctor_get(v_d_1588_, 0);
lean_dec(v_unused_1643_);
v___x_1626_ = v_d_1588_;
v_isShared_1627_ = v_isSharedCheck_1641_;
goto v_resetjp_1625_;
}
else
{
lean_dec(v_d_1588_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1641_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
uint32_t v___x_1628_; uint64_t v___x_1629_; lean_object* v___x_1631_; 
v___x_1628_ = 206;
v___x_1629_ = 0ULL;
lean_inc(v_value_1621_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 1, v___x_1623_);
v___x_1631_ = v___x_1626_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_value_1621_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v___x_1623_);
v___x_1631_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
uint32_t v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lasm_js_value_handle(v_value_1621_);
lean_dec(v_value_1621_);
v___x_1633_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1628_, v___x_1629_, v___x_1631_, v___x_1632_);
lean_dec_ref(v___x_1631_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; uint8_t v___x_1635_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = lean_string_validate_utf8(v_a_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
lean_dec(v_a_1634_);
v___x_1636_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__10);
v___x_1637_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1636_);
v___y_1597_ = v_a_1620_;
v_received_1598_ = v___x_1637_;
goto v___jp_1596_;
}
else
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_string_from_utf8_unchecked(v_a_1634_);
v___y_1597_ = v_a_1620_;
v_received_1598_ = v___x_1638_;
goto v___jp_1596_;
}
}
else
{
lean_object* v___x_1639_; 
lean_dec_ref_known(v___x_1633_, 1);
v___x_1639_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5_spec__6___closed__11));
v___y_1597_ = v_a_1620_;
v_received_1598_ = v___x_1639_;
goto v___jp_1596_;
}
}
}
}
}
else
{
v___y_1617_ = v_a_1620_;
goto v___jp_1616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12___boxed(lean_object* v_context_1666_, lean_object* v_d_1667_, lean_object* v_a_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(v_context_1666_, v_d_1667_);
lean_dec_ref(v_context_1666_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(lean_object* v_context_1670_, lean_object* v_bytes_1671_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = l_Lasm_JS_Wire_decode(v_bytes_1671_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1675_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1675_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10_spec__12(v_context_1670_, v_a_1674_);
return v___x_1675_;
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1673_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1673_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10___boxed(lean_object* v_context_1684_, lean_object* v_bytes_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(v_context_1684_, v_bytes_1685_);
lean_dec_ref(v_bytes_1685_);
lean_dec_ref(v_context_1684_);
return v_res_1687_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0(void){
_start:
{
uint64_t v___x_1688_; uint8_t v___x_1689_; uint64_t v___x_1690_; 
v___x_1688_ = 8ULL;
v___x_1689_ = 0;
v___x_1690_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__9(v___x_1689_, v___x_1688_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(lean_object* v_o_1691_, lean_object* v_name_1692_, lean_object* v_args_1693_){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint64_t v___x_1698_; lean_object* v___x_1699_; 
v___x_1695_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1696_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1696_, 0, v_o_1691_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
lean_inc_ref(v_name_1692_);
v___x_1697_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_name_1692_);
v___x_1698_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___closed__0);
v___x_1699_ = l_Lasm_JS_Value_invokeRaw(v___x_1696_, v___x_1697_, v_args_1693_, v___x_1698_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1701_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_1702_ = lean_string_append(v___x_1701_, v_name_1692_);
lean_dec_ref(v_name_1692_);
v___x_1703_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5_spec__10(v___x_1702_, v_a_1700_);
lean_dec(v_a_1700_);
lean_dec_ref(v___x_1702_);
return v___x_1703_;
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
lean_dec_ref(v_name_1692_);
v_a_1704_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1699_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1699_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5___boxed(lean_object* v_o_1712_, lean_object* v_name_1713_, lean_object* v_args_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(v_o_1712_, v_name_1713_, v_args_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___x_1718_, lean_object* v___f_1719_, lean_object* v_a_1720_, lean_object* v___x_1721_, lean_object* v_handler_1722_, lean_object* v_a_1723_, lean_object* v_value_1724_, lean_object* v_a_1725_, lean_object* v___x_1726_, lean_object* v___x_1727_, lean_object* v_x_1728_){
_start:
{
lean_object* v___y_1731_; uint8_t v___y_1732_; lean_object* v_val_1733_; 
if (lean_obj_tag(v_x_1728_) == 0)
{
lean_object* v___x_1736_; 
lean_dec(v_a_1725_);
lean_dec(v_value_1724_);
lean_dec(v_a_1723_);
lean_dec_ref(v_handler_1722_);
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1720_);
lean_dec_ref(v___f_1719_);
lean_dec(v___x_1718_);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v_x_1728_);
return v___x_1736_;
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1789_; 
v_a_1737_ = lean_ctor_get(v_x_1728_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1739_ = v_x_1728_;
v_isShared_1740_ = v_isSharedCheck_1789_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v_x_1728_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1789_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1781_; lean_object* v___x_1786_; 
v___x_1786_ = l_Lasm_JS_Data_field(v_a_1737_, v___x_1727_);
if (lean_obj_tag(v___x_1786_) == 4)
{
lean_object* v_s_1787_; 
v_s_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc_ref(v_s_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___y_1781_ = v_s_1787_;
goto v___jp_1780_;
}
else
{
lean_object* v___x_1788_; 
lean_dec(v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2));
v___y_1781_ = v___x_1788_;
goto v___jp_1780_;
}
v___jp_1741_:
{
lean_object* v___f_1745_; lean_object* v___x_1746_; 
lean_inc(v___x_1718_);
v___f_1745_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 9, 7);
lean_closure_set(v___f_1745_, 0, v___y_1743_);
lean_closure_set(v___f_1745_, 1, v___y_1744_);
lean_closure_set(v___f_1745_, 2, v_handler_1722_);
lean_closure_set(v___f_1745_, 3, v___x_1718_);
lean_closure_set(v___f_1745_, 4, v___y_1742_);
lean_closure_set(v___f_1745_, 5, v_a_1723_);
lean_closure_set(v___f_1745_, 6, v_value_1724_);
v___x_1746_ = l_Lasm_JS_Data_field(v_a_1737_, v___x_1721_);
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1737_);
if (lean_obj_tag(v___x_1746_) == 9)
{
lean_object* v_value_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1770_; 
v_value_1747_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1770_ == 0)
{
lean_object* v_unused_1771_; 
v_unused_1771_ = lean_ctor_get(v___x_1746_, 1);
lean_dec(v_unused_1771_);
v___x_1749_ = v___x_1746_;
v_isShared_1750_ = v_isSharedCheck_1770_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_value_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1770_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___f_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1755_; 
v___f_1751_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1751_, 0, v___f_1745_);
v___x_1752_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__8___closed__0));
v___x_1753_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 1, v___x_1753_);
v___x_1755_ = v___x_1749_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_value_1747_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v___x_1753_);
v___x_1755_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; lean_object* v___x_1760_; 
v___x_1756_ = lean_unsigned_to_nat(1u);
v___x_1757_ = lean_mk_empty_array_with_capacity(v___x_1756_);
v___x_1758_ = lean_array_push(v___x_1757_, v___x_1755_);
v___x_1759_ = 0;
v___x_1760_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__5(v_a_1725_, v___x_1752_, v___x_1758_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 0, v_a_1761_);
v___x_1763_ = v___x_1739_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
v___y_1731_ = v___f_1751_;
v___y_1732_ = v___x_1759_;
v_val_1733_ = v___x_1763_;
goto v___jp_1730_;
}
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; 
v_a_1765_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1760_, 1);
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 0);
lean_ctor_set(v___x_1739_, 0, v_a_1765_);
v___x_1767_ = v___x_1739_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
v___y_1731_ = v___f_1751_;
v___y_1732_ = v___x_1759_;
v_val_1733_ = v___x_1767_;
goto v___jp_1730_;
}
}
}
}
}
else
{
lean_object* v___f_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; lean_object* v___x_1776_; 
lean_dec(v___x_1746_);
lean_dec(v_a_1725_);
v___f_1772_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1772_, 0, v___f_1745_);
v___x_1773_ = lean_mk_empty_array_with_capacity(v___x_1718_);
v___x_1774_ = 0;
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 0, v___x_1773_);
v___x_1776_ = v___x_1739_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1773_);
v___x_1776_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
v___x_1778_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1718_, v___x_1774_, v___x_1777_, v___f_1772_);
return v___x_1778_;
}
}
}
v___jp_1780_:
{
lean_object* v___f_1782_; lean_object* v___x_1783_; 
lean_inc_ref(v___y_1781_);
lean_inc_ref(v___x_1721_);
lean_inc(v___x_1718_);
v___f_1782_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 7, 5);
lean_closure_set(v___f_1782_, 0, v___x_1718_);
lean_closure_set(v___f_1782_, 1, v___f_1719_);
lean_closure_set(v___f_1782_, 2, v_a_1720_);
lean_closure_set(v___f_1782_, 3, v___x_1721_);
lean_closure_set(v___f_1782_, 4, v___y_1781_);
v___x_1783_ = l_Lasm_JS_Data_field(v_a_1737_, v___x_1726_);
if (lean_obj_tag(v___x_1783_) == 4)
{
lean_object* v_s_1784_; 
v_s_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc_ref(v_s_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v___y_1742_ = v___f_1782_;
v___y_1743_ = v___y_1781_;
v___y_1744_ = v_s_1784_;
goto v___jp_1741_;
}
else
{
lean_object* v___x_1785_; 
lean_dec(v___x_1783_);
v___x_1785_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_1742_ = v___f_1782_;
v___y_1743_ = v___y_1781_;
v___y_1744_ = v___x_1785_;
goto v___jp_1741_;
}
}
}
}
v___jp_1730_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_val_1733_);
v___x_1735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1718_, v___y_1732_, v___x_1734_, v___y_1731_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___x_1790_, lean_object* v___f_1791_, lean_object* v_a_1792_, lean_object* v___x_1793_, lean_object* v_handler_1794_, lean_object* v_a_1795_, lean_object* v_value_1796_, lean_object* v_a_1797_, lean_object* v___x_1798_, lean_object* v___x_1799_, lean_object* v_x_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___x_1790_, v___f_1791_, v_a_1792_, v___x_1793_, v_handler_1794_, v_a_1795_, v_value_1796_, v_a_1797_, v___x_1798_, v___x_1799_, v_x_1800_);
lean_dec_ref(v___x_1799_);
lean_dec_ref(v___x_1798_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(lean_object* v_bytes_1803_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lasm_JS_Wire_decode(v_bytes_1803_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1805_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1805_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
else
{
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg___boxed(lean_object* v_bytes_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_bytes_1814_);
lean_dec_ref(v_bytes_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(size_t v_sz_1817_, size_t v_i_1818_, lean_object* v_bs_1819_){
_start:
{
uint8_t v___x_1820_; 
v___x_1820_ = lean_usize_dec_lt(v_i_1818_, v_sz_1817_);
if (v___x_1820_ == 0)
{
return v_bs_1819_;
}
else
{
lean_object* v_v_1821_; lean_object* v___x_1822_; lean_object* v_bs_x27_1823_; lean_object* v___x_1824_; size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
v_v_1821_ = lean_array_uget(v_bs_1819_, v_i_1818_);
v___x_1822_ = lean_unsigned_to_nat(0u);
v_bs_x27_1823_ = lean_array_uset(v_bs_1819_, v_i_1818_, v___x_1822_);
v___x_1824_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1824_, 0, v_v_1821_);
v___x_1825_ = ((size_t)1ULL);
v___x_1826_ = lean_usize_add(v_i_1818_, v___x_1825_);
v___x_1827_ = lean_array_uset(v_bs_x27_1823_, v_i_1818_, v___x_1824_);
v_i_1818_ = v___x_1826_;
v_bs_1819_ = v___x_1827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12___boxed(lean_object* v_sz_1829_, lean_object* v_i_1830_, lean_object* v_bs_1831_){
_start:
{
size_t v_sz_boxed_1832_; size_t v_i_boxed_1833_; lean_object* v_res_1834_; 
v_sz_boxed_1832_ = lean_unbox_usize(v_sz_1829_);
lean_dec(v_sz_1829_);
v_i_boxed_1833_ = lean_unbox_usize(v_i_1830_);
lean_dec(v_i_1830_);
v_res_1834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(v_sz_boxed_1832_, v_i_boxed_1833_, v_bs_1831_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(lean_object* v_o_1835_, lean_object* v_keys_1836_){
_start:
{
uint32_t v___x_1838_; uint32_t v___x_1839_; uint64_t v___x_1840_; size_t v_sz_1841_; size_t v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1838_ = 203;
v___x_1839_ = lasm_js_value_handle(v_o_1835_);
v___x_1840_ = 0ULL;
v_sz_1841_ = lean_array_size(v_keys_1836_);
v___x_1842_ = ((size_t)0ULL);
v___x_1843_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__12(v_sz_1841_, v___x_1842_, v_keys_1836_);
v___x_1844_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
v___x_1845_ = l_Lasm_JS_Wire_encode(v___x_1844_);
lean_dec_ref_known(v___x_1844_, 1);
v___x_1846_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1847_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1847_, 0, v_o_1835_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = lasm_js_call(v___x_1838_, v___x_1839_, v___x_1840_, v___x_1845_, v___x_1847_);
lean_dec_ref_known(v___x_1847_, 2);
lean_dec_ref(v___x_1845_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v___x_1850_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v___x_1850_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_a_1849_);
lean_dec(v_a_1849_);
return v___x_1850_;
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
v_a_1851_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1848_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1848_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6___boxed(lean_object* v_o_1859_, lean_object* v_keys_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_o_1859_, v_keys_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_1881_, lean_object* v_a_1882_, lean_object* v_handler_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_args_1886_){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v___x_1890_ = lean_unsigned_to_nat(0u);
v___x_1891_ = lean_array_get_size(v_args_1886_);
v___x_1892_ = lean_nat_dec_lt(v___x_1890_, v___x_1891_);
if (v___x_1892_ == 0)
{
lean_dec(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_handler_1883_);
lean_dec(v_a_1882_);
lean_dec_ref(v___f_1881_);
goto v___jp_1888_;
}
else
{
lean_object* v___x_1893_; 
v___x_1893_ = lean_array_fget_borrowed(v_args_1886_, v___x_1890_);
if (lean_obj_tag(v___x_1893_) == 9)
{
lean_object* v_value_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___f_1898_; lean_object* v___x_1899_; uint8_t v___x_1900_; lean_object* v_val_1902_; lean_object* v___x_1905_; 
v_value_1894_ = lean_ctor_get(v___x_1893_, 0);
v___x_1895_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4));
v___x_1896_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5));
v___x_1897_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__6));
lean_inc_n(v_value_1894_, 2);
v___f_1898_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 12, 10);
lean_closure_set(v___f_1898_, 0, v___x_1890_);
lean_closure_set(v___f_1898_, 1, v___f_1881_);
lean_closure_set(v___f_1898_, 2, v_a_1882_);
lean_closure_set(v___f_1898_, 3, v___x_1897_);
lean_closure_set(v___f_1898_, 4, v_handler_1883_);
lean_closure_set(v___f_1898_, 5, v_a_1884_);
lean_closure_set(v___f_1898_, 6, v_value_1894_);
lean_closure_set(v___f_1898_, 7, v_a_1885_);
lean_closure_set(v___f_1898_, 8, v___x_1896_);
lean_closure_set(v___f_1898_, 9, v___x_1895_);
v___x_1899_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__7));
v___x_1900_ = 0;
v___x_1905_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_value_1894_, v___x_1899_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 1);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
v_val_1902_ = v___x_1911_;
goto v___jp_1901_;
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1914_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1905_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1905_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 0);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
v_val_1902_ = v___x_1919_;
goto v___jp_1901_;
}
}
}
v___jp_1901_:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_val_1902_);
v___x_1904_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1890_, v___x_1900_, v___x_1903_, v___f_1898_);
return v___x_1904_;
}
}
else
{
lean_dec(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_handler_1883_);
lean_dec(v_a_1882_);
lean_dec_ref(v___f_1881_);
goto v___jp_1888_;
}
}
v___jp_1888_:
{
lean_object* v___x_1889_; 
v___x_1889_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__3));
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_1922_, lean_object* v_a_1923_, lean_object* v_handler_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_args_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_1922_, v_a_1923_, v_handler_1924_, v_a_1925_, v_a_1926_, v_args_1927_);
lean_dec_ref(v_args_1927_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_o_1931_, lean_object* v_key_1932_){
_start:
{
uint32_t v___x_1934_; uint32_t v___x_1935_; uint64_t v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1934_ = 203;
v___x_1935_ = lasm_js_value_handle(v_o_1931_);
v___x_1936_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
lean_inc_ref(v_key_1932_);
v___x_1937_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1937_, 0, v_key_1932_);
v___x_1938_ = l_Lasm_JS_Wire_encode(v___x_1937_);
lean_dec_ref_known(v___x_1937_, 1);
v___x_1939_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1940_, 0, v_o_1931_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___x_1941_ = lasm_js_call(v___x_1934_, v___x_1935_, v___x_1936_, v___x_1938_, v___x_1940_);
lean_dec_ref_known(v___x_1940_, 2);
lean_dec_ref(v___x_1938_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0));
v___x_1944_ = l_String_quote(v_key_1932_);
v___x_1945_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
v___x_1946_ = lean_unsigned_to_nat(120u);
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = l_Std_Format_pretty(v___x_1945_, v___x_1946_, v___x_1947_, v___x_1947_);
v___x_1949_ = lean_string_append(v___x_1943_, v___x_1948_);
lean_dec_ref(v___x_1948_);
v___x_1950_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1949_, v_a_1942_);
lean_dec(v_a_1942_);
lean_dec_ref(v___x_1949_);
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec_ref(v_key_1932_);
v_a_1951_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1941_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1941_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_o_1959_, lean_object* v_key_1960_, lean_object* v_a_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_o_1959_, v_key_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_1967_){
_start:
{
lean_object* v___f_1969_; lean_object* v___x_1970_; 
v___f_1969_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_1970_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc_n(v_a_1971_, 2);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_1973_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1971_, v___x_1972_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
v___x_1975_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
lean_inc(v_a_1971_);
v___x_1976_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1971_, v___x_1975_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__3));
v___x_1979_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_1971_, v___x_1978_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v___f_1981_; lean_object* v___x_1982_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___x_1979_, 1);
v___f_1981_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1981_, 0, v___f_1969_);
lean_closure_set(v___f_1981_, 1, v_a_1974_);
lean_closure_set(v___f_1981_, 2, v_handler_1967_);
lean_closure_set(v___f_1981_, 3, v_a_1977_);
lean_closure_set(v___f_1981_, 4, v_a_1980_);
v___x_1982_ = l_Lasm_JS_Function_ofFn(v___f_1981_);
return v___x_1982_;
}
else
{
lean_dec(v_a_1977_);
lean_dec(v_a_1974_);
lean_dec_ref(v_handler_1967_);
return v___x_1979_;
}
}
else
{
lean_dec(v_a_1974_);
lean_dec(v_a_1971_);
lean_dec_ref(v_handler_1967_);
return v___x_1976_;
}
}
else
{
lean_dec(v_a_1971_);
lean_dec_ref(v_handler_1967_);
return v___x_1973_;
}
}
else
{
lean_dec_ref(v_handler_1967_);
return v___x_1970_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lasm_Fetch_jsFetchHandler(v_handler_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg(lean_object* v_d_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v_d_1986_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg___boxed(lean_object* v_d_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___redArg(v_d_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16(lean_object* v_context_1992_, lean_object* v_d_1993_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v_d_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16___boxed(lean_object* v_context_1996_, lean_object* v_d_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13_spec__16(v_context_1996_, v_d_1997_);
lean_dec_ref(v_context_1996_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13(lean_object* v_context_2000_, lean_object* v_bytes_2001_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___redArg(v_bytes_2001_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13___boxed(lean_object* v_context_2004_, lean_object* v_bytes_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6_spec__13(v_context_2004_, v_bytes_2005_);
lean_dec_ref(v_bytes_2005_);
lean_dec_ref(v_context_2004_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_2012_){
_start:
{
if (lean_obj_tag(v_x_2012_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2022_; 
v_a_2014_ = lean_ctor_get(v_x_2012_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_x_2012_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2016_ = v_x_2012_;
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v_x_2012_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
return v___x_2020_;
}
}
}
else
{
lean_object* v___x_2023_; 
lean_dec_ref_known(v_x_2012_, 1);
v___x_2023_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_2023_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_2024_, lean_object* v___y_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lasm_Fetch_serveNode___lam__0(v_x_2024_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_2027_, lean_object* v_x_2028_){
_start:
{
if (lean_obj_tag(v_x_2028_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v___f_2027_);
v_a_2030_ = lean_ctor_get(v_x_2028_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_x_2028_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2032_ = v_x_2028_;
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v_x_2028_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2036_; 
v___x_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
return v___x_2036_;
}
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2059_; 
v_a_2039_ = lean_ctor_get(v_x_2028_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_2028_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2041_ = v_x_2028_;
v_isShared_2042_ = v_isSharedCheck_2059_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v_x_2028_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2059_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v_flush_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; lean_object* v_val_2047_; lean_object* v___x_2050_; 
v_flush_2043_ = lean_ctor_get(v_a_2039_, 0);
lean_inc_ref(v_flush_2043_);
lean_dec(v_a_2039_);
v___x_2044_ = lean_unsigned_to_nat(0u);
v___x_2045_ = 0;
v___x_2050_ = lean_apply_1(v_flush_2043_, lean_box(0));
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v_a_2051_);
v___x_2053_ = v___x_2041_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
v_val_2047_ = v___x_2053_;
goto v___jp_2046_;
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; 
v_a_2055_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2050_, 1);
if (v_isShared_2042_ == 0)
{
lean_ctor_set_tag(v___x_2041_, 0);
lean_ctor_set(v___x_2041_, 0, v_a_2055_);
v___x_2057_ = v___x_2041_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
v_val_2047_ = v___x_2057_;
goto v___jp_2046_;
}
}
v___jp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_val_2047_);
v___x_2049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2044_, v___x_2045_, v___x_2048_, v___f_2027_);
return v___x_2049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_2060_, lean_object* v_x_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lasm_Fetch_serveNode___lam__1(v___f_2060_, v_x_2061_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_2064_, lean_object* v_x_2065_){
_start:
{
if (lean_obj_tag(v_x_2065_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2075_; 
lean_dec_ref(v___f_2064_);
v_a_2067_ = lean_ctor_get(v_x_2065_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_x_2065_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2069_ = v_x_2065_;
v_isShared_2070_ = v_isSharedCheck_2075_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v_x_2065_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2075_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2073_; 
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
}
}
else
{
lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2087_; 
v_isSharedCheck_2087_ = !lean_is_exclusive(v_x_2065_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v_x_2065_, 0);
lean_dec(v_unused_2088_);
v___x_2077_ = v_x_2065_;
v_isShared_2078_ = v_isSharedCheck_2087_;
goto v_resetjp_2076_;
}
else
{
lean_dec(v_x_2065_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2087_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___x_2079_ = lean_unsigned_to_nat(0u);
v___x_2080_ = 0;
v___x_2081_ = lean_get_stdout();
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2081_);
v___x_2083_ = v___x_2077_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
v___x_2085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2079_, v___x_2080_, v___x_2084_, v___f_2064_);
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_2089_, lean_object* v_x_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lasm_Fetch_serveNode___lam__2(v___f_2089_, v_x_2090_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v_x_2093_){
_start:
{
if (lean_obj_tag(v_x_2093_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2103_; 
v_a_2095_ = lean_ctor_get(v_x_2093_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_x_2093_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2097_ = v_x_2093_;
v_isShared_2098_ = v_isSharedCheck_2103_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v_x_2093_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2103_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
lean_object* v___x_2101_; 
v___x_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
return v___x_2101_;
}
}
}
else
{
lean_object* v___x_2104_; 
lean_dec_ref_known(v_x_2093_, 1);
v___x_2104_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_2104_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v_x_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lasm_Fetch_serveNode___lam__3(v_x_2105_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v_snd_2109_, lean_object* v___y_2110_, uint16_t v_status_2111_, lean_object* v_body_2112_, lean_object* v_x_2113_){
_start:
{
if (lean_obj_tag(v_x_2113_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2123_; 
lean_dec_ref(v_body_2112_);
lean_dec(v_snd_2109_);
v_a_2115_ = lean_ctor_get(v_x_2113_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2113_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2117_ = v_x_2113_;
v_isShared_2118_ = v_isSharedCheck_2123_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v_x_2113_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2123_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2121_; 
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
return v___x_2121_;
}
}
}
else
{
lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2141_; 
v_isSharedCheck_2141_ = !lean_is_exclusive(v_x_2113_);
if (v_isSharedCheck_2141_ == 0)
{
lean_object* v_unused_2142_; 
v_unused_2142_ = lean_ctor_get(v_x_2113_, 0);
lean_dec(v_unused_2142_);
v___x_2125_ = v_x_2113_;
v_isShared_2126_ = v_isSharedCheck_2141_;
goto v_resetjp_2124_;
}
else
{
lean_dec(v_x_2113_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2141_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___y_2129_; uint8_t v___x_2138_; 
v___x_2127_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__5___closed__0));
v___x_2138_ = l_Lasm_Fetch_bodyless(v___y_2110_, v_status_2111_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; 
v___x_2139_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_body_2112_);
v___y_2129_ = v___x_2139_;
goto v___jp_2128_;
}
else
{
lean_object* v___x_2140_; 
lean_dec_ref(v_body_2112_);
v___x_2140_ = lean_box(0);
v___y_2129_ = v___x_2140_;
goto v___jp_2128_;
}
v___jp_2128_:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2135_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
v___x_2131_ = lean_mk_empty_array_with_capacity(v___x_2130_);
v___x_2132_ = lean_array_push(v___x_2131_, v___y_2129_);
v___x_2133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2133_, 0, v_snd_2109_);
lean_ctor_set(v___x_2133_, 1, v___x_2127_);
lean_ctor_set(v___x_2133_, 2, v___x_2132_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2133_);
v___x_2135_ = v___x_2125_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2133_);
v___x_2135_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v___x_2136_; 
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
return v___x_2136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v_snd_2143_, lean_object* v___y_2144_, lean_object* v_status_2145_, lean_object* v_body_2146_, lean_object* v_x_2147_, lean_object* v___y_2148_){
_start:
{
uint16_t v_status_boxed_2149_; lean_object* v_res_2150_; 
v_status_boxed_2149_ = lean_unbox(v_status_2145_);
v_res_2150_ = l_Lasm_Fetch_serveNode___lam__5(v_snd_2143_, v___y_2144_, v_status_boxed_2149_, v_body_2146_, v_x_2147_);
lean_dec_ref(v___y_2144_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_2151_, size_t v_i_2152_, size_t v_stop_2153_, lean_object* v_b_2154_){
_start:
{
uint8_t v___x_2155_; 
v___x_2155_ = lean_usize_dec_eq(v_i_2152_, v_stop_2153_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; lean_object* v_fst_2157_; lean_object* v_snd_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; size_t v___x_2163_; size_t v___x_2164_; 
v___x_2156_ = lean_array_uget_borrowed(v_as_2151_, v_i_2152_);
v_fst_2157_ = lean_ctor_get(v___x_2156_, 0);
v_snd_2158_ = lean_ctor_get(v___x_2156_, 1);
lean_inc(v_fst_2157_);
v___x_2159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_fst_2157_);
v___x_2160_ = lean_array_push(v_b_2154_, v___x_2159_);
lean_inc(v_snd_2158_);
v___x_2161_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2161_, 0, v_snd_2158_);
v___x_2162_ = lean_array_push(v___x_2160_, v___x_2161_);
v___x_2163_ = ((size_t)1ULL);
v___x_2164_ = lean_usize_add(v_i_2152_, v___x_2163_);
v_i_2152_ = v___x_2164_;
v_b_2154_ = v___x_2162_;
goto _start;
}
else
{
return v_b_2154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_2166_, lean_object* v_i_2167_, lean_object* v_stop_2168_, lean_object* v_b_2169_){
_start:
{
size_t v_i_boxed_2170_; size_t v_stop_boxed_2171_; lean_object* v_res_2172_; 
v_i_boxed_2170_ = lean_unbox_usize(v_i_2167_);
lean_dec(v_i_2167_);
v_stop_boxed_2171_ = lean_unbox_usize(v_stop_2168_);
lean_dec(v_stop_2168_);
v_res_2172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_2166_, v_i_boxed_2170_, v_stop_boxed_2171_, v_b_2169_);
lean_dec_ref(v_as_2166_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_2173_, lean_object* v_name_2174_, lean_object* v_args_2175_){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint64_t v___x_2180_; lean_object* v___x_2181_; 
v___x_2177_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2178_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_o_2173_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
lean_inc_ref(v_name_2174_);
v___x_2179_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2179_, 0, v_name_2174_);
v___x_2180_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__1);
v___x_2181_ = l_Lasm_JS_Value_invokeRaw(v___x_2178_, v___x_2179_, v_args_2175_, v___x_2180_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2183_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_2184_ = lean_string_append(v___x_2183_, v_name_2174_);
lean_dec_ref(v_name_2174_);
v___x_2185_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2184_, v_a_2182_);
lean_dec(v_a_2182_);
lean_dec_ref(v___x_2184_);
return v___x_2185_;
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
lean_dec_ref(v_name_2174_);
v_a_2186_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___x_2181_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2181_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_2194_, lean_object* v_name_2195_, lean_object* v_args_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_2194_, v_name_2195_, v_args_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v___x_2200_, lean_object* v_snd_2201_, lean_object* v___y_2202_, lean_object* v_x_2203_){
_start:
{
lean_object* v___y_2206_; uint8_t v___y_2207_; lean_object* v_val_2208_; lean_object* v___y_2212_; lean_object* v___y_2213_; lean_object* v___y_2214_; lean_object* v___y_2215_; 
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2247_; 
lean_dec_ref(v___y_2202_);
lean_dec(v_snd_2201_);
lean_dec(v___x_2200_);
v_a_2239_ = lean_ctor_get(v_x_2203_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_x_2203_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2241_ = v_x_2203_;
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v_x_2203_);
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
lean_object* v_a_2248_; uint16_t v_status_2249_; lean_object* v_headers_2250_; lean_object* v_body_2251_; lean_object* v___y_2253_; lean_object* v___x_2265_; lean_object* v___x_2266_; uint8_t v___x_2267_; 
v_a_2248_ = lean_ctor_get(v_x_2203_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v_x_2203_, 1);
v_status_2249_ = lean_ctor_get_uint16(v_a_2248_, sizeof(void*)*2);
v_headers_2250_ = lean_ctor_get(v_a_2248_, 0);
lean_inc_ref(v_headers_2250_);
v_body_2251_ = lean_ctor_get(v_a_2248_, 1);
lean_inc_ref(v_body_2251_);
lean_dec(v_a_2248_);
v___x_2265_ = lean_mk_empty_array_with_capacity(v___x_2200_);
v___x_2266_ = lean_array_get_size(v_headers_2250_);
v___x_2267_ = lean_nat_dec_lt(v___x_2200_, v___x_2266_);
if (v___x_2267_ == 0)
{
lean_dec_ref(v_headers_2250_);
v___y_2253_ = v___x_2265_;
goto v___jp_2252_;
}
else
{
uint8_t v___x_2268_; 
v___x_2268_ = lean_nat_dec_le(v___x_2266_, v___x_2266_);
if (v___x_2268_ == 0)
{
if (v___x_2267_ == 0)
{
lean_dec_ref(v_headers_2250_);
v___y_2253_ = v___x_2265_;
goto v___jp_2252_;
}
else
{
size_t v___x_2269_; size_t v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = ((size_t)0ULL);
v___x_2270_ = lean_usize_of_nat(v___x_2266_);
v___x_2271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_2250_, v___x_2269_, v___x_2270_, v___x_2265_);
lean_dec_ref(v_headers_2250_);
v___y_2253_ = v___x_2271_;
goto v___jp_2252_;
}
}
else
{
size_t v___x_2272_; size_t v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = ((size_t)0ULL);
v___x_2273_ = lean_usize_of_nat(v___x_2266_);
v___x_2274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_2250_, v___x_2272_, v___x_2273_, v___x_2265_);
lean_dec_ref(v_headers_2250_);
v___y_2253_ = v___x_2274_;
goto v___jp_2252_;
}
}
v___jp_2252_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___f_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; 
v___x_2254_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__4___closed__0));
v___x_2255_ = lean_box(v_status_2249_);
lean_inc(v_snd_2201_);
v___f_2256_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 6, 4);
lean_closure_set(v___f_2256_, 0, v_snd_2201_);
lean_closure_set(v___f_2256_, 1, v___y_2202_);
lean_closure_set(v___f_2256_, 2, v___x_2255_);
lean_closure_set(v___f_2256_, 3, v_body_2251_);
v___x_2257_ = lean_uint16_to_nat(v_status_2249_);
v___x_2258_ = lean_nat_to_int(v___x_2257_);
v___x_2259_ = lean_nat_abs(v___x_2258_);
v___x_2260_ = lean_cstr_to_nat("9007199254740991");
v___x_2261_ = lean_nat_dec_le(v___x_2259_, v___x_2260_);
lean_dec(v___x_2259_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; 
v___x_2262_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2258_);
v___y_2212_ = v___f_2256_;
v___y_2213_ = v___x_2254_;
v___y_2214_ = v___y_2253_;
v___y_2215_ = v___x_2262_;
goto v___jp_2211_;
}
else
{
double v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = l_Float_ofInt(v___x_2258_);
lean_dec(v___x_2258_);
v___x_2264_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2264_, 0, v___x_2263_);
v___y_2212_ = v___f_2256_;
v___y_2213_ = v___x_2254_;
v___y_2214_ = v___y_2253_;
v___y_2215_ = v___x_2264_;
goto v___jp_2211_;
}
}
}
v___jp_2205_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_val_2208_);
v___x_2210_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2200_, v___y_2207_, v___x_2209_, v___y_2206_);
return v___x_2210_;
}
v___jp_2211_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; lean_object* v___x_2222_; 
v___x_2216_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___y_2214_);
v___x_2217_ = lean_unsigned_to_nat(2u);
v___x_2218_ = lean_mk_empty_array_with_capacity(v___x_2217_);
v___x_2219_ = lean_array_push(v___x_2218_, v___y_2215_);
v___x_2220_ = lean_array_push(v___x_2219_, v___x_2216_);
v___x_2221_ = 0;
lean_inc_ref(v___y_2213_);
v___x_2222_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_2201_, v___y_2213_, v___x_2220_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2222_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2222_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
lean_ctor_set_tag(v___x_2225_, 1);
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
v___y_2206_ = v___y_2212_;
v___y_2207_ = v___x_2221_;
v_val_2208_ = v___x_2228_;
goto v___jp_2205_;
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2222_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2222_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
lean_ctor_set_tag(v___x_2233_, 0);
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
v___y_2206_ = v___y_2212_;
v___y_2207_ = v___x_2221_;
v_val_2208_ = v___x_2236_;
goto v___jp_2205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v___x_2275_, lean_object* v_snd_2276_, lean_object* v___y_2277_, lean_object* v_x_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lasm_Fetch_serveNode___lam__4(v___x_2275_, v_snd_2276_, v___y_2277_, v_x_2278_);
return v_res_2280_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__6___closed__0(void){
_start:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_2282_ = lean_string_utf8_byte_size(v___x_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v___y_2284_, lean_object* v___x_2285_, lean_object* v_handler_2286_, lean_object* v___x_2287_, lean_object* v___f_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v_body_2291_){
_start:
{
lean_object* v___y_2294_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; uint8_t v___x_2302_; 
v___x_2299_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_2300_ = lean_string_utf8_byte_size(v___y_2289_);
v___x_2301_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__6___closed__0, &l_Lasm_Fetch_serveNode___lam__6___closed__0_once, _init_l_Lasm_Fetch_serveNode___lam__6___closed__0);
v___x_2302_ = lean_nat_dec_le(v___x_2301_, v___x_2300_);
if (v___x_2302_ == 0)
{
v___y_2294_ = v___y_2289_;
goto v___jp_2293_;
}
else
{
uint8_t v___x_2303_; 
v___x_2303_ = lean_string_memcmp(v___y_2289_, v___x_2299_, v___x_2287_, v___x_2287_, v___x_2301_);
if (v___x_2303_ == 0)
{
v___y_2294_ = v___y_2289_;
goto v___jp_2293_;
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2304_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__1));
v___x_2305_ = lean_string_append(v___x_2304_, v___y_2290_);
v___x_2306_ = lean_string_append(v___x_2305_, v___y_2289_);
lean_dec_ref(v___y_2289_);
v___y_2294_ = v___x_2306_;
goto v___jp_2293_;
}
}
v___jp_2293_:
{
lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2295_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2295_, 0, v___y_2284_);
lean_ctor_set(v___x_2295_, 1, v___y_2294_);
lean_ctor_set(v___x_2295_, 2, v___x_2285_);
lean_ctor_set(v___x_2295_, 3, v_body_2291_);
v___x_2296_ = 0;
v___x_2297_ = l_Lasm_Fetch_respond(v_handler_2286_, v___x_2295_);
v___x_2298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2287_, v___x_2296_, v___x_2297_, v___f_2288_);
return v___x_2298_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v___y_2307_, lean_object* v___x_2308_, lean_object* v_handler_2309_, lean_object* v___x_2310_, lean_object* v___f_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v_body_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Lasm_Fetch_serveNode___lam__6(v___y_2307_, v___x_2308_, v_handler_2309_, v___x_2310_, v___f_2311_, v___y_2312_, v___y_2313_, v_body_2314_);
lean_dec_ref(v___y_2313_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v___f_2317_, lean_object* v_x_2318_){
_start:
{
if (lean_obj_tag(v_x_2318_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2328_; 
lean_dec_ref(v___f_2317_);
v_a_2320_ = lean_ctor_get(v_x_2318_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v_x_2318_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2322_ = v_x_2318_;
v_isShared_2323_ = v_isSharedCheck_2328_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v_x_2318_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2328_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
return v___x_2326_;
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2330_; 
v_a_2329_ = lean_ctor_get(v_x_2318_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v_x_2318_, 1);
v___x_2330_ = lean_apply_2(v___f_2317_, v_a_2329_, lean_box(0));
return v___x_2330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v___f_2331_, lean_object* v_x_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lasm_Fetch_serveNode___lam__7(v___f_2331_, v_x_2332_);
return v_res_2334_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_2335_; uint8_t v___x_2336_; uint64_t v___x_2337_; 
v___x_2335_ = 8ULL;
v___x_2336_ = 0;
v___x_2337_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__4(v___x_2336_, v___x_2335_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_2338_, lean_object* v_name_2339_, lean_object* v_args_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint64_t v___x_2345_; lean_object* v___x_2346_; 
v___x_2342_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2343_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2343_, 0, v_o_2338_);
lean_ctor_set(v___x_2343_, 1, v___x_2342_);
lean_inc_ref(v_name_2339_);
v___x_2344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2344_, 0, v_name_2339_);
v___x_2345_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_2346_ = l_Lasm_JS_Value_invokeRaw(v___x_2343_, v___x_2344_, v_args_2340_, v___x_2345_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2346_, 1);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4___closed__0));
v___x_2349_ = lean_string_append(v___x_2348_, v_name_2339_);
lean_dec_ref(v_name_2339_);
v___x_2350_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__5(v___x_2349_, v_a_2347_);
lean_dec(v_a_2347_);
lean_dec_ref(v___x_2349_);
return v___x_2350_;
}
else
{
lean_dec_ref(v_name_2339_);
return v___x_2346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_2351_, lean_object* v_name_2352_, lean_object* v_args_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_2351_, v_name_2352_, v_args_2353_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_2357_, uint8_t v___x_2358_, lean_object* v___f_2359_, lean_object* v___x_2360_, lean_object* v_a_2361_, lean_object* v_x_2362_){
_start:
{
lean_object* v_val_2365_; 
if (lean_obj_tag(v_x_2362_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2376_; 
lean_dec(v_a_2361_);
lean_dec_ref(v___f_2359_);
lean_dec(v___x_2357_);
v_a_2368_ = lean_ctor_get(v_x_2362_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_x_2362_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2370_ = v_x_2362_;
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v_x_2362_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2376_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
return v___x_2374_;
}
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2395_; 
v_a_2377_ = lean_ctor_get(v_x_2362_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_x_2362_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2379_ = v_x_2362_;
v_isShared_2380_ = v_isSharedCheck_2395_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v_x_2362_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2395_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2381_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__9___closed__0));
v___x_2382_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2383_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2383_, 0, v_a_2377_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
v___x_2384_ = lean_mk_empty_array_with_capacity(v___x_2360_);
v___x_2385_ = lean_array_push(v___x_2384_, v___x_2383_);
v___x_2386_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_2361_, v___x_2381_, v___x_2385_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2389_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2386_, 1);
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 0, v_a_2387_);
v___x_2389_ = v___x_2379_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
v_val_2365_ = v___x_2389_;
goto v___jp_2364_;
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; 
v_a_2391_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2386_, 1);
if (v_isShared_2380_ == 0)
{
lean_ctor_set_tag(v___x_2379_, 0);
lean_ctor_set(v___x_2379_, 0, v_a_2391_);
v___x_2393_ = v___x_2379_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2391_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
v_val_2365_ = v___x_2393_;
goto v___jp_2364_;
}
}
}
}
v___jp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_val_2365_);
v___x_2367_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2357_, v___x_2358_, v___x_2366_, v___f_2359_);
return v___x_2367_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_2396_, lean_object* v___x_2397_, lean_object* v___f_2398_, lean_object* v___x_2399_, lean_object* v_a_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_){
_start:
{
uint8_t v___x_12310__boxed_2403_; lean_object* v_res_2404_; 
v___x_12310__boxed_2403_ = lean_unbox(v___x_2397_);
v_res_2404_ = l_Lasm_Fetch_serveNode___lam__9(v___x_2396_, v___x_12310__boxed_2403_, v___f_2398_, v___x_2399_, v_a_2400_, v_x_2401_);
lean_dec(v___x_2399_);
return v_res_2404_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_2407_, size_t v_i_2408_, size_t v_stop_2409_){
_start:
{
uint8_t v___x_2410_; 
v___x_2410_ = lean_usize_dec_eq(v_i_2408_, v_stop_2409_);
if (v___x_2410_ == 0)
{
lean_object* v___x_2411_; lean_object* v_fst_2412_; uint8_t v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; 
v___x_2411_ = lean_array_uget_borrowed(v_as_2407_, v_i_2408_);
v_fst_2412_ = lean_ctor_get(v___x_2411_, 0);
v___x_2413_ = 1;
lean_inc(v_fst_2412_);
v___x_2414_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_2412_);
v___x_2415_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_2416_ = lean_string_dec_eq(v___x_2414_, v___x_2415_);
if (v___x_2416_ == 0)
{
lean_object* v___x_2417_; uint8_t v___x_2418_; 
v___x_2417_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_2418_ = lean_string_dec_eq(v___x_2414_, v___x_2417_);
lean_dec_ref(v___x_2414_);
if (v___x_2418_ == 0)
{
size_t v___x_2419_; size_t v___x_2420_; 
v___x_2419_ = ((size_t)1ULL);
v___x_2420_ = lean_usize_add(v_i_2408_, v___x_2419_);
v_i_2408_ = v___x_2420_;
goto _start;
}
else
{
return v___x_2413_;
}
}
else
{
lean_dec_ref(v___x_2414_);
return v___x_2413_;
}
}
else
{
uint8_t v___x_2422_; 
v___x_2422_ = 0;
return v___x_2422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_2423_, lean_object* v_i_2424_, lean_object* v_stop_2425_){
_start:
{
size_t v_i_boxed_2426_; size_t v_stop_boxed_2427_; uint8_t v_res_2428_; lean_object* v_r_2429_; 
v_i_boxed_2426_ = lean_unbox_usize(v_i_2424_);
lean_dec(v_i_2424_);
v_stop_boxed_2427_ = lean_unbox_usize(v_stop_2425_);
lean_dec(v_stop_2425_);
v_res_2428_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_2423_, v_i_boxed_2426_, v_stop_boxed_2427_);
lean_dec_ref(v_as_2423_);
v_r_2429_ = lean_box(v_res_2428_);
return v_r_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_2430_, lean_object* v_range_2431_, lean_object* v_b_2432_, lean_object* v_i_2433_){
_start:
{
lean_object* v_stop_2434_; lean_object* v_step_2435_; uint8_t v___x_2436_; 
v_stop_2434_ = lean_ctor_get(v_range_2431_, 1);
v_step_2435_ = lean_ctor_get(v_range_2431_, 2);
v___x_2436_ = lean_nat_dec_lt(v_i_2433_, v_stop_2434_);
if (v___x_2436_ == 0)
{
lean_dec(v_i_2433_);
return v_b_2432_;
}
else
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2437_ = lean_unsigned_to_nat(2u);
v___x_2438_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2439_ = lean_unsigned_to_nat(1u);
v___x_2440_ = lean_nat_mul(v___x_2437_, v_i_2433_);
v___x_2441_ = lean_array_get_borrowed(v___x_2438_, v___y_2430_, v___x_2440_);
v___x_2442_ = lean_nat_add(v___x_2440_, v___x_2439_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_array_get_borrowed(v___x_2438_, v___y_2430_, v___x_2442_);
lean_dec(v___x_2442_);
lean_inc(v___x_2443_);
lean_inc(v___x_2441_);
v___x_2444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2441_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = lean_array_push(v_b_2432_, v___x_2444_);
v___x_2446_ = lean_nat_add(v_i_2433_, v_step_2435_);
lean_dec(v_i_2433_);
v_b_2432_ = v___x_2445_;
v_i_2433_ = v___x_2446_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_2448_, lean_object* v_range_2449_, lean_object* v_b_2450_, lean_object* v_i_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_2448_, v_range_2449_, v_b_2450_, v_i_2451_);
lean_dec_ref(v_range_2449_);
lean_dec_ref(v___y_2448_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_2453_, size_t v_i_2454_, size_t v_stop_2455_, lean_object* v_b_2456_){
_start:
{
lean_object* v___y_2458_; uint8_t v___x_2462_; 
v___x_2462_ = lean_usize_dec_eq(v_i_2454_, v_stop_2455_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_array_uget_borrowed(v_as_2453_, v_i_2454_);
if (lean_obj_tag(v___x_2463_) == 4)
{
lean_object* v_s_2464_; lean_object* v___x_2465_; 
v_s_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc_ref(v_s_2464_);
v___x_2465_ = lean_array_push(v_b_2456_, v_s_2464_);
v___y_2458_ = v___x_2465_;
goto v___jp_2457_;
}
else
{
v___y_2458_ = v_b_2456_;
goto v___jp_2457_;
}
}
else
{
return v_b_2456_;
}
v___jp_2457_:
{
size_t v___x_2459_; size_t v___x_2460_; 
v___x_2459_ = ((size_t)1ULL);
v___x_2460_ = lean_usize_add(v_i_2454_, v___x_2459_);
v_i_2454_ = v___x_2460_;
v_b_2456_ = v___y_2458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_2466_, lean_object* v_i_2467_, lean_object* v_stop_2468_, lean_object* v_b_2469_){
_start:
{
size_t v_i_boxed_2470_; size_t v_stop_boxed_2471_; lean_object* v_res_2472_; 
v_i_boxed_2470_ = lean_unbox_usize(v_i_2467_);
lean_dec(v_i_2467_);
v_stop_boxed_2471_ = lean_unbox_usize(v_stop_2468_);
lean_dec(v_stop_2468_);
v_res_2472_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2466_, v_i_boxed_2470_, v_stop_boxed_2471_, v_b_2469_);
lean_dec_ref(v_as_2466_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_2475_, lean_object* v_start_2476_, lean_object* v_stop_2477_){
_start:
{
lean_object* v___x_2478_; uint8_t v___x_2479_; 
v___x_2478_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_2479_ = lean_nat_dec_lt(v_start_2476_, v_stop_2477_);
if (v___x_2479_ == 0)
{
return v___x_2478_;
}
else
{
lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2480_ = lean_array_get_size(v_as_2475_);
v___x_2481_ = lean_nat_dec_le(v_stop_2477_, v___x_2480_);
if (v___x_2481_ == 0)
{
uint8_t v___x_2482_; 
v___x_2482_ = lean_nat_dec_lt(v_start_2476_, v___x_2480_);
if (v___x_2482_ == 0)
{
return v___x_2478_;
}
else
{
size_t v___x_2483_; size_t v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = lean_usize_of_nat(v_start_2476_);
v___x_2484_ = lean_usize_of_nat(v___x_2480_);
v___x_2485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2475_, v___x_2483_, v___x_2484_, v___x_2478_);
return v___x_2485_;
}
}
else
{
size_t v___x_2486_; size_t v___x_2487_; lean_object* v___x_2488_; 
v___x_2486_ = lean_usize_of_nat(v_start_2476_);
v___x_2487_ = lean_usize_of_nat(v_stop_2477_);
v___x_2488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_2475_, v___x_2486_, v___x_2487_, v___x_2478_);
return v___x_2488_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_2489_, lean_object* v_start_2490_, lean_object* v_stop_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_2489_, v_start_2490_, v_stop_2491_);
lean_dec(v_stop_2491_);
lean_dec(v_start_2490_);
lean_dec_ref(v_as_2489_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_2494_, size_t v_sz_2495_, size_t v_i_2496_, lean_object* v_b_2497_){
_start:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_usize_dec_lt(v_i_2496_, v_sz_2495_);
if (v___x_2498_ == 0)
{
lean_inc_ref(v_b_2497_);
return v_b_2497_;
}
else
{
lean_object* v_a_2499_; lean_object* v_fst_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v_a_2499_ = lean_array_uget_borrowed(v_as_2494_, v_i_2496_);
v_fst_2500_ = lean_ctor_get(v_a_2499_, 0);
v___x_2501_ = lean_box(0);
lean_inc(v_fst_2500_);
v___x_2502_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_2500_);
v___x_2503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_2504_ = lean_string_dec_eq(v___x_2502_, v___x_2503_);
lean_dec_ref(v___x_2502_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; size_t v___x_2506_; size_t v___x_2507_; 
v___x_2505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_2506_ = ((size_t)1ULL);
v___x_2507_ = lean_usize_add(v_i_2496_, v___x_2506_);
v_i_2496_ = v___x_2507_;
v_b_2497_ = v___x_2505_;
goto _start;
}
else
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_inc(v_a_2499_);
v___x_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_a_2499_);
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v___x_2501_);
return v___x_2511_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_2512_, lean_object* v_sz_2513_, lean_object* v_i_2514_, lean_object* v_b_2515_){
_start:
{
size_t v_sz_boxed_2516_; size_t v_i_boxed_2517_; lean_object* v_res_2518_; 
v_sz_boxed_2516_ = lean_unbox_usize(v_sz_2513_);
lean_dec(v_sz_2513_);
v_i_boxed_2517_ = lean_unbox_usize(v_i_2514_);
lean_dec(v_i_2514_);
v_res_2518_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_2512_, v_sz_boxed_2516_, v_i_boxed_2517_, v_b_2515_);
lean_dec_ref(v_b_2515_);
lean_dec_ref(v_as_2512_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v_snd_2521_, lean_object* v_handler_2522_, lean_object* v_a_2523_, lean_object* v_fst_2524_, lean_object* v___y_2525_, lean_object* v___x_2526_, lean_object* v___x_2527_, lean_object* v___x_2528_, lean_object* v_x_2529_){
_start:
{
lean_object* v___y_2532_; lean_object* v___y_2533_; uint8_t v___y_2534_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; 
if (lean_obj_tag(v_x_2529_) == 0)
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2601_; 
lean_dec(v___y_2525_);
lean_dec(v_fst_2524_);
lean_dec(v_a_2523_);
lean_dec_ref(v_handler_2522_);
lean_dec(v_snd_2521_);
v_a_2593_ = lean_ctor_get(v_x_2529_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_x_2529_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2595_ = v_x_2529_;
v_isShared_2596_ = v_isSharedCheck_2601_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v_x_2529_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2601_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; 
v___x_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
return v___x_2599_;
}
}
}
else
{
lean_object* v_a_2602_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2613_; lean_object* v___x_2617_; 
v_a_2602_ = lean_ctor_get(v_x_2529_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v_x_2529_, 1);
v___x_2617_ = l_Lasm_JS_Data_field(v_a_2602_, v___x_2528_);
if (lean_obj_tag(v___x_2617_) == 4)
{
lean_object* v_s_2618_; 
v_s_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc_ref(v_s_2618_);
lean_dec_ref_known(v___x_2617_, 1);
v___y_2613_ = v_s_2618_;
goto v___jp_2612_;
}
else
{
lean_object* v___x_2619_; 
lean_dec(v___x_2617_);
v___x_2619_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__4___closed__2));
v___y_2613_ = v___x_2619_;
goto v___jp_2612_;
}
v___jp_2603_:
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Lasm_JS_Data_field(v_a_2602_, v___x_2526_);
lean_dec(v_a_2602_);
if (lean_obj_tag(v___x_2606_) == 7)
{
lean_object* v_items_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v_items_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc_ref(v_items_2607_);
lean_dec_ref_known(v___x_2606_, 1);
v___x_2608_ = lean_unsigned_to_nat(0u);
v___x_2609_ = lean_array_get_size(v_items_2607_);
v___x_2610_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_2607_, v___x_2608_, v___x_2609_);
lean_dec_ref(v_items_2607_);
v___y_2574_ = v___y_2604_;
v___y_2575_ = v___y_2605_;
v___y_2576_ = v___x_2610_;
goto v___jp_2573_;
}
else
{
lean_object* v___x_2611_; 
lean_dec(v___x_2606_);
v___x_2611_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___y_2574_ = v___y_2604_;
v___y_2575_ = v___y_2605_;
v___y_2576_ = v___x_2611_;
goto v___jp_2573_;
}
}
v___jp_2612_:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lasm_JS_Data_field(v_a_2602_, v___x_2527_);
if (lean_obj_tag(v___x_2614_) == 4)
{
lean_object* v_s_2615_; 
v_s_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc_ref(v_s_2615_);
lean_dec_ref_known(v___x_2614_, 1);
v___y_2604_ = v___y_2613_;
v___y_2605_ = v_s_2615_;
goto v___jp_2603_;
}
else
{
lean_object* v___x_2616_; 
lean_dec(v___x_2614_);
v___x_2616_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_2604_ = v___y_2613_;
v___y_2605_ = v___x_2616_;
goto v___jp_2603_;
}
}
}
v___jp_2531_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = lean_obj_once(&l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1, &l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1_once, _init_l_Lasm_Fetch_jsFetchHandler___lam__4___closed__1);
v___x_2536_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2533_, v___y_2534_, v___x_2535_, v___y_2532_);
return v___x_2536_;
}
v___jp_2537_:
{
lean_object* v___f_2547_; lean_object* v___f_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
lean_inc(v___y_2539_);
v___f_2547_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2547_, 0, v___y_2540_);
lean_closure_set(v___f_2547_, 1, v___y_2538_);
lean_closure_set(v___f_2547_, 2, v_handler_2522_);
lean_closure_set(v___f_2547_, 3, v___y_2539_);
lean_closure_set(v___f_2547_, 4, v___y_2543_);
lean_closure_set(v___f_2547_, 5, v___y_2542_);
lean_closure_set(v___f_2547_, 6, v___y_2546_);
v___f_2548_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2548_, 0, v___f_2547_);
v___x_2549_ = lean_array_get_size(v___y_2544_);
v___x_2550_ = lean_nat_dec_lt(v___y_2545_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2541_);
lean_dec(v___y_2539_);
lean_dec(v_fst_2524_);
lean_dec(v_a_2523_);
v___y_2532_ = v___f_2548_;
v___y_2533_ = v___y_2545_;
v___y_2534_ = v___x_2550_;
goto v___jp_2531_;
}
else
{
if (v___x_2550_ == 0)
{
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2541_);
lean_dec(v___y_2539_);
lean_dec(v_fst_2524_);
lean_dec(v_a_2523_);
v___y_2532_ = v___f_2548_;
v___y_2533_ = v___y_2545_;
v___y_2534_ = v___x_2550_;
goto v___jp_2531_;
}
else
{
size_t v___x_2551_; size_t v___x_2552_; uint8_t v___x_2553_; 
v___x_2551_ = ((size_t)0ULL);
v___x_2552_ = lean_usize_of_nat(v___x_2549_);
v___x_2553_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_2544_, v___x_2551_, v___x_2552_);
lean_dec_ref(v___y_2544_);
if (v___x_2553_ == 0)
{
lean_dec(v___y_2541_);
lean_dec(v___y_2539_);
lean_dec(v_fst_2524_);
lean_dec(v_a_2523_);
v___y_2532_ = v___f_2548_;
v___y_2533_ = v___y_2545_;
v___y_2534_ = v___x_2553_;
goto v___jp_2531_;
}
else
{
uint8_t v___x_2554_; lean_object* v___x_2555_; lean_object* v___f_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2554_ = 0;
v___x_2555_ = lean_box(v___x_2554_);
v___f_2556_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 7, 5);
lean_closure_set(v___f_2556_, 0, v___y_2539_);
lean_closure_set(v___f_2556_, 1, v___x_2555_);
lean_closure_set(v___f_2556_, 2, v___f_2548_);
lean_closure_set(v___f_2556_, 3, v___y_2541_);
lean_closure_set(v___f_2556_, 4, v_a_2523_);
v___x_2557_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__8___closed__0));
v___x_2558_ = lean_mk_empty_array_with_capacity(v___y_2545_);
v___x_2559_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__4(v_fst_2524_, v___x_2557_, v___x_2558_);
v___x_2560_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2545_, v___x_2554_, v___x_2559_, v___f_2556_);
return v___x_2560_;
}
}
}
}
v___jp_2561_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2570_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__8___closed__1));
v___x_2571_ = l_Nat_reprFast(v___y_2525_);
v___x_2572_ = lean_string_append(v___x_2570_, v___x_2571_);
lean_dec_ref(v___x_2571_);
v___y_2538_ = v___y_2562_;
v___y_2539_ = v___y_2564_;
v___y_2540_ = v___y_2563_;
v___y_2541_ = v___y_2565_;
v___y_2542_ = v___y_2566_;
v___y_2543_ = v___y_2567_;
v___y_2544_ = v___y_2568_;
v___y_2545_ = v___y_2569_;
v___y_2546_ = v___x_2572_;
goto v___jp_2537_;
}
v___jp_2573_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; size_t v_sz_2585_; size_t v___x_2586_; lean_object* v___x_2587_; lean_object* v_fst_2588_; lean_object* v___f_2589_; 
v___x_2577_ = lean_unsigned_to_nat(0u);
v___x_2578_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_2579_ = lean_array_get_size(v___y_2576_);
v___x_2580_ = lean_unsigned_to_nat(1u);
v___x_2581_ = lean_nat_shiftr(v___x_2579_, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2577_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
lean_ctor_set(v___x_2582_, 2, v___x_2580_);
v___x_2583_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_2576_, v___x_2582_, v___x_2578_, v___x_2577_);
lean_dec_ref_known(v___x_2582_, 3);
lean_dec_ref(v___y_2576_);
v___x_2584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_2585_ = lean_array_size(v___x_2583_);
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_2583_, v_sz_2585_, v___x_2586_, v___x_2584_);
v_fst_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_fst_2588_);
lean_dec_ref(v___x_2587_);
lean_inc_ref(v___y_2574_);
v___f_2589_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__4___boxed), 5, 3);
lean_closure_set(v___f_2589_, 0, v___x_2577_);
lean_closure_set(v___f_2589_, 1, v_snd_2521_);
lean_closure_set(v___f_2589_, 2, v___y_2574_);
if (lean_obj_tag(v_fst_2588_) == 0)
{
lean_inc_ref(v___x_2583_);
v___y_2562_ = v___x_2583_;
v___y_2563_ = v___y_2574_;
v___y_2564_ = v___x_2577_;
v___y_2565_ = v___x_2580_;
v___y_2566_ = v___y_2575_;
v___y_2567_ = v___f_2589_;
v___y_2568_ = v___x_2583_;
v___y_2569_ = v___x_2577_;
goto v___jp_2561_;
}
else
{
lean_object* v_val_2590_; 
v_val_2590_ = lean_ctor_get(v_fst_2588_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v_fst_2588_, 1);
if (lean_obj_tag(v_val_2590_) == 0)
{
lean_inc_ref(v___x_2583_);
v___y_2562_ = v___x_2583_;
v___y_2563_ = v___y_2574_;
v___y_2564_ = v___x_2577_;
v___y_2565_ = v___x_2580_;
v___y_2566_ = v___y_2575_;
v___y_2567_ = v___f_2589_;
v___y_2568_ = v___x_2583_;
v___y_2569_ = v___x_2577_;
goto v___jp_2561_;
}
else
{
lean_object* v_val_2591_; lean_object* v_snd_2592_; 
lean_dec(v___y_2525_);
v_val_2591_ = lean_ctor_get(v_val_2590_, 0);
lean_inc(v_val_2591_);
lean_dec_ref_known(v_val_2590_, 1);
v_snd_2592_ = lean_ctor_get(v_val_2591_, 1);
lean_inc(v_snd_2592_);
lean_dec(v_val_2591_);
lean_inc_ref(v___x_2583_);
v___y_2538_ = v___x_2583_;
v___y_2539_ = v___x_2577_;
v___y_2540_ = v___y_2574_;
v___y_2541_ = v___x_2580_;
v___y_2542_ = v___y_2575_;
v___y_2543_ = v___f_2589_;
v___y_2544_ = v___x_2583_;
v___y_2545_ = v___x_2577_;
v___y_2546_ = v_snd_2592_;
goto v___jp_2537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v_snd_2620_, lean_object* v_handler_2621_, lean_object* v_a_2622_, lean_object* v_fst_2623_, lean_object* v___y_2624_, lean_object* v___x_2625_, lean_object* v___x_2626_, lean_object* v___x_2627_, lean_object* v_x_2628_, lean_object* v___y_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lasm_Fetch_serveNode___lam__8(v_snd_2620_, v_handler_2621_, v_a_2622_, v_fst_2623_, v___y_2624_, v___x_2625_, v___x_2626_, v___x_2627_, v_x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___x_2625_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_handler_2640_, lean_object* v_a_2641_, lean_object* v___y_2642_, lean_object* v_____x_2643_){
_start:
{
lean_object* v_fst_2645_; lean_object* v_snd_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___f_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; lean_object* v_val_2655_; lean_object* v___x_2658_; 
v_fst_2645_ = lean_ctor_get(v_____x_2643_, 0);
lean_inc_n(v_fst_2645_, 2);
v_snd_2646_ = lean_ctor_get(v_____x_2643_, 1);
lean_inc(v_snd_2646_);
lean_dec_ref(v_____x_2643_);
v___x_2647_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__4));
v___x_2648_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__7___closed__5));
v___x_2649_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__10___closed__0));
v___f_2650_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 10, 8);
lean_closure_set(v___f_2650_, 0, v_snd_2646_);
lean_closure_set(v___f_2650_, 1, v_handler_2640_);
lean_closure_set(v___f_2650_, 2, v_a_2641_);
lean_closure_set(v___f_2650_, 3, v_fst_2645_);
lean_closure_set(v___f_2650_, 4, v___y_2642_);
lean_closure_set(v___f_2650_, 5, v___x_2649_);
lean_closure_set(v___f_2650_, 6, v___x_2648_);
lean_closure_set(v___f_2650_, 7, v___x_2647_);
v___x_2651_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__10___closed__1));
v___x_2652_ = lean_unsigned_to_nat(0u);
v___x_2653_ = 0;
v___x_2658_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__6(v_fst_2645_, v___x_2651_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2658_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2658_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set_tag(v___x_2661_, 1);
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
v_val_2655_ = v___x_2664_;
goto v___jp_2654_;
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
v_a_2667_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2658_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2658_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set_tag(v___x_2669_, 0);
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
v_val_2655_ = v___x_2672_;
goto v___jp_2654_;
}
}
}
v___jp_2654_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2656_, 0, v_val_2655_);
v___x_2657_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2652_, v___x_2653_, v___x_2656_, v___f_2650_);
return v___x_2657_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_handler_2675_, lean_object* v_a_2676_, lean_object* v___y_2677_, lean_object* v_____x_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Lasm_Fetch_serveNode___lam__10(v_handler_2675_, v_a_2676_, v___y_2677_, v_____x_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___f_2681_, lean_object* v_x_2682_){
_start:
{
if (lean_obj_tag(v_x_2682_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2692_; 
lean_dec_ref(v___f_2681_);
v_a_2684_ = lean_ctor_get(v_x_2682_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v_x_2682_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2686_ = v_x_2682_;
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v_x_2682_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2690_; 
v___x_2690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
return v___x_2690_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2694_; 
v_a_2693_ = lean_ctor_get(v_x_2682_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v_x_2682_, 1);
v___x_2694_ = lean_apply_2(v___f_2681_, v_a_2693_, lean_box(0));
return v___x_2694_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___f_2695_, lean_object* v_x_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lasm_Fetch_serveNode___lam__11(v___f_2695_, v_x_2696_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_2706_, lean_object* v___f_2707_, lean_object* v_args_2708_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2715_ = lean_unsigned_to_nat(0u);
v___x_2716_ = lean_array_get_size(v_args_2708_);
v___x_2717_ = lean_nat_dec_lt(v___x_2715_, v___x_2716_);
if (v___x_2717_ == 0)
{
lean_dec_ref(v___f_2707_);
goto v___jp_2710_;
}
else
{
lean_object* v___x_2718_; 
v___x_2718_ = lean_array_fget_borrowed(v_args_2708_, v___x_2715_);
if (lean_obj_tag(v___x_2718_) == 9)
{
lean_object* v_value_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; 
v_value_2719_ = lean_ctor_get(v___x_2718_, 0);
v___x_2720_ = lean_unsigned_to_nat(1u);
v___x_2721_ = lean_nat_dec_lt(v___x_2720_, v___x_2716_);
if (v___x_2721_ == 0)
{
lean_dec_ref(v___f_2707_);
goto v___jp_2710_;
}
else
{
lean_object* v___x_2722_; 
v___x_2722_ = lean_array_fget(v_args_2708_, v___x_2720_);
if (lean_obj_tag(v___x_2722_) == 9)
{
lean_object* v_value_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2734_; 
lean_dec_ref(v___f_2706_);
v_value_2723_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2734_ == 0)
{
lean_object* v_unused_2735_; 
v_unused_2735_ = lean_ctor_get(v___x_2722_, 1);
lean_dec(v_unused_2735_);
v___x_2725_ = v___x_2722_;
v_isShared_2726_ = v_isSharedCheck_2734_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_value_2723_);
lean_dec(v___x_2722_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2734_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
lean_inc(v_value_2719_);
if (v_isShared_2726_ == 0)
{
lean_ctor_set_tag(v___x_2725_, 0);
lean_ctor_set(v___x_2725_, 1, v_value_2723_);
lean_ctor_set(v___x_2725_, 0, v_value_2719_);
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_value_2719_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v_value_2723_);
v___x_2728_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
uint8_t v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2729_ = 0;
v___x_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2728_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
v___x_2732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2715_, v___x_2729_, v___x_2731_, v___f_2707_);
return v___x_2732_;
}
}
}
else
{
lean_dec(v___x_2722_);
lean_dec_ref(v___f_2707_);
goto v___jp_2710_;
}
}
}
else
{
lean_dec_ref(v___f_2707_);
goto v___jp_2710_;
}
}
v___jp_2710_:
{
lean_object* v___x_2711_; uint8_t v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2711_ = lean_unsigned_to_nat(0u);
v___x_2712_ = 0;
v___x_2713_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__13___closed__3));
v___x_2714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2711_, v___x_2712_, v___x_2713_, v___f_2706_);
return v___x_2714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_2736_, lean_object* v___f_2737_, lean_object* v_args_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lasm_Fetch_serveNode___lam__13(v___f_2736_, v___f_2737_, v_args_2738_);
lean_dec_ref(v_args_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_2741_){
_start:
{
lean_object* v___x_2743_; lean_object* v_putStr_2744_; lean_object* v___x_2745_; 
v___x_2743_ = lean_get_stdout();
v_putStr_2744_ = lean_ctor_get(v___x_2743_, 4);
lean_inc_ref(v_putStr_2744_);
lean_dec_ref(v___x_2743_);
v___x_2745_ = lean_apply_2(v_putStr_2744_, v_s_2741_, lean_box(0));
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_2746_, lean_object* v_a_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_2746_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_2749_){
_start:
{
uint32_t v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = 10;
v___x_2752_ = lean_string_push(v_s_2749_, v___x_2751_);
v___x_2753_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_2754_, lean_object* v_a_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_2754_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___f_2761_, lean_object* v_x_2762_){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; uint8_t v___x_2771_; lean_object* v_val_2773_; lean_object* v___x_2776_; 
v___x_2764_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__12___closed__0));
v___x_2765_ = lean_string_append(v___x_2764_, v___y_2759_);
v___x_2766_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__12___closed__1));
v___x_2767_ = lean_string_append(v___x_2765_, v___x_2766_);
v___x_2768_ = l_Nat_reprFast(v___y_2760_);
v___x_2769_ = lean_string_append(v___x_2767_, v___x_2768_);
lean_dec_ref(v___x_2768_);
v___x_2770_ = lean_unsigned_to_nat(0u);
v___x_2771_ = 0;
v___x_2776_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_2769_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___x_2776_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___x_2776_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
lean_ctor_set_tag(v___x_2779_, 1);
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
v_val_2773_ = v___x_2782_;
goto v___jp_2772_;
}
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
v_a_2785_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2776_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2776_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 0);
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
v_val_2773_ = v___x_2790_;
goto v___jp_2772_;
}
}
}
v___jp_2772_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2774_, 0, v_val_2773_);
v___x_2775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2770_, v___x_2771_, v___x_2774_, v___f_2761_);
return v___x_2775_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___f_2795_, lean_object* v_x_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Lasm_Fetch_serveNode___lam__12(v___y_2793_, v___y_2794_, v___f_2795_, v_x_2796_);
lean_dec_ref(v_x_2796_);
lean_dec_ref(v___y_2793_);
return v_res_2798_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__1(void){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = lean_nat_to_int(v___x_2800_);
return v___x_2801_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__2(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2803_ = lean_nat_abs(v___x_2802_);
return v___x_2803_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__14___closed__3(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2804_ = lean_cstr_to_nat("9007199254740991");
v___x_2805_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__2, &l_Lasm_Fetch_serveNode___lam__14___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__2);
v___x_2806_ = lean_nat_dec_le(v___x_2805_, v___x_2804_);
return v___x_2806_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__4(void){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2808_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__14___closed__5(void){
_start:
{
lean_object* v___x_2809_; double v___x_2810_; 
v___x_2809_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__1, &l_Lasm_Fetch_serveNode___lam__14___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__1);
v___x_2810_ = l_Float_ofInt(v___x_2809_);
return v___x_2810_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__14___closed__6(void){
_start:
{
double v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__14___closed__5, &l_Lasm_Fetch_serveNode___lam__14___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__5);
v___x_2812_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2812_, 0, v___x_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___f_2813_, lean_object* v___x_2814_, lean_object* v_a_2815_, lean_object* v_x_2816_){
_start:
{
uint8_t v___y_2819_; lean_object* v___y_2820_; lean_object* v_val_2821_; lean_object* v___x_2824_; lean_object* v___y_2826_; uint8_t v___x_2847_; 
v___x_2824_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_2847_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__14___closed__3, &l_Lasm_Fetch_serveNode___lam__14___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__3);
if (v___x_2847_ == 0)
{
lean_object* v___x_2848_; 
v___x_2848_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__4, &l_Lasm_Fetch_serveNode___lam__14___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__4);
v___y_2826_ = v___x_2848_;
goto v___jp_2825_;
}
else
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__14___closed__6, &l_Lasm_Fetch_serveNode___lam__14___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__14___closed__6);
v___y_2826_ = v___x_2849_;
goto v___jp_2825_;
}
v___jp_2818_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2822_, 0, v_val_2821_);
v___x_2823_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2820_, v___y_2819_, v___x_2822_, v___f_2813_);
return v___x_2823_;
}
v___jp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; 
lean_inc(v___y_2826_);
v___x_2827_ = lean_array_push(v___x_2814_, v___y_2826_);
v___x_2828_ = lean_unsigned_to_nat(0u);
v___x_2829_ = 0;
v___x_2830_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2815_, v___x_2824_, v___x_2827_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2830_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2830_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 1);
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
v___y_2819_ = v___x_2829_;
v___y_2820_ = v___x_2828_;
v_val_2821_ = v___x_2836_;
goto v___jp_2818_;
}
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
v_a_2839_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2830_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2830_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
lean_ctor_set_tag(v___x_2841_, 0);
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
v___y_2819_ = v___x_2829_;
v___y_2820_ = v___x_2828_;
v_val_2821_ = v___x_2844_;
goto v___jp_2818_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___f_2850_, lean_object* v___x_2851_, lean_object* v_a_2852_, lean_object* v_x_2853_, lean_object* v___y_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lasm_Fetch_serveNode___lam__14(v___f_2850_, v___x_2851_, v_a_2852_, v_x_2853_);
lean_dec_ref(v_x_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v_a_2857_, lean_object* v___x_2858_, lean_object* v___x_2859_, lean_object* v___f_2860_, lean_object* v_a_2861_, lean_object* v_x_2862_){
_start:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; lean_object* v_val_2870_; lean_object* v___x_2873_; 
v___x_2864_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__15___closed__0));
v___x_2865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2865_, 0, v_a_2857_);
lean_ctor_set(v___x_2865_, 1, v___x_2858_);
v___x_2866_ = lean_array_push(v___x_2859_, v___x_2865_);
v___x_2867_ = lean_unsigned_to_nat(0u);
v___x_2868_ = 0;
v___x_2873_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2861_, v___x_2864_, v___x_2866_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2873_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2873_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
lean_ctor_set_tag(v___x_2876_, 1);
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
v_val_2870_ = v___x_2879_;
goto v___jp_2869_;
}
}
}
else
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
v_a_2882_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2873_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2873_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
lean_ctor_set_tag(v___x_2884_, 0);
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
v_val_2870_ = v___x_2887_;
goto v___jp_2869_;
}
}
}
v___jp_2869_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2871_, 0, v_val_2870_);
v___x_2872_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2867_, v___x_2868_, v___x_2871_, v___f_2860_);
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v_a_2890_, lean_object* v___x_2891_, lean_object* v___x_2892_, lean_object* v___f_2893_, lean_object* v_a_2894_, lean_object* v_x_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lasm_Fetch_serveNode___lam__15(v_a_2890_, v___x_2891_, v___x_2892_, v___f_2893_, v_a_2894_, v_x_2895_);
lean_dec_ref(v_x_2895_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_as_x27_2901_, lean_object* v_b_2902_){
_start:
{
if (lean_obj_tag(v_as_x27_2901_) == 0)
{
lean_object* v___x_2904_; 
lean_dec(v_a_2900_);
lean_dec(v_a_2899_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_b_2902_);
return v___x_2904_;
}
else
{
lean_object* v_head_2905_; lean_object* v_tail_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v_head_2905_ = lean_ctor_get(v_as_x27_2901_, 0);
v_tail_2906_ = lean_ctor_get(v_as_x27_2901_, 1);
v___x_2907_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2908_ = lean_box(0);
v___x_2909_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_2905_);
v___x_2910_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_head_2905_);
lean_inc(v_a_2899_);
v___x_2911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2911_, 0, v_a_2899_);
lean_ctor_set(v___x_2911_, 1, v___x_2907_);
v___x_2912_ = lean_unsigned_to_nat(2u);
v___x_2913_ = lean_mk_empty_array_with_capacity(v___x_2912_);
v___x_2914_ = lean_array_push(v___x_2913_, v___x_2910_);
v___x_2915_ = lean_array_push(v___x_2914_, v___x_2911_);
lean_inc(v_a_2900_);
v___x_2916_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_2900_, v___x_2909_, v___x_2915_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_dec_ref_known(v___x_2916_, 1);
v_as_x27_2901_ = v_tail_2906_;
v_b_2902_ = v___x_2908_;
goto _start;
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_dec(v_a_2900_);
lean_dec(v_a_2899_);
v_a_2918_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2916_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2916_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_as_x27_2928_, lean_object* v_b_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_2926_, v_a_2927_, v_as_x27_2928_, v_b_2929_);
lean_dec(v_as_x27_2928_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_2933_){
_start:
{
uint32_t v___x_2935_; uint32_t v___x_2936_; uint64_t v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2935_ = 201;
v___x_2936_ = 0;
v___x_2937_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__2___closed__0);
v___x_2938_ = lean_string_to_utf8(v_specifier_2933_);
v___x_2939_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_2935_, v___x_2936_, v___x_2937_, v___x_2938_);
lean_dec_ref(v___x_2938_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2939_, 1);
v___x_2941_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_2942_ = l_String_quote(v_specifier_2933_);
v___x_2943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
v___x_2944_ = lean_unsigned_to_nat(120u);
v___x_2945_ = lean_unsigned_to_nat(0u);
v___x_2946_ = l_Std_Format_pretty(v___x_2943_, v___x_2944_, v___x_2945_, v___x_2945_);
v___x_2947_ = lean_string_append(v___x_2941_, v___x_2946_);
lean_dec_ref(v___x_2946_);
v___x_2948_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2947_, v_a_2940_);
lean_dec(v_a_2940_);
lean_dec_ref(v___x_2947_);
return v___x_2948_;
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
lean_dec_ref(v_specifier_2933_);
v_a_2949_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___x_2939_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2939_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_2957_, lean_object* v_a_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_2957_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_2982_){
_start:
{
lean_object* v___f_2984_; lean_object* v___f_2985_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___f_2984_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__2));
v___f_2985_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___x_3048_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_3049_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_3048_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v___x_3053_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_3054_ = l_Lasm_JS_Value_get___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3052_, v___x_3053_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3109_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___y_3114_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_a_3055_);
lean_dec_ref_known(v___x_3054_, 1);
v___x_3111_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_3112_ = lean_io_getenv(v___x_3111_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v___x_3123_; 
v___x_3123_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___y_3114_ = v___x_3123_;
goto v___jp_3113_;
}
else
{
lean_object* v_val_3124_; 
v_val_3124_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_val_3124_);
lean_dec_ref_known(v___x_3112_, 1);
v___y_3114_ = v_val_3124_;
goto v___jp_3113_;
}
v___jp_3056_:
{
lean_object* v___f_3060_; lean_object* v___f_3061_; lean_object* v___f_3062_; lean_object* v___f_3063_; lean_object* v___x_3064_; 
lean_inc_n(v___y_3059_, 2);
v___f_3060_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 5, 3);
lean_closure_set(v___f_3060_, 0, v_handler_2982_);
lean_closure_set(v___f_3060_, 1, v_a_3055_);
lean_closure_set(v___f_3060_, 2, v___y_3059_);
v___f_3061_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3061_, 0, v___f_3060_);
lean_inc_ref(v___f_3061_);
v___f_3062_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 4, 2);
lean_closure_set(v___f_3062_, 0, v___f_3061_);
lean_closure_set(v___f_3062_, 1, v___f_3061_);
v___f_3063_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_3063_, 0, v___y_3057_);
lean_closure_set(v___f_3063_, 1, v___y_3059_);
lean_closure_set(v___f_3063_, 2, v___f_2984_);
v___x_3064_ = l_Lasm_JS_Function_ofFnReply(v___f_3062_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3064_, 1);
v___x_3066_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_3067_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3068_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3068_, 0, v_a_3065_);
lean_ctor_set(v___x_3068_, 1, v___x_3067_);
v___x_3069_ = lean_unsigned_to_nat(1u);
v___x_3070_ = lean_mk_empty_array_with_capacity(v___x_3069_);
lean_inc_ref(v___x_3070_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3068_);
v___x_3072_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_a_3050_, v___x_3066_, v___x_3071_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3074_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = l_Lasm_JS_Function_ofFn(v___f_3063_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v_a_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v_a_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v___x_3076_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_3077_ = lean_nat_to_int(v___y_3059_);
v___x_3078_ = lean_nat_abs(v___x_3077_);
v___x_3079_ = lean_cstr_to_nat("9007199254740991");
v___x_3080_ = lean_nat_dec_le(v___x_3078_, v___x_3079_);
lean_dec(v___x_3078_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; 
v___x_3081_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3077_);
v___y_2987_ = v_a_3073_;
v___y_2988_ = v___x_3067_;
v___y_2989_ = v___x_3070_;
v___y_2990_ = v___x_3076_;
v___y_2991_ = v___y_3058_;
v___y_2992_ = v___x_3067_;
v___y_2993_ = v_a_3075_;
v___y_2994_ = v___x_3081_;
goto v___jp_2986_;
}
else
{
double v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = l_Float_ofInt(v___x_3077_);
lean_dec(v___x_3077_);
v___x_3083_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3083_, 0, v___x_3082_);
v___y_2987_ = v_a_3073_;
v___y_2988_ = v___x_3067_;
v___y_2989_ = v___x_3070_;
v___y_2990_ = v___x_3076_;
v___y_2991_ = v___y_3058_;
v___y_2992_ = v___x_3067_;
v___y_2993_ = v_a_3075_;
v___y_2994_ = v___x_3083_;
goto v___jp_2986_;
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v_a_3073_);
lean_dec_ref(v___x_3070_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
v_a_3084_ = lean_ctor_get(v___x_3074_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3074_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3074_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3074_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec_ref(v___x_3070_);
lean_dec_ref(v___f_3063_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
v_a_3092_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3072_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3072_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v___f_3063_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v_a_3050_);
v_a_3100_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3064_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3064_);
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
v___jp_3108_:
{
lean_object* v___x_3110_; 
v___x_3110_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_3109_);
v___y_3057_ = v___y_3109_;
v___y_3058_ = v___y_3109_;
v___y_3059_ = v___x_3110_;
goto v___jp_3056_;
}
v___jp_3113_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_3116_ = lean_io_getenv(v___x_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
v___y_3109_ = v___y_3114_;
goto v___jp_3108_;
}
else
{
lean_object* v_val_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v_val_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_val_3117_);
lean_dec_ref_known(v___x_3116_, 1);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = lean_string_utf8_byte_size(v_val_3117_);
v___x_3120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3120_, 0, v_val_3117_);
lean_ctor_set(v___x_3120_, 1, v___x_3118_);
lean_ctor_set(v___x_3120_, 2, v___x_3119_);
v___x_3121_ = l_String_Slice_toNat_x3f(v___x_3120_);
lean_dec_ref_known(v___x_3120_, 3);
if (lean_obj_tag(v___x_3121_) == 0)
{
v___y_3109_ = v___y_3114_;
goto v___jp_3108_;
}
else
{
lean_object* v_val_3122_; 
v_val_3122_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_val_3122_);
lean_dec_ref_known(v___x_3121_, 1);
lean_inc_ref(v___y_3114_);
v___y_3057_ = v___y_3114_;
v___y_3058_ = v___y_3114_;
v___y_3059_ = v_val_3122_;
goto v___jp_3056_;
}
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v_a_3050_);
lean_dec_ref(v_handler_2982_);
v_a_3125_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3054_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3054_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_dec(v_a_3050_);
lean_dec_ref(v_handler_2982_);
v_a_3133_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3051_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3051_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_dec_ref(v_handler_2982_);
v_a_3141_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3049_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3049_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
v___jp_2986_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_2995_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2995_, 0, v___y_2991_);
lean_inc_ref(v___y_2992_);
v___x_2996_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___y_2993_);
lean_ctor_set(v___x_2996_, 1, v___y_2992_);
v___x_2997_ = lean_unsigned_to_nat(3u);
v___x_2998_ = lean_mk_empty_array_with_capacity(v___x_2997_);
v___x_2999_ = lean_array_push(v___x_2998_, v___y_2994_);
v___x_3000_ = lean_array_push(v___x_2999_, v___x_2995_);
v___x_3001_ = lean_array_push(v___x_3000_, v___x_2996_);
lean_inc_ref(v___y_2990_);
lean_inc(v___y_2987_);
v___x_3002_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v___y_2987_, v___y_2990_, v___x_3001_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_dec_ref_known(v___x_3002_, 1);
v___x_3003_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_3004_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___f_3006_; lean_object* v___x_3007_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc_n(v_a_3005_, 2);
lean_dec_ref_known(v___x_3004_, 1);
lean_inc_ref(v___y_2989_);
v___f_3006_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 5, 3);
lean_closure_set(v___f_3006_, 0, v___f_2985_);
lean_closure_set(v___f_3006_, 1, v___y_2989_);
lean_closure_set(v___f_3006_, 2, v_a_3005_);
v___x_3007_ = l_Lasm_JS_Function_ofFn(v___f_3006_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
lean_inc_ref(v___y_2988_);
v___f_3009_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 7, 5);
lean_closure_set(v___f_3009_, 0, v_a_3008_);
lean_closure_set(v___f_3009_, 1, v___y_2988_);
lean_closure_set(v___f_3009_, 2, v___y_2989_);
lean_closure_set(v___f_3009_, 3, v___f_2985_);
lean_closure_set(v___f_3009_, 4, v___y_2987_);
v___x_3010_ = l_Lasm_JS_Function_ofFn(v___f_3009_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_a_3011_);
lean_dec_ref_known(v___x_3010_, 1);
v___x_3012_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__8));
v___x_3013_ = lean_box(0);
v___x_3014_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_3011_, v_a_3005_, v___x_3012_, v___x_3013_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v___x_3015_; 
lean_dec_ref_known(v___x_3014_, 1);
v___x_3015_ = l_Lasm_JS_waitForever();
return v___x_3015_;
}
else
{
return v___x_3014_;
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec(v_a_3005_);
v_a_3016_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_3010_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3010_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec(v_a_3005_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
v_a_3024_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_3007_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3007_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
v_a_3032_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_3004_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3004_);
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
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2987_);
v_a_3040_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3002_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3002_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lasm_Fetch_serveNode(v_handler_3149_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_3152_, lean_object* v_range_3153_, lean_object* v_b_3154_, lean_object* v_i_3155_, lean_object* v_hs_3156_, lean_object* v_hl_3157_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_3152_, v_range_3153_, v_b_3154_, v_i_3155_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_3159_, lean_object* v_range_3160_, lean_object* v_b_3161_, lean_object* v_i_3162_, lean_object* v_hs_3163_, lean_object* v_hl_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_3159_, v_range_3160_, v_b_3161_, v_i_3162_, v_hs_3163_, v_hl_3164_);
lean_dec_ref(v_range_3160_);
lean_dec_ref(v___y_3159_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_as_3168_, lean_object* v_as_x27_3169_, lean_object* v_b_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_3166_, v_a_3167_, v_as_x27_3169_, v_b_3170_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_as_3176_, lean_object* v_as_x27_3177_, lean_object* v_b_3178_, lean_object* v_a_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_3174_, v_a_3175_, v_as_3176_, v_as_x27_3177_, v_b_3178_, v_a_3179_);
lean_dec(v_as_x27_3177_);
lean_dec(v_as_3176_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__0(lean_object* v_x_3182_){
_start:
{
if (lean_obj_tag(v_x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3184_; 
v_a_3183_ = lean_ctor_get(v_x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v_x_3182_, 1);
v___x_3184_ = lean_task_pure(v_a_3183_);
return v___x_3184_;
}
else
{
lean_object* v_a_3185_; 
v_a_3185_ = lean_ctor_get(v_x_3182_, 0);
lean_inc_ref(v_a_3185_);
lean_dec_ref_known(v_x_3182_, 1);
return v_a_3185_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1(lean_object* v_handler_3186_, lean_object* v___x_3187_){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = l_Lasm_Fetch_respond(v_handler_3186_, v___x_3187_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___lam__1___boxed(lean_object* v_handler_3190_, lean_object* v___x_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lasm_Fetch_serve___lam__1(v_handler_3190_, v___x_3191_);
return v_res_3193_;
}
}
static uint32_t _init_l_Lasm_Fetch_serve___closed__1(void){
_start:
{
lean_object* v___x_3195_; uint32_t v___x_3196_; 
v___x_3195_ = lean_box(0);
v___x_3196_ = lasm_fetch_platform(v___x_3195_);
return v___x_3196_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__2(void){
_start:
{
uint32_t v___x_3197_; uint32_t v___x_3198_; uint8_t v___x_3199_; 
v___x_3197_ = 1;
v___x_3198_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3199_ = lean_uint32_dec_eq(v___x_3198_, v___x_3197_);
return v___x_3199_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__3(void){
_start:
{
uint32_t v___x_3200_; uint32_t v___x_3201_; uint8_t v___x_3202_; 
v___x_3200_ = 2;
v___x_3201_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3202_ = lean_uint32_dec_eq(v___x_3201_, v___x_3200_);
return v___x_3202_;
}
}
static uint8_t _init_l_Lasm_Fetch_serve___closed__4(void){
_start:
{
uint32_t v___x_3203_; uint32_t v___x_3204_; uint8_t v___x_3205_; 
v___x_3203_ = 0;
v___x_3204_ = lean_uint32_once(&l_Lasm_Fetch_serve___closed__1, &l_Lasm_Fetch_serve___closed__1_once, _init_l_Lasm_Fetch_serve___closed__1);
v___x_3205_ = lean_uint32_dec_eq(v___x_3204_, v___x_3203_);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_3209_){
_start:
{
lean_object* v___f_3211_; uint8_t v___x_3252_; 
v___f_3211_ = ((lean_object*)(l_Lasm_Fetch_serve___closed__0));
v___x_3252_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__2, &l_Lasm_Fetch_serve___closed__2_once, _init_l_Lasm_Fetch_serve___closed__2);
if (v___x_3252_ == 0)
{
uint8_t v___x_3253_; 
v___x_3253_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__3, &l_Lasm_Fetch_serve___closed__3_once, _init_l_Lasm_Fetch_serve___closed__3);
if (v___x_3253_ == 0)
{
uint8_t v___x_3254_; 
v___x_3254_ = lean_uint8_once(&l_Lasm_Fetch_serve___closed__4, &l_Lasm_Fetch_serve___closed__4_once, _init_l_Lasm_Fetch_serve___closed__4);
if (v___x_3254_ == 0)
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
lean_dec_ref(v_handler_3209_);
v___x_3255_ = ((lean_object*)(l_Lasm_Fetch_serve___closed__6));
v___x_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
return v___x_3256_;
}
else
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; uint8_t v___x_3259_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
v___x_3259_ = lean_unbox(v_a_3258_);
lean_dec(v_a_3258_);
if (v___x_3259_ == 0)
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Lasm_Fetch_serveNode(v_handler_3209_);
return v___x_3260_;
}
else
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3209_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3263_ = l_Lasm_JS_exportDefault(v_a_3262_);
return v___x_3263_;
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
v_a_3264_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3261_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3261_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
}
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec_ref(v_handler_3209_);
v_a_3272_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3257_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3257_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
}
else
{
goto v___jp_3212_;
}
}
else
{
goto v___jp_3212_;
}
v___jp_3212_:
{
lean_object* v___x_3213_; 
v___x_3213_ = lasm_fetch_take_request();
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3243_; 
v_a_3214_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3216_ = v___x_3213_;
v_isShared_3217_ = v_isSharedCheck_3243_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3213_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3243_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v_snd_3218_; lean_object* v_snd_3219_; lean_object* v_fst_3220_; lean_object* v_fst_3221_; lean_object* v_fst_3222_; lean_object* v_snd_3223_; lean_object* v___x_3224_; lean_object* v___f_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; uint8_t v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v_snd_3218_ = lean_ctor_get(v_a_3214_, 1);
lean_inc(v_snd_3218_);
v_snd_3219_ = lean_ctor_get(v_snd_3218_, 1);
lean_inc(v_snd_3219_);
v_fst_3220_ = lean_ctor_get(v_a_3214_, 0);
lean_inc_n(v_fst_3220_, 2);
lean_dec(v_a_3214_);
v_fst_3221_ = lean_ctor_get(v_snd_3218_, 0);
lean_inc(v_fst_3221_);
lean_dec(v_snd_3218_);
v_fst_3222_ = lean_ctor_get(v_snd_3219_, 0);
lean_inc(v_fst_3222_);
v_snd_3223_ = lean_ctor_get(v_snd_3219_, 1);
lean_inc(v_snd_3223_);
lean_dec(v_snd_3219_);
v___x_3224_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3224_, 0, v_fst_3220_);
lean_ctor_set(v___x_3224_, 1, v_fst_3221_);
lean_ctor_set(v___x_3224_, 2, v_fst_3222_);
lean_ctor_set(v___x_3224_, 3, v_snd_3223_);
v___f_3225_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serve___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3225_, 0, v_handler_3209_);
lean_closure_set(v___f_3225_, 1, v___x_3224_);
v___x_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = lean_io_as_task(v___f_3225_, v___x_3226_);
v___x_3228_ = 1;
v___x_3229_ = lean_task_bind(v___x_3227_, v___f_3211_, v___x_3226_, v___x_3228_);
v___x_3230_ = lean_task_get_own(v___x_3229_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3233_; 
lean_dec(v_fst_3220_);
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
if (v_isShared_3217_ == 0)
{
lean_ctor_set_tag(v___x_3216_, 1);
lean_ctor_set(v___x_3216_, 0, v_a_3231_);
v___x_3233_ = v___x_3216_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3231_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
else
{
lean_object* v_a_3235_; uint16_t v_status_3236_; lean_object* v_headers_3237_; lean_object* v_body_3238_; uint8_t v___x_3239_; 
lean_del_object(v___x_3216_);
v_a_3235_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3235_);
lean_dec_ref_known(v___x_3230_, 1);
v_status_3236_ = lean_ctor_get_uint16(v_a_3235_, sizeof(void*)*2);
v_headers_3237_ = lean_ctor_get(v_a_3235_, 0);
lean_inc_ref(v_headers_3237_);
v_body_3238_ = lean_ctor_get(v_a_3235_, 1);
lean_inc_ref(v_body_3238_);
lean_dec(v_a_3235_);
v___x_3239_ = l_Lasm_Fetch_bodyless(v_fst_3220_, v_status_3236_);
lean_dec(v_fst_3220_);
if (v___x_3239_ == 0)
{
lean_object* v___x_3240_; 
v___x_3240_ = lasm_fetch_send_response(v_status_3236_, v_headers_3237_, v_body_3238_);
lean_dec_ref(v_body_3238_);
lean_dec_ref(v_headers_3237_);
return v___x_3240_;
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
lean_dec_ref(v_body_3238_);
v___x_3241_ = l_ByteArray_empty;
v___x_3242_ = lasm_fetch_send_response(v_status_3236_, v_headers_3237_, v___x_3241_);
lean_dec_ref(v_headers_3237_);
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec_ref(v_handler_3209_);
v_a_3244_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3213_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3213_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_3280_, lean_object* v_a_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l_Lasm_Fetch_serve(v_handler_3280_);
return v_res_3282_;
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
