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
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
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
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(lean_object* v_s_376_, lean_object* v_pos_377_){
_start:
{
lean_object* v_str_378_; lean_object* v_startInclusive_379_; lean_object* v_endExclusive_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v_decide_384_; 
v_str_378_ = lean_ctor_get(v_s_376_, 0);
v_startInclusive_379_ = lean_ctor_get(v_s_376_, 1);
v_endExclusive_380_ = lean_ctor_get(v_s_376_, 2);
v___x_381_ = lean_nat_add(v_startInclusive_379_, v_pos_377_);
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_nat_sub(v_endExclusive_380_, v___x_381_);
v_decide_384_ = lean_nat_dec_eq(v___x_382_, v___x_383_);
lean_dec(v___x_383_);
if (v_decide_384_ == 0)
{
uint32_t v___x_385_; uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_385_ = lean_string_utf8_get_fast(v_str_378_, v___x_381_);
v___x_386_ = 47;
v___x_387_ = lean_uint32_dec_eq(v___x_385_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_388_ = lean_string_utf8_next_fast(v_str_378_, v___x_381_);
v___x_389_ = lean_nat_sub(v___x_388_, v___x_381_);
lean_dec(v___x_381_);
v___x_390_ = lean_nat_add(v_pos_377_, v___x_389_);
lean_dec(v___x_389_);
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = lean_nat_add(v_pos_377_, v___x_391_);
v___x_393_ = lean_nat_dec_le(v___x_392_, v___x_390_);
lean_dec(v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v___x_390_);
return v_pos_377_;
}
else
{
lean_dec(v_pos_377_);
v_pos_377_ = v___x_390_;
goto _start;
}
}
else
{
lean_dec(v___x_381_);
return v_pos_377_;
}
}
else
{
lean_dec(v___x_381_);
return v_pos_377_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1___boxed(lean_object* v_s_395_, lean_object* v_pos_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v_s_395_, v_pos_396_);
lean_dec_ref(v_s_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(lean_object* v_s_398_, lean_object* v_pos_399_){
_start:
{
lean_object* v_str_400_; lean_object* v_startInclusive_401_; lean_object* v_endExclusive_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v_decide_406_; 
v_str_400_ = lean_ctor_get(v_s_398_, 0);
v_startInclusive_401_ = lean_ctor_get(v_s_398_, 1);
v_endExclusive_402_ = lean_ctor_get(v_s_398_, 2);
v___x_403_ = lean_nat_add(v_startInclusive_401_, v_pos_399_);
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_nat_sub(v_endExclusive_402_, v___x_403_);
v_decide_406_ = lean_nat_dec_eq(v___x_404_, v___x_405_);
lean_dec(v___x_405_);
if (v_decide_406_ == 0)
{
uint32_t v___x_407_; uint32_t v___x_408_; uint8_t v___x_409_; 
v___x_407_ = lean_string_utf8_get_fast(v_str_400_, v___x_403_);
v___x_408_ = 63;
v___x_409_ = lean_uint32_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
uint32_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 35;
v___x_411_ = lean_uint32_dec_eq(v___x_407_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_412_ = lean_string_utf8_next_fast(v_str_400_, v___x_403_);
v___x_413_ = lean_nat_sub(v___x_412_, v___x_403_);
lean_dec(v___x_403_);
v___x_414_ = lean_nat_add(v_pos_399_, v___x_413_);
lean_dec(v___x_413_);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_nat_add(v_pos_399_, v___x_415_);
v___x_417_ = lean_nat_dec_le(v___x_416_, v___x_414_);
lean_dec(v___x_416_);
if (v___x_417_ == 0)
{
lean_dec(v___x_414_);
return v_pos_399_;
}
else
{
lean_dec(v_pos_399_);
v_pos_399_ = v___x_414_;
goto _start;
}
}
else
{
lean_dec(v___x_403_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_403_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_403_);
return v_pos_399_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0___boxed(lean_object* v_s_419_, lean_object* v_pos_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v_s_419_, v_pos_420_);
lean_dec_ref(v_s_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(lean_object* v_url_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v_beforeQuery_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_string_utf8_byte_size(v_url_423_);
lean_inc_ref(v_url_423_);
v___x_426_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_426_, 0, v_url_423_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
lean_ctor_set(v___x_426_, 2, v___x_425_);
v___x_427_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v___x_426_, v___x_424_);
lean_dec_ref_known(v___x_426_, 3);
v___x_428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_428_, 0, v_url_423_);
lean_ctor_set(v___x_428_, 1, v___x_424_);
lean_ctor_set(v___x_428_, 2, v___x_427_);
v_beforeQuery_429_ = l_String_Slice_toString(v___x_428_);
lean_dec_ref_known(v___x_428_, 3);
v___x_430_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0));
v___x_431_ = lean_box(0);
v___x_432_ = l_String_splitOnAux(v_beforeQuery_429_, v___x_430_, v___x_424_, v___x_424_, v___x_424_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 1)
{
lean_object* v_tail_433_; 
v_tail_433_ = lean_ctor_get(v___x_432_, 1);
lean_inc(v_tail_433_);
lean_dec_ref_known(v___x_432_, 2);
if (lean_obj_tag(v_tail_433_) == 1)
{
lean_object* v_tail_434_; 
v_tail_434_ = lean_ctor_get(v_tail_433_, 1);
if (lean_obj_tag(v_tail_434_) == 0)
{
lean_object* v_head_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref(v_beforeQuery_429_);
v_head_435_ = lean_ctor_get(v_tail_433_, 0);
lean_inc_n(v_head_435_, 2);
lean_dec_ref_known(v_tail_433_, 2);
v___x_436_ = lean_string_utf8_byte_size(v_head_435_);
v___x_437_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_437_, 0, v_head_435_);
lean_ctor_set(v___x_437_, 1, v___x_424_);
lean_ctor_set(v___x_437_, 2, v___x_436_);
v___x_438_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__1(v___x_437_, v___x_424_);
lean_dec_ref_known(v___x_437_, 3);
v___x_439_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_439_, 0, v_head_435_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
lean_ctor_set(v___x_439_, 2, v___x_436_);
v___x_440_ = l_String_Slice_toString(v___x_439_);
lean_dec_ref_known(v___x_439_, 3);
return v___x_440_;
}
else
{
lean_dec_ref_known(v_tail_433_, 2);
return v_beforeQuery_429_;
}
}
else
{
lean_dec(v_tail_433_);
return v_beforeQuery_429_;
}
}
else
{
lean_dec(v___x_432_);
return v_beforeQuery_429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(lean_object* v_r_441_){
_start:
{
lean_object* v___y_443_; lean_object* v_url_448_; lean_object* v_raw_449_; lean_object* v___x_450_; 
v_url_448_ = lean_ctor_get(v_r_441_, 1);
lean_inc_ref(v_url_448_);
lean_dec_ref(v_r_441_);
v_raw_449_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(v_url_448_);
lean_inc_ref(v_raw_449_);
v___x_450_ = lean_string_data(v_raw_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
v___y_443_ = v_raw_449_;
goto v___jp_442_;
}
else
{
lean_object* v_head_451_; lean_object* v_tail_452_; uint32_t v___x_453_; uint32_t v___x_454_; uint8_t v___x_455_; 
v_head_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_head_451_);
v_tail_452_ = lean_ctor_get(v___x_450_, 1);
lean_inc(v_tail_452_);
lean_dec_ref_known(v___x_450_, 2);
v___x_453_ = 47;
v___x_454_ = lean_unbox_uint32(v_head_451_);
v___x_455_ = lean_uint32_dec_eq(v___x_454_, v___x_453_);
if (v___x_455_ == 0)
{
uint32_t v___x_456_; uint32_t v___x_457_; uint8_t v___x_458_; 
v___x_456_ = 92;
v___x_457_ = lean_unbox_uint32(v_head_451_);
lean_dec(v_head_451_);
v___x_458_ = lean_uint32_dec_eq(v___x_457_, v___x_456_);
if (v___x_458_ == 0)
{
lean_dec(v_tail_452_);
v___y_443_ = v_raw_449_;
goto v___jp_442_;
}
else
{
lean_object* v___x_459_; 
lean_dec_ref(v_raw_449_);
v___x_459_ = lean_string_mk(v_tail_452_);
v___y_443_ = v___x_459_;
goto v___jp_442_;
}
}
else
{
lean_object* v___x_460_; 
lean_dec(v_head_451_);
lean_dec_ref(v_raw_449_);
v___x_460_ = lean_string_mk(v_tail_452_);
v___y_443_ = v___x_460_;
goto v___jp_442_;
}
}
v___jp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_444_ = lean_box(0);
v___x_445_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(v___y_443_);
v___x_446_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(v___x_444_, v___x_445_);
v___x_447_ = l_List_reverse___redArg(v___x_446_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_462_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_463_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_464_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_462_);
v___x_465_ = l_String_intercalate(v___x_463_, v___x_464_);
v___x_466_ = lean_string_append(v___x_463_, v___x_465_);
lean_dec_ref(v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_467_, lean_object* v_pos_468_){
_start:
{
lean_object* v_str_469_; lean_object* v_startInclusive_470_; lean_object* v_endExclusive_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v_decide_475_; 
v_str_469_ = lean_ctor_get(v_s_467_, 0);
v_startInclusive_470_ = lean_ctor_get(v_s_467_, 1);
v_endExclusive_471_ = lean_ctor_get(v_s_467_, 2);
v___x_472_ = lean_nat_add(v_startInclusive_470_, v_pos_468_);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_nat_sub(v_endExclusive_471_, v___x_472_);
v_decide_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
lean_dec(v___x_474_);
if (v_decide_475_ == 0)
{
uint32_t v___x_476_; uint32_t v___x_477_; uint8_t v___x_478_; 
v___x_476_ = lean_string_utf8_get_fast(v_str_469_, v___x_472_);
v___x_477_ = 35;
v___x_478_ = lean_uint32_dec_eq(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_479_ = lean_string_utf8_next_fast(v_str_469_, v___x_472_);
v___x_480_ = lean_nat_sub(v___x_479_, v___x_472_);
lean_dec(v___x_472_);
v___x_481_ = lean_nat_add(v_pos_468_, v___x_480_);
lean_dec(v___x_480_);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = lean_nat_add(v_pos_468_, v___x_482_);
v___x_484_ = lean_nat_dec_le(v___x_483_, v___x_481_);
lean_dec(v___x_483_);
if (v___x_484_ == 0)
{
lean_dec(v___x_481_);
return v_pos_468_;
}
else
{
lean_dec(v_pos_468_);
v_pos_468_ = v___x_481_;
goto _start;
}
}
else
{
lean_dec(v___x_472_);
return v_pos_468_;
}
}
else
{
lean_dec(v___x_472_);
return v_pos_468_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_486_, lean_object* v_pos_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_486_, v_pos_487_);
lean_dec_ref(v_s_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_490_){
_start:
{
lean_object* v_url_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_url_491_ = lean_ctor_get(v_r_490_, 1);
v___x_492_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_493_ = lean_unsigned_to_nat(0u);
v___x_494_ = lean_box(0);
v___x_495_ = l_String_splitOnAux(v_url_491_, v___x_492_, v___x_493_, v___x_493_, v___x_493_, v___x_494_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v___x_496_; 
v___x_496_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_496_;
}
else
{
lean_object* v_tail_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_tail_497_ = lean_ctor_get(v___x_495_, 1);
lean_inc(v_tail_497_);
lean_dec_ref_known(v___x_495_, 2);
v___x_498_ = l_String_intercalate(v___x_492_, v_tail_497_);
v___x_499_ = lean_string_utf8_byte_size(v___x_498_);
lean_inc_ref(v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_493_);
lean_ctor_set(v___x_500_, 2, v___x_499_);
v___x_501_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_500_, v___x_493_);
lean_dec_ref_known(v___x_500_, 3);
v___x_502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_502_, 0, v___x_498_);
lean_ctor_set(v___x_502_, 1, v___x_493_);
lean_ctor_set(v___x_502_, 2, v___x_501_);
v___x_503_ = l_String_Slice_toString(v___x_502_);
lean_dec_ref_known(v___x_502_, 3);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lasm_Fetch_Request_query(v_r_504_);
lean_dec_ref(v_r_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
if (lean_obj_tag(v_a_507_) == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_array_to_list(v_a_508_);
return v___x_509_;
}
else
{
lean_object* v_head_510_; lean_object* v_tail_511_; lean_object* v_val_513_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; 
v_head_510_ = lean_ctor_get(v_a_507_, 0);
v_tail_511_ = lean_ctor_get(v_a_507_, 1);
v___x_516_ = lean_string_utf8_byte_size(v_head_510_);
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = lean_nat_dec_eq(v___x_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_520_ = lean_box(0);
v___x_521_ = l_String_splitOnAux(v_head_510_, v___x_519_, v___x_517_, v___x_517_, v___x_517_, v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
v_a_507_ = v_tail_511_;
goto _start;
}
else
{
lean_object* v_head_523_; lean_object* v_tail_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_540_; 
v_head_523_ = lean_ctor_get(v___x_521_, 0);
v_tail_524_ = lean_ctor_get(v___x_521_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_540_ == 0)
{
v___x_526_ = v___x_521_;
v_isShared_527_ = v_isSharedCheck_540_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_tail_524_);
lean_inc(v_head_523_);
lean_dec(v___x_521_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_540_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
uint8_t v___x_528_; 
v___x_528_ = 1;
if (lean_obj_tag(v_tail_524_) == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_529_ = l_Lasm_Fetch_percentDecode(v_head_523_, v___x_528_);
lean_dec(v_head_523_);
v___x_530_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 1, v___x_530_);
lean_ctor_set(v___x_526_, 0, v___x_529_);
v___x_532_ = v___x_526_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
v_val_513_ = v___x_532_;
goto v___jp_512_;
}
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_534_ = l_Lasm_Fetch_percentDecode(v_head_523_, v___x_528_);
lean_dec(v_head_523_);
v___x_535_ = l_String_intercalate(v___x_519_, v_tail_524_);
v___x_536_ = l_Lasm_Fetch_percentDecode(v___x_535_, v___x_528_);
lean_dec_ref(v___x_535_);
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 1, v___x_536_);
lean_ctor_set(v___x_526_, 0, v___x_534_);
v___x_538_ = v___x_526_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
v_val_513_ = v___x_538_;
goto v___jp_512_;
}
}
}
}
}
else
{
v_a_507_ = v_tail_511_;
goto _start;
}
v___jp_512_:
{
lean_object* v___x_514_; 
v___x_514_ = lean_array_push(v_a_508_, v_val_513_);
v_a_507_ = v_tail_511_;
v_a_508_ = v___x_514_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_542_, v_a_543_);
lean_dec(v_a_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_547_ = l_Lasm_Fetch_Request_query(v_r_546_);
v___x_548_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lean_box(0);
v___x_551_ = l_String_splitOnAux(v___x_547_, v___x_548_, v___x_549_, v___x_549_, v___x_549_, v___x_550_);
lean_dec_ref(v___x_547_);
v___x_552_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_553_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lasm_Fetch_Request_queryParams(v_r_554_);
lean_dec_ref(v_r_554_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_556_, lean_object* v_x_557_){
_start:
{
if (lean_obj_tag(v_x_557_) == 0)
{
lean_object* v___x_558_; 
v___x_558_ = lean_box(0);
return v___x_558_;
}
else
{
lean_object* v_head_559_; lean_object* v_tail_560_; lean_object* v_fst_561_; lean_object* v_snd_562_; uint8_t v___x_563_; 
v_head_559_ = lean_ctor_get(v_x_557_, 0);
v_tail_560_ = lean_ctor_get(v_x_557_, 1);
v_fst_561_ = lean_ctor_get(v_head_559_, 0);
v_snd_562_ = lean_ctor_get(v_head_559_, 1);
v___x_563_ = lean_string_dec_eq(v_x_556_, v_fst_561_);
if (v___x_563_ == 0)
{
v_x_557_ = v_tail_560_;
goto _start;
}
else
{
lean_object* v___x_565_; 
lean_inc(v_snd_562_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_snd_562_);
return v___x_565_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_566_, v_x_567_);
lean_dec(v_x_567_);
lean_dec_ref(v_x_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_569_, lean_object* v_name_570_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = l_Lasm_Fetch_Request_queryParams(v_r_569_);
v___x_572_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_570_, v___x_571_);
lean_dec(v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_573_, lean_object* v_name_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_573_, v_name_574_);
lean_dec_ref(v_name_574_);
lean_dec_ref(v_r_573_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_576_, lean_object* v_x_577_, lean_object* v_x_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_577_, v_x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_580_, lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_580_, v_x_581_, v_x_582_);
lean_dec(v_x_582_);
lean_dec_ref(v_x_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
if (lean_obj_tag(v_a_584_) == 0)
{
lean_object* v___x_586_; 
v___x_586_ = l_List_reverse___redArg(v_a_585_);
return v___x_586_;
}
else
{
lean_object* v_head_587_; lean_object* v_tail_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_598_; 
v_head_587_ = lean_ctor_get(v_a_584_, 0);
v_tail_588_ = lean_ctor_get(v_a_584_, 1);
v_isSharedCheck_598_ = !lean_is_exclusive(v_a_584_);
if (v_isSharedCheck_598_ == 0)
{
v___x_590_ = v_a_584_;
v_isShared_591_ = v_isSharedCheck_598_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_tail_588_);
lean_inc(v_head_587_);
lean_dec(v_a_584_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_598_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
uint8_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_592_ = 0;
v___x_593_ = l_Lasm_Fetch_percentDecode(v_head_587_, v___x_592_);
lean_dec(v_head_587_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v_a_585_);
lean_ctor_set(v___x_590_, 0, v___x_593_);
v___x_595_ = v___x_590_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_593_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_a_585_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
v_a_584_ = v_tail_588_;
v_a_585_ = v___x_595_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
if (lean_obj_tag(v_a_599_) == 0)
{
lean_object* v___x_601_; 
v___x_601_ = l_List_reverse___redArg(v_a_600_);
return v___x_601_;
}
else
{
lean_object* v_head_602_; lean_object* v_tail_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_615_; 
v_head_602_ = lean_ctor_get(v_a_599_, 0);
v_tail_603_ = lean_ctor_get(v_a_599_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v_a_599_);
if (v_isSharedCheck_615_ == 0)
{
v___x_605_ = v_a_599_;
v_isShared_606_ = v_isSharedCheck_615_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_tail_603_);
lean_inc(v_head_602_);
lean_dec(v_a_599_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_615_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_607_ = lean_string_utf8_byte_size(v_head_602_);
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = lean_nat_dec_eq(v___x_607_, v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_611_; 
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 1, v_a_600_);
v___x_611_ = v___x_605_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_head_602_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v_a_600_);
v___x_611_ = v_reuseFailAlloc_613_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
v_a_599_ = v_tail_603_;
v_a_600_ = v___x_611_;
goto _start;
}
}
else
{
lean_del_object(v___x_605_);
lean_dec(v_head_602_);
v_a_599_ = v_tail_603_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_616_){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_617_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_616_);
v___x_618_ = lean_box(0);
v___x_619_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_617_, v___x_618_);
v___x_620_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_619_, v___x_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter___redArg(lean_object* v_x_621_, lean_object* v_h__1_622_, lean_object* v_h__2_623_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v_h__1_622_);
v___x_624_ = lean_box(0);
v___x_625_ = lean_apply_1(v_h__2_623_, v___x_624_);
return v___x_625_;
}
else
{
lean_object* v_head_626_; lean_object* v_tail_627_; lean_object* v___x_628_; 
lean_dec(v_h__2_623_);
v_head_626_ = lean_ctor_get(v_x_621_, 0);
lean_inc(v_head_626_);
v_tail_627_ = lean_ctor_get(v_x_621_, 1);
lean_inc(v_tail_627_);
lean_dec_ref_known(v_x_621_, 2);
v___x_628_ = lean_apply_2(v_h__1_622_, v_head_626_, v_tail_627_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter(lean_object* v_motive_629_, lean_object* v_x_630_, lean_object* v_h__1_631_, lean_object* v_h__2_632_){
_start:
{
if (lean_obj_tag(v_x_630_) == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec(v_h__1_631_);
v___x_633_ = lean_box(0);
v___x_634_ = lean_apply_1(v_h__2_632_, v___x_633_);
return v___x_634_;
}
else
{
lean_object* v_head_635_; lean_object* v_tail_636_; lean_object* v___x_637_; 
lean_dec(v_h__2_632_);
v_head_635_ = lean_ctor_get(v_x_630_, 0);
lean_inc(v_head_635_);
v_tail_636_ = lean_ctor_get(v_x_630_, 1);
lean_inc(v_tail_636_);
lean_dec_ref_known(v_x_630_, 2);
v___x_637_ = lean_apply_2(v_h__1_631_, v_head_635_, v_tail_636_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf(lean_object* v_url_639_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___f_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_640_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_641_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_642_ = l_ByteArray_empty;
v___f_643_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_644_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_644_, 0, v___x_640_);
lean_ctor_set(v___x_644_, 1, v_url_639_);
lean_ctor_set(v___x_644_, 2, v___x_641_);
lean_ctor_set(v___x_644_, 3, v___x_642_);
lean_ctor_set(v___x_644_, 4, v___f_643_);
v___x_645_ = l_Lasm_Fetch_Request_path(v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_649_, lean_object* v_as_650_, size_t v_sz_651_, size_t v_i_652_, lean_object* v_b_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = lean_usize_dec_lt(v_i_652_, v_sz_651_);
if (v___x_654_ == 0)
{
lean_inc_ref(v_b_653_);
return v_b_653_;
}
else
{
lean_object* v_a_655_; lean_object* v_fst_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v_a_655_ = lean_array_uget_borrowed(v_as_650_, v_i_652_);
v_fst_656_ = lean_ctor_get(v_a_655_, 0);
v___x_657_ = lean_box(0);
lean_inc(v_fst_656_);
v___x_658_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_656_);
v___x_659_ = lean_string_dec_eq(v___x_658_, v_n_649_);
lean_dec_ref(v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; size_t v___x_661_; size_t v___x_662_; 
v___x_660_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_661_ = ((size_t)1ULL);
v___x_662_ = lean_usize_add(v_i_652_, v___x_661_);
v_i_652_ = v___x_662_;
v_b_653_ = v___x_660_;
goto _start;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
lean_inc(v_a_655_);
v___x_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_664_, 0, v_a_655_);
v___x_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
lean_ctor_set(v___x_666_, 1, v___x_657_);
return v___x_666_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_667_, lean_object* v_as_668_, lean_object* v_sz_669_, lean_object* v_i_670_, lean_object* v_b_671_){
_start:
{
size_t v_sz_boxed_672_; size_t v_i_boxed_673_; lean_object* v_res_674_; 
v_sz_boxed_672_ = lean_unbox_usize(v_sz_669_);
lean_dec(v_sz_669_);
v_i_boxed_673_ = lean_unbox_usize(v_i_670_);
lean_dec(v_i_670_);
v_res_674_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_667_, v_as_668_, v_sz_boxed_672_, v_i_boxed_673_, v_b_671_);
lean_dec_ref(v_b_671_);
lean_dec_ref(v_as_668_);
lean_dec_ref(v_n_667_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_675_, lean_object* v_name_676_){
_start:
{
lean_object* v_headers_677_; lean_object* v_n_678_; lean_object* v___x_679_; lean_object* v___x_680_; size_t v_sz_681_; size_t v___x_682_; lean_object* v___x_683_; lean_object* v_fst_684_; 
v_headers_677_ = lean_ctor_get(v_r_675_, 2);
v_n_678_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_676_);
v___x_679_ = lean_box(0);
v___x_680_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_681_ = lean_array_size(v_headers_677_);
v___x_682_ = ((size_t)0ULL);
v___x_683_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_678_, v_headers_677_, v_sz_681_, v___x_682_, v___x_680_);
lean_dec_ref(v_n_678_);
v_fst_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc(v_fst_684_);
lean_dec_ref(v___x_683_);
if (lean_obj_tag(v_fst_684_) == 0)
{
return v___x_679_;
}
else
{
lean_object* v_val_685_; 
v_val_685_ = lean_ctor_get(v_fst_684_, 0);
lean_inc(v_val_685_);
lean_dec_ref_known(v_fst_684_, 1);
if (lean_obj_tag(v_val_685_) == 0)
{
return v___x_679_;
}
else
{
lean_object* v_val_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_694_; 
v_val_686_ = lean_ctor_get(v_val_685_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v_val_685_);
if (v_isSharedCheck_694_ == 0)
{
v___x_688_ = v_val_685_;
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_val_686_);
lean_dec(v_val_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_snd_690_; lean_object* v___x_692_; 
v_snd_690_ = lean_ctor_get(v_val_686_, 1);
lean_inc(v_snd_690_);
lean_dec(v_val_686_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v_snd_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_snd_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_695_, lean_object* v_name_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lasm_Fetch_Request_header_x3f(v_r_695_, v_name_696_);
lean_dec_ref(v_r_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_698_){
_start:
{
lean_object* v_body_699_; uint8_t v___x_700_; 
v_body_699_ = lean_ctor_get(v_r_698_, 3);
lean_inc_ref(v_body_699_);
lean_dec_ref(v_r_698_);
v___x_700_ = lean_string_validate_utf8(v_body_699_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; 
lean_dec_ref(v_body_699_);
v___x_701_ = lean_box(0);
return v___x_701_;
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_string_from_utf8_unchecked(v_body_699_);
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lasm_Fetch_Request_text_x3f(v_r_704_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v___x_706_; 
v___x_706_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_706_;
}
else
{
lean_object* v_val_707_; 
v_val_707_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_val_707_);
lean_dec_ref_known(v___x_705_, 1);
return v_val_707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_708_, lean_object* v_r_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_710_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_720_; 
lean_dec_ref(v_r_709_);
lean_dec_ref(v_acc_708_);
v_a_712_ = lean_ctor_get(v_x_710_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v_x_710_);
if (v_isSharedCheck_720_ == 0)
{
v___x_714_ = v_x_710_;
v_isShared_715_ = v_isSharedCheck_720_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v_x_710_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_720_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_719_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; 
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
return v___x_718_;
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_736_; 
v_a_721_ = lean_ctor_get(v_x_710_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_710_);
if (v_isSharedCheck_736_ == 0)
{
v___x_723_ = v_x_710_;
v_isShared_724_ = v_isSharedCheck_736_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v_x_710_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_736_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
if (lean_obj_tag(v_a_721_) == 0)
{
lean_object* v___x_726_; 
lean_dec_ref(v_r_709_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v_acc_708_);
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_acc_708_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
}
else
{
lean_object* v_val_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
lean_del_object(v___x_723_);
v_val_729_ = lean_ctor_get(v_a_721_, 0);
lean_inc(v_val_729_);
lean_dec_ref_known(v_a_721_, 1);
v___x_730_ = lean_unsigned_to_nat(0u);
v___x_731_ = lean_byte_array_size(v_acc_708_);
v___x_732_ = lean_byte_array_size(v_val_729_);
v___x_733_ = 0;
v___x_734_ = lean_byte_array_copy_slice(v_val_729_, v___x_730_, v_acc_708_, v___x_731_, v___x_732_, v___x_733_);
lean_dec(v_val_729_);
v___x_735_ = l_Lasm_Fetch_Request_readAll_loop(v_r_709_, v___x_734_);
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_737_, lean_object* v_r_738_, lean_object* v_x_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_737_, v_r_738_, v_x_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_742_, lean_object* v_acc_743_){
_start:
{
lean_object* v_read_745_; lean_object* v___f_746_; lean_object* v___x_747_; uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_read_745_ = lean_ctor_get(v_r_742_, 4);
lean_inc_ref(v_read_745_);
v___f_746_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_746_, 0, v_acc_743_);
lean_closure_set(v___f_746_, 1, v_r_742_);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = 0;
v___x_749_ = lean_apply_1(v_read_745_, lean_box(0));
v___x_750_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_747_, v___x_748_, v___x_749_, v___f_746_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_751_, lean_object* v_acc_752_, lean_object* v_a_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lasm_Fetch_Request_readAll_loop(v_r_751_, v_acc_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_755_){
_start:
{
lean_object* v_body_757_; lean_object* v___x_758_; 
v_body_757_ = lean_ctor_get(v_r_755_, 3);
lean_inc_ref(v_body_757_);
v___x_758_ = l_Lasm_Fetch_Request_readAll_loop(v_r_755_, v_body_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lasm_Fetch_Request_readAll(v_r_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_763_, lean_object* v_contentType_764_, uint16_t v_status_765_){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_766_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
lean_ctor_set(v___x_767_, 1, v_contentType_764_);
v___x_768_ = lean_unsigned_to_nat(1u);
v___x_769_ = lean_mk_empty_array_with_capacity(v___x_768_);
v___x_770_ = lean_array_push(v___x_769_, v___x_767_);
v___x_771_ = lean_box(0);
v___x_772_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_772_, 0, v___x_770_);
lean_ctor_set(v___x_772_, 1, v_body_763_);
lean_ctor_set(v___x_772_, 2, v___x_771_);
lean_ctor_set_uint16(v___x_772_, sizeof(void*)*3, v_status_765_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_773_, lean_object* v_contentType_774_, lean_object* v_status_775_){
_start:
{
uint16_t v_status_boxed_776_; lean_object* v_res_777_; 
v_status_boxed_776_ = lean_unbox(v_status_775_);
v_res_777_ = l_Lasm_Fetch_Response_withBody(v_body_773_, v_contentType_774_, v_status_boxed_776_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_779_, uint16_t v_status_780_){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = lean_string_to_utf8(v_body_779_);
v___x_782_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_783_ = l_Lasm_Fetch_Response_withBody(v___x_781_, v___x_782_, v_status_780_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_784_, lean_object* v_status_785_){
_start:
{
uint16_t v_status_boxed_786_; lean_object* v_res_787_; 
v_status_boxed_786_ = lean_unbox(v_status_785_);
v_res_787_ = l_Lasm_Fetch_Response_text(v_body_784_, v_status_boxed_786_);
lean_dec_ref(v_body_784_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_789_, uint16_t v_status_790_){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = lean_string_to_utf8(v_body_789_);
v___x_792_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_793_ = l_Lasm_Fetch_Response_withBody(v___x_791_, v___x_792_, v_status_790_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_794_, lean_object* v_status_795_){
_start:
{
uint16_t v_status_boxed_796_; lean_object* v_res_797_; 
v_status_boxed_796_ = lean_unbox(v_status_795_);
v_res_797_ = l_Lasm_Fetch_Response_html(v_body_794_, v_status_boxed_796_);
lean_dec_ref(v_body_794_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_799_, uint16_t v_status_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = lean_string_to_utf8(v_body_799_);
v___x_802_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_803_ = l_Lasm_Fetch_Response_withBody(v___x_801_, v___x_802_, v_status_800_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_804_, lean_object* v_status_805_){
_start:
{
uint16_t v_status_boxed_806_; lean_object* v_res_807_; 
v_status_boxed_806_ = lean_unbox(v_status_805_);
v_res_807_ = l_Lasm_Fetch_Response_json(v_body_804_, v_status_boxed_806_);
lean_dec_ref(v_body_804_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_808_, lean_object* v_contentType_809_, uint16_t v_status_810_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lasm_Fetch_Response_withBody(v_body_808_, v_contentType_809_, v_status_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_812_, lean_object* v_contentType_813_, lean_object* v_status_814_){
_start:
{
uint16_t v_status_boxed_815_; lean_object* v_res_816_; 
v_status_boxed_815_ = lean_unbox(v_status_814_);
v_res_816_ = l_Lasm_Fetch_Response_bytes(v_body_812_, v_contentType_813_, v_status_boxed_815_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_818_, uint16_t v_status_819_){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_820_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
lean_ctor_set(v___x_821_, 1, v_location_818_);
v___x_822_ = lean_unsigned_to_nat(1u);
v___x_823_ = lean_mk_empty_array_with_capacity(v___x_822_);
v___x_824_ = lean_array_push(v___x_823_, v___x_821_);
v___x_825_ = l_ByteArray_empty;
v___x_826_ = lean_box(0);
v___x_827_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_827_, 0, v___x_824_);
lean_ctor_set(v___x_827_, 1, v___x_825_);
lean_ctor_set(v___x_827_, 2, v___x_826_);
lean_ctor_set_uint16(v___x_827_, sizeof(void*)*3, v_status_819_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_828_, lean_object* v_status_829_){
_start:
{
uint16_t v_status_boxed_830_; lean_object* v_res_831_; 
v_status_boxed_830_ = lean_unbox(v_status_829_);
v_res_831_ = l_Lasm_Fetch_Response_redirect(v_location_828_, v_status_boxed_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_832_, lean_object* v_contentType_833_, uint16_t v_status_834_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_835_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
lean_ctor_set(v___x_836_, 1, v_contentType_833_);
v___x_837_ = lean_unsigned_to_nat(1u);
v___x_838_ = lean_mk_empty_array_with_capacity(v___x_837_);
v___x_839_ = lean_array_push(v___x_838_, v___x_836_);
v___x_840_ = l_ByteArray_empty;
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v_produce_832_);
v___x_842_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_842_, 0, v___x_839_);
lean_ctor_set(v___x_842_, 1, v___x_840_);
lean_ctor_set(v___x_842_, 2, v___x_841_);
lean_ctor_set_uint16(v___x_842_, sizeof(void*)*3, v_status_834_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_843_, lean_object* v_contentType_844_, lean_object* v_status_845_){
_start:
{
uint16_t v_status_boxed_846_; lean_object* v_res_847_; 
v_status_boxed_846_ = lean_unbox(v_status_845_);
v_res_847_ = l_Lasm_Fetch_Response_streaming(v_produce_843_, v_contentType_844_, v_status_boxed_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_848_){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_849_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_850_ = l_ByteArray_empty;
v___x_851_ = lean_box(0);
v___x_852_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_852_, 0, v___x_849_);
lean_ctor_set(v___x_852_, 1, v___x_850_);
lean_ctor_set(v___x_852_, 2, v___x_851_);
lean_ctor_set_uint16(v___x_852_, sizeof(void*)*3, v_status_848_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_853_){
_start:
{
uint16_t v_status_boxed_854_; lean_object* v_res_855_; 
v_status_boxed_854_ = lean_unbox(v_status_853_);
v_res_855_ = l_Lasm_Fetch_Response_empty(v_status_boxed_854_);
return v_res_855_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = 404;
v___x_858_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_859_ = l_Lasm_Fetch_Response_text(v___x_858_, v___x_857_);
return v___x_859_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_861_, lean_object* v_name_862_, lean_object* v_value_863_){
_start:
{
uint16_t v_status_864_; lean_object* v_headers_865_; lean_object* v_body_866_; lean_object* v_stream_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_876_; 
v_status_864_ = lean_ctor_get_uint16(v_r_861_, sizeof(void*)*3);
v_headers_865_ = lean_ctor_get(v_r_861_, 0);
v_body_866_ = lean_ctor_get(v_r_861_, 1);
v_stream_867_ = lean_ctor_get(v_r_861_, 2);
v_isSharedCheck_876_ = !lean_is_exclusive(v_r_861_);
if (v_isSharedCheck_876_ == 0)
{
v___x_869_ = v_r_861_;
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_stream_867_);
lean_inc(v_body_866_);
lean_inc(v_headers_865_);
lean_dec(v_r_861_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_name_862_);
lean_ctor_set(v___x_871_, 1, v_value_863_);
v___x_872_ = lean_array_push(v_headers_865_, v___x_871_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_872_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
lean_ctor_set(v_reuseFailAlloc_875_, 1, v_body_866_);
lean_ctor_set(v_reuseFailAlloc_875_, 2, v_stream_867_);
lean_ctor_set_uint16(v_reuseFailAlloc_875_, sizeof(void*)*3, v_status_864_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_877_, uint16_t v_status_878_){
_start:
{
lean_object* v_headers_879_; lean_object* v_body_880_; lean_object* v_stream_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
v_headers_879_ = lean_ctor_get(v_r_877_, 0);
v_body_880_ = lean_ctor_get(v_r_877_, 1);
v_stream_881_ = lean_ctor_get(v_r_877_, 2);
v_isSharedCheck_888_ = !lean_is_exclusive(v_r_877_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v_r_877_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_stream_881_);
lean_inc(v_body_880_);
lean_inc(v_headers_879_);
lean_dec(v_r_877_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_headers_879_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_body_880_);
lean_ctor_set(v_reuseFailAlloc_887_, 2, v_stream_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_ctor_set_uint16(v___x_886_, sizeof(void*)*3, v_status_878_);
return v___x_886_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_889_, lean_object* v_status_890_){
_start:
{
uint16_t v_status_boxed_891_; lean_object* v_res_892_; 
v_status_boxed_891_ = lean_unbox(v_status_890_);
v_res_892_ = l_Lasm_Fetch_Response_withStatus(v_r_889_, v_status_boxed_891_);
return v_res_892_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0));
v___x_895_ = lean_string_data(v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(lean_object* v_l_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
if (lean_obj_tag(v_a_897_) == 0)
{
lean_dec_ref(v_a_898_);
lean_inc(v_l_896_);
return v_l_896_;
}
else
{
lean_object* v_head_899_; lean_object* v_tail_900_; uint32_t v___x_923_; uint32_t v___x_924_; uint8_t v___x_925_; 
v_head_899_ = lean_ctor_get(v_a_897_, 0);
lean_inc(v_head_899_);
v_tail_900_ = lean_ctor_get(v_a_897_, 1);
lean_inc(v_tail_900_);
lean_dec_ref_known(v_a_897_, 2);
v___x_923_ = 65;
v___x_924_ = lean_unbox_uint32(v_head_899_);
v___x_925_ = lean_uint32_dec_le(v___x_923_, v___x_924_);
if (v___x_925_ == 0)
{
goto v___jp_916_;
}
else
{
uint32_t v___x_926_; uint32_t v___x_927_; uint8_t v___x_928_; 
v___x_926_ = 90;
v___x_927_ = lean_unbox_uint32(v_head_899_);
v___x_928_ = lean_uint32_dec_le(v___x_927_, v___x_926_);
if (v___x_928_ == 0)
{
goto v___jp_916_;
}
else
{
goto v___jp_901_;
}
}
v___jp_901_:
{
lean_object* v___x_902_; 
v___x_902_ = lean_array_push(v_a_898_, v_head_899_);
v_a_897_ = v_tail_900_;
v_a_898_ = v___x_902_;
goto _start;
}
v___jp_904_:
{
lean_object* v___x_905_; uint32_t v___x_906_; uint8_t v___x_907_; 
v___x_905_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1, &l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1_once, _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1);
v___x_906_ = lean_unbox_uint32(v_head_899_);
v___x_907_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__1(v___x_906_, v___x_905_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
lean_dec(v_tail_900_);
lean_dec(v_head_899_);
v___x_908_ = lean_array_to_list(v_a_898_);
return v___x_908_;
}
else
{
goto v___jp_901_;
}
}
v___jp_909_:
{
uint32_t v___x_910_; uint32_t v___x_911_; uint8_t v___x_912_; 
v___x_910_ = 48;
v___x_911_ = lean_unbox_uint32(v_head_899_);
v___x_912_ = lean_uint32_dec_le(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
goto v___jp_904_;
}
else
{
uint32_t v___x_913_; uint32_t v___x_914_; uint8_t v___x_915_; 
v___x_913_ = 57;
v___x_914_ = lean_unbox_uint32(v_head_899_);
v___x_915_ = lean_uint32_dec_le(v___x_914_, v___x_913_);
if (v___x_915_ == 0)
{
goto v___jp_904_;
}
else
{
goto v___jp_901_;
}
}
}
v___jp_916_:
{
uint32_t v___x_917_; uint32_t v___x_918_; uint8_t v___x_919_; 
v___x_917_ = 97;
v___x_918_ = lean_unbox_uint32(v_head_899_);
v___x_919_ = lean_uint32_dec_le(v___x_917_, v___x_918_);
if (v___x_919_ == 0)
{
goto v___jp_909_;
}
else
{
uint32_t v___x_920_; uint32_t v___x_921_; uint8_t v___x_922_; 
v___x_920_ = 122;
v___x_921_ = lean_unbox_uint32(v_head_899_);
v___x_922_ = lean_uint32_dec_le(v___x_921_, v___x_920_);
if (v___x_922_ == 0)
{
goto v___jp_909_;
}
else
{
goto v___jp_901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___boxed(lean_object* v_l_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_l_929_, v_a_930_, v_a_931_);
lean_dec(v_l_929_);
return v_res_932_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_935_; lean_object* v___x_936_; 
v___x_935_ = 61;
v___x_936_ = lean_box_uint32(v___x_935_);
return v___x_936_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1;
v___x_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(lean_object* v_s_939_){
_start:
{
lean_object* v___x_940_; lean_object* v_name_941_; uint8_t v___x_942_; 
v___x_940_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0));
lean_inc(v_s_939_);
v_name_941_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_s_939_, v_s_939_, v___x_940_);
v___x_942_ = l_List_isEmpty___redArg(v_name_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_943_ = l_List_lengthTR___redArg(v_name_941_);
lean_dec(v_name_941_);
v___x_944_ = l_List_drop___redArg(v___x_943_, v_s_939_);
lean_dec(v_s_939_);
v___x_945_ = l_List_head_x3f___redArg(v___x_944_);
lean_dec(v___x_944_);
v___x_946_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1, &l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1);
v___x_947_ = l_Option_instBEq_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_945_, v___x_946_);
lean_dec(v___x_945_);
return v___x_947_;
}
else
{
uint8_t v___x_948_; 
lean_dec(v_name_941_);
lean_dec(v_s_939_);
v___x_948_ = 0;
return v___x_948_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___boxed(lean_object* v_s_949_){
_start:
{
uint8_t v_res_950_; lean_object* v_r_951_; 
v_res_950_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_s_949_);
v_r_951_ = lean_box(v_res_950_);
return v_r_951_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(lean_object* v_x_952_){
_start:
{
if (lean_obj_tag(v_x_952_) == 0)
{
return v_x_952_;
}
else
{
lean_object* v_head_953_; lean_object* v_tail_954_; uint32_t v___x_955_; uint32_t v___x_956_; uint8_t v___x_957_; 
v_head_953_ = lean_ctor_get(v_x_952_, 0);
v_tail_954_ = lean_ctor_get(v_x_952_, 1);
v___x_955_ = 32;
v___x_956_ = lean_unbox_uint32(v_head_953_);
v___x_957_ = lean_uint32_dec_eq(v___x_956_, v___x_955_);
if (v___x_957_ == 0)
{
uint32_t v___x_958_; uint32_t v___x_959_; uint8_t v___x_960_; 
v___x_958_ = 9;
v___x_959_ = lean_unbox_uint32(v_head_953_);
v___x_960_ = lean_uint32_dec_eq(v___x_959_, v___x_958_);
if (v___x_960_ == 0)
{
uint32_t v___x_961_; uint32_t v___x_962_; uint8_t v___x_963_; 
v___x_961_ = 13;
v___x_962_ = lean_unbox_uint32(v_head_953_);
v___x_963_ = lean_uint32_dec_eq(v___x_962_, v___x_961_);
if (v___x_963_ == 0)
{
uint32_t v___x_964_; uint32_t v___x_965_; uint8_t v___x_966_; 
v___x_964_ = 10;
v___x_965_ = lean_unbox_uint32(v_head_953_);
v___x_966_ = lean_uint32_dec_eq(v___x_965_, v___x_964_);
if (v___x_966_ == 0)
{
lean_inc_ref(v_x_952_);
return v_x_952_;
}
else
{
v_x_952_ = v_tail_954_;
goto _start;
}
}
else
{
v_x_952_ = v_tail_954_;
goto _start;
}
}
else
{
v_x_952_ = v_tail_954_;
goto _start;
}
}
else
{
v_x_952_ = v_tail_954_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0___boxed(lean_object* v_x_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v_x_971_);
lean_dec(v_x_971_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
if (lean_obj_tag(v_x_976_) == 0)
{
return v_x_975_;
}
else
{
lean_object* v_head_977_; lean_object* v_tail_978_; lean_object* v___x_979_; lean_object* v_next_980_; uint8_t v___x_981_; 
v_head_977_ = lean_ctor_get(v_x_976_, 0);
lean_inc_n(v_head_977_, 2);
v_tail_978_ = lean_ctor_get(v_x_976_, 1);
lean_inc(v_tail_978_);
lean_dec_ref_known(v_x_976_, 2);
v___x_979_ = lean_string_data(v_head_977_);
v_next_980_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_979_);
lean_dec(v___x_979_);
lean_inc(v_next_980_);
v___x_981_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_980_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec(v_next_980_);
v___x_982_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_983_ = lean_string_append(v_x_975_, v___x_982_);
v___x_984_ = lean_string_append(v___x_983_, v_head_977_);
lean_dec(v_head_977_);
v_x_975_ = v___x_984_;
v_x_976_ = v_tail_978_;
goto _start;
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec(v_head_977_);
v___x_986_ = lean_string_data(v_x_975_);
v___x_987_ = l_List_reverse___redArg(v___x_986_);
v___x_988_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_987_);
lean_dec(v___x_987_);
v___x_989_ = l_List_reverse___redArg(v___x_988_);
v___x_990_ = lean_string_mk(v___x_989_);
v___x_991_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_992_ = lean_string_append(v___x_990_, v___x_991_);
v___x_993_ = lean_string_mk(v_next_980_);
v___x_994_ = lean_string_append(v___x_992_, v___x_993_);
lean_dec_ref(v___x_993_);
v_x_975_ = v___x_994_;
v_x_976_ = v_tail_978_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(lean_object* v_x_996_, lean_object* v_x_997_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
return v_x_996_;
}
else
{
lean_object* v_head_998_; lean_object* v_tail_999_; lean_object* v___x_1000_; lean_object* v_next_1001_; uint8_t v___x_1002_; 
v_head_998_ = lean_ctor_get(v_x_997_, 0);
lean_inc_n(v_head_998_, 2);
v_tail_999_ = lean_ctor_get(v_x_997_, 1);
lean_inc(v_tail_999_);
lean_dec_ref_known(v_x_997_, 2);
v___x_1000_ = lean_string_data(v_head_998_);
v_next_1001_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1000_);
lean_dec(v___x_1000_);
lean_inc(v_next_1001_);
v___x_1002_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
lean_dec(v_next_1001_);
v___x_1003_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1004_ = lean_string_append(v_x_996_, v___x_1003_);
v___x_1005_ = lean_string_append(v___x_1004_, v_head_998_);
lean_dec(v_head_998_);
v___x_1006_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1005_, v_tail_999_);
return v___x_1006_;
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
lean_dec(v_head_998_);
v___x_1007_ = lean_string_data(v_x_996_);
v___x_1008_ = l_List_reverse___redArg(v___x_1007_);
v___x_1009_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_1008_);
lean_dec(v___x_1008_);
v___x_1010_ = l_List_reverse___redArg(v___x_1009_);
v___x_1011_ = lean_string_mk(v___x_1010_);
v___x_1012_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_1013_ = lean_string_append(v___x_1011_, v___x_1012_);
v___x_1014_ = lean_string_mk(v_next_1001_);
v___x_1015_ = lean_string_append(v___x_1013_, v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1016_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_1015_, v_tail_999_);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas(lean_object* v_value_1017_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1018_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_box(0);
v___x_1021_ = l_String_splitOnAux(v_value_1017_, v___x_1018_, v___x_1019_, v___x_1019_, v___x_1019_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_inc_ref(v_value_1017_);
return v_value_1017_;
}
else
{
lean_object* v_head_1022_; lean_object* v_tail_1023_; lean_object* v___x_1024_; 
v_head_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_head_1022_);
v_tail_1023_ = lean_ctor_get(v___x_1021_, 1);
lean_inc(v_tail_1023_);
lean_dec_ref_known(v___x_1021_, 2);
v___x_1024_ = l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(v_head_1022_, v_tail_1023_);
return v___x_1024_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas___boxed(lean_object* v_value_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lasm_Fetch_splitCookieCommas(v_value_1025_);
lean_dec_ref(v_value_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(lean_object* v_as_1028_, size_t v_i_1029_, size_t v_stop_1030_, lean_object* v_b_1031_){
_start:
{
lean_object* v___y_1033_; uint8_t v___x_1037_; 
v___x_1037_ = lean_usize_dec_eq(v_i_1029_, v_stop_1030_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v_fst_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v___x_1038_ = lean_array_uget_borrowed(v_as_1028_, v_i_1029_);
v_fst_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_fst_1039_);
v___x_1040_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1039_);
v___x_1041_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1042_ = lean_string_dec_eq(v___x_1040_, v___x_1041_);
lean_dec_ref(v___x_1040_);
if (v___x_1042_ == 0)
{
v___y_1033_ = v_b_1031_;
goto v___jp_1032_;
}
else
{
lean_object* v___x_1043_; 
lean_inc(v___x_1038_);
v___x_1043_ = lean_array_push(v_b_1031_, v___x_1038_);
v___y_1033_ = v___x_1043_;
goto v___jp_1032_;
}
}
else
{
return v_b_1031_;
}
v___jp_1032_:
{
size_t v___x_1034_; size_t v___x_1035_; 
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1029_, v___x_1034_);
v_i_1029_ = v___x_1035_;
v_b_1031_ = v___y_1033_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___boxed(lean_object* v_as_1044_, lean_object* v_i_1045_, lean_object* v_stop_1046_, lean_object* v_b_1047_){
_start:
{
size_t v_i_boxed_1048_; size_t v_stop_boxed_1049_; lean_object* v_res_1050_; 
v_i_boxed_1048_ = lean_unbox_usize(v_i_1045_);
lean_dec(v_i_1045_);
v_stop_boxed_1049_ = lean_unbox_usize(v_stop_1046_);
lean_dec(v_stop_1046_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1044_, v_i_boxed_1048_, v_stop_boxed_1049_, v_b_1047_);
lean_dec_ref(v_as_1044_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(lean_object* v_as_1051_, size_t v_i_1052_, size_t v_stop_1053_, lean_object* v_b_1054_){
_start:
{
lean_object* v___y_1056_; uint8_t v___x_1060_; 
v___x_1060_ = lean_usize_dec_eq(v_i_1052_, v_stop_1053_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; lean_object* v_fst_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1061_ = lean_array_uget_borrowed(v_as_1051_, v_i_1052_);
v_fst_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_fst_1062_);
v___x_1063_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1062_);
v___x_1064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1065_ = lean_string_dec_eq(v___x_1063_, v___x_1064_);
lean_dec_ref(v___x_1063_);
if (v___x_1065_ == 0)
{
v___y_1056_ = v_b_1054_;
goto v___jp_1055_;
}
else
{
lean_object* v___x_1066_; 
lean_inc(v___x_1061_);
v___x_1066_ = lean_array_push(v_b_1054_, v___x_1061_);
v___y_1056_ = v___x_1066_;
goto v___jp_1055_;
}
}
else
{
return v_b_1054_;
}
v___jp_1055_:
{
size_t v___x_1057_; size_t v___x_1058_; lean_object* v___x_1059_; 
v___x_1057_ = ((size_t)1ULL);
v___x_1058_ = lean_usize_add(v_i_1052_, v___x_1057_);
v___x_1059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1051_, v___x_1058_, v_stop_1053_, v___y_1056_);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3___boxed(lean_object* v_as_1067_, lean_object* v_i_1068_, lean_object* v_stop_1069_, lean_object* v_b_1070_){
_start:
{
size_t v_i_boxed_1071_; size_t v_stop_boxed_1072_; lean_object* v_res_1073_; 
v_i_boxed_1071_ = lean_unbox_usize(v_i_1068_);
lean_dec(v_i_1068_);
v_stop_boxed_1072_ = lean_unbox_usize(v_stop_1069_);
lean_dec(v_stop_1069_);
v_res_1073_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_as_1067_, v_i_boxed_1071_, v_stop_boxed_1072_, v_b_1070_);
lean_dec_ref(v_as_1067_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(size_t v_sz_1074_, size_t v_i_1075_, lean_object* v_bs_1076_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_usize_dec_lt(v_i_1075_, v_sz_1074_);
if (v___x_1077_ == 0)
{
return v_bs_1076_;
}
else
{
lean_object* v_v_1078_; lean_object* v_snd_1079_; lean_object* v___x_1080_; lean_object* v_bs_x27_1081_; lean_object* v___x_1082_; size_t v___x_1083_; size_t v___x_1084_; lean_object* v___x_1085_; 
v_v_1078_ = lean_array_uget_borrowed(v_bs_1076_, v_i_1075_);
v_snd_1079_ = lean_ctor_get(v_v_1078_, 1);
lean_inc(v_snd_1079_);
v___x_1080_ = lean_unsigned_to_nat(0u);
v_bs_x27_1081_ = lean_array_uset(v_bs_1076_, v_i_1075_, v___x_1080_);
v___x_1082_ = l_Lasm_Fetch_splitCookieCommas(v_snd_1079_);
lean_dec(v_snd_1079_);
v___x_1083_ = ((size_t)1ULL);
v___x_1084_ = lean_usize_add(v_i_1075_, v___x_1083_);
v___x_1085_ = lean_array_uset(v_bs_x27_1081_, v_i_1075_, v___x_1082_);
v_i_1075_ = v___x_1084_;
v_bs_1076_ = v___x_1085_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1___boxed(lean_object* v_sz_1087_, lean_object* v_i_1088_, lean_object* v_bs_1089_){
_start:
{
size_t v_sz_boxed_1090_; size_t v_i_boxed_1091_; lean_object* v_res_1092_; 
v_sz_boxed_1090_ = lean_unbox_usize(v_sz_1087_);
lean_dec(v_sz_1087_);
v_i_boxed_1091_ = lean_unbox_usize(v_i_1088_);
lean_dec(v_i_1088_);
v_res_1092_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_boxed_1090_, v_i_boxed_1091_, v_bs_1089_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(lean_object* v___y_1093_, lean_object* v_as_1094_, size_t v_sz_1095_, size_t v_i_1096_, lean_object* v_b_1097_){
_start:
{
lean_object* v_a_1099_; uint8_t v___x_1103_; 
v___x_1103_ = lean_usize_dec_lt(v_i_1096_, v_sz_1095_);
if (v___x_1103_ == 0)
{
lean_dec_ref(v___y_1093_);
return v_b_1097_;
}
else
{
lean_object* v_fst_1104_; lean_object* v_snd_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1139_; 
v_fst_1104_ = lean_ctor_get(v_b_1097_, 0);
v_snd_1105_ = lean_ctor_get(v_b_1097_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_b_1097_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1107_ = v_b_1097_;
v_isShared_1108_ = v_isSharedCheck_1139_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_snd_1105_);
lean_inc(v_fst_1104_);
lean_dec(v_b_1097_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1139_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_a_1109_; lean_object* v_fst_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v_placed_1113_; 
v_a_1109_ = lean_array_uget(v_as_1094_, v_i_1096_);
v_fst_1110_ = lean_ctor_get(v_a_1109_, 0);
lean_inc(v_fst_1110_);
v___x_1111_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1110_);
v___x_1112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1113_ = lean_string_dec_eq(v___x_1111_, v___x_1112_);
lean_dec_ref(v___x_1111_);
if (v_placed_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1114_ = lean_array_push(v_fst_1104_, v_a_1109_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1114_);
v___x_1116_ = v___x_1107_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_snd_1105_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v_a_1099_ = v___x_1116_;
goto v___jp_1098_;
}
}
else
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1136_; 
lean_inc(v_fst_1110_);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_a_1109_);
if (v_isSharedCheck_1136_ == 0)
{
lean_object* v_unused_1137_; lean_object* v_unused_1138_; 
v_unused_1137_ = lean_ctor_get(v_a_1109_, 1);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_a_1109_, 0);
lean_dec(v_unused_1138_);
v___x_1119_ = v_a_1109_;
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v_a_1109_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
uint8_t v___x_1121_; 
v___x_1121_ = lean_unbox(v_snd_1105_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1126_; 
lean_dec(v_snd_1105_);
v___x_1122_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1093_);
v___x_1123_ = lean_array_to_list(v___y_1093_);
v___x_1124_ = l_String_intercalate(v___x_1122_, v___x_1123_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1124_);
v___x_1126_ = v___x_1119_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_fst_1110_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v___x_1124_);
v___x_1126_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1127_ = lean_array_push(v_fst_1104_, v___x_1126_);
v___x_1128_ = lean_box(v_placed_1113_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 1, v___x_1128_);
lean_ctor_set(v___x_1107_, 0, v___x_1127_);
v___x_1130_ = v___x_1107_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
v_a_1099_ = v___x_1130_;
goto v___jp_1098_;
}
}
}
else
{
lean_object* v___x_1134_; 
lean_dec(v_fst_1110_);
lean_del_object(v___x_1107_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v_snd_1105_);
lean_ctor_set(v___x_1119_, 0, v_fst_1104_);
v___x_1134_ = v___x_1119_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_fst_1104_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_snd_1105_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
v_a_1099_ = v___x_1134_;
goto v___jp_1098_;
}
}
}
}
}
}
v___jp_1098_:
{
size_t v___x_1100_; size_t v___x_1101_; 
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_add(v_i_1096_, v___x_1100_);
v_i_1096_ = v___x_1101_;
v_b_1097_ = v_a_1099_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0___boxed(lean_object* v___y_1140_, lean_object* v_as_1141_, lean_object* v_sz_1142_, lean_object* v_i_1143_, lean_object* v_b_1144_){
_start:
{
size_t v_sz_boxed_1145_; size_t v_i_boxed_1146_; lean_object* v_res_1147_; 
v_sz_boxed_1145_ = lean_unbox_usize(v_sz_1142_);
lean_dec(v_sz_1142_);
v_i_boxed_1146_ = lean_unbox_usize(v_i_1143_);
lean_dec(v_i_1143_);
v_res_1147_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1140_, v_as_1141_, v_sz_boxed_1145_, v_i_boxed_1146_, v_b_1144_);
lean_dec_ref(v_as_1141_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(lean_object* v___y_1148_, lean_object* v_as_1149_, size_t v_sz_1150_, size_t v_i_1151_, lean_object* v_b_1152_){
_start:
{
lean_object* v_a_1154_; uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_lt(v_i_1151_, v_sz_1150_);
if (v___x_1158_ == 0)
{
lean_dec_ref(v___y_1148_);
return v_b_1152_;
}
else
{
lean_object* v_fst_1159_; lean_object* v_snd_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1194_; 
v_fst_1159_ = lean_ctor_get(v_b_1152_, 0);
v_snd_1160_ = lean_ctor_get(v_b_1152_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_b_1152_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1162_ = v_b_1152_;
v_isShared_1163_ = v_isSharedCheck_1194_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_snd_1160_);
lean_inc(v_fst_1159_);
lean_dec(v_b_1152_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1194_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v_a_1164_; lean_object* v_fst_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v_placed_1168_; 
v_a_1164_ = lean_array_uget(v_as_1149_, v_i_1151_);
v_fst_1165_ = lean_ctor_get(v_a_1164_, 0);
lean_inc(v_fst_1165_);
v___x_1166_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1165_);
v___x_1167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1168_ = lean_string_dec_eq(v___x_1166_, v___x_1167_);
lean_dec_ref(v___x_1166_);
if (v_placed_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1169_ = lean_array_push(v_fst_1159_, v_a_1164_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1169_);
v___x_1171_ = v___x_1162_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_snd_1160_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
v_a_1154_ = v___x_1171_;
goto v___jp_1153_;
}
}
else
{
lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1191_; 
lean_inc(v_fst_1165_);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_a_1164_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; lean_object* v_unused_1193_; 
v_unused_1192_ = lean_ctor_get(v_a_1164_, 1);
lean_dec(v_unused_1192_);
v_unused_1193_ = lean_ctor_get(v_a_1164_, 0);
lean_dec(v_unused_1193_);
v___x_1174_ = v_a_1164_;
v_isShared_1175_ = v_isSharedCheck_1191_;
goto v_resetjp_1173_;
}
else
{
lean_dec(v_a_1164_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1191_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
uint8_t v___x_1176_; 
v___x_1176_ = lean_unbox(v_snd_1160_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
lean_dec(v_snd_1160_);
v___x_1177_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1148_);
v___x_1178_ = lean_array_to_list(v___y_1148_);
v___x_1179_ = l_String_intercalate(v___x_1177_, v___x_1178_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 1, v___x_1179_);
v___x_1181_ = v___x_1174_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_fst_1165_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1185_; 
v___x_1182_ = lean_array_push(v_fst_1159_, v___x_1181_);
v___x_1183_ = lean_box(v_placed_1168_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v___x_1183_);
lean_ctor_set(v___x_1162_, 0, v___x_1182_);
v___x_1185_ = v___x_1162_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
v_a_1154_ = v___x_1185_;
goto v___jp_1153_;
}
}
}
else
{
lean_object* v___x_1189_; 
lean_dec(v_fst_1165_);
lean_del_object(v___x_1162_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 1, v_snd_1160_);
lean_ctor_set(v___x_1174_, 0, v_fst_1159_);
v___x_1189_ = v___x_1174_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_fst_1159_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v_snd_1160_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
v_a_1154_ = v___x_1189_;
goto v___jp_1153_;
}
}
}
}
}
}
v___jp_1153_:
{
size_t v___x_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1151_, v___x_1155_);
v___x_1157_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1148_, v_as_1149_, v_sz_1150_, v___x_1156_, v_a_1154_);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0___boxed(lean_object* v___y_1195_, lean_object* v_as_1196_, lean_object* v_sz_1197_, lean_object* v_i_1198_, lean_object* v_b_1199_){
_start:
{
size_t v_sz_boxed_1200_; size_t v_i_boxed_1201_; lean_object* v_res_1202_; 
v_sz_boxed_1200_ = lean_unbox_usize(v_sz_1197_);
lean_dec(v_sz_1197_);
v_i_boxed_1201_ = lean_unbox_usize(v_i_1198_);
lean_dec(v_i_1198_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1195_, v_as_1196_, v_sz_boxed_1200_, v_i_boxed_1201_, v_b_1199_);
lean_dec_ref(v_as_1196_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(lean_object* v_as_1203_, size_t v_i_1204_, size_t v_stop_1205_, lean_object* v_b_1206_){
_start:
{
lean_object* v___y_1208_; uint8_t v___x_1212_; 
v___x_1212_ = lean_usize_dec_eq(v_i_1204_, v_stop_1205_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1213_ = lean_array_uget_borrowed(v_as_1203_, v_i_1204_);
v___x_1214_ = lean_string_utf8_byte_size(v___x_1213_);
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = lean_nat_dec_eq(v___x_1214_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_inc(v___x_1213_);
v___x_1217_ = lean_array_push(v_b_1206_, v___x_1213_);
v___y_1208_ = v___x_1217_;
goto v___jp_1207_;
}
else
{
v___y_1208_ = v_b_1206_;
goto v___jp_1207_;
}
}
else
{
return v_b_1206_;
}
v___jp_1207_:
{
size_t v___x_1209_; size_t v___x_1210_; 
v___x_1209_ = ((size_t)1ULL);
v___x_1210_ = lean_usize_add(v_i_1204_, v___x_1209_);
v_i_1204_ = v___x_1210_;
v_b_1206_ = v___y_1208_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2___boxed(lean_object* v_as_1218_, lean_object* v_i_1219_, lean_object* v_stop_1220_, lean_object* v_b_1221_){
_start:
{
size_t v_i_boxed_1222_; size_t v_stop_boxed_1223_; lean_object* v_res_1224_; 
v_i_boxed_1222_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_stop_boxed_1223_ = lean_unbox_usize(v_stop_1220_);
lean_dec(v_stop_1220_);
v_res_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v_as_1218_, v_i_boxed_1222_, v_stop_boxed_1223_, v_b_1221_);
lean_dec_ref(v_as_1218_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies(lean_object* v_headers_1227_){
_start:
{
lean_object* v___y_1229_; lean_object* v___x_1240_; lean_object* v___y_1242_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1240_ = lean_unsigned_to_nat(0u);
v___x_1254_ = lean_array_get_size(v_headers_1227_);
v___x_1255_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1256_ = lean_nat_dec_lt(v___x_1240_, v___x_1254_);
if (v___x_1256_ == 0)
{
v___y_1242_ = v___x_1255_;
goto v___jp_1241_;
}
else
{
uint8_t v___x_1257_; 
v___x_1257_ = lean_nat_dec_le(v___x_1254_, v___x_1254_);
if (v___x_1257_ == 0)
{
if (v___x_1256_ == 0)
{
v___y_1242_ = v___x_1255_;
goto v___jp_1241_;
}
else
{
size_t v___x_1258_; size_t v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = ((size_t)0ULL);
v___x_1259_ = lean_usize_of_nat(v___x_1254_);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1227_, v___x_1258_, v___x_1259_, v___x_1255_);
v___y_1242_ = v___x_1260_;
goto v___jp_1241_;
}
}
else
{
size_t v___x_1261_; size_t v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = ((size_t)0ULL);
v___x_1262_ = lean_usize_of_nat(v___x_1254_);
v___x_1263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1227_, v___x_1261_, v___x_1262_, v___x_1255_);
v___y_1242_ = v___x_1263_;
goto v___jp_1241_;
}
}
v___jp_1228_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v_placed_1232_; 
v___x_1230_ = lean_array_get_size(v___y_1229_);
v___x_1231_ = lean_unsigned_to_nat(0u);
v_placed_1232_ = lean_nat_dec_eq(v___x_1230_, v___x_1231_);
if (v_placed_1232_ == 0)
{
lean_object* v_out_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; size_t v_sz_1236_; size_t v___x_1237_; lean_object* v___x_1238_; lean_object* v_fst_1239_; 
v_out_1233_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1234_ = lean_box(v_placed_1232_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v_out_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v_sz_1236_ = lean_array_size(v_headers_1227_);
v___x_1237_ = ((size_t)0ULL);
v___x_1238_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1229_, v_headers_1227_, v_sz_1236_, v___x_1237_, v___x_1235_);
v_fst_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_fst_1239_);
lean_dec_ref(v___x_1238_);
return v_fst_1239_;
}
else
{
lean_dec_ref(v___y_1229_);
lean_inc_ref(v_headers_1227_);
return v_headers_1227_;
}
}
v___jp_1241_:
{
size_t v_sz_1243_; size_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v_sz_1243_ = lean_array_size(v___y_1242_);
v___x_1244_ = ((size_t)0ULL);
v___x_1245_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_1243_, v___x_1244_, v___y_1242_);
v___x_1246_ = lean_array_get_size(v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_1248_ = lean_nat_dec_lt(v___x_1240_, v___x_1246_);
if (v___x_1248_ == 0)
{
lean_dec_ref(v___x_1245_);
v___y_1229_ = v___x_1247_;
goto v___jp_1228_;
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = lean_nat_dec_le(v___x_1246_, v___x_1246_);
if (v___x_1249_ == 0)
{
if (v___x_1248_ == 0)
{
lean_dec_ref(v___x_1245_);
v___y_1229_ = v___x_1247_;
goto v___jp_1228_;
}
else
{
size_t v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_usize_of_nat(v___x_1246_);
v___x_1251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1245_, v___x_1244_, v___x_1250_, v___x_1247_);
lean_dec_ref(v___x_1245_);
v___y_1229_ = v___x_1251_;
goto v___jp_1228_;
}
}
else
{
size_t v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_usize_of_nat(v___x_1246_);
v___x_1253_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1245_, v___x_1244_, v___x_1252_, v___x_1247_);
lean_dec_ref(v___x_1245_);
v___y_1229_ = v___x_1253_;
goto v___jp_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies___boxed(lean_object* v_headers_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lasm_Fetch_joinCookies(v_headers_1264_);
lean_dec_ref(v_headers_1264_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_1266_){
_start:
{
lean_object* v_r_1269_; 
if (lean_obj_tag(v_x_1266_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1280_; 
v_a_1272_ = lean_ctor_get(v_x_1266_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_x_1266_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1274_ = v_x_1266_;
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v_x_1266_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; 
v___x_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v_a_1282_; 
v_a_1281_ = lean_ctor_get(v_x_1266_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v_x_1266_, 1);
v_a_1282_ = lean_ctor_get(v_a_1281_, 0);
lean_inc(v_a_1282_);
lean_dec(v_a_1281_);
v_r_1269_ = v_a_1282_;
goto v___jp_1268_;
}
v___jp_1268_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v_r_1269_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lasm_Fetch_respond___lam__0(v_x_1283_);
return v_res_1285_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = 500;
v___x_1288_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_1289_ = l_Lasm_Fetch_Response_text(v___x_1288_, v___x_1287_);
return v___x_1289_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_1296_){
_start:
{
if (lean_obj_tag(v_x_1296_) == 0)
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1306_; 
v_a_1298_ = lean_ctor_get(v_x_1296_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1300_ = v_x_1296_;
v_isShared_1301_ = v_isSharedCheck_1306_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v_x_1296_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1306_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
return v___x_1304_;
}
}
}
else
{
lean_object* v___x_1307_; 
lean_dec_ref_known(v_x_1296_, 1);
v___x_1307_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lasm_Fetch_respond___lam__1(v_x_1308_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_1311_){
_start:
{
if (lean_obj_tag(v_x_1311_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
v_a_1313_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1315_ = v_x_1311_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v_x_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1331_; 
v_a_1322_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1324_ = v_x_1311_;
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v_x_1311_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lasm_Fetch_respond___lam__2(v_x_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_1338_, lean_object* v_req_1339_, lean_object* v___f_1340_, lean_object* v_x_1341_){
_start:
{
if (lean_obj_tag(v_x_1341_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1372_; 
v_a_1343_ = lean_ctor_get(v_x_1341_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v_x_1341_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1345_ = v_x_1341_;
v_isShared_1346_ = v_isSharedCheck_1372_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v_x_1341_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1372_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; lean_object* v_val_1360_; lean_object* v___x_1363_; 
v___x_1347_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_1348_ = lean_string_append(v___x_1347_, v_method_1338_);
v___x_1349_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_1350_ = lean_string_append(v___x_1348_, v___x_1349_);
v___x_1351_ = l_Lasm_Fetch_Request_path(v_req_1339_);
v___x_1352_ = lean_string_append(v___x_1350_, v___x_1351_);
lean_dec_ref(v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
v___x_1355_ = lean_io_error_to_string(v_a_1343_);
v___x_1356_ = lean_string_append(v___x_1354_, v___x_1355_);
lean_dec_ref(v___x_1355_);
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = 0;
v___x_1363_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1356_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1366_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
if (v_isShared_1346_ == 0)
{
lean_ctor_set_tag(v___x_1345_, 1);
lean_ctor_set(v___x_1345_, 0, v_a_1364_);
v___x_1366_ = v___x_1345_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1364_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
v_val_1360_ = v___x_1366_;
goto v___jp_1359_;
}
}
else
{
lean_object* v_a_1368_; lean_object* v___x_1370_; 
v_a_1368_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1363_, 1);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v_a_1368_);
v___x_1370_ = v___x_1345_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
v_val_1360_ = v___x_1370_;
goto v___jp_1359_;
}
}
v___jp_1359_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_val_1360_);
v___x_1362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1357_, v___x_1358_, v___x_1361_, v___f_1340_);
return v___x_1362_;
}
}
}
else
{
lean_object* v___x_1373_; 
lean_dec_ref(v___f_1340_);
lean_dec_ref(v_req_1339_);
v___x_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1373_, 0, v_x_1341_);
return v___x_1373_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_1374_, lean_object* v_req_1375_, lean_object* v___f_1376_, lean_object* v_x_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_Fetch_respond___lam__3(v_method_1374_, v_req_1375_, v___f_1376_, v_x_1377_);
lean_dec_ref(v_method_1374_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_1384_, lean_object* v_req_1385_){
_start:
{
lean_object* v_method_1387_; lean_object* v_url_1388_; lean_object* v_headers_1389_; lean_object* v_body_1390_; lean_object* v_read_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1415_; 
v_method_1387_ = lean_ctor_get(v_req_1385_, 0);
v_url_1388_ = lean_ctor_get(v_req_1385_, 1);
v_headers_1389_ = lean_ctor_get(v_req_1385_, 2);
v_body_1390_ = lean_ctor_get(v_req_1385_, 3);
v_read_1391_ = lean_ctor_get(v_req_1385_, 4);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_req_1385_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1393_ = v_req_1385_;
v_isShared_1394_ = v_isSharedCheck_1415_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_read_1391_);
lean_inc(v_body_1390_);
lean_inc(v_headers_1389_);
lean_inc(v_url_1388_);
lean_inc(v_method_1387_);
lean_dec(v_req_1385_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1415_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___f_1395_; lean_object* v___f_1396_; lean_object* v___f_1397_; lean_object* v___x_1398_; lean_object* v_req_1400_; 
v___f_1395_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_1396_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_1397_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
v___x_1398_ = l_Lasm_Fetch_joinCookies(v_headers_1389_);
lean_dec_ref(v_headers_1389_);
lean_inc_ref(v_read_1391_);
lean_inc_ref(v_body_1390_);
lean_inc_ref(v___x_1398_);
lean_inc_ref(v_url_1388_);
lean_inc_ref(v_method_1387_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 2, v___x_1398_);
v_req_1400_ = v___x_1393_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_method_1387_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_url_1388_);
lean_ctor_set(v_reuseFailAlloc_1414_, 2, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1414_, 3, v_body_1390_);
lean_ctor_set(v_reuseFailAlloc_1414_, 4, v_read_1391_);
v_req_1400_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___f_1401_; lean_object* v___y_1403_; lean_object* v___x_1410_; uint8_t v___x_1411_; 
lean_inc_ref(v_req_1400_);
lean_inc_ref(v_method_1387_);
v___f_1401_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1401_, 0, v_method_1387_);
lean_closure_set(v___f_1401_, 1, v_req_1400_);
lean_closure_set(v___f_1401_, 2, v___f_1396_);
v___x_1410_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1411_ = lean_string_dec_eq(v_method_1387_, v___x_1410_);
lean_dec_ref(v_method_1387_);
if (v___x_1411_ == 0)
{
lean_dec_ref(v___x_1398_);
lean_dec_ref(v_read_1391_);
lean_dec_ref(v_body_1390_);
lean_dec_ref(v_url_1388_);
v___y_1403_ = v_req_1400_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_req_1400_);
v___x_1412_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_1413_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v_url_1388_);
lean_ctor_set(v___x_1413_, 2, v___x_1398_);
lean_ctor_set(v___x_1413_, 3, v_body_1390_);
lean_ctor_set(v___x_1413_, 4, v_read_1391_);
v___y_1403_ = v___x_1413_;
goto v___jp_1402_;
}
v___jp_1402_:
{
lean_object* v___x_1404_; uint8_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = 0;
v___x_1406_ = lean_apply_2(v_handler_1384_, v___y_1403_, lean_box(0));
v___x_1407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1404_, v___x_1405_, v___x_1406_, v___f_1397_);
v___x_1408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1404_, v___x_1405_, v___x_1407_, v___f_1401_);
v___x_1409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1404_, v___x_1405_, v___x_1408_, v___f_1395_);
return v___x_1409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1416_, lean_object* v_req_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lasm_Fetch_respond(v_handler_1416_, v_req_1417_);
return v_res_1419_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1420_, uint16_t v_status_1421_){
_start:
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1423_ = lean_string_dec_eq(v_method_1420_, v___x_1422_);
if (v___x_1423_ == 0)
{
uint16_t v___x_1424_; uint8_t v___x_1425_; 
v___x_1424_ = 101;
v___x_1425_ = lean_uint16_dec_eq(v_status_1421_, v___x_1424_);
if (v___x_1425_ == 0)
{
uint16_t v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = 204;
v___x_1427_ = lean_uint16_dec_eq(v_status_1421_, v___x_1426_);
if (v___x_1427_ == 0)
{
uint16_t v___x_1428_; uint8_t v___x_1429_; 
v___x_1428_ = 205;
v___x_1429_ = lean_uint16_dec_eq(v_status_1421_, v___x_1428_);
if (v___x_1429_ == 0)
{
uint16_t v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = 304;
v___x_1431_ = lean_uint16_dec_eq(v_status_1421_, v___x_1430_);
return v___x_1431_;
}
else
{
return v___x_1429_;
}
}
else
{
return v___x_1427_;
}
}
else
{
return v___x_1425_;
}
}
else
{
return v___x_1423_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1432_, lean_object* v_status_1433_){
_start:
{
uint16_t v_status_boxed_1434_; uint8_t v_res_1435_; lean_object* v_r_1436_; 
v_status_boxed_1434_ = lean_unbox(v_status_1433_);
v_res_1435_ = l_Lasm_Fetch_bodyless(v_method_1432_, v_status_boxed_1434_);
lean_dec_ref(v_method_1432_);
v_r_1436_ = lean_box(v_res_1435_);
return v_r_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1438_){
_start:
{
uint32_t v_res_1439_; lean_object* v_r_1440_; 
v_res_1439_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1438_);
v_r_1440_ = lean_box_uint32(v_res_1439_);
return v_r_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = lasm_fetch_take_request();
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1448_, lean_object* v_headers_1449_, lean_object* v_body_1450_, lean_object* v_a_00___x40___internal___hyg_1451_){
_start:
{
uint16_t v_status_boxed_1452_; lean_object* v_res_1453_; 
v_status_boxed_1452_ = lean_unbox(v_status_1448_);
v_res_1453_ = lasm_fetch_send_response(v_status_boxed_1452_, v_headers_1449_, v_body_1450_);
lean_dec_ref(v_body_1450_);
lean_dec_ref(v_headers_1449_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = lasm_fetch_take_request_head();
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1459_, lean_object* v_a_00___x40___internal___hyg_1460_){
_start:
{
uint32_t v_max_boxed_1461_; lean_object* v_res_1462_; 
v_max_boxed_1461_ = lean_unbox_uint32(v_max_1459_);
lean_dec(v_max_1459_);
v_res_1462_ = lasm_fetch_read(v_max_boxed_1461_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1466_, lean_object* v_headers_1467_, lean_object* v_a_00___x40___internal___hyg_1468_){
_start:
{
uint16_t v_status_boxed_1469_; lean_object* v_res_1470_; 
v_status_boxed_1469_ = lean_unbox(v_status_1466_);
v_res_1470_ = lasm_fetch_start_response(v_status_boxed_1469_, v_headers_1467_);
lean_dec_ref(v_headers_1467_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1473_, lean_object* v_a_00___x40___internal___hyg_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = lasm_fetch_write(v_chunk_1473_);
lean_dec_ref(v_chunk_1473_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1478_, lean_object* v_a_00___x40___internal___hyg_1479_){
_start:
{
uint8_t v_ok_boxed_1480_; lean_object* v_res_1481_; 
v_ok_boxed_1480_ = lean_unbox(v_ok_1478_);
v_res_1481_ = lasm_fetch_finish(v_ok_boxed_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1482_){
_start:
{
uint8_t v___x_1483_; 
v___x_1483_ = 0;
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1484_){
_start:
{
uint8_t v_res_1485_; lean_object* v_r_1486_; 
v_res_1485_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1484_);
lean_dec_ref(v_x_1484_);
v_r_1486_ = lean_box(v_res_1485_);
return v_r_1486_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1496_){
_start:
{
lean_object* v_b_1499_; 
if (lean_obj_tag(v_x_1496_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1513_; 
v_a_1505_ = lean_ctor_get(v_x_1496_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v_x_1496_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1507_ = v_x_1496_;
v_isShared_1508_ = v_isSharedCheck_1513_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v_x_1496_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1513_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
return v___x_1511_;
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v_a_1514_ = lean_ctor_get(v_x_1496_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v_x_1496_, 1);
v___x_1515_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1516_ = l_Lasm_JS_Data_field(v_a_1514_, v___x_1515_);
if (lean_obj_tag(v___x_1516_) == 2)
{
uint8_t v_b_1517_; 
v_b_1517_ = lean_ctor_get_uint8(v___x_1516_, 0);
lean_dec_ref_known(v___x_1516_, 0);
if (v_b_1517_ == 1)
{
lean_object* v___x_1518_; 
lean_dec(v_a_1514_);
v___x_1518_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1518_;
}
else
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1520_ = l_Lasm_JS_Data_field(v_a_1514_, v___x_1519_);
lean_dec(v_a_1514_);
if (lean_obj_tag(v___x_1520_) == 6)
{
lean_object* v_b_1521_; 
v_b_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc_ref(v_b_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v_b_1499_ = v_b_1521_;
goto v___jp_1498_;
}
else
{
lean_dec(v___x_1520_);
goto v___jp_1503_;
}
}
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
lean_dec(v___x_1516_);
v___x_1522_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1523_ = l_Lasm_JS_Data_field(v_a_1514_, v___x_1522_);
lean_dec(v_a_1514_);
if (lean_obj_tag(v___x_1523_) == 6)
{
lean_object* v_b_1524_; 
v_b_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc_ref(v_b_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v_b_1499_ = v_b_1524_;
goto v___jp_1498_;
}
else
{
lean_dec(v___x_1523_);
goto v___jp_1503_;
}
}
}
v___jp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1500_, 0, v_b_1499_);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
v___jp_1503_:
{
lean_object* v___x_1504_; 
v___x_1504_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1525_);
return v_res_1527_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1528_; uint64_t v___x_1529_; 
v___x_1528_ = 0;
v___x_1529_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1530_, uint64_t v_extra_1531_){
_start:
{
uint64_t v___x_1532_; uint64_t v___y_1534_; 
v___x_1532_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1530_ == 0)
{
uint64_t v___x_1537_; 
v___x_1537_ = 0ULL;
v___y_1534_ = v___x_1537_;
goto v___jp_1533_;
}
else
{
uint64_t v___x_1538_; 
v___x_1538_ = 2ULL;
v___y_1534_ = v___x_1538_;
goto v___jp_1533_;
}
v___jp_1533_:
{
uint64_t v___x_1535_; uint64_t v___x_1536_; 
v___x_1535_ = lean_uint64_lor(v___x_1532_, v___y_1534_);
v___x_1536_ = lean_uint64_lor(v___x_1535_, v_extra_1531_);
return v___x_1536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1539_, lean_object* v_extra_1540_){
_start:
{
uint8_t v_await_boxed_1541_; uint64_t v_extra_boxed_1542_; uint64_t v_res_1543_; lean_object* v_r_1544_; 
v_await_boxed_1541_ = lean_unbox(v_await_1539_);
v_extra_boxed_1542_ = lean_unbox_uint64(v_extra_1540_);
lean_dec_ref(v_extra_1540_);
v_res_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1541_, v_extra_boxed_1542_);
v_r_1544_ = lean_box_uint64(v_res_1543_);
return v_r_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1545_){
_start:
{
if (lean_obj_tag(v_x_1545_) == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1547_, 0, v_x_1545_);
return v___x_1547_;
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1556_; 
v_a_1548_ = lean_ctor_get(v_x_1545_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_x_1545_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1550_ = v_x_1545_;
v_isShared_1551_ = v_isSharedCheck_1556_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v_x_1545_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1556_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
return v___x_1554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1560_, lean_object* v_x_1561_){
_start:
{
if (lean_obj_tag(v_x_1561_) == 0)
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1571_; 
v_a_1563_ = lean_ctor_get(v_x_1561_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_x_1561_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1565_ = v_x_1561_;
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v_x_1561_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
return v___x_1569_;
}
}
}
else
{
lean_object* v___x_1572_; 
lean_dec_ref_known(v_x_1561_, 1);
v___x_1572_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1560_);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1573_, lean_object* v_x_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1573_, v_x_1574_);
lean_dec(v_a_1573_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1577_, lean_object* v_failurePrefix_1578_, lean_object* v___f_1579_, lean_object* v___f_1580_, uint32_t v_op_1581_, uint64_t v_flags_1582_, lean_object* v___f_1583_, lean_object* v_x_1584_){
_start:
{
if (lean_obj_tag(v_x_1584_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1594_; 
lean_dec_ref(v___f_1583_);
lean_dec_ref(v___f_1580_);
lean_dec_ref(v___f_1579_);
v_a_1586_ = lean_ctor_get(v_x_1584_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1588_ = v_x_1584_;
v_isShared_1589_ = v_isSharedCheck_1594_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v_x_1584_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1594_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
return v___x_1592_;
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1636_; 
v_a_1595_ = lean_ctor_get(v_x_1584_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1597_ = v_x_1584_;
v_isShared_1598_ = v_isSharedCheck_1636_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v_x_1584_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1636_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
uint32_t v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
v___x_1599_ = 0;
v___x_1600_ = l_Lasm_JS_Wire_encode(v_payload_1577_);
v___x_1601_ = lean_string_utf8_byte_size(v_failurePrefix_1578_);
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1603_ = lean_nat_dec_eq(v___x_1601_, v___x_1602_);
if (v___x_1603_ == 0)
{
lean_object* v___f_1604_; lean_object* v_val_1606_; lean_object* v___x_1611_; 
lean_dec_ref(v___f_1583_);
lean_inc(v_a_1595_);
v___f_1604_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1604_, 0, v_a_1595_);
v___x_1611_ = lasm_js_call_into(v_a_1595_, v_op_1581_, v___x_1599_, v_flags_1582_, v___x_1600_, v_payload_1577_);
lean_dec_ref(v___x_1600_);
lean_dec(v_a_1595_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; lean_object* v___x_1614_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 0, v_a_1612_);
v___x_1614_ = v___x_1597_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
v_val_1606_ = v___x_1614_;
goto v___jp_1605_;
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; 
v_a_1616_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1611_, 1);
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 0);
lean_ctor_set(v___x_1597_, 0, v_a_1616_);
v___x_1618_ = v___x_1597_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
v_val_1606_ = v___x_1618_;
goto v___jp_1605_;
}
}
v___jp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1607_, 0, v_val_1606_);
v___x_1608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1602_, v___x_1603_, v___x_1607_, v___f_1604_);
v___x_1609_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1602_, v___x_1603_, v___x_1608_, v___f_1579_);
v___x_1610_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1602_, v___x_1603_, v___x_1609_, v___f_1580_);
return v___x_1610_;
}
}
else
{
lean_object* v___f_1620_; uint8_t v___x_1621_; lean_object* v_val_1623_; lean_object* v___x_1627_; 
lean_dec_ref(v___f_1580_);
lean_dec_ref(v___f_1579_);
lean_inc(v_a_1595_);
v___f_1620_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1620_, 0, v_a_1595_);
v___x_1621_ = 0;
v___x_1627_ = lasm_js_call_into(v_a_1595_, v_op_1581_, v___x_1599_, v_flags_1582_, v___x_1600_, v_payload_1577_);
lean_dec_ref(v___x_1600_);
lean_dec(v_a_1595_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 0, v_a_1628_);
v___x_1630_ = v___x_1597_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
v_val_1623_ = v___x_1630_;
goto v___jp_1622_;
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; 
v_a_1632_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1627_, 1);
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 0);
lean_ctor_set(v___x_1597_, 0, v_a_1632_);
v___x_1634_ = v___x_1597_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
v_val_1623_ = v___x_1634_;
goto v___jp_1622_;
}
}
v___jp_1622_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1624_, 0, v_val_1623_);
v___x_1625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1602_, v___x_1621_, v___x_1624_, v___f_1620_);
v___x_1626_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1602_, v___x_1621_, v___x_1625_, v___f_1583_);
return v___x_1626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1637_, lean_object* v_failurePrefix_1638_, lean_object* v___f_1639_, lean_object* v___f_1640_, lean_object* v_op_1641_, lean_object* v_flags_1642_, lean_object* v___f_1643_, lean_object* v_x_1644_, lean_object* v___y_1645_){
_start:
{
uint32_t v_op_boxed_1646_; uint64_t v_flags_boxed_1647_; lean_object* v_res_1648_; 
v_op_boxed_1646_ = lean_unbox_uint32(v_op_1641_);
lean_dec(v_op_1641_);
v_flags_boxed_1647_ = lean_unbox_uint64(v_flags_1642_);
lean_dec_ref(v_flags_1642_);
v_res_1648_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1637_, v_failurePrefix_1638_, v___f_1639_, v___f_1640_, v_op_boxed_1646_, v_flags_boxed_1647_, v___f_1643_, v_x_1644_);
lean_dec_ref(v_failurePrefix_1638_);
lean_dec(v_payload_1637_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1649_, lean_object* v_bytes_1650_){
_start:
{
lean_object* v___x_1652_; uint8_t v___x_1653_; lean_object* v_val_1655_; lean_object* v___x_1658_; 
v___x_1652_ = lean_unsigned_to_nat(0u);
v___x_1653_ = 0;
v___x_1658_ = l_Lasm_JS_Wire_decode(v_bytes_1650_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 1);
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
v_val_1655_ = v___x_1664_;
goto v___jp_1654_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
v_a_1667_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1658_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1658_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 0);
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
v_val_1655_ = v___x_1672_;
goto v___jp_1654_;
}
}
}
v___jp_1654_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v_val_1655_);
v___x_1657_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1652_, v___x_1653_, v___x_1656_, v___f_1649_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1675_, lean_object* v_bytes_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1675_, v_bytes_1676_);
lean_dec_ref(v_bytes_1676_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1679_, lean_object* v_x_1680_){
_start:
{
if (lean_obj_tag(v_x_1680_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1693_; 
v_a_1682_ = lean_ctor_get(v_x_1680_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_x_1680_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1684_ = v_x_1680_;
v_isShared_1685_ = v_isSharedCheck_1693_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v_x_1680_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1693_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1686_ = lean_io_error_to_string(v_a_1682_);
v___x_1687_ = lean_string_append(v_failurePrefix_1679_, v___x_1686_);
lean_dec_ref(v___x_1686_);
v___x_1688_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 0, v___x_1688_);
v___x_1690_ = v___x_1684_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
return v___x_1691_;
}
}
}
else
{
lean_object* v___x_1694_; 
lean_dec_ref(v_failurePrefix_1679_);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v_x_1680_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1695_, lean_object* v_x_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1695_, v_x_1696_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1699_, lean_object* v_x_1700_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v___f_1699_);
v_a_1702_ = lean_ctor_get(v_x_1700_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1700_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1704_ = v_x_1700_;
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v_x_1700_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1707_);
return v___x_1708_;
}
}
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1712_; 
v_a_1711_ = lean_ctor_get(v_x_1700_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v_x_1700_, 1);
v___x_1712_ = lean_apply_2(v___f_1699_, v_a_1711_, lean_box(0));
return v___x_1712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1713_, lean_object* v_x_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1713_, v_x_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1717_, lean_object* v_x_1718_){
_start:
{
if (lean_obj_tag(v_x_1718_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v___f_1717_);
v_a_1720_ = lean_ctor_get(v_x_1718_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_x_1718_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v_x_1718_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v_x_1718_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
else
{
lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1740_; 
v_isSharedCheck_1740_ = !lean_is_exclusive(v_x_1718_);
if (v_isSharedCheck_1740_ == 0)
{
lean_object* v_unused_1741_; 
v_unused_1741_ = lean_ctor_get(v_x_1718_, 0);
lean_dec(v_unused_1741_);
v___x_1730_ = v_x_1718_;
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
else
{
lean_dec(v_x_1718_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; uint8_t v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = 0;
v___x_1734_ = lean_io_promise_new();
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1734_);
v___x_1736_ = v___x_1730_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
v___x_1738_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1732_, v___x_1733_, v___x_1737_, v___f_1717_);
return v___x_1738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1742_, lean_object* v_x_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1742_, v_x_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1751_, uint64_t v_flags_1752_, lean_object* v_payload_1753_, lean_object* v_failurePrefix_1754_){
_start:
{
lean_object* v___f_1756_; lean_object* v___f_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___f_1760_; lean_object* v___f_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; lean_object* v_val_1765_; lean_object* v___x_1768_; 
lean_inc_ref(v_failurePrefix_1754_);
v___f_1756_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1756_, 0, v_failurePrefix_1754_);
v___f_1757_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1758_ = lean_box_uint32(v_op_1751_);
v___x_1759_ = lean_box_uint64(v_flags_1752_);
v___f_1760_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1760_, 0, v_payload_1753_);
lean_closure_set(v___f_1760_, 1, v_failurePrefix_1754_);
lean_closure_set(v___f_1760_, 2, v___f_1756_);
lean_closure_set(v___f_1760_, 3, v___f_1757_);
lean_closure_set(v___f_1760_, 4, v___x_1758_);
lean_closure_set(v___f_1760_, 5, v___x_1759_);
lean_closure_set(v___f_1760_, 6, v___f_1757_);
v___f_1761_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1761_, 0, v___f_1760_);
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = 0;
v___x_1768_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1768_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set_tag(v___x_1771_, 1);
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
v_val_1765_ = v___x_1774_;
goto v___jp_1764_;
}
}
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
v_a_1777_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1768_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1768_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set_tag(v___x_1779_, 0);
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
v_val_1765_ = v___x_1782_;
goto v___jp_1764_;
}
}
}
v___jp_1764_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_val_1765_);
v___x_1767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1762_, v___x_1763_, v___x_1766_, v___f_1761_);
return v___x_1767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1785_, lean_object* v_flags_1786_, lean_object* v_payload_1787_, lean_object* v_failurePrefix_1788_, lean_object* v_a_1789_){
_start:
{
uint32_t v_op_boxed_1790_; uint64_t v_flags_boxed_1791_; lean_object* v_res_1792_; 
v_op_boxed_1790_ = lean_unbox_uint32(v_op_1785_);
lean_dec(v_op_1785_);
v_flags_boxed_1791_ = lean_unbox_uint64(v_flags_1786_);
lean_dec_ref(v_flags_1786_);
v_res_1792_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1790_, v_flags_boxed_1791_, v_payload_1787_, v_failurePrefix_1788_);
return v_res_1792_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1793_; uint8_t v___x_1794_; uint64_t v___x_1795_; 
v___x_1793_ = 8ULL;
v___x_1794_ = 0;
v___x_1795_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1794_, v___x_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1796_, lean_object* v_name_1797_, lean_object* v_args_1798_){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; uint32_t v___x_1803_; uint64_t v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1800_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1801_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_o_1796_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1802_, 0, v_name_1797_);
v___x_1803_ = 205;
v___x_1804_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1805_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_args_1798_);
v___x_1806_ = lean_unsigned_to_nat(3u);
v___x_1807_ = lean_mk_empty_array_with_capacity(v___x_1806_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1801_);
v___x_1809_ = lean_array_push(v___x_1808_, v___x_1802_);
v___x_1810_ = lean_array_push(v___x_1809_, v___x_1805_);
v___x_1811_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
v___x_1812_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1803_, v___x_1804_, v___x_1811_, v___x_1800_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1813_, lean_object* v_name_1814_, lean_object* v_args_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1813_, v_name_1814_, v_args_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1818_, lean_object* v___x_1819_, lean_object* v___x_1820_, lean_object* v___x_1821_, lean_object* v___f_1822_){
_start:
{
uint8_t v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = 0;
v___x_1825_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1818_, v___x_1819_, v___x_1820_);
v___x_1826_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1821_, v___x_1824_, v___x_1825_, v___f_1822_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1827_, lean_object* v___x_1828_, lean_object* v___x_1829_, lean_object* v___x_1830_, lean_object* v___f_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1827_, v___x_1828_, v___x_1829_, v___x_1830_, v___f_1831_);
return v_res_1833_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1834_; uint64_t v___x_1835_; 
v___x_1834_ = 1;
v___x_1835_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1836_, uint64_t v_extra_1837_){
_start:
{
uint64_t v___x_1838_; uint64_t v___y_1840_; 
v___x_1838_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1836_ == 0)
{
uint64_t v___x_1843_; 
v___x_1843_ = 0ULL;
v___y_1840_ = v___x_1843_;
goto v___jp_1839_;
}
else
{
uint64_t v___x_1844_; 
v___x_1844_ = 2ULL;
v___y_1840_ = v___x_1844_;
goto v___jp_1839_;
}
v___jp_1839_:
{
uint64_t v___x_1841_; uint64_t v___x_1842_; 
v___x_1841_ = lean_uint64_lor(v___x_1838_, v___y_1840_);
v___x_1842_ = lean_uint64_lor(v___x_1841_, v_extra_1837_);
return v___x_1842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1845_, lean_object* v_extra_1846_){
_start:
{
uint8_t v_await_boxed_1847_; uint64_t v_extra_boxed_1848_; uint64_t v_res_1849_; lean_object* v_r_1850_; 
v_await_boxed_1847_ = lean_unbox(v_await_1845_);
v_extra_boxed_1848_ = lean_unbox_uint64(v_extra_1846_);
lean_dec_ref(v_extra_1846_);
v_res_1849_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1847_, v_extra_boxed_1848_);
v_r_1850_ = lean_box_uint64(v_res_1849_);
return v_r_1850_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1851_; uint8_t v___x_1852_; uint64_t v___x_1853_; 
v___x_1851_ = 8ULL;
v___x_1852_ = 0;
v___x_1853_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1852_, v___x_1851_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1855_, lean_object* v_name_1856_, lean_object* v_args_1857_){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; uint64_t v___x_1862_; lean_object* v___x_1863_; 
v___x_1859_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1860_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1860_, 0, v_o_1855_);
lean_ctor_set(v___x_1860_, 1, v___x_1859_);
lean_inc_ref(v_name_1856_);
v___x_1861_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_name_1856_);
v___x_1862_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1863_ = l_Lasm_JS_Value_invokeRaw(v___x_1860_, v___x_1861_, v_args_1857_, v___x_1862_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1866_ = lean_string_append(v___x_1865_, v_name_1856_);
lean_dec_ref(v_name_1856_);
v___x_1867_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1866_, v_a_1864_);
lean_dec(v_a_1864_);
lean_dec_ref(v___x_1866_);
return v___x_1867_;
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec_ref(v_name_1856_);
v_a_1868_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1863_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1863_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1876_, lean_object* v_name_1877_, lean_object* v_args_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1876_, v_name_1877_, v_args_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1886_){
_start:
{
lean_object* v___f_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___f_1888_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1889_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1890_ = lean_unsigned_to_nat(0u);
v___x_1891_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1892_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1886_, v___x_1889_, v___x_1891_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1902_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v___f_1898_; lean_object* v___x_1900_; 
v___x_1897_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1898_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1898_, 0, v_a_1893_);
lean_closure_set(v___f_1898_, 1, v___x_1897_);
lean_closure_set(v___f_1898_, 2, v___x_1891_);
lean_closure_set(v___f_1898_, 3, v___x_1890_);
lean_closure_set(v___f_1898_, 4, v___f_1888_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___f_1898_);
v___x_1900_ = v___x_1895_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v___f_1898_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
v_a_1903_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1892_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1892_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1911_, lean_object* v_a_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1911_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1916_, 0, v_d_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1920_, lean_object* v_d_1921_){
_start:
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1923_, 0, v_d_1921_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1924_, lean_object* v_d_1925_, lean_object* v_a_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1924_, v_d_1925_);
lean_dec_ref(v_context_1924_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1928_, uint32_t v_op_1929_, uint64_t v_flags_1930_, lean_object* v_payload_1931_, lean_object* v_failurePrefix_1932_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1929_, v_flags_1930_, v_payload_1931_, v_failurePrefix_1932_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1935_, lean_object* v_op_1936_, lean_object* v_flags_1937_, lean_object* v_payload_1938_, lean_object* v_failurePrefix_1939_, lean_object* v_a_1940_){
_start:
{
uint32_t v_op_boxed_1941_; uint64_t v_flags_boxed_1942_; lean_object* v_res_1943_; 
v_op_boxed_1941_ = lean_unbox_uint32(v_op_1936_);
lean_dec(v_op_1936_);
v_flags_boxed_1942_ = lean_unbox_uint64(v_flags_1937_);
lean_dec_ref(v_flags_1937_);
v_res_1943_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1935_, v_op_boxed_1941_, v_flags_boxed_1942_, v_payload_1938_, v_failurePrefix_1939_);
lean_dec_ref(v_context_1935_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1948_){
_start:
{
if (lean_obj_tag(v_x_1948_) == 0)
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1958_; 
v_a_1950_ = lean_ctor_get(v_x_1948_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_x_1948_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1952_ = v_x_1948_;
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v_x_1948_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
}
else
{
lean_object* v___x_1959_; 
lean_dec_ref_known(v_x_1948_, 1);
v___x_1959_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1960_);
return v_res_1962_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1963_; uint8_t v___x_1964_; uint64_t v___x_1965_; 
v___x_1963_ = 4ULL;
v___x_1964_ = 0;
v___x_1965_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1964_, v___x_1963_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1967_, lean_object* v_args_1968_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; uint64_t v___x_1973_; lean_object* v___x_1974_; 
v___x_1970_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1971_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1971_, 0, v_c_1967_);
lean_ctor_set(v___x_1971_, 1, v___x_1970_);
v___x_1972_ = lean_box(0);
v___x_1973_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1974_ = l_Lasm_JS_Value_invokeRaw(v___x_1971_, v___x_1972_, v_args_1968_, v___x_1973_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v___x_1974_, 1);
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1977_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1976_, v_a_1975_);
lean_dec(v_a_1975_);
return v___x_1977_;
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
v_a_1978_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1974_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1974_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1986_, lean_object* v_args_1987_, lean_object* v_a_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1986_, v_args_1987_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1990_, lean_object* v___x_1991_, lean_object* v_x_1992_){
_start:
{
lean_object* v_val_1995_; 
if (lean_obj_tag(v_x_1992_) == 0)
{
lean_object* v___x_1997_; 
lean_dec(v___x_1991_);
lean_dec(v___y_1990_);
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_x_1992_);
return v___x_1997_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2015_; 
v_a_1998_ = lean_ctor_get(v_x_1992_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_x_1992_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2000_ = v_x_1992_;
v_isShared_2001_ = v_isSharedCheck_2015_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v_x_1992_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2015_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2002_ = lean_unsigned_to_nat(2u);
v___x_2003_ = lean_mk_empty_array_with_capacity(v___x_2002_);
v___x_2004_ = lean_array_push(v___x_2003_, v___y_1990_);
v___x_2005_ = lean_array_push(v___x_2004_, v___x_1991_);
v___x_2006_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1998_, v___x_2005_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; lean_object* v___x_2009_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v_a_2007_);
v___x_2009_ = v___x_2000_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
v_val_1995_ = v___x_2009_;
goto v___jp_1994_;
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; 
v_a_2011_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_2006_, 1);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 0);
lean_ctor_set(v___x_2000_, 0, v_a_2011_);
v___x_2013_ = v___x_2000_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2011_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
v_val_1995_ = v___x_2013_;
goto v___jp_1994_;
}
}
}
}
v___jp_1994_:
{
lean_object* v___x_1996_; 
v___x_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1996_, 0, v_val_1995_);
return v___x_1996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_2016_, lean_object* v___x_2017_, lean_object* v_x_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_2016_, v___x_2017_, v_x_2018_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_2021_, lean_object* v___x_2022_, lean_object* v_x_2023_){
_start:
{
lean_object* v_val_2026_; 
if (lean_obj_tag(v_x_2023_) == 0)
{
lean_object* v___x_2028_; 
lean_dec(v___x_2022_);
lean_dec(v_a_2021_);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v_x_2023_);
return v___x_2028_;
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2048_; 
v_a_2029_ = lean_ctor_get(v_x_2023_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v_x_2023_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2031_ = v_x_2023_;
v_isShared_2032_ = v_isSharedCheck_2048_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v_x_2023_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2048_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2033_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2034_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2034_, 0, v_a_2021_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
v___x_2035_ = lean_unsigned_to_nat(2u);
v___x_2036_ = lean_mk_empty_array_with_capacity(v___x_2035_);
v___x_2037_ = lean_array_push(v___x_2036_, v___x_2034_);
v___x_2038_ = lean_array_push(v___x_2037_, v___x_2022_);
v___x_2039_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2029_, v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2042_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v_a_2040_);
v___x_2042_ = v___x_2031_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2040_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
v_val_2026_ = v___x_2042_;
goto v___jp_2025_;
}
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; 
v_a_2044_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2039_, 1);
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 0);
lean_ctor_set(v___x_2031_, 0, v_a_2044_);
v___x_2046_ = v___x_2031_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
v_val_2026_ = v___x_2046_;
goto v___jp_2025_;
}
}
}
}
v___jp_2025_:
{
lean_object* v___x_2027_; 
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v_val_2026_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_2049_, lean_object* v___x_2050_, lean_object* v_x_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_2049_, v___x_2050_, v_x_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_2055_, lean_object* v_key_2056_){
_start:
{
uint32_t v___x_2058_; uint32_t v___x_2059_; uint64_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2058_ = 203;
v___x_2059_ = lasm_js_value_handle(v_o_2055_);
v___x_2060_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_2056_);
v___x_2061_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_key_2056_);
v___x_2062_ = l_Lasm_JS_Wire_encode(v___x_2061_);
lean_dec_ref_known(v___x_2061_, 1);
v___x_2063_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2064_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2064_, 0, v_o_2055_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = lasm_js_call(v___x_2058_, v___x_2059_, v___x_2060_, v___x_2062_, v___x_2064_);
lean_dec_ref_known(v___x_2064_, 2);
lean_dec_ref(v___x_2062_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2068_ = l_String_quote(v_key_2056_);
v___x_2069_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
v___x_2070_ = lean_unsigned_to_nat(120u);
v___x_2071_ = lean_unsigned_to_nat(0u);
v___x_2072_ = l_Std_Format_pretty(v___x_2069_, v___x_2070_, v___x_2071_, v___x_2071_);
v___x_2073_ = lean_string_append(v___x_2067_, v___x_2072_);
lean_dec_ref(v___x_2072_);
v___x_2074_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2073_, v_a_2066_);
lean_dec(v_a_2066_);
lean_dec_ref(v___x_2073_);
return v___x_2074_;
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
lean_dec_ref(v_key_2056_);
v_a_2075_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2065_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2065_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2083_, lean_object* v_key_2084_, lean_object* v_a_2085_){
_start:
{
lean_object* v_res_2086_; 
v_res_2086_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2083_, v_key_2084_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2088_, uint8_t v___x_2089_, lean_object* v___f_2090_, lean_object* v_a_2091_, lean_object* v_x_2092_){
_start:
{
lean_object* v_val_2095_; 
if (lean_obj_tag(v_x_2092_) == 0)
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2106_; 
lean_dec(v_a_2091_);
lean_dec_ref(v___f_2090_);
lean_dec(v___x_2088_);
v_a_2098_ = lean_ctor_get(v_x_2092_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_x_2092_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2100_ = v_x_2092_;
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v_x_2092_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
lean_object* v___x_2104_; 
v___x_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
return v___x_2104_;
}
}
}
else
{
lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2120_; 
v_isSharedCheck_2120_ = !lean_is_exclusive(v_x_2092_);
if (v_isSharedCheck_2120_ == 0)
{
lean_object* v_unused_2121_; 
v_unused_2121_ = lean_ctor_get(v_x_2092_, 0);
lean_dec(v_unused_2121_);
v___x_2108_ = v_x_2092_;
v_isShared_2109_ = v_isSharedCheck_2120_;
goto v_resetjp_2107_;
}
else
{
lean_dec(v_x_2092_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2120_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2111_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2091_, v___x_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2111_, 1);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v_a_2112_);
v___x_2114_ = v___x_2108_;
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
v_val_2095_ = v___x_2114_;
goto v___jp_2094_;
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; 
v_a_2116_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2111_, 1);
if (v_isShared_2109_ == 0)
{
lean_ctor_set_tag(v___x_2108_, 0);
lean_ctor_set(v___x_2108_, 0, v_a_2116_);
v___x_2118_ = v___x_2108_;
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
v_val_2095_ = v___x_2118_;
goto v___jp_2094_;
}
}
}
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v_val_2095_);
v___x_2097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2088_, v___x_2089_, v___x_2096_, v___f_2090_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2122_, lean_object* v___x_2123_, lean_object* v___f_2124_, lean_object* v_a_2125_, lean_object* v_x_2126_, lean_object* v___y_2127_){
_start:
{
uint8_t v___x_5404__boxed_2128_; lean_object* v_res_2129_; 
v___x_5404__boxed_2128_ = lean_unbox(v___x_2123_);
v_res_2129_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2122_, v___x_5404__boxed_2128_, v___f_2124_, v_a_2125_, v_x_2126_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2131_, lean_object* v___x_2132_, uint8_t v___x_2133_, lean_object* v___f_2134_, lean_object* v_chunk_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2137_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2138_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_chunk_2135_);
v___x_2139_ = lean_unsigned_to_nat(1u);
v___x_2140_ = lean_mk_empty_array_with_capacity(v___x_2139_);
v___x_2141_ = lean_array_push(v___x_2140_, v___x_2138_);
v___x_2142_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2131_, v___x_2137_, v___x_2141_);
v___x_2143_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2132_, v___x_2133_, v___x_2142_, v___f_2134_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2144_, lean_object* v___x_2145_, lean_object* v___x_2146_, lean_object* v___f_2147_, lean_object* v_chunk_2148_, lean_object* v___y_2149_){
_start:
{
uint8_t v___x_5483__boxed_2150_; lean_object* v_res_2151_; 
v___x_5483__boxed_2150_ = lean_unbox(v___x_2146_);
v_res_2151_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2144_, v___x_2145_, v___x_5483__boxed_2150_, v___f_2147_, v_chunk_2148_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2153_, lean_object* v_a_2154_, lean_object* v___x_2155_, uint8_t v___x_2156_, lean_object* v___f_2157_, lean_object* v_x_2158_){
_start:
{
if (lean_obj_tag(v_x_2158_) == 0)
{
lean_object* v___x_2160_; 
lean_dec_ref(v___f_2157_);
lean_dec(v___x_2155_);
lean_dec(v_a_2154_);
lean_dec_ref(v___x_2153_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_x_2158_);
return v___x_2160_;
}
else
{
lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2173_; 
v_isSharedCheck_2173_ = !lean_is_exclusive(v_x_2158_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; 
v_unused_2174_ = lean_ctor_get(v_x_2158_, 0);
lean_dec(v_unused_2174_);
v___x_2162_ = v_x_2158_;
v_isShared_2163_ = v_isSharedCheck_2173_;
goto v_resetjp_2161_;
}
else
{
lean_dec(v_x_2158_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2173_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2164_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2163_ == 0)
{
lean_ctor_set_tag(v___x_2162_, 4);
lean_ctor_set(v___x_2162_, 0, v___x_2153_);
v___x_2166_ = v___x_2162_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2153_);
v___x_2166_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2167_ = lean_unsigned_to_nat(1u);
v___x_2168_ = lean_mk_empty_array_with_capacity(v___x_2167_);
v___x_2169_ = lean_array_push(v___x_2168_, v___x_2166_);
v___x_2170_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2154_, v___x_2164_, v___x_2169_);
v___x_2171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2155_, v___x_2156_, v___x_2170_, v___f_2157_);
return v___x_2171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2175_, lean_object* v_a_2176_, lean_object* v___x_2177_, lean_object* v___x_2178_, lean_object* v___f_2179_, lean_object* v_x_2180_, lean_object* v___y_2181_){
_start:
{
uint8_t v___x_5516__boxed_2182_; lean_object* v_res_2183_; 
v___x_5516__boxed_2182_ = lean_unbox(v___x_2178_);
v_res_2183_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2175_, v_a_2176_, v___x_2177_, v___x_5516__boxed_2182_, v___f_2179_, v_x_2180_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2185_, lean_object* v___x_2186_, uint8_t v___x_2187_, lean_object* v___f_2188_, lean_object* v_x_2189_){
_start:
{
if (lean_obj_tag(v_x_2189_) == 0)
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2213_; 
v_a_2191_ = lean_ctor_get(v_x_2189_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_x_2189_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2193_ = v_x_2189_;
v_isShared_2194_ = v_isSharedCheck_2213_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v_x_2189_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2213_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v_val_2200_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2195_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2196_ = lean_io_error_to_string(v_a_2191_);
v___x_2197_ = lean_box(v___x_2187_);
lean_inc(v___x_2186_);
lean_inc_ref(v___x_2196_);
v___f_2198_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2198_, 0, v___x_2196_);
lean_closure_set(v___f_2198_, 1, v_a_2185_);
lean_closure_set(v___f_2198_, 2, v___x_2186_);
lean_closure_set(v___f_2198_, 3, v___x_2197_);
lean_closure_set(v___f_2198_, 4, v___f_2188_);
v___x_2203_ = lean_string_append(v___x_2195_, v___x_2196_);
lean_dec_ref(v___x_2196_);
v___x_2204_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2203_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2207_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2205_);
lean_dec_ref_known(v___x_2204_, 1);
if (v_isShared_2194_ == 0)
{
lean_ctor_set_tag(v___x_2193_, 1);
lean_ctor_set(v___x_2193_, 0, v_a_2205_);
v___x_2207_ = v___x_2193_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
v_val_2200_ = v___x_2207_;
goto v___jp_2199_;
}
}
else
{
lean_object* v_a_2209_; lean_object* v___x_2211_; 
v_a_2209_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2204_, 1);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v_a_2209_);
v___x_2211_ = v___x_2193_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2209_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
v_val_2200_ = v___x_2211_;
goto v___jp_2199_;
}
}
v___jp_2199_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2201_, 0, v_val_2200_);
v___x_2202_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2186_, v___x_2187_, v___x_2201_, v___f_2198_);
return v___x_2202_;
}
}
}
else
{
lean_object* v___x_2214_; 
lean_dec_ref(v___f_2188_);
lean_dec(v___x_2186_);
lean_dec(v_a_2185_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v_x_2189_);
return v___x_2214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2215_, lean_object* v___x_2216_, lean_object* v___x_2217_, lean_object* v___f_2218_, lean_object* v_x_2219_, lean_object* v___y_2220_){
_start:
{
uint8_t v___x_5571__boxed_2221_; lean_object* v_res_2222_; 
v___x_5571__boxed_2221_ = lean_unbox(v___x_2217_);
v_res_2222_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2215_, v___x_2216_, v___x_5571__boxed_2221_, v___f_2218_, v_x_2219_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2224_, lean_object* v___x_2225_, lean_object* v___x_2226_, uint8_t v___x_2227_, lean_object* v___f_2228_, lean_object* v_x_2229_){
_start:
{
if (lean_obj_tag(v_x_2229_) == 0)
{
lean_object* v___x_2231_; 
lean_dec_ref(v___f_2228_);
lean_dec(v___x_2226_);
lean_dec_ref(v___x_2225_);
lean_dec(v_a_2224_);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v_x_2229_);
return v___x_2231_;
}
else
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec_ref_known(v_x_2229_, 1);
v___x_2232_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2233_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2224_, v___x_2232_, v___x_2225_);
v___x_2234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2226_, v___x_2227_, v___x_2233_, v___f_2228_);
return v___x_2234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2235_, lean_object* v___x_2236_, lean_object* v___x_2237_, lean_object* v___x_2238_, lean_object* v___f_2239_, lean_object* v_x_2240_, lean_object* v___y_2241_){
_start:
{
uint8_t v___x_5642__boxed_2242_; lean_object* v_res_2243_; 
v___x_5642__boxed_2242_ = lean_unbox(v___x_2238_);
v_res_2243_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2235_, v___x_2236_, v___x_2237_, v___x_5642__boxed_2242_, v___f_2239_, v_x_2240_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2244_, lean_object* v___f_2245_, lean_object* v___x_2246_, uint8_t v___x_2247_, lean_object* v___f_2248_, lean_object* v___f_2249_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = lean_apply_2(v_val_2244_, v___f_2245_, lean_box(0));
lean_inc(v___x_2246_);
v___x_2252_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2246_, v___x_2247_, v___x_2251_, v___f_2248_);
v___x_2253_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2246_, v___x_2247_, v___x_2252_, v___f_2249_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2254_, lean_object* v___f_2255_, lean_object* v___x_2256_, lean_object* v___x_2257_, lean_object* v___f_2258_, lean_object* v___f_2259_, lean_object* v___y_2260_){
_start:
{
uint8_t v___x_5674__boxed_2261_; lean_object* v_res_2262_; 
v___x_5674__boxed_2261_ = lean_unbox(v___x_2257_);
v_res_2262_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2254_, v___f_2255_, v___x_2256_, v___x_5674__boxed_2261_, v___f_2258_, v___f_2259_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2263_, uint8_t v___x_2264_, lean_object* v___f_2265_, lean_object* v___f_2266_, lean_object* v___x_2267_, lean_object* v___f_2268_, lean_object* v_val_2269_, lean_object* v___f_2270_, lean_object* v_x_2271_){
_start:
{
if (lean_obj_tag(v_x_2271_) == 0)
{
lean_object* v___x_2273_; 
lean_dec_ref(v___f_2270_);
lean_dec_ref(v_val_2269_);
lean_dec_ref(v___f_2268_);
lean_dec_ref(v___x_2267_);
lean_dec_ref(v___f_2266_);
lean_dec_ref(v___f_2265_);
lean_dec(v___x_2263_);
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v_x_2271_);
return v___x_2273_;
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v___f_2276_; lean_object* v___x_2277_; lean_object* v___f_2278_; lean_object* v___x_2279_; lean_object* v___f_2280_; lean_object* v___x_2281_; lean_object* v___f_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v_a_2274_ = lean_ctor_get(v_x_2271_, 0);
lean_inc_n(v_a_2274_, 3);
lean_dec_ref_known(v_x_2271_, 1);
v___x_2275_ = lean_box(v___x_2264_);
lean_inc_n(v___x_2263_, 5);
v___f_2276_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2276_, 0, v_a_2274_);
lean_closure_set(v___f_2276_, 1, v___x_2263_);
lean_closure_set(v___f_2276_, 2, v___x_2275_);
lean_closure_set(v___f_2276_, 3, v___f_2265_);
v___x_2277_ = lean_box(v___x_2264_);
v___f_2278_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2278_, 0, v_a_2274_);
lean_closure_set(v___f_2278_, 1, v___x_2263_);
lean_closure_set(v___f_2278_, 2, v___x_2277_);
lean_closure_set(v___f_2278_, 3, v___f_2266_);
v___x_2279_ = lean_box(v___x_2264_);
v___f_2280_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2280_, 0, v_a_2274_);
lean_closure_set(v___f_2280_, 1, v___x_2267_);
lean_closure_set(v___f_2280_, 2, v___x_2263_);
lean_closure_set(v___f_2280_, 3, v___x_2279_);
lean_closure_set(v___f_2280_, 4, v___f_2268_);
v___x_2281_ = lean_box(v___x_2264_);
v___f_2282_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2282_, 0, v_val_2269_);
lean_closure_set(v___f_2282_, 1, v___f_2276_);
lean_closure_set(v___f_2282_, 2, v___x_2263_);
lean_closure_set(v___f_2282_, 3, v___x_2281_);
lean_closure_set(v___f_2282_, 4, v___f_2280_);
lean_closure_set(v___f_2282_, 5, v___f_2278_);
v___x_2283_ = lean_io_as_task(v___f_2282_, v___x_2263_);
lean_dec_ref(v___x_2283_);
v___x_2284_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2285_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2263_, v___x_2264_, v___x_2284_, v___f_2270_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2286_, lean_object* v___x_2287_, lean_object* v___f_2288_, lean_object* v___f_2289_, lean_object* v___x_2290_, lean_object* v___f_2291_, lean_object* v_val_2292_, lean_object* v___f_2293_, lean_object* v_x_2294_, lean_object* v___y_2295_){
_start:
{
uint8_t v___x_5703__boxed_2296_; lean_object* v_res_2297_; 
v___x_5703__boxed_2296_ = lean_unbox(v___x_2287_);
v_res_2297_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2286_, v___x_5703__boxed_2296_, v___f_2288_, v___f_2289_, v___x_2290_, v___f_2291_, v_val_2292_, v___f_2293_, v_x_2294_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2299_, uint8_t v___x_2300_, lean_object* v___f_2301_, lean_object* v___x_2302_, lean_object* v_x_2303_){
_start:
{
lean_object* v_val_2306_; 
if (lean_obj_tag(v_x_2303_) == 0)
{
lean_object* v___x_2309_; 
lean_dec_ref(v___x_2302_);
lean_dec_ref(v___f_2301_);
lean_dec(v___x_2299_);
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v_x_2303_);
return v___x_2309_;
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2324_; 
v_a_2310_ = lean_ctor_get(v_x_2303_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v_x_2303_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2312_ = v_x_2303_;
v_isShared_2313_ = v_isSharedCheck_2324_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v_x_2303_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2324_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2315_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2310_, v___x_2314_, v___x_2302_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v_a_2316_);
v___x_2318_ = v___x_2312_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
v_val_2306_ = v___x_2318_;
goto v___jp_2305_;
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; 
v_a_2320_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2315_, 1);
if (v_isShared_2313_ == 0)
{
lean_ctor_set_tag(v___x_2312_, 0);
lean_ctor_set(v___x_2312_, 0, v_a_2320_);
v___x_2322_ = v___x_2312_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
v_val_2306_ = v___x_2322_;
goto v___jp_2305_;
}
}
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v_val_2306_);
v___x_2308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2299_, v___x_2300_, v___x_2307_, v___f_2301_);
return v___x_2308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2325_, lean_object* v___x_2326_, lean_object* v___f_2327_, lean_object* v___x_2328_, lean_object* v_x_2329_, lean_object* v___y_2330_){
_start:
{
uint8_t v___x_5764__boxed_2331_; lean_object* v_res_2332_; 
v___x_5764__boxed_2331_ = lean_unbox(v___x_2326_);
v_res_2332_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2325_, v___x_5764__boxed_2331_, v___f_2327_, v___x_2328_, v_x_2329_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2334_, lean_object* v___x_2335_, uint8_t v___x_2336_, lean_object* v_a_2337_, lean_object* v___f_2338_, lean_object* v___f_2339_, lean_object* v___x_2340_, lean_object* v___f_2341_, lean_object* v_val_2342_, lean_object* v_a_2343_, lean_object* v_x_2344_){
_start:
{
if (lean_obj_tag(v_x_2344_) == 0)
{
lean_object* v___x_2346_; 
lean_dec(v_a_2343_);
lean_dec_ref(v_val_2342_);
lean_dec_ref(v___f_2341_);
lean_dec_ref(v___x_2340_);
lean_dec_ref(v___f_2339_);
lean_dec_ref(v___f_2338_);
lean_dec(v_a_2337_);
lean_dec(v___x_2335_);
lean_dec(v___x_2334_);
v___x_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2346_, 0, v_x_2344_);
return v___x_2346_;
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2372_; 
v_a_2347_ = lean_ctor_get(v_x_2344_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_x_2344_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2349_ = v_x_2344_;
v_isShared_2350_ = v_isSharedCheck_2372_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2344_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2372_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___f_2351_; lean_object* v___x_2352_; lean_object* v___f_2353_; lean_object* v___x_2354_; lean_object* v___f_2355_; lean_object* v___x_2356_; lean_object* v___f_2357_; lean_object* v_val_2359_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___f_2351_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2351_, 0, v_a_2347_);
lean_closure_set(v___f_2351_, 1, v___x_2334_);
v___x_2352_ = lean_box(v___x_2336_);
lean_inc_n(v___x_2335_, 3);
v___f_2353_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2353_, 0, v___x_2335_);
lean_closure_set(v___f_2353_, 1, v___x_2352_);
lean_closure_set(v___f_2353_, 2, v___f_2351_);
lean_closure_set(v___f_2353_, 3, v_a_2337_);
v___x_2354_ = lean_box(v___x_2336_);
lean_inc_ref(v___x_2340_);
v___f_2355_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2355_, 0, v___x_2335_);
lean_closure_set(v___f_2355_, 1, v___x_2354_);
lean_closure_set(v___f_2355_, 2, v___f_2338_);
lean_closure_set(v___f_2355_, 3, v___f_2339_);
lean_closure_set(v___f_2355_, 4, v___x_2340_);
lean_closure_set(v___f_2355_, 5, v___f_2341_);
lean_closure_set(v___f_2355_, 6, v_val_2342_);
lean_closure_set(v___f_2355_, 7, v___f_2353_);
v___x_2356_ = lean_box(v___x_2336_);
v___f_2357_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2357_, 0, v___x_2335_);
lean_closure_set(v___f_2357_, 1, v___x_2356_);
lean_closure_set(v___f_2357_, 2, v___f_2355_);
lean_closure_set(v___f_2357_, 3, v___x_2340_);
v___x_2362_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2363_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2343_, v___x_2362_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref_known(v___x_2363_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2364_);
v___x_2366_ = v___x_2349_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2364_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
v_val_2359_ = v___x_2366_;
goto v___jp_2358_;
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; 
v_a_2368_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2363_, 1);
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2368_);
v___x_2370_ = v___x_2349_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
v_val_2359_ = v___x_2370_;
goto v___jp_2358_;
}
}
v___jp_2358_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_val_2359_);
v___x_2361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2335_, v___x_2336_, v___x_2360_, v___f_2357_);
return v___x_2361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2373_, lean_object* v___x_2374_, lean_object* v___x_2375_, lean_object* v_a_2376_, lean_object* v___f_2377_, lean_object* v___f_2378_, lean_object* v___x_2379_, lean_object* v___f_2380_, lean_object* v_val_2381_, lean_object* v_a_2382_, lean_object* v_x_2383_, lean_object* v___y_2384_){
_start:
{
uint8_t v___x_5827__boxed_2385_; lean_object* v_res_2386_; 
v___x_5827__boxed_2385_ = lean_unbox(v___x_2375_);
v_res_2386_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2373_, v___x_2374_, v___x_5827__boxed_2385_, v_a_2376_, v___f_2377_, v___f_2378_, v___x_2379_, v___f_2380_, v_val_2381_, v_a_2382_, v_x_2383_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2388_, lean_object* v___x_2389_, uint8_t v___x_2390_, lean_object* v_a_2391_, lean_object* v___f_2392_, lean_object* v___f_2393_, lean_object* v___x_2394_, lean_object* v___f_2395_, lean_object* v_val_2396_, lean_object* v_x_2397_){
_start:
{
if (lean_obj_tag(v_x_2397_) == 0)
{
lean_object* v___x_2399_; 
lean_dec_ref(v_val_2396_);
lean_dec_ref(v___f_2395_);
lean_dec_ref(v___x_2394_);
lean_dec_ref(v___f_2393_);
lean_dec_ref(v___f_2392_);
lean_dec(v_a_2391_);
lean_dec(v___x_2389_);
lean_dec(v___x_2388_);
v___x_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2399_, 0, v_x_2397_);
return v___x_2399_;
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2420_; 
v_a_2400_ = lean_ctor_get(v_x_2397_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_x_2397_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2402_ = v_x_2397_;
v_isShared_2403_ = v_isSharedCheck_2420_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v_x_2397_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2420_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v___f_2405_; lean_object* v_val_2407_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2404_ = lean_box(v___x_2390_);
lean_inc(v_a_2400_);
lean_inc(v___x_2389_);
v___f_2405_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2405_, 0, v___x_2388_);
lean_closure_set(v___f_2405_, 1, v___x_2389_);
lean_closure_set(v___f_2405_, 2, v___x_2404_);
lean_closure_set(v___f_2405_, 3, v_a_2391_);
lean_closure_set(v___f_2405_, 4, v___f_2392_);
lean_closure_set(v___f_2405_, 5, v___f_2393_);
lean_closure_set(v___f_2405_, 6, v___x_2394_);
lean_closure_set(v___f_2405_, 7, v___f_2395_);
lean_closure_set(v___f_2405_, 8, v_val_2396_);
lean_closure_set(v___f_2405_, 9, v_a_2400_);
v___x_2410_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2411_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2400_, v___x_2410_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2414_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v_a_2412_);
v___x_2414_ = v___x_2402_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
v_val_2407_ = v___x_2414_;
goto v___jp_2406_;
}
}
else
{
lean_object* v_a_2416_; lean_object* v___x_2418_; 
v_a_2416_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2411_, 1);
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 0);
lean_ctor_set(v___x_2402_, 0, v_a_2416_);
v___x_2418_ = v___x_2402_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2416_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
v_val_2407_ = v___x_2418_;
goto v___jp_2406_;
}
}
v___jp_2406_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v_val_2407_);
v___x_2409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2389_, v___x_2390_, v___x_2408_, v___f_2405_);
return v___x_2409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2421_, lean_object* v___x_2422_, lean_object* v___x_2423_, lean_object* v_a_2424_, lean_object* v___f_2425_, lean_object* v___f_2426_, lean_object* v___x_2427_, lean_object* v___f_2428_, lean_object* v_val_2429_, lean_object* v_x_2430_, lean_object* v___y_2431_){
_start:
{
uint8_t v___x_5921__boxed_2432_; lean_object* v_res_2433_; 
v___x_5921__boxed_2432_ = lean_unbox(v___x_2423_);
v_res_2433_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2421_, v___x_2422_, v___x_5921__boxed_2432_, v_a_2424_, v___f_2425_, v___f_2426_, v___x_2427_, v___f_2428_, v_val_2429_, v_x_2430_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2434_, uint8_t v___x_2435_, lean_object* v_a_2436_, lean_object* v___f_2437_, lean_object* v___f_2438_, lean_object* v___f_2439_, lean_object* v_val_2440_, lean_object* v_x_2441_){
_start:
{
if (lean_obj_tag(v_x_2441_) == 0)
{
lean_object* v___x_2443_; 
lean_dec_ref(v_val_2440_);
lean_dec_ref(v___f_2439_);
lean_dec_ref(v___f_2438_);
lean_dec_ref(v___f_2437_);
lean_dec(v_a_2436_);
lean_dec(v___x_2434_);
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v_x_2441_);
return v___x_2443_;
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2465_; 
v_a_2444_ = lean_ctor_get(v_x_2441_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v_x_2441_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2446_ = v_x_2441_;
v_isShared_2447_ = v_isSharedCheck_2465_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v_x_2441_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2465_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___f_2451_; lean_object* v_val_2453_; lean_object* v___x_2456_; 
v___x_2448_ = lean_unsigned_to_nat(0u);
v___x_2449_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2450_ = lean_box(v___x_2435_);
v___f_2451_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2451_, 0, v___x_2434_);
lean_closure_set(v___f_2451_, 1, v___x_2448_);
lean_closure_set(v___f_2451_, 2, v___x_2450_);
lean_closure_set(v___f_2451_, 3, v_a_2436_);
lean_closure_set(v___f_2451_, 4, v___f_2437_);
lean_closure_set(v___f_2451_, 5, v___f_2438_);
lean_closure_set(v___f_2451_, 6, v___x_2449_);
lean_closure_set(v___f_2451_, 7, v___f_2439_);
lean_closure_set(v___f_2451_, 8, v_val_2440_);
v___x_2456_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2444_, v___x_2449_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2459_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v_a_2457_);
v___x_2459_ = v___x_2446_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
v_val_2453_ = v___x_2459_;
goto v___jp_2452_;
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; 
v_a_2461_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2456_, 1);
if (v_isShared_2447_ == 0)
{
lean_ctor_set_tag(v___x_2446_, 0);
lean_ctor_set(v___x_2446_, 0, v_a_2461_);
v___x_2463_ = v___x_2446_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2461_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
v_val_2453_ = v___x_2463_;
goto v___jp_2452_;
}
}
v___jp_2452_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2454_, 0, v_val_2453_);
v___x_2455_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2448_, v___x_2435_, v___x_2454_, v___f_2451_);
return v___x_2455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2466_, lean_object* v___x_2467_, lean_object* v_a_2468_, lean_object* v___f_2469_, lean_object* v___f_2470_, lean_object* v___f_2471_, lean_object* v_val_2472_, lean_object* v_x_2473_, lean_object* v___y_2474_){
_start:
{
uint8_t v___x_6001__boxed_2475_; lean_object* v_res_2476_; 
v___x_6001__boxed_2475_ = lean_unbox(v___x_2467_);
v_res_2476_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2466_, v___x_6001__boxed_2475_, v_a_2468_, v___f_2469_, v___f_2470_, v___f_2471_, v_val_2472_, v_x_2473_);
return v_res_2476_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2477_ = lean_box(1);
v___x_2478_ = lean_unsigned_to_nat(2u);
v___x_2479_ = lean_mk_empty_array_with_capacity(v___x_2478_);
v___x_2480_ = lean_array_push(v___x_2479_, v___x_2477_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2481_, lean_object* v_x_2482_){
_start:
{
lean_object* v_val_2485_; 
if (lean_obj_tag(v_x_2482_) == 0)
{
lean_object* v___x_2487_; 
lean_dec(v___x_2481_);
v___x_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2487_, 0, v_x_2482_);
return v___x_2487_;
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2503_; 
v_a_2488_ = lean_ctor_get(v_x_2482_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_x_2482_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2490_ = v_x_2482_;
v_isShared_2491_ = v_isSharedCheck_2503_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v_x_2482_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2503_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2492_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2493_ = lean_array_push(v___x_2492_, v___x_2481_);
v___x_2494_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2488_, v___x_2493_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 0, v_a_2495_);
v___x_2497_ = v___x_2490_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2495_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
v_val_2485_ = v___x_2497_;
goto v___jp_2484_;
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; 
v_a_2499_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2494_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set_tag(v___x_2490_, 0);
lean_ctor_set(v___x_2490_, 0, v_a_2499_);
v___x_2501_ = v___x_2490_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2499_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
v_val_2485_ = v___x_2501_;
goto v___jp_2484_;
}
}
}
}
v___jp_2484_:
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v_val_2485_);
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2504_, lean_object* v_x_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2504_, v_x_2505_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2508_, size_t v_i_2509_, lean_object* v_bs_2510_){
_start:
{
uint8_t v___x_2511_; 
v___x_2511_ = lean_usize_dec_lt(v_i_2509_, v_sz_2508_);
if (v___x_2511_ == 0)
{
return v_bs_2510_;
}
else
{
lean_object* v_v_2512_; lean_object* v_fst_2513_; lean_object* v_snd_2514_; lean_object* v___x_2515_; lean_object* v_bs_x27_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; size_t v___x_2524_; size_t v___x_2525_; lean_object* v___x_2526_; 
v_v_2512_ = lean_array_uget_borrowed(v_bs_2510_, v_i_2509_);
v_fst_2513_ = lean_ctor_get(v_v_2512_, 0);
lean_inc(v_fst_2513_);
v_snd_2514_ = lean_ctor_get(v_v_2512_, 1);
lean_inc(v_snd_2514_);
v___x_2515_ = lean_unsigned_to_nat(0u);
v_bs_x27_2516_ = lean_array_uset(v_bs_2510_, v_i_2509_, v___x_2515_);
v___x_2517_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2517_, 0, v_fst_2513_);
v___x_2518_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2518_, 0, v_snd_2514_);
v___x_2519_ = lean_unsigned_to_nat(2u);
v___x_2520_ = lean_mk_empty_array_with_capacity(v___x_2519_);
v___x_2521_ = lean_array_push(v___x_2520_, v___x_2517_);
v___x_2522_ = lean_array_push(v___x_2521_, v___x_2518_);
v___x_2523_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2522_);
v___x_2524_ = ((size_t)1ULL);
v___x_2525_ = lean_usize_add(v_i_2509_, v___x_2524_);
v___x_2526_ = lean_array_uset(v_bs_x27_2516_, v_i_2509_, v___x_2523_);
v_i_2509_ = v___x_2525_;
v_bs_2510_ = v___x_2526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2528_, lean_object* v_i_2529_, lean_object* v_bs_2530_){
_start:
{
size_t v_sz_boxed_2531_; size_t v_i_boxed_2532_; lean_object* v_res_2533_; 
v_sz_boxed_2531_ = lean_unbox_usize(v_sz_2528_);
lean_dec(v_sz_2528_);
v_i_boxed_2532_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_res_2533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2531_, v_i_boxed_2532_, v_bs_2530_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2537_, lean_object* v_method_2538_, lean_object* v___f_2539_, lean_object* v___f_2540_, lean_object* v___f_2541_, lean_object* v_x_2542_){
_start:
{
uint8_t v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v_val_2548_; lean_object* v___y_2552_; lean_object* v___y_2553_; uint8_t v___y_2554_; lean_object* v_val_2555_; lean_object* v___y_2559_; uint8_t v___y_2560_; lean_object* v___y_2561_; lean_object* v_val_2562_; 
if (lean_obj_tag(v_x_2542_) == 0)
{
lean_object* v___x_2565_; 
lean_dec_ref(v___f_2541_);
lean_dec_ref(v___f_2540_);
lean_dec_ref(v___f_2539_);
lean_dec_ref(v_r_2537_);
v___x_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2565_, 0, v_x_2542_);
return v___x_2565_;
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2659_; 
v_a_2566_ = lean_ctor_get(v_x_2542_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v_x_2542_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2568_ = v_x_2542_;
v_isShared_2569_ = v_isSharedCheck_2659_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v_x_2542_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2659_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___y_2571_; lean_object* v___y_2572_; uint16_t v_status_2586_; lean_object* v_headers_2587_; lean_object* v_body_2588_; lean_object* v_stream_2589_; lean_object* v___x_2590_; lean_object* v___y_2592_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; 
v_status_2586_ = lean_ctor_get_uint16(v_r_2537_, sizeof(void*)*3);
v_headers_2587_ = lean_ctor_get(v_r_2537_, 0);
lean_inc_ref(v_headers_2587_);
v_body_2588_ = lean_ctor_get(v_r_2537_, 1);
lean_inc_ref(v_body_2588_);
v_stream_2589_ = lean_ctor_get(v_r_2537_, 2);
lean_inc(v_stream_2589_);
lean_dec_ref(v_r_2537_);
v___x_2590_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2651_ = lean_uint16_to_nat(v_status_2586_);
v___x_2652_ = lean_nat_to_int(v___x_2651_);
v___x_2653_ = lean_nat_abs(v___x_2652_);
v___x_2654_ = lean_cstr_to_nat("9007199254740991");
v___x_2655_ = lean_nat_dec_le(v___x_2653_, v___x_2654_);
lean_dec(v___x_2653_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; 
v___x_2656_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2652_);
v___y_2592_ = v___x_2656_;
goto v___jp_2591_;
}
else
{
double v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = l_Float_ofInt(v___x_2652_);
lean_dec(v___x_2652_);
v___x_2658_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2658_, 0, v___x_2657_);
v___y_2592_ = v___x_2658_;
goto v___jp_2591_;
}
v___jp_2570_:
{
lean_object* v___f_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; 
v___f_2573_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2573_, 0, v___y_2572_);
lean_closure_set(v___f_2573_, 1, v___y_2571_);
v___x_2574_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2575_ = lean_unsigned_to_nat(0u);
v___x_2576_ = 0;
v___x_2577_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2566_, v___x_2574_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2580_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v_a_2578_);
v___x_2580_ = v___x_2568_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2578_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
v___y_2559_ = v___x_2575_;
v___y_2560_ = v___x_2576_;
v___y_2561_ = v___f_2573_;
v_val_2562_ = v___x_2580_;
goto v___jp_2558_;
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; 
v_a_2582_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2577_, 1);
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 0);
lean_ctor_set(v___x_2568_, 0, v_a_2582_);
v___x_2584_ = v___x_2568_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2582_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
v___y_2559_ = v___x_2575_;
v___y_2560_ = v___x_2576_;
v___y_2561_ = v___f_2573_;
v_val_2562_ = v___x_2584_;
goto v___jp_2558_;
}
}
}
v___jp_2591_:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; size_t v_sz_2595_; size_t v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2590_);
lean_ctor_set(v___x_2593_, 1, v___y_2592_);
v___x_2594_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2595_ = lean_array_size(v_headers_2587_);
v___x_2596_ = ((size_t)0ULL);
v___x_2597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2595_, v___x_2596_, v_headers_2587_);
v___x_2598_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2594_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = lean_box(0);
v___x_2601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2599_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2593_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = l_Lasm_JS_obj(v___x_2602_);
if (lean_obj_tag(v_stream_2589_) == 0)
{
uint8_t v___x_2604_; 
lean_dec_ref(v___f_2541_);
lean_dec_ref(v___f_2540_);
lean_dec_ref(v___f_2539_);
v___x_2604_ = l_Lasm_Fetch_bodyless(v_method_2538_, v_status_2586_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2605_, 0, v_body_2588_);
v___y_2571_ = v___x_2603_;
v___y_2572_ = v___x_2605_;
goto v___jp_2570_;
}
else
{
lean_object* v___x_2606_; 
lean_dec_ref(v_body_2588_);
v___x_2606_ = lean_box(1);
v___y_2571_ = v___x_2603_;
v___y_2572_ = v___x_2606_;
goto v___jp_2570_;
}
}
else
{
lean_object* v_val_2607_; uint8_t v___x_2608_; 
lean_dec_ref(v_body_2588_);
lean_del_object(v___x_2568_);
v_val_2607_ = lean_ctor_get(v_stream_2589_, 0);
lean_inc(v_val_2607_);
lean_dec_ref_known(v_stream_2589_, 1);
v___x_2608_ = l_Lasm_Fetch_bodyless(v_method_2538_, v_status_2586_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___f_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2609_ = lean_box(v___x_2608_);
lean_inc(v_a_2566_);
v___f_2610_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2610_, 0, v___x_2603_);
lean_closure_set(v___f_2610_, 1, v___x_2609_);
lean_closure_set(v___f_2610_, 2, v_a_2566_);
lean_closure_set(v___f_2610_, 3, v___f_2539_);
lean_closure_set(v___f_2610_, 4, v___f_2540_);
lean_closure_set(v___f_2610_, 5, v___f_2541_);
lean_closure_set(v___f_2610_, 6, v_val_2607_);
v___x_2611_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2612_ = lean_unsigned_to_nat(0u);
v___x_2613_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2566_, v___x_2611_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set_tag(v___x_2616_, 1);
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
v___y_2552_ = v___x_2612_;
v___y_2553_ = v___f_2610_;
v___y_2554_ = v___x_2608_;
v_val_2555_ = v___x_2619_;
goto v___jp_2551_;
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
v_a_2622_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2613_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2613_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
lean_ctor_set_tag(v___x_2624_, 0);
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
v___y_2552_ = v___x_2612_;
v___y_2553_ = v___f_2610_;
v___y_2554_ = v___x_2608_;
v_val_2555_ = v___x_2627_;
goto v___jp_2551_;
}
}
}
}
else
{
lean_object* v___f_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; uint8_t v___x_2633_; lean_object* v___x_2634_; 
lean_dec(v_val_2607_);
lean_dec_ref(v___f_2541_);
lean_dec_ref(v___f_2540_);
lean_dec_ref(v___f_2539_);
v___f_2630_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2630_, 0, v___x_2603_);
v___x_2631_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2632_ = lean_unsigned_to_nat(0u);
v___x_2633_ = 0;
v___x_2634_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2566_, v___x_2631_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___x_2634_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2634_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 1);
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
v___y_2545_ = v___x_2633_;
v___y_2546_ = v___x_2632_;
v___y_2547_ = v___f_2630_;
v_val_2548_ = v___x_2640_;
goto v___jp_2544_;
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
v_a_2643_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2634_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2634_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
lean_ctor_set_tag(v___x_2645_, 0);
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
v___y_2545_ = v___x_2633_;
v___y_2546_ = v___x_2632_;
v___y_2547_ = v___f_2630_;
v_val_2548_ = v___x_2648_;
goto v___jp_2544_;
}
}
}
}
}
}
}
}
v___jp_2544_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v_val_2548_);
v___x_2550_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2546_, v___y_2545_, v___x_2549_, v___y_2547_);
return v___x_2550_;
}
v___jp_2551_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2556_, 0, v_val_2555_);
v___x_2557_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2552_, v___y_2554_, v___x_2556_, v___y_2553_);
return v___x_2557_;
}
v___jp_2558_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v_val_2562_);
v___x_2564_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2559_, v___y_2560_, v___x_2563_, v___y_2561_);
return v___x_2564_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2660_, lean_object* v_method_2661_, lean_object* v___f_2662_, lean_object* v___f_2663_, lean_object* v___f_2664_, lean_object* v_x_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2660_, v_method_2661_, v___f_2662_, v___f_2663_, v___f_2664_, v_x_2665_);
lean_dec_ref(v_method_2661_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2669_, lean_object* v_r_2670_){
_start:
{
lean_object* v___f_2672_; lean_object* v___f_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; lean_object* v_val_2677_; lean_object* v___x_2680_; 
v___f_2672_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2673_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2673_, 0, v_r_2670_);
lean_closure_set(v___f_2673_, 1, v_method_2669_);
lean_closure_set(v___f_2673_, 2, v___f_2672_);
lean_closure_set(v___f_2673_, 3, v___f_2672_);
lean_closure_set(v___f_2673_, 4, v___f_2672_);
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = 0;
v___x_2680_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2680_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2680_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set_tag(v___x_2683_, 1);
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
v_val_2677_ = v___x_2686_;
goto v___jp_2676_;
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
v_a_2689_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2680_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2680_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set_tag(v___x_2691_, 0);
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
v_val_2677_ = v___x_2694_;
goto v___jp_2676_;
}
}
}
v___jp_2676_:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2678_, 0, v_val_2677_);
v___x_2679_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2674_, v___x_2675_, v___x_2678_, v___f_2673_);
return v___x_2679_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2697_, lean_object* v_r_2698_, lean_object* v_a_2699_){
_start:
{
lean_object* v_res_2700_; 
v_res_2700_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2697_, v_r_2698_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2702_ = lean_box(0);
v___x_2703_ = lean_st_mk_ref(v___x_2702_);
v___x_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2707_){
_start:
{
if (lean_obj_tag(v_x_2707_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2717_; 
v_a_2709_ = lean_ctor_get(v_x_2707_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_x_2707_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2711_ = v_x_2707_;
v_isShared_2712_ = v_isSharedCheck_2717_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v_x_2707_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2717_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2714_);
return v___x_2715_;
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2728_; 
v_a_2718_ = lean_ctor_get(v_x_2707_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v_x_2707_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2720_ = v_x_2707_;
v_isShared_2721_ = v_isSharedCheck_2728_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v_x_2707_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2728_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2725_; 
v___x_2722_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2723_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2723_, 0, v_a_2718_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 0, v___x_2723_);
v___x_2725_ = v___x_2720_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2723_);
v___x_2725_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
lean_object* v___x_2726_; 
v___x_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
return v___x_2726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2732_, lean_object* v___x_2733_, lean_object* v___f_2734_, lean_object* v_x_2735_){
_start:
{
if (lean_obj_tag(v_x_2735_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2745_; 
lean_dec_ref(v___f_2734_);
lean_dec(v___x_2733_);
lean_dec_ref(v___y_2732_);
v_a_2737_ = lean_ctor_get(v_x_2735_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v_x_2735_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2739_ = v_x_2735_;
v_isShared_2740_ = v_isSharedCheck_2745_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v_x_2735_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2745_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2742_);
return v___x_2743_;
}
}
}
else
{
lean_object* v_a_2746_; uint8_t v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_a_2746_ = lean_ctor_get(v_x_2735_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v_x_2735_, 1);
v___x_2747_ = 0;
v___x_2748_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2732_, v_a_2746_);
v___x_2749_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2733_, v___x_2747_, v___x_2748_, v___f_2734_);
return v___x_2749_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2750_, lean_object* v___x_2751_, lean_object* v___f_2752_, lean_object* v_x_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2750_, v___x_2751_, v___f_2752_, v_x_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2756_, lean_object* v___x_2757_, lean_object* v___f_2758_, lean_object* v_req_2759_){
_start:
{
uint8_t v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2761_ = 0;
v___x_2762_ = l_Lasm_Fetch_respond(v_handler_2756_, v_req_2759_);
v___x_2763_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2757_, v___x_2761_, v___x_2762_, v___f_2758_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2764_, lean_object* v___x_2765_, lean_object* v___f_2766_, lean_object* v_req_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2764_, v___x_2765_, v___f_2766_, v_req_2767_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2770_, lean_object* v_x_2771_){
_start:
{
if (lean_obj_tag(v_x_2771_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref(v___f_2770_);
v_a_2773_ = lean_ctor_get(v_x_2771_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v_x_2771_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2775_ = v_x_2771_;
v_isShared_2776_ = v_isSharedCheck_2781_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v_x_2771_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2781_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2773_);
v___x_2778_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2779_; 
v___x_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
return v___x_2779_;
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2783_; 
v_a_2782_ = lean_ctor_get(v_x_2771_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v_x_2771_, 1);
v___x_2783_ = lean_apply_2(v___f_2770_, v_a_2782_, lean_box(0));
return v___x_2783_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2784_, lean_object* v_x_2785_, lean_object* v___y_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2784_, v_x_2785_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v_headers_2790_, lean_object* v___f_2791_, lean_object* v___x_2792_, uint8_t v___x_2793_, lean_object* v___f_2794_, lean_object* v_x_2795_){
_start:
{
if (lean_obj_tag(v_x_2795_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2805_; 
lean_dec_ref(v___f_2794_);
lean_dec(v___x_2792_);
lean_dec_ref(v___f_2791_);
lean_dec_ref(v_headers_2790_);
lean_dec_ref(v___y_2789_);
lean_dec_ref(v___y_2788_);
v_a_2797_ = lean_ctor_get(v_x_2795_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v_x_2795_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2799_ = v_x_2795_;
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v_x_2795_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2797_);
v___x_2802_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
lean_object* v___x_2803_; 
v___x_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
return v___x_2803_;
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2816_; 
v_a_2806_ = lean_ctor_get(v_x_2795_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v_x_2795_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2808_ = v_x_2795_;
v_isShared_2809_ = v_isSharedCheck_2816_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v_x_2795_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2816_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2810_, 0, v___y_2788_);
lean_ctor_set(v___x_2810_, 1, v___y_2789_);
lean_ctor_set(v___x_2810_, 2, v_headers_2790_);
lean_ctor_set(v___x_2810_, 3, v_a_2806_);
lean_ctor_set(v___x_2810_, 4, v___f_2791_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v___x_2810_);
v___x_2812_ = v___x_2808_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2812_);
v___x_2814_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2792_, v___x_2793_, v___x_2813_, v___f_2794_);
return v___x_2814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v_headers_2819_, lean_object* v___f_2820_, lean_object* v___x_2821_, lean_object* v___x_2822_, lean_object* v___f_2823_, lean_object* v_x_2824_, lean_object* v___y_2825_){
_start:
{
uint8_t v___x_7603__boxed_2826_; lean_object* v_res_2827_; 
v___x_7603__boxed_2826_ = lean_unbox(v___x_2822_);
v_res_2827_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2817_, v___y_2818_, v_headers_2819_, v___f_2820_, v___x_2821_, v___x_7603__boxed_2826_, v___f_2823_, v_x_2824_);
return v_res_2827_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2832_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2833_ = lean_string_utf8_byte_size(v___x_2832_);
return v___x_2833_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2834_ = lean_unsigned_to_nat(0u);
v___x_2835_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2836_ = lean_nat_dec_eq(v___x_2835_, v___x_2834_);
return v___x_2836_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2841_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2842_ = lean_unsigned_to_nat(46u);
v___x_2843_ = lean_unsigned_to_nat(193u);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2845_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2846_ = l_mkPanicMessageWithDecl(v___x_2845_, v___x_2844_, v___x_2843_, v___x_2842_, v___x_2841_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2848_, lean_object* v_d_2849_){
_start:
{
lean_object* v___y_2852_; lean_object* v___y_2853_; 
if (lean_obj_tag(v_d_2849_) == 6)
{
lean_object* v_b_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
v_b_2857_ = lean_ctor_get(v_d_2849_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_d_2849_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v_d_2849_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_b_2857_);
lean_dec(v_d_2849_);
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
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_b_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
else
{
lean_object* v___x_2865_; lean_object* v_received_2867_; 
v___x_2865_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2849_) == 9)
{
lean_object* v_value_2881_; lean_object* v_description_2882_; uint8_t v___x_2883_; 
v_value_2881_ = lean_ctor_get(v_d_2849_, 0);
v_description_2882_ = lean_ctor_get(v_d_2849_, 1);
v___x_2883_ = lean_string_dec_eq(v_description_2882_, v___x_2865_);
if (v___x_2883_ == 0)
{
goto v___jp_2879_;
}
else
{
uint32_t v___x_2884_; uint64_t v___x_2885_; lean_object* v___x_2886_; uint32_t v___x_2887_; lean_object* v___x_2888_; 
lean_inc_n(v_value_2881_, 2);
lean_dec_ref_known(v_d_2849_, 2);
v___x_2884_ = 206;
v___x_2885_ = 0ULL;
v___x_2886_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_value_2881_);
lean_ctor_set(v___x_2886_, 1, v___x_2865_);
v___x_2887_ = lasm_js_value_handle(v_value_2881_);
lean_dec(v_value_2881_);
v___x_2888_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2884_, v___x_2885_, v___x_2886_, v___x_2887_);
lean_dec_ref_known(v___x_2886_, 2);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; uint8_t v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v___x_2890_ = lean_string_validate_utf8(v_a_2889_);
if (v___x_2890_ == 0)
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v_a_2889_);
v___x_2891_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2892_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2891_);
v_received_2867_ = v___x_2892_;
goto v___jp_2866_;
}
else
{
lean_object* v___x_2893_; 
v___x_2893_ = lean_string_from_utf8_unchecked(v_a_2889_);
v_received_2867_ = v___x_2893_;
goto v___jp_2866_;
}
}
else
{
lean_object* v___x_2894_; 
lean_dec_ref_known(v___x_2888_, 1);
v___x_2894_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2867_ = v___x_2894_;
goto v___jp_2866_;
}
}
}
else
{
goto v___jp_2879_;
}
v___jp_2866_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
v___x_2868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2869_ = lean_string_append(v___x_2868_, v_context_2848_);
v___x_2870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2871_ = lean_string_append(v___x_2869_, v___x_2870_);
v___x_2872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2873_ = lean_string_append(v___x_2871_, v___x_2872_);
v___x_2874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2875_ = lean_string_append(v___x_2873_, v___x_2874_);
v___x_2876_ = lean_string_append(v___x_2875_, v_received_2867_);
lean_dec_ref(v_received_2867_);
v___x_2877_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; 
v___x_2878_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2852_ = v___x_2876_;
v___y_2853_ = v___x_2878_;
goto v___jp_2851_;
}
else
{
v___y_2852_ = v___x_2876_;
v___y_2853_ = v___x_2865_;
goto v___jp_2851_;
}
}
v___jp_2879_:
{
lean_object* v___x_2880_; 
v___x_2880_ = l_Lasm_JS_Data_describe(v_d_2849_);
v_received_2867_ = v___x_2880_;
goto v___jp_2866_;
}
}
v___jp_2851_:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2854_ = lean_string_append(v___y_2852_, v___y_2853_);
v___x_2855_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
return v___x_2856_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2895_, lean_object* v_d_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2895_, v_d_2896_);
lean_dec_ref(v_context_2895_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2899_, lean_object* v_bytes_2900_){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l_Lasm_JS_Wire_decode(v_bytes_2900_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_object* v_a_2903_; lean_object* v___x_2904_; 
v_a_2903_ = lean_ctor_get(v___x_2902_, 0);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2902_, 1);
v___x_2904_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2899_, v_a_2903_);
return v___x_2904_;
}
else
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
v_a_2905_ = lean_ctor_get(v___x_2902_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2902_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2907_ = v___x_2902_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v___x_2902_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
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
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2913_, lean_object* v_bytes_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2913_, v_bytes_2914_);
lean_dec_ref(v_bytes_2914_);
lean_dec_ref(v_context_2913_);
return v_res_2916_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2917_, uint64_t v_extra_2918_){
_start:
{
uint64_t v___x_2919_; uint64_t v___y_2921_; 
v___x_2919_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2917_ == 0)
{
uint64_t v___x_2924_; 
v___x_2924_ = 0ULL;
v___y_2921_ = v___x_2924_;
goto v___jp_2920_;
}
else
{
uint64_t v___x_2925_; 
v___x_2925_ = 2ULL;
v___y_2921_ = v___x_2925_;
goto v___jp_2920_;
}
v___jp_2920_:
{
uint64_t v___x_2922_; uint64_t v___x_2923_; 
v___x_2922_ = lean_uint64_lor(v___x_2919_, v___y_2921_);
v___x_2923_ = lean_uint64_lor(v___x_2922_, v_extra_2918_);
return v___x_2923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2926_, lean_object* v_extra_2927_){
_start:
{
uint8_t v_await_boxed_2928_; uint64_t v_extra_boxed_2929_; uint64_t v_res_2930_; lean_object* v_r_2931_; 
v_await_boxed_2928_ = lean_unbox(v_await_2926_);
v_extra_boxed_2929_ = lean_unbox_uint64(v_extra_2927_);
lean_dec_ref(v_extra_2927_);
v_res_2930_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2928_, v_extra_boxed_2929_);
v_r_2931_ = lean_box_uint64(v_res_2930_);
return v_r_2931_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2932_; uint8_t v___x_2933_; uint64_t v___x_2934_; 
v___x_2932_ = 4ULL;
v___x_2933_ = 0;
v___x_2934_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2933_, v___x_2932_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2935_, lean_object* v_args_2936_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; uint64_t v___x_2941_; lean_object* v___x_2942_; 
v___x_2938_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2939_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2939_, 0, v_c_2935_);
lean_ctor_set(v___x_2939_, 1, v___x_2938_);
v___x_2940_ = lean_box(0);
v___x_2941_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2942_ = l_Lasm_JS_Value_invokeRaw(v___x_2939_, v___x_2940_, v_args_2936_, v___x_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2945_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2944_, v_a_2943_);
lean_dec(v_a_2943_);
return v___x_2945_;
}
else
{
return v___x_2942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2946_, lean_object* v_args_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2946_, v_args_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2950_, uint8_t v___x_2951_, lean_object* v___f_2952_, lean_object* v_a_2953_, lean_object* v_x_2954_){
_start:
{
lean_object* v_val_2957_; 
if (lean_obj_tag(v_x_2954_) == 0)
{
lean_object* v_a_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2968_; 
lean_dec(v_a_2953_);
lean_dec_ref(v___f_2952_);
lean_dec(v___x_2950_);
v_a_2960_ = lean_ctor_get(v_x_2954_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v_x_2954_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2962_ = v_x_2954_;
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_a_2960_);
lean_dec(v_x_2954_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
if (v_isShared_2963_ == 0)
{
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2960_);
v___x_2965_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
return v___x_2966_;
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2987_; 
v_a_2969_ = lean_ctor_get(v_x_2954_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_x_2954_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2971_ = v_x_2954_;
v_isShared_2972_ = v_isSharedCheck_2987_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v_x_2954_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2987_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2973_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2974_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2974_, 0, v_a_2969_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
v___x_2975_ = lean_unsigned_to_nat(1u);
v___x_2976_ = lean_mk_empty_array_with_capacity(v___x_2975_);
v___x_2977_ = lean_array_push(v___x_2976_, v___x_2974_);
v___x_2978_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2953_, v___x_2977_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2981_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 0, v_a_2979_);
v___x_2981_ = v___x_2971_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2979_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
v_val_2957_ = v___x_2981_;
goto v___jp_2956_;
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; 
v_a_2983_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2978_, 1);
if (v_isShared_2972_ == 0)
{
lean_ctor_set_tag(v___x_2971_, 0);
lean_ctor_set(v___x_2971_, 0, v_a_2983_);
v___x_2985_ = v___x_2971_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2983_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
v_val_2957_ = v___x_2985_;
goto v___jp_2956_;
}
}
}
}
v___jp_2956_:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_val_2957_);
v___x_2959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2950_, v___x_2951_, v___x_2958_, v___f_2952_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2988_, lean_object* v___x_2989_, lean_object* v___f_2990_, lean_object* v_a_2991_, lean_object* v_x_2992_, lean_object* v___y_2993_){
_start:
{
uint8_t v___x_7889__boxed_2994_; lean_object* v_res_2995_; 
v___x_7889__boxed_2994_ = lean_unbox(v___x_2989_);
v_res_2995_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2988_, v___x_7889__boxed_2994_, v___f_2990_, v_a_2991_, v_x_2992_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v_headers_2998_, lean_object* v___x_2999_, lean_object* v___x_3000_, lean_object* v___f_3001_, lean_object* v_x_3002_){
_start:
{
if (lean_obj_tag(v_x_3002_) == 0)
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3012_; 
lean_dec_ref(v___f_3001_);
lean_dec(v___x_3000_);
lean_dec_ref(v___x_2999_);
lean_dec_ref(v_headers_2998_);
lean_dec_ref(v___y_2997_);
lean_dec_ref(v___y_2996_);
v_a_3004_ = lean_ctor_get(v_x_3002_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v_x_3002_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3006_ = v_x_3002_;
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v_x_3002_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
return v___x_3010_;
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3024_; 
v_a_3013_ = lean_ctor_get(v_x_3002_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_x_3002_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3015_ = v_x_3002_;
v_isShared_3016_ = v_isSharedCheck_3024_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v_x_3002_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3024_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3017_; uint8_t v___x_3018_; lean_object* v___x_3020_; 
v___x_3017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3017_, 0, v___y_2996_);
lean_ctor_set(v___x_3017_, 1, v___y_2997_);
lean_ctor_set(v___x_3017_, 2, v_headers_2998_);
lean_ctor_set(v___x_3017_, 3, v___x_2999_);
lean_ctor_set(v___x_3017_, 4, v_a_3013_);
v___x_3018_ = 0;
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 0, v___x_3017_);
v___x_3020_ = v___x_3015_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3017_);
v___x_3020_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
v___x_3022_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3000_, v___x_3018_, v___x_3021_, v___f_3001_);
return v___x_3022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v_headers_3027_, lean_object* v___x_3028_, lean_object* v___x_3029_, lean_object* v___f_3030_, lean_object* v_x_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_3025_, v___y_3026_, v_headers_3027_, v___x_3028_, v___x_3029_, v___f_3030_, v_x_3031_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3034_, lean_object* v_x_3035_){
_start:
{
if (lean_obj_tag(v_x_3035_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v___f_3034_);
v_a_3037_ = lean_ctor_get(v_x_3035_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v_x_3035_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3039_ = v_x_3035_;
v_isShared_3040_ = v_isSharedCheck_3045_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v_x_3035_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3045_;
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
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3037_);
v___x_3042_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3043_; 
v___x_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
return v___x_3043_;
}
}
}
else
{
lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3057_; 
v_isSharedCheck_3057_ = !lean_is_exclusive(v_x_3035_);
if (v_isSharedCheck_3057_ == 0)
{
lean_object* v_unused_3058_; 
v_unused_3058_ = lean_ctor_get(v_x_3035_, 0);
lean_dec(v_unused_3058_);
v___x_3047_ = v_x_3035_;
v_isShared_3048_ = v_isSharedCheck_3057_;
goto v_resetjp_3046_;
}
else
{
lean_dec(v_x_3035_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3057_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3049_; uint8_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3049_ = lean_unsigned_to_nat(0u);
v___x_3050_ = 0;
v___x_3051_ = lean_io_promise_new();
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v___x_3051_);
v___x_3053_ = v___x_3047_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3053_);
v___x_3055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3049_, v___x_3050_, v___x_3054_, v___f_3034_);
return v___x_3055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3059_, lean_object* v_x_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3059_, v_x_3060_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3063_, lean_object* v_x_3064_){
_start:
{
if (lean_obj_tag(v_x_3064_) == 0)
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref(v___f_3063_);
v_a_3066_ = lean_ctor_get(v_x_3064_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v_x_3064_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3068_ = v_x_3064_;
v_isShared_3069_ = v_isSharedCheck_3074_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v_x_3064_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3074_;
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
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___x_3072_; 
v___x_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
return v___x_3072_;
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3076_; 
v_a_3075_ = lean_ctor_get(v_x_3064_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v_x_3064_, 1);
v___x_3076_ = lean_apply_2(v___f_3063_, v_a_3075_, lean_box(0));
return v___x_3076_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3077_, lean_object* v_x_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3077_, v_x_3078_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_3081_, lean_object* v_bytes_3082_){
_start:
{
lean_object* v___x_3084_; uint8_t v___x_3085_; lean_object* v_val_3087_; lean_object* v___x_3090_; 
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = 0;
v___x_3090_ = l_Lasm_JS_Wire_decode(v_bytes_3082_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3090_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
lean_ctor_set_tag(v___x_3093_, 1);
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
v_val_3087_ = v___x_3096_;
goto v___jp_3086_;
}
}
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3106_; 
v_a_3099_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3101_ = v___x_3090_;
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3090_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
lean_ctor_set_tag(v___x_3101_, 0);
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
v_val_3087_ = v___x_3104_;
goto v___jp_3086_;
}
}
}
v___jp_3086_:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3088_, 0, v_val_3087_);
v___x_3089_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3084_, v___x_3085_, v___x_3088_, v___f_3081_);
return v___x_3089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_3107_, lean_object* v_bytes_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_3107_, v_bytes_3108_);
lean_dec_ref(v_bytes_3108_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_3111_, lean_object* v_failurePrefix_3112_, lean_object* v___f_3113_, lean_object* v___f_3114_, uint32_t v_op_3115_, uint64_t v_flags_3116_, lean_object* v___f_3117_, lean_object* v_x_3118_){
_start:
{
if (lean_obj_tag(v_x_3118_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v___f_3117_);
lean_dec_ref(v___f_3114_);
lean_dec_ref(v___f_3113_);
v_a_3120_ = lean_ctor_get(v_x_3118_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_x_3118_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v_x_3118_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v_x_3118_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
return v___x_3126_;
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3170_; 
v_a_3129_ = lean_ctor_get(v_x_3118_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_x_3118_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3131_ = v_x_3118_;
v_isShared_3132_ = v_isSharedCheck_3170_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v_x_3118_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3170_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
uint32_t v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3133_ = 0;
v___x_3134_ = l_Lasm_JS_Wire_encode(v_payload_3111_);
v___x_3135_ = lean_string_utf8_byte_size(v_failurePrefix_3112_);
v___x_3136_ = lean_unsigned_to_nat(0u);
v___x_3137_ = lean_nat_dec_eq(v___x_3135_, v___x_3136_);
if (v___x_3137_ == 0)
{
lean_object* v___f_3138_; lean_object* v_val_3140_; lean_object* v___x_3145_; 
lean_dec_ref(v___f_3117_);
lean_inc(v_a_3129_);
v___f_3138_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3138_, 0, v_a_3129_);
v___x_3145_ = lasm_js_call_into(v_a_3129_, v_op_3115_, v___x_3133_, v_flags_3116_, v___x_3134_, v_payload_3111_);
lean_dec_ref(v___x_3134_);
lean_dec(v_a_3129_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3145_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3146_);
v___x_3148_ = v___x_3131_;
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
v_val_3140_ = v___x_3148_;
goto v___jp_3139_;
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; 
v_a_3150_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3150_);
lean_dec_ref_known(v___x_3145_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v_a_3150_);
v___x_3152_ = v___x_3131_;
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
v_val_3140_ = v___x_3152_;
goto v___jp_3139_;
}
}
v___jp_3139_:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3141_, 0, v_val_3140_);
v___x_3142_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3136_, v___x_3137_, v___x_3141_, v___f_3138_);
v___x_3143_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3136_, v___x_3137_, v___x_3142_, v___f_3113_);
v___x_3144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3136_, v___x_3137_, v___x_3143_, v___f_3114_);
return v___x_3144_;
}
}
else
{
lean_object* v___f_3154_; uint8_t v___x_3155_; lean_object* v_val_3157_; lean_object* v___x_3161_; 
lean_dec_ref(v___f_3114_);
lean_dec_ref(v___f_3113_);
lean_inc(v_a_3129_);
v___f_3154_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3154_, 0, v_a_3129_);
v___x_3155_ = 0;
v___x_3161_ = lasm_js_call_into(v_a_3129_, v_op_3115_, v___x_3133_, v_flags_3116_, v___x_3134_, v_payload_3111_);
lean_dec_ref(v___x_3134_);
lean_dec(v_a_3129_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3164_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3162_);
v___x_3164_ = v___x_3131_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3162_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
v_val_3157_ = v___x_3164_;
goto v___jp_3156_;
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; 
v_a_3166_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___x_3161_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v_a_3166_);
v___x_3168_ = v___x_3131_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3166_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
v_val_3157_ = v___x_3168_;
goto v___jp_3156_;
}
}
v___jp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3158_, 0, v_val_3157_);
v___x_3159_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3136_, v___x_3155_, v___x_3158_, v___f_3154_);
v___x_3160_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3136_, v___x_3155_, v___x_3159_, v___f_3117_);
return v___x_3160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_3171_, lean_object* v_failurePrefix_3172_, lean_object* v___f_3173_, lean_object* v___f_3174_, lean_object* v_op_3175_, lean_object* v_flags_3176_, lean_object* v___f_3177_, lean_object* v_x_3178_, lean_object* v___y_3179_){
_start:
{
uint32_t v_op_boxed_3180_; uint64_t v_flags_boxed_3181_; lean_object* v_res_3182_; 
v_op_boxed_3180_ = lean_unbox_uint32(v_op_3175_);
lean_dec(v_op_3175_);
v_flags_boxed_3181_ = lean_unbox_uint64(v_flags_3176_);
lean_dec_ref(v_flags_3176_);
v_res_3182_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_3171_, v_failurePrefix_3172_, v___f_3173_, v___f_3174_, v_op_boxed_3180_, v_flags_boxed_3181_, v___f_3177_, v_x_3178_);
lean_dec_ref(v_failurePrefix_3172_);
lean_dec(v_payload_3171_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_3183_, lean_object* v_x_3184_){
_start:
{
lean_object* v_val_3187_; 
if (lean_obj_tag(v_x_3184_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3197_; 
v_a_3189_ = lean_ctor_get(v_x_3184_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v_x_3184_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3191_ = v_x_3184_;
v_isShared_3192_ = v_isSharedCheck_3197_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v_x_3184_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3197_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___x_3195_; 
v___x_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
return v___x_3195_;
}
}
}
else
{
lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3211_; 
v_a_3198_ = lean_ctor_get(v_x_3184_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_x_3184_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3200_ = v_x_3184_;
v_isShared_3201_ = v_isSharedCheck_3211_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v_x_3184_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3211_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3183_, v_a_3198_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3203_);
lean_dec_ref_known(v___x_3202_, 1);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v_a_3203_);
v___x_3205_ = v___x_3200_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3203_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
v_val_3187_ = v___x_3205_;
goto v___jp_3186_;
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; 
v_a_3207_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3202_, 1);
if (v_isShared_3201_ == 0)
{
lean_ctor_set_tag(v___x_3200_, 0);
lean_ctor_set(v___x_3200_, 0, v_a_3207_);
v___x_3209_ = v___x_3200_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3207_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
v_val_3187_ = v___x_3209_;
goto v___jp_3186_;
}
}
}
}
v___jp_3186_:
{
lean_object* v___x_3188_; 
v___x_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3188_, 0, v_val_3187_);
return v___x_3188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_3212_, lean_object* v_x_3213_, lean_object* v___y_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_3212_, v_x_3213_);
lean_dec_ref(v_context_3212_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3216_, uint32_t v_op_3217_, uint64_t v_flags_3218_, lean_object* v_payload_3219_, lean_object* v_failurePrefix_3220_){
_start:
{
lean_object* v___f_3222_; lean_object* v___f_3223_; lean_object* v___f_3224_; lean_object* v___f_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___f_3228_; lean_object* v___f_3229_; lean_object* v___x_3230_; uint8_t v___x_3231_; lean_object* v_val_3233_; lean_object* v___x_3236_; 
lean_inc_ref(v_failurePrefix_3220_);
v___f_3222_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3222_, 0, v_failurePrefix_3220_);
v___f_3223_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3223_, 0, v_context_3216_);
v___f_3224_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3224_, 0, v___f_3223_);
v___f_3225_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3225_, 0, v___f_3224_);
v___x_3226_ = lean_box_uint32(v_op_3217_);
v___x_3227_ = lean_box_uint64(v_flags_3218_);
lean_inc_ref(v___f_3225_);
v___f_3228_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3228_, 0, v_payload_3219_);
lean_closure_set(v___f_3228_, 1, v_failurePrefix_3220_);
lean_closure_set(v___f_3228_, 2, v___f_3222_);
lean_closure_set(v___f_3228_, 3, v___f_3225_);
lean_closure_set(v___f_3228_, 4, v___x_3226_);
lean_closure_set(v___f_3228_, 5, v___x_3227_);
lean_closure_set(v___f_3228_, 6, v___f_3225_);
v___f_3229_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3229_, 0, v___f_3228_);
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = 0;
v___x_3236_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3244_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3239_ = v___x_3236_;
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3236_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
lean_ctor_set_tag(v___x_3239_, 1);
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3237_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
v_val_3233_ = v___x_3242_;
goto v___jp_3232_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
v_a_3245_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3236_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3236_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
lean_ctor_set_tag(v___x_3247_, 0);
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
v_val_3233_ = v___x_3250_;
goto v___jp_3232_;
}
}
}
v___jp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3234_, 0, v_val_3233_);
v___x_3235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3230_, v___x_3231_, v___x_3234_, v___f_3229_);
return v___x_3235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3253_, lean_object* v_op_3254_, lean_object* v_flags_3255_, lean_object* v_payload_3256_, lean_object* v_failurePrefix_3257_, lean_object* v_a_3258_){
_start:
{
uint32_t v_op_boxed_3259_; uint64_t v_flags_boxed_3260_; lean_object* v_res_3261_; 
v_op_boxed_3259_ = lean_unbox_uint32(v_op_3254_);
lean_dec(v_op_3254_);
v_flags_boxed_3260_ = lean_unbox_uint64(v_flags_3255_);
lean_dec_ref(v_flags_3255_);
v_res_3261_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3253_, v_op_boxed_3259_, v_flags_boxed_3260_, v_payload_3256_, v_failurePrefix_3257_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3262_, lean_object* v_name_3263_, lean_object* v_args_3264_){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; uint32_t v___x_3271_; uint64_t v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3266_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3267_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3267_, 0, v_o_3262_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
lean_inc_ref(v_name_3263_);
v___x_3268_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3268_, 0, v_name_3263_);
v___x_3269_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3270_ = lean_string_append(v___x_3269_, v_name_3263_);
lean_dec_ref(v_name_3263_);
v___x_3271_ = 205;
v___x_3272_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3273_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3273_, 0, v_args_3264_);
v___x_3274_ = lean_unsigned_to_nat(3u);
v___x_3275_ = lean_mk_empty_array_with_capacity(v___x_3274_);
v___x_3276_ = lean_array_push(v___x_3275_, v___x_3267_);
v___x_3277_ = lean_array_push(v___x_3276_, v___x_3268_);
v___x_3278_ = lean_array_push(v___x_3277_, v___x_3273_);
v___x_3279_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
v___x_3280_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3270_, v___x_3271_, v___x_3272_, v___x_3279_, v___x_3266_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3281_, lean_object* v_name_3282_, lean_object* v_args_3283_, lean_object* v___y_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3281_, v_name_3282_, v_args_3283_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v_options_3290_, lean_object* v___f_3291_, lean_object* v___f_3292_, lean_object* v_a_3293_, lean_object* v_value_3294_, lean_object* v_a_3295_, lean_object* v___x_3296_, lean_object* v___f_3297_, lean_object* v___f_3298_, lean_object* v_headers_3299_){
_start:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___f_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; uint8_t v___x_3313_; 
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_3287_);
v___x_3302_ = l_ByteArray_empty;
v___f_3303_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3301_);
lean_inc_ref(v___y_3289_);
lean_inc_ref(v___y_3288_);
v___x_3304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3304_, 0, v___y_3288_);
lean_ctor_set(v___x_3304_, 1, v___y_3289_);
lean_ctor_set(v___x_3304_, 2, v___x_3301_);
lean_ctor_set(v___x_3304_, 3, v___x_3302_);
lean_ctor_set(v___x_3304_, 4, v___f_3303_);
v___x_3305_ = l_Lasm_Fetch_Request_path(v___x_3304_);
v___x_3306_ = lean_apply_1(v_options_3290_, v___x_3305_);
v___x_3313_ = lean_unbox(v___x_3306_);
if (v___x_3313_ == 0)
{
lean_object* v___x_3314_; uint8_t v___x_3315_; 
lean_dec_ref(v___f_3298_);
lean_dec_ref(v___f_3297_);
v___x_3314_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_3315_ = lean_string_dec_eq(v___y_3288_, v___x_3314_);
if (v___x_3315_ == 0)
{
lean_object* v___x_3316_; uint8_t v___x_3317_; 
v___x_3316_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3317_ = lean_string_dec_eq(v___y_3288_, v___x_3316_);
if (v___x_3317_ == 0)
{
lean_object* v___x_3318_; lean_object* v___f_3319_; lean_object* v___x_3320_; lean_object* v___f_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_dec_ref(v___f_3291_);
v___x_3318_ = lean_box(v___x_3317_);
lean_inc_n(v___x_3287_, 2);
v___f_3319_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3319_, 0, v___y_3288_);
lean_closure_set(v___f_3319_, 1, v___y_3289_);
lean_closure_set(v___f_3319_, 2, v_headers_3299_);
lean_closure_set(v___f_3319_, 3, v___f_3303_);
lean_closure_set(v___f_3319_, 4, v___x_3287_);
lean_closure_set(v___f_3319_, 5, v___x_3318_);
lean_closure_set(v___f_3319_, 6, v___f_3292_);
v___x_3320_ = lean_box(v___x_3317_);
v___f_3321_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3321_, 0, v___x_3287_);
lean_closure_set(v___f_3321_, 1, v___x_3320_);
lean_closure_set(v___f_3321_, 2, v___f_3319_);
lean_closure_set(v___f_3321_, 3, v_a_3293_);
v___x_3322_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3323_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3294_, v___x_3322_, v___x_3301_);
v___x_3324_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3287_, v___x_3317_, v___x_3323_, v___f_3321_);
return v___x_3324_;
}
else
{
lean_dec_ref(v___x_3301_);
lean_dec(v_value_3294_);
lean_dec(v_a_3293_);
lean_dec_ref(v___f_3292_);
goto v___jp_3307_;
}
}
else
{
lean_dec_ref(v___x_3301_);
lean_dec(v_value_3294_);
lean_dec(v_a_3293_);
lean_dec_ref(v___f_3292_);
goto v___jp_3307_;
}
}
else
{
lean_object* v___x_3325_; 
lean_dec_ref(v___x_3301_);
lean_dec(v_value_3294_);
lean_dec(v_a_3293_);
lean_dec_ref(v___f_3292_);
lean_dec_ref(v___f_3291_);
v___x_3325_ = l_Lasm_JS_Data_field(v_a_3295_, v___x_3296_);
if (lean_obj_tag(v___x_3325_) == 9)
{
lean_object* v_value_3326_; lean_object* v___f_3327_; uint8_t v___x_3328_; lean_object* v_val_3330_; lean_object* v___x_3333_; 
lean_dec_ref(v___f_3298_);
v_value_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_value_3326_);
lean_dec_ref_known(v___x_3325_, 2);
lean_inc(v___x_3287_);
v___f_3327_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3327_, 0, v___y_3288_);
lean_closure_set(v___f_3327_, 1, v___y_3289_);
lean_closure_set(v___f_3327_, 2, v_headers_3299_);
lean_closure_set(v___f_3327_, 3, v___x_3302_);
lean_closure_set(v___f_3327_, 4, v___x_3287_);
lean_closure_set(v___f_3327_, 5, v___f_3297_);
v___x_3328_ = 0;
v___x_3333_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3326_);
if (lean_obj_tag(v___x_3333_) == 0)
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
v_a_3334_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3333_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3333_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
lean_ctor_set_tag(v___x_3336_, 1);
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
v_val_3330_ = v___x_3339_;
goto v___jp_3329_;
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
v_a_3342_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3333_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3333_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set_tag(v___x_3344_, 0);
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
v_val_3330_ = v___x_3347_;
goto v___jp_3329_;
}
}
}
v___jp_3329_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3331_, 0, v_val_3330_);
v___x_3332_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3287_, v___x_3328_, v___x_3331_, v___f_3327_);
return v___x_3332_;
}
}
else
{
lean_object* v___x_3350_; uint8_t v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
lean_dec(v___x_3325_);
lean_dec_ref(v___f_3297_);
v___x_3350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3350_, 0, v___y_3288_);
lean_ctor_set(v___x_3350_, 1, v___y_3289_);
lean_ctor_set(v___x_3350_, 2, v_headers_3299_);
lean_ctor_set(v___x_3350_, 3, v___x_3302_);
lean_ctor_set(v___x_3350_, 4, v___f_3303_);
v___x_3351_ = 0;
v___x_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3350_);
v___x_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
v___x_3354_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3287_, v___x_3351_, v___x_3353_, v___f_3298_);
return v___x_3354_;
}
}
v___jp_3307_:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; uint8_t v___x_3311_; lean_object* v___x_3312_; 
v___x_3308_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3308_, 0, v___y_3288_);
lean_ctor_set(v___x_3308_, 1, v___y_3289_);
lean_ctor_set(v___x_3308_, 2, v_headers_3299_);
lean_ctor_set(v___x_3308_, 3, v___x_3302_);
lean_ctor_set(v___x_3308_, 4, v___f_3303_);
v___x_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
v___x_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
v___x_3311_ = lean_unbox(v___x_3306_);
v___x_3312_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3287_, v___x_3311_, v___x_3310_, v___f_3291_);
return v___x_3312_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v_options_3358_, lean_object* v___f_3359_, lean_object* v___f_3360_, lean_object* v_a_3361_, lean_object* v_value_3362_, lean_object* v_a_3363_, lean_object* v___x_3364_, lean_object* v___f_3365_, lean_object* v___f_3366_, lean_object* v_headers_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3355_, v___y_3356_, v___y_3357_, v_options_3358_, v___f_3359_, v___f_3360_, v_a_3361_, v_value_3362_, v_a_3363_, v___x_3364_, v___f_3365_, v___f_3366_, v_headers_3367_);
lean_dec_ref(v___x_3364_);
lean_dec(v_a_3363_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3381_; 
lean_dec_ref(v___f_3370_);
v_a_3373_ = lean_ctor_get(v_x_3371_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v_x_3371_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3375_ = v_x_3371_;
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v_x_3371_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3383_; 
v_a_3382_ = lean_ctor_get(v_x_3371_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v_x_3371_, 1);
v___x_3383_ = lean_apply_2(v___f_3370_, v_a_3382_, lean_box(0));
return v___x_3383_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3384_, lean_object* v_x_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3384_, v_x_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3388_, uint64_t v_extra_3389_){
_start:
{
uint64_t v___x_3390_; uint64_t v___y_3392_; 
v___x_3390_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3388_ == 0)
{
uint64_t v___x_3395_; 
v___x_3395_ = 0ULL;
v___y_3392_ = v___x_3395_;
goto v___jp_3391_;
}
else
{
uint64_t v___x_3396_; 
v___x_3396_ = 2ULL;
v___y_3392_ = v___x_3396_;
goto v___jp_3391_;
}
v___jp_3391_:
{
uint64_t v___x_3393_; uint64_t v___x_3394_; 
v___x_3393_ = lean_uint64_lor(v___x_3390_, v___y_3392_);
v___x_3394_ = lean_uint64_lor(v___x_3393_, v_extra_3389_);
return v___x_3394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3397_, lean_object* v_extra_3398_){
_start:
{
uint8_t v_await_boxed_3399_; uint64_t v_extra_boxed_3400_; uint64_t v_res_3401_; lean_object* v_r_3402_; 
v_await_boxed_3399_ = lean_unbox(v_await_3397_);
v_extra_boxed_3400_ = lean_unbox_uint64(v_extra_3398_);
lean_dec_ref(v_extra_3398_);
v_res_3401_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3399_, v_extra_boxed_3400_);
v_r_3402_ = lean_box_uint64(v_res_3401_);
return v_r_3402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3408_, size_t v_i_3409_, lean_object* v_bs_3410_){
_start:
{
uint8_t v___x_3413_; 
v___x_3413_ = lean_usize_dec_lt(v_i_3409_, v_sz_3408_);
if (v___x_3413_ == 0)
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3414_, 0, v_bs_3410_);
return v___x_3414_;
}
else
{
lean_object* v_v_3415_; 
v_v_3415_ = lean_array_uget_borrowed(v_bs_3410_, v_i_3409_);
if (lean_obj_tag(v_v_3415_) == 7)
{
lean_object* v_items_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_items_3416_ = lean_ctor_get(v_v_3415_, 0);
v___x_3417_ = lean_array_get_size(v_items_3416_);
v___x_3418_ = lean_unsigned_to_nat(2u);
v___x_3419_ = lean_nat_dec_eq(v___x_3417_, v___x_3418_);
if (v___x_3419_ == 0)
{
lean_dec_ref(v_bs_3410_);
goto v___jp_3411_;
}
else
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_unsigned_to_nat(0u);
v___x_3421_ = lean_array_fget_borrowed(v_items_3416_, v___x_3420_);
if (lean_obj_tag(v___x_3421_) == 4)
{
lean_object* v_s_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v_s_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc_ref(v_s_3422_);
v___x_3423_ = lean_unsigned_to_nat(1u);
v___x_3424_ = lean_array_fget_borrowed(v_items_3416_, v___x_3423_);
if (lean_obj_tag(v___x_3424_) == 4)
{
lean_object* v_s_3425_; lean_object* v_bs_x27_3426_; lean_object* v___x_3427_; size_t v___x_3428_; size_t v___x_3429_; lean_object* v___x_3430_; 
v_s_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc_ref(v_s_3425_);
v_bs_x27_3426_ = lean_array_uset(v_bs_3410_, v_i_3409_, v___x_3420_);
v___x_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3427_, 0, v_s_3422_);
lean_ctor_set(v___x_3427_, 1, v_s_3425_);
v___x_3428_ = ((size_t)1ULL);
v___x_3429_ = lean_usize_add(v_i_3409_, v___x_3428_);
v___x_3430_ = lean_array_uset(v_bs_x27_3426_, v_i_3409_, v___x_3427_);
v_i_3409_ = v___x_3429_;
v_bs_3410_ = v___x_3430_;
goto _start;
}
else
{
lean_object* v___x_3432_; 
lean_dec_ref(v_s_3422_);
lean_dec_ref(v_bs_3410_);
v___x_3432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3432_;
}
}
else
{
lean_object* v___x_3433_; 
lean_dec_ref(v_bs_3410_);
v___x_3433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3433_;
}
}
}
else
{
lean_dec_ref(v_bs_3410_);
goto v___jp_3411_;
}
}
v___jp_3411_:
{
lean_object* v___x_3412_; 
v___x_3412_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3434_, lean_object* v_i_3435_, lean_object* v_bs_3436_){
_start:
{
size_t v_sz_boxed_3437_; size_t v_i_boxed_3438_; lean_object* v_res_3439_; 
v_sz_boxed_3437_ = lean_unbox_usize(v_sz_3434_);
lean_dec(v_sz_3434_);
v_i_boxed_3438_ = lean_unbox_usize(v_i_3435_);
lean_dec(v_i_3435_);
v_res_3439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3437_, v_i_boxed_3438_, v_bs_3436_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3444_, lean_object* v_d_3445_){
_start:
{
lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3454_; lean_object* v_received_3455_; lean_object* v___y_3474_; lean_object* v_a_3477_; 
if (lean_obj_tag(v_d_3445_) == 7)
{
lean_object* v_items_3501_; size_t v_sz_3502_; size_t v___x_3503_; lean_object* v___x_3504_; 
v_items_3501_ = lean_ctor_get(v_d_3445_, 0);
v_sz_3502_ = lean_array_size(v_items_3501_);
v___x_3503_ = ((size_t)0ULL);
lean_inc_ref(v_items_3501_);
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3502_, v___x_3503_, v_items_3501_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; uint8_t v___x_3509_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3504_, 1);
v___x_3506_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3507_ = lean_string_utf8_byte_size(v_a_3505_);
v___x_3508_ = lean_unsigned_to_nat(0u);
v___x_3509_ = lean_nat_dec_eq(v___x_3507_, v___x_3508_);
if (v___x_3509_ == 0)
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3511_ = lean_string_append(v___x_3510_, v_a_3505_);
lean_dec(v_a_3505_);
v___x_3512_ = lean_string_append(v___x_3506_, v___x_3511_);
lean_dec_ref(v___x_3511_);
v_a_3477_ = v___x_3512_;
goto v___jp_3476_;
}
else
{
lean_dec(v_a_3505_);
v_a_3477_ = v___x_3506_;
goto v___jp_3476_;
}
}
else
{
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3513_; 
v_a_3513_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3513_);
lean_dec_ref_known(v___x_3504_, 1);
v_a_3477_ = v_a_3513_;
goto v___jp_3476_;
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref_known(v_d_3445_, 1);
v_a_3514_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3504_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3504_);
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
return v___x_3519_;
}
}
}
}
}
else
{
lean_object* v___x_3522_; 
v___x_3522_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3477_ = v___x_3522_;
goto v___jp_3476_;
}
v___jp_3447_:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3450_ = lean_string_append(v___y_3448_, v___y_3449_);
lean_dec_ref(v___y_3449_);
v___x_3451_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
v___x_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3451_);
return v___x_3452_;
}
v___jp_3453_:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3457_ = lean_string_append(v___x_3456_, v_context_3444_);
v___x_3458_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3459_ = lean_string_append(v___x_3457_, v___x_3458_);
v___x_3460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3461_ = lean_string_append(v___x_3459_, v___x_3460_);
v___x_3462_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3463_ = lean_string_append(v___x_3461_, v___x_3462_);
v___x_3464_ = lean_string_append(v___x_3463_, v_received_3455_);
lean_dec_ref(v_received_3455_);
v___x_3465_ = lean_string_utf8_byte_size(v___y_3454_);
v___x_3466_ = lean_unsigned_to_nat(0u);
v___x_3467_ = lean_nat_dec_eq(v___x_3465_, v___x_3466_);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3468_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3469_ = lean_string_append(v___x_3468_, v___y_3454_);
lean_dec_ref(v___y_3454_);
v___x_3470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3471_ = lean_string_append(v___x_3469_, v___x_3470_);
v___y_3448_ = v___x_3464_;
v___y_3449_ = v___x_3471_;
goto v___jp_3447_;
}
else
{
lean_object* v___x_3472_; 
lean_dec_ref(v___y_3454_);
v___x_3472_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3448_ = v___x_3464_;
v___y_3449_ = v___x_3472_;
goto v___jp_3447_;
}
}
v___jp_3473_:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lasm_JS_Data_describe(v_d_3445_);
v___y_3454_ = v___y_3474_;
v_received_3455_ = v___x_3475_;
goto v___jp_3453_;
}
v___jp_3476_:
{
if (lean_obj_tag(v_d_3445_) == 9)
{
lean_object* v_value_3478_; lean_object* v_description_3479_; lean_object* v___x_3480_; uint8_t v___x_3481_; 
v_value_3478_ = lean_ctor_get(v_d_3445_, 0);
v_description_3479_ = lean_ctor_get(v_d_3445_, 1);
v___x_3480_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3481_ = lean_string_dec_eq(v_description_3479_, v___x_3480_);
if (v___x_3481_ == 0)
{
v___y_3474_ = v_a_3477_;
goto v___jp_3473_;
}
else
{
lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3498_; 
lean_inc(v_value_3478_);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_d_3445_);
if (v_isSharedCheck_3498_ == 0)
{
lean_object* v_unused_3499_; lean_object* v_unused_3500_; 
v_unused_3499_ = lean_ctor_get(v_d_3445_, 1);
lean_dec(v_unused_3499_);
v_unused_3500_ = lean_ctor_get(v_d_3445_, 0);
lean_dec(v_unused_3500_);
v___x_3483_ = v_d_3445_;
v_isShared_3484_ = v_isSharedCheck_3498_;
goto v_resetjp_3482_;
}
else
{
lean_dec(v_d_3445_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3498_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
uint32_t v___x_3485_; uint64_t v___x_3486_; lean_object* v___x_3488_; 
v___x_3485_ = 206;
v___x_3486_ = 0ULL;
lean_inc(v_value_3478_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 1, v___x_3480_);
v___x_3488_ = v___x_3483_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_value_3478_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v___x_3480_);
v___x_3488_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
uint32_t v___x_3489_; lean_object* v___x_3490_; 
v___x_3489_ = lasm_js_value_handle(v_value_3478_);
lean_dec(v_value_3478_);
v___x_3490_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3485_, v___x_3486_, v___x_3488_, v___x_3489_);
lean_dec_ref(v___x_3488_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; uint8_t v___x_3492_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3492_ = lean_string_validate_utf8(v_a_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec(v_a_3491_);
v___x_3493_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3494_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3493_);
v___y_3454_ = v_a_3477_;
v_received_3455_ = v___x_3494_;
goto v___jp_3453_;
}
else
{
lean_object* v___x_3495_; 
v___x_3495_ = lean_string_from_utf8_unchecked(v_a_3491_);
v___y_3454_ = v_a_3477_;
v_received_3455_ = v___x_3495_;
goto v___jp_3453_;
}
}
else
{
lean_object* v___x_3496_; 
lean_dec_ref_known(v___x_3490_, 1);
v___x_3496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3454_ = v_a_3477_;
v_received_3455_ = v___x_3496_;
goto v___jp_3453_;
}
}
}
}
}
else
{
v___y_3474_ = v_a_3477_;
goto v___jp_3473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3523_, lean_object* v_d_3524_, lean_object* v_a_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3523_, v_d_3524_);
lean_dec_ref(v_context_3523_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3527_, lean_object* v_bytes_3528_){
_start:
{
lean_object* v___x_3530_; 
v___x_3530_ = l_Lasm_JS_Wire_decode(v_bytes_3528_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3532_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3527_, v_a_3531_);
return v___x_3532_;
}
else
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
v_a_3533_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3530_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3530_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3541_, lean_object* v_bytes_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3541_, v_bytes_3542_);
lean_dec_ref(v_bytes_3542_);
lean_dec_ref(v_context_3541_);
return v_res_3544_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3545_; uint8_t v___x_3546_; uint64_t v___x_3547_; 
v___x_3545_ = 8ULL;
v___x_3546_ = 0;
v___x_3547_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3546_, v___x_3545_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3548_, lean_object* v_name_3549_, lean_object* v_args_3550_){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; uint64_t v___x_3555_; lean_object* v___x_3556_; 
v___x_3552_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3553_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3553_, 0, v_o_3548_);
lean_ctor_set(v___x_3553_, 1, v___x_3552_);
lean_inc_ref(v_name_3549_);
v___x_3554_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3554_, 0, v_name_3549_);
v___x_3555_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3556_ = l_Lasm_JS_Value_invokeRaw(v___x_3553_, v___x_3554_, v_args_3550_, v___x_3555_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3556_, 1);
v___x_3558_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3559_ = lean_string_append(v___x_3558_, v_name_3549_);
lean_dec_ref(v_name_3549_);
v___x_3560_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3559_, v_a_3557_);
lean_dec(v_a_3557_);
lean_dec_ref(v___x_3559_);
return v___x_3560_;
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
lean_dec_ref(v_name_3549_);
v_a_3561_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v___x_3556_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3556_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3569_, lean_object* v_name_3570_, lean_object* v_args_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3569_, v_name_3570_, v_args_3571_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3575_, lean_object* v___f_3576_, lean_object* v_handler_3577_, lean_object* v_options_3578_, lean_object* v_a_3579_, lean_object* v_value_3580_, lean_object* v___x_3581_, lean_object* v___x_3582_, lean_object* v_a_3583_, lean_object* v___x_3584_, lean_object* v___x_3585_, lean_object* v_x_3586_){
_start:
{
uint8_t v___y_3589_; lean_object* v___y_3590_; lean_object* v_val_3591_; 
if (lean_obj_tag(v_x_3586_) == 0)
{
lean_object* v___x_3594_; 
lean_dec(v_a_3583_);
lean_dec_ref(v___x_3581_);
lean_dec(v_value_3580_);
lean_dec(v_a_3579_);
lean_dec_ref(v_options_3578_);
lean_dec_ref(v_handler_3577_);
lean_dec_ref(v___f_3576_);
lean_dec(v___x_3575_);
v___x_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3594_, 0, v_x_3586_);
return v___x_3594_;
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3652_; 
v_a_3595_ = lean_ctor_get(v_x_3586_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_x_3586_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3597_ = v_x_3586_;
v_isShared_3598_ = v_isSharedCheck_3652_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v_x_3586_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3652_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3642_; lean_object* v___x_3649_; 
v___x_3649_ = l_Lasm_JS_Data_field(v_a_3595_, v___x_3585_);
if (lean_obj_tag(v___x_3649_) == 4)
{
lean_object* v_s_3650_; 
v_s_3650_ = lean_ctor_get(v___x_3649_, 0);
lean_inc_ref(v_s_3650_);
lean_dec_ref_known(v___x_3649_, 1);
v___y_3642_ = v_s_3650_;
goto v___jp_3641_;
}
else
{
lean_object* v___x_3651_; 
lean_dec(v___x_3649_);
v___x_3651_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3642_ = v___x_3651_;
goto v___jp_3641_;
}
v___jp_3599_:
{
lean_object* v___f_3606_; lean_object* v___x_3607_; 
lean_inc(v_a_3595_);
lean_inc(v___x_3575_);
v___f_3606_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3606_, 0, v___x_3575_);
lean_closure_set(v___f_3606_, 1, v___y_3602_);
lean_closure_set(v___f_3606_, 2, v___y_3605_);
lean_closure_set(v___f_3606_, 3, v_options_3578_);
lean_closure_set(v___f_3606_, 4, v___y_3600_);
lean_closure_set(v___f_3606_, 5, v___y_3604_);
lean_closure_set(v___f_3606_, 6, v_a_3579_);
lean_closure_set(v___f_3606_, 7, v_value_3580_);
lean_closure_set(v___f_3606_, 8, v_a_3595_);
lean_closure_set(v___f_3606_, 9, v___x_3581_);
lean_closure_set(v___f_3606_, 10, v___y_3601_);
lean_closure_set(v___f_3606_, 11, v___y_3603_);
v___x_3607_ = l_Lasm_JS_Data_field(v_a_3595_, v___x_3582_);
lean_dec(v_a_3595_);
if (lean_obj_tag(v___x_3607_) == 9)
{
lean_object* v_value_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3631_; 
v_value_3608_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3631_ == 0)
{
lean_object* v_unused_3632_; 
v_unused_3632_ = lean_ctor_get(v___x_3607_, 1);
lean_dec(v_unused_3632_);
v___x_3610_ = v___x_3607_;
v_isShared_3611_ = v_isSharedCheck_3631_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_value_3608_);
lean_dec(v___x_3607_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3631_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___f_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3616_; 
v___f_3612_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3612_, 0, v___f_3606_);
v___x_3613_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3614_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 1, v___x_3614_);
v___x_3616_ = v___x_3610_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_value_3608_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v___x_3614_);
v___x_3616_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; lean_object* v___x_3621_; 
v___x_3617_ = lean_unsigned_to_nat(1u);
v___x_3618_ = lean_mk_empty_array_with_capacity(v___x_3617_);
v___x_3619_ = lean_array_push(v___x_3618_, v___x_3616_);
v___x_3620_ = 0;
v___x_3621_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3583_, v___x_3613_, v___x_3619_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v___x_3624_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v_a_3622_);
v___x_3624_ = v___x_3597_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3622_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
v___y_3589_ = v___x_3620_;
v___y_3590_ = v___f_3612_;
v_val_3591_ = v___x_3624_;
goto v___jp_3588_;
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; 
v_a_3626_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3626_);
lean_dec_ref_known(v___x_3621_, 1);
if (v_isShared_3598_ == 0)
{
lean_ctor_set_tag(v___x_3597_, 0);
lean_ctor_set(v___x_3597_, 0, v_a_3626_);
v___x_3628_ = v___x_3597_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3626_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
v___y_3589_ = v___x_3620_;
v___y_3590_ = v___f_3612_;
v_val_3591_ = v___x_3628_;
goto v___jp_3588_;
}
}
}
}
}
else
{
lean_object* v___f_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; lean_object* v___x_3637_; 
lean_dec(v___x_3607_);
lean_dec(v_a_3583_);
v___f_3633_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3633_, 0, v___f_3606_);
v___x_3634_ = lean_mk_empty_array_with_capacity(v___x_3575_);
v___x_3635_ = 0;
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3634_);
v___x_3637_ = v___x_3597_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3634_);
v___x_3637_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3637_);
v___x_3639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3575_, v___x_3635_, v___x_3638_, v___f_3633_);
return v___x_3639_;
}
}
}
v___jp_3641_:
{
lean_object* v___f_3643_; lean_object* v___f_3644_; lean_object* v___f_3645_; lean_object* v___x_3646_; 
lean_inc_n(v___x_3575_, 2);
lean_inc_ref(v___y_3642_);
v___f_3643_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3643_, 0, v___y_3642_);
lean_closure_set(v___f_3643_, 1, v___x_3575_);
lean_closure_set(v___f_3643_, 2, v___f_3576_);
v___f_3644_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3644_, 0, v_handler_3577_);
lean_closure_set(v___f_3644_, 1, v___x_3575_);
lean_closure_set(v___f_3644_, 2, v___f_3643_);
v___f_3645_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3645_, 0, v___f_3644_);
v___x_3646_ = l_Lasm_JS_Data_field(v_a_3595_, v___x_3584_);
if (lean_obj_tag(v___x_3646_) == 4)
{
lean_object* v_s_3647_; 
v_s_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc_ref(v_s_3647_);
lean_dec_ref_known(v___x_3646_, 1);
lean_inc_ref_n(v___f_3645_, 3);
v___y_3600_ = v___f_3645_;
v___y_3601_ = v___f_3645_;
v___y_3602_ = v___y_3642_;
v___y_3603_ = v___f_3645_;
v___y_3604_ = v___f_3645_;
v___y_3605_ = v_s_3647_;
goto v___jp_3599_;
}
else
{
lean_object* v___x_3648_; 
lean_dec(v___x_3646_);
v___x_3648_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3645_, 3);
v___y_3600_ = v___f_3645_;
v___y_3601_ = v___f_3645_;
v___y_3602_ = v___y_3642_;
v___y_3603_ = v___f_3645_;
v___y_3604_ = v___f_3645_;
v___y_3605_ = v___x_3648_;
goto v___jp_3599_;
}
}
}
}
v___jp_3588_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_val_3591_);
v___x_3593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3575_, v___y_3589_, v___x_3592_, v___y_3590_);
return v___x_3593_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3653_, lean_object* v___f_3654_, lean_object* v_handler_3655_, lean_object* v_options_3656_, lean_object* v_a_3657_, lean_object* v_value_3658_, lean_object* v___x_3659_, lean_object* v___x_3660_, lean_object* v_a_3661_, lean_object* v___x_3662_, lean_object* v___x_3663_, lean_object* v_x_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3653_, v___f_3654_, v_handler_3655_, v_options_3656_, v_a_3657_, v_value_3658_, v___x_3659_, v___x_3660_, v_a_3661_, v___x_3662_, v___x_3663_, v_x_3664_);
lean_dec_ref(v___x_3663_);
lean_dec_ref(v___x_3662_);
lean_dec_ref(v___x_3660_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3667_, size_t v_i_3668_, lean_object* v_bs_3669_){
_start:
{
uint8_t v___x_3670_; 
v___x_3670_ = lean_usize_dec_lt(v_i_3668_, v_sz_3667_);
if (v___x_3670_ == 0)
{
return v_bs_3669_;
}
else
{
lean_object* v_v_3671_; lean_object* v___x_3672_; lean_object* v_bs_x27_3673_; lean_object* v___x_3674_; size_t v___x_3675_; size_t v___x_3676_; lean_object* v___x_3677_; 
v_v_3671_ = lean_array_uget(v_bs_3669_, v_i_3668_);
v___x_3672_ = lean_unsigned_to_nat(0u);
v_bs_x27_3673_ = lean_array_uset(v_bs_3669_, v_i_3668_, v___x_3672_);
v___x_3674_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3674_, 0, v_v_3671_);
v___x_3675_ = ((size_t)1ULL);
v___x_3676_ = lean_usize_add(v_i_3668_, v___x_3675_);
v___x_3677_ = lean_array_uset(v_bs_x27_3673_, v_i_3668_, v___x_3674_);
v_i_3668_ = v___x_3676_;
v_bs_3669_ = v___x_3677_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3679_, lean_object* v_i_3680_, lean_object* v_bs_3681_){
_start:
{
size_t v_sz_boxed_3682_; size_t v_i_boxed_3683_; lean_object* v_res_3684_; 
v_sz_boxed_3682_ = lean_unbox_usize(v_sz_3679_);
lean_dec(v_sz_3679_);
v_i_boxed_3683_ = lean_unbox_usize(v_i_3680_);
lean_dec(v_i_3680_);
v_res_3684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3682_, v_i_boxed_3683_, v_bs_3681_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3685_, lean_object* v_keys_3686_){
_start:
{
uint32_t v___x_3688_; uint32_t v___x_3689_; uint64_t v___x_3690_; size_t v_sz_3691_; size_t v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3688_ = 203;
v___x_3689_ = lasm_js_value_handle(v_o_3685_);
v___x_3690_ = 0ULL;
v_sz_3691_ = lean_array_size(v_keys_3686_);
v___x_3692_ = ((size_t)0ULL);
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3691_, v___x_3692_, v_keys_3686_);
v___x_3694_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3693_);
v___x_3695_ = l_Lasm_JS_Wire_encode(v___x_3694_);
lean_dec_ref_known(v___x_3694_, 1);
v___x_3696_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3697_, 0, v_o_3685_);
lean_ctor_set(v___x_3697_, 1, v___x_3696_);
v___x_3698_ = lasm_js_call(v___x_3688_, v___x_3689_, v___x_3690_, v___x_3695_, v___x_3697_);
lean_dec_ref_known(v___x_3697_, 2);
lean_dec_ref(v___x_3695_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v_a_3699_; lean_object* v___x_3700_; 
v_a_3699_ = lean_ctor_get(v___x_3698_, 0);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___x_3698_, 1);
v___x_3700_ = l_Lasm_JS_Wire_decode(v_a_3699_);
lean_dec(v_a_3699_);
return v___x_3700_;
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
v_a_3701_ = lean_ctor_get(v___x_3698_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3698_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3698_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3709_, lean_object* v_keys_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3709_, v_keys_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3733_, lean_object* v___f_3734_, lean_object* v_handler_3735_, lean_object* v_options_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_____r_3739_){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3743_ = lean_unsigned_to_nat(0u);
v___x_3744_ = lean_array_get_size(v_args_3733_);
v___x_3745_ = lean_nat_dec_lt(v___x_3743_, v___x_3744_);
if (v___x_3745_ == 0)
{
lean_dec(v_a_3738_);
lean_dec(v_a_3737_);
lean_dec_ref(v_options_3736_);
lean_dec_ref(v_handler_3735_);
lean_dec_ref(v___f_3734_);
goto v___jp_3741_;
}
else
{
lean_object* v___x_3746_; 
v___x_3746_ = lean_array_fget_borrowed(v_args_3733_, v___x_3743_);
if (lean_obj_tag(v___x_3746_) == 9)
{
lean_object* v_value_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___f_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; lean_object* v_val_3756_; lean_object* v___x_3759_; 
v_value_3747_ = lean_ctor_get(v___x_3746_, 0);
v___x_3748_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3749_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3750_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3751_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3747_, 2);
v___f_3752_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3752_, 0, v___x_3743_);
lean_closure_set(v___f_3752_, 1, v___f_3734_);
lean_closure_set(v___f_3752_, 2, v_handler_3735_);
lean_closure_set(v___f_3752_, 3, v_options_3736_);
lean_closure_set(v___f_3752_, 4, v_a_3737_);
lean_closure_set(v___f_3752_, 5, v_value_3747_);
lean_closure_set(v___f_3752_, 6, v___x_3751_);
lean_closure_set(v___f_3752_, 7, v___x_3750_);
lean_closure_set(v___f_3752_, 8, v_a_3738_);
lean_closure_set(v___f_3752_, 9, v___x_3749_);
lean_closure_set(v___f_3752_, 10, v___x_3748_);
v___x_3753_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3754_ = 0;
v___x_3759_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3747_, v___x_3753_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3759_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3759_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
lean_ctor_set_tag(v___x_3762_, 1);
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
v_val_3756_ = v___x_3765_;
goto v___jp_3755_;
}
}
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
v_a_3768_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3759_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3759_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
lean_ctor_set_tag(v___x_3770_, 0);
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
v_val_3756_ = v___x_3773_;
goto v___jp_3755_;
}
}
}
v___jp_3755_:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3757_, 0, v_val_3756_);
v___x_3758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3743_, v___x_3754_, v___x_3757_, v___f_3752_);
return v___x_3758_;
}
}
else
{
lean_dec(v_a_3738_);
lean_dec(v_a_3737_);
lean_dec_ref(v_options_3736_);
lean_dec_ref(v_handler_3735_);
lean_dec_ref(v___f_3734_);
goto v___jp_3741_;
}
}
v___jp_3741_:
{
lean_object* v___x_3742_; 
v___x_3742_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3742_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3776_, lean_object* v___f_3777_, lean_object* v_handler_3778_, lean_object* v_options_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_____r_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3776_, v___f_3777_, v_handler_3778_, v_options_3779_, v_a_3780_, v_a_3781_, v_____r_3782_);
lean_dec_ref(v_args_3776_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3785_, lean_object* v_x_3786_){
_start:
{
if (lean_obj_tag(v_x_3786_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3796_; 
lean_dec_ref(v___f_3785_);
v_a_3788_ = lean_ctor_get(v_x_3786_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v_x_3786_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3790_ = v_x_3786_;
v_isShared_3791_ = v_isSharedCheck_3796_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v_x_3786_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3796_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
lean_object* v___x_3794_; 
v___x_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3793_);
return v___x_3794_;
}
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3798_; 
v_a_3797_ = lean_ctor_get(v_x_3786_, 0);
lean_inc(v_a_3797_);
lean_dec_ref_known(v_x_3786_, 1);
v___x_3798_ = lean_apply_2(v___f_3785_, v_a_3797_, lean_box(0));
return v___x_3798_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3799_, lean_object* v_x_3800_, lean_object* v___y_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3799_, v_x_3800_);
return v_res_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3803_, lean_object* v_handler_3804_, lean_object* v_options_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_args_3808_){
_start:
{
lean_object* v___f_3810_; lean_object* v___x_3814_; lean_object* v___x_3815_; uint8_t v___x_3816_; 
lean_inc(v_a_3807_);
lean_inc(v_a_3806_);
lean_inc_ref(v_options_3805_);
lean_inc_ref(v_handler_3804_);
lean_inc_ref(v___f_3803_);
lean_inc_ref(v_args_3808_);
v___f_3810_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3810_, 0, v_args_3808_);
lean_closure_set(v___f_3810_, 1, v___f_3803_);
lean_closure_set(v___f_3810_, 2, v_handler_3804_);
lean_closure_set(v___f_3810_, 3, v_options_3805_);
lean_closure_set(v___f_3810_, 4, v_a_3806_);
lean_closure_set(v___f_3810_, 5, v_a_3807_);
v___x_3814_ = lean_unsigned_to_nat(1u);
v___x_3815_ = lean_array_get_size(v_args_3808_);
v___x_3816_ = lean_nat_dec_lt(v___x_3814_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_dec_ref(v___f_3810_);
goto v___jp_3811_;
}
else
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_array_fget_borrowed(v_args_3808_, v___x_3814_);
switch(lean_obj_tag(v___x_3817_))
{
case 9:
{
lean_object* v___f_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_inc_ref(v___x_3817_);
lean_dec_ref(v_args_3808_);
lean_dec(v_a_3807_);
lean_dec(v_a_3806_);
lean_dec_ref(v_options_3805_);
lean_dec_ref(v_handler_3804_);
lean_dec_ref(v___f_3803_);
v___f_3818_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3818_, 0, v___f_3810_);
v___x_3819_ = l_Lasm_Fetch_platformEnv;
v___x_3820_ = lean_unsigned_to_nat(0u);
v___x_3821_ = 0;
v___x_3822_ = lean_st_ref_swap(v___x_3819_, v___x_3817_);
lean_dec(v___x_3822_);
v___x_3823_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3824_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3820_, v___x_3821_, v___x_3823_, v___f_3818_);
return v___x_3824_;
}
case 8:
{
lean_object* v___f_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; uint8_t v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
lean_inc_ref(v___x_3817_);
lean_dec_ref(v_args_3808_);
lean_dec(v_a_3807_);
lean_dec(v_a_3806_);
lean_dec_ref(v_options_3805_);
lean_dec_ref(v_handler_3804_);
lean_dec_ref(v___f_3803_);
v___f_3825_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3825_, 0, v___f_3810_);
v___x_3826_ = l_Lasm_Fetch_platformEnv;
v___x_3827_ = lean_unsigned_to_nat(0u);
v___x_3828_ = 0;
v___x_3829_ = lean_st_ref_swap(v___x_3826_, v___x_3817_);
lean_dec(v___x_3829_);
v___x_3830_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3831_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3827_, v___x_3828_, v___x_3830_, v___f_3825_);
return v___x_3831_;
}
default: 
{
lean_dec_ref(v___f_3810_);
goto v___jp_3811_;
}
}
}
v___jp_3811_:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3812_ = lean_box(0);
v___x_3813_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3808_, v___f_3803_, v_handler_3804_, v_options_3805_, v_a_3806_, v_a_3807_, v___x_3812_);
lean_dec_ref(v_args_3808_);
return v___x_3813_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3832_, lean_object* v_handler_3833_, lean_object* v_options_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_args_3837_, lean_object* v___y_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3832_, v_handler_3833_, v_options_3834_, v_a_3835_, v_a_3836_, v_args_3837_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3843_, lean_object* v_options_3844_){
_start:
{
lean_object* v___f_3846_; lean_object* v___x_3847_; 
v___f_3846_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3847_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3847_) == 0)
{
lean_object* v_a_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v_a_3848_ = lean_ctor_get(v___x_3847_, 0);
lean_inc_n(v_a_3848_, 2);
lean_dec_ref_known(v___x_3847_, 1);
v___x_3849_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3850_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3848_, v___x_3849_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref_known(v___x_3850_, 1);
v___x_3852_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3853_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3848_, v___x_3852_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___f_3855_; lean_object* v___x_3856_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_a_3854_);
lean_dec_ref_known(v___x_3853_, 1);
v___f_3855_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3855_, 0, v___f_3846_);
lean_closure_set(v___f_3855_, 1, v_handler_3843_);
lean_closure_set(v___f_3855_, 2, v_options_3844_);
lean_closure_set(v___f_3855_, 3, v_a_3851_);
lean_closure_set(v___f_3855_, 4, v_a_3854_);
v___x_3856_ = l_Lasm_JS_Function_ofFn(v___f_3855_);
return v___x_3856_;
}
else
{
lean_dec(v_a_3851_);
lean_dec_ref(v_options_3844_);
lean_dec_ref(v_handler_3843_);
return v___x_3853_;
}
}
else
{
lean_dec(v_a_3848_);
lean_dec_ref(v_options_3844_);
lean_dec_ref(v_handler_3843_);
return v___x_3850_;
}
}
else
{
lean_dec_ref(v_options_3844_);
lean_dec_ref(v_handler_3843_);
return v___x_3847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3857_, lean_object* v_options_3858_, lean_object* v_a_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3857_, v_options_3858_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3861_){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = l_Lasm_JS_Wire_decode(v_bytes_3861_);
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3864_, lean_object* v_a_3865_){
_start:
{
lean_object* v_res_3866_; 
v_res_3866_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3864_);
lean_dec_ref(v_bytes_3864_);
return v_res_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3867_, lean_object* v_bytes_3868_){
_start:
{
lean_object* v___x_3870_; 
v___x_3870_ = l_Lasm_JS_Wire_decode(v_bytes_3868_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3871_, lean_object* v_bytes_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3871_, v_bytes_3872_);
lean_dec_ref(v_bytes_3872_);
lean_dec_ref(v_context_3871_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3875_){
_start:
{
if (lean_obj_tag(v_x_3875_) == 0)
{
lean_object* v_a_3877_; lean_object* v___x_3879_; uint8_t v_isShared_3880_; uint8_t v_isSharedCheck_3885_; 
v_a_3877_ = lean_ctor_get(v_x_3875_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v_x_3875_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3879_ = v_x_3875_;
v_isShared_3880_ = v_isSharedCheck_3885_;
goto v_resetjp_3878_;
}
else
{
lean_inc(v_a_3877_);
lean_dec(v_x_3875_);
v___x_3879_ = lean_box(0);
v_isShared_3880_ = v_isSharedCheck_3885_;
goto v_resetjp_3878_;
}
v_resetjp_3878_:
{
lean_object* v___x_3882_; 
if (v_isShared_3880_ == 0)
{
v___x_3882_ = v___x_3879_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_a_3877_);
v___x_3882_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
lean_object* v___x_3883_; 
v___x_3883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
return v___x_3883_;
}
}
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3895_; 
v_a_3886_ = lean_ctor_get(v_x_3875_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_x_3875_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3888_ = v_x_3875_;
v_isShared_3889_ = v_isSharedCheck_3895_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v_x_3875_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3895_;
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
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; 
v___x_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
v___x_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
return v___x_3893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3896_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3903_){
_start:
{
if (lean_obj_tag(v_x_3903_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3913_; 
v_a_3905_ = lean_ctor_get(v_x_3903_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v_x_3903_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3907_ = v_x_3903_;
v_isShared_3908_ = v_isSharedCheck_3913_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v_x_3903_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3913_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
lean_object* v___x_3911_; 
v___x_3911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
return v___x_3911_;
}
}
}
else
{
lean_object* v___x_3914_; 
lean_dec_ref_known(v_x_3903_, 1);
v___x_3914_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3914_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3915_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3918_, lean_object* v_x_3919_){
_start:
{
if (lean_obj_tag(v_x_3919_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3929_; 
lean_dec_ref(v___f_3918_);
v_a_3921_ = lean_ctor_get(v_x_3919_, 0);
v_isSharedCheck_3929_ = !lean_is_exclusive(v_x_3919_);
if (v_isSharedCheck_3929_ == 0)
{
v___x_3923_ = v_x_3919_;
v_isShared_3924_ = v_isSharedCheck_3929_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v_x_3919_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3929_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3927_; 
v___x_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3926_);
return v___x_3927_;
}
}
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3950_; 
v_a_3930_ = lean_ctor_get(v_x_3919_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_x_3919_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3932_ = v_x_3919_;
v_isShared_3933_ = v_isSharedCheck_3950_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v_x_3919_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3950_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v_flush_3934_; lean_object* v___x_3935_; uint8_t v___x_3936_; lean_object* v_val_3938_; lean_object* v___x_3941_; 
v_flush_3934_ = lean_ctor_get(v_a_3930_, 0);
lean_inc_ref(v_flush_3934_);
lean_dec(v_a_3930_);
v___x_3935_ = lean_unsigned_to_nat(0u);
v___x_3936_ = 0;
v___x_3941_ = lean_apply_1(v_flush_3934_, lean_box(0));
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 0, v_a_3942_);
v___x_3944_ = v___x_3932_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
v_val_3938_ = v___x_3944_;
goto v___jp_3937_;
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; 
v_a_3946_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3946_);
lean_dec_ref_known(v___x_3941_, 1);
if (v_isShared_3933_ == 0)
{
lean_ctor_set_tag(v___x_3932_, 0);
lean_ctor_set(v___x_3932_, 0, v_a_3946_);
v___x_3948_ = v___x_3932_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3946_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
v_val_3938_ = v___x_3948_;
goto v___jp_3937_;
}
}
v___jp_3937_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3939_, 0, v_val_3938_);
v___x_3940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3935_, v___x_3936_, v___x_3939_, v___f_3918_);
return v___x_3940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3951_, lean_object* v_x_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3951_, v_x_3952_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3955_, lean_object* v_x_3956_){
_start:
{
if (lean_obj_tag(v_x_3956_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3966_; 
lean_dec_ref(v___f_3955_);
v_a_3958_ = lean_ctor_get(v_x_3956_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3960_ = v_x_3956_;
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v_x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
return v___x_3964_;
}
}
}
else
{
lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3978_; 
v_isSharedCheck_3978_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3978_ == 0)
{
lean_object* v_unused_3979_; 
v_unused_3979_ = lean_ctor_get(v_x_3956_, 0);
lean_dec(v_unused_3979_);
v___x_3968_ = v_x_3956_;
v_isShared_3969_ = v_isSharedCheck_3978_;
goto v_resetjp_3967_;
}
else
{
lean_dec(v_x_3956_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3978_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3970_; uint8_t v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3974_; 
v___x_3970_ = lean_unsigned_to_nat(0u);
v___x_3971_ = 0;
v___x_3972_ = lean_get_stdout();
if (v_isShared_3969_ == 0)
{
lean_ctor_set(v___x_3968_, 0, v___x_3972_);
v___x_3974_ = v___x_3968_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v___x_3972_);
v___x_3974_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
v___x_3976_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3970_, v___x_3971_, v___x_3975_, v___f_3955_);
return v___x_3976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3980_, lean_object* v_x_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3980_, v_x_3981_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3984_){
_start:
{
if (lean_obj_tag(v_x_3984_) == 0)
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3994_; 
v_a_3986_ = lean_ctor_get(v_x_3984_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_x_3984_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3988_ = v_x_3984_;
v_isShared_3989_ = v_isSharedCheck_3994_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v_x_3984_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3994_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
lean_object* v___x_3992_; 
v___x_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3991_);
return v___x_3992_;
}
}
}
else
{
lean_object* v___x_3995_; 
lean_dec_ref_known(v_x_3984_, 1);
v___x_3995_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3995_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3996_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_4000_, lean_object* v___x_4001_, lean_object* v_____r_4002_){
_start:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_4004_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4005_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4005_, 0, v_snd_4000_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
lean_ctor_set(v___x_4005_, 2, v___x_4001_);
v___x_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
v___x_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
return v___x_4007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_4008_, lean_object* v___x_4009_, lean_object* v_____r_4010_, lean_object* v___y_4011_){
_start:
{
lean_object* v_res_4012_; 
v_res_4012_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_4008_, v___x_4009_, v_____r_4010_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_4013_, lean_object* v_x_4014_){
_start:
{
if (lean_obj_tag(v_x_4014_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4024_; 
lean_dec_ref(v___f_4013_);
v_a_4016_ = lean_ctor_get(v_x_4014_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_x_4014_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4018_ = v_x_4014_;
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v_x_4014_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4021_);
return v___x_4022_;
}
}
}
else
{
lean_object* v_a_4025_; 
v_a_4025_ = lean_ctor_get(v_x_4014_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v_x_4014_, 1);
if (lean_obj_tag(v_a_4025_) == 0)
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4034_; 
lean_dec_ref(v___f_4013_);
v_a_4026_ = lean_ctor_get(v_a_4025_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v_a_4025_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4028_ = v_a_4025_;
v_isShared_4029_ = v_isSharedCheck_4034_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v_a_4025_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4034_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
lean_ctor_set_tag(v___x_4028_, 1);
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
lean_object* v___x_4032_; 
v___x_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4032_, 0, v___x_4031_);
return v___x_4032_;
}
}
}
else
{
lean_object* v_a_4035_; lean_object* v___x_4036_; 
v_a_4035_ = lean_ctor_get(v_a_4025_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v_a_4025_, 1);
v___x_4036_ = lean_apply_2(v___f_4013_, v_a_4035_, lean_box(0));
return v___x_4036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4037_, lean_object* v_x_4038_, lean_object* v___y_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4037_, v_x_4038_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4042_, lean_object* v___x_4043_, lean_object* v_x_4044_){
_start:
{
if (lean_obj_tag(v_x_4044_) == 0)
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4054_; 
lean_dec_ref(v___x_4043_);
lean_dec(v_snd_4042_);
v_a_4046_ = lean_ctor_get(v_x_4044_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_x_4044_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4048_ = v_x_4044_;
v_isShared_4049_ = v_isSharedCheck_4054_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v_x_4044_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4054_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4051_; 
if (v_isShared_4049_ == 0)
{
v___x_4051_ = v___x_4048_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_a_4046_);
v___x_4051_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
lean_object* v___x_4052_; 
v___x_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4051_);
return v___x_4052_;
}
}
}
else
{
lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4065_; 
v_isSharedCheck_4065_ = !lean_is_exclusive(v_x_4044_);
if (v_isSharedCheck_4065_ == 0)
{
lean_object* v_unused_4066_; 
v_unused_4066_ = lean_ctor_get(v_x_4044_, 0);
lean_dec(v_unused_4066_);
v___x_4056_ = v_x_4044_;
v_isShared_4057_ = v_isSharedCheck_4065_;
goto v_resetjp_4055_;
}
else
{
lean_dec(v_x_4044_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4065_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4058_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4059_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4059_, 0, v_snd_4042_);
lean_ctor_set(v___x_4059_, 1, v___x_4058_);
lean_ctor_set(v___x_4059_, 2, v___x_4043_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set_tag(v___x_4056_, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4059_);
v___x_4061_ = v___x_4056_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
v___x_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
return v___x_4063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4067_, lean_object* v___x_4068_, lean_object* v_x_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4067_, v___x_4068_, v_x_4069_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4072_, lean_object* v_name_4073_, lean_object* v_args_4074_){
_start:
{
lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; uint64_t v___x_4079_; lean_object* v___x_4080_; 
v___x_4076_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4077_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4077_, 0, v_o_4072_);
lean_ctor_set(v___x_4077_, 1, v___x_4076_);
v___x_4078_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4078_, 0, v_name_4073_);
v___x_4079_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4080_ = l_Lasm_JS_Value_invokeRaw(v___x_4077_, v___x_4078_, v_args_4074_, v___x_4079_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___x_4082_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
lean_inc(v_a_4081_);
lean_dec_ref_known(v___x_4080_, 1);
v___x_4082_ = l_Lasm_JS_Wire_decode(v_a_4081_);
lean_dec(v_a_4081_);
return v___x_4082_;
}
else
{
lean_object* v_a_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4090_; 
v_a_4083_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4090_ == 0)
{
v___x_4085_ = v___x_4080_;
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_a_4083_);
lean_dec(v___x_4080_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4088_; 
if (v_isShared_4086_ == 0)
{
v___x_4088_ = v___x_4085_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_a_4083_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4091_, lean_object* v_name_4092_, lean_object* v_args_4093_, lean_object* v_a_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4091_, v_name_4092_, v_args_4093_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4096_, uint8_t v___x_4097_, lean_object* v___f_4098_, lean_object* v_snd_4099_, lean_object* v_chunk_4100_){
_start:
{
lean_object* v_val_4103_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4106_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4107_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4107_, 0, v_chunk_4100_);
v___x_4108_ = lean_unsigned_to_nat(1u);
v___x_4109_ = lean_mk_empty_array_with_capacity(v___x_4108_);
v___x_4110_ = lean_array_push(v___x_4109_, v___x_4107_);
v___x_4111_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4099_, v___x_4106_, v___x_4110_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4111_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4111_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
lean_ctor_set_tag(v___x_4114_, 1);
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
v_val_4103_ = v___x_4117_;
goto v___jp_4102_;
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
v_a_4120_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4111_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4111_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
lean_ctor_set_tag(v___x_4122_, 0);
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
v_val_4103_ = v___x_4125_;
goto v___jp_4102_;
}
}
}
v___jp_4102_:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4104_, 0, v_val_4103_);
v___x_4105_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4096_, v___x_4097_, v___x_4104_, v___f_4098_);
return v___x_4105_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4128_, lean_object* v___x_4129_, lean_object* v___f_4130_, lean_object* v_snd_4131_, lean_object* v_chunk_4132_, lean_object* v___y_4133_){
_start:
{
uint8_t v___x_18404__boxed_4134_; lean_object* v_res_4135_; 
v___x_18404__boxed_4134_ = lean_unbox(v___x_4129_);
v_res_4135_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4128_, v___x_18404__boxed_4134_, v___f_4130_, v_snd_4131_, v_chunk_4132_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4136_, uint8_t v___x_4137_, lean_object* v___f_4138_, lean_object* v_x_4139_){
_start:
{
lean_object* v_val_4142_; 
if (lean_obj_tag(v_x_4139_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4161_; 
v_a_4145_ = lean_ctor_get(v_x_4139_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v_x_4139_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4147_ = v_x_4139_;
v_isShared_4148_ = v_isSharedCheck_4161_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v_x_4139_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4161_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; 
v___x_4149_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4150_ = lean_io_error_to_string(v_a_4145_);
v___x_4151_ = lean_string_append(v___x_4149_, v___x_4150_);
lean_dec_ref(v___x_4150_);
v___x_4152_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4151_);
if (lean_obj_tag(v___x_4152_) == 0)
{
lean_object* v_a_4153_; lean_object* v___x_4155_; 
v_a_4153_ = lean_ctor_get(v___x_4152_, 0);
lean_inc(v_a_4153_);
lean_dec_ref_known(v___x_4152_, 1);
if (v_isShared_4148_ == 0)
{
lean_ctor_set_tag(v___x_4147_, 1);
lean_ctor_set(v___x_4147_, 0, v_a_4153_);
v___x_4155_ = v___x_4147_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4153_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
v_val_4142_ = v___x_4155_;
goto v___jp_4141_;
}
}
else
{
lean_object* v_a_4157_; lean_object* v___x_4159_; 
v_a_4157_ = lean_ctor_get(v___x_4152_, 0);
lean_inc(v_a_4157_);
lean_dec_ref_known(v___x_4152_, 1);
if (v_isShared_4148_ == 0)
{
lean_ctor_set(v___x_4147_, 0, v_a_4157_);
v___x_4159_ = v___x_4147_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4157_);
v___x_4159_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
v_val_4142_ = v___x_4159_;
goto v___jp_4141_;
}
}
}
}
else
{
lean_object* v___x_4162_; 
lean_dec_ref(v___f_4138_);
lean_dec(v___x_4136_);
v___x_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4162_, 0, v_x_4139_);
return v___x_4162_;
}
v___jp_4141_:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4143_, 0, v_val_4142_);
v___x_4144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4136_, v___x_4137_, v___x_4143_, v___f_4138_);
return v___x_4144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4163_, lean_object* v___x_4164_, lean_object* v___f_4165_, lean_object* v_x_4166_, lean_object* v___y_4167_){
_start:
{
uint8_t v___x_18472__boxed_4168_; lean_object* v_res_4169_; 
v___x_18472__boxed_4168_ = lean_unbox(v___x_4164_);
v_res_4169_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4163_, v___x_18472__boxed_4168_, v___f_4165_, v_x_4166_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4170_, lean_object* v_snd_4171_, lean_object* v___y_4172_, uint16_t v_status_4173_, lean_object* v_body_4174_, lean_object* v___x_4175_, lean_object* v___f_4176_, lean_object* v___f_4177_, lean_object* v___f_4178_, lean_object* v___f_4179_, lean_object* v___f_4180_, lean_object* v_x_4181_){
_start:
{
if (lean_obj_tag(v_x_4181_) == 0)
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4191_; 
lean_dec_ref(v___f_4180_);
lean_dec_ref(v___f_4179_);
lean_dec_ref(v___f_4178_);
lean_dec_ref(v___f_4177_);
lean_dec_ref(v___f_4176_);
lean_dec(v___x_4175_);
lean_dec_ref(v_body_4174_);
lean_dec(v_snd_4171_);
lean_dec(v_stream_4170_);
v_a_4183_ = lean_ctor_get(v_x_4181_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_x_4181_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4185_ = v_x_4181_;
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v_x_4181_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; 
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
return v___x_4189_;
}
}
}
else
{
lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4221_; 
v_isSharedCheck_4221_ = !lean_is_exclusive(v_x_4181_);
if (v_isSharedCheck_4221_ == 0)
{
lean_object* v_unused_4222_; 
v_unused_4222_ = lean_ctor_get(v_x_4181_, 0);
lean_dec(v_unused_4222_);
v___x_4193_ = v_x_4181_;
v_isShared_4194_ = v_isSharedCheck_4221_;
goto v_resetjp_4192_;
}
else
{
lean_dec(v_x_4181_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4221_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
if (lean_obj_tag(v_stream_4170_) == 0)
{
lean_object* v___x_4195_; lean_object* v___y_4197_; uint8_t v___x_4206_; 
lean_dec_ref(v___f_4180_);
lean_dec_ref(v___f_4179_);
lean_dec_ref(v___f_4178_);
lean_dec_ref(v___f_4177_);
lean_dec_ref(v___f_4176_);
lean_dec(v___x_4175_);
v___x_4195_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4206_ = l_Lasm_Fetch_bodyless(v___y_4172_, v_status_4173_);
if (v___x_4206_ == 0)
{
lean_object* v___x_4207_; 
v___x_4207_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4207_, 0, v_body_4174_);
v___y_4197_ = v___x_4207_;
goto v___jp_4196_;
}
else
{
lean_object* v___x_4208_; 
lean_dec_ref(v_body_4174_);
v___x_4208_ = lean_box(0);
v___y_4197_ = v___x_4208_;
goto v___jp_4196_;
}
v___jp_4196_:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4203_; 
v___x_4198_ = lean_unsigned_to_nat(1u);
v___x_4199_ = lean_mk_empty_array_with_capacity(v___x_4198_);
v___x_4200_ = lean_array_push(v___x_4199_, v___y_4197_);
v___x_4201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4201_, 0, v_snd_4171_);
lean_ctor_set(v___x_4201_, 1, v___x_4195_);
lean_ctor_set(v___x_4201_, 2, v___x_4200_);
if (v_isShared_4194_ == 0)
{
lean_ctor_set(v___x_4193_, 0, v___x_4201_);
v___x_4203_ = v___x_4193_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v___x_4201_);
v___x_4203_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
lean_object* v___x_4204_; 
v___x_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
return v___x_4204_;
}
}
}
else
{
lean_object* v_val_4209_; uint8_t v___x_4210_; 
lean_del_object(v___x_4193_);
lean_dec_ref(v_body_4174_);
v_val_4209_ = lean_ctor_get(v_stream_4170_, 0);
lean_inc(v_val_4209_);
lean_dec_ref_known(v_stream_4170_, 1);
v___x_4210_ = l_Lasm_Fetch_bodyless(v___y_4172_, v_status_4173_);
if (v___x_4210_ == 0)
{
lean_object* v___x_4211_; lean_object* v___f_4212_; lean_object* v___x_4213_; lean_object* v___f_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
lean_dec_ref(v___f_4180_);
v___x_4211_ = lean_box(v___x_4210_);
lean_inc_n(v___x_4175_, 4);
v___f_4212_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4212_, 0, v___x_4175_);
lean_closure_set(v___f_4212_, 1, v___x_4211_);
lean_closure_set(v___f_4212_, 2, v___f_4176_);
lean_closure_set(v___f_4212_, 3, v_snd_4171_);
v___x_4213_ = lean_box(v___x_4210_);
v___f_4214_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4214_, 0, v___x_4175_);
lean_closure_set(v___f_4214_, 1, v___x_4213_);
lean_closure_set(v___f_4214_, 2, v___f_4177_);
v___x_4215_ = lean_apply_2(v_val_4209_, v___f_4212_, lean_box(0));
v___x_4216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4175_, v___x_4210_, v___x_4215_, v___f_4178_);
v___x_4217_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4175_, v___x_4210_, v___x_4216_, v___f_4214_);
v___x_4218_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4175_, v___x_4210_, v___x_4217_, v___f_4179_);
return v___x_4218_;
}
else
{
lean_object* v___x_4219_; lean_object* v___x_4220_; 
lean_dec(v_val_4209_);
lean_dec_ref(v___f_4179_);
lean_dec_ref(v___f_4178_);
lean_dec_ref(v___f_4177_);
lean_dec_ref(v___f_4176_);
lean_dec(v___x_4175_);
lean_dec(v_snd_4171_);
v___x_4219_ = lean_box(0);
v___x_4220_ = lean_apply_2(v___f_4180_, v___x_4219_, lean_box(0));
return v___x_4220_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4223_, lean_object* v_snd_4224_, lean_object* v___y_4225_, lean_object* v_status_4226_, lean_object* v_body_4227_, lean_object* v___x_4228_, lean_object* v___f_4229_, lean_object* v___f_4230_, lean_object* v___f_4231_, lean_object* v___f_4232_, lean_object* v___f_4233_, lean_object* v_x_4234_, lean_object* v___y_4235_){
_start:
{
uint16_t v_status_boxed_4236_; lean_object* v_res_4237_; 
v_status_boxed_4236_ = lean_unbox(v_status_4226_);
v_res_4237_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4223_, v_snd_4224_, v___y_4225_, v_status_boxed_4236_, v_body_4227_, v___x_4228_, v___f_4229_, v___f_4230_, v___f_4231_, v___f_4232_, v___f_4233_, v_x_4234_);
lean_dec_ref(v___y_4225_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4238_, size_t v_i_4239_, size_t v_stop_4240_, lean_object* v_b_4241_){
_start:
{
uint8_t v___x_4242_; 
v___x_4242_ = lean_usize_dec_eq(v_i_4239_, v_stop_4240_);
if (v___x_4242_ == 0)
{
lean_object* v___x_4243_; lean_object* v_fst_4244_; lean_object* v_snd_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; size_t v___x_4250_; size_t v___x_4251_; 
v___x_4243_ = lean_array_uget_borrowed(v_as_4238_, v_i_4239_);
v_fst_4244_ = lean_ctor_get(v___x_4243_, 0);
v_snd_4245_ = lean_ctor_get(v___x_4243_, 1);
lean_inc(v_fst_4244_);
v___x_4246_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4246_, 0, v_fst_4244_);
v___x_4247_ = lean_array_push(v_b_4241_, v___x_4246_);
lean_inc(v_snd_4245_);
v___x_4248_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4248_, 0, v_snd_4245_);
v___x_4249_ = lean_array_push(v___x_4247_, v___x_4248_);
v___x_4250_ = ((size_t)1ULL);
v___x_4251_ = lean_usize_add(v_i_4239_, v___x_4250_);
v_i_4239_ = v___x_4251_;
v_b_4241_ = v___x_4249_;
goto _start;
}
else
{
return v_b_4241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4253_, lean_object* v_i_4254_, lean_object* v_stop_4255_, lean_object* v_b_4256_){
_start:
{
size_t v_i_boxed_4257_; size_t v_stop_boxed_4258_; lean_object* v_res_4259_; 
v_i_boxed_4257_ = lean_unbox_usize(v_i_4254_);
lean_dec(v_i_4254_);
v_stop_boxed_4258_ = lean_unbox_usize(v_stop_4255_);
lean_dec(v_stop_4255_);
v_res_4259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4253_, v_i_boxed_4257_, v_stop_boxed_4258_, v_b_4256_);
lean_dec_ref(v_as_4253_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4261_, lean_object* v_snd_4262_, lean_object* v___y_4263_, lean_object* v___f_4264_, lean_object* v___f_4265_, lean_object* v_x_4266_){
_start:
{
lean_object* v___y_4269_; uint8_t v___y_4270_; lean_object* v_val_4271_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; 
if (lean_obj_tag(v_x_4266_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4310_; 
lean_dec_ref(v___f_4265_);
lean_dec_ref(v___f_4264_);
lean_dec_ref(v___y_4263_);
lean_dec(v_snd_4262_);
lean_dec(v___x_4261_);
v_a_4302_ = lean_ctor_get(v_x_4266_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v_x_4266_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4304_ = v_x_4266_;
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v_x_4266_);
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
lean_object* v_a_4311_; uint16_t v_status_4312_; lean_object* v_headers_4313_; lean_object* v_body_4314_; lean_object* v_stream_4315_; lean_object* v___x_4316_; lean_object* v___f_4317_; lean_object* v___f_4318_; lean_object* v___f_4319_; lean_object* v___y_4321_; lean_object* v___x_4333_; uint8_t v___x_4334_; 
v_a_4311_ = lean_ctor_get(v_x_4266_, 0);
lean_inc(v_a_4311_);
lean_dec_ref_known(v_x_4266_, 1);
v_status_4312_ = lean_ctor_get_uint16(v_a_4311_, sizeof(void*)*3);
v_headers_4313_ = lean_ctor_get(v_a_4311_, 0);
lean_inc_ref(v_headers_4313_);
v_body_4314_ = lean_ctor_get(v_a_4311_, 1);
lean_inc_ref(v_body_4314_);
v_stream_4315_ = lean_ctor_get(v_a_4311_, 2);
lean_inc(v_stream_4315_);
lean_dec(v_a_4311_);
v___x_4316_ = lean_mk_empty_array_with_capacity(v___x_4261_);
lean_inc_ref_n(v___x_4316_, 2);
lean_inc_n(v_snd_4262_, 2);
v___f_4317_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4317_, 0, v_snd_4262_);
lean_closure_set(v___f_4317_, 1, v___x_4316_);
lean_inc_ref(v___f_4317_);
v___f_4318_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4318_, 0, v___f_4317_);
v___f_4319_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4319_, 0, v_snd_4262_);
lean_closure_set(v___f_4319_, 1, v___x_4316_);
v___x_4333_ = lean_array_get_size(v_headers_4313_);
v___x_4334_ = lean_nat_dec_lt(v___x_4261_, v___x_4333_);
if (v___x_4334_ == 0)
{
lean_dec_ref(v_headers_4313_);
v___y_4321_ = v___x_4316_;
goto v___jp_4320_;
}
else
{
uint8_t v___x_4335_; 
v___x_4335_ = lean_nat_dec_le(v___x_4333_, v___x_4333_);
if (v___x_4335_ == 0)
{
if (v___x_4334_ == 0)
{
lean_dec_ref(v_headers_4313_);
v___y_4321_ = v___x_4316_;
goto v___jp_4320_;
}
else
{
size_t v___x_4336_; size_t v___x_4337_; lean_object* v___x_4338_; 
v___x_4336_ = ((size_t)0ULL);
v___x_4337_ = lean_usize_of_nat(v___x_4333_);
v___x_4338_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4313_, v___x_4336_, v___x_4337_, v___x_4316_);
lean_dec_ref(v_headers_4313_);
v___y_4321_ = v___x_4338_;
goto v___jp_4320_;
}
}
else
{
size_t v___x_4339_; size_t v___x_4340_; lean_object* v___x_4341_; 
v___x_4339_ = ((size_t)0ULL);
v___x_4340_ = lean_usize_of_nat(v___x_4333_);
v___x_4341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4313_, v___x_4339_, v___x_4340_, v___x_4316_);
lean_dec_ref(v_headers_4313_);
v___y_4321_ = v___x_4341_;
goto v___jp_4320_;
}
}
v___jp_4320_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___f_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; uint8_t v___x_4329_; 
v___x_4322_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4323_ = lean_box(v_status_4312_);
lean_inc(v___x_4261_);
lean_inc(v_snd_4262_);
v___f_4324_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4324_, 0, v_stream_4315_);
lean_closure_set(v___f_4324_, 1, v_snd_4262_);
lean_closure_set(v___f_4324_, 2, v___y_4263_);
lean_closure_set(v___f_4324_, 3, v___x_4323_);
lean_closure_set(v___f_4324_, 4, v_body_4314_);
lean_closure_set(v___f_4324_, 5, v___x_4261_);
lean_closure_set(v___f_4324_, 6, v___f_4264_);
lean_closure_set(v___f_4324_, 7, v___f_4319_);
lean_closure_set(v___f_4324_, 8, v___f_4265_);
lean_closure_set(v___f_4324_, 9, v___f_4318_);
lean_closure_set(v___f_4324_, 10, v___f_4317_);
v___x_4325_ = lean_uint16_to_nat(v_status_4312_);
v___x_4326_ = lean_nat_to_int(v___x_4325_);
v___x_4327_ = lean_nat_abs(v___x_4326_);
v___x_4328_ = lean_cstr_to_nat("9007199254740991");
v___x_4329_ = lean_nat_dec_le(v___x_4327_, v___x_4328_);
lean_dec(v___x_4327_);
if (v___x_4329_ == 0)
{
lean_object* v___x_4330_; 
v___x_4330_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4326_);
v___y_4275_ = v___y_4321_;
v___y_4276_ = v___x_4322_;
v___y_4277_ = v___f_4324_;
v___y_4278_ = v___x_4330_;
goto v___jp_4274_;
}
else
{
double v___x_4331_; lean_object* v___x_4332_; 
v___x_4331_ = l_Float_ofInt(v___x_4326_);
lean_dec(v___x_4326_);
v___x_4332_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4332_, 0, v___x_4331_);
v___y_4275_ = v___y_4321_;
v___y_4276_ = v___x_4322_;
v___y_4277_ = v___f_4324_;
v___y_4278_ = v___x_4332_;
goto v___jp_4274_;
}
}
}
v___jp_4268_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4272_, 0, v_val_4271_);
v___x_4273_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4261_, v___y_4270_, v___x_4272_, v___y_4269_);
return v___x_4273_;
}
v___jp_4274_:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; uint8_t v___x_4284_; lean_object* v___x_4285_; 
v___x_4279_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4279_, 0, v___y_4275_);
v___x_4280_ = lean_unsigned_to_nat(2u);
v___x_4281_ = lean_mk_empty_array_with_capacity(v___x_4280_);
v___x_4282_ = lean_array_push(v___x_4281_, v___y_4278_);
v___x_4283_ = lean_array_push(v___x_4282_, v___x_4279_);
v___x_4284_ = 0;
lean_inc_ref(v___y_4276_);
v___x_4285_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4262_, v___y_4276_, v___x_4283_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4288_ = v___x_4285_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4285_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
lean_ctor_set_tag(v___x_4288_, 1);
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4286_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
v___y_4269_ = v___y_4277_;
v___y_4270_ = v___x_4284_;
v_val_4271_ = v___x_4291_;
goto v___jp_4268_;
}
}
}
else
{
lean_object* v_a_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4301_; 
v_a_4294_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4296_ = v___x_4285_;
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_a_4294_);
lean_dec(v___x_4285_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4301_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v___x_4299_; 
if (v_isShared_4297_ == 0)
{
lean_ctor_set_tag(v___x_4296_, 0);
v___x_4299_ = v___x_4296_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_a_4294_);
v___x_4299_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
v___y_4269_ = v___y_4277_;
v___y_4270_ = v___x_4284_;
v_val_4271_ = v___x_4299_;
goto v___jp_4268_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4342_, lean_object* v_snd_4343_, lean_object* v___y_4344_, lean_object* v___f_4345_, lean_object* v___f_4346_, lean_object* v_x_4347_, lean_object* v___y_4348_){
_start:
{
lean_object* v_res_4349_; 
v_res_4349_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4342_, v_snd_4343_, v___y_4344_, v___f_4345_, v___f_4346_, v_x_4347_);
return v_res_4349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4350_, lean_object* v___x_4351_, lean_object* v___f_4352_, lean_object* v_request_4353_){
_start:
{
uint8_t v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4355_ = 0;
v___x_4356_ = l_Lasm_Fetch_respond(v_handler_4350_, v_request_4353_);
v___x_4357_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4351_, v___x_4355_, v___x_4356_, v___f_4352_);
return v___x_4357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4358_, lean_object* v___x_4359_, lean_object* v___f_4360_, lean_object* v_request_4361_, lean_object* v___y_4362_){
_start:
{
lean_object* v_res_4363_; 
v_res_4363_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4358_, v___x_4359_, v___f_4360_, v_request_4361_);
return v_res_4363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4364_, lean_object* v_x_4365_){
_start:
{
if (lean_obj_tag(v_x_4365_) == 0)
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4375_; 
lean_dec_ref(v___f_4364_);
v_a_4367_ = lean_ctor_get(v_x_4365_, 0);
v_isSharedCheck_4375_ = !lean_is_exclusive(v_x_4365_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4369_ = v_x_4365_;
v_isShared_4370_ = v_isSharedCheck_4375_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v_x_4365_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4375_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v___x_4372_; 
if (v_isShared_4370_ == 0)
{
v___x_4372_ = v___x_4369_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_a_4367_);
v___x_4372_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
lean_object* v___x_4373_; 
v___x_4373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4373_, 0, v___x_4372_);
return v___x_4373_;
}
}
}
else
{
lean_object* v_a_4376_; lean_object* v___x_4377_; 
v_a_4376_ = lean_ctor_get(v_x_4365_, 0);
lean_inc(v_a_4376_);
lean_dec_ref_known(v_x_4365_, 1);
v___x_4377_ = lean_apply_2(v___f_4364_, v_a_4376_, lean_box(0));
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4378_, lean_object* v_x_4379_, lean_object* v___y_4380_){
_start:
{
lean_object* v_res_4381_; 
v_res_4381_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4378_, v_x_4379_);
return v_res_4381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___x_4384_, lean_object* v___f_4385_, lean_object* v___x_4386_, uint8_t v___x_4387_, lean_object* v___f_4388_, lean_object* v_x_4389_){
_start:
{
if (lean_obj_tag(v_x_4389_) == 0)
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4399_; 
lean_dec_ref(v___f_4388_);
lean_dec(v___x_4386_);
lean_dec_ref(v___f_4385_);
lean_dec_ref(v___x_4384_);
lean_dec_ref(v___y_4383_);
lean_dec_ref(v___y_4382_);
v_a_4391_ = lean_ctor_get(v_x_4389_, 0);
v_isSharedCheck_4399_ = !lean_is_exclusive(v_x_4389_);
if (v_isSharedCheck_4399_ == 0)
{
v___x_4393_ = v_x_4389_;
v_isShared_4394_ = v_isSharedCheck_4399_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v_x_4389_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4399_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v_a_4391_);
v___x_4396_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
lean_object* v___x_4397_; 
v___x_4397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4396_);
return v___x_4397_;
}
}
}
else
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4410_; 
v_a_4400_ = lean_ctor_get(v_x_4389_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v_x_4389_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4402_ = v_x_4389_;
v_isShared_4403_ = v_isSharedCheck_4410_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v_x_4389_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4410_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4404_; lean_object* v___x_4406_; 
v___x_4404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4404_, 0, v___y_4382_);
lean_ctor_set(v___x_4404_, 1, v___y_4383_);
lean_ctor_set(v___x_4404_, 2, v___x_4384_);
lean_ctor_set(v___x_4404_, 3, v_a_4400_);
lean_ctor_set(v___x_4404_, 4, v___f_4385_);
if (v_isShared_4403_ == 0)
{
lean_ctor_set(v___x_4402_, 0, v___x_4404_);
v___x_4406_ = v___x_4402_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v___x_4404_);
v___x_4406_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4407_, 0, v___x_4406_);
v___x_4408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4386_, v___x_4387_, v___x_4407_, v___f_4388_);
return v___x_4408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___x_4413_, lean_object* v___f_4414_, lean_object* v___x_4415_, lean_object* v___x_4416_, lean_object* v___f_4417_, lean_object* v_x_4418_, lean_object* v___y_4419_){
_start:
{
uint8_t v___x_18879__boxed_4420_; lean_object* v_res_4421_; 
v___x_18879__boxed_4420_ = lean_unbox(v___x_4416_);
v_res_4421_ = l_Lasm_Fetch_serveNode___lam__18(v___y_4411_, v___y_4412_, v___x_4413_, v___f_4414_, v___x_4415_, v___x_18879__boxed_4420_, v___f_4417_, v_x_4418_);
return v_res_4421_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_4422_; uint8_t v___x_4423_; uint64_t v___x_4424_; 
v___x_4422_ = 8ULL;
v___x_4423_ = 0;
v___x_4424_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4423_, v___x_4422_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_4425_, lean_object* v_name_4426_, lean_object* v_args_4427_){
_start:
{
lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; uint64_t v___x_4432_; lean_object* v___x_4433_; 
v___x_4429_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4430_, 0, v_o_4425_);
lean_ctor_set(v___x_4430_, 1, v___x_4429_);
lean_inc_ref(v_name_4426_);
v___x_4431_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4431_, 0, v_name_4426_);
v___x_4432_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_4433_ = l_Lasm_JS_Value_invokeRaw(v___x_4430_, v___x_4431_, v_args_4427_, v___x_4432_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_a_4434_);
lean_dec_ref_known(v___x_4433_, 1);
v___x_4435_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4436_ = lean_string_append(v___x_4435_, v_name_4426_);
lean_dec_ref(v_name_4426_);
v___x_4437_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4436_, v_a_4434_);
lean_dec(v_a_4434_);
lean_dec_ref(v___x_4436_);
return v___x_4437_;
}
else
{
lean_dec_ref(v_name_4426_);
return v___x_4433_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_4438_, lean_object* v_name_4439_, lean_object* v_args_4440_, lean_object* v_a_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_4438_, v_name_4439_, v_args_4440_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4444_, uint8_t v___x_4445_, lean_object* v___f_4446_, lean_object* v___x_4447_, lean_object* v_a_4448_, lean_object* v_x_4449_){
_start:
{
lean_object* v_val_4452_; 
if (lean_obj_tag(v_x_4449_) == 0)
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4463_; 
lean_dec(v_a_4448_);
lean_dec_ref(v___f_4446_);
lean_dec(v___x_4444_);
v_a_4455_ = lean_ctor_get(v_x_4449_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_x_4449_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4457_ = v_x_4449_;
v_isShared_4458_ = v_isSharedCheck_4463_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v_x_4449_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4463_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
lean_object* v___x_4461_; 
v___x_4461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4461_, 0, v___x_4460_);
return v___x_4461_;
}
}
}
else
{
lean_object* v_a_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4482_; 
v_a_4464_ = lean_ctor_get(v_x_4449_, 0);
v_isSharedCheck_4482_ = !lean_is_exclusive(v_x_4449_);
if (v_isSharedCheck_4482_ == 0)
{
v___x_4466_ = v_x_4449_;
v_isShared_4467_ = v_isSharedCheck_4482_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_a_4464_);
lean_dec(v_x_4449_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4482_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4468_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4469_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4470_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4470_, 0, v_a_4464_);
lean_ctor_set(v___x_4470_, 1, v___x_4469_);
v___x_4471_ = lean_mk_empty_array_with_capacity(v___x_4447_);
v___x_4472_ = lean_array_push(v___x_4471_, v___x_4470_);
v___x_4473_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_4448_, v___x_4468_, v___x_4472_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; lean_object* v___x_4476_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref_known(v___x_4473_, 1);
if (v_isShared_4467_ == 0)
{
lean_ctor_set(v___x_4466_, 0, v_a_4474_);
v___x_4476_ = v___x_4466_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4477_; 
v_reuseFailAlloc_4477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4477_, 0, v_a_4474_);
v___x_4476_ = v_reuseFailAlloc_4477_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
v_val_4452_ = v___x_4476_;
goto v___jp_4451_;
}
}
else
{
lean_object* v_a_4478_; lean_object* v___x_4480_; 
v_a_4478_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4473_, 1);
if (v_isShared_4467_ == 0)
{
lean_ctor_set_tag(v___x_4466_, 0);
lean_ctor_set(v___x_4466_, 0, v_a_4478_);
v___x_4480_ = v___x_4466_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4481_; 
v_reuseFailAlloc_4481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4481_, 0, v_a_4478_);
v___x_4480_ = v_reuseFailAlloc_4481_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
v_val_4452_ = v___x_4480_;
goto v___jp_4451_;
}
}
}
}
v___jp_4451_:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4453_, 0, v_val_4452_);
v___x_4454_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4444_, v___x_4445_, v___x_4453_, v___f_4446_);
return v___x_4454_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4483_, lean_object* v___x_4484_, lean_object* v___f_4485_, lean_object* v___x_4486_, lean_object* v_a_4487_, lean_object* v_x_4488_, lean_object* v___y_4489_){
_start:
{
uint8_t v___x_18978__boxed_4490_; lean_object* v_res_4491_; 
v___x_18978__boxed_4490_ = lean_unbox(v___x_4484_);
v_res_4491_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4483_, v___x_18978__boxed_4490_, v___f_4485_, v___x_4486_, v_a_4487_, v_x_4488_);
lean_dec(v___x_4486_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___x_4494_, lean_object* v___x_4495_, lean_object* v___x_4496_, uint8_t v___x_4497_, lean_object* v___f_4498_, lean_object* v_x_4499_){
_start:
{
if (lean_obj_tag(v_x_4499_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4509_; 
lean_dec_ref(v___f_4498_);
lean_dec(v___x_4496_);
lean_dec_ref(v___x_4495_);
lean_dec_ref(v___x_4494_);
lean_dec_ref(v___y_4493_);
lean_dec_ref(v___y_4492_);
v_a_4501_ = lean_ctor_get(v_x_4499_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v_x_4499_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4503_ = v_x_4499_;
v_isShared_4504_ = v_isSharedCheck_4509_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v_x_4499_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4509_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
lean_object* v___x_4507_; 
v___x_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
return v___x_4507_;
}
}
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4520_; 
v_a_4510_ = lean_ctor_get(v_x_4499_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v_x_4499_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4512_ = v_x_4499_;
v_isShared_4513_ = v_isSharedCheck_4520_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v_x_4499_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4520_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4514_; lean_object* v___x_4516_; 
v___x_4514_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4514_, 0, v___y_4492_);
lean_ctor_set(v___x_4514_, 1, v___y_4493_);
lean_ctor_set(v___x_4514_, 2, v___x_4494_);
lean_ctor_set(v___x_4514_, 3, v___x_4495_);
lean_ctor_set(v___x_4514_, 4, v_a_4510_);
if (v_isShared_4513_ == 0)
{
lean_ctor_set(v___x_4512_, 0, v___x_4514_);
v___x_4516_ = v___x_4512_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v___x_4514_);
v___x_4516_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4516_);
v___x_4518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4496_, v___x_4497_, v___x_4517_, v___f_4498_);
return v___x_4518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___x_4523_, lean_object* v___x_4524_, lean_object* v___x_4525_, lean_object* v___x_4526_, lean_object* v___f_4527_, lean_object* v_x_4528_, lean_object* v___y_4529_){
_start:
{
uint8_t v___x_19068__boxed_4530_; lean_object* v_res_4531_; 
v___x_19068__boxed_4530_ = lean_unbox(v___x_4526_);
v_res_4531_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4521_, v___y_4522_, v___x_4523_, v___x_4524_, v___x_4525_, v___x_19068__boxed_4530_, v___f_4527_, v_x_4528_);
return v_res_4531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4532_, uint8_t v___x_4533_, lean_object* v___f_4534_, lean_object* v_x_4535_){
_start:
{
lean_object* v_val_4538_; 
if (lean_obj_tag(v_x_4535_) == 0)
{
lean_object* v_a_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4549_; 
lean_dec_ref(v___f_4534_);
lean_dec(v___x_4532_);
v_a_4541_ = lean_ctor_get(v_x_4535_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v_x_4535_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4543_ = v_x_4535_;
v_isShared_4544_ = v_isSharedCheck_4549_;
goto v_resetjp_4542_;
}
else
{
lean_inc(v_a_4541_);
lean_dec(v_x_4535_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4549_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4546_; 
if (v_isShared_4544_ == 0)
{
v___x_4546_ = v___x_4543_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4541_);
v___x_4546_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
lean_object* v___x_4547_; 
v___x_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4546_);
return v___x_4547_;
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4563_; 
v_a_4550_ = lean_ctor_get(v_x_4535_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v_x_4535_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4552_ = v_x_4535_;
v_isShared_4553_ = v_isSharedCheck_4563_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v_x_4535_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4563_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4554_; 
v___x_4554_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4550_);
if (lean_obj_tag(v___x_4554_) == 0)
{
lean_object* v_a_4555_; lean_object* v___x_4557_; 
v_a_4555_ = lean_ctor_get(v___x_4554_, 0);
lean_inc(v_a_4555_);
lean_dec_ref_known(v___x_4554_, 1);
if (v_isShared_4553_ == 0)
{
lean_ctor_set(v___x_4552_, 0, v_a_4555_);
v___x_4557_ = v___x_4552_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4555_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
v_val_4538_ = v___x_4557_;
goto v___jp_4537_;
}
}
else
{
lean_object* v_a_4559_; lean_object* v___x_4561_; 
v_a_4559_ = lean_ctor_get(v___x_4554_, 0);
lean_inc(v_a_4559_);
lean_dec_ref_known(v___x_4554_, 1);
if (v_isShared_4553_ == 0)
{
lean_ctor_set_tag(v___x_4552_, 0);
lean_ctor_set(v___x_4552_, 0, v_a_4559_);
v___x_4561_ = v___x_4552_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4559_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
v_val_4538_ = v___x_4561_;
goto v___jp_4537_;
}
}
}
}
v___jp_4537_:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v_val_4538_);
v___x_4540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4532_, v___x_4533_, v___x_4539_, v___f_4534_);
return v___x_4540_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4564_, lean_object* v___x_4565_, lean_object* v___f_4566_, lean_object* v_x_4567_, lean_object* v___y_4568_){
_start:
{
uint8_t v___x_19131__boxed_4569_; lean_object* v_res_4570_; 
v___x_19131__boxed_4569_ = lean_unbox(v___x_4565_);
v_res_4570_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4564_, v___x_19131__boxed_4569_, v___f_4566_, v_x_4567_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4571_, lean_object* v_range_4572_, lean_object* v_b_4573_, lean_object* v_i_4574_){
_start:
{
lean_object* v_stop_4575_; lean_object* v_step_4576_; uint8_t v___x_4577_; 
v_stop_4575_ = lean_ctor_get(v_range_4572_, 1);
v_step_4576_ = lean_ctor_get(v_range_4572_, 2);
v___x_4577_ = lean_nat_dec_lt(v_i_4574_, v_stop_4575_);
if (v___x_4577_ == 0)
{
lean_dec(v_i_4574_);
return v_b_4573_;
}
else
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4578_ = lean_unsigned_to_nat(2u);
v___x_4579_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4580_ = lean_unsigned_to_nat(1u);
v___x_4581_ = lean_nat_mul(v___x_4578_, v_i_4574_);
v___x_4582_ = lean_array_get_borrowed(v___x_4579_, v___y_4571_, v___x_4581_);
v___x_4583_ = lean_nat_add(v___x_4581_, v___x_4580_);
lean_dec(v___x_4581_);
v___x_4584_ = lean_array_get_borrowed(v___x_4579_, v___y_4571_, v___x_4583_);
lean_dec(v___x_4583_);
lean_inc(v___x_4584_);
lean_inc(v___x_4582_);
v___x_4585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4582_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___x_4586_ = lean_array_push(v_b_4573_, v___x_4585_);
v___x_4587_ = lean_nat_add(v_i_4574_, v_step_4576_);
lean_dec(v_i_4574_);
v_b_4573_ = v___x_4586_;
v_i_4574_ = v___x_4587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4589_, lean_object* v_range_4590_, lean_object* v_b_4591_, lean_object* v_i_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4589_, v_range_4590_, v_b_4591_, v_i_4592_);
lean_dec_ref(v_range_4590_);
lean_dec_ref(v___y_4589_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4594_, size_t v_i_4595_, size_t v_stop_4596_, lean_object* v_b_4597_){
_start:
{
lean_object* v___y_4599_; uint8_t v___x_4603_; 
v___x_4603_ = lean_usize_dec_eq(v_i_4595_, v_stop_4596_);
if (v___x_4603_ == 0)
{
lean_object* v___x_4604_; 
v___x_4604_ = lean_array_uget_borrowed(v_as_4594_, v_i_4595_);
if (lean_obj_tag(v___x_4604_) == 4)
{
lean_object* v_s_4605_; lean_object* v___x_4606_; 
v_s_4605_ = lean_ctor_get(v___x_4604_, 0);
lean_inc_ref(v_s_4605_);
v___x_4606_ = lean_array_push(v_b_4597_, v_s_4605_);
v___y_4599_ = v___x_4606_;
goto v___jp_4598_;
}
else
{
v___y_4599_ = v_b_4597_;
goto v___jp_4598_;
}
}
else
{
return v_b_4597_;
}
v___jp_4598_:
{
size_t v___x_4600_; size_t v___x_4601_; 
v___x_4600_ = ((size_t)1ULL);
v___x_4601_ = lean_usize_add(v_i_4595_, v___x_4600_);
v_i_4595_ = v___x_4601_;
v_b_4597_ = v___y_4599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4607_, lean_object* v_i_4608_, lean_object* v_stop_4609_, lean_object* v_b_4610_){
_start:
{
size_t v_i_boxed_4611_; size_t v_stop_boxed_4612_; lean_object* v_res_4613_; 
v_i_boxed_4611_ = lean_unbox_usize(v_i_4608_);
lean_dec(v_i_4608_);
v_stop_boxed_4612_ = lean_unbox_usize(v_stop_4609_);
lean_dec(v_stop_4609_);
v_res_4613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4607_, v_i_boxed_4611_, v_stop_boxed_4612_, v_b_4610_);
lean_dec_ref(v_as_4607_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4614_, lean_object* v_start_4615_, lean_object* v_stop_4616_){
_start:
{
lean_object* v___x_4617_; uint8_t v___x_4618_; 
v___x_4617_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4618_ = lean_nat_dec_lt(v_start_4615_, v_stop_4616_);
if (v___x_4618_ == 0)
{
return v___x_4617_;
}
else
{
lean_object* v___x_4619_; uint8_t v___x_4620_; 
v___x_4619_ = lean_array_get_size(v_as_4614_);
v___x_4620_ = lean_nat_dec_le(v_stop_4616_, v___x_4619_);
if (v___x_4620_ == 0)
{
uint8_t v___x_4621_; 
v___x_4621_ = lean_nat_dec_lt(v_start_4615_, v___x_4619_);
if (v___x_4621_ == 0)
{
return v___x_4617_;
}
else
{
size_t v___x_4622_; size_t v___x_4623_; lean_object* v___x_4624_; 
v___x_4622_ = lean_usize_of_nat(v_start_4615_);
v___x_4623_ = lean_usize_of_nat(v___x_4619_);
v___x_4624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4614_, v___x_4622_, v___x_4623_, v___x_4617_);
return v___x_4624_;
}
}
else
{
size_t v___x_4625_; size_t v___x_4626_; lean_object* v___x_4627_; 
v___x_4625_ = lean_usize_of_nat(v_start_4615_);
v___x_4626_ = lean_usize_of_nat(v_stop_4616_);
v___x_4627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4614_, v___x_4625_, v___x_4626_, v___x_4617_);
return v___x_4627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4628_, lean_object* v_start_4629_, lean_object* v_stop_4630_){
_start:
{
lean_object* v_res_4631_; 
v_res_4631_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4628_, v_start_4629_, v_stop_4630_);
lean_dec(v_stop_4630_);
lean_dec(v_start_4629_);
lean_dec_ref(v_as_4628_);
return v_res_4631_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4634_, size_t v_i_4635_, size_t v_stop_4636_){
_start:
{
uint8_t v___x_4637_; 
v___x_4637_ = lean_usize_dec_eq(v_i_4635_, v_stop_4636_);
if (v___x_4637_ == 0)
{
lean_object* v___x_4638_; lean_object* v_fst_4639_; uint8_t v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; uint8_t v___x_4643_; 
v___x_4638_ = lean_array_uget_borrowed(v_as_4634_, v_i_4635_);
v_fst_4639_ = lean_ctor_get(v___x_4638_, 0);
v___x_4640_ = 1;
lean_inc(v_fst_4639_);
v___x_4641_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4639_);
v___x_4642_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4643_ = lean_string_dec_eq(v___x_4641_, v___x_4642_);
if (v___x_4643_ == 0)
{
lean_object* v___x_4644_; uint8_t v___x_4645_; 
v___x_4644_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4645_ = lean_string_dec_eq(v___x_4641_, v___x_4644_);
lean_dec_ref(v___x_4641_);
if (v___x_4645_ == 0)
{
size_t v___x_4646_; size_t v___x_4647_; 
v___x_4646_ = ((size_t)1ULL);
v___x_4647_ = lean_usize_add(v_i_4635_, v___x_4646_);
v_i_4635_ = v___x_4647_;
goto _start;
}
else
{
return v___x_4640_;
}
}
else
{
lean_dec_ref(v___x_4641_);
return v___x_4640_;
}
}
else
{
uint8_t v___x_4649_; 
v___x_4649_ = 0;
return v___x_4649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4650_, lean_object* v_i_4651_, lean_object* v_stop_4652_){
_start:
{
size_t v_i_boxed_4653_; size_t v_stop_boxed_4654_; uint8_t v_res_4655_; lean_object* v_r_4656_; 
v_i_boxed_4653_ = lean_unbox_usize(v_i_4651_);
lean_dec(v_i_4651_);
v_stop_boxed_4654_ = lean_unbox_usize(v_stop_4652_);
lean_dec(v_stop_4652_);
v_res_4655_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4650_, v_i_boxed_4653_, v_stop_boxed_4654_);
lean_dec_ref(v_as_4650_);
v_r_4656_ = lean_box(v_res_4655_);
return v_r_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4658_, size_t v_sz_4659_, size_t v_i_4660_, lean_object* v_b_4661_){
_start:
{
uint8_t v___x_4662_; 
v___x_4662_ = lean_usize_dec_lt(v_i_4660_, v_sz_4659_);
if (v___x_4662_ == 0)
{
lean_inc_ref(v_b_4661_);
return v_b_4661_;
}
else
{
lean_object* v_a_4663_; lean_object* v_fst_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; uint8_t v___x_4668_; 
v_a_4663_ = lean_array_uget_borrowed(v_as_4658_, v_i_4660_);
v_fst_4664_ = lean_ctor_get(v_a_4663_, 0);
v___x_4665_ = lean_box(0);
lean_inc(v_fst_4664_);
v___x_4666_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4664_);
v___x_4667_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4668_ = lean_string_dec_eq(v___x_4666_, v___x_4667_);
lean_dec_ref(v___x_4666_);
if (v___x_4668_ == 0)
{
lean_object* v___x_4669_; size_t v___x_4670_; size_t v___x_4671_; 
v___x_4669_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4670_ = ((size_t)1ULL);
v___x_4671_ = lean_usize_add(v_i_4660_, v___x_4670_);
v_i_4660_ = v___x_4671_;
v_b_4661_ = v___x_4669_;
goto _start;
}
else
{
lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; 
lean_inc(v_a_4663_);
v___x_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4673_, 0, v_a_4663_);
v___x_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4673_);
v___x_4675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
lean_ctor_set(v___x_4675_, 1, v___x_4665_);
return v___x_4675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4676_, lean_object* v_sz_4677_, lean_object* v_i_4678_, lean_object* v_b_4679_){
_start:
{
size_t v_sz_boxed_4680_; size_t v_i_boxed_4681_; lean_object* v_res_4682_; 
v_sz_boxed_4680_ = lean_unbox_usize(v_sz_4677_);
lean_dec(v_sz_4677_);
v_i_boxed_4681_ = lean_unbox_usize(v_i_4678_);
lean_dec(v_i_4678_);
v_res_4682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4676_, v_sz_boxed_4680_, v_i_boxed_4681_, v_b_4679_);
lean_dec_ref(v_b_4679_);
lean_dec_ref(v_as_4676_);
return v_res_4682_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4685_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4686_ = lean_string_utf8_byte_size(v___x_4685_);
return v___x_4686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4689_, lean_object* v___f_4690_, lean_object* v___f_4691_, lean_object* v_handler_4692_, lean_object* v_options_4693_, lean_object* v_a_4694_, lean_object* v_fst_4695_, lean_object* v_a_4696_, lean_object* v___y_4697_, lean_object* v___x_4698_, lean_object* v___x_4699_, lean_object* v___x_4700_, lean_object* v_x_4701_){
_start:
{
uint8_t v___y_4704_; lean_object* v___y_4705_; lean_object* v___y_4706_; lean_object* v_val_4707_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___y_4718_; lean_object* v___y_4719_; uint8_t v___y_4720_; lean_object* v___y_4721_; lean_object* v___y_4722_; lean_object* v___y_4723_; lean_object* v___y_4724_; lean_object* v___y_4772_; lean_object* v___y_4773_; lean_object* v___y_4774_; lean_object* v___y_4775_; lean_object* v___y_4776_; lean_object* v___y_4777_; lean_object* v___y_4778_; lean_object* v___y_4779_; lean_object* v___y_4780_; lean_object* v___y_4781_; lean_object* v___y_4782_; lean_object* v___y_4783_; lean_object* v___y_4784_; lean_object* v___y_4785_; uint8_t v___y_4786_; lean_object* v___y_4796_; lean_object* v___y_4797_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v___y_4800_; lean_object* v___y_4801_; lean_object* v___y_4802_; lean_object* v___y_4803_; lean_object* v___y_4804_; lean_object* v___y_4805_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v___y_4808_; lean_object* v___y_4809_; lean_object* v___y_4816_; lean_object* v___y_4817_; lean_object* v___y_4818_; lean_object* v___y_4819_; lean_object* v___y_4820_; lean_object* v___y_4821_; lean_object* v___y_4822_; lean_object* v___y_4823_; lean_object* v___y_4824_; lean_object* v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4833_; lean_object* v___y_4834_; lean_object* v___y_4835_; lean_object* v___y_4836_; 
if (lean_obj_tag(v_x_4701_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4863_; 
lean_dec(v___y_4697_);
lean_dec(v_a_4696_);
lean_dec(v_fst_4695_);
lean_dec(v_a_4694_);
lean_dec_ref(v_options_4693_);
lean_dec_ref(v_handler_4692_);
lean_dec_ref(v___f_4691_);
lean_dec_ref(v___f_4690_);
lean_dec(v_snd_4689_);
v_a_4855_ = lean_ctor_get(v_x_4701_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v_x_4701_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4857_ = v_x_4701_;
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v_x_4701_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4860_; 
if (v_isShared_4858_ == 0)
{
v___x_4860_ = v___x_4857_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v_a_4855_);
v___x_4860_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
lean_object* v___x_4861_; 
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
return v___x_4861_;
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___y_4866_; lean_object* v___y_4867_; lean_object* v___y_4875_; lean_object* v___x_4879_; 
v_a_4864_ = lean_ctor_get(v_x_4701_, 0);
lean_inc(v_a_4864_);
lean_dec_ref_known(v_x_4701_, 1);
v___x_4879_ = l_Lasm_JS_Data_field(v_a_4864_, v___x_4700_);
if (lean_obj_tag(v___x_4879_) == 4)
{
lean_object* v_s_4880_; 
v_s_4880_ = lean_ctor_get(v___x_4879_, 0);
lean_inc_ref(v_s_4880_);
lean_dec_ref_known(v___x_4879_, 1);
v___y_4875_ = v_s_4880_;
goto v___jp_4874_;
}
else
{
lean_object* v___x_4881_; 
lean_dec(v___x_4879_);
v___x_4881_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_4875_ = v___x_4881_;
goto v___jp_4874_;
}
v___jp_4865_:
{
lean_object* v___x_4868_; 
v___x_4868_ = l_Lasm_JS_Data_field(v_a_4864_, v___x_4698_);
lean_dec(v_a_4864_);
if (lean_obj_tag(v___x_4868_) == 7)
{
lean_object* v_items_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v_items_4869_ = lean_ctor_get(v___x_4868_, 0);
lean_inc_ref(v_items_4869_);
lean_dec_ref_known(v___x_4868_, 1);
v___x_4870_ = lean_unsigned_to_nat(0u);
v___x_4871_ = lean_array_get_size(v_items_4869_);
v___x_4872_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4869_, v___x_4870_, v___x_4871_);
lean_dec_ref(v_items_4869_);
lean_inc_ref(v___y_4866_);
v___y_4833_ = v___y_4866_;
v___y_4834_ = v___y_4867_;
v___y_4835_ = v___y_4866_;
v___y_4836_ = v___x_4872_;
goto v___jp_4832_;
}
else
{
lean_object* v___x_4873_; 
lean_dec(v___x_4868_);
v___x_4873_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_4866_);
v___y_4833_ = v___y_4866_;
v___y_4834_ = v___y_4867_;
v___y_4835_ = v___y_4866_;
v___y_4836_ = v___x_4873_;
goto v___jp_4832_;
}
}
v___jp_4874_:
{
lean_object* v___x_4876_; 
v___x_4876_ = l_Lasm_JS_Data_field(v_a_4864_, v___x_4699_);
if (lean_obj_tag(v___x_4876_) == 4)
{
lean_object* v_s_4877_; 
v_s_4877_ = lean_ctor_get(v___x_4876_, 0);
lean_inc_ref(v_s_4877_);
lean_dec_ref_known(v___x_4876_, 1);
v___y_4866_ = v___y_4875_;
v___y_4867_ = v_s_4877_;
goto v___jp_4865_;
}
else
{
lean_object* v___x_4878_; 
lean_dec(v___x_4876_);
v___x_4878_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4866_ = v___y_4875_;
v___y_4867_ = v___x_4878_;
goto v___jp_4865_;
}
}
}
v___jp_4703_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4708_, 0, v_val_4707_);
v___x_4709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4705_, v___y_4704_, v___x_4708_, v___y_4706_);
return v___x_4709_;
}
v___jp_4710_:
{
if (v___y_4720_ == 0)
{
lean_object* v___x_4725_; lean_object* v___f_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4719_);
lean_dec(v___y_4716_);
lean_dec_ref(v___y_4715_);
lean_dec(v___y_4714_);
lean_dec_ref(v___y_4713_);
lean_dec_ref(v___y_4712_);
lean_dec_ref(v___y_4711_);
lean_dec(v_a_4696_);
lean_dec(v_fst_4695_);
lean_dec(v_a_4694_);
lean_dec_ref(v_options_4693_);
v___x_4725_ = l_ByteArray_empty;
v___f_4726_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4727_, 0, v___y_4722_);
lean_ctor_set(v___x_4727_, 1, v___y_4724_);
lean_ctor_set(v___x_4727_, 2, v___y_4717_);
lean_ctor_set(v___x_4727_, 3, v___x_4725_);
lean_ctor_set(v___x_4727_, 4, v___f_4726_);
v___x_4728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
v___x_4729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4728_);
v___x_4730_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4718_, v___y_4720_, v___x_4729_, v___y_4723_);
return v___x_4730_;
}
else
{
lean_object* v___x_4731_; lean_object* v___f_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; uint8_t v___x_4736_; 
lean_dec_ref(v___y_4723_);
lean_dec_ref(v___y_4717_);
v___x_4731_ = l_ByteArray_empty;
v___f_4732_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4724_);
v___x_4733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4733_, 0, v___y_4722_);
lean_ctor_set(v___x_4733_, 1, v___y_4724_);
lean_ctor_set(v___x_4733_, 2, v___y_4719_);
lean_ctor_set(v___x_4733_, 3, v___x_4731_);
lean_ctor_set(v___x_4733_, 4, v___f_4732_);
v___x_4734_ = l_Lasm_Fetch_Request_path(v___x_4733_);
v___x_4735_ = lean_apply_1(v_options_4693_, v___x_4734_);
v___x_4736_ = lean_unbox(v___x_4735_);
if (v___x_4736_ == 0)
{
lean_object* v___f_4737_; lean_object* v___f_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; uint8_t v___x_4742_; lean_object* v___x_4743_; 
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4713_);
lean_dec(v_a_4696_);
lean_inc(v___y_4716_);
v___f_4737_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4737_, 0, v___y_4711_);
lean_closure_set(v___f_4737_, 1, v___y_4724_);
lean_closure_set(v___f_4737_, 2, v___y_4712_);
lean_closure_set(v___f_4737_, 3, v___f_4732_);
lean_closure_set(v___f_4737_, 4, v___y_4716_);
lean_closure_set(v___f_4737_, 5, v___x_4735_);
lean_closure_set(v___f_4737_, 6, v___y_4715_);
v___f_4738_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4738_, 0, v___y_4716_);
lean_closure_set(v___f_4738_, 1, v___x_4735_);
lean_closure_set(v___f_4738_, 2, v___f_4737_);
lean_closure_set(v___f_4738_, 3, v___y_4714_);
lean_closure_set(v___f_4738_, 4, v_a_4694_);
v___x_4739_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4740_ = lean_mk_empty_array_with_capacity(v___y_4718_);
v___x_4741_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4695_, v___x_4739_, v___x_4740_);
v___x_4742_ = lean_unbox(v___x_4735_);
v___x_4743_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4718_, v___x_4742_, v___x_4741_, v___f_4738_);
return v___x_4743_;
}
else
{
uint8_t v___x_4744_; lean_object* v___x_4745_; lean_object* v___f_4746_; lean_object* v___x_4747_; lean_object* v___f_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; 
lean_dec_ref(v___y_4715_);
lean_dec(v___y_4714_);
lean_dec(v_a_4694_);
v___x_4744_ = 0;
v___x_4745_ = lean_box(v___x_4744_);
lean_inc(v___y_4716_);
v___f_4746_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4746_, 0, v___y_4711_);
lean_closure_set(v___f_4746_, 1, v___y_4724_);
lean_closure_set(v___f_4746_, 2, v___y_4712_);
lean_closure_set(v___f_4746_, 3, v___x_4731_);
lean_closure_set(v___f_4746_, 4, v___y_4716_);
lean_closure_set(v___f_4746_, 5, v___x_4745_);
lean_closure_set(v___f_4746_, 6, v___y_4713_);
v___x_4747_ = lean_box(v___x_4744_);
v___f_4748_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4748_, 0, v___y_4716_);
lean_closure_set(v___f_4748_, 1, v___x_4747_);
lean_closure_set(v___f_4748_, 2, v___f_4746_);
v___x_4749_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4750_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4751_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4751_, 0, v_fst_4695_);
lean_ctor_set(v___x_4751_, 1, v___x_4750_);
v___x_4752_ = lean_mk_empty_array_with_capacity(v___y_4721_);
lean_dec(v___y_4721_);
v___x_4753_ = lean_array_push(v___x_4752_, v___x_4751_);
v___x_4754_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4696_, v___x_4749_, v___x_4753_);
if (lean_obj_tag(v___x_4754_) == 0)
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
v_a_4755_ = lean_ctor_get(v___x_4754_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4754_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4754_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4754_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
lean_ctor_set_tag(v___x_4757_, 1);
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
v___y_4704_ = v___x_4744_;
v___y_4705_ = v___y_4718_;
v___y_4706_ = v___f_4748_;
v_val_4707_ = v___x_4760_;
goto v___jp_4703_;
}
}
}
else
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4770_; 
v_a_4763_ = lean_ctor_get(v___x_4754_, 0);
v_isSharedCheck_4770_ = !lean_is_exclusive(v___x_4754_);
if (v_isSharedCheck_4770_ == 0)
{
v___x_4765_ = v___x_4754_;
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v___x_4754_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
lean_ctor_set_tag(v___x_4765_, 0);
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
v___y_4704_ = v___x_4744_;
v___y_4705_ = v___y_4718_;
v___y_4706_ = v___f_4748_;
v_val_4707_ = v___x_4768_;
goto v___jp_4703_;
}
}
}
}
}
}
v___jp_4771_:
{
lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; uint8_t v___x_4790_; 
v___x_4787_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4788_ = lean_string_utf8_byte_size(v___y_4779_);
v___x_4789_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4790_ = lean_nat_dec_le(v___x_4789_, v___x_4788_);
if (v___x_4790_ == 0)
{
lean_dec_ref(v___y_4784_);
v___y_4711_ = v___y_4772_;
v___y_4712_ = v___y_4773_;
v___y_4713_ = v___y_4774_;
v___y_4714_ = v___y_4776_;
v___y_4715_ = v___y_4775_;
v___y_4716_ = v___y_4777_;
v___y_4717_ = v___y_4778_;
v___y_4718_ = v___y_4780_;
v___y_4719_ = v___y_4781_;
v___y_4720_ = v___y_4786_;
v___y_4721_ = v___y_4783_;
v___y_4722_ = v___y_4782_;
v___y_4723_ = v___y_4785_;
v___y_4724_ = v___y_4779_;
goto v___jp_4710_;
}
else
{
uint8_t v___x_4791_; 
v___x_4791_ = lean_string_memcmp(v___y_4779_, v___x_4787_, v___y_4780_, v___y_4780_, v___x_4789_);
if (v___x_4791_ == 0)
{
lean_dec_ref(v___y_4784_);
v___y_4711_ = v___y_4772_;
v___y_4712_ = v___y_4773_;
v___y_4713_ = v___y_4774_;
v___y_4714_ = v___y_4776_;
v___y_4715_ = v___y_4775_;
v___y_4716_ = v___y_4777_;
v___y_4717_ = v___y_4778_;
v___y_4718_ = v___y_4780_;
v___y_4719_ = v___y_4781_;
v___y_4720_ = v___y_4786_;
v___y_4721_ = v___y_4783_;
v___y_4722_ = v___y_4782_;
v___y_4723_ = v___y_4785_;
v___y_4724_ = v___y_4779_;
goto v___jp_4710_;
}
else
{
lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; 
v___x_4792_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4793_ = lean_string_append(v___x_4792_, v___y_4784_);
lean_dec_ref(v___y_4784_);
v___x_4794_ = lean_string_append(v___x_4793_, v___y_4779_);
lean_dec_ref(v___y_4779_);
v___y_4711_ = v___y_4772_;
v___y_4712_ = v___y_4773_;
v___y_4713_ = v___y_4774_;
v___y_4714_ = v___y_4776_;
v___y_4715_ = v___y_4775_;
v___y_4716_ = v___y_4777_;
v___y_4717_ = v___y_4778_;
v___y_4718_ = v___y_4780_;
v___y_4719_ = v___y_4781_;
v___y_4720_ = v___y_4786_;
v___y_4721_ = v___y_4783_;
v___y_4722_ = v___y_4782_;
v___y_4723_ = v___y_4785_;
v___y_4724_ = v___x_4794_;
goto v___jp_4710_;
}
}
}
v___jp_4795_:
{
lean_object* v___x_4810_; uint8_t v___x_4811_; 
v___x_4810_ = lean_array_get_size(v___y_4802_);
v___x_4811_ = lean_nat_dec_lt(v___y_4803_, v___x_4810_);
if (v___x_4811_ == 0)
{
v___y_4772_ = v___y_4796_;
v___y_4773_ = v___y_4797_;
v___y_4774_ = v___y_4798_;
v___y_4775_ = v___y_4800_;
v___y_4776_ = v___y_4799_;
v___y_4777_ = v___y_4801_;
v___y_4778_ = v___y_4802_;
v___y_4779_ = v___y_4804_;
v___y_4780_ = v___y_4803_;
v___y_4781_ = v___y_4805_;
v___y_4782_ = v___y_4807_;
v___y_4783_ = v___y_4806_;
v___y_4784_ = v___y_4809_;
v___y_4785_ = v___y_4808_;
v___y_4786_ = v___x_4811_;
goto v___jp_4771_;
}
else
{
if (v___x_4811_ == 0)
{
v___y_4772_ = v___y_4796_;
v___y_4773_ = v___y_4797_;
v___y_4774_ = v___y_4798_;
v___y_4775_ = v___y_4800_;
v___y_4776_ = v___y_4799_;
v___y_4777_ = v___y_4801_;
v___y_4778_ = v___y_4802_;
v___y_4779_ = v___y_4804_;
v___y_4780_ = v___y_4803_;
v___y_4781_ = v___y_4805_;
v___y_4782_ = v___y_4807_;
v___y_4783_ = v___y_4806_;
v___y_4784_ = v___y_4809_;
v___y_4785_ = v___y_4808_;
v___y_4786_ = v___x_4811_;
goto v___jp_4771_;
}
else
{
size_t v___x_4812_; size_t v___x_4813_; uint8_t v___x_4814_; 
v___x_4812_ = ((size_t)0ULL);
v___x_4813_ = lean_usize_of_nat(v___x_4810_);
v___x_4814_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4802_, v___x_4812_, v___x_4813_);
v___y_4772_ = v___y_4796_;
v___y_4773_ = v___y_4797_;
v___y_4774_ = v___y_4798_;
v___y_4775_ = v___y_4800_;
v___y_4776_ = v___y_4799_;
v___y_4777_ = v___y_4801_;
v___y_4778_ = v___y_4802_;
v___y_4779_ = v___y_4804_;
v___y_4780_ = v___y_4803_;
v___y_4781_ = v___y_4805_;
v___y_4782_ = v___y_4807_;
v___y_4783_ = v___y_4806_;
v___y_4784_ = v___y_4809_;
v___y_4785_ = v___y_4808_;
v___y_4786_ = v___x_4814_;
goto v___jp_4771_;
}
}
}
v___jp_4815_:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; 
v___x_4829_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4830_ = l_Nat_reprFast(v___y_4697_);
v___x_4831_ = lean_string_append(v___x_4829_, v___x_4830_);
lean_dec_ref(v___x_4830_);
v___y_4796_ = v___y_4816_;
v___y_4797_ = v___y_4817_;
v___y_4798_ = v___y_4818_;
v___y_4799_ = v___y_4820_;
v___y_4800_ = v___y_4819_;
v___y_4801_ = v___y_4822_;
v___y_4802_ = v___y_4823_;
v___y_4803_ = v___y_4825_;
v___y_4804_ = v___y_4824_;
v___y_4805_ = v___y_4826_;
v___y_4806_ = v___y_4828_;
v___y_4807_ = v___y_4827_;
v___y_4808_ = v___y_4821_;
v___y_4809_ = v___x_4831_;
goto v___jp_4795_;
}
v___jp_4832_:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; size_t v_sz_4845_; size_t v___x_4846_; lean_object* v___x_4847_; lean_object* v_fst_4848_; lean_object* v___f_4849_; lean_object* v___f_4850_; lean_object* v___f_4851_; 
v___x_4837_ = lean_unsigned_to_nat(0u);
v___x_4838_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4839_ = lean_array_get_size(v___y_4836_);
v___x_4840_ = lean_unsigned_to_nat(1u);
v___x_4841_ = lean_nat_shiftr(v___x_4839_, v___x_4840_);
v___x_4842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4842_, 0, v___x_4837_);
lean_ctor_set(v___x_4842_, 1, v___x_4841_);
lean_ctor_set(v___x_4842_, 2, v___x_4840_);
v___x_4843_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4836_, v___x_4842_, v___x_4838_, v___x_4837_);
lean_dec_ref_known(v___x_4842_, 3);
lean_dec_ref(v___y_4836_);
v___x_4844_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4845_ = lean_array_size(v___x_4843_);
v___x_4846_ = ((size_t)0ULL);
v___x_4847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4843_, v_sz_4845_, v___x_4846_, v___x_4844_);
v_fst_4848_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_fst_4848_);
lean_dec_ref(v___x_4847_);
lean_inc_ref(v___y_4833_);
v___f_4849_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4849_, 0, v___x_4837_);
lean_closure_set(v___f_4849_, 1, v_snd_4689_);
lean_closure_set(v___f_4849_, 2, v___y_4833_);
lean_closure_set(v___f_4849_, 3, v___f_4690_);
lean_closure_set(v___f_4849_, 4, v___f_4691_);
v___f_4850_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4850_, 0, v_handler_4692_);
lean_closure_set(v___f_4850_, 1, v___x_4837_);
lean_closure_set(v___f_4850_, 2, v___f_4849_);
v___f_4851_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4851_, 0, v___f_4850_);
if (lean_obj_tag(v_fst_4848_) == 0)
{
lean_inc_ref_n(v___f_4851_, 2);
lean_inc_ref(v___x_4843_);
v___y_4816_ = v___y_4833_;
v___y_4817_ = v___x_4843_;
v___y_4818_ = v___f_4851_;
v___y_4819_ = v___f_4851_;
v___y_4820_ = v___x_4840_;
v___y_4821_ = v___f_4851_;
v___y_4822_ = v___x_4837_;
v___y_4823_ = v___x_4843_;
v___y_4824_ = v___y_4834_;
v___y_4825_ = v___x_4837_;
v___y_4826_ = v___x_4838_;
v___y_4827_ = v___y_4835_;
v___y_4828_ = v___x_4840_;
goto v___jp_4815_;
}
else
{
lean_object* v_val_4852_; 
v_val_4852_ = lean_ctor_get(v_fst_4848_, 0);
lean_inc(v_val_4852_);
lean_dec_ref_known(v_fst_4848_, 1);
if (lean_obj_tag(v_val_4852_) == 0)
{
lean_inc_ref_n(v___f_4851_, 2);
lean_inc_ref(v___x_4843_);
v___y_4816_ = v___y_4833_;
v___y_4817_ = v___x_4843_;
v___y_4818_ = v___f_4851_;
v___y_4819_ = v___f_4851_;
v___y_4820_ = v___x_4840_;
v___y_4821_ = v___f_4851_;
v___y_4822_ = v___x_4837_;
v___y_4823_ = v___x_4843_;
v___y_4824_ = v___y_4834_;
v___y_4825_ = v___x_4837_;
v___y_4826_ = v___x_4838_;
v___y_4827_ = v___y_4835_;
v___y_4828_ = v___x_4840_;
goto v___jp_4815_;
}
else
{
lean_object* v_val_4853_; lean_object* v_snd_4854_; 
lean_dec(v___y_4697_);
v_val_4853_ = lean_ctor_get(v_val_4852_, 0);
lean_inc(v_val_4853_);
lean_dec_ref_known(v_val_4852_, 1);
v_snd_4854_ = lean_ctor_get(v_val_4853_, 1);
lean_inc(v_snd_4854_);
lean_dec(v_val_4853_);
lean_inc_ref_n(v___f_4851_, 2);
lean_inc_ref(v___x_4843_);
v___y_4796_ = v___y_4833_;
v___y_4797_ = v___x_4843_;
v___y_4798_ = v___f_4851_;
v___y_4799_ = v___x_4840_;
v___y_4800_ = v___f_4851_;
v___y_4801_ = v___x_4837_;
v___y_4802_ = v___x_4843_;
v___y_4803_ = v___x_4837_;
v___y_4804_ = v___y_4834_;
v___y_4805_ = v___x_4838_;
v___y_4806_ = v___x_4840_;
v___y_4807_ = v___y_4835_;
v___y_4808_ = v___f_4851_;
v___y_4809_ = v_snd_4854_;
goto v___jp_4795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4882_, lean_object* v___f_4883_, lean_object* v___f_4884_, lean_object* v_handler_4885_, lean_object* v_options_4886_, lean_object* v_a_4887_, lean_object* v_fst_4888_, lean_object* v_a_4889_, lean_object* v___y_4890_, lean_object* v___x_4891_, lean_object* v___x_4892_, lean_object* v___x_4893_, lean_object* v_x_4894_, lean_object* v___y_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4882_, v___f_4883_, v___f_4884_, v_handler_4885_, v_options_4886_, v_a_4887_, v_fst_4888_, v_a_4889_, v___y_4890_, v___x_4891_, v___x_4892_, v___x_4893_, v_x_4894_);
lean_dec_ref(v___x_4893_);
lean_dec_ref(v___x_4892_);
lean_dec_ref(v___x_4891_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4906_, lean_object* v___f_4907_, lean_object* v_handler_4908_, lean_object* v_options_4909_, lean_object* v_a_4910_, lean_object* v_a_4911_, lean_object* v___y_4912_, lean_object* v_____x_4913_){
_start:
{
lean_object* v_fst_4915_; lean_object* v_snd_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___f_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; uint8_t v___x_4923_; lean_object* v_val_4925_; lean_object* v___x_4928_; 
v_fst_4915_ = lean_ctor_get(v_____x_4913_, 0);
lean_inc_n(v_fst_4915_, 2);
v_snd_4916_ = lean_ctor_get(v_____x_4913_, 1);
lean_inc(v_snd_4916_);
lean_dec_ref(v_____x_4913_);
v___x_4917_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4918_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4919_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4920_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4920_, 0, v_snd_4916_);
lean_closure_set(v___f_4920_, 1, v___f_4906_);
lean_closure_set(v___f_4920_, 2, v___f_4907_);
lean_closure_set(v___f_4920_, 3, v_handler_4908_);
lean_closure_set(v___f_4920_, 4, v_options_4909_);
lean_closure_set(v___f_4920_, 5, v_a_4910_);
lean_closure_set(v___f_4920_, 6, v_fst_4915_);
lean_closure_set(v___f_4920_, 7, v_a_4911_);
lean_closure_set(v___f_4920_, 8, v___y_4912_);
lean_closure_set(v___f_4920_, 9, v___x_4919_);
lean_closure_set(v___f_4920_, 10, v___x_4918_);
lean_closure_set(v___f_4920_, 11, v___x_4917_);
v___x_4921_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4922_ = lean_unsigned_to_nat(0u);
v___x_4923_ = 0;
v___x_4928_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4915_, v___x_4921_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4936_; 
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4931_ = v___x_4928_;
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4928_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
lean_ctor_set_tag(v___x_4931_, 1);
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
v_val_4925_ = v___x_4934_;
goto v___jp_4924_;
}
}
}
else
{
lean_object* v_a_4937_; lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4944_; 
v_a_4937_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4939_ = v___x_4928_;
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
else
{
lean_inc(v_a_4937_);
lean_dec(v___x_4928_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
lean_object* v___x_4942_; 
if (v_isShared_4940_ == 0)
{
lean_ctor_set_tag(v___x_4939_, 0);
v___x_4942_ = v___x_4939_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4937_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
v_val_4925_ = v___x_4942_;
goto v___jp_4924_;
}
}
}
v___jp_4924_:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4926_, 0, v_val_4925_);
v___x_4927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4922_, v___x_4923_, v___x_4926_, v___f_4920_);
return v___x_4927_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4945_, lean_object* v___f_4946_, lean_object* v_handler_4947_, lean_object* v_options_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v___y_4951_, lean_object* v_____x_4952_, lean_object* v___y_4953_){
_start:
{
lean_object* v_res_4954_; 
v_res_4954_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4945_, v___f_4946_, v_handler_4947_, v_options_4948_, v_a_4949_, v_a_4950_, v___y_4951_, v_____x_4952_);
return v_res_4954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4955_, lean_object* v_x_4956_){
_start:
{
if (lean_obj_tag(v_x_4956_) == 0)
{
lean_object* v_a_4958_; lean_object* v___x_4960_; uint8_t v_isShared_4961_; uint8_t v_isSharedCheck_4966_; 
lean_dec_ref(v___f_4955_);
v_a_4958_ = lean_ctor_get(v_x_4956_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v_x_4956_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4960_ = v_x_4956_;
v_isShared_4961_ = v_isSharedCheck_4966_;
goto v_resetjp_4959_;
}
else
{
lean_inc(v_a_4958_);
lean_dec(v_x_4956_);
v___x_4960_ = lean_box(0);
v_isShared_4961_ = v_isSharedCheck_4966_;
goto v_resetjp_4959_;
}
v_resetjp_4959_:
{
lean_object* v___x_4963_; 
if (v_isShared_4961_ == 0)
{
v___x_4963_ = v___x_4960_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_a_4958_);
v___x_4963_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
lean_object* v___x_4964_; 
v___x_4964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
return v___x_4964_;
}
}
}
else
{
lean_object* v_a_4967_; lean_object* v___x_4968_; 
v_a_4967_ = lean_ctor_get(v_x_4956_, 0);
lean_inc(v_a_4967_);
lean_dec_ref_known(v_x_4956_, 1);
v___x_4968_ = lean_apply_2(v___f_4955_, v_a_4967_, lean_box(0));
return v___x_4968_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4969_, lean_object* v_x_4970_, lean_object* v___y_4971_){
_start:
{
lean_object* v_res_4972_; 
v_res_4972_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4969_, v_x_4970_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4980_, lean_object* v___f_4981_, lean_object* v_args_4982_){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; uint8_t v___x_4991_; 
v___x_4989_ = lean_unsigned_to_nat(0u);
v___x_4990_ = lean_array_get_size(v_args_4982_);
v___x_4991_ = lean_nat_dec_lt(v___x_4989_, v___x_4990_);
if (v___x_4991_ == 0)
{
lean_dec_ref(v___f_4981_);
goto v___jp_4984_;
}
else
{
lean_object* v___x_4992_; 
v___x_4992_ = lean_array_fget_borrowed(v_args_4982_, v___x_4989_);
if (lean_obj_tag(v___x_4992_) == 9)
{
lean_object* v_value_4993_; lean_object* v___x_4994_; uint8_t v___x_4995_; 
v_value_4993_ = lean_ctor_get(v___x_4992_, 0);
v___x_4994_ = lean_unsigned_to_nat(1u);
v___x_4995_ = lean_nat_dec_lt(v___x_4994_, v___x_4990_);
if (v___x_4995_ == 0)
{
lean_dec_ref(v___f_4981_);
goto v___jp_4984_;
}
else
{
lean_object* v___x_4996_; 
v___x_4996_ = lean_array_fget(v_args_4982_, v___x_4994_);
if (lean_obj_tag(v___x_4996_) == 9)
{
lean_object* v_value_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5008_; 
lean_dec_ref(v___f_4980_);
v_value_4997_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5008_ == 0)
{
lean_object* v_unused_5009_; 
v_unused_5009_ = lean_ctor_get(v___x_4996_, 1);
lean_dec(v_unused_5009_);
v___x_4999_ = v___x_4996_;
v_isShared_5000_ = v_isSharedCheck_5008_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_value_4997_);
lean_dec(v___x_4996_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5008_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5002_; 
lean_inc(v_value_4993_);
if (v_isShared_5000_ == 0)
{
lean_ctor_set_tag(v___x_4999_, 0);
lean_ctor_set(v___x_4999_, 1, v_value_4997_);
lean_ctor_set(v___x_4999_, 0, v_value_4993_);
v___x_5002_ = v___x_4999_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_value_4993_);
lean_ctor_set(v_reuseFailAlloc_5007_, 1, v_value_4997_);
v___x_5002_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
uint8_t v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; 
v___x_5003_ = 0;
v___x_5004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5004_, 0, v___x_5002_);
v___x_5005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5005_, 0, v___x_5004_);
v___x_5006_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4989_, v___x_5003_, v___x_5005_, v___f_4981_);
return v___x_5006_;
}
}
}
else
{
lean_dec(v___x_4996_);
lean_dec_ref(v___f_4981_);
goto v___jp_4984_;
}
}
}
else
{
lean_dec_ref(v___f_4981_);
goto v___jp_4984_;
}
}
v___jp_4984_:
{
lean_object* v___x_4985_; uint8_t v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; 
v___x_4985_ = lean_unsigned_to_nat(0u);
v___x_4986_ = 0;
v___x_4987_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4985_, v___x_4986_, v___x_4987_, v___f_4980_);
return v___x_4988_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_5010_, lean_object* v___f_5011_, lean_object* v_args_5012_, lean_object* v___y_5013_){
_start:
{
lean_object* v_res_5014_; 
v_res_5014_ = l_Lasm_Fetch_serveNode___lam__22(v___f_5010_, v___f_5011_, v_args_5012_);
lean_dec_ref(v_args_5012_);
return v_res_5014_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_5015_){
_start:
{
lean_object* v___x_5017_; lean_object* v_putStr_5018_; lean_object* v___x_5019_; 
v___x_5017_ = lean_get_stdout();
v_putStr_5018_ = lean_ctor_get(v___x_5017_, 4);
lean_inc_ref(v_putStr_5018_);
lean_dec_ref(v___x_5017_);
v___x_5019_ = lean_apply_2(v_putStr_5018_, v_s_5015_, lean_box(0));
return v___x_5019_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_5020_, lean_object* v_a_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_5020_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_5023_){
_start:
{
uint32_t v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
v___x_5025_ = 10;
v___x_5026_ = lean_string_push(v_s_5023_, v___x_5025_);
v___x_5027_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5026_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5028_, lean_object* v_a_5029_){
_start:
{
lean_object* v_res_5030_; 
v_res_5030_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5028_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___f_5035_, lean_object* v_x_5036_){
_start:
{
lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; uint8_t v___x_5045_; lean_object* v_val_5047_; lean_object* v___x_5050_; 
v___x_5038_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5039_ = lean_string_append(v___x_5038_, v___y_5033_);
v___x_5040_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5041_ = lean_string_append(v___x_5039_, v___x_5040_);
v___x_5042_ = l_Nat_reprFast(v___y_5034_);
v___x_5043_ = lean_string_append(v___x_5041_, v___x_5042_);
lean_dec_ref(v___x_5042_);
v___x_5044_ = lean_unsigned_to_nat(0u);
v___x_5045_ = 0;
v___x_5050_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5043_);
if (lean_obj_tag(v___x_5050_) == 0)
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
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
lean_ctor_set_tag(v___x_5053_, 1);
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
v_val_5047_ = v___x_5056_;
goto v___jp_5046_;
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
v_a_5059_ = lean_ctor_get(v___x_5050_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5050_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5061_ = v___x_5050_;
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5050_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5064_; 
if (v_isShared_5062_ == 0)
{
lean_ctor_set_tag(v___x_5061_, 0);
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
v_val_5047_ = v___x_5064_;
goto v___jp_5046_;
}
}
}
v___jp_5046_:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5048_, 0, v_val_5047_);
v___x_5049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5044_, v___x_5045_, v___x_5048_, v___f_5035_);
return v___x_5049_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___f_5069_, lean_object* v_x_5070_, lean_object* v___y_5071_){
_start:
{
lean_object* v_res_5072_; 
v_res_5072_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5067_, v___y_5068_, v___f_5069_, v_x_5070_);
lean_dec_ref(v_x_5070_);
lean_dec_ref(v___y_5067_);
return v_res_5072_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; 
v___x_5074_ = lean_unsigned_to_nat(0u);
v___x_5075_ = lean_nat_to_int(v___x_5074_);
return v___x_5075_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5076_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5077_ = lean_nat_abs(v___x_5076_);
return v___x_5077_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; uint8_t v___x_5080_; 
v___x_5078_ = lean_cstr_to_nat("9007199254740991");
v___x_5079_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_5080_ = lean_nat_dec_le(v___x_5079_, v___x_5078_);
return v___x_5080_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5081_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5082_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5082_, 0, v___x_5081_);
return v___x_5082_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_5083_; double v___x_5084_; 
v___x_5083_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5084_ = l_Float_ofInt(v___x_5083_);
return v___x_5084_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_5085_; lean_object* v___x_5086_; 
v___x_5085_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_5086_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5086_, 0, v___x_5085_);
return v___x_5086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_5087_, lean_object* v___x_5088_, lean_object* v_a_5089_, lean_object* v_x_5090_){
_start:
{
uint8_t v___y_5093_; lean_object* v___y_5094_; lean_object* v_val_5095_; lean_object* v___x_5098_; lean_object* v___y_5100_; uint8_t v___x_5121_; 
v___x_5098_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_5121_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_5121_ == 0)
{
lean_object* v___x_5122_; 
v___x_5122_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_5100_ = v___x_5122_;
goto v___jp_5099_;
}
else
{
lean_object* v___x_5123_; 
v___x_5123_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_5100_ = v___x_5123_;
goto v___jp_5099_;
}
v___jp_5092_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; 
v___x_5096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5096_, 0, v_val_5095_);
v___x_5097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5094_, v___y_5093_, v___x_5096_, v___f_5087_);
return v___x_5097_;
}
v___jp_5099_:
{
lean_object* v___x_5101_; lean_object* v___x_5102_; uint8_t v___x_5103_; lean_object* v___x_5104_; 
lean_inc(v___y_5100_);
v___x_5101_ = lean_array_push(v___x_5088_, v___y_5100_);
v___x_5102_ = lean_unsigned_to_nat(0u);
v___x_5103_ = 0;
v___x_5104_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5089_, v___x_5098_, v___x_5101_);
if (lean_obj_tag(v___x_5104_) == 0)
{
lean_object* v_a_5105_; lean_object* v___x_5107_; uint8_t v_isShared_5108_; uint8_t v_isSharedCheck_5112_; 
v_a_5105_ = lean_ctor_get(v___x_5104_, 0);
v_isSharedCheck_5112_ = !lean_is_exclusive(v___x_5104_);
if (v_isSharedCheck_5112_ == 0)
{
v___x_5107_ = v___x_5104_;
v_isShared_5108_ = v_isSharedCheck_5112_;
goto v_resetjp_5106_;
}
else
{
lean_inc(v_a_5105_);
lean_dec(v___x_5104_);
v___x_5107_ = lean_box(0);
v_isShared_5108_ = v_isSharedCheck_5112_;
goto v_resetjp_5106_;
}
v_resetjp_5106_:
{
lean_object* v___x_5110_; 
if (v_isShared_5108_ == 0)
{
lean_ctor_set_tag(v___x_5107_, 1);
v___x_5110_ = v___x_5107_;
goto v_reusejp_5109_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v_a_5105_);
v___x_5110_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5109_;
}
v_reusejp_5109_:
{
v___y_5093_ = v___x_5103_;
v___y_5094_ = v___x_5102_;
v_val_5095_ = v___x_5110_;
goto v___jp_5092_;
}
}
}
else
{
lean_object* v_a_5113_; lean_object* v___x_5115_; uint8_t v_isShared_5116_; uint8_t v_isSharedCheck_5120_; 
v_a_5113_ = lean_ctor_get(v___x_5104_, 0);
v_isSharedCheck_5120_ = !lean_is_exclusive(v___x_5104_);
if (v_isSharedCheck_5120_ == 0)
{
v___x_5115_ = v___x_5104_;
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
else
{
lean_inc(v_a_5113_);
lean_dec(v___x_5104_);
v___x_5115_ = lean_box(0);
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
v_resetjp_5114_:
{
lean_object* v___x_5118_; 
if (v_isShared_5116_ == 0)
{
lean_ctor_set_tag(v___x_5115_, 0);
v___x_5118_ = v___x_5115_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v_a_5113_);
v___x_5118_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
v___y_5093_ = v___x_5103_;
v___y_5094_ = v___x_5102_;
v_val_5095_ = v___x_5118_;
goto v___jp_5092_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_5124_, lean_object* v___x_5125_, lean_object* v_a_5126_, lean_object* v_x_5127_, lean_object* v___y_5128_){
_start:
{
lean_object* v_res_5129_; 
v_res_5129_ = l_Lasm_Fetch_serveNode___lam__23(v___f_5124_, v___x_5125_, v_a_5126_, v_x_5127_);
lean_dec_ref(v_x_5127_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5130_, lean_object* v___x_5131_, lean_object* v___x_5132_, lean_object* v___f_5133_, lean_object* v_a_5134_, lean_object* v_x_5135_){
_start:
{
lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; lean_object* v_val_5143_; lean_object* v___x_5146_; 
v___x_5137_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5138_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5138_, 0, v_a_5130_);
lean_ctor_set(v___x_5138_, 1, v___x_5131_);
v___x_5139_ = lean_array_push(v___x_5132_, v___x_5138_);
v___x_5140_ = lean_unsigned_to_nat(0u);
v___x_5141_ = 0;
v___x_5146_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5134_, v___x_5137_, v___x_5139_);
if (lean_obj_tag(v___x_5146_) == 0)
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
v_a_5147_ = lean_ctor_get(v___x_5146_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5146_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_5146_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5146_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
lean_ctor_set_tag(v___x_5149_, 1);
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
v_val_5143_ = v___x_5152_;
goto v___jp_5142_;
}
}
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5162_; 
v_a_5155_ = lean_ctor_get(v___x_5146_, 0);
v_isSharedCheck_5162_ = !lean_is_exclusive(v___x_5146_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5157_ = v___x_5146_;
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v___x_5146_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5160_; 
if (v_isShared_5158_ == 0)
{
lean_ctor_set_tag(v___x_5157_, 0);
v___x_5160_ = v___x_5157_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5155_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
v_val_5143_ = v___x_5160_;
goto v___jp_5142_;
}
}
}
v___jp_5142_:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5144_, 0, v_val_5143_);
v___x_5145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5140_, v___x_5141_, v___x_5144_, v___f_5133_);
return v___x_5145_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5163_, lean_object* v___x_5164_, lean_object* v___x_5165_, lean_object* v___f_5166_, lean_object* v_a_5167_, lean_object* v_x_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5163_, v___x_5164_, v___x_5165_, v___f_5166_, v_a_5167_, v_x_5168_);
lean_dec_ref(v_x_5168_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5172_, lean_object* v_a_5173_, lean_object* v_as_x27_5174_, lean_object* v_b_5175_){
_start:
{
if (lean_obj_tag(v_as_x27_5174_) == 0)
{
lean_object* v___x_5177_; 
lean_dec(v_a_5173_);
lean_dec(v_a_5172_);
v___x_5177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5177_, 0, v_b_5175_);
return v___x_5177_;
}
else
{
lean_object* v_head_5178_; lean_object* v_tail_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; 
v_head_5178_ = lean_ctor_get(v_as_x27_5174_, 0);
v_tail_5179_ = lean_ctor_get(v_as_x27_5174_, 1);
v___x_5180_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5181_ = lean_box(0);
v___x_5182_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5178_);
v___x_5183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5183_, 0, v_head_5178_);
lean_inc(v_a_5172_);
v___x_5184_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5184_, 0, v_a_5172_);
lean_ctor_set(v___x_5184_, 1, v___x_5180_);
v___x_5185_ = lean_unsigned_to_nat(2u);
v___x_5186_ = lean_mk_empty_array_with_capacity(v___x_5185_);
v___x_5187_ = lean_array_push(v___x_5186_, v___x_5183_);
v___x_5188_ = lean_array_push(v___x_5187_, v___x_5184_);
lean_inc(v_a_5173_);
v___x_5189_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5173_, v___x_5182_, v___x_5188_);
if (lean_obj_tag(v___x_5189_) == 0)
{
lean_dec_ref_known(v___x_5189_, 1);
v_as_x27_5174_ = v_tail_5179_;
v_b_5175_ = v___x_5181_;
goto _start;
}
else
{
lean_object* v_a_5191_; lean_object* v___x_5193_; uint8_t v_isShared_5194_; uint8_t v_isSharedCheck_5198_; 
lean_dec(v_a_5173_);
lean_dec(v_a_5172_);
v_a_5191_ = lean_ctor_get(v___x_5189_, 0);
v_isSharedCheck_5198_ = !lean_is_exclusive(v___x_5189_);
if (v_isSharedCheck_5198_ == 0)
{
v___x_5193_ = v___x_5189_;
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
else
{
lean_inc(v_a_5191_);
lean_dec(v___x_5189_);
v___x_5193_ = lean_box(0);
v_isShared_5194_ = v_isSharedCheck_5198_;
goto v_resetjp_5192_;
}
v_resetjp_5192_:
{
lean_object* v___x_5196_; 
if (v_isShared_5194_ == 0)
{
v___x_5196_ = v___x_5193_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v_a_5191_);
v___x_5196_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
return v___x_5196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5199_, lean_object* v_a_5200_, lean_object* v_as_x27_5201_, lean_object* v_b_5202_, lean_object* v___y_5203_){
_start:
{
lean_object* v_res_5204_; 
v_res_5204_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5199_, v_a_5200_, v_as_x27_5201_, v_b_5202_);
lean_dec(v_as_x27_5201_);
return v_res_5204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5206_){
_start:
{
uint32_t v___x_5208_; uint32_t v___x_5209_; uint64_t v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; 
v___x_5208_ = 201;
v___x_5209_ = 0;
v___x_5210_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_5211_ = lean_string_to_utf8(v_specifier_5206_);
v___x_5212_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5208_, v___x_5209_, v___x_5210_, v___x_5211_);
lean_dec_ref(v___x_5211_);
if (lean_obj_tag(v___x_5212_) == 0)
{
lean_object* v_a_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; 
v_a_5213_ = lean_ctor_get(v___x_5212_, 0);
lean_inc(v_a_5213_);
lean_dec_ref_known(v___x_5212_, 1);
v___x_5214_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5215_ = l_String_quote(v_specifier_5206_);
v___x_5216_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
v___x_5217_ = lean_unsigned_to_nat(120u);
v___x_5218_ = lean_unsigned_to_nat(0u);
v___x_5219_ = l_Std_Format_pretty(v___x_5216_, v___x_5217_, v___x_5218_, v___x_5218_);
v___x_5220_ = lean_string_append(v___x_5214_, v___x_5219_);
lean_dec_ref(v___x_5219_);
v___x_5221_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5220_, v_a_5213_);
lean_dec(v_a_5213_);
lean_dec_ref(v___x_5220_);
return v___x_5221_;
}
else
{
lean_object* v_a_5222_; lean_object* v___x_5224_; uint8_t v_isShared_5225_; uint8_t v_isSharedCheck_5229_; 
lean_dec_ref(v_specifier_5206_);
v_a_5222_ = lean_ctor_get(v___x_5212_, 0);
v_isSharedCheck_5229_ = !lean_is_exclusive(v___x_5212_);
if (v_isSharedCheck_5229_ == 0)
{
v___x_5224_ = v___x_5212_;
v_isShared_5225_ = v_isSharedCheck_5229_;
goto v_resetjp_5223_;
}
else
{
lean_inc(v_a_5222_);
lean_dec(v___x_5212_);
v___x_5224_ = lean_box(0);
v_isShared_5225_ = v_isSharedCheck_5229_;
goto v_resetjp_5223_;
}
v_resetjp_5223_:
{
lean_object* v___x_5227_; 
if (v_isShared_5225_ == 0)
{
v___x_5227_ = v___x_5224_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v_a_5222_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
return v___x_5227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5230_, lean_object* v_a_5231_){
_start:
{
lean_object* v_res_5232_; 
v_res_5232_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5230_);
return v_res_5232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5258_, lean_object* v_options_5259_){
_start:
{
lean_object* v___f_5261_; lean_object* v___f_5262_; lean_object* v___f_5263_; lean_object* v___f_5264_; lean_object* v___y_5266_; lean_object* v___y_5267_; lean_object* v___y_5268_; lean_object* v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v___y_5272_; lean_object* v___y_5273_; lean_object* v___x_5327_; lean_object* v___x_5328_; 
v___f_5261_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5262_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5263_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5264_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5327_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5328_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5327_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v_a_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; 
v_a_5329_ = lean_ctor_get(v___x_5328_, 0);
lean_inc(v_a_5329_);
lean_dec_ref_known(v___x_5328_, 1);
v___x_5330_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5331_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5330_);
if (lean_obj_tag(v___x_5331_) == 0)
{
lean_object* v_a_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; 
v_a_5332_ = lean_ctor_get(v___x_5331_, 0);
lean_inc(v_a_5332_);
lean_dec_ref_known(v___x_5331_, 1);
v___x_5333_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5334_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5332_, v___x_5333_);
if (lean_obj_tag(v___x_5334_) == 0)
{
lean_object* v_a_5335_; lean_object* v___x_5336_; 
v_a_5335_ = lean_ctor_get(v___x_5334_, 0);
lean_inc(v_a_5335_);
lean_dec_ref_known(v___x_5334_, 1);
v___x_5336_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5336_) == 0)
{
lean_object* v_a_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; 
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
lean_inc(v_a_5337_);
lean_dec_ref_known(v___x_5336_, 1);
v___x_5338_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5339_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5337_, v___x_5338_);
if (lean_obj_tag(v___x_5339_) == 0)
{
lean_object* v_a_5340_; lean_object* v___y_5342_; lean_object* v___y_5343_; lean_object* v___y_5344_; lean_object* v___y_5394_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___y_5399_; 
v_a_5340_ = lean_ctor_get(v___x_5339_, 0);
lean_inc(v_a_5340_);
lean_dec_ref_known(v___x_5339_, 1);
v___x_5396_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5397_ = lean_io_getenv(v___x_5396_);
if (lean_obj_tag(v___x_5397_) == 0)
{
lean_object* v___x_5408_; 
v___x_5408_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5399_ = v___x_5408_;
goto v___jp_5398_;
}
else
{
lean_object* v_val_5409_; 
v_val_5409_ = lean_ctor_get(v___x_5397_, 0);
lean_inc(v_val_5409_);
lean_dec_ref_known(v___x_5397_, 1);
v___y_5399_ = v_val_5409_;
goto v___jp_5398_;
}
v___jp_5341_:
{
lean_object* v___f_5345_; lean_object* v___f_5346_; lean_object* v___f_5347_; lean_object* v___f_5348_; lean_object* v___x_5349_; 
lean_inc_n(v___y_5344_, 2);
v___f_5345_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5345_, 0, v___f_5262_);
lean_closure_set(v___f_5345_, 1, v___f_5261_);
lean_closure_set(v___f_5345_, 2, v_handler_5258_);
lean_closure_set(v___f_5345_, 3, v_options_5259_);
lean_closure_set(v___f_5345_, 4, v_a_5340_);
lean_closure_set(v___f_5345_, 5, v_a_5335_);
lean_closure_set(v___f_5345_, 6, v___y_5344_);
v___f_5346_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5346_, 0, v___f_5345_);
lean_inc_ref(v___f_5346_);
v___f_5347_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5347_, 0, v___f_5346_);
lean_closure_set(v___f_5347_, 1, v___f_5346_);
v___f_5348_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5348_, 0, v___y_5342_);
lean_closure_set(v___f_5348_, 1, v___y_5344_);
lean_closure_set(v___f_5348_, 2, v___f_5263_);
v___x_5349_ = l_Lasm_JS_Function_ofFnReply(v___f_5347_);
if (lean_obj_tag(v___x_5349_) == 0)
{
lean_object* v_a_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; 
v_a_5350_ = lean_ctor_get(v___x_5349_, 0);
lean_inc(v_a_5350_);
lean_dec_ref_known(v___x_5349_, 1);
v___x_5351_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5352_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5353_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5353_, 0, v_a_5350_);
lean_ctor_set(v___x_5353_, 1, v___x_5352_);
v___x_5354_ = lean_unsigned_to_nat(1u);
v___x_5355_ = lean_mk_empty_array_with_capacity(v___x_5354_);
lean_inc_ref(v___x_5355_);
v___x_5356_ = lean_array_push(v___x_5355_, v___x_5353_);
v___x_5357_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5329_, v___x_5351_, v___x_5356_);
if (lean_obj_tag(v___x_5357_) == 0)
{
lean_object* v_a_5358_; lean_object* v___x_5359_; 
v_a_5358_ = lean_ctor_get(v___x_5357_, 0);
lean_inc(v_a_5358_);
lean_dec_ref_known(v___x_5357_, 1);
v___x_5359_ = l_Lasm_JS_Function_ofFn(v___f_5348_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; uint8_t v___x_5365_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
lean_dec_ref_known(v___x_5359_, 1);
v___x_5361_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5362_ = lean_nat_to_int(v___y_5344_);
v___x_5363_ = lean_nat_abs(v___x_5362_);
v___x_5364_ = lean_cstr_to_nat("9007199254740991");
v___x_5365_ = lean_nat_dec_le(v___x_5363_, v___x_5364_);
lean_dec(v___x_5363_);
if (v___x_5365_ == 0)
{
lean_object* v___x_5366_; 
v___x_5366_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5366_, 0, v___x_5362_);
v___y_5266_ = v___x_5355_;
v___y_5267_ = v___x_5352_;
v___y_5268_ = v_a_5358_;
v___y_5269_ = v_a_5360_;
v___y_5270_ = v___x_5361_;
v___y_5271_ = v___x_5352_;
v___y_5272_ = v___y_5343_;
v___y_5273_ = v___x_5366_;
goto v___jp_5265_;
}
else
{
double v___x_5367_; lean_object* v___x_5368_; 
v___x_5367_ = l_Float_ofInt(v___x_5362_);
lean_dec(v___x_5362_);
v___x_5368_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5368_, 0, v___x_5367_);
v___y_5266_ = v___x_5355_;
v___y_5267_ = v___x_5352_;
v___y_5268_ = v_a_5358_;
v___y_5269_ = v_a_5360_;
v___y_5270_ = v___x_5361_;
v___y_5271_ = v___x_5352_;
v___y_5272_ = v___y_5343_;
v___y_5273_ = v___x_5368_;
goto v___jp_5265_;
}
}
else
{
lean_object* v_a_5369_; lean_object* v___x_5371_; uint8_t v_isShared_5372_; uint8_t v_isSharedCheck_5376_; 
lean_dec(v_a_5358_);
lean_dec_ref(v___x_5355_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
v_a_5369_ = lean_ctor_get(v___x_5359_, 0);
v_isSharedCheck_5376_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5376_ == 0)
{
v___x_5371_ = v___x_5359_;
v_isShared_5372_ = v_isSharedCheck_5376_;
goto v_resetjp_5370_;
}
else
{
lean_inc(v_a_5369_);
lean_dec(v___x_5359_);
v___x_5371_ = lean_box(0);
v_isShared_5372_ = v_isSharedCheck_5376_;
goto v_resetjp_5370_;
}
v_resetjp_5370_:
{
lean_object* v___x_5374_; 
if (v_isShared_5372_ == 0)
{
v___x_5374_ = v___x_5371_;
goto v_reusejp_5373_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v_a_5369_);
v___x_5374_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5373_;
}
v_reusejp_5373_:
{
return v___x_5374_;
}
}
}
}
else
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5384_; 
lean_dec_ref(v___x_5355_);
lean_dec_ref(v___f_5348_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
v_a_5377_ = lean_ctor_get(v___x_5357_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5379_ = v___x_5357_;
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5357_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v___x_5382_; 
if (v_isShared_5380_ == 0)
{
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
return v___x_5382_;
}
}
}
}
else
{
lean_object* v_a_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5392_; 
lean_dec_ref(v___f_5348_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
lean_dec(v_a_5329_);
v_a_5385_ = lean_ctor_get(v___x_5349_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5349_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5387_ = v___x_5349_;
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_a_5385_);
lean_dec(v___x_5349_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5385_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
return v___x_5390_;
}
}
}
}
v___jp_5393_:
{
lean_object* v___x_5395_; 
v___x_5395_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5394_);
v___y_5342_ = v___y_5394_;
v___y_5343_ = v___y_5394_;
v___y_5344_ = v___x_5395_;
goto v___jp_5341_;
}
v___jp_5398_:
{
lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5400_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5401_ = lean_io_getenv(v___x_5400_);
if (lean_obj_tag(v___x_5401_) == 0)
{
v___y_5394_ = v___y_5399_;
goto v___jp_5393_;
}
else
{
lean_object* v_val_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; 
v_val_5402_ = lean_ctor_get(v___x_5401_, 0);
lean_inc(v_val_5402_);
lean_dec_ref_known(v___x_5401_, 1);
v___x_5403_ = lean_unsigned_to_nat(0u);
v___x_5404_ = lean_string_utf8_byte_size(v_val_5402_);
v___x_5405_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5405_, 0, v_val_5402_);
lean_ctor_set(v___x_5405_, 1, v___x_5403_);
lean_ctor_set(v___x_5405_, 2, v___x_5404_);
v___x_5406_ = l_String_Slice_toNat_x3f(v___x_5405_);
lean_dec_ref_known(v___x_5405_, 3);
if (lean_obj_tag(v___x_5406_) == 0)
{
v___y_5394_ = v___y_5399_;
goto v___jp_5393_;
}
else
{
lean_object* v_val_5407_; 
v_val_5407_ = lean_ctor_get(v___x_5406_, 0);
lean_inc(v_val_5407_);
lean_dec_ref_known(v___x_5406_, 1);
lean_inc_ref(v___y_5399_);
v___y_5342_ = v___y_5399_;
v___y_5343_ = v___y_5399_;
v___y_5344_ = v_val_5407_;
goto v___jp_5341_;
}
}
}
}
else
{
lean_object* v_a_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5417_; 
lean_dec(v_a_5335_);
lean_dec(v_a_5329_);
lean_dec_ref(v_options_5259_);
lean_dec_ref(v_handler_5258_);
v_a_5410_ = lean_ctor_get(v___x_5339_, 0);
v_isSharedCheck_5417_ = !lean_is_exclusive(v___x_5339_);
if (v_isSharedCheck_5417_ == 0)
{
v___x_5412_ = v___x_5339_;
v_isShared_5413_ = v_isSharedCheck_5417_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_a_5410_);
lean_dec(v___x_5339_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5417_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5415_; 
if (v_isShared_5413_ == 0)
{
v___x_5415_ = v___x_5412_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5416_; 
v_reuseFailAlloc_5416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5416_, 0, v_a_5410_);
v___x_5415_ = v_reuseFailAlloc_5416_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
return v___x_5415_;
}
}
}
}
else
{
lean_object* v_a_5418_; lean_object* v___x_5420_; uint8_t v_isShared_5421_; uint8_t v_isSharedCheck_5425_; 
lean_dec(v_a_5335_);
lean_dec(v_a_5329_);
lean_dec_ref(v_options_5259_);
lean_dec_ref(v_handler_5258_);
v_a_5418_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5425_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5420_ = v___x_5336_;
v_isShared_5421_ = v_isSharedCheck_5425_;
goto v_resetjp_5419_;
}
else
{
lean_inc(v_a_5418_);
lean_dec(v___x_5336_);
v___x_5420_ = lean_box(0);
v_isShared_5421_ = v_isSharedCheck_5425_;
goto v_resetjp_5419_;
}
v_resetjp_5419_:
{
lean_object* v___x_5423_; 
if (v_isShared_5421_ == 0)
{
v___x_5423_ = v___x_5420_;
goto v_reusejp_5422_;
}
else
{
lean_object* v_reuseFailAlloc_5424_; 
v_reuseFailAlloc_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5424_, 0, v_a_5418_);
v___x_5423_ = v_reuseFailAlloc_5424_;
goto v_reusejp_5422_;
}
v_reusejp_5422_:
{
return v___x_5423_;
}
}
}
}
else
{
lean_object* v_a_5426_; lean_object* v___x_5428_; uint8_t v_isShared_5429_; uint8_t v_isSharedCheck_5433_; 
lean_dec(v_a_5329_);
lean_dec_ref(v_options_5259_);
lean_dec_ref(v_handler_5258_);
v_a_5426_ = lean_ctor_get(v___x_5334_, 0);
v_isSharedCheck_5433_ = !lean_is_exclusive(v___x_5334_);
if (v_isSharedCheck_5433_ == 0)
{
v___x_5428_ = v___x_5334_;
v_isShared_5429_ = v_isSharedCheck_5433_;
goto v_resetjp_5427_;
}
else
{
lean_inc(v_a_5426_);
lean_dec(v___x_5334_);
v___x_5428_ = lean_box(0);
v_isShared_5429_ = v_isSharedCheck_5433_;
goto v_resetjp_5427_;
}
v_resetjp_5427_:
{
lean_object* v___x_5431_; 
if (v_isShared_5429_ == 0)
{
v___x_5431_ = v___x_5428_;
goto v_reusejp_5430_;
}
else
{
lean_object* v_reuseFailAlloc_5432_; 
v_reuseFailAlloc_5432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5432_, 0, v_a_5426_);
v___x_5431_ = v_reuseFailAlloc_5432_;
goto v_reusejp_5430_;
}
v_reusejp_5430_:
{
return v___x_5431_;
}
}
}
}
else
{
lean_object* v_a_5434_; lean_object* v___x_5436_; uint8_t v_isShared_5437_; uint8_t v_isSharedCheck_5441_; 
lean_dec(v_a_5329_);
lean_dec_ref(v_options_5259_);
lean_dec_ref(v_handler_5258_);
v_a_5434_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5441_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5441_ == 0)
{
v___x_5436_ = v___x_5331_;
v_isShared_5437_ = v_isSharedCheck_5441_;
goto v_resetjp_5435_;
}
else
{
lean_inc(v_a_5434_);
lean_dec(v___x_5331_);
v___x_5436_ = lean_box(0);
v_isShared_5437_ = v_isSharedCheck_5441_;
goto v_resetjp_5435_;
}
v_resetjp_5435_:
{
lean_object* v___x_5439_; 
if (v_isShared_5437_ == 0)
{
v___x_5439_ = v___x_5436_;
goto v_reusejp_5438_;
}
else
{
lean_object* v_reuseFailAlloc_5440_; 
v_reuseFailAlloc_5440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5440_, 0, v_a_5434_);
v___x_5439_ = v_reuseFailAlloc_5440_;
goto v_reusejp_5438_;
}
v_reusejp_5438_:
{
return v___x_5439_;
}
}
}
}
else
{
lean_object* v_a_5442_; lean_object* v___x_5444_; uint8_t v_isShared_5445_; uint8_t v_isSharedCheck_5449_; 
lean_dec_ref(v_options_5259_);
lean_dec_ref(v_handler_5258_);
v_a_5442_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5449_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5449_ == 0)
{
v___x_5444_ = v___x_5328_;
v_isShared_5445_ = v_isSharedCheck_5449_;
goto v_resetjp_5443_;
}
else
{
lean_inc(v_a_5442_);
lean_dec(v___x_5328_);
v___x_5444_ = lean_box(0);
v_isShared_5445_ = v_isSharedCheck_5449_;
goto v_resetjp_5443_;
}
v_resetjp_5443_:
{
lean_object* v___x_5447_; 
if (v_isShared_5445_ == 0)
{
v___x_5447_ = v___x_5444_;
goto v_reusejp_5446_;
}
else
{
lean_object* v_reuseFailAlloc_5448_; 
v_reuseFailAlloc_5448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5448_, 0, v_a_5442_);
v___x_5447_ = v_reuseFailAlloc_5448_;
goto v_reusejp_5446_;
}
v_reusejp_5446_:
{
return v___x_5447_;
}
}
}
v___jp_5265_:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5274_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5274_, 0, v___y_5272_);
lean_inc_ref(v___y_5271_);
v___x_5275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5275_, 0, v___y_5269_);
lean_ctor_set(v___x_5275_, 1, v___y_5271_);
v___x_5276_ = lean_unsigned_to_nat(3u);
v___x_5277_ = lean_mk_empty_array_with_capacity(v___x_5276_);
v___x_5278_ = lean_array_push(v___x_5277_, v___y_5273_);
v___x_5279_ = lean_array_push(v___x_5278_, v___x_5274_);
v___x_5280_ = lean_array_push(v___x_5279_, v___x_5275_);
lean_inc_ref(v___y_5270_);
lean_inc(v___y_5268_);
v___x_5281_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5268_, v___y_5270_, v___x_5280_);
if (lean_obj_tag(v___x_5281_) == 0)
{
lean_object* v___x_5282_; lean_object* v___x_5283_; 
lean_dec_ref_known(v___x_5281_, 1);
v___x_5282_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5283_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5282_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; lean_object* v___f_5285_; lean_object* v___x_5286_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
lean_inc_n(v_a_5284_, 2);
lean_dec_ref_known(v___x_5283_, 1);
lean_inc_ref(v___y_5266_);
v___f_5285_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_5285_, 0, v___f_5264_);
lean_closure_set(v___f_5285_, 1, v___y_5266_);
lean_closure_set(v___f_5285_, 2, v_a_5284_);
v___x_5286_ = l_Lasm_JS_Function_ofFn(v___f_5285_);
if (lean_obj_tag(v___x_5286_) == 0)
{
lean_object* v_a_5287_; lean_object* v___f_5288_; lean_object* v___x_5289_; 
v_a_5287_ = lean_ctor_get(v___x_5286_, 0);
lean_inc(v_a_5287_);
lean_dec_ref_known(v___x_5286_, 1);
lean_inc_ref(v___y_5267_);
v___f_5288_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_5288_, 0, v_a_5287_);
lean_closure_set(v___f_5288_, 1, v___y_5267_);
lean_closure_set(v___f_5288_, 2, v___y_5266_);
lean_closure_set(v___f_5288_, 3, v___f_5264_);
lean_closure_set(v___f_5288_, 4, v___y_5268_);
v___x_5289_ = l_Lasm_JS_Function_ofFn(v___f_5288_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
lean_inc(v_a_5290_);
lean_dec_ref_known(v___x_5289_, 1);
v___x_5291_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5292_ = lean_box(0);
v___x_5293_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5290_, v_a_5284_, v___x_5291_, v___x_5292_);
if (lean_obj_tag(v___x_5293_) == 0)
{
lean_object* v___x_5294_; 
lean_dec_ref_known(v___x_5293_, 1);
v___x_5294_ = l_Lasm_JS_waitForever();
return v___x_5294_;
}
else
{
return v___x_5293_;
}
}
else
{
lean_object* v_a_5295_; lean_object* v___x_5297_; uint8_t v_isShared_5298_; uint8_t v_isSharedCheck_5302_; 
lean_dec(v_a_5284_);
v_a_5295_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5302_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5302_ == 0)
{
v___x_5297_ = v___x_5289_;
v_isShared_5298_ = v_isSharedCheck_5302_;
goto v_resetjp_5296_;
}
else
{
lean_inc(v_a_5295_);
lean_dec(v___x_5289_);
v___x_5297_ = lean_box(0);
v_isShared_5298_ = v_isSharedCheck_5302_;
goto v_resetjp_5296_;
}
v_resetjp_5296_:
{
lean_object* v___x_5300_; 
if (v_isShared_5298_ == 0)
{
v___x_5300_ = v___x_5297_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v_a_5295_);
v___x_5300_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
return v___x_5300_;
}
}
}
}
else
{
lean_object* v_a_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5310_; 
lean_dec(v_a_5284_);
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5266_);
v_a_5303_ = lean_ctor_get(v___x_5286_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v___x_5286_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5305_ = v___x_5286_;
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_a_5303_);
lean_dec(v___x_5286_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5308_; 
if (v_isShared_5306_ == 0)
{
v___x_5308_ = v___x_5305_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v_a_5303_);
v___x_5308_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
return v___x_5308_;
}
}
}
}
else
{
lean_object* v_a_5311_; lean_object* v___x_5313_; uint8_t v_isShared_5314_; uint8_t v_isSharedCheck_5318_; 
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5266_);
v_a_5311_ = lean_ctor_get(v___x_5283_, 0);
v_isSharedCheck_5318_ = !lean_is_exclusive(v___x_5283_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5313_ = v___x_5283_;
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
else
{
lean_inc(v_a_5311_);
lean_dec(v___x_5283_);
v___x_5313_ = lean_box(0);
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
v_resetjp_5312_:
{
lean_object* v___x_5316_; 
if (v_isShared_5314_ == 0)
{
v___x_5316_ = v___x_5313_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v_a_5311_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
}
}
else
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5326_; 
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5266_);
v_a_5319_ = lean_ctor_get(v___x_5281_, 0);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5281_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5321_ = v___x_5281_;
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5281_);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5450_, lean_object* v_options_5451_, lean_object* v_a_5452_){
_start:
{
lean_object* v_res_5453_; 
v_res_5453_ = l_Lasm_Fetch_serveNode(v_handler_5450_, v_options_5451_);
return v_res_5453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5454_, lean_object* v_range_5455_, lean_object* v_b_5456_, lean_object* v_i_5457_, lean_object* v_hs_5458_, lean_object* v_hl_5459_){
_start:
{
lean_object* v___x_5460_; 
v___x_5460_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5454_, v_range_5455_, v_b_5456_, v_i_5457_);
return v___x_5460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5461_, lean_object* v_range_5462_, lean_object* v_b_5463_, lean_object* v_i_5464_, lean_object* v_hs_5465_, lean_object* v_hl_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5461_, v_range_5462_, v_b_5463_, v_i_5464_, v_hs_5465_, v_hl_5466_);
lean_dec_ref(v_range_5462_);
lean_dec_ref(v___y_5461_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5468_, lean_object* v_a_5469_, lean_object* v_as_5470_, lean_object* v_as_x27_5471_, lean_object* v_b_5472_, lean_object* v_a_5473_){
_start:
{
lean_object* v___x_5475_; 
v___x_5475_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5468_, v_a_5469_, v_as_x27_5471_, v_b_5472_);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5476_, lean_object* v_a_5477_, lean_object* v_as_5478_, lean_object* v_as_x27_5479_, lean_object* v_b_5480_, lean_object* v_a_5481_, lean_object* v___y_5482_){
_start:
{
lean_object* v_res_5483_; 
v_res_5483_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5476_, v_a_5477_, v_as_5478_, v_as_x27_5479_, v_b_5480_, v_a_5481_);
lean_dec(v_as_x27_5479_);
lean_dec(v_as_5478_);
return v_res_5483_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5484_; 
v___x_5484_ = lean_box(0);
return v___x_5484_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5485_; 
v___x_5485_ = lean_box(0);
return v___x_5485_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5493_, lean_object* v_method_5494_, lean_object* v_url_5495_, lean_object* v_headers_5496_, lean_object* v_body_5497_, lean_object* v_backend_5498_, lean_object* v_a_00___x40___internal___hyg_5499_){
_start:
{
lean_object* v_res_5500_; 
v_res_5500_ = lasm_fetch_send(v_p_5493_, v_method_5494_, v_url_5495_, v_headers_5496_, v_body_5497_, v_backend_5498_);
lean_dec_ref(v_backend_5498_);
lean_dec_ref(v_body_5497_);
lean_dec_ref(v_headers_5496_);
lean_dec_ref(v_url_5495_);
lean_dec_ref(v_method_5494_);
lean_dec(v_p_5493_);
return v_res_5500_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5501_, lean_object* v_b_5502_, lean_object* v_x_5503_, lean_object* v_x_5504_){
_start:
{
if (lean_obj_tag(v_x_5504_) == 0)
{
return v_x_5503_;
}
else
{
lean_object* v_head_5505_; lean_object* v_tail_5506_; uint8_t v___y_5508_; lean_object* v___x_5515_; lean_object* v___x_5516_; uint8_t v___x_5517_; 
v_head_5505_ = lean_ctor_get(v_x_5504_, 0);
v_tail_5506_ = lean_ctor_get(v_x_5504_, 1);
v___x_5515_ = lean_nat_add(v_pos_5501_, v_head_5505_);
v___x_5516_ = lean_byte_array_size(v_b_5502_);
v___x_5517_ = lean_nat_dec_lt(v___x_5515_, v___x_5516_);
if (v___x_5517_ == 0)
{
uint8_t v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; uint8_t v___x_5521_; 
lean_dec(v___x_5515_);
v___x_5518_ = 0;
v___x_5519_ = lean_box(v___x_5518_);
v___x_5520_ = l_outOfBounds___redArg(v___x_5519_);
lean_dec(v___x_5519_);
v___x_5521_ = lean_unbox(v___x_5520_);
lean_dec(v___x_5520_);
v___y_5508_ = v___x_5521_;
goto v___jp_5507_;
}
else
{
uint8_t v___x_5522_; 
v___x_5522_ = lean_byte_array_fget(v_b_5502_, v___x_5515_);
lean_dec(v___x_5515_);
v___y_5508_ = v___x_5522_;
goto v___jp_5507_;
}
v___jp_5507_:
{
lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5509_ = lean_uint8_to_nat(v___y_5508_);
v___x_5510_ = lean_unsigned_to_nat(256u);
v___x_5511_ = lean_nat_pow(v___x_5510_, v_head_5505_);
v___x_5512_ = lean_nat_mul(v___x_5509_, v___x_5511_);
lean_dec(v___x_5511_);
v___x_5513_ = lean_nat_add(v_x_5503_, v___x_5512_);
lean_dec(v___x_5512_);
lean_dec(v_x_5503_);
v_x_5503_ = v___x_5513_;
v_x_5504_ = v_tail_5506_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5523_, lean_object* v_b_5524_, lean_object* v_x_5525_, lean_object* v_x_5526_){
_start:
{
lean_object* v_res_5527_; 
v_res_5527_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5523_, v_b_5524_, v_x_5525_, v_x_5526_);
lean_dec(v_x_5526_);
lean_dec_ref(v_b_5524_);
lean_dec(v_pos_5523_);
return v_res_5527_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5528_; lean_object* v___x_5529_; 
v___x_5528_ = lean_unsigned_to_nat(8u);
v___x_5529_ = l_List_range(v___x_5528_);
return v___x_5529_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5533_, lean_object* v_pos_5534_){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; uint8_t v___x_5538_; 
v___x_5535_ = lean_byte_array_size(v_b_5533_);
v___x_5536_ = lean_unsigned_to_nat(8u);
v___x_5537_ = lean_nat_add(v_pos_5534_, v___x_5536_);
v___x_5538_ = lean_nat_dec_lt(v___x_5535_, v___x_5537_);
lean_dec(v___x_5537_);
if (v___x_5538_ == 0)
{
lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; 
v___x_5539_ = lean_unsigned_to_nat(0u);
v___x_5540_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5541_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5534_, v_b_5533_, v___x_5539_, v___x_5540_);
v___x_5542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5542_, 0, v___x_5541_);
return v___x_5542_;
}
else
{
lean_object* v___x_5543_; 
v___x_5543_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5544_, lean_object* v_pos_5545_){
_start:
{
lean_object* v_res_5546_; 
v_res_5546_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5544_, v_pos_5545_);
lean_dec(v_pos_5545_);
lean_dec_ref(v_b_5544_);
return v_res_5546_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5547_, lean_object* v_a_5548_){
_start:
{
if (lean_obj_tag(v_a_5547_) == 0)
{
lean_object* v___x_5549_; 
v___x_5549_ = l_List_reverse___redArg(v_a_5548_);
return v___x_5549_;
}
else
{
lean_object* v_head_5550_; lean_object* v_tail_5551_; lean_object* v___x_5553_; uint8_t v_isShared_5554_; uint8_t v_isSharedCheck_5567_; 
v_head_5550_ = lean_ctor_get(v_a_5547_, 0);
v_tail_5551_ = lean_ctor_get(v_a_5547_, 1);
v_isSharedCheck_5567_ = !lean_is_exclusive(v_a_5547_);
if (v_isSharedCheck_5567_ == 0)
{
v___x_5553_ = v_a_5547_;
v_isShared_5554_ = v_isSharedCheck_5567_;
goto v_resetjp_5552_;
}
else
{
lean_inc(v_tail_5551_);
lean_inc(v_head_5550_);
lean_dec(v_a_5547_);
v___x_5553_ = lean_box(0);
v_isShared_5554_ = v_isSharedCheck_5567_;
goto v_resetjp_5552_;
}
v_resetjp_5552_:
{
uint8_t v___y_5556_; uint8_t v___x_5562_; uint8_t v___x_5563_; uint8_t v___x_5564_; 
v___x_5562_ = 128;
v___x_5563_ = lean_unbox(v_head_5550_);
v___x_5564_ = lean_uint8_dec_lt(v___x_5563_, v___x_5562_);
if (v___x_5564_ == 0)
{
uint8_t v___x_5565_; 
lean_dec(v_head_5550_);
v___x_5565_ = 63;
v___y_5556_ = v___x_5565_;
goto v___jp_5555_;
}
else
{
uint8_t v___x_5566_; 
v___x_5566_ = lean_unbox(v_head_5550_);
lean_dec(v_head_5550_);
v___y_5556_ = v___x_5566_;
goto v___jp_5555_;
}
v___jp_5555_:
{
lean_object* v___x_5557_; lean_object* v___x_5559_; 
v___x_5557_ = lean_box(v___y_5556_);
if (v_isShared_5554_ == 0)
{
lean_ctor_set(v___x_5553_, 1, v_a_5548_);
lean_ctor_set(v___x_5553_, 0, v___x_5557_);
v___x_5559_ = v___x_5553_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v___x_5557_);
lean_ctor_set(v_reuseFailAlloc_5561_, 1, v_a_5548_);
v___x_5559_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
v_a_5547_ = v_tail_5551_;
v_a_5548_ = v___x_5559_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5570_, lean_object* v_pos_5571_, lean_object* v_n_5572_){
_start:
{
lean_object* v___x_5573_; lean_object* v___x_5574_; uint8_t v___x_5575_; 
v___x_5573_ = lean_byte_array_size(v_b_5570_);
v___x_5574_ = lean_nat_add(v_pos_5571_, v_n_5572_);
v___x_5575_ = lean_nat_dec_lt(v___x_5573_, v___x_5574_);
if (v___x_5575_ == 0)
{
lean_object* v___x_5576_; uint8_t v___x_5577_; 
v___x_5576_ = l_ByteArray_extract(v_b_5570_, v_pos_5571_, v___x_5574_);
lean_dec(v___x_5574_);
v___x_5577_ = lean_string_validate_utf8(v___x_5576_);
if (v___x_5577_ == 0)
{
lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; uint8_t v___x_5582_; 
v___x_5578_ = l_ByteArray_toList(v___x_5576_);
lean_dec_ref(v___x_5576_);
v___x_5579_ = lean_box(0);
v___x_5580_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5578_, v___x_5579_);
v___x_5581_ = l_List_toByteArray(v___x_5580_);
lean_dec(v___x_5580_);
v___x_5582_ = lean_string_validate_utf8(v___x_5581_);
if (v___x_5582_ == 0)
{
lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; 
lean_dec_ref(v___x_5581_);
v___x_5583_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5584_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5583_);
v___x_5585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5585_, 0, v___x_5584_);
return v___x_5585_;
}
else
{
lean_object* v___x_5586_; lean_object* v___x_5587_; 
v___x_5586_ = lean_string_from_utf8_unchecked(v___x_5581_);
v___x_5587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5587_, 0, v___x_5586_);
return v___x_5587_;
}
}
else
{
lean_object* v___x_5588_; lean_object* v___x_5589_; 
v___x_5588_ = lean_string_from_utf8_unchecked(v___x_5576_);
v___x_5589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5589_, 0, v___x_5588_);
return v___x_5589_;
}
}
else
{
lean_object* v___x_5590_; 
lean_dec(v___x_5574_);
lean_dec(v_pos_5571_);
v___x_5590_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5590_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5591_, lean_object* v_pos_5592_, lean_object* v_n_5593_){
_start:
{
lean_object* v_res_5594_; 
v_res_5594_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5591_, v_pos_5592_, v_n_5593_);
lean_dec(v_n_5593_);
lean_dec_ref(v_b_5591_);
return v_res_5594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5595_, lean_object* v_range_5596_, lean_object* v_b_5597_, lean_object* v_i_5598_){
_start:
{
lean_object* v_stop_5599_; lean_object* v_step_5600_; uint8_t v___x_5601_; 
v_stop_5599_ = lean_ctor_get(v_range_5596_, 1);
v_step_5600_ = lean_ctor_get(v_range_5596_, 2);
v___x_5601_ = lean_nat_dec_lt(v_i_5598_, v_stop_5599_);
if (v___x_5601_ == 0)
{
lean_object* v___x_5602_; 
lean_dec(v_i_5598_);
v___x_5602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5602_, 0, v_b_5597_);
return v___x_5602_;
}
else
{
lean_object* v_fst_5603_; lean_object* v_snd_5604_; lean_object* v___x_5606_; uint8_t v_isShared_5607_; uint8_t v_isSharedCheck_5660_; 
v_fst_5603_ = lean_ctor_get(v_b_5597_, 0);
v_snd_5604_ = lean_ctor_get(v_b_5597_, 1);
v_isSharedCheck_5660_ = !lean_is_exclusive(v_b_5597_);
if (v_isSharedCheck_5660_ == 0)
{
v___x_5606_ = v_b_5597_;
v_isShared_5607_ = v_isSharedCheck_5660_;
goto v_resetjp_5605_;
}
else
{
lean_inc(v_snd_5604_);
lean_inc(v_fst_5603_);
lean_dec(v_b_5597_);
v___x_5606_ = lean_box(0);
v_isShared_5607_ = v_isSharedCheck_5660_;
goto v_resetjp_5605_;
}
v_resetjp_5605_:
{
lean_object* v___x_5608_; 
v___x_5608_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5595_, v_fst_5603_);
if (lean_obj_tag(v___x_5608_) == 0)
{
lean_object* v_a_5609_; lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5616_; 
lean_del_object(v___x_5606_);
lean_dec(v_snd_5604_);
lean_dec(v_fst_5603_);
lean_dec(v_i_5598_);
v_a_5609_ = lean_ctor_get(v___x_5608_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5608_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5611_ = v___x_5608_;
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
else
{
lean_inc(v_a_5609_);
lean_dec(v___x_5608_);
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
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; 
v_a_5617_ = lean_ctor_get(v___x_5608_, 0);
lean_inc(v_a_5617_);
lean_dec_ref_known(v___x_5608_, 1);
v___x_5618_ = lean_unsigned_to_nat(8u);
v___x_5619_ = lean_nat_add(v_fst_5603_, v___x_5618_);
lean_dec(v_fst_5603_);
lean_inc(v___x_5619_);
v___x_5620_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5595_, v___x_5619_, v_a_5617_);
if (lean_obj_tag(v___x_5620_) == 0)
{
lean_object* v_a_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5628_; 
lean_dec(v___x_5619_);
lean_dec(v_a_5617_);
lean_del_object(v___x_5606_);
lean_dec(v_snd_5604_);
lean_dec(v_i_5598_);
v_a_5621_ = lean_ctor_get(v___x_5620_, 0);
v_isSharedCheck_5628_ = !lean_is_exclusive(v___x_5620_);
if (v_isSharedCheck_5628_ == 0)
{
v___x_5623_ = v___x_5620_;
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_a_5621_);
lean_dec(v___x_5620_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5624_ == 0)
{
v___x_5626_ = v___x_5623_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5627_; 
v_reuseFailAlloc_5627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5627_, 0, v_a_5621_);
v___x_5626_ = v_reuseFailAlloc_5627_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
return v___x_5626_;
}
}
}
else
{
lean_object* v_a_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v_a_5629_ = lean_ctor_get(v___x_5620_, 0);
lean_inc(v_a_5629_);
lean_dec_ref_known(v___x_5620_, 1);
v___x_5630_ = lean_nat_add(v___x_5619_, v_a_5617_);
lean_dec(v_a_5617_);
lean_dec(v___x_5619_);
v___x_5631_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5595_, v___x_5630_);
if (lean_obj_tag(v___x_5631_) == 0)
{
lean_object* v_a_5632_; lean_object* v___x_5634_; uint8_t v_isShared_5635_; uint8_t v_isSharedCheck_5639_; 
lean_dec(v___x_5630_);
lean_dec(v_a_5629_);
lean_del_object(v___x_5606_);
lean_dec(v_snd_5604_);
lean_dec(v_i_5598_);
v_a_5632_ = lean_ctor_get(v___x_5631_, 0);
v_isSharedCheck_5639_ = !lean_is_exclusive(v___x_5631_);
if (v_isSharedCheck_5639_ == 0)
{
v___x_5634_ = v___x_5631_;
v_isShared_5635_ = v_isSharedCheck_5639_;
goto v_resetjp_5633_;
}
else
{
lean_inc(v_a_5632_);
lean_dec(v___x_5631_);
v___x_5634_ = lean_box(0);
v_isShared_5635_ = v_isSharedCheck_5639_;
goto v_resetjp_5633_;
}
v_resetjp_5633_:
{
lean_object* v___x_5637_; 
if (v_isShared_5635_ == 0)
{
v___x_5637_ = v___x_5634_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v_a_5632_);
v___x_5637_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
return v___x_5637_;
}
}
}
else
{
lean_object* v_a_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v_a_5640_ = lean_ctor_get(v___x_5631_, 0);
lean_inc(v_a_5640_);
lean_dec_ref_known(v___x_5631_, 1);
v___x_5641_ = lean_nat_add(v___x_5630_, v___x_5618_);
lean_dec(v___x_5630_);
lean_inc(v___x_5641_);
v___x_5642_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5595_, v___x_5641_, v_a_5640_);
if (lean_obj_tag(v___x_5642_) == 0)
{
lean_object* v_a_5643_; lean_object* v___x_5645_; uint8_t v_isShared_5646_; uint8_t v_isSharedCheck_5650_; 
lean_dec(v___x_5641_);
lean_dec(v_a_5640_);
lean_dec(v_a_5629_);
lean_del_object(v___x_5606_);
lean_dec(v_snd_5604_);
lean_dec(v_i_5598_);
v_a_5643_ = lean_ctor_get(v___x_5642_, 0);
v_isSharedCheck_5650_ = !lean_is_exclusive(v___x_5642_);
if (v_isSharedCheck_5650_ == 0)
{
v___x_5645_ = v___x_5642_;
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
else
{
lean_inc(v_a_5643_);
lean_dec(v___x_5642_);
v___x_5645_ = lean_box(0);
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
v_resetjp_5644_:
{
lean_object* v___x_5648_; 
if (v_isShared_5646_ == 0)
{
v___x_5648_ = v___x_5645_;
goto v_reusejp_5647_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_a_5643_);
v___x_5648_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5647_;
}
v_reusejp_5647_:
{
return v___x_5648_;
}
}
}
else
{
lean_object* v_a_5651_; lean_object* v___x_5652_; lean_object* v___x_5654_; 
v_a_5651_ = lean_ctor_get(v___x_5642_, 0);
lean_inc(v_a_5651_);
lean_dec_ref_known(v___x_5642_, 1);
v___x_5652_ = lean_nat_add(v___x_5641_, v_a_5640_);
lean_dec(v_a_5640_);
lean_dec(v___x_5641_);
if (v_isShared_5607_ == 0)
{
lean_ctor_set(v___x_5606_, 1, v_a_5651_);
lean_ctor_set(v___x_5606_, 0, v_a_5629_);
v___x_5654_ = v___x_5606_;
goto v_reusejp_5653_;
}
else
{
lean_object* v_reuseFailAlloc_5659_; 
v_reuseFailAlloc_5659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5659_, 0, v_a_5629_);
lean_ctor_set(v_reuseFailAlloc_5659_, 1, v_a_5651_);
v___x_5654_ = v_reuseFailAlloc_5659_;
goto v_reusejp_5653_;
}
v_reusejp_5653_:
{
lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; 
v___x_5655_ = lean_array_push(v_snd_5604_, v___x_5654_);
v___x_5656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5656_, 0, v___x_5652_);
lean_ctor_set(v___x_5656_, 1, v___x_5655_);
v___x_5657_ = lean_nat_add(v_i_5598_, v_step_5600_);
lean_dec(v_i_5598_);
v_b_5597_ = v___x_5656_;
v_i_5598_ = v___x_5657_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5661_, lean_object* v_range_5662_, lean_object* v_b_5663_, lean_object* v_i_5664_){
_start:
{
lean_object* v_res_5665_; 
v_res_5665_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5661_, v_range_5662_, v_b_5663_, v_i_5664_);
lean_dec_ref(v_range_5662_);
lean_dec_ref(v_b_5661_);
return v_res_5665_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5669_){
_start:
{
lean_object* v___x_5670_; lean_object* v___x_5671_; 
v___x_5670_ = lean_unsigned_to_nat(0u);
v___x_5671_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5669_, v___x_5670_);
if (lean_obj_tag(v___x_5671_) == 0)
{
lean_object* v_a_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5679_; 
v_a_5672_ = lean_ctor_get(v___x_5671_, 0);
v_isSharedCheck_5679_ = !lean_is_exclusive(v___x_5671_);
if (v_isSharedCheck_5679_ == 0)
{
v___x_5674_ = v___x_5671_;
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_a_5672_);
lean_dec(v___x_5671_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5679_;
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
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_a_5672_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
return v___x_5677_;
}
}
}
else
{
lean_object* v_a_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; 
v_a_5680_ = lean_ctor_get(v___x_5671_, 0);
lean_inc(v_a_5680_);
lean_dec_ref_known(v___x_5671_, 1);
v___x_5681_ = lean_unsigned_to_nat(8u);
v___x_5682_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5669_, v___x_5681_);
if (lean_obj_tag(v___x_5682_) == 0)
{
lean_object* v_a_5683_; lean_object* v___x_5685_; uint8_t v_isShared_5686_; uint8_t v_isSharedCheck_5690_; 
lean_dec(v_a_5680_);
v_a_5683_ = lean_ctor_get(v___x_5682_, 0);
v_isSharedCheck_5690_ = !lean_is_exclusive(v___x_5682_);
if (v_isSharedCheck_5690_ == 0)
{
v___x_5685_ = v___x_5682_;
v_isShared_5686_ = v_isSharedCheck_5690_;
goto v_resetjp_5684_;
}
else
{
lean_inc(v_a_5683_);
lean_dec(v___x_5682_);
v___x_5685_ = lean_box(0);
v_isShared_5686_ = v_isSharedCheck_5690_;
goto v_resetjp_5684_;
}
v_resetjp_5684_:
{
lean_object* v___x_5688_; 
if (v_isShared_5686_ == 0)
{
v___x_5688_ = v___x_5685_;
goto v_reusejp_5687_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v_a_5683_);
v___x_5688_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5687_;
}
v_reusejp_5687_:
{
return v___x_5688_;
}
}
}
else
{
lean_object* v_a_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; 
v_a_5691_ = lean_ctor_get(v___x_5682_, 0);
lean_inc(v_a_5691_);
lean_dec_ref_known(v___x_5682_, 1);
v___x_5692_ = lean_unsigned_to_nat(1u);
v___x_5693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5693_, 0, v___x_5670_);
lean_ctor_set(v___x_5693_, 1, v_a_5691_);
lean_ctor_set(v___x_5693_, 2, v___x_5692_);
v___x_5694_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5695_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5669_, v___x_5693_, v___x_5694_, v___x_5670_);
lean_dec_ref_known(v___x_5693_, 3);
if (lean_obj_tag(v___x_5695_) == 0)
{
lean_object* v_a_5696_; lean_object* v___x_5698_; uint8_t v_isShared_5699_; uint8_t v_isSharedCheck_5703_; 
lean_dec(v_a_5680_);
v_a_5696_ = lean_ctor_get(v___x_5695_, 0);
v_isSharedCheck_5703_ = !lean_is_exclusive(v___x_5695_);
if (v_isSharedCheck_5703_ == 0)
{
v___x_5698_ = v___x_5695_;
v_isShared_5699_ = v_isSharedCheck_5703_;
goto v_resetjp_5697_;
}
else
{
lean_inc(v_a_5696_);
lean_dec(v___x_5695_);
v___x_5698_ = lean_box(0);
v_isShared_5699_ = v_isSharedCheck_5703_;
goto v_resetjp_5697_;
}
v_resetjp_5697_:
{
lean_object* v___x_5701_; 
if (v_isShared_5699_ == 0)
{
v___x_5701_ = v___x_5698_;
goto v_reusejp_5700_;
}
else
{
lean_object* v_reuseFailAlloc_5702_; 
v_reuseFailAlloc_5702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5702_, 0, v_a_5696_);
v___x_5701_ = v_reuseFailAlloc_5702_;
goto v_reusejp_5700_;
}
v_reusejp_5700_:
{
return v___x_5701_;
}
}
}
else
{
lean_object* v_a_5704_; lean_object* v___x_5706_; uint8_t v_isShared_5707_; uint8_t v_isSharedCheck_5718_; 
v_a_5704_ = lean_ctor_get(v___x_5695_, 0);
v_isSharedCheck_5718_ = !lean_is_exclusive(v___x_5695_);
if (v_isSharedCheck_5718_ == 0)
{
v___x_5706_ = v___x_5695_;
v_isShared_5707_ = v_isSharedCheck_5718_;
goto v_resetjp_5705_;
}
else
{
lean_inc(v_a_5704_);
lean_dec(v___x_5695_);
v___x_5706_ = lean_box(0);
v_isShared_5707_ = v_isSharedCheck_5718_;
goto v_resetjp_5705_;
}
v_resetjp_5705_:
{
lean_object* v_fst_5708_; lean_object* v_snd_5709_; uint16_t v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5716_; 
v_fst_5708_ = lean_ctor_get(v_a_5704_, 0);
lean_inc(v_fst_5708_);
v_snd_5709_ = lean_ctor_get(v_a_5704_, 1);
lean_inc(v_snd_5709_);
lean_dec(v_a_5704_);
v___x_5710_ = lean_uint16_of_nat(v_a_5680_);
lean_dec(v_a_5680_);
v___x_5711_ = lean_byte_array_size(v_b_5669_);
v___x_5712_ = l_ByteArray_extract(v_b_5669_, v_fst_5708_, v___x_5711_);
v___x_5713_ = lean_box(0);
v___x_5714_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5714_, 0, v_snd_5709_);
lean_ctor_set(v___x_5714_, 1, v___x_5712_);
lean_ctor_set(v___x_5714_, 2, v___x_5713_);
lean_ctor_set_uint16(v___x_5714_, sizeof(void*)*3, v___x_5710_);
if (v_isShared_5707_ == 0)
{
lean_ctor_set(v___x_5706_, 0, v___x_5714_);
v___x_5716_ = v___x_5706_;
goto v_reusejp_5715_;
}
else
{
lean_object* v_reuseFailAlloc_5717_; 
v_reuseFailAlloc_5717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5717_, 0, v___x_5714_);
v___x_5716_ = v_reuseFailAlloc_5717_;
goto v_reusejp_5715_;
}
v_reusejp_5715_:
{
return v___x_5716_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5719_){
_start:
{
lean_object* v_res_5720_; 
v_res_5720_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5719_);
lean_dec_ref(v_b_5719_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5721_, lean_object* v_range_5722_, lean_object* v_b_5723_, lean_object* v_i_5724_, lean_object* v_hs_5725_, lean_object* v_hl_5726_){
_start:
{
lean_object* v___x_5727_; 
v___x_5727_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5721_, v_range_5722_, v_b_5723_, v_i_5724_);
return v___x_5727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5728_, lean_object* v_range_5729_, lean_object* v_b_5730_, lean_object* v_i_5731_, lean_object* v_hs_5732_, lean_object* v_hl_5733_){
_start:
{
lean_object* v_res_5734_; 
v_res_5734_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5728_, v_range_5729_, v_b_5730_, v_i_5731_, v_hs_5732_, v_hl_5733_);
lean_dec_ref(v_range_5729_);
lean_dec_ref(v_b_5728_);
return v_res_5734_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5735_, lean_object* v_headers_5736_, lean_object* v_x_5737_){
_start:
{
if (lean_obj_tag(v_x_5737_) == 0)
{
lean_object* v_a_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5747_; 
lean_dec_ref(v_headers_5736_);
v_a_5739_ = lean_ctor_get(v_x_5737_, 0);
v_isSharedCheck_5747_ = !lean_is_exclusive(v_x_5737_);
if (v_isSharedCheck_5747_ == 0)
{
v___x_5741_ = v_x_5737_;
v_isShared_5742_ = v_isSharedCheck_5747_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_a_5739_);
lean_dec(v_x_5737_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5747_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v___x_5744_; 
if (v_isShared_5742_ == 0)
{
v___x_5744_ = v___x_5741_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5746_; 
v_reuseFailAlloc_5746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5746_, 0, v_a_5739_);
v___x_5744_ = v_reuseFailAlloc_5746_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
lean_object* v___x_5745_; 
v___x_5745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5744_);
return v___x_5745_;
}
}
}
else
{
lean_object* v_a_5748_; lean_object* v___x_5750_; uint8_t v_isShared_5751_; uint8_t v_isSharedCheck_5758_; 
v_a_5748_ = lean_ctor_get(v_x_5737_, 0);
v_isSharedCheck_5758_ = !lean_is_exclusive(v_x_5737_);
if (v_isSharedCheck_5758_ == 0)
{
v___x_5750_ = v_x_5737_;
v_isShared_5751_ = v_isSharedCheck_5758_;
goto v_resetjp_5749_;
}
else
{
lean_inc(v_a_5748_);
lean_dec(v_x_5737_);
v___x_5750_ = lean_box(0);
v_isShared_5751_ = v_isSharedCheck_5758_;
goto v_resetjp_5749_;
}
v_resetjp_5749_:
{
lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5755_; 
v___x_5752_ = lean_box(0);
v___x_5753_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5753_, 0, v_headers_5736_);
lean_ctor_set(v___x_5753_, 1, v_a_5748_);
lean_ctor_set(v___x_5753_, 2, v___x_5752_);
lean_ctor_set_uint16(v___x_5753_, sizeof(void*)*3, v___y_5735_);
if (v_isShared_5751_ == 0)
{
lean_ctor_set(v___x_5750_, 0, v___x_5753_);
v___x_5755_ = v___x_5750_;
goto v_reusejp_5754_;
}
else
{
lean_object* v_reuseFailAlloc_5757_; 
v_reuseFailAlloc_5757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5757_, 0, v___x_5753_);
v___x_5755_ = v_reuseFailAlloc_5757_;
goto v_reusejp_5754_;
}
v_reusejp_5754_:
{
lean_object* v___x_5756_; 
v___x_5756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5756_, 0, v___x_5755_);
return v___x_5756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5759_, lean_object* v_headers_5760_, lean_object* v_x_5761_, lean_object* v___y_5762_){
_start:
{
uint16_t v___y_2853__boxed_5763_; lean_object* v_res_5764_; 
v___y_2853__boxed_5763_ = lean_unbox(v___y_5759_);
v_res_5764_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5763_, v_headers_5760_, v_x_5761_);
return v_res_5764_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5765_, lean_object* v___f_5766_, lean_object* v_x_5767_){
_start:
{
if (lean_obj_tag(v_x_5767_) == 0)
{
lean_object* v_a_5769_; lean_object* v___x_5771_; uint8_t v_isShared_5772_; uint8_t v_isSharedCheck_5777_; 
lean_dec_ref(v___f_5766_);
lean_dec(v_a_5765_);
v_a_5769_ = lean_ctor_get(v_x_5767_, 0);
v_isSharedCheck_5777_ = !lean_is_exclusive(v_x_5767_);
if (v_isSharedCheck_5777_ == 0)
{
v___x_5771_ = v_x_5767_;
v_isShared_5772_ = v_isSharedCheck_5777_;
goto v_resetjp_5770_;
}
else
{
lean_inc(v_a_5769_);
lean_dec(v_x_5767_);
v___x_5771_ = lean_box(0);
v_isShared_5772_ = v_isSharedCheck_5777_;
goto v_resetjp_5770_;
}
v_resetjp_5770_:
{
lean_object* v___x_5774_; 
if (v_isShared_5772_ == 0)
{
v___x_5774_ = v___x_5771_;
goto v_reusejp_5773_;
}
else
{
lean_object* v_reuseFailAlloc_5776_; 
v_reuseFailAlloc_5776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5776_, 0, v_a_5769_);
v___x_5774_ = v_reuseFailAlloc_5776_;
goto v_reusejp_5773_;
}
v_reusejp_5773_:
{
lean_object* v___x_5775_; 
v___x_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5775_, 0, v___x_5774_);
return v___x_5775_;
}
}
}
else
{
lean_object* v_a_5778_; lean_object* v___x_5780_; uint8_t v_isShared_5781_; uint8_t v_isSharedCheck_5802_; 
v_a_5778_ = lean_ctor_get(v_x_5767_, 0);
v_isSharedCheck_5802_ = !lean_is_exclusive(v_x_5767_);
if (v_isSharedCheck_5802_ == 0)
{
v___x_5780_ = v_x_5767_;
v_isShared_5781_ = v_isSharedCheck_5802_;
goto v_resetjp_5779_;
}
else
{
lean_inc(v_a_5778_);
lean_dec(v_x_5767_);
v___x_5780_ = lean_box(0);
v_isShared_5781_ = v_isSharedCheck_5802_;
goto v_resetjp_5779_;
}
v_resetjp_5779_:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; uint8_t v___x_5788_; lean_object* v_val_5790_; lean_object* v___x_5793_; 
v___x_5782_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5783_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5783_, 0, v_a_5765_);
lean_ctor_set(v___x_5783_, 1, v___x_5782_);
v___x_5784_ = lean_unsigned_to_nat(1u);
v___x_5785_ = lean_mk_empty_array_with_capacity(v___x_5784_);
v___x_5786_ = lean_array_push(v___x_5785_, v___x_5783_);
v___x_5787_ = lean_unsigned_to_nat(0u);
v___x_5788_ = 0;
v___x_5793_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5778_, v___x_5786_);
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v_a_5794_; lean_object* v___x_5796_; 
v_a_5794_ = lean_ctor_get(v___x_5793_, 0);
lean_inc(v_a_5794_);
lean_dec_ref_known(v___x_5793_, 1);
if (v_isShared_5781_ == 0)
{
lean_ctor_set(v___x_5780_, 0, v_a_5794_);
v___x_5796_ = v___x_5780_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v_a_5794_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
v_val_5790_ = v___x_5796_;
goto v___jp_5789_;
}
}
else
{
lean_object* v_a_5798_; lean_object* v___x_5800_; 
v_a_5798_ = lean_ctor_get(v___x_5793_, 0);
lean_inc(v_a_5798_);
lean_dec_ref_known(v___x_5793_, 1);
if (v_isShared_5781_ == 0)
{
lean_ctor_set_tag(v___x_5780_, 0);
lean_ctor_set(v___x_5780_, 0, v_a_5798_);
v___x_5800_ = v___x_5780_;
goto v_reusejp_5799_;
}
else
{
lean_object* v_reuseFailAlloc_5801_; 
v_reuseFailAlloc_5801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5801_, 0, v_a_5798_);
v___x_5800_ = v_reuseFailAlloc_5801_;
goto v_reusejp_5799_;
}
v_reusejp_5799_:
{
v_val_5790_ = v___x_5800_;
goto v___jp_5789_;
}
}
v___jp_5789_:
{
lean_object* v___x_5791_; lean_object* v___x_5792_; 
v___x_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5791_, 0, v_val_5790_);
v___x_5792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5787_, v___x_5788_, v___x_5791_, v___f_5766_);
return v___x_5792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5803_, lean_object* v___f_5804_, lean_object* v_x_5805_, lean_object* v___y_5806_){
_start:
{
lean_object* v_res_5807_; 
v_res_5807_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5803_, v___f_5804_, v_x_5805_);
return v_res_5807_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5808_, lean_object* v_a_5809_, lean_object* v_x_5810_){
_start:
{
if (lean_obj_tag(v_x_5810_) == 0)
{
lean_object* v_a_5812_; lean_object* v___x_5814_; uint8_t v_isShared_5815_; uint8_t v_isSharedCheck_5820_; 
lean_dec(v_a_5809_);
lean_dec_ref(v___f_5808_);
v_a_5812_ = lean_ctor_get(v_x_5810_, 0);
v_isSharedCheck_5820_ = !lean_is_exclusive(v_x_5810_);
if (v_isSharedCheck_5820_ == 0)
{
v___x_5814_ = v_x_5810_;
v_isShared_5815_ = v_isSharedCheck_5820_;
goto v_resetjp_5813_;
}
else
{
lean_inc(v_a_5812_);
lean_dec(v_x_5810_);
v___x_5814_ = lean_box(0);
v_isShared_5815_ = v_isSharedCheck_5820_;
goto v_resetjp_5813_;
}
v_resetjp_5813_:
{
lean_object* v___x_5817_; 
if (v_isShared_5815_ == 0)
{
v___x_5817_ = v___x_5814_;
goto v_reusejp_5816_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v_a_5812_);
v___x_5817_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5816_;
}
v_reusejp_5816_:
{
lean_object* v___x_5818_; 
v___x_5818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5818_, 0, v___x_5817_);
return v___x_5818_;
}
}
}
else
{
lean_object* v_a_5821_; lean_object* v___x_5823_; uint8_t v_isShared_5824_; uint8_t v_isSharedCheck_5842_; 
v_a_5821_ = lean_ctor_get(v_x_5810_, 0);
v_isSharedCheck_5842_ = !lean_is_exclusive(v_x_5810_);
if (v_isSharedCheck_5842_ == 0)
{
v___x_5823_ = v_x_5810_;
v_isShared_5824_ = v_isSharedCheck_5842_;
goto v_resetjp_5822_;
}
else
{
lean_inc(v_a_5821_);
lean_dec(v_x_5810_);
v___x_5823_ = lean_box(0);
v_isShared_5824_ = v_isSharedCheck_5842_;
goto v_resetjp_5822_;
}
v_resetjp_5822_:
{
lean_object* v___f_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; uint8_t v___x_5828_; lean_object* v_val_5830_; lean_object* v___x_5833_; 
v___f_5825_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5825_, 0, v_a_5821_);
lean_closure_set(v___f_5825_, 1, v___f_5808_);
v___x_5826_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5827_ = lean_unsigned_to_nat(0u);
v___x_5828_ = 0;
v___x_5833_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5809_, v___x_5826_);
if (lean_obj_tag(v___x_5833_) == 0)
{
lean_object* v_a_5834_; lean_object* v___x_5836_; 
v_a_5834_ = lean_ctor_get(v___x_5833_, 0);
lean_inc(v_a_5834_);
lean_dec_ref_known(v___x_5833_, 1);
if (v_isShared_5824_ == 0)
{
lean_ctor_set(v___x_5823_, 0, v_a_5834_);
v___x_5836_ = v___x_5823_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v_a_5834_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
v_val_5830_ = v___x_5836_;
goto v___jp_5829_;
}
}
else
{
lean_object* v_a_5838_; lean_object* v___x_5840_; 
v_a_5838_ = lean_ctor_get(v___x_5833_, 0);
lean_inc(v_a_5838_);
lean_dec_ref_known(v___x_5833_, 1);
if (v_isShared_5824_ == 0)
{
lean_ctor_set_tag(v___x_5823_, 0);
lean_ctor_set(v___x_5823_, 0, v_a_5838_);
v___x_5840_ = v___x_5823_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v_a_5838_);
v___x_5840_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
v_val_5830_ = v___x_5840_;
goto v___jp_5829_;
}
}
v___jp_5829_:
{
lean_object* v___x_5831_; lean_object* v___x_5832_; 
v___x_5831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5831_, 0, v_val_5830_);
v___x_5832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5827_, v___x_5828_, v___x_5831_, v___f_5825_);
return v___x_5832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5843_, lean_object* v_a_5844_, lean_object* v_x_5845_, lean_object* v___y_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5843_, v_a_5844_, v_x_5845_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5848_, lean_object* v_a_5849_, lean_object* v_a_5850_, lean_object* v_headers_5851_){
_start:
{
lean_object* v___x_5853_; lean_object* v___f_5854_; lean_object* v___f_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; uint8_t v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5853_ = lean_box(v___y_5848_);
v___f_5854_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5854_, 0, v___x_5853_);
lean_closure_set(v___f_5854_, 1, v_headers_5851_);
v___f_5855_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5855_, 0, v___f_5854_);
lean_closure_set(v___f_5855_, 1, v_a_5849_);
v___x_5856_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5857_ = lean_unsigned_to_nat(0u);
v___x_5858_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5859_ = 0;
v___x_5860_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5850_, v___x_5856_, v___x_5858_);
v___x_5861_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5857_, v___x_5859_, v___x_5860_, v___f_5855_);
return v___x_5861_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5862_, lean_object* v_a_5863_, lean_object* v_a_5864_, lean_object* v_headers_5865_, lean_object* v___y_5866_){
_start:
{
uint16_t v___y_3061__boxed_5867_; lean_object* v_res_5868_; 
v___y_3061__boxed_5867_ = lean_unbox(v___y_5862_);
v_res_5868_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5867_, v_a_5863_, v_a_5864_, v_headers_5865_);
return v_res_5868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5869_, lean_object* v_x_5870_){
_start:
{
if (lean_obj_tag(v_x_5870_) == 0)
{
lean_object* v_a_5872_; lean_object* v___x_5874_; uint8_t v_isShared_5875_; uint8_t v_isSharedCheck_5880_; 
lean_dec_ref(v___f_5869_);
v_a_5872_ = lean_ctor_get(v_x_5870_, 0);
v_isSharedCheck_5880_ = !lean_is_exclusive(v_x_5870_);
if (v_isSharedCheck_5880_ == 0)
{
v___x_5874_ = v_x_5870_;
v_isShared_5875_ = v_isSharedCheck_5880_;
goto v_resetjp_5873_;
}
else
{
lean_inc(v_a_5872_);
lean_dec(v_x_5870_);
v___x_5874_ = lean_box(0);
v_isShared_5875_ = v_isSharedCheck_5880_;
goto v_resetjp_5873_;
}
v_resetjp_5873_:
{
lean_object* v___x_5877_; 
if (v_isShared_5875_ == 0)
{
v___x_5877_ = v___x_5874_;
goto v_reusejp_5876_;
}
else
{
lean_object* v_reuseFailAlloc_5879_; 
v_reuseFailAlloc_5879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5879_, 0, v_a_5872_);
v___x_5877_ = v_reuseFailAlloc_5879_;
goto v_reusejp_5876_;
}
v_reusejp_5876_:
{
lean_object* v___x_5878_; 
v___x_5878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5878_, 0, v___x_5877_);
return v___x_5878_;
}
}
}
else
{
lean_object* v_a_5881_; lean_object* v___x_5882_; 
v_a_5881_ = lean_ctor_get(v_x_5870_, 0);
lean_inc(v_a_5881_);
lean_dec_ref_known(v_x_5870_, 1);
v___x_5882_ = lean_apply_2(v___f_5869_, v_a_5881_, lean_box(0));
return v___x_5882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5883_, lean_object* v_x_5884_, lean_object* v___y_5885_){
_start:
{
lean_object* v_res_5886_; 
v_res_5886_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5883_, v_x_5884_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5887_, lean_object* v___f_5888_, lean_object* v_x_5889_){
_start:
{
if (lean_obj_tag(v_x_5889_) == 0)
{
lean_object* v_a_5891_; lean_object* v___x_5893_; uint8_t v_isShared_5894_; uint8_t v_isSharedCheck_5899_; 
lean_dec_ref(v___f_5888_);
lean_dec(v_value_5887_);
v_a_5891_ = lean_ctor_get(v_x_5889_, 0);
v_isSharedCheck_5899_ = !lean_is_exclusive(v_x_5889_);
if (v_isSharedCheck_5899_ == 0)
{
v___x_5893_ = v_x_5889_;
v_isShared_5894_ = v_isSharedCheck_5899_;
goto v_resetjp_5892_;
}
else
{
lean_inc(v_a_5891_);
lean_dec(v_x_5889_);
v___x_5893_ = lean_box(0);
v_isShared_5894_ = v_isSharedCheck_5899_;
goto v_resetjp_5892_;
}
v_resetjp_5892_:
{
lean_object* v___x_5896_; 
if (v_isShared_5894_ == 0)
{
v___x_5896_ = v___x_5893_;
goto v_reusejp_5895_;
}
else
{
lean_object* v_reuseFailAlloc_5898_; 
v_reuseFailAlloc_5898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5898_, 0, v_a_5891_);
v___x_5896_ = v_reuseFailAlloc_5898_;
goto v_reusejp_5895_;
}
v_reusejp_5895_:
{
lean_object* v___x_5897_; 
v___x_5897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5896_);
return v___x_5897_;
}
}
}
else
{
lean_object* v_a_5900_; lean_object* v___x_5902_; uint8_t v_isShared_5903_; uint8_t v_isSharedCheck_5925_; 
v_a_5900_ = lean_ctor_get(v_x_5889_, 0);
v_isSharedCheck_5925_ = !lean_is_exclusive(v_x_5889_);
if (v_isSharedCheck_5925_ == 0)
{
v___x_5902_ = v_x_5889_;
v_isShared_5903_ = v_isSharedCheck_5925_;
goto v_resetjp_5901_;
}
else
{
lean_inc(v_a_5900_);
lean_dec(v_x_5889_);
v___x_5902_ = lean_box(0);
v_isShared_5903_ = v_isSharedCheck_5925_;
goto v_resetjp_5901_;
}
v_resetjp_5901_:
{
lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; uint8_t v___x_5911_; lean_object* v_val_5913_; lean_object* v___x_5916_; 
v___x_5904_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5905_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5906_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5906_, 0, v_value_5887_);
lean_ctor_set(v___x_5906_, 1, v___x_5905_);
v___x_5907_ = lean_unsigned_to_nat(1u);
v___x_5908_ = lean_mk_empty_array_with_capacity(v___x_5907_);
v___x_5909_ = lean_array_push(v___x_5908_, v___x_5906_);
v___x_5910_ = lean_unsigned_to_nat(0u);
v___x_5911_ = 0;
v___x_5916_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5900_, v___x_5904_, v___x_5909_);
if (lean_obj_tag(v___x_5916_) == 0)
{
lean_object* v_a_5917_; lean_object* v___x_5919_; 
v_a_5917_ = lean_ctor_get(v___x_5916_, 0);
lean_inc(v_a_5917_);
lean_dec_ref_known(v___x_5916_, 1);
if (v_isShared_5903_ == 0)
{
lean_ctor_set(v___x_5902_, 0, v_a_5917_);
v___x_5919_ = v___x_5902_;
goto v_reusejp_5918_;
}
else
{
lean_object* v_reuseFailAlloc_5920_; 
v_reuseFailAlloc_5920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5920_, 0, v_a_5917_);
v___x_5919_ = v_reuseFailAlloc_5920_;
goto v_reusejp_5918_;
}
v_reusejp_5918_:
{
v_val_5913_ = v___x_5919_;
goto v___jp_5912_;
}
}
else
{
lean_object* v_a_5921_; lean_object* v___x_5923_; 
v_a_5921_ = lean_ctor_get(v___x_5916_, 0);
lean_inc(v_a_5921_);
lean_dec_ref_known(v___x_5916_, 1);
if (v_isShared_5903_ == 0)
{
lean_ctor_set_tag(v___x_5902_, 0);
lean_ctor_set(v___x_5902_, 0, v_a_5921_);
v___x_5923_ = v___x_5902_;
goto v_reusejp_5922_;
}
else
{
lean_object* v_reuseFailAlloc_5924_; 
v_reuseFailAlloc_5924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5924_, 0, v_a_5921_);
v___x_5923_ = v_reuseFailAlloc_5924_;
goto v_reusejp_5922_;
}
v_reusejp_5922_:
{
v_val_5913_ = v___x_5923_;
goto v___jp_5912_;
}
}
v___jp_5912_:
{
lean_object* v___x_5914_; lean_object* v___x_5915_; 
v___x_5914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5914_, 0, v_val_5913_);
v___x_5915_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5910_, v___x_5911_, v___x_5914_, v___f_5888_);
return v___x_5915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5926_, lean_object* v___f_5927_, lean_object* v_x_5928_, lean_object* v___y_5929_){
_start:
{
lean_object* v_res_5930_; 
v_res_5930_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5926_, v___f_5927_, v_x_5928_);
return v_res_5930_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5935_, lean_object* v_a_5936_, lean_object* v___x_5937_, lean_object* v___x_5938_, lean_object* v_x_5939_){
_start:
{
lean_object* v___y_5942_; lean_object* v___y_5943_; uint8_t v___y_5944_; lean_object* v_val_5945_; 
if (lean_obj_tag(v_x_5939_) == 0)
{
lean_object* v_a_5948_; lean_object* v___x_5950_; uint8_t v_isShared_5951_; uint8_t v_isSharedCheck_5956_; 
lean_dec(v_a_5936_);
lean_dec(v_a_5935_);
v_a_5948_ = lean_ctor_get(v_x_5939_, 0);
v_isSharedCheck_5956_ = !lean_is_exclusive(v_x_5939_);
if (v_isSharedCheck_5956_ == 0)
{
v___x_5950_ = v_x_5939_;
v_isShared_5951_ = v_isSharedCheck_5956_;
goto v_resetjp_5949_;
}
else
{
lean_inc(v_a_5948_);
lean_dec(v_x_5939_);
v___x_5950_ = lean_box(0);
v_isShared_5951_ = v_isSharedCheck_5956_;
goto v_resetjp_5949_;
}
v_resetjp_5949_:
{
lean_object* v___x_5953_; 
if (v_isShared_5951_ == 0)
{
v___x_5953_ = v___x_5950_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5955_; 
v_reuseFailAlloc_5955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5955_, 0, v_a_5948_);
v___x_5953_ = v_reuseFailAlloc_5955_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
lean_object* v___x_5954_; 
v___x_5954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5954_, 0, v___x_5953_);
return v___x_5954_;
}
}
}
else
{
lean_object* v_a_5957_; lean_object* v___x_5959_; uint8_t v_isShared_5960_; uint8_t v_isSharedCheck_5990_; 
v_a_5957_ = lean_ctor_get(v_x_5939_, 0);
v_isSharedCheck_5990_ = !lean_is_exclusive(v_x_5939_);
if (v_isSharedCheck_5990_ == 0)
{
v___x_5959_ = v_x_5939_;
v_isShared_5960_ = v_isSharedCheck_5990_;
goto v_resetjp_5958_;
}
else
{
lean_inc(v_a_5957_);
lean_dec(v_x_5939_);
v___x_5959_ = lean_box(0);
v_isShared_5960_ = v_isSharedCheck_5990_;
goto v_resetjp_5958_;
}
v_resetjp_5958_:
{
uint16_t v___y_5962_; lean_object* v___x_5986_; 
v___x_5986_ = l_Lasm_JS_Data_field(v_a_5957_, v___x_5938_);
if (lean_obj_tag(v___x_5986_) == 3)
{
double v_n_5987_; uint16_t v___x_5988_; 
v_n_5987_ = lean_ctor_get_float(v___x_5986_, 0);
lean_dec_ref_known(v___x_5986_, 0);
v___x_5988_ = lean_float_to_uint16(v_n_5987_);
v___y_5962_ = v___x_5988_;
goto v___jp_5961_;
}
else
{
uint16_t v___x_5989_; 
lean_dec(v___x_5986_);
v___x_5989_ = 0;
v___y_5962_ = v___x_5989_;
goto v___jp_5961_;
}
v___jp_5961_:
{
lean_object* v___x_5963_; lean_object* v___f_5964_; lean_object* v___x_5965_; 
v___x_5963_ = lean_box(v___y_5962_);
lean_inc(v_a_5935_);
v___f_5964_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5964_, 0, v___x_5963_);
lean_closure_set(v___f_5964_, 1, v_a_5935_);
lean_closure_set(v___f_5964_, 2, v_a_5936_);
v___x_5965_ = l_Lasm_JS_Data_field(v_a_5957_, v___x_5937_);
lean_dec(v_a_5957_);
if (lean_obj_tag(v___x_5965_) == 9)
{
lean_object* v_value_5966_; lean_object* v___f_5967_; lean_object* v___f_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; uint8_t v___x_5971_; lean_object* v___x_5972_; 
v_value_5966_ = lean_ctor_get(v___x_5965_, 0);
lean_inc(v_value_5966_);
lean_dec_ref_known(v___x_5965_, 2);
v___f_5967_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5967_, 0, v___f_5964_);
v___f_5968_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5968_, 0, v_value_5966_);
lean_closure_set(v___f_5968_, 1, v___f_5967_);
v___x_5969_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5970_ = lean_unsigned_to_nat(0u);
v___x_5971_ = 0;
v___x_5972_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5935_, v___x_5969_);
if (lean_obj_tag(v___x_5972_) == 0)
{
lean_object* v_a_5973_; lean_object* v___x_5975_; 
v_a_5973_ = lean_ctor_get(v___x_5972_, 0);
lean_inc(v_a_5973_);
lean_dec_ref_known(v___x_5972_, 1);
if (v_isShared_5960_ == 0)
{
lean_ctor_set(v___x_5959_, 0, v_a_5973_);
v___x_5975_ = v___x_5959_;
goto v_reusejp_5974_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5976_, 0, v_a_5973_);
v___x_5975_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5974_;
}
v_reusejp_5974_:
{
v___y_5942_ = v___x_5970_;
v___y_5943_ = v___f_5968_;
v___y_5944_ = v___x_5971_;
v_val_5945_ = v___x_5975_;
goto v___jp_5941_;
}
}
else
{
lean_object* v_a_5977_; lean_object* v___x_5979_; 
v_a_5977_ = lean_ctor_get(v___x_5972_, 0);
lean_inc(v_a_5977_);
lean_dec_ref_known(v___x_5972_, 1);
if (v_isShared_5960_ == 0)
{
lean_ctor_set_tag(v___x_5959_, 0);
lean_ctor_set(v___x_5959_, 0, v_a_5977_);
v___x_5979_ = v___x_5959_;
goto v_reusejp_5978_;
}
else
{
lean_object* v_reuseFailAlloc_5980_; 
v_reuseFailAlloc_5980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5980_, 0, v_a_5977_);
v___x_5979_ = v_reuseFailAlloc_5980_;
goto v_reusejp_5978_;
}
v_reusejp_5978_:
{
v___y_5942_ = v___x_5970_;
v___y_5943_ = v___f_5968_;
v___y_5944_ = v___x_5971_;
v_val_5945_ = v___x_5979_;
goto v___jp_5941_;
}
}
}
else
{
lean_object* v___f_5981_; lean_object* v___x_5982_; uint8_t v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; 
lean_dec(v___x_5965_);
lean_del_object(v___x_5959_);
lean_dec(v_a_5935_);
v___f_5981_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5981_, 0, v___f_5964_);
v___x_5982_ = lean_unsigned_to_nat(0u);
v___x_5983_ = 0;
v___x_5984_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5985_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5982_, v___x_5983_, v___x_5984_, v___f_5981_);
return v___x_5985_;
}
}
}
}
v___jp_5941_:
{
lean_object* v___x_5946_; lean_object* v___x_5947_; 
v___x_5946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5946_, 0, v_val_5945_);
v___x_5947_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5942_, v___y_5944_, v___x_5946_, v___y_5943_);
return v___x_5947_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5991_, lean_object* v_a_5992_, lean_object* v___x_5993_, lean_object* v___x_5994_, lean_object* v_x_5995_, lean_object* v___y_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5991_, v_a_5992_, v___x_5993_, v___x_5994_, v_x_5995_);
lean_dec_ref(v___x_5994_);
lean_dec_ref(v___x_5993_);
return v_res_5997_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_5998_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5999_ = lean_unsigned_to_nat(2u);
v___x_6000_ = lean_mk_empty_array_with_capacity(v___x_5999_);
v___x_6001_ = lean_array_push(v___x_6000_, v___x_5998_);
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_6002_, lean_object* v___x_6003_, lean_object* v_x_6004_){
_start:
{
if (lean_obj_tag(v_x_6004_) == 0)
{
lean_object* v_a_6006_; lean_object* v___x_6008_; uint8_t v_isShared_6009_; uint8_t v_isSharedCheck_6014_; 
lean_dec_ref(v___x_6003_);
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
lean_object* v_a_6015_; lean_object* v___x_6017_; uint8_t v_isShared_6018_; uint8_t v_isSharedCheck_6038_; 
v_a_6015_ = lean_ctor_get(v_x_6004_, 0);
v_isSharedCheck_6038_ = !lean_is_exclusive(v_x_6004_);
if (v_isSharedCheck_6038_ == 0)
{
v___x_6017_ = v_x_6004_;
v_isShared_6018_ = v_isSharedCheck_6038_;
goto v_resetjp_6016_;
}
else
{
lean_inc(v_a_6015_);
lean_dec(v_x_6004_);
v___x_6017_ = lean_box(0);
v_isShared_6018_ = v_isSharedCheck_6038_;
goto v_resetjp_6016_;
}
v_resetjp_6016_:
{
lean_object* v___x_6019_; lean_object* v___f_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; uint8_t v___x_6024_; lean_object* v_val_6026_; lean_object* v___x_6029_; 
v___x_6019_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_6003_);
lean_inc(v_a_6015_);
v___f_6020_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_6020_, 0, v_a_6002_);
lean_closure_set(v___f_6020_, 1, v_a_6015_);
lean_closure_set(v___f_6020_, 2, v___x_6003_);
lean_closure_set(v___f_6020_, 3, v___x_6019_);
v___x_6021_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_6022_ = lean_array_push(v___x_6021_, v___x_6003_);
v___x_6023_ = lean_unsigned_to_nat(0u);
v___x_6024_ = 0;
v___x_6029_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_6015_, v___x_6022_);
if (lean_obj_tag(v___x_6029_) == 0)
{
lean_object* v_a_6030_; lean_object* v___x_6032_; 
v_a_6030_ = lean_ctor_get(v___x_6029_, 0);
lean_inc(v_a_6030_);
lean_dec_ref_known(v___x_6029_, 1);
if (v_isShared_6018_ == 0)
{
lean_ctor_set(v___x_6017_, 0, v_a_6030_);
v___x_6032_ = v___x_6017_;
goto v_reusejp_6031_;
}
else
{
lean_object* v_reuseFailAlloc_6033_; 
v_reuseFailAlloc_6033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6033_, 0, v_a_6030_);
v___x_6032_ = v_reuseFailAlloc_6033_;
goto v_reusejp_6031_;
}
v_reusejp_6031_:
{
v_val_6026_ = v___x_6032_;
goto v___jp_6025_;
}
}
else
{
lean_object* v_a_6034_; lean_object* v___x_6036_; 
v_a_6034_ = lean_ctor_get(v___x_6029_, 0);
lean_inc(v_a_6034_);
lean_dec_ref_known(v___x_6029_, 1);
if (v_isShared_6018_ == 0)
{
lean_ctor_set_tag(v___x_6017_, 0);
lean_ctor_set(v___x_6017_, 0, v_a_6034_);
v___x_6036_ = v___x_6017_;
goto v_reusejp_6035_;
}
else
{
lean_object* v_reuseFailAlloc_6037_; 
v_reuseFailAlloc_6037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6037_, 0, v_a_6034_);
v___x_6036_ = v_reuseFailAlloc_6037_;
goto v_reusejp_6035_;
}
v_reusejp_6035_:
{
v_val_6026_ = v___x_6036_;
goto v___jp_6025_;
}
}
v___jp_6025_:
{
lean_object* v___x_6027_; lean_object* v___x_6028_; 
v___x_6027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6027_, 0, v_val_6026_);
v___x_6028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6023_, v___x_6024_, v___x_6027_, v___f_6020_);
return v___x_6028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6039_, lean_object* v___x_6040_, lean_object* v_x_6041_, lean_object* v___y_6042_){
_start:
{
lean_object* v_res_6043_; 
v_res_6043_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6039_, v___x_6040_, v_x_6041_);
return v_res_6043_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6045_; uint8_t v___x_6046_; uint64_t v___x_6047_; 
v___x_6045_ = 0ULL;
v___x_6046_ = 0;
v___x_6047_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6046_, v___x_6045_);
return v___x_6047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6048_, lean_object* v_args_6049_, lean_object* v_this_6050_){
_start:
{
lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; uint32_t v___x_6055_; uint64_t v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; 
v___x_6052_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6053_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6053_, 0, v_f_6048_);
lean_ctor_set(v___x_6053_, 1, v___x_6052_);
v___x_6054_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6055_ = 205;
v___x_6056_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6057_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6057_, 0, v_args_6049_);
v___x_6058_ = lean_unsigned_to_nat(3u);
v___x_6059_ = lean_mk_empty_array_with_capacity(v___x_6058_);
v___x_6060_ = lean_array_push(v___x_6059_, v___x_6053_);
v___x_6061_ = lean_array_push(v___x_6060_, v_this_6050_);
v___x_6062_ = lean_array_push(v___x_6061_, v___x_6057_);
v___x_6063_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6063_, 0, v___x_6062_);
v___x_6064_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6054_, v___x_6055_, v___x_6056_, v___x_6063_, v___x_6052_);
return v___x_6064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6065_, lean_object* v_args_6066_, lean_object* v_this_6067_, lean_object* v___y_6068_){
_start:
{
lean_object* v_res_6069_; 
v_res_6069_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6065_, v_args_6066_, v_this_6067_);
return v_res_6069_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6080_, lean_object* v_a_6081_, lean_object* v_x_6082_){
_start:
{
if (lean_obj_tag(v_x_6082_) == 0)
{
lean_object* v_a_6084_; lean_object* v___x_6086_; uint8_t v_isShared_6087_; uint8_t v_isSharedCheck_6092_; 
lean_dec(v_a_6081_);
lean_dec_ref(v_req_6080_);
v_a_6084_ = lean_ctor_get(v_x_6082_, 0);
v_isSharedCheck_6092_ = !lean_is_exclusive(v_x_6082_);
if (v_isSharedCheck_6092_ == 0)
{
v___x_6086_ = v_x_6082_;
v_isShared_6087_ = v_isSharedCheck_6092_;
goto v_resetjp_6085_;
}
else
{
lean_inc(v_a_6084_);
lean_dec(v_x_6082_);
v___x_6086_ = lean_box(0);
v_isShared_6087_ = v_isSharedCheck_6092_;
goto v_resetjp_6085_;
}
v_resetjp_6085_:
{
lean_object* v___x_6089_; 
if (v_isShared_6087_ == 0)
{
v___x_6089_ = v___x_6086_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6091_; 
v_reuseFailAlloc_6091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6091_, 0, v_a_6084_);
v___x_6089_ = v_reuseFailAlloc_6091_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
lean_object* v___x_6090_; 
v___x_6090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6089_);
return v___x_6090_;
}
}
}
else
{
lean_object* v_a_6093_; lean_object* v_method_6094_; lean_object* v_url_6095_; lean_object* v_headers_6096_; lean_object* v_body_6097_; lean_object* v___y_6099_; lean_object* v___x_6129_; uint8_t v___x_6130_; 
v_a_6093_ = lean_ctor_get(v_x_6082_, 0);
lean_inc(v_a_6093_);
lean_dec_ref_known(v_x_6082_, 1);
v_method_6094_ = lean_ctor_get(v_req_6080_, 0);
lean_inc_ref(v_method_6094_);
v_url_6095_ = lean_ctor_get(v_req_6080_, 1);
lean_inc_ref(v_url_6095_);
v_headers_6096_ = lean_ctor_get(v_req_6080_, 2);
lean_inc_ref(v_headers_6096_);
v_body_6097_ = lean_ctor_get(v_req_6080_, 3);
lean_inc_ref(v_body_6097_);
lean_dec_ref(v_req_6080_);
v___x_6129_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6130_ = lean_string_dec_eq(v_method_6094_, v___x_6129_);
if (v___x_6130_ == 0)
{
lean_object* v___x_6131_; uint8_t v___x_6132_; 
v___x_6131_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6132_ = lean_string_dec_eq(v_method_6094_, v___x_6131_);
if (v___x_6132_ == 0)
{
lean_object* v___x_6133_; 
v___x_6133_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6133_, 0, v_body_6097_);
v___y_6099_ = v___x_6133_;
goto v___jp_6098_;
}
else
{
lean_dec_ref(v_body_6097_);
goto v___jp_6127_;
}
}
else
{
lean_dec_ref(v_body_6097_);
goto v___jp_6127_;
}
v___jp_6098_:
{
lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___f_6104_; size_t v_sz_6105_; size_t v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; uint8_t v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; 
v___x_6100_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6101_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6101_, 0, v_method_6094_);
v___x_6102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6102_, 0, v___x_6100_);
lean_ctor_set(v___x_6102_, 1, v___x_6101_);
v___x_6103_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6104_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6104_, 0, v_a_6081_);
lean_closure_set(v___f_6104_, 1, v___x_6103_);
v_sz_6105_ = lean_array_size(v_headers_6096_);
v___x_6106_ = ((size_t)0ULL);
v___x_6107_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6105_, v___x_6106_, v_headers_6096_);
v___x_6108_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6108_, 0, v___x_6107_);
v___x_6109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6109_, 0, v___x_6103_);
lean_ctor_set(v___x_6109_, 1, v___x_6108_);
v___x_6110_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6111_, 0, v___x_6110_);
lean_ctor_set(v___x_6111_, 1, v___y_6099_);
v___x_6112_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6113_, 0, v___x_6111_);
lean_ctor_set(v___x_6113_, 1, v___x_6112_);
v___x_6114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6114_, 0, v___x_6109_);
lean_ctor_set(v___x_6114_, 1, v___x_6113_);
v___x_6115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6115_, 0, v___x_6102_);
lean_ctor_set(v___x_6115_, 1, v___x_6114_);
v___x_6116_ = l_Lasm_JS_obj(v___x_6115_);
v___x_6117_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6117_, 0, v_url_6095_);
v___x_6118_ = lean_unsigned_to_nat(2u);
v___x_6119_ = lean_mk_empty_array_with_capacity(v___x_6118_);
v___x_6120_ = lean_array_push(v___x_6119_, v___x_6117_);
v___x_6121_ = lean_array_push(v___x_6120_, v___x_6116_);
v___x_6122_ = lean_box(0);
v___x_6123_ = lean_unsigned_to_nat(0u);
v___x_6124_ = 0;
v___x_6125_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6093_, v___x_6121_, v___x_6122_);
v___x_6126_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6123_, v___x_6124_, v___x_6125_, v___f_6104_);
return v___x_6126_;
}
v___jp_6127_:
{
lean_object* v___x_6128_; 
v___x_6128_ = lean_box(0);
v___y_6099_ = v___x_6128_;
goto v___jp_6098_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6134_, lean_object* v_a_6135_, lean_object* v_x_6136_, lean_object* v___y_6137_){
_start:
{
lean_object* v_res_6138_; 
v_res_6138_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6134_, v_a_6135_, v_x_6136_);
return v_res_6138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6140_, lean_object* v_x_6141_){
_start:
{
if (lean_obj_tag(v_x_6141_) == 0)
{
lean_object* v_a_6143_; lean_object* v___x_6145_; uint8_t v_isShared_6146_; uint8_t v_isSharedCheck_6151_; 
lean_dec_ref(v_req_6140_);
v_a_6143_ = lean_ctor_get(v_x_6141_, 0);
v_isSharedCheck_6151_ = !lean_is_exclusive(v_x_6141_);
if (v_isSharedCheck_6151_ == 0)
{
v___x_6145_ = v_x_6141_;
v_isShared_6146_ = v_isSharedCheck_6151_;
goto v_resetjp_6144_;
}
else
{
lean_inc(v_a_6143_);
lean_dec(v_x_6141_);
v___x_6145_ = lean_box(0);
v_isShared_6146_ = v_isSharedCheck_6151_;
goto v_resetjp_6144_;
}
v_resetjp_6144_:
{
lean_object* v___x_6148_; 
if (v_isShared_6146_ == 0)
{
v___x_6148_ = v___x_6145_;
goto v_reusejp_6147_;
}
else
{
lean_object* v_reuseFailAlloc_6150_; 
v_reuseFailAlloc_6150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6150_, 0, v_a_6143_);
v___x_6148_ = v_reuseFailAlloc_6150_;
goto v_reusejp_6147_;
}
v_reusejp_6147_:
{
lean_object* v___x_6149_; 
v___x_6149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6148_);
return v___x_6149_;
}
}
}
else
{
lean_object* v_a_6152_; lean_object* v___x_6154_; uint8_t v_isShared_6155_; uint8_t v_isSharedCheck_6173_; 
v_a_6152_ = lean_ctor_get(v_x_6141_, 0);
v_isSharedCheck_6173_ = !lean_is_exclusive(v_x_6141_);
if (v_isSharedCheck_6173_ == 0)
{
v___x_6154_ = v_x_6141_;
v_isShared_6155_ = v_isSharedCheck_6173_;
goto v_resetjp_6153_;
}
else
{
lean_inc(v_a_6152_);
lean_dec(v_x_6141_);
v___x_6154_ = lean_box(0);
v_isShared_6155_ = v_isSharedCheck_6173_;
goto v_resetjp_6153_;
}
v_resetjp_6153_:
{
lean_object* v___f_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; uint8_t v___x_6159_; lean_object* v_val_6161_; lean_object* v___x_6164_; 
lean_inc(v_a_6152_);
v___f_6156_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6156_, 0, v_req_6140_);
lean_closure_set(v___f_6156_, 1, v_a_6152_);
v___x_6157_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6158_ = lean_unsigned_to_nat(0u);
v___x_6159_ = 0;
v___x_6164_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6152_, v___x_6157_);
if (lean_obj_tag(v___x_6164_) == 0)
{
lean_object* v_a_6165_; lean_object* v___x_6167_; 
v_a_6165_ = lean_ctor_get(v___x_6164_, 0);
lean_inc(v_a_6165_);
lean_dec_ref_known(v___x_6164_, 1);
if (v_isShared_6155_ == 0)
{
lean_ctor_set(v___x_6154_, 0, v_a_6165_);
v___x_6167_ = v___x_6154_;
goto v_reusejp_6166_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v_a_6165_);
v___x_6167_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6166_;
}
v_reusejp_6166_:
{
v_val_6161_ = v___x_6167_;
goto v___jp_6160_;
}
}
else
{
lean_object* v_a_6169_; lean_object* v___x_6171_; 
v_a_6169_ = lean_ctor_get(v___x_6164_, 0);
lean_inc(v_a_6169_);
lean_dec_ref_known(v___x_6164_, 1);
if (v_isShared_6155_ == 0)
{
lean_ctor_set_tag(v___x_6154_, 0);
lean_ctor_set(v___x_6154_, 0, v_a_6169_);
v___x_6171_ = v___x_6154_;
goto v_reusejp_6170_;
}
else
{
lean_object* v_reuseFailAlloc_6172_; 
v_reuseFailAlloc_6172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6172_, 0, v_a_6169_);
v___x_6171_ = v_reuseFailAlloc_6172_;
goto v_reusejp_6170_;
}
v_reusejp_6170_:
{
v_val_6161_ = v___x_6171_;
goto v___jp_6160_;
}
}
v___jp_6160_:
{
lean_object* v___x_6162_; lean_object* v___x_6163_; 
v___x_6162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6162_, 0, v_val_6161_);
v___x_6163_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6158_, v___x_6159_, v___x_6162_, v___f_6156_);
return v___x_6163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6174_, lean_object* v_x_6175_, lean_object* v___y_6176_){
_start:
{
lean_object* v_res_6177_; 
v_res_6177_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6174_, v_x_6175_);
return v_res_6177_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6178_){
_start:
{
lean_object* v___f_6180_; lean_object* v___x_6181_; uint8_t v___x_6182_; lean_object* v_val_6184_; lean_object* v___x_6187_; 
v___f_6180_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6180_, 0, v_req_6178_);
v___x_6181_ = lean_unsigned_to_nat(0u);
v___x_6182_ = 0;
v___x_6187_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6187_) == 0)
{
lean_object* v_a_6188_; lean_object* v___x_6190_; uint8_t v_isShared_6191_; uint8_t v_isSharedCheck_6195_; 
v_a_6188_ = lean_ctor_get(v___x_6187_, 0);
v_isSharedCheck_6195_ = !lean_is_exclusive(v___x_6187_);
if (v_isSharedCheck_6195_ == 0)
{
v___x_6190_ = v___x_6187_;
v_isShared_6191_ = v_isSharedCheck_6195_;
goto v_resetjp_6189_;
}
else
{
lean_inc(v_a_6188_);
lean_dec(v___x_6187_);
v___x_6190_ = lean_box(0);
v_isShared_6191_ = v_isSharedCheck_6195_;
goto v_resetjp_6189_;
}
v_resetjp_6189_:
{
lean_object* v___x_6193_; 
if (v_isShared_6191_ == 0)
{
lean_ctor_set_tag(v___x_6190_, 1);
v___x_6193_ = v___x_6190_;
goto v_reusejp_6192_;
}
else
{
lean_object* v_reuseFailAlloc_6194_; 
v_reuseFailAlloc_6194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6194_, 0, v_a_6188_);
v___x_6193_ = v_reuseFailAlloc_6194_;
goto v_reusejp_6192_;
}
v_reusejp_6192_:
{
v_val_6184_ = v___x_6193_;
goto v___jp_6183_;
}
}
}
else
{
lean_object* v_a_6196_; lean_object* v___x_6198_; uint8_t v_isShared_6199_; uint8_t v_isSharedCheck_6203_; 
v_a_6196_ = lean_ctor_get(v___x_6187_, 0);
v_isSharedCheck_6203_ = !lean_is_exclusive(v___x_6187_);
if (v_isSharedCheck_6203_ == 0)
{
v___x_6198_ = v___x_6187_;
v_isShared_6199_ = v_isSharedCheck_6203_;
goto v_resetjp_6197_;
}
else
{
lean_inc(v_a_6196_);
lean_dec(v___x_6187_);
v___x_6198_ = lean_box(0);
v_isShared_6199_ = v_isSharedCheck_6203_;
goto v_resetjp_6197_;
}
v_resetjp_6197_:
{
lean_object* v___x_6201_; 
if (v_isShared_6199_ == 0)
{
lean_ctor_set_tag(v___x_6198_, 0);
v___x_6201_ = v___x_6198_;
goto v_reusejp_6200_;
}
else
{
lean_object* v_reuseFailAlloc_6202_; 
v_reuseFailAlloc_6202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6202_, 0, v_a_6196_);
v___x_6201_ = v_reuseFailAlloc_6202_;
goto v_reusejp_6200_;
}
v_reusejp_6200_:
{
v_val_6184_ = v___x_6201_;
goto v___jp_6183_;
}
}
}
v___jp_6183_:
{
lean_object* v___x_6185_; lean_object* v___x_6186_; 
v___x_6185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6185_, 0, v_val_6184_);
v___x_6186_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6181_, v___x_6182_, v___x_6185_, v___f_6180_);
return v___x_6186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6204_, lean_object* v_a_6205_){
_start:
{
lean_object* v_res_6206_; 
v_res_6206_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6204_);
return v_res_6206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6207_){
_start:
{
if (lean_obj_tag(v_x_6207_) == 0)
{
lean_object* v_a_6209_; lean_object* v___x_6211_; uint8_t v_isShared_6212_; uint8_t v_isSharedCheck_6217_; 
v_a_6209_ = lean_ctor_get(v_x_6207_, 0);
v_isSharedCheck_6217_ = !lean_is_exclusive(v_x_6207_);
if (v_isSharedCheck_6217_ == 0)
{
v___x_6211_ = v_x_6207_;
v_isShared_6212_ = v_isSharedCheck_6217_;
goto v_resetjp_6210_;
}
else
{
lean_inc(v_a_6209_);
lean_dec(v_x_6207_);
v___x_6211_ = lean_box(0);
v_isShared_6212_ = v_isSharedCheck_6217_;
goto v_resetjp_6210_;
}
v_resetjp_6210_:
{
lean_object* v___x_6214_; 
if (v_isShared_6212_ == 0)
{
v___x_6214_ = v___x_6211_;
goto v_reusejp_6213_;
}
else
{
lean_object* v_reuseFailAlloc_6216_; 
v_reuseFailAlloc_6216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6216_, 0, v_a_6209_);
v___x_6214_ = v_reuseFailAlloc_6216_;
goto v_reusejp_6213_;
}
v_reusejp_6213_:
{
lean_object* v___x_6215_; 
v___x_6215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6215_, 0, v___x_6214_);
return v___x_6215_;
}
}
}
else
{
lean_object* v_a_6218_; lean_object* v___x_6219_; 
v_a_6218_ = lean_ctor_get(v_x_6207_, 0);
lean_inc(v_a_6218_);
lean_dec_ref_known(v_x_6207_, 1);
v___x_6219_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6218_);
lean_dec(v_a_6218_);
if (lean_obj_tag(v___x_6219_) == 0)
{
lean_object* v_a_6220_; lean_object* v___x_6222_; uint8_t v_isShared_6223_; uint8_t v_isSharedCheck_6229_; 
v_a_6220_ = lean_ctor_get(v___x_6219_, 0);
v_isSharedCheck_6229_ = !lean_is_exclusive(v___x_6219_);
if (v_isSharedCheck_6229_ == 0)
{
v___x_6222_ = v___x_6219_;
v_isShared_6223_ = v_isSharedCheck_6229_;
goto v_resetjp_6221_;
}
else
{
lean_inc(v_a_6220_);
lean_dec(v___x_6219_);
v___x_6222_ = lean_box(0);
v_isShared_6223_ = v_isSharedCheck_6229_;
goto v_resetjp_6221_;
}
v_resetjp_6221_:
{
lean_object* v___x_6224_; lean_object* v___x_6226_; 
v___x_6224_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6224_, 0, v_a_6220_);
if (v_isShared_6223_ == 0)
{
lean_ctor_set(v___x_6222_, 0, v___x_6224_);
v___x_6226_ = v___x_6222_;
goto v_reusejp_6225_;
}
else
{
lean_object* v_reuseFailAlloc_6228_; 
v_reuseFailAlloc_6228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6228_, 0, v___x_6224_);
v___x_6226_ = v_reuseFailAlloc_6228_;
goto v_reusejp_6225_;
}
v_reusejp_6225_:
{
lean_object* v___x_6227_; 
v___x_6227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6227_, 0, v___x_6226_);
return v___x_6227_;
}
}
}
else
{
lean_object* v_a_6230_; lean_object* v___x_6232_; uint8_t v_isShared_6233_; uint8_t v_isSharedCheck_6238_; 
v_a_6230_ = lean_ctor_get(v___x_6219_, 0);
v_isSharedCheck_6238_ = !lean_is_exclusive(v___x_6219_);
if (v_isSharedCheck_6238_ == 0)
{
v___x_6232_ = v___x_6219_;
v_isShared_6233_ = v_isSharedCheck_6238_;
goto v_resetjp_6231_;
}
else
{
lean_inc(v_a_6230_);
lean_dec(v___x_6219_);
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
v_reuseFailAlloc_6237_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6239_, lean_object* v___y_6240_){
_start:
{
lean_object* v_res_6241_; 
v_res_6241_ = l_Lasm_Fetch_fetch___lam__0(v_x_6239_);
return v_res_6241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6247_){
_start:
{
if (lean_obj_tag(v_x_6247_) == 0)
{
lean_object* v___x_6248_; 
v___x_6248_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6248_;
}
else
{
lean_object* v_val_6249_; 
v_val_6249_ = lean_ctor_get(v_x_6247_, 0);
lean_inc(v_val_6249_);
return v_val_6249_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6250_){
_start:
{
lean_object* v_res_6251_; 
v_res_6251_ = l_Lasm_Fetch_fetch___lam__1(v_x_6250_);
lean_dec(v_x_6250_);
return v_res_6251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6252_, lean_object* v___f_6253_, uint8_t v___x_6254_, lean_object* v___f_6255_, lean_object* v_x_6256_){
_start:
{
if (lean_obj_tag(v_x_6256_) == 0)
{
lean_object* v_a_6258_; lean_object* v___x_6260_; uint8_t v_isShared_6261_; uint8_t v_isSharedCheck_6266_; 
lean_dec_ref(v___f_6255_);
lean_dec_ref(v___f_6253_);
v_a_6258_ = lean_ctor_get(v_x_6256_, 0);
v_isSharedCheck_6266_ = !lean_is_exclusive(v_x_6256_);
if (v_isSharedCheck_6266_ == 0)
{
v___x_6260_ = v_x_6256_;
v_isShared_6261_ = v_isSharedCheck_6266_;
goto v_resetjp_6259_;
}
else
{
lean_inc(v_a_6258_);
lean_dec(v_x_6256_);
v___x_6260_ = lean_box(0);
v_isShared_6261_ = v_isSharedCheck_6266_;
goto v_resetjp_6259_;
}
v_resetjp_6259_:
{
lean_object* v___x_6263_; 
if (v_isShared_6261_ == 0)
{
v___x_6263_ = v___x_6260_;
goto v_reusejp_6262_;
}
else
{
lean_object* v_reuseFailAlloc_6265_; 
v_reuseFailAlloc_6265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6265_, 0, v_a_6258_);
v___x_6263_ = v_reuseFailAlloc_6265_;
goto v_reusejp_6262_;
}
v_reusejp_6262_:
{
lean_object* v___x_6264_; 
v___x_6264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6264_, 0, v___x_6263_);
return v___x_6264_;
}
}
}
else
{
lean_object* v___x_6267_; lean_object* v___x_6268_; uint8_t v___x_6269_; lean_object* v___x_6270_; lean_object* v___x_6271_; lean_object* v___x_6272_; 
lean_dec_ref_known(v_x_6256_, 1);
v___x_6267_ = lean_io_promise_result_opt(v_a_6252_);
v___x_6268_ = lean_unsigned_to_nat(0u);
v___x_6269_ = 1;
v___x_6270_ = lean_task_map(v___f_6253_, v___x_6267_, v___x_6268_, v___x_6269_);
v___x_6271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6271_, 0, v___x_6270_);
v___x_6272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6268_, v___x_6254_, v___x_6271_, v___f_6255_);
return v___x_6272_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6273_, lean_object* v___f_6274_, lean_object* v___x_6275_, lean_object* v___f_6276_, lean_object* v_x_6277_, lean_object* v___y_6278_){
_start:
{
uint8_t v___x_1064__boxed_6279_; lean_object* v_res_6280_; 
v___x_1064__boxed_6279_ = lean_unbox(v___x_6275_);
v_res_6280_ = l_Lasm_Fetch_fetch___lam__2(v_a_6273_, v___f_6274_, v___x_1064__boxed_6279_, v___f_6276_, v_x_6277_);
lean_dec(v_a_6273_);
return v_res_6280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6281_, lean_object* v___f_6282_, uint8_t v___x_6283_, lean_object* v___f_6284_, lean_object* v_options_6285_, lean_object* v_x_6286_){
_start:
{
if (lean_obj_tag(v_x_6286_) == 0)
{
lean_object* v_a_6288_; lean_object* v___x_6290_; uint8_t v_isShared_6291_; uint8_t v_isSharedCheck_6296_; 
lean_dec_ref(v___f_6284_);
lean_dec_ref(v___f_6282_);
v_a_6288_ = lean_ctor_get(v_x_6286_, 0);
v_isSharedCheck_6296_ = !lean_is_exclusive(v_x_6286_);
if (v_isSharedCheck_6296_ == 0)
{
v___x_6290_ = v_x_6286_;
v_isShared_6291_ = v_isSharedCheck_6296_;
goto v_resetjp_6289_;
}
else
{
lean_inc(v_a_6288_);
lean_dec(v_x_6286_);
v___x_6290_ = lean_box(0);
v_isShared_6291_ = v_isSharedCheck_6296_;
goto v_resetjp_6289_;
}
v_resetjp_6289_:
{
lean_object* v___x_6293_; 
if (v_isShared_6291_ == 0)
{
v___x_6293_ = v___x_6290_;
goto v_reusejp_6292_;
}
else
{
lean_object* v_reuseFailAlloc_6295_; 
v_reuseFailAlloc_6295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6295_, 0, v_a_6288_);
v___x_6293_ = v_reuseFailAlloc_6295_;
goto v_reusejp_6292_;
}
v_reusejp_6292_:
{
lean_object* v___x_6294_; 
v___x_6294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6294_, 0, v___x_6293_);
return v___x_6294_;
}
}
}
else
{
lean_object* v_a_6297_; lean_object* v___x_6299_; uint8_t v_isShared_6300_; uint8_t v_isSharedCheck_6327_; 
v_a_6297_ = lean_ctor_get(v_x_6286_, 0);
v_isSharedCheck_6327_ = !lean_is_exclusive(v_x_6286_);
if (v_isSharedCheck_6327_ == 0)
{
v___x_6299_ = v_x_6286_;
v_isShared_6300_ = v_isSharedCheck_6327_;
goto v_resetjp_6298_;
}
else
{
lean_inc(v_a_6297_);
lean_dec(v_x_6286_);
v___x_6299_ = lean_box(0);
v_isShared_6300_ = v_isSharedCheck_6327_;
goto v_resetjp_6298_;
}
v_resetjp_6298_:
{
lean_object* v_method_6301_; lean_object* v_url_6302_; lean_object* v_headers_6303_; lean_object* v_body_6304_; lean_object* v___x_6305_; lean_object* v___f_6306_; uint8_t v___y_6308_; lean_object* v___y_6309_; lean_object* v_val_6310_; lean_object* v___y_6314_; 
v_method_6301_ = lean_ctor_get(v_req_6281_, 0);
v_url_6302_ = lean_ctor_get(v_req_6281_, 1);
v_headers_6303_ = lean_ctor_get(v_req_6281_, 2);
v_body_6304_ = lean_ctor_get(v_req_6281_, 3);
v___x_6305_ = lean_box(v___x_6283_);
lean_inc(v_a_6297_);
v___f_6306_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6306_, 0, v_a_6297_);
lean_closure_set(v___f_6306_, 1, v___f_6282_);
lean_closure_set(v___f_6306_, 2, v___x_6305_);
lean_closure_set(v___f_6306_, 3, v___f_6284_);
if (lean_obj_tag(v_options_6285_) == 0)
{
lean_object* v___x_6325_; 
v___x_6325_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6314_ = v___x_6325_;
goto v___jp_6313_;
}
else
{
lean_object* v_val_6326_; 
v_val_6326_ = lean_ctor_get(v_options_6285_, 0);
v___y_6314_ = v_val_6326_;
goto v___jp_6313_;
}
v___jp_6307_:
{
lean_object* v___x_6311_; lean_object* v___x_6312_; 
v___x_6311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6311_, 0, v_val_6310_);
v___x_6312_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6309_, v___y_6308_, v___x_6311_, v___f_6306_);
return v___x_6312_;
}
v___jp_6313_:
{
lean_object* v___x_6315_; lean_object* v___x_6316_; 
v___x_6315_ = lean_unsigned_to_nat(0u);
v___x_6316_ = lasm_fetch_send(v_a_6297_, v_method_6301_, v_url_6302_, v_headers_6303_, v_body_6304_, v___y_6314_);
lean_dec(v_a_6297_);
if (lean_obj_tag(v___x_6316_) == 0)
{
lean_object* v_a_6317_; lean_object* v___x_6319_; 
v_a_6317_ = lean_ctor_get(v___x_6316_, 0);
lean_inc(v_a_6317_);
lean_dec_ref_known(v___x_6316_, 1);
if (v_isShared_6300_ == 0)
{
lean_ctor_set(v___x_6299_, 0, v_a_6317_);
v___x_6319_ = v___x_6299_;
goto v_reusejp_6318_;
}
else
{
lean_object* v_reuseFailAlloc_6320_; 
v_reuseFailAlloc_6320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6320_, 0, v_a_6317_);
v___x_6319_ = v_reuseFailAlloc_6320_;
goto v_reusejp_6318_;
}
v_reusejp_6318_:
{
v___y_6308_ = v___x_6283_;
v___y_6309_ = v___x_6315_;
v_val_6310_ = v___x_6319_;
goto v___jp_6307_;
}
}
else
{
lean_object* v_a_6321_; lean_object* v___x_6323_; 
v_a_6321_ = lean_ctor_get(v___x_6316_, 0);
lean_inc(v_a_6321_);
lean_dec_ref_known(v___x_6316_, 1);
if (v_isShared_6300_ == 0)
{
lean_ctor_set_tag(v___x_6299_, 0);
lean_ctor_set(v___x_6299_, 0, v_a_6321_);
v___x_6323_ = v___x_6299_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_a_6321_);
v___x_6323_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
v___y_6308_ = v___x_6283_;
v___y_6309_ = v___x_6315_;
v_val_6310_ = v___x_6323_;
goto v___jp_6307_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6328_, lean_object* v___f_6329_, lean_object* v___x_6330_, lean_object* v___f_6331_, lean_object* v_options_6332_, lean_object* v_x_6333_, lean_object* v___y_6334_){
_start:
{
uint8_t v___x_1113__boxed_6335_; lean_object* v_res_6336_; 
v___x_1113__boxed_6335_ = lean_unbox(v___x_6330_);
v_res_6336_ = l_Lasm_Fetch_fetch___lam__3(v_req_6328_, v___f_6329_, v___x_1113__boxed_6335_, v___f_6331_, v_options_6332_, v_x_6333_);
lean_dec(v_options_6332_);
lean_dec_ref(v_req_6328_);
return v_res_6336_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6337_; uint32_t v___x_6338_; 
v___x_6337_ = lean_box(0);
v___x_6338_ = lasm_fetch_platform(v___x_6337_);
return v___x_6338_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6339_; uint32_t v___x_6340_; uint8_t v___x_6341_; 
v___x_6339_ = 0;
v___x_6340_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6341_ = lean_uint32_dec_eq(v___x_6340_, v___x_6339_);
return v___x_6341_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6344_; uint32_t v___x_6345_; uint8_t v___x_6346_; 
v___x_6344_ = 2;
v___x_6345_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6346_ = lean_uint32_dec_eq(v___x_6345_, v___x_6344_);
return v___x_6346_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6347_; uint32_t v___x_6348_; uint8_t v___x_6349_; 
v___x_6347_ = 4;
v___x_6348_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6349_ = lean_uint32_dec_eq(v___x_6348_, v___x_6347_);
return v___x_6349_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6350_; uint32_t v___x_6351_; uint8_t v___x_6352_; 
v___x_6350_ = 1;
v___x_6351_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6352_ = lean_uint32_dec_eq(v___x_6351_, v___x_6350_);
return v___x_6352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6367_, lean_object* v_options_6368_){
_start:
{
uint8_t v___x_6370_; 
v___x_6370_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6370_ == 0)
{
lean_object* v___f_6371_; lean_object* v___f_6372_; lean_object* v___x_6373_; lean_object* v___f_6374_; uint8_t v___x_6381_; 
v___f_6371_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6372_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6373_ = lean_box(v___x_6370_);
v___f_6374_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6374_, 0, v_req_6367_);
lean_closure_set(v___f_6374_, 1, v___f_6372_);
lean_closure_set(v___f_6374_, 2, v___x_6373_);
lean_closure_set(v___f_6374_, 3, v___f_6371_);
lean_closure_set(v___f_6374_, 4, v_options_6368_);
v___x_6381_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6381_ == 0)
{
uint8_t v___x_6382_; 
v___x_6382_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6382_ == 0)
{
uint8_t v___x_6383_; 
lean_dec_ref(v___f_6374_);
v___x_6383_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6383_ == 0)
{
lean_object* v___x_6384_; 
v___x_6384_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6384_;
}
else
{
lean_object* v___x_6385_; 
v___x_6385_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6385_;
}
}
else
{
goto v___jp_6375_;
}
}
else
{
goto v___jp_6375_;
}
v___jp_6375_:
{
lean_object* v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; 
v___x_6376_ = lean_unsigned_to_nat(0u);
v___x_6377_ = lean_io_promise_new();
v___x_6378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6378_, 0, v___x_6377_);
v___x_6379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6379_, 0, v___x_6378_);
v___x_6380_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6376_, v___x_6370_, v___x_6379_, v___f_6374_);
return v___x_6380_;
}
}
else
{
lean_object* v___x_6386_; 
lean_dec(v_options_6368_);
v___x_6386_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6367_);
return v___x_6386_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6387_, lean_object* v_options_6388_, lean_object* v_a_6389_){
_start:
{
lean_object* v_res_6390_; 
v_res_6390_ = l_Lasm_Fetch_fetch(v_req_6387_, v_options_6388_);
return v_res_6390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6391_, lean_object* v_headers_6392_, lean_object* v_options_6393_){
_start:
{
lean_object* v___x_6395_; lean_object* v___x_6396_; lean_object* v___f_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; 
v___x_6395_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6396_ = l_ByteArray_empty;
v___f_6397_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6398_, 0, v___x_6395_);
lean_ctor_set(v___x_6398_, 1, v_url_6391_);
lean_ctor_set(v___x_6398_, 2, v_headers_6392_);
lean_ctor_set(v___x_6398_, 3, v___x_6396_);
lean_ctor_set(v___x_6398_, 4, v___f_6397_);
v___x_6399_ = l_Lasm_Fetch_fetch(v___x_6398_, v_options_6393_);
return v___x_6399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6400_, lean_object* v_headers_6401_, lean_object* v_options_6402_, lean_object* v_a_6403_){
_start:
{
lean_object* v_res_6404_; 
v_res_6404_ = l_Lasm_Fetch_get(v_url_6400_, v_headers_6401_, v_options_6402_);
return v_res_6404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6406_, lean_object* v_body_6407_, lean_object* v_contentType_6408_, lean_object* v_headers_6409_, lean_object* v_options_6410_){
_start:
{
lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; lean_object* v___f_6419_; lean_object* v___x_6420_; lean_object* v___x_6421_; 
v___x_6412_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6413_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6414_, 0, v___x_6413_);
lean_ctor_set(v___x_6414_, 1, v_contentType_6408_);
v___x_6415_ = lean_unsigned_to_nat(1u);
v___x_6416_ = lean_mk_empty_array_with_capacity(v___x_6415_);
v___x_6417_ = lean_array_push(v___x_6416_, v___x_6414_);
v___x_6418_ = l_Array_append___redArg(v___x_6417_, v_headers_6409_);
v___f_6419_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6420_, 0, v___x_6412_);
lean_ctor_set(v___x_6420_, 1, v_url_6406_);
lean_ctor_set(v___x_6420_, 2, v___x_6418_);
lean_ctor_set(v___x_6420_, 3, v_body_6407_);
lean_ctor_set(v___x_6420_, 4, v___f_6419_);
v___x_6421_ = l_Lasm_Fetch_fetch(v___x_6420_, v_options_6410_);
return v___x_6421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6422_, lean_object* v_body_6423_, lean_object* v_contentType_6424_, lean_object* v_headers_6425_, lean_object* v_options_6426_, lean_object* v_a_6427_){
_start:
{
lean_object* v_res_6428_; 
v_res_6428_ = l_Lasm_Fetch_post(v_url_6422_, v_body_6423_, v_contentType_6424_, v_headers_6425_, v_options_6426_);
lean_dec_ref(v_headers_6425_);
return v_res_6428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6429_){
_start:
{
lean_object* v_body_6430_; uint8_t v___x_6431_; 
v_body_6430_ = lean_ctor_get(v_r_6429_, 1);
lean_inc_ref(v_body_6430_);
lean_dec_ref(v_r_6429_);
v___x_6431_ = lean_string_validate_utf8(v_body_6430_);
if (v___x_6431_ == 0)
{
lean_object* v___x_6432_; 
lean_dec_ref(v_body_6430_);
v___x_6432_ = lean_box(0);
return v___x_6432_;
}
else
{
lean_object* v___x_6433_; lean_object* v___x_6434_; 
v___x_6433_ = lean_string_from_utf8_unchecked(v_body_6430_);
v___x_6434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6434_, 0, v___x_6433_);
return v___x_6434_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6435_, lean_object* v_name_6436_){
_start:
{
lean_object* v_headers_6437_; lean_object* v_n_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; size_t v_sz_6441_; size_t v___x_6442_; lean_object* v___x_6443_; lean_object* v_fst_6444_; 
v_headers_6437_ = lean_ctor_get(v_r_6435_, 0);
v_n_6438_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6436_);
v___x_6439_ = lean_box(0);
v___x_6440_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6441_ = lean_array_size(v_headers_6437_);
v___x_6442_ = ((size_t)0ULL);
v___x_6443_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6438_, v_headers_6437_, v_sz_6441_, v___x_6442_, v___x_6440_);
lean_dec_ref(v_n_6438_);
v_fst_6444_ = lean_ctor_get(v___x_6443_, 0);
lean_inc(v_fst_6444_);
lean_dec_ref(v___x_6443_);
if (lean_obj_tag(v_fst_6444_) == 0)
{
return v___x_6439_;
}
else
{
lean_object* v_val_6445_; 
v_val_6445_ = lean_ctor_get(v_fst_6444_, 0);
lean_inc(v_val_6445_);
lean_dec_ref_known(v_fst_6444_, 1);
if (lean_obj_tag(v_val_6445_) == 0)
{
return v___x_6439_;
}
else
{
lean_object* v_val_6446_; lean_object* v___x_6448_; uint8_t v_isShared_6449_; uint8_t v_isSharedCheck_6454_; 
v_val_6446_ = lean_ctor_get(v_val_6445_, 0);
v_isSharedCheck_6454_ = !lean_is_exclusive(v_val_6445_);
if (v_isSharedCheck_6454_ == 0)
{
v___x_6448_ = v_val_6445_;
v_isShared_6449_ = v_isSharedCheck_6454_;
goto v_resetjp_6447_;
}
else
{
lean_inc(v_val_6446_);
lean_dec(v_val_6445_);
v___x_6448_ = lean_box(0);
v_isShared_6449_ = v_isSharedCheck_6454_;
goto v_resetjp_6447_;
}
v_resetjp_6447_:
{
lean_object* v_snd_6450_; lean_object* v___x_6452_; 
v_snd_6450_ = lean_ctor_get(v_val_6446_, 1);
lean_inc(v_snd_6450_);
lean_dec(v_val_6446_);
if (v_isShared_6449_ == 0)
{
lean_ctor_set(v___x_6448_, 0, v_snd_6450_);
v___x_6452_ = v___x_6448_;
goto v_reusejp_6451_;
}
else
{
lean_object* v_reuseFailAlloc_6453_; 
v_reuseFailAlloc_6453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6453_, 0, v_snd_6450_);
v___x_6452_ = v_reuseFailAlloc_6453_;
goto v_reusejp_6451_;
}
v_reusejp_6451_:
{
return v___x_6452_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6455_, lean_object* v_name_6456_){
_start:
{
lean_object* v_res_6457_; 
v_res_6457_ = l_Lasm_Fetch_Response_header_x3f(v_r_6455_, v_name_6456_);
lean_dec_ref(v_r_6455_);
return v_res_6457_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6458_){
_start:
{
if (lean_obj_tag(v_x_6458_) == 0)
{
lean_object* v_a_6459_; lean_object* v___x_6460_; 
v_a_6459_ = lean_ctor_get(v_x_6458_, 0);
lean_inc(v_a_6459_);
lean_dec_ref_known(v_x_6458_, 1);
v___x_6460_ = lean_task_pure(v_a_6459_);
return v___x_6460_;
}
else
{
lean_object* v_a_6461_; 
v_a_6461_ = lean_ctor_get(v_x_6458_, 0);
lean_inc_ref(v_a_6461_);
lean_dec_ref_known(v_x_6458_, 1);
return v_a_6461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6462_){
_start:
{
if (lean_obj_tag(v_x_6462_) == 0)
{
lean_object* v_a_6463_; lean_object* v___x_6464_; 
v_a_6463_ = lean_ctor_get(v_x_6462_, 0);
lean_inc(v_a_6463_);
lean_dec_ref_known(v_x_6462_, 1);
v___x_6464_ = lean_task_pure(v_a_6463_);
return v___x_6464_;
}
else
{
lean_object* v_a_6465_; 
v_a_6465_ = lean_ctor_get(v_x_6462_, 0);
lean_inc_ref(v_a_6465_);
lean_dec_ref_known(v_x_6462_, 1);
return v_a_6465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6466_){
_start:
{
lean_object* v_val_6469_; lean_object* v___x_6471_; 
v___x_6471_ = lasm_fetch_write(v_chunk_6466_);
if (lean_obj_tag(v___x_6471_) == 0)
{
lean_object* v_a_6472_; lean_object* v___x_6474_; uint8_t v_isShared_6475_; uint8_t v_isSharedCheck_6479_; 
v_a_6472_ = lean_ctor_get(v___x_6471_, 0);
v_isSharedCheck_6479_ = !lean_is_exclusive(v___x_6471_);
if (v_isSharedCheck_6479_ == 0)
{
v___x_6474_ = v___x_6471_;
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
else
{
lean_inc(v_a_6472_);
lean_dec(v___x_6471_);
v___x_6474_ = lean_box(0);
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
v_resetjp_6473_:
{
lean_object* v___x_6477_; 
if (v_isShared_6475_ == 0)
{
lean_ctor_set_tag(v___x_6474_, 1);
v___x_6477_ = v___x_6474_;
goto v_reusejp_6476_;
}
else
{
lean_object* v_reuseFailAlloc_6478_; 
v_reuseFailAlloc_6478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6478_, 0, v_a_6472_);
v___x_6477_ = v_reuseFailAlloc_6478_;
goto v_reusejp_6476_;
}
v_reusejp_6476_:
{
v_val_6469_ = v___x_6477_;
goto v___jp_6468_;
}
}
}
else
{
lean_object* v_a_6480_; lean_object* v___x_6482_; uint8_t v_isShared_6483_; uint8_t v_isSharedCheck_6487_; 
v_a_6480_ = lean_ctor_get(v___x_6471_, 0);
v_isSharedCheck_6487_ = !lean_is_exclusive(v___x_6471_);
if (v_isSharedCheck_6487_ == 0)
{
v___x_6482_ = v___x_6471_;
v_isShared_6483_ = v_isSharedCheck_6487_;
goto v_resetjp_6481_;
}
else
{
lean_inc(v_a_6480_);
lean_dec(v___x_6471_);
v___x_6482_ = lean_box(0);
v_isShared_6483_ = v_isSharedCheck_6487_;
goto v_resetjp_6481_;
}
v_resetjp_6481_:
{
lean_object* v___x_6485_; 
if (v_isShared_6483_ == 0)
{
lean_ctor_set_tag(v___x_6482_, 0);
v___x_6485_ = v___x_6482_;
goto v_reusejp_6484_;
}
else
{
lean_object* v_reuseFailAlloc_6486_; 
v_reuseFailAlloc_6486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6486_, 0, v_a_6480_);
v___x_6485_ = v_reuseFailAlloc_6486_;
goto v_reusejp_6484_;
}
v_reusejp_6484_:
{
v_val_6469_ = v___x_6485_;
goto v___jp_6468_;
}
}
}
v___jp_6468_:
{
lean_object* v___x_6470_; 
v___x_6470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6470_, 0, v_val_6469_);
return v___x_6470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6488_, lean_object* v___y_6489_){
_start:
{
lean_object* v_res_6490_; 
v_res_6490_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6488_);
lean_dec_ref(v_chunk_6488_);
return v_res_6490_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6491_){
_start:
{
if (lean_obj_tag(v_x_6491_) == 0)
{
lean_object* v_a_6492_; lean_object* v___x_6493_; 
v_a_6492_ = lean_ctor_get(v_x_6491_, 0);
lean_inc(v_a_6492_);
lean_dec_ref_known(v_x_6491_, 1);
v___x_6493_ = lean_task_pure(v_a_6492_);
return v___x_6493_;
}
else
{
lean_object* v_a_6494_; 
v_a_6494_ = lean_ctor_get(v_x_6491_, 0);
lean_inc_ref(v_a_6494_);
lean_dec_ref_known(v_x_6491_, 1);
return v_a_6494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6495_){
_start:
{
lean_object* v___y_6498_; 
if (lean_obj_tag(v_x_6495_) == 0)
{
lean_object* v_a_6501_; lean_object* v___x_6503_; uint8_t v_isShared_6504_; uint8_t v_isSharedCheck_6509_; 
v_a_6501_ = lean_ctor_get(v_x_6495_, 0);
v_isSharedCheck_6509_ = !lean_is_exclusive(v_x_6495_);
if (v_isSharedCheck_6509_ == 0)
{
v___x_6503_ = v_x_6495_;
v_isShared_6504_ = v_isSharedCheck_6509_;
goto v_resetjp_6502_;
}
else
{
lean_inc(v_a_6501_);
lean_dec(v_x_6495_);
v___x_6503_ = lean_box(0);
v_isShared_6504_ = v_isSharedCheck_6509_;
goto v_resetjp_6502_;
}
v_resetjp_6502_:
{
lean_object* v___x_6506_; 
if (v_isShared_6504_ == 0)
{
v___x_6506_ = v___x_6503_;
goto v_reusejp_6505_;
}
else
{
lean_object* v_reuseFailAlloc_6508_; 
v_reuseFailAlloc_6508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6508_, 0, v_a_6501_);
v___x_6506_ = v_reuseFailAlloc_6508_;
goto v_reusejp_6505_;
}
v_reusejp_6505_:
{
lean_object* v___x_6507_; 
v___x_6507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6506_);
return v___x_6507_;
}
}
}
else
{
lean_object* v_a_6510_; uint8_t v___x_6511_; 
v_a_6510_ = lean_ctor_get(v_x_6495_, 0);
lean_inc(v_a_6510_);
lean_dec_ref_known(v_x_6495_, 1);
v___x_6511_ = l_ByteArray_isEmpty(v_a_6510_);
if (v___x_6511_ == 0)
{
lean_object* v___x_6512_; 
v___x_6512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6512_, 0, v_a_6510_);
v___y_6498_ = v___x_6512_;
goto v___jp_6497_;
}
else
{
lean_object* v___x_6513_; 
lean_dec(v_a_6510_);
v___x_6513_ = lean_box(0);
v___y_6498_ = v___x_6513_;
goto v___jp_6497_;
}
}
v___jp_6497_:
{
lean_object* v___x_6499_; lean_object* v___x_6500_; 
v___x_6499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6499_, 0, v___y_6498_);
v___x_6500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6500_, 0, v___x_6499_);
return v___x_6500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6514_, lean_object* v___y_6515_){
_start:
{
lean_object* v_res_6516_; 
v_res_6516_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6514_);
return v_res_6516_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6517_, uint32_t v___x_6518_){
_start:
{
lean_object* v___x_6520_; uint8_t v___x_6521_; lean_object* v_val_6523_; lean_object* v___x_6526_; 
v___x_6520_ = lean_unsigned_to_nat(0u);
v___x_6521_ = 0;
v___x_6526_ = lasm_fetch_read(v___x_6518_);
if (lean_obj_tag(v___x_6526_) == 0)
{
lean_object* v_a_6527_; lean_object* v___x_6529_; uint8_t v_isShared_6530_; uint8_t v_isSharedCheck_6534_; 
v_a_6527_ = lean_ctor_get(v___x_6526_, 0);
v_isSharedCheck_6534_ = !lean_is_exclusive(v___x_6526_);
if (v_isSharedCheck_6534_ == 0)
{
v___x_6529_ = v___x_6526_;
v_isShared_6530_ = v_isSharedCheck_6534_;
goto v_resetjp_6528_;
}
else
{
lean_inc(v_a_6527_);
lean_dec(v___x_6526_);
v___x_6529_ = lean_box(0);
v_isShared_6530_ = v_isSharedCheck_6534_;
goto v_resetjp_6528_;
}
v_resetjp_6528_:
{
lean_object* v___x_6532_; 
if (v_isShared_6530_ == 0)
{
lean_ctor_set_tag(v___x_6529_, 1);
v___x_6532_ = v___x_6529_;
goto v_reusejp_6531_;
}
else
{
lean_object* v_reuseFailAlloc_6533_; 
v_reuseFailAlloc_6533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6533_, 0, v_a_6527_);
v___x_6532_ = v_reuseFailAlloc_6533_;
goto v_reusejp_6531_;
}
v_reusejp_6531_:
{
v_val_6523_ = v___x_6532_;
goto v___jp_6522_;
}
}
}
else
{
lean_object* v_a_6535_; lean_object* v___x_6537_; uint8_t v_isShared_6538_; uint8_t v_isSharedCheck_6542_; 
v_a_6535_ = lean_ctor_get(v___x_6526_, 0);
v_isSharedCheck_6542_ = !lean_is_exclusive(v___x_6526_);
if (v_isSharedCheck_6542_ == 0)
{
v___x_6537_ = v___x_6526_;
v_isShared_6538_ = v_isSharedCheck_6542_;
goto v_resetjp_6536_;
}
else
{
lean_inc(v_a_6535_);
lean_dec(v___x_6526_);
v___x_6537_ = lean_box(0);
v_isShared_6538_ = v_isSharedCheck_6542_;
goto v_resetjp_6536_;
}
v_resetjp_6536_:
{
lean_object* v___x_6540_; 
if (v_isShared_6538_ == 0)
{
lean_ctor_set_tag(v___x_6537_, 0);
v___x_6540_ = v___x_6537_;
goto v_reusejp_6539_;
}
else
{
lean_object* v_reuseFailAlloc_6541_; 
v_reuseFailAlloc_6541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6541_, 0, v_a_6535_);
v___x_6540_ = v_reuseFailAlloc_6541_;
goto v_reusejp_6539_;
}
v_reusejp_6539_:
{
v_val_6523_ = v___x_6540_;
goto v___jp_6522_;
}
}
}
v___jp_6522_:
{
lean_object* v___x_6524_; lean_object* v___x_6525_; 
v___x_6524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6524_, 0, v_val_6523_);
v___x_6525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6520_, v___x_6521_, v___x_6524_, v___f_6517_);
return v___x_6525_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6543_, lean_object* v___x_6544_, lean_object* v___y_6545_){
_start:
{
uint32_t v___x_2044__boxed_6546_; lean_object* v_res_6547_; 
v___x_2044__boxed_6546_ = lean_unbox_uint32(v___x_6544_);
lean_dec(v___x_6544_);
v_res_6547_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6543_, v___x_2044__boxed_6546_);
return v_res_6547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6548_, lean_object* v_req_6549_){
_start:
{
lean_object* v___x_6551_; 
v___x_6551_ = l_Lasm_Fetch_respond(v_handler_6548_, v_req_6549_);
return v___x_6551_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6552_, lean_object* v_req_6553_, lean_object* v___y_6554_){
_start:
{
lean_object* v_res_6555_; 
v_res_6555_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6552_, v_req_6553_);
return v_res_6555_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6556_, lean_object* v___f_6557_){
_start:
{
lean_object* v___x_6559_; 
v___x_6559_ = lean_apply_2(v_val_6556_, v___f_6557_, lean_box(0));
return v___x_6559_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6560_, lean_object* v___f_6561_, lean_object* v___y_6562_){
_start:
{
lean_object* v_res_6563_; 
v_res_6563_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6560_, v___f_6561_);
return v_res_6563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6564_){
_start:
{
lean_object* v___x_6566_; 
v___x_6566_ = l_Lasm_Fetch_Request_readAll(v___x_6564_);
return v___x_6566_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6567_, lean_object* v___y_6568_){
_start:
{
lean_object* v_res_6569_; 
v_res_6569_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6567_);
return v_res_6569_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6575_; lean_object* v___x_6576_; 
v___x_6575_ = 65536;
v___x_6576_ = lean_box_uint32(v___x_6575_);
return v___x_6576_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6577_; lean_object* v___x_6578_; lean_object* v___f_6579_; 
v___f_6577_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6578_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6579_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6579_, 0, v___f_6577_);
lean_closure_set(v___f_6579_, 1, v___x_6578_);
return v___f_6579_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6580_, lean_object* v_options_6581_){
_start:
{
lean_object* v___f_6583_; lean_object* v___f_6584_; lean_object* v___f_6585_; lean_object* v___f_6586_; lean_object* v___x_6587_; 
v___f_6583_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6584_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6585_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6586_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6587_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6587_) == 0)
{
lean_object* v_a_6588_; lean_object* v___x_6590_; uint8_t v_isShared_6591_; uint8_t v_isSharedCheck_6658_; 
v_a_6588_ = lean_ctor_get(v___x_6587_, 0);
v_isSharedCheck_6658_ = !lean_is_exclusive(v___x_6587_);
if (v_isSharedCheck_6658_ == 0)
{
v___x_6590_ = v___x_6587_;
v_isShared_6591_ = v_isSharedCheck_6658_;
goto v_resetjp_6589_;
}
else
{
lean_inc(v_a_6588_);
lean_dec(v___x_6587_);
v___x_6590_ = lean_box(0);
v_isShared_6591_ = v_isSharedCheck_6658_;
goto v_resetjp_6589_;
}
v_resetjp_6589_:
{
lean_object* v_snd_6592_; lean_object* v_fst_6593_; lean_object* v_fst_6594_; lean_object* v_snd_6595_; lean_object* v___f_6596_; lean_object* v___x_6597_; lean_object* v_req_6599_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; uint8_t v___x_6640_; 
v_snd_6592_ = lean_ctor_get(v_a_6588_, 1);
lean_inc(v_snd_6592_);
v_fst_6593_ = lean_ctor_get(v_a_6588_, 0);
lean_inc_n(v_fst_6593_, 2);
lean_dec(v_a_6588_);
v_fst_6594_ = lean_ctor_get(v_snd_6592_, 0);
lean_inc_n(v_fst_6594_, 2);
v_snd_6595_ = lean_ctor_get(v_snd_6592_, 1);
lean_inc_n(v_snd_6595_, 2);
lean_dec(v_snd_6592_);
v___f_6596_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6597_ = l_ByteArray_empty;
v___x_6637_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6637_, 0, v_fst_6593_);
lean_ctor_set(v___x_6637_, 1, v_fst_6594_);
lean_ctor_set(v___x_6637_, 2, v_snd_6595_);
lean_ctor_set(v___x_6637_, 3, v___x_6597_);
lean_ctor_set(v___x_6637_, 4, v___f_6596_);
lean_inc_ref(v___x_6637_);
v___x_6638_ = l_Lasm_Fetch_Request_path(v___x_6637_);
v___x_6639_ = lean_apply_1(v_options_6581_, v___x_6638_);
v___x_6640_ = lean_unbox(v___x_6639_);
if (v___x_6640_ == 0)
{
lean_object* v___f_6641_; lean_object* v___x_6642_; lean_object* v___x_6643_; uint8_t v___x_6644_; lean_object* v___x_6645_; lean_object* v___x_6646_; 
v___f_6641_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6641_, 0, v___x_6637_);
v___x_6642_ = lean_unsigned_to_nat(0u);
v___x_6643_ = lean_io_as_task(v___f_6641_, v___x_6642_);
v___x_6644_ = 1;
v___x_6645_ = lean_task_bind(v___x_6643_, v___f_6583_, v___x_6642_, v___x_6644_);
v___x_6646_ = lean_task_get_own(v___x_6645_);
if (lean_obj_tag(v___x_6646_) == 0)
{
lean_object* v_a_6647_; lean_object* v___x_6649_; uint8_t v_isShared_6650_; uint8_t v_isSharedCheck_6654_; 
lean_dec(v_snd_6595_);
lean_dec(v_fst_6594_);
lean_dec(v_fst_6593_);
lean_del_object(v___x_6590_);
lean_dec_ref(v_handler_6580_);
v_a_6647_ = lean_ctor_get(v___x_6646_, 0);
v_isSharedCheck_6654_ = !lean_is_exclusive(v___x_6646_);
if (v_isSharedCheck_6654_ == 0)
{
v___x_6649_ = v___x_6646_;
v_isShared_6650_ = v_isSharedCheck_6654_;
goto v_resetjp_6648_;
}
else
{
lean_inc(v_a_6647_);
lean_dec(v___x_6646_);
v___x_6649_ = lean_box(0);
v_isShared_6650_ = v_isSharedCheck_6654_;
goto v_resetjp_6648_;
}
v_resetjp_6648_:
{
lean_object* v___x_6652_; 
if (v_isShared_6650_ == 0)
{
lean_ctor_set_tag(v___x_6649_, 1);
v___x_6652_ = v___x_6649_;
goto v_reusejp_6651_;
}
else
{
lean_object* v_reuseFailAlloc_6653_; 
v_reuseFailAlloc_6653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6653_, 0, v_a_6647_);
v___x_6652_ = v_reuseFailAlloc_6653_;
goto v_reusejp_6651_;
}
v_reusejp_6651_:
{
return v___x_6652_;
}
}
}
else
{
lean_object* v_a_6655_; lean_object* v___f_6656_; lean_object* v___x_6657_; 
v_a_6655_ = lean_ctor_get(v___x_6646_, 0);
lean_inc(v_a_6655_);
lean_dec_ref_known(v___x_6646_, 1);
v___f_6656_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6657_, 0, v_fst_6593_);
lean_ctor_set(v___x_6657_, 1, v_fst_6594_);
lean_ctor_set(v___x_6657_, 2, v_snd_6595_);
lean_ctor_set(v___x_6657_, 3, v_a_6655_);
lean_ctor_set(v___x_6657_, 4, v___f_6656_);
v_req_6599_ = v___x_6657_;
goto v___jp_6598_;
}
}
else
{
lean_dec(v_snd_6595_);
lean_dec(v_fst_6594_);
lean_dec(v_fst_6593_);
v_req_6599_ = v___x_6637_;
goto v___jp_6598_;
}
v___jp_6598_:
{
lean_object* v___f_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; uint8_t v___x_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; 
lean_inc_ref(v_req_6599_);
v___f_6600_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6600_, 0, v_handler_6580_);
lean_closure_set(v___f_6600_, 1, v_req_6599_);
v___x_6601_ = lean_unsigned_to_nat(0u);
v___x_6602_ = lean_io_as_task(v___f_6600_, v___x_6601_);
v___x_6603_ = 1;
v___x_6604_ = lean_task_bind(v___x_6602_, v___f_6586_, v___x_6601_, v___x_6603_);
v___x_6605_ = lean_task_get_own(v___x_6604_);
if (lean_obj_tag(v___x_6605_) == 0)
{
lean_object* v_a_6606_; lean_object* v___x_6608_; 
lean_dec_ref(v_req_6599_);
v_a_6606_ = lean_ctor_get(v___x_6605_, 0);
lean_inc(v_a_6606_);
lean_dec_ref_known(v___x_6605_, 1);
if (v_isShared_6591_ == 0)
{
lean_ctor_set_tag(v___x_6590_, 1);
lean_ctor_set(v___x_6590_, 0, v_a_6606_);
v___x_6608_ = v___x_6590_;
goto v_reusejp_6607_;
}
else
{
lean_object* v_reuseFailAlloc_6609_; 
v_reuseFailAlloc_6609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6609_, 0, v_a_6606_);
v___x_6608_ = v_reuseFailAlloc_6609_;
goto v_reusejp_6607_;
}
v_reusejp_6607_:
{
return v___x_6608_;
}
}
else
{
lean_object* v_a_6610_; lean_object* v_stream_6611_; 
lean_del_object(v___x_6590_);
v_a_6610_ = lean_ctor_get(v___x_6605_, 0);
lean_inc(v_a_6610_);
lean_dec_ref_known(v___x_6605_, 1);
v_stream_6611_ = lean_ctor_get(v_a_6610_, 2);
if (lean_obj_tag(v_stream_6611_) == 0)
{
uint16_t v_status_6612_; lean_object* v_headers_6613_; lean_object* v_body_6614_; lean_object* v_method_6615_; uint8_t v___x_6616_; 
v_status_6612_ = lean_ctor_get_uint16(v_a_6610_, sizeof(void*)*3);
v_headers_6613_ = lean_ctor_get(v_a_6610_, 0);
lean_inc_ref(v_headers_6613_);
v_body_6614_ = lean_ctor_get(v_a_6610_, 1);
lean_inc_ref(v_body_6614_);
lean_dec(v_a_6610_);
v_method_6615_ = lean_ctor_get(v_req_6599_, 0);
lean_inc_ref(v_method_6615_);
lean_dec_ref(v_req_6599_);
v___x_6616_ = l_Lasm_Fetch_bodyless(v_method_6615_, v_status_6612_);
lean_dec_ref(v_method_6615_);
if (v___x_6616_ == 0)
{
lean_object* v___x_6617_; 
v___x_6617_ = lasm_fetch_send_response(v_status_6612_, v_headers_6613_, v_body_6614_);
lean_dec_ref(v_body_6614_);
lean_dec_ref(v_headers_6613_);
return v___x_6617_;
}
else
{
lean_object* v___x_6618_; 
lean_dec_ref(v_body_6614_);
v___x_6618_ = lasm_fetch_send_response(v_status_6612_, v_headers_6613_, v___x_6597_);
lean_dec_ref(v_headers_6613_);
return v___x_6618_;
}
}
else
{
uint16_t v_status_6619_; lean_object* v_headers_6620_; lean_object* v_val_6621_; lean_object* v___f_6622_; lean_object* v___x_6623_; 
lean_inc_ref(v_stream_6611_);
v_status_6619_ = lean_ctor_get_uint16(v_a_6610_, sizeof(void*)*3);
v_headers_6620_ = lean_ctor_get(v_a_6610_, 0);
lean_inc_ref(v_headers_6620_);
lean_dec(v_a_6610_);
v_val_6621_ = lean_ctor_get(v_stream_6611_, 0);
lean_inc(v_val_6621_);
lean_dec_ref_known(v_stream_6611_, 1);
v___f_6622_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6622_, 0, v_val_6621_);
lean_closure_set(v___f_6622_, 1, v___f_6585_);
v___x_6623_ = lasm_fetch_start_response(v_status_6619_, v_headers_6620_);
lean_dec_ref(v_headers_6620_);
if (lean_obj_tag(v___x_6623_) == 0)
{
lean_object* v_method_6624_; uint8_t v___x_6625_; 
lean_dec_ref_known(v___x_6623_, 1);
v_method_6624_ = lean_ctor_get(v_req_6599_, 0);
lean_inc_ref(v_method_6624_);
lean_dec_ref(v_req_6599_);
v___x_6625_ = l_Lasm_Fetch_bodyless(v_method_6624_, v_status_6619_);
lean_dec_ref(v_method_6624_);
if (v___x_6625_ == 0)
{
lean_object* v___x_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; 
v___x_6626_ = lean_io_as_task(v___f_6622_, v___x_6601_);
v___x_6627_ = lean_task_bind(v___x_6626_, v___f_6584_, v___x_6601_, v___x_6603_);
v___x_6628_ = lean_task_get_own(v___x_6627_);
if (lean_obj_tag(v___x_6628_) == 0)
{
lean_object* v_a_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; 
v_a_6629_ = lean_ctor_get(v___x_6628_, 0);
lean_inc(v_a_6629_);
lean_dec_ref_known(v___x_6628_, 1);
v___x_6630_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6631_ = lean_io_error_to_string(v_a_6629_);
v___x_6632_ = lean_string_append(v___x_6630_, v___x_6631_);
lean_dec_ref(v___x_6631_);
v___x_6633_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6632_);
if (lean_obj_tag(v___x_6633_) == 0)
{
lean_object* v___x_6634_; 
lean_dec_ref_known(v___x_6633_, 1);
v___x_6634_ = lasm_fetch_finish(v___x_6625_);
return v___x_6634_;
}
else
{
return v___x_6633_;
}
}
else
{
lean_object* v___x_6635_; 
lean_dec_ref_known(v___x_6628_, 1);
v___x_6635_ = lasm_fetch_finish(v___x_6603_);
return v___x_6635_;
}
}
else
{
lean_object* v___x_6636_; 
lean_dec_ref(v___f_6622_);
v___x_6636_ = lasm_fetch_finish(v___x_6603_);
return v___x_6636_;
}
}
else
{
lean_dec_ref(v___f_6622_);
lean_dec_ref(v_req_6599_);
return v___x_6623_;
}
}
}
}
}
}
else
{
lean_object* v_a_6659_; lean_object* v___x_6661_; uint8_t v_isShared_6662_; uint8_t v_isSharedCheck_6666_; 
lean_dec_ref(v_options_6581_);
lean_dec_ref(v_handler_6580_);
v_a_6659_ = lean_ctor_get(v___x_6587_, 0);
v_isSharedCheck_6666_ = !lean_is_exclusive(v___x_6587_);
if (v_isSharedCheck_6666_ == 0)
{
v___x_6661_ = v___x_6587_;
v_isShared_6662_ = v_isSharedCheck_6666_;
goto v_resetjp_6660_;
}
else
{
lean_inc(v_a_6659_);
lean_dec(v___x_6587_);
v___x_6661_ = lean_box(0);
v_isShared_6662_ = v_isSharedCheck_6666_;
goto v_resetjp_6660_;
}
v_resetjp_6660_:
{
lean_object* v___x_6664_; 
if (v_isShared_6662_ == 0)
{
v___x_6664_ = v___x_6661_;
goto v_reusejp_6663_;
}
else
{
lean_object* v_reuseFailAlloc_6665_; 
v_reuseFailAlloc_6665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6665_, 0, v_a_6659_);
v___x_6664_ = v_reuseFailAlloc_6665_;
goto v_reusejp_6663_;
}
v_reusejp_6663_:
{
return v___x_6664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6667_, lean_object* v_options_6668_, lean_object* v_a_6669_){
_start:
{
lean_object* v_res_6670_; 
v_res_6670_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6667_, v_options_6668_);
return v_res_6670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6674_, lean_object* v_handler_6675_){
_start:
{
uint8_t v___x_6677_; 
v___x_6677_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6677_ == 0)
{
uint8_t v___x_6678_; 
v___x_6678_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6678_ == 0)
{
uint8_t v___x_6679_; 
v___x_6679_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6679_ == 0)
{
uint8_t v___x_6680_; 
v___x_6680_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6680_ == 0)
{
lean_object* v___x_6681_; lean_object* v___x_6682_; 
lean_dec_ref(v_handler_6675_);
lean_dec_ref(v_options_6674_);
v___x_6681_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6682_, 0, v___x_6681_);
return v___x_6682_;
}
else
{
lean_object* v___x_6683_; 
v___x_6683_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6683_) == 0)
{
lean_object* v_a_6684_; uint8_t v___x_6685_; 
v_a_6684_ = lean_ctor_get(v___x_6683_, 0);
lean_inc(v_a_6684_);
lean_dec_ref_known(v___x_6683_, 1);
v___x_6685_ = lean_unbox(v_a_6684_);
lean_dec(v_a_6684_);
if (v___x_6685_ == 0)
{
lean_object* v___x_6686_; 
v___x_6686_ = l_Lasm_Fetch_serveNode(v_handler_6675_, v_options_6674_);
return v___x_6686_;
}
else
{
lean_object* v___x_6687_; 
v___x_6687_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6675_, v_options_6674_);
if (lean_obj_tag(v___x_6687_) == 0)
{
lean_object* v_a_6688_; lean_object* v___x_6689_; 
v_a_6688_ = lean_ctor_get(v___x_6687_, 0);
lean_inc(v_a_6688_);
lean_dec_ref_known(v___x_6687_, 1);
v___x_6689_ = l_Lasm_JS_exportDefault(v_a_6688_);
return v___x_6689_;
}
else
{
lean_object* v_a_6690_; lean_object* v___x_6692_; uint8_t v_isShared_6693_; uint8_t v_isSharedCheck_6697_; 
v_a_6690_ = lean_ctor_get(v___x_6687_, 0);
v_isSharedCheck_6697_ = !lean_is_exclusive(v___x_6687_);
if (v_isSharedCheck_6697_ == 0)
{
v___x_6692_ = v___x_6687_;
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
else
{
lean_inc(v_a_6690_);
lean_dec(v___x_6687_);
v___x_6692_ = lean_box(0);
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
v_resetjp_6691_:
{
lean_object* v___x_6695_; 
if (v_isShared_6693_ == 0)
{
v___x_6695_ = v___x_6692_;
goto v_reusejp_6694_;
}
else
{
lean_object* v_reuseFailAlloc_6696_; 
v_reuseFailAlloc_6696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6696_, 0, v_a_6690_);
v___x_6695_ = v_reuseFailAlloc_6696_;
goto v_reusejp_6694_;
}
v_reusejp_6694_:
{
return v___x_6695_;
}
}
}
}
}
else
{
lean_object* v_a_6698_; lean_object* v___x_6700_; uint8_t v_isShared_6701_; uint8_t v_isSharedCheck_6705_; 
lean_dec_ref(v_handler_6675_);
lean_dec_ref(v_options_6674_);
v_a_6698_ = lean_ctor_get(v___x_6683_, 0);
v_isSharedCheck_6705_ = !lean_is_exclusive(v___x_6683_);
if (v_isSharedCheck_6705_ == 0)
{
v___x_6700_ = v___x_6683_;
v_isShared_6701_ = v_isSharedCheck_6705_;
goto v_resetjp_6699_;
}
else
{
lean_inc(v_a_6698_);
lean_dec(v___x_6683_);
v___x_6700_ = lean_box(0);
v_isShared_6701_ = v_isSharedCheck_6705_;
goto v_resetjp_6699_;
}
v_resetjp_6699_:
{
lean_object* v___x_6703_; 
if (v_isShared_6701_ == 0)
{
v___x_6703_ = v___x_6700_;
goto v_reusejp_6702_;
}
else
{
lean_object* v_reuseFailAlloc_6704_; 
v_reuseFailAlloc_6704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6704_, 0, v_a_6698_);
v___x_6703_ = v_reuseFailAlloc_6704_;
goto v_reusejp_6702_;
}
v_reusejp_6702_:
{
return v___x_6703_;
}
}
}
}
}
else
{
lean_object* v___x_6706_; 
v___x_6706_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6675_, v_options_6674_);
return v___x_6706_;
}
}
else
{
lean_object* v___x_6707_; 
v___x_6707_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6675_, v_options_6674_);
return v___x_6707_;
}
}
else
{
lean_object* v___x_6708_; 
v___x_6708_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6675_, v_options_6674_);
return v___x_6708_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6709_, lean_object* v_handler_6710_, lean_object* v_a_6711_){
_start:
{
lean_object* v_res_6712_; 
v_res_6712_ = l_Lasm_Fetch_serveWith(v_options_6709_, v_handler_6710_);
return v_res_6712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6713_){
_start:
{
lean_object* v___f_6715_; lean_object* v___x_6716_; 
v___f_6715_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6716_ = l_Lasm_Fetch_serveWith(v___f_6715_, v_handler_6713_);
return v___x_6716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6717_, lean_object* v_a_6718_){
_start:
{
lean_object* v_res_6719_; 
v_res_6719_ = l_Lasm_Fetch_serve(v_handler_6717_);
return v_res_6719_;
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
