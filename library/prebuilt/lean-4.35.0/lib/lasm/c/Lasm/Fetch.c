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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_waitForever();
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lasm_JS_Function_ofFnReply(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "__lasmDefaultExport"};
static const lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "__lasmFunctionHost"};
static const lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___boxed(lean_object*, lean_object*);
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
lean_object* v_k_2216_; lean_object* v___x_2217_; 
v_k_2216_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2216_, 0, v_key_2214_);
v___x_2217_ = l_Lasm_JS_Wire_encodeIO(v_k_2216_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; uint32_t v___x_2219_; uint32_t v___x_2220_; uint64_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
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
v___x_2224_ = lean_unsigned_to_nat(2u);
v___x_2225_ = lean_mk_empty_array_with_capacity(v___x_2224_);
lean_inc_ref(v_k_2216_);
v___x_2226_ = lean_array_push(v___x_2225_, v_k_2216_);
v___x_2227_ = lean_array_push(v___x_2226_, v___x_2223_);
v___x_2228_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
v___x_2229_ = lasm_js_call(v___x_2219_, v___x_2220_, v___x_2221_, v_a_2218_, v___x_2228_);
lean_dec_ref_known(v___x_2228_, 1);
lean_dec(v_a_2218_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2229_, 1);
v___x_2231_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2232_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2216_);
v___x_2233_ = lean_string_append(v___x_2231_, v___x_2232_);
lean_dec_ref(v___x_2232_);
v___x_2234_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2233_, v_a_2230_);
lean_dec(v_a_2230_);
lean_dec_ref(v___x_2233_);
return v___x_2234_;
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec_ref_known(v_k_2216_, 1);
v_a_2235_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2229_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2229_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref_known(v_k_2216_, 1);
lean_dec(v_o_2213_);
v_a_2243_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2217_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2217_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2251_, lean_object* v_key_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2251_, v_key_2252_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2256_, uint8_t v___x_2257_, lean_object* v___f_2258_, lean_object* v_a_2259_, lean_object* v_x_2260_){
_start:
{
lean_object* v_val_2263_; 
if (lean_obj_tag(v_x_2260_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2274_; 
lean_dec(v_a_2259_);
lean_dec_ref(v___f_2258_);
lean_dec(v___x_2256_);
v_a_2266_ = lean_ctor_get(v_x_2260_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v_x_2260_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2268_ = v_x_2260_;
v_isShared_2269_ = v_isSharedCheck_2274_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v_x_2260_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2274_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
}
}
else
{
lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2288_; 
v_isSharedCheck_2288_ = !lean_is_exclusive(v_x_2260_);
if (v_isSharedCheck_2288_ == 0)
{
lean_object* v_unused_2289_; 
v_unused_2289_ = lean_ctor_get(v_x_2260_, 0);
lean_dec(v_unused_2289_);
v___x_2276_ = v_x_2260_;
v_isShared_2277_ = v_isSharedCheck_2288_;
goto v_resetjp_2275_;
}
else
{
lean_dec(v_x_2260_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2288_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2279_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2259_, v___x_2278_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v_a_2280_);
v___x_2282_ = v___x_2276_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
v_val_2263_ = v___x_2282_;
goto v___jp_2262_;
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; 
v_a_2284_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2279_, 1);
if (v_isShared_2277_ == 0)
{
lean_ctor_set_tag(v___x_2276_, 0);
lean_ctor_set(v___x_2276_, 0, v_a_2284_);
v___x_2286_ = v___x_2276_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
v_val_2263_ = v___x_2286_;
goto v___jp_2262_;
}
}
}
}
v___jp_2262_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2264_, 0, v_val_2263_);
v___x_2265_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2256_, v___x_2257_, v___x_2264_, v___f_2258_);
return v___x_2265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2290_, lean_object* v___x_2291_, lean_object* v___f_2292_, lean_object* v_a_2293_, lean_object* v_x_2294_, lean_object* v___y_2295_){
_start:
{
uint8_t v___x_5440__boxed_2296_; lean_object* v_res_2297_; 
v___x_5440__boxed_2296_ = lean_unbox(v___x_2291_);
v_res_2297_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2290_, v___x_5440__boxed_2296_, v___f_2292_, v_a_2293_, v_x_2294_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2299_, lean_object* v___x_2300_, uint8_t v___x_2301_, lean_object* v___f_2302_, lean_object* v_chunk_2303_){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2305_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2306_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_chunk_2303_);
v___x_2307_ = lean_unsigned_to_nat(1u);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2307_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2306_);
v___x_2310_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2299_, v___x_2305_, v___x_2309_);
v___x_2311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2300_, v___x_2301_, v___x_2310_, v___f_2302_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2312_, lean_object* v___x_2313_, lean_object* v___x_2314_, lean_object* v___f_2315_, lean_object* v_chunk_2316_, lean_object* v___y_2317_){
_start:
{
uint8_t v___x_5519__boxed_2318_; lean_object* v_res_2319_; 
v___x_5519__boxed_2318_ = lean_unbox(v___x_2314_);
v_res_2319_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2312_, v___x_2313_, v___x_5519__boxed_2318_, v___f_2315_, v_chunk_2316_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2321_, lean_object* v_a_2322_, lean_object* v___x_2323_, uint8_t v___x_2324_, lean_object* v___f_2325_, lean_object* v_x_2326_){
_start:
{
if (lean_obj_tag(v_x_2326_) == 0)
{
lean_object* v___x_2328_; 
lean_dec_ref(v___f_2325_);
lean_dec(v___x_2323_);
lean_dec(v_a_2322_);
lean_dec_ref(v___x_2321_);
v___x_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2328_, 0, v_x_2326_);
return v___x_2328_;
}
else
{
lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2341_; 
v_isSharedCheck_2341_ = !lean_is_exclusive(v_x_2326_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; 
v_unused_2342_ = lean_ctor_get(v_x_2326_, 0);
lean_dec(v_unused_2342_);
v___x_2330_ = v_x_2326_;
v_isShared_2331_ = v_isSharedCheck_2341_;
goto v_resetjp_2329_;
}
else
{
lean_dec(v_x_2326_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2341_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2332_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 4);
lean_ctor_set(v___x_2330_, 0, v___x_2321_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2321_);
v___x_2334_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2335_ = lean_unsigned_to_nat(1u);
v___x_2336_ = lean_mk_empty_array_with_capacity(v___x_2335_);
v___x_2337_ = lean_array_push(v___x_2336_, v___x_2334_);
v___x_2338_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2322_, v___x_2332_, v___x_2337_);
v___x_2339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2323_, v___x_2324_, v___x_2338_, v___f_2325_);
return v___x_2339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2343_, lean_object* v_a_2344_, lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v___f_2347_, lean_object* v_x_2348_, lean_object* v___y_2349_){
_start:
{
uint8_t v___x_5552__boxed_2350_; lean_object* v_res_2351_; 
v___x_5552__boxed_2350_ = lean_unbox(v___x_2346_);
v_res_2351_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2343_, v_a_2344_, v___x_2345_, v___x_5552__boxed_2350_, v___f_2347_, v_x_2348_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2353_, lean_object* v___x_2354_, uint8_t v___x_2355_, lean_object* v___f_2356_, lean_object* v_x_2357_){
_start:
{
if (lean_obj_tag(v_x_2357_) == 0)
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2381_; 
v_a_2359_ = lean_ctor_get(v_x_2357_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v_x_2357_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2361_ = v_x_2357_;
v_isShared_2362_ = v_isSharedCheck_2381_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v_x_2357_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2381_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___f_2366_; lean_object* v_val_2368_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2363_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2364_ = lean_io_error_to_string(v_a_2359_);
v___x_2365_ = lean_box(v___x_2355_);
lean_inc(v___x_2354_);
lean_inc_ref(v___x_2364_);
v___f_2366_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2366_, 0, v___x_2364_);
lean_closure_set(v___f_2366_, 1, v_a_2353_);
lean_closure_set(v___f_2366_, 2, v___x_2354_);
lean_closure_set(v___f_2366_, 3, v___x_2365_);
lean_closure_set(v___f_2366_, 4, v___f_2356_);
v___x_2371_ = lean_string_append(v___x_2363_, v___x_2364_);
lean_dec_ref(v___x_2364_);
v___x_2372_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2371_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
if (v_isShared_2362_ == 0)
{
lean_ctor_set_tag(v___x_2361_, 1);
lean_ctor_set(v___x_2361_, 0, v_a_2373_);
v___x_2375_ = v___x_2361_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
v_val_2368_ = v___x_2375_;
goto v___jp_2367_;
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; 
v_a_2377_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2372_, 1);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v_a_2377_);
v___x_2379_ = v___x_2361_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2377_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
v_val_2368_ = v___x_2379_;
goto v___jp_2367_;
}
}
v___jp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2369_, 0, v_val_2368_);
v___x_2370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2354_, v___x_2355_, v___x_2369_, v___f_2366_);
return v___x_2370_;
}
}
}
else
{
lean_object* v___x_2382_; 
lean_dec_ref(v___f_2356_);
lean_dec(v___x_2354_);
lean_dec(v_a_2353_);
v___x_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_x_2357_);
return v___x_2382_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2383_, lean_object* v___x_2384_, lean_object* v___x_2385_, lean_object* v___f_2386_, lean_object* v_x_2387_, lean_object* v___y_2388_){
_start:
{
uint8_t v___x_5607__boxed_2389_; lean_object* v_res_2390_; 
v___x_5607__boxed_2389_ = lean_unbox(v___x_2385_);
v_res_2390_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2383_, v___x_2384_, v___x_5607__boxed_2389_, v___f_2386_, v_x_2387_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2392_, lean_object* v___x_2393_, lean_object* v___x_2394_, uint8_t v___x_2395_, lean_object* v___f_2396_, lean_object* v_x_2397_){
_start:
{
if (lean_obj_tag(v_x_2397_) == 0)
{
lean_object* v___x_2399_; 
lean_dec_ref(v___f_2396_);
lean_dec(v___x_2394_);
lean_dec_ref(v___x_2393_);
lean_dec(v_a_2392_);
v___x_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2399_, 0, v_x_2397_);
return v___x_2399_;
}
else
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_dec_ref_known(v_x_2397_, 1);
v___x_2400_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2401_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2392_, v___x_2400_, v___x_2393_);
v___x_2402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2394_, v___x_2395_, v___x_2401_, v___f_2396_);
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2403_, lean_object* v___x_2404_, lean_object* v___x_2405_, lean_object* v___x_2406_, lean_object* v___f_2407_, lean_object* v_x_2408_, lean_object* v___y_2409_){
_start:
{
uint8_t v___x_5678__boxed_2410_; lean_object* v_res_2411_; 
v___x_5678__boxed_2410_ = lean_unbox(v___x_2406_);
v_res_2411_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2403_, v___x_2404_, v___x_2405_, v___x_5678__boxed_2410_, v___f_2407_, v_x_2408_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2412_, lean_object* v___f_2413_, lean_object* v___x_2414_, uint8_t v___x_2415_, lean_object* v___f_2416_, lean_object* v___f_2417_){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2419_ = lean_apply_2(v_val_2412_, v___f_2413_, lean_box(0));
lean_inc(v___x_2414_);
v___x_2420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2414_, v___x_2415_, v___x_2419_, v___f_2416_);
v___x_2421_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2414_, v___x_2415_, v___x_2420_, v___f_2417_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2422_, lean_object* v___f_2423_, lean_object* v___x_2424_, lean_object* v___x_2425_, lean_object* v___f_2426_, lean_object* v___f_2427_, lean_object* v___y_2428_){
_start:
{
uint8_t v___x_5710__boxed_2429_; lean_object* v_res_2430_; 
v___x_5710__boxed_2429_ = lean_unbox(v___x_2425_);
v_res_2430_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2422_, v___f_2423_, v___x_2424_, v___x_5710__boxed_2429_, v___f_2426_, v___f_2427_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2431_, uint8_t v___x_2432_, lean_object* v___f_2433_, lean_object* v___f_2434_, lean_object* v___x_2435_, lean_object* v___f_2436_, lean_object* v_val_2437_, lean_object* v___f_2438_, lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2439_) == 0)
{
lean_object* v___x_2441_; 
lean_dec_ref(v___f_2438_);
lean_dec_ref(v_val_2437_);
lean_dec_ref(v___f_2436_);
lean_dec_ref(v___x_2435_);
lean_dec_ref(v___f_2434_);
lean_dec_ref(v___f_2433_);
lean_dec(v___x_2431_);
v___x_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2441_, 0, v_x_2439_);
return v___x_2441_;
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2443_; lean_object* v___f_2444_; lean_object* v___x_2445_; lean_object* v___f_2446_; lean_object* v___x_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v_a_2442_ = lean_ctor_get(v_x_2439_, 0);
lean_inc_n(v_a_2442_, 3);
lean_dec_ref_known(v_x_2439_, 1);
v___x_2443_ = lean_box(v___x_2432_);
lean_inc_n(v___x_2431_, 5);
v___f_2444_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2444_, 0, v_a_2442_);
lean_closure_set(v___f_2444_, 1, v___x_2431_);
lean_closure_set(v___f_2444_, 2, v___x_2443_);
lean_closure_set(v___f_2444_, 3, v___f_2433_);
v___x_2445_ = lean_box(v___x_2432_);
v___f_2446_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2446_, 0, v_a_2442_);
lean_closure_set(v___f_2446_, 1, v___x_2431_);
lean_closure_set(v___f_2446_, 2, v___x_2445_);
lean_closure_set(v___f_2446_, 3, v___f_2434_);
v___x_2447_ = lean_box(v___x_2432_);
v___f_2448_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2448_, 0, v_a_2442_);
lean_closure_set(v___f_2448_, 1, v___x_2435_);
lean_closure_set(v___f_2448_, 2, v___x_2431_);
lean_closure_set(v___f_2448_, 3, v___x_2447_);
lean_closure_set(v___f_2448_, 4, v___f_2436_);
v___x_2449_ = lean_box(v___x_2432_);
v___f_2450_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2450_, 0, v_val_2437_);
lean_closure_set(v___f_2450_, 1, v___f_2444_);
lean_closure_set(v___f_2450_, 2, v___x_2431_);
lean_closure_set(v___f_2450_, 3, v___x_2449_);
lean_closure_set(v___f_2450_, 4, v___f_2448_);
lean_closure_set(v___f_2450_, 5, v___f_2446_);
v___x_2451_ = lean_io_as_task(v___f_2450_, v___x_2431_);
lean_dec_ref(v___x_2451_);
v___x_2452_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2431_, v___x_2432_, v___x_2452_, v___f_2438_);
return v___x_2453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2454_, lean_object* v___x_2455_, lean_object* v___f_2456_, lean_object* v___f_2457_, lean_object* v___x_2458_, lean_object* v___f_2459_, lean_object* v_val_2460_, lean_object* v___f_2461_, lean_object* v_x_2462_, lean_object* v___y_2463_){
_start:
{
uint8_t v___x_5739__boxed_2464_; lean_object* v_res_2465_; 
v___x_5739__boxed_2464_ = lean_unbox(v___x_2455_);
v_res_2465_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2454_, v___x_5739__boxed_2464_, v___f_2456_, v___f_2457_, v___x_2458_, v___f_2459_, v_val_2460_, v___f_2461_, v_x_2462_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2467_, uint8_t v___x_2468_, lean_object* v___f_2469_, lean_object* v___x_2470_, lean_object* v_x_2471_){
_start:
{
lean_object* v_val_2474_; 
if (lean_obj_tag(v_x_2471_) == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref(v___x_2470_);
lean_dec_ref(v___f_2469_);
lean_dec(v___x_2467_);
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_x_2471_);
return v___x_2477_;
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2492_; 
v_a_2478_ = lean_ctor_get(v_x_2471_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_x_2471_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2480_ = v_x_2471_;
v_isShared_2481_ = v_isSharedCheck_2492_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v_x_2471_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2492_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2483_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2478_, v___x_2482_, v___x_2470_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_object* v_a_2484_; lean_object* v___x_2486_; 
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2483_, 1);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v_a_2484_);
v___x_2486_ = v___x_2480_;
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
v_val_2474_ = v___x_2486_;
goto v___jp_2473_;
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; 
v_a_2488_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2488_);
lean_dec_ref_known(v___x_2483_, 1);
if (v_isShared_2481_ == 0)
{
lean_ctor_set_tag(v___x_2480_, 0);
lean_ctor_set(v___x_2480_, 0, v_a_2488_);
v___x_2490_ = v___x_2480_;
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
v_val_2474_ = v___x_2490_;
goto v___jp_2473_;
}
}
}
}
v___jp_2473_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_val_2474_);
v___x_2476_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2467_, v___x_2468_, v___x_2475_, v___f_2469_);
return v___x_2476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2493_, lean_object* v___x_2494_, lean_object* v___f_2495_, lean_object* v___x_2496_, lean_object* v_x_2497_, lean_object* v___y_2498_){
_start:
{
uint8_t v___x_5800__boxed_2499_; lean_object* v_res_2500_; 
v___x_5800__boxed_2499_ = lean_unbox(v___x_2494_);
v_res_2500_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2493_, v___x_5800__boxed_2499_, v___f_2495_, v___x_2496_, v_x_2497_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2502_, lean_object* v___x_2503_, uint8_t v___x_2504_, lean_object* v_a_2505_, lean_object* v___f_2506_, lean_object* v___f_2507_, lean_object* v___x_2508_, lean_object* v___f_2509_, lean_object* v_val_2510_, lean_object* v_a_2511_, lean_object* v_x_2512_){
_start:
{
if (lean_obj_tag(v_x_2512_) == 0)
{
lean_object* v___x_2514_; 
lean_dec(v_a_2511_);
lean_dec_ref(v_val_2510_);
lean_dec_ref(v___f_2509_);
lean_dec_ref(v___x_2508_);
lean_dec_ref(v___f_2507_);
lean_dec_ref(v___f_2506_);
lean_dec(v_a_2505_);
lean_dec(v___x_2503_);
lean_dec(v___x_2502_);
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_x_2512_);
return v___x_2514_;
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2540_; 
v_a_2515_ = lean_ctor_get(v_x_2512_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_x_2512_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2517_ = v_x_2512_;
v_isShared_2518_ = v_isSharedCheck_2540_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v_x_2512_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2540_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___f_2519_; lean_object* v___x_2520_; lean_object* v___f_2521_; lean_object* v___x_2522_; lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___f_2525_; lean_object* v_val_2527_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___f_2519_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2519_, 0, v_a_2515_);
lean_closure_set(v___f_2519_, 1, v___x_2502_);
v___x_2520_ = lean_box(v___x_2504_);
lean_inc_n(v___x_2503_, 3);
v___f_2521_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2521_, 0, v___x_2503_);
lean_closure_set(v___f_2521_, 1, v___x_2520_);
lean_closure_set(v___f_2521_, 2, v___f_2519_);
lean_closure_set(v___f_2521_, 3, v_a_2505_);
v___x_2522_ = lean_box(v___x_2504_);
lean_inc_ref(v___x_2508_);
v___f_2523_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2523_, 0, v___x_2503_);
lean_closure_set(v___f_2523_, 1, v___x_2522_);
lean_closure_set(v___f_2523_, 2, v___f_2506_);
lean_closure_set(v___f_2523_, 3, v___f_2507_);
lean_closure_set(v___f_2523_, 4, v___x_2508_);
lean_closure_set(v___f_2523_, 5, v___f_2509_);
lean_closure_set(v___f_2523_, 6, v_val_2510_);
lean_closure_set(v___f_2523_, 7, v___f_2521_);
v___x_2524_ = lean_box(v___x_2504_);
v___f_2525_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2525_, 0, v___x_2503_);
lean_closure_set(v___f_2525_, 1, v___x_2524_);
lean_closure_set(v___f_2525_, 2, v___f_2523_);
lean_closure_set(v___f_2525_, 3, v___x_2508_);
v___x_2530_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2531_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2511_, v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v___x_2534_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2531_, 1);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v_a_2532_);
v___x_2534_ = v___x_2517_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_a_2532_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
v_val_2527_ = v___x_2534_;
goto v___jp_2526_;
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; 
v_a_2536_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2531_, 1);
if (v_isShared_2518_ == 0)
{
lean_ctor_set_tag(v___x_2517_, 0);
lean_ctor_set(v___x_2517_, 0, v_a_2536_);
v___x_2538_ = v___x_2517_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
v_val_2527_ = v___x_2538_;
goto v___jp_2526_;
}
}
v___jp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2528_, 0, v_val_2527_);
v___x_2529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2503_, v___x_2504_, v___x_2528_, v___f_2525_);
return v___x_2529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2541_, lean_object* v___x_2542_, lean_object* v___x_2543_, lean_object* v_a_2544_, lean_object* v___f_2545_, lean_object* v___f_2546_, lean_object* v___x_2547_, lean_object* v___f_2548_, lean_object* v_val_2549_, lean_object* v_a_2550_, lean_object* v_x_2551_, lean_object* v___y_2552_){
_start:
{
uint8_t v___x_5863__boxed_2553_; lean_object* v_res_2554_; 
v___x_5863__boxed_2553_ = lean_unbox(v___x_2543_);
v_res_2554_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2541_, v___x_2542_, v___x_5863__boxed_2553_, v_a_2544_, v___f_2545_, v___f_2546_, v___x_2547_, v___f_2548_, v_val_2549_, v_a_2550_, v_x_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2556_, lean_object* v___x_2557_, uint8_t v___x_2558_, lean_object* v_a_2559_, lean_object* v___f_2560_, lean_object* v___f_2561_, lean_object* v___x_2562_, lean_object* v___f_2563_, lean_object* v_val_2564_, lean_object* v_x_2565_){
_start:
{
if (lean_obj_tag(v_x_2565_) == 0)
{
lean_object* v___x_2567_; 
lean_dec_ref(v_val_2564_);
lean_dec_ref(v___f_2563_);
lean_dec_ref(v___x_2562_);
lean_dec_ref(v___f_2561_);
lean_dec_ref(v___f_2560_);
lean_dec(v_a_2559_);
lean_dec(v___x_2557_);
lean_dec(v___x_2556_);
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v_x_2565_);
return v___x_2567_;
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2588_; 
v_a_2568_ = lean_ctor_get(v_x_2565_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v_x_2565_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2570_ = v_x_2565_;
v_isShared_2571_ = v_isSharedCheck_2588_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v_x_2565_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2588_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2572_; lean_object* v___f_2573_; lean_object* v_val_2575_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2572_ = lean_box(v___x_2558_);
lean_inc(v_a_2568_);
lean_inc(v___x_2557_);
v___f_2573_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2573_, 0, v___x_2556_);
lean_closure_set(v___f_2573_, 1, v___x_2557_);
lean_closure_set(v___f_2573_, 2, v___x_2572_);
lean_closure_set(v___f_2573_, 3, v_a_2559_);
lean_closure_set(v___f_2573_, 4, v___f_2560_);
lean_closure_set(v___f_2573_, 5, v___f_2561_);
lean_closure_set(v___f_2573_, 6, v___x_2562_);
lean_closure_set(v___f_2573_, 7, v___f_2563_);
lean_closure_set(v___f_2573_, 8, v_val_2564_);
lean_closure_set(v___f_2573_, 9, v_a_2568_);
v___x_2578_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2579_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2568_, v___x_2578_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v_a_2580_);
v___x_2582_ = v___x_2570_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
v_val_2575_ = v___x_2582_;
goto v___jp_2574_;
}
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; 
v_a_2584_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2579_, 1);
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 0);
lean_ctor_set(v___x_2570_, 0, v_a_2584_);
v___x_2586_ = v___x_2570_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
v_val_2575_ = v___x_2586_;
goto v___jp_2574_;
}
}
v___jp_2574_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v_val_2575_);
v___x_2577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2557_, v___x_2558_, v___x_2576_, v___f_2573_);
return v___x_2577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2589_, lean_object* v___x_2590_, lean_object* v___x_2591_, lean_object* v_a_2592_, lean_object* v___f_2593_, lean_object* v___f_2594_, lean_object* v___x_2595_, lean_object* v___f_2596_, lean_object* v_val_2597_, lean_object* v_x_2598_, lean_object* v___y_2599_){
_start:
{
uint8_t v___x_5957__boxed_2600_; lean_object* v_res_2601_; 
v___x_5957__boxed_2600_ = lean_unbox(v___x_2591_);
v_res_2601_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2589_, v___x_2590_, v___x_5957__boxed_2600_, v_a_2592_, v___f_2593_, v___f_2594_, v___x_2595_, v___f_2596_, v_val_2597_, v_x_2598_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2602_, uint8_t v___x_2603_, lean_object* v_a_2604_, lean_object* v___f_2605_, lean_object* v___f_2606_, lean_object* v___f_2607_, lean_object* v_val_2608_, lean_object* v_x_2609_){
_start:
{
if (lean_obj_tag(v_x_2609_) == 0)
{
lean_object* v___x_2611_; 
lean_dec_ref(v_val_2608_);
lean_dec_ref(v___f_2607_);
lean_dec_ref(v___f_2606_);
lean_dec_ref(v___f_2605_);
lean_dec(v_a_2604_);
lean_dec(v___x_2602_);
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_x_2609_);
return v___x_2611_;
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2633_; 
v_a_2612_ = lean_ctor_get(v_x_2609_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v_x_2609_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2614_ = v_x_2609_;
v_isShared_2615_ = v_isSharedCheck_2633_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v_x_2609_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2633_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v_val_2621_; lean_object* v___x_2624_; 
v___x_2616_ = lean_unsigned_to_nat(0u);
v___x_2617_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2618_ = lean_box(v___x_2603_);
v___f_2619_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2619_, 0, v___x_2602_);
lean_closure_set(v___f_2619_, 1, v___x_2616_);
lean_closure_set(v___f_2619_, 2, v___x_2618_);
lean_closure_set(v___f_2619_, 3, v_a_2604_);
lean_closure_set(v___f_2619_, 4, v___f_2605_);
lean_closure_set(v___f_2619_, 5, v___f_2606_);
lean_closure_set(v___f_2619_, 6, v___x_2617_);
lean_closure_set(v___f_2619_, 7, v___f_2607_);
lean_closure_set(v___f_2619_, 8, v_val_2608_);
v___x_2624_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2612_, v___x_2617_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v___x_2627_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v_a_2625_);
v___x_2627_ = v___x_2614_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2625_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
v_val_2621_ = v___x_2627_;
goto v___jp_2620_;
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; 
v_a_2629_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2624_, 1);
if (v_isShared_2615_ == 0)
{
lean_ctor_set_tag(v___x_2614_, 0);
lean_ctor_set(v___x_2614_, 0, v_a_2629_);
v___x_2631_ = v___x_2614_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
v_val_2621_ = v___x_2631_;
goto v___jp_2620_;
}
}
v___jp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2622_, 0, v_val_2621_);
v___x_2623_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2616_, v___x_2603_, v___x_2622_, v___f_2619_);
return v___x_2623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2634_, lean_object* v___x_2635_, lean_object* v_a_2636_, lean_object* v___f_2637_, lean_object* v___f_2638_, lean_object* v___f_2639_, lean_object* v_val_2640_, lean_object* v_x_2641_, lean_object* v___y_2642_){
_start:
{
uint8_t v___x_6037__boxed_2643_; lean_object* v_res_2644_; 
v___x_6037__boxed_2643_ = lean_unbox(v___x_2635_);
v_res_2644_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2634_, v___x_6037__boxed_2643_, v_a_2636_, v___f_2637_, v___f_2638_, v___f_2639_, v_val_2640_, v_x_2641_);
return v_res_2644_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2645_ = lean_box(1);
v___x_2646_ = lean_unsigned_to_nat(2u);
v___x_2647_ = lean_mk_empty_array_with_capacity(v___x_2646_);
v___x_2648_ = lean_array_push(v___x_2647_, v___x_2645_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2649_, lean_object* v_x_2650_){
_start:
{
lean_object* v_val_2653_; 
if (lean_obj_tag(v_x_2650_) == 0)
{
lean_object* v___x_2655_; 
lean_dec(v___x_2649_);
v___x_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2655_, 0, v_x_2650_);
return v___x_2655_;
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2671_; 
v_a_2656_ = lean_ctor_get(v_x_2650_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v_x_2650_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2658_ = v_x_2650_;
v_isShared_2659_ = v_isSharedCheck_2671_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v_x_2650_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2671_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2661_ = lean_array_push(v___x_2660_, v___x_2649_);
v___x_2662_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2656_, v___x_2661_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v_a_2663_; lean_object* v___x_2665_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2662_, 1);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 0, v_a_2663_);
v___x_2665_ = v___x_2658_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
v_val_2653_ = v___x_2665_;
goto v___jp_2652_;
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; 
v_a_2667_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2667_);
lean_dec_ref_known(v___x_2662_, 1);
if (v_isShared_2659_ == 0)
{
lean_ctor_set_tag(v___x_2658_, 0);
lean_ctor_set(v___x_2658_, 0, v_a_2667_);
v___x_2669_ = v___x_2658_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2667_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
v_val_2653_ = v___x_2669_;
goto v___jp_2652_;
}
}
}
}
v___jp_2652_:
{
lean_object* v___x_2654_; 
v___x_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2654_, 0, v_val_2653_);
return v___x_2654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2672_, lean_object* v_x_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2672_, v_x_2673_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2676_, size_t v_i_2677_, lean_object* v_bs_2678_){
_start:
{
uint8_t v___x_2679_; 
v___x_2679_ = lean_usize_dec_lt(v_i_2677_, v_sz_2676_);
if (v___x_2679_ == 0)
{
return v_bs_2678_;
}
else
{
lean_object* v_v_2680_; lean_object* v_fst_2681_; lean_object* v_snd_2682_; lean_object* v___x_2683_; lean_object* v_bs_x27_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; size_t v___x_2692_; size_t v___x_2693_; lean_object* v___x_2694_; 
v_v_2680_ = lean_array_uget_borrowed(v_bs_2678_, v_i_2677_);
v_fst_2681_ = lean_ctor_get(v_v_2680_, 0);
lean_inc(v_fst_2681_);
v_snd_2682_ = lean_ctor_get(v_v_2680_, 1);
lean_inc(v_snd_2682_);
v___x_2683_ = lean_unsigned_to_nat(0u);
v_bs_x27_2684_ = lean_array_uset(v_bs_2678_, v_i_2677_, v___x_2683_);
v___x_2685_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2685_, 0, v_fst_2681_);
v___x_2686_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_snd_2682_);
v___x_2687_ = lean_unsigned_to_nat(2u);
v___x_2688_ = lean_mk_empty_array_with_capacity(v___x_2687_);
v___x_2689_ = lean_array_push(v___x_2688_, v___x_2685_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2686_);
v___x_2691_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
v___x_2692_ = ((size_t)1ULL);
v___x_2693_ = lean_usize_add(v_i_2677_, v___x_2692_);
v___x_2694_ = lean_array_uset(v_bs_x27_2684_, v_i_2677_, v___x_2691_);
v_i_2677_ = v___x_2693_;
v_bs_2678_ = v___x_2694_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2696_, lean_object* v_i_2697_, lean_object* v_bs_2698_){
_start:
{
size_t v_sz_boxed_2699_; size_t v_i_boxed_2700_; lean_object* v_res_2701_; 
v_sz_boxed_2699_ = lean_unbox_usize(v_sz_2696_);
lean_dec(v_sz_2696_);
v_i_boxed_2700_ = lean_unbox_usize(v_i_2697_);
lean_dec(v_i_2697_);
v_res_2701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2699_, v_i_boxed_2700_, v_bs_2698_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2705_, lean_object* v_method_2706_, lean_object* v___f_2707_, lean_object* v___f_2708_, lean_object* v___f_2709_, lean_object* v_x_2710_){
_start:
{
lean_object* v___y_2713_; uint8_t v___y_2714_; lean_object* v___y_2715_; lean_object* v_val_2716_; lean_object* v___y_2720_; uint8_t v___y_2721_; lean_object* v___y_2722_; lean_object* v_val_2723_; uint8_t v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; lean_object* v_val_2730_; 
if (lean_obj_tag(v_x_2710_) == 0)
{
lean_object* v___x_2733_; 
lean_dec_ref(v___f_2709_);
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
lean_dec_ref(v_r_2705_);
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v_x_2710_);
return v___x_2733_;
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2827_; 
v_a_2734_ = lean_ctor_get(v_x_2710_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v_x_2710_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2736_ = v_x_2710_;
v_isShared_2737_ = v_isSharedCheck_2827_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v_x_2710_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2827_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___y_2739_; lean_object* v___y_2740_; uint16_t v_status_2754_; lean_object* v_headers_2755_; lean_object* v_body_2756_; lean_object* v_stream_2757_; lean_object* v___x_2758_; lean_object* v___y_2760_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v_status_2754_ = lean_ctor_get_uint16(v_r_2705_, sizeof(void*)*3);
v_headers_2755_ = lean_ctor_get(v_r_2705_, 0);
lean_inc_ref(v_headers_2755_);
v_body_2756_ = lean_ctor_get(v_r_2705_, 1);
lean_inc_ref(v_body_2756_);
v_stream_2757_ = lean_ctor_get(v_r_2705_, 2);
lean_inc(v_stream_2757_);
lean_dec_ref(v_r_2705_);
v___x_2758_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2819_ = lean_uint16_to_nat(v_status_2754_);
v___x_2820_ = lean_nat_to_int(v___x_2819_);
v___x_2821_ = lean_nat_abs(v___x_2820_);
v___x_2822_ = lean_cstr_to_nat("9007199254740991");
v___x_2823_ = lean_nat_dec_le(v___x_2821_, v___x_2822_);
lean_dec(v___x_2821_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2820_);
v___y_2760_ = v___x_2824_;
goto v___jp_2759_;
}
else
{
double v___x_2825_; lean_object* v___x_2826_; 
v___x_2825_ = l_Float_ofInt(v___x_2820_);
lean_dec(v___x_2820_);
v___x_2826_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2826_, 0, v___x_2825_);
v___y_2760_ = v___x_2826_;
goto v___jp_2759_;
}
v___jp_2738_:
{
lean_object* v___f_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; uint8_t v___x_2744_; lean_object* v___x_2745_; 
v___f_2741_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2741_, 0, v___y_2740_);
lean_closure_set(v___f_2741_, 1, v___y_2739_);
v___x_2742_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2743_ = lean_unsigned_to_nat(0u);
v___x_2744_ = 0;
v___x_2745_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2734_, v___x_2742_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2748_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v___x_2745_, 1);
if (v_isShared_2737_ == 0)
{
lean_ctor_set(v___x_2736_, 0, v_a_2746_);
v___x_2748_ = v___x_2736_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2746_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
v___y_2727_ = v___x_2744_;
v___y_2728_ = v___f_2741_;
v___y_2729_ = v___x_2743_;
v_val_2730_ = v___x_2748_;
goto v___jp_2726_;
}
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; 
v_a_2750_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v___x_2745_, 1);
if (v_isShared_2737_ == 0)
{
lean_ctor_set_tag(v___x_2736_, 0);
lean_ctor_set(v___x_2736_, 0, v_a_2750_);
v___x_2752_ = v___x_2736_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2750_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
v___y_2727_ = v___x_2744_;
v___y_2728_ = v___f_2741_;
v___y_2729_ = v___x_2743_;
v_val_2730_ = v___x_2752_;
goto v___jp_2726_;
}
}
}
v___jp_2759_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; size_t v_sz_2763_; size_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2758_);
lean_ctor_set(v___x_2761_, 1, v___y_2760_);
v___x_2762_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2763_ = lean_array_size(v_headers_2755_);
v___x_2764_ = ((size_t)0ULL);
v___x_2765_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2763_, v___x_2764_, v_headers_2755_);
v___x_2766_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
v___x_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2762_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_box(0);
v___x_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2761_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = l_Lasm_JS_obj(v___x_2770_);
if (lean_obj_tag(v_stream_2757_) == 0)
{
uint8_t v___x_2772_; 
lean_dec_ref(v___f_2709_);
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
v___x_2772_ = l_Lasm_Fetch_bodyless(v_method_2706_, v_status_2754_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_body_2756_);
v___y_2739_ = v___x_2771_;
v___y_2740_ = v___x_2773_;
goto v___jp_2738_;
}
else
{
lean_object* v___x_2774_; 
lean_dec_ref(v_body_2756_);
v___x_2774_ = lean_box(1);
v___y_2739_ = v___x_2771_;
v___y_2740_ = v___x_2774_;
goto v___jp_2738_;
}
}
else
{
lean_object* v_val_2775_; uint8_t v___x_2776_; 
lean_dec_ref(v_body_2756_);
lean_del_object(v___x_2736_);
v_val_2775_ = lean_ctor_get(v_stream_2757_, 0);
lean_inc(v_val_2775_);
lean_dec_ref_known(v_stream_2757_, 1);
v___x_2776_ = l_Lasm_Fetch_bodyless(v_method_2706_, v_status_2754_);
if (v___x_2776_ == 0)
{
lean_object* v___x_2777_; lean_object* v___f_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2777_ = lean_box(v___x_2776_);
lean_inc(v_a_2734_);
v___f_2778_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2778_, 0, v___x_2771_);
lean_closure_set(v___f_2778_, 1, v___x_2777_);
lean_closure_set(v___f_2778_, 2, v_a_2734_);
lean_closure_set(v___f_2778_, 3, v___f_2707_);
lean_closure_set(v___f_2778_, 4, v___f_2708_);
lean_closure_set(v___f_2778_, 5, v___f_2709_);
lean_closure_set(v___f_2778_, 6, v_val_2775_);
v___x_2779_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2780_ = lean_unsigned_to_nat(0u);
v___x_2781_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2734_, v___x_2779_);
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
v___y_2720_ = v___x_2780_;
v___y_2721_ = v___x_2776_;
v___y_2722_ = v___f_2778_;
v_val_2723_ = v___x_2787_;
goto v___jp_2719_;
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
v___y_2720_ = v___x_2780_;
v___y_2721_ = v___x_2776_;
v___y_2722_ = v___f_2778_;
v_val_2723_ = v___x_2795_;
goto v___jp_2719_;
}
}
}
}
else
{
lean_object* v___f_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; uint8_t v___x_2801_; lean_object* v___x_2802_; 
lean_dec(v_val_2775_);
lean_dec_ref(v___f_2709_);
lean_dec_ref(v___f_2708_);
lean_dec_ref(v___f_2707_);
v___f_2798_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2798_, 0, v___x_2771_);
v___x_2799_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = 0;
v___x_2802_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2734_, v___x_2799_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2802_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
lean_ctor_set_tag(v___x_2805_, 1);
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
v___y_2713_ = v___x_2800_;
v___y_2714_ = v___x_2801_;
v___y_2715_ = v___f_2798_;
v_val_2716_ = v___x_2808_;
goto v___jp_2712_;
}
}
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
v_a_2811_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2802_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2802_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
lean_ctor_set_tag(v___x_2813_, 0);
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
v___y_2713_ = v___x_2800_;
v___y_2714_ = v___x_2801_;
v___y_2715_ = v___f_2798_;
v_val_2716_ = v___x_2816_;
goto v___jp_2712_;
}
}
}
}
}
}
}
}
v___jp_2712_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v_val_2716_);
v___x_2718_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2713_, v___y_2714_, v___x_2717_, v___y_2715_);
return v___x_2718_;
}
v___jp_2719_:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v_val_2723_);
v___x_2725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2720_, v___y_2721_, v___x_2724_, v___y_2722_);
return v___x_2725_;
}
v___jp_2726_:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_val_2730_);
v___x_2732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2729_, v___y_2727_, v___x_2731_, v___y_2728_);
return v___x_2732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2828_, lean_object* v_method_2829_, lean_object* v___f_2830_, lean_object* v___f_2831_, lean_object* v___f_2832_, lean_object* v_x_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2828_, v_method_2829_, v___f_2830_, v___f_2831_, v___f_2832_, v_x_2833_);
lean_dec_ref(v_method_2829_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2837_, lean_object* v_r_2838_){
_start:
{
lean_object* v___f_2840_; lean_object* v___f_2841_; lean_object* v___x_2842_; uint8_t v___x_2843_; lean_object* v_val_2845_; lean_object* v___x_2848_; 
v___f_2840_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2841_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2841_, 0, v_r_2838_);
lean_closure_set(v___f_2841_, 1, v_method_2837_);
lean_closure_set(v___f_2841_, 2, v___f_2840_);
lean_closure_set(v___f_2841_, 3, v___f_2840_);
lean_closure_set(v___f_2841_, 4, v___f_2840_);
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = 0;
v___x_2848_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2848_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2848_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set_tag(v___x_2851_, 1);
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
v_val_2845_ = v___x_2854_;
goto v___jp_2844_;
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
v_a_2857_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2848_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2848_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
lean_ctor_set_tag(v___x_2859_, 0);
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
v_val_2845_ = v___x_2862_;
goto v___jp_2844_;
}
}
}
v___jp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2846_, 0, v_val_2845_);
v___x_2847_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2842_, v___x_2843_, v___x_2846_, v___f_2841_);
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2865_, lean_object* v_r_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2865_, v_r_2866_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_st_mk_ref(v___x_2870_);
v___x_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2875_){
_start:
{
if (lean_obj_tag(v_x_2875_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2885_; 
v_a_2877_ = lean_ctor_get(v_x_2875_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_x_2875_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2879_ = v_x_2875_;
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_x_2875_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2885_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2896_; 
v_a_2886_ = lean_ctor_get(v_x_2875_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_x_2875_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2888_ = v_x_2875_;
v_isShared_2889_ = v_isSharedCheck_2896_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v_x_2875_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2896_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2893_; 
v___x_2890_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2891_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2891_, 0, v_a_2886_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 0, v___x_2891_);
v___x_2893_ = v___x_2888_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
lean_object* v___x_2894_; 
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2897_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2900_, lean_object* v___x_2901_, lean_object* v___f_2902_, lean_object* v_x_2903_){
_start:
{
if (lean_obj_tag(v_x_2903_) == 0)
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2913_; 
lean_dec_ref(v___f_2902_);
lean_dec(v___x_2901_);
lean_dec_ref(v___y_2900_);
v_a_2905_ = lean_ctor_get(v_x_2903_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_x_2903_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2907_ = v_x_2903_;
v_isShared_2908_ = v_isSharedCheck_2913_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v_x_2903_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2913_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
return v___x_2911_;
}
}
}
else
{
lean_object* v_a_2914_; uint8_t v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v_a_2914_ = lean_ctor_get(v_x_2903_, 0);
lean_inc(v_a_2914_);
lean_dec_ref_known(v_x_2903_, 1);
v___x_2915_ = 0;
v___x_2916_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2900_, v_a_2914_);
v___x_2917_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2901_, v___x_2915_, v___x_2916_, v___f_2902_);
return v___x_2917_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2918_, lean_object* v___x_2919_, lean_object* v___f_2920_, lean_object* v_x_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2918_, v___x_2919_, v___f_2920_, v_x_2921_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2924_, lean_object* v___x_2925_, lean_object* v___f_2926_, lean_object* v_req_2927_){
_start:
{
uint8_t v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2929_ = 0;
v___x_2930_ = l_Lasm_Fetch_respond(v_handler_2924_, v_req_2927_);
v___x_2931_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2925_, v___x_2929_, v___x_2930_, v___f_2926_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2932_, lean_object* v___x_2933_, lean_object* v___f_2934_, lean_object* v_req_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v_res_2937_; 
v_res_2937_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2932_, v___x_2933_, v___f_2934_, v_req_2935_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2938_, lean_object* v_x_2939_){
_start:
{
if (lean_obj_tag(v_x_2939_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v___f_2938_);
v_a_2941_ = lean_ctor_get(v_x_2939_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_x_2939_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2943_ = v_x_2939_;
v_isShared_2944_ = v_isSharedCheck_2949_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v_x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2949_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
return v___x_2947_;
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2951_; 
v_a_2950_ = lean_ctor_get(v_x_2939_, 0);
lean_inc(v_a_2950_);
lean_dec_ref_known(v_x_2939_, 1);
v___x_2951_ = lean_apply_2(v___f_2938_, v_a_2950_, lean_box(0));
return v___x_2951_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2952_, lean_object* v_x_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2952_, v_x_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v_headers_2958_, lean_object* v___f_2959_, lean_object* v___x_2960_, uint8_t v___x_2961_, lean_object* v___f_2962_, lean_object* v_x_2963_){
_start:
{
if (lean_obj_tag(v_x_2963_) == 0)
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2973_; 
lean_dec_ref(v___f_2962_);
lean_dec(v___x_2960_);
lean_dec_ref(v___f_2959_);
lean_dec_ref(v_headers_2958_);
lean_dec_ref(v___y_2957_);
lean_dec_ref(v___y_2956_);
v_a_2965_ = lean_ctor_get(v_x_2963_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_x_2963_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2967_ = v_x_2963_;
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v_x_2963_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2971_; 
v___x_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
return v___x_2971_;
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2984_; 
v_a_2974_ = lean_ctor_get(v_x_2963_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_x_2963_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2976_ = v_x_2963_;
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v_x_2963_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2978_; lean_object* v___x_2980_; 
v___x_2978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2978_, 0, v___y_2956_);
lean_ctor_set(v___x_2978_, 1, v___y_2957_);
lean_ctor_set(v___x_2978_, 2, v_headers_2958_);
lean_ctor_set(v___x_2978_, 3, v_a_2974_);
lean_ctor_set(v___x_2978_, 4, v___f_2959_);
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v___x_2978_);
v___x_2980_ = v___x_2976_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
v___x_2982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2960_, v___x_2961_, v___x_2981_, v___f_2962_);
return v___x_2982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v_headers_2987_, lean_object* v___f_2988_, lean_object* v___x_2989_, lean_object* v___x_2990_, lean_object* v___f_2991_, lean_object* v_x_2992_, lean_object* v___y_2993_){
_start:
{
uint8_t v___x_7749__boxed_2994_; lean_object* v_res_2995_; 
v___x_7749__boxed_2994_ = lean_unbox(v___x_2990_);
v_res_2995_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2985_, v___y_2986_, v_headers_2987_, v___f_2988_, v___x_2989_, v___x_7749__boxed_2994_, v___f_2991_, v_x_2992_);
return v_res_2995_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3001_ = lean_string_utf8_byte_size(v___x_3000_);
return v___x_3001_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; uint8_t v___x_3004_; 
v___x_3002_ = lean_unsigned_to_nat(0u);
v___x_3003_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_3004_ = lean_nat_dec_eq(v___x_3003_, v___x_3002_);
return v___x_3004_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3009_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_3010_ = lean_unsigned_to_nat(46u);
v___x_3011_ = lean_unsigned_to_nat(193u);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_3013_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_3014_ = l_mkPanicMessageWithDecl(v___x_3013_, v___x_3012_, v___x_3011_, v___x_3010_, v___x_3009_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_3016_, lean_object* v_d_3017_){
_start:
{
lean_object* v___y_3020_; lean_object* v___y_3021_; 
if (lean_obj_tag(v_d_3017_) == 6)
{
lean_object* v_b_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
v_b_3025_ = lean_ctor_get(v_d_3017_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_d_3017_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v_d_3017_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_b_3025_);
lean_dec(v_d_3017_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
lean_ctor_set_tag(v___x_3027_, 0);
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_b_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
else
{
lean_object* v___x_3033_; lean_object* v_received_3035_; 
v___x_3033_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_3017_) == 9)
{
lean_object* v_value_3049_; lean_object* v_description_3050_; uint8_t v___x_3051_; 
v_value_3049_ = lean_ctor_get(v_d_3017_, 0);
v_description_3050_ = lean_ctor_get(v_d_3017_, 1);
v___x_3051_ = lean_string_dec_eq(v_description_3050_, v___x_3033_);
if (v___x_3051_ == 0)
{
goto v___jp_3047_;
}
else
{
uint32_t v___x_3052_; uint64_t v___x_3053_; lean_object* v___x_3054_; uint32_t v___x_3055_; lean_object* v___x_3056_; 
lean_inc_n(v_value_3049_, 2);
lean_dec_ref_known(v_d_3017_, 2);
v___x_3052_ = 206;
v___x_3053_ = 0ULL;
v___x_3054_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3054_, 0, v_value_3049_);
lean_ctor_set(v___x_3054_, 1, v___x_3033_);
v___x_3055_ = lasm_js_value_handle(v_value_3049_);
lean_dec(v_value_3049_);
v___x_3056_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3052_, v___x_3053_, v___x_3054_, v___x_3055_);
lean_dec_ref_known(v___x_3054_, 2);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; uint8_t v___x_3058_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3058_ = lean_string_validate_utf8(v_a_3057_);
if (v___x_3058_ == 0)
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
lean_dec(v_a_3057_);
v___x_3059_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3060_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3059_);
v_received_3035_ = v___x_3060_;
goto v___jp_3034_;
}
else
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_string_from_utf8_unchecked(v_a_3057_);
v_received_3035_ = v___x_3061_;
goto v___jp_3034_;
}
}
else
{
lean_object* v___x_3062_; 
lean_dec_ref_known(v___x_3056_, 1);
v___x_3062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_3035_ = v___x_3062_;
goto v___jp_3034_;
}
}
}
else
{
goto v___jp_3047_;
}
v___jp_3034_:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
v___x_3036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3037_ = lean_string_append(v___x_3036_, v_context_3016_);
v___x_3038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3039_ = lean_string_append(v___x_3037_, v___x_3038_);
v___x_3040_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_3041_ = lean_string_append(v___x_3039_, v___x_3040_);
v___x_3042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3043_ = lean_string_append(v___x_3041_, v___x_3042_);
v___x_3044_ = lean_string_append(v___x_3043_, v_received_3035_);
lean_dec_ref(v_received_3035_);
v___x_3045_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; 
v___x_3046_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_3020_ = v___x_3044_;
v___y_3021_ = v___x_3046_;
goto v___jp_3019_;
}
else
{
v___y_3020_ = v___x_3044_;
v___y_3021_ = v___x_3033_;
goto v___jp_3019_;
}
}
v___jp_3047_:
{
lean_object* v___x_3048_; 
v___x_3048_ = l_Lasm_JS_Data_describe(v_d_3017_);
v_received_3035_ = v___x_3048_;
goto v___jp_3034_;
}
}
v___jp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3022_ = lean_string_append(v___y_3020_, v___y_3021_);
v___x_3023_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
v___x_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
return v___x_3024_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3063_, lean_object* v_d_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3063_, v_d_3064_);
lean_dec_ref(v_context_3063_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_3067_, lean_object* v_bytes_3068_){
_start:
{
lean_object* v___x_3070_; 
v___x_3070_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3068_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3072_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3070_, 1);
v___x_3072_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3067_, v_a_3071_);
return v___x_3072_;
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
v_a_3073_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3070_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3070_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_3081_, lean_object* v_bytes_3082_, lean_object* v_a_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_3081_, v_bytes_3082_);
lean_dec_ref(v_bytes_3082_);
lean_dec_ref(v_context_3081_);
return v_res_3084_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_3085_, uint64_t v_extra_3086_){
_start:
{
uint64_t v___x_3087_; uint64_t v___y_3089_; 
v___x_3087_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3085_ == 0)
{
uint64_t v___x_3092_; 
v___x_3092_ = 0ULL;
v___y_3089_ = v___x_3092_;
goto v___jp_3088_;
}
else
{
uint64_t v___x_3093_; 
v___x_3093_ = 2ULL;
v___y_3089_ = v___x_3093_;
goto v___jp_3088_;
}
v___jp_3088_:
{
uint64_t v___x_3090_; uint64_t v___x_3091_; 
v___x_3090_ = lean_uint64_lor(v___x_3087_, v___y_3089_);
v___x_3091_ = lean_uint64_lor(v___x_3090_, v_extra_3086_);
return v___x_3091_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_3094_, lean_object* v_extra_3095_){
_start:
{
uint8_t v_await_boxed_3096_; uint64_t v_extra_boxed_3097_; uint64_t v_res_3098_; lean_object* v_r_3099_; 
v_await_boxed_3096_ = lean_unbox(v_await_3094_);
v_extra_boxed_3097_ = lean_unbox_uint64(v_extra_3095_);
lean_dec_ref(v_extra_3095_);
v_res_3098_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_3096_, v_extra_boxed_3097_);
v_r_3099_ = lean_box_uint64(v_res_3098_);
return v_r_3099_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3100_; uint8_t v___x_3101_; uint64_t v___x_3102_; 
v___x_3100_ = 4ULL;
v___x_3101_ = 0;
v___x_3102_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3101_, v___x_3100_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_3103_, lean_object* v_args_3104_){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; uint64_t v___x_3109_; lean_object* v___x_3110_; 
v___x_3106_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3107_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3107_, 0, v_c_3103_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = lean_box(0);
v___x_3109_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_3110_ = l_Lasm_JS_Value_invokeRaw(v___x_3107_, v___x_3108_, v_args_3104_, v___x_3109_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3110_, 1);
v___x_3112_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_3113_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3112_, v_a_3111_);
lean_dec(v_a_3111_);
return v___x_3113_;
}
else
{
return v___x_3110_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_3114_, lean_object* v_args_3115_, lean_object* v_a_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_3114_, v_args_3115_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_3118_, uint8_t v___x_3119_, lean_object* v___f_3120_, lean_object* v_a_3121_, lean_object* v_x_3122_){
_start:
{
lean_object* v_val_3125_; 
if (lean_obj_tag(v_x_3122_) == 0)
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v_a_3121_);
lean_dec_ref(v___f_3120_);
lean_dec(v___x_3118_);
v_a_3128_ = lean_ctor_get(v_x_3122_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_x_3122_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3130_ = v_x_3122_;
v_isShared_3131_ = v_isSharedCheck_3136_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v_x_3122_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3136_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
return v___x_3134_;
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3155_; 
v_a_3137_ = lean_ctor_get(v_x_3122_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_x_3122_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3139_ = v_x_3122_;
v_isShared_3140_ = v_isSharedCheck_3155_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v_x_3122_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3155_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3141_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3142_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3142_, 0, v_a_3137_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = lean_unsigned_to_nat(1u);
v___x_3144_ = lean_mk_empty_array_with_capacity(v___x_3143_);
v___x_3145_ = lean_array_push(v___x_3144_, v___x_3142_);
v___x_3146_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3121_, v___x_3145_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3149_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v___x_3146_, 1);
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 0, v_a_3147_);
v___x_3149_ = v___x_3139_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
v_val_3125_ = v___x_3149_;
goto v___jp_3124_;
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; 
v_a_3151_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3151_);
lean_dec_ref_known(v___x_3146_, 1);
if (v_isShared_3140_ == 0)
{
lean_ctor_set_tag(v___x_3139_, 0);
lean_ctor_set(v___x_3139_, 0, v_a_3151_);
v___x_3153_ = v___x_3139_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
v_val_3125_ = v___x_3153_;
goto v___jp_3124_;
}
}
}
}
v___jp_3124_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v_val_3125_);
v___x_3127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3118_, v___x_3119_, v___x_3126_, v___f_3120_);
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_3156_, lean_object* v___x_3157_, lean_object* v___f_3158_, lean_object* v_a_3159_, lean_object* v_x_3160_, lean_object* v___y_3161_){
_start:
{
uint8_t v___x_8035__boxed_3162_; lean_object* v_res_3163_; 
v___x_8035__boxed_3162_ = lean_unbox(v___x_3157_);
v_res_3163_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_3156_, v___x_8035__boxed_3162_, v___f_3158_, v_a_3159_, v_x_3160_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v_headers_3166_, lean_object* v___x_3167_, lean_object* v___x_3168_, lean_object* v___f_3169_, lean_object* v_x_3170_){
_start:
{
if (lean_obj_tag(v_x_3170_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3180_; 
lean_dec_ref(v___f_3169_);
lean_dec(v___x_3168_);
lean_dec_ref(v___x_3167_);
lean_dec_ref(v_headers_3166_);
lean_dec_ref(v___y_3165_);
lean_dec_ref(v___y_3164_);
v_a_3172_ = lean_ctor_get(v_x_3170_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_x_3170_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3174_ = v_x_3170_;
v_isShared_3175_ = v_isSharedCheck_3180_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v_x_3170_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3180_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; 
v___x_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
return v___x_3178_;
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3192_; 
v_a_3181_ = lean_ctor_get(v_x_3170_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_x_3170_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3183_ = v_x_3170_;
v_isShared_3184_ = v_isSharedCheck_3192_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v_x_3170_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3192_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3185_; uint8_t v___x_3186_; lean_object* v___x_3188_; 
v___x_3185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3185_, 0, v___y_3164_);
lean_ctor_set(v___x_3185_, 1, v___y_3165_);
lean_ctor_set(v___x_3185_, 2, v_headers_3166_);
lean_ctor_set(v___x_3185_, 3, v___x_3167_);
lean_ctor_set(v___x_3185_, 4, v_a_3181_);
v___x_3186_ = 0;
if (v_isShared_3184_ == 0)
{
lean_ctor_set(v___x_3183_, 0, v___x_3185_);
v___x_3188_ = v___x_3183_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v___x_3185_);
v___x_3188_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
v___x_3190_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3168_, v___x_3186_, v___x_3189_, v___f_3169_);
return v___x_3190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v_headers_3195_, lean_object* v___x_3196_, lean_object* v___x_3197_, lean_object* v___f_3198_, lean_object* v_x_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_3193_, v___y_3194_, v_headers_3195_, v___x_3196_, v___x_3197_, v___f_3198_, v_x_3199_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3202_, lean_object* v_x_3203_){
_start:
{
if (lean_obj_tag(v_x_3203_) == 0)
{
lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3213_; 
lean_dec_ref(v___f_3202_);
v_a_3205_ = lean_ctor_get(v_x_3203_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v_x_3203_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3207_ = v_x_3203_;
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v_x_3203_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_a_3205_);
v___x_3210_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
return v___x_3211_;
}
}
}
else
{
lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3225_; 
v_isSharedCheck_3225_ = !lean_is_exclusive(v_x_3203_);
if (v_isSharedCheck_3225_ == 0)
{
lean_object* v_unused_3226_; 
v_unused_3226_ = lean_ctor_get(v_x_3203_, 0);
lean_dec(v_unused_3226_);
v___x_3215_ = v_x_3203_;
v_isShared_3216_ = v_isSharedCheck_3225_;
goto v_resetjp_3214_;
}
else
{
lean_dec(v_x_3203_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3225_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3217_; uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3221_; 
v___x_3217_ = lean_unsigned_to_nat(0u);
v___x_3218_ = 0;
v___x_3219_ = lean_io_promise_new();
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 0, v___x_3219_);
v___x_3221_ = v___x_3215_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v___x_3219_);
v___x_3221_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
v___x_3223_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3217_, v___x_3218_, v___x_3222_, v___f_3202_);
return v___x_3223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3227_, lean_object* v_x_3228_, lean_object* v___y_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3227_, v_x_3228_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3231_, lean_object* v_x_3232_){
_start:
{
if (lean_obj_tag(v_x_3232_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3242_; 
lean_dec_ref(v___f_3231_);
v_a_3234_ = lean_ctor_get(v_x_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_x_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3236_ = v_x_3232_;
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v_x_3232_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3240_; 
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
return v___x_3240_;
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3244_; 
v_a_3243_ = lean_ctor_get(v_x_3232_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v_x_3232_, 1);
v___x_3244_ = lean_apply_2(v___f_3231_, v_a_3243_, lean_box(0));
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3245_, v_x_3246_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v_context_3249_, lean_object* v_x_3250_){
_start:
{
lean_object* v_val_3253_; 
if (lean_obj_tag(v_x_3250_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3263_; 
v_a_3255_ = lean_ctor_get(v_x_3250_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v_x_3250_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3257_ = v_x_3250_;
v_isShared_3258_ = v_isSharedCheck_3263_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v_x_3250_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3263_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
lean_object* v___x_3261_; 
v___x_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
return v___x_3261_;
}
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3277_; 
v_a_3264_ = lean_ctor_get(v_x_3250_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v_x_3250_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3266_ = v_x_3250_;
v_isShared_3267_ = v_isSharedCheck_3277_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v_x_3250_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3277_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3249_, v_a_3264_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 0, v_a_3269_);
v___x_3271_ = v___x_3266_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3269_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
v_val_3253_ = v___x_3271_;
goto v___jp_3252_;
}
}
else
{
lean_object* v_a_3273_; lean_object* v___x_3275_; 
v_a_3273_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v___x_3268_, 1);
if (v_isShared_3267_ == 0)
{
lean_ctor_set_tag(v___x_3266_, 0);
lean_ctor_set(v___x_3266_, 0, v_a_3273_);
v___x_3275_ = v___x_3266_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
v_val_3253_ = v___x_3275_;
goto v___jp_3252_;
}
}
}
}
v___jp_3252_:
{
lean_object* v___x_3254_; 
v___x_3254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3254_, 0, v_val_3253_);
return v___x_3254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v_context_3278_, lean_object* v_x_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v_context_3278_, v_x_3279_);
lean_dec_ref(v_context_3278_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_3282_, uint32_t v_op_3283_, uint64_t v_flags_3284_, lean_object* v_payload_3285_, lean_object* v___f_3286_, lean_object* v___f_3287_, lean_object* v___f_3288_, lean_object* v_x_3289_){
_start:
{
if (lean_obj_tag(v_x_3289_) == 0)
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3299_; 
lean_dec_ref(v___f_3288_);
lean_dec_ref(v___f_3287_);
lean_dec_ref(v___f_3286_);
lean_dec(v_payload_3285_);
v_a_3291_ = lean_ctor_get(v_x_3289_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v_x_3289_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3293_ = v_x_3289_;
v_isShared_3294_ = v_isSharedCheck_3299_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v_x_3289_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3299_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3296_);
return v___x_3297_;
}
}
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3346_; 
v_a_3300_ = lean_ctor_get(v_x_3289_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_x_3289_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3302_ = v_x_3289_;
v_isShared_3303_ = v_isSharedCheck_3346_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v_x_3289_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3346_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; uint8_t v___x_3306_; 
v___x_3304_ = lean_string_utf8_byte_size(v_failurePrefix_3282_);
v___x_3305_ = lean_unsigned_to_nat(0u);
v___x_3306_ = lean_nat_dec_eq(v___x_3304_, v___x_3305_);
if (v___x_3306_ == 0)
{
lean_object* v___f_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___f_3311_; lean_object* v_val_3313_; lean_object* v___x_3318_; 
lean_dec_ref(v___f_3288_);
lean_inc(v_a_3300_);
v___f_3307_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3307_, 0, v_a_3300_);
v___x_3308_ = lean_box(v___x_3306_);
v___x_3309_ = lean_box_uint32(v_op_3283_);
v___x_3310_ = lean_box_uint64(v_flags_3284_);
lean_inc(v_payload_3285_);
v___f_3311_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3311_, 0, v___x_3305_);
lean_closure_set(v___f_3311_, 1, v___x_3308_);
lean_closure_set(v___f_3311_, 2, v___f_3307_);
lean_closure_set(v___f_3311_, 3, v_a_3300_);
lean_closure_set(v___f_3311_, 4, v___x_3309_);
lean_closure_set(v___f_3311_, 5, v___x_3310_);
lean_closure_set(v___f_3311_, 6, v_payload_3285_);
v___x_3318_ = l_Lasm_JS_Wire_encodeIO(v_payload_3285_);
lean_dec(v_payload_3285_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v_a_3319_; lean_object* v___x_3321_; 
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v___x_3318_, 1);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 0, v_a_3319_);
v___x_3321_ = v___x_3302_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3319_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
v_val_3313_ = v___x_3321_;
goto v___jp_3312_;
}
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; 
v_a_3323_ = lean_ctor_get(v___x_3318_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3318_, 1);
if (v_isShared_3303_ == 0)
{
lean_ctor_set_tag(v___x_3302_, 0);
lean_ctor_set(v___x_3302_, 0, v_a_3323_);
v___x_3325_ = v___x_3302_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3323_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
v_val_3313_ = v___x_3325_;
goto v___jp_3312_;
}
}
v___jp_3312_:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3314_, 0, v_val_3313_);
v___x_3315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3305_, v___x_3306_, v___x_3314_, v___f_3311_);
v___x_3316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3305_, v___x_3306_, v___x_3315_, v___f_3286_);
v___x_3317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3305_, v___x_3306_, v___x_3316_, v___f_3287_);
return v___x_3317_;
}
}
else
{
lean_object* v___f_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___f_3330_; uint8_t v___x_3331_; lean_object* v_val_3333_; lean_object* v___x_3337_; 
lean_dec_ref(v___f_3287_);
lean_dec_ref(v___f_3286_);
lean_inc(v_a_3300_);
v___f_3327_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3327_, 0, v_a_3300_);
v___x_3328_ = lean_box_uint32(v_op_3283_);
v___x_3329_ = lean_box_uint64(v_flags_3284_);
lean_inc(v_payload_3285_);
v___f_3330_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3330_, 0, v___f_3327_);
lean_closure_set(v___f_3330_, 1, v_a_3300_);
lean_closure_set(v___f_3330_, 2, v___x_3328_);
lean_closure_set(v___f_3330_, 3, v___x_3329_);
lean_closure_set(v___f_3330_, 4, v_payload_3285_);
v___x_3331_ = 0;
v___x_3337_ = l_Lasm_JS_Wire_encodeIO(v_payload_3285_);
lean_dec(v_payload_3285_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3340_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 0, v_a_3338_);
v___x_3340_ = v___x_3302_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3338_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
v_val_3333_ = v___x_3340_;
goto v___jp_3332_;
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; 
v_a_3342_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3342_);
lean_dec_ref_known(v___x_3337_, 1);
if (v_isShared_3303_ == 0)
{
lean_ctor_set_tag(v___x_3302_, 0);
lean_ctor_set(v___x_3302_, 0, v_a_3342_);
v___x_3344_ = v___x_3302_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3342_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
v_val_3333_ = v___x_3344_;
goto v___jp_3332_;
}
}
v___jp_3332_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3334_, 0, v_val_3333_);
v___x_3335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3305_, v___x_3331_, v___x_3334_, v___f_3330_);
v___x_3336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3305_, v___x_3331_, v___x_3335_, v___f_3288_);
return v___x_3336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_3347_, lean_object* v_op_3348_, lean_object* v_flags_3349_, lean_object* v_payload_3350_, lean_object* v___f_3351_, lean_object* v___f_3352_, lean_object* v___f_3353_, lean_object* v_x_3354_, lean_object* v___y_3355_){
_start:
{
uint32_t v_op_boxed_3356_; uint64_t v_flags_boxed_3357_; lean_object* v_res_3358_; 
v_op_boxed_3356_ = lean_unbox_uint32(v_op_3348_);
lean_dec(v_op_3348_);
v_flags_boxed_3357_ = lean_unbox_uint64(v_flags_3349_);
lean_dec_ref(v_flags_3349_);
v_res_3358_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(v_failurePrefix_3347_, v_op_boxed_3356_, v_flags_boxed_3357_, v_payload_3350_, v___f_3351_, v___f_3352_, v___f_3353_, v_x_3354_);
lean_dec_ref(v_failurePrefix_3347_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v___f_3359_, lean_object* v_bytes_3360_){
_start:
{
lean_object* v___x_3362_; uint8_t v___x_3363_; lean_object* v_val_3365_; lean_object* v___x_3368_; 
v___x_3362_ = lean_unsigned_to_nat(0u);
v___x_3363_ = 0;
v___x_3368_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3360_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3368_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3368_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
lean_ctor_set_tag(v___x_3371_, 1);
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
v_val_3365_ = v___x_3374_;
goto v___jp_3364_;
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
v_a_3377_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3368_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3368_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
lean_ctor_set_tag(v___x_3379_, 0);
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
v_val_3365_ = v___x_3382_;
goto v___jp_3364_;
}
}
}
v___jp_3364_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3366_, 0, v_val_3365_);
v___x_3367_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3362_, v___x_3363_, v___x_3366_, v___f_3359_);
return v___x_3367_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v___f_3385_, lean_object* v_bytes_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v___f_3385_, v_bytes_3386_);
lean_dec_ref(v_bytes_3386_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3389_, uint32_t v_op_3390_, uint64_t v_flags_3391_, lean_object* v_payload_3392_, lean_object* v_failurePrefix_3393_){
_start:
{
lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___f_3397_; lean_object* v___f_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___f_3401_; lean_object* v___f_3402_; lean_object* v___x_3403_; uint8_t v___x_3404_; lean_object* v_val_3406_; lean_object* v___x_3409_; 
v___f_3395_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3395_, 0, v_context_3389_);
v___f_3396_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3396_, 0, v___f_3395_);
v___f_3397_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3397_, 0, v___f_3396_);
lean_inc_ref(v_failurePrefix_3393_);
v___f_3398_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3398_, 0, v_failurePrefix_3393_);
v___x_3399_ = lean_box_uint32(v_op_3390_);
v___x_3400_ = lean_box_uint64(v_flags_3391_);
lean_inc_ref(v___f_3397_);
v___f_3401_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3401_, 0, v_failurePrefix_3393_);
lean_closure_set(v___f_3401_, 1, v___x_3399_);
lean_closure_set(v___f_3401_, 2, v___x_3400_);
lean_closure_set(v___f_3401_, 3, v_payload_3392_);
lean_closure_set(v___f_3401_, 4, v___f_3398_);
lean_closure_set(v___f_3401_, 5, v___f_3397_);
lean_closure_set(v___f_3401_, 6, v___f_3397_);
v___f_3402_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3402_, 0, v___f_3401_);
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = 0;
v___x_3409_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3409_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3409_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 1);
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
v_val_3406_ = v___x_3415_;
goto v___jp_3405_;
}
}
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
v_a_3418_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3409_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3409_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
lean_ctor_set_tag(v___x_3420_, 0);
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
v_val_3406_ = v___x_3423_;
goto v___jp_3405_;
}
}
}
v___jp_3405_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3407_, 0, v_val_3406_);
v___x_3408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3403_, v___x_3404_, v___x_3407_, v___f_3402_);
return v___x_3408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3426_, lean_object* v_op_3427_, lean_object* v_flags_3428_, lean_object* v_payload_3429_, lean_object* v_failurePrefix_3430_, lean_object* v_a_3431_){
_start:
{
uint32_t v_op_boxed_3432_; uint64_t v_flags_boxed_3433_; lean_object* v_res_3434_; 
v_op_boxed_3432_ = lean_unbox_uint32(v_op_3427_);
lean_dec(v_op_3427_);
v_flags_boxed_3433_ = lean_unbox_uint64(v_flags_3428_);
lean_dec_ref(v_flags_3428_);
v_res_3434_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3426_, v_op_boxed_3432_, v_flags_boxed_3433_, v_payload_3429_, v_failurePrefix_3430_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3435_, lean_object* v_name_3436_, lean_object* v_args_3437_){
_start:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; uint32_t v___x_3444_; uint64_t v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3439_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3440_, 0, v_o_3435_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
lean_inc_ref(v_name_3436_);
v___x_3441_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3441_, 0, v_name_3436_);
v___x_3442_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3443_ = lean_string_append(v___x_3442_, v_name_3436_);
lean_dec_ref(v_name_3436_);
v___x_3444_ = 205;
v___x_3445_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3446_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3446_, 0, v_args_3437_);
v___x_3447_ = lean_unsigned_to_nat(3u);
v___x_3448_ = lean_mk_empty_array_with_capacity(v___x_3447_);
v___x_3449_ = lean_array_push(v___x_3448_, v___x_3440_);
v___x_3450_ = lean_array_push(v___x_3449_, v___x_3441_);
v___x_3451_ = lean_array_push(v___x_3450_, v___x_3446_);
v___x_3452_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3451_);
v___x_3453_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3443_, v___x_3444_, v___x_3445_, v___x_3452_, v___x_3439_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3454_, lean_object* v_name_3455_, lean_object* v_args_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3454_, v_name_3455_, v_args_3456_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v_options_3463_, lean_object* v___f_3464_, lean_object* v___f_3465_, lean_object* v_a_3466_, lean_object* v_value_3467_, lean_object* v_a_3468_, lean_object* v___x_3469_, lean_object* v___f_3470_, lean_object* v___f_3471_, lean_object* v_headers_3472_){
_start:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___f_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; uint8_t v___x_3486_; 
v___x_3474_ = lean_mk_empty_array_with_capacity(v___x_3460_);
v___x_3475_ = l_ByteArray_empty;
v___f_3476_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3474_);
lean_inc_ref(v___y_3462_);
lean_inc_ref(v___y_3461_);
v___x_3477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3477_, 0, v___y_3461_);
lean_ctor_set(v___x_3477_, 1, v___y_3462_);
lean_ctor_set(v___x_3477_, 2, v___x_3474_);
lean_ctor_set(v___x_3477_, 3, v___x_3475_);
lean_ctor_set(v___x_3477_, 4, v___f_3476_);
v___x_3478_ = l_Lasm_Fetch_Request_path(v___x_3477_);
v___x_3479_ = lean_apply_1(v_options_3463_, v___x_3478_);
v___x_3486_ = lean_unbox(v___x_3479_);
if (v___x_3486_ == 0)
{
lean_object* v___x_3487_; uint8_t v___x_3488_; 
lean_dec_ref(v___f_3471_);
lean_dec_ref(v___f_3470_);
v___x_3487_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_3488_ = lean_string_dec_eq(v___y_3461_, v___x_3487_);
if (v___x_3488_ == 0)
{
lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3489_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3490_ = lean_string_dec_eq(v___y_3461_, v___x_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___f_3492_; lean_object* v___x_3493_; lean_object* v___f_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_dec_ref(v___f_3464_);
v___x_3491_ = lean_box(v___x_3490_);
lean_inc_n(v___x_3460_, 2);
v___f_3492_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3492_, 0, v___y_3461_);
lean_closure_set(v___f_3492_, 1, v___y_3462_);
lean_closure_set(v___f_3492_, 2, v_headers_3472_);
lean_closure_set(v___f_3492_, 3, v___f_3476_);
lean_closure_set(v___f_3492_, 4, v___x_3460_);
lean_closure_set(v___f_3492_, 5, v___x_3491_);
lean_closure_set(v___f_3492_, 6, v___f_3465_);
v___x_3493_ = lean_box(v___x_3490_);
v___f_3494_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3494_, 0, v___x_3460_);
lean_closure_set(v___f_3494_, 1, v___x_3493_);
lean_closure_set(v___f_3494_, 2, v___f_3492_);
lean_closure_set(v___f_3494_, 3, v_a_3466_);
v___x_3495_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3496_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3467_, v___x_3495_, v___x_3474_);
v___x_3497_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3460_, v___x_3490_, v___x_3496_, v___f_3494_);
return v___x_3497_;
}
else
{
lean_dec_ref(v___x_3474_);
lean_dec(v_value_3467_);
lean_dec(v_a_3466_);
lean_dec_ref(v___f_3465_);
goto v___jp_3480_;
}
}
else
{
lean_dec_ref(v___x_3474_);
lean_dec(v_value_3467_);
lean_dec(v_a_3466_);
lean_dec_ref(v___f_3465_);
goto v___jp_3480_;
}
}
else
{
lean_object* v___x_3498_; 
lean_dec_ref(v___x_3474_);
lean_dec(v_value_3467_);
lean_dec(v_a_3466_);
lean_dec_ref(v___f_3465_);
lean_dec_ref(v___f_3464_);
v___x_3498_ = l_Lasm_JS_Data_field(v_a_3468_, v___x_3469_);
if (lean_obj_tag(v___x_3498_) == 9)
{
lean_object* v_value_3499_; lean_object* v___f_3500_; uint8_t v___x_3501_; lean_object* v_val_3503_; lean_object* v___x_3506_; 
lean_dec_ref(v___f_3471_);
v_value_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_value_3499_);
lean_dec_ref_known(v___x_3498_, 2);
lean_inc(v___x_3460_);
v___f_3500_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3500_, 0, v___y_3461_);
lean_closure_set(v___f_3500_, 1, v___y_3462_);
lean_closure_set(v___f_3500_, 2, v_headers_3472_);
lean_closure_set(v___f_3500_, 3, v___x_3475_);
lean_closure_set(v___f_3500_, 4, v___x_3460_);
lean_closure_set(v___f_3500_, 5, v___f_3470_);
v___x_3501_ = 0;
v___x_3506_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3499_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3506_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3506_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
lean_ctor_set_tag(v___x_3509_, 1);
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
v_val_3503_ = v___x_3512_;
goto v___jp_3502_;
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
v_a_3515_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3506_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3506_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set_tag(v___x_3517_, 0);
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
v_val_3503_ = v___x_3520_;
goto v___jp_3502_;
}
}
}
v___jp_3502_:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3504_, 0, v_val_3503_);
v___x_3505_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3460_, v___x_3501_, v___x_3504_, v___f_3500_);
return v___x_3505_;
}
}
else
{
lean_object* v___x_3523_; uint8_t v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
lean_dec(v___x_3498_);
lean_dec_ref(v___f_3470_);
v___x_3523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3523_, 0, v___y_3461_);
lean_ctor_set(v___x_3523_, 1, v___y_3462_);
lean_ctor_set(v___x_3523_, 2, v_headers_3472_);
lean_ctor_set(v___x_3523_, 3, v___x_3475_);
lean_ctor_set(v___x_3523_, 4, v___f_3476_);
v___x_3524_ = 0;
v___x_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3523_);
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3525_);
v___x_3527_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3460_, v___x_3524_, v___x_3526_, v___f_3471_);
return v___x_3527_;
}
}
v___jp_3480_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; uint8_t v___x_3484_; lean_object* v___x_3485_; 
v___x_3481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3481_, 0, v___y_3461_);
lean_ctor_set(v___x_3481_, 1, v___y_3462_);
lean_ctor_set(v___x_3481_, 2, v_headers_3472_);
lean_ctor_set(v___x_3481_, 3, v___x_3475_);
lean_ctor_set(v___x_3481_, 4, v___f_3476_);
v___x_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
v___x_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
v___x_3484_ = lean_unbox(v___x_3479_);
v___x_3485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3460_, v___x_3484_, v___x_3483_, v___f_3464_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v_options_3531_, lean_object* v___f_3532_, lean_object* v___f_3533_, lean_object* v_a_3534_, lean_object* v_value_3535_, lean_object* v_a_3536_, lean_object* v___x_3537_, lean_object* v___f_3538_, lean_object* v___f_3539_, lean_object* v_headers_3540_, lean_object* v___y_3541_){
_start:
{
lean_object* v_res_3542_; 
v_res_3542_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3528_, v___y_3529_, v___y_3530_, v_options_3531_, v___f_3532_, v___f_3533_, v_a_3534_, v_value_3535_, v_a_3536_, v___x_3537_, v___f_3538_, v___f_3539_, v_headers_3540_);
lean_dec_ref(v___x_3537_);
lean_dec(v_a_3536_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3543_, lean_object* v_x_3544_){
_start:
{
if (lean_obj_tag(v_x_3544_) == 0)
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3554_; 
lean_dec_ref(v___f_3543_);
v_a_3546_ = lean_ctor_get(v_x_3544_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v_x_3544_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3548_ = v_x_3544_;
v_isShared_3549_ = v_isSharedCheck_3554_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v_x_3544_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3554_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
lean_object* v___x_3552_; 
v___x_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
return v___x_3552_;
}
}
}
else
{
lean_object* v_a_3555_; lean_object* v___x_3556_; 
v_a_3555_ = lean_ctor_get(v_x_3544_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v_x_3544_, 1);
v___x_3556_ = lean_apply_2(v___f_3543_, v_a_3555_, lean_box(0));
return v___x_3556_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3557_, lean_object* v_x_3558_, lean_object* v___y_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3557_, v_x_3558_);
return v_res_3560_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3561_, uint64_t v_extra_3562_){
_start:
{
uint64_t v___x_3563_; uint64_t v___y_3565_; 
v___x_3563_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3561_ == 0)
{
uint64_t v___x_3568_; 
v___x_3568_ = 0ULL;
v___y_3565_ = v___x_3568_;
goto v___jp_3564_;
}
else
{
uint64_t v___x_3569_; 
v___x_3569_ = 2ULL;
v___y_3565_ = v___x_3569_;
goto v___jp_3564_;
}
v___jp_3564_:
{
uint64_t v___x_3566_; uint64_t v___x_3567_; 
v___x_3566_ = lean_uint64_lor(v___x_3563_, v___y_3565_);
v___x_3567_ = lean_uint64_lor(v___x_3566_, v_extra_3562_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3570_, lean_object* v_extra_3571_){
_start:
{
uint8_t v_await_boxed_3572_; uint64_t v_extra_boxed_3573_; uint64_t v_res_3574_; lean_object* v_r_3575_; 
v_await_boxed_3572_ = lean_unbox(v_await_3570_);
v_extra_boxed_3573_ = lean_unbox_uint64(v_extra_3571_);
lean_dec_ref(v_extra_3571_);
v_res_3574_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3572_, v_extra_boxed_3573_);
v_r_3575_ = lean_box_uint64(v_res_3574_);
return v_r_3575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3581_, size_t v_i_3582_, lean_object* v_bs_3583_){
_start:
{
uint8_t v___x_3586_; 
v___x_3586_ = lean_usize_dec_lt(v_i_3582_, v_sz_3581_);
if (v___x_3586_ == 0)
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3587_, 0, v_bs_3583_);
return v___x_3587_;
}
else
{
lean_object* v_v_3588_; 
v_v_3588_ = lean_array_uget_borrowed(v_bs_3583_, v_i_3582_);
if (lean_obj_tag(v_v_3588_) == 7)
{
lean_object* v_items_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; 
v_items_3589_ = lean_ctor_get(v_v_3588_, 0);
v___x_3590_ = lean_array_get_size(v_items_3589_);
v___x_3591_ = lean_unsigned_to_nat(2u);
v___x_3592_ = lean_nat_dec_eq(v___x_3590_, v___x_3591_);
if (v___x_3592_ == 0)
{
lean_dec_ref(v_bs_3583_);
goto v___jp_3584_;
}
else
{
lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3593_ = lean_unsigned_to_nat(0u);
v___x_3594_ = lean_array_fget_borrowed(v_items_3589_, v___x_3593_);
if (lean_obj_tag(v___x_3594_) == 4)
{
lean_object* v_s_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v_s_3595_ = lean_ctor_get(v___x_3594_, 0);
lean_inc_ref(v_s_3595_);
v___x_3596_ = lean_unsigned_to_nat(1u);
v___x_3597_ = lean_array_fget_borrowed(v_items_3589_, v___x_3596_);
if (lean_obj_tag(v___x_3597_) == 4)
{
lean_object* v_s_3598_; lean_object* v_bs_x27_3599_; lean_object* v___x_3600_; size_t v___x_3601_; size_t v___x_3602_; lean_object* v___x_3603_; 
v_s_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc_ref(v_s_3598_);
v_bs_x27_3599_ = lean_array_uset(v_bs_3583_, v_i_3582_, v___x_3593_);
v___x_3600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3600_, 0, v_s_3595_);
lean_ctor_set(v___x_3600_, 1, v_s_3598_);
v___x_3601_ = ((size_t)1ULL);
v___x_3602_ = lean_usize_add(v_i_3582_, v___x_3601_);
v___x_3603_ = lean_array_uset(v_bs_x27_3599_, v_i_3582_, v___x_3600_);
v_i_3582_ = v___x_3602_;
v_bs_3583_ = v___x_3603_;
goto _start;
}
else
{
lean_object* v___x_3605_; 
lean_dec_ref(v_s_3595_);
lean_dec_ref(v_bs_3583_);
v___x_3605_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3605_;
}
}
else
{
lean_object* v___x_3606_; 
lean_dec_ref(v_bs_3583_);
v___x_3606_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3606_;
}
}
}
else
{
lean_dec_ref(v_bs_3583_);
goto v___jp_3584_;
}
}
v___jp_3584_:
{
lean_object* v___x_3585_; 
v___x_3585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3607_, lean_object* v_i_3608_, lean_object* v_bs_3609_){
_start:
{
size_t v_sz_boxed_3610_; size_t v_i_boxed_3611_; lean_object* v_res_3612_; 
v_sz_boxed_3610_ = lean_unbox_usize(v_sz_3607_);
lean_dec(v_sz_3607_);
v_i_boxed_3611_ = lean_unbox_usize(v_i_3608_);
lean_dec(v_i_3608_);
v_res_3612_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3610_, v_i_boxed_3611_, v_bs_3609_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3617_, lean_object* v_d_3618_){
_start:
{
lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3627_; lean_object* v_received_3628_; lean_object* v___y_3647_; lean_object* v_a_3650_; 
if (lean_obj_tag(v_d_3618_) == 7)
{
lean_object* v_items_3674_; size_t v_sz_3675_; size_t v___x_3676_; lean_object* v___x_3677_; 
v_items_3674_ = lean_ctor_get(v_d_3618_, 0);
v_sz_3675_ = lean_array_size(v_items_3674_);
v___x_3676_ = ((size_t)0ULL);
lean_inc_ref(v_items_3674_);
v___x_3677_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3675_, v___x_3676_, v_items_3674_);
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_object* v_a_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; uint8_t v___x_3682_; 
v_a_3678_ = lean_ctor_get(v___x_3677_, 0);
lean_inc(v_a_3678_);
lean_dec_ref_known(v___x_3677_, 1);
v___x_3679_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3680_ = lean_string_utf8_byte_size(v_a_3678_);
v___x_3681_ = lean_unsigned_to_nat(0u);
v___x_3682_ = lean_nat_dec_eq(v___x_3680_, v___x_3681_);
if (v___x_3682_ == 0)
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3683_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3684_ = lean_string_append(v___x_3683_, v_a_3678_);
lean_dec(v_a_3678_);
v___x_3685_ = lean_string_append(v___x_3679_, v___x_3684_);
lean_dec_ref(v___x_3684_);
v_a_3650_ = v___x_3685_;
goto v___jp_3649_;
}
else
{
lean_dec(v_a_3678_);
v_a_3650_ = v___x_3679_;
goto v___jp_3649_;
}
}
else
{
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_object* v_a_3686_; 
v_a_3686_ = lean_ctor_get(v___x_3677_, 0);
lean_inc(v_a_3686_);
lean_dec_ref_known(v___x_3677_, 1);
v_a_3650_ = v_a_3686_;
goto v___jp_3649_;
}
else
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3694_; 
lean_dec_ref_known(v_d_3618_, 1);
v_a_3687_ = lean_ctor_get(v___x_3677_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3689_ = v___x_3677_;
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3677_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3692_; 
if (v_isShared_3690_ == 0)
{
lean_ctor_set_tag(v___x_3689_, 0);
v___x_3692_ = v___x_3689_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_a_3687_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
}
else
{
lean_object* v___x_3695_; 
v___x_3695_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3650_ = v___x_3695_;
goto v___jp_3649_;
}
v___jp_3620_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3623_ = lean_string_append(v___y_3621_, v___y_3622_);
lean_dec_ref(v___y_3622_);
v___x_3624_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
v___jp_3626_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; uint8_t v___x_3640_; 
v___x_3629_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3630_ = lean_string_append(v___x_3629_, v_context_3617_);
v___x_3631_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3632_ = lean_string_append(v___x_3630_, v___x_3631_);
v___x_3633_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3634_ = lean_string_append(v___x_3632_, v___x_3633_);
v___x_3635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3636_ = lean_string_append(v___x_3634_, v___x_3635_);
v___x_3637_ = lean_string_append(v___x_3636_, v_received_3628_);
lean_dec_ref(v_received_3628_);
v___x_3638_ = lean_string_utf8_byte_size(v___y_3627_);
v___x_3639_ = lean_unsigned_to_nat(0u);
v___x_3640_ = lean_nat_dec_eq(v___x_3638_, v___x_3639_);
if (v___x_3640_ == 0)
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3641_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3642_ = lean_string_append(v___x_3641_, v___y_3627_);
lean_dec_ref(v___y_3627_);
v___x_3643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3644_ = lean_string_append(v___x_3642_, v___x_3643_);
v___y_3621_ = v___x_3637_;
v___y_3622_ = v___x_3644_;
goto v___jp_3620_;
}
else
{
lean_object* v___x_3645_; 
lean_dec_ref(v___y_3627_);
v___x_3645_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3621_ = v___x_3637_;
v___y_3622_ = v___x_3645_;
goto v___jp_3620_;
}
}
v___jp_3646_:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lasm_JS_Data_describe(v_d_3618_);
v___y_3627_ = v___y_3647_;
v_received_3628_ = v___x_3648_;
goto v___jp_3626_;
}
v___jp_3649_:
{
if (lean_obj_tag(v_d_3618_) == 9)
{
lean_object* v_value_3651_; lean_object* v_description_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; 
v_value_3651_ = lean_ctor_get(v_d_3618_, 0);
v_description_3652_ = lean_ctor_get(v_d_3618_, 1);
v___x_3653_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3654_ = lean_string_dec_eq(v_description_3652_, v___x_3653_);
if (v___x_3654_ == 0)
{
v___y_3647_ = v_a_3650_;
goto v___jp_3646_;
}
else
{
lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3671_; 
lean_inc(v_value_3651_);
v_isSharedCheck_3671_ = !lean_is_exclusive(v_d_3618_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; lean_object* v_unused_3673_; 
v_unused_3672_ = lean_ctor_get(v_d_3618_, 1);
lean_dec(v_unused_3672_);
v_unused_3673_ = lean_ctor_get(v_d_3618_, 0);
lean_dec(v_unused_3673_);
v___x_3656_ = v_d_3618_;
v_isShared_3657_ = v_isSharedCheck_3671_;
goto v_resetjp_3655_;
}
else
{
lean_dec(v_d_3618_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3671_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
uint32_t v___x_3658_; uint64_t v___x_3659_; lean_object* v___x_3661_; 
v___x_3658_ = 206;
v___x_3659_ = 0ULL;
lean_inc(v_value_3651_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 1, v___x_3653_);
v___x_3661_ = v___x_3656_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_value_3651_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v___x_3653_);
v___x_3661_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
uint32_t v___x_3662_; lean_object* v___x_3663_; 
v___x_3662_ = lasm_js_value_handle(v_value_3651_);
lean_dec(v_value_3651_);
v___x_3663_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3658_, v___x_3659_, v___x_3661_, v___x_3662_);
lean_dec_ref(v___x_3661_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; uint8_t v___x_3665_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3663_, 1);
v___x_3665_ = lean_string_validate_utf8(v_a_3664_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec(v_a_3664_);
v___x_3666_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3667_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3666_);
v___y_3627_ = v_a_3650_;
v_received_3628_ = v___x_3667_;
goto v___jp_3626_;
}
else
{
lean_object* v___x_3668_; 
v___x_3668_ = lean_string_from_utf8_unchecked(v_a_3664_);
v___y_3627_ = v_a_3650_;
v_received_3628_ = v___x_3668_;
goto v___jp_3626_;
}
}
else
{
lean_object* v___x_3669_; 
lean_dec_ref_known(v___x_3663_, 1);
v___x_3669_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3627_ = v_a_3650_;
v_received_3628_ = v___x_3669_;
goto v___jp_3626_;
}
}
}
}
}
else
{
v___y_3647_ = v_a_3650_;
goto v___jp_3646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3696_, lean_object* v_d_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3696_, v_d_3697_);
lean_dec_ref(v_context_3696_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3700_, lean_object* v_bytes_3701_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3701_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v_a_3704_; lean_object* v___x_3705_; 
v_a_3704_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_a_3704_);
lean_dec_ref_known(v___x_3703_, 1);
v___x_3705_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3700_, v_a_3704_);
return v___x_3705_;
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
v_a_3706_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3703_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3703_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3714_, lean_object* v_bytes_3715_, lean_object* v_a_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3714_, v_bytes_3715_);
lean_dec_ref(v_bytes_3715_);
lean_dec_ref(v_context_3714_);
return v_res_3717_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3718_; uint8_t v___x_3719_; uint64_t v___x_3720_; 
v___x_3718_ = 8ULL;
v___x_3719_ = 0;
v___x_3720_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3719_, v___x_3718_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3721_, lean_object* v_name_3722_, lean_object* v_args_3723_){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; uint64_t v___x_3728_; lean_object* v___x_3729_; 
v___x_3725_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3726_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3726_, 0, v_o_3721_);
lean_ctor_set(v___x_3726_, 1, v___x_3725_);
lean_inc_ref(v_name_3722_);
v___x_3727_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3727_, 0, v_name_3722_);
v___x_3728_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3729_ = l_Lasm_JS_Value_invokeRaw(v___x_3726_, v___x_3727_, v_args_3723_, v___x_3728_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
lean_inc(v_a_3730_);
lean_dec_ref_known(v___x_3729_, 1);
v___x_3731_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3732_ = lean_string_append(v___x_3731_, v_name_3722_);
lean_dec_ref(v_name_3722_);
v___x_3733_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3732_, v_a_3730_);
lean_dec(v_a_3730_);
lean_dec_ref(v___x_3732_);
return v___x_3733_;
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec_ref(v_name_3722_);
v_a_3734_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3729_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3729_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
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
return v___x_3739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3742_, lean_object* v_name_3743_, lean_object* v_args_3744_, lean_object* v_a_3745_){
_start:
{
lean_object* v_res_3746_; 
v_res_3746_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3742_, v_name_3743_, v_args_3744_);
return v_res_3746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3748_, lean_object* v___f_3749_, lean_object* v_handler_3750_, lean_object* v_options_3751_, lean_object* v_a_3752_, lean_object* v_value_3753_, lean_object* v___x_3754_, lean_object* v___x_3755_, lean_object* v_a_3756_, lean_object* v___x_3757_, lean_object* v___x_3758_, lean_object* v_x_3759_){
_start:
{
uint8_t v___y_3762_; lean_object* v___y_3763_; lean_object* v_val_3764_; 
if (lean_obj_tag(v_x_3759_) == 0)
{
lean_object* v___x_3767_; 
lean_dec(v_a_3756_);
lean_dec_ref(v___x_3754_);
lean_dec(v_value_3753_);
lean_dec(v_a_3752_);
lean_dec_ref(v_options_3751_);
lean_dec_ref(v_handler_3750_);
lean_dec_ref(v___f_3749_);
lean_dec(v___x_3748_);
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_x_3759_);
return v___x_3767_;
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3825_; 
v_a_3768_ = lean_ctor_get(v_x_3759_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_x_3759_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3770_ = v_x_3759_;
v_isShared_3771_ = v_isSharedCheck_3825_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v_x_3759_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3825_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3815_; lean_object* v___x_3822_; 
v___x_3822_ = l_Lasm_JS_Data_field(v_a_3768_, v___x_3758_);
if (lean_obj_tag(v___x_3822_) == 4)
{
lean_object* v_s_3823_; 
v_s_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc_ref(v_s_3823_);
lean_dec_ref_known(v___x_3822_, 1);
v___y_3815_ = v_s_3823_;
goto v___jp_3814_;
}
else
{
lean_object* v___x_3824_; 
lean_dec(v___x_3822_);
v___x_3824_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3815_ = v___x_3824_;
goto v___jp_3814_;
}
v___jp_3772_:
{
lean_object* v___f_3779_; lean_object* v___x_3780_; 
lean_inc(v_a_3768_);
lean_inc(v___x_3748_);
v___f_3779_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3779_, 0, v___x_3748_);
lean_closure_set(v___f_3779_, 1, v___y_3773_);
lean_closure_set(v___f_3779_, 2, v___y_3778_);
lean_closure_set(v___f_3779_, 3, v_options_3751_);
lean_closure_set(v___f_3779_, 4, v___y_3777_);
lean_closure_set(v___f_3779_, 5, v___y_3774_);
lean_closure_set(v___f_3779_, 6, v_a_3752_);
lean_closure_set(v___f_3779_, 7, v_value_3753_);
lean_closure_set(v___f_3779_, 8, v_a_3768_);
lean_closure_set(v___f_3779_, 9, v___x_3754_);
lean_closure_set(v___f_3779_, 10, v___y_3775_);
lean_closure_set(v___f_3779_, 11, v___y_3776_);
v___x_3780_ = l_Lasm_JS_Data_field(v_a_3768_, v___x_3755_);
lean_dec(v_a_3768_);
if (lean_obj_tag(v___x_3780_) == 9)
{
lean_object* v_value_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3804_; 
v_value_3781_ = lean_ctor_get(v___x_3780_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3780_);
if (v_isSharedCheck_3804_ == 0)
{
lean_object* v_unused_3805_; 
v_unused_3805_ = lean_ctor_get(v___x_3780_, 1);
lean_dec(v_unused_3805_);
v___x_3783_ = v___x_3780_;
v_isShared_3784_ = v_isSharedCheck_3804_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_value_3781_);
lean_dec(v___x_3780_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3804_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___f_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3789_; 
v___f_3785_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3785_, 0, v___f_3779_);
v___x_3786_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3787_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 1, v___x_3787_);
v___x_3789_ = v___x_3783_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_value_3781_);
lean_ctor_set(v_reuseFailAlloc_3803_, 1, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; uint8_t v___x_3793_; lean_object* v___x_3794_; 
v___x_3790_ = lean_unsigned_to_nat(1u);
v___x_3791_ = lean_mk_empty_array_with_capacity(v___x_3790_);
v___x_3792_ = lean_array_push(v___x_3791_, v___x_3789_);
v___x_3793_ = 0;
v___x_3794_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3756_, v___x_3786_, v___x_3792_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3797_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 0, v_a_3795_);
v___x_3797_ = v___x_3770_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3795_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
v___y_3762_ = v___x_3793_;
v___y_3763_ = v___f_3785_;
v_val_3764_ = v___x_3797_;
goto v___jp_3761_;
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; 
v_a_3799_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v___x_3794_, 1);
if (v_isShared_3771_ == 0)
{
lean_ctor_set_tag(v___x_3770_, 0);
lean_ctor_set(v___x_3770_, 0, v_a_3799_);
v___x_3801_ = v___x_3770_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3799_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
v___y_3762_ = v___x_3793_;
v___y_3763_ = v___f_3785_;
v_val_3764_ = v___x_3801_;
goto v___jp_3761_;
}
}
}
}
}
else
{
lean_object* v___f_3806_; lean_object* v___x_3807_; uint8_t v___x_3808_; lean_object* v___x_3810_; 
lean_dec(v___x_3780_);
lean_dec(v_a_3756_);
v___f_3806_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3806_, 0, v___f_3779_);
v___x_3807_ = lean_mk_empty_array_with_capacity(v___x_3748_);
v___x_3808_ = 0;
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 0, v___x_3807_);
v___x_3810_ = v___x_3770_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3807_);
v___x_3810_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
v___x_3812_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3748_, v___x_3808_, v___x_3811_, v___f_3806_);
return v___x_3812_;
}
}
}
v___jp_3814_:
{
lean_object* v___f_3816_; lean_object* v___f_3817_; lean_object* v___f_3818_; lean_object* v___x_3819_; 
lean_inc_n(v___x_3748_, 2);
lean_inc_ref(v___y_3815_);
v___f_3816_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3816_, 0, v___y_3815_);
lean_closure_set(v___f_3816_, 1, v___x_3748_);
lean_closure_set(v___f_3816_, 2, v___f_3749_);
v___f_3817_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3817_, 0, v_handler_3750_);
lean_closure_set(v___f_3817_, 1, v___x_3748_);
lean_closure_set(v___f_3817_, 2, v___f_3816_);
v___f_3818_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3818_, 0, v___f_3817_);
v___x_3819_ = l_Lasm_JS_Data_field(v_a_3768_, v___x_3757_);
if (lean_obj_tag(v___x_3819_) == 4)
{
lean_object* v_s_3820_; 
v_s_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc_ref(v_s_3820_);
lean_dec_ref_known(v___x_3819_, 1);
lean_inc_ref_n(v___f_3818_, 3);
v___y_3773_ = v___y_3815_;
v___y_3774_ = v___f_3818_;
v___y_3775_ = v___f_3818_;
v___y_3776_ = v___f_3818_;
v___y_3777_ = v___f_3818_;
v___y_3778_ = v_s_3820_;
goto v___jp_3772_;
}
else
{
lean_object* v___x_3821_; 
lean_dec(v___x_3819_);
v___x_3821_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3818_, 3);
v___y_3773_ = v___y_3815_;
v___y_3774_ = v___f_3818_;
v___y_3775_ = v___f_3818_;
v___y_3776_ = v___f_3818_;
v___y_3777_ = v___f_3818_;
v___y_3778_ = v___x_3821_;
goto v___jp_3772_;
}
}
}
}
v___jp_3761_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3765_, 0, v_val_3764_);
v___x_3766_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3748_, v___y_3762_, v___x_3765_, v___y_3763_);
return v___x_3766_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3826_, lean_object* v___f_3827_, lean_object* v_handler_3828_, lean_object* v_options_3829_, lean_object* v_a_3830_, lean_object* v_value_3831_, lean_object* v___x_3832_, lean_object* v___x_3833_, lean_object* v_a_3834_, lean_object* v___x_3835_, lean_object* v___x_3836_, lean_object* v_x_3837_, lean_object* v___y_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3826_, v___f_3827_, v_handler_3828_, v_options_3829_, v_a_3830_, v_value_3831_, v___x_3832_, v___x_3833_, v_a_3834_, v___x_3835_, v___x_3836_, v_x_3837_);
lean_dec_ref(v___x_3836_);
lean_dec_ref(v___x_3835_);
lean_dec_ref(v___x_3833_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3840_, size_t v_i_3841_, lean_object* v_bs_3842_){
_start:
{
uint8_t v___x_3843_; 
v___x_3843_ = lean_usize_dec_lt(v_i_3841_, v_sz_3840_);
if (v___x_3843_ == 0)
{
return v_bs_3842_;
}
else
{
lean_object* v_v_3844_; lean_object* v___x_3845_; lean_object* v_bs_x27_3846_; lean_object* v___x_3847_; size_t v___x_3848_; size_t v___x_3849_; lean_object* v___x_3850_; 
v_v_3844_ = lean_array_uget(v_bs_3842_, v_i_3841_);
v___x_3845_ = lean_unsigned_to_nat(0u);
v_bs_x27_3846_ = lean_array_uset(v_bs_3842_, v_i_3841_, v___x_3845_);
v___x_3847_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3847_, 0, v_v_3844_);
v___x_3848_ = ((size_t)1ULL);
v___x_3849_ = lean_usize_add(v_i_3841_, v___x_3848_);
v___x_3850_ = lean_array_uset(v_bs_x27_3846_, v_i_3841_, v___x_3847_);
v_i_3841_ = v___x_3849_;
v_bs_3842_ = v___x_3850_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3852_, lean_object* v_i_3853_, lean_object* v_bs_3854_){
_start:
{
size_t v_sz_boxed_3855_; size_t v_i_boxed_3856_; lean_object* v_res_3857_; 
v_sz_boxed_3855_ = lean_unbox_usize(v_sz_3852_);
lean_dec(v_sz_3852_);
v_i_boxed_3856_ = lean_unbox_usize(v_i_3853_);
lean_dec(v_i_3853_);
v_res_3857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3855_, v_i_boxed_3856_, v_bs_3854_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3858_, lean_object* v_keys_3859_){
_start:
{
size_t v_sz_3861_; size_t v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; 
v_sz_3861_ = lean_array_size(v_keys_3859_);
v___x_3862_ = ((size_t)0ULL);
v___x_3863_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3861_, v___x_3862_, v_keys_3859_);
v___x_3864_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3863_);
v___x_3865_ = l_Lasm_JS_Wire_encodeIO(v___x_3864_);
lean_dec_ref_known(v___x_3864_, 1);
if (lean_obj_tag(v___x_3865_) == 0)
{
lean_object* v_a_3866_; uint32_t v___x_3867_; uint32_t v___x_3868_; uint64_t v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v_a_3866_ = lean_ctor_get(v___x_3865_, 0);
lean_inc(v_a_3866_);
lean_dec_ref_known(v___x_3865_, 1);
v___x_3867_ = 203;
v___x_3868_ = lasm_js_value_handle(v_o_3858_);
v___x_3869_ = 2ULL;
v___x_3870_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3871_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3871_, 0, v_o_3858_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
v___x_3872_ = lasm_js_call(v___x_3867_, v___x_3868_, v___x_3869_, v_a_3866_, v___x_3871_);
lean_dec_ref_known(v___x_3871_, 2);
lean_dec(v_a_3866_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; lean_object* v___x_3874_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3873_);
lean_dec_ref_known(v___x_3872_, 1);
v___x_3874_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3873_);
lean_dec(v_a_3873_);
return v___x_3874_;
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
v_a_3875_ = lean_ctor_get(v___x_3872_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3872_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3872_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_dec(v_o_3858_);
v_a_3883_ = lean_ctor_get(v___x_3865_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3865_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3865_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3891_, lean_object* v_keys_3892_, lean_object* v_a_3893_){
_start:
{
lean_object* v_res_3894_; 
v_res_3894_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3891_, v_keys_3892_);
return v_res_3894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3915_, lean_object* v___f_3916_, lean_object* v_handler_3917_, lean_object* v_options_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_____r_3921_){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; uint8_t v___x_3927_; 
v___x_3925_ = lean_unsigned_to_nat(0u);
v___x_3926_ = lean_array_get_size(v_args_3915_);
v___x_3927_ = lean_nat_dec_lt(v___x_3925_, v___x_3926_);
if (v___x_3927_ == 0)
{
lean_dec(v_a_3920_);
lean_dec(v_a_3919_);
lean_dec_ref(v_options_3918_);
lean_dec_ref(v_handler_3917_);
lean_dec_ref(v___f_3916_);
goto v___jp_3923_;
}
else
{
lean_object* v___x_3928_; 
v___x_3928_ = lean_array_fget_borrowed(v_args_3915_, v___x_3925_);
if (lean_obj_tag(v___x_3928_) == 9)
{
lean_object* v_value_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___f_3934_; lean_object* v___x_3935_; uint8_t v___x_3936_; lean_object* v_val_3938_; lean_object* v___x_3941_; 
v_value_3929_ = lean_ctor_get(v___x_3928_, 0);
v___x_3930_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3931_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3932_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3933_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3929_, 2);
v___f_3934_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3934_, 0, v___x_3925_);
lean_closure_set(v___f_3934_, 1, v___f_3916_);
lean_closure_set(v___f_3934_, 2, v_handler_3917_);
lean_closure_set(v___f_3934_, 3, v_options_3918_);
lean_closure_set(v___f_3934_, 4, v_a_3919_);
lean_closure_set(v___f_3934_, 5, v_value_3929_);
lean_closure_set(v___f_3934_, 6, v___x_3933_);
lean_closure_set(v___f_3934_, 7, v___x_3932_);
lean_closure_set(v___f_3934_, 8, v_a_3920_);
lean_closure_set(v___f_3934_, 9, v___x_3931_);
lean_closure_set(v___f_3934_, 10, v___x_3930_);
v___x_3935_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3936_ = 0;
v___x_3941_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3929_, v___x_3935_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3941_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3941_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
lean_ctor_set_tag(v___x_3944_, 1);
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
v_val_3938_ = v___x_3947_;
goto v___jp_3937_;
}
}
}
else
{
lean_object* v_a_3950_; lean_object* v___x_3952_; uint8_t v_isShared_3953_; uint8_t v_isSharedCheck_3957_; 
v_a_3950_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3957_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3952_ = v___x_3941_;
v_isShared_3953_ = v_isSharedCheck_3957_;
goto v_resetjp_3951_;
}
else
{
lean_inc(v_a_3950_);
lean_dec(v___x_3941_);
v___x_3952_ = lean_box(0);
v_isShared_3953_ = v_isSharedCheck_3957_;
goto v_resetjp_3951_;
}
v_resetjp_3951_:
{
lean_object* v___x_3955_; 
if (v_isShared_3953_ == 0)
{
lean_ctor_set_tag(v___x_3952_, 0);
v___x_3955_ = v___x_3952_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_a_3950_);
v___x_3955_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
v_val_3938_ = v___x_3955_;
goto v___jp_3937_;
}
}
}
v___jp_3937_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3939_, 0, v_val_3938_);
v___x_3940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3925_, v___x_3936_, v___x_3939_, v___f_3934_);
return v___x_3940_;
}
}
else
{
lean_dec(v_a_3920_);
lean_dec(v_a_3919_);
lean_dec_ref(v_options_3918_);
lean_dec_ref(v_handler_3917_);
lean_dec_ref(v___f_3916_);
goto v___jp_3923_;
}
}
v___jp_3923_:
{
lean_object* v___x_3924_; 
v___x_3924_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3958_, lean_object* v___f_3959_, lean_object* v_handler_3960_, lean_object* v_options_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_____r_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3958_, v___f_3959_, v_handler_3960_, v_options_3961_, v_a_3962_, v_a_3963_, v_____r_3964_);
lean_dec_ref(v_args_3958_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3967_, lean_object* v_x_3968_){
_start:
{
if (lean_obj_tag(v_x_3968_) == 0)
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3978_; 
lean_dec_ref(v___f_3967_);
v_a_3970_ = lean_ctor_get(v_x_3968_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v_x_3968_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3972_ = v_x_3968_;
v_isShared_3973_ = v_isSharedCheck_3978_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v_x_3968_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3978_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; 
v___x_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3980_; 
v_a_3979_ = lean_ctor_get(v_x_3968_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v_x_3968_, 1);
v___x_3980_ = lean_apply_2(v___f_3967_, v_a_3979_, lean_box(0));
return v___x_3980_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3981_, lean_object* v_x_3982_, lean_object* v___y_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3981_, v_x_3982_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3985_, lean_object* v_handler_3986_, lean_object* v_options_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_args_3990_){
_start:
{
lean_object* v___f_3992_; lean_object* v___x_3996_; lean_object* v___x_3997_; uint8_t v___x_3998_; 
lean_inc(v_a_3989_);
lean_inc(v_a_3988_);
lean_inc_ref(v_options_3987_);
lean_inc_ref(v_handler_3986_);
lean_inc_ref(v___f_3985_);
lean_inc_ref(v_args_3990_);
v___f_3992_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3992_, 0, v_args_3990_);
lean_closure_set(v___f_3992_, 1, v___f_3985_);
lean_closure_set(v___f_3992_, 2, v_handler_3986_);
lean_closure_set(v___f_3992_, 3, v_options_3987_);
lean_closure_set(v___f_3992_, 4, v_a_3988_);
lean_closure_set(v___f_3992_, 5, v_a_3989_);
v___x_3996_ = lean_unsigned_to_nat(1u);
v___x_3997_ = lean_array_get_size(v_args_3990_);
v___x_3998_ = lean_nat_dec_lt(v___x_3996_, v___x_3997_);
if (v___x_3998_ == 0)
{
lean_dec_ref(v___f_3992_);
goto v___jp_3993_;
}
else
{
lean_object* v___x_3999_; 
v___x_3999_ = lean_array_fget_borrowed(v_args_3990_, v___x_3996_);
switch(lean_obj_tag(v___x_3999_))
{
case 9:
{
lean_object* v___f_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; uint8_t v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
lean_inc_ref(v___x_3999_);
lean_dec_ref(v_args_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec_ref(v_options_3987_);
lean_dec_ref(v_handler_3986_);
lean_dec_ref(v___f_3985_);
v___f_4000_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_4000_, 0, v___f_3992_);
v___x_4001_ = l_Lasm_Fetch_platformEnv;
v___x_4002_ = lean_unsigned_to_nat(0u);
v___x_4003_ = 0;
v___x_4004_ = lean_st_ref_swap(v___x_4001_, v___x_3999_);
lean_dec(v___x_4004_);
v___x_4005_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_4006_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4002_, v___x_4003_, v___x_4005_, v___f_4000_);
return v___x_4006_;
}
case 8:
{
lean_object* v___f_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
lean_inc_ref(v___x_3999_);
lean_dec_ref(v_args_3990_);
lean_dec(v_a_3989_);
lean_dec(v_a_3988_);
lean_dec_ref(v_options_3987_);
lean_dec_ref(v_handler_3986_);
lean_dec_ref(v___f_3985_);
v___f_4007_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_4007_, 0, v___f_3992_);
v___x_4008_ = l_Lasm_Fetch_platformEnv;
v___x_4009_ = lean_unsigned_to_nat(0u);
v___x_4010_ = 0;
v___x_4011_ = lean_st_ref_swap(v___x_4008_, v___x_3999_);
lean_dec(v___x_4011_);
v___x_4012_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_4013_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4009_, v___x_4010_, v___x_4012_, v___f_4007_);
return v___x_4013_;
}
default: 
{
lean_dec_ref(v___f_3992_);
goto v___jp_3993_;
}
}
}
v___jp_3993_:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; 
v___x_3994_ = lean_box(0);
v___x_3995_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3990_, v___f_3985_, v_handler_3986_, v_options_3987_, v_a_3988_, v_a_3989_, v___x_3994_);
lean_dec_ref(v_args_3990_);
return v___x_3995_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_4014_, lean_object* v_handler_4015_, lean_object* v_options_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_args_4019_, lean_object* v___y_4020_){
_start:
{
lean_object* v_res_4021_; 
v_res_4021_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_4014_, v_handler_4015_, v_options_4016_, v_a_4017_, v_a_4018_, v_args_4019_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_4025_, lean_object* v_options_4026_){
_start:
{
lean_object* v___f_4028_; lean_object* v___x_4029_; 
v___f_4028_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_4029_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc_n(v_a_4030_, 2);
lean_dec_ref_known(v___x_4029_, 1);
v___x_4031_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_4032_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4030_, v___x_4031_);
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_object* v_a_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v_a_4033_ = lean_ctor_get(v___x_4032_, 0);
lean_inc(v_a_4033_);
lean_dec_ref_known(v___x_4032_, 1);
v___x_4034_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_4035_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4030_, v___x_4034_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v_a_4036_; lean_object* v___f_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc(v_a_4036_);
lean_dec_ref_known(v___x_4035_, 1);
v___f_4037_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_4037_, 0, v___f_4028_);
lean_closure_set(v___f_4037_, 1, v_handler_4025_);
lean_closure_set(v___f_4037_, 2, v_options_4026_);
lean_closure_set(v___f_4037_, 3, v_a_4033_);
lean_closure_set(v___f_4037_, 4, v_a_4036_);
v___x_4038_ = lean_unsigned_to_nat(0u);
v___x_4039_ = l_Lasm_JS_Function_ofFn(v___f_4037_, v___x_4038_);
return v___x_4039_;
}
else
{
lean_dec(v_a_4033_);
lean_dec_ref(v_options_4026_);
lean_dec_ref(v_handler_4025_);
return v___x_4035_;
}
}
else
{
lean_dec(v_a_4030_);
lean_dec_ref(v_options_4026_);
lean_dec_ref(v_handler_4025_);
return v___x_4032_;
}
}
else
{
lean_dec_ref(v_options_4026_);
lean_dec_ref(v_handler_4025_);
return v___x_4029_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_4040_, lean_object* v_options_4041_, lean_object* v_a_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l_Lasm_Fetch_jsFetchHandler(v_handler_4040_, v_options_4041_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_4044_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4044_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_4047_, lean_object* v_a_4048_){
_start:
{
lean_object* v_res_4049_; 
v_res_4049_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_4047_);
lean_dec_ref(v_bytes_4047_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_4050_, lean_object* v_bytes_4051_){
_start:
{
lean_object* v___x_4053_; 
v___x_4053_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4051_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_4054_, lean_object* v_bytes_4055_, lean_object* v_a_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_4054_, v_bytes_4055_);
lean_dec_ref(v_bytes_4055_);
lean_dec_ref(v_context_4054_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(lean_object* v___x_4058_, lean_object* v_s_4059_, lean_object* v_pos_4060_){
_start:
{
lean_object* v_str_4061_; lean_object* v_startInclusive_4062_; lean_object* v_endExclusive_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4074_; uint8_t v_decide_4075_; 
v_str_4061_ = lean_ctor_get(v_s_4059_, 0);
v_startInclusive_4062_ = lean_ctor_get(v_s_4059_, 1);
v_endExclusive_4063_ = lean_ctor_get(v_s_4059_, 2);
v___x_4064_ = lean_unsigned_to_nat(0u);
v___x_4065_ = lean_nat_add(v_startInclusive_4062_, v_pos_4060_);
v___x_4074_ = lean_nat_sub(v_endExclusive_4063_, v___x_4065_);
v_decide_4075_ = lean_nat_dec_eq(v___x_4064_, v___x_4074_);
lean_dec(v___x_4074_);
if (v_decide_4075_ == 0)
{
uint8_t v___x_4076_; uint32_t v___x_4078_; uint32_t v___x_4079_; uint8_t v___x_4080_; 
v___x_4076_ = lean_nat_dec_eq(v___x_4058_, v___x_4064_);
v___x_4078_ = lean_string_utf8_get_fast(v_str_4061_, v___x_4065_);
v___x_4079_ = 47;
v___x_4080_ = lean_uint32_dec_eq(v___x_4078_, v___x_4079_);
if (v___x_4080_ == 0)
{
uint32_t v___x_4081_; uint8_t v___x_4082_; 
v___x_4081_ = 63;
v___x_4082_ = lean_uint32_dec_eq(v___x_4078_, v___x_4081_);
if (v___x_4082_ == 0)
{
uint32_t v___x_4083_; uint8_t v___x_4084_; 
v___x_4083_ = 35;
v___x_4084_ = lean_uint32_dec_eq(v___x_4078_, v___x_4083_);
if (v___x_4084_ == 0)
{
uint32_t v___x_4085_; uint8_t v___x_4086_; 
v___x_4085_ = 92;
v___x_4086_ = lean_uint32_dec_eq(v___x_4078_, v___x_4085_);
if (v___x_4086_ == 0)
{
uint32_t v___x_4087_; uint8_t v___x_4088_; 
v___x_4087_ = 64;
v___x_4088_ = lean_uint32_dec_eq(v___x_4078_, v___x_4087_);
if (v___x_4088_ == 0)
{
uint32_t v___x_4089_; uint8_t v___x_4090_; 
v___x_4089_ = 32;
v___x_4090_ = lean_uint32_dec_eq(v___x_4078_, v___x_4089_);
if (v___x_4090_ == 0)
{
uint32_t v___x_4091_; uint8_t v___x_4092_; 
v___x_4091_ = 9;
v___x_4092_ = lean_uint32_dec_eq(v___x_4078_, v___x_4091_);
if (v___x_4092_ == 0)
{
uint32_t v___x_4093_; uint8_t v___x_4094_; 
v___x_4093_ = 13;
v___x_4094_ = lean_uint32_dec_eq(v___x_4078_, v___x_4093_);
if (v___x_4094_ == 0)
{
uint32_t v___x_4095_; uint8_t v___x_4096_; 
v___x_4095_ = 10;
v___x_4096_ = lean_uint32_dec_eq(v___x_4078_, v___x_4095_);
if (v___x_4096_ == 0)
{
lean_object* v___x_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; 
v___x_4097_ = lean_uint32_to_nat(v___x_4078_);
v___x_4098_ = lean_unsigned_to_nat(32u);
v___x_4099_ = lean_nat_dec_lt(v___x_4097_, v___x_4098_);
if (v___x_4099_ == 0)
{
lean_object* v___x_4100_; uint8_t v___x_4101_; 
v___x_4100_ = lean_unsigned_to_nat(127u);
v___x_4101_ = lean_nat_dec_eq(v___x_4097_, v___x_4100_);
lean_dec(v___x_4097_);
if (v___x_4101_ == 0)
{
goto v___jp_4066_;
}
else
{
lean_dec(v___x_4065_);
return v_pos_4060_;
}
}
else
{
lean_dec(v___x_4097_);
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
}
else
{
goto v___jp_4077_;
}
v___jp_4077_:
{
if (v___x_4076_ == 0)
{
lean_dec(v___x_4065_);
return v_pos_4060_;
}
else
{
goto v___jp_4066_;
}
}
}
else
{
lean_dec(v___x_4065_);
return v_pos_4060_;
}
v___jp_4066_:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; uint8_t v___x_4072_; 
v___x_4067_ = lean_string_utf8_next_fast(v_str_4061_, v___x_4065_);
v___x_4068_ = lean_nat_sub(v___x_4067_, v___x_4065_);
lean_dec(v___x_4065_);
v___x_4069_ = lean_nat_add(v_pos_4060_, v___x_4068_);
lean_dec(v___x_4068_);
v___x_4070_ = lean_unsigned_to_nat(1u);
v___x_4071_ = lean_nat_add(v_pos_4060_, v___x_4070_);
v___x_4072_ = lean_nat_dec_le(v___x_4071_, v___x_4069_);
lean_dec(v___x_4071_);
if (v___x_4072_ == 0)
{
lean_dec(v___x_4069_);
return v_pos_4060_;
}
else
{
lean_dec(v_pos_4060_);
v_pos_4060_ = v___x_4069_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0___boxed(lean_object* v___x_4102_, lean_object* v_s_4103_, lean_object* v_pos_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4102_, v_s_4103_, v_pos_4104_);
lean_dec_ref(v_s_4103_);
lean_dec(v___x_4102_);
return v_res_4105_;
}
}
static lean_object* _init_l_Lasm_Fetch_nodeRequestUrl___closed__0(void){
_start:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4106_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4107_ = lean_string_utf8_byte_size(v___x_4106_);
return v___x_4107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl(lean_object* v_target_4110_, lean_object* v_host_4111_, lean_object* v_port_4112_){
_start:
{
lean_object* v___y_4114_; 
if (lean_obj_tag(v_host_4111_) == 0)
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4128_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4129_ = l_Nat_reprFast(v_port_4112_);
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
lean_dec_ref(v___x_4129_);
v___y_4114_ = v___x_4130_;
goto v___jp_4113_;
}
else
{
lean_object* v_val_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; uint8_t v___x_4134_; 
v_val_4131_ = lean_ctor_get(v_host_4111_, 0);
lean_inc(v_val_4131_);
lean_dec_ref_known(v_host_4111_, 1);
v___x_4132_ = lean_string_utf8_byte_size(v_val_4131_);
v___x_4133_ = lean_unsigned_to_nat(0u);
v___x_4134_ = lean_nat_dec_eq(v___x_4132_, v___x_4133_);
if (v___x_4134_ == 0)
{
lean_object* v___x_4135_; lean_object* v___x_4136_; uint8_t v_decide_4137_; 
lean_inc(v_val_4131_);
v___x_4135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4135_, 0, v_val_4131_);
lean_ctor_set(v___x_4135_, 1, v___x_4133_);
lean_ctor_set(v___x_4135_, 2, v___x_4132_);
v___x_4136_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4132_, v___x_4135_, v___x_4133_);
lean_dec_ref_known(v___x_4135_, 3);
v_decide_4137_ = lean_nat_dec_eq(v___x_4136_, v___x_4132_);
lean_dec(v___x_4136_);
if (v_decide_4137_ == 0)
{
lean_dec(v_val_4131_);
goto v___jp_4124_;
}
else
{
lean_dec(v_port_4112_);
v___y_4114_ = v_val_4131_;
goto v___jp_4113_;
}
}
else
{
lean_dec(v_val_4131_);
goto v___jp_4124_;
}
}
v___jp_4113_:
{
lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; uint8_t v___x_4118_; 
v___x_4115_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4116_ = lean_string_utf8_byte_size(v_target_4110_);
v___x_4117_ = lean_obj_once(&l_Lasm_Fetch_nodeRequestUrl___closed__0, &l_Lasm_Fetch_nodeRequestUrl___closed__0_once, _init_l_Lasm_Fetch_nodeRequestUrl___closed__0);
v___x_4118_ = lean_nat_dec_le(v___x_4117_, v___x_4116_);
if (v___x_4118_ == 0)
{
lean_dec_ref(v___y_4114_);
lean_inc_ref(v_target_4110_);
return v_target_4110_;
}
else
{
lean_object* v___x_4119_; uint8_t v___x_4120_; 
v___x_4119_ = lean_unsigned_to_nat(0u);
v___x_4120_ = lean_string_memcmp(v_target_4110_, v___x_4115_, v___x_4119_, v___x_4119_, v___x_4117_);
if (v___x_4120_ == 0)
{
lean_dec_ref(v___y_4114_);
lean_inc_ref(v_target_4110_);
return v_target_4110_;
}
else
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4121_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__1));
v___x_4122_ = lean_string_append(v___x_4121_, v___y_4114_);
lean_dec_ref(v___y_4114_);
v___x_4123_ = lean_string_append(v___x_4122_, v_target_4110_);
return v___x_4123_;
}
}
}
v___jp_4124_:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4125_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__2));
v___x_4126_ = l_Nat_reprFast(v_port_4112_);
v___x_4127_ = lean_string_append(v___x_4125_, v___x_4126_);
lean_dec_ref(v___x_4126_);
v___y_4114_ = v___x_4127_;
goto v___jp_4113_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl___boxed(lean_object* v_target_4138_, lean_object* v_host_4139_, lean_object* v_port_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lasm_Fetch_nodeRequestUrl(v_target_4138_, v_host_4139_, v_port_4140_);
lean_dec_ref(v_target_4138_);
return v_res_4141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v_x_4142_){
_start:
{
if (lean_obj_tag(v_x_4142_) == 0)
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4152_; 
v_a_4144_ = lean_ctor_get(v_x_4142_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4146_ = v_x_4142_;
v_isShared_4147_ = v_isSharedCheck_4152_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v_x_4142_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4152_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4149_);
return v___x_4150_;
}
}
}
else
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4162_; 
v_a_4153_ = lean_ctor_get(v_x_4142_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4155_ = v_x_4142_;
v_isShared_4156_ = v_isSharedCheck_4162_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v_x_4142_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4162_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
v___x_4160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4160_, 0, v___x_4159_);
return v___x_4160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v_x_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v_res_4165_; 
v_res_4165_ = l_Lasm_Fetch_serveNode___lam__1(v_x_4163_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_4170_){
_start:
{
if (lean_obj_tag(v_x_4170_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4180_; 
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
lean_object* v___x_4181_; 
lean_dec_ref_known(v_x_4170_, 1);
v___x_4181_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4181_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l_Lasm_Fetch_serveNode___lam__0(v_x_4182_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_4185_, lean_object* v_x_4186_){
_start:
{
if (lean_obj_tag(v_x_4186_) == 0)
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4196_; 
lean_dec_ref(v___f_4185_);
v_a_4188_ = lean_ctor_get(v_x_4186_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v_x_4186_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4190_ = v_x_4186_;
v_isShared_4191_ = v_isSharedCheck_4196_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v_x_4186_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4196_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
lean_object* v___x_4194_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
return v___x_4194_;
}
}
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4217_; 
v_a_4197_ = lean_ctor_get(v_x_4186_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v_x_4186_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4199_ = v_x_4186_;
v_isShared_4200_ = v_isSharedCheck_4217_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v_x_4186_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4217_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v_flush_4201_; lean_object* v___x_4202_; uint8_t v___x_4203_; lean_object* v_val_4205_; lean_object* v___x_4208_; 
v_flush_4201_ = lean_ctor_get(v_a_4197_, 0);
lean_inc_ref(v_flush_4201_);
lean_dec(v_a_4197_);
v___x_4202_ = lean_unsigned_to_nat(0u);
v___x_4203_ = 0;
v___x_4208_ = lean_apply_1(v_flush_4201_, lean_box(0));
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; lean_object* v___x_4211_; 
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v_a_4209_);
v___x_4211_ = v___x_4199_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4209_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
v_val_4205_ = v___x_4211_;
goto v___jp_4204_;
}
}
else
{
lean_object* v_a_4213_; lean_object* v___x_4215_; 
v_a_4213_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4213_);
lean_dec_ref_known(v___x_4208_, 1);
if (v_isShared_4200_ == 0)
{
lean_ctor_set_tag(v___x_4199_, 0);
lean_ctor_set(v___x_4199_, 0, v_a_4213_);
v___x_4215_ = v___x_4199_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4213_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
v_val_4205_ = v___x_4215_;
goto v___jp_4204_;
}
}
v___jp_4204_:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4206_, 0, v_val_4205_);
v___x_4207_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4202_, v___x_4203_, v___x_4206_, v___f_4185_);
return v___x_4207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_4218_, lean_object* v_x_4219_, lean_object* v___y_4220_){
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l_Lasm_Fetch_serveNode___lam__2(v___f_4218_, v_x_4219_);
return v_res_4221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_4222_, lean_object* v_x_4223_){
_start:
{
if (lean_obj_tag(v_x_4223_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4233_; 
lean_dec_ref(v___f_4222_);
v_a_4225_ = lean_ctor_get(v_x_4223_, 0);
v_isSharedCheck_4233_ = !lean_is_exclusive(v_x_4223_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4227_ = v_x_4223_;
v_isShared_4228_ = v_isSharedCheck_4233_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v_x_4223_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4233_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
lean_object* v___x_4231_; 
v___x_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4230_);
return v___x_4231_;
}
}
}
else
{
lean_object* v___x_4235_; uint8_t v_isShared_4236_; uint8_t v_isSharedCheck_4245_; 
v_isSharedCheck_4245_ = !lean_is_exclusive(v_x_4223_);
if (v_isSharedCheck_4245_ == 0)
{
lean_object* v_unused_4246_; 
v_unused_4246_ = lean_ctor_get(v_x_4223_, 0);
lean_dec(v_unused_4246_);
v___x_4235_ = v_x_4223_;
v_isShared_4236_ = v_isSharedCheck_4245_;
goto v_resetjp_4234_;
}
else
{
lean_dec(v_x_4223_);
v___x_4235_ = lean_box(0);
v_isShared_4236_ = v_isSharedCheck_4245_;
goto v_resetjp_4234_;
}
v_resetjp_4234_:
{
lean_object* v___x_4237_; uint8_t v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4241_; 
v___x_4237_ = lean_unsigned_to_nat(0u);
v___x_4238_ = 0;
v___x_4239_ = lean_get_stdout();
if (v_isShared_4236_ == 0)
{
lean_ctor_set(v___x_4235_, 0, v___x_4239_);
v___x_4241_ = v___x_4235_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v___x_4239_);
v___x_4241_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
v___x_4243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4237_, v___x_4238_, v___x_4242_, v___f_4222_);
return v___x_4243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_4247_, lean_object* v_x_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v_res_4250_; 
v_res_4250_ = l_Lasm_Fetch_serveNode___lam__3(v___f_4247_, v_x_4248_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_4251_){
_start:
{
if (lean_obj_tag(v_x_4251_) == 0)
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4261_; 
v_a_4253_ = lean_ctor_get(v_x_4251_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v_x_4251_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4255_ = v_x_4251_;
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v_x_4251_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4258_);
return v___x_4259_;
}
}
}
else
{
lean_object* v___x_4262_; 
lean_dec_ref_known(v_x_4251_, 1);
v___x_4262_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4262_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_4263_, lean_object* v___y_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l_Lasm_Fetch_serveNode___lam__4(v_x_4263_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4267_, lean_object* v___x_4268_, lean_object* v_____r_4269_){
_start:
{
lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4271_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4272_, 0, v_snd_4267_);
lean_ctor_set(v___x_4272_, 1, v___x_4271_);
lean_ctor_set(v___x_4272_, 2, v___x_4268_);
v___x_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4273_, 0, v___x_4272_);
v___x_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4275_, lean_object* v___x_4276_, lean_object* v_____r_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4275_, v___x_4276_, v_____r_4277_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_4280_, lean_object* v_x_4281_){
_start:
{
if (lean_obj_tag(v_x_4281_) == 0)
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4291_; 
lean_dec_ref(v___f_4280_);
v_a_4283_ = lean_ctor_get(v_x_4281_, 0);
v_isSharedCheck_4291_ = !lean_is_exclusive(v_x_4281_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4285_ = v_x_4281_;
v_isShared_4286_ = v_isSharedCheck_4291_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v_x_4281_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4291_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
lean_object* v___x_4289_; 
v___x_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4289_, 0, v___x_4288_);
return v___x_4289_;
}
}
}
else
{
lean_object* v_a_4292_; 
v_a_4292_ = lean_ctor_get(v_x_4281_, 0);
lean_inc(v_a_4292_);
lean_dec_ref_known(v_x_4281_, 1);
if (lean_obj_tag(v_a_4292_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4301_; 
lean_dec_ref(v___f_4280_);
v_a_4293_ = lean_ctor_get(v_a_4292_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v_a_4292_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4295_ = v_a_4292_;
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v_a_4292_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
lean_ctor_set_tag(v___x_4295_, 1);
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
lean_object* v___x_4299_; 
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4298_);
return v___x_4299_;
}
}
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4303_; 
v_a_4302_ = lean_ctor_get(v_a_4292_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v_a_4292_, 1);
v___x_4303_ = lean_apply_2(v___f_4280_, v_a_4302_, lean_box(0));
return v___x_4303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4304_, lean_object* v_x_4305_, lean_object* v___y_4306_){
_start:
{
lean_object* v_res_4307_; 
v_res_4307_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4304_, v_x_4305_);
return v_res_4307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_4309_, lean_object* v___x_4310_, lean_object* v_x_4311_){
_start:
{
if (lean_obj_tag(v_x_4311_) == 0)
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4321_; 
lean_dec_ref(v___x_4310_);
lean_dec(v_snd_4309_);
v_a_4313_ = lean_ctor_get(v_x_4311_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v_x_4311_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4315_ = v_x_4311_;
v_isShared_4316_ = v_isSharedCheck_4321_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v_x_4311_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4321_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
lean_object* v___x_4319_; 
v___x_4319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4318_);
return v___x_4319_;
}
}
}
else
{
lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4332_; 
v_isSharedCheck_4332_ = !lean_is_exclusive(v_x_4311_);
if (v_isSharedCheck_4332_ == 0)
{
lean_object* v_unused_4333_; 
v_unused_4333_ = lean_ctor_get(v_x_4311_, 0);
lean_dec(v_unused_4333_);
v___x_4323_ = v_x_4311_;
v_isShared_4324_ = v_isSharedCheck_4332_;
goto v_resetjp_4322_;
}
else
{
lean_dec(v_x_4311_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4332_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4328_; 
v___x_4325_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4326_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4326_, 0, v_snd_4309_);
lean_ctor_set(v___x_4326_, 1, v___x_4325_);
lean_ctor_set(v___x_4326_, 2, v___x_4310_);
if (v_isShared_4324_ == 0)
{
lean_ctor_set_tag(v___x_4323_, 0);
lean_ctor_set(v___x_4323_, 0, v___x_4326_);
v___x_4328_ = v___x_4323_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v___x_4326_);
v___x_4328_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; 
v___x_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4329_, 0, v___x_4328_);
v___x_4330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4329_);
return v___x_4330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_4334_, lean_object* v___x_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_4334_, v___x_4335_, v_x_4336_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4339_, lean_object* v_name_4340_, lean_object* v_args_4341_){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; uint64_t v___x_4346_; lean_object* v___x_4347_; 
v___x_4343_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4344_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4344_, 0, v_o_4339_);
lean_ctor_set(v___x_4344_, 1, v___x_4343_);
v___x_4345_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4345_, 0, v_name_4340_);
v___x_4346_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4347_ = l_Lasm_JS_Value_invokeRaw(v___x_4344_, v___x_4345_, v_args_4341_, v___x_4346_);
if (lean_obj_tag(v___x_4347_) == 0)
{
lean_object* v_a_4348_; lean_object* v___x_4349_; 
v_a_4348_ = lean_ctor_get(v___x_4347_, 0);
lean_inc(v_a_4348_);
lean_dec_ref_known(v___x_4347_, 1);
v___x_4349_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4348_);
lean_dec(v_a_4348_);
return v___x_4349_;
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4357_; 
v_a_4350_ = lean_ctor_get(v___x_4347_, 0);
v_isSharedCheck_4357_ = !lean_is_exclusive(v___x_4347_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4352_ = v___x_4347_;
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v___x_4347_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
if (v_isShared_4353_ == 0)
{
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_a_4350_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4358_, lean_object* v_name_4359_, lean_object* v_args_4360_, lean_object* v_a_4361_){
_start:
{
lean_object* v_res_4362_; 
v_res_4362_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4358_, v_name_4359_, v_args_4360_);
return v_res_4362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4363_, uint8_t v___x_4364_, lean_object* v___f_4365_, lean_object* v_snd_4366_, lean_object* v_chunk_4367_){
_start:
{
lean_object* v_val_4370_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4373_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4374_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4374_, 0, v_chunk_4367_);
v___x_4375_ = lean_unsigned_to_nat(1u);
v___x_4376_ = lean_mk_empty_array_with_capacity(v___x_4375_);
v___x_4377_ = lean_array_push(v___x_4376_, v___x_4374_);
v___x_4378_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4366_, v___x_4373_, v___x_4377_);
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
v_val_4370_ = v___x_4384_;
goto v___jp_4369_;
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
v_val_4370_ = v___x_4392_;
goto v___jp_4369_;
}
}
}
v___jp_4369_:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4371_, 0, v_val_4370_);
v___x_4372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4363_, v___x_4364_, v___x_4371_, v___f_4365_);
return v___x_4372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4395_, lean_object* v___x_4396_, lean_object* v___f_4397_, lean_object* v_snd_4398_, lean_object* v_chunk_4399_, lean_object* v___y_4400_){
_start:
{
uint8_t v___x_18232__boxed_4401_; lean_object* v_res_4402_; 
v___x_18232__boxed_4401_ = lean_unbox(v___x_4396_);
v_res_4402_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4395_, v___x_18232__boxed_4401_, v___f_4397_, v_snd_4398_, v_chunk_4399_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4403_, uint8_t v___x_4404_, lean_object* v___f_4405_, lean_object* v_x_4406_){
_start:
{
lean_object* v_val_4409_; 
if (lean_obj_tag(v_x_4406_) == 0)
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4428_; 
v_a_4412_ = lean_ctor_get(v_x_4406_, 0);
v_isSharedCheck_4428_ = !lean_is_exclusive(v_x_4406_);
if (v_isSharedCheck_4428_ == 0)
{
v___x_4414_ = v_x_4406_;
v_isShared_4415_ = v_isSharedCheck_4428_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v_x_4406_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4428_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4416_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4417_ = lean_io_error_to_string(v_a_4412_);
v___x_4418_ = lean_string_append(v___x_4416_, v___x_4417_);
lean_dec_ref(v___x_4417_);
v___x_4419_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4418_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; lean_object* v___x_4422_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_a_4420_);
lean_dec_ref_known(v___x_4419_, 1);
if (v_isShared_4415_ == 0)
{
lean_ctor_set_tag(v___x_4414_, 1);
lean_ctor_set(v___x_4414_, 0, v_a_4420_);
v___x_4422_ = v___x_4414_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4420_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
v_val_4409_ = v___x_4422_;
goto v___jp_4408_;
}
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; 
v_a_4424_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_a_4424_);
lean_dec_ref_known(v___x_4419_, 1);
if (v_isShared_4415_ == 0)
{
lean_ctor_set(v___x_4414_, 0, v_a_4424_);
v___x_4426_ = v___x_4414_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4427_; 
v_reuseFailAlloc_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4427_, 0, v_a_4424_);
v___x_4426_ = v_reuseFailAlloc_4427_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
v_val_4409_ = v___x_4426_;
goto v___jp_4408_;
}
}
}
}
else
{
lean_object* v___x_4429_; 
lean_dec_ref(v___f_4405_);
lean_dec(v___x_4403_);
v___x_4429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4429_, 0, v_x_4406_);
return v___x_4429_;
}
v___jp_4408_:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4410_, 0, v_val_4409_);
v___x_4411_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4403_, v___x_4404_, v___x_4410_, v___f_4405_);
return v___x_4411_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4430_, lean_object* v___x_4431_, lean_object* v___f_4432_, lean_object* v_x_4433_, lean_object* v___y_4434_){
_start:
{
uint8_t v___x_18300__boxed_4435_; lean_object* v_res_4436_; 
v___x_18300__boxed_4435_ = lean_unbox(v___x_4431_);
v_res_4436_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4430_, v___x_18300__boxed_4435_, v___f_4432_, v_x_4433_);
return v_res_4436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4437_, lean_object* v_snd_4438_, lean_object* v___y_4439_, uint16_t v_status_4440_, lean_object* v_body_4441_, lean_object* v___x_4442_, lean_object* v___f_4443_, lean_object* v___f_4444_, lean_object* v___f_4445_, lean_object* v___f_4446_, lean_object* v___f_4447_, lean_object* v_x_4448_){
_start:
{
if (lean_obj_tag(v_x_4448_) == 0)
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4458_; 
lean_dec_ref(v___f_4447_);
lean_dec_ref(v___f_4446_);
lean_dec_ref(v___f_4445_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec(v___x_4442_);
lean_dec_ref(v_body_4441_);
lean_dec(v_snd_4438_);
lean_dec(v_stream_4437_);
v_a_4450_ = lean_ctor_get(v_x_4448_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v_x_4448_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4452_ = v_x_4448_;
v_isShared_4453_ = v_isSharedCheck_4458_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v_x_4448_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4458_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
lean_object* v___x_4456_; 
v___x_4456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4456_, 0, v___x_4455_);
return v___x_4456_;
}
}
}
else
{
lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4488_; 
v_isSharedCheck_4488_ = !lean_is_exclusive(v_x_4448_);
if (v_isSharedCheck_4488_ == 0)
{
lean_object* v_unused_4489_; 
v_unused_4489_ = lean_ctor_get(v_x_4448_, 0);
lean_dec(v_unused_4489_);
v___x_4460_ = v_x_4448_;
v_isShared_4461_ = v_isSharedCheck_4488_;
goto v_resetjp_4459_;
}
else
{
lean_dec(v_x_4448_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4488_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
if (lean_obj_tag(v_stream_4437_) == 0)
{
lean_object* v___x_4462_; lean_object* v___y_4464_; uint8_t v___x_4473_; 
lean_dec_ref(v___f_4447_);
lean_dec_ref(v___f_4446_);
lean_dec_ref(v___f_4445_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec(v___x_4442_);
v___x_4462_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4473_ = l_Lasm_Fetch_bodyless(v___y_4439_, v_status_4440_);
if (v___x_4473_ == 0)
{
lean_object* v___x_4474_; 
v___x_4474_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4474_, 0, v_body_4441_);
v___y_4464_ = v___x_4474_;
goto v___jp_4463_;
}
else
{
lean_object* v___x_4475_; 
lean_dec_ref(v_body_4441_);
v___x_4475_ = lean_box(0);
v___y_4464_ = v___x_4475_;
goto v___jp_4463_;
}
v___jp_4463_:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4470_; 
v___x_4465_ = lean_unsigned_to_nat(1u);
v___x_4466_ = lean_mk_empty_array_with_capacity(v___x_4465_);
v___x_4467_ = lean_array_push(v___x_4466_, v___y_4464_);
v___x_4468_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4468_, 0, v_snd_4438_);
lean_ctor_set(v___x_4468_, 1, v___x_4462_);
lean_ctor_set(v___x_4468_, 2, v___x_4467_);
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 0, v___x_4468_);
v___x_4470_ = v___x_4460_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v___x_4468_);
v___x_4470_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
lean_object* v___x_4471_; 
v___x_4471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4470_);
return v___x_4471_;
}
}
}
else
{
lean_object* v_val_4476_; uint8_t v___x_4477_; 
lean_del_object(v___x_4460_);
lean_dec_ref(v_body_4441_);
v_val_4476_ = lean_ctor_get(v_stream_4437_, 0);
lean_inc(v_val_4476_);
lean_dec_ref_known(v_stream_4437_, 1);
v___x_4477_ = l_Lasm_Fetch_bodyless(v___y_4439_, v_status_4440_);
if (v___x_4477_ == 0)
{
lean_object* v___x_4478_; lean_object* v___f_4479_; lean_object* v___x_4480_; lean_object* v___f_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; 
lean_dec_ref(v___f_4447_);
v___x_4478_ = lean_box(v___x_4477_);
lean_inc_n(v___x_4442_, 4);
v___f_4479_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4479_, 0, v___x_4442_);
lean_closure_set(v___f_4479_, 1, v___x_4478_);
lean_closure_set(v___f_4479_, 2, v___f_4443_);
lean_closure_set(v___f_4479_, 3, v_snd_4438_);
v___x_4480_ = lean_box(v___x_4477_);
v___f_4481_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4481_, 0, v___x_4442_);
lean_closure_set(v___f_4481_, 1, v___x_4480_);
lean_closure_set(v___f_4481_, 2, v___f_4444_);
v___x_4482_ = lean_apply_2(v_val_4476_, v___f_4479_, lean_box(0));
v___x_4483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4442_, v___x_4477_, v___x_4482_, v___f_4445_);
v___x_4484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4442_, v___x_4477_, v___x_4483_, v___f_4481_);
v___x_4485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4442_, v___x_4477_, v___x_4484_, v___f_4446_);
return v___x_4485_;
}
else
{
lean_object* v___x_4486_; lean_object* v___x_4487_; 
lean_dec(v_val_4476_);
lean_dec_ref(v___f_4446_);
lean_dec_ref(v___f_4445_);
lean_dec_ref(v___f_4444_);
lean_dec_ref(v___f_4443_);
lean_dec(v___x_4442_);
lean_dec(v_snd_4438_);
v___x_4486_ = lean_box(0);
v___x_4487_ = lean_apply_2(v___f_4447_, v___x_4486_, lean_box(0));
return v___x_4487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4490_, lean_object* v_snd_4491_, lean_object* v___y_4492_, lean_object* v_status_4493_, lean_object* v_body_4494_, lean_object* v___x_4495_, lean_object* v___f_4496_, lean_object* v___f_4497_, lean_object* v___f_4498_, lean_object* v___f_4499_, lean_object* v___f_4500_, lean_object* v_x_4501_, lean_object* v___y_4502_){
_start:
{
uint16_t v_status_boxed_4503_; lean_object* v_res_4504_; 
v_status_boxed_4503_ = lean_unbox(v_status_4493_);
v_res_4504_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4490_, v_snd_4491_, v___y_4492_, v_status_boxed_4503_, v_body_4494_, v___x_4495_, v___f_4496_, v___f_4497_, v___f_4498_, v___f_4499_, v___f_4500_, v_x_4501_);
lean_dec_ref(v___y_4492_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4505_, size_t v_i_4506_, size_t v_stop_4507_, lean_object* v_b_4508_){
_start:
{
uint8_t v___x_4509_; 
v___x_4509_ = lean_usize_dec_eq(v_i_4506_, v_stop_4507_);
if (v___x_4509_ == 0)
{
lean_object* v___x_4510_; lean_object* v_fst_4511_; lean_object* v_snd_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; size_t v___x_4517_; size_t v___x_4518_; 
v___x_4510_ = lean_array_uget_borrowed(v_as_4505_, v_i_4506_);
v_fst_4511_ = lean_ctor_get(v___x_4510_, 0);
v_snd_4512_ = lean_ctor_get(v___x_4510_, 1);
lean_inc(v_fst_4511_);
v___x_4513_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4513_, 0, v_fst_4511_);
v___x_4514_ = lean_array_push(v_b_4508_, v___x_4513_);
lean_inc(v_snd_4512_);
v___x_4515_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4515_, 0, v_snd_4512_);
v___x_4516_ = lean_array_push(v___x_4514_, v___x_4515_);
v___x_4517_ = ((size_t)1ULL);
v___x_4518_ = lean_usize_add(v_i_4506_, v___x_4517_);
v_i_4506_ = v___x_4518_;
v_b_4508_ = v___x_4516_;
goto _start;
}
else
{
return v_b_4508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4520_, lean_object* v_i_4521_, lean_object* v_stop_4522_, lean_object* v_b_4523_){
_start:
{
size_t v_i_boxed_4524_; size_t v_stop_boxed_4525_; lean_object* v_res_4526_; 
v_i_boxed_4524_ = lean_unbox_usize(v_i_4521_);
lean_dec(v_i_4521_);
v_stop_boxed_4525_ = lean_unbox_usize(v_stop_4522_);
lean_dec(v_stop_4522_);
v_res_4526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4520_, v_i_boxed_4524_, v_stop_boxed_4525_, v_b_4523_);
lean_dec_ref(v_as_4520_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4528_, lean_object* v_snd_4529_, lean_object* v___y_4530_, lean_object* v___f_4531_, lean_object* v___f_4532_, lean_object* v_x_4533_){
_start:
{
lean_object* v___y_4536_; uint8_t v___y_4537_; lean_object* v_val_4538_; lean_object* v___y_4542_; lean_object* v___y_4543_; lean_object* v___y_4544_; lean_object* v___y_4545_; 
if (lean_obj_tag(v_x_4533_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4577_; 
lean_dec_ref(v___f_4532_);
lean_dec_ref(v___f_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v_snd_4529_);
lean_dec(v___x_4528_);
v_a_4569_ = lean_ctor_get(v_x_4533_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v_x_4533_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4571_ = v_x_4533_;
v_isShared_4572_ = v_isSharedCheck_4577_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v_x_4533_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4577_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
lean_object* v___x_4575_; 
v___x_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4575_, 0, v___x_4574_);
return v___x_4575_;
}
}
}
else
{
lean_object* v_a_4578_; uint16_t v_status_4579_; lean_object* v_headers_4580_; lean_object* v_body_4581_; lean_object* v_stream_4582_; lean_object* v___x_4583_; lean_object* v___f_4584_; lean_object* v___f_4585_; lean_object* v___f_4586_; lean_object* v___y_4588_; lean_object* v___x_4600_; uint8_t v___x_4601_; 
v_a_4578_ = lean_ctor_get(v_x_4533_, 0);
lean_inc(v_a_4578_);
lean_dec_ref_known(v_x_4533_, 1);
v_status_4579_ = lean_ctor_get_uint16(v_a_4578_, sizeof(void*)*3);
v_headers_4580_ = lean_ctor_get(v_a_4578_, 0);
lean_inc_ref(v_headers_4580_);
v_body_4581_ = lean_ctor_get(v_a_4578_, 1);
lean_inc_ref(v_body_4581_);
v_stream_4582_ = lean_ctor_get(v_a_4578_, 2);
lean_inc(v_stream_4582_);
lean_dec(v_a_4578_);
v___x_4583_ = lean_mk_empty_array_with_capacity(v___x_4528_);
lean_inc_ref_n(v___x_4583_, 2);
lean_inc_n(v_snd_4529_, 2);
v___f_4584_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4584_, 0, v_snd_4529_);
lean_closure_set(v___f_4584_, 1, v___x_4583_);
lean_inc_ref(v___f_4584_);
v___f_4585_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4585_, 0, v___f_4584_);
v___f_4586_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4586_, 0, v_snd_4529_);
lean_closure_set(v___f_4586_, 1, v___x_4583_);
v___x_4600_ = lean_array_get_size(v_headers_4580_);
v___x_4601_ = lean_nat_dec_lt(v___x_4528_, v___x_4600_);
if (v___x_4601_ == 0)
{
lean_dec_ref(v_headers_4580_);
v___y_4588_ = v___x_4583_;
goto v___jp_4587_;
}
else
{
uint8_t v___x_4602_; 
v___x_4602_ = lean_nat_dec_le(v___x_4600_, v___x_4600_);
if (v___x_4602_ == 0)
{
if (v___x_4601_ == 0)
{
lean_dec_ref(v_headers_4580_);
v___y_4588_ = v___x_4583_;
goto v___jp_4587_;
}
else
{
size_t v___x_4603_; size_t v___x_4604_; lean_object* v___x_4605_; 
v___x_4603_ = ((size_t)0ULL);
v___x_4604_ = lean_usize_of_nat(v___x_4600_);
v___x_4605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4580_, v___x_4603_, v___x_4604_, v___x_4583_);
lean_dec_ref(v_headers_4580_);
v___y_4588_ = v___x_4605_;
goto v___jp_4587_;
}
}
else
{
size_t v___x_4606_; size_t v___x_4607_; lean_object* v___x_4608_; 
v___x_4606_ = ((size_t)0ULL);
v___x_4607_ = lean_usize_of_nat(v___x_4600_);
v___x_4608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4580_, v___x_4606_, v___x_4607_, v___x_4583_);
lean_dec_ref(v_headers_4580_);
v___y_4588_ = v___x_4608_;
goto v___jp_4587_;
}
}
v___jp_4587_:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___f_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; uint8_t v___x_4596_; 
v___x_4589_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4590_ = lean_box(v_status_4579_);
lean_inc(v___x_4528_);
lean_inc(v_snd_4529_);
v___f_4591_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4591_, 0, v_stream_4582_);
lean_closure_set(v___f_4591_, 1, v_snd_4529_);
lean_closure_set(v___f_4591_, 2, v___y_4530_);
lean_closure_set(v___f_4591_, 3, v___x_4590_);
lean_closure_set(v___f_4591_, 4, v_body_4581_);
lean_closure_set(v___f_4591_, 5, v___x_4528_);
lean_closure_set(v___f_4591_, 6, v___f_4531_);
lean_closure_set(v___f_4591_, 7, v___f_4586_);
lean_closure_set(v___f_4591_, 8, v___f_4532_);
lean_closure_set(v___f_4591_, 9, v___f_4585_);
lean_closure_set(v___f_4591_, 10, v___f_4584_);
v___x_4592_ = lean_uint16_to_nat(v_status_4579_);
v___x_4593_ = lean_nat_to_int(v___x_4592_);
v___x_4594_ = lean_nat_abs(v___x_4593_);
v___x_4595_ = lean_cstr_to_nat("9007199254740991");
v___x_4596_ = lean_nat_dec_le(v___x_4594_, v___x_4595_);
lean_dec(v___x_4594_);
if (v___x_4596_ == 0)
{
lean_object* v___x_4597_; 
v___x_4597_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4597_, 0, v___x_4593_);
v___y_4542_ = v___y_4588_;
v___y_4543_ = v___f_4591_;
v___y_4544_ = v___x_4589_;
v___y_4545_ = v___x_4597_;
goto v___jp_4541_;
}
else
{
double v___x_4598_; lean_object* v___x_4599_; 
v___x_4598_ = l_Float_ofInt(v___x_4593_);
lean_dec(v___x_4593_);
v___x_4599_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4599_, 0, v___x_4598_);
v___y_4542_ = v___y_4588_;
v___y_4543_ = v___f_4591_;
v___y_4544_ = v___x_4589_;
v___y_4545_ = v___x_4599_;
goto v___jp_4541_;
}
}
}
v___jp_4535_:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v_val_4538_);
v___x_4540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4528_, v___y_4537_, v___x_4539_, v___y_4536_);
return v___x_4540_;
}
v___jp_4541_:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; uint8_t v___x_4551_; lean_object* v___x_4552_; 
v___x_4546_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4546_, 0, v___y_4542_);
v___x_4547_ = lean_unsigned_to_nat(2u);
v___x_4548_ = lean_mk_empty_array_with_capacity(v___x_4547_);
v___x_4549_ = lean_array_push(v___x_4548_, v___y_4545_);
v___x_4550_ = lean_array_push(v___x_4549_, v___x_4546_);
v___x_4551_ = 0;
lean_inc_ref(v___y_4544_);
v___x_4552_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4529_, v___y_4544_, v___x_4550_);
if (lean_obj_tag(v___x_4552_) == 0)
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4560_; 
v_a_4553_ = lean_ctor_get(v___x_4552_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4552_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4555_ = v___x_4552_;
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v___x_4552_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4558_; 
if (v_isShared_4556_ == 0)
{
lean_ctor_set_tag(v___x_4555_, 1);
v___x_4558_ = v___x_4555_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4553_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
v___y_4536_ = v___y_4543_;
v___y_4537_ = v___x_4551_;
v_val_4538_ = v___x_4558_;
goto v___jp_4535_;
}
}
}
else
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
v_a_4561_ = lean_ctor_get(v___x_4552_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4552_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4552_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4552_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
lean_ctor_set_tag(v___x_4563_, 0);
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
v___y_4536_ = v___y_4543_;
v___y_4537_ = v___x_4551_;
v_val_4538_ = v___x_4566_;
goto v___jp_4535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4609_, lean_object* v_snd_4610_, lean_object* v___y_4611_, lean_object* v___f_4612_, lean_object* v___f_4613_, lean_object* v_x_4614_, lean_object* v___y_4615_){
_start:
{
lean_object* v_res_4616_; 
v_res_4616_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4609_, v_snd_4610_, v___y_4611_, v___f_4612_, v___f_4613_, v_x_4614_);
return v_res_4616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4617_, lean_object* v___x_4618_, lean_object* v___f_4619_, lean_object* v_request_4620_){
_start:
{
uint8_t v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4622_ = 0;
v___x_4623_ = l_Lasm_Fetch_respond(v_handler_4617_, v_request_4620_);
v___x_4624_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4618_, v___x_4622_, v___x_4623_, v___f_4619_);
return v___x_4624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4625_, lean_object* v___x_4626_, lean_object* v___f_4627_, lean_object* v_request_4628_, lean_object* v___y_4629_){
_start:
{
lean_object* v_res_4630_; 
v_res_4630_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4625_, v___x_4626_, v___f_4627_, v_request_4628_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4631_, lean_object* v_x_4632_){
_start:
{
if (lean_obj_tag(v_x_4632_) == 0)
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4642_; 
lean_dec_ref(v___f_4631_);
v_a_4634_ = lean_ctor_get(v_x_4632_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v_x_4632_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4636_ = v_x_4632_;
v_isShared_4637_ = v_isSharedCheck_4642_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v_x_4632_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4642_;
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
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
lean_object* v___x_4640_; 
v___x_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4640_, 0, v___x_4639_);
return v___x_4640_;
}
}
}
else
{
lean_object* v_a_4643_; lean_object* v___x_4644_; 
v_a_4643_ = lean_ctor_get(v_x_4632_, 0);
lean_inc(v_a_4643_);
lean_dec_ref_known(v_x_4632_, 1);
v___x_4644_ = lean_apply_2(v___f_4631_, v_a_4643_, lean_box(0));
return v___x_4644_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4645_, lean_object* v_x_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4645_, v_x_4646_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v___y_4649_, lean_object* v___x_4650_, lean_object* v___x_4651_, lean_object* v___f_4652_, lean_object* v___x_4653_, uint8_t v___x_4654_, lean_object* v___f_4655_, lean_object* v_x_4656_){
_start:
{
if (lean_obj_tag(v_x_4656_) == 0)
{
lean_object* v_a_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4666_; 
lean_dec_ref(v___f_4655_);
lean_dec(v___x_4653_);
lean_dec_ref(v___f_4652_);
lean_dec_ref(v___x_4651_);
lean_dec_ref(v___x_4650_);
lean_dec_ref(v___y_4649_);
v_a_4658_ = lean_ctor_get(v_x_4656_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v_x_4656_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4660_ = v_x_4656_;
v_isShared_4661_ = v_isSharedCheck_4666_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_a_4658_);
lean_dec(v_x_4656_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4666_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4663_; 
if (v_isShared_4661_ == 0)
{
v___x_4663_ = v___x_4660_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_a_4658_);
v___x_4663_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
lean_object* v___x_4664_; 
v___x_4664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4664_, 0, v___x_4663_);
return v___x_4664_;
}
}
}
else
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4677_; 
v_a_4667_ = lean_ctor_get(v_x_4656_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v_x_4656_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4669_ = v_x_4656_;
v_isShared_4670_ = v_isSharedCheck_4677_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v_x_4656_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4677_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4671_; lean_object* v___x_4673_; 
v___x_4671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4671_, 0, v___y_4649_);
lean_ctor_set(v___x_4671_, 1, v___x_4650_);
lean_ctor_set(v___x_4671_, 2, v___x_4651_);
lean_ctor_set(v___x_4671_, 3, v_a_4667_);
lean_ctor_set(v___x_4671_, 4, v___f_4652_);
if (v_isShared_4670_ == 0)
{
lean_ctor_set(v___x_4669_, 0, v___x_4671_);
v___x_4673_ = v___x_4669_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v___x_4671_);
v___x_4673_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4673_);
v___x_4675_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4654_, v___x_4674_, v___f_4655_);
return v___x_4675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v___y_4678_, lean_object* v___x_4679_, lean_object* v___x_4680_, lean_object* v___f_4681_, lean_object* v___x_4682_, lean_object* v___x_4683_, lean_object* v___f_4684_, lean_object* v_x_4685_, lean_object* v___y_4686_){
_start:
{
uint8_t v___x_18707__boxed_4687_; lean_object* v_res_4688_; 
v___x_18707__boxed_4687_ = lean_unbox(v___x_4683_);
v_res_4688_ = l_Lasm_Fetch_serveNode___lam__17(v___y_4678_, v___x_4679_, v___x_4680_, v___f_4681_, v___x_4682_, v___x_18707__boxed_4687_, v___f_4684_, v_x_4685_);
return v_res_4688_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_4689_; uint8_t v___x_4690_; uint64_t v___x_4691_; 
v___x_4689_ = 8ULL;
v___x_4690_ = 0;
v___x_4691_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4690_, v___x_4689_);
return v___x_4691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_4692_, lean_object* v_name_4693_, lean_object* v_args_4694_){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; uint64_t v___x_4699_; lean_object* v___x_4700_; 
v___x_4696_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4697_, 0, v_o_4692_);
lean_ctor_set(v___x_4697_, 1, v___x_4696_);
lean_inc_ref(v_name_4693_);
v___x_4698_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4698_, 0, v_name_4693_);
v___x_4699_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_4700_ = l_Lasm_JS_Value_invokeRaw(v___x_4697_, v___x_4698_, v_args_4694_, v___x_4699_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_object* v_a_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
v_a_4701_ = lean_ctor_get(v___x_4700_, 0);
lean_inc(v_a_4701_);
lean_dec_ref_known(v___x_4700_, 1);
v___x_4702_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4703_ = lean_string_append(v___x_4702_, v_name_4693_);
lean_dec_ref(v_name_4693_);
v___x_4704_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4703_, v_a_4701_);
lean_dec(v_a_4701_);
lean_dec_ref(v___x_4703_);
return v___x_4704_;
}
else
{
lean_dec_ref(v_name_4693_);
return v___x_4700_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_4705_, lean_object* v_name_4706_, lean_object* v_args_4707_, lean_object* v_a_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_4705_, v_name_4706_, v_args_4707_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4711_, uint8_t v___x_4712_, lean_object* v___f_4713_, lean_object* v___x_4714_, lean_object* v_a_4715_, lean_object* v_x_4716_){
_start:
{
lean_object* v_val_4719_; 
if (lean_obj_tag(v_x_4716_) == 0)
{
lean_object* v_a_4722_; lean_object* v___x_4724_; uint8_t v_isShared_4725_; uint8_t v_isSharedCheck_4730_; 
lean_dec(v_a_4715_);
lean_dec_ref(v___f_4713_);
lean_dec(v___x_4711_);
v_a_4722_ = lean_ctor_get(v_x_4716_, 0);
v_isSharedCheck_4730_ = !lean_is_exclusive(v_x_4716_);
if (v_isSharedCheck_4730_ == 0)
{
v___x_4724_ = v_x_4716_;
v_isShared_4725_ = v_isSharedCheck_4730_;
goto v_resetjp_4723_;
}
else
{
lean_inc(v_a_4722_);
lean_dec(v_x_4716_);
v___x_4724_ = lean_box(0);
v_isShared_4725_ = v_isSharedCheck_4730_;
goto v_resetjp_4723_;
}
v_resetjp_4723_:
{
lean_object* v___x_4727_; 
if (v_isShared_4725_ == 0)
{
v___x_4727_ = v___x_4724_;
goto v_reusejp_4726_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v_a_4722_);
v___x_4727_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4726_;
}
v_reusejp_4726_:
{
lean_object* v___x_4728_; 
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
return v___x_4728_;
}
}
}
else
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4749_; 
v_a_4731_ = lean_ctor_get(v_x_4716_, 0);
v_isSharedCheck_4749_ = !lean_is_exclusive(v_x_4716_);
if (v_isSharedCheck_4749_ == 0)
{
v___x_4733_ = v_x_4716_;
v_isShared_4734_ = v_isSharedCheck_4749_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v_x_4716_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4749_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4735_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4736_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4737_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4737_, 0, v_a_4731_);
lean_ctor_set(v___x_4737_, 1, v___x_4736_);
v___x_4738_ = lean_mk_empty_array_with_capacity(v___x_4714_);
v___x_4739_ = lean_array_push(v___x_4738_, v___x_4737_);
v___x_4740_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_4715_, v___x_4735_, v___x_4739_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4743_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4741_);
lean_dec_ref_known(v___x_4740_, 1);
if (v_isShared_4734_ == 0)
{
lean_ctor_set(v___x_4733_, 0, v_a_4741_);
v___x_4743_ = v___x_4733_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_a_4741_);
v___x_4743_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
v_val_4719_ = v___x_4743_;
goto v___jp_4718_;
}
}
else
{
lean_object* v_a_4745_; lean_object* v___x_4747_; 
v_a_4745_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4745_);
lean_dec_ref_known(v___x_4740_, 1);
if (v_isShared_4734_ == 0)
{
lean_ctor_set_tag(v___x_4733_, 0);
lean_ctor_set(v___x_4733_, 0, v_a_4745_);
v___x_4747_ = v___x_4733_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4748_; 
v_reuseFailAlloc_4748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4748_, 0, v_a_4745_);
v___x_4747_ = v_reuseFailAlloc_4748_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
v_val_4719_ = v___x_4747_;
goto v___jp_4718_;
}
}
}
}
v___jp_4718_:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v_val_4719_);
v___x_4721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4711_, v___x_4712_, v___x_4720_, v___f_4713_);
return v___x_4721_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4750_, lean_object* v___x_4751_, lean_object* v___f_4752_, lean_object* v___x_4753_, lean_object* v_a_4754_, lean_object* v_x_4755_, lean_object* v___y_4756_){
_start:
{
uint8_t v___x_18806__boxed_4757_; lean_object* v_res_4758_; 
v___x_18806__boxed_4757_ = lean_unbox(v___x_4751_);
v_res_4758_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4750_, v___x_18806__boxed_4757_, v___f_4752_, v___x_4753_, v_a_4754_, v_x_4755_);
lean_dec(v___x_4753_);
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4759_, lean_object* v___x_4760_, lean_object* v___x_4761_, lean_object* v___x_4762_, lean_object* v___x_4763_, uint8_t v___x_4764_, lean_object* v___f_4765_, lean_object* v_x_4766_){
_start:
{
if (lean_obj_tag(v_x_4766_) == 0)
{
lean_object* v_a_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4776_; 
lean_dec_ref(v___f_4765_);
lean_dec(v___x_4763_);
lean_dec_ref(v___x_4762_);
lean_dec_ref(v___x_4761_);
lean_dec_ref(v___x_4760_);
lean_dec_ref(v___y_4759_);
v_a_4768_ = lean_ctor_get(v_x_4766_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v_x_4766_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4770_ = v_x_4766_;
v_isShared_4771_ = v_isSharedCheck_4776_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_a_4768_);
lean_dec(v_x_4766_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4776_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4773_; 
if (v_isShared_4771_ == 0)
{
v___x_4773_ = v___x_4770_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_a_4768_);
v___x_4773_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
lean_object* v___x_4774_; 
v___x_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4774_, 0, v___x_4773_);
return v___x_4774_;
}
}
}
else
{
lean_object* v_a_4777_; lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4787_; 
v_a_4777_ = lean_ctor_get(v_x_4766_, 0);
v_isSharedCheck_4787_ = !lean_is_exclusive(v_x_4766_);
if (v_isSharedCheck_4787_ == 0)
{
v___x_4779_ = v_x_4766_;
v_isShared_4780_ = v_isSharedCheck_4787_;
goto v_resetjp_4778_;
}
else
{
lean_inc(v_a_4777_);
lean_dec(v_x_4766_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4787_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v___x_4781_; lean_object* v___x_4783_; 
v___x_4781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4781_, 0, v___y_4759_);
lean_ctor_set(v___x_4781_, 1, v___x_4760_);
lean_ctor_set(v___x_4781_, 2, v___x_4761_);
lean_ctor_set(v___x_4781_, 3, v___x_4762_);
lean_ctor_set(v___x_4781_, 4, v_a_4777_);
if (v_isShared_4780_ == 0)
{
lean_ctor_set(v___x_4779_, 0, v___x_4781_);
v___x_4783_ = v___x_4779_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v___x_4781_);
v___x_4783_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
v___x_4784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4783_);
v___x_4785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4763_, v___x_4764_, v___x_4784_, v___f_4765_);
return v___x_4785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4788_, lean_object* v___x_4789_, lean_object* v___x_4790_, lean_object* v___x_4791_, lean_object* v___x_4792_, lean_object* v___x_4793_, lean_object* v___f_4794_, lean_object* v_x_4795_, lean_object* v___y_4796_){
_start:
{
uint8_t v___x_18896__boxed_4797_; lean_object* v_res_4798_; 
v___x_18896__boxed_4797_ = lean_unbox(v___x_4793_);
v_res_4798_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4788_, v___x_4789_, v___x_4790_, v___x_4791_, v___x_4792_, v___x_18896__boxed_4797_, v___f_4794_, v_x_4795_);
return v_res_4798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4799_, uint8_t v___x_4800_, lean_object* v___f_4801_, lean_object* v_x_4802_){
_start:
{
lean_object* v_val_4805_; 
if (lean_obj_tag(v_x_4802_) == 0)
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4816_; 
lean_dec_ref(v___f_4801_);
lean_dec(v___x_4799_);
v_a_4808_ = lean_ctor_get(v_x_4802_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v_x_4802_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4810_ = v_x_4802_;
v_isShared_4811_ = v_isSharedCheck_4816_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v_x_4802_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4816_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
lean_object* v___x_4814_; 
v___x_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4813_);
return v___x_4814_;
}
}
}
else
{
lean_object* v_a_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4830_; 
v_a_4817_ = lean_ctor_get(v_x_4802_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v_x_4802_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4819_ = v_x_4802_;
v_isShared_4820_ = v_isSharedCheck_4830_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_a_4817_);
lean_dec(v_x_4802_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4830_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4821_; 
v___x_4821_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4817_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_object* v_a_4822_; lean_object* v___x_4824_; 
v_a_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_a_4822_);
lean_dec_ref_known(v___x_4821_, 1);
if (v_isShared_4820_ == 0)
{
lean_ctor_set(v___x_4819_, 0, v_a_4822_);
v___x_4824_ = v___x_4819_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4822_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
v_val_4805_ = v___x_4824_;
goto v___jp_4804_;
}
}
else
{
lean_object* v_a_4826_; lean_object* v___x_4828_; 
v_a_4826_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_a_4826_);
lean_dec_ref_known(v___x_4821_, 1);
if (v_isShared_4820_ == 0)
{
lean_ctor_set_tag(v___x_4819_, 0);
lean_ctor_set(v___x_4819_, 0, v_a_4826_);
v___x_4828_ = v___x_4819_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_a_4826_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
v_val_4805_ = v___x_4828_;
goto v___jp_4804_;
}
}
}
}
v___jp_4804_:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___x_4806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4806_, 0, v_val_4805_);
v___x_4807_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4799_, v___x_4800_, v___x_4806_, v___f_4801_);
return v___x_4807_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4831_, lean_object* v___x_4832_, lean_object* v___f_4833_, lean_object* v_x_4834_, lean_object* v___y_4835_){
_start:
{
uint8_t v___x_18959__boxed_4836_; lean_object* v_res_4837_; 
v___x_18959__boxed_4836_ = lean_unbox(v___x_4832_);
v_res_4837_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4831_, v___x_18959__boxed_4836_, v___f_4833_, v_x_4834_);
return v_res_4837_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_4840_, size_t v_i_4841_, size_t v_stop_4842_){
_start:
{
uint8_t v___x_4843_; 
v___x_4843_ = lean_usize_dec_eq(v_i_4841_, v_stop_4842_);
if (v___x_4843_ == 0)
{
lean_object* v___x_4844_; lean_object* v_fst_4845_; uint8_t v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; uint8_t v___x_4849_; 
v___x_4844_ = lean_array_uget_borrowed(v_as_4840_, v_i_4841_);
v_fst_4845_ = lean_ctor_get(v___x_4844_, 0);
v___x_4846_ = 1;
lean_inc(v_fst_4845_);
v___x_4847_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4845_);
v___x_4848_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_4849_ = lean_string_dec_eq(v___x_4847_, v___x_4848_);
if (v___x_4849_ == 0)
{
lean_object* v___x_4850_; uint8_t v___x_4851_; 
v___x_4850_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_4851_ = lean_string_dec_eq(v___x_4847_, v___x_4850_);
lean_dec_ref(v___x_4847_);
if (v___x_4851_ == 0)
{
size_t v___x_4852_; size_t v___x_4853_; 
v___x_4852_ = ((size_t)1ULL);
v___x_4853_ = lean_usize_add(v_i_4841_, v___x_4852_);
v_i_4841_ = v___x_4853_;
goto _start;
}
else
{
return v___x_4846_;
}
}
else
{
lean_dec_ref(v___x_4847_);
return v___x_4846_;
}
}
else
{
uint8_t v___x_4855_; 
v___x_4855_ = 0;
return v___x_4855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_4856_, lean_object* v_i_4857_, lean_object* v_stop_4858_){
_start:
{
size_t v_i_boxed_4859_; size_t v_stop_boxed_4860_; uint8_t v_res_4861_; lean_object* v_r_4862_; 
v_i_boxed_4859_ = lean_unbox_usize(v_i_4857_);
lean_dec(v_i_4857_);
v_stop_boxed_4860_ = lean_unbox_usize(v_stop_4858_);
lean_dec(v_stop_4858_);
v_res_4861_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_4856_, v_i_boxed_4859_, v_stop_boxed_4860_);
lean_dec_ref(v_as_4856_);
v_r_4862_ = lean_box(v_res_4861_);
return v_r_4862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4863_, lean_object* v_range_4864_, lean_object* v_b_4865_, lean_object* v_i_4866_){
_start:
{
lean_object* v_stop_4867_; lean_object* v_step_4868_; uint8_t v___x_4869_; 
v_stop_4867_ = lean_ctor_get(v_range_4864_, 1);
v_step_4868_ = lean_ctor_get(v_range_4864_, 2);
v___x_4869_ = lean_nat_dec_lt(v_i_4866_, v_stop_4867_);
if (v___x_4869_ == 0)
{
lean_dec(v_i_4866_);
return v_b_4865_;
}
else
{
lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
v___x_4870_ = lean_unsigned_to_nat(2u);
v___x_4871_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4872_ = lean_unsigned_to_nat(1u);
v___x_4873_ = lean_nat_mul(v___x_4870_, v_i_4866_);
v___x_4874_ = lean_array_get_borrowed(v___x_4871_, v___y_4863_, v___x_4873_);
v___x_4875_ = lean_nat_add(v___x_4873_, v___x_4872_);
lean_dec(v___x_4873_);
v___x_4876_ = lean_array_get_borrowed(v___x_4871_, v___y_4863_, v___x_4875_);
lean_dec(v___x_4875_);
lean_inc(v___x_4876_);
lean_inc(v___x_4874_);
v___x_4877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4877_, 0, v___x_4874_);
lean_ctor_set(v___x_4877_, 1, v___x_4876_);
v___x_4878_ = lean_array_push(v_b_4865_, v___x_4877_);
v___x_4879_ = lean_nat_add(v_i_4866_, v_step_4868_);
lean_dec(v_i_4866_);
v_b_4865_ = v___x_4878_;
v_i_4866_ = v___x_4879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4881_, lean_object* v_range_4882_, lean_object* v_b_4883_, lean_object* v_i_4884_){
_start:
{
lean_object* v_res_4885_; 
v_res_4885_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4881_, v_range_4882_, v_b_4883_, v_i_4884_);
lean_dec_ref(v_range_4882_);
lean_dec_ref(v___y_4881_);
return v_res_4885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4886_, size_t v_i_4887_, size_t v_stop_4888_, lean_object* v_b_4889_){
_start:
{
lean_object* v___y_4891_; uint8_t v___x_4895_; 
v___x_4895_ = lean_usize_dec_eq(v_i_4887_, v_stop_4888_);
if (v___x_4895_ == 0)
{
lean_object* v___x_4896_; 
v___x_4896_ = lean_array_uget_borrowed(v_as_4886_, v_i_4887_);
if (lean_obj_tag(v___x_4896_) == 4)
{
lean_object* v_s_4897_; lean_object* v___x_4898_; 
v_s_4897_ = lean_ctor_get(v___x_4896_, 0);
lean_inc_ref(v_s_4897_);
v___x_4898_ = lean_array_push(v_b_4889_, v_s_4897_);
v___y_4891_ = v___x_4898_;
goto v___jp_4890_;
}
else
{
v___y_4891_ = v_b_4889_;
goto v___jp_4890_;
}
}
else
{
return v_b_4889_;
}
v___jp_4890_:
{
size_t v___x_4892_; size_t v___x_4893_; 
v___x_4892_ = ((size_t)1ULL);
v___x_4893_ = lean_usize_add(v_i_4887_, v___x_4892_);
v_i_4887_ = v___x_4893_;
v_b_4889_ = v___y_4891_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4899_, lean_object* v_i_4900_, lean_object* v_stop_4901_, lean_object* v_b_4902_){
_start:
{
size_t v_i_boxed_4903_; size_t v_stop_boxed_4904_; lean_object* v_res_4905_; 
v_i_boxed_4903_ = lean_unbox_usize(v_i_4900_);
lean_dec(v_i_4900_);
v_stop_boxed_4904_ = lean_unbox_usize(v_stop_4901_);
lean_dec(v_stop_4901_);
v_res_4905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4899_, v_i_boxed_4903_, v_stop_boxed_4904_, v_b_4902_);
lean_dec_ref(v_as_4899_);
return v_res_4905_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4906_, lean_object* v_start_4907_, lean_object* v_stop_4908_){
_start:
{
lean_object* v___x_4909_; uint8_t v___x_4910_; 
v___x_4909_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4910_ = lean_nat_dec_lt(v_start_4907_, v_stop_4908_);
if (v___x_4910_ == 0)
{
return v___x_4909_;
}
else
{
lean_object* v___x_4911_; uint8_t v___x_4912_; 
v___x_4911_ = lean_array_get_size(v_as_4906_);
v___x_4912_ = lean_nat_dec_le(v_stop_4908_, v___x_4911_);
if (v___x_4912_ == 0)
{
uint8_t v___x_4913_; 
v___x_4913_ = lean_nat_dec_lt(v_start_4907_, v___x_4911_);
if (v___x_4913_ == 0)
{
return v___x_4909_;
}
else
{
size_t v___x_4914_; size_t v___x_4915_; lean_object* v___x_4916_; 
v___x_4914_ = lean_usize_of_nat(v_start_4907_);
v___x_4915_ = lean_usize_of_nat(v___x_4911_);
v___x_4916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4906_, v___x_4914_, v___x_4915_, v___x_4909_);
return v___x_4916_;
}
}
else
{
size_t v___x_4917_; size_t v___x_4918_; lean_object* v___x_4919_; 
v___x_4917_ = lean_usize_of_nat(v_start_4907_);
v___x_4918_ = lean_usize_of_nat(v_stop_4908_);
v___x_4919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4906_, v___x_4917_, v___x_4918_, v___x_4909_);
return v___x_4919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4920_, lean_object* v_start_4921_, lean_object* v_stop_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4920_, v_start_4921_, v_stop_4922_);
lean_dec(v_stop_4922_);
lean_dec(v_start_4921_);
lean_dec_ref(v_as_4920_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4925_, size_t v_sz_4926_, size_t v_i_4927_, lean_object* v_b_4928_){
_start:
{
uint8_t v___x_4929_; 
v___x_4929_ = lean_usize_dec_lt(v_i_4927_, v_sz_4926_);
if (v___x_4929_ == 0)
{
lean_inc_ref(v_b_4928_);
return v_b_4928_;
}
else
{
lean_object* v_a_4930_; lean_object* v_fst_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; uint8_t v___x_4935_; 
v_a_4930_ = lean_array_uget_borrowed(v_as_4925_, v_i_4927_);
v_fst_4931_ = lean_ctor_get(v_a_4930_, 0);
v___x_4932_ = lean_box(0);
lean_inc(v_fst_4931_);
v___x_4933_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4931_);
v___x_4934_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4935_ = lean_string_dec_eq(v___x_4933_, v___x_4934_);
lean_dec_ref(v___x_4933_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4936_; size_t v___x_4937_; size_t v___x_4938_; 
v___x_4936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4937_ = ((size_t)1ULL);
v___x_4938_ = lean_usize_add(v_i_4927_, v___x_4937_);
v_i_4927_ = v___x_4938_;
v_b_4928_ = v___x_4936_;
goto _start;
}
else
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
lean_inc(v_a_4930_);
v___x_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4940_, 0, v_a_4930_);
v___x_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4941_, 0, v___x_4940_);
v___x_4942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
lean_ctor_set(v___x_4942_, 1, v___x_4932_);
return v___x_4942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4943_, lean_object* v_sz_4944_, lean_object* v_i_4945_, lean_object* v_b_4946_){
_start:
{
size_t v_sz_boxed_4947_; size_t v_i_boxed_4948_; lean_object* v_res_4949_; 
v_sz_boxed_4947_ = lean_unbox_usize(v_sz_4944_);
lean_dec(v_sz_4944_);
v_i_boxed_4948_ = lean_unbox_usize(v_i_4945_);
lean_dec(v_i_4945_);
v_res_4949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4943_, v_sz_boxed_4947_, v_i_boxed_4948_, v_b_4946_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_as_4943_);
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4952_, lean_object* v_snd_4953_, lean_object* v___f_4954_, lean_object* v___f_4955_, lean_object* v_handler_4956_, lean_object* v_options_4957_, lean_object* v_a_4958_, lean_object* v_fst_4959_, lean_object* v_a_4960_, lean_object* v___x_4961_, lean_object* v___x_4962_, lean_object* v___x_4963_, lean_object* v_x_4964_){
_start:
{
lean_object* v___y_4967_; lean_object* v___y_4968_; lean_object* v___y_4969_; lean_object* v___y_4970_; lean_object* v___y_4971_; lean_object* v___y_4972_; uint8_t v___y_4973_; uint8_t v___y_4982_; lean_object* v___y_4983_; lean_object* v___y_4984_; lean_object* v_val_4985_; lean_object* v___y_4989_; lean_object* v___y_4990_; lean_object* v___y_4991_; lean_object* v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_4996_; lean_object* v___y_4997_; lean_object* v___y_4998_; lean_object* v___y_4999_; lean_object* v___y_5000_; lean_object* v___y_5001_; lean_object* v___y_5002_; lean_object* v___y_5050_; lean_object* v___y_5051_; lean_object* v___y_5052_; lean_object* v___y_5053_; lean_object* v___y_5054_; lean_object* v___y_5055_; lean_object* v___y_5056_; lean_object* v___y_5057_; lean_object* v___y_5058_; lean_object* v___y_5059_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5065_; lean_object* v___y_5066_; lean_object* v___y_5067_; lean_object* v___y_5068_; 
if (lean_obj_tag(v_x_4964_) == 0)
{
lean_object* v_a_5094_; lean_object* v___x_5096_; uint8_t v_isShared_5097_; uint8_t v_isSharedCheck_5102_; 
lean_dec(v_a_4960_);
lean_dec(v_fst_4959_);
lean_dec(v_a_4958_);
lean_dec_ref(v_options_4957_);
lean_dec_ref(v_handler_4956_);
lean_dec_ref(v___f_4955_);
lean_dec_ref(v___f_4954_);
lean_dec(v_snd_4953_);
lean_dec(v___y_4952_);
v_a_5094_ = lean_ctor_get(v_x_4964_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v_x_4964_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5096_ = v_x_4964_;
v_isShared_5097_ = v_isSharedCheck_5102_;
goto v_resetjp_5095_;
}
else
{
lean_inc(v_a_5094_);
lean_dec(v_x_4964_);
v___x_5096_ = lean_box(0);
v_isShared_5097_ = v_isSharedCheck_5102_;
goto v_resetjp_5095_;
}
v_resetjp_5095_:
{
lean_object* v___x_5099_; 
if (v_isShared_5097_ == 0)
{
v___x_5099_ = v___x_5096_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5094_);
v___x_5099_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
lean_object* v___x_5100_; 
v___x_5100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5099_);
return v___x_5100_;
}
}
}
else
{
lean_object* v_a_5103_; lean_object* v___y_5105_; lean_object* v___y_5106_; lean_object* v___y_5114_; lean_object* v___x_5118_; 
v_a_5103_ = lean_ctor_get(v_x_4964_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v_x_4964_, 1);
v___x_5118_ = l_Lasm_JS_Data_field(v_a_5103_, v___x_4963_);
if (lean_obj_tag(v___x_5118_) == 4)
{
lean_object* v_s_5119_; 
v_s_5119_ = lean_ctor_get(v___x_5118_, 0);
lean_inc_ref(v_s_5119_);
lean_dec_ref_known(v___x_5118_, 1);
v___y_5114_ = v_s_5119_;
goto v___jp_5113_;
}
else
{
lean_object* v___x_5120_; 
lean_dec(v___x_5118_);
v___x_5120_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_5114_ = v___x_5120_;
goto v___jp_5113_;
}
v___jp_5104_:
{
lean_object* v___x_5107_; 
v___x_5107_ = l_Lasm_JS_Data_field(v_a_5103_, v___x_4961_);
lean_dec(v_a_5103_);
if (lean_obj_tag(v___x_5107_) == 7)
{
lean_object* v_items_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
v_items_5108_ = lean_ctor_get(v___x_5107_, 0);
lean_inc_ref(v_items_5108_);
lean_dec_ref_known(v___x_5107_, 1);
v___x_5109_ = lean_unsigned_to_nat(0u);
v___x_5110_ = lean_array_get_size(v_items_5108_);
v___x_5111_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_5108_, v___x_5109_, v___x_5110_);
lean_dec_ref(v_items_5108_);
lean_inc_ref(v___y_5105_);
v___y_5065_ = v___y_5105_;
v___y_5066_ = v___y_5105_;
v___y_5067_ = v___y_5106_;
v___y_5068_ = v___x_5111_;
goto v___jp_5064_;
}
else
{
lean_object* v___x_5112_; 
lean_dec(v___x_5107_);
v___x_5112_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_5105_);
v___y_5065_ = v___y_5105_;
v___y_5066_ = v___y_5105_;
v___y_5067_ = v___y_5106_;
v___y_5068_ = v___x_5112_;
goto v___jp_5064_;
}
}
v___jp_5113_:
{
lean_object* v___x_5115_; 
v___x_5115_ = l_Lasm_JS_Data_field(v_a_5103_, v___x_4962_);
if (lean_obj_tag(v___x_5115_) == 4)
{
lean_object* v_s_5116_; 
v_s_5116_ = lean_ctor_get(v___x_5115_, 0);
lean_inc_ref(v_s_5116_);
lean_dec_ref_known(v___x_5115_, 1);
v___y_5105_ = v___y_5114_;
v___y_5106_ = v_s_5116_;
goto v___jp_5104_;
}
else
{
lean_object* v___x_5117_; 
lean_dec(v___x_5115_);
v___x_5117_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_5105_ = v___y_5114_;
v___y_5106_ = v___x_5117_;
goto v___jp_5104_;
}
}
}
v___jp_4966_:
{
lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___f_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___x_4974_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4969_, v___y_4972_, v___y_4952_);
lean_dec_ref(v___y_4969_);
v___x_4975_ = l_ByteArray_empty;
v___f_4976_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4977_, 0, v___y_4968_);
lean_ctor_set(v___x_4977_, 1, v___x_4974_);
lean_ctor_set(v___x_4977_, 2, v___y_4967_);
lean_ctor_set(v___x_4977_, 3, v___x_4975_);
lean_ctor_set(v___x_4977_, 4, v___f_4976_);
v___x_4978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4977_);
v___x_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4978_);
v___x_4980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4970_, v___y_4973_, v___x_4979_, v___y_4971_);
return v___x_4980_;
}
v___jp_4981_:
{
lean_object* v___x_4986_; lean_object* v___x_4987_; 
v___x_4986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4986_, 0, v_val_4985_);
v___x_4987_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4984_, v___y_4982_, v___x_4986_, v___y_4983_);
return v___x_4987_;
}
v___jp_4988_:
{
lean_object* v___x_5003_; uint8_t v___x_5004_; 
v___x_5003_ = lean_array_get_size(v___y_4995_);
v___x_5004_ = lean_nat_dec_lt(v___y_4999_, v___x_5003_);
if (v___x_5004_ == 0)
{
lean_dec(v___y_5001_);
lean_dec_ref(v___y_4997_);
lean_dec_ref(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec(v_a_4960_);
lean_dec(v_fst_4959_);
lean_dec(v_a_4958_);
lean_dec_ref(v_options_4957_);
v___y_4967_ = v___y_4995_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___y_5000_;
v___y_4972_ = v___y_5002_;
v___y_4973_ = v___x_5004_;
goto v___jp_4966_;
}
else
{
if (v___x_5004_ == 0)
{
lean_dec(v___y_5001_);
lean_dec_ref(v___y_4997_);
lean_dec_ref(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec(v_a_4960_);
lean_dec(v_fst_4959_);
lean_dec(v_a_4958_);
lean_dec_ref(v_options_4957_);
v___y_4967_ = v___y_4995_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___y_5000_;
v___y_4972_ = v___y_5002_;
v___y_4973_ = v___x_5004_;
goto v___jp_4966_;
}
else
{
size_t v___x_5005_; size_t v___x_5006_; uint8_t v___x_5007_; 
v___x_5005_ = ((size_t)0ULL);
v___x_5006_ = lean_usize_of_nat(v___x_5003_);
v___x_5007_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_4995_, v___x_5005_, v___x_5006_);
if (v___x_5007_ == 0)
{
lean_dec(v___y_5001_);
lean_dec_ref(v___y_4997_);
lean_dec_ref(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec(v_a_4960_);
lean_dec(v_fst_4959_);
lean_dec(v_a_4958_);
lean_dec_ref(v_options_4957_);
v___y_4967_ = v___y_4995_;
v___y_4968_ = v___y_4996_;
v___y_4969_ = v___y_4998_;
v___y_4970_ = v___y_4999_;
v___y_4971_ = v___y_5000_;
v___y_4972_ = v___y_5002_;
v___y_4973_ = v___x_5007_;
goto v___jp_4966_;
}
else
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___f_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; uint8_t v___x_5014_; 
lean_dec_ref(v___y_5000_);
lean_dec_ref(v___y_4995_);
v___x_5008_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4998_, v___y_5002_, v___y_4952_);
lean_dec_ref(v___y_4998_);
v___x_5009_ = l_ByteArray_empty;
v___f_5010_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_5008_);
v___x_5011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5011_, 0, v___y_4996_);
lean_ctor_set(v___x_5011_, 1, v___x_5008_);
lean_ctor_set(v___x_5011_, 2, v___y_4997_);
lean_ctor_set(v___x_5011_, 3, v___x_5009_);
lean_ctor_set(v___x_5011_, 4, v___f_5010_);
v___x_5012_ = l_Lasm_Fetch_Request_path(v___x_5011_);
v___x_5013_ = lean_apply_1(v_options_4957_, v___x_5012_);
v___x_5014_ = lean_unbox(v___x_5013_);
if (v___x_5014_ == 0)
{
lean_object* v___f_5015_; lean_object* v___f_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; uint8_t v___x_5020_; lean_object* v___x_5021_; 
lean_dec(v___y_5001_);
lean_dec_ref(v___y_4990_);
lean_dec(v_a_4960_);
lean_inc(v___y_4993_);
v___f_5015_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 9, 7);
lean_closure_set(v___f_5015_, 0, v___y_4994_);
lean_closure_set(v___f_5015_, 1, v___x_5008_);
lean_closure_set(v___f_5015_, 2, v___y_4991_);
lean_closure_set(v___f_5015_, 3, v___f_5010_);
lean_closure_set(v___f_5015_, 4, v___y_4993_);
lean_closure_set(v___f_5015_, 5, v___x_5013_);
lean_closure_set(v___f_5015_, 6, v___y_4992_);
v___f_5016_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_5016_, 0, v___y_4993_);
lean_closure_set(v___f_5016_, 1, v___x_5013_);
lean_closure_set(v___f_5016_, 2, v___f_5015_);
lean_closure_set(v___f_5016_, 3, v___y_4989_);
lean_closure_set(v___f_5016_, 4, v_a_4958_);
v___x_5017_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__0));
v___x_5018_ = lean_mk_empty_array_with_capacity(v___y_4999_);
v___x_5019_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4959_, v___x_5017_, v___x_5018_);
v___x_5020_ = lean_unbox(v___x_5013_);
v___x_5021_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4999_, v___x_5020_, v___x_5019_, v___f_5016_);
return v___x_5021_;
}
else
{
uint8_t v___x_5022_; lean_object* v___x_5023_; lean_object* v___f_5024_; lean_object* v___x_5025_; lean_object* v___f_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; 
lean_dec_ref(v___y_4992_);
lean_dec(v___y_4989_);
lean_dec(v_a_4958_);
v___x_5022_ = 0;
v___x_5023_ = lean_box(v___x_5022_);
lean_inc(v___y_4993_);
v___f_5024_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_5024_, 0, v___y_4994_);
lean_closure_set(v___f_5024_, 1, v___x_5008_);
lean_closure_set(v___f_5024_, 2, v___y_4991_);
lean_closure_set(v___f_5024_, 3, v___x_5009_);
lean_closure_set(v___f_5024_, 4, v___y_4993_);
lean_closure_set(v___f_5024_, 5, v___x_5023_);
lean_closure_set(v___f_5024_, 6, v___y_4990_);
v___x_5025_ = lean_box(v___x_5022_);
v___f_5026_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_5026_, 0, v___y_4993_);
lean_closure_set(v___f_5026_, 1, v___x_5025_);
lean_closure_set(v___f_5026_, 2, v___f_5024_);
v___x_5027_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__1));
v___x_5028_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5029_, 0, v_fst_4959_);
lean_ctor_set(v___x_5029_, 1, v___x_5028_);
v___x_5030_ = lean_mk_empty_array_with_capacity(v___y_5001_);
lean_dec(v___y_5001_);
v___x_5031_ = lean_array_push(v___x_5030_, v___x_5029_);
v___x_5032_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4960_, v___x_5027_, v___x_5031_);
if (lean_obj_tag(v___x_5032_) == 0)
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
v_a_5033_ = lean_ctor_get(v___x_5032_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_5032_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_5032_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
lean_ctor_set_tag(v___x_5035_, 1);
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
v___y_4982_ = v___x_5022_;
v___y_4983_ = v___f_5026_;
v___y_4984_ = v___y_4999_;
v_val_4985_ = v___x_5038_;
goto v___jp_4981_;
}
}
}
else
{
lean_object* v_a_5041_; lean_object* v___x_5043_; uint8_t v_isShared_5044_; uint8_t v_isSharedCheck_5048_; 
v_a_5041_ = lean_ctor_get(v___x_5032_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_5043_ = v___x_5032_;
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
else
{
lean_inc(v_a_5041_);
lean_dec(v___x_5032_);
v___x_5043_ = lean_box(0);
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
v_resetjp_5042_:
{
lean_object* v___x_5046_; 
if (v_isShared_5044_ == 0)
{
lean_ctor_set_tag(v___x_5043_, 0);
v___x_5046_ = v___x_5043_;
goto v_reusejp_5045_;
}
else
{
lean_object* v_reuseFailAlloc_5047_; 
v_reuseFailAlloc_5047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5047_, 0, v_a_5041_);
v___x_5046_ = v_reuseFailAlloc_5047_;
goto v_reusejp_5045_;
}
v_reusejp_5045_:
{
v___y_4982_ = v___x_5022_;
v___y_4983_ = v___f_5026_;
v___y_4984_ = v___y_4999_;
v_val_4985_ = v___x_5046_;
goto v___jp_4981_;
}
}
}
}
}
}
}
}
v___jp_5049_:
{
lean_object* v___x_5063_; 
v___x_5063_ = lean_box(0);
v___y_4989_ = v___y_5050_;
v___y_4990_ = v___y_5052_;
v___y_4991_ = v___y_5051_;
v___y_4992_ = v___y_5054_;
v___y_4993_ = v___y_5053_;
v___y_4994_ = v___y_5056_;
v___y_4995_ = v___y_5057_;
v___y_4996_ = v___y_5058_;
v___y_4997_ = v___y_5059_;
v___y_4998_ = v___y_5060_;
v___y_4999_ = v___y_5061_;
v___y_5000_ = v___y_5055_;
v___y_5001_ = v___y_5062_;
v___y_5002_ = v___x_5063_;
goto v___jp_4988_;
}
v___jp_5064_:
{
lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; size_t v_sz_5077_; size_t v___x_5078_; lean_object* v___x_5079_; lean_object* v_fst_5080_; lean_object* v___f_5081_; lean_object* v___f_5082_; lean_object* v___f_5083_; 
v___x_5069_ = lean_unsigned_to_nat(0u);
v___x_5070_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_5071_ = lean_array_get_size(v___y_5068_);
v___x_5072_ = lean_unsigned_to_nat(1u);
v___x_5073_ = lean_nat_shiftr(v___x_5071_, v___x_5072_);
v___x_5074_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5069_);
lean_ctor_set(v___x_5074_, 1, v___x_5073_);
lean_ctor_set(v___x_5074_, 2, v___x_5072_);
v___x_5075_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5068_, v___x_5074_, v___x_5070_, v___x_5069_);
lean_dec_ref_known(v___x_5074_, 3);
lean_dec_ref(v___y_5068_);
v___x_5076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5077_ = lean_array_size(v___x_5075_);
v___x_5078_ = ((size_t)0ULL);
v___x_5079_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_5075_, v_sz_5077_, v___x_5078_, v___x_5076_);
v_fst_5080_ = lean_ctor_get(v___x_5079_, 0);
lean_inc(v_fst_5080_);
lean_dec_ref(v___x_5079_);
lean_inc_ref(v___y_5065_);
v___f_5081_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_5081_, 0, v___x_5069_);
lean_closure_set(v___f_5081_, 1, v_snd_4953_);
lean_closure_set(v___f_5081_, 2, v___y_5065_);
lean_closure_set(v___f_5081_, 3, v___f_4954_);
lean_closure_set(v___f_5081_, 4, v___f_4955_);
v___f_5082_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_5082_, 0, v_handler_4956_);
lean_closure_set(v___f_5082_, 1, v___x_5069_);
lean_closure_set(v___f_5082_, 2, v___f_5081_);
v___f_5083_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_5083_, 0, v___f_5082_);
if (lean_obj_tag(v_fst_5080_) == 0)
{
lean_inc_ref_n(v___f_5083_, 2);
lean_inc_ref(v___x_5075_);
v___y_5050_ = v___x_5072_;
v___y_5051_ = v___x_5075_;
v___y_5052_ = v___f_5083_;
v___y_5053_ = v___x_5069_;
v___y_5054_ = v___f_5083_;
v___y_5055_ = v___f_5083_;
v___y_5056_ = v___y_5065_;
v___y_5057_ = v___x_5075_;
v___y_5058_ = v___y_5066_;
v___y_5059_ = v___x_5070_;
v___y_5060_ = v___y_5067_;
v___y_5061_ = v___x_5069_;
v___y_5062_ = v___x_5072_;
goto v___jp_5049_;
}
else
{
lean_object* v_val_5084_; 
v_val_5084_ = lean_ctor_get(v_fst_5080_, 0);
lean_inc(v_val_5084_);
lean_dec_ref_known(v_fst_5080_, 1);
if (lean_obj_tag(v_val_5084_) == 0)
{
lean_inc_ref_n(v___f_5083_, 2);
lean_inc_ref(v___x_5075_);
v___y_5050_ = v___x_5072_;
v___y_5051_ = v___x_5075_;
v___y_5052_ = v___f_5083_;
v___y_5053_ = v___x_5069_;
v___y_5054_ = v___f_5083_;
v___y_5055_ = v___f_5083_;
v___y_5056_ = v___y_5065_;
v___y_5057_ = v___x_5075_;
v___y_5058_ = v___y_5066_;
v___y_5059_ = v___x_5070_;
v___y_5060_ = v___y_5067_;
v___y_5061_ = v___x_5069_;
v___y_5062_ = v___x_5072_;
goto v___jp_5049_;
}
else
{
lean_object* v_val_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5093_; 
v_val_5085_ = lean_ctor_get(v_val_5084_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v_val_5084_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5087_ = v_val_5084_;
v_isShared_5088_ = v_isSharedCheck_5093_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_val_5085_);
lean_dec(v_val_5084_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5093_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v_snd_5089_; lean_object* v___x_5091_; 
v_snd_5089_ = lean_ctor_get(v_val_5085_, 1);
lean_inc(v_snd_5089_);
lean_dec(v_val_5085_);
if (v_isShared_5088_ == 0)
{
lean_ctor_set(v___x_5087_, 0, v_snd_5089_);
v___x_5091_ = v___x_5087_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_snd_5089_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
lean_inc_ref(v___x_5075_);
lean_inc_ref_n(v___f_5083_, 2);
v___y_4989_ = v___x_5072_;
v___y_4990_ = v___f_5083_;
v___y_4991_ = v___x_5075_;
v___y_4992_ = v___f_5083_;
v___y_4993_ = v___x_5069_;
v___y_4994_ = v___y_5065_;
v___y_4995_ = v___x_5075_;
v___y_4996_ = v___y_5066_;
v___y_4997_ = v___x_5070_;
v___y_4998_ = v___y_5067_;
v___y_4999_ = v___x_5069_;
v___y_5000_ = v___f_5083_;
v___y_5001_ = v___x_5072_;
v___y_5002_ = v___x_5091_;
goto v___jp_4988_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_5121_, lean_object* v_snd_5122_, lean_object* v___f_5123_, lean_object* v___f_5124_, lean_object* v_handler_5125_, lean_object* v_options_5126_, lean_object* v_a_5127_, lean_object* v_fst_5128_, lean_object* v_a_5129_, lean_object* v___x_5130_, lean_object* v___x_5131_, lean_object* v___x_5132_, lean_object* v_x_5133_, lean_object* v___y_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l_Lasm_Fetch_serveNode___lam__18(v___y_5121_, v_snd_5122_, v___f_5123_, v___f_5124_, v_handler_5125_, v_options_5126_, v_a_5127_, v_fst_5128_, v_a_5129_, v___x_5130_, v___x_5131_, v___x_5132_, v_x_5133_);
lean_dec_ref(v___x_5132_);
lean_dec_ref(v___x_5131_);
lean_dec_ref(v___x_5130_);
return v_res_5135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___y_5145_, lean_object* v___f_5146_, lean_object* v___f_5147_, lean_object* v_handler_5148_, lean_object* v_options_5149_, lean_object* v_a_5150_, lean_object* v_a_5151_, lean_object* v_____x_5152_){
_start:
{
lean_object* v_fst_5154_; lean_object* v_snd_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___f_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; uint8_t v___x_5162_; lean_object* v_val_5164_; lean_object* v___x_5167_; 
v_fst_5154_ = lean_ctor_get(v_____x_5152_, 0);
lean_inc_n(v_fst_5154_, 2);
v_snd_5155_ = lean_ctor_get(v_____x_5152_, 1);
lean_inc(v_snd_5155_);
lean_dec_ref(v_____x_5152_);
v___x_5156_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5157_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_5158_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_5159_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 14, 12);
lean_closure_set(v___f_5159_, 0, v___y_5145_);
lean_closure_set(v___f_5159_, 1, v_snd_5155_);
lean_closure_set(v___f_5159_, 2, v___f_5146_);
lean_closure_set(v___f_5159_, 3, v___f_5147_);
lean_closure_set(v___f_5159_, 4, v_handler_5148_);
lean_closure_set(v___f_5159_, 5, v_options_5149_);
lean_closure_set(v___f_5159_, 6, v_a_5150_);
lean_closure_set(v___f_5159_, 7, v_fst_5154_);
lean_closure_set(v___f_5159_, 8, v_a_5151_);
lean_closure_set(v___f_5159_, 9, v___x_5158_);
lean_closure_set(v___f_5159_, 10, v___x_5157_);
lean_closure_set(v___f_5159_, 11, v___x_5156_);
v___x_5160_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_5161_ = lean_unsigned_to_nat(0u);
v___x_5162_ = 0;
v___x_5167_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_5154_, v___x_5160_);
if (lean_obj_tag(v___x_5167_) == 0)
{
lean_object* v_a_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5175_; 
v_a_5168_ = lean_ctor_get(v___x_5167_, 0);
v_isSharedCheck_5175_ = !lean_is_exclusive(v___x_5167_);
if (v_isSharedCheck_5175_ == 0)
{
v___x_5170_ = v___x_5167_;
v_isShared_5171_ = v_isSharedCheck_5175_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_a_5168_);
lean_dec(v___x_5167_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5175_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v___x_5173_; 
if (v_isShared_5171_ == 0)
{
lean_ctor_set_tag(v___x_5170_, 1);
v___x_5173_ = v___x_5170_;
goto v_reusejp_5172_;
}
else
{
lean_object* v_reuseFailAlloc_5174_; 
v_reuseFailAlloc_5174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5174_, 0, v_a_5168_);
v___x_5173_ = v_reuseFailAlloc_5174_;
goto v_reusejp_5172_;
}
v_reusejp_5172_:
{
v_val_5164_ = v___x_5173_;
goto v___jp_5163_;
}
}
}
else
{
lean_object* v_a_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5183_; 
v_a_5176_ = lean_ctor_get(v___x_5167_, 0);
v_isSharedCheck_5183_ = !lean_is_exclusive(v___x_5167_);
if (v_isSharedCheck_5183_ == 0)
{
v___x_5178_ = v___x_5167_;
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_a_5176_);
lean_dec(v___x_5167_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
lean_object* v___x_5181_; 
if (v_isShared_5179_ == 0)
{
lean_ctor_set_tag(v___x_5178_, 0);
v___x_5181_ = v___x_5178_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v_a_5176_);
v___x_5181_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
v_val_5164_ = v___x_5181_;
goto v___jp_5163_;
}
}
}
v___jp_5163_:
{
lean_object* v___x_5165_; lean_object* v___x_5166_; 
v___x_5165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5165_, 0, v_val_5164_);
v___x_5166_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5161_, v___x_5162_, v___x_5165_, v___f_5159_);
return v___x_5166_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___y_5184_, lean_object* v___f_5185_, lean_object* v___f_5186_, lean_object* v_handler_5187_, lean_object* v_options_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_____x_5191_, lean_object* v___y_5192_){
_start:
{
lean_object* v_res_5193_; 
v_res_5193_ = l_Lasm_Fetch_serveNode___lam__19(v___y_5184_, v___f_5185_, v___f_5186_, v_handler_5187_, v_options_5188_, v_a_5189_, v_a_5190_, v_____x_5191_);
return v_res_5193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_5194_, lean_object* v_x_5195_){
_start:
{
if (lean_obj_tag(v_x_5195_) == 0)
{
lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5205_; 
lean_dec_ref(v___f_5194_);
v_a_5197_ = lean_ctor_get(v_x_5195_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v_x_5195_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5199_ = v_x_5195_;
v_isShared_5200_ = v_isSharedCheck_5205_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v_x_5195_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5205_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5202_; 
if (v_isShared_5200_ == 0)
{
v___x_5202_ = v___x_5199_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5204_; 
v_reuseFailAlloc_5204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5204_, 0, v_a_5197_);
v___x_5202_ = v_reuseFailAlloc_5204_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
lean_object* v___x_5203_; 
v___x_5203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5203_, 0, v___x_5202_);
return v___x_5203_;
}
}
}
else
{
lean_object* v_a_5206_; lean_object* v___x_5207_; 
v_a_5206_ = lean_ctor_get(v_x_5195_, 0);
lean_inc(v_a_5206_);
lean_dec_ref_known(v_x_5195_, 1);
v___x_5207_ = lean_apply_2(v___f_5194_, v_a_5206_, lean_box(0));
return v___x_5207_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_5208_, lean_object* v_x_5209_, lean_object* v___y_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lasm_Fetch_serveNode___lam__20(v___f_5208_, v_x_5209_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_5219_, lean_object* v___f_5220_, lean_object* v_args_5221_){
_start:
{
lean_object* v___x_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; 
v___x_5228_ = lean_unsigned_to_nat(0u);
v___x_5229_ = lean_array_get_size(v_args_5221_);
v___x_5230_ = lean_nat_dec_lt(v___x_5228_, v___x_5229_);
if (v___x_5230_ == 0)
{
lean_dec_ref(v___f_5220_);
goto v___jp_5223_;
}
else
{
lean_object* v___x_5231_; 
v___x_5231_ = lean_array_fget_borrowed(v_args_5221_, v___x_5228_);
if (lean_obj_tag(v___x_5231_) == 9)
{
lean_object* v_value_5232_; lean_object* v___x_5233_; uint8_t v___x_5234_; 
v_value_5232_ = lean_ctor_get(v___x_5231_, 0);
v___x_5233_ = lean_unsigned_to_nat(1u);
v___x_5234_ = lean_nat_dec_lt(v___x_5233_, v___x_5229_);
if (v___x_5234_ == 0)
{
lean_dec_ref(v___f_5220_);
goto v___jp_5223_;
}
else
{
lean_object* v___x_5235_; 
v___x_5235_ = lean_array_fget(v_args_5221_, v___x_5233_);
if (lean_obj_tag(v___x_5235_) == 9)
{
lean_object* v_value_5236_; lean_object* v___x_5238_; uint8_t v_isShared_5239_; uint8_t v_isSharedCheck_5247_; 
lean_dec_ref(v___f_5219_);
v_value_5236_ = lean_ctor_get(v___x_5235_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v___x_5235_);
if (v_isSharedCheck_5247_ == 0)
{
lean_object* v_unused_5248_; 
v_unused_5248_ = lean_ctor_get(v___x_5235_, 1);
lean_dec(v_unused_5248_);
v___x_5238_ = v___x_5235_;
v_isShared_5239_ = v_isSharedCheck_5247_;
goto v_resetjp_5237_;
}
else
{
lean_inc(v_value_5236_);
lean_dec(v___x_5235_);
v___x_5238_ = lean_box(0);
v_isShared_5239_ = v_isSharedCheck_5247_;
goto v_resetjp_5237_;
}
v_resetjp_5237_:
{
lean_object* v___x_5241_; 
lean_inc(v_value_5232_);
if (v_isShared_5239_ == 0)
{
lean_ctor_set_tag(v___x_5238_, 0);
lean_ctor_set(v___x_5238_, 1, v_value_5236_);
lean_ctor_set(v___x_5238_, 0, v_value_5232_);
v___x_5241_ = v___x_5238_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5246_; 
v_reuseFailAlloc_5246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5246_, 0, v_value_5232_);
lean_ctor_set(v_reuseFailAlloc_5246_, 1, v_value_5236_);
v___x_5241_ = v_reuseFailAlloc_5246_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
uint8_t v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; 
v___x_5242_ = 0;
v___x_5243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5243_, 0, v___x_5241_);
v___x_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5244_, 0, v___x_5243_);
v___x_5245_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5228_, v___x_5242_, v___x_5244_, v___f_5220_);
return v___x_5245_;
}
}
}
else
{
lean_dec(v___x_5235_);
lean_dec_ref(v___f_5220_);
goto v___jp_5223_;
}
}
}
else
{
lean_dec_ref(v___f_5220_);
goto v___jp_5223_;
}
}
v___jp_5223_:
{
lean_object* v___x_5224_; uint8_t v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; 
v___x_5224_ = lean_unsigned_to_nat(0u);
v___x_5225_ = 0;
v___x_5226_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_5227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5224_, v___x_5225_, v___x_5226_, v___f_5219_);
return v___x_5227_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_5249_, lean_object* v___f_5250_, lean_object* v_args_5251_, lean_object* v___y_5252_){
_start:
{
lean_object* v_res_5253_; 
v_res_5253_ = l_Lasm_Fetch_serveNode___lam__22(v___f_5249_, v___f_5250_, v_args_5251_);
lean_dec_ref(v_args_5251_);
return v_res_5253_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_5254_){
_start:
{
lean_object* v___x_5256_; lean_object* v_putStr_5257_; lean_object* v___x_5258_; 
v___x_5256_ = lean_get_stdout();
v_putStr_5257_ = lean_ctor_get(v___x_5256_, 4);
lean_inc_ref(v_putStr_5257_);
lean_dec_ref(v___x_5256_);
v___x_5258_ = lean_apply_2(v_putStr_5257_, v_s_5254_, lean_box(0));
return v___x_5258_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_5259_, lean_object* v_a_5260_){
_start:
{
lean_object* v_res_5261_; 
v_res_5261_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_5259_);
return v_res_5261_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_5262_){
_start:
{
uint32_t v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5264_ = 10;
v___x_5265_ = lean_string_push(v_s_5262_, v___x_5264_);
v___x_5266_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5265_);
return v___x_5266_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5267_, lean_object* v_a_5268_){
_start:
{
lean_object* v_res_5269_; 
v_res_5269_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5267_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___f_5274_, lean_object* v_x_5275_){
_start:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; uint8_t v___x_5284_; lean_object* v_val_5286_; lean_object* v___x_5289_; 
v___x_5277_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5278_ = lean_string_append(v___x_5277_, v___y_5272_);
v___x_5279_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5280_ = lean_string_append(v___x_5278_, v___x_5279_);
v___x_5281_ = l_Nat_reprFast(v___y_5273_);
v___x_5282_ = lean_string_append(v___x_5280_, v___x_5281_);
lean_dec_ref(v___x_5281_);
v___x_5283_ = lean_unsigned_to_nat(0u);
v___x_5284_ = 0;
v___x_5289_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5282_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5297_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5292_ = v___x_5289_;
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5289_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5295_; 
if (v_isShared_5293_ == 0)
{
lean_ctor_set_tag(v___x_5292_, 1);
v___x_5295_ = v___x_5292_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v_a_5290_);
v___x_5295_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
v_val_5286_ = v___x_5295_;
goto v___jp_5285_;
}
}
}
else
{
lean_object* v_a_5298_; lean_object* v___x_5300_; uint8_t v_isShared_5301_; uint8_t v_isSharedCheck_5305_; 
v_a_5298_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5305_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5305_ == 0)
{
v___x_5300_ = v___x_5289_;
v_isShared_5301_ = v_isSharedCheck_5305_;
goto v_resetjp_5299_;
}
else
{
lean_inc(v_a_5298_);
lean_dec(v___x_5289_);
v___x_5300_ = lean_box(0);
v_isShared_5301_ = v_isSharedCheck_5305_;
goto v_resetjp_5299_;
}
v_resetjp_5299_:
{
lean_object* v___x_5303_; 
if (v_isShared_5301_ == 0)
{
lean_ctor_set_tag(v___x_5300_, 0);
v___x_5303_ = v___x_5300_;
goto v_reusejp_5302_;
}
else
{
lean_object* v_reuseFailAlloc_5304_; 
v_reuseFailAlloc_5304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5304_, 0, v_a_5298_);
v___x_5303_ = v_reuseFailAlloc_5304_;
goto v_reusejp_5302_;
}
v_reusejp_5302_:
{
v_val_5286_ = v___x_5303_;
goto v___jp_5285_;
}
}
}
v___jp_5285_:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; 
v___x_5287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5287_, 0, v_val_5286_);
v___x_5288_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5283_, v___x_5284_, v___x_5287_, v___f_5274_);
return v___x_5288_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___f_5308_, lean_object* v_x_5309_, lean_object* v___y_5310_){
_start:
{
lean_object* v_res_5311_; 
v_res_5311_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5306_, v___y_5307_, v___f_5308_, v_x_5309_);
lean_dec_ref(v_x_5309_);
lean_dec_ref(v___y_5306_);
return v_res_5311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___x_5313_, lean_object* v___f_5314_, lean_object* v___x_5315_, lean_object* v_a_5316_, lean_object* v_x_5317_){
_start:
{
uint8_t v___y_5320_; lean_object* v_val_5321_; lean_object* v___x_5324_; lean_object* v___y_5326_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; uint8_t v___x_5349_; 
v___x_5324_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
lean_inc(v___x_5313_);
v___x_5346_ = lean_nat_to_int(v___x_5313_);
v___x_5347_ = lean_nat_abs(v___x_5346_);
v___x_5348_ = lean_cstr_to_nat("9007199254740991");
v___x_5349_ = lean_nat_dec_le(v___x_5347_, v___x_5348_);
lean_dec(v___x_5347_);
if (v___x_5349_ == 0)
{
lean_object* v___x_5350_; 
v___x_5350_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5350_, 0, v___x_5346_);
v___y_5326_ = v___x_5350_;
goto v___jp_5325_;
}
else
{
double v___x_5351_; lean_object* v___x_5352_; 
v___x_5351_ = l_Float_ofInt(v___x_5346_);
lean_dec(v___x_5346_);
v___x_5352_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5352_, 0, v___x_5351_);
v___y_5326_ = v___x_5352_;
goto v___jp_5325_;
}
v___jp_5319_:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___x_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5322_, 0, v_val_5321_);
v___x_5323_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5313_, v___y_5320_, v___x_5322_, v___f_5314_);
return v___x_5323_;
}
v___jp_5325_:
{
lean_object* v___x_5327_; uint8_t v___x_5328_; lean_object* v___x_5329_; 
v___x_5327_ = lean_array_push(v___x_5315_, v___y_5326_);
v___x_5328_ = 0;
v___x_5329_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5316_, v___x_5324_, v___x_5327_);
if (lean_obj_tag(v___x_5329_) == 0)
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5337_; 
v_a_5330_ = lean_ctor_get(v___x_5329_, 0);
v_isSharedCheck_5337_ = !lean_is_exclusive(v___x_5329_);
if (v_isSharedCheck_5337_ == 0)
{
v___x_5332_ = v___x_5329_;
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v___x_5329_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5335_; 
if (v_isShared_5333_ == 0)
{
lean_ctor_set_tag(v___x_5332_, 1);
v___x_5335_ = v___x_5332_;
goto v_reusejp_5334_;
}
else
{
lean_object* v_reuseFailAlloc_5336_; 
v_reuseFailAlloc_5336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5336_, 0, v_a_5330_);
v___x_5335_ = v_reuseFailAlloc_5336_;
goto v_reusejp_5334_;
}
v_reusejp_5334_:
{
v___y_5320_ = v___x_5328_;
v_val_5321_ = v___x_5335_;
goto v___jp_5319_;
}
}
}
else
{
lean_object* v_a_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5345_; 
v_a_5338_ = lean_ctor_get(v___x_5329_, 0);
v_isSharedCheck_5345_ = !lean_is_exclusive(v___x_5329_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5340_ = v___x_5329_;
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_a_5338_);
lean_dec(v___x_5329_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
lean_object* v___x_5343_; 
if (v_isShared_5341_ == 0)
{
lean_ctor_set_tag(v___x_5340_, 0);
v___x_5343_ = v___x_5340_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_a_5338_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
v___y_5320_ = v___x_5328_;
v_val_5321_ = v___x_5343_;
goto v___jp_5319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___x_5353_, lean_object* v___f_5354_, lean_object* v___x_5355_, lean_object* v_a_5356_, lean_object* v_x_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l_Lasm_Fetch_serveNode___lam__23(v___x_5353_, v___f_5354_, v___x_5355_, v_a_5356_, v_x_5357_);
lean_dec_ref(v_x_5357_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5360_, lean_object* v___x_5361_, lean_object* v___x_5362_, lean_object* v___x_5363_, lean_object* v___f_5364_, lean_object* v_a_5365_, lean_object* v_x_5366_){
_start:
{
lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; uint8_t v___x_5371_; lean_object* v_val_5373_; lean_object* v___x_5376_; 
v___x_5368_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5369_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5369_, 0, v_a_5360_);
lean_ctor_set(v___x_5369_, 1, v___x_5361_);
v___x_5370_ = lean_array_push(v___x_5362_, v___x_5369_);
v___x_5371_ = 0;
v___x_5376_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5365_, v___x_5368_, v___x_5370_);
if (lean_obj_tag(v___x_5376_) == 0)
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5384_; 
v_a_5377_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5379_ = v___x_5376_;
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5376_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v___x_5382_; 
if (v_isShared_5380_ == 0)
{
lean_ctor_set_tag(v___x_5379_, 1);
v___x_5382_ = v___x_5379_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v_a_5377_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
v_val_5373_ = v___x_5382_;
goto v___jp_5372_;
}
}
}
else
{
lean_object* v_a_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5392_; 
v_a_5385_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5387_ = v___x_5376_;
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_a_5385_);
lean_dec(v___x_5376_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
lean_ctor_set_tag(v___x_5387_, 0);
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5385_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
v_val_5373_ = v___x_5390_;
goto v___jp_5372_;
}
}
}
v___jp_5372_:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5374_, 0, v_val_5373_);
v___x_5375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5363_, v___x_5371_, v___x_5374_, v___f_5364_);
return v___x_5375_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5393_, lean_object* v___x_5394_, lean_object* v___x_5395_, lean_object* v___x_5396_, lean_object* v___f_5397_, lean_object* v_a_5398_, lean_object* v_x_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5393_, v___x_5394_, v___x_5395_, v___x_5396_, v___f_5397_, v_a_5398_, v_x_5399_);
lean_dec_ref(v_x_5399_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5403_, lean_object* v_a_5404_, lean_object* v_as_x27_5405_, lean_object* v_b_5406_){
_start:
{
if (lean_obj_tag(v_as_x27_5405_) == 0)
{
lean_object* v___x_5408_; 
lean_dec(v_a_5404_);
lean_dec(v_a_5403_);
v___x_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5408_, 0, v_b_5406_);
return v___x_5408_;
}
else
{
lean_object* v_head_5409_; lean_object* v_tail_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; 
v_head_5409_ = lean_ctor_get(v_as_x27_5405_, 0);
v_tail_5410_ = lean_ctor_get(v_as_x27_5405_, 1);
v___x_5411_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5412_ = lean_box(0);
v___x_5413_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5409_);
v___x_5414_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5414_, 0, v_head_5409_);
lean_inc(v_a_5403_);
v___x_5415_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5415_, 0, v_a_5403_);
lean_ctor_set(v___x_5415_, 1, v___x_5411_);
v___x_5416_ = lean_unsigned_to_nat(2u);
v___x_5417_ = lean_mk_empty_array_with_capacity(v___x_5416_);
v___x_5418_ = lean_array_push(v___x_5417_, v___x_5414_);
v___x_5419_ = lean_array_push(v___x_5418_, v___x_5415_);
lean_inc(v_a_5404_);
v___x_5420_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5404_, v___x_5413_, v___x_5419_);
if (lean_obj_tag(v___x_5420_) == 0)
{
lean_dec_ref_known(v___x_5420_, 1);
v_as_x27_5405_ = v_tail_5410_;
v_b_5406_ = v___x_5412_;
goto _start;
}
else
{
lean_object* v_a_5422_; lean_object* v___x_5424_; uint8_t v_isShared_5425_; uint8_t v_isSharedCheck_5429_; 
lean_dec(v_a_5404_);
lean_dec(v_a_5403_);
v_a_5422_ = lean_ctor_get(v___x_5420_, 0);
v_isSharedCheck_5429_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5429_ == 0)
{
v___x_5424_ = v___x_5420_;
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
else
{
lean_inc(v_a_5422_);
lean_dec(v___x_5420_);
v___x_5424_ = lean_box(0);
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
v_resetjp_5423_:
{
lean_object* v___x_5427_; 
if (v_isShared_5425_ == 0)
{
v___x_5427_ = v___x_5424_;
goto v_reusejp_5426_;
}
else
{
lean_object* v_reuseFailAlloc_5428_; 
v_reuseFailAlloc_5428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5428_, 0, v_a_5422_);
v___x_5427_ = v_reuseFailAlloc_5428_;
goto v_reusejp_5426_;
}
v_reusejp_5426_:
{
return v___x_5427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5430_, lean_object* v_a_5431_, lean_object* v_as_x27_5432_, lean_object* v_b_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5430_, v_a_5431_, v_as_x27_5432_, v_b_5433_);
lean_dec(v_as_x27_5432_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5437_){
_start:
{
uint32_t v___x_5439_; uint32_t v___x_5440_; uint64_t v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; 
v___x_5439_ = 201;
v___x_5440_ = 0;
v___x_5441_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_5442_ = lean_string_to_utf8(v_specifier_5437_);
v___x_5443_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5439_, v___x_5440_, v___x_5441_, v___x_5442_);
lean_dec_ref(v___x_5442_);
if (lean_obj_tag(v___x_5443_) == 0)
{
lean_object* v_a_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; 
v_a_5444_ = lean_ctor_get(v___x_5443_, 0);
lean_inc(v_a_5444_);
lean_dec_ref_known(v___x_5443_, 1);
v___x_5445_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5446_ = l_String_quote(v_specifier_5437_);
v___x_5447_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5447_, 0, v___x_5446_);
v___x_5448_ = lean_unsigned_to_nat(120u);
v___x_5449_ = lean_unsigned_to_nat(0u);
v___x_5450_ = l_Std_Format_pretty(v___x_5447_, v___x_5448_, v___x_5449_, v___x_5449_);
v___x_5451_ = lean_string_append(v___x_5445_, v___x_5450_);
lean_dec_ref(v___x_5450_);
v___x_5452_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5451_, v_a_5444_);
lean_dec(v_a_5444_);
lean_dec_ref(v___x_5451_);
return v___x_5452_;
}
else
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5460_; 
lean_dec_ref(v_specifier_5437_);
v_a_5453_ = lean_ctor_get(v___x_5443_, 0);
v_isSharedCheck_5460_ = !lean_is_exclusive(v___x_5443_);
if (v_isSharedCheck_5460_ == 0)
{
v___x_5455_ = v___x_5443_;
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v___x_5443_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___x_5458_; 
if (v_isShared_5456_ == 0)
{
v___x_5458_ = v___x_5455_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v_a_5453_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
return v___x_5458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5461_, lean_object* v_a_5462_){
_start:
{
lean_object* v_res_5463_; 
v_res_5463_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5461_);
return v_res_5463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5489_, lean_object* v_options_5490_){
_start:
{
lean_object* v___f_5492_; lean_object* v___f_5493_; lean_object* v___f_5494_; lean_object* v___f_5495_; lean_object* v___y_5497_; lean_object* v___y_5498_; lean_object* v___y_5499_; lean_object* v___y_5500_; lean_object* v___y_5501_; lean_object* v___y_5502_; lean_object* v___y_5503_; lean_object* v___y_5504_; lean_object* v___y_5505_; lean_object* v___y_5506_; lean_object* v___x_5560_; lean_object* v___x_5561_; 
v___f_5492_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5493_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5494_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5495_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5560_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5561_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5560_);
if (lean_obj_tag(v___x_5561_) == 0)
{
lean_object* v_a_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; 
v_a_5562_ = lean_ctor_get(v___x_5561_, 0);
lean_inc(v_a_5562_);
lean_dec_ref_known(v___x_5561_, 1);
v___x_5563_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5564_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5563_);
if (lean_obj_tag(v___x_5564_) == 0)
{
lean_object* v_a_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v_a_5565_ = lean_ctor_get(v___x_5564_, 0);
lean_inc(v_a_5565_);
lean_dec_ref_known(v___x_5564_, 1);
v___x_5566_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5567_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5565_, v___x_5566_);
if (lean_obj_tag(v___x_5567_) == 0)
{
lean_object* v_a_5568_; lean_object* v___x_5569_; 
v_a_5568_ = lean_ctor_get(v___x_5567_, 0);
lean_inc(v_a_5568_);
lean_dec_ref_known(v___x_5567_, 1);
v___x_5569_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5569_) == 0)
{
lean_object* v_a_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; 
v_a_5570_ = lean_ctor_get(v___x_5569_, 0);
lean_inc(v_a_5570_);
lean_dec_ref_known(v___x_5569_, 1);
v___x_5571_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5572_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5570_, v___x_5571_);
if (lean_obj_tag(v___x_5572_) == 0)
{
lean_object* v_a_5573_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5628_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___y_5633_; 
v_a_5573_ = lean_ctor_get(v___x_5572_, 0);
lean_inc(v_a_5573_);
lean_dec_ref_known(v___x_5572_, 1);
v___x_5630_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5631_ = lean_io_getenv(v___x_5630_);
if (lean_obj_tag(v___x_5631_) == 0)
{
lean_object* v___x_5642_; 
v___x_5642_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5633_ = v___x_5642_;
goto v___jp_5632_;
}
else
{
lean_object* v_val_5643_; 
v_val_5643_ = lean_ctor_get(v___x_5631_, 0);
lean_inc(v_val_5643_);
lean_dec_ref_known(v___x_5631_, 1);
v___y_5633_ = v_val_5643_;
goto v___jp_5632_;
}
v___jp_5574_:
{
lean_object* v___f_5578_; lean_object* v___f_5579_; lean_object* v___f_5580_; lean_object* v___f_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; 
lean_inc_n(v___y_5577_, 2);
v___f_5578_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5578_, 0, v___y_5577_);
lean_closure_set(v___f_5578_, 1, v___f_5492_);
lean_closure_set(v___f_5578_, 2, v___f_5493_);
lean_closure_set(v___f_5578_, 3, v_handler_5489_);
lean_closure_set(v___f_5578_, 4, v_options_5490_);
lean_closure_set(v___f_5578_, 5, v_a_5573_);
lean_closure_set(v___f_5578_, 6, v_a_5568_);
v___f_5579_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5579_, 0, v___f_5578_);
lean_inc_ref(v___f_5579_);
v___f_5580_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5580_, 0, v___f_5579_);
lean_closure_set(v___f_5580_, 1, v___f_5579_);
v___f_5581_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5581_, 0, v___y_5575_);
lean_closure_set(v___f_5581_, 1, v___y_5577_);
lean_closure_set(v___f_5581_, 2, v___f_5494_);
v___x_5582_ = lean_unsigned_to_nat(0u);
v___x_5583_ = l_Lasm_JS_Function_ofFnReply(v___f_5580_, v___x_5582_);
if (lean_obj_tag(v___x_5583_) == 0)
{
lean_object* v_a_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v_a_5584_ = lean_ctor_get(v___x_5583_, 0);
lean_inc(v_a_5584_);
lean_dec_ref_known(v___x_5583_, 1);
v___x_5585_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5586_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5587_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5587_, 0, v_a_5584_);
lean_ctor_set(v___x_5587_, 1, v___x_5586_);
v___x_5588_ = lean_unsigned_to_nat(1u);
v___x_5589_ = lean_mk_empty_array_with_capacity(v___x_5588_);
lean_inc_ref(v___x_5589_);
v___x_5590_ = lean_array_push(v___x_5589_, v___x_5587_);
v___x_5591_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5562_, v___x_5585_, v___x_5590_);
if (lean_obj_tag(v___x_5591_) == 0)
{
lean_object* v_a_5592_; lean_object* v___x_5593_; 
v_a_5592_ = lean_ctor_get(v___x_5591_, 0);
lean_inc(v_a_5592_);
lean_dec_ref_known(v___x_5591_, 1);
v___x_5593_ = l_Lasm_JS_Function_ofFn(v___f_5581_, v___x_5582_);
if (lean_obj_tag(v___x_5593_) == 0)
{
lean_object* v_a_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; uint8_t v___x_5599_; 
v_a_5594_ = lean_ctor_get(v___x_5593_, 0);
lean_inc(v_a_5594_);
lean_dec_ref_known(v___x_5593_, 1);
v___x_5595_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5596_ = lean_nat_to_int(v___y_5577_);
v___x_5597_ = lean_nat_abs(v___x_5596_);
v___x_5598_ = lean_cstr_to_nat("9007199254740991");
v___x_5599_ = lean_nat_dec_le(v___x_5597_, v___x_5598_);
lean_dec(v___x_5597_);
if (v___x_5599_ == 0)
{
lean_object* v___x_5600_; 
v___x_5600_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5596_);
v___y_5497_ = v___x_5589_;
v___y_5498_ = v_a_5592_;
v___y_5499_ = v___x_5586_;
v___y_5500_ = v___x_5582_;
v___y_5501_ = v___y_5576_;
v___y_5502_ = v___x_5595_;
v___y_5503_ = v_a_5594_;
v___y_5504_ = v___x_5586_;
v___y_5505_ = v___x_5582_;
v___y_5506_ = v___x_5600_;
goto v___jp_5496_;
}
else
{
double v___x_5601_; lean_object* v___x_5602_; 
v___x_5601_ = l_Float_ofInt(v___x_5596_);
lean_dec(v___x_5596_);
v___x_5602_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5602_, 0, v___x_5601_);
v___y_5497_ = v___x_5589_;
v___y_5498_ = v_a_5592_;
v___y_5499_ = v___x_5586_;
v___y_5500_ = v___x_5582_;
v___y_5501_ = v___y_5576_;
v___y_5502_ = v___x_5595_;
v___y_5503_ = v_a_5594_;
v___y_5504_ = v___x_5586_;
v___y_5505_ = v___x_5582_;
v___y_5506_ = v___x_5602_;
goto v___jp_5496_;
}
}
else
{
lean_object* v_a_5603_; lean_object* v___x_5605_; uint8_t v_isShared_5606_; uint8_t v_isSharedCheck_5610_; 
lean_dec(v_a_5592_);
lean_dec_ref(v___x_5589_);
lean_dec(v___y_5577_);
lean_dec_ref(v___y_5576_);
v_a_5603_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5610_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5610_ == 0)
{
v___x_5605_ = v___x_5593_;
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
else
{
lean_inc(v_a_5603_);
lean_dec(v___x_5593_);
v___x_5605_ = lean_box(0);
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
v_resetjp_5604_:
{
lean_object* v___x_5608_; 
if (v_isShared_5606_ == 0)
{
v___x_5608_ = v___x_5605_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5609_; 
v_reuseFailAlloc_5609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5609_, 0, v_a_5603_);
v___x_5608_ = v_reuseFailAlloc_5609_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
return v___x_5608_;
}
}
}
}
else
{
lean_object* v_a_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5618_; 
lean_dec_ref(v___x_5589_);
lean_dec_ref(v___f_5581_);
lean_dec(v___y_5577_);
lean_dec_ref(v___y_5576_);
v_a_5611_ = lean_ctor_get(v___x_5591_, 0);
v_isSharedCheck_5618_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5618_ == 0)
{
v___x_5613_ = v___x_5591_;
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_a_5611_);
lean_dec(v___x_5591_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v___x_5616_; 
if (v_isShared_5614_ == 0)
{
v___x_5616_ = v___x_5613_;
goto v_reusejp_5615_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v_a_5611_);
v___x_5616_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5615_;
}
v_reusejp_5615_:
{
return v___x_5616_;
}
}
}
}
else
{
lean_object* v_a_5619_; lean_object* v___x_5621_; uint8_t v_isShared_5622_; uint8_t v_isSharedCheck_5626_; 
lean_dec_ref(v___f_5581_);
lean_dec(v___y_5577_);
lean_dec_ref(v___y_5576_);
lean_dec(v_a_5562_);
v_a_5619_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5626_ == 0)
{
v___x_5621_ = v___x_5583_;
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
else
{
lean_inc(v_a_5619_);
lean_dec(v___x_5583_);
v___x_5621_ = lean_box(0);
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
v_resetjp_5620_:
{
lean_object* v___x_5624_; 
if (v_isShared_5622_ == 0)
{
v___x_5624_ = v___x_5621_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_a_5619_);
v___x_5624_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
return v___x_5624_;
}
}
}
}
v___jp_5627_:
{
lean_object* v___x_5629_; 
v___x_5629_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5628_);
v___y_5575_ = v___y_5628_;
v___y_5576_ = v___y_5628_;
v___y_5577_ = v___x_5629_;
goto v___jp_5574_;
}
v___jp_5632_:
{
lean_object* v___x_5634_; lean_object* v___x_5635_; 
v___x_5634_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5635_ = lean_io_getenv(v___x_5634_);
if (lean_obj_tag(v___x_5635_) == 0)
{
v___y_5628_ = v___y_5633_;
goto v___jp_5627_;
}
else
{
lean_object* v_val_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; 
v_val_5636_ = lean_ctor_get(v___x_5635_, 0);
lean_inc(v_val_5636_);
lean_dec_ref_known(v___x_5635_, 1);
v___x_5637_ = lean_unsigned_to_nat(0u);
v___x_5638_ = lean_string_utf8_byte_size(v_val_5636_);
v___x_5639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5639_, 0, v_val_5636_);
lean_ctor_set(v___x_5639_, 1, v___x_5637_);
lean_ctor_set(v___x_5639_, 2, v___x_5638_);
v___x_5640_ = l_String_Slice_toNat_x3f(v___x_5639_);
lean_dec_ref_known(v___x_5639_, 3);
if (lean_obj_tag(v___x_5640_) == 0)
{
v___y_5628_ = v___y_5633_;
goto v___jp_5627_;
}
else
{
lean_object* v_val_5641_; 
v_val_5641_ = lean_ctor_get(v___x_5640_, 0);
lean_inc(v_val_5641_);
lean_dec_ref_known(v___x_5640_, 1);
lean_inc_ref(v___y_5633_);
v___y_5575_ = v___y_5633_;
v___y_5576_ = v___y_5633_;
v___y_5577_ = v_val_5641_;
goto v___jp_5574_;
}
}
}
}
else
{
lean_object* v_a_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5651_; 
lean_dec(v_a_5568_);
lean_dec(v_a_5562_);
lean_dec_ref(v_options_5490_);
lean_dec_ref(v_handler_5489_);
v_a_5644_ = lean_ctor_get(v___x_5572_, 0);
v_isSharedCheck_5651_ = !lean_is_exclusive(v___x_5572_);
if (v_isSharedCheck_5651_ == 0)
{
v___x_5646_ = v___x_5572_;
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_a_5644_);
lean_dec(v___x_5572_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5649_; 
if (v_isShared_5647_ == 0)
{
v___x_5649_ = v___x_5646_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v_a_5644_);
v___x_5649_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
return v___x_5649_;
}
}
}
}
else
{
lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5659_; 
lean_dec(v_a_5568_);
lean_dec(v_a_5562_);
lean_dec_ref(v_options_5490_);
lean_dec_ref(v_handler_5489_);
v_a_5652_ = lean_ctor_get(v___x_5569_, 0);
v_isSharedCheck_5659_ = !lean_is_exclusive(v___x_5569_);
if (v_isSharedCheck_5659_ == 0)
{
v___x_5654_ = v___x_5569_;
v_isShared_5655_ = v_isSharedCheck_5659_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v___x_5569_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5659_;
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
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_a_5652_);
v___x_5657_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
return v___x_5657_;
}
}
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5662_; uint8_t v_isShared_5663_; uint8_t v_isSharedCheck_5667_; 
lean_dec(v_a_5562_);
lean_dec_ref(v_options_5490_);
lean_dec_ref(v_handler_5489_);
v_a_5660_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5662_ = v___x_5567_;
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
else
{
lean_inc(v_a_5660_);
lean_dec(v___x_5567_);
v___x_5662_ = lean_box(0);
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
v_resetjp_5661_:
{
lean_object* v___x_5665_; 
if (v_isShared_5663_ == 0)
{
v___x_5665_ = v___x_5662_;
goto v_reusejp_5664_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_a_5660_);
v___x_5665_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5664_;
}
v_reusejp_5664_:
{
return v___x_5665_;
}
}
}
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5675_; 
lean_dec(v_a_5562_);
lean_dec_ref(v_options_5490_);
lean_dec_ref(v_handler_5489_);
v_a_5668_ = lean_ctor_get(v___x_5564_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5564_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5670_ = v___x_5564_;
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_a_5668_);
lean_dec(v___x_5564_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v___x_5673_; 
if (v_isShared_5671_ == 0)
{
v___x_5673_ = v___x_5670_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5668_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
else
{
lean_object* v_a_5676_; lean_object* v___x_5678_; uint8_t v_isShared_5679_; uint8_t v_isSharedCheck_5683_; 
lean_dec_ref(v_options_5490_);
lean_dec_ref(v_handler_5489_);
v_a_5676_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5683_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5678_ = v___x_5561_;
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
else
{
lean_inc(v_a_5676_);
lean_dec(v___x_5561_);
v___x_5678_ = lean_box(0);
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
v_resetjp_5677_:
{
lean_object* v___x_5681_; 
if (v_isShared_5679_ == 0)
{
v___x_5681_ = v___x_5678_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_a_5676_);
v___x_5681_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
return v___x_5681_;
}
}
}
v___jp_5496_:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; 
v___x_5507_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5507_, 0, v___y_5501_);
lean_inc_ref(v___y_5504_);
v___x_5508_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5508_, 0, v___y_5503_);
lean_ctor_set(v___x_5508_, 1, v___y_5504_);
v___x_5509_ = lean_unsigned_to_nat(3u);
v___x_5510_ = lean_mk_empty_array_with_capacity(v___x_5509_);
v___x_5511_ = lean_array_push(v___x_5510_, v___y_5506_);
v___x_5512_ = lean_array_push(v___x_5511_, v___x_5507_);
v___x_5513_ = lean_array_push(v___x_5512_, v___x_5508_);
lean_inc_ref(v___y_5502_);
lean_inc(v___y_5498_);
v___x_5514_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5498_, v___y_5502_, v___x_5513_);
if (lean_obj_tag(v___x_5514_) == 0)
{
lean_object* v___x_5515_; lean_object* v___x_5516_; 
lean_dec_ref_known(v___x_5514_, 1);
v___x_5515_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5516_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5515_);
if (lean_obj_tag(v___x_5516_) == 0)
{
lean_object* v_a_5517_; lean_object* v___f_5518_; lean_object* v___x_5519_; 
v_a_5517_ = lean_ctor_get(v___x_5516_, 0);
lean_inc_n(v_a_5517_, 2);
lean_dec_ref_known(v___x_5516_, 1);
lean_inc_ref(v___y_5497_);
lean_inc(v___y_5500_);
v___f_5518_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 6, 4);
lean_closure_set(v___f_5518_, 0, v___y_5500_);
lean_closure_set(v___f_5518_, 1, v___f_5495_);
lean_closure_set(v___f_5518_, 2, v___y_5497_);
lean_closure_set(v___f_5518_, 3, v_a_5517_);
v___x_5519_ = l_Lasm_JS_Function_ofFn(v___f_5518_, v___y_5505_);
if (lean_obj_tag(v___x_5519_) == 0)
{
lean_object* v_a_5520_; lean_object* v___f_5521_; lean_object* v___x_5522_; 
v_a_5520_ = lean_ctor_get(v___x_5519_, 0);
lean_inc(v_a_5520_);
lean_dec_ref_known(v___x_5519_, 1);
lean_inc_ref(v___y_5499_);
v___f_5521_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 8, 6);
lean_closure_set(v___f_5521_, 0, v_a_5520_);
lean_closure_set(v___f_5521_, 1, v___y_5499_);
lean_closure_set(v___f_5521_, 2, v___y_5497_);
lean_closure_set(v___f_5521_, 3, v___y_5500_);
lean_closure_set(v___f_5521_, 4, v___f_5495_);
lean_closure_set(v___f_5521_, 5, v___y_5498_);
v___x_5522_ = l_Lasm_JS_Function_ofFn(v___f_5521_, v___y_5505_);
lean_dec(v___y_5505_);
if (lean_obj_tag(v___x_5522_) == 0)
{
lean_object* v_a_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; 
v_a_5523_ = lean_ctor_get(v___x_5522_, 0);
lean_inc(v_a_5523_);
lean_dec_ref_known(v___x_5522_, 1);
v___x_5524_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5525_ = lean_box(0);
v___x_5526_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5523_, v_a_5517_, v___x_5524_, v___x_5525_);
if (lean_obj_tag(v___x_5526_) == 0)
{
lean_object* v___x_5527_; 
lean_dec_ref_known(v___x_5526_, 1);
v___x_5527_ = l_Lasm_JS_waitForever();
return v___x_5527_;
}
else
{
return v___x_5526_;
}
}
else
{
lean_object* v_a_5528_; lean_object* v___x_5530_; uint8_t v_isShared_5531_; uint8_t v_isSharedCheck_5535_; 
lean_dec(v_a_5517_);
v_a_5528_ = lean_ctor_get(v___x_5522_, 0);
v_isSharedCheck_5535_ = !lean_is_exclusive(v___x_5522_);
if (v_isSharedCheck_5535_ == 0)
{
v___x_5530_ = v___x_5522_;
v_isShared_5531_ = v_isSharedCheck_5535_;
goto v_resetjp_5529_;
}
else
{
lean_inc(v_a_5528_);
lean_dec(v___x_5522_);
v___x_5530_ = lean_box(0);
v_isShared_5531_ = v_isSharedCheck_5535_;
goto v_resetjp_5529_;
}
v_resetjp_5529_:
{
lean_object* v___x_5533_; 
if (v_isShared_5531_ == 0)
{
v___x_5533_ = v___x_5530_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_a_5528_);
v___x_5533_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
return v___x_5533_;
}
}
}
}
else
{
lean_object* v_a_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5543_; 
lean_dec(v_a_5517_);
lean_dec(v___y_5505_);
lean_dec(v___y_5500_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
v_a_5536_ = lean_ctor_get(v___x_5519_, 0);
v_isSharedCheck_5543_ = !lean_is_exclusive(v___x_5519_);
if (v_isSharedCheck_5543_ == 0)
{
v___x_5538_ = v___x_5519_;
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_a_5536_);
lean_dec(v___x_5519_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
lean_object* v___x_5541_; 
if (v_isShared_5539_ == 0)
{
v___x_5541_ = v___x_5538_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5542_; 
v_reuseFailAlloc_5542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5542_, 0, v_a_5536_);
v___x_5541_ = v_reuseFailAlloc_5542_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
return v___x_5541_;
}
}
}
}
else
{
lean_object* v_a_5544_; lean_object* v___x_5546_; uint8_t v_isShared_5547_; uint8_t v_isSharedCheck_5551_; 
lean_dec(v___y_5505_);
lean_dec(v___y_5500_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
v_a_5544_ = lean_ctor_get(v___x_5516_, 0);
v_isSharedCheck_5551_ = !lean_is_exclusive(v___x_5516_);
if (v_isSharedCheck_5551_ == 0)
{
v___x_5546_ = v___x_5516_;
v_isShared_5547_ = v_isSharedCheck_5551_;
goto v_resetjp_5545_;
}
else
{
lean_inc(v_a_5544_);
lean_dec(v___x_5516_);
v___x_5546_ = lean_box(0);
v_isShared_5547_ = v_isSharedCheck_5551_;
goto v_resetjp_5545_;
}
v_resetjp_5545_:
{
lean_object* v___x_5549_; 
if (v_isShared_5547_ == 0)
{
v___x_5549_ = v___x_5546_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v_a_5544_);
v___x_5549_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
return v___x_5549_;
}
}
}
}
else
{
lean_object* v_a_5552_; lean_object* v___x_5554_; uint8_t v_isShared_5555_; uint8_t v_isSharedCheck_5559_; 
lean_dec(v___y_5505_);
lean_dec(v___y_5500_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
v_a_5552_ = lean_ctor_get(v___x_5514_, 0);
v_isSharedCheck_5559_ = !lean_is_exclusive(v___x_5514_);
if (v_isSharedCheck_5559_ == 0)
{
v___x_5554_ = v___x_5514_;
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
else
{
lean_inc(v_a_5552_);
lean_dec(v___x_5514_);
v___x_5554_ = lean_box(0);
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
v_resetjp_5553_:
{
lean_object* v___x_5557_; 
if (v_isShared_5555_ == 0)
{
v___x_5557_ = v___x_5554_;
goto v_reusejp_5556_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v_a_5552_);
v___x_5557_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5556_;
}
v_reusejp_5556_:
{
return v___x_5557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5684_, lean_object* v_options_5685_, lean_object* v_a_5686_){
_start:
{
lean_object* v_res_5687_; 
v_res_5687_ = l_Lasm_Fetch_serveNode(v_handler_5684_, v_options_5685_);
return v_res_5687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5688_, lean_object* v_range_5689_, lean_object* v_b_5690_, lean_object* v_i_5691_, lean_object* v_hs_5692_, lean_object* v_hl_5693_){
_start:
{
lean_object* v___x_5694_; 
v___x_5694_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5688_, v_range_5689_, v_b_5690_, v_i_5691_);
return v___x_5694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5695_, lean_object* v_range_5696_, lean_object* v_b_5697_, lean_object* v_i_5698_, lean_object* v_hs_5699_, lean_object* v_hl_5700_){
_start:
{
lean_object* v_res_5701_; 
v_res_5701_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5695_, v_range_5696_, v_b_5697_, v_i_5698_, v_hs_5699_, v_hl_5700_);
lean_dec_ref(v_range_5696_);
lean_dec_ref(v___y_5695_);
return v_res_5701_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5702_, lean_object* v_a_5703_, lean_object* v_as_5704_, lean_object* v_as_x27_5705_, lean_object* v_b_5706_, lean_object* v_a_5707_){
_start:
{
lean_object* v___x_5709_; 
v___x_5709_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5702_, v_a_5703_, v_as_x27_5705_, v_b_5706_);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5710_, lean_object* v_a_5711_, lean_object* v_as_5712_, lean_object* v_as_x27_5713_, lean_object* v_b_5714_, lean_object* v_a_5715_, lean_object* v___y_5716_){
_start:
{
lean_object* v_res_5717_; 
v_res_5717_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5710_, v_a_5711_, v_as_5712_, v_as_x27_5713_, v_b_5714_, v_a_5715_);
lean_dec(v_as_x27_5713_);
lean_dec(v_as_5712_);
return v_res_5717_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5718_; 
v___x_5718_ = lean_box(0);
return v___x_5718_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5719_; 
v___x_5719_ = lean_box(0);
return v___x_5719_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5727_, lean_object* v_method_5728_, lean_object* v_url_5729_, lean_object* v_headers_5730_, lean_object* v_body_5731_, lean_object* v_backend_5732_, lean_object* v_a_00___x40___internal___hyg_5733_){
_start:
{
lean_object* v_res_5734_; 
v_res_5734_ = lasm_fetch_send(v_p_5727_, v_method_5728_, v_url_5729_, v_headers_5730_, v_body_5731_, v_backend_5732_);
lean_dec_ref(v_backend_5732_);
lean_dec_ref(v_body_5731_);
lean_dec_ref(v_headers_5730_);
lean_dec_ref(v_url_5729_);
lean_dec_ref(v_method_5728_);
lean_dec(v_p_5727_);
return v_res_5734_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5735_, lean_object* v_b_5736_, lean_object* v_x_5737_, lean_object* v_x_5738_){
_start:
{
if (lean_obj_tag(v_x_5738_) == 0)
{
return v_x_5737_;
}
else
{
lean_object* v_head_5739_; lean_object* v_tail_5740_; uint8_t v___y_5742_; lean_object* v___x_5749_; lean_object* v___x_5750_; uint8_t v___x_5751_; 
v_head_5739_ = lean_ctor_get(v_x_5738_, 0);
v_tail_5740_ = lean_ctor_get(v_x_5738_, 1);
v___x_5749_ = lean_nat_add(v_pos_5735_, v_head_5739_);
v___x_5750_ = lean_byte_array_size(v_b_5736_);
v___x_5751_ = lean_nat_dec_lt(v___x_5749_, v___x_5750_);
if (v___x_5751_ == 0)
{
uint8_t v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; uint8_t v___x_5755_; 
lean_dec(v___x_5749_);
v___x_5752_ = 0;
v___x_5753_ = lean_box(v___x_5752_);
v___x_5754_ = l_outOfBounds___redArg(v___x_5753_);
lean_dec(v___x_5753_);
v___x_5755_ = lean_unbox(v___x_5754_);
lean_dec(v___x_5754_);
v___y_5742_ = v___x_5755_;
goto v___jp_5741_;
}
else
{
uint8_t v___x_5756_; 
v___x_5756_ = lean_byte_array_fget(v_b_5736_, v___x_5749_);
lean_dec(v___x_5749_);
v___y_5742_ = v___x_5756_;
goto v___jp_5741_;
}
v___jp_5741_:
{
lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; 
v___x_5743_ = lean_uint8_to_nat(v___y_5742_);
v___x_5744_ = lean_unsigned_to_nat(256u);
v___x_5745_ = lean_nat_pow(v___x_5744_, v_head_5739_);
v___x_5746_ = lean_nat_mul(v___x_5743_, v___x_5745_);
lean_dec(v___x_5745_);
v___x_5747_ = lean_nat_add(v_x_5737_, v___x_5746_);
lean_dec(v___x_5746_);
lean_dec(v_x_5737_);
v_x_5737_ = v___x_5747_;
v_x_5738_ = v_tail_5740_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5757_, lean_object* v_b_5758_, lean_object* v_x_5759_, lean_object* v_x_5760_){
_start:
{
lean_object* v_res_5761_; 
v_res_5761_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5757_, v_b_5758_, v_x_5759_, v_x_5760_);
lean_dec(v_x_5760_);
lean_dec_ref(v_b_5758_);
lean_dec(v_pos_5757_);
return v_res_5761_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5762_; lean_object* v___x_5763_; 
v___x_5762_ = lean_unsigned_to_nat(8u);
v___x_5763_ = l_List_range(v___x_5762_);
return v___x_5763_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5767_, lean_object* v_pos_5768_){
_start:
{
lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; uint8_t v___x_5772_; 
v___x_5769_ = lean_byte_array_size(v_b_5767_);
v___x_5770_ = lean_unsigned_to_nat(8u);
v___x_5771_ = lean_nat_add(v_pos_5768_, v___x_5770_);
v___x_5772_ = lean_nat_dec_lt(v___x_5769_, v___x_5771_);
lean_dec(v___x_5771_);
if (v___x_5772_ == 0)
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; 
v___x_5773_ = lean_unsigned_to_nat(0u);
v___x_5774_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5775_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5768_, v_b_5767_, v___x_5773_, v___x_5774_);
v___x_5776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5776_, 0, v___x_5775_);
return v___x_5776_;
}
else
{
lean_object* v___x_5777_; 
v___x_5777_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5778_, lean_object* v_pos_5779_){
_start:
{
lean_object* v_res_5780_; 
v_res_5780_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5778_, v_pos_5779_);
lean_dec(v_pos_5779_);
lean_dec_ref(v_b_5778_);
return v_res_5780_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5781_, lean_object* v_a_5782_){
_start:
{
if (lean_obj_tag(v_a_5781_) == 0)
{
lean_object* v___x_5783_; 
v___x_5783_ = l_List_reverse___redArg(v_a_5782_);
return v___x_5783_;
}
else
{
lean_object* v_head_5784_; lean_object* v_tail_5785_; lean_object* v___x_5787_; uint8_t v_isShared_5788_; uint8_t v_isSharedCheck_5801_; 
v_head_5784_ = lean_ctor_get(v_a_5781_, 0);
v_tail_5785_ = lean_ctor_get(v_a_5781_, 1);
v_isSharedCheck_5801_ = !lean_is_exclusive(v_a_5781_);
if (v_isSharedCheck_5801_ == 0)
{
v___x_5787_ = v_a_5781_;
v_isShared_5788_ = v_isSharedCheck_5801_;
goto v_resetjp_5786_;
}
else
{
lean_inc(v_tail_5785_);
lean_inc(v_head_5784_);
lean_dec(v_a_5781_);
v___x_5787_ = lean_box(0);
v_isShared_5788_ = v_isSharedCheck_5801_;
goto v_resetjp_5786_;
}
v_resetjp_5786_:
{
uint8_t v___y_5790_; uint8_t v___x_5796_; uint8_t v___x_5797_; uint8_t v___x_5798_; 
v___x_5796_ = 128;
v___x_5797_ = lean_unbox(v_head_5784_);
v___x_5798_ = lean_uint8_dec_lt(v___x_5797_, v___x_5796_);
if (v___x_5798_ == 0)
{
uint8_t v___x_5799_; 
lean_dec(v_head_5784_);
v___x_5799_ = 63;
v___y_5790_ = v___x_5799_;
goto v___jp_5789_;
}
else
{
uint8_t v___x_5800_; 
v___x_5800_ = lean_unbox(v_head_5784_);
lean_dec(v_head_5784_);
v___y_5790_ = v___x_5800_;
goto v___jp_5789_;
}
v___jp_5789_:
{
lean_object* v___x_5791_; lean_object* v___x_5793_; 
v___x_5791_ = lean_box(v___y_5790_);
if (v_isShared_5788_ == 0)
{
lean_ctor_set(v___x_5787_, 1, v_a_5782_);
lean_ctor_set(v___x_5787_, 0, v___x_5791_);
v___x_5793_ = v___x_5787_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5795_; 
v_reuseFailAlloc_5795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5795_, 0, v___x_5791_);
lean_ctor_set(v_reuseFailAlloc_5795_, 1, v_a_5782_);
v___x_5793_ = v_reuseFailAlloc_5795_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
v_a_5781_ = v_tail_5785_;
v_a_5782_ = v___x_5793_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5804_, lean_object* v_pos_5805_, lean_object* v_n_5806_){
_start:
{
lean_object* v___x_5807_; lean_object* v___x_5808_; uint8_t v___x_5809_; 
v___x_5807_ = lean_byte_array_size(v_b_5804_);
v___x_5808_ = lean_nat_add(v_pos_5805_, v_n_5806_);
v___x_5809_ = lean_nat_dec_lt(v___x_5807_, v___x_5808_);
if (v___x_5809_ == 0)
{
lean_object* v___x_5810_; uint8_t v___x_5811_; 
v___x_5810_ = l_ByteArray_extract(v_b_5804_, v_pos_5805_, v___x_5808_);
lean_dec(v___x_5808_);
v___x_5811_ = lean_string_validate_utf8(v___x_5810_);
if (v___x_5811_ == 0)
{
lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; uint8_t v___x_5816_; 
v___x_5812_ = l_ByteArray_toList(v___x_5810_);
lean_dec_ref(v___x_5810_);
v___x_5813_ = lean_box(0);
v___x_5814_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5812_, v___x_5813_);
v___x_5815_ = l_List_toByteArray(v___x_5814_);
lean_dec(v___x_5814_);
v___x_5816_ = lean_string_validate_utf8(v___x_5815_);
if (v___x_5816_ == 0)
{
lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; 
lean_dec_ref(v___x_5815_);
v___x_5817_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5818_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5817_);
v___x_5819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5819_, 0, v___x_5818_);
return v___x_5819_;
}
else
{
lean_object* v___x_5820_; lean_object* v___x_5821_; 
v___x_5820_ = lean_string_from_utf8_unchecked(v___x_5815_);
v___x_5821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
return v___x_5821_;
}
}
else
{
lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5822_ = lean_string_from_utf8_unchecked(v___x_5810_);
v___x_5823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5823_, 0, v___x_5822_);
return v___x_5823_;
}
}
else
{
lean_object* v___x_5824_; 
lean_dec(v___x_5808_);
lean_dec(v_pos_5805_);
v___x_5824_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5824_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5825_, lean_object* v_pos_5826_, lean_object* v_n_5827_){
_start:
{
lean_object* v_res_5828_; 
v_res_5828_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5825_, v_pos_5826_, v_n_5827_);
lean_dec(v_n_5827_);
lean_dec_ref(v_b_5825_);
return v_res_5828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5829_, lean_object* v_range_5830_, lean_object* v_b_5831_, lean_object* v_i_5832_){
_start:
{
lean_object* v_stop_5833_; lean_object* v_step_5834_; uint8_t v___x_5835_; 
v_stop_5833_ = lean_ctor_get(v_range_5830_, 1);
v_step_5834_ = lean_ctor_get(v_range_5830_, 2);
v___x_5835_ = lean_nat_dec_lt(v_i_5832_, v_stop_5833_);
if (v___x_5835_ == 0)
{
lean_object* v___x_5836_; 
lean_dec(v_i_5832_);
v___x_5836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5836_, 0, v_b_5831_);
return v___x_5836_;
}
else
{
lean_object* v_fst_5837_; lean_object* v_snd_5838_; lean_object* v___x_5840_; uint8_t v_isShared_5841_; uint8_t v_isSharedCheck_5894_; 
v_fst_5837_ = lean_ctor_get(v_b_5831_, 0);
v_snd_5838_ = lean_ctor_get(v_b_5831_, 1);
v_isSharedCheck_5894_ = !lean_is_exclusive(v_b_5831_);
if (v_isSharedCheck_5894_ == 0)
{
v___x_5840_ = v_b_5831_;
v_isShared_5841_ = v_isSharedCheck_5894_;
goto v_resetjp_5839_;
}
else
{
lean_inc(v_snd_5838_);
lean_inc(v_fst_5837_);
lean_dec(v_b_5831_);
v___x_5840_ = lean_box(0);
v_isShared_5841_ = v_isSharedCheck_5894_;
goto v_resetjp_5839_;
}
v_resetjp_5839_:
{
lean_object* v___x_5842_; 
v___x_5842_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5829_, v_fst_5837_);
if (lean_obj_tag(v___x_5842_) == 0)
{
lean_object* v_a_5843_; lean_object* v___x_5845_; uint8_t v_isShared_5846_; uint8_t v_isSharedCheck_5850_; 
lean_del_object(v___x_5840_);
lean_dec(v_snd_5838_);
lean_dec(v_fst_5837_);
lean_dec(v_i_5832_);
v_a_5843_ = lean_ctor_get(v___x_5842_, 0);
v_isSharedCheck_5850_ = !lean_is_exclusive(v___x_5842_);
if (v_isSharedCheck_5850_ == 0)
{
v___x_5845_ = v___x_5842_;
v_isShared_5846_ = v_isSharedCheck_5850_;
goto v_resetjp_5844_;
}
else
{
lean_inc(v_a_5843_);
lean_dec(v___x_5842_);
v___x_5845_ = lean_box(0);
v_isShared_5846_ = v_isSharedCheck_5850_;
goto v_resetjp_5844_;
}
v_resetjp_5844_:
{
lean_object* v___x_5848_; 
if (v_isShared_5846_ == 0)
{
v___x_5848_ = v___x_5845_;
goto v_reusejp_5847_;
}
else
{
lean_object* v_reuseFailAlloc_5849_; 
v_reuseFailAlloc_5849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5849_, 0, v_a_5843_);
v___x_5848_ = v_reuseFailAlloc_5849_;
goto v_reusejp_5847_;
}
v_reusejp_5847_:
{
return v___x_5848_;
}
}
}
else
{
lean_object* v_a_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; 
v_a_5851_ = lean_ctor_get(v___x_5842_, 0);
lean_inc(v_a_5851_);
lean_dec_ref_known(v___x_5842_, 1);
v___x_5852_ = lean_unsigned_to_nat(8u);
v___x_5853_ = lean_nat_add(v_fst_5837_, v___x_5852_);
lean_dec(v_fst_5837_);
lean_inc(v___x_5853_);
v___x_5854_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5829_, v___x_5853_, v_a_5851_);
if (lean_obj_tag(v___x_5854_) == 0)
{
lean_object* v_a_5855_; lean_object* v___x_5857_; uint8_t v_isShared_5858_; uint8_t v_isSharedCheck_5862_; 
lean_dec(v___x_5853_);
lean_dec(v_a_5851_);
lean_del_object(v___x_5840_);
lean_dec(v_snd_5838_);
lean_dec(v_i_5832_);
v_a_5855_ = lean_ctor_get(v___x_5854_, 0);
v_isSharedCheck_5862_ = !lean_is_exclusive(v___x_5854_);
if (v_isSharedCheck_5862_ == 0)
{
v___x_5857_ = v___x_5854_;
v_isShared_5858_ = v_isSharedCheck_5862_;
goto v_resetjp_5856_;
}
else
{
lean_inc(v_a_5855_);
lean_dec(v___x_5854_);
v___x_5857_ = lean_box(0);
v_isShared_5858_ = v_isSharedCheck_5862_;
goto v_resetjp_5856_;
}
v_resetjp_5856_:
{
lean_object* v___x_5860_; 
if (v_isShared_5858_ == 0)
{
v___x_5860_ = v___x_5857_;
goto v_reusejp_5859_;
}
else
{
lean_object* v_reuseFailAlloc_5861_; 
v_reuseFailAlloc_5861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5861_, 0, v_a_5855_);
v___x_5860_ = v_reuseFailAlloc_5861_;
goto v_reusejp_5859_;
}
v_reusejp_5859_:
{
return v___x_5860_;
}
}
}
else
{
lean_object* v_a_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; 
v_a_5863_ = lean_ctor_get(v___x_5854_, 0);
lean_inc(v_a_5863_);
lean_dec_ref_known(v___x_5854_, 1);
v___x_5864_ = lean_nat_add(v___x_5853_, v_a_5851_);
lean_dec(v_a_5851_);
lean_dec(v___x_5853_);
v___x_5865_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5829_, v___x_5864_);
if (lean_obj_tag(v___x_5865_) == 0)
{
lean_object* v_a_5866_; lean_object* v___x_5868_; uint8_t v_isShared_5869_; uint8_t v_isSharedCheck_5873_; 
lean_dec(v___x_5864_);
lean_dec(v_a_5863_);
lean_del_object(v___x_5840_);
lean_dec(v_snd_5838_);
lean_dec(v_i_5832_);
v_a_5866_ = lean_ctor_get(v___x_5865_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v___x_5865_);
if (v_isSharedCheck_5873_ == 0)
{
v___x_5868_ = v___x_5865_;
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
else
{
lean_inc(v_a_5866_);
lean_dec(v___x_5865_);
v___x_5868_ = lean_box(0);
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
v_resetjp_5867_:
{
lean_object* v___x_5871_; 
if (v_isShared_5869_ == 0)
{
v___x_5871_ = v___x_5868_;
goto v_reusejp_5870_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_a_5866_);
v___x_5871_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5870_;
}
v_reusejp_5870_:
{
return v___x_5871_;
}
}
}
else
{
lean_object* v_a_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; 
v_a_5874_ = lean_ctor_get(v___x_5865_, 0);
lean_inc(v_a_5874_);
lean_dec_ref_known(v___x_5865_, 1);
v___x_5875_ = lean_nat_add(v___x_5864_, v___x_5852_);
lean_dec(v___x_5864_);
lean_inc(v___x_5875_);
v___x_5876_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5829_, v___x_5875_, v_a_5874_);
if (lean_obj_tag(v___x_5876_) == 0)
{
lean_object* v_a_5877_; lean_object* v___x_5879_; uint8_t v_isShared_5880_; uint8_t v_isSharedCheck_5884_; 
lean_dec(v___x_5875_);
lean_dec(v_a_5874_);
lean_dec(v_a_5863_);
lean_del_object(v___x_5840_);
lean_dec(v_snd_5838_);
lean_dec(v_i_5832_);
v_a_5877_ = lean_ctor_get(v___x_5876_, 0);
v_isSharedCheck_5884_ = !lean_is_exclusive(v___x_5876_);
if (v_isSharedCheck_5884_ == 0)
{
v___x_5879_ = v___x_5876_;
v_isShared_5880_ = v_isSharedCheck_5884_;
goto v_resetjp_5878_;
}
else
{
lean_inc(v_a_5877_);
lean_dec(v___x_5876_);
v___x_5879_ = lean_box(0);
v_isShared_5880_ = v_isSharedCheck_5884_;
goto v_resetjp_5878_;
}
v_resetjp_5878_:
{
lean_object* v___x_5882_; 
if (v_isShared_5880_ == 0)
{
v___x_5882_ = v___x_5879_;
goto v_reusejp_5881_;
}
else
{
lean_object* v_reuseFailAlloc_5883_; 
v_reuseFailAlloc_5883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5883_, 0, v_a_5877_);
v___x_5882_ = v_reuseFailAlloc_5883_;
goto v_reusejp_5881_;
}
v_reusejp_5881_:
{
return v___x_5882_;
}
}
}
else
{
lean_object* v_a_5885_; lean_object* v___x_5886_; lean_object* v___x_5888_; 
v_a_5885_ = lean_ctor_get(v___x_5876_, 0);
lean_inc(v_a_5885_);
lean_dec_ref_known(v___x_5876_, 1);
v___x_5886_ = lean_nat_add(v___x_5875_, v_a_5874_);
lean_dec(v_a_5874_);
lean_dec(v___x_5875_);
if (v_isShared_5841_ == 0)
{
lean_ctor_set(v___x_5840_, 1, v_a_5885_);
lean_ctor_set(v___x_5840_, 0, v_a_5863_);
v___x_5888_ = v___x_5840_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5893_; 
v_reuseFailAlloc_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5893_, 0, v_a_5863_);
lean_ctor_set(v_reuseFailAlloc_5893_, 1, v_a_5885_);
v___x_5888_ = v_reuseFailAlloc_5893_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; 
v___x_5889_ = lean_array_push(v_snd_5838_, v___x_5888_);
v___x_5890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5886_);
lean_ctor_set(v___x_5890_, 1, v___x_5889_);
v___x_5891_ = lean_nat_add(v_i_5832_, v_step_5834_);
lean_dec(v_i_5832_);
v_b_5831_ = v___x_5890_;
v_i_5832_ = v___x_5891_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5895_, lean_object* v_range_5896_, lean_object* v_b_5897_, lean_object* v_i_5898_){
_start:
{
lean_object* v_res_5899_; 
v_res_5899_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5895_, v_range_5896_, v_b_5897_, v_i_5898_);
lean_dec_ref(v_range_5896_);
lean_dec_ref(v_b_5895_);
return v_res_5899_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5903_){
_start:
{
lean_object* v___x_5904_; lean_object* v___x_5905_; 
v___x_5904_ = lean_unsigned_to_nat(0u);
v___x_5905_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5903_, v___x_5904_);
if (lean_obj_tag(v___x_5905_) == 0)
{
lean_object* v_a_5906_; lean_object* v___x_5908_; uint8_t v_isShared_5909_; uint8_t v_isSharedCheck_5913_; 
v_a_5906_ = lean_ctor_get(v___x_5905_, 0);
v_isSharedCheck_5913_ = !lean_is_exclusive(v___x_5905_);
if (v_isSharedCheck_5913_ == 0)
{
v___x_5908_ = v___x_5905_;
v_isShared_5909_ = v_isSharedCheck_5913_;
goto v_resetjp_5907_;
}
else
{
lean_inc(v_a_5906_);
lean_dec(v___x_5905_);
v___x_5908_ = lean_box(0);
v_isShared_5909_ = v_isSharedCheck_5913_;
goto v_resetjp_5907_;
}
v_resetjp_5907_:
{
lean_object* v___x_5911_; 
if (v_isShared_5909_ == 0)
{
v___x_5911_ = v___x_5908_;
goto v_reusejp_5910_;
}
else
{
lean_object* v_reuseFailAlloc_5912_; 
v_reuseFailAlloc_5912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5912_, 0, v_a_5906_);
v___x_5911_ = v_reuseFailAlloc_5912_;
goto v_reusejp_5910_;
}
v_reusejp_5910_:
{
return v___x_5911_;
}
}
}
else
{
lean_object* v_a_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; 
v_a_5914_ = lean_ctor_get(v___x_5905_, 0);
lean_inc(v_a_5914_);
lean_dec_ref_known(v___x_5905_, 1);
v___x_5915_ = lean_unsigned_to_nat(8u);
v___x_5916_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5903_, v___x_5915_);
if (lean_obj_tag(v___x_5916_) == 0)
{
lean_object* v_a_5917_; lean_object* v___x_5919_; uint8_t v_isShared_5920_; uint8_t v_isSharedCheck_5924_; 
lean_dec(v_a_5914_);
v_a_5917_ = lean_ctor_get(v___x_5916_, 0);
v_isSharedCheck_5924_ = !lean_is_exclusive(v___x_5916_);
if (v_isSharedCheck_5924_ == 0)
{
v___x_5919_ = v___x_5916_;
v_isShared_5920_ = v_isSharedCheck_5924_;
goto v_resetjp_5918_;
}
else
{
lean_inc(v_a_5917_);
lean_dec(v___x_5916_);
v___x_5919_ = lean_box(0);
v_isShared_5920_ = v_isSharedCheck_5924_;
goto v_resetjp_5918_;
}
v_resetjp_5918_:
{
lean_object* v___x_5922_; 
if (v_isShared_5920_ == 0)
{
v___x_5922_ = v___x_5919_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5923_; 
v_reuseFailAlloc_5923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5923_, 0, v_a_5917_);
v___x_5922_ = v_reuseFailAlloc_5923_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
return v___x_5922_;
}
}
}
else
{
lean_object* v_a_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; 
v_a_5925_ = lean_ctor_get(v___x_5916_, 0);
lean_inc(v_a_5925_);
lean_dec_ref_known(v___x_5916_, 1);
v___x_5926_ = lean_unsigned_to_nat(1u);
v___x_5927_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5927_, 0, v___x_5904_);
lean_ctor_set(v___x_5927_, 1, v_a_5925_);
lean_ctor_set(v___x_5927_, 2, v___x_5926_);
v___x_5928_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5929_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5903_, v___x_5927_, v___x_5928_, v___x_5904_);
lean_dec_ref_known(v___x_5927_, 3);
if (lean_obj_tag(v___x_5929_) == 0)
{
lean_object* v_a_5930_; lean_object* v___x_5932_; uint8_t v_isShared_5933_; uint8_t v_isSharedCheck_5937_; 
lean_dec(v_a_5914_);
v_a_5930_ = lean_ctor_get(v___x_5929_, 0);
v_isSharedCheck_5937_ = !lean_is_exclusive(v___x_5929_);
if (v_isSharedCheck_5937_ == 0)
{
v___x_5932_ = v___x_5929_;
v_isShared_5933_ = v_isSharedCheck_5937_;
goto v_resetjp_5931_;
}
else
{
lean_inc(v_a_5930_);
lean_dec(v___x_5929_);
v___x_5932_ = lean_box(0);
v_isShared_5933_ = v_isSharedCheck_5937_;
goto v_resetjp_5931_;
}
v_resetjp_5931_:
{
lean_object* v___x_5935_; 
if (v_isShared_5933_ == 0)
{
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
return v___x_5935_;
}
}
}
else
{
lean_object* v_a_5938_; lean_object* v___x_5940_; uint8_t v_isShared_5941_; uint8_t v_isSharedCheck_5952_; 
v_a_5938_ = lean_ctor_get(v___x_5929_, 0);
v_isSharedCheck_5952_ = !lean_is_exclusive(v___x_5929_);
if (v_isSharedCheck_5952_ == 0)
{
v___x_5940_ = v___x_5929_;
v_isShared_5941_ = v_isSharedCheck_5952_;
goto v_resetjp_5939_;
}
else
{
lean_inc(v_a_5938_);
lean_dec(v___x_5929_);
v___x_5940_ = lean_box(0);
v_isShared_5941_ = v_isSharedCheck_5952_;
goto v_resetjp_5939_;
}
v_resetjp_5939_:
{
lean_object* v_fst_5942_; lean_object* v_snd_5943_; uint16_t v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5950_; 
v_fst_5942_ = lean_ctor_get(v_a_5938_, 0);
lean_inc(v_fst_5942_);
v_snd_5943_ = lean_ctor_get(v_a_5938_, 1);
lean_inc(v_snd_5943_);
lean_dec(v_a_5938_);
v___x_5944_ = lean_uint16_of_nat(v_a_5914_);
lean_dec(v_a_5914_);
v___x_5945_ = lean_byte_array_size(v_b_5903_);
v___x_5946_ = l_ByteArray_extract(v_b_5903_, v_fst_5942_, v___x_5945_);
v___x_5947_ = lean_box(0);
v___x_5948_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5948_, 0, v_snd_5943_);
lean_ctor_set(v___x_5948_, 1, v___x_5946_);
lean_ctor_set(v___x_5948_, 2, v___x_5947_);
lean_ctor_set_uint16(v___x_5948_, sizeof(void*)*3, v___x_5944_);
if (v_isShared_5941_ == 0)
{
lean_ctor_set(v___x_5940_, 0, v___x_5948_);
v___x_5950_ = v___x_5940_;
goto v_reusejp_5949_;
}
else
{
lean_object* v_reuseFailAlloc_5951_; 
v_reuseFailAlloc_5951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5951_, 0, v___x_5948_);
v___x_5950_ = v_reuseFailAlloc_5951_;
goto v_reusejp_5949_;
}
v_reusejp_5949_:
{
return v___x_5950_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5953_){
_start:
{
lean_object* v_res_5954_; 
v_res_5954_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5953_);
lean_dec_ref(v_b_5953_);
return v_res_5954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5955_, lean_object* v_range_5956_, lean_object* v_b_5957_, lean_object* v_i_5958_, lean_object* v_hs_5959_, lean_object* v_hl_5960_){
_start:
{
lean_object* v___x_5961_; 
v___x_5961_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5955_, v_range_5956_, v_b_5957_, v_i_5958_);
return v___x_5961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5962_, lean_object* v_range_5963_, lean_object* v_b_5964_, lean_object* v_i_5965_, lean_object* v_hs_5966_, lean_object* v_hl_5967_){
_start:
{
lean_object* v_res_5968_; 
v_res_5968_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5962_, v_range_5963_, v_b_5964_, v_i_5965_, v_hs_5966_, v_hl_5967_);
lean_dec_ref(v_range_5963_);
lean_dec_ref(v_b_5962_);
return v_res_5968_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5969_, lean_object* v_headers_5970_, lean_object* v_x_5971_){
_start:
{
if (lean_obj_tag(v_x_5971_) == 0)
{
lean_object* v_a_5973_; lean_object* v___x_5975_; uint8_t v_isShared_5976_; uint8_t v_isSharedCheck_5981_; 
lean_dec_ref(v_headers_5970_);
v_a_5973_ = lean_ctor_get(v_x_5971_, 0);
v_isSharedCheck_5981_ = !lean_is_exclusive(v_x_5971_);
if (v_isSharedCheck_5981_ == 0)
{
v___x_5975_ = v_x_5971_;
v_isShared_5976_ = v_isSharedCheck_5981_;
goto v_resetjp_5974_;
}
else
{
lean_inc(v_a_5973_);
lean_dec(v_x_5971_);
v___x_5975_ = lean_box(0);
v_isShared_5976_ = v_isSharedCheck_5981_;
goto v_resetjp_5974_;
}
v_resetjp_5974_:
{
lean_object* v___x_5978_; 
if (v_isShared_5976_ == 0)
{
v___x_5978_ = v___x_5975_;
goto v_reusejp_5977_;
}
else
{
lean_object* v_reuseFailAlloc_5980_; 
v_reuseFailAlloc_5980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5980_, 0, v_a_5973_);
v___x_5978_ = v_reuseFailAlloc_5980_;
goto v_reusejp_5977_;
}
v_reusejp_5977_:
{
lean_object* v___x_5979_; 
v___x_5979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5979_, 0, v___x_5978_);
return v___x_5979_;
}
}
}
else
{
lean_object* v_a_5982_; lean_object* v___x_5984_; uint8_t v_isShared_5985_; uint8_t v_isSharedCheck_5992_; 
v_a_5982_ = lean_ctor_get(v_x_5971_, 0);
v_isSharedCheck_5992_ = !lean_is_exclusive(v_x_5971_);
if (v_isSharedCheck_5992_ == 0)
{
v___x_5984_ = v_x_5971_;
v_isShared_5985_ = v_isSharedCheck_5992_;
goto v_resetjp_5983_;
}
else
{
lean_inc(v_a_5982_);
lean_dec(v_x_5971_);
v___x_5984_ = lean_box(0);
v_isShared_5985_ = v_isSharedCheck_5992_;
goto v_resetjp_5983_;
}
v_resetjp_5983_:
{
lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5989_; 
v___x_5986_ = lean_box(0);
v___x_5987_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5987_, 0, v_headers_5970_);
lean_ctor_set(v___x_5987_, 1, v_a_5982_);
lean_ctor_set(v___x_5987_, 2, v___x_5986_);
lean_ctor_set_uint16(v___x_5987_, sizeof(void*)*3, v___y_5969_);
if (v_isShared_5985_ == 0)
{
lean_ctor_set(v___x_5984_, 0, v___x_5987_);
v___x_5989_ = v___x_5984_;
goto v_reusejp_5988_;
}
else
{
lean_object* v_reuseFailAlloc_5991_; 
v_reuseFailAlloc_5991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5991_, 0, v___x_5987_);
v___x_5989_ = v_reuseFailAlloc_5991_;
goto v_reusejp_5988_;
}
v_reusejp_5988_:
{
lean_object* v___x_5990_; 
v___x_5990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5990_, 0, v___x_5989_);
return v___x_5990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5993_, lean_object* v_headers_5994_, lean_object* v_x_5995_, lean_object* v___y_5996_){
_start:
{
uint16_t v___y_2853__boxed_5997_; lean_object* v_res_5998_; 
v___y_2853__boxed_5997_ = lean_unbox(v___y_5993_);
v_res_5998_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5997_, v_headers_5994_, v_x_5995_);
return v_res_5998_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5999_, lean_object* v___f_6000_, lean_object* v_x_6001_){
_start:
{
if (lean_obj_tag(v_x_6001_) == 0)
{
lean_object* v_a_6003_; lean_object* v___x_6005_; uint8_t v_isShared_6006_; uint8_t v_isSharedCheck_6011_; 
lean_dec_ref(v___f_6000_);
lean_dec(v_a_5999_);
v_a_6003_ = lean_ctor_get(v_x_6001_, 0);
v_isSharedCheck_6011_ = !lean_is_exclusive(v_x_6001_);
if (v_isSharedCheck_6011_ == 0)
{
v___x_6005_ = v_x_6001_;
v_isShared_6006_ = v_isSharedCheck_6011_;
goto v_resetjp_6004_;
}
else
{
lean_inc(v_a_6003_);
lean_dec(v_x_6001_);
v___x_6005_ = lean_box(0);
v_isShared_6006_ = v_isSharedCheck_6011_;
goto v_resetjp_6004_;
}
v_resetjp_6004_:
{
lean_object* v___x_6008_; 
if (v_isShared_6006_ == 0)
{
v___x_6008_ = v___x_6005_;
goto v_reusejp_6007_;
}
else
{
lean_object* v_reuseFailAlloc_6010_; 
v_reuseFailAlloc_6010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6010_, 0, v_a_6003_);
v___x_6008_ = v_reuseFailAlloc_6010_;
goto v_reusejp_6007_;
}
v_reusejp_6007_:
{
lean_object* v___x_6009_; 
v___x_6009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6009_, 0, v___x_6008_);
return v___x_6009_;
}
}
}
else
{
lean_object* v_a_6012_; lean_object* v___x_6014_; uint8_t v_isShared_6015_; uint8_t v_isSharedCheck_6036_; 
v_a_6012_ = lean_ctor_get(v_x_6001_, 0);
v_isSharedCheck_6036_ = !lean_is_exclusive(v_x_6001_);
if (v_isSharedCheck_6036_ == 0)
{
v___x_6014_ = v_x_6001_;
v_isShared_6015_ = v_isSharedCheck_6036_;
goto v_resetjp_6013_;
}
else
{
lean_inc(v_a_6012_);
lean_dec(v_x_6001_);
v___x_6014_ = lean_box(0);
v_isShared_6015_ = v_isSharedCheck_6036_;
goto v_resetjp_6013_;
}
v_resetjp_6013_:
{
lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; uint8_t v___x_6022_; lean_object* v_val_6024_; lean_object* v___x_6027_; 
v___x_6016_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6017_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6017_, 0, v_a_5999_);
lean_ctor_set(v___x_6017_, 1, v___x_6016_);
v___x_6018_ = lean_unsigned_to_nat(1u);
v___x_6019_ = lean_mk_empty_array_with_capacity(v___x_6018_);
v___x_6020_ = lean_array_push(v___x_6019_, v___x_6017_);
v___x_6021_ = lean_unsigned_to_nat(0u);
v___x_6022_ = 0;
v___x_6027_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_6012_, v___x_6020_);
if (lean_obj_tag(v___x_6027_) == 0)
{
lean_object* v_a_6028_; lean_object* v___x_6030_; 
v_a_6028_ = lean_ctor_get(v___x_6027_, 0);
lean_inc(v_a_6028_);
lean_dec_ref_known(v___x_6027_, 1);
if (v_isShared_6015_ == 0)
{
lean_ctor_set(v___x_6014_, 0, v_a_6028_);
v___x_6030_ = v___x_6014_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6031_; 
v_reuseFailAlloc_6031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6031_, 0, v_a_6028_);
v___x_6030_ = v_reuseFailAlloc_6031_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
v_val_6024_ = v___x_6030_;
goto v___jp_6023_;
}
}
else
{
lean_object* v_a_6032_; lean_object* v___x_6034_; 
v_a_6032_ = lean_ctor_get(v___x_6027_, 0);
lean_inc(v_a_6032_);
lean_dec_ref_known(v___x_6027_, 1);
if (v_isShared_6015_ == 0)
{
lean_ctor_set_tag(v___x_6014_, 0);
lean_ctor_set(v___x_6014_, 0, v_a_6032_);
v___x_6034_ = v___x_6014_;
goto v_reusejp_6033_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v_a_6032_);
v___x_6034_ = v_reuseFailAlloc_6035_;
goto v_reusejp_6033_;
}
v_reusejp_6033_:
{
v_val_6024_ = v___x_6034_;
goto v___jp_6023_;
}
}
v___jp_6023_:
{
lean_object* v___x_6025_; lean_object* v___x_6026_; 
v___x_6025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6025_, 0, v_val_6024_);
v___x_6026_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6021_, v___x_6022_, v___x_6025_, v___f_6000_);
return v___x_6026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_6037_, lean_object* v___f_6038_, lean_object* v_x_6039_, lean_object* v___y_6040_){
_start:
{
lean_object* v_res_6041_; 
v_res_6041_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_6037_, v___f_6038_, v_x_6039_);
return v_res_6041_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_6042_, lean_object* v_a_6043_, lean_object* v_x_6044_){
_start:
{
if (lean_obj_tag(v_x_6044_) == 0)
{
lean_object* v_a_6046_; lean_object* v___x_6048_; uint8_t v_isShared_6049_; uint8_t v_isSharedCheck_6054_; 
lean_dec(v_a_6043_);
lean_dec_ref(v___f_6042_);
v_a_6046_ = lean_ctor_get(v_x_6044_, 0);
v_isSharedCheck_6054_ = !lean_is_exclusive(v_x_6044_);
if (v_isSharedCheck_6054_ == 0)
{
v___x_6048_ = v_x_6044_;
v_isShared_6049_ = v_isSharedCheck_6054_;
goto v_resetjp_6047_;
}
else
{
lean_inc(v_a_6046_);
lean_dec(v_x_6044_);
v___x_6048_ = lean_box(0);
v_isShared_6049_ = v_isSharedCheck_6054_;
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
lean_object* v_reuseFailAlloc_6053_; 
v_reuseFailAlloc_6053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6053_, 0, v_a_6046_);
v___x_6051_ = v_reuseFailAlloc_6053_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
lean_object* v___x_6052_; 
v___x_6052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6051_);
return v___x_6052_;
}
}
}
else
{
lean_object* v_a_6055_; lean_object* v___x_6057_; uint8_t v_isShared_6058_; uint8_t v_isSharedCheck_6076_; 
v_a_6055_ = lean_ctor_get(v_x_6044_, 0);
v_isSharedCheck_6076_ = !lean_is_exclusive(v_x_6044_);
if (v_isSharedCheck_6076_ == 0)
{
v___x_6057_ = v_x_6044_;
v_isShared_6058_ = v_isSharedCheck_6076_;
goto v_resetjp_6056_;
}
else
{
lean_inc(v_a_6055_);
lean_dec(v_x_6044_);
v___x_6057_ = lean_box(0);
v_isShared_6058_ = v_isSharedCheck_6076_;
goto v_resetjp_6056_;
}
v_resetjp_6056_:
{
lean_object* v___f_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; uint8_t v___x_6062_; lean_object* v_val_6064_; lean_object* v___x_6067_; 
v___f_6059_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_6059_, 0, v_a_6055_);
lean_closure_set(v___f_6059_, 1, v___f_6042_);
v___x_6060_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_6061_ = lean_unsigned_to_nat(0u);
v___x_6062_ = 0;
v___x_6067_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6043_, v___x_6060_);
if (lean_obj_tag(v___x_6067_) == 0)
{
lean_object* v_a_6068_; lean_object* v___x_6070_; 
v_a_6068_ = lean_ctor_get(v___x_6067_, 0);
lean_inc(v_a_6068_);
lean_dec_ref_known(v___x_6067_, 1);
if (v_isShared_6058_ == 0)
{
lean_ctor_set(v___x_6057_, 0, v_a_6068_);
v___x_6070_ = v___x_6057_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v_a_6068_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
v_val_6064_ = v___x_6070_;
goto v___jp_6063_;
}
}
else
{
lean_object* v_a_6072_; lean_object* v___x_6074_; 
v_a_6072_ = lean_ctor_get(v___x_6067_, 0);
lean_inc(v_a_6072_);
lean_dec_ref_known(v___x_6067_, 1);
if (v_isShared_6058_ == 0)
{
lean_ctor_set_tag(v___x_6057_, 0);
lean_ctor_set(v___x_6057_, 0, v_a_6072_);
v___x_6074_ = v___x_6057_;
goto v_reusejp_6073_;
}
else
{
lean_object* v_reuseFailAlloc_6075_; 
v_reuseFailAlloc_6075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6075_, 0, v_a_6072_);
v___x_6074_ = v_reuseFailAlloc_6075_;
goto v_reusejp_6073_;
}
v_reusejp_6073_:
{
v_val_6064_ = v___x_6074_;
goto v___jp_6063_;
}
}
v___jp_6063_:
{
lean_object* v___x_6065_; lean_object* v___x_6066_; 
v___x_6065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6065_, 0, v_val_6064_);
v___x_6066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6061_, v___x_6062_, v___x_6065_, v___f_6059_);
return v___x_6066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_6077_, lean_object* v_a_6078_, lean_object* v_x_6079_, lean_object* v___y_6080_){
_start:
{
lean_object* v_res_6081_; 
v_res_6081_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_6077_, v_a_6078_, v_x_6079_);
return v_res_6081_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_6082_, lean_object* v_a_6083_, lean_object* v_a_6084_, lean_object* v_headers_6085_){
_start:
{
lean_object* v___x_6087_; lean_object* v___f_6088_; lean_object* v___f_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; uint8_t v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; 
v___x_6087_ = lean_box(v___y_6082_);
v___f_6088_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_6088_, 0, v___x_6087_);
lean_closure_set(v___f_6088_, 1, v_headers_6085_);
v___f_6089_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_6089_, 0, v___f_6088_);
lean_closure_set(v___f_6089_, 1, v_a_6083_);
v___x_6090_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_6091_ = lean_unsigned_to_nat(0u);
v___x_6092_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_6093_ = 0;
v___x_6094_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_6084_, v___x_6090_, v___x_6092_);
v___x_6095_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6091_, v___x_6093_, v___x_6094_, v___f_6089_);
return v___x_6095_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_6096_, lean_object* v_a_6097_, lean_object* v_a_6098_, lean_object* v_headers_6099_, lean_object* v___y_6100_){
_start:
{
uint16_t v___y_3061__boxed_6101_; lean_object* v_res_6102_; 
v___y_3061__boxed_6101_ = lean_unbox(v___y_6096_);
v_res_6102_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_6101_, v_a_6097_, v_a_6098_, v_headers_6099_);
return v_res_6102_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_6103_, lean_object* v_x_6104_){
_start:
{
if (lean_obj_tag(v_x_6104_) == 0)
{
lean_object* v_a_6106_; lean_object* v___x_6108_; uint8_t v_isShared_6109_; uint8_t v_isSharedCheck_6114_; 
lean_dec_ref(v___f_6103_);
v_a_6106_ = lean_ctor_get(v_x_6104_, 0);
v_isSharedCheck_6114_ = !lean_is_exclusive(v_x_6104_);
if (v_isSharedCheck_6114_ == 0)
{
v___x_6108_ = v_x_6104_;
v_isShared_6109_ = v_isSharedCheck_6114_;
goto v_resetjp_6107_;
}
else
{
lean_inc(v_a_6106_);
lean_dec(v_x_6104_);
v___x_6108_ = lean_box(0);
v_isShared_6109_ = v_isSharedCheck_6114_;
goto v_resetjp_6107_;
}
v_resetjp_6107_:
{
lean_object* v___x_6111_; 
if (v_isShared_6109_ == 0)
{
v___x_6111_ = v___x_6108_;
goto v_reusejp_6110_;
}
else
{
lean_object* v_reuseFailAlloc_6113_; 
v_reuseFailAlloc_6113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6113_, 0, v_a_6106_);
v___x_6111_ = v_reuseFailAlloc_6113_;
goto v_reusejp_6110_;
}
v_reusejp_6110_:
{
lean_object* v___x_6112_; 
v___x_6112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6111_);
return v___x_6112_;
}
}
}
else
{
lean_object* v_a_6115_; lean_object* v___x_6116_; 
v_a_6115_ = lean_ctor_get(v_x_6104_, 0);
lean_inc(v_a_6115_);
lean_dec_ref_known(v_x_6104_, 1);
v___x_6116_ = lean_apply_2(v___f_6103_, v_a_6115_, lean_box(0));
return v___x_6116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_6117_, lean_object* v_x_6118_, lean_object* v___y_6119_){
_start:
{
lean_object* v_res_6120_; 
v_res_6120_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_6117_, v_x_6118_);
return v_res_6120_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_6121_, lean_object* v___f_6122_, lean_object* v_x_6123_){
_start:
{
if (lean_obj_tag(v_x_6123_) == 0)
{
lean_object* v_a_6125_; lean_object* v___x_6127_; uint8_t v_isShared_6128_; uint8_t v_isSharedCheck_6133_; 
lean_dec_ref(v___f_6122_);
lean_dec(v_value_6121_);
v_a_6125_ = lean_ctor_get(v_x_6123_, 0);
v_isSharedCheck_6133_ = !lean_is_exclusive(v_x_6123_);
if (v_isSharedCheck_6133_ == 0)
{
v___x_6127_ = v_x_6123_;
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
else
{
lean_inc(v_a_6125_);
lean_dec(v_x_6123_);
v___x_6127_ = lean_box(0);
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
v_resetjp_6126_:
{
lean_object* v___x_6130_; 
if (v_isShared_6128_ == 0)
{
v___x_6130_ = v___x_6127_;
goto v_reusejp_6129_;
}
else
{
lean_object* v_reuseFailAlloc_6132_; 
v_reuseFailAlloc_6132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6132_, 0, v_a_6125_);
v___x_6130_ = v_reuseFailAlloc_6132_;
goto v_reusejp_6129_;
}
v_reusejp_6129_:
{
lean_object* v___x_6131_; 
v___x_6131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6130_);
return v___x_6131_;
}
}
}
else
{
lean_object* v_a_6134_; lean_object* v___x_6136_; uint8_t v_isShared_6137_; uint8_t v_isSharedCheck_6159_; 
v_a_6134_ = lean_ctor_get(v_x_6123_, 0);
v_isSharedCheck_6159_ = !lean_is_exclusive(v_x_6123_);
if (v_isSharedCheck_6159_ == 0)
{
v___x_6136_ = v_x_6123_;
v_isShared_6137_ = v_isSharedCheck_6159_;
goto v_resetjp_6135_;
}
else
{
lean_inc(v_a_6134_);
lean_dec(v_x_6123_);
v___x_6136_ = lean_box(0);
v_isShared_6137_ = v_isSharedCheck_6159_;
goto v_resetjp_6135_;
}
v_resetjp_6135_:
{
lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; uint8_t v___x_6145_; lean_object* v_val_6147_; lean_object* v___x_6150_; 
v___x_6138_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_6139_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6140_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6140_, 0, v_value_6121_);
lean_ctor_set(v___x_6140_, 1, v___x_6139_);
v___x_6141_ = lean_unsigned_to_nat(1u);
v___x_6142_ = lean_mk_empty_array_with_capacity(v___x_6141_);
v___x_6143_ = lean_array_push(v___x_6142_, v___x_6140_);
v___x_6144_ = lean_unsigned_to_nat(0u);
v___x_6145_ = 0;
v___x_6150_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_6134_, v___x_6138_, v___x_6143_);
if (lean_obj_tag(v___x_6150_) == 0)
{
lean_object* v_a_6151_; lean_object* v___x_6153_; 
v_a_6151_ = lean_ctor_get(v___x_6150_, 0);
lean_inc(v_a_6151_);
lean_dec_ref_known(v___x_6150_, 1);
if (v_isShared_6137_ == 0)
{
lean_ctor_set(v___x_6136_, 0, v_a_6151_);
v___x_6153_ = v___x_6136_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6154_; 
v_reuseFailAlloc_6154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6154_, 0, v_a_6151_);
v___x_6153_ = v_reuseFailAlloc_6154_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
v_val_6147_ = v___x_6153_;
goto v___jp_6146_;
}
}
else
{
lean_object* v_a_6155_; lean_object* v___x_6157_; 
v_a_6155_ = lean_ctor_get(v___x_6150_, 0);
lean_inc(v_a_6155_);
lean_dec_ref_known(v___x_6150_, 1);
if (v_isShared_6137_ == 0)
{
lean_ctor_set_tag(v___x_6136_, 0);
lean_ctor_set(v___x_6136_, 0, v_a_6155_);
v___x_6157_ = v___x_6136_;
goto v_reusejp_6156_;
}
else
{
lean_object* v_reuseFailAlloc_6158_; 
v_reuseFailAlloc_6158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6158_, 0, v_a_6155_);
v___x_6157_ = v_reuseFailAlloc_6158_;
goto v_reusejp_6156_;
}
v_reusejp_6156_:
{
v_val_6147_ = v___x_6157_;
goto v___jp_6146_;
}
}
v___jp_6146_:
{
lean_object* v___x_6148_; lean_object* v___x_6149_; 
v___x_6148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6148_, 0, v_val_6147_);
v___x_6149_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6144_, v___x_6145_, v___x_6148_, v___f_6122_);
return v___x_6149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_6160_, lean_object* v___f_6161_, lean_object* v_x_6162_, lean_object* v___y_6163_){
_start:
{
lean_object* v_res_6164_; 
v_res_6164_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_6160_, v___f_6161_, v_x_6162_);
return v_res_6164_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_6169_, lean_object* v_a_6170_, lean_object* v___x_6171_, lean_object* v___x_6172_, lean_object* v_x_6173_){
_start:
{
uint8_t v___y_6176_; lean_object* v___y_6177_; lean_object* v___y_6178_; lean_object* v_val_6179_; 
if (lean_obj_tag(v_x_6173_) == 0)
{
lean_object* v_a_6182_; lean_object* v___x_6184_; uint8_t v_isShared_6185_; uint8_t v_isSharedCheck_6190_; 
lean_dec(v_a_6170_);
lean_dec(v_a_6169_);
v_a_6182_ = lean_ctor_get(v_x_6173_, 0);
v_isSharedCheck_6190_ = !lean_is_exclusive(v_x_6173_);
if (v_isSharedCheck_6190_ == 0)
{
v___x_6184_ = v_x_6173_;
v_isShared_6185_ = v_isSharedCheck_6190_;
goto v_resetjp_6183_;
}
else
{
lean_inc(v_a_6182_);
lean_dec(v_x_6173_);
v___x_6184_ = lean_box(0);
v_isShared_6185_ = v_isSharedCheck_6190_;
goto v_resetjp_6183_;
}
v_resetjp_6183_:
{
lean_object* v___x_6187_; 
if (v_isShared_6185_ == 0)
{
v___x_6187_ = v___x_6184_;
goto v_reusejp_6186_;
}
else
{
lean_object* v_reuseFailAlloc_6189_; 
v_reuseFailAlloc_6189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6189_, 0, v_a_6182_);
v___x_6187_ = v_reuseFailAlloc_6189_;
goto v_reusejp_6186_;
}
v_reusejp_6186_:
{
lean_object* v___x_6188_; 
v___x_6188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6188_, 0, v___x_6187_);
return v___x_6188_;
}
}
}
else
{
lean_object* v_a_6191_; lean_object* v___x_6193_; uint8_t v_isShared_6194_; uint8_t v_isSharedCheck_6224_; 
v_a_6191_ = lean_ctor_get(v_x_6173_, 0);
v_isSharedCheck_6224_ = !lean_is_exclusive(v_x_6173_);
if (v_isSharedCheck_6224_ == 0)
{
v___x_6193_ = v_x_6173_;
v_isShared_6194_ = v_isSharedCheck_6224_;
goto v_resetjp_6192_;
}
else
{
lean_inc(v_a_6191_);
lean_dec(v_x_6173_);
v___x_6193_ = lean_box(0);
v_isShared_6194_ = v_isSharedCheck_6224_;
goto v_resetjp_6192_;
}
v_resetjp_6192_:
{
uint16_t v___y_6196_; lean_object* v___x_6220_; 
v___x_6220_ = l_Lasm_JS_Data_field(v_a_6191_, v___x_6172_);
if (lean_obj_tag(v___x_6220_) == 3)
{
double v_n_6221_; uint16_t v___x_6222_; 
v_n_6221_ = lean_ctor_get_float(v___x_6220_, 0);
lean_dec_ref_known(v___x_6220_, 0);
v___x_6222_ = lean_float_to_uint16(v_n_6221_);
v___y_6196_ = v___x_6222_;
goto v___jp_6195_;
}
else
{
uint16_t v___x_6223_; 
lean_dec(v___x_6220_);
v___x_6223_ = 0;
v___y_6196_ = v___x_6223_;
goto v___jp_6195_;
}
v___jp_6195_:
{
lean_object* v___x_6197_; lean_object* v___f_6198_; lean_object* v___x_6199_; 
v___x_6197_ = lean_box(v___y_6196_);
lean_inc(v_a_6169_);
v___f_6198_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_6198_, 0, v___x_6197_);
lean_closure_set(v___f_6198_, 1, v_a_6169_);
lean_closure_set(v___f_6198_, 2, v_a_6170_);
v___x_6199_ = l_Lasm_JS_Data_field(v_a_6191_, v___x_6171_);
lean_dec(v_a_6191_);
if (lean_obj_tag(v___x_6199_) == 9)
{
lean_object* v_value_6200_; lean_object* v___f_6201_; lean_object* v___f_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; uint8_t v___x_6205_; lean_object* v___x_6206_; 
v_value_6200_ = lean_ctor_get(v___x_6199_, 0);
lean_inc(v_value_6200_);
lean_dec_ref_known(v___x_6199_, 2);
v___f_6201_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6201_, 0, v___f_6198_);
v___f_6202_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_6202_, 0, v_value_6200_);
lean_closure_set(v___f_6202_, 1, v___f_6201_);
v___x_6203_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_6204_ = lean_unsigned_to_nat(0u);
v___x_6205_ = 0;
v___x_6206_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6169_, v___x_6203_);
if (lean_obj_tag(v___x_6206_) == 0)
{
lean_object* v_a_6207_; lean_object* v___x_6209_; 
v_a_6207_ = lean_ctor_get(v___x_6206_, 0);
lean_inc(v_a_6207_);
lean_dec_ref_known(v___x_6206_, 1);
if (v_isShared_6194_ == 0)
{
lean_ctor_set(v___x_6193_, 0, v_a_6207_);
v___x_6209_ = v___x_6193_;
goto v_reusejp_6208_;
}
else
{
lean_object* v_reuseFailAlloc_6210_; 
v_reuseFailAlloc_6210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6210_, 0, v_a_6207_);
v___x_6209_ = v_reuseFailAlloc_6210_;
goto v_reusejp_6208_;
}
v_reusejp_6208_:
{
v___y_6176_ = v___x_6205_;
v___y_6177_ = v___f_6202_;
v___y_6178_ = v___x_6204_;
v_val_6179_ = v___x_6209_;
goto v___jp_6175_;
}
}
else
{
lean_object* v_a_6211_; lean_object* v___x_6213_; 
v_a_6211_ = lean_ctor_get(v___x_6206_, 0);
lean_inc(v_a_6211_);
lean_dec_ref_known(v___x_6206_, 1);
if (v_isShared_6194_ == 0)
{
lean_ctor_set_tag(v___x_6193_, 0);
lean_ctor_set(v___x_6193_, 0, v_a_6211_);
v___x_6213_ = v___x_6193_;
goto v_reusejp_6212_;
}
else
{
lean_object* v_reuseFailAlloc_6214_; 
v_reuseFailAlloc_6214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6214_, 0, v_a_6211_);
v___x_6213_ = v_reuseFailAlloc_6214_;
goto v_reusejp_6212_;
}
v_reusejp_6212_:
{
v___y_6176_ = v___x_6205_;
v___y_6177_ = v___f_6202_;
v___y_6178_ = v___x_6204_;
v_val_6179_ = v___x_6213_;
goto v___jp_6175_;
}
}
}
else
{
lean_object* v___f_6215_; lean_object* v___x_6216_; uint8_t v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; 
lean_dec(v___x_6199_);
lean_del_object(v___x_6193_);
lean_dec(v_a_6169_);
v___f_6215_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6215_, 0, v___f_6198_);
v___x_6216_ = lean_unsigned_to_nat(0u);
v___x_6217_ = 0;
v___x_6218_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_6219_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6216_, v___x_6217_, v___x_6218_, v___f_6215_);
return v___x_6219_;
}
}
}
}
v___jp_6175_:
{
lean_object* v___x_6180_; lean_object* v___x_6181_; 
v___x_6180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6180_, 0, v_val_6179_);
v___x_6181_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6178_, v___y_6176_, v___x_6180_, v___y_6177_);
return v___x_6181_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_6225_, lean_object* v_a_6226_, lean_object* v___x_6227_, lean_object* v___x_6228_, lean_object* v_x_6229_, lean_object* v___y_6230_){
_start:
{
lean_object* v_res_6231_; 
v_res_6231_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_6225_, v_a_6226_, v___x_6227_, v___x_6228_, v_x_6229_);
lean_dec_ref(v___x_6228_);
lean_dec_ref(v___x_6227_);
return v_res_6231_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; 
v___x_6232_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_6233_ = lean_unsigned_to_nat(2u);
v___x_6234_ = lean_mk_empty_array_with_capacity(v___x_6233_);
v___x_6235_ = lean_array_push(v___x_6234_, v___x_6232_);
return v___x_6235_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_6236_, lean_object* v___x_6237_, lean_object* v_x_6238_){
_start:
{
if (lean_obj_tag(v_x_6238_) == 0)
{
lean_object* v_a_6240_; lean_object* v___x_6242_; uint8_t v_isShared_6243_; uint8_t v_isSharedCheck_6248_; 
lean_dec_ref(v___x_6237_);
lean_dec(v_a_6236_);
v_a_6240_ = lean_ctor_get(v_x_6238_, 0);
v_isSharedCheck_6248_ = !lean_is_exclusive(v_x_6238_);
if (v_isSharedCheck_6248_ == 0)
{
v___x_6242_ = v_x_6238_;
v_isShared_6243_ = v_isSharedCheck_6248_;
goto v_resetjp_6241_;
}
else
{
lean_inc(v_a_6240_);
lean_dec(v_x_6238_);
v___x_6242_ = lean_box(0);
v_isShared_6243_ = v_isSharedCheck_6248_;
goto v_resetjp_6241_;
}
v_resetjp_6241_:
{
lean_object* v___x_6245_; 
if (v_isShared_6243_ == 0)
{
v___x_6245_ = v___x_6242_;
goto v_reusejp_6244_;
}
else
{
lean_object* v_reuseFailAlloc_6247_; 
v_reuseFailAlloc_6247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6247_, 0, v_a_6240_);
v___x_6245_ = v_reuseFailAlloc_6247_;
goto v_reusejp_6244_;
}
v_reusejp_6244_:
{
lean_object* v___x_6246_; 
v___x_6246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6246_, 0, v___x_6245_);
return v___x_6246_;
}
}
}
else
{
lean_object* v_a_6249_; lean_object* v___x_6251_; uint8_t v_isShared_6252_; uint8_t v_isSharedCheck_6272_; 
v_a_6249_ = lean_ctor_get(v_x_6238_, 0);
v_isSharedCheck_6272_ = !lean_is_exclusive(v_x_6238_);
if (v_isSharedCheck_6272_ == 0)
{
v___x_6251_ = v_x_6238_;
v_isShared_6252_ = v_isSharedCheck_6272_;
goto v_resetjp_6250_;
}
else
{
lean_inc(v_a_6249_);
lean_dec(v_x_6238_);
v___x_6251_ = lean_box(0);
v_isShared_6252_ = v_isSharedCheck_6272_;
goto v_resetjp_6250_;
}
v_resetjp_6250_:
{
lean_object* v___x_6253_; lean_object* v___f_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; uint8_t v___x_6258_; lean_object* v_val_6260_; lean_object* v___x_6263_; 
v___x_6253_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_6237_);
lean_inc(v_a_6249_);
v___f_6254_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_6254_, 0, v_a_6236_);
lean_closure_set(v___f_6254_, 1, v_a_6249_);
lean_closure_set(v___f_6254_, 2, v___x_6237_);
lean_closure_set(v___f_6254_, 3, v___x_6253_);
v___x_6255_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_6256_ = lean_array_push(v___x_6255_, v___x_6237_);
v___x_6257_ = lean_unsigned_to_nat(0u);
v___x_6258_ = 0;
v___x_6263_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_6249_, v___x_6256_);
if (lean_obj_tag(v___x_6263_) == 0)
{
lean_object* v_a_6264_; lean_object* v___x_6266_; 
v_a_6264_ = lean_ctor_get(v___x_6263_, 0);
lean_inc(v_a_6264_);
lean_dec_ref_known(v___x_6263_, 1);
if (v_isShared_6252_ == 0)
{
lean_ctor_set(v___x_6251_, 0, v_a_6264_);
v___x_6266_ = v___x_6251_;
goto v_reusejp_6265_;
}
else
{
lean_object* v_reuseFailAlloc_6267_; 
v_reuseFailAlloc_6267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6267_, 0, v_a_6264_);
v___x_6266_ = v_reuseFailAlloc_6267_;
goto v_reusejp_6265_;
}
v_reusejp_6265_:
{
v_val_6260_ = v___x_6266_;
goto v___jp_6259_;
}
}
else
{
lean_object* v_a_6268_; lean_object* v___x_6270_; 
v_a_6268_ = lean_ctor_get(v___x_6263_, 0);
lean_inc(v_a_6268_);
lean_dec_ref_known(v___x_6263_, 1);
if (v_isShared_6252_ == 0)
{
lean_ctor_set_tag(v___x_6251_, 0);
lean_ctor_set(v___x_6251_, 0, v_a_6268_);
v___x_6270_ = v___x_6251_;
goto v_reusejp_6269_;
}
else
{
lean_object* v_reuseFailAlloc_6271_; 
v_reuseFailAlloc_6271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6271_, 0, v_a_6268_);
v___x_6270_ = v_reuseFailAlloc_6271_;
goto v_reusejp_6269_;
}
v_reusejp_6269_:
{
v_val_6260_ = v___x_6270_;
goto v___jp_6259_;
}
}
v___jp_6259_:
{
lean_object* v___x_6261_; lean_object* v___x_6262_; 
v___x_6261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6261_, 0, v_val_6260_);
v___x_6262_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6257_, v___x_6258_, v___x_6261_, v___f_6254_);
return v___x_6262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6273_, lean_object* v___x_6274_, lean_object* v_x_6275_, lean_object* v___y_6276_){
_start:
{
lean_object* v_res_6277_; 
v_res_6277_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6273_, v___x_6274_, v_x_6275_);
return v_res_6277_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6279_; uint8_t v___x_6280_; uint64_t v___x_6281_; 
v___x_6279_ = 0ULL;
v___x_6280_ = 0;
v___x_6281_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6280_, v___x_6279_);
return v___x_6281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6282_, lean_object* v_args_6283_, lean_object* v_this_6284_){
_start:
{
lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; uint32_t v___x_6289_; uint64_t v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; 
v___x_6286_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6287_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6287_, 0, v_f_6282_);
lean_ctor_set(v___x_6287_, 1, v___x_6286_);
v___x_6288_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6289_ = 205;
v___x_6290_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6291_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6291_, 0, v_args_6283_);
v___x_6292_ = lean_unsigned_to_nat(3u);
v___x_6293_ = lean_mk_empty_array_with_capacity(v___x_6292_);
v___x_6294_ = lean_array_push(v___x_6293_, v___x_6287_);
v___x_6295_ = lean_array_push(v___x_6294_, v_this_6284_);
v___x_6296_ = lean_array_push(v___x_6295_, v___x_6291_);
v___x_6297_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6297_, 0, v___x_6296_);
v___x_6298_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6288_, v___x_6289_, v___x_6290_, v___x_6297_, v___x_6286_);
return v___x_6298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6299_, lean_object* v_args_6300_, lean_object* v_this_6301_, lean_object* v___y_6302_){
_start:
{
lean_object* v_res_6303_; 
v_res_6303_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6299_, v_args_6300_, v_this_6301_);
return v_res_6303_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6314_, lean_object* v_a_6315_, lean_object* v_x_6316_){
_start:
{
if (lean_obj_tag(v_x_6316_) == 0)
{
lean_object* v_a_6318_; lean_object* v___x_6320_; uint8_t v_isShared_6321_; uint8_t v_isSharedCheck_6326_; 
lean_dec(v_a_6315_);
lean_dec_ref(v_req_6314_);
v_a_6318_ = lean_ctor_get(v_x_6316_, 0);
v_isSharedCheck_6326_ = !lean_is_exclusive(v_x_6316_);
if (v_isSharedCheck_6326_ == 0)
{
v___x_6320_ = v_x_6316_;
v_isShared_6321_ = v_isSharedCheck_6326_;
goto v_resetjp_6319_;
}
else
{
lean_inc(v_a_6318_);
lean_dec(v_x_6316_);
v___x_6320_ = lean_box(0);
v_isShared_6321_ = v_isSharedCheck_6326_;
goto v_resetjp_6319_;
}
v_resetjp_6319_:
{
lean_object* v___x_6323_; 
if (v_isShared_6321_ == 0)
{
v___x_6323_ = v___x_6320_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6325_; 
v_reuseFailAlloc_6325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6325_, 0, v_a_6318_);
v___x_6323_ = v_reuseFailAlloc_6325_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
lean_object* v___x_6324_; 
v___x_6324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6324_, 0, v___x_6323_);
return v___x_6324_;
}
}
}
else
{
lean_object* v_a_6327_; lean_object* v_method_6328_; lean_object* v_url_6329_; lean_object* v_headers_6330_; lean_object* v_body_6331_; lean_object* v___y_6333_; lean_object* v___x_6363_; uint8_t v___x_6364_; 
v_a_6327_ = lean_ctor_get(v_x_6316_, 0);
lean_inc(v_a_6327_);
lean_dec_ref_known(v_x_6316_, 1);
v_method_6328_ = lean_ctor_get(v_req_6314_, 0);
lean_inc_ref(v_method_6328_);
v_url_6329_ = lean_ctor_get(v_req_6314_, 1);
lean_inc_ref(v_url_6329_);
v_headers_6330_ = lean_ctor_get(v_req_6314_, 2);
lean_inc_ref(v_headers_6330_);
v_body_6331_ = lean_ctor_get(v_req_6314_, 3);
lean_inc_ref(v_body_6331_);
lean_dec_ref(v_req_6314_);
v___x_6363_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6364_ = lean_string_dec_eq(v_method_6328_, v___x_6363_);
if (v___x_6364_ == 0)
{
lean_object* v___x_6365_; uint8_t v___x_6366_; 
v___x_6365_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6366_ = lean_string_dec_eq(v_method_6328_, v___x_6365_);
if (v___x_6366_ == 0)
{
lean_object* v___x_6367_; 
v___x_6367_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6367_, 0, v_body_6331_);
v___y_6333_ = v___x_6367_;
goto v___jp_6332_;
}
else
{
lean_dec_ref(v_body_6331_);
goto v___jp_6361_;
}
}
else
{
lean_dec_ref(v_body_6331_);
goto v___jp_6361_;
}
v___jp_6332_:
{
lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___f_6338_; size_t v_sz_6339_; size_t v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; uint8_t v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; 
v___x_6334_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6335_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6335_, 0, v_method_6328_);
v___x_6336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6336_, 0, v___x_6334_);
lean_ctor_set(v___x_6336_, 1, v___x_6335_);
v___x_6337_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6338_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6338_, 0, v_a_6315_);
lean_closure_set(v___f_6338_, 1, v___x_6337_);
v_sz_6339_ = lean_array_size(v_headers_6330_);
v___x_6340_ = ((size_t)0ULL);
v___x_6341_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6339_, v___x_6340_, v_headers_6330_);
v___x_6342_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6342_, 0, v___x_6341_);
v___x_6343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6343_, 0, v___x_6337_);
lean_ctor_set(v___x_6343_, 1, v___x_6342_);
v___x_6344_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6345_, 0, v___x_6344_);
lean_ctor_set(v___x_6345_, 1, v___y_6333_);
v___x_6346_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6347_, 0, v___x_6345_);
lean_ctor_set(v___x_6347_, 1, v___x_6346_);
v___x_6348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6348_, 0, v___x_6343_);
lean_ctor_set(v___x_6348_, 1, v___x_6347_);
v___x_6349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6349_, 0, v___x_6336_);
lean_ctor_set(v___x_6349_, 1, v___x_6348_);
v___x_6350_ = l_Lasm_JS_obj(v___x_6349_);
v___x_6351_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6351_, 0, v_url_6329_);
v___x_6352_ = lean_unsigned_to_nat(2u);
v___x_6353_ = lean_mk_empty_array_with_capacity(v___x_6352_);
v___x_6354_ = lean_array_push(v___x_6353_, v___x_6351_);
v___x_6355_ = lean_array_push(v___x_6354_, v___x_6350_);
v___x_6356_ = lean_box(0);
v___x_6357_ = lean_unsigned_to_nat(0u);
v___x_6358_ = 0;
v___x_6359_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6327_, v___x_6355_, v___x_6356_);
v___x_6360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6357_, v___x_6358_, v___x_6359_, v___f_6338_);
return v___x_6360_;
}
v___jp_6361_:
{
lean_object* v___x_6362_; 
v___x_6362_ = lean_box(0);
v___y_6333_ = v___x_6362_;
goto v___jp_6332_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6368_, lean_object* v_a_6369_, lean_object* v_x_6370_, lean_object* v___y_6371_){
_start:
{
lean_object* v_res_6372_; 
v_res_6372_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6368_, v_a_6369_, v_x_6370_);
return v_res_6372_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6374_, lean_object* v_x_6375_){
_start:
{
if (lean_obj_tag(v_x_6375_) == 0)
{
lean_object* v_a_6377_; lean_object* v___x_6379_; uint8_t v_isShared_6380_; uint8_t v_isSharedCheck_6385_; 
lean_dec_ref(v_req_6374_);
v_a_6377_ = lean_ctor_get(v_x_6375_, 0);
v_isSharedCheck_6385_ = !lean_is_exclusive(v_x_6375_);
if (v_isSharedCheck_6385_ == 0)
{
v___x_6379_ = v_x_6375_;
v_isShared_6380_ = v_isSharedCheck_6385_;
goto v_resetjp_6378_;
}
else
{
lean_inc(v_a_6377_);
lean_dec(v_x_6375_);
v___x_6379_ = lean_box(0);
v_isShared_6380_ = v_isSharedCheck_6385_;
goto v_resetjp_6378_;
}
v_resetjp_6378_:
{
lean_object* v___x_6382_; 
if (v_isShared_6380_ == 0)
{
v___x_6382_ = v___x_6379_;
goto v_reusejp_6381_;
}
else
{
lean_object* v_reuseFailAlloc_6384_; 
v_reuseFailAlloc_6384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6384_, 0, v_a_6377_);
v___x_6382_ = v_reuseFailAlloc_6384_;
goto v_reusejp_6381_;
}
v_reusejp_6381_:
{
lean_object* v___x_6383_; 
v___x_6383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6383_, 0, v___x_6382_);
return v___x_6383_;
}
}
}
else
{
lean_object* v_a_6386_; lean_object* v___x_6388_; uint8_t v_isShared_6389_; uint8_t v_isSharedCheck_6407_; 
v_a_6386_ = lean_ctor_get(v_x_6375_, 0);
v_isSharedCheck_6407_ = !lean_is_exclusive(v_x_6375_);
if (v_isSharedCheck_6407_ == 0)
{
v___x_6388_ = v_x_6375_;
v_isShared_6389_ = v_isSharedCheck_6407_;
goto v_resetjp_6387_;
}
else
{
lean_inc(v_a_6386_);
lean_dec(v_x_6375_);
v___x_6388_ = lean_box(0);
v_isShared_6389_ = v_isSharedCheck_6407_;
goto v_resetjp_6387_;
}
v_resetjp_6387_:
{
lean_object* v___f_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; uint8_t v___x_6393_; lean_object* v_val_6395_; lean_object* v___x_6398_; 
lean_inc(v_a_6386_);
v___f_6390_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6390_, 0, v_req_6374_);
lean_closure_set(v___f_6390_, 1, v_a_6386_);
v___x_6391_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6392_ = lean_unsigned_to_nat(0u);
v___x_6393_ = 0;
v___x_6398_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6386_, v___x_6391_);
if (lean_obj_tag(v___x_6398_) == 0)
{
lean_object* v_a_6399_; lean_object* v___x_6401_; 
v_a_6399_ = lean_ctor_get(v___x_6398_, 0);
lean_inc(v_a_6399_);
lean_dec_ref_known(v___x_6398_, 1);
if (v_isShared_6389_ == 0)
{
lean_ctor_set(v___x_6388_, 0, v_a_6399_);
v___x_6401_ = v___x_6388_;
goto v_reusejp_6400_;
}
else
{
lean_object* v_reuseFailAlloc_6402_; 
v_reuseFailAlloc_6402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6402_, 0, v_a_6399_);
v___x_6401_ = v_reuseFailAlloc_6402_;
goto v_reusejp_6400_;
}
v_reusejp_6400_:
{
v_val_6395_ = v___x_6401_;
goto v___jp_6394_;
}
}
else
{
lean_object* v_a_6403_; lean_object* v___x_6405_; 
v_a_6403_ = lean_ctor_get(v___x_6398_, 0);
lean_inc(v_a_6403_);
lean_dec_ref_known(v___x_6398_, 1);
if (v_isShared_6389_ == 0)
{
lean_ctor_set_tag(v___x_6388_, 0);
lean_ctor_set(v___x_6388_, 0, v_a_6403_);
v___x_6405_ = v___x_6388_;
goto v_reusejp_6404_;
}
else
{
lean_object* v_reuseFailAlloc_6406_; 
v_reuseFailAlloc_6406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6406_, 0, v_a_6403_);
v___x_6405_ = v_reuseFailAlloc_6406_;
goto v_reusejp_6404_;
}
v_reusejp_6404_:
{
v_val_6395_ = v___x_6405_;
goto v___jp_6394_;
}
}
v___jp_6394_:
{
lean_object* v___x_6396_; lean_object* v___x_6397_; 
v___x_6396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6396_, 0, v_val_6395_);
v___x_6397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6392_, v___x_6393_, v___x_6396_, v___f_6390_);
return v___x_6397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6408_, lean_object* v_x_6409_, lean_object* v___y_6410_){
_start:
{
lean_object* v_res_6411_; 
v_res_6411_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6408_, v_x_6409_);
return v_res_6411_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6412_){
_start:
{
lean_object* v___f_6414_; lean_object* v___x_6415_; uint8_t v___x_6416_; lean_object* v_val_6418_; lean_object* v___x_6421_; 
v___f_6414_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6414_, 0, v_req_6412_);
v___x_6415_ = lean_unsigned_to_nat(0u);
v___x_6416_ = 0;
v___x_6421_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6421_) == 0)
{
lean_object* v_a_6422_; lean_object* v___x_6424_; uint8_t v_isShared_6425_; uint8_t v_isSharedCheck_6429_; 
v_a_6422_ = lean_ctor_get(v___x_6421_, 0);
v_isSharedCheck_6429_ = !lean_is_exclusive(v___x_6421_);
if (v_isSharedCheck_6429_ == 0)
{
v___x_6424_ = v___x_6421_;
v_isShared_6425_ = v_isSharedCheck_6429_;
goto v_resetjp_6423_;
}
else
{
lean_inc(v_a_6422_);
lean_dec(v___x_6421_);
v___x_6424_ = lean_box(0);
v_isShared_6425_ = v_isSharedCheck_6429_;
goto v_resetjp_6423_;
}
v_resetjp_6423_:
{
lean_object* v___x_6427_; 
if (v_isShared_6425_ == 0)
{
lean_ctor_set_tag(v___x_6424_, 1);
v___x_6427_ = v___x_6424_;
goto v_reusejp_6426_;
}
else
{
lean_object* v_reuseFailAlloc_6428_; 
v_reuseFailAlloc_6428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6428_, 0, v_a_6422_);
v___x_6427_ = v_reuseFailAlloc_6428_;
goto v_reusejp_6426_;
}
v_reusejp_6426_:
{
v_val_6418_ = v___x_6427_;
goto v___jp_6417_;
}
}
}
else
{
lean_object* v_a_6430_; lean_object* v___x_6432_; uint8_t v_isShared_6433_; uint8_t v_isSharedCheck_6437_; 
v_a_6430_ = lean_ctor_get(v___x_6421_, 0);
v_isSharedCheck_6437_ = !lean_is_exclusive(v___x_6421_);
if (v_isSharedCheck_6437_ == 0)
{
v___x_6432_ = v___x_6421_;
v_isShared_6433_ = v_isSharedCheck_6437_;
goto v_resetjp_6431_;
}
else
{
lean_inc(v_a_6430_);
lean_dec(v___x_6421_);
v___x_6432_ = lean_box(0);
v_isShared_6433_ = v_isSharedCheck_6437_;
goto v_resetjp_6431_;
}
v_resetjp_6431_:
{
lean_object* v___x_6435_; 
if (v_isShared_6433_ == 0)
{
lean_ctor_set_tag(v___x_6432_, 0);
v___x_6435_ = v___x_6432_;
goto v_reusejp_6434_;
}
else
{
lean_object* v_reuseFailAlloc_6436_; 
v_reuseFailAlloc_6436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6436_, 0, v_a_6430_);
v___x_6435_ = v_reuseFailAlloc_6436_;
goto v_reusejp_6434_;
}
v_reusejp_6434_:
{
v_val_6418_ = v___x_6435_;
goto v___jp_6417_;
}
}
}
v___jp_6417_:
{
lean_object* v___x_6419_; lean_object* v___x_6420_; 
v___x_6419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6419_, 0, v_val_6418_);
v___x_6420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6415_, v___x_6416_, v___x_6419_, v___f_6414_);
return v___x_6420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6438_, lean_object* v_a_6439_){
_start:
{
lean_object* v_res_6440_; 
v_res_6440_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6438_);
return v_res_6440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6441_){
_start:
{
if (lean_obj_tag(v_x_6441_) == 0)
{
lean_object* v_a_6443_; lean_object* v___x_6445_; uint8_t v_isShared_6446_; uint8_t v_isSharedCheck_6451_; 
v_a_6443_ = lean_ctor_get(v_x_6441_, 0);
v_isSharedCheck_6451_ = !lean_is_exclusive(v_x_6441_);
if (v_isSharedCheck_6451_ == 0)
{
v___x_6445_ = v_x_6441_;
v_isShared_6446_ = v_isSharedCheck_6451_;
goto v_resetjp_6444_;
}
else
{
lean_inc(v_a_6443_);
lean_dec(v_x_6441_);
v___x_6445_ = lean_box(0);
v_isShared_6446_ = v_isSharedCheck_6451_;
goto v_resetjp_6444_;
}
v_resetjp_6444_:
{
lean_object* v___x_6448_; 
if (v_isShared_6446_ == 0)
{
v___x_6448_ = v___x_6445_;
goto v_reusejp_6447_;
}
else
{
lean_object* v_reuseFailAlloc_6450_; 
v_reuseFailAlloc_6450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6450_, 0, v_a_6443_);
v___x_6448_ = v_reuseFailAlloc_6450_;
goto v_reusejp_6447_;
}
v_reusejp_6447_:
{
lean_object* v___x_6449_; 
v___x_6449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6449_, 0, v___x_6448_);
return v___x_6449_;
}
}
}
else
{
lean_object* v_a_6452_; lean_object* v___x_6453_; 
v_a_6452_ = lean_ctor_get(v_x_6441_, 0);
lean_inc(v_a_6452_);
lean_dec_ref_known(v_x_6441_, 1);
v___x_6453_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6452_);
lean_dec(v_a_6452_);
if (lean_obj_tag(v___x_6453_) == 0)
{
lean_object* v_a_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6463_; 
v_a_6454_ = lean_ctor_get(v___x_6453_, 0);
v_isSharedCheck_6463_ = !lean_is_exclusive(v___x_6453_);
if (v_isSharedCheck_6463_ == 0)
{
v___x_6456_ = v___x_6453_;
v_isShared_6457_ = v_isSharedCheck_6463_;
goto v_resetjp_6455_;
}
else
{
lean_inc(v_a_6454_);
lean_dec(v___x_6453_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6463_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v___x_6458_; lean_object* v___x_6460_; 
v___x_6458_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6458_, 0, v_a_6454_);
if (v_isShared_6457_ == 0)
{
lean_ctor_set(v___x_6456_, 0, v___x_6458_);
v___x_6460_ = v___x_6456_;
goto v_reusejp_6459_;
}
else
{
lean_object* v_reuseFailAlloc_6462_; 
v_reuseFailAlloc_6462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6462_, 0, v___x_6458_);
v___x_6460_ = v_reuseFailAlloc_6462_;
goto v_reusejp_6459_;
}
v_reusejp_6459_:
{
lean_object* v___x_6461_; 
v___x_6461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6461_, 0, v___x_6460_);
return v___x_6461_;
}
}
}
else
{
lean_object* v_a_6464_; lean_object* v___x_6466_; uint8_t v_isShared_6467_; uint8_t v_isSharedCheck_6472_; 
v_a_6464_ = lean_ctor_get(v___x_6453_, 0);
v_isSharedCheck_6472_ = !lean_is_exclusive(v___x_6453_);
if (v_isSharedCheck_6472_ == 0)
{
v___x_6466_ = v___x_6453_;
v_isShared_6467_ = v_isSharedCheck_6472_;
goto v_resetjp_6465_;
}
else
{
lean_inc(v_a_6464_);
lean_dec(v___x_6453_);
v___x_6466_ = lean_box(0);
v_isShared_6467_ = v_isSharedCheck_6472_;
goto v_resetjp_6465_;
}
v_resetjp_6465_:
{
lean_object* v___x_6469_; 
if (v_isShared_6467_ == 0)
{
v___x_6469_ = v___x_6466_;
goto v_reusejp_6468_;
}
else
{
lean_object* v_reuseFailAlloc_6471_; 
v_reuseFailAlloc_6471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6471_, 0, v_a_6464_);
v___x_6469_ = v_reuseFailAlloc_6471_;
goto v_reusejp_6468_;
}
v_reusejp_6468_:
{
lean_object* v___x_6470_; 
v___x_6470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6470_, 0, v___x_6469_);
return v___x_6470_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6473_, lean_object* v___y_6474_){
_start:
{
lean_object* v_res_6475_; 
v_res_6475_ = l_Lasm_Fetch_fetch___lam__0(v_x_6473_);
return v_res_6475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6481_){
_start:
{
if (lean_obj_tag(v_x_6481_) == 0)
{
lean_object* v___x_6482_; 
v___x_6482_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6482_;
}
else
{
lean_object* v_val_6483_; 
v_val_6483_ = lean_ctor_get(v_x_6481_, 0);
lean_inc(v_val_6483_);
return v_val_6483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6484_){
_start:
{
lean_object* v_res_6485_; 
v_res_6485_ = l_Lasm_Fetch_fetch___lam__1(v_x_6484_);
lean_dec(v_x_6484_);
return v_res_6485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6486_, lean_object* v___f_6487_, uint8_t v___x_6488_, lean_object* v___f_6489_, lean_object* v_x_6490_){
_start:
{
if (lean_obj_tag(v_x_6490_) == 0)
{
lean_object* v_a_6492_; lean_object* v___x_6494_; uint8_t v_isShared_6495_; uint8_t v_isSharedCheck_6500_; 
lean_dec_ref(v___f_6489_);
lean_dec_ref(v___f_6487_);
v_a_6492_ = lean_ctor_get(v_x_6490_, 0);
v_isSharedCheck_6500_ = !lean_is_exclusive(v_x_6490_);
if (v_isSharedCheck_6500_ == 0)
{
v___x_6494_ = v_x_6490_;
v_isShared_6495_ = v_isSharedCheck_6500_;
goto v_resetjp_6493_;
}
else
{
lean_inc(v_a_6492_);
lean_dec(v_x_6490_);
v___x_6494_ = lean_box(0);
v_isShared_6495_ = v_isSharedCheck_6500_;
goto v_resetjp_6493_;
}
v_resetjp_6493_:
{
lean_object* v___x_6497_; 
if (v_isShared_6495_ == 0)
{
v___x_6497_ = v___x_6494_;
goto v_reusejp_6496_;
}
else
{
lean_object* v_reuseFailAlloc_6499_; 
v_reuseFailAlloc_6499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6499_, 0, v_a_6492_);
v___x_6497_ = v_reuseFailAlloc_6499_;
goto v_reusejp_6496_;
}
v_reusejp_6496_:
{
lean_object* v___x_6498_; 
v___x_6498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6498_, 0, v___x_6497_);
return v___x_6498_;
}
}
}
else
{
lean_object* v___x_6501_; lean_object* v___x_6502_; uint8_t v___x_6503_; lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; 
lean_dec_ref_known(v_x_6490_, 1);
v___x_6501_ = lean_io_promise_result_opt(v_a_6486_);
v___x_6502_ = lean_unsigned_to_nat(0u);
v___x_6503_ = 1;
v___x_6504_ = lean_task_map(v___f_6487_, v___x_6501_, v___x_6502_, v___x_6503_);
v___x_6505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6505_, 0, v___x_6504_);
v___x_6506_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6502_, v___x_6488_, v___x_6505_, v___f_6489_);
return v___x_6506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6507_, lean_object* v___f_6508_, lean_object* v___x_6509_, lean_object* v___f_6510_, lean_object* v_x_6511_, lean_object* v___y_6512_){
_start:
{
uint8_t v___x_1064__boxed_6513_; lean_object* v_res_6514_; 
v___x_1064__boxed_6513_ = lean_unbox(v___x_6509_);
v_res_6514_ = l_Lasm_Fetch_fetch___lam__2(v_a_6507_, v___f_6508_, v___x_1064__boxed_6513_, v___f_6510_, v_x_6511_);
lean_dec(v_a_6507_);
return v_res_6514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6515_, lean_object* v___f_6516_, uint8_t v___x_6517_, lean_object* v___f_6518_, lean_object* v_options_6519_, lean_object* v_x_6520_){
_start:
{
if (lean_obj_tag(v_x_6520_) == 0)
{
lean_object* v_a_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6530_; 
lean_dec_ref(v___f_6518_);
lean_dec_ref(v___f_6516_);
v_a_6522_ = lean_ctor_get(v_x_6520_, 0);
v_isSharedCheck_6530_ = !lean_is_exclusive(v_x_6520_);
if (v_isSharedCheck_6530_ == 0)
{
v___x_6524_ = v_x_6520_;
v_isShared_6525_ = v_isSharedCheck_6530_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_a_6522_);
lean_dec(v_x_6520_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6530_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v___x_6527_; 
if (v_isShared_6525_ == 0)
{
v___x_6527_ = v___x_6524_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6529_; 
v_reuseFailAlloc_6529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6529_, 0, v_a_6522_);
v___x_6527_ = v_reuseFailAlloc_6529_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
lean_object* v___x_6528_; 
v___x_6528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6528_, 0, v___x_6527_);
return v___x_6528_;
}
}
}
else
{
lean_object* v_a_6531_; lean_object* v___x_6533_; uint8_t v_isShared_6534_; uint8_t v_isSharedCheck_6561_; 
v_a_6531_ = lean_ctor_get(v_x_6520_, 0);
v_isSharedCheck_6561_ = !lean_is_exclusive(v_x_6520_);
if (v_isSharedCheck_6561_ == 0)
{
v___x_6533_ = v_x_6520_;
v_isShared_6534_ = v_isSharedCheck_6561_;
goto v_resetjp_6532_;
}
else
{
lean_inc(v_a_6531_);
lean_dec(v_x_6520_);
v___x_6533_ = lean_box(0);
v_isShared_6534_ = v_isSharedCheck_6561_;
goto v_resetjp_6532_;
}
v_resetjp_6532_:
{
lean_object* v_method_6535_; lean_object* v_url_6536_; lean_object* v_headers_6537_; lean_object* v_body_6538_; lean_object* v___x_6539_; lean_object* v___f_6540_; lean_object* v___y_6542_; uint8_t v___y_6543_; lean_object* v_val_6544_; lean_object* v___y_6548_; 
v_method_6535_ = lean_ctor_get(v_req_6515_, 0);
v_url_6536_ = lean_ctor_get(v_req_6515_, 1);
v_headers_6537_ = lean_ctor_get(v_req_6515_, 2);
v_body_6538_ = lean_ctor_get(v_req_6515_, 3);
v___x_6539_ = lean_box(v___x_6517_);
lean_inc(v_a_6531_);
v___f_6540_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6540_, 0, v_a_6531_);
lean_closure_set(v___f_6540_, 1, v___f_6516_);
lean_closure_set(v___f_6540_, 2, v___x_6539_);
lean_closure_set(v___f_6540_, 3, v___f_6518_);
if (lean_obj_tag(v_options_6519_) == 0)
{
lean_object* v___x_6559_; 
v___x_6559_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6548_ = v___x_6559_;
goto v___jp_6547_;
}
else
{
lean_object* v_val_6560_; 
v_val_6560_ = lean_ctor_get(v_options_6519_, 0);
v___y_6548_ = v_val_6560_;
goto v___jp_6547_;
}
v___jp_6541_:
{
lean_object* v___x_6545_; lean_object* v___x_6546_; 
v___x_6545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6545_, 0, v_val_6544_);
v___x_6546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6542_, v___y_6543_, v___x_6545_, v___f_6540_);
return v___x_6546_;
}
v___jp_6547_:
{
lean_object* v___x_6549_; lean_object* v___x_6550_; 
v___x_6549_ = lean_unsigned_to_nat(0u);
v___x_6550_ = lasm_fetch_send(v_a_6531_, v_method_6535_, v_url_6536_, v_headers_6537_, v_body_6538_, v___y_6548_);
lean_dec(v_a_6531_);
if (lean_obj_tag(v___x_6550_) == 0)
{
lean_object* v_a_6551_; lean_object* v___x_6553_; 
v_a_6551_ = lean_ctor_get(v___x_6550_, 0);
lean_inc(v_a_6551_);
lean_dec_ref_known(v___x_6550_, 1);
if (v_isShared_6534_ == 0)
{
lean_ctor_set(v___x_6533_, 0, v_a_6551_);
v___x_6553_ = v___x_6533_;
goto v_reusejp_6552_;
}
else
{
lean_object* v_reuseFailAlloc_6554_; 
v_reuseFailAlloc_6554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6554_, 0, v_a_6551_);
v___x_6553_ = v_reuseFailAlloc_6554_;
goto v_reusejp_6552_;
}
v_reusejp_6552_:
{
v___y_6542_ = v___x_6549_;
v___y_6543_ = v___x_6517_;
v_val_6544_ = v___x_6553_;
goto v___jp_6541_;
}
}
else
{
lean_object* v_a_6555_; lean_object* v___x_6557_; 
v_a_6555_ = lean_ctor_get(v___x_6550_, 0);
lean_inc(v_a_6555_);
lean_dec_ref_known(v___x_6550_, 1);
if (v_isShared_6534_ == 0)
{
lean_ctor_set_tag(v___x_6533_, 0);
lean_ctor_set(v___x_6533_, 0, v_a_6555_);
v___x_6557_ = v___x_6533_;
goto v_reusejp_6556_;
}
else
{
lean_object* v_reuseFailAlloc_6558_; 
v_reuseFailAlloc_6558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6558_, 0, v_a_6555_);
v___x_6557_ = v_reuseFailAlloc_6558_;
goto v_reusejp_6556_;
}
v_reusejp_6556_:
{
v___y_6542_ = v___x_6549_;
v___y_6543_ = v___x_6517_;
v_val_6544_ = v___x_6557_;
goto v___jp_6541_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6562_, lean_object* v___f_6563_, lean_object* v___x_6564_, lean_object* v___f_6565_, lean_object* v_options_6566_, lean_object* v_x_6567_, lean_object* v___y_6568_){
_start:
{
uint8_t v___x_1113__boxed_6569_; lean_object* v_res_6570_; 
v___x_1113__boxed_6569_ = lean_unbox(v___x_6564_);
v_res_6570_ = l_Lasm_Fetch_fetch___lam__3(v_req_6562_, v___f_6563_, v___x_1113__boxed_6569_, v___f_6565_, v_options_6566_, v_x_6567_);
lean_dec(v_options_6566_);
lean_dec_ref(v_req_6562_);
return v_res_6570_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6571_; uint32_t v___x_6572_; 
v___x_6571_ = lean_box(0);
v___x_6572_ = lasm_fetch_platform(v___x_6571_);
return v___x_6572_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6573_; uint32_t v___x_6574_; uint8_t v___x_6575_; 
v___x_6573_ = 0;
v___x_6574_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6575_ = lean_uint32_dec_eq(v___x_6574_, v___x_6573_);
return v___x_6575_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6578_; uint32_t v___x_6579_; uint8_t v___x_6580_; 
v___x_6578_ = 2;
v___x_6579_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6580_ = lean_uint32_dec_eq(v___x_6579_, v___x_6578_);
return v___x_6580_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6581_; uint32_t v___x_6582_; uint8_t v___x_6583_; 
v___x_6581_ = 4;
v___x_6582_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6583_ = lean_uint32_dec_eq(v___x_6582_, v___x_6581_);
return v___x_6583_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6584_; uint32_t v___x_6585_; uint8_t v___x_6586_; 
v___x_6584_ = 1;
v___x_6585_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6586_ = lean_uint32_dec_eq(v___x_6585_, v___x_6584_);
return v___x_6586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6601_, lean_object* v_options_6602_){
_start:
{
uint8_t v___x_6604_; 
v___x_6604_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6604_ == 0)
{
lean_object* v___f_6605_; lean_object* v___f_6606_; lean_object* v___x_6607_; lean_object* v___f_6608_; uint8_t v___x_6615_; 
v___f_6605_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6606_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6607_ = lean_box(v___x_6604_);
v___f_6608_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6608_, 0, v_req_6601_);
lean_closure_set(v___f_6608_, 1, v___f_6606_);
lean_closure_set(v___f_6608_, 2, v___x_6607_);
lean_closure_set(v___f_6608_, 3, v___f_6605_);
lean_closure_set(v___f_6608_, 4, v_options_6602_);
v___x_6615_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6615_ == 0)
{
uint8_t v___x_6616_; 
v___x_6616_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6616_ == 0)
{
uint8_t v___x_6617_; 
lean_dec_ref(v___f_6608_);
v___x_6617_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6617_ == 0)
{
lean_object* v___x_6618_; 
v___x_6618_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6618_;
}
else
{
lean_object* v___x_6619_; 
v___x_6619_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6619_;
}
}
else
{
goto v___jp_6609_;
}
}
else
{
goto v___jp_6609_;
}
v___jp_6609_:
{
lean_object* v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; lean_object* v___x_6613_; lean_object* v___x_6614_; 
v___x_6610_ = lean_unsigned_to_nat(0u);
v___x_6611_ = lean_io_promise_new();
v___x_6612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6612_, 0, v___x_6611_);
v___x_6613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6613_, 0, v___x_6612_);
v___x_6614_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6610_, v___x_6604_, v___x_6613_, v___f_6608_);
return v___x_6614_;
}
}
else
{
lean_object* v___x_6620_; 
lean_dec(v_options_6602_);
v___x_6620_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6601_);
return v___x_6620_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6621_, lean_object* v_options_6622_, lean_object* v_a_6623_){
_start:
{
lean_object* v_res_6624_; 
v_res_6624_ = l_Lasm_Fetch_fetch(v_req_6621_, v_options_6622_);
return v_res_6624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6625_, lean_object* v_headers_6626_, lean_object* v_options_6627_){
_start:
{
lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v___f_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; 
v___x_6629_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6630_ = l_ByteArray_empty;
v___f_6631_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6632_, 0, v___x_6629_);
lean_ctor_set(v___x_6632_, 1, v_url_6625_);
lean_ctor_set(v___x_6632_, 2, v_headers_6626_);
lean_ctor_set(v___x_6632_, 3, v___x_6630_);
lean_ctor_set(v___x_6632_, 4, v___f_6631_);
v___x_6633_ = l_Lasm_Fetch_fetch(v___x_6632_, v_options_6627_);
return v___x_6633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6634_, lean_object* v_headers_6635_, lean_object* v_options_6636_, lean_object* v_a_6637_){
_start:
{
lean_object* v_res_6638_; 
v_res_6638_ = l_Lasm_Fetch_get(v_url_6634_, v_headers_6635_, v_options_6636_);
return v_res_6638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6640_, lean_object* v_body_6641_, lean_object* v_contentType_6642_, lean_object* v_headers_6643_, lean_object* v_options_6644_){
_start:
{
lean_object* v___x_6646_; lean_object* v___x_6647_; lean_object* v___x_6648_; lean_object* v___x_6649_; lean_object* v___x_6650_; lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___f_6653_; lean_object* v___x_6654_; lean_object* v___x_6655_; 
v___x_6646_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6647_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6648_, 0, v___x_6647_);
lean_ctor_set(v___x_6648_, 1, v_contentType_6642_);
v___x_6649_ = lean_unsigned_to_nat(1u);
v___x_6650_ = lean_mk_empty_array_with_capacity(v___x_6649_);
v___x_6651_ = lean_array_push(v___x_6650_, v___x_6648_);
v___x_6652_ = l_Array_append___redArg(v___x_6651_, v_headers_6643_);
v___f_6653_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6654_, 0, v___x_6646_);
lean_ctor_set(v___x_6654_, 1, v_url_6640_);
lean_ctor_set(v___x_6654_, 2, v___x_6652_);
lean_ctor_set(v___x_6654_, 3, v_body_6641_);
lean_ctor_set(v___x_6654_, 4, v___f_6653_);
v___x_6655_ = l_Lasm_Fetch_fetch(v___x_6654_, v_options_6644_);
return v___x_6655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6656_, lean_object* v_body_6657_, lean_object* v_contentType_6658_, lean_object* v_headers_6659_, lean_object* v_options_6660_, lean_object* v_a_6661_){
_start:
{
lean_object* v_res_6662_; 
v_res_6662_ = l_Lasm_Fetch_post(v_url_6656_, v_body_6657_, v_contentType_6658_, v_headers_6659_, v_options_6660_);
lean_dec_ref(v_headers_6659_);
return v_res_6662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6663_){
_start:
{
lean_object* v_body_6664_; uint8_t v___x_6665_; 
v_body_6664_ = lean_ctor_get(v_r_6663_, 1);
lean_inc_ref(v_body_6664_);
lean_dec_ref(v_r_6663_);
v___x_6665_ = lean_string_validate_utf8(v_body_6664_);
if (v___x_6665_ == 0)
{
lean_object* v___x_6666_; 
lean_dec_ref(v_body_6664_);
v___x_6666_ = lean_box(0);
return v___x_6666_;
}
else
{
lean_object* v___x_6667_; lean_object* v___x_6668_; 
v___x_6667_ = lean_string_from_utf8_unchecked(v_body_6664_);
v___x_6668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6668_, 0, v___x_6667_);
return v___x_6668_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6669_, lean_object* v_name_6670_){
_start:
{
lean_object* v_headers_6671_; lean_object* v_n_6672_; lean_object* v___x_6673_; lean_object* v___x_6674_; size_t v_sz_6675_; size_t v___x_6676_; lean_object* v___x_6677_; lean_object* v_fst_6678_; 
v_headers_6671_ = lean_ctor_get(v_r_6669_, 0);
v_n_6672_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6670_);
v___x_6673_ = lean_box(0);
v___x_6674_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6675_ = lean_array_size(v_headers_6671_);
v___x_6676_ = ((size_t)0ULL);
v___x_6677_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6672_, v_headers_6671_, v_sz_6675_, v___x_6676_, v___x_6674_);
lean_dec_ref(v_n_6672_);
v_fst_6678_ = lean_ctor_get(v___x_6677_, 0);
lean_inc(v_fst_6678_);
lean_dec_ref(v___x_6677_);
if (lean_obj_tag(v_fst_6678_) == 0)
{
return v___x_6673_;
}
else
{
lean_object* v_val_6679_; 
v_val_6679_ = lean_ctor_get(v_fst_6678_, 0);
lean_inc(v_val_6679_);
lean_dec_ref_known(v_fst_6678_, 1);
if (lean_obj_tag(v_val_6679_) == 0)
{
return v___x_6673_;
}
else
{
lean_object* v_val_6680_; lean_object* v___x_6682_; uint8_t v_isShared_6683_; uint8_t v_isSharedCheck_6688_; 
v_val_6680_ = lean_ctor_get(v_val_6679_, 0);
v_isSharedCheck_6688_ = !lean_is_exclusive(v_val_6679_);
if (v_isSharedCheck_6688_ == 0)
{
v___x_6682_ = v_val_6679_;
v_isShared_6683_ = v_isSharedCheck_6688_;
goto v_resetjp_6681_;
}
else
{
lean_inc(v_val_6680_);
lean_dec(v_val_6679_);
v___x_6682_ = lean_box(0);
v_isShared_6683_ = v_isSharedCheck_6688_;
goto v_resetjp_6681_;
}
v_resetjp_6681_:
{
lean_object* v_snd_6684_; lean_object* v___x_6686_; 
v_snd_6684_ = lean_ctor_get(v_val_6680_, 1);
lean_inc(v_snd_6684_);
lean_dec(v_val_6680_);
if (v_isShared_6683_ == 0)
{
lean_ctor_set(v___x_6682_, 0, v_snd_6684_);
v___x_6686_ = v___x_6682_;
goto v_reusejp_6685_;
}
else
{
lean_object* v_reuseFailAlloc_6687_; 
v_reuseFailAlloc_6687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6687_, 0, v_snd_6684_);
v___x_6686_ = v_reuseFailAlloc_6687_;
goto v_reusejp_6685_;
}
v_reusejp_6685_:
{
return v___x_6686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6689_, lean_object* v_name_6690_){
_start:
{
lean_object* v_res_6691_; 
v_res_6691_ = l_Lasm_Fetch_Response_header_x3f(v_r_6689_, v_name_6690_);
lean_dec_ref(v_r_6689_);
return v_res_6691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6692_){
_start:
{
if (lean_obj_tag(v_x_6692_) == 0)
{
lean_object* v_a_6693_; lean_object* v___x_6694_; 
v_a_6693_ = lean_ctor_get(v_x_6692_, 0);
lean_inc(v_a_6693_);
lean_dec_ref_known(v_x_6692_, 1);
v___x_6694_ = lean_task_pure(v_a_6693_);
return v___x_6694_;
}
else
{
lean_object* v_a_6695_; 
v_a_6695_ = lean_ctor_get(v_x_6692_, 0);
lean_inc_ref(v_a_6695_);
lean_dec_ref_known(v_x_6692_, 1);
return v_a_6695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6696_){
_start:
{
if (lean_obj_tag(v_x_6696_) == 0)
{
lean_object* v_a_6697_; lean_object* v___x_6698_; 
v_a_6697_ = lean_ctor_get(v_x_6696_, 0);
lean_inc(v_a_6697_);
lean_dec_ref_known(v_x_6696_, 1);
v___x_6698_ = lean_task_pure(v_a_6697_);
return v___x_6698_;
}
else
{
lean_object* v_a_6699_; 
v_a_6699_ = lean_ctor_get(v_x_6696_, 0);
lean_inc_ref(v_a_6699_);
lean_dec_ref_known(v_x_6696_, 1);
return v_a_6699_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6700_){
_start:
{
lean_object* v_val_6703_; lean_object* v___x_6705_; 
v___x_6705_ = lasm_fetch_write(v_chunk_6700_);
if (lean_obj_tag(v___x_6705_) == 0)
{
lean_object* v_a_6706_; lean_object* v___x_6708_; uint8_t v_isShared_6709_; uint8_t v_isSharedCheck_6713_; 
v_a_6706_ = lean_ctor_get(v___x_6705_, 0);
v_isSharedCheck_6713_ = !lean_is_exclusive(v___x_6705_);
if (v_isSharedCheck_6713_ == 0)
{
v___x_6708_ = v___x_6705_;
v_isShared_6709_ = v_isSharedCheck_6713_;
goto v_resetjp_6707_;
}
else
{
lean_inc(v_a_6706_);
lean_dec(v___x_6705_);
v___x_6708_ = lean_box(0);
v_isShared_6709_ = v_isSharedCheck_6713_;
goto v_resetjp_6707_;
}
v_resetjp_6707_:
{
lean_object* v___x_6711_; 
if (v_isShared_6709_ == 0)
{
lean_ctor_set_tag(v___x_6708_, 1);
v___x_6711_ = v___x_6708_;
goto v_reusejp_6710_;
}
else
{
lean_object* v_reuseFailAlloc_6712_; 
v_reuseFailAlloc_6712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6712_, 0, v_a_6706_);
v___x_6711_ = v_reuseFailAlloc_6712_;
goto v_reusejp_6710_;
}
v_reusejp_6710_:
{
v_val_6703_ = v___x_6711_;
goto v___jp_6702_;
}
}
}
else
{
lean_object* v_a_6714_; lean_object* v___x_6716_; uint8_t v_isShared_6717_; uint8_t v_isSharedCheck_6721_; 
v_a_6714_ = lean_ctor_get(v___x_6705_, 0);
v_isSharedCheck_6721_ = !lean_is_exclusive(v___x_6705_);
if (v_isSharedCheck_6721_ == 0)
{
v___x_6716_ = v___x_6705_;
v_isShared_6717_ = v_isSharedCheck_6721_;
goto v_resetjp_6715_;
}
else
{
lean_inc(v_a_6714_);
lean_dec(v___x_6705_);
v___x_6716_ = lean_box(0);
v_isShared_6717_ = v_isSharedCheck_6721_;
goto v_resetjp_6715_;
}
v_resetjp_6715_:
{
lean_object* v___x_6719_; 
if (v_isShared_6717_ == 0)
{
lean_ctor_set_tag(v___x_6716_, 0);
v___x_6719_ = v___x_6716_;
goto v_reusejp_6718_;
}
else
{
lean_object* v_reuseFailAlloc_6720_; 
v_reuseFailAlloc_6720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6720_, 0, v_a_6714_);
v___x_6719_ = v_reuseFailAlloc_6720_;
goto v_reusejp_6718_;
}
v_reusejp_6718_:
{
v_val_6703_ = v___x_6719_;
goto v___jp_6702_;
}
}
}
v___jp_6702_:
{
lean_object* v___x_6704_; 
v___x_6704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6704_, 0, v_val_6703_);
return v___x_6704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6722_, lean_object* v___y_6723_){
_start:
{
lean_object* v_res_6724_; 
v_res_6724_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6722_);
lean_dec_ref(v_chunk_6722_);
return v_res_6724_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6725_){
_start:
{
if (lean_obj_tag(v_x_6725_) == 0)
{
lean_object* v_a_6726_; lean_object* v___x_6727_; 
v_a_6726_ = lean_ctor_get(v_x_6725_, 0);
lean_inc(v_a_6726_);
lean_dec_ref_known(v_x_6725_, 1);
v___x_6727_ = lean_task_pure(v_a_6726_);
return v___x_6727_;
}
else
{
lean_object* v_a_6728_; 
v_a_6728_ = lean_ctor_get(v_x_6725_, 0);
lean_inc_ref(v_a_6728_);
lean_dec_ref_known(v_x_6725_, 1);
return v_a_6728_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6729_){
_start:
{
lean_object* v___y_6732_; 
if (lean_obj_tag(v_x_6729_) == 0)
{
lean_object* v_a_6735_; lean_object* v___x_6737_; uint8_t v_isShared_6738_; uint8_t v_isSharedCheck_6743_; 
v_a_6735_ = lean_ctor_get(v_x_6729_, 0);
v_isSharedCheck_6743_ = !lean_is_exclusive(v_x_6729_);
if (v_isSharedCheck_6743_ == 0)
{
v___x_6737_ = v_x_6729_;
v_isShared_6738_ = v_isSharedCheck_6743_;
goto v_resetjp_6736_;
}
else
{
lean_inc(v_a_6735_);
lean_dec(v_x_6729_);
v___x_6737_ = lean_box(0);
v_isShared_6738_ = v_isSharedCheck_6743_;
goto v_resetjp_6736_;
}
v_resetjp_6736_:
{
lean_object* v___x_6740_; 
if (v_isShared_6738_ == 0)
{
v___x_6740_ = v___x_6737_;
goto v_reusejp_6739_;
}
else
{
lean_object* v_reuseFailAlloc_6742_; 
v_reuseFailAlloc_6742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6742_, 0, v_a_6735_);
v___x_6740_ = v_reuseFailAlloc_6742_;
goto v_reusejp_6739_;
}
v_reusejp_6739_:
{
lean_object* v___x_6741_; 
v___x_6741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6741_, 0, v___x_6740_);
return v___x_6741_;
}
}
}
else
{
lean_object* v_a_6744_; uint8_t v___x_6745_; 
v_a_6744_ = lean_ctor_get(v_x_6729_, 0);
lean_inc(v_a_6744_);
lean_dec_ref_known(v_x_6729_, 1);
v___x_6745_ = l_ByteArray_isEmpty(v_a_6744_);
if (v___x_6745_ == 0)
{
lean_object* v___x_6746_; 
v___x_6746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6746_, 0, v_a_6744_);
v___y_6732_ = v___x_6746_;
goto v___jp_6731_;
}
else
{
lean_object* v___x_6747_; 
lean_dec(v_a_6744_);
v___x_6747_ = lean_box(0);
v___y_6732_ = v___x_6747_;
goto v___jp_6731_;
}
}
v___jp_6731_:
{
lean_object* v___x_6733_; lean_object* v___x_6734_; 
v___x_6733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6733_, 0, v___y_6732_);
v___x_6734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6734_, 0, v___x_6733_);
return v___x_6734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6748_, lean_object* v___y_6749_){
_start:
{
lean_object* v_res_6750_; 
v_res_6750_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6748_);
return v_res_6750_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6751_, uint32_t v___x_6752_){
_start:
{
lean_object* v___x_6754_; uint8_t v___x_6755_; lean_object* v_val_6757_; lean_object* v___x_6760_; 
v___x_6754_ = lean_unsigned_to_nat(0u);
v___x_6755_ = 0;
v___x_6760_ = lasm_fetch_read(v___x_6752_);
if (lean_obj_tag(v___x_6760_) == 0)
{
lean_object* v_a_6761_; lean_object* v___x_6763_; uint8_t v_isShared_6764_; uint8_t v_isSharedCheck_6768_; 
v_a_6761_ = lean_ctor_get(v___x_6760_, 0);
v_isSharedCheck_6768_ = !lean_is_exclusive(v___x_6760_);
if (v_isSharedCheck_6768_ == 0)
{
v___x_6763_ = v___x_6760_;
v_isShared_6764_ = v_isSharedCheck_6768_;
goto v_resetjp_6762_;
}
else
{
lean_inc(v_a_6761_);
lean_dec(v___x_6760_);
v___x_6763_ = lean_box(0);
v_isShared_6764_ = v_isSharedCheck_6768_;
goto v_resetjp_6762_;
}
v_resetjp_6762_:
{
lean_object* v___x_6766_; 
if (v_isShared_6764_ == 0)
{
lean_ctor_set_tag(v___x_6763_, 1);
v___x_6766_ = v___x_6763_;
goto v_reusejp_6765_;
}
else
{
lean_object* v_reuseFailAlloc_6767_; 
v_reuseFailAlloc_6767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6767_, 0, v_a_6761_);
v___x_6766_ = v_reuseFailAlloc_6767_;
goto v_reusejp_6765_;
}
v_reusejp_6765_:
{
v_val_6757_ = v___x_6766_;
goto v___jp_6756_;
}
}
}
else
{
lean_object* v_a_6769_; lean_object* v___x_6771_; uint8_t v_isShared_6772_; uint8_t v_isSharedCheck_6776_; 
v_a_6769_ = lean_ctor_get(v___x_6760_, 0);
v_isSharedCheck_6776_ = !lean_is_exclusive(v___x_6760_);
if (v_isSharedCheck_6776_ == 0)
{
v___x_6771_ = v___x_6760_;
v_isShared_6772_ = v_isSharedCheck_6776_;
goto v_resetjp_6770_;
}
else
{
lean_inc(v_a_6769_);
lean_dec(v___x_6760_);
v___x_6771_ = lean_box(0);
v_isShared_6772_ = v_isSharedCheck_6776_;
goto v_resetjp_6770_;
}
v_resetjp_6770_:
{
lean_object* v___x_6774_; 
if (v_isShared_6772_ == 0)
{
lean_ctor_set_tag(v___x_6771_, 0);
v___x_6774_ = v___x_6771_;
goto v_reusejp_6773_;
}
else
{
lean_object* v_reuseFailAlloc_6775_; 
v_reuseFailAlloc_6775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6775_, 0, v_a_6769_);
v___x_6774_ = v_reuseFailAlloc_6775_;
goto v_reusejp_6773_;
}
v_reusejp_6773_:
{
v_val_6757_ = v___x_6774_;
goto v___jp_6756_;
}
}
}
v___jp_6756_:
{
lean_object* v___x_6758_; lean_object* v___x_6759_; 
v___x_6758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6758_, 0, v_val_6757_);
v___x_6759_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6754_, v___x_6755_, v___x_6758_, v___f_6751_);
return v___x_6759_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6777_, lean_object* v___x_6778_, lean_object* v___y_6779_){
_start:
{
uint32_t v___x_2044__boxed_6780_; lean_object* v_res_6781_; 
v___x_2044__boxed_6780_ = lean_unbox_uint32(v___x_6778_);
lean_dec(v___x_6778_);
v_res_6781_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6777_, v___x_2044__boxed_6780_);
return v_res_6781_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6782_, lean_object* v_req_6783_){
_start:
{
lean_object* v___x_6785_; 
v___x_6785_ = l_Lasm_Fetch_respond(v_handler_6782_, v_req_6783_);
return v___x_6785_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6786_, lean_object* v_req_6787_, lean_object* v___y_6788_){
_start:
{
lean_object* v_res_6789_; 
v_res_6789_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6786_, v_req_6787_);
return v_res_6789_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6790_, lean_object* v___f_6791_){
_start:
{
lean_object* v___x_6793_; 
v___x_6793_ = lean_apply_2(v_val_6790_, v___f_6791_, lean_box(0));
return v___x_6793_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6794_, lean_object* v___f_6795_, lean_object* v___y_6796_){
_start:
{
lean_object* v_res_6797_; 
v_res_6797_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6794_, v___f_6795_);
return v_res_6797_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6798_){
_start:
{
lean_object* v___x_6800_; 
v___x_6800_ = l_Lasm_Fetch_Request_readAll(v___x_6798_);
return v___x_6800_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6801_, lean_object* v___y_6802_){
_start:
{
lean_object* v_res_6803_; 
v_res_6803_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6801_);
return v_res_6803_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6809_; lean_object* v___x_6810_; 
v___x_6809_ = 65536;
v___x_6810_ = lean_box_uint32(v___x_6809_);
return v___x_6810_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6811_; lean_object* v___x_6812_; lean_object* v___f_6813_; 
v___f_6811_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6812_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6813_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6813_, 0, v___f_6811_);
lean_closure_set(v___f_6813_, 1, v___x_6812_);
return v___f_6813_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6814_, lean_object* v_options_6815_){
_start:
{
lean_object* v___f_6817_; lean_object* v___f_6818_; lean_object* v___f_6819_; lean_object* v___f_6820_; lean_object* v___x_6821_; 
v___f_6817_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6818_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6819_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6820_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6821_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6821_) == 0)
{
lean_object* v_a_6822_; lean_object* v___x_6824_; uint8_t v_isShared_6825_; uint8_t v_isSharedCheck_6892_; 
v_a_6822_ = lean_ctor_get(v___x_6821_, 0);
v_isSharedCheck_6892_ = !lean_is_exclusive(v___x_6821_);
if (v_isSharedCheck_6892_ == 0)
{
v___x_6824_ = v___x_6821_;
v_isShared_6825_ = v_isSharedCheck_6892_;
goto v_resetjp_6823_;
}
else
{
lean_inc(v_a_6822_);
lean_dec(v___x_6821_);
v___x_6824_ = lean_box(0);
v_isShared_6825_ = v_isSharedCheck_6892_;
goto v_resetjp_6823_;
}
v_resetjp_6823_:
{
lean_object* v_snd_6826_; lean_object* v_fst_6827_; lean_object* v_fst_6828_; lean_object* v_snd_6829_; lean_object* v___f_6830_; lean_object* v___x_6831_; lean_object* v_req_6833_; lean_object* v___x_6871_; lean_object* v___x_6872_; lean_object* v___x_6873_; uint8_t v___x_6874_; 
v_snd_6826_ = lean_ctor_get(v_a_6822_, 1);
lean_inc(v_snd_6826_);
v_fst_6827_ = lean_ctor_get(v_a_6822_, 0);
lean_inc_n(v_fst_6827_, 2);
lean_dec(v_a_6822_);
v_fst_6828_ = lean_ctor_get(v_snd_6826_, 0);
lean_inc_n(v_fst_6828_, 2);
v_snd_6829_ = lean_ctor_get(v_snd_6826_, 1);
lean_inc_n(v_snd_6829_, 2);
lean_dec(v_snd_6826_);
v___f_6830_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6831_ = l_ByteArray_empty;
v___x_6871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6871_, 0, v_fst_6827_);
lean_ctor_set(v___x_6871_, 1, v_fst_6828_);
lean_ctor_set(v___x_6871_, 2, v_snd_6829_);
lean_ctor_set(v___x_6871_, 3, v___x_6831_);
lean_ctor_set(v___x_6871_, 4, v___f_6830_);
lean_inc_ref(v___x_6871_);
v___x_6872_ = l_Lasm_Fetch_Request_path(v___x_6871_);
v___x_6873_ = lean_apply_1(v_options_6815_, v___x_6872_);
v___x_6874_ = lean_unbox(v___x_6873_);
if (v___x_6874_ == 0)
{
lean_object* v___f_6875_; lean_object* v___x_6876_; lean_object* v___x_6877_; uint8_t v___x_6878_; lean_object* v___x_6879_; lean_object* v___x_6880_; 
v___f_6875_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6875_, 0, v___x_6871_);
v___x_6876_ = lean_unsigned_to_nat(0u);
v___x_6877_ = lean_io_as_task(v___f_6875_, v___x_6876_);
v___x_6878_ = 1;
v___x_6879_ = lean_task_bind(v___x_6877_, v___f_6817_, v___x_6876_, v___x_6878_);
v___x_6880_ = lean_task_get_own(v___x_6879_);
if (lean_obj_tag(v___x_6880_) == 0)
{
lean_object* v_a_6881_; lean_object* v___x_6883_; uint8_t v_isShared_6884_; uint8_t v_isSharedCheck_6888_; 
lean_dec(v_snd_6829_);
lean_dec(v_fst_6828_);
lean_dec(v_fst_6827_);
lean_del_object(v___x_6824_);
lean_dec_ref(v_handler_6814_);
v_a_6881_ = lean_ctor_get(v___x_6880_, 0);
v_isSharedCheck_6888_ = !lean_is_exclusive(v___x_6880_);
if (v_isSharedCheck_6888_ == 0)
{
v___x_6883_ = v___x_6880_;
v_isShared_6884_ = v_isSharedCheck_6888_;
goto v_resetjp_6882_;
}
else
{
lean_inc(v_a_6881_);
lean_dec(v___x_6880_);
v___x_6883_ = lean_box(0);
v_isShared_6884_ = v_isSharedCheck_6888_;
goto v_resetjp_6882_;
}
v_resetjp_6882_:
{
lean_object* v___x_6886_; 
if (v_isShared_6884_ == 0)
{
lean_ctor_set_tag(v___x_6883_, 1);
v___x_6886_ = v___x_6883_;
goto v_reusejp_6885_;
}
else
{
lean_object* v_reuseFailAlloc_6887_; 
v_reuseFailAlloc_6887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6887_, 0, v_a_6881_);
v___x_6886_ = v_reuseFailAlloc_6887_;
goto v_reusejp_6885_;
}
v_reusejp_6885_:
{
return v___x_6886_;
}
}
}
else
{
lean_object* v_a_6889_; lean_object* v___f_6890_; lean_object* v___x_6891_; 
v_a_6889_ = lean_ctor_get(v___x_6880_, 0);
lean_inc(v_a_6889_);
lean_dec_ref_known(v___x_6880_, 1);
v___f_6890_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6891_, 0, v_fst_6827_);
lean_ctor_set(v___x_6891_, 1, v_fst_6828_);
lean_ctor_set(v___x_6891_, 2, v_snd_6829_);
lean_ctor_set(v___x_6891_, 3, v_a_6889_);
lean_ctor_set(v___x_6891_, 4, v___f_6890_);
v_req_6833_ = v___x_6891_;
goto v___jp_6832_;
}
}
else
{
lean_dec(v_snd_6829_);
lean_dec(v_fst_6828_);
lean_dec(v_fst_6827_);
v_req_6833_ = v___x_6871_;
goto v___jp_6832_;
}
v___jp_6832_:
{
lean_object* v___f_6834_; lean_object* v___x_6835_; lean_object* v___x_6836_; uint8_t v___x_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; 
lean_inc_ref(v_req_6833_);
v___f_6834_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6834_, 0, v_handler_6814_);
lean_closure_set(v___f_6834_, 1, v_req_6833_);
v___x_6835_ = lean_unsigned_to_nat(0u);
v___x_6836_ = lean_io_as_task(v___f_6834_, v___x_6835_);
v___x_6837_ = 1;
v___x_6838_ = lean_task_bind(v___x_6836_, v___f_6820_, v___x_6835_, v___x_6837_);
v___x_6839_ = lean_task_get_own(v___x_6838_);
if (lean_obj_tag(v___x_6839_) == 0)
{
lean_object* v_a_6840_; lean_object* v___x_6842_; 
lean_dec_ref(v_req_6833_);
v_a_6840_ = lean_ctor_get(v___x_6839_, 0);
lean_inc(v_a_6840_);
lean_dec_ref_known(v___x_6839_, 1);
if (v_isShared_6825_ == 0)
{
lean_ctor_set_tag(v___x_6824_, 1);
lean_ctor_set(v___x_6824_, 0, v_a_6840_);
v___x_6842_ = v___x_6824_;
goto v_reusejp_6841_;
}
else
{
lean_object* v_reuseFailAlloc_6843_; 
v_reuseFailAlloc_6843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6843_, 0, v_a_6840_);
v___x_6842_ = v_reuseFailAlloc_6843_;
goto v_reusejp_6841_;
}
v_reusejp_6841_:
{
return v___x_6842_;
}
}
else
{
lean_object* v_a_6844_; lean_object* v_stream_6845_; 
lean_del_object(v___x_6824_);
v_a_6844_ = lean_ctor_get(v___x_6839_, 0);
lean_inc(v_a_6844_);
lean_dec_ref_known(v___x_6839_, 1);
v_stream_6845_ = lean_ctor_get(v_a_6844_, 2);
if (lean_obj_tag(v_stream_6845_) == 0)
{
uint16_t v_status_6846_; lean_object* v_headers_6847_; lean_object* v_body_6848_; lean_object* v_method_6849_; uint8_t v___x_6850_; 
v_status_6846_ = lean_ctor_get_uint16(v_a_6844_, sizeof(void*)*3);
v_headers_6847_ = lean_ctor_get(v_a_6844_, 0);
lean_inc_ref(v_headers_6847_);
v_body_6848_ = lean_ctor_get(v_a_6844_, 1);
lean_inc_ref(v_body_6848_);
lean_dec(v_a_6844_);
v_method_6849_ = lean_ctor_get(v_req_6833_, 0);
lean_inc_ref(v_method_6849_);
lean_dec_ref(v_req_6833_);
v___x_6850_ = l_Lasm_Fetch_bodyless(v_method_6849_, v_status_6846_);
lean_dec_ref(v_method_6849_);
if (v___x_6850_ == 0)
{
lean_object* v___x_6851_; 
v___x_6851_ = lasm_fetch_send_response(v_status_6846_, v_headers_6847_, v_body_6848_);
lean_dec_ref(v_body_6848_);
lean_dec_ref(v_headers_6847_);
return v___x_6851_;
}
else
{
lean_object* v___x_6852_; 
lean_dec_ref(v_body_6848_);
v___x_6852_ = lasm_fetch_send_response(v_status_6846_, v_headers_6847_, v___x_6831_);
lean_dec_ref(v_headers_6847_);
return v___x_6852_;
}
}
else
{
uint16_t v_status_6853_; lean_object* v_headers_6854_; lean_object* v_val_6855_; lean_object* v___f_6856_; lean_object* v___x_6857_; 
lean_inc_ref(v_stream_6845_);
v_status_6853_ = lean_ctor_get_uint16(v_a_6844_, sizeof(void*)*3);
v_headers_6854_ = lean_ctor_get(v_a_6844_, 0);
lean_inc_ref(v_headers_6854_);
lean_dec(v_a_6844_);
v_val_6855_ = lean_ctor_get(v_stream_6845_, 0);
lean_inc(v_val_6855_);
lean_dec_ref_known(v_stream_6845_, 1);
v___f_6856_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6856_, 0, v_val_6855_);
lean_closure_set(v___f_6856_, 1, v___f_6819_);
v___x_6857_ = lasm_fetch_start_response(v_status_6853_, v_headers_6854_);
lean_dec_ref(v_headers_6854_);
if (lean_obj_tag(v___x_6857_) == 0)
{
lean_object* v_method_6858_; uint8_t v___x_6859_; 
lean_dec_ref_known(v___x_6857_, 1);
v_method_6858_ = lean_ctor_get(v_req_6833_, 0);
lean_inc_ref(v_method_6858_);
lean_dec_ref(v_req_6833_);
v___x_6859_ = l_Lasm_Fetch_bodyless(v_method_6858_, v_status_6853_);
lean_dec_ref(v_method_6858_);
if (v___x_6859_ == 0)
{
lean_object* v___x_6860_; lean_object* v___x_6861_; lean_object* v___x_6862_; 
v___x_6860_ = lean_io_as_task(v___f_6856_, v___x_6835_);
v___x_6861_ = lean_task_bind(v___x_6860_, v___f_6818_, v___x_6835_, v___x_6837_);
v___x_6862_ = lean_task_get_own(v___x_6861_);
if (lean_obj_tag(v___x_6862_) == 0)
{
lean_object* v_a_6863_; lean_object* v___x_6864_; lean_object* v___x_6865_; lean_object* v___x_6866_; lean_object* v___x_6867_; 
v_a_6863_ = lean_ctor_get(v___x_6862_, 0);
lean_inc(v_a_6863_);
lean_dec_ref_known(v___x_6862_, 1);
v___x_6864_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6865_ = lean_io_error_to_string(v_a_6863_);
v___x_6866_ = lean_string_append(v___x_6864_, v___x_6865_);
lean_dec_ref(v___x_6865_);
v___x_6867_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6866_);
if (lean_obj_tag(v___x_6867_) == 0)
{
lean_object* v___x_6868_; 
lean_dec_ref_known(v___x_6867_, 1);
v___x_6868_ = lasm_fetch_finish(v___x_6859_);
return v___x_6868_;
}
else
{
return v___x_6867_;
}
}
else
{
lean_object* v___x_6869_; 
lean_dec_ref_known(v___x_6862_, 1);
v___x_6869_ = lasm_fetch_finish(v___x_6837_);
return v___x_6869_;
}
}
else
{
lean_object* v___x_6870_; 
lean_dec_ref(v___f_6856_);
v___x_6870_ = lasm_fetch_finish(v___x_6837_);
return v___x_6870_;
}
}
else
{
lean_dec_ref(v___f_6856_);
lean_dec_ref(v_req_6833_);
return v___x_6857_;
}
}
}
}
}
}
else
{
lean_object* v_a_6893_; lean_object* v___x_6895_; uint8_t v_isShared_6896_; uint8_t v_isSharedCheck_6900_; 
lean_dec_ref(v_options_6815_);
lean_dec_ref(v_handler_6814_);
v_a_6893_ = lean_ctor_get(v___x_6821_, 0);
v_isSharedCheck_6900_ = !lean_is_exclusive(v___x_6821_);
if (v_isSharedCheck_6900_ == 0)
{
v___x_6895_ = v___x_6821_;
v_isShared_6896_ = v_isSharedCheck_6900_;
goto v_resetjp_6894_;
}
else
{
lean_inc(v_a_6893_);
lean_dec(v___x_6821_);
v___x_6895_ = lean_box(0);
v_isShared_6896_ = v_isSharedCheck_6900_;
goto v_resetjp_6894_;
}
v_resetjp_6894_:
{
lean_object* v___x_6898_; 
if (v_isShared_6896_ == 0)
{
v___x_6898_ = v___x_6895_;
goto v_reusejp_6897_;
}
else
{
lean_object* v_reuseFailAlloc_6899_; 
v_reuseFailAlloc_6899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6899_, 0, v_a_6893_);
v___x_6898_ = v_reuseFailAlloc_6899_;
goto v_reusejp_6897_;
}
v_reusejp_6897_:
{
return v___x_6898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6901_, lean_object* v_options_6902_, lean_object* v_a_6903_){
_start:
{
lean_object* v_res_6904_; 
v_res_6904_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6901_, v_options_6902_);
return v_res_6904_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0(void){
_start:
{
uint64_t v___x_6905_; uint8_t v___x_6906_; uint64_t v___x_6907_; 
v___x_6905_ = 0ULL;
v___x_6906_ = 0;
v___x_6907_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_6906_, v___x_6905_);
return v___x_6907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2(lean_object* v_f_6908_, lean_object* v_args_6909_, lean_object* v_this_6910_){
_start:
{
lean_object* v___x_6912_; lean_object* v___x_6913_; uint64_t v___x_6914_; lean_object* v___x_6915_; 
v___x_6912_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6913_, 0, v_f_6908_);
lean_ctor_set(v___x_6913_, 1, v___x_6912_);
v___x_6914_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___closed__0);
v___x_6915_ = l_Lasm_JS_Value_invokeRaw(v___x_6913_, v_this_6910_, v_args_6909_, v___x_6914_);
if (lean_obj_tag(v___x_6915_) == 0)
{
lean_object* v_a_6916_; lean_object* v___x_6917_; 
v_a_6916_ = lean_ctor_get(v___x_6915_, 0);
lean_inc(v_a_6916_);
lean_dec_ref_known(v___x_6915_, 1);
v___x_6917_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_6916_);
lean_dec(v_a_6916_);
return v___x_6917_;
}
else
{
lean_object* v_a_6918_; lean_object* v___x_6920_; uint8_t v_isShared_6921_; uint8_t v_isSharedCheck_6925_; 
v_a_6918_ = lean_ctor_get(v___x_6915_, 0);
v_isSharedCheck_6925_ = !lean_is_exclusive(v___x_6915_);
if (v_isSharedCheck_6925_ == 0)
{
v___x_6920_ = v___x_6915_;
v_isShared_6921_ = v_isSharedCheck_6925_;
goto v_resetjp_6919_;
}
else
{
lean_inc(v_a_6918_);
lean_dec(v___x_6915_);
v___x_6920_ = lean_box(0);
v_isShared_6921_ = v_isSharedCheck_6925_;
goto v_resetjp_6919_;
}
v_resetjp_6919_:
{
lean_object* v___x_6923_; 
if (v_isShared_6921_ == 0)
{
v___x_6923_ = v___x_6920_;
goto v_reusejp_6922_;
}
else
{
lean_object* v_reuseFailAlloc_6924_; 
v_reuseFailAlloc_6924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6924_, 0, v_a_6918_);
v___x_6923_ = v_reuseFailAlloc_6924_;
goto v_reusejp_6922_;
}
v_reusejp_6922_:
{
return v___x_6923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2___boxed(lean_object* v_f_6926_, lean_object* v_args_6927_, lean_object* v_this_6928_, lean_object* v_a_6929_){
_start:
{
lean_object* v_res_6930_; 
v_res_6930_ = l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2(v_f_6926_, v_args_6927_, v_this_6928_);
return v_res_6930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0(lean_object* v_o_6931_, lean_object* v_key_6932_, lean_object* v_x_6933_){
_start:
{
lean_object* v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6937_; lean_object* v___x_6938_; lean_object* v___x_6939_; lean_object* v___x_6940_; lean_object* v___x_6941_; lean_object* v___x_6942_; lean_object* v_payload_6943_; lean_object* v___x_6944_; lean_object* v___x_6945_; lean_object* v___x_6946_; lean_object* v___x_6947_; lean_object* v___x_6948_; lean_object* v___x_6949_; 
v___x_6935_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6935_, 0, v_key_6932_);
v___x_6936_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
lean_inc(v_o_6931_);
v___x_6937_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6937_, 0, v_o_6931_);
lean_ctor_set(v___x_6937_, 1, v___x_6936_);
v___x_6938_ = lean_unsigned_to_nat(3u);
v___x_6939_ = lean_mk_empty_array_with_capacity(v___x_6938_);
lean_inc_ref(v___x_6935_);
v___x_6940_ = lean_array_push(v___x_6939_, v___x_6935_);
lean_inc(v_x_6933_);
v___x_6941_ = lean_array_push(v___x_6940_, v_x_6933_);
v___x_6942_ = lean_array_push(v___x_6941_, v___x_6937_);
v_payload_6943_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_6943_, 0, v___x_6942_);
v___x_6944_ = lean_unsigned_to_nat(2u);
v___x_6945_ = lean_mk_empty_array_with_capacity(v___x_6944_);
v___x_6946_ = lean_array_push(v___x_6945_, v___x_6935_);
v___x_6947_ = lean_array_push(v___x_6946_, v_x_6933_);
v___x_6948_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6948_, 0, v___x_6947_);
v___x_6949_ = l_Lasm_JS_Wire_encodeIO(v___x_6948_);
lean_dec_ref_known(v___x_6948_, 1);
if (lean_obj_tag(v___x_6949_) == 0)
{
lean_object* v_a_6950_; uint32_t v___x_6951_; uint32_t v___x_6952_; uint64_t v___x_6953_; lean_object* v___x_6954_; lean_object* v___x_6955_; 
v_a_6950_ = lean_ctor_get(v___x_6949_, 0);
lean_inc(v_a_6950_);
lean_dec_ref_known(v___x_6949_, 1);
v___x_6951_ = 204;
v___x_6952_ = lasm_js_value_handle(v_o_6931_);
lean_dec(v_o_6931_);
v___x_6953_ = 0ULL;
v___x_6954_ = lean_box(0);
v___x_6955_ = lasm_js_call(v___x_6951_, v___x_6952_, v___x_6953_, v_a_6950_, v_payload_6943_);
lean_dec_ref_known(v_payload_6943_, 1);
lean_dec(v_a_6950_);
if (lean_obj_tag(v___x_6955_) == 0)
{
lean_object* v___x_6957_; uint8_t v_isShared_6958_; uint8_t v_isSharedCheck_6962_; 
v_isSharedCheck_6962_ = !lean_is_exclusive(v___x_6955_);
if (v_isSharedCheck_6962_ == 0)
{
lean_object* v_unused_6963_; 
v_unused_6963_ = lean_ctor_get(v___x_6955_, 0);
lean_dec(v_unused_6963_);
v___x_6957_ = v___x_6955_;
v_isShared_6958_ = v_isSharedCheck_6962_;
goto v_resetjp_6956_;
}
else
{
lean_dec(v___x_6955_);
v___x_6957_ = lean_box(0);
v_isShared_6958_ = v_isSharedCheck_6962_;
goto v_resetjp_6956_;
}
v_resetjp_6956_:
{
lean_object* v___x_6960_; 
if (v_isShared_6958_ == 0)
{
lean_ctor_set(v___x_6957_, 0, v___x_6954_);
v___x_6960_ = v___x_6957_;
goto v_reusejp_6959_;
}
else
{
lean_object* v_reuseFailAlloc_6961_; 
v_reuseFailAlloc_6961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6961_, 0, v___x_6954_);
v___x_6960_ = v_reuseFailAlloc_6961_;
goto v_reusejp_6959_;
}
v_reusejp_6959_:
{
return v___x_6960_;
}
}
}
else
{
lean_object* v_a_6964_; lean_object* v___x_6966_; uint8_t v_isShared_6967_; uint8_t v_isSharedCheck_6971_; 
v_a_6964_ = lean_ctor_get(v___x_6955_, 0);
v_isSharedCheck_6971_ = !lean_is_exclusive(v___x_6955_);
if (v_isSharedCheck_6971_ == 0)
{
v___x_6966_ = v___x_6955_;
v_isShared_6967_ = v_isSharedCheck_6971_;
goto v_resetjp_6965_;
}
else
{
lean_inc(v_a_6964_);
lean_dec(v___x_6955_);
v___x_6966_ = lean_box(0);
v_isShared_6967_ = v_isSharedCheck_6971_;
goto v_resetjp_6965_;
}
v_resetjp_6965_:
{
lean_object* v___x_6969_; 
if (v_isShared_6967_ == 0)
{
v___x_6969_ = v___x_6966_;
goto v_reusejp_6968_;
}
else
{
lean_object* v_reuseFailAlloc_6970_; 
v_reuseFailAlloc_6970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6970_, 0, v_a_6964_);
v___x_6969_ = v_reuseFailAlloc_6970_;
goto v_reusejp_6968_;
}
v_reusejp_6968_:
{
return v___x_6969_;
}
}
}
}
else
{
lean_object* v_a_6972_; lean_object* v___x_6974_; uint8_t v_isShared_6975_; uint8_t v_isSharedCheck_6979_; 
lean_dec_ref_known(v_payload_6943_, 1);
lean_dec(v_o_6931_);
v_a_6972_ = lean_ctor_get(v___x_6949_, 0);
v_isSharedCheck_6979_ = !lean_is_exclusive(v___x_6949_);
if (v_isSharedCheck_6979_ == 0)
{
v___x_6974_ = v___x_6949_;
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
else
{
lean_inc(v_a_6972_);
lean_dec(v___x_6949_);
v___x_6974_ = lean_box(0);
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
v_resetjp_6973_:
{
lean_object* v___x_6977_; 
if (v_isShared_6975_ == 0)
{
v___x_6977_ = v___x_6974_;
goto v_reusejp_6976_;
}
else
{
lean_object* v_reuseFailAlloc_6978_; 
v_reuseFailAlloc_6978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6978_, 0, v_a_6972_);
v___x_6977_ = v_reuseFailAlloc_6978_;
goto v_reusejp_6976_;
}
v_reusejp_6976_:
{
return v___x_6977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0___boxed(lean_object* v_o_6980_, lean_object* v_key_6981_, lean_object* v_x_6982_, lean_object* v_a_6983_){
_start:
{
lean_object* v_res_6984_; 
v_res_6984_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0(v_o_6980_, v_key_6981_, v_x_6982_);
return v_res_6984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(lean_object* v_o_6985_, lean_object* v_key_6986_){
_start:
{
lean_object* v_k_6988_; lean_object* v___x_6989_; 
v_k_6988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_6988_, 0, v_key_6986_);
v___x_6989_ = l_Lasm_JS_Wire_encodeIO(v_k_6988_);
if (lean_obj_tag(v___x_6989_) == 0)
{
lean_object* v_a_6990_; uint32_t v___x_6991_; uint32_t v___x_6992_; uint64_t v___x_6993_; lean_object* v___x_6994_; lean_object* v___x_6995_; lean_object* v___x_6996_; lean_object* v___x_6997_; lean_object* v___x_6998_; lean_object* v___x_6999_; lean_object* v___x_7000_; lean_object* v___x_7001_; 
v_a_6990_ = lean_ctor_get(v___x_6989_, 0);
lean_inc(v_a_6990_);
lean_dec_ref_known(v___x_6989_, 1);
v___x_6991_ = 203;
v___x_6992_ = lasm_js_value_handle(v_o_6985_);
v___x_6993_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
v___x_6994_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6995_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6995_, 0, v_o_6985_);
lean_ctor_set(v___x_6995_, 1, v___x_6994_);
v___x_6996_ = lean_unsigned_to_nat(2u);
v___x_6997_ = lean_mk_empty_array_with_capacity(v___x_6996_);
v___x_6998_ = lean_array_push(v___x_6997_, v_k_6988_);
v___x_6999_ = lean_array_push(v___x_6998_, v___x_6995_);
v___x_7000_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_7000_, 0, v___x_6999_);
v___x_7001_ = lasm_js_call(v___x_6991_, v___x_6992_, v___x_6993_, v_a_6990_, v___x_7000_);
lean_dec_ref_known(v___x_7000_, 1);
lean_dec(v_a_6990_);
if (lean_obj_tag(v___x_7001_) == 0)
{
lean_object* v_a_7002_; lean_object* v___x_7003_; 
v_a_7002_ = lean_ctor_get(v___x_7001_, 0);
lean_inc(v_a_7002_);
lean_dec_ref_known(v___x_7001_, 1);
v___x_7003_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_7002_);
lean_dec(v_a_7002_);
return v___x_7003_;
}
else
{
lean_object* v_a_7004_; lean_object* v___x_7006_; uint8_t v_isShared_7007_; uint8_t v_isSharedCheck_7011_; 
v_a_7004_ = lean_ctor_get(v___x_7001_, 0);
v_isSharedCheck_7011_ = !lean_is_exclusive(v___x_7001_);
if (v_isSharedCheck_7011_ == 0)
{
v___x_7006_ = v___x_7001_;
v_isShared_7007_ = v_isSharedCheck_7011_;
goto v_resetjp_7005_;
}
else
{
lean_inc(v_a_7004_);
lean_dec(v___x_7001_);
v___x_7006_ = lean_box(0);
v_isShared_7007_ = v_isSharedCheck_7011_;
goto v_resetjp_7005_;
}
v_resetjp_7005_:
{
lean_object* v___x_7009_; 
if (v_isShared_7007_ == 0)
{
v___x_7009_ = v___x_7006_;
goto v_reusejp_7008_;
}
else
{
lean_object* v_reuseFailAlloc_7010_; 
v_reuseFailAlloc_7010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7010_, 0, v_a_7004_);
v___x_7009_ = v_reuseFailAlloc_7010_;
goto v_reusejp_7008_;
}
v_reusejp_7008_:
{
return v___x_7009_;
}
}
}
}
else
{
lean_object* v_a_7012_; lean_object* v___x_7014_; uint8_t v_isShared_7015_; uint8_t v_isSharedCheck_7019_; 
lean_dec_ref_known(v_k_6988_, 1);
lean_dec(v_o_6985_);
v_a_7012_ = lean_ctor_get(v___x_6989_, 0);
v_isSharedCheck_7019_ = !lean_is_exclusive(v___x_6989_);
if (v_isSharedCheck_7019_ == 0)
{
v___x_7014_ = v___x_6989_;
v_isShared_7015_ = v_isSharedCheck_7019_;
goto v_resetjp_7013_;
}
else
{
lean_inc(v_a_7012_);
lean_dec(v___x_6989_);
v___x_7014_ = lean_box(0);
v_isShared_7015_ = v_isSharedCheck_7019_;
goto v_resetjp_7013_;
}
v_resetjp_7013_:
{
lean_object* v___x_7017_; 
if (v_isShared_7015_ == 0)
{
v___x_7017_ = v___x_7014_;
goto v_reusejp_7016_;
}
else
{
lean_object* v_reuseFailAlloc_7018_; 
v_reuseFailAlloc_7018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7018_, 0, v_a_7012_);
v___x_7017_ = v_reuseFailAlloc_7018_;
goto v_reusejp_7016_;
}
v_reusejp_7016_:
{
return v___x_7017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1___boxed(lean_object* v_o_7020_, lean_object* v_key_7021_, lean_object* v_a_7022_){
_start:
{
lean_object* v_res_7023_; 
v_res_7023_ = l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(v_o_7020_, v_key_7021_);
return v_res_7023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0(lean_object* v_x_7026_){
_start:
{
lean_object* v___x_7028_; lean_object* v___x_7029_; lean_object* v___x_7030_; 
v___x_7028_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_7029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_7029_, 0, v_x_7026_);
lean_ctor_set(v___x_7029_, 1, v___x_7028_);
v___x_7030_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_7030_) == 0)
{
lean_object* v_a_7031_; lean_object* v___x_7032_; lean_object* v___x_7033_; 
v_a_7031_ = lean_ctor_get(v___x_7030_, 0);
lean_inc_n(v_a_7031_, 2);
lean_dec_ref_known(v___x_7030_, 1);
v___x_7032_ = ((lean_object*)(l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__0));
lean_inc_ref(v___x_7029_);
v___x_7033_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__0(v_a_7031_, v___x_7032_, v___x_7029_);
if (lean_obj_tag(v___x_7033_) == 0)
{
lean_object* v___x_7034_; 
lean_dec_ref_known(v___x_7033_, 1);
v___x_7034_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_7034_) == 0)
{
lean_object* v_a_7035_; lean_object* v___x_7037_; uint8_t v_isShared_7038_; uint8_t v_isSharedCheck_7078_; 
v_a_7035_ = lean_ctor_get(v___x_7034_, 0);
v_isSharedCheck_7078_ = !lean_is_exclusive(v___x_7034_);
if (v_isSharedCheck_7078_ == 0)
{
v___x_7037_ = v___x_7034_;
v_isShared_7038_ = v_isSharedCheck_7078_;
goto v_resetjp_7036_;
}
else
{
lean_inc(v_a_7035_);
lean_dec(v___x_7034_);
v___x_7037_ = lean_box(0);
v_isShared_7038_ = v_isSharedCheck_7078_;
goto v_resetjp_7036_;
}
v_resetjp_7036_:
{
uint8_t v___x_7039_; 
v___x_7039_ = lean_unbox(v_a_7035_);
lean_dec(v_a_7035_);
if (v___x_7039_ == 0)
{
lean_object* v___x_7040_; lean_object* v___x_7041_; 
lean_del_object(v___x_7037_);
v___x_7040_ = ((lean_object*)(l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___closed__1));
v___x_7041_ = l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(v_a_7031_, v___x_7040_);
if (lean_obj_tag(v___x_7041_) == 0)
{
lean_object* v_a_7042_; lean_object* v___x_7044_; uint8_t v_isShared_7045_; uint8_t v_isSharedCheck_7065_; 
v_a_7042_ = lean_ctor_get(v___x_7041_, 0);
v_isSharedCheck_7065_ = !lean_is_exclusive(v___x_7041_);
if (v_isSharedCheck_7065_ == 0)
{
v___x_7044_ = v___x_7041_;
v_isShared_7045_ = v_isSharedCheck_7065_;
goto v_resetjp_7043_;
}
else
{
lean_inc(v_a_7042_);
lean_dec(v___x_7041_);
v___x_7044_ = lean_box(0);
v_isShared_7045_ = v_isSharedCheck_7065_;
goto v_resetjp_7043_;
}
v_resetjp_7043_:
{
if (lean_obj_tag(v_a_7042_) == 9)
{
lean_object* v_value_7046_; lean_object* v___x_7047_; lean_object* v___x_7048_; lean_object* v___x_7049_; lean_object* v___x_7050_; lean_object* v___x_7051_; 
lean_del_object(v___x_7044_);
v_value_7046_ = lean_ctor_get(v_a_7042_, 0);
lean_inc(v_value_7046_);
lean_dec_ref_known(v_a_7042_, 2);
v___x_7047_ = lean_unsigned_to_nat(1u);
v___x_7048_ = lean_mk_empty_array_with_capacity(v___x_7047_);
v___x_7049_ = lean_array_push(v___x_7048_, v___x_7029_);
v___x_7050_ = lean_box(0);
v___x_7051_ = l_Lasm_JS_Value_call___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__2(v_value_7046_, v___x_7049_, v___x_7050_);
if (lean_obj_tag(v___x_7051_) == 0)
{
lean_object* v___x_7052_; 
lean_dec_ref_known(v___x_7051_, 1);
v___x_7052_ = l_Lasm_JS_waitForever();
return v___x_7052_;
}
else
{
lean_object* v_a_7053_; lean_object* v___x_7055_; uint8_t v_isShared_7056_; uint8_t v_isSharedCheck_7060_; 
v_a_7053_ = lean_ctor_get(v___x_7051_, 0);
v_isSharedCheck_7060_ = !lean_is_exclusive(v___x_7051_);
if (v_isSharedCheck_7060_ == 0)
{
v___x_7055_ = v___x_7051_;
v_isShared_7056_ = v_isSharedCheck_7060_;
goto v_resetjp_7054_;
}
else
{
lean_inc(v_a_7053_);
lean_dec(v___x_7051_);
v___x_7055_ = lean_box(0);
v_isShared_7056_ = v_isSharedCheck_7060_;
goto v_resetjp_7054_;
}
v_resetjp_7054_:
{
lean_object* v___x_7058_; 
if (v_isShared_7056_ == 0)
{
v___x_7058_ = v___x_7055_;
goto v_reusejp_7057_;
}
else
{
lean_object* v_reuseFailAlloc_7059_; 
v_reuseFailAlloc_7059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7059_, 0, v_a_7053_);
v___x_7058_ = v_reuseFailAlloc_7059_;
goto v_reusejp_7057_;
}
v_reusejp_7057_:
{
return v___x_7058_;
}
}
}
}
else
{
lean_object* v___x_7061_; lean_object* v___x_7063_; 
lean_dec(v_a_7042_);
lean_dec_ref_known(v___x_7029_, 2);
v___x_7061_ = lean_box(0);
if (v_isShared_7045_ == 0)
{
lean_ctor_set(v___x_7044_, 0, v___x_7061_);
v___x_7063_ = v___x_7044_;
goto v_reusejp_7062_;
}
else
{
lean_object* v_reuseFailAlloc_7064_; 
v_reuseFailAlloc_7064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7064_, 0, v___x_7061_);
v___x_7063_ = v_reuseFailAlloc_7064_;
goto v_reusejp_7062_;
}
v_reusejp_7062_:
{
return v___x_7063_;
}
}
}
}
else
{
lean_object* v_a_7066_; lean_object* v___x_7068_; uint8_t v_isShared_7069_; uint8_t v_isSharedCheck_7073_; 
lean_dec_ref_known(v___x_7029_, 2);
v_a_7066_ = lean_ctor_get(v___x_7041_, 0);
v_isSharedCheck_7073_ = !lean_is_exclusive(v___x_7041_);
if (v_isSharedCheck_7073_ == 0)
{
v___x_7068_ = v___x_7041_;
v_isShared_7069_ = v_isSharedCheck_7073_;
goto v_resetjp_7067_;
}
else
{
lean_inc(v_a_7066_);
lean_dec(v___x_7041_);
v___x_7068_ = lean_box(0);
v_isShared_7069_ = v_isSharedCheck_7073_;
goto v_resetjp_7067_;
}
v_resetjp_7067_:
{
lean_object* v___x_7071_; 
if (v_isShared_7069_ == 0)
{
v___x_7071_ = v___x_7068_;
goto v_reusejp_7070_;
}
else
{
lean_object* v_reuseFailAlloc_7072_; 
v_reuseFailAlloc_7072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7072_, 0, v_a_7066_);
v___x_7071_ = v_reuseFailAlloc_7072_;
goto v_reusejp_7070_;
}
v_reusejp_7070_:
{
return v___x_7071_;
}
}
}
}
else
{
lean_object* v___x_7074_; lean_object* v___x_7076_; 
lean_dec(v_a_7031_);
lean_dec_ref_known(v___x_7029_, 2);
v___x_7074_ = lean_box(0);
if (v_isShared_7038_ == 0)
{
lean_ctor_set(v___x_7037_, 0, v___x_7074_);
v___x_7076_ = v___x_7037_;
goto v_reusejp_7075_;
}
else
{
lean_object* v_reuseFailAlloc_7077_; 
v_reuseFailAlloc_7077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7077_, 0, v___x_7074_);
v___x_7076_ = v_reuseFailAlloc_7077_;
goto v_reusejp_7075_;
}
v_reusejp_7075_:
{
return v___x_7076_;
}
}
}
}
else
{
lean_object* v_a_7079_; lean_object* v___x_7081_; uint8_t v_isShared_7082_; uint8_t v_isSharedCheck_7086_; 
lean_dec(v_a_7031_);
lean_dec_ref_known(v___x_7029_, 2);
v_a_7079_ = lean_ctor_get(v___x_7034_, 0);
v_isSharedCheck_7086_ = !lean_is_exclusive(v___x_7034_);
if (v_isSharedCheck_7086_ == 0)
{
v___x_7081_ = v___x_7034_;
v_isShared_7082_ = v_isSharedCheck_7086_;
goto v_resetjp_7080_;
}
else
{
lean_inc(v_a_7079_);
lean_dec(v___x_7034_);
v___x_7081_ = lean_box(0);
v_isShared_7082_ = v_isSharedCheck_7086_;
goto v_resetjp_7080_;
}
v_resetjp_7080_:
{
lean_object* v___x_7084_; 
if (v_isShared_7082_ == 0)
{
v___x_7084_ = v___x_7081_;
goto v_reusejp_7083_;
}
else
{
lean_object* v_reuseFailAlloc_7085_; 
v_reuseFailAlloc_7085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7085_, 0, v_a_7079_);
v___x_7084_ = v_reuseFailAlloc_7085_;
goto v_reusejp_7083_;
}
v_reusejp_7083_:
{
return v___x_7084_;
}
}
}
}
else
{
lean_dec(v_a_7031_);
lean_dec_ref_known(v___x_7029_, 2);
return v___x_7033_;
}
}
else
{
lean_object* v_a_7087_; lean_object* v___x_7089_; uint8_t v_isShared_7090_; uint8_t v_isSharedCheck_7094_; 
lean_dec_ref_known(v___x_7029_, 2);
v_a_7087_ = lean_ctor_get(v___x_7030_, 0);
v_isSharedCheck_7094_ = !lean_is_exclusive(v___x_7030_);
if (v_isSharedCheck_7094_ == 0)
{
v___x_7089_ = v___x_7030_;
v_isShared_7090_ = v_isSharedCheck_7094_;
goto v_resetjp_7088_;
}
else
{
lean_inc(v_a_7087_);
lean_dec(v___x_7030_);
v___x_7089_ = lean_box(0);
v_isShared_7090_ = v_isSharedCheck_7094_;
goto v_resetjp_7088_;
}
v_resetjp_7088_:
{
lean_object* v___x_7092_; 
if (v_isShared_7090_ == 0)
{
v___x_7092_ = v___x_7089_;
goto v_reusejp_7091_;
}
else
{
lean_object* v_reuseFailAlloc_7093_; 
v_reuseFailAlloc_7093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7093_, 0, v_a_7087_);
v___x_7092_ = v_reuseFailAlloc_7093_;
goto v_reusejp_7091_;
}
v_reusejp_7091_:
{
return v___x_7092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0___boxed(lean_object* v_x_7095_, lean_object* v_a_7096_){
_start:
{
lean_object* v_res_7097_; 
v_res_7097_ = l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0(v_x_7095_);
return v_res_7097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_7101_, lean_object* v_handler_7102_){
_start:
{
uint8_t v___x_7104_; 
v___x_7104_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_7104_ == 0)
{
uint8_t v___x_7105_; 
v___x_7105_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_7105_ == 0)
{
uint8_t v___x_7106_; 
v___x_7106_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_7106_ == 0)
{
uint8_t v___x_7107_; 
v___x_7107_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_7107_ == 0)
{
lean_object* v___x_7108_; lean_object* v___x_7109_; 
lean_dec_ref(v_handler_7102_);
lean_dec_ref(v_options_7101_);
v___x_7108_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_7109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7109_, 0, v___x_7108_);
return v___x_7109_;
}
else
{
lean_object* v___x_7110_; 
v___x_7110_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_7110_) == 0)
{
lean_object* v_a_7111_; uint8_t v___x_7112_; 
v_a_7111_ = lean_ctor_get(v___x_7110_, 0);
lean_inc(v_a_7111_);
lean_dec_ref_known(v___x_7110_, 1);
v___x_7112_ = lean_unbox(v_a_7111_);
lean_dec(v_a_7111_);
if (v___x_7112_ == 0)
{
lean_object* v___x_7113_; 
v___x_7113_ = l_Lasm_Fetch_serveNode(v_handler_7102_, v_options_7101_);
return v___x_7113_;
}
else
{
lean_object* v___x_7114_; 
v___x_7114_ = l_Lasm_Fetch_jsFetchHandler(v_handler_7102_, v_options_7101_);
if (lean_obj_tag(v___x_7114_) == 0)
{
lean_object* v_a_7115_; lean_object* v___x_7116_; 
v_a_7115_ = lean_ctor_get(v___x_7114_, 0);
lean_inc(v_a_7115_);
lean_dec_ref_known(v___x_7114_, 1);
v___x_7116_ = l_Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0(v_a_7115_);
return v___x_7116_;
}
else
{
lean_object* v_a_7117_; lean_object* v___x_7119_; uint8_t v_isShared_7120_; uint8_t v_isSharedCheck_7124_; 
v_a_7117_ = lean_ctor_get(v___x_7114_, 0);
v_isSharedCheck_7124_ = !lean_is_exclusive(v___x_7114_);
if (v_isSharedCheck_7124_ == 0)
{
v___x_7119_ = v___x_7114_;
v_isShared_7120_ = v_isSharedCheck_7124_;
goto v_resetjp_7118_;
}
else
{
lean_inc(v_a_7117_);
lean_dec(v___x_7114_);
v___x_7119_ = lean_box(0);
v_isShared_7120_ = v_isSharedCheck_7124_;
goto v_resetjp_7118_;
}
v_resetjp_7118_:
{
lean_object* v___x_7122_; 
if (v_isShared_7120_ == 0)
{
v___x_7122_ = v___x_7119_;
goto v_reusejp_7121_;
}
else
{
lean_object* v_reuseFailAlloc_7123_; 
v_reuseFailAlloc_7123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7123_, 0, v_a_7117_);
v___x_7122_ = v_reuseFailAlloc_7123_;
goto v_reusejp_7121_;
}
v_reusejp_7121_:
{
return v___x_7122_;
}
}
}
}
}
else
{
lean_object* v_a_7125_; lean_object* v___x_7127_; uint8_t v_isShared_7128_; uint8_t v_isSharedCheck_7132_; 
lean_dec_ref(v_handler_7102_);
lean_dec_ref(v_options_7101_);
v_a_7125_ = lean_ctor_get(v___x_7110_, 0);
v_isSharedCheck_7132_ = !lean_is_exclusive(v___x_7110_);
if (v_isSharedCheck_7132_ == 0)
{
v___x_7127_ = v___x_7110_;
v_isShared_7128_ = v_isSharedCheck_7132_;
goto v_resetjp_7126_;
}
else
{
lean_inc(v_a_7125_);
lean_dec(v___x_7110_);
v___x_7127_ = lean_box(0);
v_isShared_7128_ = v_isSharedCheck_7132_;
goto v_resetjp_7126_;
}
v_resetjp_7126_:
{
lean_object* v___x_7130_; 
if (v_isShared_7128_ == 0)
{
v___x_7130_ = v___x_7127_;
goto v_reusejp_7129_;
}
else
{
lean_object* v_reuseFailAlloc_7131_; 
v_reuseFailAlloc_7131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7131_, 0, v_a_7125_);
v___x_7130_ = v_reuseFailAlloc_7131_;
goto v_reusejp_7129_;
}
v_reusejp_7129_:
{
return v___x_7130_;
}
}
}
}
}
else
{
lean_object* v___x_7133_; 
v___x_7133_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_7102_, v_options_7101_);
return v___x_7133_;
}
}
else
{
lean_object* v___x_7134_; 
v___x_7134_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_7102_, v_options_7101_);
return v___x_7134_;
}
}
else
{
lean_object* v___x_7135_; 
v___x_7135_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_7102_, v_options_7101_);
return v___x_7135_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_7136_, lean_object* v_handler_7137_, lean_object* v_a_7138_){
_start:
{
lean_object* v_res_7139_; 
v_res_7139_ = l_Lasm_Fetch_serveWith(v_options_7136_, v_handler_7137_);
return v_res_7139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_7140_){
_start:
{
lean_object* v___f_7142_; lean_object* v___x_7143_; 
v___f_7142_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_7143_ = l_Lasm_Fetch_serveWith(v___f_7142_, v_handler_7140_);
return v___x_7143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_7144_, lean_object* v_a_7145_){
_start:
{
lean_object* v_res_7146_; 
v_res_7146_ = l_Lasm_Fetch_serve(v_handler_7144_);
return v_res_7146_;
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
