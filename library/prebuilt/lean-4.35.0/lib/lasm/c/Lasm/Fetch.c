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
lean_object* lean_string_data(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_mk(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_to_utf8(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
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
lean_object* l_Lasm_JS_global();
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__1(uint32_t, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_Option_instBEq_beq___at___00System_FilePath_isAbsolute_spec__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint16_t lean_float_to_uint16(double);
lean_object* lean_get_stdout();
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_waitForever();
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lasm_JS_Function_ofFnReply(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___boxed(lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "://"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(lean_object*);
static const lean_string_object l_Lasm_Fetch_Request_path___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_Fetch_Request_path___closed__0 = (const lean_object*)&l_Lasm_Fetch_Request_path___closed__0_value;
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf(lean_object*);
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
static const lean_string_object l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "!#$%&'*+-.^_`|~"};
static const lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1;
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0___boxed(lean_object*);
static const lean_string_object l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0_value;
static const lean_string_object l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1 = (const lean_object*)&l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cookie"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_Fetch_joinCookies___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Fetch_joinCookies___closed__0 = (const lean_object*)&l_Lasm_Fetch_joinCookies___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Fetch_nodeRequestUrl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch_nodeRequestUrl___closed__0;
static const lean_string_object l_Lasm_Fetch_nodeRequestUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* l_Lasm_Fetch_nodeRequestUrl___closed__1 = (const lean_object*)&l_Lasm_Fetch_nodeRequestUrl___closed__1_value;
static const lean_string_object l_Lasm_Fetch_nodeRequestUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "localhost:"};
static const lean_object* l_Lasm_Fetch_nodeRequestUrl___closed__2 = (const lean_object*)&l_Lasm_Fetch_nodeRequestUrl___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__0___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_serveNode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_serveNode___lam__0___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__7___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "destroy"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__6___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "concat"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__14___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_serveNode___lam__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__18___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__18___closed__0_value;
static const lean_string_object l_Lasm_Fetch_serveNode___lam__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toWeb"};
static const lean_object* l_Lasm_Fetch_serveNode___lam__18___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___lam__18___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__0 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__0_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_serveNode___closed__1 = (const lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value;
static const lean_closure_object l_Lasm_Fetch_serveNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_serveNode___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Fetch_serveNode___closed__1_value)} };
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath_go(lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
if (lean_obj_tag(v_a_255_) == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_258_ = l_List_reverse___redArg(v_a_256_);
v___x_259_ = lean_string_mk(v___x_258_);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v_a_257_);
v___x_261_ = l_List_reverse___redArg(v___x_260_);
return v___x_261_;
}
else
{
lean_object* v_head_262_; lean_object* v_tail_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_283_; 
v_head_262_ = lean_ctor_get(v_a_255_, 0);
v_tail_263_ = lean_ctor_get(v_a_255_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v_a_255_);
if (v_isSharedCheck_283_ == 0)
{
v___x_265_ = v_a_255_;
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_tail_263_);
lean_inc(v_head_262_);
lean_dec(v_a_255_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
uint32_t v___x_275_; uint32_t v___x_276_; uint8_t v___x_277_; 
v___x_275_ = 47;
v___x_276_ = lean_unbox_uint32(v_head_262_);
v___x_277_ = lean_uint32_dec_eq(v___x_276_, v___x_275_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; uint32_t v___x_279_; uint8_t v___x_280_; 
v___x_278_ = 92;
v___x_279_ = lean_unbox_uint32(v_head_262_);
v___x_280_ = lean_uint32_dec_eq(v___x_279_, v___x_278_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
lean_del_object(v___x_265_);
v___x_281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_281_, 0, v_head_262_);
lean_ctor_set(v___x_281_, 1, v_a_256_);
v_a_255_ = v_tail_263_;
v_a_256_ = v___x_281_;
goto _start;
}
else
{
lean_dec(v_head_262_);
goto v___jp_267_;
}
}
else
{
lean_dec(v_head_262_);
goto v___jp_267_;
}
v___jp_267_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_268_ = lean_box(0);
v___x_269_ = l_List_reverse___redArg(v_a_256_);
v___x_270_ = lean_string_mk(v___x_269_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 1, v_a_257_);
lean_ctor_set(v___x_265_, 0, v___x_270_);
v___x_272_ = v___x_265_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_a_257_);
v___x_272_ = v_reuseFailAlloc_274_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
v_a_255_ = v_tail_263_;
v_a_256_ = v___x_268_;
v_a_257_ = v___x_272_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(lean_object* v_p_284_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_string_data(v_p_284_);
v___x_286_ = lean_box(0);
v___x_287_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath_go(v___x_285_, v___x_286_, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(lean_object* v_s_289_){
_start:
{
uint8_t v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_290_ = 0;
v___x_291_ = l_Lasm_Fetch_percentDecode(v_s_289_, v___x_290_);
v___x_292_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___closed__0));
v___x_293_ = lean_string_dec_eq(v___x_291_, v___x_292_);
lean_dec_ref(v___x_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___boxed(lean_object* v_s_294_){
_start:
{
uint8_t v_res_295_; lean_object* v_r_296_; 
v_res_295_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_s_294_);
lean_dec_ref(v_s_294_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(lean_object* v_s_298_){
_start:
{
uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_299_ = 0;
v___x_300_ = l_Lasm_Fetch_percentDecode(v_s_298_, v___x_299_);
v___x_301_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___closed__0));
v___x_302_ = lean_string_dec_eq(v___x_300_, v___x_301_);
lean_dec_ref(v___x_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___boxed(lean_object* v_s_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_s_303_);
lean_dec_ref(v_s_303_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_307_) == 0)
{
return v_x_306_;
}
else
{
lean_object* v_tail_308_; 
v_tail_308_ = lean_ctor_get(v_x_307_, 1);
if (lean_obj_tag(v_tail_308_) == 0)
{
lean_object* v_head_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_335_; 
v_head_309_ = lean_ctor_get(v_x_307_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v_x_307_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; 
v_unused_336_ = lean_ctor_get(v_x_307_, 1);
lean_dec(v_unused_336_);
v___x_311_ = v_x_307_;
v_isShared_312_ = v_isSharedCheck_335_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_head_309_);
lean_dec(v_x_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_335_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_head_309_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; 
v___x_314_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_head_309_);
if (v___x_314_ == 0)
{
lean_object* v___x_316_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v_x_306_);
v___x_316_ = v___x_311_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_head_309_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_x_306_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
else
{
lean_object* v___x_318_; lean_object* v___x_320_; 
lean_dec(v_head_309_);
v___x_318_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v_x_306_);
lean_ctor_set(v___x_311_, 0, v___x_318_);
v___x_320_ = v___x_311_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_x_306_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
else
{
lean_object* v___x_322_; 
lean_dec(v_head_309_);
v___x_322_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_x_306_) == 0)
{
lean_object* v___x_324_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v_x_306_);
lean_ctor_set(v___x_311_, 0, v___x_322_);
v___x_324_ = v___x_311_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_x_306_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
else
{
lean_object* v_tail_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_del_object(v___x_311_);
v_tail_326_ = lean_ctor_get(v_x_306_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_306_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v_x_306_, 0);
lean_dec(v_unused_334_);
v___x_328_ = v_x_306_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_tail_326_);
lean_dec(v_x_306_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_322_);
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_tail_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
}
else
{
lean_object* v_head_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_351_; 
lean_inc(v_tail_308_);
v_head_337_ = lean_ctor_get(v_x_307_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_307_);
if (v_isSharedCheck_351_ == 0)
{
lean_object* v_unused_352_; 
v_unused_352_ = lean_ctor_get(v_x_307_, 1);
lean_dec(v_unused_352_);
v___x_339_ = v_x_307_;
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_head_337_);
lean_dec(v_x_307_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
uint8_t v___x_341_; 
v___x_341_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_head_337_);
if (v___x_341_ == 0)
{
uint8_t v___x_342_; 
v___x_342_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_head_337_);
if (v___x_342_ == 0)
{
lean_object* v___x_344_; 
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 1, v_x_306_);
v___x_344_ = v___x_339_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_head_337_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_x_306_);
v___x_344_ = v_reuseFailAlloc_346_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
v_x_306_ = v___x_344_;
v_x_307_ = v_tail_308_;
goto _start;
}
}
else
{
lean_del_object(v___x_339_);
lean_dec(v_head_337_);
v_x_307_ = v_tail_308_;
goto _start;
}
}
else
{
lean_del_object(v___x_339_);
lean_dec(v_head_337_);
if (lean_obj_tag(v_x_306_) == 0)
{
v_x_307_ = v_tail_308_;
goto _start;
}
else
{
lean_object* v_tail_349_; 
v_tail_349_ = lean_ctor_get(v_x_306_, 1);
lean_inc(v_tail_349_);
lean_dec_ref_known(v_x_306_, 2);
v_x_306_ = v_tail_349_;
v_x_307_ = v_tail_308_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter___redArg(lean_object* v_x_353_, lean_object* v_x_354_, lean_object* v_h__1_355_, lean_object* v_h__2_356_, lean_object* v_h__3_357_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
lean_object* v___x_358_; 
lean_dec(v_h__3_357_);
lean_dec(v_h__2_356_);
v___x_358_ = lean_apply_1(v_h__1_355_, v_x_353_);
return v___x_358_;
}
else
{
lean_object* v_tail_359_; 
lean_dec(v_h__1_355_);
v_tail_359_ = lean_ctor_get(v_x_354_, 1);
if (lean_obj_tag(v_tail_359_) == 0)
{
lean_object* v_head_360_; lean_object* v___x_361_; 
lean_dec(v_h__3_357_);
v_head_360_ = lean_ctor_get(v_x_354_, 0);
lean_inc(v_head_360_);
lean_dec_ref_known(v_x_354_, 2);
v___x_361_ = lean_apply_2(v_h__2_356_, v_x_353_, v_head_360_);
return v___x_361_;
}
else
{
lean_object* v_head_362_; lean_object* v___x_363_; 
lean_inc(v_tail_359_);
lean_dec(v_h__2_356_);
v_head_362_ = lean_ctor_get(v_x_354_, 0);
lean_inc(v_head_362_);
lean_dec_ref_known(v_x_354_, 2);
v___x_363_ = lean_apply_4(v_h__3_357_, v_x_353_, v_head_362_, v_tail_359_, lean_box(0));
return v___x_363_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter(lean_object* v_motive_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_h__1_367_, lean_object* v_h__2_368_, lean_object* v_h__3_369_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
lean_object* v___x_370_; 
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
v___x_370_ = lean_apply_1(v_h__1_367_, v_x_365_);
return v___x_370_;
}
else
{
lean_object* v_tail_371_; 
lean_dec(v_h__1_367_);
v_tail_371_ = lean_ctor_get(v_x_366_, 1);
if (lean_obj_tag(v_tail_371_) == 0)
{
lean_object* v_head_372_; lean_object* v___x_373_; 
lean_dec(v_h__3_369_);
v_head_372_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_head_372_);
lean_dec_ref_known(v_x_366_, 2);
v___x_373_ = lean_apply_2(v_h__2_368_, v_x_365_, v_head_372_);
return v___x_373_;
}
else
{
lean_object* v_head_374_; lean_object* v___x_375_; 
lean_inc(v_tail_371_);
lean_dec(v_h__2_368_);
v_head_374_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_head_374_);
lean_dec_ref_known(v_x_366_, 2);
v___x_375_ = lean_apply_4(v_h__3_369_, v_x_365_, v_head_374_, v_tail_371_, lean_box(0));
return v___x_375_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(lean_object* v_x_376_){
_start:
{
if (lean_obj_tag(v_x_376_) == 0)
{
uint8_t v___x_377_; 
v___x_377_ = 1;
return v___x_377_;
}
else
{
lean_object* v_head_378_; lean_object* v_tail_379_; uint32_t v___x_409_; uint32_t v___x_410_; uint8_t v___x_411_; 
v_head_378_ = lean_ctor_get(v_x_376_, 0);
v_tail_379_ = lean_ctor_get(v_x_376_, 1);
v___x_409_ = 65;
v___x_410_ = lean_unbox_uint32(v_head_378_);
v___x_411_ = lean_uint32_dec_le(v___x_409_, v___x_410_);
if (v___x_411_ == 0)
{
goto v___jp_401_;
}
else
{
uint32_t v___x_412_; uint32_t v___x_413_; uint8_t v___x_414_; 
v___x_412_ = 90;
v___x_413_ = lean_unbox_uint32(v_head_378_);
v___x_414_ = lean_uint32_dec_le(v___x_413_, v___x_412_);
if (v___x_414_ == 0)
{
goto v___jp_401_;
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
v___jp_380_:
{
uint32_t v___x_381_; uint32_t v___x_382_; uint8_t v___x_383_; 
v___x_381_ = 43;
v___x_382_ = lean_unbox_uint32(v_head_378_);
v___x_383_ = lean_uint32_dec_eq(v___x_382_, v___x_381_);
if (v___x_383_ == 0)
{
uint32_t v___x_384_; uint32_t v___x_385_; uint8_t v___x_386_; 
v___x_384_ = 45;
v___x_385_ = lean_unbox_uint32(v_head_378_);
v___x_386_ = lean_uint32_dec_eq(v___x_385_, v___x_384_);
if (v___x_386_ == 0)
{
uint32_t v___x_387_; uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_387_ = 46;
v___x_388_ = lean_unbox_uint32(v_head_378_);
v___x_389_ = lean_uint32_dec_eq(v___x_388_, v___x_387_);
if (v___x_389_ == 0)
{
return v___x_389_;
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
v___jp_393_:
{
uint32_t v___x_394_; uint32_t v___x_395_; uint8_t v___x_396_; 
v___x_394_ = 48;
v___x_395_ = lean_unbox_uint32(v_head_378_);
v___x_396_ = lean_uint32_dec_le(v___x_394_, v___x_395_);
if (v___x_396_ == 0)
{
goto v___jp_380_;
}
else
{
uint32_t v___x_397_; uint32_t v___x_398_; uint8_t v___x_399_; 
v___x_397_ = 57;
v___x_398_ = lean_unbox_uint32(v_head_378_);
v___x_399_ = lean_uint32_dec_le(v___x_398_, v___x_397_);
if (v___x_399_ == 0)
{
goto v___jp_380_;
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
}
v___jp_401_:
{
uint32_t v___x_402_; uint32_t v___x_403_; uint8_t v___x_404_; 
v___x_402_ = 97;
v___x_403_ = lean_unbox_uint32(v_head_378_);
v___x_404_ = lean_uint32_dec_le(v___x_402_, v___x_403_);
if (v___x_404_ == 0)
{
goto v___jp_393_;
}
else
{
uint32_t v___x_405_; uint32_t v___x_406_; uint8_t v___x_407_; 
v___x_405_ = 122;
v___x_406_ = lean_unbox_uint32(v_head_378_);
v___x_407_ = lean_uint32_dec_le(v___x_406_, v___x_405_);
if (v___x_407_ == 0)
{
goto v___jp_393_;
}
else
{
v_x_376_ = v_tail_379_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0___boxed(lean_object* v_x_416_){
_start:
{
uint8_t v_res_417_; lean_object* v_r_418_; 
v_res_417_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_x_416_);
lean_dec(v_x_416_);
v_r_418_ = lean_box(v_res_417_);
return v_r_418_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(lean_object* v_s_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_string_data(v_s_419_);
if (lean_obj_tag(v___x_420_) == 0)
{
uint8_t v___x_421_; 
v___x_421_ = 0;
return v___x_421_;
}
else
{
lean_object* v_head_422_; lean_object* v_tail_423_; uint32_t v___x_432_; uint32_t v___x_433_; uint8_t v___x_434_; 
v_head_422_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_head_422_);
v_tail_423_ = lean_ctor_get(v___x_420_, 1);
lean_inc(v_tail_423_);
lean_dec_ref_known(v___x_420_, 2);
v___x_432_ = 65;
v___x_433_ = lean_unbox_uint32(v_head_422_);
v___x_434_ = lean_uint32_dec_le(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
goto v___jp_424_;
}
else
{
uint32_t v___x_435_; uint32_t v___x_436_; uint8_t v___x_437_; 
v___x_435_ = 90;
v___x_436_ = lean_unbox_uint32(v_head_422_);
v___x_437_ = lean_uint32_dec_le(v___x_436_, v___x_435_);
if (v___x_437_ == 0)
{
goto v___jp_424_;
}
else
{
uint8_t v___x_438_; 
lean_dec(v_head_422_);
v___x_438_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_tail_423_);
lean_dec(v_tail_423_);
return v___x_438_;
}
}
v___jp_424_:
{
uint32_t v___x_425_; uint32_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = 97;
v___x_426_ = lean_unbox_uint32(v_head_422_);
v___x_427_ = lean_uint32_dec_le(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_dec(v_tail_423_);
lean_dec(v_head_422_);
return v___x_427_;
}
else
{
uint32_t v___x_428_; uint32_t v___x_429_; uint8_t v___x_430_; 
v___x_428_ = 122;
v___x_429_ = lean_unbox_uint32(v_head_422_);
lean_dec(v_head_422_);
v___x_430_ = lean_uint32_dec_le(v___x_429_, v___x_428_);
if (v___x_430_ == 0)
{
lean_dec(v_tail_423_);
return v___x_430_;
}
else
{
uint8_t v___x_431_; 
v___x_431_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_tail_423_);
lean_dec(v_tail_423_);
return v___x_431_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme___boxed(lean_object* v_s_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(v_s_439_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(uint8_t v___x_442_, lean_object* v_s_443_, lean_object* v_pos_444_){
_start:
{
lean_object* v_str_445_; lean_object* v_startInclusive_446_; lean_object* v_endExclusive_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v_decide_451_; 
v_str_445_ = lean_ctor_get(v_s_443_, 0);
v_startInclusive_446_ = lean_ctor_get(v_s_443_, 1);
v_endExclusive_447_ = lean_ctor_get(v_s_443_, 2);
v___x_448_ = lean_nat_add(v_startInclusive_446_, v_pos_444_);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_sub(v_endExclusive_447_, v___x_448_);
v_decide_451_ = lean_nat_dec_eq(v___x_449_, v___x_450_);
lean_dec(v___x_450_);
if (v_decide_451_ == 0)
{
uint32_t v___x_452_; uint32_t v___x_453_; uint8_t v___x_454_; 
v___x_452_ = lean_string_utf8_get_fast(v_str_445_, v___x_448_);
v___x_453_ = 47;
v___x_454_ = lean_uint32_dec_eq(v___x_452_, v___x_453_);
if (v___x_454_ == 0)
{
if (v___x_442_ == 0)
{
lean_dec(v___x_448_);
return v_pos_444_;
}
else
{
uint32_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = 92;
v___x_456_ = lean_uint32_dec_eq(v___x_452_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_457_ = lean_string_utf8_next_fast(v_str_445_, v___x_448_);
v___x_458_ = lean_nat_sub(v___x_457_, v___x_448_);
lean_dec(v___x_448_);
v___x_459_ = lean_nat_add(v_pos_444_, v___x_458_);
lean_dec(v___x_458_);
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_add(v_pos_444_, v___x_460_);
v___x_462_ = lean_nat_dec_le(v___x_461_, v___x_459_);
lean_dec(v___x_461_);
if (v___x_462_ == 0)
{
lean_dec(v___x_459_);
return v_pos_444_;
}
else
{
lean_dec(v_pos_444_);
v_pos_444_ = v___x_459_;
goto _start;
}
}
else
{
lean_dec(v___x_448_);
return v_pos_444_;
}
}
}
else
{
lean_dec(v___x_448_);
return v_pos_444_;
}
}
else
{
lean_dec(v___x_448_);
return v_pos_444_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1___boxed(lean_object* v___x_464_, lean_object* v_s_465_, lean_object* v_pos_466_){
_start:
{
uint8_t v___x_991__boxed_467_; lean_object* v_res_468_; 
v___x_991__boxed_467_ = lean_unbox(v___x_464_);
v_res_468_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v___x_991__boxed_467_, v_s_465_, v_pos_466_);
lean_dec_ref(v_s_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(lean_object* v_s_469_, lean_object* v_pos_470_){
_start:
{
lean_object* v_str_471_; lean_object* v_startInclusive_472_; lean_object* v_endExclusive_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v_decide_477_; 
v_str_471_ = lean_ctor_get(v_s_469_, 0);
v_startInclusive_472_ = lean_ctor_get(v_s_469_, 1);
v_endExclusive_473_ = lean_ctor_get(v_s_469_, 2);
v___x_474_ = lean_nat_add(v_startInclusive_472_, v_pos_470_);
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_nat_sub(v_endExclusive_473_, v___x_474_);
v_decide_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
lean_dec(v___x_476_);
if (v_decide_477_ == 0)
{
uint32_t v___x_478_; uint32_t v___x_479_; uint8_t v___x_480_; 
v___x_478_ = lean_string_utf8_get_fast(v_str_471_, v___x_474_);
v___x_479_ = 63;
v___x_480_ = lean_uint32_dec_eq(v___x_478_, v___x_479_);
if (v___x_480_ == 0)
{
uint32_t v___x_481_; uint8_t v___x_482_; 
v___x_481_ = 35;
v___x_482_ = lean_uint32_dec_eq(v___x_478_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_483_ = lean_string_utf8_next_fast(v_str_471_, v___x_474_);
v___x_484_ = lean_nat_sub(v___x_483_, v___x_474_);
lean_dec(v___x_474_);
v___x_485_ = lean_nat_add(v_pos_470_, v___x_484_);
lean_dec(v___x_484_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_pos_470_, v___x_486_);
v___x_488_ = lean_nat_dec_le(v___x_487_, v___x_485_);
lean_dec(v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v___x_485_);
return v_pos_470_;
}
else
{
lean_dec(v_pos_470_);
v_pos_470_ = v___x_485_;
goto _start;
}
}
else
{
lean_dec(v___x_474_);
return v_pos_470_;
}
}
else
{
lean_dec(v___x_474_);
return v_pos_470_;
}
}
else
{
lean_dec(v___x_474_);
return v_pos_470_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0___boxed(lean_object* v_s_490_, lean_object* v_pos_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v_s_490_, v_pos_491_);
lean_dec_ref(v_s_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(lean_object* v_url_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_beforeQuery_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = lean_string_utf8_byte_size(v_url_494_);
lean_inc_ref(v_url_494_);
v___x_497_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_497_, 0, v_url_494_);
lean_ctor_set(v___x_497_, 1, v___x_495_);
lean_ctor_set(v___x_497_, 2, v___x_496_);
v___x_498_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v___x_497_, v___x_495_);
lean_dec_ref_known(v___x_497_, 3);
v___x_499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_499_, 0, v_url_494_);
lean_ctor_set(v___x_499_, 1, v___x_495_);
lean_ctor_set(v___x_499_, 2, v___x_498_);
v_beforeQuery_500_ = l_String_Slice_toString(v___x_499_);
lean_dec_ref_known(v___x_499_, 3);
v___x_501_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0));
v___x_502_ = lean_box(0);
v___x_503_ = l_String_splitOnAux(v_beforeQuery_500_, v___x_501_, v___x_495_, v___x_495_, v___x_495_, v___x_502_);
if (lean_obj_tag(v___x_503_) == 1)
{
lean_object* v_tail_504_; 
v_tail_504_ = lean_ctor_get(v___x_503_, 1);
lean_inc(v_tail_504_);
if (lean_obj_tag(v_tail_504_) == 1)
{
lean_object* v_head_505_; uint8_t v___x_506_; 
v_head_505_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_head_505_);
lean_dec_ref_known(v___x_503_, 2);
v___x_506_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(v_head_505_);
if (v___x_506_ == 0)
{
lean_dec_ref_known(v_tail_504_, 2);
return v_beforeQuery_500_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
lean_dec_ref(v_beforeQuery_500_);
v___x_507_ = l_String_intercalate(v___x_501_, v_tail_504_);
v___x_508_ = lean_string_utf8_byte_size(v___x_507_);
lean_inc_ref(v___x_507_);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set(v___x_509_, 1, v___x_495_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
v___x_510_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v___x_506_, v___x_509_, v___x_495_);
lean_dec_ref_known(v___x_509_, 3);
v___x_511_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_511_, 0, v___x_507_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
lean_ctor_set(v___x_511_, 2, v___x_508_);
v___x_512_ = l_String_Slice_toString(v___x_511_);
lean_dec_ref_known(v___x_511_, 3);
return v___x_512_;
}
}
else
{
lean_dec(v_tail_504_);
lean_dec_ref_known(v___x_503_, 2);
return v_beforeQuery_500_;
}
}
else
{
lean_dec(v___x_503_);
return v_beforeQuery_500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(lean_object* v_r_513_){
_start:
{
lean_object* v___y_515_; lean_object* v_url_520_; lean_object* v_raw_521_; lean_object* v___x_522_; 
v_url_520_ = lean_ctor_get(v_r_513_, 1);
lean_inc_ref(v_url_520_);
lean_dec_ref(v_r_513_);
v_raw_521_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(v_url_520_);
lean_inc_ref(v_raw_521_);
v___x_522_ = lean_string_data(v_raw_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
v___y_515_ = v_raw_521_;
goto v___jp_514_;
}
else
{
lean_object* v_head_523_; lean_object* v_tail_524_; uint32_t v___x_525_; uint32_t v___x_526_; uint8_t v___x_527_; 
v_head_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_head_523_);
v_tail_524_ = lean_ctor_get(v___x_522_, 1);
lean_inc(v_tail_524_);
lean_dec_ref_known(v___x_522_, 2);
v___x_525_ = 47;
v___x_526_ = lean_unbox_uint32(v_head_523_);
v___x_527_ = lean_uint32_dec_eq(v___x_526_, v___x_525_);
if (v___x_527_ == 0)
{
uint32_t v___x_528_; uint32_t v___x_529_; uint8_t v___x_530_; 
v___x_528_ = 92;
v___x_529_ = lean_unbox_uint32(v_head_523_);
lean_dec(v_head_523_);
v___x_530_ = lean_uint32_dec_eq(v___x_529_, v___x_528_);
if (v___x_530_ == 0)
{
lean_dec(v_tail_524_);
v___y_515_ = v_raw_521_;
goto v___jp_514_;
}
else
{
lean_object* v___x_531_; 
lean_dec_ref(v_raw_521_);
v___x_531_ = lean_string_mk(v_tail_524_);
v___y_515_ = v___x_531_;
goto v___jp_514_;
}
}
else
{
lean_object* v___x_532_; 
lean_dec(v_head_523_);
lean_dec_ref(v_raw_521_);
v___x_532_ = lean_string_mk(v_tail_524_);
v___y_515_ = v___x_532_;
goto v___jp_514_;
}
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_516_ = lean_box(0);
v___x_517_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(v___y_515_);
v___x_518_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(v___x_516_, v___x_517_);
v___x_519_ = l_List_reverse___redArg(v___x_518_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_535_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_536_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_534_);
v___x_537_ = l_String_intercalate(v___x_535_, v___x_536_);
v___x_538_ = lean_string_append(v___x_535_, v___x_537_);
lean_dec_ref(v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_539_, lean_object* v_pos_540_){
_start:
{
lean_object* v_str_541_; lean_object* v_startInclusive_542_; lean_object* v_endExclusive_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v_decide_547_; 
v_str_541_ = lean_ctor_get(v_s_539_, 0);
v_startInclusive_542_ = lean_ctor_get(v_s_539_, 1);
v_endExclusive_543_ = lean_ctor_get(v_s_539_, 2);
v___x_544_ = lean_nat_add(v_startInclusive_542_, v_pos_540_);
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = lean_nat_sub(v_endExclusive_543_, v___x_544_);
v_decide_547_ = lean_nat_dec_eq(v___x_545_, v___x_546_);
lean_dec(v___x_546_);
if (v_decide_547_ == 0)
{
uint32_t v___x_548_; uint32_t v___x_549_; uint8_t v___x_550_; 
v___x_548_ = lean_string_utf8_get_fast(v_str_541_, v___x_544_);
v___x_549_ = 35;
v___x_550_ = lean_uint32_dec_eq(v___x_548_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_551_ = lean_string_utf8_next_fast(v_str_541_, v___x_544_);
v___x_552_ = lean_nat_sub(v___x_551_, v___x_544_);
lean_dec(v___x_544_);
v___x_553_ = lean_nat_add(v_pos_540_, v___x_552_);
lean_dec(v___x_552_);
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = lean_nat_add(v_pos_540_, v___x_554_);
v___x_556_ = lean_nat_dec_le(v___x_555_, v___x_553_);
lean_dec(v___x_555_);
if (v___x_556_ == 0)
{
lean_dec(v___x_553_);
return v_pos_540_;
}
else
{
lean_dec(v_pos_540_);
v_pos_540_ = v___x_553_;
goto _start;
}
}
else
{
lean_dec(v___x_544_);
return v_pos_540_;
}
}
else
{
lean_dec(v___x_544_);
return v_pos_540_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_558_, lean_object* v_pos_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_558_, v_pos_559_);
lean_dec_ref(v_s_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_562_){
_start:
{
lean_object* v_url_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_url_563_ = lean_ctor_get(v_r_562_, 1);
v___x_564_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = lean_box(0);
v___x_567_ = l_String_splitOnAux(v_url_563_, v___x_564_, v___x_565_, v___x_565_, v___x_565_, v___x_566_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v___x_568_; 
v___x_568_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_568_;
}
else
{
lean_object* v_tail_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_tail_569_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_tail_569_);
lean_dec_ref_known(v___x_567_, 2);
v___x_570_ = l_String_intercalate(v___x_564_, v_tail_569_);
v___x_571_ = lean_string_utf8_byte_size(v___x_570_);
lean_inc_ref(v___x_570_);
v___x_572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_565_);
lean_ctor_set(v___x_572_, 2, v___x_571_);
v___x_573_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_572_, v___x_565_);
lean_dec_ref_known(v___x_572_, 3);
v___x_574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_574_, 0, v___x_570_);
lean_ctor_set(v___x_574_, 1, v___x_565_);
lean_ctor_set(v___x_574_, 2, v___x_573_);
v___x_575_ = l_String_Slice_toString(v___x_574_);
lean_dec_ref_known(v___x_574_, 3);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lasm_Fetch_Request_query(v_r_576_);
lean_dec_ref(v_r_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
if (lean_obj_tag(v_a_579_) == 0)
{
lean_object* v___x_581_; 
v___x_581_ = lean_array_to_list(v_a_580_);
return v___x_581_;
}
else
{
lean_object* v_head_582_; lean_object* v_tail_583_; lean_object* v_val_585_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_head_582_ = lean_ctor_get(v_a_579_, 0);
v_tail_583_ = lean_ctor_get(v_a_579_, 1);
v___x_588_ = lean_string_utf8_byte_size(v_head_582_);
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_nat_dec_eq(v___x_588_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_592_ = lean_box(0);
v___x_593_ = l_String_splitOnAux(v_head_582_, v___x_591_, v___x_589_, v___x_589_, v___x_589_, v___x_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
v_a_579_ = v_tail_583_;
goto _start;
}
else
{
lean_object* v_head_595_; lean_object* v_tail_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_612_; 
v_head_595_ = lean_ctor_get(v___x_593_, 0);
v_tail_596_ = lean_ctor_get(v___x_593_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_612_ == 0)
{
v___x_598_ = v___x_593_;
v_isShared_599_ = v_isSharedCheck_612_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_tail_596_);
lean_inc(v_head_595_);
lean_dec(v___x_593_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_612_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = 1;
if (lean_obj_tag(v_tail_596_) == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_601_ = l_Lasm_Fetch_percentDecode(v_head_595_, v___x_600_);
lean_dec(v_head_595_);
v___x_602_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_599_ == 0)
{
lean_ctor_set_tag(v___x_598_, 0);
lean_ctor_set(v___x_598_, 1, v___x_602_);
lean_ctor_set(v___x_598_, 0, v___x_601_);
v___x_604_ = v___x_598_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
v_val_585_ = v___x_604_;
goto v___jp_584_;
}
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_606_ = l_Lasm_Fetch_percentDecode(v_head_595_, v___x_600_);
lean_dec(v_head_595_);
v___x_607_ = l_String_intercalate(v___x_591_, v_tail_596_);
v___x_608_ = l_Lasm_Fetch_percentDecode(v___x_607_, v___x_600_);
lean_dec_ref(v___x_607_);
if (v_isShared_599_ == 0)
{
lean_ctor_set_tag(v___x_598_, 0);
lean_ctor_set(v___x_598_, 1, v___x_608_);
lean_ctor_set(v___x_598_, 0, v___x_606_);
v___x_610_ = v___x_598_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
v_val_585_ = v___x_610_;
goto v___jp_584_;
}
}
}
}
}
else
{
v_a_579_ = v_tail_583_;
goto _start;
}
v___jp_584_:
{
lean_object* v___x_586_; 
v___x_586_ = lean_array_push(v_a_580_, v_val_585_);
v_a_579_ = v_tail_583_;
v_a_580_ = v___x_586_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_614_, v_a_615_);
lean_dec(v_a_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_619_ = l_Lasm_Fetch_Request_query(v_r_618_);
v___x_620_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_box(0);
v___x_623_ = l_String_splitOnAux(v___x_619_, v___x_620_, v___x_621_, v___x_621_, v___x_621_, v___x_622_);
lean_dec_ref(v___x_619_);
v___x_624_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_625_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_623_, v___x_624_);
lean_dec(v___x_623_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lasm_Fetch_Request_queryParams(v_r_626_);
lean_dec_ref(v_r_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_628_, lean_object* v_x_629_){
_start:
{
if (lean_obj_tag(v_x_629_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = lean_box(0);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v_fst_633_; lean_object* v_snd_634_; uint8_t v___x_635_; 
v_head_631_ = lean_ctor_get(v_x_629_, 0);
v_tail_632_ = lean_ctor_get(v_x_629_, 1);
v_fst_633_ = lean_ctor_get(v_head_631_, 0);
v_snd_634_ = lean_ctor_get(v_head_631_, 1);
v___x_635_ = lean_string_dec_eq(v_x_628_, v_fst_633_);
if (v___x_635_ == 0)
{
v_x_629_ = v_tail_632_;
goto _start;
}
else
{
lean_object* v___x_637_; 
lean_inc(v_snd_634_);
v___x_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_637_, 0, v_snd_634_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_638_, v_x_639_);
lean_dec(v_x_639_);
lean_dec_ref(v_x_638_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_641_, lean_object* v_name_642_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = l_Lasm_Fetch_Request_queryParams(v_r_641_);
v___x_644_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_642_, v___x_643_);
lean_dec(v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_645_, lean_object* v_name_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_645_, v_name_646_);
lean_dec_ref(v_name_646_);
lean_dec_ref(v_r_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_648_, lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_649_, v_x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_652_, lean_object* v_x_653_, lean_object* v_x_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_652_, v_x_653_, v_x_654_);
lean_dec(v_x_654_);
lean_dec_ref(v_x_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
if (lean_obj_tag(v_a_656_) == 0)
{
lean_object* v___x_658_; 
v___x_658_ = l_List_reverse___redArg(v_a_657_);
return v___x_658_;
}
else
{
lean_object* v_head_659_; lean_object* v_tail_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_670_; 
v_head_659_ = lean_ctor_get(v_a_656_, 0);
v_tail_660_ = lean_ctor_get(v_a_656_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v_a_656_);
if (v_isSharedCheck_670_ == 0)
{
v___x_662_ = v_a_656_;
v_isShared_663_ = v_isSharedCheck_670_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_tail_660_);
lean_inc(v_head_659_);
lean_dec(v_a_656_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_670_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_664_ = 0;
v___x_665_ = l_Lasm_Fetch_percentDecode(v_head_659_, v___x_664_);
lean_dec(v_head_659_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v_a_657_);
lean_ctor_set(v___x_662_, 0, v___x_665_);
v___x_667_ = v___x_662_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_a_657_);
v___x_667_ = v_reuseFailAlloc_669_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
v_a_656_ = v_tail_660_;
v_a_657_ = v___x_667_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
if (lean_obj_tag(v_a_671_) == 0)
{
lean_object* v___x_673_; 
v___x_673_ = l_List_reverse___redArg(v_a_672_);
return v___x_673_;
}
else
{
lean_object* v_head_674_; lean_object* v_tail_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_687_; 
v_head_674_ = lean_ctor_get(v_a_671_, 0);
v_tail_675_ = lean_ctor_get(v_a_671_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v_a_671_);
if (v_isSharedCheck_687_ == 0)
{
v___x_677_ = v_a_671_;
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_tail_675_);
lean_inc(v_head_674_);
lean_dec(v_a_671_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_679_ = lean_string_utf8_byte_size(v_head_674_);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_nat_dec_eq(v___x_679_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_683_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 1, v_a_672_);
v___x_683_ = v___x_677_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_head_674_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_a_672_);
v___x_683_ = v_reuseFailAlloc_685_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
v_a_671_ = v_tail_675_;
v_a_672_ = v___x_683_;
goto _start;
}
}
else
{
lean_del_object(v___x_677_);
lean_dec(v_head_674_);
v_a_671_ = v_tail_675_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_688_){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_689_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_688_);
v___x_690_ = lean_box(0);
v___x_691_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_689_, v___x_690_);
v___x_692_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_691_, v___x_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter___redArg(lean_object* v_x_693_, lean_object* v_h__1_694_, lean_object* v_h__2_695_){
_start:
{
if (lean_obj_tag(v_x_693_) == 0)
{
lean_object* v___x_696_; lean_object* v___x_697_; 
lean_dec(v_h__1_694_);
v___x_696_ = lean_box(0);
v___x_697_ = lean_apply_1(v_h__2_695_, v___x_696_);
return v___x_697_;
}
else
{
lean_object* v_head_698_; lean_object* v_tail_699_; lean_object* v___x_700_; 
lean_dec(v_h__2_695_);
v_head_698_ = lean_ctor_get(v_x_693_, 0);
lean_inc(v_head_698_);
v_tail_699_ = lean_ctor_get(v_x_693_, 1);
lean_inc(v_tail_699_);
lean_dec_ref_known(v_x_693_, 2);
v___x_700_ = lean_apply_2(v_h__1_694_, v_head_698_, v_tail_699_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter(lean_object* v_motive_701_, lean_object* v_x_702_, lean_object* v_h__1_703_, lean_object* v_h__2_704_){
_start:
{
if (lean_obj_tag(v_x_702_) == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec(v_h__1_703_);
v___x_705_ = lean_box(0);
v___x_706_ = lean_apply_1(v_h__2_704_, v___x_705_);
return v___x_706_;
}
else
{
lean_object* v_head_707_; lean_object* v_tail_708_; lean_object* v___x_709_; 
lean_dec(v_h__2_704_);
v_head_707_ = lean_ctor_get(v_x_702_, 0);
lean_inc(v_head_707_);
v_tail_708_ = lean_ctor_get(v_x_702_, 1);
lean_inc(v_tail_708_);
lean_dec_ref_known(v_x_702_, 2);
v___x_709_ = lean_apply_2(v_h__1_703_, v_head_707_, v_tail_708_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf(lean_object* v_url_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___f_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_712_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_713_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_714_ = l_ByteArray_empty;
v___f_715_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_716_, 0, v___x_712_);
lean_ctor_set(v___x_716_, 1, v_url_711_);
lean_ctor_set(v___x_716_, 2, v___x_713_);
lean_ctor_set(v___x_716_, 3, v___x_714_);
lean_ctor_set(v___x_716_, 4, v___f_715_);
v___x_717_ = l_Lasm_Fetch_Request_path(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_721_, lean_object* v_as_722_, size_t v_sz_723_, size_t v_i_724_, lean_object* v_b_725_){
_start:
{
uint8_t v___x_726_; 
v___x_726_ = lean_usize_dec_lt(v_i_724_, v_sz_723_);
if (v___x_726_ == 0)
{
lean_inc_ref(v_b_725_);
return v_b_725_;
}
else
{
lean_object* v_a_727_; lean_object* v_fst_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_a_727_ = lean_array_uget_borrowed(v_as_722_, v_i_724_);
v_fst_728_ = lean_ctor_get(v_a_727_, 0);
v___x_729_ = lean_box(0);
lean_inc(v_fst_728_);
v___x_730_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_728_);
v___x_731_ = lean_string_dec_eq(v___x_730_, v_n_721_);
lean_dec_ref(v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; size_t v___x_733_; size_t v___x_734_; 
v___x_732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_733_ = ((size_t)1ULL);
v___x_734_ = lean_usize_add(v_i_724_, v___x_733_);
v_i_724_ = v___x_734_;
v_b_725_ = v___x_732_;
goto _start;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
lean_inc(v_a_727_);
v___x_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_736_, 0, v_a_727_);
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v___x_729_);
return v___x_738_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_739_, lean_object* v_as_740_, lean_object* v_sz_741_, lean_object* v_i_742_, lean_object* v_b_743_){
_start:
{
size_t v_sz_boxed_744_; size_t v_i_boxed_745_; lean_object* v_res_746_; 
v_sz_boxed_744_ = lean_unbox_usize(v_sz_741_);
lean_dec(v_sz_741_);
v_i_boxed_745_ = lean_unbox_usize(v_i_742_);
lean_dec(v_i_742_);
v_res_746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_739_, v_as_740_, v_sz_boxed_744_, v_i_boxed_745_, v_b_743_);
lean_dec_ref(v_b_743_);
lean_dec_ref(v_as_740_);
lean_dec_ref(v_n_739_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_747_, lean_object* v_name_748_){
_start:
{
lean_object* v_headers_749_; lean_object* v_n_750_; lean_object* v___x_751_; lean_object* v___x_752_; size_t v_sz_753_; size_t v___x_754_; lean_object* v___x_755_; lean_object* v_fst_756_; 
v_headers_749_ = lean_ctor_get(v_r_747_, 2);
v_n_750_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_748_);
v___x_751_ = lean_box(0);
v___x_752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_753_ = lean_array_size(v_headers_749_);
v___x_754_ = ((size_t)0ULL);
v___x_755_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_750_, v_headers_749_, v_sz_753_, v___x_754_, v___x_752_);
lean_dec_ref(v_n_750_);
v_fst_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_fst_756_);
lean_dec_ref(v___x_755_);
if (lean_obj_tag(v_fst_756_) == 0)
{
return v___x_751_;
}
else
{
lean_object* v_val_757_; 
v_val_757_ = lean_ctor_get(v_fst_756_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v_fst_756_, 1);
if (lean_obj_tag(v_val_757_) == 0)
{
return v___x_751_;
}
else
{
lean_object* v_val_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_766_; 
v_val_758_ = lean_ctor_get(v_val_757_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_val_757_);
if (v_isSharedCheck_766_ == 0)
{
v___x_760_ = v_val_757_;
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_val_758_);
lean_dec(v_val_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_snd_762_; lean_object* v___x_764_; 
v_snd_762_ = lean_ctor_get(v_val_758_, 1);
lean_inc(v_snd_762_);
lean_dec(v_val_758_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v_snd_762_);
v___x_764_ = v___x_760_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_snd_762_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_767_, lean_object* v_name_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lasm_Fetch_Request_header_x3f(v_r_767_, v_name_768_);
lean_dec_ref(v_r_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_770_){
_start:
{
lean_object* v_body_771_; uint8_t v___x_772_; 
v_body_771_ = lean_ctor_get(v_r_770_, 3);
lean_inc_ref(v_body_771_);
lean_dec_ref(v_r_770_);
v___x_772_ = lean_string_validate_utf8(v_body_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; 
lean_dec_ref(v_body_771_);
v___x_773_ = lean_box(0);
return v___x_773_;
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_string_from_utf8_unchecked(v_body_771_);
v___x_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_776_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lasm_Fetch_Request_text_x3f(v_r_776_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_778_; 
v___x_778_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_778_;
}
else
{
lean_object* v_val_779_; 
v_val_779_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_val_779_);
lean_dec_ref_known(v___x_777_, 1);
return v_val_779_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_780_, lean_object* v_r_781_, lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v_r_781_);
lean_dec_ref(v_acc_780_);
v_a_784_ = lean_ctor_get(v_x_782_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v_x_782_);
if (v_isSharedCheck_792_ == 0)
{
v___x_786_ = v_x_782_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v_x_782_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_791_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_790_; 
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
return v___x_790_;
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_808_; 
v_a_793_ = lean_ctor_get(v_x_782_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v_x_782_);
if (v_isSharedCheck_808_ == 0)
{
v___x_795_ = v_x_782_;
v_isShared_796_ = v_isSharedCheck_808_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v_x_782_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_808_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
if (lean_obj_tag(v_a_793_) == 0)
{
lean_object* v___x_798_; 
lean_dec_ref(v_r_781_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v_acc_780_);
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_acc_780_);
v___x_798_ = v_reuseFailAlloc_800_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_799_; 
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
return v___x_799_;
}
}
else
{
lean_object* v_val_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_del_object(v___x_795_);
v_val_801_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v_a_793_, 1);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_byte_array_size(v_acc_780_);
v___x_804_ = lean_byte_array_size(v_val_801_);
v___x_805_ = 0;
v___x_806_ = lean_byte_array_copy_slice(v_val_801_, v___x_802_, v_acc_780_, v___x_803_, v___x_804_, v___x_805_);
lean_dec(v_val_801_);
v___x_807_ = l_Lasm_Fetch_Request_readAll_loop(v_r_781_, v___x_806_);
return v___x_807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_809_, lean_object* v_r_810_, lean_object* v_x_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_809_, v_r_810_, v_x_811_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_814_, lean_object* v_acc_815_){
_start:
{
lean_object* v_read_817_; lean_object* v___f_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_read_817_ = lean_ctor_get(v_r_814_, 4);
lean_inc_ref(v_read_817_);
v___f_818_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_818_, 0, v_acc_815_);
lean_closure_set(v___f_818_, 1, v_r_814_);
v___x_819_ = lean_unsigned_to_nat(0u);
v___x_820_ = 0;
v___x_821_ = lean_apply_1(v_read_817_, lean_box(0));
v___x_822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_819_, v___x_820_, v___x_821_, v___f_818_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_823_, lean_object* v_acc_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lasm_Fetch_Request_readAll_loop(v_r_823_, v_acc_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_827_){
_start:
{
lean_object* v_body_829_; lean_object* v___x_830_; 
v_body_829_ = lean_ctor_get(v_r_827_, 3);
lean_inc_ref(v_body_829_);
v___x_830_ = l_Lasm_Fetch_Request_readAll_loop(v_r_827_, v_body_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lasm_Fetch_Request_readAll(v_r_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_835_, lean_object* v_contentType_836_, uint16_t v_status_837_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_838_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
lean_ctor_set(v___x_839_, 1, v_contentType_836_);
v___x_840_ = lean_unsigned_to_nat(1u);
v___x_841_ = lean_mk_empty_array_with_capacity(v___x_840_);
v___x_842_ = lean_array_push(v___x_841_, v___x_839_);
v___x_843_ = lean_box(0);
v___x_844_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_844_, 0, v___x_842_);
lean_ctor_set(v___x_844_, 1, v_body_835_);
lean_ctor_set(v___x_844_, 2, v___x_843_);
lean_ctor_set_uint16(v___x_844_, sizeof(void*)*3, v_status_837_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_845_, lean_object* v_contentType_846_, lean_object* v_status_847_){
_start:
{
uint16_t v_status_boxed_848_; lean_object* v_res_849_; 
v_status_boxed_848_ = lean_unbox(v_status_847_);
v_res_849_ = l_Lasm_Fetch_Response_withBody(v_body_845_, v_contentType_846_, v_status_boxed_848_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_851_, uint16_t v_status_852_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = lean_string_to_utf8(v_body_851_);
v___x_854_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_855_ = l_Lasm_Fetch_Response_withBody(v___x_853_, v___x_854_, v_status_852_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_856_, lean_object* v_status_857_){
_start:
{
uint16_t v_status_boxed_858_; lean_object* v_res_859_; 
v_status_boxed_858_ = lean_unbox(v_status_857_);
v_res_859_ = l_Lasm_Fetch_Response_text(v_body_856_, v_status_boxed_858_);
lean_dec_ref(v_body_856_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_861_, uint16_t v_status_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_string_to_utf8(v_body_861_);
v___x_864_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_865_ = l_Lasm_Fetch_Response_withBody(v___x_863_, v___x_864_, v_status_862_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_866_, lean_object* v_status_867_){
_start:
{
uint16_t v_status_boxed_868_; lean_object* v_res_869_; 
v_status_boxed_868_ = lean_unbox(v_status_867_);
v_res_869_ = l_Lasm_Fetch_Response_html(v_body_866_, v_status_boxed_868_);
lean_dec_ref(v_body_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_871_, uint16_t v_status_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = lean_string_to_utf8(v_body_871_);
v___x_874_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_875_ = l_Lasm_Fetch_Response_withBody(v___x_873_, v___x_874_, v_status_872_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_876_, lean_object* v_status_877_){
_start:
{
uint16_t v_status_boxed_878_; lean_object* v_res_879_; 
v_status_boxed_878_ = lean_unbox(v_status_877_);
v_res_879_ = l_Lasm_Fetch_Response_json(v_body_876_, v_status_boxed_878_);
lean_dec_ref(v_body_876_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_880_, lean_object* v_contentType_881_, uint16_t v_status_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Lasm_Fetch_Response_withBody(v_body_880_, v_contentType_881_, v_status_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_884_, lean_object* v_contentType_885_, lean_object* v_status_886_){
_start:
{
uint16_t v_status_boxed_887_; lean_object* v_res_888_; 
v_status_boxed_887_ = lean_unbox(v_status_886_);
v_res_888_ = l_Lasm_Fetch_Response_bytes(v_body_884_, v_contentType_885_, v_status_boxed_887_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_890_, uint16_t v_status_891_){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_892_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
lean_ctor_set(v___x_893_, 1, v_location_890_);
v___x_894_ = lean_unsigned_to_nat(1u);
v___x_895_ = lean_mk_empty_array_with_capacity(v___x_894_);
v___x_896_ = lean_array_push(v___x_895_, v___x_893_);
v___x_897_ = l_ByteArray_empty;
v___x_898_ = lean_box(0);
v___x_899_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_899_, 0, v___x_896_);
lean_ctor_set(v___x_899_, 1, v___x_897_);
lean_ctor_set(v___x_899_, 2, v___x_898_);
lean_ctor_set_uint16(v___x_899_, sizeof(void*)*3, v_status_891_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_900_, lean_object* v_status_901_){
_start:
{
uint16_t v_status_boxed_902_; lean_object* v_res_903_; 
v_status_boxed_902_ = lean_unbox(v_status_901_);
v_res_903_ = l_Lasm_Fetch_Response_redirect(v_location_900_, v_status_boxed_902_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_904_, lean_object* v_contentType_905_, uint16_t v_status_906_){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_907_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v_contentType_905_);
v___x_909_ = lean_unsigned_to_nat(1u);
v___x_910_ = lean_mk_empty_array_with_capacity(v___x_909_);
v___x_911_ = lean_array_push(v___x_910_, v___x_908_);
v___x_912_ = l_ByteArray_empty;
v___x_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_913_, 0, v_produce_904_);
v___x_914_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_914_, 0, v___x_911_);
lean_ctor_set(v___x_914_, 1, v___x_912_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
lean_ctor_set_uint16(v___x_914_, sizeof(void*)*3, v_status_906_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_915_, lean_object* v_contentType_916_, lean_object* v_status_917_){
_start:
{
uint16_t v_status_boxed_918_; lean_object* v_res_919_; 
v_status_boxed_918_ = lean_unbox(v_status_917_);
v_res_919_ = l_Lasm_Fetch_Response_streaming(v_produce_915_, v_contentType_916_, v_status_boxed_918_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_920_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_921_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_922_ = l_ByteArray_empty;
v___x_923_ = lean_box(0);
v___x_924_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_924_, 0, v___x_921_);
lean_ctor_set(v___x_924_, 1, v___x_922_);
lean_ctor_set(v___x_924_, 2, v___x_923_);
lean_ctor_set_uint16(v___x_924_, sizeof(void*)*3, v_status_920_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_925_){
_start:
{
uint16_t v_status_boxed_926_; lean_object* v_res_927_; 
v_status_boxed_926_ = lean_unbox(v_status_925_);
v_res_927_ = l_Lasm_Fetch_Response_empty(v_status_boxed_926_);
return v_res_927_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_929_ = 404;
v___x_930_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_931_ = l_Lasm_Fetch_Response_text(v___x_930_, v___x_929_);
return v___x_931_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_933_, lean_object* v_name_934_, lean_object* v_value_935_){
_start:
{
uint16_t v_status_936_; lean_object* v_headers_937_; lean_object* v_body_938_; lean_object* v_stream_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_948_; 
v_status_936_ = lean_ctor_get_uint16(v_r_933_, sizeof(void*)*3);
v_headers_937_ = lean_ctor_get(v_r_933_, 0);
v_body_938_ = lean_ctor_get(v_r_933_, 1);
v_stream_939_ = lean_ctor_get(v_r_933_, 2);
v_isSharedCheck_948_ = !lean_is_exclusive(v_r_933_);
if (v_isSharedCheck_948_ == 0)
{
v___x_941_ = v_r_933_;
v_isShared_942_ = v_isSharedCheck_948_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_stream_939_);
lean_inc(v_body_938_);
lean_inc(v_headers_937_);
lean_dec(v_r_933_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_948_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_943_, 0, v_name_934_);
lean_ctor_set(v___x_943_, 1, v_value_935_);
v___x_944_ = lean_array_push(v_headers_937_, v___x_943_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v___x_944_);
v___x_946_ = v___x_941_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v_body_938_);
lean_ctor_set(v_reuseFailAlloc_947_, 2, v_stream_939_);
lean_ctor_set_uint16(v_reuseFailAlloc_947_, sizeof(void*)*3, v_status_936_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_949_, uint16_t v_status_950_){
_start:
{
lean_object* v_headers_951_; lean_object* v_body_952_; lean_object* v_stream_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
v_headers_951_ = lean_ctor_get(v_r_949_, 0);
v_body_952_ = lean_ctor_get(v_r_949_, 1);
v_stream_953_ = lean_ctor_get(v_r_949_, 2);
v_isSharedCheck_960_ = !lean_is_exclusive(v_r_949_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v_r_949_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_stream_953_);
lean_inc(v_body_952_);
lean_inc(v_headers_951_);
lean_dec(v_r_949_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
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
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_headers_951_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_body_952_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v_stream_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_ctor_set_uint16(v___x_958_, sizeof(void*)*3, v_status_950_);
return v___x_958_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_961_, lean_object* v_status_962_){
_start:
{
uint16_t v_status_boxed_963_; lean_object* v_res_964_; 
v_status_boxed_963_ = lean_unbox(v_status_962_);
v_res_964_ = l_Lasm_Fetch_Response_withStatus(v_r_961_, v_status_boxed_963_);
return v_res_964_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0));
v___x_967_ = lean_string_data(v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(lean_object* v_l_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
if (lean_obj_tag(v_a_969_) == 0)
{
lean_dec_ref(v_a_970_);
lean_inc(v_l_968_);
return v_l_968_;
}
else
{
lean_object* v_head_971_; lean_object* v_tail_972_; uint32_t v___x_995_; uint32_t v___x_996_; uint8_t v___x_997_; 
v_head_971_ = lean_ctor_get(v_a_969_, 0);
lean_inc(v_head_971_);
v_tail_972_ = lean_ctor_get(v_a_969_, 1);
lean_inc(v_tail_972_);
lean_dec_ref_known(v_a_969_, 2);
v___x_995_ = 65;
v___x_996_ = lean_unbox_uint32(v_head_971_);
v___x_997_ = lean_uint32_dec_le(v___x_995_, v___x_996_);
if (v___x_997_ == 0)
{
goto v___jp_988_;
}
else
{
uint32_t v___x_998_; uint32_t v___x_999_; uint8_t v___x_1000_; 
v___x_998_ = 90;
v___x_999_ = lean_unbox_uint32(v_head_971_);
v___x_1000_ = lean_uint32_dec_le(v___x_999_, v___x_998_);
if (v___x_1000_ == 0)
{
goto v___jp_988_;
}
else
{
goto v___jp_973_;
}
}
v___jp_973_:
{
lean_object* v___x_974_; 
v___x_974_ = lean_array_push(v_a_970_, v_head_971_);
v_a_969_ = v_tail_972_;
v_a_970_ = v___x_974_;
goto _start;
}
v___jp_976_:
{
lean_object* v___x_977_; uint32_t v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1, &l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1_once, _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1);
v___x_978_ = lean_unbox_uint32(v_head_971_);
v___x_979_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__1(v___x_978_, v___x_977_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; 
lean_dec(v_tail_972_);
lean_dec(v_head_971_);
v___x_980_ = lean_array_to_list(v_a_970_);
return v___x_980_;
}
else
{
goto v___jp_973_;
}
}
v___jp_981_:
{
uint32_t v___x_982_; uint32_t v___x_983_; uint8_t v___x_984_; 
v___x_982_ = 48;
v___x_983_ = lean_unbox_uint32(v_head_971_);
v___x_984_ = lean_uint32_dec_le(v___x_982_, v___x_983_);
if (v___x_984_ == 0)
{
goto v___jp_976_;
}
else
{
uint32_t v___x_985_; uint32_t v___x_986_; uint8_t v___x_987_; 
v___x_985_ = 57;
v___x_986_ = lean_unbox_uint32(v_head_971_);
v___x_987_ = lean_uint32_dec_le(v___x_986_, v___x_985_);
if (v___x_987_ == 0)
{
goto v___jp_976_;
}
else
{
goto v___jp_973_;
}
}
}
v___jp_988_:
{
uint32_t v___x_989_; uint32_t v___x_990_; uint8_t v___x_991_; 
v___x_989_ = 97;
v___x_990_ = lean_unbox_uint32(v_head_971_);
v___x_991_ = lean_uint32_dec_le(v___x_989_, v___x_990_);
if (v___x_991_ == 0)
{
goto v___jp_981_;
}
else
{
uint32_t v___x_992_; uint32_t v___x_993_; uint8_t v___x_994_; 
v___x_992_ = 122;
v___x_993_ = lean_unbox_uint32(v_head_971_);
v___x_994_ = lean_uint32_dec_le(v___x_993_, v___x_992_);
if (v___x_994_ == 0)
{
goto v___jp_981_;
}
else
{
goto v___jp_973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___boxed(lean_object* v_l_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_l_1001_, v_a_1002_, v_a_1003_);
lean_dec(v_l_1001_);
return v_res_1004_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = 61;
v___x_1008_ = lean_box_uint32(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1;
v___x_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(lean_object* v_s_1011_){
_start:
{
lean_object* v___x_1012_; lean_object* v_name_1013_; uint8_t v___x_1014_; 
v___x_1012_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0));
lean_inc(v_s_1011_);
v_name_1013_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_s_1011_, v_s_1011_, v___x_1012_);
v___x_1014_ = l_List_isEmpty___redArg(v_name_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1015_ = l_List_lengthTR___redArg(v_name_1013_);
lean_dec(v_name_1013_);
v___x_1016_ = l_List_drop___redArg(v___x_1015_, v_s_1011_);
lean_dec(v_s_1011_);
v___x_1017_ = l_List_head_x3f___redArg(v___x_1016_);
lean_dec(v___x_1016_);
v___x_1018_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1, &l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1);
v___x_1019_ = l_Option_instBEq_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1017_, v___x_1018_);
lean_dec(v___x_1017_);
return v___x_1019_;
}
else
{
uint8_t v___x_1020_; 
lean_dec(v_name_1013_);
lean_dec(v_s_1011_);
v___x_1020_ = 0;
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___boxed(lean_object* v_s_1021_){
_start:
{
uint8_t v_res_1022_; lean_object* v_r_1023_; 
v_res_1022_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_s_1021_);
v_r_1023_ = lean_box(v_res_1022_);
return v_r_1023_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(lean_object* v_x_1024_){
_start:
{
if (lean_obj_tag(v_x_1024_) == 0)
{
return v_x_1024_;
}
else
{
lean_object* v_head_1025_; lean_object* v_tail_1026_; uint32_t v___x_1027_; uint32_t v___x_1028_; uint8_t v___x_1029_; 
v_head_1025_ = lean_ctor_get(v_x_1024_, 0);
v_tail_1026_ = lean_ctor_get(v_x_1024_, 1);
v___x_1027_ = 32;
v___x_1028_ = lean_unbox_uint32(v_head_1025_);
v___x_1029_ = lean_uint32_dec_eq(v___x_1028_, v___x_1027_);
if (v___x_1029_ == 0)
{
uint32_t v___x_1030_; uint32_t v___x_1031_; uint8_t v___x_1032_; 
v___x_1030_ = 9;
v___x_1031_ = lean_unbox_uint32(v_head_1025_);
v___x_1032_ = lean_uint32_dec_eq(v___x_1031_, v___x_1030_);
if (v___x_1032_ == 0)
{
uint32_t v___x_1033_; uint32_t v___x_1034_; uint8_t v___x_1035_; 
v___x_1033_ = 13;
v___x_1034_ = lean_unbox_uint32(v_head_1025_);
v___x_1035_ = lean_uint32_dec_eq(v___x_1034_, v___x_1033_);
if (v___x_1035_ == 0)
{
uint32_t v___x_1036_; uint32_t v___x_1037_; uint8_t v___x_1038_; 
v___x_1036_ = 10;
v___x_1037_ = lean_unbox_uint32(v_head_1025_);
v___x_1038_ = lean_uint32_dec_eq(v___x_1037_, v___x_1036_);
if (v___x_1038_ == 0)
{
lean_inc_ref(v_x_1024_);
return v_x_1024_;
}
else
{
v_x_1024_ = v_tail_1026_;
goto _start;
}
}
else
{
v_x_1024_ = v_tail_1026_;
goto _start;
}
}
else
{
v_x_1024_ = v_tail_1026_;
goto _start;
}
}
else
{
v_x_1024_ = v_tail_1026_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0___boxed(lean_object* v_x_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v_x_1043_);
lean_dec(v_x_1043_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(lean_object* v_x_1047_, lean_object* v_x_1048_){
_start:
{
if (lean_obj_tag(v_x_1048_) == 0)
{
return v_x_1047_;
}
else
{
lean_object* v_head_1049_; lean_object* v_tail_1050_; lean_object* v___x_1051_; lean_object* v_next_1052_; uint8_t v___x_1053_; 
v_head_1049_ = lean_ctor_get(v_x_1048_, 0);
lean_inc_n(v_head_1049_, 2);
v_tail_1050_ = lean_ctor_get(v_x_1048_, 1);
lean_inc(v_tail_1050_);
lean_dec_ref_known(v_x_1048_, 2);
v___x_1051_ = lean_string_data(v_head_1049_);
v_next_1052_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1051_);
lean_dec(v___x_1051_);
lean_inc(v_next_1052_);
v___x_1053_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_dec(v_next_1052_);
v___x_1054_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1055_ = lean_string_append(v_x_1047_, v___x_1054_);
v___x_1056_ = lean_string_append(v___x_1055_, v_head_1049_);
lean_dec(v_head_1049_);
v_x_1047_ = v___x_1056_;
v_x_1048_ = v_tail_1050_;
goto _start;
}
else
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
lean_dec(v_head_1049_);
v___x_1058_ = lean_string_data(v_x_1047_);
v___x_1059_ = l_List_reverse___redArg(v___x_1058_);
v___x_1060_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1059_);
lean_dec(v___x_1059_);
v___x_1061_ = l_List_reverse___redArg(v___x_1060_);
v___x_1062_ = lean_string_mk(v___x_1061_);
v___x_1063_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_1064_ = lean_string_append(v___x_1062_, v___x_1063_);
v___x_1065_ = lean_string_mk(v_next_1052_);
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
lean_dec_ref(v___x_1065_);
v_x_1047_ = v___x_1066_;
v_x_1048_ = v_tail_1050_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(lean_object* v_x_1068_, lean_object* v_x_1069_){
_start:
{
if (lean_obj_tag(v_x_1069_) == 0)
{
return v_x_1068_;
}
else
{
lean_object* v_head_1070_; lean_object* v_tail_1071_; lean_object* v___x_1072_; lean_object* v_next_1073_; uint8_t v___x_1074_; 
v_head_1070_ = lean_ctor_get(v_x_1069_, 0);
lean_inc_n(v_head_1070_, 2);
v_tail_1071_ = lean_ctor_get(v_x_1069_, 1);
lean_inc(v_tail_1071_);
lean_dec_ref_known(v_x_1069_, 2);
v___x_1072_ = lean_string_data(v_head_1070_);
v_next_1073_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1072_);
lean_dec(v___x_1072_);
lean_inc(v_next_1073_);
v___x_1074_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
lean_dec(v_next_1073_);
v___x_1075_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1076_ = lean_string_append(v_x_1068_, v___x_1075_);
v___x_1077_ = lean_string_append(v___x_1076_, v_head_1070_);
lean_dec(v_head_1070_);
v___x_1078_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1077_, v_tail_1071_);
return v___x_1078_;
}
else
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
lean_dec(v_head_1070_);
v___x_1079_ = lean_string_data(v_x_1068_);
v___x_1080_ = l_List_reverse___redArg(v___x_1079_);
v___x_1081_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1080_);
lean_dec(v___x_1080_);
v___x_1082_ = l_List_reverse___redArg(v___x_1081_);
v___x_1083_ = lean_string_mk(v___x_1082_);
v___x_1084_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_1085_ = lean_string_append(v___x_1083_, v___x_1084_);
v___x_1086_ = lean_string_mk(v_next_1073_);
v___x_1087_ = lean_string_append(v___x_1085_, v___x_1086_);
lean_dec_ref(v___x_1086_);
v___x_1088_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1087_, v_tail_1071_);
return v___x_1088_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas(lean_object* v_value_1089_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1090_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = lean_box(0);
v___x_1093_ = l_String_splitOnAux(v_value_1089_, v___x_1090_, v___x_1091_, v___x_1091_, v___x_1091_, v___x_1092_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_inc_ref(v_value_1089_);
return v_value_1089_;
}
else
{
lean_object* v_head_1094_; lean_object* v_tail_1095_; lean_object* v___x_1096_; 
v_head_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_head_1094_);
v_tail_1095_ = lean_ctor_get(v___x_1093_, 1);
lean_inc(v_tail_1095_);
lean_dec_ref_known(v___x_1093_, 2);
v___x_1096_ = l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(v_head_1094_, v_tail_1095_);
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas___boxed(lean_object* v_value_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_Fetch_splitCookieCommas(v_value_1097_);
lean_dec_ref(v_value_1097_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(lean_object* v_as_1100_, size_t v_i_1101_, size_t v_stop_1102_, lean_object* v_b_1103_){
_start:
{
lean_object* v___y_1105_; uint8_t v___x_1109_; 
v___x_1109_ = lean_usize_dec_eq(v_i_1101_, v_stop_1102_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; lean_object* v_fst_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1110_ = lean_array_uget_borrowed(v_as_1100_, v_i_1101_);
v_fst_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_fst_1111_);
v___x_1112_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1111_);
v___x_1113_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1114_ = lean_string_dec_eq(v___x_1112_, v___x_1113_);
lean_dec_ref(v___x_1112_);
if (v___x_1114_ == 0)
{
v___y_1105_ = v_b_1103_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1115_; 
lean_inc(v___x_1110_);
v___x_1115_ = lean_array_push(v_b_1103_, v___x_1110_);
v___y_1105_ = v___x_1115_;
goto v___jp_1104_;
}
}
else
{
return v_b_1103_;
}
v___jp_1104_:
{
size_t v___x_1106_; size_t v___x_1107_; 
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_add(v_i_1101_, v___x_1106_);
v_i_1101_ = v___x_1107_;
v_b_1103_ = v___y_1105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___boxed(lean_object* v_as_1116_, lean_object* v_i_1117_, lean_object* v_stop_1118_, lean_object* v_b_1119_){
_start:
{
size_t v_i_boxed_1120_; size_t v_stop_boxed_1121_; lean_object* v_res_1122_; 
v_i_boxed_1120_ = lean_unbox_usize(v_i_1117_);
lean_dec(v_i_1117_);
v_stop_boxed_1121_ = lean_unbox_usize(v_stop_1118_);
lean_dec(v_stop_1118_);
v_res_1122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1116_, v_i_boxed_1120_, v_stop_boxed_1121_, v_b_1119_);
lean_dec_ref(v_as_1116_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(lean_object* v_as_1123_, size_t v_i_1124_, size_t v_stop_1125_, lean_object* v_b_1126_){
_start:
{
lean_object* v___y_1128_; uint8_t v___x_1132_; 
v___x_1132_ = lean_usize_dec_eq(v_i_1124_, v_stop_1125_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v_fst_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1133_ = lean_array_uget_borrowed(v_as_1123_, v_i_1124_);
v_fst_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_fst_1134_);
v___x_1135_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1134_);
v___x_1136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1137_ = lean_string_dec_eq(v___x_1135_, v___x_1136_);
lean_dec_ref(v___x_1135_);
if (v___x_1137_ == 0)
{
v___y_1128_ = v_b_1126_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1138_; 
lean_inc(v___x_1133_);
v___x_1138_ = lean_array_push(v_b_1126_, v___x_1133_);
v___y_1128_ = v___x_1138_;
goto v___jp_1127_;
}
}
else
{
return v_b_1126_;
}
v___jp_1127_:
{
size_t v___x_1129_; size_t v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = ((size_t)1ULL);
v___x_1130_ = lean_usize_add(v_i_1124_, v___x_1129_);
v___x_1131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1123_, v___x_1130_, v_stop_1125_, v___y_1128_);
return v___x_1131_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3___boxed(lean_object* v_as_1139_, lean_object* v_i_1140_, lean_object* v_stop_1141_, lean_object* v_b_1142_){
_start:
{
size_t v_i_boxed_1143_; size_t v_stop_boxed_1144_; lean_object* v_res_1145_; 
v_i_boxed_1143_ = lean_unbox_usize(v_i_1140_);
lean_dec(v_i_1140_);
v_stop_boxed_1144_ = lean_unbox_usize(v_stop_1141_);
lean_dec(v_stop_1141_);
v_res_1145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_as_1139_, v_i_boxed_1143_, v_stop_boxed_1144_, v_b_1142_);
lean_dec_ref(v_as_1139_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(size_t v_sz_1146_, size_t v_i_1147_, lean_object* v_bs_1148_){
_start:
{
uint8_t v___x_1149_; 
v___x_1149_ = lean_usize_dec_lt(v_i_1147_, v_sz_1146_);
if (v___x_1149_ == 0)
{
return v_bs_1148_;
}
else
{
lean_object* v_v_1150_; lean_object* v_snd_1151_; lean_object* v___x_1152_; lean_object* v_bs_x27_1153_; lean_object* v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
v_v_1150_ = lean_array_uget_borrowed(v_bs_1148_, v_i_1147_);
v_snd_1151_ = lean_ctor_get(v_v_1150_, 1);
lean_inc(v_snd_1151_);
v___x_1152_ = lean_unsigned_to_nat(0u);
v_bs_x27_1153_ = lean_array_uset(v_bs_1148_, v_i_1147_, v___x_1152_);
v___x_1154_ = l_Lasm_Fetch_splitCookieCommas(v_snd_1151_);
lean_dec(v_snd_1151_);
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1147_, v___x_1155_);
v___x_1157_ = lean_array_uset(v_bs_x27_1153_, v_i_1147_, v___x_1154_);
v_i_1147_ = v___x_1156_;
v_bs_1148_ = v___x_1157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1___boxed(lean_object* v_sz_1159_, lean_object* v_i_1160_, lean_object* v_bs_1161_){
_start:
{
size_t v_sz_boxed_1162_; size_t v_i_boxed_1163_; lean_object* v_res_1164_; 
v_sz_boxed_1162_ = lean_unbox_usize(v_sz_1159_);
lean_dec(v_sz_1159_);
v_i_boxed_1163_ = lean_unbox_usize(v_i_1160_);
lean_dec(v_i_1160_);
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_boxed_1162_, v_i_boxed_1163_, v_bs_1161_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(lean_object* v___y_1165_, lean_object* v_as_1166_, size_t v_sz_1167_, size_t v_i_1168_, lean_object* v_b_1169_){
_start:
{
lean_object* v_a_1171_; uint8_t v___x_1175_; 
v___x_1175_ = lean_usize_dec_lt(v_i_1168_, v_sz_1167_);
if (v___x_1175_ == 0)
{
lean_dec_ref(v___y_1165_);
return v_b_1169_;
}
else
{
lean_object* v_fst_1176_; lean_object* v_snd_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1211_; 
v_fst_1176_ = lean_ctor_get(v_b_1169_, 0);
v_snd_1177_ = lean_ctor_get(v_b_1169_, 1);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_b_1169_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1179_ = v_b_1169_;
v_isShared_1180_ = v_isSharedCheck_1211_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_snd_1177_);
lean_inc(v_fst_1176_);
lean_dec(v_b_1169_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1211_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v_a_1181_; lean_object* v_fst_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v_placed_1185_; 
v_a_1181_ = lean_array_uget(v_as_1166_, v_i_1168_);
v_fst_1182_ = lean_ctor_get(v_a_1181_, 0);
lean_inc(v_fst_1182_);
v___x_1183_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1182_);
v___x_1184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1185_ = lean_string_dec_eq(v___x_1183_, v___x_1184_);
lean_dec_ref(v___x_1183_);
if (v_placed_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_array_push(v_fst_1176_, v_a_1181_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v___x_1186_);
v___x_1188_ = v___x_1179_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_snd_1177_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
v_a_1171_ = v___x_1188_;
goto v___jp_1170_;
}
}
else
{
lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1208_; 
lean_inc(v_fst_1182_);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_a_1181_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; lean_object* v_unused_1210_; 
v_unused_1209_ = lean_ctor_get(v_a_1181_, 1);
lean_dec(v_unused_1209_);
v_unused_1210_ = lean_ctor_get(v_a_1181_, 0);
lean_dec(v_unused_1210_);
v___x_1191_ = v_a_1181_;
v_isShared_1192_ = v_isSharedCheck_1208_;
goto v_resetjp_1190_;
}
else
{
lean_dec(v_a_1181_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1208_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
uint8_t v___x_1193_; 
v___x_1193_ = lean_unbox(v_snd_1177_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
lean_dec(v_snd_1177_);
v___x_1194_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1165_);
v___x_1195_ = lean_array_to_list(v___y_1165_);
v___x_1196_ = l_String_intercalate(v___x_1194_, v___x_1195_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1196_);
v___x_1198_ = v___x_1191_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_fst_1182_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1199_ = lean_array_push(v_fst_1176_, v___x_1198_);
v___x_1200_ = lean_box(v_placed_1185_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v___x_1200_);
lean_ctor_set(v___x_1179_, 0, v___x_1199_);
v___x_1202_ = v___x_1179_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1199_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
v_a_1171_ = v___x_1202_;
goto v___jp_1170_;
}
}
}
else
{
lean_object* v___x_1206_; 
lean_dec(v_fst_1182_);
lean_del_object(v___x_1179_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v_snd_1177_);
lean_ctor_set(v___x_1191_, 0, v_fst_1176_);
v___x_1206_ = v___x_1191_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_fst_1176_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_snd_1177_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
v_a_1171_ = v___x_1206_;
goto v___jp_1170_;
}
}
}
}
}
}
v___jp_1170_:
{
size_t v___x_1172_; size_t v___x_1173_; 
v___x_1172_ = ((size_t)1ULL);
v___x_1173_ = lean_usize_add(v_i_1168_, v___x_1172_);
v_i_1168_ = v___x_1173_;
v_b_1169_ = v_a_1171_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0___boxed(lean_object* v___y_1212_, lean_object* v_as_1213_, lean_object* v_sz_1214_, lean_object* v_i_1215_, lean_object* v_b_1216_){
_start:
{
size_t v_sz_boxed_1217_; size_t v_i_boxed_1218_; lean_object* v_res_1219_; 
v_sz_boxed_1217_ = lean_unbox_usize(v_sz_1214_);
lean_dec(v_sz_1214_);
v_i_boxed_1218_ = lean_unbox_usize(v_i_1215_);
lean_dec(v_i_1215_);
v_res_1219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1212_, v_as_1213_, v_sz_boxed_1217_, v_i_boxed_1218_, v_b_1216_);
lean_dec_ref(v_as_1213_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(lean_object* v___y_1220_, lean_object* v_as_1221_, size_t v_sz_1222_, size_t v_i_1223_, lean_object* v_b_1224_){
_start:
{
lean_object* v_a_1226_; uint8_t v___x_1230_; 
v___x_1230_ = lean_usize_dec_lt(v_i_1223_, v_sz_1222_);
if (v___x_1230_ == 0)
{
lean_dec_ref(v___y_1220_);
return v_b_1224_;
}
else
{
lean_object* v_fst_1231_; lean_object* v_snd_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1266_; 
v_fst_1231_ = lean_ctor_get(v_b_1224_, 0);
v_snd_1232_ = lean_ctor_get(v_b_1224_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_b_1224_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1234_ = v_b_1224_;
v_isShared_1235_ = v_isSharedCheck_1266_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_snd_1232_);
lean_inc(v_fst_1231_);
lean_dec(v_b_1224_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1266_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_a_1236_; lean_object* v_fst_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v_placed_1240_; 
v_a_1236_ = lean_array_uget(v_as_1221_, v_i_1223_);
v_fst_1237_ = lean_ctor_get(v_a_1236_, 0);
lean_inc(v_fst_1237_);
v___x_1238_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1237_);
v___x_1239_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1240_ = lean_string_dec_eq(v___x_1238_, v___x_1239_);
lean_dec_ref(v___x_1238_);
if (v_placed_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1241_ = lean_array_push(v_fst_1231_, v_a_1236_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1241_);
v___x_1243_ = v___x_1234_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_snd_1232_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
v_a_1226_ = v___x_1243_;
goto v___jp_1225_;
}
}
else
{
lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1263_; 
lean_inc(v_fst_1237_);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_a_1236_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; lean_object* v_unused_1265_; 
v_unused_1264_ = lean_ctor_get(v_a_1236_, 1);
lean_dec(v_unused_1264_);
v_unused_1265_ = lean_ctor_get(v_a_1236_, 0);
lean_dec(v_unused_1265_);
v___x_1246_ = v_a_1236_;
v_isShared_1247_ = v_isSharedCheck_1263_;
goto v_resetjp_1245_;
}
else
{
lean_dec(v_a_1236_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1263_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
uint8_t v___x_1248_; 
v___x_1248_ = lean_unbox(v_snd_1232_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
lean_dec(v_snd_1232_);
v___x_1249_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1220_);
v___x_1250_ = lean_array_to_list(v___y_1220_);
v___x_1251_ = l_String_intercalate(v___x_1249_, v___x_1250_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 1, v___x_1251_);
v___x_1253_ = v___x_1246_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_fst_1237_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___x_1251_);
v___x_1253_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1257_; 
v___x_1254_ = lean_array_push(v_fst_1231_, v___x_1253_);
v___x_1255_ = lean_box(v_placed_1240_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v___x_1255_);
lean_ctor_set(v___x_1234_, 0, v___x_1254_);
v___x_1257_ = v___x_1234_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v___x_1255_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
v_a_1226_ = v___x_1257_;
goto v___jp_1225_;
}
}
}
else
{
lean_object* v___x_1261_; 
lean_dec(v_fst_1237_);
lean_del_object(v___x_1234_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 1, v_snd_1232_);
lean_ctor_set(v___x_1246_, 0, v_fst_1231_);
v___x_1261_ = v___x_1246_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_fst_1231_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_snd_1232_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
v_a_1226_ = v___x_1261_;
goto v___jp_1225_;
}
}
}
}
}
}
v___jp_1225_:
{
size_t v___x_1227_; size_t v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = ((size_t)1ULL);
v___x_1228_ = lean_usize_add(v_i_1223_, v___x_1227_);
v___x_1229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1220_, v_as_1221_, v_sz_1222_, v___x_1228_, v_a_1226_);
return v___x_1229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0___boxed(lean_object* v___y_1267_, lean_object* v_as_1268_, lean_object* v_sz_1269_, lean_object* v_i_1270_, lean_object* v_b_1271_){
_start:
{
size_t v_sz_boxed_1272_; size_t v_i_boxed_1273_; lean_object* v_res_1274_; 
v_sz_boxed_1272_ = lean_unbox_usize(v_sz_1269_);
lean_dec(v_sz_1269_);
v_i_boxed_1273_ = lean_unbox_usize(v_i_1270_);
lean_dec(v_i_1270_);
v_res_1274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1267_, v_as_1268_, v_sz_boxed_1272_, v_i_boxed_1273_, v_b_1271_);
lean_dec_ref(v_as_1268_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(lean_object* v_as_1275_, size_t v_i_1276_, size_t v_stop_1277_, lean_object* v_b_1278_){
_start:
{
lean_object* v___y_1280_; uint8_t v___x_1284_; 
v___x_1284_ = lean_usize_dec_eq(v_i_1276_, v_stop_1277_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1285_ = lean_array_uget_borrowed(v_as_1275_, v_i_1276_);
v___x_1286_ = lean_string_utf8_byte_size(v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_nat_dec_eq(v___x_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_inc(v___x_1285_);
v___x_1289_ = lean_array_push(v_b_1278_, v___x_1285_);
v___y_1280_ = v___x_1289_;
goto v___jp_1279_;
}
else
{
v___y_1280_ = v_b_1278_;
goto v___jp_1279_;
}
}
else
{
return v_b_1278_;
}
v___jp_1279_:
{
size_t v___x_1281_; size_t v___x_1282_; 
v___x_1281_ = ((size_t)1ULL);
v___x_1282_ = lean_usize_add(v_i_1276_, v___x_1281_);
v_i_1276_ = v___x_1282_;
v_b_1278_ = v___y_1280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2___boxed(lean_object* v_as_1290_, lean_object* v_i_1291_, lean_object* v_stop_1292_, lean_object* v_b_1293_){
_start:
{
size_t v_i_boxed_1294_; size_t v_stop_boxed_1295_; lean_object* v_res_1296_; 
v_i_boxed_1294_ = lean_unbox_usize(v_i_1291_);
lean_dec(v_i_1291_);
v_stop_boxed_1295_ = lean_unbox_usize(v_stop_1292_);
lean_dec(v_stop_1292_);
v_res_1296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v_as_1290_, v_i_boxed_1294_, v_stop_boxed_1295_, v_b_1293_);
lean_dec_ref(v_as_1290_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies(lean_object* v_headers_1299_){
_start:
{
lean_object* v___y_1301_; lean_object* v___x_1312_; lean_object* v___y_1314_; lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1312_ = lean_unsigned_to_nat(0u);
v___x_1326_ = lean_array_get_size(v_headers_1299_);
v___x_1327_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1328_ = lean_nat_dec_lt(v___x_1312_, v___x_1326_);
if (v___x_1328_ == 0)
{
v___y_1314_ = v___x_1327_;
goto v___jp_1313_;
}
else
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_nat_dec_le(v___x_1326_, v___x_1326_);
if (v___x_1329_ == 0)
{
if (v___x_1328_ == 0)
{
v___y_1314_ = v___x_1327_;
goto v___jp_1313_;
}
else
{
size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = ((size_t)0ULL);
v___x_1331_ = lean_usize_of_nat(v___x_1326_);
v___x_1332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1299_, v___x_1330_, v___x_1331_, v___x_1327_);
v___y_1314_ = v___x_1332_;
goto v___jp_1313_;
}
}
else
{
size_t v___x_1333_; size_t v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = ((size_t)0ULL);
v___x_1334_ = lean_usize_of_nat(v___x_1326_);
v___x_1335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1299_, v___x_1333_, v___x_1334_, v___x_1327_);
v___y_1314_ = v___x_1335_;
goto v___jp_1313_;
}
}
v___jp_1300_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v_placed_1304_; 
v___x_1302_ = lean_array_get_size(v___y_1301_);
v___x_1303_ = lean_unsigned_to_nat(0u);
v_placed_1304_ = lean_nat_dec_eq(v___x_1302_, v___x_1303_);
if (v_placed_1304_ == 0)
{
lean_object* v_out_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; size_t v_sz_1308_; size_t v___x_1309_; lean_object* v___x_1310_; lean_object* v_fst_1311_; 
v_out_1305_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1306_ = lean_box(v_placed_1304_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v_out_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v_sz_1308_ = lean_array_size(v_headers_1299_);
v___x_1309_ = ((size_t)0ULL);
v___x_1310_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1301_, v_headers_1299_, v_sz_1308_, v___x_1309_, v___x_1307_);
v_fst_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_fst_1311_);
lean_dec_ref(v___x_1310_);
return v_fst_1311_;
}
else
{
lean_dec_ref(v___y_1301_);
lean_inc_ref(v_headers_1299_);
return v_headers_1299_;
}
}
v___jp_1313_:
{
size_t v_sz_1315_; size_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; 
v_sz_1315_ = lean_array_size(v___y_1314_);
v___x_1316_ = ((size_t)0ULL);
v___x_1317_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_1315_, v___x_1316_, v___y_1314_);
v___x_1318_ = lean_array_get_size(v___x_1317_);
v___x_1319_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_1320_ = lean_nat_dec_lt(v___x_1312_, v___x_1318_);
if (v___x_1320_ == 0)
{
lean_dec_ref(v___x_1317_);
v___y_1301_ = v___x_1319_;
goto v___jp_1300_;
}
else
{
uint8_t v___x_1321_; 
v___x_1321_ = lean_nat_dec_le(v___x_1318_, v___x_1318_);
if (v___x_1321_ == 0)
{
if (v___x_1320_ == 0)
{
lean_dec_ref(v___x_1317_);
v___y_1301_ = v___x_1319_;
goto v___jp_1300_;
}
else
{
size_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_usize_of_nat(v___x_1318_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1317_, v___x_1316_, v___x_1322_, v___x_1319_);
lean_dec_ref(v___x_1317_);
v___y_1301_ = v___x_1323_;
goto v___jp_1300_;
}
}
else
{
size_t v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = lean_usize_of_nat(v___x_1318_);
v___x_1325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1317_, v___x_1316_, v___x_1324_, v___x_1319_);
lean_dec_ref(v___x_1317_);
v___y_1301_ = v___x_1325_;
goto v___jp_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies___boxed(lean_object* v_headers_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lasm_Fetch_joinCookies(v_headers_1336_);
lean_dec_ref(v_headers_1336_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_1338_){
_start:
{
lean_object* v_r_1341_; 
if (lean_obj_tag(v_x_1338_) == 0)
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1352_; 
v_a_1344_ = lean_ctor_get(v_x_1338_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_x_1338_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1346_ = v_x_1338_;
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v_x_1338_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v_a_1354_; 
v_a_1353_ = lean_ctor_get(v_x_1338_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v_x_1338_, 1);
v_a_1354_ = lean_ctor_get(v_a_1353_, 0);
lean_inc(v_a_1354_);
lean_dec(v_a_1353_);
v_r_1341_ = v_a_1354_;
goto v___jp_1340_;
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1342_, 0, v_r_1341_);
v___x_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
return v___x_1343_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lasm_Fetch_respond___lam__0(v_x_1355_);
return v_res_1357_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = 500;
v___x_1360_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_1361_ = l_Lasm_Fetch_Response_text(v___x_1360_, v___x_1359_);
return v___x_1361_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_1368_){
_start:
{
if (lean_obj_tag(v_x_1368_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1378_; 
v_a_1370_ = lean_ctor_get(v_x_1368_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_x_1368_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1372_ = v_x_1368_;
v_isShared_1373_ = v_isSharedCheck_1378_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v_x_1368_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1378_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
return v___x_1376_;
}
}
}
else
{
lean_object* v___x_1379_; 
lean_dec_ref_known(v_x_1368_, 1);
v___x_1379_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_1379_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lasm_Fetch_respond___lam__1(v_x_1380_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_1383_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1393_; 
v_a_1385_ = lean_ctor_get(v_x_1383_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_x_1383_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1387_ = v_x_1383_;
v_isShared_1388_ = v_isSharedCheck_1393_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v_x_1383_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1393_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
return v___x_1391_;
}
}
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1403_; 
v_a_1394_ = lean_ctor_get(v_x_1383_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v_x_1383_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1396_ = v_x_1383_;
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v_x_1383_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1403_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1394_);
v___x_1399_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Lasm_Fetch_respond___lam__2(v_x_1404_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_1410_, lean_object* v_req_1411_, lean_object* v___f_1412_, lean_object* v_x_1413_){
_start:
{
if (lean_obj_tag(v_x_1413_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1444_; 
v_a_1415_ = lean_ctor_get(v_x_1413_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_x_1413_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1417_ = v_x_1413_;
v_isShared_1418_ = v_isSharedCheck_1444_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v_x_1413_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1444_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; lean_object* v_val_1432_; lean_object* v___x_1435_; 
v___x_1419_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_1420_ = lean_string_append(v___x_1419_, v_method_1410_);
v___x_1421_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_1422_ = lean_string_append(v___x_1420_, v___x_1421_);
v___x_1423_ = l_Lasm_Fetch_Request_path(v_req_1411_);
v___x_1424_ = lean_string_append(v___x_1422_, v___x_1423_);
lean_dec_ref(v___x_1423_);
v___x_1425_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1426_ = lean_string_append(v___x_1424_, v___x_1425_);
v___x_1427_ = lean_io_error_to_string(v_a_1415_);
v___x_1428_ = lean_string_append(v___x_1426_, v___x_1427_);
lean_dec_ref(v___x_1427_);
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = 0;
v___x_1435_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1428_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1438_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1435_, 1);
if (v_isShared_1418_ == 0)
{
lean_ctor_set_tag(v___x_1417_, 1);
lean_ctor_set(v___x_1417_, 0, v_a_1436_);
v___x_1438_ = v___x_1417_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
v_val_1432_ = v___x_1438_;
goto v___jp_1431_;
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; 
v_a_1440_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1435_, 1);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v_a_1440_);
v___x_1442_ = v___x_1417_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
v_val_1432_ = v___x_1442_;
goto v___jp_1431_;
}
}
v___jp_1431_:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v_val_1432_);
v___x_1434_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1429_, v___x_1430_, v___x_1433_, v___f_1412_);
return v___x_1434_;
}
}
}
else
{
lean_object* v___x_1445_; 
lean_dec_ref(v___f_1412_);
lean_dec_ref(v_req_1411_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_x_1413_);
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_1446_, lean_object* v_req_1447_, lean_object* v___f_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lasm_Fetch_respond___lam__3(v_method_1446_, v_req_1447_, v___f_1448_, v_x_1449_);
lean_dec_ref(v_method_1446_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_1456_, lean_object* v_req_1457_){
_start:
{
lean_object* v_method_1459_; lean_object* v_url_1460_; lean_object* v_headers_1461_; lean_object* v_body_1462_; lean_object* v_read_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1487_; 
v_method_1459_ = lean_ctor_get(v_req_1457_, 0);
v_url_1460_ = lean_ctor_get(v_req_1457_, 1);
v_headers_1461_ = lean_ctor_get(v_req_1457_, 2);
v_body_1462_ = lean_ctor_get(v_req_1457_, 3);
v_read_1463_ = lean_ctor_get(v_req_1457_, 4);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_req_1457_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1465_ = v_req_1457_;
v_isShared_1466_ = v_isSharedCheck_1487_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_read_1463_);
lean_inc(v_body_1462_);
lean_inc(v_headers_1461_);
lean_inc(v_url_1460_);
lean_inc(v_method_1459_);
lean_dec(v_req_1457_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1487_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___f_1467_; lean_object* v___f_1468_; lean_object* v___f_1469_; lean_object* v___x_1470_; lean_object* v_req_1472_; 
v___f_1467_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_1468_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_1469_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
v___x_1470_ = l_Lasm_Fetch_joinCookies(v_headers_1461_);
lean_dec_ref(v_headers_1461_);
lean_inc_ref(v_read_1463_);
lean_inc_ref(v_body_1462_);
lean_inc_ref(v___x_1470_);
lean_inc_ref(v_url_1460_);
lean_inc_ref(v_method_1459_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 2, v___x_1470_);
v_req_1472_ = v___x_1465_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_method_1459_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_url_1460_);
lean_ctor_set(v_reuseFailAlloc_1486_, 2, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1486_, 3, v_body_1462_);
lean_ctor_set(v_reuseFailAlloc_1486_, 4, v_read_1463_);
v_req_1472_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___f_1473_; lean_object* v___y_1475_; lean_object* v___x_1482_; uint8_t v___x_1483_; 
lean_inc_ref(v_req_1472_);
lean_inc_ref(v_method_1459_);
v___f_1473_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1473_, 0, v_method_1459_);
lean_closure_set(v___f_1473_, 1, v_req_1472_);
lean_closure_set(v___f_1473_, 2, v___f_1468_);
v___x_1482_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1483_ = lean_string_dec_eq(v_method_1459_, v___x_1482_);
lean_dec_ref(v_method_1459_);
if (v___x_1483_ == 0)
{
lean_dec_ref(v___x_1470_);
lean_dec_ref(v_read_1463_);
lean_dec_ref(v_body_1462_);
lean_dec_ref(v_url_1460_);
v___y_1475_ = v_req_1472_;
goto v___jp_1474_;
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_dec_ref(v_req_1472_);
v___x_1484_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_1485_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
lean_ctor_set(v___x_1485_, 1, v_url_1460_);
lean_ctor_set(v___x_1485_, 2, v___x_1470_);
lean_ctor_set(v___x_1485_, 3, v_body_1462_);
lean_ctor_set(v___x_1485_, 4, v_read_1463_);
v___y_1475_ = v___x_1485_;
goto v___jp_1474_;
}
v___jp_1474_:
{
lean_object* v___x_1476_; uint8_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = 0;
v___x_1478_ = lean_apply_2(v_handler_1456_, v___y_1475_, lean_box(0));
v___x_1479_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1476_, v___x_1477_, v___x_1478_, v___f_1469_);
v___x_1480_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1476_, v___x_1477_, v___x_1479_, v___f_1473_);
v___x_1481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1476_, v___x_1477_, v___x_1480_, v___f_1467_);
return v___x_1481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1488_, lean_object* v_req_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_Fetch_respond(v_handler_1488_, v_req_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1492_, uint16_t v_status_1493_){
_start:
{
lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1495_ = lean_string_dec_eq(v_method_1492_, v___x_1494_);
if (v___x_1495_ == 0)
{
uint16_t v___x_1496_; uint8_t v___x_1497_; 
v___x_1496_ = 101;
v___x_1497_ = lean_uint16_dec_eq(v_status_1493_, v___x_1496_);
if (v___x_1497_ == 0)
{
uint16_t v___x_1498_; uint8_t v___x_1499_; 
v___x_1498_ = 204;
v___x_1499_ = lean_uint16_dec_eq(v_status_1493_, v___x_1498_);
if (v___x_1499_ == 0)
{
uint16_t v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = 205;
v___x_1501_ = lean_uint16_dec_eq(v_status_1493_, v___x_1500_);
if (v___x_1501_ == 0)
{
uint16_t v___x_1502_; uint8_t v___x_1503_; 
v___x_1502_ = 304;
v___x_1503_ = lean_uint16_dec_eq(v_status_1493_, v___x_1502_);
return v___x_1503_;
}
else
{
return v___x_1501_;
}
}
else
{
return v___x_1499_;
}
}
else
{
return v___x_1497_;
}
}
else
{
return v___x_1495_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1504_, lean_object* v_status_1505_){
_start:
{
uint16_t v_status_boxed_1506_; uint8_t v_res_1507_; lean_object* v_r_1508_; 
v_status_boxed_1506_ = lean_unbox(v_status_1505_);
v_res_1507_ = l_Lasm_Fetch_bodyless(v_method_1504_, v_status_boxed_1506_);
lean_dec_ref(v_method_1504_);
v_r_1508_ = lean_box(v_res_1507_);
return v_r_1508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1510_){
_start:
{
uint32_t v_res_1511_; lean_object* v_r_1512_; 
v_res_1511_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1510_);
v_r_1512_ = lean_box_uint32(v_res_1511_);
return v_r_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = lasm_fetch_take_request();
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1520_, lean_object* v_headers_1521_, lean_object* v_body_1522_, lean_object* v_a_00___x40___internal___hyg_1523_){
_start:
{
uint16_t v_status_boxed_1524_; lean_object* v_res_1525_; 
v_status_boxed_1524_ = lean_unbox(v_status_1520_);
v_res_1525_ = lasm_fetch_send_response(v_status_boxed_1524_, v_headers_1521_, v_body_1522_);
lean_dec_ref(v_body_1522_);
lean_dec_ref(v_headers_1521_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = lasm_fetch_take_request_head();
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1531_, lean_object* v_a_00___x40___internal___hyg_1532_){
_start:
{
uint32_t v_max_boxed_1533_; lean_object* v_res_1534_; 
v_max_boxed_1533_ = lean_unbox_uint32(v_max_1531_);
lean_dec(v_max_1531_);
v_res_1534_ = lasm_fetch_read(v_max_boxed_1533_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1538_, lean_object* v_headers_1539_, lean_object* v_a_00___x40___internal___hyg_1540_){
_start:
{
uint16_t v_status_boxed_1541_; lean_object* v_res_1542_; 
v_status_boxed_1541_ = lean_unbox(v_status_1538_);
v_res_1542_ = lasm_fetch_start_response(v_status_boxed_1541_, v_headers_1539_);
lean_dec_ref(v_headers_1539_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1545_, lean_object* v_a_00___x40___internal___hyg_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = lasm_fetch_write(v_chunk_1545_);
lean_dec_ref(v_chunk_1545_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1550_, lean_object* v_a_00___x40___internal___hyg_1551_){
_start:
{
uint8_t v_ok_boxed_1552_; lean_object* v_res_1553_; 
v_ok_boxed_1552_ = lean_unbox(v_ok_1550_);
v_res_1553_ = lasm_fetch_finish(v_ok_boxed_1552_);
return v_res_1553_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1554_){
_start:
{
uint8_t v___x_1555_; 
v___x_1555_ = 0;
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1556_){
_start:
{
uint8_t v_res_1557_; lean_object* v_r_1558_; 
v_res_1557_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1556_);
lean_dec_ref(v_x_1556_);
v_r_1558_ = lean_box(v_res_1557_);
return v_r_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1568_){
_start:
{
lean_object* v_b_1571_; 
if (lean_obj_tag(v_x_1568_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_a_1577_ = lean_ctor_get(v_x_1568_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_x_1568_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1579_ = v_x_1568_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v_x_1568_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
return v___x_1583_;
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_a_1586_ = lean_ctor_get(v_x_1568_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v_x_1568_, 1);
v___x_1587_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1588_ = l_Lasm_JS_Data_field(v_a_1586_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 2)
{
uint8_t v_b_1589_; 
v_b_1589_ = lean_ctor_get_uint8(v___x_1588_, 0);
lean_dec_ref_known(v___x_1588_, 0);
if (v_b_1589_ == 1)
{
lean_object* v___x_1590_; 
lean_dec(v_a_1586_);
v___x_1590_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1590_;
}
else
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1592_ = l_Lasm_JS_Data_field(v_a_1586_, v___x_1591_);
lean_dec(v_a_1586_);
if (lean_obj_tag(v___x_1592_) == 6)
{
lean_object* v_b_1593_; 
v_b_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc_ref(v_b_1593_);
lean_dec_ref_known(v___x_1592_, 1);
v_b_1571_ = v_b_1593_;
goto v___jp_1570_;
}
else
{
lean_dec(v___x_1592_);
goto v___jp_1575_;
}
}
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
lean_dec(v___x_1588_);
v___x_1594_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1595_ = l_Lasm_JS_Data_field(v_a_1586_, v___x_1594_);
lean_dec(v_a_1586_);
if (lean_obj_tag(v___x_1595_) == 6)
{
lean_object* v_b_1596_; 
v_b_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc_ref(v_b_1596_);
lean_dec_ref_known(v___x_1595_, 1);
v_b_1571_ = v_b_1596_;
goto v___jp_1570_;
}
else
{
lean_dec(v___x_1595_);
goto v___jp_1575_;
}
}
}
v___jp_1570_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_b_1571_);
v___x_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
v___x_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
return v___x_1574_;
}
v___jp_1575_:
{
lean_object* v___x_1576_; 
v___x_1576_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1597_);
return v_res_1599_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1600_; uint64_t v___x_1601_; 
v___x_1600_ = 0;
v___x_1601_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1602_, uint64_t v_extra_1603_){
_start:
{
uint64_t v___x_1604_; uint64_t v___y_1606_; 
v___x_1604_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1602_ == 0)
{
uint64_t v___x_1609_; 
v___x_1609_ = 0ULL;
v___y_1606_ = v___x_1609_;
goto v___jp_1605_;
}
else
{
uint64_t v___x_1610_; 
v___x_1610_ = 2ULL;
v___y_1606_ = v___x_1610_;
goto v___jp_1605_;
}
v___jp_1605_:
{
uint64_t v___x_1607_; uint64_t v___x_1608_; 
v___x_1607_ = lean_uint64_lor(v___x_1604_, v___y_1606_);
v___x_1608_ = lean_uint64_lor(v___x_1607_, v_extra_1603_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1611_, lean_object* v_extra_1612_){
_start:
{
uint8_t v_await_boxed_1613_; uint64_t v_extra_boxed_1614_; uint64_t v_res_1615_; lean_object* v_r_1616_; 
v_await_boxed_1613_ = lean_unbox(v_await_1611_);
v_extra_boxed_1614_ = lean_unbox_uint64(v_extra_1612_);
lean_dec_ref(v_extra_1612_);
v_res_1615_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1613_, v_extra_boxed_1614_);
v_r_1616_ = lean_box_uint64(v_res_1615_);
return v_r_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1617_){
_start:
{
if (lean_obj_tag(v_x_1617_) == 0)
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v_x_1617_);
return v___x_1619_;
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1628_; 
v_a_1620_ = lean_ctor_get(v_x_1617_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_x_1617_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1622_ = v_x_1617_;
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v_x_1617_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
return v___x_1626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1632_, lean_object* v_x_1633_){
_start:
{
if (lean_obj_tag(v_x_1633_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1643_; 
v_a_1635_ = lean_ctor_get(v_x_1633_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v_x_1633_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1637_ = v_x_1633_;
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v_x_1633_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1643_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
}
}
else
{
lean_object* v___x_1644_; 
lean_dec_ref_known(v_x_1633_, 1);
v___x_1644_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1632_);
return v___x_1644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1645_, lean_object* v_x_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1645_, v_x_1646_);
lean_dec(v_a_1645_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1649_, lean_object* v_failurePrefix_1650_, lean_object* v___f_1651_, lean_object* v___f_1652_, uint32_t v_op_1653_, uint64_t v_flags_1654_, lean_object* v___f_1655_, lean_object* v_x_1656_){
_start:
{
if (lean_obj_tag(v_x_1656_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1666_; 
lean_dec_ref(v___f_1655_);
lean_dec_ref(v___f_1652_);
lean_dec_ref(v___f_1651_);
v_a_1658_ = lean_ctor_get(v_x_1656_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_x_1656_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1660_ = v_x_1656_;
v_isShared_1661_ = v_isSharedCheck_1666_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v_x_1656_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1666_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
return v___x_1664_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1708_; 
v_a_1667_ = lean_ctor_get(v_x_1656_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_x_1656_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1669_ = v_x_1656_;
v_isShared_1670_ = v_isSharedCheck_1708_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v_x_1656_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1708_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
uint32_t v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v___x_1671_ = 0;
v___x_1672_ = l_Lasm_JS_Wire_encode(v_payload_1649_);
v___x_1673_ = lean_string_utf8_byte_size(v_failurePrefix_1650_);
v___x_1674_ = lean_unsigned_to_nat(0u);
v___x_1675_ = lean_nat_dec_eq(v___x_1673_, v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___f_1676_; lean_object* v_val_1678_; lean_object* v___x_1683_; 
lean_dec_ref(v___f_1655_);
lean_inc(v_a_1667_);
v___f_1676_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1676_, 0, v_a_1667_);
v___x_1683_ = lasm_js_call_into(v_a_1667_, v_op_1653_, v___x_1671_, v_flags_1654_, v___x_1672_, v_payload_1649_);
lean_dec_ref(v___x_1672_);
lean_dec(v_a_1667_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1686_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 0, v_a_1684_);
v___x_1686_ = v___x_1669_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1684_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
v_val_1678_ = v___x_1686_;
goto v___jp_1677_;
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; 
v_a_1688_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1683_, 1);
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 0);
lean_ctor_set(v___x_1669_, 0, v_a_1688_);
v___x_1690_ = v___x_1669_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1688_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
v_val_1678_ = v___x_1690_;
goto v___jp_1677_;
}
}
v___jp_1677_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_val_1678_);
v___x_1680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1675_, v___x_1679_, v___f_1676_);
v___x_1681_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1675_, v___x_1680_, v___f_1651_);
v___x_1682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1675_, v___x_1681_, v___f_1652_);
return v___x_1682_;
}
}
else
{
lean_object* v___f_1692_; uint8_t v___x_1693_; lean_object* v_val_1695_; lean_object* v___x_1699_; 
lean_dec_ref(v___f_1652_);
lean_dec_ref(v___f_1651_);
lean_inc(v_a_1667_);
v___f_1692_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1692_, 0, v_a_1667_);
v___x_1693_ = 0;
v___x_1699_ = lasm_js_call_into(v_a_1667_, v_op_1653_, v___x_1671_, v_flags_1654_, v___x_1672_, v_payload_1649_);
lean_dec_ref(v___x_1672_);
lean_dec(v_a_1667_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1702_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 0, v_a_1700_);
v___x_1702_ = v___x_1669_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
v_val_1695_ = v___x_1702_;
goto v___jp_1694_;
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; 
v_a_1704_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1699_, 1);
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 0);
lean_ctor_set(v___x_1669_, 0, v_a_1704_);
v___x_1706_ = v___x_1669_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
v_val_1695_ = v___x_1706_;
goto v___jp_1694_;
}
}
v___jp_1694_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_val_1695_);
v___x_1697_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1693_, v___x_1696_, v___f_1692_);
v___x_1698_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1674_, v___x_1693_, v___x_1697_, v___f_1655_);
return v___x_1698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1709_, lean_object* v_failurePrefix_1710_, lean_object* v___f_1711_, lean_object* v___f_1712_, lean_object* v_op_1713_, lean_object* v_flags_1714_, lean_object* v___f_1715_, lean_object* v_x_1716_, lean_object* v___y_1717_){
_start:
{
uint32_t v_op_boxed_1718_; uint64_t v_flags_boxed_1719_; lean_object* v_res_1720_; 
v_op_boxed_1718_ = lean_unbox_uint32(v_op_1713_);
lean_dec(v_op_1713_);
v_flags_boxed_1719_ = lean_unbox_uint64(v_flags_1714_);
lean_dec_ref(v_flags_1714_);
v_res_1720_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1709_, v_failurePrefix_1710_, v___f_1711_, v___f_1712_, v_op_boxed_1718_, v_flags_boxed_1719_, v___f_1715_, v_x_1716_);
lean_dec_ref(v_failurePrefix_1710_);
lean_dec(v_payload_1709_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1721_, lean_object* v_bytes_1722_){
_start:
{
lean_object* v___x_1724_; uint8_t v___x_1725_; lean_object* v_val_1727_; lean_object* v___x_1730_; 
v___x_1724_ = lean_unsigned_to_nat(0u);
v___x_1725_ = 0;
v___x_1730_ = l_Lasm_JS_Wire_decode(v_bytes_1722_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1730_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 1);
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
v_val_1727_ = v___x_1736_;
goto v___jp_1726_;
}
}
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
v_a_1739_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1741_ = v___x_1730_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1730_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
lean_ctor_set_tag(v___x_1741_, 0);
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1739_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_val_1727_ = v___x_1744_;
goto v___jp_1726_;
}
}
}
v___jp_1726_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v_val_1727_);
v___x_1729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1725_, v___x_1728_, v___f_1721_);
return v___x_1729_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1747_, lean_object* v_bytes_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1747_, v_bytes_1748_);
lean_dec_ref(v_bytes_1748_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1751_, lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1765_; 
v_a_1754_ = lean_ctor_get(v_x_1752_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_x_1752_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1756_ = v_x_1752_;
v_isShared_1757_ = v_isSharedCheck_1765_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v_x_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1765_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; 
v___x_1758_ = lean_io_error_to_string(v_a_1754_);
v___x_1759_ = lean_string_append(v_failurePrefix_1751_, v___x_1758_);
lean_dec_ref(v___x_1758_);
v___x_1760_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1760_);
v___x_1762_ = v___x_1756_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
}
}
else
{
lean_object* v___x_1766_; 
lean_dec_ref(v_failurePrefix_1751_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_x_1752_);
return v___x_1766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1767_, lean_object* v_x_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1767_, v_x_1768_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1771_, lean_object* v_x_1772_){
_start:
{
if (lean_obj_tag(v_x_1772_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1782_; 
lean_dec_ref(v___f_1771_);
v_a_1774_ = lean_ctor_get(v_x_1772_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v_x_1772_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1776_ = v_x_1772_;
v_isShared_1777_ = v_isSharedCheck_1782_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v_x_1772_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1782_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
return v___x_1780_;
}
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1784_; 
v_a_1783_ = lean_ctor_get(v_x_1772_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v_x_1772_, 1);
v___x_1784_ = lean_apply_2(v___f_1771_, v_a_1783_, lean_box(0));
return v___x_1784_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1785_, lean_object* v_x_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1785_, v_x_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1789_, lean_object* v_x_1790_){
_start:
{
if (lean_obj_tag(v_x_1790_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v___f_1789_);
v_a_1792_ = lean_ctor_get(v_x_1790_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_x_1790_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1794_ = v_x_1790_;
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v_x_1790_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
return v___x_1798_;
}
}
}
else
{
lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1812_; 
v_isSharedCheck_1812_ = !lean_is_exclusive(v_x_1790_);
if (v_isSharedCheck_1812_ == 0)
{
lean_object* v_unused_1813_; 
v_unused_1813_ = lean_ctor_get(v_x_1790_, 0);
lean_dec(v_unused_1813_);
v___x_1802_ = v_x_1790_;
v_isShared_1803_ = v_isSharedCheck_1812_;
goto v_resetjp_1801_;
}
else
{
lean_dec(v_x_1790_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1812_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1804_; uint8_t v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1804_ = lean_unsigned_to_nat(0u);
v___x_1805_ = 0;
v___x_1806_ = lean_io_promise_new();
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v___x_1806_);
v___x_1808_ = v___x_1802_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
v___x_1810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1804_, v___x_1805_, v___x_1809_, v___f_1789_);
return v___x_1810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1814_, lean_object* v_x_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1814_, v_x_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1823_, uint64_t v_flags_1824_, lean_object* v_payload_1825_, lean_object* v_failurePrefix_1826_){
_start:
{
lean_object* v___f_1828_; lean_object* v___f_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___f_1832_; lean_object* v___f_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; lean_object* v_val_1837_; lean_object* v___x_1840_; 
lean_inc_ref(v_failurePrefix_1826_);
v___f_1828_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1828_, 0, v_failurePrefix_1826_);
v___f_1829_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1830_ = lean_box_uint32(v_op_1823_);
v___x_1831_ = lean_box_uint64(v_flags_1824_);
v___f_1832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1832_, 0, v_payload_1825_);
lean_closure_set(v___f_1832_, 1, v_failurePrefix_1826_);
lean_closure_set(v___f_1832_, 2, v___f_1828_);
lean_closure_set(v___f_1832_, 3, v___f_1829_);
lean_closure_set(v___f_1832_, 4, v___x_1830_);
lean_closure_set(v___f_1832_, 5, v___x_1831_);
lean_closure_set(v___f_1832_, 6, v___f_1829_);
v___f_1833_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1833_, 0, v___f_1832_);
v___x_1834_ = lean_unsigned_to_nat(0u);
v___x_1835_ = 0;
v___x_1840_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set_tag(v___x_1843_, 1);
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
v_val_1837_ = v___x_1846_;
goto v___jp_1836_;
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1840_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1840_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
lean_ctor_set_tag(v___x_1851_, 0);
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
v_val_1837_ = v___x_1854_;
goto v___jp_1836_;
}
}
}
v___jp_1836_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v_val_1837_);
v___x_1839_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1834_, v___x_1835_, v___x_1838_, v___f_1833_);
return v___x_1839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1857_, lean_object* v_flags_1858_, lean_object* v_payload_1859_, lean_object* v_failurePrefix_1860_, lean_object* v_a_1861_){
_start:
{
uint32_t v_op_boxed_1862_; uint64_t v_flags_boxed_1863_; lean_object* v_res_1864_; 
v_op_boxed_1862_ = lean_unbox_uint32(v_op_1857_);
lean_dec(v_op_1857_);
v_flags_boxed_1863_ = lean_unbox_uint64(v_flags_1858_);
lean_dec_ref(v_flags_1858_);
v_res_1864_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1862_, v_flags_boxed_1863_, v_payload_1859_, v_failurePrefix_1860_);
return v_res_1864_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1865_; uint8_t v___x_1866_; uint64_t v___x_1867_; 
v___x_1865_ = 8ULL;
v___x_1866_ = 0;
v___x_1867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1866_, v___x_1865_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1868_, lean_object* v_name_1869_, lean_object* v_args_1870_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; uint32_t v___x_1875_; uint64_t v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1872_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1873_, 0, v_o_1868_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
v___x_1874_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1874_, 0, v_name_1869_);
v___x_1875_ = 205;
v___x_1876_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1877_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_args_1870_);
v___x_1878_ = lean_unsigned_to_nat(3u);
v___x_1879_ = lean_mk_empty_array_with_capacity(v___x_1878_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1873_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1874_);
v___x_1882_ = lean_array_push(v___x_1881_, v___x_1877_);
v___x_1883_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
v___x_1884_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1875_, v___x_1876_, v___x_1883_, v___x_1872_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1885_, lean_object* v_name_1886_, lean_object* v_args_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1885_, v_name_1886_, v_args_1887_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1890_, lean_object* v___x_1891_, lean_object* v___x_1892_, lean_object* v___x_1893_, lean_object* v___f_1894_){
_start:
{
uint8_t v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = 0;
v___x_1897_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1890_, v___x_1891_, v___x_1892_);
v___x_1898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1893_, v___x_1896_, v___x_1897_, v___f_1894_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1899_, lean_object* v___x_1900_, lean_object* v___x_1901_, lean_object* v___x_1902_, lean_object* v___f_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1899_, v___x_1900_, v___x_1901_, v___x_1902_, v___f_1903_);
return v_res_1905_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1906_; uint64_t v___x_1907_; 
v___x_1906_ = 1;
v___x_1907_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1908_, uint64_t v_extra_1909_){
_start:
{
uint64_t v___x_1910_; uint64_t v___y_1912_; 
v___x_1910_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1908_ == 0)
{
uint64_t v___x_1915_; 
v___x_1915_ = 0ULL;
v___y_1912_ = v___x_1915_;
goto v___jp_1911_;
}
else
{
uint64_t v___x_1916_; 
v___x_1916_ = 2ULL;
v___y_1912_ = v___x_1916_;
goto v___jp_1911_;
}
v___jp_1911_:
{
uint64_t v___x_1913_; uint64_t v___x_1914_; 
v___x_1913_ = lean_uint64_lor(v___x_1910_, v___y_1912_);
v___x_1914_ = lean_uint64_lor(v___x_1913_, v_extra_1909_);
return v___x_1914_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1917_, lean_object* v_extra_1918_){
_start:
{
uint8_t v_await_boxed_1919_; uint64_t v_extra_boxed_1920_; uint64_t v_res_1921_; lean_object* v_r_1922_; 
v_await_boxed_1919_ = lean_unbox(v_await_1917_);
v_extra_boxed_1920_ = lean_unbox_uint64(v_extra_1918_);
lean_dec_ref(v_extra_1918_);
v_res_1921_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1919_, v_extra_boxed_1920_);
v_r_1922_ = lean_box_uint64(v_res_1921_);
return v_r_1922_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1923_; uint8_t v___x_1924_; uint64_t v___x_1925_; 
v___x_1923_ = 8ULL;
v___x_1924_ = 0;
v___x_1925_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1924_, v___x_1923_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1927_, lean_object* v_name_1928_, lean_object* v_args_1929_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint64_t v___x_1934_; lean_object* v___x_1935_; 
v___x_1931_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1932_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1932_, 0, v_o_1927_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
lean_inc_ref(v_name_1928_);
v___x_1933_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1933_, 0, v_name_1928_);
v___x_1934_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1935_ = l_Lasm_JS_Value_invokeRaw(v___x_1932_, v___x_1933_, v_args_1929_, v___x_1934_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1936_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1937_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1938_ = lean_string_append(v___x_1937_, v_name_1928_);
lean_dec_ref(v_name_1928_);
v___x_1939_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1938_, v_a_1936_);
lean_dec(v_a_1936_);
lean_dec_ref(v___x_1938_);
return v___x_1939_;
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref(v_name_1928_);
v_a_1940_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1935_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1935_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1948_, lean_object* v_name_1949_, lean_object* v_args_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1948_, v_name_1949_, v_args_1950_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1958_){
_start:
{
lean_object* v___f_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___f_1960_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1961_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1962_ = lean_unsigned_to_nat(0u);
v___x_1963_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1964_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1958_, v___x_1961_, v___x_1963_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1974_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1967_ = v___x_1964_;
v_isShared_1968_ = v_isSharedCheck_1974_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1964_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1974_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1969_; lean_object* v___f_1970_; lean_object* v___x_1972_; 
v___x_1969_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1970_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1970_, 0, v_a_1965_);
lean_closure_set(v___f_1970_, 1, v___x_1969_);
lean_closure_set(v___f_1970_, 2, v___x_1963_);
lean_closure_set(v___f_1970_, 3, v___x_1962_);
lean_closure_set(v___f_1970_, 4, v___f_1960_);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v___f_1970_);
v___x_1972_ = v___x_1967_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___f_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
v_a_1975_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1964_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1964_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v_d_1986_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1992_, lean_object* v_d_1993_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v_d_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1996_, lean_object* v_d_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1996_, v_d_1997_);
lean_dec_ref(v_context_1996_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_2000_, uint32_t v_op_2001_, uint64_t v_flags_2002_, lean_object* v_payload_2003_, lean_object* v_failurePrefix_2004_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_2001_, v_flags_2002_, v_payload_2003_, v_failurePrefix_2004_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_2007_, lean_object* v_op_2008_, lean_object* v_flags_2009_, lean_object* v_payload_2010_, lean_object* v_failurePrefix_2011_, lean_object* v_a_2012_){
_start:
{
uint32_t v_op_boxed_2013_; uint64_t v_flags_boxed_2014_; lean_object* v_res_2015_; 
v_op_boxed_2013_ = lean_unbox_uint32(v_op_2008_);
lean_dec(v_op_2008_);
v_flags_boxed_2014_ = lean_unbox_uint64(v_flags_2009_);
lean_dec_ref(v_flags_2009_);
v_res_2015_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_2007_, v_op_boxed_2013_, v_flags_boxed_2014_, v_payload_2010_, v_failurePrefix_2011_);
lean_dec_ref(v_context_2007_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_2020_){
_start:
{
if (lean_obj_tag(v_x_2020_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2030_; 
v_a_2022_ = lean_ctor_get(v_x_2020_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_x_2020_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2024_ = v_x_2020_;
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v_x_2020_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; 
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
return v___x_2028_;
}
}
}
else
{
lean_object* v___x_2031_; 
lean_dec_ref_known(v_x_2020_, 1);
v___x_2031_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_2032_);
return v_res_2034_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2035_; uint8_t v___x_2036_; uint64_t v___x_2037_; 
v___x_2035_ = 4ULL;
v___x_2036_ = 0;
v___x_2037_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_2036_, v___x_2035_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_2039_, lean_object* v_args_2040_){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; uint64_t v___x_2045_; lean_object* v___x_2046_; 
v___x_2042_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_c_2039_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = lean_box(0);
v___x_2045_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_2046_ = l_Lasm_JS_Value_invokeRaw(v___x_2043_, v___x_2044_, v_args_2040_, v___x_2045_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2046_, 1);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2049_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2048_, v_a_2047_);
lean_dec(v_a_2047_);
return v___x_2049_;
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2057_; 
v_a_2050_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2052_ = v___x_2046_;
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_a_2050_);
lean_dec(v___x_2046_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2050_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_2058_, lean_object* v_args_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_2058_, v_args_2059_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_2062_, lean_object* v___x_2063_, lean_object* v_x_2064_){
_start:
{
lean_object* v_val_2067_; 
if (lean_obj_tag(v_x_2064_) == 0)
{
lean_object* v___x_2069_; 
lean_dec(v___x_2063_);
lean_dec(v___y_2062_);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v_x_2064_);
return v___x_2069_;
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2087_; 
v_a_2070_ = lean_ctor_get(v_x_2064_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_x_2064_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2072_ = v_x_2064_;
v_isShared_2073_ = v_isSharedCheck_2087_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v_x_2064_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2087_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2074_ = lean_unsigned_to_nat(2u);
v___x_2075_ = lean_mk_empty_array_with_capacity(v___x_2074_);
v___x_2076_ = lean_array_push(v___x_2075_, v___y_2062_);
v___x_2077_ = lean_array_push(v___x_2076_, v___x_2063_);
v___x_2078_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2070_, v___x_2077_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v___x_2081_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2078_, 1);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 0, v_a_2079_);
v___x_2081_ = v___x_2072_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
v_val_2067_ = v___x_2081_;
goto v___jp_2066_;
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2078_, 1);
if (v_isShared_2073_ == 0)
{
lean_ctor_set_tag(v___x_2072_, 0);
lean_ctor_set(v___x_2072_, 0, v_a_2083_);
v___x_2085_ = v___x_2072_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v_val_2067_ = v___x_2085_;
goto v___jp_2066_;
}
}
}
}
v___jp_2066_:
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v_val_2067_);
return v___x_2068_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_2088_, lean_object* v___x_2089_, lean_object* v_x_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_2088_, v___x_2089_, v_x_2090_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_2093_, lean_object* v___x_2094_, lean_object* v_x_2095_){
_start:
{
lean_object* v_val_2098_; 
if (lean_obj_tag(v_x_2095_) == 0)
{
lean_object* v___x_2100_; 
lean_dec(v___x_2094_);
lean_dec(v_a_2093_);
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v_x_2095_);
return v___x_2100_;
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2120_; 
v_a_2101_ = lean_ctor_get(v_x_2095_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_x_2095_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2103_ = v_x_2095_;
v_isShared_2104_ = v_isSharedCheck_2120_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v_x_2095_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2120_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2105_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2106_, 0, v_a_2093_);
lean_ctor_set(v___x_2106_, 1, v___x_2105_);
v___x_2107_ = lean_unsigned_to_nat(2u);
v___x_2108_ = lean_mk_empty_array_with_capacity(v___x_2107_);
v___x_2109_ = lean_array_push(v___x_2108_, v___x_2106_);
v___x_2110_ = lean_array_push(v___x_2109_, v___x_2094_);
v___x_2111_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2101_, v___x_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2111_, 1);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v_a_2112_);
v___x_2114_ = v___x_2103_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
v_val_2098_ = v___x_2114_;
goto v___jp_2097_;
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; 
v_a_2116_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2111_, 1);
if (v_isShared_2104_ == 0)
{
lean_ctor_set_tag(v___x_2103_, 0);
lean_ctor_set(v___x_2103_, 0, v_a_2116_);
v___x_2118_ = v___x_2103_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v_val_2098_ = v___x_2118_;
goto v___jp_2097_;
}
}
}
}
v___jp_2097_:
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v_val_2098_);
return v___x_2099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_2121_, lean_object* v___x_2122_, lean_object* v_x_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_2121_, v___x_2122_, v_x_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_2127_, lean_object* v_key_2128_){
_start:
{
uint32_t v___x_2130_; uint32_t v___x_2131_; uint64_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2130_ = 203;
v___x_2131_ = lasm_js_value_handle(v_o_2127_);
v___x_2132_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_2128_);
v___x_2133_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2133_, 0, v_key_2128_);
v___x_2134_ = l_Lasm_JS_Wire_encode(v___x_2133_);
lean_dec_ref_known(v___x_2133_, 1);
v___x_2135_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2136_, 0, v_o_2127_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lasm_js_call(v___x_2130_, v___x_2131_, v___x_2132_, v___x_2134_, v___x_2136_);
lean_dec_ref_known(v___x_2136_, 2);
lean_dec_ref(v___x_2134_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2140_ = l_String_quote(v_key_2128_);
v___x_2141_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
v___x_2142_ = lean_unsigned_to_nat(120u);
v___x_2143_ = lean_unsigned_to_nat(0u);
v___x_2144_ = l_Std_Format_pretty(v___x_2141_, v___x_2142_, v___x_2143_, v___x_2143_);
v___x_2145_ = lean_string_append(v___x_2139_, v___x_2144_);
lean_dec_ref(v___x_2144_);
v___x_2146_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2145_, v_a_2138_);
lean_dec(v_a_2138_);
lean_dec_ref(v___x_2145_);
return v___x_2146_;
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec_ref(v_key_2128_);
v_a_2147_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2137_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2137_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2155_, lean_object* v_key_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2155_, v_key_2156_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2160_, uint8_t v___x_2161_, lean_object* v___f_2162_, lean_object* v_a_2163_, lean_object* v_x_2164_){
_start:
{
lean_object* v_val_2167_; 
if (lean_obj_tag(v_x_2164_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2178_; 
lean_dec(v_a_2163_);
lean_dec_ref(v___f_2162_);
lean_dec(v___x_2160_);
v_a_2170_ = lean_ctor_get(v_x_2164_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_x_2164_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2172_ = v_x_2164_;
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v_x_2164_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
return v___x_2176_;
}
}
}
else
{
lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2192_; 
v_isSharedCheck_2192_ = !lean_is_exclusive(v_x_2164_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v_x_2164_, 0);
lean_dec(v_unused_2193_);
v___x_2180_ = v_x_2164_;
v_isShared_2181_ = v_isSharedCheck_2192_;
goto v_resetjp_2179_;
}
else
{
lean_dec(v_x_2164_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2192_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2183_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2163_, v___x_2182_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2186_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2183_, 1);
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 0, v_a_2184_);
v___x_2186_ = v___x_2180_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
v_val_2167_ = v___x_2186_;
goto v___jp_2166_;
}
}
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; 
v_a_2188_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v___x_2183_, 1);
if (v_isShared_2181_ == 0)
{
lean_ctor_set_tag(v___x_2180_, 0);
lean_ctor_set(v___x_2180_, 0, v_a_2188_);
v___x_2190_ = v___x_2180_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2188_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
v_val_2167_ = v___x_2190_;
goto v___jp_2166_;
}
}
}
}
v___jp_2166_:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v_val_2167_);
v___x_2169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2160_, v___x_2161_, v___x_2168_, v___f_2162_);
return v___x_2169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2194_, lean_object* v___x_2195_, lean_object* v___f_2196_, lean_object* v_a_2197_, lean_object* v_x_2198_, lean_object* v___y_2199_){
_start:
{
uint8_t v___x_5404__boxed_2200_; lean_object* v_res_2201_; 
v___x_5404__boxed_2200_ = lean_unbox(v___x_2195_);
v_res_2201_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2194_, v___x_5404__boxed_2200_, v___f_2196_, v_a_2197_, v_x_2198_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2203_, lean_object* v___x_2204_, uint8_t v___x_2205_, lean_object* v___f_2206_, lean_object* v_chunk_2207_){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2209_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2210_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_chunk_2207_);
v___x_2211_ = lean_unsigned_to_nat(1u);
v___x_2212_ = lean_mk_empty_array_with_capacity(v___x_2211_);
v___x_2213_ = lean_array_push(v___x_2212_, v___x_2210_);
v___x_2214_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2203_, v___x_2209_, v___x_2213_);
v___x_2215_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2204_, v___x_2205_, v___x_2214_, v___f_2206_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2216_, lean_object* v___x_2217_, lean_object* v___x_2218_, lean_object* v___f_2219_, lean_object* v_chunk_2220_, lean_object* v___y_2221_){
_start:
{
uint8_t v___x_5483__boxed_2222_; lean_object* v_res_2223_; 
v___x_5483__boxed_2222_ = lean_unbox(v___x_2218_);
v_res_2223_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2216_, v___x_2217_, v___x_5483__boxed_2222_, v___f_2219_, v_chunk_2220_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2225_, lean_object* v_a_2226_, lean_object* v___x_2227_, uint8_t v___x_2228_, lean_object* v___f_2229_, lean_object* v_x_2230_){
_start:
{
if (lean_obj_tag(v_x_2230_) == 0)
{
lean_object* v___x_2232_; 
lean_dec_ref(v___f_2229_);
lean_dec(v___x_2227_);
lean_dec(v_a_2226_);
lean_dec_ref(v___x_2225_);
v___x_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2232_, 0, v_x_2230_);
return v___x_2232_;
}
else
{
lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2245_; 
v_isSharedCheck_2245_ = !lean_is_exclusive(v_x_2230_);
if (v_isSharedCheck_2245_ == 0)
{
lean_object* v_unused_2246_; 
v_unused_2246_ = lean_ctor_get(v_x_2230_, 0);
lean_dec(v_unused_2246_);
v___x_2234_ = v_x_2230_;
v_isShared_2235_ = v_isSharedCheck_2245_;
goto v_resetjp_2233_;
}
else
{
lean_dec(v_x_2230_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2245_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2236_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2235_ == 0)
{
lean_ctor_set_tag(v___x_2234_, 4);
lean_ctor_set(v___x_2234_, 0, v___x_2225_);
v___x_2238_ = v___x_2234_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2225_);
v___x_2238_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2239_ = lean_unsigned_to_nat(1u);
v___x_2240_ = lean_mk_empty_array_with_capacity(v___x_2239_);
v___x_2241_ = lean_array_push(v___x_2240_, v___x_2238_);
v___x_2242_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2226_, v___x_2236_, v___x_2241_);
v___x_2243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2227_, v___x_2228_, v___x_2242_, v___f_2229_);
return v___x_2243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2247_, lean_object* v_a_2248_, lean_object* v___x_2249_, lean_object* v___x_2250_, lean_object* v___f_2251_, lean_object* v_x_2252_, lean_object* v___y_2253_){
_start:
{
uint8_t v___x_5516__boxed_2254_; lean_object* v_res_2255_; 
v___x_5516__boxed_2254_ = lean_unbox(v___x_2250_);
v_res_2255_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2247_, v_a_2248_, v___x_2249_, v___x_5516__boxed_2254_, v___f_2251_, v_x_2252_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2257_, lean_object* v___x_2258_, uint8_t v___x_2259_, lean_object* v___f_2260_, lean_object* v_x_2261_){
_start:
{
if (lean_obj_tag(v_x_2261_) == 0)
{
lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2285_; 
v_a_2263_ = lean_ctor_get(v_x_2261_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v_x_2261_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2265_ = v_x_2261_;
v_isShared_2266_ = v_isSharedCheck_2285_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_dec(v_x_2261_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2285_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___f_2270_; lean_object* v_val_2272_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2267_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2268_ = lean_io_error_to_string(v_a_2263_);
v___x_2269_ = lean_box(v___x_2259_);
lean_inc(v___x_2258_);
lean_inc_ref(v___x_2268_);
v___f_2270_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2270_, 0, v___x_2268_);
lean_closure_set(v___f_2270_, 1, v_a_2257_);
lean_closure_set(v___f_2270_, 2, v___x_2258_);
lean_closure_set(v___f_2270_, 3, v___x_2269_);
lean_closure_set(v___f_2270_, 4, v___f_2260_);
v___x_2275_ = lean_string_append(v___x_2267_, v___x_2268_);
lean_dec_ref(v___x_2268_);
v___x_2276_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2275_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2279_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2276_, 1);
if (v_isShared_2266_ == 0)
{
lean_ctor_set_tag(v___x_2265_, 1);
lean_ctor_set(v___x_2265_, 0, v_a_2277_);
v___x_2279_ = v___x_2265_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2277_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
v_val_2272_ = v___x_2279_;
goto v___jp_2271_;
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; 
v_a_2281_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2276_, 1);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 0, v_a_2281_);
v___x_2283_ = v___x_2265_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
v_val_2272_ = v___x_2283_;
goto v___jp_2271_;
}
}
v___jp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v_val_2272_);
v___x_2274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2258_, v___x_2259_, v___x_2273_, v___f_2270_);
return v___x_2274_;
}
}
}
else
{
lean_object* v___x_2286_; 
lean_dec_ref(v___f_2260_);
lean_dec(v___x_2258_);
lean_dec(v_a_2257_);
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_x_2261_);
return v___x_2286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2287_, lean_object* v___x_2288_, lean_object* v___x_2289_, lean_object* v___f_2290_, lean_object* v_x_2291_, lean_object* v___y_2292_){
_start:
{
uint8_t v___x_5571__boxed_2293_; lean_object* v_res_2294_; 
v___x_5571__boxed_2293_ = lean_unbox(v___x_2289_);
v_res_2294_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2287_, v___x_2288_, v___x_5571__boxed_2293_, v___f_2290_, v_x_2291_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2296_, lean_object* v___x_2297_, lean_object* v___x_2298_, uint8_t v___x_2299_, lean_object* v___f_2300_, lean_object* v_x_2301_){
_start:
{
if (lean_obj_tag(v_x_2301_) == 0)
{
lean_object* v___x_2303_; 
lean_dec_ref(v___f_2300_);
lean_dec(v___x_2298_);
lean_dec_ref(v___x_2297_);
lean_dec(v_a_2296_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_x_2301_);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
lean_dec_ref_known(v_x_2301_, 1);
v___x_2304_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2305_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2296_, v___x_2304_, v___x_2297_);
v___x_2306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2298_, v___x_2299_, v___x_2305_, v___f_2300_);
return v___x_2306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2307_, lean_object* v___x_2308_, lean_object* v___x_2309_, lean_object* v___x_2310_, lean_object* v___f_2311_, lean_object* v_x_2312_, lean_object* v___y_2313_){
_start:
{
uint8_t v___x_5642__boxed_2314_; lean_object* v_res_2315_; 
v___x_5642__boxed_2314_ = lean_unbox(v___x_2310_);
v_res_2315_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2307_, v___x_2308_, v___x_2309_, v___x_5642__boxed_2314_, v___f_2311_, v_x_2312_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2316_, lean_object* v___f_2317_, lean_object* v___x_2318_, uint8_t v___x_2319_, lean_object* v___f_2320_, lean_object* v___f_2321_){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = lean_apply_2(v_val_2316_, v___f_2317_, lean_box(0));
lean_inc(v___x_2318_);
v___x_2324_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2318_, v___x_2319_, v___x_2323_, v___f_2320_);
v___x_2325_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2318_, v___x_2319_, v___x_2324_, v___f_2321_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2326_, lean_object* v___f_2327_, lean_object* v___x_2328_, lean_object* v___x_2329_, lean_object* v___f_2330_, lean_object* v___f_2331_, lean_object* v___y_2332_){
_start:
{
uint8_t v___x_5674__boxed_2333_; lean_object* v_res_2334_; 
v___x_5674__boxed_2333_ = lean_unbox(v___x_2329_);
v_res_2334_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2326_, v___f_2327_, v___x_2328_, v___x_5674__boxed_2333_, v___f_2330_, v___f_2331_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2335_, uint8_t v___x_2336_, lean_object* v___f_2337_, lean_object* v___f_2338_, lean_object* v___x_2339_, lean_object* v___f_2340_, lean_object* v_val_2341_, lean_object* v___f_2342_, lean_object* v_x_2343_){
_start:
{
if (lean_obj_tag(v_x_2343_) == 0)
{
lean_object* v___x_2345_; 
lean_dec_ref(v___f_2342_);
lean_dec_ref(v_val_2341_);
lean_dec_ref(v___f_2340_);
lean_dec_ref(v___x_2339_);
lean_dec_ref(v___f_2338_);
lean_dec_ref(v___f_2337_);
lean_dec(v___x_2335_);
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v_x_2343_);
return v___x_2345_;
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2347_; lean_object* v___f_2348_; lean_object* v___x_2349_; lean_object* v___f_2350_; lean_object* v___x_2351_; lean_object* v___f_2352_; lean_object* v___x_2353_; lean_object* v___f_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v_a_2346_ = lean_ctor_get(v_x_2343_, 0);
lean_inc_n(v_a_2346_, 3);
lean_dec_ref_known(v_x_2343_, 1);
v___x_2347_ = lean_box(v___x_2336_);
lean_inc_n(v___x_2335_, 5);
v___f_2348_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2348_, 0, v_a_2346_);
lean_closure_set(v___f_2348_, 1, v___x_2335_);
lean_closure_set(v___f_2348_, 2, v___x_2347_);
lean_closure_set(v___f_2348_, 3, v___f_2337_);
v___x_2349_ = lean_box(v___x_2336_);
v___f_2350_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2350_, 0, v_a_2346_);
lean_closure_set(v___f_2350_, 1, v___x_2335_);
lean_closure_set(v___f_2350_, 2, v___x_2349_);
lean_closure_set(v___f_2350_, 3, v___f_2338_);
v___x_2351_ = lean_box(v___x_2336_);
v___f_2352_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2352_, 0, v_a_2346_);
lean_closure_set(v___f_2352_, 1, v___x_2339_);
lean_closure_set(v___f_2352_, 2, v___x_2335_);
lean_closure_set(v___f_2352_, 3, v___x_2351_);
lean_closure_set(v___f_2352_, 4, v___f_2340_);
v___x_2353_ = lean_box(v___x_2336_);
v___f_2354_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2354_, 0, v_val_2341_);
lean_closure_set(v___f_2354_, 1, v___f_2348_);
lean_closure_set(v___f_2354_, 2, v___x_2335_);
lean_closure_set(v___f_2354_, 3, v___x_2353_);
lean_closure_set(v___f_2354_, 4, v___f_2352_);
lean_closure_set(v___f_2354_, 5, v___f_2350_);
v___x_2355_ = lean_io_as_task(v___f_2354_, v___x_2335_);
lean_dec_ref(v___x_2355_);
v___x_2356_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2357_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2335_, v___x_2336_, v___x_2356_, v___f_2342_);
return v___x_2357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2358_, lean_object* v___x_2359_, lean_object* v___f_2360_, lean_object* v___f_2361_, lean_object* v___x_2362_, lean_object* v___f_2363_, lean_object* v_val_2364_, lean_object* v___f_2365_, lean_object* v_x_2366_, lean_object* v___y_2367_){
_start:
{
uint8_t v___x_5703__boxed_2368_; lean_object* v_res_2369_; 
v___x_5703__boxed_2368_ = lean_unbox(v___x_2359_);
v_res_2369_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2358_, v___x_5703__boxed_2368_, v___f_2360_, v___f_2361_, v___x_2362_, v___f_2363_, v_val_2364_, v___f_2365_, v_x_2366_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2371_, uint8_t v___x_2372_, lean_object* v___f_2373_, lean_object* v___x_2374_, lean_object* v_x_2375_){
_start:
{
lean_object* v_val_2378_; 
if (lean_obj_tag(v_x_2375_) == 0)
{
lean_object* v___x_2381_; 
lean_dec_ref(v___x_2374_);
lean_dec_ref(v___f_2373_);
lean_dec(v___x_2371_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_x_2375_);
return v___x_2381_;
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2396_; 
v_a_2382_ = lean_ctor_get(v_x_2375_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_x_2375_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2384_ = v_x_2375_;
v_isShared_2385_ = v_isSharedCheck_2396_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v_x_2375_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2396_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2387_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2382_, v___x_2386_, v___x_2374_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v___x_2390_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v_a_2388_);
v___x_2390_ = v___x_2384_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
v_val_2378_ = v___x_2390_;
goto v___jp_2377_;
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; 
v_a_2392_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2392_);
lean_dec_ref_known(v___x_2387_, 1);
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 0);
lean_ctor_set(v___x_2384_, 0, v_a_2392_);
v___x_2394_ = v___x_2384_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2392_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
v_val_2378_ = v___x_2394_;
goto v___jp_2377_;
}
}
}
}
v___jp_2377_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2379_, 0, v_val_2378_);
v___x_2380_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2371_, v___x_2372_, v___x_2379_, v___f_2373_);
return v___x_2380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2397_, lean_object* v___x_2398_, lean_object* v___f_2399_, lean_object* v___x_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_){
_start:
{
uint8_t v___x_5764__boxed_2403_; lean_object* v_res_2404_; 
v___x_5764__boxed_2403_ = lean_unbox(v___x_2398_);
v_res_2404_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2397_, v___x_5764__boxed_2403_, v___f_2399_, v___x_2400_, v_x_2401_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2406_, lean_object* v___x_2407_, uint8_t v___x_2408_, lean_object* v_a_2409_, lean_object* v___f_2410_, lean_object* v___f_2411_, lean_object* v___x_2412_, lean_object* v___f_2413_, lean_object* v_val_2414_, lean_object* v_a_2415_, lean_object* v_x_2416_){
_start:
{
if (lean_obj_tag(v_x_2416_) == 0)
{
lean_object* v___x_2418_; 
lean_dec(v_a_2415_);
lean_dec_ref(v_val_2414_);
lean_dec_ref(v___f_2413_);
lean_dec_ref(v___x_2412_);
lean_dec_ref(v___f_2411_);
lean_dec_ref(v___f_2410_);
lean_dec(v_a_2409_);
lean_dec(v___x_2407_);
lean_dec(v___x_2406_);
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v_x_2416_);
return v___x_2418_;
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2444_; 
v_a_2419_ = lean_ctor_get(v_x_2416_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_x_2416_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2421_ = v_x_2416_;
v_isShared_2422_ = v_isSharedCheck_2444_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v_x_2416_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2444_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___f_2423_; lean_object* v___x_2424_; lean_object* v___f_2425_; lean_object* v___x_2426_; lean_object* v___f_2427_; lean_object* v___x_2428_; lean_object* v___f_2429_; lean_object* v_val_2431_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___f_2423_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2423_, 0, v_a_2419_);
lean_closure_set(v___f_2423_, 1, v___x_2406_);
v___x_2424_ = lean_box(v___x_2408_);
lean_inc_n(v___x_2407_, 3);
v___f_2425_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2425_, 0, v___x_2407_);
lean_closure_set(v___f_2425_, 1, v___x_2424_);
lean_closure_set(v___f_2425_, 2, v___f_2423_);
lean_closure_set(v___f_2425_, 3, v_a_2409_);
v___x_2426_ = lean_box(v___x_2408_);
lean_inc_ref(v___x_2412_);
v___f_2427_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2427_, 0, v___x_2407_);
lean_closure_set(v___f_2427_, 1, v___x_2426_);
lean_closure_set(v___f_2427_, 2, v___f_2410_);
lean_closure_set(v___f_2427_, 3, v___f_2411_);
lean_closure_set(v___f_2427_, 4, v___x_2412_);
lean_closure_set(v___f_2427_, 5, v___f_2413_);
lean_closure_set(v___f_2427_, 6, v_val_2414_);
lean_closure_set(v___f_2427_, 7, v___f_2425_);
v___x_2428_ = lean_box(v___x_2408_);
v___f_2429_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2429_, 0, v___x_2407_);
lean_closure_set(v___f_2429_, 1, v___x_2428_);
lean_closure_set(v___f_2429_, 2, v___f_2427_);
lean_closure_set(v___f_2429_, 3, v___x_2412_);
v___x_2434_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2435_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2415_, v___x_2434_);
if (lean_obj_tag(v___x_2435_) == 0)
{
lean_object* v_a_2436_; lean_object* v___x_2438_; 
v_a_2436_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_a_2436_);
lean_dec_ref_known(v___x_2435_, 1);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v_a_2436_);
v___x_2438_ = v___x_2421_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
v_val_2431_ = v___x_2438_;
goto v___jp_2430_;
}
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; 
v_a_2440_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_a_2440_);
lean_dec_ref_known(v___x_2435_, 1);
if (v_isShared_2422_ == 0)
{
lean_ctor_set_tag(v___x_2421_, 0);
lean_ctor_set(v___x_2421_, 0, v_a_2440_);
v___x_2442_ = v___x_2421_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
v_val_2431_ = v___x_2442_;
goto v___jp_2430_;
}
}
v___jp_2430_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2432_, 0, v_val_2431_);
v___x_2433_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2407_, v___x_2408_, v___x_2432_, v___f_2429_);
return v___x_2433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2445_, lean_object* v___x_2446_, lean_object* v___x_2447_, lean_object* v_a_2448_, lean_object* v___f_2449_, lean_object* v___f_2450_, lean_object* v___x_2451_, lean_object* v___f_2452_, lean_object* v_val_2453_, lean_object* v_a_2454_, lean_object* v_x_2455_, lean_object* v___y_2456_){
_start:
{
uint8_t v___x_5827__boxed_2457_; lean_object* v_res_2458_; 
v___x_5827__boxed_2457_ = lean_unbox(v___x_2447_);
v_res_2458_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2445_, v___x_2446_, v___x_5827__boxed_2457_, v_a_2448_, v___f_2449_, v___f_2450_, v___x_2451_, v___f_2452_, v_val_2453_, v_a_2454_, v_x_2455_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2460_, lean_object* v___x_2461_, uint8_t v___x_2462_, lean_object* v_a_2463_, lean_object* v___f_2464_, lean_object* v___f_2465_, lean_object* v___x_2466_, lean_object* v___f_2467_, lean_object* v_val_2468_, lean_object* v_x_2469_){
_start:
{
if (lean_obj_tag(v_x_2469_) == 0)
{
lean_object* v___x_2471_; 
lean_dec_ref(v_val_2468_);
lean_dec_ref(v___f_2467_);
lean_dec_ref(v___x_2466_);
lean_dec_ref(v___f_2465_);
lean_dec_ref(v___f_2464_);
lean_dec(v_a_2463_);
lean_dec(v___x_2461_);
lean_dec(v___x_2460_);
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v_x_2469_);
return v___x_2471_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2492_; 
v_a_2472_ = lean_ctor_get(v_x_2469_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_x_2469_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2474_ = v_x_2469_;
v_isShared_2475_ = v_isSharedCheck_2492_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v_x_2469_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2492_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; lean_object* v___f_2477_; lean_object* v_val_2479_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2476_ = lean_box(v___x_2462_);
lean_inc(v_a_2472_);
lean_inc(v___x_2461_);
v___f_2477_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2477_, 0, v___x_2460_);
lean_closure_set(v___f_2477_, 1, v___x_2461_);
lean_closure_set(v___f_2477_, 2, v___x_2476_);
lean_closure_set(v___f_2477_, 3, v_a_2463_);
lean_closure_set(v___f_2477_, 4, v___f_2464_);
lean_closure_set(v___f_2477_, 5, v___f_2465_);
lean_closure_set(v___f_2477_, 6, v___x_2466_);
lean_closure_set(v___f_2477_, 7, v___f_2467_);
lean_closure_set(v___f_2477_, 8, v_val_2468_);
lean_closure_set(v___f_2477_, 9, v_a_2472_);
v___x_2482_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2483_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2472_, v___x_2482_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_object* v_a_2484_; lean_object* v___x_2486_; 
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2483_, 1);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 0, v_a_2484_);
v___x_2486_ = v___x_2474_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
v_val_2479_ = v___x_2486_;
goto v___jp_2478_;
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; 
v_a_2488_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2488_);
lean_dec_ref_known(v___x_2483_, 1);
if (v_isShared_2475_ == 0)
{
lean_ctor_set_tag(v___x_2474_, 0);
lean_ctor_set(v___x_2474_, 0, v_a_2488_);
v___x_2490_ = v___x_2474_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
v_val_2479_ = v___x_2490_;
goto v___jp_2478_;
}
}
v___jp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v_val_2479_);
v___x_2481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2461_, v___x_2462_, v___x_2480_, v___f_2477_);
return v___x_2481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2493_, lean_object* v___x_2494_, lean_object* v___x_2495_, lean_object* v_a_2496_, lean_object* v___f_2497_, lean_object* v___f_2498_, lean_object* v___x_2499_, lean_object* v___f_2500_, lean_object* v_val_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v___x_5921__boxed_2504_; lean_object* v_res_2505_; 
v___x_5921__boxed_2504_ = lean_unbox(v___x_2495_);
v_res_2505_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2493_, v___x_2494_, v___x_5921__boxed_2504_, v_a_2496_, v___f_2497_, v___f_2498_, v___x_2499_, v___f_2500_, v_val_2501_, v_x_2502_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2506_, uint8_t v___x_2507_, lean_object* v_a_2508_, lean_object* v___f_2509_, lean_object* v___f_2510_, lean_object* v___f_2511_, lean_object* v_val_2512_, lean_object* v_x_2513_){
_start:
{
if (lean_obj_tag(v_x_2513_) == 0)
{
lean_object* v___x_2515_; 
lean_dec_ref(v_val_2512_);
lean_dec_ref(v___f_2511_);
lean_dec_ref(v___f_2510_);
lean_dec_ref(v___f_2509_);
lean_dec(v_a_2508_);
lean_dec(v___x_2506_);
v___x_2515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2515_, 0, v_x_2513_);
return v___x_2515_;
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2537_; 
v_a_2516_ = lean_ctor_get(v_x_2513_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_x_2513_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2518_ = v_x_2513_;
v_isShared_2519_ = v_isSharedCheck_2537_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v_x_2513_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2537_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___f_2523_; lean_object* v_val_2525_; lean_object* v___x_2528_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2522_ = lean_box(v___x_2507_);
v___f_2523_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2523_, 0, v___x_2506_);
lean_closure_set(v___f_2523_, 1, v___x_2520_);
lean_closure_set(v___f_2523_, 2, v___x_2522_);
lean_closure_set(v___f_2523_, 3, v_a_2508_);
lean_closure_set(v___f_2523_, 4, v___f_2509_);
lean_closure_set(v___f_2523_, 5, v___f_2510_);
lean_closure_set(v___f_2523_, 6, v___x_2521_);
lean_closure_set(v___f_2523_, 7, v___f_2511_);
lean_closure_set(v___f_2523_, 8, v_val_2512_);
v___x_2528_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2516_, v___x_2521_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v_a_2529_);
v___x_2531_ = v___x_2518_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2529_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
v_val_2525_ = v___x_2531_;
goto v___jp_2524_;
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; 
v_a_2533_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2528_, 1);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 0);
lean_ctor_set(v___x_2518_, 0, v_a_2533_);
v___x_2535_ = v___x_2518_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
v_val_2525_ = v___x_2535_;
goto v___jp_2524_;
}
}
v___jp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2526_, 0, v_val_2525_);
v___x_2527_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2520_, v___x_2507_, v___x_2526_, v___f_2523_);
return v___x_2527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2538_, lean_object* v___x_2539_, lean_object* v_a_2540_, lean_object* v___f_2541_, lean_object* v___f_2542_, lean_object* v___f_2543_, lean_object* v_val_2544_, lean_object* v_x_2545_, lean_object* v___y_2546_){
_start:
{
uint8_t v___x_6001__boxed_2547_; lean_object* v_res_2548_; 
v___x_6001__boxed_2547_ = lean_unbox(v___x_2539_);
v_res_2548_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2538_, v___x_6001__boxed_2547_, v_a_2540_, v___f_2541_, v___f_2542_, v___f_2543_, v_val_2544_, v_x_2545_);
return v_res_2548_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2549_ = lean_box(1);
v___x_2550_ = lean_unsigned_to_nat(2u);
v___x_2551_ = lean_mk_empty_array_with_capacity(v___x_2550_);
v___x_2552_ = lean_array_push(v___x_2551_, v___x_2549_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2553_, lean_object* v_x_2554_){
_start:
{
lean_object* v_val_2557_; 
if (lean_obj_tag(v_x_2554_) == 0)
{
lean_object* v___x_2559_; 
lean_dec(v___x_2553_);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_x_2554_);
return v___x_2559_;
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2575_; 
v_a_2560_ = lean_ctor_get(v_x_2554_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_x_2554_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2562_ = v_x_2554_;
v_isShared_2563_ = v_isSharedCheck_2575_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v_x_2554_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2575_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2564_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2565_ = lean_array_push(v___x_2564_, v___x_2553_);
v___x_2566_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2560_, v___x_2565_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v___x_2569_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_a_2567_);
lean_dec_ref_known(v___x_2566_, 1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v_a_2567_);
v___x_2569_ = v___x_2562_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2567_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
v_val_2557_ = v___x_2569_;
goto v___jp_2556_;
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; 
v_a_2571_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2566_, 1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set_tag(v___x_2562_, 0);
lean_ctor_set(v___x_2562_, 0, v_a_2571_);
v___x_2573_ = v___x_2562_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
v_val_2557_ = v___x_2573_;
goto v___jp_2556_;
}
}
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2558_, 0, v_val_2557_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2576_, lean_object* v_x_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2576_, v_x_2577_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2580_, size_t v_i_2581_, lean_object* v_bs_2582_){
_start:
{
uint8_t v___x_2583_; 
v___x_2583_ = lean_usize_dec_lt(v_i_2581_, v_sz_2580_);
if (v___x_2583_ == 0)
{
return v_bs_2582_;
}
else
{
lean_object* v_v_2584_; lean_object* v_fst_2585_; lean_object* v_snd_2586_; lean_object* v___x_2587_; lean_object* v_bs_x27_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; size_t v___x_2596_; size_t v___x_2597_; lean_object* v___x_2598_; 
v_v_2584_ = lean_array_uget_borrowed(v_bs_2582_, v_i_2581_);
v_fst_2585_ = lean_ctor_get(v_v_2584_, 0);
lean_inc(v_fst_2585_);
v_snd_2586_ = lean_ctor_get(v_v_2584_, 1);
lean_inc(v_snd_2586_);
v___x_2587_ = lean_unsigned_to_nat(0u);
v_bs_x27_2588_ = lean_array_uset(v_bs_2582_, v_i_2581_, v___x_2587_);
v___x_2589_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_fst_2585_);
v___x_2590_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2590_, 0, v_snd_2586_);
v___x_2591_ = lean_unsigned_to_nat(2u);
v___x_2592_ = lean_mk_empty_array_with_capacity(v___x_2591_);
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2589_);
v___x_2594_ = lean_array_push(v___x_2593_, v___x_2590_);
v___x_2595_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
v___x_2596_ = ((size_t)1ULL);
v___x_2597_ = lean_usize_add(v_i_2581_, v___x_2596_);
v___x_2598_ = lean_array_uset(v_bs_x27_2588_, v_i_2581_, v___x_2595_);
v_i_2581_ = v___x_2597_;
v_bs_2582_ = v___x_2598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2600_, lean_object* v_i_2601_, lean_object* v_bs_2602_){
_start:
{
size_t v_sz_boxed_2603_; size_t v_i_boxed_2604_; lean_object* v_res_2605_; 
v_sz_boxed_2603_ = lean_unbox_usize(v_sz_2600_);
lean_dec(v_sz_2600_);
v_i_boxed_2604_ = lean_unbox_usize(v_i_2601_);
lean_dec(v_i_2601_);
v_res_2605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2603_, v_i_boxed_2604_, v_bs_2602_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2609_, lean_object* v_method_2610_, lean_object* v___f_2611_, lean_object* v___f_2612_, lean_object* v___f_2613_, lean_object* v_x_2614_){
_start:
{
lean_object* v___y_2617_; uint8_t v___y_2618_; lean_object* v___y_2619_; lean_object* v_val_2620_; uint8_t v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v_val_2627_; uint8_t v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v_val_2634_; 
if (lean_obj_tag(v_x_2614_) == 0)
{
lean_object* v___x_2637_; 
lean_dec_ref(v___f_2613_);
lean_dec_ref(v___f_2612_);
lean_dec_ref(v___f_2611_);
lean_dec_ref(v_r_2609_);
v___x_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2637_, 0, v_x_2614_);
return v___x_2637_;
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2731_; 
v_a_2638_ = lean_ctor_get(v_x_2614_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v_x_2614_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2640_ = v_x_2614_;
v_isShared_2641_ = v_isSharedCheck_2731_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v_x_2614_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2731_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___y_2643_; lean_object* v___y_2644_; uint16_t v_status_2658_; lean_object* v_headers_2659_; lean_object* v_body_2660_; lean_object* v_stream_2661_; lean_object* v___x_2662_; lean_object* v___y_2664_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; uint8_t v___x_2727_; 
v_status_2658_ = lean_ctor_get_uint16(v_r_2609_, sizeof(void*)*3);
v_headers_2659_ = lean_ctor_get(v_r_2609_, 0);
lean_inc_ref(v_headers_2659_);
v_body_2660_ = lean_ctor_get(v_r_2609_, 1);
lean_inc_ref(v_body_2660_);
v_stream_2661_ = lean_ctor_get(v_r_2609_, 2);
lean_inc(v_stream_2661_);
lean_dec_ref(v_r_2609_);
v___x_2662_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2723_ = lean_uint16_to_nat(v_status_2658_);
v___x_2724_ = lean_nat_to_int(v___x_2723_);
v___x_2725_ = lean_nat_abs(v___x_2724_);
v___x_2726_ = lean_cstr_to_nat("9007199254740991");
v___x_2727_ = lean_nat_dec_le(v___x_2725_, v___x_2726_);
lean_dec(v___x_2725_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; 
v___x_2728_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2724_);
v___y_2664_ = v___x_2728_;
goto v___jp_2663_;
}
else
{
double v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = l_Float_ofInt(v___x_2724_);
lean_dec(v___x_2724_);
v___x_2730_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2730_, 0, v___x_2729_);
v___y_2664_ = v___x_2730_;
goto v___jp_2663_;
}
v___jp_2642_:
{
lean_object* v___f_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; 
v___f_2645_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2645_, 0, v___y_2644_);
lean_closure_set(v___f_2645_, 1, v___y_2643_);
v___x_2646_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2647_ = lean_unsigned_to_nat(0u);
v___x_2648_ = 0;
v___x_2649_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2638_, v___x_2646_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2652_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 0, v_a_2650_);
v___x_2652_ = v___x_2640_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v___y_2631_ = v___x_2648_;
v___y_2632_ = v___f_2645_;
v___y_2633_ = v___x_2647_;
v_val_2634_ = v___x_2652_;
goto v___jp_2630_;
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; 
v_a_2654_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2649_, 1);
if (v_isShared_2641_ == 0)
{
lean_ctor_set_tag(v___x_2640_, 0);
lean_ctor_set(v___x_2640_, 0, v_a_2654_);
v___x_2656_ = v___x_2640_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2654_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
v___y_2631_ = v___x_2648_;
v___y_2632_ = v___f_2645_;
v___y_2633_ = v___x_2647_;
v_val_2634_ = v___x_2656_;
goto v___jp_2630_;
}
}
}
v___jp_2663_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; size_t v_sz_2667_; size_t v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2662_);
lean_ctor_set(v___x_2665_, 1, v___y_2664_);
v___x_2666_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2667_ = lean_array_size(v_headers_2659_);
v___x_2668_ = ((size_t)0ULL);
v___x_2669_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2667_, v___x_2668_, v_headers_2659_);
v___x_2670_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2666_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = lean_box(0);
v___x_2673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2671_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2665_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
v___x_2675_ = l_Lasm_JS_obj(v___x_2674_);
if (lean_obj_tag(v_stream_2661_) == 0)
{
uint8_t v___x_2676_; 
lean_dec_ref(v___f_2613_);
lean_dec_ref(v___f_2612_);
lean_dec_ref(v___f_2611_);
v___x_2676_ = l_Lasm_Fetch_bodyless(v_method_2610_, v_status_2658_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_body_2660_);
v___y_2643_ = v___x_2675_;
v___y_2644_ = v___x_2677_;
goto v___jp_2642_;
}
else
{
lean_object* v___x_2678_; 
lean_dec_ref(v_body_2660_);
v___x_2678_ = lean_box(1);
v___y_2643_ = v___x_2675_;
v___y_2644_ = v___x_2678_;
goto v___jp_2642_;
}
}
else
{
lean_object* v_val_2679_; uint8_t v___x_2680_; 
lean_dec_ref(v_body_2660_);
lean_del_object(v___x_2640_);
v_val_2679_ = lean_ctor_get(v_stream_2661_, 0);
lean_inc(v_val_2679_);
lean_dec_ref_known(v_stream_2661_, 1);
v___x_2680_ = l_Lasm_Fetch_bodyless(v_method_2610_, v_status_2658_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; lean_object* v___f_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2681_ = lean_box(v___x_2680_);
lean_inc(v_a_2638_);
v___f_2682_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2682_, 0, v___x_2675_);
lean_closure_set(v___f_2682_, 1, v___x_2681_);
lean_closure_set(v___f_2682_, 2, v_a_2638_);
lean_closure_set(v___f_2682_, 3, v___f_2611_);
lean_closure_set(v___f_2682_, 4, v___f_2612_);
lean_closure_set(v___f_2682_, 5, v___f_2613_);
lean_closure_set(v___f_2682_, 6, v_val_2679_);
v___x_2683_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2684_ = lean_unsigned_to_nat(0u);
v___x_2685_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2638_, v___x_2683_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
lean_ctor_set_tag(v___x_2688_, 1);
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
v___y_2624_ = v___x_2680_;
v___y_2625_ = v___x_2684_;
v___y_2626_ = v___f_2682_;
v_val_2627_ = v___x_2691_;
goto v___jp_2623_;
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
v_a_2694_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2685_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2685_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
lean_ctor_set_tag(v___x_2696_, 0);
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
v___y_2624_ = v___x_2680_;
v___y_2625_ = v___x_2684_;
v___y_2626_ = v___f_2682_;
v_val_2627_ = v___x_2699_;
goto v___jp_2623_;
}
}
}
}
else
{
lean_object* v___f_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; 
lean_dec(v_val_2679_);
lean_dec_ref(v___f_2613_);
lean_dec_ref(v___f_2612_);
lean_dec_ref(v___f_2611_);
v___f_2702_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2702_, 0, v___x_2675_);
v___x_2703_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2704_ = lean_unsigned_to_nat(0u);
v___x_2705_ = 0;
v___x_2706_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2638_, v___x_2703_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2714_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2709_ = v___x_2706_;
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2706_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2712_; 
if (v_isShared_2710_ == 0)
{
lean_ctor_set_tag(v___x_2709_, 1);
v___x_2712_ = v___x_2709_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_a_2707_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
v___y_2617_ = v___x_2704_;
v___y_2618_ = v___x_2705_;
v___y_2619_ = v___f_2702_;
v_val_2620_ = v___x_2712_;
goto v___jp_2616_;
}
}
}
else
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2722_; 
v_a_2715_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2717_ = v___x_2706_;
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2706_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
lean_ctor_set_tag(v___x_2717_, 0);
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_a_2715_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
v___y_2617_ = v___x_2704_;
v___y_2618_ = v___x_2705_;
v___y_2619_ = v___f_2702_;
v_val_2620_ = v___x_2720_;
goto v___jp_2616_;
}
}
}
}
}
}
}
}
v___jp_2616_:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_val_2620_);
v___x_2622_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2617_, v___y_2618_, v___x_2621_, v___y_2619_);
return v___x_2622_;
}
v___jp_2623_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v_val_2627_);
v___x_2629_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2625_, v___y_2624_, v___x_2628_, v___y_2626_);
return v___x_2629_;
}
v___jp_2630_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_val_2634_);
v___x_2636_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2633_, v___y_2631_, v___x_2635_, v___y_2632_);
return v___x_2636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2732_, lean_object* v_method_2733_, lean_object* v___f_2734_, lean_object* v___f_2735_, lean_object* v___f_2736_, lean_object* v_x_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2732_, v_method_2733_, v___f_2734_, v___f_2735_, v___f_2736_, v_x_2737_);
lean_dec_ref(v_method_2733_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2741_, lean_object* v_r_2742_){
_start:
{
lean_object* v___f_2744_; lean_object* v___f_2745_; lean_object* v___x_2746_; uint8_t v___x_2747_; lean_object* v_val_2749_; lean_object* v___x_2752_; 
v___f_2744_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2745_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2745_, 0, v_r_2742_);
lean_closure_set(v___f_2745_, 1, v_method_2741_);
lean_closure_set(v___f_2745_, 2, v___f_2744_);
lean_closure_set(v___f_2745_, 3, v___f_2744_);
lean_closure_set(v___f_2745_, 4, v___f_2744_);
v___x_2746_ = lean_unsigned_to_nat(0u);
v___x_2747_ = 0;
v___x_2752_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2752_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2752_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
lean_ctor_set_tag(v___x_2755_, 1);
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
v_val_2749_ = v___x_2758_;
goto v___jp_2748_;
}
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
v_a_2761_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2752_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2752_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
lean_ctor_set_tag(v___x_2763_, 0);
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
v_val_2749_ = v___x_2766_;
goto v___jp_2748_;
}
}
}
v___jp_2748_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2750_, 0, v_val_2749_);
v___x_2751_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2746_, v___x_2747_, v___x_2750_, v___f_2745_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2769_, lean_object* v_r_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2769_, v_r_2770_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_st_mk_ref(v___x_2774_);
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2779_){
_start:
{
if (lean_obj_tag(v_x_2779_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2789_; 
v_a_2781_ = lean_ctor_get(v_x_2779_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_x_2779_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2783_ = v_x_2779_;
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v_x_2779_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; 
v___x_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
return v___x_2787_;
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2800_; 
v_a_2790_ = lean_ctor_get(v_x_2779_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v_x_2779_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2792_ = v_x_2779_;
v_isShared_2793_ = v_isSharedCheck_2800_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v_x_2779_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2800_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2797_; 
v___x_2794_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2795_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2795_, 0, v_a_2790_);
lean_ctor_set(v___x_2795_, 1, v___x_2794_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v___x_2795_);
v___x_2797_ = v___x_2792_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2795_);
v___x_2797_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
lean_object* v___x_2798_; 
v___x_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
return v___x_2798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2801_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2804_, lean_object* v___x_2805_, lean_object* v___f_2806_, lean_object* v_x_2807_){
_start:
{
if (lean_obj_tag(v_x_2807_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2817_; 
lean_dec_ref(v___f_2806_);
lean_dec(v___x_2805_);
lean_dec_ref(v___y_2804_);
v_a_2809_ = lean_ctor_get(v_x_2807_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v_x_2807_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2811_ = v_x_2807_;
v_isShared_2812_ = v_isSharedCheck_2817_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v_x_2807_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2817_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
lean_object* v___x_2815_; 
v___x_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
return v___x_2815_;
}
}
}
else
{
lean_object* v_a_2818_; uint8_t v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_a_2818_ = lean_ctor_get(v_x_2807_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v_x_2807_, 1);
v___x_2819_ = 0;
v___x_2820_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2804_, v_a_2818_);
v___x_2821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2805_, v___x_2819_, v___x_2820_, v___f_2806_);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2822_, lean_object* v___x_2823_, lean_object* v___f_2824_, lean_object* v_x_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2822_, v___x_2823_, v___f_2824_, v_x_2825_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2828_, lean_object* v___x_2829_, lean_object* v___f_2830_, lean_object* v_req_2831_){
_start:
{
uint8_t v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = 0;
v___x_2834_ = l_Lasm_Fetch_respond(v_handler_2828_, v_req_2831_);
v___x_2835_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2829_, v___x_2833_, v___x_2834_, v___f_2830_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2836_, lean_object* v___x_2837_, lean_object* v___f_2838_, lean_object* v_req_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2836_, v___x_2837_, v___f_2838_, v_req_2839_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2842_, lean_object* v_x_2843_){
_start:
{
if (lean_obj_tag(v_x_2843_) == 0)
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2853_; 
lean_dec_ref(v___f_2842_);
v_a_2845_ = lean_ctor_get(v_x_2843_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_x_2843_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2847_ = v_x_2843_;
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v_x_2843_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2855_; 
v_a_2854_ = lean_ctor_get(v_x_2843_, 0);
lean_inc(v_a_2854_);
lean_dec_ref_known(v_x_2843_, 1);
v___x_2855_ = lean_apply_2(v___f_2842_, v_a_2854_, lean_box(0));
return v___x_2855_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2856_, lean_object* v_x_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2856_, v_x_2857_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v_headers_2862_, lean_object* v___f_2863_, lean_object* v___x_2864_, uint8_t v___x_2865_, lean_object* v___f_2866_, lean_object* v_x_2867_){
_start:
{
if (lean_obj_tag(v_x_2867_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2877_; 
lean_dec_ref(v___f_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___f_2863_);
lean_dec_ref(v_headers_2862_);
lean_dec_ref(v___y_2861_);
lean_dec_ref(v___y_2860_);
v_a_2869_ = lean_ctor_get(v_x_2867_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v_x_2867_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2871_ = v_x_2867_;
v_isShared_2872_ = v_isSharedCheck_2877_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v_x_2867_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2877_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; 
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
return v___x_2875_;
}
}
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2888_; 
v_a_2878_ = lean_ctor_get(v_x_2867_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v_x_2867_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2880_ = v_x_2867_;
v_isShared_2881_ = v_isSharedCheck_2888_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v_x_2867_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2888_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2884_; 
v___x_2882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2882_, 0, v___y_2860_);
lean_ctor_set(v___x_2882_, 1, v___y_2861_);
lean_ctor_set(v___x_2882_, 2, v_headers_2862_);
lean_ctor_set(v___x_2882_, 3, v_a_2878_);
lean_ctor_set(v___x_2882_, 4, v___f_2863_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2882_);
v___x_2884_ = v___x_2880_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v___x_2882_);
v___x_2884_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
v___x_2886_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2864_, v___x_2865_, v___x_2885_, v___f_2866_);
return v___x_2886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v_headers_2891_, lean_object* v___f_2892_, lean_object* v___x_2893_, lean_object* v___x_2894_, lean_object* v___f_2895_, lean_object* v_x_2896_, lean_object* v___y_2897_){
_start:
{
uint8_t v___x_7603__boxed_2898_; lean_object* v_res_2899_; 
v___x_7603__boxed_2898_ = lean_unbox(v___x_2894_);
v_res_2899_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2889_, v___y_2890_, v_headers_2891_, v___f_2892_, v___x_2893_, v___x_7603__boxed_2898_, v___f_2895_, v_x_2896_);
return v_res_2899_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2905_ = lean_string_utf8_byte_size(v___x_2904_);
return v___x_2905_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; 
v___x_2906_ = lean_unsigned_to_nat(0u);
v___x_2907_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2908_ = lean_nat_dec_eq(v___x_2907_, v___x_2906_);
return v___x_2908_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2913_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2914_ = lean_unsigned_to_nat(46u);
v___x_2915_ = lean_unsigned_to_nat(193u);
v___x_2916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2918_ = l_mkPanicMessageWithDecl(v___x_2917_, v___x_2916_, v___x_2915_, v___x_2914_, v___x_2913_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2920_, lean_object* v_d_2921_){
_start:
{
lean_object* v___y_2924_; lean_object* v___y_2925_; 
if (lean_obj_tag(v_d_2921_) == 6)
{
lean_object* v_b_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
v_b_2929_ = lean_ctor_get(v_d_2921_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_d_2921_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v_d_2921_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_b_2929_);
lean_dec(v_d_2921_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 0);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_b_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
else
{
lean_object* v___x_2937_; lean_object* v_received_2939_; 
v___x_2937_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2921_) == 9)
{
lean_object* v_value_2953_; lean_object* v_description_2954_; uint8_t v___x_2955_; 
v_value_2953_ = lean_ctor_get(v_d_2921_, 0);
v_description_2954_ = lean_ctor_get(v_d_2921_, 1);
v___x_2955_ = lean_string_dec_eq(v_description_2954_, v___x_2937_);
if (v___x_2955_ == 0)
{
goto v___jp_2951_;
}
else
{
uint32_t v___x_2956_; uint64_t v___x_2957_; lean_object* v___x_2958_; uint32_t v___x_2959_; lean_object* v___x_2960_; 
lean_inc_n(v_value_2953_, 2);
lean_dec_ref_known(v_d_2921_, 2);
v___x_2956_ = 206;
v___x_2957_ = 0ULL;
v___x_2958_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2958_, 0, v_value_2953_);
lean_ctor_set(v___x_2958_, 1, v___x_2937_);
v___x_2959_ = lasm_js_value_handle(v_value_2953_);
lean_dec(v_value_2953_);
v___x_2960_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2956_, v___x_2957_, v___x_2958_, v___x_2959_);
lean_dec_ref_known(v___x_2958_, 2);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; uint8_t v___x_2962_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2962_ = lean_string_validate_utf8(v_a_2961_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
lean_dec(v_a_2961_);
v___x_2963_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2964_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2963_);
v_received_2939_ = v___x_2964_;
goto v___jp_2938_;
}
else
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_string_from_utf8_unchecked(v_a_2961_);
v_received_2939_ = v___x_2965_;
goto v___jp_2938_;
}
}
else
{
lean_object* v___x_2966_; 
lean_dec_ref_known(v___x_2960_, 1);
v___x_2966_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2939_ = v___x_2966_;
goto v___jp_2938_;
}
}
}
else
{
goto v___jp_2951_;
}
v___jp_2938_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; uint8_t v___x_2949_; 
v___x_2940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2941_ = lean_string_append(v___x_2940_, v_context_2920_);
v___x_2942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2943_ = lean_string_append(v___x_2941_, v___x_2942_);
v___x_2944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2945_ = lean_string_append(v___x_2943_, v___x_2944_);
v___x_2946_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2947_ = lean_string_append(v___x_2945_, v___x_2946_);
v___x_2948_ = lean_string_append(v___x_2947_, v_received_2939_);
lean_dec_ref(v_received_2939_);
v___x_2949_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; 
v___x_2950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2924_ = v___x_2948_;
v___y_2925_ = v___x_2950_;
goto v___jp_2923_;
}
else
{
v___y_2924_ = v___x_2948_;
v___y_2925_ = v___x_2937_;
goto v___jp_2923_;
}
}
v___jp_2951_:
{
lean_object* v___x_2952_; 
v___x_2952_ = l_Lasm_JS_Data_describe(v_d_2921_);
v_received_2939_ = v___x_2952_;
goto v___jp_2938_;
}
}
v___jp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2926_ = lean_string_append(v___y_2924_, v___y_2925_);
v___x_2927_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
return v___x_2928_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2967_, lean_object* v_d_2968_, lean_object* v_a_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2967_, v_d_2968_);
lean_dec_ref(v_context_2967_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2971_, lean_object* v_bytes_2972_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = l_Lasm_JS_Wire_decode(v_bytes_2972_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2976_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_2976_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2971_, v_a_2975_);
return v___x_2976_;
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2984_; 
v_a_2977_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2979_ = v___x_2974_;
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2974_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2982_; 
if (v_isShared_2980_ == 0)
{
v___x_2982_ = v___x_2979_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2985_, lean_object* v_bytes_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2985_, v_bytes_2986_);
lean_dec_ref(v_bytes_2986_);
lean_dec_ref(v_context_2985_);
return v_res_2988_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2989_, uint64_t v_extra_2990_){
_start:
{
uint64_t v___x_2991_; uint64_t v___y_2993_; 
v___x_2991_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2989_ == 0)
{
uint64_t v___x_2996_; 
v___x_2996_ = 0ULL;
v___y_2993_ = v___x_2996_;
goto v___jp_2992_;
}
else
{
uint64_t v___x_2997_; 
v___x_2997_ = 2ULL;
v___y_2993_ = v___x_2997_;
goto v___jp_2992_;
}
v___jp_2992_:
{
uint64_t v___x_2994_; uint64_t v___x_2995_; 
v___x_2994_ = lean_uint64_lor(v___x_2991_, v___y_2993_);
v___x_2995_ = lean_uint64_lor(v___x_2994_, v_extra_2990_);
return v___x_2995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2998_, lean_object* v_extra_2999_){
_start:
{
uint8_t v_await_boxed_3000_; uint64_t v_extra_boxed_3001_; uint64_t v_res_3002_; lean_object* v_r_3003_; 
v_await_boxed_3000_ = lean_unbox(v_await_2998_);
v_extra_boxed_3001_ = lean_unbox_uint64(v_extra_2999_);
lean_dec_ref(v_extra_2999_);
v_res_3002_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_3000_, v_extra_boxed_3001_);
v_r_3003_ = lean_box_uint64(v_res_3002_);
return v_r_3003_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3004_; uint8_t v___x_3005_; uint64_t v___x_3006_; 
v___x_3004_ = 4ULL;
v___x_3005_ = 0;
v___x_3006_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3005_, v___x_3004_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_3007_, lean_object* v_args_3008_){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; uint64_t v___x_3013_; lean_object* v___x_3014_; 
v___x_3010_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3011_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3011_, 0, v_c_3007_);
lean_ctor_set(v___x_3011_, 1, v___x_3010_);
v___x_3012_ = lean_box(0);
v___x_3013_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_3014_ = l_Lasm_JS_Value_invokeRaw(v___x_3011_, v___x_3012_, v_args_3008_, v___x_3013_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
lean_dec_ref_known(v___x_3014_, 1);
v___x_3016_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_3017_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3016_, v_a_3015_);
lean_dec(v_a_3015_);
return v___x_3017_;
}
else
{
return v___x_3014_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_3018_, lean_object* v_args_3019_, lean_object* v_a_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_3018_, v_args_3019_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_3022_, uint8_t v___x_3023_, lean_object* v___f_3024_, lean_object* v_a_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v_val_3029_; 
if (lean_obj_tag(v_x_3026_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3040_; 
lean_dec(v_a_3025_);
lean_dec_ref(v___f_3024_);
lean_dec(v___x_3022_);
v_a_3032_ = lean_ctor_get(v_x_3026_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_x_3026_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3034_ = v_x_3026_;
v_isShared_3035_ = v_isSharedCheck_3040_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v_x_3026_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3040_;
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
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3059_; 
v_a_3041_ = lean_ctor_get(v_x_3026_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_x_3026_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3043_ = v_x_3026_;
v_isShared_3044_ = v_isSharedCheck_3059_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v_x_3026_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3059_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3045_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3046_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3046_, 0, v_a_3041_);
lean_ctor_set(v___x_3046_, 1, v___x_3045_);
v___x_3047_ = lean_unsigned_to_nat(1u);
v___x_3048_ = lean_mk_empty_array_with_capacity(v___x_3047_);
v___x_3049_ = lean_array_push(v___x_3048_, v___x_3046_);
v___x_3050_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3025_, v___x_3049_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v_a_3051_; lean_object* v___x_3053_; 
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3050_, 1);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 0, v_a_3051_);
v___x_3053_ = v___x_3043_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
v_val_3029_ = v___x_3053_;
goto v___jp_3028_;
}
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; 
v_a_3055_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3055_);
lean_dec_ref_known(v___x_3050_, 1);
if (v_isShared_3044_ == 0)
{
lean_ctor_set_tag(v___x_3043_, 0);
lean_ctor_set(v___x_3043_, 0, v_a_3055_);
v___x_3057_ = v___x_3043_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3055_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
v_val_3029_ = v___x_3057_;
goto v___jp_3028_;
}
}
}
}
v___jp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v_val_3029_);
v___x_3031_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3022_, v___x_3023_, v___x_3030_, v___f_3024_);
return v___x_3031_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_3060_, lean_object* v___x_3061_, lean_object* v___f_3062_, lean_object* v_a_3063_, lean_object* v_x_3064_, lean_object* v___y_3065_){
_start:
{
uint8_t v___x_7889__boxed_3066_; lean_object* v_res_3067_; 
v___x_7889__boxed_3066_ = lean_unbox(v___x_3061_);
v_res_3067_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_3060_, v___x_7889__boxed_3066_, v___f_3062_, v_a_3063_, v_x_3064_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v_headers_3070_, lean_object* v___x_3071_, lean_object* v___x_3072_, lean_object* v___f_3073_, lean_object* v_x_3074_){
_start:
{
if (lean_obj_tag(v_x_3074_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3084_; 
lean_dec_ref(v___f_3073_);
lean_dec(v___x_3072_);
lean_dec_ref(v___x_3071_);
lean_dec_ref(v_headers_3070_);
lean_dec_ref(v___y_3069_);
lean_dec_ref(v___y_3068_);
v_a_3076_ = lean_ctor_get(v_x_3074_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_x_3074_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3078_ = v_x_3074_;
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v_x_3074_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3081_);
return v___x_3082_;
}
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3096_; 
v_a_3085_ = lean_ctor_get(v_x_3074_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v_x_3074_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3087_ = v_x_3074_;
v_isShared_3088_ = v_isSharedCheck_3096_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v_x_3074_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3096_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; uint8_t v___x_3090_; lean_object* v___x_3092_; 
v___x_3089_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3089_, 0, v___y_3068_);
lean_ctor_set(v___x_3089_, 1, v___y_3069_);
lean_ctor_set(v___x_3089_, 2, v_headers_3070_);
lean_ctor_set(v___x_3089_, 3, v___x_3071_);
lean_ctor_set(v___x_3089_, 4, v_a_3085_);
v___x_3090_ = 0;
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 0, v___x_3089_);
v___x_3092_ = v___x_3087_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3089_);
v___x_3092_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
v___x_3094_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3072_, v___x_3090_, v___x_3093_, v___f_3073_);
return v___x_3094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v_headers_3099_, lean_object* v___x_3100_, lean_object* v___x_3101_, lean_object* v___f_3102_, lean_object* v_x_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_3097_, v___y_3098_, v_headers_3099_, v___x_3100_, v___x_3101_, v___f_3102_, v_x_3103_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3106_, lean_object* v_x_3107_){
_start:
{
if (lean_obj_tag(v_x_3107_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3117_; 
lean_dec_ref(v___f_3106_);
v_a_3109_ = lean_ctor_get(v_x_3107_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v_x_3107_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3111_ = v_x_3107_;
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v_x_3107_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
lean_object* v___x_3115_; 
v___x_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
return v___x_3115_;
}
}
}
else
{
lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3129_; 
v_isSharedCheck_3129_ = !lean_is_exclusive(v_x_3107_);
if (v_isSharedCheck_3129_ == 0)
{
lean_object* v_unused_3130_; 
v_unused_3130_ = lean_ctor_get(v_x_3107_, 0);
lean_dec(v_unused_3130_);
v___x_3119_ = v_x_3107_;
v_isShared_3120_ = v_isSharedCheck_3129_;
goto v_resetjp_3118_;
}
else
{
lean_dec(v_x_3107_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3129_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3121_; uint8_t v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3121_ = lean_unsigned_to_nat(0u);
v___x_3122_ = 0;
v___x_3123_ = lean_io_promise_new();
if (v_isShared_3120_ == 0)
{
lean_ctor_set(v___x_3119_, 0, v___x_3123_);
v___x_3125_ = v___x_3119_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
v___x_3127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3121_, v___x_3122_, v___x_3126_, v___f_3106_);
return v___x_3127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3131_, lean_object* v_x_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3131_, v_x_3132_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3135_, lean_object* v_x_3136_){
_start:
{
if (lean_obj_tag(v_x_3136_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3146_; 
lean_dec_ref(v___f_3135_);
v_a_3138_ = lean_ctor_get(v_x_3136_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_x_3136_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3140_ = v_x_3136_;
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v_x_3136_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; 
v___x_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
return v___x_3144_;
}
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3148_; 
v_a_3147_ = lean_ctor_get(v_x_3136_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v_x_3136_, 1);
v___x_3148_ = lean_apply_2(v___f_3135_, v_a_3147_, lean_box(0));
return v___x_3148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3149_, lean_object* v_x_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3149_, v_x_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_3153_, lean_object* v_bytes_3154_){
_start:
{
lean_object* v___x_3156_; uint8_t v___x_3157_; lean_object* v_val_3159_; lean_object* v___x_3162_; 
v___x_3156_ = lean_unsigned_to_nat(0u);
v___x_3157_ = 0;
v___x_3162_ = l_Lasm_JS_Wire_decode(v_bytes_3154_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3162_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3162_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
lean_ctor_set_tag(v___x_3165_, 1);
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
v_val_3159_ = v___x_3168_;
goto v___jp_3158_;
}
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
v_a_3171_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3162_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3162_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
lean_ctor_set_tag(v___x_3173_, 0);
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
v_val_3159_ = v___x_3176_;
goto v___jp_3158_;
}
}
}
v___jp_3158_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v_val_3159_);
v___x_3161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3156_, v___x_3157_, v___x_3160_, v___f_3153_);
return v___x_3161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_3179_, lean_object* v_bytes_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_3179_, v_bytes_3180_);
lean_dec_ref(v_bytes_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_3183_, lean_object* v_failurePrefix_3184_, lean_object* v___f_3185_, lean_object* v___f_3186_, uint32_t v_op_3187_, uint64_t v_flags_3188_, lean_object* v___f_3189_, lean_object* v_x_3190_){
_start:
{
if (lean_obj_tag(v_x_3190_) == 0)
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3200_; 
lean_dec_ref(v___f_3189_);
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___f_3185_);
v_a_3192_ = lean_ctor_get(v_x_3190_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v_x_3190_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3194_ = v_x_3190_;
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v_x_3190_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3197_; 
if (v_isShared_3195_ == 0)
{
v___x_3197_ = v___x_3194_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3192_);
v___x_3197_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
return v___x_3198_;
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3242_; 
v_a_3201_ = lean_ctor_get(v_x_3190_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_x_3190_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3203_ = v_x_3190_;
v_isShared_3204_ = v_isSharedCheck_3242_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v_x_3190_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3242_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
uint32_t v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; uint8_t v___x_3209_; 
v___x_3205_ = 0;
v___x_3206_ = l_Lasm_JS_Wire_encode(v_payload_3183_);
v___x_3207_ = lean_string_utf8_byte_size(v_failurePrefix_3184_);
v___x_3208_ = lean_unsigned_to_nat(0u);
v___x_3209_ = lean_nat_dec_eq(v___x_3207_, v___x_3208_);
if (v___x_3209_ == 0)
{
lean_object* v___f_3210_; lean_object* v_val_3212_; lean_object* v___x_3217_; 
lean_dec_ref(v___f_3189_);
lean_inc(v_a_3201_);
v___f_3210_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3210_, 0, v_a_3201_);
v___x_3217_ = lasm_js_call_into(v_a_3201_, v_op_3187_, v___x_3205_, v_flags_3188_, v___x_3206_, v_payload_3183_);
lean_dec_ref(v___x_3206_);
lean_dec(v_a_3201_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v_a_3218_);
v___x_3220_ = v___x_3203_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3218_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
v_val_3212_ = v___x_3220_;
goto v___jp_3211_;
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; 
v_a_3222_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3217_, 1);
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 0);
lean_ctor_set(v___x_3203_, 0, v_a_3222_);
v___x_3224_ = v___x_3203_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
v_val_3212_ = v___x_3224_;
goto v___jp_3211_;
}
}
v___jp_3211_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3213_, 0, v_val_3212_);
v___x_3214_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3208_, v___x_3209_, v___x_3213_, v___f_3210_);
v___x_3215_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3208_, v___x_3209_, v___x_3214_, v___f_3185_);
v___x_3216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3208_, v___x_3209_, v___x_3215_, v___f_3186_);
return v___x_3216_;
}
}
else
{
lean_object* v___f_3226_; uint8_t v___x_3227_; lean_object* v_val_3229_; lean_object* v___x_3233_; 
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___f_3185_);
lean_inc(v_a_3201_);
v___f_3226_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3226_, 0, v_a_3201_);
v___x_3227_ = 0;
v___x_3233_ = lasm_js_call_into(v_a_3201_, v_op_3187_, v___x_3205_, v_flags_3188_, v___x_3206_, v_payload_3183_);
lean_dec_ref(v___x_3206_);
lean_dec(v_a_3201_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v_a_3234_);
v___x_3236_ = v___x_3203_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3234_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
v_val_3229_ = v___x_3236_;
goto v___jp_3228_;
}
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; 
v_a_3238_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3238_);
lean_dec_ref_known(v___x_3233_, 1);
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 0);
lean_ctor_set(v___x_3203_, 0, v_a_3238_);
v___x_3240_ = v___x_3203_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3238_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
v_val_3229_ = v___x_3240_;
goto v___jp_3228_;
}
}
v___jp_3228_:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_val_3229_);
v___x_3231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3208_, v___x_3227_, v___x_3230_, v___f_3226_);
v___x_3232_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3208_, v___x_3227_, v___x_3231_, v___f_3189_);
return v___x_3232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_3243_, lean_object* v_failurePrefix_3244_, lean_object* v___f_3245_, lean_object* v___f_3246_, lean_object* v_op_3247_, lean_object* v_flags_3248_, lean_object* v___f_3249_, lean_object* v_x_3250_, lean_object* v___y_3251_){
_start:
{
uint32_t v_op_boxed_3252_; uint64_t v_flags_boxed_3253_; lean_object* v_res_3254_; 
v_op_boxed_3252_ = lean_unbox_uint32(v_op_3247_);
lean_dec(v_op_3247_);
v_flags_boxed_3253_ = lean_unbox_uint64(v_flags_3248_);
lean_dec_ref(v_flags_3248_);
v_res_3254_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_3243_, v_failurePrefix_3244_, v___f_3245_, v___f_3246_, v_op_boxed_3252_, v_flags_boxed_3253_, v___f_3249_, v_x_3250_);
lean_dec_ref(v_failurePrefix_3244_);
lean_dec(v_payload_3243_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_3255_, lean_object* v_x_3256_){
_start:
{
lean_object* v_val_3259_; 
if (lean_obj_tag(v_x_3256_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3269_; 
v_a_3261_ = lean_ctor_get(v_x_3256_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v_x_3256_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3263_ = v_x_3256_;
v_isShared_3264_ = v_isSharedCheck_3269_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v_x_3256_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3269_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3267_; 
v___x_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
return v___x_3267_;
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3283_; 
v_a_3270_ = lean_ctor_get(v_x_3256_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v_x_3256_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3272_ = v_x_3256_;
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v_x_3256_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; 
v___x_3274_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3255_, v_a_3270_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; lean_object* v___x_3277_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v_a_3275_);
v___x_3277_ = v___x_3272_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
v_val_3259_ = v___x_3277_;
goto v___jp_3258_;
}
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; 
v_a_3279_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3274_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set_tag(v___x_3272_, 0);
lean_ctor_set(v___x_3272_, 0, v_a_3279_);
v___x_3281_ = v___x_3272_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3279_);
v___x_3281_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
v_val_3259_ = v___x_3281_;
goto v___jp_3258_;
}
}
}
}
v___jp_3258_:
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v_val_3259_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_3284_, lean_object* v_x_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_3284_, v_x_3285_);
lean_dec_ref(v_context_3284_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3288_, uint32_t v_op_3289_, uint64_t v_flags_3290_, lean_object* v_payload_3291_, lean_object* v_failurePrefix_3292_){
_start:
{
lean_object* v___f_3294_; lean_object* v___f_3295_; lean_object* v___f_3296_; lean_object* v___f_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___f_3300_; lean_object* v___f_3301_; lean_object* v___x_3302_; uint8_t v___x_3303_; lean_object* v_val_3305_; lean_object* v___x_3308_; 
lean_inc_ref(v_failurePrefix_3292_);
v___f_3294_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3294_, 0, v_failurePrefix_3292_);
v___f_3295_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3295_, 0, v_context_3288_);
v___f_3296_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3296_, 0, v___f_3295_);
v___f_3297_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3297_, 0, v___f_3296_);
v___x_3298_ = lean_box_uint32(v_op_3289_);
v___x_3299_ = lean_box_uint64(v_flags_3290_);
lean_inc_ref(v___f_3297_);
v___f_3300_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3300_, 0, v_payload_3291_);
lean_closure_set(v___f_3300_, 1, v_failurePrefix_3292_);
lean_closure_set(v___f_3300_, 2, v___f_3294_);
lean_closure_set(v___f_3300_, 3, v___f_3297_);
lean_closure_set(v___f_3300_, 4, v___x_3298_);
lean_closure_set(v___f_3300_, 5, v___x_3299_);
lean_closure_set(v___f_3300_, 6, v___f_3297_);
v___f_3301_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3301_, 0, v___f_3300_);
v___x_3302_ = lean_unsigned_to_nat(0u);
v___x_3303_ = 0;
v___x_3308_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 1);
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
v_val_3305_ = v___x_3314_;
goto v___jp_3304_;
}
}
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
v_a_3317_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3308_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3308_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
lean_ctor_set_tag(v___x_3319_, 0);
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3317_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
v_val_3305_ = v___x_3322_;
goto v___jp_3304_;
}
}
}
v___jp_3304_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; 
v___x_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3306_, 0, v_val_3305_);
v___x_3307_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3302_, v___x_3303_, v___x_3306_, v___f_3301_);
return v___x_3307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3325_, lean_object* v_op_3326_, lean_object* v_flags_3327_, lean_object* v_payload_3328_, lean_object* v_failurePrefix_3329_, lean_object* v_a_3330_){
_start:
{
uint32_t v_op_boxed_3331_; uint64_t v_flags_boxed_3332_; lean_object* v_res_3333_; 
v_op_boxed_3331_ = lean_unbox_uint32(v_op_3326_);
lean_dec(v_op_3326_);
v_flags_boxed_3332_ = lean_unbox_uint64(v_flags_3327_);
lean_dec_ref(v_flags_3327_);
v_res_3333_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3325_, v_op_boxed_3331_, v_flags_boxed_3332_, v_payload_3328_, v_failurePrefix_3329_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3334_, lean_object* v_name_3335_, lean_object* v_args_3336_){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; uint32_t v___x_3343_; uint64_t v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3338_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3339_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3339_, 0, v_o_3334_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
lean_inc_ref(v_name_3335_);
v___x_3340_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3340_, 0, v_name_3335_);
v___x_3341_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3342_ = lean_string_append(v___x_3341_, v_name_3335_);
lean_dec_ref(v_name_3335_);
v___x_3343_ = 205;
v___x_3344_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3345_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3345_, 0, v_args_3336_);
v___x_3346_ = lean_unsigned_to_nat(3u);
v___x_3347_ = lean_mk_empty_array_with_capacity(v___x_3346_);
v___x_3348_ = lean_array_push(v___x_3347_, v___x_3339_);
v___x_3349_ = lean_array_push(v___x_3348_, v___x_3340_);
v___x_3350_ = lean_array_push(v___x_3349_, v___x_3345_);
v___x_3351_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
v___x_3352_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3342_, v___x_3343_, v___x_3344_, v___x_3351_, v___x_3338_);
return v___x_3352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3353_, lean_object* v_name_3354_, lean_object* v_args_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3353_, v_name_3354_, v_args_3355_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v_options_3362_, lean_object* v___f_3363_, lean_object* v___f_3364_, lean_object* v_a_3365_, lean_object* v_value_3366_, lean_object* v_a_3367_, lean_object* v___x_3368_, lean_object* v___f_3369_, lean_object* v___f_3370_, lean_object* v_headers_3371_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___f_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; uint8_t v___x_3385_; 
v___x_3373_ = lean_mk_empty_array_with_capacity(v___x_3359_);
v___x_3374_ = l_ByteArray_empty;
v___f_3375_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3373_);
lean_inc_ref(v___y_3361_);
lean_inc_ref(v___y_3360_);
v___x_3376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3376_, 0, v___y_3360_);
lean_ctor_set(v___x_3376_, 1, v___y_3361_);
lean_ctor_set(v___x_3376_, 2, v___x_3373_);
lean_ctor_set(v___x_3376_, 3, v___x_3374_);
lean_ctor_set(v___x_3376_, 4, v___f_3375_);
v___x_3377_ = l_Lasm_Fetch_Request_path(v___x_3376_);
v___x_3378_ = lean_apply_1(v_options_3362_, v___x_3377_);
v___x_3385_ = lean_unbox(v___x_3378_);
if (v___x_3385_ == 0)
{
lean_object* v___x_3386_; uint8_t v___x_3387_; 
lean_dec_ref(v___f_3370_);
lean_dec_ref(v___f_3369_);
v___x_3386_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_3387_ = lean_string_dec_eq(v___y_3360_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; uint8_t v___x_3389_; 
v___x_3388_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3389_ = lean_string_dec_eq(v___y_3360_, v___x_3388_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; lean_object* v___f_3391_; lean_object* v___x_3392_; lean_object* v___f_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
lean_dec_ref(v___f_3363_);
v___x_3390_ = lean_box(v___x_3389_);
lean_inc_n(v___x_3359_, 2);
v___f_3391_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3391_, 0, v___y_3360_);
lean_closure_set(v___f_3391_, 1, v___y_3361_);
lean_closure_set(v___f_3391_, 2, v_headers_3371_);
lean_closure_set(v___f_3391_, 3, v___f_3375_);
lean_closure_set(v___f_3391_, 4, v___x_3359_);
lean_closure_set(v___f_3391_, 5, v___x_3390_);
lean_closure_set(v___f_3391_, 6, v___f_3364_);
v___x_3392_ = lean_box(v___x_3389_);
v___f_3393_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3393_, 0, v___x_3359_);
lean_closure_set(v___f_3393_, 1, v___x_3392_);
lean_closure_set(v___f_3393_, 2, v___f_3391_);
lean_closure_set(v___f_3393_, 3, v_a_3365_);
v___x_3394_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3395_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3366_, v___x_3394_, v___x_3373_);
v___x_3396_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3359_, v___x_3389_, v___x_3395_, v___f_3393_);
return v___x_3396_;
}
else
{
lean_dec_ref(v___x_3373_);
lean_dec(v_value_3366_);
lean_dec(v_a_3365_);
lean_dec_ref(v___f_3364_);
goto v___jp_3379_;
}
}
else
{
lean_dec_ref(v___x_3373_);
lean_dec(v_value_3366_);
lean_dec(v_a_3365_);
lean_dec_ref(v___f_3364_);
goto v___jp_3379_;
}
}
else
{
lean_object* v___x_3397_; 
lean_dec_ref(v___x_3373_);
lean_dec(v_value_3366_);
lean_dec(v_a_3365_);
lean_dec_ref(v___f_3364_);
lean_dec_ref(v___f_3363_);
v___x_3397_ = l_Lasm_JS_Data_field(v_a_3367_, v___x_3368_);
if (lean_obj_tag(v___x_3397_) == 9)
{
lean_object* v_value_3398_; lean_object* v___f_3399_; uint8_t v___x_3400_; lean_object* v_val_3402_; lean_object* v___x_3405_; 
lean_dec_ref(v___f_3370_);
v_value_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_value_3398_);
lean_dec_ref_known(v___x_3397_, 2);
lean_inc(v___x_3359_);
v___f_3399_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3399_, 0, v___y_3360_);
lean_closure_set(v___f_3399_, 1, v___y_3361_);
lean_closure_set(v___f_3399_, 2, v_headers_3371_);
lean_closure_set(v___f_3399_, 3, v___x_3374_);
lean_closure_set(v___f_3399_, 4, v___x_3359_);
lean_closure_set(v___f_3399_, 5, v___f_3369_);
v___x_3400_ = 0;
v___x_3405_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3398_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3405_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
lean_ctor_set_tag(v___x_3408_, 1);
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
v_val_3402_ = v___x_3411_;
goto v___jp_3401_;
}
}
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
v_a_3414_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3405_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3405_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
lean_ctor_set_tag(v___x_3416_, 0);
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
v_val_3402_ = v___x_3419_;
goto v___jp_3401_;
}
}
}
v___jp_3401_:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3403_, 0, v_val_3402_);
v___x_3404_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3359_, v___x_3400_, v___x_3403_, v___f_3399_);
return v___x_3404_;
}
}
else
{
lean_object* v___x_3422_; uint8_t v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
lean_dec(v___x_3397_);
lean_dec_ref(v___f_3369_);
v___x_3422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3422_, 0, v___y_3360_);
lean_ctor_set(v___x_3422_, 1, v___y_3361_);
lean_ctor_set(v___x_3422_, 2, v_headers_3371_);
lean_ctor_set(v___x_3422_, 3, v___x_3374_);
lean_ctor_set(v___x_3422_, 4, v___f_3375_);
v___x_3423_ = 0;
v___x_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3422_);
v___x_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
v___x_3426_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3359_, v___x_3423_, v___x_3425_, v___f_3370_);
return v___x_3426_;
}
}
v___jp_3379_:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; uint8_t v___x_3383_; lean_object* v___x_3384_; 
v___x_3380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3380_, 0, v___y_3360_);
lean_ctor_set(v___x_3380_, 1, v___y_3361_);
lean_ctor_set(v___x_3380_, 2, v_headers_3371_);
lean_ctor_set(v___x_3380_, 3, v___x_3374_);
lean_ctor_set(v___x_3380_, 4, v___f_3375_);
v___x_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
v___x_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
v___x_3383_ = lean_unbox(v___x_3378_);
v___x_3384_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3359_, v___x_3383_, v___x_3382_, v___f_3363_);
return v___x_3384_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v_options_3430_, lean_object* v___f_3431_, lean_object* v___f_3432_, lean_object* v_a_3433_, lean_object* v_value_3434_, lean_object* v_a_3435_, lean_object* v___x_3436_, lean_object* v___f_3437_, lean_object* v___f_3438_, lean_object* v_headers_3439_, lean_object* v___y_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3427_, v___y_3428_, v___y_3429_, v_options_3430_, v___f_3431_, v___f_3432_, v_a_3433_, v_value_3434_, v_a_3435_, v___x_3436_, v___f_3437_, v___f_3438_, v_headers_3439_);
lean_dec_ref(v___x_3436_);
lean_dec(v_a_3435_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3442_, lean_object* v_x_3443_){
_start:
{
if (lean_obj_tag(v_x_3443_) == 0)
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3453_; 
lean_dec_ref(v___f_3442_);
v_a_3445_ = lean_ctor_get(v_x_3443_, 0);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_x_3443_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3447_ = v_x_3443_;
v_isShared_3448_ = v_isSharedCheck_3453_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v_x_3443_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3453_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
lean_object* v___x_3451_; 
v___x_3451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
return v___x_3451_;
}
}
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3455_; 
v_a_3454_ = lean_ctor_get(v_x_3443_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v_x_3443_, 1);
v___x_3455_ = lean_apply_2(v___f_3442_, v_a_3454_, lean_box(0));
return v___x_3455_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3456_, lean_object* v_x_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3456_, v_x_3457_);
return v_res_3459_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3460_, uint64_t v_extra_3461_){
_start:
{
uint64_t v___x_3462_; uint64_t v___y_3464_; 
v___x_3462_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3460_ == 0)
{
uint64_t v___x_3467_; 
v___x_3467_ = 0ULL;
v___y_3464_ = v___x_3467_;
goto v___jp_3463_;
}
else
{
uint64_t v___x_3468_; 
v___x_3468_ = 2ULL;
v___y_3464_ = v___x_3468_;
goto v___jp_3463_;
}
v___jp_3463_:
{
uint64_t v___x_3465_; uint64_t v___x_3466_; 
v___x_3465_ = lean_uint64_lor(v___x_3462_, v___y_3464_);
v___x_3466_ = lean_uint64_lor(v___x_3465_, v_extra_3461_);
return v___x_3466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3469_, lean_object* v_extra_3470_){
_start:
{
uint8_t v_await_boxed_3471_; uint64_t v_extra_boxed_3472_; uint64_t v_res_3473_; lean_object* v_r_3474_; 
v_await_boxed_3471_ = lean_unbox(v_await_3469_);
v_extra_boxed_3472_ = lean_unbox_uint64(v_extra_3470_);
lean_dec_ref(v_extra_3470_);
v_res_3473_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3471_, v_extra_boxed_3472_);
v_r_3474_ = lean_box_uint64(v_res_3473_);
return v_r_3474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3480_, size_t v_i_3481_, lean_object* v_bs_3482_){
_start:
{
uint8_t v___x_3485_; 
v___x_3485_ = lean_usize_dec_lt(v_i_3481_, v_sz_3480_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; 
v___x_3486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3486_, 0, v_bs_3482_);
return v___x_3486_;
}
else
{
lean_object* v_v_3487_; 
v_v_3487_ = lean_array_uget_borrowed(v_bs_3482_, v_i_3481_);
if (lean_obj_tag(v_v_3487_) == 7)
{
lean_object* v_items_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; uint8_t v___x_3491_; 
v_items_3488_ = lean_ctor_get(v_v_3487_, 0);
v___x_3489_ = lean_array_get_size(v_items_3488_);
v___x_3490_ = lean_unsigned_to_nat(2u);
v___x_3491_ = lean_nat_dec_eq(v___x_3489_, v___x_3490_);
if (v___x_3491_ == 0)
{
lean_dec_ref(v_bs_3482_);
goto v___jp_3483_;
}
else
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = lean_unsigned_to_nat(0u);
v___x_3493_ = lean_array_fget_borrowed(v_items_3488_, v___x_3492_);
if (lean_obj_tag(v___x_3493_) == 4)
{
lean_object* v_s_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v_s_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc_ref(v_s_3494_);
v___x_3495_ = lean_unsigned_to_nat(1u);
v___x_3496_ = lean_array_fget_borrowed(v_items_3488_, v___x_3495_);
if (lean_obj_tag(v___x_3496_) == 4)
{
lean_object* v_s_3497_; lean_object* v_bs_x27_3498_; lean_object* v___x_3499_; size_t v___x_3500_; size_t v___x_3501_; lean_object* v___x_3502_; 
v_s_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc_ref(v_s_3497_);
v_bs_x27_3498_ = lean_array_uset(v_bs_3482_, v_i_3481_, v___x_3492_);
v___x_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3499_, 0, v_s_3494_);
lean_ctor_set(v___x_3499_, 1, v_s_3497_);
v___x_3500_ = ((size_t)1ULL);
v___x_3501_ = lean_usize_add(v_i_3481_, v___x_3500_);
v___x_3502_ = lean_array_uset(v_bs_x27_3498_, v_i_3481_, v___x_3499_);
v_i_3481_ = v___x_3501_;
v_bs_3482_ = v___x_3502_;
goto _start;
}
else
{
lean_object* v___x_3504_; 
lean_dec_ref(v_s_3494_);
lean_dec_ref(v_bs_3482_);
v___x_3504_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3504_;
}
}
else
{
lean_object* v___x_3505_; 
lean_dec_ref(v_bs_3482_);
v___x_3505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3505_;
}
}
}
else
{
lean_dec_ref(v_bs_3482_);
goto v___jp_3483_;
}
}
v___jp_3483_:
{
lean_object* v___x_3484_; 
v___x_3484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3484_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3506_, lean_object* v_i_3507_, lean_object* v_bs_3508_){
_start:
{
size_t v_sz_boxed_3509_; size_t v_i_boxed_3510_; lean_object* v_res_3511_; 
v_sz_boxed_3509_ = lean_unbox_usize(v_sz_3506_);
lean_dec(v_sz_3506_);
v_i_boxed_3510_ = lean_unbox_usize(v_i_3507_);
lean_dec(v_i_3507_);
v_res_3511_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3509_, v_i_boxed_3510_, v_bs_3508_);
return v_res_3511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3516_, lean_object* v_d_3517_){
_start:
{
lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3526_; lean_object* v_received_3527_; lean_object* v___y_3546_; lean_object* v_a_3549_; 
if (lean_obj_tag(v_d_3517_) == 7)
{
lean_object* v_items_3573_; size_t v_sz_3574_; size_t v___x_3575_; lean_object* v___x_3576_; 
v_items_3573_ = lean_ctor_get(v_d_3517_, 0);
v_sz_3574_ = lean_array_size(v_items_3573_);
v___x_3575_ = ((size_t)0ULL);
lean_inc_ref(v_items_3573_);
v___x_3576_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3574_, v___x_3575_, v_items_3573_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; uint8_t v___x_3581_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3577_);
lean_dec_ref_known(v___x_3576_, 1);
v___x_3578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3579_ = lean_string_utf8_byte_size(v_a_3577_);
v___x_3580_ = lean_unsigned_to_nat(0u);
v___x_3581_ = lean_nat_dec_eq(v___x_3579_, v___x_3580_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3582_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3583_ = lean_string_append(v___x_3582_, v_a_3577_);
lean_dec(v_a_3577_);
v___x_3584_ = lean_string_append(v___x_3578_, v___x_3583_);
lean_dec_ref(v___x_3583_);
v_a_3549_ = v___x_3584_;
goto v___jp_3548_;
}
else
{
lean_dec(v_a_3577_);
v_a_3549_ = v___x_3578_;
goto v___jp_3548_;
}
}
else
{
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3585_; 
v_a_3585_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3576_, 1);
v_a_3549_ = v_a_3585_;
goto v___jp_3548_;
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
lean_dec_ref_known(v_d_3517_, 1);
v_a_3586_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___x_3576_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3576_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
lean_ctor_set_tag(v___x_3588_, 0);
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
}
else
{
lean_object* v___x_3594_; 
v___x_3594_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3549_ = v___x_3594_;
goto v___jp_3548_;
}
v___jp_3519_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3522_ = lean_string_append(v___y_3520_, v___y_3521_);
lean_dec_ref(v___y_3521_);
v___x_3523_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
v___x_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3523_);
return v___x_3524_;
}
v___jp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3528_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3529_ = lean_string_append(v___x_3528_, v_context_3516_);
v___x_3530_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3531_ = lean_string_append(v___x_3529_, v___x_3530_);
v___x_3532_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3533_ = lean_string_append(v___x_3531_, v___x_3532_);
v___x_3534_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3535_ = lean_string_append(v___x_3533_, v___x_3534_);
v___x_3536_ = lean_string_append(v___x_3535_, v_received_3527_);
lean_dec_ref(v_received_3527_);
v___x_3537_ = lean_string_utf8_byte_size(v___y_3526_);
v___x_3538_ = lean_unsigned_to_nat(0u);
v___x_3539_ = lean_nat_dec_eq(v___x_3537_, v___x_3538_);
if (v___x_3539_ == 0)
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3540_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3541_ = lean_string_append(v___x_3540_, v___y_3526_);
lean_dec_ref(v___y_3526_);
v___x_3542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3543_ = lean_string_append(v___x_3541_, v___x_3542_);
v___y_3520_ = v___x_3536_;
v___y_3521_ = v___x_3543_;
goto v___jp_3519_;
}
else
{
lean_object* v___x_3544_; 
lean_dec_ref(v___y_3526_);
v___x_3544_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3520_ = v___x_3536_;
v___y_3521_ = v___x_3544_;
goto v___jp_3519_;
}
}
v___jp_3545_:
{
lean_object* v___x_3547_; 
v___x_3547_ = l_Lasm_JS_Data_describe(v_d_3517_);
v___y_3526_ = v___y_3546_;
v_received_3527_ = v___x_3547_;
goto v___jp_3525_;
}
v___jp_3548_:
{
if (lean_obj_tag(v_d_3517_) == 9)
{
lean_object* v_value_3550_; lean_object* v_description_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v_value_3550_ = lean_ctor_get(v_d_3517_, 0);
v_description_3551_ = lean_ctor_get(v_d_3517_, 1);
v___x_3552_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3553_ = lean_string_dec_eq(v_description_3551_, v___x_3552_);
if (v___x_3553_ == 0)
{
v___y_3546_ = v_a_3549_;
goto v___jp_3545_;
}
else
{
lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3570_; 
lean_inc(v_value_3550_);
v_isSharedCheck_3570_ = !lean_is_exclusive(v_d_3517_);
if (v_isSharedCheck_3570_ == 0)
{
lean_object* v_unused_3571_; lean_object* v_unused_3572_; 
v_unused_3571_ = lean_ctor_get(v_d_3517_, 1);
lean_dec(v_unused_3571_);
v_unused_3572_ = lean_ctor_get(v_d_3517_, 0);
lean_dec(v_unused_3572_);
v___x_3555_ = v_d_3517_;
v_isShared_3556_ = v_isSharedCheck_3570_;
goto v_resetjp_3554_;
}
else
{
lean_dec(v_d_3517_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3570_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
uint32_t v___x_3557_; uint64_t v___x_3558_; lean_object* v___x_3560_; 
v___x_3557_ = 206;
v___x_3558_ = 0ULL;
lean_inc(v_value_3550_);
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v___x_3552_);
v___x_3560_ = v___x_3555_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_value_3550_);
lean_ctor_set(v_reuseFailAlloc_3569_, 1, v___x_3552_);
v___x_3560_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
uint32_t v___x_3561_; lean_object* v___x_3562_; 
v___x_3561_ = lasm_js_value_handle(v_value_3550_);
lean_dec(v_value_3550_);
v___x_3562_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3557_, v___x_3558_, v___x_3560_, v___x_3561_);
lean_dec_ref(v___x_3560_);
if (lean_obj_tag(v___x_3562_) == 0)
{
lean_object* v_a_3563_; uint8_t v___x_3564_; 
v_a_3563_ = lean_ctor_get(v___x_3562_, 0);
lean_inc(v_a_3563_);
lean_dec_ref_known(v___x_3562_, 1);
v___x_3564_ = lean_string_validate_utf8(v_a_3563_);
if (v___x_3564_ == 0)
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
lean_dec(v_a_3563_);
v___x_3565_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3566_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3565_);
v___y_3526_ = v_a_3549_;
v_received_3527_ = v___x_3566_;
goto v___jp_3525_;
}
else
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_string_from_utf8_unchecked(v_a_3563_);
v___y_3526_ = v_a_3549_;
v_received_3527_ = v___x_3567_;
goto v___jp_3525_;
}
}
else
{
lean_object* v___x_3568_; 
lean_dec_ref_known(v___x_3562_, 1);
v___x_3568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3526_ = v_a_3549_;
v_received_3527_ = v___x_3568_;
goto v___jp_3525_;
}
}
}
}
}
else
{
v___y_3546_ = v_a_3549_;
goto v___jp_3545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3595_, lean_object* v_d_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v_res_3598_; 
v_res_3598_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3595_, v_d_3596_);
lean_dec_ref(v_context_3595_);
return v_res_3598_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3599_, lean_object* v_bytes_3600_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Lasm_JS_Wire_decode(v_bytes_3600_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3604_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v___x_3604_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3599_, v_a_3603_);
return v___x_3604_;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
v_a_3605_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3602_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3602_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3613_, lean_object* v_bytes_3614_, lean_object* v_a_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3613_, v_bytes_3614_);
lean_dec_ref(v_bytes_3614_);
lean_dec_ref(v_context_3613_);
return v_res_3616_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3617_; uint8_t v___x_3618_; uint64_t v___x_3619_; 
v___x_3617_ = 8ULL;
v___x_3618_ = 0;
v___x_3619_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3618_, v___x_3617_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3620_, lean_object* v_name_3621_, lean_object* v_args_3622_){
_start:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; uint64_t v___x_3627_; lean_object* v___x_3628_; 
v___x_3624_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3625_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3625_, 0, v_o_3620_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
lean_inc_ref(v_name_3621_);
v___x_3626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3626_, 0, v_name_3621_);
v___x_3627_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3628_ = l_Lasm_JS_Value_invokeRaw(v___x_3625_, v___x_3626_, v_args_3622_, v___x_3627_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3628_, 1);
v___x_3630_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3631_ = lean_string_append(v___x_3630_, v_name_3621_);
lean_dec_ref(v_name_3621_);
v___x_3632_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3631_, v_a_3629_);
lean_dec(v_a_3629_);
lean_dec_ref(v___x_3631_);
return v___x_3632_;
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec_ref(v_name_3621_);
v_a_3633_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3628_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3628_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3641_, lean_object* v_name_3642_, lean_object* v_args_3643_, lean_object* v_a_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3641_, v_name_3642_, v_args_3643_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3647_, lean_object* v___f_3648_, lean_object* v_handler_3649_, lean_object* v_options_3650_, lean_object* v_a_3651_, lean_object* v_value_3652_, lean_object* v___x_3653_, lean_object* v___x_3654_, lean_object* v_a_3655_, lean_object* v___x_3656_, lean_object* v___x_3657_, lean_object* v_x_3658_){
_start:
{
uint8_t v___y_3661_; lean_object* v___y_3662_; lean_object* v_val_3663_; 
if (lean_obj_tag(v_x_3658_) == 0)
{
lean_object* v___x_3666_; 
lean_dec(v_a_3655_);
lean_dec_ref(v___x_3653_);
lean_dec(v_value_3652_);
lean_dec(v_a_3651_);
lean_dec_ref(v_options_3650_);
lean_dec_ref(v_handler_3649_);
lean_dec_ref(v___f_3648_);
lean_dec(v___x_3647_);
v___x_3666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3666_, 0, v_x_3658_);
return v___x_3666_;
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3724_; 
v_a_3667_ = lean_ctor_get(v_x_3658_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v_x_3658_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3669_ = v_x_3658_;
v_isShared_3670_ = v_isSharedCheck_3724_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v_x_3658_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3724_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v___y_3675_; lean_object* v___y_3676_; lean_object* v___y_3677_; lean_object* v___y_3714_; lean_object* v___x_3721_; 
v___x_3721_ = l_Lasm_JS_Data_field(v_a_3667_, v___x_3657_);
if (lean_obj_tag(v___x_3721_) == 4)
{
lean_object* v_s_3722_; 
v_s_3722_ = lean_ctor_get(v___x_3721_, 0);
lean_inc_ref(v_s_3722_);
lean_dec_ref_known(v___x_3721_, 1);
v___y_3714_ = v_s_3722_;
goto v___jp_3713_;
}
else
{
lean_object* v___x_3723_; 
lean_dec(v___x_3721_);
v___x_3723_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3714_ = v___x_3723_;
goto v___jp_3713_;
}
v___jp_3671_:
{
lean_object* v___f_3678_; lean_object* v___x_3679_; 
lean_inc(v_a_3667_);
lean_inc(v___x_3647_);
v___f_3678_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3678_, 0, v___x_3647_);
lean_closure_set(v___f_3678_, 1, v___y_3675_);
lean_closure_set(v___f_3678_, 2, v___y_3677_);
lean_closure_set(v___f_3678_, 3, v_options_3650_);
lean_closure_set(v___f_3678_, 4, v___y_3673_);
lean_closure_set(v___f_3678_, 5, v___y_3672_);
lean_closure_set(v___f_3678_, 6, v_a_3651_);
lean_closure_set(v___f_3678_, 7, v_value_3652_);
lean_closure_set(v___f_3678_, 8, v_a_3667_);
lean_closure_set(v___f_3678_, 9, v___x_3653_);
lean_closure_set(v___f_3678_, 10, v___y_3674_);
lean_closure_set(v___f_3678_, 11, v___y_3676_);
v___x_3679_ = l_Lasm_JS_Data_field(v_a_3667_, v___x_3654_);
lean_dec(v_a_3667_);
if (lean_obj_tag(v___x_3679_) == 9)
{
lean_object* v_value_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3703_; 
v_value_3680_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3703_ == 0)
{
lean_object* v_unused_3704_; 
v_unused_3704_ = lean_ctor_get(v___x_3679_, 1);
lean_dec(v_unused_3704_);
v___x_3682_ = v___x_3679_;
v_isShared_3683_ = v_isSharedCheck_3703_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_value_3680_);
lean_dec(v___x_3679_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3703_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___f_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3688_; 
v___f_3684_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3684_, 0, v___f_3678_);
v___x_3685_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3686_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 1, v___x_3686_);
v___x_3688_ = v___x_3682_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_value_3680_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v___x_3686_);
v___x_3688_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; lean_object* v___x_3693_; 
v___x_3689_ = lean_unsigned_to_nat(1u);
v___x_3690_ = lean_mk_empty_array_with_capacity(v___x_3689_);
v___x_3691_ = lean_array_push(v___x_3690_, v___x_3688_);
v___x_3692_ = 0;
v___x_3693_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3655_, v___x_3685_, v___x_3691_);
if (lean_obj_tag(v___x_3693_) == 0)
{
lean_object* v_a_3694_; lean_object* v___x_3696_; 
v_a_3694_ = lean_ctor_get(v___x_3693_, 0);
lean_inc(v_a_3694_);
lean_dec_ref_known(v___x_3693_, 1);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v_a_3694_);
v___x_3696_ = v___x_3669_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
v___y_3661_ = v___x_3692_;
v___y_3662_ = v___f_3684_;
v_val_3663_ = v___x_3696_;
goto v___jp_3660_;
}
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; 
v_a_3698_ = lean_ctor_get(v___x_3693_, 0);
lean_inc(v_a_3698_);
lean_dec_ref_known(v___x_3693_, 1);
if (v_isShared_3670_ == 0)
{
lean_ctor_set_tag(v___x_3669_, 0);
lean_ctor_set(v___x_3669_, 0, v_a_3698_);
v___x_3700_ = v___x_3669_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_a_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
v___y_3661_ = v___x_3692_;
v___y_3662_ = v___f_3684_;
v_val_3663_ = v___x_3700_;
goto v___jp_3660_;
}
}
}
}
}
else
{
lean_object* v___f_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; lean_object* v___x_3709_; 
lean_dec(v___x_3679_);
lean_dec(v_a_3655_);
v___f_3705_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3705_, 0, v___f_3678_);
v___x_3706_ = lean_mk_empty_array_with_capacity(v___x_3647_);
v___x_3707_ = 0;
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3706_);
v___x_3709_ = v___x_3669_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3706_);
v___x_3709_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3709_);
v___x_3711_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3647_, v___x_3707_, v___x_3710_, v___f_3705_);
return v___x_3711_;
}
}
}
v___jp_3713_:
{
lean_object* v___f_3715_; lean_object* v___f_3716_; lean_object* v___f_3717_; lean_object* v___x_3718_; 
lean_inc_n(v___x_3647_, 2);
lean_inc_ref(v___y_3714_);
v___f_3715_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3715_, 0, v___y_3714_);
lean_closure_set(v___f_3715_, 1, v___x_3647_);
lean_closure_set(v___f_3715_, 2, v___f_3648_);
v___f_3716_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3716_, 0, v_handler_3649_);
lean_closure_set(v___f_3716_, 1, v___x_3647_);
lean_closure_set(v___f_3716_, 2, v___f_3715_);
v___f_3717_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3717_, 0, v___f_3716_);
v___x_3718_ = l_Lasm_JS_Data_field(v_a_3667_, v___x_3656_);
if (lean_obj_tag(v___x_3718_) == 4)
{
lean_object* v_s_3719_; 
v_s_3719_ = lean_ctor_get(v___x_3718_, 0);
lean_inc_ref(v_s_3719_);
lean_dec_ref_known(v___x_3718_, 1);
lean_inc_ref_n(v___f_3717_, 3);
v___y_3672_ = v___f_3717_;
v___y_3673_ = v___f_3717_;
v___y_3674_ = v___f_3717_;
v___y_3675_ = v___y_3714_;
v___y_3676_ = v___f_3717_;
v___y_3677_ = v_s_3719_;
goto v___jp_3671_;
}
else
{
lean_object* v___x_3720_; 
lean_dec(v___x_3718_);
v___x_3720_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3717_, 3);
v___y_3672_ = v___f_3717_;
v___y_3673_ = v___f_3717_;
v___y_3674_ = v___f_3717_;
v___y_3675_ = v___y_3714_;
v___y_3676_ = v___f_3717_;
v___y_3677_ = v___x_3720_;
goto v___jp_3671_;
}
}
}
}
v___jp_3660_:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___x_3664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3664_, 0, v_val_3663_);
v___x_3665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3647_, v___y_3661_, v___x_3664_, v___y_3662_);
return v___x_3665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3725_, lean_object* v___f_3726_, lean_object* v_handler_3727_, lean_object* v_options_3728_, lean_object* v_a_3729_, lean_object* v_value_3730_, lean_object* v___x_3731_, lean_object* v___x_3732_, lean_object* v_a_3733_, lean_object* v___x_3734_, lean_object* v___x_3735_, lean_object* v_x_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3725_, v___f_3726_, v_handler_3727_, v_options_3728_, v_a_3729_, v_value_3730_, v___x_3731_, v___x_3732_, v_a_3733_, v___x_3734_, v___x_3735_, v_x_3736_);
lean_dec_ref(v___x_3735_);
lean_dec_ref(v___x_3734_);
lean_dec_ref(v___x_3732_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3739_, size_t v_i_3740_, lean_object* v_bs_3741_){
_start:
{
uint8_t v___x_3742_; 
v___x_3742_ = lean_usize_dec_lt(v_i_3740_, v_sz_3739_);
if (v___x_3742_ == 0)
{
return v_bs_3741_;
}
else
{
lean_object* v_v_3743_; lean_object* v___x_3744_; lean_object* v_bs_x27_3745_; lean_object* v___x_3746_; size_t v___x_3747_; size_t v___x_3748_; lean_object* v___x_3749_; 
v_v_3743_ = lean_array_uget(v_bs_3741_, v_i_3740_);
v___x_3744_ = lean_unsigned_to_nat(0u);
v_bs_x27_3745_ = lean_array_uset(v_bs_3741_, v_i_3740_, v___x_3744_);
v___x_3746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3746_, 0, v_v_3743_);
v___x_3747_ = ((size_t)1ULL);
v___x_3748_ = lean_usize_add(v_i_3740_, v___x_3747_);
v___x_3749_ = lean_array_uset(v_bs_x27_3745_, v_i_3740_, v___x_3746_);
v_i_3740_ = v___x_3748_;
v_bs_3741_ = v___x_3749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3751_, lean_object* v_i_3752_, lean_object* v_bs_3753_){
_start:
{
size_t v_sz_boxed_3754_; size_t v_i_boxed_3755_; lean_object* v_res_3756_; 
v_sz_boxed_3754_ = lean_unbox_usize(v_sz_3751_);
lean_dec(v_sz_3751_);
v_i_boxed_3755_ = lean_unbox_usize(v_i_3752_);
lean_dec(v_i_3752_);
v_res_3756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3754_, v_i_boxed_3755_, v_bs_3753_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3757_, lean_object* v_keys_3758_){
_start:
{
uint32_t v___x_3760_; uint32_t v___x_3761_; uint64_t v___x_3762_; size_t v_sz_3763_; size_t v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3760_ = 203;
v___x_3761_ = lasm_js_value_handle(v_o_3757_);
v___x_3762_ = 0ULL;
v_sz_3763_ = lean_array_size(v_keys_3758_);
v___x_3764_ = ((size_t)0ULL);
v___x_3765_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3763_, v___x_3764_, v_keys_3758_);
v___x_3766_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3765_);
v___x_3767_ = l_Lasm_JS_Wire_encode(v___x_3766_);
lean_dec_ref_known(v___x_3766_, 1);
v___x_3768_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3769_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3769_, 0, v_o_3757_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = lasm_js_call(v___x_3760_, v___x_3761_, v___x_3762_, v___x_3767_, v___x_3769_);
lean_dec_ref_known(v___x_3769_, 2);
lean_dec_ref(v___x_3767_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; lean_object* v___x_3772_; 
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___x_3770_, 1);
v___x_3772_ = l_Lasm_JS_Wire_decode(v_a_3771_);
lean_dec(v_a_3771_);
return v___x_3772_;
}
else
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
v_a_3773_ = lean_ctor_get(v___x_3770_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3770_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3770_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3781_, lean_object* v_keys_3782_, lean_object* v_a_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3781_, v_keys_3782_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3805_, lean_object* v___f_3806_, lean_object* v_handler_3807_, lean_object* v_options_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_____r_3811_){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; uint8_t v___x_3817_; 
v___x_3815_ = lean_unsigned_to_nat(0u);
v___x_3816_ = lean_array_get_size(v_args_3805_);
v___x_3817_ = lean_nat_dec_lt(v___x_3815_, v___x_3816_);
if (v___x_3817_ == 0)
{
lean_dec(v_a_3810_);
lean_dec(v_a_3809_);
lean_dec_ref(v_options_3808_);
lean_dec_ref(v_handler_3807_);
lean_dec_ref(v___f_3806_);
goto v___jp_3813_;
}
else
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_array_fget_borrowed(v_args_3805_, v___x_3815_);
if (lean_obj_tag(v___x_3818_) == 9)
{
lean_object* v_value_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___f_3824_; lean_object* v___x_3825_; uint8_t v___x_3826_; lean_object* v_val_3828_; lean_object* v___x_3831_; 
v_value_3819_ = lean_ctor_get(v___x_3818_, 0);
v___x_3820_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3821_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3822_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3823_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3819_, 2);
v___f_3824_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3824_, 0, v___x_3815_);
lean_closure_set(v___f_3824_, 1, v___f_3806_);
lean_closure_set(v___f_3824_, 2, v_handler_3807_);
lean_closure_set(v___f_3824_, 3, v_options_3808_);
lean_closure_set(v___f_3824_, 4, v_a_3809_);
lean_closure_set(v___f_3824_, 5, v_value_3819_);
lean_closure_set(v___f_3824_, 6, v___x_3823_);
lean_closure_set(v___f_3824_, 7, v___x_3822_);
lean_closure_set(v___f_3824_, 8, v_a_3810_);
lean_closure_set(v___f_3824_, 9, v___x_3821_);
lean_closure_set(v___f_3824_, 10, v___x_3820_);
v___x_3825_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3826_ = 0;
v___x_3831_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3819_, v___x_3825_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3831_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
lean_ctor_set_tag(v___x_3834_, 1);
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
v_val_3828_ = v___x_3837_;
goto v___jp_3827_;
}
}
}
else
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3847_; 
v_a_3840_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3842_ = v___x_3831_;
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3831_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3845_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set_tag(v___x_3842_, 0);
v___x_3845_ = v___x_3842_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3840_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
v_val_3828_ = v___x_3845_;
goto v___jp_3827_;
}
}
}
v___jp_3827_:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___x_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3829_, 0, v_val_3828_);
v___x_3830_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3815_, v___x_3826_, v___x_3829_, v___f_3824_);
return v___x_3830_;
}
}
else
{
lean_dec(v_a_3810_);
lean_dec(v_a_3809_);
lean_dec_ref(v_options_3808_);
lean_dec_ref(v_handler_3807_);
lean_dec_ref(v___f_3806_);
goto v___jp_3813_;
}
}
v___jp_3813_:
{
lean_object* v___x_3814_; 
v___x_3814_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3848_, lean_object* v___f_3849_, lean_object* v_handler_3850_, lean_object* v_options_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_____r_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3848_, v___f_3849_, v_handler_3850_, v_options_3851_, v_a_3852_, v_a_3853_, v_____r_3854_);
lean_dec_ref(v_args_3848_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3857_, lean_object* v_x_3858_){
_start:
{
if (lean_obj_tag(v_x_3858_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3868_; 
lean_dec_ref(v___f_3857_);
v_a_3860_ = lean_ctor_get(v_x_3858_, 0);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_x_3858_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3862_ = v_x_3858_;
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v_x_3858_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
return v___x_3866_;
}
}
}
else
{
lean_object* v_a_3869_; lean_object* v___x_3870_; 
v_a_3869_ = lean_ctor_get(v_x_3858_, 0);
lean_inc(v_a_3869_);
lean_dec_ref_known(v_x_3858_, 1);
v___x_3870_ = lean_apply_2(v___f_3857_, v_a_3869_, lean_box(0));
return v___x_3870_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3871_, lean_object* v_x_3872_, lean_object* v___y_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3871_, v_x_3872_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3875_, lean_object* v_handler_3876_, lean_object* v_options_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_args_3880_){
_start:
{
lean_object* v___f_3882_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; 
lean_inc(v_a_3879_);
lean_inc(v_a_3878_);
lean_inc_ref(v_options_3877_);
lean_inc_ref(v_handler_3876_);
lean_inc_ref(v___f_3875_);
lean_inc_ref(v_args_3880_);
v___f_3882_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3882_, 0, v_args_3880_);
lean_closure_set(v___f_3882_, 1, v___f_3875_);
lean_closure_set(v___f_3882_, 2, v_handler_3876_);
lean_closure_set(v___f_3882_, 3, v_options_3877_);
lean_closure_set(v___f_3882_, 4, v_a_3878_);
lean_closure_set(v___f_3882_, 5, v_a_3879_);
v___x_3886_ = lean_unsigned_to_nat(1u);
v___x_3887_ = lean_array_get_size(v_args_3880_);
v___x_3888_ = lean_nat_dec_lt(v___x_3886_, v___x_3887_);
if (v___x_3888_ == 0)
{
lean_dec_ref(v___f_3882_);
goto v___jp_3883_;
}
else
{
lean_object* v___x_3889_; 
v___x_3889_ = lean_array_fget_borrowed(v_args_3880_, v___x_3886_);
switch(lean_obj_tag(v___x_3889_))
{
case 9:
{
lean_object* v___f_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; uint8_t v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; 
lean_inc_ref(v___x_3889_);
lean_dec_ref(v_args_3880_);
lean_dec(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_options_3877_);
lean_dec_ref(v_handler_3876_);
lean_dec_ref(v___f_3875_);
v___f_3890_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3890_, 0, v___f_3882_);
v___x_3891_ = l_Lasm_Fetch_platformEnv;
v___x_3892_ = lean_unsigned_to_nat(0u);
v___x_3893_ = 0;
v___x_3894_ = lean_st_ref_swap(v___x_3891_, v___x_3889_);
lean_dec(v___x_3894_);
v___x_3895_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3896_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3892_, v___x_3893_, v___x_3895_, v___f_3890_);
return v___x_3896_;
}
case 8:
{
lean_object* v___f_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; uint8_t v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
lean_inc_ref(v___x_3889_);
lean_dec_ref(v_args_3880_);
lean_dec(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_options_3877_);
lean_dec_ref(v_handler_3876_);
lean_dec_ref(v___f_3875_);
v___f_3897_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3897_, 0, v___f_3882_);
v___x_3898_ = l_Lasm_Fetch_platformEnv;
v___x_3899_ = lean_unsigned_to_nat(0u);
v___x_3900_ = 0;
v___x_3901_ = lean_st_ref_swap(v___x_3898_, v___x_3889_);
lean_dec(v___x_3901_);
v___x_3902_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3899_, v___x_3900_, v___x_3902_, v___f_3897_);
return v___x_3903_;
}
default: 
{
lean_dec_ref(v___f_3882_);
goto v___jp_3883_;
}
}
}
v___jp_3883_:
{
lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3884_ = lean_box(0);
v___x_3885_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3880_, v___f_3875_, v_handler_3876_, v_options_3877_, v_a_3878_, v_a_3879_, v___x_3884_);
lean_dec_ref(v_args_3880_);
return v___x_3885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3904_, lean_object* v_handler_3905_, lean_object* v_options_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_args_3909_, lean_object* v___y_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3904_, v_handler_3905_, v_options_3906_, v_a_3907_, v_a_3908_, v_args_3909_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3915_, lean_object* v_options_3916_){
_start:
{
lean_object* v___f_3918_; lean_object* v___x_3919_; 
v___f_3918_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3919_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
lean_inc_n(v_a_3920_, 2);
lean_dec_ref_known(v___x_3919_, 1);
v___x_3921_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3922_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3920_, v___x_3921_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref_known(v___x_3922_, 1);
v___x_3924_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3925_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3920_, v___x_3924_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v_a_3926_; lean_object* v___f_3927_; lean_object* v___x_3928_; 
v_a_3926_ = lean_ctor_get(v___x_3925_, 0);
lean_inc(v_a_3926_);
lean_dec_ref_known(v___x_3925_, 1);
v___f_3927_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3927_, 0, v___f_3918_);
lean_closure_set(v___f_3927_, 1, v_handler_3915_);
lean_closure_set(v___f_3927_, 2, v_options_3916_);
lean_closure_set(v___f_3927_, 3, v_a_3923_);
lean_closure_set(v___f_3927_, 4, v_a_3926_);
v___x_3928_ = l_Lasm_JS_Function_ofFn(v___f_3927_);
return v___x_3928_;
}
else
{
lean_dec(v_a_3923_);
lean_dec_ref(v_options_3916_);
lean_dec_ref(v_handler_3915_);
return v___x_3925_;
}
}
else
{
lean_dec(v_a_3920_);
lean_dec_ref(v_options_3916_);
lean_dec_ref(v_handler_3915_);
return v___x_3922_;
}
}
else
{
lean_dec_ref(v_options_3916_);
lean_dec_ref(v_handler_3915_);
return v___x_3919_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3929_, lean_object* v_options_3930_, lean_object* v_a_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3929_, v_options_3930_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3933_){
_start:
{
lean_object* v___x_3935_; 
v___x_3935_ = l_Lasm_JS_Wire_decode(v_bytes_3933_);
return v___x_3935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3936_);
lean_dec_ref(v_bytes_3936_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3939_, lean_object* v_bytes_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lasm_JS_Wire_decode(v_bytes_3940_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3943_, lean_object* v_bytes_3944_, lean_object* v_a_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3943_, v_bytes_3944_);
lean_dec_ref(v_bytes_3944_);
lean_dec_ref(v_context_3943_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(lean_object* v___x_3947_, lean_object* v_s_3948_, lean_object* v_pos_3949_){
_start:
{
lean_object* v_str_3950_; lean_object* v_startInclusive_3951_; lean_object* v_endExclusive_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3963_; uint8_t v_decide_3964_; 
v_str_3950_ = lean_ctor_get(v_s_3948_, 0);
v_startInclusive_3951_ = lean_ctor_get(v_s_3948_, 1);
v_endExclusive_3952_ = lean_ctor_get(v_s_3948_, 2);
v___x_3953_ = lean_unsigned_to_nat(0u);
v___x_3954_ = lean_nat_add(v_startInclusive_3951_, v_pos_3949_);
v___x_3963_ = lean_nat_sub(v_endExclusive_3952_, v___x_3954_);
v_decide_3964_ = lean_nat_dec_eq(v___x_3953_, v___x_3963_);
lean_dec(v___x_3963_);
if (v_decide_3964_ == 0)
{
uint8_t v___x_3965_; uint32_t v___x_3967_; uint32_t v___x_3968_; uint8_t v___x_3969_; 
v___x_3965_ = lean_nat_dec_eq(v___x_3947_, v___x_3953_);
v___x_3967_ = lean_string_utf8_get_fast(v_str_3950_, v___x_3954_);
v___x_3968_ = 47;
v___x_3969_ = lean_uint32_dec_eq(v___x_3967_, v___x_3968_);
if (v___x_3969_ == 0)
{
uint32_t v___x_3970_; uint8_t v___x_3971_; 
v___x_3970_ = 63;
v___x_3971_ = lean_uint32_dec_eq(v___x_3967_, v___x_3970_);
if (v___x_3971_ == 0)
{
uint32_t v___x_3972_; uint8_t v___x_3973_; 
v___x_3972_ = 35;
v___x_3973_ = lean_uint32_dec_eq(v___x_3967_, v___x_3972_);
if (v___x_3973_ == 0)
{
uint32_t v___x_3974_; uint8_t v___x_3975_; 
v___x_3974_ = 92;
v___x_3975_ = lean_uint32_dec_eq(v___x_3967_, v___x_3974_);
if (v___x_3975_ == 0)
{
uint32_t v___x_3976_; uint8_t v___x_3977_; 
v___x_3976_ = 64;
v___x_3977_ = lean_uint32_dec_eq(v___x_3967_, v___x_3976_);
if (v___x_3977_ == 0)
{
uint32_t v___x_3978_; uint8_t v___x_3979_; 
v___x_3978_ = 32;
v___x_3979_ = lean_uint32_dec_eq(v___x_3967_, v___x_3978_);
if (v___x_3979_ == 0)
{
uint32_t v___x_3980_; uint8_t v___x_3981_; 
v___x_3980_ = 9;
v___x_3981_ = lean_uint32_dec_eq(v___x_3967_, v___x_3980_);
if (v___x_3981_ == 0)
{
uint32_t v___x_3982_; uint8_t v___x_3983_; 
v___x_3982_ = 13;
v___x_3983_ = lean_uint32_dec_eq(v___x_3967_, v___x_3982_);
if (v___x_3983_ == 0)
{
uint32_t v___x_3984_; uint8_t v___x_3985_; 
v___x_3984_ = 10;
v___x_3985_ = lean_uint32_dec_eq(v___x_3967_, v___x_3984_);
if (v___x_3985_ == 0)
{
lean_object* v___x_3986_; lean_object* v___x_3987_; uint8_t v___x_3988_; 
v___x_3986_ = lean_uint32_to_nat(v___x_3967_);
v___x_3987_ = lean_unsigned_to_nat(32u);
v___x_3988_ = lean_nat_dec_lt(v___x_3986_, v___x_3987_);
if (v___x_3988_ == 0)
{
lean_object* v___x_3989_; uint8_t v___x_3990_; 
v___x_3989_ = lean_unsigned_to_nat(127u);
v___x_3990_ = lean_nat_dec_eq(v___x_3986_, v___x_3989_);
lean_dec(v___x_3986_);
if (v___x_3990_ == 0)
{
goto v___jp_3955_;
}
else
{
lean_dec(v___x_3954_);
return v_pos_3949_;
}
}
else
{
lean_dec(v___x_3986_);
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
}
else
{
goto v___jp_3966_;
}
v___jp_3966_:
{
if (v___x_3965_ == 0)
{
lean_dec(v___x_3954_);
return v_pos_3949_;
}
else
{
goto v___jp_3955_;
}
}
}
else
{
lean_dec(v___x_3954_);
return v_pos_3949_;
}
v___jp_3955_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; 
v___x_3956_ = lean_string_utf8_next_fast(v_str_3950_, v___x_3954_);
v___x_3957_ = lean_nat_sub(v___x_3956_, v___x_3954_);
lean_dec(v___x_3954_);
v___x_3958_ = lean_nat_add(v_pos_3949_, v___x_3957_);
lean_dec(v___x_3957_);
v___x_3959_ = lean_unsigned_to_nat(1u);
v___x_3960_ = lean_nat_add(v_pos_3949_, v___x_3959_);
v___x_3961_ = lean_nat_dec_le(v___x_3960_, v___x_3958_);
lean_dec(v___x_3960_);
if (v___x_3961_ == 0)
{
lean_dec(v___x_3958_);
return v_pos_3949_;
}
else
{
lean_dec(v_pos_3949_);
v_pos_3949_ = v___x_3958_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0___boxed(lean_object* v___x_3991_, lean_object* v_s_3992_, lean_object* v_pos_3993_){
_start:
{
lean_object* v_res_3994_; 
v_res_3994_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_3991_, v_s_3992_, v_pos_3993_);
lean_dec_ref(v_s_3992_);
lean_dec(v___x_3991_);
return v_res_3994_;
}
}
static lean_object* _init_l_Lasm_Fetch_nodeRequestUrl___closed__0(void){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3995_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_3996_ = lean_string_utf8_byte_size(v___x_3995_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl(lean_object* v_target_3999_, lean_object* v_host_4000_, lean_object* v_port_4001_){
_start:
{
lean_object* v___y_4003_; 
if (lean_obj_tag(v_host_4000_) == 0)
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v___x_4017_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4018_ = l_Nat_reprFast(v_port_4001_);
v___x_4019_ = lean_string_append(v___x_4017_, v___x_4018_);
lean_dec_ref(v___x_4018_);
v___y_4003_ = v___x_4019_;
goto v___jp_4002_;
}
else
{
lean_object* v_val_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; uint8_t v___x_4023_; 
v_val_4020_ = lean_ctor_get(v_host_4000_, 0);
lean_inc(v_val_4020_);
lean_dec_ref_known(v_host_4000_, 1);
v___x_4021_ = lean_string_utf8_byte_size(v_val_4020_);
v___x_4022_ = lean_unsigned_to_nat(0u);
v___x_4023_ = lean_nat_dec_eq(v___x_4021_, v___x_4022_);
if (v___x_4023_ == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; uint8_t v_decide_4026_; 
lean_inc(v_val_4020_);
v___x_4024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4024_, 0, v_val_4020_);
lean_ctor_set(v___x_4024_, 1, v___x_4022_);
lean_ctor_set(v___x_4024_, 2, v___x_4021_);
v___x_4025_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4021_, v___x_4024_, v___x_4022_);
lean_dec_ref_known(v___x_4024_, 3);
v_decide_4026_ = lean_nat_dec_eq(v___x_4025_, v___x_4021_);
lean_dec(v___x_4025_);
if (v_decide_4026_ == 0)
{
lean_dec(v_val_4020_);
goto v___jp_4013_;
}
else
{
lean_dec(v_port_4001_);
v___y_4003_ = v_val_4020_;
goto v___jp_4002_;
}
}
else
{
lean_dec(v_val_4020_);
goto v___jp_4013_;
}
}
v___jp_4002_:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; uint8_t v___x_4007_; 
v___x_4004_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4005_ = lean_string_utf8_byte_size(v_target_3999_);
v___x_4006_ = lean_obj_once(&l_Lasm_Fetch_nodeRequestUrl___closed__0, &l_Lasm_Fetch_nodeRequestUrl___closed__0_once, _init_l_Lasm_Fetch_nodeRequestUrl___closed__0);
v___x_4007_ = lean_nat_dec_le(v___x_4006_, v___x_4005_);
if (v___x_4007_ == 0)
{
lean_dec_ref(v___y_4003_);
lean_inc_ref(v_target_3999_);
return v_target_3999_;
}
else
{
lean_object* v___x_4008_; uint8_t v___x_4009_; 
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_string_memcmp(v_target_3999_, v___x_4004_, v___x_4008_, v___x_4008_, v___x_4006_);
if (v___x_4009_ == 0)
{
lean_dec_ref(v___y_4003_);
lean_inc_ref(v_target_3999_);
return v_target_3999_;
}
else
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4010_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__1));
v___x_4011_ = lean_string_append(v___x_4010_, v___y_4003_);
lean_dec_ref(v___y_4003_);
v___x_4012_ = lean_string_append(v___x_4011_, v_target_3999_);
return v___x_4012_;
}
}
}
v___jp_4013_:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4014_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4015_ = l_Nat_reprFast(v_port_4001_);
v___x_4016_ = lean_string_append(v___x_4014_, v___x_4015_);
lean_dec_ref(v___x_4015_);
v___y_4003_ = v___x_4016_;
goto v___jp_4002_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl___boxed(lean_object* v_target_4027_, lean_object* v_host_4028_, lean_object* v_port_4029_){
_start:
{
lean_object* v_res_4030_; 
v_res_4030_ = l_Lasm_Fetch_nodeRequestUrl(v_target_4027_, v_host_4028_, v_port_4029_);
lean_dec_ref(v_target_4027_);
return v_res_4030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v_x_4031_){
_start:
{
if (lean_obj_tag(v_x_4031_) == 0)
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4041_; 
v_a_4033_ = lean_ctor_get(v_x_4031_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v_x_4031_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4035_ = v_x_4031_;
v_isShared_4036_ = v_isSharedCheck_4041_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v_x_4031_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4041_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
lean_object* v___x_4039_; 
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4038_);
return v___x_4039_;
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4051_; 
v_a_4042_ = lean_ctor_get(v_x_4031_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v_x_4031_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4044_ = v_x_4031_;
v_isShared_4045_ = v_isSharedCheck_4051_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v_x_4031_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4051_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
v___x_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4049_, 0, v___x_4048_);
return v___x_4049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v_x_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = l_Lasm_Fetch_serveNode___lam__1(v_x_4052_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_4059_){
_start:
{
if (lean_obj_tag(v_x_4059_) == 0)
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4069_; 
v_a_4061_ = lean_ctor_get(v_x_4059_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_x_4059_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4063_ = v_x_4059_;
v_isShared_4064_ = v_isSharedCheck_4069_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v_x_4059_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4069_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
lean_object* v___x_4067_; 
v___x_4067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4066_);
return v___x_4067_;
}
}
}
else
{
lean_object* v___x_4070_; 
lean_dec_ref_known(v_x_4059_, 1);
v___x_4070_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lasm_Fetch_serveNode___lam__0(v_x_4071_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_4074_, lean_object* v_x_4075_){
_start:
{
if (lean_obj_tag(v_x_4075_) == 0)
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4085_; 
lean_dec_ref(v___f_4074_);
v_a_4077_ = lean_ctor_get(v_x_4075_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_x_4075_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4079_ = v_x_4075_;
v_isShared_4080_ = v_isSharedCheck_4085_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v_x_4075_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4085_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
lean_object* v___x_4083_; 
v___x_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4082_);
return v___x_4083_;
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4106_; 
v_a_4086_ = lean_ctor_get(v_x_4075_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_x_4075_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_4088_ = v_x_4075_;
v_isShared_4089_ = v_isSharedCheck_4106_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v_x_4075_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4106_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v_flush_4090_; lean_object* v___x_4091_; uint8_t v___x_4092_; lean_object* v_val_4094_; lean_object* v___x_4097_; 
v_flush_4090_ = lean_ctor_get(v_a_4086_, 0);
lean_inc_ref(v_flush_4090_);
lean_dec(v_a_4086_);
v___x_4091_ = lean_unsigned_to_nat(0u);
v___x_4092_ = 0;
v___x_4097_ = lean_apply_1(v_flush_4090_, lean_box(0));
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v_a_4098_; lean_object* v___x_4100_; 
v_a_4098_ = lean_ctor_get(v___x_4097_, 0);
lean_inc(v_a_4098_);
lean_dec_ref_known(v___x_4097_, 1);
if (v_isShared_4089_ == 0)
{
lean_ctor_set(v___x_4088_, 0, v_a_4098_);
v___x_4100_ = v___x_4088_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4098_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
v_val_4094_ = v___x_4100_;
goto v___jp_4093_;
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; 
v_a_4102_ = lean_ctor_get(v___x_4097_, 0);
lean_inc(v_a_4102_);
lean_dec_ref_known(v___x_4097_, 1);
if (v_isShared_4089_ == 0)
{
lean_ctor_set_tag(v___x_4088_, 0);
lean_ctor_set(v___x_4088_, 0, v_a_4102_);
v___x_4104_ = v___x_4088_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_a_4102_);
v___x_4104_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
v_val_4094_ = v___x_4104_;
goto v___jp_4093_;
}
}
v___jp_4093_:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4095_, 0, v_val_4094_);
v___x_4096_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4091_, v___x_4092_, v___x_4095_, v___f_4074_);
return v___x_4096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_4107_, lean_object* v_x_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lasm_Fetch_serveNode___lam__2(v___f_4107_, v_x_4108_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_4111_, lean_object* v_x_4112_){
_start:
{
if (lean_obj_tag(v_x_4112_) == 0)
{
lean_object* v_a_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4122_; 
lean_dec_ref(v___f_4111_);
v_a_4114_ = lean_ctor_get(v_x_4112_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v_x_4112_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4116_ = v_x_4112_;
v_isShared_4117_ = v_isSharedCheck_4122_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_a_4114_);
lean_dec(v_x_4112_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4122_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4119_; 
if (v_isShared_4117_ == 0)
{
v___x_4119_ = v___x_4116_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_a_4114_);
v___x_4119_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
return v___x_4120_;
}
}
}
else
{
lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4134_; 
v_isSharedCheck_4134_ = !lean_is_exclusive(v_x_4112_);
if (v_isSharedCheck_4134_ == 0)
{
lean_object* v_unused_4135_; 
v_unused_4135_ = lean_ctor_get(v_x_4112_, 0);
lean_dec(v_unused_4135_);
v___x_4124_ = v_x_4112_;
v_isShared_4125_ = v_isSharedCheck_4134_;
goto v_resetjp_4123_;
}
else
{
lean_dec(v_x_4112_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4134_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___x_4126_; uint8_t v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4130_; 
v___x_4126_ = lean_unsigned_to_nat(0u);
v___x_4127_ = 0;
v___x_4128_ = lean_get_stdout();
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 0, v___x_4128_);
v___x_4130_ = v___x_4124_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v___x_4128_);
v___x_4130_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4130_);
v___x_4132_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4126_, v___x_4127_, v___x_4131_, v___f_4111_);
return v___x_4132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_4136_, lean_object* v_x_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Lasm_Fetch_serveNode___lam__3(v___f_4136_, v_x_4137_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_4140_){
_start:
{
if (lean_obj_tag(v_x_4140_) == 0)
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4150_; 
v_a_4142_ = lean_ctor_get(v_x_4140_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v_x_4140_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4144_ = v_x_4140_;
v_isShared_4145_ = v_isSharedCheck_4150_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v_x_4140_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4150_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4147_; 
if (v_isShared_4145_ == 0)
{
v___x_4147_ = v___x_4144_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
lean_object* v___x_4148_; 
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4147_);
return v___x_4148_;
}
}
}
else
{
lean_object* v___x_4151_; 
lean_dec_ref_known(v_x_4140_, 1);
v___x_4151_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4151_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lasm_Fetch_serveNode___lam__4(v_x_4152_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4156_, lean_object* v___x_4157_, lean_object* v_____r_4158_){
_start:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4160_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4161_, 0, v_snd_4156_);
lean_ctor_set(v___x_4161_, 1, v___x_4160_);
lean_ctor_set(v___x_4161_, 2, v___x_4157_);
v___x_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4164_, lean_object* v___x_4165_, lean_object* v_____r_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4164_, v___x_4165_, v_____r_4166_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_4169_, lean_object* v_x_4170_){
_start:
{
if (lean_obj_tag(v_x_4170_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4180_; 
lean_dec_ref(v___f_4169_);
v_a_4172_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4174_ = v_x_4170_;
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v_x_4170_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4178_; 
v___x_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
}
}
else
{
lean_object* v_a_4181_; 
v_a_4181_ = lean_ctor_get(v_x_4170_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v_x_4170_, 1);
if (lean_obj_tag(v_a_4181_) == 0)
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4190_; 
lean_dec_ref(v___f_4169_);
v_a_4182_ = lean_ctor_get(v_a_4181_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v_a_4181_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4184_ = v_a_4181_;
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v_a_4181_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
lean_ctor_set_tag(v___x_4184_, 1);
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
lean_object* v___x_4188_; 
v___x_4188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4187_);
return v___x_4188_;
}
}
}
else
{
lean_object* v_a_4191_; lean_object* v___x_4192_; 
v_a_4191_ = lean_ctor_get(v_a_4181_, 0);
lean_inc(v_a_4191_);
lean_dec_ref_known(v_a_4181_, 1);
v___x_4192_ = lean_apply_2(v___f_4169_, v_a_4191_, lean_box(0));
return v___x_4192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4193_, lean_object* v_x_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4193_, v_x_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_4198_, lean_object* v___x_4199_, lean_object* v_x_4200_){
_start:
{
if (lean_obj_tag(v_x_4200_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4210_; 
lean_dec_ref(v___x_4199_);
lean_dec(v_snd_4198_);
v_a_4202_ = lean_ctor_get(v_x_4200_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v_x_4200_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4204_ = v_x_4200_;
v_isShared_4205_ = v_isSharedCheck_4210_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v_x_4200_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4210_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
lean_object* v___x_4208_; 
v___x_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4207_);
return v___x_4208_;
}
}
}
else
{
lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4221_; 
v_isSharedCheck_4221_ = !lean_is_exclusive(v_x_4200_);
if (v_isSharedCheck_4221_ == 0)
{
lean_object* v_unused_4222_; 
v_unused_4222_ = lean_ctor_get(v_x_4200_, 0);
lean_dec(v_unused_4222_);
v___x_4212_ = v_x_4200_;
v_isShared_4213_ = v_isSharedCheck_4221_;
goto v_resetjp_4211_;
}
else
{
lean_dec(v_x_4200_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4221_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4217_; 
v___x_4214_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4215_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4215_, 0, v_snd_4198_);
lean_ctor_set(v___x_4215_, 1, v___x_4214_);
lean_ctor_set(v___x_4215_, 2, v___x_4199_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set_tag(v___x_4212_, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4215_);
v___x_4217_ = v___x_4212_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v___x_4215_);
v___x_4217_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4217_);
v___x_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4218_);
return v___x_4219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_4223_, lean_object* v___x_4224_, lean_object* v_x_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_4223_, v___x_4224_, v_x_4225_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4228_, lean_object* v_name_4229_, lean_object* v_args_4230_){
_start:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; uint64_t v___x_4235_; lean_object* v___x_4236_; 
v___x_4232_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4233_, 0, v_o_4228_);
lean_ctor_set(v___x_4233_, 1, v___x_4232_);
v___x_4234_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4234_, 0, v_name_4229_);
v___x_4235_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4236_ = l_Lasm_JS_Value_invokeRaw(v___x_4233_, v___x_4234_, v_args_4230_, v___x_4235_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; lean_object* v___x_4238_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
lean_inc(v_a_4237_);
lean_dec_ref_known(v___x_4236_, 1);
v___x_4238_ = l_Lasm_JS_Wire_decode(v_a_4237_);
lean_dec(v_a_4237_);
return v___x_4238_;
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
v_a_4239_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4236_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4236_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4247_, lean_object* v_name_4248_, lean_object* v_args_4249_, lean_object* v_a_4250_){
_start:
{
lean_object* v_res_4251_; 
v_res_4251_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4247_, v_name_4248_, v_args_4249_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4252_, uint8_t v___x_4253_, lean_object* v___f_4254_, lean_object* v_snd_4255_, lean_object* v_chunk_4256_){
_start:
{
lean_object* v_val_4259_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
v___x_4262_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4263_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4263_, 0, v_chunk_4256_);
v___x_4264_ = lean_unsigned_to_nat(1u);
v___x_4265_ = lean_mk_empty_array_with_capacity(v___x_4264_);
v___x_4266_ = lean_array_push(v___x_4265_, v___x_4263_);
v___x_4267_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4255_, v___x_4262_, v___x_4266_);
if (lean_obj_tag(v___x_4267_) == 0)
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
v_a_4268_ = lean_ctor_get(v___x_4267_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4267_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4270_ = v___x_4267_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4267_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
lean_ctor_set_tag(v___x_4270_, 1);
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4268_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
v_val_4259_ = v___x_4273_;
goto v___jp_4258_;
}
}
}
else
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4283_; 
v_a_4276_ = lean_ctor_get(v___x_4267_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4267_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4278_ = v___x_4267_;
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4267_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
lean_ctor_set_tag(v___x_4278_, 0);
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
v_val_4259_ = v___x_4281_;
goto v___jp_4258_;
}
}
}
v___jp_4258_:
{
lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4260_, 0, v_val_4259_);
v___x_4261_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4252_, v___x_4253_, v___x_4260_, v___f_4254_);
return v___x_4261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4284_, lean_object* v___x_4285_, lean_object* v___f_4286_, lean_object* v_snd_4287_, lean_object* v_chunk_4288_, lean_object* v___y_4289_){
_start:
{
uint8_t v___x_18240__boxed_4290_; lean_object* v_res_4291_; 
v___x_18240__boxed_4290_ = lean_unbox(v___x_4285_);
v_res_4291_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4284_, v___x_18240__boxed_4290_, v___f_4286_, v_snd_4287_, v_chunk_4288_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4292_, uint8_t v___x_4293_, lean_object* v___f_4294_, lean_object* v_x_4295_){
_start:
{
lean_object* v_val_4298_; 
if (lean_obj_tag(v_x_4295_) == 0)
{
lean_object* v_a_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4317_; 
v_a_4301_ = lean_ctor_get(v_x_4295_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v_x_4295_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4303_ = v_x_4295_;
v_isShared_4304_ = v_isSharedCheck_4317_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_a_4301_);
lean_dec(v_x_4295_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4317_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4305_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4306_ = lean_io_error_to_string(v_a_4301_);
v___x_4307_ = lean_string_append(v___x_4305_, v___x_4306_);
lean_dec_ref(v___x_4306_);
v___x_4308_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4307_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v___x_4311_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v___x_4308_, 1);
if (v_isShared_4304_ == 0)
{
lean_ctor_set_tag(v___x_4303_, 1);
lean_ctor_set(v___x_4303_, 0, v_a_4309_);
v___x_4311_ = v___x_4303_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v_a_4309_);
v___x_4311_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
v_val_4298_ = v___x_4311_;
goto v___jp_4297_;
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; 
v_a_4313_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4313_);
lean_dec_ref_known(v___x_4308_, 1);
if (v_isShared_4304_ == 0)
{
lean_ctor_set(v___x_4303_, 0, v_a_4313_);
v___x_4315_ = v___x_4303_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v_a_4313_);
v___x_4315_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
v_val_4298_ = v___x_4315_;
goto v___jp_4297_;
}
}
}
}
else
{
lean_object* v___x_4318_; 
lean_dec_ref(v___f_4294_);
lean_dec(v___x_4292_);
v___x_4318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4318_, 0, v_x_4295_);
return v___x_4318_;
}
v___jp_4297_:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v_val_4298_);
v___x_4300_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4292_, v___x_4293_, v___x_4299_, v___f_4294_);
return v___x_4300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4319_, lean_object* v___x_4320_, lean_object* v___f_4321_, lean_object* v_x_4322_, lean_object* v___y_4323_){
_start:
{
uint8_t v___x_18308__boxed_4324_; lean_object* v_res_4325_; 
v___x_18308__boxed_4324_ = lean_unbox(v___x_4320_);
v_res_4325_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4319_, v___x_18308__boxed_4324_, v___f_4321_, v_x_4322_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4326_, lean_object* v_snd_4327_, lean_object* v___y_4328_, uint16_t v_status_4329_, lean_object* v_body_4330_, lean_object* v___x_4331_, lean_object* v___f_4332_, lean_object* v___f_4333_, lean_object* v___f_4334_, lean_object* v___f_4335_, lean_object* v___f_4336_, lean_object* v_x_4337_){
_start:
{
if (lean_obj_tag(v_x_4337_) == 0)
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4347_; 
lean_dec_ref(v___f_4336_);
lean_dec_ref(v___f_4335_);
lean_dec_ref(v___f_4334_);
lean_dec_ref(v___f_4333_);
lean_dec_ref(v___f_4332_);
lean_dec(v___x_4331_);
lean_dec_ref(v_body_4330_);
lean_dec(v_snd_4327_);
lean_dec(v_stream_4326_);
v_a_4339_ = lean_ctor_get(v_x_4337_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v_x_4337_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4341_ = v_x_4337_;
v_isShared_4342_ = v_isSharedCheck_4347_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v_x_4337_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4347_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4344_; 
if (v_isShared_4342_ == 0)
{
v___x_4344_ = v___x_4341_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
lean_object* v___x_4345_; 
v___x_4345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4345_, 0, v___x_4344_);
return v___x_4345_;
}
}
}
else
{
lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4377_; 
v_isSharedCheck_4377_ = !lean_is_exclusive(v_x_4337_);
if (v_isSharedCheck_4377_ == 0)
{
lean_object* v_unused_4378_; 
v_unused_4378_ = lean_ctor_get(v_x_4337_, 0);
lean_dec(v_unused_4378_);
v___x_4349_ = v_x_4337_;
v_isShared_4350_ = v_isSharedCheck_4377_;
goto v_resetjp_4348_;
}
else
{
lean_dec(v_x_4337_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4377_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
if (lean_obj_tag(v_stream_4326_) == 0)
{
lean_object* v___x_4351_; lean_object* v___y_4353_; uint8_t v___x_4362_; 
lean_dec_ref(v___f_4336_);
lean_dec_ref(v___f_4335_);
lean_dec_ref(v___f_4334_);
lean_dec_ref(v___f_4333_);
lean_dec_ref(v___f_4332_);
lean_dec(v___x_4331_);
v___x_4351_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4362_ = l_Lasm_Fetch_bodyless(v___y_4328_, v_status_4329_);
if (v___x_4362_ == 0)
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4363_, 0, v_body_4330_);
v___y_4353_ = v___x_4363_;
goto v___jp_4352_;
}
else
{
lean_object* v___x_4364_; 
lean_dec_ref(v_body_4330_);
v___x_4364_ = lean_box(0);
v___y_4353_ = v___x_4364_;
goto v___jp_4352_;
}
v___jp_4352_:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4359_; 
v___x_4354_ = lean_unsigned_to_nat(1u);
v___x_4355_ = lean_mk_empty_array_with_capacity(v___x_4354_);
v___x_4356_ = lean_array_push(v___x_4355_, v___y_4353_);
v___x_4357_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4357_, 0, v_snd_4327_);
lean_ctor_set(v___x_4357_, 1, v___x_4351_);
lean_ctor_set(v___x_4357_, 2, v___x_4356_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 0, v___x_4357_);
v___x_4359_ = v___x_4349_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v___x_4357_);
v___x_4359_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
lean_object* v___x_4360_; 
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
return v___x_4360_;
}
}
}
else
{
lean_object* v_val_4365_; uint8_t v___x_4366_; 
lean_del_object(v___x_4349_);
lean_dec_ref(v_body_4330_);
v_val_4365_ = lean_ctor_get(v_stream_4326_, 0);
lean_inc(v_val_4365_);
lean_dec_ref_known(v_stream_4326_, 1);
v___x_4366_ = l_Lasm_Fetch_bodyless(v___y_4328_, v_status_4329_);
if (v___x_4366_ == 0)
{
lean_object* v___x_4367_; lean_object* v___f_4368_; lean_object* v___x_4369_; lean_object* v___f_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; 
lean_dec_ref(v___f_4336_);
v___x_4367_ = lean_box(v___x_4366_);
lean_inc_n(v___x_4331_, 4);
v___f_4368_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4368_, 0, v___x_4331_);
lean_closure_set(v___f_4368_, 1, v___x_4367_);
lean_closure_set(v___f_4368_, 2, v___f_4332_);
lean_closure_set(v___f_4368_, 3, v_snd_4327_);
v___x_4369_ = lean_box(v___x_4366_);
v___f_4370_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4370_, 0, v___x_4331_);
lean_closure_set(v___f_4370_, 1, v___x_4369_);
lean_closure_set(v___f_4370_, 2, v___f_4333_);
v___x_4371_ = lean_apply_2(v_val_4365_, v___f_4368_, lean_box(0));
v___x_4372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4331_, v___x_4366_, v___x_4371_, v___f_4334_);
v___x_4373_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4331_, v___x_4366_, v___x_4372_, v___f_4370_);
v___x_4374_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4331_, v___x_4366_, v___x_4373_, v___f_4335_);
return v___x_4374_;
}
else
{
lean_object* v___x_4375_; lean_object* v___x_4376_; 
lean_dec(v_val_4365_);
lean_dec_ref(v___f_4335_);
lean_dec_ref(v___f_4334_);
lean_dec_ref(v___f_4333_);
lean_dec_ref(v___f_4332_);
lean_dec(v___x_4331_);
lean_dec(v_snd_4327_);
v___x_4375_ = lean_box(0);
v___x_4376_ = lean_apply_2(v___f_4336_, v___x_4375_, lean_box(0));
return v___x_4376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4379_, lean_object* v_snd_4380_, lean_object* v___y_4381_, lean_object* v_status_4382_, lean_object* v_body_4383_, lean_object* v___x_4384_, lean_object* v___f_4385_, lean_object* v___f_4386_, lean_object* v___f_4387_, lean_object* v___f_4388_, lean_object* v___f_4389_, lean_object* v_x_4390_, lean_object* v___y_4391_){
_start:
{
uint16_t v_status_boxed_4392_; lean_object* v_res_4393_; 
v_status_boxed_4392_ = lean_unbox(v_status_4382_);
v_res_4393_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4379_, v_snd_4380_, v___y_4381_, v_status_boxed_4392_, v_body_4383_, v___x_4384_, v___f_4385_, v___f_4386_, v___f_4387_, v___f_4388_, v___f_4389_, v_x_4390_);
lean_dec_ref(v___y_4381_);
return v_res_4393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4394_, size_t v_i_4395_, size_t v_stop_4396_, lean_object* v_b_4397_){
_start:
{
uint8_t v___x_4398_; 
v___x_4398_ = lean_usize_dec_eq(v_i_4395_, v_stop_4396_);
if (v___x_4398_ == 0)
{
lean_object* v___x_4399_; lean_object* v_fst_4400_; lean_object* v_snd_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; size_t v___x_4406_; size_t v___x_4407_; 
v___x_4399_ = lean_array_uget_borrowed(v_as_4394_, v_i_4395_);
v_fst_4400_ = lean_ctor_get(v___x_4399_, 0);
v_snd_4401_ = lean_ctor_get(v___x_4399_, 1);
lean_inc(v_fst_4400_);
v___x_4402_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4402_, 0, v_fst_4400_);
v___x_4403_ = lean_array_push(v_b_4397_, v___x_4402_);
lean_inc(v_snd_4401_);
v___x_4404_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4404_, 0, v_snd_4401_);
v___x_4405_ = lean_array_push(v___x_4403_, v___x_4404_);
v___x_4406_ = ((size_t)1ULL);
v___x_4407_ = lean_usize_add(v_i_4395_, v___x_4406_);
v_i_4395_ = v___x_4407_;
v_b_4397_ = v___x_4405_;
goto _start;
}
else
{
return v_b_4397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4409_, lean_object* v_i_4410_, lean_object* v_stop_4411_, lean_object* v_b_4412_){
_start:
{
size_t v_i_boxed_4413_; size_t v_stop_boxed_4414_; lean_object* v_res_4415_; 
v_i_boxed_4413_ = lean_unbox_usize(v_i_4410_);
lean_dec(v_i_4410_);
v_stop_boxed_4414_ = lean_unbox_usize(v_stop_4411_);
lean_dec(v_stop_4411_);
v_res_4415_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4409_, v_i_boxed_4413_, v_stop_boxed_4414_, v_b_4412_);
lean_dec_ref(v_as_4409_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4417_, lean_object* v_snd_4418_, lean_object* v___y_4419_, lean_object* v___f_4420_, lean_object* v___f_4421_, lean_object* v_x_4422_){
_start:
{
lean_object* v___y_4425_; uint8_t v___y_4426_; lean_object* v_val_4427_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; 
if (lean_obj_tag(v_x_4422_) == 0)
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4466_; 
lean_dec_ref(v___f_4421_);
lean_dec_ref(v___f_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v_snd_4418_);
lean_dec(v___x_4417_);
v_a_4458_ = lean_ctor_get(v_x_4422_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v_x_4422_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4460_ = v_x_4422_;
v_isShared_4461_ = v_isSharedCheck_4466_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v_x_4422_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4466_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4463_; 
if (v_isShared_4461_ == 0)
{
v___x_4463_ = v___x_4460_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_a_4458_);
v___x_4463_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
lean_object* v___x_4464_; 
v___x_4464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
return v___x_4464_;
}
}
}
else
{
lean_object* v_a_4467_; uint16_t v_status_4468_; lean_object* v_headers_4469_; lean_object* v_body_4470_; lean_object* v_stream_4471_; lean_object* v___x_4472_; lean_object* v___f_4473_; lean_object* v___f_4474_; lean_object* v___f_4475_; lean_object* v___y_4477_; lean_object* v___x_4489_; uint8_t v___x_4490_; 
v_a_4467_ = lean_ctor_get(v_x_4422_, 0);
lean_inc(v_a_4467_);
lean_dec_ref_known(v_x_4422_, 1);
v_status_4468_ = lean_ctor_get_uint16(v_a_4467_, sizeof(void*)*3);
v_headers_4469_ = lean_ctor_get(v_a_4467_, 0);
lean_inc_ref(v_headers_4469_);
v_body_4470_ = lean_ctor_get(v_a_4467_, 1);
lean_inc_ref(v_body_4470_);
v_stream_4471_ = lean_ctor_get(v_a_4467_, 2);
lean_inc(v_stream_4471_);
lean_dec(v_a_4467_);
v___x_4472_ = lean_mk_empty_array_with_capacity(v___x_4417_);
lean_inc_ref_n(v___x_4472_, 2);
lean_inc_n(v_snd_4418_, 2);
v___f_4473_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4473_, 0, v_snd_4418_);
lean_closure_set(v___f_4473_, 1, v___x_4472_);
lean_inc_ref(v___f_4473_);
v___f_4474_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4474_, 0, v___f_4473_);
v___f_4475_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4475_, 0, v_snd_4418_);
lean_closure_set(v___f_4475_, 1, v___x_4472_);
v___x_4489_ = lean_array_get_size(v_headers_4469_);
v___x_4490_ = lean_nat_dec_lt(v___x_4417_, v___x_4489_);
if (v___x_4490_ == 0)
{
lean_dec_ref(v_headers_4469_);
v___y_4477_ = v___x_4472_;
goto v___jp_4476_;
}
else
{
uint8_t v___x_4491_; 
v___x_4491_ = lean_nat_dec_le(v___x_4489_, v___x_4489_);
if (v___x_4491_ == 0)
{
if (v___x_4490_ == 0)
{
lean_dec_ref(v_headers_4469_);
v___y_4477_ = v___x_4472_;
goto v___jp_4476_;
}
else
{
size_t v___x_4492_; size_t v___x_4493_; lean_object* v___x_4494_; 
v___x_4492_ = ((size_t)0ULL);
v___x_4493_ = lean_usize_of_nat(v___x_4489_);
v___x_4494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4469_, v___x_4492_, v___x_4493_, v___x_4472_);
lean_dec_ref(v_headers_4469_);
v___y_4477_ = v___x_4494_;
goto v___jp_4476_;
}
}
else
{
size_t v___x_4495_; size_t v___x_4496_; lean_object* v___x_4497_; 
v___x_4495_ = ((size_t)0ULL);
v___x_4496_ = lean_usize_of_nat(v___x_4489_);
v___x_4497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4469_, v___x_4495_, v___x_4496_, v___x_4472_);
lean_dec_ref(v_headers_4469_);
v___y_4477_ = v___x_4497_;
goto v___jp_4476_;
}
}
v___jp_4476_:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___f_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; uint8_t v___x_4485_; 
v___x_4478_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4479_ = lean_box(v_status_4468_);
lean_inc(v___x_4417_);
lean_inc(v_snd_4418_);
v___f_4480_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4480_, 0, v_stream_4471_);
lean_closure_set(v___f_4480_, 1, v_snd_4418_);
lean_closure_set(v___f_4480_, 2, v___y_4419_);
lean_closure_set(v___f_4480_, 3, v___x_4479_);
lean_closure_set(v___f_4480_, 4, v_body_4470_);
lean_closure_set(v___f_4480_, 5, v___x_4417_);
lean_closure_set(v___f_4480_, 6, v___f_4420_);
lean_closure_set(v___f_4480_, 7, v___f_4475_);
lean_closure_set(v___f_4480_, 8, v___f_4421_);
lean_closure_set(v___f_4480_, 9, v___f_4474_);
lean_closure_set(v___f_4480_, 10, v___f_4473_);
v___x_4481_ = lean_uint16_to_nat(v_status_4468_);
v___x_4482_ = lean_nat_to_int(v___x_4481_);
v___x_4483_ = lean_nat_abs(v___x_4482_);
v___x_4484_ = lean_cstr_to_nat("9007199254740991");
v___x_4485_ = lean_nat_dec_le(v___x_4483_, v___x_4484_);
lean_dec(v___x_4483_);
if (v___x_4485_ == 0)
{
lean_object* v___x_4486_; 
v___x_4486_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4482_);
v___y_4431_ = v___f_4480_;
v___y_4432_ = v___y_4477_;
v___y_4433_ = v___x_4478_;
v___y_4434_ = v___x_4486_;
goto v___jp_4430_;
}
else
{
double v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = l_Float_ofInt(v___x_4482_);
lean_dec(v___x_4482_);
v___x_4488_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4488_, 0, v___x_4487_);
v___y_4431_ = v___f_4480_;
v___y_4432_ = v___y_4477_;
v___y_4433_ = v___x_4478_;
v___y_4434_ = v___x_4488_;
goto v___jp_4430_;
}
}
}
v___jp_4424_:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4428_, 0, v_val_4427_);
v___x_4429_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4417_, v___y_4426_, v___x_4428_, v___y_4425_);
return v___x_4429_;
}
v___jp_4430_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; uint8_t v___x_4440_; lean_object* v___x_4441_; 
v___x_4435_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4435_, 0, v___y_4432_);
v___x_4436_ = lean_unsigned_to_nat(2u);
v___x_4437_ = lean_mk_empty_array_with_capacity(v___x_4436_);
v___x_4438_ = lean_array_push(v___x_4437_, v___y_4434_);
v___x_4439_ = lean_array_push(v___x_4438_, v___x_4435_);
v___x_4440_ = 0;
lean_inc_ref(v___y_4433_);
v___x_4441_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4418_, v___y_4433_, v___x_4439_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4449_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4444_ = v___x_4441_;
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v___x_4441_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4447_; 
if (v_isShared_4445_ == 0)
{
lean_ctor_set_tag(v___x_4444_, 1);
v___x_4447_ = v___x_4444_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4442_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
v___y_4425_ = v___y_4431_;
v___y_4426_ = v___x_4440_;
v_val_4427_ = v___x_4447_;
goto v___jp_4424_;
}
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
v_a_4450_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4441_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4441_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
lean_ctor_set_tag(v___x_4452_, 0);
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
v___y_4425_ = v___y_4431_;
v___y_4426_ = v___x_4440_;
v_val_4427_ = v___x_4455_;
goto v___jp_4424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4498_, lean_object* v_snd_4499_, lean_object* v___y_4500_, lean_object* v___f_4501_, lean_object* v___f_4502_, lean_object* v_x_4503_, lean_object* v___y_4504_){
_start:
{
lean_object* v_res_4505_; 
v_res_4505_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4498_, v_snd_4499_, v___y_4500_, v___f_4501_, v___f_4502_, v_x_4503_);
return v_res_4505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4506_, lean_object* v___x_4507_, lean_object* v___f_4508_, lean_object* v_request_4509_){
_start:
{
uint8_t v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4511_ = 0;
v___x_4512_ = l_Lasm_Fetch_respond(v_handler_4506_, v_request_4509_);
v___x_4513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4507_, v___x_4511_, v___x_4512_, v___f_4508_);
return v___x_4513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4514_, lean_object* v___x_4515_, lean_object* v___f_4516_, lean_object* v_request_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v_res_4519_; 
v_res_4519_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4514_, v___x_4515_, v___f_4516_, v_request_4517_);
return v_res_4519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4520_, lean_object* v_x_4521_){
_start:
{
if (lean_obj_tag(v_x_4521_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4531_; 
lean_dec_ref(v___f_4520_);
v_a_4523_ = lean_ctor_get(v_x_4521_, 0);
v_isSharedCheck_4531_ = !lean_is_exclusive(v_x_4521_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4525_ = v_x_4521_;
v_isShared_4526_ = v_isSharedCheck_4531_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v_x_4521_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4531_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
lean_object* v___x_4529_; 
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
}
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4533_; 
v_a_4532_ = lean_ctor_get(v_x_4521_, 0);
lean_inc(v_a_4532_);
lean_dec_ref_known(v_x_4521_, 1);
v___x_4533_ = lean_apply_2(v___f_4520_, v_a_4532_, lean_box(0));
return v___x_4533_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4534_, lean_object* v_x_4535_, lean_object* v___y_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4534_, v_x_4535_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v___y_4538_, lean_object* v___x_4539_, lean_object* v___x_4540_, lean_object* v___f_4541_, lean_object* v___x_4542_, uint8_t v___x_4543_, lean_object* v___f_4544_, lean_object* v_x_4545_){
_start:
{
if (lean_obj_tag(v_x_4545_) == 0)
{
lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4555_; 
lean_dec_ref(v___f_4544_);
lean_dec(v___x_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___x_4540_);
lean_dec_ref(v___x_4539_);
lean_dec_ref(v___y_4538_);
v_a_4547_ = lean_ctor_get(v_x_4545_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v_x_4545_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4549_ = v_x_4545_;
v_isShared_4550_ = v_isSharedCheck_4555_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v_x_4545_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4555_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
lean_object* v___x_4553_; 
v___x_4553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4552_);
return v___x_4553_;
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4566_; 
v_a_4556_ = lean_ctor_get(v_x_4545_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v_x_4545_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4558_ = v_x_4545_;
v_isShared_4559_ = v_isSharedCheck_4566_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v_x_4545_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4566_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4560_; lean_object* v___x_4562_; 
v___x_4560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4560_, 0, v___y_4538_);
lean_ctor_set(v___x_4560_, 1, v___x_4539_);
lean_ctor_set(v___x_4560_, 2, v___x_4540_);
lean_ctor_set(v___x_4560_, 3, v_a_4556_);
lean_ctor_set(v___x_4560_, 4, v___f_4541_);
if (v_isShared_4559_ == 0)
{
lean_ctor_set(v___x_4558_, 0, v___x_4560_);
v___x_4562_ = v___x_4558_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v___x_4560_);
v___x_4562_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4562_);
v___x_4564_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4542_, v___x_4543_, v___x_4563_, v___f_4544_);
return v___x_4564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v___y_4567_, lean_object* v___x_4568_, lean_object* v___x_4569_, lean_object* v___f_4570_, lean_object* v___x_4571_, lean_object* v___x_4572_, lean_object* v___f_4573_, lean_object* v_x_4574_, lean_object* v___y_4575_){
_start:
{
uint8_t v___x_18715__boxed_4576_; lean_object* v_res_4577_; 
v___x_18715__boxed_4576_ = lean_unbox(v___x_4572_);
v_res_4577_ = l_Lasm_Fetch_serveNode___lam__17(v___y_4567_, v___x_4568_, v___x_4569_, v___f_4570_, v___x_4571_, v___x_18715__boxed_4576_, v___f_4573_, v_x_4574_);
return v_res_4577_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_4578_; uint8_t v___x_4579_; uint64_t v___x_4580_; 
v___x_4578_ = 8ULL;
v___x_4579_ = 0;
v___x_4580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4579_, v___x_4578_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_4581_, lean_object* v_name_4582_, lean_object* v_args_4583_){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; uint64_t v___x_4588_; lean_object* v___x_4589_; 
v___x_4585_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4586_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4586_, 0, v_o_4581_);
lean_ctor_set(v___x_4586_, 1, v___x_4585_);
lean_inc_ref(v_name_4582_);
v___x_4587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4587_, 0, v_name_4582_);
v___x_4588_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_4589_ = l_Lasm_JS_Value_invokeRaw(v___x_4586_, v___x_4587_, v_args_4583_, v___x_4588_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc(v_a_4590_);
lean_dec_ref_known(v___x_4589_, 1);
v___x_4591_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4592_ = lean_string_append(v___x_4591_, v_name_4582_);
lean_dec_ref(v_name_4582_);
v___x_4593_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4592_, v_a_4590_);
lean_dec(v_a_4590_);
lean_dec_ref(v___x_4592_);
return v___x_4593_;
}
else
{
lean_dec_ref(v_name_4582_);
return v___x_4589_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_4594_, lean_object* v_name_4595_, lean_object* v_args_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_4594_, v_name_4595_, v_args_4596_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4600_, uint8_t v___x_4601_, lean_object* v___f_4602_, lean_object* v___x_4603_, lean_object* v_a_4604_, lean_object* v_x_4605_){
_start:
{
lean_object* v_val_4608_; 
if (lean_obj_tag(v_x_4605_) == 0)
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4619_; 
lean_dec(v_a_4604_);
lean_dec_ref(v___f_4602_);
lean_dec(v___x_4600_);
v_a_4611_ = lean_ctor_get(v_x_4605_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_x_4605_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4613_ = v_x_4605_;
v_isShared_4614_ = v_isSharedCheck_4619_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v_x_4605_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4619_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
lean_object* v___x_4617_; 
v___x_4617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4616_);
return v___x_4617_;
}
}
}
else
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4638_; 
v_a_4620_ = lean_ctor_get(v_x_4605_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v_x_4605_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4622_ = v_x_4605_;
v_isShared_4623_ = v_isSharedCheck_4638_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v_x_4605_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4638_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4624_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4625_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4626_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4626_, 0, v_a_4620_);
lean_ctor_set(v___x_4626_, 1, v___x_4625_);
v___x_4627_ = lean_mk_empty_array_with_capacity(v___x_4603_);
v___x_4628_ = lean_array_push(v___x_4627_, v___x_4626_);
v___x_4629_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_4604_, v___x_4624_, v___x_4628_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v___x_4632_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4630_);
lean_dec_ref_known(v___x_4629_, 1);
if (v_isShared_4623_ == 0)
{
lean_ctor_set(v___x_4622_, 0, v_a_4630_);
v___x_4632_ = v___x_4622_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_a_4630_);
v___x_4632_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
v_val_4608_ = v___x_4632_;
goto v___jp_4607_;
}
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; 
v_a_4634_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4634_);
lean_dec_ref_known(v___x_4629_, 1);
if (v_isShared_4623_ == 0)
{
lean_ctor_set_tag(v___x_4622_, 0);
lean_ctor_set(v___x_4622_, 0, v_a_4634_);
v___x_4636_ = v___x_4622_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_a_4634_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
v_val_4608_ = v___x_4636_;
goto v___jp_4607_;
}
}
}
}
v___jp_4607_:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4609_, 0, v_val_4608_);
v___x_4610_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4600_, v___x_4601_, v___x_4609_, v___f_4602_);
return v___x_4610_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4639_, lean_object* v___x_4640_, lean_object* v___f_4641_, lean_object* v___x_4642_, lean_object* v_a_4643_, lean_object* v_x_4644_, lean_object* v___y_4645_){
_start:
{
uint8_t v___x_18814__boxed_4646_; lean_object* v_res_4647_; 
v___x_18814__boxed_4646_ = lean_unbox(v___x_4640_);
v_res_4647_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4639_, v___x_18814__boxed_4646_, v___f_4641_, v___x_4642_, v_a_4643_, v_x_4644_);
lean_dec(v___x_4642_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4648_, lean_object* v___x_4649_, lean_object* v___x_4650_, lean_object* v___x_4651_, lean_object* v___x_4652_, uint8_t v___x_4653_, lean_object* v___f_4654_, lean_object* v_x_4655_){
_start:
{
if (lean_obj_tag(v_x_4655_) == 0)
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4665_; 
lean_dec_ref(v___f_4654_);
lean_dec(v___x_4652_);
lean_dec_ref(v___x_4651_);
lean_dec_ref(v___x_4650_);
lean_dec_ref(v___x_4649_);
lean_dec_ref(v___y_4648_);
v_a_4657_ = lean_ctor_get(v_x_4655_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_x_4655_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4659_ = v_x_4655_;
v_isShared_4660_ = v_isSharedCheck_4665_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v_x_4655_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4665_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
lean_object* v___x_4663_; 
v___x_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4662_);
return v___x_4663_;
}
}
}
else
{
lean_object* v_a_4666_; lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4676_; 
v_a_4666_ = lean_ctor_get(v_x_4655_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v_x_4655_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4668_ = v_x_4655_;
v_isShared_4669_ = v_isSharedCheck_4676_;
goto v_resetjp_4667_;
}
else
{
lean_inc(v_a_4666_);
lean_dec(v_x_4655_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4676_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4670_; lean_object* v___x_4672_; 
v___x_4670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4670_, 0, v___y_4648_);
lean_ctor_set(v___x_4670_, 1, v___x_4649_);
lean_ctor_set(v___x_4670_, 2, v___x_4650_);
lean_ctor_set(v___x_4670_, 3, v___x_4651_);
lean_ctor_set(v___x_4670_, 4, v_a_4666_);
if (v_isShared_4669_ == 0)
{
lean_ctor_set(v___x_4668_, 0, v___x_4670_);
v___x_4672_ = v___x_4668_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v___x_4670_);
v___x_4672_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4673_, 0, v___x_4672_);
v___x_4674_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4652_, v___x_4653_, v___x_4673_, v___f_4654_);
return v___x_4674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4677_, lean_object* v___x_4678_, lean_object* v___x_4679_, lean_object* v___x_4680_, lean_object* v___x_4681_, lean_object* v___x_4682_, lean_object* v___f_4683_, lean_object* v_x_4684_, lean_object* v___y_4685_){
_start:
{
uint8_t v___x_18904__boxed_4686_; lean_object* v_res_4687_; 
v___x_18904__boxed_4686_ = lean_unbox(v___x_4682_);
v_res_4687_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4677_, v___x_4678_, v___x_4679_, v___x_4680_, v___x_4681_, v___x_18904__boxed_4686_, v___f_4683_, v_x_4684_);
return v_res_4687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4688_, uint8_t v___x_4689_, lean_object* v___f_4690_, lean_object* v_x_4691_){
_start:
{
lean_object* v_val_4694_; 
if (lean_obj_tag(v_x_4691_) == 0)
{
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4705_; 
lean_dec_ref(v___f_4690_);
lean_dec(v___x_4688_);
v_a_4697_ = lean_ctor_get(v_x_4691_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v_x_4691_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4699_ = v_x_4691_;
v_isShared_4700_ = v_isSharedCheck_4705_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v_x_4691_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4705_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
lean_object* v___x_4703_; 
v___x_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
return v___x_4703_;
}
}
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4719_; 
v_a_4706_ = lean_ctor_get(v_x_4691_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_x_4691_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4708_ = v_x_4691_;
v_isShared_4709_ = v_isSharedCheck_4719_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v_x_4691_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4719_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4710_; 
v___x_4710_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4706_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v___x_4713_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref_known(v___x_4710_, 1);
if (v_isShared_4709_ == 0)
{
lean_ctor_set(v___x_4708_, 0, v_a_4711_);
v___x_4713_ = v___x_4708_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4711_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
v_val_4694_ = v___x_4713_;
goto v___jp_4693_;
}
}
else
{
lean_object* v_a_4715_; lean_object* v___x_4717_; 
v_a_4715_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4715_);
lean_dec_ref_known(v___x_4710_, 1);
if (v_isShared_4709_ == 0)
{
lean_ctor_set_tag(v___x_4708_, 0);
lean_ctor_set(v___x_4708_, 0, v_a_4715_);
v___x_4717_ = v___x_4708_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v_a_4715_);
v___x_4717_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
v_val_4694_ = v___x_4717_;
goto v___jp_4693_;
}
}
}
}
v___jp_4693_:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4695_, 0, v_val_4694_);
v___x_4696_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4688_, v___x_4689_, v___x_4695_, v___f_4690_);
return v___x_4696_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4720_, lean_object* v___x_4721_, lean_object* v___f_4722_, lean_object* v_x_4723_, lean_object* v___y_4724_){
_start:
{
uint8_t v___x_18967__boxed_4725_; lean_object* v_res_4726_; 
v___x_18967__boxed_4725_ = lean_unbox(v___x_4721_);
v_res_4726_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4720_, v___x_18967__boxed_4725_, v___f_4722_, v_x_4723_);
return v_res_4726_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_4729_, size_t v_i_4730_, size_t v_stop_4731_){
_start:
{
uint8_t v___x_4732_; 
v___x_4732_ = lean_usize_dec_eq(v_i_4730_, v_stop_4731_);
if (v___x_4732_ == 0)
{
lean_object* v___x_4733_; lean_object* v_fst_4734_; uint8_t v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; uint8_t v___x_4738_; 
v___x_4733_ = lean_array_uget_borrowed(v_as_4729_, v_i_4730_);
v_fst_4734_ = lean_ctor_get(v___x_4733_, 0);
v___x_4735_ = 1;
lean_inc(v_fst_4734_);
v___x_4736_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4734_);
v___x_4737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_4738_ = lean_string_dec_eq(v___x_4736_, v___x_4737_);
if (v___x_4738_ == 0)
{
lean_object* v___x_4739_; uint8_t v___x_4740_; 
v___x_4739_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_4740_ = lean_string_dec_eq(v___x_4736_, v___x_4739_);
lean_dec_ref(v___x_4736_);
if (v___x_4740_ == 0)
{
size_t v___x_4741_; size_t v___x_4742_; 
v___x_4741_ = ((size_t)1ULL);
v___x_4742_ = lean_usize_add(v_i_4730_, v___x_4741_);
v_i_4730_ = v___x_4742_;
goto _start;
}
else
{
return v___x_4735_;
}
}
else
{
lean_dec_ref(v___x_4736_);
return v___x_4735_;
}
}
else
{
uint8_t v___x_4744_; 
v___x_4744_ = 0;
return v___x_4744_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_4745_, lean_object* v_i_4746_, lean_object* v_stop_4747_){
_start:
{
size_t v_i_boxed_4748_; size_t v_stop_boxed_4749_; uint8_t v_res_4750_; lean_object* v_r_4751_; 
v_i_boxed_4748_ = lean_unbox_usize(v_i_4746_);
lean_dec(v_i_4746_);
v_stop_boxed_4749_ = lean_unbox_usize(v_stop_4747_);
lean_dec(v_stop_4747_);
v_res_4750_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_4745_, v_i_boxed_4748_, v_stop_boxed_4749_);
lean_dec_ref(v_as_4745_);
v_r_4751_ = lean_box(v_res_4750_);
return v_r_4751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4752_, lean_object* v_range_4753_, lean_object* v_b_4754_, lean_object* v_i_4755_){
_start:
{
lean_object* v_stop_4756_; lean_object* v_step_4757_; uint8_t v___x_4758_; 
v_stop_4756_ = lean_ctor_get(v_range_4753_, 1);
v_step_4757_ = lean_ctor_get(v_range_4753_, 2);
v___x_4758_ = lean_nat_dec_lt(v_i_4755_, v_stop_4756_);
if (v___x_4758_ == 0)
{
lean_dec(v_i_4755_);
return v_b_4754_;
}
else
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4759_ = lean_unsigned_to_nat(2u);
v___x_4760_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4761_ = lean_unsigned_to_nat(1u);
v___x_4762_ = lean_nat_mul(v___x_4759_, v_i_4755_);
v___x_4763_ = lean_array_get_borrowed(v___x_4760_, v___y_4752_, v___x_4762_);
v___x_4764_ = lean_nat_add(v___x_4762_, v___x_4761_);
lean_dec(v___x_4762_);
v___x_4765_ = lean_array_get_borrowed(v___x_4760_, v___y_4752_, v___x_4764_);
lean_dec(v___x_4764_);
lean_inc(v___x_4765_);
lean_inc(v___x_4763_);
v___x_4766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4766_, 0, v___x_4763_);
lean_ctor_set(v___x_4766_, 1, v___x_4765_);
v___x_4767_ = lean_array_push(v_b_4754_, v___x_4766_);
v___x_4768_ = lean_nat_add(v_i_4755_, v_step_4757_);
lean_dec(v_i_4755_);
v_b_4754_ = v___x_4767_;
v_i_4755_ = v___x_4768_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4770_, lean_object* v_range_4771_, lean_object* v_b_4772_, lean_object* v_i_4773_){
_start:
{
lean_object* v_res_4774_; 
v_res_4774_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4770_, v_range_4771_, v_b_4772_, v_i_4773_);
lean_dec_ref(v_range_4771_);
lean_dec_ref(v___y_4770_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4775_, size_t v_i_4776_, size_t v_stop_4777_, lean_object* v_b_4778_){
_start:
{
lean_object* v___y_4780_; uint8_t v___x_4784_; 
v___x_4784_ = lean_usize_dec_eq(v_i_4776_, v_stop_4777_);
if (v___x_4784_ == 0)
{
lean_object* v___x_4785_; 
v___x_4785_ = lean_array_uget_borrowed(v_as_4775_, v_i_4776_);
if (lean_obj_tag(v___x_4785_) == 4)
{
lean_object* v_s_4786_; lean_object* v___x_4787_; 
v_s_4786_ = lean_ctor_get(v___x_4785_, 0);
lean_inc_ref(v_s_4786_);
v___x_4787_ = lean_array_push(v_b_4778_, v_s_4786_);
v___y_4780_ = v___x_4787_;
goto v___jp_4779_;
}
else
{
v___y_4780_ = v_b_4778_;
goto v___jp_4779_;
}
}
else
{
return v_b_4778_;
}
v___jp_4779_:
{
size_t v___x_4781_; size_t v___x_4782_; 
v___x_4781_ = ((size_t)1ULL);
v___x_4782_ = lean_usize_add(v_i_4776_, v___x_4781_);
v_i_4776_ = v___x_4782_;
v_b_4778_ = v___y_4780_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4788_, lean_object* v_i_4789_, lean_object* v_stop_4790_, lean_object* v_b_4791_){
_start:
{
size_t v_i_boxed_4792_; size_t v_stop_boxed_4793_; lean_object* v_res_4794_; 
v_i_boxed_4792_ = lean_unbox_usize(v_i_4789_);
lean_dec(v_i_4789_);
v_stop_boxed_4793_ = lean_unbox_usize(v_stop_4790_);
lean_dec(v_stop_4790_);
v_res_4794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4788_, v_i_boxed_4792_, v_stop_boxed_4793_, v_b_4791_);
lean_dec_ref(v_as_4788_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4795_, lean_object* v_start_4796_, lean_object* v_stop_4797_){
_start:
{
lean_object* v___x_4798_; uint8_t v___x_4799_; 
v___x_4798_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4799_ = lean_nat_dec_lt(v_start_4796_, v_stop_4797_);
if (v___x_4799_ == 0)
{
return v___x_4798_;
}
else
{
lean_object* v___x_4800_; uint8_t v___x_4801_; 
v___x_4800_ = lean_array_get_size(v_as_4795_);
v___x_4801_ = lean_nat_dec_le(v_stop_4797_, v___x_4800_);
if (v___x_4801_ == 0)
{
uint8_t v___x_4802_; 
v___x_4802_ = lean_nat_dec_lt(v_start_4796_, v___x_4800_);
if (v___x_4802_ == 0)
{
return v___x_4798_;
}
else
{
size_t v___x_4803_; size_t v___x_4804_; lean_object* v___x_4805_; 
v___x_4803_ = lean_usize_of_nat(v_start_4796_);
v___x_4804_ = lean_usize_of_nat(v___x_4800_);
v___x_4805_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4795_, v___x_4803_, v___x_4804_, v___x_4798_);
return v___x_4805_;
}
}
else
{
size_t v___x_4806_; size_t v___x_4807_; lean_object* v___x_4808_; 
v___x_4806_ = lean_usize_of_nat(v_start_4796_);
v___x_4807_ = lean_usize_of_nat(v_stop_4797_);
v___x_4808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4795_, v___x_4806_, v___x_4807_, v___x_4798_);
return v___x_4808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4809_, lean_object* v_start_4810_, lean_object* v_stop_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4809_, v_start_4810_, v_stop_4811_);
lean_dec(v_stop_4811_);
lean_dec(v_start_4810_);
lean_dec_ref(v_as_4809_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4814_, size_t v_sz_4815_, size_t v_i_4816_, lean_object* v_b_4817_){
_start:
{
uint8_t v___x_4818_; 
v___x_4818_ = lean_usize_dec_lt(v_i_4816_, v_sz_4815_);
if (v___x_4818_ == 0)
{
lean_inc_ref(v_b_4817_);
return v_b_4817_;
}
else
{
lean_object* v_a_4819_; lean_object* v_fst_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; uint8_t v___x_4824_; 
v_a_4819_ = lean_array_uget_borrowed(v_as_4814_, v_i_4816_);
v_fst_4820_ = lean_ctor_get(v_a_4819_, 0);
v___x_4821_ = lean_box(0);
lean_inc(v_fst_4820_);
v___x_4822_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4820_);
v___x_4823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4824_ = lean_string_dec_eq(v___x_4822_, v___x_4823_);
lean_dec_ref(v___x_4822_);
if (v___x_4824_ == 0)
{
lean_object* v___x_4825_; size_t v___x_4826_; size_t v___x_4827_; 
v___x_4825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4826_ = ((size_t)1ULL);
v___x_4827_ = lean_usize_add(v_i_4816_, v___x_4826_);
v_i_4816_ = v___x_4827_;
v_b_4817_ = v___x_4825_;
goto _start;
}
else
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; 
lean_inc(v_a_4819_);
v___x_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4829_, 0, v_a_4819_);
v___x_4830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4829_);
v___x_4831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4831_, 0, v___x_4830_);
lean_ctor_set(v___x_4831_, 1, v___x_4821_);
return v___x_4831_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4832_, lean_object* v_sz_4833_, lean_object* v_i_4834_, lean_object* v_b_4835_){
_start:
{
size_t v_sz_boxed_4836_; size_t v_i_boxed_4837_; lean_object* v_res_4838_; 
v_sz_boxed_4836_ = lean_unbox_usize(v_sz_4833_);
lean_dec(v_sz_4833_);
v_i_boxed_4837_ = lean_unbox_usize(v_i_4834_);
lean_dec(v_i_4834_);
v_res_4838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4832_, v_sz_boxed_4836_, v_i_boxed_4837_, v_b_4835_);
lean_dec_ref(v_b_4835_);
lean_dec_ref(v_as_4832_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4841_, lean_object* v_snd_4842_, lean_object* v___f_4843_, lean_object* v___f_4844_, lean_object* v_handler_4845_, lean_object* v_options_4846_, lean_object* v_a_4847_, lean_object* v_fst_4848_, lean_object* v_a_4849_, lean_object* v___x_4850_, lean_object* v___x_4851_, lean_object* v___x_4852_, lean_object* v_x_4853_){
_start:
{
lean_object* v___y_4856_; lean_object* v___y_4857_; lean_object* v___y_4858_; lean_object* v___y_4859_; lean_object* v___y_4860_; lean_object* v___y_4861_; uint8_t v___y_4862_; lean_object* v___y_4871_; uint8_t v___y_4872_; lean_object* v___y_4873_; lean_object* v_val_4874_; lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___y_4880_; lean_object* v___y_4881_; lean_object* v___y_4882_; lean_object* v___y_4883_; lean_object* v___y_4884_; lean_object* v___y_4885_; lean_object* v___y_4886_; lean_object* v___y_4887_; lean_object* v___y_4888_; lean_object* v___y_4889_; lean_object* v___y_4890_; lean_object* v___y_4891_; lean_object* v___y_4939_; lean_object* v___y_4940_; lean_object* v___y_4941_; lean_object* v___y_4942_; lean_object* v___y_4943_; lean_object* v___y_4944_; lean_object* v___y_4945_; lean_object* v___y_4946_; lean_object* v___y_4947_; lean_object* v___y_4948_; lean_object* v___y_4949_; lean_object* v___y_4950_; lean_object* v___y_4951_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; 
if (lean_obj_tag(v_x_4853_) == 0)
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_4991_; 
lean_dec(v_a_4849_);
lean_dec(v_fst_4848_);
lean_dec(v_a_4847_);
lean_dec_ref(v_options_4846_);
lean_dec_ref(v_handler_4845_);
lean_dec_ref(v___f_4844_);
lean_dec_ref(v___f_4843_);
lean_dec(v_snd_4842_);
lean_dec(v___y_4841_);
v_a_4983_ = lean_ctor_get(v_x_4853_, 0);
v_isSharedCheck_4991_ = !lean_is_exclusive(v_x_4853_);
if (v_isSharedCheck_4991_ == 0)
{
v___x_4985_ = v_x_4853_;
v_isShared_4986_ = v_isSharedCheck_4991_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v_x_4853_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_4991_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v___x_4988_; 
if (v_isShared_4986_ == 0)
{
v___x_4988_ = v___x_4985_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4990_; 
v_reuseFailAlloc_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4990_, 0, v_a_4983_);
v___x_4988_ = v_reuseFailAlloc_4990_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
lean_object* v___x_4989_; 
v___x_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4988_);
return v___x_4989_;
}
}
}
else
{
lean_object* v_a_4992_; lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_5003_; lean_object* v___x_5007_; 
v_a_4992_ = lean_ctor_get(v_x_4853_, 0);
lean_inc(v_a_4992_);
lean_dec_ref_known(v_x_4853_, 1);
v___x_5007_ = l_Lasm_JS_Data_field(v_a_4992_, v___x_4852_);
if (lean_obj_tag(v___x_5007_) == 4)
{
lean_object* v_s_5008_; 
v_s_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc_ref(v_s_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v___y_5003_ = v_s_5008_;
goto v___jp_5002_;
}
else
{
lean_object* v___x_5009_; 
lean_dec(v___x_5007_);
v___x_5009_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_5003_ = v___x_5009_;
goto v___jp_5002_;
}
v___jp_4993_:
{
lean_object* v___x_4996_; 
v___x_4996_ = l_Lasm_JS_Data_field(v_a_4992_, v___x_4850_);
lean_dec(v_a_4992_);
if (lean_obj_tag(v___x_4996_) == 7)
{
lean_object* v_items_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; 
v_items_4997_ = lean_ctor_get(v___x_4996_, 0);
lean_inc_ref(v_items_4997_);
lean_dec_ref_known(v___x_4996_, 1);
v___x_4998_ = lean_unsigned_to_nat(0u);
v___x_4999_ = lean_array_get_size(v_items_4997_);
v___x_5000_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4997_, v___x_4998_, v___x_4999_);
lean_dec_ref(v_items_4997_);
lean_inc_ref(v___y_4994_);
v___y_4954_ = v___y_4994_;
v___y_4955_ = v___y_4994_;
v___y_4956_ = v___y_4995_;
v___y_4957_ = v___x_5000_;
goto v___jp_4953_;
}
else
{
lean_object* v___x_5001_; 
lean_dec(v___x_4996_);
v___x_5001_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_4994_);
v___y_4954_ = v___y_4994_;
v___y_4955_ = v___y_4994_;
v___y_4956_ = v___y_4995_;
v___y_4957_ = v___x_5001_;
goto v___jp_4953_;
}
}
v___jp_5002_:
{
lean_object* v___x_5004_; 
v___x_5004_ = l_Lasm_JS_Data_field(v_a_4992_, v___x_4851_);
if (lean_obj_tag(v___x_5004_) == 4)
{
lean_object* v_s_5005_; 
v_s_5005_ = lean_ctor_get(v___x_5004_, 0);
lean_inc_ref(v_s_5005_);
lean_dec_ref_known(v___x_5004_, 1);
v___y_4994_ = v___y_5003_;
v___y_4995_ = v_s_5005_;
goto v___jp_4993_;
}
else
{
lean_object* v___x_5006_; 
lean_dec(v___x_5004_);
v___x_5006_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4994_ = v___y_5003_;
v___y_4995_ = v___x_5006_;
goto v___jp_4993_;
}
}
}
v___jp_4855_:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___f_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4863_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4861_, v___y_4858_, v___y_4841_);
lean_dec_ref(v___y_4861_);
v___x_4864_ = l_ByteArray_empty;
v___f_4865_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4866_, 0, v___y_4856_);
lean_ctor_set(v___x_4866_, 1, v___x_4863_);
lean_ctor_set(v___x_4866_, 2, v___y_4860_);
lean_ctor_set(v___x_4866_, 3, v___x_4864_);
lean_ctor_set(v___x_4866_, 4, v___f_4865_);
v___x_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
v___x_4869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4859_, v___y_4862_, v___x_4868_, v___y_4857_);
return v___x_4869_;
}
v___jp_4870_:
{
lean_object* v___x_4875_; lean_object* v___x_4876_; 
v___x_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4875_, 0, v_val_4874_);
v___x_4876_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4871_, v___y_4872_, v___x_4875_, v___y_4873_);
return v___x_4876_;
}
v___jp_4877_:
{
lean_object* v___x_4892_; uint8_t v___x_4893_; 
v___x_4892_ = lean_array_get_size(v___y_4889_);
v___x_4893_ = lean_nat_dec_lt(v___y_4887_, v___x_4892_);
if (v___x_4893_ == 0)
{
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec_ref(v___y_4881_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec(v___y_4878_);
lean_dec(v_a_4849_);
lean_dec(v_fst_4848_);
lean_dec(v_a_4847_);
lean_dec_ref(v_options_4846_);
v___y_4856_ = v___y_4885_;
v___y_4857_ = v___y_4886_;
v___y_4858_ = v___y_4891_;
v___y_4859_ = v___y_4887_;
v___y_4860_ = v___y_4889_;
v___y_4861_ = v___y_4890_;
v___y_4862_ = v___x_4893_;
goto v___jp_4855_;
}
else
{
if (v___x_4893_ == 0)
{
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec_ref(v___y_4881_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec(v___y_4878_);
lean_dec(v_a_4849_);
lean_dec(v_fst_4848_);
lean_dec(v_a_4847_);
lean_dec_ref(v_options_4846_);
v___y_4856_ = v___y_4885_;
v___y_4857_ = v___y_4886_;
v___y_4858_ = v___y_4891_;
v___y_4859_ = v___y_4887_;
v___y_4860_ = v___y_4889_;
v___y_4861_ = v___y_4890_;
v___y_4862_ = v___x_4893_;
goto v___jp_4855_;
}
else
{
size_t v___x_4894_; size_t v___x_4895_; uint8_t v___x_4896_; 
v___x_4894_ = ((size_t)0ULL);
v___x_4895_ = lean_usize_of_nat(v___x_4892_);
v___x_4896_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_4889_, v___x_4894_, v___x_4895_);
if (v___x_4896_ == 0)
{
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec_ref(v___y_4881_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec(v___y_4878_);
lean_dec(v_a_4849_);
lean_dec(v_fst_4848_);
lean_dec(v_a_4847_);
lean_dec_ref(v_options_4846_);
v___y_4856_ = v___y_4885_;
v___y_4857_ = v___y_4886_;
v___y_4858_ = v___y_4891_;
v___y_4859_ = v___y_4887_;
v___y_4860_ = v___y_4889_;
v___y_4861_ = v___y_4890_;
v___y_4862_ = v___x_4896_;
goto v___jp_4855_;
}
else
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___f_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; uint8_t v___x_4903_; 
lean_dec_ref(v___y_4889_);
lean_dec_ref(v___y_4886_);
v___x_4897_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4890_, v___y_4891_, v___y_4841_);
lean_dec_ref(v___y_4890_);
v___x_4898_ = l_ByteArray_empty;
v___f_4899_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_4897_);
v___x_4900_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4900_, 0, v___y_4885_);
lean_ctor_set(v___x_4900_, 1, v___x_4897_);
lean_ctor_set(v___x_4900_, 2, v___y_4888_);
lean_ctor_set(v___x_4900_, 3, v___x_4898_);
lean_ctor_set(v___x_4900_, 4, v___f_4899_);
v___x_4901_ = l_Lasm_Fetch_Request_path(v___x_4900_);
v___x_4902_ = lean_apply_1(v_options_4846_, v___x_4901_);
v___x_4903_ = lean_unbox(v___x_4902_);
if (v___x_4903_ == 0)
{
lean_object* v___f_4904_; lean_object* v___f_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; uint8_t v___x_4909_; lean_object* v___x_4910_; 
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4879_);
lean_dec(v_a_4849_);
lean_inc(v___y_4878_);
v___f_4904_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 9, 7);
lean_closure_set(v___f_4904_, 0, v___y_4881_);
lean_closure_set(v___f_4904_, 1, v___x_4897_);
lean_closure_set(v___f_4904_, 2, v___y_4883_);
lean_closure_set(v___f_4904_, 3, v___f_4899_);
lean_closure_set(v___f_4904_, 4, v___y_4878_);
lean_closure_set(v___f_4904_, 5, v___x_4902_);
lean_closure_set(v___f_4904_, 6, v___y_4882_);
v___f_4905_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4905_, 0, v___y_4878_);
lean_closure_set(v___f_4905_, 1, v___x_4902_);
lean_closure_set(v___f_4905_, 2, v___f_4904_);
lean_closure_set(v___f_4905_, 3, v___y_4880_);
lean_closure_set(v___f_4905_, 4, v_a_4847_);
v___x_4906_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__0));
v___x_4907_ = lean_mk_empty_array_with_capacity(v___y_4887_);
v___x_4908_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4848_, v___x_4906_, v___x_4907_);
v___x_4909_ = lean_unbox(v___x_4902_);
v___x_4910_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4887_, v___x_4909_, v___x_4908_, v___f_4905_);
return v___x_4910_;
}
else
{
uint8_t v___x_4911_; lean_object* v___x_4912_; lean_object* v___f_4913_; lean_object* v___x_4914_; lean_object* v___f_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
lean_dec_ref(v___y_4882_);
lean_dec(v___y_4880_);
lean_dec(v_a_4847_);
v___x_4911_ = 0;
v___x_4912_ = lean_box(v___x_4911_);
lean_inc(v___y_4878_);
v___f_4913_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4913_, 0, v___y_4881_);
lean_closure_set(v___f_4913_, 1, v___x_4897_);
lean_closure_set(v___f_4913_, 2, v___y_4883_);
lean_closure_set(v___f_4913_, 3, v___x_4898_);
lean_closure_set(v___f_4913_, 4, v___y_4878_);
lean_closure_set(v___f_4913_, 5, v___x_4912_);
lean_closure_set(v___f_4913_, 6, v___y_4879_);
v___x_4914_ = lean_box(v___x_4911_);
v___f_4915_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4915_, 0, v___y_4878_);
lean_closure_set(v___f_4915_, 1, v___x_4914_);
lean_closure_set(v___f_4915_, 2, v___f_4913_);
v___x_4916_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__1));
v___x_4917_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4918_, 0, v_fst_4848_);
lean_ctor_set(v___x_4918_, 1, v___x_4917_);
v___x_4919_ = lean_mk_empty_array_with_capacity(v___y_4884_);
lean_dec(v___y_4884_);
v___x_4920_ = lean_array_push(v___x_4919_, v___x_4918_);
v___x_4921_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4849_, v___x_4916_, v___x_4920_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4929_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4929_ == 0)
{
v___x_4924_ = v___x_4921_;
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_a_4922_);
lean_dec(v___x_4921_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
lean_ctor_set_tag(v___x_4924_, 1);
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4922_);
v___x_4927_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
v___y_4871_ = v___y_4887_;
v___y_4872_ = v___x_4911_;
v___y_4873_ = v___f_4915_;
v_val_4874_ = v___x_4927_;
goto v___jp_4870_;
}
}
}
else
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4937_; 
v_a_4930_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4937_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4937_ == 0)
{
v___x_4932_ = v___x_4921_;
v_isShared_4933_ = v_isSharedCheck_4937_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4921_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4937_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v___x_4935_; 
if (v_isShared_4933_ == 0)
{
lean_ctor_set_tag(v___x_4932_, 0);
v___x_4935_ = v___x_4932_;
goto v_reusejp_4934_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v_a_4930_);
v___x_4935_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4934_;
}
v_reusejp_4934_:
{
v___y_4871_ = v___y_4887_;
v___y_4872_ = v___x_4911_;
v___y_4873_ = v___f_4915_;
v_val_4874_ = v___x_4935_;
goto v___jp_4870_;
}
}
}
}
}
}
}
}
v___jp_4938_:
{
lean_object* v___x_4952_; 
v___x_4952_ = lean_box(0);
v___y_4878_ = v___y_4939_;
v___y_4879_ = v___y_4941_;
v___y_4880_ = v___y_4940_;
v___y_4881_ = v___y_4943_;
v___y_4882_ = v___y_4945_;
v___y_4883_ = v___y_4944_;
v___y_4884_ = v___y_4946_;
v___y_4885_ = v___y_4947_;
v___y_4886_ = v___y_4942_;
v___y_4887_ = v___y_4948_;
v___y_4888_ = v___y_4949_;
v___y_4889_ = v___y_4950_;
v___y_4890_ = v___y_4951_;
v___y_4891_ = v___x_4952_;
goto v___jp_4877_;
}
v___jp_4953_:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; size_t v_sz_4966_; size_t v___x_4967_; lean_object* v___x_4968_; lean_object* v_fst_4969_; lean_object* v___f_4970_; lean_object* v___f_4971_; lean_object* v___f_4972_; 
v___x_4958_ = lean_unsigned_to_nat(0u);
v___x_4959_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4960_ = lean_array_get_size(v___y_4957_);
v___x_4961_ = lean_unsigned_to_nat(1u);
v___x_4962_ = lean_nat_shiftr(v___x_4960_, v___x_4961_);
v___x_4963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4958_);
lean_ctor_set(v___x_4963_, 1, v___x_4962_);
lean_ctor_set(v___x_4963_, 2, v___x_4961_);
v___x_4964_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4957_, v___x_4963_, v___x_4959_, v___x_4958_);
lean_dec_ref_known(v___x_4963_, 3);
lean_dec_ref(v___y_4957_);
v___x_4965_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4966_ = lean_array_size(v___x_4964_);
v___x_4967_ = ((size_t)0ULL);
v___x_4968_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4964_, v_sz_4966_, v___x_4967_, v___x_4965_);
v_fst_4969_ = lean_ctor_get(v___x_4968_, 0);
lean_inc(v_fst_4969_);
lean_dec_ref(v___x_4968_);
lean_inc_ref(v___y_4954_);
v___f_4970_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4970_, 0, v___x_4958_);
lean_closure_set(v___f_4970_, 1, v_snd_4842_);
lean_closure_set(v___f_4970_, 2, v___y_4954_);
lean_closure_set(v___f_4970_, 3, v___f_4843_);
lean_closure_set(v___f_4970_, 4, v___f_4844_);
v___f_4971_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4971_, 0, v_handler_4845_);
lean_closure_set(v___f_4971_, 1, v___x_4958_);
lean_closure_set(v___f_4971_, 2, v___f_4970_);
v___f_4972_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4972_, 0, v___f_4971_);
if (lean_obj_tag(v_fst_4969_) == 0)
{
lean_inc_ref(v___x_4964_);
lean_inc_ref_n(v___f_4972_, 2);
v___y_4939_ = v___x_4958_;
v___y_4940_ = v___x_4961_;
v___y_4941_ = v___f_4972_;
v___y_4942_ = v___f_4972_;
v___y_4943_ = v___y_4954_;
v___y_4944_ = v___x_4964_;
v___y_4945_ = v___f_4972_;
v___y_4946_ = v___x_4961_;
v___y_4947_ = v___y_4955_;
v___y_4948_ = v___x_4958_;
v___y_4949_ = v___x_4959_;
v___y_4950_ = v___x_4964_;
v___y_4951_ = v___y_4956_;
goto v___jp_4938_;
}
else
{
lean_object* v_val_4973_; 
v_val_4973_ = lean_ctor_get(v_fst_4969_, 0);
lean_inc(v_val_4973_);
lean_dec_ref_known(v_fst_4969_, 1);
if (lean_obj_tag(v_val_4973_) == 0)
{
lean_inc_ref(v___x_4964_);
lean_inc_ref_n(v___f_4972_, 2);
v___y_4939_ = v___x_4958_;
v___y_4940_ = v___x_4961_;
v___y_4941_ = v___f_4972_;
v___y_4942_ = v___f_4972_;
v___y_4943_ = v___y_4954_;
v___y_4944_ = v___x_4964_;
v___y_4945_ = v___f_4972_;
v___y_4946_ = v___x_4961_;
v___y_4947_ = v___y_4955_;
v___y_4948_ = v___x_4958_;
v___y_4949_ = v___x_4959_;
v___y_4950_ = v___x_4964_;
v___y_4951_ = v___y_4956_;
goto v___jp_4938_;
}
else
{
lean_object* v_val_4974_; lean_object* v___x_4976_; uint8_t v_isShared_4977_; uint8_t v_isSharedCheck_4982_; 
v_val_4974_ = lean_ctor_get(v_val_4973_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v_val_4973_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4976_ = v_val_4973_;
v_isShared_4977_ = v_isSharedCheck_4982_;
goto v_resetjp_4975_;
}
else
{
lean_inc(v_val_4974_);
lean_dec(v_val_4973_);
v___x_4976_ = lean_box(0);
v_isShared_4977_ = v_isSharedCheck_4982_;
goto v_resetjp_4975_;
}
v_resetjp_4975_:
{
lean_object* v_snd_4978_; lean_object* v___x_4980_; 
v_snd_4978_ = lean_ctor_get(v_val_4974_, 1);
lean_inc(v_snd_4978_);
lean_dec(v_val_4974_);
if (v_isShared_4977_ == 0)
{
lean_ctor_set(v___x_4976_, 0, v_snd_4978_);
v___x_4980_ = v___x_4976_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_snd_4978_);
v___x_4980_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
lean_inc_ref(v___x_4964_);
lean_inc_ref_n(v___f_4972_, 2);
v___y_4878_ = v___x_4958_;
v___y_4879_ = v___f_4972_;
v___y_4880_ = v___x_4961_;
v___y_4881_ = v___y_4954_;
v___y_4882_ = v___f_4972_;
v___y_4883_ = v___x_4964_;
v___y_4884_ = v___x_4961_;
v___y_4885_ = v___y_4955_;
v___y_4886_ = v___f_4972_;
v___y_4887_ = v___x_4958_;
v___y_4888_ = v___x_4959_;
v___y_4889_ = v___x_4964_;
v___y_4890_ = v___y_4956_;
v___y_4891_ = v___x_4980_;
goto v___jp_4877_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_5010_, lean_object* v_snd_5011_, lean_object* v___f_5012_, lean_object* v___f_5013_, lean_object* v_handler_5014_, lean_object* v_options_5015_, lean_object* v_a_5016_, lean_object* v_fst_5017_, lean_object* v_a_5018_, lean_object* v___x_5019_, lean_object* v___x_5020_, lean_object* v___x_5021_, lean_object* v_x_5022_, lean_object* v___y_5023_){
_start:
{
lean_object* v_res_5024_; 
v_res_5024_ = l_Lasm_Fetch_serveNode___lam__18(v___y_5010_, v_snd_5011_, v___f_5012_, v___f_5013_, v_handler_5014_, v_options_5015_, v_a_5016_, v_fst_5017_, v_a_5018_, v___x_5019_, v___x_5020_, v___x_5021_, v_x_5022_);
lean_dec_ref(v___x_5021_);
lean_dec_ref(v___x_5020_);
lean_dec_ref(v___x_5019_);
return v_res_5024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___y_5034_, lean_object* v___f_5035_, lean_object* v___f_5036_, lean_object* v_handler_5037_, lean_object* v_options_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_, lean_object* v_____x_5041_){
_start:
{
lean_object* v_fst_5043_; lean_object* v_snd_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___f_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; lean_object* v_val_5053_; lean_object* v___x_5056_; 
v_fst_5043_ = lean_ctor_get(v_____x_5041_, 0);
lean_inc_n(v_fst_5043_, 2);
v_snd_5044_ = lean_ctor_get(v_____x_5041_, 1);
lean_inc(v_snd_5044_);
lean_dec_ref(v_____x_5041_);
v___x_5045_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5046_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_5047_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_5048_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 14, 12);
lean_closure_set(v___f_5048_, 0, v___y_5034_);
lean_closure_set(v___f_5048_, 1, v_snd_5044_);
lean_closure_set(v___f_5048_, 2, v___f_5035_);
lean_closure_set(v___f_5048_, 3, v___f_5036_);
lean_closure_set(v___f_5048_, 4, v_handler_5037_);
lean_closure_set(v___f_5048_, 5, v_options_5038_);
lean_closure_set(v___f_5048_, 6, v_a_5039_);
lean_closure_set(v___f_5048_, 7, v_fst_5043_);
lean_closure_set(v___f_5048_, 8, v_a_5040_);
lean_closure_set(v___f_5048_, 9, v___x_5047_);
lean_closure_set(v___f_5048_, 10, v___x_5046_);
lean_closure_set(v___f_5048_, 11, v___x_5045_);
v___x_5049_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_5050_ = lean_unsigned_to_nat(0u);
v___x_5051_ = 0;
v___x_5056_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_5043_, v___x_5049_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_object* v_a_5057_; lean_object* v___x_5059_; uint8_t v_isShared_5060_; uint8_t v_isSharedCheck_5064_; 
v_a_5057_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5064_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5064_ == 0)
{
v___x_5059_ = v___x_5056_;
v_isShared_5060_ = v_isSharedCheck_5064_;
goto v_resetjp_5058_;
}
else
{
lean_inc(v_a_5057_);
lean_dec(v___x_5056_);
v___x_5059_ = lean_box(0);
v_isShared_5060_ = v_isSharedCheck_5064_;
goto v_resetjp_5058_;
}
v_resetjp_5058_:
{
lean_object* v___x_5062_; 
if (v_isShared_5060_ == 0)
{
lean_ctor_set_tag(v___x_5059_, 1);
v___x_5062_ = v___x_5059_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v_a_5057_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
v_val_5053_ = v___x_5062_;
goto v___jp_5052_;
}
}
}
else
{
lean_object* v_a_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5072_; 
v_a_5065_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5072_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5072_ == 0)
{
v___x_5067_ = v___x_5056_;
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_a_5065_);
lean_dec(v___x_5056_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v___x_5070_; 
if (v_isShared_5068_ == 0)
{
lean_ctor_set_tag(v___x_5067_, 0);
v___x_5070_ = v___x_5067_;
goto v_reusejp_5069_;
}
else
{
lean_object* v_reuseFailAlloc_5071_; 
v_reuseFailAlloc_5071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5071_, 0, v_a_5065_);
v___x_5070_ = v_reuseFailAlloc_5071_;
goto v_reusejp_5069_;
}
v_reusejp_5069_:
{
v_val_5053_ = v___x_5070_;
goto v___jp_5052_;
}
}
}
v___jp_5052_:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5054_, 0, v_val_5053_);
v___x_5055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5050_, v___x_5051_, v___x_5054_, v___f_5048_);
return v___x_5055_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___y_5073_, lean_object* v___f_5074_, lean_object* v___f_5075_, lean_object* v_handler_5076_, lean_object* v_options_5077_, lean_object* v_a_5078_, lean_object* v_a_5079_, lean_object* v_____x_5080_, lean_object* v___y_5081_){
_start:
{
lean_object* v_res_5082_; 
v_res_5082_ = l_Lasm_Fetch_serveNode___lam__19(v___y_5073_, v___f_5074_, v___f_5075_, v_handler_5076_, v_options_5077_, v_a_5078_, v_a_5079_, v_____x_5080_);
return v_res_5082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_5083_, lean_object* v_x_5084_){
_start:
{
if (lean_obj_tag(v_x_5084_) == 0)
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5094_; 
lean_dec_ref(v___f_5083_);
v_a_5086_ = lean_ctor_get(v_x_5084_, 0);
v_isSharedCheck_5094_ = !lean_is_exclusive(v_x_5084_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5088_ = v_x_5084_;
v_isShared_5089_ = v_isSharedCheck_5094_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v_x_5084_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5094_;
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
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v_a_5086_);
v___x_5091_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
lean_object* v___x_5092_; 
v___x_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5092_, 0, v___x_5091_);
return v___x_5092_;
}
}
}
else
{
lean_object* v_a_5095_; lean_object* v___x_5096_; 
v_a_5095_ = lean_ctor_get(v_x_5084_, 0);
lean_inc(v_a_5095_);
lean_dec_ref_known(v_x_5084_, 1);
v___x_5096_ = lean_apply_2(v___f_5083_, v_a_5095_, lean_box(0));
return v___x_5096_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_5097_, lean_object* v_x_5098_, lean_object* v___y_5099_){
_start:
{
lean_object* v_res_5100_; 
v_res_5100_ = l_Lasm_Fetch_serveNode___lam__20(v___f_5097_, v_x_5098_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_5108_, lean_object* v___f_5109_, lean_object* v_args_5110_){
_start:
{
lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; 
v___x_5117_ = lean_unsigned_to_nat(0u);
v___x_5118_ = lean_array_get_size(v_args_5110_);
v___x_5119_ = lean_nat_dec_lt(v___x_5117_, v___x_5118_);
if (v___x_5119_ == 0)
{
lean_dec_ref(v___f_5109_);
goto v___jp_5112_;
}
else
{
lean_object* v___x_5120_; 
v___x_5120_ = lean_array_fget_borrowed(v_args_5110_, v___x_5117_);
if (lean_obj_tag(v___x_5120_) == 9)
{
lean_object* v_value_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; 
v_value_5121_ = lean_ctor_get(v___x_5120_, 0);
v___x_5122_ = lean_unsigned_to_nat(1u);
v___x_5123_ = lean_nat_dec_lt(v___x_5122_, v___x_5118_);
if (v___x_5123_ == 0)
{
lean_dec_ref(v___f_5109_);
goto v___jp_5112_;
}
else
{
lean_object* v___x_5124_; 
v___x_5124_ = lean_array_fget(v_args_5110_, v___x_5122_);
if (lean_obj_tag(v___x_5124_) == 9)
{
lean_object* v_value_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5136_; 
lean_dec_ref(v___f_5108_);
v_value_5125_ = lean_ctor_get(v___x_5124_, 0);
v_isSharedCheck_5136_ = !lean_is_exclusive(v___x_5124_);
if (v_isSharedCheck_5136_ == 0)
{
lean_object* v_unused_5137_; 
v_unused_5137_ = lean_ctor_get(v___x_5124_, 1);
lean_dec(v_unused_5137_);
v___x_5127_ = v___x_5124_;
v_isShared_5128_ = v_isSharedCheck_5136_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_value_5125_);
lean_dec(v___x_5124_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5136_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v___x_5130_; 
lean_inc(v_value_5121_);
if (v_isShared_5128_ == 0)
{
lean_ctor_set_tag(v___x_5127_, 0);
lean_ctor_set(v___x_5127_, 1, v_value_5125_);
lean_ctor_set(v___x_5127_, 0, v_value_5121_);
v___x_5130_ = v___x_5127_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5135_; 
v_reuseFailAlloc_5135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5135_, 0, v_value_5121_);
lean_ctor_set(v_reuseFailAlloc_5135_, 1, v_value_5125_);
v___x_5130_ = v_reuseFailAlloc_5135_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
uint8_t v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; 
v___x_5131_ = 0;
v___x_5132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5132_, 0, v___x_5130_);
v___x_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5133_, 0, v___x_5132_);
v___x_5134_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5117_, v___x_5131_, v___x_5133_, v___f_5109_);
return v___x_5134_;
}
}
}
else
{
lean_dec(v___x_5124_);
lean_dec_ref(v___f_5109_);
goto v___jp_5112_;
}
}
}
else
{
lean_dec_ref(v___f_5109_);
goto v___jp_5112_;
}
}
v___jp_5112_:
{
lean_object* v___x_5113_; uint8_t v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; 
v___x_5113_ = lean_unsigned_to_nat(0u);
v___x_5114_ = 0;
v___x_5115_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_5116_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5113_, v___x_5114_, v___x_5115_, v___f_5108_);
return v___x_5116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_5138_, lean_object* v___f_5139_, lean_object* v_args_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v_res_5142_; 
v_res_5142_ = l_Lasm_Fetch_serveNode___lam__22(v___f_5138_, v___f_5139_, v_args_5140_);
lean_dec_ref(v_args_5140_);
return v_res_5142_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_5143_){
_start:
{
lean_object* v___x_5145_; lean_object* v_putStr_5146_; lean_object* v___x_5147_; 
v___x_5145_ = lean_get_stdout();
v_putStr_5146_ = lean_ctor_get(v___x_5145_, 4);
lean_inc_ref(v_putStr_5146_);
lean_dec_ref(v___x_5145_);
v___x_5147_ = lean_apply_2(v_putStr_5146_, v_s_5143_, lean_box(0));
return v___x_5147_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_5148_, lean_object* v_a_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_5148_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_5151_){
_start:
{
uint32_t v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; 
v___x_5153_ = 10;
v___x_5154_ = lean_string_push(v_s_5151_, v___x_5153_);
v___x_5155_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5154_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5156_, lean_object* v_a_5157_){
_start:
{
lean_object* v_res_5158_; 
v_res_5158_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5156_);
return v_res_5158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___f_5163_, lean_object* v_x_5164_){
_start:
{
lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; uint8_t v___x_5173_; lean_object* v_val_5175_; lean_object* v___x_5178_; 
v___x_5166_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5167_ = lean_string_append(v___x_5166_, v___y_5161_);
v___x_5168_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5169_ = lean_string_append(v___x_5167_, v___x_5168_);
v___x_5170_ = l_Nat_reprFast(v___y_5162_);
v___x_5171_ = lean_string_append(v___x_5169_, v___x_5170_);
lean_dec_ref(v___x_5170_);
v___x_5172_ = lean_unsigned_to_nat(0u);
v___x_5173_ = 0;
v___x_5178_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5171_);
if (lean_obj_tag(v___x_5178_) == 0)
{
lean_object* v_a_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5186_; 
v_a_5179_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5186_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5181_ = v___x_5178_;
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_a_5179_);
lean_dec(v___x_5178_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v___x_5184_; 
if (v_isShared_5182_ == 0)
{
lean_ctor_set_tag(v___x_5181_, 1);
v___x_5184_ = v___x_5181_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_a_5179_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
v_val_5175_ = v___x_5184_;
goto v___jp_5174_;
}
}
}
else
{
lean_object* v_a_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5194_; 
v_a_5187_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5194_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5194_ == 0)
{
v___x_5189_ = v___x_5178_;
v_isShared_5190_ = v_isSharedCheck_5194_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_a_5187_);
lean_dec(v___x_5178_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5194_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5192_; 
if (v_isShared_5190_ == 0)
{
lean_ctor_set_tag(v___x_5189_, 0);
v___x_5192_ = v___x_5189_;
goto v_reusejp_5191_;
}
else
{
lean_object* v_reuseFailAlloc_5193_; 
v_reuseFailAlloc_5193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5193_, 0, v_a_5187_);
v___x_5192_ = v_reuseFailAlloc_5193_;
goto v_reusejp_5191_;
}
v_reusejp_5191_:
{
v_val_5175_ = v___x_5192_;
goto v___jp_5174_;
}
}
}
v___jp_5174_:
{
lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5176_, 0, v_val_5175_);
v___x_5177_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5172_, v___x_5173_, v___x_5176_, v___f_5163_);
return v___x_5177_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___f_5197_, lean_object* v_x_5198_, lean_object* v___y_5199_){
_start:
{
lean_object* v_res_5200_; 
v_res_5200_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5195_, v___y_5196_, v___f_5197_, v_x_5198_);
lean_dec_ref(v_x_5198_);
lean_dec_ref(v___y_5195_);
return v_res_5200_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; 
v___x_5202_ = lean_unsigned_to_nat(0u);
v___x_5203_ = lean_nat_to_int(v___x_5202_);
return v___x_5203_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_5204_; lean_object* v___x_5205_; 
v___x_5204_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5205_ = lean_nat_abs(v___x_5204_);
return v___x_5205_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_5206_; lean_object* v___x_5207_; uint8_t v___x_5208_; 
v___x_5206_ = lean_cstr_to_nat("9007199254740991");
v___x_5207_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_5208_ = lean_nat_dec_le(v___x_5207_, v___x_5206_);
return v___x_5208_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_5209_; lean_object* v___x_5210_; 
v___x_5209_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5210_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5210_, 0, v___x_5209_);
return v___x_5210_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_5211_; double v___x_5212_; 
v___x_5211_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5212_ = l_Float_ofInt(v___x_5211_);
return v___x_5212_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_5213_; lean_object* v___x_5214_; 
v___x_5213_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_5214_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5214_, 0, v___x_5213_);
return v___x_5214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_5215_, lean_object* v___x_5216_, lean_object* v_a_5217_, lean_object* v_x_5218_){
_start:
{
uint8_t v___y_5221_; lean_object* v___y_5222_; lean_object* v_val_5223_; lean_object* v___x_5226_; lean_object* v___y_5228_; uint8_t v___x_5249_; 
v___x_5226_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_5249_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_5249_ == 0)
{
lean_object* v___x_5250_; 
v___x_5250_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_5228_ = v___x_5250_;
goto v___jp_5227_;
}
else
{
lean_object* v___x_5251_; 
v___x_5251_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_5228_ = v___x_5251_;
goto v___jp_5227_;
}
v___jp_5220_:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; 
v___x_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5224_, 0, v_val_5223_);
v___x_5225_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5222_, v___y_5221_, v___x_5224_, v___f_5215_);
return v___x_5225_;
}
v___jp_5227_:
{
lean_object* v___x_5229_; lean_object* v___x_5230_; uint8_t v___x_5231_; lean_object* v___x_5232_; 
lean_inc(v___y_5228_);
v___x_5229_ = lean_array_push(v___x_5216_, v___y_5228_);
v___x_5230_ = lean_unsigned_to_nat(0u);
v___x_5231_ = 0;
v___x_5232_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5217_, v___x_5226_, v___x_5229_);
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v___x_5232_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5232_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
lean_ctor_set_tag(v___x_5235_, 1);
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
v___y_5221_ = v___x_5231_;
v___y_5222_ = v___x_5230_;
v_val_5223_ = v___x_5238_;
goto v___jp_5220_;
}
}
}
else
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
v_a_5241_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5232_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5232_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
lean_ctor_set_tag(v___x_5243_, 0);
v___x_5246_ = v___x_5243_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5241_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
v___y_5221_ = v___x_5231_;
v___y_5222_ = v___x_5230_;
v_val_5223_ = v___x_5246_;
goto v___jp_5220_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_5252_, lean_object* v___x_5253_, lean_object* v_a_5254_, lean_object* v_x_5255_, lean_object* v___y_5256_){
_start:
{
lean_object* v_res_5257_; 
v_res_5257_ = l_Lasm_Fetch_serveNode___lam__23(v___f_5252_, v___x_5253_, v_a_5254_, v_x_5255_);
lean_dec_ref(v_x_5255_);
return v_res_5257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5258_, lean_object* v___x_5259_, lean_object* v___x_5260_, lean_object* v___f_5261_, lean_object* v_a_5262_, lean_object* v_x_5263_){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; uint8_t v___x_5269_; lean_object* v_val_5271_; lean_object* v___x_5274_; 
v___x_5265_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5266_, 0, v_a_5258_);
lean_ctor_set(v___x_5266_, 1, v___x_5259_);
v___x_5267_ = lean_array_push(v___x_5260_, v___x_5266_);
v___x_5268_ = lean_unsigned_to_nat(0u);
v___x_5269_ = 0;
v___x_5274_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5262_, v___x_5265_, v___x_5267_);
if (lean_obj_tag(v___x_5274_) == 0)
{
lean_object* v_a_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5282_; 
v_a_5275_ = lean_ctor_get(v___x_5274_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v___x_5274_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5277_ = v___x_5274_;
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
else
{
lean_inc(v_a_5275_);
lean_dec(v___x_5274_);
v___x_5277_ = lean_box(0);
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
v_resetjp_5276_:
{
lean_object* v___x_5280_; 
if (v_isShared_5278_ == 0)
{
lean_ctor_set_tag(v___x_5277_, 1);
v___x_5280_ = v___x_5277_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5275_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
v_val_5271_ = v___x_5280_;
goto v___jp_5270_;
}
}
}
else
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5290_; 
v_a_5283_ = lean_ctor_get(v___x_5274_, 0);
v_isSharedCheck_5290_ = !lean_is_exclusive(v___x_5274_);
if (v_isSharedCheck_5290_ == 0)
{
v___x_5285_ = v___x_5274_;
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v___x_5274_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___x_5288_; 
if (v_isShared_5286_ == 0)
{
lean_ctor_set_tag(v___x_5285_, 0);
v___x_5288_ = v___x_5285_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5289_; 
v_reuseFailAlloc_5289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5289_, 0, v_a_5283_);
v___x_5288_ = v_reuseFailAlloc_5289_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
v_val_5271_ = v___x_5288_;
goto v___jp_5270_;
}
}
}
v___jp_5270_:
{
lean_object* v___x_5272_; lean_object* v___x_5273_; 
v___x_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5272_, 0, v_val_5271_);
v___x_5273_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5268_, v___x_5269_, v___x_5272_, v___f_5261_);
return v___x_5273_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5291_, lean_object* v___x_5292_, lean_object* v___x_5293_, lean_object* v___f_5294_, lean_object* v_a_5295_, lean_object* v_x_5296_, lean_object* v___y_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5291_, v___x_5292_, v___x_5293_, v___f_5294_, v_a_5295_, v_x_5296_);
lean_dec_ref(v_x_5296_);
return v_res_5298_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5300_, lean_object* v_a_5301_, lean_object* v_as_x27_5302_, lean_object* v_b_5303_){
_start:
{
if (lean_obj_tag(v_as_x27_5302_) == 0)
{
lean_object* v___x_5305_; 
lean_dec(v_a_5301_);
lean_dec(v_a_5300_);
v___x_5305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5305_, 0, v_b_5303_);
return v___x_5305_;
}
else
{
lean_object* v_head_5306_; lean_object* v_tail_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; 
v_head_5306_ = lean_ctor_get(v_as_x27_5302_, 0);
v_tail_5307_ = lean_ctor_get(v_as_x27_5302_, 1);
v___x_5308_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5309_ = lean_box(0);
v___x_5310_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5306_);
v___x_5311_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5311_, 0, v_head_5306_);
lean_inc(v_a_5300_);
v___x_5312_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5312_, 0, v_a_5300_);
lean_ctor_set(v___x_5312_, 1, v___x_5308_);
v___x_5313_ = lean_unsigned_to_nat(2u);
v___x_5314_ = lean_mk_empty_array_with_capacity(v___x_5313_);
v___x_5315_ = lean_array_push(v___x_5314_, v___x_5311_);
v___x_5316_ = lean_array_push(v___x_5315_, v___x_5312_);
lean_inc(v_a_5301_);
v___x_5317_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5301_, v___x_5310_, v___x_5316_);
if (lean_obj_tag(v___x_5317_) == 0)
{
lean_dec_ref_known(v___x_5317_, 1);
v_as_x27_5302_ = v_tail_5307_;
v_b_5303_ = v___x_5309_;
goto _start;
}
else
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5326_; 
lean_dec(v_a_5301_);
lean_dec(v_a_5300_);
v_a_5319_ = lean_ctor_get(v___x_5317_, 0);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5317_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5321_ = v___x_5317_;
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5317_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v___x_5324_; 
if (v_isShared_5322_ == 0)
{
v___x_5324_ = v___x_5321_;
goto v_reusejp_5323_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v_a_5319_);
v___x_5324_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5323_;
}
v_reusejp_5323_:
{
return v___x_5324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5327_, lean_object* v_a_5328_, lean_object* v_as_x27_5329_, lean_object* v_b_5330_, lean_object* v___y_5331_){
_start:
{
lean_object* v_res_5332_; 
v_res_5332_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5327_, v_a_5328_, v_as_x27_5329_, v_b_5330_);
lean_dec(v_as_x27_5329_);
return v_res_5332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5334_){
_start:
{
uint32_t v___x_5336_; uint32_t v___x_5337_; uint64_t v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v___x_5336_ = 201;
v___x_5337_ = 0;
v___x_5338_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_5339_ = lean_string_to_utf8(v_specifier_5334_);
v___x_5340_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5336_, v___x_5337_, v___x_5338_, v___x_5339_);
lean_dec_ref(v___x_5339_);
if (lean_obj_tag(v___x_5340_) == 0)
{
lean_object* v_a_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; 
v_a_5341_ = lean_ctor_get(v___x_5340_, 0);
lean_inc(v_a_5341_);
lean_dec_ref_known(v___x_5340_, 1);
v___x_5342_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5343_ = l_String_quote(v_specifier_5334_);
v___x_5344_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5344_, 0, v___x_5343_);
v___x_5345_ = lean_unsigned_to_nat(120u);
v___x_5346_ = lean_unsigned_to_nat(0u);
v___x_5347_ = l_Std_Format_pretty(v___x_5344_, v___x_5345_, v___x_5346_, v___x_5346_);
v___x_5348_ = lean_string_append(v___x_5342_, v___x_5347_);
lean_dec_ref(v___x_5347_);
v___x_5349_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5348_, v_a_5341_);
lean_dec(v_a_5341_);
lean_dec_ref(v___x_5348_);
return v___x_5349_;
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5357_; 
lean_dec_ref(v_specifier_5334_);
v_a_5350_ = lean_ctor_get(v___x_5340_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5340_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5352_ = v___x_5340_;
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_a_5350_);
lean_dec(v___x_5340_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5355_; 
if (v_isShared_5353_ == 0)
{
v___x_5355_ = v___x_5352_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5350_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5358_, lean_object* v_a_5359_){
_start:
{
lean_object* v_res_5360_; 
v_res_5360_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5358_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5386_, lean_object* v_options_5387_){
_start:
{
lean_object* v___f_5389_; lean_object* v___f_5390_; lean_object* v___f_5391_; lean_object* v___f_5392_; lean_object* v___y_5394_; lean_object* v___y_5395_; lean_object* v___y_5396_; lean_object* v___y_5397_; lean_object* v___y_5398_; lean_object* v___y_5399_; lean_object* v___y_5400_; lean_object* v___y_5401_; lean_object* v___x_5455_; lean_object* v___x_5456_; 
v___f_5389_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5390_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5391_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5392_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5455_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5456_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5455_);
if (lean_obj_tag(v___x_5456_) == 0)
{
lean_object* v_a_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; 
v_a_5457_ = lean_ctor_get(v___x_5456_, 0);
lean_inc(v_a_5457_);
lean_dec_ref_known(v___x_5456_, 1);
v___x_5458_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5459_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5458_);
if (lean_obj_tag(v___x_5459_) == 0)
{
lean_object* v_a_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; 
v_a_5460_ = lean_ctor_get(v___x_5459_, 0);
lean_inc(v_a_5460_);
lean_dec_ref_known(v___x_5459_, 1);
v___x_5461_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5462_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5460_, v___x_5461_);
if (lean_obj_tag(v___x_5462_) == 0)
{
lean_object* v_a_5463_; lean_object* v___x_5464_; 
v_a_5463_ = lean_ctor_get(v___x_5462_, 0);
lean_inc(v_a_5463_);
lean_dec_ref_known(v___x_5462_, 1);
v___x_5464_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5464_) == 0)
{
lean_object* v_a_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v_a_5465_ = lean_ctor_get(v___x_5464_, 0);
lean_inc(v_a_5465_);
lean_dec_ref_known(v___x_5464_, 1);
v___x_5466_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5467_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5465_, v___x_5466_);
if (lean_obj_tag(v___x_5467_) == 0)
{
lean_object* v_a_5468_; lean_object* v___y_5470_; lean_object* v___y_5471_; lean_object* v___y_5472_; lean_object* v___y_5522_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___y_5527_; 
v_a_5468_ = lean_ctor_get(v___x_5467_, 0);
lean_inc(v_a_5468_);
lean_dec_ref_known(v___x_5467_, 1);
v___x_5524_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5525_ = lean_io_getenv(v___x_5524_);
if (lean_obj_tag(v___x_5525_) == 0)
{
lean_object* v___x_5536_; 
v___x_5536_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5527_ = v___x_5536_;
goto v___jp_5526_;
}
else
{
lean_object* v_val_5537_; 
v_val_5537_ = lean_ctor_get(v___x_5525_, 0);
lean_inc(v_val_5537_);
lean_dec_ref_known(v___x_5525_, 1);
v___y_5527_ = v_val_5537_;
goto v___jp_5526_;
}
v___jp_5469_:
{
lean_object* v___f_5473_; lean_object* v___f_5474_; lean_object* v___f_5475_; lean_object* v___f_5476_; lean_object* v___x_5477_; 
lean_inc_n(v___y_5472_, 2);
v___f_5473_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5473_, 0, v___y_5472_);
lean_closure_set(v___f_5473_, 1, v___f_5389_);
lean_closure_set(v___f_5473_, 2, v___f_5390_);
lean_closure_set(v___f_5473_, 3, v_handler_5386_);
lean_closure_set(v___f_5473_, 4, v_options_5387_);
lean_closure_set(v___f_5473_, 5, v_a_5468_);
lean_closure_set(v___f_5473_, 6, v_a_5463_);
v___f_5474_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5474_, 0, v___f_5473_);
lean_inc_ref(v___f_5474_);
v___f_5475_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5475_, 0, v___f_5474_);
lean_closure_set(v___f_5475_, 1, v___f_5474_);
v___f_5476_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5476_, 0, v___y_5470_);
lean_closure_set(v___f_5476_, 1, v___y_5472_);
lean_closure_set(v___f_5476_, 2, v___f_5391_);
v___x_5477_ = l_Lasm_JS_Function_ofFnReply(v___f_5475_);
if (lean_obj_tag(v___x_5477_) == 0)
{
lean_object* v_a_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; 
v_a_5478_ = lean_ctor_get(v___x_5477_, 0);
lean_inc(v_a_5478_);
lean_dec_ref_known(v___x_5477_, 1);
v___x_5479_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5480_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5481_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5481_, 0, v_a_5478_);
lean_ctor_set(v___x_5481_, 1, v___x_5480_);
v___x_5482_ = lean_unsigned_to_nat(1u);
v___x_5483_ = lean_mk_empty_array_with_capacity(v___x_5482_);
lean_inc_ref(v___x_5483_);
v___x_5484_ = lean_array_push(v___x_5483_, v___x_5481_);
v___x_5485_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5457_, v___x_5479_, v___x_5484_);
if (lean_obj_tag(v___x_5485_) == 0)
{
lean_object* v_a_5486_; lean_object* v___x_5487_; 
v_a_5486_ = lean_ctor_get(v___x_5485_, 0);
lean_inc(v_a_5486_);
lean_dec_ref_known(v___x_5485_, 1);
v___x_5487_ = l_Lasm_JS_Function_ofFn(v___f_5476_);
if (lean_obj_tag(v___x_5487_) == 0)
{
lean_object* v_a_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; uint8_t v___x_5493_; 
v_a_5488_ = lean_ctor_get(v___x_5487_, 0);
lean_inc(v_a_5488_);
lean_dec_ref_known(v___x_5487_, 1);
v___x_5489_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5490_ = lean_nat_to_int(v___y_5472_);
v___x_5491_ = lean_nat_abs(v___x_5490_);
v___x_5492_ = lean_cstr_to_nat("9007199254740991");
v___x_5493_ = lean_nat_dec_le(v___x_5491_, v___x_5492_);
lean_dec(v___x_5491_);
if (v___x_5493_ == 0)
{
lean_object* v___x_5494_; 
v___x_5494_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5494_, 0, v___x_5490_);
v___y_5394_ = v___x_5480_;
v___y_5395_ = v_a_5486_;
v___y_5396_ = v___x_5483_;
v___y_5397_ = v_a_5488_;
v___y_5398_ = v___x_5489_;
v___y_5399_ = v___x_5480_;
v___y_5400_ = v___y_5471_;
v___y_5401_ = v___x_5494_;
goto v___jp_5393_;
}
else
{
double v___x_5495_; lean_object* v___x_5496_; 
v___x_5495_ = l_Float_ofInt(v___x_5490_);
lean_dec(v___x_5490_);
v___x_5496_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5496_, 0, v___x_5495_);
v___y_5394_ = v___x_5480_;
v___y_5395_ = v_a_5486_;
v___y_5396_ = v___x_5483_;
v___y_5397_ = v_a_5488_;
v___y_5398_ = v___x_5489_;
v___y_5399_ = v___x_5480_;
v___y_5400_ = v___y_5471_;
v___y_5401_ = v___x_5496_;
goto v___jp_5393_;
}
}
else
{
lean_object* v_a_5497_; lean_object* v___x_5499_; uint8_t v_isShared_5500_; uint8_t v_isSharedCheck_5504_; 
lean_dec(v_a_5486_);
lean_dec_ref(v___x_5483_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
v_a_5497_ = lean_ctor_get(v___x_5487_, 0);
v_isSharedCheck_5504_ = !lean_is_exclusive(v___x_5487_);
if (v_isSharedCheck_5504_ == 0)
{
v___x_5499_ = v___x_5487_;
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
else
{
lean_inc(v_a_5497_);
lean_dec(v___x_5487_);
v___x_5499_ = lean_box(0);
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
v_resetjp_5498_:
{
lean_object* v___x_5502_; 
if (v_isShared_5500_ == 0)
{
v___x_5502_ = v___x_5499_;
goto v_reusejp_5501_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v_a_5497_);
v___x_5502_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5501_;
}
v_reusejp_5501_:
{
return v___x_5502_;
}
}
}
}
else
{
lean_object* v_a_5505_; lean_object* v___x_5507_; uint8_t v_isShared_5508_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v___x_5483_);
lean_dec_ref(v___f_5476_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
v_a_5505_ = lean_ctor_get(v___x_5485_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v___x_5485_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5507_ = v___x_5485_;
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
else
{
lean_inc(v_a_5505_);
lean_dec(v___x_5485_);
v___x_5507_ = lean_box(0);
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
v_resetjp_5506_:
{
lean_object* v___x_5510_; 
if (v_isShared_5508_ == 0)
{
v___x_5510_ = v___x_5507_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5505_);
v___x_5510_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
return v___x_5510_;
}
}
}
}
else
{
lean_object* v_a_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5520_; 
lean_dec_ref(v___f_5476_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
lean_dec(v_a_5457_);
v_a_5513_ = lean_ctor_get(v___x_5477_, 0);
v_isSharedCheck_5520_ = !lean_is_exclusive(v___x_5477_);
if (v_isSharedCheck_5520_ == 0)
{
v___x_5515_ = v___x_5477_;
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_a_5513_);
lean_dec(v___x_5477_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5518_; 
if (v_isShared_5516_ == 0)
{
v___x_5518_ = v___x_5515_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_a_5513_);
v___x_5518_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
return v___x_5518_;
}
}
}
}
v___jp_5521_:
{
lean_object* v___x_5523_; 
v___x_5523_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5522_);
v___y_5470_ = v___y_5522_;
v___y_5471_ = v___y_5522_;
v___y_5472_ = v___x_5523_;
goto v___jp_5469_;
}
v___jp_5526_:
{
lean_object* v___x_5528_; lean_object* v___x_5529_; 
v___x_5528_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5529_ = lean_io_getenv(v___x_5528_);
if (lean_obj_tag(v___x_5529_) == 0)
{
v___y_5522_ = v___y_5527_;
goto v___jp_5521_;
}
else
{
lean_object* v_val_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; 
v_val_5530_ = lean_ctor_get(v___x_5529_, 0);
lean_inc(v_val_5530_);
lean_dec_ref_known(v___x_5529_, 1);
v___x_5531_ = lean_unsigned_to_nat(0u);
v___x_5532_ = lean_string_utf8_byte_size(v_val_5530_);
v___x_5533_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5533_, 0, v_val_5530_);
lean_ctor_set(v___x_5533_, 1, v___x_5531_);
lean_ctor_set(v___x_5533_, 2, v___x_5532_);
v___x_5534_ = l_String_Slice_toNat_x3f(v___x_5533_);
lean_dec_ref_known(v___x_5533_, 3);
if (lean_obj_tag(v___x_5534_) == 0)
{
v___y_5522_ = v___y_5527_;
goto v___jp_5521_;
}
else
{
lean_object* v_val_5535_; 
v_val_5535_ = lean_ctor_get(v___x_5534_, 0);
lean_inc(v_val_5535_);
lean_dec_ref_known(v___x_5534_, 1);
lean_inc_ref(v___y_5527_);
v___y_5470_ = v___y_5527_;
v___y_5471_ = v___y_5527_;
v___y_5472_ = v_val_5535_;
goto v___jp_5469_;
}
}
}
}
else
{
lean_object* v_a_5538_; lean_object* v___x_5540_; uint8_t v_isShared_5541_; uint8_t v_isSharedCheck_5545_; 
lean_dec(v_a_5463_);
lean_dec(v_a_5457_);
lean_dec_ref(v_options_5387_);
lean_dec_ref(v_handler_5386_);
v_a_5538_ = lean_ctor_get(v___x_5467_, 0);
v_isSharedCheck_5545_ = !lean_is_exclusive(v___x_5467_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5540_ = v___x_5467_;
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
else
{
lean_inc(v_a_5538_);
lean_dec(v___x_5467_);
v___x_5540_ = lean_box(0);
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
v_resetjp_5539_:
{
lean_object* v___x_5543_; 
if (v_isShared_5541_ == 0)
{
v___x_5543_ = v___x_5540_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v_a_5538_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
return v___x_5543_;
}
}
}
}
else
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5553_; 
lean_dec(v_a_5463_);
lean_dec(v_a_5457_);
lean_dec_ref(v_options_5387_);
lean_dec_ref(v_handler_5386_);
v_a_5546_ = lean_ctor_get(v___x_5464_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v___x_5464_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5548_ = v___x_5464_;
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v___x_5464_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5551_; 
if (v_isShared_5549_ == 0)
{
v___x_5551_ = v___x_5548_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5546_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
else
{
lean_object* v_a_5554_; lean_object* v___x_5556_; uint8_t v_isShared_5557_; uint8_t v_isSharedCheck_5561_; 
lean_dec(v_a_5457_);
lean_dec_ref(v_options_5387_);
lean_dec_ref(v_handler_5386_);
v_a_5554_ = lean_ctor_get(v___x_5462_, 0);
v_isSharedCheck_5561_ = !lean_is_exclusive(v___x_5462_);
if (v_isSharedCheck_5561_ == 0)
{
v___x_5556_ = v___x_5462_;
v_isShared_5557_ = v_isSharedCheck_5561_;
goto v_resetjp_5555_;
}
else
{
lean_inc(v_a_5554_);
lean_dec(v___x_5462_);
v___x_5556_ = lean_box(0);
v_isShared_5557_ = v_isSharedCheck_5561_;
goto v_resetjp_5555_;
}
v_resetjp_5555_:
{
lean_object* v___x_5559_; 
if (v_isShared_5557_ == 0)
{
v___x_5559_ = v___x_5556_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v_a_5554_);
v___x_5559_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
return v___x_5559_;
}
}
}
}
else
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5569_; 
lean_dec(v_a_5457_);
lean_dec_ref(v_options_5387_);
lean_dec_ref(v_handler_5386_);
v_a_5562_ = lean_ctor_get(v___x_5459_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5459_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5564_ = v___x_5459_;
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v___x_5459_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5567_; 
if (v_isShared_5565_ == 0)
{
v___x_5567_ = v___x_5564_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_a_5562_);
v___x_5567_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
return v___x_5567_;
}
}
}
}
else
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
lean_dec_ref(v_options_5387_);
lean_dec_ref(v_handler_5386_);
v_a_5570_ = lean_ctor_get(v___x_5456_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v___x_5456_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v___x_5456_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v___x_5456_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
}
v___jp_5393_:
{
lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; 
v___x_5402_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5402_, 0, v___y_5400_);
lean_inc_ref(v___y_5399_);
v___x_5403_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5403_, 0, v___y_5397_);
lean_ctor_set(v___x_5403_, 1, v___y_5399_);
v___x_5404_ = lean_unsigned_to_nat(3u);
v___x_5405_ = lean_mk_empty_array_with_capacity(v___x_5404_);
v___x_5406_ = lean_array_push(v___x_5405_, v___y_5401_);
v___x_5407_ = lean_array_push(v___x_5406_, v___x_5402_);
v___x_5408_ = lean_array_push(v___x_5407_, v___x_5403_);
lean_inc_ref(v___y_5398_);
lean_inc(v___y_5395_);
v___x_5409_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5395_, v___y_5398_, v___x_5408_);
if (lean_obj_tag(v___x_5409_) == 0)
{
lean_object* v___x_5410_; lean_object* v___x_5411_; 
lean_dec_ref_known(v___x_5409_, 1);
v___x_5410_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5411_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5410_);
if (lean_obj_tag(v___x_5411_) == 0)
{
lean_object* v_a_5412_; lean_object* v___f_5413_; lean_object* v___x_5414_; 
v_a_5412_ = lean_ctor_get(v___x_5411_, 0);
lean_inc_n(v_a_5412_, 2);
lean_dec_ref_known(v___x_5411_, 1);
lean_inc_ref(v___y_5396_);
v___f_5413_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_5413_, 0, v___f_5392_);
lean_closure_set(v___f_5413_, 1, v___y_5396_);
lean_closure_set(v___f_5413_, 2, v_a_5412_);
v___x_5414_ = l_Lasm_JS_Function_ofFn(v___f_5413_);
if (lean_obj_tag(v___x_5414_) == 0)
{
lean_object* v_a_5415_; lean_object* v___f_5416_; lean_object* v___x_5417_; 
v_a_5415_ = lean_ctor_get(v___x_5414_, 0);
lean_inc(v_a_5415_);
lean_dec_ref_known(v___x_5414_, 1);
lean_inc_ref(v___y_5394_);
v___f_5416_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_5416_, 0, v_a_5415_);
lean_closure_set(v___f_5416_, 1, v___y_5394_);
lean_closure_set(v___f_5416_, 2, v___y_5396_);
lean_closure_set(v___f_5416_, 3, v___f_5392_);
lean_closure_set(v___f_5416_, 4, v___y_5395_);
v___x_5417_ = l_Lasm_JS_Function_ofFn(v___f_5416_);
if (lean_obj_tag(v___x_5417_) == 0)
{
lean_object* v_a_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; 
v_a_5418_ = lean_ctor_get(v___x_5417_, 0);
lean_inc(v_a_5418_);
lean_dec_ref_known(v___x_5417_, 1);
v___x_5419_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5420_ = lean_box(0);
v___x_5421_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5418_, v_a_5412_, v___x_5419_, v___x_5420_);
if (lean_obj_tag(v___x_5421_) == 0)
{
lean_object* v___x_5422_; 
lean_dec_ref_known(v___x_5421_, 1);
v___x_5422_ = l_Lasm_JS_waitForever();
return v___x_5422_;
}
else
{
return v___x_5421_;
}
}
else
{
lean_object* v_a_5423_; lean_object* v___x_5425_; uint8_t v_isShared_5426_; uint8_t v_isSharedCheck_5430_; 
lean_dec(v_a_5412_);
v_a_5423_ = lean_ctor_get(v___x_5417_, 0);
v_isSharedCheck_5430_ = !lean_is_exclusive(v___x_5417_);
if (v_isSharedCheck_5430_ == 0)
{
v___x_5425_ = v___x_5417_;
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
else
{
lean_inc(v_a_5423_);
lean_dec(v___x_5417_);
v___x_5425_ = lean_box(0);
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
v_resetjp_5424_:
{
lean_object* v___x_5428_; 
if (v_isShared_5426_ == 0)
{
v___x_5428_ = v___x_5425_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5429_; 
v_reuseFailAlloc_5429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5429_, 0, v_a_5423_);
v___x_5428_ = v_reuseFailAlloc_5429_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
return v___x_5428_;
}
}
}
}
else
{
lean_object* v_a_5431_; lean_object* v___x_5433_; uint8_t v_isShared_5434_; uint8_t v_isSharedCheck_5438_; 
lean_dec(v_a_5412_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
v_a_5431_ = lean_ctor_get(v___x_5414_, 0);
v_isSharedCheck_5438_ = !lean_is_exclusive(v___x_5414_);
if (v_isSharedCheck_5438_ == 0)
{
v___x_5433_ = v___x_5414_;
v_isShared_5434_ = v_isSharedCheck_5438_;
goto v_resetjp_5432_;
}
else
{
lean_inc(v_a_5431_);
lean_dec(v___x_5414_);
v___x_5433_ = lean_box(0);
v_isShared_5434_ = v_isSharedCheck_5438_;
goto v_resetjp_5432_;
}
v_resetjp_5432_:
{
lean_object* v___x_5436_; 
if (v_isShared_5434_ == 0)
{
v___x_5436_ = v___x_5433_;
goto v_reusejp_5435_;
}
else
{
lean_object* v_reuseFailAlloc_5437_; 
v_reuseFailAlloc_5437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5437_, 0, v_a_5431_);
v___x_5436_ = v_reuseFailAlloc_5437_;
goto v_reusejp_5435_;
}
v_reusejp_5435_:
{
return v___x_5436_;
}
}
}
}
else
{
lean_object* v_a_5439_; lean_object* v___x_5441_; uint8_t v_isShared_5442_; uint8_t v_isSharedCheck_5446_; 
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
v_a_5439_ = lean_ctor_get(v___x_5411_, 0);
v_isSharedCheck_5446_ = !lean_is_exclusive(v___x_5411_);
if (v_isSharedCheck_5446_ == 0)
{
v___x_5441_ = v___x_5411_;
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
else
{
lean_inc(v_a_5439_);
lean_dec(v___x_5411_);
v___x_5441_ = lean_box(0);
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
v_resetjp_5440_:
{
lean_object* v___x_5444_; 
if (v_isShared_5442_ == 0)
{
v___x_5444_ = v___x_5441_;
goto v_reusejp_5443_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v_a_5439_);
v___x_5444_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5443_;
}
v_reusejp_5443_:
{
return v___x_5444_;
}
}
}
}
else
{
lean_object* v_a_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5454_; 
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
v_a_5447_ = lean_ctor_get(v___x_5409_, 0);
v_isSharedCheck_5454_ = !lean_is_exclusive(v___x_5409_);
if (v_isSharedCheck_5454_ == 0)
{
v___x_5449_ = v___x_5409_;
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_a_5447_);
lean_dec(v___x_5409_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5450_ == 0)
{
v___x_5452_ = v___x_5449_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5453_; 
v_reuseFailAlloc_5453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5453_, 0, v_a_5447_);
v___x_5452_ = v_reuseFailAlloc_5453_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
return v___x_5452_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5578_, lean_object* v_options_5579_, lean_object* v_a_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l_Lasm_Fetch_serveNode(v_handler_5578_, v_options_5579_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5582_, lean_object* v_range_5583_, lean_object* v_b_5584_, lean_object* v_i_5585_, lean_object* v_hs_5586_, lean_object* v_hl_5587_){
_start:
{
lean_object* v___x_5588_; 
v___x_5588_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5582_, v_range_5583_, v_b_5584_, v_i_5585_);
return v___x_5588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5589_, lean_object* v_range_5590_, lean_object* v_b_5591_, lean_object* v_i_5592_, lean_object* v_hs_5593_, lean_object* v_hl_5594_){
_start:
{
lean_object* v_res_5595_; 
v_res_5595_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5589_, v_range_5590_, v_b_5591_, v_i_5592_, v_hs_5593_, v_hl_5594_);
lean_dec_ref(v_range_5590_);
lean_dec_ref(v___y_5589_);
return v_res_5595_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5596_, lean_object* v_a_5597_, lean_object* v_as_5598_, lean_object* v_as_x27_5599_, lean_object* v_b_5600_, lean_object* v_a_5601_){
_start:
{
lean_object* v___x_5603_; 
v___x_5603_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5596_, v_a_5597_, v_as_x27_5599_, v_b_5600_);
return v___x_5603_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5604_, lean_object* v_a_5605_, lean_object* v_as_5606_, lean_object* v_as_x27_5607_, lean_object* v_b_5608_, lean_object* v_a_5609_, lean_object* v___y_5610_){
_start:
{
lean_object* v_res_5611_; 
v_res_5611_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5604_, v_a_5605_, v_as_5606_, v_as_x27_5607_, v_b_5608_, v_a_5609_);
lean_dec(v_as_x27_5607_);
lean_dec(v_as_5606_);
return v_res_5611_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5612_; 
v___x_5612_ = lean_box(0);
return v___x_5612_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5613_; 
v___x_5613_ = lean_box(0);
return v___x_5613_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5621_, lean_object* v_method_5622_, lean_object* v_url_5623_, lean_object* v_headers_5624_, lean_object* v_body_5625_, lean_object* v_backend_5626_, lean_object* v_a_00___x40___internal___hyg_5627_){
_start:
{
lean_object* v_res_5628_; 
v_res_5628_ = lasm_fetch_send(v_p_5621_, v_method_5622_, v_url_5623_, v_headers_5624_, v_body_5625_, v_backend_5626_);
lean_dec_ref(v_backend_5626_);
lean_dec_ref(v_body_5625_);
lean_dec_ref(v_headers_5624_);
lean_dec_ref(v_url_5623_);
lean_dec_ref(v_method_5622_);
lean_dec(v_p_5621_);
return v_res_5628_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5629_, lean_object* v_b_5630_, lean_object* v_x_5631_, lean_object* v_x_5632_){
_start:
{
if (lean_obj_tag(v_x_5632_) == 0)
{
return v_x_5631_;
}
else
{
lean_object* v_head_5633_; lean_object* v_tail_5634_; uint8_t v___y_5636_; lean_object* v___x_5643_; lean_object* v___x_5644_; uint8_t v___x_5645_; 
v_head_5633_ = lean_ctor_get(v_x_5632_, 0);
v_tail_5634_ = lean_ctor_get(v_x_5632_, 1);
v___x_5643_ = lean_nat_add(v_pos_5629_, v_head_5633_);
v___x_5644_ = lean_byte_array_size(v_b_5630_);
v___x_5645_ = lean_nat_dec_lt(v___x_5643_, v___x_5644_);
if (v___x_5645_ == 0)
{
uint8_t v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; uint8_t v___x_5649_; 
lean_dec(v___x_5643_);
v___x_5646_ = 0;
v___x_5647_ = lean_box(v___x_5646_);
v___x_5648_ = l_outOfBounds___redArg(v___x_5647_);
lean_dec(v___x_5647_);
v___x_5649_ = lean_unbox(v___x_5648_);
lean_dec(v___x_5648_);
v___y_5636_ = v___x_5649_;
goto v___jp_5635_;
}
else
{
uint8_t v___x_5650_; 
v___x_5650_ = lean_byte_array_fget(v_b_5630_, v___x_5643_);
lean_dec(v___x_5643_);
v___y_5636_ = v___x_5650_;
goto v___jp_5635_;
}
v___jp_5635_:
{
lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; 
v___x_5637_ = lean_uint8_to_nat(v___y_5636_);
v___x_5638_ = lean_unsigned_to_nat(256u);
v___x_5639_ = lean_nat_pow(v___x_5638_, v_head_5633_);
v___x_5640_ = lean_nat_mul(v___x_5637_, v___x_5639_);
lean_dec(v___x_5639_);
v___x_5641_ = lean_nat_add(v_x_5631_, v___x_5640_);
lean_dec(v___x_5640_);
lean_dec(v_x_5631_);
v_x_5631_ = v___x_5641_;
v_x_5632_ = v_tail_5634_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5651_, lean_object* v_b_5652_, lean_object* v_x_5653_, lean_object* v_x_5654_){
_start:
{
lean_object* v_res_5655_; 
v_res_5655_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5651_, v_b_5652_, v_x_5653_, v_x_5654_);
lean_dec(v_x_5654_);
lean_dec_ref(v_b_5652_);
lean_dec(v_pos_5651_);
return v_res_5655_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; 
v___x_5656_ = lean_unsigned_to_nat(8u);
v___x_5657_ = l_List_range(v___x_5656_);
return v___x_5657_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5661_, lean_object* v_pos_5662_){
_start:
{
lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; uint8_t v___x_5666_; 
v___x_5663_ = lean_byte_array_size(v_b_5661_);
v___x_5664_ = lean_unsigned_to_nat(8u);
v___x_5665_ = lean_nat_add(v_pos_5662_, v___x_5664_);
v___x_5666_ = lean_nat_dec_lt(v___x_5663_, v___x_5665_);
lean_dec(v___x_5665_);
if (v___x_5666_ == 0)
{
lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; 
v___x_5667_ = lean_unsigned_to_nat(0u);
v___x_5668_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5669_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5662_, v_b_5661_, v___x_5667_, v___x_5668_);
v___x_5670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5670_, 0, v___x_5669_);
return v___x_5670_;
}
else
{
lean_object* v___x_5671_; 
v___x_5671_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5671_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5672_, lean_object* v_pos_5673_){
_start:
{
lean_object* v_res_5674_; 
v_res_5674_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5672_, v_pos_5673_);
lean_dec(v_pos_5673_);
lean_dec_ref(v_b_5672_);
return v_res_5674_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5675_, lean_object* v_a_5676_){
_start:
{
if (lean_obj_tag(v_a_5675_) == 0)
{
lean_object* v___x_5677_; 
v___x_5677_ = l_List_reverse___redArg(v_a_5676_);
return v___x_5677_;
}
else
{
lean_object* v_head_5678_; lean_object* v_tail_5679_; lean_object* v___x_5681_; uint8_t v_isShared_5682_; uint8_t v_isSharedCheck_5695_; 
v_head_5678_ = lean_ctor_get(v_a_5675_, 0);
v_tail_5679_ = lean_ctor_get(v_a_5675_, 1);
v_isSharedCheck_5695_ = !lean_is_exclusive(v_a_5675_);
if (v_isSharedCheck_5695_ == 0)
{
v___x_5681_ = v_a_5675_;
v_isShared_5682_ = v_isSharedCheck_5695_;
goto v_resetjp_5680_;
}
else
{
lean_inc(v_tail_5679_);
lean_inc(v_head_5678_);
lean_dec(v_a_5675_);
v___x_5681_ = lean_box(0);
v_isShared_5682_ = v_isSharedCheck_5695_;
goto v_resetjp_5680_;
}
v_resetjp_5680_:
{
uint8_t v___y_5684_; uint8_t v___x_5690_; uint8_t v___x_5691_; uint8_t v___x_5692_; 
v___x_5690_ = 128;
v___x_5691_ = lean_unbox(v_head_5678_);
v___x_5692_ = lean_uint8_dec_lt(v___x_5691_, v___x_5690_);
if (v___x_5692_ == 0)
{
uint8_t v___x_5693_; 
lean_dec(v_head_5678_);
v___x_5693_ = 63;
v___y_5684_ = v___x_5693_;
goto v___jp_5683_;
}
else
{
uint8_t v___x_5694_; 
v___x_5694_ = lean_unbox(v_head_5678_);
lean_dec(v_head_5678_);
v___y_5684_ = v___x_5694_;
goto v___jp_5683_;
}
v___jp_5683_:
{
lean_object* v___x_5685_; lean_object* v___x_5687_; 
v___x_5685_ = lean_box(v___y_5684_);
if (v_isShared_5682_ == 0)
{
lean_ctor_set(v___x_5681_, 1, v_a_5676_);
lean_ctor_set(v___x_5681_, 0, v___x_5685_);
v___x_5687_ = v___x_5681_;
goto v_reusejp_5686_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v___x_5685_);
lean_ctor_set(v_reuseFailAlloc_5689_, 1, v_a_5676_);
v___x_5687_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5686_;
}
v_reusejp_5686_:
{
v_a_5675_ = v_tail_5679_;
v_a_5676_ = v___x_5687_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5698_, lean_object* v_pos_5699_, lean_object* v_n_5700_){
_start:
{
lean_object* v___x_5701_; lean_object* v___x_5702_; uint8_t v___x_5703_; 
v___x_5701_ = lean_byte_array_size(v_b_5698_);
v___x_5702_ = lean_nat_add(v_pos_5699_, v_n_5700_);
v___x_5703_ = lean_nat_dec_lt(v___x_5701_, v___x_5702_);
if (v___x_5703_ == 0)
{
lean_object* v___x_5704_; uint8_t v___x_5705_; 
v___x_5704_ = l_ByteArray_extract(v_b_5698_, v_pos_5699_, v___x_5702_);
lean_dec(v___x_5702_);
v___x_5705_ = lean_string_validate_utf8(v___x_5704_);
if (v___x_5705_ == 0)
{
lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; uint8_t v___x_5710_; 
v___x_5706_ = l_ByteArray_toList(v___x_5704_);
lean_dec_ref(v___x_5704_);
v___x_5707_ = lean_box(0);
v___x_5708_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5706_, v___x_5707_);
v___x_5709_ = l_List_toByteArray(v___x_5708_);
lean_dec(v___x_5708_);
v___x_5710_ = lean_string_validate_utf8(v___x_5709_);
if (v___x_5710_ == 0)
{
lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
lean_dec_ref(v___x_5709_);
v___x_5711_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5712_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5711_);
v___x_5713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5712_);
return v___x_5713_;
}
else
{
lean_object* v___x_5714_; lean_object* v___x_5715_; 
v___x_5714_ = lean_string_from_utf8_unchecked(v___x_5709_);
v___x_5715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5714_);
return v___x_5715_;
}
}
else
{
lean_object* v___x_5716_; lean_object* v___x_5717_; 
v___x_5716_ = lean_string_from_utf8_unchecked(v___x_5704_);
v___x_5717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
return v___x_5717_;
}
}
else
{
lean_object* v___x_5718_; 
lean_dec(v___x_5702_);
lean_dec(v_pos_5699_);
v___x_5718_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5719_, lean_object* v_pos_5720_, lean_object* v_n_5721_){
_start:
{
lean_object* v_res_5722_; 
v_res_5722_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5719_, v_pos_5720_, v_n_5721_);
lean_dec(v_n_5721_);
lean_dec_ref(v_b_5719_);
return v_res_5722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5723_, lean_object* v_range_5724_, lean_object* v_b_5725_, lean_object* v_i_5726_){
_start:
{
lean_object* v_stop_5727_; lean_object* v_step_5728_; uint8_t v___x_5729_; 
v_stop_5727_ = lean_ctor_get(v_range_5724_, 1);
v_step_5728_ = lean_ctor_get(v_range_5724_, 2);
v___x_5729_ = lean_nat_dec_lt(v_i_5726_, v_stop_5727_);
if (v___x_5729_ == 0)
{
lean_object* v___x_5730_; 
lean_dec(v_i_5726_);
v___x_5730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5730_, 0, v_b_5725_);
return v___x_5730_;
}
else
{
lean_object* v_fst_5731_; lean_object* v_snd_5732_; lean_object* v___x_5734_; uint8_t v_isShared_5735_; uint8_t v_isSharedCheck_5788_; 
v_fst_5731_ = lean_ctor_get(v_b_5725_, 0);
v_snd_5732_ = lean_ctor_get(v_b_5725_, 1);
v_isSharedCheck_5788_ = !lean_is_exclusive(v_b_5725_);
if (v_isSharedCheck_5788_ == 0)
{
v___x_5734_ = v_b_5725_;
v_isShared_5735_ = v_isSharedCheck_5788_;
goto v_resetjp_5733_;
}
else
{
lean_inc(v_snd_5732_);
lean_inc(v_fst_5731_);
lean_dec(v_b_5725_);
v___x_5734_ = lean_box(0);
v_isShared_5735_ = v_isSharedCheck_5788_;
goto v_resetjp_5733_;
}
v_resetjp_5733_:
{
lean_object* v___x_5736_; 
v___x_5736_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5723_, v_fst_5731_);
if (lean_obj_tag(v___x_5736_) == 0)
{
lean_object* v_a_5737_; lean_object* v___x_5739_; uint8_t v_isShared_5740_; uint8_t v_isSharedCheck_5744_; 
lean_del_object(v___x_5734_);
lean_dec(v_snd_5732_);
lean_dec(v_fst_5731_);
lean_dec(v_i_5726_);
v_a_5737_ = lean_ctor_get(v___x_5736_, 0);
v_isSharedCheck_5744_ = !lean_is_exclusive(v___x_5736_);
if (v_isSharedCheck_5744_ == 0)
{
v___x_5739_ = v___x_5736_;
v_isShared_5740_ = v_isSharedCheck_5744_;
goto v_resetjp_5738_;
}
else
{
lean_inc(v_a_5737_);
lean_dec(v___x_5736_);
v___x_5739_ = lean_box(0);
v_isShared_5740_ = v_isSharedCheck_5744_;
goto v_resetjp_5738_;
}
v_resetjp_5738_:
{
lean_object* v___x_5742_; 
if (v_isShared_5740_ == 0)
{
v___x_5742_ = v___x_5739_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v_a_5737_);
v___x_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
return v___x_5742_;
}
}
}
else
{
lean_object* v_a_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; 
v_a_5745_ = lean_ctor_get(v___x_5736_, 0);
lean_inc(v_a_5745_);
lean_dec_ref_known(v___x_5736_, 1);
v___x_5746_ = lean_unsigned_to_nat(8u);
v___x_5747_ = lean_nat_add(v_fst_5731_, v___x_5746_);
lean_dec(v_fst_5731_);
lean_inc(v___x_5747_);
v___x_5748_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5723_, v___x_5747_, v_a_5745_);
if (lean_obj_tag(v___x_5748_) == 0)
{
lean_object* v_a_5749_; lean_object* v___x_5751_; uint8_t v_isShared_5752_; uint8_t v_isSharedCheck_5756_; 
lean_dec(v___x_5747_);
lean_dec(v_a_5745_);
lean_del_object(v___x_5734_);
lean_dec(v_snd_5732_);
lean_dec(v_i_5726_);
v_a_5749_ = lean_ctor_get(v___x_5748_, 0);
v_isSharedCheck_5756_ = !lean_is_exclusive(v___x_5748_);
if (v_isSharedCheck_5756_ == 0)
{
v___x_5751_ = v___x_5748_;
v_isShared_5752_ = v_isSharedCheck_5756_;
goto v_resetjp_5750_;
}
else
{
lean_inc(v_a_5749_);
lean_dec(v___x_5748_);
v___x_5751_ = lean_box(0);
v_isShared_5752_ = v_isSharedCheck_5756_;
goto v_resetjp_5750_;
}
v_resetjp_5750_:
{
lean_object* v___x_5754_; 
if (v_isShared_5752_ == 0)
{
v___x_5754_ = v___x_5751_;
goto v_reusejp_5753_;
}
else
{
lean_object* v_reuseFailAlloc_5755_; 
v_reuseFailAlloc_5755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5755_, 0, v_a_5749_);
v___x_5754_ = v_reuseFailAlloc_5755_;
goto v_reusejp_5753_;
}
v_reusejp_5753_:
{
return v___x_5754_;
}
}
}
else
{
lean_object* v_a_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; 
v_a_5757_ = lean_ctor_get(v___x_5748_, 0);
lean_inc(v_a_5757_);
lean_dec_ref_known(v___x_5748_, 1);
v___x_5758_ = lean_nat_add(v___x_5747_, v_a_5745_);
lean_dec(v_a_5745_);
lean_dec(v___x_5747_);
v___x_5759_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5723_, v___x_5758_);
if (lean_obj_tag(v___x_5759_) == 0)
{
lean_object* v_a_5760_; lean_object* v___x_5762_; uint8_t v_isShared_5763_; uint8_t v_isSharedCheck_5767_; 
lean_dec(v___x_5758_);
lean_dec(v_a_5757_);
lean_del_object(v___x_5734_);
lean_dec(v_snd_5732_);
lean_dec(v_i_5726_);
v_a_5760_ = lean_ctor_get(v___x_5759_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5759_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5762_ = v___x_5759_;
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
else
{
lean_inc(v_a_5760_);
lean_dec(v___x_5759_);
v___x_5762_ = lean_box(0);
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
v_resetjp_5761_:
{
lean_object* v___x_5765_; 
if (v_isShared_5763_ == 0)
{
v___x_5765_ = v___x_5762_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v_a_5760_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
else
{
lean_object* v_a_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; 
v_a_5768_ = lean_ctor_get(v___x_5759_, 0);
lean_inc(v_a_5768_);
lean_dec_ref_known(v___x_5759_, 1);
v___x_5769_ = lean_nat_add(v___x_5758_, v___x_5746_);
lean_dec(v___x_5758_);
lean_inc(v___x_5769_);
v___x_5770_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5723_, v___x_5769_, v_a_5768_);
if (lean_obj_tag(v___x_5770_) == 0)
{
lean_object* v_a_5771_; lean_object* v___x_5773_; uint8_t v_isShared_5774_; uint8_t v_isSharedCheck_5778_; 
lean_dec(v___x_5769_);
lean_dec(v_a_5768_);
lean_dec(v_a_5757_);
lean_del_object(v___x_5734_);
lean_dec(v_snd_5732_);
lean_dec(v_i_5726_);
v_a_5771_ = lean_ctor_get(v___x_5770_, 0);
v_isSharedCheck_5778_ = !lean_is_exclusive(v___x_5770_);
if (v_isSharedCheck_5778_ == 0)
{
v___x_5773_ = v___x_5770_;
v_isShared_5774_ = v_isSharedCheck_5778_;
goto v_resetjp_5772_;
}
else
{
lean_inc(v_a_5771_);
lean_dec(v___x_5770_);
v___x_5773_ = lean_box(0);
v_isShared_5774_ = v_isSharedCheck_5778_;
goto v_resetjp_5772_;
}
v_resetjp_5772_:
{
lean_object* v___x_5776_; 
if (v_isShared_5774_ == 0)
{
v___x_5776_ = v___x_5773_;
goto v_reusejp_5775_;
}
else
{
lean_object* v_reuseFailAlloc_5777_; 
v_reuseFailAlloc_5777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5777_, 0, v_a_5771_);
v___x_5776_ = v_reuseFailAlloc_5777_;
goto v_reusejp_5775_;
}
v_reusejp_5775_:
{
return v___x_5776_;
}
}
}
else
{
lean_object* v_a_5779_; lean_object* v___x_5780_; lean_object* v___x_5782_; 
v_a_5779_ = lean_ctor_get(v___x_5770_, 0);
lean_inc(v_a_5779_);
lean_dec_ref_known(v___x_5770_, 1);
v___x_5780_ = lean_nat_add(v___x_5769_, v_a_5768_);
lean_dec(v_a_5768_);
lean_dec(v___x_5769_);
if (v_isShared_5735_ == 0)
{
lean_ctor_set(v___x_5734_, 1, v_a_5779_);
lean_ctor_set(v___x_5734_, 0, v_a_5757_);
v___x_5782_ = v___x_5734_;
goto v_reusejp_5781_;
}
else
{
lean_object* v_reuseFailAlloc_5787_; 
v_reuseFailAlloc_5787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5787_, 0, v_a_5757_);
lean_ctor_set(v_reuseFailAlloc_5787_, 1, v_a_5779_);
v___x_5782_ = v_reuseFailAlloc_5787_;
goto v_reusejp_5781_;
}
v_reusejp_5781_:
{
lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5783_ = lean_array_push(v_snd_5732_, v___x_5782_);
v___x_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5784_, 0, v___x_5780_);
lean_ctor_set(v___x_5784_, 1, v___x_5783_);
v___x_5785_ = lean_nat_add(v_i_5726_, v_step_5728_);
lean_dec(v_i_5726_);
v_b_5725_ = v___x_5784_;
v_i_5726_ = v___x_5785_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5789_, lean_object* v_range_5790_, lean_object* v_b_5791_, lean_object* v_i_5792_){
_start:
{
lean_object* v_res_5793_; 
v_res_5793_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5789_, v_range_5790_, v_b_5791_, v_i_5792_);
lean_dec_ref(v_range_5790_);
lean_dec_ref(v_b_5789_);
return v_res_5793_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5797_){
_start:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; 
v___x_5798_ = lean_unsigned_to_nat(0u);
v___x_5799_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5797_, v___x_5798_);
if (lean_obj_tag(v___x_5799_) == 0)
{
lean_object* v_a_5800_; lean_object* v___x_5802_; uint8_t v_isShared_5803_; uint8_t v_isSharedCheck_5807_; 
v_a_5800_ = lean_ctor_get(v___x_5799_, 0);
v_isSharedCheck_5807_ = !lean_is_exclusive(v___x_5799_);
if (v_isSharedCheck_5807_ == 0)
{
v___x_5802_ = v___x_5799_;
v_isShared_5803_ = v_isSharedCheck_5807_;
goto v_resetjp_5801_;
}
else
{
lean_inc(v_a_5800_);
lean_dec(v___x_5799_);
v___x_5802_ = lean_box(0);
v_isShared_5803_ = v_isSharedCheck_5807_;
goto v_resetjp_5801_;
}
v_resetjp_5801_:
{
lean_object* v___x_5805_; 
if (v_isShared_5803_ == 0)
{
v___x_5805_ = v___x_5802_;
goto v_reusejp_5804_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v_a_5800_);
v___x_5805_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5804_;
}
v_reusejp_5804_:
{
return v___x_5805_;
}
}
}
else
{
lean_object* v_a_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; 
v_a_5808_ = lean_ctor_get(v___x_5799_, 0);
lean_inc(v_a_5808_);
lean_dec_ref_known(v___x_5799_, 1);
v___x_5809_ = lean_unsigned_to_nat(8u);
v___x_5810_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5797_, v___x_5809_);
if (lean_obj_tag(v___x_5810_) == 0)
{
lean_object* v_a_5811_; lean_object* v___x_5813_; uint8_t v_isShared_5814_; uint8_t v_isSharedCheck_5818_; 
lean_dec(v_a_5808_);
v_a_5811_ = lean_ctor_get(v___x_5810_, 0);
v_isSharedCheck_5818_ = !lean_is_exclusive(v___x_5810_);
if (v_isSharedCheck_5818_ == 0)
{
v___x_5813_ = v___x_5810_;
v_isShared_5814_ = v_isSharedCheck_5818_;
goto v_resetjp_5812_;
}
else
{
lean_inc(v_a_5811_);
lean_dec(v___x_5810_);
v___x_5813_ = lean_box(0);
v_isShared_5814_ = v_isSharedCheck_5818_;
goto v_resetjp_5812_;
}
v_resetjp_5812_:
{
lean_object* v___x_5816_; 
if (v_isShared_5814_ == 0)
{
v___x_5816_ = v___x_5813_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5817_; 
v_reuseFailAlloc_5817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5817_, 0, v_a_5811_);
v___x_5816_ = v_reuseFailAlloc_5817_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
return v___x_5816_;
}
}
}
else
{
lean_object* v_a_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v_a_5819_ = lean_ctor_get(v___x_5810_, 0);
lean_inc(v_a_5819_);
lean_dec_ref_known(v___x_5810_, 1);
v___x_5820_ = lean_unsigned_to_nat(1u);
v___x_5821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5798_);
lean_ctor_set(v___x_5821_, 1, v_a_5819_);
lean_ctor_set(v___x_5821_, 2, v___x_5820_);
v___x_5822_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5823_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5797_, v___x_5821_, v___x_5822_, v___x_5798_);
lean_dec_ref_known(v___x_5821_, 3);
if (lean_obj_tag(v___x_5823_) == 0)
{
lean_object* v_a_5824_; lean_object* v___x_5826_; uint8_t v_isShared_5827_; uint8_t v_isSharedCheck_5831_; 
lean_dec(v_a_5808_);
v_a_5824_ = lean_ctor_get(v___x_5823_, 0);
v_isSharedCheck_5831_ = !lean_is_exclusive(v___x_5823_);
if (v_isSharedCheck_5831_ == 0)
{
v___x_5826_ = v___x_5823_;
v_isShared_5827_ = v_isSharedCheck_5831_;
goto v_resetjp_5825_;
}
else
{
lean_inc(v_a_5824_);
lean_dec(v___x_5823_);
v___x_5826_ = lean_box(0);
v_isShared_5827_ = v_isSharedCheck_5831_;
goto v_resetjp_5825_;
}
v_resetjp_5825_:
{
lean_object* v___x_5829_; 
if (v_isShared_5827_ == 0)
{
v___x_5829_ = v___x_5826_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5830_; 
v_reuseFailAlloc_5830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5830_, 0, v_a_5824_);
v___x_5829_ = v_reuseFailAlloc_5830_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
return v___x_5829_;
}
}
}
else
{
lean_object* v_a_5832_; lean_object* v___x_5834_; uint8_t v_isShared_5835_; uint8_t v_isSharedCheck_5846_; 
v_a_5832_ = lean_ctor_get(v___x_5823_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5823_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5834_ = v___x_5823_;
v_isShared_5835_ = v_isSharedCheck_5846_;
goto v_resetjp_5833_;
}
else
{
lean_inc(v_a_5832_);
lean_dec(v___x_5823_);
v___x_5834_ = lean_box(0);
v_isShared_5835_ = v_isSharedCheck_5846_;
goto v_resetjp_5833_;
}
v_resetjp_5833_:
{
lean_object* v_fst_5836_; lean_object* v_snd_5837_; uint16_t v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5844_; 
v_fst_5836_ = lean_ctor_get(v_a_5832_, 0);
lean_inc(v_fst_5836_);
v_snd_5837_ = lean_ctor_get(v_a_5832_, 1);
lean_inc(v_snd_5837_);
lean_dec(v_a_5832_);
v___x_5838_ = lean_uint16_of_nat(v_a_5808_);
lean_dec(v_a_5808_);
v___x_5839_ = lean_byte_array_size(v_b_5797_);
v___x_5840_ = l_ByteArray_extract(v_b_5797_, v_fst_5836_, v___x_5839_);
v___x_5841_ = lean_box(0);
v___x_5842_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5842_, 0, v_snd_5837_);
lean_ctor_set(v___x_5842_, 1, v___x_5840_);
lean_ctor_set(v___x_5842_, 2, v___x_5841_);
lean_ctor_set_uint16(v___x_5842_, sizeof(void*)*3, v___x_5838_);
if (v_isShared_5835_ == 0)
{
lean_ctor_set(v___x_5834_, 0, v___x_5842_);
v___x_5844_ = v___x_5834_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v___x_5842_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5847_){
_start:
{
lean_object* v_res_5848_; 
v_res_5848_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5847_);
lean_dec_ref(v_b_5847_);
return v_res_5848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5849_, lean_object* v_range_5850_, lean_object* v_b_5851_, lean_object* v_i_5852_, lean_object* v_hs_5853_, lean_object* v_hl_5854_){
_start:
{
lean_object* v___x_5855_; 
v___x_5855_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5849_, v_range_5850_, v_b_5851_, v_i_5852_);
return v___x_5855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5856_, lean_object* v_range_5857_, lean_object* v_b_5858_, lean_object* v_i_5859_, lean_object* v_hs_5860_, lean_object* v_hl_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5856_, v_range_5857_, v_b_5858_, v_i_5859_, v_hs_5860_, v_hl_5861_);
lean_dec_ref(v_range_5857_);
lean_dec_ref(v_b_5856_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5863_, lean_object* v_headers_5864_, lean_object* v_x_5865_){
_start:
{
if (lean_obj_tag(v_x_5865_) == 0)
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5875_; 
lean_dec_ref(v_headers_5864_);
v_a_5867_ = lean_ctor_get(v_x_5865_, 0);
v_isSharedCheck_5875_ = !lean_is_exclusive(v_x_5865_);
if (v_isSharedCheck_5875_ == 0)
{
v___x_5869_ = v_x_5865_;
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v_x_5865_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
lean_object* v___x_5873_; 
v___x_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5873_, 0, v___x_5872_);
return v___x_5873_;
}
}
}
else
{
lean_object* v_a_5876_; lean_object* v___x_5878_; uint8_t v_isShared_5879_; uint8_t v_isSharedCheck_5886_; 
v_a_5876_ = lean_ctor_get(v_x_5865_, 0);
v_isSharedCheck_5886_ = !lean_is_exclusive(v_x_5865_);
if (v_isSharedCheck_5886_ == 0)
{
v___x_5878_ = v_x_5865_;
v_isShared_5879_ = v_isSharedCheck_5886_;
goto v_resetjp_5877_;
}
else
{
lean_inc(v_a_5876_);
lean_dec(v_x_5865_);
v___x_5878_ = lean_box(0);
v_isShared_5879_ = v_isSharedCheck_5886_;
goto v_resetjp_5877_;
}
v_resetjp_5877_:
{
lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5883_; 
v___x_5880_ = lean_box(0);
v___x_5881_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5881_, 0, v_headers_5864_);
lean_ctor_set(v___x_5881_, 1, v_a_5876_);
lean_ctor_set(v___x_5881_, 2, v___x_5880_);
lean_ctor_set_uint16(v___x_5881_, sizeof(void*)*3, v___y_5863_);
if (v_isShared_5879_ == 0)
{
lean_ctor_set(v___x_5878_, 0, v___x_5881_);
v___x_5883_ = v___x_5878_;
goto v_reusejp_5882_;
}
else
{
lean_object* v_reuseFailAlloc_5885_; 
v_reuseFailAlloc_5885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5885_, 0, v___x_5881_);
v___x_5883_ = v_reuseFailAlloc_5885_;
goto v_reusejp_5882_;
}
v_reusejp_5882_:
{
lean_object* v___x_5884_; 
v___x_5884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5884_, 0, v___x_5883_);
return v___x_5884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5887_, lean_object* v_headers_5888_, lean_object* v_x_5889_, lean_object* v___y_5890_){
_start:
{
uint16_t v___y_2853__boxed_5891_; lean_object* v_res_5892_; 
v___y_2853__boxed_5891_ = lean_unbox(v___y_5887_);
v_res_5892_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5891_, v_headers_5888_, v_x_5889_);
return v_res_5892_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5893_, lean_object* v___f_5894_, lean_object* v_x_5895_){
_start:
{
if (lean_obj_tag(v_x_5895_) == 0)
{
lean_object* v_a_5897_; lean_object* v___x_5899_; uint8_t v_isShared_5900_; uint8_t v_isSharedCheck_5905_; 
lean_dec_ref(v___f_5894_);
lean_dec(v_a_5893_);
v_a_5897_ = lean_ctor_get(v_x_5895_, 0);
v_isSharedCheck_5905_ = !lean_is_exclusive(v_x_5895_);
if (v_isSharedCheck_5905_ == 0)
{
v___x_5899_ = v_x_5895_;
v_isShared_5900_ = v_isSharedCheck_5905_;
goto v_resetjp_5898_;
}
else
{
lean_inc(v_a_5897_);
lean_dec(v_x_5895_);
v___x_5899_ = lean_box(0);
v_isShared_5900_ = v_isSharedCheck_5905_;
goto v_resetjp_5898_;
}
v_resetjp_5898_:
{
lean_object* v___x_5902_; 
if (v_isShared_5900_ == 0)
{
v___x_5902_ = v___x_5899_;
goto v_reusejp_5901_;
}
else
{
lean_object* v_reuseFailAlloc_5904_; 
v_reuseFailAlloc_5904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5904_, 0, v_a_5897_);
v___x_5902_ = v_reuseFailAlloc_5904_;
goto v_reusejp_5901_;
}
v_reusejp_5901_:
{
lean_object* v___x_5903_; 
v___x_5903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5902_);
return v___x_5903_;
}
}
}
else
{
lean_object* v_a_5906_; lean_object* v___x_5908_; uint8_t v_isShared_5909_; uint8_t v_isSharedCheck_5930_; 
v_a_5906_ = lean_ctor_get(v_x_5895_, 0);
v_isSharedCheck_5930_ = !lean_is_exclusive(v_x_5895_);
if (v_isSharedCheck_5930_ == 0)
{
v___x_5908_ = v_x_5895_;
v_isShared_5909_ = v_isSharedCheck_5930_;
goto v_resetjp_5907_;
}
else
{
lean_inc(v_a_5906_);
lean_dec(v_x_5895_);
v___x_5908_ = lean_box(0);
v_isShared_5909_ = v_isSharedCheck_5930_;
goto v_resetjp_5907_;
}
v_resetjp_5907_:
{
lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; uint8_t v___x_5916_; lean_object* v_val_5918_; lean_object* v___x_5921_; 
v___x_5910_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5911_, 0, v_a_5893_);
lean_ctor_set(v___x_5911_, 1, v___x_5910_);
v___x_5912_ = lean_unsigned_to_nat(1u);
v___x_5913_ = lean_mk_empty_array_with_capacity(v___x_5912_);
v___x_5914_ = lean_array_push(v___x_5913_, v___x_5911_);
v___x_5915_ = lean_unsigned_to_nat(0u);
v___x_5916_ = 0;
v___x_5921_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5906_, v___x_5914_);
if (lean_obj_tag(v___x_5921_) == 0)
{
lean_object* v_a_5922_; lean_object* v___x_5924_; 
v_a_5922_ = lean_ctor_get(v___x_5921_, 0);
lean_inc(v_a_5922_);
lean_dec_ref_known(v___x_5921_, 1);
if (v_isShared_5909_ == 0)
{
lean_ctor_set(v___x_5908_, 0, v_a_5922_);
v___x_5924_ = v___x_5908_;
goto v_reusejp_5923_;
}
else
{
lean_object* v_reuseFailAlloc_5925_; 
v_reuseFailAlloc_5925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5925_, 0, v_a_5922_);
v___x_5924_ = v_reuseFailAlloc_5925_;
goto v_reusejp_5923_;
}
v_reusejp_5923_:
{
v_val_5918_ = v___x_5924_;
goto v___jp_5917_;
}
}
else
{
lean_object* v_a_5926_; lean_object* v___x_5928_; 
v_a_5926_ = lean_ctor_get(v___x_5921_, 0);
lean_inc(v_a_5926_);
lean_dec_ref_known(v___x_5921_, 1);
if (v_isShared_5909_ == 0)
{
lean_ctor_set_tag(v___x_5908_, 0);
lean_ctor_set(v___x_5908_, 0, v_a_5926_);
v___x_5928_ = v___x_5908_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v_a_5926_);
v___x_5928_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
v_val_5918_ = v___x_5928_;
goto v___jp_5917_;
}
}
v___jp_5917_:
{
lean_object* v___x_5919_; lean_object* v___x_5920_; 
v___x_5919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5919_, 0, v_val_5918_);
v___x_5920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5915_, v___x_5916_, v___x_5919_, v___f_5894_);
return v___x_5920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5931_, lean_object* v___f_5932_, lean_object* v_x_5933_, lean_object* v___y_5934_){
_start:
{
lean_object* v_res_5935_; 
v_res_5935_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5931_, v___f_5932_, v_x_5933_);
return v_res_5935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5936_, lean_object* v_a_5937_, lean_object* v_x_5938_){
_start:
{
if (lean_obj_tag(v_x_5938_) == 0)
{
lean_object* v_a_5940_; lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_5948_; 
lean_dec(v_a_5937_);
lean_dec_ref(v___f_5936_);
v_a_5940_ = lean_ctor_get(v_x_5938_, 0);
v_isSharedCheck_5948_ = !lean_is_exclusive(v_x_5938_);
if (v_isSharedCheck_5948_ == 0)
{
v___x_5942_ = v_x_5938_;
v_isShared_5943_ = v_isSharedCheck_5948_;
goto v_resetjp_5941_;
}
else
{
lean_inc(v_a_5940_);
lean_dec(v_x_5938_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_5948_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v___x_5945_; 
if (v_isShared_5943_ == 0)
{
v___x_5945_ = v___x_5942_;
goto v_reusejp_5944_;
}
else
{
lean_object* v_reuseFailAlloc_5947_; 
v_reuseFailAlloc_5947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5947_, 0, v_a_5940_);
v___x_5945_ = v_reuseFailAlloc_5947_;
goto v_reusejp_5944_;
}
v_reusejp_5944_:
{
lean_object* v___x_5946_; 
v___x_5946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
return v___x_5946_;
}
}
}
else
{
lean_object* v_a_5949_; lean_object* v___x_5951_; uint8_t v_isShared_5952_; uint8_t v_isSharedCheck_5970_; 
v_a_5949_ = lean_ctor_get(v_x_5938_, 0);
v_isSharedCheck_5970_ = !lean_is_exclusive(v_x_5938_);
if (v_isSharedCheck_5970_ == 0)
{
v___x_5951_ = v_x_5938_;
v_isShared_5952_ = v_isSharedCheck_5970_;
goto v_resetjp_5950_;
}
else
{
lean_inc(v_a_5949_);
lean_dec(v_x_5938_);
v___x_5951_ = lean_box(0);
v_isShared_5952_ = v_isSharedCheck_5970_;
goto v_resetjp_5950_;
}
v_resetjp_5950_:
{
lean_object* v___f_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; uint8_t v___x_5956_; lean_object* v_val_5958_; lean_object* v___x_5961_; 
v___f_5953_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5953_, 0, v_a_5949_);
lean_closure_set(v___f_5953_, 1, v___f_5936_);
v___x_5954_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5955_ = lean_unsigned_to_nat(0u);
v___x_5956_ = 0;
v___x_5961_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5937_, v___x_5954_);
if (lean_obj_tag(v___x_5961_) == 0)
{
lean_object* v_a_5962_; lean_object* v___x_5964_; 
v_a_5962_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5962_);
lean_dec_ref_known(v___x_5961_, 1);
if (v_isShared_5952_ == 0)
{
lean_ctor_set(v___x_5951_, 0, v_a_5962_);
v___x_5964_ = v___x_5951_;
goto v_reusejp_5963_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_a_5962_);
v___x_5964_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5963_;
}
v_reusejp_5963_:
{
v_val_5958_ = v___x_5964_;
goto v___jp_5957_;
}
}
else
{
lean_object* v_a_5966_; lean_object* v___x_5968_; 
v_a_5966_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5966_);
lean_dec_ref_known(v___x_5961_, 1);
if (v_isShared_5952_ == 0)
{
lean_ctor_set_tag(v___x_5951_, 0);
lean_ctor_set(v___x_5951_, 0, v_a_5966_);
v___x_5968_ = v___x_5951_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5969_; 
v_reuseFailAlloc_5969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5969_, 0, v_a_5966_);
v___x_5968_ = v_reuseFailAlloc_5969_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
v_val_5958_ = v___x_5968_;
goto v___jp_5957_;
}
}
v___jp_5957_:
{
lean_object* v___x_5959_; lean_object* v___x_5960_; 
v___x_5959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5959_, 0, v_val_5958_);
v___x_5960_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5955_, v___x_5956_, v___x_5959_, v___f_5953_);
return v___x_5960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5971_, lean_object* v_a_5972_, lean_object* v_x_5973_, lean_object* v___y_5974_){
_start:
{
lean_object* v_res_5975_; 
v_res_5975_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5971_, v_a_5972_, v_x_5973_);
return v_res_5975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_headers_5979_){
_start:
{
lean_object* v___x_5981_; lean_object* v___f_5982_; lean_object* v___f_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; uint8_t v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
v___x_5981_ = lean_box(v___y_5976_);
v___f_5982_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5982_, 0, v___x_5981_);
lean_closure_set(v___f_5982_, 1, v_headers_5979_);
v___f_5983_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5983_, 0, v___f_5982_);
lean_closure_set(v___f_5983_, 1, v_a_5977_);
v___x_5984_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5985_ = lean_unsigned_to_nat(0u);
v___x_5986_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5987_ = 0;
v___x_5988_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5978_, v___x_5984_, v___x_5986_);
v___x_5989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5985_, v___x_5987_, v___x_5988_, v___f_5983_);
return v___x_5989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5990_, lean_object* v_a_5991_, lean_object* v_a_5992_, lean_object* v_headers_5993_, lean_object* v___y_5994_){
_start:
{
uint16_t v___y_3061__boxed_5995_; lean_object* v_res_5996_; 
v___y_3061__boxed_5995_ = lean_unbox(v___y_5990_);
v_res_5996_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5995_, v_a_5991_, v_a_5992_, v_headers_5993_);
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5997_, lean_object* v_x_5998_){
_start:
{
if (lean_obj_tag(v_x_5998_) == 0)
{
lean_object* v_a_6000_; lean_object* v___x_6002_; uint8_t v_isShared_6003_; uint8_t v_isSharedCheck_6008_; 
lean_dec_ref(v___f_5997_);
v_a_6000_ = lean_ctor_get(v_x_5998_, 0);
v_isSharedCheck_6008_ = !lean_is_exclusive(v_x_5998_);
if (v_isSharedCheck_6008_ == 0)
{
v___x_6002_ = v_x_5998_;
v_isShared_6003_ = v_isSharedCheck_6008_;
goto v_resetjp_6001_;
}
else
{
lean_inc(v_a_6000_);
lean_dec(v_x_5998_);
v___x_6002_ = lean_box(0);
v_isShared_6003_ = v_isSharedCheck_6008_;
goto v_resetjp_6001_;
}
v_resetjp_6001_:
{
lean_object* v___x_6005_; 
if (v_isShared_6003_ == 0)
{
v___x_6005_ = v___x_6002_;
goto v_reusejp_6004_;
}
else
{
lean_object* v_reuseFailAlloc_6007_; 
v_reuseFailAlloc_6007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6007_, 0, v_a_6000_);
v___x_6005_ = v_reuseFailAlloc_6007_;
goto v_reusejp_6004_;
}
v_reusejp_6004_:
{
lean_object* v___x_6006_; 
v___x_6006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6006_, 0, v___x_6005_);
return v___x_6006_;
}
}
}
else
{
lean_object* v_a_6009_; lean_object* v___x_6010_; 
v_a_6009_ = lean_ctor_get(v_x_5998_, 0);
lean_inc(v_a_6009_);
lean_dec_ref_known(v_x_5998_, 1);
v___x_6010_ = lean_apply_2(v___f_5997_, v_a_6009_, lean_box(0));
return v___x_6010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_6011_, lean_object* v_x_6012_, lean_object* v___y_6013_){
_start:
{
lean_object* v_res_6014_; 
v_res_6014_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_6011_, v_x_6012_);
return v_res_6014_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_6015_, lean_object* v___f_6016_, lean_object* v_x_6017_){
_start:
{
if (lean_obj_tag(v_x_6017_) == 0)
{
lean_object* v_a_6019_; lean_object* v___x_6021_; uint8_t v_isShared_6022_; uint8_t v_isSharedCheck_6027_; 
lean_dec_ref(v___f_6016_);
lean_dec(v_value_6015_);
v_a_6019_ = lean_ctor_get(v_x_6017_, 0);
v_isSharedCheck_6027_ = !lean_is_exclusive(v_x_6017_);
if (v_isSharedCheck_6027_ == 0)
{
v___x_6021_ = v_x_6017_;
v_isShared_6022_ = v_isSharedCheck_6027_;
goto v_resetjp_6020_;
}
else
{
lean_inc(v_a_6019_);
lean_dec(v_x_6017_);
v___x_6021_ = lean_box(0);
v_isShared_6022_ = v_isSharedCheck_6027_;
goto v_resetjp_6020_;
}
v_resetjp_6020_:
{
lean_object* v___x_6024_; 
if (v_isShared_6022_ == 0)
{
v___x_6024_ = v___x_6021_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6026_; 
v_reuseFailAlloc_6026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6026_, 0, v_a_6019_);
v___x_6024_ = v_reuseFailAlloc_6026_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
lean_object* v___x_6025_; 
v___x_6025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6025_, 0, v___x_6024_);
return v___x_6025_;
}
}
}
else
{
lean_object* v_a_6028_; lean_object* v___x_6030_; uint8_t v_isShared_6031_; uint8_t v_isSharedCheck_6053_; 
v_a_6028_ = lean_ctor_get(v_x_6017_, 0);
v_isSharedCheck_6053_ = !lean_is_exclusive(v_x_6017_);
if (v_isSharedCheck_6053_ == 0)
{
v___x_6030_ = v_x_6017_;
v_isShared_6031_ = v_isSharedCheck_6053_;
goto v_resetjp_6029_;
}
else
{
lean_inc(v_a_6028_);
lean_dec(v_x_6017_);
v___x_6030_ = lean_box(0);
v_isShared_6031_ = v_isSharedCheck_6053_;
goto v_resetjp_6029_;
}
v_resetjp_6029_:
{
lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; uint8_t v___x_6039_; lean_object* v_val_6041_; lean_object* v___x_6044_; 
v___x_6032_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_6033_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6034_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6034_, 0, v_value_6015_);
lean_ctor_set(v___x_6034_, 1, v___x_6033_);
v___x_6035_ = lean_unsigned_to_nat(1u);
v___x_6036_ = lean_mk_empty_array_with_capacity(v___x_6035_);
v___x_6037_ = lean_array_push(v___x_6036_, v___x_6034_);
v___x_6038_ = lean_unsigned_to_nat(0u);
v___x_6039_ = 0;
v___x_6044_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_6028_, v___x_6032_, v___x_6037_);
if (lean_obj_tag(v___x_6044_) == 0)
{
lean_object* v_a_6045_; lean_object* v___x_6047_; 
v_a_6045_ = lean_ctor_get(v___x_6044_, 0);
lean_inc(v_a_6045_);
lean_dec_ref_known(v___x_6044_, 1);
if (v_isShared_6031_ == 0)
{
lean_ctor_set(v___x_6030_, 0, v_a_6045_);
v___x_6047_ = v___x_6030_;
goto v_reusejp_6046_;
}
else
{
lean_object* v_reuseFailAlloc_6048_; 
v_reuseFailAlloc_6048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6048_, 0, v_a_6045_);
v___x_6047_ = v_reuseFailAlloc_6048_;
goto v_reusejp_6046_;
}
v_reusejp_6046_:
{
v_val_6041_ = v___x_6047_;
goto v___jp_6040_;
}
}
else
{
lean_object* v_a_6049_; lean_object* v___x_6051_; 
v_a_6049_ = lean_ctor_get(v___x_6044_, 0);
lean_inc(v_a_6049_);
lean_dec_ref_known(v___x_6044_, 1);
if (v_isShared_6031_ == 0)
{
lean_ctor_set_tag(v___x_6030_, 0);
lean_ctor_set(v___x_6030_, 0, v_a_6049_);
v___x_6051_ = v___x_6030_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6052_; 
v_reuseFailAlloc_6052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6052_, 0, v_a_6049_);
v___x_6051_ = v_reuseFailAlloc_6052_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
v_val_6041_ = v___x_6051_;
goto v___jp_6040_;
}
}
v___jp_6040_:
{
lean_object* v___x_6042_; lean_object* v___x_6043_; 
v___x_6042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6042_, 0, v_val_6041_);
v___x_6043_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6038_, v___x_6039_, v___x_6042_, v___f_6016_);
return v___x_6043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_6054_, lean_object* v___f_6055_, lean_object* v_x_6056_, lean_object* v___y_6057_){
_start:
{
lean_object* v_res_6058_; 
v_res_6058_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_6054_, v___f_6055_, v_x_6056_);
return v_res_6058_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_6063_, lean_object* v_a_6064_, lean_object* v___x_6065_, lean_object* v___x_6066_, lean_object* v_x_6067_){
_start:
{
lean_object* v___y_6070_; lean_object* v___y_6071_; uint8_t v___y_6072_; lean_object* v_val_6073_; 
if (lean_obj_tag(v_x_6067_) == 0)
{
lean_object* v_a_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6084_; 
lean_dec(v_a_6064_);
lean_dec(v_a_6063_);
v_a_6076_ = lean_ctor_get(v_x_6067_, 0);
v_isSharedCheck_6084_ = !lean_is_exclusive(v_x_6067_);
if (v_isSharedCheck_6084_ == 0)
{
v___x_6078_ = v_x_6067_;
v_isShared_6079_ = v_isSharedCheck_6084_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_a_6076_);
lean_dec(v_x_6067_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6084_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6081_; 
if (v_isShared_6079_ == 0)
{
v___x_6081_ = v___x_6078_;
goto v_reusejp_6080_;
}
else
{
lean_object* v_reuseFailAlloc_6083_; 
v_reuseFailAlloc_6083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6083_, 0, v_a_6076_);
v___x_6081_ = v_reuseFailAlloc_6083_;
goto v_reusejp_6080_;
}
v_reusejp_6080_:
{
lean_object* v___x_6082_; 
v___x_6082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6082_, 0, v___x_6081_);
return v___x_6082_;
}
}
}
else
{
lean_object* v_a_6085_; lean_object* v___x_6087_; uint8_t v_isShared_6088_; uint8_t v_isSharedCheck_6118_; 
v_a_6085_ = lean_ctor_get(v_x_6067_, 0);
v_isSharedCheck_6118_ = !lean_is_exclusive(v_x_6067_);
if (v_isSharedCheck_6118_ == 0)
{
v___x_6087_ = v_x_6067_;
v_isShared_6088_ = v_isSharedCheck_6118_;
goto v_resetjp_6086_;
}
else
{
lean_inc(v_a_6085_);
lean_dec(v_x_6067_);
v___x_6087_ = lean_box(0);
v_isShared_6088_ = v_isSharedCheck_6118_;
goto v_resetjp_6086_;
}
v_resetjp_6086_:
{
uint16_t v___y_6090_; lean_object* v___x_6114_; 
v___x_6114_ = l_Lasm_JS_Data_field(v_a_6085_, v___x_6066_);
if (lean_obj_tag(v___x_6114_) == 3)
{
double v_n_6115_; uint16_t v___x_6116_; 
v_n_6115_ = lean_ctor_get_float(v___x_6114_, 0);
lean_dec_ref_known(v___x_6114_, 0);
v___x_6116_ = lean_float_to_uint16(v_n_6115_);
v___y_6090_ = v___x_6116_;
goto v___jp_6089_;
}
else
{
uint16_t v___x_6117_; 
lean_dec(v___x_6114_);
v___x_6117_ = 0;
v___y_6090_ = v___x_6117_;
goto v___jp_6089_;
}
v___jp_6089_:
{
lean_object* v___x_6091_; lean_object* v___f_6092_; lean_object* v___x_6093_; 
v___x_6091_ = lean_box(v___y_6090_);
lean_inc(v_a_6063_);
v___f_6092_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_6092_, 0, v___x_6091_);
lean_closure_set(v___f_6092_, 1, v_a_6063_);
lean_closure_set(v___f_6092_, 2, v_a_6064_);
v___x_6093_ = l_Lasm_JS_Data_field(v_a_6085_, v___x_6065_);
lean_dec(v_a_6085_);
if (lean_obj_tag(v___x_6093_) == 9)
{
lean_object* v_value_6094_; lean_object* v___f_6095_; lean_object* v___f_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; uint8_t v___x_6099_; lean_object* v___x_6100_; 
v_value_6094_ = lean_ctor_get(v___x_6093_, 0);
lean_inc(v_value_6094_);
lean_dec_ref_known(v___x_6093_, 2);
v___f_6095_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6095_, 0, v___f_6092_);
v___f_6096_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_6096_, 0, v_value_6094_);
lean_closure_set(v___f_6096_, 1, v___f_6095_);
v___x_6097_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_6098_ = lean_unsigned_to_nat(0u);
v___x_6099_ = 0;
v___x_6100_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6063_, v___x_6097_);
if (lean_obj_tag(v___x_6100_) == 0)
{
lean_object* v_a_6101_; lean_object* v___x_6103_; 
v_a_6101_ = lean_ctor_get(v___x_6100_, 0);
lean_inc(v_a_6101_);
lean_dec_ref_known(v___x_6100_, 1);
if (v_isShared_6088_ == 0)
{
lean_ctor_set(v___x_6087_, 0, v_a_6101_);
v___x_6103_ = v___x_6087_;
goto v_reusejp_6102_;
}
else
{
lean_object* v_reuseFailAlloc_6104_; 
v_reuseFailAlloc_6104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6104_, 0, v_a_6101_);
v___x_6103_ = v_reuseFailAlloc_6104_;
goto v_reusejp_6102_;
}
v_reusejp_6102_:
{
v___y_6070_ = v___f_6096_;
v___y_6071_ = v___x_6098_;
v___y_6072_ = v___x_6099_;
v_val_6073_ = v___x_6103_;
goto v___jp_6069_;
}
}
else
{
lean_object* v_a_6105_; lean_object* v___x_6107_; 
v_a_6105_ = lean_ctor_get(v___x_6100_, 0);
lean_inc(v_a_6105_);
lean_dec_ref_known(v___x_6100_, 1);
if (v_isShared_6088_ == 0)
{
lean_ctor_set_tag(v___x_6087_, 0);
lean_ctor_set(v___x_6087_, 0, v_a_6105_);
v___x_6107_ = v___x_6087_;
goto v_reusejp_6106_;
}
else
{
lean_object* v_reuseFailAlloc_6108_; 
v_reuseFailAlloc_6108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6108_, 0, v_a_6105_);
v___x_6107_ = v_reuseFailAlloc_6108_;
goto v_reusejp_6106_;
}
v_reusejp_6106_:
{
v___y_6070_ = v___f_6096_;
v___y_6071_ = v___x_6098_;
v___y_6072_ = v___x_6099_;
v_val_6073_ = v___x_6107_;
goto v___jp_6069_;
}
}
}
else
{
lean_object* v___f_6109_; lean_object* v___x_6110_; uint8_t v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; 
lean_dec(v___x_6093_);
lean_del_object(v___x_6087_);
lean_dec(v_a_6063_);
v___f_6109_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6109_, 0, v___f_6092_);
v___x_6110_ = lean_unsigned_to_nat(0u);
v___x_6111_ = 0;
v___x_6112_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_6113_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6110_, v___x_6111_, v___x_6112_, v___f_6109_);
return v___x_6113_;
}
}
}
}
v___jp_6069_:
{
lean_object* v___x_6074_; lean_object* v___x_6075_; 
v___x_6074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6074_, 0, v_val_6073_);
v___x_6075_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6071_, v___y_6072_, v___x_6074_, v___y_6070_);
return v___x_6075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_6119_, lean_object* v_a_6120_, lean_object* v___x_6121_, lean_object* v___x_6122_, lean_object* v_x_6123_, lean_object* v___y_6124_){
_start:
{
lean_object* v_res_6125_; 
v_res_6125_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_6119_, v_a_6120_, v___x_6121_, v___x_6122_, v_x_6123_);
lean_dec_ref(v___x_6122_);
lean_dec_ref(v___x_6121_);
return v_res_6125_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v___x_6126_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_6127_ = lean_unsigned_to_nat(2u);
v___x_6128_ = lean_mk_empty_array_with_capacity(v___x_6127_);
v___x_6129_ = lean_array_push(v___x_6128_, v___x_6126_);
return v___x_6129_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_6130_, lean_object* v___x_6131_, lean_object* v_x_6132_){
_start:
{
if (lean_obj_tag(v_x_6132_) == 0)
{
lean_object* v_a_6134_; lean_object* v___x_6136_; uint8_t v_isShared_6137_; uint8_t v_isSharedCheck_6142_; 
lean_dec_ref(v___x_6131_);
lean_dec(v_a_6130_);
v_a_6134_ = lean_ctor_get(v_x_6132_, 0);
v_isSharedCheck_6142_ = !lean_is_exclusive(v_x_6132_);
if (v_isSharedCheck_6142_ == 0)
{
v___x_6136_ = v_x_6132_;
v_isShared_6137_ = v_isSharedCheck_6142_;
goto v_resetjp_6135_;
}
else
{
lean_inc(v_a_6134_);
lean_dec(v_x_6132_);
v___x_6136_ = lean_box(0);
v_isShared_6137_ = v_isSharedCheck_6142_;
goto v_resetjp_6135_;
}
v_resetjp_6135_:
{
lean_object* v___x_6139_; 
if (v_isShared_6137_ == 0)
{
v___x_6139_ = v___x_6136_;
goto v_reusejp_6138_;
}
else
{
lean_object* v_reuseFailAlloc_6141_; 
v_reuseFailAlloc_6141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6141_, 0, v_a_6134_);
v___x_6139_ = v_reuseFailAlloc_6141_;
goto v_reusejp_6138_;
}
v_reusejp_6138_:
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6139_);
return v___x_6140_;
}
}
}
else
{
lean_object* v_a_6143_; lean_object* v___x_6145_; uint8_t v_isShared_6146_; uint8_t v_isSharedCheck_6166_; 
v_a_6143_ = lean_ctor_get(v_x_6132_, 0);
v_isSharedCheck_6166_ = !lean_is_exclusive(v_x_6132_);
if (v_isSharedCheck_6166_ == 0)
{
v___x_6145_ = v_x_6132_;
v_isShared_6146_ = v_isSharedCheck_6166_;
goto v_resetjp_6144_;
}
else
{
lean_inc(v_a_6143_);
lean_dec(v_x_6132_);
v___x_6145_ = lean_box(0);
v_isShared_6146_ = v_isSharedCheck_6166_;
goto v_resetjp_6144_;
}
v_resetjp_6144_:
{
lean_object* v___x_6147_; lean_object* v___f_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; uint8_t v___x_6152_; lean_object* v_val_6154_; lean_object* v___x_6157_; 
v___x_6147_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_6131_);
lean_inc(v_a_6143_);
v___f_6148_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_6148_, 0, v_a_6130_);
lean_closure_set(v___f_6148_, 1, v_a_6143_);
lean_closure_set(v___f_6148_, 2, v___x_6131_);
lean_closure_set(v___f_6148_, 3, v___x_6147_);
v___x_6149_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_6150_ = lean_array_push(v___x_6149_, v___x_6131_);
v___x_6151_ = lean_unsigned_to_nat(0u);
v___x_6152_ = 0;
v___x_6157_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_6143_, v___x_6150_);
if (lean_obj_tag(v___x_6157_) == 0)
{
lean_object* v_a_6158_; lean_object* v___x_6160_; 
v_a_6158_ = lean_ctor_get(v___x_6157_, 0);
lean_inc(v_a_6158_);
lean_dec_ref_known(v___x_6157_, 1);
if (v_isShared_6146_ == 0)
{
lean_ctor_set(v___x_6145_, 0, v_a_6158_);
v___x_6160_ = v___x_6145_;
goto v_reusejp_6159_;
}
else
{
lean_object* v_reuseFailAlloc_6161_; 
v_reuseFailAlloc_6161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6161_, 0, v_a_6158_);
v___x_6160_ = v_reuseFailAlloc_6161_;
goto v_reusejp_6159_;
}
v_reusejp_6159_:
{
v_val_6154_ = v___x_6160_;
goto v___jp_6153_;
}
}
else
{
lean_object* v_a_6162_; lean_object* v___x_6164_; 
v_a_6162_ = lean_ctor_get(v___x_6157_, 0);
lean_inc(v_a_6162_);
lean_dec_ref_known(v___x_6157_, 1);
if (v_isShared_6146_ == 0)
{
lean_ctor_set_tag(v___x_6145_, 0);
lean_ctor_set(v___x_6145_, 0, v_a_6162_);
v___x_6164_ = v___x_6145_;
goto v_reusejp_6163_;
}
else
{
lean_object* v_reuseFailAlloc_6165_; 
v_reuseFailAlloc_6165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6165_, 0, v_a_6162_);
v___x_6164_ = v_reuseFailAlloc_6165_;
goto v_reusejp_6163_;
}
v_reusejp_6163_:
{
v_val_6154_ = v___x_6164_;
goto v___jp_6153_;
}
}
v___jp_6153_:
{
lean_object* v___x_6155_; lean_object* v___x_6156_; 
v___x_6155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6155_, 0, v_val_6154_);
v___x_6156_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6151_, v___x_6152_, v___x_6155_, v___f_6148_);
return v___x_6156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6167_, lean_object* v___x_6168_, lean_object* v_x_6169_, lean_object* v___y_6170_){
_start:
{
lean_object* v_res_6171_; 
v_res_6171_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6167_, v___x_6168_, v_x_6169_);
return v_res_6171_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6173_; uint8_t v___x_6174_; uint64_t v___x_6175_; 
v___x_6173_ = 0ULL;
v___x_6174_ = 0;
v___x_6175_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6174_, v___x_6173_);
return v___x_6175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6176_, lean_object* v_args_6177_, lean_object* v_this_6178_){
_start:
{
lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; uint32_t v___x_6183_; uint64_t v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; 
v___x_6180_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6181_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6181_, 0, v_f_6176_);
lean_ctor_set(v___x_6181_, 1, v___x_6180_);
v___x_6182_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6183_ = 205;
v___x_6184_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6185_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6185_, 0, v_args_6177_);
v___x_6186_ = lean_unsigned_to_nat(3u);
v___x_6187_ = lean_mk_empty_array_with_capacity(v___x_6186_);
v___x_6188_ = lean_array_push(v___x_6187_, v___x_6181_);
v___x_6189_ = lean_array_push(v___x_6188_, v_this_6178_);
v___x_6190_ = lean_array_push(v___x_6189_, v___x_6185_);
v___x_6191_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6191_, 0, v___x_6190_);
v___x_6192_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6182_, v___x_6183_, v___x_6184_, v___x_6191_, v___x_6180_);
return v___x_6192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6193_, lean_object* v_args_6194_, lean_object* v_this_6195_, lean_object* v___y_6196_){
_start:
{
lean_object* v_res_6197_; 
v_res_6197_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6193_, v_args_6194_, v_this_6195_);
return v_res_6197_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6208_, lean_object* v_a_6209_, lean_object* v_x_6210_){
_start:
{
if (lean_obj_tag(v_x_6210_) == 0)
{
lean_object* v_a_6212_; lean_object* v___x_6214_; uint8_t v_isShared_6215_; uint8_t v_isSharedCheck_6220_; 
lean_dec(v_a_6209_);
lean_dec_ref(v_req_6208_);
v_a_6212_ = lean_ctor_get(v_x_6210_, 0);
v_isSharedCheck_6220_ = !lean_is_exclusive(v_x_6210_);
if (v_isSharedCheck_6220_ == 0)
{
v___x_6214_ = v_x_6210_;
v_isShared_6215_ = v_isSharedCheck_6220_;
goto v_resetjp_6213_;
}
else
{
lean_inc(v_a_6212_);
lean_dec(v_x_6210_);
v___x_6214_ = lean_box(0);
v_isShared_6215_ = v_isSharedCheck_6220_;
goto v_resetjp_6213_;
}
v_resetjp_6213_:
{
lean_object* v___x_6217_; 
if (v_isShared_6215_ == 0)
{
v___x_6217_ = v___x_6214_;
goto v_reusejp_6216_;
}
else
{
lean_object* v_reuseFailAlloc_6219_; 
v_reuseFailAlloc_6219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6219_, 0, v_a_6212_);
v___x_6217_ = v_reuseFailAlloc_6219_;
goto v_reusejp_6216_;
}
v_reusejp_6216_:
{
lean_object* v___x_6218_; 
v___x_6218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6218_, 0, v___x_6217_);
return v___x_6218_;
}
}
}
else
{
lean_object* v_a_6221_; lean_object* v_method_6222_; lean_object* v_url_6223_; lean_object* v_headers_6224_; lean_object* v_body_6225_; lean_object* v___y_6227_; lean_object* v___x_6257_; uint8_t v___x_6258_; 
v_a_6221_ = lean_ctor_get(v_x_6210_, 0);
lean_inc(v_a_6221_);
lean_dec_ref_known(v_x_6210_, 1);
v_method_6222_ = lean_ctor_get(v_req_6208_, 0);
lean_inc_ref(v_method_6222_);
v_url_6223_ = lean_ctor_get(v_req_6208_, 1);
lean_inc_ref(v_url_6223_);
v_headers_6224_ = lean_ctor_get(v_req_6208_, 2);
lean_inc_ref(v_headers_6224_);
v_body_6225_ = lean_ctor_get(v_req_6208_, 3);
lean_inc_ref(v_body_6225_);
lean_dec_ref(v_req_6208_);
v___x_6257_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6258_ = lean_string_dec_eq(v_method_6222_, v___x_6257_);
if (v___x_6258_ == 0)
{
lean_object* v___x_6259_; uint8_t v___x_6260_; 
v___x_6259_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6260_ = lean_string_dec_eq(v_method_6222_, v___x_6259_);
if (v___x_6260_ == 0)
{
lean_object* v___x_6261_; 
v___x_6261_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6261_, 0, v_body_6225_);
v___y_6227_ = v___x_6261_;
goto v___jp_6226_;
}
else
{
lean_dec_ref(v_body_6225_);
goto v___jp_6255_;
}
}
else
{
lean_dec_ref(v_body_6225_);
goto v___jp_6255_;
}
v___jp_6226_:
{
lean_object* v___x_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___f_6232_; size_t v_sz_6233_; size_t v___x_6234_; lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; lean_object* v___x_6241_; lean_object* v___x_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; uint8_t v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; 
v___x_6228_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6229_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6229_, 0, v_method_6222_);
v___x_6230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6230_, 0, v___x_6228_);
lean_ctor_set(v___x_6230_, 1, v___x_6229_);
v___x_6231_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6232_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6232_, 0, v_a_6209_);
lean_closure_set(v___f_6232_, 1, v___x_6231_);
v_sz_6233_ = lean_array_size(v_headers_6224_);
v___x_6234_ = ((size_t)0ULL);
v___x_6235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6233_, v___x_6234_, v_headers_6224_);
v___x_6236_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6236_, 0, v___x_6235_);
v___x_6237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6237_, 0, v___x_6231_);
lean_ctor_set(v___x_6237_, 1, v___x_6236_);
v___x_6238_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6239_, 0, v___x_6238_);
lean_ctor_set(v___x_6239_, 1, v___y_6227_);
v___x_6240_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6241_, 0, v___x_6239_);
lean_ctor_set(v___x_6241_, 1, v___x_6240_);
v___x_6242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6242_, 0, v___x_6237_);
lean_ctor_set(v___x_6242_, 1, v___x_6241_);
v___x_6243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6243_, 0, v___x_6230_);
lean_ctor_set(v___x_6243_, 1, v___x_6242_);
v___x_6244_ = l_Lasm_JS_obj(v___x_6243_);
v___x_6245_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6245_, 0, v_url_6223_);
v___x_6246_ = lean_unsigned_to_nat(2u);
v___x_6247_ = lean_mk_empty_array_with_capacity(v___x_6246_);
v___x_6248_ = lean_array_push(v___x_6247_, v___x_6245_);
v___x_6249_ = lean_array_push(v___x_6248_, v___x_6244_);
v___x_6250_ = lean_box(0);
v___x_6251_ = lean_unsigned_to_nat(0u);
v___x_6252_ = 0;
v___x_6253_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6221_, v___x_6249_, v___x_6250_);
v___x_6254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6251_, v___x_6252_, v___x_6253_, v___f_6232_);
return v___x_6254_;
}
v___jp_6255_:
{
lean_object* v___x_6256_; 
v___x_6256_ = lean_box(0);
v___y_6227_ = v___x_6256_;
goto v___jp_6226_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6262_, lean_object* v_a_6263_, lean_object* v_x_6264_, lean_object* v___y_6265_){
_start:
{
lean_object* v_res_6266_; 
v_res_6266_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6262_, v_a_6263_, v_x_6264_);
return v_res_6266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6268_, lean_object* v_x_6269_){
_start:
{
if (lean_obj_tag(v_x_6269_) == 0)
{
lean_object* v_a_6271_; lean_object* v___x_6273_; uint8_t v_isShared_6274_; uint8_t v_isSharedCheck_6279_; 
lean_dec_ref(v_req_6268_);
v_a_6271_ = lean_ctor_get(v_x_6269_, 0);
v_isSharedCheck_6279_ = !lean_is_exclusive(v_x_6269_);
if (v_isSharedCheck_6279_ == 0)
{
v___x_6273_ = v_x_6269_;
v_isShared_6274_ = v_isSharedCheck_6279_;
goto v_resetjp_6272_;
}
else
{
lean_inc(v_a_6271_);
lean_dec(v_x_6269_);
v___x_6273_ = lean_box(0);
v_isShared_6274_ = v_isSharedCheck_6279_;
goto v_resetjp_6272_;
}
v_resetjp_6272_:
{
lean_object* v___x_6276_; 
if (v_isShared_6274_ == 0)
{
v___x_6276_ = v___x_6273_;
goto v_reusejp_6275_;
}
else
{
lean_object* v_reuseFailAlloc_6278_; 
v_reuseFailAlloc_6278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6278_, 0, v_a_6271_);
v___x_6276_ = v_reuseFailAlloc_6278_;
goto v_reusejp_6275_;
}
v_reusejp_6275_:
{
lean_object* v___x_6277_; 
v___x_6277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6277_, 0, v___x_6276_);
return v___x_6277_;
}
}
}
else
{
lean_object* v_a_6280_; lean_object* v___x_6282_; uint8_t v_isShared_6283_; uint8_t v_isSharedCheck_6301_; 
v_a_6280_ = lean_ctor_get(v_x_6269_, 0);
v_isSharedCheck_6301_ = !lean_is_exclusive(v_x_6269_);
if (v_isSharedCheck_6301_ == 0)
{
v___x_6282_ = v_x_6269_;
v_isShared_6283_ = v_isSharedCheck_6301_;
goto v_resetjp_6281_;
}
else
{
lean_inc(v_a_6280_);
lean_dec(v_x_6269_);
v___x_6282_ = lean_box(0);
v_isShared_6283_ = v_isSharedCheck_6301_;
goto v_resetjp_6281_;
}
v_resetjp_6281_:
{
lean_object* v___f_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; uint8_t v___x_6287_; lean_object* v_val_6289_; lean_object* v___x_6292_; 
lean_inc(v_a_6280_);
v___f_6284_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6284_, 0, v_req_6268_);
lean_closure_set(v___f_6284_, 1, v_a_6280_);
v___x_6285_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6286_ = lean_unsigned_to_nat(0u);
v___x_6287_ = 0;
v___x_6292_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6280_, v___x_6285_);
if (lean_obj_tag(v___x_6292_) == 0)
{
lean_object* v_a_6293_; lean_object* v___x_6295_; 
v_a_6293_ = lean_ctor_get(v___x_6292_, 0);
lean_inc(v_a_6293_);
lean_dec_ref_known(v___x_6292_, 1);
if (v_isShared_6283_ == 0)
{
lean_ctor_set(v___x_6282_, 0, v_a_6293_);
v___x_6295_ = v___x_6282_;
goto v_reusejp_6294_;
}
else
{
lean_object* v_reuseFailAlloc_6296_; 
v_reuseFailAlloc_6296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6296_, 0, v_a_6293_);
v___x_6295_ = v_reuseFailAlloc_6296_;
goto v_reusejp_6294_;
}
v_reusejp_6294_:
{
v_val_6289_ = v___x_6295_;
goto v___jp_6288_;
}
}
else
{
lean_object* v_a_6297_; lean_object* v___x_6299_; 
v_a_6297_ = lean_ctor_get(v___x_6292_, 0);
lean_inc(v_a_6297_);
lean_dec_ref_known(v___x_6292_, 1);
if (v_isShared_6283_ == 0)
{
lean_ctor_set_tag(v___x_6282_, 0);
lean_ctor_set(v___x_6282_, 0, v_a_6297_);
v___x_6299_ = v___x_6282_;
goto v_reusejp_6298_;
}
else
{
lean_object* v_reuseFailAlloc_6300_; 
v_reuseFailAlloc_6300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6300_, 0, v_a_6297_);
v___x_6299_ = v_reuseFailAlloc_6300_;
goto v_reusejp_6298_;
}
v_reusejp_6298_:
{
v_val_6289_ = v___x_6299_;
goto v___jp_6288_;
}
}
v___jp_6288_:
{
lean_object* v___x_6290_; lean_object* v___x_6291_; 
v___x_6290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6290_, 0, v_val_6289_);
v___x_6291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6286_, v___x_6287_, v___x_6290_, v___f_6284_);
return v___x_6291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6302_, lean_object* v_x_6303_, lean_object* v___y_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6302_, v_x_6303_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6306_){
_start:
{
lean_object* v___f_6308_; lean_object* v___x_6309_; uint8_t v___x_6310_; lean_object* v_val_6312_; lean_object* v___x_6315_; 
v___f_6308_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6308_, 0, v_req_6306_);
v___x_6309_ = lean_unsigned_to_nat(0u);
v___x_6310_ = 0;
v___x_6315_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6315_) == 0)
{
lean_object* v_a_6316_; lean_object* v___x_6318_; uint8_t v_isShared_6319_; uint8_t v_isSharedCheck_6323_; 
v_a_6316_ = lean_ctor_get(v___x_6315_, 0);
v_isSharedCheck_6323_ = !lean_is_exclusive(v___x_6315_);
if (v_isSharedCheck_6323_ == 0)
{
v___x_6318_ = v___x_6315_;
v_isShared_6319_ = v_isSharedCheck_6323_;
goto v_resetjp_6317_;
}
else
{
lean_inc(v_a_6316_);
lean_dec(v___x_6315_);
v___x_6318_ = lean_box(0);
v_isShared_6319_ = v_isSharedCheck_6323_;
goto v_resetjp_6317_;
}
v_resetjp_6317_:
{
lean_object* v___x_6321_; 
if (v_isShared_6319_ == 0)
{
lean_ctor_set_tag(v___x_6318_, 1);
v___x_6321_ = v___x_6318_;
goto v_reusejp_6320_;
}
else
{
lean_object* v_reuseFailAlloc_6322_; 
v_reuseFailAlloc_6322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6322_, 0, v_a_6316_);
v___x_6321_ = v_reuseFailAlloc_6322_;
goto v_reusejp_6320_;
}
v_reusejp_6320_:
{
v_val_6312_ = v___x_6321_;
goto v___jp_6311_;
}
}
}
else
{
lean_object* v_a_6324_; lean_object* v___x_6326_; uint8_t v_isShared_6327_; uint8_t v_isSharedCheck_6331_; 
v_a_6324_ = lean_ctor_get(v___x_6315_, 0);
v_isSharedCheck_6331_ = !lean_is_exclusive(v___x_6315_);
if (v_isSharedCheck_6331_ == 0)
{
v___x_6326_ = v___x_6315_;
v_isShared_6327_ = v_isSharedCheck_6331_;
goto v_resetjp_6325_;
}
else
{
lean_inc(v_a_6324_);
lean_dec(v___x_6315_);
v___x_6326_ = lean_box(0);
v_isShared_6327_ = v_isSharedCheck_6331_;
goto v_resetjp_6325_;
}
v_resetjp_6325_:
{
lean_object* v___x_6329_; 
if (v_isShared_6327_ == 0)
{
lean_ctor_set_tag(v___x_6326_, 0);
v___x_6329_ = v___x_6326_;
goto v_reusejp_6328_;
}
else
{
lean_object* v_reuseFailAlloc_6330_; 
v_reuseFailAlloc_6330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6330_, 0, v_a_6324_);
v___x_6329_ = v_reuseFailAlloc_6330_;
goto v_reusejp_6328_;
}
v_reusejp_6328_:
{
v_val_6312_ = v___x_6329_;
goto v___jp_6311_;
}
}
}
v___jp_6311_:
{
lean_object* v___x_6313_; lean_object* v___x_6314_; 
v___x_6313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6313_, 0, v_val_6312_);
v___x_6314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6309_, v___x_6310_, v___x_6313_, v___f_6308_);
return v___x_6314_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6332_, lean_object* v_a_6333_){
_start:
{
lean_object* v_res_6334_; 
v_res_6334_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6332_);
return v_res_6334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6335_){
_start:
{
if (lean_obj_tag(v_x_6335_) == 0)
{
lean_object* v_a_6337_; lean_object* v___x_6339_; uint8_t v_isShared_6340_; uint8_t v_isSharedCheck_6345_; 
v_a_6337_ = lean_ctor_get(v_x_6335_, 0);
v_isSharedCheck_6345_ = !lean_is_exclusive(v_x_6335_);
if (v_isSharedCheck_6345_ == 0)
{
v___x_6339_ = v_x_6335_;
v_isShared_6340_ = v_isSharedCheck_6345_;
goto v_resetjp_6338_;
}
else
{
lean_inc(v_a_6337_);
lean_dec(v_x_6335_);
v___x_6339_ = lean_box(0);
v_isShared_6340_ = v_isSharedCheck_6345_;
goto v_resetjp_6338_;
}
v_resetjp_6338_:
{
lean_object* v___x_6342_; 
if (v_isShared_6340_ == 0)
{
v___x_6342_ = v___x_6339_;
goto v_reusejp_6341_;
}
else
{
lean_object* v_reuseFailAlloc_6344_; 
v_reuseFailAlloc_6344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6344_, 0, v_a_6337_);
v___x_6342_ = v_reuseFailAlloc_6344_;
goto v_reusejp_6341_;
}
v_reusejp_6341_:
{
lean_object* v___x_6343_; 
v___x_6343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6343_, 0, v___x_6342_);
return v___x_6343_;
}
}
}
else
{
lean_object* v_a_6346_; lean_object* v___x_6347_; 
v_a_6346_ = lean_ctor_get(v_x_6335_, 0);
lean_inc(v_a_6346_);
lean_dec_ref_known(v_x_6335_, 1);
v___x_6347_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6346_);
lean_dec(v_a_6346_);
if (lean_obj_tag(v___x_6347_) == 0)
{
lean_object* v_a_6348_; lean_object* v___x_6350_; uint8_t v_isShared_6351_; uint8_t v_isSharedCheck_6357_; 
v_a_6348_ = lean_ctor_get(v___x_6347_, 0);
v_isSharedCheck_6357_ = !lean_is_exclusive(v___x_6347_);
if (v_isSharedCheck_6357_ == 0)
{
v___x_6350_ = v___x_6347_;
v_isShared_6351_ = v_isSharedCheck_6357_;
goto v_resetjp_6349_;
}
else
{
lean_inc(v_a_6348_);
lean_dec(v___x_6347_);
v___x_6350_ = lean_box(0);
v_isShared_6351_ = v_isSharedCheck_6357_;
goto v_resetjp_6349_;
}
v_resetjp_6349_:
{
lean_object* v___x_6352_; lean_object* v___x_6354_; 
v___x_6352_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6352_, 0, v_a_6348_);
if (v_isShared_6351_ == 0)
{
lean_ctor_set(v___x_6350_, 0, v___x_6352_);
v___x_6354_ = v___x_6350_;
goto v_reusejp_6353_;
}
else
{
lean_object* v_reuseFailAlloc_6356_; 
v_reuseFailAlloc_6356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6356_, 0, v___x_6352_);
v___x_6354_ = v_reuseFailAlloc_6356_;
goto v_reusejp_6353_;
}
v_reusejp_6353_:
{
lean_object* v___x_6355_; 
v___x_6355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6355_, 0, v___x_6354_);
return v___x_6355_;
}
}
}
else
{
lean_object* v_a_6358_; lean_object* v___x_6360_; uint8_t v_isShared_6361_; uint8_t v_isSharedCheck_6366_; 
v_a_6358_ = lean_ctor_get(v___x_6347_, 0);
v_isSharedCheck_6366_ = !lean_is_exclusive(v___x_6347_);
if (v_isSharedCheck_6366_ == 0)
{
v___x_6360_ = v___x_6347_;
v_isShared_6361_ = v_isSharedCheck_6366_;
goto v_resetjp_6359_;
}
else
{
lean_inc(v_a_6358_);
lean_dec(v___x_6347_);
v___x_6360_ = lean_box(0);
v_isShared_6361_ = v_isSharedCheck_6366_;
goto v_resetjp_6359_;
}
v_resetjp_6359_:
{
lean_object* v___x_6363_; 
if (v_isShared_6361_ == 0)
{
v___x_6363_ = v___x_6360_;
goto v_reusejp_6362_;
}
else
{
lean_object* v_reuseFailAlloc_6365_; 
v_reuseFailAlloc_6365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6365_, 0, v_a_6358_);
v___x_6363_ = v_reuseFailAlloc_6365_;
goto v_reusejp_6362_;
}
v_reusejp_6362_:
{
lean_object* v___x_6364_; 
v___x_6364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6364_, 0, v___x_6363_);
return v___x_6364_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6367_, lean_object* v___y_6368_){
_start:
{
lean_object* v_res_6369_; 
v_res_6369_ = l_Lasm_Fetch_fetch___lam__0(v_x_6367_);
return v_res_6369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6375_){
_start:
{
if (lean_obj_tag(v_x_6375_) == 0)
{
lean_object* v___x_6376_; 
v___x_6376_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6376_;
}
else
{
lean_object* v_val_6377_; 
v_val_6377_ = lean_ctor_get(v_x_6375_, 0);
lean_inc(v_val_6377_);
return v_val_6377_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6378_){
_start:
{
lean_object* v_res_6379_; 
v_res_6379_ = l_Lasm_Fetch_fetch___lam__1(v_x_6378_);
lean_dec(v_x_6378_);
return v_res_6379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6380_, lean_object* v___f_6381_, uint8_t v___x_6382_, lean_object* v___f_6383_, lean_object* v_x_6384_){
_start:
{
if (lean_obj_tag(v_x_6384_) == 0)
{
lean_object* v_a_6386_; lean_object* v___x_6388_; uint8_t v_isShared_6389_; uint8_t v_isSharedCheck_6394_; 
lean_dec_ref(v___f_6383_);
lean_dec_ref(v___f_6381_);
v_a_6386_ = lean_ctor_get(v_x_6384_, 0);
v_isSharedCheck_6394_ = !lean_is_exclusive(v_x_6384_);
if (v_isSharedCheck_6394_ == 0)
{
v___x_6388_ = v_x_6384_;
v_isShared_6389_ = v_isSharedCheck_6394_;
goto v_resetjp_6387_;
}
else
{
lean_inc(v_a_6386_);
lean_dec(v_x_6384_);
v___x_6388_ = lean_box(0);
v_isShared_6389_ = v_isSharedCheck_6394_;
goto v_resetjp_6387_;
}
v_resetjp_6387_:
{
lean_object* v___x_6391_; 
if (v_isShared_6389_ == 0)
{
v___x_6391_ = v___x_6388_;
goto v_reusejp_6390_;
}
else
{
lean_object* v_reuseFailAlloc_6393_; 
v_reuseFailAlloc_6393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6393_, 0, v_a_6386_);
v___x_6391_ = v_reuseFailAlloc_6393_;
goto v_reusejp_6390_;
}
v_reusejp_6390_:
{
lean_object* v___x_6392_; 
v___x_6392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6392_, 0, v___x_6391_);
return v___x_6392_;
}
}
}
else
{
lean_object* v___x_6395_; lean_object* v___x_6396_; uint8_t v___x_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; lean_object* v___x_6400_; 
lean_dec_ref_known(v_x_6384_, 1);
v___x_6395_ = lean_io_promise_result_opt(v_a_6380_);
v___x_6396_ = lean_unsigned_to_nat(0u);
v___x_6397_ = 1;
v___x_6398_ = lean_task_map(v___f_6381_, v___x_6395_, v___x_6396_, v___x_6397_);
v___x_6399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6399_, 0, v___x_6398_);
v___x_6400_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6396_, v___x_6382_, v___x_6399_, v___f_6383_);
return v___x_6400_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6401_, lean_object* v___f_6402_, lean_object* v___x_6403_, lean_object* v___f_6404_, lean_object* v_x_6405_, lean_object* v___y_6406_){
_start:
{
uint8_t v___x_1064__boxed_6407_; lean_object* v_res_6408_; 
v___x_1064__boxed_6407_ = lean_unbox(v___x_6403_);
v_res_6408_ = l_Lasm_Fetch_fetch___lam__2(v_a_6401_, v___f_6402_, v___x_1064__boxed_6407_, v___f_6404_, v_x_6405_);
lean_dec(v_a_6401_);
return v_res_6408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6409_, lean_object* v___f_6410_, uint8_t v___x_6411_, lean_object* v___f_6412_, lean_object* v_options_6413_, lean_object* v_x_6414_){
_start:
{
if (lean_obj_tag(v_x_6414_) == 0)
{
lean_object* v_a_6416_; lean_object* v___x_6418_; uint8_t v_isShared_6419_; uint8_t v_isSharedCheck_6424_; 
lean_dec_ref(v___f_6412_);
lean_dec_ref(v___f_6410_);
v_a_6416_ = lean_ctor_get(v_x_6414_, 0);
v_isSharedCheck_6424_ = !lean_is_exclusive(v_x_6414_);
if (v_isSharedCheck_6424_ == 0)
{
v___x_6418_ = v_x_6414_;
v_isShared_6419_ = v_isSharedCheck_6424_;
goto v_resetjp_6417_;
}
else
{
lean_inc(v_a_6416_);
lean_dec(v_x_6414_);
v___x_6418_ = lean_box(0);
v_isShared_6419_ = v_isSharedCheck_6424_;
goto v_resetjp_6417_;
}
v_resetjp_6417_:
{
lean_object* v___x_6421_; 
if (v_isShared_6419_ == 0)
{
v___x_6421_ = v___x_6418_;
goto v_reusejp_6420_;
}
else
{
lean_object* v_reuseFailAlloc_6423_; 
v_reuseFailAlloc_6423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6423_, 0, v_a_6416_);
v___x_6421_ = v_reuseFailAlloc_6423_;
goto v_reusejp_6420_;
}
v_reusejp_6420_:
{
lean_object* v___x_6422_; 
v___x_6422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6422_, 0, v___x_6421_);
return v___x_6422_;
}
}
}
else
{
lean_object* v_a_6425_; lean_object* v___x_6427_; uint8_t v_isShared_6428_; uint8_t v_isSharedCheck_6455_; 
v_a_6425_ = lean_ctor_get(v_x_6414_, 0);
v_isSharedCheck_6455_ = !lean_is_exclusive(v_x_6414_);
if (v_isSharedCheck_6455_ == 0)
{
v___x_6427_ = v_x_6414_;
v_isShared_6428_ = v_isSharedCheck_6455_;
goto v_resetjp_6426_;
}
else
{
lean_inc(v_a_6425_);
lean_dec(v_x_6414_);
v___x_6427_ = lean_box(0);
v_isShared_6428_ = v_isSharedCheck_6455_;
goto v_resetjp_6426_;
}
v_resetjp_6426_:
{
lean_object* v_method_6429_; lean_object* v_url_6430_; lean_object* v_headers_6431_; lean_object* v_body_6432_; lean_object* v___x_6433_; lean_object* v___f_6434_; uint8_t v___y_6436_; lean_object* v___y_6437_; lean_object* v_val_6438_; lean_object* v___y_6442_; 
v_method_6429_ = lean_ctor_get(v_req_6409_, 0);
v_url_6430_ = lean_ctor_get(v_req_6409_, 1);
v_headers_6431_ = lean_ctor_get(v_req_6409_, 2);
v_body_6432_ = lean_ctor_get(v_req_6409_, 3);
v___x_6433_ = lean_box(v___x_6411_);
lean_inc(v_a_6425_);
v___f_6434_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6434_, 0, v_a_6425_);
lean_closure_set(v___f_6434_, 1, v___f_6410_);
lean_closure_set(v___f_6434_, 2, v___x_6433_);
lean_closure_set(v___f_6434_, 3, v___f_6412_);
if (lean_obj_tag(v_options_6413_) == 0)
{
lean_object* v___x_6453_; 
v___x_6453_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6442_ = v___x_6453_;
goto v___jp_6441_;
}
else
{
lean_object* v_val_6454_; 
v_val_6454_ = lean_ctor_get(v_options_6413_, 0);
v___y_6442_ = v_val_6454_;
goto v___jp_6441_;
}
v___jp_6435_:
{
lean_object* v___x_6439_; lean_object* v___x_6440_; 
v___x_6439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6439_, 0, v_val_6438_);
v___x_6440_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6437_, v___y_6436_, v___x_6439_, v___f_6434_);
return v___x_6440_;
}
v___jp_6441_:
{
lean_object* v___x_6443_; lean_object* v___x_6444_; 
v___x_6443_ = lean_unsigned_to_nat(0u);
v___x_6444_ = lasm_fetch_send(v_a_6425_, v_method_6429_, v_url_6430_, v_headers_6431_, v_body_6432_, v___y_6442_);
lean_dec(v_a_6425_);
if (lean_obj_tag(v___x_6444_) == 0)
{
lean_object* v_a_6445_; lean_object* v___x_6447_; 
v_a_6445_ = lean_ctor_get(v___x_6444_, 0);
lean_inc(v_a_6445_);
lean_dec_ref_known(v___x_6444_, 1);
if (v_isShared_6428_ == 0)
{
lean_ctor_set(v___x_6427_, 0, v_a_6445_);
v___x_6447_ = v___x_6427_;
goto v_reusejp_6446_;
}
else
{
lean_object* v_reuseFailAlloc_6448_; 
v_reuseFailAlloc_6448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6448_, 0, v_a_6445_);
v___x_6447_ = v_reuseFailAlloc_6448_;
goto v_reusejp_6446_;
}
v_reusejp_6446_:
{
v___y_6436_ = v___x_6411_;
v___y_6437_ = v___x_6443_;
v_val_6438_ = v___x_6447_;
goto v___jp_6435_;
}
}
else
{
lean_object* v_a_6449_; lean_object* v___x_6451_; 
v_a_6449_ = lean_ctor_get(v___x_6444_, 0);
lean_inc(v_a_6449_);
lean_dec_ref_known(v___x_6444_, 1);
if (v_isShared_6428_ == 0)
{
lean_ctor_set_tag(v___x_6427_, 0);
lean_ctor_set(v___x_6427_, 0, v_a_6449_);
v___x_6451_ = v___x_6427_;
goto v_reusejp_6450_;
}
else
{
lean_object* v_reuseFailAlloc_6452_; 
v_reuseFailAlloc_6452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6452_, 0, v_a_6449_);
v___x_6451_ = v_reuseFailAlloc_6452_;
goto v_reusejp_6450_;
}
v_reusejp_6450_:
{
v___y_6436_ = v___x_6411_;
v___y_6437_ = v___x_6443_;
v_val_6438_ = v___x_6451_;
goto v___jp_6435_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6456_, lean_object* v___f_6457_, lean_object* v___x_6458_, lean_object* v___f_6459_, lean_object* v_options_6460_, lean_object* v_x_6461_, lean_object* v___y_6462_){
_start:
{
uint8_t v___x_1113__boxed_6463_; lean_object* v_res_6464_; 
v___x_1113__boxed_6463_ = lean_unbox(v___x_6458_);
v_res_6464_ = l_Lasm_Fetch_fetch___lam__3(v_req_6456_, v___f_6457_, v___x_1113__boxed_6463_, v___f_6459_, v_options_6460_, v_x_6461_);
lean_dec(v_options_6460_);
lean_dec_ref(v_req_6456_);
return v_res_6464_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6465_; uint32_t v___x_6466_; 
v___x_6465_ = lean_box(0);
v___x_6466_ = lasm_fetch_platform(v___x_6465_);
return v___x_6466_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6467_; uint32_t v___x_6468_; uint8_t v___x_6469_; 
v___x_6467_ = 0;
v___x_6468_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6469_ = lean_uint32_dec_eq(v___x_6468_, v___x_6467_);
return v___x_6469_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6472_; uint32_t v___x_6473_; uint8_t v___x_6474_; 
v___x_6472_ = 2;
v___x_6473_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6474_ = lean_uint32_dec_eq(v___x_6473_, v___x_6472_);
return v___x_6474_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6475_; uint32_t v___x_6476_; uint8_t v___x_6477_; 
v___x_6475_ = 4;
v___x_6476_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6477_ = lean_uint32_dec_eq(v___x_6476_, v___x_6475_);
return v___x_6477_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6478_; uint32_t v___x_6479_; uint8_t v___x_6480_; 
v___x_6478_ = 1;
v___x_6479_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6480_ = lean_uint32_dec_eq(v___x_6479_, v___x_6478_);
return v___x_6480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6495_, lean_object* v_options_6496_){
_start:
{
uint8_t v___x_6498_; 
v___x_6498_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6498_ == 0)
{
lean_object* v___f_6499_; lean_object* v___f_6500_; lean_object* v___x_6501_; lean_object* v___f_6502_; uint8_t v___x_6509_; 
v___f_6499_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6500_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6501_ = lean_box(v___x_6498_);
v___f_6502_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6502_, 0, v_req_6495_);
lean_closure_set(v___f_6502_, 1, v___f_6500_);
lean_closure_set(v___f_6502_, 2, v___x_6501_);
lean_closure_set(v___f_6502_, 3, v___f_6499_);
lean_closure_set(v___f_6502_, 4, v_options_6496_);
v___x_6509_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6509_ == 0)
{
uint8_t v___x_6510_; 
v___x_6510_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6510_ == 0)
{
uint8_t v___x_6511_; 
lean_dec_ref(v___f_6502_);
v___x_6511_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6511_ == 0)
{
lean_object* v___x_6512_; 
v___x_6512_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6512_;
}
else
{
lean_object* v___x_6513_; 
v___x_6513_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6513_;
}
}
else
{
goto v___jp_6503_;
}
}
else
{
goto v___jp_6503_;
}
v___jp_6503_:
{
lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; 
v___x_6504_ = lean_unsigned_to_nat(0u);
v___x_6505_ = lean_io_promise_new();
v___x_6506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6506_, 0, v___x_6505_);
v___x_6507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6506_);
v___x_6508_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6504_, v___x_6498_, v___x_6507_, v___f_6502_);
return v___x_6508_;
}
}
else
{
lean_object* v___x_6514_; 
lean_dec(v_options_6496_);
v___x_6514_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6495_);
return v___x_6514_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6515_, lean_object* v_options_6516_, lean_object* v_a_6517_){
_start:
{
lean_object* v_res_6518_; 
v_res_6518_ = l_Lasm_Fetch_fetch(v_req_6515_, v_options_6516_);
return v_res_6518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6519_, lean_object* v_headers_6520_, lean_object* v_options_6521_){
_start:
{
lean_object* v___x_6523_; lean_object* v___x_6524_; lean_object* v___f_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; 
v___x_6523_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6524_ = l_ByteArray_empty;
v___f_6525_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6526_, 0, v___x_6523_);
lean_ctor_set(v___x_6526_, 1, v_url_6519_);
lean_ctor_set(v___x_6526_, 2, v_headers_6520_);
lean_ctor_set(v___x_6526_, 3, v___x_6524_);
lean_ctor_set(v___x_6526_, 4, v___f_6525_);
v___x_6527_ = l_Lasm_Fetch_fetch(v___x_6526_, v_options_6521_);
return v___x_6527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6528_, lean_object* v_headers_6529_, lean_object* v_options_6530_, lean_object* v_a_6531_){
_start:
{
lean_object* v_res_6532_; 
v_res_6532_ = l_Lasm_Fetch_get(v_url_6528_, v_headers_6529_, v_options_6530_);
return v_res_6532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6534_, lean_object* v_body_6535_, lean_object* v_contentType_6536_, lean_object* v_headers_6537_, lean_object* v_options_6538_){
_start:
{
lean_object* v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___f_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; 
v___x_6540_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6541_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6542_, 0, v___x_6541_);
lean_ctor_set(v___x_6542_, 1, v_contentType_6536_);
v___x_6543_ = lean_unsigned_to_nat(1u);
v___x_6544_ = lean_mk_empty_array_with_capacity(v___x_6543_);
v___x_6545_ = lean_array_push(v___x_6544_, v___x_6542_);
v___x_6546_ = l_Array_append___redArg(v___x_6545_, v_headers_6537_);
v___f_6547_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6548_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6548_, 0, v___x_6540_);
lean_ctor_set(v___x_6548_, 1, v_url_6534_);
lean_ctor_set(v___x_6548_, 2, v___x_6546_);
lean_ctor_set(v___x_6548_, 3, v_body_6535_);
lean_ctor_set(v___x_6548_, 4, v___f_6547_);
v___x_6549_ = l_Lasm_Fetch_fetch(v___x_6548_, v_options_6538_);
return v___x_6549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6550_, lean_object* v_body_6551_, lean_object* v_contentType_6552_, lean_object* v_headers_6553_, lean_object* v_options_6554_, lean_object* v_a_6555_){
_start:
{
lean_object* v_res_6556_; 
v_res_6556_ = l_Lasm_Fetch_post(v_url_6550_, v_body_6551_, v_contentType_6552_, v_headers_6553_, v_options_6554_);
lean_dec_ref(v_headers_6553_);
return v_res_6556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6557_){
_start:
{
lean_object* v_body_6558_; uint8_t v___x_6559_; 
v_body_6558_ = lean_ctor_get(v_r_6557_, 1);
lean_inc_ref(v_body_6558_);
lean_dec_ref(v_r_6557_);
v___x_6559_ = lean_string_validate_utf8(v_body_6558_);
if (v___x_6559_ == 0)
{
lean_object* v___x_6560_; 
lean_dec_ref(v_body_6558_);
v___x_6560_ = lean_box(0);
return v___x_6560_;
}
else
{
lean_object* v___x_6561_; lean_object* v___x_6562_; 
v___x_6561_ = lean_string_from_utf8_unchecked(v_body_6558_);
v___x_6562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6562_, 0, v___x_6561_);
return v___x_6562_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6563_, lean_object* v_name_6564_){
_start:
{
lean_object* v_headers_6565_; lean_object* v_n_6566_; lean_object* v___x_6567_; lean_object* v___x_6568_; size_t v_sz_6569_; size_t v___x_6570_; lean_object* v___x_6571_; lean_object* v_fst_6572_; 
v_headers_6565_ = lean_ctor_get(v_r_6563_, 0);
v_n_6566_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6564_);
v___x_6567_ = lean_box(0);
v___x_6568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6569_ = lean_array_size(v_headers_6565_);
v___x_6570_ = ((size_t)0ULL);
v___x_6571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6566_, v_headers_6565_, v_sz_6569_, v___x_6570_, v___x_6568_);
lean_dec_ref(v_n_6566_);
v_fst_6572_ = lean_ctor_get(v___x_6571_, 0);
lean_inc(v_fst_6572_);
lean_dec_ref(v___x_6571_);
if (lean_obj_tag(v_fst_6572_) == 0)
{
return v___x_6567_;
}
else
{
lean_object* v_val_6573_; 
v_val_6573_ = lean_ctor_get(v_fst_6572_, 0);
lean_inc(v_val_6573_);
lean_dec_ref_known(v_fst_6572_, 1);
if (lean_obj_tag(v_val_6573_) == 0)
{
return v___x_6567_;
}
else
{
lean_object* v_val_6574_; lean_object* v___x_6576_; uint8_t v_isShared_6577_; uint8_t v_isSharedCheck_6582_; 
v_val_6574_ = lean_ctor_get(v_val_6573_, 0);
v_isSharedCheck_6582_ = !lean_is_exclusive(v_val_6573_);
if (v_isSharedCheck_6582_ == 0)
{
v___x_6576_ = v_val_6573_;
v_isShared_6577_ = v_isSharedCheck_6582_;
goto v_resetjp_6575_;
}
else
{
lean_inc(v_val_6574_);
lean_dec(v_val_6573_);
v___x_6576_ = lean_box(0);
v_isShared_6577_ = v_isSharedCheck_6582_;
goto v_resetjp_6575_;
}
v_resetjp_6575_:
{
lean_object* v_snd_6578_; lean_object* v___x_6580_; 
v_snd_6578_ = lean_ctor_get(v_val_6574_, 1);
lean_inc(v_snd_6578_);
lean_dec(v_val_6574_);
if (v_isShared_6577_ == 0)
{
lean_ctor_set(v___x_6576_, 0, v_snd_6578_);
v___x_6580_ = v___x_6576_;
goto v_reusejp_6579_;
}
else
{
lean_object* v_reuseFailAlloc_6581_; 
v_reuseFailAlloc_6581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6581_, 0, v_snd_6578_);
v___x_6580_ = v_reuseFailAlloc_6581_;
goto v_reusejp_6579_;
}
v_reusejp_6579_:
{
return v___x_6580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6583_, lean_object* v_name_6584_){
_start:
{
lean_object* v_res_6585_; 
v_res_6585_ = l_Lasm_Fetch_Response_header_x3f(v_r_6583_, v_name_6584_);
lean_dec_ref(v_r_6583_);
return v_res_6585_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6586_){
_start:
{
if (lean_obj_tag(v_x_6586_) == 0)
{
lean_object* v_a_6587_; lean_object* v___x_6588_; 
v_a_6587_ = lean_ctor_get(v_x_6586_, 0);
lean_inc(v_a_6587_);
lean_dec_ref_known(v_x_6586_, 1);
v___x_6588_ = lean_task_pure(v_a_6587_);
return v___x_6588_;
}
else
{
lean_object* v_a_6589_; 
v_a_6589_ = lean_ctor_get(v_x_6586_, 0);
lean_inc_ref(v_a_6589_);
lean_dec_ref_known(v_x_6586_, 1);
return v_a_6589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6590_){
_start:
{
if (lean_obj_tag(v_x_6590_) == 0)
{
lean_object* v_a_6591_; lean_object* v___x_6592_; 
v_a_6591_ = lean_ctor_get(v_x_6590_, 0);
lean_inc(v_a_6591_);
lean_dec_ref_known(v_x_6590_, 1);
v___x_6592_ = lean_task_pure(v_a_6591_);
return v___x_6592_;
}
else
{
lean_object* v_a_6593_; 
v_a_6593_ = lean_ctor_get(v_x_6590_, 0);
lean_inc_ref(v_a_6593_);
lean_dec_ref_known(v_x_6590_, 1);
return v_a_6593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6594_){
_start:
{
lean_object* v_val_6597_; lean_object* v___x_6599_; 
v___x_6599_ = lasm_fetch_write(v_chunk_6594_);
if (lean_obj_tag(v___x_6599_) == 0)
{
lean_object* v_a_6600_; lean_object* v___x_6602_; uint8_t v_isShared_6603_; uint8_t v_isSharedCheck_6607_; 
v_a_6600_ = lean_ctor_get(v___x_6599_, 0);
v_isSharedCheck_6607_ = !lean_is_exclusive(v___x_6599_);
if (v_isSharedCheck_6607_ == 0)
{
v___x_6602_ = v___x_6599_;
v_isShared_6603_ = v_isSharedCheck_6607_;
goto v_resetjp_6601_;
}
else
{
lean_inc(v_a_6600_);
lean_dec(v___x_6599_);
v___x_6602_ = lean_box(0);
v_isShared_6603_ = v_isSharedCheck_6607_;
goto v_resetjp_6601_;
}
v_resetjp_6601_:
{
lean_object* v___x_6605_; 
if (v_isShared_6603_ == 0)
{
lean_ctor_set_tag(v___x_6602_, 1);
v___x_6605_ = v___x_6602_;
goto v_reusejp_6604_;
}
else
{
lean_object* v_reuseFailAlloc_6606_; 
v_reuseFailAlloc_6606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6606_, 0, v_a_6600_);
v___x_6605_ = v_reuseFailAlloc_6606_;
goto v_reusejp_6604_;
}
v_reusejp_6604_:
{
v_val_6597_ = v___x_6605_;
goto v___jp_6596_;
}
}
}
else
{
lean_object* v_a_6608_; lean_object* v___x_6610_; uint8_t v_isShared_6611_; uint8_t v_isSharedCheck_6615_; 
v_a_6608_ = lean_ctor_get(v___x_6599_, 0);
v_isSharedCheck_6615_ = !lean_is_exclusive(v___x_6599_);
if (v_isSharedCheck_6615_ == 0)
{
v___x_6610_ = v___x_6599_;
v_isShared_6611_ = v_isSharedCheck_6615_;
goto v_resetjp_6609_;
}
else
{
lean_inc(v_a_6608_);
lean_dec(v___x_6599_);
v___x_6610_ = lean_box(0);
v_isShared_6611_ = v_isSharedCheck_6615_;
goto v_resetjp_6609_;
}
v_resetjp_6609_:
{
lean_object* v___x_6613_; 
if (v_isShared_6611_ == 0)
{
lean_ctor_set_tag(v___x_6610_, 0);
v___x_6613_ = v___x_6610_;
goto v_reusejp_6612_;
}
else
{
lean_object* v_reuseFailAlloc_6614_; 
v_reuseFailAlloc_6614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6614_, 0, v_a_6608_);
v___x_6613_ = v_reuseFailAlloc_6614_;
goto v_reusejp_6612_;
}
v_reusejp_6612_:
{
v_val_6597_ = v___x_6613_;
goto v___jp_6596_;
}
}
}
v___jp_6596_:
{
lean_object* v___x_6598_; 
v___x_6598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6598_, 0, v_val_6597_);
return v___x_6598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6616_, lean_object* v___y_6617_){
_start:
{
lean_object* v_res_6618_; 
v_res_6618_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6616_);
lean_dec_ref(v_chunk_6616_);
return v_res_6618_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6619_){
_start:
{
if (lean_obj_tag(v_x_6619_) == 0)
{
lean_object* v_a_6620_; lean_object* v___x_6621_; 
v_a_6620_ = lean_ctor_get(v_x_6619_, 0);
lean_inc(v_a_6620_);
lean_dec_ref_known(v_x_6619_, 1);
v___x_6621_ = lean_task_pure(v_a_6620_);
return v___x_6621_;
}
else
{
lean_object* v_a_6622_; 
v_a_6622_ = lean_ctor_get(v_x_6619_, 0);
lean_inc_ref(v_a_6622_);
lean_dec_ref_known(v_x_6619_, 1);
return v_a_6622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6623_){
_start:
{
lean_object* v___y_6626_; 
if (lean_obj_tag(v_x_6623_) == 0)
{
lean_object* v_a_6629_; lean_object* v___x_6631_; uint8_t v_isShared_6632_; uint8_t v_isSharedCheck_6637_; 
v_a_6629_ = lean_ctor_get(v_x_6623_, 0);
v_isSharedCheck_6637_ = !lean_is_exclusive(v_x_6623_);
if (v_isSharedCheck_6637_ == 0)
{
v___x_6631_ = v_x_6623_;
v_isShared_6632_ = v_isSharedCheck_6637_;
goto v_resetjp_6630_;
}
else
{
lean_inc(v_a_6629_);
lean_dec(v_x_6623_);
v___x_6631_ = lean_box(0);
v_isShared_6632_ = v_isSharedCheck_6637_;
goto v_resetjp_6630_;
}
v_resetjp_6630_:
{
lean_object* v___x_6634_; 
if (v_isShared_6632_ == 0)
{
v___x_6634_ = v___x_6631_;
goto v_reusejp_6633_;
}
else
{
lean_object* v_reuseFailAlloc_6636_; 
v_reuseFailAlloc_6636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6636_, 0, v_a_6629_);
v___x_6634_ = v_reuseFailAlloc_6636_;
goto v_reusejp_6633_;
}
v_reusejp_6633_:
{
lean_object* v___x_6635_; 
v___x_6635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6635_, 0, v___x_6634_);
return v___x_6635_;
}
}
}
else
{
lean_object* v_a_6638_; uint8_t v___x_6639_; 
v_a_6638_ = lean_ctor_get(v_x_6623_, 0);
lean_inc(v_a_6638_);
lean_dec_ref_known(v_x_6623_, 1);
v___x_6639_ = l_ByteArray_isEmpty(v_a_6638_);
if (v___x_6639_ == 0)
{
lean_object* v___x_6640_; 
v___x_6640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6640_, 0, v_a_6638_);
v___y_6626_ = v___x_6640_;
goto v___jp_6625_;
}
else
{
lean_object* v___x_6641_; 
lean_dec(v_a_6638_);
v___x_6641_ = lean_box(0);
v___y_6626_ = v___x_6641_;
goto v___jp_6625_;
}
}
v___jp_6625_:
{
lean_object* v___x_6627_; lean_object* v___x_6628_; 
v___x_6627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6627_, 0, v___y_6626_);
v___x_6628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6628_, 0, v___x_6627_);
return v___x_6628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6642_, lean_object* v___y_6643_){
_start:
{
lean_object* v_res_6644_; 
v_res_6644_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6642_);
return v_res_6644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6645_, uint32_t v___x_6646_){
_start:
{
lean_object* v___x_6648_; uint8_t v___x_6649_; lean_object* v_val_6651_; lean_object* v___x_6654_; 
v___x_6648_ = lean_unsigned_to_nat(0u);
v___x_6649_ = 0;
v___x_6654_ = lasm_fetch_read(v___x_6646_);
if (lean_obj_tag(v___x_6654_) == 0)
{
lean_object* v_a_6655_; lean_object* v___x_6657_; uint8_t v_isShared_6658_; uint8_t v_isSharedCheck_6662_; 
v_a_6655_ = lean_ctor_get(v___x_6654_, 0);
v_isSharedCheck_6662_ = !lean_is_exclusive(v___x_6654_);
if (v_isSharedCheck_6662_ == 0)
{
v___x_6657_ = v___x_6654_;
v_isShared_6658_ = v_isSharedCheck_6662_;
goto v_resetjp_6656_;
}
else
{
lean_inc(v_a_6655_);
lean_dec(v___x_6654_);
v___x_6657_ = lean_box(0);
v_isShared_6658_ = v_isSharedCheck_6662_;
goto v_resetjp_6656_;
}
v_resetjp_6656_:
{
lean_object* v___x_6660_; 
if (v_isShared_6658_ == 0)
{
lean_ctor_set_tag(v___x_6657_, 1);
v___x_6660_ = v___x_6657_;
goto v_reusejp_6659_;
}
else
{
lean_object* v_reuseFailAlloc_6661_; 
v_reuseFailAlloc_6661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6661_, 0, v_a_6655_);
v___x_6660_ = v_reuseFailAlloc_6661_;
goto v_reusejp_6659_;
}
v_reusejp_6659_:
{
v_val_6651_ = v___x_6660_;
goto v___jp_6650_;
}
}
}
else
{
lean_object* v_a_6663_; lean_object* v___x_6665_; uint8_t v_isShared_6666_; uint8_t v_isSharedCheck_6670_; 
v_a_6663_ = lean_ctor_get(v___x_6654_, 0);
v_isSharedCheck_6670_ = !lean_is_exclusive(v___x_6654_);
if (v_isSharedCheck_6670_ == 0)
{
v___x_6665_ = v___x_6654_;
v_isShared_6666_ = v_isSharedCheck_6670_;
goto v_resetjp_6664_;
}
else
{
lean_inc(v_a_6663_);
lean_dec(v___x_6654_);
v___x_6665_ = lean_box(0);
v_isShared_6666_ = v_isSharedCheck_6670_;
goto v_resetjp_6664_;
}
v_resetjp_6664_:
{
lean_object* v___x_6668_; 
if (v_isShared_6666_ == 0)
{
lean_ctor_set_tag(v___x_6665_, 0);
v___x_6668_ = v___x_6665_;
goto v_reusejp_6667_;
}
else
{
lean_object* v_reuseFailAlloc_6669_; 
v_reuseFailAlloc_6669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6669_, 0, v_a_6663_);
v___x_6668_ = v_reuseFailAlloc_6669_;
goto v_reusejp_6667_;
}
v_reusejp_6667_:
{
v_val_6651_ = v___x_6668_;
goto v___jp_6650_;
}
}
}
v___jp_6650_:
{
lean_object* v___x_6652_; lean_object* v___x_6653_; 
v___x_6652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6652_, 0, v_val_6651_);
v___x_6653_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6648_, v___x_6649_, v___x_6652_, v___f_6645_);
return v___x_6653_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6671_, lean_object* v___x_6672_, lean_object* v___y_6673_){
_start:
{
uint32_t v___x_2044__boxed_6674_; lean_object* v_res_6675_; 
v___x_2044__boxed_6674_ = lean_unbox_uint32(v___x_6672_);
lean_dec(v___x_6672_);
v_res_6675_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6671_, v___x_2044__boxed_6674_);
return v_res_6675_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6676_, lean_object* v_req_6677_){
_start:
{
lean_object* v___x_6679_; 
v___x_6679_ = l_Lasm_Fetch_respond(v_handler_6676_, v_req_6677_);
return v___x_6679_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6680_, lean_object* v_req_6681_, lean_object* v___y_6682_){
_start:
{
lean_object* v_res_6683_; 
v_res_6683_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6680_, v_req_6681_);
return v_res_6683_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6684_, lean_object* v___f_6685_){
_start:
{
lean_object* v___x_6687_; 
v___x_6687_ = lean_apply_2(v_val_6684_, v___f_6685_, lean_box(0));
return v___x_6687_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6688_, lean_object* v___f_6689_, lean_object* v___y_6690_){
_start:
{
lean_object* v_res_6691_; 
v_res_6691_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6688_, v___f_6689_);
return v_res_6691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6692_){
_start:
{
lean_object* v___x_6694_; 
v___x_6694_ = l_Lasm_Fetch_Request_readAll(v___x_6692_);
return v___x_6694_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6695_, lean_object* v___y_6696_){
_start:
{
lean_object* v_res_6697_; 
v_res_6697_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6695_);
return v_res_6697_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6703_; lean_object* v___x_6704_; 
v___x_6703_ = 65536;
v___x_6704_ = lean_box_uint32(v___x_6703_);
return v___x_6704_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6705_; lean_object* v___x_6706_; lean_object* v___f_6707_; 
v___f_6705_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6706_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6707_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6707_, 0, v___f_6705_);
lean_closure_set(v___f_6707_, 1, v___x_6706_);
return v___f_6707_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6708_, lean_object* v_options_6709_){
_start:
{
lean_object* v___f_6711_; lean_object* v___f_6712_; lean_object* v___f_6713_; lean_object* v___f_6714_; lean_object* v___x_6715_; 
v___f_6711_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6712_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6713_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6714_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6715_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6715_) == 0)
{
lean_object* v_a_6716_; lean_object* v___x_6718_; uint8_t v_isShared_6719_; uint8_t v_isSharedCheck_6786_; 
v_a_6716_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6786_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6786_ == 0)
{
v___x_6718_ = v___x_6715_;
v_isShared_6719_ = v_isSharedCheck_6786_;
goto v_resetjp_6717_;
}
else
{
lean_inc(v_a_6716_);
lean_dec(v___x_6715_);
v___x_6718_ = lean_box(0);
v_isShared_6719_ = v_isSharedCheck_6786_;
goto v_resetjp_6717_;
}
v_resetjp_6717_:
{
lean_object* v_snd_6720_; lean_object* v_fst_6721_; lean_object* v_fst_6722_; lean_object* v_snd_6723_; lean_object* v___f_6724_; lean_object* v___x_6725_; lean_object* v_req_6727_; lean_object* v___x_6765_; lean_object* v___x_6766_; lean_object* v___x_6767_; uint8_t v___x_6768_; 
v_snd_6720_ = lean_ctor_get(v_a_6716_, 1);
lean_inc(v_snd_6720_);
v_fst_6721_ = lean_ctor_get(v_a_6716_, 0);
lean_inc_n(v_fst_6721_, 2);
lean_dec(v_a_6716_);
v_fst_6722_ = lean_ctor_get(v_snd_6720_, 0);
lean_inc_n(v_fst_6722_, 2);
v_snd_6723_ = lean_ctor_get(v_snd_6720_, 1);
lean_inc_n(v_snd_6723_, 2);
lean_dec(v_snd_6720_);
v___f_6724_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6725_ = l_ByteArray_empty;
v___x_6765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6765_, 0, v_fst_6721_);
lean_ctor_set(v___x_6765_, 1, v_fst_6722_);
lean_ctor_set(v___x_6765_, 2, v_snd_6723_);
lean_ctor_set(v___x_6765_, 3, v___x_6725_);
lean_ctor_set(v___x_6765_, 4, v___f_6724_);
lean_inc_ref(v___x_6765_);
v___x_6766_ = l_Lasm_Fetch_Request_path(v___x_6765_);
v___x_6767_ = lean_apply_1(v_options_6709_, v___x_6766_);
v___x_6768_ = lean_unbox(v___x_6767_);
if (v___x_6768_ == 0)
{
lean_object* v___f_6769_; lean_object* v___x_6770_; lean_object* v___x_6771_; uint8_t v___x_6772_; lean_object* v___x_6773_; lean_object* v___x_6774_; 
v___f_6769_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6769_, 0, v___x_6765_);
v___x_6770_ = lean_unsigned_to_nat(0u);
v___x_6771_ = lean_io_as_task(v___f_6769_, v___x_6770_);
v___x_6772_ = 1;
v___x_6773_ = lean_task_bind(v___x_6771_, v___f_6711_, v___x_6770_, v___x_6772_);
v___x_6774_ = lean_task_get_own(v___x_6773_);
if (lean_obj_tag(v___x_6774_) == 0)
{
lean_object* v_a_6775_; lean_object* v___x_6777_; uint8_t v_isShared_6778_; uint8_t v_isSharedCheck_6782_; 
lean_dec(v_snd_6723_);
lean_dec(v_fst_6722_);
lean_dec(v_fst_6721_);
lean_del_object(v___x_6718_);
lean_dec_ref(v_handler_6708_);
v_a_6775_ = lean_ctor_get(v___x_6774_, 0);
v_isSharedCheck_6782_ = !lean_is_exclusive(v___x_6774_);
if (v_isSharedCheck_6782_ == 0)
{
v___x_6777_ = v___x_6774_;
v_isShared_6778_ = v_isSharedCheck_6782_;
goto v_resetjp_6776_;
}
else
{
lean_inc(v_a_6775_);
lean_dec(v___x_6774_);
v___x_6777_ = lean_box(0);
v_isShared_6778_ = v_isSharedCheck_6782_;
goto v_resetjp_6776_;
}
v_resetjp_6776_:
{
lean_object* v___x_6780_; 
if (v_isShared_6778_ == 0)
{
lean_ctor_set_tag(v___x_6777_, 1);
v___x_6780_ = v___x_6777_;
goto v_reusejp_6779_;
}
else
{
lean_object* v_reuseFailAlloc_6781_; 
v_reuseFailAlloc_6781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6781_, 0, v_a_6775_);
v___x_6780_ = v_reuseFailAlloc_6781_;
goto v_reusejp_6779_;
}
v_reusejp_6779_:
{
return v___x_6780_;
}
}
}
else
{
lean_object* v_a_6783_; lean_object* v___f_6784_; lean_object* v___x_6785_; 
v_a_6783_ = lean_ctor_get(v___x_6774_, 0);
lean_inc(v_a_6783_);
lean_dec_ref_known(v___x_6774_, 1);
v___f_6784_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6785_, 0, v_fst_6721_);
lean_ctor_set(v___x_6785_, 1, v_fst_6722_);
lean_ctor_set(v___x_6785_, 2, v_snd_6723_);
lean_ctor_set(v___x_6785_, 3, v_a_6783_);
lean_ctor_set(v___x_6785_, 4, v___f_6784_);
v_req_6727_ = v___x_6785_;
goto v___jp_6726_;
}
}
else
{
lean_dec(v_snd_6723_);
lean_dec(v_fst_6722_);
lean_dec(v_fst_6721_);
v_req_6727_ = v___x_6765_;
goto v___jp_6726_;
}
v___jp_6726_:
{
lean_object* v___f_6728_; lean_object* v___x_6729_; lean_object* v___x_6730_; uint8_t v___x_6731_; lean_object* v___x_6732_; lean_object* v___x_6733_; 
lean_inc_ref(v_req_6727_);
v___f_6728_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6728_, 0, v_handler_6708_);
lean_closure_set(v___f_6728_, 1, v_req_6727_);
v___x_6729_ = lean_unsigned_to_nat(0u);
v___x_6730_ = lean_io_as_task(v___f_6728_, v___x_6729_);
v___x_6731_ = 1;
v___x_6732_ = lean_task_bind(v___x_6730_, v___f_6714_, v___x_6729_, v___x_6731_);
v___x_6733_ = lean_task_get_own(v___x_6732_);
if (lean_obj_tag(v___x_6733_) == 0)
{
lean_object* v_a_6734_; lean_object* v___x_6736_; 
lean_dec_ref(v_req_6727_);
v_a_6734_ = lean_ctor_get(v___x_6733_, 0);
lean_inc(v_a_6734_);
lean_dec_ref_known(v___x_6733_, 1);
if (v_isShared_6719_ == 0)
{
lean_ctor_set_tag(v___x_6718_, 1);
lean_ctor_set(v___x_6718_, 0, v_a_6734_);
v___x_6736_ = v___x_6718_;
goto v_reusejp_6735_;
}
else
{
lean_object* v_reuseFailAlloc_6737_; 
v_reuseFailAlloc_6737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6737_, 0, v_a_6734_);
v___x_6736_ = v_reuseFailAlloc_6737_;
goto v_reusejp_6735_;
}
v_reusejp_6735_:
{
return v___x_6736_;
}
}
else
{
lean_object* v_a_6738_; lean_object* v_stream_6739_; 
lean_del_object(v___x_6718_);
v_a_6738_ = lean_ctor_get(v___x_6733_, 0);
lean_inc(v_a_6738_);
lean_dec_ref_known(v___x_6733_, 1);
v_stream_6739_ = lean_ctor_get(v_a_6738_, 2);
if (lean_obj_tag(v_stream_6739_) == 0)
{
uint16_t v_status_6740_; lean_object* v_headers_6741_; lean_object* v_body_6742_; lean_object* v_method_6743_; uint8_t v___x_6744_; 
v_status_6740_ = lean_ctor_get_uint16(v_a_6738_, sizeof(void*)*3);
v_headers_6741_ = lean_ctor_get(v_a_6738_, 0);
lean_inc_ref(v_headers_6741_);
v_body_6742_ = lean_ctor_get(v_a_6738_, 1);
lean_inc_ref(v_body_6742_);
lean_dec(v_a_6738_);
v_method_6743_ = lean_ctor_get(v_req_6727_, 0);
lean_inc_ref(v_method_6743_);
lean_dec_ref(v_req_6727_);
v___x_6744_ = l_Lasm_Fetch_bodyless(v_method_6743_, v_status_6740_);
lean_dec_ref(v_method_6743_);
if (v___x_6744_ == 0)
{
lean_object* v___x_6745_; 
v___x_6745_ = lasm_fetch_send_response(v_status_6740_, v_headers_6741_, v_body_6742_);
lean_dec_ref(v_body_6742_);
lean_dec_ref(v_headers_6741_);
return v___x_6745_;
}
else
{
lean_object* v___x_6746_; 
lean_dec_ref(v_body_6742_);
v___x_6746_ = lasm_fetch_send_response(v_status_6740_, v_headers_6741_, v___x_6725_);
lean_dec_ref(v_headers_6741_);
return v___x_6746_;
}
}
else
{
uint16_t v_status_6747_; lean_object* v_headers_6748_; lean_object* v_val_6749_; lean_object* v___f_6750_; lean_object* v___x_6751_; 
lean_inc_ref(v_stream_6739_);
v_status_6747_ = lean_ctor_get_uint16(v_a_6738_, sizeof(void*)*3);
v_headers_6748_ = lean_ctor_get(v_a_6738_, 0);
lean_inc_ref(v_headers_6748_);
lean_dec(v_a_6738_);
v_val_6749_ = lean_ctor_get(v_stream_6739_, 0);
lean_inc(v_val_6749_);
lean_dec_ref_known(v_stream_6739_, 1);
v___f_6750_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6750_, 0, v_val_6749_);
lean_closure_set(v___f_6750_, 1, v___f_6713_);
v___x_6751_ = lasm_fetch_start_response(v_status_6747_, v_headers_6748_);
lean_dec_ref(v_headers_6748_);
if (lean_obj_tag(v___x_6751_) == 0)
{
lean_object* v_method_6752_; uint8_t v___x_6753_; 
lean_dec_ref_known(v___x_6751_, 1);
v_method_6752_ = lean_ctor_get(v_req_6727_, 0);
lean_inc_ref(v_method_6752_);
lean_dec_ref(v_req_6727_);
v___x_6753_ = l_Lasm_Fetch_bodyless(v_method_6752_, v_status_6747_);
lean_dec_ref(v_method_6752_);
if (v___x_6753_ == 0)
{
lean_object* v___x_6754_; lean_object* v___x_6755_; lean_object* v___x_6756_; 
v___x_6754_ = lean_io_as_task(v___f_6750_, v___x_6729_);
v___x_6755_ = lean_task_bind(v___x_6754_, v___f_6712_, v___x_6729_, v___x_6731_);
v___x_6756_ = lean_task_get_own(v___x_6755_);
if (lean_obj_tag(v___x_6756_) == 0)
{
lean_object* v_a_6757_; lean_object* v___x_6758_; lean_object* v___x_6759_; lean_object* v___x_6760_; lean_object* v___x_6761_; 
v_a_6757_ = lean_ctor_get(v___x_6756_, 0);
lean_inc(v_a_6757_);
lean_dec_ref_known(v___x_6756_, 1);
v___x_6758_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6759_ = lean_io_error_to_string(v_a_6757_);
v___x_6760_ = lean_string_append(v___x_6758_, v___x_6759_);
lean_dec_ref(v___x_6759_);
v___x_6761_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6760_);
if (lean_obj_tag(v___x_6761_) == 0)
{
lean_object* v___x_6762_; 
lean_dec_ref_known(v___x_6761_, 1);
v___x_6762_ = lasm_fetch_finish(v___x_6753_);
return v___x_6762_;
}
else
{
return v___x_6761_;
}
}
else
{
lean_object* v___x_6763_; 
lean_dec_ref_known(v___x_6756_, 1);
v___x_6763_ = lasm_fetch_finish(v___x_6731_);
return v___x_6763_;
}
}
else
{
lean_object* v___x_6764_; 
lean_dec_ref(v___f_6750_);
v___x_6764_ = lasm_fetch_finish(v___x_6731_);
return v___x_6764_;
}
}
else
{
lean_dec_ref(v___f_6750_);
lean_dec_ref(v_req_6727_);
return v___x_6751_;
}
}
}
}
}
}
else
{
lean_object* v_a_6787_; lean_object* v___x_6789_; uint8_t v_isShared_6790_; uint8_t v_isSharedCheck_6794_; 
lean_dec_ref(v_options_6709_);
lean_dec_ref(v_handler_6708_);
v_a_6787_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6794_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6794_ == 0)
{
v___x_6789_ = v___x_6715_;
v_isShared_6790_ = v_isSharedCheck_6794_;
goto v_resetjp_6788_;
}
else
{
lean_inc(v_a_6787_);
lean_dec(v___x_6715_);
v___x_6789_ = lean_box(0);
v_isShared_6790_ = v_isSharedCheck_6794_;
goto v_resetjp_6788_;
}
v_resetjp_6788_:
{
lean_object* v___x_6792_; 
if (v_isShared_6790_ == 0)
{
v___x_6792_ = v___x_6789_;
goto v_reusejp_6791_;
}
else
{
lean_object* v_reuseFailAlloc_6793_; 
v_reuseFailAlloc_6793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6793_, 0, v_a_6787_);
v___x_6792_ = v_reuseFailAlloc_6793_;
goto v_reusejp_6791_;
}
v_reusejp_6791_:
{
return v___x_6792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6795_, lean_object* v_options_6796_, lean_object* v_a_6797_){
_start:
{
lean_object* v_res_6798_; 
v_res_6798_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6795_, v_options_6796_);
return v_res_6798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6802_, lean_object* v_handler_6803_){
_start:
{
uint8_t v___x_6805_; 
v___x_6805_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6805_ == 0)
{
uint8_t v___x_6806_; 
v___x_6806_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6806_ == 0)
{
uint8_t v___x_6807_; 
v___x_6807_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6807_ == 0)
{
uint8_t v___x_6808_; 
v___x_6808_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6808_ == 0)
{
lean_object* v___x_6809_; lean_object* v___x_6810_; 
lean_dec_ref(v_handler_6803_);
lean_dec_ref(v_options_6802_);
v___x_6809_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6810_, 0, v___x_6809_);
return v___x_6810_;
}
else
{
lean_object* v___x_6811_; 
v___x_6811_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6811_) == 0)
{
lean_object* v_a_6812_; uint8_t v___x_6813_; 
v_a_6812_ = lean_ctor_get(v___x_6811_, 0);
lean_inc(v_a_6812_);
lean_dec_ref_known(v___x_6811_, 1);
v___x_6813_ = lean_unbox(v_a_6812_);
lean_dec(v_a_6812_);
if (v___x_6813_ == 0)
{
lean_object* v___x_6814_; 
v___x_6814_ = l_Lasm_Fetch_serveNode(v_handler_6803_, v_options_6802_);
return v___x_6814_;
}
else
{
lean_object* v___x_6815_; 
v___x_6815_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6803_, v_options_6802_);
if (lean_obj_tag(v___x_6815_) == 0)
{
lean_object* v_a_6816_; lean_object* v___x_6817_; 
v_a_6816_ = lean_ctor_get(v___x_6815_, 0);
lean_inc(v_a_6816_);
lean_dec_ref_known(v___x_6815_, 1);
v___x_6817_ = l_Lasm_JS_exportDefault(v_a_6816_);
return v___x_6817_;
}
else
{
lean_object* v_a_6818_; lean_object* v___x_6820_; uint8_t v_isShared_6821_; uint8_t v_isSharedCheck_6825_; 
v_a_6818_ = lean_ctor_get(v___x_6815_, 0);
v_isSharedCheck_6825_ = !lean_is_exclusive(v___x_6815_);
if (v_isSharedCheck_6825_ == 0)
{
v___x_6820_ = v___x_6815_;
v_isShared_6821_ = v_isSharedCheck_6825_;
goto v_resetjp_6819_;
}
else
{
lean_inc(v_a_6818_);
lean_dec(v___x_6815_);
v___x_6820_ = lean_box(0);
v_isShared_6821_ = v_isSharedCheck_6825_;
goto v_resetjp_6819_;
}
v_resetjp_6819_:
{
lean_object* v___x_6823_; 
if (v_isShared_6821_ == 0)
{
v___x_6823_ = v___x_6820_;
goto v_reusejp_6822_;
}
else
{
lean_object* v_reuseFailAlloc_6824_; 
v_reuseFailAlloc_6824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6824_, 0, v_a_6818_);
v___x_6823_ = v_reuseFailAlloc_6824_;
goto v_reusejp_6822_;
}
v_reusejp_6822_:
{
return v___x_6823_;
}
}
}
}
}
else
{
lean_object* v_a_6826_; lean_object* v___x_6828_; uint8_t v_isShared_6829_; uint8_t v_isSharedCheck_6833_; 
lean_dec_ref(v_handler_6803_);
lean_dec_ref(v_options_6802_);
v_a_6826_ = lean_ctor_get(v___x_6811_, 0);
v_isSharedCheck_6833_ = !lean_is_exclusive(v___x_6811_);
if (v_isSharedCheck_6833_ == 0)
{
v___x_6828_ = v___x_6811_;
v_isShared_6829_ = v_isSharedCheck_6833_;
goto v_resetjp_6827_;
}
else
{
lean_inc(v_a_6826_);
lean_dec(v___x_6811_);
v___x_6828_ = lean_box(0);
v_isShared_6829_ = v_isSharedCheck_6833_;
goto v_resetjp_6827_;
}
v_resetjp_6827_:
{
lean_object* v___x_6831_; 
if (v_isShared_6829_ == 0)
{
v___x_6831_ = v___x_6828_;
goto v_reusejp_6830_;
}
else
{
lean_object* v_reuseFailAlloc_6832_; 
v_reuseFailAlloc_6832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6832_, 0, v_a_6826_);
v___x_6831_ = v_reuseFailAlloc_6832_;
goto v_reusejp_6830_;
}
v_reusejp_6830_:
{
return v___x_6831_;
}
}
}
}
}
else
{
lean_object* v___x_6834_; 
v___x_6834_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6803_, v_options_6802_);
return v___x_6834_;
}
}
else
{
lean_object* v___x_6835_; 
v___x_6835_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6803_, v_options_6802_);
return v___x_6835_;
}
}
else
{
lean_object* v___x_6836_; 
v___x_6836_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6803_, v_options_6802_);
return v___x_6836_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6837_, lean_object* v_handler_6838_, lean_object* v_a_6839_){
_start:
{
lean_object* v_res_6840_; 
v_res_6840_ = l_Lasm_Fetch_serveWith(v_options_6837_, v_handler_6838_);
return v_res_6840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6841_){
_start:
{
lean_object* v___f_6843_; lean_object* v___x_6844_; 
v___f_6843_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6844_ = l_Lasm_Fetch_serveWith(v___f_6843_, v_handler_6841_);
return v___x_6844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6845_, lean_object* v_a_6846_){
_start:
{
lean_object* v_res_6847_; 
v_res_6847_ = l_Lasm_Fetch_serve(v_handler_6845_);
return v_res_6847_;
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
l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1 = _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1);
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
