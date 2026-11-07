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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__1_value)} };
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v___f_1617_, lean_object* v_bytes_1618_){
_start:
{
lean_object* v___x_1620_; uint8_t v___x_1621_; lean_object* v_val_1623_; lean_object* v___x_1626_; 
v___x_1620_ = lean_unsigned_to_nat(0u);
v___x_1621_ = 0;
v___x_1626_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1618_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1626_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1626_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
lean_ctor_set_tag(v___x_1629_, 1);
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
v_val_1623_ = v___x_1632_;
goto v___jp_1622_;
}
}
}
else
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
v_a_1635_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1637_ = v___x_1626_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1626_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
lean_ctor_set_tag(v___x_1637_, 0);
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
v_val_1623_ = v___x_1640_;
goto v___jp_1622_;
}
}
}
v___jp_1622_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1624_, 0, v_val_1623_);
v___x_1625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1620_, v___x_1621_, v___x_1624_, v___f_1617_);
return v___x_1625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v___f_1643_, lean_object* v_bytes_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v___f_1643_, v_bytes_1644_);
lean_dec_ref(v_bytes_1644_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v___x_1647_, uint8_t v___x_1648_, lean_object* v___f_1649_, lean_object* v_a_1650_, uint32_t v_op_1651_, uint64_t v_flags_1652_, lean_object* v_payload_1653_, lean_object* v_x_1654_){
_start:
{
lean_object* v_val_1657_; 
if (lean_obj_tag(v_x_1654_) == 0)
{
lean_object* v___x_1660_; 
lean_dec_ref(v___f_1649_);
lean_dec(v___x_1647_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v_x_1654_);
return v___x_1660_;
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1675_; 
v_a_1661_ = lean_ctor_get(v_x_1654_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_x_1654_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1663_ = v_x_1654_;
v_isShared_1664_ = v_isSharedCheck_1675_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v_x_1654_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1675_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
uint32_t v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = 0;
v___x_1666_ = lasm_js_call_into(v_a_1650_, v_op_1651_, v___x_1665_, v_flags_1652_, v_a_1661_, v_payload_1653_);
lean_dec(v_a_1661_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1669_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v_a_1667_);
v___x_1669_ = v___x_1663_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
v_val_1657_ = v___x_1669_;
goto v___jp_1656_;
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; 
v_a_1671_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1666_, 1);
if (v_isShared_1664_ == 0)
{
lean_ctor_set_tag(v___x_1663_, 0);
lean_ctor_set(v___x_1663_, 0, v_a_1671_);
v___x_1673_ = v___x_1663_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
v_val_1657_ = v___x_1673_;
goto v___jp_1656_;
}
}
}
}
v___jp_1656_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1658_, 0, v_val_1657_);
v___x_1659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1647_, v___x_1648_, v___x_1658_, v___f_1649_);
return v___x_1659_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v___x_1676_, lean_object* v___x_1677_, lean_object* v___f_1678_, lean_object* v_a_1679_, lean_object* v_op_1680_, lean_object* v_flags_1681_, lean_object* v_payload_1682_, lean_object* v_x_1683_, lean_object* v___y_1684_){
_start:
{
uint8_t v___x_1797__boxed_1685_; uint32_t v_op_boxed_1686_; uint64_t v_flags_boxed_1687_; lean_object* v_res_1688_; 
v___x_1797__boxed_1685_ = lean_unbox(v___x_1677_);
v_op_boxed_1686_ = lean_unbox_uint32(v_op_1680_);
lean_dec(v_op_1680_);
v_flags_boxed_1687_ = lean_unbox_uint64(v_flags_1681_);
lean_dec_ref(v_flags_1681_);
v_res_1688_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v___x_1676_, v___x_1797__boxed_1685_, v___f_1678_, v_a_1679_, v_op_boxed_1686_, v_flags_boxed_1687_, v_payload_1682_, v_x_1683_);
lean_dec(v_payload_1682_);
lean_dec(v_a_1679_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7(lean_object* v___f_1689_, lean_object* v_a_1690_, uint32_t v_op_1691_, uint64_t v_flags_1692_, lean_object* v_payload_1693_, lean_object* v_x_1694_){
_start:
{
if (lean_obj_tag(v_x_1694_) == 0)
{
lean_object* v___x_1696_; 
lean_dec_ref(v___f_1689_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_x_1694_);
return v___x_1696_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1717_; 
v_a_1697_ = lean_ctor_get(v_x_1694_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_x_1694_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1699_ = v_x_1694_;
v_isShared_1700_ = v_isSharedCheck_1717_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v_x_1694_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1717_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
uint32_t v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; lean_object* v_val_1705_; lean_object* v___x_1708_; 
v___x_1701_ = 0;
v___x_1702_ = lean_unsigned_to_nat(0u);
v___x_1703_ = 0;
v___x_1708_ = lasm_js_call_into(v_a_1690_, v_op_1691_, v___x_1701_, v_flags_1692_, v_a_1697_, v_payload_1693_);
lean_dec(v_a_1697_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1711_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 0, v_a_1709_);
v___x_1711_ = v___x_1699_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
v_val_1705_ = v___x_1711_;
goto v___jp_1704_;
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; 
v_a_1713_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1708_, 1);
if (v_isShared_1700_ == 0)
{
lean_ctor_set_tag(v___x_1699_, 0);
lean_ctor_set(v___x_1699_, 0, v_a_1713_);
v___x_1715_ = v___x_1699_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
v_val_1705_ = v___x_1715_;
goto v___jp_1704_;
}
}
v___jp_1704_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1706_, 0, v_val_1705_);
v___x_1707_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1702_, v___x_1703_, v___x_1706_, v___f_1689_);
return v___x_1707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed(lean_object* v___f_1718_, lean_object* v_a_1719_, lean_object* v_op_1720_, lean_object* v_flags_1721_, lean_object* v_payload_1722_, lean_object* v_x_1723_, lean_object* v___y_1724_){
_start:
{
uint32_t v_op_boxed_1725_; uint64_t v_flags_boxed_1726_; lean_object* v_res_1727_; 
v_op_boxed_1725_ = lean_unbox_uint32(v_op_1720_);
lean_dec(v_op_1720_);
v_flags_boxed_1726_ = lean_unbox_uint64(v_flags_1721_);
lean_dec_ref(v_flags_1721_);
v_res_1727_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7(v___f_1718_, v_a_1719_, v_op_boxed_1725_, v_flags_boxed_1726_, v_payload_1722_, v_x_1723_);
lean_dec(v_payload_1722_);
lean_dec(v_a_1719_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v_a_1728_, lean_object* v_x_1729_){
_start:
{
if (lean_obj_tag(v_x_1729_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1739_; 
v_a_1731_ = lean_ctor_get(v_x_1729_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_x_1729_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1733_ = v_x_1729_;
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v_x_1729_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
return v___x_1737_;
}
}
}
else
{
lean_object* v___x_1740_; 
lean_dec_ref_known(v_x_1729_, 1);
v___x_1740_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1728_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v_a_1741_, lean_object* v_x_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v_a_1741_, v_x_1742_);
lean_dec(v_a_1741_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_failurePrefix_1745_, uint32_t v_op_1746_, uint64_t v_flags_1747_, lean_object* v_payload_1748_, lean_object* v___f_1749_, lean_object* v___f_1750_, lean_object* v___f_1751_, lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1762_; 
lean_dec_ref(v___f_1751_);
lean_dec_ref(v___f_1750_);
lean_dec_ref(v___f_1749_);
lean_dec(v_payload_1748_);
v_a_1754_ = lean_ctor_get(v_x_1752_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v_x_1752_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1756_ = v_x_1752_;
v_isShared_1757_ = v_isSharedCheck_1762_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v_x_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1762_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
return v___x_1760_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1809_; 
v_a_1763_ = lean_ctor_get(v_x_1752_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_x_1752_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1765_ = v_x_1752_;
v_isShared_1766_ = v_isSharedCheck_1809_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v_x_1752_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1809_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1767_ = lean_string_utf8_byte_size(v_failurePrefix_1745_);
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = lean_nat_dec_eq(v___x_1767_, v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___f_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___f_1774_; lean_object* v_val_1776_; lean_object* v___x_1781_; 
lean_dec_ref(v___f_1751_);
lean_inc(v_a_1763_);
v___f_1770_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1770_, 0, v_a_1763_);
v___x_1771_ = lean_box(v___x_1769_);
v___x_1772_ = lean_box_uint32(v_op_1746_);
v___x_1773_ = lean_box_uint64(v_flags_1747_);
lean_inc(v_payload_1748_);
v___f_1774_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1774_, 0, v___x_1768_);
lean_closure_set(v___f_1774_, 1, v___x_1771_);
lean_closure_set(v___f_1774_, 2, v___f_1770_);
lean_closure_set(v___f_1774_, 3, v_a_1763_);
lean_closure_set(v___f_1774_, 4, v___x_1772_);
lean_closure_set(v___f_1774_, 5, v___x_1773_);
lean_closure_set(v___f_1774_, 6, v_payload_1748_);
v___x_1781_ = l_Lasm_JS_Wire_encodeIO(v_payload_1748_);
lean_dec(v_payload_1748_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1782_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v_a_1782_);
v___x_1784_ = v___x_1765_;
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
v_val_1776_ = v___x_1784_;
goto v___jp_1775_;
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; 
v_a_1786_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1781_, 1);
if (v_isShared_1766_ == 0)
{
lean_ctor_set_tag(v___x_1765_, 0);
lean_ctor_set(v___x_1765_, 0, v_a_1786_);
v___x_1788_ = v___x_1765_;
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
v_val_1776_ = v___x_1788_;
goto v___jp_1775_;
}
}
v___jp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_val_1776_);
v___x_1778_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1768_, v___x_1769_, v___x_1777_, v___f_1774_);
v___x_1779_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1768_, v___x_1769_, v___x_1778_, v___f_1749_);
v___x_1780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1768_, v___x_1769_, v___x_1779_, v___f_1750_);
return v___x_1780_;
}
}
else
{
lean_object* v___f_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___f_1793_; uint8_t v___x_1794_; lean_object* v_val_1796_; lean_object* v___x_1800_; 
lean_dec_ref(v___f_1750_);
lean_dec_ref(v___f_1749_);
lean_inc(v_a_1763_);
v___f_1790_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1790_, 0, v_a_1763_);
v___x_1791_ = lean_box_uint32(v_op_1746_);
v___x_1792_ = lean_box_uint64(v_flags_1747_);
lean_inc(v_payload_1748_);
v___f_1793_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1793_, 0, v___f_1790_);
lean_closure_set(v___f_1793_, 1, v_a_1763_);
lean_closure_set(v___f_1793_, 2, v___x_1791_);
lean_closure_set(v___f_1793_, 3, v___x_1792_);
lean_closure_set(v___f_1793_, 4, v_payload_1748_);
v___x_1794_ = 0;
v___x_1800_ = l_Lasm_JS_Wire_encodeIO(v_payload_1748_);
lean_dec(v_payload_1748_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1803_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v_a_1801_);
v___x_1803_ = v___x_1765_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
v_val_1796_ = v___x_1803_;
goto v___jp_1795_;
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; 
v_a_1805_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v___x_1800_, 1);
if (v_isShared_1766_ == 0)
{
lean_ctor_set_tag(v___x_1765_, 0);
lean_ctor_set(v___x_1765_, 0, v_a_1805_);
v___x_1807_ = v___x_1765_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1805_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
v_val_1796_ = v___x_1807_;
goto v___jp_1795_;
}
}
v___jp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v_val_1796_);
v___x_1798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1768_, v___x_1794_, v___x_1797_, v___f_1793_);
v___x_1799_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1768_, v___x_1794_, v___x_1798_, v___f_1751_);
return v___x_1799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_failurePrefix_1810_, lean_object* v_op_1811_, lean_object* v_flags_1812_, lean_object* v_payload_1813_, lean_object* v___f_1814_, lean_object* v___f_1815_, lean_object* v___f_1816_, lean_object* v_x_1817_, lean_object* v___y_1818_){
_start:
{
uint32_t v_op_boxed_1819_; uint64_t v_flags_boxed_1820_; lean_object* v_res_1821_; 
v_op_boxed_1819_ = lean_unbox_uint32(v_op_1811_);
lean_dec(v_op_1811_);
v_flags_boxed_1820_ = lean_unbox_uint64(v_flags_1812_);
lean_dec_ref(v_flags_1812_);
v_res_1821_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_failurePrefix_1810_, v_op_boxed_1819_, v_flags_boxed_1820_, v_payload_1813_, v___f_1814_, v___f_1815_, v___f_1816_, v_x_1817_);
lean_dec_ref(v_failurePrefix_1810_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1822_, lean_object* v_x_1823_){
_start:
{
if (lean_obj_tag(v_x_1823_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1833_; 
lean_dec_ref(v___f_1822_);
v_a_1825_ = lean_ctor_get(v_x_1823_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_x_1823_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1827_ = v_x_1823_;
v_isShared_1828_ = v_isSharedCheck_1833_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_a_1825_);
lean_dec(v_x_1823_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1833_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1825_);
v___x_1830_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1831_; 
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
return v___x_1831_;
}
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1835_; 
v_a_1834_ = lean_ctor_get(v_x_1823_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v_x_1823_, 1);
v___x_1835_ = lean_apply_2(v___f_1822_, v_a_1834_, lean_box(0));
return v___x_1835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1836_, lean_object* v_x_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1836_, v_x_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_x_1840_){
_start:
{
if (lean_obj_tag(v_x_1840_) == 0)
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_x_1840_);
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1851_; 
v_a_1843_ = lean_ctor_get(v_x_1840_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_x_1840_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1845_ = v_x_1840_;
v_isShared_1846_ = v_isSharedCheck_1851_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v_x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1851_;
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
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_x_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_x_1852_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8(lean_object* v___f_1855_, lean_object* v_x_1856_){
_start:
{
if (lean_obj_tag(v_x_1856_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1866_; 
lean_dec_ref(v___f_1855_);
v_a_1858_ = lean_ctor_get(v_x_1856_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_x_1856_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1860_ = v_x_1856_;
v_isShared_1861_ = v_isSharedCheck_1866_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v_x_1856_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1866_;
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
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
}
}
else
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1878_; 
v_isSharedCheck_1878_ = !lean_is_exclusive(v_x_1856_);
if (v_isSharedCheck_1878_ == 0)
{
lean_object* v_unused_1879_; 
v_unused_1879_ = lean_ctor_get(v_x_1856_, 0);
lean_dec(v_unused_1879_);
v___x_1868_ = v_x_1856_;
v_isShared_1869_ = v_isSharedCheck_1878_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v_x_1856_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1878_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1870_; uint8_t v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1874_; 
v___x_1870_ = lean_unsigned_to_nat(0u);
v___x_1871_ = 0;
v___x_1872_ = lean_io_promise_new();
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 0, v___x_1872_);
v___x_1874_ = v___x_1868_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
v___x_1876_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1870_, v___x_1871_, v___x_1875_, v___f_1855_);
return v___x_1876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8___boxed(lean_object* v___f_1880_, lean_object* v_x_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8(v___f_1880_, v_x_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v_failurePrefix_1884_, lean_object* v_x_1885_){
_start:
{
if (lean_obj_tag(v_x_1885_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1898_; 
v_a_1887_ = lean_ctor_get(v_x_1885_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v_x_1885_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1889_ = v_x_1885_;
v_isShared_1890_ = v_isSharedCheck_1898_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v_x_1885_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1898_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1895_; 
v___x_1891_ = lean_io_error_to_string(v_a_1887_);
v___x_1892_ = lean_string_append(v_failurePrefix_1884_, v___x_1891_);
lean_dec_ref(v___x_1891_);
v___x_1893_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v___x_1893_);
v___x_1895_ = v___x_1889_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
}
}
else
{
lean_object* v___x_1899_; 
lean_dec_ref(v_failurePrefix_1884_);
v___x_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1899_, 0, v_x_1885_);
return v___x_1899_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v_failurePrefix_1900_, lean_object* v_x_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v_failurePrefix_1900_, v_x_1901_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1909_, uint64_t v_flags_1910_, lean_object* v_payload_1911_, lean_object* v_failurePrefix_1912_){
_start:
{
lean_object* v___f_1914_; lean_object* v___f_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; lean_object* v_val_1923_; lean_object* v___x_1926_; 
v___f_1914_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
lean_inc_ref(v_failurePrefix_1912_);
v___f_1915_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1915_, 0, v_failurePrefix_1912_);
v___x_1916_ = lean_box_uint32(v_op_1909_);
v___x_1917_ = lean_box_uint64(v_flags_1910_);
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1918_, 0, v_failurePrefix_1912_);
lean_closure_set(v___f_1918_, 1, v___x_1916_);
lean_closure_set(v___f_1918_, 2, v___x_1917_);
lean_closure_set(v___f_1918_, 3, v_payload_1911_);
lean_closure_set(v___f_1918_, 4, v___f_1915_);
lean_closure_set(v___f_1918_, 5, v___f_1914_);
lean_closure_set(v___f_1918_, 6, v___f_1914_);
v___f_1919_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1919_, 0, v___f_1918_);
v___x_1920_ = lean_unsigned_to_nat(0u);
v___x_1921_ = 0;
v___x_1926_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
v___x_1925_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1920_, v___x_1921_, v___x_1924_, v___f_1919_);
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1943_, lean_object* v_flags_1944_, lean_object* v_payload_1945_, lean_object* v_failurePrefix_1946_, lean_object* v_a_1947_){
_start:
{
uint32_t v_op_boxed_1948_; uint64_t v_flags_boxed_1949_; lean_object* v_res_1950_; 
v_op_boxed_1948_ = lean_unbox_uint32(v_op_1943_);
lean_dec(v_op_1943_);
v_flags_boxed_1949_ = lean_unbox_uint64(v_flags_1944_);
lean_dec_ref(v_flags_1944_);
v_res_1950_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1948_, v_flags_boxed_1949_, v_payload_1945_, v_failurePrefix_1946_);
return v_res_1950_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1951_; uint8_t v___x_1952_; uint64_t v___x_1953_; 
v___x_1951_ = 8ULL;
v___x_1952_ = 0;
v___x_1953_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1952_, v___x_1951_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1954_, lean_object* v_name_1955_, lean_object* v_args_1956_){
_start:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; uint32_t v___x_1961_; uint64_t v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1958_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1959_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1959_, 0, v_o_1954_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1960_, 0, v_name_1955_);
v___x_1961_ = 205;
v___x_1962_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1963_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1963_, 0, v_args_1956_);
v___x_1964_ = lean_unsigned_to_nat(3u);
v___x_1965_ = lean_mk_empty_array_with_capacity(v___x_1964_);
v___x_1966_ = lean_array_push(v___x_1965_, v___x_1959_);
v___x_1967_ = lean_array_push(v___x_1966_, v___x_1960_);
v___x_1968_ = lean_array_push(v___x_1967_, v___x_1963_);
v___x_1969_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
v___x_1970_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1961_, v___x_1962_, v___x_1969_, v___x_1958_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1971_, lean_object* v_name_1972_, lean_object* v_args_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1971_, v_name_1972_, v_args_1973_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1976_, lean_object* v___x_1977_, lean_object* v___x_1978_, lean_object* v___x_1979_, lean_object* v___f_1980_){
_start:
{
uint8_t v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1982_ = 0;
v___x_1983_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1976_, v___x_1977_, v___x_1978_);
v___x_1984_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1979_, v___x_1982_, v___x_1983_, v___f_1980_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1985_, lean_object* v___x_1986_, lean_object* v___x_1987_, lean_object* v___x_1988_, lean_object* v___f_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1985_, v___x_1986_, v___x_1987_, v___x_1988_, v___f_1989_);
return v_res_1991_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1992_; uint64_t v___x_1993_; 
v___x_1992_ = 1;
v___x_1993_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1992_);
return v___x_1993_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1994_, uint64_t v_extra_1995_){
_start:
{
uint64_t v___x_1996_; uint64_t v___y_1998_; 
v___x_1996_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1994_ == 0)
{
uint64_t v___x_2001_; 
v___x_2001_ = 0ULL;
v___y_1998_ = v___x_2001_;
goto v___jp_1997_;
}
else
{
uint64_t v___x_2002_; 
v___x_2002_ = 2ULL;
v___y_1998_ = v___x_2002_;
goto v___jp_1997_;
}
v___jp_1997_:
{
uint64_t v___x_1999_; uint64_t v___x_2000_; 
v___x_1999_ = lean_uint64_lor(v___x_1996_, v___y_1998_);
v___x_2000_ = lean_uint64_lor(v___x_1999_, v_extra_1995_);
return v___x_2000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_2003_, lean_object* v_extra_2004_){
_start:
{
uint8_t v_await_boxed_2005_; uint64_t v_extra_boxed_2006_; uint64_t v_res_2007_; lean_object* v_r_2008_; 
v_await_boxed_2005_ = lean_unbox(v_await_2003_);
v_extra_boxed_2006_ = lean_unbox_uint64(v_extra_2004_);
lean_dec_ref(v_extra_2004_);
v_res_2007_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_2005_, v_extra_boxed_2006_);
v_r_2008_ = lean_box_uint64(v_res_2007_);
return v_r_2008_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2009_; uint8_t v___x_2010_; uint64_t v___x_2011_; 
v___x_2009_ = 8ULL;
v___x_2010_ = 0;
v___x_2011_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_2010_, v___x_2009_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_2013_, lean_object* v_name_2014_, lean_object* v_args_2015_){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint64_t v___x_2020_; lean_object* v___x_2021_; 
v___x_2017_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2018_, 0, v_o_2013_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
lean_inc_ref(v_name_2014_);
v___x_2019_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2019_, 0, v_name_2014_);
v___x_2020_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2021_ = l_Lasm_JS_Value_invokeRaw(v___x_2018_, v___x_2019_, v_args_2015_, v___x_2020_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2024_ = lean_string_append(v___x_2023_, v_name_2014_);
lean_dec_ref(v_name_2014_);
v___x_2025_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2024_, v_a_2022_);
lean_dec(v_a_2022_);
lean_dec_ref(v___x_2024_);
return v___x_2025_;
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v_name_2014_);
v_a_2026_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_2021_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2021_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_2034_, lean_object* v_name_2035_, lean_object* v_args_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_2034_, v_name_2035_, v_args_2036_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_2044_){
_start:
{
lean_object* v___f_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___f_2046_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_2047_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_2048_ = lean_unsigned_to_nat(0u);
v___x_2049_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2050_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_2044_, v___x_2047_, v___x_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2060_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___f_2056_; lean_object* v___x_2058_; 
v___x_2055_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_2056_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_2056_, 0, v_a_2051_);
lean_closure_set(v___f_2056_, 1, v___x_2055_);
lean_closure_set(v___f_2056_, 2, v___x_2049_);
lean_closure_set(v___f_2056_, 3, v___x_2048_);
lean_closure_set(v___f_2056_, 4, v___f_2046_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___f_2056_);
v___x_2058_ = v___x_2053_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___f_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_a_2061_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2050_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2050_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_2072_){
_start:
{
lean_object* v___x_2074_; 
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_d_2072_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_2075_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_2078_, lean_object* v_d_2079_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v_d_2079_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_2082_, lean_object* v_d_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_2082_, v_d_2083_);
lean_dec_ref(v_context_2082_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_2086_, uint32_t v_op_2087_, uint64_t v_flags_2088_, lean_object* v_payload_2089_, lean_object* v_failurePrefix_2090_){
_start:
{
lean_object* v___x_2092_; 
v___x_2092_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_2087_, v_flags_2088_, v_payload_2089_, v_failurePrefix_2090_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_2093_, lean_object* v_op_2094_, lean_object* v_flags_2095_, lean_object* v_payload_2096_, lean_object* v_failurePrefix_2097_, lean_object* v_a_2098_){
_start:
{
uint32_t v_op_boxed_2099_; uint64_t v_flags_boxed_2100_; lean_object* v_res_2101_; 
v_op_boxed_2099_ = lean_unbox_uint32(v_op_2094_);
lean_dec(v_op_2094_);
v_flags_boxed_2100_ = lean_unbox_uint64(v_flags_2095_);
lean_dec_ref(v_flags_2095_);
v_res_2101_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_2093_, v_op_boxed_2099_, v_flags_boxed_2100_, v_payload_2096_, v_failurePrefix_2097_);
lean_dec_ref(v_context_2093_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_2106_){
_start:
{
if (lean_obj_tag(v_x_2106_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2116_; 
v_a_2108_ = lean_ctor_get(v_x_2106_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_x_2106_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2110_ = v_x_2106_;
v_isShared_2111_ = v_isSharedCheck_2116_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v_x_2106_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2116_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2108_);
v___x_2113_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
}
else
{
lean_object* v___x_2117_; 
lean_dec_ref_known(v_x_2106_, 1);
v___x_2117_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_2117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_2118_);
return v_res_2120_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2121_; uint8_t v___x_2122_; uint64_t v___x_2123_; 
v___x_2121_ = 4ULL;
v___x_2122_ = 0;
v___x_2123_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_2122_, v___x_2121_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_2125_, lean_object* v_args_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; uint64_t v___x_2131_; lean_object* v___x_2132_; 
v___x_2128_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2129_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_c_2125_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_box(0);
v___x_2131_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_2132_ = l_Lasm_JS_Value_invokeRaw(v___x_2129_, v___x_2130_, v_args_2126_, v___x_2131_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2132_, 1);
v___x_2134_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2135_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2134_, v_a_2133_);
lean_dec(v_a_2133_);
return v___x_2135_;
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
v_a_2136_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2132_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2132_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
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
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_2144_, lean_object* v_args_2145_, lean_object* v_a_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_2144_, v_args_2145_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_2148_, lean_object* v___x_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v_val_2153_; 
if (lean_obj_tag(v_x_2150_) == 0)
{
lean_object* v___x_2155_; 
lean_dec(v___x_2149_);
lean_dec(v___y_2148_);
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_x_2150_);
return v___x_2155_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2173_; 
v_a_2156_ = lean_ctor_get(v_x_2150_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2158_ = v_x_2150_;
v_isShared_2159_ = v_isSharedCheck_2173_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v_x_2150_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2173_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2160_ = lean_unsigned_to_nat(2u);
v___x_2161_ = lean_mk_empty_array_with_capacity(v___x_2160_);
v___x_2162_ = lean_array_push(v___x_2161_, v___y_2148_);
v___x_2163_ = lean_array_push(v___x_2162_, v___x_2149_);
v___x_2164_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2156_, v___x_2163_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2167_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2165_);
lean_dec_ref_known(v___x_2164_, 1);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v_a_2165_);
v___x_2167_ = v___x_2158_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
v_val_2153_ = v___x_2167_;
goto v___jp_2152_;
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; 
v_a_2169_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2169_);
lean_dec_ref_known(v___x_2164_, 1);
if (v_isShared_2159_ == 0)
{
lean_ctor_set_tag(v___x_2158_, 0);
lean_ctor_set(v___x_2158_, 0, v_a_2169_);
v___x_2171_ = v___x_2158_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
v_val_2153_ = v___x_2171_;
goto v___jp_2152_;
}
}
}
}
v___jp_2152_:
{
lean_object* v___x_2154_; 
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v_val_2153_);
return v___x_2154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_2174_, lean_object* v___x_2175_, lean_object* v_x_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_2174_, v___x_2175_, v_x_2176_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_2179_, lean_object* v___x_2180_, lean_object* v_x_2181_){
_start:
{
lean_object* v_val_2184_; 
if (lean_obj_tag(v_x_2181_) == 0)
{
lean_object* v___x_2186_; 
lean_dec(v___x_2180_);
lean_dec(v_a_2179_);
v___x_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_x_2181_);
return v___x_2186_;
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2206_; 
v_a_2187_ = lean_ctor_get(v_x_2181_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_x_2181_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2189_ = v_x_2181_;
v_isShared_2190_ = v_isSharedCheck_2206_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v_x_2181_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2206_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2191_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2192_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2192_, 0, v_a_2179_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = lean_unsigned_to_nat(2u);
v___x_2194_ = lean_mk_empty_array_with_capacity(v___x_2193_);
v___x_2195_ = lean_array_push(v___x_2194_, v___x_2192_);
v___x_2196_ = lean_array_push(v___x_2195_, v___x_2180_);
v___x_2197_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2187_, v___x_2196_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2200_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v_a_2198_);
v___x_2200_ = v___x_2189_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2198_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_val_2184_ = v___x_2200_;
goto v___jp_2183_;
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; 
v_a_2202_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2202_);
lean_dec_ref_known(v___x_2197_, 1);
if (v_isShared_2190_ == 0)
{
lean_ctor_set_tag(v___x_2189_, 0);
lean_ctor_set(v___x_2189_, 0, v_a_2202_);
v___x_2204_ = v___x_2189_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_a_2202_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
v_val_2184_ = v___x_2204_;
goto v___jp_2183_;
}
}
}
}
v___jp_2183_:
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_val_2184_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_2207_, lean_object* v___x_2208_, lean_object* v_x_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_2207_, v___x_2208_, v_x_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_2213_, lean_object* v_key_2214_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_inc_ref(v_key_2214_);
v___x_2216_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_key_2214_);
v___x_2217_ = l_Lasm_JS_Wire_encodeIO(v___x_2216_);
lean_dec_ref_known(v___x_2216_, 1);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; uint32_t v___x_2219_; uint32_t v___x_2220_; uint64_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v___x_2219_ = 203;
v___x_2220_ = lasm_js_value_handle(v_o_2213_);
v___x_2221_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_2222_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2223_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2223_, 0, v_o_2213_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___x_2224_ = lasm_js_call(v___x_2219_, v___x_2220_, v___x_2221_, v_a_2218_, v___x_2223_);
lean_dec_ref_known(v___x_2223_, 2);
lean_dec(v_a_2218_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v___x_2226_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2227_ = l_String_quote(v_key_2214_);
v___x_2228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
v___x_2229_ = lean_unsigned_to_nat(120u);
v___x_2230_ = lean_unsigned_to_nat(0u);
v___x_2231_ = l_Std_Format_pretty(v___x_2228_, v___x_2229_, v___x_2230_, v___x_2230_);
v___x_2232_ = lean_string_append(v___x_2226_, v___x_2231_);
lean_dec_ref(v___x_2231_);
v___x_2233_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2232_, v_a_2225_);
lean_dec(v_a_2225_);
lean_dec_ref(v___x_2232_);
return v___x_2233_;
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec_ref(v_key_2214_);
v_a_2234_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2224_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2224_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
lean_dec_ref(v_key_2214_);
lean_dec(v_o_2213_);
v_a_2242_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2217_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2217_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2250_, lean_object* v_key_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2250_, v_key_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2255_, uint8_t v___x_2256_, lean_object* v___f_2257_, lean_object* v_a_2258_, lean_object* v_x_2259_){
_start:
{
lean_object* v_val_2262_; 
if (lean_obj_tag(v_x_2259_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2273_; 
lean_dec(v_a_2258_);
lean_dec_ref(v___f_2257_);
lean_dec(v___x_2255_);
v_a_2265_ = lean_ctor_get(v_x_2259_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_x_2259_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2267_ = v_x_2259_;
v_isShared_2268_ = v_isSharedCheck_2273_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v_x_2259_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2273_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
return v___x_2271_;
}
}
}
else
{
lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2287_; 
v_isSharedCheck_2287_ = !lean_is_exclusive(v_x_2259_);
if (v_isSharedCheck_2287_ == 0)
{
lean_object* v_unused_2288_; 
v_unused_2288_ = lean_ctor_get(v_x_2259_, 0);
lean_dec(v_unused_2288_);
v___x_2275_ = v_x_2259_;
v_isShared_2276_ = v_isSharedCheck_2287_;
goto v_resetjp_2274_;
}
else
{
lean_dec(v_x_2259_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2287_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2278_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2258_, v___x_2277_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 0, v_a_2279_);
v___x_2281_ = v___x_2275_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2279_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
v_val_2262_ = v___x_2281_;
goto v___jp_2261_;
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; 
v_a_2283_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2278_, 1);
if (v_isShared_2276_ == 0)
{
lean_ctor_set_tag(v___x_2275_, 0);
lean_ctor_set(v___x_2275_, 0, v_a_2283_);
v___x_2285_ = v___x_2275_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
v_val_2262_ = v___x_2285_;
goto v___jp_2261_;
}
}
}
}
v___jp_2261_:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v_val_2262_);
v___x_2264_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2255_, v___x_2256_, v___x_2263_, v___f_2257_);
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2289_, lean_object* v___x_2290_, lean_object* v___f_2291_, lean_object* v_a_2292_, lean_object* v_x_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v___x_5432__boxed_2295_; lean_object* v_res_2296_; 
v___x_5432__boxed_2295_ = lean_unbox(v___x_2290_);
v_res_2296_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2289_, v___x_5432__boxed_2295_, v___f_2291_, v_a_2292_, v_x_2293_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2298_, lean_object* v___x_2299_, uint8_t v___x_2300_, lean_object* v___f_2301_, lean_object* v_chunk_2302_){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2304_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2305_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_chunk_2302_);
v___x_2306_ = lean_unsigned_to_nat(1u);
v___x_2307_ = lean_mk_empty_array_with_capacity(v___x_2306_);
v___x_2308_ = lean_array_push(v___x_2307_, v___x_2305_);
v___x_2309_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2298_, v___x_2304_, v___x_2308_);
v___x_2310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2299_, v___x_2300_, v___x_2309_, v___f_2301_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2311_, lean_object* v___x_2312_, lean_object* v___x_2313_, lean_object* v___f_2314_, lean_object* v_chunk_2315_, lean_object* v___y_2316_){
_start:
{
uint8_t v___x_5511__boxed_2317_; lean_object* v_res_2318_; 
v___x_5511__boxed_2317_ = lean_unbox(v___x_2313_);
v_res_2318_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2311_, v___x_2312_, v___x_5511__boxed_2317_, v___f_2314_, v_chunk_2315_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2320_, lean_object* v_a_2321_, lean_object* v___x_2322_, uint8_t v___x_2323_, lean_object* v___f_2324_, lean_object* v_x_2325_){
_start:
{
if (lean_obj_tag(v_x_2325_) == 0)
{
lean_object* v___x_2327_; 
lean_dec_ref(v___f_2324_);
lean_dec(v___x_2322_);
lean_dec(v_a_2321_);
lean_dec_ref(v___x_2320_);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_x_2325_);
return v___x_2327_;
}
else
{
lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2340_; 
v_isSharedCheck_2340_ = !lean_is_exclusive(v_x_2325_);
if (v_isSharedCheck_2340_ == 0)
{
lean_object* v_unused_2341_; 
v_unused_2341_ = lean_ctor_get(v_x_2325_, 0);
lean_dec(v_unused_2341_);
v___x_2329_ = v_x_2325_;
v_isShared_2330_ = v_isSharedCheck_2340_;
goto v_resetjp_2328_;
}
else
{
lean_dec(v_x_2325_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2340_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2331_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2330_ == 0)
{
lean_ctor_set_tag(v___x_2329_, 4);
lean_ctor_set(v___x_2329_, 0, v___x_2320_);
v___x_2333_ = v___x_2329_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2320_);
v___x_2333_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2334_ = lean_unsigned_to_nat(1u);
v___x_2335_ = lean_mk_empty_array_with_capacity(v___x_2334_);
v___x_2336_ = lean_array_push(v___x_2335_, v___x_2333_);
v___x_2337_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2321_, v___x_2331_, v___x_2336_);
v___x_2338_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2322_, v___x_2323_, v___x_2337_, v___f_2324_);
return v___x_2338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2342_, lean_object* v_a_2343_, lean_object* v___x_2344_, lean_object* v___x_2345_, lean_object* v___f_2346_, lean_object* v_x_2347_, lean_object* v___y_2348_){
_start:
{
uint8_t v___x_5544__boxed_2349_; lean_object* v_res_2350_; 
v___x_5544__boxed_2349_ = lean_unbox(v___x_2345_);
v_res_2350_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2342_, v_a_2343_, v___x_2344_, v___x_5544__boxed_2349_, v___f_2346_, v_x_2347_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2352_, lean_object* v___x_2353_, uint8_t v___x_2354_, lean_object* v___f_2355_, lean_object* v_x_2356_){
_start:
{
if (lean_obj_tag(v_x_2356_) == 0)
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2380_; 
v_a_2358_ = lean_ctor_get(v_x_2356_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_x_2356_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2360_ = v_x_2356_;
v_isShared_2361_ = v_isSharedCheck_2380_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v_x_2356_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2380_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___f_2365_; lean_object* v_val_2367_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2362_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2363_ = lean_io_error_to_string(v_a_2358_);
v___x_2364_ = lean_box(v___x_2354_);
lean_inc(v___x_2353_);
lean_inc_ref(v___x_2363_);
v___f_2365_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2365_, 0, v___x_2363_);
lean_closure_set(v___f_2365_, 1, v_a_2352_);
lean_closure_set(v___f_2365_, 2, v___x_2353_);
lean_closure_set(v___f_2365_, 3, v___x_2364_);
lean_closure_set(v___f_2365_, 4, v___f_2355_);
v___x_2370_ = lean_string_append(v___x_2362_, v___x_2363_);
lean_dec_ref(v___x_2363_);
v___x_2371_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2370_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
if (v_isShared_2361_ == 0)
{
lean_ctor_set_tag(v___x_2360_, 1);
lean_ctor_set(v___x_2360_, 0, v_a_2372_);
v___x_2374_ = v___x_2360_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2372_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
v_val_2367_ = v___x_2374_;
goto v___jp_2366_;
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; 
v_a_2376_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2371_, 1);
if (v_isShared_2361_ == 0)
{
lean_ctor_set(v___x_2360_, 0, v_a_2376_);
v___x_2378_ = v___x_2360_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
v_val_2367_ = v___x_2378_;
goto v___jp_2366_;
}
}
v___jp_2366_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2368_, 0, v_val_2367_);
v___x_2369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2353_, v___x_2354_, v___x_2368_, v___f_2365_);
return v___x_2369_;
}
}
}
else
{
lean_object* v___x_2381_; 
lean_dec_ref(v___f_2355_);
lean_dec(v___x_2353_);
lean_dec(v_a_2352_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_x_2356_);
return v___x_2381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2382_, lean_object* v___x_2383_, lean_object* v___x_2384_, lean_object* v___f_2385_, lean_object* v_x_2386_, lean_object* v___y_2387_){
_start:
{
uint8_t v___x_5599__boxed_2388_; lean_object* v_res_2389_; 
v___x_5599__boxed_2388_ = lean_unbox(v___x_2384_);
v_res_2389_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2382_, v___x_2383_, v___x_5599__boxed_2388_, v___f_2385_, v_x_2386_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2391_, lean_object* v___x_2392_, lean_object* v___x_2393_, uint8_t v___x_2394_, lean_object* v___f_2395_, lean_object* v_x_2396_){
_start:
{
if (lean_obj_tag(v_x_2396_) == 0)
{
lean_object* v___x_2398_; 
lean_dec_ref(v___f_2395_);
lean_dec(v___x_2393_);
lean_dec_ref(v___x_2392_);
lean_dec(v_a_2391_);
v___x_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2398_, 0, v_x_2396_);
return v___x_2398_;
}
else
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
lean_dec_ref_known(v_x_2396_, 1);
v___x_2399_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2400_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2391_, v___x_2399_, v___x_2392_);
v___x_2401_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2393_, v___x_2394_, v___x_2400_, v___f_2395_);
return v___x_2401_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2402_, lean_object* v___x_2403_, lean_object* v___x_2404_, lean_object* v___x_2405_, lean_object* v___f_2406_, lean_object* v_x_2407_, lean_object* v___y_2408_){
_start:
{
uint8_t v___x_5670__boxed_2409_; lean_object* v_res_2410_; 
v___x_5670__boxed_2409_ = lean_unbox(v___x_2405_);
v_res_2410_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2402_, v___x_2403_, v___x_2404_, v___x_5670__boxed_2409_, v___f_2406_, v_x_2407_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2411_, lean_object* v___f_2412_, lean_object* v___x_2413_, uint8_t v___x_2414_, lean_object* v___f_2415_, lean_object* v___f_2416_){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_apply_2(v_val_2411_, v___f_2412_, lean_box(0));
lean_inc(v___x_2413_);
v___x_2419_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2413_, v___x_2414_, v___x_2418_, v___f_2415_);
v___x_2420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2413_, v___x_2414_, v___x_2419_, v___f_2416_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2421_, lean_object* v___f_2422_, lean_object* v___x_2423_, lean_object* v___x_2424_, lean_object* v___f_2425_, lean_object* v___f_2426_, lean_object* v___y_2427_){
_start:
{
uint8_t v___x_5702__boxed_2428_; lean_object* v_res_2429_; 
v___x_5702__boxed_2428_ = lean_unbox(v___x_2424_);
v_res_2429_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2421_, v___f_2422_, v___x_2423_, v___x_5702__boxed_2428_, v___f_2425_, v___f_2426_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2430_, uint8_t v___x_2431_, lean_object* v___f_2432_, lean_object* v___f_2433_, lean_object* v___x_2434_, lean_object* v___f_2435_, lean_object* v_val_2436_, lean_object* v___f_2437_, lean_object* v_x_2438_){
_start:
{
if (lean_obj_tag(v_x_2438_) == 0)
{
lean_object* v___x_2440_; 
lean_dec_ref(v___f_2437_);
lean_dec_ref(v_val_2436_);
lean_dec_ref(v___f_2435_);
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___f_2433_);
lean_dec_ref(v___f_2432_);
lean_dec(v___x_2430_);
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v_x_2438_);
return v___x_2440_;
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2442_; lean_object* v___f_2443_; lean_object* v___x_2444_; lean_object* v___f_2445_; lean_object* v___x_2446_; lean_object* v___f_2447_; lean_object* v___x_2448_; lean_object* v___f_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v_a_2441_ = lean_ctor_get(v_x_2438_, 0);
lean_inc_n(v_a_2441_, 3);
lean_dec_ref_known(v_x_2438_, 1);
v___x_2442_ = lean_box(v___x_2431_);
lean_inc_n(v___x_2430_, 5);
v___f_2443_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2443_, 0, v_a_2441_);
lean_closure_set(v___f_2443_, 1, v___x_2430_);
lean_closure_set(v___f_2443_, 2, v___x_2442_);
lean_closure_set(v___f_2443_, 3, v___f_2432_);
v___x_2444_ = lean_box(v___x_2431_);
v___f_2445_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2445_, 0, v_a_2441_);
lean_closure_set(v___f_2445_, 1, v___x_2430_);
lean_closure_set(v___f_2445_, 2, v___x_2444_);
lean_closure_set(v___f_2445_, 3, v___f_2433_);
v___x_2446_ = lean_box(v___x_2431_);
v___f_2447_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2447_, 0, v_a_2441_);
lean_closure_set(v___f_2447_, 1, v___x_2434_);
lean_closure_set(v___f_2447_, 2, v___x_2430_);
lean_closure_set(v___f_2447_, 3, v___x_2446_);
lean_closure_set(v___f_2447_, 4, v___f_2435_);
v___x_2448_ = lean_box(v___x_2431_);
v___f_2449_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2449_, 0, v_val_2436_);
lean_closure_set(v___f_2449_, 1, v___f_2443_);
lean_closure_set(v___f_2449_, 2, v___x_2430_);
lean_closure_set(v___f_2449_, 3, v___x_2448_);
lean_closure_set(v___f_2449_, 4, v___f_2447_);
lean_closure_set(v___f_2449_, 5, v___f_2445_);
v___x_2450_ = lean_io_as_task(v___f_2449_, v___x_2430_);
lean_dec_ref(v___x_2450_);
v___x_2451_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2452_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2430_, v___x_2431_, v___x_2451_, v___f_2437_);
return v___x_2452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2453_, lean_object* v___x_2454_, lean_object* v___f_2455_, lean_object* v___f_2456_, lean_object* v___x_2457_, lean_object* v___f_2458_, lean_object* v_val_2459_, lean_object* v___f_2460_, lean_object* v_x_2461_, lean_object* v___y_2462_){
_start:
{
uint8_t v___x_5731__boxed_2463_; lean_object* v_res_2464_; 
v___x_5731__boxed_2463_ = lean_unbox(v___x_2454_);
v_res_2464_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2453_, v___x_5731__boxed_2463_, v___f_2455_, v___f_2456_, v___x_2457_, v___f_2458_, v_val_2459_, v___f_2460_, v_x_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2466_, uint8_t v___x_2467_, lean_object* v___f_2468_, lean_object* v___x_2469_, lean_object* v_x_2470_){
_start:
{
lean_object* v_val_2473_; 
if (lean_obj_tag(v_x_2470_) == 0)
{
lean_object* v___x_2476_; 
lean_dec_ref(v___x_2469_);
lean_dec_ref(v___f_2468_);
lean_dec(v___x_2466_);
v___x_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2476_, 0, v_x_2470_);
return v___x_2476_;
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2491_; 
v_a_2477_ = lean_ctor_get(v_x_2470_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_x_2470_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2479_ = v_x_2470_;
v_isShared_2480_ = v_isSharedCheck_2491_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v_x_2470_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2491_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2482_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2477_, v___x_2481_, v___x_2469_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 1);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 0, v_a_2483_);
v___x_2485_ = v___x_2479_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
v_val_2473_ = v___x_2485_;
goto v___jp_2472_;
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; 
v_a_2487_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2482_, 1);
if (v_isShared_2480_ == 0)
{
lean_ctor_set_tag(v___x_2479_, 0);
lean_ctor_set(v___x_2479_, 0, v_a_2487_);
v___x_2489_ = v___x_2479_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
v_val_2473_ = v___x_2489_;
goto v___jp_2472_;
}
}
}
}
v___jp_2472_:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2474_, 0, v_val_2473_);
v___x_2475_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2466_, v___x_2467_, v___x_2474_, v___f_2468_);
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2492_, lean_object* v___x_2493_, lean_object* v___f_2494_, lean_object* v___x_2495_, lean_object* v_x_2496_, lean_object* v___y_2497_){
_start:
{
uint8_t v___x_5792__boxed_2498_; lean_object* v_res_2499_; 
v___x_5792__boxed_2498_ = lean_unbox(v___x_2493_);
v_res_2499_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2492_, v___x_5792__boxed_2498_, v___f_2494_, v___x_2495_, v_x_2496_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2501_, lean_object* v___x_2502_, uint8_t v___x_2503_, lean_object* v_a_2504_, lean_object* v___f_2505_, lean_object* v___f_2506_, lean_object* v___x_2507_, lean_object* v___f_2508_, lean_object* v_val_2509_, lean_object* v_a_2510_, lean_object* v_x_2511_){
_start:
{
if (lean_obj_tag(v_x_2511_) == 0)
{
lean_object* v___x_2513_; 
lean_dec(v_a_2510_);
lean_dec_ref(v_val_2509_);
lean_dec_ref(v___f_2508_);
lean_dec_ref(v___x_2507_);
lean_dec_ref(v___f_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_a_2504_);
lean_dec(v___x_2502_);
lean_dec(v___x_2501_);
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_x_2511_);
return v___x_2513_;
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2539_; 
v_a_2514_ = lean_ctor_get(v_x_2511_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v_x_2511_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2516_ = v_x_2511_;
v_isShared_2517_ = v_isSharedCheck_2539_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v_x_2511_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2539_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___f_2518_; lean_object* v___x_2519_; lean_object* v___f_2520_; lean_object* v___x_2521_; lean_object* v___f_2522_; lean_object* v___x_2523_; lean_object* v___f_2524_; lean_object* v_val_2526_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___f_2518_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2518_, 0, v_a_2514_);
lean_closure_set(v___f_2518_, 1, v___x_2501_);
v___x_2519_ = lean_box(v___x_2503_);
lean_inc_n(v___x_2502_, 3);
v___f_2520_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2520_, 0, v___x_2502_);
lean_closure_set(v___f_2520_, 1, v___x_2519_);
lean_closure_set(v___f_2520_, 2, v___f_2518_);
lean_closure_set(v___f_2520_, 3, v_a_2504_);
v___x_2521_ = lean_box(v___x_2503_);
lean_inc_ref(v___x_2507_);
v___f_2522_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2522_, 0, v___x_2502_);
lean_closure_set(v___f_2522_, 1, v___x_2521_);
lean_closure_set(v___f_2522_, 2, v___f_2505_);
lean_closure_set(v___f_2522_, 3, v___f_2506_);
lean_closure_set(v___f_2522_, 4, v___x_2507_);
lean_closure_set(v___f_2522_, 5, v___f_2508_);
lean_closure_set(v___f_2522_, 6, v_val_2509_);
lean_closure_set(v___f_2522_, 7, v___f_2520_);
v___x_2523_ = lean_box(v___x_2503_);
v___f_2524_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2524_, 0, v___x_2502_);
lean_closure_set(v___f_2524_, 1, v___x_2523_);
lean_closure_set(v___f_2524_, 2, v___f_2522_);
lean_closure_set(v___f_2524_, 3, v___x_2507_);
v___x_2529_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2530_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2510_, v___x_2529_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2533_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v_a_2531_);
v___x_2533_ = v___x_2516_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
v_val_2526_ = v___x_2533_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; 
v_a_2535_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2530_, 1);
if (v_isShared_2517_ == 0)
{
lean_ctor_set_tag(v___x_2516_, 0);
lean_ctor_set(v___x_2516_, 0, v_a_2535_);
v___x_2537_ = v___x_2516_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2535_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
v_val_2526_ = v___x_2537_;
goto v___jp_2525_;
}
}
v___jp_2525_:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_val_2526_);
v___x_2528_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2502_, v___x_2503_, v___x_2527_, v___f_2524_);
return v___x_2528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2540_, lean_object* v___x_2541_, lean_object* v___x_2542_, lean_object* v_a_2543_, lean_object* v___f_2544_, lean_object* v___f_2545_, lean_object* v___x_2546_, lean_object* v___f_2547_, lean_object* v_val_2548_, lean_object* v_a_2549_, lean_object* v_x_2550_, lean_object* v___y_2551_){
_start:
{
uint8_t v___x_5855__boxed_2552_; lean_object* v_res_2553_; 
v___x_5855__boxed_2552_ = lean_unbox(v___x_2542_);
v_res_2553_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2540_, v___x_2541_, v___x_5855__boxed_2552_, v_a_2543_, v___f_2544_, v___f_2545_, v___x_2546_, v___f_2547_, v_val_2548_, v_a_2549_, v_x_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2555_, lean_object* v___x_2556_, uint8_t v___x_2557_, lean_object* v_a_2558_, lean_object* v___f_2559_, lean_object* v___f_2560_, lean_object* v___x_2561_, lean_object* v___f_2562_, lean_object* v_val_2563_, lean_object* v_x_2564_){
_start:
{
if (lean_obj_tag(v_x_2564_) == 0)
{
lean_object* v___x_2566_; 
lean_dec_ref(v_val_2563_);
lean_dec_ref(v___f_2562_);
lean_dec_ref(v___x_2561_);
lean_dec_ref(v___f_2560_);
lean_dec_ref(v___f_2559_);
lean_dec(v_a_2558_);
lean_dec(v___x_2556_);
lean_dec(v___x_2555_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v_x_2564_);
return v___x_2566_;
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2587_; 
v_a_2567_ = lean_ctor_get(v_x_2564_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v_x_2564_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2569_ = v_x_2564_;
v_isShared_2570_ = v_isSharedCheck_2587_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v_x_2564_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2587_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___f_2572_; lean_object* v_val_2574_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2571_ = lean_box(v___x_2557_);
lean_inc(v_a_2567_);
lean_inc(v___x_2556_);
v___f_2572_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2572_, 0, v___x_2555_);
lean_closure_set(v___f_2572_, 1, v___x_2556_);
lean_closure_set(v___f_2572_, 2, v___x_2571_);
lean_closure_set(v___f_2572_, 3, v_a_2558_);
lean_closure_set(v___f_2572_, 4, v___f_2559_);
lean_closure_set(v___f_2572_, 5, v___f_2560_);
lean_closure_set(v___f_2572_, 6, v___x_2561_);
lean_closure_set(v___f_2572_, 7, v___f_2562_);
lean_closure_set(v___f_2572_, 8, v_val_2563_);
lean_closure_set(v___f_2572_, 9, v_a_2567_);
v___x_2577_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2578_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2567_, v___x_2577_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v_a_2579_);
v___x_2581_ = v___x_2569_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
v_val_2574_ = v___x_2581_;
goto v___jp_2573_;
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2578_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2583_);
v___x_2585_ = v___x_2569_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2583_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
v_val_2574_ = v___x_2585_;
goto v___jp_2573_;
}
}
v___jp_2573_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v_val_2574_);
v___x_2576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2557_, v___x_2575_, v___f_2572_);
return v___x_2576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2588_, lean_object* v___x_2589_, lean_object* v___x_2590_, lean_object* v_a_2591_, lean_object* v___f_2592_, lean_object* v___f_2593_, lean_object* v___x_2594_, lean_object* v___f_2595_, lean_object* v_val_2596_, lean_object* v_x_2597_, lean_object* v___y_2598_){
_start:
{
uint8_t v___x_5949__boxed_2599_; lean_object* v_res_2600_; 
v___x_5949__boxed_2599_ = lean_unbox(v___x_2590_);
v_res_2600_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2588_, v___x_2589_, v___x_5949__boxed_2599_, v_a_2591_, v___f_2592_, v___f_2593_, v___x_2594_, v___f_2595_, v_val_2596_, v_x_2597_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2601_, uint8_t v___x_2602_, lean_object* v_a_2603_, lean_object* v___f_2604_, lean_object* v___f_2605_, lean_object* v___f_2606_, lean_object* v_val_2607_, lean_object* v_x_2608_){
_start:
{
if (lean_obj_tag(v_x_2608_) == 0)
{
lean_object* v___x_2610_; 
lean_dec_ref(v_val_2607_);
lean_dec_ref(v___f_2606_);
lean_dec_ref(v___f_2605_);
lean_dec_ref(v___f_2604_);
lean_dec(v_a_2603_);
lean_dec(v___x_2601_);
v___x_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2610_, 0, v_x_2608_);
return v___x_2610_;
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2632_; 
v_a_2611_ = lean_ctor_get(v_x_2608_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_x_2608_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2613_ = v_x_2608_;
v_isShared_2614_ = v_isSharedCheck_2632_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v_x_2608_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2632_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___f_2618_; lean_object* v_val_2620_; lean_object* v___x_2623_; 
v___x_2615_ = lean_unsigned_to_nat(0u);
v___x_2616_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2617_ = lean_box(v___x_2602_);
v___f_2618_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2618_, 0, v___x_2601_);
lean_closure_set(v___f_2618_, 1, v___x_2615_);
lean_closure_set(v___f_2618_, 2, v___x_2617_);
lean_closure_set(v___f_2618_, 3, v_a_2603_);
lean_closure_set(v___f_2618_, 4, v___f_2604_);
lean_closure_set(v___f_2618_, 5, v___f_2605_);
lean_closure_set(v___f_2618_, 6, v___x_2616_);
lean_closure_set(v___f_2618_, 7, v___f_2606_);
lean_closure_set(v___f_2618_, 8, v_val_2607_);
v___x_2623_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2611_, v___x_2616_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 0, v_a_2624_);
v___x_2626_ = v___x_2613_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2624_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
v_val_2620_ = v___x_2626_;
goto v___jp_2619_;
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; 
v_a_2628_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2623_, 1);
if (v_isShared_2614_ == 0)
{
lean_ctor_set_tag(v___x_2613_, 0);
lean_ctor_set(v___x_2613_, 0, v_a_2628_);
v___x_2630_ = v___x_2613_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2628_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
v_val_2620_ = v___x_2630_;
goto v___jp_2619_;
}
}
v___jp_2619_:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_val_2620_);
v___x_2622_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2615_, v___x_2602_, v___x_2621_, v___f_2618_);
return v___x_2622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2633_, lean_object* v___x_2634_, lean_object* v_a_2635_, lean_object* v___f_2636_, lean_object* v___f_2637_, lean_object* v___f_2638_, lean_object* v_val_2639_, lean_object* v_x_2640_, lean_object* v___y_2641_){
_start:
{
uint8_t v___x_6029__boxed_2642_; lean_object* v_res_2643_; 
v___x_6029__boxed_2642_ = lean_unbox(v___x_2634_);
v_res_2643_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2633_, v___x_6029__boxed_2642_, v_a_2635_, v___f_2636_, v___f_2637_, v___f_2638_, v_val_2639_, v_x_2640_);
return v_res_2643_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = lean_box(1);
v___x_2645_ = lean_unsigned_to_nat(2u);
v___x_2646_ = lean_mk_empty_array_with_capacity(v___x_2645_);
v___x_2647_ = lean_array_push(v___x_2646_, v___x_2644_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2648_, lean_object* v_x_2649_){
_start:
{
lean_object* v_val_2652_; 
if (lean_obj_tag(v_x_2649_) == 0)
{
lean_object* v___x_2654_; 
lean_dec(v___x_2648_);
v___x_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2654_, 0, v_x_2649_);
return v___x_2654_;
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2670_; 
v_a_2655_ = lean_ctor_get(v_x_2649_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_x_2649_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2657_ = v_x_2649_;
v_isShared_2658_ = v_isSharedCheck_2670_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v_x_2649_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2670_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2659_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2660_ = lean_array_push(v___x_2659_, v___x_2648_);
v___x_2661_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2655_, v___x_2660_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2662_);
lean_dec_ref_known(v___x_2661_, 1);
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 0, v_a_2662_);
v___x_2664_ = v___x_2657_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2662_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
v_val_2652_ = v___x_2664_;
goto v___jp_2651_;
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; 
v_a_2666_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2661_, 1);
if (v_isShared_2658_ == 0)
{
lean_ctor_set_tag(v___x_2657_, 0);
lean_ctor_set(v___x_2657_, 0, v_a_2666_);
v___x_2668_ = v___x_2657_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
v_val_2652_ = v___x_2668_;
goto v___jp_2651_;
}
}
}
}
v___jp_2651_:
{
lean_object* v___x_2653_; 
v___x_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2653_, 0, v_val_2652_);
return v___x_2653_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2671_, lean_object* v_x_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2671_, v_x_2672_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2675_, size_t v_i_2676_, lean_object* v_bs_2677_){
_start:
{
uint8_t v___x_2678_; 
v___x_2678_ = lean_usize_dec_lt(v_i_2676_, v_sz_2675_);
if (v___x_2678_ == 0)
{
return v_bs_2677_;
}
else
{
lean_object* v_v_2679_; lean_object* v_fst_2680_; lean_object* v_snd_2681_; lean_object* v___x_2682_; lean_object* v_bs_x27_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; size_t v___x_2691_; size_t v___x_2692_; lean_object* v___x_2693_; 
v_v_2679_ = lean_array_uget_borrowed(v_bs_2677_, v_i_2676_);
v_fst_2680_ = lean_ctor_get(v_v_2679_, 0);
lean_inc(v_fst_2680_);
v_snd_2681_ = lean_ctor_get(v_v_2679_, 1);
lean_inc(v_snd_2681_);
v___x_2682_ = lean_unsigned_to_nat(0u);
v_bs_x27_2683_ = lean_array_uset(v_bs_2677_, v_i_2676_, v___x_2682_);
v___x_2684_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_fst_2680_);
v___x_2685_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2685_, 0, v_snd_2681_);
v___x_2686_ = lean_unsigned_to_nat(2u);
v___x_2687_ = lean_mk_empty_array_with_capacity(v___x_2686_);
v___x_2688_ = lean_array_push(v___x_2687_, v___x_2684_);
v___x_2689_ = lean_array_push(v___x_2688_, v___x_2685_);
v___x_2690_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
v___x_2691_ = ((size_t)1ULL);
v___x_2692_ = lean_usize_add(v_i_2676_, v___x_2691_);
v___x_2693_ = lean_array_uset(v_bs_x27_2683_, v_i_2676_, v___x_2690_);
v_i_2676_ = v___x_2692_;
v_bs_2677_ = v___x_2693_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2695_, lean_object* v_i_2696_, lean_object* v_bs_2697_){
_start:
{
size_t v_sz_boxed_2698_; size_t v_i_boxed_2699_; lean_object* v_res_2700_; 
v_sz_boxed_2698_ = lean_unbox_usize(v_sz_2695_);
lean_dec(v_sz_2695_);
v_i_boxed_2699_ = lean_unbox_usize(v_i_2696_);
lean_dec(v_i_2696_);
v_res_2700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2698_, v_i_boxed_2699_, v_bs_2697_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2704_, lean_object* v_method_2705_, lean_object* v___f_2706_, lean_object* v___f_2707_, lean_object* v___f_2708_, lean_object* v_x_2709_){
_start:
{
lean_object* v___y_2712_; uint8_t v___y_2713_; lean_object* v___y_2714_; lean_object* v_val_2715_; uint8_t v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v_val_2722_; uint8_t v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v_val_2729_; 
if (lean_obj_tag(v_x_2709_) == 0)
{
lean_object* v___x_2732_; 
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
lean_dec_ref(v___f_2706_);
lean_dec_ref(v_r_2704_);
v___x_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2732_, 0, v_x_2709_);
return v___x_2732_;
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2826_; 
v_a_2733_ = lean_ctor_get(v_x_2709_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_x_2709_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2735_ = v_x_2709_;
v_isShared_2736_ = v_isSharedCheck_2826_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v_x_2709_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2826_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___y_2738_; lean_object* v___y_2739_; uint16_t v_status_2753_; lean_object* v_headers_2754_; lean_object* v_body_2755_; lean_object* v_stream_2756_; lean_object* v___x_2757_; lean_object* v___y_2759_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
v_status_2753_ = lean_ctor_get_uint16(v_r_2704_, sizeof(void*)*3);
v_headers_2754_ = lean_ctor_get(v_r_2704_, 0);
lean_inc_ref(v_headers_2754_);
v_body_2755_ = lean_ctor_get(v_r_2704_, 1);
lean_inc_ref(v_body_2755_);
v_stream_2756_ = lean_ctor_get(v_r_2704_, 2);
lean_inc(v_stream_2756_);
lean_dec_ref(v_r_2704_);
v___x_2757_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2818_ = lean_uint16_to_nat(v_status_2753_);
v___x_2819_ = lean_nat_to_int(v___x_2818_);
v___x_2820_ = lean_nat_abs(v___x_2819_);
v___x_2821_ = lean_cstr_to_nat("9007199254740991");
v___x_2822_ = lean_nat_dec_le(v___x_2820_, v___x_2821_);
lean_dec(v___x_2820_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2819_);
v___y_2759_ = v___x_2823_;
goto v___jp_2758_;
}
else
{
double v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = l_Float_ofInt(v___x_2819_);
lean_dec(v___x_2819_);
v___x_2825_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2825_, 0, v___x_2824_);
v___y_2759_ = v___x_2825_;
goto v___jp_2758_;
}
v___jp_2737_:
{
lean_object* v___f_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; lean_object* v___x_2744_; 
v___f_2740_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2740_, 0, v___y_2739_);
lean_closure_set(v___f_2740_, 1, v___y_2738_);
v___x_2741_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2742_ = lean_unsigned_to_nat(0u);
v___x_2743_ = 0;
v___x_2744_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2733_, v___x_2741_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v___x_2747_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
lean_dec_ref_known(v___x_2744_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v_a_2745_);
v___x_2747_ = v___x_2735_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2745_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
v___y_2726_ = v___x_2743_;
v___y_2727_ = v___f_2740_;
v___y_2728_ = v___x_2742_;
v_val_2729_ = v___x_2747_;
goto v___jp_2725_;
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; 
v_a_2749_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2749_);
lean_dec_ref_known(v___x_2744_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set_tag(v___x_2735_, 0);
lean_ctor_set(v___x_2735_, 0, v_a_2749_);
v___x_2751_ = v___x_2735_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2749_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
v___y_2726_ = v___x_2743_;
v___y_2727_ = v___f_2740_;
v___y_2728_ = v___x_2742_;
v_val_2729_ = v___x_2751_;
goto v___jp_2725_;
}
}
}
v___jp_2758_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; size_t v_sz_2762_; size_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2757_);
lean_ctor_set(v___x_2760_, 1, v___y_2759_);
v___x_2761_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2762_ = lean_array_size(v_headers_2754_);
v___x_2763_ = ((size_t)0ULL);
v___x_2764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2762_, v___x_2763_, v_headers_2754_);
v___x_2765_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2761_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
v___x_2767_ = lean_box(0);
v___x_2768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2766_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2760_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = l_Lasm_JS_obj(v___x_2769_);
if (lean_obj_tag(v_stream_2756_) == 0)
{
uint8_t v___x_2771_; 
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
lean_dec_ref(v___f_2706_);
v___x_2771_ = l_Lasm_Fetch_bodyless(v_method_2705_, v_status_2753_);
if (v___x_2771_ == 0)
{
lean_object* v___x_2772_; 
v___x_2772_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2772_, 0, v_body_2755_);
v___y_2738_ = v___x_2770_;
v___y_2739_ = v___x_2772_;
goto v___jp_2737_;
}
else
{
lean_object* v___x_2773_; 
lean_dec_ref(v_body_2755_);
v___x_2773_ = lean_box(1);
v___y_2738_ = v___x_2770_;
v___y_2739_ = v___x_2773_;
goto v___jp_2737_;
}
}
else
{
lean_object* v_val_2774_; uint8_t v___x_2775_; 
lean_dec_ref(v_body_2755_);
lean_del_object(v___x_2735_);
v_val_2774_ = lean_ctor_get(v_stream_2756_, 0);
lean_inc(v_val_2774_);
lean_dec_ref_known(v_stream_2756_, 1);
v___x_2775_ = l_Lasm_Fetch_bodyless(v_method_2705_, v_status_2753_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v___f_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2776_ = lean_box(v___x_2775_);
lean_inc(v_a_2733_);
v___f_2777_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2777_, 0, v___x_2770_);
lean_closure_set(v___f_2777_, 1, v___x_2776_);
lean_closure_set(v___f_2777_, 2, v_a_2733_);
lean_closure_set(v___f_2777_, 3, v___f_2706_);
lean_closure_set(v___f_2777_, 4, v___f_2707_);
lean_closure_set(v___f_2777_, 5, v___f_2708_);
lean_closure_set(v___f_2777_, 6, v_val_2774_);
v___x_2778_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2779_ = lean_unsigned_to_nat(0u);
v___x_2780_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2733_, v___x_2778_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2780_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2780_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 1);
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
v___y_2719_ = v___x_2775_;
v___y_2720_ = v___x_2779_;
v___y_2721_ = v___f_2777_;
v_val_2722_ = v___x_2786_;
goto v___jp_2718_;
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_a_2789_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2780_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2780_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
lean_ctor_set_tag(v___x_2791_, 0);
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v___y_2719_ = v___x_2775_;
v___y_2720_ = v___x_2779_;
v___y_2721_ = v___f_2777_;
v_val_2722_ = v___x_2794_;
goto v___jp_2718_;
}
}
}
}
else
{
lean_object* v___f_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; 
lean_dec(v_val_2774_);
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
lean_dec_ref(v___f_2706_);
v___f_2797_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2797_, 0, v___x_2770_);
v___x_2798_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2799_ = lean_unsigned_to_nat(0u);
v___x_2800_ = 0;
v___x_2801_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2733_, v___x_2798_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 1);
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
v___y_2712_ = v___x_2799_;
v___y_2713_ = v___x_2800_;
v___y_2714_ = v___f_2797_;
v_val_2715_ = v___x_2807_;
goto v___jp_2711_;
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
v_a_2810_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2801_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2801_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
lean_ctor_set_tag(v___x_2812_, 0);
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
v___y_2712_ = v___x_2799_;
v___y_2713_ = v___x_2800_;
v___y_2714_ = v___f_2797_;
v_val_2715_ = v___x_2815_;
goto v___jp_2711_;
}
}
}
}
}
}
}
}
v___jp_2711_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_val_2715_);
v___x_2717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2712_, v___y_2713_, v___x_2716_, v___y_2714_);
return v___x_2717_;
}
v___jp_2718_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2723_, 0, v_val_2722_);
v___x_2724_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2720_, v___y_2719_, v___x_2723_, v___y_2721_);
return v___x_2724_;
}
v___jp_2725_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2730_, 0, v_val_2729_);
v___x_2731_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2728_, v___y_2726_, v___x_2730_, v___y_2727_);
return v___x_2731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2827_, lean_object* v_method_2828_, lean_object* v___f_2829_, lean_object* v___f_2830_, lean_object* v___f_2831_, lean_object* v_x_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2827_, v_method_2828_, v___f_2829_, v___f_2830_, v___f_2831_, v_x_2832_);
lean_dec_ref(v_method_2828_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2836_, lean_object* v_r_2837_){
_start:
{
lean_object* v___f_2839_; lean_object* v___f_2840_; lean_object* v___x_2841_; uint8_t v___x_2842_; lean_object* v_val_2844_; lean_object* v___x_2847_; 
v___f_2839_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2840_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2840_, 0, v_r_2837_);
lean_closure_set(v___f_2840_, 1, v_method_2836_);
lean_closure_set(v___f_2840_, 2, v___f_2839_);
lean_closure_set(v___f_2840_, 3, v___f_2839_);
lean_closure_set(v___f_2840_, 4, v___f_2839_);
v___x_2841_ = lean_unsigned_to_nat(0u);
v___x_2842_ = 0;
v___x_2847_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2847_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2847_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set_tag(v___x_2850_, 1);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
v_val_2844_ = v___x_2853_;
goto v___jp_2843_;
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
v_a_2856_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2847_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2847_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
lean_ctor_set_tag(v___x_2858_, 0);
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
v_val_2844_ = v___x_2861_;
goto v___jp_2843_;
}
}
}
v___jp_2843_:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v_val_2844_);
v___x_2846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2841_, v___x_2842_, v___x_2845_, v___f_2840_);
return v___x_2846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2864_, lean_object* v_r_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2864_, v_r_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2869_ = lean_box(0);
v___x_2870_ = lean_st_mk_ref(v___x_2869_);
v___x_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2874_){
_start:
{
if (lean_obj_tag(v_x_2874_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2884_; 
v_a_2876_ = lean_ctor_get(v_x_2874_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_x_2874_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2878_ = v_x_2874_;
v_isShared_2879_ = v_isSharedCheck_2884_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v_x_2874_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2884_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
if (v_isShared_2879_ == 0)
{
v___x_2881_ = v___x_2878_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2876_);
v___x_2881_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2882_; 
v___x_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2881_);
return v___x_2882_;
}
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2895_; 
v_a_2885_ = lean_ctor_get(v_x_2874_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_x_2874_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2887_ = v_x_2874_;
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v_x_2874_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2892_; 
v___x_2889_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2890_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_a_2885_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v___x_2890_);
v___x_2892_ = v___x_2887_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
lean_object* v___x_2893_; 
v___x_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
return v___x_2893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2896_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2899_, lean_object* v___x_2900_, lean_object* v___f_2901_, lean_object* v_x_2902_){
_start:
{
if (lean_obj_tag(v_x_2902_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2912_; 
lean_dec_ref(v___f_2901_);
lean_dec(v___x_2900_);
lean_dec_ref(v___y_2899_);
v_a_2904_ = lean_ctor_get(v_x_2902_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_x_2902_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2906_ = v_x_2902_;
v_isShared_2907_ = v_isSharedCheck_2912_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v_x_2902_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2912_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
return v___x_2910_;
}
}
}
else
{
lean_object* v_a_2913_; uint8_t v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v_a_2913_ = lean_ctor_get(v_x_2902_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v_x_2902_, 1);
v___x_2914_ = 0;
v___x_2915_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2899_, v_a_2913_);
v___x_2916_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2900_, v___x_2914_, v___x_2915_, v___f_2901_);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2917_, lean_object* v___x_2918_, lean_object* v___f_2919_, lean_object* v_x_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2917_, v___x_2918_, v___f_2919_, v_x_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2923_, lean_object* v___x_2924_, lean_object* v___f_2925_, lean_object* v_req_2926_){
_start:
{
uint8_t v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2928_ = 0;
v___x_2929_ = l_Lasm_Fetch_respond(v_handler_2923_, v_req_2926_);
v___x_2930_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2924_, v___x_2928_, v___x_2929_, v___f_2925_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2931_, lean_object* v___x_2932_, lean_object* v___f_2933_, lean_object* v_req_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2931_, v___x_2932_, v___f_2933_, v_req_2934_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2937_, lean_object* v_x_2938_){
_start:
{
if (lean_obj_tag(v_x_2938_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2948_; 
lean_dec_ref(v___f_2937_);
v_a_2940_ = lean_ctor_get(v_x_2938_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v_x_2938_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2942_ = v_x_2938_;
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v_x_2938_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
return v___x_2946_;
}
}
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2950_; 
v_a_2949_ = lean_ctor_get(v_x_2938_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v_x_2938_, 1);
v___x_2950_ = lean_apply_2(v___f_2937_, v_a_2949_, lean_box(0));
return v___x_2950_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2951_, lean_object* v_x_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2951_, v_x_2952_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v_headers_2957_, lean_object* v___f_2958_, lean_object* v___x_2959_, uint8_t v___x_2960_, lean_object* v___f_2961_, lean_object* v_x_2962_){
_start:
{
if (lean_obj_tag(v_x_2962_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2972_; 
lean_dec_ref(v___f_2961_);
lean_dec(v___x_2959_);
lean_dec_ref(v___f_2958_);
lean_dec_ref(v_headers_2957_);
lean_dec_ref(v___y_2956_);
lean_dec_ref(v___y_2955_);
v_a_2964_ = lean_ctor_get(v_x_2962_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_x_2962_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2966_ = v_x_2962_;
v_isShared_2967_ = v_isSharedCheck_2972_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v_x_2962_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2972_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
return v___x_2970_;
}
}
}
else
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2983_; 
v_a_2973_ = lean_ctor_get(v_x_2962_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v_x_2962_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2975_ = v_x_2962_;
v_isShared_2976_ = v_isSharedCheck_2983_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v_x_2962_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2983_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2977_, 0, v___y_2955_);
lean_ctor_set(v___x_2977_, 1, v___y_2956_);
lean_ctor_set(v___x_2977_, 2, v_headers_2957_);
lean_ctor_set(v___x_2977_, 3, v_a_2973_);
lean_ctor_set(v___x_2977_, 4, v___f_2958_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2977_);
v___x_2979_ = v___x_2975_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2977_);
v___x_2979_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
v___x_2981_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2959_, v___x_2960_, v___x_2980_, v___f_2961_);
return v___x_2981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v_headers_2986_, lean_object* v___f_2987_, lean_object* v___x_2988_, lean_object* v___x_2989_, lean_object* v___f_2990_, lean_object* v_x_2991_, lean_object* v___y_2992_){
_start:
{
uint8_t v___x_7741__boxed_2993_; lean_object* v_res_2994_; 
v___x_7741__boxed_2993_ = lean_unbox(v___x_2989_);
v_res_2994_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2984_, v___y_2985_, v_headers_2986_, v___f_2987_, v___x_2988_, v___x_7741__boxed_2993_, v___f_2990_, v_x_2991_);
return v_res_2994_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2999_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3000_ = lean_string_utf8_byte_size(v___x_2999_);
return v___x_3000_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3001_ = lean_unsigned_to_nat(0u);
v___x_3002_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_3003_ = lean_nat_dec_eq(v___x_3002_, v___x_3001_);
return v___x_3003_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_3009_ = lean_unsigned_to_nat(46u);
v___x_3010_ = lean_unsigned_to_nat(193u);
v___x_3011_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_3012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_3013_ = l_mkPanicMessageWithDecl(v___x_3012_, v___x_3011_, v___x_3010_, v___x_3009_, v___x_3008_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_3015_, lean_object* v_d_3016_){
_start:
{
lean_object* v___y_3019_; lean_object* v___y_3020_; 
if (lean_obj_tag(v_d_3016_) == 6)
{
lean_object* v_b_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
v_b_3024_ = lean_ctor_get(v_d_3016_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_d_3016_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v_d_3016_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_b_3024_);
lean_dec(v_d_3016_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
lean_ctor_set_tag(v___x_3026_, 0);
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_b_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
else
{
lean_object* v___x_3032_; lean_object* v_received_3034_; 
v___x_3032_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_3016_) == 9)
{
lean_object* v_value_3048_; lean_object* v_description_3049_; uint8_t v___x_3050_; 
v_value_3048_ = lean_ctor_get(v_d_3016_, 0);
v_description_3049_ = lean_ctor_get(v_d_3016_, 1);
v___x_3050_ = lean_string_dec_eq(v_description_3049_, v___x_3032_);
if (v___x_3050_ == 0)
{
goto v___jp_3046_;
}
else
{
uint32_t v___x_3051_; uint64_t v___x_3052_; lean_object* v___x_3053_; uint32_t v___x_3054_; lean_object* v___x_3055_; 
lean_inc_n(v_value_3048_, 2);
lean_dec_ref_known(v_d_3016_, 2);
v___x_3051_ = 206;
v___x_3052_ = 0ULL;
v___x_3053_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3053_, 0, v_value_3048_);
lean_ctor_set(v___x_3053_, 1, v___x_3032_);
v___x_3054_ = lasm_js_value_handle(v_value_3048_);
lean_dec(v_value_3048_);
v___x_3055_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3051_, v___x_3052_, v___x_3053_, v___x_3054_);
lean_dec_ref_known(v___x_3053_, 2);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v_a_3056_; uint8_t v___x_3057_; 
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
lean_inc(v_a_3056_);
lean_dec_ref_known(v___x_3055_, 1);
v___x_3057_ = lean_string_validate_utf8(v_a_3056_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
lean_dec(v_a_3056_);
v___x_3058_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3059_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3058_);
v_received_3034_ = v___x_3059_;
goto v___jp_3033_;
}
else
{
lean_object* v___x_3060_; 
v___x_3060_ = lean_string_from_utf8_unchecked(v_a_3056_);
v_received_3034_ = v___x_3060_;
goto v___jp_3033_;
}
}
else
{
lean_object* v___x_3061_; 
lean_dec_ref_known(v___x_3055_, 1);
v___x_3061_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_3034_ = v___x_3061_;
goto v___jp_3033_;
}
}
}
else
{
goto v___jp_3046_;
}
v___jp_3033_:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v___x_3035_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3036_ = lean_string_append(v___x_3035_, v_context_3015_);
v___x_3037_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3038_ = lean_string_append(v___x_3036_, v___x_3037_);
v___x_3039_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_3040_ = lean_string_append(v___x_3038_, v___x_3039_);
v___x_3041_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3042_ = lean_string_append(v___x_3040_, v___x_3041_);
v___x_3043_ = lean_string_append(v___x_3042_, v_received_3034_);
lean_dec_ref(v_received_3034_);
v___x_3044_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; 
v___x_3045_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_3019_ = v___x_3043_;
v___y_3020_ = v___x_3045_;
goto v___jp_3018_;
}
else
{
v___y_3019_ = v___x_3043_;
v___y_3020_ = v___x_3032_;
goto v___jp_3018_;
}
}
v___jp_3046_:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_Lasm_JS_Data_describe(v_d_3016_);
v_received_3034_ = v___x_3047_;
goto v___jp_3033_;
}
}
v___jp_3018_:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3021_ = lean_string_append(v___y_3019_, v___y_3020_);
v___x_3022_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
v___x_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
return v___x_3023_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3062_, lean_object* v_d_3063_, lean_object* v_a_3064_){
_start:
{
lean_object* v_res_3065_; 
v_res_3065_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3062_, v_d_3063_);
lean_dec_ref(v_context_3062_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_3066_, lean_object* v_bytes_3067_){
_start:
{
lean_object* v___x_3069_; 
v___x_3069_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3067_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3071_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___x_3071_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3066_, v_a_3070_);
return v___x_3071_;
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
v_a_3072_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3069_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3069_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_3080_, lean_object* v_bytes_3081_, lean_object* v_a_3082_){
_start:
{
lean_object* v_res_3083_; 
v_res_3083_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_3080_, v_bytes_3081_);
lean_dec_ref(v_bytes_3081_);
lean_dec_ref(v_context_3080_);
return v_res_3083_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_3084_, uint64_t v_extra_3085_){
_start:
{
uint64_t v___x_3086_; uint64_t v___y_3088_; 
v___x_3086_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3084_ == 0)
{
uint64_t v___x_3091_; 
v___x_3091_ = 0ULL;
v___y_3088_ = v___x_3091_;
goto v___jp_3087_;
}
else
{
uint64_t v___x_3092_; 
v___x_3092_ = 2ULL;
v___y_3088_ = v___x_3092_;
goto v___jp_3087_;
}
v___jp_3087_:
{
uint64_t v___x_3089_; uint64_t v___x_3090_; 
v___x_3089_ = lean_uint64_lor(v___x_3086_, v___y_3088_);
v___x_3090_ = lean_uint64_lor(v___x_3089_, v_extra_3085_);
return v___x_3090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_3093_, lean_object* v_extra_3094_){
_start:
{
uint8_t v_await_boxed_3095_; uint64_t v_extra_boxed_3096_; uint64_t v_res_3097_; lean_object* v_r_3098_; 
v_await_boxed_3095_ = lean_unbox(v_await_3093_);
v_extra_boxed_3096_ = lean_unbox_uint64(v_extra_3094_);
lean_dec_ref(v_extra_3094_);
v_res_3097_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_3095_, v_extra_boxed_3096_);
v_r_3098_ = lean_box_uint64(v_res_3097_);
return v_r_3098_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3099_; uint8_t v___x_3100_; uint64_t v___x_3101_; 
v___x_3099_ = 4ULL;
v___x_3100_ = 0;
v___x_3101_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3100_, v___x_3099_);
return v___x_3101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_3102_, lean_object* v_args_3103_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint64_t v___x_3108_; lean_object* v___x_3109_; 
v___x_3105_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3106_, 0, v_c_3102_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = lean_box(0);
v___x_3108_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_3109_ = l_Lasm_JS_Value_invokeRaw(v___x_3106_, v___x_3107_, v_args_3103_, v___x_3108_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3109_, 1);
v___x_3111_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_3112_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3111_, v_a_3110_);
lean_dec(v_a_3110_);
return v___x_3112_;
}
else
{
return v___x_3109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_3113_, lean_object* v_args_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_3113_, v_args_3114_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_3117_, uint8_t v___x_3118_, lean_object* v___f_3119_, lean_object* v_a_3120_, lean_object* v_x_3121_){
_start:
{
lean_object* v_val_3124_; 
if (lean_obj_tag(v_x_3121_) == 0)
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3135_; 
lean_dec(v_a_3120_);
lean_dec_ref(v___f_3119_);
lean_dec(v___x_3117_);
v_a_3127_ = lean_ctor_get(v_x_3121_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v_x_3121_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3129_ = v_x_3121_;
v_isShared_3130_ = v_isSharedCheck_3135_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v_x_3121_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3135_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
return v___x_3133_;
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3154_; 
v_a_3136_ = lean_ctor_get(v_x_3121_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v_x_3121_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3138_ = v_x_3121_;
v_isShared_3139_ = v_isSharedCheck_3154_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v_x_3121_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3154_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3140_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3141_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_a_3136_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = lean_unsigned_to_nat(1u);
v___x_3143_ = lean_mk_empty_array_with_capacity(v___x_3142_);
v___x_3144_ = lean_array_push(v___x_3143_, v___x_3141_);
v___x_3145_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3120_, v___x_3144_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3145_, 1);
if (v_isShared_3139_ == 0)
{
lean_ctor_set(v___x_3138_, 0, v_a_3146_);
v___x_3148_ = v___x_3138_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3146_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
v_val_3124_ = v___x_3148_;
goto v___jp_3123_;
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; 
v_a_3150_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3150_);
lean_dec_ref_known(v___x_3145_, 1);
if (v_isShared_3139_ == 0)
{
lean_ctor_set_tag(v___x_3138_, 0);
lean_ctor_set(v___x_3138_, 0, v_a_3150_);
v___x_3152_ = v___x_3138_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3150_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
v_val_3124_ = v___x_3152_;
goto v___jp_3123_;
}
}
}
}
v___jp_3123_:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v_val_3124_);
v___x_3126_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3117_, v___x_3118_, v___x_3125_, v___f_3119_);
return v___x_3126_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_3155_, lean_object* v___x_3156_, lean_object* v___f_3157_, lean_object* v_a_3158_, lean_object* v_x_3159_, lean_object* v___y_3160_){
_start:
{
uint8_t v___x_8027__boxed_3161_; lean_object* v_res_3162_; 
v___x_8027__boxed_3161_ = lean_unbox(v___x_3156_);
v_res_3162_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_3155_, v___x_8027__boxed_3161_, v___f_3157_, v_a_3158_, v_x_3159_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v_headers_3165_, lean_object* v___x_3166_, lean_object* v___x_3167_, lean_object* v___f_3168_, lean_object* v_x_3169_){
_start:
{
if (lean_obj_tag(v_x_3169_) == 0)
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3179_; 
lean_dec_ref(v___f_3168_);
lean_dec(v___x_3167_);
lean_dec_ref(v___x_3166_);
lean_dec_ref(v_headers_3165_);
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
v_a_3171_ = lean_ctor_get(v_x_3169_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v_x_3169_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3173_ = v_x_3169_;
v_isShared_3174_ = v_isSharedCheck_3179_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v_x_3169_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3179_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
lean_object* v___x_3177_; 
v___x_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
return v___x_3177_;
}
}
}
else
{
lean_object* v_a_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3191_; 
v_a_3180_ = lean_ctor_get(v_x_3169_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_x_3169_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3182_ = v_x_3169_;
v_isShared_3183_ = v_isSharedCheck_3191_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_a_3180_);
lean_dec(v_x_3169_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3191_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3184_; uint8_t v___x_3185_; lean_object* v___x_3187_; 
v___x_3184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3184_, 0, v___y_3163_);
lean_ctor_set(v___x_3184_, 1, v___y_3164_);
lean_ctor_set(v___x_3184_, 2, v_headers_3165_);
lean_ctor_set(v___x_3184_, 3, v___x_3166_);
lean_ctor_set(v___x_3184_, 4, v_a_3180_);
v___x_3185_ = 0;
if (v_isShared_3183_ == 0)
{
lean_ctor_set(v___x_3182_, 0, v___x_3184_);
v___x_3187_ = v___x_3182_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v___x_3184_);
v___x_3187_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
v___x_3189_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3167_, v___x_3185_, v___x_3188_, v___f_3168_);
return v___x_3189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v_headers_3194_, lean_object* v___x_3195_, lean_object* v___x_3196_, lean_object* v___f_3197_, lean_object* v_x_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_3192_, v___y_3193_, v_headers_3194_, v___x_3195_, v___x_3196_, v___f_3197_, v_x_3198_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3201_, lean_object* v_x_3202_){
_start:
{
if (lean_obj_tag(v_x_3202_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3212_; 
lean_dec_ref(v___f_3201_);
v_a_3204_ = lean_ctor_get(v_x_3202_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_x_3202_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3206_ = v_x_3202_;
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v_x_3202_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
return v___x_3210_;
}
}
}
else
{
lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3224_; 
v_isSharedCheck_3224_ = !lean_is_exclusive(v_x_3202_);
if (v_isSharedCheck_3224_ == 0)
{
lean_object* v_unused_3225_; 
v_unused_3225_ = lean_ctor_get(v_x_3202_, 0);
lean_dec(v_unused_3225_);
v___x_3214_ = v_x_3202_;
v_isShared_3215_ = v_isSharedCheck_3224_;
goto v_resetjp_3213_;
}
else
{
lean_dec(v_x_3202_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3224_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3216_; uint8_t v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3216_ = lean_unsigned_to_nat(0u);
v___x_3217_ = 0;
v___x_3218_ = lean_io_promise_new();
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 0, v___x_3218_);
v___x_3220_ = v___x_3214_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
v___x_3222_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3216_, v___x_3217_, v___x_3221_, v___f_3201_);
return v___x_3222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3226_, lean_object* v_x_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3226_, v_x_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3230_, lean_object* v_x_3231_){
_start:
{
if (lean_obj_tag(v_x_3231_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3241_; 
lean_dec_ref(v___f_3230_);
v_a_3233_ = lean_ctor_get(v_x_3231_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_x_3231_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3235_ = v_x_3231_;
v_isShared_3236_ = v_isSharedCheck_3241_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v_x_3231_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3241_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
lean_object* v___x_3239_; 
v___x_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
return v___x_3239_;
}
}
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3243_; 
v_a_3242_ = lean_ctor_get(v_x_3231_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v_x_3231_, 1);
v___x_3243_ = lean_apply_2(v___f_3230_, v_a_3242_, lean_box(0));
return v___x_3243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3244_, lean_object* v_x_3245_, lean_object* v___y_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3244_, v_x_3245_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v_context_3248_, lean_object* v_x_3249_){
_start:
{
lean_object* v_val_3252_; 
if (lean_obj_tag(v_x_3249_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3262_; 
v_a_3254_ = lean_ctor_get(v_x_3249_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_x_3249_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3256_ = v_x_3249_;
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v_x_3249_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
return v___x_3260_;
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3276_; 
v_a_3263_ = lean_ctor_get(v_x_3249_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v_x_3249_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3265_ = v_x_3249_;
v_isShared_3266_ = v_isSharedCheck_3276_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v_x_3249_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3276_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; 
v___x_3267_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3248_, v_a_3263_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v___x_3270_; 
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
lean_inc(v_a_3268_);
lean_dec_ref_known(v___x_3267_, 1);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v_a_3268_);
v___x_3270_ = v___x_3265_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3268_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
v_val_3252_ = v___x_3270_;
goto v___jp_3251_;
}
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; 
v_a_3272_ = lean_ctor_get(v___x_3267_, 0);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3267_, 1);
if (v_isShared_3266_ == 0)
{
lean_ctor_set_tag(v___x_3265_, 0);
lean_ctor_set(v___x_3265_, 0, v_a_3272_);
v___x_3274_ = v___x_3265_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3272_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
v_val_3252_ = v___x_3274_;
goto v___jp_3251_;
}
}
}
}
v___jp_3251_:
{
lean_object* v___x_3253_; 
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_val_3252_);
return v___x_3253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v_context_3277_, lean_object* v_x_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v_context_3277_, v_x_3278_);
lean_dec_ref(v_context_3277_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_3281_, uint32_t v_op_3282_, uint64_t v_flags_3283_, lean_object* v_payload_3284_, lean_object* v___f_3285_, lean_object* v___f_3286_, lean_object* v___f_3287_, lean_object* v_x_3288_){
_start:
{
if (lean_obj_tag(v_x_3288_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3298_; 
lean_dec_ref(v___f_3287_);
lean_dec_ref(v___f_3286_);
lean_dec_ref(v___f_3285_);
lean_dec(v_payload_3284_);
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
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3345_; 
v_a_3299_ = lean_ctor_get(v_x_3288_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_x_3288_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3301_ = v_x_3288_;
v_isShared_3302_ = v_isSharedCheck_3345_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v_x_3288_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3345_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; uint8_t v___x_3305_; 
v___x_3303_ = lean_string_utf8_byte_size(v_failurePrefix_3281_);
v___x_3304_ = lean_unsigned_to_nat(0u);
v___x_3305_ = lean_nat_dec_eq(v___x_3303_, v___x_3304_);
if (v___x_3305_ == 0)
{
lean_object* v___f_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___f_3310_; lean_object* v_val_3312_; lean_object* v___x_3317_; 
lean_dec_ref(v___f_3287_);
lean_inc(v_a_3299_);
v___f_3306_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3306_, 0, v_a_3299_);
v___x_3307_ = lean_box(v___x_3305_);
v___x_3308_ = lean_box_uint32(v_op_3282_);
v___x_3309_ = lean_box_uint64(v_flags_3283_);
lean_inc(v_payload_3284_);
v___f_3310_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3310_, 0, v___x_3304_);
lean_closure_set(v___f_3310_, 1, v___x_3307_);
lean_closure_set(v___f_3310_, 2, v___f_3306_);
lean_closure_set(v___f_3310_, 3, v_a_3299_);
lean_closure_set(v___f_3310_, 4, v___x_3308_);
lean_closure_set(v___f_3310_, 5, v___x_3309_);
lean_closure_set(v___f_3310_, 6, v_payload_3284_);
v___x_3317_ = l_Lasm_JS_Wire_encodeIO(v_payload_3284_);
lean_dec(v_payload_3284_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3320_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
lean_inc(v_a_3318_);
lean_dec_ref_known(v___x_3317_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_a_3318_);
v___x_3320_ = v___x_3301_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3318_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
v_val_3312_ = v___x_3320_;
goto v___jp_3311_;
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; 
v_a_3322_ = lean_ctor_get(v___x_3317_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3317_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 0);
lean_ctor_set(v___x_3301_, 0, v_a_3322_);
v___x_3324_ = v___x_3301_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3322_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
v_val_3312_ = v___x_3324_;
goto v___jp_3311_;
}
}
v___jp_3311_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3313_, 0, v_val_3312_);
v___x_3314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3304_, v___x_3305_, v___x_3313_, v___f_3310_);
v___x_3315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3304_, v___x_3305_, v___x_3314_, v___f_3285_);
v___x_3316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3304_, v___x_3305_, v___x_3315_, v___f_3286_);
return v___x_3316_;
}
}
else
{
lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___f_3329_; uint8_t v___x_3330_; lean_object* v_val_3332_; lean_object* v___x_3336_; 
lean_dec_ref(v___f_3286_);
lean_dec_ref(v___f_3285_);
lean_inc(v_a_3299_);
v___f_3326_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3326_, 0, v_a_3299_);
v___x_3327_ = lean_box_uint32(v_op_3282_);
v___x_3328_ = lean_box_uint64(v_flags_3283_);
lean_inc(v_payload_3284_);
v___f_3329_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3329_, 0, v___f_3326_);
lean_closure_set(v___f_3329_, 1, v_a_3299_);
lean_closure_set(v___f_3329_, 2, v___x_3327_);
lean_closure_set(v___f_3329_, 3, v___x_3328_);
lean_closure_set(v___f_3329_, 4, v_payload_3284_);
v___x_3330_ = 0;
v___x_3336_ = l_Lasm_JS_Wire_encodeIO(v_payload_3284_);
lean_dec(v_payload_3284_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3337_);
lean_dec_ref_known(v___x_3336_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_a_3337_);
v___x_3339_ = v___x_3301_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
v_val_3332_ = v___x_3339_;
goto v___jp_3331_;
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; 
v_a_3341_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3336_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 0);
lean_ctor_set(v___x_3301_, 0, v_a_3341_);
v___x_3343_ = v___x_3301_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3341_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
v_val_3332_ = v___x_3343_;
goto v___jp_3331_;
}
}
v___jp_3331_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3333_, 0, v_val_3332_);
v___x_3334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3304_, v___x_3330_, v___x_3333_, v___f_3329_);
v___x_3335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3304_, v___x_3330_, v___x_3334_, v___f_3287_);
return v___x_3335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_3346_, lean_object* v_op_3347_, lean_object* v_flags_3348_, lean_object* v_payload_3349_, lean_object* v___f_3350_, lean_object* v___f_3351_, lean_object* v___f_3352_, lean_object* v_x_3353_, lean_object* v___y_3354_){
_start:
{
uint32_t v_op_boxed_3355_; uint64_t v_flags_boxed_3356_; lean_object* v_res_3357_; 
v_op_boxed_3355_ = lean_unbox_uint32(v_op_3347_);
lean_dec(v_op_3347_);
v_flags_boxed_3356_ = lean_unbox_uint64(v_flags_3348_);
lean_dec_ref(v_flags_3348_);
v_res_3357_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(v_failurePrefix_3346_, v_op_boxed_3355_, v_flags_boxed_3356_, v_payload_3349_, v___f_3350_, v___f_3351_, v___f_3352_, v_x_3353_);
lean_dec_ref(v_failurePrefix_3346_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v___f_3358_, lean_object* v_bytes_3359_){
_start:
{
lean_object* v___x_3361_; uint8_t v___x_3362_; lean_object* v_val_3364_; lean_object* v___x_3367_; 
v___x_3361_ = lean_unsigned_to_nat(0u);
v___x_3362_ = 0;
v___x_3367_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3359_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3367_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3367_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
lean_ctor_set_tag(v___x_3370_, 1);
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
v_val_3364_ = v___x_3373_;
goto v___jp_3363_;
}
}
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
v_a_3376_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3367_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3367_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
lean_ctor_set_tag(v___x_3378_, 0);
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
v_val_3364_ = v___x_3381_;
goto v___jp_3363_;
}
}
}
v___jp_3363_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3365_, 0, v_val_3364_);
v___x_3366_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3361_, v___x_3362_, v___x_3365_, v___f_3358_);
return v___x_3366_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v___f_3384_, lean_object* v_bytes_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v___f_3384_, v_bytes_3385_);
lean_dec_ref(v_bytes_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3388_, uint32_t v_op_3389_, uint64_t v_flags_3390_, lean_object* v_payload_3391_, lean_object* v_failurePrefix_3392_){
_start:
{
lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___f_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___f_3400_; lean_object* v___f_3401_; lean_object* v___x_3402_; uint8_t v___x_3403_; lean_object* v_val_3405_; lean_object* v___x_3408_; 
v___f_3394_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3394_, 0, v_context_3388_);
v___f_3395_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3395_, 0, v___f_3394_);
v___f_3396_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3396_, 0, v___f_3395_);
lean_inc_ref(v_failurePrefix_3392_);
v___f_3397_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3397_, 0, v_failurePrefix_3392_);
v___x_3398_ = lean_box_uint32(v_op_3389_);
v___x_3399_ = lean_box_uint64(v_flags_3390_);
lean_inc_ref(v___f_3396_);
v___f_3400_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3400_, 0, v_failurePrefix_3392_);
lean_closure_set(v___f_3400_, 1, v___x_3398_);
lean_closure_set(v___f_3400_, 2, v___x_3399_);
lean_closure_set(v___f_3400_, 3, v_payload_3391_);
lean_closure_set(v___f_3400_, 4, v___f_3397_);
lean_closure_set(v___f_3400_, 5, v___f_3396_);
lean_closure_set(v___f_3400_, 6, v___f_3396_);
v___f_3401_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3401_, 0, v___f_3400_);
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = 0;
v___x_3408_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3416_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set_tag(v___x_3411_, 1);
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_a_3409_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
v_val_3405_ = v___x_3414_;
goto v___jp_3404_;
}
}
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
v_a_3417_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3408_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3408_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
lean_ctor_set_tag(v___x_3419_, 0);
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
v_val_3405_ = v___x_3422_;
goto v___jp_3404_;
}
}
}
v___jp_3404_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v_val_3405_);
v___x_3407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3402_, v___x_3403_, v___x_3406_, v___f_3401_);
return v___x_3407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3425_, lean_object* v_op_3426_, lean_object* v_flags_3427_, lean_object* v_payload_3428_, lean_object* v_failurePrefix_3429_, lean_object* v_a_3430_){
_start:
{
uint32_t v_op_boxed_3431_; uint64_t v_flags_boxed_3432_; lean_object* v_res_3433_; 
v_op_boxed_3431_ = lean_unbox_uint32(v_op_3426_);
lean_dec(v_op_3426_);
v_flags_boxed_3432_ = lean_unbox_uint64(v_flags_3427_);
lean_dec_ref(v_flags_3427_);
v_res_3433_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3425_, v_op_boxed_3431_, v_flags_boxed_3432_, v_payload_3428_, v_failurePrefix_3429_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3434_, lean_object* v_name_3435_, lean_object* v_args_3436_){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; uint32_t v___x_3443_; uint64_t v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3438_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3439_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3439_, 0, v_o_3434_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
lean_inc_ref(v_name_3435_);
v___x_3440_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3440_, 0, v_name_3435_);
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3442_ = lean_string_append(v___x_3441_, v_name_3435_);
lean_dec_ref(v_name_3435_);
v___x_3443_ = 205;
v___x_3444_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3445_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3445_, 0, v_args_3436_);
v___x_3446_ = lean_unsigned_to_nat(3u);
v___x_3447_ = lean_mk_empty_array_with_capacity(v___x_3446_);
v___x_3448_ = lean_array_push(v___x_3447_, v___x_3439_);
v___x_3449_ = lean_array_push(v___x_3448_, v___x_3440_);
v___x_3450_ = lean_array_push(v___x_3449_, v___x_3445_);
v___x_3451_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
v___x_3452_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3442_, v___x_3443_, v___x_3444_, v___x_3451_, v___x_3438_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3453_, lean_object* v_name_3454_, lean_object* v_args_3455_, lean_object* v___y_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3453_, v_name_3454_, v_args_3455_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v_options_3462_, lean_object* v___f_3463_, lean_object* v___f_3464_, lean_object* v_a_3465_, lean_object* v_value_3466_, lean_object* v_a_3467_, lean_object* v___x_3468_, lean_object* v___f_3469_, lean_object* v___f_3470_, lean_object* v_headers_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___f_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; uint8_t v___x_3485_; 
v___x_3473_ = lean_mk_empty_array_with_capacity(v___x_3459_);
v___x_3474_ = l_ByteArray_empty;
v___f_3475_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3473_);
lean_inc_ref(v___y_3461_);
lean_inc_ref(v___y_3460_);
v___x_3476_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3476_, 0, v___y_3460_);
lean_ctor_set(v___x_3476_, 1, v___y_3461_);
lean_ctor_set(v___x_3476_, 2, v___x_3473_);
lean_ctor_set(v___x_3476_, 3, v___x_3474_);
lean_ctor_set(v___x_3476_, 4, v___f_3475_);
v___x_3477_ = l_Lasm_Fetch_Request_path(v___x_3476_);
v___x_3478_ = lean_apply_1(v_options_3462_, v___x_3477_);
v___x_3485_ = lean_unbox(v___x_3478_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; uint8_t v___x_3487_; 
lean_dec_ref(v___f_3470_);
lean_dec_ref(v___f_3469_);
v___x_3486_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_3487_ = lean_string_dec_eq(v___y_3460_, v___x_3486_);
if (v___x_3487_ == 0)
{
lean_object* v___x_3488_; uint8_t v___x_3489_; 
v___x_3488_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3489_ = lean_string_dec_eq(v___y_3460_, v___x_3488_);
if (v___x_3489_ == 0)
{
lean_object* v___x_3490_; lean_object* v___f_3491_; lean_object* v___x_3492_; lean_object* v___f_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
lean_dec_ref(v___f_3463_);
v___x_3490_ = lean_box(v___x_3489_);
lean_inc_n(v___x_3459_, 2);
v___f_3491_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3491_, 0, v___y_3460_);
lean_closure_set(v___f_3491_, 1, v___y_3461_);
lean_closure_set(v___f_3491_, 2, v_headers_3471_);
lean_closure_set(v___f_3491_, 3, v___f_3475_);
lean_closure_set(v___f_3491_, 4, v___x_3459_);
lean_closure_set(v___f_3491_, 5, v___x_3490_);
lean_closure_set(v___f_3491_, 6, v___f_3464_);
v___x_3492_ = lean_box(v___x_3489_);
v___f_3493_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3493_, 0, v___x_3459_);
lean_closure_set(v___f_3493_, 1, v___x_3492_);
lean_closure_set(v___f_3493_, 2, v___f_3491_);
lean_closure_set(v___f_3493_, 3, v_a_3465_);
v___x_3494_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3495_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3466_, v___x_3494_, v___x_3473_);
v___x_3496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3459_, v___x_3489_, v___x_3495_, v___f_3493_);
return v___x_3496_;
}
else
{
lean_dec_ref(v___x_3473_);
lean_dec(v_value_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v___f_3464_);
goto v___jp_3479_;
}
}
else
{
lean_dec_ref(v___x_3473_);
lean_dec(v_value_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v___f_3464_);
goto v___jp_3479_;
}
}
else
{
lean_object* v___x_3497_; 
lean_dec_ref(v___x_3473_);
lean_dec(v_value_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v___f_3464_);
lean_dec_ref(v___f_3463_);
v___x_3497_ = l_Lasm_JS_Data_field(v_a_3467_, v___x_3468_);
if (lean_obj_tag(v___x_3497_) == 9)
{
lean_object* v_value_3498_; lean_object* v___f_3499_; uint8_t v___x_3500_; lean_object* v_val_3502_; lean_object* v___x_3505_; 
lean_dec_ref(v___f_3470_);
v_value_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_value_3498_);
lean_dec_ref_known(v___x_3497_, 2);
lean_inc(v___x_3459_);
v___f_3499_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3499_, 0, v___y_3460_);
lean_closure_set(v___f_3499_, 1, v___y_3461_);
lean_closure_set(v___f_3499_, 2, v_headers_3471_);
lean_closure_set(v___f_3499_, 3, v___x_3474_);
lean_closure_set(v___f_3499_, 4, v___x_3459_);
lean_closure_set(v___f_3499_, 5, v___f_3469_);
v___x_3500_ = 0;
v___x_3505_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3498_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3505_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3505_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
lean_ctor_set_tag(v___x_3508_, 1);
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
v_val_3502_ = v___x_3511_;
goto v___jp_3501_;
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
v_a_3514_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3505_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3505_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
lean_ctor_set_tag(v___x_3516_, 0);
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
v_val_3502_ = v___x_3519_;
goto v___jp_3501_;
}
}
}
v___jp_3501_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v_val_3502_);
v___x_3504_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3459_, v___x_3500_, v___x_3503_, v___f_3499_);
return v___x_3504_;
}
}
else
{
lean_object* v___x_3522_; uint8_t v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
lean_dec(v___x_3497_);
lean_dec_ref(v___f_3469_);
v___x_3522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3522_, 0, v___y_3460_);
lean_ctor_set(v___x_3522_, 1, v___y_3461_);
lean_ctor_set(v___x_3522_, 2, v_headers_3471_);
lean_ctor_set(v___x_3522_, 3, v___x_3474_);
lean_ctor_set(v___x_3522_, 4, v___f_3475_);
v___x_3523_ = 0;
v___x_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3522_);
v___x_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
v___x_3526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3459_, v___x_3523_, v___x_3525_, v___f_3470_);
return v___x_3526_;
}
}
v___jp_3479_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; uint8_t v___x_3483_; lean_object* v___x_3484_; 
v___x_3480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3480_, 0, v___y_3460_);
lean_ctor_set(v___x_3480_, 1, v___y_3461_);
lean_ctor_set(v___x_3480_, 2, v_headers_3471_);
lean_ctor_set(v___x_3480_, 3, v___x_3474_);
lean_ctor_set(v___x_3480_, 4, v___f_3475_);
v___x_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3480_);
v___x_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
v___x_3483_ = lean_unbox(v___x_3478_);
v___x_3484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3459_, v___x_3483_, v___x_3482_, v___f_3463_);
return v___x_3484_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v_options_3530_, lean_object* v___f_3531_, lean_object* v___f_3532_, lean_object* v_a_3533_, lean_object* v_value_3534_, lean_object* v_a_3535_, lean_object* v___x_3536_, lean_object* v___f_3537_, lean_object* v___f_3538_, lean_object* v_headers_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3527_, v___y_3528_, v___y_3529_, v_options_3530_, v___f_3531_, v___f_3532_, v_a_3533_, v_value_3534_, v_a_3535_, v___x_3536_, v___f_3537_, v___f_3538_, v_headers_3539_);
lean_dec_ref(v___x_3536_);
lean_dec(v_a_3535_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3542_, lean_object* v_x_3543_){
_start:
{
if (lean_obj_tag(v_x_3543_) == 0)
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3553_; 
lean_dec_ref(v___f_3542_);
v_a_3545_ = lean_ctor_get(v_x_3543_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_x_3543_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3547_ = v_x_3543_;
v_isShared_3548_ = v_isSharedCheck_3553_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v_x_3543_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3553_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3545_);
v___x_3550_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
lean_object* v___x_3551_; 
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3555_; 
v_a_3554_ = lean_ctor_get(v_x_3543_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v_x_3543_, 1);
v___x_3555_ = lean_apply_2(v___f_3542_, v_a_3554_, lean_box(0));
return v___x_3555_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3556_, lean_object* v_x_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3556_, v_x_3557_);
return v_res_3559_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3560_, uint64_t v_extra_3561_){
_start:
{
uint64_t v___x_3562_; uint64_t v___y_3564_; 
v___x_3562_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3560_ == 0)
{
uint64_t v___x_3567_; 
v___x_3567_ = 0ULL;
v___y_3564_ = v___x_3567_;
goto v___jp_3563_;
}
else
{
uint64_t v___x_3568_; 
v___x_3568_ = 2ULL;
v___y_3564_ = v___x_3568_;
goto v___jp_3563_;
}
v___jp_3563_:
{
uint64_t v___x_3565_; uint64_t v___x_3566_; 
v___x_3565_ = lean_uint64_lor(v___x_3562_, v___y_3564_);
v___x_3566_ = lean_uint64_lor(v___x_3565_, v_extra_3561_);
return v___x_3566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3569_, lean_object* v_extra_3570_){
_start:
{
uint8_t v_await_boxed_3571_; uint64_t v_extra_boxed_3572_; uint64_t v_res_3573_; lean_object* v_r_3574_; 
v_await_boxed_3571_ = lean_unbox(v_await_3569_);
v_extra_boxed_3572_ = lean_unbox_uint64(v_extra_3570_);
lean_dec_ref(v_extra_3570_);
v_res_3573_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3571_, v_extra_boxed_3572_);
v_r_3574_ = lean_box_uint64(v_res_3573_);
return v_r_3574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3580_, size_t v_i_3581_, lean_object* v_bs_3582_){
_start:
{
uint8_t v___x_3585_; 
v___x_3585_ = lean_usize_dec_lt(v_i_3581_, v_sz_3580_);
if (v___x_3585_ == 0)
{
lean_object* v___x_3586_; 
v___x_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_bs_3582_);
return v___x_3586_;
}
else
{
lean_object* v_v_3587_; 
v_v_3587_ = lean_array_uget_borrowed(v_bs_3582_, v_i_3581_);
if (lean_obj_tag(v_v_3587_) == 7)
{
lean_object* v_items_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; uint8_t v___x_3591_; 
v_items_3588_ = lean_ctor_get(v_v_3587_, 0);
v___x_3589_ = lean_array_get_size(v_items_3588_);
v___x_3590_ = lean_unsigned_to_nat(2u);
v___x_3591_ = lean_nat_dec_eq(v___x_3589_, v___x_3590_);
if (v___x_3591_ == 0)
{
lean_dec_ref(v_bs_3582_);
goto v___jp_3583_;
}
else
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = lean_unsigned_to_nat(0u);
v___x_3593_ = lean_array_fget_borrowed(v_items_3588_, v___x_3592_);
if (lean_obj_tag(v___x_3593_) == 4)
{
lean_object* v_s_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v_s_3594_ = lean_ctor_get(v___x_3593_, 0);
lean_inc_ref(v_s_3594_);
v___x_3595_ = lean_unsigned_to_nat(1u);
v___x_3596_ = lean_array_fget_borrowed(v_items_3588_, v___x_3595_);
if (lean_obj_tag(v___x_3596_) == 4)
{
lean_object* v_s_3597_; lean_object* v_bs_x27_3598_; lean_object* v___x_3599_; size_t v___x_3600_; size_t v___x_3601_; lean_object* v___x_3602_; 
v_s_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc_ref(v_s_3597_);
v_bs_x27_3598_ = lean_array_uset(v_bs_3582_, v_i_3581_, v___x_3592_);
v___x_3599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3599_, 0, v_s_3594_);
lean_ctor_set(v___x_3599_, 1, v_s_3597_);
v___x_3600_ = ((size_t)1ULL);
v___x_3601_ = lean_usize_add(v_i_3581_, v___x_3600_);
v___x_3602_ = lean_array_uset(v_bs_x27_3598_, v_i_3581_, v___x_3599_);
v_i_3581_ = v___x_3601_;
v_bs_3582_ = v___x_3602_;
goto _start;
}
else
{
lean_object* v___x_3604_; 
lean_dec_ref(v_s_3594_);
lean_dec_ref(v_bs_3582_);
v___x_3604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3604_;
}
}
else
{
lean_object* v___x_3605_; 
lean_dec_ref(v_bs_3582_);
v___x_3605_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3605_;
}
}
}
else
{
lean_dec_ref(v_bs_3582_);
goto v___jp_3583_;
}
}
v___jp_3583_:
{
lean_object* v___x_3584_; 
v___x_3584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3584_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3606_, lean_object* v_i_3607_, lean_object* v_bs_3608_){
_start:
{
size_t v_sz_boxed_3609_; size_t v_i_boxed_3610_; lean_object* v_res_3611_; 
v_sz_boxed_3609_ = lean_unbox_usize(v_sz_3606_);
lean_dec(v_sz_3606_);
v_i_boxed_3610_ = lean_unbox_usize(v_i_3607_);
lean_dec(v_i_3607_);
v_res_3611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3609_, v_i_boxed_3610_, v_bs_3608_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3616_, lean_object* v_d_3617_){
_start:
{
lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3626_; lean_object* v_received_3627_; lean_object* v___y_3646_; lean_object* v_a_3649_; 
if (lean_obj_tag(v_d_3617_) == 7)
{
lean_object* v_items_3673_; size_t v_sz_3674_; size_t v___x_3675_; lean_object* v___x_3676_; 
v_items_3673_ = lean_ctor_get(v_d_3617_, 0);
v_sz_3674_ = lean_array_size(v_items_3673_);
v___x_3675_ = ((size_t)0ULL);
lean_inc_ref(v_items_3673_);
v___x_3676_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3674_, v___x_3675_, v_items_3673_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; uint8_t v___x_3681_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3677_);
lean_dec_ref_known(v___x_3676_, 1);
v___x_3678_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3679_ = lean_string_utf8_byte_size(v_a_3677_);
v___x_3680_ = lean_unsigned_to_nat(0u);
v___x_3681_ = lean_nat_dec_eq(v___x_3679_, v___x_3680_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
v___x_3682_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3683_ = lean_string_append(v___x_3682_, v_a_3677_);
lean_dec(v_a_3677_);
v___x_3684_ = lean_string_append(v___x_3678_, v___x_3683_);
lean_dec_ref(v___x_3683_);
v_a_3649_ = v___x_3684_;
goto v___jp_3648_;
}
else
{
lean_dec(v_a_3677_);
v_a_3649_ = v___x_3678_;
goto v___jp_3648_;
}
}
else
{
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3685_; 
v_a_3685_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3676_, 1);
v_a_3649_ = v_a_3685_;
goto v___jp_3648_;
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
lean_dec_ref_known(v_d_3617_, 1);
v_a_3686_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3676_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3676_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
lean_ctor_set_tag(v___x_3688_, 0);
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
}
else
{
lean_object* v___x_3694_; 
v___x_3694_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3649_ = v___x_3694_;
goto v___jp_3648_;
}
v___jp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3622_ = lean_string_append(v___y_3620_, v___y_3621_);
lean_dec_ref(v___y_3621_);
v___x_3623_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
v___x_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
return v___x_3624_;
}
v___jp_3625_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
v___x_3628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3629_ = lean_string_append(v___x_3628_, v_context_3616_);
v___x_3630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3631_ = lean_string_append(v___x_3629_, v___x_3630_);
v___x_3632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3633_ = lean_string_append(v___x_3631_, v___x_3632_);
v___x_3634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3635_ = lean_string_append(v___x_3633_, v___x_3634_);
v___x_3636_ = lean_string_append(v___x_3635_, v_received_3627_);
lean_dec_ref(v_received_3627_);
v___x_3637_ = lean_string_utf8_byte_size(v___y_3626_);
v___x_3638_ = lean_unsigned_to_nat(0u);
v___x_3639_ = lean_nat_dec_eq(v___x_3637_, v___x_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3641_ = lean_string_append(v___x_3640_, v___y_3626_);
lean_dec_ref(v___y_3626_);
v___x_3642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3643_ = lean_string_append(v___x_3641_, v___x_3642_);
v___y_3620_ = v___x_3636_;
v___y_3621_ = v___x_3643_;
goto v___jp_3619_;
}
else
{
lean_object* v___x_3644_; 
lean_dec_ref(v___y_3626_);
v___x_3644_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3620_ = v___x_3636_;
v___y_3621_ = v___x_3644_;
goto v___jp_3619_;
}
}
v___jp_3645_:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lasm_JS_Data_describe(v_d_3617_);
v___y_3626_ = v___y_3646_;
v_received_3627_ = v___x_3647_;
goto v___jp_3625_;
}
v___jp_3648_:
{
if (lean_obj_tag(v_d_3617_) == 9)
{
lean_object* v_value_3650_; lean_object* v_description_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v_value_3650_ = lean_ctor_get(v_d_3617_, 0);
v_description_3651_ = lean_ctor_get(v_d_3617_, 1);
v___x_3652_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3653_ = lean_string_dec_eq(v_description_3651_, v___x_3652_);
if (v___x_3653_ == 0)
{
v___y_3646_ = v_a_3649_;
goto v___jp_3645_;
}
else
{
lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3670_; 
lean_inc(v_value_3650_);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_d_3617_);
if (v_isSharedCheck_3670_ == 0)
{
lean_object* v_unused_3671_; lean_object* v_unused_3672_; 
v_unused_3671_ = lean_ctor_get(v_d_3617_, 1);
lean_dec(v_unused_3671_);
v_unused_3672_ = lean_ctor_get(v_d_3617_, 0);
lean_dec(v_unused_3672_);
v___x_3655_ = v_d_3617_;
v_isShared_3656_ = v_isSharedCheck_3670_;
goto v_resetjp_3654_;
}
else
{
lean_dec(v_d_3617_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3670_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
uint32_t v___x_3657_; uint64_t v___x_3658_; lean_object* v___x_3660_; 
v___x_3657_ = 206;
v___x_3658_ = 0ULL;
lean_inc(v_value_3650_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 1, v___x_3652_);
v___x_3660_ = v___x_3655_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_value_3650_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v___x_3652_);
v___x_3660_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
uint32_t v___x_3661_; lean_object* v___x_3662_; 
v___x_3661_ = lasm_js_value_handle(v_value_3650_);
lean_dec(v_value_3650_);
v___x_3662_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3657_, v___x_3658_, v___x_3660_, v___x_3661_);
lean_dec_ref(v___x_3660_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; uint8_t v___x_3664_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v___x_3662_, 1);
v___x_3664_ = lean_string_validate_utf8(v_a_3663_);
if (v___x_3664_ == 0)
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
lean_dec(v_a_3663_);
v___x_3665_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3666_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3665_);
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3666_;
goto v___jp_3625_;
}
else
{
lean_object* v___x_3667_; 
v___x_3667_ = lean_string_from_utf8_unchecked(v_a_3663_);
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3667_;
goto v___jp_3625_;
}
}
else
{
lean_object* v___x_3668_; 
lean_dec_ref_known(v___x_3662_, 1);
v___x_3668_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3668_;
goto v___jp_3625_;
}
}
}
}
}
else
{
v___y_3646_ = v_a_3649_;
goto v___jp_3645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3695_, lean_object* v_d_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3695_, v_d_3696_);
lean_dec_ref(v_context_3695_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3699_, lean_object* v_bytes_3700_){
_start:
{
lean_object* v___x_3702_; 
v___x_3702_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3700_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; lean_object* v___x_3704_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
lean_inc(v_a_3703_);
lean_dec_ref_known(v___x_3702_, 1);
v___x_3704_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3699_, v_a_3703_);
return v___x_3704_;
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
v_a_3705_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3702_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3702_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3713_, lean_object* v_bytes_3714_, lean_object* v_a_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3713_, v_bytes_3714_);
lean_dec_ref(v_bytes_3714_);
lean_dec_ref(v_context_3713_);
return v_res_3716_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3717_; uint8_t v___x_3718_; uint64_t v___x_3719_; 
v___x_3717_ = 8ULL;
v___x_3718_ = 0;
v___x_3719_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3718_, v___x_3717_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3720_, lean_object* v_name_3721_, lean_object* v_args_3722_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; uint64_t v___x_3727_; lean_object* v___x_3728_; 
v___x_3724_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3725_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3725_, 0, v_o_3720_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
lean_inc_ref(v_name_3721_);
v___x_3726_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3726_, 0, v_name_3721_);
v___x_3727_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3728_ = l_Lasm_JS_Value_invokeRaw(v___x_3725_, v___x_3726_, v_args_3722_, v___x_3727_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3728_, 1);
v___x_3730_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3731_ = lean_string_append(v___x_3730_, v_name_3721_);
lean_dec_ref(v_name_3721_);
v___x_3732_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3731_, v_a_3729_);
lean_dec(v_a_3729_);
lean_dec_ref(v___x_3731_);
return v___x_3732_;
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3740_; 
lean_dec_ref(v_name_3721_);
v_a_3733_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3735_ = v___x_3728_;
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3728_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3738_; 
if (v_isShared_3736_ == 0)
{
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
return v___x_3738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3741_, lean_object* v_name_3742_, lean_object* v_args_3743_, lean_object* v_a_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3741_, v_name_3742_, v_args_3743_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3747_, lean_object* v___f_3748_, lean_object* v_handler_3749_, lean_object* v_options_3750_, lean_object* v_a_3751_, lean_object* v_value_3752_, lean_object* v___x_3753_, lean_object* v___x_3754_, lean_object* v_a_3755_, lean_object* v___x_3756_, lean_object* v___x_3757_, lean_object* v_x_3758_){
_start:
{
uint8_t v___y_3761_; lean_object* v___y_3762_; lean_object* v_val_3763_; 
if (lean_obj_tag(v_x_3758_) == 0)
{
lean_object* v___x_3766_; 
lean_dec(v_a_3755_);
lean_dec_ref(v___x_3753_);
lean_dec(v_value_3752_);
lean_dec(v_a_3751_);
lean_dec_ref(v_options_3750_);
lean_dec_ref(v_handler_3749_);
lean_dec_ref(v___f_3748_);
lean_dec(v___x_3747_);
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v_x_3758_);
return v___x_3766_;
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3824_; 
v_a_3767_ = lean_ctor_get(v_x_3758_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v_x_3758_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3769_ = v_x_3758_;
v_isShared_3770_ = v_isSharedCheck_3824_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v_x_3758_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3824_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3814_; lean_object* v___x_3821_; 
v___x_3821_ = l_Lasm_JS_Data_field(v_a_3767_, v___x_3757_);
if (lean_obj_tag(v___x_3821_) == 4)
{
lean_object* v_s_3822_; 
v_s_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc_ref(v_s_3822_);
lean_dec_ref_known(v___x_3821_, 1);
v___y_3814_ = v_s_3822_;
goto v___jp_3813_;
}
else
{
lean_object* v___x_3823_; 
lean_dec(v___x_3821_);
v___x_3823_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3814_ = v___x_3823_;
goto v___jp_3813_;
}
v___jp_3771_:
{
lean_object* v___f_3778_; lean_object* v___x_3779_; 
lean_inc(v_a_3767_);
lean_inc(v___x_3747_);
v___f_3778_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3778_, 0, v___x_3747_);
lean_closure_set(v___f_3778_, 1, v___y_3774_);
lean_closure_set(v___f_3778_, 2, v___y_3777_);
lean_closure_set(v___f_3778_, 3, v_options_3750_);
lean_closure_set(v___f_3778_, 4, v___y_3773_);
lean_closure_set(v___f_3778_, 5, v___y_3772_);
lean_closure_set(v___f_3778_, 6, v_a_3751_);
lean_closure_set(v___f_3778_, 7, v_value_3752_);
lean_closure_set(v___f_3778_, 8, v_a_3767_);
lean_closure_set(v___f_3778_, 9, v___x_3753_);
lean_closure_set(v___f_3778_, 10, v___y_3776_);
lean_closure_set(v___f_3778_, 11, v___y_3775_);
v___x_3779_ = l_Lasm_JS_Data_field(v_a_3767_, v___x_3754_);
lean_dec(v_a_3767_);
if (lean_obj_tag(v___x_3779_) == 9)
{
lean_object* v_value_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3803_; 
v_value_3780_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3803_ == 0)
{
lean_object* v_unused_3804_; 
v_unused_3804_ = lean_ctor_get(v___x_3779_, 1);
lean_dec(v_unused_3804_);
v___x_3782_ = v___x_3779_;
v_isShared_3783_ = v_isSharedCheck_3803_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_value_3780_);
lean_dec(v___x_3779_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3803_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___f_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___f_3784_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3784_, 0, v___f_3778_);
v___x_3785_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3786_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 1, v___x_3786_);
v___x_3788_ = v___x_3782_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_value_3780_);
lean_ctor_set(v_reuseFailAlloc_3802_, 1, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; 
v___x_3789_ = lean_unsigned_to_nat(1u);
v___x_3790_ = lean_mk_empty_array_with_capacity(v___x_3789_);
v___x_3791_ = lean_array_push(v___x_3790_, v___x_3788_);
v___x_3792_ = 0;
v___x_3793_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3755_, v___x_3785_, v___x_3791_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; lean_object* v___x_3796_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref_known(v___x_3793_, 1);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v_a_3794_);
v___x_3796_ = v___x_3769_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3794_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
v___y_3761_ = v___x_3792_;
v___y_3762_ = v___f_3784_;
v_val_3763_ = v___x_3796_;
goto v___jp_3760_;
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; 
v_a_3798_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3798_);
lean_dec_ref_known(v___x_3793_, 1);
if (v_isShared_3770_ == 0)
{
lean_ctor_set_tag(v___x_3769_, 0);
lean_ctor_set(v___x_3769_, 0, v_a_3798_);
v___x_3800_ = v___x_3769_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3798_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
v___y_3761_ = v___x_3792_;
v___y_3762_ = v___f_3784_;
v_val_3763_ = v___x_3800_;
goto v___jp_3760_;
}
}
}
}
}
else
{
lean_object* v___f_3805_; lean_object* v___x_3806_; uint8_t v___x_3807_; lean_object* v___x_3809_; 
lean_dec(v___x_3779_);
lean_dec(v_a_3755_);
v___f_3805_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3805_, 0, v___f_3778_);
v___x_3806_ = lean_mk_empty_array_with_capacity(v___x_3747_);
v___x_3807_ = 0;
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v___x_3806_);
v___x_3809_ = v___x_3769_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3806_);
v___x_3809_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
v___x_3811_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3747_, v___x_3807_, v___x_3810_, v___f_3805_);
return v___x_3811_;
}
}
}
v___jp_3813_:
{
lean_object* v___f_3815_; lean_object* v___f_3816_; lean_object* v___f_3817_; lean_object* v___x_3818_; 
lean_inc_n(v___x_3747_, 2);
lean_inc_ref(v___y_3814_);
v___f_3815_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3815_, 0, v___y_3814_);
lean_closure_set(v___f_3815_, 1, v___x_3747_);
lean_closure_set(v___f_3815_, 2, v___f_3748_);
v___f_3816_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3816_, 0, v_handler_3749_);
lean_closure_set(v___f_3816_, 1, v___x_3747_);
lean_closure_set(v___f_3816_, 2, v___f_3815_);
v___f_3817_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3817_, 0, v___f_3816_);
v___x_3818_ = l_Lasm_JS_Data_field(v_a_3767_, v___x_3756_);
if (lean_obj_tag(v___x_3818_) == 4)
{
lean_object* v_s_3819_; 
v_s_3819_ = lean_ctor_get(v___x_3818_, 0);
lean_inc_ref(v_s_3819_);
lean_dec_ref_known(v___x_3818_, 1);
lean_inc_ref_n(v___f_3817_, 3);
v___y_3772_ = v___f_3817_;
v___y_3773_ = v___f_3817_;
v___y_3774_ = v___y_3814_;
v___y_3775_ = v___f_3817_;
v___y_3776_ = v___f_3817_;
v___y_3777_ = v_s_3819_;
goto v___jp_3771_;
}
else
{
lean_object* v___x_3820_; 
lean_dec(v___x_3818_);
v___x_3820_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3817_, 3);
v___y_3772_ = v___f_3817_;
v___y_3773_ = v___f_3817_;
v___y_3774_ = v___y_3814_;
v___y_3775_ = v___f_3817_;
v___y_3776_ = v___f_3817_;
v___y_3777_ = v___x_3820_;
goto v___jp_3771_;
}
}
}
}
v___jp_3760_:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v_val_3763_);
v___x_3765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3747_, v___y_3761_, v___x_3764_, v___y_3762_);
return v___x_3765_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3825_, lean_object* v___f_3826_, lean_object* v_handler_3827_, lean_object* v_options_3828_, lean_object* v_a_3829_, lean_object* v_value_3830_, lean_object* v___x_3831_, lean_object* v___x_3832_, lean_object* v_a_3833_, lean_object* v___x_3834_, lean_object* v___x_3835_, lean_object* v_x_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3825_, v___f_3826_, v_handler_3827_, v_options_3828_, v_a_3829_, v_value_3830_, v___x_3831_, v___x_3832_, v_a_3833_, v___x_3834_, v___x_3835_, v_x_3836_);
lean_dec_ref(v___x_3835_);
lean_dec_ref(v___x_3834_);
lean_dec_ref(v___x_3832_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3839_, size_t v_i_3840_, lean_object* v_bs_3841_){
_start:
{
uint8_t v___x_3842_; 
v___x_3842_ = lean_usize_dec_lt(v_i_3840_, v_sz_3839_);
if (v___x_3842_ == 0)
{
return v_bs_3841_;
}
else
{
lean_object* v_v_3843_; lean_object* v___x_3844_; lean_object* v_bs_x27_3845_; lean_object* v___x_3846_; size_t v___x_3847_; size_t v___x_3848_; lean_object* v___x_3849_; 
v_v_3843_ = lean_array_uget(v_bs_3841_, v_i_3840_);
v___x_3844_ = lean_unsigned_to_nat(0u);
v_bs_x27_3845_ = lean_array_uset(v_bs_3841_, v_i_3840_, v___x_3844_);
v___x_3846_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3846_, 0, v_v_3843_);
v___x_3847_ = ((size_t)1ULL);
v___x_3848_ = lean_usize_add(v_i_3840_, v___x_3847_);
v___x_3849_ = lean_array_uset(v_bs_x27_3845_, v_i_3840_, v___x_3846_);
v_i_3840_ = v___x_3848_;
v_bs_3841_ = v___x_3849_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3851_, lean_object* v_i_3852_, lean_object* v_bs_3853_){
_start:
{
size_t v_sz_boxed_3854_; size_t v_i_boxed_3855_; lean_object* v_res_3856_; 
v_sz_boxed_3854_ = lean_unbox_usize(v_sz_3851_);
lean_dec(v_sz_3851_);
v_i_boxed_3855_ = lean_unbox_usize(v_i_3852_);
lean_dec(v_i_3852_);
v_res_3856_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3854_, v_i_boxed_3855_, v_bs_3853_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3857_, lean_object* v_keys_3858_){
_start:
{
size_t v_sz_3860_; size_t v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_sz_3860_ = lean_array_size(v_keys_3858_);
v___x_3861_ = ((size_t)0ULL);
v___x_3862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3860_, v___x_3861_, v_keys_3858_);
v___x_3863_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3862_);
v___x_3864_ = l_Lasm_JS_Wire_encodeIO(v___x_3863_);
lean_dec_ref_known(v___x_3863_, 1);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; uint32_t v___x_3866_; uint32_t v___x_3867_; uint64_t v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3864_, 1);
v___x_3866_ = 203;
v___x_3867_ = lasm_js_value_handle(v_o_3857_);
v___x_3868_ = 0ULL;
v___x_3869_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3870_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3870_, 0, v_o_3857_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = lasm_js_call(v___x_3866_, v___x_3867_, v___x_3868_, v_a_3865_, v___x_3870_);
lean_dec_ref_known(v___x_3870_, 2);
lean_dec(v_a_3865_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3873_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v___x_3871_, 1);
v___x_3873_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3872_);
lean_dec(v_a_3872_);
return v___x_3873_;
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
v_a_3874_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3871_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3871_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
else
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3889_; 
lean_dec(v_o_3857_);
v_a_3882_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3884_ = v___x_3864_;
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3864_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3890_, lean_object* v_keys_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3890_, v_keys_3891_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3914_, lean_object* v___f_3915_, lean_object* v_handler_3916_, lean_object* v_options_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_____r_3920_){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; 
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = lean_array_get_size(v_args_3914_);
v___x_3926_ = lean_nat_dec_lt(v___x_3924_, v___x_3925_);
if (v___x_3926_ == 0)
{
lean_dec(v_a_3919_);
lean_dec(v_a_3918_);
lean_dec_ref(v_options_3917_);
lean_dec_ref(v_handler_3916_);
lean_dec_ref(v___f_3915_);
goto v___jp_3922_;
}
else
{
lean_object* v___x_3927_; 
v___x_3927_ = lean_array_fget_borrowed(v_args_3914_, v___x_3924_);
if (lean_obj_tag(v___x_3927_) == 9)
{
lean_object* v_value_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___f_3933_; lean_object* v___x_3934_; uint8_t v___x_3935_; lean_object* v_val_3937_; lean_object* v___x_3940_; 
v_value_3928_ = lean_ctor_get(v___x_3927_, 0);
v___x_3929_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3930_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3931_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3932_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3928_, 2);
v___f_3933_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3933_, 0, v___x_3924_);
lean_closure_set(v___f_3933_, 1, v___f_3915_);
lean_closure_set(v___f_3933_, 2, v_handler_3916_);
lean_closure_set(v___f_3933_, 3, v_options_3917_);
lean_closure_set(v___f_3933_, 4, v_a_3918_);
lean_closure_set(v___f_3933_, 5, v_value_3928_);
lean_closure_set(v___f_3933_, 6, v___x_3932_);
lean_closure_set(v___f_3933_, 7, v___x_3931_);
lean_closure_set(v___f_3933_, 8, v_a_3919_);
lean_closure_set(v___f_3933_, 9, v___x_3930_);
lean_closure_set(v___f_3933_, 10, v___x_3929_);
v___x_3934_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3935_ = 0;
v___x_3940_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3928_, v___x_3934_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3948_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3943_ = v___x_3940_;
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3940_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3946_; 
if (v_isShared_3944_ == 0)
{
lean_ctor_set_tag(v___x_3943_, 1);
v___x_3946_ = v___x_3943_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3941_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
v_val_3937_ = v___x_3946_;
goto v___jp_3936_;
}
}
}
else
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
v_a_3949_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3940_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3940_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
lean_ctor_set_tag(v___x_3951_, 0);
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
v_val_3937_ = v___x_3954_;
goto v___jp_3936_;
}
}
}
v___jp_3936_:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v_val_3937_);
v___x_3939_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3924_, v___x_3935_, v___x_3938_, v___f_3933_);
return v___x_3939_;
}
}
else
{
lean_dec(v_a_3919_);
lean_dec(v_a_3918_);
lean_dec_ref(v_options_3917_);
lean_dec_ref(v_handler_3916_);
lean_dec_ref(v___f_3915_);
goto v___jp_3922_;
}
}
v___jp_3922_:
{
lean_object* v___x_3923_; 
v___x_3923_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3923_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3957_, lean_object* v___f_3958_, lean_object* v_handler_3959_, lean_object* v_options_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_____r_3963_, lean_object* v___y_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3957_, v___f_3958_, v_handler_3959_, v_options_3960_, v_a_3961_, v_a_3962_, v_____r_3963_);
lean_dec_ref(v_args_3957_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3966_, lean_object* v_x_3967_){
_start:
{
if (lean_obj_tag(v_x_3967_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3977_; 
lean_dec_ref(v___f_3966_);
v_a_3969_ = lean_ctor_get(v_x_3967_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_x_3967_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3971_ = v_x_3967_;
v_isShared_3972_ = v_isSharedCheck_3977_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v_x_3967_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3977_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
lean_object* v___x_3975_; 
v___x_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
return v___x_3975_;
}
}
}
else
{
lean_object* v_a_3978_; lean_object* v___x_3979_; 
v_a_3978_ = lean_ctor_get(v_x_3967_, 0);
lean_inc(v_a_3978_);
lean_dec_ref_known(v_x_3967_, 1);
v___x_3979_ = lean_apply_2(v___f_3966_, v_a_3978_, lean_box(0));
return v___x_3979_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3980_, lean_object* v_x_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3980_, v_x_3981_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3984_, lean_object* v_handler_3985_, lean_object* v_options_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_args_3989_){
_start:
{
lean_object* v___f_3991_; lean_object* v___x_3995_; lean_object* v___x_3996_; uint8_t v___x_3997_; 
lean_inc(v_a_3988_);
lean_inc(v_a_3987_);
lean_inc_ref(v_options_3986_);
lean_inc_ref(v_handler_3985_);
lean_inc_ref(v___f_3984_);
lean_inc_ref(v_args_3989_);
v___f_3991_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3991_, 0, v_args_3989_);
lean_closure_set(v___f_3991_, 1, v___f_3984_);
lean_closure_set(v___f_3991_, 2, v_handler_3985_);
lean_closure_set(v___f_3991_, 3, v_options_3986_);
lean_closure_set(v___f_3991_, 4, v_a_3987_);
lean_closure_set(v___f_3991_, 5, v_a_3988_);
v___x_3995_ = lean_unsigned_to_nat(1u);
v___x_3996_ = lean_array_get_size(v_args_3989_);
v___x_3997_ = lean_nat_dec_lt(v___x_3995_, v___x_3996_);
if (v___x_3997_ == 0)
{
lean_dec_ref(v___f_3991_);
goto v___jp_3992_;
}
else
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_array_fget_borrowed(v_args_3989_, v___x_3995_);
switch(lean_obj_tag(v___x_3998_))
{
case 9:
{
lean_object* v___f_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; uint8_t v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
lean_inc_ref(v___x_3998_);
lean_dec_ref(v_args_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec_ref(v_options_3986_);
lean_dec_ref(v_handler_3985_);
lean_dec_ref(v___f_3984_);
v___f_3999_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3999_, 0, v___f_3991_);
v___x_4000_ = l_Lasm_Fetch_platformEnv;
v___x_4001_ = lean_unsigned_to_nat(0u);
v___x_4002_ = 0;
v___x_4003_ = lean_st_ref_swap(v___x_4000_, v___x_3998_);
lean_dec(v___x_4003_);
v___x_4004_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_4005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4001_, v___x_4002_, v___x_4004_, v___f_3999_);
return v___x_4005_;
}
case 8:
{
lean_object* v___f_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; uint8_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
lean_inc_ref(v___x_3998_);
lean_dec_ref(v_args_3989_);
lean_dec(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec_ref(v_options_3986_);
lean_dec_ref(v_handler_3985_);
lean_dec_ref(v___f_3984_);
v___f_4006_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_4006_, 0, v___f_3991_);
v___x_4007_ = l_Lasm_Fetch_platformEnv;
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = 0;
v___x_4010_ = lean_st_ref_swap(v___x_4007_, v___x_3998_);
lean_dec(v___x_4010_);
v___x_4011_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_4012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4009_, v___x_4011_, v___f_4006_);
return v___x_4012_;
}
default: 
{
lean_dec_ref(v___f_3991_);
goto v___jp_3992_;
}
}
}
v___jp_3992_:
{
lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3993_ = lean_box(0);
v___x_3994_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3989_, v___f_3984_, v_handler_3985_, v_options_3986_, v_a_3987_, v_a_3988_, v___x_3993_);
lean_dec_ref(v_args_3989_);
return v___x_3994_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_4013_, lean_object* v_handler_4014_, lean_object* v_options_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_args_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_4013_, v_handler_4014_, v_options_4015_, v_a_4016_, v_a_4017_, v_args_4018_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_4024_, lean_object* v_options_4025_){
_start:
{
lean_object* v___f_4027_; lean_object* v___x_4028_; 
v___f_4027_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_4028_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc_n(v_a_4029_, 2);
lean_dec_ref_known(v___x_4028_, 1);
v___x_4030_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_4031_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4029_, v___x_4030_);
if (lean_obj_tag(v___x_4031_) == 0)
{
lean_object* v_a_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v_a_4032_ = lean_ctor_get(v___x_4031_, 0);
lean_inc(v_a_4032_);
lean_dec_ref_known(v___x_4031_, 1);
v___x_4033_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_4034_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4029_, v___x_4033_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___f_4036_; lean_object* v___x_4037_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v___x_4034_, 1);
v___f_4036_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_4036_, 0, v___f_4027_);
lean_closure_set(v___f_4036_, 1, v_handler_4024_);
lean_closure_set(v___f_4036_, 2, v_options_4025_);
lean_closure_set(v___f_4036_, 3, v_a_4032_);
lean_closure_set(v___f_4036_, 4, v_a_4035_);
v___x_4037_ = l_Lasm_JS_Function_ofFn(v___f_4036_);
return v___x_4037_;
}
else
{
lean_dec(v_a_4032_);
lean_dec_ref(v_options_4025_);
lean_dec_ref(v_handler_4024_);
return v___x_4034_;
}
}
else
{
lean_dec(v_a_4029_);
lean_dec_ref(v_options_4025_);
lean_dec_ref(v_handler_4024_);
return v___x_4031_;
}
}
else
{
lean_dec_ref(v_options_4025_);
lean_dec_ref(v_handler_4024_);
return v___x_4028_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_4038_, lean_object* v_options_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l_Lasm_Fetch_jsFetchHandler(v_handler_4038_, v_options_4039_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_4042_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4042_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_4045_);
lean_dec_ref(v_bytes_4045_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_4048_, lean_object* v_bytes_4049_){
_start:
{
lean_object* v___x_4051_; 
v___x_4051_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4049_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_4052_, lean_object* v_bytes_4053_, lean_object* v_a_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_4052_, v_bytes_4053_);
lean_dec_ref(v_bytes_4053_);
lean_dec_ref(v_context_4052_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(lean_object* v___x_4056_, lean_object* v_s_4057_, lean_object* v_pos_4058_){
_start:
{
lean_object* v_str_4059_; lean_object* v_startInclusive_4060_; lean_object* v_endExclusive_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4072_; uint8_t v_decide_4073_; 
v_str_4059_ = lean_ctor_get(v_s_4057_, 0);
v_startInclusive_4060_ = lean_ctor_get(v_s_4057_, 1);
v_endExclusive_4061_ = lean_ctor_get(v_s_4057_, 2);
v___x_4062_ = lean_unsigned_to_nat(0u);
v___x_4063_ = lean_nat_add(v_startInclusive_4060_, v_pos_4058_);
v___x_4072_ = lean_nat_sub(v_endExclusive_4061_, v___x_4063_);
v_decide_4073_ = lean_nat_dec_eq(v___x_4062_, v___x_4072_);
lean_dec(v___x_4072_);
if (v_decide_4073_ == 0)
{
uint8_t v___x_4074_; uint32_t v___x_4076_; uint32_t v___x_4077_; uint8_t v___x_4078_; 
v___x_4074_ = lean_nat_dec_eq(v___x_4056_, v___x_4062_);
v___x_4076_ = lean_string_utf8_get_fast(v_str_4059_, v___x_4063_);
v___x_4077_ = 47;
v___x_4078_ = lean_uint32_dec_eq(v___x_4076_, v___x_4077_);
if (v___x_4078_ == 0)
{
uint32_t v___x_4079_; uint8_t v___x_4080_; 
v___x_4079_ = 63;
v___x_4080_ = lean_uint32_dec_eq(v___x_4076_, v___x_4079_);
if (v___x_4080_ == 0)
{
uint32_t v___x_4081_; uint8_t v___x_4082_; 
v___x_4081_ = 35;
v___x_4082_ = lean_uint32_dec_eq(v___x_4076_, v___x_4081_);
if (v___x_4082_ == 0)
{
uint32_t v___x_4083_; uint8_t v___x_4084_; 
v___x_4083_ = 92;
v___x_4084_ = lean_uint32_dec_eq(v___x_4076_, v___x_4083_);
if (v___x_4084_ == 0)
{
uint32_t v___x_4085_; uint8_t v___x_4086_; 
v___x_4085_ = 64;
v___x_4086_ = lean_uint32_dec_eq(v___x_4076_, v___x_4085_);
if (v___x_4086_ == 0)
{
uint32_t v___x_4087_; uint8_t v___x_4088_; 
v___x_4087_ = 32;
v___x_4088_ = lean_uint32_dec_eq(v___x_4076_, v___x_4087_);
if (v___x_4088_ == 0)
{
uint32_t v___x_4089_; uint8_t v___x_4090_; 
v___x_4089_ = 9;
v___x_4090_ = lean_uint32_dec_eq(v___x_4076_, v___x_4089_);
if (v___x_4090_ == 0)
{
uint32_t v___x_4091_; uint8_t v___x_4092_; 
v___x_4091_ = 13;
v___x_4092_ = lean_uint32_dec_eq(v___x_4076_, v___x_4091_);
if (v___x_4092_ == 0)
{
uint32_t v___x_4093_; uint8_t v___x_4094_; 
v___x_4093_ = 10;
v___x_4094_ = lean_uint32_dec_eq(v___x_4076_, v___x_4093_);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; 
v___x_4095_ = lean_uint32_to_nat(v___x_4076_);
v___x_4096_ = lean_unsigned_to_nat(32u);
v___x_4097_ = lean_nat_dec_lt(v___x_4095_, v___x_4096_);
if (v___x_4097_ == 0)
{
lean_object* v___x_4098_; uint8_t v___x_4099_; 
v___x_4098_ = lean_unsigned_to_nat(127u);
v___x_4099_ = lean_nat_dec_eq(v___x_4095_, v___x_4098_);
lean_dec(v___x_4095_);
if (v___x_4099_ == 0)
{
goto v___jp_4064_;
}
else
{
lean_dec(v___x_4063_);
return v_pos_4058_;
}
}
else
{
lean_dec(v___x_4095_);
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
}
else
{
goto v___jp_4075_;
}
v___jp_4075_:
{
if (v___x_4074_ == 0)
{
lean_dec(v___x_4063_);
return v_pos_4058_;
}
else
{
goto v___jp_4064_;
}
}
}
else
{
lean_dec(v___x_4063_);
return v_pos_4058_;
}
v___jp_4064_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; uint8_t v___x_4070_; 
v___x_4065_ = lean_string_utf8_next_fast(v_str_4059_, v___x_4063_);
v___x_4066_ = lean_nat_sub(v___x_4065_, v___x_4063_);
lean_dec(v___x_4063_);
v___x_4067_ = lean_nat_add(v_pos_4058_, v___x_4066_);
lean_dec(v___x_4066_);
v___x_4068_ = lean_unsigned_to_nat(1u);
v___x_4069_ = lean_nat_add(v_pos_4058_, v___x_4068_);
v___x_4070_ = lean_nat_dec_le(v___x_4069_, v___x_4067_);
lean_dec(v___x_4069_);
if (v___x_4070_ == 0)
{
lean_dec(v___x_4067_);
return v_pos_4058_;
}
else
{
lean_dec(v_pos_4058_);
v_pos_4058_ = v___x_4067_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0___boxed(lean_object* v___x_4100_, lean_object* v_s_4101_, lean_object* v_pos_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4100_, v_s_4101_, v_pos_4102_);
lean_dec_ref(v_s_4101_);
lean_dec(v___x_4100_);
return v_res_4103_;
}
}
static lean_object* _init_l_Lasm_Fetch_nodeRequestUrl___closed__0(void){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4104_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4105_ = lean_string_utf8_byte_size(v___x_4104_);
return v___x_4105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl(lean_object* v_target_4108_, lean_object* v_host_4109_, lean_object* v_port_4110_){
_start:
{
lean_object* v___y_4112_; 
if (lean_obj_tag(v_host_4109_) == 0)
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4126_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4127_ = l_Nat_reprFast(v_port_4110_);
v___x_4128_ = lean_string_append(v___x_4126_, v___x_4127_);
lean_dec_ref(v___x_4127_);
v___y_4112_ = v___x_4128_;
goto v___jp_4111_;
}
else
{
lean_object* v_val_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; uint8_t v___x_4132_; 
v_val_4129_ = lean_ctor_get(v_host_4109_, 0);
lean_inc(v_val_4129_);
lean_dec_ref_known(v_host_4109_, 1);
v___x_4130_ = lean_string_utf8_byte_size(v_val_4129_);
v___x_4131_ = lean_unsigned_to_nat(0u);
v___x_4132_ = lean_nat_dec_eq(v___x_4130_, v___x_4131_);
if (v___x_4132_ == 0)
{
lean_object* v___x_4133_; lean_object* v___x_4134_; uint8_t v_decide_4135_; 
lean_inc(v_val_4129_);
v___x_4133_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4133_, 0, v_val_4129_);
lean_ctor_set(v___x_4133_, 1, v___x_4131_);
lean_ctor_set(v___x_4133_, 2, v___x_4130_);
v___x_4134_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4130_, v___x_4133_, v___x_4131_);
lean_dec_ref_known(v___x_4133_, 3);
v_decide_4135_ = lean_nat_dec_eq(v___x_4134_, v___x_4130_);
lean_dec(v___x_4134_);
if (v_decide_4135_ == 0)
{
lean_dec(v_val_4129_);
goto v___jp_4122_;
}
else
{
lean_dec(v_port_4110_);
v___y_4112_ = v_val_4129_;
goto v___jp_4111_;
}
}
else
{
lean_dec(v_val_4129_);
goto v___jp_4122_;
}
}
v___jp_4111_:
{
lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; uint8_t v___x_4116_; 
v___x_4113_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4114_ = lean_string_utf8_byte_size(v_target_4108_);
v___x_4115_ = lean_obj_once(&l_Lasm_Fetch_nodeRequestUrl___closed__0, &l_Lasm_Fetch_nodeRequestUrl___closed__0_once, _init_l_Lasm_Fetch_nodeRequestUrl___closed__0);
v___x_4116_ = lean_nat_dec_le(v___x_4115_, v___x_4114_);
if (v___x_4116_ == 0)
{
lean_dec_ref(v___y_4112_);
lean_inc_ref(v_target_4108_);
return v_target_4108_;
}
else
{
lean_object* v___x_4117_; uint8_t v___x_4118_; 
v___x_4117_ = lean_unsigned_to_nat(0u);
v___x_4118_ = lean_string_memcmp(v_target_4108_, v___x_4113_, v___x_4117_, v___x_4117_, v___x_4115_);
if (v___x_4118_ == 0)
{
lean_dec_ref(v___y_4112_);
lean_inc_ref(v_target_4108_);
return v_target_4108_;
}
else
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4119_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__1));
v___x_4120_ = lean_string_append(v___x_4119_, v___y_4112_);
lean_dec_ref(v___y_4112_);
v___x_4121_ = lean_string_append(v___x_4120_, v_target_4108_);
return v___x_4121_;
}
}
}
v___jp_4122_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4123_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4124_ = l_Nat_reprFast(v_port_4110_);
v___x_4125_ = lean_string_append(v___x_4123_, v___x_4124_);
lean_dec_ref(v___x_4124_);
v___y_4112_ = v___x_4125_;
goto v___jp_4111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl___boxed(lean_object* v_target_4136_, lean_object* v_host_4137_, lean_object* v_port_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Lasm_Fetch_nodeRequestUrl(v_target_4136_, v_host_4137_, v_port_4138_);
lean_dec_ref(v_target_4136_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v_x_4140_){
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
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4160_; 
v_a_4151_ = lean_ctor_get(v_x_4140_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v_x_4140_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4153_ = v_x_4140_;
v_isShared_4154_ = v_isSharedCheck_4160_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v_x_4140_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4160_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4156_);
v___x_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
return v___x_4158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v_x_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Lasm_Fetch_serveNode___lam__1(v_x_4161_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_4168_){
_start:
{
if (lean_obj_tag(v_x_4168_) == 0)
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4178_; 
v_a_4170_ = lean_ctor_get(v_x_4168_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v_x_4168_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4172_ = v_x_4168_;
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v_x_4168_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4175_; 
if (v_isShared_4173_ == 0)
{
v___x_4175_ = v___x_4172_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4170_);
v___x_4175_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
lean_object* v___x_4176_; 
v___x_4176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4175_);
return v___x_4176_;
}
}
}
else
{
lean_object* v___x_4179_; 
lean_dec_ref_known(v_x_4168_, 1);
v___x_4179_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4179_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_4180_, lean_object* v___y_4181_){
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l_Lasm_Fetch_serveNode___lam__0(v_x_4180_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_4183_, lean_object* v_x_4184_){
_start:
{
if (lean_obj_tag(v_x_4184_) == 0)
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4194_; 
lean_dec_ref(v___f_4183_);
v_a_4186_ = lean_ctor_get(v_x_4184_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v_x_4184_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4188_ = v_x_4184_;
v_isShared_4189_ = v_isSharedCheck_4194_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v_x_4184_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4194_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4192_; 
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
return v___x_4192_;
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4215_; 
v_a_4195_ = lean_ctor_get(v_x_4184_, 0);
v_isSharedCheck_4215_ = !lean_is_exclusive(v_x_4184_);
if (v_isSharedCheck_4215_ == 0)
{
v___x_4197_ = v_x_4184_;
v_isShared_4198_ = v_isSharedCheck_4215_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v_x_4184_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4215_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v_flush_4199_; lean_object* v___x_4200_; uint8_t v___x_4201_; lean_object* v_val_4203_; lean_object* v___x_4206_; 
v_flush_4199_ = lean_ctor_get(v_a_4195_, 0);
lean_inc_ref(v_flush_4199_);
lean_dec(v_a_4195_);
v___x_4200_ = lean_unsigned_to_nat(0u);
v___x_4201_ = 0;
v___x_4206_ = lean_apply_1(v_flush_4199_, lean_box(0));
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; lean_object* v___x_4209_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4207_);
lean_dec_ref_known(v___x_4206_, 1);
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v_a_4207_);
v___x_4209_ = v___x_4197_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4207_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
v_val_4203_ = v___x_4209_;
goto v___jp_4202_;
}
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4213_; 
v_a_4211_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4211_);
lean_dec_ref_known(v___x_4206_, 1);
if (v_isShared_4198_ == 0)
{
lean_ctor_set_tag(v___x_4197_, 0);
lean_ctor_set(v___x_4197_, 0, v_a_4211_);
v___x_4213_ = v___x_4197_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_a_4211_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
v_val_4203_ = v___x_4213_;
goto v___jp_4202_;
}
}
v___jp_4202_:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4204_, 0, v_val_4203_);
v___x_4205_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4200_, v___x_4201_, v___x_4204_, v___f_4183_);
return v___x_4205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_4216_, lean_object* v_x_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Lasm_Fetch_serveNode___lam__2(v___f_4216_, v_x_4217_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_4220_, lean_object* v_x_4221_){
_start:
{
if (lean_obj_tag(v_x_4221_) == 0)
{
lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4231_; 
lean_dec_ref(v___f_4220_);
v_a_4223_ = lean_ctor_get(v_x_4221_, 0);
v_isSharedCheck_4231_ = !lean_is_exclusive(v_x_4221_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4225_ = v_x_4221_;
v_isShared_4226_ = v_isSharedCheck_4231_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_dec(v_x_4221_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4231_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
lean_object* v___x_4229_; 
v___x_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4228_);
return v___x_4229_;
}
}
}
else
{
lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4243_; 
v_isSharedCheck_4243_ = !lean_is_exclusive(v_x_4221_);
if (v_isSharedCheck_4243_ == 0)
{
lean_object* v_unused_4244_; 
v_unused_4244_ = lean_ctor_get(v_x_4221_, 0);
lean_dec(v_unused_4244_);
v___x_4233_ = v_x_4221_;
v_isShared_4234_ = v_isSharedCheck_4243_;
goto v_resetjp_4232_;
}
else
{
lean_dec(v_x_4221_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4243_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4235_; uint8_t v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4239_; 
v___x_4235_ = lean_unsigned_to_nat(0u);
v___x_4236_ = 0;
v___x_4237_ = lean_get_stdout();
if (v_isShared_4234_ == 0)
{
lean_ctor_set(v___x_4233_, 0, v___x_4237_);
v___x_4239_ = v___x_4233_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v___x_4237_);
v___x_4239_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___x_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4239_);
v___x_4241_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4235_, v___x_4236_, v___x_4240_, v___f_4220_);
return v___x_4241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_4245_, lean_object* v_x_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lasm_Fetch_serveNode___lam__3(v___f_4245_, v_x_4246_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_4249_){
_start:
{
if (lean_obj_tag(v_x_4249_) == 0)
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4259_; 
v_a_4251_ = lean_ctor_get(v_x_4249_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v_x_4249_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4253_ = v_x_4249_;
v_isShared_4254_ = v_isSharedCheck_4259_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v_x_4249_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4259_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_a_4251_);
v___x_4256_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
lean_object* v___x_4257_; 
v___x_4257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4256_);
return v___x_4257_;
}
}
}
else
{
lean_object* v___x_4260_; 
lean_dec_ref_known(v_x_4249_, 1);
v___x_4260_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4260_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Lasm_Fetch_serveNode___lam__4(v_x_4261_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4265_, lean_object* v___x_4266_, lean_object* v_____r_4267_){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4269_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4270_, 0, v_snd_4265_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
lean_ctor_set(v___x_4270_, 2, v___x_4266_);
v___x_4271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
v___x_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4271_);
return v___x_4272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4273_, lean_object* v___x_4274_, lean_object* v_____r_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4273_, v___x_4274_, v_____r_4275_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_4278_, lean_object* v_x_4279_){
_start:
{
if (lean_obj_tag(v_x_4279_) == 0)
{
lean_object* v_a_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4289_; 
lean_dec_ref(v___f_4278_);
v_a_4281_ = lean_ctor_get(v_x_4279_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v_x_4279_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4283_ = v_x_4279_;
v_isShared_4284_ = v_isSharedCheck_4289_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_a_4281_);
lean_dec(v_x_4279_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4289_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4286_; 
if (v_isShared_4284_ == 0)
{
v___x_4286_ = v___x_4283_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4281_);
v___x_4286_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
return v___x_4287_;
}
}
}
else
{
lean_object* v_a_4290_; 
v_a_4290_ = lean_ctor_get(v_x_4279_, 0);
lean_inc(v_a_4290_);
lean_dec_ref_known(v_x_4279_, 1);
if (lean_obj_tag(v_a_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4299_; 
lean_dec_ref(v___f_4278_);
v_a_4291_ = lean_ctor_get(v_a_4290_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v_a_4290_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4293_ = v_a_4290_;
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_a_4291_);
lean_dec(v_a_4290_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4299_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4296_; 
if (v_isShared_4294_ == 0)
{
lean_ctor_set_tag(v___x_4293_, 1);
v___x_4296_ = v___x_4293_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_a_4291_);
v___x_4296_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
lean_object* v___x_4297_; 
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4301_; 
v_a_4300_ = lean_ctor_get(v_a_4290_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v_a_4290_, 1);
v___x_4301_ = lean_apply_2(v___f_4278_, v_a_4300_, lean_box(0));
return v___x_4301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4302_, lean_object* v_x_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4302_, v_x_4303_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_4307_, lean_object* v___x_4308_, lean_object* v_x_4309_){
_start:
{
if (lean_obj_tag(v_x_4309_) == 0)
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4319_; 
lean_dec_ref(v___x_4308_);
lean_dec(v_snd_4307_);
v_a_4311_ = lean_ctor_get(v_x_4309_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v_x_4309_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4313_ = v_x_4309_;
v_isShared_4314_ = v_isSharedCheck_4319_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v_x_4309_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4319_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
lean_object* v___x_4317_; 
v___x_4317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4317_, 0, v___x_4316_);
return v___x_4317_;
}
}
}
else
{
lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4330_; 
v_isSharedCheck_4330_ = !lean_is_exclusive(v_x_4309_);
if (v_isSharedCheck_4330_ == 0)
{
lean_object* v_unused_4331_; 
v_unused_4331_ = lean_ctor_get(v_x_4309_, 0);
lean_dec(v_unused_4331_);
v___x_4321_ = v_x_4309_;
v_isShared_4322_ = v_isSharedCheck_4330_;
goto v_resetjp_4320_;
}
else
{
lean_dec(v_x_4309_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4330_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4326_; 
v___x_4323_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4324_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4324_, 0, v_snd_4307_);
lean_ctor_set(v___x_4324_, 1, v___x_4323_);
lean_ctor_set(v___x_4324_, 2, v___x_4308_);
if (v_isShared_4322_ == 0)
{
lean_ctor_set_tag(v___x_4321_, 0);
lean_ctor_set(v___x_4321_, 0, v___x_4324_);
v___x_4326_ = v___x_4321_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v___x_4324_);
v___x_4326_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4326_);
v___x_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
return v___x_4328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_4332_, lean_object* v___x_4333_, lean_object* v_x_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_4332_, v___x_4333_, v_x_4334_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4337_, lean_object* v_name_4338_, lean_object* v_args_4339_){
_start:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; uint64_t v___x_4344_; lean_object* v___x_4345_; 
v___x_4341_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4342_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4342_, 0, v_o_4337_);
lean_ctor_set(v___x_4342_, 1, v___x_4341_);
v___x_4343_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4343_, 0, v_name_4338_);
v___x_4344_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4345_ = l_Lasm_JS_Value_invokeRaw(v___x_4342_, v___x_4343_, v_args_4339_, v___x_4344_);
if (lean_obj_tag(v___x_4345_) == 0)
{
lean_object* v_a_4346_; lean_object* v___x_4347_; 
v_a_4346_ = lean_ctor_get(v___x_4345_, 0);
lean_inc(v_a_4346_);
lean_dec_ref_known(v___x_4345_, 1);
v___x_4347_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4346_);
lean_dec(v_a_4346_);
return v___x_4347_;
}
else
{
lean_object* v_a_4348_; lean_object* v___x_4350_; uint8_t v_isShared_4351_; uint8_t v_isSharedCheck_4355_; 
v_a_4348_ = lean_ctor_get(v___x_4345_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4345_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4350_ = v___x_4345_;
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
else
{
lean_inc(v_a_4348_);
lean_dec(v___x_4345_);
v___x_4350_ = lean_box(0);
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
v_resetjp_4349_:
{
lean_object* v___x_4353_; 
if (v_isShared_4351_ == 0)
{
v___x_4353_ = v___x_4350_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v_a_4348_);
v___x_4353_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
return v___x_4353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4356_, lean_object* v_name_4357_, lean_object* v_args_4358_, lean_object* v_a_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4356_, v_name_4357_, v_args_4358_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4361_, uint8_t v___x_4362_, lean_object* v___f_4363_, lean_object* v_snd_4364_, lean_object* v_chunk_4365_){
_start:
{
lean_object* v_val_4368_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___x_4371_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4372_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4372_, 0, v_chunk_4365_);
v___x_4373_ = lean_unsigned_to_nat(1u);
v___x_4374_ = lean_mk_empty_array_with_capacity(v___x_4373_);
v___x_4375_ = lean_array_push(v___x_4374_, v___x_4372_);
v___x_4376_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4364_, v___x_4371_, v___x_4375_);
if (lean_obj_tag(v___x_4376_) == 0)
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4384_; 
v_a_4377_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4379_ = v___x_4376_;
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4376_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4382_; 
if (v_isShared_4380_ == 0)
{
lean_ctor_set_tag(v___x_4379_, 1);
v___x_4382_ = v___x_4379_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4377_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
v_val_4368_ = v___x_4382_;
goto v___jp_4367_;
}
}
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
v_a_4385_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4376_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4376_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
lean_ctor_set_tag(v___x_4387_, 0);
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
v_val_4368_ = v___x_4390_;
goto v___jp_4367_;
}
}
}
v___jp_4367_:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4369_, 0, v_val_4368_);
v___x_4370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4361_, v___x_4362_, v___x_4369_, v___f_4363_);
return v___x_4370_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4393_, lean_object* v___x_4394_, lean_object* v___f_4395_, lean_object* v_snd_4396_, lean_object* v_chunk_4397_, lean_object* v___y_4398_){
_start:
{
uint8_t v___x_18240__boxed_4399_; lean_object* v_res_4400_; 
v___x_18240__boxed_4399_ = lean_unbox(v___x_4394_);
v_res_4400_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4393_, v___x_18240__boxed_4399_, v___f_4395_, v_snd_4396_, v_chunk_4397_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4401_, uint8_t v___x_4402_, lean_object* v___f_4403_, lean_object* v_x_4404_){
_start:
{
lean_object* v_val_4407_; 
if (lean_obj_tag(v_x_4404_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4426_; 
v_a_4410_ = lean_ctor_get(v_x_4404_, 0);
v_isSharedCheck_4426_ = !lean_is_exclusive(v_x_4404_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4412_ = v_x_4404_;
v_isShared_4413_ = v_isSharedCheck_4426_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v_x_4404_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4426_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___x_4414_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4415_ = lean_io_error_to_string(v_a_4410_);
v___x_4416_ = lean_string_append(v___x_4414_, v___x_4415_);
lean_dec_ref(v___x_4415_);
v___x_4417_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4416_);
if (lean_obj_tag(v___x_4417_) == 0)
{
lean_object* v_a_4418_; lean_object* v___x_4420_; 
v_a_4418_ = lean_ctor_get(v___x_4417_, 0);
lean_inc(v_a_4418_);
lean_dec_ref_known(v___x_4417_, 1);
if (v_isShared_4413_ == 0)
{
lean_ctor_set_tag(v___x_4412_, 1);
lean_ctor_set(v___x_4412_, 0, v_a_4418_);
v___x_4420_ = v___x_4412_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4418_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
v_val_4407_ = v___x_4420_;
goto v___jp_4406_;
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; 
v_a_4422_ = lean_ctor_get(v___x_4417_, 0);
lean_inc(v_a_4422_);
lean_dec_ref_known(v___x_4417_, 1);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 0, v_a_4422_);
v___x_4424_ = v___x_4412_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_a_4422_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
v_val_4407_ = v___x_4424_;
goto v___jp_4406_;
}
}
}
}
else
{
lean_object* v___x_4427_; 
lean_dec_ref(v___f_4403_);
lean_dec(v___x_4401_);
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v_x_4404_);
return v___x_4427_;
}
v___jp_4406_:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4408_, 0, v_val_4407_);
v___x_4409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4401_, v___x_4402_, v___x_4408_, v___f_4403_);
return v___x_4409_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4428_, lean_object* v___x_4429_, lean_object* v___f_4430_, lean_object* v_x_4431_, lean_object* v___y_4432_){
_start:
{
uint8_t v___x_18308__boxed_4433_; lean_object* v_res_4434_; 
v___x_18308__boxed_4433_ = lean_unbox(v___x_4429_);
v_res_4434_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4428_, v___x_18308__boxed_4433_, v___f_4430_, v_x_4431_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4435_, lean_object* v_snd_4436_, lean_object* v___y_4437_, uint16_t v_status_4438_, lean_object* v_body_4439_, lean_object* v___x_4440_, lean_object* v___f_4441_, lean_object* v___f_4442_, lean_object* v___f_4443_, lean_object* v___f_4444_, lean_object* v___f_4445_, lean_object* v_x_4446_){
_start:
{
if (lean_obj_tag(v_x_4446_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref(v___f_4445_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec_ref(v___f_4442_);
lean_dec_ref(v___f_4441_);
lean_dec(v___x_4440_);
lean_dec_ref(v_body_4439_);
lean_dec(v_snd_4436_);
lean_dec(v_stream_4435_);
v_a_4448_ = lean_ctor_get(v_x_4446_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_x_4446_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4450_ = v_x_4446_;
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v_x_4446_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
lean_object* v___x_4454_; 
v___x_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
return v___x_4454_;
}
}
}
else
{
lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4486_; 
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4446_);
if (v_isSharedCheck_4486_ == 0)
{
lean_object* v_unused_4487_; 
v_unused_4487_ = lean_ctor_get(v_x_4446_, 0);
lean_dec(v_unused_4487_);
v___x_4458_ = v_x_4446_;
v_isShared_4459_ = v_isSharedCheck_4486_;
goto v_resetjp_4457_;
}
else
{
lean_dec(v_x_4446_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4486_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
if (lean_obj_tag(v_stream_4435_) == 0)
{
lean_object* v___x_4460_; lean_object* v___y_4462_; uint8_t v___x_4471_; 
lean_dec_ref(v___f_4445_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec_ref(v___f_4442_);
lean_dec_ref(v___f_4441_);
lean_dec(v___x_4440_);
v___x_4460_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4471_ = l_Lasm_Fetch_bodyless(v___y_4437_, v_status_4438_);
if (v___x_4471_ == 0)
{
lean_object* v___x_4472_; 
v___x_4472_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4472_, 0, v_body_4439_);
v___y_4462_ = v___x_4472_;
goto v___jp_4461_;
}
else
{
lean_object* v___x_4473_; 
lean_dec_ref(v_body_4439_);
v___x_4473_ = lean_box(0);
v___y_4462_ = v___x_4473_;
goto v___jp_4461_;
}
v___jp_4461_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4468_; 
v___x_4463_ = lean_unsigned_to_nat(1u);
v___x_4464_ = lean_mk_empty_array_with_capacity(v___x_4463_);
v___x_4465_ = lean_array_push(v___x_4464_, v___y_4462_);
v___x_4466_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4466_, 0, v_snd_4436_);
lean_ctor_set(v___x_4466_, 1, v___x_4460_);
lean_ctor_set(v___x_4466_, 2, v___x_4465_);
if (v_isShared_4459_ == 0)
{
lean_ctor_set(v___x_4458_, 0, v___x_4466_);
v___x_4468_ = v___x_4458_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v___x_4466_);
v___x_4468_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4469_; 
v___x_4469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
return v___x_4469_;
}
}
}
else
{
lean_object* v_val_4474_; uint8_t v___x_4475_; 
lean_del_object(v___x_4458_);
lean_dec_ref(v_body_4439_);
v_val_4474_ = lean_ctor_get(v_stream_4435_, 0);
lean_inc(v_val_4474_);
lean_dec_ref_known(v_stream_4435_, 1);
v___x_4475_ = l_Lasm_Fetch_bodyless(v___y_4437_, v_status_4438_);
if (v___x_4475_ == 0)
{
lean_object* v___x_4476_; lean_object* v___f_4477_; lean_object* v___x_4478_; lean_object* v___f_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; 
lean_dec_ref(v___f_4445_);
v___x_4476_ = lean_box(v___x_4475_);
lean_inc_n(v___x_4440_, 4);
v___f_4477_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4477_, 0, v___x_4440_);
lean_closure_set(v___f_4477_, 1, v___x_4476_);
lean_closure_set(v___f_4477_, 2, v___f_4441_);
lean_closure_set(v___f_4477_, 3, v_snd_4436_);
v___x_4478_ = lean_box(v___x_4475_);
v___f_4479_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4479_, 0, v___x_4440_);
lean_closure_set(v___f_4479_, 1, v___x_4478_);
lean_closure_set(v___f_4479_, 2, v___f_4442_);
v___x_4480_ = lean_apply_2(v_val_4474_, v___f_4477_, lean_box(0));
v___x_4481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4440_, v___x_4475_, v___x_4480_, v___f_4443_);
v___x_4482_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4440_, v___x_4475_, v___x_4481_, v___f_4479_);
v___x_4483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4440_, v___x_4475_, v___x_4482_, v___f_4444_);
return v___x_4483_;
}
else
{
lean_object* v___x_4484_; lean_object* v___x_4485_; 
lean_dec(v_val_4474_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec_ref(v___f_4442_);
lean_dec_ref(v___f_4441_);
lean_dec(v___x_4440_);
lean_dec(v_snd_4436_);
v___x_4484_ = lean_box(0);
v___x_4485_ = lean_apply_2(v___f_4445_, v___x_4484_, lean_box(0));
return v___x_4485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4488_, lean_object* v_snd_4489_, lean_object* v___y_4490_, lean_object* v_status_4491_, lean_object* v_body_4492_, lean_object* v___x_4493_, lean_object* v___f_4494_, lean_object* v___f_4495_, lean_object* v___f_4496_, lean_object* v___f_4497_, lean_object* v___f_4498_, lean_object* v_x_4499_, lean_object* v___y_4500_){
_start:
{
uint16_t v_status_boxed_4501_; lean_object* v_res_4502_; 
v_status_boxed_4501_ = lean_unbox(v_status_4491_);
v_res_4502_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4488_, v_snd_4489_, v___y_4490_, v_status_boxed_4501_, v_body_4492_, v___x_4493_, v___f_4494_, v___f_4495_, v___f_4496_, v___f_4497_, v___f_4498_, v_x_4499_);
lean_dec_ref(v___y_4490_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4503_, size_t v_i_4504_, size_t v_stop_4505_, lean_object* v_b_4506_){
_start:
{
uint8_t v___x_4507_; 
v___x_4507_ = lean_usize_dec_eq(v_i_4504_, v_stop_4505_);
if (v___x_4507_ == 0)
{
lean_object* v___x_4508_; lean_object* v_fst_4509_; lean_object* v_snd_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; size_t v___x_4515_; size_t v___x_4516_; 
v___x_4508_ = lean_array_uget_borrowed(v_as_4503_, v_i_4504_);
v_fst_4509_ = lean_ctor_get(v___x_4508_, 0);
v_snd_4510_ = lean_ctor_get(v___x_4508_, 1);
lean_inc(v_fst_4509_);
v___x_4511_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4511_, 0, v_fst_4509_);
v___x_4512_ = lean_array_push(v_b_4506_, v___x_4511_);
lean_inc(v_snd_4510_);
v___x_4513_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4513_, 0, v_snd_4510_);
v___x_4514_ = lean_array_push(v___x_4512_, v___x_4513_);
v___x_4515_ = ((size_t)1ULL);
v___x_4516_ = lean_usize_add(v_i_4504_, v___x_4515_);
v_i_4504_ = v___x_4516_;
v_b_4506_ = v___x_4514_;
goto _start;
}
else
{
return v_b_4506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4518_, lean_object* v_i_4519_, lean_object* v_stop_4520_, lean_object* v_b_4521_){
_start:
{
size_t v_i_boxed_4522_; size_t v_stop_boxed_4523_; lean_object* v_res_4524_; 
v_i_boxed_4522_ = lean_unbox_usize(v_i_4519_);
lean_dec(v_i_4519_);
v_stop_boxed_4523_ = lean_unbox_usize(v_stop_4520_);
lean_dec(v_stop_4520_);
v_res_4524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4518_, v_i_boxed_4522_, v_stop_boxed_4523_, v_b_4521_);
lean_dec_ref(v_as_4518_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4526_, lean_object* v_snd_4527_, lean_object* v___y_4528_, lean_object* v___f_4529_, lean_object* v___f_4530_, lean_object* v_x_4531_){
_start:
{
lean_object* v___y_4534_; uint8_t v___y_4535_; lean_object* v_val_4536_; lean_object* v___y_4540_; lean_object* v___y_4541_; lean_object* v___y_4542_; lean_object* v___y_4543_; 
if (lean_obj_tag(v_x_4531_) == 0)
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4575_; 
lean_dec_ref(v___f_4530_);
lean_dec_ref(v___f_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v_snd_4527_);
lean_dec(v___x_4526_);
v_a_4567_ = lean_ctor_get(v_x_4531_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v_x_4531_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4569_ = v_x_4531_;
v_isShared_4570_ = v_isSharedCheck_4575_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v_x_4531_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4575_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_object* v___x_4573_; 
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
return v___x_4573_;
}
}
}
else
{
lean_object* v_a_4576_; uint16_t v_status_4577_; lean_object* v_headers_4578_; lean_object* v_body_4579_; lean_object* v_stream_4580_; lean_object* v___x_4581_; lean_object* v___f_4582_; lean_object* v___f_4583_; lean_object* v___f_4584_; lean_object* v___y_4586_; lean_object* v___x_4598_; uint8_t v___x_4599_; 
v_a_4576_ = lean_ctor_get(v_x_4531_, 0);
lean_inc(v_a_4576_);
lean_dec_ref_known(v_x_4531_, 1);
v_status_4577_ = lean_ctor_get_uint16(v_a_4576_, sizeof(void*)*3);
v_headers_4578_ = lean_ctor_get(v_a_4576_, 0);
lean_inc_ref(v_headers_4578_);
v_body_4579_ = lean_ctor_get(v_a_4576_, 1);
lean_inc_ref(v_body_4579_);
v_stream_4580_ = lean_ctor_get(v_a_4576_, 2);
lean_inc(v_stream_4580_);
lean_dec(v_a_4576_);
v___x_4581_ = lean_mk_empty_array_with_capacity(v___x_4526_);
lean_inc_ref_n(v___x_4581_, 2);
lean_inc_n(v_snd_4527_, 2);
v___f_4582_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4582_, 0, v_snd_4527_);
lean_closure_set(v___f_4582_, 1, v___x_4581_);
lean_inc_ref(v___f_4582_);
v___f_4583_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4583_, 0, v___f_4582_);
v___f_4584_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4584_, 0, v_snd_4527_);
lean_closure_set(v___f_4584_, 1, v___x_4581_);
v___x_4598_ = lean_array_get_size(v_headers_4578_);
v___x_4599_ = lean_nat_dec_lt(v___x_4526_, v___x_4598_);
if (v___x_4599_ == 0)
{
lean_dec_ref(v_headers_4578_);
v___y_4586_ = v___x_4581_;
goto v___jp_4585_;
}
else
{
uint8_t v___x_4600_; 
v___x_4600_ = lean_nat_dec_le(v___x_4598_, v___x_4598_);
if (v___x_4600_ == 0)
{
if (v___x_4599_ == 0)
{
lean_dec_ref(v_headers_4578_);
v___y_4586_ = v___x_4581_;
goto v___jp_4585_;
}
else
{
size_t v___x_4601_; size_t v___x_4602_; lean_object* v___x_4603_; 
v___x_4601_ = ((size_t)0ULL);
v___x_4602_ = lean_usize_of_nat(v___x_4598_);
v___x_4603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4578_, v___x_4601_, v___x_4602_, v___x_4581_);
lean_dec_ref(v_headers_4578_);
v___y_4586_ = v___x_4603_;
goto v___jp_4585_;
}
}
else
{
size_t v___x_4604_; size_t v___x_4605_; lean_object* v___x_4606_; 
v___x_4604_ = ((size_t)0ULL);
v___x_4605_ = lean_usize_of_nat(v___x_4598_);
v___x_4606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4578_, v___x_4604_, v___x_4605_, v___x_4581_);
lean_dec_ref(v_headers_4578_);
v___y_4586_ = v___x_4606_;
goto v___jp_4585_;
}
}
v___jp_4585_:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___f_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; uint8_t v___x_4594_; 
v___x_4587_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4588_ = lean_box(v_status_4577_);
lean_inc(v___x_4526_);
lean_inc(v_snd_4527_);
v___f_4589_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4589_, 0, v_stream_4580_);
lean_closure_set(v___f_4589_, 1, v_snd_4527_);
lean_closure_set(v___f_4589_, 2, v___y_4528_);
lean_closure_set(v___f_4589_, 3, v___x_4588_);
lean_closure_set(v___f_4589_, 4, v_body_4579_);
lean_closure_set(v___f_4589_, 5, v___x_4526_);
lean_closure_set(v___f_4589_, 6, v___f_4529_);
lean_closure_set(v___f_4589_, 7, v___f_4584_);
lean_closure_set(v___f_4589_, 8, v___f_4530_);
lean_closure_set(v___f_4589_, 9, v___f_4583_);
lean_closure_set(v___f_4589_, 10, v___f_4582_);
v___x_4590_ = lean_uint16_to_nat(v_status_4577_);
v___x_4591_ = lean_nat_to_int(v___x_4590_);
v___x_4592_ = lean_nat_abs(v___x_4591_);
v___x_4593_ = lean_cstr_to_nat("9007199254740991");
v___x_4594_ = lean_nat_dec_le(v___x_4592_, v___x_4593_);
lean_dec(v___x_4592_);
if (v___x_4594_ == 0)
{
lean_object* v___x_4595_; 
v___x_4595_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4595_, 0, v___x_4591_);
v___y_4540_ = v___f_4589_;
v___y_4541_ = v___y_4586_;
v___y_4542_ = v___x_4587_;
v___y_4543_ = v___x_4595_;
goto v___jp_4539_;
}
else
{
double v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = l_Float_ofInt(v___x_4591_);
lean_dec(v___x_4591_);
v___x_4597_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4597_, 0, v___x_4596_);
v___y_4540_ = v___f_4589_;
v___y_4541_ = v___y_4586_;
v___y_4542_ = v___x_4587_;
v___y_4543_ = v___x_4597_;
goto v___jp_4539_;
}
}
}
v___jp_4533_:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; 
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v_val_4536_);
v___x_4538_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4526_, v___y_4535_, v___x_4537_, v___y_4534_);
return v___x_4538_;
}
v___jp_4539_:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; uint8_t v___x_4549_; lean_object* v___x_4550_; 
v___x_4544_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4544_, 0, v___y_4541_);
v___x_4545_ = lean_unsigned_to_nat(2u);
v___x_4546_ = lean_mk_empty_array_with_capacity(v___x_4545_);
v___x_4547_ = lean_array_push(v___x_4546_, v___y_4543_);
v___x_4548_ = lean_array_push(v___x_4547_, v___x_4544_);
v___x_4549_ = 0;
lean_inc_ref(v___y_4542_);
v___x_4550_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4527_, v___y_4542_, v___x_4548_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
v_a_4551_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___x_4550_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4550_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
lean_ctor_set_tag(v___x_4553_, 1);
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
v___y_4534_ = v___y_4540_;
v___y_4535_ = v___x_4549_;
v_val_4536_ = v___x_4556_;
goto v___jp_4533_;
}
}
}
else
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4566_; 
v_a_4559_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4561_ = v___x_4550_;
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v___x_4550_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
lean_ctor_set_tag(v___x_4561_, 0);
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
v___y_4534_ = v___y_4540_;
v___y_4535_ = v___x_4549_;
v_val_4536_ = v___x_4564_;
goto v___jp_4533_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4607_, lean_object* v_snd_4608_, lean_object* v___y_4609_, lean_object* v___f_4610_, lean_object* v___f_4611_, lean_object* v_x_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4607_, v_snd_4608_, v___y_4609_, v___f_4610_, v___f_4611_, v_x_4612_);
return v_res_4614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4615_, lean_object* v___x_4616_, lean_object* v___f_4617_, lean_object* v_request_4618_){
_start:
{
uint8_t v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
v___x_4620_ = 0;
v___x_4621_ = l_Lasm_Fetch_respond(v_handler_4615_, v_request_4618_);
v___x_4622_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4616_, v___x_4620_, v___x_4621_, v___f_4617_);
return v___x_4622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4623_, lean_object* v___x_4624_, lean_object* v___f_4625_, lean_object* v_request_4626_, lean_object* v___y_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4623_, v___x_4624_, v___f_4625_, v_request_4626_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4629_, lean_object* v_x_4630_){
_start:
{
if (lean_obj_tag(v_x_4630_) == 0)
{
lean_object* v_a_4632_; lean_object* v___x_4634_; uint8_t v_isShared_4635_; uint8_t v_isSharedCheck_4640_; 
lean_dec_ref(v___f_4629_);
v_a_4632_ = lean_ctor_get(v_x_4630_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v_x_4630_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4634_ = v_x_4630_;
v_isShared_4635_ = v_isSharedCheck_4640_;
goto v_resetjp_4633_;
}
else
{
lean_inc(v_a_4632_);
lean_dec(v_x_4630_);
v___x_4634_ = lean_box(0);
v_isShared_4635_ = v_isSharedCheck_4640_;
goto v_resetjp_4633_;
}
v_resetjp_4633_:
{
lean_object* v___x_4637_; 
if (v_isShared_4635_ == 0)
{
v___x_4637_ = v___x_4634_;
goto v_reusejp_4636_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4632_);
v___x_4637_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4636_;
}
v_reusejp_4636_:
{
lean_object* v___x_4638_; 
v___x_4638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4637_);
return v___x_4638_;
}
}
}
else
{
lean_object* v_a_4641_; lean_object* v___x_4642_; 
v_a_4641_ = lean_ctor_get(v_x_4630_, 0);
lean_inc(v_a_4641_);
lean_dec_ref_known(v_x_4630_, 1);
v___x_4642_ = lean_apply_2(v___f_4629_, v_a_4641_, lean_box(0));
return v___x_4642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4643_, lean_object* v_x_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4643_, v_x_4644_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v___y_4647_, lean_object* v___x_4648_, lean_object* v___x_4649_, lean_object* v___f_4650_, lean_object* v___x_4651_, uint8_t v___x_4652_, lean_object* v___f_4653_, lean_object* v_x_4654_){
_start:
{
if (lean_obj_tag(v_x_4654_) == 0)
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4664_; 
lean_dec_ref(v___f_4653_);
lean_dec(v___x_4651_);
lean_dec_ref(v___f_4650_);
lean_dec_ref(v___x_4649_);
lean_dec_ref(v___x_4648_);
lean_dec_ref(v___y_4647_);
v_a_4656_ = lean_ctor_get(v_x_4654_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v_x_4654_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4658_ = v_x_4654_;
v_isShared_4659_ = v_isSharedCheck_4664_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v_x_4654_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4664_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
lean_object* v___x_4662_; 
v___x_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4662_, 0, v___x_4661_);
return v___x_4662_;
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4675_; 
v_a_4665_ = lean_ctor_get(v_x_4654_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v_x_4654_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4667_ = v_x_4654_;
v_isShared_4668_ = v_isSharedCheck_4675_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v_x_4654_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4675_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4669_; lean_object* v___x_4671_; 
v___x_4669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4669_, 0, v___y_4647_);
lean_ctor_set(v___x_4669_, 1, v___x_4648_);
lean_ctor_set(v___x_4669_, 2, v___x_4649_);
lean_ctor_set(v___x_4669_, 3, v_a_4665_);
lean_ctor_set(v___x_4669_, 4, v___f_4650_);
if (v_isShared_4668_ == 0)
{
lean_ctor_set(v___x_4667_, 0, v___x_4669_);
v___x_4671_ = v___x_4667_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v___x_4669_);
v___x_4671_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4671_);
v___x_4673_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4651_, v___x_4652_, v___x_4672_, v___f_4653_);
return v___x_4673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v___y_4676_, lean_object* v___x_4677_, lean_object* v___x_4678_, lean_object* v___f_4679_, lean_object* v___x_4680_, lean_object* v___x_4681_, lean_object* v___f_4682_, lean_object* v_x_4683_, lean_object* v___y_4684_){
_start:
{
uint8_t v___x_18715__boxed_4685_; lean_object* v_res_4686_; 
v___x_18715__boxed_4685_ = lean_unbox(v___x_4681_);
v_res_4686_ = l_Lasm_Fetch_serveNode___lam__17(v___y_4676_, v___x_4677_, v___x_4678_, v___f_4679_, v___x_4680_, v___x_18715__boxed_4685_, v___f_4682_, v_x_4683_);
return v_res_4686_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_4687_; uint8_t v___x_4688_; uint64_t v___x_4689_; 
v___x_4687_ = 8ULL;
v___x_4688_ = 0;
v___x_4689_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4688_, v___x_4687_);
return v___x_4689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_4690_, lean_object* v_name_4691_, lean_object* v_args_4692_){
_start:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; uint64_t v___x_4697_; lean_object* v___x_4698_; 
v___x_4694_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4695_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4695_, 0, v_o_4690_);
lean_ctor_set(v___x_4695_, 1, v___x_4694_);
lean_inc_ref(v_name_4691_);
v___x_4696_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4696_, 0, v_name_4691_);
v___x_4697_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_4698_ = l_Lasm_JS_Value_invokeRaw(v___x_4695_, v___x_4696_, v_args_4692_, v___x_4697_);
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_object* v_a_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v_a_4699_ = lean_ctor_get(v___x_4698_, 0);
lean_inc(v_a_4699_);
lean_dec_ref_known(v___x_4698_, 1);
v___x_4700_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4701_ = lean_string_append(v___x_4700_, v_name_4691_);
lean_dec_ref(v_name_4691_);
v___x_4702_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4701_, v_a_4699_);
lean_dec(v_a_4699_);
lean_dec_ref(v___x_4701_);
return v___x_4702_;
}
else
{
lean_dec_ref(v_name_4691_);
return v___x_4698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_4703_, lean_object* v_name_4704_, lean_object* v_args_4705_, lean_object* v_a_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_4703_, v_name_4704_, v_args_4705_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4709_, uint8_t v___x_4710_, lean_object* v___f_4711_, lean_object* v___x_4712_, lean_object* v_a_4713_, lean_object* v_x_4714_){
_start:
{
lean_object* v_val_4717_; 
if (lean_obj_tag(v_x_4714_) == 0)
{
lean_object* v_a_4720_; lean_object* v___x_4722_; uint8_t v_isShared_4723_; uint8_t v_isSharedCheck_4728_; 
lean_dec(v_a_4713_);
lean_dec_ref(v___f_4711_);
lean_dec(v___x_4709_);
v_a_4720_ = lean_ctor_get(v_x_4714_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v_x_4714_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4722_ = v_x_4714_;
v_isShared_4723_ = v_isSharedCheck_4728_;
goto v_resetjp_4721_;
}
else
{
lean_inc(v_a_4720_);
lean_dec(v_x_4714_);
v___x_4722_ = lean_box(0);
v_isShared_4723_ = v_isSharedCheck_4728_;
goto v_resetjp_4721_;
}
v_resetjp_4721_:
{
lean_object* v___x_4725_; 
if (v_isShared_4723_ == 0)
{
v___x_4725_ = v___x_4722_;
goto v_reusejp_4724_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4720_);
v___x_4725_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4724_;
}
v_reusejp_4724_:
{
lean_object* v___x_4726_; 
v___x_4726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4725_);
return v___x_4726_;
}
}
}
else
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4747_; 
v_a_4729_ = lean_ctor_get(v_x_4714_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v_x_4714_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4731_ = v_x_4714_;
v_isShared_4732_ = v_isSharedCheck_4747_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v_x_4714_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4747_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4733_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4734_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4735_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4735_, 0, v_a_4729_);
lean_ctor_set(v___x_4735_, 1, v___x_4734_);
v___x_4736_ = lean_mk_empty_array_with_capacity(v___x_4712_);
v___x_4737_ = lean_array_push(v___x_4736_, v___x_4735_);
v___x_4738_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_4713_, v___x_4733_, v___x_4737_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4741_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4739_);
lean_dec_ref_known(v___x_4738_, 1);
if (v_isShared_4732_ == 0)
{
lean_ctor_set(v___x_4731_, 0, v_a_4739_);
v___x_4741_ = v___x_4731_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4739_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
v_val_4717_ = v___x_4741_;
goto v___jp_4716_;
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; 
v_a_4743_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4738_, 1);
if (v_isShared_4732_ == 0)
{
lean_ctor_set_tag(v___x_4731_, 0);
lean_ctor_set(v___x_4731_, 0, v_a_4743_);
v___x_4745_ = v___x_4731_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_a_4743_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
v_val_4717_ = v___x_4745_;
goto v___jp_4716_;
}
}
}
}
v___jp_4716_:
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4718_, 0, v_val_4717_);
v___x_4719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4709_, v___x_4710_, v___x_4718_, v___f_4711_);
return v___x_4719_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4748_, lean_object* v___x_4749_, lean_object* v___f_4750_, lean_object* v___x_4751_, lean_object* v_a_4752_, lean_object* v_x_4753_, lean_object* v___y_4754_){
_start:
{
uint8_t v___x_18814__boxed_4755_; lean_object* v_res_4756_; 
v___x_18814__boxed_4755_ = lean_unbox(v___x_4749_);
v_res_4756_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4748_, v___x_18814__boxed_4755_, v___f_4750_, v___x_4751_, v_a_4752_, v_x_4753_);
lean_dec(v___x_4751_);
return v_res_4756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4757_, lean_object* v___x_4758_, lean_object* v___x_4759_, lean_object* v___x_4760_, lean_object* v___x_4761_, uint8_t v___x_4762_, lean_object* v___f_4763_, lean_object* v_x_4764_){
_start:
{
if (lean_obj_tag(v_x_4764_) == 0)
{
lean_object* v_a_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4774_; 
lean_dec_ref(v___f_4763_);
lean_dec(v___x_4761_);
lean_dec_ref(v___x_4760_);
lean_dec_ref(v___x_4759_);
lean_dec_ref(v___x_4758_);
lean_dec_ref(v___y_4757_);
v_a_4766_ = lean_ctor_get(v_x_4764_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v_x_4764_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4768_ = v_x_4764_;
v_isShared_4769_ = v_isSharedCheck_4774_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_a_4766_);
lean_dec(v_x_4764_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4774_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4771_; 
if (v_isShared_4769_ == 0)
{
v___x_4771_ = v___x_4768_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v_a_4766_);
v___x_4771_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
lean_object* v___x_4772_; 
v___x_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4771_);
return v___x_4772_;
}
}
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4785_; 
v_a_4775_ = lean_ctor_get(v_x_4764_, 0);
v_isSharedCheck_4785_ = !lean_is_exclusive(v_x_4764_);
if (v_isSharedCheck_4785_ == 0)
{
v___x_4777_ = v_x_4764_;
v_isShared_4778_ = v_isSharedCheck_4785_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v_x_4764_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4785_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4779_; lean_object* v___x_4781_; 
v___x_4779_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4779_, 0, v___y_4757_);
lean_ctor_set(v___x_4779_, 1, v___x_4758_);
lean_ctor_set(v___x_4779_, 2, v___x_4759_);
lean_ctor_set(v___x_4779_, 3, v___x_4760_);
lean_ctor_set(v___x_4779_, 4, v_a_4775_);
if (v_isShared_4778_ == 0)
{
lean_ctor_set(v___x_4777_, 0, v___x_4779_);
v___x_4781_ = v___x_4777_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v___x_4779_);
v___x_4781_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4782_, 0, v___x_4781_);
v___x_4783_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4761_, v___x_4762_, v___x_4782_, v___f_4763_);
return v___x_4783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4786_, lean_object* v___x_4787_, lean_object* v___x_4788_, lean_object* v___x_4789_, lean_object* v___x_4790_, lean_object* v___x_4791_, lean_object* v___f_4792_, lean_object* v_x_4793_, lean_object* v___y_4794_){
_start:
{
uint8_t v___x_18904__boxed_4795_; lean_object* v_res_4796_; 
v___x_18904__boxed_4795_ = lean_unbox(v___x_4791_);
v_res_4796_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4786_, v___x_4787_, v___x_4788_, v___x_4789_, v___x_4790_, v___x_18904__boxed_4795_, v___f_4792_, v_x_4793_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4797_, uint8_t v___x_4798_, lean_object* v___f_4799_, lean_object* v_x_4800_){
_start:
{
lean_object* v_val_4803_; 
if (lean_obj_tag(v_x_4800_) == 0)
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4814_; 
lean_dec_ref(v___f_4799_);
lean_dec(v___x_4797_);
v_a_4806_ = lean_ctor_get(v_x_4800_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_x_4800_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4808_ = v_x_4800_;
v_isShared_4809_ = v_isSharedCheck_4814_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v_x_4800_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4814_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
lean_object* v___x_4812_; 
v___x_4812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4811_);
return v___x_4812_;
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4828_; 
v_a_4815_ = lean_ctor_get(v_x_4800_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v_x_4800_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4817_ = v_x_4800_;
v_isShared_4818_ = v_isSharedCheck_4828_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v_x_4800_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4828_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4819_; 
v___x_4819_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4815_);
if (lean_obj_tag(v___x_4819_) == 0)
{
lean_object* v_a_4820_; lean_object* v___x_4822_; 
v_a_4820_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_a_4820_);
lean_dec_ref_known(v___x_4819_, 1);
if (v_isShared_4818_ == 0)
{
lean_ctor_set(v___x_4817_, 0, v_a_4820_);
v___x_4822_ = v___x_4817_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4820_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
v_val_4803_ = v___x_4822_;
goto v___jp_4802_;
}
}
else
{
lean_object* v_a_4824_; lean_object* v___x_4826_; 
v_a_4824_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_a_4824_);
lean_dec_ref_known(v___x_4819_, 1);
if (v_isShared_4818_ == 0)
{
lean_ctor_set_tag(v___x_4817_, 0);
lean_ctor_set(v___x_4817_, 0, v_a_4824_);
v___x_4826_ = v___x_4817_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4824_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
v_val_4803_ = v___x_4826_;
goto v___jp_4802_;
}
}
}
}
v___jp_4802_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4804_, 0, v_val_4803_);
v___x_4805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4797_, v___x_4798_, v___x_4804_, v___f_4799_);
return v___x_4805_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4829_, lean_object* v___x_4830_, lean_object* v___f_4831_, lean_object* v_x_4832_, lean_object* v___y_4833_){
_start:
{
uint8_t v___x_18967__boxed_4834_; lean_object* v_res_4835_; 
v___x_18967__boxed_4834_ = lean_unbox(v___x_4830_);
v_res_4835_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4829_, v___x_18967__boxed_4834_, v___f_4831_, v_x_4832_);
return v_res_4835_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_4838_, size_t v_i_4839_, size_t v_stop_4840_){
_start:
{
uint8_t v___x_4841_; 
v___x_4841_ = lean_usize_dec_eq(v_i_4839_, v_stop_4840_);
if (v___x_4841_ == 0)
{
lean_object* v___x_4842_; lean_object* v_fst_4843_; uint8_t v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; uint8_t v___x_4847_; 
v___x_4842_ = lean_array_uget_borrowed(v_as_4838_, v_i_4839_);
v_fst_4843_ = lean_ctor_get(v___x_4842_, 0);
v___x_4844_ = 1;
lean_inc(v_fst_4843_);
v___x_4845_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4843_);
v___x_4846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_4847_ = lean_string_dec_eq(v___x_4845_, v___x_4846_);
if (v___x_4847_ == 0)
{
lean_object* v___x_4848_; uint8_t v___x_4849_; 
v___x_4848_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_4849_ = lean_string_dec_eq(v___x_4845_, v___x_4848_);
lean_dec_ref(v___x_4845_);
if (v___x_4849_ == 0)
{
size_t v___x_4850_; size_t v___x_4851_; 
v___x_4850_ = ((size_t)1ULL);
v___x_4851_ = lean_usize_add(v_i_4839_, v___x_4850_);
v_i_4839_ = v___x_4851_;
goto _start;
}
else
{
return v___x_4844_;
}
}
else
{
lean_dec_ref(v___x_4845_);
return v___x_4844_;
}
}
else
{
uint8_t v___x_4853_; 
v___x_4853_ = 0;
return v___x_4853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_4854_, lean_object* v_i_4855_, lean_object* v_stop_4856_){
_start:
{
size_t v_i_boxed_4857_; size_t v_stop_boxed_4858_; uint8_t v_res_4859_; lean_object* v_r_4860_; 
v_i_boxed_4857_ = lean_unbox_usize(v_i_4855_);
lean_dec(v_i_4855_);
v_stop_boxed_4858_ = lean_unbox_usize(v_stop_4856_);
lean_dec(v_stop_4856_);
v_res_4859_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_4854_, v_i_boxed_4857_, v_stop_boxed_4858_);
lean_dec_ref(v_as_4854_);
v_r_4860_ = lean_box(v_res_4859_);
return v_r_4860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4861_, lean_object* v_range_4862_, lean_object* v_b_4863_, lean_object* v_i_4864_){
_start:
{
lean_object* v_stop_4865_; lean_object* v_step_4866_; uint8_t v___x_4867_; 
v_stop_4865_ = lean_ctor_get(v_range_4862_, 1);
v_step_4866_ = lean_ctor_get(v_range_4862_, 2);
v___x_4867_ = lean_nat_dec_lt(v_i_4864_, v_stop_4865_);
if (v___x_4867_ == 0)
{
lean_dec(v_i_4864_);
return v_b_4863_;
}
else
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; 
v___x_4868_ = lean_unsigned_to_nat(2u);
v___x_4869_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4870_ = lean_unsigned_to_nat(1u);
v___x_4871_ = lean_nat_mul(v___x_4868_, v_i_4864_);
v___x_4872_ = lean_array_get_borrowed(v___x_4869_, v___y_4861_, v___x_4871_);
v___x_4873_ = lean_nat_add(v___x_4871_, v___x_4870_);
lean_dec(v___x_4871_);
v___x_4874_ = lean_array_get_borrowed(v___x_4869_, v___y_4861_, v___x_4873_);
lean_dec(v___x_4873_);
lean_inc(v___x_4874_);
lean_inc(v___x_4872_);
v___x_4875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4872_);
lean_ctor_set(v___x_4875_, 1, v___x_4874_);
v___x_4876_ = lean_array_push(v_b_4863_, v___x_4875_);
v___x_4877_ = lean_nat_add(v_i_4864_, v_step_4866_);
lean_dec(v_i_4864_);
v_b_4863_ = v___x_4876_;
v_i_4864_ = v___x_4877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4879_, lean_object* v_range_4880_, lean_object* v_b_4881_, lean_object* v_i_4882_){
_start:
{
lean_object* v_res_4883_; 
v_res_4883_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4879_, v_range_4880_, v_b_4881_, v_i_4882_);
lean_dec_ref(v_range_4880_);
lean_dec_ref(v___y_4879_);
return v_res_4883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4884_, size_t v_i_4885_, size_t v_stop_4886_, lean_object* v_b_4887_){
_start:
{
lean_object* v___y_4889_; uint8_t v___x_4893_; 
v___x_4893_ = lean_usize_dec_eq(v_i_4885_, v_stop_4886_);
if (v___x_4893_ == 0)
{
lean_object* v___x_4894_; 
v___x_4894_ = lean_array_uget_borrowed(v_as_4884_, v_i_4885_);
if (lean_obj_tag(v___x_4894_) == 4)
{
lean_object* v_s_4895_; lean_object* v___x_4896_; 
v_s_4895_ = lean_ctor_get(v___x_4894_, 0);
lean_inc_ref(v_s_4895_);
v___x_4896_ = lean_array_push(v_b_4887_, v_s_4895_);
v___y_4889_ = v___x_4896_;
goto v___jp_4888_;
}
else
{
v___y_4889_ = v_b_4887_;
goto v___jp_4888_;
}
}
else
{
return v_b_4887_;
}
v___jp_4888_:
{
size_t v___x_4890_; size_t v___x_4891_; 
v___x_4890_ = ((size_t)1ULL);
v___x_4891_ = lean_usize_add(v_i_4885_, v___x_4890_);
v_i_4885_ = v___x_4891_;
v_b_4887_ = v___y_4889_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4897_, lean_object* v_i_4898_, lean_object* v_stop_4899_, lean_object* v_b_4900_){
_start:
{
size_t v_i_boxed_4901_; size_t v_stop_boxed_4902_; lean_object* v_res_4903_; 
v_i_boxed_4901_ = lean_unbox_usize(v_i_4898_);
lean_dec(v_i_4898_);
v_stop_boxed_4902_ = lean_unbox_usize(v_stop_4899_);
lean_dec(v_stop_4899_);
v_res_4903_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4897_, v_i_boxed_4901_, v_stop_boxed_4902_, v_b_4900_);
lean_dec_ref(v_as_4897_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4904_, lean_object* v_start_4905_, lean_object* v_stop_4906_){
_start:
{
lean_object* v___x_4907_; uint8_t v___x_4908_; 
v___x_4907_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4908_ = lean_nat_dec_lt(v_start_4905_, v_stop_4906_);
if (v___x_4908_ == 0)
{
return v___x_4907_;
}
else
{
lean_object* v___x_4909_; uint8_t v___x_4910_; 
v___x_4909_ = lean_array_get_size(v_as_4904_);
v___x_4910_ = lean_nat_dec_le(v_stop_4906_, v___x_4909_);
if (v___x_4910_ == 0)
{
uint8_t v___x_4911_; 
v___x_4911_ = lean_nat_dec_lt(v_start_4905_, v___x_4909_);
if (v___x_4911_ == 0)
{
return v___x_4907_;
}
else
{
size_t v___x_4912_; size_t v___x_4913_; lean_object* v___x_4914_; 
v___x_4912_ = lean_usize_of_nat(v_start_4905_);
v___x_4913_ = lean_usize_of_nat(v___x_4909_);
v___x_4914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4904_, v___x_4912_, v___x_4913_, v___x_4907_);
return v___x_4914_;
}
}
else
{
size_t v___x_4915_; size_t v___x_4916_; lean_object* v___x_4917_; 
v___x_4915_ = lean_usize_of_nat(v_start_4905_);
v___x_4916_ = lean_usize_of_nat(v_stop_4906_);
v___x_4917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4904_, v___x_4915_, v___x_4916_, v___x_4907_);
return v___x_4917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4918_, lean_object* v_start_4919_, lean_object* v_stop_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4918_, v_start_4919_, v_stop_4920_);
lean_dec(v_stop_4920_);
lean_dec(v_start_4919_);
lean_dec_ref(v_as_4918_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4923_, size_t v_sz_4924_, size_t v_i_4925_, lean_object* v_b_4926_){
_start:
{
uint8_t v___x_4927_; 
v___x_4927_ = lean_usize_dec_lt(v_i_4925_, v_sz_4924_);
if (v___x_4927_ == 0)
{
lean_inc_ref(v_b_4926_);
return v_b_4926_;
}
else
{
lean_object* v_a_4928_; lean_object* v_fst_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; uint8_t v___x_4933_; 
v_a_4928_ = lean_array_uget_borrowed(v_as_4923_, v_i_4925_);
v_fst_4929_ = lean_ctor_get(v_a_4928_, 0);
v___x_4930_ = lean_box(0);
lean_inc(v_fst_4929_);
v___x_4931_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4929_);
v___x_4932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4933_ = lean_string_dec_eq(v___x_4931_, v___x_4932_);
lean_dec_ref(v___x_4931_);
if (v___x_4933_ == 0)
{
lean_object* v___x_4934_; size_t v___x_4935_; size_t v___x_4936_; 
v___x_4934_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4935_ = ((size_t)1ULL);
v___x_4936_ = lean_usize_add(v_i_4925_, v___x_4935_);
v_i_4925_ = v___x_4936_;
v_b_4926_ = v___x_4934_;
goto _start;
}
else
{
lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
lean_inc(v_a_4928_);
v___x_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4938_, 0, v_a_4928_);
v___x_4939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4938_);
v___x_4940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4939_);
lean_ctor_set(v___x_4940_, 1, v___x_4930_);
return v___x_4940_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4941_, lean_object* v_sz_4942_, lean_object* v_i_4943_, lean_object* v_b_4944_){
_start:
{
size_t v_sz_boxed_4945_; size_t v_i_boxed_4946_; lean_object* v_res_4947_; 
v_sz_boxed_4945_ = lean_unbox_usize(v_sz_4942_);
lean_dec(v_sz_4942_);
v_i_boxed_4946_ = lean_unbox_usize(v_i_4943_);
lean_dec(v_i_4943_);
v_res_4947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4941_, v_sz_boxed_4945_, v_i_boxed_4946_, v_b_4944_);
lean_dec_ref(v_b_4944_);
lean_dec_ref(v_as_4941_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4950_, lean_object* v_snd_4951_, lean_object* v___f_4952_, lean_object* v___f_4953_, lean_object* v_handler_4954_, lean_object* v_options_4955_, lean_object* v_a_4956_, lean_object* v_fst_4957_, lean_object* v_a_4958_, lean_object* v___x_4959_, lean_object* v___x_4960_, lean_object* v___x_4961_, lean_object* v_x_4962_){
_start:
{
lean_object* v___y_4965_; lean_object* v___y_4966_; lean_object* v___y_4967_; lean_object* v___y_4968_; lean_object* v___y_4969_; lean_object* v___y_4970_; uint8_t v___y_4971_; lean_object* v___y_4980_; uint8_t v___y_4981_; lean_object* v___y_4982_; lean_object* v_val_4983_; lean_object* v___y_4987_; lean_object* v___y_4988_; lean_object* v___y_4989_; lean_object* v___y_4990_; lean_object* v___y_4991_; lean_object* v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_4996_; lean_object* v___y_4997_; lean_object* v___y_4998_; lean_object* v___y_4999_; lean_object* v___y_5000_; lean_object* v___y_5048_; lean_object* v___y_5049_; lean_object* v___y_5050_; lean_object* v___y_5051_; lean_object* v___y_5052_; lean_object* v___y_5053_; lean_object* v___y_5054_; lean_object* v___y_5055_; lean_object* v___y_5056_; lean_object* v___y_5057_; lean_object* v___y_5058_; lean_object* v___y_5059_; lean_object* v___y_5060_; lean_object* v___y_5063_; lean_object* v___y_5064_; lean_object* v___y_5065_; lean_object* v___y_5066_; 
if (lean_obj_tag(v_x_4962_) == 0)
{
lean_object* v_a_5092_; lean_object* v___x_5094_; uint8_t v_isShared_5095_; uint8_t v_isSharedCheck_5100_; 
lean_dec(v_a_4958_);
lean_dec(v_fst_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_options_4955_);
lean_dec_ref(v_handler_4954_);
lean_dec_ref(v___f_4953_);
lean_dec_ref(v___f_4952_);
lean_dec(v_snd_4951_);
lean_dec(v___y_4950_);
v_a_5092_ = lean_ctor_get(v_x_4962_, 0);
v_isSharedCheck_5100_ = !lean_is_exclusive(v_x_4962_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5094_ = v_x_4962_;
v_isShared_5095_ = v_isSharedCheck_5100_;
goto v_resetjp_5093_;
}
else
{
lean_inc(v_a_5092_);
lean_dec(v_x_4962_);
v___x_5094_ = lean_box(0);
v_isShared_5095_ = v_isSharedCheck_5100_;
goto v_resetjp_5093_;
}
v_resetjp_5093_:
{
lean_object* v___x_5097_; 
if (v_isShared_5095_ == 0)
{
v___x_5097_ = v___x_5094_;
goto v_reusejp_5096_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v_a_5092_);
v___x_5097_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5096_;
}
v_reusejp_5096_:
{
lean_object* v___x_5098_; 
v___x_5098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5097_);
return v___x_5098_;
}
}
}
else
{
lean_object* v_a_5101_; lean_object* v___y_5103_; lean_object* v___y_5104_; lean_object* v___y_5112_; lean_object* v___x_5116_; 
v_a_5101_ = lean_ctor_get(v_x_4962_, 0);
lean_inc(v_a_5101_);
lean_dec_ref_known(v_x_4962_, 1);
v___x_5116_ = l_Lasm_JS_Data_field(v_a_5101_, v___x_4961_);
if (lean_obj_tag(v___x_5116_) == 4)
{
lean_object* v_s_5117_; 
v_s_5117_ = lean_ctor_get(v___x_5116_, 0);
lean_inc_ref(v_s_5117_);
lean_dec_ref_known(v___x_5116_, 1);
v___y_5112_ = v_s_5117_;
goto v___jp_5111_;
}
else
{
lean_object* v___x_5118_; 
lean_dec(v___x_5116_);
v___x_5118_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_5112_ = v___x_5118_;
goto v___jp_5111_;
}
v___jp_5102_:
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lasm_JS_Data_field(v_a_5101_, v___x_4959_);
lean_dec(v_a_5101_);
if (lean_obj_tag(v___x_5105_) == 7)
{
lean_object* v_items_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v_items_5106_ = lean_ctor_get(v___x_5105_, 0);
lean_inc_ref(v_items_5106_);
lean_dec_ref_known(v___x_5105_, 1);
v___x_5107_ = lean_unsigned_to_nat(0u);
v___x_5108_ = lean_array_get_size(v_items_5106_);
v___x_5109_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_5106_, v___x_5107_, v___x_5108_);
lean_dec_ref(v_items_5106_);
lean_inc_ref(v___y_5103_);
v___y_5063_ = v___y_5103_;
v___y_5064_ = v___y_5103_;
v___y_5065_ = v___y_5104_;
v___y_5066_ = v___x_5109_;
goto v___jp_5062_;
}
else
{
lean_object* v___x_5110_; 
lean_dec(v___x_5105_);
v___x_5110_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_5103_);
v___y_5063_ = v___y_5103_;
v___y_5064_ = v___y_5103_;
v___y_5065_ = v___y_5104_;
v___y_5066_ = v___x_5110_;
goto v___jp_5062_;
}
}
v___jp_5111_:
{
lean_object* v___x_5113_; 
v___x_5113_ = l_Lasm_JS_Data_field(v_a_5101_, v___x_4960_);
if (lean_obj_tag(v___x_5113_) == 4)
{
lean_object* v_s_5114_; 
v_s_5114_ = lean_ctor_get(v___x_5113_, 0);
lean_inc_ref(v_s_5114_);
lean_dec_ref_known(v___x_5113_, 1);
v___y_5103_ = v___y_5112_;
v___y_5104_ = v_s_5114_;
goto v___jp_5102_;
}
else
{
lean_object* v___x_5115_; 
lean_dec(v___x_5113_);
v___x_5115_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_5103_ = v___y_5112_;
v___y_5104_ = v___x_5115_;
goto v___jp_5102_;
}
}
}
v___jp_4964_:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___f_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4972_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4970_, v___y_4967_, v___y_4950_);
lean_dec_ref(v___y_4970_);
v___x_4973_ = l_ByteArray_empty;
v___f_4974_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4975_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4975_, 0, v___y_4965_);
lean_ctor_set(v___x_4975_, 1, v___x_4972_);
lean_ctor_set(v___x_4975_, 2, v___y_4969_);
lean_ctor_set(v___x_4975_, 3, v___x_4973_);
lean_ctor_set(v___x_4975_, 4, v___f_4974_);
v___x_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4975_);
v___x_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
v___x_4978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4968_, v___y_4971_, v___x_4977_, v___y_4966_);
return v___x_4978_;
}
v___jp_4979_:
{
lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4984_, 0, v_val_4983_);
v___x_4985_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4980_, v___y_4981_, v___x_4984_, v___y_4982_);
return v___x_4985_;
}
v___jp_4986_:
{
lean_object* v___x_5001_; uint8_t v___x_5002_; 
v___x_5001_ = lean_array_get_size(v___y_4998_);
v___x_5002_ = lean_nat_dec_lt(v___y_4996_, v___x_5001_);
if (v___x_5002_ == 0)
{
lean_dec_ref(v___y_4997_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec(v_a_4958_);
lean_dec(v_fst_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_options_4955_);
v___y_4965_ = v___y_4994_;
v___y_4966_ = v___y_4995_;
v___y_4967_ = v___y_5000_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___x_5002_;
goto v___jp_4964_;
}
else
{
if (v___x_5002_ == 0)
{
lean_dec_ref(v___y_4997_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec(v_a_4958_);
lean_dec(v_fst_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_options_4955_);
v___y_4965_ = v___y_4994_;
v___y_4966_ = v___y_4995_;
v___y_4967_ = v___y_5000_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___x_5002_;
goto v___jp_4964_;
}
else
{
size_t v___x_5003_; size_t v___x_5004_; uint8_t v___x_5005_; 
v___x_5003_ = ((size_t)0ULL);
v___x_5004_ = lean_usize_of_nat(v___x_5001_);
v___x_5005_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_4998_, v___x_5003_, v___x_5004_);
if (v___x_5005_ == 0)
{
lean_dec_ref(v___y_4997_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec(v_a_4958_);
lean_dec(v_fst_4957_);
lean_dec(v_a_4956_);
lean_dec_ref(v_options_4955_);
v___y_4965_ = v___y_4994_;
v___y_4966_ = v___y_4995_;
v___y_4967_ = v___y_5000_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___x_5005_;
goto v___jp_4964_;
}
else
{
lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___f_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; uint8_t v___x_5012_; 
lean_dec_ref(v___y_4998_);
lean_dec_ref(v___y_4995_);
v___x_5006_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4999_, v___y_5000_, v___y_4950_);
lean_dec_ref(v___y_4999_);
v___x_5007_ = l_ByteArray_empty;
v___f_5008_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_5006_);
v___x_5009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5009_, 0, v___y_4994_);
lean_ctor_set(v___x_5009_, 1, v___x_5006_);
lean_ctor_set(v___x_5009_, 2, v___y_4997_);
lean_ctor_set(v___x_5009_, 3, v___x_5007_);
lean_ctor_set(v___x_5009_, 4, v___f_5008_);
v___x_5010_ = l_Lasm_Fetch_Request_path(v___x_5009_);
v___x_5011_ = lean_apply_1(v_options_4955_, v___x_5010_);
v___x_5012_ = lean_unbox(v___x_5011_);
if (v___x_5012_ == 0)
{
lean_object* v___f_5013_; lean_object* v___f_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; uint8_t v___x_5018_; lean_object* v___x_5019_; 
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4988_);
lean_dec(v_a_4958_);
lean_inc(v___y_4987_);
v___f_5013_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 9, 7);
lean_closure_set(v___f_5013_, 0, v___y_4990_);
lean_closure_set(v___f_5013_, 1, v___x_5006_);
lean_closure_set(v___f_5013_, 2, v___y_4992_);
lean_closure_set(v___f_5013_, 3, v___f_5008_);
lean_closure_set(v___f_5013_, 4, v___y_4987_);
lean_closure_set(v___f_5013_, 5, v___x_5011_);
lean_closure_set(v___f_5013_, 6, v___y_4991_);
v___f_5014_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_5014_, 0, v___y_4987_);
lean_closure_set(v___f_5014_, 1, v___x_5011_);
lean_closure_set(v___f_5014_, 2, v___f_5013_);
lean_closure_set(v___f_5014_, 3, v___y_4989_);
lean_closure_set(v___f_5014_, 4, v_a_4956_);
v___x_5015_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__0));
v___x_5016_ = lean_mk_empty_array_with_capacity(v___y_4996_);
v___x_5017_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4957_, v___x_5015_, v___x_5016_);
v___x_5018_ = lean_unbox(v___x_5011_);
v___x_5019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4996_, v___x_5018_, v___x_5017_, v___f_5014_);
return v___x_5019_;
}
else
{
uint8_t v___x_5020_; lean_object* v___x_5021_; lean_object* v___f_5022_; lean_object* v___x_5023_; lean_object* v___f_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; 
lean_dec_ref(v___y_4991_);
lean_dec(v___y_4989_);
lean_dec(v_a_4956_);
v___x_5020_ = 0;
v___x_5021_ = lean_box(v___x_5020_);
lean_inc(v___y_4987_);
v___f_5022_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_5022_, 0, v___y_4990_);
lean_closure_set(v___f_5022_, 1, v___x_5006_);
lean_closure_set(v___f_5022_, 2, v___y_4992_);
lean_closure_set(v___f_5022_, 3, v___x_5007_);
lean_closure_set(v___f_5022_, 4, v___y_4987_);
lean_closure_set(v___f_5022_, 5, v___x_5021_);
lean_closure_set(v___f_5022_, 6, v___y_4988_);
v___x_5023_ = lean_box(v___x_5020_);
v___f_5024_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_5024_, 0, v___y_4987_);
lean_closure_set(v___f_5024_, 1, v___x_5023_);
lean_closure_set(v___f_5024_, 2, v___f_5022_);
v___x_5025_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__1));
v___x_5026_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5027_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5027_, 0, v_fst_4957_);
lean_ctor_set(v___x_5027_, 1, v___x_5026_);
v___x_5028_ = lean_mk_empty_array_with_capacity(v___y_4993_);
lean_dec(v___y_4993_);
v___x_5029_ = lean_array_push(v___x_5028_, v___x_5027_);
v___x_5030_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4958_, v___x_5025_, v___x_5029_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5038_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5038_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5038_ == 0)
{
v___x_5033_ = v___x_5030_;
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v___x_5030_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
lean_ctor_set_tag(v___x_5033_, 1);
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
v___y_4980_ = v___y_4996_;
v___y_4981_ = v___x_5020_;
v___y_4982_ = v___f_5024_;
v_val_4983_ = v___x_5036_;
goto v___jp_4979_;
}
}
}
else
{
lean_object* v_a_5039_; lean_object* v___x_5041_; uint8_t v_isShared_5042_; uint8_t v_isSharedCheck_5046_; 
v_a_5039_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5046_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5046_ == 0)
{
v___x_5041_ = v___x_5030_;
v_isShared_5042_ = v_isSharedCheck_5046_;
goto v_resetjp_5040_;
}
else
{
lean_inc(v_a_5039_);
lean_dec(v___x_5030_);
v___x_5041_ = lean_box(0);
v_isShared_5042_ = v_isSharedCheck_5046_;
goto v_resetjp_5040_;
}
v_resetjp_5040_:
{
lean_object* v___x_5044_; 
if (v_isShared_5042_ == 0)
{
lean_ctor_set_tag(v___x_5041_, 0);
v___x_5044_ = v___x_5041_;
goto v_reusejp_5043_;
}
else
{
lean_object* v_reuseFailAlloc_5045_; 
v_reuseFailAlloc_5045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5045_, 0, v_a_5039_);
v___x_5044_ = v_reuseFailAlloc_5045_;
goto v_reusejp_5043_;
}
v_reusejp_5043_:
{
v___y_4980_ = v___y_4996_;
v___y_4981_ = v___x_5020_;
v___y_4982_ = v___f_5024_;
v_val_4983_ = v___x_5044_;
goto v___jp_4979_;
}
}
}
}
}
}
}
}
v___jp_5047_:
{
lean_object* v___x_5061_; 
v___x_5061_ = lean_box(0);
v___y_4987_ = v___y_5048_;
v___y_4988_ = v___y_5050_;
v___y_4989_ = v___y_5049_;
v___y_4990_ = v___y_5052_;
v___y_4991_ = v___y_5054_;
v___y_4992_ = v___y_5053_;
v___y_4993_ = v___y_5055_;
v___y_4994_ = v___y_5056_;
v___y_4995_ = v___y_5051_;
v___y_4996_ = v___y_5057_;
v___y_4997_ = v___y_5058_;
v___y_4998_ = v___y_5059_;
v___y_4999_ = v___y_5060_;
v___y_5000_ = v___x_5061_;
goto v___jp_4986_;
}
v___jp_5062_:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; size_t v_sz_5075_; size_t v___x_5076_; lean_object* v___x_5077_; lean_object* v_fst_5078_; lean_object* v___f_5079_; lean_object* v___f_5080_; lean_object* v___f_5081_; 
v___x_5067_ = lean_unsigned_to_nat(0u);
v___x_5068_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_5069_ = lean_array_get_size(v___y_5066_);
v___x_5070_ = lean_unsigned_to_nat(1u);
v___x_5071_ = lean_nat_shiftr(v___x_5069_, v___x_5070_);
v___x_5072_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5072_, 0, v___x_5067_);
lean_ctor_set(v___x_5072_, 1, v___x_5071_);
lean_ctor_set(v___x_5072_, 2, v___x_5070_);
v___x_5073_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5066_, v___x_5072_, v___x_5068_, v___x_5067_);
lean_dec_ref_known(v___x_5072_, 3);
lean_dec_ref(v___y_5066_);
v___x_5074_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5075_ = lean_array_size(v___x_5073_);
v___x_5076_ = ((size_t)0ULL);
v___x_5077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_5073_, v_sz_5075_, v___x_5076_, v___x_5074_);
v_fst_5078_ = lean_ctor_get(v___x_5077_, 0);
lean_inc(v_fst_5078_);
lean_dec_ref(v___x_5077_);
lean_inc_ref(v___y_5063_);
v___f_5079_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_5079_, 0, v___x_5067_);
lean_closure_set(v___f_5079_, 1, v_snd_4951_);
lean_closure_set(v___f_5079_, 2, v___y_5063_);
lean_closure_set(v___f_5079_, 3, v___f_4952_);
lean_closure_set(v___f_5079_, 4, v___f_4953_);
v___f_5080_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_5080_, 0, v_handler_4954_);
lean_closure_set(v___f_5080_, 1, v___x_5067_);
lean_closure_set(v___f_5080_, 2, v___f_5079_);
v___f_5081_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_5081_, 0, v___f_5080_);
if (lean_obj_tag(v_fst_5078_) == 0)
{
lean_inc_ref(v___x_5073_);
lean_inc_ref_n(v___f_5081_, 2);
v___y_5048_ = v___x_5067_;
v___y_5049_ = v___x_5070_;
v___y_5050_ = v___f_5081_;
v___y_5051_ = v___f_5081_;
v___y_5052_ = v___y_5063_;
v___y_5053_ = v___x_5073_;
v___y_5054_ = v___f_5081_;
v___y_5055_ = v___x_5070_;
v___y_5056_ = v___y_5064_;
v___y_5057_ = v___x_5067_;
v___y_5058_ = v___x_5068_;
v___y_5059_ = v___x_5073_;
v___y_5060_ = v___y_5065_;
goto v___jp_5047_;
}
else
{
lean_object* v_val_5082_; 
v_val_5082_ = lean_ctor_get(v_fst_5078_, 0);
lean_inc(v_val_5082_);
lean_dec_ref_known(v_fst_5078_, 1);
if (lean_obj_tag(v_val_5082_) == 0)
{
lean_inc_ref(v___x_5073_);
lean_inc_ref_n(v___f_5081_, 2);
v___y_5048_ = v___x_5067_;
v___y_5049_ = v___x_5070_;
v___y_5050_ = v___f_5081_;
v___y_5051_ = v___f_5081_;
v___y_5052_ = v___y_5063_;
v___y_5053_ = v___x_5073_;
v___y_5054_ = v___f_5081_;
v___y_5055_ = v___x_5070_;
v___y_5056_ = v___y_5064_;
v___y_5057_ = v___x_5067_;
v___y_5058_ = v___x_5068_;
v___y_5059_ = v___x_5073_;
v___y_5060_ = v___y_5065_;
goto v___jp_5047_;
}
else
{
lean_object* v_val_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5091_; 
v_val_5083_ = lean_ctor_get(v_val_5082_, 0);
v_isSharedCheck_5091_ = !lean_is_exclusive(v_val_5082_);
if (v_isSharedCheck_5091_ == 0)
{
v___x_5085_ = v_val_5082_;
v_isShared_5086_ = v_isSharedCheck_5091_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_val_5083_);
lean_dec(v_val_5082_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5091_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v_snd_5087_; lean_object* v___x_5089_; 
v_snd_5087_ = lean_ctor_get(v_val_5083_, 1);
lean_inc(v_snd_5087_);
lean_dec(v_val_5083_);
if (v_isShared_5086_ == 0)
{
lean_ctor_set(v___x_5085_, 0, v_snd_5087_);
v___x_5089_ = v___x_5085_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v_snd_5087_);
v___x_5089_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
lean_inc_ref(v___x_5073_);
lean_inc_ref_n(v___f_5081_, 2);
v___y_4987_ = v___x_5067_;
v___y_4988_ = v___f_5081_;
v___y_4989_ = v___x_5070_;
v___y_4990_ = v___y_5063_;
v___y_4991_ = v___f_5081_;
v___y_4992_ = v___x_5073_;
v___y_4993_ = v___x_5070_;
v___y_4994_ = v___y_5064_;
v___y_4995_ = v___f_5081_;
v___y_4996_ = v___x_5067_;
v___y_4997_ = v___x_5068_;
v___y_4998_ = v___x_5073_;
v___y_4999_ = v___y_5065_;
v___y_5000_ = v___x_5089_;
goto v___jp_4986_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_5119_, lean_object* v_snd_5120_, lean_object* v___f_5121_, lean_object* v___f_5122_, lean_object* v_handler_5123_, lean_object* v_options_5124_, lean_object* v_a_5125_, lean_object* v_fst_5126_, lean_object* v_a_5127_, lean_object* v___x_5128_, lean_object* v___x_5129_, lean_object* v___x_5130_, lean_object* v_x_5131_, lean_object* v___y_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lasm_Fetch_serveNode___lam__18(v___y_5119_, v_snd_5120_, v___f_5121_, v___f_5122_, v_handler_5123_, v_options_5124_, v_a_5125_, v_fst_5126_, v_a_5127_, v___x_5128_, v___x_5129_, v___x_5130_, v_x_5131_);
lean_dec_ref(v___x_5130_);
lean_dec_ref(v___x_5129_);
lean_dec_ref(v___x_5128_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___y_5143_, lean_object* v___f_5144_, lean_object* v___f_5145_, lean_object* v_handler_5146_, lean_object* v_options_5147_, lean_object* v_a_5148_, lean_object* v_a_5149_, lean_object* v_____x_5150_){
_start:
{
lean_object* v_fst_5152_; lean_object* v_snd_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___f_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; uint8_t v___x_5160_; lean_object* v_val_5162_; lean_object* v___x_5165_; 
v_fst_5152_ = lean_ctor_get(v_____x_5150_, 0);
lean_inc_n(v_fst_5152_, 2);
v_snd_5153_ = lean_ctor_get(v_____x_5150_, 1);
lean_inc(v_snd_5153_);
lean_dec_ref(v_____x_5150_);
v___x_5154_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5155_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_5156_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_5157_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 14, 12);
lean_closure_set(v___f_5157_, 0, v___y_5143_);
lean_closure_set(v___f_5157_, 1, v_snd_5153_);
lean_closure_set(v___f_5157_, 2, v___f_5144_);
lean_closure_set(v___f_5157_, 3, v___f_5145_);
lean_closure_set(v___f_5157_, 4, v_handler_5146_);
lean_closure_set(v___f_5157_, 5, v_options_5147_);
lean_closure_set(v___f_5157_, 6, v_a_5148_);
lean_closure_set(v___f_5157_, 7, v_fst_5152_);
lean_closure_set(v___f_5157_, 8, v_a_5149_);
lean_closure_set(v___f_5157_, 9, v___x_5156_);
lean_closure_set(v___f_5157_, 10, v___x_5155_);
lean_closure_set(v___f_5157_, 11, v___x_5154_);
v___x_5158_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_5159_ = lean_unsigned_to_nat(0u);
v___x_5160_ = 0;
v___x_5165_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_5152_, v___x_5158_);
if (lean_obj_tag(v___x_5165_) == 0)
{
lean_object* v_a_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5173_; 
v_a_5166_ = lean_ctor_get(v___x_5165_, 0);
v_isSharedCheck_5173_ = !lean_is_exclusive(v___x_5165_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5168_ = v___x_5165_;
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_a_5166_);
lean_dec(v___x_5165_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
lean_object* v___x_5171_; 
if (v_isShared_5169_ == 0)
{
lean_ctor_set_tag(v___x_5168_, 1);
v___x_5171_ = v___x_5168_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_a_5166_);
v___x_5171_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
v_val_5162_ = v___x_5171_;
goto v___jp_5161_;
}
}
}
else
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5181_; 
v_a_5174_ = lean_ctor_get(v___x_5165_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5165_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5176_ = v___x_5165_;
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5165_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5179_; 
if (v_isShared_5177_ == 0)
{
lean_ctor_set_tag(v___x_5176_, 0);
v___x_5179_ = v___x_5176_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v_a_5174_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
v_val_5162_ = v___x_5179_;
goto v___jp_5161_;
}
}
}
v___jp_5161_:
{
lean_object* v___x_5163_; lean_object* v___x_5164_; 
v___x_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5163_, 0, v_val_5162_);
v___x_5164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5159_, v___x_5160_, v___x_5163_, v___f_5157_);
return v___x_5164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___y_5182_, lean_object* v___f_5183_, lean_object* v___f_5184_, lean_object* v_handler_5185_, lean_object* v_options_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_____x_5189_, lean_object* v___y_5190_){
_start:
{
lean_object* v_res_5191_; 
v_res_5191_ = l_Lasm_Fetch_serveNode___lam__19(v___y_5182_, v___f_5183_, v___f_5184_, v_handler_5185_, v_options_5186_, v_a_5187_, v_a_5188_, v_____x_5189_);
return v_res_5191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_5192_, lean_object* v_x_5193_){
_start:
{
if (lean_obj_tag(v_x_5193_) == 0)
{
lean_object* v_a_5195_; lean_object* v___x_5197_; uint8_t v_isShared_5198_; uint8_t v_isSharedCheck_5203_; 
lean_dec_ref(v___f_5192_);
v_a_5195_ = lean_ctor_get(v_x_5193_, 0);
v_isSharedCheck_5203_ = !lean_is_exclusive(v_x_5193_);
if (v_isSharedCheck_5203_ == 0)
{
v___x_5197_ = v_x_5193_;
v_isShared_5198_ = v_isSharedCheck_5203_;
goto v_resetjp_5196_;
}
else
{
lean_inc(v_a_5195_);
lean_dec(v_x_5193_);
v___x_5197_ = lean_box(0);
v_isShared_5198_ = v_isSharedCheck_5203_;
goto v_resetjp_5196_;
}
v_resetjp_5196_:
{
lean_object* v___x_5200_; 
if (v_isShared_5198_ == 0)
{
v___x_5200_ = v___x_5197_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v_a_5195_);
v___x_5200_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
lean_object* v___x_5201_; 
v___x_5201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5201_, 0, v___x_5200_);
return v___x_5201_;
}
}
}
else
{
lean_object* v_a_5204_; lean_object* v___x_5205_; 
v_a_5204_ = lean_ctor_get(v_x_5193_, 0);
lean_inc(v_a_5204_);
lean_dec_ref_known(v_x_5193_, 1);
v___x_5205_ = lean_apply_2(v___f_5192_, v_a_5204_, lean_box(0));
return v___x_5205_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_5206_, lean_object* v_x_5207_, lean_object* v___y_5208_){
_start:
{
lean_object* v_res_5209_; 
v_res_5209_ = l_Lasm_Fetch_serveNode___lam__20(v___f_5206_, v_x_5207_);
return v_res_5209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_5217_, lean_object* v___f_5218_, lean_object* v_args_5219_){
_start:
{
lean_object* v___x_5226_; lean_object* v___x_5227_; uint8_t v___x_5228_; 
v___x_5226_ = lean_unsigned_to_nat(0u);
v___x_5227_ = lean_array_get_size(v_args_5219_);
v___x_5228_ = lean_nat_dec_lt(v___x_5226_, v___x_5227_);
if (v___x_5228_ == 0)
{
lean_dec_ref(v___f_5218_);
goto v___jp_5221_;
}
else
{
lean_object* v___x_5229_; 
v___x_5229_ = lean_array_fget_borrowed(v_args_5219_, v___x_5226_);
if (lean_obj_tag(v___x_5229_) == 9)
{
lean_object* v_value_5230_; lean_object* v___x_5231_; uint8_t v___x_5232_; 
v_value_5230_ = lean_ctor_get(v___x_5229_, 0);
v___x_5231_ = lean_unsigned_to_nat(1u);
v___x_5232_ = lean_nat_dec_lt(v___x_5231_, v___x_5227_);
if (v___x_5232_ == 0)
{
lean_dec_ref(v___f_5218_);
goto v___jp_5221_;
}
else
{
lean_object* v___x_5233_; 
v___x_5233_ = lean_array_fget(v_args_5219_, v___x_5231_);
if (lean_obj_tag(v___x_5233_) == 9)
{
lean_object* v_value_5234_; lean_object* v___x_5236_; uint8_t v_isShared_5237_; uint8_t v_isSharedCheck_5245_; 
lean_dec_ref(v___f_5217_);
v_value_5234_ = lean_ctor_get(v___x_5233_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5233_);
if (v_isSharedCheck_5245_ == 0)
{
lean_object* v_unused_5246_; 
v_unused_5246_ = lean_ctor_get(v___x_5233_, 1);
lean_dec(v_unused_5246_);
v___x_5236_ = v___x_5233_;
v_isShared_5237_ = v_isSharedCheck_5245_;
goto v_resetjp_5235_;
}
else
{
lean_inc(v_value_5234_);
lean_dec(v___x_5233_);
v___x_5236_ = lean_box(0);
v_isShared_5237_ = v_isSharedCheck_5245_;
goto v_resetjp_5235_;
}
v_resetjp_5235_:
{
lean_object* v___x_5239_; 
lean_inc(v_value_5230_);
if (v_isShared_5237_ == 0)
{
lean_ctor_set_tag(v___x_5236_, 0);
lean_ctor_set(v___x_5236_, 1, v_value_5234_);
lean_ctor_set(v___x_5236_, 0, v_value_5230_);
v___x_5239_ = v___x_5236_;
goto v_reusejp_5238_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v_value_5230_);
lean_ctor_set(v_reuseFailAlloc_5244_, 1, v_value_5234_);
v___x_5239_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5238_;
}
v_reusejp_5238_:
{
uint8_t v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; 
v___x_5240_ = 0;
v___x_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5241_, 0, v___x_5239_);
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5241_);
v___x_5243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5226_, v___x_5240_, v___x_5242_, v___f_5218_);
return v___x_5243_;
}
}
}
else
{
lean_dec(v___x_5233_);
lean_dec_ref(v___f_5218_);
goto v___jp_5221_;
}
}
}
else
{
lean_dec_ref(v___f_5218_);
goto v___jp_5221_;
}
}
v___jp_5221_:
{
lean_object* v___x_5222_; uint8_t v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; 
v___x_5222_ = lean_unsigned_to_nat(0u);
v___x_5223_ = 0;
v___x_5224_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_5225_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5222_, v___x_5223_, v___x_5224_, v___f_5217_);
return v___x_5225_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_5247_, lean_object* v___f_5248_, lean_object* v_args_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l_Lasm_Fetch_serveNode___lam__22(v___f_5247_, v___f_5248_, v_args_5249_);
lean_dec_ref(v_args_5249_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_5252_){
_start:
{
lean_object* v___x_5254_; lean_object* v_putStr_5255_; lean_object* v___x_5256_; 
v___x_5254_ = lean_get_stdout();
v_putStr_5255_ = lean_ctor_get(v___x_5254_, 4);
lean_inc_ref(v_putStr_5255_);
lean_dec_ref(v___x_5254_);
v___x_5256_ = lean_apply_2(v_putStr_5255_, v_s_5252_, lean_box(0));
return v___x_5256_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_5257_, lean_object* v_a_5258_){
_start:
{
lean_object* v_res_5259_; 
v_res_5259_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_5257_);
return v_res_5259_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_5260_){
_start:
{
uint32_t v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; 
v___x_5262_ = 10;
v___x_5263_ = lean_string_push(v_s_5260_, v___x_5262_);
v___x_5264_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5263_);
return v___x_5264_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5265_, lean_object* v_a_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5265_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___f_5272_, lean_object* v_x_5273_){
_start:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; uint8_t v___x_5282_; lean_object* v_val_5284_; lean_object* v___x_5287_; 
v___x_5275_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5276_ = lean_string_append(v___x_5275_, v___y_5270_);
v___x_5277_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5278_ = lean_string_append(v___x_5276_, v___x_5277_);
v___x_5279_ = l_Nat_reprFast(v___y_5271_);
v___x_5280_ = lean_string_append(v___x_5278_, v___x_5279_);
lean_dec_ref(v___x_5279_);
v___x_5281_ = lean_unsigned_to_nat(0u);
v___x_5282_ = 0;
v___x_5287_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5280_);
if (lean_obj_tag(v___x_5287_) == 0)
{
lean_object* v_a_5288_; lean_object* v___x_5290_; uint8_t v_isShared_5291_; uint8_t v_isSharedCheck_5295_; 
v_a_5288_ = lean_ctor_get(v___x_5287_, 0);
v_isSharedCheck_5295_ = !lean_is_exclusive(v___x_5287_);
if (v_isSharedCheck_5295_ == 0)
{
v___x_5290_ = v___x_5287_;
v_isShared_5291_ = v_isSharedCheck_5295_;
goto v_resetjp_5289_;
}
else
{
lean_inc(v_a_5288_);
lean_dec(v___x_5287_);
v___x_5290_ = lean_box(0);
v_isShared_5291_ = v_isSharedCheck_5295_;
goto v_resetjp_5289_;
}
v_resetjp_5289_:
{
lean_object* v___x_5293_; 
if (v_isShared_5291_ == 0)
{
lean_ctor_set_tag(v___x_5290_, 1);
v___x_5293_ = v___x_5290_;
goto v_reusejp_5292_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v_a_5288_);
v___x_5293_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5292_;
}
v_reusejp_5292_:
{
v_val_5284_ = v___x_5293_;
goto v___jp_5283_;
}
}
}
else
{
lean_object* v_a_5296_; lean_object* v___x_5298_; uint8_t v_isShared_5299_; uint8_t v_isSharedCheck_5303_; 
v_a_5296_ = lean_ctor_get(v___x_5287_, 0);
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5287_);
if (v_isSharedCheck_5303_ == 0)
{
v___x_5298_ = v___x_5287_;
v_isShared_5299_ = v_isSharedCheck_5303_;
goto v_resetjp_5297_;
}
else
{
lean_inc(v_a_5296_);
lean_dec(v___x_5287_);
v___x_5298_ = lean_box(0);
v_isShared_5299_ = v_isSharedCheck_5303_;
goto v_resetjp_5297_;
}
v_resetjp_5297_:
{
lean_object* v___x_5301_; 
if (v_isShared_5299_ == 0)
{
lean_ctor_set_tag(v___x_5298_, 0);
v___x_5301_ = v___x_5298_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v_a_5296_);
v___x_5301_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
v_val_5284_ = v___x_5301_;
goto v___jp_5283_;
}
}
}
v___jp_5283_:
{
lean_object* v___x_5285_; lean_object* v___x_5286_; 
v___x_5285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5285_, 0, v_val_5284_);
v___x_5286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5281_, v___x_5282_, v___x_5285_, v___f_5272_);
return v___x_5286_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___f_5306_, lean_object* v_x_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5304_, v___y_5305_, v___f_5306_, v_x_5307_);
lean_dec_ref(v_x_5307_);
lean_dec_ref(v___y_5304_);
return v_res_5309_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_5311_; lean_object* v___x_5312_; 
v___x_5311_ = lean_unsigned_to_nat(0u);
v___x_5312_ = lean_nat_to_int(v___x_5311_);
return v___x_5312_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_5313_; lean_object* v___x_5314_; 
v___x_5313_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5314_ = lean_nat_abs(v___x_5313_);
return v___x_5314_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; uint8_t v___x_5317_; 
v___x_5315_ = lean_cstr_to_nat("9007199254740991");
v___x_5316_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_5317_ = lean_nat_dec_le(v___x_5316_, v___x_5315_);
return v___x_5317_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_5318_; lean_object* v___x_5319_; 
v___x_5318_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5319_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5319_, 0, v___x_5318_);
return v___x_5319_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_5320_; double v___x_5321_; 
v___x_5320_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5321_ = l_Float_ofInt(v___x_5320_);
return v___x_5321_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_5322_; lean_object* v___x_5323_; 
v___x_5322_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_5323_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5323_, 0, v___x_5322_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_5324_, lean_object* v___x_5325_, lean_object* v_a_5326_, lean_object* v_x_5327_){
_start:
{
uint8_t v___y_5330_; lean_object* v___y_5331_; lean_object* v_val_5332_; lean_object* v___x_5335_; lean_object* v___y_5337_; uint8_t v___x_5358_; 
v___x_5335_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_5358_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_5358_ == 0)
{
lean_object* v___x_5359_; 
v___x_5359_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_5337_ = v___x_5359_;
goto v___jp_5336_;
}
else
{
lean_object* v___x_5360_; 
v___x_5360_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_5337_ = v___x_5360_;
goto v___jp_5336_;
}
v___jp_5329_:
{
lean_object* v___x_5333_; lean_object* v___x_5334_; 
v___x_5333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5333_, 0, v_val_5332_);
v___x_5334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5331_, v___y_5330_, v___x_5333_, v___f_5324_);
return v___x_5334_;
}
v___jp_5336_:
{
lean_object* v___x_5338_; lean_object* v___x_5339_; uint8_t v___x_5340_; lean_object* v___x_5341_; 
lean_inc(v___y_5337_);
v___x_5338_ = lean_array_push(v___x_5325_, v___y_5337_);
v___x_5339_ = lean_unsigned_to_nat(0u);
v___x_5340_ = 0;
v___x_5341_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5326_, v___x_5335_, v___x_5338_);
if (lean_obj_tag(v___x_5341_) == 0)
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5349_; 
v_a_5342_ = lean_ctor_get(v___x_5341_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___x_5341_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5344_ = v___x_5341_;
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v___x_5341_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
lean_object* v___x_5347_; 
if (v_isShared_5345_ == 0)
{
lean_ctor_set_tag(v___x_5344_, 1);
v___x_5347_ = v___x_5344_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v_a_5342_);
v___x_5347_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
v___y_5330_ = v___x_5340_;
v___y_5331_ = v___x_5339_;
v_val_5332_ = v___x_5347_;
goto v___jp_5329_;
}
}
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5357_; 
v_a_5350_ = lean_ctor_get(v___x_5341_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5341_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5352_ = v___x_5341_;
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_a_5350_);
lean_dec(v___x_5341_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5355_; 
if (v_isShared_5353_ == 0)
{
lean_ctor_set_tag(v___x_5352_, 0);
v___x_5355_ = v___x_5352_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5350_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
v___y_5330_ = v___x_5340_;
v___y_5331_ = v___x_5339_;
v_val_5332_ = v___x_5355_;
goto v___jp_5329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_5361_, lean_object* v___x_5362_, lean_object* v_a_5363_, lean_object* v_x_5364_, lean_object* v___y_5365_){
_start:
{
lean_object* v_res_5366_; 
v_res_5366_ = l_Lasm_Fetch_serveNode___lam__23(v___f_5361_, v___x_5362_, v_a_5363_, v_x_5364_);
lean_dec_ref(v_x_5364_);
return v_res_5366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5367_, lean_object* v___x_5368_, lean_object* v___x_5369_, lean_object* v___f_5370_, lean_object* v_a_5371_, lean_object* v_x_5372_){
_start:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; uint8_t v___x_5378_; lean_object* v_val_5380_; lean_object* v___x_5383_; 
v___x_5374_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5375_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5375_, 0, v_a_5367_);
lean_ctor_set(v___x_5375_, 1, v___x_5368_);
v___x_5376_ = lean_array_push(v___x_5369_, v___x_5375_);
v___x_5377_ = lean_unsigned_to_nat(0u);
v___x_5378_ = 0;
v___x_5383_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5371_, v___x_5374_, v___x_5376_);
if (lean_obj_tag(v___x_5383_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5391_; 
v_a_5384_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5391_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5391_ == 0)
{
v___x_5386_ = v___x_5383_;
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v___x_5383_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5389_; 
if (v_isShared_5387_ == 0)
{
lean_ctor_set_tag(v___x_5386_, 1);
v___x_5389_ = v___x_5386_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v_a_5384_);
v___x_5389_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
v_val_5380_ = v___x_5389_;
goto v___jp_5379_;
}
}
}
else
{
lean_object* v_a_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5399_; 
v_a_5392_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5394_ = v___x_5383_;
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_a_5392_);
lean_dec(v___x_5383_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5397_; 
if (v_isShared_5395_ == 0)
{
lean_ctor_set_tag(v___x_5394_, 0);
v___x_5397_ = v___x_5394_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_a_5392_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
v_val_5380_ = v___x_5397_;
goto v___jp_5379_;
}
}
}
v___jp_5379_:
{
lean_object* v___x_5381_; lean_object* v___x_5382_; 
v___x_5381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5381_, 0, v_val_5380_);
v___x_5382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5377_, v___x_5378_, v___x_5381_, v___f_5370_);
return v___x_5382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5400_, lean_object* v___x_5401_, lean_object* v___x_5402_, lean_object* v___f_5403_, lean_object* v_a_5404_, lean_object* v_x_5405_, lean_object* v___y_5406_){
_start:
{
lean_object* v_res_5407_; 
v_res_5407_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5400_, v___x_5401_, v___x_5402_, v___f_5403_, v_a_5404_, v_x_5405_);
lean_dec_ref(v_x_5405_);
return v_res_5407_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_as_x27_5411_, lean_object* v_b_5412_){
_start:
{
if (lean_obj_tag(v_as_x27_5411_) == 0)
{
lean_object* v___x_5414_; 
lean_dec(v_a_5410_);
lean_dec(v_a_5409_);
v___x_5414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5414_, 0, v_b_5412_);
return v___x_5414_;
}
else
{
lean_object* v_head_5415_; lean_object* v_tail_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
v_head_5415_ = lean_ctor_get(v_as_x27_5411_, 0);
v_tail_5416_ = lean_ctor_get(v_as_x27_5411_, 1);
v___x_5417_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5418_ = lean_box(0);
v___x_5419_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5415_);
v___x_5420_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5420_, 0, v_head_5415_);
lean_inc(v_a_5409_);
v___x_5421_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5421_, 0, v_a_5409_);
lean_ctor_set(v___x_5421_, 1, v___x_5417_);
v___x_5422_ = lean_unsigned_to_nat(2u);
v___x_5423_ = lean_mk_empty_array_with_capacity(v___x_5422_);
v___x_5424_ = lean_array_push(v___x_5423_, v___x_5420_);
v___x_5425_ = lean_array_push(v___x_5424_, v___x_5421_);
lean_inc(v_a_5410_);
v___x_5426_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5410_, v___x_5419_, v___x_5425_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_dec_ref_known(v___x_5426_, 1);
v_as_x27_5411_ = v_tail_5416_;
v_b_5412_ = v___x_5418_;
goto _start;
}
else
{
lean_object* v_a_5428_; lean_object* v___x_5430_; uint8_t v_isShared_5431_; uint8_t v_isSharedCheck_5435_; 
lean_dec(v_a_5410_);
lean_dec(v_a_5409_);
v_a_5428_ = lean_ctor_get(v___x_5426_, 0);
v_isSharedCheck_5435_ = !lean_is_exclusive(v___x_5426_);
if (v_isSharedCheck_5435_ == 0)
{
v___x_5430_ = v___x_5426_;
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
else
{
lean_inc(v_a_5428_);
lean_dec(v___x_5426_);
v___x_5430_ = lean_box(0);
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
v_resetjp_5429_:
{
lean_object* v___x_5433_; 
if (v_isShared_5431_ == 0)
{
v___x_5433_ = v___x_5430_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5434_; 
v_reuseFailAlloc_5434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5434_, 0, v_a_5428_);
v___x_5433_ = v_reuseFailAlloc_5434_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
return v___x_5433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5436_, lean_object* v_a_5437_, lean_object* v_as_x27_5438_, lean_object* v_b_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5436_, v_a_5437_, v_as_x27_5438_, v_b_5439_);
lean_dec(v_as_x27_5438_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5443_){
_start:
{
uint32_t v___x_5445_; uint32_t v___x_5446_; uint64_t v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v___x_5445_ = 201;
v___x_5446_ = 0;
v___x_5447_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_5448_ = lean_string_to_utf8(v_specifier_5443_);
v___x_5449_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5445_, v___x_5446_, v___x_5447_, v___x_5448_);
lean_dec_ref(v___x_5448_);
if (lean_obj_tag(v___x_5449_) == 0)
{
lean_object* v_a_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; 
v_a_5450_ = lean_ctor_get(v___x_5449_, 0);
lean_inc(v_a_5450_);
lean_dec_ref_known(v___x_5449_, 1);
v___x_5451_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5452_ = l_String_quote(v_specifier_5443_);
v___x_5453_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5453_, 0, v___x_5452_);
v___x_5454_ = lean_unsigned_to_nat(120u);
v___x_5455_ = lean_unsigned_to_nat(0u);
v___x_5456_ = l_Std_Format_pretty(v___x_5453_, v___x_5454_, v___x_5455_, v___x_5455_);
v___x_5457_ = lean_string_append(v___x_5451_, v___x_5456_);
lean_dec_ref(v___x_5456_);
v___x_5458_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5457_, v_a_5450_);
lean_dec(v_a_5450_);
lean_dec_ref(v___x_5457_);
return v___x_5458_;
}
else
{
lean_object* v_a_5459_; lean_object* v___x_5461_; uint8_t v_isShared_5462_; uint8_t v_isSharedCheck_5466_; 
lean_dec_ref(v_specifier_5443_);
v_a_5459_ = lean_ctor_get(v___x_5449_, 0);
v_isSharedCheck_5466_ = !lean_is_exclusive(v___x_5449_);
if (v_isSharedCheck_5466_ == 0)
{
v___x_5461_ = v___x_5449_;
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
else
{
lean_inc(v_a_5459_);
lean_dec(v___x_5449_);
v___x_5461_ = lean_box(0);
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
v_resetjp_5460_:
{
lean_object* v___x_5464_; 
if (v_isShared_5462_ == 0)
{
v___x_5464_ = v___x_5461_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_a_5459_);
v___x_5464_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
return v___x_5464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5467_, lean_object* v_a_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5495_, lean_object* v_options_5496_){
_start:
{
lean_object* v___f_5498_; lean_object* v___f_5499_; lean_object* v___f_5500_; lean_object* v___f_5501_; lean_object* v___y_5503_; lean_object* v___y_5504_; lean_object* v___y_5505_; lean_object* v___y_5506_; lean_object* v___y_5507_; lean_object* v___y_5508_; lean_object* v___y_5509_; lean_object* v___y_5510_; lean_object* v___x_5564_; lean_object* v___x_5565_; 
v___f_5498_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5499_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5500_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5501_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5564_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5565_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5564_);
if (lean_obj_tag(v___x_5565_) == 0)
{
lean_object* v_a_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; 
v_a_5566_ = lean_ctor_get(v___x_5565_, 0);
lean_inc(v_a_5566_);
lean_dec_ref_known(v___x_5565_, 1);
v___x_5567_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5568_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5567_);
if (lean_obj_tag(v___x_5568_) == 0)
{
lean_object* v_a_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; 
v_a_5569_ = lean_ctor_get(v___x_5568_, 0);
lean_inc(v_a_5569_);
lean_dec_ref_known(v___x_5568_, 1);
v___x_5570_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5571_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5569_, v___x_5570_);
if (lean_obj_tag(v___x_5571_) == 0)
{
lean_object* v_a_5572_; lean_object* v___x_5573_; 
v_a_5572_ = lean_ctor_get(v___x_5571_, 0);
lean_inc(v_a_5572_);
lean_dec_ref_known(v___x_5571_, 1);
v___x_5573_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5573_) == 0)
{
lean_object* v_a_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; 
v_a_5574_ = lean_ctor_get(v___x_5573_, 0);
lean_inc(v_a_5574_);
lean_dec_ref_known(v___x_5573_, 1);
v___x_5575_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5576_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5574_, v___x_5575_);
if (lean_obj_tag(v___x_5576_) == 0)
{
lean_object* v_a_5577_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5631_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___y_5636_; 
v_a_5577_ = lean_ctor_get(v___x_5576_, 0);
lean_inc(v_a_5577_);
lean_dec_ref_known(v___x_5576_, 1);
v___x_5633_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5634_ = lean_io_getenv(v___x_5633_);
if (lean_obj_tag(v___x_5634_) == 0)
{
lean_object* v___x_5645_; 
v___x_5645_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5636_ = v___x_5645_;
goto v___jp_5635_;
}
else
{
lean_object* v_val_5646_; 
v_val_5646_ = lean_ctor_get(v___x_5634_, 0);
lean_inc(v_val_5646_);
lean_dec_ref_known(v___x_5634_, 1);
v___y_5636_ = v_val_5646_;
goto v___jp_5635_;
}
v___jp_5578_:
{
lean_object* v___f_5582_; lean_object* v___f_5583_; lean_object* v___f_5584_; lean_object* v___f_5585_; lean_object* v___x_5586_; 
lean_inc_n(v___y_5581_, 2);
v___f_5582_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5582_, 0, v___y_5581_);
lean_closure_set(v___f_5582_, 1, v___f_5498_);
lean_closure_set(v___f_5582_, 2, v___f_5499_);
lean_closure_set(v___f_5582_, 3, v_handler_5495_);
lean_closure_set(v___f_5582_, 4, v_options_5496_);
lean_closure_set(v___f_5582_, 5, v_a_5577_);
lean_closure_set(v___f_5582_, 6, v_a_5572_);
v___f_5583_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5583_, 0, v___f_5582_);
lean_inc_ref(v___f_5583_);
v___f_5584_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5584_, 0, v___f_5583_);
lean_closure_set(v___f_5584_, 1, v___f_5583_);
v___f_5585_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5585_, 0, v___y_5579_);
lean_closure_set(v___f_5585_, 1, v___y_5581_);
lean_closure_set(v___f_5585_, 2, v___f_5500_);
v___x_5586_ = l_Lasm_JS_Function_ofFnReply(v___f_5584_);
if (lean_obj_tag(v___x_5586_) == 0)
{
lean_object* v_a_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; 
v_a_5587_ = lean_ctor_get(v___x_5586_, 0);
lean_inc(v_a_5587_);
lean_dec_ref_known(v___x_5586_, 1);
v___x_5588_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5589_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5590_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5590_, 0, v_a_5587_);
lean_ctor_set(v___x_5590_, 1, v___x_5589_);
v___x_5591_ = lean_unsigned_to_nat(1u);
v___x_5592_ = lean_mk_empty_array_with_capacity(v___x_5591_);
lean_inc_ref(v___x_5592_);
v___x_5593_ = lean_array_push(v___x_5592_, v___x_5590_);
v___x_5594_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5566_, v___x_5588_, v___x_5593_);
if (lean_obj_tag(v___x_5594_) == 0)
{
lean_object* v_a_5595_; lean_object* v___x_5596_; 
v_a_5595_ = lean_ctor_get(v___x_5594_, 0);
lean_inc(v_a_5595_);
lean_dec_ref_known(v___x_5594_, 1);
v___x_5596_ = l_Lasm_JS_Function_ofFn(v___f_5585_);
if (lean_obj_tag(v___x_5596_) == 0)
{
lean_object* v_a_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; uint8_t v___x_5602_; 
v_a_5597_ = lean_ctor_get(v___x_5596_, 0);
lean_inc(v_a_5597_);
lean_dec_ref_known(v___x_5596_, 1);
v___x_5598_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5599_ = lean_nat_to_int(v___y_5581_);
v___x_5600_ = lean_nat_abs(v___x_5599_);
v___x_5601_ = lean_cstr_to_nat("9007199254740991");
v___x_5602_ = lean_nat_dec_le(v___x_5600_, v___x_5601_);
lean_dec(v___x_5600_);
if (v___x_5602_ == 0)
{
lean_object* v___x_5603_; 
v___x_5603_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5603_, 0, v___x_5599_);
v___y_5503_ = v___x_5589_;
v___y_5504_ = v_a_5595_;
v___y_5505_ = v___x_5592_;
v___y_5506_ = v_a_5597_;
v___y_5507_ = v___x_5598_;
v___y_5508_ = v___x_5589_;
v___y_5509_ = v___y_5580_;
v___y_5510_ = v___x_5603_;
goto v___jp_5502_;
}
else
{
double v___x_5604_; lean_object* v___x_5605_; 
v___x_5604_ = l_Float_ofInt(v___x_5599_);
lean_dec(v___x_5599_);
v___x_5605_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5605_, 0, v___x_5604_);
v___y_5503_ = v___x_5589_;
v___y_5504_ = v_a_5595_;
v___y_5505_ = v___x_5592_;
v___y_5506_ = v_a_5597_;
v___y_5507_ = v___x_5598_;
v___y_5508_ = v___x_5589_;
v___y_5509_ = v___y_5580_;
v___y_5510_ = v___x_5605_;
goto v___jp_5502_;
}
}
else
{
lean_object* v_a_5606_; lean_object* v___x_5608_; uint8_t v_isShared_5609_; uint8_t v_isSharedCheck_5613_; 
lean_dec(v_a_5595_);
lean_dec_ref(v___x_5592_);
lean_dec(v___y_5581_);
lean_dec_ref(v___y_5580_);
v_a_5606_ = lean_ctor_get(v___x_5596_, 0);
v_isSharedCheck_5613_ = !lean_is_exclusive(v___x_5596_);
if (v_isSharedCheck_5613_ == 0)
{
v___x_5608_ = v___x_5596_;
v_isShared_5609_ = v_isSharedCheck_5613_;
goto v_resetjp_5607_;
}
else
{
lean_inc(v_a_5606_);
lean_dec(v___x_5596_);
v___x_5608_ = lean_box(0);
v_isShared_5609_ = v_isSharedCheck_5613_;
goto v_resetjp_5607_;
}
v_resetjp_5607_:
{
lean_object* v___x_5611_; 
if (v_isShared_5609_ == 0)
{
v___x_5611_ = v___x_5608_;
goto v_reusejp_5610_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_a_5606_);
v___x_5611_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5610_;
}
v_reusejp_5610_:
{
return v___x_5611_;
}
}
}
}
else
{
lean_object* v_a_5614_; lean_object* v___x_5616_; uint8_t v_isShared_5617_; uint8_t v_isSharedCheck_5621_; 
lean_dec_ref(v___x_5592_);
lean_dec_ref(v___f_5585_);
lean_dec(v___y_5581_);
lean_dec_ref(v___y_5580_);
v_a_5614_ = lean_ctor_get(v___x_5594_, 0);
v_isSharedCheck_5621_ = !lean_is_exclusive(v___x_5594_);
if (v_isSharedCheck_5621_ == 0)
{
v___x_5616_ = v___x_5594_;
v_isShared_5617_ = v_isSharedCheck_5621_;
goto v_resetjp_5615_;
}
else
{
lean_inc(v_a_5614_);
lean_dec(v___x_5594_);
v___x_5616_ = lean_box(0);
v_isShared_5617_ = v_isSharedCheck_5621_;
goto v_resetjp_5615_;
}
v_resetjp_5615_:
{
lean_object* v___x_5619_; 
if (v_isShared_5617_ == 0)
{
v___x_5619_ = v___x_5616_;
goto v_reusejp_5618_;
}
else
{
lean_object* v_reuseFailAlloc_5620_; 
v_reuseFailAlloc_5620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5620_, 0, v_a_5614_);
v___x_5619_ = v_reuseFailAlloc_5620_;
goto v_reusejp_5618_;
}
v_reusejp_5618_:
{
return v___x_5619_;
}
}
}
}
else
{
lean_object* v_a_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5629_; 
lean_dec_ref(v___f_5585_);
lean_dec(v___y_5581_);
lean_dec_ref(v___y_5580_);
lean_dec(v_a_5566_);
v_a_5622_ = lean_ctor_get(v___x_5586_, 0);
v_isSharedCheck_5629_ = !lean_is_exclusive(v___x_5586_);
if (v_isSharedCheck_5629_ == 0)
{
v___x_5624_ = v___x_5586_;
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_a_5622_);
lean_dec(v___x_5586_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v_a_5622_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
v___jp_5630_:
{
lean_object* v___x_5632_; 
v___x_5632_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5631_);
v___y_5579_ = v___y_5631_;
v___y_5580_ = v___y_5631_;
v___y_5581_ = v___x_5632_;
goto v___jp_5578_;
}
v___jp_5635_:
{
lean_object* v___x_5637_; lean_object* v___x_5638_; 
v___x_5637_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5638_ = lean_io_getenv(v___x_5637_);
if (lean_obj_tag(v___x_5638_) == 0)
{
v___y_5631_ = v___y_5636_;
goto v___jp_5630_;
}
else
{
lean_object* v_val_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v_val_5639_ = lean_ctor_get(v___x_5638_, 0);
lean_inc(v_val_5639_);
lean_dec_ref_known(v___x_5638_, 1);
v___x_5640_ = lean_unsigned_to_nat(0u);
v___x_5641_ = lean_string_utf8_byte_size(v_val_5639_);
v___x_5642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5642_, 0, v_val_5639_);
lean_ctor_set(v___x_5642_, 1, v___x_5640_);
lean_ctor_set(v___x_5642_, 2, v___x_5641_);
v___x_5643_ = l_String_Slice_toNat_x3f(v___x_5642_);
lean_dec_ref_known(v___x_5642_, 3);
if (lean_obj_tag(v___x_5643_) == 0)
{
v___y_5631_ = v___y_5636_;
goto v___jp_5630_;
}
else
{
lean_object* v_val_5644_; 
v_val_5644_ = lean_ctor_get(v___x_5643_, 0);
lean_inc(v_val_5644_);
lean_dec_ref_known(v___x_5643_, 1);
lean_inc_ref(v___y_5636_);
v___y_5579_ = v___y_5636_;
v___y_5580_ = v___y_5636_;
v___y_5581_ = v_val_5644_;
goto v___jp_5578_;
}
}
}
}
else
{
lean_object* v_a_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5654_; 
lean_dec(v_a_5572_);
lean_dec(v_a_5566_);
lean_dec_ref(v_options_5496_);
lean_dec_ref(v_handler_5495_);
v_a_5647_ = lean_ctor_get(v___x_5576_, 0);
v_isSharedCheck_5654_ = !lean_is_exclusive(v___x_5576_);
if (v_isSharedCheck_5654_ == 0)
{
v___x_5649_ = v___x_5576_;
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_a_5647_);
lean_dec(v___x_5576_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v_a_5647_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
}
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_dec(v_a_5572_);
lean_dec(v_a_5566_);
lean_dec_ref(v_options_5496_);
lean_dec_ref(v_handler_5495_);
v_a_5655_ = lean_ctor_get(v___x_5573_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5573_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5573_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5573_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
else
{
lean_object* v_a_5663_; lean_object* v___x_5665_; uint8_t v_isShared_5666_; uint8_t v_isSharedCheck_5670_; 
lean_dec(v_a_5566_);
lean_dec_ref(v_options_5496_);
lean_dec_ref(v_handler_5495_);
v_a_5663_ = lean_ctor_get(v___x_5571_, 0);
v_isSharedCheck_5670_ = !lean_is_exclusive(v___x_5571_);
if (v_isSharedCheck_5670_ == 0)
{
v___x_5665_ = v___x_5571_;
v_isShared_5666_ = v_isSharedCheck_5670_;
goto v_resetjp_5664_;
}
else
{
lean_inc(v_a_5663_);
lean_dec(v___x_5571_);
v___x_5665_ = lean_box(0);
v_isShared_5666_ = v_isSharedCheck_5670_;
goto v_resetjp_5664_;
}
v_resetjp_5664_:
{
lean_object* v___x_5668_; 
if (v_isShared_5666_ == 0)
{
v___x_5668_ = v___x_5665_;
goto v_reusejp_5667_;
}
else
{
lean_object* v_reuseFailAlloc_5669_; 
v_reuseFailAlloc_5669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5669_, 0, v_a_5663_);
v___x_5668_ = v_reuseFailAlloc_5669_;
goto v_reusejp_5667_;
}
v_reusejp_5667_:
{
return v___x_5668_;
}
}
}
}
else
{
lean_object* v_a_5671_; lean_object* v___x_5673_; uint8_t v_isShared_5674_; uint8_t v_isSharedCheck_5678_; 
lean_dec(v_a_5566_);
lean_dec_ref(v_options_5496_);
lean_dec_ref(v_handler_5495_);
v_a_5671_ = lean_ctor_get(v___x_5568_, 0);
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5568_);
if (v_isSharedCheck_5678_ == 0)
{
v___x_5673_ = v___x_5568_;
v_isShared_5674_ = v_isSharedCheck_5678_;
goto v_resetjp_5672_;
}
else
{
lean_inc(v_a_5671_);
lean_dec(v___x_5568_);
v___x_5673_ = lean_box(0);
v_isShared_5674_ = v_isSharedCheck_5678_;
goto v_resetjp_5672_;
}
v_resetjp_5672_:
{
lean_object* v___x_5676_; 
if (v_isShared_5674_ == 0)
{
v___x_5676_ = v___x_5673_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5677_; 
v_reuseFailAlloc_5677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5677_, 0, v_a_5671_);
v___x_5676_ = v_reuseFailAlloc_5677_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
return v___x_5676_;
}
}
}
}
else
{
lean_object* v_a_5679_; lean_object* v___x_5681_; uint8_t v_isShared_5682_; uint8_t v_isSharedCheck_5686_; 
lean_dec_ref(v_options_5496_);
lean_dec_ref(v_handler_5495_);
v_a_5679_ = lean_ctor_get(v___x_5565_, 0);
v_isSharedCheck_5686_ = !lean_is_exclusive(v___x_5565_);
if (v_isSharedCheck_5686_ == 0)
{
v___x_5681_ = v___x_5565_;
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
else
{
lean_inc(v_a_5679_);
lean_dec(v___x_5565_);
v___x_5681_ = lean_box(0);
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
v_resetjp_5680_:
{
lean_object* v___x_5684_; 
if (v_isShared_5682_ == 0)
{
v___x_5684_ = v___x_5681_;
goto v_reusejp_5683_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v_a_5679_);
v___x_5684_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5683_;
}
v_reusejp_5683_:
{
return v___x_5684_;
}
}
}
v___jp_5502_:
{
lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; 
v___x_5511_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5511_, 0, v___y_5509_);
lean_inc_ref(v___y_5508_);
v___x_5512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5512_, 0, v___y_5506_);
lean_ctor_set(v___x_5512_, 1, v___y_5508_);
v___x_5513_ = lean_unsigned_to_nat(3u);
v___x_5514_ = lean_mk_empty_array_with_capacity(v___x_5513_);
v___x_5515_ = lean_array_push(v___x_5514_, v___y_5510_);
v___x_5516_ = lean_array_push(v___x_5515_, v___x_5511_);
v___x_5517_ = lean_array_push(v___x_5516_, v___x_5512_);
lean_inc_ref(v___y_5507_);
lean_inc(v___y_5504_);
v___x_5518_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5504_, v___y_5507_, v___x_5517_);
if (lean_obj_tag(v___x_5518_) == 0)
{
lean_object* v___x_5519_; lean_object* v___x_5520_; 
lean_dec_ref_known(v___x_5518_, 1);
v___x_5519_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5520_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5519_);
if (lean_obj_tag(v___x_5520_) == 0)
{
lean_object* v_a_5521_; lean_object* v___f_5522_; lean_object* v___x_5523_; 
v_a_5521_ = lean_ctor_get(v___x_5520_, 0);
lean_inc_n(v_a_5521_, 2);
lean_dec_ref_known(v___x_5520_, 1);
lean_inc_ref(v___y_5505_);
v___f_5522_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_5522_, 0, v___f_5501_);
lean_closure_set(v___f_5522_, 1, v___y_5505_);
lean_closure_set(v___f_5522_, 2, v_a_5521_);
v___x_5523_ = l_Lasm_JS_Function_ofFn(v___f_5522_);
if (lean_obj_tag(v___x_5523_) == 0)
{
lean_object* v_a_5524_; lean_object* v___f_5525_; lean_object* v___x_5526_; 
v_a_5524_ = lean_ctor_get(v___x_5523_, 0);
lean_inc(v_a_5524_);
lean_dec_ref_known(v___x_5523_, 1);
lean_inc_ref(v___y_5503_);
v___f_5525_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_5525_, 0, v_a_5524_);
lean_closure_set(v___f_5525_, 1, v___y_5503_);
lean_closure_set(v___f_5525_, 2, v___y_5505_);
lean_closure_set(v___f_5525_, 3, v___f_5501_);
lean_closure_set(v___f_5525_, 4, v___y_5504_);
v___x_5526_ = l_Lasm_JS_Function_ofFn(v___f_5525_);
if (lean_obj_tag(v___x_5526_) == 0)
{
lean_object* v_a_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; 
v_a_5527_ = lean_ctor_get(v___x_5526_, 0);
lean_inc(v_a_5527_);
lean_dec_ref_known(v___x_5526_, 1);
v___x_5528_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5529_ = lean_box(0);
v___x_5530_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5527_, v_a_5521_, v___x_5528_, v___x_5529_);
if (lean_obj_tag(v___x_5530_) == 0)
{
lean_object* v___x_5531_; 
lean_dec_ref_known(v___x_5530_, 1);
v___x_5531_ = l_Lasm_JS_waitForever();
return v___x_5531_;
}
else
{
return v___x_5530_;
}
}
else
{
lean_object* v_a_5532_; lean_object* v___x_5534_; uint8_t v_isShared_5535_; uint8_t v_isSharedCheck_5539_; 
lean_dec(v_a_5521_);
v_a_5532_ = lean_ctor_get(v___x_5526_, 0);
v_isSharedCheck_5539_ = !lean_is_exclusive(v___x_5526_);
if (v_isSharedCheck_5539_ == 0)
{
v___x_5534_ = v___x_5526_;
v_isShared_5535_ = v_isSharedCheck_5539_;
goto v_resetjp_5533_;
}
else
{
lean_inc(v_a_5532_);
lean_dec(v___x_5526_);
v___x_5534_ = lean_box(0);
v_isShared_5535_ = v_isSharedCheck_5539_;
goto v_resetjp_5533_;
}
v_resetjp_5533_:
{
lean_object* v___x_5537_; 
if (v_isShared_5535_ == 0)
{
v___x_5537_ = v___x_5534_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5538_; 
v_reuseFailAlloc_5538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5538_, 0, v_a_5532_);
v___x_5537_ = v_reuseFailAlloc_5538_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
return v___x_5537_;
}
}
}
}
else
{
lean_object* v_a_5540_; lean_object* v___x_5542_; uint8_t v_isShared_5543_; uint8_t v_isSharedCheck_5547_; 
lean_dec(v_a_5521_);
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
v_a_5540_ = lean_ctor_get(v___x_5523_, 0);
v_isSharedCheck_5547_ = !lean_is_exclusive(v___x_5523_);
if (v_isSharedCheck_5547_ == 0)
{
v___x_5542_ = v___x_5523_;
v_isShared_5543_ = v_isSharedCheck_5547_;
goto v_resetjp_5541_;
}
else
{
lean_inc(v_a_5540_);
lean_dec(v___x_5523_);
v___x_5542_ = lean_box(0);
v_isShared_5543_ = v_isSharedCheck_5547_;
goto v_resetjp_5541_;
}
v_resetjp_5541_:
{
lean_object* v___x_5545_; 
if (v_isShared_5543_ == 0)
{
v___x_5545_ = v___x_5542_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v_a_5540_);
v___x_5545_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
return v___x_5545_;
}
}
}
}
else
{
lean_object* v_a_5548_; lean_object* v___x_5550_; uint8_t v_isShared_5551_; uint8_t v_isSharedCheck_5555_; 
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
v_a_5548_ = lean_ctor_get(v___x_5520_, 0);
v_isSharedCheck_5555_ = !lean_is_exclusive(v___x_5520_);
if (v_isSharedCheck_5555_ == 0)
{
v___x_5550_ = v___x_5520_;
v_isShared_5551_ = v_isSharedCheck_5555_;
goto v_resetjp_5549_;
}
else
{
lean_inc(v_a_5548_);
lean_dec(v___x_5520_);
v___x_5550_ = lean_box(0);
v_isShared_5551_ = v_isSharedCheck_5555_;
goto v_resetjp_5549_;
}
v_resetjp_5549_:
{
lean_object* v___x_5553_; 
if (v_isShared_5551_ == 0)
{
v___x_5553_ = v___x_5550_;
goto v_reusejp_5552_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v_a_5548_);
v___x_5553_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5552_;
}
v_reusejp_5552_:
{
return v___x_5553_;
}
}
}
}
else
{
lean_object* v_a_5556_; lean_object* v___x_5558_; uint8_t v_isShared_5559_; uint8_t v_isSharedCheck_5563_; 
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
v_a_5556_ = lean_ctor_get(v___x_5518_, 0);
v_isSharedCheck_5563_ = !lean_is_exclusive(v___x_5518_);
if (v_isSharedCheck_5563_ == 0)
{
v___x_5558_ = v___x_5518_;
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
else
{
lean_inc(v_a_5556_);
lean_dec(v___x_5518_);
v___x_5558_ = lean_box(0);
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
v_resetjp_5557_:
{
lean_object* v___x_5561_; 
if (v_isShared_5559_ == 0)
{
v___x_5561_ = v___x_5558_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5562_; 
v_reuseFailAlloc_5562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5562_, 0, v_a_5556_);
v___x_5561_ = v_reuseFailAlloc_5562_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
return v___x_5561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5687_, lean_object* v_options_5688_, lean_object* v_a_5689_){
_start:
{
lean_object* v_res_5690_; 
v_res_5690_ = l_Lasm_Fetch_serveNode(v_handler_5687_, v_options_5688_);
return v_res_5690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5691_, lean_object* v_range_5692_, lean_object* v_b_5693_, lean_object* v_i_5694_, lean_object* v_hs_5695_, lean_object* v_hl_5696_){
_start:
{
lean_object* v___x_5697_; 
v___x_5697_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5691_, v_range_5692_, v_b_5693_, v_i_5694_);
return v___x_5697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5698_, lean_object* v_range_5699_, lean_object* v_b_5700_, lean_object* v_i_5701_, lean_object* v_hs_5702_, lean_object* v_hl_5703_){
_start:
{
lean_object* v_res_5704_; 
v_res_5704_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5698_, v_range_5699_, v_b_5700_, v_i_5701_, v_hs_5702_, v_hl_5703_);
lean_dec_ref(v_range_5699_);
lean_dec_ref(v___y_5698_);
return v_res_5704_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5705_, lean_object* v_a_5706_, lean_object* v_as_5707_, lean_object* v_as_x27_5708_, lean_object* v_b_5709_, lean_object* v_a_5710_){
_start:
{
lean_object* v___x_5712_; 
v___x_5712_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5705_, v_a_5706_, v_as_x27_5708_, v_b_5709_);
return v___x_5712_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5713_, lean_object* v_a_5714_, lean_object* v_as_5715_, lean_object* v_as_x27_5716_, lean_object* v_b_5717_, lean_object* v_a_5718_, lean_object* v___y_5719_){
_start:
{
lean_object* v_res_5720_; 
v_res_5720_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5713_, v_a_5714_, v_as_5715_, v_as_x27_5716_, v_b_5717_, v_a_5718_);
lean_dec(v_as_x27_5716_);
lean_dec(v_as_5715_);
return v_res_5720_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5721_; 
v___x_5721_ = lean_box(0);
return v___x_5721_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5722_; 
v___x_5722_ = lean_box(0);
return v___x_5722_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5730_, lean_object* v_method_5731_, lean_object* v_url_5732_, lean_object* v_headers_5733_, lean_object* v_body_5734_, lean_object* v_backend_5735_, lean_object* v_a_00___x40___internal___hyg_5736_){
_start:
{
lean_object* v_res_5737_; 
v_res_5737_ = lasm_fetch_send(v_p_5730_, v_method_5731_, v_url_5732_, v_headers_5733_, v_body_5734_, v_backend_5735_);
lean_dec_ref(v_backend_5735_);
lean_dec_ref(v_body_5734_);
lean_dec_ref(v_headers_5733_);
lean_dec_ref(v_url_5732_);
lean_dec_ref(v_method_5731_);
lean_dec(v_p_5730_);
return v_res_5737_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5738_, lean_object* v_b_5739_, lean_object* v_x_5740_, lean_object* v_x_5741_){
_start:
{
if (lean_obj_tag(v_x_5741_) == 0)
{
return v_x_5740_;
}
else
{
lean_object* v_head_5742_; lean_object* v_tail_5743_; uint8_t v___y_5745_; lean_object* v___x_5752_; lean_object* v___x_5753_; uint8_t v___x_5754_; 
v_head_5742_ = lean_ctor_get(v_x_5741_, 0);
v_tail_5743_ = lean_ctor_get(v_x_5741_, 1);
v___x_5752_ = lean_nat_add(v_pos_5738_, v_head_5742_);
v___x_5753_ = lean_byte_array_size(v_b_5739_);
v___x_5754_ = lean_nat_dec_lt(v___x_5752_, v___x_5753_);
if (v___x_5754_ == 0)
{
uint8_t v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; uint8_t v___x_5758_; 
lean_dec(v___x_5752_);
v___x_5755_ = 0;
v___x_5756_ = lean_box(v___x_5755_);
v___x_5757_ = l_outOfBounds___redArg(v___x_5756_);
lean_dec(v___x_5756_);
v___x_5758_ = lean_unbox(v___x_5757_);
lean_dec(v___x_5757_);
v___y_5745_ = v___x_5758_;
goto v___jp_5744_;
}
else
{
uint8_t v___x_5759_; 
v___x_5759_ = lean_byte_array_fget(v_b_5739_, v___x_5752_);
lean_dec(v___x_5752_);
v___y_5745_ = v___x_5759_;
goto v___jp_5744_;
}
v___jp_5744_:
{
lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; 
v___x_5746_ = lean_uint8_to_nat(v___y_5745_);
v___x_5747_ = lean_unsigned_to_nat(256u);
v___x_5748_ = lean_nat_pow(v___x_5747_, v_head_5742_);
v___x_5749_ = lean_nat_mul(v___x_5746_, v___x_5748_);
lean_dec(v___x_5748_);
v___x_5750_ = lean_nat_add(v_x_5740_, v___x_5749_);
lean_dec(v___x_5749_);
lean_dec(v_x_5740_);
v_x_5740_ = v___x_5750_;
v_x_5741_ = v_tail_5743_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5760_, lean_object* v_b_5761_, lean_object* v_x_5762_, lean_object* v_x_5763_){
_start:
{
lean_object* v_res_5764_; 
v_res_5764_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5760_, v_b_5761_, v_x_5762_, v_x_5763_);
lean_dec(v_x_5763_);
lean_dec_ref(v_b_5761_);
lean_dec(v_pos_5760_);
return v_res_5764_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5765_ = lean_unsigned_to_nat(8u);
v___x_5766_ = l_List_range(v___x_5765_);
return v___x_5766_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5770_, lean_object* v_pos_5771_){
_start:
{
lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; uint8_t v___x_5775_; 
v___x_5772_ = lean_byte_array_size(v_b_5770_);
v___x_5773_ = lean_unsigned_to_nat(8u);
v___x_5774_ = lean_nat_add(v_pos_5771_, v___x_5773_);
v___x_5775_ = lean_nat_dec_lt(v___x_5772_, v___x_5774_);
lean_dec(v___x_5774_);
if (v___x_5775_ == 0)
{
lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; 
v___x_5776_ = lean_unsigned_to_nat(0u);
v___x_5777_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5778_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5771_, v_b_5770_, v___x_5776_, v___x_5777_);
v___x_5779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5779_, 0, v___x_5778_);
return v___x_5779_;
}
else
{
lean_object* v___x_5780_; 
v___x_5780_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5781_, lean_object* v_pos_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5781_, v_pos_5782_);
lean_dec(v_pos_5782_);
lean_dec_ref(v_b_5781_);
return v_res_5783_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5784_, lean_object* v_a_5785_){
_start:
{
if (lean_obj_tag(v_a_5784_) == 0)
{
lean_object* v___x_5786_; 
v___x_5786_ = l_List_reverse___redArg(v_a_5785_);
return v___x_5786_;
}
else
{
lean_object* v_head_5787_; lean_object* v_tail_5788_; lean_object* v___x_5790_; uint8_t v_isShared_5791_; uint8_t v_isSharedCheck_5804_; 
v_head_5787_ = lean_ctor_get(v_a_5784_, 0);
v_tail_5788_ = lean_ctor_get(v_a_5784_, 1);
v_isSharedCheck_5804_ = !lean_is_exclusive(v_a_5784_);
if (v_isSharedCheck_5804_ == 0)
{
v___x_5790_ = v_a_5784_;
v_isShared_5791_ = v_isSharedCheck_5804_;
goto v_resetjp_5789_;
}
else
{
lean_inc(v_tail_5788_);
lean_inc(v_head_5787_);
lean_dec(v_a_5784_);
v___x_5790_ = lean_box(0);
v_isShared_5791_ = v_isSharedCheck_5804_;
goto v_resetjp_5789_;
}
v_resetjp_5789_:
{
uint8_t v___y_5793_; uint8_t v___x_5799_; uint8_t v___x_5800_; uint8_t v___x_5801_; 
v___x_5799_ = 128;
v___x_5800_ = lean_unbox(v_head_5787_);
v___x_5801_ = lean_uint8_dec_lt(v___x_5800_, v___x_5799_);
if (v___x_5801_ == 0)
{
uint8_t v___x_5802_; 
lean_dec(v_head_5787_);
v___x_5802_ = 63;
v___y_5793_ = v___x_5802_;
goto v___jp_5792_;
}
else
{
uint8_t v___x_5803_; 
v___x_5803_ = lean_unbox(v_head_5787_);
lean_dec(v_head_5787_);
v___y_5793_ = v___x_5803_;
goto v___jp_5792_;
}
v___jp_5792_:
{
lean_object* v___x_5794_; lean_object* v___x_5796_; 
v___x_5794_ = lean_box(v___y_5793_);
if (v_isShared_5791_ == 0)
{
lean_ctor_set(v___x_5790_, 1, v_a_5785_);
lean_ctor_set(v___x_5790_, 0, v___x_5794_);
v___x_5796_ = v___x_5790_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v___x_5794_);
lean_ctor_set(v_reuseFailAlloc_5798_, 1, v_a_5785_);
v___x_5796_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
v_a_5784_ = v_tail_5788_;
v_a_5785_ = v___x_5796_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5807_, lean_object* v_pos_5808_, lean_object* v_n_5809_){
_start:
{
lean_object* v___x_5810_; lean_object* v___x_5811_; uint8_t v___x_5812_; 
v___x_5810_ = lean_byte_array_size(v_b_5807_);
v___x_5811_ = lean_nat_add(v_pos_5808_, v_n_5809_);
v___x_5812_ = lean_nat_dec_lt(v___x_5810_, v___x_5811_);
if (v___x_5812_ == 0)
{
lean_object* v___x_5813_; uint8_t v___x_5814_; 
v___x_5813_ = l_ByteArray_extract(v_b_5807_, v_pos_5808_, v___x_5811_);
lean_dec(v___x_5811_);
v___x_5814_ = lean_string_validate_utf8(v___x_5813_);
if (v___x_5814_ == 0)
{
lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; uint8_t v___x_5819_; 
v___x_5815_ = l_ByteArray_toList(v___x_5813_);
lean_dec_ref(v___x_5813_);
v___x_5816_ = lean_box(0);
v___x_5817_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5815_, v___x_5816_);
v___x_5818_ = l_List_toByteArray(v___x_5817_);
lean_dec(v___x_5817_);
v___x_5819_ = lean_string_validate_utf8(v___x_5818_);
if (v___x_5819_ == 0)
{
lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; 
lean_dec_ref(v___x_5818_);
v___x_5820_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5821_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5820_);
v___x_5822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5822_, 0, v___x_5821_);
return v___x_5822_;
}
else
{
lean_object* v___x_5823_; lean_object* v___x_5824_; 
v___x_5823_ = lean_string_from_utf8_unchecked(v___x_5818_);
v___x_5824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5824_, 0, v___x_5823_);
return v___x_5824_;
}
}
else
{
lean_object* v___x_5825_; lean_object* v___x_5826_; 
v___x_5825_ = lean_string_from_utf8_unchecked(v___x_5813_);
v___x_5826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5826_, 0, v___x_5825_);
return v___x_5826_;
}
}
else
{
lean_object* v___x_5827_; 
lean_dec(v___x_5811_);
lean_dec(v_pos_5808_);
v___x_5827_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5827_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5828_, lean_object* v_pos_5829_, lean_object* v_n_5830_){
_start:
{
lean_object* v_res_5831_; 
v_res_5831_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5828_, v_pos_5829_, v_n_5830_);
lean_dec(v_n_5830_);
lean_dec_ref(v_b_5828_);
return v_res_5831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5832_, lean_object* v_range_5833_, lean_object* v_b_5834_, lean_object* v_i_5835_){
_start:
{
lean_object* v_stop_5836_; lean_object* v_step_5837_; uint8_t v___x_5838_; 
v_stop_5836_ = lean_ctor_get(v_range_5833_, 1);
v_step_5837_ = lean_ctor_get(v_range_5833_, 2);
v___x_5838_ = lean_nat_dec_lt(v_i_5835_, v_stop_5836_);
if (v___x_5838_ == 0)
{
lean_object* v___x_5839_; 
lean_dec(v_i_5835_);
v___x_5839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5839_, 0, v_b_5834_);
return v___x_5839_;
}
else
{
lean_object* v_fst_5840_; lean_object* v_snd_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5897_; 
v_fst_5840_ = lean_ctor_get(v_b_5834_, 0);
v_snd_5841_ = lean_ctor_get(v_b_5834_, 1);
v_isSharedCheck_5897_ = !lean_is_exclusive(v_b_5834_);
if (v_isSharedCheck_5897_ == 0)
{
v___x_5843_ = v_b_5834_;
v_isShared_5844_ = v_isSharedCheck_5897_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_snd_5841_);
lean_inc(v_fst_5840_);
lean_dec(v_b_5834_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5897_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v___x_5845_; 
v___x_5845_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5832_, v_fst_5840_);
if (lean_obj_tag(v___x_5845_) == 0)
{
lean_object* v_a_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5853_; 
lean_del_object(v___x_5843_);
lean_dec(v_snd_5841_);
lean_dec(v_fst_5840_);
lean_dec(v_i_5835_);
v_a_5846_ = lean_ctor_get(v___x_5845_, 0);
v_isSharedCheck_5853_ = !lean_is_exclusive(v___x_5845_);
if (v_isSharedCheck_5853_ == 0)
{
v___x_5848_ = v___x_5845_;
v_isShared_5849_ = v_isSharedCheck_5853_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_a_5846_);
lean_dec(v___x_5845_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5853_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v___x_5851_; 
if (v_isShared_5849_ == 0)
{
v___x_5851_ = v___x_5848_;
goto v_reusejp_5850_;
}
else
{
lean_object* v_reuseFailAlloc_5852_; 
v_reuseFailAlloc_5852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5852_, 0, v_a_5846_);
v___x_5851_ = v_reuseFailAlloc_5852_;
goto v_reusejp_5850_;
}
v_reusejp_5850_:
{
return v___x_5851_;
}
}
}
else
{
lean_object* v_a_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; 
v_a_5854_ = lean_ctor_get(v___x_5845_, 0);
lean_inc(v_a_5854_);
lean_dec_ref_known(v___x_5845_, 1);
v___x_5855_ = lean_unsigned_to_nat(8u);
v___x_5856_ = lean_nat_add(v_fst_5840_, v___x_5855_);
lean_dec(v_fst_5840_);
lean_inc(v___x_5856_);
v___x_5857_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5832_, v___x_5856_, v_a_5854_);
if (lean_obj_tag(v___x_5857_) == 0)
{
lean_object* v_a_5858_; lean_object* v___x_5860_; uint8_t v_isShared_5861_; uint8_t v_isSharedCheck_5865_; 
lean_dec(v___x_5856_);
lean_dec(v_a_5854_);
lean_del_object(v___x_5843_);
lean_dec(v_snd_5841_);
lean_dec(v_i_5835_);
v_a_5858_ = lean_ctor_get(v___x_5857_, 0);
v_isSharedCheck_5865_ = !lean_is_exclusive(v___x_5857_);
if (v_isSharedCheck_5865_ == 0)
{
v___x_5860_ = v___x_5857_;
v_isShared_5861_ = v_isSharedCheck_5865_;
goto v_resetjp_5859_;
}
else
{
lean_inc(v_a_5858_);
lean_dec(v___x_5857_);
v___x_5860_ = lean_box(0);
v_isShared_5861_ = v_isSharedCheck_5865_;
goto v_resetjp_5859_;
}
v_resetjp_5859_:
{
lean_object* v___x_5863_; 
if (v_isShared_5861_ == 0)
{
v___x_5863_ = v___x_5860_;
goto v_reusejp_5862_;
}
else
{
lean_object* v_reuseFailAlloc_5864_; 
v_reuseFailAlloc_5864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5864_, 0, v_a_5858_);
v___x_5863_ = v_reuseFailAlloc_5864_;
goto v_reusejp_5862_;
}
v_reusejp_5862_:
{
return v___x_5863_;
}
}
}
else
{
lean_object* v_a_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; 
v_a_5866_ = lean_ctor_get(v___x_5857_, 0);
lean_inc(v_a_5866_);
lean_dec_ref_known(v___x_5857_, 1);
v___x_5867_ = lean_nat_add(v___x_5856_, v_a_5854_);
lean_dec(v_a_5854_);
lean_dec(v___x_5856_);
v___x_5868_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5832_, v___x_5867_);
if (lean_obj_tag(v___x_5868_) == 0)
{
lean_object* v_a_5869_; lean_object* v___x_5871_; uint8_t v_isShared_5872_; uint8_t v_isSharedCheck_5876_; 
lean_dec(v___x_5867_);
lean_dec(v_a_5866_);
lean_del_object(v___x_5843_);
lean_dec(v_snd_5841_);
lean_dec(v_i_5835_);
v_a_5869_ = lean_ctor_get(v___x_5868_, 0);
v_isSharedCheck_5876_ = !lean_is_exclusive(v___x_5868_);
if (v_isSharedCheck_5876_ == 0)
{
v___x_5871_ = v___x_5868_;
v_isShared_5872_ = v_isSharedCheck_5876_;
goto v_resetjp_5870_;
}
else
{
lean_inc(v_a_5869_);
lean_dec(v___x_5868_);
v___x_5871_ = lean_box(0);
v_isShared_5872_ = v_isSharedCheck_5876_;
goto v_resetjp_5870_;
}
v_resetjp_5870_:
{
lean_object* v___x_5874_; 
if (v_isShared_5872_ == 0)
{
v___x_5874_ = v___x_5871_;
goto v_reusejp_5873_;
}
else
{
lean_object* v_reuseFailAlloc_5875_; 
v_reuseFailAlloc_5875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5875_, 0, v_a_5869_);
v___x_5874_ = v_reuseFailAlloc_5875_;
goto v_reusejp_5873_;
}
v_reusejp_5873_:
{
return v___x_5874_;
}
}
}
else
{
lean_object* v_a_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; 
v_a_5877_ = lean_ctor_get(v___x_5868_, 0);
lean_inc(v_a_5877_);
lean_dec_ref_known(v___x_5868_, 1);
v___x_5878_ = lean_nat_add(v___x_5867_, v___x_5855_);
lean_dec(v___x_5867_);
lean_inc(v___x_5878_);
v___x_5879_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5832_, v___x_5878_, v_a_5877_);
if (lean_obj_tag(v___x_5879_) == 0)
{
lean_object* v_a_5880_; lean_object* v___x_5882_; uint8_t v_isShared_5883_; uint8_t v_isSharedCheck_5887_; 
lean_dec(v___x_5878_);
lean_dec(v_a_5877_);
lean_dec(v_a_5866_);
lean_del_object(v___x_5843_);
lean_dec(v_snd_5841_);
lean_dec(v_i_5835_);
v_a_5880_ = lean_ctor_get(v___x_5879_, 0);
v_isSharedCheck_5887_ = !lean_is_exclusive(v___x_5879_);
if (v_isSharedCheck_5887_ == 0)
{
v___x_5882_ = v___x_5879_;
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
else
{
lean_inc(v_a_5880_);
lean_dec(v___x_5879_);
v___x_5882_ = lean_box(0);
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
v_resetjp_5881_:
{
lean_object* v___x_5885_; 
if (v_isShared_5883_ == 0)
{
v___x_5885_ = v___x_5882_;
goto v_reusejp_5884_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v_a_5880_);
v___x_5885_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5884_;
}
v_reusejp_5884_:
{
return v___x_5885_;
}
}
}
else
{
lean_object* v_a_5888_; lean_object* v___x_5889_; lean_object* v___x_5891_; 
v_a_5888_ = lean_ctor_get(v___x_5879_, 0);
lean_inc(v_a_5888_);
lean_dec_ref_known(v___x_5879_, 1);
v___x_5889_ = lean_nat_add(v___x_5878_, v_a_5877_);
lean_dec(v_a_5877_);
lean_dec(v___x_5878_);
if (v_isShared_5844_ == 0)
{
lean_ctor_set(v___x_5843_, 1, v_a_5888_);
lean_ctor_set(v___x_5843_, 0, v_a_5866_);
v___x_5891_ = v___x_5843_;
goto v_reusejp_5890_;
}
else
{
lean_object* v_reuseFailAlloc_5896_; 
v_reuseFailAlloc_5896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5896_, 0, v_a_5866_);
lean_ctor_set(v_reuseFailAlloc_5896_, 1, v_a_5888_);
v___x_5891_ = v_reuseFailAlloc_5896_;
goto v_reusejp_5890_;
}
v_reusejp_5890_:
{
lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; 
v___x_5892_ = lean_array_push(v_snd_5841_, v___x_5891_);
v___x_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5889_);
lean_ctor_set(v___x_5893_, 1, v___x_5892_);
v___x_5894_ = lean_nat_add(v_i_5835_, v_step_5837_);
lean_dec(v_i_5835_);
v_b_5834_ = v___x_5893_;
v_i_5835_ = v___x_5894_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5898_, lean_object* v_range_5899_, lean_object* v_b_5900_, lean_object* v_i_5901_){
_start:
{
lean_object* v_res_5902_; 
v_res_5902_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5898_, v_range_5899_, v_b_5900_, v_i_5901_);
lean_dec_ref(v_range_5899_);
lean_dec_ref(v_b_5898_);
return v_res_5902_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5906_){
_start:
{
lean_object* v___x_5907_; lean_object* v___x_5908_; 
v___x_5907_ = lean_unsigned_to_nat(0u);
v___x_5908_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5906_, v___x_5907_);
if (lean_obj_tag(v___x_5908_) == 0)
{
lean_object* v_a_5909_; lean_object* v___x_5911_; uint8_t v_isShared_5912_; uint8_t v_isSharedCheck_5916_; 
v_a_5909_ = lean_ctor_get(v___x_5908_, 0);
v_isSharedCheck_5916_ = !lean_is_exclusive(v___x_5908_);
if (v_isSharedCheck_5916_ == 0)
{
v___x_5911_ = v___x_5908_;
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
else
{
lean_inc(v_a_5909_);
lean_dec(v___x_5908_);
v___x_5911_ = lean_box(0);
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
v_resetjp_5910_:
{
lean_object* v___x_5914_; 
if (v_isShared_5912_ == 0)
{
v___x_5914_ = v___x_5911_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5915_; 
v_reuseFailAlloc_5915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5915_, 0, v_a_5909_);
v___x_5914_ = v_reuseFailAlloc_5915_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
return v___x_5914_;
}
}
}
else
{
lean_object* v_a_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v_a_5917_ = lean_ctor_get(v___x_5908_, 0);
lean_inc(v_a_5917_);
lean_dec_ref_known(v___x_5908_, 1);
v___x_5918_ = lean_unsigned_to_nat(8u);
v___x_5919_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5906_, v___x_5918_);
if (lean_obj_tag(v___x_5919_) == 0)
{
lean_object* v_a_5920_; lean_object* v___x_5922_; uint8_t v_isShared_5923_; uint8_t v_isSharedCheck_5927_; 
lean_dec(v_a_5917_);
v_a_5920_ = lean_ctor_get(v___x_5919_, 0);
v_isSharedCheck_5927_ = !lean_is_exclusive(v___x_5919_);
if (v_isSharedCheck_5927_ == 0)
{
v___x_5922_ = v___x_5919_;
v_isShared_5923_ = v_isSharedCheck_5927_;
goto v_resetjp_5921_;
}
else
{
lean_inc(v_a_5920_);
lean_dec(v___x_5919_);
v___x_5922_ = lean_box(0);
v_isShared_5923_ = v_isSharedCheck_5927_;
goto v_resetjp_5921_;
}
v_resetjp_5921_:
{
lean_object* v___x_5925_; 
if (v_isShared_5923_ == 0)
{
v___x_5925_ = v___x_5922_;
goto v_reusejp_5924_;
}
else
{
lean_object* v_reuseFailAlloc_5926_; 
v_reuseFailAlloc_5926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5926_, 0, v_a_5920_);
v___x_5925_ = v_reuseFailAlloc_5926_;
goto v_reusejp_5924_;
}
v_reusejp_5924_:
{
return v___x_5925_;
}
}
}
else
{
lean_object* v_a_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; 
v_a_5928_ = lean_ctor_get(v___x_5919_, 0);
lean_inc(v_a_5928_);
lean_dec_ref_known(v___x_5919_, 1);
v___x_5929_ = lean_unsigned_to_nat(1u);
v___x_5930_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5907_);
lean_ctor_set(v___x_5930_, 1, v_a_5928_);
lean_ctor_set(v___x_5930_, 2, v___x_5929_);
v___x_5931_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5932_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5906_, v___x_5930_, v___x_5931_, v___x_5907_);
lean_dec_ref_known(v___x_5930_, 3);
if (lean_obj_tag(v___x_5932_) == 0)
{
lean_object* v_a_5933_; lean_object* v___x_5935_; uint8_t v_isShared_5936_; uint8_t v_isSharedCheck_5940_; 
lean_dec(v_a_5917_);
v_a_5933_ = lean_ctor_get(v___x_5932_, 0);
v_isSharedCheck_5940_ = !lean_is_exclusive(v___x_5932_);
if (v_isSharedCheck_5940_ == 0)
{
v___x_5935_ = v___x_5932_;
v_isShared_5936_ = v_isSharedCheck_5940_;
goto v_resetjp_5934_;
}
else
{
lean_inc(v_a_5933_);
lean_dec(v___x_5932_);
v___x_5935_ = lean_box(0);
v_isShared_5936_ = v_isSharedCheck_5940_;
goto v_resetjp_5934_;
}
v_resetjp_5934_:
{
lean_object* v___x_5938_; 
if (v_isShared_5936_ == 0)
{
v___x_5938_ = v___x_5935_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v_a_5933_);
v___x_5938_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
return v___x_5938_;
}
}
}
else
{
lean_object* v_a_5941_; lean_object* v___x_5943_; uint8_t v_isShared_5944_; uint8_t v_isSharedCheck_5955_; 
v_a_5941_ = lean_ctor_get(v___x_5932_, 0);
v_isSharedCheck_5955_ = !lean_is_exclusive(v___x_5932_);
if (v_isSharedCheck_5955_ == 0)
{
v___x_5943_ = v___x_5932_;
v_isShared_5944_ = v_isSharedCheck_5955_;
goto v_resetjp_5942_;
}
else
{
lean_inc(v_a_5941_);
lean_dec(v___x_5932_);
v___x_5943_ = lean_box(0);
v_isShared_5944_ = v_isSharedCheck_5955_;
goto v_resetjp_5942_;
}
v_resetjp_5942_:
{
lean_object* v_fst_5945_; lean_object* v_snd_5946_; uint16_t v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5953_; 
v_fst_5945_ = lean_ctor_get(v_a_5941_, 0);
lean_inc(v_fst_5945_);
v_snd_5946_ = lean_ctor_get(v_a_5941_, 1);
lean_inc(v_snd_5946_);
lean_dec(v_a_5941_);
v___x_5947_ = lean_uint16_of_nat(v_a_5917_);
lean_dec(v_a_5917_);
v___x_5948_ = lean_byte_array_size(v_b_5906_);
v___x_5949_ = l_ByteArray_extract(v_b_5906_, v_fst_5945_, v___x_5948_);
v___x_5950_ = lean_box(0);
v___x_5951_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5951_, 0, v_snd_5946_);
lean_ctor_set(v___x_5951_, 1, v___x_5949_);
lean_ctor_set(v___x_5951_, 2, v___x_5950_);
lean_ctor_set_uint16(v___x_5951_, sizeof(void*)*3, v___x_5947_);
if (v_isShared_5944_ == 0)
{
lean_ctor_set(v___x_5943_, 0, v___x_5951_);
v___x_5953_ = v___x_5943_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5954_; 
v_reuseFailAlloc_5954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5954_, 0, v___x_5951_);
v___x_5953_ = v_reuseFailAlloc_5954_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
return v___x_5953_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5956_){
_start:
{
lean_object* v_res_5957_; 
v_res_5957_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5956_);
lean_dec_ref(v_b_5956_);
return v_res_5957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5958_, lean_object* v_range_5959_, lean_object* v_b_5960_, lean_object* v_i_5961_, lean_object* v_hs_5962_, lean_object* v_hl_5963_){
_start:
{
lean_object* v___x_5964_; 
v___x_5964_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5958_, v_range_5959_, v_b_5960_, v_i_5961_);
return v___x_5964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5965_, lean_object* v_range_5966_, lean_object* v_b_5967_, lean_object* v_i_5968_, lean_object* v_hs_5969_, lean_object* v_hl_5970_){
_start:
{
lean_object* v_res_5971_; 
v_res_5971_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5965_, v_range_5966_, v_b_5967_, v_i_5968_, v_hs_5969_, v_hl_5970_);
lean_dec_ref(v_range_5966_);
lean_dec_ref(v_b_5965_);
return v_res_5971_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5972_, lean_object* v_headers_5973_, lean_object* v_x_5974_){
_start:
{
if (lean_obj_tag(v_x_5974_) == 0)
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_5984_; 
lean_dec_ref(v_headers_5973_);
v_a_5976_ = lean_ctor_get(v_x_5974_, 0);
v_isSharedCheck_5984_ = !lean_is_exclusive(v_x_5974_);
if (v_isSharedCheck_5984_ == 0)
{
v___x_5978_ = v_x_5974_;
v_isShared_5979_ = v_isSharedCheck_5984_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v_x_5974_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_5984_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
lean_object* v___x_5981_; 
if (v_isShared_5979_ == 0)
{
v___x_5981_ = v___x_5978_;
goto v_reusejp_5980_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v_a_5976_);
v___x_5981_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5980_;
}
v_reusejp_5980_:
{
lean_object* v___x_5982_; 
v___x_5982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5982_, 0, v___x_5981_);
return v___x_5982_;
}
}
}
else
{
lean_object* v_a_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_5995_; 
v_a_5985_ = lean_ctor_get(v_x_5974_, 0);
v_isSharedCheck_5995_ = !lean_is_exclusive(v_x_5974_);
if (v_isSharedCheck_5995_ == 0)
{
v___x_5987_ = v_x_5974_;
v_isShared_5988_ = v_isSharedCheck_5995_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_a_5985_);
lean_dec(v_x_5974_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_5995_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5992_; 
v___x_5989_ = lean_box(0);
v___x_5990_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5990_, 0, v_headers_5973_);
lean_ctor_set(v___x_5990_, 1, v_a_5985_);
lean_ctor_set(v___x_5990_, 2, v___x_5989_);
lean_ctor_set_uint16(v___x_5990_, sizeof(void*)*3, v___y_5972_);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 0, v___x_5990_);
v___x_5992_ = v___x_5987_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5994_; 
v_reuseFailAlloc_5994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5994_, 0, v___x_5990_);
v___x_5992_ = v_reuseFailAlloc_5994_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
lean_object* v___x_5993_; 
v___x_5993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5993_, 0, v___x_5992_);
return v___x_5993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5996_, lean_object* v_headers_5997_, lean_object* v_x_5998_, lean_object* v___y_5999_){
_start:
{
uint16_t v___y_2853__boxed_6000_; lean_object* v_res_6001_; 
v___y_2853__boxed_6000_ = lean_unbox(v___y_5996_);
v_res_6001_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_6000_, v_headers_5997_, v_x_5998_);
return v_res_6001_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_6002_, lean_object* v___f_6003_, lean_object* v_x_6004_){
_start:
{
if (lean_obj_tag(v_x_6004_) == 0)
{
lean_object* v_a_6006_; lean_object* v___x_6008_; uint8_t v_isShared_6009_; uint8_t v_isSharedCheck_6014_; 
lean_dec_ref(v___f_6003_);
lean_dec(v_a_6002_);
v_a_6006_ = lean_ctor_get(v_x_6004_, 0);
v_isSharedCheck_6014_ = !lean_is_exclusive(v_x_6004_);
if (v_isSharedCheck_6014_ == 0)
{
v___x_6008_ = v_x_6004_;
v_isShared_6009_ = v_isSharedCheck_6014_;
goto v_resetjp_6007_;
}
else
{
lean_inc(v_a_6006_);
lean_dec(v_x_6004_);
v___x_6008_ = lean_box(0);
v_isShared_6009_ = v_isSharedCheck_6014_;
goto v_resetjp_6007_;
}
v_resetjp_6007_:
{
lean_object* v___x_6011_; 
if (v_isShared_6009_ == 0)
{
v___x_6011_ = v___x_6008_;
goto v_reusejp_6010_;
}
else
{
lean_object* v_reuseFailAlloc_6013_; 
v_reuseFailAlloc_6013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6013_, 0, v_a_6006_);
v___x_6011_ = v_reuseFailAlloc_6013_;
goto v_reusejp_6010_;
}
v_reusejp_6010_:
{
lean_object* v___x_6012_; 
v___x_6012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6012_, 0, v___x_6011_);
return v___x_6012_;
}
}
}
else
{
lean_object* v_a_6015_; lean_object* v___x_6017_; uint8_t v_isShared_6018_; uint8_t v_isSharedCheck_6039_; 
v_a_6015_ = lean_ctor_get(v_x_6004_, 0);
v_isSharedCheck_6039_ = !lean_is_exclusive(v_x_6004_);
if (v_isSharedCheck_6039_ == 0)
{
v___x_6017_ = v_x_6004_;
v_isShared_6018_ = v_isSharedCheck_6039_;
goto v_resetjp_6016_;
}
else
{
lean_inc(v_a_6015_);
lean_dec(v_x_6004_);
v___x_6017_ = lean_box(0);
v_isShared_6018_ = v_isSharedCheck_6039_;
goto v_resetjp_6016_;
}
v_resetjp_6016_:
{
lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; uint8_t v___x_6025_; lean_object* v_val_6027_; lean_object* v___x_6030_; 
v___x_6019_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6020_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6020_, 0, v_a_6002_);
lean_ctor_set(v___x_6020_, 1, v___x_6019_);
v___x_6021_ = lean_unsigned_to_nat(1u);
v___x_6022_ = lean_mk_empty_array_with_capacity(v___x_6021_);
v___x_6023_ = lean_array_push(v___x_6022_, v___x_6020_);
v___x_6024_ = lean_unsigned_to_nat(0u);
v___x_6025_ = 0;
v___x_6030_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_6015_, v___x_6023_);
if (lean_obj_tag(v___x_6030_) == 0)
{
lean_object* v_a_6031_; lean_object* v___x_6033_; 
v_a_6031_ = lean_ctor_get(v___x_6030_, 0);
lean_inc(v_a_6031_);
lean_dec_ref_known(v___x_6030_, 1);
if (v_isShared_6018_ == 0)
{
lean_ctor_set(v___x_6017_, 0, v_a_6031_);
v___x_6033_ = v___x_6017_;
goto v_reusejp_6032_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v_a_6031_);
v___x_6033_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6032_;
}
v_reusejp_6032_:
{
v_val_6027_ = v___x_6033_;
goto v___jp_6026_;
}
}
else
{
lean_object* v_a_6035_; lean_object* v___x_6037_; 
v_a_6035_ = lean_ctor_get(v___x_6030_, 0);
lean_inc(v_a_6035_);
lean_dec_ref_known(v___x_6030_, 1);
if (v_isShared_6018_ == 0)
{
lean_ctor_set_tag(v___x_6017_, 0);
lean_ctor_set(v___x_6017_, 0, v_a_6035_);
v___x_6037_ = v___x_6017_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6038_; 
v_reuseFailAlloc_6038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6038_, 0, v_a_6035_);
v___x_6037_ = v_reuseFailAlloc_6038_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
v_val_6027_ = v___x_6037_;
goto v___jp_6026_;
}
}
v___jp_6026_:
{
lean_object* v___x_6028_; lean_object* v___x_6029_; 
v___x_6028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6028_, 0, v_val_6027_);
v___x_6029_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6024_, v___x_6025_, v___x_6028_, v___f_6003_);
return v___x_6029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_6040_, lean_object* v___f_6041_, lean_object* v_x_6042_, lean_object* v___y_6043_){
_start:
{
lean_object* v_res_6044_; 
v_res_6044_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_6040_, v___f_6041_, v_x_6042_);
return v_res_6044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_6045_, lean_object* v_a_6046_, lean_object* v_x_6047_){
_start:
{
if (lean_obj_tag(v_x_6047_) == 0)
{
lean_object* v_a_6049_; lean_object* v___x_6051_; uint8_t v_isShared_6052_; uint8_t v_isSharedCheck_6057_; 
lean_dec(v_a_6046_);
lean_dec_ref(v___f_6045_);
v_a_6049_ = lean_ctor_get(v_x_6047_, 0);
v_isSharedCheck_6057_ = !lean_is_exclusive(v_x_6047_);
if (v_isSharedCheck_6057_ == 0)
{
v___x_6051_ = v_x_6047_;
v_isShared_6052_ = v_isSharedCheck_6057_;
goto v_resetjp_6050_;
}
else
{
lean_inc(v_a_6049_);
lean_dec(v_x_6047_);
v___x_6051_ = lean_box(0);
v_isShared_6052_ = v_isSharedCheck_6057_;
goto v_resetjp_6050_;
}
v_resetjp_6050_:
{
lean_object* v___x_6054_; 
if (v_isShared_6052_ == 0)
{
v___x_6054_ = v___x_6051_;
goto v_reusejp_6053_;
}
else
{
lean_object* v_reuseFailAlloc_6056_; 
v_reuseFailAlloc_6056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6056_, 0, v_a_6049_);
v___x_6054_ = v_reuseFailAlloc_6056_;
goto v_reusejp_6053_;
}
v_reusejp_6053_:
{
lean_object* v___x_6055_; 
v___x_6055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6055_, 0, v___x_6054_);
return v___x_6055_;
}
}
}
else
{
lean_object* v_a_6058_; lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6079_; 
v_a_6058_ = lean_ctor_get(v_x_6047_, 0);
v_isSharedCheck_6079_ = !lean_is_exclusive(v_x_6047_);
if (v_isSharedCheck_6079_ == 0)
{
v___x_6060_ = v_x_6047_;
v_isShared_6061_ = v_isSharedCheck_6079_;
goto v_resetjp_6059_;
}
else
{
lean_inc(v_a_6058_);
lean_dec(v_x_6047_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6079_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___f_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; uint8_t v___x_6065_; lean_object* v_val_6067_; lean_object* v___x_6070_; 
v___f_6062_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_6062_, 0, v_a_6058_);
lean_closure_set(v___f_6062_, 1, v___f_6045_);
v___x_6063_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_6064_ = lean_unsigned_to_nat(0u);
v___x_6065_ = 0;
v___x_6070_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6046_, v___x_6063_);
if (lean_obj_tag(v___x_6070_) == 0)
{
lean_object* v_a_6071_; lean_object* v___x_6073_; 
v_a_6071_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v_a_6071_);
lean_dec_ref_known(v___x_6070_, 1);
if (v_isShared_6061_ == 0)
{
lean_ctor_set(v___x_6060_, 0, v_a_6071_);
v___x_6073_ = v___x_6060_;
goto v_reusejp_6072_;
}
else
{
lean_object* v_reuseFailAlloc_6074_; 
v_reuseFailAlloc_6074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6074_, 0, v_a_6071_);
v___x_6073_ = v_reuseFailAlloc_6074_;
goto v_reusejp_6072_;
}
v_reusejp_6072_:
{
v_val_6067_ = v___x_6073_;
goto v___jp_6066_;
}
}
else
{
lean_object* v_a_6075_; lean_object* v___x_6077_; 
v_a_6075_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v_a_6075_);
lean_dec_ref_known(v___x_6070_, 1);
if (v_isShared_6061_ == 0)
{
lean_ctor_set_tag(v___x_6060_, 0);
lean_ctor_set(v___x_6060_, 0, v_a_6075_);
v___x_6077_ = v___x_6060_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6078_; 
v_reuseFailAlloc_6078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6078_, 0, v_a_6075_);
v___x_6077_ = v_reuseFailAlloc_6078_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
v_val_6067_ = v___x_6077_;
goto v___jp_6066_;
}
}
v___jp_6066_:
{
lean_object* v___x_6068_; lean_object* v___x_6069_; 
v___x_6068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6068_, 0, v_val_6067_);
v___x_6069_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6064_, v___x_6065_, v___x_6068_, v___f_6062_);
return v___x_6069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_6080_, lean_object* v_a_6081_, lean_object* v_x_6082_, lean_object* v___y_6083_){
_start:
{
lean_object* v_res_6084_; 
v_res_6084_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_6080_, v_a_6081_, v_x_6082_);
return v_res_6084_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_6085_, lean_object* v_a_6086_, lean_object* v_a_6087_, lean_object* v_headers_6088_){
_start:
{
lean_object* v___x_6090_; lean_object* v___f_6091_; lean_object* v___f_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; uint8_t v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; 
v___x_6090_ = lean_box(v___y_6085_);
v___f_6091_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_6091_, 0, v___x_6090_);
lean_closure_set(v___f_6091_, 1, v_headers_6088_);
v___f_6092_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_6092_, 0, v___f_6091_);
lean_closure_set(v___f_6092_, 1, v_a_6086_);
v___x_6093_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_6094_ = lean_unsigned_to_nat(0u);
v___x_6095_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_6096_ = 0;
v___x_6097_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_6087_, v___x_6093_, v___x_6095_);
v___x_6098_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6094_, v___x_6096_, v___x_6097_, v___f_6092_);
return v___x_6098_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_6099_, lean_object* v_a_6100_, lean_object* v_a_6101_, lean_object* v_headers_6102_, lean_object* v___y_6103_){
_start:
{
uint16_t v___y_3061__boxed_6104_; lean_object* v_res_6105_; 
v___y_3061__boxed_6104_ = lean_unbox(v___y_6099_);
v_res_6105_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_6104_, v_a_6100_, v_a_6101_, v_headers_6102_);
return v_res_6105_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_6106_, lean_object* v_x_6107_){
_start:
{
if (lean_obj_tag(v_x_6107_) == 0)
{
lean_object* v_a_6109_; lean_object* v___x_6111_; uint8_t v_isShared_6112_; uint8_t v_isSharedCheck_6117_; 
lean_dec_ref(v___f_6106_);
v_a_6109_ = lean_ctor_get(v_x_6107_, 0);
v_isSharedCheck_6117_ = !lean_is_exclusive(v_x_6107_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6111_ = v_x_6107_;
v_isShared_6112_ = v_isSharedCheck_6117_;
goto v_resetjp_6110_;
}
else
{
lean_inc(v_a_6109_);
lean_dec(v_x_6107_);
v___x_6111_ = lean_box(0);
v_isShared_6112_ = v_isSharedCheck_6117_;
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
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v_a_6109_);
v___x_6114_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6113_;
}
v_reusejp_6113_:
{
lean_object* v___x_6115_; 
v___x_6115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6115_, 0, v___x_6114_);
return v___x_6115_;
}
}
}
else
{
lean_object* v_a_6118_; lean_object* v___x_6119_; 
v_a_6118_ = lean_ctor_get(v_x_6107_, 0);
lean_inc(v_a_6118_);
lean_dec_ref_known(v_x_6107_, 1);
v___x_6119_ = lean_apply_2(v___f_6106_, v_a_6118_, lean_box(0));
return v___x_6119_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_6120_, lean_object* v_x_6121_, lean_object* v___y_6122_){
_start:
{
lean_object* v_res_6123_; 
v_res_6123_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_6120_, v_x_6121_);
return v_res_6123_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_6124_, lean_object* v___f_6125_, lean_object* v_x_6126_){
_start:
{
if (lean_obj_tag(v_x_6126_) == 0)
{
lean_object* v_a_6128_; lean_object* v___x_6130_; uint8_t v_isShared_6131_; uint8_t v_isSharedCheck_6136_; 
lean_dec_ref(v___f_6125_);
lean_dec(v_value_6124_);
v_a_6128_ = lean_ctor_get(v_x_6126_, 0);
v_isSharedCheck_6136_ = !lean_is_exclusive(v_x_6126_);
if (v_isSharedCheck_6136_ == 0)
{
v___x_6130_ = v_x_6126_;
v_isShared_6131_ = v_isSharedCheck_6136_;
goto v_resetjp_6129_;
}
else
{
lean_inc(v_a_6128_);
lean_dec(v_x_6126_);
v___x_6130_ = lean_box(0);
v_isShared_6131_ = v_isSharedCheck_6136_;
goto v_resetjp_6129_;
}
v_resetjp_6129_:
{
lean_object* v___x_6133_; 
if (v_isShared_6131_ == 0)
{
v___x_6133_ = v___x_6130_;
goto v_reusejp_6132_;
}
else
{
lean_object* v_reuseFailAlloc_6135_; 
v_reuseFailAlloc_6135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6135_, 0, v_a_6128_);
v___x_6133_ = v_reuseFailAlloc_6135_;
goto v_reusejp_6132_;
}
v_reusejp_6132_:
{
lean_object* v___x_6134_; 
v___x_6134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6134_, 0, v___x_6133_);
return v___x_6134_;
}
}
}
else
{
lean_object* v_a_6137_; lean_object* v___x_6139_; uint8_t v_isShared_6140_; uint8_t v_isSharedCheck_6162_; 
v_a_6137_ = lean_ctor_get(v_x_6126_, 0);
v_isSharedCheck_6162_ = !lean_is_exclusive(v_x_6126_);
if (v_isSharedCheck_6162_ == 0)
{
v___x_6139_ = v_x_6126_;
v_isShared_6140_ = v_isSharedCheck_6162_;
goto v_resetjp_6138_;
}
else
{
lean_inc(v_a_6137_);
lean_dec(v_x_6126_);
v___x_6139_ = lean_box(0);
v_isShared_6140_ = v_isSharedCheck_6162_;
goto v_resetjp_6138_;
}
v_resetjp_6138_:
{
lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; uint8_t v___x_6148_; lean_object* v_val_6150_; lean_object* v___x_6153_; 
v___x_6141_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_6142_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6143_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6143_, 0, v_value_6124_);
lean_ctor_set(v___x_6143_, 1, v___x_6142_);
v___x_6144_ = lean_unsigned_to_nat(1u);
v___x_6145_ = lean_mk_empty_array_with_capacity(v___x_6144_);
v___x_6146_ = lean_array_push(v___x_6145_, v___x_6143_);
v___x_6147_ = lean_unsigned_to_nat(0u);
v___x_6148_ = 0;
v___x_6153_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_6137_, v___x_6141_, v___x_6146_);
if (lean_obj_tag(v___x_6153_) == 0)
{
lean_object* v_a_6154_; lean_object* v___x_6156_; 
v_a_6154_ = lean_ctor_get(v___x_6153_, 0);
lean_inc(v_a_6154_);
lean_dec_ref_known(v___x_6153_, 1);
if (v_isShared_6140_ == 0)
{
lean_ctor_set(v___x_6139_, 0, v_a_6154_);
v___x_6156_ = v___x_6139_;
goto v_reusejp_6155_;
}
else
{
lean_object* v_reuseFailAlloc_6157_; 
v_reuseFailAlloc_6157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6157_, 0, v_a_6154_);
v___x_6156_ = v_reuseFailAlloc_6157_;
goto v_reusejp_6155_;
}
v_reusejp_6155_:
{
v_val_6150_ = v___x_6156_;
goto v___jp_6149_;
}
}
else
{
lean_object* v_a_6158_; lean_object* v___x_6160_; 
v_a_6158_ = lean_ctor_get(v___x_6153_, 0);
lean_inc(v_a_6158_);
lean_dec_ref_known(v___x_6153_, 1);
if (v_isShared_6140_ == 0)
{
lean_ctor_set_tag(v___x_6139_, 0);
lean_ctor_set(v___x_6139_, 0, v_a_6158_);
v___x_6160_ = v___x_6139_;
goto v_reusejp_6159_;
}
else
{
lean_object* v_reuseFailAlloc_6161_; 
v_reuseFailAlloc_6161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6161_, 0, v_a_6158_);
v___x_6160_ = v_reuseFailAlloc_6161_;
goto v_reusejp_6159_;
}
v_reusejp_6159_:
{
v_val_6150_ = v___x_6160_;
goto v___jp_6149_;
}
}
v___jp_6149_:
{
lean_object* v___x_6151_; lean_object* v___x_6152_; 
v___x_6151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6151_, 0, v_val_6150_);
v___x_6152_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6147_, v___x_6148_, v___x_6151_, v___f_6125_);
return v___x_6152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_6163_, lean_object* v___f_6164_, lean_object* v_x_6165_, lean_object* v___y_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_6163_, v___f_6164_, v_x_6165_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_6172_, lean_object* v_a_6173_, lean_object* v___x_6174_, lean_object* v___x_6175_, lean_object* v_x_6176_){
_start:
{
lean_object* v___y_6179_; lean_object* v___y_6180_; uint8_t v___y_6181_; lean_object* v_val_6182_; 
if (lean_obj_tag(v_x_6176_) == 0)
{
lean_object* v_a_6185_; lean_object* v___x_6187_; uint8_t v_isShared_6188_; uint8_t v_isSharedCheck_6193_; 
lean_dec(v_a_6173_);
lean_dec(v_a_6172_);
v_a_6185_ = lean_ctor_get(v_x_6176_, 0);
v_isSharedCheck_6193_ = !lean_is_exclusive(v_x_6176_);
if (v_isSharedCheck_6193_ == 0)
{
v___x_6187_ = v_x_6176_;
v_isShared_6188_ = v_isSharedCheck_6193_;
goto v_resetjp_6186_;
}
else
{
lean_inc(v_a_6185_);
lean_dec(v_x_6176_);
v___x_6187_ = lean_box(0);
v_isShared_6188_ = v_isSharedCheck_6193_;
goto v_resetjp_6186_;
}
v_resetjp_6186_:
{
lean_object* v___x_6190_; 
if (v_isShared_6188_ == 0)
{
v___x_6190_ = v___x_6187_;
goto v_reusejp_6189_;
}
else
{
lean_object* v_reuseFailAlloc_6192_; 
v_reuseFailAlloc_6192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6192_, 0, v_a_6185_);
v___x_6190_ = v_reuseFailAlloc_6192_;
goto v_reusejp_6189_;
}
v_reusejp_6189_:
{
lean_object* v___x_6191_; 
v___x_6191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6191_, 0, v___x_6190_);
return v___x_6191_;
}
}
}
else
{
lean_object* v_a_6194_; lean_object* v___x_6196_; uint8_t v_isShared_6197_; uint8_t v_isSharedCheck_6227_; 
v_a_6194_ = lean_ctor_get(v_x_6176_, 0);
v_isSharedCheck_6227_ = !lean_is_exclusive(v_x_6176_);
if (v_isSharedCheck_6227_ == 0)
{
v___x_6196_ = v_x_6176_;
v_isShared_6197_ = v_isSharedCheck_6227_;
goto v_resetjp_6195_;
}
else
{
lean_inc(v_a_6194_);
lean_dec(v_x_6176_);
v___x_6196_ = lean_box(0);
v_isShared_6197_ = v_isSharedCheck_6227_;
goto v_resetjp_6195_;
}
v_resetjp_6195_:
{
uint16_t v___y_6199_; lean_object* v___x_6223_; 
v___x_6223_ = l_Lasm_JS_Data_field(v_a_6194_, v___x_6175_);
if (lean_obj_tag(v___x_6223_) == 3)
{
double v_n_6224_; uint16_t v___x_6225_; 
v_n_6224_ = lean_ctor_get_float(v___x_6223_, 0);
lean_dec_ref_known(v___x_6223_, 0);
v___x_6225_ = lean_float_to_uint16(v_n_6224_);
v___y_6199_ = v___x_6225_;
goto v___jp_6198_;
}
else
{
uint16_t v___x_6226_; 
lean_dec(v___x_6223_);
v___x_6226_ = 0;
v___y_6199_ = v___x_6226_;
goto v___jp_6198_;
}
v___jp_6198_:
{
lean_object* v___x_6200_; lean_object* v___f_6201_; lean_object* v___x_6202_; 
v___x_6200_ = lean_box(v___y_6199_);
lean_inc(v_a_6172_);
v___f_6201_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_6201_, 0, v___x_6200_);
lean_closure_set(v___f_6201_, 1, v_a_6172_);
lean_closure_set(v___f_6201_, 2, v_a_6173_);
v___x_6202_ = l_Lasm_JS_Data_field(v_a_6194_, v___x_6174_);
lean_dec(v_a_6194_);
if (lean_obj_tag(v___x_6202_) == 9)
{
lean_object* v_value_6203_; lean_object* v___f_6204_; lean_object* v___f_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; uint8_t v___x_6208_; lean_object* v___x_6209_; 
v_value_6203_ = lean_ctor_get(v___x_6202_, 0);
lean_inc(v_value_6203_);
lean_dec_ref_known(v___x_6202_, 2);
v___f_6204_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6204_, 0, v___f_6201_);
v___f_6205_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_6205_, 0, v_value_6203_);
lean_closure_set(v___f_6205_, 1, v___f_6204_);
v___x_6206_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_6207_ = lean_unsigned_to_nat(0u);
v___x_6208_ = 0;
v___x_6209_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6172_, v___x_6206_);
if (lean_obj_tag(v___x_6209_) == 0)
{
lean_object* v_a_6210_; lean_object* v___x_6212_; 
v_a_6210_ = lean_ctor_get(v___x_6209_, 0);
lean_inc(v_a_6210_);
lean_dec_ref_known(v___x_6209_, 1);
if (v_isShared_6197_ == 0)
{
lean_ctor_set(v___x_6196_, 0, v_a_6210_);
v___x_6212_ = v___x_6196_;
goto v_reusejp_6211_;
}
else
{
lean_object* v_reuseFailAlloc_6213_; 
v_reuseFailAlloc_6213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6213_, 0, v_a_6210_);
v___x_6212_ = v_reuseFailAlloc_6213_;
goto v_reusejp_6211_;
}
v_reusejp_6211_:
{
v___y_6179_ = v___f_6205_;
v___y_6180_ = v___x_6207_;
v___y_6181_ = v___x_6208_;
v_val_6182_ = v___x_6212_;
goto v___jp_6178_;
}
}
else
{
lean_object* v_a_6214_; lean_object* v___x_6216_; 
v_a_6214_ = lean_ctor_get(v___x_6209_, 0);
lean_inc(v_a_6214_);
lean_dec_ref_known(v___x_6209_, 1);
if (v_isShared_6197_ == 0)
{
lean_ctor_set_tag(v___x_6196_, 0);
lean_ctor_set(v___x_6196_, 0, v_a_6214_);
v___x_6216_ = v___x_6196_;
goto v_reusejp_6215_;
}
else
{
lean_object* v_reuseFailAlloc_6217_; 
v_reuseFailAlloc_6217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6217_, 0, v_a_6214_);
v___x_6216_ = v_reuseFailAlloc_6217_;
goto v_reusejp_6215_;
}
v_reusejp_6215_:
{
v___y_6179_ = v___f_6205_;
v___y_6180_ = v___x_6207_;
v___y_6181_ = v___x_6208_;
v_val_6182_ = v___x_6216_;
goto v___jp_6178_;
}
}
}
else
{
lean_object* v___f_6218_; lean_object* v___x_6219_; uint8_t v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; 
lean_dec(v___x_6202_);
lean_del_object(v___x_6196_);
lean_dec(v_a_6172_);
v___f_6218_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6218_, 0, v___f_6201_);
v___x_6219_ = lean_unsigned_to_nat(0u);
v___x_6220_ = 0;
v___x_6221_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_6222_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6219_, v___x_6220_, v___x_6221_, v___f_6218_);
return v___x_6222_;
}
}
}
}
v___jp_6178_:
{
lean_object* v___x_6183_; lean_object* v___x_6184_; 
v___x_6183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6183_, 0, v_val_6182_);
v___x_6184_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6180_, v___y_6181_, v___x_6183_, v___y_6179_);
return v___x_6184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_6228_, lean_object* v_a_6229_, lean_object* v___x_6230_, lean_object* v___x_6231_, lean_object* v_x_6232_, lean_object* v___y_6233_){
_start:
{
lean_object* v_res_6234_; 
v_res_6234_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_6228_, v_a_6229_, v___x_6230_, v___x_6231_, v_x_6232_);
lean_dec_ref(v___x_6231_);
lean_dec_ref(v___x_6230_);
return v_res_6234_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; 
v___x_6235_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_6236_ = lean_unsigned_to_nat(2u);
v___x_6237_ = lean_mk_empty_array_with_capacity(v___x_6236_);
v___x_6238_ = lean_array_push(v___x_6237_, v___x_6235_);
return v___x_6238_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_6239_, lean_object* v___x_6240_, lean_object* v_x_6241_){
_start:
{
if (lean_obj_tag(v_x_6241_) == 0)
{
lean_object* v_a_6243_; lean_object* v___x_6245_; uint8_t v_isShared_6246_; uint8_t v_isSharedCheck_6251_; 
lean_dec_ref(v___x_6240_);
lean_dec(v_a_6239_);
v_a_6243_ = lean_ctor_get(v_x_6241_, 0);
v_isSharedCheck_6251_ = !lean_is_exclusive(v_x_6241_);
if (v_isSharedCheck_6251_ == 0)
{
v___x_6245_ = v_x_6241_;
v_isShared_6246_ = v_isSharedCheck_6251_;
goto v_resetjp_6244_;
}
else
{
lean_inc(v_a_6243_);
lean_dec(v_x_6241_);
v___x_6245_ = lean_box(0);
v_isShared_6246_ = v_isSharedCheck_6251_;
goto v_resetjp_6244_;
}
v_resetjp_6244_:
{
lean_object* v___x_6248_; 
if (v_isShared_6246_ == 0)
{
v___x_6248_ = v___x_6245_;
goto v_reusejp_6247_;
}
else
{
lean_object* v_reuseFailAlloc_6250_; 
v_reuseFailAlloc_6250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6250_, 0, v_a_6243_);
v___x_6248_ = v_reuseFailAlloc_6250_;
goto v_reusejp_6247_;
}
v_reusejp_6247_:
{
lean_object* v___x_6249_; 
v___x_6249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6249_, 0, v___x_6248_);
return v___x_6249_;
}
}
}
else
{
lean_object* v_a_6252_; lean_object* v___x_6254_; uint8_t v_isShared_6255_; uint8_t v_isSharedCheck_6275_; 
v_a_6252_ = lean_ctor_get(v_x_6241_, 0);
v_isSharedCheck_6275_ = !lean_is_exclusive(v_x_6241_);
if (v_isSharedCheck_6275_ == 0)
{
v___x_6254_ = v_x_6241_;
v_isShared_6255_ = v_isSharedCheck_6275_;
goto v_resetjp_6253_;
}
else
{
lean_inc(v_a_6252_);
lean_dec(v_x_6241_);
v___x_6254_ = lean_box(0);
v_isShared_6255_ = v_isSharedCheck_6275_;
goto v_resetjp_6253_;
}
v_resetjp_6253_:
{
lean_object* v___x_6256_; lean_object* v___f_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; uint8_t v___x_6261_; lean_object* v_val_6263_; lean_object* v___x_6266_; 
v___x_6256_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_6240_);
lean_inc(v_a_6252_);
v___f_6257_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_6257_, 0, v_a_6239_);
lean_closure_set(v___f_6257_, 1, v_a_6252_);
lean_closure_set(v___f_6257_, 2, v___x_6240_);
lean_closure_set(v___f_6257_, 3, v___x_6256_);
v___x_6258_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_6259_ = lean_array_push(v___x_6258_, v___x_6240_);
v___x_6260_ = lean_unsigned_to_nat(0u);
v___x_6261_ = 0;
v___x_6266_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_6252_, v___x_6259_);
if (lean_obj_tag(v___x_6266_) == 0)
{
lean_object* v_a_6267_; lean_object* v___x_6269_; 
v_a_6267_ = lean_ctor_get(v___x_6266_, 0);
lean_inc(v_a_6267_);
lean_dec_ref_known(v___x_6266_, 1);
if (v_isShared_6255_ == 0)
{
lean_ctor_set(v___x_6254_, 0, v_a_6267_);
v___x_6269_ = v___x_6254_;
goto v_reusejp_6268_;
}
else
{
lean_object* v_reuseFailAlloc_6270_; 
v_reuseFailAlloc_6270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6270_, 0, v_a_6267_);
v___x_6269_ = v_reuseFailAlloc_6270_;
goto v_reusejp_6268_;
}
v_reusejp_6268_:
{
v_val_6263_ = v___x_6269_;
goto v___jp_6262_;
}
}
else
{
lean_object* v_a_6271_; lean_object* v___x_6273_; 
v_a_6271_ = lean_ctor_get(v___x_6266_, 0);
lean_inc(v_a_6271_);
lean_dec_ref_known(v___x_6266_, 1);
if (v_isShared_6255_ == 0)
{
lean_ctor_set_tag(v___x_6254_, 0);
lean_ctor_set(v___x_6254_, 0, v_a_6271_);
v___x_6273_ = v___x_6254_;
goto v_reusejp_6272_;
}
else
{
lean_object* v_reuseFailAlloc_6274_; 
v_reuseFailAlloc_6274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6274_, 0, v_a_6271_);
v___x_6273_ = v_reuseFailAlloc_6274_;
goto v_reusejp_6272_;
}
v_reusejp_6272_:
{
v_val_6263_ = v___x_6273_;
goto v___jp_6262_;
}
}
v___jp_6262_:
{
lean_object* v___x_6264_; lean_object* v___x_6265_; 
v___x_6264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6264_, 0, v_val_6263_);
v___x_6265_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6260_, v___x_6261_, v___x_6264_, v___f_6257_);
return v___x_6265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6276_, lean_object* v___x_6277_, lean_object* v_x_6278_, lean_object* v___y_6279_){
_start:
{
lean_object* v_res_6280_; 
v_res_6280_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6276_, v___x_6277_, v_x_6278_);
return v_res_6280_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6282_; uint8_t v___x_6283_; uint64_t v___x_6284_; 
v___x_6282_ = 0ULL;
v___x_6283_ = 0;
v___x_6284_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6283_, v___x_6282_);
return v___x_6284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6285_, lean_object* v_args_6286_, lean_object* v_this_6287_){
_start:
{
lean_object* v___x_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; uint32_t v___x_6292_; uint64_t v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; 
v___x_6289_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6290_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6290_, 0, v_f_6285_);
lean_ctor_set(v___x_6290_, 1, v___x_6289_);
v___x_6291_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6292_ = 205;
v___x_6293_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6294_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6294_, 0, v_args_6286_);
v___x_6295_ = lean_unsigned_to_nat(3u);
v___x_6296_ = lean_mk_empty_array_with_capacity(v___x_6295_);
v___x_6297_ = lean_array_push(v___x_6296_, v___x_6290_);
v___x_6298_ = lean_array_push(v___x_6297_, v_this_6287_);
v___x_6299_ = lean_array_push(v___x_6298_, v___x_6294_);
v___x_6300_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6300_, 0, v___x_6299_);
v___x_6301_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6291_, v___x_6292_, v___x_6293_, v___x_6300_, v___x_6289_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6302_, lean_object* v_args_6303_, lean_object* v_this_6304_, lean_object* v___y_6305_){
_start:
{
lean_object* v_res_6306_; 
v_res_6306_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6302_, v_args_6303_, v_this_6304_);
return v_res_6306_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6317_, lean_object* v_a_6318_, lean_object* v_x_6319_){
_start:
{
if (lean_obj_tag(v_x_6319_) == 0)
{
lean_object* v_a_6321_; lean_object* v___x_6323_; uint8_t v_isShared_6324_; uint8_t v_isSharedCheck_6329_; 
lean_dec(v_a_6318_);
lean_dec_ref(v_req_6317_);
v_a_6321_ = lean_ctor_get(v_x_6319_, 0);
v_isSharedCheck_6329_ = !lean_is_exclusive(v_x_6319_);
if (v_isSharedCheck_6329_ == 0)
{
v___x_6323_ = v_x_6319_;
v_isShared_6324_ = v_isSharedCheck_6329_;
goto v_resetjp_6322_;
}
else
{
lean_inc(v_a_6321_);
lean_dec(v_x_6319_);
v___x_6323_ = lean_box(0);
v_isShared_6324_ = v_isSharedCheck_6329_;
goto v_resetjp_6322_;
}
v_resetjp_6322_:
{
lean_object* v___x_6326_; 
if (v_isShared_6324_ == 0)
{
v___x_6326_ = v___x_6323_;
goto v_reusejp_6325_;
}
else
{
lean_object* v_reuseFailAlloc_6328_; 
v_reuseFailAlloc_6328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6328_, 0, v_a_6321_);
v___x_6326_ = v_reuseFailAlloc_6328_;
goto v_reusejp_6325_;
}
v_reusejp_6325_:
{
lean_object* v___x_6327_; 
v___x_6327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6327_, 0, v___x_6326_);
return v___x_6327_;
}
}
}
else
{
lean_object* v_a_6330_; lean_object* v_method_6331_; lean_object* v_url_6332_; lean_object* v_headers_6333_; lean_object* v_body_6334_; lean_object* v___y_6336_; lean_object* v___x_6366_; uint8_t v___x_6367_; 
v_a_6330_ = lean_ctor_get(v_x_6319_, 0);
lean_inc(v_a_6330_);
lean_dec_ref_known(v_x_6319_, 1);
v_method_6331_ = lean_ctor_get(v_req_6317_, 0);
lean_inc_ref(v_method_6331_);
v_url_6332_ = lean_ctor_get(v_req_6317_, 1);
lean_inc_ref(v_url_6332_);
v_headers_6333_ = lean_ctor_get(v_req_6317_, 2);
lean_inc_ref(v_headers_6333_);
v_body_6334_ = lean_ctor_get(v_req_6317_, 3);
lean_inc_ref(v_body_6334_);
lean_dec_ref(v_req_6317_);
v___x_6366_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6367_ = lean_string_dec_eq(v_method_6331_, v___x_6366_);
if (v___x_6367_ == 0)
{
lean_object* v___x_6368_; uint8_t v___x_6369_; 
v___x_6368_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6369_ = lean_string_dec_eq(v_method_6331_, v___x_6368_);
if (v___x_6369_ == 0)
{
lean_object* v___x_6370_; 
v___x_6370_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6370_, 0, v_body_6334_);
v___y_6336_ = v___x_6370_;
goto v___jp_6335_;
}
else
{
lean_dec_ref(v_body_6334_);
goto v___jp_6364_;
}
}
else
{
lean_dec_ref(v_body_6334_);
goto v___jp_6364_;
}
v___jp_6335_:
{
lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___f_6341_; size_t v_sz_6342_; size_t v___x_6343_; lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; uint8_t v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; 
v___x_6337_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6338_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6338_, 0, v_method_6331_);
v___x_6339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6339_, 0, v___x_6337_);
lean_ctor_set(v___x_6339_, 1, v___x_6338_);
v___x_6340_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6341_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6341_, 0, v_a_6318_);
lean_closure_set(v___f_6341_, 1, v___x_6340_);
v_sz_6342_ = lean_array_size(v_headers_6333_);
v___x_6343_ = ((size_t)0ULL);
v___x_6344_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6342_, v___x_6343_, v_headers_6333_);
v___x_6345_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6345_, 0, v___x_6344_);
v___x_6346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6346_, 0, v___x_6340_);
lean_ctor_set(v___x_6346_, 1, v___x_6345_);
v___x_6347_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6348_, 0, v___x_6347_);
lean_ctor_set(v___x_6348_, 1, v___y_6336_);
v___x_6349_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6350_, 0, v___x_6348_);
lean_ctor_set(v___x_6350_, 1, v___x_6349_);
v___x_6351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6351_, 0, v___x_6346_);
lean_ctor_set(v___x_6351_, 1, v___x_6350_);
v___x_6352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6352_, 0, v___x_6339_);
lean_ctor_set(v___x_6352_, 1, v___x_6351_);
v___x_6353_ = l_Lasm_JS_obj(v___x_6352_);
v___x_6354_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6354_, 0, v_url_6332_);
v___x_6355_ = lean_unsigned_to_nat(2u);
v___x_6356_ = lean_mk_empty_array_with_capacity(v___x_6355_);
v___x_6357_ = lean_array_push(v___x_6356_, v___x_6354_);
v___x_6358_ = lean_array_push(v___x_6357_, v___x_6353_);
v___x_6359_ = lean_box(0);
v___x_6360_ = lean_unsigned_to_nat(0u);
v___x_6361_ = 0;
v___x_6362_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6330_, v___x_6358_, v___x_6359_);
v___x_6363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6360_, v___x_6361_, v___x_6362_, v___f_6341_);
return v___x_6363_;
}
v___jp_6364_:
{
lean_object* v___x_6365_; 
v___x_6365_ = lean_box(0);
v___y_6336_ = v___x_6365_;
goto v___jp_6335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6371_, lean_object* v_a_6372_, lean_object* v_x_6373_, lean_object* v___y_6374_){
_start:
{
lean_object* v_res_6375_; 
v_res_6375_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6371_, v_a_6372_, v_x_6373_);
return v_res_6375_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6377_, lean_object* v_x_6378_){
_start:
{
if (lean_obj_tag(v_x_6378_) == 0)
{
lean_object* v_a_6380_; lean_object* v___x_6382_; uint8_t v_isShared_6383_; uint8_t v_isSharedCheck_6388_; 
lean_dec_ref(v_req_6377_);
v_a_6380_ = lean_ctor_get(v_x_6378_, 0);
v_isSharedCheck_6388_ = !lean_is_exclusive(v_x_6378_);
if (v_isSharedCheck_6388_ == 0)
{
v___x_6382_ = v_x_6378_;
v_isShared_6383_ = v_isSharedCheck_6388_;
goto v_resetjp_6381_;
}
else
{
lean_inc(v_a_6380_);
lean_dec(v_x_6378_);
v___x_6382_ = lean_box(0);
v_isShared_6383_ = v_isSharedCheck_6388_;
goto v_resetjp_6381_;
}
v_resetjp_6381_:
{
lean_object* v___x_6385_; 
if (v_isShared_6383_ == 0)
{
v___x_6385_ = v___x_6382_;
goto v_reusejp_6384_;
}
else
{
lean_object* v_reuseFailAlloc_6387_; 
v_reuseFailAlloc_6387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6387_, 0, v_a_6380_);
v___x_6385_ = v_reuseFailAlloc_6387_;
goto v_reusejp_6384_;
}
v_reusejp_6384_:
{
lean_object* v___x_6386_; 
v___x_6386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6386_, 0, v___x_6385_);
return v___x_6386_;
}
}
}
else
{
lean_object* v_a_6389_; lean_object* v___x_6391_; uint8_t v_isShared_6392_; uint8_t v_isSharedCheck_6410_; 
v_a_6389_ = lean_ctor_get(v_x_6378_, 0);
v_isSharedCheck_6410_ = !lean_is_exclusive(v_x_6378_);
if (v_isSharedCheck_6410_ == 0)
{
v___x_6391_ = v_x_6378_;
v_isShared_6392_ = v_isSharedCheck_6410_;
goto v_resetjp_6390_;
}
else
{
lean_inc(v_a_6389_);
lean_dec(v_x_6378_);
v___x_6391_ = lean_box(0);
v_isShared_6392_ = v_isSharedCheck_6410_;
goto v_resetjp_6390_;
}
v_resetjp_6390_:
{
lean_object* v___f_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; uint8_t v___x_6396_; lean_object* v_val_6398_; lean_object* v___x_6401_; 
lean_inc(v_a_6389_);
v___f_6393_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6393_, 0, v_req_6377_);
lean_closure_set(v___f_6393_, 1, v_a_6389_);
v___x_6394_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6395_ = lean_unsigned_to_nat(0u);
v___x_6396_ = 0;
v___x_6401_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6389_, v___x_6394_);
if (lean_obj_tag(v___x_6401_) == 0)
{
lean_object* v_a_6402_; lean_object* v___x_6404_; 
v_a_6402_ = lean_ctor_get(v___x_6401_, 0);
lean_inc(v_a_6402_);
lean_dec_ref_known(v___x_6401_, 1);
if (v_isShared_6392_ == 0)
{
lean_ctor_set(v___x_6391_, 0, v_a_6402_);
v___x_6404_ = v___x_6391_;
goto v_reusejp_6403_;
}
else
{
lean_object* v_reuseFailAlloc_6405_; 
v_reuseFailAlloc_6405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6405_, 0, v_a_6402_);
v___x_6404_ = v_reuseFailAlloc_6405_;
goto v_reusejp_6403_;
}
v_reusejp_6403_:
{
v_val_6398_ = v___x_6404_;
goto v___jp_6397_;
}
}
else
{
lean_object* v_a_6406_; lean_object* v___x_6408_; 
v_a_6406_ = lean_ctor_get(v___x_6401_, 0);
lean_inc(v_a_6406_);
lean_dec_ref_known(v___x_6401_, 1);
if (v_isShared_6392_ == 0)
{
lean_ctor_set_tag(v___x_6391_, 0);
lean_ctor_set(v___x_6391_, 0, v_a_6406_);
v___x_6408_ = v___x_6391_;
goto v_reusejp_6407_;
}
else
{
lean_object* v_reuseFailAlloc_6409_; 
v_reuseFailAlloc_6409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6409_, 0, v_a_6406_);
v___x_6408_ = v_reuseFailAlloc_6409_;
goto v_reusejp_6407_;
}
v_reusejp_6407_:
{
v_val_6398_ = v___x_6408_;
goto v___jp_6397_;
}
}
v___jp_6397_:
{
lean_object* v___x_6399_; lean_object* v___x_6400_; 
v___x_6399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6399_, 0, v_val_6398_);
v___x_6400_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6395_, v___x_6396_, v___x_6399_, v___f_6393_);
return v___x_6400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6411_, lean_object* v_x_6412_, lean_object* v___y_6413_){
_start:
{
lean_object* v_res_6414_; 
v_res_6414_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6411_, v_x_6412_);
return v_res_6414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6415_){
_start:
{
lean_object* v___f_6417_; lean_object* v___x_6418_; uint8_t v___x_6419_; lean_object* v_val_6421_; lean_object* v___x_6424_; 
v___f_6417_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6417_, 0, v_req_6415_);
v___x_6418_ = lean_unsigned_to_nat(0u);
v___x_6419_ = 0;
v___x_6424_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6424_) == 0)
{
lean_object* v_a_6425_; lean_object* v___x_6427_; uint8_t v_isShared_6428_; uint8_t v_isSharedCheck_6432_; 
v_a_6425_ = lean_ctor_get(v___x_6424_, 0);
v_isSharedCheck_6432_ = !lean_is_exclusive(v___x_6424_);
if (v_isSharedCheck_6432_ == 0)
{
v___x_6427_ = v___x_6424_;
v_isShared_6428_ = v_isSharedCheck_6432_;
goto v_resetjp_6426_;
}
else
{
lean_inc(v_a_6425_);
lean_dec(v___x_6424_);
v___x_6427_ = lean_box(0);
v_isShared_6428_ = v_isSharedCheck_6432_;
goto v_resetjp_6426_;
}
v_resetjp_6426_:
{
lean_object* v___x_6430_; 
if (v_isShared_6428_ == 0)
{
lean_ctor_set_tag(v___x_6427_, 1);
v___x_6430_ = v___x_6427_;
goto v_reusejp_6429_;
}
else
{
lean_object* v_reuseFailAlloc_6431_; 
v_reuseFailAlloc_6431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6431_, 0, v_a_6425_);
v___x_6430_ = v_reuseFailAlloc_6431_;
goto v_reusejp_6429_;
}
v_reusejp_6429_:
{
v_val_6421_ = v___x_6430_;
goto v___jp_6420_;
}
}
}
else
{
lean_object* v_a_6433_; lean_object* v___x_6435_; uint8_t v_isShared_6436_; uint8_t v_isSharedCheck_6440_; 
v_a_6433_ = lean_ctor_get(v___x_6424_, 0);
v_isSharedCheck_6440_ = !lean_is_exclusive(v___x_6424_);
if (v_isSharedCheck_6440_ == 0)
{
v___x_6435_ = v___x_6424_;
v_isShared_6436_ = v_isSharedCheck_6440_;
goto v_resetjp_6434_;
}
else
{
lean_inc(v_a_6433_);
lean_dec(v___x_6424_);
v___x_6435_ = lean_box(0);
v_isShared_6436_ = v_isSharedCheck_6440_;
goto v_resetjp_6434_;
}
v_resetjp_6434_:
{
lean_object* v___x_6438_; 
if (v_isShared_6436_ == 0)
{
lean_ctor_set_tag(v___x_6435_, 0);
v___x_6438_ = v___x_6435_;
goto v_reusejp_6437_;
}
else
{
lean_object* v_reuseFailAlloc_6439_; 
v_reuseFailAlloc_6439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6439_, 0, v_a_6433_);
v___x_6438_ = v_reuseFailAlloc_6439_;
goto v_reusejp_6437_;
}
v_reusejp_6437_:
{
v_val_6421_ = v___x_6438_;
goto v___jp_6420_;
}
}
}
v___jp_6420_:
{
lean_object* v___x_6422_; lean_object* v___x_6423_; 
v___x_6422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6422_, 0, v_val_6421_);
v___x_6423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6418_, v___x_6419_, v___x_6422_, v___f_6417_);
return v___x_6423_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6441_, lean_object* v_a_6442_){
_start:
{
lean_object* v_res_6443_; 
v_res_6443_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6441_);
return v_res_6443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6444_){
_start:
{
if (lean_obj_tag(v_x_6444_) == 0)
{
lean_object* v_a_6446_; lean_object* v___x_6448_; uint8_t v_isShared_6449_; uint8_t v_isSharedCheck_6454_; 
v_a_6446_ = lean_ctor_get(v_x_6444_, 0);
v_isSharedCheck_6454_ = !lean_is_exclusive(v_x_6444_);
if (v_isSharedCheck_6454_ == 0)
{
v___x_6448_ = v_x_6444_;
v_isShared_6449_ = v_isSharedCheck_6454_;
goto v_resetjp_6447_;
}
else
{
lean_inc(v_a_6446_);
lean_dec(v_x_6444_);
v___x_6448_ = lean_box(0);
v_isShared_6449_ = v_isSharedCheck_6454_;
goto v_resetjp_6447_;
}
v_resetjp_6447_:
{
lean_object* v___x_6451_; 
if (v_isShared_6449_ == 0)
{
v___x_6451_ = v___x_6448_;
goto v_reusejp_6450_;
}
else
{
lean_object* v_reuseFailAlloc_6453_; 
v_reuseFailAlloc_6453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6453_, 0, v_a_6446_);
v___x_6451_ = v_reuseFailAlloc_6453_;
goto v_reusejp_6450_;
}
v_reusejp_6450_:
{
lean_object* v___x_6452_; 
v___x_6452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6452_, 0, v___x_6451_);
return v___x_6452_;
}
}
}
else
{
lean_object* v_a_6455_; lean_object* v___x_6456_; 
v_a_6455_ = lean_ctor_get(v_x_6444_, 0);
lean_inc(v_a_6455_);
lean_dec_ref_known(v_x_6444_, 1);
v___x_6456_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6455_);
lean_dec(v_a_6455_);
if (lean_obj_tag(v___x_6456_) == 0)
{
lean_object* v_a_6457_; lean_object* v___x_6459_; uint8_t v_isShared_6460_; uint8_t v_isSharedCheck_6466_; 
v_a_6457_ = lean_ctor_get(v___x_6456_, 0);
v_isSharedCheck_6466_ = !lean_is_exclusive(v___x_6456_);
if (v_isSharedCheck_6466_ == 0)
{
v___x_6459_ = v___x_6456_;
v_isShared_6460_ = v_isSharedCheck_6466_;
goto v_resetjp_6458_;
}
else
{
lean_inc(v_a_6457_);
lean_dec(v___x_6456_);
v___x_6459_ = lean_box(0);
v_isShared_6460_ = v_isSharedCheck_6466_;
goto v_resetjp_6458_;
}
v_resetjp_6458_:
{
lean_object* v___x_6461_; lean_object* v___x_6463_; 
v___x_6461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6461_, 0, v_a_6457_);
if (v_isShared_6460_ == 0)
{
lean_ctor_set(v___x_6459_, 0, v___x_6461_);
v___x_6463_ = v___x_6459_;
goto v_reusejp_6462_;
}
else
{
lean_object* v_reuseFailAlloc_6465_; 
v_reuseFailAlloc_6465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6465_, 0, v___x_6461_);
v___x_6463_ = v_reuseFailAlloc_6465_;
goto v_reusejp_6462_;
}
v_reusejp_6462_:
{
lean_object* v___x_6464_; 
v___x_6464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6464_, 0, v___x_6463_);
return v___x_6464_;
}
}
}
else
{
lean_object* v_a_6467_; lean_object* v___x_6469_; uint8_t v_isShared_6470_; uint8_t v_isSharedCheck_6475_; 
v_a_6467_ = lean_ctor_get(v___x_6456_, 0);
v_isSharedCheck_6475_ = !lean_is_exclusive(v___x_6456_);
if (v_isSharedCheck_6475_ == 0)
{
v___x_6469_ = v___x_6456_;
v_isShared_6470_ = v_isSharedCheck_6475_;
goto v_resetjp_6468_;
}
else
{
lean_inc(v_a_6467_);
lean_dec(v___x_6456_);
v___x_6469_ = lean_box(0);
v_isShared_6470_ = v_isSharedCheck_6475_;
goto v_resetjp_6468_;
}
v_resetjp_6468_:
{
lean_object* v___x_6472_; 
if (v_isShared_6470_ == 0)
{
v___x_6472_ = v___x_6469_;
goto v_reusejp_6471_;
}
else
{
lean_object* v_reuseFailAlloc_6474_; 
v_reuseFailAlloc_6474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6474_, 0, v_a_6467_);
v___x_6472_ = v_reuseFailAlloc_6474_;
goto v_reusejp_6471_;
}
v_reusejp_6471_:
{
lean_object* v___x_6473_; 
v___x_6473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6473_, 0, v___x_6472_);
return v___x_6473_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6476_, lean_object* v___y_6477_){
_start:
{
lean_object* v_res_6478_; 
v_res_6478_ = l_Lasm_Fetch_fetch___lam__0(v_x_6476_);
return v_res_6478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6484_){
_start:
{
if (lean_obj_tag(v_x_6484_) == 0)
{
lean_object* v___x_6485_; 
v___x_6485_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6485_;
}
else
{
lean_object* v_val_6486_; 
v_val_6486_ = lean_ctor_get(v_x_6484_, 0);
lean_inc(v_val_6486_);
return v_val_6486_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6487_){
_start:
{
lean_object* v_res_6488_; 
v_res_6488_ = l_Lasm_Fetch_fetch___lam__1(v_x_6487_);
lean_dec(v_x_6487_);
return v_res_6488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6489_, lean_object* v___f_6490_, uint8_t v___x_6491_, lean_object* v___f_6492_, lean_object* v_x_6493_){
_start:
{
if (lean_obj_tag(v_x_6493_) == 0)
{
lean_object* v_a_6495_; lean_object* v___x_6497_; uint8_t v_isShared_6498_; uint8_t v_isSharedCheck_6503_; 
lean_dec_ref(v___f_6492_);
lean_dec_ref(v___f_6490_);
v_a_6495_ = lean_ctor_get(v_x_6493_, 0);
v_isSharedCheck_6503_ = !lean_is_exclusive(v_x_6493_);
if (v_isSharedCheck_6503_ == 0)
{
v___x_6497_ = v_x_6493_;
v_isShared_6498_ = v_isSharedCheck_6503_;
goto v_resetjp_6496_;
}
else
{
lean_inc(v_a_6495_);
lean_dec(v_x_6493_);
v___x_6497_ = lean_box(0);
v_isShared_6498_ = v_isSharedCheck_6503_;
goto v_resetjp_6496_;
}
v_resetjp_6496_:
{
lean_object* v___x_6500_; 
if (v_isShared_6498_ == 0)
{
v___x_6500_ = v___x_6497_;
goto v_reusejp_6499_;
}
else
{
lean_object* v_reuseFailAlloc_6502_; 
v_reuseFailAlloc_6502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6502_, 0, v_a_6495_);
v___x_6500_ = v_reuseFailAlloc_6502_;
goto v_reusejp_6499_;
}
v_reusejp_6499_:
{
lean_object* v___x_6501_; 
v___x_6501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6501_, 0, v___x_6500_);
return v___x_6501_;
}
}
}
else
{
lean_object* v___x_6504_; lean_object* v___x_6505_; uint8_t v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; 
lean_dec_ref_known(v_x_6493_, 1);
v___x_6504_ = lean_io_promise_result_opt(v_a_6489_);
v___x_6505_ = lean_unsigned_to_nat(0u);
v___x_6506_ = 1;
v___x_6507_ = lean_task_map(v___f_6490_, v___x_6504_, v___x_6505_, v___x_6506_);
v___x_6508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6508_, 0, v___x_6507_);
v___x_6509_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6505_, v___x_6491_, v___x_6508_, v___f_6492_);
return v___x_6509_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6510_, lean_object* v___f_6511_, lean_object* v___x_6512_, lean_object* v___f_6513_, lean_object* v_x_6514_, lean_object* v___y_6515_){
_start:
{
uint8_t v___x_1064__boxed_6516_; lean_object* v_res_6517_; 
v___x_1064__boxed_6516_ = lean_unbox(v___x_6512_);
v_res_6517_ = l_Lasm_Fetch_fetch___lam__2(v_a_6510_, v___f_6511_, v___x_1064__boxed_6516_, v___f_6513_, v_x_6514_);
lean_dec(v_a_6510_);
return v_res_6517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6518_, lean_object* v___f_6519_, uint8_t v___x_6520_, lean_object* v___f_6521_, lean_object* v_options_6522_, lean_object* v_x_6523_){
_start:
{
if (lean_obj_tag(v_x_6523_) == 0)
{
lean_object* v_a_6525_; lean_object* v___x_6527_; uint8_t v_isShared_6528_; uint8_t v_isSharedCheck_6533_; 
lean_dec_ref(v___f_6521_);
lean_dec_ref(v___f_6519_);
v_a_6525_ = lean_ctor_get(v_x_6523_, 0);
v_isSharedCheck_6533_ = !lean_is_exclusive(v_x_6523_);
if (v_isSharedCheck_6533_ == 0)
{
v___x_6527_ = v_x_6523_;
v_isShared_6528_ = v_isSharedCheck_6533_;
goto v_resetjp_6526_;
}
else
{
lean_inc(v_a_6525_);
lean_dec(v_x_6523_);
v___x_6527_ = lean_box(0);
v_isShared_6528_ = v_isSharedCheck_6533_;
goto v_resetjp_6526_;
}
v_resetjp_6526_:
{
lean_object* v___x_6530_; 
if (v_isShared_6528_ == 0)
{
v___x_6530_ = v___x_6527_;
goto v_reusejp_6529_;
}
else
{
lean_object* v_reuseFailAlloc_6532_; 
v_reuseFailAlloc_6532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6532_, 0, v_a_6525_);
v___x_6530_ = v_reuseFailAlloc_6532_;
goto v_reusejp_6529_;
}
v_reusejp_6529_:
{
lean_object* v___x_6531_; 
v___x_6531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6531_, 0, v___x_6530_);
return v___x_6531_;
}
}
}
else
{
lean_object* v_a_6534_; lean_object* v___x_6536_; uint8_t v_isShared_6537_; uint8_t v_isSharedCheck_6564_; 
v_a_6534_ = lean_ctor_get(v_x_6523_, 0);
v_isSharedCheck_6564_ = !lean_is_exclusive(v_x_6523_);
if (v_isSharedCheck_6564_ == 0)
{
v___x_6536_ = v_x_6523_;
v_isShared_6537_ = v_isSharedCheck_6564_;
goto v_resetjp_6535_;
}
else
{
lean_inc(v_a_6534_);
lean_dec(v_x_6523_);
v___x_6536_ = lean_box(0);
v_isShared_6537_ = v_isSharedCheck_6564_;
goto v_resetjp_6535_;
}
v_resetjp_6535_:
{
lean_object* v_method_6538_; lean_object* v_url_6539_; lean_object* v_headers_6540_; lean_object* v_body_6541_; lean_object* v___x_6542_; lean_object* v___f_6543_; uint8_t v___y_6545_; lean_object* v___y_6546_; lean_object* v_val_6547_; lean_object* v___y_6551_; 
v_method_6538_ = lean_ctor_get(v_req_6518_, 0);
v_url_6539_ = lean_ctor_get(v_req_6518_, 1);
v_headers_6540_ = lean_ctor_get(v_req_6518_, 2);
v_body_6541_ = lean_ctor_get(v_req_6518_, 3);
v___x_6542_ = lean_box(v___x_6520_);
lean_inc(v_a_6534_);
v___f_6543_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6543_, 0, v_a_6534_);
lean_closure_set(v___f_6543_, 1, v___f_6519_);
lean_closure_set(v___f_6543_, 2, v___x_6542_);
lean_closure_set(v___f_6543_, 3, v___f_6521_);
if (lean_obj_tag(v_options_6522_) == 0)
{
lean_object* v___x_6562_; 
v___x_6562_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6551_ = v___x_6562_;
goto v___jp_6550_;
}
else
{
lean_object* v_val_6563_; 
v_val_6563_ = lean_ctor_get(v_options_6522_, 0);
v___y_6551_ = v_val_6563_;
goto v___jp_6550_;
}
v___jp_6544_:
{
lean_object* v___x_6548_; lean_object* v___x_6549_; 
v___x_6548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6548_, 0, v_val_6547_);
v___x_6549_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6546_, v___y_6545_, v___x_6548_, v___f_6543_);
return v___x_6549_;
}
v___jp_6550_:
{
lean_object* v___x_6552_; lean_object* v___x_6553_; 
v___x_6552_ = lean_unsigned_to_nat(0u);
v___x_6553_ = lasm_fetch_send(v_a_6534_, v_method_6538_, v_url_6539_, v_headers_6540_, v_body_6541_, v___y_6551_);
lean_dec(v_a_6534_);
if (lean_obj_tag(v___x_6553_) == 0)
{
lean_object* v_a_6554_; lean_object* v___x_6556_; 
v_a_6554_ = lean_ctor_get(v___x_6553_, 0);
lean_inc(v_a_6554_);
lean_dec_ref_known(v___x_6553_, 1);
if (v_isShared_6537_ == 0)
{
lean_ctor_set(v___x_6536_, 0, v_a_6554_);
v___x_6556_ = v___x_6536_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6557_; 
v_reuseFailAlloc_6557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6557_, 0, v_a_6554_);
v___x_6556_ = v_reuseFailAlloc_6557_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
v___y_6545_ = v___x_6520_;
v___y_6546_ = v___x_6552_;
v_val_6547_ = v___x_6556_;
goto v___jp_6544_;
}
}
else
{
lean_object* v_a_6558_; lean_object* v___x_6560_; 
v_a_6558_ = lean_ctor_get(v___x_6553_, 0);
lean_inc(v_a_6558_);
lean_dec_ref_known(v___x_6553_, 1);
if (v_isShared_6537_ == 0)
{
lean_ctor_set_tag(v___x_6536_, 0);
lean_ctor_set(v___x_6536_, 0, v_a_6558_);
v___x_6560_ = v___x_6536_;
goto v_reusejp_6559_;
}
else
{
lean_object* v_reuseFailAlloc_6561_; 
v_reuseFailAlloc_6561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6561_, 0, v_a_6558_);
v___x_6560_ = v_reuseFailAlloc_6561_;
goto v_reusejp_6559_;
}
v_reusejp_6559_:
{
v___y_6545_ = v___x_6520_;
v___y_6546_ = v___x_6552_;
v_val_6547_ = v___x_6560_;
goto v___jp_6544_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6565_, lean_object* v___f_6566_, lean_object* v___x_6567_, lean_object* v___f_6568_, lean_object* v_options_6569_, lean_object* v_x_6570_, lean_object* v___y_6571_){
_start:
{
uint8_t v___x_1113__boxed_6572_; lean_object* v_res_6573_; 
v___x_1113__boxed_6572_ = lean_unbox(v___x_6567_);
v_res_6573_ = l_Lasm_Fetch_fetch___lam__3(v_req_6565_, v___f_6566_, v___x_1113__boxed_6572_, v___f_6568_, v_options_6569_, v_x_6570_);
lean_dec(v_options_6569_);
lean_dec_ref(v_req_6565_);
return v_res_6573_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6574_; uint32_t v___x_6575_; 
v___x_6574_ = lean_box(0);
v___x_6575_ = lasm_fetch_platform(v___x_6574_);
return v___x_6575_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6576_; uint32_t v___x_6577_; uint8_t v___x_6578_; 
v___x_6576_ = 0;
v___x_6577_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6578_ = lean_uint32_dec_eq(v___x_6577_, v___x_6576_);
return v___x_6578_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6581_; uint32_t v___x_6582_; uint8_t v___x_6583_; 
v___x_6581_ = 2;
v___x_6582_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6583_ = lean_uint32_dec_eq(v___x_6582_, v___x_6581_);
return v___x_6583_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6584_; uint32_t v___x_6585_; uint8_t v___x_6586_; 
v___x_6584_ = 4;
v___x_6585_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6586_ = lean_uint32_dec_eq(v___x_6585_, v___x_6584_);
return v___x_6586_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6587_; uint32_t v___x_6588_; uint8_t v___x_6589_; 
v___x_6587_ = 1;
v___x_6588_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6589_ = lean_uint32_dec_eq(v___x_6588_, v___x_6587_);
return v___x_6589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6604_, lean_object* v_options_6605_){
_start:
{
uint8_t v___x_6607_; 
v___x_6607_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6607_ == 0)
{
lean_object* v___f_6608_; lean_object* v___f_6609_; lean_object* v___x_6610_; lean_object* v___f_6611_; uint8_t v___x_6618_; 
v___f_6608_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6609_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6610_ = lean_box(v___x_6607_);
v___f_6611_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6611_, 0, v_req_6604_);
lean_closure_set(v___f_6611_, 1, v___f_6609_);
lean_closure_set(v___f_6611_, 2, v___x_6610_);
lean_closure_set(v___f_6611_, 3, v___f_6608_);
lean_closure_set(v___f_6611_, 4, v_options_6605_);
v___x_6618_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6618_ == 0)
{
uint8_t v___x_6619_; 
v___x_6619_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6619_ == 0)
{
uint8_t v___x_6620_; 
lean_dec_ref(v___f_6611_);
v___x_6620_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6620_ == 0)
{
lean_object* v___x_6621_; 
v___x_6621_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6621_;
}
else
{
lean_object* v___x_6622_; 
v___x_6622_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6622_;
}
}
else
{
goto v___jp_6612_;
}
}
else
{
goto v___jp_6612_;
}
v___jp_6612_:
{
lean_object* v___x_6613_; lean_object* v___x_6614_; lean_object* v___x_6615_; lean_object* v___x_6616_; lean_object* v___x_6617_; 
v___x_6613_ = lean_unsigned_to_nat(0u);
v___x_6614_ = lean_io_promise_new();
v___x_6615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6615_, 0, v___x_6614_);
v___x_6616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6616_, 0, v___x_6615_);
v___x_6617_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6613_, v___x_6607_, v___x_6616_, v___f_6611_);
return v___x_6617_;
}
}
else
{
lean_object* v___x_6623_; 
lean_dec(v_options_6605_);
v___x_6623_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6604_);
return v___x_6623_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6624_, lean_object* v_options_6625_, lean_object* v_a_6626_){
_start:
{
lean_object* v_res_6627_; 
v_res_6627_ = l_Lasm_Fetch_fetch(v_req_6624_, v_options_6625_);
return v_res_6627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6628_, lean_object* v_headers_6629_, lean_object* v_options_6630_){
_start:
{
lean_object* v___x_6632_; lean_object* v___x_6633_; lean_object* v___f_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; 
v___x_6632_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6633_ = l_ByteArray_empty;
v___f_6634_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6635_, 0, v___x_6632_);
lean_ctor_set(v___x_6635_, 1, v_url_6628_);
lean_ctor_set(v___x_6635_, 2, v_headers_6629_);
lean_ctor_set(v___x_6635_, 3, v___x_6633_);
lean_ctor_set(v___x_6635_, 4, v___f_6634_);
v___x_6636_ = l_Lasm_Fetch_fetch(v___x_6635_, v_options_6630_);
return v___x_6636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6637_, lean_object* v_headers_6638_, lean_object* v_options_6639_, lean_object* v_a_6640_){
_start:
{
lean_object* v_res_6641_; 
v_res_6641_ = l_Lasm_Fetch_get(v_url_6637_, v_headers_6638_, v_options_6639_);
return v_res_6641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6643_, lean_object* v_body_6644_, lean_object* v_contentType_6645_, lean_object* v_headers_6646_, lean_object* v_options_6647_){
_start:
{
lean_object* v___x_6649_; lean_object* v___x_6650_; lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___x_6653_; lean_object* v___x_6654_; lean_object* v___x_6655_; lean_object* v___f_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; 
v___x_6649_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6650_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6651_, 0, v___x_6650_);
lean_ctor_set(v___x_6651_, 1, v_contentType_6645_);
v___x_6652_ = lean_unsigned_to_nat(1u);
v___x_6653_ = lean_mk_empty_array_with_capacity(v___x_6652_);
v___x_6654_ = lean_array_push(v___x_6653_, v___x_6651_);
v___x_6655_ = l_Array_append___redArg(v___x_6654_, v_headers_6646_);
v___f_6656_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6657_, 0, v___x_6649_);
lean_ctor_set(v___x_6657_, 1, v_url_6643_);
lean_ctor_set(v___x_6657_, 2, v___x_6655_);
lean_ctor_set(v___x_6657_, 3, v_body_6644_);
lean_ctor_set(v___x_6657_, 4, v___f_6656_);
v___x_6658_ = l_Lasm_Fetch_fetch(v___x_6657_, v_options_6647_);
return v___x_6658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6659_, lean_object* v_body_6660_, lean_object* v_contentType_6661_, lean_object* v_headers_6662_, lean_object* v_options_6663_, lean_object* v_a_6664_){
_start:
{
lean_object* v_res_6665_; 
v_res_6665_ = l_Lasm_Fetch_post(v_url_6659_, v_body_6660_, v_contentType_6661_, v_headers_6662_, v_options_6663_);
lean_dec_ref(v_headers_6662_);
return v_res_6665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6666_){
_start:
{
lean_object* v_body_6667_; uint8_t v___x_6668_; 
v_body_6667_ = lean_ctor_get(v_r_6666_, 1);
lean_inc_ref(v_body_6667_);
lean_dec_ref(v_r_6666_);
v___x_6668_ = lean_string_validate_utf8(v_body_6667_);
if (v___x_6668_ == 0)
{
lean_object* v___x_6669_; 
lean_dec_ref(v_body_6667_);
v___x_6669_ = lean_box(0);
return v___x_6669_;
}
else
{
lean_object* v___x_6670_; lean_object* v___x_6671_; 
v___x_6670_ = lean_string_from_utf8_unchecked(v_body_6667_);
v___x_6671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6671_, 0, v___x_6670_);
return v___x_6671_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6672_, lean_object* v_name_6673_){
_start:
{
lean_object* v_headers_6674_; lean_object* v_n_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; size_t v_sz_6678_; size_t v___x_6679_; lean_object* v___x_6680_; lean_object* v_fst_6681_; 
v_headers_6674_ = lean_ctor_get(v_r_6672_, 0);
v_n_6675_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6673_);
v___x_6676_ = lean_box(0);
v___x_6677_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6678_ = lean_array_size(v_headers_6674_);
v___x_6679_ = ((size_t)0ULL);
v___x_6680_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6675_, v_headers_6674_, v_sz_6678_, v___x_6679_, v___x_6677_);
lean_dec_ref(v_n_6675_);
v_fst_6681_ = lean_ctor_get(v___x_6680_, 0);
lean_inc(v_fst_6681_);
lean_dec_ref(v___x_6680_);
if (lean_obj_tag(v_fst_6681_) == 0)
{
return v___x_6676_;
}
else
{
lean_object* v_val_6682_; 
v_val_6682_ = lean_ctor_get(v_fst_6681_, 0);
lean_inc(v_val_6682_);
lean_dec_ref_known(v_fst_6681_, 1);
if (lean_obj_tag(v_val_6682_) == 0)
{
return v___x_6676_;
}
else
{
lean_object* v_val_6683_; lean_object* v___x_6685_; uint8_t v_isShared_6686_; uint8_t v_isSharedCheck_6691_; 
v_val_6683_ = lean_ctor_get(v_val_6682_, 0);
v_isSharedCheck_6691_ = !lean_is_exclusive(v_val_6682_);
if (v_isSharedCheck_6691_ == 0)
{
v___x_6685_ = v_val_6682_;
v_isShared_6686_ = v_isSharedCheck_6691_;
goto v_resetjp_6684_;
}
else
{
lean_inc(v_val_6683_);
lean_dec(v_val_6682_);
v___x_6685_ = lean_box(0);
v_isShared_6686_ = v_isSharedCheck_6691_;
goto v_resetjp_6684_;
}
v_resetjp_6684_:
{
lean_object* v_snd_6687_; lean_object* v___x_6689_; 
v_snd_6687_ = lean_ctor_get(v_val_6683_, 1);
lean_inc(v_snd_6687_);
lean_dec(v_val_6683_);
if (v_isShared_6686_ == 0)
{
lean_ctor_set(v___x_6685_, 0, v_snd_6687_);
v___x_6689_ = v___x_6685_;
goto v_reusejp_6688_;
}
else
{
lean_object* v_reuseFailAlloc_6690_; 
v_reuseFailAlloc_6690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6690_, 0, v_snd_6687_);
v___x_6689_ = v_reuseFailAlloc_6690_;
goto v_reusejp_6688_;
}
v_reusejp_6688_:
{
return v___x_6689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6692_, lean_object* v_name_6693_){
_start:
{
lean_object* v_res_6694_; 
v_res_6694_ = l_Lasm_Fetch_Response_header_x3f(v_r_6692_, v_name_6693_);
lean_dec_ref(v_r_6692_);
return v_res_6694_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6695_){
_start:
{
if (lean_obj_tag(v_x_6695_) == 0)
{
lean_object* v_a_6696_; lean_object* v___x_6697_; 
v_a_6696_ = lean_ctor_get(v_x_6695_, 0);
lean_inc(v_a_6696_);
lean_dec_ref_known(v_x_6695_, 1);
v___x_6697_ = lean_task_pure(v_a_6696_);
return v___x_6697_;
}
else
{
lean_object* v_a_6698_; 
v_a_6698_ = lean_ctor_get(v_x_6695_, 0);
lean_inc_ref(v_a_6698_);
lean_dec_ref_known(v_x_6695_, 1);
return v_a_6698_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6699_){
_start:
{
if (lean_obj_tag(v_x_6699_) == 0)
{
lean_object* v_a_6700_; lean_object* v___x_6701_; 
v_a_6700_ = lean_ctor_get(v_x_6699_, 0);
lean_inc(v_a_6700_);
lean_dec_ref_known(v_x_6699_, 1);
v___x_6701_ = lean_task_pure(v_a_6700_);
return v___x_6701_;
}
else
{
lean_object* v_a_6702_; 
v_a_6702_ = lean_ctor_get(v_x_6699_, 0);
lean_inc_ref(v_a_6702_);
lean_dec_ref_known(v_x_6699_, 1);
return v_a_6702_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6703_){
_start:
{
lean_object* v_val_6706_; lean_object* v___x_6708_; 
v___x_6708_ = lasm_fetch_write(v_chunk_6703_);
if (lean_obj_tag(v___x_6708_) == 0)
{
lean_object* v_a_6709_; lean_object* v___x_6711_; uint8_t v_isShared_6712_; uint8_t v_isSharedCheck_6716_; 
v_a_6709_ = lean_ctor_get(v___x_6708_, 0);
v_isSharedCheck_6716_ = !lean_is_exclusive(v___x_6708_);
if (v_isSharedCheck_6716_ == 0)
{
v___x_6711_ = v___x_6708_;
v_isShared_6712_ = v_isSharedCheck_6716_;
goto v_resetjp_6710_;
}
else
{
lean_inc(v_a_6709_);
lean_dec(v___x_6708_);
v___x_6711_ = lean_box(0);
v_isShared_6712_ = v_isSharedCheck_6716_;
goto v_resetjp_6710_;
}
v_resetjp_6710_:
{
lean_object* v___x_6714_; 
if (v_isShared_6712_ == 0)
{
lean_ctor_set_tag(v___x_6711_, 1);
v___x_6714_ = v___x_6711_;
goto v_reusejp_6713_;
}
else
{
lean_object* v_reuseFailAlloc_6715_; 
v_reuseFailAlloc_6715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6715_, 0, v_a_6709_);
v___x_6714_ = v_reuseFailAlloc_6715_;
goto v_reusejp_6713_;
}
v_reusejp_6713_:
{
v_val_6706_ = v___x_6714_;
goto v___jp_6705_;
}
}
}
else
{
lean_object* v_a_6717_; lean_object* v___x_6719_; uint8_t v_isShared_6720_; uint8_t v_isSharedCheck_6724_; 
v_a_6717_ = lean_ctor_get(v___x_6708_, 0);
v_isSharedCheck_6724_ = !lean_is_exclusive(v___x_6708_);
if (v_isSharedCheck_6724_ == 0)
{
v___x_6719_ = v___x_6708_;
v_isShared_6720_ = v_isSharedCheck_6724_;
goto v_resetjp_6718_;
}
else
{
lean_inc(v_a_6717_);
lean_dec(v___x_6708_);
v___x_6719_ = lean_box(0);
v_isShared_6720_ = v_isSharedCheck_6724_;
goto v_resetjp_6718_;
}
v_resetjp_6718_:
{
lean_object* v___x_6722_; 
if (v_isShared_6720_ == 0)
{
lean_ctor_set_tag(v___x_6719_, 0);
v___x_6722_ = v___x_6719_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6723_; 
v_reuseFailAlloc_6723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6723_, 0, v_a_6717_);
v___x_6722_ = v_reuseFailAlloc_6723_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
v_val_6706_ = v___x_6722_;
goto v___jp_6705_;
}
}
}
v___jp_6705_:
{
lean_object* v___x_6707_; 
v___x_6707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6707_, 0, v_val_6706_);
return v___x_6707_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6725_, lean_object* v___y_6726_){
_start:
{
lean_object* v_res_6727_; 
v_res_6727_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6725_);
lean_dec_ref(v_chunk_6725_);
return v_res_6727_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6728_){
_start:
{
if (lean_obj_tag(v_x_6728_) == 0)
{
lean_object* v_a_6729_; lean_object* v___x_6730_; 
v_a_6729_ = lean_ctor_get(v_x_6728_, 0);
lean_inc(v_a_6729_);
lean_dec_ref_known(v_x_6728_, 1);
v___x_6730_ = lean_task_pure(v_a_6729_);
return v___x_6730_;
}
else
{
lean_object* v_a_6731_; 
v_a_6731_ = lean_ctor_get(v_x_6728_, 0);
lean_inc_ref(v_a_6731_);
lean_dec_ref_known(v_x_6728_, 1);
return v_a_6731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6732_){
_start:
{
lean_object* v___y_6735_; 
if (lean_obj_tag(v_x_6732_) == 0)
{
lean_object* v_a_6738_; lean_object* v___x_6740_; uint8_t v_isShared_6741_; uint8_t v_isSharedCheck_6746_; 
v_a_6738_ = lean_ctor_get(v_x_6732_, 0);
v_isSharedCheck_6746_ = !lean_is_exclusive(v_x_6732_);
if (v_isSharedCheck_6746_ == 0)
{
v___x_6740_ = v_x_6732_;
v_isShared_6741_ = v_isSharedCheck_6746_;
goto v_resetjp_6739_;
}
else
{
lean_inc(v_a_6738_);
lean_dec(v_x_6732_);
v___x_6740_ = lean_box(0);
v_isShared_6741_ = v_isSharedCheck_6746_;
goto v_resetjp_6739_;
}
v_resetjp_6739_:
{
lean_object* v___x_6743_; 
if (v_isShared_6741_ == 0)
{
v___x_6743_ = v___x_6740_;
goto v_reusejp_6742_;
}
else
{
lean_object* v_reuseFailAlloc_6745_; 
v_reuseFailAlloc_6745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6745_, 0, v_a_6738_);
v___x_6743_ = v_reuseFailAlloc_6745_;
goto v_reusejp_6742_;
}
v_reusejp_6742_:
{
lean_object* v___x_6744_; 
v___x_6744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6744_, 0, v___x_6743_);
return v___x_6744_;
}
}
}
else
{
lean_object* v_a_6747_; uint8_t v___x_6748_; 
v_a_6747_ = lean_ctor_get(v_x_6732_, 0);
lean_inc(v_a_6747_);
lean_dec_ref_known(v_x_6732_, 1);
v___x_6748_ = l_ByteArray_isEmpty(v_a_6747_);
if (v___x_6748_ == 0)
{
lean_object* v___x_6749_; 
v___x_6749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6749_, 0, v_a_6747_);
v___y_6735_ = v___x_6749_;
goto v___jp_6734_;
}
else
{
lean_object* v___x_6750_; 
lean_dec(v_a_6747_);
v___x_6750_ = lean_box(0);
v___y_6735_ = v___x_6750_;
goto v___jp_6734_;
}
}
v___jp_6734_:
{
lean_object* v___x_6736_; lean_object* v___x_6737_; 
v___x_6736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6736_, 0, v___y_6735_);
v___x_6737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6737_, 0, v___x_6736_);
return v___x_6737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6751_, lean_object* v___y_6752_){
_start:
{
lean_object* v_res_6753_; 
v_res_6753_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6751_);
return v_res_6753_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6754_, uint32_t v___x_6755_){
_start:
{
lean_object* v___x_6757_; uint8_t v___x_6758_; lean_object* v_val_6760_; lean_object* v___x_6763_; 
v___x_6757_ = lean_unsigned_to_nat(0u);
v___x_6758_ = 0;
v___x_6763_ = lasm_fetch_read(v___x_6755_);
if (lean_obj_tag(v___x_6763_) == 0)
{
lean_object* v_a_6764_; lean_object* v___x_6766_; uint8_t v_isShared_6767_; uint8_t v_isSharedCheck_6771_; 
v_a_6764_ = lean_ctor_get(v___x_6763_, 0);
v_isSharedCheck_6771_ = !lean_is_exclusive(v___x_6763_);
if (v_isSharedCheck_6771_ == 0)
{
v___x_6766_ = v___x_6763_;
v_isShared_6767_ = v_isSharedCheck_6771_;
goto v_resetjp_6765_;
}
else
{
lean_inc(v_a_6764_);
lean_dec(v___x_6763_);
v___x_6766_ = lean_box(0);
v_isShared_6767_ = v_isSharedCheck_6771_;
goto v_resetjp_6765_;
}
v_resetjp_6765_:
{
lean_object* v___x_6769_; 
if (v_isShared_6767_ == 0)
{
lean_ctor_set_tag(v___x_6766_, 1);
v___x_6769_ = v___x_6766_;
goto v_reusejp_6768_;
}
else
{
lean_object* v_reuseFailAlloc_6770_; 
v_reuseFailAlloc_6770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6770_, 0, v_a_6764_);
v___x_6769_ = v_reuseFailAlloc_6770_;
goto v_reusejp_6768_;
}
v_reusejp_6768_:
{
v_val_6760_ = v___x_6769_;
goto v___jp_6759_;
}
}
}
else
{
lean_object* v_a_6772_; lean_object* v___x_6774_; uint8_t v_isShared_6775_; uint8_t v_isSharedCheck_6779_; 
v_a_6772_ = lean_ctor_get(v___x_6763_, 0);
v_isSharedCheck_6779_ = !lean_is_exclusive(v___x_6763_);
if (v_isSharedCheck_6779_ == 0)
{
v___x_6774_ = v___x_6763_;
v_isShared_6775_ = v_isSharedCheck_6779_;
goto v_resetjp_6773_;
}
else
{
lean_inc(v_a_6772_);
lean_dec(v___x_6763_);
v___x_6774_ = lean_box(0);
v_isShared_6775_ = v_isSharedCheck_6779_;
goto v_resetjp_6773_;
}
v_resetjp_6773_:
{
lean_object* v___x_6777_; 
if (v_isShared_6775_ == 0)
{
lean_ctor_set_tag(v___x_6774_, 0);
v___x_6777_ = v___x_6774_;
goto v_reusejp_6776_;
}
else
{
lean_object* v_reuseFailAlloc_6778_; 
v_reuseFailAlloc_6778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6778_, 0, v_a_6772_);
v___x_6777_ = v_reuseFailAlloc_6778_;
goto v_reusejp_6776_;
}
v_reusejp_6776_:
{
v_val_6760_ = v___x_6777_;
goto v___jp_6759_;
}
}
}
v___jp_6759_:
{
lean_object* v___x_6761_; lean_object* v___x_6762_; 
v___x_6761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6761_, 0, v_val_6760_);
v___x_6762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6757_, v___x_6758_, v___x_6761_, v___f_6754_);
return v___x_6762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6780_, lean_object* v___x_6781_, lean_object* v___y_6782_){
_start:
{
uint32_t v___x_2044__boxed_6783_; lean_object* v_res_6784_; 
v___x_2044__boxed_6783_ = lean_unbox_uint32(v___x_6781_);
lean_dec(v___x_6781_);
v_res_6784_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6780_, v___x_2044__boxed_6783_);
return v_res_6784_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6785_, lean_object* v_req_6786_){
_start:
{
lean_object* v___x_6788_; 
v___x_6788_ = l_Lasm_Fetch_respond(v_handler_6785_, v_req_6786_);
return v___x_6788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6789_, lean_object* v_req_6790_, lean_object* v___y_6791_){
_start:
{
lean_object* v_res_6792_; 
v_res_6792_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6789_, v_req_6790_);
return v_res_6792_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6793_, lean_object* v___f_6794_){
_start:
{
lean_object* v___x_6796_; 
v___x_6796_ = lean_apply_2(v_val_6793_, v___f_6794_, lean_box(0));
return v___x_6796_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6797_, lean_object* v___f_6798_, lean_object* v___y_6799_){
_start:
{
lean_object* v_res_6800_; 
v_res_6800_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6797_, v___f_6798_);
return v_res_6800_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6801_){
_start:
{
lean_object* v___x_6803_; 
v___x_6803_ = l_Lasm_Fetch_Request_readAll(v___x_6801_);
return v___x_6803_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6804_, lean_object* v___y_6805_){
_start:
{
lean_object* v_res_6806_; 
v_res_6806_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6804_);
return v_res_6806_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6812_; lean_object* v___x_6813_; 
v___x_6812_ = 65536;
v___x_6813_ = lean_box_uint32(v___x_6812_);
return v___x_6813_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6814_; lean_object* v___x_6815_; lean_object* v___f_6816_; 
v___f_6814_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6815_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6816_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6816_, 0, v___f_6814_);
lean_closure_set(v___f_6816_, 1, v___x_6815_);
return v___f_6816_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6817_, lean_object* v_options_6818_){
_start:
{
lean_object* v___f_6820_; lean_object* v___f_6821_; lean_object* v___f_6822_; lean_object* v___f_6823_; lean_object* v___x_6824_; 
v___f_6820_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6821_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6822_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6823_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6824_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6824_) == 0)
{
lean_object* v_a_6825_; lean_object* v___x_6827_; uint8_t v_isShared_6828_; uint8_t v_isSharedCheck_6895_; 
v_a_6825_ = lean_ctor_get(v___x_6824_, 0);
v_isSharedCheck_6895_ = !lean_is_exclusive(v___x_6824_);
if (v_isSharedCheck_6895_ == 0)
{
v___x_6827_ = v___x_6824_;
v_isShared_6828_ = v_isSharedCheck_6895_;
goto v_resetjp_6826_;
}
else
{
lean_inc(v_a_6825_);
lean_dec(v___x_6824_);
v___x_6827_ = lean_box(0);
v_isShared_6828_ = v_isSharedCheck_6895_;
goto v_resetjp_6826_;
}
v_resetjp_6826_:
{
lean_object* v_snd_6829_; lean_object* v_fst_6830_; lean_object* v_fst_6831_; lean_object* v_snd_6832_; lean_object* v___f_6833_; lean_object* v___x_6834_; lean_object* v_req_6836_; lean_object* v___x_6874_; lean_object* v___x_6875_; lean_object* v___x_6876_; uint8_t v___x_6877_; 
v_snd_6829_ = lean_ctor_get(v_a_6825_, 1);
lean_inc(v_snd_6829_);
v_fst_6830_ = lean_ctor_get(v_a_6825_, 0);
lean_inc_n(v_fst_6830_, 2);
lean_dec(v_a_6825_);
v_fst_6831_ = lean_ctor_get(v_snd_6829_, 0);
lean_inc_n(v_fst_6831_, 2);
v_snd_6832_ = lean_ctor_get(v_snd_6829_, 1);
lean_inc_n(v_snd_6832_, 2);
lean_dec(v_snd_6829_);
v___f_6833_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6834_ = l_ByteArray_empty;
v___x_6874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6874_, 0, v_fst_6830_);
lean_ctor_set(v___x_6874_, 1, v_fst_6831_);
lean_ctor_set(v___x_6874_, 2, v_snd_6832_);
lean_ctor_set(v___x_6874_, 3, v___x_6834_);
lean_ctor_set(v___x_6874_, 4, v___f_6833_);
lean_inc_ref(v___x_6874_);
v___x_6875_ = l_Lasm_Fetch_Request_path(v___x_6874_);
v___x_6876_ = lean_apply_1(v_options_6818_, v___x_6875_);
v___x_6877_ = lean_unbox(v___x_6876_);
if (v___x_6877_ == 0)
{
lean_object* v___f_6878_; lean_object* v___x_6879_; lean_object* v___x_6880_; uint8_t v___x_6881_; lean_object* v___x_6882_; lean_object* v___x_6883_; 
v___f_6878_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6878_, 0, v___x_6874_);
v___x_6879_ = lean_unsigned_to_nat(0u);
v___x_6880_ = lean_io_as_task(v___f_6878_, v___x_6879_);
v___x_6881_ = 1;
v___x_6882_ = lean_task_bind(v___x_6880_, v___f_6820_, v___x_6879_, v___x_6881_);
v___x_6883_ = lean_task_get_own(v___x_6882_);
if (lean_obj_tag(v___x_6883_) == 0)
{
lean_object* v_a_6884_; lean_object* v___x_6886_; uint8_t v_isShared_6887_; uint8_t v_isSharedCheck_6891_; 
lean_dec(v_snd_6832_);
lean_dec(v_fst_6831_);
lean_dec(v_fst_6830_);
lean_del_object(v___x_6827_);
lean_dec_ref(v_handler_6817_);
v_a_6884_ = lean_ctor_get(v___x_6883_, 0);
v_isSharedCheck_6891_ = !lean_is_exclusive(v___x_6883_);
if (v_isSharedCheck_6891_ == 0)
{
v___x_6886_ = v___x_6883_;
v_isShared_6887_ = v_isSharedCheck_6891_;
goto v_resetjp_6885_;
}
else
{
lean_inc(v_a_6884_);
lean_dec(v___x_6883_);
v___x_6886_ = lean_box(0);
v_isShared_6887_ = v_isSharedCheck_6891_;
goto v_resetjp_6885_;
}
v_resetjp_6885_:
{
lean_object* v___x_6889_; 
if (v_isShared_6887_ == 0)
{
lean_ctor_set_tag(v___x_6886_, 1);
v___x_6889_ = v___x_6886_;
goto v_reusejp_6888_;
}
else
{
lean_object* v_reuseFailAlloc_6890_; 
v_reuseFailAlloc_6890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6890_, 0, v_a_6884_);
v___x_6889_ = v_reuseFailAlloc_6890_;
goto v_reusejp_6888_;
}
v_reusejp_6888_:
{
return v___x_6889_;
}
}
}
else
{
lean_object* v_a_6892_; lean_object* v___f_6893_; lean_object* v___x_6894_; 
v_a_6892_ = lean_ctor_get(v___x_6883_, 0);
lean_inc(v_a_6892_);
lean_dec_ref_known(v___x_6883_, 1);
v___f_6893_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6894_, 0, v_fst_6830_);
lean_ctor_set(v___x_6894_, 1, v_fst_6831_);
lean_ctor_set(v___x_6894_, 2, v_snd_6832_);
lean_ctor_set(v___x_6894_, 3, v_a_6892_);
lean_ctor_set(v___x_6894_, 4, v___f_6893_);
v_req_6836_ = v___x_6894_;
goto v___jp_6835_;
}
}
else
{
lean_dec(v_snd_6832_);
lean_dec(v_fst_6831_);
lean_dec(v_fst_6830_);
v_req_6836_ = v___x_6874_;
goto v___jp_6835_;
}
v___jp_6835_:
{
lean_object* v___f_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; uint8_t v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; 
lean_inc_ref(v_req_6836_);
v___f_6837_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6837_, 0, v_handler_6817_);
lean_closure_set(v___f_6837_, 1, v_req_6836_);
v___x_6838_ = lean_unsigned_to_nat(0u);
v___x_6839_ = lean_io_as_task(v___f_6837_, v___x_6838_);
v___x_6840_ = 1;
v___x_6841_ = lean_task_bind(v___x_6839_, v___f_6823_, v___x_6838_, v___x_6840_);
v___x_6842_ = lean_task_get_own(v___x_6841_);
if (lean_obj_tag(v___x_6842_) == 0)
{
lean_object* v_a_6843_; lean_object* v___x_6845_; 
lean_dec_ref(v_req_6836_);
v_a_6843_ = lean_ctor_get(v___x_6842_, 0);
lean_inc(v_a_6843_);
lean_dec_ref_known(v___x_6842_, 1);
if (v_isShared_6828_ == 0)
{
lean_ctor_set_tag(v___x_6827_, 1);
lean_ctor_set(v___x_6827_, 0, v_a_6843_);
v___x_6845_ = v___x_6827_;
goto v_reusejp_6844_;
}
else
{
lean_object* v_reuseFailAlloc_6846_; 
v_reuseFailAlloc_6846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6846_, 0, v_a_6843_);
v___x_6845_ = v_reuseFailAlloc_6846_;
goto v_reusejp_6844_;
}
v_reusejp_6844_:
{
return v___x_6845_;
}
}
else
{
lean_object* v_a_6847_; lean_object* v_stream_6848_; 
lean_del_object(v___x_6827_);
v_a_6847_ = lean_ctor_get(v___x_6842_, 0);
lean_inc(v_a_6847_);
lean_dec_ref_known(v___x_6842_, 1);
v_stream_6848_ = lean_ctor_get(v_a_6847_, 2);
if (lean_obj_tag(v_stream_6848_) == 0)
{
uint16_t v_status_6849_; lean_object* v_headers_6850_; lean_object* v_body_6851_; lean_object* v_method_6852_; uint8_t v___x_6853_; 
v_status_6849_ = lean_ctor_get_uint16(v_a_6847_, sizeof(void*)*3);
v_headers_6850_ = lean_ctor_get(v_a_6847_, 0);
lean_inc_ref(v_headers_6850_);
v_body_6851_ = lean_ctor_get(v_a_6847_, 1);
lean_inc_ref(v_body_6851_);
lean_dec(v_a_6847_);
v_method_6852_ = lean_ctor_get(v_req_6836_, 0);
lean_inc_ref(v_method_6852_);
lean_dec_ref(v_req_6836_);
v___x_6853_ = l_Lasm_Fetch_bodyless(v_method_6852_, v_status_6849_);
lean_dec_ref(v_method_6852_);
if (v___x_6853_ == 0)
{
lean_object* v___x_6854_; 
v___x_6854_ = lasm_fetch_send_response(v_status_6849_, v_headers_6850_, v_body_6851_);
lean_dec_ref(v_body_6851_);
lean_dec_ref(v_headers_6850_);
return v___x_6854_;
}
else
{
lean_object* v___x_6855_; 
lean_dec_ref(v_body_6851_);
v___x_6855_ = lasm_fetch_send_response(v_status_6849_, v_headers_6850_, v___x_6834_);
lean_dec_ref(v_headers_6850_);
return v___x_6855_;
}
}
else
{
uint16_t v_status_6856_; lean_object* v_headers_6857_; lean_object* v_val_6858_; lean_object* v___f_6859_; lean_object* v___x_6860_; 
lean_inc_ref(v_stream_6848_);
v_status_6856_ = lean_ctor_get_uint16(v_a_6847_, sizeof(void*)*3);
v_headers_6857_ = lean_ctor_get(v_a_6847_, 0);
lean_inc_ref(v_headers_6857_);
lean_dec(v_a_6847_);
v_val_6858_ = lean_ctor_get(v_stream_6848_, 0);
lean_inc(v_val_6858_);
lean_dec_ref_known(v_stream_6848_, 1);
v___f_6859_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6859_, 0, v_val_6858_);
lean_closure_set(v___f_6859_, 1, v___f_6822_);
v___x_6860_ = lasm_fetch_start_response(v_status_6856_, v_headers_6857_);
lean_dec_ref(v_headers_6857_);
if (lean_obj_tag(v___x_6860_) == 0)
{
lean_object* v_method_6861_; uint8_t v___x_6862_; 
lean_dec_ref_known(v___x_6860_, 1);
v_method_6861_ = lean_ctor_get(v_req_6836_, 0);
lean_inc_ref(v_method_6861_);
lean_dec_ref(v_req_6836_);
v___x_6862_ = l_Lasm_Fetch_bodyless(v_method_6861_, v_status_6856_);
lean_dec_ref(v_method_6861_);
if (v___x_6862_ == 0)
{
lean_object* v___x_6863_; lean_object* v___x_6864_; lean_object* v___x_6865_; 
v___x_6863_ = lean_io_as_task(v___f_6859_, v___x_6838_);
v___x_6864_ = lean_task_bind(v___x_6863_, v___f_6821_, v___x_6838_, v___x_6840_);
v___x_6865_ = lean_task_get_own(v___x_6864_);
if (lean_obj_tag(v___x_6865_) == 0)
{
lean_object* v_a_6866_; lean_object* v___x_6867_; lean_object* v___x_6868_; lean_object* v___x_6869_; lean_object* v___x_6870_; 
v_a_6866_ = lean_ctor_get(v___x_6865_, 0);
lean_inc(v_a_6866_);
lean_dec_ref_known(v___x_6865_, 1);
v___x_6867_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6868_ = lean_io_error_to_string(v_a_6866_);
v___x_6869_ = lean_string_append(v___x_6867_, v___x_6868_);
lean_dec_ref(v___x_6868_);
v___x_6870_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6869_);
if (lean_obj_tag(v___x_6870_) == 0)
{
lean_object* v___x_6871_; 
lean_dec_ref_known(v___x_6870_, 1);
v___x_6871_ = lasm_fetch_finish(v___x_6862_);
return v___x_6871_;
}
else
{
return v___x_6870_;
}
}
else
{
lean_object* v___x_6872_; 
lean_dec_ref_known(v___x_6865_, 1);
v___x_6872_ = lasm_fetch_finish(v___x_6840_);
return v___x_6872_;
}
}
else
{
lean_object* v___x_6873_; 
lean_dec_ref(v___f_6859_);
v___x_6873_ = lasm_fetch_finish(v___x_6840_);
return v___x_6873_;
}
}
else
{
lean_dec_ref(v___f_6859_);
lean_dec_ref(v_req_6836_);
return v___x_6860_;
}
}
}
}
}
}
else
{
lean_object* v_a_6896_; lean_object* v___x_6898_; uint8_t v_isShared_6899_; uint8_t v_isSharedCheck_6903_; 
lean_dec_ref(v_options_6818_);
lean_dec_ref(v_handler_6817_);
v_a_6896_ = lean_ctor_get(v___x_6824_, 0);
v_isSharedCheck_6903_ = !lean_is_exclusive(v___x_6824_);
if (v_isSharedCheck_6903_ == 0)
{
v___x_6898_ = v___x_6824_;
v_isShared_6899_ = v_isSharedCheck_6903_;
goto v_resetjp_6897_;
}
else
{
lean_inc(v_a_6896_);
lean_dec(v___x_6824_);
v___x_6898_ = lean_box(0);
v_isShared_6899_ = v_isSharedCheck_6903_;
goto v_resetjp_6897_;
}
v_resetjp_6897_:
{
lean_object* v___x_6901_; 
if (v_isShared_6899_ == 0)
{
v___x_6901_ = v___x_6898_;
goto v_reusejp_6900_;
}
else
{
lean_object* v_reuseFailAlloc_6902_; 
v_reuseFailAlloc_6902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6902_, 0, v_a_6896_);
v___x_6901_ = v_reuseFailAlloc_6902_;
goto v_reusejp_6900_;
}
v_reusejp_6900_:
{
return v___x_6901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6904_, lean_object* v_options_6905_, lean_object* v_a_6906_){
_start:
{
lean_object* v_res_6907_; 
v_res_6907_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6904_, v_options_6905_);
return v_res_6907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6911_, lean_object* v_handler_6912_){
_start:
{
uint8_t v___x_6914_; 
v___x_6914_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6914_ == 0)
{
uint8_t v___x_6915_; 
v___x_6915_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6915_ == 0)
{
uint8_t v___x_6916_; 
v___x_6916_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6916_ == 0)
{
uint8_t v___x_6917_; 
v___x_6917_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6917_ == 0)
{
lean_object* v___x_6918_; lean_object* v___x_6919_; 
lean_dec_ref(v_handler_6912_);
lean_dec_ref(v_options_6911_);
v___x_6918_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6919_, 0, v___x_6918_);
return v___x_6919_;
}
else
{
lean_object* v___x_6920_; 
v___x_6920_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6920_) == 0)
{
lean_object* v_a_6921_; uint8_t v___x_6922_; 
v_a_6921_ = lean_ctor_get(v___x_6920_, 0);
lean_inc(v_a_6921_);
lean_dec_ref_known(v___x_6920_, 1);
v___x_6922_ = lean_unbox(v_a_6921_);
lean_dec(v_a_6921_);
if (v___x_6922_ == 0)
{
lean_object* v___x_6923_; 
v___x_6923_ = l_Lasm_Fetch_serveNode(v_handler_6912_, v_options_6911_);
return v___x_6923_;
}
else
{
lean_object* v___x_6924_; 
v___x_6924_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6912_, v_options_6911_);
if (lean_obj_tag(v___x_6924_) == 0)
{
lean_object* v_a_6925_; lean_object* v___x_6926_; 
v_a_6925_ = lean_ctor_get(v___x_6924_, 0);
lean_inc(v_a_6925_);
lean_dec_ref_known(v___x_6924_, 1);
v___x_6926_ = l_Lasm_JS_exportDefault(v_a_6925_);
return v___x_6926_;
}
else
{
lean_object* v_a_6927_; lean_object* v___x_6929_; uint8_t v_isShared_6930_; uint8_t v_isSharedCheck_6934_; 
v_a_6927_ = lean_ctor_get(v___x_6924_, 0);
v_isSharedCheck_6934_ = !lean_is_exclusive(v___x_6924_);
if (v_isSharedCheck_6934_ == 0)
{
v___x_6929_ = v___x_6924_;
v_isShared_6930_ = v_isSharedCheck_6934_;
goto v_resetjp_6928_;
}
else
{
lean_inc(v_a_6927_);
lean_dec(v___x_6924_);
v___x_6929_ = lean_box(0);
v_isShared_6930_ = v_isSharedCheck_6934_;
goto v_resetjp_6928_;
}
v_resetjp_6928_:
{
lean_object* v___x_6932_; 
if (v_isShared_6930_ == 0)
{
v___x_6932_ = v___x_6929_;
goto v_reusejp_6931_;
}
else
{
lean_object* v_reuseFailAlloc_6933_; 
v_reuseFailAlloc_6933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6933_, 0, v_a_6927_);
v___x_6932_ = v_reuseFailAlloc_6933_;
goto v_reusejp_6931_;
}
v_reusejp_6931_:
{
return v___x_6932_;
}
}
}
}
}
else
{
lean_object* v_a_6935_; lean_object* v___x_6937_; uint8_t v_isShared_6938_; uint8_t v_isSharedCheck_6942_; 
lean_dec_ref(v_handler_6912_);
lean_dec_ref(v_options_6911_);
v_a_6935_ = lean_ctor_get(v___x_6920_, 0);
v_isSharedCheck_6942_ = !lean_is_exclusive(v___x_6920_);
if (v_isSharedCheck_6942_ == 0)
{
v___x_6937_ = v___x_6920_;
v_isShared_6938_ = v_isSharedCheck_6942_;
goto v_resetjp_6936_;
}
else
{
lean_inc(v_a_6935_);
lean_dec(v___x_6920_);
v___x_6937_ = lean_box(0);
v_isShared_6938_ = v_isSharedCheck_6942_;
goto v_resetjp_6936_;
}
v_resetjp_6936_:
{
lean_object* v___x_6940_; 
if (v_isShared_6938_ == 0)
{
v___x_6940_ = v___x_6937_;
goto v_reusejp_6939_;
}
else
{
lean_object* v_reuseFailAlloc_6941_; 
v_reuseFailAlloc_6941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6941_, 0, v_a_6935_);
v___x_6940_ = v_reuseFailAlloc_6941_;
goto v_reusejp_6939_;
}
v_reusejp_6939_:
{
return v___x_6940_;
}
}
}
}
}
else
{
lean_object* v___x_6943_; 
v___x_6943_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6912_, v_options_6911_);
return v___x_6943_;
}
}
else
{
lean_object* v___x_6944_; 
v___x_6944_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6912_, v_options_6911_);
return v___x_6944_;
}
}
else
{
lean_object* v___x_6945_; 
v___x_6945_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6912_, v_options_6911_);
return v___x_6945_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6946_, lean_object* v_handler_6947_, lean_object* v_a_6948_){
_start:
{
lean_object* v_res_6949_; 
v_res_6949_ = l_Lasm_Fetch_serveWith(v_options_6946_, v_handler_6947_);
return v_res_6949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6950_){
_start:
{
lean_object* v___f_6952_; lean_object* v___x_6953_; 
v___f_6952_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6953_ = l_Lasm_Fetch_serveWith(v___f_6952_, v_handler_6950_);
return v___x_6953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6954_, lean_object* v_a_6955_){
_start:
{
lean_object* v_res_6956_; 
v_res_6956_ = l_Lasm_Fetch_serve(v_handler_6954_);
return v_res_6956_;
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
