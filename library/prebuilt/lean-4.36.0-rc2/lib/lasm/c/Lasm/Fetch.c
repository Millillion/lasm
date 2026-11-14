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
lean_object* l_String_toListImpl(lean_object*);
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
uint32_t lean_uint32_add(uint32_t, uint32_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(uint32_t, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_Fetch_nodeRequestUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* l_Lasm_Fetch_nodeRequestUrl___closed__0 = (const lean_object*)&l_Lasm_Fetch_nodeRequestUrl___closed__0_value;
static const lean_string_object l_Lasm_Fetch_nodeRequestUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "localhost:"};
static const lean_object* l_Lasm_Fetch_nodeRequestUrl___closed__1 = (const lean_object*)&l_Lasm_Fetch_nodeRequestUrl___closed__1_value;
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath_go(lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
if (lean_obj_tag(v_a_267_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = l_List_reverse___redArg(v_a_268_);
v___x_271_ = lean_string_mk(v___x_270_);
v___x_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v_a_269_);
v___x_273_ = l_List_reverse___redArg(v___x_272_);
return v___x_273_;
}
else
{
lean_object* v_head_274_; lean_object* v_tail_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_295_; 
v_head_274_ = lean_ctor_get(v_a_267_, 0);
v_tail_275_ = lean_ctor_get(v_a_267_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_a_267_);
if (v_isSharedCheck_295_ == 0)
{
v___x_277_ = v_a_267_;
v_isShared_278_ = v_isSharedCheck_295_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_tail_275_);
lean_inc(v_head_274_);
lean_dec(v_a_267_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_295_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
uint32_t v___x_287_; uint32_t v___x_288_; uint8_t v___x_289_; 
v___x_287_ = 47;
v___x_288_ = lean_unbox_uint32(v_head_274_);
v___x_289_ = lean_uint32_dec_eq(v___x_288_, v___x_287_);
if (v___x_289_ == 0)
{
uint32_t v___x_290_; uint32_t v___x_291_; uint8_t v___x_292_; 
v___x_290_ = 92;
v___x_291_ = lean_unbox_uint32(v_head_274_);
v___x_292_ = lean_uint32_dec_eq(v___x_291_, v___x_290_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
lean_del_object(v___x_277_);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v_head_274_);
lean_ctor_set(v___x_293_, 1, v_a_268_);
v_a_267_ = v_tail_275_;
v_a_268_ = v___x_293_;
goto _start;
}
else
{
lean_dec(v_head_274_);
goto v___jp_279_;
}
}
else
{
lean_dec(v_head_274_);
goto v___jp_279_;
}
v___jp_279_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_280_ = lean_box(0);
v___x_281_ = l_List_reverse___redArg(v_a_268_);
v___x_282_ = lean_string_mk(v___x_281_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 1, v_a_269_);
lean_ctor_set(v___x_277_, 0, v___x_282_);
v___x_284_ = v___x_277_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_a_269_);
v___x_284_ = v_reuseFailAlloc_286_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
v_a_267_ = v_tail_275_;
v_a_268_ = v___x_280_;
v_a_269_ = v___x_284_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(lean_object* v_p_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = l_String_toListImpl(v_p_296_);
v___x_298_ = lean_box(0);
v___x_299_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath_go(v___x_297_, v___x_298_, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(lean_object* v_s_301_){
_start:
{
uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_302_ = 0;
v___x_303_ = l_Lasm_Fetch_percentDecode(v_s_301_, v___x_302_);
v___x_304_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___closed__0));
v___x_305_ = lean_string_dec_eq(v___x_303_, v___x_304_);
lean_dec_ref(v___x_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot___boxed(lean_object* v_s_306_){
_start:
{
uint8_t v_res_307_; lean_object* v_r_308_; 
v_res_307_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_s_306_);
v_r_308_ = lean_box(v_res_307_);
return v_r_308_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(lean_object* v_s_310_){
_start:
{
uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_311_ = 0;
v___x_312_ = l_Lasm_Fetch_percentDecode(v_s_310_, v___x_311_);
v___x_313_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___closed__0));
v___x_314_ = lean_string_dec_eq(v___x_312_, v___x_313_);
lean_dec_ref(v___x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot___boxed(lean_object* v_s_315_){
_start:
{
uint8_t v_res_316_; lean_object* v_r_317_; 
v_res_316_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_s_315_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
return v_x_318_;
}
else
{
lean_object* v_tail_320_; 
v_tail_320_ = lean_ctor_get(v_x_319_, 1);
if (lean_obj_tag(v_tail_320_) == 0)
{
lean_object* v_head_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_347_; 
v_head_321_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_347_ == 0)
{
lean_object* v_unused_348_; 
v_unused_348_ = lean_ctor_get(v_x_319_, 1);
lean_dec(v_unused_348_);
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_347_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_head_321_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_347_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
uint8_t v___x_325_; 
lean_inc(v_head_321_);
v___x_325_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_head_321_);
if (v___x_325_ == 0)
{
uint8_t v___x_326_; 
lean_inc(v_head_321_);
v___x_326_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_head_321_);
if (v___x_326_ == 0)
{
lean_object* v___x_328_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_x_318_);
v___x_328_ = v___x_323_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_head_321_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_x_318_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
else
{
lean_object* v___x_330_; lean_object* v___x_332_; 
lean_dec(v_head_321_);
v___x_330_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_x_318_);
lean_ctor_set(v___x_323_, 0, v___x_330_);
v___x_332_ = v___x_323_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_x_318_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v___x_334_; 
lean_dec(v_head_321_);
v___x_334_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v___x_336_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_x_318_);
lean_ctor_set(v___x_323_, 0, v___x_334_);
v___x_336_ = v___x_323_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_x_318_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
else
{
lean_object* v_tail_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_del_object(v___x_323_);
v_tail_338_ = lean_ctor_get(v_x_318_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_345_ == 0)
{
lean_object* v_unused_346_; 
v_unused_346_ = lean_ctor_get(v_x_318_, 0);
lean_dec(v_unused_346_);
v___x_340_ = v_x_318_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_tail_338_);
lean_dec(v_x_318_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_334_);
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_tail_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
}
}
else
{
lean_object* v_head_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_363_; 
lean_inc(v_tail_320_);
v_head_349_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_363_ == 0)
{
lean_object* v_unused_364_; 
v_unused_364_ = lean_ctor_get(v_x_319_, 1);
lean_dec(v_unused_364_);
v___x_351_ = v_x_319_;
v_isShared_352_ = v_isSharedCheck_363_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_head_349_);
lean_dec(v_x_319_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_363_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
uint8_t v___x_353_; 
lean_inc(v_head_349_);
v___x_353_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDotDot(v_head_349_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
lean_inc(v_head_349_);
v___x_354_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isDot(v_head_349_);
if (v___x_354_ == 0)
{
lean_object* v___x_356_; 
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 1, v_x_318_);
v___x_356_ = v___x_351_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_head_349_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_x_318_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
v_x_318_ = v___x_356_;
v_x_319_ = v_tail_320_;
goto _start;
}
}
else
{
lean_del_object(v___x_351_);
lean_dec(v_head_349_);
v_x_319_ = v_tail_320_;
goto _start;
}
}
else
{
lean_del_object(v___x_351_);
lean_dec(v_head_349_);
if (lean_obj_tag(v_x_318_) == 0)
{
v_x_319_ = v_tail_320_;
goto _start;
}
else
{
lean_object* v_tail_361_; 
v_tail_361_ = lean_ctor_get(v_x_318_, 1);
lean_inc(v_tail_361_);
lean_dec_ref_known(v_x_318_, 2);
v_x_318_ = v_tail_361_;
v_x_319_ = v_tail_320_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter___redArg(lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_h__1_367_, lean_object* v_h__2_368_, lean_object* v_h__3_369_){
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve_match__1_splitter(lean_object* v_motive_376_, lean_object* v_x_377_, lean_object* v_x_378_, lean_object* v_h__1_379_, lean_object* v_h__2_380_, lean_object* v_h__3_381_){
_start:
{
if (lean_obj_tag(v_x_378_) == 0)
{
lean_object* v___x_382_; 
lean_dec(v_h__3_381_);
lean_dec(v_h__2_380_);
v___x_382_ = lean_apply_1(v_h__1_379_, v_x_377_);
return v___x_382_;
}
else
{
lean_object* v_tail_383_; 
lean_dec(v_h__1_379_);
v_tail_383_ = lean_ctor_get(v_x_378_, 1);
if (lean_obj_tag(v_tail_383_) == 0)
{
lean_object* v_head_384_; lean_object* v___x_385_; 
lean_dec(v_h__3_381_);
v_head_384_ = lean_ctor_get(v_x_378_, 0);
lean_inc(v_head_384_);
lean_dec_ref_known(v_x_378_, 2);
v___x_385_ = lean_apply_2(v_h__2_380_, v_x_377_, v_head_384_);
return v___x_385_;
}
else
{
lean_object* v_head_386_; lean_object* v___x_387_; 
lean_inc(v_tail_383_);
lean_dec(v_h__2_380_);
v_head_386_ = lean_ctor_get(v_x_378_, 0);
lean_inc(v_head_386_);
lean_dec_ref_known(v_x_378_, 2);
v___x_387_ = lean_apply_4(v_h__3_381_, v_x_377_, v_head_386_, v_tail_383_, lean_box(0));
return v___x_387_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(lean_object* v_x_388_){
_start:
{
if (lean_obj_tag(v_x_388_) == 0)
{
uint8_t v___x_389_; 
v___x_389_ = 1;
return v___x_389_;
}
else
{
lean_object* v_head_390_; lean_object* v_tail_391_; uint32_t v___x_421_; uint32_t v___x_422_; uint8_t v___x_423_; 
v_head_390_ = lean_ctor_get(v_x_388_, 0);
v_tail_391_ = lean_ctor_get(v_x_388_, 1);
v___x_421_ = 65;
v___x_422_ = lean_unbox_uint32(v_head_390_);
v___x_423_ = lean_uint32_dec_le(v___x_421_, v___x_422_);
if (v___x_423_ == 0)
{
goto v___jp_413_;
}
else
{
uint32_t v___x_424_; uint32_t v___x_425_; uint8_t v___x_426_; 
v___x_424_ = 90;
v___x_425_ = lean_unbox_uint32(v_head_390_);
v___x_426_ = lean_uint32_dec_le(v___x_425_, v___x_424_);
if (v___x_426_ == 0)
{
goto v___jp_413_;
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
v___jp_392_:
{
uint32_t v___x_393_; uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_393_ = 43;
v___x_394_ = lean_unbox_uint32(v_head_390_);
v___x_395_ = lean_uint32_dec_eq(v___x_394_, v___x_393_);
if (v___x_395_ == 0)
{
uint32_t v___x_396_; uint32_t v___x_397_; uint8_t v___x_398_; 
v___x_396_ = 45;
v___x_397_ = lean_unbox_uint32(v_head_390_);
v___x_398_ = lean_uint32_dec_eq(v___x_397_, v___x_396_);
if (v___x_398_ == 0)
{
uint32_t v___x_399_; uint32_t v___x_400_; uint8_t v___x_401_; 
v___x_399_ = 46;
v___x_400_ = lean_unbox_uint32(v_head_390_);
v___x_401_ = lean_uint32_dec_eq(v___x_400_, v___x_399_);
if (v___x_401_ == 0)
{
return v___x_401_;
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
v___jp_405_:
{
uint32_t v___x_406_; uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_406_ = 48;
v___x_407_ = lean_unbox_uint32(v_head_390_);
v___x_408_ = lean_uint32_dec_le(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
goto v___jp_392_;
}
else
{
uint32_t v___x_409_; uint32_t v___x_410_; uint8_t v___x_411_; 
v___x_409_ = 57;
v___x_410_ = lean_unbox_uint32(v_head_390_);
v___x_411_ = lean_uint32_dec_le(v___x_410_, v___x_409_);
if (v___x_411_ == 0)
{
goto v___jp_392_;
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
}
v___jp_413_:
{
uint32_t v___x_414_; uint32_t v___x_415_; uint8_t v___x_416_; 
v___x_414_ = 97;
v___x_415_ = lean_unbox_uint32(v_head_390_);
v___x_416_ = lean_uint32_dec_le(v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
goto v___jp_405_;
}
else
{
uint32_t v___x_417_; uint32_t v___x_418_; uint8_t v___x_419_; 
v___x_417_ = 122;
v___x_418_ = lean_unbox_uint32(v_head_390_);
v___x_419_ = lean_uint32_dec_le(v___x_418_, v___x_417_);
if (v___x_419_ == 0)
{
goto v___jp_405_;
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0___boxed(lean_object* v_x_428_){
_start:
{
uint8_t v_res_429_; lean_object* v_r_430_; 
v_res_429_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_x_428_);
lean_dec(v_x_428_);
v_r_430_ = lean_box(v_res_429_);
return v_r_430_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(lean_object* v_s_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_String_toListImpl(v_s_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 0;
return v___x_433_;
}
else
{
lean_object* v_head_434_; lean_object* v_tail_435_; uint32_t v___x_444_; uint32_t v___x_445_; uint8_t v___x_446_; 
v_head_434_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_head_434_);
v_tail_435_ = lean_ctor_get(v___x_432_, 1);
lean_inc(v_tail_435_);
lean_dec_ref_known(v___x_432_, 2);
v___x_444_ = 65;
v___x_445_ = lean_unbox_uint32(v_head_434_);
v___x_446_ = lean_uint32_dec_le(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
goto v___jp_436_;
}
else
{
uint32_t v___x_447_; uint32_t v___x_448_; uint8_t v___x_449_; 
v___x_447_ = 90;
v___x_448_ = lean_unbox_uint32(v_head_434_);
v___x_449_ = lean_uint32_dec_le(v___x_448_, v___x_447_);
if (v___x_449_ == 0)
{
goto v___jp_436_;
}
else
{
uint8_t v___x_450_; 
lean_dec(v_head_434_);
v___x_450_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_tail_435_);
lean_dec(v_tail_435_);
return v___x_450_;
}
}
v___jp_436_:
{
uint32_t v___x_437_; uint32_t v___x_438_; uint8_t v___x_439_; 
v___x_437_ = 97;
v___x_438_ = lean_unbox_uint32(v_head_434_);
v___x_439_ = lean_uint32_dec_le(v___x_437_, v___x_438_);
if (v___x_439_ == 0)
{
lean_dec(v_tail_435_);
lean_dec(v_head_434_);
return v___x_439_;
}
else
{
uint32_t v___x_440_; uint32_t v___x_441_; uint8_t v___x_442_; 
v___x_440_ = 122;
v___x_441_ = lean_unbox_uint32(v_head_434_);
lean_dec(v_head_434_);
v___x_442_ = lean_uint32_dec_le(v___x_441_, v___x_440_);
if (v___x_442_ == 0)
{
lean_dec(v_tail_435_);
return v___x_442_;
}
else
{
uint8_t v___x_443_; 
v___x_443_ = l_List_all___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_spec__0(v_tail_435_);
lean_dec(v_tail_435_);
return v___x_443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme___boxed(lean_object* v_s_451_){
_start:
{
uint8_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(v_s_451_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(uint8_t v___x_454_, lean_object* v_s_455_, lean_object* v_pos_456_){
_start:
{
lean_object* v_str_457_; lean_object* v_startInclusive_458_; lean_object* v_endExclusive_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v_decide_463_; 
v_str_457_ = lean_ctor_get(v_s_455_, 0);
v_startInclusive_458_ = lean_ctor_get(v_s_455_, 1);
v_endExclusive_459_ = lean_ctor_get(v_s_455_, 2);
v___x_460_ = lean_nat_add(v_startInclusive_458_, v_pos_456_);
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_nat_sub(v_endExclusive_459_, v___x_460_);
v_decide_463_ = lean_nat_dec_eq(v___x_461_, v___x_462_);
lean_dec(v___x_462_);
if (v_decide_463_ == 0)
{
uint32_t v___x_464_; uint32_t v___x_465_; uint8_t v___x_466_; 
v___x_464_ = lean_string_utf8_get_fast(v_str_457_, v___x_460_);
v___x_465_ = 47;
v___x_466_ = lean_uint32_dec_eq(v___x_464_, v___x_465_);
if (v___x_466_ == 0)
{
uint32_t v___x_467_; uint8_t v___x_468_; 
v___x_467_ = 92;
v___x_468_ = lean_uint32_dec_eq(v___x_464_, v___x_467_);
if (v___x_468_ == 0)
{
if (v___x_454_ == 0)
{
lean_dec(v___x_460_);
return v_pos_456_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_469_ = lean_string_utf8_next_fast(v_str_457_, v___x_460_);
v___x_470_ = lean_nat_sub(v___x_469_, v___x_460_);
lean_dec(v___x_460_);
v___x_471_ = lean_nat_add(v_pos_456_, v___x_470_);
lean_dec(v___x_470_);
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_nat_add(v_pos_456_, v___x_472_);
v___x_474_ = lean_nat_dec_le(v___x_473_, v___x_471_);
lean_dec(v___x_473_);
if (v___x_474_ == 0)
{
lean_dec(v___x_471_);
return v_pos_456_;
}
else
{
lean_dec(v_pos_456_);
v_pos_456_ = v___x_471_;
goto _start;
}
}
}
else
{
lean_dec(v___x_460_);
return v_pos_456_;
}
}
else
{
lean_dec(v___x_460_);
return v_pos_456_;
}
}
else
{
lean_dec(v___x_460_);
return v_pos_456_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1___boxed(lean_object* v___x_476_, lean_object* v_s_477_, lean_object* v_pos_478_){
_start:
{
uint8_t v___x_1002__boxed_479_; lean_object* v_res_480_; 
v___x_1002__boxed_479_ = lean_unbox(v___x_476_);
v_res_480_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v___x_1002__boxed_479_, v_s_477_, v_pos_478_);
lean_dec_ref(v_s_477_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(lean_object* v_s_481_, lean_object* v_pos_482_){
_start:
{
lean_object* v_str_483_; lean_object* v_startInclusive_484_; lean_object* v_endExclusive_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v_decide_489_; 
v_str_483_ = lean_ctor_get(v_s_481_, 0);
v_startInclusive_484_ = lean_ctor_get(v_s_481_, 1);
v_endExclusive_485_ = lean_ctor_get(v_s_481_, 2);
v___x_486_ = lean_nat_add(v_startInclusive_484_, v_pos_482_);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = lean_nat_sub(v_endExclusive_485_, v___x_486_);
v_decide_489_ = lean_nat_dec_eq(v___x_487_, v___x_488_);
lean_dec(v___x_488_);
if (v_decide_489_ == 0)
{
uint32_t v___x_490_; uint32_t v___x_491_; uint8_t v___x_492_; 
v___x_490_ = lean_string_utf8_get_fast(v_str_483_, v___x_486_);
v___x_491_ = 63;
v___x_492_ = lean_uint32_dec_eq(v___x_490_, v___x_491_);
if (v___x_492_ == 0)
{
uint32_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = 35;
v___x_494_ = lean_uint32_dec_eq(v___x_490_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_495_ = lean_string_utf8_next_fast(v_str_483_, v___x_486_);
v___x_496_ = lean_nat_sub(v___x_495_, v___x_486_);
lean_dec(v___x_486_);
v___x_497_ = lean_nat_add(v_pos_482_, v___x_496_);
lean_dec(v___x_496_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_nat_add(v_pos_482_, v___x_498_);
v___x_500_ = lean_nat_dec_le(v___x_499_, v___x_497_);
lean_dec(v___x_499_);
if (v___x_500_ == 0)
{
lean_dec(v___x_497_);
return v_pos_482_;
}
else
{
lean_dec(v_pos_482_);
v_pos_482_ = v___x_497_;
goto _start;
}
}
else
{
lean_dec(v___x_486_);
return v_pos_482_;
}
}
else
{
lean_dec(v___x_486_);
return v_pos_482_;
}
}
else
{
lean_dec(v___x_486_);
return v_pos_482_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0___boxed(lean_object* v_s_502_, lean_object* v_pos_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v_s_502_, v_pos_503_);
lean_dec_ref(v_s_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(lean_object* v_url_506_){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v_beforeQuery_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_string_utf8_byte_size(v_url_506_);
lean_inc_ref(v_url_506_);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v_url_506_);
lean_ctor_set(v___x_509_, 1, v___x_507_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
v___x_510_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v___x_509_, v___x_507_);
lean_dec_ref_known(v___x_509_, 3);
v___x_511_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_511_, 0, v_url_506_);
lean_ctor_set(v___x_511_, 1, v___x_507_);
lean_ctor_set(v___x_511_, 2, v___x_510_);
v_beforeQuery_512_ = l_String_Slice_toString(v___x_511_);
lean_dec_ref_known(v___x_511_, 3);
v___x_513_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0));
v___x_514_ = lean_box(0);
v___x_515_ = l_String_splitOnAux(v_beforeQuery_512_, v___x_513_, v___x_507_, v___x_507_, v___x_507_, v___x_514_);
if (lean_obj_tag(v___x_515_) == 1)
{
lean_object* v_tail_516_; 
v_tail_516_ = lean_ctor_get(v___x_515_, 1);
lean_inc(v_tail_516_);
if (lean_obj_tag(v_tail_516_) == 1)
{
lean_object* v_head_517_; uint8_t v___x_518_; 
v_head_517_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_head_517_);
lean_dec_ref_known(v___x_515_, 2);
v___x_518_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme(v_head_517_);
if (v___x_518_ == 0)
{
lean_dec_ref_known(v_tail_516_, 2);
return v_beforeQuery_512_;
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec_ref(v_beforeQuery_512_);
v___x_519_ = l_String_intercalate(v___x_513_, v_tail_516_);
v___x_520_ = lean_string_utf8_byte_size(v___x_519_);
lean_inc_ref(v___x_519_);
v___x_521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_507_);
lean_ctor_set(v___x_521_, 2, v___x_520_);
v___x_522_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v___x_518_, v___x_521_, v___x_507_);
lean_dec_ref_known(v___x_521_, 3);
v___x_523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_523_, 0, v___x_519_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
lean_ctor_set(v___x_523_, 2, v___x_520_);
v___x_524_ = l_String_Slice_toString(v___x_523_);
lean_dec_ref_known(v___x_523_, 3);
return v___x_524_;
}
}
else
{
lean_dec_ref_known(v___x_515_, 2);
lean_dec(v_tail_516_);
return v_beforeQuery_512_;
}
}
else
{
lean_dec(v___x_515_);
return v_beforeQuery_512_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(lean_object* v_r_525_){
_start:
{
lean_object* v___y_527_; lean_object* v_url_532_; lean_object* v_raw_533_; lean_object* v___x_534_; 
v_url_532_ = lean_ctor_get(v_r_525_, 1);
lean_inc_ref(v_url_532_);
lean_dec_ref(v_r_525_);
v_raw_533_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(v_url_532_);
lean_inc_ref(v_raw_533_);
v___x_534_ = l_String_toListImpl(v_raw_533_);
if (lean_obj_tag(v___x_534_) == 0)
{
v___y_527_ = v_raw_533_;
goto v___jp_526_;
}
else
{
lean_object* v_head_535_; lean_object* v_tail_536_; uint32_t v___x_537_; uint32_t v___x_538_; uint8_t v___x_539_; 
v_head_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_head_535_);
v_tail_536_ = lean_ctor_get(v___x_534_, 1);
lean_inc(v_tail_536_);
lean_dec_ref_known(v___x_534_, 2);
v___x_537_ = 47;
v___x_538_ = lean_unbox_uint32(v_head_535_);
v___x_539_ = lean_uint32_dec_eq(v___x_538_, v___x_537_);
if (v___x_539_ == 0)
{
uint32_t v___x_540_; uint32_t v___x_541_; uint8_t v___x_542_; 
v___x_540_ = 92;
v___x_541_ = lean_unbox_uint32(v_head_535_);
lean_dec(v_head_535_);
v___x_542_ = lean_uint32_dec_eq(v___x_541_, v___x_540_);
if (v___x_542_ == 0)
{
lean_dec(v_tail_536_);
v___y_527_ = v_raw_533_;
goto v___jp_526_;
}
else
{
lean_object* v___x_543_; 
lean_dec_ref(v_raw_533_);
v___x_543_ = lean_string_mk(v_tail_536_);
v___y_527_ = v___x_543_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_544_; 
lean_dec(v_head_535_);
lean_dec_ref(v_raw_533_);
v___x_544_ = lean_string_mk(v_tail_536_);
v___y_527_ = v___x_544_;
goto v___jp_526_;
}
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = lean_box(0);
v___x_529_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(v___y_527_);
v___x_530_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(v___x_528_, v___x_529_);
v___x_531_ = l_List_reverse___redArg(v___x_530_);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_548_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_546_);
v___x_549_ = l_String_intercalate(v___x_547_, v___x_548_);
v___x_550_ = lean_string_append(v___x_547_, v___x_549_);
lean_dec_ref(v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_551_, lean_object* v_pos_552_){
_start:
{
lean_object* v_str_553_; lean_object* v_startInclusive_554_; lean_object* v_endExclusive_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v_decide_559_; 
v_str_553_ = lean_ctor_get(v_s_551_, 0);
v_startInclusive_554_ = lean_ctor_get(v_s_551_, 1);
v_endExclusive_555_ = lean_ctor_get(v_s_551_, 2);
v___x_556_ = lean_nat_add(v_startInclusive_554_, v_pos_552_);
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = lean_nat_sub(v_endExclusive_555_, v___x_556_);
v_decide_559_ = lean_nat_dec_eq(v___x_557_, v___x_558_);
lean_dec(v___x_558_);
if (v_decide_559_ == 0)
{
uint32_t v___x_560_; uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_560_ = lean_string_utf8_get_fast(v_str_553_, v___x_556_);
v___x_561_ = 35;
v___x_562_ = lean_uint32_dec_eq(v___x_560_, v___x_561_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_563_ = lean_string_utf8_next_fast(v_str_553_, v___x_556_);
v___x_564_ = lean_nat_sub(v___x_563_, v___x_556_);
lean_dec(v___x_556_);
v___x_565_ = lean_nat_add(v_pos_552_, v___x_564_);
lean_dec(v___x_564_);
v___x_566_ = lean_unsigned_to_nat(1u);
v___x_567_ = lean_nat_add(v_pos_552_, v___x_566_);
v___x_568_ = lean_nat_dec_le(v___x_567_, v___x_565_);
lean_dec(v___x_567_);
if (v___x_568_ == 0)
{
lean_dec(v___x_565_);
return v_pos_552_;
}
else
{
lean_dec(v_pos_552_);
v_pos_552_ = v___x_565_;
goto _start;
}
}
else
{
lean_dec(v___x_556_);
return v_pos_552_;
}
}
else
{
lean_dec(v___x_556_);
return v_pos_552_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_570_, lean_object* v_pos_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_570_, v_pos_571_);
lean_dec_ref(v_s_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_574_){
_start:
{
lean_object* v_url_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_url_575_ = lean_ctor_get(v_r_574_, 1);
v___x_576_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_577_ = lean_unsigned_to_nat(0u);
v___x_578_ = lean_box(0);
v___x_579_ = l_String_splitOnAux(v_url_575_, v___x_576_, v___x_577_, v___x_577_, v___x_577_, v___x_578_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v___x_580_; 
v___x_580_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_580_;
}
else
{
lean_object* v_tail_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v_tail_581_ = lean_ctor_get(v___x_579_, 1);
lean_inc(v_tail_581_);
lean_dec_ref_known(v___x_579_, 2);
v___x_582_ = l_String_intercalate(v___x_576_, v_tail_581_);
v___x_583_ = lean_string_utf8_byte_size(v___x_582_);
lean_inc_ref(v___x_582_);
v___x_584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_577_);
lean_ctor_set(v___x_584_, 2, v___x_583_);
v___x_585_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_584_, v___x_577_);
lean_dec_ref_known(v___x_584_, 3);
v___x_586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_586_, 0, v___x_582_);
lean_ctor_set(v___x_586_, 1, v___x_577_);
lean_ctor_set(v___x_586_, 2, v___x_585_);
v___x_587_ = l_String_Slice_toString(v___x_586_);
lean_dec_ref_known(v___x_586_, 3);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lasm_Fetch_Request_query(v_r_588_);
lean_dec_ref(v_r_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
if (lean_obj_tag(v_a_591_) == 0)
{
lean_object* v___x_593_; 
v___x_593_ = lean_array_to_list(v_a_592_);
return v___x_593_;
}
else
{
lean_object* v_head_594_; lean_object* v_tail_595_; lean_object* v_val_597_; lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v_head_594_ = lean_ctor_get(v_a_591_, 0);
v_tail_595_ = lean_ctor_get(v_a_591_, 1);
v___x_600_ = lean_string_utf8_byte_size(v_head_594_);
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_nat_dec_eq(v___x_600_, v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_604_ = lean_box(0);
v___x_605_ = l_String_splitOnAux(v_head_594_, v___x_603_, v___x_601_, v___x_601_, v___x_601_, v___x_604_);
if (lean_obj_tag(v___x_605_) == 0)
{
v_a_591_ = v_tail_595_;
goto _start;
}
else
{
lean_object* v_head_607_; lean_object* v_tail_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_624_; 
v_head_607_ = lean_ctor_get(v___x_605_, 0);
v_tail_608_ = lean_ctor_get(v___x_605_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_624_ == 0)
{
v___x_610_ = v___x_605_;
v_isShared_611_ = v_isSharedCheck_624_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_tail_608_);
lean_inc(v_head_607_);
lean_dec(v___x_605_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_624_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
uint8_t v___x_612_; 
v___x_612_ = 1;
if (lean_obj_tag(v_tail_608_) == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_613_ = l_Lasm_Fetch_percentDecode(v_head_607_, v___x_612_);
v___x_614_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_611_ == 0)
{
lean_ctor_set_tag(v___x_610_, 0);
lean_ctor_set(v___x_610_, 1, v___x_614_);
lean_ctor_set(v___x_610_, 0, v___x_613_);
v___x_616_ = v___x_610_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
v_val_597_ = v___x_616_;
goto v___jp_596_;
}
}
else
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_618_ = l_Lasm_Fetch_percentDecode(v_head_607_, v___x_612_);
v___x_619_ = l_String_intercalate(v___x_603_, v_tail_608_);
v___x_620_ = l_Lasm_Fetch_percentDecode(v___x_619_, v___x_612_);
if (v_isShared_611_ == 0)
{
lean_ctor_set_tag(v___x_610_, 0);
lean_ctor_set(v___x_610_, 1, v___x_620_);
lean_ctor_set(v___x_610_, 0, v___x_618_);
v___x_622_ = v___x_610_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
v_val_597_ = v___x_622_;
goto v___jp_596_;
}
}
}
}
}
else
{
v_a_591_ = v_tail_595_;
goto _start;
}
v___jp_596_:
{
lean_object* v___x_598_; 
v___x_598_ = lean_array_push(v_a_592_, v_val_597_);
v_a_591_ = v_tail_595_;
v_a_592_ = v___x_598_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_626_, v_a_627_);
lean_dec(v_a_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_631_ = l_Lasm_Fetch_Request_query(v_r_630_);
v___x_632_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = lean_box(0);
v___x_635_ = l_String_splitOnAux(v___x_631_, v___x_632_, v___x_633_, v___x_633_, v___x_633_, v___x_634_);
lean_dec_ref(v___x_631_);
v___x_636_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_637_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_635_, v___x_636_);
lean_dec(v___x_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_Fetch_Request_queryParams(v_r_638_);
lean_dec_ref(v_r_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_641_) == 0)
{
lean_object* v___x_642_; 
v___x_642_ = lean_box(0);
return v___x_642_;
}
else
{
lean_object* v_head_643_; lean_object* v_tail_644_; lean_object* v_fst_645_; lean_object* v_snd_646_; uint8_t v___x_647_; 
v_head_643_ = lean_ctor_get(v_x_641_, 0);
v_tail_644_ = lean_ctor_get(v_x_641_, 1);
v_fst_645_ = lean_ctor_get(v_head_643_, 0);
v_snd_646_ = lean_ctor_get(v_head_643_, 1);
v___x_647_ = lean_string_dec_eq(v_x_640_, v_fst_645_);
if (v___x_647_ == 0)
{
v_x_641_ = v_tail_644_;
goto _start;
}
else
{
lean_object* v___x_649_; 
lean_inc(v_snd_646_);
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v_snd_646_);
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_650_, lean_object* v_x_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_650_, v_x_651_);
lean_dec(v_x_651_);
lean_dec_ref(v_x_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_653_, lean_object* v_name_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = l_Lasm_Fetch_Request_queryParams(v_r_653_);
v___x_656_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_654_, v___x_655_);
lean_dec(v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_657_, lean_object* v_name_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_657_, v_name_658_);
lean_dec_ref(v_name_658_);
lean_dec_ref(v_r_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_661_, v_x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_664_, lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_664_, v_x_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec_ref(v_x_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
if (lean_obj_tag(v_a_668_) == 0)
{
lean_object* v___x_670_; 
v___x_670_ = l_List_reverse___redArg(v_a_669_);
return v___x_670_;
}
else
{
lean_object* v_head_671_; lean_object* v_tail_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_682_; 
v_head_671_ = lean_ctor_get(v_a_668_, 0);
v_tail_672_ = lean_ctor_get(v_a_668_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_a_668_);
if (v_isSharedCheck_682_ == 0)
{
v___x_674_ = v_a_668_;
v_isShared_675_ = v_isSharedCheck_682_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_tail_672_);
lean_inc(v_head_671_);
lean_dec(v_a_668_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_682_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = 0;
v___x_677_ = l_Lasm_Fetch_percentDecode(v_head_671_, v___x_676_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 1, v_a_669_);
lean_ctor_set(v___x_674_, 0, v___x_677_);
v___x_679_ = v___x_674_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_a_669_);
v___x_679_ = v_reuseFailAlloc_681_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
v_a_668_ = v_tail_672_;
v_a_669_ = v___x_679_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
if (lean_obj_tag(v_a_683_) == 0)
{
lean_object* v___x_685_; 
v___x_685_ = l_List_reverse___redArg(v_a_684_);
return v___x_685_;
}
else
{
lean_object* v_head_686_; lean_object* v_tail_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_699_; 
v_head_686_ = lean_ctor_get(v_a_683_, 0);
v_tail_687_ = lean_ctor_get(v_a_683_, 1);
v_isSharedCheck_699_ = !lean_is_exclusive(v_a_683_);
if (v_isSharedCheck_699_ == 0)
{
v___x_689_ = v_a_683_;
v_isShared_690_ = v_isSharedCheck_699_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_tail_687_);
lean_inc(v_head_686_);
lean_dec(v_a_683_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_699_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_string_utf8_byte_size(v_head_686_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_695_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 1, v_a_684_);
v___x_695_ = v___x_689_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_head_686_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_a_684_);
v___x_695_ = v_reuseFailAlloc_697_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
v_a_683_ = v_tail_687_;
v_a_684_ = v___x_695_;
goto _start;
}
}
else
{
lean_del_object(v___x_689_);
lean_dec(v_head_686_);
v_a_683_ = v_tail_687_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_700_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_701_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_700_);
v___x_702_ = lean_box(0);
v___x_703_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_701_, v___x_702_);
v___x_704_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_703_, v___x_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter___redArg(lean_object* v_x_705_, lean_object* v_h__1_706_, lean_object* v_h__2_707_){
_start:
{
if (lean_obj_tag(v_x_705_) == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; 
lean_dec(v_h__1_706_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_apply_1(v_h__2_707_, v___x_708_);
return v___x_709_;
}
else
{
lean_object* v_head_710_; lean_object* v_tail_711_; lean_object* v___x_712_; 
lean_dec(v_h__2_707_);
v_head_710_ = lean_ctor_get(v_x_705_, 0);
lean_inc(v_head_710_);
v_tail_711_ = lean_ctor_get(v_x_705_, 1);
lean_inc(v_tail_711_);
lean_dec_ref_known(v_x_705_, 2);
v___x_712_ = lean_apply_2(v_h__1_706_, v_head_710_, v_tail_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_isScheme_match__1_splitter(lean_object* v_motive_713_, lean_object* v_x_714_, lean_object* v_h__1_715_, lean_object* v_h__2_716_){
_start:
{
if (lean_obj_tag(v_x_714_) == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; 
lean_dec(v_h__1_715_);
v___x_717_ = lean_box(0);
v___x_718_ = lean_apply_1(v_h__2_716_, v___x_717_);
return v___x_718_;
}
else
{
lean_object* v_head_719_; lean_object* v_tail_720_; lean_object* v___x_721_; 
lean_dec(v_h__2_716_);
v_head_719_ = lean_ctor_get(v_x_714_, 0);
lean_inc(v_head_719_);
v_tail_720_ = lean_ctor_get(v_x_714_, 1);
lean_inc(v_tail_720_);
lean_dec_ref_known(v_x_714_, 2);
v___x_721_ = lean_apply_2(v_h__1_715_, v_head_719_, v_tail_720_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf(lean_object* v_url_723_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___f_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_724_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_725_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_726_ = l_ByteArray_empty;
v___f_727_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_728_, 0, v___x_724_);
lean_ctor_set(v___x_728_, 1, v_url_723_);
lean_ctor_set(v___x_728_, 2, v___x_725_);
lean_ctor_set(v___x_728_, 3, v___x_726_);
lean_ctor_set(v___x_728_, 4, v___f_727_);
v___x_729_ = l_Lasm_Fetch_Request_path(v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_733_, lean_object* v_as_734_, size_t v_sz_735_, size_t v_i_736_, lean_object* v_b_737_){
_start:
{
uint8_t v___x_738_; 
v___x_738_ = lean_usize_dec_lt(v_i_736_, v_sz_735_);
if (v___x_738_ == 0)
{
lean_inc_ref(v_b_737_);
return v_b_737_;
}
else
{
lean_object* v_a_739_; lean_object* v_fst_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_a_739_ = lean_array_uget_borrowed(v_as_734_, v_i_736_);
v_fst_740_ = lean_ctor_get(v_a_739_, 0);
v___x_741_ = lean_box(0);
lean_inc(v_fst_740_);
v___x_742_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_740_);
v___x_743_ = lean_string_dec_eq(v___x_742_, v_n_733_);
lean_dec_ref(v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; size_t v___x_745_; size_t v___x_746_; 
v___x_744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_745_ = ((size_t)1ULL);
v___x_746_ = lean_usize_add(v_i_736_, v___x_745_);
v_i_736_ = v___x_746_;
v_b_737_ = v___x_744_;
goto _start;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
lean_inc(v_a_739_);
v___x_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_748_, 0, v_a_739_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___x_741_);
return v___x_750_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_751_, lean_object* v_as_752_, lean_object* v_sz_753_, lean_object* v_i_754_, lean_object* v_b_755_){
_start:
{
size_t v_sz_boxed_756_; size_t v_i_boxed_757_; lean_object* v_res_758_; 
v_sz_boxed_756_ = lean_unbox_usize(v_sz_753_);
lean_dec(v_sz_753_);
v_i_boxed_757_ = lean_unbox_usize(v_i_754_);
lean_dec(v_i_754_);
v_res_758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_751_, v_as_752_, v_sz_boxed_756_, v_i_boxed_757_, v_b_755_);
lean_dec_ref(v_b_755_);
lean_dec_ref(v_as_752_);
lean_dec_ref(v_n_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_759_, lean_object* v_name_760_){
_start:
{
lean_object* v_headers_761_; lean_object* v_n_762_; lean_object* v___x_763_; lean_object* v___x_764_; size_t v_sz_765_; size_t v___x_766_; lean_object* v___x_767_; lean_object* v_fst_768_; 
v_headers_761_ = lean_ctor_get(v_r_759_, 2);
v_n_762_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_760_);
v___x_763_ = lean_box(0);
v___x_764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_765_ = lean_array_size(v_headers_761_);
v___x_766_ = ((size_t)0ULL);
v___x_767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_762_, v_headers_761_, v_sz_765_, v___x_766_, v___x_764_);
lean_dec_ref(v_n_762_);
v_fst_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_fst_768_);
lean_dec_ref(v___x_767_);
if (lean_obj_tag(v_fst_768_) == 0)
{
return v___x_763_;
}
else
{
lean_object* v_val_769_; 
v_val_769_ = lean_ctor_get(v_fst_768_, 0);
lean_inc(v_val_769_);
lean_dec_ref_known(v_fst_768_, 1);
if (lean_obj_tag(v_val_769_) == 0)
{
return v___x_763_;
}
else
{
lean_object* v_val_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_778_; 
v_val_770_ = lean_ctor_get(v_val_769_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v_val_769_);
if (v_isSharedCheck_778_ == 0)
{
v___x_772_ = v_val_769_;
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_val_770_);
lean_dec(v_val_769_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v_snd_774_; lean_object* v___x_776_; 
v_snd_774_ = lean_ctor_get(v_val_770_, 1);
lean_inc(v_snd_774_);
lean_dec(v_val_770_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_snd_774_);
v___x_776_ = v___x_772_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_snd_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_779_, lean_object* v_name_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lasm_Fetch_Request_header_x3f(v_r_779_, v_name_780_);
lean_dec_ref(v_r_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_782_){
_start:
{
lean_object* v_body_783_; uint8_t v___x_784_; 
v_body_783_ = lean_ctor_get(v_r_782_, 3);
lean_inc_ref(v_body_783_);
lean_dec_ref(v_r_782_);
v___x_784_ = lean_string_validate_utf8(v_body_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; 
lean_dec_ref(v_body_783_);
v___x_785_ = lean_box(0);
return v___x_785_;
}
else
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_string_from_utf8_unchecked(v_body_783_);
v___x_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_788_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lasm_Fetch_Request_text_x3f(v_r_788_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v___x_790_; 
v___x_790_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_790_;
}
else
{
lean_object* v_val_791_; 
v_val_791_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v___x_789_, 1);
return v_val_791_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_792_, lean_object* v_r_793_, lean_object* v_x_794_){
_start:
{
if (lean_obj_tag(v_x_794_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_804_; 
lean_dec_ref(v_r_793_);
lean_dec_ref(v_acc_792_);
v_a_796_ = lean_ctor_get(v_x_794_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_x_794_);
if (v_isSharedCheck_804_ == 0)
{
v___x_798_ = v_x_794_;
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v_x_794_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_803_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_802_; 
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_820_; 
v_a_805_ = lean_ctor_get(v_x_794_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_x_794_);
if (v_isSharedCheck_820_ == 0)
{
v___x_807_ = v_x_794_;
v_isShared_808_ = v_isSharedCheck_820_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v_x_794_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_820_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
if (lean_obj_tag(v_a_805_) == 0)
{
lean_object* v___x_810_; 
lean_dec_ref(v_r_793_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v_acc_792_);
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_acc_792_);
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
else
{
lean_object* v_val_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
lean_del_object(v___x_807_);
v_val_813_ = lean_ctor_get(v_a_805_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v_a_805_, 1);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_byte_array_size(v_acc_792_);
v___x_816_ = lean_byte_array_size(v_val_813_);
v___x_817_ = 0;
v___x_818_ = lean_byte_array_copy_slice(v_val_813_, v___x_814_, v_acc_792_, v___x_815_, v___x_816_, v___x_817_);
lean_dec(v_val_813_);
v___x_819_ = l_Lasm_Fetch_Request_readAll_loop(v_r_793_, v___x_818_);
return v___x_819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_821_, lean_object* v_r_822_, lean_object* v_x_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_821_, v_r_822_, v_x_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_826_, lean_object* v_acc_827_){
_start:
{
lean_object* v_read_829_; lean_object* v___f_830_; lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_read_829_ = lean_ctor_get(v_r_826_, 4);
lean_inc_ref(v_read_829_);
v___f_830_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_830_, 0, v_acc_827_);
lean_closure_set(v___f_830_, 1, v_r_826_);
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = 0;
v___x_833_ = lean_apply_1(v_read_829_, lean_box(0));
v___x_834_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_831_, v___x_832_, v___x_833_, v___f_830_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_835_, lean_object* v_acc_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lasm_Fetch_Request_readAll_loop(v_r_835_, v_acc_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_839_){
_start:
{
lean_object* v_body_841_; lean_object* v___x_842_; 
v_body_841_ = lean_ctor_get(v_r_839_, 3);
lean_inc_ref(v_body_841_);
v___x_842_ = l_Lasm_Fetch_Request_readAll_loop(v_r_839_, v_body_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lasm_Fetch_Request_readAll(v_r_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_847_, lean_object* v_contentType_848_, uint16_t v_status_849_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_850_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v_contentType_848_);
v___x_852_ = lean_unsigned_to_nat(1u);
v___x_853_ = lean_mk_empty_array_with_capacity(v___x_852_);
v___x_854_ = lean_array_push(v___x_853_, v___x_851_);
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v_body_847_);
lean_ctor_set(v___x_856_, 2, v___x_855_);
lean_ctor_set_uint16(v___x_856_, sizeof(void*)*3, v_status_849_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_857_, lean_object* v_contentType_858_, lean_object* v_status_859_){
_start:
{
uint16_t v_status_boxed_860_; lean_object* v_res_861_; 
v_status_boxed_860_ = lean_unbox(v_status_859_);
v_res_861_ = l_Lasm_Fetch_Response_withBody(v_body_857_, v_contentType_858_, v_status_boxed_860_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_863_, uint16_t v_status_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_865_ = lean_string_to_utf8(v_body_863_);
v___x_866_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_867_ = l_Lasm_Fetch_Response_withBody(v___x_865_, v___x_866_, v_status_864_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_868_, lean_object* v_status_869_){
_start:
{
uint16_t v_status_boxed_870_; lean_object* v_res_871_; 
v_status_boxed_870_ = lean_unbox(v_status_869_);
v_res_871_ = l_Lasm_Fetch_Response_text(v_body_868_, v_status_boxed_870_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_873_, uint16_t v_status_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_875_ = lean_string_to_utf8(v_body_873_);
v___x_876_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_877_ = l_Lasm_Fetch_Response_withBody(v___x_875_, v___x_876_, v_status_874_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_878_, lean_object* v_status_879_){
_start:
{
uint16_t v_status_boxed_880_; lean_object* v_res_881_; 
v_status_boxed_880_ = lean_unbox(v_status_879_);
v_res_881_ = l_Lasm_Fetch_Response_html(v_body_878_, v_status_boxed_880_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_883_, uint16_t v_status_884_){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_885_ = lean_string_to_utf8(v_body_883_);
v___x_886_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_887_ = l_Lasm_Fetch_Response_withBody(v___x_885_, v___x_886_, v_status_884_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_888_, lean_object* v_status_889_){
_start:
{
uint16_t v_status_boxed_890_; lean_object* v_res_891_; 
v_status_boxed_890_ = lean_unbox(v_status_889_);
v_res_891_ = l_Lasm_Fetch_Response_json(v_body_888_, v_status_boxed_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_892_, lean_object* v_contentType_893_, uint16_t v_status_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lasm_Fetch_Response_withBody(v_body_892_, v_contentType_893_, v_status_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_896_, lean_object* v_contentType_897_, lean_object* v_status_898_){
_start:
{
uint16_t v_status_boxed_899_; lean_object* v_res_900_; 
v_status_boxed_899_ = lean_unbox(v_status_898_);
v_res_900_ = l_Lasm_Fetch_Response_bytes(v_body_896_, v_contentType_897_, v_status_boxed_899_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_902_, uint16_t v_status_903_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_904_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v_location_902_);
v___x_906_ = lean_unsigned_to_nat(1u);
v___x_907_ = lean_mk_empty_array_with_capacity(v___x_906_);
v___x_908_ = lean_array_push(v___x_907_, v___x_905_);
v___x_909_ = l_ByteArray_empty;
v___x_910_ = lean_box(0);
v___x_911_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_911_, 0, v___x_908_);
lean_ctor_set(v___x_911_, 1, v___x_909_);
lean_ctor_set(v___x_911_, 2, v___x_910_);
lean_ctor_set_uint16(v___x_911_, sizeof(void*)*3, v_status_903_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_912_, lean_object* v_status_913_){
_start:
{
uint16_t v_status_boxed_914_; lean_object* v_res_915_; 
v_status_boxed_914_ = lean_unbox(v_status_913_);
v_res_915_ = l_Lasm_Fetch_Response_redirect(v_location_912_, v_status_boxed_914_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_916_, lean_object* v_contentType_917_, uint16_t v_status_918_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_919_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v_contentType_917_);
v___x_921_ = lean_unsigned_to_nat(1u);
v___x_922_ = lean_mk_empty_array_with_capacity(v___x_921_);
v___x_923_ = lean_array_push(v___x_922_, v___x_920_);
v___x_924_ = l_ByteArray_empty;
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v_produce_916_);
v___x_926_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_926_, 0, v___x_923_);
lean_ctor_set(v___x_926_, 1, v___x_924_);
lean_ctor_set(v___x_926_, 2, v___x_925_);
lean_ctor_set_uint16(v___x_926_, sizeof(void*)*3, v_status_918_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_927_, lean_object* v_contentType_928_, lean_object* v_status_929_){
_start:
{
uint16_t v_status_boxed_930_; lean_object* v_res_931_; 
v_status_boxed_930_ = lean_unbox(v_status_929_);
v_res_931_ = l_Lasm_Fetch_Response_streaming(v_produce_927_, v_contentType_928_, v_status_boxed_930_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_932_){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_933_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_934_ = l_ByteArray_empty;
v___x_935_ = lean_box(0);
v___x_936_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_936_, 0, v___x_933_);
lean_ctor_set(v___x_936_, 1, v___x_934_);
lean_ctor_set(v___x_936_, 2, v___x_935_);
lean_ctor_set_uint16(v___x_936_, sizeof(void*)*3, v_status_932_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_937_){
_start:
{
uint16_t v_status_boxed_938_; lean_object* v_res_939_; 
v_status_boxed_938_ = lean_unbox(v_status_937_);
v_res_939_ = l_Lasm_Fetch_Response_empty(v_status_boxed_938_);
return v_res_939_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_941_ = 404;
v___x_942_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_943_ = l_Lasm_Fetch_Response_text(v___x_942_, v___x_941_);
return v___x_943_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_945_, lean_object* v_name_946_, lean_object* v_value_947_){
_start:
{
uint16_t v_status_948_; lean_object* v_headers_949_; lean_object* v_body_950_; lean_object* v_stream_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_960_; 
v_status_948_ = lean_ctor_get_uint16(v_r_945_, sizeof(void*)*3);
v_headers_949_ = lean_ctor_get(v_r_945_, 0);
v_body_950_ = lean_ctor_get(v_r_945_, 1);
v_stream_951_ = lean_ctor_get(v_r_945_, 2);
v_isSharedCheck_960_ = !lean_is_exclusive(v_r_945_);
if (v_isSharedCheck_960_ == 0)
{
v___x_953_ = v_r_945_;
v_isShared_954_ = v_isSharedCheck_960_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_stream_951_);
lean_inc(v_body_950_);
lean_inc(v_headers_949_);
lean_dec(v_r_945_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_960_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_955_, 0, v_name_946_);
lean_ctor_set(v___x_955_, 1, v_value_947_);
v___x_956_ = lean_array_push(v_headers_949_, v___x_955_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_body_950_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v_stream_951_);
lean_ctor_set_uint16(v_reuseFailAlloc_959_, sizeof(void*)*3, v_status_948_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_961_, uint16_t v_status_962_){
_start:
{
lean_object* v_headers_963_; lean_object* v_body_964_; lean_object* v_stream_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_headers_963_ = lean_ctor_get(v_r_961_, 0);
v_body_964_ = lean_ctor_get(v_r_961_, 1);
v_stream_965_ = lean_ctor_get(v_r_961_, 2);
v_isSharedCheck_972_ = !lean_is_exclusive(v_r_961_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v_r_961_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_stream_965_);
lean_inc(v_body_964_);
lean_inc(v_headers_963_);
lean_dec(v_r_961_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
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
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_headers_963_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_body_964_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_stream_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_ctor_set_uint16(v___x_970_, sizeof(void*)*3, v_status_962_);
return v___x_970_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_973_, lean_object* v_status_974_){
_start:
{
uint16_t v_status_boxed_975_; lean_object* v_res_976_; 
v_status_boxed_975_ = lean_unbox(v_status_974_);
v_res_976_ = l_Lasm_Fetch_Response_withStatus(v_r_973_, v_status_boxed_975_);
return v_res_976_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0));
v___x_979_ = l_String_toListImpl(v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(lean_object* v_l_980_, lean_object* v_a_981_, lean_object* v_a_982_){
_start:
{
if (lean_obj_tag(v_a_981_) == 0)
{
lean_dec_ref(v_a_982_);
lean_inc(v_l_980_);
return v_l_980_;
}
else
{
lean_object* v_head_983_; lean_object* v_tail_984_; uint32_t v___x_1007_; uint32_t v___x_1008_; uint8_t v___x_1009_; 
v_head_983_ = lean_ctor_get(v_a_981_, 0);
lean_inc(v_head_983_);
v_tail_984_ = lean_ctor_get(v_a_981_, 1);
lean_inc(v_tail_984_);
lean_dec_ref_known(v_a_981_, 2);
v___x_1007_ = 65;
v___x_1008_ = lean_unbox_uint32(v_head_983_);
v___x_1009_ = lean_uint32_dec_le(v___x_1007_, v___x_1008_);
if (v___x_1009_ == 0)
{
goto v___jp_1000_;
}
else
{
uint32_t v___x_1010_; uint32_t v___x_1011_; uint8_t v___x_1012_; 
v___x_1010_ = 90;
v___x_1011_ = lean_unbox_uint32(v_head_983_);
v___x_1012_ = lean_uint32_dec_le(v___x_1011_, v___x_1010_);
if (v___x_1012_ == 0)
{
goto v___jp_1000_;
}
else
{
goto v___jp_985_;
}
}
v___jp_985_:
{
lean_object* v___x_986_; 
v___x_986_ = lean_array_push(v_a_982_, v_head_983_);
v_a_981_ = v_tail_984_;
v_a_982_ = v___x_986_;
goto _start;
}
v___jp_988_:
{
lean_object* v___x_989_; uint32_t v___x_990_; uint8_t v___x_991_; 
v___x_989_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1, &l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1_once, _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1);
v___x_990_ = lean_unbox_uint32(v_head_983_);
v___x_991_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(v___x_990_, v___x_989_);
if (v___x_991_ == 0)
{
lean_object* v___x_992_; 
lean_dec(v_tail_984_);
lean_dec(v_head_983_);
v___x_992_ = lean_array_to_list(v_a_982_);
return v___x_992_;
}
else
{
goto v___jp_985_;
}
}
v___jp_993_:
{
uint32_t v___x_994_; uint32_t v___x_995_; uint8_t v___x_996_; 
v___x_994_ = 48;
v___x_995_ = lean_unbox_uint32(v_head_983_);
v___x_996_ = lean_uint32_dec_le(v___x_994_, v___x_995_);
if (v___x_996_ == 0)
{
goto v___jp_988_;
}
else
{
uint32_t v___x_997_; uint32_t v___x_998_; uint8_t v___x_999_; 
v___x_997_ = 57;
v___x_998_ = lean_unbox_uint32(v_head_983_);
v___x_999_ = lean_uint32_dec_le(v___x_998_, v___x_997_);
if (v___x_999_ == 0)
{
goto v___jp_988_;
}
else
{
goto v___jp_985_;
}
}
}
v___jp_1000_:
{
uint32_t v___x_1001_; uint32_t v___x_1002_; uint8_t v___x_1003_; 
v___x_1001_ = 97;
v___x_1002_ = lean_unbox_uint32(v_head_983_);
v___x_1003_ = lean_uint32_dec_le(v___x_1001_, v___x_1002_);
if (v___x_1003_ == 0)
{
goto v___jp_993_;
}
else
{
uint32_t v___x_1004_; uint32_t v___x_1005_; uint8_t v___x_1006_; 
v___x_1004_ = 122;
v___x_1005_ = lean_unbox_uint32(v_head_983_);
v___x_1006_ = lean_uint32_dec_le(v___x_1005_, v___x_1004_);
if (v___x_1006_ == 0)
{
goto v___jp_993_;
}
else
{
goto v___jp_985_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___boxed(lean_object* v_l_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_l_1013_, v_a_1014_, v_a_1015_);
lean_dec(v_l_1013_);
return v_res_1016_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = 61;
v___x_1020_ = lean_box_uint32(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1;
v___x_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(lean_object* v_s_1023_){
_start:
{
lean_object* v___x_1024_; lean_object* v_name_1025_; uint8_t v___x_1026_; 
v___x_1024_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0));
lean_inc(v_s_1023_);
v_name_1025_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_s_1023_, v_s_1023_, v___x_1024_);
v___x_1026_ = l_List_isEmpty___redArg(v_name_1025_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1027_ = l_List_lengthTR___redArg(v_name_1025_);
lean_dec(v_name_1025_);
v___x_1028_ = l_List_drop___redArg(v___x_1027_, v_s_1023_);
lean_dec(v_s_1023_);
v___x_1029_ = l_List_head_x3f___redArg(v___x_1028_);
lean_dec(v___x_1028_);
v___x_1030_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1, &l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1);
v___x_1031_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1029_, v___x_1030_);
lean_dec(v___x_1029_);
return v___x_1031_;
}
else
{
uint8_t v___x_1032_; 
lean_dec(v_name_1025_);
lean_dec(v_s_1023_);
v___x_1032_ = 0;
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___boxed(lean_object* v_s_1033_){
_start:
{
uint8_t v_res_1034_; lean_object* v_r_1035_; 
v_res_1034_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_s_1033_);
v_r_1035_ = lean_box(v_res_1034_);
return v_r_1035_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(lean_object* v_x_1036_){
_start:
{
if (lean_obj_tag(v_x_1036_) == 0)
{
return v_x_1036_;
}
else
{
lean_object* v_head_1037_; lean_object* v_tail_1038_; uint32_t v___x_1039_; uint32_t v___x_1040_; uint8_t v___x_1041_; 
v_head_1037_ = lean_ctor_get(v_x_1036_, 0);
v_tail_1038_ = lean_ctor_get(v_x_1036_, 1);
v___x_1039_ = 32;
v___x_1040_ = lean_unbox_uint32(v_head_1037_);
v___x_1041_ = lean_uint32_dec_eq(v___x_1040_, v___x_1039_);
if (v___x_1041_ == 0)
{
uint32_t v___x_1042_; uint32_t v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = 9;
v___x_1043_ = lean_unbox_uint32(v_head_1037_);
v___x_1044_ = lean_uint32_dec_eq(v___x_1043_, v___x_1042_);
if (v___x_1044_ == 0)
{
uint32_t v___x_1045_; uint32_t v___x_1046_; uint8_t v___x_1047_; 
v___x_1045_ = 13;
v___x_1046_ = lean_unbox_uint32(v_head_1037_);
v___x_1047_ = lean_uint32_dec_eq(v___x_1046_, v___x_1045_);
if (v___x_1047_ == 0)
{
uint32_t v___x_1048_; uint32_t v___x_1049_; uint8_t v___x_1050_; 
v___x_1048_ = 10;
v___x_1049_ = lean_unbox_uint32(v_head_1037_);
v___x_1050_ = lean_uint32_dec_eq(v___x_1049_, v___x_1048_);
if (v___x_1050_ == 0)
{
lean_inc_ref(v_x_1036_);
return v_x_1036_;
}
else
{
v_x_1036_ = v_tail_1038_;
goto _start;
}
}
else
{
v_x_1036_ = v_tail_1038_;
goto _start;
}
}
else
{
v_x_1036_ = v_tail_1038_;
goto _start;
}
}
else
{
v_x_1036_ = v_tail_1038_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0___boxed(lean_object* v_x_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v_x_1055_);
lean_dec(v_x_1055_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
if (lean_obj_tag(v_x_1060_) == 0)
{
return v_x_1059_;
}
else
{
lean_object* v_head_1061_; lean_object* v_tail_1062_; lean_object* v___x_1063_; lean_object* v_next_1064_; uint8_t v___x_1065_; 
v_head_1061_ = lean_ctor_get(v_x_1060_, 0);
lean_inc_n(v_head_1061_, 2);
v_tail_1062_ = lean_ctor_get(v_x_1060_, 1);
lean_inc(v_tail_1062_);
lean_dec_ref_known(v_x_1060_, 2);
v___x_1063_ = l_String_toListImpl(v_head_1061_);
v_next_1064_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1063_);
lean_dec(v___x_1063_);
lean_inc(v_next_1064_);
v___x_1065_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_next_1064_);
v___x_1066_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1067_ = lean_string_append(v_x_1059_, v___x_1066_);
v___x_1068_ = lean_string_append(v___x_1067_, v_head_1061_);
lean_dec(v_head_1061_);
v_x_1059_ = v___x_1068_;
v_x_1060_ = v_tail_1062_;
goto _start;
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
lean_dec(v_head_1061_);
v___x_1070_ = l_String_toListImpl(v_x_1059_);
v___x_1071_ = l_List_reverse___redArg(v___x_1070_);
v___x_1072_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1071_);
lean_dec(v___x_1071_);
v___x_1073_ = l_List_reverse___redArg(v___x_1072_);
v___x_1074_ = lean_string_mk(v___x_1073_);
v___x_1075_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_1076_ = lean_string_append(v___x_1074_, v___x_1075_);
v___x_1077_ = lean_string_mk(v_next_1064_);
v___x_1078_ = lean_string_append(v___x_1076_, v___x_1077_);
lean_dec_ref(v___x_1077_);
v_x_1059_ = v___x_1078_;
v_x_1060_ = v_tail_1062_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
if (lean_obj_tag(v_x_1081_) == 0)
{
return v_x_1080_;
}
else
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; lean_object* v___x_1084_; lean_object* v_next_1085_; uint8_t v___x_1086_; 
v_head_1082_ = lean_ctor_get(v_x_1081_, 0);
lean_inc_n(v_head_1082_, 2);
v_tail_1083_ = lean_ctor_get(v_x_1081_, 1);
lean_inc(v_tail_1083_);
lean_dec_ref_known(v_x_1081_, 2);
v___x_1084_ = l_String_toListImpl(v_head_1082_);
v_next_1085_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1084_);
lean_dec(v___x_1084_);
lean_inc(v_next_1085_);
v___x_1086_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
lean_dec(v_next_1085_);
v___x_1087_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1088_ = lean_string_append(v_x_1080_, v___x_1087_);
v___x_1089_ = lean_string_append(v___x_1088_, v_head_1082_);
lean_dec(v_head_1082_);
v___x_1090_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1089_, v_tail_1083_);
return v___x_1090_;
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_dec(v_head_1082_);
v___x_1091_ = l_String_toListImpl(v_x_1080_);
v___x_1092_ = l_List_reverse___redArg(v___x_1091_);
v___x_1093_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1092_);
lean_dec(v___x_1092_);
v___x_1094_ = l_List_reverse___redArg(v___x_1093_);
v___x_1095_ = lean_string_mk(v___x_1094_);
v___x_1096_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_1097_ = lean_string_append(v___x_1095_, v___x_1096_);
v___x_1098_ = lean_string_mk(v_next_1085_);
v___x_1099_ = lean_string_append(v___x_1097_, v___x_1098_);
lean_dec_ref(v___x_1098_);
v___x_1100_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1099_, v_tail_1083_);
return v___x_1100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas(lean_object* v_value_1101_){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1102_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_box(0);
v___x_1105_ = l_String_splitOnAux(v_value_1101_, v___x_1102_, v___x_1103_, v___x_1103_, v___x_1103_, v___x_1104_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_inc_ref(v_value_1101_);
return v_value_1101_;
}
else
{
lean_object* v_head_1106_; lean_object* v_tail_1107_; lean_object* v___x_1108_; 
v_head_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_head_1106_);
v_tail_1107_ = lean_ctor_get(v___x_1105_, 1);
lean_inc(v_tail_1107_);
lean_dec_ref_known(v___x_1105_, 2);
v___x_1108_ = l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(v_head_1106_, v_tail_1107_);
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas___boxed(lean_object* v_value_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lasm_Fetch_splitCookieCommas(v_value_1109_);
lean_dec_ref(v_value_1109_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(lean_object* v_as_1112_, size_t v_i_1113_, size_t v_stop_1114_, lean_object* v_b_1115_){
_start:
{
lean_object* v___y_1117_; uint8_t v___x_1121_; 
v___x_1121_ = lean_usize_dec_eq(v_i_1113_, v_stop_1114_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v_fst_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1122_ = lean_array_uget_borrowed(v_as_1112_, v_i_1113_);
v_fst_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_fst_1123_);
v___x_1124_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1123_);
v___x_1125_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1126_ = lean_string_dec_eq(v___x_1124_, v___x_1125_);
lean_dec_ref(v___x_1124_);
if (v___x_1126_ == 0)
{
v___y_1117_ = v_b_1115_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1127_; 
lean_inc(v___x_1122_);
v___x_1127_ = lean_array_push(v_b_1115_, v___x_1122_);
v___y_1117_ = v___x_1127_;
goto v___jp_1116_;
}
}
else
{
return v_b_1115_;
}
v___jp_1116_:
{
size_t v___x_1118_; size_t v___x_1119_; 
v___x_1118_ = ((size_t)1ULL);
v___x_1119_ = lean_usize_add(v_i_1113_, v___x_1118_);
v_i_1113_ = v___x_1119_;
v_b_1115_ = v___y_1117_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___boxed(lean_object* v_as_1128_, lean_object* v_i_1129_, lean_object* v_stop_1130_, lean_object* v_b_1131_){
_start:
{
size_t v_i_boxed_1132_; size_t v_stop_boxed_1133_; lean_object* v_res_1134_; 
v_i_boxed_1132_ = lean_unbox_usize(v_i_1129_);
lean_dec(v_i_1129_);
v_stop_boxed_1133_ = lean_unbox_usize(v_stop_1130_);
lean_dec(v_stop_1130_);
v_res_1134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1128_, v_i_boxed_1132_, v_stop_boxed_1133_, v_b_1131_);
lean_dec_ref(v_as_1128_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(lean_object* v_as_1135_, size_t v_i_1136_, size_t v_stop_1137_, lean_object* v_b_1138_){
_start:
{
lean_object* v___y_1140_; uint8_t v___x_1144_; 
v___x_1144_ = lean_usize_dec_eq(v_i_1136_, v_stop_1137_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; lean_object* v_fst_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1145_ = lean_array_uget_borrowed(v_as_1135_, v_i_1136_);
v_fst_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc(v_fst_1146_);
v___x_1147_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1146_);
v___x_1148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1149_ = lean_string_dec_eq(v___x_1147_, v___x_1148_);
lean_dec_ref(v___x_1147_);
if (v___x_1149_ == 0)
{
v___y_1140_ = v_b_1138_;
goto v___jp_1139_;
}
else
{
lean_object* v___x_1150_; 
lean_inc(v___x_1145_);
v___x_1150_ = lean_array_push(v_b_1138_, v___x_1145_);
v___y_1140_ = v___x_1150_;
goto v___jp_1139_;
}
}
else
{
return v_b_1138_;
}
v___jp_1139_:
{
size_t v___x_1141_; size_t v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = ((size_t)1ULL);
v___x_1142_ = lean_usize_add(v_i_1136_, v___x_1141_);
v___x_1143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1135_, v___x_1142_, v_stop_1137_, v___y_1140_);
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3___boxed(lean_object* v_as_1151_, lean_object* v_i_1152_, lean_object* v_stop_1153_, lean_object* v_b_1154_){
_start:
{
size_t v_i_boxed_1155_; size_t v_stop_boxed_1156_; lean_object* v_res_1157_; 
v_i_boxed_1155_ = lean_unbox_usize(v_i_1152_);
lean_dec(v_i_1152_);
v_stop_boxed_1156_ = lean_unbox_usize(v_stop_1153_);
lean_dec(v_stop_1153_);
v_res_1157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_as_1151_, v_i_boxed_1155_, v_stop_boxed_1156_, v_b_1154_);
lean_dec_ref(v_as_1151_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(size_t v_sz_1158_, size_t v_i_1159_, lean_object* v_bs_1160_){
_start:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_usize_dec_lt(v_i_1159_, v_sz_1158_);
if (v___x_1161_ == 0)
{
return v_bs_1160_;
}
else
{
lean_object* v_v_1162_; lean_object* v_snd_1163_; lean_object* v___x_1164_; lean_object* v_bs_x27_1165_; lean_object* v___x_1166_; size_t v___x_1167_; size_t v___x_1168_; lean_object* v___x_1169_; 
v_v_1162_ = lean_array_uget_borrowed(v_bs_1160_, v_i_1159_);
v_snd_1163_ = lean_ctor_get(v_v_1162_, 1);
lean_inc(v_snd_1163_);
v___x_1164_ = lean_unsigned_to_nat(0u);
v_bs_x27_1165_ = lean_array_uset(v_bs_1160_, v_i_1159_, v___x_1164_);
v___x_1166_ = l_Lasm_Fetch_splitCookieCommas(v_snd_1163_);
lean_dec(v_snd_1163_);
v___x_1167_ = ((size_t)1ULL);
v___x_1168_ = lean_usize_add(v_i_1159_, v___x_1167_);
v___x_1169_ = lean_array_uset(v_bs_x27_1165_, v_i_1159_, v___x_1166_);
v_i_1159_ = v___x_1168_;
v_bs_1160_ = v___x_1169_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1___boxed(lean_object* v_sz_1171_, lean_object* v_i_1172_, lean_object* v_bs_1173_){
_start:
{
size_t v_sz_boxed_1174_; size_t v_i_boxed_1175_; lean_object* v_res_1176_; 
v_sz_boxed_1174_ = lean_unbox_usize(v_sz_1171_);
lean_dec(v_sz_1171_);
v_i_boxed_1175_ = lean_unbox_usize(v_i_1172_);
lean_dec(v_i_1172_);
v_res_1176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_boxed_1174_, v_i_boxed_1175_, v_bs_1173_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(lean_object* v___y_1177_, lean_object* v_as_1178_, size_t v_sz_1179_, size_t v_i_1180_, lean_object* v_b_1181_){
_start:
{
lean_object* v_a_1183_; uint8_t v___x_1187_; 
v___x_1187_ = lean_usize_dec_lt(v_i_1180_, v_sz_1179_);
if (v___x_1187_ == 0)
{
lean_dec_ref(v___y_1177_);
return v_b_1181_;
}
else
{
lean_object* v_fst_1188_; lean_object* v_snd_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1223_; 
v_fst_1188_ = lean_ctor_get(v_b_1181_, 0);
v_snd_1189_ = lean_ctor_get(v_b_1181_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_b_1181_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1191_ = v_b_1181_;
v_isShared_1192_ = v_isSharedCheck_1223_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_snd_1189_);
lean_inc(v_fst_1188_);
lean_dec(v_b_1181_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1223_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_a_1193_; lean_object* v_fst_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v_placed_1197_; 
v_a_1193_ = lean_array_uget(v_as_1178_, v_i_1180_);
v_fst_1194_ = lean_ctor_get(v_a_1193_, 0);
lean_inc(v_fst_1194_);
v___x_1195_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1194_);
v___x_1196_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1197_ = lean_string_dec_eq(v___x_1195_, v___x_1196_);
lean_dec_ref(v___x_1195_);
if (v_placed_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1198_ = lean_array_push(v_fst_1188_, v_a_1193_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1198_);
v___x_1200_ = v___x_1191_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_snd_1189_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
v_a_1183_ = v___x_1200_;
goto v___jp_1182_;
}
}
else
{
lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1220_; 
lean_inc(v_fst_1194_);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_a_1193_);
if (v_isSharedCheck_1220_ == 0)
{
lean_object* v_unused_1221_; lean_object* v_unused_1222_; 
v_unused_1221_ = lean_ctor_get(v_a_1193_, 1);
lean_dec(v_unused_1221_);
v_unused_1222_ = lean_ctor_get(v_a_1193_, 0);
lean_dec(v_unused_1222_);
v___x_1203_ = v_a_1193_;
v_isShared_1204_ = v_isSharedCheck_1220_;
goto v_resetjp_1202_;
}
else
{
lean_dec(v_a_1193_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1220_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
uint8_t v___x_1205_; 
v___x_1205_ = lean_unbox(v_snd_1189_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
lean_dec(v_snd_1189_);
v___x_1206_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1177_);
v___x_1207_ = lean_array_to_list(v___y_1177_);
v___x_1208_ = l_String_intercalate(v___x_1206_, v___x_1207_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v___x_1208_);
v___x_1210_ = v___x_1203_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_fst_1194_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1211_ = lean_array_push(v_fst_1188_, v___x_1210_);
v___x_1212_ = lean_box(v_placed_1197_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1212_);
lean_ctor_set(v___x_1191_, 0, v___x_1211_);
v___x_1214_ = v___x_1191_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1211_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
v_a_1183_ = v___x_1214_;
goto v___jp_1182_;
}
}
}
else
{
lean_object* v___x_1218_; 
lean_dec(v_fst_1194_);
lean_del_object(v___x_1191_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v_snd_1189_);
lean_ctor_set(v___x_1203_, 0, v_fst_1188_);
v___x_1218_ = v___x_1203_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_fst_1188_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_snd_1189_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v_a_1183_ = v___x_1218_;
goto v___jp_1182_;
}
}
}
}
}
}
v___jp_1182_:
{
size_t v___x_1184_; size_t v___x_1185_; 
v___x_1184_ = ((size_t)1ULL);
v___x_1185_ = lean_usize_add(v_i_1180_, v___x_1184_);
v_i_1180_ = v___x_1185_;
v_b_1181_ = v_a_1183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0___boxed(lean_object* v___y_1224_, lean_object* v_as_1225_, lean_object* v_sz_1226_, lean_object* v_i_1227_, lean_object* v_b_1228_){
_start:
{
size_t v_sz_boxed_1229_; size_t v_i_boxed_1230_; lean_object* v_res_1231_; 
v_sz_boxed_1229_ = lean_unbox_usize(v_sz_1226_);
lean_dec(v_sz_1226_);
v_i_boxed_1230_ = lean_unbox_usize(v_i_1227_);
lean_dec(v_i_1227_);
v_res_1231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1224_, v_as_1225_, v_sz_boxed_1229_, v_i_boxed_1230_, v_b_1228_);
lean_dec_ref(v_as_1225_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(lean_object* v___y_1232_, lean_object* v_as_1233_, size_t v_sz_1234_, size_t v_i_1235_, lean_object* v_b_1236_){
_start:
{
lean_object* v_a_1238_; uint8_t v___x_1242_; 
v___x_1242_ = lean_usize_dec_lt(v_i_1235_, v_sz_1234_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v___y_1232_);
return v_b_1236_;
}
else
{
lean_object* v_fst_1243_; lean_object* v_snd_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1278_; 
v_fst_1243_ = lean_ctor_get(v_b_1236_, 0);
v_snd_1244_ = lean_ctor_get(v_b_1236_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_b_1236_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1246_ = v_b_1236_;
v_isShared_1247_ = v_isSharedCheck_1278_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_snd_1244_);
lean_inc(v_fst_1243_);
lean_dec(v_b_1236_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1278_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v_a_1248_; lean_object* v_fst_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; uint8_t v_placed_1252_; 
v_a_1248_ = lean_array_uget(v_as_1233_, v_i_1235_);
v_fst_1249_ = lean_ctor_get(v_a_1248_, 0);
lean_inc(v_fst_1249_);
v___x_1250_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1249_);
v___x_1251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1252_ = lean_string_dec_eq(v___x_1250_, v___x_1251_);
lean_dec_ref(v___x_1250_);
if (v_placed_1252_ == 0)
{
lean_object* v___x_1253_; lean_object* v___x_1255_; 
v___x_1253_ = lean_array_push(v_fst_1243_, v_a_1248_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v___x_1253_);
v___x_1255_ = v___x_1246_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_snd_1244_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
v_a_1238_ = v___x_1255_;
goto v___jp_1237_;
}
}
else
{
lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1275_; 
lean_inc(v_fst_1249_);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_a_1248_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; lean_object* v_unused_1277_; 
v_unused_1276_ = lean_ctor_get(v_a_1248_, 1);
lean_dec(v_unused_1276_);
v_unused_1277_ = lean_ctor_get(v_a_1248_, 0);
lean_dec(v_unused_1277_);
v___x_1258_ = v_a_1248_;
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
else
{
lean_dec(v_a_1248_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
uint8_t v___x_1260_; 
v___x_1260_ = lean_unbox(v_snd_1244_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1265_; 
lean_dec(v_snd_1244_);
v___x_1261_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1232_);
v___x_1262_ = lean_array_to_list(v___y_1232_);
v___x_1263_ = l_String_intercalate(v___x_1261_, v___x_1262_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v___x_1263_);
v___x_1265_ = v___x_1258_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_fst_1249_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1266_ = lean_array_push(v_fst_1243_, v___x_1265_);
v___x_1267_ = lean_box(v_placed_1252_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 1, v___x_1267_);
lean_ctor_set(v___x_1246_, 0, v___x_1266_);
v___x_1269_ = v___x_1246_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1266_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
v_a_1238_ = v___x_1269_;
goto v___jp_1237_;
}
}
}
else
{
lean_object* v___x_1273_; 
lean_dec(v_fst_1249_);
lean_del_object(v___x_1246_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v_snd_1244_);
lean_ctor_set(v___x_1258_, 0, v_fst_1243_);
v___x_1273_ = v___x_1258_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_fst_1243_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_snd_1244_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
v_a_1238_ = v___x_1273_;
goto v___jp_1237_;
}
}
}
}
}
}
v___jp_1237_:
{
size_t v___x_1239_; size_t v___x_1240_; lean_object* v___x_1241_; 
v___x_1239_ = ((size_t)1ULL);
v___x_1240_ = lean_usize_add(v_i_1235_, v___x_1239_);
v___x_1241_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1232_, v_as_1233_, v_sz_1234_, v___x_1240_, v_a_1238_);
return v___x_1241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0___boxed(lean_object* v___y_1279_, lean_object* v_as_1280_, lean_object* v_sz_1281_, lean_object* v_i_1282_, lean_object* v_b_1283_){
_start:
{
size_t v_sz_boxed_1284_; size_t v_i_boxed_1285_; lean_object* v_res_1286_; 
v_sz_boxed_1284_ = lean_unbox_usize(v_sz_1281_);
lean_dec(v_sz_1281_);
v_i_boxed_1285_ = lean_unbox_usize(v_i_1282_);
lean_dec(v_i_1282_);
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1279_, v_as_1280_, v_sz_boxed_1284_, v_i_boxed_1285_, v_b_1283_);
lean_dec_ref(v_as_1280_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(lean_object* v_as_1287_, size_t v_i_1288_, size_t v_stop_1289_, lean_object* v_b_1290_){
_start:
{
lean_object* v___y_1292_; uint8_t v___x_1296_; 
v___x_1296_ = lean_usize_dec_eq(v_i_1288_, v_stop_1289_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v___x_1297_ = lean_array_uget_borrowed(v_as_1287_, v_i_1288_);
v___x_1298_ = lean_string_utf8_byte_size(v___x_1297_);
v___x_1299_ = lean_unsigned_to_nat(0u);
v___x_1300_ = lean_nat_dec_eq(v___x_1298_, v___x_1299_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; 
lean_inc(v___x_1297_);
v___x_1301_ = lean_array_push(v_b_1290_, v___x_1297_);
v___y_1292_ = v___x_1301_;
goto v___jp_1291_;
}
else
{
v___y_1292_ = v_b_1290_;
goto v___jp_1291_;
}
}
else
{
return v_b_1290_;
}
v___jp_1291_:
{
size_t v___x_1293_; size_t v___x_1294_; 
v___x_1293_ = ((size_t)1ULL);
v___x_1294_ = lean_usize_add(v_i_1288_, v___x_1293_);
v_i_1288_ = v___x_1294_;
v_b_1290_ = v___y_1292_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2___boxed(lean_object* v_as_1302_, lean_object* v_i_1303_, lean_object* v_stop_1304_, lean_object* v_b_1305_){
_start:
{
size_t v_i_boxed_1306_; size_t v_stop_boxed_1307_; lean_object* v_res_1308_; 
v_i_boxed_1306_ = lean_unbox_usize(v_i_1303_);
lean_dec(v_i_1303_);
v_stop_boxed_1307_ = lean_unbox_usize(v_stop_1304_);
lean_dec(v_stop_1304_);
v_res_1308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v_as_1302_, v_i_boxed_1306_, v_stop_boxed_1307_, v_b_1305_);
lean_dec_ref(v_as_1302_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies(lean_object* v_headers_1311_){
_start:
{
lean_object* v___y_1313_; lean_object* v___x_1324_; lean_object* v___y_1326_; lean_object* v___x_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1324_ = lean_unsigned_to_nat(0u);
v___x_1335_ = lean_array_get_size(v_headers_1311_);
v___x_1336_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1337_ = lean_nat_dec_lt(v___x_1324_, v___x_1335_);
if (v___x_1337_ == 0)
{
v___y_1326_ = v___x_1336_;
goto v___jp_1325_;
}
else
{
size_t v___x_1338_; size_t v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = ((size_t)0ULL);
v___x_1339_ = lean_usize_of_nat(v___x_1335_);
v___x_1340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1311_, v___x_1338_, v___x_1339_, v___x_1336_);
v___y_1326_ = v___x_1340_;
goto v___jp_1325_;
}
v___jp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v_placed_1316_; 
v___x_1314_ = lean_array_get_size(v___y_1313_);
v___x_1315_ = lean_unsigned_to_nat(0u);
v_placed_1316_ = lean_nat_dec_eq(v___x_1314_, v___x_1315_);
if (v_placed_1316_ == 0)
{
lean_object* v_out_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; size_t v_sz_1320_; size_t v___x_1321_; lean_object* v___x_1322_; lean_object* v_fst_1323_; 
v_out_1317_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1318_ = lean_box(v_placed_1316_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_out_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v_sz_1320_ = lean_array_size(v_headers_1311_);
v___x_1321_ = ((size_t)0ULL);
v___x_1322_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1313_, v_headers_1311_, v_sz_1320_, v___x_1321_, v___x_1319_);
v_fst_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_fst_1323_);
lean_dec_ref(v___x_1322_);
return v_fst_1323_;
}
else
{
lean_dec_ref(v___y_1313_);
lean_inc_ref(v_headers_1311_);
return v_headers_1311_;
}
}
v___jp_1325_:
{
size_t v_sz_1327_; size_t v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v_sz_1327_ = lean_array_size(v___y_1326_);
v___x_1328_ = ((size_t)0ULL);
v___x_1329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_1327_, v___x_1328_, v___y_1326_);
v___x_1330_ = lean_array_get_size(v___x_1329_);
v___x_1331_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_1332_ = lean_nat_dec_lt(v___x_1324_, v___x_1330_);
if (v___x_1332_ == 0)
{
lean_dec_ref(v___x_1329_);
v___y_1313_ = v___x_1331_;
goto v___jp_1312_;
}
else
{
size_t v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = lean_usize_of_nat(v___x_1330_);
v___x_1334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1329_, v___x_1328_, v___x_1333_, v___x_1331_);
lean_dec_ref(v___x_1329_);
v___y_1313_ = v___x_1334_;
goto v___jp_1312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies___boxed(lean_object* v_headers_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lasm_Fetch_joinCookies(v_headers_1341_);
lean_dec_ref(v_headers_1341_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_1343_){
_start:
{
lean_object* v_r_1346_; 
if (lean_obj_tag(v_x_1343_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1357_; 
v_a_1349_ = lean_ctor_get(v_x_1343_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_x_1343_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1351_ = v_x_1343_;
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v_x_1343_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1354_);
return v___x_1355_;
}
}
}
else
{
lean_object* v_a_1358_; lean_object* v_a_1359_; 
v_a_1358_ = lean_ctor_get(v_x_1343_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v_x_1343_, 1);
v_a_1359_ = lean_ctor_get(v_a_1358_, 0);
lean_inc(v_a_1359_);
lean_dec(v_a_1358_);
v_r_1346_ = v_a_1359_;
goto v___jp_1345_;
}
v___jp_1345_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1347_, 0, v_r_1346_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lasm_Fetch_respond___lam__0(v_x_1360_);
return v_res_1362_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1364_ = 500;
v___x_1365_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_1366_ = l_Lasm_Fetch_Response_text(v___x_1365_, v___x_1364_);
return v___x_1366_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_1373_){
_start:
{
if (lean_obj_tag(v_x_1373_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1383_; 
v_a_1375_ = lean_ctor_get(v_x_1373_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_x_1373_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1377_ = v_x_1373_;
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v_x_1373_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
return v___x_1381_;
}
}
}
else
{
lean_object* v___x_1384_; 
lean_dec_ref_known(v_x_1373_, 1);
v___x_1384_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_1384_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lasm_Fetch_respond___lam__1(v_x_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_1388_){
_start:
{
if (lean_obj_tag(v_x_1388_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1398_; 
v_a_1390_ = lean_ctor_get(v_x_1388_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_x_1388_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1392_ = v_x_1388_;
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v_x_1388_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
return v___x_1396_;
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1408_; 
v_a_1399_ = lean_ctor_get(v_x_1388_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v_x_1388_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1401_ = v_x_1388_;
v_isShared_1402_ = v_isSharedCheck_1408_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v_x_1388_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1408_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lasm_Fetch_respond___lam__2(v_x_1409_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_1415_, lean_object* v_req_1416_, lean_object* v___f_1417_, lean_object* v_x_1418_){
_start:
{
if (lean_obj_tag(v_x_1418_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1449_; 
v_a_1420_ = lean_ctor_get(v_x_1418_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_x_1418_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1422_ = v_x_1418_;
v_isShared_1423_ = v_isSharedCheck_1449_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v_x_1418_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1449_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; lean_object* v_val_1437_; lean_object* v___x_1440_; 
v___x_1424_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_1425_ = lean_string_append(v___x_1424_, v_method_1415_);
v___x_1426_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_1427_ = lean_string_append(v___x_1425_, v___x_1426_);
v___x_1428_ = l_Lasm_Fetch_Request_path(v_req_1416_);
v___x_1429_ = lean_string_append(v___x_1427_, v___x_1428_);
lean_dec_ref(v___x_1428_);
v___x_1430_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1431_ = lean_string_append(v___x_1429_, v___x_1430_);
v___x_1432_ = lean_io_error_to_string(v_a_1420_);
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
lean_dec_ref(v___x_1432_);
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = 0;
v___x_1440_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1433_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 1);
lean_ctor_set(v___x_1422_, 0, v_a_1441_);
v___x_1443_ = v___x_1422_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v_val_1437_ = v___x_1443_;
goto v___jp_1436_;
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1440_, 1);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v_a_1445_);
v___x_1447_ = v___x_1422_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
v_val_1437_ = v___x_1447_;
goto v___jp_1436_;
}
}
v___jp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v_val_1437_);
v___x_1439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1434_, v___x_1435_, v___x_1438_, v___f_1417_);
return v___x_1439_;
}
}
}
else
{
lean_object* v___x_1450_; 
lean_dec_ref(v___f_1417_);
lean_dec_ref(v_req_1416_);
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v_x_1418_);
return v___x_1450_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_1451_, lean_object* v_req_1452_, lean_object* v___f_1453_, lean_object* v_x_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lasm_Fetch_respond___lam__3(v_method_1451_, v_req_1452_, v___f_1453_, v_x_1454_);
lean_dec_ref(v_method_1451_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_1461_, lean_object* v_req_1462_){
_start:
{
lean_object* v_method_1464_; lean_object* v_url_1465_; lean_object* v_headers_1466_; lean_object* v_body_1467_; lean_object* v_read_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1492_; 
v_method_1464_ = lean_ctor_get(v_req_1462_, 0);
v_url_1465_ = lean_ctor_get(v_req_1462_, 1);
v_headers_1466_ = lean_ctor_get(v_req_1462_, 2);
v_body_1467_ = lean_ctor_get(v_req_1462_, 3);
v_read_1468_ = lean_ctor_get(v_req_1462_, 4);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_req_1462_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1470_ = v_req_1462_;
v_isShared_1471_ = v_isSharedCheck_1492_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_read_1468_);
lean_inc(v_body_1467_);
lean_inc(v_headers_1466_);
lean_inc(v_url_1465_);
lean_inc(v_method_1464_);
lean_dec(v_req_1462_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1492_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___f_1472_; lean_object* v___f_1473_; lean_object* v___f_1474_; lean_object* v___x_1475_; lean_object* v_req_1477_; 
v___f_1472_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_1473_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_1474_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
v___x_1475_ = l_Lasm_Fetch_joinCookies(v_headers_1466_);
lean_dec_ref(v_headers_1466_);
lean_inc_ref(v_read_1468_);
lean_inc_ref(v_body_1467_);
lean_inc_ref(v___x_1475_);
lean_inc_ref(v_url_1465_);
lean_inc_ref(v_method_1464_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set(v___x_1470_, 2, v___x_1475_);
v_req_1477_ = v___x_1470_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_method_1464_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v_url_1465_);
lean_ctor_set(v_reuseFailAlloc_1491_, 2, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1491_, 3, v_body_1467_);
lean_ctor_set(v_reuseFailAlloc_1491_, 4, v_read_1468_);
v_req_1477_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___f_1478_; lean_object* v___y_1480_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
lean_inc_ref(v_req_1477_);
lean_inc_ref(v_method_1464_);
v___f_1478_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1478_, 0, v_method_1464_);
lean_closure_set(v___f_1478_, 1, v_req_1477_);
lean_closure_set(v___f_1478_, 2, v___f_1473_);
v___x_1487_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1488_ = lean_string_dec_eq(v_method_1464_, v___x_1487_);
lean_dec_ref(v_method_1464_);
if (v___x_1488_ == 0)
{
lean_dec_ref(v___x_1475_);
lean_dec_ref(v_read_1468_);
lean_dec_ref(v_body_1467_);
lean_dec_ref(v_url_1465_);
v___y_1480_ = v_req_1477_;
goto v___jp_1479_;
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec_ref(v_req_1477_);
v___x_1489_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_1490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
lean_ctor_set(v___x_1490_, 1, v_url_1465_);
lean_ctor_set(v___x_1490_, 2, v___x_1475_);
lean_ctor_set(v___x_1490_, 3, v_body_1467_);
lean_ctor_set(v___x_1490_, 4, v_read_1468_);
v___y_1480_ = v___x_1490_;
goto v___jp_1479_;
}
v___jp_1479_:
{
lean_object* v___x_1481_; uint8_t v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = 0;
v___x_1483_ = lean_apply_2(v_handler_1461_, v___y_1480_, lean_box(0));
v___x_1484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1481_, v___x_1482_, v___x_1483_, v___f_1474_);
v___x_1485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1481_, v___x_1482_, v___x_1484_, v___f_1478_);
v___x_1486_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1481_, v___x_1482_, v___x_1485_, v___f_1472_);
return v___x_1486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1493_, lean_object* v_req_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lasm_Fetch_respond(v_handler_1493_, v_req_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1497_, uint16_t v_status_1498_){
_start:
{
lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1500_ = lean_string_dec_eq(v_method_1497_, v___x_1499_);
if (v___x_1500_ == 0)
{
uint16_t v___x_1501_; uint8_t v___x_1502_; 
v___x_1501_ = 101;
v___x_1502_ = lean_uint16_dec_eq(v_status_1498_, v___x_1501_);
if (v___x_1502_ == 0)
{
uint16_t v___x_1503_; uint8_t v___x_1504_; 
v___x_1503_ = 204;
v___x_1504_ = lean_uint16_dec_eq(v_status_1498_, v___x_1503_);
if (v___x_1504_ == 0)
{
uint16_t v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = 205;
v___x_1506_ = lean_uint16_dec_eq(v_status_1498_, v___x_1505_);
if (v___x_1506_ == 0)
{
uint16_t v___x_1507_; uint8_t v___x_1508_; 
v___x_1507_ = 304;
v___x_1508_ = lean_uint16_dec_eq(v_status_1498_, v___x_1507_);
return v___x_1508_;
}
else
{
return v___x_1506_;
}
}
else
{
return v___x_1504_;
}
}
else
{
return v___x_1502_;
}
}
else
{
return v___x_1500_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1509_, lean_object* v_status_1510_){
_start:
{
uint16_t v_status_boxed_1511_; uint8_t v_res_1512_; lean_object* v_r_1513_; 
v_status_boxed_1511_ = lean_unbox(v_status_1510_);
v_res_1512_ = l_Lasm_Fetch_bodyless(v_method_1509_, v_status_boxed_1511_);
lean_dec_ref(v_method_1509_);
v_r_1513_ = lean_box(v_res_1512_);
return v_r_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1515_){
_start:
{
uint32_t v_res_1516_; lean_object* v_r_1517_; 
v_res_1516_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1515_);
v_r_1517_ = lean_box_uint32(v_res_1516_);
return v_r_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = lasm_fetch_take_request();
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1525_, lean_object* v_headers_1526_, lean_object* v_body_1527_, lean_object* v_a_00___x40___internal___hyg_1528_){
_start:
{
uint16_t v_status_boxed_1529_; lean_object* v_res_1530_; 
v_status_boxed_1529_ = lean_unbox(v_status_1525_);
v_res_1530_ = lasm_fetch_send_response(v_status_boxed_1529_, v_headers_1526_, v_body_1527_);
lean_dec_ref(v_body_1527_);
lean_dec_ref(v_headers_1526_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = lasm_fetch_take_request_head();
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1536_, lean_object* v_a_00___x40___internal___hyg_1537_){
_start:
{
uint32_t v_max_boxed_1538_; lean_object* v_res_1539_; 
v_max_boxed_1538_ = lean_unbox_uint32(v_max_1536_);
lean_dec(v_max_1536_);
v_res_1539_ = lasm_fetch_read(v_max_boxed_1538_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1543_, lean_object* v_headers_1544_, lean_object* v_a_00___x40___internal___hyg_1545_){
_start:
{
uint16_t v_status_boxed_1546_; lean_object* v_res_1547_; 
v_status_boxed_1546_ = lean_unbox(v_status_1543_);
v_res_1547_ = lasm_fetch_start_response(v_status_boxed_1546_, v_headers_1544_);
lean_dec_ref(v_headers_1544_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1550_, lean_object* v_a_00___x40___internal___hyg_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = lasm_fetch_write(v_chunk_1550_);
lean_dec_ref(v_chunk_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1555_, lean_object* v_a_00___x40___internal___hyg_1556_){
_start:
{
uint8_t v_ok_boxed_1557_; lean_object* v_res_1558_; 
v_ok_boxed_1557_ = lean_unbox(v_ok_1555_);
v_res_1558_ = lasm_fetch_finish(v_ok_boxed_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1559_){
_start:
{
uint8_t v___x_1560_; 
v___x_1560_ = 0;
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1561_){
_start:
{
uint8_t v_res_1562_; lean_object* v_r_1563_; 
v_res_1562_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1561_);
lean_dec_ref(v_x_1561_);
v_r_1563_ = lean_box(v_res_1562_);
return v_r_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1573_){
_start:
{
lean_object* v_b_1576_; 
if (lean_obj_tag(v_x_1573_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1590_; 
v_a_1582_ = lean_ctor_get(v_x_1573_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_x_1573_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1584_ = v_x_1573_;
v_isShared_1585_ = v_isSharedCheck_1590_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v_x_1573_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1590_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
return v___x_1588_;
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_a_1591_ = lean_ctor_get(v_x_1573_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v_x_1573_, 1);
v___x_1592_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1593_ = l_Lasm_JS_Data_field(v_a_1591_, v___x_1592_);
if (lean_obj_tag(v___x_1593_) == 2)
{
uint8_t v_b_1594_; 
v_b_1594_ = lean_ctor_get_uint8(v___x_1593_, 0);
lean_dec_ref_known(v___x_1593_, 0);
if (v_b_1594_ == 1)
{
lean_object* v___x_1595_; 
lean_dec(v_a_1591_);
v___x_1595_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1595_;
}
else
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1596_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1597_ = l_Lasm_JS_Data_field(v_a_1591_, v___x_1596_);
lean_dec(v_a_1591_);
if (lean_obj_tag(v___x_1597_) == 6)
{
lean_object* v_b_1598_; 
v_b_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc_ref(v_b_1598_);
lean_dec_ref_known(v___x_1597_, 1);
v_b_1576_ = v_b_1598_;
goto v___jp_1575_;
}
else
{
lean_dec(v___x_1597_);
goto v___jp_1580_;
}
}
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
lean_dec(v___x_1593_);
v___x_1599_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1600_ = l_Lasm_JS_Data_field(v_a_1591_, v___x_1599_);
lean_dec(v_a_1591_);
if (lean_obj_tag(v___x_1600_) == 6)
{
lean_object* v_b_1601_; 
v_b_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc_ref(v_b_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v_b_1576_ = v_b_1601_;
goto v___jp_1575_;
}
else
{
lean_dec(v___x_1600_);
goto v___jp_1580_;
}
}
}
v___jp_1575_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_b_1576_);
v___x_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
return v___x_1579_;
}
v___jp_1580_:
{
lean_object* v___x_1581_; 
v___x_1581_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1581_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1602_);
return v_res_1604_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1605_; uint64_t v___x_1606_; 
v___x_1605_ = 0;
v___x_1606_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1607_, uint64_t v_extra_1608_){
_start:
{
uint64_t v___x_1609_; uint64_t v___y_1611_; 
v___x_1609_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1607_ == 0)
{
uint64_t v___x_1614_; 
v___x_1614_ = 0ULL;
v___y_1611_ = v___x_1614_;
goto v___jp_1610_;
}
else
{
uint64_t v___x_1615_; 
v___x_1615_ = 2ULL;
v___y_1611_ = v___x_1615_;
goto v___jp_1610_;
}
v___jp_1610_:
{
uint64_t v___x_1612_; uint64_t v___x_1613_; 
v___x_1612_ = lean_uint64_lor(v___x_1609_, v___y_1611_);
v___x_1613_ = lean_uint64_lor(v___x_1612_, v_extra_1608_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1616_, lean_object* v_extra_1617_){
_start:
{
uint8_t v_await_boxed_1618_; uint64_t v_extra_boxed_1619_; uint64_t v_res_1620_; lean_object* v_r_1621_; 
v_await_boxed_1618_ = lean_unbox(v_await_1616_);
v_extra_boxed_1619_ = lean_unbox_uint64(v_extra_1617_);
lean_dec_ref(v_extra_1617_);
v_res_1620_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1618_, v_extra_boxed_1619_);
v_r_1621_ = lean_box_uint64(v_res_1620_);
return v_r_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v___f_1622_, lean_object* v_bytes_1623_){
_start:
{
lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v_val_1628_; lean_object* v___x_1631_; 
v___x_1625_ = lean_unsigned_to_nat(0u);
v___x_1626_ = 0;
v___x_1631_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1623_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1631_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1631_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
lean_ctor_set_tag(v___x_1634_, 1);
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
v_val_1628_ = v___x_1637_;
goto v___jp_1627_;
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
v_a_1640_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1631_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1631_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set_tag(v___x_1642_, 0);
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
v_val_1628_ = v___x_1645_;
goto v___jp_1627_;
}
}
}
v___jp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1629_, 0, v_val_1628_);
v___x_1630_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1625_, v___x_1626_, v___x_1629_, v___f_1622_);
return v___x_1630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v___f_1648_, lean_object* v_bytes_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v___f_1648_, v_bytes_1649_);
lean_dec_ref(v_bytes_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v___x_1652_, uint8_t v___x_1653_, lean_object* v___f_1654_, lean_object* v_a_1655_, uint32_t v_op_1656_, uint64_t v_flags_1657_, lean_object* v_payload_1658_, lean_object* v_x_1659_){
_start:
{
lean_object* v_val_1662_; 
if (lean_obj_tag(v_x_1659_) == 0)
{
lean_object* v___x_1665_; 
lean_dec_ref(v___f_1654_);
lean_dec(v___x_1652_);
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v_x_1659_);
return v___x_1665_;
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1680_; 
v_a_1666_ = lean_ctor_get(v_x_1659_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1668_ = v_x_1659_;
v_isShared_1669_ = v_isSharedCheck_1680_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v_x_1659_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1680_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
uint32_t v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = 0;
v___x_1671_ = lasm_js_call_into(v_a_1655_, v_op_1656_, v___x_1670_, v_flags_1657_, v_a_1666_, v_payload_1658_);
lean_dec(v_a_1666_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1672_);
lean_dec_ref_known(v___x_1671_, 1);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v_a_1672_);
v___x_1674_ = v___x_1668_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
v_val_1662_ = v___x_1674_;
goto v___jp_1661_;
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; 
v_a_1676_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1671_, 1);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 0);
lean_ctor_set(v___x_1668_, 0, v_a_1676_);
v___x_1678_ = v___x_1668_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1676_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
v_val_1662_ = v___x_1678_;
goto v___jp_1661_;
}
}
}
}
v___jp_1661_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1663_, 0, v_val_1662_);
v___x_1664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1652_, v___x_1653_, v___x_1663_, v___f_1654_);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v___x_1681_, lean_object* v___x_1682_, lean_object* v___f_1683_, lean_object* v_a_1684_, lean_object* v_op_1685_, lean_object* v_flags_1686_, lean_object* v_payload_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_){
_start:
{
uint8_t v___x_1797__boxed_1690_; uint32_t v_op_boxed_1691_; uint64_t v_flags_boxed_1692_; lean_object* v_res_1693_; 
v___x_1797__boxed_1690_ = lean_unbox(v___x_1682_);
v_op_boxed_1691_ = lean_unbox_uint32(v_op_1685_);
lean_dec(v_op_1685_);
v_flags_boxed_1692_ = lean_unbox_uint64(v_flags_1686_);
lean_dec_ref(v_flags_1686_);
v_res_1693_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v___x_1681_, v___x_1797__boxed_1690_, v___f_1683_, v_a_1684_, v_op_boxed_1691_, v_flags_boxed_1692_, v_payload_1687_, v_x_1688_);
lean_dec(v_payload_1687_);
lean_dec(v_a_1684_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7(lean_object* v___f_1694_, lean_object* v_a_1695_, uint32_t v_op_1696_, uint64_t v_flags_1697_, lean_object* v_payload_1698_, lean_object* v_x_1699_){
_start:
{
if (lean_obj_tag(v_x_1699_) == 0)
{
lean_object* v___x_1701_; 
lean_dec_ref(v___f_1694_);
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v_x_1699_);
return v___x_1701_;
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1722_; 
v_a_1702_ = lean_ctor_get(v_x_1699_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_x_1699_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1704_ = v_x_1699_;
v_isShared_1705_ = v_isSharedCheck_1722_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v_x_1699_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1722_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
uint32_t v___x_1706_; lean_object* v___x_1707_; uint8_t v___x_1708_; lean_object* v_val_1710_; lean_object* v___x_1713_; 
v___x_1706_ = 0;
v___x_1707_ = lean_unsigned_to_nat(0u);
v___x_1708_ = 0;
v___x_1713_ = lasm_js_call_into(v_a_1695_, v_op_1696_, v___x_1706_, v_flags_1697_, v_a_1702_, v_payload_1698_);
lean_dec(v_a_1702_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1714_);
lean_dec_ref_known(v___x_1713_, 1);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v_a_1714_);
v___x_1716_ = v___x_1704_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
v_val_1710_ = v___x_1716_;
goto v___jp_1709_;
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; 
v_a_1718_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1718_);
lean_dec_ref_known(v___x_1713_, 1);
if (v_isShared_1705_ == 0)
{
lean_ctor_set_tag(v___x_1704_, 0);
lean_ctor_set(v___x_1704_, 0, v_a_1718_);
v___x_1720_ = v___x_1704_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
v_val_1710_ = v___x_1720_;
goto v___jp_1709_;
}
}
v___jp_1709_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v_val_1710_);
v___x_1712_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1707_, v___x_1708_, v___x_1711_, v___f_1694_);
return v___x_1712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed(lean_object* v___f_1723_, lean_object* v_a_1724_, lean_object* v_op_1725_, lean_object* v_flags_1726_, lean_object* v_payload_1727_, lean_object* v_x_1728_, lean_object* v___y_1729_){
_start:
{
uint32_t v_op_boxed_1730_; uint64_t v_flags_boxed_1731_; lean_object* v_res_1732_; 
v_op_boxed_1730_ = lean_unbox_uint32(v_op_1725_);
lean_dec(v_op_1725_);
v_flags_boxed_1731_ = lean_unbox_uint64(v_flags_1726_);
lean_dec_ref(v_flags_1726_);
v_res_1732_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7(v___f_1723_, v_a_1724_, v_op_boxed_1730_, v_flags_boxed_1731_, v_payload_1727_, v_x_1728_);
lean_dec(v_payload_1727_);
lean_dec(v_a_1724_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v_a_1733_, lean_object* v_x_1734_){
_start:
{
if (lean_obj_tag(v_x_1734_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1744_; 
v_a_1736_ = lean_ctor_get(v_x_1734_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_x_1734_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1738_ = v_x_1734_;
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v_x_1734_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1741_);
return v___x_1742_;
}
}
}
else
{
lean_object* v___x_1745_; 
lean_dec_ref_known(v_x_1734_, 1);
v___x_1745_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1733_);
return v___x_1745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v_a_1746_, lean_object* v_x_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v_a_1746_, v_x_1747_);
lean_dec(v_a_1746_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_failurePrefix_1750_, uint32_t v_op_1751_, uint64_t v_flags_1752_, lean_object* v_payload_1753_, lean_object* v___f_1754_, lean_object* v___f_1755_, lean_object* v___f_1756_, lean_object* v_x_1757_){
_start:
{
if (lean_obj_tag(v_x_1757_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1767_; 
lean_dec_ref(v___f_1756_);
lean_dec_ref(v___f_1755_);
lean_dec_ref(v___f_1754_);
lean_dec(v_payload_1753_);
v_a_1759_ = lean_ctor_get(v_x_1757_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_x_1757_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1761_ = v_x_1757_;
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v_x_1757_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
return v___x_1765_;
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1814_; 
v_a_1768_ = lean_ctor_get(v_x_1757_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_x_1757_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1770_ = v_x_1757_;
v_isShared_1771_ = v_isSharedCheck_1814_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v_x_1757_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1814_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1772_ = lean_string_utf8_byte_size(v_failurePrefix_1750_);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_nat_dec_eq(v___x_1772_, v___x_1773_);
if (v___x_1774_ == 0)
{
lean_object* v___f_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___f_1779_; lean_object* v_val_1781_; lean_object* v___x_1786_; 
lean_dec_ref(v___f_1756_);
lean_inc(v_a_1768_);
v___f_1775_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1775_, 0, v_a_1768_);
v___x_1776_ = lean_box(v___x_1774_);
v___x_1777_ = lean_box_uint32(v_op_1751_);
v___x_1778_ = lean_box_uint64(v_flags_1752_);
lean_inc(v_payload_1753_);
v___f_1779_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1779_, 0, v___x_1773_);
lean_closure_set(v___f_1779_, 1, v___x_1776_);
lean_closure_set(v___f_1779_, 2, v___f_1775_);
lean_closure_set(v___f_1779_, 3, v_a_1768_);
lean_closure_set(v___f_1779_, 4, v___x_1777_);
lean_closure_set(v___f_1779_, 5, v___x_1778_);
lean_closure_set(v___f_1779_, 6, v_payload_1753_);
v___x_1786_ = l_Lasm_JS_Wire_encodeIO(v_payload_1753_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1789_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v_a_1787_);
v___x_1789_ = v___x_1770_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1787_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
v_val_1781_ = v___x_1789_;
goto v___jp_1780_;
}
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; 
v_a_1791_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1786_, 1);
if (v_isShared_1771_ == 0)
{
lean_ctor_set_tag(v___x_1770_, 0);
lean_ctor_set(v___x_1770_, 0, v_a_1791_);
v___x_1793_ = v___x_1770_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
v_val_1781_ = v___x_1793_;
goto v___jp_1780_;
}
}
v___jp_1780_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v_val_1781_);
v___x_1783_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1774_, v___x_1782_, v___f_1779_);
v___x_1784_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1774_, v___x_1783_, v___f_1754_);
v___x_1785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1774_, v___x_1784_, v___f_1755_);
return v___x_1785_;
}
}
else
{
lean_object* v___f_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___f_1798_; uint8_t v___x_1799_; lean_object* v_val_1801_; lean_object* v___x_1805_; 
lean_dec_ref(v___f_1755_);
lean_dec_ref(v___f_1754_);
lean_inc(v_a_1768_);
v___f_1795_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1795_, 0, v_a_1768_);
v___x_1796_ = lean_box_uint32(v_op_1751_);
v___x_1797_ = lean_box_uint64(v_flags_1752_);
lean_inc(v_payload_1753_);
v___f_1798_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1798_, 0, v___f_1795_);
lean_closure_set(v___f_1798_, 1, v_a_1768_);
lean_closure_set(v___f_1798_, 2, v___x_1796_);
lean_closure_set(v___f_1798_, 3, v___x_1797_);
lean_closure_set(v___f_1798_, 4, v_payload_1753_);
v___x_1799_ = 0;
v___x_1805_ = l_Lasm_JS_Wire_encodeIO(v_payload_1753_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1808_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v_a_1806_);
v___x_1808_ = v___x_1770_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1806_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
v_val_1801_ = v___x_1808_;
goto v___jp_1800_;
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; 
v_a_1810_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1805_, 1);
if (v_isShared_1771_ == 0)
{
lean_ctor_set_tag(v___x_1770_, 0);
lean_ctor_set(v___x_1770_, 0, v_a_1810_);
v___x_1812_ = v___x_1770_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_a_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
v_val_1801_ = v___x_1812_;
goto v___jp_1800_;
}
}
v___jp_1800_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1802_, 0, v_val_1801_);
v___x_1803_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1799_, v___x_1802_, v___f_1798_);
v___x_1804_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1799_, v___x_1803_, v___f_1756_);
return v___x_1804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_failurePrefix_1815_, lean_object* v_op_1816_, lean_object* v_flags_1817_, lean_object* v_payload_1818_, lean_object* v___f_1819_, lean_object* v___f_1820_, lean_object* v___f_1821_, lean_object* v_x_1822_, lean_object* v___y_1823_){
_start:
{
uint32_t v_op_boxed_1824_; uint64_t v_flags_boxed_1825_; lean_object* v_res_1826_; 
v_op_boxed_1824_ = lean_unbox_uint32(v_op_1816_);
lean_dec(v_op_1816_);
v_flags_boxed_1825_ = lean_unbox_uint64(v_flags_1817_);
lean_dec_ref(v_flags_1817_);
v_res_1826_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_failurePrefix_1815_, v_op_boxed_1824_, v_flags_boxed_1825_, v_payload_1818_, v___f_1819_, v___f_1820_, v___f_1821_, v_x_1822_);
lean_dec_ref(v_failurePrefix_1815_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1827_, lean_object* v_x_1828_){
_start:
{
if (lean_obj_tag(v_x_1828_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1838_; 
lean_dec_ref(v___f_1827_);
v_a_1830_ = lean_ctor_get(v_x_1828_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_x_1828_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1832_ = v_x_1828_;
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v_x_1828_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
return v___x_1836_;
}
}
}
else
{
lean_object* v_a_1839_; lean_object* v___x_1840_; 
v_a_1839_ = lean_ctor_get(v_x_1828_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v_x_1828_, 1);
v___x_1840_ = lean_apply_2(v___f_1827_, v_a_1839_, lean_box(0));
return v___x_1840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1841_, lean_object* v_x_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1841_, v_x_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_x_1845_){
_start:
{
if (lean_obj_tag(v_x_1845_) == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_x_1845_);
return v___x_1847_;
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1856_; 
v_a_1848_ = lean_ctor_get(v_x_1845_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v_x_1845_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1850_ = v_x_1845_;
v_isShared_1851_ = v_isSharedCheck_1856_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v_x_1845_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1856_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_x_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_x_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8(lean_object* v___f_1860_, lean_object* v_x_1861_){
_start:
{
if (lean_obj_tag(v_x_1861_) == 0)
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1871_; 
lean_dec_ref(v___f_1860_);
v_a_1863_ = lean_ctor_get(v_x_1861_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v_x_1861_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1865_ = v_x_1861_;
v_isShared_1866_ = v_isSharedCheck_1871_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v_x_1861_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1871_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
return v___x_1869_;
}
}
}
else
{
lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1883_; 
v_isSharedCheck_1883_ = !lean_is_exclusive(v_x_1861_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; 
v_unused_1884_ = lean_ctor_get(v_x_1861_, 0);
lean_dec(v_unused_1884_);
v___x_1873_ = v_x_1861_;
v_isShared_1874_ = v_isSharedCheck_1883_;
goto v_resetjp_1872_;
}
else
{
lean_dec(v_x_1861_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1883_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1875_ = lean_unsigned_to_nat(0u);
v___x_1876_ = 0;
v___x_1877_ = lean_io_promise_new();
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v___x_1877_);
v___x_1879_ = v___x_1873_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1875_, v___x_1876_, v___x_1880_, v___f_1860_);
return v___x_1881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8___boxed(lean_object* v___f_1885_, lean_object* v_x_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8(v___f_1885_, v_x_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v_failurePrefix_1889_, lean_object* v_x_1890_){
_start:
{
if (lean_obj_tag(v_x_1890_) == 0)
{
lean_object* v_a_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1903_; 
v_a_1892_ = lean_ctor_get(v_x_1890_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_x_1890_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1894_ = v_x_1890_;
v_isShared_1895_ = v_isSharedCheck_1903_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_a_1892_);
lean_dec(v_x_1890_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1903_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1896_ = lean_io_error_to_string(v_a_1892_);
v___x_1897_ = lean_string_append(v_failurePrefix_1889_, v___x_1896_);
lean_dec_ref(v___x_1896_);
v___x_1898_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1898_);
v___x_1900_ = v___x_1894_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1898_);
v___x_1900_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
return v___x_1901_;
}
}
}
else
{
lean_object* v___x_1904_; 
lean_dec_ref(v_failurePrefix_1889_);
v___x_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_x_1890_);
return v___x_1904_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v_failurePrefix_1905_, lean_object* v_x_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v_failurePrefix_1905_, v_x_1906_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1914_, uint64_t v_flags_1915_, lean_object* v_payload_1916_, lean_object* v_failurePrefix_1917_){
_start:
{
lean_object* v___f_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___f_1923_; lean_object* v___f_1924_; lean_object* v___x_1925_; uint8_t v___x_1926_; lean_object* v_val_1928_; lean_object* v___x_1931_; 
v___f_1919_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
lean_inc_ref(v_failurePrefix_1917_);
v___f_1920_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1920_, 0, v_failurePrefix_1917_);
v___x_1921_ = lean_box_uint32(v_op_1914_);
v___x_1922_ = lean_box_uint64(v_flags_1915_);
v___f_1923_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1923_, 0, v_failurePrefix_1917_);
lean_closure_set(v___f_1923_, 1, v___x_1921_);
lean_closure_set(v___f_1923_, 2, v___x_1922_);
lean_closure_set(v___f_1923_, 3, v_payload_1916_);
lean_closure_set(v___f_1923_, 4, v___f_1920_);
lean_closure_set(v___f_1923_, 5, v___f_1919_);
lean_closure_set(v___f_1923_, 6, v___f_1919_);
v___f_1924_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1924_, 0, v___f_1923_);
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = 0;
v___x_1931_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
lean_ctor_set_tag(v___x_1934_, 1);
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
v_val_1928_ = v___x_1937_;
goto v___jp_1927_;
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
v_a_1940_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1931_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1931_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set_tag(v___x_1942_, 0);
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
v_val_1928_ = v___x_1945_;
goto v___jp_1927_;
}
}
}
v___jp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1929_, 0, v_val_1928_);
v___x_1930_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1925_, v___x_1926_, v___x_1929_, v___f_1924_);
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1948_, lean_object* v_flags_1949_, lean_object* v_payload_1950_, lean_object* v_failurePrefix_1951_, lean_object* v_a_1952_){
_start:
{
uint32_t v_op_boxed_1953_; uint64_t v_flags_boxed_1954_; lean_object* v_res_1955_; 
v_op_boxed_1953_ = lean_unbox_uint32(v_op_1948_);
lean_dec(v_op_1948_);
v_flags_boxed_1954_ = lean_unbox_uint64(v_flags_1949_);
lean_dec_ref(v_flags_1949_);
v_res_1955_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1953_, v_flags_boxed_1954_, v_payload_1950_, v_failurePrefix_1951_);
return v_res_1955_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1956_; uint8_t v___x_1957_; uint64_t v___x_1958_; 
v___x_1956_ = 8ULL;
v___x_1957_ = 0;
v___x_1958_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1957_, v___x_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1959_, lean_object* v_name_1960_, lean_object* v_args_1961_){
_start:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; uint32_t v___x_1966_; uint64_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1963_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1964_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_o_1959_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_name_1960_);
v___x_1966_ = 205;
v___x_1967_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1968_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1968_, 0, v_args_1961_);
v___x_1969_ = lean_unsigned_to_nat(3u);
v___x_1970_ = lean_mk_empty_array_with_capacity(v___x_1969_);
v___x_1971_ = lean_array_push(v___x_1970_, v___x_1964_);
v___x_1972_ = lean_array_push(v___x_1971_, v___x_1965_);
v___x_1973_ = lean_array_push(v___x_1972_, v___x_1968_);
v___x_1974_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
v___x_1975_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1966_, v___x_1967_, v___x_1974_, v___x_1963_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1976_, lean_object* v_name_1977_, lean_object* v_args_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1976_, v_name_1977_, v_args_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1981_, lean_object* v___x_1982_, lean_object* v___x_1983_, lean_object* v___x_1984_, lean_object* v___f_1985_){
_start:
{
uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1987_ = 0;
v___x_1988_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1981_, v___x_1982_, v___x_1983_);
v___x_1989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1984_, v___x_1987_, v___x_1988_, v___f_1985_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1990_, lean_object* v___x_1991_, lean_object* v___x_1992_, lean_object* v___x_1993_, lean_object* v___f_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1990_, v___x_1991_, v___x_1992_, v___x_1993_, v___f_1994_);
return v_res_1996_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1997_; uint64_t v___x_1998_; 
v___x_1997_ = 1;
v___x_1998_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1999_, uint64_t v_extra_2000_){
_start:
{
uint64_t v___x_2001_; uint64_t v___y_2003_; 
v___x_2001_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1999_ == 0)
{
uint64_t v___x_2006_; 
v___x_2006_ = 0ULL;
v___y_2003_ = v___x_2006_;
goto v___jp_2002_;
}
else
{
uint64_t v___x_2007_; 
v___x_2007_ = 2ULL;
v___y_2003_ = v___x_2007_;
goto v___jp_2002_;
}
v___jp_2002_:
{
uint64_t v___x_2004_; uint64_t v___x_2005_; 
v___x_2004_ = lean_uint64_lor(v___x_2001_, v___y_2003_);
v___x_2005_ = lean_uint64_lor(v___x_2004_, v_extra_2000_);
return v___x_2005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_2008_, lean_object* v_extra_2009_){
_start:
{
uint8_t v_await_boxed_2010_; uint64_t v_extra_boxed_2011_; uint64_t v_res_2012_; lean_object* v_r_2013_; 
v_await_boxed_2010_ = lean_unbox(v_await_2008_);
v_extra_boxed_2011_ = lean_unbox_uint64(v_extra_2009_);
lean_dec_ref(v_extra_2009_);
v_res_2012_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_2010_, v_extra_boxed_2011_);
v_r_2013_ = lean_box_uint64(v_res_2012_);
return v_r_2013_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2014_; uint8_t v___x_2015_; uint64_t v___x_2016_; 
v___x_2014_ = 8ULL;
v___x_2015_ = 0;
v___x_2016_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_2015_, v___x_2014_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_2018_, lean_object* v_name_2019_, lean_object* v_args_2020_){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint64_t v___x_2025_; lean_object* v___x_2026_; 
v___x_2022_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2023_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2023_, 0, v_o_2018_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
lean_inc_ref(v_name_2019_);
v___x_2024_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2024_, 0, v_name_2019_);
v___x_2025_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2026_ = l_Lasm_JS_Value_invokeRaw(v___x_2023_, v___x_2024_, v_args_2020_, v___x_2025_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2026_, 1);
v___x_2028_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2029_ = lean_string_append(v___x_2028_, v_name_2019_);
lean_dec_ref(v_name_2019_);
v___x_2030_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2029_, v_a_2027_);
lean_dec(v_a_2027_);
lean_dec_ref(v___x_2029_);
return v___x_2030_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v_name_2019_);
v_a_2031_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2026_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2026_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_2039_, lean_object* v_name_2040_, lean_object* v_args_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_2039_, v_name_2040_, v_args_2041_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_2049_){
_start:
{
lean_object* v___f_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___f_2051_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_2052_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_2053_ = lean_unsigned_to_nat(0u);
v___x_2054_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2055_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_2049_, v___x_2052_, v___x_2054_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2065_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2065_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2065_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___f_2061_; lean_object* v___x_2063_; 
v___x_2060_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_2061_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_2061_, 0, v_a_2056_);
lean_closure_set(v___f_2061_, 1, v___x_2060_);
lean_closure_set(v___f_2061_, 2, v___x_2054_);
lean_closure_set(v___f_2061_, 3, v___x_2053_);
lean_closure_set(v___f_2061_, 4, v___f_2051_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v___f_2061_);
v___x_2063_ = v___x_2058_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___f_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
v_a_2066_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2055_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2055_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_2074_, lean_object* v_a_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_2074_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v_d_2077_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_2080_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_2083_, lean_object* v_d_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v_d_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_2087_, lean_object* v_d_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_2087_, v_d_2088_);
lean_dec_ref(v_context_2087_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_2091_, uint32_t v_op_2092_, uint64_t v_flags_2093_, lean_object* v_payload_2094_, lean_object* v_failurePrefix_2095_){
_start:
{
lean_object* v___x_2097_; 
v___x_2097_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_2092_, v_flags_2093_, v_payload_2094_, v_failurePrefix_2095_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_2098_, lean_object* v_op_2099_, lean_object* v_flags_2100_, lean_object* v_payload_2101_, lean_object* v_failurePrefix_2102_, lean_object* v_a_2103_){
_start:
{
uint32_t v_op_boxed_2104_; uint64_t v_flags_boxed_2105_; lean_object* v_res_2106_; 
v_op_boxed_2104_ = lean_unbox_uint32(v_op_2099_);
lean_dec(v_op_2099_);
v_flags_boxed_2105_ = lean_unbox_uint64(v_flags_2100_);
lean_dec_ref(v_flags_2100_);
v_res_2106_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_2098_, v_op_boxed_2104_, v_flags_boxed_2105_, v_payload_2101_, v_failurePrefix_2102_);
lean_dec_ref(v_context_2098_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_2111_){
_start:
{
if (lean_obj_tag(v_x_2111_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2121_; 
v_a_2113_ = lean_ctor_get(v_x_2111_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v_x_2111_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2115_ = v_x_2111_;
v_isShared_2116_ = v_isSharedCheck_2121_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v_x_2111_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2121_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
lean_object* v___x_2119_; 
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
}
else
{
lean_object* v___x_2122_; 
lean_dec_ref_known(v_x_2111_, 1);
v___x_2122_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_2122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_2123_);
return v_res_2125_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2126_; uint8_t v___x_2127_; uint64_t v___x_2128_; 
v___x_2126_ = 4ULL;
v___x_2127_ = 0;
v___x_2128_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_2127_, v___x_2126_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_2130_, lean_object* v_args_2131_){
_start:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; uint64_t v___x_2136_; lean_object* v___x_2137_; 
v___x_2133_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2134_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2134_, 0, v_c_2130_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_2137_ = l_Lasm_JS_Value_invokeRaw(v___x_2134_, v___x_2135_, v_args_2131_, v___x_2136_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2140_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2139_, v_a_2138_);
lean_dec(v_a_2138_);
return v___x_2140_;
}
else
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
v_a_2141_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2137_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2137_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
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
return v___x_2146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_2149_, lean_object* v_args_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_2149_, v_args_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_2153_, lean_object* v___x_2154_, lean_object* v_x_2155_){
_start:
{
lean_object* v_val_2158_; 
if (lean_obj_tag(v_x_2155_) == 0)
{
lean_object* v___x_2160_; 
lean_dec(v___x_2154_);
lean_dec(v___y_2153_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_x_2155_);
return v___x_2160_;
}
else
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2178_; 
v_a_2161_ = lean_ctor_get(v_x_2155_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_x_2155_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2163_ = v_x_2155_;
v_isShared_2164_ = v_isSharedCheck_2178_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v_x_2155_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2178_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2165_ = lean_unsigned_to_nat(2u);
v___x_2166_ = lean_mk_empty_array_with_capacity(v___x_2165_);
v___x_2167_ = lean_array_push(v___x_2166_, v___y_2153_);
v___x_2168_ = lean_array_push(v___x_2167_, v___x_2154_);
v___x_2169_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2161_, v___x_2168_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2172_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2169_, 1);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v_a_2170_);
v___x_2172_ = v___x_2163_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2170_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
v_val_2158_ = v___x_2172_;
goto v___jp_2157_;
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; 
v_a_2174_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2169_, 1);
if (v_isShared_2164_ == 0)
{
lean_ctor_set_tag(v___x_2163_, 0);
lean_ctor_set(v___x_2163_, 0, v_a_2174_);
v___x_2176_ = v___x_2163_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
v_val_2158_ = v___x_2176_;
goto v___jp_2157_;
}
}
}
}
v___jp_2157_:
{
lean_object* v___x_2159_; 
v___x_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_val_2158_);
return v___x_2159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_2179_, lean_object* v___x_2180_, lean_object* v_x_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_2179_, v___x_2180_, v_x_2181_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_2184_, lean_object* v___x_2185_, lean_object* v_x_2186_){
_start:
{
lean_object* v_val_2189_; 
if (lean_obj_tag(v_x_2186_) == 0)
{
lean_object* v___x_2191_; 
lean_dec(v___x_2185_);
lean_dec(v_a_2184_);
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v_x_2186_);
return v___x_2191_;
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2211_; 
v_a_2192_ = lean_ctor_get(v_x_2186_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_x_2186_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2194_ = v_x_2186_;
v_isShared_2195_ = v_isSharedCheck_2211_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v_x_2186_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2211_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2196_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_a_2184_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = lean_unsigned_to_nat(2u);
v___x_2199_ = lean_mk_empty_array_with_capacity(v___x_2198_);
v___x_2200_ = lean_array_push(v___x_2199_, v___x_2197_);
v___x_2201_ = lean_array_push(v___x_2200_, v___x_2185_);
v___x_2202_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2192_, v___x_2201_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2205_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v_a_2203_);
v___x_2205_ = v___x_2194_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2203_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
v_val_2189_ = v___x_2205_;
goto v___jp_2188_;
}
}
else
{
lean_object* v_a_2207_; lean_object* v___x_2209_; 
v_a_2207_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2207_);
lean_dec_ref_known(v___x_2202_, 1);
if (v_isShared_2195_ == 0)
{
lean_ctor_set_tag(v___x_2194_, 0);
lean_ctor_set(v___x_2194_, 0, v_a_2207_);
v___x_2209_ = v___x_2194_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2207_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
v_val_2189_ = v___x_2209_;
goto v___jp_2188_;
}
}
}
}
v___jp_2188_:
{
lean_object* v___x_2190_; 
v___x_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2190_, 0, v_val_2189_);
return v___x_2190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_2212_, lean_object* v___x_2213_, lean_object* v_x_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_2212_, v___x_2213_, v_x_2214_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_2218_, lean_object* v_key_2219_){
_start:
{
lean_object* v_k_2221_; lean_object* v___x_2222_; 
v_k_2221_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2221_, 0, v_key_2219_);
lean_inc_ref(v_k_2221_);
v___x_2222_ = l_Lasm_JS_Wire_encodeIO(v_k_2221_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; uint32_t v___x_2224_; uint32_t v___x_2225_; uint64_t v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v___x_2224_ = 203;
v___x_2225_ = lasm_js_value_handle(v_o_2218_);
v___x_2226_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_2227_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2228_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2228_, 0, v_o_2218_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_unsigned_to_nat(2u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
lean_inc_ref(v_k_2221_);
v___x_2231_ = lean_array_push(v___x_2230_, v_k_2221_);
v___x_2232_ = lean_array_push(v___x_2231_, v___x_2228_);
v___x_2233_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
v___x_2234_ = lasm_js_call(v___x_2224_, v___x_2225_, v___x_2226_, v_a_2223_, v___x_2233_);
lean_dec_ref_known(v___x_2233_, 1);
lean_dec(v_a_2223_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
v___x_2236_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2221_);
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
lean_dec_ref(v___x_2237_);
v___x_2239_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2238_, v_a_2235_);
lean_dec(v_a_2235_);
lean_dec_ref(v___x_2238_);
return v___x_2239_;
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec_ref_known(v_k_2221_, 1);
v_a_2240_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2234_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2234_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_dec_ref_known(v_k_2221_, 1);
lean_dec(v_o_2218_);
v_a_2248_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2222_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2222_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2256_, lean_object* v_key_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2256_, v_key_2257_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2261_, uint8_t v___x_2262_, lean_object* v___f_2263_, lean_object* v_a_2264_, lean_object* v_x_2265_){
_start:
{
lean_object* v_val_2268_; 
if (lean_obj_tag(v_x_2265_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2279_; 
lean_dec(v_a_2264_);
lean_dec_ref(v___f_2263_);
lean_dec(v___x_2261_);
v_a_2271_ = lean_ctor_get(v_x_2265_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v_x_2265_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2273_ = v_x_2265_;
v_isShared_2274_ = v_isSharedCheck_2279_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v_x_2265_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2279_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
return v___x_2277_;
}
}
}
else
{
lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2293_; 
v_isSharedCheck_2293_ = !lean_is_exclusive(v_x_2265_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_x_2265_, 0);
lean_dec(v_unused_2294_);
v___x_2281_ = v_x_2265_;
v_isShared_2282_ = v_isSharedCheck_2293_;
goto v_resetjp_2280_;
}
else
{
lean_dec(v_x_2265_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2293_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2284_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2264_, v___x_2283_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
if (v_isShared_2282_ == 0)
{
lean_ctor_set(v___x_2281_, 0, v_a_2285_);
v___x_2287_ = v___x_2281_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
v_val_2268_ = v___x_2287_;
goto v___jp_2267_;
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; 
v_a_2289_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2284_, 1);
if (v_isShared_2282_ == 0)
{
lean_ctor_set_tag(v___x_2281_, 0);
lean_ctor_set(v___x_2281_, 0, v_a_2289_);
v___x_2291_ = v___x_2281_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
v_val_2268_ = v___x_2291_;
goto v___jp_2267_;
}
}
}
}
v___jp_2267_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2269_, 0, v_val_2268_);
v___x_2270_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2261_, v___x_2262_, v___x_2269_, v___f_2263_);
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2295_, lean_object* v___x_2296_, lean_object* v___f_2297_, lean_object* v_a_2298_, lean_object* v_x_2299_, lean_object* v___y_2300_){
_start:
{
uint8_t v___x_5440__boxed_2301_; lean_object* v_res_2302_; 
v___x_5440__boxed_2301_ = lean_unbox(v___x_2296_);
v_res_2302_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2295_, v___x_5440__boxed_2301_, v___f_2297_, v_a_2298_, v_x_2299_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2304_, lean_object* v___x_2305_, uint8_t v___x_2306_, lean_object* v___f_2307_, lean_object* v_chunk_2308_){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2310_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2311_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2311_, 0, v_chunk_2308_);
v___x_2312_ = lean_unsigned_to_nat(1u);
v___x_2313_ = lean_mk_empty_array_with_capacity(v___x_2312_);
v___x_2314_ = lean_array_push(v___x_2313_, v___x_2311_);
v___x_2315_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2304_, v___x_2310_, v___x_2314_);
v___x_2316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2305_, v___x_2306_, v___x_2315_, v___f_2307_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2317_, lean_object* v___x_2318_, lean_object* v___x_2319_, lean_object* v___f_2320_, lean_object* v_chunk_2321_, lean_object* v___y_2322_){
_start:
{
uint8_t v___x_5519__boxed_2323_; lean_object* v_res_2324_; 
v___x_5519__boxed_2323_ = lean_unbox(v___x_2319_);
v_res_2324_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2317_, v___x_2318_, v___x_5519__boxed_2323_, v___f_2320_, v_chunk_2321_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2326_, lean_object* v_a_2327_, lean_object* v___x_2328_, uint8_t v___x_2329_, lean_object* v___f_2330_, lean_object* v_x_2331_){
_start:
{
if (lean_obj_tag(v_x_2331_) == 0)
{
lean_object* v___x_2333_; 
lean_dec_ref(v___f_2330_);
lean_dec(v___x_2328_);
lean_dec(v_a_2327_);
lean_dec_ref(v___x_2326_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v_x_2331_);
return v___x_2333_;
}
else
{
lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2346_; 
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2331_);
if (v_isSharedCheck_2346_ == 0)
{
lean_object* v_unused_2347_; 
v_unused_2347_ = lean_ctor_get(v_x_2331_, 0);
lean_dec(v_unused_2347_);
v___x_2335_ = v_x_2331_;
v_isShared_2336_ = v_isSharedCheck_2346_;
goto v_resetjp_2334_;
}
else
{
lean_dec(v_x_2331_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2346_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2337_; lean_object* v___x_2339_; 
v___x_2337_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2336_ == 0)
{
lean_ctor_set_tag(v___x_2335_, 4);
lean_ctor_set(v___x_2335_, 0, v___x_2326_);
v___x_2339_ = v___x_2335_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v___x_2326_);
v___x_2339_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_mk_empty_array_with_capacity(v___x_2340_);
v___x_2342_ = lean_array_push(v___x_2341_, v___x_2339_);
v___x_2343_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2327_, v___x_2337_, v___x_2342_);
v___x_2344_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2328_, v___x_2329_, v___x_2343_, v___f_2330_);
return v___x_2344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2348_, lean_object* v_a_2349_, lean_object* v___x_2350_, lean_object* v___x_2351_, lean_object* v___f_2352_, lean_object* v_x_2353_, lean_object* v___y_2354_){
_start:
{
uint8_t v___x_5552__boxed_2355_; lean_object* v_res_2356_; 
v___x_5552__boxed_2355_ = lean_unbox(v___x_2351_);
v_res_2356_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2348_, v_a_2349_, v___x_2350_, v___x_5552__boxed_2355_, v___f_2352_, v_x_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2358_, lean_object* v___x_2359_, uint8_t v___x_2360_, lean_object* v___f_2361_, lean_object* v_x_2362_){
_start:
{
if (lean_obj_tag(v_x_2362_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2386_; 
v_a_2364_ = lean_ctor_get(v_x_2362_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v_x_2362_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2366_ = v_x_2362_;
v_isShared_2367_ = v_isSharedCheck_2386_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v_x_2362_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2386_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___f_2371_; lean_object* v_val_2373_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2368_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2369_ = lean_io_error_to_string(v_a_2364_);
v___x_2370_ = lean_box(v___x_2360_);
lean_inc(v___x_2359_);
lean_inc_ref(v___x_2369_);
v___f_2371_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2371_, 0, v___x_2369_);
lean_closure_set(v___f_2371_, 1, v_a_2358_);
lean_closure_set(v___f_2371_, 2, v___x_2359_);
lean_closure_set(v___f_2371_, 3, v___x_2370_);
lean_closure_set(v___f_2371_, 4, v___f_2361_);
v___x_2376_ = lean_string_append(v___x_2368_, v___x_2369_);
lean_dec_ref(v___x_2369_);
v___x_2377_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2376_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; lean_object* v___x_2380_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2378_);
lean_dec_ref_known(v___x_2377_, 1);
if (v_isShared_2367_ == 0)
{
lean_ctor_set_tag(v___x_2366_, 1);
lean_ctor_set(v___x_2366_, 0, v_a_2378_);
v___x_2380_ = v___x_2366_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
v_val_2373_ = v___x_2380_;
goto v___jp_2372_;
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; 
v_a_2382_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2377_, 1);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v_a_2382_);
v___x_2384_ = v___x_2366_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2382_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
v_val_2373_ = v___x_2384_;
goto v___jp_2372_;
}
}
v___jp_2372_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_val_2373_);
v___x_2375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2359_, v___x_2360_, v___x_2374_, v___f_2371_);
return v___x_2375_;
}
}
}
else
{
lean_object* v___x_2387_; 
lean_dec_ref(v___f_2361_);
lean_dec(v___x_2359_);
lean_dec(v_a_2358_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_x_2362_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2388_, lean_object* v___x_2389_, lean_object* v___x_2390_, lean_object* v___f_2391_, lean_object* v_x_2392_, lean_object* v___y_2393_){
_start:
{
uint8_t v___x_5607__boxed_2394_; lean_object* v_res_2395_; 
v___x_5607__boxed_2394_ = lean_unbox(v___x_2390_);
v_res_2395_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2388_, v___x_2389_, v___x_5607__boxed_2394_, v___f_2391_, v_x_2392_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2397_, lean_object* v___x_2398_, lean_object* v___x_2399_, uint8_t v___x_2400_, lean_object* v___f_2401_, lean_object* v_x_2402_){
_start:
{
if (lean_obj_tag(v_x_2402_) == 0)
{
lean_object* v___x_2404_; 
lean_dec_ref(v___f_2401_);
lean_dec(v___x_2399_);
lean_dec_ref(v___x_2398_);
lean_dec(v_a_2397_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_x_2402_);
return v___x_2404_;
}
else
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
lean_dec_ref_known(v_x_2402_, 1);
v___x_2405_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2406_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2397_, v___x_2405_, v___x_2398_);
v___x_2407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2399_, v___x_2400_, v___x_2406_, v___f_2401_);
return v___x_2407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2408_, lean_object* v___x_2409_, lean_object* v___x_2410_, lean_object* v___x_2411_, lean_object* v___f_2412_, lean_object* v_x_2413_, lean_object* v___y_2414_){
_start:
{
uint8_t v___x_5678__boxed_2415_; lean_object* v_res_2416_; 
v___x_5678__boxed_2415_ = lean_unbox(v___x_2411_);
v_res_2416_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2408_, v___x_2409_, v___x_2410_, v___x_5678__boxed_2415_, v___f_2412_, v_x_2413_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2417_, lean_object* v___f_2418_, lean_object* v___x_2419_, uint8_t v___x_2420_, lean_object* v___f_2421_, lean_object* v___f_2422_){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = lean_apply_2(v_val_2417_, v___f_2418_, lean_box(0));
lean_inc(v___x_2419_);
v___x_2425_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2419_, v___x_2420_, v___x_2424_, v___f_2421_);
v___x_2426_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2419_, v___x_2420_, v___x_2425_, v___f_2422_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2427_, lean_object* v___f_2428_, lean_object* v___x_2429_, lean_object* v___x_2430_, lean_object* v___f_2431_, lean_object* v___f_2432_, lean_object* v___y_2433_){
_start:
{
uint8_t v___x_5710__boxed_2434_; lean_object* v_res_2435_; 
v___x_5710__boxed_2434_ = lean_unbox(v___x_2430_);
v_res_2435_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2427_, v___f_2428_, v___x_2429_, v___x_5710__boxed_2434_, v___f_2431_, v___f_2432_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2436_, uint8_t v___x_2437_, lean_object* v___f_2438_, lean_object* v___f_2439_, lean_object* v___x_2440_, lean_object* v___f_2441_, lean_object* v_val_2442_, lean_object* v___f_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v___x_2446_; 
lean_dec_ref(v___f_2443_);
lean_dec_ref(v_val_2442_);
lean_dec_ref(v___f_2441_);
lean_dec_ref(v___x_2440_);
lean_dec_ref(v___f_2439_);
lean_dec_ref(v___f_2438_);
lean_dec(v___x_2436_);
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_x_2444_);
return v___x_2446_;
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2448_; lean_object* v___f_2449_; lean_object* v___x_2450_; lean_object* v___f_2451_; lean_object* v___x_2452_; lean_object* v___f_2453_; lean_object* v___x_2454_; lean_object* v___f_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v_a_2447_ = lean_ctor_get(v_x_2444_, 0);
lean_inc_n(v_a_2447_, 3);
lean_dec_ref_known(v_x_2444_, 1);
v___x_2448_ = lean_box(v___x_2437_);
lean_inc_n(v___x_2436_, 5);
v___f_2449_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2449_, 0, v_a_2447_);
lean_closure_set(v___f_2449_, 1, v___x_2436_);
lean_closure_set(v___f_2449_, 2, v___x_2448_);
lean_closure_set(v___f_2449_, 3, v___f_2438_);
v___x_2450_ = lean_box(v___x_2437_);
v___f_2451_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2451_, 0, v_a_2447_);
lean_closure_set(v___f_2451_, 1, v___x_2436_);
lean_closure_set(v___f_2451_, 2, v___x_2450_);
lean_closure_set(v___f_2451_, 3, v___f_2439_);
v___x_2452_ = lean_box(v___x_2437_);
v___f_2453_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2453_, 0, v_a_2447_);
lean_closure_set(v___f_2453_, 1, v___x_2440_);
lean_closure_set(v___f_2453_, 2, v___x_2436_);
lean_closure_set(v___f_2453_, 3, v___x_2452_);
lean_closure_set(v___f_2453_, 4, v___f_2441_);
v___x_2454_ = lean_box(v___x_2437_);
v___f_2455_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2455_, 0, v_val_2442_);
lean_closure_set(v___f_2455_, 1, v___f_2449_);
lean_closure_set(v___f_2455_, 2, v___x_2436_);
lean_closure_set(v___f_2455_, 3, v___x_2454_);
lean_closure_set(v___f_2455_, 4, v___f_2453_);
lean_closure_set(v___f_2455_, 5, v___f_2451_);
v___x_2456_ = lean_io_as_task(v___f_2455_, v___x_2436_);
lean_dec_ref(v___x_2456_);
v___x_2457_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2458_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2436_, v___x_2437_, v___x_2457_, v___f_2443_);
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2459_, lean_object* v___x_2460_, lean_object* v___f_2461_, lean_object* v___f_2462_, lean_object* v___x_2463_, lean_object* v___f_2464_, lean_object* v_val_2465_, lean_object* v___f_2466_, lean_object* v_x_2467_, lean_object* v___y_2468_){
_start:
{
uint8_t v___x_5739__boxed_2469_; lean_object* v_res_2470_; 
v___x_5739__boxed_2469_ = lean_unbox(v___x_2460_);
v_res_2470_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2459_, v___x_5739__boxed_2469_, v___f_2461_, v___f_2462_, v___x_2463_, v___f_2464_, v_val_2465_, v___f_2466_, v_x_2467_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2472_, uint8_t v___x_2473_, lean_object* v___f_2474_, lean_object* v___x_2475_, lean_object* v_x_2476_){
_start:
{
lean_object* v_val_2479_; 
if (lean_obj_tag(v_x_2476_) == 0)
{
lean_object* v___x_2482_; 
lean_dec_ref(v___x_2475_);
lean_dec_ref(v___f_2474_);
lean_dec(v___x_2472_);
v___x_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2482_, 0, v_x_2476_);
return v___x_2482_;
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2497_; 
v_a_2483_ = lean_ctor_get(v_x_2476_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v_x_2476_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2485_ = v_x_2476_;
v_isShared_2486_ = v_isSharedCheck_2497_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v_x_2476_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2497_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2488_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2483_, v___x_2487_, v___x_2475_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; lean_object* v___x_2491_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2488_, 1);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v_a_2489_);
v___x_2491_ = v___x_2485_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
v_val_2479_ = v___x_2491_;
goto v___jp_2478_;
}
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2495_; 
v_a_2493_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2488_, 1);
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 0);
lean_ctor_set(v___x_2485_, 0, v_a_2493_);
v___x_2495_ = v___x_2485_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2493_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
v_val_2479_ = v___x_2495_;
goto v___jp_2478_;
}
}
}
}
v___jp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v_val_2479_);
v___x_2481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2472_, v___x_2473_, v___x_2480_, v___f_2474_);
return v___x_2481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2498_, lean_object* v___x_2499_, lean_object* v___f_2500_, lean_object* v___x_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v___x_5800__boxed_2504_; lean_object* v_res_2505_; 
v___x_5800__boxed_2504_ = lean_unbox(v___x_2499_);
v_res_2505_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2498_, v___x_5800__boxed_2504_, v___f_2500_, v___x_2501_, v_x_2502_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2507_, lean_object* v___x_2508_, uint8_t v___x_2509_, lean_object* v_a_2510_, lean_object* v___f_2511_, lean_object* v___f_2512_, lean_object* v___x_2513_, lean_object* v___f_2514_, lean_object* v_val_2515_, lean_object* v_a_2516_, lean_object* v_x_2517_){
_start:
{
if (lean_obj_tag(v_x_2517_) == 0)
{
lean_object* v___x_2519_; 
lean_dec(v_a_2516_);
lean_dec_ref(v_val_2515_);
lean_dec_ref(v___f_2514_);
lean_dec_ref(v___x_2513_);
lean_dec_ref(v___f_2512_);
lean_dec_ref(v___f_2511_);
lean_dec(v_a_2510_);
lean_dec(v___x_2508_);
lean_dec(v___x_2507_);
v___x_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2519_, 0, v_x_2517_);
return v___x_2519_;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2545_; 
v_a_2520_ = lean_ctor_get(v_x_2517_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v_x_2517_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2522_ = v_x_2517_;
v_isShared_2523_ = v_isSharedCheck_2545_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v_x_2517_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2545_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___f_2524_; lean_object* v___x_2525_; lean_object* v___f_2526_; lean_object* v___x_2527_; lean_object* v___f_2528_; lean_object* v___x_2529_; lean_object* v___f_2530_; lean_object* v_val_2532_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___f_2524_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2524_, 0, v_a_2520_);
lean_closure_set(v___f_2524_, 1, v___x_2507_);
v___x_2525_ = lean_box(v___x_2509_);
lean_inc_n(v___x_2508_, 3);
v___f_2526_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2526_, 0, v___x_2508_);
lean_closure_set(v___f_2526_, 1, v___x_2525_);
lean_closure_set(v___f_2526_, 2, v___f_2524_);
lean_closure_set(v___f_2526_, 3, v_a_2510_);
v___x_2527_ = lean_box(v___x_2509_);
lean_inc_ref(v___x_2513_);
v___f_2528_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2528_, 0, v___x_2508_);
lean_closure_set(v___f_2528_, 1, v___x_2527_);
lean_closure_set(v___f_2528_, 2, v___f_2511_);
lean_closure_set(v___f_2528_, 3, v___f_2512_);
lean_closure_set(v___f_2528_, 4, v___x_2513_);
lean_closure_set(v___f_2528_, 5, v___f_2514_);
lean_closure_set(v___f_2528_, 6, v_val_2515_);
lean_closure_set(v___f_2528_, 7, v___f_2526_);
v___x_2529_ = lean_box(v___x_2509_);
v___f_2530_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2530_, 0, v___x_2508_);
lean_closure_set(v___f_2530_, 1, v___x_2529_);
lean_closure_set(v___f_2530_, 2, v___f_2528_);
lean_closure_set(v___f_2530_, 3, v___x_2513_);
v___x_2535_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2536_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2516_, v___x_2535_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v___x_2539_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v_a_2537_);
v___x_2539_ = v___x_2522_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
v_val_2532_ = v___x_2539_;
goto v___jp_2531_;
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; 
v_a_2541_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2536_, 1);
if (v_isShared_2523_ == 0)
{
lean_ctor_set_tag(v___x_2522_, 0);
lean_ctor_set(v___x_2522_, 0, v_a_2541_);
v___x_2543_ = v___x_2522_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_a_2541_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
v_val_2532_ = v___x_2543_;
goto v___jp_2531_;
}
}
v___jp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2533_, 0, v_val_2532_);
v___x_2534_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2508_, v___x_2509_, v___x_2533_, v___f_2530_);
return v___x_2534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2546_, lean_object* v___x_2547_, lean_object* v___x_2548_, lean_object* v_a_2549_, lean_object* v___f_2550_, lean_object* v___f_2551_, lean_object* v___x_2552_, lean_object* v___f_2553_, lean_object* v_val_2554_, lean_object* v_a_2555_, lean_object* v_x_2556_, lean_object* v___y_2557_){
_start:
{
uint8_t v___x_5863__boxed_2558_; lean_object* v_res_2559_; 
v___x_5863__boxed_2558_ = lean_unbox(v___x_2548_);
v_res_2559_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2546_, v___x_2547_, v___x_5863__boxed_2558_, v_a_2549_, v___f_2550_, v___f_2551_, v___x_2552_, v___f_2553_, v_val_2554_, v_a_2555_, v_x_2556_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2561_, lean_object* v___x_2562_, uint8_t v___x_2563_, lean_object* v_a_2564_, lean_object* v___f_2565_, lean_object* v___f_2566_, lean_object* v___x_2567_, lean_object* v___f_2568_, lean_object* v_val_2569_, lean_object* v_x_2570_){
_start:
{
if (lean_obj_tag(v_x_2570_) == 0)
{
lean_object* v___x_2572_; 
lean_dec_ref(v_val_2569_);
lean_dec_ref(v___f_2568_);
lean_dec_ref(v___x_2567_);
lean_dec_ref(v___f_2566_);
lean_dec_ref(v___f_2565_);
lean_dec(v_a_2564_);
lean_dec(v___x_2562_);
lean_dec(v___x_2561_);
v___x_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2572_, 0, v_x_2570_);
return v___x_2572_;
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2593_; 
v_a_2573_ = lean_ctor_get(v_x_2570_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_x_2570_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2575_ = v_x_2570_;
v_isShared_2576_ = v_isSharedCheck_2593_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v_x_2570_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2593_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; lean_object* v___f_2578_; lean_object* v_val_2580_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2577_ = lean_box(v___x_2563_);
lean_inc(v_a_2573_);
lean_inc(v___x_2562_);
v___f_2578_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2578_, 0, v___x_2561_);
lean_closure_set(v___f_2578_, 1, v___x_2562_);
lean_closure_set(v___f_2578_, 2, v___x_2577_);
lean_closure_set(v___f_2578_, 3, v_a_2564_);
lean_closure_set(v___f_2578_, 4, v___f_2565_);
lean_closure_set(v___f_2578_, 5, v___f_2566_);
lean_closure_set(v___f_2578_, 6, v___x_2567_);
lean_closure_set(v___f_2578_, 7, v___f_2568_);
lean_closure_set(v___f_2578_, 8, v_val_2569_);
lean_closure_set(v___f_2578_, 9, v_a_2573_);
v___x_2583_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2584_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2573_, v___x_2583_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2587_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2584_, 1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 0, v_a_2585_);
v___x_2587_ = v___x_2575_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
v_val_2580_ = v___x_2587_;
goto v___jp_2579_;
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; 
v_a_2589_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2584_, 1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 0);
lean_ctor_set(v___x_2575_, 0, v_a_2589_);
v___x_2591_ = v___x_2575_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
v_val_2580_ = v___x_2591_;
goto v___jp_2579_;
}
}
v___jp_2579_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_val_2580_);
v___x_2582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2562_, v___x_2563_, v___x_2581_, v___f_2578_);
return v___x_2582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2594_, lean_object* v___x_2595_, lean_object* v___x_2596_, lean_object* v_a_2597_, lean_object* v___f_2598_, lean_object* v___f_2599_, lean_object* v___x_2600_, lean_object* v___f_2601_, lean_object* v_val_2602_, lean_object* v_x_2603_, lean_object* v___y_2604_){
_start:
{
uint8_t v___x_5957__boxed_2605_; lean_object* v_res_2606_; 
v___x_5957__boxed_2605_ = lean_unbox(v___x_2596_);
v_res_2606_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2594_, v___x_2595_, v___x_5957__boxed_2605_, v_a_2597_, v___f_2598_, v___f_2599_, v___x_2600_, v___f_2601_, v_val_2602_, v_x_2603_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2607_, uint8_t v___x_2608_, lean_object* v_a_2609_, lean_object* v___f_2610_, lean_object* v___f_2611_, lean_object* v___f_2612_, lean_object* v_val_2613_, lean_object* v_x_2614_){
_start:
{
if (lean_obj_tag(v_x_2614_) == 0)
{
lean_object* v___x_2616_; 
lean_dec_ref(v_val_2613_);
lean_dec_ref(v___f_2612_);
lean_dec_ref(v___f_2611_);
lean_dec_ref(v___f_2610_);
lean_dec(v_a_2609_);
lean_dec(v___x_2607_);
v___x_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2616_, 0, v_x_2614_);
return v___x_2616_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2638_; 
v_a_2617_ = lean_ctor_get(v_x_2614_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v_x_2614_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2619_ = v_x_2614_;
v_isShared_2620_ = v_isSharedCheck_2638_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v_x_2614_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2638_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___f_2624_; lean_object* v_val_2626_; lean_object* v___x_2629_; 
v___x_2621_ = lean_unsigned_to_nat(0u);
v___x_2622_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2623_ = lean_box(v___x_2608_);
v___f_2624_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2624_, 0, v___x_2607_);
lean_closure_set(v___f_2624_, 1, v___x_2621_);
lean_closure_set(v___f_2624_, 2, v___x_2623_);
lean_closure_set(v___f_2624_, 3, v_a_2609_);
lean_closure_set(v___f_2624_, 4, v___f_2610_);
lean_closure_set(v___f_2624_, 5, v___f_2611_);
lean_closure_set(v___f_2624_, 6, v___x_2622_);
lean_closure_set(v___f_2624_, 7, v___f_2612_);
lean_closure_set(v___f_2624_, 8, v_val_2613_);
v___x_2629_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2617_, v___x_2622_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2630_; lean_object* v___x_2632_; 
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2629_, 1);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v_a_2630_);
v___x_2632_ = v___x_2619_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2630_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
v_val_2626_ = v___x_2632_;
goto v___jp_2625_;
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; 
v_a_2634_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2634_);
lean_dec_ref_known(v___x_2629_, 1);
if (v_isShared_2620_ == 0)
{
lean_ctor_set_tag(v___x_2619_, 0);
lean_ctor_set(v___x_2619_, 0, v_a_2634_);
v___x_2636_ = v___x_2619_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2634_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
v_val_2626_ = v___x_2636_;
goto v___jp_2625_;
}
}
v___jp_2625_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2627_, 0, v_val_2626_);
v___x_2628_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2621_, v___x_2608_, v___x_2627_, v___f_2624_);
return v___x_2628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v_a_2641_, lean_object* v___f_2642_, lean_object* v___f_2643_, lean_object* v___f_2644_, lean_object* v_val_2645_, lean_object* v_x_2646_, lean_object* v___y_2647_){
_start:
{
uint8_t v___x_6037__boxed_2648_; lean_object* v_res_2649_; 
v___x_6037__boxed_2648_ = lean_unbox(v___x_2640_);
v_res_2649_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2639_, v___x_6037__boxed_2648_, v_a_2641_, v___f_2642_, v___f_2643_, v___f_2644_, v_val_2645_, v_x_2646_);
return v_res_2649_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2650_ = lean_box(1);
v___x_2651_ = lean_unsigned_to_nat(2u);
v___x_2652_ = lean_mk_empty_array_with_capacity(v___x_2651_);
v___x_2653_ = lean_array_push(v___x_2652_, v___x_2650_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2654_, lean_object* v_x_2655_){
_start:
{
lean_object* v_val_2658_; 
if (lean_obj_tag(v_x_2655_) == 0)
{
lean_object* v___x_2660_; 
lean_dec(v___x_2654_);
v___x_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2660_, 0, v_x_2655_);
return v___x_2660_;
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2676_; 
v_a_2661_ = lean_ctor_get(v_x_2655_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_x_2655_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2663_ = v_x_2655_;
v_isShared_2664_ = v_isSharedCheck_2676_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v_x_2655_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2676_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2665_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2666_ = lean_array_push(v___x_2665_, v___x_2654_);
v___x_2667_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2661_, v___x_2666_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2670_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v_a_2668_);
v___x_2670_ = v___x_2663_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_a_2668_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
v_val_2658_ = v___x_2670_;
goto v___jp_2657_;
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; 
v_a_2672_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2667_, 1);
if (v_isShared_2664_ == 0)
{
lean_ctor_set_tag(v___x_2663_, 0);
lean_ctor_set(v___x_2663_, 0, v_a_2672_);
v___x_2674_ = v___x_2663_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
v_val_2658_ = v___x_2674_;
goto v___jp_2657_;
}
}
}
}
v___jp_2657_:
{
lean_object* v___x_2659_; 
v___x_2659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2659_, 0, v_val_2658_);
return v___x_2659_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2677_, lean_object* v_x_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2677_, v_x_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2681_, size_t v_i_2682_, lean_object* v_bs_2683_){
_start:
{
uint8_t v___x_2684_; 
v___x_2684_ = lean_usize_dec_lt(v_i_2682_, v_sz_2681_);
if (v___x_2684_ == 0)
{
return v_bs_2683_;
}
else
{
lean_object* v_v_2685_; lean_object* v_fst_2686_; lean_object* v_snd_2687_; lean_object* v___x_2688_; lean_object* v_bs_x27_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; lean_object* v___x_2699_; 
v_v_2685_ = lean_array_uget_borrowed(v_bs_2683_, v_i_2682_);
v_fst_2686_ = lean_ctor_get(v_v_2685_, 0);
lean_inc(v_fst_2686_);
v_snd_2687_ = lean_ctor_get(v_v_2685_, 1);
lean_inc(v_snd_2687_);
v___x_2688_ = lean_unsigned_to_nat(0u);
v_bs_x27_2689_ = lean_array_uset(v_bs_2683_, v_i_2682_, v___x_2688_);
v___x_2690_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2690_, 0, v_fst_2686_);
v___x_2691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2691_, 0, v_snd_2687_);
v___x_2692_ = lean_unsigned_to_nat(2u);
v___x_2693_ = lean_mk_empty_array_with_capacity(v___x_2692_);
v___x_2694_ = lean_array_push(v___x_2693_, v___x_2690_);
v___x_2695_ = lean_array_push(v___x_2694_, v___x_2691_);
v___x_2696_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2695_);
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2682_, v___x_2697_);
v___x_2699_ = lean_array_uset(v_bs_x27_2689_, v_i_2682_, v___x_2696_);
v_i_2682_ = v___x_2698_;
v_bs_2683_ = v___x_2699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2701_, lean_object* v_i_2702_, lean_object* v_bs_2703_){
_start:
{
size_t v_sz_boxed_2704_; size_t v_i_boxed_2705_; lean_object* v_res_2706_; 
v_sz_boxed_2704_ = lean_unbox_usize(v_sz_2701_);
lean_dec(v_sz_2701_);
v_i_boxed_2705_ = lean_unbox_usize(v_i_2702_);
lean_dec(v_i_2702_);
v_res_2706_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2704_, v_i_boxed_2705_, v_bs_2703_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2710_, lean_object* v_method_2711_, lean_object* v___f_2712_, lean_object* v___f_2713_, lean_object* v___f_2714_, lean_object* v_x_2715_){
_start:
{
lean_object* v___y_2718_; uint8_t v___y_2719_; lean_object* v___y_2720_; lean_object* v_val_2721_; lean_object* v___y_2725_; lean_object* v___y_2726_; uint8_t v___y_2727_; lean_object* v_val_2728_; lean_object* v___y_2732_; uint8_t v___y_2733_; lean_object* v___y_2734_; lean_object* v_val_2735_; 
if (lean_obj_tag(v_x_2715_) == 0)
{
lean_object* v___x_2738_; 
lean_dec_ref(v___f_2714_);
lean_dec_ref(v___f_2713_);
lean_dec_ref(v___f_2712_);
lean_dec_ref(v_r_2710_);
v___x_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_x_2715_);
return v___x_2738_;
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2832_; 
v_a_2739_ = lean_ctor_get(v_x_2715_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v_x_2715_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2741_ = v_x_2715_;
v_isShared_2742_ = v_isSharedCheck_2832_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v_x_2715_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2832_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___y_2744_; lean_object* v___y_2745_; uint16_t v_status_2759_; lean_object* v_headers_2760_; lean_object* v_body_2761_; lean_object* v_stream_2762_; lean_object* v___x_2763_; lean_object* v___y_2765_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; uint8_t v___x_2828_; 
v_status_2759_ = lean_ctor_get_uint16(v_r_2710_, sizeof(void*)*3);
v_headers_2760_ = lean_ctor_get(v_r_2710_, 0);
lean_inc_ref(v_headers_2760_);
v_body_2761_ = lean_ctor_get(v_r_2710_, 1);
lean_inc_ref(v_body_2761_);
v_stream_2762_ = lean_ctor_get(v_r_2710_, 2);
lean_inc(v_stream_2762_);
lean_dec_ref(v_r_2710_);
v___x_2763_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2824_ = lean_uint16_to_nat(v_status_2759_);
v___x_2825_ = lean_nat_to_int(v___x_2824_);
v___x_2826_ = lean_nat_abs(v___x_2825_);
v___x_2827_ = lean_cstr_to_nat("9007199254740991");
v___x_2828_ = lean_nat_dec_le(v___x_2826_, v___x_2827_);
lean_dec(v___x_2826_);
if (v___x_2828_ == 0)
{
lean_object* v___x_2829_; 
v___x_2829_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2825_);
v___y_2765_ = v___x_2829_;
goto v___jp_2764_;
}
else
{
double v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = l_Float_ofInt(v___x_2825_);
lean_dec(v___x_2825_);
v___x_2831_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2831_, 0, v___x_2830_);
v___y_2765_ = v___x_2831_;
goto v___jp_2764_;
}
v___jp_2743_:
{
lean_object* v___f_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; 
v___f_2746_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2746_, 0, v___y_2745_);
lean_closure_set(v___f_2746_, 1, v___y_2744_);
v___x_2747_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2748_ = lean_unsigned_to_nat(0u);
v___x_2749_ = 0;
v___x_2750_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2739_, v___x_2747_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v___x_2753_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2750_, 1);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v_a_2751_);
v___x_2753_ = v___x_2741_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2751_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
v___y_2732_ = v___x_2748_;
v___y_2733_ = v___x_2749_;
v___y_2734_ = v___f_2746_;
v_val_2735_ = v___x_2753_;
goto v___jp_2731_;
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; 
v_a_2755_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2750_, 1);
if (v_isShared_2742_ == 0)
{
lean_ctor_set_tag(v___x_2741_, 0);
lean_ctor_set(v___x_2741_, 0, v_a_2755_);
v___x_2757_ = v___x_2741_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
v___y_2732_ = v___x_2748_;
v___y_2733_ = v___x_2749_;
v___y_2734_ = v___f_2746_;
v_val_2735_ = v___x_2757_;
goto v___jp_2731_;
}
}
}
v___jp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; size_t v_sz_2768_; size_t v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2763_);
lean_ctor_set(v___x_2766_, 1, v___y_2765_);
v___x_2767_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2768_ = lean_array_size(v_headers_2760_);
v___x_2769_ = ((size_t)0ULL);
v___x_2770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2768_, v___x_2769_, v_headers_2760_);
v___x_2771_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2770_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2767_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2772_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
v___x_2775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2766_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = l_Lasm_JS_obj(v___x_2775_);
if (lean_obj_tag(v_stream_2762_) == 0)
{
uint8_t v___x_2777_; 
lean_dec_ref(v___f_2714_);
lean_dec_ref(v___f_2713_);
lean_dec_ref(v___f_2712_);
v___x_2777_ = l_Lasm_Fetch_bodyless(v_method_2711_, v_status_2759_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2778_; 
v___x_2778_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2778_, 0, v_body_2761_);
v___y_2744_ = v___x_2776_;
v___y_2745_ = v___x_2778_;
goto v___jp_2743_;
}
else
{
lean_object* v___x_2779_; 
lean_dec_ref(v_body_2761_);
v___x_2779_ = lean_box(1);
v___y_2744_ = v___x_2776_;
v___y_2745_ = v___x_2779_;
goto v___jp_2743_;
}
}
else
{
lean_object* v_val_2780_; uint8_t v___x_2781_; 
lean_dec_ref(v_body_2761_);
lean_del_object(v___x_2741_);
v_val_2780_ = lean_ctor_get(v_stream_2762_, 0);
lean_inc(v_val_2780_);
lean_dec_ref_known(v_stream_2762_, 1);
v___x_2781_ = l_Lasm_Fetch_bodyless(v_method_2711_, v_status_2759_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; lean_object* v___f_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2782_ = lean_box(v___x_2781_);
lean_inc(v_a_2739_);
v___f_2783_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2783_, 0, v___x_2776_);
lean_closure_set(v___f_2783_, 1, v___x_2782_);
lean_closure_set(v___f_2783_, 2, v_a_2739_);
lean_closure_set(v___f_2783_, 3, v___f_2712_);
lean_closure_set(v___f_2783_, 4, v___f_2713_);
lean_closure_set(v___f_2783_, 5, v___f_2714_);
lean_closure_set(v___f_2783_, 6, v_val_2780_);
v___x_2784_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2785_ = lean_unsigned_to_nat(0u);
v___x_2786_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2739_, v___x_2784_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
lean_ctor_set_tag(v___x_2789_, 1);
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
v___y_2725_ = v___x_2785_;
v___y_2726_ = v___f_2783_;
v___y_2727_ = v___x_2781_;
v_val_2728_ = v___x_2792_;
goto v___jp_2724_;
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2786_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2786_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set_tag(v___x_2797_, 0);
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
v___y_2725_ = v___x_2785_;
v___y_2726_ = v___f_2783_;
v___y_2727_ = v___x_2781_;
v_val_2728_ = v___x_2800_;
goto v___jp_2724_;
}
}
}
}
else
{
lean_object* v___f_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; lean_object* v___x_2807_; 
lean_dec(v_val_2780_);
lean_dec_ref(v___f_2714_);
lean_dec_ref(v___f_2713_);
lean_dec_ref(v___f_2712_);
v___f_2803_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2803_, 0, v___x_2776_);
v___x_2804_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = 0;
v___x_2807_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2739_, v___x_2804_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2807_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2807_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
lean_ctor_set_tag(v___x_2810_, 1);
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
v___y_2718_ = v___f_2803_;
v___y_2719_ = v___x_2806_;
v___y_2720_ = v___x_2805_;
v_val_2721_ = v___x_2813_;
goto v___jp_2717_;
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
v_a_2816_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2807_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2807_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set_tag(v___x_2818_, 0);
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2816_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
v___y_2718_ = v___f_2803_;
v___y_2719_ = v___x_2806_;
v___y_2720_ = v___x_2805_;
v_val_2721_ = v___x_2821_;
goto v___jp_2717_;
}
}
}
}
}
}
}
}
v___jp_2717_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2722_, 0, v_val_2721_);
v___x_2723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2720_, v___y_2719_, v___x_2722_, v___y_2718_);
return v___x_2723_;
}
v___jp_2724_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2729_, 0, v_val_2728_);
v___x_2730_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2725_, v___y_2727_, v___x_2729_, v___y_2726_);
return v___x_2730_;
}
v___jp_2731_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2736_, 0, v_val_2735_);
v___x_2737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2732_, v___y_2733_, v___x_2736_, v___y_2734_);
return v___x_2737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2833_, lean_object* v_method_2834_, lean_object* v___f_2835_, lean_object* v___f_2836_, lean_object* v___f_2837_, lean_object* v_x_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2833_, v_method_2834_, v___f_2835_, v___f_2836_, v___f_2837_, v_x_2838_);
lean_dec_ref(v_method_2834_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2842_, lean_object* v_r_2843_){
_start:
{
lean_object* v___f_2845_; lean_object* v___f_2846_; lean_object* v___x_2847_; uint8_t v___x_2848_; lean_object* v_val_2850_; lean_object* v___x_2853_; 
v___f_2845_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2846_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2846_, 0, v_r_2843_);
lean_closure_set(v___f_2846_, 1, v_method_2842_);
lean_closure_set(v___f_2846_, 2, v___f_2845_);
lean_closure_set(v___f_2846_, 3, v___f_2845_);
lean_closure_set(v___f_2846_, 4, v___f_2845_);
v___x_2847_ = lean_unsigned_to_nat(0u);
v___x_2848_ = 0;
v___x_2853_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2861_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2856_ = v___x_2853_;
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
if (v_isShared_2857_ == 0)
{
lean_ctor_set_tag(v___x_2856_, 1);
v___x_2859_ = v___x_2856_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2854_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
v_val_2850_ = v___x_2859_;
goto v___jp_2849_;
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
v_a_2862_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2853_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2853_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
lean_ctor_set_tag(v___x_2864_, 0);
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
v_val_2850_ = v___x_2867_;
goto v___jp_2849_;
}
}
}
v___jp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v_val_2850_);
v___x_2852_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2847_, v___x_2848_, v___x_2851_, v___f_2846_);
return v___x_2852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2870_, lean_object* v_r_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2870_, v_r_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2875_ = lean_box(0);
v___x_2876_ = lean_st_mk_ref(v___x_2875_);
v___x_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2880_){
_start:
{
if (lean_obj_tag(v_x_2880_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2890_; 
v_a_2882_ = lean_ctor_get(v_x_2880_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_x_2880_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2884_ = v_x_2880_;
v_isShared_2885_ = v_isSharedCheck_2890_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v_x_2880_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2890_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; 
v___x_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
return v___x_2888_;
}
}
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2901_; 
v_a_2891_ = lean_ctor_get(v_x_2880_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v_x_2880_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2893_ = v_x_2880_;
v_isShared_2894_ = v_isSharedCheck_2901_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v_x_2880_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2901_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2895_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2896_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2896_, 0, v_a_2891_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2896_);
v___x_2898_ = v___x_2893_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
lean_object* v___x_2899_; 
v___x_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2898_);
return v___x_2899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2902_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2905_, lean_object* v___x_2906_, lean_object* v___f_2907_, lean_object* v_x_2908_){
_start:
{
if (lean_obj_tag(v_x_2908_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2918_; 
lean_dec_ref(v___f_2907_);
lean_dec(v___x_2906_);
lean_dec_ref(v___y_2905_);
v_a_2910_ = lean_ctor_get(v_x_2908_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_x_2908_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2912_ = v_x_2908_;
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v_x_2908_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2915_; 
if (v_isShared_2913_ == 0)
{
v___x_2915_ = v___x_2912_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2910_);
v___x_2915_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
}
}
else
{
lean_object* v_a_2919_; uint8_t v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v_a_2919_ = lean_ctor_get(v_x_2908_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v_x_2908_, 1);
v___x_2920_ = 0;
v___x_2921_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2905_, v_a_2919_);
v___x_2922_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2906_, v___x_2920_, v___x_2921_, v___f_2907_);
return v___x_2922_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2923_, lean_object* v___x_2924_, lean_object* v___f_2925_, lean_object* v_x_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2923_, v___x_2924_, v___f_2925_, v_x_2926_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2929_, lean_object* v___x_2930_, lean_object* v___f_2931_, lean_object* v_req_2932_){
_start:
{
uint8_t v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2934_ = 0;
v___x_2935_ = l_Lasm_Fetch_respond(v_handler_2929_, v_req_2932_);
v___x_2936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2930_, v___x_2934_, v___x_2935_, v___f_2931_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2937_, lean_object* v___x_2938_, lean_object* v___f_2939_, lean_object* v_req_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2937_, v___x_2938_, v___f_2939_, v_req_2940_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2943_, lean_object* v_x_2944_){
_start:
{
if (lean_obj_tag(v_x_2944_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2954_; 
lean_dec_ref(v___f_2943_);
v_a_2946_ = lean_ctor_get(v_x_2944_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_x_2944_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2948_ = v_x_2944_;
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v_x_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2956_; 
v_a_2955_ = lean_ctor_get(v_x_2944_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v_x_2944_, 1);
v___x_2956_ = lean_apply_2(v___f_2943_, v_a_2955_, lean_box(0));
return v___x_2956_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2957_, lean_object* v_x_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2957_, v_x_2958_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v_headers_2963_, lean_object* v___f_2964_, lean_object* v___x_2965_, uint8_t v___x_2966_, lean_object* v___f_2967_, lean_object* v_x_2968_){
_start:
{
if (lean_obj_tag(v_x_2968_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2978_; 
lean_dec_ref(v___f_2967_);
lean_dec(v___x_2965_);
lean_dec_ref(v___f_2964_);
lean_dec_ref(v_headers_2963_);
lean_dec_ref(v___y_2962_);
lean_dec_ref(v___y_2961_);
v_a_2970_ = lean_ctor_get(v_x_2968_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v_x_2968_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2972_ = v_x_2968_;
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v_x_2968_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2978_;
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
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
return v___x_2976_;
}
}
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2989_; 
v_a_2979_ = lean_ctor_get(v_x_2968_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v_x_2968_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2981_ = v_x_2968_;
v_isShared_2982_ = v_isSharedCheck_2989_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v_x_2968_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2989_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2983_, 0, v___y_2961_);
lean_ctor_set(v___x_2983_, 1, v___y_2962_);
lean_ctor_set(v___x_2983_, 2, v_headers_2963_);
lean_ctor_set(v___x_2983_, 3, v_a_2979_);
lean_ctor_set(v___x_2983_, 4, v___f_2964_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v___x_2983_);
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
v___x_2987_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2965_, v___x_2966_, v___x_2986_, v___f_2967_);
return v___x_2987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v_headers_2992_, lean_object* v___f_2993_, lean_object* v___x_2994_, lean_object* v___x_2995_, lean_object* v___f_2996_, lean_object* v_x_2997_, lean_object* v___y_2998_){
_start:
{
uint8_t v___x_7785__boxed_2999_; lean_object* v_res_3000_; 
v___x_7785__boxed_2999_ = lean_unbox(v___x_2995_);
v_res_3000_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2990_, v___y_2991_, v_headers_2992_, v___f_2993_, v___x_2994_, v___x_7785__boxed_2999_, v___f_2996_, v_x_2997_);
return v_res_3000_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7(void){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___x_3009_ = lean_unsigned_to_nat(46u);
v___x_3010_ = lean_unsigned_to_nat(193u);
v___x_3011_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5));
v___x_3012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4));
v___x_3013_ = l_mkPanicMessageWithDecl(v___x_3012_, v___x_3011_, v___x_3010_, v___x_3009_, v___x_3008_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_3015_, lean_object* v_d_3016_){
_start:
{
lean_object* v_received_3019_; 
if (lean_obj_tag(v_d_3016_) == 6)
{
lean_object* v_b_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
v_b_3033_ = lean_ctor_get(v_d_3016_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_d_3016_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v_d_3016_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_b_3033_);
lean_dec(v_d_3016_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
lean_ctor_set_tag(v___x_3035_, 0);
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_b_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
else
{
if (lean_obj_tag(v_d_3016_) == 9)
{
lean_object* v_value_3041_; lean_object* v_description_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v_value_3041_ = lean_ctor_get(v_d_3016_, 0);
v_description_3042_ = lean_ctor_get(v_d_3016_, 1);
v___x_3043_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3044_ = lean_string_dec_eq(v_description_3042_, v___x_3043_);
if (v___x_3044_ == 0)
{
goto v___jp_3031_;
}
else
{
uint32_t v___x_3045_; uint64_t v___x_3046_; lean_object* v___x_3047_; uint32_t v___x_3048_; lean_object* v___x_3049_; 
lean_inc_n(v_value_3041_, 2);
lean_dec_ref_known(v_d_3016_, 2);
v___x_3045_ = 206;
v___x_3046_ = 0ULL;
v___x_3047_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3047_, 0, v_value_3041_);
lean_ctor_set(v___x_3047_, 1, v___x_3043_);
v___x_3048_ = lasm_js_value_handle(v_value_3041_);
lean_dec(v_value_3041_);
v___x_3049_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3045_, v___x_3046_, v___x_3047_, v___x_3048_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; uint8_t v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = lean_string_validate_utf8(v_a_3050_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
lean_dec(v_a_3050_);
v___x_3052_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
v___x_3053_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3052_);
v_received_3019_ = v___x_3053_;
goto v___jp_3018_;
}
else
{
lean_object* v___x_3054_; 
v___x_3054_ = lean_string_from_utf8_unchecked(v_a_3050_);
v_received_3019_ = v___x_3054_;
goto v___jp_3018_;
}
}
else
{
lean_object* v___x_3055_; 
lean_dec_ref_known(v___x_3049_, 1);
v___x_3055_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v_received_3019_ = v___x_3055_;
goto v___jp_3018_;
}
}
}
else
{
goto v___jp_3031_;
}
}
v___jp_3018_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3021_ = lean_string_append(v___x_3020_, v_context_3015_);
v___x_3022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3023_ = lean_string_append(v___x_3021_, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_3025_ = lean_string_append(v___x_3023_, v___x_3024_);
v___x_3026_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3027_ = lean_string_append(v___x_3025_, v___x_3026_);
v___x_3028_ = lean_string_append(v___x_3027_, v_received_3019_);
lean_dec_ref(v_received_3019_);
v___x_3029_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
return v___x_3030_;
}
v___jp_3031_:
{
lean_object* v___x_3032_; 
v___x_3032_ = l_Lasm_JS_Data_describe(v_d_3016_);
v_received_3019_ = v___x_3032_;
goto v___jp_3018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3056_, lean_object* v_d_3057_, lean_object* v_a_3058_){
_start:
{
lean_object* v_res_3059_; 
v_res_3059_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3056_, v_d_3057_);
lean_dec_ref(v_context_3056_);
return v_res_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_3060_, lean_object* v_bytes_3061_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3061_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3065_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v___x_3065_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_3060_, v_a_3064_);
return v___x_3065_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
v_a_3066_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3063_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3063_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_3074_, lean_object* v_bytes_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_3074_, v_bytes_3075_);
lean_dec_ref(v_bytes_3075_);
lean_dec_ref(v_context_3074_);
return v_res_3077_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_3078_, uint64_t v_extra_3079_){
_start:
{
uint64_t v___x_3080_; uint64_t v___y_3082_; 
v___x_3080_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3078_ == 0)
{
uint64_t v___x_3085_; 
v___x_3085_ = 0ULL;
v___y_3082_ = v___x_3085_;
goto v___jp_3081_;
}
else
{
uint64_t v___x_3086_; 
v___x_3086_ = 2ULL;
v___y_3082_ = v___x_3086_;
goto v___jp_3081_;
}
v___jp_3081_:
{
uint64_t v___x_3083_; uint64_t v___x_3084_; 
v___x_3083_ = lean_uint64_lor(v___x_3080_, v___y_3082_);
v___x_3084_ = lean_uint64_lor(v___x_3083_, v_extra_3079_);
return v___x_3084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_3087_, lean_object* v_extra_3088_){
_start:
{
uint8_t v_await_boxed_3089_; uint64_t v_extra_boxed_3090_; uint64_t v_res_3091_; lean_object* v_r_3092_; 
v_await_boxed_3089_ = lean_unbox(v_await_3087_);
v_extra_boxed_3090_ = lean_unbox_uint64(v_extra_3088_);
lean_dec_ref(v_extra_3088_);
v_res_3091_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_3089_, v_extra_boxed_3090_);
v_r_3092_ = lean_box_uint64(v_res_3091_);
return v_r_3092_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3093_; uint8_t v___x_3094_; uint64_t v___x_3095_; 
v___x_3093_ = 4ULL;
v___x_3094_ = 0;
v___x_3095_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_3094_, v___x_3093_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_3096_, lean_object* v_args_3097_){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; uint64_t v___x_3102_; lean_object* v___x_3103_; 
v___x_3099_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3100_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3100_, 0, v_c_3096_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = lean_box(0);
v___x_3102_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_3103_ = l_Lasm_JS_Value_invokeRaw(v___x_3100_, v___x_3101_, v_args_3097_, v___x_3102_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3103_, 1);
v___x_3105_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_3105_, v_a_3104_);
lean_dec(v_a_3104_);
return v___x_3106_;
}
else
{
return v___x_3103_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_3107_, lean_object* v_args_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_3107_, v_args_3108_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_3111_, uint8_t v___x_3112_, lean_object* v___f_3113_, lean_object* v_a_3114_, lean_object* v_x_3115_){
_start:
{
lean_object* v_val_3118_; 
if (lean_obj_tag(v_x_3115_) == 0)
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3129_; 
lean_dec(v_a_3114_);
lean_dec_ref(v___f_3113_);
lean_dec(v___x_3111_);
v_a_3121_ = lean_ctor_get(v_x_3115_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v_x_3115_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3123_ = v_x_3115_;
v_isShared_3124_ = v_isSharedCheck_3129_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v_x_3115_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3129_;
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
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
return v___x_3127_;
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3148_; 
v_a_3130_ = lean_ctor_get(v_x_3115_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v_x_3115_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3132_ = v_x_3115_;
v_isShared_3133_ = v_isSharedCheck_3148_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v_x_3115_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3148_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3134_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3135_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3135_, 0, v_a_3130_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = lean_unsigned_to_nat(1u);
v___x_3137_ = lean_mk_empty_array_with_capacity(v___x_3136_);
v___x_3138_ = lean_array_push(v___x_3137_, v___x_3135_);
v___x_3139_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_3114_, v___x_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3139_, 1);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 0, v_a_3140_);
v___x_3142_ = v___x_3132_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
v_val_3118_ = v___x_3142_;
goto v___jp_3117_;
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; 
v_a_3144_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3139_, 1);
if (v_isShared_3133_ == 0)
{
lean_ctor_set_tag(v___x_3132_, 0);
lean_ctor_set(v___x_3132_, 0, v_a_3144_);
v___x_3146_ = v___x_3132_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3144_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
v_val_3118_ = v___x_3146_;
goto v___jp_3117_;
}
}
}
}
v___jp_3117_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v_val_3118_);
v___x_3120_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3111_, v___x_3112_, v___x_3119_, v___f_3113_);
return v___x_3120_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_3149_, lean_object* v___x_3150_, lean_object* v___f_3151_, lean_object* v_a_3152_, lean_object* v_x_3153_, lean_object* v___y_3154_){
_start:
{
uint8_t v___x_8041__boxed_3155_; lean_object* v_res_3156_; 
v___x_8041__boxed_3155_ = lean_unbox(v___x_3150_);
v_res_3156_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_3149_, v___x_8041__boxed_3155_, v___f_3151_, v_a_3152_, v_x_3153_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v_headers_3159_, lean_object* v___x_3160_, lean_object* v___x_3161_, lean_object* v___f_3162_, lean_object* v_x_3163_){
_start:
{
if (lean_obj_tag(v_x_3163_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3173_; 
lean_dec_ref(v___f_3162_);
lean_dec(v___x_3161_);
lean_dec_ref(v___x_3160_);
lean_dec_ref(v_headers_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3157_);
v_a_3165_ = lean_ctor_get(v_x_3163_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_x_3163_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3167_ = v_x_3163_;
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v_x_3163_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
lean_object* v___x_3171_; 
v___x_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
return v___x_3171_;
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3185_; 
v_a_3174_ = lean_ctor_get(v_x_3163_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_x_3163_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3176_ = v_x_3163_;
v_isShared_3177_ = v_isSharedCheck_3185_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v_x_3163_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3185_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; uint8_t v___x_3179_; lean_object* v___x_3181_; 
v___x_3178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3178_, 0, v___y_3157_);
lean_ctor_set(v___x_3178_, 1, v___y_3158_);
lean_ctor_set(v___x_3178_, 2, v_headers_3159_);
lean_ctor_set(v___x_3178_, 3, v___x_3160_);
lean_ctor_set(v___x_3178_, 4, v_a_3174_);
v___x_3179_ = 0;
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3178_);
v___x_3181_ = v___x_3176_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3178_);
v___x_3181_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3181_);
v___x_3183_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3161_, v___x_3179_, v___x_3182_, v___f_3162_);
return v___x_3183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v_headers_3188_, lean_object* v___x_3189_, lean_object* v___x_3190_, lean_object* v___f_3191_, lean_object* v_x_3192_, lean_object* v___y_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_3186_, v___y_3187_, v_headers_3188_, v___x_3189_, v___x_3190_, v___f_3191_, v_x_3192_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3195_, lean_object* v_x_3196_){
_start:
{
if (lean_obj_tag(v_x_3196_) == 0)
{
lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3206_; 
lean_dec_ref(v___f_3195_);
v_a_3198_ = lean_ctor_get(v_x_3196_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v_x_3196_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3200_ = v_x_3196_;
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v_x_3196_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3203_; 
if (v_isShared_3201_ == 0)
{
v___x_3203_ = v___x_3200_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3198_);
v___x_3203_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3203_);
return v___x_3204_;
}
}
}
else
{
lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3218_; 
v_isSharedCheck_3218_ = !lean_is_exclusive(v_x_3196_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; 
v_unused_3219_ = lean_ctor_get(v_x_3196_, 0);
lean_dec(v_unused_3219_);
v___x_3208_ = v_x_3196_;
v_isShared_3209_ = v_isSharedCheck_3218_;
goto v_resetjp_3207_;
}
else
{
lean_dec(v_x_3196_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3218_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3210_; uint8_t v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3214_; 
v___x_3210_ = lean_unsigned_to_nat(0u);
v___x_3211_ = 0;
v___x_3212_ = lean_io_promise_new();
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v___x_3212_);
v___x_3214_ = v___x_3208_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
v___x_3216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3210_, v___x_3211_, v___x_3215_, v___f_3195_);
return v___x_3216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3220_, lean_object* v_x_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3220_, v_x_3221_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3224_, lean_object* v_x_3225_){
_start:
{
if (lean_obj_tag(v_x_3225_) == 0)
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3235_; 
lean_dec_ref(v___f_3224_);
v_a_3227_ = lean_ctor_get(v_x_3225_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_x_3225_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3229_ = v_x_3225_;
v_isShared_3230_ = v_isSharedCheck_3235_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v_x_3225_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3235_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
lean_object* v___x_3233_; 
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
return v___x_3233_;
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3237_; 
v_a_3236_ = lean_ctor_get(v_x_3225_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v_x_3225_, 1);
v___x_3237_ = lean_apply_2(v___f_3224_, v_a_3236_, lean_box(0));
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3238_, lean_object* v_x_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3238_, v_x_3239_);
return v_res_3241_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v_context_3242_, lean_object* v_x_3243_){
_start:
{
lean_object* v_val_3246_; 
if (lean_obj_tag(v_x_3243_) == 0)
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3256_; 
v_a_3248_ = lean_ctor_get(v_x_3243_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_x_3243_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3250_ = v_x_3243_;
v_isShared_3251_ = v_isSharedCheck_3256_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v_x_3243_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3256_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
lean_object* v___x_3254_; 
v___x_3254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
return v___x_3254_;
}
}
}
else
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3270_; 
v_a_3257_ = lean_ctor_get(v_x_3243_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v_x_3243_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3259_ = v_x_3243_;
v_isShared_3260_ = v_isSharedCheck_3270_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v_x_3243_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3270_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3242_, v_a_3257_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3264_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
if (v_isShared_3260_ == 0)
{
lean_ctor_set(v___x_3259_, 0, v_a_3262_);
v___x_3264_ = v___x_3259_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3262_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
v_val_3246_ = v___x_3264_;
goto v___jp_3245_;
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; 
v_a_3266_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3266_);
lean_dec_ref_known(v___x_3261_, 1);
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 0);
lean_ctor_set(v___x_3259_, 0, v_a_3266_);
v___x_3268_ = v___x_3259_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3266_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
v_val_3246_ = v___x_3268_;
goto v___jp_3245_;
}
}
}
}
v___jp_3245_:
{
lean_object* v___x_3247_; 
v___x_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3247_, 0, v_val_3246_);
return v___x_3247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v_context_3271_, lean_object* v_x_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v_context_3271_, v_x_3272_);
lean_dec_ref(v_context_3271_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_3275_, uint32_t v_op_3276_, uint64_t v_flags_3277_, lean_object* v_payload_3278_, lean_object* v___f_3279_, lean_object* v___f_3280_, lean_object* v___f_3281_, lean_object* v_x_3282_){
_start:
{
if (lean_obj_tag(v_x_3282_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3292_; 
lean_dec_ref(v___f_3281_);
lean_dec_ref(v___f_3280_);
lean_dec_ref(v___f_3279_);
lean_dec(v_payload_3278_);
v_a_3284_ = lean_ctor_get(v_x_3282_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v_x_3282_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3286_ = v_x_3282_;
v_isShared_3287_ = v_isSharedCheck_3292_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v_x_3282_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3292_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; 
v___x_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
return v___x_3290_;
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3339_; 
v_a_3293_ = lean_ctor_get(v_x_3282_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v_x_3282_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3295_ = v_x_3282_;
v_isShared_3296_ = v_isSharedCheck_3339_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v_x_3282_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3339_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; uint8_t v___x_3299_; 
v___x_3297_ = lean_string_utf8_byte_size(v_failurePrefix_3275_);
v___x_3298_ = lean_unsigned_to_nat(0u);
v___x_3299_ = lean_nat_dec_eq(v___x_3297_, v___x_3298_);
if (v___x_3299_ == 0)
{
lean_object* v___f_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___f_3304_; lean_object* v_val_3306_; lean_object* v___x_3311_; 
lean_dec_ref(v___f_3281_);
lean_inc(v_a_3293_);
v___f_3300_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3300_, 0, v_a_3293_);
v___x_3301_ = lean_box(v___x_3299_);
v___x_3302_ = lean_box_uint32(v_op_3276_);
v___x_3303_ = lean_box_uint64(v_flags_3277_);
lean_inc(v_payload_3278_);
v___f_3304_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3304_, 0, v___x_3298_);
lean_closure_set(v___f_3304_, 1, v___x_3301_);
lean_closure_set(v___f_3304_, 2, v___f_3300_);
lean_closure_set(v___f_3304_, 3, v_a_3293_);
lean_closure_set(v___f_3304_, 4, v___x_3302_);
lean_closure_set(v___f_3304_, 5, v___x_3303_);
lean_closure_set(v___f_3304_, 6, v_payload_3278_);
v___x_3311_ = l_Lasm_JS_Wire_encodeIO(v_payload_3278_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v___x_3311_, 1);
if (v_isShared_3296_ == 0)
{
lean_ctor_set(v___x_3295_, 0, v_a_3312_);
v___x_3314_ = v___x_3295_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
v_val_3306_ = v___x_3314_;
goto v___jp_3305_;
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; 
v_a_3316_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3311_, 1);
if (v_isShared_3296_ == 0)
{
lean_ctor_set_tag(v___x_3295_, 0);
lean_ctor_set(v___x_3295_, 0, v_a_3316_);
v___x_3318_ = v___x_3295_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3316_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
v_val_3306_ = v___x_3318_;
goto v___jp_3305_;
}
}
v___jp_3305_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3307_, 0, v_val_3306_);
v___x_3308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3298_, v___x_3299_, v___x_3307_, v___f_3304_);
v___x_3309_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3298_, v___x_3299_, v___x_3308_, v___f_3279_);
v___x_3310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3298_, v___x_3299_, v___x_3309_, v___f_3280_);
return v___x_3310_;
}
}
else
{
lean_object* v___f_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___f_3323_; uint8_t v___x_3324_; lean_object* v_val_3326_; lean_object* v___x_3330_; 
lean_dec_ref(v___f_3280_);
lean_dec_ref(v___f_3279_);
lean_inc(v_a_3293_);
v___f_3320_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3320_, 0, v_a_3293_);
v___x_3321_ = lean_box_uint32(v_op_3276_);
v___x_3322_ = lean_box_uint64(v_flags_3277_);
lean_inc(v_payload_3278_);
v___f_3323_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3323_, 0, v___f_3320_);
lean_closure_set(v___f_3323_, 1, v_a_3293_);
lean_closure_set(v___f_3323_, 2, v___x_3321_);
lean_closure_set(v___f_3323_, 3, v___x_3322_);
lean_closure_set(v___f_3323_, 4, v_payload_3278_);
v___x_3324_ = 0;
v___x_3330_ = l_Lasm_JS_Wire_encodeIO(v_payload_3278_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_a_3331_);
lean_dec_ref_known(v___x_3330_, 1);
if (v_isShared_3296_ == 0)
{
lean_ctor_set(v___x_3295_, 0, v_a_3331_);
v___x_3333_ = v___x_3295_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
v_val_3326_ = v___x_3333_;
goto v___jp_3325_;
}
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; 
v_a_3335_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3330_, 1);
if (v_isShared_3296_ == 0)
{
lean_ctor_set_tag(v___x_3295_, 0);
lean_ctor_set(v___x_3295_, 0, v_a_3335_);
v___x_3337_ = v___x_3295_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_a_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
v_val_3326_ = v___x_3337_;
goto v___jp_3325_;
}
}
v___jp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3327_, 0, v_val_3326_);
v___x_3328_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3298_, v___x_3324_, v___x_3327_, v___f_3323_);
v___x_3329_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3298_, v___x_3324_, v___x_3328_, v___f_3281_);
return v___x_3329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_3340_, lean_object* v_op_3341_, lean_object* v_flags_3342_, lean_object* v_payload_3343_, lean_object* v___f_3344_, lean_object* v___f_3345_, lean_object* v___f_3346_, lean_object* v_x_3347_, lean_object* v___y_3348_){
_start:
{
uint32_t v_op_boxed_3349_; uint64_t v_flags_boxed_3350_; lean_object* v_res_3351_; 
v_op_boxed_3349_ = lean_unbox_uint32(v_op_3341_);
lean_dec(v_op_3341_);
v_flags_boxed_3350_ = lean_unbox_uint64(v_flags_3342_);
lean_dec_ref(v_flags_3342_);
v_res_3351_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9(v_failurePrefix_3340_, v_op_boxed_3349_, v_flags_boxed_3350_, v_payload_3343_, v___f_3344_, v___f_3345_, v___f_3346_, v_x_3347_);
lean_dec_ref(v_failurePrefix_3340_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v___f_3352_, lean_object* v_bytes_3353_){
_start:
{
lean_object* v___x_3355_; uint8_t v___x_3356_; lean_object* v_val_3358_; lean_object* v___x_3361_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = 0;
v___x_3361_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3353_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3361_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3361_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set_tag(v___x_3364_, 1);
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
v_val_3358_ = v___x_3367_;
goto v___jp_3357_;
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
v_a_3370_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3361_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3361_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
lean_ctor_set_tag(v___x_3372_, 0);
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
v_val_3358_ = v___x_3375_;
goto v___jp_3357_;
}
}
}
v___jp_3357_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3359_, 0, v_val_3358_);
v___x_3360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3355_, v___x_3356_, v___x_3359_, v___f_3352_);
return v___x_3360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v___f_3378_, lean_object* v_bytes_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v_res_3381_; 
v_res_3381_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v___f_3378_, v_bytes_3379_);
lean_dec_ref(v_bytes_3379_);
return v_res_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3382_, uint32_t v_op_3383_, uint64_t v_flags_3384_, lean_object* v_payload_3385_, lean_object* v_failurePrefix_3386_){
_start:
{
lean_object* v___f_3388_; lean_object* v___f_3389_; lean_object* v___f_3390_; lean_object* v___f_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___x_3396_; uint8_t v___x_3397_; lean_object* v_val_3399_; lean_object* v___x_3402_; 
v___f_3388_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3388_, 0, v_context_3382_);
v___f_3389_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3389_, 0, v___f_3388_);
v___f_3390_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3390_, 0, v___f_3389_);
lean_inc_ref(v_failurePrefix_3386_);
v___f_3391_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3391_, 0, v_failurePrefix_3386_);
v___x_3392_ = lean_box_uint32(v_op_3383_);
v___x_3393_ = lean_box_uint64(v_flags_3384_);
lean_inc_ref(v___f_3390_);
v___f_3394_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3394_, 0, v_failurePrefix_3386_);
lean_closure_set(v___f_3394_, 1, v___x_3392_);
lean_closure_set(v___f_3394_, 2, v___x_3393_);
lean_closure_set(v___f_3394_, 3, v_payload_3385_);
lean_closure_set(v___f_3394_, 4, v___f_3391_);
lean_closure_set(v___f_3394_, 5, v___f_3390_);
lean_closure_set(v___f_3394_, 6, v___f_3390_);
v___f_3395_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3395_, 0, v___f_3394_);
v___x_3396_ = lean_unsigned_to_nat(0u);
v___x_3397_ = 0;
v___x_3402_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
lean_ctor_set_tag(v___x_3405_, 1);
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
v_val_3399_ = v___x_3408_;
goto v___jp_3398_;
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
v_a_3411_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3402_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3402_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
lean_ctor_set_tag(v___x_3413_, 0);
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
v_val_3399_ = v___x_3416_;
goto v___jp_3398_;
}
}
}
v___jp_3398_:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3400_, 0, v_val_3399_);
v___x_3401_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3396_, v___x_3397_, v___x_3400_, v___f_3395_);
return v___x_3401_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3419_, lean_object* v_op_3420_, lean_object* v_flags_3421_, lean_object* v_payload_3422_, lean_object* v_failurePrefix_3423_, lean_object* v_a_3424_){
_start:
{
uint32_t v_op_boxed_3425_; uint64_t v_flags_boxed_3426_; lean_object* v_res_3427_; 
v_op_boxed_3425_ = lean_unbox_uint32(v_op_3420_);
lean_dec(v_op_3420_);
v_flags_boxed_3426_ = lean_unbox_uint64(v_flags_3421_);
lean_dec_ref(v_flags_3421_);
v_res_3427_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3419_, v_op_boxed_3425_, v_flags_boxed_3426_, v_payload_3422_, v_failurePrefix_3423_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3428_, lean_object* v_name_3429_, lean_object* v_args_3430_){
_start:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; uint32_t v___x_3437_; uint64_t v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3432_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3433_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3433_, 0, v_o_3428_);
lean_ctor_set(v___x_3433_, 1, v___x_3432_);
lean_inc_ref(v_name_3429_);
v___x_3434_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3434_, 0, v_name_3429_);
v___x_3435_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3436_ = lean_string_append(v___x_3435_, v_name_3429_);
lean_dec_ref(v_name_3429_);
v___x_3437_ = 205;
v___x_3438_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3439_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3439_, 0, v_args_3430_);
v___x_3440_ = lean_unsigned_to_nat(3u);
v___x_3441_ = lean_mk_empty_array_with_capacity(v___x_3440_);
v___x_3442_ = lean_array_push(v___x_3441_, v___x_3433_);
v___x_3443_ = lean_array_push(v___x_3442_, v___x_3434_);
v___x_3444_ = lean_array_push(v___x_3443_, v___x_3439_);
v___x_3445_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
v___x_3446_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3436_, v___x_3437_, v___x_3438_, v___x_3445_, v___x_3432_);
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3447_, lean_object* v_name_3448_, lean_object* v_args_3449_, lean_object* v___y_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3447_, v_name_3448_, v_args_3449_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v_options_3456_, lean_object* v___f_3457_, lean_object* v___f_3458_, lean_object* v_a_3459_, lean_object* v_value_3460_, lean_object* v_a_3461_, lean_object* v___x_3462_, lean_object* v___f_3463_, lean_object* v___f_3464_, lean_object* v_headers_3465_){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___f_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; uint8_t v___x_3479_; 
v___x_3467_ = lean_mk_empty_array_with_capacity(v___x_3453_);
v___x_3468_ = l_ByteArray_empty;
v___f_3469_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3467_);
lean_inc_ref(v___y_3455_);
lean_inc_ref(v___y_3454_);
v___x_3470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3470_, 0, v___y_3454_);
lean_ctor_set(v___x_3470_, 1, v___y_3455_);
lean_ctor_set(v___x_3470_, 2, v___x_3467_);
lean_ctor_set(v___x_3470_, 3, v___x_3468_);
lean_ctor_set(v___x_3470_, 4, v___f_3469_);
v___x_3471_ = l_Lasm_Fetch_Request_path(v___x_3470_);
v___x_3472_ = lean_apply_1(v_options_3456_, v___x_3471_);
v___x_3479_ = lean_unbox(v___x_3472_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; uint8_t v___x_3481_; 
lean_dec_ref(v___f_3464_);
lean_dec_ref(v___f_3463_);
v___x_3480_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_3481_ = lean_string_dec_eq(v___y_3454_, v___x_3480_);
if (v___x_3481_ == 0)
{
lean_object* v___x_3482_; uint8_t v___x_3483_; 
v___x_3482_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3483_ = lean_string_dec_eq(v___y_3454_, v___x_3482_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3484_; lean_object* v___f_3485_; lean_object* v___x_3486_; lean_object* v___f_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_dec_ref(v___f_3457_);
v___x_3484_ = lean_box(v___x_3483_);
lean_inc_n(v___x_3453_, 2);
v___f_3485_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3485_, 0, v___y_3454_);
lean_closure_set(v___f_3485_, 1, v___y_3455_);
lean_closure_set(v___f_3485_, 2, v_headers_3465_);
lean_closure_set(v___f_3485_, 3, v___f_3469_);
lean_closure_set(v___f_3485_, 4, v___x_3453_);
lean_closure_set(v___f_3485_, 5, v___x_3484_);
lean_closure_set(v___f_3485_, 6, v___f_3458_);
v___x_3486_ = lean_box(v___x_3483_);
v___f_3487_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3487_, 0, v___x_3453_);
lean_closure_set(v___f_3487_, 1, v___x_3486_);
lean_closure_set(v___f_3487_, 2, v___f_3485_);
lean_closure_set(v___f_3487_, 3, v_a_3459_);
v___x_3488_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3489_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3460_, v___x_3488_, v___x_3467_);
v___x_3490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3453_, v___x_3483_, v___x_3489_, v___f_3487_);
return v___x_3490_;
}
else
{
lean_dec_ref(v___x_3467_);
lean_dec(v_value_3460_);
lean_dec(v_a_3459_);
lean_dec_ref(v___f_3458_);
goto v___jp_3473_;
}
}
else
{
lean_dec_ref(v___x_3467_);
lean_dec(v_value_3460_);
lean_dec(v_a_3459_);
lean_dec_ref(v___f_3458_);
goto v___jp_3473_;
}
}
else
{
lean_object* v___x_3491_; 
lean_dec_ref(v___x_3467_);
lean_dec(v_value_3460_);
lean_dec(v_a_3459_);
lean_dec_ref(v___f_3458_);
lean_dec_ref(v___f_3457_);
v___x_3491_ = l_Lasm_JS_Data_field(v_a_3461_, v___x_3462_);
if (lean_obj_tag(v___x_3491_) == 9)
{
lean_object* v_value_3492_; lean_object* v___f_3493_; uint8_t v___x_3494_; lean_object* v_val_3496_; lean_object* v___x_3499_; 
lean_dec_ref(v___f_3464_);
v_value_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_value_3492_);
lean_dec_ref_known(v___x_3491_, 2);
lean_inc(v___x_3453_);
v___f_3493_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3493_, 0, v___y_3454_);
lean_closure_set(v___f_3493_, 1, v___y_3455_);
lean_closure_set(v___f_3493_, 2, v_headers_3465_);
lean_closure_set(v___f_3493_, 3, v___x_3468_);
lean_closure_set(v___f_3493_, 4, v___x_3453_);
lean_closure_set(v___f_3493_, 5, v___f_3463_);
v___x_3494_ = 0;
v___x_3499_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3492_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3499_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3499_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
lean_ctor_set_tag(v___x_3502_, 1);
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
v_val_3496_ = v___x_3505_;
goto v___jp_3495_;
}
}
}
else
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
v_a_3508_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3499_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3499_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set_tag(v___x_3510_, 0);
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
v_val_3496_ = v___x_3513_;
goto v___jp_3495_;
}
}
}
v___jp_3495_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v_val_3496_);
v___x_3498_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3453_, v___x_3494_, v___x_3497_, v___f_3493_);
return v___x_3498_;
}
}
else
{
lean_object* v___x_3516_; uint8_t v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
lean_dec(v___x_3491_);
lean_dec_ref(v___f_3463_);
v___x_3516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3516_, 0, v___y_3454_);
lean_ctor_set(v___x_3516_, 1, v___y_3455_);
lean_ctor_set(v___x_3516_, 2, v_headers_3465_);
lean_ctor_set(v___x_3516_, 3, v___x_3468_);
lean_ctor_set(v___x_3516_, 4, v___f_3469_);
v___x_3517_ = 0;
v___x_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3516_);
v___x_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
v___x_3520_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3453_, v___x_3517_, v___x_3519_, v___f_3464_);
return v___x_3520_;
}
}
v___jp_3473_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; uint8_t v___x_3477_; lean_object* v___x_3478_; 
v___x_3474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3474_, 0, v___y_3454_);
lean_ctor_set(v___x_3474_, 1, v___y_3455_);
lean_ctor_set(v___x_3474_, 2, v_headers_3465_);
lean_ctor_set(v___x_3474_, 3, v___x_3468_);
lean_ctor_set(v___x_3474_, 4, v___f_3469_);
v___x_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
v___x_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
v___x_3477_ = lean_unbox(v___x_3472_);
v___x_3478_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3453_, v___x_3477_, v___x_3476_, v___f_3457_);
return v___x_3478_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v_options_3524_, lean_object* v___f_3525_, lean_object* v___f_3526_, lean_object* v_a_3527_, lean_object* v_value_3528_, lean_object* v_a_3529_, lean_object* v___x_3530_, lean_object* v___f_3531_, lean_object* v___f_3532_, lean_object* v_headers_3533_, lean_object* v___y_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3521_, v___y_3522_, v___y_3523_, v_options_3524_, v___f_3525_, v___f_3526_, v_a_3527_, v_value_3528_, v_a_3529_, v___x_3530_, v___f_3531_, v___f_3532_, v_headers_3533_);
lean_dec_ref(v___x_3530_);
lean_dec(v_a_3529_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3536_, lean_object* v_x_3537_){
_start:
{
if (lean_obj_tag(v_x_3537_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3547_; 
lean_dec_ref(v___f_3536_);
v_a_3539_ = lean_ctor_get(v_x_3537_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v_x_3537_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3541_ = v_x_3537_;
v_isShared_3542_ = v_isSharedCheck_3547_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v_x_3537_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3547_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
return v___x_3545_;
}
}
}
else
{
lean_object* v_a_3548_; lean_object* v___x_3549_; 
v_a_3548_ = lean_ctor_get(v_x_3537_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v_x_3537_, 1);
v___x_3549_ = lean_apply_2(v___f_3536_, v_a_3548_, lean_box(0));
return v___x_3549_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3550_, lean_object* v_x_3551_, lean_object* v___y_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3550_, v_x_3551_);
return v_res_3553_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3554_, uint64_t v_extra_3555_){
_start:
{
uint64_t v___x_3556_; uint64_t v___y_3558_; 
v___x_3556_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3554_ == 0)
{
uint64_t v___x_3561_; 
v___x_3561_ = 0ULL;
v___y_3558_ = v___x_3561_;
goto v___jp_3557_;
}
else
{
uint64_t v___x_3562_; 
v___x_3562_ = 2ULL;
v___y_3558_ = v___x_3562_;
goto v___jp_3557_;
}
v___jp_3557_:
{
uint64_t v___x_3559_; uint64_t v___x_3560_; 
v___x_3559_ = lean_uint64_lor(v___x_3556_, v___y_3558_);
v___x_3560_ = lean_uint64_lor(v___x_3559_, v_extra_3555_);
return v___x_3560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3563_, lean_object* v_extra_3564_){
_start:
{
uint8_t v_await_boxed_3565_; uint64_t v_extra_boxed_3566_; uint64_t v_res_3567_; lean_object* v_r_3568_; 
v_await_boxed_3565_ = lean_unbox(v_await_3563_);
v_extra_boxed_3566_ = lean_unbox_uint64(v_extra_3564_);
lean_dec_ref(v_extra_3564_);
v_res_3567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3565_, v_extra_boxed_3566_);
v_r_3568_ = lean_box_uint64(v_res_3567_);
return v_r_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3574_, size_t v_i_3575_, lean_object* v_bs_3576_){
_start:
{
uint8_t v___x_3579_; 
v___x_3579_ = lean_usize_dec_lt(v_i_3575_, v_sz_3574_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; 
v___x_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3580_, 0, v_bs_3576_);
return v___x_3580_;
}
else
{
lean_object* v_v_3581_; 
v_v_3581_ = lean_array_uget_borrowed(v_bs_3576_, v_i_3575_);
if (lean_obj_tag(v_v_3581_) == 7)
{
lean_object* v_items_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; 
v_items_3582_ = lean_ctor_get(v_v_3581_, 0);
v___x_3583_ = lean_array_get_size(v_items_3582_);
v___x_3584_ = lean_unsigned_to_nat(2u);
v___x_3585_ = lean_nat_dec_eq(v___x_3583_, v___x_3584_);
if (v___x_3585_ == 0)
{
lean_dec_ref(v_bs_3576_);
goto v___jp_3577_;
}
else
{
lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3586_ = lean_unsigned_to_nat(0u);
v___x_3587_ = lean_array_fget_borrowed(v_items_3582_, v___x_3586_);
if (lean_obj_tag(v___x_3587_) == 4)
{
lean_object* v_s_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_s_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc_ref(v_s_3588_);
v___x_3589_ = lean_unsigned_to_nat(1u);
v___x_3590_ = lean_array_fget_borrowed(v_items_3582_, v___x_3589_);
if (lean_obj_tag(v___x_3590_) == 4)
{
lean_object* v_s_3591_; lean_object* v_bs_x27_3592_; lean_object* v___x_3593_; size_t v___x_3594_; size_t v___x_3595_; lean_object* v___x_3596_; 
v_s_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc_ref(v_s_3591_);
v_bs_x27_3592_ = lean_array_uset(v_bs_3576_, v_i_3575_, v___x_3586_);
v___x_3593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3593_, 0, v_s_3588_);
lean_ctor_set(v___x_3593_, 1, v_s_3591_);
v___x_3594_ = ((size_t)1ULL);
v___x_3595_ = lean_usize_add(v_i_3575_, v___x_3594_);
v___x_3596_ = lean_array_uset(v_bs_x27_3592_, v_i_3575_, v___x_3593_);
v_i_3575_ = v___x_3595_;
v_bs_3576_ = v___x_3596_;
goto _start;
}
else
{
lean_object* v___x_3598_; 
lean_dec_ref(v_s_3588_);
lean_dec_ref(v_bs_3576_);
v___x_3598_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3598_;
}
}
else
{
lean_object* v___x_3599_; 
lean_dec_ref(v_bs_3576_);
v___x_3599_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3599_;
}
}
}
else
{
lean_dec_ref(v_bs_3576_);
goto v___jp_3577_;
}
}
v___jp_3577_:
{
lean_object* v___x_3578_; 
v___x_3578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3600_, lean_object* v_i_3601_, lean_object* v_bs_3602_){
_start:
{
size_t v_sz_boxed_3603_; size_t v_i_boxed_3604_; lean_object* v_res_3605_; 
v_sz_boxed_3603_ = lean_unbox_usize(v_sz_3600_);
lean_dec(v_sz_3600_);
v_i_boxed_3604_ = lean_unbox_usize(v_i_3601_);
lean_dec(v_i_3601_);
v_res_3605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3603_, v_i_boxed_3604_, v_bs_3602_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3610_, lean_object* v_d_3611_){
_start:
{
lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3620_; lean_object* v_received_3621_; lean_object* v___y_3640_; lean_object* v_a_3643_; 
if (lean_obj_tag(v_d_3611_) == 7)
{
lean_object* v_items_3667_; size_t v_sz_3668_; size_t v___x_3669_; lean_object* v___x_3670_; 
v_items_3667_ = lean_ctor_get(v_d_3611_, 0);
v_sz_3668_ = lean_array_size(v_items_3667_);
v___x_3669_ = ((size_t)0ULL);
lean_inc_ref(v_items_3667_);
v___x_3670_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3668_, v___x_3669_, v_items_3667_);
if (lean_obj_tag(v___x_3670_) == 0)
{
lean_object* v_a_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; uint8_t v___x_3675_; 
v_a_3671_ = lean_ctor_get(v___x_3670_, 0);
lean_inc(v_a_3671_);
lean_dec_ref_known(v___x_3670_, 1);
v___x_3672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3673_ = lean_string_utf8_byte_size(v_a_3671_);
v___x_3674_ = lean_unsigned_to_nat(0u);
v___x_3675_ = lean_nat_dec_eq(v___x_3673_, v___x_3674_);
if (v___x_3675_ == 0)
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3676_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3677_ = lean_string_append(v___x_3676_, v_a_3671_);
lean_dec(v_a_3671_);
v___x_3678_ = lean_string_append(v___x_3672_, v___x_3677_);
lean_dec_ref(v___x_3677_);
v_a_3643_ = v___x_3678_;
goto v___jp_3642_;
}
else
{
lean_dec(v_a_3671_);
v_a_3643_ = v___x_3672_;
goto v___jp_3642_;
}
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
lean_dec_ref_known(v_d_3611_, 1);
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
return v___x_3684_;
}
}
}
}
else
{
lean_object* v___x_3687_; 
v___x_3687_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3643_ = v___x_3687_;
goto v___jp_3642_;
}
v___jp_3613_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3616_ = lean_string_append(v___y_3614_, v___y_3615_);
lean_dec_ref(v___y_3615_);
v___x_3617_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
v___x_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
return v___x_3618_;
}
v___jp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; uint8_t v___x_3633_; 
v___x_3622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3623_ = lean_string_append(v___x_3622_, v_context_3610_);
v___x_3624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3625_ = lean_string_append(v___x_3623_, v___x_3624_);
v___x_3626_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3627_ = lean_string_append(v___x_3625_, v___x_3626_);
v___x_3628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3629_ = lean_string_append(v___x_3627_, v___x_3628_);
v___x_3630_ = lean_string_append(v___x_3629_, v_received_3621_);
lean_dec_ref(v_received_3621_);
v___x_3631_ = lean_string_utf8_byte_size(v___y_3620_);
v___x_3632_ = lean_unsigned_to_nat(0u);
v___x_3633_ = lean_nat_dec_eq(v___x_3631_, v___x_3632_);
if (v___x_3633_ == 0)
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3635_ = lean_string_append(v___x_3634_, v___y_3620_);
lean_dec_ref(v___y_3620_);
v___x_3636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3637_ = lean_string_append(v___x_3635_, v___x_3636_);
v___y_3614_ = v___x_3630_;
v___y_3615_ = v___x_3637_;
goto v___jp_3613_;
}
else
{
lean_object* v___x_3638_; 
lean_dec_ref(v___y_3620_);
v___x_3638_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3614_ = v___x_3630_;
v___y_3615_ = v___x_3638_;
goto v___jp_3613_;
}
}
v___jp_3639_:
{
lean_object* v___x_3641_; 
v___x_3641_ = l_Lasm_JS_Data_describe(v_d_3611_);
v___y_3620_ = v___y_3640_;
v_received_3621_ = v___x_3641_;
goto v___jp_3619_;
}
v___jp_3642_:
{
if (lean_obj_tag(v_d_3611_) == 9)
{
lean_object* v_value_3644_; lean_object* v_description_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; 
v_value_3644_ = lean_ctor_get(v_d_3611_, 0);
v_description_3645_ = lean_ctor_get(v_d_3611_, 1);
v___x_3646_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3647_ = lean_string_dec_eq(v_description_3645_, v___x_3646_);
if (v___x_3647_ == 0)
{
v___y_3640_ = v_a_3643_;
goto v___jp_3639_;
}
else
{
lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3664_; 
lean_inc(v_value_3644_);
v_isSharedCheck_3664_ = !lean_is_exclusive(v_d_3611_);
if (v_isSharedCheck_3664_ == 0)
{
lean_object* v_unused_3665_; lean_object* v_unused_3666_; 
v_unused_3665_ = lean_ctor_get(v_d_3611_, 1);
lean_dec(v_unused_3665_);
v_unused_3666_ = lean_ctor_get(v_d_3611_, 0);
lean_dec(v_unused_3666_);
v___x_3649_ = v_d_3611_;
v_isShared_3650_ = v_isSharedCheck_3664_;
goto v_resetjp_3648_;
}
else
{
lean_dec(v_d_3611_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3664_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
uint32_t v___x_3651_; uint64_t v___x_3652_; lean_object* v___x_3654_; 
v___x_3651_ = 206;
v___x_3652_ = 0ULL;
lean_inc(v_value_3644_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 1, v___x_3646_);
v___x_3654_ = v___x_3649_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_value_3644_);
lean_ctor_set(v_reuseFailAlloc_3663_, 1, v___x_3646_);
v___x_3654_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
uint32_t v___x_3655_; lean_object* v___x_3656_; 
v___x_3655_ = lasm_js_value_handle(v_value_3644_);
lean_dec(v_value_3644_);
v___x_3656_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3651_, v___x_3652_, v___x_3654_, v___x_3655_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; uint8_t v___x_3658_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
lean_inc(v_a_3657_);
lean_dec_ref_known(v___x_3656_, 1);
v___x_3658_ = lean_string_validate_utf8(v_a_3657_);
if (v___x_3658_ == 0)
{
lean_object* v___x_3659_; lean_object* v___x_3660_; 
lean_dec(v_a_3657_);
v___x_3659_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
v___x_3660_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3659_);
v___y_3620_ = v_a_3643_;
v_received_3621_ = v___x_3660_;
goto v___jp_3619_;
}
else
{
lean_object* v___x_3661_; 
v___x_3661_ = lean_string_from_utf8_unchecked(v_a_3657_);
v___y_3620_ = v_a_3643_;
v_received_3621_ = v___x_3661_;
goto v___jp_3619_;
}
}
else
{
lean_object* v___x_3662_; 
lean_dec_ref_known(v___x_3656_, 1);
v___x_3662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___y_3620_ = v_a_3643_;
v_received_3621_ = v___x_3662_;
goto v___jp_3619_;
}
}
}
}
}
else
{
v___y_3640_ = v_a_3643_;
goto v___jp_3639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3688_, lean_object* v_d_3689_, lean_object* v_a_3690_){
_start:
{
lean_object* v_res_3691_; 
v_res_3691_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3688_, v_d_3689_);
lean_dec_ref(v_context_3688_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3692_, lean_object* v_bytes_3693_){
_start:
{
lean_object* v___x_3695_; 
v___x_3695_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3693_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v_a_3696_; lean_object* v___x_3697_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
lean_inc(v_a_3696_);
lean_dec_ref_known(v___x_3695_, 1);
v___x_3697_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3692_, v_a_3696_);
return v___x_3697_;
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3705_; 
v_a_3698_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3700_ = v___x_3695_;
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3695_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3703_; 
if (v_isShared_3701_ == 0)
{
v___x_3703_ = v___x_3700_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3698_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3706_, lean_object* v_bytes_3707_, lean_object* v_a_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3706_, v_bytes_3707_);
lean_dec_ref(v_bytes_3707_);
lean_dec_ref(v_context_3706_);
return v_res_3709_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3710_; uint8_t v___x_3711_; uint64_t v___x_3712_; 
v___x_3710_ = 8ULL;
v___x_3711_ = 0;
v___x_3712_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3711_, v___x_3710_);
return v___x_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3713_, lean_object* v_name_3714_, lean_object* v_args_3715_){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; uint64_t v___x_3720_; lean_object* v___x_3721_; 
v___x_3717_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3718_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3718_, 0, v_o_3713_);
lean_ctor_set(v___x_3718_, 1, v___x_3717_);
lean_inc_ref(v_name_3714_);
v___x_3719_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3719_, 0, v_name_3714_);
v___x_3720_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3721_ = l_Lasm_JS_Value_invokeRaw(v___x_3718_, v___x_3719_, v_args_3715_, v___x_3720_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v_a_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
lean_inc(v_a_3722_);
lean_dec_ref_known(v___x_3721_, 1);
v___x_3723_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3724_ = lean_string_append(v___x_3723_, v_name_3714_);
lean_dec_ref(v_name_3714_);
v___x_3725_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3724_, v_a_3722_);
lean_dec(v_a_3722_);
lean_dec_ref(v___x_3724_);
return v___x_3725_;
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec_ref(v_name_3714_);
v_a_3726_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3721_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3721_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3734_, lean_object* v_name_3735_, lean_object* v_args_3736_, lean_object* v_a_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3734_, v_name_3735_, v_args_3736_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3740_, lean_object* v___f_3741_, lean_object* v_handler_3742_, lean_object* v_options_3743_, lean_object* v_a_3744_, lean_object* v_value_3745_, lean_object* v___x_3746_, lean_object* v___x_3747_, lean_object* v_a_3748_, lean_object* v___x_3749_, lean_object* v___x_3750_, lean_object* v_x_3751_){
_start:
{
uint8_t v___y_3754_; lean_object* v___y_3755_; lean_object* v_val_3756_; 
if (lean_obj_tag(v_x_3751_) == 0)
{
lean_object* v___x_3759_; 
lean_dec(v_a_3748_);
lean_dec_ref(v___x_3746_);
lean_dec(v_value_3745_);
lean_dec(v_a_3744_);
lean_dec_ref(v_options_3743_);
lean_dec_ref(v_handler_3742_);
lean_dec_ref(v___f_3741_);
lean_dec(v___x_3740_);
v___x_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3759_, 0, v_x_3751_);
return v___x_3759_;
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3817_; 
v_a_3760_ = lean_ctor_get(v_x_3751_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v_x_3751_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3762_ = v_x_3751_;
v_isShared_3763_ = v_isSharedCheck_3817_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v_x_3751_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3817_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3807_; lean_object* v___x_3814_; 
v___x_3814_ = l_Lasm_JS_Data_field(v_a_3760_, v___x_3750_);
if (lean_obj_tag(v___x_3814_) == 4)
{
lean_object* v_s_3815_; 
v_s_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc_ref(v_s_3815_);
lean_dec_ref_known(v___x_3814_, 1);
v___y_3807_ = v_s_3815_;
goto v___jp_3806_;
}
else
{
lean_object* v___x_3816_; 
lean_dec(v___x_3814_);
v___x_3816_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3807_ = v___x_3816_;
goto v___jp_3806_;
}
v___jp_3764_:
{
lean_object* v___f_3771_; lean_object* v___x_3772_; 
lean_inc(v_a_3760_);
lean_inc(v___x_3740_);
v___f_3771_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3771_, 0, v___x_3740_);
lean_closure_set(v___f_3771_, 1, v___y_3766_);
lean_closure_set(v___f_3771_, 2, v___y_3770_);
lean_closure_set(v___f_3771_, 3, v_options_3743_);
lean_closure_set(v___f_3771_, 4, v___y_3768_);
lean_closure_set(v___f_3771_, 5, v___y_3765_);
lean_closure_set(v___f_3771_, 6, v_a_3744_);
lean_closure_set(v___f_3771_, 7, v_value_3745_);
lean_closure_set(v___f_3771_, 8, v_a_3760_);
lean_closure_set(v___f_3771_, 9, v___x_3746_);
lean_closure_set(v___f_3771_, 10, v___y_3769_);
lean_closure_set(v___f_3771_, 11, v___y_3767_);
v___x_3772_ = l_Lasm_JS_Data_field(v_a_3760_, v___x_3747_);
lean_dec(v_a_3760_);
if (lean_obj_tag(v___x_3772_) == 9)
{
lean_object* v_value_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3796_; 
v_value_3773_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3796_ == 0)
{
lean_object* v_unused_3797_; 
v_unused_3797_ = lean_ctor_get(v___x_3772_, 1);
lean_dec(v_unused_3797_);
v___x_3775_ = v___x_3772_;
v_isShared_3776_ = v_isSharedCheck_3796_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_value_3773_);
lean_dec(v___x_3772_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3796_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___f_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3781_; 
v___f_3777_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3777_, 0, v___f_3771_);
v___x_3778_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3779_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 1, v___x_3779_);
v___x_3781_ = v___x_3775_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_value_3773_);
lean_ctor_set(v_reuseFailAlloc_3795_, 1, v___x_3779_);
v___x_3781_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; lean_object* v___x_3786_; 
v___x_3782_ = lean_unsigned_to_nat(1u);
v___x_3783_ = lean_mk_empty_array_with_capacity(v___x_3782_);
v___x_3784_ = lean_array_push(v___x_3783_, v___x_3781_);
v___x_3785_ = 0;
v___x_3786_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3748_, v___x_3778_, v___x_3784_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3789_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3786_, 1);
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 0, v_a_3787_);
v___x_3789_ = v___x_3762_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3787_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
v___y_3754_ = v___x_3785_;
v___y_3755_ = v___f_3777_;
v_val_3756_ = v___x_3789_;
goto v___jp_3753_;
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; 
v_a_3791_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3791_);
lean_dec_ref_known(v___x_3786_, 1);
if (v_isShared_3763_ == 0)
{
lean_ctor_set_tag(v___x_3762_, 0);
lean_ctor_set(v___x_3762_, 0, v_a_3791_);
v___x_3793_ = v___x_3762_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3791_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
v___y_3754_ = v___x_3785_;
v___y_3755_ = v___f_3777_;
v_val_3756_ = v___x_3793_;
goto v___jp_3753_;
}
}
}
}
}
else
{
lean_object* v___f_3798_; lean_object* v___x_3799_; uint8_t v___x_3800_; lean_object* v___x_3802_; 
lean_dec(v___x_3772_);
lean_dec(v_a_3748_);
v___f_3798_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3798_, 0, v___f_3771_);
v___x_3799_ = lean_mk_empty_array_with_capacity(v___x_3740_);
v___x_3800_ = 0;
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 0, v___x_3799_);
v___x_3802_ = v___x_3762_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3799_);
v___x_3802_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3802_);
v___x_3804_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3740_, v___x_3800_, v___x_3803_, v___f_3798_);
return v___x_3804_;
}
}
}
v___jp_3806_:
{
lean_object* v___f_3808_; lean_object* v___f_3809_; lean_object* v___f_3810_; lean_object* v___x_3811_; 
lean_inc_n(v___x_3740_, 2);
lean_inc_ref(v___y_3807_);
v___f_3808_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3808_, 0, v___y_3807_);
lean_closure_set(v___f_3808_, 1, v___x_3740_);
lean_closure_set(v___f_3808_, 2, v___f_3741_);
v___f_3809_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3809_, 0, v_handler_3742_);
lean_closure_set(v___f_3809_, 1, v___x_3740_);
lean_closure_set(v___f_3809_, 2, v___f_3808_);
v___f_3810_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3810_, 0, v___f_3809_);
v___x_3811_ = l_Lasm_JS_Data_field(v_a_3760_, v___x_3749_);
if (lean_obj_tag(v___x_3811_) == 4)
{
lean_object* v_s_3812_; 
v_s_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc_ref(v_s_3812_);
lean_dec_ref_known(v___x_3811_, 1);
lean_inc_ref_n(v___f_3810_, 3);
v___y_3765_ = v___f_3810_;
v___y_3766_ = v___y_3807_;
v___y_3767_ = v___f_3810_;
v___y_3768_ = v___f_3810_;
v___y_3769_ = v___f_3810_;
v___y_3770_ = v_s_3812_;
goto v___jp_3764_;
}
else
{
lean_object* v___x_3813_; 
lean_dec(v___x_3811_);
v___x_3813_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3810_, 3);
v___y_3765_ = v___f_3810_;
v___y_3766_ = v___y_3807_;
v___y_3767_ = v___f_3810_;
v___y_3768_ = v___f_3810_;
v___y_3769_ = v___f_3810_;
v___y_3770_ = v___x_3813_;
goto v___jp_3764_;
}
}
}
}
v___jp_3753_:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3757_, 0, v_val_3756_);
v___x_3758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3740_, v___y_3754_, v___x_3757_, v___y_3755_);
return v___x_3758_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3818_, lean_object* v___f_3819_, lean_object* v_handler_3820_, lean_object* v_options_3821_, lean_object* v_a_3822_, lean_object* v_value_3823_, lean_object* v___x_3824_, lean_object* v___x_3825_, lean_object* v_a_3826_, lean_object* v___x_3827_, lean_object* v___x_3828_, lean_object* v_x_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3818_, v___f_3819_, v_handler_3820_, v_options_3821_, v_a_3822_, v_value_3823_, v___x_3824_, v___x_3825_, v_a_3826_, v___x_3827_, v___x_3828_, v_x_3829_);
lean_dec_ref(v___x_3828_);
lean_dec_ref(v___x_3827_);
lean_dec_ref(v___x_3825_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3832_, size_t v_i_3833_, lean_object* v_bs_3834_){
_start:
{
uint8_t v___x_3835_; 
v___x_3835_ = lean_usize_dec_lt(v_i_3833_, v_sz_3832_);
if (v___x_3835_ == 0)
{
return v_bs_3834_;
}
else
{
lean_object* v_v_3836_; lean_object* v___x_3837_; lean_object* v_bs_x27_3838_; lean_object* v___x_3839_; size_t v___x_3840_; size_t v___x_3841_; lean_object* v___x_3842_; 
v_v_3836_ = lean_array_uget(v_bs_3834_, v_i_3833_);
v___x_3837_ = lean_unsigned_to_nat(0u);
v_bs_x27_3838_ = lean_array_uset(v_bs_3834_, v_i_3833_, v___x_3837_);
v___x_3839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3839_, 0, v_v_3836_);
v___x_3840_ = ((size_t)1ULL);
v___x_3841_ = lean_usize_add(v_i_3833_, v___x_3840_);
v___x_3842_ = lean_array_uset(v_bs_x27_3838_, v_i_3833_, v___x_3839_);
v_i_3833_ = v___x_3841_;
v_bs_3834_ = v___x_3842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3844_, lean_object* v_i_3845_, lean_object* v_bs_3846_){
_start:
{
size_t v_sz_boxed_3847_; size_t v_i_boxed_3848_; lean_object* v_res_3849_; 
v_sz_boxed_3847_ = lean_unbox_usize(v_sz_3844_);
lean_dec(v_sz_3844_);
v_i_boxed_3848_ = lean_unbox_usize(v_i_3845_);
lean_dec(v_i_3845_);
v_res_3849_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3847_, v_i_boxed_3848_, v_bs_3846_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3850_, lean_object* v_keys_3851_){
_start:
{
size_t v_sz_3853_; size_t v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; 
v_sz_3853_ = lean_array_size(v_keys_3851_);
v___x_3854_ = ((size_t)0ULL);
v___x_3855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3853_, v___x_3854_, v_keys_3851_);
v___x_3856_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
v___x_3857_ = l_Lasm_JS_Wire_encodeIO(v___x_3856_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v_a_3858_; uint32_t v___x_3859_; uint32_t v___x_3860_; uint64_t v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
lean_inc(v_a_3858_);
lean_dec_ref_known(v___x_3857_, 1);
v___x_3859_ = 203;
v___x_3860_ = lasm_js_value_handle(v_o_3850_);
v___x_3861_ = 2ULL;
v___x_3862_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3863_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3863_, 0, v_o_3850_);
lean_ctor_set(v___x_3863_, 1, v___x_3862_);
v___x_3864_ = lasm_js_call(v___x_3859_, v___x_3860_, v___x_3861_, v_a_3858_, v___x_3863_);
lean_dec_ref_known(v___x_3863_, 2);
lean_dec(v_a_3858_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3866_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3864_, 1);
v___x_3866_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3865_);
lean_dec(v_a_3865_);
return v___x_3866_;
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
v_a_3867_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3864_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3864_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
lean_dec(v_o_3850_);
v_a_3875_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3857_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3857_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3883_, lean_object* v_keys_3884_, lean_object* v_a_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3883_, v_keys_3884_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3907_, lean_object* v___f_3908_, lean_object* v_handler_3909_, lean_object* v_options_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_____r_3913_){
_start:
{
lean_object* v___x_3917_; lean_object* v___x_3918_; uint8_t v___x_3919_; 
v___x_3917_ = lean_unsigned_to_nat(0u);
v___x_3918_ = lean_array_get_size(v_args_3907_);
v___x_3919_ = lean_nat_dec_lt(v___x_3917_, v___x_3918_);
if (v___x_3919_ == 0)
{
lean_dec(v_a_3912_);
lean_dec(v_a_3911_);
lean_dec_ref(v_options_3910_);
lean_dec_ref(v_handler_3909_);
lean_dec_ref(v___f_3908_);
goto v___jp_3915_;
}
else
{
lean_object* v___x_3920_; 
v___x_3920_ = lean_array_fget_borrowed(v_args_3907_, v___x_3917_);
if (lean_obj_tag(v___x_3920_) == 9)
{
lean_object* v_value_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___f_3926_; lean_object* v___x_3927_; uint8_t v___x_3928_; lean_object* v_val_3930_; lean_object* v___x_3933_; 
v_value_3921_ = lean_ctor_get(v___x_3920_, 0);
v___x_3922_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3923_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3924_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3925_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3921_, 2);
v___f_3926_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3926_, 0, v___x_3917_);
lean_closure_set(v___f_3926_, 1, v___f_3908_);
lean_closure_set(v___f_3926_, 2, v_handler_3909_);
lean_closure_set(v___f_3926_, 3, v_options_3910_);
lean_closure_set(v___f_3926_, 4, v_a_3911_);
lean_closure_set(v___f_3926_, 5, v_value_3921_);
lean_closure_set(v___f_3926_, 6, v___x_3925_);
lean_closure_set(v___f_3926_, 7, v___x_3924_);
lean_closure_set(v___f_3926_, 8, v_a_3912_);
lean_closure_set(v___f_3926_, 9, v___x_3923_);
lean_closure_set(v___f_3926_, 10, v___x_3922_);
v___x_3927_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3928_ = 0;
v___x_3933_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3921_, v___x_3927_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_object* v_a_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3941_; 
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3936_ = v___x_3933_;
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_a_3934_);
lean_dec(v___x_3933_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3939_; 
if (v_isShared_3937_ == 0)
{
lean_ctor_set_tag(v___x_3936_, 1);
v___x_3939_ = v___x_3936_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3934_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
v_val_3930_ = v___x_3939_;
goto v___jp_3929_;
}
}
}
else
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
v_a_3942_ = lean_ctor_get(v___x_3933_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3933_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3933_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
lean_ctor_set_tag(v___x_3944_, 0);
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
v_val_3930_ = v___x_3947_;
goto v___jp_3929_;
}
}
}
v___jp_3929_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3931_, 0, v_val_3930_);
v___x_3932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3917_, v___x_3928_, v___x_3931_, v___f_3926_);
return v___x_3932_;
}
}
else
{
lean_dec(v_a_3912_);
lean_dec(v_a_3911_);
lean_dec_ref(v_options_3910_);
lean_dec_ref(v_handler_3909_);
lean_dec_ref(v___f_3908_);
goto v___jp_3915_;
}
}
v___jp_3915_:
{
lean_object* v___x_3916_; 
v___x_3916_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3950_, lean_object* v___f_3951_, lean_object* v_handler_3952_, lean_object* v_options_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_, lean_object* v_____r_3956_, lean_object* v___y_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3950_, v___f_3951_, v_handler_3952_, v_options_3953_, v_a_3954_, v_a_3955_, v_____r_3956_);
lean_dec_ref(v_args_3950_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3959_, lean_object* v_x_3960_){
_start:
{
if (lean_obj_tag(v_x_3960_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3970_; 
lean_dec_ref(v___f_3959_);
v_a_3962_ = lean_ctor_get(v_x_3960_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_x_3960_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3964_ = v_x_3960_;
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v_x_3960_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3968_; 
v___x_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
return v___x_3968_;
}
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v_x_3960_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v_x_3960_, 1);
v___x_3972_ = lean_apply_2(v___f_3959_, v_a_3971_, lean_box(0));
return v___x_3972_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3973_, lean_object* v_x_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3973_, v_x_3974_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3977_, lean_object* v_handler_3978_, lean_object* v_options_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_args_3982_){
_start:
{
lean_object* v___f_3984_; lean_object* v___x_3988_; lean_object* v___x_3989_; uint8_t v___x_3990_; 
lean_inc(v_a_3981_);
lean_inc(v_a_3980_);
lean_inc_ref(v_options_3979_);
lean_inc_ref(v_handler_3978_);
lean_inc_ref(v___f_3977_);
lean_inc_ref(v_args_3982_);
v___f_3984_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3984_, 0, v_args_3982_);
lean_closure_set(v___f_3984_, 1, v___f_3977_);
lean_closure_set(v___f_3984_, 2, v_handler_3978_);
lean_closure_set(v___f_3984_, 3, v_options_3979_);
lean_closure_set(v___f_3984_, 4, v_a_3980_);
lean_closure_set(v___f_3984_, 5, v_a_3981_);
v___x_3988_ = lean_unsigned_to_nat(1u);
v___x_3989_ = lean_array_get_size(v_args_3982_);
v___x_3990_ = lean_nat_dec_lt(v___x_3988_, v___x_3989_);
if (v___x_3990_ == 0)
{
lean_dec_ref(v___f_3984_);
goto v___jp_3985_;
}
else
{
lean_object* v___x_3991_; 
v___x_3991_ = lean_array_fget_borrowed(v_args_3982_, v___x_3988_);
switch(lean_obj_tag(v___x_3991_))
{
case 9:
{
lean_object* v___f_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; uint8_t v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
lean_inc_ref(v___x_3991_);
lean_dec_ref(v_args_3982_);
lean_dec(v_a_3981_);
lean_dec(v_a_3980_);
lean_dec_ref(v_options_3979_);
lean_dec_ref(v_handler_3978_);
lean_dec_ref(v___f_3977_);
v___f_3992_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3992_, 0, v___f_3984_);
v___x_3993_ = l_Lasm_Fetch_platformEnv;
v___x_3994_ = lean_unsigned_to_nat(0u);
v___x_3995_ = 0;
v___x_3996_ = lean_st_ref_swap(v___x_3993_, v___x_3991_);
lean_dec(v___x_3996_);
v___x_3997_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3998_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3994_, v___x_3995_, v___x_3997_, v___f_3992_);
return v___x_3998_;
}
case 8:
{
lean_object* v___f_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; uint8_t v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
lean_inc_ref(v___x_3991_);
lean_dec_ref(v_args_3982_);
lean_dec(v_a_3981_);
lean_dec(v_a_3980_);
lean_dec_ref(v_options_3979_);
lean_dec_ref(v_handler_3978_);
lean_dec_ref(v___f_3977_);
v___f_3999_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3999_, 0, v___f_3984_);
v___x_4000_ = l_Lasm_Fetch_platformEnv;
v___x_4001_ = lean_unsigned_to_nat(0u);
v___x_4002_ = 0;
v___x_4003_ = lean_st_ref_swap(v___x_4000_, v___x_3991_);
lean_dec(v___x_4003_);
v___x_4004_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_4005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4001_, v___x_4002_, v___x_4004_, v___f_3999_);
return v___x_4005_;
}
default: 
{
lean_dec_ref(v___f_3984_);
goto v___jp_3985_;
}
}
}
v___jp_3985_:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3986_ = lean_box(0);
v___x_3987_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3982_, v___f_3977_, v_handler_3978_, v_options_3979_, v_a_3980_, v_a_3981_, v___x_3986_);
lean_dec_ref(v_args_3982_);
return v___x_3987_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_4006_, lean_object* v_handler_4007_, lean_object* v_options_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_args_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_4006_, v_handler_4007_, v_options_4008_, v_a_4009_, v_a_4010_, v_args_4011_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_4017_, lean_object* v_options_4018_){
_start:
{
lean_object* v___f_4020_; lean_object* v___x_4021_; 
v___f_4020_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_4021_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc_n(v_a_4022_, 2);
lean_dec_ref_known(v___x_4021_, 1);
v___x_4023_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_4024_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4022_, v___x_4023_);
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v___x_4024_, 1);
v___x_4026_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_4027_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4022_, v___x_4026_);
if (lean_obj_tag(v___x_4027_) == 0)
{
lean_object* v_a_4028_; lean_object* v___f_4029_; lean_object* v___x_4030_; 
v_a_4028_ = lean_ctor_get(v___x_4027_, 0);
lean_inc(v_a_4028_);
lean_dec_ref_known(v___x_4027_, 1);
v___f_4029_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_4029_, 0, v___f_4020_);
lean_closure_set(v___f_4029_, 1, v_handler_4017_);
lean_closure_set(v___f_4029_, 2, v_options_4018_);
lean_closure_set(v___f_4029_, 3, v_a_4025_);
lean_closure_set(v___f_4029_, 4, v_a_4028_);
v___x_4030_ = l_Lasm_JS_Function_ofFn(v___f_4029_);
return v___x_4030_;
}
else
{
lean_dec(v_a_4025_);
lean_dec_ref(v_options_4018_);
lean_dec_ref(v_handler_4017_);
return v___x_4027_;
}
}
else
{
lean_dec(v_a_4022_);
lean_dec_ref(v_options_4018_);
lean_dec_ref(v_handler_4017_);
return v___x_4024_;
}
}
else
{
lean_dec_ref(v_options_4018_);
lean_dec_ref(v_handler_4017_);
return v___x_4021_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_4031_, lean_object* v_options_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lasm_Fetch_jsFetchHandler(v_handler_4031_, v_options_4032_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_4035_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4035_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_4038_, lean_object* v_a_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_4038_);
lean_dec_ref(v_bytes_4038_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_4041_, lean_object* v_bytes_4042_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4042_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_4045_, lean_object* v_bytes_4046_, lean_object* v_a_4047_){
_start:
{
lean_object* v_res_4048_; 
v_res_4048_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_4045_, v_bytes_4046_);
lean_dec_ref(v_bytes_4046_);
lean_dec_ref(v_context_4045_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(lean_object* v___x_4049_, lean_object* v_s_4050_, lean_object* v_pos_4051_){
_start:
{
lean_object* v_str_4052_; lean_object* v_startInclusive_4053_; lean_object* v_endExclusive_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4065_; uint8_t v_decide_4066_; 
v_str_4052_ = lean_ctor_get(v_s_4050_, 0);
v_startInclusive_4053_ = lean_ctor_get(v_s_4050_, 1);
v_endExclusive_4054_ = lean_ctor_get(v_s_4050_, 2);
v___x_4055_ = lean_unsigned_to_nat(0u);
v___x_4056_ = lean_nat_add(v_startInclusive_4053_, v_pos_4051_);
v___x_4065_ = lean_nat_sub(v_endExclusive_4054_, v___x_4056_);
v_decide_4066_ = lean_nat_dec_eq(v___x_4055_, v___x_4065_);
lean_dec(v___x_4065_);
if (v_decide_4066_ == 0)
{
uint8_t v___x_4067_; uint32_t v___x_4069_; uint32_t v___x_4070_; uint8_t v___x_4071_; 
v___x_4067_ = lean_nat_dec_eq(v___x_4049_, v___x_4055_);
v___x_4069_ = lean_string_utf8_get_fast(v_str_4052_, v___x_4056_);
v___x_4070_ = 47;
v___x_4071_ = lean_uint32_dec_eq(v___x_4069_, v___x_4070_);
if (v___x_4071_ == 0)
{
uint32_t v___x_4072_; uint8_t v___x_4073_; 
v___x_4072_ = 63;
v___x_4073_ = lean_uint32_dec_eq(v___x_4069_, v___x_4072_);
if (v___x_4073_ == 0)
{
uint32_t v___x_4074_; uint8_t v___x_4075_; 
v___x_4074_ = 35;
v___x_4075_ = lean_uint32_dec_eq(v___x_4069_, v___x_4074_);
if (v___x_4075_ == 0)
{
uint32_t v___x_4076_; uint8_t v___x_4077_; 
v___x_4076_ = 92;
v___x_4077_ = lean_uint32_dec_eq(v___x_4069_, v___x_4076_);
if (v___x_4077_ == 0)
{
uint32_t v___x_4078_; uint8_t v___x_4079_; 
v___x_4078_ = 64;
v___x_4079_ = lean_uint32_dec_eq(v___x_4069_, v___x_4078_);
if (v___x_4079_ == 0)
{
uint32_t v___x_4080_; uint8_t v___x_4081_; 
v___x_4080_ = 32;
v___x_4081_ = lean_uint32_dec_eq(v___x_4069_, v___x_4080_);
if (v___x_4081_ == 0)
{
uint32_t v___x_4082_; uint8_t v___x_4083_; 
v___x_4082_ = 9;
v___x_4083_ = lean_uint32_dec_eq(v___x_4069_, v___x_4082_);
if (v___x_4083_ == 0)
{
uint32_t v___x_4084_; uint8_t v___x_4085_; 
v___x_4084_ = 13;
v___x_4085_ = lean_uint32_dec_eq(v___x_4069_, v___x_4084_);
if (v___x_4085_ == 0)
{
uint32_t v___x_4086_; uint8_t v___x_4087_; 
v___x_4086_ = 10;
v___x_4087_ = lean_uint32_dec_eq(v___x_4069_, v___x_4086_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4089_; uint8_t v___x_4090_; 
v___x_4088_ = lean_unsigned_to_nat(32u);
v___x_4089_ = lean_uint32_to_nat(v___x_4069_);
v___x_4090_ = lean_nat_dec_lt(v___x_4089_, v___x_4088_);
if (v___x_4090_ == 0)
{
lean_object* v___x_4091_; uint8_t v___x_4092_; 
v___x_4091_ = lean_unsigned_to_nat(127u);
v___x_4092_ = lean_nat_dec_eq(v___x_4089_, v___x_4091_);
lean_dec(v___x_4089_);
if (v___x_4092_ == 0)
{
goto v___jp_4057_;
}
else
{
lean_dec(v___x_4056_);
return v_pos_4051_;
}
}
else
{
lean_dec(v___x_4089_);
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
}
else
{
goto v___jp_4068_;
}
v___jp_4068_:
{
if (v___x_4067_ == 0)
{
lean_dec(v___x_4056_);
return v_pos_4051_;
}
else
{
goto v___jp_4057_;
}
}
}
else
{
lean_dec(v___x_4056_);
return v_pos_4051_;
}
v___jp_4057_:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; 
v___x_4058_ = lean_string_utf8_next_fast(v_str_4052_, v___x_4056_);
v___x_4059_ = lean_nat_sub(v___x_4058_, v___x_4056_);
lean_dec(v___x_4056_);
v___x_4060_ = lean_nat_add(v_pos_4051_, v___x_4059_);
lean_dec(v___x_4059_);
v___x_4061_ = lean_unsigned_to_nat(1u);
v___x_4062_ = lean_nat_add(v_pos_4051_, v___x_4061_);
v___x_4063_ = lean_nat_dec_le(v___x_4062_, v___x_4060_);
lean_dec(v___x_4062_);
if (v___x_4063_ == 0)
{
lean_dec(v___x_4060_);
return v_pos_4051_;
}
else
{
lean_dec(v_pos_4051_);
v_pos_4051_ = v___x_4060_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0___boxed(lean_object* v___x_4093_, lean_object* v_s_4094_, lean_object* v_pos_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4093_, v_s_4094_, v_pos_4095_);
lean_dec_ref(v_s_4094_);
lean_dec(v___x_4093_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl(lean_object* v_target_4099_, lean_object* v_host_4100_, lean_object* v_port_4101_){
_start:
{
lean_object* v___y_4103_; 
if (lean_obj_tag(v_host_4100_) == 0)
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4117_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__1));
v___x_4118_ = l_Nat_reprFast(v_port_4101_);
v___x_4119_ = lean_string_append(v___x_4117_, v___x_4118_);
lean_dec_ref(v___x_4118_);
v___y_4103_ = v___x_4119_;
goto v___jp_4102_;
}
else
{
lean_object* v_val_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; uint8_t v___x_4123_; 
v_val_4120_ = lean_ctor_get(v_host_4100_, 0);
lean_inc(v_val_4120_);
lean_dec_ref_known(v_host_4100_, 1);
v___x_4121_ = lean_string_utf8_byte_size(v_val_4120_);
v___x_4122_ = lean_unsigned_to_nat(0u);
v___x_4123_ = lean_nat_dec_eq(v___x_4121_, v___x_4122_);
if (v___x_4123_ == 0)
{
lean_object* v___x_4124_; lean_object* v___x_4125_; uint8_t v_decide_4126_; 
lean_inc(v_val_4120_);
v___x_4124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4124_, 0, v_val_4120_);
lean_ctor_set(v___x_4124_, 1, v___x_4122_);
lean_ctor_set(v___x_4124_, 2, v___x_4121_);
v___x_4125_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_nodeRequestUrl_spec__0(v___x_4121_, v___x_4124_, v___x_4122_);
lean_dec_ref_known(v___x_4124_, 3);
v_decide_4126_ = lean_nat_dec_eq(v___x_4125_, v___x_4121_);
lean_dec(v___x_4125_);
if (v_decide_4126_ == 0)
{
lean_dec(v_val_4120_);
goto v___jp_4113_;
}
else
{
lean_dec(v_port_4101_);
v___y_4103_ = v_val_4120_;
goto v___jp_4102_;
}
}
else
{
lean_dec(v_val_4120_);
goto v___jp_4113_;
}
}
v___jp_4102_:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; uint8_t v___x_4106_; 
v___x_4104_ = lean_string_utf8_byte_size(v_target_4099_);
v___x_4105_ = lean_unsigned_to_nat(1u);
v___x_4106_ = lean_nat_dec_le(v___x_4105_, v___x_4104_);
if (v___x_4106_ == 0)
{
lean_dec_ref(v___y_4103_);
lean_inc_ref(v_target_4099_);
return v_target_4099_;
}
else
{
lean_object* v___x_4107_; lean_object* v___x_4108_; uint8_t v___x_4109_; 
v___x_4107_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4108_ = lean_unsigned_to_nat(0u);
v___x_4109_ = lean_string_memcmp(v_target_4099_, v___x_4107_, v___x_4108_, v___x_4108_, v___x_4105_);
if (v___x_4109_ == 0)
{
lean_dec_ref(v___y_4103_);
lean_inc_ref(v_target_4099_);
return v_target_4099_;
}
else
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4110_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__0));
v___x_4111_ = lean_string_append(v___x_4110_, v___y_4103_);
lean_dec_ref(v___y_4103_);
v___x_4112_ = lean_string_append(v___x_4111_, v_target_4099_);
return v___x_4112_;
}
}
}
v___jp_4113_:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v___x_4114_ = ((lean_object*)(l_Lasm_Fetch_nodeRequestUrl___closed__1));
v___x_4115_ = l_Nat_reprFast(v_port_4101_);
v___x_4116_ = lean_string_append(v___x_4114_, v___x_4115_);
lean_dec_ref(v___x_4115_);
v___y_4103_ = v___x_4116_;
goto v___jp_4102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_nodeRequestUrl___boxed(lean_object* v_target_4127_, lean_object* v_host_4128_, lean_object* v_port_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_Lasm_Fetch_nodeRequestUrl(v_target_4127_, v_host_4128_, v_port_4129_);
lean_dec_ref(v_target_4127_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v_x_4131_){
_start:
{
if (lean_obj_tag(v_x_4131_) == 0)
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4141_; 
v_a_4133_ = lean_ctor_get(v_x_4131_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_x_4131_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4135_ = v_x_4131_;
v_isShared_4136_ = v_isSharedCheck_4141_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v_x_4131_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4141_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
lean_object* v___x_4139_; 
v___x_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4138_);
return v___x_4139_;
}
}
}
else
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4151_; 
v_a_4142_ = lean_ctor_get(v_x_4131_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v_x_4131_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4144_ = v_x_4131_;
v_isShared_4145_ = v_isSharedCheck_4151_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v_x_4131_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4151_;
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
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4147_);
v___x_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4148_);
return v___x_4149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v_x_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lasm_Fetch_serveNode___lam__1(v_x_4152_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_4159_){
_start:
{
if (lean_obj_tag(v_x_4159_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4169_; 
v_a_4161_ = lean_ctor_get(v_x_4159_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_x_4159_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4163_ = v_x_4159_;
v_isShared_4164_ = v_isSharedCheck_4169_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v_x_4159_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4169_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
lean_object* v___x_4167_; 
v___x_4167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4166_);
return v___x_4167_;
}
}
}
else
{
lean_object* v___x_4170_; 
lean_dec_ref_known(v_x_4159_, 1);
v___x_4170_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4170_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l_Lasm_Fetch_serveNode___lam__0(v_x_4171_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v___f_4174_, lean_object* v_x_4175_){
_start:
{
if (lean_obj_tag(v_x_4175_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4185_; 
lean_dec_ref(v___f_4174_);
v_a_4177_ = lean_ctor_get(v_x_4175_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v_x_4175_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4179_ = v_x_4175_;
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v_x_4175_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4177_);
v___x_4182_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
lean_object* v___x_4183_; 
v___x_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
return v___x_4183_;
}
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4206_; 
v_a_4186_ = lean_ctor_get(v_x_4175_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v_x_4175_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4188_ = v_x_4175_;
v_isShared_4189_ = v_isSharedCheck_4206_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v_x_4175_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4206_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v_flush_4190_; lean_object* v___x_4191_; uint8_t v___x_4192_; lean_object* v_val_4194_; lean_object* v___x_4197_; 
v_flush_4190_ = lean_ctor_get(v_a_4186_, 0);
lean_inc_ref(v_flush_4190_);
lean_dec(v_a_4186_);
v___x_4191_ = lean_unsigned_to_nat(0u);
v___x_4192_ = 0;
v___x_4197_ = lean_apply_1(v_flush_4190_, lean_box(0));
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4200_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4198_);
lean_dec_ref_known(v___x_4197_, 1);
if (v_isShared_4189_ == 0)
{
lean_ctor_set(v___x_4188_, 0, v_a_4198_);
v___x_4200_ = v___x_4188_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4198_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
v_val_4194_ = v___x_4200_;
goto v___jp_4193_;
}
}
else
{
lean_object* v_a_4202_; lean_object* v___x_4204_; 
v_a_4202_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4202_);
lean_dec_ref_known(v___x_4197_, 1);
if (v_isShared_4189_ == 0)
{
lean_ctor_set_tag(v___x_4188_, 0);
lean_ctor_set(v___x_4188_, 0, v_a_4202_);
v___x_4204_ = v___x_4188_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4202_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
v_val_4194_ = v___x_4204_;
goto v___jp_4193_;
}
}
v___jp_4193_:
{
lean_object* v___x_4195_; lean_object* v___x_4196_; 
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v_val_4194_);
v___x_4196_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4191_, v___x_4192_, v___x_4195_, v___f_4174_);
return v___x_4196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v___f_4207_, lean_object* v_x_4208_, lean_object* v___y_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lasm_Fetch_serveNode___lam__2(v___f_4207_, v_x_4208_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_4211_, lean_object* v_x_4212_){
_start:
{
if (lean_obj_tag(v_x_4212_) == 0)
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4222_; 
lean_dec_ref(v___f_4211_);
v_a_4214_ = lean_ctor_get(v_x_4212_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v_x_4212_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4216_ = v_x_4212_;
v_isShared_4217_ = v_isSharedCheck_4222_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v_x_4212_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4222_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
lean_object* v___x_4220_; 
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4219_);
return v___x_4220_;
}
}
}
else
{
lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4234_; 
v_isSharedCheck_4234_ = !lean_is_exclusive(v_x_4212_);
if (v_isSharedCheck_4234_ == 0)
{
lean_object* v_unused_4235_; 
v_unused_4235_ = lean_ctor_get(v_x_4212_, 0);
lean_dec(v_unused_4235_);
v___x_4224_ = v_x_4212_;
v_isShared_4225_ = v_isSharedCheck_4234_;
goto v_resetjp_4223_;
}
else
{
lean_dec(v_x_4212_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4234_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4226_; uint8_t v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v___x_4226_ = lean_unsigned_to_nat(0u);
v___x_4227_ = 0;
v___x_4228_ = lean_get_stdout();
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 0, v___x_4228_);
v___x_4230_ = v___x_4224_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4230_);
v___x_4232_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4226_, v___x_4227_, v___x_4231_, v___f_4211_);
return v___x_4232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_4236_, lean_object* v_x_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v_res_4239_; 
v_res_4239_ = l_Lasm_Fetch_serveNode___lam__3(v___f_4236_, v_x_4237_);
return v_res_4239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_4240_){
_start:
{
if (lean_obj_tag(v_x_4240_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4250_; 
v_a_4242_ = lean_ctor_get(v_x_4240_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v_x_4240_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4244_ = v_x_4240_;
v_isShared_4245_ = v_isSharedCheck_4250_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v_x_4240_);
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
lean_object* v___x_4251_; 
lean_dec_ref_known(v_x_4240_, 1);
v___x_4251_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__0___closed__1));
return v___x_4251_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lasm_Fetch_serveNode___lam__4(v_x_4252_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4256_, lean_object* v___x_4257_, lean_object* v_____r_4258_){
_start:
{
lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
v___x_4260_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4261_, 0, v_snd_4256_);
lean_ctor_set(v___x_4261_, 1, v___x_4260_);
lean_ctor_set(v___x_4261_, 2, v___x_4257_);
v___x_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4261_);
v___x_4263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4262_);
return v___x_4263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4264_, lean_object* v___x_4265_, lean_object* v_____r_4266_, lean_object* v___y_4267_){
_start:
{
lean_object* v_res_4268_; 
v_res_4268_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4264_, v___x_4265_, v_____r_4266_);
return v_res_4268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_4269_, lean_object* v_x_4270_){
_start:
{
if (lean_obj_tag(v_x_4270_) == 0)
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4280_; 
lean_dec_ref(v___f_4269_);
v_a_4272_ = lean_ctor_get(v_x_4270_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v_x_4270_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4274_ = v_x_4270_;
v_isShared_4275_ = v_isSharedCheck_4280_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v_x_4270_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4280_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
lean_object* v___x_4278_; 
v___x_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
return v___x_4278_;
}
}
}
else
{
lean_object* v_a_4281_; 
v_a_4281_ = lean_ctor_get(v_x_4270_, 0);
lean_inc(v_a_4281_);
lean_dec_ref_known(v_x_4270_, 1);
if (lean_obj_tag(v_a_4281_) == 0)
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4290_; 
lean_dec_ref(v___f_4269_);
v_a_4282_ = lean_ctor_get(v_a_4281_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v_a_4281_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4284_ = v_a_4281_;
v_isShared_4285_ = v_isSharedCheck_4290_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v_a_4281_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4290_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4287_; 
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 1);
v___x_4287_ = v___x_4284_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4282_);
v___x_4287_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
lean_object* v___x_4288_; 
v___x_4288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4287_);
return v___x_4288_;
}
}
}
else
{
lean_object* v_a_4291_; lean_object* v___x_4292_; 
v_a_4291_ = lean_ctor_get(v_a_4281_, 0);
lean_inc(v_a_4291_);
lean_dec_ref_known(v_a_4281_, 1);
v___x_4292_ = lean_apply_2(v___f_4269_, v_a_4291_, lean_box(0));
return v___x_4292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4293_, lean_object* v_x_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4293_, v_x_4294_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_4298_, lean_object* v___x_4299_, lean_object* v_x_4300_){
_start:
{
if (lean_obj_tag(v_x_4300_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4310_; 
lean_dec_ref(v___x_4299_);
lean_dec(v_snd_4298_);
v_a_4302_ = lean_ctor_get(v_x_4300_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v_x_4300_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4304_ = v_x_4300_;
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v_x_4300_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_a_4302_);
v___x_4307_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
lean_object* v___x_4308_; 
v___x_4308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4307_);
return v___x_4308_;
}
}
}
else
{
lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4321_; 
v_isSharedCheck_4321_ = !lean_is_exclusive(v_x_4300_);
if (v_isSharedCheck_4321_ == 0)
{
lean_object* v_unused_4322_; 
v_unused_4322_ = lean_ctor_get(v_x_4300_, 0);
lean_dec(v_unused_4322_);
v___x_4312_ = v_x_4300_;
v_isShared_4313_ = v_isSharedCheck_4321_;
goto v_resetjp_4311_;
}
else
{
lean_dec(v_x_4300_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4321_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4317_; 
v___x_4314_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4315_, 0, v_snd_4298_);
lean_ctor_set(v___x_4315_, 1, v___x_4314_);
lean_ctor_set(v___x_4315_, 2, v___x_4299_);
if (v_isShared_4313_ == 0)
{
lean_ctor_set_tag(v___x_4312_, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4315_);
v___x_4317_ = v___x_4312_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4315_);
v___x_4317_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4318_, 0, v___x_4317_);
v___x_4319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4318_);
return v___x_4319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_4323_, lean_object* v___x_4324_, lean_object* v_x_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_4323_, v___x_4324_, v_x_4325_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4328_, lean_object* v_name_4329_, lean_object* v_args_4330_){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; uint64_t v___x_4335_; lean_object* v___x_4336_; 
v___x_4332_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4333_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4333_, 0, v_o_4328_);
lean_ctor_set(v___x_4333_, 1, v___x_4332_);
v___x_4334_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4334_, 0, v_name_4329_);
v___x_4335_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4336_ = l_Lasm_JS_Value_invokeRaw(v___x_4333_, v___x_4334_, v_args_4330_, v___x_4335_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4338_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
lean_inc(v_a_4337_);
lean_dec_ref_known(v___x_4336_, 1);
v___x_4338_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4337_);
lean_dec(v_a_4337_);
return v___x_4338_;
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
v_a_4339_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4336_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4336_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4346_;
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
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4347_, lean_object* v_name_4348_, lean_object* v_args_4349_, lean_object* v_a_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4347_, v_name_4348_, v_args_4349_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4352_, uint8_t v___x_4353_, lean_object* v___f_4354_, lean_object* v_snd_4355_, lean_object* v_chunk_4356_){
_start:
{
lean_object* v_val_4359_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4362_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4363_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4363_, 0, v_chunk_4356_);
v___x_4364_ = lean_unsigned_to_nat(1u);
v___x_4365_ = lean_mk_empty_array_with_capacity(v___x_4364_);
v___x_4366_ = lean_array_push(v___x_4365_, v___x_4363_);
v___x_4367_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4355_, v___x_4362_, v___x_4366_);
if (lean_obj_tag(v___x_4367_) == 0)
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4375_; 
v_a_4368_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4375_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4370_ = v___x_4367_;
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___x_4367_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4373_; 
if (v_isShared_4371_ == 0)
{
lean_ctor_set_tag(v___x_4370_, 1);
v___x_4373_ = v___x_4370_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_a_4368_);
v___x_4373_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
v_val_4359_ = v___x_4373_;
goto v___jp_4358_;
}
}
}
else
{
lean_object* v_a_4376_; lean_object* v___x_4378_; uint8_t v_isShared_4379_; uint8_t v_isSharedCheck_4383_; 
v_a_4376_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4383_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4378_ = v___x_4367_;
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
else
{
lean_inc(v_a_4376_);
lean_dec(v___x_4367_);
v___x_4378_ = lean_box(0);
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
v_resetjp_4377_:
{
lean_object* v___x_4381_; 
if (v_isShared_4379_ == 0)
{
lean_ctor_set_tag(v___x_4378_, 0);
v___x_4381_ = v___x_4378_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_a_4376_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
v_val_4359_ = v___x_4381_;
goto v___jp_4358_;
}
}
}
v___jp_4358_:
{
lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v_val_4359_);
v___x_4361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4352_, v___x_4353_, v___x_4360_, v___f_4354_);
return v___x_4361_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4384_, lean_object* v___x_4385_, lean_object* v___f_4386_, lean_object* v_snd_4387_, lean_object* v_chunk_4388_, lean_object* v___y_4389_){
_start:
{
uint8_t v___x_18297__boxed_4390_; lean_object* v_res_4391_; 
v___x_18297__boxed_4390_ = lean_unbox(v___x_4385_);
v_res_4391_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4384_, v___x_18297__boxed_4390_, v___f_4386_, v_snd_4387_, v_chunk_4388_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4392_, uint8_t v___x_4393_, lean_object* v___f_4394_, lean_object* v_x_4395_){
_start:
{
lean_object* v_val_4398_; 
if (lean_obj_tag(v_x_4395_) == 0)
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4417_; 
v_a_4401_ = lean_ctor_get(v_x_4395_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v_x_4395_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4403_ = v_x_4395_;
v_isShared_4404_ = v_isSharedCheck_4417_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v_x_4395_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4417_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4405_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4406_ = lean_io_error_to_string(v_a_4401_);
v___x_4407_ = lean_string_append(v___x_4405_, v___x_4406_);
lean_dec_ref(v___x_4406_);
v___x_4408_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4407_);
if (lean_obj_tag(v___x_4408_) == 0)
{
lean_object* v_a_4409_; lean_object* v___x_4411_; 
v_a_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4409_);
lean_dec_ref_known(v___x_4408_, 1);
if (v_isShared_4404_ == 0)
{
lean_ctor_set_tag(v___x_4403_, 1);
lean_ctor_set(v___x_4403_, 0, v_a_4409_);
v___x_4411_ = v___x_4403_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4409_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
v_val_4398_ = v___x_4411_;
goto v___jp_4397_;
}
}
else
{
lean_object* v_a_4413_; lean_object* v___x_4415_; 
v_a_4413_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4408_, 1);
if (v_isShared_4404_ == 0)
{
lean_ctor_set(v___x_4403_, 0, v_a_4413_);
v___x_4415_ = v___x_4403_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4413_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
v_val_4398_ = v___x_4415_;
goto v___jp_4397_;
}
}
}
}
else
{
lean_object* v___x_4418_; 
lean_dec_ref(v___f_4394_);
lean_dec(v___x_4392_);
v___x_4418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4418_, 0, v_x_4395_);
return v___x_4418_;
}
v___jp_4397_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4399_, 0, v_val_4398_);
v___x_4400_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4392_, v___x_4393_, v___x_4399_, v___f_4394_);
return v___x_4400_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4419_, lean_object* v___x_4420_, lean_object* v___f_4421_, lean_object* v_x_4422_, lean_object* v___y_4423_){
_start:
{
uint8_t v___x_18365__boxed_4424_; lean_object* v_res_4425_; 
v___x_18365__boxed_4424_ = lean_unbox(v___x_4420_);
v_res_4425_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4419_, v___x_18365__boxed_4424_, v___f_4421_, v_x_4422_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4426_, lean_object* v_snd_4427_, lean_object* v___y_4428_, uint16_t v_status_4429_, lean_object* v_body_4430_, lean_object* v___x_4431_, lean_object* v___f_4432_, lean_object* v___f_4433_, lean_object* v___f_4434_, lean_object* v___f_4435_, lean_object* v___f_4436_, lean_object* v_x_4437_){
_start:
{
if (lean_obj_tag(v_x_4437_) == 0)
{
lean_object* v_a_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4447_; 
lean_dec_ref(v___f_4436_);
lean_dec_ref(v___f_4435_);
lean_dec_ref(v___f_4434_);
lean_dec_ref(v___f_4433_);
lean_dec_ref(v___f_4432_);
lean_dec(v___x_4431_);
lean_dec_ref(v_body_4430_);
lean_dec(v_snd_4427_);
lean_dec(v_stream_4426_);
v_a_4439_ = lean_ctor_get(v_x_4437_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v_x_4437_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4441_ = v_x_4437_;
v_isShared_4442_ = v_isSharedCheck_4447_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_a_4439_);
lean_dec(v_x_4437_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4447_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
if (v_isShared_4442_ == 0)
{
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v_a_4439_);
v___x_4444_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
lean_object* v___x_4445_; 
v___x_4445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
return v___x_4445_;
}
}
}
else
{
lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4477_; 
v_isSharedCheck_4477_ = !lean_is_exclusive(v_x_4437_);
if (v_isSharedCheck_4477_ == 0)
{
lean_object* v_unused_4478_; 
v_unused_4478_ = lean_ctor_get(v_x_4437_, 0);
lean_dec(v_unused_4478_);
v___x_4449_ = v_x_4437_;
v_isShared_4450_ = v_isSharedCheck_4477_;
goto v_resetjp_4448_;
}
else
{
lean_dec(v_x_4437_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4477_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
if (lean_obj_tag(v_stream_4426_) == 0)
{
lean_object* v___x_4451_; lean_object* v___y_4453_; uint8_t v___x_4462_; 
lean_dec_ref(v___f_4436_);
lean_dec_ref(v___f_4435_);
lean_dec_ref(v___f_4434_);
lean_dec_ref(v___f_4433_);
lean_dec_ref(v___f_4432_);
lean_dec(v___x_4431_);
v___x_4451_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4462_ = l_Lasm_Fetch_bodyless(v___y_4428_, v_status_4429_);
if (v___x_4462_ == 0)
{
lean_object* v___x_4463_; 
v___x_4463_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4463_, 0, v_body_4430_);
v___y_4453_ = v___x_4463_;
goto v___jp_4452_;
}
else
{
lean_object* v___x_4464_; 
lean_dec_ref(v_body_4430_);
v___x_4464_ = lean_box(0);
v___y_4453_ = v___x_4464_;
goto v___jp_4452_;
}
v___jp_4452_:
{
lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4459_; 
v___x_4454_ = lean_unsigned_to_nat(1u);
v___x_4455_ = lean_mk_empty_array_with_capacity(v___x_4454_);
v___x_4456_ = lean_array_push(v___x_4455_, v___y_4453_);
v___x_4457_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4457_, 0, v_snd_4427_);
lean_ctor_set(v___x_4457_, 1, v___x_4451_);
lean_ctor_set(v___x_4457_, 2, v___x_4456_);
if (v_isShared_4450_ == 0)
{
lean_ctor_set(v___x_4449_, 0, v___x_4457_);
v___x_4459_ = v___x_4449_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v___x_4457_);
v___x_4459_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
lean_object* v___x_4460_; 
v___x_4460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4459_);
return v___x_4460_;
}
}
}
else
{
lean_object* v_val_4465_; uint8_t v___x_4466_; 
lean_del_object(v___x_4449_);
lean_dec_ref(v_body_4430_);
v_val_4465_ = lean_ctor_get(v_stream_4426_, 0);
lean_inc(v_val_4465_);
lean_dec_ref_known(v_stream_4426_, 1);
v___x_4466_ = l_Lasm_Fetch_bodyless(v___y_4428_, v_status_4429_);
if (v___x_4466_ == 0)
{
lean_object* v___x_4467_; lean_object* v___f_4468_; lean_object* v___x_4469_; lean_object* v___f_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
lean_dec_ref(v___f_4436_);
v___x_4467_ = lean_box(v___x_4466_);
lean_inc_n(v___x_4431_, 4);
v___f_4468_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4468_, 0, v___x_4431_);
lean_closure_set(v___f_4468_, 1, v___x_4467_);
lean_closure_set(v___f_4468_, 2, v___f_4432_);
lean_closure_set(v___f_4468_, 3, v_snd_4427_);
v___x_4469_ = lean_box(v___x_4466_);
v___f_4470_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4470_, 0, v___x_4431_);
lean_closure_set(v___f_4470_, 1, v___x_4469_);
lean_closure_set(v___f_4470_, 2, v___f_4433_);
v___x_4471_ = lean_apply_2(v_val_4465_, v___f_4468_, lean_box(0));
v___x_4472_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4466_, v___x_4471_, v___f_4434_);
v___x_4473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4466_, v___x_4472_, v___f_4470_);
v___x_4474_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4466_, v___x_4473_, v___f_4435_);
return v___x_4474_;
}
else
{
lean_object* v___x_4475_; lean_object* v___x_4476_; 
lean_dec(v_val_4465_);
lean_dec_ref(v___f_4435_);
lean_dec_ref(v___f_4434_);
lean_dec_ref(v___f_4433_);
lean_dec_ref(v___f_4432_);
lean_dec(v___x_4431_);
lean_dec(v_snd_4427_);
v___x_4475_ = lean_box(0);
v___x_4476_ = lean_apply_2(v___f_4436_, v___x_4475_, lean_box(0));
return v___x_4476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4479_, lean_object* v_snd_4480_, lean_object* v___y_4481_, lean_object* v_status_4482_, lean_object* v_body_4483_, lean_object* v___x_4484_, lean_object* v___f_4485_, lean_object* v___f_4486_, lean_object* v___f_4487_, lean_object* v___f_4488_, lean_object* v___f_4489_, lean_object* v_x_4490_, lean_object* v___y_4491_){
_start:
{
uint16_t v_status_boxed_4492_; lean_object* v_res_4493_; 
v_status_boxed_4492_ = lean_unbox(v_status_4482_);
v_res_4493_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4479_, v_snd_4480_, v___y_4481_, v_status_boxed_4492_, v_body_4483_, v___x_4484_, v___f_4485_, v___f_4486_, v___f_4487_, v___f_4488_, v___f_4489_, v_x_4490_);
lean_dec_ref(v___y_4481_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4494_, size_t v_i_4495_, size_t v_stop_4496_, lean_object* v_b_4497_){
_start:
{
uint8_t v___x_4498_; 
v___x_4498_ = lean_usize_dec_eq(v_i_4495_, v_stop_4496_);
if (v___x_4498_ == 0)
{
lean_object* v___x_4499_; lean_object* v_fst_4500_; lean_object* v_snd_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; size_t v___x_4506_; size_t v___x_4507_; 
v___x_4499_ = lean_array_uget_borrowed(v_as_4494_, v_i_4495_);
v_fst_4500_ = lean_ctor_get(v___x_4499_, 0);
v_snd_4501_ = lean_ctor_get(v___x_4499_, 1);
lean_inc(v_fst_4500_);
v___x_4502_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4502_, 0, v_fst_4500_);
v___x_4503_ = lean_array_push(v_b_4497_, v___x_4502_);
lean_inc(v_snd_4501_);
v___x_4504_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4504_, 0, v_snd_4501_);
v___x_4505_ = lean_array_push(v___x_4503_, v___x_4504_);
v___x_4506_ = ((size_t)1ULL);
v___x_4507_ = lean_usize_add(v_i_4495_, v___x_4506_);
v_i_4495_ = v___x_4507_;
v_b_4497_ = v___x_4505_;
goto _start;
}
else
{
return v_b_4497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4509_, lean_object* v_i_4510_, lean_object* v_stop_4511_, lean_object* v_b_4512_){
_start:
{
size_t v_i_boxed_4513_; size_t v_stop_boxed_4514_; lean_object* v_res_4515_; 
v_i_boxed_4513_ = lean_unbox_usize(v_i_4510_);
lean_dec(v_i_4510_);
v_stop_boxed_4514_ = lean_unbox_usize(v_stop_4511_);
lean_dec(v_stop_4511_);
v_res_4515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4509_, v_i_boxed_4513_, v_stop_boxed_4514_, v_b_4512_);
lean_dec_ref(v_as_4509_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4517_, lean_object* v_snd_4518_, lean_object* v___y_4519_, lean_object* v___f_4520_, lean_object* v___f_4521_, lean_object* v_x_4522_){
_start:
{
lean_object* v___y_4525_; uint8_t v___y_4526_; lean_object* v_val_4527_; lean_object* v___y_4531_; lean_object* v___y_4532_; lean_object* v___y_4533_; lean_object* v___y_4534_; 
if (lean_obj_tag(v_x_4522_) == 0)
{
lean_object* v_a_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4566_; 
lean_dec_ref(v___f_4521_);
lean_dec_ref(v___f_4520_);
lean_dec_ref(v___y_4519_);
lean_dec(v_snd_4518_);
lean_dec(v___x_4517_);
v_a_4558_ = lean_ctor_get(v_x_4522_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v_x_4522_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4560_ = v_x_4522_;
v_isShared_4561_ = v_isSharedCheck_4566_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_a_4558_);
lean_dec(v_x_4522_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4566_;
goto v_resetjp_4559_;
}
v_resetjp_4559_:
{
lean_object* v___x_4563_; 
if (v_isShared_4561_ == 0)
{
v___x_4563_ = v___x_4560_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4558_);
v___x_4563_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
lean_object* v___x_4564_; 
v___x_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4564_, 0, v___x_4563_);
return v___x_4564_;
}
}
}
else
{
lean_object* v_a_4567_; uint16_t v_status_4568_; lean_object* v_headers_4569_; lean_object* v_body_4570_; lean_object* v_stream_4571_; lean_object* v___x_4572_; lean_object* v___f_4573_; lean_object* v___f_4574_; lean_object* v___f_4575_; lean_object* v___y_4577_; lean_object* v___x_4589_; uint8_t v___x_4590_; 
v_a_4567_ = lean_ctor_get(v_x_4522_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v_x_4522_, 1);
v_status_4568_ = lean_ctor_get_uint16(v_a_4567_, sizeof(void*)*3);
v_headers_4569_ = lean_ctor_get(v_a_4567_, 0);
lean_inc_ref(v_headers_4569_);
v_body_4570_ = lean_ctor_get(v_a_4567_, 1);
lean_inc_ref(v_body_4570_);
v_stream_4571_ = lean_ctor_get(v_a_4567_, 2);
lean_inc(v_stream_4571_);
lean_dec(v_a_4567_);
v___x_4572_ = lean_mk_empty_array_with_capacity(v___x_4517_);
lean_inc_ref_n(v___x_4572_, 2);
lean_inc_n(v_snd_4518_, 2);
v___f_4573_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4573_, 0, v_snd_4518_);
lean_closure_set(v___f_4573_, 1, v___x_4572_);
lean_inc_ref(v___f_4573_);
v___f_4574_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4574_, 0, v___f_4573_);
v___f_4575_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4575_, 0, v_snd_4518_);
lean_closure_set(v___f_4575_, 1, v___x_4572_);
v___x_4589_ = lean_array_get_size(v_headers_4569_);
v___x_4590_ = lean_nat_dec_lt(v___x_4517_, v___x_4589_);
if (v___x_4590_ == 0)
{
lean_dec_ref(v_headers_4569_);
v___y_4577_ = v___x_4572_;
goto v___jp_4576_;
}
else
{
size_t v___x_4591_; size_t v___x_4592_; lean_object* v___x_4593_; 
v___x_4591_ = ((size_t)0ULL);
v___x_4592_ = lean_usize_of_nat(v___x_4589_);
v___x_4593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4569_, v___x_4591_, v___x_4592_, v___x_4572_);
lean_dec_ref(v_headers_4569_);
v___y_4577_ = v___x_4593_;
goto v___jp_4576_;
}
v___jp_4576_:
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; uint8_t v___x_4585_; 
v___x_4578_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4579_ = lean_box(v_status_4568_);
lean_inc(v___x_4517_);
lean_inc(v_snd_4518_);
v___f_4580_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4580_, 0, v_stream_4571_);
lean_closure_set(v___f_4580_, 1, v_snd_4518_);
lean_closure_set(v___f_4580_, 2, v___y_4519_);
lean_closure_set(v___f_4580_, 3, v___x_4579_);
lean_closure_set(v___f_4580_, 4, v_body_4570_);
lean_closure_set(v___f_4580_, 5, v___x_4517_);
lean_closure_set(v___f_4580_, 6, v___f_4520_);
lean_closure_set(v___f_4580_, 7, v___f_4575_);
lean_closure_set(v___f_4580_, 8, v___f_4521_);
lean_closure_set(v___f_4580_, 9, v___f_4574_);
lean_closure_set(v___f_4580_, 10, v___f_4573_);
v___x_4581_ = lean_uint16_to_nat(v_status_4568_);
v___x_4582_ = lean_nat_to_int(v___x_4581_);
v___x_4583_ = lean_nat_abs(v___x_4582_);
v___x_4584_ = lean_cstr_to_nat("9007199254740991");
v___x_4585_ = lean_nat_dec_le(v___x_4583_, v___x_4584_);
lean_dec(v___x_4583_);
if (v___x_4585_ == 0)
{
lean_object* v___x_4586_; 
v___x_4586_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4582_);
v___y_4531_ = v___y_4577_;
v___y_4532_ = v___x_4578_;
v___y_4533_ = v___f_4580_;
v___y_4534_ = v___x_4586_;
goto v___jp_4530_;
}
else
{
double v___x_4587_; lean_object* v___x_4588_; 
v___x_4587_ = l_Float_ofInt(v___x_4582_);
lean_dec(v___x_4582_);
v___x_4588_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4588_, 0, v___x_4587_);
v___y_4531_ = v___y_4577_;
v___y_4532_ = v___x_4578_;
v___y_4533_ = v___f_4580_;
v___y_4534_ = v___x_4588_;
goto v___jp_4530_;
}
}
}
v___jp_4524_:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v_val_4527_);
v___x_4529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4517_, v___y_4526_, v___x_4528_, v___y_4525_);
return v___x_4529_;
}
v___jp_4530_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; uint8_t v___x_4540_; lean_object* v___x_4541_; 
v___x_4535_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4535_, 0, v___y_4531_);
v___x_4536_ = lean_unsigned_to_nat(2u);
v___x_4537_ = lean_mk_empty_array_with_capacity(v___x_4536_);
v___x_4538_ = lean_array_push(v___x_4537_, v___y_4534_);
v___x_4539_ = lean_array_push(v___x_4538_, v___x_4535_);
v___x_4540_ = 0;
lean_inc_ref(v___y_4532_);
v___x_4541_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4518_, v___y_4532_, v___x_4539_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
v_a_4542_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4541_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4541_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
lean_ctor_set_tag(v___x_4544_, 1);
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
v___y_4525_ = v___y_4533_;
v___y_4526_ = v___x_4540_;
v_val_4527_ = v___x_4547_;
goto v___jp_4524_;
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
v_a_4550_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4541_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4541_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
lean_ctor_set_tag(v___x_4552_, 0);
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
v___y_4525_ = v___y_4533_;
v___y_4526_ = v___x_4540_;
v_val_4527_ = v___x_4555_;
goto v___jp_4524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4594_, lean_object* v_snd_4595_, lean_object* v___y_4596_, lean_object* v___f_4597_, lean_object* v___f_4598_, lean_object* v_x_4599_, lean_object* v___y_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4594_, v_snd_4595_, v___y_4596_, v___f_4597_, v___f_4598_, v_x_4599_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4602_, lean_object* v___x_4603_, lean_object* v___f_4604_, lean_object* v_request_4605_){
_start:
{
uint8_t v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4607_ = 0;
v___x_4608_ = l_Lasm_Fetch_respond(v_handler_4602_, v_request_4605_);
v___x_4609_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4603_, v___x_4607_, v___x_4608_, v___f_4604_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4610_, lean_object* v___x_4611_, lean_object* v___f_4612_, lean_object* v_request_4613_, lean_object* v___y_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4610_, v___x_4611_, v___f_4612_, v_request_4613_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4616_, lean_object* v_x_4617_){
_start:
{
if (lean_obj_tag(v_x_4617_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4627_; 
lean_dec_ref(v___f_4616_);
v_a_4619_ = lean_ctor_get(v_x_4617_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v_x_4617_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4621_ = v_x_4617_;
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_a_4619_);
lean_dec(v_x_4617_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v___x_4624_; 
if (v_isShared_4622_ == 0)
{
v___x_4624_ = v___x_4621_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4619_);
v___x_4624_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
lean_object* v___x_4625_; 
v___x_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4625_, 0, v___x_4624_);
return v___x_4625_;
}
}
}
else
{
lean_object* v_a_4628_; lean_object* v___x_4629_; 
v_a_4628_ = lean_ctor_get(v_x_4617_, 0);
lean_inc(v_a_4628_);
lean_dec_ref_known(v_x_4617_, 1);
v___x_4629_ = lean_apply_2(v___f_4616_, v_a_4628_, lean_box(0));
return v___x_4629_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4630_, lean_object* v_x_4631_, lean_object* v___y_4632_){
_start:
{
lean_object* v_res_4633_; 
v_res_4633_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4630_, v_x_4631_);
return v_res_4633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v___y_4634_, lean_object* v___x_4635_, lean_object* v___x_4636_, lean_object* v___f_4637_, lean_object* v___x_4638_, uint8_t v___x_4639_, lean_object* v___f_4640_, lean_object* v_x_4641_){
_start:
{
if (lean_obj_tag(v_x_4641_) == 0)
{
lean_object* v_a_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4651_; 
lean_dec_ref(v___f_4640_);
lean_dec(v___x_4638_);
lean_dec_ref(v___f_4637_);
lean_dec_ref(v___x_4636_);
lean_dec_ref(v___x_4635_);
lean_dec_ref(v___y_4634_);
v_a_4643_ = lean_ctor_get(v_x_4641_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v_x_4641_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4645_ = v_x_4641_;
v_isShared_4646_ = v_isSharedCheck_4651_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_a_4643_);
lean_dec(v_x_4641_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4651_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4643_);
v___x_4648_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
lean_object* v___x_4649_; 
v___x_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4648_);
return v___x_4649_;
}
}
}
else
{
lean_object* v_a_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4662_; 
v_a_4652_ = lean_ctor_get(v_x_4641_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v_x_4641_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4654_ = v_x_4641_;
v_isShared_4655_ = v_isSharedCheck_4662_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_a_4652_);
lean_dec(v_x_4641_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4662_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4656_; lean_object* v___x_4658_; 
v___x_4656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4656_, 0, v___y_4634_);
lean_ctor_set(v___x_4656_, 1, v___x_4635_);
lean_ctor_set(v___x_4656_, 2, v___x_4636_);
lean_ctor_set(v___x_4656_, 3, v_a_4652_);
lean_ctor_set(v___x_4656_, 4, v___f_4637_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 0, v___x_4656_);
v___x_4658_ = v___x_4654_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v___x_4656_);
v___x_4658_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
v___x_4660_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4638_, v___x_4639_, v___x_4659_, v___f_4640_);
return v___x_4660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v___y_4663_, lean_object* v___x_4664_, lean_object* v___x_4665_, lean_object* v___f_4666_, lean_object* v___x_4667_, lean_object* v___x_4668_, lean_object* v___f_4669_, lean_object* v_x_4670_, lean_object* v___y_4671_){
_start:
{
uint8_t v___x_18764__boxed_4672_; lean_object* v_res_4673_; 
v___x_18764__boxed_4672_ = lean_unbox(v___x_4668_);
v_res_4673_ = l_Lasm_Fetch_serveNode___lam__17(v___y_4663_, v___x_4664_, v___x_4665_, v___f_4666_, v___x_4667_, v___x_18764__boxed_4672_, v___f_4669_, v_x_4670_);
return v_res_4673_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0(void){
_start:
{
uint64_t v___x_4674_; uint8_t v___x_4675_; uint64_t v___x_4676_; 
v___x_4674_ = 8ULL;
v___x_4675_ = 0;
v___x_4676_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4675_, v___x_4674_);
return v___x_4676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_o_4677_, lean_object* v_name_4678_, lean_object* v_args_4679_){
_start:
{
lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; uint64_t v___x_4684_; lean_object* v___x_4685_; 
v___x_4681_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4682_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4682_, 0, v_o_4677_);
lean_ctor_set(v___x_4682_, 1, v___x_4681_);
lean_inc_ref(v_name_4678_);
v___x_4683_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4683_, 0, v_name_4678_);
v___x_4684_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___closed__0);
v___x_4685_ = l_Lasm_JS_Value_invokeRaw(v___x_4682_, v___x_4683_, v_args_4679_, v___x_4684_);
if (lean_obj_tag(v___x_4685_) == 0)
{
lean_object* v_a_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; 
v_a_4686_ = lean_ctor_get(v___x_4685_, 0);
lean_inc(v_a_4686_);
lean_dec_ref_known(v___x_4685_, 1);
v___x_4687_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4688_ = lean_string_append(v___x_4687_, v_name_4678_);
lean_dec_ref(v_name_4678_);
v___x_4689_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4688_, v_a_4686_);
lean_dec(v_a_4686_);
lean_dec_ref(v___x_4688_);
return v___x_4689_;
}
else
{
lean_dec_ref(v_name_4678_);
return v___x_4685_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_o_4690_, lean_object* v_name_4691_, lean_object* v_args_4692_, lean_object* v_a_4693_){
_start:
{
lean_object* v_res_4694_; 
v_res_4694_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_o_4690_, v_name_4691_, v_args_4692_);
return v_res_4694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4696_, uint8_t v___x_4697_, lean_object* v___f_4698_, lean_object* v___x_4699_, lean_object* v_a_4700_, lean_object* v_x_4701_){
_start:
{
lean_object* v_val_4704_; 
if (lean_obj_tag(v_x_4701_) == 0)
{
lean_object* v_a_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4715_; 
lean_dec(v_a_4700_);
lean_dec_ref(v___f_4698_);
lean_dec(v___x_4696_);
v_a_4707_ = lean_ctor_get(v_x_4701_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v_x_4701_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4709_ = v_x_4701_;
v_isShared_4710_ = v_isSharedCheck_4715_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_a_4707_);
lean_dec(v_x_4701_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4715_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v___x_4712_; 
if (v_isShared_4710_ == 0)
{
v___x_4712_ = v___x_4709_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4707_);
v___x_4712_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
lean_object* v___x_4713_; 
v___x_4713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4713_, 0, v___x_4712_);
return v___x_4713_;
}
}
}
else
{
lean_object* v_a_4716_; lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4734_; 
v_a_4716_ = lean_ctor_get(v_x_4701_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v_x_4701_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4718_ = v_x_4701_;
v_isShared_4719_ = v_isSharedCheck_4734_;
goto v_resetjp_4717_;
}
else
{
lean_inc(v_a_4716_);
lean_dec(v_x_4701_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4734_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; 
v___x_4720_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4721_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4722_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4722_, 0, v_a_4716_);
lean_ctor_set(v___x_4722_, 1, v___x_4721_);
v___x_4723_ = lean_mk_empty_array_with_capacity(v___x_4699_);
v___x_4724_ = lean_array_push(v___x_4723_, v___x_4722_);
v___x_4725_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__5(v_a_4700_, v___x_4720_, v___x_4724_);
if (lean_obj_tag(v___x_4725_) == 0)
{
lean_object* v_a_4726_; lean_object* v___x_4728_; 
v_a_4726_ = lean_ctor_get(v___x_4725_, 0);
lean_inc(v_a_4726_);
lean_dec_ref_known(v___x_4725_, 1);
if (v_isShared_4719_ == 0)
{
lean_ctor_set(v___x_4718_, 0, v_a_4726_);
v___x_4728_ = v___x_4718_;
goto v_reusejp_4727_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v_a_4726_);
v___x_4728_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4727_;
}
v_reusejp_4727_:
{
v_val_4704_ = v___x_4728_;
goto v___jp_4703_;
}
}
else
{
lean_object* v_a_4730_; lean_object* v___x_4732_; 
v_a_4730_ = lean_ctor_get(v___x_4725_, 0);
lean_inc(v_a_4730_);
lean_dec_ref_known(v___x_4725_, 1);
if (v_isShared_4719_ == 0)
{
lean_ctor_set_tag(v___x_4718_, 0);
lean_ctor_set(v___x_4718_, 0, v_a_4730_);
v___x_4732_ = v___x_4718_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4730_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
v_val_4704_ = v___x_4732_;
goto v___jp_4703_;
}
}
}
}
v___jp_4703_:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; 
v___x_4705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4705_, 0, v_val_4704_);
v___x_4706_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4696_, v___x_4697_, v___x_4705_, v___f_4698_);
return v___x_4706_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4735_, lean_object* v___x_4736_, lean_object* v___f_4737_, lean_object* v___x_4738_, lean_object* v_a_4739_, lean_object* v_x_4740_, lean_object* v___y_4741_){
_start:
{
uint8_t v___x_18863__boxed_4742_; lean_object* v_res_4743_; 
v___x_18863__boxed_4742_ = lean_unbox(v___x_4736_);
v_res_4743_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4735_, v___x_18863__boxed_4742_, v___f_4737_, v___x_4738_, v_a_4739_, v_x_4740_);
lean_dec(v___x_4738_);
return v_res_4743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4744_, lean_object* v___x_4745_, lean_object* v___x_4746_, lean_object* v___x_4747_, lean_object* v___x_4748_, uint8_t v___x_4749_, lean_object* v___f_4750_, lean_object* v_x_4751_){
_start:
{
if (lean_obj_tag(v_x_4751_) == 0)
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4761_; 
lean_dec_ref(v___f_4750_);
lean_dec(v___x_4748_);
lean_dec_ref(v___x_4747_);
lean_dec_ref(v___x_4746_);
lean_dec_ref(v___x_4745_);
lean_dec_ref(v___y_4744_);
v_a_4753_ = lean_ctor_get(v_x_4751_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v_x_4751_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4755_ = v_x_4751_;
v_isShared_4756_ = v_isSharedCheck_4761_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v_x_4751_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4761_;
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
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4753_);
v___x_4758_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
lean_object* v___x_4759_; 
v___x_4759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4759_, 0, v___x_4758_);
return v___x_4759_;
}
}
}
else
{
lean_object* v_a_4762_; lean_object* v___x_4764_; uint8_t v_isShared_4765_; uint8_t v_isSharedCheck_4772_; 
v_a_4762_ = lean_ctor_get(v_x_4751_, 0);
v_isSharedCheck_4772_ = !lean_is_exclusive(v_x_4751_);
if (v_isSharedCheck_4772_ == 0)
{
v___x_4764_ = v_x_4751_;
v_isShared_4765_ = v_isSharedCheck_4772_;
goto v_resetjp_4763_;
}
else
{
lean_inc(v_a_4762_);
lean_dec(v_x_4751_);
v___x_4764_ = lean_box(0);
v_isShared_4765_ = v_isSharedCheck_4772_;
goto v_resetjp_4763_;
}
v_resetjp_4763_:
{
lean_object* v___x_4766_; lean_object* v___x_4768_; 
v___x_4766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4766_, 0, v___y_4744_);
lean_ctor_set(v___x_4766_, 1, v___x_4745_);
lean_ctor_set(v___x_4766_, 2, v___x_4746_);
lean_ctor_set(v___x_4766_, 3, v___x_4747_);
lean_ctor_set(v___x_4766_, 4, v_a_4762_);
if (v_isShared_4765_ == 0)
{
lean_ctor_set(v___x_4764_, 0, v___x_4766_);
v___x_4768_ = v___x_4764_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4766_);
v___x_4768_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4768_);
v___x_4770_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4748_, v___x_4749_, v___x_4769_, v___f_4750_);
return v___x_4770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4773_, lean_object* v___x_4774_, lean_object* v___x_4775_, lean_object* v___x_4776_, lean_object* v___x_4777_, lean_object* v___x_4778_, lean_object* v___f_4779_, lean_object* v_x_4780_, lean_object* v___y_4781_){
_start:
{
uint8_t v___x_18953__boxed_4782_; lean_object* v_res_4783_; 
v___x_18953__boxed_4782_ = lean_unbox(v___x_4778_);
v_res_4783_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4773_, v___x_4774_, v___x_4775_, v___x_4776_, v___x_4777_, v___x_18953__boxed_4782_, v___f_4779_, v_x_4780_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4784_, uint8_t v___x_4785_, lean_object* v___f_4786_, lean_object* v_x_4787_){
_start:
{
lean_object* v_val_4790_; 
if (lean_obj_tag(v_x_4787_) == 0)
{
lean_object* v_a_4793_; lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4801_; 
lean_dec_ref(v___f_4786_);
lean_dec(v___x_4784_);
v_a_4793_ = lean_ctor_get(v_x_4787_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v_x_4787_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4795_ = v_x_4787_;
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
else
{
lean_inc(v_a_4793_);
lean_dec(v_x_4787_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4798_; 
if (v_isShared_4796_ == 0)
{
v___x_4798_ = v___x_4795_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4793_);
v___x_4798_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
lean_object* v___x_4799_; 
v___x_4799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4798_);
return v___x_4799_;
}
}
}
else
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4815_; 
v_a_4802_ = lean_ctor_get(v_x_4787_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v_x_4787_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4804_ = v_x_4787_;
v_isShared_4805_ = v_isSharedCheck_4815_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v_x_4787_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4815_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4806_; 
v___x_4806_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4802_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4807_);
lean_dec_ref_known(v___x_4806_, 1);
if (v_isShared_4805_ == 0)
{
lean_ctor_set(v___x_4804_, 0, v_a_4807_);
v___x_4809_ = v___x_4804_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_a_4807_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
v_val_4790_ = v___x_4809_;
goto v___jp_4789_;
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; 
v_a_4811_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4811_);
lean_dec_ref_known(v___x_4806_, 1);
if (v_isShared_4805_ == 0)
{
lean_ctor_set_tag(v___x_4804_, 0);
lean_ctor_set(v___x_4804_, 0, v_a_4811_);
v___x_4813_ = v___x_4804_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4811_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
v_val_4790_ = v___x_4813_;
goto v___jp_4789_;
}
}
}
}
v___jp_4789_:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4791_, 0, v_val_4790_);
v___x_4792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4784_, v___x_4785_, v___x_4791_, v___f_4786_);
return v___x_4792_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4816_, lean_object* v___x_4817_, lean_object* v___f_4818_, lean_object* v_x_4819_, lean_object* v___y_4820_){
_start:
{
uint8_t v___x_19016__boxed_4821_; lean_object* v_res_4822_; 
v___x_19016__boxed_4821_ = lean_unbox(v___x_4817_);
v_res_4822_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4816_, v___x_19016__boxed_4821_, v___f_4818_, v_x_4819_);
return v_res_4822_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_as_4825_, size_t v_i_4826_, size_t v_stop_4827_){
_start:
{
uint8_t v___x_4828_; 
v___x_4828_ = lean_usize_dec_eq(v_i_4826_, v_stop_4827_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; lean_object* v_fst_4830_; uint8_t v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; uint8_t v___x_4834_; 
v___x_4829_ = lean_array_uget_borrowed(v_as_4825_, v_i_4826_);
v_fst_4830_ = lean_ctor_get(v___x_4829_, 0);
v___x_4831_ = 1;
lean_inc(v_fst_4830_);
v___x_4832_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4830_);
v___x_4833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__0));
v___x_4834_ = lean_string_dec_eq(v___x_4832_, v___x_4833_);
if (v___x_4834_ == 0)
{
lean_object* v___x_4835_; uint8_t v___x_4836_; 
v___x_4835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___closed__1));
v___x_4836_ = lean_string_dec_eq(v___x_4832_, v___x_4835_);
lean_dec_ref(v___x_4832_);
if (v___x_4836_ == 0)
{
size_t v___x_4837_; size_t v___x_4838_; 
v___x_4837_ = ((size_t)1ULL);
v___x_4838_ = lean_usize_add(v_i_4826_, v___x_4837_);
v_i_4826_ = v___x_4838_;
goto _start;
}
else
{
return v___x_4831_;
}
}
else
{
lean_dec_ref(v___x_4832_);
return v___x_4831_;
}
}
else
{
uint8_t v___x_4840_; 
v___x_4840_ = 0;
return v___x_4840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_as_4841_, lean_object* v_i_4842_, lean_object* v_stop_4843_){
_start:
{
size_t v_i_boxed_4844_; size_t v_stop_boxed_4845_; uint8_t v_res_4846_; lean_object* v_r_4847_; 
v_i_boxed_4844_ = lean_unbox_usize(v_i_4842_);
lean_dec(v_i_4842_);
v_stop_boxed_4845_ = lean_unbox_usize(v_stop_4843_);
lean_dec(v_stop_4843_);
v_res_4846_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v_as_4841_, v_i_boxed_4844_, v_stop_boxed_4845_);
lean_dec_ref(v_as_4841_);
v_r_4847_ = lean_box(v_res_4846_);
return v_r_4847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4848_, lean_object* v_range_4849_, lean_object* v_b_4850_, lean_object* v_i_4851_){
_start:
{
lean_object* v_stop_4852_; lean_object* v_step_4853_; uint8_t v___x_4854_; 
v_stop_4852_ = lean_ctor_get(v_range_4849_, 1);
v_step_4853_ = lean_ctor_get(v_range_4849_, 2);
v___x_4854_ = lean_nat_dec_lt(v_i_4851_, v_stop_4852_);
if (v___x_4854_ == 0)
{
lean_dec(v_i_4851_);
return v_b_4850_;
}
else
{
lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4855_ = lean_unsigned_to_nat(2u);
v___x_4856_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4857_ = lean_unsigned_to_nat(1u);
v___x_4858_ = lean_nat_mul(v___x_4855_, v_i_4851_);
v___x_4859_ = lean_array_get_borrowed(v___x_4856_, v___y_4848_, v___x_4858_);
v___x_4860_ = lean_nat_add(v___x_4858_, v___x_4857_);
lean_dec(v___x_4858_);
v___x_4861_ = lean_array_get_borrowed(v___x_4856_, v___y_4848_, v___x_4860_);
lean_dec(v___x_4860_);
lean_inc(v___x_4861_);
lean_inc(v___x_4859_);
v___x_4862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4859_);
lean_ctor_set(v___x_4862_, 1, v___x_4861_);
v___x_4863_ = lean_array_push(v_b_4850_, v___x_4862_);
v___x_4864_ = lean_nat_add(v_i_4851_, v_step_4853_);
lean_dec(v_i_4851_);
v_b_4850_ = v___x_4863_;
v_i_4851_ = v___x_4864_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4866_, lean_object* v_range_4867_, lean_object* v_b_4868_, lean_object* v_i_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4866_, v_range_4867_, v_b_4868_, v_i_4869_);
lean_dec_ref(v_range_4867_);
lean_dec_ref(v___y_4866_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4871_, size_t v_i_4872_, size_t v_stop_4873_, lean_object* v_b_4874_){
_start:
{
lean_object* v___y_4876_; uint8_t v___x_4880_; 
v___x_4880_ = lean_usize_dec_eq(v_i_4872_, v_stop_4873_);
if (v___x_4880_ == 0)
{
lean_object* v___x_4881_; 
v___x_4881_ = lean_array_uget_borrowed(v_as_4871_, v_i_4872_);
if (lean_obj_tag(v___x_4881_) == 4)
{
lean_object* v_s_4882_; lean_object* v___x_4883_; 
v_s_4882_ = lean_ctor_get(v___x_4881_, 0);
lean_inc_ref(v_s_4882_);
v___x_4883_ = lean_array_push(v_b_4874_, v_s_4882_);
v___y_4876_ = v___x_4883_;
goto v___jp_4875_;
}
else
{
v___y_4876_ = v_b_4874_;
goto v___jp_4875_;
}
}
else
{
return v_b_4874_;
}
v___jp_4875_:
{
size_t v___x_4877_; size_t v___x_4878_; 
v___x_4877_ = ((size_t)1ULL);
v___x_4878_ = lean_usize_add(v_i_4872_, v___x_4877_);
v_i_4872_ = v___x_4878_;
v_b_4874_ = v___y_4876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4884_, lean_object* v_i_4885_, lean_object* v_stop_4886_, lean_object* v_b_4887_){
_start:
{
size_t v_i_boxed_4888_; size_t v_stop_boxed_4889_; lean_object* v_res_4890_; 
v_i_boxed_4888_ = lean_unbox_usize(v_i_4885_);
lean_dec(v_i_4885_);
v_stop_boxed_4889_ = lean_unbox_usize(v_stop_4886_);
lean_dec(v_stop_4886_);
v_res_4890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4884_, v_i_boxed_4888_, v_stop_boxed_4889_, v_b_4887_);
lean_dec_ref(v_as_4884_);
return v_res_4890_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4891_, lean_object* v_start_4892_, lean_object* v_stop_4893_){
_start:
{
lean_object* v___x_4894_; uint8_t v___x_4895_; 
v___x_4894_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4895_ = lean_nat_dec_lt(v_start_4892_, v_stop_4893_);
if (v___x_4895_ == 0)
{
return v___x_4894_;
}
else
{
lean_object* v___x_4896_; uint8_t v___x_4897_; 
v___x_4896_ = lean_array_get_size(v_as_4891_);
v___x_4897_ = lean_nat_dec_le(v_stop_4893_, v___x_4896_);
if (v___x_4897_ == 0)
{
uint8_t v___x_4898_; 
v___x_4898_ = lean_nat_dec_lt(v_start_4892_, v___x_4896_);
if (v___x_4898_ == 0)
{
return v___x_4894_;
}
else
{
size_t v___x_4899_; size_t v___x_4900_; lean_object* v___x_4901_; 
v___x_4899_ = lean_usize_of_nat(v_start_4892_);
v___x_4900_ = lean_usize_of_nat(v___x_4896_);
v___x_4901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4891_, v___x_4899_, v___x_4900_, v___x_4894_);
return v___x_4901_;
}
}
else
{
size_t v___x_4902_; size_t v___x_4903_; lean_object* v___x_4904_; 
v___x_4902_ = lean_usize_of_nat(v_start_4892_);
v___x_4903_ = lean_usize_of_nat(v_stop_4893_);
v___x_4904_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4891_, v___x_4902_, v___x_4903_, v___x_4894_);
return v___x_4904_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4905_, lean_object* v_start_4906_, lean_object* v_stop_4907_){
_start:
{
lean_object* v_res_4908_; 
v_res_4908_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4905_, v_start_4906_, v_stop_4907_);
lean_dec(v_stop_4907_);
lean_dec(v_start_4906_);
lean_dec_ref(v_as_4905_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4910_, size_t v_sz_4911_, size_t v_i_4912_, lean_object* v_b_4913_){
_start:
{
uint8_t v___x_4914_; 
v___x_4914_ = lean_usize_dec_lt(v_i_4912_, v_sz_4911_);
if (v___x_4914_ == 0)
{
lean_inc_ref(v_b_4913_);
return v_b_4913_;
}
else
{
lean_object* v_a_4915_; lean_object* v_fst_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; uint8_t v___x_4920_; 
v_a_4915_ = lean_array_uget_borrowed(v_as_4910_, v_i_4912_);
v_fst_4916_ = lean_ctor_get(v_a_4915_, 0);
v___x_4917_ = lean_box(0);
lean_inc(v_fst_4916_);
v___x_4918_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4916_);
v___x_4919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4920_ = lean_string_dec_eq(v___x_4918_, v___x_4919_);
lean_dec_ref(v___x_4918_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; size_t v___x_4922_; size_t v___x_4923_; 
v___x_4921_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4922_ = ((size_t)1ULL);
v___x_4923_ = lean_usize_add(v_i_4912_, v___x_4922_);
v_i_4912_ = v___x_4923_;
v_b_4913_ = v___x_4921_;
goto _start;
}
else
{
lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; 
lean_inc(v_a_4915_);
v___x_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4925_, 0, v_a_4915_);
v___x_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4925_);
v___x_4927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
lean_ctor_set(v___x_4927_, 1, v___x_4917_);
return v___x_4927_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4928_, lean_object* v_sz_4929_, lean_object* v_i_4930_, lean_object* v_b_4931_){
_start:
{
size_t v_sz_boxed_4932_; size_t v_i_boxed_4933_; lean_object* v_res_4934_; 
v_sz_boxed_4932_ = lean_unbox_usize(v_sz_4929_);
lean_dec(v_sz_4929_);
v_i_boxed_4933_ = lean_unbox_usize(v_i_4930_);
lean_dec(v_i_4930_);
v_res_4934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4928_, v_sz_boxed_4932_, v_i_boxed_4933_, v_b_4931_);
lean_dec_ref(v_b_4931_);
lean_dec_ref(v_as_4928_);
return v_res_4934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4937_, lean_object* v_snd_4938_, lean_object* v___f_4939_, lean_object* v___f_4940_, lean_object* v_handler_4941_, lean_object* v_options_4942_, lean_object* v_a_4943_, lean_object* v_fst_4944_, lean_object* v_a_4945_, lean_object* v___x_4946_, lean_object* v___x_4947_, lean_object* v___x_4948_, lean_object* v_x_4949_){
_start:
{
lean_object* v___y_4952_; lean_object* v___y_4953_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; uint8_t v___y_4958_; lean_object* v___y_4967_; uint8_t v___y_4968_; lean_object* v___y_4969_; lean_object* v_val_4970_; lean_object* v___y_4974_; lean_object* v___y_4975_; lean_object* v___y_4976_; lean_object* v___y_4977_; lean_object* v___y_4978_; lean_object* v___y_4979_; lean_object* v___y_4980_; lean_object* v___y_4981_; lean_object* v___y_4982_; lean_object* v___y_4983_; lean_object* v___y_4984_; lean_object* v___y_4985_; lean_object* v___y_4986_; lean_object* v___y_4987_; lean_object* v___y_5035_; lean_object* v___y_5036_; lean_object* v___y_5037_; lean_object* v___y_5038_; lean_object* v___y_5039_; lean_object* v___y_5040_; lean_object* v___y_5041_; lean_object* v___y_5042_; lean_object* v___y_5043_; lean_object* v___y_5044_; lean_object* v___y_5045_; lean_object* v___y_5046_; lean_object* v___y_5047_; lean_object* v___y_5050_; lean_object* v___y_5051_; lean_object* v___y_5052_; lean_object* v___y_5053_; 
if (lean_obj_tag(v_x_4949_) == 0)
{
lean_object* v_a_5079_; lean_object* v___x_5081_; uint8_t v_isShared_5082_; uint8_t v_isSharedCheck_5087_; 
lean_dec(v_a_4945_);
lean_dec(v_fst_4944_);
lean_dec(v_a_4943_);
lean_dec_ref(v_options_4942_);
lean_dec_ref(v_handler_4941_);
lean_dec_ref(v___f_4940_);
lean_dec_ref(v___f_4939_);
lean_dec(v_snd_4938_);
lean_dec(v___y_4937_);
v_a_5079_ = lean_ctor_get(v_x_4949_, 0);
v_isSharedCheck_5087_ = !lean_is_exclusive(v_x_4949_);
if (v_isSharedCheck_5087_ == 0)
{
v___x_5081_ = v_x_4949_;
v_isShared_5082_ = v_isSharedCheck_5087_;
goto v_resetjp_5080_;
}
else
{
lean_inc(v_a_5079_);
lean_dec(v_x_4949_);
v___x_5081_ = lean_box(0);
v_isShared_5082_ = v_isSharedCheck_5087_;
goto v_resetjp_5080_;
}
v_resetjp_5080_:
{
lean_object* v___x_5084_; 
if (v_isShared_5082_ == 0)
{
v___x_5084_ = v___x_5081_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v_a_5079_);
v___x_5084_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
lean_object* v___x_5085_; 
v___x_5085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5084_);
return v___x_5085_;
}
}
}
else
{
lean_object* v_a_5088_; lean_object* v___y_5090_; lean_object* v___y_5091_; lean_object* v___y_5099_; lean_object* v___x_5103_; 
v_a_5088_ = lean_ctor_get(v_x_4949_, 0);
lean_inc(v_a_5088_);
lean_dec_ref_known(v_x_4949_, 1);
v___x_5103_ = l_Lasm_JS_Data_field(v_a_5088_, v___x_4948_);
if (lean_obj_tag(v___x_5103_) == 4)
{
lean_object* v_s_5104_; 
v_s_5104_ = lean_ctor_get(v___x_5103_, 0);
lean_inc_ref(v_s_5104_);
lean_dec_ref_known(v___x_5103_, 1);
v___y_5099_ = v_s_5104_;
goto v___jp_5098_;
}
else
{
lean_object* v___x_5105_; 
lean_dec(v___x_5103_);
v___x_5105_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_5099_ = v___x_5105_;
goto v___jp_5098_;
}
v___jp_5089_:
{
lean_object* v___x_5092_; 
v___x_5092_ = l_Lasm_JS_Data_field(v_a_5088_, v___x_4946_);
lean_dec(v_a_5088_);
if (lean_obj_tag(v___x_5092_) == 7)
{
lean_object* v_items_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; 
v_items_5093_ = lean_ctor_get(v___x_5092_, 0);
lean_inc_ref(v_items_5093_);
lean_dec_ref_known(v___x_5092_, 1);
v___x_5094_ = lean_unsigned_to_nat(0u);
v___x_5095_ = lean_array_get_size(v_items_5093_);
v___x_5096_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_5093_, v___x_5094_, v___x_5095_);
lean_dec_ref(v_items_5093_);
lean_inc_ref(v___y_5090_);
v___y_5050_ = v___y_5090_;
v___y_5051_ = v___y_5091_;
v___y_5052_ = v___y_5090_;
v___y_5053_ = v___x_5096_;
goto v___jp_5049_;
}
else
{
lean_object* v___x_5097_; 
lean_dec(v___x_5092_);
v___x_5097_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_5090_);
v___y_5050_ = v___y_5090_;
v___y_5051_ = v___y_5091_;
v___y_5052_ = v___y_5090_;
v___y_5053_ = v___x_5097_;
goto v___jp_5049_;
}
}
v___jp_5098_:
{
lean_object* v___x_5100_; 
v___x_5100_ = l_Lasm_JS_Data_field(v_a_5088_, v___x_4947_);
if (lean_obj_tag(v___x_5100_) == 4)
{
lean_object* v_s_5101_; 
v_s_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc_ref(v_s_5101_);
lean_dec_ref_known(v___x_5100_, 1);
v___y_5090_ = v___y_5099_;
v___y_5091_ = v_s_5101_;
goto v___jp_5089_;
}
else
{
lean_object* v___x_5102_; 
lean_dec(v___x_5100_);
v___x_5102_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_5090_ = v___y_5099_;
v___y_5091_ = v___x_5102_;
goto v___jp_5089_;
}
}
}
v___jp_4951_:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___f_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; 
v___x_4959_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4952_, v___y_4953_, v___y_4937_);
lean_dec_ref(v___y_4952_);
v___x_4960_ = l_ByteArray_empty;
v___f_4961_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4962_, 0, v___y_4954_);
lean_ctor_set(v___x_4962_, 1, v___x_4959_);
lean_ctor_set(v___x_4962_, 2, v___y_4957_);
lean_ctor_set(v___x_4962_, 3, v___x_4960_);
lean_ctor_set(v___x_4962_, 4, v___f_4961_);
v___x_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4962_);
v___x_4964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
v___x_4965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4956_, v___y_4958_, v___x_4964_, v___y_4955_);
return v___x_4965_;
}
v___jp_4966_:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; 
v___x_4971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4971_, 0, v_val_4970_);
v___x_4972_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4969_, v___y_4968_, v___x_4971_, v___y_4967_);
return v___x_4972_;
}
v___jp_4973_:
{
lean_object* v___x_4988_; uint8_t v___x_4989_; 
v___x_4988_ = lean_array_get_size(v___y_4983_);
v___x_4989_ = lean_nat_dec_lt(v___y_4984_, v___x_4988_);
if (v___x_4989_ == 0)
{
lean_dec_ref(v___y_4986_);
lean_dec(v___y_4981_);
lean_dec(v___y_4979_);
lean_dec_ref(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec_ref(v___y_4974_);
lean_dec(v_a_4945_);
lean_dec(v_fst_4944_);
lean_dec(v_a_4943_);
lean_dec_ref(v_options_4942_);
v___y_4952_ = v___y_4980_;
v___y_4953_ = v___y_4987_;
v___y_4954_ = v___y_4982_;
v___y_4955_ = v___y_4985_;
v___y_4956_ = v___y_4984_;
v___y_4957_ = v___y_4983_;
v___y_4958_ = v___x_4989_;
goto v___jp_4951_;
}
else
{
if (v___x_4989_ == 0)
{
lean_dec_ref(v___y_4986_);
lean_dec(v___y_4981_);
lean_dec(v___y_4979_);
lean_dec_ref(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec_ref(v___y_4974_);
lean_dec(v_a_4945_);
lean_dec(v_fst_4944_);
lean_dec(v_a_4943_);
lean_dec_ref(v_options_4942_);
v___y_4952_ = v___y_4980_;
v___y_4953_ = v___y_4987_;
v___y_4954_ = v___y_4982_;
v___y_4955_ = v___y_4985_;
v___y_4956_ = v___y_4984_;
v___y_4957_ = v___y_4983_;
v___y_4958_ = v___x_4989_;
goto v___jp_4951_;
}
else
{
size_t v___x_4990_; size_t v___x_4991_; uint8_t v___x_4992_; 
v___x_4990_ = ((size_t)0ULL);
v___x_4991_ = lean_usize_of_nat(v___x_4988_);
v___x_4992_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__4(v___y_4983_, v___x_4990_, v___x_4991_);
if (v___x_4992_ == 0)
{
lean_dec_ref(v___y_4986_);
lean_dec(v___y_4981_);
lean_dec(v___y_4979_);
lean_dec_ref(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec_ref(v___y_4974_);
lean_dec(v_a_4945_);
lean_dec(v_fst_4944_);
lean_dec(v_a_4943_);
lean_dec_ref(v_options_4942_);
v___y_4952_ = v___y_4980_;
v___y_4953_ = v___y_4987_;
v___y_4954_ = v___y_4982_;
v___y_4955_ = v___y_4985_;
v___y_4956_ = v___y_4984_;
v___y_4957_ = v___y_4983_;
v___y_4958_ = v___x_4992_;
goto v___jp_4951_;
}
else
{
lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___f_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; uint8_t v___x_4999_; 
lean_dec_ref(v___y_4985_);
lean_dec_ref(v___y_4983_);
v___x_4993_ = l_Lasm_Fetch_nodeRequestUrl(v___y_4980_, v___y_4987_, v___y_4937_);
lean_dec_ref(v___y_4980_);
v___x_4994_ = l_ByteArray_empty;
v___f_4995_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_4993_);
v___x_4996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4996_, 0, v___y_4982_);
lean_ctor_set(v___x_4996_, 1, v___x_4993_);
lean_ctor_set(v___x_4996_, 2, v___y_4986_);
lean_ctor_set(v___x_4996_, 3, v___x_4994_);
lean_ctor_set(v___x_4996_, 4, v___f_4995_);
v___x_4997_ = l_Lasm_Fetch_Request_path(v___x_4996_);
v___x_4998_ = lean_apply_1(v_options_4942_, v___x_4997_);
v___x_4999_ = lean_unbox(v___x_4998_);
if (v___x_4999_ == 0)
{
lean_object* v___f_5000_; lean_object* v___f_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; uint8_t v___x_5005_; lean_object* v___x_5006_; 
lean_dec(v___y_4981_);
lean_dec_ref(v___y_4978_);
lean_dec(v_a_4945_);
lean_inc(v___y_4979_);
v___f_5000_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 9, 7);
lean_closure_set(v___f_5000_, 0, v___y_4977_);
lean_closure_set(v___f_5000_, 1, v___x_4993_);
lean_closure_set(v___f_5000_, 2, v___y_4975_);
lean_closure_set(v___f_5000_, 3, v___f_4995_);
lean_closure_set(v___f_5000_, 4, v___y_4979_);
lean_closure_set(v___f_5000_, 5, v___x_4998_);
lean_closure_set(v___f_5000_, 6, v___y_4974_);
v___f_5001_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_5001_, 0, v___y_4979_);
lean_closure_set(v___f_5001_, 1, v___x_4998_);
lean_closure_set(v___f_5001_, 2, v___f_5000_);
lean_closure_set(v___f_5001_, 3, v___y_4976_);
lean_closure_set(v___f_5001_, 4, v_a_4943_);
v___x_5002_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__0));
v___x_5003_ = lean_mk_empty_array_with_capacity(v___y_4984_);
v___x_5004_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4944_, v___x_5002_, v___x_5003_);
v___x_5005_ = lean_unbox(v___x_4998_);
v___x_5006_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4984_, v___x_5005_, v___x_5004_, v___f_5001_);
return v___x_5006_;
}
else
{
uint8_t v___x_5007_; lean_object* v___x_5008_; lean_object* v___f_5009_; lean_object* v___x_5010_; lean_object* v___f_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4974_);
lean_dec(v_a_4943_);
v___x_5007_ = 0;
v___x_5008_ = lean_box(v___x_5007_);
lean_inc(v___y_4979_);
v___f_5009_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_5009_, 0, v___y_4977_);
lean_closure_set(v___f_5009_, 1, v___x_4993_);
lean_closure_set(v___f_5009_, 2, v___y_4975_);
lean_closure_set(v___f_5009_, 3, v___x_4994_);
lean_closure_set(v___f_5009_, 4, v___y_4979_);
lean_closure_set(v___f_5009_, 5, v___x_5008_);
lean_closure_set(v___f_5009_, 6, v___y_4978_);
v___x_5010_ = lean_box(v___x_5007_);
v___f_5011_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_5011_, 0, v___y_4979_);
lean_closure_set(v___f_5011_, 1, v___x_5010_);
lean_closure_set(v___f_5011_, 2, v___f_5009_);
v___x_5012_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__18___closed__1));
v___x_5013_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5014_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5014_, 0, v_fst_4944_);
lean_ctor_set(v___x_5014_, 1, v___x_5013_);
v___x_5015_ = lean_mk_empty_array_with_capacity(v___y_4981_);
lean_dec(v___y_4981_);
v___x_5016_ = lean_array_push(v___x_5015_, v___x_5014_);
v___x_5017_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4945_, v___x_5012_, v___x_5016_);
if (lean_obj_tag(v___x_5017_) == 0)
{
lean_object* v_a_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5025_; 
v_a_5018_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5025_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_5020_ = v___x_5017_;
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_a_5018_);
lean_dec(v___x_5017_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5023_; 
if (v_isShared_5021_ == 0)
{
lean_ctor_set_tag(v___x_5020_, 1);
v___x_5023_ = v___x_5020_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v_a_5018_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
v___y_4967_ = v___f_5011_;
v___y_4968_ = v___x_5007_;
v___y_4969_ = v___y_4984_;
v_val_4970_ = v___x_5023_;
goto v___jp_4966_;
}
}
}
else
{
lean_object* v_a_5026_; lean_object* v___x_5028_; uint8_t v_isShared_5029_; uint8_t v_isSharedCheck_5033_; 
v_a_5026_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5028_ = v___x_5017_;
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
else
{
lean_inc(v_a_5026_);
lean_dec(v___x_5017_);
v___x_5028_ = lean_box(0);
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
v_resetjp_5027_:
{
lean_object* v___x_5031_; 
if (v_isShared_5029_ == 0)
{
lean_ctor_set_tag(v___x_5028_, 0);
v___x_5031_ = v___x_5028_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v_a_5026_);
v___x_5031_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
v___y_4967_ = v___f_5011_;
v___y_4968_ = v___x_5007_;
v___y_4969_ = v___y_4984_;
v_val_4970_ = v___x_5031_;
goto v___jp_4966_;
}
}
}
}
}
}
}
}
v___jp_5034_:
{
lean_object* v___x_5048_; 
v___x_5048_ = lean_box(0);
v___y_4974_ = v___y_5035_;
v___y_4975_ = v___y_5036_;
v___y_4976_ = v___y_5037_;
v___y_4977_ = v___y_5038_;
v___y_4978_ = v___y_5039_;
v___y_4979_ = v___y_5040_;
v___y_4980_ = v___y_5042_;
v___y_4981_ = v___y_5043_;
v___y_4982_ = v___y_5044_;
v___y_4983_ = v___y_5046_;
v___y_4984_ = v___y_5045_;
v___y_4985_ = v___y_5041_;
v___y_4986_ = v___y_5047_;
v___y_4987_ = v___x_5048_;
goto v___jp_4973_;
}
v___jp_5049_:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; size_t v_sz_5062_; size_t v___x_5063_; lean_object* v___x_5064_; lean_object* v_fst_5065_; lean_object* v___f_5066_; lean_object* v___f_5067_; lean_object* v___f_5068_; 
v___x_5054_ = lean_unsigned_to_nat(0u);
v___x_5055_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_5056_ = lean_array_get_size(v___y_5053_);
v___x_5057_ = lean_unsigned_to_nat(1u);
v___x_5058_ = lean_nat_shiftr(v___x_5056_, v___x_5057_);
v___x_5059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5059_, 0, v___x_5054_);
lean_ctor_set(v___x_5059_, 1, v___x_5058_);
lean_ctor_set(v___x_5059_, 2, v___x_5057_);
v___x_5060_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5053_, v___x_5059_, v___x_5055_, v___x_5054_);
lean_dec_ref_known(v___x_5059_, 3);
lean_dec_ref(v___y_5053_);
v___x_5061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_5062_ = lean_array_size(v___x_5060_);
v___x_5063_ = ((size_t)0ULL);
v___x_5064_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_5060_, v_sz_5062_, v___x_5063_, v___x_5061_);
v_fst_5065_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v_fst_5065_);
lean_dec_ref(v___x_5064_);
lean_inc_ref(v___y_5050_);
v___f_5066_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_5066_, 0, v___x_5054_);
lean_closure_set(v___f_5066_, 1, v_snd_4938_);
lean_closure_set(v___f_5066_, 2, v___y_5050_);
lean_closure_set(v___f_5066_, 3, v___f_4939_);
lean_closure_set(v___f_5066_, 4, v___f_4940_);
v___f_5067_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_5067_, 0, v_handler_4941_);
lean_closure_set(v___f_5067_, 1, v___x_5054_);
lean_closure_set(v___f_5067_, 2, v___f_5066_);
v___f_5068_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_5068_, 0, v___f_5067_);
if (lean_obj_tag(v_fst_5065_) == 0)
{
lean_inc_ref(v___x_5060_);
lean_inc_ref_n(v___f_5068_, 2);
v___y_5035_ = v___f_5068_;
v___y_5036_ = v___x_5060_;
v___y_5037_ = v___x_5057_;
v___y_5038_ = v___y_5050_;
v___y_5039_ = v___f_5068_;
v___y_5040_ = v___x_5054_;
v___y_5041_ = v___f_5068_;
v___y_5042_ = v___y_5051_;
v___y_5043_ = v___x_5057_;
v___y_5044_ = v___y_5052_;
v___y_5045_ = v___x_5054_;
v___y_5046_ = v___x_5060_;
v___y_5047_ = v___x_5055_;
goto v___jp_5034_;
}
else
{
lean_object* v_val_5069_; 
v_val_5069_ = lean_ctor_get(v_fst_5065_, 0);
lean_inc(v_val_5069_);
lean_dec_ref_known(v_fst_5065_, 1);
if (lean_obj_tag(v_val_5069_) == 0)
{
lean_inc_ref(v___x_5060_);
lean_inc_ref_n(v___f_5068_, 2);
v___y_5035_ = v___f_5068_;
v___y_5036_ = v___x_5060_;
v___y_5037_ = v___x_5057_;
v___y_5038_ = v___y_5050_;
v___y_5039_ = v___f_5068_;
v___y_5040_ = v___x_5054_;
v___y_5041_ = v___f_5068_;
v___y_5042_ = v___y_5051_;
v___y_5043_ = v___x_5057_;
v___y_5044_ = v___y_5052_;
v___y_5045_ = v___x_5054_;
v___y_5046_ = v___x_5060_;
v___y_5047_ = v___x_5055_;
goto v___jp_5034_;
}
else
{
lean_object* v_val_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5078_; 
v_val_5070_ = lean_ctor_get(v_val_5069_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v_val_5069_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5072_ = v_val_5069_;
v_isShared_5073_ = v_isSharedCheck_5078_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_val_5070_);
lean_dec(v_val_5069_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5078_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v_snd_5074_; lean_object* v___x_5076_; 
v_snd_5074_ = lean_ctor_get(v_val_5070_, 1);
lean_inc(v_snd_5074_);
lean_dec(v_val_5070_);
if (v_isShared_5073_ == 0)
{
lean_ctor_set(v___x_5072_, 0, v_snd_5074_);
v___x_5076_ = v___x_5072_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_snd_5074_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
lean_inc_ref(v___x_5060_);
lean_inc_ref_n(v___f_5068_, 2);
v___y_4974_ = v___f_5068_;
v___y_4975_ = v___x_5060_;
v___y_4976_ = v___x_5057_;
v___y_4977_ = v___y_5050_;
v___y_4978_ = v___f_5068_;
v___y_4979_ = v___x_5054_;
v___y_4980_ = v___y_5051_;
v___y_4981_ = v___x_5057_;
v___y_4982_ = v___y_5052_;
v___y_4983_ = v___x_5060_;
v___y_4984_ = v___x_5054_;
v___y_4985_ = v___f_5068_;
v___y_4986_ = v___x_5055_;
v___y_4987_ = v___x_5076_;
goto v___jp_4973_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_5106_, lean_object* v_snd_5107_, lean_object* v___f_5108_, lean_object* v___f_5109_, lean_object* v_handler_5110_, lean_object* v_options_5111_, lean_object* v_a_5112_, lean_object* v_fst_5113_, lean_object* v_a_5114_, lean_object* v___x_5115_, lean_object* v___x_5116_, lean_object* v___x_5117_, lean_object* v_x_5118_, lean_object* v___y_5119_){
_start:
{
lean_object* v_res_5120_; 
v_res_5120_ = l_Lasm_Fetch_serveNode___lam__18(v___y_5106_, v_snd_5107_, v___f_5108_, v___f_5109_, v_handler_5110_, v_options_5111_, v_a_5112_, v_fst_5113_, v_a_5114_, v___x_5115_, v___x_5116_, v___x_5117_, v_x_5118_);
lean_dec_ref(v___x_5117_);
lean_dec_ref(v___x_5116_);
lean_dec_ref(v___x_5115_);
return v_res_5120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___y_5130_, lean_object* v___f_5131_, lean_object* v___f_5132_, lean_object* v_handler_5133_, lean_object* v_options_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_____x_5137_){
_start:
{
lean_object* v_fst_5139_; lean_object* v_snd_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___f_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; uint8_t v___x_5147_; lean_object* v_val_5149_; lean_object* v___x_5152_; 
v_fst_5139_ = lean_ctor_get(v_____x_5137_, 0);
lean_inc_n(v_fst_5139_, 2);
v_snd_5140_ = lean_ctor_get(v_____x_5137_, 1);
lean_inc(v_snd_5140_);
lean_dec_ref(v_____x_5137_);
v___x_5141_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5142_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_5143_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_5144_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 14, 12);
lean_closure_set(v___f_5144_, 0, v___y_5130_);
lean_closure_set(v___f_5144_, 1, v_snd_5140_);
lean_closure_set(v___f_5144_, 2, v___f_5131_);
lean_closure_set(v___f_5144_, 3, v___f_5132_);
lean_closure_set(v___f_5144_, 4, v_handler_5133_);
lean_closure_set(v___f_5144_, 5, v_options_5134_);
lean_closure_set(v___f_5144_, 6, v_a_5135_);
lean_closure_set(v___f_5144_, 7, v_fst_5139_);
lean_closure_set(v___f_5144_, 8, v_a_5136_);
lean_closure_set(v___f_5144_, 9, v___x_5143_);
lean_closure_set(v___f_5144_, 10, v___x_5142_);
lean_closure_set(v___f_5144_, 11, v___x_5141_);
v___x_5145_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_5146_ = lean_unsigned_to_nat(0u);
v___x_5147_ = 0;
v___x_5152_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_5139_, v___x_5145_);
if (lean_obj_tag(v___x_5152_) == 0)
{
lean_object* v_a_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5160_; 
v_a_5153_ = lean_ctor_get(v___x_5152_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5152_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5155_ = v___x_5152_;
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_a_5153_);
lean_dec(v___x_5152_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5158_; 
if (v_isShared_5156_ == 0)
{
lean_ctor_set_tag(v___x_5155_, 1);
v___x_5158_ = v___x_5155_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5153_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
v_val_5149_ = v___x_5158_;
goto v___jp_5148_;
}
}
}
else
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
v_a_5161_ = lean_ctor_get(v___x_5152_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5152_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v___x_5152_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v___x_5152_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
lean_ctor_set_tag(v___x_5163_, 0);
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
v_val_5149_ = v___x_5166_;
goto v___jp_5148_;
}
}
}
v___jp_5148_:
{
lean_object* v___x_5150_; lean_object* v___x_5151_; 
v___x_5150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5150_, 0, v_val_5149_);
v___x_5151_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5146_, v___x_5147_, v___x_5150_, v___f_5144_);
return v___x_5151_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___y_5169_, lean_object* v___f_5170_, lean_object* v___f_5171_, lean_object* v_handler_5172_, lean_object* v_options_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_____x_5176_, lean_object* v___y_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l_Lasm_Fetch_serveNode___lam__19(v___y_5169_, v___f_5170_, v___f_5171_, v_handler_5172_, v_options_5173_, v_a_5174_, v_a_5175_, v_____x_5176_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_5179_, lean_object* v_x_5180_){
_start:
{
if (lean_obj_tag(v_x_5180_) == 0)
{
lean_object* v_a_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5190_; 
lean_dec_ref(v___f_5179_);
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
lean_object* v_a_5191_; lean_object* v___x_5192_; 
v_a_5191_ = lean_ctor_get(v_x_5180_, 0);
lean_inc(v_a_5191_);
lean_dec_ref_known(v_x_5180_, 1);
v___x_5192_ = lean_apply_2(v___f_5179_, v_a_5191_, lean_box(0));
return v___x_5192_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_5193_, lean_object* v_x_5194_, lean_object* v___y_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l_Lasm_Fetch_serveNode___lam__20(v___f_5193_, v_x_5194_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_5204_, lean_object* v___f_5205_, lean_object* v_args_5206_){
_start:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; 
v___x_5213_ = lean_unsigned_to_nat(0u);
v___x_5214_ = lean_array_get_size(v_args_5206_);
v___x_5215_ = lean_nat_dec_lt(v___x_5213_, v___x_5214_);
if (v___x_5215_ == 0)
{
lean_dec_ref(v___f_5205_);
goto v___jp_5208_;
}
else
{
lean_object* v___x_5216_; 
v___x_5216_ = lean_array_fget_borrowed(v_args_5206_, v___x_5213_);
if (lean_obj_tag(v___x_5216_) == 9)
{
lean_object* v_value_5217_; lean_object* v___x_5218_; uint8_t v___x_5219_; 
v_value_5217_ = lean_ctor_get(v___x_5216_, 0);
v___x_5218_ = lean_unsigned_to_nat(1u);
v___x_5219_ = lean_nat_dec_lt(v___x_5218_, v___x_5214_);
if (v___x_5219_ == 0)
{
lean_dec_ref(v___f_5205_);
goto v___jp_5208_;
}
else
{
lean_object* v___x_5220_; 
v___x_5220_ = lean_array_fget(v_args_5206_, v___x_5218_);
if (lean_obj_tag(v___x_5220_) == 9)
{
lean_object* v_value_5221_; lean_object* v___x_5223_; uint8_t v_isShared_5224_; uint8_t v_isSharedCheck_5232_; 
lean_dec_ref(v___f_5204_);
v_value_5221_ = lean_ctor_get(v___x_5220_, 0);
v_isSharedCheck_5232_ = !lean_is_exclusive(v___x_5220_);
if (v_isSharedCheck_5232_ == 0)
{
lean_object* v_unused_5233_; 
v_unused_5233_ = lean_ctor_get(v___x_5220_, 1);
lean_dec(v_unused_5233_);
v___x_5223_ = v___x_5220_;
v_isShared_5224_ = v_isSharedCheck_5232_;
goto v_resetjp_5222_;
}
else
{
lean_inc(v_value_5221_);
lean_dec(v___x_5220_);
v___x_5223_ = lean_box(0);
v_isShared_5224_ = v_isSharedCheck_5232_;
goto v_resetjp_5222_;
}
v_resetjp_5222_:
{
lean_object* v___x_5226_; 
lean_inc(v_value_5217_);
if (v_isShared_5224_ == 0)
{
lean_ctor_set_tag(v___x_5223_, 0);
lean_ctor_set(v___x_5223_, 1, v_value_5221_);
lean_ctor_set(v___x_5223_, 0, v_value_5217_);
v___x_5226_ = v___x_5223_;
goto v_reusejp_5225_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v_value_5217_);
lean_ctor_set(v_reuseFailAlloc_5231_, 1, v_value_5221_);
v___x_5226_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5225_;
}
v_reusejp_5225_:
{
uint8_t v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v___x_5227_ = 0;
v___x_5228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5228_, 0, v___x_5226_);
v___x_5229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5229_, 0, v___x_5228_);
v___x_5230_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5213_, v___x_5227_, v___x_5229_, v___f_5205_);
return v___x_5230_;
}
}
}
else
{
lean_dec(v___x_5220_);
lean_dec_ref(v___f_5205_);
goto v___jp_5208_;
}
}
}
else
{
lean_dec_ref(v___f_5205_);
goto v___jp_5208_;
}
}
v___jp_5208_:
{
lean_object* v___x_5209_; uint8_t v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; 
v___x_5209_ = lean_unsigned_to_nat(0u);
v___x_5210_ = 0;
v___x_5211_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_5212_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5209_, v___x_5210_, v___x_5211_, v___f_5204_);
return v___x_5212_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_5234_, lean_object* v___f_5235_, lean_object* v_args_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v_res_5238_; 
v_res_5238_ = l_Lasm_Fetch_serveNode___lam__22(v___f_5234_, v___f_5235_, v_args_5236_);
lean_dec_ref(v_args_5236_);
return v_res_5238_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_5239_){
_start:
{
lean_object* v___x_5241_; lean_object* v_putStr_5242_; lean_object* v___x_5243_; 
v___x_5241_ = lean_get_stdout();
v_putStr_5242_ = lean_ctor_get(v___x_5241_, 4);
lean_inc_ref(v_putStr_5242_);
lean_dec_ref(v___x_5241_);
v___x_5243_ = lean_apply_2(v_putStr_5242_, v_s_5239_, lean_box(0));
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_5244_, lean_object* v_a_5245_){
_start:
{
lean_object* v_res_5246_; 
v_res_5246_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_5244_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_5247_){
_start:
{
uint32_t v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5249_ = 10;
v___x_5250_ = lean_string_push(v_s_5247_, v___x_5249_);
v___x_5251_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5250_);
return v___x_5251_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5252_, lean_object* v_a_5253_){
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5252_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___f_5259_, lean_object* v_x_5260_){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; uint8_t v___x_5269_; lean_object* v_val_5271_; lean_object* v___x_5274_; 
v___x_5262_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5263_ = lean_string_append(v___x_5262_, v___y_5257_);
v___x_5264_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5265_ = lean_string_append(v___x_5263_, v___x_5264_);
v___x_5266_ = l_Nat_reprFast(v___y_5258_);
v___x_5267_ = lean_string_append(v___x_5265_, v___x_5266_);
lean_dec_ref(v___x_5266_);
v___x_5268_ = lean_unsigned_to_nat(0u);
v___x_5269_ = 0;
v___x_5274_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5267_);
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
v___x_5273_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5268_, v___x_5269_, v___x_5272_, v___f_5259_);
return v___x_5273_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___f_5293_, lean_object* v_x_5294_, lean_object* v___y_5295_){
_start:
{
lean_object* v_res_5296_; 
v_res_5296_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5291_, v___y_5292_, v___f_5293_, v_x_5294_);
lean_dec_ref(v_x_5294_);
lean_dec_ref(v___y_5291_);
return v_res_5296_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; 
v___x_5298_ = lean_unsigned_to_nat(0u);
v___x_5299_ = lean_nat_to_int(v___x_5298_);
return v___x_5299_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_5300_; lean_object* v___x_5301_; 
v___x_5300_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5301_ = lean_nat_abs(v___x_5300_);
return v___x_5301_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; uint8_t v___x_5304_; 
v___x_5302_ = lean_cstr_to_nat("9007199254740991");
v___x_5303_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_5304_ = lean_nat_dec_le(v___x_5303_, v___x_5302_);
return v___x_5304_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; 
v___x_5305_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5306_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5305_);
return v___x_5306_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_5307_; double v___x_5308_; 
v___x_5307_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5308_ = l_Float_ofInt(v___x_5307_);
return v___x_5308_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_5309_; lean_object* v___x_5310_; 
v___x_5309_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_5310_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5310_, 0, v___x_5309_);
return v___x_5310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_5311_, lean_object* v___x_5312_, lean_object* v_a_5313_, lean_object* v_x_5314_){
_start:
{
lean_object* v___y_5317_; uint8_t v___y_5318_; lean_object* v_val_5319_; lean_object* v___x_5322_; lean_object* v___y_5324_; uint8_t v___x_5345_; 
v___x_5322_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_5345_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_5345_ == 0)
{
lean_object* v___x_5346_; 
v___x_5346_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_5324_ = v___x_5346_;
goto v___jp_5323_;
}
else
{
lean_object* v___x_5347_; 
v___x_5347_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_5324_ = v___x_5347_;
goto v___jp_5323_;
}
v___jp_5316_:
{
lean_object* v___x_5320_; lean_object* v___x_5321_; 
v___x_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5320_, 0, v_val_5319_);
v___x_5321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5317_, v___y_5318_, v___x_5320_, v___f_5311_);
return v___x_5321_;
}
v___jp_5323_:
{
lean_object* v___x_5325_; lean_object* v___x_5326_; uint8_t v___x_5327_; lean_object* v___x_5328_; 
lean_inc(v___y_5324_);
v___x_5325_ = lean_array_push(v___x_5312_, v___y_5324_);
v___x_5326_ = lean_unsigned_to_nat(0u);
v___x_5327_ = 0;
v___x_5328_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5313_, v___x_5322_, v___x_5325_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5336_; 
v_a_5329_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5331_ = v___x_5328_;
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v___x_5328_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v___x_5334_; 
if (v_isShared_5332_ == 0)
{
lean_ctor_set_tag(v___x_5331_, 1);
v___x_5334_ = v___x_5331_;
goto v_reusejp_5333_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_a_5329_);
v___x_5334_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5333_;
}
v_reusejp_5333_:
{
v___y_5317_ = v___x_5326_;
v___y_5318_ = v___x_5327_;
v_val_5319_ = v___x_5334_;
goto v___jp_5316_;
}
}
}
else
{
lean_object* v_a_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5344_; 
v_a_5337_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5344_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5344_ == 0)
{
v___x_5339_ = v___x_5328_;
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_a_5337_);
lean_dec(v___x_5328_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5342_; 
if (v_isShared_5340_ == 0)
{
lean_ctor_set_tag(v___x_5339_, 0);
v___x_5342_ = v___x_5339_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v_a_5337_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
v___y_5317_ = v___x_5326_;
v___y_5318_ = v___x_5327_;
v_val_5319_ = v___x_5342_;
goto v___jp_5316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_5348_, lean_object* v___x_5349_, lean_object* v_a_5350_, lean_object* v_x_5351_, lean_object* v___y_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lasm_Fetch_serveNode___lam__23(v___f_5348_, v___x_5349_, v_a_5350_, v_x_5351_);
lean_dec_ref(v_x_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5354_, lean_object* v___x_5355_, lean_object* v___x_5356_, lean_object* v___f_5357_, lean_object* v_a_5358_, lean_object* v_x_5359_){
_start:
{
lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; uint8_t v___x_5365_; lean_object* v_val_5367_; lean_object* v___x_5370_; 
v___x_5361_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5362_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5362_, 0, v_a_5354_);
lean_ctor_set(v___x_5362_, 1, v___x_5355_);
v___x_5363_ = lean_array_push(v___x_5356_, v___x_5362_);
v___x_5364_ = lean_unsigned_to_nat(0u);
v___x_5365_ = 0;
v___x_5370_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5358_, v___x_5361_, v___x_5363_);
if (lean_obj_tag(v___x_5370_) == 0)
{
lean_object* v_a_5371_; lean_object* v___x_5373_; uint8_t v_isShared_5374_; uint8_t v_isSharedCheck_5378_; 
v_a_5371_ = lean_ctor_get(v___x_5370_, 0);
v_isSharedCheck_5378_ = !lean_is_exclusive(v___x_5370_);
if (v_isSharedCheck_5378_ == 0)
{
v___x_5373_ = v___x_5370_;
v_isShared_5374_ = v_isSharedCheck_5378_;
goto v_resetjp_5372_;
}
else
{
lean_inc(v_a_5371_);
lean_dec(v___x_5370_);
v___x_5373_ = lean_box(0);
v_isShared_5374_ = v_isSharedCheck_5378_;
goto v_resetjp_5372_;
}
v_resetjp_5372_:
{
lean_object* v___x_5376_; 
if (v_isShared_5374_ == 0)
{
lean_ctor_set_tag(v___x_5373_, 1);
v___x_5376_ = v___x_5373_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5377_; 
v_reuseFailAlloc_5377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5377_, 0, v_a_5371_);
v___x_5376_ = v_reuseFailAlloc_5377_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
v_val_5367_ = v___x_5376_;
goto v___jp_5366_;
}
}
}
else
{
lean_object* v_a_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5386_; 
v_a_5379_ = lean_ctor_get(v___x_5370_, 0);
v_isSharedCheck_5386_ = !lean_is_exclusive(v___x_5370_);
if (v_isSharedCheck_5386_ == 0)
{
v___x_5381_ = v___x_5370_;
v_isShared_5382_ = v_isSharedCheck_5386_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_a_5379_);
lean_dec(v___x_5370_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5386_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5384_; 
if (v_isShared_5382_ == 0)
{
lean_ctor_set_tag(v___x_5381_, 0);
v___x_5384_ = v___x_5381_;
goto v_reusejp_5383_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v_a_5379_);
v___x_5384_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5383_;
}
v_reusejp_5383_:
{
v_val_5367_ = v___x_5384_;
goto v___jp_5366_;
}
}
}
v___jp_5366_:
{
lean_object* v___x_5368_; lean_object* v___x_5369_; 
v___x_5368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5368_, 0, v_val_5367_);
v___x_5369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5364_, v___x_5365_, v___x_5368_, v___f_5357_);
return v___x_5369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5387_, lean_object* v___x_5388_, lean_object* v___x_5389_, lean_object* v___f_5390_, lean_object* v_a_5391_, lean_object* v_x_5392_, lean_object* v___y_5393_){
_start:
{
lean_object* v_res_5394_; 
v_res_5394_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5387_, v___x_5388_, v___x_5389_, v___f_5390_, v_a_5391_, v_x_5392_);
lean_dec_ref(v_x_5392_);
return v_res_5394_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5396_, lean_object* v_a_5397_, lean_object* v_as_x27_5398_, lean_object* v_b_5399_){
_start:
{
if (lean_obj_tag(v_as_x27_5398_) == 0)
{
lean_object* v___x_5401_; 
lean_dec(v_a_5397_);
lean_dec(v_a_5396_);
v___x_5401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5401_, 0, v_b_5399_);
return v___x_5401_;
}
else
{
lean_object* v_head_5402_; lean_object* v_tail_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v_head_5402_ = lean_ctor_get(v_as_x27_5398_, 0);
v_tail_5403_ = lean_ctor_get(v_as_x27_5398_, 1);
v___x_5404_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5405_ = lean_box(0);
v___x_5406_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5402_);
v___x_5407_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5407_, 0, v_head_5402_);
lean_inc(v_a_5396_);
v___x_5408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5408_, 0, v_a_5396_);
lean_ctor_set(v___x_5408_, 1, v___x_5404_);
v___x_5409_ = lean_unsigned_to_nat(2u);
v___x_5410_ = lean_mk_empty_array_with_capacity(v___x_5409_);
v___x_5411_ = lean_array_push(v___x_5410_, v___x_5407_);
v___x_5412_ = lean_array_push(v___x_5411_, v___x_5408_);
lean_inc(v_a_5397_);
v___x_5413_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5397_, v___x_5406_, v___x_5412_);
if (lean_obj_tag(v___x_5413_) == 0)
{
lean_dec_ref_known(v___x_5413_, 1);
v_as_x27_5398_ = v_tail_5403_;
v_b_5399_ = v___x_5405_;
goto _start;
}
else
{
lean_object* v_a_5415_; lean_object* v___x_5417_; uint8_t v_isShared_5418_; uint8_t v_isSharedCheck_5422_; 
lean_dec(v_a_5397_);
lean_dec(v_a_5396_);
v_a_5415_ = lean_ctor_get(v___x_5413_, 0);
v_isSharedCheck_5422_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5422_ == 0)
{
v___x_5417_ = v___x_5413_;
v_isShared_5418_ = v_isSharedCheck_5422_;
goto v_resetjp_5416_;
}
else
{
lean_inc(v_a_5415_);
lean_dec(v___x_5413_);
v___x_5417_ = lean_box(0);
v_isShared_5418_ = v_isSharedCheck_5422_;
goto v_resetjp_5416_;
}
v_resetjp_5416_:
{
lean_object* v___x_5420_; 
if (v_isShared_5418_ == 0)
{
v___x_5420_ = v___x_5417_;
goto v_reusejp_5419_;
}
else
{
lean_object* v_reuseFailAlloc_5421_; 
v_reuseFailAlloc_5421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5421_, 0, v_a_5415_);
v___x_5420_ = v_reuseFailAlloc_5421_;
goto v_reusejp_5419_;
}
v_reusejp_5419_:
{
return v___x_5420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5423_, lean_object* v_a_5424_, lean_object* v_as_x27_5425_, lean_object* v_b_5426_, lean_object* v___y_5427_){
_start:
{
lean_object* v_res_5428_; 
v_res_5428_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5423_, v_a_5424_, v_as_x27_5425_, v_b_5426_);
lean_dec(v_as_x27_5425_);
return v_res_5428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5430_){
_start:
{
uint32_t v___x_5432_; uint32_t v___x_5433_; uint64_t v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5432_ = 201;
v___x_5433_ = 0;
v___x_5434_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_specifier_5430_);
v___x_5435_ = lean_string_to_utf8(v_specifier_5430_);
v___x_5436_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5432_, v___x_5433_, v___x_5434_, v___x_5435_);
lean_dec_ref(v___x_5435_);
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v_a_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; 
v_a_5437_ = lean_ctor_get(v___x_5436_, 0);
lean_inc(v_a_5437_);
lean_dec_ref_known(v___x_5436_, 1);
v___x_5438_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5439_ = l_String_quote(v_specifier_5430_);
v___x_5440_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5440_, 0, v___x_5439_);
v___x_5441_ = lean_unsigned_to_nat(120u);
v___x_5442_ = lean_unsigned_to_nat(0u);
v___x_5443_ = l_Std_Format_pretty(v___x_5440_, v___x_5441_, v___x_5442_, v___x_5442_);
v___x_5444_ = lean_string_append(v___x_5438_, v___x_5443_);
lean_dec_ref(v___x_5443_);
v___x_5445_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5444_, v_a_5437_);
lean_dec(v_a_5437_);
lean_dec_ref(v___x_5444_);
return v___x_5445_;
}
else
{
lean_object* v_a_5446_; lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5453_; 
lean_dec_ref(v_specifier_5430_);
v_a_5446_ = lean_ctor_get(v___x_5436_, 0);
v_isSharedCheck_5453_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5453_ == 0)
{
v___x_5448_ = v___x_5436_;
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
else
{
lean_inc(v_a_5446_);
lean_dec(v___x_5436_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v___x_5451_; 
if (v_isShared_5449_ == 0)
{
v___x_5451_ = v___x_5448_;
goto v_reusejp_5450_;
}
else
{
lean_object* v_reuseFailAlloc_5452_; 
v_reuseFailAlloc_5452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5452_, 0, v_a_5446_);
v___x_5451_ = v_reuseFailAlloc_5452_;
goto v_reusejp_5450_;
}
v_reusejp_5450_:
{
return v___x_5451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5454_, lean_object* v_a_5455_){
_start:
{
lean_object* v_res_5456_; 
v_res_5456_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5454_);
return v_res_5456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5482_, lean_object* v_options_5483_){
_start:
{
lean_object* v___f_5485_; lean_object* v___f_5486_; lean_object* v___f_5487_; lean_object* v___f_5488_; lean_object* v___y_5490_; lean_object* v___y_5491_; lean_object* v___y_5492_; lean_object* v___y_5493_; lean_object* v___y_5494_; lean_object* v___y_5495_; lean_object* v___y_5496_; lean_object* v___y_5497_; lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___f_5485_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5486_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5487_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5488_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5551_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5552_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5551_);
if (lean_obj_tag(v___x_5552_) == 0)
{
lean_object* v_a_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; 
v_a_5553_ = lean_ctor_get(v___x_5552_, 0);
lean_inc(v_a_5553_);
lean_dec_ref_known(v___x_5552_, 1);
v___x_5554_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5555_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5554_);
if (lean_obj_tag(v___x_5555_) == 0)
{
lean_object* v_a_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; 
v_a_5556_ = lean_ctor_get(v___x_5555_, 0);
lean_inc(v_a_5556_);
lean_dec_ref_known(v___x_5555_, 1);
v___x_5557_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5558_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5556_, v___x_5557_);
if (lean_obj_tag(v___x_5558_) == 0)
{
lean_object* v_a_5559_; lean_object* v___x_5560_; 
v_a_5559_ = lean_ctor_get(v___x_5558_, 0);
lean_inc(v_a_5559_);
lean_dec_ref_known(v___x_5558_, 1);
v___x_5560_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5560_) == 0)
{
lean_object* v_a_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; 
v_a_5561_ = lean_ctor_get(v___x_5560_, 0);
lean_inc(v_a_5561_);
lean_dec_ref_known(v___x_5560_, 1);
v___x_5562_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5563_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5561_, v___x_5562_);
if (lean_obj_tag(v___x_5563_) == 0)
{
lean_object* v_a_5564_; lean_object* v___y_5566_; lean_object* v___y_5567_; lean_object* v___y_5568_; lean_object* v___y_5618_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___y_5623_; 
v_a_5564_ = lean_ctor_get(v___x_5563_, 0);
lean_inc(v_a_5564_);
lean_dec_ref_known(v___x_5563_, 1);
v___x_5620_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5621_ = lean_io_getenv(v___x_5620_);
if (lean_obj_tag(v___x_5621_) == 0)
{
lean_object* v___x_5632_; 
v___x_5632_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5623_ = v___x_5632_;
goto v___jp_5622_;
}
else
{
lean_object* v_val_5633_; 
v_val_5633_ = lean_ctor_get(v___x_5621_, 0);
lean_inc(v_val_5633_);
lean_dec_ref_known(v___x_5621_, 1);
v___y_5623_ = v_val_5633_;
goto v___jp_5622_;
}
v___jp_5565_:
{
lean_object* v___f_5569_; lean_object* v___f_5570_; lean_object* v___f_5571_; lean_object* v___f_5572_; lean_object* v___x_5573_; 
lean_inc_n(v___y_5568_, 2);
v___f_5569_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5569_, 0, v___y_5568_);
lean_closure_set(v___f_5569_, 1, v___f_5485_);
lean_closure_set(v___f_5569_, 2, v___f_5486_);
lean_closure_set(v___f_5569_, 3, v_handler_5482_);
lean_closure_set(v___f_5569_, 4, v_options_5483_);
lean_closure_set(v___f_5569_, 5, v_a_5564_);
lean_closure_set(v___f_5569_, 6, v_a_5559_);
v___f_5570_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5570_, 0, v___f_5569_);
lean_inc_ref(v___f_5570_);
v___f_5571_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5571_, 0, v___f_5570_);
lean_closure_set(v___f_5571_, 1, v___f_5570_);
v___f_5572_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5572_, 0, v___y_5566_);
lean_closure_set(v___f_5572_, 1, v___y_5568_);
lean_closure_set(v___f_5572_, 2, v___f_5487_);
v___x_5573_ = l_Lasm_JS_Function_ofFnReply(v___f_5571_);
if (lean_obj_tag(v___x_5573_) == 0)
{
lean_object* v_a_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; 
v_a_5574_ = lean_ctor_get(v___x_5573_, 0);
lean_inc(v_a_5574_);
lean_dec_ref_known(v___x_5573_, 1);
v___x_5575_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5576_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5577_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5577_, 0, v_a_5574_);
lean_ctor_set(v___x_5577_, 1, v___x_5576_);
v___x_5578_ = lean_unsigned_to_nat(1u);
v___x_5579_ = lean_mk_empty_array_with_capacity(v___x_5578_);
lean_inc_ref(v___x_5579_);
v___x_5580_ = lean_array_push(v___x_5579_, v___x_5577_);
v___x_5581_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5553_, v___x_5575_, v___x_5580_);
if (lean_obj_tag(v___x_5581_) == 0)
{
lean_object* v_a_5582_; lean_object* v___x_5583_; 
v_a_5582_ = lean_ctor_get(v___x_5581_, 0);
lean_inc(v_a_5582_);
lean_dec_ref_known(v___x_5581_, 1);
v___x_5583_ = l_Lasm_JS_Function_ofFn(v___f_5572_);
if (lean_obj_tag(v___x_5583_) == 0)
{
lean_object* v_a_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; uint8_t v___x_5589_; 
v_a_5584_ = lean_ctor_get(v___x_5583_, 0);
lean_inc(v_a_5584_);
lean_dec_ref_known(v___x_5583_, 1);
v___x_5585_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5586_ = lean_nat_to_int(v___y_5568_);
v___x_5587_ = lean_nat_abs(v___x_5586_);
v___x_5588_ = lean_cstr_to_nat("9007199254740991");
v___x_5589_ = lean_nat_dec_le(v___x_5587_, v___x_5588_);
lean_dec(v___x_5587_);
if (v___x_5589_ == 0)
{
lean_object* v___x_5590_; 
v___x_5590_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5590_, 0, v___x_5586_);
v___y_5490_ = v___x_5579_;
v___y_5491_ = v_a_5582_;
v___y_5492_ = v___x_5576_;
v___y_5493_ = v_a_5584_;
v___y_5494_ = v___y_5567_;
v___y_5495_ = v___x_5585_;
v___y_5496_ = v___x_5576_;
v___y_5497_ = v___x_5590_;
goto v___jp_5489_;
}
else
{
double v___x_5591_; lean_object* v___x_5592_; 
v___x_5591_ = l_Float_ofInt(v___x_5586_);
lean_dec(v___x_5586_);
v___x_5592_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5592_, 0, v___x_5591_);
v___y_5490_ = v___x_5579_;
v___y_5491_ = v_a_5582_;
v___y_5492_ = v___x_5576_;
v___y_5493_ = v_a_5584_;
v___y_5494_ = v___y_5567_;
v___y_5495_ = v___x_5585_;
v___y_5496_ = v___x_5576_;
v___y_5497_ = v___x_5592_;
goto v___jp_5489_;
}
}
else
{
lean_object* v_a_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5600_; 
lean_dec(v_a_5582_);
lean_dec_ref(v___x_5579_);
lean_dec(v___y_5568_);
lean_dec_ref(v___y_5567_);
v_a_5593_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5600_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5600_ == 0)
{
v___x_5595_ = v___x_5583_;
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_a_5593_);
lean_dec(v___x_5583_);
v___x_5595_ = lean_box(0);
v_isShared_5596_ = v_isSharedCheck_5600_;
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
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v_a_5593_);
v___x_5598_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
return v___x_5598_;
}
}
}
}
else
{
lean_object* v_a_5601_; lean_object* v___x_5603_; uint8_t v_isShared_5604_; uint8_t v_isSharedCheck_5608_; 
lean_dec_ref(v___x_5579_);
lean_dec_ref(v___f_5572_);
lean_dec(v___y_5568_);
lean_dec_ref(v___y_5567_);
v_a_5601_ = lean_ctor_get(v___x_5581_, 0);
v_isSharedCheck_5608_ = !lean_is_exclusive(v___x_5581_);
if (v_isSharedCheck_5608_ == 0)
{
v___x_5603_ = v___x_5581_;
v_isShared_5604_ = v_isSharedCheck_5608_;
goto v_resetjp_5602_;
}
else
{
lean_inc(v_a_5601_);
lean_dec(v___x_5581_);
v___x_5603_ = lean_box(0);
v_isShared_5604_ = v_isSharedCheck_5608_;
goto v_resetjp_5602_;
}
v_resetjp_5602_:
{
lean_object* v___x_5606_; 
if (v_isShared_5604_ == 0)
{
v___x_5606_ = v___x_5603_;
goto v_reusejp_5605_;
}
else
{
lean_object* v_reuseFailAlloc_5607_; 
v_reuseFailAlloc_5607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5607_, 0, v_a_5601_);
v___x_5606_ = v_reuseFailAlloc_5607_;
goto v_reusejp_5605_;
}
v_reusejp_5605_:
{
return v___x_5606_;
}
}
}
}
else
{
lean_object* v_a_5609_; lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5616_; 
lean_dec_ref(v___f_5572_);
lean_dec(v___y_5568_);
lean_dec_ref(v___y_5567_);
lean_dec(v_a_5553_);
v_a_5609_ = lean_ctor_get(v___x_5573_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5573_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5611_ = v___x_5573_;
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
else
{
lean_inc(v_a_5609_);
lean_dec(v___x_5573_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
lean_object* v___x_5614_; 
if (v_isShared_5612_ == 0)
{
v___x_5614_ = v___x_5611_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_a_5609_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
return v___x_5614_;
}
}
}
}
v___jp_5617_:
{
lean_object* v___x_5619_; 
v___x_5619_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5618_);
v___y_5566_ = v___y_5618_;
v___y_5567_ = v___y_5618_;
v___y_5568_ = v___x_5619_;
goto v___jp_5565_;
}
v___jp_5622_:
{
lean_object* v___x_5624_; lean_object* v___x_5625_; 
v___x_5624_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5625_ = lean_io_getenv(v___x_5624_);
if (lean_obj_tag(v___x_5625_) == 0)
{
v___y_5618_ = v___y_5623_;
goto v___jp_5617_;
}
else
{
lean_object* v_val_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; 
v_val_5626_ = lean_ctor_get(v___x_5625_, 0);
lean_inc(v_val_5626_);
lean_dec_ref_known(v___x_5625_, 1);
v___x_5627_ = lean_unsigned_to_nat(0u);
v___x_5628_ = lean_string_utf8_byte_size(v_val_5626_);
v___x_5629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5629_, 0, v_val_5626_);
lean_ctor_set(v___x_5629_, 1, v___x_5627_);
lean_ctor_set(v___x_5629_, 2, v___x_5628_);
v___x_5630_ = l_String_Slice_toNat_x3f(v___x_5629_);
lean_dec_ref_known(v___x_5629_, 3);
if (lean_obj_tag(v___x_5630_) == 0)
{
v___y_5618_ = v___y_5623_;
goto v___jp_5617_;
}
else
{
lean_object* v_val_5631_; 
v_val_5631_ = lean_ctor_get(v___x_5630_, 0);
lean_inc(v_val_5631_);
lean_dec_ref_known(v___x_5630_, 1);
lean_inc_ref(v___y_5623_);
v___y_5566_ = v___y_5623_;
v___y_5567_ = v___y_5623_;
v___y_5568_ = v_val_5631_;
goto v___jp_5565_;
}
}
}
}
else
{
lean_object* v_a_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5641_; 
lean_dec(v_a_5559_);
lean_dec(v_a_5553_);
lean_dec_ref(v_options_5483_);
lean_dec_ref(v_handler_5482_);
v_a_5634_ = lean_ctor_get(v___x_5563_, 0);
v_isSharedCheck_5641_ = !lean_is_exclusive(v___x_5563_);
if (v_isSharedCheck_5641_ == 0)
{
v___x_5636_ = v___x_5563_;
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_a_5634_);
lean_dec(v___x_5563_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5634_);
v___x_5639_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
return v___x_5639_;
}
}
}
}
else
{
lean_object* v_a_5642_; lean_object* v___x_5644_; uint8_t v_isShared_5645_; uint8_t v_isSharedCheck_5649_; 
lean_dec(v_a_5559_);
lean_dec(v_a_5553_);
lean_dec_ref(v_options_5483_);
lean_dec_ref(v_handler_5482_);
v_a_5642_ = lean_ctor_get(v___x_5560_, 0);
v_isSharedCheck_5649_ = !lean_is_exclusive(v___x_5560_);
if (v_isSharedCheck_5649_ == 0)
{
v___x_5644_ = v___x_5560_;
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
else
{
lean_inc(v_a_5642_);
lean_dec(v___x_5560_);
v___x_5644_ = lean_box(0);
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
v_resetjp_5643_:
{
lean_object* v___x_5647_; 
if (v_isShared_5645_ == 0)
{
v___x_5647_ = v___x_5644_;
goto v_reusejp_5646_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v_a_5642_);
v___x_5647_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5646_;
}
v_reusejp_5646_:
{
return v___x_5647_;
}
}
}
}
else
{
lean_object* v_a_5650_; lean_object* v___x_5652_; uint8_t v_isShared_5653_; uint8_t v_isSharedCheck_5657_; 
lean_dec(v_a_5553_);
lean_dec_ref(v_options_5483_);
lean_dec_ref(v_handler_5482_);
v_a_5650_ = lean_ctor_get(v___x_5558_, 0);
v_isSharedCheck_5657_ = !lean_is_exclusive(v___x_5558_);
if (v_isSharedCheck_5657_ == 0)
{
v___x_5652_ = v___x_5558_;
v_isShared_5653_ = v_isSharedCheck_5657_;
goto v_resetjp_5651_;
}
else
{
lean_inc(v_a_5650_);
lean_dec(v___x_5558_);
v___x_5652_ = lean_box(0);
v_isShared_5653_ = v_isSharedCheck_5657_;
goto v_resetjp_5651_;
}
v_resetjp_5651_:
{
lean_object* v___x_5655_; 
if (v_isShared_5653_ == 0)
{
v___x_5655_ = v___x_5652_;
goto v_reusejp_5654_;
}
else
{
lean_object* v_reuseFailAlloc_5656_; 
v_reuseFailAlloc_5656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5656_, 0, v_a_5650_);
v___x_5655_ = v_reuseFailAlloc_5656_;
goto v_reusejp_5654_;
}
v_reusejp_5654_:
{
return v___x_5655_;
}
}
}
}
else
{
lean_object* v_a_5658_; lean_object* v___x_5660_; uint8_t v_isShared_5661_; uint8_t v_isSharedCheck_5665_; 
lean_dec(v_a_5553_);
lean_dec_ref(v_options_5483_);
lean_dec_ref(v_handler_5482_);
v_a_5658_ = lean_ctor_get(v___x_5555_, 0);
v_isSharedCheck_5665_ = !lean_is_exclusive(v___x_5555_);
if (v_isSharedCheck_5665_ == 0)
{
v___x_5660_ = v___x_5555_;
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
else
{
lean_inc(v_a_5658_);
lean_dec(v___x_5555_);
v___x_5660_ = lean_box(0);
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
v_resetjp_5659_:
{
lean_object* v___x_5663_; 
if (v_isShared_5661_ == 0)
{
v___x_5663_ = v___x_5660_;
goto v_reusejp_5662_;
}
else
{
lean_object* v_reuseFailAlloc_5664_; 
v_reuseFailAlloc_5664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5664_, 0, v_a_5658_);
v___x_5663_ = v_reuseFailAlloc_5664_;
goto v_reusejp_5662_;
}
v_reusejp_5662_:
{
return v___x_5663_;
}
}
}
}
else
{
lean_object* v_a_5666_; lean_object* v___x_5668_; uint8_t v_isShared_5669_; uint8_t v_isSharedCheck_5673_; 
lean_dec_ref(v_options_5483_);
lean_dec_ref(v_handler_5482_);
v_a_5666_ = lean_ctor_get(v___x_5552_, 0);
v_isSharedCheck_5673_ = !lean_is_exclusive(v___x_5552_);
if (v_isSharedCheck_5673_ == 0)
{
v___x_5668_ = v___x_5552_;
v_isShared_5669_ = v_isSharedCheck_5673_;
goto v_resetjp_5667_;
}
else
{
lean_inc(v_a_5666_);
lean_dec(v___x_5552_);
v___x_5668_ = lean_box(0);
v_isShared_5669_ = v_isSharedCheck_5673_;
goto v_resetjp_5667_;
}
v_resetjp_5667_:
{
lean_object* v___x_5671_; 
if (v_isShared_5669_ == 0)
{
v___x_5671_ = v___x_5668_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5672_; 
v_reuseFailAlloc_5672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5672_, 0, v_a_5666_);
v___x_5671_ = v_reuseFailAlloc_5672_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
return v___x_5671_;
}
}
}
v___jp_5489_:
{
lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; 
v___x_5498_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5498_, 0, v___y_5494_);
lean_inc_ref(v___y_5496_);
v___x_5499_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5499_, 0, v___y_5493_);
lean_ctor_set(v___x_5499_, 1, v___y_5496_);
v___x_5500_ = lean_unsigned_to_nat(3u);
v___x_5501_ = lean_mk_empty_array_with_capacity(v___x_5500_);
v___x_5502_ = lean_array_push(v___x_5501_, v___y_5497_);
v___x_5503_ = lean_array_push(v___x_5502_, v___x_5498_);
v___x_5504_ = lean_array_push(v___x_5503_, v___x_5499_);
lean_inc_ref(v___y_5495_);
lean_inc(v___y_5491_);
v___x_5505_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5491_, v___y_5495_, v___x_5504_);
if (lean_obj_tag(v___x_5505_) == 0)
{
lean_object* v___x_5506_; lean_object* v___x_5507_; 
lean_dec_ref_known(v___x_5505_, 1);
v___x_5506_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5507_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5506_);
if (lean_obj_tag(v___x_5507_) == 0)
{
lean_object* v_a_5508_; lean_object* v___f_5509_; lean_object* v___x_5510_; 
v_a_5508_ = lean_ctor_get(v___x_5507_, 0);
lean_inc_n(v_a_5508_, 2);
lean_dec_ref_known(v___x_5507_, 1);
lean_inc_ref(v___y_5490_);
v___f_5509_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_5509_, 0, v___f_5488_);
lean_closure_set(v___f_5509_, 1, v___y_5490_);
lean_closure_set(v___f_5509_, 2, v_a_5508_);
v___x_5510_ = l_Lasm_JS_Function_ofFn(v___f_5509_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v___f_5512_; lean_object* v___x_5513_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
lean_dec_ref_known(v___x_5510_, 1);
lean_inc_ref(v___y_5492_);
v___f_5512_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_5512_, 0, v_a_5511_);
lean_closure_set(v___f_5512_, 1, v___y_5492_);
lean_closure_set(v___f_5512_, 2, v___y_5490_);
lean_closure_set(v___f_5512_, 3, v___f_5488_);
lean_closure_set(v___f_5512_, 4, v___y_5491_);
v___x_5513_ = l_Lasm_JS_Function_ofFn(v___f_5512_);
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
lean_inc(v_a_5514_);
lean_dec_ref_known(v___x_5513_, 1);
v___x_5515_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5516_ = lean_box(0);
v___x_5517_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5514_, v_a_5508_, v___x_5515_, v___x_5516_);
if (lean_obj_tag(v___x_5517_) == 0)
{
lean_object* v___x_5518_; 
lean_dec_ref_known(v___x_5517_, 1);
v___x_5518_ = l_Lasm_JS_waitForever();
return v___x_5518_;
}
else
{
return v___x_5517_;
}
}
else
{
lean_object* v_a_5519_; lean_object* v___x_5521_; uint8_t v_isShared_5522_; uint8_t v_isSharedCheck_5526_; 
lean_dec(v_a_5508_);
v_a_5519_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5526_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5526_ == 0)
{
v___x_5521_ = v___x_5513_;
v_isShared_5522_ = v_isSharedCheck_5526_;
goto v_resetjp_5520_;
}
else
{
lean_inc(v_a_5519_);
lean_dec(v___x_5513_);
v___x_5521_ = lean_box(0);
v_isShared_5522_ = v_isSharedCheck_5526_;
goto v_resetjp_5520_;
}
v_resetjp_5520_:
{
lean_object* v___x_5524_; 
if (v_isShared_5522_ == 0)
{
v___x_5524_ = v___x_5521_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v_a_5519_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
return v___x_5524_;
}
}
}
}
else
{
lean_object* v_a_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5534_; 
lean_dec(v_a_5508_);
lean_dec(v___y_5491_);
lean_dec_ref(v___y_5490_);
v_a_5527_ = lean_ctor_get(v___x_5510_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___x_5510_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5529_ = v___x_5510_;
v_isShared_5530_ = v_isSharedCheck_5534_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_a_5527_);
lean_dec(v___x_5510_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5534_;
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
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5527_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
else
{
lean_object* v_a_5535_; lean_object* v___x_5537_; uint8_t v_isShared_5538_; uint8_t v_isSharedCheck_5542_; 
lean_dec(v___y_5491_);
lean_dec_ref(v___y_5490_);
v_a_5535_ = lean_ctor_get(v___x_5507_, 0);
v_isSharedCheck_5542_ = !lean_is_exclusive(v___x_5507_);
if (v_isSharedCheck_5542_ == 0)
{
v___x_5537_ = v___x_5507_;
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
else
{
lean_inc(v_a_5535_);
lean_dec(v___x_5507_);
v___x_5537_ = lean_box(0);
v_isShared_5538_ = v_isSharedCheck_5542_;
goto v_resetjp_5536_;
}
v_resetjp_5536_:
{
lean_object* v___x_5540_; 
if (v_isShared_5538_ == 0)
{
v___x_5540_ = v___x_5537_;
goto v_reusejp_5539_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_a_5535_);
v___x_5540_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5539_;
}
v_reusejp_5539_:
{
return v___x_5540_;
}
}
}
}
else
{
lean_object* v_a_5543_; lean_object* v___x_5545_; uint8_t v_isShared_5546_; uint8_t v_isSharedCheck_5550_; 
lean_dec(v___y_5491_);
lean_dec_ref(v___y_5490_);
v_a_5543_ = lean_ctor_get(v___x_5505_, 0);
v_isSharedCheck_5550_ = !lean_is_exclusive(v___x_5505_);
if (v_isSharedCheck_5550_ == 0)
{
v___x_5545_ = v___x_5505_;
v_isShared_5546_ = v_isSharedCheck_5550_;
goto v_resetjp_5544_;
}
else
{
lean_inc(v_a_5543_);
lean_dec(v___x_5505_);
v___x_5545_ = lean_box(0);
v_isShared_5546_ = v_isSharedCheck_5550_;
goto v_resetjp_5544_;
}
v_resetjp_5544_:
{
lean_object* v___x_5548_; 
if (v_isShared_5546_ == 0)
{
v___x_5548_ = v___x_5545_;
goto v_reusejp_5547_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v_a_5543_);
v___x_5548_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5547_;
}
v_reusejp_5547_:
{
return v___x_5548_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5674_, lean_object* v_options_5675_, lean_object* v_a_5676_){
_start:
{
lean_object* v_res_5677_; 
v_res_5677_ = l_Lasm_Fetch_serveNode(v_handler_5674_, v_options_5675_);
return v_res_5677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5678_, lean_object* v_range_5679_, lean_object* v_b_5680_, lean_object* v_i_5681_, lean_object* v_hs_5682_, lean_object* v_hl_5683_){
_start:
{
lean_object* v___x_5684_; 
v___x_5684_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5678_, v_range_5679_, v_b_5680_, v_i_5681_);
return v___x_5684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5685_, lean_object* v_range_5686_, lean_object* v_b_5687_, lean_object* v_i_5688_, lean_object* v_hs_5689_, lean_object* v_hl_5690_){
_start:
{
lean_object* v_res_5691_; 
v_res_5691_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5685_, v_range_5686_, v_b_5687_, v_i_5688_, v_hs_5689_, v_hl_5690_);
lean_dec_ref(v_range_5686_);
lean_dec_ref(v___y_5685_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5692_, lean_object* v_a_5693_, lean_object* v_as_5694_, lean_object* v_as_x27_5695_, lean_object* v_b_5696_, lean_object* v_a_5697_){
_start:
{
lean_object* v___x_5699_; 
v___x_5699_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5692_, v_a_5693_, v_as_x27_5695_, v_b_5696_);
return v___x_5699_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5700_, lean_object* v_a_5701_, lean_object* v_as_5702_, lean_object* v_as_x27_5703_, lean_object* v_b_5704_, lean_object* v_a_5705_, lean_object* v___y_5706_){
_start:
{
lean_object* v_res_5707_; 
v_res_5707_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5700_, v_a_5701_, v_as_5702_, v_as_x27_5703_, v_b_5704_, v_a_5705_);
lean_dec(v_as_x27_5703_);
lean_dec(v_as_5702_);
return v_res_5707_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5708_; 
v___x_5708_ = lean_box(0);
return v___x_5708_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5709_; 
v___x_5709_ = lean_box(0);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5717_, lean_object* v_method_5718_, lean_object* v_url_5719_, lean_object* v_headers_5720_, lean_object* v_body_5721_, lean_object* v_backend_5722_, lean_object* v_a_00___x40___internal___hyg_5723_){
_start:
{
lean_object* v_res_5724_; 
v_res_5724_ = lasm_fetch_send(v_p_5717_, v_method_5718_, v_url_5719_, v_headers_5720_, v_body_5721_, v_backend_5722_);
lean_dec_ref(v_backend_5722_);
lean_dec_ref(v_body_5721_);
lean_dec_ref(v_headers_5720_);
lean_dec_ref(v_url_5719_);
lean_dec_ref(v_method_5718_);
lean_dec(v_p_5717_);
return v_res_5724_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5725_, lean_object* v_b_5726_, lean_object* v_x_5727_, lean_object* v_x_5728_){
_start:
{
if (lean_obj_tag(v_x_5728_) == 0)
{
return v_x_5727_;
}
else
{
lean_object* v_head_5729_; lean_object* v_tail_5730_; uint8_t v___y_5732_; lean_object* v___x_5739_; lean_object* v___x_5740_; uint8_t v___x_5741_; 
v_head_5729_ = lean_ctor_get(v_x_5728_, 0);
v_tail_5730_ = lean_ctor_get(v_x_5728_, 1);
v___x_5739_ = lean_nat_add(v_pos_5725_, v_head_5729_);
v___x_5740_ = lean_byte_array_size(v_b_5726_);
v___x_5741_ = lean_nat_dec_lt(v___x_5739_, v___x_5740_);
if (v___x_5741_ == 0)
{
uint8_t v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; uint8_t v___x_5745_; 
lean_dec(v___x_5739_);
v___x_5742_ = 0;
v___x_5743_ = lean_box(v___x_5742_);
v___x_5744_ = l_outOfBounds___redArg(v___x_5743_);
lean_dec(v___x_5743_);
v___x_5745_ = lean_unbox(v___x_5744_);
lean_dec(v___x_5744_);
v___y_5732_ = v___x_5745_;
goto v___jp_5731_;
}
else
{
uint8_t v___x_5746_; 
v___x_5746_ = lean_byte_array_fget(v_b_5726_, v___x_5739_);
lean_dec(v___x_5739_);
v___y_5732_ = v___x_5746_;
goto v___jp_5731_;
}
v___jp_5731_:
{
lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; 
v___x_5733_ = lean_uint8_to_nat(v___y_5732_);
v___x_5734_ = lean_unsigned_to_nat(256u);
v___x_5735_ = lean_nat_pow(v___x_5734_, v_head_5729_);
v___x_5736_ = lean_nat_mul(v___x_5733_, v___x_5735_);
lean_dec(v___x_5735_);
v___x_5737_ = lean_nat_add(v_x_5727_, v___x_5736_);
lean_dec(v___x_5736_);
lean_dec(v_x_5727_);
v_x_5727_ = v___x_5737_;
v_x_5728_ = v_tail_5730_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5747_, lean_object* v_b_5748_, lean_object* v_x_5749_, lean_object* v_x_5750_){
_start:
{
lean_object* v_res_5751_; 
v_res_5751_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5747_, v_b_5748_, v_x_5749_, v_x_5750_);
lean_dec(v_x_5750_);
lean_dec_ref(v_b_5748_);
lean_dec(v_pos_5747_);
return v_res_5751_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5752_; lean_object* v___x_5753_; 
v___x_5752_ = lean_unsigned_to_nat(8u);
v___x_5753_ = l_List_range(v___x_5752_);
return v___x_5753_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5757_, lean_object* v_pos_5758_){
_start:
{
lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; uint8_t v___x_5762_; 
v___x_5759_ = lean_byte_array_size(v_b_5757_);
v___x_5760_ = lean_unsigned_to_nat(8u);
v___x_5761_ = lean_nat_add(v_pos_5758_, v___x_5760_);
v___x_5762_ = lean_nat_dec_lt(v___x_5759_, v___x_5761_);
lean_dec(v___x_5761_);
if (v___x_5762_ == 0)
{
lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5763_ = lean_unsigned_to_nat(0u);
v___x_5764_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5765_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5758_, v_b_5757_, v___x_5763_, v___x_5764_);
v___x_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5766_, 0, v___x_5765_);
return v___x_5766_;
}
else
{
lean_object* v___x_5767_; 
v___x_5767_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5768_, lean_object* v_pos_5769_){
_start:
{
lean_object* v_res_5770_; 
v_res_5770_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5768_, v_pos_5769_);
lean_dec(v_pos_5769_);
lean_dec_ref(v_b_5768_);
return v_res_5770_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5771_, lean_object* v_a_5772_){
_start:
{
if (lean_obj_tag(v_a_5771_) == 0)
{
lean_object* v___x_5773_; 
v___x_5773_ = l_List_reverse___redArg(v_a_5772_);
return v___x_5773_;
}
else
{
lean_object* v_head_5774_; lean_object* v_tail_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5791_; 
v_head_5774_ = lean_ctor_get(v_a_5771_, 0);
v_tail_5775_ = lean_ctor_get(v_a_5771_, 1);
v_isSharedCheck_5791_ = !lean_is_exclusive(v_a_5771_);
if (v_isSharedCheck_5791_ == 0)
{
v___x_5777_ = v_a_5771_;
v_isShared_5778_ = v_isSharedCheck_5791_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_tail_5775_);
lean_inc(v_head_5774_);
lean_dec(v_a_5771_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5791_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
uint8_t v___y_5780_; uint8_t v___x_5786_; uint8_t v___x_5787_; uint8_t v___x_5788_; 
v___x_5786_ = 128;
v___x_5787_ = lean_unbox(v_head_5774_);
v___x_5788_ = lean_uint8_dec_lt(v___x_5787_, v___x_5786_);
if (v___x_5788_ == 0)
{
uint8_t v___x_5789_; 
lean_dec(v_head_5774_);
v___x_5789_ = 63;
v___y_5780_ = v___x_5789_;
goto v___jp_5779_;
}
else
{
uint8_t v___x_5790_; 
v___x_5790_ = lean_unbox(v_head_5774_);
lean_dec(v_head_5774_);
v___y_5780_ = v___x_5790_;
goto v___jp_5779_;
}
v___jp_5779_:
{
lean_object* v___x_5781_; lean_object* v___x_5783_; 
v___x_5781_ = lean_box(v___y_5780_);
if (v_isShared_5778_ == 0)
{
lean_ctor_set(v___x_5777_, 1, v_a_5772_);
lean_ctor_set(v___x_5777_, 0, v___x_5781_);
v___x_5783_ = v___x_5777_;
goto v_reusejp_5782_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5781_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v_a_5772_);
v___x_5783_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5782_;
}
v_reusejp_5782_:
{
v_a_5771_ = v_tail_5775_;
v_a_5772_ = v___x_5783_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5794_, lean_object* v_pos_5795_, lean_object* v_n_5796_){
_start:
{
lean_object* v___x_5797_; lean_object* v___x_5798_; uint8_t v___x_5799_; 
v___x_5797_ = lean_byte_array_size(v_b_5794_);
v___x_5798_ = lean_nat_add(v_pos_5795_, v_n_5796_);
v___x_5799_ = lean_nat_dec_lt(v___x_5797_, v___x_5798_);
if (v___x_5799_ == 0)
{
lean_object* v___x_5800_; uint8_t v___x_5801_; 
v___x_5800_ = l_ByteArray_extract(v_b_5794_, v_pos_5795_, v___x_5798_);
lean_dec(v___x_5798_);
v___x_5801_ = lean_string_validate_utf8(v___x_5800_);
if (v___x_5801_ == 0)
{
lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; uint8_t v___x_5806_; 
v___x_5802_ = l_ByteArray_toList(v___x_5800_);
lean_dec_ref(v___x_5800_);
v___x_5803_ = lean_box(0);
v___x_5804_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5802_, v___x_5803_);
v___x_5805_ = l_List_toByteArray(v___x_5804_);
lean_dec(v___x_5804_);
v___x_5806_ = lean_string_validate_utf8(v___x_5805_);
if (v___x_5806_ == 0)
{
lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; 
lean_dec_ref(v___x_5805_);
v___x_5807_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7);
v___x_5808_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5807_);
v___x_5809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5809_, 0, v___x_5808_);
return v___x_5809_;
}
else
{
lean_object* v___x_5810_; lean_object* v___x_5811_; 
v___x_5810_ = lean_string_from_utf8_unchecked(v___x_5805_);
v___x_5811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5811_, 0, v___x_5810_);
return v___x_5811_;
}
}
else
{
lean_object* v___x_5812_; lean_object* v___x_5813_; 
v___x_5812_ = lean_string_from_utf8_unchecked(v___x_5800_);
v___x_5813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5813_, 0, v___x_5812_);
return v___x_5813_;
}
}
else
{
lean_object* v___x_5814_; 
lean_dec(v___x_5798_);
lean_dec(v_pos_5795_);
v___x_5814_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5814_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5815_, lean_object* v_pos_5816_, lean_object* v_n_5817_){
_start:
{
lean_object* v_res_5818_; 
v_res_5818_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5815_, v_pos_5816_, v_n_5817_);
lean_dec(v_n_5817_);
lean_dec_ref(v_b_5815_);
return v_res_5818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5819_, lean_object* v_range_5820_, lean_object* v_b_5821_, lean_object* v_i_5822_){
_start:
{
lean_object* v_stop_5823_; lean_object* v_step_5824_; uint8_t v___x_5825_; 
v_stop_5823_ = lean_ctor_get(v_range_5820_, 1);
v_step_5824_ = lean_ctor_get(v_range_5820_, 2);
v___x_5825_ = lean_nat_dec_lt(v_i_5822_, v_stop_5823_);
if (v___x_5825_ == 0)
{
lean_object* v___x_5826_; 
lean_dec(v_i_5822_);
v___x_5826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5826_, 0, v_b_5821_);
return v___x_5826_;
}
else
{
lean_object* v_fst_5827_; lean_object* v_snd_5828_; lean_object* v___x_5830_; uint8_t v_isShared_5831_; uint8_t v_isSharedCheck_5884_; 
v_fst_5827_ = lean_ctor_get(v_b_5821_, 0);
v_snd_5828_ = lean_ctor_get(v_b_5821_, 1);
v_isSharedCheck_5884_ = !lean_is_exclusive(v_b_5821_);
if (v_isSharedCheck_5884_ == 0)
{
v___x_5830_ = v_b_5821_;
v_isShared_5831_ = v_isSharedCheck_5884_;
goto v_resetjp_5829_;
}
else
{
lean_inc(v_snd_5828_);
lean_inc(v_fst_5827_);
lean_dec(v_b_5821_);
v___x_5830_ = lean_box(0);
v_isShared_5831_ = v_isSharedCheck_5884_;
goto v_resetjp_5829_;
}
v_resetjp_5829_:
{
lean_object* v___x_5832_; 
v___x_5832_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5819_, v_fst_5827_);
if (lean_obj_tag(v___x_5832_) == 0)
{
lean_object* v_a_5833_; lean_object* v___x_5835_; uint8_t v_isShared_5836_; uint8_t v_isSharedCheck_5840_; 
lean_del_object(v___x_5830_);
lean_dec(v_snd_5828_);
lean_dec(v_fst_5827_);
lean_dec(v_i_5822_);
v_a_5833_ = lean_ctor_get(v___x_5832_, 0);
v_isSharedCheck_5840_ = !lean_is_exclusive(v___x_5832_);
if (v_isSharedCheck_5840_ == 0)
{
v___x_5835_ = v___x_5832_;
v_isShared_5836_ = v_isSharedCheck_5840_;
goto v_resetjp_5834_;
}
else
{
lean_inc(v_a_5833_);
lean_dec(v___x_5832_);
v___x_5835_ = lean_box(0);
v_isShared_5836_ = v_isSharedCheck_5840_;
goto v_resetjp_5834_;
}
v_resetjp_5834_:
{
lean_object* v___x_5838_; 
if (v_isShared_5836_ == 0)
{
v___x_5838_ = v___x_5835_;
goto v_reusejp_5837_;
}
else
{
lean_object* v_reuseFailAlloc_5839_; 
v_reuseFailAlloc_5839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5839_, 0, v_a_5833_);
v___x_5838_ = v_reuseFailAlloc_5839_;
goto v_reusejp_5837_;
}
v_reusejp_5837_:
{
return v___x_5838_;
}
}
}
else
{
lean_object* v_a_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v_a_5841_ = lean_ctor_get(v___x_5832_, 0);
lean_inc(v_a_5841_);
lean_dec_ref_known(v___x_5832_, 1);
v___x_5842_ = lean_unsigned_to_nat(8u);
v___x_5843_ = lean_nat_add(v_fst_5827_, v___x_5842_);
lean_dec(v_fst_5827_);
lean_inc(v___x_5843_);
v___x_5844_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5819_, v___x_5843_, v_a_5841_);
if (lean_obj_tag(v___x_5844_) == 0)
{
lean_object* v_a_5845_; lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5852_; 
lean_dec(v___x_5843_);
lean_dec(v_a_5841_);
lean_del_object(v___x_5830_);
lean_dec(v_snd_5828_);
lean_dec(v_i_5822_);
v_a_5845_ = lean_ctor_get(v___x_5844_, 0);
v_isSharedCheck_5852_ = !lean_is_exclusive(v___x_5844_);
if (v_isSharedCheck_5852_ == 0)
{
v___x_5847_ = v___x_5844_;
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
else
{
lean_inc(v_a_5845_);
lean_dec(v___x_5844_);
v___x_5847_ = lean_box(0);
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
v_resetjp_5846_:
{
lean_object* v___x_5850_; 
if (v_isShared_5848_ == 0)
{
v___x_5850_ = v___x_5847_;
goto v_reusejp_5849_;
}
else
{
lean_object* v_reuseFailAlloc_5851_; 
v_reuseFailAlloc_5851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5851_, 0, v_a_5845_);
v___x_5850_ = v_reuseFailAlloc_5851_;
goto v_reusejp_5849_;
}
v_reusejp_5849_:
{
return v___x_5850_;
}
}
}
else
{
lean_object* v_a_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; 
v_a_5853_ = lean_ctor_get(v___x_5844_, 0);
lean_inc(v_a_5853_);
lean_dec_ref_known(v___x_5844_, 1);
v___x_5854_ = lean_nat_add(v___x_5843_, v_a_5841_);
lean_dec(v_a_5841_);
lean_dec(v___x_5843_);
v___x_5855_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5819_, v___x_5854_);
if (lean_obj_tag(v___x_5855_) == 0)
{
lean_object* v_a_5856_; lean_object* v___x_5858_; uint8_t v_isShared_5859_; uint8_t v_isSharedCheck_5863_; 
lean_dec(v___x_5854_);
lean_dec(v_a_5853_);
lean_del_object(v___x_5830_);
lean_dec(v_snd_5828_);
lean_dec(v_i_5822_);
v_a_5856_ = lean_ctor_get(v___x_5855_, 0);
v_isSharedCheck_5863_ = !lean_is_exclusive(v___x_5855_);
if (v_isSharedCheck_5863_ == 0)
{
v___x_5858_ = v___x_5855_;
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
else
{
lean_inc(v_a_5856_);
lean_dec(v___x_5855_);
v___x_5858_ = lean_box(0);
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
v_resetjp_5857_:
{
lean_object* v___x_5861_; 
if (v_isShared_5859_ == 0)
{
v___x_5861_ = v___x_5858_;
goto v_reusejp_5860_;
}
else
{
lean_object* v_reuseFailAlloc_5862_; 
v_reuseFailAlloc_5862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5862_, 0, v_a_5856_);
v___x_5861_ = v_reuseFailAlloc_5862_;
goto v_reusejp_5860_;
}
v_reusejp_5860_:
{
return v___x_5861_;
}
}
}
else
{
lean_object* v_a_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; 
v_a_5864_ = lean_ctor_get(v___x_5855_, 0);
lean_inc(v_a_5864_);
lean_dec_ref_known(v___x_5855_, 1);
v___x_5865_ = lean_nat_add(v___x_5854_, v___x_5842_);
lean_dec(v___x_5854_);
lean_inc(v___x_5865_);
v___x_5866_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5819_, v___x_5865_, v_a_5864_);
if (lean_obj_tag(v___x_5866_) == 0)
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5874_; 
lean_dec(v___x_5865_);
lean_dec(v_a_5864_);
lean_dec(v_a_5853_);
lean_del_object(v___x_5830_);
lean_dec(v_snd_5828_);
lean_dec(v_i_5822_);
v_a_5867_ = lean_ctor_get(v___x_5866_, 0);
v_isSharedCheck_5874_ = !lean_is_exclusive(v___x_5866_);
if (v_isSharedCheck_5874_ == 0)
{
v___x_5869_ = v___x_5866_;
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v___x_5866_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5874_;
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
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
return v___x_5872_;
}
}
}
else
{
lean_object* v_a_5875_; lean_object* v___x_5876_; lean_object* v___x_5878_; 
v_a_5875_ = lean_ctor_get(v___x_5866_, 0);
lean_inc(v_a_5875_);
lean_dec_ref_known(v___x_5866_, 1);
v___x_5876_ = lean_nat_add(v___x_5865_, v_a_5864_);
lean_dec(v_a_5864_);
lean_dec(v___x_5865_);
if (v_isShared_5831_ == 0)
{
lean_ctor_set(v___x_5830_, 1, v_a_5875_);
lean_ctor_set(v___x_5830_, 0, v_a_5853_);
v___x_5878_ = v___x_5830_;
goto v_reusejp_5877_;
}
else
{
lean_object* v_reuseFailAlloc_5883_; 
v_reuseFailAlloc_5883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5883_, 0, v_a_5853_);
lean_ctor_set(v_reuseFailAlloc_5883_, 1, v_a_5875_);
v___x_5878_ = v_reuseFailAlloc_5883_;
goto v_reusejp_5877_;
}
v_reusejp_5877_:
{
lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; 
v___x_5879_ = lean_array_push(v_snd_5828_, v___x_5878_);
v___x_5880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5880_, 0, v___x_5876_);
lean_ctor_set(v___x_5880_, 1, v___x_5879_);
v___x_5881_ = lean_nat_add(v_i_5822_, v_step_5824_);
lean_dec(v_i_5822_);
v_b_5821_ = v___x_5880_;
v_i_5822_ = v___x_5881_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5885_, lean_object* v_range_5886_, lean_object* v_b_5887_, lean_object* v_i_5888_){
_start:
{
lean_object* v_res_5889_; 
v_res_5889_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5885_, v_range_5886_, v_b_5887_, v_i_5888_);
lean_dec_ref(v_range_5886_);
lean_dec_ref(v_b_5885_);
return v_res_5889_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5893_){
_start:
{
lean_object* v___x_5894_; lean_object* v___x_5895_; 
v___x_5894_ = lean_unsigned_to_nat(0u);
v___x_5895_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5893_, v___x_5894_);
if (lean_obj_tag(v___x_5895_) == 0)
{
lean_object* v_a_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5903_; 
v_a_5896_ = lean_ctor_get(v___x_5895_, 0);
v_isSharedCheck_5903_ = !lean_is_exclusive(v___x_5895_);
if (v_isSharedCheck_5903_ == 0)
{
v___x_5898_ = v___x_5895_;
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_a_5896_);
lean_dec(v___x_5895_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
lean_object* v___x_5901_; 
if (v_isShared_5899_ == 0)
{
v___x_5901_ = v___x_5898_;
goto v_reusejp_5900_;
}
else
{
lean_object* v_reuseFailAlloc_5902_; 
v_reuseFailAlloc_5902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5902_, 0, v_a_5896_);
v___x_5901_ = v_reuseFailAlloc_5902_;
goto v_reusejp_5900_;
}
v_reusejp_5900_:
{
return v___x_5901_;
}
}
}
else
{
lean_object* v_a_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; 
v_a_5904_ = lean_ctor_get(v___x_5895_, 0);
lean_inc(v_a_5904_);
lean_dec_ref_known(v___x_5895_, 1);
v___x_5905_ = lean_unsigned_to_nat(8u);
v___x_5906_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5893_, v___x_5905_);
if (lean_obj_tag(v___x_5906_) == 0)
{
lean_object* v_a_5907_; lean_object* v___x_5909_; uint8_t v_isShared_5910_; uint8_t v_isSharedCheck_5914_; 
lean_dec(v_a_5904_);
v_a_5907_ = lean_ctor_get(v___x_5906_, 0);
v_isSharedCheck_5914_ = !lean_is_exclusive(v___x_5906_);
if (v_isSharedCheck_5914_ == 0)
{
v___x_5909_ = v___x_5906_;
v_isShared_5910_ = v_isSharedCheck_5914_;
goto v_resetjp_5908_;
}
else
{
lean_inc(v_a_5907_);
lean_dec(v___x_5906_);
v___x_5909_ = lean_box(0);
v_isShared_5910_ = v_isSharedCheck_5914_;
goto v_resetjp_5908_;
}
v_resetjp_5908_:
{
lean_object* v___x_5912_; 
if (v_isShared_5910_ == 0)
{
v___x_5912_ = v___x_5909_;
goto v_reusejp_5911_;
}
else
{
lean_object* v_reuseFailAlloc_5913_; 
v_reuseFailAlloc_5913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5913_, 0, v_a_5907_);
v___x_5912_ = v_reuseFailAlloc_5913_;
goto v_reusejp_5911_;
}
v_reusejp_5911_:
{
return v___x_5912_;
}
}
}
else
{
lean_object* v_a_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v_a_5915_ = lean_ctor_get(v___x_5906_, 0);
lean_inc(v_a_5915_);
lean_dec_ref_known(v___x_5906_, 1);
v___x_5916_ = lean_unsigned_to_nat(1u);
v___x_5917_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5917_, 0, v___x_5894_);
lean_ctor_set(v___x_5917_, 1, v_a_5915_);
lean_ctor_set(v___x_5917_, 2, v___x_5916_);
v___x_5918_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5919_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5893_, v___x_5917_, v___x_5918_, v___x_5894_);
lean_dec_ref_known(v___x_5917_, 3);
if (lean_obj_tag(v___x_5919_) == 0)
{
lean_object* v_a_5920_; lean_object* v___x_5922_; uint8_t v_isShared_5923_; uint8_t v_isSharedCheck_5927_; 
lean_dec(v_a_5904_);
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
lean_object* v_a_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_5942_; 
v_a_5928_ = lean_ctor_get(v___x_5919_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v___x_5919_);
if (v_isSharedCheck_5942_ == 0)
{
v___x_5930_ = v___x_5919_;
v_isShared_5931_ = v_isSharedCheck_5942_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_a_5928_);
lean_dec(v___x_5919_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_5942_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
lean_object* v_fst_5932_; lean_object* v_snd_5933_; uint16_t v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5940_; 
v_fst_5932_ = lean_ctor_get(v_a_5928_, 0);
lean_inc(v_fst_5932_);
v_snd_5933_ = lean_ctor_get(v_a_5928_, 1);
lean_inc(v_snd_5933_);
lean_dec(v_a_5928_);
v___x_5934_ = lean_uint16_of_nat(v_a_5904_);
lean_dec(v_a_5904_);
v___x_5935_ = lean_byte_array_size(v_b_5893_);
v___x_5936_ = l_ByteArray_extract(v_b_5893_, v_fst_5932_, v___x_5935_);
v___x_5937_ = lean_box(0);
v___x_5938_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5938_, 0, v_snd_5933_);
lean_ctor_set(v___x_5938_, 1, v___x_5936_);
lean_ctor_set(v___x_5938_, 2, v___x_5937_);
lean_ctor_set_uint16(v___x_5938_, sizeof(void*)*3, v___x_5934_);
if (v_isShared_5931_ == 0)
{
lean_ctor_set(v___x_5930_, 0, v___x_5938_);
v___x_5940_ = v___x_5930_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v___x_5938_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
return v___x_5940_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5943_){
_start:
{
lean_object* v_res_5944_; 
v_res_5944_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5943_);
lean_dec_ref(v_b_5943_);
return v_res_5944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5945_, lean_object* v_range_5946_, lean_object* v_b_5947_, lean_object* v_i_5948_, lean_object* v_hs_5949_, lean_object* v_hl_5950_){
_start:
{
lean_object* v___x_5951_; 
v___x_5951_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5945_, v_range_5946_, v_b_5947_, v_i_5948_);
return v___x_5951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5952_, lean_object* v_range_5953_, lean_object* v_b_5954_, lean_object* v_i_5955_, lean_object* v_hs_5956_, lean_object* v_hl_5957_){
_start:
{
lean_object* v_res_5958_; 
v_res_5958_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5952_, v_range_5953_, v_b_5954_, v_i_5955_, v_hs_5956_, v_hl_5957_);
lean_dec_ref(v_range_5953_);
lean_dec_ref(v_b_5952_);
return v_res_5958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5959_, lean_object* v_headers_5960_, lean_object* v_x_5961_){
_start:
{
if (lean_obj_tag(v_x_5961_) == 0)
{
lean_object* v_a_5963_; lean_object* v___x_5965_; uint8_t v_isShared_5966_; uint8_t v_isSharedCheck_5971_; 
lean_dec_ref(v_headers_5960_);
v_a_5963_ = lean_ctor_get(v_x_5961_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v_x_5961_);
if (v_isSharedCheck_5971_ == 0)
{
v___x_5965_ = v_x_5961_;
v_isShared_5966_ = v_isSharedCheck_5971_;
goto v_resetjp_5964_;
}
else
{
lean_inc(v_a_5963_);
lean_dec(v_x_5961_);
v___x_5965_ = lean_box(0);
v_isShared_5966_ = v_isSharedCheck_5971_;
goto v_resetjp_5964_;
}
v_resetjp_5964_:
{
lean_object* v___x_5968_; 
if (v_isShared_5966_ == 0)
{
v___x_5968_ = v___x_5965_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5970_; 
v_reuseFailAlloc_5970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5970_, 0, v_a_5963_);
v___x_5968_ = v_reuseFailAlloc_5970_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
lean_object* v___x_5969_; 
v___x_5969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5968_);
return v___x_5969_;
}
}
}
else
{
lean_object* v_a_5972_; lean_object* v___x_5974_; uint8_t v_isShared_5975_; uint8_t v_isSharedCheck_5982_; 
v_a_5972_ = lean_ctor_get(v_x_5961_, 0);
v_isSharedCheck_5982_ = !lean_is_exclusive(v_x_5961_);
if (v_isSharedCheck_5982_ == 0)
{
v___x_5974_ = v_x_5961_;
v_isShared_5975_ = v_isSharedCheck_5982_;
goto v_resetjp_5973_;
}
else
{
lean_inc(v_a_5972_);
lean_dec(v_x_5961_);
v___x_5974_ = lean_box(0);
v_isShared_5975_ = v_isSharedCheck_5982_;
goto v_resetjp_5973_;
}
v_resetjp_5973_:
{
lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5979_; 
v___x_5976_ = lean_box(0);
v___x_5977_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5977_, 0, v_headers_5960_);
lean_ctor_set(v___x_5977_, 1, v_a_5972_);
lean_ctor_set(v___x_5977_, 2, v___x_5976_);
lean_ctor_set_uint16(v___x_5977_, sizeof(void*)*3, v___y_5959_);
if (v_isShared_5975_ == 0)
{
lean_ctor_set(v___x_5974_, 0, v___x_5977_);
v___x_5979_ = v___x_5974_;
goto v_reusejp_5978_;
}
else
{
lean_object* v_reuseFailAlloc_5981_; 
v_reuseFailAlloc_5981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5981_, 0, v___x_5977_);
v___x_5979_ = v_reuseFailAlloc_5981_;
goto v_reusejp_5978_;
}
v_reusejp_5978_:
{
lean_object* v___x_5980_; 
v___x_5980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5979_);
return v___x_5980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5983_, lean_object* v_headers_5984_, lean_object* v_x_5985_, lean_object* v___y_5986_){
_start:
{
uint16_t v___y_2893__boxed_5987_; lean_object* v_res_5988_; 
v___y_2893__boxed_5987_ = lean_unbox(v___y_5983_);
v_res_5988_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2893__boxed_5987_, v_headers_5984_, v_x_5985_);
return v_res_5988_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5989_, lean_object* v___f_5990_, lean_object* v_x_5991_){
_start:
{
if (lean_obj_tag(v_x_5991_) == 0)
{
lean_object* v_a_5993_; lean_object* v___x_5995_; uint8_t v_isShared_5996_; uint8_t v_isSharedCheck_6001_; 
lean_dec_ref(v___f_5990_);
lean_dec(v_a_5989_);
v_a_5993_ = lean_ctor_get(v_x_5991_, 0);
v_isSharedCheck_6001_ = !lean_is_exclusive(v_x_5991_);
if (v_isSharedCheck_6001_ == 0)
{
v___x_5995_ = v_x_5991_;
v_isShared_5996_ = v_isSharedCheck_6001_;
goto v_resetjp_5994_;
}
else
{
lean_inc(v_a_5993_);
lean_dec(v_x_5991_);
v___x_5995_ = lean_box(0);
v_isShared_5996_ = v_isSharedCheck_6001_;
goto v_resetjp_5994_;
}
v_resetjp_5994_:
{
lean_object* v___x_5998_; 
if (v_isShared_5996_ == 0)
{
v___x_5998_ = v___x_5995_;
goto v_reusejp_5997_;
}
else
{
lean_object* v_reuseFailAlloc_6000_; 
v_reuseFailAlloc_6000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6000_, 0, v_a_5993_);
v___x_5998_ = v_reuseFailAlloc_6000_;
goto v_reusejp_5997_;
}
v_reusejp_5997_:
{
lean_object* v___x_5999_; 
v___x_5999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5999_, 0, v___x_5998_);
return v___x_5999_;
}
}
}
else
{
lean_object* v_a_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6026_; 
v_a_6002_ = lean_ctor_get(v_x_5991_, 0);
v_isSharedCheck_6026_ = !lean_is_exclusive(v_x_5991_);
if (v_isSharedCheck_6026_ == 0)
{
v___x_6004_ = v_x_5991_;
v_isShared_6005_ = v_isSharedCheck_6026_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_a_6002_);
lean_dec(v_x_5991_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6026_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; uint8_t v___x_6012_; lean_object* v_val_6014_; lean_object* v___x_6017_; 
v___x_6006_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6007_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6007_, 0, v_a_5989_);
lean_ctor_set(v___x_6007_, 1, v___x_6006_);
v___x_6008_ = lean_unsigned_to_nat(1u);
v___x_6009_ = lean_mk_empty_array_with_capacity(v___x_6008_);
v___x_6010_ = lean_array_push(v___x_6009_, v___x_6007_);
v___x_6011_ = lean_unsigned_to_nat(0u);
v___x_6012_ = 0;
v___x_6017_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_6002_, v___x_6010_);
if (lean_obj_tag(v___x_6017_) == 0)
{
lean_object* v_a_6018_; lean_object* v___x_6020_; 
v_a_6018_ = lean_ctor_get(v___x_6017_, 0);
lean_inc(v_a_6018_);
lean_dec_ref_known(v___x_6017_, 1);
if (v_isShared_6005_ == 0)
{
lean_ctor_set(v___x_6004_, 0, v_a_6018_);
v___x_6020_ = v___x_6004_;
goto v_reusejp_6019_;
}
else
{
lean_object* v_reuseFailAlloc_6021_; 
v_reuseFailAlloc_6021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6021_, 0, v_a_6018_);
v___x_6020_ = v_reuseFailAlloc_6021_;
goto v_reusejp_6019_;
}
v_reusejp_6019_:
{
v_val_6014_ = v___x_6020_;
goto v___jp_6013_;
}
}
else
{
lean_object* v_a_6022_; lean_object* v___x_6024_; 
v_a_6022_ = lean_ctor_get(v___x_6017_, 0);
lean_inc(v_a_6022_);
lean_dec_ref_known(v___x_6017_, 1);
if (v_isShared_6005_ == 0)
{
lean_ctor_set_tag(v___x_6004_, 0);
lean_ctor_set(v___x_6004_, 0, v_a_6022_);
v___x_6024_ = v___x_6004_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v_a_6022_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
v_val_6014_ = v___x_6024_;
goto v___jp_6013_;
}
}
v___jp_6013_:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; 
v___x_6015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6015_, 0, v_val_6014_);
v___x_6016_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6011_, v___x_6012_, v___x_6015_, v___f_5990_);
return v___x_6016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_6027_, lean_object* v___f_6028_, lean_object* v_x_6029_, lean_object* v___y_6030_){
_start:
{
lean_object* v_res_6031_; 
v_res_6031_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_6027_, v___f_6028_, v_x_6029_);
return v_res_6031_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_6032_, lean_object* v_a_6033_, lean_object* v_x_6034_){
_start:
{
if (lean_obj_tag(v_x_6034_) == 0)
{
lean_object* v_a_6036_; lean_object* v___x_6038_; uint8_t v_isShared_6039_; uint8_t v_isSharedCheck_6044_; 
lean_dec(v_a_6033_);
lean_dec_ref(v___f_6032_);
v_a_6036_ = lean_ctor_get(v_x_6034_, 0);
v_isSharedCheck_6044_ = !lean_is_exclusive(v_x_6034_);
if (v_isSharedCheck_6044_ == 0)
{
v___x_6038_ = v_x_6034_;
v_isShared_6039_ = v_isSharedCheck_6044_;
goto v_resetjp_6037_;
}
else
{
lean_inc(v_a_6036_);
lean_dec(v_x_6034_);
v___x_6038_ = lean_box(0);
v_isShared_6039_ = v_isSharedCheck_6044_;
goto v_resetjp_6037_;
}
v_resetjp_6037_:
{
lean_object* v___x_6041_; 
if (v_isShared_6039_ == 0)
{
v___x_6041_ = v___x_6038_;
goto v_reusejp_6040_;
}
else
{
lean_object* v_reuseFailAlloc_6043_; 
v_reuseFailAlloc_6043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6043_, 0, v_a_6036_);
v___x_6041_ = v_reuseFailAlloc_6043_;
goto v_reusejp_6040_;
}
v_reusejp_6040_:
{
lean_object* v___x_6042_; 
v___x_6042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6042_, 0, v___x_6041_);
return v___x_6042_;
}
}
}
else
{
lean_object* v_a_6045_; lean_object* v___x_6047_; uint8_t v_isShared_6048_; uint8_t v_isSharedCheck_6066_; 
v_a_6045_ = lean_ctor_get(v_x_6034_, 0);
v_isSharedCheck_6066_ = !lean_is_exclusive(v_x_6034_);
if (v_isSharedCheck_6066_ == 0)
{
v___x_6047_ = v_x_6034_;
v_isShared_6048_ = v_isSharedCheck_6066_;
goto v_resetjp_6046_;
}
else
{
lean_inc(v_a_6045_);
lean_dec(v_x_6034_);
v___x_6047_ = lean_box(0);
v_isShared_6048_ = v_isSharedCheck_6066_;
goto v_resetjp_6046_;
}
v_resetjp_6046_:
{
lean_object* v___f_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; uint8_t v___x_6052_; lean_object* v_val_6054_; lean_object* v___x_6057_; 
v___f_6049_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_6049_, 0, v_a_6045_);
lean_closure_set(v___f_6049_, 1, v___f_6032_);
v___x_6050_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_6051_ = lean_unsigned_to_nat(0u);
v___x_6052_ = 0;
v___x_6057_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6033_, v___x_6050_);
if (lean_obj_tag(v___x_6057_) == 0)
{
lean_object* v_a_6058_; lean_object* v___x_6060_; 
v_a_6058_ = lean_ctor_get(v___x_6057_, 0);
lean_inc(v_a_6058_);
lean_dec_ref_known(v___x_6057_, 1);
if (v_isShared_6048_ == 0)
{
lean_ctor_set(v___x_6047_, 0, v_a_6058_);
v___x_6060_ = v___x_6047_;
goto v_reusejp_6059_;
}
else
{
lean_object* v_reuseFailAlloc_6061_; 
v_reuseFailAlloc_6061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6061_, 0, v_a_6058_);
v___x_6060_ = v_reuseFailAlloc_6061_;
goto v_reusejp_6059_;
}
v_reusejp_6059_:
{
v_val_6054_ = v___x_6060_;
goto v___jp_6053_;
}
}
else
{
lean_object* v_a_6062_; lean_object* v___x_6064_; 
v_a_6062_ = lean_ctor_get(v___x_6057_, 0);
lean_inc(v_a_6062_);
lean_dec_ref_known(v___x_6057_, 1);
if (v_isShared_6048_ == 0)
{
lean_ctor_set_tag(v___x_6047_, 0);
lean_ctor_set(v___x_6047_, 0, v_a_6062_);
v___x_6064_ = v___x_6047_;
goto v_reusejp_6063_;
}
else
{
lean_object* v_reuseFailAlloc_6065_; 
v_reuseFailAlloc_6065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6065_, 0, v_a_6062_);
v___x_6064_ = v_reuseFailAlloc_6065_;
goto v_reusejp_6063_;
}
v_reusejp_6063_:
{
v_val_6054_ = v___x_6064_;
goto v___jp_6053_;
}
}
v___jp_6053_:
{
lean_object* v___x_6055_; lean_object* v___x_6056_; 
v___x_6055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6055_, 0, v_val_6054_);
v___x_6056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6051_, v___x_6052_, v___x_6055_, v___f_6049_);
return v___x_6056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_6067_, lean_object* v_a_6068_, lean_object* v_x_6069_, lean_object* v___y_6070_){
_start:
{
lean_object* v_res_6071_; 
v_res_6071_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_6067_, v_a_6068_, v_x_6069_);
return v_res_6071_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_6072_, lean_object* v_a_6073_, lean_object* v_a_6074_, lean_object* v_headers_6075_){
_start:
{
lean_object* v___x_6077_; lean_object* v___f_6078_; lean_object* v___f_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; uint8_t v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; 
v___x_6077_ = lean_box(v___y_6072_);
v___f_6078_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_6078_, 0, v___x_6077_);
lean_closure_set(v___f_6078_, 1, v_headers_6075_);
v___f_6079_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_6079_, 0, v___f_6078_);
lean_closure_set(v___f_6079_, 1, v_a_6073_);
v___x_6080_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_6081_ = lean_unsigned_to_nat(0u);
v___x_6082_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_6083_ = 0;
v___x_6084_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_6074_, v___x_6080_, v___x_6082_);
v___x_6085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6081_, v___x_6083_, v___x_6084_, v___f_6079_);
return v___x_6085_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_6086_, lean_object* v_a_6087_, lean_object* v_a_6088_, lean_object* v_headers_6089_, lean_object* v___y_6090_){
_start:
{
uint16_t v___y_3101__boxed_6091_; lean_object* v_res_6092_; 
v___y_3101__boxed_6091_ = lean_unbox(v___y_6086_);
v_res_6092_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3101__boxed_6091_, v_a_6087_, v_a_6088_, v_headers_6089_);
return v_res_6092_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_6093_, lean_object* v_x_6094_){
_start:
{
if (lean_obj_tag(v_x_6094_) == 0)
{
lean_object* v_a_6096_; lean_object* v___x_6098_; uint8_t v_isShared_6099_; uint8_t v_isSharedCheck_6104_; 
lean_dec_ref(v___f_6093_);
v_a_6096_ = lean_ctor_get(v_x_6094_, 0);
v_isSharedCheck_6104_ = !lean_is_exclusive(v_x_6094_);
if (v_isSharedCheck_6104_ == 0)
{
v___x_6098_ = v_x_6094_;
v_isShared_6099_ = v_isSharedCheck_6104_;
goto v_resetjp_6097_;
}
else
{
lean_inc(v_a_6096_);
lean_dec(v_x_6094_);
v___x_6098_ = lean_box(0);
v_isShared_6099_ = v_isSharedCheck_6104_;
goto v_resetjp_6097_;
}
v_resetjp_6097_:
{
lean_object* v___x_6101_; 
if (v_isShared_6099_ == 0)
{
v___x_6101_ = v___x_6098_;
goto v_reusejp_6100_;
}
else
{
lean_object* v_reuseFailAlloc_6103_; 
v_reuseFailAlloc_6103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6103_, 0, v_a_6096_);
v___x_6101_ = v_reuseFailAlloc_6103_;
goto v_reusejp_6100_;
}
v_reusejp_6100_:
{
lean_object* v___x_6102_; 
v___x_6102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6102_, 0, v___x_6101_);
return v___x_6102_;
}
}
}
else
{
lean_object* v_a_6105_; lean_object* v___x_6106_; 
v_a_6105_ = lean_ctor_get(v_x_6094_, 0);
lean_inc(v_a_6105_);
lean_dec_ref_known(v_x_6094_, 1);
v___x_6106_ = lean_apply_2(v___f_6093_, v_a_6105_, lean_box(0));
return v___x_6106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_6107_, lean_object* v_x_6108_, lean_object* v___y_6109_){
_start:
{
lean_object* v_res_6110_; 
v_res_6110_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_6107_, v_x_6108_);
return v_res_6110_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_6111_, lean_object* v___f_6112_, lean_object* v_x_6113_){
_start:
{
if (lean_obj_tag(v_x_6113_) == 0)
{
lean_object* v_a_6115_; lean_object* v___x_6117_; uint8_t v_isShared_6118_; uint8_t v_isSharedCheck_6123_; 
lean_dec_ref(v___f_6112_);
lean_dec(v_value_6111_);
v_a_6115_ = lean_ctor_get(v_x_6113_, 0);
v_isSharedCheck_6123_ = !lean_is_exclusive(v_x_6113_);
if (v_isSharedCheck_6123_ == 0)
{
v___x_6117_ = v_x_6113_;
v_isShared_6118_ = v_isSharedCheck_6123_;
goto v_resetjp_6116_;
}
else
{
lean_inc(v_a_6115_);
lean_dec(v_x_6113_);
v___x_6117_ = lean_box(0);
v_isShared_6118_ = v_isSharedCheck_6123_;
goto v_resetjp_6116_;
}
v_resetjp_6116_:
{
lean_object* v___x_6120_; 
if (v_isShared_6118_ == 0)
{
v___x_6120_ = v___x_6117_;
goto v_reusejp_6119_;
}
else
{
lean_object* v_reuseFailAlloc_6122_; 
v_reuseFailAlloc_6122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6122_, 0, v_a_6115_);
v___x_6120_ = v_reuseFailAlloc_6122_;
goto v_reusejp_6119_;
}
v_reusejp_6119_:
{
lean_object* v___x_6121_; 
v___x_6121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6120_);
return v___x_6121_;
}
}
}
else
{
lean_object* v_a_6124_; lean_object* v___x_6126_; uint8_t v_isShared_6127_; uint8_t v_isSharedCheck_6149_; 
v_a_6124_ = lean_ctor_get(v_x_6113_, 0);
v_isSharedCheck_6149_ = !lean_is_exclusive(v_x_6113_);
if (v_isSharedCheck_6149_ == 0)
{
v___x_6126_ = v_x_6113_;
v_isShared_6127_ = v_isSharedCheck_6149_;
goto v_resetjp_6125_;
}
else
{
lean_inc(v_a_6124_);
lean_dec(v_x_6113_);
v___x_6126_ = lean_box(0);
v_isShared_6127_ = v_isSharedCheck_6149_;
goto v_resetjp_6125_;
}
v_resetjp_6125_:
{
lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; uint8_t v___x_6135_; lean_object* v_val_6137_; lean_object* v___x_6140_; 
v___x_6128_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_6129_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6130_, 0, v_value_6111_);
lean_ctor_set(v___x_6130_, 1, v___x_6129_);
v___x_6131_ = lean_unsigned_to_nat(1u);
v___x_6132_ = lean_mk_empty_array_with_capacity(v___x_6131_);
v___x_6133_ = lean_array_push(v___x_6132_, v___x_6130_);
v___x_6134_ = lean_unsigned_to_nat(0u);
v___x_6135_ = 0;
v___x_6140_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_6124_, v___x_6128_, v___x_6133_);
if (lean_obj_tag(v___x_6140_) == 0)
{
lean_object* v_a_6141_; lean_object* v___x_6143_; 
v_a_6141_ = lean_ctor_get(v___x_6140_, 0);
lean_inc(v_a_6141_);
lean_dec_ref_known(v___x_6140_, 1);
if (v_isShared_6127_ == 0)
{
lean_ctor_set(v___x_6126_, 0, v_a_6141_);
v___x_6143_ = v___x_6126_;
goto v_reusejp_6142_;
}
else
{
lean_object* v_reuseFailAlloc_6144_; 
v_reuseFailAlloc_6144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6144_, 0, v_a_6141_);
v___x_6143_ = v_reuseFailAlloc_6144_;
goto v_reusejp_6142_;
}
v_reusejp_6142_:
{
v_val_6137_ = v___x_6143_;
goto v___jp_6136_;
}
}
else
{
lean_object* v_a_6145_; lean_object* v___x_6147_; 
v_a_6145_ = lean_ctor_get(v___x_6140_, 0);
lean_inc(v_a_6145_);
lean_dec_ref_known(v___x_6140_, 1);
if (v_isShared_6127_ == 0)
{
lean_ctor_set_tag(v___x_6126_, 0);
lean_ctor_set(v___x_6126_, 0, v_a_6145_);
v___x_6147_ = v___x_6126_;
goto v_reusejp_6146_;
}
else
{
lean_object* v_reuseFailAlloc_6148_; 
v_reuseFailAlloc_6148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6148_, 0, v_a_6145_);
v___x_6147_ = v_reuseFailAlloc_6148_;
goto v_reusejp_6146_;
}
v_reusejp_6146_:
{
v_val_6137_ = v___x_6147_;
goto v___jp_6136_;
}
}
v___jp_6136_:
{
lean_object* v___x_6138_; lean_object* v___x_6139_; 
v___x_6138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6138_, 0, v_val_6137_);
v___x_6139_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6134_, v___x_6135_, v___x_6138_, v___f_6112_);
return v___x_6139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_6150_, lean_object* v___f_6151_, lean_object* v_x_6152_, lean_object* v___y_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_6150_, v___f_6151_, v_x_6152_);
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_6159_, lean_object* v_a_6160_, lean_object* v___x_6161_, lean_object* v___x_6162_, lean_object* v_x_6163_){
_start:
{
lean_object* v___y_6166_; lean_object* v___y_6167_; uint8_t v___y_6168_; lean_object* v_val_6169_; 
if (lean_obj_tag(v_x_6163_) == 0)
{
lean_object* v_a_6172_; lean_object* v___x_6174_; uint8_t v_isShared_6175_; uint8_t v_isSharedCheck_6180_; 
lean_dec(v_a_6160_);
lean_dec(v_a_6159_);
v_a_6172_ = lean_ctor_get(v_x_6163_, 0);
v_isSharedCheck_6180_ = !lean_is_exclusive(v_x_6163_);
if (v_isSharedCheck_6180_ == 0)
{
v___x_6174_ = v_x_6163_;
v_isShared_6175_ = v_isSharedCheck_6180_;
goto v_resetjp_6173_;
}
else
{
lean_inc(v_a_6172_);
lean_dec(v_x_6163_);
v___x_6174_ = lean_box(0);
v_isShared_6175_ = v_isSharedCheck_6180_;
goto v_resetjp_6173_;
}
v_resetjp_6173_:
{
lean_object* v___x_6177_; 
if (v_isShared_6175_ == 0)
{
v___x_6177_ = v___x_6174_;
goto v_reusejp_6176_;
}
else
{
lean_object* v_reuseFailAlloc_6179_; 
v_reuseFailAlloc_6179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6179_, 0, v_a_6172_);
v___x_6177_ = v_reuseFailAlloc_6179_;
goto v_reusejp_6176_;
}
v_reusejp_6176_:
{
lean_object* v___x_6178_; 
v___x_6178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6177_);
return v___x_6178_;
}
}
}
else
{
lean_object* v_a_6181_; lean_object* v___x_6183_; uint8_t v_isShared_6184_; uint8_t v_isSharedCheck_6214_; 
v_a_6181_ = lean_ctor_get(v_x_6163_, 0);
v_isSharedCheck_6214_ = !lean_is_exclusive(v_x_6163_);
if (v_isSharedCheck_6214_ == 0)
{
v___x_6183_ = v_x_6163_;
v_isShared_6184_ = v_isSharedCheck_6214_;
goto v_resetjp_6182_;
}
else
{
lean_inc(v_a_6181_);
lean_dec(v_x_6163_);
v___x_6183_ = lean_box(0);
v_isShared_6184_ = v_isSharedCheck_6214_;
goto v_resetjp_6182_;
}
v_resetjp_6182_:
{
uint16_t v___y_6186_; lean_object* v___x_6210_; 
v___x_6210_ = l_Lasm_JS_Data_field(v_a_6181_, v___x_6162_);
if (lean_obj_tag(v___x_6210_) == 3)
{
double v_n_6211_; uint16_t v___x_6212_; 
v_n_6211_ = lean_ctor_get_float(v___x_6210_, 0);
lean_dec_ref_known(v___x_6210_, 0);
v___x_6212_ = lean_float_to_uint16(v_n_6211_);
v___y_6186_ = v___x_6212_;
goto v___jp_6185_;
}
else
{
uint16_t v___x_6213_; 
lean_dec(v___x_6210_);
v___x_6213_ = 0;
v___y_6186_ = v___x_6213_;
goto v___jp_6185_;
}
v___jp_6185_:
{
lean_object* v___x_6187_; lean_object* v___f_6188_; lean_object* v___x_6189_; 
v___x_6187_ = lean_box(v___y_6186_);
lean_inc(v_a_6159_);
v___f_6188_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_6188_, 0, v___x_6187_);
lean_closure_set(v___f_6188_, 1, v_a_6159_);
lean_closure_set(v___f_6188_, 2, v_a_6160_);
v___x_6189_ = l_Lasm_JS_Data_field(v_a_6181_, v___x_6161_);
lean_dec(v_a_6181_);
if (lean_obj_tag(v___x_6189_) == 9)
{
lean_object* v_value_6190_; lean_object* v___f_6191_; lean_object* v___f_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; uint8_t v___x_6195_; lean_object* v___x_6196_; 
v_value_6190_ = lean_ctor_get(v___x_6189_, 0);
lean_inc(v_value_6190_);
lean_dec_ref_known(v___x_6189_, 2);
v___f_6191_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6191_, 0, v___f_6188_);
v___f_6192_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_6192_, 0, v_value_6190_);
lean_closure_set(v___f_6192_, 1, v___f_6191_);
v___x_6193_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_6194_ = lean_unsigned_to_nat(0u);
v___x_6195_ = 0;
v___x_6196_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6159_, v___x_6193_);
if (lean_obj_tag(v___x_6196_) == 0)
{
lean_object* v_a_6197_; lean_object* v___x_6199_; 
v_a_6197_ = lean_ctor_get(v___x_6196_, 0);
lean_inc(v_a_6197_);
lean_dec_ref_known(v___x_6196_, 1);
if (v_isShared_6184_ == 0)
{
lean_ctor_set(v___x_6183_, 0, v_a_6197_);
v___x_6199_ = v___x_6183_;
goto v_reusejp_6198_;
}
else
{
lean_object* v_reuseFailAlloc_6200_; 
v_reuseFailAlloc_6200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6200_, 0, v_a_6197_);
v___x_6199_ = v_reuseFailAlloc_6200_;
goto v_reusejp_6198_;
}
v_reusejp_6198_:
{
v___y_6166_ = v___x_6194_;
v___y_6167_ = v___f_6192_;
v___y_6168_ = v___x_6195_;
v_val_6169_ = v___x_6199_;
goto v___jp_6165_;
}
}
else
{
lean_object* v_a_6201_; lean_object* v___x_6203_; 
v_a_6201_ = lean_ctor_get(v___x_6196_, 0);
lean_inc(v_a_6201_);
lean_dec_ref_known(v___x_6196_, 1);
if (v_isShared_6184_ == 0)
{
lean_ctor_set_tag(v___x_6183_, 0);
lean_ctor_set(v___x_6183_, 0, v_a_6201_);
v___x_6203_ = v___x_6183_;
goto v_reusejp_6202_;
}
else
{
lean_object* v_reuseFailAlloc_6204_; 
v_reuseFailAlloc_6204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6204_, 0, v_a_6201_);
v___x_6203_ = v_reuseFailAlloc_6204_;
goto v_reusejp_6202_;
}
v_reusejp_6202_:
{
v___y_6166_ = v___x_6194_;
v___y_6167_ = v___f_6192_;
v___y_6168_ = v___x_6195_;
v_val_6169_ = v___x_6203_;
goto v___jp_6165_;
}
}
}
else
{
lean_object* v___f_6205_; lean_object* v___x_6206_; uint8_t v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; 
lean_dec(v___x_6189_);
lean_del_object(v___x_6183_);
lean_dec(v_a_6159_);
v___f_6205_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_6205_, 0, v___f_6188_);
v___x_6206_ = lean_unsigned_to_nat(0u);
v___x_6207_ = 0;
v___x_6208_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_6209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6206_, v___x_6207_, v___x_6208_, v___f_6205_);
return v___x_6209_;
}
}
}
}
v___jp_6165_:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; 
v___x_6170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6170_, 0, v_val_6169_);
v___x_6171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6166_, v___y_6168_, v___x_6170_, v___y_6167_);
return v___x_6171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_6215_, lean_object* v_a_6216_, lean_object* v___x_6217_, lean_object* v___x_6218_, lean_object* v_x_6219_, lean_object* v___y_6220_){
_start:
{
lean_object* v_res_6221_; 
v_res_6221_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_6215_, v_a_6216_, v___x_6217_, v___x_6218_, v_x_6219_);
lean_dec_ref(v___x_6218_);
lean_dec_ref(v___x_6217_);
return v_res_6221_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; 
v___x_6222_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_6223_ = lean_unsigned_to_nat(2u);
v___x_6224_ = lean_mk_empty_array_with_capacity(v___x_6223_);
v___x_6225_ = lean_array_push(v___x_6224_, v___x_6222_);
return v___x_6225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_6226_, lean_object* v___x_6227_, lean_object* v_x_6228_){
_start:
{
if (lean_obj_tag(v_x_6228_) == 0)
{
lean_object* v_a_6230_; lean_object* v___x_6232_; uint8_t v_isShared_6233_; uint8_t v_isSharedCheck_6238_; 
lean_dec_ref(v___x_6227_);
lean_dec(v_a_6226_);
v_a_6230_ = lean_ctor_get(v_x_6228_, 0);
v_isSharedCheck_6238_ = !lean_is_exclusive(v_x_6228_);
if (v_isSharedCheck_6238_ == 0)
{
v___x_6232_ = v_x_6228_;
v_isShared_6233_ = v_isSharedCheck_6238_;
goto v_resetjp_6231_;
}
else
{
lean_inc(v_a_6230_);
lean_dec(v_x_6228_);
v___x_6232_ = lean_box(0);
v_isShared_6233_ = v_isSharedCheck_6238_;
goto v_resetjp_6231_;
}
v_resetjp_6231_:
{
lean_object* v___x_6235_; 
if (v_isShared_6233_ == 0)
{
v___x_6235_ = v___x_6232_;
goto v_reusejp_6234_;
}
else
{
lean_object* v_reuseFailAlloc_6237_; 
v_reuseFailAlloc_6237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6237_, 0, v_a_6230_);
v___x_6235_ = v_reuseFailAlloc_6237_;
goto v_reusejp_6234_;
}
v_reusejp_6234_:
{
lean_object* v___x_6236_; 
v___x_6236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6236_, 0, v___x_6235_);
return v___x_6236_;
}
}
}
else
{
lean_object* v_a_6239_; lean_object* v___x_6241_; uint8_t v_isShared_6242_; uint8_t v_isSharedCheck_6262_; 
v_a_6239_ = lean_ctor_get(v_x_6228_, 0);
v_isSharedCheck_6262_ = !lean_is_exclusive(v_x_6228_);
if (v_isSharedCheck_6262_ == 0)
{
v___x_6241_ = v_x_6228_;
v_isShared_6242_ = v_isSharedCheck_6262_;
goto v_resetjp_6240_;
}
else
{
lean_inc(v_a_6239_);
lean_dec(v_x_6228_);
v___x_6241_ = lean_box(0);
v_isShared_6242_ = v_isSharedCheck_6262_;
goto v_resetjp_6240_;
}
v_resetjp_6240_:
{
lean_object* v___x_6243_; lean_object* v___f_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; uint8_t v___x_6248_; lean_object* v_val_6250_; lean_object* v___x_6253_; 
v___x_6243_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_6227_);
lean_inc(v_a_6239_);
v___f_6244_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_6244_, 0, v_a_6226_);
lean_closure_set(v___f_6244_, 1, v_a_6239_);
lean_closure_set(v___f_6244_, 2, v___x_6227_);
lean_closure_set(v___f_6244_, 3, v___x_6243_);
v___x_6245_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_6246_ = lean_array_push(v___x_6245_, v___x_6227_);
v___x_6247_ = lean_unsigned_to_nat(0u);
v___x_6248_ = 0;
v___x_6253_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_6239_, v___x_6246_);
if (lean_obj_tag(v___x_6253_) == 0)
{
lean_object* v_a_6254_; lean_object* v___x_6256_; 
v_a_6254_ = lean_ctor_get(v___x_6253_, 0);
lean_inc(v_a_6254_);
lean_dec_ref_known(v___x_6253_, 1);
if (v_isShared_6242_ == 0)
{
lean_ctor_set(v___x_6241_, 0, v_a_6254_);
v___x_6256_ = v___x_6241_;
goto v_reusejp_6255_;
}
else
{
lean_object* v_reuseFailAlloc_6257_; 
v_reuseFailAlloc_6257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6257_, 0, v_a_6254_);
v___x_6256_ = v_reuseFailAlloc_6257_;
goto v_reusejp_6255_;
}
v_reusejp_6255_:
{
v_val_6250_ = v___x_6256_;
goto v___jp_6249_;
}
}
else
{
lean_object* v_a_6258_; lean_object* v___x_6260_; 
v_a_6258_ = lean_ctor_get(v___x_6253_, 0);
lean_inc(v_a_6258_);
lean_dec_ref_known(v___x_6253_, 1);
if (v_isShared_6242_ == 0)
{
lean_ctor_set_tag(v___x_6241_, 0);
lean_ctor_set(v___x_6241_, 0, v_a_6258_);
v___x_6260_ = v___x_6241_;
goto v_reusejp_6259_;
}
else
{
lean_object* v_reuseFailAlloc_6261_; 
v_reuseFailAlloc_6261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6261_, 0, v_a_6258_);
v___x_6260_ = v_reuseFailAlloc_6261_;
goto v_reusejp_6259_;
}
v_reusejp_6259_:
{
v_val_6250_ = v___x_6260_;
goto v___jp_6249_;
}
}
v___jp_6249_:
{
lean_object* v___x_6251_; lean_object* v___x_6252_; 
v___x_6251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6251_, 0, v_val_6250_);
v___x_6252_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6247_, v___x_6248_, v___x_6251_, v___f_6244_);
return v___x_6252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6263_, lean_object* v___x_6264_, lean_object* v_x_6265_, lean_object* v___y_6266_){
_start:
{
lean_object* v_res_6267_; 
v_res_6267_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6263_, v___x_6264_, v_x_6265_);
return v_res_6267_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6269_; uint8_t v___x_6270_; uint64_t v___x_6271_; 
v___x_6269_ = 0ULL;
v___x_6270_ = 0;
v___x_6271_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6270_, v___x_6269_);
return v___x_6271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6272_, lean_object* v_args_6273_, lean_object* v_this_6274_){
_start:
{
lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; uint32_t v___x_6279_; uint64_t v___x_6280_; lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; 
v___x_6276_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6277_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6277_, 0, v_f_6272_);
lean_ctor_set(v___x_6277_, 1, v___x_6276_);
v___x_6278_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6279_ = 205;
v___x_6280_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6281_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6281_, 0, v_args_6273_);
v___x_6282_ = lean_unsigned_to_nat(3u);
v___x_6283_ = lean_mk_empty_array_with_capacity(v___x_6282_);
v___x_6284_ = lean_array_push(v___x_6283_, v___x_6277_);
v___x_6285_ = lean_array_push(v___x_6284_, v_this_6274_);
v___x_6286_ = lean_array_push(v___x_6285_, v___x_6281_);
v___x_6287_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6287_, 0, v___x_6286_);
v___x_6288_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6278_, v___x_6279_, v___x_6280_, v___x_6287_, v___x_6276_);
return v___x_6288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6289_, lean_object* v_args_6290_, lean_object* v_this_6291_, lean_object* v___y_6292_){
_start:
{
lean_object* v_res_6293_; 
v_res_6293_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6289_, v_args_6290_, v_this_6291_);
return v_res_6293_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6304_, lean_object* v_a_6305_, lean_object* v_x_6306_){
_start:
{
if (lean_obj_tag(v_x_6306_) == 0)
{
lean_object* v_a_6308_; lean_object* v___x_6310_; uint8_t v_isShared_6311_; uint8_t v_isSharedCheck_6316_; 
lean_dec(v_a_6305_);
lean_dec_ref(v_req_6304_);
v_a_6308_ = lean_ctor_get(v_x_6306_, 0);
v_isSharedCheck_6316_ = !lean_is_exclusive(v_x_6306_);
if (v_isSharedCheck_6316_ == 0)
{
v___x_6310_ = v_x_6306_;
v_isShared_6311_ = v_isSharedCheck_6316_;
goto v_resetjp_6309_;
}
else
{
lean_inc(v_a_6308_);
lean_dec(v_x_6306_);
v___x_6310_ = lean_box(0);
v_isShared_6311_ = v_isSharedCheck_6316_;
goto v_resetjp_6309_;
}
v_resetjp_6309_:
{
lean_object* v___x_6313_; 
if (v_isShared_6311_ == 0)
{
v___x_6313_ = v___x_6310_;
goto v_reusejp_6312_;
}
else
{
lean_object* v_reuseFailAlloc_6315_; 
v_reuseFailAlloc_6315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6315_, 0, v_a_6308_);
v___x_6313_ = v_reuseFailAlloc_6315_;
goto v_reusejp_6312_;
}
v_reusejp_6312_:
{
lean_object* v___x_6314_; 
v___x_6314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6314_, 0, v___x_6313_);
return v___x_6314_;
}
}
}
else
{
lean_object* v_a_6317_; lean_object* v_method_6318_; lean_object* v_url_6319_; lean_object* v_headers_6320_; lean_object* v_body_6321_; lean_object* v___y_6323_; lean_object* v___x_6353_; uint8_t v___x_6354_; 
v_a_6317_ = lean_ctor_get(v_x_6306_, 0);
lean_inc(v_a_6317_);
lean_dec_ref_known(v_x_6306_, 1);
v_method_6318_ = lean_ctor_get(v_req_6304_, 0);
lean_inc_ref(v_method_6318_);
v_url_6319_ = lean_ctor_get(v_req_6304_, 1);
lean_inc_ref(v_url_6319_);
v_headers_6320_ = lean_ctor_get(v_req_6304_, 2);
lean_inc_ref(v_headers_6320_);
v_body_6321_ = lean_ctor_get(v_req_6304_, 3);
lean_inc_ref(v_body_6321_);
lean_dec_ref(v_req_6304_);
v___x_6353_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6354_ = lean_string_dec_eq(v_method_6318_, v___x_6353_);
if (v___x_6354_ == 0)
{
lean_object* v___x_6355_; uint8_t v___x_6356_; 
v___x_6355_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6356_ = lean_string_dec_eq(v_method_6318_, v___x_6355_);
if (v___x_6356_ == 0)
{
lean_object* v___x_6357_; 
v___x_6357_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6357_, 0, v_body_6321_);
v___y_6323_ = v___x_6357_;
goto v___jp_6322_;
}
else
{
lean_dec_ref(v_body_6321_);
goto v___jp_6351_;
}
}
else
{
lean_dec_ref(v_body_6321_);
goto v___jp_6351_;
}
v___jp_6322_:
{
lean_object* v___x_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; lean_object* v___f_6328_; size_t v_sz_6329_; size_t v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; uint8_t v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; 
v___x_6324_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6325_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6325_, 0, v_method_6318_);
v___x_6326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6326_, 0, v___x_6324_);
lean_ctor_set(v___x_6326_, 1, v___x_6325_);
v___x_6327_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6328_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6328_, 0, v_a_6305_);
lean_closure_set(v___f_6328_, 1, v___x_6327_);
v_sz_6329_ = lean_array_size(v_headers_6320_);
v___x_6330_ = ((size_t)0ULL);
v___x_6331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6329_, v___x_6330_, v_headers_6320_);
v___x_6332_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6332_, 0, v___x_6331_);
v___x_6333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6333_, 0, v___x_6327_);
lean_ctor_set(v___x_6333_, 1, v___x_6332_);
v___x_6334_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6335_, 0, v___x_6334_);
lean_ctor_set(v___x_6335_, 1, v___y_6323_);
v___x_6336_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6337_, 0, v___x_6335_);
lean_ctor_set(v___x_6337_, 1, v___x_6336_);
v___x_6338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6338_, 0, v___x_6333_);
lean_ctor_set(v___x_6338_, 1, v___x_6337_);
v___x_6339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6339_, 0, v___x_6326_);
lean_ctor_set(v___x_6339_, 1, v___x_6338_);
v___x_6340_ = l_Lasm_JS_obj(v___x_6339_);
v___x_6341_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6341_, 0, v_url_6319_);
v___x_6342_ = lean_unsigned_to_nat(2u);
v___x_6343_ = lean_mk_empty_array_with_capacity(v___x_6342_);
v___x_6344_ = lean_array_push(v___x_6343_, v___x_6341_);
v___x_6345_ = lean_array_push(v___x_6344_, v___x_6340_);
v___x_6346_ = lean_box(0);
v___x_6347_ = lean_unsigned_to_nat(0u);
v___x_6348_ = 0;
v___x_6349_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6317_, v___x_6345_, v___x_6346_);
v___x_6350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6347_, v___x_6348_, v___x_6349_, v___f_6328_);
return v___x_6350_;
}
v___jp_6351_:
{
lean_object* v___x_6352_; 
v___x_6352_ = lean_box(0);
v___y_6323_ = v___x_6352_;
goto v___jp_6322_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6358_, lean_object* v_a_6359_, lean_object* v_x_6360_, lean_object* v___y_6361_){
_start:
{
lean_object* v_res_6362_; 
v_res_6362_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6358_, v_a_6359_, v_x_6360_);
return v_res_6362_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6364_, lean_object* v_x_6365_){
_start:
{
if (lean_obj_tag(v_x_6365_) == 0)
{
lean_object* v_a_6367_; lean_object* v___x_6369_; uint8_t v_isShared_6370_; uint8_t v_isSharedCheck_6375_; 
lean_dec_ref(v_req_6364_);
v_a_6367_ = lean_ctor_get(v_x_6365_, 0);
v_isSharedCheck_6375_ = !lean_is_exclusive(v_x_6365_);
if (v_isSharedCheck_6375_ == 0)
{
v___x_6369_ = v_x_6365_;
v_isShared_6370_ = v_isSharedCheck_6375_;
goto v_resetjp_6368_;
}
else
{
lean_inc(v_a_6367_);
lean_dec(v_x_6365_);
v___x_6369_ = lean_box(0);
v_isShared_6370_ = v_isSharedCheck_6375_;
goto v_resetjp_6368_;
}
v_resetjp_6368_:
{
lean_object* v___x_6372_; 
if (v_isShared_6370_ == 0)
{
v___x_6372_ = v___x_6369_;
goto v_reusejp_6371_;
}
else
{
lean_object* v_reuseFailAlloc_6374_; 
v_reuseFailAlloc_6374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6374_, 0, v_a_6367_);
v___x_6372_ = v_reuseFailAlloc_6374_;
goto v_reusejp_6371_;
}
v_reusejp_6371_:
{
lean_object* v___x_6373_; 
v___x_6373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6373_, 0, v___x_6372_);
return v___x_6373_;
}
}
}
else
{
lean_object* v_a_6376_; lean_object* v___x_6378_; uint8_t v_isShared_6379_; uint8_t v_isSharedCheck_6397_; 
v_a_6376_ = lean_ctor_get(v_x_6365_, 0);
v_isSharedCheck_6397_ = !lean_is_exclusive(v_x_6365_);
if (v_isSharedCheck_6397_ == 0)
{
v___x_6378_ = v_x_6365_;
v_isShared_6379_ = v_isSharedCheck_6397_;
goto v_resetjp_6377_;
}
else
{
lean_inc(v_a_6376_);
lean_dec(v_x_6365_);
v___x_6378_ = lean_box(0);
v_isShared_6379_ = v_isSharedCheck_6397_;
goto v_resetjp_6377_;
}
v_resetjp_6377_:
{
lean_object* v___f_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; uint8_t v___x_6383_; lean_object* v_val_6385_; lean_object* v___x_6388_; 
lean_inc(v_a_6376_);
v___f_6380_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6380_, 0, v_req_6364_);
lean_closure_set(v___f_6380_, 1, v_a_6376_);
v___x_6381_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6382_ = lean_unsigned_to_nat(0u);
v___x_6383_ = 0;
v___x_6388_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6376_, v___x_6381_);
if (lean_obj_tag(v___x_6388_) == 0)
{
lean_object* v_a_6389_; lean_object* v___x_6391_; 
v_a_6389_ = lean_ctor_get(v___x_6388_, 0);
lean_inc(v_a_6389_);
lean_dec_ref_known(v___x_6388_, 1);
if (v_isShared_6379_ == 0)
{
lean_ctor_set(v___x_6378_, 0, v_a_6389_);
v___x_6391_ = v___x_6378_;
goto v_reusejp_6390_;
}
else
{
lean_object* v_reuseFailAlloc_6392_; 
v_reuseFailAlloc_6392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6392_, 0, v_a_6389_);
v___x_6391_ = v_reuseFailAlloc_6392_;
goto v_reusejp_6390_;
}
v_reusejp_6390_:
{
v_val_6385_ = v___x_6391_;
goto v___jp_6384_;
}
}
else
{
lean_object* v_a_6393_; lean_object* v___x_6395_; 
v_a_6393_ = lean_ctor_get(v___x_6388_, 0);
lean_inc(v_a_6393_);
lean_dec_ref_known(v___x_6388_, 1);
if (v_isShared_6379_ == 0)
{
lean_ctor_set_tag(v___x_6378_, 0);
lean_ctor_set(v___x_6378_, 0, v_a_6393_);
v___x_6395_ = v___x_6378_;
goto v_reusejp_6394_;
}
else
{
lean_object* v_reuseFailAlloc_6396_; 
v_reuseFailAlloc_6396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6396_, 0, v_a_6393_);
v___x_6395_ = v_reuseFailAlloc_6396_;
goto v_reusejp_6394_;
}
v_reusejp_6394_:
{
v_val_6385_ = v___x_6395_;
goto v___jp_6384_;
}
}
v___jp_6384_:
{
lean_object* v___x_6386_; lean_object* v___x_6387_; 
v___x_6386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6386_, 0, v_val_6385_);
v___x_6387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6382_, v___x_6383_, v___x_6386_, v___f_6380_);
return v___x_6387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6398_, lean_object* v_x_6399_, lean_object* v___y_6400_){
_start:
{
lean_object* v_res_6401_; 
v_res_6401_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6398_, v_x_6399_);
return v_res_6401_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6402_){
_start:
{
lean_object* v___f_6404_; lean_object* v___x_6405_; uint8_t v___x_6406_; lean_object* v_val_6408_; lean_object* v___x_6411_; 
v___f_6404_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6404_, 0, v_req_6402_);
v___x_6405_ = lean_unsigned_to_nat(0u);
v___x_6406_ = 0;
v___x_6411_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6411_) == 0)
{
lean_object* v_a_6412_; lean_object* v___x_6414_; uint8_t v_isShared_6415_; uint8_t v_isSharedCheck_6419_; 
v_a_6412_ = lean_ctor_get(v___x_6411_, 0);
v_isSharedCheck_6419_ = !lean_is_exclusive(v___x_6411_);
if (v_isSharedCheck_6419_ == 0)
{
v___x_6414_ = v___x_6411_;
v_isShared_6415_ = v_isSharedCheck_6419_;
goto v_resetjp_6413_;
}
else
{
lean_inc(v_a_6412_);
lean_dec(v___x_6411_);
v___x_6414_ = lean_box(0);
v_isShared_6415_ = v_isSharedCheck_6419_;
goto v_resetjp_6413_;
}
v_resetjp_6413_:
{
lean_object* v___x_6417_; 
if (v_isShared_6415_ == 0)
{
lean_ctor_set_tag(v___x_6414_, 1);
v___x_6417_ = v___x_6414_;
goto v_reusejp_6416_;
}
else
{
lean_object* v_reuseFailAlloc_6418_; 
v_reuseFailAlloc_6418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6418_, 0, v_a_6412_);
v___x_6417_ = v_reuseFailAlloc_6418_;
goto v_reusejp_6416_;
}
v_reusejp_6416_:
{
v_val_6408_ = v___x_6417_;
goto v___jp_6407_;
}
}
}
else
{
lean_object* v_a_6420_; lean_object* v___x_6422_; uint8_t v_isShared_6423_; uint8_t v_isSharedCheck_6427_; 
v_a_6420_ = lean_ctor_get(v___x_6411_, 0);
v_isSharedCheck_6427_ = !lean_is_exclusive(v___x_6411_);
if (v_isSharedCheck_6427_ == 0)
{
v___x_6422_ = v___x_6411_;
v_isShared_6423_ = v_isSharedCheck_6427_;
goto v_resetjp_6421_;
}
else
{
lean_inc(v_a_6420_);
lean_dec(v___x_6411_);
v___x_6422_ = lean_box(0);
v_isShared_6423_ = v_isSharedCheck_6427_;
goto v_resetjp_6421_;
}
v_resetjp_6421_:
{
lean_object* v___x_6425_; 
if (v_isShared_6423_ == 0)
{
lean_ctor_set_tag(v___x_6422_, 0);
v___x_6425_ = v___x_6422_;
goto v_reusejp_6424_;
}
else
{
lean_object* v_reuseFailAlloc_6426_; 
v_reuseFailAlloc_6426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6426_, 0, v_a_6420_);
v___x_6425_ = v_reuseFailAlloc_6426_;
goto v_reusejp_6424_;
}
v_reusejp_6424_:
{
v_val_6408_ = v___x_6425_;
goto v___jp_6407_;
}
}
}
v___jp_6407_:
{
lean_object* v___x_6409_; lean_object* v___x_6410_; 
v___x_6409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6409_, 0, v_val_6408_);
v___x_6410_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6405_, v___x_6406_, v___x_6409_, v___f_6404_);
return v___x_6410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6428_, lean_object* v_a_6429_){
_start:
{
lean_object* v_res_6430_; 
v_res_6430_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6428_);
return v_res_6430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6431_){
_start:
{
if (lean_obj_tag(v_x_6431_) == 0)
{
lean_object* v_a_6433_; lean_object* v___x_6435_; uint8_t v_isShared_6436_; uint8_t v_isSharedCheck_6441_; 
v_a_6433_ = lean_ctor_get(v_x_6431_, 0);
v_isSharedCheck_6441_ = !lean_is_exclusive(v_x_6431_);
if (v_isSharedCheck_6441_ == 0)
{
v___x_6435_ = v_x_6431_;
v_isShared_6436_ = v_isSharedCheck_6441_;
goto v_resetjp_6434_;
}
else
{
lean_inc(v_a_6433_);
lean_dec(v_x_6431_);
v___x_6435_ = lean_box(0);
v_isShared_6436_ = v_isSharedCheck_6441_;
goto v_resetjp_6434_;
}
v_resetjp_6434_:
{
lean_object* v___x_6438_; 
if (v_isShared_6436_ == 0)
{
v___x_6438_ = v___x_6435_;
goto v_reusejp_6437_;
}
else
{
lean_object* v_reuseFailAlloc_6440_; 
v_reuseFailAlloc_6440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6440_, 0, v_a_6433_);
v___x_6438_ = v_reuseFailAlloc_6440_;
goto v_reusejp_6437_;
}
v_reusejp_6437_:
{
lean_object* v___x_6439_; 
v___x_6439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6439_, 0, v___x_6438_);
return v___x_6439_;
}
}
}
else
{
lean_object* v_a_6442_; lean_object* v___x_6443_; 
v_a_6442_ = lean_ctor_get(v_x_6431_, 0);
lean_inc(v_a_6442_);
lean_dec_ref_known(v_x_6431_, 1);
v___x_6443_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6442_);
lean_dec(v_a_6442_);
if (lean_obj_tag(v___x_6443_) == 0)
{
lean_object* v_a_6444_; lean_object* v___x_6446_; uint8_t v_isShared_6447_; uint8_t v_isSharedCheck_6453_; 
v_a_6444_ = lean_ctor_get(v___x_6443_, 0);
v_isSharedCheck_6453_ = !lean_is_exclusive(v___x_6443_);
if (v_isSharedCheck_6453_ == 0)
{
v___x_6446_ = v___x_6443_;
v_isShared_6447_ = v_isSharedCheck_6453_;
goto v_resetjp_6445_;
}
else
{
lean_inc(v_a_6444_);
lean_dec(v___x_6443_);
v___x_6446_ = lean_box(0);
v_isShared_6447_ = v_isSharedCheck_6453_;
goto v_resetjp_6445_;
}
v_resetjp_6445_:
{
lean_object* v___x_6448_; lean_object* v___x_6450_; 
v___x_6448_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6448_, 0, v_a_6444_);
if (v_isShared_6447_ == 0)
{
lean_ctor_set(v___x_6446_, 0, v___x_6448_);
v___x_6450_ = v___x_6446_;
goto v_reusejp_6449_;
}
else
{
lean_object* v_reuseFailAlloc_6452_; 
v_reuseFailAlloc_6452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6452_, 0, v___x_6448_);
v___x_6450_ = v_reuseFailAlloc_6452_;
goto v_reusejp_6449_;
}
v_reusejp_6449_:
{
lean_object* v___x_6451_; 
v___x_6451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6451_, 0, v___x_6450_);
return v___x_6451_;
}
}
}
else
{
lean_object* v_a_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6462_; 
v_a_6454_ = lean_ctor_get(v___x_6443_, 0);
v_isSharedCheck_6462_ = !lean_is_exclusive(v___x_6443_);
if (v_isSharedCheck_6462_ == 0)
{
v___x_6456_ = v___x_6443_;
v_isShared_6457_ = v_isSharedCheck_6462_;
goto v_resetjp_6455_;
}
else
{
lean_inc(v_a_6454_);
lean_dec(v___x_6443_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6462_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v___x_6459_; 
if (v_isShared_6457_ == 0)
{
v___x_6459_ = v___x_6456_;
goto v_reusejp_6458_;
}
else
{
lean_object* v_reuseFailAlloc_6461_; 
v_reuseFailAlloc_6461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6461_, 0, v_a_6454_);
v___x_6459_ = v_reuseFailAlloc_6461_;
goto v_reusejp_6458_;
}
v_reusejp_6458_:
{
lean_object* v___x_6460_; 
v___x_6460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6460_, 0, v___x_6459_);
return v___x_6460_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6463_, lean_object* v___y_6464_){
_start:
{
lean_object* v_res_6465_; 
v_res_6465_ = l_Lasm_Fetch_fetch___lam__0(v_x_6463_);
return v_res_6465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6471_){
_start:
{
if (lean_obj_tag(v_x_6471_) == 0)
{
lean_object* v___x_6472_; 
v___x_6472_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6472_;
}
else
{
lean_object* v_val_6473_; 
v_val_6473_ = lean_ctor_get(v_x_6471_, 0);
lean_inc(v_val_6473_);
return v_val_6473_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6474_){
_start:
{
lean_object* v_res_6475_; 
v_res_6475_ = l_Lasm_Fetch_fetch___lam__1(v_x_6474_);
lean_dec(v_x_6474_);
return v_res_6475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6476_, lean_object* v___f_6477_, uint8_t v___x_6478_, lean_object* v___f_6479_, lean_object* v_x_6480_){
_start:
{
if (lean_obj_tag(v_x_6480_) == 0)
{
lean_object* v_a_6482_; lean_object* v___x_6484_; uint8_t v_isShared_6485_; uint8_t v_isSharedCheck_6490_; 
lean_dec_ref(v___f_6479_);
lean_dec_ref(v___f_6477_);
v_a_6482_ = lean_ctor_get(v_x_6480_, 0);
v_isSharedCheck_6490_ = !lean_is_exclusive(v_x_6480_);
if (v_isSharedCheck_6490_ == 0)
{
v___x_6484_ = v_x_6480_;
v_isShared_6485_ = v_isSharedCheck_6490_;
goto v_resetjp_6483_;
}
else
{
lean_inc(v_a_6482_);
lean_dec(v_x_6480_);
v___x_6484_ = lean_box(0);
v_isShared_6485_ = v_isSharedCheck_6490_;
goto v_resetjp_6483_;
}
v_resetjp_6483_:
{
lean_object* v___x_6487_; 
if (v_isShared_6485_ == 0)
{
v___x_6487_ = v___x_6484_;
goto v_reusejp_6486_;
}
else
{
lean_object* v_reuseFailAlloc_6489_; 
v_reuseFailAlloc_6489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6489_, 0, v_a_6482_);
v___x_6487_ = v_reuseFailAlloc_6489_;
goto v_reusejp_6486_;
}
v_reusejp_6486_:
{
lean_object* v___x_6488_; 
v___x_6488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6488_, 0, v___x_6487_);
return v___x_6488_;
}
}
}
else
{
lean_object* v___x_6491_; lean_object* v___x_6492_; uint8_t v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6496_; 
lean_dec_ref_known(v_x_6480_, 1);
v___x_6491_ = lean_io_promise_result_opt(v_a_6476_);
v___x_6492_ = lean_unsigned_to_nat(0u);
v___x_6493_ = 1;
v___x_6494_ = lean_task_map(v___f_6477_, v___x_6491_, v___x_6492_, v___x_6493_);
v___x_6495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6495_, 0, v___x_6494_);
v___x_6496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6492_, v___x_6478_, v___x_6495_, v___f_6479_);
return v___x_6496_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6497_, lean_object* v___f_6498_, lean_object* v___x_6499_, lean_object* v___f_6500_, lean_object* v_x_6501_, lean_object* v___y_6502_){
_start:
{
uint8_t v___x_1064__boxed_6503_; lean_object* v_res_6504_; 
v___x_1064__boxed_6503_ = lean_unbox(v___x_6499_);
v_res_6504_ = l_Lasm_Fetch_fetch___lam__2(v_a_6497_, v___f_6498_, v___x_1064__boxed_6503_, v___f_6500_, v_x_6501_);
lean_dec(v_a_6497_);
return v_res_6504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6505_, lean_object* v___f_6506_, uint8_t v___x_6507_, lean_object* v___f_6508_, lean_object* v_options_6509_, lean_object* v_x_6510_){
_start:
{
if (lean_obj_tag(v_x_6510_) == 0)
{
lean_object* v_a_6512_; lean_object* v___x_6514_; uint8_t v_isShared_6515_; uint8_t v_isSharedCheck_6520_; 
lean_dec_ref(v___f_6508_);
lean_dec_ref(v___f_6506_);
v_a_6512_ = lean_ctor_get(v_x_6510_, 0);
v_isSharedCheck_6520_ = !lean_is_exclusive(v_x_6510_);
if (v_isSharedCheck_6520_ == 0)
{
v___x_6514_ = v_x_6510_;
v_isShared_6515_ = v_isSharedCheck_6520_;
goto v_resetjp_6513_;
}
else
{
lean_inc(v_a_6512_);
lean_dec(v_x_6510_);
v___x_6514_ = lean_box(0);
v_isShared_6515_ = v_isSharedCheck_6520_;
goto v_resetjp_6513_;
}
v_resetjp_6513_:
{
lean_object* v___x_6517_; 
if (v_isShared_6515_ == 0)
{
v___x_6517_ = v___x_6514_;
goto v_reusejp_6516_;
}
else
{
lean_object* v_reuseFailAlloc_6519_; 
v_reuseFailAlloc_6519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6519_, 0, v_a_6512_);
v___x_6517_ = v_reuseFailAlloc_6519_;
goto v_reusejp_6516_;
}
v_reusejp_6516_:
{
lean_object* v___x_6518_; 
v___x_6518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6518_, 0, v___x_6517_);
return v___x_6518_;
}
}
}
else
{
lean_object* v_a_6521_; lean_object* v___x_6523_; uint8_t v_isShared_6524_; uint8_t v_isSharedCheck_6551_; 
v_a_6521_ = lean_ctor_get(v_x_6510_, 0);
v_isSharedCheck_6551_ = !lean_is_exclusive(v_x_6510_);
if (v_isSharedCheck_6551_ == 0)
{
v___x_6523_ = v_x_6510_;
v_isShared_6524_ = v_isSharedCheck_6551_;
goto v_resetjp_6522_;
}
else
{
lean_inc(v_a_6521_);
lean_dec(v_x_6510_);
v___x_6523_ = lean_box(0);
v_isShared_6524_ = v_isSharedCheck_6551_;
goto v_resetjp_6522_;
}
v_resetjp_6522_:
{
lean_object* v_method_6525_; lean_object* v_url_6526_; lean_object* v_headers_6527_; lean_object* v_body_6528_; lean_object* v___x_6529_; lean_object* v___f_6530_; lean_object* v___y_6532_; uint8_t v___y_6533_; lean_object* v_val_6534_; lean_object* v___y_6538_; 
v_method_6525_ = lean_ctor_get(v_req_6505_, 0);
v_url_6526_ = lean_ctor_get(v_req_6505_, 1);
v_headers_6527_ = lean_ctor_get(v_req_6505_, 2);
v_body_6528_ = lean_ctor_get(v_req_6505_, 3);
v___x_6529_ = lean_box(v___x_6507_);
lean_inc(v_a_6521_);
v___f_6530_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6530_, 0, v_a_6521_);
lean_closure_set(v___f_6530_, 1, v___f_6506_);
lean_closure_set(v___f_6530_, 2, v___x_6529_);
lean_closure_set(v___f_6530_, 3, v___f_6508_);
if (lean_obj_tag(v_options_6509_) == 0)
{
lean_object* v___x_6549_; 
v___x_6549_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6538_ = v___x_6549_;
goto v___jp_6537_;
}
else
{
lean_object* v_val_6550_; 
v_val_6550_ = lean_ctor_get(v_options_6509_, 0);
v___y_6538_ = v_val_6550_;
goto v___jp_6537_;
}
v___jp_6531_:
{
lean_object* v___x_6535_; lean_object* v___x_6536_; 
v___x_6535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6535_, 0, v_val_6534_);
v___x_6536_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6532_, v___y_6533_, v___x_6535_, v___f_6530_);
return v___x_6536_;
}
v___jp_6537_:
{
lean_object* v___x_6539_; lean_object* v___x_6540_; 
v___x_6539_ = lean_unsigned_to_nat(0u);
v___x_6540_ = lasm_fetch_send(v_a_6521_, v_method_6525_, v_url_6526_, v_headers_6527_, v_body_6528_, v___y_6538_);
lean_dec(v_a_6521_);
if (lean_obj_tag(v___x_6540_) == 0)
{
lean_object* v_a_6541_; lean_object* v___x_6543_; 
v_a_6541_ = lean_ctor_get(v___x_6540_, 0);
lean_inc(v_a_6541_);
lean_dec_ref_known(v___x_6540_, 1);
if (v_isShared_6524_ == 0)
{
lean_ctor_set(v___x_6523_, 0, v_a_6541_);
v___x_6543_ = v___x_6523_;
goto v_reusejp_6542_;
}
else
{
lean_object* v_reuseFailAlloc_6544_; 
v_reuseFailAlloc_6544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6544_, 0, v_a_6541_);
v___x_6543_ = v_reuseFailAlloc_6544_;
goto v_reusejp_6542_;
}
v_reusejp_6542_:
{
v___y_6532_ = v___x_6539_;
v___y_6533_ = v___x_6507_;
v_val_6534_ = v___x_6543_;
goto v___jp_6531_;
}
}
else
{
lean_object* v_a_6545_; lean_object* v___x_6547_; 
v_a_6545_ = lean_ctor_get(v___x_6540_, 0);
lean_inc(v_a_6545_);
lean_dec_ref_known(v___x_6540_, 1);
if (v_isShared_6524_ == 0)
{
lean_ctor_set_tag(v___x_6523_, 0);
lean_ctor_set(v___x_6523_, 0, v_a_6545_);
v___x_6547_ = v___x_6523_;
goto v_reusejp_6546_;
}
else
{
lean_object* v_reuseFailAlloc_6548_; 
v_reuseFailAlloc_6548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6548_, 0, v_a_6545_);
v___x_6547_ = v_reuseFailAlloc_6548_;
goto v_reusejp_6546_;
}
v_reusejp_6546_:
{
v___y_6532_ = v___x_6539_;
v___y_6533_ = v___x_6507_;
v_val_6534_ = v___x_6547_;
goto v___jp_6531_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6552_, lean_object* v___f_6553_, lean_object* v___x_6554_, lean_object* v___f_6555_, lean_object* v_options_6556_, lean_object* v_x_6557_, lean_object* v___y_6558_){
_start:
{
uint8_t v___x_1113__boxed_6559_; lean_object* v_res_6560_; 
v___x_1113__boxed_6559_ = lean_unbox(v___x_6554_);
v_res_6560_ = l_Lasm_Fetch_fetch___lam__3(v_req_6552_, v___f_6553_, v___x_1113__boxed_6559_, v___f_6555_, v_options_6556_, v_x_6557_);
lean_dec(v_options_6556_);
lean_dec_ref(v_req_6552_);
return v_res_6560_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6561_; uint32_t v___x_6562_; 
v___x_6561_ = lean_box(0);
v___x_6562_ = lasm_fetch_platform(v___x_6561_);
return v___x_6562_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6563_; uint32_t v___x_6564_; uint8_t v___x_6565_; 
v___x_6563_ = 0;
v___x_6564_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6565_ = lean_uint32_dec_eq(v___x_6564_, v___x_6563_);
return v___x_6565_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6568_; uint32_t v___x_6569_; uint8_t v___x_6570_; 
v___x_6568_ = 2;
v___x_6569_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6570_ = lean_uint32_dec_eq(v___x_6569_, v___x_6568_);
return v___x_6570_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6571_; uint32_t v___x_6572_; uint8_t v___x_6573_; 
v___x_6571_ = 4;
v___x_6572_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6573_ = lean_uint32_dec_eq(v___x_6572_, v___x_6571_);
return v___x_6573_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6574_; uint32_t v___x_6575_; uint8_t v___x_6576_; 
v___x_6574_ = 1;
v___x_6575_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6576_ = lean_uint32_dec_eq(v___x_6575_, v___x_6574_);
return v___x_6576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6591_, lean_object* v_options_6592_){
_start:
{
uint8_t v___x_6594_; 
v___x_6594_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6594_ == 0)
{
lean_object* v___f_6595_; lean_object* v___f_6596_; lean_object* v___x_6597_; lean_object* v___f_6598_; uint8_t v___x_6605_; 
v___f_6595_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6596_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6597_ = lean_box(v___x_6594_);
v___f_6598_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6598_, 0, v_req_6591_);
lean_closure_set(v___f_6598_, 1, v___f_6596_);
lean_closure_set(v___f_6598_, 2, v___x_6597_);
lean_closure_set(v___f_6598_, 3, v___f_6595_);
lean_closure_set(v___f_6598_, 4, v_options_6592_);
v___x_6605_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6605_ == 0)
{
uint8_t v___x_6606_; 
v___x_6606_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6606_ == 0)
{
uint8_t v___x_6607_; 
lean_dec_ref(v___f_6598_);
v___x_6607_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6607_ == 0)
{
lean_object* v___x_6608_; 
v___x_6608_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6608_;
}
else
{
lean_object* v___x_6609_; 
v___x_6609_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6609_;
}
}
else
{
goto v___jp_6599_;
}
}
else
{
goto v___jp_6599_;
}
v___jp_6599_:
{
lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; lean_object* v___x_6603_; lean_object* v___x_6604_; 
v___x_6600_ = lean_unsigned_to_nat(0u);
v___x_6601_ = lean_io_promise_new();
v___x_6602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6602_, 0, v___x_6601_);
v___x_6603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6603_, 0, v___x_6602_);
v___x_6604_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6600_, v___x_6594_, v___x_6603_, v___f_6598_);
return v___x_6604_;
}
}
else
{
lean_object* v___x_6610_; 
lean_dec(v_options_6592_);
v___x_6610_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6591_);
return v___x_6610_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6611_, lean_object* v_options_6612_, lean_object* v_a_6613_){
_start:
{
lean_object* v_res_6614_; 
v_res_6614_ = l_Lasm_Fetch_fetch(v_req_6611_, v_options_6612_);
return v_res_6614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6615_, lean_object* v_headers_6616_, lean_object* v_options_6617_){
_start:
{
lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___f_6621_; lean_object* v___x_6622_; lean_object* v___x_6623_; 
v___x_6619_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6620_ = l_ByteArray_empty;
v___f_6621_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6622_, 0, v___x_6619_);
lean_ctor_set(v___x_6622_, 1, v_url_6615_);
lean_ctor_set(v___x_6622_, 2, v_headers_6616_);
lean_ctor_set(v___x_6622_, 3, v___x_6620_);
lean_ctor_set(v___x_6622_, 4, v___f_6621_);
v___x_6623_ = l_Lasm_Fetch_fetch(v___x_6622_, v_options_6617_);
return v___x_6623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6624_, lean_object* v_headers_6625_, lean_object* v_options_6626_, lean_object* v_a_6627_){
_start:
{
lean_object* v_res_6628_; 
v_res_6628_ = l_Lasm_Fetch_get(v_url_6624_, v_headers_6625_, v_options_6626_);
return v_res_6628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6630_, lean_object* v_body_6631_, lean_object* v_contentType_6632_, lean_object* v_headers_6633_, lean_object* v_options_6634_){
_start:
{
lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; lean_object* v___x_6640_; lean_object* v___x_6641_; lean_object* v___x_6642_; lean_object* v___f_6643_; lean_object* v___x_6644_; lean_object* v___x_6645_; 
v___x_6636_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6637_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6638_, 0, v___x_6637_);
lean_ctor_set(v___x_6638_, 1, v_contentType_6632_);
v___x_6639_ = lean_unsigned_to_nat(1u);
v___x_6640_ = lean_mk_empty_array_with_capacity(v___x_6639_);
v___x_6641_ = lean_array_push(v___x_6640_, v___x_6638_);
v___x_6642_ = l_Array_append___redArg(v___x_6641_, v_headers_6633_);
v___f_6643_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6644_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6644_, 0, v___x_6636_);
lean_ctor_set(v___x_6644_, 1, v_url_6630_);
lean_ctor_set(v___x_6644_, 2, v___x_6642_);
lean_ctor_set(v___x_6644_, 3, v_body_6631_);
lean_ctor_set(v___x_6644_, 4, v___f_6643_);
v___x_6645_ = l_Lasm_Fetch_fetch(v___x_6644_, v_options_6634_);
return v___x_6645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6646_, lean_object* v_body_6647_, lean_object* v_contentType_6648_, lean_object* v_headers_6649_, lean_object* v_options_6650_, lean_object* v_a_6651_){
_start:
{
lean_object* v_res_6652_; 
v_res_6652_ = l_Lasm_Fetch_post(v_url_6646_, v_body_6647_, v_contentType_6648_, v_headers_6649_, v_options_6650_);
lean_dec_ref(v_headers_6649_);
return v_res_6652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6653_){
_start:
{
lean_object* v_body_6654_; uint8_t v___x_6655_; 
v_body_6654_ = lean_ctor_get(v_r_6653_, 1);
lean_inc_ref(v_body_6654_);
lean_dec_ref(v_r_6653_);
v___x_6655_ = lean_string_validate_utf8(v_body_6654_);
if (v___x_6655_ == 0)
{
lean_object* v___x_6656_; 
lean_dec_ref(v_body_6654_);
v___x_6656_ = lean_box(0);
return v___x_6656_;
}
else
{
lean_object* v___x_6657_; lean_object* v___x_6658_; 
v___x_6657_ = lean_string_from_utf8_unchecked(v_body_6654_);
v___x_6658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6658_, 0, v___x_6657_);
return v___x_6658_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6659_, lean_object* v_name_6660_){
_start:
{
lean_object* v_headers_6661_; lean_object* v_n_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; size_t v_sz_6665_; size_t v___x_6666_; lean_object* v___x_6667_; lean_object* v_fst_6668_; 
v_headers_6661_ = lean_ctor_get(v_r_6659_, 0);
v_n_6662_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6660_);
v___x_6663_ = lean_box(0);
v___x_6664_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6665_ = lean_array_size(v_headers_6661_);
v___x_6666_ = ((size_t)0ULL);
v___x_6667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6662_, v_headers_6661_, v_sz_6665_, v___x_6666_, v___x_6664_);
lean_dec_ref(v_n_6662_);
v_fst_6668_ = lean_ctor_get(v___x_6667_, 0);
lean_inc(v_fst_6668_);
lean_dec_ref(v___x_6667_);
if (lean_obj_tag(v_fst_6668_) == 0)
{
return v___x_6663_;
}
else
{
lean_object* v_val_6669_; 
v_val_6669_ = lean_ctor_get(v_fst_6668_, 0);
lean_inc(v_val_6669_);
lean_dec_ref_known(v_fst_6668_, 1);
if (lean_obj_tag(v_val_6669_) == 0)
{
return v___x_6663_;
}
else
{
lean_object* v_val_6670_; lean_object* v___x_6672_; uint8_t v_isShared_6673_; uint8_t v_isSharedCheck_6678_; 
v_val_6670_ = lean_ctor_get(v_val_6669_, 0);
v_isSharedCheck_6678_ = !lean_is_exclusive(v_val_6669_);
if (v_isSharedCheck_6678_ == 0)
{
v___x_6672_ = v_val_6669_;
v_isShared_6673_ = v_isSharedCheck_6678_;
goto v_resetjp_6671_;
}
else
{
lean_inc(v_val_6670_);
lean_dec(v_val_6669_);
v___x_6672_ = lean_box(0);
v_isShared_6673_ = v_isSharedCheck_6678_;
goto v_resetjp_6671_;
}
v_resetjp_6671_:
{
lean_object* v_snd_6674_; lean_object* v___x_6676_; 
v_snd_6674_ = lean_ctor_get(v_val_6670_, 1);
lean_inc(v_snd_6674_);
lean_dec(v_val_6670_);
if (v_isShared_6673_ == 0)
{
lean_ctor_set(v___x_6672_, 0, v_snd_6674_);
v___x_6676_ = v___x_6672_;
goto v_reusejp_6675_;
}
else
{
lean_object* v_reuseFailAlloc_6677_; 
v_reuseFailAlloc_6677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6677_, 0, v_snd_6674_);
v___x_6676_ = v_reuseFailAlloc_6677_;
goto v_reusejp_6675_;
}
v_reusejp_6675_:
{
return v___x_6676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6679_, lean_object* v_name_6680_){
_start:
{
lean_object* v_res_6681_; 
v_res_6681_ = l_Lasm_Fetch_Response_header_x3f(v_r_6679_, v_name_6680_);
lean_dec_ref(v_r_6679_);
return v_res_6681_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6682_){
_start:
{
if (lean_obj_tag(v_x_6682_) == 0)
{
lean_object* v_a_6683_; lean_object* v___x_6684_; 
v_a_6683_ = lean_ctor_get(v_x_6682_, 0);
lean_inc(v_a_6683_);
lean_dec_ref_known(v_x_6682_, 1);
v___x_6684_ = lean_task_pure(v_a_6683_);
return v___x_6684_;
}
else
{
lean_object* v_a_6685_; 
v_a_6685_ = lean_ctor_get(v_x_6682_, 0);
lean_inc_ref(v_a_6685_);
lean_dec_ref_known(v_x_6682_, 1);
return v_a_6685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6686_){
_start:
{
if (lean_obj_tag(v_x_6686_) == 0)
{
lean_object* v_a_6687_; lean_object* v___x_6688_; 
v_a_6687_ = lean_ctor_get(v_x_6686_, 0);
lean_inc(v_a_6687_);
lean_dec_ref_known(v_x_6686_, 1);
v___x_6688_ = lean_task_pure(v_a_6687_);
return v___x_6688_;
}
else
{
lean_object* v_a_6689_; 
v_a_6689_ = lean_ctor_get(v_x_6686_, 0);
lean_inc_ref(v_a_6689_);
lean_dec_ref_known(v_x_6686_, 1);
return v_a_6689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6690_){
_start:
{
lean_object* v_val_6693_; lean_object* v___x_6695_; 
v___x_6695_ = lasm_fetch_write(v_chunk_6690_);
if (lean_obj_tag(v___x_6695_) == 0)
{
lean_object* v_a_6696_; lean_object* v___x_6698_; uint8_t v_isShared_6699_; uint8_t v_isSharedCheck_6703_; 
v_a_6696_ = lean_ctor_get(v___x_6695_, 0);
v_isSharedCheck_6703_ = !lean_is_exclusive(v___x_6695_);
if (v_isSharedCheck_6703_ == 0)
{
v___x_6698_ = v___x_6695_;
v_isShared_6699_ = v_isSharedCheck_6703_;
goto v_resetjp_6697_;
}
else
{
lean_inc(v_a_6696_);
lean_dec(v___x_6695_);
v___x_6698_ = lean_box(0);
v_isShared_6699_ = v_isSharedCheck_6703_;
goto v_resetjp_6697_;
}
v_resetjp_6697_:
{
lean_object* v___x_6701_; 
if (v_isShared_6699_ == 0)
{
lean_ctor_set_tag(v___x_6698_, 1);
v___x_6701_ = v___x_6698_;
goto v_reusejp_6700_;
}
else
{
lean_object* v_reuseFailAlloc_6702_; 
v_reuseFailAlloc_6702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6702_, 0, v_a_6696_);
v___x_6701_ = v_reuseFailAlloc_6702_;
goto v_reusejp_6700_;
}
v_reusejp_6700_:
{
v_val_6693_ = v___x_6701_;
goto v___jp_6692_;
}
}
}
else
{
lean_object* v_a_6704_; lean_object* v___x_6706_; uint8_t v_isShared_6707_; uint8_t v_isSharedCheck_6711_; 
v_a_6704_ = lean_ctor_get(v___x_6695_, 0);
v_isSharedCheck_6711_ = !lean_is_exclusive(v___x_6695_);
if (v_isSharedCheck_6711_ == 0)
{
v___x_6706_ = v___x_6695_;
v_isShared_6707_ = v_isSharedCheck_6711_;
goto v_resetjp_6705_;
}
else
{
lean_inc(v_a_6704_);
lean_dec(v___x_6695_);
v___x_6706_ = lean_box(0);
v_isShared_6707_ = v_isSharedCheck_6711_;
goto v_resetjp_6705_;
}
v_resetjp_6705_:
{
lean_object* v___x_6709_; 
if (v_isShared_6707_ == 0)
{
lean_ctor_set_tag(v___x_6706_, 0);
v___x_6709_ = v___x_6706_;
goto v_reusejp_6708_;
}
else
{
lean_object* v_reuseFailAlloc_6710_; 
v_reuseFailAlloc_6710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6710_, 0, v_a_6704_);
v___x_6709_ = v_reuseFailAlloc_6710_;
goto v_reusejp_6708_;
}
v_reusejp_6708_:
{
v_val_6693_ = v___x_6709_;
goto v___jp_6692_;
}
}
}
v___jp_6692_:
{
lean_object* v___x_6694_; 
v___x_6694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6694_, 0, v_val_6693_);
return v___x_6694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6712_, lean_object* v___y_6713_){
_start:
{
lean_object* v_res_6714_; 
v_res_6714_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6712_);
lean_dec_ref(v_chunk_6712_);
return v_res_6714_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6715_){
_start:
{
if (lean_obj_tag(v_x_6715_) == 0)
{
lean_object* v_a_6716_; lean_object* v___x_6717_; 
v_a_6716_ = lean_ctor_get(v_x_6715_, 0);
lean_inc(v_a_6716_);
lean_dec_ref_known(v_x_6715_, 1);
v___x_6717_ = lean_task_pure(v_a_6716_);
return v___x_6717_;
}
else
{
lean_object* v_a_6718_; 
v_a_6718_ = lean_ctor_get(v_x_6715_, 0);
lean_inc_ref(v_a_6718_);
lean_dec_ref_known(v_x_6715_, 1);
return v_a_6718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6719_){
_start:
{
lean_object* v___y_6722_; 
if (lean_obj_tag(v_x_6719_) == 0)
{
lean_object* v_a_6725_; lean_object* v___x_6727_; uint8_t v_isShared_6728_; uint8_t v_isSharedCheck_6733_; 
v_a_6725_ = lean_ctor_get(v_x_6719_, 0);
v_isSharedCheck_6733_ = !lean_is_exclusive(v_x_6719_);
if (v_isSharedCheck_6733_ == 0)
{
v___x_6727_ = v_x_6719_;
v_isShared_6728_ = v_isSharedCheck_6733_;
goto v_resetjp_6726_;
}
else
{
lean_inc(v_a_6725_);
lean_dec(v_x_6719_);
v___x_6727_ = lean_box(0);
v_isShared_6728_ = v_isSharedCheck_6733_;
goto v_resetjp_6726_;
}
v_resetjp_6726_:
{
lean_object* v___x_6730_; 
if (v_isShared_6728_ == 0)
{
v___x_6730_ = v___x_6727_;
goto v_reusejp_6729_;
}
else
{
lean_object* v_reuseFailAlloc_6732_; 
v_reuseFailAlloc_6732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6732_, 0, v_a_6725_);
v___x_6730_ = v_reuseFailAlloc_6732_;
goto v_reusejp_6729_;
}
v_reusejp_6729_:
{
lean_object* v___x_6731_; 
v___x_6731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6731_, 0, v___x_6730_);
return v___x_6731_;
}
}
}
else
{
lean_object* v_a_6734_; uint8_t v___x_6735_; 
v_a_6734_ = lean_ctor_get(v_x_6719_, 0);
lean_inc(v_a_6734_);
lean_dec_ref_known(v_x_6719_, 1);
v___x_6735_ = l_ByteArray_isEmpty(v_a_6734_);
if (v___x_6735_ == 0)
{
lean_object* v___x_6736_; 
v___x_6736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6736_, 0, v_a_6734_);
v___y_6722_ = v___x_6736_;
goto v___jp_6721_;
}
else
{
lean_object* v___x_6737_; 
lean_dec(v_a_6734_);
v___x_6737_ = lean_box(0);
v___y_6722_ = v___x_6737_;
goto v___jp_6721_;
}
}
v___jp_6721_:
{
lean_object* v___x_6723_; lean_object* v___x_6724_; 
v___x_6723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6723_, 0, v___y_6722_);
v___x_6724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6724_, 0, v___x_6723_);
return v___x_6724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6738_, lean_object* v___y_6739_){
_start:
{
lean_object* v_res_6740_; 
v_res_6740_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6738_);
return v_res_6740_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6741_, uint32_t v___x_6742_){
_start:
{
lean_object* v___x_6744_; uint8_t v___x_6745_; lean_object* v_val_6747_; lean_object* v___x_6750_; 
v___x_6744_ = lean_unsigned_to_nat(0u);
v___x_6745_ = 0;
v___x_6750_ = lasm_fetch_read(v___x_6742_);
if (lean_obj_tag(v___x_6750_) == 0)
{
lean_object* v_a_6751_; lean_object* v___x_6753_; uint8_t v_isShared_6754_; uint8_t v_isSharedCheck_6758_; 
v_a_6751_ = lean_ctor_get(v___x_6750_, 0);
v_isSharedCheck_6758_ = !lean_is_exclusive(v___x_6750_);
if (v_isSharedCheck_6758_ == 0)
{
v___x_6753_ = v___x_6750_;
v_isShared_6754_ = v_isSharedCheck_6758_;
goto v_resetjp_6752_;
}
else
{
lean_inc(v_a_6751_);
lean_dec(v___x_6750_);
v___x_6753_ = lean_box(0);
v_isShared_6754_ = v_isSharedCheck_6758_;
goto v_resetjp_6752_;
}
v_resetjp_6752_:
{
lean_object* v___x_6756_; 
if (v_isShared_6754_ == 0)
{
lean_ctor_set_tag(v___x_6753_, 1);
v___x_6756_ = v___x_6753_;
goto v_reusejp_6755_;
}
else
{
lean_object* v_reuseFailAlloc_6757_; 
v_reuseFailAlloc_6757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6757_, 0, v_a_6751_);
v___x_6756_ = v_reuseFailAlloc_6757_;
goto v_reusejp_6755_;
}
v_reusejp_6755_:
{
v_val_6747_ = v___x_6756_;
goto v___jp_6746_;
}
}
}
else
{
lean_object* v_a_6759_; lean_object* v___x_6761_; uint8_t v_isShared_6762_; uint8_t v_isSharedCheck_6766_; 
v_a_6759_ = lean_ctor_get(v___x_6750_, 0);
v_isSharedCheck_6766_ = !lean_is_exclusive(v___x_6750_);
if (v_isSharedCheck_6766_ == 0)
{
v___x_6761_ = v___x_6750_;
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
else
{
lean_inc(v_a_6759_);
lean_dec(v___x_6750_);
v___x_6761_ = lean_box(0);
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
v_resetjp_6760_:
{
lean_object* v___x_6764_; 
if (v_isShared_6762_ == 0)
{
lean_ctor_set_tag(v___x_6761_, 0);
v___x_6764_ = v___x_6761_;
goto v_reusejp_6763_;
}
else
{
lean_object* v_reuseFailAlloc_6765_; 
v_reuseFailAlloc_6765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6765_, 0, v_a_6759_);
v___x_6764_ = v_reuseFailAlloc_6765_;
goto v_reusejp_6763_;
}
v_reusejp_6763_:
{
v_val_6747_ = v___x_6764_;
goto v___jp_6746_;
}
}
}
v___jp_6746_:
{
lean_object* v___x_6748_; lean_object* v___x_6749_; 
v___x_6748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6748_, 0, v_val_6747_);
v___x_6749_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6744_, v___x_6745_, v___x_6748_, v___f_6741_);
return v___x_6749_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6767_, lean_object* v___x_6768_, lean_object* v___y_6769_){
_start:
{
uint32_t v___x_2044__boxed_6770_; lean_object* v_res_6771_; 
v___x_2044__boxed_6770_ = lean_unbox_uint32(v___x_6768_);
lean_dec(v___x_6768_);
v_res_6771_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6767_, v___x_2044__boxed_6770_);
return v_res_6771_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6772_, lean_object* v_req_6773_){
_start:
{
lean_object* v___x_6775_; 
v___x_6775_ = l_Lasm_Fetch_respond(v_handler_6772_, v_req_6773_);
return v___x_6775_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6776_, lean_object* v_req_6777_, lean_object* v___y_6778_){
_start:
{
lean_object* v_res_6779_; 
v_res_6779_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6776_, v_req_6777_);
return v_res_6779_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6780_, lean_object* v___f_6781_){
_start:
{
lean_object* v___x_6783_; 
v___x_6783_ = lean_apply_2(v_val_6780_, v___f_6781_, lean_box(0));
return v___x_6783_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6784_, lean_object* v___f_6785_, lean_object* v___y_6786_){
_start:
{
lean_object* v_res_6787_; 
v_res_6787_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6784_, v___f_6785_);
return v_res_6787_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6788_){
_start:
{
lean_object* v___x_6790_; 
v___x_6790_ = l_Lasm_Fetch_Request_readAll(v___x_6788_);
return v___x_6790_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6791_, lean_object* v___y_6792_){
_start:
{
lean_object* v_res_6793_; 
v_res_6793_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6791_);
return v_res_6793_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6799_; lean_object* v___x_6800_; 
v___x_6799_ = 65536;
v___x_6800_ = lean_box_uint32(v___x_6799_);
return v___x_6800_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6801_; lean_object* v___x_6802_; lean_object* v___f_6803_; 
v___f_6801_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6802_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6803_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6803_, 0, v___f_6801_);
lean_closure_set(v___f_6803_, 1, v___x_6802_);
return v___f_6803_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6804_, lean_object* v_options_6805_){
_start:
{
lean_object* v___f_6807_; lean_object* v___f_6808_; lean_object* v___f_6809_; lean_object* v___f_6810_; lean_object* v___x_6811_; 
v___f_6807_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6808_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6809_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6810_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6811_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6811_) == 0)
{
lean_object* v_a_6812_; lean_object* v___x_6814_; uint8_t v_isShared_6815_; uint8_t v_isSharedCheck_6882_; 
v_a_6812_ = lean_ctor_get(v___x_6811_, 0);
v_isSharedCheck_6882_ = !lean_is_exclusive(v___x_6811_);
if (v_isSharedCheck_6882_ == 0)
{
v___x_6814_ = v___x_6811_;
v_isShared_6815_ = v_isSharedCheck_6882_;
goto v_resetjp_6813_;
}
else
{
lean_inc(v_a_6812_);
lean_dec(v___x_6811_);
v___x_6814_ = lean_box(0);
v_isShared_6815_ = v_isSharedCheck_6882_;
goto v_resetjp_6813_;
}
v_resetjp_6813_:
{
lean_object* v_snd_6816_; lean_object* v_fst_6817_; lean_object* v_fst_6818_; lean_object* v_snd_6819_; lean_object* v___f_6820_; lean_object* v___x_6821_; lean_object* v_req_6823_; lean_object* v___x_6861_; lean_object* v___x_6862_; lean_object* v___x_6863_; uint8_t v___x_6864_; 
v_snd_6816_ = lean_ctor_get(v_a_6812_, 1);
lean_inc(v_snd_6816_);
v_fst_6817_ = lean_ctor_get(v_a_6812_, 0);
lean_inc_n(v_fst_6817_, 2);
lean_dec(v_a_6812_);
v_fst_6818_ = lean_ctor_get(v_snd_6816_, 0);
lean_inc_n(v_fst_6818_, 2);
v_snd_6819_ = lean_ctor_get(v_snd_6816_, 1);
lean_inc_n(v_snd_6819_, 2);
lean_dec(v_snd_6816_);
v___f_6820_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6821_ = l_ByteArray_empty;
v___x_6861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6861_, 0, v_fst_6817_);
lean_ctor_set(v___x_6861_, 1, v_fst_6818_);
lean_ctor_set(v___x_6861_, 2, v_snd_6819_);
lean_ctor_set(v___x_6861_, 3, v___x_6821_);
lean_ctor_set(v___x_6861_, 4, v___f_6820_);
lean_inc_ref(v___x_6861_);
v___x_6862_ = l_Lasm_Fetch_Request_path(v___x_6861_);
v___x_6863_ = lean_apply_1(v_options_6805_, v___x_6862_);
v___x_6864_ = lean_unbox(v___x_6863_);
if (v___x_6864_ == 0)
{
lean_object* v___f_6865_; lean_object* v___x_6866_; lean_object* v___x_6867_; uint8_t v___x_6868_; lean_object* v___x_6869_; lean_object* v___x_6870_; 
v___f_6865_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6865_, 0, v___x_6861_);
v___x_6866_ = lean_unsigned_to_nat(0u);
v___x_6867_ = lean_io_as_task(v___f_6865_, v___x_6866_);
v___x_6868_ = 1;
v___x_6869_ = lean_task_bind(v___x_6867_, v___f_6807_, v___x_6866_, v___x_6868_);
v___x_6870_ = lean_task_get_own(v___x_6869_);
if (lean_obj_tag(v___x_6870_) == 0)
{
lean_object* v_a_6871_; lean_object* v___x_6873_; uint8_t v_isShared_6874_; uint8_t v_isSharedCheck_6878_; 
lean_dec(v_snd_6819_);
lean_dec(v_fst_6818_);
lean_dec(v_fst_6817_);
lean_del_object(v___x_6814_);
lean_dec_ref(v_handler_6804_);
v_a_6871_ = lean_ctor_get(v___x_6870_, 0);
v_isSharedCheck_6878_ = !lean_is_exclusive(v___x_6870_);
if (v_isSharedCheck_6878_ == 0)
{
v___x_6873_ = v___x_6870_;
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
else
{
lean_inc(v_a_6871_);
lean_dec(v___x_6870_);
v___x_6873_ = lean_box(0);
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
v_resetjp_6872_:
{
lean_object* v___x_6876_; 
if (v_isShared_6874_ == 0)
{
lean_ctor_set_tag(v___x_6873_, 1);
v___x_6876_ = v___x_6873_;
goto v_reusejp_6875_;
}
else
{
lean_object* v_reuseFailAlloc_6877_; 
v_reuseFailAlloc_6877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6877_, 0, v_a_6871_);
v___x_6876_ = v_reuseFailAlloc_6877_;
goto v_reusejp_6875_;
}
v_reusejp_6875_:
{
return v___x_6876_;
}
}
}
else
{
lean_object* v_a_6879_; lean_object* v___f_6880_; lean_object* v___x_6881_; 
v_a_6879_ = lean_ctor_get(v___x_6870_, 0);
lean_inc(v_a_6879_);
lean_dec_ref_known(v___x_6870_, 1);
v___f_6880_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6881_, 0, v_fst_6817_);
lean_ctor_set(v___x_6881_, 1, v_fst_6818_);
lean_ctor_set(v___x_6881_, 2, v_snd_6819_);
lean_ctor_set(v___x_6881_, 3, v_a_6879_);
lean_ctor_set(v___x_6881_, 4, v___f_6880_);
v_req_6823_ = v___x_6881_;
goto v___jp_6822_;
}
}
else
{
lean_dec(v_snd_6819_);
lean_dec(v_fst_6818_);
lean_dec(v_fst_6817_);
v_req_6823_ = v___x_6861_;
goto v___jp_6822_;
}
v___jp_6822_:
{
lean_object* v___f_6824_; lean_object* v___x_6825_; lean_object* v___x_6826_; uint8_t v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6829_; 
lean_inc_ref(v_req_6823_);
v___f_6824_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6824_, 0, v_handler_6804_);
lean_closure_set(v___f_6824_, 1, v_req_6823_);
v___x_6825_ = lean_unsigned_to_nat(0u);
v___x_6826_ = lean_io_as_task(v___f_6824_, v___x_6825_);
v___x_6827_ = 1;
v___x_6828_ = lean_task_bind(v___x_6826_, v___f_6810_, v___x_6825_, v___x_6827_);
v___x_6829_ = lean_task_get_own(v___x_6828_);
if (lean_obj_tag(v___x_6829_) == 0)
{
lean_object* v_a_6830_; lean_object* v___x_6832_; 
lean_dec_ref(v_req_6823_);
v_a_6830_ = lean_ctor_get(v___x_6829_, 0);
lean_inc(v_a_6830_);
lean_dec_ref_known(v___x_6829_, 1);
if (v_isShared_6815_ == 0)
{
lean_ctor_set_tag(v___x_6814_, 1);
lean_ctor_set(v___x_6814_, 0, v_a_6830_);
v___x_6832_ = v___x_6814_;
goto v_reusejp_6831_;
}
else
{
lean_object* v_reuseFailAlloc_6833_; 
v_reuseFailAlloc_6833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6833_, 0, v_a_6830_);
v___x_6832_ = v_reuseFailAlloc_6833_;
goto v_reusejp_6831_;
}
v_reusejp_6831_:
{
return v___x_6832_;
}
}
else
{
lean_object* v_a_6834_; lean_object* v_stream_6835_; 
lean_del_object(v___x_6814_);
v_a_6834_ = lean_ctor_get(v___x_6829_, 0);
lean_inc(v_a_6834_);
lean_dec_ref_known(v___x_6829_, 1);
v_stream_6835_ = lean_ctor_get(v_a_6834_, 2);
if (lean_obj_tag(v_stream_6835_) == 0)
{
uint16_t v_status_6836_; lean_object* v_headers_6837_; lean_object* v_body_6838_; lean_object* v_method_6839_; uint8_t v___x_6840_; 
v_status_6836_ = lean_ctor_get_uint16(v_a_6834_, sizeof(void*)*3);
v_headers_6837_ = lean_ctor_get(v_a_6834_, 0);
lean_inc_ref(v_headers_6837_);
v_body_6838_ = lean_ctor_get(v_a_6834_, 1);
lean_inc_ref(v_body_6838_);
lean_dec(v_a_6834_);
v_method_6839_ = lean_ctor_get(v_req_6823_, 0);
lean_inc_ref(v_method_6839_);
lean_dec_ref(v_req_6823_);
v___x_6840_ = l_Lasm_Fetch_bodyless(v_method_6839_, v_status_6836_);
lean_dec_ref(v_method_6839_);
if (v___x_6840_ == 0)
{
lean_object* v___x_6841_; 
v___x_6841_ = lasm_fetch_send_response(v_status_6836_, v_headers_6837_, v_body_6838_);
lean_dec_ref(v_body_6838_);
lean_dec_ref(v_headers_6837_);
return v___x_6841_;
}
else
{
lean_object* v___x_6842_; 
lean_dec_ref(v_body_6838_);
v___x_6842_ = lasm_fetch_send_response(v_status_6836_, v_headers_6837_, v___x_6821_);
lean_dec_ref(v_headers_6837_);
return v___x_6842_;
}
}
else
{
uint16_t v_status_6843_; lean_object* v_headers_6844_; lean_object* v_val_6845_; lean_object* v___f_6846_; lean_object* v___x_6847_; 
lean_inc_ref(v_stream_6835_);
v_status_6843_ = lean_ctor_get_uint16(v_a_6834_, sizeof(void*)*3);
v_headers_6844_ = lean_ctor_get(v_a_6834_, 0);
lean_inc_ref(v_headers_6844_);
lean_dec(v_a_6834_);
v_val_6845_ = lean_ctor_get(v_stream_6835_, 0);
lean_inc(v_val_6845_);
lean_dec_ref_known(v_stream_6835_, 1);
v___f_6846_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6846_, 0, v_val_6845_);
lean_closure_set(v___f_6846_, 1, v___f_6809_);
v___x_6847_ = lasm_fetch_start_response(v_status_6843_, v_headers_6844_);
lean_dec_ref(v_headers_6844_);
if (lean_obj_tag(v___x_6847_) == 0)
{
lean_object* v_method_6848_; uint8_t v___x_6849_; 
lean_dec_ref_known(v___x_6847_, 1);
v_method_6848_ = lean_ctor_get(v_req_6823_, 0);
lean_inc_ref(v_method_6848_);
lean_dec_ref(v_req_6823_);
v___x_6849_ = l_Lasm_Fetch_bodyless(v_method_6848_, v_status_6843_);
lean_dec_ref(v_method_6848_);
if (v___x_6849_ == 0)
{
lean_object* v___x_6850_; lean_object* v___x_6851_; lean_object* v___x_6852_; 
v___x_6850_ = lean_io_as_task(v___f_6846_, v___x_6825_);
v___x_6851_ = lean_task_bind(v___x_6850_, v___f_6808_, v___x_6825_, v___x_6827_);
v___x_6852_ = lean_task_get_own(v___x_6851_);
if (lean_obj_tag(v___x_6852_) == 0)
{
lean_object* v_a_6853_; lean_object* v___x_6854_; lean_object* v___x_6855_; lean_object* v___x_6856_; lean_object* v___x_6857_; 
v_a_6853_ = lean_ctor_get(v___x_6852_, 0);
lean_inc(v_a_6853_);
lean_dec_ref_known(v___x_6852_, 1);
v___x_6854_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6855_ = lean_io_error_to_string(v_a_6853_);
v___x_6856_ = lean_string_append(v___x_6854_, v___x_6855_);
lean_dec_ref(v___x_6855_);
v___x_6857_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6856_);
if (lean_obj_tag(v___x_6857_) == 0)
{
lean_object* v___x_6858_; 
lean_dec_ref_known(v___x_6857_, 1);
v___x_6858_ = lasm_fetch_finish(v___x_6849_);
return v___x_6858_;
}
else
{
return v___x_6857_;
}
}
else
{
lean_object* v___x_6859_; 
lean_dec_ref_known(v___x_6852_, 1);
v___x_6859_ = lasm_fetch_finish(v___x_6827_);
return v___x_6859_;
}
}
else
{
lean_object* v___x_6860_; 
lean_dec_ref(v___f_6846_);
v___x_6860_ = lasm_fetch_finish(v___x_6827_);
return v___x_6860_;
}
}
else
{
lean_dec_ref(v___f_6846_);
lean_dec_ref(v_req_6823_);
return v___x_6847_;
}
}
}
}
}
}
else
{
lean_object* v_a_6883_; lean_object* v___x_6885_; uint8_t v_isShared_6886_; uint8_t v_isSharedCheck_6890_; 
lean_dec_ref(v_options_6805_);
lean_dec_ref(v_handler_6804_);
v_a_6883_ = lean_ctor_get(v___x_6811_, 0);
v_isSharedCheck_6890_ = !lean_is_exclusive(v___x_6811_);
if (v_isSharedCheck_6890_ == 0)
{
v___x_6885_ = v___x_6811_;
v_isShared_6886_ = v_isSharedCheck_6890_;
goto v_resetjp_6884_;
}
else
{
lean_inc(v_a_6883_);
lean_dec(v___x_6811_);
v___x_6885_ = lean_box(0);
v_isShared_6886_ = v_isSharedCheck_6890_;
goto v_resetjp_6884_;
}
v_resetjp_6884_:
{
lean_object* v___x_6888_; 
if (v_isShared_6886_ == 0)
{
v___x_6888_ = v___x_6885_;
goto v_reusejp_6887_;
}
else
{
lean_object* v_reuseFailAlloc_6889_; 
v_reuseFailAlloc_6889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6889_, 0, v_a_6883_);
v___x_6888_ = v_reuseFailAlloc_6889_;
goto v_reusejp_6887_;
}
v_reusejp_6887_:
{
return v___x_6888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6891_, lean_object* v_options_6892_, lean_object* v_a_6893_){
_start:
{
lean_object* v_res_6894_; 
v_res_6894_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6891_, v_options_6892_);
return v_res_6894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6898_, lean_object* v_handler_6899_){
_start:
{
uint8_t v___x_6901_; 
v___x_6901_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6901_ == 0)
{
uint8_t v___x_6902_; 
v___x_6902_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6902_ == 0)
{
uint8_t v___x_6903_; 
v___x_6903_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6903_ == 0)
{
uint8_t v___x_6904_; 
v___x_6904_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6904_ == 0)
{
lean_object* v___x_6905_; lean_object* v___x_6906_; 
lean_dec_ref(v_handler_6899_);
lean_dec_ref(v_options_6898_);
v___x_6905_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6906_, 0, v___x_6905_);
return v___x_6906_;
}
else
{
lean_object* v___x_6907_; 
v___x_6907_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6907_) == 0)
{
lean_object* v_a_6908_; uint8_t v___x_6909_; 
v_a_6908_ = lean_ctor_get(v___x_6907_, 0);
lean_inc(v_a_6908_);
lean_dec_ref_known(v___x_6907_, 1);
v___x_6909_ = lean_unbox(v_a_6908_);
lean_dec(v_a_6908_);
if (v___x_6909_ == 0)
{
lean_object* v___x_6910_; 
v___x_6910_ = l_Lasm_Fetch_serveNode(v_handler_6899_, v_options_6898_);
return v___x_6910_;
}
else
{
lean_object* v___x_6911_; 
v___x_6911_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6899_, v_options_6898_);
if (lean_obj_tag(v___x_6911_) == 0)
{
lean_object* v_a_6912_; lean_object* v___x_6913_; 
v_a_6912_ = lean_ctor_get(v___x_6911_, 0);
lean_inc(v_a_6912_);
lean_dec_ref_known(v___x_6911_, 1);
v___x_6913_ = l_Lasm_JS_exportDefault(v_a_6912_);
return v___x_6913_;
}
else
{
lean_object* v_a_6914_; lean_object* v___x_6916_; uint8_t v_isShared_6917_; uint8_t v_isSharedCheck_6921_; 
v_a_6914_ = lean_ctor_get(v___x_6911_, 0);
v_isSharedCheck_6921_ = !lean_is_exclusive(v___x_6911_);
if (v_isSharedCheck_6921_ == 0)
{
v___x_6916_ = v___x_6911_;
v_isShared_6917_ = v_isSharedCheck_6921_;
goto v_resetjp_6915_;
}
else
{
lean_inc(v_a_6914_);
lean_dec(v___x_6911_);
v___x_6916_ = lean_box(0);
v_isShared_6917_ = v_isSharedCheck_6921_;
goto v_resetjp_6915_;
}
v_resetjp_6915_:
{
lean_object* v___x_6919_; 
if (v_isShared_6917_ == 0)
{
v___x_6919_ = v___x_6916_;
goto v_reusejp_6918_;
}
else
{
lean_object* v_reuseFailAlloc_6920_; 
v_reuseFailAlloc_6920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6920_, 0, v_a_6914_);
v___x_6919_ = v_reuseFailAlloc_6920_;
goto v_reusejp_6918_;
}
v_reusejp_6918_:
{
return v___x_6919_;
}
}
}
}
}
else
{
lean_object* v_a_6922_; lean_object* v___x_6924_; uint8_t v_isShared_6925_; uint8_t v_isSharedCheck_6929_; 
lean_dec_ref(v_handler_6899_);
lean_dec_ref(v_options_6898_);
v_a_6922_ = lean_ctor_get(v___x_6907_, 0);
v_isSharedCheck_6929_ = !lean_is_exclusive(v___x_6907_);
if (v_isSharedCheck_6929_ == 0)
{
v___x_6924_ = v___x_6907_;
v_isShared_6925_ = v_isSharedCheck_6929_;
goto v_resetjp_6923_;
}
else
{
lean_inc(v_a_6922_);
lean_dec(v___x_6907_);
v___x_6924_ = lean_box(0);
v_isShared_6925_ = v_isSharedCheck_6929_;
goto v_resetjp_6923_;
}
v_resetjp_6923_:
{
lean_object* v___x_6927_; 
if (v_isShared_6925_ == 0)
{
v___x_6927_ = v___x_6924_;
goto v_reusejp_6926_;
}
else
{
lean_object* v_reuseFailAlloc_6928_; 
v_reuseFailAlloc_6928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6928_, 0, v_a_6922_);
v___x_6927_ = v_reuseFailAlloc_6928_;
goto v_reusejp_6926_;
}
v_reusejp_6926_:
{
return v___x_6927_;
}
}
}
}
}
else
{
lean_object* v___x_6930_; 
v___x_6930_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6899_, v_options_6898_);
return v___x_6930_;
}
}
else
{
lean_object* v___x_6931_; 
v___x_6931_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6899_, v_options_6898_);
return v___x_6931_;
}
}
else
{
lean_object* v___x_6932_; 
v___x_6932_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6899_, v_options_6898_);
return v___x_6932_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6933_, lean_object* v_handler_6934_, lean_object* v_a_6935_){
_start:
{
lean_object* v_res_6936_; 
v_res_6936_ = l_Lasm_Fetch_serveWith(v_options_6933_, v_handler_6934_);
return v_res_6936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6937_){
_start:
{
lean_object* v___f_6939_; lean_object* v___x_6940_; 
v___f_6939_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6940_ = l_Lasm_Fetch_serveWith(v___f_6939_, v_handler_6937_);
return v___x_6940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6941_, lean_object* v_a_6942_){
_start:
{
lean_object* v_res_6943_; 
v_res_6943_ = l_Lasm_Fetch_serve(v_handler_6941_);
return v_res_6943_;
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
