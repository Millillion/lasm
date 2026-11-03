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
lean_object* l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(lean_object* v_s_376_, lean_object* v_pos_377_){
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
v___x_386_ = 63;
v___x_387_ = lean_uint32_dec_eq(v___x_385_, v___x_386_);
if (v___x_387_ == 0)
{
uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 35;
v___x_389_ = lean_uint32_dec_eq(v___x_385_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_390_ = lean_string_utf8_next_fast(v_str_378_, v___x_381_);
v___x_391_ = lean_nat_sub(v___x_390_, v___x_381_);
lean_dec(v___x_381_);
v___x_392_ = lean_nat_add(v_pos_377_, v___x_391_);
lean_dec(v___x_391_);
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_nat_add(v_pos_377_, v___x_393_);
v___x_395_ = lean_nat_dec_le(v___x_394_, v___x_392_);
lean_dec(v___x_394_);
if (v___x_395_ == 0)
{
lean_dec(v___x_392_);
return v_pos_377_;
}
else
{
lean_dec(v_pos_377_);
v_pos_377_ = v___x_392_;
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
else
{
lean_dec(v___x_381_);
return v_pos_377_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0___boxed(lean_object* v_s_397_, lean_object* v_pos_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v_s_397_, v_pos_398_);
lean_dec_ref(v_s_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(lean_object* v_url_401_){
_start:
{
lean_object* v___y_403_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_410_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath___closed__0));
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_box(0);
v___x_413_ = l_String_splitOnAux(v_url_401_, v___x_410_, v___x_411_, v___x_411_, v___x_411_, v___x_412_);
if (lean_obj_tag(v___x_413_) == 1)
{
lean_object* v_tail_414_; 
v_tail_414_ = lean_ctor_get(v___x_413_, 1);
lean_inc(v_tail_414_);
lean_dec_ref_known(v___x_413_, 2);
if (lean_obj_tag(v_tail_414_) == 1)
{
lean_object* v_tail_415_; 
v_tail_415_ = lean_ctor_get(v_tail_414_, 1);
if (lean_obj_tag(v_tail_415_) == 0)
{
lean_object* v_head_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec_ref(v_url_401_);
v_head_416_ = lean_ctor_get(v_tail_414_, 0);
lean_inc_n(v_head_416_, 2);
lean_dec_ref_known(v_tail_414_, 2);
v___x_417_ = lean_string_utf8_byte_size(v_head_416_);
v___x_418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_418_, 0, v_head_416_);
lean_ctor_set(v___x_418_, 1, v___x_411_);
lean_ctor_set(v___x_418_, 2, v___x_417_);
v___x_419_ = l_String_Slice_Pos_skipWhile___at___00System_Uri_fileUriToPath_x3f_spec__1(v___x_418_, v___x_411_);
lean_dec_ref_known(v___x_418_, 3);
v___x_420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_420_, 0, v_head_416_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
lean_ctor_set(v___x_420_, 2, v___x_417_);
v___x_421_ = l_String_Slice_toString(v___x_420_);
lean_dec_ref_known(v___x_420_, 3);
v___y_403_ = v___x_421_;
goto v___jp_402_;
}
else
{
lean_dec_ref_known(v_tail_414_, 2);
v___y_403_ = v_url_401_;
goto v___jp_402_;
}
}
else
{
lean_dec(v_tail_414_);
v___y_403_ = v_url_401_;
goto v___jp_402_;
}
}
else
{
lean_dec(v___x_413_);
v___y_403_ = v_url_401_;
goto v___jp_402_;
}
v___jp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_string_utf8_byte_size(v___y_403_);
lean_inc_ref(v___y_403_);
v___x_406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_406_, 0, v___y_403_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_405_);
v___x_407_ = l_String_Slice_Pos_skipWhile___at___00__private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath_spec__0(v___x_406_, v___x_404_);
lean_dec_ref_known(v___x_406_, 3);
v___x_408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_408_, 0, v___y_403_);
lean_ctor_set(v___x_408_, 1, v___x_404_);
lean_ctor_set(v___x_408_, 2, v___x_407_);
v___x_409_ = l_String_Slice_toString(v___x_408_);
lean_dec_ref_known(v___x_408_, 3);
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(lean_object* v_r_422_){
_start:
{
lean_object* v___y_424_; lean_object* v_url_429_; lean_object* v_raw_430_; lean_object* v___x_431_; 
v_url_429_ = lean_ctor_get(v_r_422_, 1);
lean_inc_ref(v_url_429_);
lean_dec_ref(v_r_422_);
v_raw_430_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_rawPath(v_url_429_);
lean_inc_ref(v_raw_430_);
v___x_431_ = lean_string_data(v_raw_430_);
if (lean_obj_tag(v___x_431_) == 0)
{
v___y_424_ = v_raw_430_;
goto v___jp_423_;
}
else
{
lean_object* v_head_432_; lean_object* v_tail_433_; uint32_t v___x_434_; uint32_t v___x_435_; uint8_t v___x_436_; 
v_head_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_head_432_);
v_tail_433_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_tail_433_);
lean_dec_ref_known(v___x_431_, 2);
v___x_434_ = 47;
v___x_435_ = lean_unbox_uint32(v_head_432_);
v___x_436_ = lean_uint32_dec_eq(v___x_435_, v___x_434_);
if (v___x_436_ == 0)
{
uint32_t v___x_437_; uint32_t v___x_438_; uint8_t v___x_439_; 
v___x_437_ = 92;
v___x_438_ = lean_unbox_uint32(v_head_432_);
lean_dec(v_head_432_);
v___x_439_ = lean_uint32_dec_eq(v___x_438_, v___x_437_);
if (v___x_439_ == 0)
{
lean_dec(v_tail_433_);
v___y_424_ = v_raw_430_;
goto v___jp_423_;
}
else
{
lean_object* v___x_440_; 
lean_dec_ref(v_raw_430_);
v___x_440_ = lean_string_mk(v_tail_433_);
v___y_424_ = v___x_440_;
goto v___jp_423_;
}
}
else
{
lean_object* v___x_441_; 
lean_dec(v_head_432_);
lean_dec_ref(v_raw_430_);
v___x_441_ = lean_string_mk(v_tail_433_);
v___y_424_ = v___x_441_;
goto v___jp_423_;
}
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_425_ = lean_box(0);
v___x_426_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_splitPath(v___y_424_);
v___x_427_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_resolve(v___x_425_, v___x_426_);
v___x_428_ = l_List_reverse___redArg(v___x_427_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_path(lean_object* v_r_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_444_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_445_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_443_);
v___x_446_ = l_String_intercalate(v___x_444_, v___x_445_);
v___x_447_ = lean_string_append(v___x_444_, v___x_446_);
lean_dec_ref(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(lean_object* v_s_448_, lean_object* v_pos_449_){
_start:
{
lean_object* v_str_450_; lean_object* v_startInclusive_451_; lean_object* v_endExclusive_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v_decide_456_; 
v_str_450_ = lean_ctor_get(v_s_448_, 0);
v_startInclusive_451_ = lean_ctor_get(v_s_448_, 1);
v_endExclusive_452_ = lean_ctor_get(v_s_448_, 2);
v___x_453_ = lean_nat_add(v_startInclusive_451_, v_pos_449_);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_nat_sub(v_endExclusive_452_, v___x_453_);
v_decide_456_ = lean_nat_dec_eq(v___x_454_, v___x_455_);
lean_dec(v___x_455_);
if (v_decide_456_ == 0)
{
uint32_t v___x_457_; uint32_t v___x_458_; uint8_t v___x_459_; 
v___x_457_ = lean_string_utf8_get_fast(v_str_450_, v___x_453_);
v___x_458_ = 35;
v___x_459_ = lean_uint32_dec_eq(v___x_457_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_460_ = lean_string_utf8_next_fast(v_str_450_, v___x_453_);
v___x_461_ = lean_nat_sub(v___x_460_, v___x_453_);
lean_dec(v___x_453_);
v___x_462_ = lean_nat_add(v_pos_449_, v___x_461_);
lean_dec(v___x_461_);
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_nat_add(v_pos_449_, v___x_463_);
v___x_465_ = lean_nat_dec_le(v___x_464_, v___x_462_);
lean_dec(v___x_464_);
if (v___x_465_ == 0)
{
lean_dec(v___x_462_);
return v_pos_449_;
}
else
{
lean_dec(v_pos_449_);
v_pos_449_ = v___x_462_;
goto _start;
}
}
else
{
lean_dec(v___x_453_);
return v_pos_449_;
}
}
else
{
lean_dec(v___x_453_);
return v_pos_449_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0___boxed(lean_object* v_s_467_, lean_object* v_pos_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v_s_467_, v_pos_468_);
lean_dec_ref(v_s_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query(lean_object* v_r_471_){
_start:
{
lean_object* v_url_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_url_472_ = lean_ctor_get(v_r_471_, 1);
v___x_473_ = ((lean_object*)(l_Lasm_Fetch_Request_query___closed__0));
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_box(0);
v___x_476_ = l_String_splitOnAux(v_url_472_, v___x_473_, v___x_474_, v___x_474_, v___x_474_, v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; 
v___x_477_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_477_;
}
else
{
lean_object* v_tail_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_tail_478_ = lean_ctor_get(v___x_476_, 1);
lean_inc(v_tail_478_);
lean_dec_ref_known(v___x_476_, 2);
v___x_479_ = l_String_intercalate(v___x_473_, v_tail_478_);
v___x_480_ = lean_string_utf8_byte_size(v___x_479_);
lean_inc_ref(v___x_479_);
v___x_481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_474_);
lean_ctor_set(v___x_481_, 2, v___x_480_);
v___x_482_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_Request_query_spec__0(v___x_481_, v___x_474_);
lean_dec_ref_known(v___x_481_, 3);
v___x_483_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_483_, 0, v___x_479_);
lean_ctor_set(v___x_483_, 1, v___x_474_);
lean_ctor_set(v___x_483_, 2, v___x_482_);
v___x_484_ = l_String_Slice_toString(v___x_483_);
lean_dec_ref_known(v___x_483_, 3);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_query___boxed(lean_object* v_r_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lasm_Fetch_Request_query(v_r_485_);
lean_dec_ref(v_r_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
if (lean_obj_tag(v_a_488_) == 0)
{
lean_object* v___x_490_; 
v___x_490_ = lean_array_to_list(v_a_489_);
return v___x_490_;
}
else
{
lean_object* v_head_491_; lean_object* v_tail_492_; lean_object* v_val_494_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v_head_491_ = lean_ctor_get(v_a_488_, 0);
v_tail_492_ = lean_ctor_get(v_a_488_, 1);
v___x_497_ = lean_string_utf8_byte_size(v_head_491_);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_nat_dec_eq(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_500_ = ((lean_object*)(l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___closed__0));
v___x_501_ = lean_box(0);
v___x_502_ = l_String_splitOnAux(v_head_491_, v___x_500_, v___x_498_, v___x_498_, v___x_498_, v___x_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
v_a_488_ = v_tail_492_;
goto _start;
}
else
{
lean_object* v_head_504_; lean_object* v_tail_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_521_; 
v_head_504_ = lean_ctor_get(v___x_502_, 0);
v_tail_505_ = lean_ctor_get(v___x_502_, 1);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_521_ == 0)
{
v___x_507_ = v___x_502_;
v_isShared_508_ = v_isSharedCheck_521_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_tail_505_);
lean_inc(v_head_504_);
lean_dec(v___x_502_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_521_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
uint8_t v___x_509_; 
v___x_509_ = 1;
if (lean_obj_tag(v_tail_505_) == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_510_ = l_Lasm_Fetch_percentDecode(v_head_504_, v___x_509_);
lean_dec(v_head_504_);
v___x_511_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_508_ == 0)
{
lean_ctor_set_tag(v___x_507_, 0);
lean_ctor_set(v___x_507_, 1, v___x_511_);
lean_ctor_set(v___x_507_, 0, v___x_510_);
v___x_513_ = v___x_507_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
v_val_494_ = v___x_513_;
goto v___jp_493_;
}
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_515_ = l_Lasm_Fetch_percentDecode(v_head_504_, v___x_509_);
lean_dec(v_head_504_);
v___x_516_ = l_String_intercalate(v___x_500_, v_tail_505_);
v___x_517_ = l_Lasm_Fetch_percentDecode(v___x_516_, v___x_509_);
lean_dec_ref(v___x_516_);
if (v_isShared_508_ == 0)
{
lean_ctor_set_tag(v___x_507_, 0);
lean_ctor_set(v___x_507_, 1, v___x_517_);
lean_ctor_set(v___x_507_, 0, v___x_515_);
v___x_519_ = v___x_507_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
v_val_494_ = v___x_519_;
goto v___jp_493_;
}
}
}
}
}
else
{
v_a_488_ = v_tail_492_;
goto _start;
}
v___jp_493_:
{
lean_object* v___x_495_; 
v___x_495_ = lean_array_push(v_a_489_, v_val_494_);
v_a_488_ = v_tail_492_;
v_a_489_ = v___x_495_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0___boxed(lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v_a_523_, v_a_524_);
lean_dec(v_a_523_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams(lean_object* v_r_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_528_ = l_Lasm_Fetch_Request_query(v_r_527_);
v___x_529_ = ((lean_object*)(l_Lasm_Fetch_Request_queryParams___closed__0));
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_box(0);
v___x_532_ = l_String_splitOnAux(v___x_528_, v___x_529_, v___x_530_, v___x_530_, v___x_530_, v___x_531_);
lean_dec_ref(v___x_528_);
v___x_533_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_534_ = l_List_filterMapTR_go___at___00Lasm_Fetch_Request_queryParams_spec__0(v___x_532_, v___x_533_);
lean_dec(v___x_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParams___boxed(lean_object* v_r_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lasm_Fetch_Request_queryParams(v_r_535_);
lean_dec_ref(v_r_535_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_538_) == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_head_540_; lean_object* v_tail_541_; lean_object* v_fst_542_; lean_object* v_snd_543_; uint8_t v___x_544_; 
v_head_540_ = lean_ctor_get(v_x_538_, 0);
v_tail_541_ = lean_ctor_get(v_x_538_, 1);
v_fst_542_ = lean_ctor_get(v_head_540_, 0);
v_snd_543_ = lean_ctor_get(v_head_540_, 1);
v___x_544_ = lean_string_dec_eq(v_x_537_, v_fst_542_);
if (v___x_544_ == 0)
{
v_x_538_ = v_tail_541_;
goto _start;
}
else
{
lean_object* v___x_546_; 
lean_inc(v_snd_543_);
v___x_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_546_, 0, v_snd_543_);
return v___x_546_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg___boxed(lean_object* v_x_547_, lean_object* v_x_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_547_, v_x_548_);
lean_dec(v_x_548_);
lean_dec_ref(v_x_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f(lean_object* v_r_550_, lean_object* v_name_551_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = l_Lasm_Fetch_Request_queryParams(v_r_550_);
v___x_553_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_name_551_, v___x_552_);
lean_dec(v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_queryParam_x3f___boxed(lean_object* v_r_554_, lean_object* v_name_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lasm_Fetch_Request_queryParam_x3f(v_r_554_, v_name_555_);
lean_dec_ref(v_name_555_);
lean_dec_ref(v_r_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(lean_object* v_00_u03b2_557_, lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___redArg(v_x_558_, v_x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0___boxed(lean_object* v_00_u03b2_561_, lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_List_lookup___at___00Lasm_Fetch_Request_queryParam_x3f_spec__0(v_00_u03b2_561_, v_x_562_, v_x_563_);
lean_dec(v_x_563_);
lean_dec_ref(v_x_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
if (lean_obj_tag(v_a_565_) == 0)
{
lean_object* v___x_567_; 
v___x_567_ = l_List_reverse___redArg(v_a_566_);
return v___x_567_;
}
else
{
lean_object* v_head_568_; lean_object* v_tail_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_579_; 
v_head_568_ = lean_ctor_get(v_a_565_, 0);
v_tail_569_ = lean_ctor_get(v_a_565_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_a_565_);
if (v_isSharedCheck_579_ == 0)
{
v___x_571_ = v_a_565_;
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_tail_569_);
lean_inc(v_head_568_);
lean_dec(v_a_565_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_573_ = 0;
v___x_574_ = l_Lasm_Fetch_percentDecode(v_head_568_, v___x_573_);
lean_dec(v_head_568_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v_a_566_);
lean_ctor_set(v___x_571_, 0, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_a_566_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
v_a_565_ = v_tail_569_;
v_a_566_ = v___x_576_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
if (lean_obj_tag(v_a_580_) == 0)
{
lean_object* v___x_582_; 
v___x_582_ = l_List_reverse___redArg(v_a_581_);
return v___x_582_;
}
else
{
lean_object* v_head_583_; lean_object* v_tail_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_596_; 
v_head_583_ = lean_ctor_get(v_a_580_, 0);
v_tail_584_ = lean_ctor_get(v_a_580_, 1);
v_isSharedCheck_596_ = !lean_is_exclusive(v_a_580_);
if (v_isSharedCheck_596_ == 0)
{
v___x_586_ = v_a_580_;
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_tail_584_);
lean_inc(v_head_583_);
lean_dec(v_a_580_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_596_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_588_ = lean_string_utf8_byte_size(v_head_583_);
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_nat_dec_eq(v___x_588_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_592_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 1, v_a_581_);
v___x_592_ = v___x_586_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_head_583_);
lean_ctor_set(v_reuseFailAlloc_594_, 1, v_a_581_);
v___x_592_ = v_reuseFailAlloc_594_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
v_a_580_ = v_tail_584_;
v_a_581_ = v___x_592_;
goto _start;
}
}
else
{
lean_del_object(v___x_586_);
lean_dec(v_head_583_);
v_a_580_ = v_tail_584_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_segments(lean_object* v_r_597_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_598_ = l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments(v_r_597_);
v___x_599_ = lean_box(0);
v___x_600_ = l_List_filterTR_loop___at___00Lasm_Fetch_Request_segments_spec__0(v___x_598_, v___x_599_);
v___x_601_ = l_List_mapTR_loop___at___00Lasm_Fetch_Request_segments_spec__1(v___x_600_, v___x_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter___redArg(lean_object* v_x_602_, lean_object* v_h__1_603_, lean_object* v_h__2_604_){
_start:
{
if (lean_obj_tag(v_x_602_) == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; 
lean_dec(v_h__1_603_);
v___x_605_ = lean_box(0);
v___x_606_ = lean_apply_1(v_h__2_604_, v___x_605_);
return v___x_606_;
}
else
{
lean_object* v_head_607_; lean_object* v_tail_608_; lean_object* v___x_609_; 
lean_dec(v_h__2_604_);
v_head_607_ = lean_ctor_get(v_x_602_, 0);
lean_inc(v_head_607_);
v_tail_608_ = lean_ctor_get(v_x_602_, 1);
lean_inc(v_tail_608_);
lean_dec_ref_known(v_x_602_, 2);
v___x_609_ = lean_apply_2(v_h__1_603_, v_head_607_, v_tail_608_);
return v___x_609_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathSegments_match__1_splitter(lean_object* v_motive_610_, lean_object* v_x_611_, lean_object* v_h__1_612_, lean_object* v_h__2_613_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec(v_h__1_612_);
v___x_614_ = lean_box(0);
v___x_615_ = lean_apply_1(v_h__2_613_, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v_head_616_; lean_object* v_tail_617_; lean_object* v___x_618_; 
lean_dec(v_h__2_613_);
v_head_616_ = lean_ctor_get(v_x_611_, 0);
lean_inc(v_head_616_);
v_tail_617_ = lean_ctor_get(v_x_611_, 1);
lean_inc(v_tail_617_);
lean_dec_ref_known(v_x_611_, 2);
v___x_618_ = lean_apply_2(v_h__1_612_, v_head_616_, v_tail_617_);
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(lean_object* v_n_622_, lean_object* v_as_623_, size_t v_sz_624_, size_t v_i_625_, lean_object* v_b_626_){
_start:
{
uint8_t v___x_627_; 
v___x_627_ = lean_usize_dec_lt(v_i_625_, v_sz_624_);
if (v___x_627_ == 0)
{
lean_inc_ref(v_b_626_);
return v_b_626_;
}
else
{
lean_object* v_a_628_; lean_object* v_fst_629_; lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v_a_628_ = lean_array_uget_borrowed(v_as_623_, v_i_625_);
v_fst_629_ = lean_ctor_get(v_a_628_, 0);
v___x_630_ = lean_box(0);
lean_inc(v_fst_629_);
v___x_631_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_629_);
v___x_632_ = lean_string_dec_eq(v___x_631_, v_n_622_);
lean_dec_ref(v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; 
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_i_625_, v___x_634_);
v_i_625_ = v___x_635_;
v_b_626_ = v___x_633_;
goto _start;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
lean_inc(v_a_628_);
v___x_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_637_, 0, v_a_628_);
v___x_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
v___x_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v___x_630_);
return v___x_639_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___boxed(lean_object* v_n_640_, lean_object* v_as_641_, lean_object* v_sz_642_, lean_object* v_i_643_, lean_object* v_b_644_){
_start:
{
size_t v_sz_boxed_645_; size_t v_i_boxed_646_; lean_object* v_res_647_; 
v_sz_boxed_645_ = lean_unbox_usize(v_sz_642_);
lean_dec(v_sz_642_);
v_i_boxed_646_ = lean_unbox_usize(v_i_643_);
lean_dec(v_i_643_);
v_res_647_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_640_, v_as_641_, v_sz_boxed_645_, v_i_boxed_646_, v_b_644_);
lean_dec_ref(v_b_644_);
lean_dec_ref(v_as_641_);
lean_dec_ref(v_n_640_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object* v_r_648_, lean_object* v_name_649_){
_start:
{
lean_object* v_headers_650_; lean_object* v_n_651_; lean_object* v___x_652_; lean_object* v___x_653_; size_t v_sz_654_; size_t v___x_655_; lean_object* v___x_656_; lean_object* v_fst_657_; 
v_headers_650_ = lean_ctor_get(v_r_648_, 2);
v_n_651_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_649_);
v___x_652_ = lean_box(0);
v___x_653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_654_ = lean_array_size(v_headers_650_);
v___x_655_ = ((size_t)0ULL);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_651_, v_headers_650_, v_sz_654_, v___x_655_, v___x_653_);
lean_dec_ref(v_n_651_);
v_fst_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_fst_657_);
lean_dec_ref(v___x_656_);
if (lean_obj_tag(v_fst_657_) == 0)
{
return v___x_652_;
}
else
{
lean_object* v_val_658_; 
v_val_658_ = lean_ctor_get(v_fst_657_, 0);
lean_inc(v_val_658_);
lean_dec_ref_known(v_fst_657_, 1);
if (lean_obj_tag(v_val_658_) == 0)
{
return v___x_652_;
}
else
{
lean_object* v_val_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
v_val_659_ = lean_ctor_get(v_val_658_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v_val_658_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v_val_658_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_val_659_);
lean_dec(v_val_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_snd_663_; lean_object* v___x_665_; 
v_snd_663_ = lean_ctor_get(v_val_659_, 1);
lean_inc(v_snd_663_);
lean_dec(v_val_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v_snd_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_snd_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_header_x3f___boxed(lean_object* v_r_668_, lean_object* v_name_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lasm_Fetch_Request_header_x3f(v_r_668_, v_name_669_);
lean_dec_ref(v_r_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text_x3f(lean_object* v_r_671_){
_start:
{
lean_object* v_body_672_; uint8_t v___x_673_; 
v_body_672_ = lean_ctor_get(v_r_671_, 3);
lean_inc_ref(v_body_672_);
lean_dec_ref(v_r_671_);
v___x_673_ = lean_string_validate_utf8(v_body_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; 
lean_dec_ref(v_body_672_);
v___x_674_ = lean_box(0);
return v___x_674_;
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = lean_string_from_utf8_unchecked(v_body_672_);
v___x_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
return v___x_676_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_text(lean_object* v_r_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lasm_Fetch_Request_text_x3f(v_r_677_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
return v___x_679_;
}
else
{
lean_object* v_val_680_; 
v_val_680_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v___x_678_, 1);
return v_val_680_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0(lean_object* v_acc_681_, lean_object* v_r_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_r_682_);
lean_dec_ref(v_acc_681_);
v_a_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_709_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_709_ == 0)
{
v___x_696_ = v_x_683_;
v_isShared_697_ = v_isSharedCheck_709_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v_x_683_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_709_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
if (lean_obj_tag(v_a_694_) == 0)
{
lean_object* v___x_699_; 
lean_dec_ref(v_r_682_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v_acc_681_);
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_acc_681_);
v___x_699_ = v_reuseFailAlloc_701_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; 
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
}
else
{
lean_object* v_val_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_del_object(v___x_696_);
v_val_702_ = lean_ctor_get(v_a_694_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v_a_694_, 1);
v___x_703_ = lean_unsigned_to_nat(0u);
v___x_704_ = lean_byte_array_size(v_acc_681_);
v___x_705_ = lean_byte_array_size(v_val_702_);
v___x_706_ = 0;
v___x_707_ = lean_byte_array_copy_slice(v_val_702_, v___x_703_, v_acc_681_, v___x_704_, v___x_705_, v___x_706_);
lean_dec(v_val_702_);
v___x_708_ = l_Lasm_Fetch_Request_readAll_loop(v_r_682_, v___x_707_);
return v___x_708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed(lean_object* v_acc_710_, lean_object* v_r_711_, lean_object* v_x_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lasm_Fetch_Request_readAll_loop___lam__0(v_acc_710_, v_r_711_, v_x_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop(lean_object* v_r_715_, lean_object* v_acc_716_){
_start:
{
lean_object* v_read_718_; lean_object* v___f_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_read_718_ = lean_ctor_get(v_r_715_, 4);
lean_inc_ref(v_read_718_);
v___f_719_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Request_readAll_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_719_, 0, v_acc_716_);
lean_closure_set(v___f_719_, 1, v_r_715_);
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = 0;
v___x_722_ = lean_apply_1(v_read_718_, lean_box(0));
v___x_723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_720_, v___x_721_, v___x_722_, v___f_719_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll_loop___boxed(lean_object* v_r_724_, lean_object* v_acc_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_Fetch_Request_readAll_loop(v_r_724_, v_acc_725_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll(lean_object* v_r_728_){
_start:
{
lean_object* v_body_730_; lean_object* v___x_731_; 
v_body_730_ = lean_ctor_get(v_r_728_, 3);
lean_inc_ref(v_body_730_);
v___x_731_ = l_Lasm_Fetch_Request_readAll_loop(v_r_728_, v_body_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Request_readAll___boxed(lean_object* v_r_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lasm_Fetch_Request_readAll(v_r_732_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody(lean_object* v_body_736_, lean_object* v_contentType_737_, uint16_t v_status_738_){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_739_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v_contentType_737_);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_mk_empty_array_with_capacity(v___x_741_);
v___x_743_ = lean_array_push(v___x_742_, v___x_740_);
v___x_744_ = lean_box(0);
v___x_745_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v_body_736_);
lean_ctor_set(v___x_745_, 2, v___x_744_);
lean_ctor_set_uint16(v___x_745_, sizeof(void*)*3, v_status_738_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withBody___boxed(lean_object* v_body_746_, lean_object* v_contentType_747_, lean_object* v_status_748_){
_start:
{
uint16_t v_status_boxed_749_; lean_object* v_res_750_; 
v_status_boxed_749_ = lean_unbox(v_status_748_);
v_res_750_ = l_Lasm_Fetch_Response_withBody(v_body_746_, v_contentType_747_, v_status_boxed_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text(lean_object* v_body_752_, uint16_t v_status_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_string_to_utf8(v_body_752_);
v___x_755_ = ((lean_object*)(l_Lasm_Fetch_Response_text___closed__0));
v___x_756_ = l_Lasm_Fetch_Response_withBody(v___x_754_, v___x_755_, v_status_753_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text___boxed(lean_object* v_body_757_, lean_object* v_status_758_){
_start:
{
uint16_t v_status_boxed_759_; lean_object* v_res_760_; 
v_status_boxed_759_ = lean_unbox(v_status_758_);
v_res_760_ = l_Lasm_Fetch_Response_text(v_body_757_, v_status_boxed_759_);
lean_dec_ref(v_body_757_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html(lean_object* v_body_762_, uint16_t v_status_763_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_string_to_utf8(v_body_762_);
v___x_765_ = ((lean_object*)(l_Lasm_Fetch_Response_html___closed__0));
v___x_766_ = l_Lasm_Fetch_Response_withBody(v___x_764_, v___x_765_, v_status_763_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_html___boxed(lean_object* v_body_767_, lean_object* v_status_768_){
_start:
{
uint16_t v_status_boxed_769_; lean_object* v_res_770_; 
v_status_boxed_769_ = lean_unbox(v_status_768_);
v_res_770_ = l_Lasm_Fetch_Response_html(v_body_767_, v_status_boxed_769_);
lean_dec_ref(v_body_767_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json(lean_object* v_body_772_, uint16_t v_status_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_774_ = lean_string_to_utf8(v_body_772_);
v___x_775_ = ((lean_object*)(l_Lasm_Fetch_Response_json___closed__0));
v___x_776_ = l_Lasm_Fetch_Response_withBody(v___x_774_, v___x_775_, v_status_773_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_json___boxed(lean_object* v_body_777_, lean_object* v_status_778_){
_start:
{
uint16_t v_status_boxed_779_; lean_object* v_res_780_; 
v_status_boxed_779_ = lean_unbox(v_status_778_);
v_res_780_ = l_Lasm_Fetch_Response_json(v_body_777_, v_status_boxed_779_);
lean_dec_ref(v_body_777_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes(lean_object* v_body_781_, lean_object* v_contentType_782_, uint16_t v_status_783_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_Lasm_Fetch_Response_withBody(v_body_781_, v_contentType_782_, v_status_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_bytes___boxed(lean_object* v_body_785_, lean_object* v_contentType_786_, lean_object* v_status_787_){
_start:
{
uint16_t v_status_boxed_788_; lean_object* v_res_789_; 
v_status_boxed_788_ = lean_unbox(v_status_787_);
v_res_789_ = l_Lasm_Fetch_Response_bytes(v_body_785_, v_contentType_786_, v_status_boxed_788_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect(lean_object* v_location_791_, uint16_t v_status_792_){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_793_ = ((lean_object*)(l_Lasm_Fetch_Response_redirect___closed__0));
v___x_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
lean_ctor_set(v___x_794_, 1, v_location_791_);
v___x_795_ = lean_unsigned_to_nat(1u);
v___x_796_ = lean_mk_empty_array_with_capacity(v___x_795_);
v___x_797_ = lean_array_push(v___x_796_, v___x_794_);
v___x_798_ = l_ByteArray_empty;
v___x_799_ = lean_box(0);
v___x_800_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_800_, 0, v___x_797_);
lean_ctor_set(v___x_800_, 1, v___x_798_);
lean_ctor_set(v___x_800_, 2, v___x_799_);
lean_ctor_set_uint16(v___x_800_, sizeof(void*)*3, v_status_792_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_redirect___boxed(lean_object* v_location_801_, lean_object* v_status_802_){
_start:
{
uint16_t v_status_boxed_803_; lean_object* v_res_804_; 
v_status_boxed_803_ = lean_unbox(v_status_802_);
v_res_804_ = l_Lasm_Fetch_Response_redirect(v_location_801_, v_status_boxed_803_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming(lean_object* v_produce_805_, lean_object* v_contentType_806_, uint16_t v_status_807_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_808_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v_contentType_806_);
v___x_810_ = lean_unsigned_to_nat(1u);
v___x_811_ = lean_mk_empty_array_with_capacity(v___x_810_);
v___x_812_ = lean_array_push(v___x_811_, v___x_809_);
v___x_813_ = l_ByteArray_empty;
v___x_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_814_, 0, v_produce_805_);
v___x_815_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_815_, 0, v___x_812_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
lean_ctor_set(v___x_815_, 2, v___x_814_);
lean_ctor_set_uint16(v___x_815_, sizeof(void*)*3, v_status_807_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_streaming___boxed(lean_object* v_produce_816_, lean_object* v_contentType_817_, lean_object* v_status_818_){
_start:
{
uint16_t v_status_boxed_819_; lean_object* v_res_820_; 
v_status_boxed_819_ = lean_unbox(v_status_818_);
v_res_820_ = l_Lasm_Fetch_Response_streaming(v_produce_816_, v_contentType_817_, v_status_boxed_819_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty(uint16_t v_status_821_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_822_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_823_ = l_ByteArray_empty;
v___x_824_ = lean_box(0);
v___x_825_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_825_, 0, v___x_822_);
lean_ctor_set(v___x_825_, 1, v___x_823_);
lean_ctor_set(v___x_825_, 2, v___x_824_);
lean_ctor_set_uint16(v___x_825_, sizeof(void*)*3, v_status_821_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_empty___boxed(lean_object* v_status_826_){
_start:
{
uint16_t v_status_boxed_827_; lean_object* v_res_828_; 
v_status_boxed_827_ = lean_unbox(v_status_826_);
v_res_828_ = l_Lasm_Fetch_Response_empty(v_status_boxed_827_);
return v_res_828_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound___closed__1(void){
_start:
{
uint16_t v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = 404;
v___x_831_ = ((lean_object*)(l_Lasm_Fetch_Response_notFound___closed__0));
v___x_832_ = l_Lasm_Fetch_Response_text(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Lasm_Fetch_Response_notFound(void){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = lean_obj_once(&l_Lasm_Fetch_Response_notFound___closed__1, &l_Lasm_Fetch_Response_notFound___closed__1_once, _init_l_Lasm_Fetch_Response_notFound___closed__1);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withHeader(lean_object* v_r_834_, lean_object* v_name_835_, lean_object* v_value_836_){
_start:
{
uint16_t v_status_837_; lean_object* v_headers_838_; lean_object* v_body_839_; lean_object* v_stream_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_849_; 
v_status_837_ = lean_ctor_get_uint16(v_r_834_, sizeof(void*)*3);
v_headers_838_ = lean_ctor_get(v_r_834_, 0);
v_body_839_ = lean_ctor_get(v_r_834_, 1);
v_stream_840_ = lean_ctor_get(v_r_834_, 2);
v_isSharedCheck_849_ = !lean_is_exclusive(v_r_834_);
if (v_isSharedCheck_849_ == 0)
{
v___x_842_ = v_r_834_;
v_isShared_843_ = v_isSharedCheck_849_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_stream_840_);
lean_inc(v_body_839_);
lean_inc(v_headers_838_);
lean_dec(v_r_834_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_849_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_844_, 0, v_name_835_);
lean_ctor_set(v___x_844_, 1, v_value_836_);
v___x_845_ = lean_array_push(v_headers_838_, v___x_844_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_body_839_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_stream_840_);
lean_ctor_set_uint16(v_reuseFailAlloc_848_, sizeof(void*)*3, v_status_837_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus(lean_object* v_r_850_, uint16_t v_status_851_){
_start:
{
lean_object* v_headers_852_; lean_object* v_body_853_; lean_object* v_stream_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_headers_852_ = lean_ctor_get(v_r_850_, 0);
v_body_853_ = lean_ctor_get(v_r_850_, 1);
v_stream_854_ = lean_ctor_get(v_r_850_, 2);
v_isSharedCheck_861_ = !lean_is_exclusive(v_r_850_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v_r_850_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_stream_854_);
lean_inc(v_body_853_);
lean_inc(v_headers_852_);
lean_dec(v_r_850_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_headers_852_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_body_853_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_stream_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_ctor_set_uint16(v___x_859_, sizeof(void*)*3, v_status_851_);
return v___x_859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_withStatus___boxed(lean_object* v_r_862_, lean_object* v_status_863_){
_start:
{
uint16_t v_status_boxed_864_; lean_object* v_res_865_; 
v_status_boxed_864_ = lean_unbox(v_status_863_);
v_res_865_ = l_Lasm_Fetch_Response_withStatus(v_r_862_, v_status_boxed_864_);
return v_res_865_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__0));
v___x_868_ = lean_string_data(v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(lean_object* v_l_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
if (lean_obj_tag(v_a_870_) == 0)
{
lean_dec_ref(v_a_871_);
lean_inc(v_l_869_);
return v_l_869_;
}
else
{
lean_object* v_head_872_; lean_object* v_tail_873_; uint32_t v___x_896_; uint32_t v___x_897_; uint8_t v___x_898_; 
v_head_872_ = lean_ctor_get(v_a_870_, 0);
lean_inc(v_head_872_);
v_tail_873_ = lean_ctor_get(v_a_870_, 1);
lean_inc(v_tail_873_);
lean_dec_ref_known(v_a_870_, 2);
v___x_896_ = 65;
v___x_897_ = lean_unbox_uint32(v_head_872_);
v___x_898_ = lean_uint32_dec_le(v___x_896_, v___x_897_);
if (v___x_898_ == 0)
{
goto v___jp_889_;
}
else
{
uint32_t v___x_899_; uint32_t v___x_900_; uint8_t v___x_901_; 
v___x_899_ = 90;
v___x_900_ = lean_unbox_uint32(v_head_872_);
v___x_901_ = lean_uint32_dec_le(v___x_900_, v___x_899_);
if (v___x_901_ == 0)
{
goto v___jp_889_;
}
else
{
goto v___jp_874_;
}
}
v___jp_874_:
{
lean_object* v___x_875_; 
v___x_875_ = lean_array_push(v_a_871_, v_head_872_);
v_a_870_ = v_tail_873_;
v_a_871_ = v___x_875_;
goto _start;
}
v___jp_877_:
{
lean_object* v___x_878_; uint32_t v___x_879_; uint8_t v___x_880_; 
v___x_878_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1, &l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1_once, _init_l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___closed__1);
v___x_879_ = lean_unbox_uint32(v_head_872_);
v___x_880_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__1(v___x_879_, v___x_878_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_tail_873_);
lean_dec(v_head_872_);
v___x_881_ = lean_array_to_list(v_a_871_);
return v___x_881_;
}
else
{
goto v___jp_874_;
}
}
v___jp_882_:
{
uint32_t v___x_883_; uint32_t v___x_884_; uint8_t v___x_885_; 
v___x_883_ = 48;
v___x_884_ = lean_unbox_uint32(v_head_872_);
v___x_885_ = lean_uint32_dec_le(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
goto v___jp_877_;
}
else
{
uint32_t v___x_886_; uint32_t v___x_887_; uint8_t v___x_888_; 
v___x_886_ = 57;
v___x_887_ = lean_unbox_uint32(v_head_872_);
v___x_888_ = lean_uint32_dec_le(v___x_887_, v___x_886_);
if (v___x_888_ == 0)
{
goto v___jp_877_;
}
else
{
goto v___jp_874_;
}
}
}
v___jp_889_:
{
uint32_t v___x_890_; uint32_t v___x_891_; uint8_t v___x_892_; 
v___x_890_ = 97;
v___x_891_ = lean_unbox_uint32(v_head_872_);
v___x_892_ = lean_uint32_dec_le(v___x_890_, v___x_891_);
if (v___x_892_ == 0)
{
goto v___jp_882_;
}
else
{
uint32_t v___x_893_; uint32_t v___x_894_; uint8_t v___x_895_; 
v___x_893_ = 122;
v___x_894_ = lean_unbox_uint32(v_head_872_);
v___x_895_ = lean_uint32_dec_le(v___x_894_, v___x_893_);
if (v___x_895_ == 0)
{
goto v___jp_882_;
}
else
{
goto v___jp_874_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0___boxed(lean_object* v_l_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_l_902_, v_a_903_, v_a_904_);
lean_dec(v_l_902_);
return v_res_905_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_908_; lean_object* v___x_909_; 
v___x_908_ = 61;
v___x_909_ = lean_box_uint32(v___x_908_);
return v___x_909_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1___boxed__const__1;
v___x_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(lean_object* v_s_912_){
_start:
{
lean_object* v___x_913_; lean_object* v_name_914_; uint8_t v___x_915_; 
v___x_913_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__0));
lean_inc(v_s_912_);
v_name_914_ = l___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00__private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair_spec__0(v_s_912_, v_s_912_, v___x_913_);
v___x_915_ = l_List_isEmpty___redArg(v_name_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_916_ = l_List_lengthTR___redArg(v_name_914_);
lean_dec(v_name_914_);
v___x_917_ = l_List_drop___redArg(v___x_916_, v_s_912_);
lean_dec(v_s_912_);
v___x_918_ = l_List_head_x3f___redArg(v___x_917_);
lean_dec(v___x_917_);
v___x_919_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1, &l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___closed__1);
v___x_920_ = l_Option_instBEq_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_918_, v___x_919_);
lean_dec(v___x_918_);
return v___x_920_;
}
else
{
uint8_t v___x_921_; 
lean_dec(v_name_914_);
lean_dec(v_s_912_);
v___x_921_ = 0;
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair___boxed(lean_object* v_s_922_){
_start:
{
uint8_t v_res_923_; lean_object* v_r_924_; 
v_res_923_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_s_922_);
v_r_924_ = lean_box(v_res_923_);
return v_r_924_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(lean_object* v_x_925_){
_start:
{
if (lean_obj_tag(v_x_925_) == 0)
{
return v_x_925_;
}
else
{
lean_object* v_head_926_; lean_object* v_tail_927_; uint32_t v___x_928_; uint32_t v___x_929_; uint8_t v___x_930_; 
v_head_926_ = lean_ctor_get(v_x_925_, 0);
v_tail_927_ = lean_ctor_get(v_x_925_, 1);
v___x_928_ = 32;
v___x_929_ = lean_unbox_uint32(v_head_926_);
v___x_930_ = lean_uint32_dec_eq(v___x_929_, v___x_928_);
if (v___x_930_ == 0)
{
uint32_t v___x_931_; uint32_t v___x_932_; uint8_t v___x_933_; 
v___x_931_ = 9;
v___x_932_ = lean_unbox_uint32(v_head_926_);
v___x_933_ = lean_uint32_dec_eq(v___x_932_, v___x_931_);
if (v___x_933_ == 0)
{
uint32_t v___x_934_; uint32_t v___x_935_; uint8_t v___x_936_; 
v___x_934_ = 13;
v___x_935_ = lean_unbox_uint32(v_head_926_);
v___x_936_ = lean_uint32_dec_eq(v___x_935_, v___x_934_);
if (v___x_936_ == 0)
{
uint32_t v___x_937_; uint32_t v___x_938_; uint8_t v___x_939_; 
v___x_937_ = 10;
v___x_938_ = lean_unbox_uint32(v_head_926_);
v___x_939_ = lean_uint32_dec_eq(v___x_938_, v___x_937_);
if (v___x_939_ == 0)
{
lean_inc_ref(v_x_925_);
return v_x_925_;
}
else
{
v_x_925_ = v_tail_927_;
goto _start;
}
}
else
{
v_x_925_ = v_tail_927_;
goto _start;
}
}
else
{
v_x_925_ = v_tail_927_;
goto _start;
}
}
else
{
v_x_925_ = v_tail_927_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0___boxed(lean_object* v_x_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v_x_944_);
lean_dec(v_x_944_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(lean_object* v_x_948_, lean_object* v_x_949_){
_start:
{
if (lean_obj_tag(v_x_949_) == 0)
{
return v_x_948_;
}
else
{
lean_object* v_head_950_; lean_object* v_tail_951_; lean_object* v___x_952_; lean_object* v_next_953_; uint8_t v___x_954_; 
v_head_950_ = lean_ctor_get(v_x_949_, 0);
lean_inc_n(v_head_950_, 2);
v_tail_951_ = lean_ctor_get(v_x_949_, 1);
lean_inc(v_tail_951_);
lean_dec_ref_known(v_x_949_, 2);
v___x_952_ = lean_string_data(v_head_950_);
v_next_953_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_952_);
lean_dec(v___x_952_);
lean_inc(v_next_953_);
v___x_954_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec(v_next_953_);
v___x_955_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_956_ = lean_string_append(v_x_948_, v___x_955_);
v___x_957_ = lean_string_append(v___x_956_, v_head_950_);
lean_dec(v_head_950_);
v_x_948_ = v___x_957_;
v_x_949_ = v_tail_951_;
goto _start;
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
lean_dec(v_head_950_);
v___x_959_ = lean_string_data(v_x_948_);
v___x_960_ = l_List_reverse___redArg(v___x_959_);
v___x_961_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_960_);
lean_dec(v___x_960_);
v___x_962_ = l_List_reverse___redArg(v___x_961_);
v___x_963_ = lean_string_mk(v___x_962_);
v___x_964_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_965_ = lean_string_append(v___x_963_, v___x_964_);
v___x_966_ = lean_string_mk(v_next_953_);
v___x_967_ = lean_string_append(v___x_965_, v___x_966_);
lean_dec_ref(v___x_966_);
v_x_948_ = v___x_967_;
v_x_949_ = v_tail_951_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(lean_object* v_x_969_, lean_object* v_x_970_){
_start:
{
if (lean_obj_tag(v_x_970_) == 0)
{
return v_x_969_;
}
else
{
lean_object* v_head_971_; lean_object* v_tail_972_; lean_object* v___x_973_; lean_object* v_next_974_; uint8_t v___x_975_; 
v_head_971_ = lean_ctor_get(v_x_970_, 0);
lean_inc_n(v_head_971_, 2);
v_tail_972_ = lean_ctor_get(v_x_970_, 1);
lean_inc(v_tail_972_);
lean_dec_ref_known(v_x_970_, 2);
v___x_973_ = lean_string_data(v_head_971_);
v_next_974_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_973_);
lean_dec(v___x_973_);
lean_inc(v_next_974_);
v___x_975_ = l___private_Lasm_Fetch_0__Lasm_Fetch_startsCookiePair(v_next_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
lean_dec(v_next_974_);
v___x_976_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_977_ = lean_string_append(v_x_969_, v___x_976_);
v___x_978_ = lean_string_append(v___x_977_, v_head_971_);
lean_dec(v_head_971_);
v___x_979_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_978_, v_tail_972_);
return v___x_979_;
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
lean_dec(v_head_971_);
v___x_980_ = lean_string_data(v_x_969_);
v___x_981_ = l_List_reverse___redArg(v___x_980_);
v___x_982_ = l_List_dropWhile___at___00Lasm_Fetch_splitCookieCommas_spec__0(v___x_981_);
lean_dec(v___x_981_);
v___x_983_ = l_List_reverse___redArg(v___x_982_);
v___x_984_ = lean_string_mk(v___x_983_);
v___x_985_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
v___x_986_ = lean_string_append(v___x_984_, v___x_985_);
v___x_987_ = lean_string_mk(v_next_974_);
v___x_988_ = lean_string_append(v___x_986_, v___x_987_);
lean_dec_ref(v___x_987_);
v___x_989_ = l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1(v___x_988_, v_tail_972_);
return v___x_989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas(lean_object* v_value_990_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_991_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__0));
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_box(0);
v___x_994_ = l_String_splitOnAux(v_value_990_, v___x_991_, v___x_992_, v___x_992_, v___x_992_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_inc_ref(v_value_990_);
return v_value_990_;
}
else
{
lean_object* v_head_995_; lean_object* v_tail_996_; lean_object* v___x_997_; 
v_head_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_head_995_);
v_tail_996_ = lean_ctor_get(v___x_994_, 1);
lean_inc(v_tail_996_);
lean_dec_ref_known(v___x_994_, 2);
v___x_997_ = l_List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1(v_head_995_, v_tail_996_);
return v___x_997_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_splitCookieCommas___boxed(lean_object* v_value_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Lasm_Fetch_splitCookieCommas(v_value_998_);
lean_dec_ref(v_value_998_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(lean_object* v_as_1001_, size_t v_i_1002_, size_t v_stop_1003_, lean_object* v_b_1004_){
_start:
{
lean_object* v___y_1006_; uint8_t v___x_1010_; 
v___x_1010_ = lean_usize_dec_eq(v_i_1002_, v_stop_1003_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v_fst_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1011_ = lean_array_uget_borrowed(v_as_1001_, v_i_1002_);
v_fst_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_fst_1012_);
v___x_1013_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1012_);
v___x_1014_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1015_ = lean_string_dec_eq(v___x_1013_, v___x_1014_);
lean_dec_ref(v___x_1013_);
if (v___x_1015_ == 0)
{
v___y_1006_ = v_b_1004_;
goto v___jp_1005_;
}
else
{
lean_object* v___x_1016_; 
lean_inc(v___x_1011_);
v___x_1016_ = lean_array_push(v_b_1004_, v___x_1011_);
v___y_1006_ = v___x_1016_;
goto v___jp_1005_;
}
}
else
{
return v_b_1004_;
}
v___jp_1005_:
{
size_t v___x_1007_; size_t v___x_1008_; 
v___x_1007_ = ((size_t)1ULL);
v___x_1008_ = lean_usize_add(v_i_1002_, v___x_1007_);
v_i_1002_ = v___x_1008_;
v_b_1004_ = v___y_1006_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___boxed(lean_object* v_as_1017_, lean_object* v_i_1018_, lean_object* v_stop_1019_, lean_object* v_b_1020_){
_start:
{
size_t v_i_boxed_1021_; size_t v_stop_boxed_1022_; lean_object* v_res_1023_; 
v_i_boxed_1021_ = lean_unbox_usize(v_i_1018_);
lean_dec(v_i_1018_);
v_stop_boxed_1022_ = lean_unbox_usize(v_stop_1019_);
lean_dec(v_stop_1019_);
v_res_1023_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1017_, v_i_boxed_1021_, v_stop_boxed_1022_, v_b_1020_);
lean_dec_ref(v_as_1017_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(lean_object* v_as_1024_, size_t v_i_1025_, size_t v_stop_1026_, lean_object* v_b_1027_){
_start:
{
lean_object* v___y_1029_; uint8_t v___x_1033_; 
v___x_1033_ = lean_usize_dec_eq(v_i_1025_, v_stop_1026_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v_fst_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v___x_1034_ = lean_array_uget_borrowed(v_as_1024_, v_i_1025_);
v_fst_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_fst_1035_);
v___x_1036_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1035_);
v___x_1037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v___x_1038_ = lean_string_dec_eq(v___x_1036_, v___x_1037_);
lean_dec_ref(v___x_1036_);
if (v___x_1038_ == 0)
{
v___y_1029_ = v_b_1027_;
goto v___jp_1028_;
}
else
{
lean_object* v___x_1039_; 
lean_inc(v___x_1034_);
v___x_1039_ = lean_array_push(v_b_1027_, v___x_1034_);
v___y_1029_ = v___x_1039_;
goto v___jp_1028_;
}
}
else
{
return v_b_1027_;
}
v___jp_1028_:
{
size_t v___x_1030_; size_t v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = ((size_t)1ULL);
v___x_1031_ = lean_usize_add(v_i_1025_, v___x_1030_);
v___x_1032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4(v_as_1024_, v___x_1031_, v_stop_1026_, v___y_1029_);
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3___boxed(lean_object* v_as_1040_, lean_object* v_i_1041_, lean_object* v_stop_1042_, lean_object* v_b_1043_){
_start:
{
size_t v_i_boxed_1044_; size_t v_stop_boxed_1045_; lean_object* v_res_1046_; 
v_i_boxed_1044_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_stop_boxed_1045_ = lean_unbox_usize(v_stop_1042_);
lean_dec(v_stop_1042_);
v_res_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_as_1040_, v_i_boxed_1044_, v_stop_boxed_1045_, v_b_1043_);
lean_dec_ref(v_as_1040_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(size_t v_sz_1047_, size_t v_i_1048_, lean_object* v_bs_1049_){
_start:
{
uint8_t v___x_1050_; 
v___x_1050_ = lean_usize_dec_lt(v_i_1048_, v_sz_1047_);
if (v___x_1050_ == 0)
{
return v_bs_1049_;
}
else
{
lean_object* v_v_1051_; lean_object* v_snd_1052_; lean_object* v___x_1053_; lean_object* v_bs_x27_1054_; lean_object* v___x_1055_; size_t v___x_1056_; size_t v___x_1057_; lean_object* v___x_1058_; 
v_v_1051_ = lean_array_uget_borrowed(v_bs_1049_, v_i_1048_);
v_snd_1052_ = lean_ctor_get(v_v_1051_, 1);
lean_inc(v_snd_1052_);
v___x_1053_ = lean_unsigned_to_nat(0u);
v_bs_x27_1054_ = lean_array_uset(v_bs_1049_, v_i_1048_, v___x_1053_);
v___x_1055_ = l_Lasm_Fetch_splitCookieCommas(v_snd_1052_);
lean_dec(v_snd_1052_);
v___x_1056_ = ((size_t)1ULL);
v___x_1057_ = lean_usize_add(v_i_1048_, v___x_1056_);
v___x_1058_ = lean_array_uset(v_bs_x27_1054_, v_i_1048_, v___x_1055_);
v_i_1048_ = v___x_1057_;
v_bs_1049_ = v___x_1058_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1___boxed(lean_object* v_sz_1060_, lean_object* v_i_1061_, lean_object* v_bs_1062_){
_start:
{
size_t v_sz_boxed_1063_; size_t v_i_boxed_1064_; lean_object* v_res_1065_; 
v_sz_boxed_1063_ = lean_unbox_usize(v_sz_1060_);
lean_dec(v_sz_1060_);
v_i_boxed_1064_ = lean_unbox_usize(v_i_1061_);
lean_dec(v_i_1061_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_boxed_1063_, v_i_boxed_1064_, v_bs_1062_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(lean_object* v___y_1066_, lean_object* v_as_1067_, size_t v_sz_1068_, size_t v_i_1069_, lean_object* v_b_1070_){
_start:
{
lean_object* v_a_1072_; uint8_t v___x_1076_; 
v___x_1076_ = lean_usize_dec_lt(v_i_1069_, v_sz_1068_);
if (v___x_1076_ == 0)
{
lean_dec_ref(v___y_1066_);
return v_b_1070_;
}
else
{
lean_object* v_fst_1077_; lean_object* v_snd_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1112_; 
v_fst_1077_ = lean_ctor_get(v_b_1070_, 0);
v_snd_1078_ = lean_ctor_get(v_b_1070_, 1);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_b_1070_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1080_ = v_b_1070_;
v_isShared_1081_ = v_isSharedCheck_1112_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_snd_1078_);
lean_inc(v_fst_1077_);
lean_dec(v_b_1070_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1112_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v_a_1082_; lean_object* v_fst_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; uint8_t v_placed_1086_; 
v_a_1082_ = lean_array_uget(v_as_1067_, v_i_1069_);
v_fst_1083_ = lean_ctor_get(v_a_1082_, 0);
lean_inc(v_fst_1083_);
v___x_1084_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1083_);
v___x_1085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1086_ = lean_string_dec_eq(v___x_1084_, v___x_1085_);
lean_dec_ref(v___x_1084_);
if (v_placed_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = lean_array_push(v_fst_1077_, v_a_1082_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v___x_1087_);
v___x_1089_ = v___x_1080_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_snd_1078_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
v_a_1072_ = v___x_1089_;
goto v___jp_1071_;
}
}
else
{
lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1109_; 
lean_inc(v_fst_1083_);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_a_1082_);
if (v_isSharedCheck_1109_ == 0)
{
lean_object* v_unused_1110_; lean_object* v_unused_1111_; 
v_unused_1110_ = lean_ctor_get(v_a_1082_, 1);
lean_dec(v_unused_1110_);
v_unused_1111_ = lean_ctor_get(v_a_1082_, 0);
lean_dec(v_unused_1111_);
v___x_1092_ = v_a_1082_;
v_isShared_1093_ = v_isSharedCheck_1109_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v_a_1082_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1109_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
uint8_t v___x_1094_; 
v___x_1094_ = lean_unbox(v_snd_1078_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
lean_dec(v_snd_1078_);
v___x_1095_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1066_);
v___x_1096_ = lean_array_to_list(v___y_1066_);
v___x_1097_ = l_String_intercalate(v___x_1095_, v___x_1096_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v___x_1097_);
v___x_1099_ = v___x_1092_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_fst_1083_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1100_ = lean_array_push(v_fst_1077_, v___x_1099_);
v___x_1101_ = lean_box(v_placed_1086_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v___x_1101_);
lean_ctor_set(v___x_1080_, 0, v___x_1100_);
v___x_1103_ = v___x_1080_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v_a_1072_ = v___x_1103_;
goto v___jp_1071_;
}
}
}
else
{
lean_object* v___x_1107_; 
lean_dec(v_fst_1083_);
lean_del_object(v___x_1080_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v_snd_1078_);
lean_ctor_set(v___x_1092_, 0, v_fst_1077_);
v___x_1107_ = v___x_1092_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_fst_1077_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_snd_1078_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
v_a_1072_ = v___x_1107_;
goto v___jp_1071_;
}
}
}
}
}
}
v___jp_1071_:
{
size_t v___x_1073_; size_t v___x_1074_; 
v___x_1073_ = ((size_t)1ULL);
v___x_1074_ = lean_usize_add(v_i_1069_, v___x_1073_);
v_i_1069_ = v___x_1074_;
v_b_1070_ = v_a_1072_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0___boxed(lean_object* v___y_1113_, lean_object* v_as_1114_, lean_object* v_sz_1115_, lean_object* v_i_1116_, lean_object* v_b_1117_){
_start:
{
size_t v_sz_boxed_1118_; size_t v_i_boxed_1119_; lean_object* v_res_1120_; 
v_sz_boxed_1118_ = lean_unbox_usize(v_sz_1115_);
lean_dec(v_sz_1115_);
v_i_boxed_1119_ = lean_unbox_usize(v_i_1116_);
lean_dec(v_i_1116_);
v_res_1120_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1113_, v_as_1114_, v_sz_boxed_1118_, v_i_boxed_1119_, v_b_1117_);
lean_dec_ref(v_as_1114_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(lean_object* v___y_1121_, lean_object* v_as_1122_, size_t v_sz_1123_, size_t v_i_1124_, lean_object* v_b_1125_){
_start:
{
lean_object* v_a_1127_; uint8_t v___x_1131_; 
v___x_1131_ = lean_usize_dec_lt(v_i_1124_, v_sz_1123_);
if (v___x_1131_ == 0)
{
lean_dec_ref(v___y_1121_);
return v_b_1125_;
}
else
{
lean_object* v_fst_1132_; lean_object* v_snd_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1167_; 
v_fst_1132_ = lean_ctor_get(v_b_1125_, 0);
v_snd_1133_ = lean_ctor_get(v_b_1125_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_b_1125_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1135_ = v_b_1125_;
v_isShared_1136_ = v_isSharedCheck_1167_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_snd_1133_);
lean_inc(v_fst_1132_);
lean_dec(v_b_1125_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1167_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v_a_1137_; lean_object* v_fst_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v_placed_1141_; 
v_a_1137_ = lean_array_uget(v_as_1122_, v_i_1124_);
v_fst_1138_ = lean_ctor_get(v_a_1137_, 0);
lean_inc(v_fst_1138_);
v___x_1139_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_1138_);
v___x_1140_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3_spec__4___closed__0));
v_placed_1141_ = lean_string_dec_eq(v___x_1139_, v___x_1140_);
lean_dec_ref(v___x_1139_);
if (v_placed_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1142_ = lean_array_push(v_fst_1132_, v_a_1137_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1142_);
v___x_1144_ = v___x_1135_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1145_, 1, v_snd_1133_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
v_a_1127_ = v___x_1144_;
goto v___jp_1126_;
}
}
else
{
lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1164_; 
lean_inc(v_fst_1138_);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_a_1137_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; lean_object* v_unused_1166_; 
v_unused_1165_ = lean_ctor_get(v_a_1137_, 1);
lean_dec(v_unused_1165_);
v_unused_1166_ = lean_ctor_get(v_a_1137_, 0);
lean_dec(v_unused_1166_);
v___x_1147_ = v_a_1137_;
v_isShared_1148_ = v_isSharedCheck_1164_;
goto v_resetjp_1146_;
}
else
{
lean_dec(v_a_1137_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1164_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
uint8_t v___x_1149_; 
v___x_1149_ = lean_unbox(v_snd_1133_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
lean_dec(v_snd_1133_);
v___x_1150_ = ((lean_object*)(l_List_foldl___at___00List_foldl___at___00Lasm_Fetch_splitCookieCommas_spec__1_spec__1___closed__1));
lean_inc_ref(v___y_1121_);
v___x_1151_ = lean_array_to_list(v___y_1121_);
v___x_1152_ = l_String_intercalate(v___x_1150_, v___x_1151_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 1, v___x_1152_);
v___x_1154_ = v___x_1147_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_fst_1138_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = lean_array_push(v_fst_1132_, v___x_1154_);
v___x_1156_ = lean_box(v_placed_1141_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 1, v___x_1156_);
lean_ctor_set(v___x_1135_, 0, v___x_1155_);
v___x_1158_ = v___x_1135_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
v_a_1127_ = v___x_1158_;
goto v___jp_1126_;
}
}
}
else
{
lean_object* v___x_1162_; 
lean_dec(v_fst_1138_);
lean_del_object(v___x_1135_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 1, v_snd_1133_);
lean_ctor_set(v___x_1147_, 0, v_fst_1132_);
v___x_1162_ = v___x_1147_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_fst_1132_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_snd_1133_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
v_a_1127_ = v___x_1162_;
goto v___jp_1126_;
}
}
}
}
}
}
v___jp_1126_:
{
size_t v___x_1128_; size_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = ((size_t)1ULL);
v___x_1129_ = lean_usize_add(v_i_1124_, v___x_1128_);
v___x_1130_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0_spec__0(v___y_1121_, v_as_1122_, v_sz_1123_, v___x_1129_, v_a_1127_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0___boxed(lean_object* v___y_1168_, lean_object* v_as_1169_, lean_object* v_sz_1170_, lean_object* v_i_1171_, lean_object* v_b_1172_){
_start:
{
size_t v_sz_boxed_1173_; size_t v_i_boxed_1174_; lean_object* v_res_1175_; 
v_sz_boxed_1173_ = lean_unbox_usize(v_sz_1170_);
lean_dec(v_sz_1170_);
v_i_boxed_1174_ = lean_unbox_usize(v_i_1171_);
lean_dec(v_i_1171_);
v_res_1175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1168_, v_as_1169_, v_sz_boxed_1173_, v_i_boxed_1174_, v_b_1172_);
lean_dec_ref(v_as_1169_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(lean_object* v_as_1176_, size_t v_i_1177_, size_t v_stop_1178_, lean_object* v_b_1179_){
_start:
{
lean_object* v___y_1181_; uint8_t v___x_1185_; 
v___x_1185_ = lean_usize_dec_eq(v_i_1177_, v_stop_1178_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1186_ = lean_array_uget_borrowed(v_as_1176_, v_i_1177_);
v___x_1187_ = lean_string_utf8_byte_size(v___x_1186_);
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = lean_nat_dec_eq(v___x_1187_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; 
lean_inc(v___x_1186_);
v___x_1190_ = lean_array_push(v_b_1179_, v___x_1186_);
v___y_1181_ = v___x_1190_;
goto v___jp_1180_;
}
else
{
v___y_1181_ = v_b_1179_;
goto v___jp_1180_;
}
}
else
{
return v_b_1179_;
}
v___jp_1180_:
{
size_t v___x_1182_; size_t v___x_1183_; 
v___x_1182_ = ((size_t)1ULL);
v___x_1183_ = lean_usize_add(v_i_1177_, v___x_1182_);
v_i_1177_ = v___x_1183_;
v_b_1179_ = v___y_1181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2___boxed(lean_object* v_as_1191_, lean_object* v_i_1192_, lean_object* v_stop_1193_, lean_object* v_b_1194_){
_start:
{
size_t v_i_boxed_1195_; size_t v_stop_boxed_1196_; lean_object* v_res_1197_; 
v_i_boxed_1195_ = lean_unbox_usize(v_i_1192_);
lean_dec(v_i_1192_);
v_stop_boxed_1196_ = lean_unbox_usize(v_stop_1193_);
lean_dec(v_stop_1193_);
v_res_1197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v_as_1191_, v_i_boxed_1195_, v_stop_boxed_1196_, v_b_1194_);
lean_dec_ref(v_as_1191_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies(lean_object* v_headers_1200_){
_start:
{
lean_object* v___y_1202_; lean_object* v___x_1213_; lean_object* v___y_1215_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_array_get_size(v_headers_1200_);
v___x_1228_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1229_ = lean_nat_dec_lt(v___x_1213_, v___x_1227_);
if (v___x_1229_ == 0)
{
v___y_1215_ = v___x_1228_;
goto v___jp_1214_;
}
else
{
uint8_t v___x_1230_; 
v___x_1230_ = lean_nat_dec_le(v___x_1227_, v___x_1227_);
if (v___x_1230_ == 0)
{
if (v___x_1229_ == 0)
{
v___y_1215_ = v___x_1228_;
goto v___jp_1214_;
}
else
{
size_t v___x_1231_; size_t v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = ((size_t)0ULL);
v___x_1232_ = lean_usize_of_nat(v___x_1227_);
v___x_1233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1200_, v___x_1231_, v___x_1232_, v___x_1228_);
v___y_1215_ = v___x_1233_;
goto v___jp_1214_;
}
}
else
{
size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = ((size_t)0ULL);
v___x_1235_ = lean_usize_of_nat(v___x_1227_);
v___x_1236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__3(v_headers_1200_, v___x_1234_, v___x_1235_, v___x_1228_);
v___y_1215_ = v___x_1236_;
goto v___jp_1214_;
}
}
v___jp_1201_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v_placed_1205_; 
v___x_1203_ = lean_array_get_size(v___y_1202_);
v___x_1204_ = lean_unsigned_to_nat(0u);
v_placed_1205_ = lean_nat_dec_eq(v___x_1203_, v___x_1204_);
if (v_placed_1205_ == 0)
{
lean_object* v_out_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; size_t v_sz_1209_; size_t v___x_1210_; lean_object* v___x_1211_; lean_object* v_fst_1212_; 
v_out_1206_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_1207_ = lean_box(v_placed_1205_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v_out_1206_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v_sz_1209_ = lean_array_size(v_headers_1200_);
v___x_1210_ = ((size_t)0ULL);
v___x_1211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_joinCookies_spec__0(v___y_1202_, v_headers_1200_, v_sz_1209_, v___x_1210_, v___x_1208_);
v_fst_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_fst_1212_);
lean_dec_ref(v___x_1211_);
return v_fst_1212_;
}
else
{
lean_dec_ref(v___y_1202_);
lean_inc_ref(v_headers_1200_);
return v_headers_1200_;
}
}
v___jp_1214_:
{
size_t v_sz_1216_; size_t v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_sz_1216_ = lean_array_size(v___y_1215_);
v___x_1217_ = ((size_t)0ULL);
v___x_1218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Fetch_joinCookies_spec__1(v_sz_1216_, v___x_1217_, v___y_1215_);
v___x_1219_ = lean_array_get_size(v___x_1218_);
v___x_1220_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_1221_ = lean_nat_dec_lt(v___x_1213_, v___x_1219_);
if (v___x_1221_ == 0)
{
lean_dec_ref(v___x_1218_);
v___y_1202_ = v___x_1220_;
goto v___jp_1201_;
}
else
{
uint8_t v___x_1222_; 
v___x_1222_ = lean_nat_dec_le(v___x_1219_, v___x_1219_);
if (v___x_1222_ == 0)
{
if (v___x_1221_ == 0)
{
lean_dec_ref(v___x_1218_);
v___y_1202_ = v___x_1220_;
goto v___jp_1201_;
}
else
{
size_t v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_usize_of_nat(v___x_1219_);
v___x_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1218_, v___x_1217_, v___x_1223_, v___x_1220_);
lean_dec_ref(v___x_1218_);
v___y_1202_ = v___x_1224_;
goto v___jp_1201_;
}
}
else
{
size_t v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_usize_of_nat(v___x_1219_);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_joinCookies_spec__2(v___x_1218_, v___x_1217_, v___x_1225_, v___x_1220_);
lean_dec_ref(v___x_1218_);
v___y_1202_ = v___x_1226_;
goto v___jp_1201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_joinCookies___boxed(lean_object* v_headers_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Lasm_Fetch_joinCookies(v_headers_1237_);
lean_dec_ref(v_headers_1237_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_1239_){
_start:
{
lean_object* v_r_1242_; 
if (lean_obj_tag(v_x_1239_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1253_; 
v_a_1245_ = lean_ctor_get(v_x_1239_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1247_ = v_x_1239_;
v_isShared_1248_ = v_isSharedCheck_1253_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v_x_1239_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1253_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
}
else
{
lean_object* v_a_1254_; lean_object* v_a_1255_; 
v_a_1254_ = lean_ctor_get(v_x_1239_, 0);
lean_inc(v_a_1254_);
lean_dec_ref_known(v_x_1239_, 1);
v_a_1255_ = lean_ctor_get(v_a_1254_, 0);
lean_inc(v_a_1255_);
lean_dec(v_a_1254_);
v_r_1242_ = v_a_1255_;
goto v___jp_1241_;
}
v___jp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1243_, 0, v_r_1242_);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
return v___x_1244_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lasm_Fetch_respond___lam__0(v_x_1256_);
return v_res_1258_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = 500;
v___x_1261_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_1262_ = l_Lasm_Fetch_Response_text(v___x_1261_, v___x_1260_);
return v___x_1262_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
return v___x_1266_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1279_; 
v_a_1271_ = lean_ctor_get(v_x_1269_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_x_1269_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1273_ = v_x_1269_;
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v_x_1269_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
}
}
else
{
lean_object* v___x_1280_; 
lean_dec_ref_known(v_x_1269_, 1);
v___x_1280_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lasm_Fetch_respond___lam__1(v_x_1281_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_1284_){
_start:
{
if (lean_obj_tag(v_x_1284_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1294_; 
v_a_1286_ = lean_ctor_get(v_x_1284_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_x_1284_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1288_ = v_x_1284_;
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v_x_1284_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
return v___x_1292_;
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1304_; 
v_a_1295_ = lean_ctor_get(v_x_1284_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_x_1284_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1297_ = v_x_1284_;
v_isShared_1298_ = v_isSharedCheck_1304_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v_x_1284_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1304_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
return v___x_1302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_Lasm_Fetch_respond___lam__2(v_x_1305_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_1311_, lean_object* v_req_1312_, lean_object* v___f_1313_, lean_object* v_x_1314_){
_start:
{
if (lean_obj_tag(v_x_1314_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1345_; 
v_a_1316_ = lean_ctor_get(v_x_1314_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_x_1314_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1318_ = v_x_1314_;
v_isShared_1319_ = v_isSharedCheck_1345_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v_x_1314_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1345_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v_val_1333_; lean_object* v___x_1336_; 
v___x_1320_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_1321_ = lean_string_append(v___x_1320_, v_method_1311_);
v___x_1322_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
v___x_1324_ = l_Lasm_Fetch_Request_path(v_req_1312_);
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
lean_dec_ref(v___x_1324_);
v___x_1326_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
v___x_1328_ = lean_io_error_to_string(v_a_1316_);
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
lean_dec_ref(v___x_1328_);
v___x_1330_ = lean_unsigned_to_nat(0u);
v___x_1331_ = 0;
v___x_1336_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1329_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
if (v_isShared_1319_ == 0)
{
lean_ctor_set_tag(v___x_1318_, 1);
lean_ctor_set(v___x_1318_, 0, v_a_1337_);
v___x_1339_ = v___x_1318_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
v_val_1333_ = v___x_1339_;
goto v___jp_1332_;
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; 
v_a_1341_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1336_, 1);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v_a_1341_);
v___x_1343_ = v___x_1318_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
v_val_1333_ = v___x_1343_;
goto v___jp_1332_;
}
}
v___jp_1332_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1334_, 0, v_val_1333_);
v___x_1335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1330_, v___x_1331_, v___x_1334_, v___f_1313_);
return v___x_1335_;
}
}
}
else
{
lean_object* v___x_1346_; 
lean_dec_ref(v___f_1313_);
lean_dec_ref(v_req_1312_);
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_x_1314_);
return v___x_1346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_1347_, lean_object* v_req_1348_, lean_object* v___f_1349_, lean_object* v_x_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lasm_Fetch_respond___lam__3(v_method_1347_, v_req_1348_, v___f_1349_, v_x_1350_);
lean_dec_ref(v_method_1347_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_1358_, lean_object* v_req_1359_){
_start:
{
lean_object* v_method_1361_; lean_object* v_url_1362_; lean_object* v_headers_1363_; lean_object* v_body_1364_; lean_object* v_read_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1389_; 
v_method_1361_ = lean_ctor_get(v_req_1359_, 0);
v_url_1362_ = lean_ctor_get(v_req_1359_, 1);
v_headers_1363_ = lean_ctor_get(v_req_1359_, 2);
v_body_1364_ = lean_ctor_get(v_req_1359_, 3);
v_read_1365_ = lean_ctor_get(v_req_1359_, 4);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_req_1359_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1367_ = v_req_1359_;
v_isShared_1368_ = v_isSharedCheck_1389_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_read_1365_);
lean_inc(v_body_1364_);
lean_inc(v_headers_1363_);
lean_inc(v_url_1362_);
lean_inc(v_method_1361_);
lean_dec(v_req_1359_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1389_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___f_1369_; lean_object* v___f_1370_; lean_object* v___f_1371_; lean_object* v___x_1372_; lean_object* v_req_1374_; 
v___f_1369_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_1370_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_1371_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
v___x_1372_ = l_Lasm_Fetch_joinCookies(v_headers_1363_);
lean_dec_ref(v_headers_1363_);
lean_inc_ref(v_read_1365_);
lean_inc_ref(v_body_1364_);
lean_inc_ref(v___x_1372_);
lean_inc_ref(v_url_1362_);
lean_inc_ref(v_method_1361_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 2, v___x_1372_);
v_req_1374_ = v___x_1367_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_method_1361_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_url_1362_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_body_1364_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v_read_1365_);
v_req_1374_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___f_1375_; lean_object* v___y_1377_; lean_object* v___x_1384_; uint8_t v___x_1385_; 
lean_inc_ref(v_req_1374_);
lean_inc_ref(v_method_1361_);
v___f_1375_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1375_, 0, v_method_1361_);
lean_closure_set(v___f_1375_, 1, v_req_1374_);
lean_closure_set(v___f_1375_, 2, v___f_1370_);
v___x_1384_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1385_ = lean_string_dec_eq(v_method_1361_, v___x_1384_);
lean_dec_ref(v_method_1361_);
if (v___x_1385_ == 0)
{
lean_dec_ref(v___x_1372_);
lean_dec_ref(v_read_1365_);
lean_dec_ref(v_body_1364_);
lean_dec_ref(v_url_1362_);
v___y_1377_ = v_req_1374_;
goto v___jp_1376_;
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
lean_dec_ref(v_req_1374_);
v___x_1386_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
lean_ctor_set(v___x_1387_, 1, v_url_1362_);
lean_ctor_set(v___x_1387_, 2, v___x_1372_);
lean_ctor_set(v___x_1387_, 3, v_body_1364_);
lean_ctor_set(v___x_1387_, 4, v_read_1365_);
v___y_1377_ = v___x_1387_;
goto v___jp_1376_;
}
v___jp_1376_:
{
lean_object* v___x_1378_; uint8_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1378_ = lean_unsigned_to_nat(0u);
v___x_1379_ = 0;
v___x_1380_ = lean_apply_2(v_handler_1358_, v___y_1377_, lean_box(0));
v___x_1381_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1378_, v___x_1379_, v___x_1380_, v___f_1371_);
v___x_1382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1378_, v___x_1379_, v___x_1381_, v___f_1375_);
v___x_1383_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1378_, v___x_1379_, v___x_1382_, v___f_1369_);
return v___x_1383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1390_, lean_object* v_req_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lasm_Fetch_respond(v_handler_1390_, v_req_1391_);
return v_res_1393_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1394_, uint16_t v_status_1395_){
_start:
{
lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1397_ = lean_string_dec_eq(v_method_1394_, v___x_1396_);
if (v___x_1397_ == 0)
{
uint16_t v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = 101;
v___x_1399_ = lean_uint16_dec_eq(v_status_1395_, v___x_1398_);
if (v___x_1399_ == 0)
{
uint16_t v___x_1400_; uint8_t v___x_1401_; 
v___x_1400_ = 204;
v___x_1401_ = lean_uint16_dec_eq(v_status_1395_, v___x_1400_);
if (v___x_1401_ == 0)
{
uint16_t v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = 205;
v___x_1403_ = lean_uint16_dec_eq(v_status_1395_, v___x_1402_);
if (v___x_1403_ == 0)
{
uint16_t v___x_1404_; uint8_t v___x_1405_; 
v___x_1404_ = 304;
v___x_1405_ = lean_uint16_dec_eq(v_status_1395_, v___x_1404_);
return v___x_1405_;
}
else
{
return v___x_1403_;
}
}
else
{
return v___x_1401_;
}
}
else
{
return v___x_1399_;
}
}
else
{
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1406_, lean_object* v_status_1407_){
_start:
{
uint16_t v_status_boxed_1408_; uint8_t v_res_1409_; lean_object* v_r_1410_; 
v_status_boxed_1408_ = lean_unbox(v_status_1407_);
v_res_1409_ = l_Lasm_Fetch_bodyless(v_method_1406_, v_status_boxed_1408_);
lean_dec_ref(v_method_1406_);
v_r_1410_ = lean_box(v_res_1409_);
return v_r_1410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1412_){
_start:
{
uint32_t v_res_1413_; lean_object* v_r_1414_; 
v_res_1413_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1412_);
v_r_1414_ = lean_box_uint32(v_res_1413_);
return v_r_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = lasm_fetch_take_request();
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1422_, lean_object* v_headers_1423_, lean_object* v_body_1424_, lean_object* v_a_00___x40___internal___hyg_1425_){
_start:
{
uint16_t v_status_boxed_1426_; lean_object* v_res_1427_; 
v_status_boxed_1426_ = lean_unbox(v_status_1422_);
v_res_1427_ = lasm_fetch_send_response(v_status_boxed_1426_, v_headers_1423_, v_body_1424_);
lean_dec_ref(v_body_1424_);
lean_dec_ref(v_headers_1423_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = lasm_fetch_take_request_head();
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1433_, lean_object* v_a_00___x40___internal___hyg_1434_){
_start:
{
uint32_t v_max_boxed_1435_; lean_object* v_res_1436_; 
v_max_boxed_1435_ = lean_unbox_uint32(v_max_1433_);
lean_dec(v_max_1433_);
v_res_1436_ = lasm_fetch_read(v_max_boxed_1435_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1440_, lean_object* v_headers_1441_, lean_object* v_a_00___x40___internal___hyg_1442_){
_start:
{
uint16_t v_status_boxed_1443_; lean_object* v_res_1444_; 
v_status_boxed_1443_ = lean_unbox(v_status_1440_);
v_res_1444_ = lasm_fetch_start_response(v_status_boxed_1443_, v_headers_1441_);
lean_dec_ref(v_headers_1441_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1447_, lean_object* v_a_00___x40___internal___hyg_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = lasm_fetch_write(v_chunk_1447_);
lean_dec_ref(v_chunk_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1452_, lean_object* v_a_00___x40___internal___hyg_1453_){
_start:
{
uint8_t v_ok_boxed_1454_; lean_object* v_res_1455_; 
v_ok_boxed_1454_ = lean_unbox(v_ok_1452_);
v_res_1455_ = lasm_fetch_finish(v_ok_boxed_1454_);
return v_res_1455_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1456_){
_start:
{
uint8_t v___x_1457_; 
v___x_1457_ = 0;
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1458_){
_start:
{
uint8_t v_res_1459_; lean_object* v_r_1460_; 
v_res_1459_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1458_);
lean_dec_ref(v_x_1458_);
v_r_1460_ = lean_box(v_res_1459_);
return v_r_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1470_){
_start:
{
lean_object* v_b_1473_; 
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1487_; 
v_a_1479_ = lean_ctor_get(v_x_1470_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1481_ = v_x_1470_;
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v_x_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
return v___x_1485_;
}
}
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v_a_1488_ = lean_ctor_get(v_x_1470_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v_x_1470_, 1);
v___x_1489_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1490_ = l_Lasm_JS_Data_field(v_a_1488_, v___x_1489_);
if (lean_obj_tag(v___x_1490_) == 2)
{
uint8_t v_b_1491_; 
v_b_1491_ = lean_ctor_get_uint8(v___x_1490_, 0);
lean_dec_ref_known(v___x_1490_, 0);
if (v_b_1491_ == 1)
{
lean_object* v___x_1492_; 
lean_dec(v_a_1488_);
v___x_1492_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1492_;
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1494_ = l_Lasm_JS_Data_field(v_a_1488_, v___x_1493_);
lean_dec(v_a_1488_);
if (lean_obj_tag(v___x_1494_) == 6)
{
lean_object* v_b_1495_; 
v_b_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc_ref(v_b_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v_b_1473_ = v_b_1495_;
goto v___jp_1472_;
}
else
{
lean_dec(v___x_1494_);
goto v___jp_1477_;
}
}
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec(v___x_1490_);
v___x_1496_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1497_ = l_Lasm_JS_Data_field(v_a_1488_, v___x_1496_);
lean_dec(v_a_1488_);
if (lean_obj_tag(v___x_1497_) == 6)
{
lean_object* v_b_1498_; 
v_b_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc_ref(v_b_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v_b_1473_ = v_b_1498_;
goto v___jp_1472_;
}
else
{
lean_dec(v___x_1497_);
goto v___jp_1477_;
}
}
}
v___jp_1472_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1474_, 0, v_b_1473_);
v___x_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
return v___x_1476_;
}
v___jp_1477_:
{
lean_object* v___x_1478_; 
v___x_1478_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1499_);
return v_res_1501_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1502_; uint64_t v___x_1503_; 
v___x_1502_ = 0;
v___x_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1504_, uint64_t v_extra_1505_){
_start:
{
uint64_t v___x_1506_; uint64_t v___y_1508_; 
v___x_1506_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1504_ == 0)
{
uint64_t v___x_1511_; 
v___x_1511_ = 0ULL;
v___y_1508_ = v___x_1511_;
goto v___jp_1507_;
}
else
{
uint64_t v___x_1512_; 
v___x_1512_ = 2ULL;
v___y_1508_ = v___x_1512_;
goto v___jp_1507_;
}
v___jp_1507_:
{
uint64_t v___x_1509_; uint64_t v___x_1510_; 
v___x_1509_ = lean_uint64_lor(v___x_1506_, v___y_1508_);
v___x_1510_ = lean_uint64_lor(v___x_1509_, v_extra_1505_);
return v___x_1510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1513_, lean_object* v_extra_1514_){
_start:
{
uint8_t v_await_boxed_1515_; uint64_t v_extra_boxed_1516_; uint64_t v_res_1517_; lean_object* v_r_1518_; 
v_await_boxed_1515_ = lean_unbox(v_await_1513_);
v_extra_boxed_1516_ = lean_unbox_uint64(v_extra_1514_);
lean_dec_ref(v_extra_1514_);
v_res_1517_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1515_, v_extra_boxed_1516_);
v_r_1518_ = lean_box_uint64(v_res_1517_);
return v_r_1518_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1519_){
_start:
{
if (lean_obj_tag(v_x_1519_) == 0)
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1521_, 0, v_x_1519_);
return v___x_1521_;
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1530_; 
v_a_1522_ = lean_ctor_get(v_x_1519_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_x_1519_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1524_ = v_x_1519_;
v_isShared_1525_ = v_isSharedCheck_1530_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v_x_1519_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1530_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1531_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1534_, lean_object* v_x_1535_){
_start:
{
if (lean_obj_tag(v_x_1535_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1545_; 
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
lean_object* v___x_1546_; 
lean_dec_ref_known(v_x_1535_, 1);
v___x_1546_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1534_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1547_, lean_object* v_x_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1547_, v_x_1548_);
lean_dec(v_a_1547_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1551_, lean_object* v_failurePrefix_1552_, lean_object* v___f_1553_, lean_object* v___f_1554_, uint32_t v_op_1555_, uint64_t v_flags_1556_, lean_object* v___f_1557_, lean_object* v_x_1558_){
_start:
{
if (lean_obj_tag(v_x_1558_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v___f_1557_);
lean_dec_ref(v___f_1554_);
lean_dec_ref(v___f_1553_);
v_a_1560_ = lean_ctor_get(v_x_1558_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1558_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1562_ = v_x_1558_;
v_isShared_1563_ = v_isSharedCheck_1568_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v_x_1558_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1568_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
return v___x_1566_;
}
}
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1610_; 
v_a_1569_ = lean_ctor_get(v_x_1558_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_x_1558_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1571_ = v_x_1558_;
v_isShared_1572_ = v_isSharedCheck_1610_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v_x_1558_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1610_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
uint32_t v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v___x_1573_ = 0;
v___x_1574_ = l_Lasm_JS_Wire_encode(v_payload_1551_);
v___x_1575_ = lean_string_utf8_byte_size(v_failurePrefix_1552_);
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = lean_nat_dec_eq(v___x_1575_, v___x_1576_);
if (v___x_1577_ == 0)
{
lean_object* v___f_1578_; lean_object* v_val_1580_; lean_object* v___x_1585_; 
lean_dec_ref(v___f_1557_);
lean_inc(v_a_1569_);
v___f_1578_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1578_, 0, v_a_1569_);
v___x_1585_ = lasm_js_call_into(v_a_1569_, v_op_1555_, v___x_1573_, v_flags_1556_, v___x_1574_, v_payload_1551_);
lean_dec_ref(v___x_1574_);
lean_dec(v_a_1569_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v_a_1586_);
v___x_1588_ = v___x_1571_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
v_val_1580_ = v___x_1588_;
goto v___jp_1579_;
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; 
v_a_1590_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1585_, 1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 0);
lean_ctor_set(v___x_1571_, 0, v_a_1590_);
v___x_1592_ = v___x_1571_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
v_val_1580_ = v___x_1592_;
goto v___jp_1579_;
}
}
v___jp_1579_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v_val_1580_);
v___x_1582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1576_, v___x_1577_, v___x_1581_, v___f_1578_);
v___x_1583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1576_, v___x_1577_, v___x_1582_, v___f_1553_);
v___x_1584_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1576_, v___x_1577_, v___x_1583_, v___f_1554_);
return v___x_1584_;
}
}
else
{
lean_object* v___f_1594_; uint8_t v___x_1595_; lean_object* v_val_1597_; lean_object* v___x_1601_; 
lean_dec_ref(v___f_1554_);
lean_dec_ref(v___f_1553_);
lean_inc(v_a_1569_);
v___f_1594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1594_, 0, v_a_1569_);
v___x_1595_ = 0;
v___x_1601_ = lasm_js_call_into(v_a_1569_, v_op_1555_, v___x_1573_, v_flags_1556_, v___x_1574_, v_payload_1551_);
lean_dec_ref(v___x_1574_);
lean_dec(v_a_1569_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
lean_dec_ref_known(v___x_1601_, 1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v_a_1602_);
v___x_1604_ = v___x_1571_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1602_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
v_val_1597_ = v___x_1604_;
goto v___jp_1596_;
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; 
v_a_1606_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1601_, 1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 0);
lean_ctor_set(v___x_1571_, 0, v_a_1606_);
v___x_1608_ = v___x_1571_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1606_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
v_val_1597_ = v___x_1608_;
goto v___jp_1596_;
}
}
v___jp_1596_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_val_1597_);
v___x_1599_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1576_, v___x_1595_, v___x_1598_, v___f_1594_);
v___x_1600_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1576_, v___x_1595_, v___x_1599_, v___f_1557_);
return v___x_1600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1611_, lean_object* v_failurePrefix_1612_, lean_object* v___f_1613_, lean_object* v___f_1614_, lean_object* v_op_1615_, lean_object* v_flags_1616_, lean_object* v___f_1617_, lean_object* v_x_1618_, lean_object* v___y_1619_){
_start:
{
uint32_t v_op_boxed_1620_; uint64_t v_flags_boxed_1621_; lean_object* v_res_1622_; 
v_op_boxed_1620_ = lean_unbox_uint32(v_op_1615_);
lean_dec(v_op_1615_);
v_flags_boxed_1621_ = lean_unbox_uint64(v_flags_1616_);
lean_dec_ref(v_flags_1616_);
v_res_1622_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1611_, v_failurePrefix_1612_, v___f_1613_, v___f_1614_, v_op_boxed_1620_, v_flags_boxed_1621_, v___f_1617_, v_x_1618_);
lean_dec_ref(v_failurePrefix_1612_);
lean_dec(v_payload_1611_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1623_, lean_object* v_bytes_1624_){
_start:
{
lean_object* v___x_1626_; uint8_t v___x_1627_; lean_object* v_val_1629_; lean_object* v___x_1632_; 
v___x_1626_ = lean_unsigned_to_nat(0u);
v___x_1627_ = 0;
v___x_1632_ = l_Lasm_JS_Wire_decode(v_bytes_1624_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1632_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1632_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 1);
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
v_val_1629_ = v___x_1638_;
goto v___jp_1628_;
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
v_a_1641_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1632_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1632_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
lean_ctor_set_tag(v___x_1643_, 0);
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
v_val_1629_ = v___x_1646_;
goto v___jp_1628_;
}
}
}
v___jp_1628_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1630_, 0, v_val_1629_);
v___x_1631_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1626_, v___x_1627_, v___x_1630_, v___f_1623_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1649_, lean_object* v_bytes_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1649_, v_bytes_1650_);
lean_dec_ref(v_bytes_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1653_, lean_object* v_x_1654_){
_start:
{
if (lean_obj_tag(v_x_1654_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1667_; 
v_a_1656_ = lean_ctor_get(v_x_1654_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_x_1654_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1658_ = v_x_1654_;
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v_x_1654_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1664_; 
v___x_1660_ = lean_io_error_to_string(v_a_1656_);
v___x_1661_ = lean_string_append(v_failurePrefix_1653_, v___x_1660_);
lean_dec_ref(v___x_1660_);
v___x_1662_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1662_);
v___x_1664_ = v___x_1658_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1662_);
v___x_1664_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
return v___x_1665_;
}
}
}
else
{
lean_object* v___x_1668_; 
lean_dec_ref(v_failurePrefix_1653_);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_x_1654_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1669_, lean_object* v_x_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1669_, v_x_1670_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1673_, lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1684_; 
lean_dec_ref(v___f_1673_);
v_a_1676_ = lean_ctor_get(v_x_1674_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_x_1674_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1678_ = v_x_1674_;
v_isShared_1679_ = v_isSharedCheck_1684_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v_x_1674_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1684_;
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
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
return v___x_1682_;
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1686_; 
v_a_1685_ = lean_ctor_get(v_x_1674_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v_x_1674_, 1);
v___x_1686_ = lean_apply_2(v___f_1673_, v_a_1685_, lean_box(0));
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1687_, v_x_1688_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1691_, lean_object* v_x_1692_){
_start:
{
if (lean_obj_tag(v_x_1692_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1702_; 
lean_dec_ref(v___f_1691_);
v_a_1694_ = lean_ctor_get(v_x_1692_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_x_1692_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1696_ = v_x_1692_;
v_isShared_1697_ = v_isSharedCheck_1702_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v_x_1692_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1702_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
return v___x_1700_;
}
}
}
else
{
lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1714_; 
v_isSharedCheck_1714_ = !lean_is_exclusive(v_x_1692_);
if (v_isSharedCheck_1714_ == 0)
{
lean_object* v_unused_1715_; 
v_unused_1715_ = lean_ctor_get(v_x_1692_, 0);
lean_dec(v_unused_1715_);
v___x_1704_ = v_x_1692_;
v_isShared_1705_ = v_isSharedCheck_1714_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v_x_1692_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1714_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; uint8_t v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1706_ = lean_unsigned_to_nat(0u);
v___x_1707_ = 0;
v___x_1708_ = lean_io_promise_new();
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v___x_1708_);
v___x_1710_ = v___x_1704_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
v___x_1712_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1706_, v___x_1707_, v___x_1711_, v___f_1691_);
return v___x_1712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1716_, lean_object* v_x_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1716_, v_x_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1725_, uint64_t v_flags_1726_, lean_object* v_payload_1727_, lean_object* v_failurePrefix_1728_){
_start:
{
lean_object* v___f_1730_; lean_object* v___f_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___f_1735_; lean_object* v___x_1736_; uint8_t v___x_1737_; lean_object* v_val_1739_; lean_object* v___x_1742_; 
lean_inc_ref(v_failurePrefix_1728_);
v___f_1730_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1730_, 0, v_failurePrefix_1728_);
v___f_1731_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1732_ = lean_box_uint32(v_op_1725_);
v___x_1733_ = lean_box_uint64(v_flags_1726_);
v___f_1734_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1734_, 0, v_payload_1727_);
lean_closure_set(v___f_1734_, 1, v_failurePrefix_1728_);
lean_closure_set(v___f_1734_, 2, v___f_1730_);
lean_closure_set(v___f_1734_, 3, v___f_1731_);
lean_closure_set(v___f_1734_, 4, v___x_1732_);
lean_closure_set(v___f_1734_, 5, v___x_1733_);
lean_closure_set(v___f_1734_, 6, v___f_1731_);
v___f_1735_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1735_, 0, v___f_1734_);
v___x_1736_ = lean_unsigned_to_nat(0u);
v___x_1737_ = 0;
v___x_1742_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 1);
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v_val_1739_ = v___x_1748_;
goto v___jp_1738_;
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1742_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1742_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 0);
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
v_val_1739_ = v___x_1756_;
goto v___jp_1738_;
}
}
}
v___jp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_val_1739_);
v___x_1741_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1736_, v___x_1737_, v___x_1740_, v___f_1735_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1759_, lean_object* v_flags_1760_, lean_object* v_payload_1761_, lean_object* v_failurePrefix_1762_, lean_object* v_a_1763_){
_start:
{
uint32_t v_op_boxed_1764_; uint64_t v_flags_boxed_1765_; lean_object* v_res_1766_; 
v_op_boxed_1764_ = lean_unbox_uint32(v_op_1759_);
lean_dec(v_op_1759_);
v_flags_boxed_1765_ = lean_unbox_uint64(v_flags_1760_);
lean_dec_ref(v_flags_1760_);
v_res_1766_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1764_, v_flags_boxed_1765_, v_payload_1761_, v_failurePrefix_1762_);
return v_res_1766_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1767_; uint8_t v___x_1768_; uint64_t v___x_1769_; 
v___x_1767_ = 8ULL;
v___x_1768_ = 0;
v___x_1769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1768_, v___x_1767_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1770_, lean_object* v_name_1771_, lean_object* v_args_1772_){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; uint32_t v___x_1777_; uint64_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1774_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1775_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1775_, 0, v_o_1770_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1776_, 0, v_name_1771_);
v___x_1777_ = 205;
v___x_1778_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1779_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1779_, 0, v_args_1772_);
v___x_1780_ = lean_unsigned_to_nat(3u);
v___x_1781_ = lean_mk_empty_array_with_capacity(v___x_1780_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1775_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1776_);
v___x_1784_ = lean_array_push(v___x_1783_, v___x_1779_);
v___x_1785_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1784_);
v___x_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1777_, v___x_1778_, v___x_1785_, v___x_1774_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1787_, lean_object* v_name_1788_, lean_object* v_args_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1787_, v_name_1788_, v_args_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1792_, lean_object* v___x_1793_, lean_object* v___x_1794_, lean_object* v___x_1795_, lean_object* v___f_1796_){
_start:
{
uint8_t v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = 0;
v___x_1799_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1792_, v___x_1793_, v___x_1794_);
v___x_1800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1795_, v___x_1798_, v___x_1799_, v___f_1796_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1801_, lean_object* v___x_1802_, lean_object* v___x_1803_, lean_object* v___x_1804_, lean_object* v___f_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1801_, v___x_1802_, v___x_1803_, v___x_1804_, v___f_1805_);
return v_res_1807_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1808_; uint64_t v___x_1809_; 
v___x_1808_ = 1;
v___x_1809_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1810_, uint64_t v_extra_1811_){
_start:
{
uint64_t v___x_1812_; uint64_t v___y_1814_; 
v___x_1812_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1810_ == 0)
{
uint64_t v___x_1817_; 
v___x_1817_ = 0ULL;
v___y_1814_ = v___x_1817_;
goto v___jp_1813_;
}
else
{
uint64_t v___x_1818_; 
v___x_1818_ = 2ULL;
v___y_1814_ = v___x_1818_;
goto v___jp_1813_;
}
v___jp_1813_:
{
uint64_t v___x_1815_; uint64_t v___x_1816_; 
v___x_1815_ = lean_uint64_lor(v___x_1812_, v___y_1814_);
v___x_1816_ = lean_uint64_lor(v___x_1815_, v_extra_1811_);
return v___x_1816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1819_, lean_object* v_extra_1820_){
_start:
{
uint8_t v_await_boxed_1821_; uint64_t v_extra_boxed_1822_; uint64_t v_res_1823_; lean_object* v_r_1824_; 
v_await_boxed_1821_ = lean_unbox(v_await_1819_);
v_extra_boxed_1822_ = lean_unbox_uint64(v_extra_1820_);
lean_dec_ref(v_extra_1820_);
v_res_1823_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1821_, v_extra_boxed_1822_);
v_r_1824_ = lean_box_uint64(v_res_1823_);
return v_r_1824_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1825_; uint8_t v___x_1826_; uint64_t v___x_1827_; 
v___x_1825_ = 8ULL;
v___x_1826_ = 0;
v___x_1827_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1826_, v___x_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1829_, lean_object* v_name_1830_, lean_object* v_args_1831_){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint64_t v___x_1836_; lean_object* v___x_1837_; 
v___x_1833_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1834_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1834_, 0, v_o_1829_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
lean_inc_ref(v_name_1830_);
v___x_1835_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1835_, 0, v_name_1830_);
v___x_1836_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1837_ = l_Lasm_JS_Value_invokeRaw(v___x_1834_, v___x_1835_, v_args_1831_, v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1840_ = lean_string_append(v___x_1839_, v_name_1830_);
lean_dec_ref(v_name_1830_);
v___x_1841_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1840_, v_a_1838_);
lean_dec(v_a_1838_);
lean_dec_ref(v___x_1840_);
return v___x_1841_;
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec_ref(v_name_1830_);
v_a_1842_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1837_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1837_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1850_, lean_object* v_name_1851_, lean_object* v_args_1852_, lean_object* v_a_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1850_, v_name_1851_, v_args_1852_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1860_){
_start:
{
lean_object* v___f_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___f_1862_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1863_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1864_ = lean_unsigned_to_nat(0u);
v___x_1865_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1866_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1860_, v___x_1863_, v___x_1865_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1876_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1869_ = v___x_1866_;
v_isShared_1870_ = v_isSharedCheck_1876_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1866_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1876_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; lean_object* v___f_1872_; lean_object* v___x_1874_; 
v___x_1871_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1872_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1872_, 0, v_a_1867_);
lean_closure_set(v___f_1872_, 1, v___x_1871_);
lean_closure_set(v___f_1872_, 2, v___x_1865_);
lean_closure_set(v___f_1872_, 3, v___x_1864_);
lean_closure_set(v___f_1872_, 4, v___f_1862_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 0, v___f_1872_);
v___x_1874_ = v___x_1869_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___f_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
v_a_1877_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1866_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1866_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1885_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1888_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_d_1888_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1891_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1894_, lean_object* v_d_1895_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_d_1895_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1898_, lean_object* v_d_1899_, lean_object* v_a_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1898_, v_d_1899_);
lean_dec_ref(v_context_1898_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1902_, uint32_t v_op_1903_, uint64_t v_flags_1904_, lean_object* v_payload_1905_, lean_object* v_failurePrefix_1906_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1903_, v_flags_1904_, v_payload_1905_, v_failurePrefix_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1909_, lean_object* v_op_1910_, lean_object* v_flags_1911_, lean_object* v_payload_1912_, lean_object* v_failurePrefix_1913_, lean_object* v_a_1914_){
_start:
{
uint32_t v_op_boxed_1915_; uint64_t v_flags_boxed_1916_; lean_object* v_res_1917_; 
v_op_boxed_1915_ = lean_unbox_uint32(v_op_1910_);
lean_dec(v_op_1910_);
v_flags_boxed_1916_ = lean_unbox_uint64(v_flags_1911_);
lean_dec_ref(v_flags_1911_);
v_res_1917_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1909_, v_op_boxed_1915_, v_flags_boxed_1916_, v_payload_1912_, v_failurePrefix_1913_);
lean_dec_ref(v_context_1909_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1922_){
_start:
{
if (lean_obj_tag(v_x_1922_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1932_; 
v_a_1924_ = lean_ctor_get(v_x_1922_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_x_1922_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1926_ = v_x_1922_;
v_isShared_1927_ = v_isSharedCheck_1932_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v_x_1922_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1932_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
}
else
{
lean_object* v___x_1933_; 
lean_dec_ref_known(v_x_1922_, 1);
v___x_1933_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1934_);
return v_res_1936_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1937_; uint8_t v___x_1938_; uint64_t v___x_1939_; 
v___x_1937_ = 4ULL;
v___x_1938_ = 0;
v___x_1939_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1938_, v___x_1937_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1941_, lean_object* v_args_1942_){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; uint64_t v___x_1947_; lean_object* v___x_1948_; 
v___x_1944_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1945_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_c_1941_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_box(0);
v___x_1947_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1948_ = l_Lasm_JS_Value_invokeRaw(v___x_1945_, v___x_1946_, v_args_1942_, v___x_1947_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref_known(v___x_1948_, 1);
v___x_1950_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1951_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1950_, v_a_1949_);
lean_dec(v_a_1949_);
return v___x_1951_;
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
v_a_1952_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1948_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1948_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1960_, lean_object* v_args_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1960_, v_args_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1964_, lean_object* v___x_1965_, lean_object* v_x_1966_){
_start:
{
lean_object* v_val_1969_; 
if (lean_obj_tag(v_x_1966_) == 0)
{
lean_object* v___x_1971_; 
lean_dec(v___x_1965_);
lean_dec(v___y_1964_);
v___x_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1971_, 0, v_x_1966_);
return v___x_1971_;
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1989_; 
v_a_1972_ = lean_ctor_get(v_x_1966_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_x_1966_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1974_ = v_x_1966_;
v_isShared_1975_ = v_isSharedCheck_1989_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v_x_1966_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1989_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1976_ = lean_unsigned_to_nat(2u);
v___x_1977_ = lean_mk_empty_array_with_capacity(v___x_1976_);
v___x_1978_ = lean_array_push(v___x_1977_, v___y_1964_);
v___x_1979_ = lean_array_push(v___x_1978_, v___x_1965_);
v___x_1980_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1972_, v___x_1979_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 0, v_a_1981_);
v___x_1983_ = v___x_1974_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1981_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
v_val_1969_ = v___x_1983_;
goto v___jp_1968_;
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; 
v_a_1985_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1985_);
lean_dec_ref_known(v___x_1980_, 1);
if (v_isShared_1975_ == 0)
{
lean_ctor_set_tag(v___x_1974_, 0);
lean_ctor_set(v___x_1974_, 0, v_a_1985_);
v___x_1987_ = v___x_1974_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v_val_1969_ = v___x_1987_;
goto v___jp_1968_;
}
}
}
}
v___jp_1968_:
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1970_, 0, v_val_1969_);
return v___x_1970_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_1990_, lean_object* v___x_1991_, lean_object* v_x_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_1990_, v___x_1991_, v_x_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_1995_, lean_object* v___x_1996_, lean_object* v_x_1997_){
_start:
{
lean_object* v_val_2000_; 
if (lean_obj_tag(v_x_1997_) == 0)
{
lean_object* v___x_2002_; 
lean_dec(v___x_1996_);
lean_dec(v_a_1995_);
v___x_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2002_, 0, v_x_1997_);
return v___x_2002_;
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2022_; 
v_a_2003_ = lean_ctor_get(v_x_1997_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_x_1997_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2005_ = v_x_1997_;
v_isShared_2006_ = v_isSharedCheck_2022_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v_x_1997_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2022_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2007_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2008_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2008_, 0, v_a_1995_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = lean_unsigned_to_nat(2u);
v___x_2010_ = lean_mk_empty_array_with_capacity(v___x_2009_);
v___x_2011_ = lean_array_push(v___x_2010_, v___x_2008_);
v___x_2012_ = lean_array_push(v___x_2011_, v___x_1996_);
v___x_2013_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2003_, v___x_2012_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2016_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v_a_2014_);
v___x_2016_ = v___x_2005_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2014_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
v_val_2000_ = v___x_2016_;
goto v___jp_1999_;
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2020_; 
v_a_2018_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2013_, 1);
if (v_isShared_2006_ == 0)
{
lean_ctor_set_tag(v___x_2005_, 0);
lean_ctor_set(v___x_2005_, 0, v_a_2018_);
v___x_2020_ = v___x_2005_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2018_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
v_val_2000_ = v___x_2020_;
goto v___jp_1999_;
}
}
}
}
v___jp_1999_:
{
lean_object* v___x_2001_; 
v___x_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2001_, 0, v_val_2000_);
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_2023_, lean_object* v___x_2024_, lean_object* v_x_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_2023_, v___x_2024_, v_x_2025_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_2029_, lean_object* v_key_2030_){
_start:
{
uint32_t v___x_2032_; uint32_t v___x_2033_; uint64_t v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2032_ = 203;
v___x_2033_ = lasm_js_value_handle(v_o_2029_);
v___x_2034_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_2030_);
v___x_2035_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_key_2030_);
v___x_2036_ = l_Lasm_JS_Wire_encode(v___x_2035_);
lean_dec_ref_known(v___x_2035_, 1);
v___x_2037_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_o_2029_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lasm_js_call(v___x_2032_, v___x_2033_, v___x_2034_, v___x_2036_, v___x_2038_);
lean_dec_ref_known(v___x_2038_, 2);
lean_dec_ref(v___x_2036_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_2042_ = l_String_quote(v_key_2030_);
v___x_2043_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
v___x_2044_ = lean_unsigned_to_nat(120u);
v___x_2045_ = lean_unsigned_to_nat(0u);
v___x_2046_ = l_Std_Format_pretty(v___x_2043_, v___x_2044_, v___x_2045_, v___x_2045_);
v___x_2047_ = lean_string_append(v___x_2041_, v___x_2046_);
lean_dec_ref(v___x_2046_);
v___x_2048_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2047_, v_a_2040_);
lean_dec(v_a_2040_);
lean_dec_ref(v___x_2047_);
return v___x_2048_;
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec_ref(v_key_2030_);
v_a_2049_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2039_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2039_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_2057_, lean_object* v_key_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_2057_, v_key_2058_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_2062_, uint8_t v___x_2063_, lean_object* v___f_2064_, lean_object* v_a_2065_, lean_object* v_x_2066_){
_start:
{
lean_object* v_val_2069_; 
if (lean_obj_tag(v_x_2066_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2080_; 
lean_dec(v_a_2065_);
lean_dec_ref(v___f_2064_);
lean_dec(v___x_2062_);
v_a_2072_ = lean_ctor_get(v_x_2066_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2066_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2074_ = v_x_2066_;
v_isShared_2075_ = v_isSharedCheck_2080_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v_x_2066_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2080_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
return v___x_2078_;
}
}
}
else
{
lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2094_; 
v_isSharedCheck_2094_ = !lean_is_exclusive(v_x_2066_);
if (v_isSharedCheck_2094_ == 0)
{
lean_object* v_unused_2095_; 
v_unused_2095_ = lean_ctor_get(v_x_2066_, 0);
lean_dec(v_unused_2095_);
v___x_2082_ = v_x_2066_;
v_isShared_2083_ = v_isSharedCheck_2094_;
goto v_resetjp_2081_;
}
else
{
lean_dec(v_x_2066_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2094_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2085_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2065_, v___x_2084_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v___x_2085_, 1);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 0, v_a_2086_);
v___x_2088_ = v___x_2082_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
v_val_2069_ = v___x_2088_;
goto v___jp_2068_;
}
}
else
{
lean_object* v_a_2090_; lean_object* v___x_2092_; 
v_a_2090_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2085_, 1);
if (v_isShared_2083_ == 0)
{
lean_ctor_set_tag(v___x_2082_, 0);
lean_ctor_set(v___x_2082_, 0, v_a_2090_);
v___x_2092_ = v___x_2082_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2090_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
v_val_2069_ = v___x_2092_;
goto v___jp_2068_;
}
}
}
}
v___jp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_val_2069_);
v___x_2071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2062_, v___x_2063_, v___x_2070_, v___f_2064_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_2096_, lean_object* v___x_2097_, lean_object* v___f_2098_, lean_object* v_a_2099_, lean_object* v_x_2100_, lean_object* v___y_2101_){
_start:
{
uint8_t v___x_5404__boxed_2102_; lean_object* v_res_2103_; 
v___x_5404__boxed_2102_ = lean_unbox(v___x_2097_);
v_res_2103_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_2096_, v___x_5404__boxed_2102_, v___f_2098_, v_a_2099_, v_x_2100_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_2105_, lean_object* v___x_2106_, uint8_t v___x_2107_, lean_object* v___f_2108_, lean_object* v_chunk_2109_){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2111_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_2112_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_chunk_2109_);
v___x_2113_ = lean_unsigned_to_nat(1u);
v___x_2114_ = lean_mk_empty_array_with_capacity(v___x_2113_);
v___x_2115_ = lean_array_push(v___x_2114_, v___x_2112_);
v___x_2116_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2105_, v___x_2111_, v___x_2115_);
v___x_2117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2106_, v___x_2107_, v___x_2116_, v___f_2108_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_2118_, lean_object* v___x_2119_, lean_object* v___x_2120_, lean_object* v___f_2121_, lean_object* v_chunk_2122_, lean_object* v___y_2123_){
_start:
{
uint8_t v___x_5483__boxed_2124_; lean_object* v_res_2125_; 
v___x_5483__boxed_2124_ = lean_unbox(v___x_2120_);
v_res_2125_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_2118_, v___x_2119_, v___x_5483__boxed_2124_, v___f_2121_, v_chunk_2122_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_2127_, lean_object* v_a_2128_, lean_object* v___x_2129_, uint8_t v___x_2130_, lean_object* v___f_2131_, lean_object* v_x_2132_){
_start:
{
if (lean_obj_tag(v_x_2132_) == 0)
{
lean_object* v___x_2134_; 
lean_dec_ref(v___f_2131_);
lean_dec(v___x_2129_);
lean_dec(v_a_2128_);
lean_dec_ref(v___x_2127_);
v___x_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2134_, 0, v_x_2132_);
return v___x_2134_;
}
else
{
lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2147_; 
v_isSharedCheck_2147_ = !lean_is_exclusive(v_x_2132_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; 
v_unused_2148_ = lean_ctor_get(v_x_2132_, 0);
lean_dec(v_unused_2148_);
v___x_2136_ = v_x_2132_;
v_isShared_2137_ = v_isSharedCheck_2147_;
goto v_resetjp_2135_;
}
else
{
lean_dec(v_x_2132_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2147_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
v___x_2138_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_2137_ == 0)
{
lean_ctor_set_tag(v___x_2136_, 4);
lean_ctor_set(v___x_2136_, 0, v___x_2127_);
v___x_2140_ = v___x_2136_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2127_);
v___x_2140_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2141_ = lean_unsigned_to_nat(1u);
v___x_2142_ = lean_mk_empty_array_with_capacity(v___x_2141_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2140_);
v___x_2144_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2128_, v___x_2138_, v___x_2143_);
v___x_2145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2129_, v___x_2130_, v___x_2144_, v___f_2131_);
return v___x_2145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_2149_, lean_object* v_a_2150_, lean_object* v___x_2151_, lean_object* v___x_2152_, lean_object* v___f_2153_, lean_object* v_x_2154_, lean_object* v___y_2155_){
_start:
{
uint8_t v___x_5516__boxed_2156_; lean_object* v_res_2157_; 
v___x_5516__boxed_2156_ = lean_unbox(v___x_2152_);
v_res_2157_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_2149_, v_a_2150_, v___x_2151_, v___x_5516__boxed_2156_, v___f_2153_, v_x_2154_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_2159_, lean_object* v___x_2160_, uint8_t v___x_2161_, lean_object* v___f_2162_, lean_object* v_x_2163_){
_start:
{
if (lean_obj_tag(v_x_2163_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2187_; 
v_a_2165_ = lean_ctor_get(v_x_2163_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_x_2163_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2167_ = v_x_2163_;
v_isShared_2168_ = v_isSharedCheck_2187_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v_x_2163_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2187_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___f_2172_; lean_object* v_val_2174_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2169_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_2170_ = lean_io_error_to_string(v_a_2165_);
v___x_2171_ = lean_box(v___x_2161_);
lean_inc(v___x_2160_);
lean_inc_ref(v___x_2170_);
v___f_2172_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_2172_, 0, v___x_2170_);
lean_closure_set(v___f_2172_, 1, v_a_2159_);
lean_closure_set(v___f_2172_, 2, v___x_2160_);
lean_closure_set(v___f_2172_, 3, v___x_2171_);
lean_closure_set(v___f_2172_, 4, v___f_2162_);
v___x_2177_ = lean_string_append(v___x_2169_, v___x_2170_);
lean_dec_ref(v___x_2170_);
v___x_2178_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_2177_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 1);
lean_ctor_set(v___x_2167_, 0, v_a_2179_);
v___x_2181_ = v___x_2167_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
v_val_2174_ = v___x_2181_;
goto v___jp_2173_;
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; 
v_a_2183_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2178_, 1);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v_a_2183_);
v___x_2185_ = v___x_2167_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
v_val_2174_ = v___x_2185_;
goto v___jp_2173_;
}
}
v___jp_2173_:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v_val_2174_);
v___x_2176_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2160_, v___x_2161_, v___x_2175_, v___f_2172_);
return v___x_2176_;
}
}
}
else
{
lean_object* v___x_2188_; 
lean_dec_ref(v___f_2162_);
lean_dec(v___x_2160_);
lean_dec(v_a_2159_);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v_x_2163_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_2189_, lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v___f_2192_, lean_object* v_x_2193_, lean_object* v___y_2194_){
_start:
{
uint8_t v___x_5571__boxed_2195_; lean_object* v_res_2196_; 
v___x_5571__boxed_2195_ = lean_unbox(v___x_2191_);
v_res_2196_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_2189_, v___x_2190_, v___x_5571__boxed_2195_, v___f_2192_, v_x_2193_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_2198_, lean_object* v___x_2199_, lean_object* v___x_2200_, uint8_t v___x_2201_, lean_object* v___f_2202_, lean_object* v_x_2203_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v___x_2205_; 
lean_dec_ref(v___f_2202_);
lean_dec(v___x_2200_);
lean_dec_ref(v___x_2199_);
lean_dec(v_a_2198_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_x_2203_);
return v___x_2205_;
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec_ref_known(v_x_2203_, 1);
v___x_2206_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_2207_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_2198_, v___x_2206_, v___x_2199_);
v___x_2208_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2200_, v___x_2201_, v___x_2207_, v___f_2202_);
return v___x_2208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_2209_, lean_object* v___x_2210_, lean_object* v___x_2211_, lean_object* v___x_2212_, lean_object* v___f_2213_, lean_object* v_x_2214_, lean_object* v___y_2215_){
_start:
{
uint8_t v___x_5642__boxed_2216_; lean_object* v_res_2217_; 
v___x_5642__boxed_2216_ = lean_unbox(v___x_2212_);
v_res_2217_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_2209_, v___x_2210_, v___x_2211_, v___x_5642__boxed_2216_, v___f_2213_, v_x_2214_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_2218_, lean_object* v___f_2219_, lean_object* v___x_2220_, uint8_t v___x_2221_, lean_object* v___f_2222_, lean_object* v___f_2223_){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2225_ = lean_apply_2(v_val_2218_, v___f_2219_, lean_box(0));
lean_inc(v___x_2220_);
v___x_2226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2220_, v___x_2221_, v___x_2225_, v___f_2222_);
v___x_2227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2220_, v___x_2221_, v___x_2226_, v___f_2223_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_2228_, lean_object* v___f_2229_, lean_object* v___x_2230_, lean_object* v___x_2231_, lean_object* v___f_2232_, lean_object* v___f_2233_, lean_object* v___y_2234_){
_start:
{
uint8_t v___x_5674__boxed_2235_; lean_object* v_res_2236_; 
v___x_5674__boxed_2235_ = lean_unbox(v___x_2231_);
v_res_2236_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_2228_, v___f_2229_, v___x_2230_, v___x_5674__boxed_2235_, v___f_2232_, v___f_2233_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_2237_, uint8_t v___x_2238_, lean_object* v___f_2239_, lean_object* v___f_2240_, lean_object* v___x_2241_, lean_object* v___f_2242_, lean_object* v_val_2243_, lean_object* v___f_2244_, lean_object* v_x_2245_){
_start:
{
if (lean_obj_tag(v_x_2245_) == 0)
{
lean_object* v___x_2247_; 
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_val_2243_);
lean_dec_ref(v___f_2242_);
lean_dec_ref(v___x_2241_);
lean_dec_ref(v___f_2240_);
lean_dec_ref(v___f_2239_);
lean_dec(v___x_2237_);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v_x_2245_);
return v___x_2247_;
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___f_2254_; lean_object* v___x_2255_; lean_object* v___f_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_a_2248_ = lean_ctor_get(v_x_2245_, 0);
lean_inc_n(v_a_2248_, 3);
lean_dec_ref_known(v_x_2245_, 1);
v___x_2249_ = lean_box(v___x_2238_);
lean_inc_n(v___x_2237_, 5);
v___f_2250_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2250_, 0, v_a_2248_);
lean_closure_set(v___f_2250_, 1, v___x_2237_);
lean_closure_set(v___f_2250_, 2, v___x_2249_);
lean_closure_set(v___f_2250_, 3, v___f_2239_);
v___x_2251_ = lean_box(v___x_2238_);
v___f_2252_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2252_, 0, v_a_2248_);
lean_closure_set(v___f_2252_, 1, v___x_2237_);
lean_closure_set(v___f_2252_, 2, v___x_2251_);
lean_closure_set(v___f_2252_, 3, v___f_2240_);
v___x_2253_ = lean_box(v___x_2238_);
v___f_2254_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2254_, 0, v_a_2248_);
lean_closure_set(v___f_2254_, 1, v___x_2241_);
lean_closure_set(v___f_2254_, 2, v___x_2237_);
lean_closure_set(v___f_2254_, 3, v___x_2253_);
lean_closure_set(v___f_2254_, 4, v___f_2242_);
v___x_2255_ = lean_box(v___x_2238_);
v___f_2256_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_2256_, 0, v_val_2243_);
lean_closure_set(v___f_2256_, 1, v___f_2250_);
lean_closure_set(v___f_2256_, 2, v___x_2237_);
lean_closure_set(v___f_2256_, 3, v___x_2255_);
lean_closure_set(v___f_2256_, 4, v___f_2254_);
lean_closure_set(v___f_2256_, 5, v___f_2252_);
v___x_2257_ = lean_io_as_task(v___f_2256_, v___x_2237_);
lean_dec_ref(v___x_2257_);
v___x_2258_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_2259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2237_, v___x_2238_, v___x_2258_, v___f_2244_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_2260_, lean_object* v___x_2261_, lean_object* v___f_2262_, lean_object* v___f_2263_, lean_object* v___x_2264_, lean_object* v___f_2265_, lean_object* v_val_2266_, lean_object* v___f_2267_, lean_object* v_x_2268_, lean_object* v___y_2269_){
_start:
{
uint8_t v___x_5703__boxed_2270_; lean_object* v_res_2271_; 
v___x_5703__boxed_2270_ = lean_unbox(v___x_2261_);
v_res_2271_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_2260_, v___x_5703__boxed_2270_, v___f_2262_, v___f_2263_, v___x_2264_, v___f_2265_, v_val_2266_, v___f_2267_, v_x_2268_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_2273_, uint8_t v___x_2274_, lean_object* v___f_2275_, lean_object* v___x_2276_, lean_object* v_x_2277_){
_start:
{
lean_object* v_val_2280_; 
if (lean_obj_tag(v_x_2277_) == 0)
{
lean_object* v___x_2283_; 
lean_dec_ref(v___x_2276_);
lean_dec_ref(v___f_2275_);
lean_dec(v___x_2273_);
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_x_2277_);
return v___x_2283_;
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2298_; 
v_a_2284_ = lean_ctor_get(v_x_2277_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_x_2277_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2286_ = v_x_2277_;
v_isShared_2287_ = v_isSharedCheck_2298_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v_x_2277_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2298_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_2289_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_2284_, v___x_2288_, v___x_2276_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v_a_2290_);
v___x_2292_ = v___x_2286_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2290_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
v_val_2280_ = v___x_2292_;
goto v___jp_2279_;
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; 
v_a_2294_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2289_, 1);
if (v_isShared_2287_ == 0)
{
lean_ctor_set_tag(v___x_2286_, 0);
lean_ctor_set(v___x_2286_, 0, v_a_2294_);
v___x_2296_ = v___x_2286_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2294_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v_val_2280_ = v___x_2296_;
goto v___jp_2279_;
}
}
}
}
v___jp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v_val_2280_);
v___x_2282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2273_, v___x_2274_, v___x_2281_, v___f_2275_);
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_2299_, lean_object* v___x_2300_, lean_object* v___f_2301_, lean_object* v___x_2302_, lean_object* v_x_2303_, lean_object* v___y_2304_){
_start:
{
uint8_t v___x_5764__boxed_2305_; lean_object* v_res_2306_; 
v___x_5764__boxed_2305_ = lean_unbox(v___x_2300_);
v_res_2306_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_2299_, v___x_5764__boxed_2305_, v___f_2301_, v___x_2302_, v_x_2303_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_2308_, lean_object* v___x_2309_, uint8_t v___x_2310_, lean_object* v_a_2311_, lean_object* v___f_2312_, lean_object* v___f_2313_, lean_object* v___x_2314_, lean_object* v___f_2315_, lean_object* v_val_2316_, lean_object* v_a_2317_, lean_object* v_x_2318_){
_start:
{
if (lean_obj_tag(v_x_2318_) == 0)
{
lean_object* v___x_2320_; 
lean_dec(v_a_2317_);
lean_dec_ref(v_val_2316_);
lean_dec_ref(v___f_2315_);
lean_dec_ref(v___x_2314_);
lean_dec_ref(v___f_2313_);
lean_dec_ref(v___f_2312_);
lean_dec(v_a_2311_);
lean_dec(v___x_2309_);
lean_dec(v___x_2308_);
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v_x_2318_);
return v___x_2320_;
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2346_; 
v_a_2321_ = lean_ctor_get(v_x_2318_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2318_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2323_ = v_x_2318_;
v_isShared_2324_ = v_isSharedCheck_2346_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v_x_2318_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2346_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___f_2325_; lean_object* v___x_2326_; lean_object* v___f_2327_; lean_object* v___x_2328_; lean_object* v___f_2329_; lean_object* v___x_2330_; lean_object* v___f_2331_; lean_object* v_val_2333_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___f_2325_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2325_, 0, v_a_2321_);
lean_closure_set(v___f_2325_, 1, v___x_2308_);
v___x_2326_ = lean_box(v___x_2310_);
lean_inc_n(v___x_2309_, 3);
v___f_2327_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2327_, 0, v___x_2309_);
lean_closure_set(v___f_2327_, 1, v___x_2326_);
lean_closure_set(v___f_2327_, 2, v___f_2325_);
lean_closure_set(v___f_2327_, 3, v_a_2311_);
v___x_2328_ = lean_box(v___x_2310_);
lean_inc_ref(v___x_2314_);
v___f_2329_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_2329_, 0, v___x_2309_);
lean_closure_set(v___f_2329_, 1, v___x_2328_);
lean_closure_set(v___f_2329_, 2, v___f_2312_);
lean_closure_set(v___f_2329_, 3, v___f_2313_);
lean_closure_set(v___f_2329_, 4, v___x_2314_);
lean_closure_set(v___f_2329_, 5, v___f_2315_);
lean_closure_set(v___f_2329_, 6, v_val_2316_);
lean_closure_set(v___f_2329_, 7, v___f_2327_);
v___x_2330_ = lean_box(v___x_2310_);
v___f_2331_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_2331_, 0, v___x_2309_);
lean_closure_set(v___f_2331_, 1, v___x_2330_);
lean_closure_set(v___f_2331_, 2, v___f_2329_);
lean_closure_set(v___f_2331_, 3, v___x_2314_);
v___x_2336_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_2337_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2317_, v___x_2336_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2337_, 1);
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 0, v_a_2338_);
v___x_2340_ = v___x_2323_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
v_val_2333_ = v___x_2340_;
goto v___jp_2332_;
}
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2337_, 1);
if (v_isShared_2324_ == 0)
{
lean_ctor_set_tag(v___x_2323_, 0);
lean_ctor_set(v___x_2323_, 0, v_a_2342_);
v___x_2344_ = v___x_2323_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
v_val_2333_ = v___x_2344_;
goto v___jp_2332_;
}
}
v___jp_2332_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v_val_2333_);
v___x_2335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2309_, v___x_2310_, v___x_2334_, v___f_2331_);
return v___x_2335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2347_, lean_object* v___x_2348_, lean_object* v___x_2349_, lean_object* v_a_2350_, lean_object* v___f_2351_, lean_object* v___f_2352_, lean_object* v___x_2353_, lean_object* v___f_2354_, lean_object* v_val_2355_, lean_object* v_a_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_){
_start:
{
uint8_t v___x_5827__boxed_2359_; lean_object* v_res_2360_; 
v___x_5827__boxed_2359_ = lean_unbox(v___x_2349_);
v_res_2360_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2347_, v___x_2348_, v___x_5827__boxed_2359_, v_a_2350_, v___f_2351_, v___f_2352_, v___x_2353_, v___f_2354_, v_val_2355_, v_a_2356_, v_x_2357_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2362_, lean_object* v___x_2363_, uint8_t v___x_2364_, lean_object* v_a_2365_, lean_object* v___f_2366_, lean_object* v___f_2367_, lean_object* v___x_2368_, lean_object* v___f_2369_, lean_object* v_val_2370_, lean_object* v_x_2371_){
_start:
{
if (lean_obj_tag(v_x_2371_) == 0)
{
lean_object* v___x_2373_; 
lean_dec_ref(v_val_2370_);
lean_dec_ref(v___f_2369_);
lean_dec_ref(v___x_2368_);
lean_dec_ref(v___f_2367_);
lean_dec_ref(v___f_2366_);
lean_dec(v_a_2365_);
lean_dec(v___x_2363_);
lean_dec(v___x_2362_);
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v_x_2371_);
return v___x_2373_;
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2394_; 
v_a_2374_ = lean_ctor_get(v_x_2371_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v_x_2371_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2376_ = v_x_2371_;
v_isShared_2377_ = v_isSharedCheck_2394_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v_x_2371_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2394_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___f_2379_; lean_object* v_val_2381_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2378_ = lean_box(v___x_2364_);
lean_inc(v_a_2374_);
lean_inc(v___x_2363_);
v___f_2379_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2379_, 0, v___x_2362_);
lean_closure_set(v___f_2379_, 1, v___x_2363_);
lean_closure_set(v___f_2379_, 2, v___x_2378_);
lean_closure_set(v___f_2379_, 3, v_a_2365_);
lean_closure_set(v___f_2379_, 4, v___f_2366_);
lean_closure_set(v___f_2379_, 5, v___f_2367_);
lean_closure_set(v___f_2379_, 6, v___x_2368_);
lean_closure_set(v___f_2379_, 7, v___f_2369_);
lean_closure_set(v___f_2379_, 8, v_val_2370_);
lean_closure_set(v___f_2379_, 9, v_a_2374_);
v___x_2384_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2385_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2374_, v___x_2384_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2388_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 0, v_a_2386_);
v___x_2388_ = v___x_2376_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
v_val_2381_ = v___x_2388_;
goto v___jp_2380_;
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; 
v_a_2390_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v___x_2385_, 1);
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 0);
lean_ctor_set(v___x_2376_, 0, v_a_2390_);
v___x_2392_ = v___x_2376_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2390_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
v_val_2381_ = v___x_2392_;
goto v___jp_2380_;
}
}
v___jp_2380_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_val_2381_);
v___x_2383_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2364_, v___x_2382_, v___f_2379_);
return v___x_2383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2395_, lean_object* v___x_2396_, lean_object* v___x_2397_, lean_object* v_a_2398_, lean_object* v___f_2399_, lean_object* v___f_2400_, lean_object* v___x_2401_, lean_object* v___f_2402_, lean_object* v_val_2403_, lean_object* v_x_2404_, lean_object* v___y_2405_){
_start:
{
uint8_t v___x_5921__boxed_2406_; lean_object* v_res_2407_; 
v___x_5921__boxed_2406_ = lean_unbox(v___x_2397_);
v_res_2407_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2395_, v___x_2396_, v___x_5921__boxed_2406_, v_a_2398_, v___f_2399_, v___f_2400_, v___x_2401_, v___f_2402_, v_val_2403_, v_x_2404_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2408_, uint8_t v___x_2409_, lean_object* v_a_2410_, lean_object* v___f_2411_, lean_object* v___f_2412_, lean_object* v___f_2413_, lean_object* v_val_2414_, lean_object* v_x_2415_){
_start:
{
if (lean_obj_tag(v_x_2415_) == 0)
{
lean_object* v___x_2417_; 
lean_dec_ref(v_val_2414_);
lean_dec_ref(v___f_2413_);
lean_dec_ref(v___f_2412_);
lean_dec_ref(v___f_2411_);
lean_dec(v_a_2410_);
lean_dec(v___x_2408_);
v___x_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2417_, 0, v_x_2415_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2439_; 
v_a_2418_ = lean_ctor_get(v_x_2415_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2420_ = v_x_2415_;
v_isShared_2421_ = v_isSharedCheck_2439_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v_x_2415_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2439_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___f_2425_; lean_object* v_val_2427_; lean_object* v___x_2430_; 
v___x_2422_ = lean_unsigned_to_nat(0u);
v___x_2423_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2424_ = lean_box(v___x_2409_);
v___f_2425_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2425_, 0, v___x_2408_);
lean_closure_set(v___f_2425_, 1, v___x_2422_);
lean_closure_set(v___f_2425_, 2, v___x_2424_);
lean_closure_set(v___f_2425_, 3, v_a_2410_);
lean_closure_set(v___f_2425_, 4, v___f_2411_);
lean_closure_set(v___f_2425_, 5, v___f_2412_);
lean_closure_set(v___f_2425_, 6, v___x_2423_);
lean_closure_set(v___f_2425_, 7, v___f_2413_);
lean_closure_set(v___f_2425_, 8, v_val_2414_);
v___x_2430_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2418_, v___x_2423_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v_a_2431_);
v___x_2433_ = v___x_2420_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
v_val_2427_ = v___x_2433_;
goto v___jp_2426_;
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; 
v_a_2435_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2430_, 1);
if (v_isShared_2421_ == 0)
{
lean_ctor_set_tag(v___x_2420_, 0);
lean_ctor_set(v___x_2420_, 0, v_a_2435_);
v___x_2437_ = v___x_2420_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
v_val_2427_ = v___x_2437_;
goto v___jp_2426_;
}
}
v___jp_2426_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2428_, 0, v_val_2427_);
v___x_2429_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2422_, v___x_2409_, v___x_2428_, v___f_2425_);
return v___x_2429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2440_, lean_object* v___x_2441_, lean_object* v_a_2442_, lean_object* v___f_2443_, lean_object* v___f_2444_, lean_object* v___f_2445_, lean_object* v_val_2446_, lean_object* v_x_2447_, lean_object* v___y_2448_){
_start:
{
uint8_t v___x_6001__boxed_2449_; lean_object* v_res_2450_; 
v___x_6001__boxed_2449_ = lean_unbox(v___x_2441_);
v_res_2450_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2440_, v___x_6001__boxed_2449_, v_a_2442_, v___f_2443_, v___f_2444_, v___f_2445_, v_val_2446_, v_x_2447_);
return v_res_2450_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2451_ = lean_box(1);
v___x_2452_ = lean_unsigned_to_nat(2u);
v___x_2453_ = lean_mk_empty_array_with_capacity(v___x_2452_);
v___x_2454_ = lean_array_push(v___x_2453_, v___x_2451_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2455_, lean_object* v_x_2456_){
_start:
{
lean_object* v_val_2459_; 
if (lean_obj_tag(v_x_2456_) == 0)
{
lean_object* v___x_2461_; 
lean_dec(v___x_2455_);
v___x_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2461_, 0, v_x_2456_);
return v___x_2461_;
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2477_; 
v_a_2462_ = lean_ctor_get(v_x_2456_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v_x_2456_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2464_ = v_x_2456_;
v_isShared_2465_ = v_isSharedCheck_2477_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v_x_2456_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2477_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2467_ = lean_array_push(v___x_2466_, v___x_2455_);
v___x_2468_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2462_, v___x_2467_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; lean_object* v___x_2471_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2469_);
lean_dec_ref_known(v___x_2468_, 1);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v_a_2469_);
v___x_2471_ = v___x_2464_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2469_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
v_val_2459_ = v___x_2471_;
goto v___jp_2458_;
}
}
else
{
lean_object* v_a_2473_; lean_object* v___x_2475_; 
v_a_2473_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2468_, 1);
if (v_isShared_2465_ == 0)
{
lean_ctor_set_tag(v___x_2464_, 0);
lean_ctor_set(v___x_2464_, 0, v_a_2473_);
v___x_2475_ = v___x_2464_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
v_val_2459_ = v___x_2475_;
goto v___jp_2458_;
}
}
}
}
v___jp_2458_:
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2460_, 0, v_val_2459_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2478_, lean_object* v_x_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2478_, v_x_2479_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2482_, size_t v_i_2483_, lean_object* v_bs_2484_){
_start:
{
uint8_t v___x_2485_; 
v___x_2485_ = lean_usize_dec_lt(v_i_2483_, v_sz_2482_);
if (v___x_2485_ == 0)
{
return v_bs_2484_;
}
else
{
lean_object* v_v_2486_; lean_object* v_fst_2487_; lean_object* v_snd_2488_; lean_object* v___x_2489_; lean_object* v_bs_x27_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; size_t v___x_2498_; size_t v___x_2499_; lean_object* v___x_2500_; 
v_v_2486_ = lean_array_uget_borrowed(v_bs_2484_, v_i_2483_);
v_fst_2487_ = lean_ctor_get(v_v_2486_, 0);
lean_inc(v_fst_2487_);
v_snd_2488_ = lean_ctor_get(v_v_2486_, 1);
lean_inc(v_snd_2488_);
v___x_2489_ = lean_unsigned_to_nat(0u);
v_bs_x27_2490_ = lean_array_uset(v_bs_2484_, v_i_2483_, v___x_2489_);
v___x_2491_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2491_, 0, v_fst_2487_);
v___x_2492_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_snd_2488_);
v___x_2493_ = lean_unsigned_to_nat(2u);
v___x_2494_ = lean_mk_empty_array_with_capacity(v___x_2493_);
v___x_2495_ = lean_array_push(v___x_2494_, v___x_2491_);
v___x_2496_ = lean_array_push(v___x_2495_, v___x_2492_);
v___x_2497_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = ((size_t)1ULL);
v___x_2499_ = lean_usize_add(v_i_2483_, v___x_2498_);
v___x_2500_ = lean_array_uset(v_bs_x27_2490_, v_i_2483_, v___x_2497_);
v_i_2483_ = v___x_2499_;
v_bs_2484_ = v___x_2500_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2502_, lean_object* v_i_2503_, lean_object* v_bs_2504_){
_start:
{
size_t v_sz_boxed_2505_; size_t v_i_boxed_2506_; lean_object* v_res_2507_; 
v_sz_boxed_2505_ = lean_unbox_usize(v_sz_2502_);
lean_dec(v_sz_2502_);
v_i_boxed_2506_ = lean_unbox_usize(v_i_2503_);
lean_dec(v_i_2503_);
v_res_2507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2505_, v_i_boxed_2506_, v_bs_2504_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2511_, lean_object* v_method_2512_, lean_object* v___f_2513_, lean_object* v___f_2514_, lean_object* v___f_2515_, lean_object* v_x_2516_){
_start:
{
lean_object* v___y_2519_; uint8_t v___y_2520_; lean_object* v___y_2521_; lean_object* v_val_2522_; lean_object* v___y_2526_; lean_object* v___y_2527_; uint8_t v___y_2528_; lean_object* v_val_2529_; uint8_t v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v_val_2536_; 
if (lean_obj_tag(v_x_2516_) == 0)
{
lean_object* v___x_2539_; 
lean_dec_ref(v___f_2515_);
lean_dec_ref(v___f_2514_);
lean_dec_ref(v___f_2513_);
lean_dec_ref(v_r_2511_);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v_x_2516_);
return v___x_2539_;
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2633_; 
v_a_2540_ = lean_ctor_get(v_x_2516_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v_x_2516_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2542_ = v_x_2516_;
v_isShared_2543_ = v_isSharedCheck_2633_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v_x_2516_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2633_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___y_2545_; lean_object* v___y_2546_; uint16_t v_status_2560_; lean_object* v_headers_2561_; lean_object* v_body_2562_; lean_object* v_stream_2563_; lean_object* v___x_2564_; lean_object* v___y_2566_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; uint8_t v___x_2629_; 
v_status_2560_ = lean_ctor_get_uint16(v_r_2511_, sizeof(void*)*3);
v_headers_2561_ = lean_ctor_get(v_r_2511_, 0);
lean_inc_ref(v_headers_2561_);
v_body_2562_ = lean_ctor_get(v_r_2511_, 1);
lean_inc_ref(v_body_2562_);
v_stream_2563_ = lean_ctor_get(v_r_2511_, 2);
lean_inc(v_stream_2563_);
lean_dec_ref(v_r_2511_);
v___x_2564_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2625_ = lean_uint16_to_nat(v_status_2560_);
v___x_2626_ = lean_nat_to_int(v___x_2625_);
v___x_2627_ = lean_nat_abs(v___x_2626_);
v___x_2628_ = lean_cstr_to_nat("9007199254740991");
v___x_2629_ = lean_nat_dec_le(v___x_2627_, v___x_2628_);
lean_dec(v___x_2627_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2626_);
v___y_2566_ = v___x_2630_;
goto v___jp_2565_;
}
else
{
double v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = l_Float_ofInt(v___x_2626_);
lean_dec(v___x_2626_);
v___x_2632_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2632_, 0, v___x_2631_);
v___y_2566_ = v___x_2632_;
goto v___jp_2565_;
}
v___jp_2544_:
{
lean_object* v___f_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; lean_object* v___x_2551_; 
v___f_2547_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2547_, 0, v___y_2546_);
lean_closure_set(v___f_2547_, 1, v___y_2545_);
v___x_2548_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2549_ = lean_unsigned_to_nat(0u);
v___x_2550_ = 0;
v___x_2551_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2540_, v___x_2548_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 0, v_a_2552_);
v___x_2554_ = v___x_2542_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2552_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
v___y_2533_ = v___x_2550_;
v___y_2534_ = v___f_2547_;
v___y_2535_ = v___x_2549_;
v_val_2536_ = v___x_2554_;
goto v___jp_2532_;
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; 
v_a_2556_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2551_, 1);
if (v_isShared_2543_ == 0)
{
lean_ctor_set_tag(v___x_2542_, 0);
lean_ctor_set(v___x_2542_, 0, v_a_2556_);
v___x_2558_ = v___x_2542_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2556_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
v___y_2533_ = v___x_2550_;
v___y_2534_ = v___f_2547_;
v___y_2535_ = v___x_2549_;
v_val_2536_ = v___x_2558_;
goto v___jp_2532_;
}
}
}
v___jp_2565_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; size_t v_sz_2569_; size_t v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2564_);
lean_ctor_set(v___x_2567_, 1, v___y_2566_);
v___x_2568_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2569_ = lean_array_size(v_headers_2561_);
v___x_2570_ = ((size_t)0ULL);
v___x_2571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2569_, v___x_2570_, v_headers_2561_);
v___x_2572_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
v___x_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2568_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = lean_box(0);
v___x_2575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2573_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2567_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = l_Lasm_JS_obj(v___x_2576_);
if (lean_obj_tag(v_stream_2563_) == 0)
{
uint8_t v___x_2578_; 
lean_dec_ref(v___f_2515_);
lean_dec_ref(v___f_2514_);
lean_dec_ref(v___f_2513_);
v___x_2578_ = l_Lasm_Fetch_bodyless(v_method_2512_, v_status_2560_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; 
v___x_2579_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2579_, 0, v_body_2562_);
v___y_2545_ = v___x_2577_;
v___y_2546_ = v___x_2579_;
goto v___jp_2544_;
}
else
{
lean_object* v___x_2580_; 
lean_dec_ref(v_body_2562_);
v___x_2580_ = lean_box(1);
v___y_2545_ = v___x_2577_;
v___y_2546_ = v___x_2580_;
goto v___jp_2544_;
}
}
else
{
lean_object* v_val_2581_; uint8_t v___x_2582_; 
lean_dec_ref(v_body_2562_);
lean_del_object(v___x_2542_);
v_val_2581_ = lean_ctor_get(v_stream_2563_, 0);
lean_inc(v_val_2581_);
lean_dec_ref_known(v_stream_2563_, 1);
v___x_2582_ = l_Lasm_Fetch_bodyless(v_method_2512_, v_status_2560_);
if (v___x_2582_ == 0)
{
lean_object* v___x_2583_; lean_object* v___f_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2583_ = lean_box(v___x_2582_);
lean_inc(v_a_2540_);
v___f_2584_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2584_, 0, v___x_2577_);
lean_closure_set(v___f_2584_, 1, v___x_2583_);
lean_closure_set(v___f_2584_, 2, v_a_2540_);
lean_closure_set(v___f_2584_, 3, v___f_2513_);
lean_closure_set(v___f_2584_, 4, v___f_2514_);
lean_closure_set(v___f_2584_, 5, v___f_2515_);
lean_closure_set(v___f_2584_, 6, v_val_2581_);
v___x_2585_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2586_ = lean_unsigned_to_nat(0u);
v___x_2587_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2540_, v___x_2585_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2587_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2587_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
lean_ctor_set_tag(v___x_2590_, 1);
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
v___y_2526_ = v___x_2586_;
v___y_2527_ = v___f_2584_;
v___y_2528_ = v___x_2582_;
v_val_2529_ = v___x_2593_;
goto v___jp_2525_;
}
}
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
v_a_2596_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2587_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2587_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
lean_ctor_set_tag(v___x_2598_, 0);
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
v___y_2526_ = v___x_2586_;
v___y_2527_ = v___f_2584_;
v___y_2528_ = v___x_2582_;
v_val_2529_ = v___x_2601_;
goto v___jp_2525_;
}
}
}
}
else
{
lean_object* v___f_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; lean_object* v___x_2608_; 
lean_dec(v_val_2581_);
lean_dec_ref(v___f_2515_);
lean_dec_ref(v___f_2514_);
lean_dec_ref(v___f_2513_);
v___f_2604_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2604_, 0, v___x_2577_);
v___x_2605_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2606_ = lean_unsigned_to_nat(0u);
v___x_2607_ = 0;
v___x_2608_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2540_, v___x_2605_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
lean_ctor_set_tag(v___x_2611_, 1);
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
v___y_2519_ = v___f_2604_;
v___y_2520_ = v___x_2607_;
v___y_2521_ = v___x_2606_;
v_val_2522_ = v___x_2614_;
goto v___jp_2518_;
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_a_2617_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2608_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2608_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set_tag(v___x_2619_, 0);
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
v___y_2519_ = v___f_2604_;
v___y_2520_ = v___x_2607_;
v___y_2521_ = v___x_2606_;
v_val_2522_ = v___x_2622_;
goto v___jp_2518_;
}
}
}
}
}
}
}
}
v___jp_2518_:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2523_, 0, v_val_2522_);
v___x_2524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2521_, v___y_2520_, v___x_2523_, v___y_2519_);
return v___x_2524_;
}
v___jp_2525_:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_val_2529_);
v___x_2531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2526_, v___y_2528_, v___x_2530_, v___y_2527_);
return v___x_2531_;
}
v___jp_2532_:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2537_, 0, v_val_2536_);
v___x_2538_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2535_, v___y_2533_, v___x_2537_, v___y_2534_);
return v___x_2538_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2634_, lean_object* v_method_2635_, lean_object* v___f_2636_, lean_object* v___f_2637_, lean_object* v___f_2638_, lean_object* v_x_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2634_, v_method_2635_, v___f_2636_, v___f_2637_, v___f_2638_, v_x_2639_);
lean_dec_ref(v_method_2635_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2643_, lean_object* v_r_2644_){
_start:
{
lean_object* v___f_2646_; lean_object* v___f_2647_; lean_object* v___x_2648_; uint8_t v___x_2649_; lean_object* v_val_2651_; lean_object* v___x_2654_; 
v___f_2646_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2647_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2647_, 0, v_r_2644_);
lean_closure_set(v___f_2647_, 1, v_method_2643_);
lean_closure_set(v___f_2647_, 2, v___f_2646_);
lean_closure_set(v___f_2647_, 3, v___f_2646_);
lean_closure_set(v___f_2647_, 4, v___f_2646_);
v___x_2648_ = lean_unsigned_to_nat(0u);
v___x_2649_ = 0;
v___x_2654_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2662_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2657_ = v___x_2654_;
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v___x_2654_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set_tag(v___x_2657_, 1);
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_a_2655_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
v_val_2651_ = v___x_2660_;
goto v___jp_2650_;
}
}
}
else
{
lean_object* v_a_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
v_a_2663_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2665_ = v___x_2654_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_a_2663_);
lean_dec(v___x_2654_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set_tag(v___x_2665_, 0);
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2663_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
v_val_2651_ = v___x_2668_;
goto v___jp_2650_;
}
}
}
v___jp_2650_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v_val_2651_);
v___x_2653_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2648_, v___x_2649_, v___x_2652_, v___f_2647_);
return v___x_2653_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2671_, lean_object* v_r_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2671_, v_r_2672_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2676_ = lean_box(0);
v___x_2677_ = lean_st_mk_ref(v___x_2676_);
v___x_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2681_){
_start:
{
if (lean_obj_tag(v_x_2681_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2691_; 
v_a_2683_ = lean_ctor_get(v_x_2681_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_x_2681_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2685_ = v_x_2681_;
v_isShared_2686_ = v_isSharedCheck_2691_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v_x_2681_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2691_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
lean_object* v___x_2689_; 
v___x_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
return v___x_2689_;
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2702_; 
v_a_2692_ = lean_ctor_get(v_x_2681_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_x_2681_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2694_ = v_x_2681_;
v_isShared_2695_ = v_isSharedCheck_2702_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v_x_2681_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2702_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2696_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2697_, 0, v_a_2692_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
if (v_isShared_2695_ == 0)
{
lean_ctor_set(v___x_2694_, 0, v___x_2697_);
v___x_2699_ = v___x_2694_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
return v___x_2700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2703_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2706_, lean_object* v___x_2707_, lean_object* v___f_2708_, lean_object* v_x_2709_){
_start:
{
if (lean_obj_tag(v_x_2709_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2719_; 
lean_dec_ref(v___f_2708_);
lean_dec(v___x_2707_);
lean_dec_ref(v___y_2706_);
v_a_2711_ = lean_ctor_get(v_x_2709_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_x_2709_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2713_ = v_x_2709_;
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v_x_2709_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
lean_object* v___x_2717_; 
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
return v___x_2717_;
}
}
}
else
{
lean_object* v_a_2720_; uint8_t v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v_a_2720_ = lean_ctor_get(v_x_2709_, 0);
lean_inc(v_a_2720_);
lean_dec_ref_known(v_x_2709_, 1);
v___x_2721_ = 0;
v___x_2722_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2706_, v_a_2720_);
v___x_2723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2707_, v___x_2721_, v___x_2722_, v___f_2708_);
return v___x_2723_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2724_, lean_object* v___x_2725_, lean_object* v___f_2726_, lean_object* v_x_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2724_, v___x_2725_, v___f_2726_, v_x_2727_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2730_, lean_object* v___x_2731_, lean_object* v___f_2732_, lean_object* v_req_2733_){
_start:
{
uint8_t v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2735_ = 0;
v___x_2736_ = l_Lasm_Fetch_respond(v_handler_2730_, v_req_2733_);
v___x_2737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2731_, v___x_2735_, v___x_2736_, v___f_2732_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2738_, lean_object* v___x_2739_, lean_object* v___f_2740_, lean_object* v_req_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2738_, v___x_2739_, v___f_2740_, v_req_2741_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2744_, lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2755_; 
lean_dec_ref(v___f_2744_);
v_a_2747_ = lean_ctor_get(v_x_2745_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_x_2745_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2749_ = v_x_2745_;
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v_x_2745_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
return v___x_2753_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2757_; 
v_a_2756_ = lean_ctor_get(v_x_2745_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v_x_2745_, 1);
v___x_2757_ = lean_apply_2(v___f_2744_, v_a_2756_, lean_box(0));
return v___x_2757_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2758_, lean_object* v_x_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2758_, v_x_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v_headers_2764_, lean_object* v___f_2765_, lean_object* v___x_2766_, uint8_t v___x_2767_, lean_object* v___f_2768_, lean_object* v_x_2769_){
_start:
{
if (lean_obj_tag(v_x_2769_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2779_; 
lean_dec_ref(v___f_2768_);
lean_dec(v___x_2766_);
lean_dec_ref(v___f_2765_);
lean_dec_ref(v_headers_2764_);
lean_dec_ref(v___y_2763_);
lean_dec_ref(v___y_2762_);
v_a_2771_ = lean_ctor_get(v_x_2769_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v_x_2769_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2773_ = v_x_2769_;
v_isShared_2774_ = v_isSharedCheck_2779_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v_x_2769_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2779_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
return v___x_2777_;
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2790_; 
v_a_2780_ = lean_ctor_get(v_x_2769_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_x_2769_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2782_ = v_x_2769_;
v_isShared_2783_ = v_isSharedCheck_2790_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v_x_2769_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2790_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2784_, 0, v___y_2762_);
lean_ctor_set(v___x_2784_, 1, v___y_2763_);
lean_ctor_set(v___x_2784_, 2, v_headers_2764_);
lean_ctor_set(v___x_2784_, 3, v_a_2780_);
lean_ctor_set(v___x_2784_, 4, v___f_2765_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2784_);
v___x_2786_ = v___x_2782_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2784_);
v___x_2786_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
v___x_2788_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2767_, v___x_2787_, v___f_2768_);
return v___x_2788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v_headers_2793_, lean_object* v___f_2794_, lean_object* v___x_2795_, lean_object* v___x_2796_, lean_object* v___f_2797_, lean_object* v_x_2798_, lean_object* v___y_2799_){
_start:
{
uint8_t v___x_7603__boxed_2800_; lean_object* v_res_2801_; 
v___x_7603__boxed_2800_ = lean_unbox(v___x_2796_);
v_res_2801_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2791_, v___y_2792_, v_headers_2793_, v___f_2794_, v___x_2795_, v___x_7603__boxed_2800_, v___f_2797_, v_x_2798_);
return v_res_2801_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2807_ = lean_string_utf8_byte_size(v___x_2806_);
return v___x_2807_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2808_ = lean_unsigned_to_nat(0u);
v___x_2809_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2810_ = lean_nat_dec_eq(v___x_2809_, v___x_2808_);
return v___x_2810_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2816_ = lean_unsigned_to_nat(46u);
v___x_2817_ = lean_unsigned_to_nat(193u);
v___x_2818_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2820_ = l_mkPanicMessageWithDecl(v___x_2819_, v___x_2818_, v___x_2817_, v___x_2816_, v___x_2815_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2822_, lean_object* v_d_2823_){
_start:
{
lean_object* v___y_2826_; lean_object* v___y_2827_; 
if (lean_obj_tag(v_d_2823_) == 6)
{
lean_object* v_b_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
v_b_2831_ = lean_ctor_get(v_d_2823_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v_d_2823_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v_d_2823_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_b_2831_);
lean_dec(v_d_2823_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 0);
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_b_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
else
{
lean_object* v___x_2839_; lean_object* v_received_2841_; 
v___x_2839_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2823_) == 9)
{
lean_object* v_value_2855_; lean_object* v_description_2856_; uint8_t v___x_2857_; 
v_value_2855_ = lean_ctor_get(v_d_2823_, 0);
v_description_2856_ = lean_ctor_get(v_d_2823_, 1);
v___x_2857_ = lean_string_dec_eq(v_description_2856_, v___x_2839_);
if (v___x_2857_ == 0)
{
goto v___jp_2853_;
}
else
{
uint32_t v___x_2858_; uint64_t v___x_2859_; lean_object* v___x_2860_; uint32_t v___x_2861_; lean_object* v___x_2862_; 
lean_inc_n(v_value_2855_, 2);
lean_dec_ref_known(v_d_2823_, 2);
v___x_2858_ = 206;
v___x_2859_ = 0ULL;
v___x_2860_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2860_, 0, v_value_2855_);
lean_ctor_set(v___x_2860_, 1, v___x_2839_);
v___x_2861_ = lasm_js_value_handle(v_value_2855_);
lean_dec(v_value_2855_);
v___x_2862_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2858_, v___x_2859_, v___x_2860_, v___x_2861_);
lean_dec_ref_known(v___x_2860_, 2);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; uint8_t v___x_2864_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_a_2863_);
lean_dec_ref_known(v___x_2862_, 1);
v___x_2864_ = lean_string_validate_utf8(v_a_2863_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec(v_a_2863_);
v___x_2865_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2866_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2865_);
v_received_2841_ = v___x_2866_;
goto v___jp_2840_;
}
else
{
lean_object* v___x_2867_; 
v___x_2867_ = lean_string_from_utf8_unchecked(v_a_2863_);
v_received_2841_ = v___x_2867_;
goto v___jp_2840_;
}
}
else
{
lean_object* v___x_2868_; 
lean_dec_ref_known(v___x_2862_, 1);
v___x_2868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2841_ = v___x_2868_;
goto v___jp_2840_;
}
}
}
else
{
goto v___jp_2853_;
}
v___jp_2840_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; uint8_t v___x_2851_; 
v___x_2842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2843_ = lean_string_append(v___x_2842_, v_context_2822_);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2845_ = lean_string_append(v___x_2843_, v___x_2844_);
v___x_2846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2847_ = lean_string_append(v___x_2845_, v___x_2846_);
v___x_2848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2849_ = lean_string_append(v___x_2847_, v___x_2848_);
v___x_2850_ = lean_string_append(v___x_2849_, v_received_2841_);
lean_dec_ref(v_received_2841_);
v___x_2851_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2851_ == 0)
{
lean_object* v___x_2852_; 
v___x_2852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2826_ = v___x_2850_;
v___y_2827_ = v___x_2852_;
goto v___jp_2825_;
}
else
{
v___y_2826_ = v___x_2850_;
v___y_2827_ = v___x_2839_;
goto v___jp_2825_;
}
}
v___jp_2853_:
{
lean_object* v___x_2854_; 
v___x_2854_ = l_Lasm_JS_Data_describe(v_d_2823_);
v_received_2841_ = v___x_2854_;
goto v___jp_2840_;
}
}
v___jp_2825_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2828_ = lean_string_append(v___y_2826_, v___y_2827_);
v___x_2829_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
v___x_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2829_);
return v___x_2830_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2869_, lean_object* v_d_2870_, lean_object* v_a_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2869_, v_d_2870_);
lean_dec_ref(v_context_2869_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2873_, lean_object* v_bytes_2874_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lasm_JS_Wire_decode(v_bytes_2874_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2873_, v_a_2877_);
return v___x_2878_;
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
v_a_2879_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2876_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2876_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2887_, lean_object* v_bytes_2888_, lean_object* v_a_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2887_, v_bytes_2888_);
lean_dec_ref(v_bytes_2888_);
lean_dec_ref(v_context_2887_);
return v_res_2890_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2891_, uint64_t v_extra_2892_){
_start:
{
uint64_t v___x_2893_; uint64_t v___y_2895_; 
v___x_2893_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2891_ == 0)
{
uint64_t v___x_2898_; 
v___x_2898_ = 0ULL;
v___y_2895_ = v___x_2898_;
goto v___jp_2894_;
}
else
{
uint64_t v___x_2899_; 
v___x_2899_ = 2ULL;
v___y_2895_ = v___x_2899_;
goto v___jp_2894_;
}
v___jp_2894_:
{
uint64_t v___x_2896_; uint64_t v___x_2897_; 
v___x_2896_ = lean_uint64_lor(v___x_2893_, v___y_2895_);
v___x_2897_ = lean_uint64_lor(v___x_2896_, v_extra_2892_);
return v___x_2897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2900_, lean_object* v_extra_2901_){
_start:
{
uint8_t v_await_boxed_2902_; uint64_t v_extra_boxed_2903_; uint64_t v_res_2904_; lean_object* v_r_2905_; 
v_await_boxed_2902_ = lean_unbox(v_await_2900_);
v_extra_boxed_2903_ = lean_unbox_uint64(v_extra_2901_);
lean_dec_ref(v_extra_2901_);
v_res_2904_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2902_, v_extra_boxed_2903_);
v_r_2905_ = lean_box_uint64(v_res_2904_);
return v_r_2905_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2906_; uint8_t v___x_2907_; uint64_t v___x_2908_; 
v___x_2906_ = 4ULL;
v___x_2907_ = 0;
v___x_2908_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2907_, v___x_2906_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2909_, lean_object* v_args_2910_){
_start:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint64_t v___x_2915_; lean_object* v___x_2916_; 
v___x_2912_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2913_, 0, v_c_2909_);
lean_ctor_set(v___x_2913_, 1, v___x_2912_);
v___x_2914_ = lean_box(0);
v___x_2915_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2916_ = l_Lasm_JS_Value_invokeRaw(v___x_2913_, v___x_2914_, v_args_2910_, v___x_2915_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v_a_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
lean_inc(v_a_2917_);
lean_dec_ref_known(v___x_2916_, 1);
v___x_2918_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2919_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2918_, v_a_2917_);
lean_dec(v_a_2917_);
return v___x_2919_;
}
else
{
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2920_, lean_object* v_args_2921_, lean_object* v_a_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2920_, v_args_2921_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2924_, uint8_t v___x_2925_, lean_object* v___f_2926_, lean_object* v_a_2927_, lean_object* v_x_2928_){
_start:
{
lean_object* v_val_2931_; 
if (lean_obj_tag(v_x_2928_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2942_; 
lean_dec(v_a_2927_);
lean_dec_ref(v___f_2926_);
lean_dec(v___x_2924_);
v_a_2934_ = lean_ctor_get(v_x_2928_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_x_2928_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2936_ = v_x_2928_;
v_isShared_2937_ = v_isSharedCheck_2942_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v_x_2928_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2942_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
lean_object* v___x_2940_; 
v___x_2940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
return v___x_2940_;
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2961_; 
v_a_2943_ = lean_ctor_get(v_x_2928_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_x_2928_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2945_ = v_x_2928_;
v_isShared_2946_ = v_isSharedCheck_2961_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v_x_2928_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2961_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2947_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2948_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2948_, 0, v_a_2943_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
v___x_2949_ = lean_unsigned_to_nat(1u);
v___x_2950_ = lean_mk_empty_array_with_capacity(v___x_2949_);
v___x_2951_ = lean_array_push(v___x_2950_, v___x_2948_);
v___x_2952_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2927_, v___x_2951_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2952_, 1);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v_a_2953_);
v___x_2955_ = v___x_2945_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2953_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
v_val_2931_ = v___x_2955_;
goto v___jp_2930_;
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; 
v_a_2957_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2957_);
lean_dec_ref_known(v___x_2952_, 1);
if (v_isShared_2946_ == 0)
{
lean_ctor_set_tag(v___x_2945_, 0);
lean_ctor_set(v___x_2945_, 0, v_a_2957_);
v___x_2959_ = v___x_2945_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2957_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
v_val_2931_ = v___x_2959_;
goto v___jp_2930_;
}
}
}
}
v___jp_2930_:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v_val_2931_);
v___x_2933_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2924_, v___x_2925_, v___x_2932_, v___f_2926_);
return v___x_2933_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2962_, lean_object* v___x_2963_, lean_object* v___f_2964_, lean_object* v_a_2965_, lean_object* v_x_2966_, lean_object* v___y_2967_){
_start:
{
uint8_t v___x_7889__boxed_2968_; lean_object* v_res_2969_; 
v___x_7889__boxed_2968_ = lean_unbox(v___x_2963_);
v_res_2969_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2962_, v___x_7889__boxed_2968_, v___f_2964_, v_a_2965_, v_x_2966_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v_headers_2972_, lean_object* v___x_2973_, lean_object* v___x_2974_, lean_object* v___f_2975_, lean_object* v_x_2976_){
_start:
{
if (lean_obj_tag(v_x_2976_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2986_; 
lean_dec_ref(v___f_2975_);
lean_dec(v___x_2974_);
lean_dec_ref(v___x_2973_);
lean_dec_ref(v_headers_2972_);
lean_dec_ref(v___y_2971_);
lean_dec_ref(v___y_2970_);
v_a_2978_ = lean_ctor_get(v_x_2976_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_x_2976_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2980_ = v_x_2976_;
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v_x_2976_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2984_; 
v___x_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
return v___x_2984_;
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2998_; 
v_a_2987_ = lean_ctor_get(v_x_2976_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v_x_2976_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2989_ = v_x_2976_;
v_isShared_2990_ = v_isSharedCheck_2998_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v_x_2976_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2998_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2991_; uint8_t v___x_2992_; lean_object* v___x_2994_; 
v___x_2991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2991_, 0, v___y_2970_);
lean_ctor_set(v___x_2991_, 1, v___y_2971_);
lean_ctor_set(v___x_2991_, 2, v_headers_2972_);
lean_ctor_set(v___x_2991_, 3, v___x_2973_);
lean_ctor_set(v___x_2991_, 4, v_a_2987_);
v___x_2992_ = 0;
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v___x_2991_);
v___x_2994_ = v___x_2989_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2991_);
v___x_2994_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2994_);
v___x_2996_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2974_, v___x_2992_, v___x_2995_, v___f_2975_);
return v___x_2996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v_headers_3001_, lean_object* v___x_3002_, lean_object* v___x_3003_, lean_object* v___f_3004_, lean_object* v_x_3005_, lean_object* v___y_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_2999_, v___y_3000_, v_headers_3001_, v___x_3002_, v___x_3003_, v___f_3004_, v_x_3005_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_3008_, lean_object* v_x_3009_){
_start:
{
if (lean_obj_tag(v_x_3009_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3019_; 
lean_dec_ref(v___f_3008_);
v_a_3011_ = lean_ctor_get(v_x_3009_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v_x_3009_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3013_ = v_x_3009_;
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v_x_3009_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
return v___x_3017_;
}
}
}
else
{
lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3031_; 
v_isSharedCheck_3031_ = !lean_is_exclusive(v_x_3009_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; 
v_unused_3032_ = lean_ctor_get(v_x_3009_, 0);
lean_dec(v_unused_3032_);
v___x_3021_ = v_x_3009_;
v_isShared_3022_ = v_isSharedCheck_3031_;
goto v_resetjp_3020_;
}
else
{
lean_dec(v_x_3009_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3031_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; uint8_t v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3027_; 
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = 0;
v___x_3025_ = lean_io_promise_new();
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v___x_3025_);
v___x_3027_ = v___x_3021_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3028_; lean_object* v___x_3029_; 
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
v___x_3029_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3023_, v___x_3024_, v___x_3028_, v___f_3008_);
return v___x_3029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_3033_, lean_object* v_x_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_3033_, v_x_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_3037_, lean_object* v_x_3038_){
_start:
{
if (lean_obj_tag(v_x_3038_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3048_; 
lean_dec_ref(v___f_3037_);
v_a_3040_ = lean_ctor_get(v_x_3038_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_x_3038_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3042_ = v_x_3038_;
v_isShared_3043_ = v_isSharedCheck_3048_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v_x_3038_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3048_;
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
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; 
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
return v___x_3046_;
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3050_; 
v_a_3049_ = lean_ctor_get(v_x_3038_, 0);
lean_inc(v_a_3049_);
lean_dec_ref_known(v_x_3038_, 1);
v___x_3050_ = lean_apply_2(v___f_3037_, v_a_3049_, lean_box(0));
return v___x_3050_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3051_, lean_object* v_x_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_3051_, v_x_3052_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_3055_, lean_object* v_bytes_3056_){
_start:
{
lean_object* v___x_3058_; uint8_t v___x_3059_; lean_object* v_val_3061_; lean_object* v___x_3064_; 
v___x_3058_ = lean_unsigned_to_nat(0u);
v___x_3059_ = 0;
v___x_3064_ = l_Lasm_JS_Wire_decode(v_bytes_3056_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3064_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3064_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
lean_ctor_set_tag(v___x_3067_, 1);
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
v_val_3061_ = v___x_3070_;
goto v___jp_3060_;
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
v_a_3073_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3064_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3064_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
lean_ctor_set_tag(v___x_3075_, 0);
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
v_val_3061_ = v___x_3078_;
goto v___jp_3060_;
}
}
}
v___jp_3060_:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3062_, 0, v_val_3061_);
v___x_3063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3058_, v___x_3059_, v___x_3062_, v___f_3055_);
return v___x_3063_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_3081_, lean_object* v_bytes_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_3081_, v_bytes_3082_);
lean_dec_ref(v_bytes_3082_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_3085_, lean_object* v_failurePrefix_3086_, lean_object* v___f_3087_, lean_object* v___f_3088_, uint32_t v_op_3089_, uint64_t v_flags_3090_, lean_object* v___f_3091_, lean_object* v_x_3092_){
_start:
{
if (lean_obj_tag(v_x_3092_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3102_; 
lean_dec_ref(v___f_3091_);
lean_dec_ref(v___f_3088_);
lean_dec_ref(v___f_3087_);
v_a_3094_ = lean_ctor_get(v_x_3092_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_x_3092_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3096_ = v_x_3092_;
v_isShared_3097_ = v_isSharedCheck_3102_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v_x_3092_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3102_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
lean_object* v___x_3100_; 
v___x_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
return v___x_3100_;
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3144_; 
v_a_3103_ = lean_ctor_get(v_x_3092_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v_x_3092_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3105_ = v_x_3092_;
v_isShared_3106_ = v_isSharedCheck_3144_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v_x_3092_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3144_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
uint32_t v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; 
v___x_3107_ = 0;
v___x_3108_ = l_Lasm_JS_Wire_encode(v_payload_3085_);
v___x_3109_ = lean_string_utf8_byte_size(v_failurePrefix_3086_);
v___x_3110_ = lean_unsigned_to_nat(0u);
v___x_3111_ = lean_nat_dec_eq(v___x_3109_, v___x_3110_);
if (v___x_3111_ == 0)
{
lean_object* v___f_3112_; lean_object* v_val_3114_; lean_object* v___x_3119_; 
lean_dec_ref(v___f_3091_);
lean_inc(v_a_3103_);
v___f_3112_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3112_, 0, v_a_3103_);
v___x_3119_ = lasm_js_call_into(v_a_3103_, v_op_3089_, v___x_3107_, v_flags_3090_, v___x_3108_, v_payload_3085_);
lean_dec_ref(v___x_3108_);
lean_dec(v_a_3103_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3122_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v_a_3120_);
v___x_3122_ = v___x_3105_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
v_val_3114_ = v___x_3122_;
goto v___jp_3113_;
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; 
v_a_3124_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3119_, 1);
if (v_isShared_3106_ == 0)
{
lean_ctor_set_tag(v___x_3105_, 0);
lean_ctor_set(v___x_3105_, 0, v_a_3124_);
v___x_3126_ = v___x_3105_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3124_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
v_val_3114_ = v___x_3126_;
goto v___jp_3113_;
}
}
v___jp_3113_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3115_, 0, v_val_3114_);
v___x_3116_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3110_, v___x_3111_, v___x_3115_, v___f_3112_);
v___x_3117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3110_, v___x_3111_, v___x_3116_, v___f_3087_);
v___x_3118_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3110_, v___x_3111_, v___x_3117_, v___f_3088_);
return v___x_3118_;
}
}
else
{
lean_object* v___f_3128_; uint8_t v___x_3129_; lean_object* v_val_3131_; lean_object* v___x_3135_; 
lean_dec_ref(v___f_3088_);
lean_dec_ref(v___f_3087_);
lean_inc(v_a_3103_);
v___f_3128_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3128_, 0, v_a_3103_);
v___x_3129_ = 0;
v___x_3135_ = lasm_js_call_into(v_a_3103_, v_op_3089_, v___x_3107_, v_flags_3090_, v___x_3108_, v_payload_3085_);
lean_dec_ref(v___x_3108_);
lean_dec(v_a_3103_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3138_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v_a_3136_);
v___x_3138_ = v___x_3105_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3136_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
v_val_3131_ = v___x_3138_;
goto v___jp_3130_;
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; 
v_a_3140_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3135_, 1);
if (v_isShared_3106_ == 0)
{
lean_ctor_set_tag(v___x_3105_, 0);
lean_ctor_set(v___x_3105_, 0, v_a_3140_);
v___x_3142_ = v___x_3105_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
v_val_3131_ = v___x_3142_;
goto v___jp_3130_;
}
}
v___jp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v_val_3131_);
v___x_3133_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3110_, v___x_3129_, v___x_3132_, v___f_3128_);
v___x_3134_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3110_, v___x_3129_, v___x_3133_, v___f_3091_);
return v___x_3134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_3145_, lean_object* v_failurePrefix_3146_, lean_object* v___f_3147_, lean_object* v___f_3148_, lean_object* v_op_3149_, lean_object* v_flags_3150_, lean_object* v___f_3151_, lean_object* v_x_3152_, lean_object* v___y_3153_){
_start:
{
uint32_t v_op_boxed_3154_; uint64_t v_flags_boxed_3155_; lean_object* v_res_3156_; 
v_op_boxed_3154_ = lean_unbox_uint32(v_op_3149_);
lean_dec(v_op_3149_);
v_flags_boxed_3155_ = lean_unbox_uint64(v_flags_3150_);
lean_dec_ref(v_flags_3150_);
v_res_3156_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_3145_, v_failurePrefix_3146_, v___f_3147_, v___f_3148_, v_op_boxed_3154_, v_flags_boxed_3155_, v___f_3151_, v_x_3152_);
lean_dec_ref(v_failurePrefix_3146_);
lean_dec(v_payload_3145_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_3157_, lean_object* v_x_3158_){
_start:
{
lean_object* v_val_3161_; 
if (lean_obj_tag(v_x_3158_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3171_; 
v_a_3163_ = lean_ctor_get(v_x_3158_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_x_3158_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3165_ = v_x_3158_;
v_isShared_3166_ = v_isSharedCheck_3171_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v_x_3158_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3171_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
lean_object* v___x_3169_; 
v___x_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
return v___x_3169_;
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3185_; 
v_a_3172_ = lean_ctor_get(v_x_3158_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_x_3158_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3174_ = v_x_3158_;
v_isShared_3175_ = v_isSharedCheck_3185_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v_x_3158_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3185_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3176_; 
v___x_3176_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3157_, v_a_3172_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3179_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3176_, 1);
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 0, v_a_3177_);
v___x_3179_ = v___x_3174_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_a_3177_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
v_val_3161_ = v___x_3179_;
goto v___jp_3160_;
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; 
v_a_3181_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3181_);
lean_dec_ref_known(v___x_3176_, 1);
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 0);
lean_ctor_set(v___x_3174_, 0, v_a_3181_);
v___x_3183_ = v___x_3174_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3181_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
v_val_3161_ = v___x_3183_;
goto v___jp_3160_;
}
}
}
}
v___jp_3160_:
{
lean_object* v___x_3162_; 
v___x_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3162_, 0, v_val_3161_);
return v___x_3162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_3186_, lean_object* v_x_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_3186_, v_x_3187_);
lean_dec_ref(v_context_3186_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_3190_, uint32_t v_op_3191_, uint64_t v_flags_3192_, lean_object* v_payload_3193_, lean_object* v_failurePrefix_3194_){
_start:
{
lean_object* v___f_3196_; lean_object* v___f_3197_; lean_object* v___f_3198_; lean_object* v___f_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___f_3202_; lean_object* v___f_3203_; lean_object* v___x_3204_; uint8_t v___x_3205_; lean_object* v_val_3207_; lean_object* v___x_3210_; 
lean_inc_ref(v_failurePrefix_3194_);
v___f_3196_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3196_, 0, v_failurePrefix_3194_);
v___f_3197_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3197_, 0, v_context_3190_);
v___f_3198_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3198_, 0, v___f_3197_);
v___f_3199_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3199_, 0, v___f_3198_);
v___x_3200_ = lean_box_uint32(v_op_3191_);
v___x_3201_ = lean_box_uint64(v_flags_3192_);
lean_inc_ref(v___f_3199_);
v___f_3202_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3202_, 0, v_payload_3193_);
lean_closure_set(v___f_3202_, 1, v_failurePrefix_3194_);
lean_closure_set(v___f_3202_, 2, v___f_3196_);
lean_closure_set(v___f_3202_, 3, v___f_3199_);
lean_closure_set(v___f_3202_, 4, v___x_3200_);
lean_closure_set(v___f_3202_, 5, v___x_3201_);
lean_closure_set(v___f_3202_, 6, v___f_3199_);
v___f_3203_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3203_, 0, v___f_3202_);
v___x_3204_ = lean_unsigned_to_nat(0u);
v___x_3205_ = 0;
v___x_3210_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3210_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 1);
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
v_val_3207_ = v___x_3216_;
goto v___jp_3206_;
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
v_a_3219_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3210_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3210_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
lean_ctor_set_tag(v___x_3221_, 0);
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
v_val_3207_ = v___x_3224_;
goto v___jp_3206_;
}
}
}
v___jp_3206_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3208_, 0, v_val_3207_);
v___x_3209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3204_, v___x_3205_, v___x_3208_, v___f_3203_);
return v___x_3209_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_3227_, lean_object* v_op_3228_, lean_object* v_flags_3229_, lean_object* v_payload_3230_, lean_object* v_failurePrefix_3231_, lean_object* v_a_3232_){
_start:
{
uint32_t v_op_boxed_3233_; uint64_t v_flags_boxed_3234_; lean_object* v_res_3235_; 
v_op_boxed_3233_ = lean_unbox_uint32(v_op_3228_);
lean_dec(v_op_3228_);
v_flags_boxed_3234_ = lean_unbox_uint64(v_flags_3229_);
lean_dec_ref(v_flags_3229_);
v_res_3235_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_3227_, v_op_boxed_3233_, v_flags_boxed_3234_, v_payload_3230_, v_failurePrefix_3231_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_3236_, lean_object* v_name_3237_, lean_object* v_args_3238_){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; uint32_t v___x_3245_; uint64_t v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3240_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3241_, 0, v_o_3236_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
lean_inc_ref(v_name_3237_);
v___x_3242_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3242_, 0, v_name_3237_);
v___x_3243_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3244_ = lean_string_append(v___x_3243_, v_name_3237_);
lean_dec_ref(v_name_3237_);
v___x_3245_ = 205;
v___x_3246_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_3247_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3247_, 0, v_args_3238_);
v___x_3248_ = lean_unsigned_to_nat(3u);
v___x_3249_ = lean_mk_empty_array_with_capacity(v___x_3248_);
v___x_3250_ = lean_array_push(v___x_3249_, v___x_3241_);
v___x_3251_ = lean_array_push(v___x_3250_, v___x_3242_);
v___x_3252_ = lean_array_push(v___x_3251_, v___x_3247_);
v___x_3253_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
v___x_3254_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_3244_, v___x_3245_, v___x_3246_, v___x_3253_, v___x_3240_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_3255_, lean_object* v_name_3256_, lean_object* v_args_3257_, lean_object* v___y_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_3255_, v_name_3256_, v_args_3257_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v_options_3264_, lean_object* v___f_3265_, lean_object* v___f_3266_, lean_object* v_a_3267_, lean_object* v_value_3268_, lean_object* v_a_3269_, lean_object* v___x_3270_, lean_object* v___f_3271_, lean_object* v___f_3272_, lean_object* v_headers_3273_){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___f_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; uint8_t v___x_3287_; 
v___x_3275_ = lean_mk_empty_array_with_capacity(v___x_3261_);
v___x_3276_ = l_ByteArray_empty;
v___f_3277_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_3275_);
lean_inc_ref(v___y_3263_);
lean_inc_ref(v___y_3262_);
v___x_3278_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3278_, 0, v___y_3262_);
lean_ctor_set(v___x_3278_, 1, v___y_3263_);
lean_ctor_set(v___x_3278_, 2, v___x_3275_);
lean_ctor_set(v___x_3278_, 3, v___x_3276_);
lean_ctor_set(v___x_3278_, 4, v___f_3277_);
v___x_3279_ = l_Lasm_Fetch_Request_path(v___x_3278_);
v___x_3280_ = lean_apply_1(v_options_3264_, v___x_3279_);
v___x_3287_ = lean_unbox(v___x_3280_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; uint8_t v___x_3289_; 
lean_dec_ref(v___f_3272_);
lean_dec_ref(v___f_3271_);
v___x_3288_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_3289_ = lean_string_dec_eq(v___y_3262_, v___x_3288_);
if (v___x_3289_ == 0)
{
lean_object* v___x_3290_; uint8_t v___x_3291_; 
v___x_3290_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_3291_ = lean_string_dec_eq(v___y_3262_, v___x_3290_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; lean_object* v___f_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
lean_dec_ref(v___f_3265_);
v___x_3292_ = lean_box(v___x_3291_);
lean_inc_n(v___x_3261_, 2);
v___f_3293_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_3293_, 0, v___y_3262_);
lean_closure_set(v___f_3293_, 1, v___y_3263_);
lean_closure_set(v___f_3293_, 2, v_headers_3273_);
lean_closure_set(v___f_3293_, 3, v___f_3277_);
lean_closure_set(v___f_3293_, 4, v___x_3261_);
lean_closure_set(v___f_3293_, 5, v___x_3292_);
lean_closure_set(v___f_3293_, 6, v___f_3266_);
v___x_3294_ = lean_box(v___x_3291_);
v___f_3295_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3295_, 0, v___x_3261_);
lean_closure_set(v___f_3295_, 1, v___x_3294_);
lean_closure_set(v___f_3295_, 2, v___f_3293_);
lean_closure_set(v___f_3295_, 3, v_a_3267_);
v___x_3296_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_3297_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_3268_, v___x_3296_, v___x_3275_);
v___x_3298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3261_, v___x_3291_, v___x_3297_, v___f_3295_);
return v___x_3298_;
}
else
{
lean_dec_ref(v___x_3275_);
lean_dec(v_value_3268_);
lean_dec(v_a_3267_);
lean_dec_ref(v___f_3266_);
goto v___jp_3281_;
}
}
else
{
lean_dec_ref(v___x_3275_);
lean_dec(v_value_3268_);
lean_dec(v_a_3267_);
lean_dec_ref(v___f_3266_);
goto v___jp_3281_;
}
}
else
{
lean_object* v___x_3299_; 
lean_dec_ref(v___x_3275_);
lean_dec(v_value_3268_);
lean_dec(v_a_3267_);
lean_dec_ref(v___f_3266_);
lean_dec_ref(v___f_3265_);
v___x_3299_ = l_Lasm_JS_Data_field(v_a_3269_, v___x_3270_);
if (lean_obj_tag(v___x_3299_) == 9)
{
lean_object* v_value_3300_; lean_object* v___f_3301_; uint8_t v___x_3302_; lean_object* v_val_3304_; lean_object* v___x_3307_; 
lean_dec_ref(v___f_3272_);
v_value_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_value_3300_);
lean_dec_ref_known(v___x_3299_, 2);
lean_inc(v___x_3261_);
v___f_3301_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_3301_, 0, v___y_3262_);
lean_closure_set(v___f_3301_, 1, v___y_3263_);
lean_closure_set(v___f_3301_, 2, v_headers_3273_);
lean_closure_set(v___f_3301_, 3, v___x_3276_);
lean_closure_set(v___f_3301_, 4, v___x_3261_);
lean_closure_set(v___f_3301_, 5, v___f_3271_);
v___x_3302_ = 0;
v___x_3307_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_3300_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3310_ = v___x_3307_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3307_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
lean_ctor_set_tag(v___x_3310_, 1);
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3308_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
v_val_3304_ = v___x_3313_;
goto v___jp_3303_;
}
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
v_a_3316_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3307_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3307_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 0);
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
v_val_3304_ = v___x_3321_;
goto v___jp_3303_;
}
}
}
v___jp_3303_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3305_, 0, v_val_3304_);
v___x_3306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3261_, v___x_3302_, v___x_3305_, v___f_3301_);
return v___x_3306_;
}
}
else
{
lean_object* v___x_3324_; uint8_t v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
lean_dec(v___x_3299_);
lean_dec_ref(v___f_3271_);
v___x_3324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3324_, 0, v___y_3262_);
lean_ctor_set(v___x_3324_, 1, v___y_3263_);
lean_ctor_set(v___x_3324_, 2, v_headers_3273_);
lean_ctor_set(v___x_3324_, 3, v___x_3276_);
lean_ctor_set(v___x_3324_, 4, v___f_3277_);
v___x_3325_ = 0;
v___x_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3324_);
v___x_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
v___x_3328_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3261_, v___x_3325_, v___x_3327_, v___f_3272_);
return v___x_3328_;
}
}
v___jp_3281_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; uint8_t v___x_3285_; lean_object* v___x_3286_; 
v___x_3282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3282_, 0, v___y_3262_);
lean_ctor_set(v___x_3282_, 1, v___y_3263_);
lean_ctor_set(v___x_3282_, 2, v_headers_3273_);
lean_ctor_set(v___x_3282_, 3, v___x_3276_);
lean_ctor_set(v___x_3282_, 4, v___f_3277_);
v___x_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
v___x_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3283_);
v___x_3285_ = lean_unbox(v___x_3280_);
v___x_3286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3261_, v___x_3285_, v___x_3284_, v___f_3265_);
return v___x_3286_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v_options_3332_, lean_object* v___f_3333_, lean_object* v___f_3334_, lean_object* v_a_3335_, lean_object* v_value_3336_, lean_object* v_a_3337_, lean_object* v___x_3338_, lean_object* v___f_3339_, lean_object* v___f_3340_, lean_object* v_headers_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_3329_, v___y_3330_, v___y_3331_, v_options_3332_, v___f_3333_, v___f_3334_, v_a_3335_, v_value_3336_, v_a_3337_, v___x_3338_, v___f_3339_, v___f_3340_, v_headers_3341_);
lean_dec_ref(v___x_3338_);
lean_dec(v_a_3337_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3344_, lean_object* v_x_3345_){
_start:
{
if (lean_obj_tag(v_x_3345_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3355_; 
lean_dec_ref(v___f_3344_);
v_a_3347_ = lean_ctor_get(v_x_3345_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v_x_3345_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3349_ = v_x_3345_;
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v_x_3345_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; 
v___x_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
return v___x_3353_;
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3357_; 
v_a_3356_ = lean_ctor_get(v_x_3345_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v_x_3345_, 1);
v___x_3357_ = lean_apply_2(v___f_3344_, v_a_3356_, lean_box(0));
return v___x_3357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3358_, lean_object* v_x_3359_, lean_object* v___y_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3358_, v_x_3359_);
return v_res_3361_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3362_, uint64_t v_extra_3363_){
_start:
{
uint64_t v___x_3364_; uint64_t v___y_3366_; 
v___x_3364_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3362_ == 0)
{
uint64_t v___x_3369_; 
v___x_3369_ = 0ULL;
v___y_3366_ = v___x_3369_;
goto v___jp_3365_;
}
else
{
uint64_t v___x_3370_; 
v___x_3370_ = 2ULL;
v___y_3366_ = v___x_3370_;
goto v___jp_3365_;
}
v___jp_3365_:
{
uint64_t v___x_3367_; uint64_t v___x_3368_; 
v___x_3367_ = lean_uint64_lor(v___x_3364_, v___y_3366_);
v___x_3368_ = lean_uint64_lor(v___x_3367_, v_extra_3363_);
return v___x_3368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3371_, lean_object* v_extra_3372_){
_start:
{
uint8_t v_await_boxed_3373_; uint64_t v_extra_boxed_3374_; uint64_t v_res_3375_; lean_object* v_r_3376_; 
v_await_boxed_3373_ = lean_unbox(v_await_3371_);
v_extra_boxed_3374_ = lean_unbox_uint64(v_extra_3372_);
lean_dec_ref(v_extra_3372_);
v_res_3375_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3373_, v_extra_boxed_3374_);
v_r_3376_ = lean_box_uint64(v_res_3375_);
return v_r_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3382_, size_t v_i_3383_, lean_object* v_bs_3384_){
_start:
{
uint8_t v___x_3387_; 
v___x_3387_ = lean_usize_dec_lt(v_i_3383_, v_sz_3382_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_bs_3384_);
return v___x_3388_;
}
else
{
lean_object* v_v_3389_; 
v_v_3389_ = lean_array_uget_borrowed(v_bs_3384_, v_i_3383_);
if (lean_obj_tag(v_v_3389_) == 7)
{
lean_object* v_items_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; uint8_t v___x_3393_; 
v_items_3390_ = lean_ctor_get(v_v_3389_, 0);
v___x_3391_ = lean_array_get_size(v_items_3390_);
v___x_3392_ = lean_unsigned_to_nat(2u);
v___x_3393_ = lean_nat_dec_eq(v___x_3391_, v___x_3392_);
if (v___x_3393_ == 0)
{
lean_dec_ref(v_bs_3384_);
goto v___jp_3385_;
}
else
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = lean_array_fget_borrowed(v_items_3390_, v___x_3394_);
if (lean_obj_tag(v___x_3395_) == 4)
{
lean_object* v_s_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v_s_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc_ref(v_s_3396_);
v___x_3397_ = lean_unsigned_to_nat(1u);
v___x_3398_ = lean_array_fget_borrowed(v_items_3390_, v___x_3397_);
if (lean_obj_tag(v___x_3398_) == 4)
{
lean_object* v_s_3399_; lean_object* v_bs_x27_3400_; lean_object* v___x_3401_; size_t v___x_3402_; size_t v___x_3403_; lean_object* v___x_3404_; 
v_s_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc_ref(v_s_3399_);
v_bs_x27_3400_ = lean_array_uset(v_bs_3384_, v_i_3383_, v___x_3394_);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v_s_3396_);
lean_ctor_set(v___x_3401_, 1, v_s_3399_);
v___x_3402_ = ((size_t)1ULL);
v___x_3403_ = lean_usize_add(v_i_3383_, v___x_3402_);
v___x_3404_ = lean_array_uset(v_bs_x27_3400_, v_i_3383_, v___x_3401_);
v_i_3383_ = v___x_3403_;
v_bs_3384_ = v___x_3404_;
goto _start;
}
else
{
lean_object* v___x_3406_; 
lean_dec_ref(v_s_3396_);
lean_dec_ref(v_bs_3384_);
v___x_3406_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3406_;
}
}
else
{
lean_object* v___x_3407_; 
lean_dec_ref(v_bs_3384_);
v___x_3407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3407_;
}
}
}
else
{
lean_dec_ref(v_bs_3384_);
goto v___jp_3385_;
}
}
v___jp_3385_:
{
lean_object* v___x_3386_; 
v___x_3386_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3386_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3408_, lean_object* v_i_3409_, lean_object* v_bs_3410_){
_start:
{
size_t v_sz_boxed_3411_; size_t v_i_boxed_3412_; lean_object* v_res_3413_; 
v_sz_boxed_3411_ = lean_unbox_usize(v_sz_3408_);
lean_dec(v_sz_3408_);
v_i_boxed_3412_ = lean_unbox_usize(v_i_3409_);
lean_dec(v_i_3409_);
v_res_3413_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3411_, v_i_boxed_3412_, v_bs_3410_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3418_, lean_object* v_d_3419_){
_start:
{
lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3428_; lean_object* v_received_3429_; lean_object* v___y_3448_; lean_object* v_a_3451_; 
if (lean_obj_tag(v_d_3419_) == 7)
{
lean_object* v_items_3475_; size_t v_sz_3476_; size_t v___x_3477_; lean_object* v___x_3478_; 
v_items_3475_ = lean_ctor_get(v_d_3419_, 0);
v_sz_3476_ = lean_array_size(v_items_3475_);
v___x_3477_ = ((size_t)0ULL);
lean_inc_ref(v_items_3475_);
v___x_3478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3476_, v___x_3477_, v_items_3475_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; uint8_t v___x_3483_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3481_ = lean_string_utf8_byte_size(v_a_3479_);
v___x_3482_ = lean_unsigned_to_nat(0u);
v___x_3483_ = lean_nat_dec_eq(v___x_3481_, v___x_3482_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3484_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3485_ = lean_string_append(v___x_3484_, v_a_3479_);
lean_dec(v_a_3479_);
v___x_3486_ = lean_string_append(v___x_3480_, v___x_3485_);
lean_dec_ref(v___x_3485_);
v_a_3451_ = v___x_3486_;
goto v___jp_3450_;
}
else
{
lean_dec(v_a_3479_);
v_a_3451_ = v___x_3480_;
goto v___jp_3450_;
}
}
else
{
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3487_; 
v_a_3487_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3478_, 1);
v_a_3451_ = v_a_3487_;
goto v___jp_3450_;
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3495_; 
lean_dec_ref_known(v_d_3419_, 1);
v_a_3488_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3490_ = v___x_3478_;
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3478_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3493_; 
if (v_isShared_3491_ == 0)
{
lean_ctor_set_tag(v___x_3490_, 0);
v___x_3493_ = v___x_3490_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3488_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
}
else
{
lean_object* v___x_3496_; 
v___x_3496_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3451_ = v___x_3496_;
goto v___jp_3450_;
}
v___jp_3421_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3424_ = lean_string_append(v___y_3422_, v___y_3423_);
lean_dec_ref(v___y_3423_);
v___x_3425_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
v___x_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3425_);
return v___x_3426_;
}
v___jp_3427_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3431_ = lean_string_append(v___x_3430_, v_context_3418_);
v___x_3432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3433_ = lean_string_append(v___x_3431_, v___x_3432_);
v___x_3434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3435_ = lean_string_append(v___x_3433_, v___x_3434_);
v___x_3436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3437_ = lean_string_append(v___x_3435_, v___x_3436_);
v___x_3438_ = lean_string_append(v___x_3437_, v_received_3429_);
lean_dec_ref(v_received_3429_);
v___x_3439_ = lean_string_utf8_byte_size(v___y_3428_);
v___x_3440_ = lean_unsigned_to_nat(0u);
v___x_3441_ = lean_nat_dec_eq(v___x_3439_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3443_ = lean_string_append(v___x_3442_, v___y_3428_);
lean_dec_ref(v___y_3428_);
v___x_3444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3445_ = lean_string_append(v___x_3443_, v___x_3444_);
v___y_3422_ = v___x_3438_;
v___y_3423_ = v___x_3445_;
goto v___jp_3421_;
}
else
{
lean_object* v___x_3446_; 
lean_dec_ref(v___y_3428_);
v___x_3446_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3422_ = v___x_3438_;
v___y_3423_ = v___x_3446_;
goto v___jp_3421_;
}
}
v___jp_3447_:
{
lean_object* v___x_3449_; 
v___x_3449_ = l_Lasm_JS_Data_describe(v_d_3419_);
v___y_3428_ = v___y_3448_;
v_received_3429_ = v___x_3449_;
goto v___jp_3427_;
}
v___jp_3450_:
{
if (lean_obj_tag(v_d_3419_) == 9)
{
lean_object* v_value_3452_; lean_object* v_description_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; 
v_value_3452_ = lean_ctor_get(v_d_3419_, 0);
v_description_3453_ = lean_ctor_get(v_d_3419_, 1);
v___x_3454_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3455_ = lean_string_dec_eq(v_description_3453_, v___x_3454_);
if (v___x_3455_ == 0)
{
v___y_3448_ = v_a_3451_;
goto v___jp_3447_;
}
else
{
lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3472_; 
lean_inc(v_value_3452_);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_d_3419_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; lean_object* v_unused_3474_; 
v_unused_3473_ = lean_ctor_get(v_d_3419_, 1);
lean_dec(v_unused_3473_);
v_unused_3474_ = lean_ctor_get(v_d_3419_, 0);
lean_dec(v_unused_3474_);
v___x_3457_ = v_d_3419_;
v_isShared_3458_ = v_isSharedCheck_3472_;
goto v_resetjp_3456_;
}
else
{
lean_dec(v_d_3419_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3472_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
uint32_t v___x_3459_; uint64_t v___x_3460_; lean_object* v___x_3462_; 
v___x_3459_ = 206;
v___x_3460_ = 0ULL;
lean_inc(v_value_3452_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 1, v___x_3454_);
v___x_3462_ = v___x_3457_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_value_3452_);
lean_ctor_set(v_reuseFailAlloc_3471_, 1, v___x_3454_);
v___x_3462_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
uint32_t v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = lasm_js_value_handle(v_value_3452_);
lean_dec(v_value_3452_);
v___x_3464_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3459_, v___x_3460_, v___x_3462_, v___x_3463_);
lean_dec_ref(v___x_3462_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; uint8_t v___x_3466_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = lean_string_validate_utf8(v_a_3465_);
if (v___x_3466_ == 0)
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
lean_dec(v_a_3465_);
v___x_3467_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3468_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3467_);
v___y_3428_ = v_a_3451_;
v_received_3429_ = v___x_3468_;
goto v___jp_3427_;
}
else
{
lean_object* v___x_3469_; 
v___x_3469_ = lean_string_from_utf8_unchecked(v_a_3465_);
v___y_3428_ = v_a_3451_;
v_received_3429_ = v___x_3469_;
goto v___jp_3427_;
}
}
else
{
lean_object* v___x_3470_; 
lean_dec_ref_known(v___x_3464_, 1);
v___x_3470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3428_ = v_a_3451_;
v_received_3429_ = v___x_3470_;
goto v___jp_3427_;
}
}
}
}
}
else
{
v___y_3448_ = v_a_3451_;
goto v___jp_3447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3497_, lean_object* v_d_3498_, lean_object* v_a_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3497_, v_d_3498_);
lean_dec_ref(v_context_3497_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3501_, lean_object* v_bytes_3502_){
_start:
{
lean_object* v___x_3504_; 
v___x_3504_ = l_Lasm_JS_Wire_decode(v_bytes_3502_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3506_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3504_, 1);
v___x_3506_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3501_, v_a_3505_);
return v___x_3506_;
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_a_3507_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3504_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3504_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
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
return v___x_3512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3515_, lean_object* v_bytes_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3515_, v_bytes_3516_);
lean_dec_ref(v_bytes_3516_);
lean_dec_ref(v_context_3515_);
return v_res_3518_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3519_; uint8_t v___x_3520_; uint64_t v___x_3521_; 
v___x_3519_ = 8ULL;
v___x_3520_ = 0;
v___x_3521_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3520_, v___x_3519_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3522_, lean_object* v_name_3523_, lean_object* v_args_3524_){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint64_t v___x_3529_; lean_object* v___x_3530_; 
v___x_3526_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3527_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3527_, 0, v_o_3522_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
lean_inc_ref(v_name_3523_);
v___x_3528_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3528_, 0, v_name_3523_);
v___x_3529_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3530_ = l_Lasm_JS_Value_invokeRaw(v___x_3527_, v___x_3528_, v_args_3524_, v___x_3529_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3533_ = lean_string_append(v___x_3532_, v_name_3523_);
lean_dec_ref(v_name_3523_);
v___x_3534_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3533_, v_a_3531_);
lean_dec(v_a_3531_);
lean_dec_ref(v___x_3533_);
return v___x_3534_;
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref(v_name_3523_);
v_a_3535_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3530_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3530_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3543_, lean_object* v_name_3544_, lean_object* v_args_3545_, lean_object* v_a_3546_){
_start:
{
lean_object* v_res_3547_; 
v_res_3547_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3543_, v_name_3544_, v_args_3545_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3549_, lean_object* v___f_3550_, lean_object* v_handler_3551_, lean_object* v_options_3552_, lean_object* v_a_3553_, lean_object* v_value_3554_, lean_object* v___x_3555_, lean_object* v___x_3556_, lean_object* v_a_3557_, lean_object* v___x_3558_, lean_object* v___x_3559_, lean_object* v_x_3560_){
_start:
{
uint8_t v___y_3563_; lean_object* v___y_3564_; lean_object* v_val_3565_; 
if (lean_obj_tag(v_x_3560_) == 0)
{
lean_object* v___x_3568_; 
lean_dec(v_a_3557_);
lean_dec_ref(v___x_3555_);
lean_dec(v_value_3554_);
lean_dec(v_a_3553_);
lean_dec_ref(v_options_3552_);
lean_dec_ref(v_handler_3551_);
lean_dec_ref(v___f_3550_);
lean_dec(v___x_3549_);
v___x_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3568_, 0, v_x_3560_);
return v___x_3568_;
}
else
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3626_; 
v_a_3569_ = lean_ctor_get(v_x_3560_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v_x_3560_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3571_ = v_x_3560_;
v_isShared_3572_ = v_isSharedCheck_3626_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v_x_3560_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3626_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3616_; lean_object* v___x_3623_; 
v___x_3623_ = l_Lasm_JS_Data_field(v_a_3569_, v___x_3559_);
if (lean_obj_tag(v___x_3623_) == 4)
{
lean_object* v_s_3624_; 
v_s_3624_ = lean_ctor_get(v___x_3623_, 0);
lean_inc_ref(v_s_3624_);
lean_dec_ref_known(v___x_3623_, 1);
v___y_3616_ = v_s_3624_;
goto v___jp_3615_;
}
else
{
lean_object* v___x_3625_; 
lean_dec(v___x_3623_);
v___x_3625_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_3616_ = v___x_3625_;
goto v___jp_3615_;
}
v___jp_3573_:
{
lean_object* v___f_3580_; lean_object* v___x_3581_; 
lean_inc(v_a_3569_);
lean_inc(v___x_3549_);
v___f_3580_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3580_, 0, v___x_3549_);
lean_closure_set(v___f_3580_, 1, v___y_3576_);
lean_closure_set(v___f_3580_, 2, v___y_3579_);
lean_closure_set(v___f_3580_, 3, v_options_3552_);
lean_closure_set(v___f_3580_, 4, v___y_3575_);
lean_closure_set(v___f_3580_, 5, v___y_3577_);
lean_closure_set(v___f_3580_, 6, v_a_3553_);
lean_closure_set(v___f_3580_, 7, v_value_3554_);
lean_closure_set(v___f_3580_, 8, v_a_3569_);
lean_closure_set(v___f_3580_, 9, v___x_3555_);
lean_closure_set(v___f_3580_, 10, v___y_3578_);
lean_closure_set(v___f_3580_, 11, v___y_3574_);
v___x_3581_ = l_Lasm_JS_Data_field(v_a_3569_, v___x_3556_);
lean_dec(v_a_3569_);
if (lean_obj_tag(v___x_3581_) == 9)
{
lean_object* v_value_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3605_; 
v_value_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; 
v_unused_3606_ = lean_ctor_get(v___x_3581_, 1);
lean_dec(v_unused_3606_);
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3605_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_value_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3605_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___f_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3590_; 
v___f_3586_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3586_, 0, v___f_3580_);
v___x_3587_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3588_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 1, v___x_3588_);
v___x_3590_ = v___x_3584_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_value_3582_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v___x_3588_);
v___x_3590_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; uint8_t v___x_3594_; lean_object* v___x_3595_; 
v___x_3591_ = lean_unsigned_to_nat(1u);
v___x_3592_ = lean_mk_empty_array_with_capacity(v___x_3591_);
v___x_3593_ = lean_array_push(v___x_3592_, v___x_3590_);
v___x_3594_ = 0;
v___x_3595_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3557_, v___x_3587_, v___x_3593_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v_a_3596_; lean_object* v___x_3598_; 
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3595_, 1);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v_a_3596_);
v___x_3598_ = v___x_3571_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3596_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
v___y_3563_ = v___x_3594_;
v___y_3564_ = v___f_3586_;
v_val_3565_ = v___x_3598_;
goto v___jp_3562_;
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; 
v_a_3600_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3595_, 1);
if (v_isShared_3572_ == 0)
{
lean_ctor_set_tag(v___x_3571_, 0);
lean_ctor_set(v___x_3571_, 0, v_a_3600_);
v___x_3602_ = v___x_3571_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
v___y_3563_ = v___x_3594_;
v___y_3564_ = v___f_3586_;
v_val_3565_ = v___x_3602_;
goto v___jp_3562_;
}
}
}
}
}
else
{
lean_object* v___f_3607_; lean_object* v___x_3608_; uint8_t v___x_3609_; lean_object* v___x_3611_; 
lean_dec(v___x_3581_);
lean_dec(v_a_3557_);
v___f_3607_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3607_, 0, v___f_3580_);
v___x_3608_ = lean_mk_empty_array_with_capacity(v___x_3549_);
v___x_3609_ = 0;
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3608_);
v___x_3611_ = v___x_3571_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3608_);
v___x_3611_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
v___x_3613_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3549_, v___x_3609_, v___x_3612_, v___f_3607_);
return v___x_3613_;
}
}
}
v___jp_3615_:
{
lean_object* v___f_3617_; lean_object* v___f_3618_; lean_object* v___f_3619_; lean_object* v___x_3620_; 
lean_inc_n(v___x_3549_, 2);
lean_inc_ref(v___y_3616_);
v___f_3617_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3617_, 0, v___y_3616_);
lean_closure_set(v___f_3617_, 1, v___x_3549_);
lean_closure_set(v___f_3617_, 2, v___f_3550_);
v___f_3618_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3618_, 0, v_handler_3551_);
lean_closure_set(v___f_3618_, 1, v___x_3549_);
lean_closure_set(v___f_3618_, 2, v___f_3617_);
v___f_3619_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3619_, 0, v___f_3618_);
v___x_3620_ = l_Lasm_JS_Data_field(v_a_3569_, v___x_3558_);
if (lean_obj_tag(v___x_3620_) == 4)
{
lean_object* v_s_3621_; 
v_s_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc_ref(v_s_3621_);
lean_dec_ref_known(v___x_3620_, 1);
lean_inc_ref_n(v___f_3619_, 3);
v___y_3574_ = v___f_3619_;
v___y_3575_ = v___f_3619_;
v___y_3576_ = v___y_3616_;
v___y_3577_ = v___f_3619_;
v___y_3578_ = v___f_3619_;
v___y_3579_ = v_s_3621_;
goto v___jp_3573_;
}
else
{
lean_object* v___x_3622_; 
lean_dec(v___x_3620_);
v___x_3622_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3619_, 3);
v___y_3574_ = v___f_3619_;
v___y_3575_ = v___f_3619_;
v___y_3576_ = v___y_3616_;
v___y_3577_ = v___f_3619_;
v___y_3578_ = v___f_3619_;
v___y_3579_ = v___x_3622_;
goto v___jp_3573_;
}
}
}
}
v___jp_3562_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3566_, 0, v_val_3565_);
v___x_3567_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3549_, v___y_3563_, v___x_3566_, v___y_3564_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3627_, lean_object* v___f_3628_, lean_object* v_handler_3629_, lean_object* v_options_3630_, lean_object* v_a_3631_, lean_object* v_value_3632_, lean_object* v___x_3633_, lean_object* v___x_3634_, lean_object* v_a_3635_, lean_object* v___x_3636_, lean_object* v___x_3637_, lean_object* v_x_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3627_, v___f_3628_, v_handler_3629_, v_options_3630_, v_a_3631_, v_value_3632_, v___x_3633_, v___x_3634_, v_a_3635_, v___x_3636_, v___x_3637_, v_x_3638_);
lean_dec_ref(v___x_3637_);
lean_dec_ref(v___x_3636_);
lean_dec_ref(v___x_3634_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3641_, size_t v_i_3642_, lean_object* v_bs_3643_){
_start:
{
uint8_t v___x_3644_; 
v___x_3644_ = lean_usize_dec_lt(v_i_3642_, v_sz_3641_);
if (v___x_3644_ == 0)
{
return v_bs_3643_;
}
else
{
lean_object* v_v_3645_; lean_object* v___x_3646_; lean_object* v_bs_x27_3647_; lean_object* v___x_3648_; size_t v___x_3649_; size_t v___x_3650_; lean_object* v___x_3651_; 
v_v_3645_ = lean_array_uget(v_bs_3643_, v_i_3642_);
v___x_3646_ = lean_unsigned_to_nat(0u);
v_bs_x27_3647_ = lean_array_uset(v_bs_3643_, v_i_3642_, v___x_3646_);
v___x_3648_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3648_, 0, v_v_3645_);
v___x_3649_ = ((size_t)1ULL);
v___x_3650_ = lean_usize_add(v_i_3642_, v___x_3649_);
v___x_3651_ = lean_array_uset(v_bs_x27_3647_, v_i_3642_, v___x_3648_);
v_i_3642_ = v___x_3650_;
v_bs_3643_ = v___x_3651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3653_, lean_object* v_i_3654_, lean_object* v_bs_3655_){
_start:
{
size_t v_sz_boxed_3656_; size_t v_i_boxed_3657_; lean_object* v_res_3658_; 
v_sz_boxed_3656_ = lean_unbox_usize(v_sz_3653_);
lean_dec(v_sz_3653_);
v_i_boxed_3657_ = lean_unbox_usize(v_i_3654_);
lean_dec(v_i_3654_);
v_res_3658_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3656_, v_i_boxed_3657_, v_bs_3655_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3659_, lean_object* v_keys_3660_){
_start:
{
uint32_t v___x_3662_; uint32_t v___x_3663_; uint64_t v___x_3664_; size_t v_sz_3665_; size_t v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3662_ = 203;
v___x_3663_ = lasm_js_value_handle(v_o_3659_);
v___x_3664_ = 0ULL;
v_sz_3665_ = lean_array_size(v_keys_3660_);
v___x_3666_ = ((size_t)0ULL);
v___x_3667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3665_, v___x_3666_, v_keys_3660_);
v___x_3668_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
v___x_3669_ = l_Lasm_JS_Wire_encode(v___x_3668_);
lean_dec_ref_known(v___x_3668_, 1);
v___x_3670_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3671_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3671_, 0, v_o_3659_);
lean_ctor_set(v___x_3671_, 1, v___x_3670_);
v___x_3672_ = lasm_js_call(v___x_3662_, v___x_3663_, v___x_3664_, v___x_3669_, v___x_3671_);
lean_dec_ref_known(v___x_3671_, 2);
lean_dec_ref(v___x_3669_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_a_3673_; lean_object* v___x_3674_; 
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
lean_inc(v_a_3673_);
lean_dec_ref_known(v___x_3672_, 1);
v___x_3674_ = l_Lasm_JS_Wire_decode(v_a_3673_);
lean_dec(v_a_3673_);
return v___x_3674_;
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
v_a_3675_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3672_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3672_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3683_, lean_object* v_keys_3684_, lean_object* v_a_3685_){
_start:
{
lean_object* v_res_3686_; 
v_res_3686_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3683_, v_keys_3684_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3707_, lean_object* v___f_3708_, lean_object* v_handler_3709_, lean_object* v_options_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_____r_3713_){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; 
v___x_3717_ = lean_unsigned_to_nat(0u);
v___x_3718_ = lean_array_get_size(v_args_3707_);
v___x_3719_ = lean_nat_dec_lt(v___x_3717_, v___x_3718_);
if (v___x_3719_ == 0)
{
lean_dec(v_a_3712_);
lean_dec(v_a_3711_);
lean_dec_ref(v_options_3710_);
lean_dec_ref(v_handler_3709_);
lean_dec_ref(v___f_3708_);
goto v___jp_3715_;
}
else
{
lean_object* v___x_3720_; 
v___x_3720_ = lean_array_fget_borrowed(v_args_3707_, v___x_3717_);
if (lean_obj_tag(v___x_3720_) == 9)
{
lean_object* v_value_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___f_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; lean_object* v_val_3730_; lean_object* v___x_3733_; 
v_value_3721_ = lean_ctor_get(v___x_3720_, 0);
v___x_3722_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3723_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3724_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3725_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3721_, 2);
v___f_3726_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3726_, 0, v___x_3717_);
lean_closure_set(v___f_3726_, 1, v___f_3708_);
lean_closure_set(v___f_3726_, 2, v_handler_3709_);
lean_closure_set(v___f_3726_, 3, v_options_3710_);
lean_closure_set(v___f_3726_, 4, v_a_3711_);
lean_closure_set(v___f_3726_, 5, v_value_3721_);
lean_closure_set(v___f_3726_, 6, v___x_3725_);
lean_closure_set(v___f_3726_, 7, v___x_3724_);
lean_closure_set(v___f_3726_, 8, v_a_3712_);
lean_closure_set(v___f_3726_, 9, v___x_3723_);
lean_closure_set(v___f_3726_, 10, v___x_3722_);
v___x_3727_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3728_ = 0;
v___x_3733_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3721_, v___x_3727_);
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
v_val_3730_ = v___x_3739_;
goto v___jp_3729_;
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
v_val_3730_ = v___x_3747_;
goto v___jp_3729_;
}
}
}
v___jp_3729_:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3731_, 0, v_val_3730_);
v___x_3732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3717_, v___x_3728_, v___x_3731_, v___f_3726_);
return v___x_3732_;
}
}
else
{
lean_dec(v_a_3712_);
lean_dec(v_a_3711_);
lean_dec_ref(v_options_3710_);
lean_dec_ref(v_handler_3709_);
lean_dec_ref(v___f_3708_);
goto v___jp_3715_;
}
}
v___jp_3715_:
{
lean_object* v___x_3716_; 
v___x_3716_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3716_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3750_, lean_object* v___f_3751_, lean_object* v_handler_3752_, lean_object* v_options_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v_____r_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3750_, v___f_3751_, v_handler_3752_, v_options_3753_, v_a_3754_, v_a_3755_, v_____r_3756_);
lean_dec_ref(v_args_3750_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3759_, lean_object* v_x_3760_){
_start:
{
if (lean_obj_tag(v_x_3760_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3770_; 
lean_dec_ref(v___f_3759_);
v_a_3762_ = lean_ctor_get(v_x_3760_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v_x_3760_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3764_ = v_x_3760_;
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v_x_3760_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3768_; 
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3772_; 
v_a_3771_ = lean_ctor_get(v_x_3760_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v_x_3760_, 1);
v___x_3772_ = lean_apply_2(v___f_3759_, v_a_3771_, lean_box(0));
return v___x_3772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3773_, lean_object* v_x_3774_, lean_object* v___y_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3773_, v_x_3774_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3777_, lean_object* v_handler_3778_, lean_object* v_options_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_args_3782_){
_start:
{
lean_object* v___f_3784_; lean_object* v___x_3788_; lean_object* v___x_3789_; uint8_t v___x_3790_; 
lean_inc(v_a_3781_);
lean_inc(v_a_3780_);
lean_inc_ref(v_options_3779_);
lean_inc_ref(v_handler_3778_);
lean_inc_ref(v___f_3777_);
lean_inc_ref(v_args_3782_);
v___f_3784_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3784_, 0, v_args_3782_);
lean_closure_set(v___f_3784_, 1, v___f_3777_);
lean_closure_set(v___f_3784_, 2, v_handler_3778_);
lean_closure_set(v___f_3784_, 3, v_options_3779_);
lean_closure_set(v___f_3784_, 4, v_a_3780_);
lean_closure_set(v___f_3784_, 5, v_a_3781_);
v___x_3788_ = lean_unsigned_to_nat(1u);
v___x_3789_ = lean_array_get_size(v_args_3782_);
v___x_3790_ = lean_nat_dec_lt(v___x_3788_, v___x_3789_);
if (v___x_3790_ == 0)
{
lean_dec_ref(v___f_3784_);
goto v___jp_3785_;
}
else
{
lean_object* v___x_3791_; 
v___x_3791_ = lean_array_fget_borrowed(v_args_3782_, v___x_3788_);
switch(lean_obj_tag(v___x_3791_))
{
case 9:
{
lean_object* v___f_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; uint8_t v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
lean_inc_ref(v___x_3791_);
lean_dec_ref(v_args_3782_);
lean_dec(v_a_3781_);
lean_dec(v_a_3780_);
lean_dec_ref(v_options_3779_);
lean_dec_ref(v_handler_3778_);
lean_dec_ref(v___f_3777_);
v___f_3792_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3792_, 0, v___f_3784_);
v___x_3793_ = l_Lasm_Fetch_platformEnv;
v___x_3794_ = lean_unsigned_to_nat(0u);
v___x_3795_ = 0;
v___x_3796_ = lean_st_ref_swap(v___x_3793_, v___x_3791_);
lean_dec(v___x_3796_);
v___x_3797_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3794_, v___x_3795_, v___x_3797_, v___f_3792_);
return v___x_3798_;
}
case 8:
{
lean_object* v___f_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; uint8_t v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
lean_inc_ref(v___x_3791_);
lean_dec_ref(v_args_3782_);
lean_dec(v_a_3781_);
lean_dec(v_a_3780_);
lean_dec_ref(v_options_3779_);
lean_dec_ref(v_handler_3778_);
lean_dec_ref(v___f_3777_);
v___f_3799_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3799_, 0, v___f_3784_);
v___x_3800_ = l_Lasm_Fetch_platformEnv;
v___x_3801_ = lean_unsigned_to_nat(0u);
v___x_3802_ = 0;
v___x_3803_ = lean_st_ref_swap(v___x_3800_, v___x_3791_);
lean_dec(v___x_3803_);
v___x_3804_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3801_, v___x_3802_, v___x_3804_, v___f_3799_);
return v___x_3805_;
}
default: 
{
lean_dec_ref(v___f_3784_);
goto v___jp_3785_;
}
}
}
v___jp_3785_:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; 
v___x_3786_ = lean_box(0);
v___x_3787_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3782_, v___f_3777_, v_handler_3778_, v_options_3779_, v_a_3780_, v_a_3781_, v___x_3786_);
lean_dec_ref(v_args_3782_);
return v___x_3787_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3806_, lean_object* v_handler_3807_, lean_object* v_options_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_args_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3806_, v_handler_3807_, v_options_3808_, v_a_3809_, v_a_3810_, v_args_3811_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3817_, lean_object* v_options_3818_){
_start:
{
lean_object* v___f_3820_; lean_object* v___x_3821_; 
v___f_3820_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3821_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3821_) == 0)
{
lean_object* v_a_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc_n(v_a_3822_, 2);
lean_dec_ref_known(v___x_3821_, 1);
v___x_3823_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3824_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3822_, v___x_3823_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v___x_3826_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3827_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3822_, v___x_3826_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; lean_object* v___f_3829_; lean_object* v___x_3830_; 
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_a_3828_);
lean_dec_ref_known(v___x_3827_, 1);
v___f_3829_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3829_, 0, v___f_3820_);
lean_closure_set(v___f_3829_, 1, v_handler_3817_);
lean_closure_set(v___f_3829_, 2, v_options_3818_);
lean_closure_set(v___f_3829_, 3, v_a_3825_);
lean_closure_set(v___f_3829_, 4, v_a_3828_);
v___x_3830_ = l_Lasm_JS_Function_ofFn(v___f_3829_);
return v___x_3830_;
}
else
{
lean_dec(v_a_3825_);
lean_dec_ref(v_options_3818_);
lean_dec_ref(v_handler_3817_);
return v___x_3827_;
}
}
else
{
lean_dec(v_a_3822_);
lean_dec_ref(v_options_3818_);
lean_dec_ref(v_handler_3817_);
return v___x_3824_;
}
}
else
{
lean_dec_ref(v_options_3818_);
lean_dec_ref(v_handler_3817_);
return v___x_3821_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3831_, lean_object* v_options_3832_, lean_object* v_a_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3831_, v_options_3832_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3835_){
_start:
{
lean_object* v___x_3837_; 
v___x_3837_ = l_Lasm_JS_Wire_decode(v_bytes_3835_);
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3838_);
lean_dec_ref(v_bytes_3838_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3841_, lean_object* v_bytes_3842_){
_start:
{
lean_object* v___x_3844_; 
v___x_3844_ = l_Lasm_JS_Wire_decode(v_bytes_3842_);
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3845_, lean_object* v_bytes_3846_, lean_object* v_a_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3845_, v_bytes_3846_);
lean_dec_ref(v_bytes_3846_);
lean_dec_ref(v_context_3845_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3849_){
_start:
{
if (lean_obj_tag(v_x_3849_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3859_; 
v_a_3851_ = lean_ctor_get(v_x_3849_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_x_3849_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3853_ = v_x_3849_;
v_isShared_3854_ = v_isSharedCheck_3859_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v_x_3849_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3859_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
lean_object* v___x_3857_; 
v___x_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3856_);
return v___x_3857_;
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3869_; 
v_a_3860_ = lean_ctor_get(v_x_3849_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v_x_3849_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3862_ = v_x_3849_;
v_isShared_3863_ = v_isSharedCheck_3869_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v_x_3849_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3869_;
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
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
v___x_3867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
return v___x_3867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3870_, lean_object* v___y_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3870_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3877_){
_start:
{
if (lean_obj_tag(v_x_3877_) == 0)
{
lean_object* v_a_3879_; lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3887_; 
v_a_3879_ = lean_ctor_get(v_x_3877_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v_x_3877_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3881_ = v_x_3877_;
v_isShared_3882_ = v_isSharedCheck_3887_;
goto v_resetjp_3880_;
}
else
{
lean_inc(v_a_3879_);
lean_dec(v_x_3877_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3887_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3884_; 
if (v_isShared_3882_ == 0)
{
v___x_3884_ = v___x_3881_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3879_);
v___x_3884_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
lean_object* v___x_3885_; 
v___x_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3884_);
return v___x_3885_;
}
}
}
else
{
lean_object* v___x_3888_; 
lean_dec_ref_known(v_x_3877_, 1);
v___x_3888_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3888_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3889_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3892_, lean_object* v_x_3893_){
_start:
{
if (lean_obj_tag(v_x_3893_) == 0)
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3903_; 
lean_dec_ref(v___f_3892_);
v_a_3895_ = lean_ctor_get(v_x_3893_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_x_3893_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3897_ = v_x_3893_;
v_isShared_3898_ = v_isSharedCheck_3903_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v_x_3893_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3903_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3900_; 
if (v_isShared_3898_ == 0)
{
v___x_3900_ = v___x_3897_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3895_);
v___x_3900_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
lean_object* v___x_3901_; 
v___x_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
return v___x_3901_;
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3924_; 
v_a_3904_ = lean_ctor_get(v_x_3893_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v_x_3893_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3906_ = v_x_3893_;
v_isShared_3907_ = v_isSharedCheck_3924_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v_x_3893_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3924_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v_flush_3908_; lean_object* v___x_3909_; uint8_t v___x_3910_; lean_object* v_val_3912_; lean_object* v___x_3915_; 
v_flush_3908_ = lean_ctor_get(v_a_3904_, 0);
lean_inc_ref(v_flush_3908_);
lean_dec(v_a_3904_);
v___x_3909_ = lean_unsigned_to_nat(0u);
v___x_3910_ = 0;
v___x_3915_ = lean_apply_1(v_flush_3908_, lean_box(0));
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v___x_3915_, 1);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v_a_3916_);
v___x_3918_ = v___x_3906_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3916_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
v_val_3912_ = v___x_3918_;
goto v___jp_3911_;
}
}
else
{
lean_object* v_a_3920_; lean_object* v___x_3922_; 
v_a_3920_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3920_);
lean_dec_ref_known(v___x_3915_, 1);
if (v_isShared_3907_ == 0)
{
lean_ctor_set_tag(v___x_3906_, 0);
lean_ctor_set(v___x_3906_, 0, v_a_3920_);
v___x_3922_ = v___x_3906_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3920_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
v_val_3912_ = v___x_3922_;
goto v___jp_3911_;
}
}
v___jp_3911_:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3913_, 0, v_val_3912_);
v___x_3914_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3909_, v___x_3910_, v___x_3913_, v___f_3892_);
return v___x_3914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3925_, lean_object* v_x_3926_, lean_object* v___y_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3925_, v_x_3926_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3929_, lean_object* v_x_3930_){
_start:
{
if (lean_obj_tag(v_x_3930_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3940_; 
lean_dec_ref(v___f_3929_);
v_a_3932_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3934_ = v_x_3930_;
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v_x_3930_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
return v___x_3938_;
}
}
}
else
{
lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3952_; 
v_isSharedCheck_3952_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3952_ == 0)
{
lean_object* v_unused_3953_; 
v_unused_3953_ = lean_ctor_get(v_x_3930_, 0);
lean_dec(v_unused_3953_);
v___x_3942_ = v_x_3930_;
v_isShared_3943_ = v_isSharedCheck_3952_;
goto v_resetjp_3941_;
}
else
{
lean_dec(v_x_3930_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3952_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3944_; uint8_t v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3948_; 
v___x_3944_ = lean_unsigned_to_nat(0u);
v___x_3945_ = 0;
v___x_3946_ = lean_get_stdout();
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 0, v___x_3946_);
v___x_3948_ = v___x_3942_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3946_);
v___x_3948_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3944_, v___x_3945_, v___x_3949_, v___f_3929_);
return v___x_3950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3954_, lean_object* v_x_3955_, lean_object* v___y_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3954_, v_x_3955_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3958_){
_start:
{
if (lean_obj_tag(v_x_3958_) == 0)
{
lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3968_; 
v_a_3960_ = lean_ctor_get(v_x_3958_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v_x_3958_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3962_ = v_x_3958_;
v_isShared_3963_ = v_isSharedCheck_3968_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v_x_3958_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3968_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
return v___x_3966_;
}
}
}
else
{
lean_object* v___x_3969_; 
lean_dec_ref_known(v_x_3958_, 1);
v___x_3969_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3969_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3970_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3974_, lean_object* v___x_3975_, lean_object* v_____r_3976_){
_start:
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3978_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3979_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3979_, 0, v_snd_3974_);
lean_ctor_set(v___x_3979_, 1, v___x_3978_);
lean_ctor_set(v___x_3979_, 2, v___x_3975_);
v___x_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3982_, lean_object* v___x_3983_, lean_object* v_____r_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3982_, v___x_3983_, v_____r_3984_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3987_, lean_object* v_x_3988_){
_start:
{
if (lean_obj_tag(v_x_3988_) == 0)
{
lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_3998_; 
lean_dec_ref(v___f_3987_);
v_a_3990_ = lean_ctor_get(v_x_3988_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_x_3988_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3992_ = v_x_3988_;
v_isShared_3993_ = v_isSharedCheck_3998_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v_x_3988_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_3998_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3995_; 
if (v_isShared_3993_ == 0)
{
v___x_3995_ = v___x_3992_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_a_3990_);
v___x_3995_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3996_; 
v___x_3996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3995_);
return v___x_3996_;
}
}
}
else
{
lean_object* v_a_3999_; 
v_a_3999_ = lean_ctor_get(v_x_3988_, 0);
lean_inc(v_a_3999_);
lean_dec_ref_known(v_x_3988_, 1);
if (lean_obj_tag(v_a_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4008_; 
lean_dec_ref(v___f_3987_);
v_a_4000_ = lean_ctor_get(v_a_3999_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v_a_3999_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4002_ = v_a_3999_;
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v_a_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4005_; 
if (v_isShared_4003_ == 0)
{
lean_ctor_set_tag(v___x_4002_, 1);
v___x_4005_ = v___x_4002_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v_a_4000_);
v___x_4005_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
lean_object* v___x_4006_; 
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
return v___x_4006_;
}
}
}
else
{
lean_object* v_a_4009_; lean_object* v___x_4010_; 
v_a_4009_ = lean_ctor_get(v_a_3999_, 0);
lean_inc(v_a_4009_);
lean_dec_ref_known(v_a_3999_, 1);
v___x_4010_ = lean_apply_2(v___f_3987_, v_a_4009_, lean_box(0));
return v___x_4010_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_4011_, lean_object* v_x_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Lasm_Fetch_serveNode___lam__5(v___f_4011_, v_x_4012_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_4016_, lean_object* v___x_4017_, lean_object* v_x_4018_){
_start:
{
if (lean_obj_tag(v_x_4018_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4028_; 
lean_dec_ref(v___x_4017_);
lean_dec(v_snd_4016_);
v_a_4020_ = lean_ctor_get(v_x_4018_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v_x_4018_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4022_ = v_x_4018_;
v_isShared_4023_ = v_isSharedCheck_4028_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v_x_4018_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4028_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4020_);
v___x_4025_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4025_);
return v___x_4026_;
}
}
}
else
{
lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4039_; 
v_isSharedCheck_4039_ = !lean_is_exclusive(v_x_4018_);
if (v_isSharedCheck_4039_ == 0)
{
lean_object* v_unused_4040_; 
v_unused_4040_ = lean_ctor_get(v_x_4018_, 0);
lean_dec(v_unused_4040_);
v___x_4030_ = v_x_4018_;
v_isShared_4031_ = v_isSharedCheck_4039_;
goto v_resetjp_4029_;
}
else
{
lean_dec(v_x_4018_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4039_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4035_; 
v___x_4032_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_4033_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4033_, 0, v_snd_4016_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
lean_ctor_set(v___x_4033_, 2, v___x_4017_);
if (v_isShared_4031_ == 0)
{
lean_ctor_set_tag(v___x_4030_, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4033_);
v___x_4035_ = v___x_4030_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4033_);
v___x_4035_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4035_);
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
return v___x_4037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_4041_, lean_object* v___x_4042_, lean_object* v_x_4043_, lean_object* v___y_4044_){
_start:
{
lean_object* v_res_4045_; 
v_res_4045_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_4041_, v___x_4042_, v_x_4043_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_4046_, lean_object* v_name_4047_, lean_object* v_args_4048_){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; uint64_t v___x_4053_; lean_object* v___x_4054_; 
v___x_4050_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4051_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4051_, 0, v_o_4046_);
lean_ctor_set(v___x_4051_, 1, v___x_4050_);
v___x_4052_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4052_, 0, v_name_4047_);
v___x_4053_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_4054_ = l_Lasm_JS_Value_invokeRaw(v___x_4051_, v___x_4052_, v_args_4048_, v___x_4053_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_object* v_a_4055_; lean_object* v___x_4056_; 
v_a_4055_ = lean_ctor_get(v___x_4054_, 0);
lean_inc(v_a_4055_);
lean_dec_ref_known(v___x_4054_, 1);
v___x_4056_ = l_Lasm_JS_Wire_decode(v_a_4055_);
lean_dec(v_a_4055_);
return v___x_4056_;
}
else
{
lean_object* v_a_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4064_; 
v_a_4057_ = lean_ctor_get(v___x_4054_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4059_ = v___x_4054_;
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_a_4057_);
lean_dec(v___x_4054_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___x_4062_; 
if (v_isShared_4060_ == 0)
{
v___x_4062_ = v___x_4059_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4057_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_4065_, lean_object* v_name_4066_, lean_object* v_args_4067_, lean_object* v_a_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_4065_, v_name_4066_, v_args_4067_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_4070_, uint8_t v___x_4071_, lean_object* v___f_4072_, lean_object* v_snd_4073_, lean_object* v_chunk_4074_){
_start:
{
lean_object* v_val_4077_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4080_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_4081_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4081_, 0, v_chunk_4074_);
v___x_4082_ = lean_unsigned_to_nat(1u);
v___x_4083_ = lean_mk_empty_array_with_capacity(v___x_4082_);
v___x_4084_ = lean_array_push(v___x_4083_, v___x_4081_);
v___x_4085_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_4073_, v___x_4080_, v___x_4084_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4085_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4085_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
lean_ctor_set_tag(v___x_4088_, 1);
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
v_val_4077_ = v___x_4091_;
goto v___jp_4076_;
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
v_a_4094_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4085_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4085_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
lean_ctor_set_tag(v___x_4096_, 0);
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
v_val_4077_ = v___x_4099_;
goto v___jp_4076_;
}
}
}
v___jp_4076_:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v_val_4077_);
v___x_4079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4070_, v___x_4071_, v___x_4078_, v___f_4072_);
return v___x_4079_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_4102_, lean_object* v___x_4103_, lean_object* v___f_4104_, lean_object* v_snd_4105_, lean_object* v_chunk_4106_, lean_object* v___y_4107_){
_start:
{
uint8_t v___x_18404__boxed_4108_; lean_object* v_res_4109_; 
v___x_18404__boxed_4108_ = lean_unbox(v___x_4103_);
v_res_4109_ = l_Lasm_Fetch_serveNode___lam__8(v___x_4102_, v___x_18404__boxed_4108_, v___f_4104_, v_snd_4105_, v_chunk_4106_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_4110_, uint8_t v___x_4111_, lean_object* v___f_4112_, lean_object* v_x_4113_){
_start:
{
lean_object* v_val_4116_; 
if (lean_obj_tag(v_x_4113_) == 0)
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4135_; 
v_a_4119_ = lean_ctor_get(v_x_4113_, 0);
v_isSharedCheck_4135_ = !lean_is_exclusive(v_x_4113_);
if (v_isSharedCheck_4135_ == 0)
{
v___x_4121_ = v_x_4113_;
v_isShared_4122_ = v_isSharedCheck_4135_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v_x_4113_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4135_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4123_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_4124_ = lean_io_error_to_string(v_a_4119_);
v___x_4125_ = lean_string_append(v___x_4123_, v___x_4124_);
lean_dec_ref(v___x_4124_);
v___x_4126_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_4125_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; lean_object* v___x_4129_; 
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4126_, 1);
if (v_isShared_4122_ == 0)
{
lean_ctor_set_tag(v___x_4121_, 1);
lean_ctor_set(v___x_4121_, 0, v_a_4127_);
v___x_4129_ = v___x_4121_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4127_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
v_val_4116_ = v___x_4129_;
goto v___jp_4115_;
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; 
v_a_4131_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4131_);
lean_dec_ref_known(v___x_4126_, 1);
if (v_isShared_4122_ == 0)
{
lean_ctor_set(v___x_4121_, 0, v_a_4131_);
v___x_4133_ = v___x_4121_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v_a_4131_);
v___x_4133_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
v_val_4116_ = v___x_4133_;
goto v___jp_4115_;
}
}
}
}
else
{
lean_object* v___x_4136_; 
lean_dec_ref(v___f_4112_);
lean_dec(v___x_4110_);
v___x_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4136_, 0, v_x_4113_);
return v___x_4136_;
}
v___jp_4115_:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4117_, 0, v_val_4116_);
v___x_4118_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4111_, v___x_4117_, v___f_4112_);
return v___x_4118_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_4137_, lean_object* v___x_4138_, lean_object* v___f_4139_, lean_object* v_x_4140_, lean_object* v___y_4141_){
_start:
{
uint8_t v___x_18472__boxed_4142_; lean_object* v_res_4143_; 
v___x_18472__boxed_4142_ = lean_unbox(v___x_4138_);
v_res_4143_ = l_Lasm_Fetch_serveNode___lam__9(v___x_4137_, v___x_18472__boxed_4142_, v___f_4139_, v_x_4140_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_4144_, lean_object* v_snd_4145_, lean_object* v___y_4146_, uint16_t v_status_4147_, lean_object* v_body_4148_, lean_object* v___x_4149_, lean_object* v___f_4150_, lean_object* v___f_4151_, lean_object* v___f_4152_, lean_object* v___f_4153_, lean_object* v___f_4154_, lean_object* v_x_4155_){
_start:
{
if (lean_obj_tag(v_x_4155_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v___f_4154_);
lean_dec_ref(v___f_4153_);
lean_dec_ref(v___f_4152_);
lean_dec_ref(v___f_4151_);
lean_dec_ref(v___f_4150_);
lean_dec(v___x_4149_);
lean_dec_ref(v_body_4148_);
lean_dec(v_snd_4145_);
lean_dec(v_stream_4144_);
v_a_4157_ = lean_ctor_get(v_x_4155_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_x_4155_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4159_ = v_x_4155_;
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v_x_4155_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4157_);
v___x_4162_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4163_; 
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
}
}
else
{
lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4195_; 
v_isSharedCheck_4195_ = !lean_is_exclusive(v_x_4155_);
if (v_isSharedCheck_4195_ == 0)
{
lean_object* v_unused_4196_; 
v_unused_4196_ = lean_ctor_get(v_x_4155_, 0);
lean_dec(v_unused_4196_);
v___x_4167_ = v_x_4155_;
v_isShared_4168_ = v_isSharedCheck_4195_;
goto v_resetjp_4166_;
}
else
{
lean_dec(v_x_4155_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4195_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
if (lean_obj_tag(v_stream_4144_) == 0)
{
lean_object* v___x_4169_; lean_object* v___y_4171_; uint8_t v___x_4180_; 
lean_dec_ref(v___f_4154_);
lean_dec_ref(v___f_4153_);
lean_dec_ref(v___f_4152_);
lean_dec_ref(v___f_4151_);
lean_dec_ref(v___f_4150_);
lean_dec(v___x_4149_);
v___x_4169_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_4180_ = l_Lasm_Fetch_bodyless(v___y_4146_, v_status_4147_);
if (v___x_4180_ == 0)
{
lean_object* v___x_4181_; 
v___x_4181_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4181_, 0, v_body_4148_);
v___y_4171_ = v___x_4181_;
goto v___jp_4170_;
}
else
{
lean_object* v___x_4182_; 
lean_dec_ref(v_body_4148_);
v___x_4182_ = lean_box(0);
v___y_4171_ = v___x_4182_;
goto v___jp_4170_;
}
v___jp_4170_:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4177_; 
v___x_4172_ = lean_unsigned_to_nat(1u);
v___x_4173_ = lean_mk_empty_array_with_capacity(v___x_4172_);
v___x_4174_ = lean_array_push(v___x_4173_, v___y_4171_);
v___x_4175_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4175_, 0, v_snd_4145_);
lean_ctor_set(v___x_4175_, 1, v___x_4169_);
lean_ctor_set(v___x_4175_, 2, v___x_4174_);
if (v_isShared_4168_ == 0)
{
lean_ctor_set(v___x_4167_, 0, v___x_4175_);
v___x_4177_ = v___x_4167_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v___x_4175_);
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
lean_object* v_val_4183_; uint8_t v___x_4184_; 
lean_del_object(v___x_4167_);
lean_dec_ref(v_body_4148_);
v_val_4183_ = lean_ctor_get(v_stream_4144_, 0);
lean_inc(v_val_4183_);
lean_dec_ref_known(v_stream_4144_, 1);
v___x_4184_ = l_Lasm_Fetch_bodyless(v___y_4146_, v_status_4147_);
if (v___x_4184_ == 0)
{
lean_object* v___x_4185_; lean_object* v___f_4186_; lean_object* v___x_4187_; lean_object* v___f_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
lean_dec_ref(v___f_4154_);
v___x_4185_ = lean_box(v___x_4184_);
lean_inc_n(v___x_4149_, 4);
v___f_4186_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_4186_, 0, v___x_4149_);
lean_closure_set(v___f_4186_, 1, v___x_4185_);
lean_closure_set(v___f_4186_, 2, v___f_4150_);
lean_closure_set(v___f_4186_, 3, v_snd_4145_);
v___x_4187_ = lean_box(v___x_4184_);
v___f_4188_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_4188_, 0, v___x_4149_);
lean_closure_set(v___f_4188_, 1, v___x_4187_);
lean_closure_set(v___f_4188_, 2, v___f_4151_);
v___x_4189_ = lean_apply_2(v_val_4183_, v___f_4186_, lean_box(0));
v___x_4190_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4149_, v___x_4184_, v___x_4189_, v___f_4152_);
v___x_4191_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4149_, v___x_4184_, v___x_4190_, v___f_4188_);
v___x_4192_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4149_, v___x_4184_, v___x_4191_, v___f_4153_);
return v___x_4192_;
}
else
{
lean_object* v___x_4193_; lean_object* v___x_4194_; 
lean_dec(v_val_4183_);
lean_dec_ref(v___f_4153_);
lean_dec_ref(v___f_4152_);
lean_dec_ref(v___f_4151_);
lean_dec_ref(v___f_4150_);
lean_dec(v___x_4149_);
lean_dec(v_snd_4145_);
v___x_4193_ = lean_box(0);
v___x_4194_ = lean_apply_2(v___f_4154_, v___x_4193_, lean_box(0));
return v___x_4194_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_4197_, lean_object* v_snd_4198_, lean_object* v___y_4199_, lean_object* v_status_4200_, lean_object* v_body_4201_, lean_object* v___x_4202_, lean_object* v___f_4203_, lean_object* v___f_4204_, lean_object* v___f_4205_, lean_object* v___f_4206_, lean_object* v___f_4207_, lean_object* v_x_4208_, lean_object* v___y_4209_){
_start:
{
uint16_t v_status_boxed_4210_; lean_object* v_res_4211_; 
v_status_boxed_4210_ = lean_unbox(v_status_4200_);
v_res_4211_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_4197_, v_snd_4198_, v___y_4199_, v_status_boxed_4210_, v_body_4201_, v___x_4202_, v___f_4203_, v___f_4204_, v___f_4205_, v___f_4206_, v___f_4207_, v_x_4208_);
lean_dec_ref(v___y_4199_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_4212_, size_t v_i_4213_, size_t v_stop_4214_, lean_object* v_b_4215_){
_start:
{
uint8_t v___x_4216_; 
v___x_4216_ = lean_usize_dec_eq(v_i_4213_, v_stop_4214_);
if (v___x_4216_ == 0)
{
lean_object* v___x_4217_; lean_object* v_fst_4218_; lean_object* v_snd_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; size_t v___x_4224_; size_t v___x_4225_; 
v___x_4217_ = lean_array_uget_borrowed(v_as_4212_, v_i_4213_);
v_fst_4218_ = lean_ctor_get(v___x_4217_, 0);
v_snd_4219_ = lean_ctor_get(v___x_4217_, 1);
lean_inc(v_fst_4218_);
v___x_4220_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4220_, 0, v_fst_4218_);
v___x_4221_ = lean_array_push(v_b_4215_, v___x_4220_);
lean_inc(v_snd_4219_);
v___x_4222_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4222_, 0, v_snd_4219_);
v___x_4223_ = lean_array_push(v___x_4221_, v___x_4222_);
v___x_4224_ = ((size_t)1ULL);
v___x_4225_ = lean_usize_add(v_i_4213_, v___x_4224_);
v_i_4213_ = v___x_4225_;
v_b_4215_ = v___x_4223_;
goto _start;
}
else
{
return v_b_4215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_4227_, lean_object* v_i_4228_, lean_object* v_stop_4229_, lean_object* v_b_4230_){
_start:
{
size_t v_i_boxed_4231_; size_t v_stop_boxed_4232_; lean_object* v_res_4233_; 
v_i_boxed_4231_ = lean_unbox_usize(v_i_4228_);
lean_dec(v_i_4228_);
v_stop_boxed_4232_ = lean_unbox_usize(v_stop_4229_);
lean_dec(v_stop_4229_);
v_res_4233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_4227_, v_i_boxed_4231_, v_stop_boxed_4232_, v_b_4230_);
lean_dec_ref(v_as_4227_);
return v_res_4233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_4235_, lean_object* v_snd_4236_, lean_object* v___y_4237_, lean_object* v___f_4238_, lean_object* v___f_4239_, lean_object* v_x_4240_){
_start:
{
uint8_t v___y_4243_; lean_object* v___y_4244_; lean_object* v_val_4245_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; 
if (lean_obj_tag(v_x_4240_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4284_; 
lean_dec_ref(v___f_4239_);
lean_dec_ref(v___f_4238_);
lean_dec_ref(v___y_4237_);
lean_dec(v_snd_4236_);
lean_dec(v___x_4235_);
v_a_4276_ = lean_ctor_get(v_x_4240_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v_x_4240_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4278_ = v_x_4240_;
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v_x_4240_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
lean_object* v___x_4282_; 
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4281_);
return v___x_4282_;
}
}
}
else
{
lean_object* v_a_4285_; uint16_t v_status_4286_; lean_object* v_headers_4287_; lean_object* v_body_4288_; lean_object* v_stream_4289_; lean_object* v___x_4290_; lean_object* v___f_4291_; lean_object* v___f_4292_; lean_object* v___f_4293_; lean_object* v___y_4295_; lean_object* v___x_4307_; uint8_t v___x_4308_; 
v_a_4285_ = lean_ctor_get(v_x_4240_, 0);
lean_inc(v_a_4285_);
lean_dec_ref_known(v_x_4240_, 1);
v_status_4286_ = lean_ctor_get_uint16(v_a_4285_, sizeof(void*)*3);
v_headers_4287_ = lean_ctor_get(v_a_4285_, 0);
lean_inc_ref(v_headers_4287_);
v_body_4288_ = lean_ctor_get(v_a_4285_, 1);
lean_inc_ref(v_body_4288_);
v_stream_4289_ = lean_ctor_get(v_a_4285_, 2);
lean_inc(v_stream_4289_);
lean_dec(v_a_4285_);
v___x_4290_ = lean_mk_empty_array_with_capacity(v___x_4235_);
lean_inc_ref_n(v___x_4290_, 2);
lean_inc_n(v_snd_4236_, 2);
v___f_4291_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4291_, 0, v_snd_4236_);
lean_closure_set(v___f_4291_, 1, v___x_4290_);
lean_inc_ref(v___f_4291_);
v___f_4292_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4292_, 0, v___f_4291_);
v___f_4293_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_4293_, 0, v_snd_4236_);
lean_closure_set(v___f_4293_, 1, v___x_4290_);
v___x_4307_ = lean_array_get_size(v_headers_4287_);
v___x_4308_ = lean_nat_dec_lt(v___x_4235_, v___x_4307_);
if (v___x_4308_ == 0)
{
lean_dec_ref(v_headers_4287_);
v___y_4295_ = v___x_4290_;
goto v___jp_4294_;
}
else
{
uint8_t v___x_4309_; 
v___x_4309_ = lean_nat_dec_le(v___x_4307_, v___x_4307_);
if (v___x_4309_ == 0)
{
if (v___x_4308_ == 0)
{
lean_dec_ref(v_headers_4287_);
v___y_4295_ = v___x_4290_;
goto v___jp_4294_;
}
else
{
size_t v___x_4310_; size_t v___x_4311_; lean_object* v___x_4312_; 
v___x_4310_ = ((size_t)0ULL);
v___x_4311_ = lean_usize_of_nat(v___x_4307_);
v___x_4312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4287_, v___x_4310_, v___x_4311_, v___x_4290_);
lean_dec_ref(v_headers_4287_);
v___y_4295_ = v___x_4312_;
goto v___jp_4294_;
}
}
else
{
size_t v___x_4313_; size_t v___x_4314_; lean_object* v___x_4315_; 
v___x_4313_ = ((size_t)0ULL);
v___x_4314_ = lean_usize_of_nat(v___x_4307_);
v___x_4315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_4287_, v___x_4313_, v___x_4314_, v___x_4290_);
lean_dec_ref(v_headers_4287_);
v___y_4295_ = v___x_4315_;
goto v___jp_4294_;
}
}
v___jp_4294_:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___f_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; uint8_t v___x_4303_; 
v___x_4296_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_4297_ = lean_box(v_status_4286_);
lean_inc(v___x_4235_);
lean_inc(v_snd_4236_);
v___f_4298_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_4298_, 0, v_stream_4289_);
lean_closure_set(v___f_4298_, 1, v_snd_4236_);
lean_closure_set(v___f_4298_, 2, v___y_4237_);
lean_closure_set(v___f_4298_, 3, v___x_4297_);
lean_closure_set(v___f_4298_, 4, v_body_4288_);
lean_closure_set(v___f_4298_, 5, v___x_4235_);
lean_closure_set(v___f_4298_, 6, v___f_4238_);
lean_closure_set(v___f_4298_, 7, v___f_4293_);
lean_closure_set(v___f_4298_, 8, v___f_4239_);
lean_closure_set(v___f_4298_, 9, v___f_4292_);
lean_closure_set(v___f_4298_, 10, v___f_4291_);
v___x_4299_ = lean_uint16_to_nat(v_status_4286_);
v___x_4300_ = lean_nat_to_int(v___x_4299_);
v___x_4301_ = lean_nat_abs(v___x_4300_);
v___x_4302_ = lean_cstr_to_nat("9007199254740991");
v___x_4303_ = lean_nat_dec_le(v___x_4301_, v___x_4302_);
lean_dec(v___x_4301_);
if (v___x_4303_ == 0)
{
lean_object* v___x_4304_; 
v___x_4304_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4300_);
v___y_4249_ = v___x_4296_;
v___y_4250_ = v___y_4295_;
v___y_4251_ = v___f_4298_;
v___y_4252_ = v___x_4304_;
goto v___jp_4248_;
}
else
{
double v___x_4305_; lean_object* v___x_4306_; 
v___x_4305_ = l_Float_ofInt(v___x_4300_);
lean_dec(v___x_4300_);
v___x_4306_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4306_, 0, v___x_4305_);
v___y_4249_ = v___x_4296_;
v___y_4250_ = v___y_4295_;
v___y_4251_ = v___f_4298_;
v___y_4252_ = v___x_4306_;
goto v___jp_4248_;
}
}
}
v___jp_4242_:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4246_, 0, v_val_4245_);
v___x_4247_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4235_, v___y_4243_, v___x_4246_, v___y_4244_);
return v___x_4247_;
}
v___jp_4248_:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; uint8_t v___x_4258_; lean_object* v___x_4259_; 
v___x_4253_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___y_4250_);
v___x_4254_ = lean_unsigned_to_nat(2u);
v___x_4255_ = lean_mk_empty_array_with_capacity(v___x_4254_);
v___x_4256_ = lean_array_push(v___x_4255_, v___y_4252_);
v___x_4257_ = lean_array_push(v___x_4256_, v___x_4253_);
v___x_4258_ = 0;
lean_inc_ref(v___y_4249_);
v___x_4259_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_4236_, v___y_4249_, v___x_4257_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
lean_ctor_set_tag(v___x_4262_, 1);
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
v___y_4243_ = v___x_4258_;
v___y_4244_ = v___y_4251_;
v_val_4245_ = v___x_4265_;
goto v___jp_4242_;
}
}
}
else
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
v_a_4268_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4270_ = v___x_4259_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4259_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
lean_ctor_set_tag(v___x_4270_, 0);
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4268_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
v___y_4243_ = v___x_4258_;
v___y_4244_ = v___y_4251_;
v_val_4245_ = v___x_4273_;
goto v___jp_4242_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_4316_, lean_object* v_snd_4317_, lean_object* v___y_4318_, lean_object* v___f_4319_, lean_object* v___f_4320_, lean_object* v_x_4321_, lean_object* v___y_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Lasm_Fetch_serveNode___lam__11(v___x_4316_, v_snd_4317_, v___y_4318_, v___f_4319_, v___f_4320_, v_x_4321_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_4324_, lean_object* v___x_4325_, lean_object* v___f_4326_, lean_object* v_request_4327_){
_start:
{
uint8_t v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4329_ = 0;
v___x_4330_ = l_Lasm_Fetch_respond(v_handler_4324_, v_request_4327_);
v___x_4331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4325_, v___x_4329_, v___x_4330_, v___f_4326_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_4332_, lean_object* v___x_4333_, lean_object* v___f_4334_, lean_object* v_request_4335_, lean_object* v___y_4336_){
_start:
{
lean_object* v_res_4337_; 
v_res_4337_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_4332_, v___x_4333_, v___f_4334_, v_request_4335_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_4338_, lean_object* v_x_4339_){
_start:
{
if (lean_obj_tag(v_x_4339_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4349_; 
lean_dec_ref(v___f_4338_);
v_a_4341_ = lean_ctor_get(v_x_4339_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v_x_4339_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4343_ = v_x_4339_;
v_isShared_4344_ = v_isSharedCheck_4349_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v_x_4339_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4349_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v___x_4346_; 
if (v_isShared_4344_ == 0)
{
v___x_4346_ = v___x_4343_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4341_);
v___x_4346_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
lean_object* v___x_4347_; 
v___x_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4346_);
return v___x_4347_;
}
}
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4351_; 
v_a_4350_ = lean_ctor_get(v_x_4339_, 0);
lean_inc(v_a_4350_);
lean_dec_ref_known(v_x_4339_, 1);
v___x_4351_ = lean_apply_2(v___f_4338_, v_a_4350_, lean_box(0));
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4352_, lean_object* v_x_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4352_, v_x_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___x_4358_, lean_object* v___f_4359_, lean_object* v___x_4360_, uint8_t v___x_4361_, lean_object* v___f_4362_, lean_object* v_x_4363_){
_start:
{
if (lean_obj_tag(v_x_4363_) == 0)
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4373_; 
lean_dec_ref(v___f_4362_);
lean_dec(v___x_4360_);
lean_dec_ref(v___f_4359_);
lean_dec_ref(v___x_4358_);
lean_dec_ref(v___y_4357_);
lean_dec_ref(v___y_4356_);
v_a_4365_ = lean_ctor_get(v_x_4363_, 0);
v_isSharedCheck_4373_ = !lean_is_exclusive(v_x_4363_);
if (v_isSharedCheck_4373_ == 0)
{
v___x_4367_ = v_x_4363_;
v_isShared_4368_ = v_isSharedCheck_4373_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v_x_4363_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4373_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4371_; 
v___x_4371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4370_);
return v___x_4371_;
}
}
}
else
{
lean_object* v_a_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4384_; 
v_a_4374_ = lean_ctor_get(v_x_4363_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v_x_4363_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4376_ = v_x_4363_;
v_isShared_4377_ = v_isSharedCheck_4384_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_a_4374_);
lean_dec(v_x_4363_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4384_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4378_; lean_object* v___x_4380_; 
v___x_4378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4378_, 0, v___y_4356_);
lean_ctor_set(v___x_4378_, 1, v___y_4357_);
lean_ctor_set(v___x_4378_, 2, v___x_4358_);
lean_ctor_set(v___x_4378_, 3, v_a_4374_);
lean_ctor_set(v___x_4378_, 4, v___f_4359_);
if (v_isShared_4377_ == 0)
{
lean_ctor_set(v___x_4376_, 0, v___x_4378_);
v___x_4380_ = v___x_4376_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v___x_4378_);
v___x_4380_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
v___x_4381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4380_);
v___x_4382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4360_, v___x_4361_, v___x_4381_, v___f_4362_);
return v___x_4382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___x_4387_, lean_object* v___f_4388_, lean_object* v___x_4389_, lean_object* v___x_4390_, lean_object* v___f_4391_, lean_object* v_x_4392_, lean_object* v___y_4393_){
_start:
{
uint8_t v___x_18879__boxed_4394_; lean_object* v_res_4395_; 
v___x_18879__boxed_4394_ = lean_unbox(v___x_4390_);
v_res_4395_ = l_Lasm_Fetch_serveNode___lam__18(v___y_4385_, v___y_4386_, v___x_4387_, v___f_4388_, v___x_4389_, v___x_18879__boxed_4394_, v___f_4391_, v_x_4392_);
return v_res_4395_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_4396_; uint8_t v___x_4397_; uint64_t v___x_4398_; 
v___x_4396_ = 8ULL;
v___x_4397_ = 0;
v___x_4398_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4397_, v___x_4396_);
return v___x_4398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_4399_, lean_object* v_name_4400_, lean_object* v_args_4401_){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; uint64_t v___x_4406_; lean_object* v___x_4407_; 
v___x_4403_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4404_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4404_, 0, v_o_4399_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
lean_inc_ref(v_name_4400_);
v___x_4405_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4405_, 0, v_name_4400_);
v___x_4406_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_4407_ = l_Lasm_JS_Value_invokeRaw(v___x_4404_, v___x_4405_, v_args_4401_, v___x_4406_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4407_, 1);
v___x_4409_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4410_ = lean_string_append(v___x_4409_, v_name_4400_);
lean_dec_ref(v_name_4400_);
v___x_4411_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4410_, v_a_4408_);
lean_dec(v_a_4408_);
lean_dec_ref(v___x_4410_);
return v___x_4411_;
}
else
{
lean_dec_ref(v_name_4400_);
return v___x_4407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_4412_, lean_object* v_name_4413_, lean_object* v_args_4414_, lean_object* v_a_4415_){
_start:
{
lean_object* v_res_4416_; 
v_res_4416_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_4412_, v_name_4413_, v_args_4414_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4418_, uint8_t v___x_4419_, lean_object* v___f_4420_, lean_object* v___x_4421_, lean_object* v_a_4422_, lean_object* v_x_4423_){
_start:
{
lean_object* v_val_4426_; 
if (lean_obj_tag(v_x_4423_) == 0)
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4437_; 
lean_dec(v_a_4422_);
lean_dec_ref(v___f_4420_);
lean_dec(v___x_4418_);
v_a_4429_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4431_ = v_x_4423_;
v_isShared_4432_ = v_isSharedCheck_4437_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v_x_4423_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4437_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4432_ == 0)
{
v___x_4434_ = v___x_4431_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v_a_4429_);
v___x_4434_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
lean_object* v___x_4435_; 
v___x_4435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4434_);
return v___x_4435_;
}
}
}
else
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4456_; 
v_a_4438_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4440_ = v_x_4423_;
v_isShared_4441_ = v_isSharedCheck_4456_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v_x_4423_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4456_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4442_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4443_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4444_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4444_, 0, v_a_4438_);
lean_ctor_set(v___x_4444_, 1, v___x_4443_);
v___x_4445_ = lean_mk_empty_array_with_capacity(v___x_4421_);
v___x_4446_ = lean_array_push(v___x_4445_, v___x_4444_);
v___x_4447_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_4422_, v___x_4442_, v___x_4446_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
lean_inc(v_a_4448_);
lean_dec_ref_known(v___x_4447_, 1);
if (v_isShared_4441_ == 0)
{
lean_ctor_set(v___x_4440_, 0, v_a_4448_);
v___x_4450_ = v___x_4440_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_a_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
v_val_4426_ = v___x_4450_;
goto v___jp_4425_;
}
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; 
v_a_4452_ = lean_ctor_get(v___x_4447_, 0);
lean_inc(v_a_4452_);
lean_dec_ref_known(v___x_4447_, 1);
if (v_isShared_4441_ == 0)
{
lean_ctor_set_tag(v___x_4440_, 0);
lean_ctor_set(v___x_4440_, 0, v_a_4452_);
v___x_4454_ = v___x_4440_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4452_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
v_val_4426_ = v___x_4454_;
goto v___jp_4425_;
}
}
}
}
v___jp_4425_:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v_val_4426_);
v___x_4428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4418_, v___x_4419_, v___x_4427_, v___f_4420_);
return v___x_4428_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4457_, lean_object* v___x_4458_, lean_object* v___f_4459_, lean_object* v___x_4460_, lean_object* v_a_4461_, lean_object* v_x_4462_, lean_object* v___y_4463_){
_start:
{
uint8_t v___x_18978__boxed_4464_; lean_object* v_res_4465_; 
v___x_18978__boxed_4464_ = lean_unbox(v___x_4458_);
v_res_4465_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4457_, v___x_18978__boxed_4464_, v___f_4459_, v___x_4460_, v_a_4461_, v_x_4462_);
lean_dec(v___x_4460_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___x_4468_, lean_object* v___x_4469_, lean_object* v___x_4470_, uint8_t v___x_4471_, lean_object* v___f_4472_, lean_object* v_x_4473_){
_start:
{
if (lean_obj_tag(v_x_4473_) == 0)
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4483_; 
lean_dec_ref(v___f_4472_);
lean_dec(v___x_4470_);
lean_dec_ref(v___x_4469_);
lean_dec_ref(v___x_4468_);
lean_dec_ref(v___y_4467_);
lean_dec_ref(v___y_4466_);
v_a_4475_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4477_ = v_x_4473_;
v_isShared_4478_ = v_isSharedCheck_4483_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v_x_4473_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4483_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4480_; 
if (v_isShared_4478_ == 0)
{
v___x_4480_ = v___x_4477_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4475_);
v___x_4480_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
lean_object* v___x_4481_; 
v___x_4481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4480_);
return v___x_4481_;
}
}
}
else
{
lean_object* v_a_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4494_; 
v_a_4484_ = lean_ctor_get(v_x_4473_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v_x_4473_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4486_ = v_x_4473_;
v_isShared_4487_ = v_isSharedCheck_4494_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_a_4484_);
lean_dec(v_x_4473_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4494_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v___x_4488_; lean_object* v___x_4490_; 
v___x_4488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4488_, 0, v___y_4466_);
lean_ctor_set(v___x_4488_, 1, v___y_4467_);
lean_ctor_set(v___x_4488_, 2, v___x_4468_);
lean_ctor_set(v___x_4488_, 3, v___x_4469_);
lean_ctor_set(v___x_4488_, 4, v_a_4484_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 0, v___x_4488_);
v___x_4490_ = v___x_4486_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; 
v___x_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4490_);
v___x_4492_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4470_, v___x_4471_, v___x_4491_, v___f_4472_);
return v___x_4492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___x_4497_, lean_object* v___x_4498_, lean_object* v___x_4499_, lean_object* v___x_4500_, lean_object* v___f_4501_, lean_object* v_x_4502_, lean_object* v___y_4503_){
_start:
{
uint8_t v___x_19068__boxed_4504_; lean_object* v_res_4505_; 
v___x_19068__boxed_4504_ = lean_unbox(v___x_4500_);
v_res_4505_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4495_, v___y_4496_, v___x_4497_, v___x_4498_, v___x_4499_, v___x_19068__boxed_4504_, v___f_4501_, v_x_4502_);
return v_res_4505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4506_, uint8_t v___x_4507_, lean_object* v___f_4508_, lean_object* v_x_4509_){
_start:
{
lean_object* v_val_4512_; 
if (lean_obj_tag(v_x_4509_) == 0)
{
lean_object* v_a_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4523_; 
lean_dec_ref(v___f_4508_);
lean_dec(v___x_4506_);
v_a_4515_ = lean_ctor_get(v_x_4509_, 0);
v_isSharedCheck_4523_ = !lean_is_exclusive(v_x_4509_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4517_ = v_x_4509_;
v_isShared_4518_ = v_isSharedCheck_4523_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_a_4515_);
lean_dec(v_x_4509_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4523_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
lean_object* v___x_4520_; 
if (v_isShared_4518_ == 0)
{
v___x_4520_ = v___x_4517_;
goto v_reusejp_4519_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v_a_4515_);
v___x_4520_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4519_;
}
v_reusejp_4519_:
{
lean_object* v___x_4521_; 
v___x_4521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
return v___x_4521_;
}
}
}
else
{
lean_object* v_a_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4537_; 
v_a_4524_ = lean_ctor_get(v_x_4509_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_x_4509_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4526_ = v_x_4509_;
v_isShared_4527_ = v_isSharedCheck_4537_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_a_4524_);
lean_dec(v_x_4509_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4537_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4528_; 
v___x_4528_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4524_);
if (lean_obj_tag(v___x_4528_) == 0)
{
lean_object* v_a_4529_; lean_object* v___x_4531_; 
v_a_4529_ = lean_ctor_get(v___x_4528_, 0);
lean_inc(v_a_4529_);
lean_dec_ref_known(v___x_4528_, 1);
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 0, v_a_4529_);
v___x_4531_ = v___x_4526_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v_a_4529_);
v___x_4531_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
v_val_4512_ = v___x_4531_;
goto v___jp_4511_;
}
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; 
v_a_4533_ = lean_ctor_get(v___x_4528_, 0);
lean_inc(v_a_4533_);
lean_dec_ref_known(v___x_4528_, 1);
if (v_isShared_4527_ == 0)
{
lean_ctor_set_tag(v___x_4526_, 0);
lean_ctor_set(v___x_4526_, 0, v_a_4533_);
v___x_4535_ = v___x_4526_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_a_4533_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
v_val_4512_ = v___x_4535_;
goto v___jp_4511_;
}
}
}
}
v___jp_4511_:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v_val_4512_);
v___x_4514_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4506_, v___x_4507_, v___x_4513_, v___f_4508_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4538_, lean_object* v___x_4539_, lean_object* v___f_4540_, lean_object* v_x_4541_, lean_object* v___y_4542_){
_start:
{
uint8_t v___x_19131__boxed_4543_; lean_object* v_res_4544_; 
v___x_19131__boxed_4543_ = lean_unbox(v___x_4539_);
v_res_4544_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4538_, v___x_19131__boxed_4543_, v___f_4540_, v_x_4541_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4545_, lean_object* v_range_4546_, lean_object* v_b_4547_, lean_object* v_i_4548_){
_start:
{
lean_object* v_stop_4549_; lean_object* v_step_4550_; uint8_t v___x_4551_; 
v_stop_4549_ = lean_ctor_get(v_range_4546_, 1);
v_step_4550_ = lean_ctor_get(v_range_4546_, 2);
v___x_4551_ = lean_nat_dec_lt(v_i_4548_, v_stop_4549_);
if (v___x_4551_ == 0)
{
lean_dec(v_i_4548_);
return v_b_4547_;
}
else
{
lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v___x_4552_ = lean_unsigned_to_nat(2u);
v___x_4553_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4554_ = lean_unsigned_to_nat(1u);
v___x_4555_ = lean_nat_mul(v___x_4552_, v_i_4548_);
v___x_4556_ = lean_array_get_borrowed(v___x_4553_, v___y_4545_, v___x_4555_);
v___x_4557_ = lean_nat_add(v___x_4555_, v___x_4554_);
lean_dec(v___x_4555_);
v___x_4558_ = lean_array_get_borrowed(v___x_4553_, v___y_4545_, v___x_4557_);
lean_dec(v___x_4557_);
lean_inc(v___x_4558_);
lean_inc(v___x_4556_);
v___x_4559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4556_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
v___x_4560_ = lean_array_push(v_b_4547_, v___x_4559_);
v___x_4561_ = lean_nat_add(v_i_4548_, v_step_4550_);
lean_dec(v_i_4548_);
v_b_4547_ = v___x_4560_;
v_i_4548_ = v___x_4561_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4563_, lean_object* v_range_4564_, lean_object* v_b_4565_, lean_object* v_i_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4563_, v_range_4564_, v_b_4565_, v_i_4566_);
lean_dec_ref(v_range_4564_);
lean_dec_ref(v___y_4563_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4568_, size_t v_i_4569_, size_t v_stop_4570_, lean_object* v_b_4571_){
_start:
{
lean_object* v___y_4573_; uint8_t v___x_4577_; 
v___x_4577_ = lean_usize_dec_eq(v_i_4569_, v_stop_4570_);
if (v___x_4577_ == 0)
{
lean_object* v___x_4578_; 
v___x_4578_ = lean_array_uget_borrowed(v_as_4568_, v_i_4569_);
if (lean_obj_tag(v___x_4578_) == 4)
{
lean_object* v_s_4579_; lean_object* v___x_4580_; 
v_s_4579_ = lean_ctor_get(v___x_4578_, 0);
lean_inc_ref(v_s_4579_);
v___x_4580_ = lean_array_push(v_b_4571_, v_s_4579_);
v___y_4573_ = v___x_4580_;
goto v___jp_4572_;
}
else
{
v___y_4573_ = v_b_4571_;
goto v___jp_4572_;
}
}
else
{
return v_b_4571_;
}
v___jp_4572_:
{
size_t v___x_4574_; size_t v___x_4575_; 
v___x_4574_ = ((size_t)1ULL);
v___x_4575_ = lean_usize_add(v_i_4569_, v___x_4574_);
v_i_4569_ = v___x_4575_;
v_b_4571_ = v___y_4573_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4581_, lean_object* v_i_4582_, lean_object* v_stop_4583_, lean_object* v_b_4584_){
_start:
{
size_t v_i_boxed_4585_; size_t v_stop_boxed_4586_; lean_object* v_res_4587_; 
v_i_boxed_4585_ = lean_unbox_usize(v_i_4582_);
lean_dec(v_i_4582_);
v_stop_boxed_4586_ = lean_unbox_usize(v_stop_4583_);
lean_dec(v_stop_4583_);
v_res_4587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4581_, v_i_boxed_4585_, v_stop_boxed_4586_, v_b_4584_);
lean_dec_ref(v_as_4581_);
return v_res_4587_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4588_, lean_object* v_start_4589_, lean_object* v_stop_4590_){
_start:
{
lean_object* v___x_4591_; uint8_t v___x_4592_; 
v___x_4591_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
v___x_4592_ = lean_nat_dec_lt(v_start_4589_, v_stop_4590_);
if (v___x_4592_ == 0)
{
return v___x_4591_;
}
else
{
lean_object* v___x_4593_; uint8_t v___x_4594_; 
v___x_4593_ = lean_array_get_size(v_as_4588_);
v___x_4594_ = lean_nat_dec_le(v_stop_4590_, v___x_4593_);
if (v___x_4594_ == 0)
{
uint8_t v___x_4595_; 
v___x_4595_ = lean_nat_dec_lt(v_start_4589_, v___x_4593_);
if (v___x_4595_ == 0)
{
return v___x_4591_;
}
else
{
size_t v___x_4596_; size_t v___x_4597_; lean_object* v___x_4598_; 
v___x_4596_ = lean_usize_of_nat(v_start_4589_);
v___x_4597_ = lean_usize_of_nat(v___x_4593_);
v___x_4598_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4588_, v___x_4596_, v___x_4597_, v___x_4591_);
return v___x_4598_;
}
}
else
{
size_t v___x_4599_; size_t v___x_4600_; lean_object* v___x_4601_; 
v___x_4599_ = lean_usize_of_nat(v_start_4589_);
v___x_4600_ = lean_usize_of_nat(v_stop_4590_);
v___x_4601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4588_, v___x_4599_, v___x_4600_, v___x_4591_);
return v___x_4601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4602_, lean_object* v_start_4603_, lean_object* v_stop_4604_){
_start:
{
lean_object* v_res_4605_; 
v_res_4605_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4602_, v_start_4603_, v_stop_4604_);
lean_dec(v_stop_4604_);
lean_dec(v_start_4603_);
lean_dec_ref(v_as_4602_);
return v_res_4605_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4608_, size_t v_i_4609_, size_t v_stop_4610_){
_start:
{
uint8_t v___x_4611_; 
v___x_4611_ = lean_usize_dec_eq(v_i_4609_, v_stop_4610_);
if (v___x_4611_ == 0)
{
lean_object* v___x_4612_; lean_object* v_fst_4613_; uint8_t v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; 
v___x_4612_ = lean_array_uget_borrowed(v_as_4608_, v_i_4609_);
v_fst_4613_ = lean_ctor_get(v___x_4612_, 0);
v___x_4614_ = 1;
lean_inc(v_fst_4613_);
v___x_4615_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4613_);
v___x_4616_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4617_ = lean_string_dec_eq(v___x_4615_, v___x_4616_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; uint8_t v___x_4619_; 
v___x_4618_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4619_ = lean_string_dec_eq(v___x_4615_, v___x_4618_);
lean_dec_ref(v___x_4615_);
if (v___x_4619_ == 0)
{
size_t v___x_4620_; size_t v___x_4621_; 
v___x_4620_ = ((size_t)1ULL);
v___x_4621_ = lean_usize_add(v_i_4609_, v___x_4620_);
v_i_4609_ = v___x_4621_;
goto _start;
}
else
{
return v___x_4614_;
}
}
else
{
lean_dec_ref(v___x_4615_);
return v___x_4614_;
}
}
else
{
uint8_t v___x_4623_; 
v___x_4623_ = 0;
return v___x_4623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4624_, lean_object* v_i_4625_, lean_object* v_stop_4626_){
_start:
{
size_t v_i_boxed_4627_; size_t v_stop_boxed_4628_; uint8_t v_res_4629_; lean_object* v_r_4630_; 
v_i_boxed_4627_ = lean_unbox_usize(v_i_4625_);
lean_dec(v_i_4625_);
v_stop_boxed_4628_ = lean_unbox_usize(v_stop_4626_);
lean_dec(v_stop_4626_);
v_res_4629_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4624_, v_i_boxed_4627_, v_stop_boxed_4628_);
lean_dec_ref(v_as_4624_);
v_r_4630_ = lean_box(v_res_4629_);
return v_r_4630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4632_, size_t v_sz_4633_, size_t v_i_4634_, lean_object* v_b_4635_){
_start:
{
uint8_t v___x_4636_; 
v___x_4636_ = lean_usize_dec_lt(v_i_4634_, v_sz_4633_);
if (v___x_4636_ == 0)
{
lean_inc_ref(v_b_4635_);
return v_b_4635_;
}
else
{
lean_object* v_a_4637_; lean_object* v_fst_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; uint8_t v___x_4642_; 
v_a_4637_ = lean_array_uget_borrowed(v_as_4632_, v_i_4634_);
v_fst_4638_ = lean_ctor_get(v_a_4637_, 0);
v___x_4639_ = lean_box(0);
lean_inc(v_fst_4638_);
v___x_4640_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4638_);
v___x_4641_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4642_ = lean_string_dec_eq(v___x_4640_, v___x_4641_);
lean_dec_ref(v___x_4640_);
if (v___x_4642_ == 0)
{
lean_object* v___x_4643_; size_t v___x_4644_; size_t v___x_4645_; 
v___x_4643_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4644_ = ((size_t)1ULL);
v___x_4645_ = lean_usize_add(v_i_4634_, v___x_4644_);
v_i_4634_ = v___x_4645_;
v_b_4635_ = v___x_4643_;
goto _start;
}
else
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; 
lean_inc(v_a_4637_);
v___x_4647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4647_, 0, v_a_4637_);
v___x_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
v___x_4649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4648_);
lean_ctor_set(v___x_4649_, 1, v___x_4639_);
return v___x_4649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4650_, lean_object* v_sz_4651_, lean_object* v_i_4652_, lean_object* v_b_4653_){
_start:
{
size_t v_sz_boxed_4654_; size_t v_i_boxed_4655_; lean_object* v_res_4656_; 
v_sz_boxed_4654_ = lean_unbox_usize(v_sz_4651_);
lean_dec(v_sz_4651_);
v_i_boxed_4655_ = lean_unbox_usize(v_i_4652_);
lean_dec(v_i_4652_);
v_res_4656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4650_, v_sz_boxed_4654_, v_i_boxed_4655_, v_b_4653_);
lean_dec_ref(v_b_4653_);
lean_dec_ref(v_as_4650_);
return v_res_4656_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4659_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4660_ = lean_string_utf8_byte_size(v___x_4659_);
return v___x_4660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4663_, lean_object* v___f_4664_, lean_object* v___f_4665_, lean_object* v_handler_4666_, lean_object* v_options_4667_, lean_object* v_a_4668_, lean_object* v_fst_4669_, lean_object* v_a_4670_, lean_object* v___y_4671_, lean_object* v___x_4672_, lean_object* v___x_4673_, lean_object* v___x_4674_, lean_object* v_x_4675_){
_start:
{
lean_object* v___y_4678_; uint8_t v___y_4679_; lean_object* v___y_4680_; lean_object* v_val_4681_; lean_object* v___y_4685_; lean_object* v___y_4686_; lean_object* v___y_4687_; lean_object* v___y_4688_; lean_object* v___y_4689_; lean_object* v___y_4690_; lean_object* v___y_4691_; lean_object* v___y_4692_; lean_object* v___y_4693_; lean_object* v___y_4694_; lean_object* v___y_4695_; lean_object* v___y_4696_; uint8_t v___y_4697_; lean_object* v___y_4698_; lean_object* v___y_4746_; lean_object* v___y_4747_; lean_object* v___y_4748_; lean_object* v___y_4749_; lean_object* v___y_4750_; lean_object* v___y_4751_; lean_object* v___y_4752_; lean_object* v___y_4753_; lean_object* v___y_4754_; lean_object* v___y_4755_; lean_object* v___y_4756_; lean_object* v___y_4757_; lean_object* v___y_4758_; lean_object* v___y_4759_; uint8_t v___y_4760_; lean_object* v___y_4770_; lean_object* v___y_4771_; lean_object* v___y_4772_; lean_object* v___y_4773_; lean_object* v___y_4774_; lean_object* v___y_4775_; lean_object* v___y_4776_; lean_object* v___y_4777_; lean_object* v___y_4778_; lean_object* v___y_4779_; lean_object* v___y_4780_; lean_object* v___y_4781_; lean_object* v___y_4782_; lean_object* v___y_4783_; lean_object* v___y_4790_; lean_object* v___y_4791_; lean_object* v___y_4792_; lean_object* v___y_4793_; lean_object* v___y_4794_; lean_object* v___y_4795_; lean_object* v___y_4796_; lean_object* v___y_4797_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v___y_4800_; lean_object* v___y_4801_; lean_object* v___y_4802_; lean_object* v___y_4807_; lean_object* v___y_4808_; lean_object* v___y_4809_; lean_object* v___y_4810_; 
if (lean_obj_tag(v_x_4675_) == 0)
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4837_; 
lean_dec(v___y_4671_);
lean_dec(v_a_4670_);
lean_dec(v_fst_4669_);
lean_dec(v_a_4668_);
lean_dec_ref(v_options_4667_);
lean_dec_ref(v_handler_4666_);
lean_dec_ref(v___f_4665_);
lean_dec_ref(v___f_4664_);
lean_dec(v_snd_4663_);
v_a_4829_ = lean_ctor_get(v_x_4675_, 0);
v_isSharedCheck_4837_ = !lean_is_exclusive(v_x_4675_);
if (v_isSharedCheck_4837_ == 0)
{
v___x_4831_ = v_x_4675_;
v_isShared_4832_ = v_isSharedCheck_4837_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v_x_4675_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4837_;
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
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
lean_object* v___x_4835_; 
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4834_);
return v___x_4835_;
}
}
}
else
{
lean_object* v_a_4838_; lean_object* v___y_4840_; lean_object* v___y_4841_; lean_object* v___y_4849_; lean_object* v___x_4853_; 
v_a_4838_ = lean_ctor_get(v_x_4675_, 0);
lean_inc(v_a_4838_);
lean_dec_ref_known(v_x_4675_, 1);
v___x_4853_ = l_Lasm_JS_Data_field(v_a_4838_, v___x_4674_);
if (lean_obj_tag(v___x_4853_) == 4)
{
lean_object* v_s_4854_; 
v_s_4854_ = lean_ctor_get(v___x_4853_, 0);
lean_inc_ref(v_s_4854_);
lean_dec_ref_known(v___x_4853_, 1);
v___y_4849_ = v_s_4854_;
goto v___jp_4848_;
}
else
{
lean_object* v___x_4855_; 
lean_dec(v___x_4853_);
v___x_4855_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4849_ = v___x_4855_;
goto v___jp_4848_;
}
v___jp_4839_:
{
lean_object* v___x_4842_; 
v___x_4842_ = l_Lasm_JS_Data_field(v_a_4838_, v___x_4672_);
lean_dec(v_a_4838_);
if (lean_obj_tag(v___x_4842_) == 7)
{
lean_object* v_items_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; 
v_items_4843_ = lean_ctor_get(v___x_4842_, 0);
lean_inc_ref(v_items_4843_);
lean_dec_ref_known(v___x_4842_, 1);
v___x_4844_ = lean_unsigned_to_nat(0u);
v___x_4845_ = lean_array_get_size(v_items_4843_);
v___x_4846_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4843_, v___x_4844_, v___x_4845_);
lean_dec_ref(v_items_4843_);
lean_inc_ref(v___y_4840_);
v___y_4807_ = v___y_4840_;
v___y_4808_ = v___y_4840_;
v___y_4809_ = v___y_4841_;
v___y_4810_ = v___x_4846_;
goto v___jp_4806_;
}
else
{
lean_object* v___x_4847_; 
lean_dec(v___x_4842_);
v___x_4847_ = ((lean_object*)(l_Lasm_Fetch_joinCookies___closed__0));
lean_inc_ref(v___y_4840_);
v___y_4807_ = v___y_4840_;
v___y_4808_ = v___y_4840_;
v___y_4809_ = v___y_4841_;
v___y_4810_ = v___x_4847_;
goto v___jp_4806_;
}
}
v___jp_4848_:
{
lean_object* v___x_4850_; 
v___x_4850_ = l_Lasm_JS_Data_field(v_a_4838_, v___x_4673_);
if (lean_obj_tag(v___x_4850_) == 4)
{
lean_object* v_s_4851_; 
v_s_4851_ = lean_ctor_get(v___x_4850_, 0);
lean_inc_ref(v_s_4851_);
lean_dec_ref_known(v___x_4850_, 1);
v___y_4840_ = v___y_4849_;
v___y_4841_ = v_s_4851_;
goto v___jp_4839_;
}
else
{
lean_object* v___x_4852_; 
lean_dec(v___x_4850_);
v___x_4852_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4840_ = v___y_4849_;
v___y_4841_ = v___x_4852_;
goto v___jp_4839_;
}
}
}
v___jp_4677_:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4682_, 0, v_val_4681_);
v___x_4683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4680_, v___y_4679_, v___x_4682_, v___y_4678_);
return v___x_4683_;
}
v___jp_4684_:
{
if (v___y_4697_ == 0)
{
lean_object* v___x_4699_; lean_object* v___f_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4692_);
lean_dec_ref(v___y_4690_);
lean_dec_ref(v___y_4689_);
lean_dec(v___y_4688_);
lean_dec(v___y_4687_);
lean_dec_ref(v___y_4686_);
lean_dec_ref(v___y_4685_);
lean_dec(v_a_4670_);
lean_dec(v_fst_4669_);
lean_dec(v_a_4668_);
lean_dec_ref(v_options_4667_);
v___x_4699_ = l_ByteArray_empty;
v___f_4700_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4701_, 0, v___y_4696_);
lean_ctor_set(v___x_4701_, 1, v___y_4698_);
lean_ctor_set(v___x_4701_, 2, v___y_4695_);
lean_ctor_set(v___x_4701_, 3, v___x_4699_);
lean_ctor_set(v___x_4701_, 4, v___f_4700_);
v___x_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
v___x_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
v___x_4704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4693_, v___y_4697_, v___x_4703_, v___y_4691_);
return v___x_4704_;
}
else
{
lean_object* v___x_4705_; lean_object* v___f_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; uint8_t v___x_4710_; 
lean_dec_ref(v___y_4695_);
lean_dec_ref(v___y_4691_);
v___x_4705_ = l_ByteArray_empty;
v___f_4706_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4698_);
v___x_4707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4707_, 0, v___y_4696_);
lean_ctor_set(v___x_4707_, 1, v___y_4698_);
lean_ctor_set(v___x_4707_, 2, v___y_4692_);
lean_ctor_set(v___x_4707_, 3, v___x_4705_);
lean_ctor_set(v___x_4707_, 4, v___f_4706_);
v___x_4708_ = l_Lasm_Fetch_Request_path(v___x_4707_);
v___x_4709_ = lean_apply_1(v_options_4667_, v___x_4708_);
v___x_4710_ = lean_unbox(v___x_4709_);
if (v___x_4710_ == 0)
{
lean_object* v___f_4711_; lean_object* v___f_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; uint8_t v___x_4716_; lean_object* v___x_4717_; 
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4690_);
lean_dec(v_a_4670_);
lean_inc(v___y_4687_);
v___f_4711_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4711_, 0, v___y_4685_);
lean_closure_set(v___f_4711_, 1, v___y_4698_);
lean_closure_set(v___f_4711_, 2, v___y_4686_);
lean_closure_set(v___f_4711_, 3, v___f_4706_);
lean_closure_set(v___f_4711_, 4, v___y_4687_);
lean_closure_set(v___f_4711_, 5, v___x_4709_);
lean_closure_set(v___f_4711_, 6, v___y_4689_);
v___f_4712_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4712_, 0, v___y_4687_);
lean_closure_set(v___f_4712_, 1, v___x_4709_);
lean_closure_set(v___f_4712_, 2, v___f_4711_);
lean_closure_set(v___f_4712_, 3, v___y_4688_);
lean_closure_set(v___f_4712_, 4, v_a_4668_);
v___x_4713_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4714_ = lean_mk_empty_array_with_capacity(v___y_4693_);
v___x_4715_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4669_, v___x_4713_, v___x_4714_);
v___x_4716_ = lean_unbox(v___x_4709_);
v___x_4717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4693_, v___x_4716_, v___x_4715_, v___f_4712_);
return v___x_4717_;
}
else
{
uint8_t v___x_4718_; lean_object* v___x_4719_; lean_object* v___f_4720_; lean_object* v___x_4721_; lean_object* v___f_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
lean_dec_ref(v___y_4689_);
lean_dec(v___y_4688_);
lean_dec(v_a_4668_);
v___x_4718_ = 0;
v___x_4719_ = lean_box(v___x_4718_);
lean_inc(v___y_4687_);
v___f_4720_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4720_, 0, v___y_4685_);
lean_closure_set(v___f_4720_, 1, v___y_4698_);
lean_closure_set(v___f_4720_, 2, v___y_4686_);
lean_closure_set(v___f_4720_, 3, v___x_4705_);
lean_closure_set(v___f_4720_, 4, v___y_4687_);
lean_closure_set(v___f_4720_, 5, v___x_4719_);
lean_closure_set(v___f_4720_, 6, v___y_4690_);
v___x_4721_ = lean_box(v___x_4718_);
v___f_4722_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4722_, 0, v___y_4687_);
lean_closure_set(v___f_4722_, 1, v___x_4721_);
lean_closure_set(v___f_4722_, 2, v___f_4720_);
v___x_4723_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4724_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4725_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4725_, 0, v_fst_4669_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = lean_mk_empty_array_with_capacity(v___y_4694_);
lean_dec(v___y_4694_);
v___x_4727_ = lean_array_push(v___x_4726_, v___x_4725_);
v___x_4728_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4670_, v___x_4723_, v___x_4727_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4736_; 
v_a_4729_ = lean_ctor_get(v___x_4728_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4728_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4731_ = v___x_4728_;
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v___x_4728_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4734_; 
if (v_isShared_4732_ == 0)
{
lean_ctor_set_tag(v___x_4731_, 1);
v___x_4734_ = v___x_4731_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4735_; 
v_reuseFailAlloc_4735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4735_, 0, v_a_4729_);
v___x_4734_ = v_reuseFailAlloc_4735_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
v___y_4678_ = v___f_4722_;
v___y_4679_ = v___x_4718_;
v___y_4680_ = v___y_4693_;
v_val_4681_ = v___x_4734_;
goto v___jp_4677_;
}
}
}
else
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4744_; 
v_a_4737_ = lean_ctor_get(v___x_4728_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4728_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4739_ = v___x_4728_;
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4728_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
lean_ctor_set_tag(v___x_4739_, 0);
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
v___y_4678_ = v___f_4722_;
v___y_4679_ = v___x_4718_;
v___y_4680_ = v___y_4693_;
v_val_4681_ = v___x_4742_;
goto v___jp_4677_;
}
}
}
}
}
}
v___jp_4745_:
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; uint8_t v___x_4764_; 
v___x_4761_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4762_ = lean_string_utf8_byte_size(v___y_4759_);
v___x_4763_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4764_ = lean_nat_dec_le(v___x_4763_, v___x_4762_);
if (v___x_4764_ == 0)
{
lean_dec_ref(v___y_4753_);
v___y_4685_ = v___y_4746_;
v___y_4686_ = v___y_4747_;
v___y_4687_ = v___y_4748_;
v___y_4688_ = v___y_4749_;
v___y_4689_ = v___y_4750_;
v___y_4690_ = v___y_4751_;
v___y_4691_ = v___y_4752_;
v___y_4692_ = v___y_4755_;
v___y_4693_ = v___y_4754_;
v___y_4694_ = v___y_4756_;
v___y_4695_ = v___y_4758_;
v___y_4696_ = v___y_4757_;
v___y_4697_ = v___y_4760_;
v___y_4698_ = v___y_4759_;
goto v___jp_4684_;
}
else
{
uint8_t v___x_4765_; 
v___x_4765_ = lean_string_memcmp(v___y_4759_, v___x_4761_, v___y_4754_, v___y_4754_, v___x_4763_);
if (v___x_4765_ == 0)
{
lean_dec_ref(v___y_4753_);
v___y_4685_ = v___y_4746_;
v___y_4686_ = v___y_4747_;
v___y_4687_ = v___y_4748_;
v___y_4688_ = v___y_4749_;
v___y_4689_ = v___y_4750_;
v___y_4690_ = v___y_4751_;
v___y_4691_ = v___y_4752_;
v___y_4692_ = v___y_4755_;
v___y_4693_ = v___y_4754_;
v___y_4694_ = v___y_4756_;
v___y_4695_ = v___y_4758_;
v___y_4696_ = v___y_4757_;
v___y_4697_ = v___y_4760_;
v___y_4698_ = v___y_4759_;
goto v___jp_4684_;
}
else
{
lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4766_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4767_ = lean_string_append(v___x_4766_, v___y_4753_);
lean_dec_ref(v___y_4753_);
v___x_4768_ = lean_string_append(v___x_4767_, v___y_4759_);
lean_dec_ref(v___y_4759_);
v___y_4685_ = v___y_4746_;
v___y_4686_ = v___y_4747_;
v___y_4687_ = v___y_4748_;
v___y_4688_ = v___y_4749_;
v___y_4689_ = v___y_4750_;
v___y_4690_ = v___y_4751_;
v___y_4691_ = v___y_4752_;
v___y_4692_ = v___y_4755_;
v___y_4693_ = v___y_4754_;
v___y_4694_ = v___y_4756_;
v___y_4695_ = v___y_4758_;
v___y_4696_ = v___y_4757_;
v___y_4697_ = v___y_4760_;
v___y_4698_ = v___x_4768_;
goto v___jp_4684_;
}
}
}
v___jp_4769_:
{
lean_object* v___x_4784_; uint8_t v___x_4785_; 
v___x_4784_ = lean_array_get_size(v___y_4780_);
v___x_4785_ = lean_nat_dec_lt(v___y_4778_, v___x_4784_);
if (v___x_4785_ == 0)
{
v___y_4746_ = v___y_4770_;
v___y_4747_ = v___y_4771_;
v___y_4748_ = v___y_4772_;
v___y_4749_ = v___y_4773_;
v___y_4750_ = v___y_4774_;
v___y_4751_ = v___y_4775_;
v___y_4752_ = v___y_4776_;
v___y_4753_ = v___y_4783_;
v___y_4754_ = v___y_4778_;
v___y_4755_ = v___y_4777_;
v___y_4756_ = v___y_4779_;
v___y_4757_ = v___y_4781_;
v___y_4758_ = v___y_4780_;
v___y_4759_ = v___y_4782_;
v___y_4760_ = v___x_4785_;
goto v___jp_4745_;
}
else
{
if (v___x_4785_ == 0)
{
v___y_4746_ = v___y_4770_;
v___y_4747_ = v___y_4771_;
v___y_4748_ = v___y_4772_;
v___y_4749_ = v___y_4773_;
v___y_4750_ = v___y_4774_;
v___y_4751_ = v___y_4775_;
v___y_4752_ = v___y_4776_;
v___y_4753_ = v___y_4783_;
v___y_4754_ = v___y_4778_;
v___y_4755_ = v___y_4777_;
v___y_4756_ = v___y_4779_;
v___y_4757_ = v___y_4781_;
v___y_4758_ = v___y_4780_;
v___y_4759_ = v___y_4782_;
v___y_4760_ = v___x_4785_;
goto v___jp_4745_;
}
else
{
size_t v___x_4786_; size_t v___x_4787_; uint8_t v___x_4788_; 
v___x_4786_ = ((size_t)0ULL);
v___x_4787_ = lean_usize_of_nat(v___x_4784_);
v___x_4788_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4780_, v___x_4786_, v___x_4787_);
v___y_4746_ = v___y_4770_;
v___y_4747_ = v___y_4771_;
v___y_4748_ = v___y_4772_;
v___y_4749_ = v___y_4773_;
v___y_4750_ = v___y_4774_;
v___y_4751_ = v___y_4775_;
v___y_4752_ = v___y_4776_;
v___y_4753_ = v___y_4783_;
v___y_4754_ = v___y_4778_;
v___y_4755_ = v___y_4777_;
v___y_4756_ = v___y_4779_;
v___y_4757_ = v___y_4781_;
v___y_4758_ = v___y_4780_;
v___y_4759_ = v___y_4782_;
v___y_4760_ = v___x_4788_;
goto v___jp_4745_;
}
}
}
v___jp_4789_:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4803_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4804_ = l_Nat_reprFast(v___y_4671_);
v___x_4805_ = lean_string_append(v___x_4803_, v___x_4804_);
lean_dec_ref(v___x_4804_);
v___y_4770_ = v___y_4790_;
v___y_4771_ = v___y_4791_;
v___y_4772_ = v___y_4792_;
v___y_4773_ = v___y_4793_;
v___y_4774_ = v___y_4794_;
v___y_4775_ = v___y_4796_;
v___y_4776_ = v___y_4795_;
v___y_4777_ = v___y_4798_;
v___y_4778_ = v___y_4797_;
v___y_4779_ = v___y_4799_;
v___y_4780_ = v___y_4801_;
v___y_4781_ = v___y_4800_;
v___y_4782_ = v___y_4802_;
v___y_4783_ = v___x_4805_;
goto v___jp_4769_;
}
v___jp_4806_:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; size_t v_sz_4819_; size_t v___x_4820_; lean_object* v___x_4821_; lean_object* v_fst_4822_; lean_object* v___f_4823_; lean_object* v___f_4824_; lean_object* v___f_4825_; 
v___x_4811_ = lean_unsigned_to_nat(0u);
v___x_4812_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4813_ = lean_array_get_size(v___y_4810_);
v___x_4814_ = lean_unsigned_to_nat(1u);
v___x_4815_ = lean_nat_shiftr(v___x_4813_, v___x_4814_);
v___x_4816_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4811_);
lean_ctor_set(v___x_4816_, 1, v___x_4815_);
lean_ctor_set(v___x_4816_, 2, v___x_4814_);
v___x_4817_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4810_, v___x_4816_, v___x_4812_, v___x_4811_);
lean_dec_ref_known(v___x_4816_, 3);
lean_dec_ref(v___y_4810_);
v___x_4818_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4819_ = lean_array_size(v___x_4817_);
v___x_4820_ = ((size_t)0ULL);
v___x_4821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4817_, v_sz_4819_, v___x_4820_, v___x_4818_);
v_fst_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_fst_4822_);
lean_dec_ref(v___x_4821_);
lean_inc_ref(v___y_4807_);
v___f_4823_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4823_, 0, v___x_4811_);
lean_closure_set(v___f_4823_, 1, v_snd_4663_);
lean_closure_set(v___f_4823_, 2, v___y_4807_);
lean_closure_set(v___f_4823_, 3, v___f_4664_);
lean_closure_set(v___f_4823_, 4, v___f_4665_);
v___f_4824_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4824_, 0, v_handler_4666_);
lean_closure_set(v___f_4824_, 1, v___x_4811_);
lean_closure_set(v___f_4824_, 2, v___f_4823_);
v___f_4825_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4825_, 0, v___f_4824_);
if (lean_obj_tag(v_fst_4822_) == 0)
{
lean_inc_ref_n(v___f_4825_, 2);
lean_inc_ref(v___x_4817_);
v___y_4790_ = v___y_4807_;
v___y_4791_ = v___x_4817_;
v___y_4792_ = v___x_4811_;
v___y_4793_ = v___x_4814_;
v___y_4794_ = v___f_4825_;
v___y_4795_ = v___f_4825_;
v___y_4796_ = v___f_4825_;
v___y_4797_ = v___x_4811_;
v___y_4798_ = v___x_4812_;
v___y_4799_ = v___x_4814_;
v___y_4800_ = v___y_4808_;
v___y_4801_ = v___x_4817_;
v___y_4802_ = v___y_4809_;
goto v___jp_4789_;
}
else
{
lean_object* v_val_4826_; 
v_val_4826_ = lean_ctor_get(v_fst_4822_, 0);
lean_inc(v_val_4826_);
lean_dec_ref_known(v_fst_4822_, 1);
if (lean_obj_tag(v_val_4826_) == 0)
{
lean_inc_ref_n(v___f_4825_, 2);
lean_inc_ref(v___x_4817_);
v___y_4790_ = v___y_4807_;
v___y_4791_ = v___x_4817_;
v___y_4792_ = v___x_4811_;
v___y_4793_ = v___x_4814_;
v___y_4794_ = v___f_4825_;
v___y_4795_ = v___f_4825_;
v___y_4796_ = v___f_4825_;
v___y_4797_ = v___x_4811_;
v___y_4798_ = v___x_4812_;
v___y_4799_ = v___x_4814_;
v___y_4800_ = v___y_4808_;
v___y_4801_ = v___x_4817_;
v___y_4802_ = v___y_4809_;
goto v___jp_4789_;
}
else
{
lean_object* v_val_4827_; lean_object* v_snd_4828_; 
lean_dec(v___y_4671_);
v_val_4827_ = lean_ctor_get(v_val_4826_, 0);
lean_inc(v_val_4827_);
lean_dec_ref_known(v_val_4826_, 1);
v_snd_4828_ = lean_ctor_get(v_val_4827_, 1);
lean_inc(v_snd_4828_);
lean_dec(v_val_4827_);
lean_inc_ref_n(v___f_4825_, 2);
lean_inc_ref(v___x_4817_);
v___y_4770_ = v___y_4807_;
v___y_4771_ = v___x_4817_;
v___y_4772_ = v___x_4811_;
v___y_4773_ = v___x_4814_;
v___y_4774_ = v___f_4825_;
v___y_4775_ = v___f_4825_;
v___y_4776_ = v___f_4825_;
v___y_4777_ = v___x_4812_;
v___y_4778_ = v___x_4811_;
v___y_4779_ = v___x_4814_;
v___y_4780_ = v___x_4817_;
v___y_4781_ = v___y_4808_;
v___y_4782_ = v___y_4809_;
v___y_4783_ = v_snd_4828_;
goto v___jp_4769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4856_, lean_object* v___f_4857_, lean_object* v___f_4858_, lean_object* v_handler_4859_, lean_object* v_options_4860_, lean_object* v_a_4861_, lean_object* v_fst_4862_, lean_object* v_a_4863_, lean_object* v___y_4864_, lean_object* v___x_4865_, lean_object* v___x_4866_, lean_object* v___x_4867_, lean_object* v_x_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4856_, v___f_4857_, v___f_4858_, v_handler_4859_, v_options_4860_, v_a_4861_, v_fst_4862_, v_a_4863_, v___y_4864_, v___x_4865_, v___x_4866_, v___x_4867_, v_x_4868_);
lean_dec_ref(v___x_4867_);
lean_dec_ref(v___x_4866_);
lean_dec_ref(v___x_4865_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4880_, lean_object* v___f_4881_, lean_object* v_handler_4882_, lean_object* v_options_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_, lean_object* v___y_4886_, lean_object* v_____x_4887_){
_start:
{
lean_object* v_fst_4889_; lean_object* v_snd_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___f_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; uint8_t v___x_4897_; lean_object* v_val_4899_; lean_object* v___x_4902_; 
v_fst_4889_ = lean_ctor_get(v_____x_4887_, 0);
lean_inc_n(v_fst_4889_, 2);
v_snd_4890_ = lean_ctor_get(v_____x_4887_, 1);
lean_inc(v_snd_4890_);
lean_dec_ref(v_____x_4887_);
v___x_4891_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4892_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4893_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4894_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4894_, 0, v_snd_4890_);
lean_closure_set(v___f_4894_, 1, v___f_4880_);
lean_closure_set(v___f_4894_, 2, v___f_4881_);
lean_closure_set(v___f_4894_, 3, v_handler_4882_);
lean_closure_set(v___f_4894_, 4, v_options_4883_);
lean_closure_set(v___f_4894_, 5, v_a_4884_);
lean_closure_set(v___f_4894_, 6, v_fst_4889_);
lean_closure_set(v___f_4894_, 7, v_a_4885_);
lean_closure_set(v___f_4894_, 8, v___y_4886_);
lean_closure_set(v___f_4894_, 9, v___x_4893_);
lean_closure_set(v___f_4894_, 10, v___x_4892_);
lean_closure_set(v___f_4894_, 11, v___x_4891_);
v___x_4895_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4896_ = lean_unsigned_to_nat(0u);
v___x_4897_ = 0;
v___x_4902_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4889_, v___x_4895_);
if (lean_obj_tag(v___x_4902_) == 0)
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
v_a_4903_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4902_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4902_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
lean_ctor_set_tag(v___x_4905_, 1);
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
v_val_4899_ = v___x_4908_;
goto v___jp_4898_;
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
v_a_4911_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4902_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4902_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 0);
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
v_val_4899_ = v___x_4916_;
goto v___jp_4898_;
}
}
}
v___jp_4898_:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4900_, 0, v_val_4899_);
v___x_4901_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4896_, v___x_4897_, v___x_4900_, v___f_4894_);
return v___x_4901_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4919_, lean_object* v___f_4920_, lean_object* v_handler_4921_, lean_object* v_options_4922_, lean_object* v_a_4923_, lean_object* v_a_4924_, lean_object* v___y_4925_, lean_object* v_____x_4926_, lean_object* v___y_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4919_, v___f_4920_, v_handler_4921_, v_options_4922_, v_a_4923_, v_a_4924_, v___y_4925_, v_____x_4926_);
return v_res_4928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4929_, lean_object* v_x_4930_){
_start:
{
if (lean_obj_tag(v_x_4930_) == 0)
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4940_; 
lean_dec_ref(v___f_4929_);
v_a_4932_ = lean_ctor_get(v_x_4930_, 0);
v_isSharedCheck_4940_ = !lean_is_exclusive(v_x_4930_);
if (v_isSharedCheck_4940_ == 0)
{
v___x_4934_ = v_x_4930_;
v_isShared_4935_ = v_isSharedCheck_4940_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v_x_4930_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4940_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
lean_object* v___x_4938_; 
v___x_4938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4937_);
return v___x_4938_;
}
}
}
else
{
lean_object* v_a_4941_; lean_object* v___x_4942_; 
v_a_4941_ = lean_ctor_get(v_x_4930_, 0);
lean_inc(v_a_4941_);
lean_dec_ref_known(v_x_4930_, 1);
v___x_4942_ = lean_apply_2(v___f_4929_, v_a_4941_, lean_box(0));
return v___x_4942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4943_, lean_object* v_x_4944_, lean_object* v___y_4945_){
_start:
{
lean_object* v_res_4946_; 
v_res_4946_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4943_, v_x_4944_);
return v_res_4946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4954_, lean_object* v___f_4955_, lean_object* v_args_4956_){
_start:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; uint8_t v___x_4965_; 
v___x_4963_ = lean_unsigned_to_nat(0u);
v___x_4964_ = lean_array_get_size(v_args_4956_);
v___x_4965_ = lean_nat_dec_lt(v___x_4963_, v___x_4964_);
if (v___x_4965_ == 0)
{
lean_dec_ref(v___f_4955_);
goto v___jp_4958_;
}
else
{
lean_object* v___x_4966_; 
v___x_4966_ = lean_array_fget_borrowed(v_args_4956_, v___x_4963_);
if (lean_obj_tag(v___x_4966_) == 9)
{
lean_object* v_value_4967_; lean_object* v___x_4968_; uint8_t v___x_4969_; 
v_value_4967_ = lean_ctor_get(v___x_4966_, 0);
v___x_4968_ = lean_unsigned_to_nat(1u);
v___x_4969_ = lean_nat_dec_lt(v___x_4968_, v___x_4964_);
if (v___x_4969_ == 0)
{
lean_dec_ref(v___f_4955_);
goto v___jp_4958_;
}
else
{
lean_object* v___x_4970_; 
v___x_4970_ = lean_array_fget(v_args_4956_, v___x_4968_);
if (lean_obj_tag(v___x_4970_) == 9)
{
lean_object* v_value_4971_; lean_object* v___x_4973_; uint8_t v_isShared_4974_; uint8_t v_isSharedCheck_4982_; 
lean_dec_ref(v___f_4954_);
v_value_4971_ = lean_ctor_get(v___x_4970_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v___x_4970_);
if (v_isSharedCheck_4982_ == 0)
{
lean_object* v_unused_4983_; 
v_unused_4983_ = lean_ctor_get(v___x_4970_, 1);
lean_dec(v_unused_4983_);
v___x_4973_ = v___x_4970_;
v_isShared_4974_ = v_isSharedCheck_4982_;
goto v_resetjp_4972_;
}
else
{
lean_inc(v_value_4971_);
lean_dec(v___x_4970_);
v___x_4973_ = lean_box(0);
v_isShared_4974_ = v_isSharedCheck_4982_;
goto v_resetjp_4972_;
}
v_resetjp_4972_:
{
lean_object* v___x_4976_; 
lean_inc(v_value_4967_);
if (v_isShared_4974_ == 0)
{
lean_ctor_set_tag(v___x_4973_, 0);
lean_ctor_set(v___x_4973_, 1, v_value_4971_);
lean_ctor_set(v___x_4973_, 0, v_value_4967_);
v___x_4976_ = v___x_4973_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_value_4967_);
lean_ctor_set(v_reuseFailAlloc_4981_, 1, v_value_4971_);
v___x_4976_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
uint8_t v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___x_4977_ = 0;
v___x_4978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4976_);
v___x_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4978_);
v___x_4980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4963_, v___x_4977_, v___x_4979_, v___f_4955_);
return v___x_4980_;
}
}
}
else
{
lean_dec(v___x_4970_);
lean_dec_ref(v___f_4955_);
goto v___jp_4958_;
}
}
}
else
{
lean_dec_ref(v___f_4955_);
goto v___jp_4958_;
}
}
v___jp_4958_:
{
lean_object* v___x_4959_; uint8_t v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4959_ = lean_unsigned_to_nat(0u);
v___x_4960_ = 0;
v___x_4961_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4962_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4959_, v___x_4960_, v___x_4961_, v___f_4954_);
return v___x_4962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4984_, lean_object* v___f_4985_, lean_object* v_args_4986_, lean_object* v___y_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4984_, v___f_4985_, v_args_4986_);
lean_dec_ref(v_args_4986_);
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4989_){
_start:
{
lean_object* v___x_4991_; lean_object* v_putStr_4992_; lean_object* v___x_4993_; 
v___x_4991_ = lean_get_stdout();
v_putStr_4992_ = lean_ctor_get(v___x_4991_, 4);
lean_inc_ref(v_putStr_4992_);
lean_dec_ref(v___x_4991_);
v___x_4993_ = lean_apply_2(v_putStr_4992_, v_s_4989_, lean_box(0));
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4994_, lean_object* v_a_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4994_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4997_){
_start:
{
uint32_t v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_4999_ = 10;
v___x_5000_ = lean_string_push(v_s_4997_, v___x_4999_);
v___x_5001_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_5000_);
return v___x_5001_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_5002_, lean_object* v_a_5003_){
_start:
{
lean_object* v_res_5004_; 
v_res_5004_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_5002_);
return v_res_5004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___f_5009_, lean_object* v_x_5010_){
_start:
{
lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; uint8_t v___x_5019_; lean_object* v_val_5021_; lean_object* v___x_5024_; 
v___x_5012_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_5013_ = lean_string_append(v___x_5012_, v___y_5007_);
v___x_5014_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_5015_ = lean_string_append(v___x_5013_, v___x_5014_);
v___x_5016_ = l_Nat_reprFast(v___y_5008_);
v___x_5017_ = lean_string_append(v___x_5015_, v___x_5016_);
lean_dec_ref(v___x_5016_);
v___x_5018_ = lean_unsigned_to_nat(0u);
v___x_5019_ = 0;
v___x_5024_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_5017_);
if (lean_obj_tag(v___x_5024_) == 0)
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
v_a_5025_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v___x_5024_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_5024_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
lean_ctor_set_tag(v___x_5027_, 1);
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
v_val_5021_ = v___x_5030_;
goto v___jp_5020_;
}
}
}
else
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
v_a_5033_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_5024_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_5024_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
lean_ctor_set_tag(v___x_5035_, 0);
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
v_val_5021_ = v___x_5038_;
goto v___jp_5020_;
}
}
}
v___jp_5020_:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; 
v___x_5022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5022_, 0, v_val_5021_);
v___x_5023_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5018_, v___x_5019_, v___x_5022_, v___f_5009_);
return v___x_5023_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___f_5043_, lean_object* v_x_5044_, lean_object* v___y_5045_){
_start:
{
lean_object* v_res_5046_; 
v_res_5046_ = l_Lasm_Fetch_serveNode___lam__21(v___y_5041_, v___y_5042_, v___f_5043_, v_x_5044_);
lean_dec_ref(v_x_5044_);
lean_dec_ref(v___y_5041_);
return v_res_5046_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5048_ = lean_unsigned_to_nat(0u);
v___x_5049_ = lean_nat_to_int(v___x_5048_);
return v___x_5049_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_5050_; lean_object* v___x_5051_; 
v___x_5050_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5051_ = lean_nat_abs(v___x_5050_);
return v___x_5051_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; uint8_t v___x_5054_; 
v___x_5052_ = lean_cstr_to_nat("9007199254740991");
v___x_5053_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_5054_ = lean_nat_dec_le(v___x_5053_, v___x_5052_);
return v___x_5054_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_5055_; lean_object* v___x_5056_; 
v___x_5055_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5056_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5056_, 0, v___x_5055_);
return v___x_5056_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_5057_; double v___x_5058_; 
v___x_5057_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_5058_ = l_Float_ofInt(v___x_5057_);
return v___x_5058_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_5059_; lean_object* v___x_5060_; 
v___x_5059_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_5060_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5060_, 0, v___x_5059_);
return v___x_5060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_5061_, lean_object* v___x_5062_, lean_object* v_a_5063_, lean_object* v_x_5064_){
_start:
{
uint8_t v___y_5067_; lean_object* v___y_5068_; lean_object* v_val_5069_; lean_object* v___x_5072_; lean_object* v___y_5074_; uint8_t v___x_5095_; 
v___x_5072_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_5095_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_5095_ == 0)
{
lean_object* v___x_5096_; 
v___x_5096_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_5074_ = v___x_5096_;
goto v___jp_5073_;
}
else
{
lean_object* v___x_5097_; 
v___x_5097_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_5074_ = v___x_5097_;
goto v___jp_5073_;
}
v___jp_5066_:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; 
v___x_5070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5070_, 0, v_val_5069_);
v___x_5071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5068_, v___y_5067_, v___x_5070_, v___f_5061_);
return v___x_5071_;
}
v___jp_5073_:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; uint8_t v___x_5077_; lean_object* v___x_5078_; 
lean_inc(v___y_5074_);
v___x_5075_ = lean_array_push(v___x_5062_, v___y_5074_);
v___x_5076_ = lean_unsigned_to_nat(0u);
v___x_5077_ = 0;
v___x_5078_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5063_, v___x_5072_, v___x_5075_);
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_object* v_a_5079_; lean_object* v___x_5081_; uint8_t v_isShared_5082_; uint8_t v_isSharedCheck_5086_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5086_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5086_ == 0)
{
v___x_5081_ = v___x_5078_;
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
else
{
lean_inc(v_a_5079_);
lean_dec(v___x_5078_);
v___x_5081_ = lean_box(0);
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
v_resetjp_5080_:
{
lean_object* v___x_5084_; 
if (v_isShared_5082_ == 0)
{
lean_ctor_set_tag(v___x_5081_, 1);
v___x_5084_ = v___x_5081_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v_a_5079_);
v___x_5084_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
v___y_5067_ = v___x_5077_;
v___y_5068_ = v___x_5076_;
v_val_5069_ = v___x_5084_;
goto v___jp_5066_;
}
}
}
else
{
lean_object* v_a_5087_; lean_object* v___x_5089_; uint8_t v_isShared_5090_; uint8_t v_isSharedCheck_5094_; 
v_a_5087_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5094_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5089_ = v___x_5078_;
v_isShared_5090_ = v_isSharedCheck_5094_;
goto v_resetjp_5088_;
}
else
{
lean_inc(v_a_5087_);
lean_dec(v___x_5078_);
v___x_5089_ = lean_box(0);
v_isShared_5090_ = v_isSharedCheck_5094_;
goto v_resetjp_5088_;
}
v_resetjp_5088_:
{
lean_object* v___x_5092_; 
if (v_isShared_5090_ == 0)
{
lean_ctor_set_tag(v___x_5089_, 0);
v___x_5092_ = v___x_5089_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v_a_5087_);
v___x_5092_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
v___y_5067_ = v___x_5077_;
v___y_5068_ = v___x_5076_;
v_val_5069_ = v___x_5092_;
goto v___jp_5066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_5098_, lean_object* v___x_5099_, lean_object* v_a_5100_, lean_object* v_x_5101_, lean_object* v___y_5102_){
_start:
{
lean_object* v_res_5103_; 
v_res_5103_ = l_Lasm_Fetch_serveNode___lam__23(v___f_5098_, v___x_5099_, v_a_5100_, v_x_5101_);
lean_dec_ref(v_x_5101_);
return v_res_5103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_5104_, lean_object* v___x_5105_, lean_object* v___x_5106_, lean_object* v___f_5107_, lean_object* v_a_5108_, lean_object* v_x_5109_){
_start:
{
lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; uint8_t v___x_5115_; lean_object* v_val_5117_; lean_object* v___x_5120_; 
v___x_5111_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_5112_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5112_, 0, v_a_5104_);
lean_ctor_set(v___x_5112_, 1, v___x_5105_);
v___x_5113_ = lean_array_push(v___x_5106_, v___x_5112_);
v___x_5114_ = lean_unsigned_to_nat(0u);
v___x_5115_ = 0;
v___x_5120_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5108_, v___x_5111_, v___x_5113_);
if (lean_obj_tag(v___x_5120_) == 0)
{
lean_object* v_a_5121_; lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5128_; 
v_a_5121_ = lean_ctor_get(v___x_5120_, 0);
v_isSharedCheck_5128_ = !lean_is_exclusive(v___x_5120_);
if (v_isSharedCheck_5128_ == 0)
{
v___x_5123_ = v___x_5120_;
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
else
{
lean_inc(v_a_5121_);
lean_dec(v___x_5120_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5126_; 
if (v_isShared_5124_ == 0)
{
lean_ctor_set_tag(v___x_5123_, 1);
v___x_5126_ = v___x_5123_;
goto v_reusejp_5125_;
}
else
{
lean_object* v_reuseFailAlloc_5127_; 
v_reuseFailAlloc_5127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5127_, 0, v_a_5121_);
v___x_5126_ = v_reuseFailAlloc_5127_;
goto v_reusejp_5125_;
}
v_reusejp_5125_:
{
v_val_5117_ = v___x_5126_;
goto v___jp_5116_;
}
}
}
else
{
lean_object* v_a_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5136_; 
v_a_5129_ = lean_ctor_get(v___x_5120_, 0);
v_isSharedCheck_5136_ = !lean_is_exclusive(v___x_5120_);
if (v_isSharedCheck_5136_ == 0)
{
v___x_5131_ = v___x_5120_;
v_isShared_5132_ = v_isSharedCheck_5136_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_a_5129_);
lean_dec(v___x_5120_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5136_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v___x_5134_; 
if (v_isShared_5132_ == 0)
{
lean_ctor_set_tag(v___x_5131_, 0);
v___x_5134_ = v___x_5131_;
goto v_reusejp_5133_;
}
else
{
lean_object* v_reuseFailAlloc_5135_; 
v_reuseFailAlloc_5135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5135_, 0, v_a_5129_);
v___x_5134_ = v_reuseFailAlloc_5135_;
goto v_reusejp_5133_;
}
v_reusejp_5133_:
{
v_val_5117_ = v___x_5134_;
goto v___jp_5116_;
}
}
}
v___jp_5116_:
{
lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5118_, 0, v_val_5117_);
v___x_5119_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5114_, v___x_5115_, v___x_5118_, v___f_5107_);
return v___x_5119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_5137_, lean_object* v___x_5138_, lean_object* v___x_5139_, lean_object* v___f_5140_, lean_object* v_a_5141_, lean_object* v_x_5142_, lean_object* v___y_5143_){
_start:
{
lean_object* v_res_5144_; 
v_res_5144_ = l_Lasm_Fetch_serveNode___lam__24(v_a_5137_, v___x_5138_, v___x_5139_, v___f_5140_, v_a_5141_, v_x_5142_);
lean_dec_ref(v_x_5142_);
return v_res_5144_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_5146_, lean_object* v_a_5147_, lean_object* v_as_x27_5148_, lean_object* v_b_5149_){
_start:
{
if (lean_obj_tag(v_as_x27_5148_) == 0)
{
lean_object* v___x_5151_; 
lean_dec(v_a_5147_);
lean_dec(v_a_5146_);
v___x_5151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5151_, 0, v_b_5149_);
return v___x_5151_;
}
else
{
lean_object* v_head_5152_; lean_object* v_tail_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; 
v_head_5152_ = lean_ctor_get(v_as_x27_5148_, 0);
v_tail_5153_ = lean_ctor_get(v_as_x27_5148_, 1);
v___x_5154_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5155_ = lean_box(0);
v___x_5156_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_5152_);
v___x_5157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5157_, 0, v_head_5152_);
lean_inc(v_a_5146_);
v___x_5158_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5158_, 0, v_a_5146_);
lean_ctor_set(v___x_5158_, 1, v___x_5154_);
v___x_5159_ = lean_unsigned_to_nat(2u);
v___x_5160_ = lean_mk_empty_array_with_capacity(v___x_5159_);
v___x_5161_ = lean_array_push(v___x_5160_, v___x_5157_);
v___x_5162_ = lean_array_push(v___x_5161_, v___x_5158_);
lean_inc(v_a_5147_);
v___x_5163_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5147_, v___x_5156_, v___x_5162_);
if (lean_obj_tag(v___x_5163_) == 0)
{
lean_dec_ref_known(v___x_5163_, 1);
v_as_x27_5148_ = v_tail_5153_;
v_b_5149_ = v___x_5155_;
goto _start;
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5172_; 
lean_dec(v_a_5147_);
lean_dec(v_a_5146_);
v_a_5165_ = lean_ctor_get(v___x_5163_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5167_ = v___x_5163_;
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5163_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
return v___x_5170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_5173_, lean_object* v_a_5174_, lean_object* v_as_x27_5175_, lean_object* v_b_5176_, lean_object* v___y_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5173_, v_a_5174_, v_as_x27_5175_, v_b_5176_);
lean_dec(v_as_x27_5175_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_5180_){
_start:
{
uint32_t v___x_5182_; uint32_t v___x_5183_; uint64_t v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5182_ = 201;
v___x_5183_ = 0;
v___x_5184_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_5185_ = lean_string_to_utf8(v_specifier_5180_);
v___x_5186_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5182_, v___x_5183_, v___x_5184_, v___x_5185_);
lean_dec_ref(v___x_5185_);
if (lean_obj_tag(v___x_5186_) == 0)
{
lean_object* v_a_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
v_a_5187_ = lean_ctor_get(v___x_5186_, 0);
lean_inc(v_a_5187_);
lean_dec_ref_known(v___x_5186_, 1);
v___x_5188_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_5189_ = l_String_quote(v_specifier_5180_);
v___x_5190_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5189_);
v___x_5191_ = lean_unsigned_to_nat(120u);
v___x_5192_ = lean_unsigned_to_nat(0u);
v___x_5193_ = l_Std_Format_pretty(v___x_5190_, v___x_5191_, v___x_5192_, v___x_5192_);
v___x_5194_ = lean_string_append(v___x_5188_, v___x_5193_);
lean_dec_ref(v___x_5193_);
v___x_5195_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_5194_, v_a_5187_);
lean_dec(v_a_5187_);
lean_dec_ref(v___x_5194_);
return v___x_5195_;
}
else
{
lean_object* v_a_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5203_; 
lean_dec_ref(v_specifier_5180_);
v_a_5196_ = lean_ctor_get(v___x_5186_, 0);
v_isSharedCheck_5203_ = !lean_is_exclusive(v___x_5186_);
if (v_isSharedCheck_5203_ == 0)
{
v___x_5198_ = v___x_5186_;
v_isShared_5199_ = v_isSharedCheck_5203_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_a_5196_);
lean_dec(v___x_5186_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5203_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
lean_object* v___x_5201_; 
if (v_isShared_5199_ == 0)
{
v___x_5201_ = v___x_5198_;
goto v_reusejp_5200_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v_a_5196_);
v___x_5201_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5200_;
}
v_reusejp_5200_:
{
return v___x_5201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_5204_, lean_object* v_a_5205_){
_start:
{
lean_object* v_res_5206_; 
v_res_5206_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_5204_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_5232_, lean_object* v_options_5233_){
_start:
{
lean_object* v___f_5235_; lean_object* v___f_5236_; lean_object* v___f_5237_; lean_object* v___f_5238_; lean_object* v___y_5240_; lean_object* v___y_5241_; lean_object* v___y_5242_; lean_object* v___y_5243_; lean_object* v___y_5244_; lean_object* v___y_5245_; lean_object* v___y_5246_; lean_object* v___y_5247_; lean_object* v___x_5301_; lean_object* v___x_5302_; 
v___f_5235_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_5236_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_5237_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_5238_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_5301_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_5302_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5301_);
if (lean_obj_tag(v___x_5302_) == 0)
{
lean_object* v_a_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; 
v_a_5303_ = lean_ctor_get(v___x_5302_, 0);
lean_inc(v_a_5303_);
lean_dec_ref_known(v___x_5302_, 1);
v___x_5304_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_5305_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5304_);
if (lean_obj_tag(v___x_5305_) == 0)
{
lean_object* v_a_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
v_a_5306_ = lean_ctor_get(v___x_5305_, 0);
lean_inc(v_a_5306_);
lean_dec_ref_known(v___x_5305_, 1);
v___x_5307_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_5308_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5306_, v___x_5307_);
if (lean_obj_tag(v___x_5308_) == 0)
{
lean_object* v_a_5309_; lean_object* v___x_5310_; 
v_a_5309_ = lean_ctor_get(v___x_5308_, 0);
lean_inc(v_a_5309_);
lean_dec_ref_known(v___x_5308_, 1);
v___x_5310_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5310_) == 0)
{
lean_object* v_a_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; 
v_a_5311_ = lean_ctor_get(v___x_5310_, 0);
lean_inc(v_a_5311_);
lean_dec_ref_known(v___x_5310_, 1);
v___x_5312_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_5313_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5311_, v___x_5312_);
if (lean_obj_tag(v___x_5313_) == 0)
{
lean_object* v_a_5314_; lean_object* v___y_5316_; lean_object* v___y_5317_; lean_object* v___y_5318_; lean_object* v___y_5368_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___y_5373_; 
v_a_5314_ = lean_ctor_get(v___x_5313_, 0);
lean_inc(v_a_5314_);
lean_dec_ref_known(v___x_5313_, 1);
v___x_5370_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5371_ = lean_io_getenv(v___x_5370_);
if (lean_obj_tag(v___x_5371_) == 0)
{
lean_object* v___x_5382_; 
v___x_5382_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5373_ = v___x_5382_;
goto v___jp_5372_;
}
else
{
lean_object* v_val_5383_; 
v_val_5383_ = lean_ctor_get(v___x_5371_, 0);
lean_inc(v_val_5383_);
lean_dec_ref_known(v___x_5371_, 1);
v___y_5373_ = v_val_5383_;
goto v___jp_5372_;
}
v___jp_5315_:
{
lean_object* v___f_5319_; lean_object* v___f_5320_; lean_object* v___f_5321_; lean_object* v___f_5322_; lean_object* v___x_5323_; 
lean_inc_n(v___y_5318_, 2);
v___f_5319_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_5319_, 0, v___f_5236_);
lean_closure_set(v___f_5319_, 1, v___f_5235_);
lean_closure_set(v___f_5319_, 2, v_handler_5232_);
lean_closure_set(v___f_5319_, 3, v_options_5233_);
lean_closure_set(v___f_5319_, 4, v_a_5314_);
lean_closure_set(v___f_5319_, 5, v_a_5309_);
lean_closure_set(v___f_5319_, 6, v___y_5318_);
v___f_5320_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_5320_, 0, v___f_5319_);
lean_inc_ref(v___f_5320_);
v___f_5321_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_5321_, 0, v___f_5320_);
lean_closure_set(v___f_5321_, 1, v___f_5320_);
v___f_5322_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_5322_, 0, v___y_5316_);
lean_closure_set(v___f_5322_, 1, v___y_5318_);
lean_closure_set(v___f_5322_, 2, v___f_5237_);
v___x_5323_ = l_Lasm_JS_Function_ofFnReply(v___f_5321_);
if (lean_obj_tag(v___x_5323_) == 0)
{
lean_object* v_a_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; 
v_a_5324_ = lean_ctor_get(v___x_5323_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v___x_5323_, 1);
v___x_5325_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_5326_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5327_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5327_, 0, v_a_5324_);
lean_ctor_set(v___x_5327_, 1, v___x_5326_);
v___x_5328_ = lean_unsigned_to_nat(1u);
v___x_5329_ = lean_mk_empty_array_with_capacity(v___x_5328_);
lean_inc_ref(v___x_5329_);
v___x_5330_ = lean_array_push(v___x_5329_, v___x_5327_);
v___x_5331_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_5303_, v___x_5325_, v___x_5330_);
if (lean_obj_tag(v___x_5331_) == 0)
{
lean_object* v_a_5332_; lean_object* v___x_5333_; 
v_a_5332_ = lean_ctor_get(v___x_5331_, 0);
lean_inc(v_a_5332_);
lean_dec_ref_known(v___x_5331_, 1);
v___x_5333_ = l_Lasm_JS_Function_ofFn(v___f_5322_);
if (lean_obj_tag(v___x_5333_) == 0)
{
lean_object* v_a_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; uint8_t v___x_5339_; 
v_a_5334_ = lean_ctor_get(v___x_5333_, 0);
lean_inc(v_a_5334_);
lean_dec_ref_known(v___x_5333_, 1);
v___x_5335_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_5336_ = lean_nat_to_int(v___y_5318_);
v___x_5337_ = lean_nat_abs(v___x_5336_);
v___x_5338_ = lean_cstr_to_nat("9007199254740991");
v___x_5339_ = lean_nat_dec_le(v___x_5337_, v___x_5338_);
lean_dec(v___x_5337_);
if (v___x_5339_ == 0)
{
lean_object* v___x_5340_; 
v___x_5340_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5336_);
v___y_5240_ = v___x_5326_;
v___y_5241_ = v___x_5329_;
v___y_5242_ = v_a_5332_;
v___y_5243_ = v___x_5335_;
v___y_5244_ = v___x_5326_;
v___y_5245_ = v___y_5317_;
v___y_5246_ = v_a_5334_;
v___y_5247_ = v___x_5340_;
goto v___jp_5239_;
}
else
{
double v___x_5341_; lean_object* v___x_5342_; 
v___x_5341_ = l_Float_ofInt(v___x_5336_);
lean_dec(v___x_5336_);
v___x_5342_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5342_, 0, v___x_5341_);
v___y_5240_ = v___x_5326_;
v___y_5241_ = v___x_5329_;
v___y_5242_ = v_a_5332_;
v___y_5243_ = v___x_5335_;
v___y_5244_ = v___x_5326_;
v___y_5245_ = v___y_5317_;
v___y_5246_ = v_a_5334_;
v___y_5247_ = v___x_5342_;
goto v___jp_5239_;
}
}
else
{
lean_object* v_a_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5350_; 
lean_dec(v_a_5332_);
lean_dec_ref(v___x_5329_);
lean_dec(v___y_5318_);
lean_dec_ref(v___y_5317_);
v_a_5343_ = lean_ctor_get(v___x_5333_, 0);
v_isSharedCheck_5350_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5350_ == 0)
{
v___x_5345_ = v___x_5333_;
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_a_5343_);
lean_dec(v___x_5333_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
lean_object* v___x_5348_; 
if (v_isShared_5346_ == 0)
{
v___x_5348_ = v___x_5345_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v_a_5343_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
return v___x_5348_;
}
}
}
}
else
{
lean_object* v_a_5351_; lean_object* v___x_5353_; uint8_t v_isShared_5354_; uint8_t v_isSharedCheck_5358_; 
lean_dec_ref(v___x_5329_);
lean_dec_ref(v___f_5322_);
lean_dec(v___y_5318_);
lean_dec_ref(v___y_5317_);
v_a_5351_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5358_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5358_ == 0)
{
v___x_5353_ = v___x_5331_;
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
else
{
lean_inc(v_a_5351_);
lean_dec(v___x_5331_);
v___x_5353_ = lean_box(0);
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
v_resetjp_5352_:
{
lean_object* v___x_5356_; 
if (v_isShared_5354_ == 0)
{
v___x_5356_ = v___x_5353_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5357_; 
v_reuseFailAlloc_5357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5357_, 0, v_a_5351_);
v___x_5356_ = v_reuseFailAlloc_5357_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
return v___x_5356_;
}
}
}
}
else
{
lean_object* v_a_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5366_; 
lean_dec_ref(v___f_5322_);
lean_dec(v___y_5318_);
lean_dec_ref(v___y_5317_);
lean_dec(v_a_5303_);
v_a_5359_ = lean_ctor_get(v___x_5323_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5323_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5361_ = v___x_5323_;
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_a_5359_);
lean_dec(v___x_5323_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v___x_5364_; 
if (v_isShared_5362_ == 0)
{
v___x_5364_ = v___x_5361_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_a_5359_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
v___jp_5367_:
{
lean_object* v___x_5369_; 
v___x_5369_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5368_);
v___y_5316_ = v___y_5368_;
v___y_5317_ = v___y_5368_;
v___y_5318_ = v___x_5369_;
goto v___jp_5315_;
}
v___jp_5372_:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5374_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5375_ = lean_io_getenv(v___x_5374_);
if (lean_obj_tag(v___x_5375_) == 0)
{
v___y_5368_ = v___y_5373_;
goto v___jp_5367_;
}
else
{
lean_object* v_val_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; 
v_val_5376_ = lean_ctor_get(v___x_5375_, 0);
lean_inc(v_val_5376_);
lean_dec_ref_known(v___x_5375_, 1);
v___x_5377_ = lean_unsigned_to_nat(0u);
v___x_5378_ = lean_string_utf8_byte_size(v_val_5376_);
v___x_5379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5379_, 0, v_val_5376_);
lean_ctor_set(v___x_5379_, 1, v___x_5377_);
lean_ctor_set(v___x_5379_, 2, v___x_5378_);
v___x_5380_ = l_String_Slice_toNat_x3f(v___x_5379_);
lean_dec_ref_known(v___x_5379_, 3);
if (lean_obj_tag(v___x_5380_) == 0)
{
v___y_5368_ = v___y_5373_;
goto v___jp_5367_;
}
else
{
lean_object* v_val_5381_; 
v_val_5381_ = lean_ctor_get(v___x_5380_, 0);
lean_inc(v_val_5381_);
lean_dec_ref_known(v___x_5380_, 1);
lean_inc_ref(v___y_5373_);
v___y_5316_ = v___y_5373_;
v___y_5317_ = v___y_5373_;
v___y_5318_ = v_val_5381_;
goto v___jp_5315_;
}
}
}
}
else
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5391_; 
lean_dec(v_a_5309_);
lean_dec(v_a_5303_);
lean_dec_ref(v_options_5233_);
lean_dec_ref(v_handler_5232_);
v_a_5384_ = lean_ctor_get(v___x_5313_, 0);
v_isSharedCheck_5391_ = !lean_is_exclusive(v___x_5313_);
if (v_isSharedCheck_5391_ == 0)
{
v___x_5386_ = v___x_5313_;
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v___x_5313_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5389_; 
if (v_isShared_5387_ == 0)
{
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
return v___x_5389_;
}
}
}
}
else
{
lean_object* v_a_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5399_; 
lean_dec(v_a_5309_);
lean_dec(v_a_5303_);
lean_dec_ref(v_options_5233_);
lean_dec_ref(v_handler_5232_);
v_a_5392_ = lean_ctor_get(v___x_5310_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5310_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5394_ = v___x_5310_;
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_a_5392_);
lean_dec(v___x_5310_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5397_; 
if (v_isShared_5395_ == 0)
{
v___x_5397_ = v___x_5394_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_a_5392_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
return v___x_5397_;
}
}
}
}
else
{
lean_object* v_a_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5407_; 
lean_dec(v_a_5303_);
lean_dec_ref(v_options_5233_);
lean_dec_ref(v_handler_5232_);
v_a_5400_ = lean_ctor_get(v___x_5308_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v___x_5308_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5402_ = v___x_5308_;
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_a_5400_);
lean_dec(v___x_5308_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
lean_object* v___x_5405_; 
if (v_isShared_5403_ == 0)
{
v___x_5405_ = v___x_5402_;
goto v_reusejp_5404_;
}
else
{
lean_object* v_reuseFailAlloc_5406_; 
v_reuseFailAlloc_5406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5406_, 0, v_a_5400_);
v___x_5405_ = v_reuseFailAlloc_5406_;
goto v_reusejp_5404_;
}
v_reusejp_5404_:
{
return v___x_5405_;
}
}
}
}
else
{
lean_object* v_a_5408_; lean_object* v___x_5410_; uint8_t v_isShared_5411_; uint8_t v_isSharedCheck_5415_; 
lean_dec(v_a_5303_);
lean_dec_ref(v_options_5233_);
lean_dec_ref(v_handler_5232_);
v_a_5408_ = lean_ctor_get(v___x_5305_, 0);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5305_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5410_ = v___x_5305_;
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
else
{
lean_inc(v_a_5408_);
lean_dec(v___x_5305_);
v___x_5410_ = lean_box(0);
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
v_resetjp_5409_:
{
lean_object* v___x_5413_; 
if (v_isShared_5411_ == 0)
{
v___x_5413_ = v___x_5410_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5414_; 
v_reuseFailAlloc_5414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5414_, 0, v_a_5408_);
v___x_5413_ = v_reuseFailAlloc_5414_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
return v___x_5413_;
}
}
}
}
else
{
lean_object* v_a_5416_; lean_object* v___x_5418_; uint8_t v_isShared_5419_; uint8_t v_isSharedCheck_5423_; 
lean_dec_ref(v_options_5233_);
lean_dec_ref(v_handler_5232_);
v_a_5416_ = lean_ctor_get(v___x_5302_, 0);
v_isSharedCheck_5423_ = !lean_is_exclusive(v___x_5302_);
if (v_isSharedCheck_5423_ == 0)
{
v___x_5418_ = v___x_5302_;
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
else
{
lean_inc(v_a_5416_);
lean_dec(v___x_5302_);
v___x_5418_ = lean_box(0);
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
v_resetjp_5417_:
{
lean_object* v___x_5421_; 
if (v_isShared_5419_ == 0)
{
v___x_5421_ = v___x_5418_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v_a_5416_);
v___x_5421_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
return v___x_5421_;
}
}
}
v___jp_5239_:
{
lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v___x_5248_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5248_, 0, v___y_5245_);
lean_inc_ref(v___y_5244_);
v___x_5249_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5249_, 0, v___y_5246_);
lean_ctor_set(v___x_5249_, 1, v___y_5244_);
v___x_5250_ = lean_unsigned_to_nat(3u);
v___x_5251_ = lean_mk_empty_array_with_capacity(v___x_5250_);
v___x_5252_ = lean_array_push(v___x_5251_, v___y_5247_);
v___x_5253_ = lean_array_push(v___x_5252_, v___x_5248_);
v___x_5254_ = lean_array_push(v___x_5253_, v___x_5249_);
lean_inc_ref(v___y_5243_);
lean_inc(v___y_5242_);
v___x_5255_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_5242_, v___y_5243_, v___x_5254_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v___x_5256_; lean_object* v___x_5257_; 
lean_dec_ref_known(v___x_5255_, 1);
v___x_5256_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_5257_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_5256_);
if (lean_obj_tag(v___x_5257_) == 0)
{
lean_object* v_a_5258_; lean_object* v___f_5259_; lean_object* v___x_5260_; 
v_a_5258_ = lean_ctor_get(v___x_5257_, 0);
lean_inc_n(v_a_5258_, 2);
lean_dec_ref_known(v___x_5257_, 1);
lean_inc_ref(v___y_5241_);
v___f_5259_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_5259_, 0, v___f_5238_);
lean_closure_set(v___f_5259_, 1, v___y_5241_);
lean_closure_set(v___f_5259_, 2, v_a_5258_);
v___x_5260_ = l_Lasm_JS_Function_ofFn(v___f_5259_);
if (lean_obj_tag(v___x_5260_) == 0)
{
lean_object* v_a_5261_; lean_object* v___f_5262_; lean_object* v___x_5263_; 
v_a_5261_ = lean_ctor_get(v___x_5260_, 0);
lean_inc(v_a_5261_);
lean_dec_ref_known(v___x_5260_, 1);
lean_inc_ref(v___y_5240_);
v___f_5262_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_5262_, 0, v_a_5261_);
lean_closure_set(v___f_5262_, 1, v___y_5240_);
lean_closure_set(v___f_5262_, 2, v___y_5241_);
lean_closure_set(v___f_5262_, 3, v___f_5238_);
lean_closure_set(v___f_5262_, 4, v___y_5242_);
v___x_5263_ = l_Lasm_JS_Function_ofFn(v___f_5262_);
if (lean_obj_tag(v___x_5263_) == 0)
{
lean_object* v_a_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; 
v_a_5264_ = lean_ctor_get(v___x_5263_, 0);
lean_inc(v_a_5264_);
lean_dec_ref_known(v___x_5263_, 1);
v___x_5265_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_5266_ = lean_box(0);
v___x_5267_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5264_, v_a_5258_, v___x_5265_, v___x_5266_);
if (lean_obj_tag(v___x_5267_) == 0)
{
lean_object* v___x_5268_; 
lean_dec_ref_known(v___x_5267_, 1);
v___x_5268_ = l_Lasm_JS_waitForever();
return v___x_5268_;
}
else
{
return v___x_5267_;
}
}
else
{
lean_object* v_a_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5276_; 
lean_dec(v_a_5258_);
v_a_5269_ = lean_ctor_get(v___x_5263_, 0);
v_isSharedCheck_5276_ = !lean_is_exclusive(v___x_5263_);
if (v_isSharedCheck_5276_ == 0)
{
v___x_5271_ = v___x_5263_;
v_isShared_5272_ = v_isSharedCheck_5276_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_a_5269_);
lean_dec(v___x_5263_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5276_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
lean_object* v___x_5274_; 
if (v_isShared_5272_ == 0)
{
v___x_5274_ = v___x_5271_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5275_; 
v_reuseFailAlloc_5275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5275_, 0, v_a_5269_);
v___x_5274_ = v_reuseFailAlloc_5275_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
return v___x_5274_;
}
}
}
}
else
{
lean_object* v_a_5277_; lean_object* v___x_5279_; uint8_t v_isShared_5280_; uint8_t v_isSharedCheck_5284_; 
lean_dec(v_a_5258_);
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
v_a_5277_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5284_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5284_ == 0)
{
v___x_5279_ = v___x_5260_;
v_isShared_5280_ = v_isSharedCheck_5284_;
goto v_resetjp_5278_;
}
else
{
lean_inc(v_a_5277_);
lean_dec(v___x_5260_);
v___x_5279_ = lean_box(0);
v_isShared_5280_ = v_isSharedCheck_5284_;
goto v_resetjp_5278_;
}
v_resetjp_5278_:
{
lean_object* v___x_5282_; 
if (v_isShared_5280_ == 0)
{
v___x_5282_ = v___x_5279_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v_a_5277_);
v___x_5282_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
return v___x_5282_;
}
}
}
}
else
{
lean_object* v_a_5285_; lean_object* v___x_5287_; uint8_t v_isShared_5288_; uint8_t v_isSharedCheck_5292_; 
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
v_a_5285_ = lean_ctor_get(v___x_5257_, 0);
v_isSharedCheck_5292_ = !lean_is_exclusive(v___x_5257_);
if (v_isSharedCheck_5292_ == 0)
{
v___x_5287_ = v___x_5257_;
v_isShared_5288_ = v_isSharedCheck_5292_;
goto v_resetjp_5286_;
}
else
{
lean_inc(v_a_5285_);
lean_dec(v___x_5257_);
v___x_5287_ = lean_box(0);
v_isShared_5288_ = v_isSharedCheck_5292_;
goto v_resetjp_5286_;
}
v_resetjp_5286_:
{
lean_object* v___x_5290_; 
if (v_isShared_5288_ == 0)
{
v___x_5290_ = v___x_5287_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v_a_5285_);
v___x_5290_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
return v___x_5290_;
}
}
}
}
else
{
lean_object* v_a_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5300_; 
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
v_a_5293_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5300_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5295_ = v___x_5255_;
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_a_5293_);
lean_dec(v___x_5255_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5298_; 
if (v_isShared_5296_ == 0)
{
v___x_5298_ = v___x_5295_;
goto v_reusejp_5297_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v_a_5293_);
v___x_5298_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5297_;
}
v_reusejp_5297_:
{
return v___x_5298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5424_, lean_object* v_options_5425_, lean_object* v_a_5426_){
_start:
{
lean_object* v_res_5427_; 
v_res_5427_ = l_Lasm_Fetch_serveNode(v_handler_5424_, v_options_5425_);
return v_res_5427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5428_, lean_object* v_range_5429_, lean_object* v_b_5430_, lean_object* v_i_5431_, lean_object* v_hs_5432_, lean_object* v_hl_5433_){
_start:
{
lean_object* v___x_5434_; 
v___x_5434_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5428_, v_range_5429_, v_b_5430_, v_i_5431_);
return v___x_5434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5435_, lean_object* v_range_5436_, lean_object* v_b_5437_, lean_object* v_i_5438_, lean_object* v_hs_5439_, lean_object* v_hl_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5435_, v_range_5436_, v_b_5437_, v_i_5438_, v_hs_5439_, v_hl_5440_);
lean_dec_ref(v_range_5436_);
lean_dec_ref(v___y_5435_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5442_, lean_object* v_a_5443_, lean_object* v_as_5444_, lean_object* v_as_x27_5445_, lean_object* v_b_5446_, lean_object* v_a_5447_){
_start:
{
lean_object* v___x_5449_; 
v___x_5449_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5442_, v_a_5443_, v_as_x27_5445_, v_b_5446_);
return v___x_5449_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5450_, lean_object* v_a_5451_, lean_object* v_as_5452_, lean_object* v_as_x27_5453_, lean_object* v_b_5454_, lean_object* v_a_5455_, lean_object* v___y_5456_){
_start:
{
lean_object* v_res_5457_; 
v_res_5457_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5450_, v_a_5451_, v_as_5452_, v_as_x27_5453_, v_b_5454_, v_a_5455_);
lean_dec(v_as_x27_5453_);
lean_dec(v_as_5452_);
return v_res_5457_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5458_; 
v___x_5458_ = lean_box(0);
return v___x_5458_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5459_; 
v___x_5459_ = lean_box(0);
return v___x_5459_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5467_, lean_object* v_method_5468_, lean_object* v_url_5469_, lean_object* v_headers_5470_, lean_object* v_body_5471_, lean_object* v_backend_5472_, lean_object* v_a_00___x40___internal___hyg_5473_){
_start:
{
lean_object* v_res_5474_; 
v_res_5474_ = lasm_fetch_send(v_p_5467_, v_method_5468_, v_url_5469_, v_headers_5470_, v_body_5471_, v_backend_5472_);
lean_dec_ref(v_backend_5472_);
lean_dec_ref(v_body_5471_);
lean_dec_ref(v_headers_5470_);
lean_dec_ref(v_url_5469_);
lean_dec_ref(v_method_5468_);
lean_dec(v_p_5467_);
return v_res_5474_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5475_, lean_object* v_b_5476_, lean_object* v_x_5477_, lean_object* v_x_5478_){
_start:
{
if (lean_obj_tag(v_x_5478_) == 0)
{
return v_x_5477_;
}
else
{
lean_object* v_head_5479_; lean_object* v_tail_5480_; uint8_t v___y_5482_; lean_object* v___x_5489_; lean_object* v___x_5490_; uint8_t v___x_5491_; 
v_head_5479_ = lean_ctor_get(v_x_5478_, 0);
v_tail_5480_ = lean_ctor_get(v_x_5478_, 1);
v___x_5489_ = lean_nat_add(v_pos_5475_, v_head_5479_);
v___x_5490_ = lean_byte_array_size(v_b_5476_);
v___x_5491_ = lean_nat_dec_lt(v___x_5489_, v___x_5490_);
if (v___x_5491_ == 0)
{
uint8_t v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; uint8_t v___x_5495_; 
lean_dec(v___x_5489_);
v___x_5492_ = 0;
v___x_5493_ = lean_box(v___x_5492_);
v___x_5494_ = l_outOfBounds___redArg(v___x_5493_);
lean_dec(v___x_5493_);
v___x_5495_ = lean_unbox(v___x_5494_);
lean_dec(v___x_5494_);
v___y_5482_ = v___x_5495_;
goto v___jp_5481_;
}
else
{
uint8_t v___x_5496_; 
v___x_5496_ = lean_byte_array_fget(v_b_5476_, v___x_5489_);
lean_dec(v___x_5489_);
v___y_5482_ = v___x_5496_;
goto v___jp_5481_;
}
v___jp_5481_:
{
lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; 
v___x_5483_ = lean_uint8_to_nat(v___y_5482_);
v___x_5484_ = lean_unsigned_to_nat(256u);
v___x_5485_ = lean_nat_pow(v___x_5484_, v_head_5479_);
v___x_5486_ = lean_nat_mul(v___x_5483_, v___x_5485_);
lean_dec(v___x_5485_);
v___x_5487_ = lean_nat_add(v_x_5477_, v___x_5486_);
lean_dec(v___x_5486_);
lean_dec(v_x_5477_);
v_x_5477_ = v___x_5487_;
v_x_5478_ = v_tail_5480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5497_, lean_object* v_b_5498_, lean_object* v_x_5499_, lean_object* v_x_5500_){
_start:
{
lean_object* v_res_5501_; 
v_res_5501_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5497_, v_b_5498_, v_x_5499_, v_x_5500_);
lean_dec(v_x_5500_);
lean_dec_ref(v_b_5498_);
lean_dec(v_pos_5497_);
return v_res_5501_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; 
v___x_5502_ = lean_unsigned_to_nat(8u);
v___x_5503_ = l_List_range(v___x_5502_);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5507_, lean_object* v_pos_5508_){
_start:
{
lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; uint8_t v___x_5512_; 
v___x_5509_ = lean_byte_array_size(v_b_5507_);
v___x_5510_ = lean_unsigned_to_nat(8u);
v___x_5511_ = lean_nat_add(v_pos_5508_, v___x_5510_);
v___x_5512_ = lean_nat_dec_lt(v___x_5509_, v___x_5511_);
lean_dec(v___x_5511_);
if (v___x_5512_ == 0)
{
lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; 
v___x_5513_ = lean_unsigned_to_nat(0u);
v___x_5514_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5515_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5508_, v_b_5507_, v___x_5513_, v___x_5514_);
v___x_5516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5516_, 0, v___x_5515_);
return v___x_5516_;
}
else
{
lean_object* v___x_5517_; 
v___x_5517_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5518_, lean_object* v_pos_5519_){
_start:
{
lean_object* v_res_5520_; 
v_res_5520_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5518_, v_pos_5519_);
lean_dec(v_pos_5519_);
lean_dec_ref(v_b_5518_);
return v_res_5520_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5521_, lean_object* v_a_5522_){
_start:
{
if (lean_obj_tag(v_a_5521_) == 0)
{
lean_object* v___x_5523_; 
v___x_5523_ = l_List_reverse___redArg(v_a_5522_);
return v___x_5523_;
}
else
{
lean_object* v_head_5524_; lean_object* v_tail_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5541_; 
v_head_5524_ = lean_ctor_get(v_a_5521_, 0);
v_tail_5525_ = lean_ctor_get(v_a_5521_, 1);
v_isSharedCheck_5541_ = !lean_is_exclusive(v_a_5521_);
if (v_isSharedCheck_5541_ == 0)
{
v___x_5527_ = v_a_5521_;
v_isShared_5528_ = v_isSharedCheck_5541_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_tail_5525_);
lean_inc(v_head_5524_);
lean_dec(v_a_5521_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5541_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
uint8_t v___y_5530_; uint8_t v___x_5536_; uint8_t v___x_5537_; uint8_t v___x_5538_; 
v___x_5536_ = 128;
v___x_5537_ = lean_unbox(v_head_5524_);
v___x_5538_ = lean_uint8_dec_lt(v___x_5537_, v___x_5536_);
if (v___x_5538_ == 0)
{
uint8_t v___x_5539_; 
lean_dec(v_head_5524_);
v___x_5539_ = 63;
v___y_5530_ = v___x_5539_;
goto v___jp_5529_;
}
else
{
uint8_t v___x_5540_; 
v___x_5540_ = lean_unbox(v_head_5524_);
lean_dec(v_head_5524_);
v___y_5530_ = v___x_5540_;
goto v___jp_5529_;
}
v___jp_5529_:
{
lean_object* v___x_5531_; lean_object* v___x_5533_; 
v___x_5531_ = lean_box(v___y_5530_);
if (v_isShared_5528_ == 0)
{
lean_ctor_set(v___x_5527_, 1, v_a_5522_);
lean_ctor_set(v___x_5527_, 0, v___x_5531_);
v___x_5533_ = v___x_5527_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v___x_5531_);
lean_ctor_set(v_reuseFailAlloc_5535_, 1, v_a_5522_);
v___x_5533_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
v_a_5521_ = v_tail_5525_;
v_a_5522_ = v___x_5533_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5544_, lean_object* v_pos_5545_, lean_object* v_n_5546_){
_start:
{
lean_object* v___x_5547_; lean_object* v___x_5548_; uint8_t v___x_5549_; 
v___x_5547_ = lean_byte_array_size(v_b_5544_);
v___x_5548_ = lean_nat_add(v_pos_5545_, v_n_5546_);
v___x_5549_ = lean_nat_dec_lt(v___x_5547_, v___x_5548_);
if (v___x_5549_ == 0)
{
lean_object* v___x_5550_; uint8_t v___x_5551_; 
v___x_5550_ = l_ByteArray_extract(v_b_5544_, v_pos_5545_, v___x_5548_);
lean_dec(v___x_5548_);
v___x_5551_ = lean_string_validate_utf8(v___x_5550_);
if (v___x_5551_ == 0)
{
lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; uint8_t v___x_5556_; 
v___x_5552_ = l_ByteArray_toList(v___x_5550_);
lean_dec_ref(v___x_5550_);
v___x_5553_ = lean_box(0);
v___x_5554_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5552_, v___x_5553_);
v___x_5555_ = l_List_toByteArray(v___x_5554_);
lean_dec(v___x_5554_);
v___x_5556_ = lean_string_validate_utf8(v___x_5555_);
if (v___x_5556_ == 0)
{
lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; 
lean_dec_ref(v___x_5555_);
v___x_5557_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5558_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5557_);
v___x_5559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5559_, 0, v___x_5558_);
return v___x_5559_;
}
else
{
lean_object* v___x_5560_; lean_object* v___x_5561_; 
v___x_5560_ = lean_string_from_utf8_unchecked(v___x_5555_);
v___x_5561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5561_, 0, v___x_5560_);
return v___x_5561_;
}
}
else
{
lean_object* v___x_5562_; lean_object* v___x_5563_; 
v___x_5562_ = lean_string_from_utf8_unchecked(v___x_5550_);
v___x_5563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5563_, 0, v___x_5562_);
return v___x_5563_;
}
}
else
{
lean_object* v___x_5564_; 
lean_dec(v___x_5548_);
lean_dec(v_pos_5545_);
v___x_5564_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5564_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5565_, lean_object* v_pos_5566_, lean_object* v_n_5567_){
_start:
{
lean_object* v_res_5568_; 
v_res_5568_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5565_, v_pos_5566_, v_n_5567_);
lean_dec(v_n_5567_);
lean_dec_ref(v_b_5565_);
return v_res_5568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5569_, lean_object* v_range_5570_, lean_object* v_b_5571_, lean_object* v_i_5572_){
_start:
{
lean_object* v_stop_5573_; lean_object* v_step_5574_; uint8_t v___x_5575_; 
v_stop_5573_ = lean_ctor_get(v_range_5570_, 1);
v_step_5574_ = lean_ctor_get(v_range_5570_, 2);
v___x_5575_ = lean_nat_dec_lt(v_i_5572_, v_stop_5573_);
if (v___x_5575_ == 0)
{
lean_object* v___x_5576_; 
lean_dec(v_i_5572_);
v___x_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5576_, 0, v_b_5571_);
return v___x_5576_;
}
else
{
lean_object* v_fst_5577_; lean_object* v_snd_5578_; lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5634_; 
v_fst_5577_ = lean_ctor_get(v_b_5571_, 0);
v_snd_5578_ = lean_ctor_get(v_b_5571_, 1);
v_isSharedCheck_5634_ = !lean_is_exclusive(v_b_5571_);
if (v_isSharedCheck_5634_ == 0)
{
v___x_5580_ = v_b_5571_;
v_isShared_5581_ = v_isSharedCheck_5634_;
goto v_resetjp_5579_;
}
else
{
lean_inc(v_snd_5578_);
lean_inc(v_fst_5577_);
lean_dec(v_b_5571_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5634_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v___x_5582_; 
v___x_5582_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5569_, v_fst_5577_);
if (lean_obj_tag(v___x_5582_) == 0)
{
lean_object* v_a_5583_; lean_object* v___x_5585_; uint8_t v_isShared_5586_; uint8_t v_isSharedCheck_5590_; 
lean_del_object(v___x_5580_);
lean_dec(v_snd_5578_);
lean_dec(v_fst_5577_);
lean_dec(v_i_5572_);
v_a_5583_ = lean_ctor_get(v___x_5582_, 0);
v_isSharedCheck_5590_ = !lean_is_exclusive(v___x_5582_);
if (v_isSharedCheck_5590_ == 0)
{
v___x_5585_ = v___x_5582_;
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
else
{
lean_inc(v_a_5583_);
lean_dec(v___x_5582_);
v___x_5585_ = lean_box(0);
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
v_resetjp_5584_:
{
lean_object* v___x_5588_; 
if (v_isShared_5586_ == 0)
{
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
return v___x_5588_;
}
}
}
else
{
lean_object* v_a_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; 
v_a_5591_ = lean_ctor_get(v___x_5582_, 0);
lean_inc(v_a_5591_);
lean_dec_ref_known(v___x_5582_, 1);
v___x_5592_ = lean_unsigned_to_nat(8u);
v___x_5593_ = lean_nat_add(v_fst_5577_, v___x_5592_);
lean_dec(v_fst_5577_);
lean_inc(v___x_5593_);
v___x_5594_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5569_, v___x_5593_, v_a_5591_);
if (lean_obj_tag(v___x_5594_) == 0)
{
lean_object* v_a_5595_; lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5602_; 
lean_dec(v___x_5593_);
lean_dec(v_a_5591_);
lean_del_object(v___x_5580_);
lean_dec(v_snd_5578_);
lean_dec(v_i_5572_);
v_a_5595_ = lean_ctor_get(v___x_5594_, 0);
v_isSharedCheck_5602_ = !lean_is_exclusive(v___x_5594_);
if (v_isSharedCheck_5602_ == 0)
{
v___x_5597_ = v___x_5594_;
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
else
{
lean_inc(v_a_5595_);
lean_dec(v___x_5594_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v___x_5600_; 
if (v_isShared_5598_ == 0)
{
v___x_5600_ = v___x_5597_;
goto v_reusejp_5599_;
}
else
{
lean_object* v_reuseFailAlloc_5601_; 
v_reuseFailAlloc_5601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5601_, 0, v_a_5595_);
v___x_5600_ = v_reuseFailAlloc_5601_;
goto v_reusejp_5599_;
}
v_reusejp_5599_:
{
return v___x_5600_;
}
}
}
else
{
lean_object* v_a_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; 
v_a_5603_ = lean_ctor_get(v___x_5594_, 0);
lean_inc(v_a_5603_);
lean_dec_ref_known(v___x_5594_, 1);
v___x_5604_ = lean_nat_add(v___x_5593_, v_a_5591_);
lean_dec(v_a_5591_);
lean_dec(v___x_5593_);
v___x_5605_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5569_, v___x_5604_);
if (lean_obj_tag(v___x_5605_) == 0)
{
lean_object* v_a_5606_; lean_object* v___x_5608_; uint8_t v_isShared_5609_; uint8_t v_isSharedCheck_5613_; 
lean_dec(v___x_5604_);
lean_dec(v_a_5603_);
lean_del_object(v___x_5580_);
lean_dec(v_snd_5578_);
lean_dec(v_i_5572_);
v_a_5606_ = lean_ctor_get(v___x_5605_, 0);
v_isSharedCheck_5613_ = !lean_is_exclusive(v___x_5605_);
if (v_isSharedCheck_5613_ == 0)
{
v___x_5608_ = v___x_5605_;
v_isShared_5609_ = v_isSharedCheck_5613_;
goto v_resetjp_5607_;
}
else
{
lean_inc(v_a_5606_);
lean_dec(v___x_5605_);
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
v_reuseFailAlloc_5612_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; 
v_a_5614_ = lean_ctor_get(v___x_5605_, 0);
lean_inc(v_a_5614_);
lean_dec_ref_known(v___x_5605_, 1);
v___x_5615_ = lean_nat_add(v___x_5604_, v___x_5592_);
lean_dec(v___x_5604_);
lean_inc(v___x_5615_);
v___x_5616_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5569_, v___x_5615_, v_a_5614_);
if (lean_obj_tag(v___x_5616_) == 0)
{
lean_object* v_a_5617_; lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5624_; 
lean_dec(v___x_5615_);
lean_dec(v_a_5614_);
lean_dec(v_a_5603_);
lean_del_object(v___x_5580_);
lean_dec(v_snd_5578_);
lean_dec(v_i_5572_);
v_a_5617_ = lean_ctor_get(v___x_5616_, 0);
v_isSharedCheck_5624_ = !lean_is_exclusive(v___x_5616_);
if (v_isSharedCheck_5624_ == 0)
{
v___x_5619_ = v___x_5616_;
v_isShared_5620_ = v_isSharedCheck_5624_;
goto v_resetjp_5618_;
}
else
{
lean_inc(v_a_5617_);
lean_dec(v___x_5616_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5624_;
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
lean_object* v_reuseFailAlloc_5623_; 
v_reuseFailAlloc_5623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5623_, 0, v_a_5617_);
v___x_5622_ = v_reuseFailAlloc_5623_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
return v___x_5622_;
}
}
}
else
{
lean_object* v_a_5625_; lean_object* v___x_5626_; lean_object* v___x_5628_; 
v_a_5625_ = lean_ctor_get(v___x_5616_, 0);
lean_inc(v_a_5625_);
lean_dec_ref_known(v___x_5616_, 1);
v___x_5626_ = lean_nat_add(v___x_5615_, v_a_5614_);
lean_dec(v_a_5614_);
lean_dec(v___x_5615_);
if (v_isShared_5581_ == 0)
{
lean_ctor_set(v___x_5580_, 1, v_a_5625_);
lean_ctor_set(v___x_5580_, 0, v_a_5603_);
v___x_5628_ = v___x_5580_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5633_; 
v_reuseFailAlloc_5633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5633_, 0, v_a_5603_);
lean_ctor_set(v_reuseFailAlloc_5633_, 1, v_a_5625_);
v___x_5628_ = v_reuseFailAlloc_5633_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v___x_5629_ = lean_array_push(v_snd_5578_, v___x_5628_);
v___x_5630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5626_);
lean_ctor_set(v___x_5630_, 1, v___x_5629_);
v___x_5631_ = lean_nat_add(v_i_5572_, v_step_5574_);
lean_dec(v_i_5572_);
v_b_5571_ = v___x_5630_;
v_i_5572_ = v___x_5631_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5635_, lean_object* v_range_5636_, lean_object* v_b_5637_, lean_object* v_i_5638_){
_start:
{
lean_object* v_res_5639_; 
v_res_5639_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5635_, v_range_5636_, v_b_5637_, v_i_5638_);
lean_dec_ref(v_range_5636_);
lean_dec_ref(v_b_5635_);
return v_res_5639_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5643_){
_start:
{
lean_object* v___x_5644_; lean_object* v___x_5645_; 
v___x_5644_ = lean_unsigned_to_nat(0u);
v___x_5645_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5643_, v___x_5644_);
if (lean_obj_tag(v___x_5645_) == 0)
{
lean_object* v_a_5646_; lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5653_; 
v_a_5646_ = lean_ctor_get(v___x_5645_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5645_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5648_ = v___x_5645_;
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
else
{
lean_inc(v_a_5646_);
lean_dec(v___x_5645_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
lean_object* v___x_5651_; 
if (v_isShared_5649_ == 0)
{
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
return v___x_5651_;
}
}
}
else
{
lean_object* v_a_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; 
v_a_5654_ = lean_ctor_get(v___x_5645_, 0);
lean_inc(v_a_5654_);
lean_dec_ref_known(v___x_5645_, 1);
v___x_5655_ = lean_unsigned_to_nat(8u);
v___x_5656_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5643_, v___x_5655_);
if (lean_obj_tag(v___x_5656_) == 0)
{
lean_object* v_a_5657_; lean_object* v___x_5659_; uint8_t v_isShared_5660_; uint8_t v_isSharedCheck_5664_; 
lean_dec(v_a_5654_);
v_a_5657_ = lean_ctor_get(v___x_5656_, 0);
v_isSharedCheck_5664_ = !lean_is_exclusive(v___x_5656_);
if (v_isSharedCheck_5664_ == 0)
{
v___x_5659_ = v___x_5656_;
v_isShared_5660_ = v_isSharedCheck_5664_;
goto v_resetjp_5658_;
}
else
{
lean_inc(v_a_5657_);
lean_dec(v___x_5656_);
v___x_5659_ = lean_box(0);
v_isShared_5660_ = v_isSharedCheck_5664_;
goto v_resetjp_5658_;
}
v_resetjp_5658_:
{
lean_object* v___x_5662_; 
if (v_isShared_5660_ == 0)
{
v___x_5662_ = v___x_5659_;
goto v_reusejp_5661_;
}
else
{
lean_object* v_reuseFailAlloc_5663_; 
v_reuseFailAlloc_5663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5663_, 0, v_a_5657_);
v___x_5662_ = v_reuseFailAlloc_5663_;
goto v_reusejp_5661_;
}
v_reusejp_5661_:
{
return v___x_5662_;
}
}
}
else
{
lean_object* v_a_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; 
v_a_5665_ = lean_ctor_get(v___x_5656_, 0);
lean_inc(v_a_5665_);
lean_dec_ref_known(v___x_5656_, 1);
v___x_5666_ = lean_unsigned_to_nat(1u);
v___x_5667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5667_, 0, v___x_5644_);
lean_ctor_set(v___x_5667_, 1, v_a_5665_);
lean_ctor_set(v___x_5667_, 2, v___x_5666_);
v___x_5668_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5669_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5643_, v___x_5667_, v___x_5668_, v___x_5644_);
lean_dec_ref_known(v___x_5667_, 3);
if (lean_obj_tag(v___x_5669_) == 0)
{
lean_object* v_a_5670_; lean_object* v___x_5672_; uint8_t v_isShared_5673_; uint8_t v_isSharedCheck_5677_; 
lean_dec(v_a_5654_);
v_a_5670_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5677_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5677_ == 0)
{
v___x_5672_ = v___x_5669_;
v_isShared_5673_ = v_isSharedCheck_5677_;
goto v_resetjp_5671_;
}
else
{
lean_inc(v_a_5670_);
lean_dec(v___x_5669_);
v___x_5672_ = lean_box(0);
v_isShared_5673_ = v_isSharedCheck_5677_;
goto v_resetjp_5671_;
}
v_resetjp_5671_:
{
lean_object* v___x_5675_; 
if (v_isShared_5673_ == 0)
{
v___x_5675_ = v___x_5672_;
goto v_reusejp_5674_;
}
else
{
lean_object* v_reuseFailAlloc_5676_; 
v_reuseFailAlloc_5676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5676_, 0, v_a_5670_);
v___x_5675_ = v_reuseFailAlloc_5676_;
goto v_reusejp_5674_;
}
v_reusejp_5674_:
{
return v___x_5675_;
}
}
}
else
{
lean_object* v_a_5678_; lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5692_; 
v_a_5678_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5692_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5692_ == 0)
{
v___x_5680_ = v___x_5669_;
v_isShared_5681_ = v_isSharedCheck_5692_;
goto v_resetjp_5679_;
}
else
{
lean_inc(v_a_5678_);
lean_dec(v___x_5669_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5692_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v_fst_5682_; lean_object* v_snd_5683_; uint16_t v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5690_; 
v_fst_5682_ = lean_ctor_get(v_a_5678_, 0);
lean_inc(v_fst_5682_);
v_snd_5683_ = lean_ctor_get(v_a_5678_, 1);
lean_inc(v_snd_5683_);
lean_dec(v_a_5678_);
v___x_5684_ = lean_uint16_of_nat(v_a_5654_);
lean_dec(v_a_5654_);
v___x_5685_ = lean_byte_array_size(v_b_5643_);
v___x_5686_ = l_ByteArray_extract(v_b_5643_, v_fst_5682_, v___x_5685_);
v___x_5687_ = lean_box(0);
v___x_5688_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5688_, 0, v_snd_5683_);
lean_ctor_set(v___x_5688_, 1, v___x_5686_);
lean_ctor_set(v___x_5688_, 2, v___x_5687_);
lean_ctor_set_uint16(v___x_5688_, sizeof(void*)*3, v___x_5684_);
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 0, v___x_5688_);
v___x_5690_ = v___x_5680_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5691_; 
v_reuseFailAlloc_5691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5691_, 0, v___x_5688_);
v___x_5690_ = v_reuseFailAlloc_5691_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
return v___x_5690_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5693_){
_start:
{
lean_object* v_res_5694_; 
v_res_5694_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5693_);
lean_dec_ref(v_b_5693_);
return v_res_5694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5695_, lean_object* v_range_5696_, lean_object* v_b_5697_, lean_object* v_i_5698_, lean_object* v_hs_5699_, lean_object* v_hl_5700_){
_start:
{
lean_object* v___x_5701_; 
v___x_5701_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5695_, v_range_5696_, v_b_5697_, v_i_5698_);
return v___x_5701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5702_, lean_object* v_range_5703_, lean_object* v_b_5704_, lean_object* v_i_5705_, lean_object* v_hs_5706_, lean_object* v_hl_5707_){
_start:
{
lean_object* v_res_5708_; 
v_res_5708_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5702_, v_range_5703_, v_b_5704_, v_i_5705_, v_hs_5706_, v_hl_5707_);
lean_dec_ref(v_range_5703_);
lean_dec_ref(v_b_5702_);
return v_res_5708_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5709_, lean_object* v_headers_5710_, lean_object* v_x_5711_){
_start:
{
if (lean_obj_tag(v_x_5711_) == 0)
{
lean_object* v_a_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5721_; 
lean_dec_ref(v_headers_5710_);
v_a_5713_ = lean_ctor_get(v_x_5711_, 0);
v_isSharedCheck_5721_ = !lean_is_exclusive(v_x_5711_);
if (v_isSharedCheck_5721_ == 0)
{
v___x_5715_ = v_x_5711_;
v_isShared_5716_ = v_isSharedCheck_5721_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_a_5713_);
lean_dec(v_x_5711_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5721_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v___x_5718_; 
if (v_isShared_5716_ == 0)
{
v___x_5718_ = v___x_5715_;
goto v_reusejp_5717_;
}
else
{
lean_object* v_reuseFailAlloc_5720_; 
v_reuseFailAlloc_5720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5720_, 0, v_a_5713_);
v___x_5718_ = v_reuseFailAlloc_5720_;
goto v_reusejp_5717_;
}
v_reusejp_5717_:
{
lean_object* v___x_5719_; 
v___x_5719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5719_, 0, v___x_5718_);
return v___x_5719_;
}
}
}
else
{
lean_object* v_a_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5732_; 
v_a_5722_ = lean_ctor_get(v_x_5711_, 0);
v_isSharedCheck_5732_ = !lean_is_exclusive(v_x_5711_);
if (v_isSharedCheck_5732_ == 0)
{
v___x_5724_ = v_x_5711_;
v_isShared_5725_ = v_isSharedCheck_5732_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_a_5722_);
lean_dec(v_x_5711_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5732_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5729_; 
v___x_5726_ = lean_box(0);
v___x_5727_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5727_, 0, v_headers_5710_);
lean_ctor_set(v___x_5727_, 1, v_a_5722_);
lean_ctor_set(v___x_5727_, 2, v___x_5726_);
lean_ctor_set_uint16(v___x_5727_, sizeof(void*)*3, v___y_5709_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 0, v___x_5727_);
v___x_5729_ = v___x_5724_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v___x_5727_);
v___x_5729_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
lean_object* v___x_5730_; 
v___x_5730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5730_, 0, v___x_5729_);
return v___x_5730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5733_, lean_object* v_headers_5734_, lean_object* v_x_5735_, lean_object* v___y_5736_){
_start:
{
uint16_t v___y_2853__boxed_5737_; lean_object* v_res_5738_; 
v___y_2853__boxed_5737_ = lean_unbox(v___y_5733_);
v_res_5738_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5737_, v_headers_5734_, v_x_5735_);
return v_res_5738_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5739_, lean_object* v___f_5740_, lean_object* v_x_5741_){
_start:
{
if (lean_obj_tag(v_x_5741_) == 0)
{
lean_object* v_a_5743_; lean_object* v___x_5745_; uint8_t v_isShared_5746_; uint8_t v_isSharedCheck_5751_; 
lean_dec_ref(v___f_5740_);
lean_dec(v_a_5739_);
v_a_5743_ = lean_ctor_get(v_x_5741_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v_x_5741_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5745_ = v_x_5741_;
v_isShared_5746_ = v_isSharedCheck_5751_;
goto v_resetjp_5744_;
}
else
{
lean_inc(v_a_5743_);
lean_dec(v_x_5741_);
v___x_5745_ = lean_box(0);
v_isShared_5746_ = v_isSharedCheck_5751_;
goto v_resetjp_5744_;
}
v_resetjp_5744_:
{
lean_object* v___x_5748_; 
if (v_isShared_5746_ == 0)
{
v___x_5748_ = v___x_5745_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5743_);
v___x_5748_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
lean_object* v___x_5749_; 
v___x_5749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5749_, 0, v___x_5748_);
return v___x_5749_;
}
}
}
else
{
lean_object* v_a_5752_; lean_object* v___x_5754_; uint8_t v_isShared_5755_; uint8_t v_isSharedCheck_5776_; 
v_a_5752_ = lean_ctor_get(v_x_5741_, 0);
v_isSharedCheck_5776_ = !lean_is_exclusive(v_x_5741_);
if (v_isSharedCheck_5776_ == 0)
{
v___x_5754_ = v_x_5741_;
v_isShared_5755_ = v_isSharedCheck_5776_;
goto v_resetjp_5753_;
}
else
{
lean_inc(v_a_5752_);
lean_dec(v_x_5741_);
v___x_5754_ = lean_box(0);
v_isShared_5755_ = v_isSharedCheck_5776_;
goto v_resetjp_5753_;
}
v_resetjp_5753_:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; uint8_t v___x_5762_; lean_object* v_val_5764_; lean_object* v___x_5767_; 
v___x_5756_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5757_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5757_, 0, v_a_5739_);
lean_ctor_set(v___x_5757_, 1, v___x_5756_);
v___x_5758_ = lean_unsigned_to_nat(1u);
v___x_5759_ = lean_mk_empty_array_with_capacity(v___x_5758_);
v___x_5760_ = lean_array_push(v___x_5759_, v___x_5757_);
v___x_5761_ = lean_unsigned_to_nat(0u);
v___x_5762_ = 0;
v___x_5767_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5752_, v___x_5760_);
if (lean_obj_tag(v___x_5767_) == 0)
{
lean_object* v_a_5768_; lean_object* v___x_5770_; 
v_a_5768_ = lean_ctor_get(v___x_5767_, 0);
lean_inc(v_a_5768_);
lean_dec_ref_known(v___x_5767_, 1);
if (v_isShared_5755_ == 0)
{
lean_ctor_set(v___x_5754_, 0, v_a_5768_);
v___x_5770_ = v___x_5754_;
goto v_reusejp_5769_;
}
else
{
lean_object* v_reuseFailAlloc_5771_; 
v_reuseFailAlloc_5771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5771_, 0, v_a_5768_);
v___x_5770_ = v_reuseFailAlloc_5771_;
goto v_reusejp_5769_;
}
v_reusejp_5769_:
{
v_val_5764_ = v___x_5770_;
goto v___jp_5763_;
}
}
else
{
lean_object* v_a_5772_; lean_object* v___x_5774_; 
v_a_5772_ = lean_ctor_get(v___x_5767_, 0);
lean_inc(v_a_5772_);
lean_dec_ref_known(v___x_5767_, 1);
if (v_isShared_5755_ == 0)
{
lean_ctor_set_tag(v___x_5754_, 0);
lean_ctor_set(v___x_5754_, 0, v_a_5772_);
v___x_5774_ = v___x_5754_;
goto v_reusejp_5773_;
}
else
{
lean_object* v_reuseFailAlloc_5775_; 
v_reuseFailAlloc_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5775_, 0, v_a_5772_);
v___x_5774_ = v_reuseFailAlloc_5775_;
goto v_reusejp_5773_;
}
v_reusejp_5773_:
{
v_val_5764_ = v___x_5774_;
goto v___jp_5763_;
}
}
v___jp_5763_:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; 
v___x_5765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5765_, 0, v_val_5764_);
v___x_5766_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5761_, v___x_5762_, v___x_5765_, v___f_5740_);
return v___x_5766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5777_, lean_object* v___f_5778_, lean_object* v_x_5779_, lean_object* v___y_5780_){
_start:
{
lean_object* v_res_5781_; 
v_res_5781_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5777_, v___f_5778_, v_x_5779_);
return v_res_5781_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5782_, lean_object* v_a_5783_, lean_object* v_x_5784_){
_start:
{
if (lean_obj_tag(v_x_5784_) == 0)
{
lean_object* v_a_5786_; lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5794_; 
lean_dec(v_a_5783_);
lean_dec_ref(v___f_5782_);
v_a_5786_ = lean_ctor_get(v_x_5784_, 0);
v_isSharedCheck_5794_ = !lean_is_exclusive(v_x_5784_);
if (v_isSharedCheck_5794_ == 0)
{
v___x_5788_ = v_x_5784_;
v_isShared_5789_ = v_isSharedCheck_5794_;
goto v_resetjp_5787_;
}
else
{
lean_inc(v_a_5786_);
lean_dec(v_x_5784_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5794_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v___x_5791_; 
if (v_isShared_5789_ == 0)
{
v___x_5791_ = v___x_5788_;
goto v_reusejp_5790_;
}
else
{
lean_object* v_reuseFailAlloc_5793_; 
v_reuseFailAlloc_5793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5793_, 0, v_a_5786_);
v___x_5791_ = v_reuseFailAlloc_5793_;
goto v_reusejp_5790_;
}
v_reusejp_5790_:
{
lean_object* v___x_5792_; 
v___x_5792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5792_, 0, v___x_5791_);
return v___x_5792_;
}
}
}
else
{
lean_object* v_a_5795_; lean_object* v___x_5797_; uint8_t v_isShared_5798_; uint8_t v_isSharedCheck_5816_; 
v_a_5795_ = lean_ctor_get(v_x_5784_, 0);
v_isSharedCheck_5816_ = !lean_is_exclusive(v_x_5784_);
if (v_isSharedCheck_5816_ == 0)
{
v___x_5797_ = v_x_5784_;
v_isShared_5798_ = v_isSharedCheck_5816_;
goto v_resetjp_5796_;
}
else
{
lean_inc(v_a_5795_);
lean_dec(v_x_5784_);
v___x_5797_ = lean_box(0);
v_isShared_5798_ = v_isSharedCheck_5816_;
goto v_resetjp_5796_;
}
v_resetjp_5796_:
{
lean_object* v___f_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; uint8_t v___x_5802_; lean_object* v_val_5804_; lean_object* v___x_5807_; 
v___f_5799_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5799_, 0, v_a_5795_);
lean_closure_set(v___f_5799_, 1, v___f_5782_);
v___x_5800_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5801_ = lean_unsigned_to_nat(0u);
v___x_5802_ = 0;
v___x_5807_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5783_, v___x_5800_);
if (lean_obj_tag(v___x_5807_) == 0)
{
lean_object* v_a_5808_; lean_object* v___x_5810_; 
v_a_5808_ = lean_ctor_get(v___x_5807_, 0);
lean_inc(v_a_5808_);
lean_dec_ref_known(v___x_5807_, 1);
if (v_isShared_5798_ == 0)
{
lean_ctor_set(v___x_5797_, 0, v_a_5808_);
v___x_5810_ = v___x_5797_;
goto v_reusejp_5809_;
}
else
{
lean_object* v_reuseFailAlloc_5811_; 
v_reuseFailAlloc_5811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5811_, 0, v_a_5808_);
v___x_5810_ = v_reuseFailAlloc_5811_;
goto v_reusejp_5809_;
}
v_reusejp_5809_:
{
v_val_5804_ = v___x_5810_;
goto v___jp_5803_;
}
}
else
{
lean_object* v_a_5812_; lean_object* v___x_5814_; 
v_a_5812_ = lean_ctor_get(v___x_5807_, 0);
lean_inc(v_a_5812_);
lean_dec_ref_known(v___x_5807_, 1);
if (v_isShared_5798_ == 0)
{
lean_ctor_set_tag(v___x_5797_, 0);
lean_ctor_set(v___x_5797_, 0, v_a_5812_);
v___x_5814_ = v___x_5797_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5815_; 
v_reuseFailAlloc_5815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5815_, 0, v_a_5812_);
v___x_5814_ = v_reuseFailAlloc_5815_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
v_val_5804_ = v___x_5814_;
goto v___jp_5803_;
}
}
v___jp_5803_:
{
lean_object* v___x_5805_; lean_object* v___x_5806_; 
v___x_5805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5805_, 0, v_val_5804_);
v___x_5806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5801_, v___x_5802_, v___x_5805_, v___f_5799_);
return v___x_5806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5817_, lean_object* v_a_5818_, lean_object* v_x_5819_, lean_object* v___y_5820_){
_start:
{
lean_object* v_res_5821_; 
v_res_5821_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5817_, v_a_5818_, v_x_5819_);
return v_res_5821_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5822_, lean_object* v_a_5823_, lean_object* v_a_5824_, lean_object* v_headers_5825_){
_start:
{
lean_object* v___x_5827_; lean_object* v___f_5828_; lean_object* v___f_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; uint8_t v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; 
v___x_5827_ = lean_box(v___y_5822_);
v___f_5828_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5828_, 0, v___x_5827_);
lean_closure_set(v___f_5828_, 1, v_headers_5825_);
v___f_5829_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5829_, 0, v___f_5828_);
lean_closure_set(v___f_5829_, 1, v_a_5823_);
v___x_5830_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5831_ = lean_unsigned_to_nat(0u);
v___x_5832_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5833_ = 0;
v___x_5834_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5824_, v___x_5830_, v___x_5832_);
v___x_5835_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5831_, v___x_5833_, v___x_5834_, v___f_5829_);
return v___x_5835_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5836_, lean_object* v_a_5837_, lean_object* v_a_5838_, lean_object* v_headers_5839_, lean_object* v___y_5840_){
_start:
{
uint16_t v___y_3061__boxed_5841_; lean_object* v_res_5842_; 
v___y_3061__boxed_5841_ = lean_unbox(v___y_5836_);
v_res_5842_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5841_, v_a_5837_, v_a_5838_, v_headers_5839_);
return v_res_5842_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5843_, lean_object* v_x_5844_){
_start:
{
if (lean_obj_tag(v_x_5844_) == 0)
{
lean_object* v_a_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5854_; 
lean_dec_ref(v___f_5843_);
v_a_5846_ = lean_ctor_get(v_x_5844_, 0);
v_isSharedCheck_5854_ = !lean_is_exclusive(v_x_5844_);
if (v_isSharedCheck_5854_ == 0)
{
v___x_5848_ = v_x_5844_;
v_isShared_5849_ = v_isSharedCheck_5854_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_a_5846_);
lean_dec(v_x_5844_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5854_;
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
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v_a_5846_);
v___x_5851_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5850_;
}
v_reusejp_5850_:
{
lean_object* v___x_5852_; 
v___x_5852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5852_, 0, v___x_5851_);
return v___x_5852_;
}
}
}
else
{
lean_object* v_a_5855_; lean_object* v___x_5856_; 
v_a_5855_ = lean_ctor_get(v_x_5844_, 0);
lean_inc(v_a_5855_);
lean_dec_ref_known(v_x_5844_, 1);
v___x_5856_ = lean_apply_2(v___f_5843_, v_a_5855_, lean_box(0));
return v___x_5856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5857_, lean_object* v_x_5858_, lean_object* v___y_5859_){
_start:
{
lean_object* v_res_5860_; 
v_res_5860_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5857_, v_x_5858_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5861_, lean_object* v___f_5862_, lean_object* v_x_5863_){
_start:
{
if (lean_obj_tag(v_x_5863_) == 0)
{
lean_object* v_a_5865_; lean_object* v___x_5867_; uint8_t v_isShared_5868_; uint8_t v_isSharedCheck_5873_; 
lean_dec_ref(v___f_5862_);
lean_dec(v_value_5861_);
v_a_5865_ = lean_ctor_get(v_x_5863_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v_x_5863_);
if (v_isSharedCheck_5873_ == 0)
{
v___x_5867_ = v_x_5863_;
v_isShared_5868_ = v_isSharedCheck_5873_;
goto v_resetjp_5866_;
}
else
{
lean_inc(v_a_5865_);
lean_dec(v_x_5863_);
v___x_5867_ = lean_box(0);
v_isShared_5868_ = v_isSharedCheck_5873_;
goto v_resetjp_5866_;
}
v_resetjp_5866_:
{
lean_object* v___x_5870_; 
if (v_isShared_5868_ == 0)
{
v___x_5870_ = v___x_5867_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_a_5865_);
v___x_5870_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
lean_object* v___x_5871_; 
v___x_5871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5871_, 0, v___x_5870_);
return v___x_5871_;
}
}
}
else
{
lean_object* v_a_5874_; lean_object* v___x_5876_; uint8_t v_isShared_5877_; uint8_t v_isSharedCheck_5899_; 
v_a_5874_ = lean_ctor_get(v_x_5863_, 0);
v_isSharedCheck_5899_ = !lean_is_exclusive(v_x_5863_);
if (v_isSharedCheck_5899_ == 0)
{
v___x_5876_ = v_x_5863_;
v_isShared_5877_ = v_isSharedCheck_5899_;
goto v_resetjp_5875_;
}
else
{
lean_inc(v_a_5874_);
lean_dec(v_x_5863_);
v___x_5876_ = lean_box(0);
v_isShared_5877_ = v_isSharedCheck_5899_;
goto v_resetjp_5875_;
}
v_resetjp_5875_:
{
lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; uint8_t v___x_5885_; lean_object* v_val_5887_; lean_object* v___x_5890_; 
v___x_5878_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5879_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5880_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5880_, 0, v_value_5861_);
lean_ctor_set(v___x_5880_, 1, v___x_5879_);
v___x_5881_ = lean_unsigned_to_nat(1u);
v___x_5882_ = lean_mk_empty_array_with_capacity(v___x_5881_);
v___x_5883_ = lean_array_push(v___x_5882_, v___x_5880_);
v___x_5884_ = lean_unsigned_to_nat(0u);
v___x_5885_ = 0;
v___x_5890_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5874_, v___x_5878_, v___x_5883_);
if (lean_obj_tag(v___x_5890_) == 0)
{
lean_object* v_a_5891_; lean_object* v___x_5893_; 
v_a_5891_ = lean_ctor_get(v___x_5890_, 0);
lean_inc(v_a_5891_);
lean_dec_ref_known(v___x_5890_, 1);
if (v_isShared_5877_ == 0)
{
lean_ctor_set(v___x_5876_, 0, v_a_5891_);
v___x_5893_ = v___x_5876_;
goto v_reusejp_5892_;
}
else
{
lean_object* v_reuseFailAlloc_5894_; 
v_reuseFailAlloc_5894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5894_, 0, v_a_5891_);
v___x_5893_ = v_reuseFailAlloc_5894_;
goto v_reusejp_5892_;
}
v_reusejp_5892_:
{
v_val_5887_ = v___x_5893_;
goto v___jp_5886_;
}
}
else
{
lean_object* v_a_5895_; lean_object* v___x_5897_; 
v_a_5895_ = lean_ctor_get(v___x_5890_, 0);
lean_inc(v_a_5895_);
lean_dec_ref_known(v___x_5890_, 1);
if (v_isShared_5877_ == 0)
{
lean_ctor_set_tag(v___x_5876_, 0);
lean_ctor_set(v___x_5876_, 0, v_a_5895_);
v___x_5897_ = v___x_5876_;
goto v_reusejp_5896_;
}
else
{
lean_object* v_reuseFailAlloc_5898_; 
v_reuseFailAlloc_5898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5898_, 0, v_a_5895_);
v___x_5897_ = v_reuseFailAlloc_5898_;
goto v_reusejp_5896_;
}
v_reusejp_5896_:
{
v_val_5887_ = v___x_5897_;
goto v___jp_5886_;
}
}
v___jp_5886_:
{
lean_object* v___x_5888_; lean_object* v___x_5889_; 
v___x_5888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5888_, 0, v_val_5887_);
v___x_5889_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5884_, v___x_5885_, v___x_5888_, v___f_5862_);
return v___x_5889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5900_, lean_object* v___f_5901_, lean_object* v_x_5902_, lean_object* v___y_5903_){
_start:
{
lean_object* v_res_5904_; 
v_res_5904_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5900_, v___f_5901_, v_x_5902_);
return v_res_5904_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5909_, lean_object* v_a_5910_, lean_object* v___x_5911_, lean_object* v___x_5912_, lean_object* v_x_5913_){
_start:
{
lean_object* v___y_5916_; lean_object* v___y_5917_; uint8_t v___y_5918_; lean_object* v_val_5919_; 
if (lean_obj_tag(v_x_5913_) == 0)
{
lean_object* v_a_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5930_; 
lean_dec(v_a_5910_);
lean_dec(v_a_5909_);
v_a_5922_ = lean_ctor_get(v_x_5913_, 0);
v_isSharedCheck_5930_ = !lean_is_exclusive(v_x_5913_);
if (v_isSharedCheck_5930_ == 0)
{
v___x_5924_ = v_x_5913_;
v_isShared_5925_ = v_isSharedCheck_5930_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_a_5922_);
lean_dec(v_x_5913_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5930_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5927_; 
if (v_isShared_5925_ == 0)
{
v___x_5927_ = v___x_5924_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v_a_5922_);
v___x_5927_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
lean_object* v___x_5928_; 
v___x_5928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5928_, 0, v___x_5927_);
return v___x_5928_;
}
}
}
else
{
lean_object* v_a_5931_; lean_object* v___x_5933_; uint8_t v_isShared_5934_; uint8_t v_isSharedCheck_5964_; 
v_a_5931_ = lean_ctor_get(v_x_5913_, 0);
v_isSharedCheck_5964_ = !lean_is_exclusive(v_x_5913_);
if (v_isSharedCheck_5964_ == 0)
{
v___x_5933_ = v_x_5913_;
v_isShared_5934_ = v_isSharedCheck_5964_;
goto v_resetjp_5932_;
}
else
{
lean_inc(v_a_5931_);
lean_dec(v_x_5913_);
v___x_5933_ = lean_box(0);
v_isShared_5934_ = v_isSharedCheck_5964_;
goto v_resetjp_5932_;
}
v_resetjp_5932_:
{
uint16_t v___y_5936_; lean_object* v___x_5960_; 
v___x_5960_ = l_Lasm_JS_Data_field(v_a_5931_, v___x_5912_);
if (lean_obj_tag(v___x_5960_) == 3)
{
double v_n_5961_; uint16_t v___x_5962_; 
v_n_5961_ = lean_ctor_get_float(v___x_5960_, 0);
lean_dec_ref_known(v___x_5960_, 0);
v___x_5962_ = lean_float_to_uint16(v_n_5961_);
v___y_5936_ = v___x_5962_;
goto v___jp_5935_;
}
else
{
uint16_t v___x_5963_; 
lean_dec(v___x_5960_);
v___x_5963_ = 0;
v___y_5936_ = v___x_5963_;
goto v___jp_5935_;
}
v___jp_5935_:
{
lean_object* v___x_5937_; lean_object* v___f_5938_; lean_object* v___x_5939_; 
v___x_5937_ = lean_box(v___y_5936_);
lean_inc(v_a_5909_);
v___f_5938_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5938_, 0, v___x_5937_);
lean_closure_set(v___f_5938_, 1, v_a_5909_);
lean_closure_set(v___f_5938_, 2, v_a_5910_);
v___x_5939_ = l_Lasm_JS_Data_field(v_a_5931_, v___x_5911_);
lean_dec(v_a_5931_);
if (lean_obj_tag(v___x_5939_) == 9)
{
lean_object* v_value_5940_; lean_object* v___f_5941_; lean_object* v___f_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; uint8_t v___x_5945_; lean_object* v___x_5946_; 
v_value_5940_ = lean_ctor_get(v___x_5939_, 0);
lean_inc(v_value_5940_);
lean_dec_ref_known(v___x_5939_, 2);
v___f_5941_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5941_, 0, v___f_5938_);
v___f_5942_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5942_, 0, v_value_5940_);
lean_closure_set(v___f_5942_, 1, v___f_5941_);
v___x_5943_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5944_ = lean_unsigned_to_nat(0u);
v___x_5945_ = 0;
v___x_5946_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5909_, v___x_5943_);
if (lean_obj_tag(v___x_5946_) == 0)
{
lean_object* v_a_5947_; lean_object* v___x_5949_; 
v_a_5947_ = lean_ctor_get(v___x_5946_, 0);
lean_inc(v_a_5947_);
lean_dec_ref_known(v___x_5946_, 1);
if (v_isShared_5934_ == 0)
{
lean_ctor_set(v___x_5933_, 0, v_a_5947_);
v___x_5949_ = v___x_5933_;
goto v_reusejp_5948_;
}
else
{
lean_object* v_reuseFailAlloc_5950_; 
v_reuseFailAlloc_5950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5950_, 0, v_a_5947_);
v___x_5949_ = v_reuseFailAlloc_5950_;
goto v_reusejp_5948_;
}
v_reusejp_5948_:
{
v___y_5916_ = v___f_5942_;
v___y_5917_ = v___x_5944_;
v___y_5918_ = v___x_5945_;
v_val_5919_ = v___x_5949_;
goto v___jp_5915_;
}
}
else
{
lean_object* v_a_5951_; lean_object* v___x_5953_; 
v_a_5951_ = lean_ctor_get(v___x_5946_, 0);
lean_inc(v_a_5951_);
lean_dec_ref_known(v___x_5946_, 1);
if (v_isShared_5934_ == 0)
{
lean_ctor_set_tag(v___x_5933_, 0);
lean_ctor_set(v___x_5933_, 0, v_a_5951_);
v___x_5953_ = v___x_5933_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5954_; 
v_reuseFailAlloc_5954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5954_, 0, v_a_5951_);
v___x_5953_ = v_reuseFailAlloc_5954_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
v___y_5916_ = v___f_5942_;
v___y_5917_ = v___x_5944_;
v___y_5918_ = v___x_5945_;
v_val_5919_ = v___x_5953_;
goto v___jp_5915_;
}
}
}
else
{
lean_object* v___f_5955_; lean_object* v___x_5956_; uint8_t v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; 
lean_dec(v___x_5939_);
lean_del_object(v___x_5933_);
lean_dec(v_a_5909_);
v___f_5955_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5955_, 0, v___f_5938_);
v___x_5956_ = lean_unsigned_to_nat(0u);
v___x_5957_ = 0;
v___x_5958_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5956_, v___x_5957_, v___x_5958_, v___f_5955_);
return v___x_5959_;
}
}
}
}
v___jp_5915_:
{
lean_object* v___x_5920_; lean_object* v___x_5921_; 
v___x_5920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5920_, 0, v_val_5919_);
v___x_5921_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5917_, v___y_5918_, v___x_5920_, v___y_5916_);
return v___x_5921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5965_, lean_object* v_a_5966_, lean_object* v___x_5967_, lean_object* v___x_5968_, lean_object* v_x_5969_, lean_object* v___y_5970_){
_start:
{
lean_object* v_res_5971_; 
v_res_5971_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5965_, v_a_5966_, v___x_5967_, v___x_5968_, v_x_5969_);
lean_dec_ref(v___x_5968_);
lean_dec_ref(v___x_5967_);
return v_res_5971_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; 
v___x_5972_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5973_ = lean_unsigned_to_nat(2u);
v___x_5974_ = lean_mk_empty_array_with_capacity(v___x_5973_);
v___x_5975_ = lean_array_push(v___x_5974_, v___x_5972_);
return v___x_5975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5976_, lean_object* v___x_5977_, lean_object* v_x_5978_){
_start:
{
if (lean_obj_tag(v_x_5978_) == 0)
{
lean_object* v_a_5980_; lean_object* v___x_5982_; uint8_t v_isShared_5983_; uint8_t v_isSharedCheck_5988_; 
lean_dec_ref(v___x_5977_);
lean_dec(v_a_5976_);
v_a_5980_ = lean_ctor_get(v_x_5978_, 0);
v_isSharedCheck_5988_ = !lean_is_exclusive(v_x_5978_);
if (v_isSharedCheck_5988_ == 0)
{
v___x_5982_ = v_x_5978_;
v_isShared_5983_ = v_isSharedCheck_5988_;
goto v_resetjp_5981_;
}
else
{
lean_inc(v_a_5980_);
lean_dec(v_x_5978_);
v___x_5982_ = lean_box(0);
v_isShared_5983_ = v_isSharedCheck_5988_;
goto v_resetjp_5981_;
}
v_resetjp_5981_:
{
lean_object* v___x_5985_; 
if (v_isShared_5983_ == 0)
{
v___x_5985_ = v___x_5982_;
goto v_reusejp_5984_;
}
else
{
lean_object* v_reuseFailAlloc_5987_; 
v_reuseFailAlloc_5987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5987_, 0, v_a_5980_);
v___x_5985_ = v_reuseFailAlloc_5987_;
goto v_reusejp_5984_;
}
v_reusejp_5984_:
{
lean_object* v___x_5986_; 
v___x_5986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5986_, 0, v___x_5985_);
return v___x_5986_;
}
}
}
else
{
lean_object* v_a_5989_; lean_object* v___x_5991_; uint8_t v_isShared_5992_; uint8_t v_isSharedCheck_6012_; 
v_a_5989_ = lean_ctor_get(v_x_5978_, 0);
v_isSharedCheck_6012_ = !lean_is_exclusive(v_x_5978_);
if (v_isSharedCheck_6012_ == 0)
{
v___x_5991_ = v_x_5978_;
v_isShared_5992_ = v_isSharedCheck_6012_;
goto v_resetjp_5990_;
}
else
{
lean_inc(v_a_5989_);
lean_dec(v_x_5978_);
v___x_5991_ = lean_box(0);
v_isShared_5992_ = v_isSharedCheck_6012_;
goto v_resetjp_5990_;
}
v_resetjp_5990_:
{
lean_object* v___x_5993_; lean_object* v___f_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; uint8_t v___x_5998_; lean_object* v_val_6000_; lean_object* v___x_6003_; 
v___x_5993_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5977_);
lean_inc(v_a_5989_);
v___f_5994_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5994_, 0, v_a_5976_);
lean_closure_set(v___f_5994_, 1, v_a_5989_);
lean_closure_set(v___f_5994_, 2, v___x_5977_);
lean_closure_set(v___f_5994_, 3, v___x_5993_);
v___x_5995_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5996_ = lean_array_push(v___x_5995_, v___x_5977_);
v___x_5997_ = lean_unsigned_to_nat(0u);
v___x_5998_ = 0;
v___x_6003_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5989_, v___x_5996_);
if (lean_obj_tag(v___x_6003_) == 0)
{
lean_object* v_a_6004_; lean_object* v___x_6006_; 
v_a_6004_ = lean_ctor_get(v___x_6003_, 0);
lean_inc(v_a_6004_);
lean_dec_ref_known(v___x_6003_, 1);
if (v_isShared_5992_ == 0)
{
lean_ctor_set(v___x_5991_, 0, v_a_6004_);
v___x_6006_ = v___x_5991_;
goto v_reusejp_6005_;
}
else
{
lean_object* v_reuseFailAlloc_6007_; 
v_reuseFailAlloc_6007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6007_, 0, v_a_6004_);
v___x_6006_ = v_reuseFailAlloc_6007_;
goto v_reusejp_6005_;
}
v_reusejp_6005_:
{
v_val_6000_ = v___x_6006_;
goto v___jp_5999_;
}
}
else
{
lean_object* v_a_6008_; lean_object* v___x_6010_; 
v_a_6008_ = lean_ctor_get(v___x_6003_, 0);
lean_inc(v_a_6008_);
lean_dec_ref_known(v___x_6003_, 1);
if (v_isShared_5992_ == 0)
{
lean_ctor_set_tag(v___x_5991_, 0);
lean_ctor_set(v___x_5991_, 0, v_a_6008_);
v___x_6010_ = v___x_5991_;
goto v_reusejp_6009_;
}
else
{
lean_object* v_reuseFailAlloc_6011_; 
v_reuseFailAlloc_6011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6011_, 0, v_a_6008_);
v___x_6010_ = v_reuseFailAlloc_6011_;
goto v_reusejp_6009_;
}
v_reusejp_6009_:
{
v_val_6000_ = v___x_6010_;
goto v___jp_5999_;
}
}
v___jp_5999_:
{
lean_object* v___x_6001_; lean_object* v___x_6002_; 
v___x_6001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6001_, 0, v_val_6000_);
v___x_6002_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5997_, v___x_5998_, v___x_6001_, v___f_5994_);
return v___x_6002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_6013_, lean_object* v___x_6014_, lean_object* v_x_6015_, lean_object* v___y_6016_){
_start:
{
lean_object* v_res_6017_; 
v_res_6017_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_6013_, v___x_6014_, v_x_6015_);
return v_res_6017_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_6019_; uint8_t v___x_6020_; uint64_t v___x_6021_; 
v___x_6019_ = 0ULL;
v___x_6020_ = 0;
v___x_6021_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_6020_, v___x_6019_);
return v___x_6021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_6022_, lean_object* v_args_6023_, lean_object* v_this_6024_){
_start:
{
lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; uint32_t v___x_6029_; uint64_t v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; 
v___x_6026_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_6027_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6027_, 0, v_f_6022_);
lean_ctor_set(v___x_6027_, 1, v___x_6026_);
v___x_6028_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_6029_ = 205;
v___x_6030_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_6031_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6031_, 0, v_args_6023_);
v___x_6032_ = lean_unsigned_to_nat(3u);
v___x_6033_ = lean_mk_empty_array_with_capacity(v___x_6032_);
v___x_6034_ = lean_array_push(v___x_6033_, v___x_6027_);
v___x_6035_ = lean_array_push(v___x_6034_, v_this_6024_);
v___x_6036_ = lean_array_push(v___x_6035_, v___x_6031_);
v___x_6037_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6037_, 0, v___x_6036_);
v___x_6038_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_6028_, v___x_6029_, v___x_6030_, v___x_6037_, v___x_6026_);
return v___x_6038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_6039_, lean_object* v_args_6040_, lean_object* v_this_6041_, lean_object* v___y_6042_){
_start:
{
lean_object* v_res_6043_; 
v_res_6043_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_6039_, v_args_6040_, v_this_6041_);
return v_res_6043_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_6054_, lean_object* v_a_6055_, lean_object* v_x_6056_){
_start:
{
if (lean_obj_tag(v_x_6056_) == 0)
{
lean_object* v_a_6058_; lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6066_; 
lean_dec(v_a_6055_);
lean_dec_ref(v_req_6054_);
v_a_6058_ = lean_ctor_get(v_x_6056_, 0);
v_isSharedCheck_6066_ = !lean_is_exclusive(v_x_6056_);
if (v_isSharedCheck_6066_ == 0)
{
v___x_6060_ = v_x_6056_;
v_isShared_6061_ = v_isSharedCheck_6066_;
goto v_resetjp_6059_;
}
else
{
lean_inc(v_a_6058_);
lean_dec(v_x_6056_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6066_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___x_6063_; 
if (v_isShared_6061_ == 0)
{
v___x_6063_ = v___x_6060_;
goto v_reusejp_6062_;
}
else
{
lean_object* v_reuseFailAlloc_6065_; 
v_reuseFailAlloc_6065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6065_, 0, v_a_6058_);
v___x_6063_ = v_reuseFailAlloc_6065_;
goto v_reusejp_6062_;
}
v_reusejp_6062_:
{
lean_object* v___x_6064_; 
v___x_6064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6064_, 0, v___x_6063_);
return v___x_6064_;
}
}
}
else
{
lean_object* v_a_6067_; lean_object* v_method_6068_; lean_object* v_url_6069_; lean_object* v_headers_6070_; lean_object* v_body_6071_; lean_object* v___y_6073_; lean_object* v___x_6103_; uint8_t v___x_6104_; 
v_a_6067_ = lean_ctor_get(v_x_6056_, 0);
lean_inc(v_a_6067_);
lean_dec_ref_known(v_x_6056_, 1);
v_method_6068_ = lean_ctor_get(v_req_6054_, 0);
lean_inc_ref(v_method_6068_);
v_url_6069_ = lean_ctor_get(v_req_6054_, 1);
lean_inc_ref(v_url_6069_);
v_headers_6070_ = lean_ctor_get(v_req_6054_, 2);
lean_inc_ref(v_headers_6070_);
v_body_6071_ = lean_ctor_get(v_req_6054_, 3);
lean_inc_ref(v_body_6071_);
lean_dec_ref(v_req_6054_);
v___x_6103_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_6104_ = lean_string_dec_eq(v_method_6068_, v___x_6103_);
if (v___x_6104_ == 0)
{
lean_object* v___x_6105_; uint8_t v___x_6106_; 
v___x_6105_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_6106_ = lean_string_dec_eq(v_method_6068_, v___x_6105_);
if (v___x_6106_ == 0)
{
lean_object* v___x_6107_; 
v___x_6107_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_6107_, 0, v_body_6071_);
v___y_6073_ = v___x_6107_;
goto v___jp_6072_;
}
else
{
lean_dec_ref(v_body_6071_);
goto v___jp_6101_;
}
}
else
{
lean_dec_ref(v_body_6071_);
goto v___jp_6101_;
}
v___jp_6072_:
{
lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___f_6078_; size_t v_sz_6079_; size_t v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; uint8_t v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; 
v___x_6074_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_6075_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6075_, 0, v_method_6068_);
v___x_6076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6076_, 0, v___x_6074_);
lean_ctor_set(v___x_6076_, 1, v___x_6075_);
v___x_6077_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_6078_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_6078_, 0, v_a_6055_);
lean_closure_set(v___f_6078_, 1, v___x_6077_);
v_sz_6079_ = lean_array_size(v_headers_6070_);
v___x_6080_ = ((size_t)0ULL);
v___x_6081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_6079_, v___x_6080_, v_headers_6070_);
v___x_6082_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6082_, 0, v___x_6081_);
v___x_6083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6077_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_6085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6085_, 0, v___x_6084_);
lean_ctor_set(v___x_6085_, 1, v___y_6073_);
v___x_6086_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_6087_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6087_, 0, v___x_6085_);
lean_ctor_set(v___x_6087_, 1, v___x_6086_);
v___x_6088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6088_, 0, v___x_6083_);
lean_ctor_set(v___x_6088_, 1, v___x_6087_);
v___x_6089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6076_);
lean_ctor_set(v___x_6089_, 1, v___x_6088_);
v___x_6090_ = l_Lasm_JS_obj(v___x_6089_);
v___x_6091_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6091_, 0, v_url_6069_);
v___x_6092_ = lean_unsigned_to_nat(2u);
v___x_6093_ = lean_mk_empty_array_with_capacity(v___x_6092_);
v___x_6094_ = lean_array_push(v___x_6093_, v___x_6091_);
v___x_6095_ = lean_array_push(v___x_6094_, v___x_6090_);
v___x_6096_ = lean_box(0);
v___x_6097_ = lean_unsigned_to_nat(0u);
v___x_6098_ = 0;
v___x_6099_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_6067_, v___x_6095_, v___x_6096_);
v___x_6100_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6097_, v___x_6098_, v___x_6099_, v___f_6078_);
return v___x_6100_;
}
v___jp_6101_:
{
lean_object* v___x_6102_; 
v___x_6102_ = lean_box(0);
v___y_6073_ = v___x_6102_;
goto v___jp_6072_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_6108_, lean_object* v_a_6109_, lean_object* v_x_6110_, lean_object* v___y_6111_){
_start:
{
lean_object* v_res_6112_; 
v_res_6112_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_6108_, v_a_6109_, v_x_6110_);
return v_res_6112_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_6114_, lean_object* v_x_6115_){
_start:
{
if (lean_obj_tag(v_x_6115_) == 0)
{
lean_object* v_a_6117_; lean_object* v___x_6119_; uint8_t v_isShared_6120_; uint8_t v_isSharedCheck_6125_; 
lean_dec_ref(v_req_6114_);
v_a_6117_ = lean_ctor_get(v_x_6115_, 0);
v_isSharedCheck_6125_ = !lean_is_exclusive(v_x_6115_);
if (v_isSharedCheck_6125_ == 0)
{
v___x_6119_ = v_x_6115_;
v_isShared_6120_ = v_isSharedCheck_6125_;
goto v_resetjp_6118_;
}
else
{
lean_inc(v_a_6117_);
lean_dec(v_x_6115_);
v___x_6119_ = lean_box(0);
v_isShared_6120_ = v_isSharedCheck_6125_;
goto v_resetjp_6118_;
}
v_resetjp_6118_:
{
lean_object* v___x_6122_; 
if (v_isShared_6120_ == 0)
{
v___x_6122_ = v___x_6119_;
goto v_reusejp_6121_;
}
else
{
lean_object* v_reuseFailAlloc_6124_; 
v_reuseFailAlloc_6124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6124_, 0, v_a_6117_);
v___x_6122_ = v_reuseFailAlloc_6124_;
goto v_reusejp_6121_;
}
v_reusejp_6121_:
{
lean_object* v___x_6123_; 
v___x_6123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6123_, 0, v___x_6122_);
return v___x_6123_;
}
}
}
else
{
lean_object* v_a_6126_; lean_object* v___x_6128_; uint8_t v_isShared_6129_; uint8_t v_isSharedCheck_6147_; 
v_a_6126_ = lean_ctor_get(v_x_6115_, 0);
v_isSharedCheck_6147_ = !lean_is_exclusive(v_x_6115_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6128_ = v_x_6115_;
v_isShared_6129_ = v_isSharedCheck_6147_;
goto v_resetjp_6127_;
}
else
{
lean_inc(v_a_6126_);
lean_dec(v_x_6115_);
v___x_6128_ = lean_box(0);
v_isShared_6129_ = v_isSharedCheck_6147_;
goto v_resetjp_6127_;
}
v_resetjp_6127_:
{
lean_object* v___f_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; uint8_t v___x_6133_; lean_object* v_val_6135_; lean_object* v___x_6138_; 
lean_inc(v_a_6126_);
v___f_6130_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_6130_, 0, v_req_6114_);
lean_closure_set(v___f_6130_, 1, v_a_6126_);
v___x_6131_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_6132_ = lean_unsigned_to_nat(0u);
v___x_6133_ = 0;
v___x_6138_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_6126_, v___x_6131_);
if (lean_obj_tag(v___x_6138_) == 0)
{
lean_object* v_a_6139_; lean_object* v___x_6141_; 
v_a_6139_ = lean_ctor_get(v___x_6138_, 0);
lean_inc(v_a_6139_);
lean_dec_ref_known(v___x_6138_, 1);
if (v_isShared_6129_ == 0)
{
lean_ctor_set(v___x_6128_, 0, v_a_6139_);
v___x_6141_ = v___x_6128_;
goto v_reusejp_6140_;
}
else
{
lean_object* v_reuseFailAlloc_6142_; 
v_reuseFailAlloc_6142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6142_, 0, v_a_6139_);
v___x_6141_ = v_reuseFailAlloc_6142_;
goto v_reusejp_6140_;
}
v_reusejp_6140_:
{
v_val_6135_ = v___x_6141_;
goto v___jp_6134_;
}
}
else
{
lean_object* v_a_6143_; lean_object* v___x_6145_; 
v_a_6143_ = lean_ctor_get(v___x_6138_, 0);
lean_inc(v_a_6143_);
lean_dec_ref_known(v___x_6138_, 1);
if (v_isShared_6129_ == 0)
{
lean_ctor_set_tag(v___x_6128_, 0);
lean_ctor_set(v___x_6128_, 0, v_a_6143_);
v___x_6145_ = v___x_6128_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6146_; 
v_reuseFailAlloc_6146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6146_, 0, v_a_6143_);
v___x_6145_ = v_reuseFailAlloc_6146_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
v_val_6135_ = v___x_6145_;
goto v___jp_6134_;
}
}
v___jp_6134_:
{
lean_object* v___x_6136_; lean_object* v___x_6137_; 
v___x_6136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6136_, 0, v_val_6135_);
v___x_6137_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6132_, v___x_6133_, v___x_6136_, v___f_6130_);
return v___x_6137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_6148_, lean_object* v_x_6149_, lean_object* v___y_6150_){
_start:
{
lean_object* v_res_6151_; 
v_res_6151_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_6148_, v_x_6149_);
return v_res_6151_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_6152_){
_start:
{
lean_object* v___f_6154_; lean_object* v___x_6155_; uint8_t v___x_6156_; lean_object* v_val_6158_; lean_object* v___x_6161_; 
v___f_6154_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_6154_, 0, v_req_6152_);
v___x_6155_ = lean_unsigned_to_nat(0u);
v___x_6156_ = 0;
v___x_6161_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6161_) == 0)
{
lean_object* v_a_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6169_; 
v_a_6162_ = lean_ctor_get(v___x_6161_, 0);
v_isSharedCheck_6169_ = !lean_is_exclusive(v___x_6161_);
if (v_isSharedCheck_6169_ == 0)
{
v___x_6164_ = v___x_6161_;
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_a_6162_);
lean_dec(v___x_6161_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
lean_object* v___x_6167_; 
if (v_isShared_6165_ == 0)
{
lean_ctor_set_tag(v___x_6164_, 1);
v___x_6167_ = v___x_6164_;
goto v_reusejp_6166_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v_a_6162_);
v___x_6167_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6166_;
}
v_reusejp_6166_:
{
v_val_6158_ = v___x_6167_;
goto v___jp_6157_;
}
}
}
else
{
lean_object* v_a_6170_; lean_object* v___x_6172_; uint8_t v_isShared_6173_; uint8_t v_isSharedCheck_6177_; 
v_a_6170_ = lean_ctor_get(v___x_6161_, 0);
v_isSharedCheck_6177_ = !lean_is_exclusive(v___x_6161_);
if (v_isSharedCheck_6177_ == 0)
{
v___x_6172_ = v___x_6161_;
v_isShared_6173_ = v_isSharedCheck_6177_;
goto v_resetjp_6171_;
}
else
{
lean_inc(v_a_6170_);
lean_dec(v___x_6161_);
v___x_6172_ = lean_box(0);
v_isShared_6173_ = v_isSharedCheck_6177_;
goto v_resetjp_6171_;
}
v_resetjp_6171_:
{
lean_object* v___x_6175_; 
if (v_isShared_6173_ == 0)
{
lean_ctor_set_tag(v___x_6172_, 0);
v___x_6175_ = v___x_6172_;
goto v_reusejp_6174_;
}
else
{
lean_object* v_reuseFailAlloc_6176_; 
v_reuseFailAlloc_6176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6176_, 0, v_a_6170_);
v___x_6175_ = v_reuseFailAlloc_6176_;
goto v_reusejp_6174_;
}
v_reusejp_6174_:
{
v_val_6158_ = v___x_6175_;
goto v___jp_6157_;
}
}
}
v___jp_6157_:
{
lean_object* v___x_6159_; lean_object* v___x_6160_; 
v___x_6159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6159_, 0, v_val_6158_);
v___x_6160_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6155_, v___x_6156_, v___x_6159_, v___f_6154_);
return v___x_6160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_6178_, lean_object* v_a_6179_){
_start:
{
lean_object* v_res_6180_; 
v_res_6180_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6178_);
return v_res_6180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_6181_){
_start:
{
if (lean_obj_tag(v_x_6181_) == 0)
{
lean_object* v_a_6183_; lean_object* v___x_6185_; uint8_t v_isShared_6186_; uint8_t v_isSharedCheck_6191_; 
v_a_6183_ = lean_ctor_get(v_x_6181_, 0);
v_isSharedCheck_6191_ = !lean_is_exclusive(v_x_6181_);
if (v_isSharedCheck_6191_ == 0)
{
v___x_6185_ = v_x_6181_;
v_isShared_6186_ = v_isSharedCheck_6191_;
goto v_resetjp_6184_;
}
else
{
lean_inc(v_a_6183_);
lean_dec(v_x_6181_);
v___x_6185_ = lean_box(0);
v_isShared_6186_ = v_isSharedCheck_6191_;
goto v_resetjp_6184_;
}
v_resetjp_6184_:
{
lean_object* v___x_6188_; 
if (v_isShared_6186_ == 0)
{
v___x_6188_ = v___x_6185_;
goto v_reusejp_6187_;
}
else
{
lean_object* v_reuseFailAlloc_6190_; 
v_reuseFailAlloc_6190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6190_, 0, v_a_6183_);
v___x_6188_ = v_reuseFailAlloc_6190_;
goto v_reusejp_6187_;
}
v_reusejp_6187_:
{
lean_object* v___x_6189_; 
v___x_6189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6189_, 0, v___x_6188_);
return v___x_6189_;
}
}
}
else
{
lean_object* v_a_6192_; lean_object* v___x_6193_; 
v_a_6192_ = lean_ctor_get(v_x_6181_, 0);
lean_inc(v_a_6192_);
lean_dec_ref_known(v_x_6181_, 1);
v___x_6193_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_6192_);
lean_dec(v_a_6192_);
if (lean_obj_tag(v___x_6193_) == 0)
{
lean_object* v_a_6194_; lean_object* v___x_6196_; uint8_t v_isShared_6197_; uint8_t v_isSharedCheck_6203_; 
v_a_6194_ = lean_ctor_get(v___x_6193_, 0);
v_isSharedCheck_6203_ = !lean_is_exclusive(v___x_6193_);
if (v_isSharedCheck_6203_ == 0)
{
v___x_6196_ = v___x_6193_;
v_isShared_6197_ = v_isSharedCheck_6203_;
goto v_resetjp_6195_;
}
else
{
lean_inc(v_a_6194_);
lean_dec(v___x_6193_);
v___x_6196_ = lean_box(0);
v_isShared_6197_ = v_isSharedCheck_6203_;
goto v_resetjp_6195_;
}
v_resetjp_6195_:
{
lean_object* v___x_6198_; lean_object* v___x_6200_; 
v___x_6198_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6198_, 0, v_a_6194_);
if (v_isShared_6197_ == 0)
{
lean_ctor_set(v___x_6196_, 0, v___x_6198_);
v___x_6200_ = v___x_6196_;
goto v_reusejp_6199_;
}
else
{
lean_object* v_reuseFailAlloc_6202_; 
v_reuseFailAlloc_6202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6202_, 0, v___x_6198_);
v___x_6200_ = v_reuseFailAlloc_6202_;
goto v_reusejp_6199_;
}
v_reusejp_6199_:
{
lean_object* v___x_6201_; 
v___x_6201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6201_, 0, v___x_6200_);
return v___x_6201_;
}
}
}
else
{
lean_object* v_a_6204_; lean_object* v___x_6206_; uint8_t v_isShared_6207_; uint8_t v_isSharedCheck_6212_; 
v_a_6204_ = lean_ctor_get(v___x_6193_, 0);
v_isSharedCheck_6212_ = !lean_is_exclusive(v___x_6193_);
if (v_isSharedCheck_6212_ == 0)
{
v___x_6206_ = v___x_6193_;
v_isShared_6207_ = v_isSharedCheck_6212_;
goto v_resetjp_6205_;
}
else
{
lean_inc(v_a_6204_);
lean_dec(v___x_6193_);
v___x_6206_ = lean_box(0);
v_isShared_6207_ = v_isSharedCheck_6212_;
goto v_resetjp_6205_;
}
v_resetjp_6205_:
{
lean_object* v___x_6209_; 
if (v_isShared_6207_ == 0)
{
v___x_6209_ = v___x_6206_;
goto v_reusejp_6208_;
}
else
{
lean_object* v_reuseFailAlloc_6211_; 
v_reuseFailAlloc_6211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6211_, 0, v_a_6204_);
v___x_6209_ = v_reuseFailAlloc_6211_;
goto v_reusejp_6208_;
}
v_reusejp_6208_:
{
lean_object* v___x_6210_; 
v___x_6210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6210_, 0, v___x_6209_);
return v___x_6210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_6213_, lean_object* v___y_6214_){
_start:
{
lean_object* v_res_6215_; 
v_res_6215_ = l_Lasm_Fetch_fetch___lam__0(v_x_6213_);
return v_res_6215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_6221_){
_start:
{
if (lean_obj_tag(v_x_6221_) == 0)
{
lean_object* v___x_6222_; 
v___x_6222_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_6222_;
}
else
{
lean_object* v_val_6223_; 
v_val_6223_ = lean_ctor_get(v_x_6221_, 0);
lean_inc(v_val_6223_);
return v_val_6223_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_6224_){
_start:
{
lean_object* v_res_6225_; 
v_res_6225_ = l_Lasm_Fetch_fetch___lam__1(v_x_6224_);
lean_dec(v_x_6224_);
return v_res_6225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_6226_, lean_object* v___f_6227_, uint8_t v___x_6228_, lean_object* v___f_6229_, lean_object* v_x_6230_){
_start:
{
if (lean_obj_tag(v_x_6230_) == 0)
{
lean_object* v_a_6232_; lean_object* v___x_6234_; uint8_t v_isShared_6235_; uint8_t v_isSharedCheck_6240_; 
lean_dec_ref(v___f_6229_);
lean_dec_ref(v___f_6227_);
v_a_6232_ = lean_ctor_get(v_x_6230_, 0);
v_isSharedCheck_6240_ = !lean_is_exclusive(v_x_6230_);
if (v_isSharedCheck_6240_ == 0)
{
v___x_6234_ = v_x_6230_;
v_isShared_6235_ = v_isSharedCheck_6240_;
goto v_resetjp_6233_;
}
else
{
lean_inc(v_a_6232_);
lean_dec(v_x_6230_);
v___x_6234_ = lean_box(0);
v_isShared_6235_ = v_isSharedCheck_6240_;
goto v_resetjp_6233_;
}
v_resetjp_6233_:
{
lean_object* v___x_6237_; 
if (v_isShared_6235_ == 0)
{
v___x_6237_ = v___x_6234_;
goto v_reusejp_6236_;
}
else
{
lean_object* v_reuseFailAlloc_6239_; 
v_reuseFailAlloc_6239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6239_, 0, v_a_6232_);
v___x_6237_ = v_reuseFailAlloc_6239_;
goto v_reusejp_6236_;
}
v_reusejp_6236_:
{
lean_object* v___x_6238_; 
v___x_6238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6238_, 0, v___x_6237_);
return v___x_6238_;
}
}
}
else
{
lean_object* v___x_6241_; lean_object* v___x_6242_; uint8_t v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
lean_dec_ref_known(v_x_6230_, 1);
v___x_6241_ = lean_io_promise_result_opt(v_a_6226_);
v___x_6242_ = lean_unsigned_to_nat(0u);
v___x_6243_ = 1;
v___x_6244_ = lean_task_map(v___f_6227_, v___x_6241_, v___x_6242_, v___x_6243_);
v___x_6245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6245_, 0, v___x_6244_);
v___x_6246_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6242_, v___x_6228_, v___x_6245_, v___f_6229_);
return v___x_6246_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_6247_, lean_object* v___f_6248_, lean_object* v___x_6249_, lean_object* v___f_6250_, lean_object* v_x_6251_, lean_object* v___y_6252_){
_start:
{
uint8_t v___x_1064__boxed_6253_; lean_object* v_res_6254_; 
v___x_1064__boxed_6253_ = lean_unbox(v___x_6249_);
v_res_6254_ = l_Lasm_Fetch_fetch___lam__2(v_a_6247_, v___f_6248_, v___x_1064__boxed_6253_, v___f_6250_, v_x_6251_);
lean_dec(v_a_6247_);
return v_res_6254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_6255_, lean_object* v___f_6256_, uint8_t v___x_6257_, lean_object* v___f_6258_, lean_object* v_options_6259_, lean_object* v_x_6260_){
_start:
{
if (lean_obj_tag(v_x_6260_) == 0)
{
lean_object* v_a_6262_; lean_object* v___x_6264_; uint8_t v_isShared_6265_; uint8_t v_isSharedCheck_6270_; 
lean_dec_ref(v___f_6258_);
lean_dec_ref(v___f_6256_);
v_a_6262_ = lean_ctor_get(v_x_6260_, 0);
v_isSharedCheck_6270_ = !lean_is_exclusive(v_x_6260_);
if (v_isSharedCheck_6270_ == 0)
{
v___x_6264_ = v_x_6260_;
v_isShared_6265_ = v_isSharedCheck_6270_;
goto v_resetjp_6263_;
}
else
{
lean_inc(v_a_6262_);
lean_dec(v_x_6260_);
v___x_6264_ = lean_box(0);
v_isShared_6265_ = v_isSharedCheck_6270_;
goto v_resetjp_6263_;
}
v_resetjp_6263_:
{
lean_object* v___x_6267_; 
if (v_isShared_6265_ == 0)
{
v___x_6267_ = v___x_6264_;
goto v_reusejp_6266_;
}
else
{
lean_object* v_reuseFailAlloc_6269_; 
v_reuseFailAlloc_6269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6269_, 0, v_a_6262_);
v___x_6267_ = v_reuseFailAlloc_6269_;
goto v_reusejp_6266_;
}
v_reusejp_6266_:
{
lean_object* v___x_6268_; 
v___x_6268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6268_, 0, v___x_6267_);
return v___x_6268_;
}
}
}
else
{
lean_object* v_a_6271_; lean_object* v___x_6273_; uint8_t v_isShared_6274_; uint8_t v_isSharedCheck_6301_; 
v_a_6271_ = lean_ctor_get(v_x_6260_, 0);
v_isSharedCheck_6301_ = !lean_is_exclusive(v_x_6260_);
if (v_isSharedCheck_6301_ == 0)
{
v___x_6273_ = v_x_6260_;
v_isShared_6274_ = v_isSharedCheck_6301_;
goto v_resetjp_6272_;
}
else
{
lean_inc(v_a_6271_);
lean_dec(v_x_6260_);
v___x_6273_ = lean_box(0);
v_isShared_6274_ = v_isSharedCheck_6301_;
goto v_resetjp_6272_;
}
v_resetjp_6272_:
{
lean_object* v_method_6275_; lean_object* v_url_6276_; lean_object* v_headers_6277_; lean_object* v_body_6278_; lean_object* v___x_6279_; lean_object* v___f_6280_; lean_object* v___y_6282_; uint8_t v___y_6283_; lean_object* v_val_6284_; lean_object* v___y_6288_; 
v_method_6275_ = lean_ctor_get(v_req_6255_, 0);
v_url_6276_ = lean_ctor_get(v_req_6255_, 1);
v_headers_6277_ = lean_ctor_get(v_req_6255_, 2);
v_body_6278_ = lean_ctor_get(v_req_6255_, 3);
v___x_6279_ = lean_box(v___x_6257_);
lean_inc(v_a_6271_);
v___f_6280_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6280_, 0, v_a_6271_);
lean_closure_set(v___f_6280_, 1, v___f_6256_);
lean_closure_set(v___f_6280_, 2, v___x_6279_);
lean_closure_set(v___f_6280_, 3, v___f_6258_);
if (lean_obj_tag(v_options_6259_) == 0)
{
lean_object* v___x_6299_; 
v___x_6299_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_6288_ = v___x_6299_;
goto v___jp_6287_;
}
else
{
lean_object* v_val_6300_; 
v_val_6300_ = lean_ctor_get(v_options_6259_, 0);
v___y_6288_ = v_val_6300_;
goto v___jp_6287_;
}
v___jp_6281_:
{
lean_object* v___x_6285_; lean_object* v___x_6286_; 
v___x_6285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6285_, 0, v_val_6284_);
v___x_6286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_6282_, v___y_6283_, v___x_6285_, v___f_6280_);
return v___x_6286_;
}
v___jp_6287_:
{
lean_object* v___x_6289_; lean_object* v___x_6290_; 
v___x_6289_ = lean_unsigned_to_nat(0u);
v___x_6290_ = lasm_fetch_send(v_a_6271_, v_method_6275_, v_url_6276_, v_headers_6277_, v_body_6278_, v___y_6288_);
lean_dec(v_a_6271_);
if (lean_obj_tag(v___x_6290_) == 0)
{
lean_object* v_a_6291_; lean_object* v___x_6293_; 
v_a_6291_ = lean_ctor_get(v___x_6290_, 0);
lean_inc(v_a_6291_);
lean_dec_ref_known(v___x_6290_, 1);
if (v_isShared_6274_ == 0)
{
lean_ctor_set(v___x_6273_, 0, v_a_6291_);
v___x_6293_ = v___x_6273_;
goto v_reusejp_6292_;
}
else
{
lean_object* v_reuseFailAlloc_6294_; 
v_reuseFailAlloc_6294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6294_, 0, v_a_6291_);
v___x_6293_ = v_reuseFailAlloc_6294_;
goto v_reusejp_6292_;
}
v_reusejp_6292_:
{
v___y_6282_ = v___x_6289_;
v___y_6283_ = v___x_6257_;
v_val_6284_ = v___x_6293_;
goto v___jp_6281_;
}
}
else
{
lean_object* v_a_6295_; lean_object* v___x_6297_; 
v_a_6295_ = lean_ctor_get(v___x_6290_, 0);
lean_inc(v_a_6295_);
lean_dec_ref_known(v___x_6290_, 1);
if (v_isShared_6274_ == 0)
{
lean_ctor_set_tag(v___x_6273_, 0);
lean_ctor_set(v___x_6273_, 0, v_a_6295_);
v___x_6297_ = v___x_6273_;
goto v_reusejp_6296_;
}
else
{
lean_object* v_reuseFailAlloc_6298_; 
v_reuseFailAlloc_6298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6298_, 0, v_a_6295_);
v___x_6297_ = v_reuseFailAlloc_6298_;
goto v_reusejp_6296_;
}
v_reusejp_6296_:
{
v___y_6282_ = v___x_6289_;
v___y_6283_ = v___x_6257_;
v_val_6284_ = v___x_6297_;
goto v___jp_6281_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_6302_, lean_object* v___f_6303_, lean_object* v___x_6304_, lean_object* v___f_6305_, lean_object* v_options_6306_, lean_object* v_x_6307_, lean_object* v___y_6308_){
_start:
{
uint8_t v___x_1113__boxed_6309_; lean_object* v_res_6310_; 
v___x_1113__boxed_6309_ = lean_unbox(v___x_6304_);
v_res_6310_ = l_Lasm_Fetch_fetch___lam__3(v_req_6302_, v___f_6303_, v___x_1113__boxed_6309_, v___f_6305_, v_options_6306_, v_x_6307_);
lean_dec(v_options_6306_);
lean_dec_ref(v_req_6302_);
return v_res_6310_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_6311_; uint32_t v___x_6312_; 
v___x_6311_ = lean_box(0);
v___x_6312_ = lasm_fetch_platform(v___x_6311_);
return v___x_6312_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_6313_; uint32_t v___x_6314_; uint8_t v___x_6315_; 
v___x_6313_ = 0;
v___x_6314_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6315_ = lean_uint32_dec_eq(v___x_6314_, v___x_6313_);
return v___x_6315_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_6318_; uint32_t v___x_6319_; uint8_t v___x_6320_; 
v___x_6318_ = 2;
v___x_6319_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6320_ = lean_uint32_dec_eq(v___x_6319_, v___x_6318_);
return v___x_6320_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_6321_; uint32_t v___x_6322_; uint8_t v___x_6323_; 
v___x_6321_ = 4;
v___x_6322_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6323_ = lean_uint32_dec_eq(v___x_6322_, v___x_6321_);
return v___x_6323_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_6324_; uint32_t v___x_6325_; uint8_t v___x_6326_; 
v___x_6324_ = 1;
v___x_6325_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_6326_ = lean_uint32_dec_eq(v___x_6325_, v___x_6324_);
return v___x_6326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_6341_, lean_object* v_options_6342_){
_start:
{
uint8_t v___x_6344_; 
v___x_6344_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6344_ == 0)
{
lean_object* v___f_6345_; lean_object* v___f_6346_; lean_object* v___x_6347_; lean_object* v___f_6348_; uint8_t v___x_6355_; 
v___f_6345_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6346_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6347_ = lean_box(v___x_6344_);
v___f_6348_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6348_, 0, v_req_6341_);
lean_closure_set(v___f_6348_, 1, v___f_6346_);
lean_closure_set(v___f_6348_, 2, v___x_6347_);
lean_closure_set(v___f_6348_, 3, v___f_6345_);
lean_closure_set(v___f_6348_, 4, v_options_6342_);
v___x_6355_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6355_ == 0)
{
uint8_t v___x_6356_; 
v___x_6356_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6356_ == 0)
{
uint8_t v___x_6357_; 
lean_dec_ref(v___f_6348_);
v___x_6357_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6357_ == 0)
{
lean_object* v___x_6358_; 
v___x_6358_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6358_;
}
else
{
lean_object* v___x_6359_; 
v___x_6359_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6359_;
}
}
else
{
goto v___jp_6349_;
}
}
else
{
goto v___jp_6349_;
}
v___jp_6349_:
{
lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; 
v___x_6350_ = lean_unsigned_to_nat(0u);
v___x_6351_ = lean_io_promise_new();
v___x_6352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6352_, 0, v___x_6351_);
v___x_6353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6353_, 0, v___x_6352_);
v___x_6354_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6350_, v___x_6344_, v___x_6353_, v___f_6348_);
return v___x_6354_;
}
}
else
{
lean_object* v___x_6360_; 
lean_dec(v_options_6342_);
v___x_6360_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_6341_);
return v___x_6360_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6361_, lean_object* v_options_6362_, lean_object* v_a_6363_){
_start:
{
lean_object* v_res_6364_; 
v_res_6364_ = l_Lasm_Fetch_fetch(v_req_6361_, v_options_6362_);
return v_res_6364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6365_, lean_object* v_headers_6366_, lean_object* v_options_6367_){
_start:
{
lean_object* v___x_6369_; lean_object* v___x_6370_; lean_object* v___f_6371_; lean_object* v___x_6372_; lean_object* v___x_6373_; 
v___x_6369_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_6370_ = l_ByteArray_empty;
v___f_6371_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6372_, 0, v___x_6369_);
lean_ctor_set(v___x_6372_, 1, v_url_6365_);
lean_ctor_set(v___x_6372_, 2, v_headers_6366_);
lean_ctor_set(v___x_6372_, 3, v___x_6370_);
lean_ctor_set(v___x_6372_, 4, v___f_6371_);
v___x_6373_ = l_Lasm_Fetch_fetch(v___x_6372_, v_options_6367_);
return v___x_6373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6374_, lean_object* v_headers_6375_, lean_object* v_options_6376_, lean_object* v_a_6377_){
_start:
{
lean_object* v_res_6378_; 
v_res_6378_ = l_Lasm_Fetch_get(v_url_6374_, v_headers_6375_, v_options_6376_);
return v_res_6378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6380_, lean_object* v_body_6381_, lean_object* v_contentType_6382_, lean_object* v_headers_6383_, lean_object* v_options_6384_){
_start:
{
lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; lean_object* v___f_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; 
v___x_6386_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6387_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6388_, 0, v___x_6387_);
lean_ctor_set(v___x_6388_, 1, v_contentType_6382_);
v___x_6389_ = lean_unsigned_to_nat(1u);
v___x_6390_ = lean_mk_empty_array_with_capacity(v___x_6389_);
v___x_6391_ = lean_array_push(v___x_6390_, v___x_6388_);
v___x_6392_ = l_Array_append___redArg(v___x_6391_, v_headers_6383_);
v___f_6393_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6394_, 0, v___x_6386_);
lean_ctor_set(v___x_6394_, 1, v_url_6380_);
lean_ctor_set(v___x_6394_, 2, v___x_6392_);
lean_ctor_set(v___x_6394_, 3, v_body_6381_);
lean_ctor_set(v___x_6394_, 4, v___f_6393_);
v___x_6395_ = l_Lasm_Fetch_fetch(v___x_6394_, v_options_6384_);
return v___x_6395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6396_, lean_object* v_body_6397_, lean_object* v_contentType_6398_, lean_object* v_headers_6399_, lean_object* v_options_6400_, lean_object* v_a_6401_){
_start:
{
lean_object* v_res_6402_; 
v_res_6402_ = l_Lasm_Fetch_post(v_url_6396_, v_body_6397_, v_contentType_6398_, v_headers_6399_, v_options_6400_);
lean_dec_ref(v_headers_6399_);
return v_res_6402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6403_){
_start:
{
lean_object* v_body_6404_; uint8_t v___x_6405_; 
v_body_6404_ = lean_ctor_get(v_r_6403_, 1);
lean_inc_ref(v_body_6404_);
lean_dec_ref(v_r_6403_);
v___x_6405_ = lean_string_validate_utf8(v_body_6404_);
if (v___x_6405_ == 0)
{
lean_object* v___x_6406_; 
lean_dec_ref(v_body_6404_);
v___x_6406_ = lean_box(0);
return v___x_6406_;
}
else
{
lean_object* v___x_6407_; lean_object* v___x_6408_; 
v___x_6407_ = lean_string_from_utf8_unchecked(v_body_6404_);
v___x_6408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6408_, 0, v___x_6407_);
return v___x_6408_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6409_, lean_object* v_name_6410_){
_start:
{
lean_object* v_headers_6411_; lean_object* v_n_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; size_t v_sz_6415_; size_t v___x_6416_; lean_object* v___x_6417_; lean_object* v_fst_6418_; 
v_headers_6411_ = lean_ctor_get(v_r_6409_, 0);
v_n_6412_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6410_);
v___x_6413_ = lean_box(0);
v___x_6414_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6415_ = lean_array_size(v_headers_6411_);
v___x_6416_ = ((size_t)0ULL);
v___x_6417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6412_, v_headers_6411_, v_sz_6415_, v___x_6416_, v___x_6414_);
lean_dec_ref(v_n_6412_);
v_fst_6418_ = lean_ctor_get(v___x_6417_, 0);
lean_inc(v_fst_6418_);
lean_dec_ref(v___x_6417_);
if (lean_obj_tag(v_fst_6418_) == 0)
{
return v___x_6413_;
}
else
{
lean_object* v_val_6419_; 
v_val_6419_ = lean_ctor_get(v_fst_6418_, 0);
lean_inc(v_val_6419_);
lean_dec_ref_known(v_fst_6418_, 1);
if (lean_obj_tag(v_val_6419_) == 0)
{
return v___x_6413_;
}
else
{
lean_object* v_val_6420_; lean_object* v___x_6422_; uint8_t v_isShared_6423_; uint8_t v_isSharedCheck_6428_; 
v_val_6420_ = lean_ctor_get(v_val_6419_, 0);
v_isSharedCheck_6428_ = !lean_is_exclusive(v_val_6419_);
if (v_isSharedCheck_6428_ == 0)
{
v___x_6422_ = v_val_6419_;
v_isShared_6423_ = v_isSharedCheck_6428_;
goto v_resetjp_6421_;
}
else
{
lean_inc(v_val_6420_);
lean_dec(v_val_6419_);
v___x_6422_ = lean_box(0);
v_isShared_6423_ = v_isSharedCheck_6428_;
goto v_resetjp_6421_;
}
v_resetjp_6421_:
{
lean_object* v_snd_6424_; lean_object* v___x_6426_; 
v_snd_6424_ = lean_ctor_get(v_val_6420_, 1);
lean_inc(v_snd_6424_);
lean_dec(v_val_6420_);
if (v_isShared_6423_ == 0)
{
lean_ctor_set(v___x_6422_, 0, v_snd_6424_);
v___x_6426_ = v___x_6422_;
goto v_reusejp_6425_;
}
else
{
lean_object* v_reuseFailAlloc_6427_; 
v_reuseFailAlloc_6427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6427_, 0, v_snd_6424_);
v___x_6426_ = v_reuseFailAlloc_6427_;
goto v_reusejp_6425_;
}
v_reusejp_6425_:
{
return v___x_6426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6429_, lean_object* v_name_6430_){
_start:
{
lean_object* v_res_6431_; 
v_res_6431_ = l_Lasm_Fetch_Response_header_x3f(v_r_6429_, v_name_6430_);
lean_dec_ref(v_r_6429_);
return v_res_6431_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6432_){
_start:
{
if (lean_obj_tag(v_x_6432_) == 0)
{
lean_object* v_a_6433_; lean_object* v___x_6434_; 
v_a_6433_ = lean_ctor_get(v_x_6432_, 0);
lean_inc(v_a_6433_);
lean_dec_ref_known(v_x_6432_, 1);
v___x_6434_ = lean_task_pure(v_a_6433_);
return v___x_6434_;
}
else
{
lean_object* v_a_6435_; 
v_a_6435_ = lean_ctor_get(v_x_6432_, 0);
lean_inc_ref(v_a_6435_);
lean_dec_ref_known(v_x_6432_, 1);
return v_a_6435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6436_){
_start:
{
if (lean_obj_tag(v_x_6436_) == 0)
{
lean_object* v_a_6437_; lean_object* v___x_6438_; 
v_a_6437_ = lean_ctor_get(v_x_6436_, 0);
lean_inc(v_a_6437_);
lean_dec_ref_known(v_x_6436_, 1);
v___x_6438_ = lean_task_pure(v_a_6437_);
return v___x_6438_;
}
else
{
lean_object* v_a_6439_; 
v_a_6439_ = lean_ctor_get(v_x_6436_, 0);
lean_inc_ref(v_a_6439_);
lean_dec_ref_known(v_x_6436_, 1);
return v_a_6439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6440_){
_start:
{
lean_object* v_val_6443_; lean_object* v___x_6445_; 
v___x_6445_ = lasm_fetch_write(v_chunk_6440_);
if (lean_obj_tag(v___x_6445_) == 0)
{
lean_object* v_a_6446_; lean_object* v___x_6448_; uint8_t v_isShared_6449_; uint8_t v_isSharedCheck_6453_; 
v_a_6446_ = lean_ctor_get(v___x_6445_, 0);
v_isSharedCheck_6453_ = !lean_is_exclusive(v___x_6445_);
if (v_isSharedCheck_6453_ == 0)
{
v___x_6448_ = v___x_6445_;
v_isShared_6449_ = v_isSharedCheck_6453_;
goto v_resetjp_6447_;
}
else
{
lean_inc(v_a_6446_);
lean_dec(v___x_6445_);
v___x_6448_ = lean_box(0);
v_isShared_6449_ = v_isSharedCheck_6453_;
goto v_resetjp_6447_;
}
v_resetjp_6447_:
{
lean_object* v___x_6451_; 
if (v_isShared_6449_ == 0)
{
lean_ctor_set_tag(v___x_6448_, 1);
v___x_6451_ = v___x_6448_;
goto v_reusejp_6450_;
}
else
{
lean_object* v_reuseFailAlloc_6452_; 
v_reuseFailAlloc_6452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6452_, 0, v_a_6446_);
v___x_6451_ = v_reuseFailAlloc_6452_;
goto v_reusejp_6450_;
}
v_reusejp_6450_:
{
v_val_6443_ = v___x_6451_;
goto v___jp_6442_;
}
}
}
else
{
lean_object* v_a_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6461_; 
v_a_6454_ = lean_ctor_get(v___x_6445_, 0);
v_isSharedCheck_6461_ = !lean_is_exclusive(v___x_6445_);
if (v_isSharedCheck_6461_ == 0)
{
v___x_6456_ = v___x_6445_;
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
else
{
lean_inc(v_a_6454_);
lean_dec(v___x_6445_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v___x_6459_; 
if (v_isShared_6457_ == 0)
{
lean_ctor_set_tag(v___x_6456_, 0);
v___x_6459_ = v___x_6456_;
goto v_reusejp_6458_;
}
else
{
lean_object* v_reuseFailAlloc_6460_; 
v_reuseFailAlloc_6460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6460_, 0, v_a_6454_);
v___x_6459_ = v_reuseFailAlloc_6460_;
goto v_reusejp_6458_;
}
v_reusejp_6458_:
{
v_val_6443_ = v___x_6459_;
goto v___jp_6442_;
}
}
}
v___jp_6442_:
{
lean_object* v___x_6444_; 
v___x_6444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6444_, 0, v_val_6443_);
return v___x_6444_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6462_, lean_object* v___y_6463_){
_start:
{
lean_object* v_res_6464_; 
v_res_6464_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6462_);
lean_dec_ref(v_chunk_6462_);
return v_res_6464_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6465_){
_start:
{
if (lean_obj_tag(v_x_6465_) == 0)
{
lean_object* v_a_6466_; lean_object* v___x_6467_; 
v_a_6466_ = lean_ctor_get(v_x_6465_, 0);
lean_inc(v_a_6466_);
lean_dec_ref_known(v_x_6465_, 1);
v___x_6467_ = lean_task_pure(v_a_6466_);
return v___x_6467_;
}
else
{
lean_object* v_a_6468_; 
v_a_6468_ = lean_ctor_get(v_x_6465_, 0);
lean_inc_ref(v_a_6468_);
lean_dec_ref_known(v_x_6465_, 1);
return v_a_6468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6469_){
_start:
{
lean_object* v___y_6472_; 
if (lean_obj_tag(v_x_6469_) == 0)
{
lean_object* v_a_6475_; lean_object* v___x_6477_; uint8_t v_isShared_6478_; uint8_t v_isSharedCheck_6483_; 
v_a_6475_ = lean_ctor_get(v_x_6469_, 0);
v_isSharedCheck_6483_ = !lean_is_exclusive(v_x_6469_);
if (v_isSharedCheck_6483_ == 0)
{
v___x_6477_ = v_x_6469_;
v_isShared_6478_ = v_isSharedCheck_6483_;
goto v_resetjp_6476_;
}
else
{
lean_inc(v_a_6475_);
lean_dec(v_x_6469_);
v___x_6477_ = lean_box(0);
v_isShared_6478_ = v_isSharedCheck_6483_;
goto v_resetjp_6476_;
}
v_resetjp_6476_:
{
lean_object* v___x_6480_; 
if (v_isShared_6478_ == 0)
{
v___x_6480_ = v___x_6477_;
goto v_reusejp_6479_;
}
else
{
lean_object* v_reuseFailAlloc_6482_; 
v_reuseFailAlloc_6482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6482_, 0, v_a_6475_);
v___x_6480_ = v_reuseFailAlloc_6482_;
goto v_reusejp_6479_;
}
v_reusejp_6479_:
{
lean_object* v___x_6481_; 
v___x_6481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6481_, 0, v___x_6480_);
return v___x_6481_;
}
}
}
else
{
lean_object* v_a_6484_; uint8_t v___x_6485_; 
v_a_6484_ = lean_ctor_get(v_x_6469_, 0);
lean_inc(v_a_6484_);
lean_dec_ref_known(v_x_6469_, 1);
v___x_6485_ = l_ByteArray_isEmpty(v_a_6484_);
if (v___x_6485_ == 0)
{
lean_object* v___x_6486_; 
v___x_6486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6486_, 0, v_a_6484_);
v___y_6472_ = v___x_6486_;
goto v___jp_6471_;
}
else
{
lean_object* v___x_6487_; 
lean_dec(v_a_6484_);
v___x_6487_ = lean_box(0);
v___y_6472_ = v___x_6487_;
goto v___jp_6471_;
}
}
v___jp_6471_:
{
lean_object* v___x_6473_; lean_object* v___x_6474_; 
v___x_6473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6473_, 0, v___y_6472_);
v___x_6474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6474_, 0, v___x_6473_);
return v___x_6474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6488_, lean_object* v___y_6489_){
_start:
{
lean_object* v_res_6490_; 
v_res_6490_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6488_);
return v_res_6490_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6491_, uint32_t v___x_6492_){
_start:
{
lean_object* v___x_6494_; uint8_t v___x_6495_; lean_object* v_val_6497_; lean_object* v___x_6500_; 
v___x_6494_ = lean_unsigned_to_nat(0u);
v___x_6495_ = 0;
v___x_6500_ = lasm_fetch_read(v___x_6492_);
if (lean_obj_tag(v___x_6500_) == 0)
{
lean_object* v_a_6501_; lean_object* v___x_6503_; uint8_t v_isShared_6504_; uint8_t v_isSharedCheck_6508_; 
v_a_6501_ = lean_ctor_get(v___x_6500_, 0);
v_isSharedCheck_6508_ = !lean_is_exclusive(v___x_6500_);
if (v_isSharedCheck_6508_ == 0)
{
v___x_6503_ = v___x_6500_;
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
else
{
lean_inc(v_a_6501_);
lean_dec(v___x_6500_);
v___x_6503_ = lean_box(0);
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
v_resetjp_6502_:
{
lean_object* v___x_6506_; 
if (v_isShared_6504_ == 0)
{
lean_ctor_set_tag(v___x_6503_, 1);
v___x_6506_ = v___x_6503_;
goto v_reusejp_6505_;
}
else
{
lean_object* v_reuseFailAlloc_6507_; 
v_reuseFailAlloc_6507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6507_, 0, v_a_6501_);
v___x_6506_ = v_reuseFailAlloc_6507_;
goto v_reusejp_6505_;
}
v_reusejp_6505_:
{
v_val_6497_ = v___x_6506_;
goto v___jp_6496_;
}
}
}
else
{
lean_object* v_a_6509_; lean_object* v___x_6511_; uint8_t v_isShared_6512_; uint8_t v_isSharedCheck_6516_; 
v_a_6509_ = lean_ctor_get(v___x_6500_, 0);
v_isSharedCheck_6516_ = !lean_is_exclusive(v___x_6500_);
if (v_isSharedCheck_6516_ == 0)
{
v___x_6511_ = v___x_6500_;
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
else
{
lean_inc(v_a_6509_);
lean_dec(v___x_6500_);
v___x_6511_ = lean_box(0);
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
v_resetjp_6510_:
{
lean_object* v___x_6514_; 
if (v_isShared_6512_ == 0)
{
lean_ctor_set_tag(v___x_6511_, 0);
v___x_6514_ = v___x_6511_;
goto v_reusejp_6513_;
}
else
{
lean_object* v_reuseFailAlloc_6515_; 
v_reuseFailAlloc_6515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6515_, 0, v_a_6509_);
v___x_6514_ = v_reuseFailAlloc_6515_;
goto v_reusejp_6513_;
}
v_reusejp_6513_:
{
v_val_6497_ = v___x_6514_;
goto v___jp_6496_;
}
}
}
v___jp_6496_:
{
lean_object* v___x_6498_; lean_object* v___x_6499_; 
v___x_6498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6498_, 0, v_val_6497_);
v___x_6499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6494_, v___x_6495_, v___x_6498_, v___f_6491_);
return v___x_6499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6517_, lean_object* v___x_6518_, lean_object* v___y_6519_){
_start:
{
uint32_t v___x_2044__boxed_6520_; lean_object* v_res_6521_; 
v___x_2044__boxed_6520_ = lean_unbox_uint32(v___x_6518_);
lean_dec(v___x_6518_);
v_res_6521_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6517_, v___x_2044__boxed_6520_);
return v_res_6521_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6522_, lean_object* v_req_6523_){
_start:
{
lean_object* v___x_6525_; 
v___x_6525_ = l_Lasm_Fetch_respond(v_handler_6522_, v_req_6523_);
return v___x_6525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6526_, lean_object* v_req_6527_, lean_object* v___y_6528_){
_start:
{
lean_object* v_res_6529_; 
v_res_6529_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6526_, v_req_6527_);
return v_res_6529_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6530_, lean_object* v___f_6531_){
_start:
{
lean_object* v___x_6533_; 
v___x_6533_ = lean_apply_2(v_val_6530_, v___f_6531_, lean_box(0));
return v___x_6533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6534_, lean_object* v___f_6535_, lean_object* v___y_6536_){
_start:
{
lean_object* v_res_6537_; 
v_res_6537_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6534_, v___f_6535_);
return v_res_6537_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6538_){
_start:
{
lean_object* v___x_6540_; 
v___x_6540_ = l_Lasm_Fetch_Request_readAll(v___x_6538_);
return v___x_6540_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6541_, lean_object* v___y_6542_){
_start:
{
lean_object* v_res_6543_; 
v_res_6543_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6541_);
return v_res_6543_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6549_; lean_object* v___x_6550_; 
v___x_6549_ = 65536;
v___x_6550_ = lean_box_uint32(v___x_6549_);
return v___x_6550_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6551_; lean_object* v___x_6552_; lean_object* v___f_6553_; 
v___f_6551_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6552_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6553_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6553_, 0, v___f_6551_);
lean_closure_set(v___f_6553_, 1, v___x_6552_);
return v___f_6553_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6554_, lean_object* v_options_6555_){
_start:
{
lean_object* v___f_6557_; lean_object* v___f_6558_; lean_object* v___f_6559_; lean_object* v___f_6560_; lean_object* v___x_6561_; 
v___f_6557_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6558_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6559_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6560_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6561_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6561_) == 0)
{
lean_object* v_a_6562_; lean_object* v___x_6564_; uint8_t v_isShared_6565_; uint8_t v_isSharedCheck_6632_; 
v_a_6562_ = lean_ctor_get(v___x_6561_, 0);
v_isSharedCheck_6632_ = !lean_is_exclusive(v___x_6561_);
if (v_isSharedCheck_6632_ == 0)
{
v___x_6564_ = v___x_6561_;
v_isShared_6565_ = v_isSharedCheck_6632_;
goto v_resetjp_6563_;
}
else
{
lean_inc(v_a_6562_);
lean_dec(v___x_6561_);
v___x_6564_ = lean_box(0);
v_isShared_6565_ = v_isSharedCheck_6632_;
goto v_resetjp_6563_;
}
v_resetjp_6563_:
{
lean_object* v_snd_6566_; lean_object* v_fst_6567_; lean_object* v_fst_6568_; lean_object* v_snd_6569_; lean_object* v___f_6570_; lean_object* v___x_6571_; lean_object* v_req_6573_; lean_object* v___x_6611_; lean_object* v___x_6612_; lean_object* v___x_6613_; uint8_t v___x_6614_; 
v_snd_6566_ = lean_ctor_get(v_a_6562_, 1);
lean_inc(v_snd_6566_);
v_fst_6567_ = lean_ctor_get(v_a_6562_, 0);
lean_inc_n(v_fst_6567_, 2);
lean_dec(v_a_6562_);
v_fst_6568_ = lean_ctor_get(v_snd_6566_, 0);
lean_inc_n(v_fst_6568_, 2);
v_snd_6569_ = lean_ctor_get(v_snd_6566_, 1);
lean_inc_n(v_snd_6569_, 2);
lean_dec(v_snd_6566_);
v___f_6570_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6571_ = l_ByteArray_empty;
v___x_6611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6611_, 0, v_fst_6567_);
lean_ctor_set(v___x_6611_, 1, v_fst_6568_);
lean_ctor_set(v___x_6611_, 2, v_snd_6569_);
lean_ctor_set(v___x_6611_, 3, v___x_6571_);
lean_ctor_set(v___x_6611_, 4, v___f_6570_);
lean_inc_ref(v___x_6611_);
v___x_6612_ = l_Lasm_Fetch_Request_path(v___x_6611_);
v___x_6613_ = lean_apply_1(v_options_6555_, v___x_6612_);
v___x_6614_ = lean_unbox(v___x_6613_);
if (v___x_6614_ == 0)
{
lean_object* v___f_6615_; lean_object* v___x_6616_; lean_object* v___x_6617_; uint8_t v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; 
v___f_6615_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6615_, 0, v___x_6611_);
v___x_6616_ = lean_unsigned_to_nat(0u);
v___x_6617_ = lean_io_as_task(v___f_6615_, v___x_6616_);
v___x_6618_ = 1;
v___x_6619_ = lean_task_bind(v___x_6617_, v___f_6557_, v___x_6616_, v___x_6618_);
v___x_6620_ = lean_task_get_own(v___x_6619_);
if (lean_obj_tag(v___x_6620_) == 0)
{
lean_object* v_a_6621_; lean_object* v___x_6623_; uint8_t v_isShared_6624_; uint8_t v_isSharedCheck_6628_; 
lean_dec(v_snd_6569_);
lean_dec(v_fst_6568_);
lean_dec(v_fst_6567_);
lean_del_object(v___x_6564_);
lean_dec_ref(v_handler_6554_);
v_a_6621_ = lean_ctor_get(v___x_6620_, 0);
v_isSharedCheck_6628_ = !lean_is_exclusive(v___x_6620_);
if (v_isSharedCheck_6628_ == 0)
{
v___x_6623_ = v___x_6620_;
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
else
{
lean_inc(v_a_6621_);
lean_dec(v___x_6620_);
v___x_6623_ = lean_box(0);
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
v_resetjp_6622_:
{
lean_object* v___x_6626_; 
if (v_isShared_6624_ == 0)
{
lean_ctor_set_tag(v___x_6623_, 1);
v___x_6626_ = v___x_6623_;
goto v_reusejp_6625_;
}
else
{
lean_object* v_reuseFailAlloc_6627_; 
v_reuseFailAlloc_6627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6627_, 0, v_a_6621_);
v___x_6626_ = v_reuseFailAlloc_6627_;
goto v_reusejp_6625_;
}
v_reusejp_6625_:
{
return v___x_6626_;
}
}
}
else
{
lean_object* v_a_6629_; lean_object* v___f_6630_; lean_object* v___x_6631_; 
v_a_6629_ = lean_ctor_get(v___x_6620_, 0);
lean_inc(v_a_6629_);
lean_dec_ref_known(v___x_6620_, 1);
v___f_6630_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6631_, 0, v_fst_6567_);
lean_ctor_set(v___x_6631_, 1, v_fst_6568_);
lean_ctor_set(v___x_6631_, 2, v_snd_6569_);
lean_ctor_set(v___x_6631_, 3, v_a_6629_);
lean_ctor_set(v___x_6631_, 4, v___f_6630_);
v_req_6573_ = v___x_6631_;
goto v___jp_6572_;
}
}
else
{
lean_dec(v_snd_6569_);
lean_dec(v_fst_6568_);
lean_dec(v_fst_6567_);
v_req_6573_ = v___x_6611_;
goto v___jp_6572_;
}
v___jp_6572_:
{
lean_object* v___f_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; uint8_t v___x_6577_; lean_object* v___x_6578_; lean_object* v___x_6579_; 
lean_inc_ref(v_req_6573_);
v___f_6574_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6574_, 0, v_handler_6554_);
lean_closure_set(v___f_6574_, 1, v_req_6573_);
v___x_6575_ = lean_unsigned_to_nat(0u);
v___x_6576_ = lean_io_as_task(v___f_6574_, v___x_6575_);
v___x_6577_ = 1;
v___x_6578_ = lean_task_bind(v___x_6576_, v___f_6560_, v___x_6575_, v___x_6577_);
v___x_6579_ = lean_task_get_own(v___x_6578_);
if (lean_obj_tag(v___x_6579_) == 0)
{
lean_object* v_a_6580_; lean_object* v___x_6582_; 
lean_dec_ref(v_req_6573_);
v_a_6580_ = lean_ctor_get(v___x_6579_, 0);
lean_inc(v_a_6580_);
lean_dec_ref_known(v___x_6579_, 1);
if (v_isShared_6565_ == 0)
{
lean_ctor_set_tag(v___x_6564_, 1);
lean_ctor_set(v___x_6564_, 0, v_a_6580_);
v___x_6582_ = v___x_6564_;
goto v_reusejp_6581_;
}
else
{
lean_object* v_reuseFailAlloc_6583_; 
v_reuseFailAlloc_6583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6583_, 0, v_a_6580_);
v___x_6582_ = v_reuseFailAlloc_6583_;
goto v_reusejp_6581_;
}
v_reusejp_6581_:
{
return v___x_6582_;
}
}
else
{
lean_object* v_a_6584_; lean_object* v_stream_6585_; 
lean_del_object(v___x_6564_);
v_a_6584_ = lean_ctor_get(v___x_6579_, 0);
lean_inc(v_a_6584_);
lean_dec_ref_known(v___x_6579_, 1);
v_stream_6585_ = lean_ctor_get(v_a_6584_, 2);
if (lean_obj_tag(v_stream_6585_) == 0)
{
uint16_t v_status_6586_; lean_object* v_headers_6587_; lean_object* v_body_6588_; lean_object* v_method_6589_; uint8_t v___x_6590_; 
v_status_6586_ = lean_ctor_get_uint16(v_a_6584_, sizeof(void*)*3);
v_headers_6587_ = lean_ctor_get(v_a_6584_, 0);
lean_inc_ref(v_headers_6587_);
v_body_6588_ = lean_ctor_get(v_a_6584_, 1);
lean_inc_ref(v_body_6588_);
lean_dec(v_a_6584_);
v_method_6589_ = lean_ctor_get(v_req_6573_, 0);
lean_inc_ref(v_method_6589_);
lean_dec_ref(v_req_6573_);
v___x_6590_ = l_Lasm_Fetch_bodyless(v_method_6589_, v_status_6586_);
lean_dec_ref(v_method_6589_);
if (v___x_6590_ == 0)
{
lean_object* v___x_6591_; 
v___x_6591_ = lasm_fetch_send_response(v_status_6586_, v_headers_6587_, v_body_6588_);
lean_dec_ref(v_body_6588_);
lean_dec_ref(v_headers_6587_);
return v___x_6591_;
}
else
{
lean_object* v___x_6592_; 
lean_dec_ref(v_body_6588_);
v___x_6592_ = lasm_fetch_send_response(v_status_6586_, v_headers_6587_, v___x_6571_);
lean_dec_ref(v_headers_6587_);
return v___x_6592_;
}
}
else
{
uint16_t v_status_6593_; lean_object* v_headers_6594_; lean_object* v_val_6595_; lean_object* v___f_6596_; lean_object* v___x_6597_; 
lean_inc_ref(v_stream_6585_);
v_status_6593_ = lean_ctor_get_uint16(v_a_6584_, sizeof(void*)*3);
v_headers_6594_ = lean_ctor_get(v_a_6584_, 0);
lean_inc_ref(v_headers_6594_);
lean_dec(v_a_6584_);
v_val_6595_ = lean_ctor_get(v_stream_6585_, 0);
lean_inc(v_val_6595_);
lean_dec_ref_known(v_stream_6585_, 1);
v___f_6596_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6596_, 0, v_val_6595_);
lean_closure_set(v___f_6596_, 1, v___f_6559_);
v___x_6597_ = lasm_fetch_start_response(v_status_6593_, v_headers_6594_);
lean_dec_ref(v_headers_6594_);
if (lean_obj_tag(v___x_6597_) == 0)
{
lean_object* v_method_6598_; uint8_t v___x_6599_; 
lean_dec_ref_known(v___x_6597_, 1);
v_method_6598_ = lean_ctor_get(v_req_6573_, 0);
lean_inc_ref(v_method_6598_);
lean_dec_ref(v_req_6573_);
v___x_6599_ = l_Lasm_Fetch_bodyless(v_method_6598_, v_status_6593_);
lean_dec_ref(v_method_6598_);
if (v___x_6599_ == 0)
{
lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; 
v___x_6600_ = lean_io_as_task(v___f_6596_, v___x_6575_);
v___x_6601_ = lean_task_bind(v___x_6600_, v___f_6558_, v___x_6575_, v___x_6577_);
v___x_6602_ = lean_task_get_own(v___x_6601_);
if (lean_obj_tag(v___x_6602_) == 0)
{
lean_object* v_a_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; lean_object* v___x_6606_; lean_object* v___x_6607_; 
v_a_6603_ = lean_ctor_get(v___x_6602_, 0);
lean_inc(v_a_6603_);
lean_dec_ref_known(v___x_6602_, 1);
v___x_6604_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6605_ = lean_io_error_to_string(v_a_6603_);
v___x_6606_ = lean_string_append(v___x_6604_, v___x_6605_);
lean_dec_ref(v___x_6605_);
v___x_6607_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6606_);
if (lean_obj_tag(v___x_6607_) == 0)
{
lean_object* v___x_6608_; 
lean_dec_ref_known(v___x_6607_, 1);
v___x_6608_ = lasm_fetch_finish(v___x_6599_);
return v___x_6608_;
}
else
{
return v___x_6607_;
}
}
else
{
lean_object* v___x_6609_; 
lean_dec_ref_known(v___x_6602_, 1);
v___x_6609_ = lasm_fetch_finish(v___x_6577_);
return v___x_6609_;
}
}
else
{
lean_object* v___x_6610_; 
lean_dec_ref(v___f_6596_);
v___x_6610_ = lasm_fetch_finish(v___x_6577_);
return v___x_6610_;
}
}
else
{
lean_dec_ref(v___f_6596_);
lean_dec_ref(v_req_6573_);
return v___x_6597_;
}
}
}
}
}
}
else
{
lean_object* v_a_6633_; lean_object* v___x_6635_; uint8_t v_isShared_6636_; uint8_t v_isSharedCheck_6640_; 
lean_dec_ref(v_options_6555_);
lean_dec_ref(v_handler_6554_);
v_a_6633_ = lean_ctor_get(v___x_6561_, 0);
v_isSharedCheck_6640_ = !lean_is_exclusive(v___x_6561_);
if (v_isSharedCheck_6640_ == 0)
{
v___x_6635_ = v___x_6561_;
v_isShared_6636_ = v_isSharedCheck_6640_;
goto v_resetjp_6634_;
}
else
{
lean_inc(v_a_6633_);
lean_dec(v___x_6561_);
v___x_6635_ = lean_box(0);
v_isShared_6636_ = v_isSharedCheck_6640_;
goto v_resetjp_6634_;
}
v_resetjp_6634_:
{
lean_object* v___x_6638_; 
if (v_isShared_6636_ == 0)
{
v___x_6638_ = v___x_6635_;
goto v_reusejp_6637_;
}
else
{
lean_object* v_reuseFailAlloc_6639_; 
v_reuseFailAlloc_6639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6639_, 0, v_a_6633_);
v___x_6638_ = v_reuseFailAlloc_6639_;
goto v_reusejp_6637_;
}
v_reusejp_6637_:
{
return v___x_6638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6641_, lean_object* v_options_6642_, lean_object* v_a_6643_){
_start:
{
lean_object* v_res_6644_; 
v_res_6644_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6641_, v_options_6642_);
return v_res_6644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6648_, lean_object* v_handler_6649_){
_start:
{
uint8_t v___x_6651_; 
v___x_6651_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6651_ == 0)
{
uint8_t v___x_6652_; 
v___x_6652_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6652_ == 0)
{
uint8_t v___x_6653_; 
v___x_6653_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6653_ == 0)
{
uint8_t v___x_6654_; 
v___x_6654_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6654_ == 0)
{
lean_object* v___x_6655_; lean_object* v___x_6656_; 
lean_dec_ref(v_handler_6649_);
lean_dec_ref(v_options_6648_);
v___x_6655_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6656_, 0, v___x_6655_);
return v___x_6656_;
}
else
{
lean_object* v___x_6657_; 
v___x_6657_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6657_) == 0)
{
lean_object* v_a_6658_; uint8_t v___x_6659_; 
v_a_6658_ = lean_ctor_get(v___x_6657_, 0);
lean_inc(v_a_6658_);
lean_dec_ref_known(v___x_6657_, 1);
v___x_6659_ = lean_unbox(v_a_6658_);
lean_dec(v_a_6658_);
if (v___x_6659_ == 0)
{
lean_object* v___x_6660_; 
v___x_6660_ = l_Lasm_Fetch_serveNode(v_handler_6649_, v_options_6648_);
return v___x_6660_;
}
else
{
lean_object* v___x_6661_; 
v___x_6661_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6649_, v_options_6648_);
if (lean_obj_tag(v___x_6661_) == 0)
{
lean_object* v_a_6662_; lean_object* v___x_6663_; 
v_a_6662_ = lean_ctor_get(v___x_6661_, 0);
lean_inc(v_a_6662_);
lean_dec_ref_known(v___x_6661_, 1);
v___x_6663_ = l_Lasm_JS_exportDefault(v_a_6662_);
return v___x_6663_;
}
else
{
lean_object* v_a_6664_; lean_object* v___x_6666_; uint8_t v_isShared_6667_; uint8_t v_isSharedCheck_6671_; 
v_a_6664_ = lean_ctor_get(v___x_6661_, 0);
v_isSharedCheck_6671_ = !lean_is_exclusive(v___x_6661_);
if (v_isSharedCheck_6671_ == 0)
{
v___x_6666_ = v___x_6661_;
v_isShared_6667_ = v_isSharedCheck_6671_;
goto v_resetjp_6665_;
}
else
{
lean_inc(v_a_6664_);
lean_dec(v___x_6661_);
v___x_6666_ = lean_box(0);
v_isShared_6667_ = v_isSharedCheck_6671_;
goto v_resetjp_6665_;
}
v_resetjp_6665_:
{
lean_object* v___x_6669_; 
if (v_isShared_6667_ == 0)
{
v___x_6669_ = v___x_6666_;
goto v_reusejp_6668_;
}
else
{
lean_object* v_reuseFailAlloc_6670_; 
v_reuseFailAlloc_6670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6670_, 0, v_a_6664_);
v___x_6669_ = v_reuseFailAlloc_6670_;
goto v_reusejp_6668_;
}
v_reusejp_6668_:
{
return v___x_6669_;
}
}
}
}
}
else
{
lean_object* v_a_6672_; lean_object* v___x_6674_; uint8_t v_isShared_6675_; uint8_t v_isSharedCheck_6679_; 
lean_dec_ref(v_handler_6649_);
lean_dec_ref(v_options_6648_);
v_a_6672_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6679_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6679_ == 0)
{
v___x_6674_ = v___x_6657_;
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
else
{
lean_inc(v_a_6672_);
lean_dec(v___x_6657_);
v___x_6674_ = lean_box(0);
v_isShared_6675_ = v_isSharedCheck_6679_;
goto v_resetjp_6673_;
}
v_resetjp_6673_:
{
lean_object* v___x_6677_; 
if (v_isShared_6675_ == 0)
{
v___x_6677_ = v___x_6674_;
goto v_reusejp_6676_;
}
else
{
lean_object* v_reuseFailAlloc_6678_; 
v_reuseFailAlloc_6678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6678_, 0, v_a_6672_);
v___x_6677_ = v_reuseFailAlloc_6678_;
goto v_reusejp_6676_;
}
v_reusejp_6676_:
{
return v___x_6677_;
}
}
}
}
}
else
{
lean_object* v___x_6680_; 
v___x_6680_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6649_, v_options_6648_);
return v___x_6680_;
}
}
else
{
lean_object* v___x_6681_; 
v___x_6681_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6649_, v_options_6648_);
return v___x_6681_;
}
}
else
{
lean_object* v___x_6682_; 
v___x_6682_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6649_, v_options_6648_);
return v___x_6682_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6683_, lean_object* v_handler_6684_, lean_object* v_a_6685_){
_start:
{
lean_object* v_res_6686_; 
v_res_6686_ = l_Lasm_Fetch_serveWith(v_options_6683_, v_handler_6684_);
return v_res_6686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6687_){
_start:
{
lean_object* v___f_6689_; lean_object* v___x_6690_; 
v___f_6689_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6690_ = l_Lasm_Fetch_serveWith(v___f_6689_, v_handler_6687_);
return v___x_6690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6691_, lean_object* v_a_6692_){
_start:
{
lean_object* v_res_6693_; 
v_res_6693_ = l_Lasm_Fetch_serve(v_handler_6691_);
return v_res_6693_;
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
